
// Aufgabenblatt prakt01.pdf
// AUFGABE 3
// Funktion Jahresliste
/*
ALGORITHMUS
Jahresliste()

BESCHREIBUNG
Erstellung einer Liste aller Jahre zwischen zwei gegebenen Werten, die ausgibt, ob es sich bei dem Jahr um ein Schaltjahr handelt oder nicht.

DEKLARATION UND DEFINITION DER LOKALEN GRÖSSEN
Übergabeparameter: Natürliche zahl jahr
Natürliche Zahlen:
    Anfangsjahr n,
    Endjahr m
    Zähler i
Rückgabeparameter: --
    --
String:
    ausgabe (Schaltjahr Ja/Nein)


KERN-ALGORITHMUS
Lese n von Benutzer ein
Lese m von Benutzer ein

FUNKTION prüfeJahr(jahr):

    FALLS   (jahr MODULO 4 keinen Restwert hat UND jahr MODULO 100 einen Restwert hat) ODER
            (jahr MODULO 4 keinen Restwert hat UND jahr MODULO 100 keinen Restwert hat UND jahr MODULO 400 keinen Restwert hat)
    DANN
        ausgabe = "jahr  | Ja";
    SONST
        ausgabe = "jahr  | Nein";
    ENDE FALLS
ENDE FUNKTION prüfeJahr()

Ausgabe: "Jahr  |  Schaltjahr ?"
Ausgabe: "---------------------"

FÜR i = n BIS m SCHRITTWEITE 1
    Rufe Funktion prüfeJahr mit Übergabeparameter n auf
ENDE FÜR


ENDE ALGORITHMUS


*/
