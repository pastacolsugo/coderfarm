# Variabili

Una variabile è un contenitore, dentro cui possiamo mettere un valore.

### Tipi

Le variabili sono di diversi tipi, in base ai dati che vogliamo memorizzare.

- `int`: numeri interi (1, 2, 14, -100, ...)
- `char`: carattere (a, b, c, !, L, K, ...)
- `float`: numeri decimali (1.0, 4.932, 3.14159265, ...)

### Creazione di una variabile

Esempio con `int`:

``` c++
int main () {
    int pippo;  // creo la variabile
    pippo = 4;  // assegno il valore 4 alla variabile pippo
    
    int pluto = 9;  // creo la variabile e la assegno direttamente

    cout << pippo << endl << pluto << endl;
}
```
Output:

```
4
9
```
----
Esempio con `float`:

``` c++
int main () {
    float paperino;  // creo la variabile
    paperino = 1.2;  // assegno il valore 4 alla variabile pippo
    
    float paperone = 1000000.4123;  // creo la variabile e la assegno direttamente

    cout << paperino << endl << paperone << endl;
}
```
Output:

```
1.2
1000000.4123
```

----
Esempio con `char`:

``` c++
int main () {
    char topolino;  // creo la variabile
    topolino = 'T';  // assegno il valore 4 alla variabile pippo
    
    char basettoni = 'B';  // creo la variabile e la assegno direttamente

    cout << topolino << endl << basettoni << endl;
}
```
Output:

```
T
B
```

# Leggere e scrivere sulla console

Esempio di lettura e scrittura valori:

``` c++
int main () {
    int A, B, C; // creo le variabili
    
    cin >> A >> B >> C; // leggo i valori e li metto nelle variabili
    
    cout << "A: " << A << endl; // stampo la stringa "A: ", il valore di A, mando a capo
    cout << "B: " << B << endl;
    cout << "C: " << C << endl;
}
```
Output:

```
1
2
3
A: 1
B: 2
C: 3
```

Quando eseguo il programma non succede niente: il cursore rimane fermo ad aspettare che io inserisca i numeri.
Quando ho inserito tutti i 3 numeri, il programma prosegue e stampa i valori.


# if

Tradotto letteralmente "se".
Se la condizione è vera, il codice dentro le parentesi graffe viene eseguito, altrimenti no.

Esempio:

```c++
int main () {
    int numeroRuote;
    cout << "Inserisci il numero delle ruote:";
    cin >> numeroRuote;
    
    if (numeroRuote == 4) {
        cout << "auto" << endl;
    }
    
    if (numeroRuote > 4) { 
        cout << "camion" << endl;
    }
    
    if (numeroRuote == 2) {
        cout << "moto" << endl;
    }
}
```
Output:

```
Inserisci il numero di ruote: 4
auto
```

```
Inserisci il numero di ruote: 30
camion
```

```
Inserisci il numero di ruote: 2
moto
```

```
Inserisci il numero di ruote: 3
```


# for

Il for si usa per eseguire piu' volte un pezzo di codice.

``` c++
for (int i=0; i<5; i++) {  // i++ aumenta i di 1
    cout << "ciao, ";
}
```
Output:

```
ciao, ciao, ciao, ciao, ciao,  
```

La struttura base del for è:

``` c++
for (inizializzazione; condizione; incremento)
```
quindi:

``` c++
for (int i=0; i<4; i++) {
    cout << i << endl;
}
cout << "fine" << endl;
```

- crea `i` e la pone a `0`
- controlla la condizione
    - `i<4`?
    - `i` vale `0`, `0<4` allora la condizione è **vera**
    - eseguo il codice dentro al `for`
- stampo il valore di `i`
- incremento `i` (ovvero eseguo `i++`)
    - ora `i` vale `1`
- controllo la condizione
    - `i<4`?
    - `i` vale `1`, `1<4` allora la condizione è **vera**
    - eseguo il codice dentro al `for`
- stampo il valore di `i`
- incremento `i` (ovvero eseguo `i++`)
    - ora `i` vale `2`
- controllo la condizione
    - `i<4`?
    - `i` vale `2`, `2<4` allora la condizione è **vera**
    - eseguo il codice dentro al `for`
- stampo il valore di `i`
- incremento `i` (ovvero eseguo `i++`)
    - ora `i` vale `3`
- controllo la condizione
    - `i<4`?
    - `i` vale `3`, `3<4` allora la condizione è **vera**
    - eseguo il codice dentro al `for`
- stampo il valore di `i`
- incremento `i` (ovvero eseguo `i++`)
    - ora `i` vale `4`
- controllo la condizione
    - `i<4`?
    - `i` vale `4`, `4==4` allora la condizione è **FALSA**
    - NON eseguo il codice dentro al `for`
- eseguo il codice _dopo_ il `for`
    - stampo `fine`
