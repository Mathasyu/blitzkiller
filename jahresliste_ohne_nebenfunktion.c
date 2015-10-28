#include <stdio.h> // Standard-Include
#include <string.h> // Include der String-Funktionen


// Aufgabenblatt prakt01.pdf
// AUFGABE 3
// Funktion Jahresliste
/*
ALGORITHMUS
Jahresliste()

BESCHREIBUNG
Erstellung einer Liste aller Jahre zwischen zwei gegebenen Werten, die ausgibt, ob es sich bei dem Jahr um ein Schaltjahr handelt oder nicht.

DEKLARATION UND DEFINITION DER LOKALEN GRÖSSEN
Übergabeparameter:
    --
Rückgabeparameter:
    ---
Natürliche Zahlen:
    Anfangsjahr: n,
    Endjahr: m
    Zähler: i
    Jahr für die Fallunterscheidung und die Ausgabe: jahr

String:
    ausgabe (Schaltjahr Ja/Nein)

KERN-ALGORITHMUS
Ausgabe: Info "Dieses Programm gibt aus, ob es sich bei den Jahren zwischen dem angegebenen Anfangs- und Endjahr um ein Schaltjahr handelt:"
Lese n von Benutzer ein
Lese m von Benutzer ein
Ausgabe: "Jahr  |  Schaltjahr ?" für den Tabellenkopf
Ausgabe: "---------------------" für den Tabellenkopf

FÜR i = n BIS m SCHRITTWEITE 1
    jahr = i
    FALLS   (jahr MODULO 4 keinen Restwert hat UND jahr MODULO 100 einen Restwert hat) ODER
            (jahr MODULO 4 keinen Restwert hat UND jahr MODULO 100 keinen Restwert hat UND jahr MODULO 400 keinen Restwert hat)
    DANN
        ausgabe = "  | Ja";
    SONST
        ausgabe = "  | Nein";
    ENDE FALLS
    Ausgabe: jahr und ausgabe
ENDE FÜR

ENDE ALGORITHMUS


*/


// Schaltjahr-Funktion
int jahresliste()
{
 int n=0; // Daten: Jahr Beginn als GanzZahl n (int)
 int m=0; // Daten: jahr  ENDE als GanzZahl m (int)
 int i;
 int jahr=0;
 char ausgabe[100] = ""; // Daten: ausgabe als String (char)
  
 /* Kern Algorithmus */
 printf("Dieses Programm gibt aus, ob es sich bei den Jahren zwischen dem angegebenen Anfangs- und Endjahr um ein Schaltjahr handelt:\n\n");

 // "Einlesen von Anfangs- und Endjahr"
 printf("Gib das Anfangsjahr ein:");
 scanf("%d", &n);
 printf("Nun gib das Endjahr ein:");
 scanf("%d", &m);
 // Ausgabe des Tabellenkopfs
 printf("\nJahr  |  Schaltjahr ?\n");
 printf("---------------------\n");
 //FÜR i = n BIS m SCHRITTWEITE 1
 for(i=n; i<=m;i++) {
      jahr = i;
     // die FALLS SONST Kontrollstruktur (Fallunterscheidung)
     // FALLS
      if (
          (jahr % 4 == 0 && jahr % 100 != 0) ||
          (jahr % 4 == 0 && jahr % 100 == 0 && jahr % 400 == 0)
          )
        {
            strcpy( ausgabe, "  |  Ja" ); // Kopieren des Stringes Teils "Ja" in die Variable ausgabe
        }
        // SONST
        else {
             strcpy( ausgabe, "  |  Nein" );  // da wir die Funktion strcpy (StringCopy) nutzen, müssen wir die
                                              // Stringfunktionen inkludieren #include <string.h>
        }
        // Ende FALLS

        // Ausgabe der Variable ausgabe
     printf("%i %s\n", jahr, ausgabe);
    }
 return 0;
} // end jahresliste

// HAUPTPROGRAMM
int main()
{
    jahresliste();
 return 0;
}//end HAUPTPROGRAMM