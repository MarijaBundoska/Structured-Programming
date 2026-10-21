## Exercise 4 - Counting Consecutive Occurrences of a String

An initial string with a maximum length of 20 characters is entered from standard input, followed by an integer `N` (`N <= 100`). Then, `N` sentences, each with a maximum length of 150 characters, are entered, one per line.

For each sentence, determine the maximum number of consecutive occurrences of the initial string. Uppercase and lowercase letters must be treated as different characters.

Finally, generate a report indicating how many sentences contain 0, 1, 2, ..., up to `n` consecutive occurrences of the initial string, where `n` is the maximum number of consecutive occurrences found in any sentence.

The counting of consecutive occurrences must be implemented in a **separate function**.

Each output line contains two numbers: the first indicates the number of consecutive occurrences, and the second indicates how many sentences have exactly that number of consecutive occurrences.


## Задача 4 - Броење на последователни појавувања на стринг

Од стандарден влез се внесува почетна текстуална низа (стринг) со максимална должина од 20 знаци. Потоа се внесува цел број `N` (`N <= 100`), а во продолжение се внесуваат `N` текстуални низи (реченици), секоја во нов ред, со максимална должина од 150 знаци.

За секоја од внесените реченици треба да се одреди колку пати најмногу последователно се појавува почетниот стринг, при што треба да се прави разлика помеѓу мали и големи букви.

На крај треба да се генерира извештај во кој ќе се наведе колку реченици имаат 0, 1, 2, ..., до `n` последователни појавувања на почетниот стринг, каде што `n` е најголемиот број на последователни појавувања во некоја од речениците.

Броењето на последователните појавувања на почетниот стринг треба да се реализира во **посебна функција**.

Во секој ред од излезот се печатат два броја: првиот го означува бројот на последователни појавувања, а вториот означува во колку реченици се појавува почетниот стринг точно толку пати последователно.



## Test Cases


### Test Case 1

**Input:**
```text
2024
4
Srekjna Nova Godina!
Srekjkna Nova 20242024 godina! Mnogu zdravje, uspeh i srekja vo 2024ta.
20242024 e novata godina koja ni pretstoi, Da bide ispolneta so radost i srekja. Srekjna Nova 202420242024 godina!
Uste edna nova godina ni dojde.
```
**Expected output:**

```text
0: 2
1: 1
2: 0
3: 1
```




### Test Case 2

**Input:**
```text
rodenden
6
Sreken rodendenrodendenrodenden!
Sreken neka e, mnogu zdravje i uspesi!
Ajde neka e sreken Rodendenot! Ovoj rodendenrodenden da bide najsreken.
Rodenden e denot sto go cekame cela godina, cela godina
Neka e najsreken, rodendenec! Mnogu uspesi vo slednata godina
Rodendenrodendenrodendenrodenden
```
**Expected output:**

```text
0: 3
1: 1
2: 2
```




### Test Case 3

**Input:**
```text
Poeni
5
Imam prasanje za poenitepoenite od laboratoriski. Poenite izgleda deka ne se vneseni.
PoeniPoenite od laboratioriskite vezbi dali ke se skaliraat?
Jas imam 28 poeni, dali mozam da polagam vtor kolokvium?
MI FALAT 4 POENIPOENIPOENI ZA DA POLOZAM
PoeniPoeniPoenite se soodvetni na baranjata, Vasite PoeniPoeni nema da se skaliraat.
```
**Expected output:**

```text
0: 3
1: 1
2: 0
3: 1
```



### Test Case 4

**Input:**
```text
cas
6
Dali ke se odrzi cascasot ovaa nedela?
Vo kolku cascascasot ke bide pocetokot na kolokviumot, ili ke ima cascasovi vo toj termin?
Casovite ovaa nedela ke se odrzat online
Mislam deka casot bese korisen, na cascasovite znae da se resava zadaci no ovoj cascascascas bea kolokviumski.
Vo dva casot ke se objavat rezultatite od laboratoriskite vezbi
Potrebno e da sme prisutni na ovie cascascasovi
```
**Expected output:**

```text
0: 2
1: 1
2: 1
3: 1
4: 1
```



### Test Case 5

**Input:**
```text
,
5
Srekna Nova Godina,, Mnogu Zdravje,,, I Mnogu Srekja!
Srekna nova, samo ubavini!
Ti posakuvam se najubavo
Mnogu uspesi,, srekja, i ispolneti zelbi vo novata godina,,,
Samo uspesi vo novata godina!
```
**Expected output:**

```text
0: 3
1: 0
2: 0
3: 2
```



### Test Case 6

**Input:**
```text
jas
3
Jas se prijaviv na anketata, no jasjas ne sum na spisokot.
Dali jasjasjas ke mozam da polagam vo ovoj termin?
Mene mi e jasno i jas se soglasuvam so toa.
```
**Expected output:**

```text
0: 1
1: 1
2: 1
```




### Test Case 7

**Input:**
```text
70
4
Telefonskiot broj glasi 070707000
Se kacuvav po skali i mislam deka ima 707 vkupno
7070 pati povtoriv, no ne me razbraa
Kolku poeni osvoi na prv kolokvium? 70
```
**Expected output:**

```text
0: 2
1: 1
2: 1
```




### Test Case 8

**Input:**
```text
.
3
Dali ima rezultati od kolokviumot?
Mislam deka nema...
Kolegi denes polagavte.. Ke ima rezultati do slednata nedela..
```
**Expected output:**

```text
0: 1
1: 0
2: 2
```
