## Exercise 7 - Counting Consecutive Consonants in Sentences

An integer `N` (`N <= 100`) is entered from standard input, followed by `N` sentences, each with a maximum length of 100 characters, entered on separate lines.

For each sentence, determine the maximum number of consecutive consonants appearing in it. Finally, generate a report indicating how many sentences contain 0, 1, 2, ..., up to `n` consecutive consonants, where `n` is the maximum number of consecutive consonants found in any sentence.

The counting of consecutive consonants must be implemented in a **separate function**.

Each output line contains two numbers: the first represents the number of consecutive consonants, and the second indicates how many input sentences have exactly that number of consecutive consonants.

For example, in the sentence:

`Uste edna nova godina ni dojde.`

The maximum number of consecutive consonants is `3`, as shown in `st`, `dn`, and `jd`.



## Вежба 7 - Броење на последователни согласки во реченици

Од стандарден влез се внесува цел број `N` (`N <= 100`), а потоа се внесуваат `N` текстуални низи (реченици) со максимална должина од 100 знаци, секоја зададена во нов ред.

За секоја од внесените реченици треба да се одреди најголемиот број последователни согласки што се појавуваат во неа. На крај треба да се генерира извештај во кој ќе се наведе колку реченици имаат 0, 1, 2, ..., до `n` последователни согласки, каде што `n` е максималниот број последователни согласки во некоја од речениците.

Броењето на последователните согласки во реченицата треба да се реализира во **посебна функција**.

Во секој ред од излезот се печатат два броја: првиот го означува бројот на последователни согласки, а вториот означува во колку реченици од влезот се појавува соодветниот број последователни согласки.

На пример, во реченицата:

`Uste edna nova godina ni dojde.`

Најголемиот број последователни согласки е `3`, како во групите `st`, `dn` и `jd`.




## Test Cases


### Test Case 1

**Input:**
```text
4
Srekjna Nova Godina!
2024 e novata godina koja ni pretstoi, Da bide ispolneta so radost i srekja.
Uste edna nova godina ni dojde.
2024taaaaa
```
**Expected output:**

```text
0: 1
1: 0
2: 1
3: 1
4: 0
5: 0
6: 0
7: 1
```



### Test Case 2

**Input:**
```text
6
Sreken rodenden!
Sreken neka e,mnogu zdravje i uspesi!
Ajde neka e sreken Rodendenot!Ovoj rodenden da bide najsreken.
Rodenden e denot sto go cekame cela godina,cela godina
Neka e najsreken, rodendenec! Mnogu uspesi vo slednata godina
Rodendenrodendenrodendenrodenden
```
**Expected output:**

```text
0: 0
1: 0
2: 2
3: 0
4: 0
5: 2
6: 1
7: 1
```





### Test Case 3

**Input:**
```text
5
Imam prasanje za poenite od laboratoriski.Poenite izgleda deka ne se vneseni.
Poenite od laboratioriskite vezbi dali ke se skaliraat?
Jas imam 28 poeni,dali mozam da polagam vtor kolokvium?
MI FALAT 4 POENI ZA DA POLOZAM
Poenite se soodvetni na baranjata, Vasite Poeni nema da se skaliraat.
```
**Expected output:**

```text
0: 1
1: 0
2: 1
3: 1
4: 1
5: 1
```






### Test Case 4

**Input:**
```text
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
0: 0
1: 1
2: 1
3: 1
4: 1
5: 2
```




### Test Case 5

**Input:**
```text
5
Srekna Nova Godina, Mnogu Zdravje, I Mnogu Srekja!
Srekna nova, samo ubavini!
Ti posakuvam se najubavo
Mnogu uspesi, srekja, i ispolneti zelbi vo novata godina,
Samo uspesi vo novata godina!
```
**Expected output:**

```text
0: 1
1: 1
2: 1
3: 0
4: 0
5: 0
6: 0
7: 1
8: 1
```






### Test Case 6

**Input:**
```text
3
Jas se prijaviv na anketata, no jas ne sum na spisokot.
Dali jas ke mozam da polagam vo ovoj termin?
Mene mi e jasno i jas se soglasuvam so toa.
```
**Expected output:**

```text
0: 0
1: 1
2: 1
3: 1
```





### Test Case 7

**Input:**
```text
4
Telefonskiot broj glasi 070707000
Se kacuvav po skali i mislam deka ima 70 vkupno
70 pati povtoriv, no ne me razbraa
Kolku poeni osvoi na prv kolokvium? 70
```
**Expected output:**

```text
0: 0
1: 0
2: 1
3: 1
4: 2
```





### Test Case 8

**Input:**
```text
	
3
Dali ima rezultati od kolokviumot?
Mislam deka nema...
Kolegi denes polagavte, ke ima rezultati do slednata nedela.
```
**Expected output:**

```text
0: 0
1: 1
2: 1
3: 0
4: 1
```
