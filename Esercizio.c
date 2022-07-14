#include <stdio.h>

//introduzione al Quiz 

int main ()
{
while(1){ //mettiamo while per aevre un ciclo infinito a meno che l'utente non prema b 
printf ("Bevenuti a questo gioco! Le domande saranno sulla geografia. Una risposta è giusta e 2 sono  sbagliate fate attenzione!!\n");// mess introduttivo 

char choice;
printf ("Per inziare una nuova partita premere A per uscire premere B \n"); //scelta giocatore con carattera char 
scanf ("%c",&choice);

if (choice == 'A'||choice == 'a') //IL comando if serve per controllare la scelta
{

char utente[20];//usiamo la variabile char per far scrivere il nome utente con %s per avere una stringa


printf("scegliere il nome utente\n");
scanf("%c", & utente);


int punteggio=0;
int risposta;
do{
printf ("la capitale d'italia?\n");
printf ("1-Parigi\n");
printf ("2-Roma\n");
printf ("3-Madrid\n");
scanf  ("%d",&risposta);

if (risposta == 2)
{
punteggio ++;}
else{printf("Risposta sbagliata\n");}
}while(risposta != 1 && risposta != 2 &&  risposta != 3);

do{
printf ("la capitale della Francia\n");
printf ("1-Roma\n");
printf ("2-Parigi\n");
printf ("3-Madrid\n");
scanf ("%d",&risposta);

if (risposta == 2) 
{
punteggio ++;}
else{printf("Risposta non valida\n");}
}while(risposta != 1 && risposta != 2 && risposta != 3);

printf("%c, il tuo punteggio è: %d\n",utente,punteggio);//il printf messo qui è per avere la possibilità di vedere utente e punteggio delle domande
}

else if (choice == 'B'||choice == 'b')
{printf ("uscita dal gioco");
return 0;}
else
{printf("valore non valido\n");}
}
}
