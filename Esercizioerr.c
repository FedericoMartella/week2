#include <stdio.h>
/* correzione errori */
void menu ();
void moltiplica ();
void dividi ();
void ins_string();


int main () 

{
	char scelta = '\0'; //utilizzo inproprio delle graffe {'\0'}
	menu ();
	scanf ("%c", &scelta); // char = %d non è corretto va usato char %d

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
	}

return 0;

}


void menu ()
{
	printf ("Benvenuto, sono un assitente digitale, posso aiutarti a sbrigare alcuni compiti\n");
	printf ("Come posso aiutarti?\n");
	printf ("A >> Moltiplicare due numeri\nB >> Dividere due numeri\nC >> Inserire una stringa\n");

}


void moltiplica ()
{ /*qui si può ragionare in due modi cambiando o lo short int o %. sul esercizio ho cambiato in int se avessi tenuto short int avrei usato in scanf %hd*/

	int  a,b = 0; //trasformo lo short int in int
	printf ("Inserisci i due numeri da moltiplicare:");
	scanf ("%d", &a); //per gli int la si usa %d e non %f usa per i float.
	scanf ("%d", &b);

	int prodotto = a * b;//Ho cambiato anche qui da short int ad int per avere molti piu numeri da potere moltiplicare

	printf ("Il prodotto tra %d e %d e': %d", a,b,prodotto);
}


void dividi ()
{
        int  a,b = 0;
        printf ("Inserisci il numeratore:");
        scanf ("%d", &a);
	printf ("Inserisci il denumeratore:");
        scanf ("%d", &b);

        int divisione = a / b; //Il sibolo % ci da il resto dell'operazione e non il risultato e' stato cambiato

        printf ("La divisione tra %d e %d e': %d", a,b,divisione);
}





void ins_string () 
{
	char stringa[10];
        printf ("Inserisci la stringa:");
        scanf ("%s", &stringa);
}
