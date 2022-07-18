import math 

def perimetro():								#Per dichiarare una funzione in python si usa la parola chiave def.
	print("il programma calcola il perimetro di una figura geometrica")
	ciclo = True
	while ciclo:								#Ciclo while per ripetere la funzione se l'utente spinge un tasto errato.Fin tanto che
		print("inserire scelta:")
		print("""-quadrato>>1
-rettangolo>>2
-cerchio>>3
-traingolo>>4
-Uscita Programma>>5""")

		scelta = int(input(">>> "))
		if scelta == 1:							#è un controllo che vincola l'utente a scegliere un opzione
			print("hai selezionato il perimetro del quadrato")	#commento da stampare
			lato = float(input("inserisci il valore del lato del quadrato: "))
			print("il perimetro del quadrato,avente lato" ,lato, "è:", lato * 4)
		elif scelta == 2:
			print("hai selezionato rettangolo")
			base = float(input("inserisci il valore della base: "))
			altezza = float (input("inserisci il valore dell'altezza: "))
			print("il perimetro del rettangolo avente base", base, "e altezza", altezza, "è",base * 2 + altezza * 2)
		elif scelta == 3:
			print("hai selezionato cerchio")
			raggio = float(input("inserisci il valore del raggio: "))
			print("la circoferenza del cerchio avente raggio",raggio, "é", raggio * 2 * math.pi)
		elif scelta == 4:
			print("hai selzionato triangolo")
			print("""che tipo di triangolo è?
-isoscele>>1
-scaleno>>2
-equilatero>>3""")
			scelta_triangolo=0									#ciclo while dentro la scelta del triangolo
			while scelta_triangolo != 1 and  scelta_triangolo != 2 and  scelta_triangolo != 3:


				scelta_triangolo = int(input(">>> "))
				if scelta_triangolo == 1:
					base = float(input("inserisci il valore della base: "))
					lato = float(input("inserisci il valore del lato: "))
					print("Il valore della base è" , base, "il valore del lato è", lato," il perimetro è", lato * 2 + base)
				elif scelta_triangolo == 2:
					lato1 = float(input("inserisci il valore del lato 1: "))
					lato2 = float(input("inserisci il valore del lato 2: "))
					lato3 = float(input("inserisce il valore del lato 3: "))
					print("il perimetro del triangolo scaleno è" , lato1 + lato2 + lato3)
				elif scelta_triangolo == 3:
					lato = float(input("inserisci il valore del lato: "))
					print("il lato del triangolo è" , lato, "il perimetro è", lato*3)
				else:
					print("Premere 1,2,3")

		elif scelta == 5:
			print("Uscita programma")
			ciclo = False

		else:						#se non si verifica la condizione di if interviene else
			print("SCELTA NON VALIDA")

perimetro()							#Descive cosa fa la funzione

