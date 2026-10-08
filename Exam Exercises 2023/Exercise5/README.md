# Exercise 5 - Sports Betting Ticket

## Task

A sports betting ticket is read from standard input.

The first line contains the amount of the bet (an integer).

Then, in each subsequent line read from standard input, until the character `#` is read, one type is given in the following format:

```text
ab12 1 1.25
```

The first value is the type code (a character array that is no longer than 9 characters), the second value is the type (it can be `1`, `0`, or `2`), while the third value is the coefficient (a real number).

Your task is to **print the type with the highest coefficient** as well as the **possible winnings of the ticket**. If there are multiple types with the same maximum coefficient, the first one should be printed.

The possible winnings are calculated as the product of all coefficients multiplied by the amount of the bet.

# Задача 5 - Ливче во спортска обложувалница

## Опис на задачата

Од стандарден влез се чита ливче во спортска обложувалница.

Потоа во секој нареден ред кој се чита од стандарден влез (се додека не се прочита знакот `#`) е запишан по еден тип во следниот формат:

```text
ab12 1 1.25
```

Првиот број е шифрата на типот (низа од знаци која не е подолга од 9 знаци), вториот број е типот (може да биде `1`, `0` или `2`) додека третиот број е коефициентот (реален број).

Ваша задача е да го **испечатите типот со најголем коефициент** како и **можната добивка на ливчето**. Доколку има повеќе типови со ист максимален коефициент, да се испечати првиот.

Можната добивка се пресметува како производ на сите коефициенти со сумата на уплата.



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




