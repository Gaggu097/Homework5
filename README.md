# Homework5
Programmazione C++


PRIMA PARTE

Si realizzino le classi società calcio, 
calciatore, sponsor identificando le relazioni che sussistono tra di esse.


Una società ha 
una denominazione (char *, stringa C allocata dinamicamente), 
un presidente (stringa C allocata staticamente) e 
una rosa di calciatori rappresentati mediante un vettore C allocato dinamicamente. 

Il calciatore ha 
nome e cognome (oggetti di tipo string),
un numero di maglia (intero) 
e può essere titolare o meno (booleano).


Lo sponsor ha come variabili membro 
il nome e 
il prodotto legato alla sponsorizzazione (entrambi oggetti di tipo string).


La società può 
acquisire o cedere un dato calciatore. 

Nel caso di una acquisizione la rosa dei calciatori si estende aggiungendo l’elemento nella prima posizione libera, 
ma...
del caso di una cessione è necessario cercare il calciatore e effettuare uno shift del vettore. 

L’acquisizione può essere effettuata solo se il calciatore non è già nella rosa della squadra.




 
Inoltre deve essere possibile ordinare il vettore in maniera che i titolari si trovino nelle prime posizioni 
del vettore in ordine di maglia.


Si implementino per tutte la classi l’operatore  <<, e tutte le funzionalità necessarie 
ad una corretta gestione dell’estensione dinamica ove necessarie. 
La stampa nella classe società deve stampare 
tutti i dati, compresi i nomi dei calciatori specificando se sono titolari o meno e il numero di maglia. 

 Per la classe società si implementino inoltre le funzionalità necessarie ad effettuare 
le operazioni sopra descritte e la get del nome. 


La classe calciatore fornisce le get, le set per il numero di maglia e la titolarità, 
e l’overloading dell’operatore ==.

Si sviluppi un programma di test delle funzionalità realizzate. 


Prima della stampa dei dati relativi alla società, 
la rosa dei calciatori deve essere ordinata come sopra.




SECONDA PARTE

Si vuole giocare la schedina… serve pertanto realizzare una classe partita che deve essere in relazione con due società (le due squadre) e tenere traccia della data in cui si gioca la partita, dell’esito della partita (mediante un carattere che assume valori 1,2 o X) e mediante una variabile booleana se la partita è terminata o meno. La schedina è a sua volta una classe che mantiene un vettore di partite allocato staticamente e realizzato utilizzando un oggetto della classe vettore.

Il programma principale istanzia due oggetti di tipo schedina. Il primo è la schedina da giocare, che quindi può essere compilata (dando esito alle partite) solo se nessuna di esse è terminata.

 La seconda riporta la schedina vincente, pertanto può essere compilata solo quando tutte le partite sono terminate.

Il programma deve poter confrontare le due schedine per stabilire se si è fatto 13!

Si realizzino per le classi partita e schedina tutte e sole le funzioni membro necessarie.
