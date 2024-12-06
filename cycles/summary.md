# Riassunto della lezione 

I *cicli* iterativi sono un *costrutto* (istruzione) specifica per ripetere
delle istruzioni finchè una particolare condizione è vera.
Ci sono due cicli iterativi principali:

* `while`
* `for`

Entrambi sono intercambiabili, nello specifico, il costrutto `for` è un caso
specifico del `while`, semplicemente si tratta di una sua versione specifica di
un pattern che compare molte volte in programmazione.

## Il ciclo while
Il costrutto `while` ha la seguente forma:
```c
while(cond) {
    // ...
}
```
Dove `cond` può essere qualsiasi condizione booleana. Il *corpo* del while,
delimitato dalle parentesi graffe, verrà eseguito finché la condizione `cond`
sarà vera.
Ad esempio, il ciclo seguente
```c
while(10 > 5) {
    // ...
}
```
non terminerà mai, poichè la condizione è sempre vera (`true`). Ovviamente,
cicli il cui valore di verità della condizione non cambia mai (come in questo
esempio) sono tendenzialmente poco utili e molto rari in casi applicativi
reali. Tipicamente si tende a modificare delle variabili che compaiono come
condizione booleana all'interno del ciclo, in modo tale che durante
l'esecuzione del ciclo stesso, prima o poi la condizione cambi. Facciamo un
esempio pratico. Supponiamo che il nostro ciclo, anziché iterare un numero
infinito di volte, debba iterare solamente 10 volte. Per far ciò, definiamo una
variabile contatore `int i = 0` che comparirà da qualche parte nella condizione
del ciclo. Successivamente, tale variabile verrà modificata aumentandone di 1
il valore ad ogni iterazione, in modo tale da far si che il ciclo termini dopo
10 iterazioni esatte.
```c
int i = 0;
while(i < 10) {
    // ...
    i++;
}
```
In questo caso, il corpo del ciclo verrà eseguito esattamente 10 volte. Questo
perché il valore di verità della condizione `(i < 10)` risulterà falso per
esattamente 10 volte.

| Valore di `i` |   Valore di `(i < 10)` |
|---------------|------------------------|
| 0             | `true`                 |
| 1             | `true`                 |
| 2             | `true`                 |
| $\vdots$      | $\vdots$               |
| 11            | `false`                |

Questo tipo di cicli while è molto ricorrente in programmazione. Se analizziamo
il codice possiamo notare un *pattern*:

1. `int i = 0`: inizializzazione di una variabile di supporto alle iterazioni
   del ciclo.
2. `i < 10`: condizione necessaria a *ripetere* il corpo del ciclo.
3. `i++`: istruzione che modifica il valore della variabile di supporto alle
   iterazioni del ciclo. 

Questo pattern è infatti così comune che è stato sviluppato un costrutto
apposito che lo implementa: il ciclo `for`.

## Il ciclo for
Come già citato precedentemente, il cilo `while` e il ciclo `for` sono
equivalenti e totatalmente intercambiabili. La struttura del ciclo for è la
seguente:

```c
for(init; cond; mod) {
    // ...
}
```
dove:

* `init`: indica la definizione e l'inizializzazione della variabile di
  supporto al ciclo (equivalente al punto 1. del ciclo `while`).
* `cond`: indica la condizione necessaria a ripetere il ciclo 
  (equivalente al punto 1. del ciclo `while`).
* `mod`: è l'istruzione che verrà eseguita ad ogni iterazione del ciclo 
  (equivalente al punto 3. del ciclo `while`).

Se inseriamo le istruzioni del ciclo while precedentemente otteniamo il
seguente ciclo:
```c
for (int i = 0; i < 10; i++) {
    // ...
}
```
che è totalmente equivalente alla controparte `while` discussa in precedenza.
