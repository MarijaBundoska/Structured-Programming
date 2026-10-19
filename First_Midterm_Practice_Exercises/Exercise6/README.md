## Exercise 6 - Counting Pairs with a Given Sum

### Description

Write a program that reads a positive integer `z` from standard input, followed by pairs of integers `(a, b)`.

The input of pairs of integers continues until the user enters the pair `(0, 0)`.

The program should calculate:
- How many times the sum of a pair of integers `(a, b)` is equal to `z`.
- What percentage of all entered pairs `(a, b)` have a sum equal to `z`.

**Note:** The pair `(0, 0)` is not included in the calculations.

## Задача 6 - Броење парови со даден збир


### Опис

Да се напише програма во која од стандарден влез прво се внесува еден позитивен цел број `z`, а потоа последователно се внесуваат парови цели броеви `(a, b)`.

Внесувањето на парови цели броеви завршува кога корисникот ќе го внесе парот `(0, 0)`.

Програмата треба да пресмета:
- Колку пати збирот на еден пар броеви `(a, b)` е еднаков на `z`.
- Колкав процент од вкупниот број внесени парови `(a, b)` имаат збир еднаков на `z`.

**Забелешка:** Парот `(0, 0)` не се зема предвид при извршувањето на пресметките.







## Test Cases


### Test Case 1

**Input:**
```text
100
50 50
-50 -50
-99 199
32 98
0 0
```
**Expected output:**

```text
Vnesovte 2 parovi od broevi chij zbir e 100
Procentot na parovi so zbir 100 e 50%
```




### Test Case 2

**Input:**
```text
100
12 78
100 1
0 99
13 12
21 12
-5 90
9 -2
0 0
```
**Expected output:**

```text
Vnesovte 0 parovi od broevi chij zbir e 100
Procentot na parovi so zbir 100 e 0%
```



### Test Case 3

**Input:**
```text
26
14 12
4 23
5 20
0 0
```
**Expected output:**

```text
Vnesovte 1 parovi od broevi chij zbir e 26
Procentot na parovi so zbir 26 e 33.3333%
```





### Test Case 4

**Input:**
```text
21
42 -21
-20 41
2 19
3 17
6 54
0 0
```
**Expected output:**

```text
Vnesovte 3 parovi od broevi chij zbir e 21
Procentot na parovi so zbir 21 e 60%
```





### Test Case 5

**Input:**
```text
1
-2 3
15 -14
1 0
0 1
0 0
```
**Expected output:**

```text
Vnesovte 4 parovi od broevi chij zbir e 1
Procentot na parovi so zbir 1 e 100%
```
