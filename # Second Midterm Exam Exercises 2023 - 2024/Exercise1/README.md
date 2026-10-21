## Exercise 1 - Counting Occurrences of a Substring in Sentences

A starting string with a maximum length of 50 characters is entered from standard input, followed by an integer `N` (`N <= 100`). Then, `N` textual strings (sentences), each with a maximum length of 100 characters, are entered, one per line.

For each sentence, count how many times the starting string appears in it, ignoring case differences. Finally, generate a report indicating how many sentences contain 0, 1, 2, ..., up to `n` occurrences of the starting string, where `n` is the maximum number of occurrences found in any sentence.

The counting of occurrences must be implemented in a **separate function**.

The output should follow the format shown in the example. Each output line contains two numbers: the first indicates the number of occurrences of the starting string, and the second indicates how many input sentences contain that exact number of occurrences.

### Македонски

## Вежба 1 - Броење на појавувања на подниза во реченици

Од стандарден влез се внесува почетна текстуална низа (стринг) со максимална должина од 20 знаци. Потоа се внесува цел број `N` (`N <= 100`), а во продолжение се внесуваат `N` текстуални низи (реченици), секоја во нов ред, со максимална должина од 100 знаци.

За секоја од внесените реченици треба да се изброи колку пати почетниот стринг се појавува во неа, при што треба да се прави разлика помеѓу мали и големи букви.

На крај треба да се генерира извештај во кој ќе се наведе колку реченици имаат 0, 1, 2, ..., до `n` појавувања на почетниот стринг, каде што `n` е најголемиот број на појавувања на почетниот стринг во некоја од речениците.

Броењето на појавувањата на почетниот стринг во реченицата треба да се реализира во **посебна функција**.

Излезот треба да биде во форматот прикажан во примерот. Во секој ред се печатат два броја: првиот го означува бројот на појавувања на почетниот стринг, а вториот означува во колку реченици од влезот се појавува почетниот стринг точно толку пати.



## Test Cases


### Test Case 1

**Input:**
```text
2024
4
Srekjna Nova Godina!
Srekjkna Nova 2024 godina! Mnogu zdravje, uspeh i srekja vo 2024ta.
2024 e novata godina koja ni pretstoi, Da bide ispolneta so radost i srekja. Srekjna 2024 godina!
Uste edna nova godina ni dojde.
```
**Expected output:**

```text
0: 2
1: 0
2: 2
```




### Test Case 2

**Input:**
```text
rodenden
6
Sreken rodenden!
Sreken neka e, mnogu zdravje i uspesi!
Ajde neka e sreken Rodendenot! Ovoj rodenden da bide najsreken.
Rodenden e denot sto go cekame cela godina, cela godina
Neka e najsreken, rodendenec! Mnogu uspesi vo slednata godina
Rodendenrodendenrodendenrodenden
```
**Expected output:**

```text
0: 2
1: 3
2: 0
3: 1
```





### Test Case 3

**Input:**
```text
Poeni
5
Imam prasanje za poenite od laboratoriski. Poenite izgleda deka ne se vneseni.
Poenite od laboratioriskite vezbi dali ke se skaliraat?
Jas imam 28 poeni, dali mozam da polagam vtor kolokvium?
MI FALAT 4 POENI ZA DA POLOZAM
Poenite se soodvetni na baranjata, Vasite Poeni nema da se skaliraat.
```
**Expected output:**

```text
0: 2
1: 2
2: 1
```





### Test Case 4

**Input:**
```text
cas
6
Dali ke se odrzi casot ovaa nedela?
Vo kolku casot ke bide pocetokot na kolokviumot, ili ke ima casovi vo toj termin?
Casovite ovaa nedela ke se odrzat online
Mislam deka casot bese korisen, na casovite znae da se resava zadaci no ovoj cas bea kolokviumski.
Vo dva casot ke se objavat rezultatite od laboratoriskite vezbi
Potrebno e da sme prisutni na ovie casovi
```
**Expected output:**

```text
0: 1
1: 3
2: 1
3: 1
```





### Test Case 5

**Input:**
```text
,
5
Srekna Nova Godina, Mnogu Zdravje, I Mnogu Srekja!
Srekna nova, samo ubavini!
Ti posakuvam se najubavo
Mnogu uspesi, srekja, i ispolneti zelbi vo novata godina,
Samo uspesi vo novata godina!
```
**Expected output:**

```text
0: 2
1: 1
2: 1
3: 1
```




### Test Case 6

**Input:**
```text
jas
3
Jas se prijaviv na anketata, no jas ne sum na spisokot.
Dali jas ke mozam da polagam vo ovoj termin?
Mene mi e jasno i jas se soglasuvam so toa.
```
**Expected output:**

```text
0: 0
1: 2
2: 1
```





### Test Case 7

**Input:**
```text
70
4
Telefonskiot broj glasi 070707000
Se kacuvav po skali i mislam deka ima 70 vkupno
70 pati povtoriv, no ne me razbraa
Kolku poeni osvoi na prv kolokvium? 70
```
**Expected output:**

```text
0: 0
1: 3
2: 0
3: 1
```




### Test Case 8

**Input:**
```text
.
3
Dali ima rezultati od kolokviumot?
Mislam deka nema...
Kolegi denes polagavte, ke ima rezultati do slednata nedela.
```
**Expected output:**

```text
0: 1
1: 1
2: 0
3: 1
```
