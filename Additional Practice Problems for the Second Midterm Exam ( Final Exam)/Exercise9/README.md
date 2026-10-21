## Exercise 9 - Finding the Sentence with the Most Conjunctions

Read an unknown number of sentences from standard input. Each sentence is represented as a string of no more than 100 characters, with each sentence on a separate line.

The program should find the string containing the largest number of conjunctions and print the string along with the number of conjunctions found.

For this task, conjunctions are considered to be all words consisting of one, two, or three letters. Words in a string are separated by one or more spaces and/or punctuation marks.

The counting of conjunctions in a given string must be implemented in a separate function. Solutions that do not use a function will receive a maximum of 40% of the points.

If multiple sentences contain the same maximum number of conjunctions, the first one encountered should be printed.

**Example Explanation**

The number of conjunctions in the sentences is 2, 3, 4, 2, 4, and 7, respectively. The last sentence contains the largest number of conjunctions, so the program prints the number **7** and the content of that sentence.


## Задача 9 - Пронаоѓање на реченицата со најмногу сврзници

Од стандарден влез се внесуваат непознат број реченици, претставени преку текстуални низи (стрингови), секоја не подолга од 100 знаци и секоја во нов ред.

Програмата треба да го најде стрингот што содржи најмногу сврзници и да го испечати заедно со бројот на пронајдените сврзници.

За сврзници се сметаат сите зборови составени од една, две или три букви. Зборовите во текстуалната низа се одделени со едно или повеќе празни места и/или интерпункциски знаци.

Броењето на сврзниците во дадена текстуална низа треба да се реализира во посебна функција. Решенијата без користење функција ќе бидат оценети со најмногу 40% од поените.

Ако има повеќе реченици со ист максимален број сврзници, се печати првата пронајдена.

**Објаснување на тест-примерот**

Бројот на сврзници по реченици е 2, 3, 4, 2, 4 и 7, соодветно. Најмногу сврзници има последната реченица, па се печатат бројот **7** и содржината на таа реченица.



## Test Cases


### Test Case 1

**Input:**
```text
Svrznicite vo makedonskiot jazik se sluzbeni zborovi
odnosno niv gi upotrebuvame za povrzuvanje oddelni zborovi
vo ramkite na edna recenica ili poveḱe recenici vo edna slozena recenica.
Pri povrzuvanjeto, svrznicite gi izrazuvaat odnosite megju zborovite
ili megju recenicite, pa taka sprotiven odnos se iskazhuva so
ama ili no, a usloven odnos so ako itn.
```
**Expected output:**

```text
7: ama ili no, a usloven odnos so ako itn.
```




### Test Case 2

**Input:**
```text
     Svrznicite vo makedonskiot jazik - se sluzbeni zborovi
odnosno niv gi upotrebuvame za povrzuvanje oddelni zborovi....
vo ramkite na edna recenica ili, poveḱe recenici, vo edna slozena recenica..
    Pri povrzuvanjeto, svrznicite gi izrazuvaat odnosite megju zborovite
  ili megju recenicite, pa taka sprotiven odnos se iskazhuva so
 ama ili no, a usloven odnos, so, ako, itn.
```
**Expected output:**

```text
7:  ama ili no, a usloven odnos, so, ako, itn.
```





### Test Case 3

**Input:**
```text
Svrznicite vo makedonskiot jazik se sluzbeni zborovi
odnosno niv gi upotrebuvame za povrzuvanje oddelni zborovi
vo ramkite na edna recenica ili poveḱe recenici vo edna slozena recenica.
Pri povrzuvanjeto, svrznicite gi izrazuvaat odnosite megju zborovite
ili megju recenicite, pa taka sprotiven odnos se iskazhuva so
ama ili no, a usloven odnos so ako itn.
Vo makedonskiot jazik postojat i samoglaski (a, e, i, o, u)
```
**Expected output:**

```text
7: ama ili no, a usloven odnos so ako itn.
```






### Test Case 4

**Input:**
```text
Svrznicite vo makedonskiot jazik se sluzbeni zborovi
odnosno niv gi upotrebuvame za povrzuvanje oddelni zborovi
vo ramkite na edna recenica ili poveḱe recenici vo edna slozena recenica.
Vo makedonskiot jazik postojat i samoglaski (a, e, i, o, u)
Pri povrzuvanjeto, svrznicite gi izrazuvaat odnosite megju zborovite
ili megju recenicite, pa taka sprotiven odnos se iskazhuva so
ama ili no, a usloven odnos so ako itn.
```
**Expected output:**

```text
7: Vo makedonskiot jazik postojat i samoglaski (a, e, i, o, u)
```






### Test Case 5

**Input:**
```text
Denes nad Makedonija se ragja,
novo sonce na slobodata!
Makedoncite se borat,
za svoite pravdini!
Ne placi Makedonijo majko mila,
Kreni glava gordo, visoko,
Staro, mlado, mashko i zhensko,
Na noze se krenalo!
Odnovo sega znameto se vee,
na Krushevskata Republika!
Goce Delcev, Pitu Guli,
Dame Gruev, Sandanski!
Gorite Makedonski shumno peat,
novi pesni, novi vesnici!
Makedonija slobodna,
slobodno zhivee!
```
**Expected output:**

```text
2: Denes nad Makedonija se ragja,
```




### Test Case 6

**Input:**
```text
Denes nad Makedonija se ragja,
novo sonce na slobodata!
Makedoncite se borat,
za svoite pravdini!
Ne placi Makedonijo majko mila,
Kreni glava gordo, visoko,
Staro, mlado, mashko i zhensko,
Na noze se krenalo!
Odnovo sega znameto se vee,
na Krushevskata Republika!
Goce Delcev, Pitu Guli,
Dame Gruev, Sandanski!
Gorite Makedonski shumno peat,
novi pesni, novi vesnici!
Makedonija slobodna,
slobodno zhivee ee ee ee e e !
```
**Expected output:**

```text
5: slobodno zhivee ee ee ee e e !
```
