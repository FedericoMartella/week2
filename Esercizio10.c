#include <stdio.h>
/*CODICE MIGLIORATO*/


void menu ();
void moltiplica ();
void dividi ();
void ins_string();


int main ()

/*aggiunto un ciclo do while con un variabile di uscita su 'D'L' UTENTE PUO USARE IL PROGRAMMA QUANTE VOLTE VUOLE SENZA USCIRE A MENO CHE NON USI 'D'*/
{

	char scelta = '\0';
    do{
	menu ();
	scanf (" %c", &scelta);

	switch (scelta)
	{
		case 'A':
		moltiplica();
		break;
		case 'B':
                dividi();
                break;
		case 'C':
                ins_string();
                break;
		case 'D':
		return 0;
                default:
                printf("Prova a prendere A,B,C,\n");
 		break;

        }

      }while(scelta !='A' || scelta != 'B' || scelta != 'C');
}


void menu ()
{
	printf ("Benvenuto, sono un assitente digitale, posso aiutarti a sbrigare alcuni compiti\n");
	printf ("Come posso aiutarti?\n");
	printf ("A >> Moltiplicare due numeri\nB >> Dividere due numeri\nC >> Inserire una stringa\nD >> Uscire\n");

}


/*LA VARIABILE FLOAT E' STATA MESSA PER DARE LA POSSIBILITA' ALL'UTENTE DI GESTIRE ANCHE I DECIMALI*/

void moltiplica ()
{

	float  a,b = 0;
	printf ("Inserisci i due numeri da moltiplicare:");
	scanf ("%f", &a);
	scanf ("%f", &b);

	float prodotto = a * b;

/*HO USATO IL %G PER DARE PULIZIA AL NUMERO DECIMALE LEVANDO GLI ZERI DIETRO AL NUMERO*/

	printf ("Il prodotto tra %g e %g e': %g\n", a,b,prodotto);

}

/*STESSO CONCENTO SULLA DIVISIONE MA CON UNA VARIABILE IN PIU' ABBIAMO POSTO CHE SE IL DENUMERATORE E' UGUALE A 0 IL PROGRAMMA richiderà di fare la divisione dall'inizio*/
void dividi ()
{
       float  a,b = 0;
       printf ("Inserisci il numeratore:\n");
       scanf ("%f", &a);
       printf ("Inserisci il denumeratore:\n");
       scanf ("%f", &b);

       if (b == 0)
        {printf("il denumeratore non puo essere 0\n");
        dividi();}
       else{
       float  divisione = a / b;

/*HO UTLIZZATO %G  PER OVVIARE AL PROBLEMA DEI DECIMALI QUANDO SONO '0'*/
       printf ("La divisione tra %g e %g e': %g\n", a,b,divisione);
           }
}




/*SULLA STRINGA NON AVENDO LA SOLUZIONE PER POTER OVVIARE AL PROBLEMA DEL SUPERAMENTO DEI CARATTERI HO HO FATTO UN PRINTF DOVE DICO DI FARE ATTENZIONE ALLA NUMERO DI CARATTERI DA UTILIZZARE*/
void ins_string ()
{
	char stringa[10];
        printf ("Inserisci la stringa(ATTENZIONE NON PIU' DI 10 CARATTERI:)\n");
        scanf ("%s", stringa);
        printf("la tua stringa è:%s\n",stringa);

}

