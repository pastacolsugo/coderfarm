# Esercizio 1 - Lezione 11

Crea la lista di adiacenza come:

``` c++
vector <vector <int> > grafo;
```

Leggi i valori *n* e *c*, rispettivamente:

- *n* numero dei nodi
- *c* numero dei collegamenti

Leggi tutti i *c* collegamenti e aggiungerli al grafo.
Ogni collegamento e' rappresentato da due numeri, *p* e *a*:

- *p* il nodo di **partenza** del collegamento
- *a* il nodo di **arrivo** del collegamento

### ESEMPIO

```
7 8    // n nodi e c collegamenti
0 1    // p partenza (0) e a arrivo (1) del primo collegamento
0 3    // p partenza (0) e a arrivo (3) del secondo collegamento
3 1
3 5
3 4
4 5
1 2
2 6
```

#### Suggerimento

Nella cartella della *Lezione 9* trovi le funzioni utili dei `vector`!
