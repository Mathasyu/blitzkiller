#include <stdio.h>
#include <string.h>

// AUFGABE 2
// Funktion Schaltjahr
/*
ALGORITHMUS 
Schaltjahr()

BESCHREIBUNG
Prüfe, ob es sich um ein Schaltjahr handelt.

DATEN
Das zu prüfende Jahr als GanzZahl: jahr
Ausgabe der Meldung als String: ausgabe

KERN-ALGORITHMUS
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

// Schaltjahr-Funktion
int schaltjahr()
{
 int jahr=0;
 char ausgabe[100] = "";
  
 printf("Dieses Programm errechnet ob eine eingegebene Jahrezahl ein Schaltjahr ist:\n\n");
 printf("Gib die Jahreszahl vierstellig ein:");
 scanf("%d", &jahr);
  if (
      (jahr % 4 == 0 && jahr % 100 != 0) || 
      (jahr % 4 == 0 && jahr % 100 == 0 && jahr % 400 == 0)
      )
    {
        strcpy( ausgabe, "Es handelt sich um ein Schaltjahr" );
    }
    else {
         strcpy( ausgabe, "Es handelt sich NICHT um ein Schaltjahr" );
    }
 printf("\n%s\n", ausgabe);
 return 0;
} // end schaltjahr

// HAUPTPROGRAMM
int main()
{
    schaltjahr();
 return 0;
}//end HAUPTPROGRAMM

