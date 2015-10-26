#include <stdio.h> // Standard-Include
#include <string.h> // Include der String-Funktionen

// Aufgabenblatt prakt01.pdf
// AUFGABE 1
// Funktion Tiefkühlpizza
/*
ALGORITHMUS 
Tiefkühlpizza()

BESCHREIBUNG
Zubereitung einer Tiefkühlpizza

Deklaration der lokalen Daten und Größen
Übernahmeparameter: --
Rückgabeparameter : --
Tiefkühlpizza, Blech, Teller ,Ofen, Kühlschrank


KERN-ALGORITHMUS
Hole Pizza aus Kühlschrank und mache sie auf ein Blech (Weise einer Variable eine Pizza aus dem Kühlschrank-Array zu)
Ofen aufwärmen auf 200 ° (5 Minuten)
Gebe die Pizza in den Ofen
Hole die Pizza nach 8 Minuten aus dem Ofen
Prüfe, ob die Pizza heiss genug register
FALLS Pizza heiss genug
    gebe die Pizza auf einen Teller
SONST weiter aufwärmen
    Zeitangabe, wie lange die Pizza noch drin bleiben soll
ENDE FALLS

Nehme die Pizza aus dem Ofen und lege sie auf einen Teller.


/// Alten Algorithmus
Einlesen von jahr
FALLS   (jahr MODULO 4 keinen Restwert hat UND jahr MODULO 100 einen Restwert hat) ODER
        (jahr MODULO 4 keinen Restwert hat UND jahr MODULO 100 keinen Restwert hat UND jahr MODULO 400 keinen Restwert hat)
DANN
    ausgabe = "Es handelt sich um ein Schaltjahr"
SONST 
    ausgabe = "Es handelt sich NICHT um ein Schaltjahr"
ENDE FALLS

Ausgabe der Meldung ausgabe

ENDE ALGORITHMUS


*/

// Schaltjahr-Funktion --> Pizza funktion draus machen
int schaltjahr()
{
 int jahr=0; // Daten: jahr als GanzZahl (int)
 char ausgabe[100] = ""; // Daten: ausgabe als String (char)
  
 printf("Dieses Programm errechnet ob eine eingegebene Jahrezahl ein Schaltjahr ist:\n\n");
 printf("Gib die Jahreszahl vierstellig ein:");

 /* Kern Algorithmus */
 // "Einlesen von jahr"
 scanf("%d", &jahr);
 // die FALLS SONST Kontrollstruktur (Bedingung)
 // FALLS
  if (
      (jahr % 4 == 0 && jahr % 100 != 0) || 
      (jahr % 4 == 0 && jahr % 100 == 0 && jahr % 400 == 0)
      )
    {
        strcpy( ausgabe, "Es handelt sich um ein Schaltjahr" );
    }
    // SONST
    else {
         strcpy( ausgabe, "Es handelt sich NICHT um ein Schaltjahr" );
    // ENde der Bedingung
    }
    // Ausgabe der Variable ausgabe
 printf("\n%s\n", ausgabe);
 return 0;
} // end schaltjahr

// HAUPTPROGRAMM
int main()
{
    schaltjahr();
 return 0;
}//end HAUPTPROGRAMM

