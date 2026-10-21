## Exercise 10 - Counting Consecutive Vowel Occurrences in Sentences
## Вежба 10 - Броење на последователни појавувања на самогласки во реченици

### Problem Description

From the standard input, an integer `N` (`N <= 100`) is entered, followed by `N` sentences, each with a maximum length of `100` characters. Each sentence is entered on a separate line.

For each sentence, count the total number of occurrences of consecutive vowels. The counting must be implemented in a separate function.

Finally, generate a report indicating how many sentences contain `0`, `1`, `2`, ..., up to `n` occurrences of consecutive vowels, where `n` is the maximum number of occurrences found in any sentence.

The output should follow the format shown in the example. The first number represents the number of consecutive vowel occurrences, while the second number indicates how many sentences have that number of occurrences.

For example, in the sentence:

`Uste edna novaaaa godina ni dojdeee.`

the number of consecutive vowel occurrences is `3`, as highlighted in the original statement.

### Опис на задачата

Од стандарден влез се внесува цел број `N` (`N <= 100`), а потоа се внесуваат `N` текстуални низи (реченици) со максимална должина од `100` знаци, при што секоја реченица е зададена во нов ред.

За секоја внесена реченица треба да се изброи колку вкупно пати се појавуваат последователни самогласки. Броењето треба да биде имплементирано во посебна функција.

На крај, треба да се генерира извештај во кој ќе се наведе колку реченици имаат `0`, `1`, `2`, ..., до `n` појавувања на последователни самогласки, каде што `n` е максималниот број на појавувања пронајдени во некоја од речениците.

Излезот треба да биде во форматот прикажан во примерот. Првиот број го означува бројот на последователни појавувања на самогласки, а вториот број означува во колку реченици се појавува соодветниот број.

На пример, во реченицата:

`Uste edna novaaaa godina ni dojdeee.`

бројот на последователни појавувања на самогласки е `3`, како што е означено во оригиналниот текст.




## Test Cases


### Test Case 1

**Input:**
```text
4
Srekjna Nova Godina!
2024 e novata godina koja ni pretstoi, Da bide ispolneta so radost i srekja.
Uste edna novaaa gooooodina ni dojdeeeee.
2024taaaaaa
```
**Expected output:**

```text
0: 1
1: 2
2: 0
3: 1
```





### Test Case 2

**Input:**
```text
6
Sreeekeeeen rooodendeeeeeen!
Sreken neka eee, mnoguu zdravje i uuspesii!
Ajde neka e sreken Rodendenot!Ovoj rodenden da bide najsreken.
Rodenden e denot sto go cekame cela godina, cela godina
Neka ee najsreken, rodendeneeec! Mnogu uspesi vo slednata godinaaa
Roodeendeenrodendenrooodeeendeeenrodendeneeee
```
**Expected output:**

```text
0: 2
1: 0
2: 0
3: 1
4: 2
5: 0
6: 0
7: 1
```




### Test Case 3

**Input:**
```text
5
Imam prasaanjeee za poenite od laboratoriskiii. Poenite izgleda deka neee se vneseniii.
Poeniteee ood laboratioriskite veeeeezbi dali ke se skaliraaaaat?
Jas imam 28 poeni, dali mozam da polagam vtor kolokvium?
MI FALAT 4 POENI ZA DA POLOZAM
Pooooenite se soodvetni na baranjata, Vaasite Poeni nema da se skaliraat.
```
**Expected output:**

```text
0: 0
1: 1
2: 1
3: 0
4: 0
5: 1
6: 1
7: 1
```




### Test Case 4

**Input:**
```text
6
Dali ke se odrzi casot ovaa nedela?
Vo kolkuu casot keee bide pocetokot na kolokviumot, iiilllii ke ima casovi vo toj termiiin?
Casoviiitte ovaa nedeela ke sse odrzat online
Mislam deka casot bese korisen, na casovite znae da se resava zadaci no ovoj cas bea kolokviumski.
Vo dvaa casot ke see objavat rezultatiiite od laboratoriskite vezbiiiii
Potrebno e daa sme prisutni naa ovie casovii
```
**Expected output:**

```text
0: 0
1: 1
2: 0
3: 2
4: 2
5: 0
6: 1
```




### Test Case 5

**Input:**
```text
5
Sreknaaaaaa Novaaa Godinaaa, Mnogu Zdravje, Iii Mnogu Srekja!
Srekna nova, samo ubavini!
Ti posakuvaaaam se najubavo
Mnogu uspesi, srekja, i ispolneti zelbi vo novata godina,
Samo uspeesiiii vo noavata godinaaa!
```
**Expected output:**

```text
0: 2
1: 1
2: 0
3: 0
4: 2
```




### Test Case 6

**Input:**
```text
3
Jas se prijaviiiiv na anketaataaaa, no jas ne sum na spisokot.
Dali jaas ke mozam da polagam vooo oovoj termin?
Mene mii e jasno ii jas se soglasuvam soo toa.
```
**Expected output:**

```text
0: 0
1: 0
2: 0
3: 2
4: 1
```






### Test Case 7

**Input:**
```text
4
Telefonskiot broj glaasi 070707000
Se kacuvaaav ppoo skali iii mislam deka ima 700 vkupnooo
70 pati povtoriv, no ne me razbraa
Kolkuu poeni osvoi na prv koloookvium? 70
```
**Expected output:**

```text
0: 0
1: 1
2: 1
3: 0
4: 1
5: 1
```






### Test Case 8

**Input:**
```text
3
Dali ima rezultati oood kolokviumot?
Mislam deka neemaaaaa...
Kolegi denes polagavte, ke ima rezultati do slednata nedela.
```
**Expected output:**

```text
0: 1
1: 0
2: 2
```
