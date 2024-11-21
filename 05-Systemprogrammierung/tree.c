/* Beispiel einer C-Implementation von
   EPR Blatt 2 Übung 2 (ASCII-Baum).
   Der Code ist zu didaktischen Zwecken
   sehr ausführlich dokumentiert. */

#include <stdio.h>

int main() {
    int num_read; // Anzahl der gelesenen Zeichen (zur Kontrolle der Nutzereingabe)

    int crown_height; // Höhe der Baumkrone
    int stem_height;  // Höhe des Baumstamms

    // Höhe der Baumkrone in crown_height einlesen
    printf("Hoehe der Baumkrone: ");
    num_read = scanf(" %d", &crown_height); // & nimmt die Speicheraddresse
    if (num_read == 0) {
        printf("Ungueltige Eingabe");
        return 1;
    }

    // Höhe des Baumstamms in stem_height einlesen
    printf("Hoehe des Baumstamms: ");
    num_read = scanf(" %d", &stem_height);  // & nimmt die Speicheraddresse
    if (num_read == 0) {
        printf("Ungueltige Eingabe");
        return 1;
    }

    // Baumkrone zeichnen
    for (int row = 0; row < crown_height; row += 1) {
        // Berechnungen
        int num_spaces = crown_height - row;
        int num_stars  = 2*row + 1;

        // Leerzeichen ausgeben
        for (int i = 0; i < num_spaces; i++) printf(" ");

        // Sternchen ausgeben
        for (int i = 0; i < num_stars; i++)  printf("*");

        // Neue Zeile beginnen
        printf("\n");
    }

    // Baumstamm zeichnen
    for (int row = 0; row < stem_height; row += 1) {
        // Berechnungen
        int num_spaces = crown_height-1;

        // Leerzeichen ausgeben
        for (int i = 0; i < num_spaces; i++) printf(" ");

        // Baumstamm ausgeben und neue Zeile beginnen
        printf("|||\n");
    }

    return 0;
}