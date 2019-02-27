# Lezione 9

Sopra trovate l'esercizio da fare per la prossima settimana.

Abbiamo creato una calcolatrice con le seguenti operazioni:

- Addizione
- Sottrazione
- Moltiplicazione
- Divisione
- Calcolo del quadrato

Ogni operazione e' stata implementata come funzione, per semplificare il codice.

In aggiunta, la calcolatrice tiene traccia delle operazioni eseguite e su richiesta puo' stamparle per l'utente.

Abbiamo implementato (= scritto in codice) la memorizzazione delle operazioni con 4 `vector`: `operando1`, `operando2`, `segno` e `risultati`.

I due vector `operando` tengono in memoria i due operandi, il vector `segno` e' di tipo `char` e contiene il segno dell'operazione (`'+'`, `'-'`, `'*'`, `'/`').

Ogni volta che viene eseguito un calcolo, tutti e 4 i dati sono salvati nei rispettivi `vector`, tramite la funzione `push_back()`.

Siccome aggiungiamo un elemento alla volta, nella posizione `x` di ogni `vector` avremo i dati della `x-esima` operazione eseguita.

Eg: 
	Tutti i dati nella posizione x si riferiscono alla stessa operazione.
	

	operando1 : [ 4,  ...,  15,  ...,   3,    9,   11 ];
	segno     : [ +,  ...,   +,  ...,   *,    +,    - ];
	operando2 : [ 2,  ...,   1,  ...,   3,    2,    9 ];
	risultato : [ 6,  ...,  16,  ...,   9,   11,    2 ];
	posizione :   0   ...    x   ...  n-3   n-2   n-1 


# Vector

I `vector` sono come degli array, ma hanno delle funzioni interne piu' comode e semplici da usare.

La caratteristica piu' importante dei vector e' che non sono a dimensione fissa, come gli array, ma la loro dimensione puo' variare.

#### Libreria `vector`

Per poter usare i `vector` devi includere la libreria apposita!

``` c++
#include <vector>
```

#### Dichiarazione `vector`

Per esempio, dichiaro un `vector` di interi:

``` c++
vector <int> pippo;
```

#### Funzioni interne dei `vector` (metodi)

``` c++
pippo.push_back(val);   // aggiunge val in fondo 
pippo.pop_back();       // toglie l'ultimo elemento
pippo.size();           // mi dice quanti elementi ci sono nel vector
pippo.resize(n);        // cambia la dimensione del vector a n
pippo.resize(n, val);   // cambia la dimensione del vector a n, tutti i valori che aggiunge saranno val
pippo.empty();          // true se il vector e' vuoto, false se c'e' qualcosa
pippo.clear();          // svuota il vector
```

