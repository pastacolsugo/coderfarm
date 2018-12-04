# Lezione 10

### Pair

```c++
#include <utility>

pair <int, int> pippo;

pippo.first = 3;
pippo.second = 5;
```

Il pair e' un **tipo di variabile** che contiene due valori. Il tipo dei due valori si specifica tra le parentesi angolari (maggiore e minore).

I due valori sono accessibili con `first` e `second`. First e second sono come delle variabili all'interno del pair.

Notiamo che queste sono variabili (chiamate **campi**) e non funzioni (chiamati **metodi**) tipo `size()`.

> Ovviamente i tipi di `first` e `second` possono essere diversi.

### Vector di pair

Il pair e' un tipo, quindi possiamo creare un `vector` in cui ogni elemento e' un pair.

```c++
#include <vector>
#include <utility>

vector <pair <int, int> > vp;

vp.push_back(make_pair(5, 9));

cout << vp[0].first << ' ' << vp[0].second << endl;
```

> **Attenzione:** ora il tipo di ogni elemento e' un `pair <int, int>`, questo significa che quando vogliamo fare un `push_back(x)`, `x` dovra' essere anch'esso un `pair <int, int>`.

### Costruttori

Ogni volta che creiamo un `pair` o un `vector` (piu' in generale un *oggetto*, sia i `pair` che i `vector` lo sono), possiamo specificare dei parametri tramite parentesi tonda per inizializzare l'oggetto, e spesso e' molto comodo.

###### Costruttore del vector

```c++
vector <int> v1(10);

vector <int> v2(15, 0);

vector <pair <int, int> > v3(14, make_pair(5, 99));
```

Il costruttore del `vector` puo' prendere la dimensione (primo parametro), e un valore (dello stesso tipo di ogni elemento) usato per inizializzare ogni nuovo elemento.

###### Costruttore del pair

```c++
pair <int, int> p(4, 3);
```

Il costruttore del pair semplicemente prende i due valori per `first` e `second`.
