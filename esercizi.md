# Esercizi di programmazione in C
Questo documento contiene le consegne degli esercizi che vi lascio per
esercitarvi sugli argomenti trattati a lezione. Il documento è suddiviso per
argomento. Gli esercizi sono ordinati per ordine progressivo di difficoltà, per
cui gli ultimi esercizi di ogni argomento sono deliberatamente studiati per
essere molto difficili. Come consiglio utile vi posso dire per la soluzione di
un esercizio saranno necessarie le conoscenze degli argomenti che vengono viste
ogni volta a lezione, per cui cercate di focalizzarvi sempre su ciò che avete
visto. Ovviamente man mano che si va avanti, la consocenza degli argomenti
precedenti viene data per scontata.

Tutti gli esercizi devono essere consegnati in formato `.c` (attenzione, non
`.cpp`, `.cxx` o simili!). Inoltre il nome dei file dovrà essere formato nel
modo seguente: `nome_argomento_numero.c` in cui:

1. `nome`: il vostro nome.
2. `argomento`: il nome dell'argomento dell'esercizio.
3. `numero`: il numero dell'esercizio tra i vari esercizi dell'argomento.

Ad esempio, se consegnassi il primo esercizio degli esercizi sui booleani
sarebbe: `matteo_booleani_1.c`.

Come ultima raccomandazione vi prego di cercare per il più possibile di non
utilizzare servizi di LLM come ChatGPT, Claude, Gemini etc. Per quanto possano
sembrare utili per l'apprendimento, in realtà non vi fanno realmente imparare.
Questo perché fornendovi la risposta (anche se commentata linea per linea) non
vi forza ragionare voi stessi sul problema, cosa fondamentale per imparare
realmente a programmare.

--- 

## Booleani

1. Scrivere un programma che, dati in input i valori di 3 lati $a$, $b$ e $c$
stampi a video se il triangolo è un triangolo (un triangolo è tale se la somma
di due suoi lati è maggiore o uguale ad un suo lato).
2. Scrivere un programma che, dati in input i valori di 3 lati a, b e c stampi a
video se il triangolo corrispondente è isoscele, scaleno o equilatero. Nello
specifico:
    * Un triangolo equilatero ha i lati *tutti* uguali.
    * Un triangolo isoscele ha *almeno* due lati della stessa lunghezza.
    * Un triangolo scaleno ha *tutti* i lati diversi.
3. Scrivere un programma che, dati in input due numeri $x$ e $y$ rappresentanti
le coordinate di un punto, indichi con un valore di verità (`true`/`false`) se
questo punto si trova all'interno di un quadrato il cui angolo in basso a
sinistra è posizionato a coordinate $(0, 0)$, mentre quello in alto a destra in
coordinate $(10, 10)$.
4. Scrivere un programma che, dato in input un numero $x$, stampi a video il
suo valore assoluto
$$
|x| = \begin{cases} x & \text{if }(x > 0)\\x& \text{if }(x <= 0)\end{cases}
$$
5. Scrivere un programma che, dati in input due numeri $t$ e $x$, stampi a
video il valore della thresholding $f(x)$.
$$
f(x) = \begin{cases} x & \text{if }(x > t)\\0& \text{altrimenti}\end{cases}
$$
6. Scrivere un programma che, chieda inizialmente in input 3 numeri $x_1, x_2,
x_3$ all'utente. Successivamente, chieda all'utente di inserire un ulteriore
numero tra 1, 2 o 3 rappresentante la scelta dell'operazione da effettuare sui
3 numeri inseriti precedentemente.
    * Se la scelta è 1, il programma stampa a video la *somma* dei 3 numeri.
    * Se la scelta è 2, il programma stampa a video il *prodotto* dei 3 numeri.
    * Se la scelta è 3, il programma stampa a video la *media* dei 3 numeri.
    * Se la scelta *non è compresa* tra 1, 2 o 3, stampa a video un messaggio
      di errore.

## Cicli Iterativi

1. Scrivere un programma che implementi i seguenti punti:
    * Dato un intero $n$ si stampino a video tutti gli
      interi da $0$ a $n$ e poi da $n$ a $0$.
    * Successivamente si stampino a video tutti gli interi *dispari* da $0$ a
      $n$.
    * Stampare a video il fattoriale di $!n = 1 \cdot 2 \cdot 3 \cdot \dots
      \cdots n$.
2. Scrivere un programma che preso in input un valore $n$, stampi a video la
somma di tutti i numeri da 0 a $n$ ($0 + 1 + 2 + \dots + n$)
3. Scrivere un programma che preso in input un valore $n$, stampi a video la
sua tabella moltiplicativa (es. con $n = 5$)

```
		5 x 1 = 5
		5 x 2 = 10 
		5 x 3 = 15
		...
		5 x 10 = 50
```

4. Scrivere un programma che dato un numero intero $n$ stampi un triangolo
composto da asterischi lungo $n$ (es. con $n = 4$).

```
		*
		**
		***
		****
```
