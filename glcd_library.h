/**
 * @mainpage Allgemeine Grafikbibliothek für Monochrome, Graustufen und Farbdisplays
 * @brief Die Bibliothek bietet eine reiche Anzahl an grafischen Funktionen für eine vielzahl
 * von Displays. Farbdisplays werden nur bis 256 Farben unterstützt. Viele Funktionen wurden
 * dank http://members.chello.at/easyfilter/bresenham.html umgesetzt.
 *
 * @version 1.0
 * -Offizieller release der Bibliothek
 *
 * @author gfcwfzkm
 * @date 08.11.2019
 */

/** 
 * @file glcd_library.h
 * @brief Headerdatei der GLCD-Grafikbibliothek
 *
 * Die Bibliothek bietet eine reiche Anzahl an grafischen Funktionen für eine vielzahl
 * von Displays. Farbdisplays werden nur bis 256 Farben unterstützt.
 */

#ifndef GLCD_LIBRARY_H
#define	GLCD_LIBRARY_H

#include <avr/io.h>
#include <avr/pgmspace.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <stdio.h>
#include <math.h>
#include <assert.h>

/* Ab hier die Low-Level Ansteuerund des Displays einfügen und die Bibliothek konfigurieren */
#include "cdisp.h"

/**
 * @brief Displaybreite (Pixels)
 */
#define GLCD_WIDTH			CDISP_XSIZE
/**
 * @brief Displayhöhe (Pixels)
 */
#define GLCD_HEIGHT			CDISP_YSIZE


/**
 * @brief Schreibe-Funktion. Setzt die Position auf dem Display und beschreibt das jeweilige Pixel. Absolut notwenig zur Anwendung der Bibliothek.
 */
#define GLCD_INTE_SETXY(x,y,c)		cdisp_writeXY(x,y,c)
/**
 * @brief Lese-Funktion. Setzt die Position auf dem Display und liest das jeweilige Pixel.Nur bedingt notwendig.
 */
#define GLCD_INTE_GETXY(x,y)		cdisp_readXY(x,y)

/**
 * @brief Reine Schreib-Funktion. Nur empfehlenswert, wenn das Display die X-Adresse automatisch erhöht.
 */
#define GLCD_INTE_SETPIXEL(c)	cdisp_write(c);

/* Bis hier Display mit der Low-Level Funkionen und Parameter konfigurieren */

/**
 * @brief Grundwinkel, damit 0° "Oben" ist ?
 */
#define DEFAULT_ANGLE_OFFSET -90
/**
 * @brief Anzahl Schritte für einen vollen Kreis. Benötigt von \a glcd_fillArc().
 */
#define DEFAULT_ARC_ANGLE_MAX 360

/**
 * @brief Standard Textgrösse
 */
#define GLCD_DEFAULT_TEXTSIZE		1
/**
 * @brief Standard Textvordergrundfarbe
 */
#define GLCD_DEFAULT_TEXTFGCOLOR	0xFF
/**
 * @brief Standard Texthintergrundfarbe
 */
#define GLCD_DEFAULT_TEXTBGCOLOR	0x00

/**
 * @brief Transparenter Texthintergrund
 */
#define GLCD_BG_TRANSPARENT	0x100

/**
 * @brief Ein Pixel setzten
 * Setzt ein Pixel. Falls \a GLCD_INTE_SETPIXEL() definiert ist, wird ggf. nicht bei jedem Aufruf die Position neu forciert (Display Autoincrement)
 * @param x0 X-Achse
 * @param y0 Y-Achse
 * @param color Farbe
 */
void glcd_setXY(uint16_t x0, uint16_t y0, uint8_t color);

/**
 * @brief Ein Pixel lesen
 * Liest ein Pixel. Falls \a GLCD_INTE_SETPIXEL() definiert ist, wird die interne x- und y-Variable zurückgesetzt.
 * @param x0 X-Achse
 * @param y0 Y-Achse
 * @return Farbe
 */
uint8_t glcd_getXY(uint16_t x0, uint16_t y0);

/**
 * @brief Eine Linie zeichnen
 * Zeichnet eine Linie zwischen zwei Punke / Koordinaten.
 * @param x0 X-Achse des ersten Punktes
 * @param y0 Y-Achse des ersten Punktes
 * @param x1 X-Achse des zweiten Punktes
 * @param y1 Y-Achse des zweiten Punktes
 * @param color Farbe
 */
void glcd_line(uint16_t x0, uint16_t y0, uint16_t x1, uint16_t y1, uint8_t color);

/**
 * @brief Eine dicke Linie zeichnen
 * Zeichnet eine dicke Linie zwischen zwei Punke / Koordinaten.
 * @param x0 X-Achse des ersten Punktes
 * @param y0 Y-Achse des ersten Punktes
 * @param x1 X-Achse des zweiten Punktes
 * @param y1 Y-Achse des zweiten Punktes
 * @param th Dicke der Linie
 * @param color Farbe
 */
void glcd_line_thick(uint16_t x0, uint16_t y0, uint16_t x1, uint16_t y1, uint8_t th, uint8_t color);

/**
 * @brief Eine gewinkelte Linie zeichnen
 * Zeichnet eine Linie von einm Punkt aus, mit einer gewissen Länge und Offset in die Richtung des angegebenen Winkels.
 * @param x0 X-Achse des ersten Punktes
 * @param y0 Y-Achse des ersten Punktes
 * @param angle Winkel der Linie
 * @param start Offset / Ab wieviele Pixel des Startpunktes die Linie gezeichnet werden.
 * @param length Länge
 * @param color Farbe
 */
void glcd_line_angle(uint16_t x0, uint16_t y0, float angle, uint16_t start, uint16_t length, uint8_t color);

/**
 * @brief Eine gewinkelte, dicke Linie zeichnen
 * Zeichnet eine dicke Linie von einm Punkt aus, mit einer gewissen Länge und Offset in die Richtung des angegebenen Winkels.
 * @param x0 X-Achse des ersten Punktes
 * @param y0 Y-Achse des ersten Punktes
 * @param angle Winkel der Linie
 * @param start Offset / Ab wieviele Pixel des Startpunktes die Linie gezeichnet werden.
 * @param length Länge
 * @param th Dicke
 * @param color Farbe
 */
void glcd_line_angle_thick(uint16_t x0, uint16_t y0, float angle, uint16_t start, uint16_t length, uint8_t th, uint8_t color);
/**
 * @brief Ein Rechteck zeichnen
 * Zeichnet ein Rechteck, die Koordinaten stellen die obere, linke Ecke dar.
 * @param x0 X-Achse des Eckpunktes
 * @param y0 Y-Achse des Eckpunktes
 * @param w Breie / Weite des Rechteckes
 * @param h Höhe des Rechteckes.
 * @param color Farbe
 */
void glcd_rectangle(uint16_t x0, uint16_t y0, uint16_t w, uint16_t h, uint8_t color);

/**
 * @brief Ein gefülltes Rechteck zeichnen
 * Zeichnet ein  gefülltes Rechteck, die Koordinaten stellen die obere, linke Ecke dar.
 * @param x0 X-Achse des Eckpunktes
 * @param y0 Y-Achse des Eckpunktes
 * @param w Breie / Weite des Rechteckes
 * @param h Höhe des Rechteckes.
 * @param color Farbe
 */
void glcd_rectangle_fill(uint16_t x0, uint16_t y0, uint16_t w, uint16_t h, uint8_t color);

/**
 * @brief Ein abgerundetes Rechteck zeichnen
 * Zeichnet ein Rechteck mit runden Ecken, die Koordinaten stellen die obere, linke Ecke dar.
 * @param x0 X-Achse des Eckpunktes
 * @param y0 Y-Achse des Eckpunktes
 * @param w Breie / Weite des Rechteckes
 * @param h Höhe des Rechteckes.
 * @param r Radius der abgerundeten Ecken
 * @param color Farbe
 */
void glcd_rectangle_round(uint16_t x0, uint16_t y0, uint16_t w, uint16_t h, uint16_t r, uint8_t color);
/**
 * @brief Ein gefülltes, abgerundetes Rechteck zeichnen
 * Zeichnet ein gefülltes Rechteck mit runden Ecken, die Koordinaten stellen die obere, linke Ecke dar.
 * @param x0 X-Achse des Eckpunktes
 * @param y0 Y-Achse des Eckpunktes
 * @param w Breie / Weite des Rechteckes
 * @param h Höhe des Rechteckes.
 * @param r Radius der abgerundeten Ecken
 * @param color Farbe
 */
void glcd_rectangle_round_fill(uint16_t x0, uint16_t y0, uint16_t w, uint16_t h, uint16_t r, uint8_t color);

/**
 * @brief Ein Dreieck zeichnen
 * Zeichnet ein Dreieck.
 * @param x0 X-Achse des Eckpunktes
 * @param y0 Y-Achse des Eckpunktes
 * @param x1 X-Achse des Eckpunktes
 * @param y1 Y-Achse des Eckpunktes
 * @param x2 X-Achse des Eckpunktes
 * @param y2 Y-Achse des Eckpunktes
 * @param color Farbe
 */
void glcd_triangle(uint16_t x0, uint16_t y0, uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, uint8_t color);

/**
 * @brief Ein gefülltes Dreieck zeichnen
 * Zeichnet ein gefülltes Dreieck.
 * @param x0 X-Achse des Eckpunktes
 * @param y0 Y-Achse des Eckpunktes
 * @param x1 X-Achse des Eckpunktes
 * @param y1 Y-Achse des Eckpunktes
 * @param x2 X-Achse des Eckpunktes
 * @param y2 Y-Achse des Eckpunktes
 * @param color Farbe
 */
void glcd_triangle_fill(uint16_t x0, uint16_t y0, uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, uint8_t color);

/**
 * @brief Ein Kreis zeichnen
 * Zeichnet ein Kreis, Koordinaten sind in der Mitte des Kreises.
 * @param x0 X-Achse des Kreismittelpunktes
 * @param y0 Y-Achse des Kreismittelpunktes
 * @param r Radius
 * @param color Farbe
 */
void glcd_circle(uint16_t x0, uint16_t y0, uint16_t r, uint8_t color);

/**
 * @brief Ein gefüllter Kreis zeichnen
 * Zeichnet ein gefüllter Kreis, Koordinaten sind in der Mitte des Kreises.
 * @param x0 X-Achse des Kreismittelpunktes
 * @param y0 Y-Achse des Kreismittelpunktes
 * @param r Radius
 * @param color Farbe
 */
void glcd_circle_fill(uint16_t x0, uint16_t y0, uint16_t r, uint8_t color);

/**
 * @brief Ein gefüllter, dicker Kreis zeichnen
 * Zeichnet ein gefüllter, dicker Kreis, Koordinaten sind in der Mitte des Kreises.
 * @param x0 X-Achse des Kreismittelpunktes
 * @param y0 Y-Achse des Kreismittelpunktes
 * @param r Aussenradius
 * @param th Liniendicke
 * @param color Farbe
 */
void glcd_circle_thick(uint16_t x0, uint16_t y0, uint16_t r, uint16_t th, uint8_t color);

/**
 * @brief Eine Ellipse zeichnen
 * Zeichnet eine einfache Ellipse. Koordinaten sind für den rechten, oberen Eckpunkt.
 * @param x0 X-Achse des Eckpunktes
 * @param y0 Y-Achse des Eckpunktes
 * @param w Breite der Ellipse
 * @param h Höhe der Ellipse
 * @param color Farbe
 */
void glcd_ellipse(uint16_t x0, uint16_t y0, uint16_t w, uint16_t h, uint8_t color);

/**
 * @brief Ein semi-gefüllter / dicker Bogen zeichnen
 * Zeichnet ein semi-gefüllter / dicker Bogen, Koordinaten sind in der Mitte des Bogens.
 * @param x0 X-Achse des Kreismittelpunktes
 * @param y0 Y-Achse des Kreismittelpunktes
 * @param r Aussenradius
 * @param th Liniendicke
 * @param sAngle Startwinkel des Bogens
 * @param eAngle Endwinkel des Bogens
 * @param color Farbe
 */
void glcd_arc_thick(uint16_t x0, uint16_t y0, uint16_t r, uint16_t th, float sAngle, float eAngle, uint8_t color);

/**
 * //4.3k
 */
void glcd_quad_bezier(int16_t x0, int16_t y0, int16_t x1, int16_t y1, int16_t x2, int16_t y2, uint8_t color);

void glcd_quad_rational_bezier(int16_t x0, int16_t y0, int16_t x1, int16_t y1,int16_t x2, int16_t y2, float w, uint8_t color);


// ~12.6k
void glcd_cubic_bezier(int16_t x0, int16_t y0, int16_t x1, int16_t y1,int16_t x2, int16_t y2, int16_t x3, int y3, uint8_t color);

/**
 * @brief Winkel-Offset neu einstellen (Standard -90°)
 * Zeichnet ein semi-gefüllter / dicker Bogen, Koordinaten sind in der Mitte des Bogens.
 * @param angle Neuer Offset-Winkel
 */
void glcd_setAngleOffset(int16_t angle);

/**
 * @brief Arc-Schitte definieren
 * Definiert die Anzahl Schritte, damit \a glcd_fillArc() einen ganzen Kreis zeichnet. \n
 * 100 würde bedeuten, das ein kompletter Bogen nur vom Winkel 0 - 99 gehen würde.
 * @param angle_steps Anzahl Schitte
 */
void glcd_setArcAngleMax(float angle_steps);

/**
 * @brief Löscht den Displayinhalt
 * Löscht den gesamten Displayinhalt mit der angegebenen Farbe
 * @param color Farbe
 */
void glcd_clear(uint8_t color);

/**
 * @brief Invertieren
 * Invertiert die Farben eines gewissen Teil des Displays
 * @param x0 Start-Position oben-links
 * @param y0 Start-Position oben-links
 * @param w Breite des zu invertierenden Inhaltes
 * @param h Höhe des zu invertierenden Inhaltes
 */
void glcd_invert(uint16_t x0, uint16_t y0, uint16_t w, uint16_t h);

/**
 * @brief Ein Bild aufs Display laden
 * Lädt ein 1-Bit Bild vom Programmspeicher auf das Display auf der angegebenen Koordinaten. \n
 * Das Bild muss per Progmem im Flash abgelegt sein.
 * @param x0 Start-Position oben-links
 * @param y0 Start-Position oben-links
 * @param image Pointer zum im Flash hinterlegtem Bild.
 * @param w Breite des Bildes 
 * @param h Höhe des Bildes 
 * @param fgcolor Vordergrundfarbe des Bildes
 * @param bgcolor Hintergrundfarbe des Bildes oder \a GLCD_BG_TRANSPARENT für 'Transparent' verwenden.
 */
void glcd_load_imageXY_progmem(uint16_t x0, uint16_t y0, const char *image, uint16_t w, uint16_t h, uint8_t fgcolor, uint16_t bgcolor);

/**
 * @brief Ein XBitmap (XBM) Bild aufs Display laden
 * Lädt ein 1-Bit Bild vom Programmspeicher auf das Display auf der angegebenen Koordinaten. \n
 * Das Bild muss per Progmem im Flash abgelegt sein. .XBM Bilder sind einfach umbenannte .h C-Dateien. Programme wie GIMP oder Web-Converter können Monochrome .bmp Bilder in .xbm umwandeln.
 * @param x0 Start-Position oben-links
 * @param y0 Start-Position oben-links
 * @param image Pointer zum im Flash hinterlegtem Bild.
 * @param w Breite des Bildes 
 * @param h Höhe des Bildes 
 * @param fgcolor Vordergrundfarbe des Bildes
 * @param bgcolor Hintergrundfarbe des Bildes oder \a GLCD_BG_TRANSPARENT für 'Transparent' verwenden.
 */
void glcd_drawXBitmap(uint16_t x0, uint16_t y0, const uint8_t bitmap[], uint16_t w, uint16_t h, uint8_t fgcolor, uint16_t bgcolor);

void glcd_setTextBGcolor(uint16_t bgcolor);
void glcd_setTextFGcolor(uint8_t fgcolor);
void glcd_setTextSize(uint8_t size);
void glcd_char(uint16_t x0, uint16_t y0, char c, uint8_t fgcolor, uint16_t bgcolor, uint8_t size);
void glcd_print(uint16_t x0, uint16_t y0,char *character);
void glcd_print_progmem(uint16_t x0, uint16_t y0,const char *character);
#define glcd_print_P(x0,y0,__s)	glcd_print_progmem(x0,y0,PSTR(__s))

void glcd_printf(uint16_t x0, uint16_t y0, char *fmt, ...);
void glcd_printf_progmem(uint16_t x0, uint16_t y0, const char *fmt, ...);
#define glcd_printf_P(x0,y0,__s, ...)	glcd_printf_progmem(x0,y0,PSTR(__s), ...)

#endif	/* XC_HEADER_TEMPLATE_H */