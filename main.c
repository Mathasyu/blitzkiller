
// Aufgabenblatt prakt01.pdf
// AUFGABE 1
// Funktion Tiefkühlpizza
/*
ALGORITHMUS 
Tiefkühlpizza()

BESCHREIBUNG
Bereite eine Tiefkühlpizza zu.

DEKLARATION UND DEFINITION DER LOKALEN GRÖSSEN
Natürliche Zahlen:
Die angegebene Backzeit: backzeit1 in Minuten
Die weitere Backzeit: backzeit2 in Sekunden
Temparatur des Ofens:  ofentemparatur

KERN-ALGORITHMUS
Hole Pizza aus dem Kühlschrank
Lege die Pizza auf ein Backblech
// Herd auf 200° vorheizen (Ofenobjekt)
Beginne Ofen aufheizen
WIEDERHOLE
    Prüfe Temparatur des Ofens
SOLANGE (ofentemparatur >= 200)

Pizza in den Ofen legen
Einlesen der Garzeit


WIEDERHOLE
    Backe Pizza
SOLANGE (Garzeit < angegebene Garzeit)

WIEDERHOLE
    Prüfe, ob die Pizza gut ist
    Einlesen Pizzastatus

    FALLS (Pizzastatus == nicht OK)
    DANN
        Einlesen der weiteren Backzeit

        WIEDERHOLE
            Backe Pizza
        SOLANGE (Garzeit < weiteren Garzeit)
    ENDE FALLS
SOLANGE (Pizzastatus == nicht OK)

Pizza aus Ofen nehmen
Pizza auf Teller legen


ENDE ALGORITHMUS


*/
