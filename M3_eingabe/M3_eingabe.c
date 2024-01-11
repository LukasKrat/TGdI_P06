// *********************************************************************
// M3_eingabe.c									Version 05.01.2021_S hpw
// Daten mit getchar() und scanf() einlesen
//
// Lesen Sie einzelne Zeichen mit getchar() und und Zahlen mit scanf()
// ein und geben Sie diese aus.
// Hinweise: while (getchar() != '\n'); leert den Zeichenbuffer
//           scanf() funktioniert nicht nur für Zahlen...
// *********************************************************************
#include <stdio.h>						    // Header fuer Ein-/Ausgaben

int main(void){
																		// Variable deklarieren
	printf("Bitte geben Sie einen Buchstaben ein:\n");					// Ausgabe Text
																		// Zeichen einlesen
	while (getchar() != '\n');											// Zeichenbuffer leeren
																		// Ausgabe Zeichen

																		// Variable deklarieren
	printf("\nBitte geben Sie eine Zahl ein:\n");						// Ausgabe Text
																		// Zahl einlesen
																		// Ausgabe Zahl
																		// Zeichenbuffer leeren

	return 0;								// Programmende
}
