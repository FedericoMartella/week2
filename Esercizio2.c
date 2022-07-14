#include <stdio.h>

int main(){

int  a;   //dichiarazione delle variabili
int  b;
float media;


printf("Digita il primo  numero:\n"); //Comando per l'utente

scanf ("%d",&a);

printf("Digita il secondo numero\n");

scanf("%d",&b);

media = (float)(a+b)/2; //Media Artmetica 


printf ("la media è: %g\n", media); //Stampa della media
}

