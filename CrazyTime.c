
#include <stdio.h>
#include <string.h>
int main (){


char user[50];

printf("Crazy time\n");

printf("Sono tre semplici domande per capire la tua personalità.\n");

printf("Digita il nome utente per iniziare a giocare\n");

scanf ("%s",& user);{

printf("Benvenuto, %s cominciamo!\n",user);}

char risposta[50];

printf("Il tuo colore preferito?\n");

printf("Blu\n");

printf("Giallo\n");

printf("Rosso\n");

scanf("%s",& *risposta);

if (strcmp(risposta,"blu") == 0){

printf("sei una persona a cui piace il mare\n");
}
else if (strcmp(risposta,"giallo\n") == 0) {

printf("sei una persona a cui piace il sole\n");
}
else if (strcmp(risposta,"rosso") == 0) {

printf("Sei una persona a cui piace il sangue\n");
}

else {
printf("Giulio e stefano sono due cacacazzi");
}

char risposta3[50];

printf("Il tuo supereroe preferito?\n");

printf("thor\n");

printf("spiderman\n");

printf("ironman\n");

scanf("%s",& *risposta3);

if (strcmp(risposta3,"thor") == 0){

printf("Martelloooo\n");
}
else if (strcmp(risposta3,"spiederman\n") == 0) {

printf("Zia may è sempre piu fica\n");
}

else if (strcmp(risposta3,"ironman\n") == 0) {

printf("ti amo 3000");
}

char risposta2[50];

printf("Quale la tua slot preferita?\n");

printf("crazyTime\n");

printf("Gorilla\n");

printf("chachacha\n");

scanf("%s",& *risposta2);

if (strcmp(risposta2,"crazyTime") == 0){

printf("sei una persona a cui piace la droga\n");
}

else {printf("devi andare a fare in culo\n");

}
printf ("Alle domande hai risposto = %s\n %s\n %s\n " , risposta, risposta3,risposta2);

}


