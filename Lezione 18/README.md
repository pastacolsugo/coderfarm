# Javascript

Javascript e' un linguaggio di scripting molto fico. Nasce per essere usato principalmente nel web ma si evolve ed evade al browser, finendo sui computer tramite NodeJS (l'interprete Javascript per il computer, tipo il compilatore del c++).


La sintassi di Javascript e' molto simile al C++.

Per lavorare con Javascript abbiamo usato i pannelli Javascript e Console di [JSbin.com](https://jsbin.com/?js,console).

### Variabili `var`

In C++ abbiamo i tipi (`int`, `double`, `char`, ...), in Javascript c'e' un tipo solo che fa tutto: `var`.

`var` puo' contenere interi, numeri con la virgola, caratteri, stringhe, array, array di array, oggetti, funzioni, etc.

### `console.log()`

E' praticamente il `cout` di Javascript, stampa su console.

```javascript
var nome1 = "Uno";
var nome2 = "Due";
console.log('Ciao' + nome + 'io sono' + nome2);
```

### Stringhe - `'` oppure `"` ?

E' uguale! Quello che preferisci, il senso del codice non cambia, sono sempre stringhe.

[I single-quote `'` sono piu' usati](https://bytearcher.com/articles/single-or-double-quotes-strings-javascript/).

```javascript
var nome = 'ugo'; // apici singoli
var cognome = "baroncini"; // doppi apici
```

### Array

Gli array si dichiarano con le parentesi quadre. La modalita' di accesso e' la stessa del C++ (come in praticamente ogni altro linguaggio, con le parentesi quadre e l'indice).

```javascript
var sedia = [1, 3, 2, 4, 3, 3, 6, 5, 6, 8, 10];

console.log(sedia[3]);
```

### Callback

In Javascript e' fondamentale il concetto di callback, l'idea e' questa: una funzione prende come parametro un'altra funzione (la callback), che viene eseguita in base all'operazione che si vuole fare, ad esempio alla fine del processo o su tutti gli elementi.

Eg:

```javascript
var sedia = [1, 2, 3];		// array

function stampaValore(val) {	// funzione callback
	console.log(val);
}

sedia.forEach(stampaValore);		// forEach e' una funzione degli array che esegue la callback su ogni elemento, passando lo stesso come parametro
```

Risultato:

```
1
2
3
```

La funzione forEach, per ogni elemento di `sedia`, chiama la funzione callback `stampaValore` con l'elemento come parametro.

Il codice equivalente sarebbe:

```javascript
for (var i = 0; i < sedia.length; i++) {
	stampaValore(sedia[i]);
}	
```

#### Nota sulle Callback

L'uso tipico delle callback NON E' scrivendo la callback da una parte e passarla alla funzione in un secondo momento, ma scrivere la callback _direttamente_ in linea.

Esempio:

```javascript
var sedia = [1, 2, 3];

// scrivo la callback direttamente quando chiamo la funzione forEach
sedia.forEach(function (val) {	      // nota che la callback non ha un nome
	console.log(val);	
});
```

## Funzioni standard sugli Array

I titoli blu sono link, guarda il reference: e' in italiano e spiegato molto bene il funzionamento. Nel reference, sulla sinistra ci sono svariati metodi che non abbiamo visto, che ti invito a provare e sperimentare.

### [`Array.forEach()`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Array/forEach)

Come visto nell'esempio sulle callback, la funzione `forEach` degli array prende come parametro una callback e la esegue su ogni elemento dell'array.

Ogni funzione che richiede una callback, in genere specifica nella documentazione che parametri verranno passati alla callback e cosa viene fatto con il _return-value_ della callback.

`forEach` passa alla sua callback fino a 3 parametri: il valore dell'elemento dell'array che sto considerando, (opzionale) l'indice dell'elemento, (opzionale) l'array.

#### [`Array.reduce()`](https://developer.mozilla.org/it/docs/Web/JavaScript/Reference/Global_Objects/Array/indexOf)

#### [`Array.indexOf()`](https://developer.mozilla.org/it/docs/Web/JavaScript/Reference/Global_Objects/Array/indexOf)

#### [`Array.filter()`](https://developer.mozilla.org/it/docs/Web/JavaScript/Reference/Global_Objects/Array/filter)

#### [`Array.slice()`](https://developer.mozilla.org/it/docs/Web/JavaScript/Reference/Global_Objects/Array/slice)


## Esercizi

* Apri Chrome o Firefox, __vietato usare edge/explorer__, e vai al sito [example.com](example.com). Usa `F12` (\*) per aprire la console da developer. In alto seleziona "Console" e scrivi il seguente comando:

```document.querySelector('h1').innerText = 'CoderFarm';```

Nota che appena esegui il comando, il titolo __Example Domain__ cambia in __CoderFarm__. Se vuoi riprovare basta ricaricare la pagina e tornera' come all'inizio.

* Usa la funzione `Array.reduce()` per trovare l'elemento di valore massimo in un array di interi	.

* Dato un array, stampane la lunghezza con [`Array.length`](https://developer.mozilla.org/it/docs/Web/JavaScript/Reference/Global_Objects/Array/length), aggiungi qualche elemento alla fine con [`Array.push()`](https://developer.mozilla.org/it/docs/Web/JavaScript/Reference/Global_Objects/Array/push) e prova a toglierli con [`Array.pop()`](https://developer.mozilla.org/it/docs/Web/JavaScript/Reference/Global_Objects/Array/pop).


* Scopri cosa fa [`Array.join()`](https://developer.mozilla.org/it/docs/Web/JavaScript/Reference/Global_Objects/Array/pop) e prova a usarla su un array ;)


* Usa la funzione [`Array.concat()`](https://developer.mozilla.org/it/docs/Web/JavaScript/Reference/Global_Objects/Array/concat) per concatenare due array. Nota che si possono passare anche piu' array in una volta sola e verranno tutti concatenati.


* Verifica che un array a tuo piacimento contenga un elemento, usando la funzione [`Array.includes()`](https://developer.mozilla.org/it/docs/Web/JavaScript/Reference/Global_Objects/Array/includes).


