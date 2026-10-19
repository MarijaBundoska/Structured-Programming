## Exercise 5 - Betting Slip and Maximum Odds

### Description

Read the stake amount (an integer) from standard input.

Each subsequent line contains one betting prediction in the following format:

`ab12 1 1.25`

The first value is the prediction code, a string of at most 9 characters. The second value represents the prediction type (`1`, `0`, or `2`), and the third value is the odds (a real number).

Reading continues until the character `#` is encountered.

Print the prediction type with the highest odds, along with the possible winnings of the betting slip. If multiple predictions have the same maximum odds, print the first one.

The possible winnings are calculated by multiplying the stake amount by the product of all odds.

## Задача 5 - Ливче од спортска обложувалница и најголем коефициент

### Опис

Од стандарден влез се чита ливче во спортска обложувалница.

Во првиот ред е запишана сумата на уплата како цел број.

Потоа, во секој нареден ред се чита по еден тип во следниот формат, сè додека не се прочита знакот `#`:

`ab12 1 1.25`

Првиот податок е шифрата на типот (низа од знаци со должина не поголема од 9 знаци), вториот податок е типот (`1`, `0` или `2`), а третиот податок е коефициентот (реален број).

Треба да се испечати типот со најголем коефициент, како и можната добивка на ливчето. Доколку повеќе типови имаат ист максимален коефициент, треба да се испечати првиот.

Можната добивка се пресметува како производ од сумата на уплата и сите коефициенти.




## Test Cases


### Test Case 1

**Input:**
```text
100
ab12 1 1.2
c234 2 2.0
#
```
**Expected output:**

```text
c234 2 2
240
```




### Test Case 2

**Input:**
```text
100
a123 1 1.2
b234 2 2.0
c152 0 2.65
d111 2 1.05
#
```
**Expected output:**

```text
c152 0 2.65
667.8
```





### Test Case 3

**Input:**
```text
50
az32 1 1.65
az35 2 1.45
b34a2 0 1.75
b234 2 2.0
c152 0 2.65
d111 2 1.05
#
```
**Expected output:**

```text
c152 0 2.65
1165
```




### Test Case 4

**Input:**
```text
50
az32 2 2.65
az35 2 1.45
b34a2 0 1.75
b234 2 2.0
c152 0 2.65
d111 2 1.05
b235 2 2.0
c122 0 2.65
d121 2 1.15
#
```
**Expected output:**

```text
az32 2 2.65
11404.1
```





### Test Case 5

**Input:**
```text
50
az32 2 3.65
az35 2 1.45
b34a2 0 1.75
b234 2 2.0
c152 0 2.65
d111 2 1.05
#
```
**Expected output:**

```text
az32 2 3.65
2577.12
```



### Test Case 6

**Input:**
```text
1000
g326 1 1.6
#
```
**Expected output:**

```text
g326 1 1.6
1600
```
