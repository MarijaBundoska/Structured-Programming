# Exercise 5 - Modifying Array Elements in Specified Intervals

## Problem Description

Read N numbers from standard input. N is not known in advance; you should read numbers until the number -1 is entered. Store the read numbers in an array. In each test case, there will be fewer than 100 numbers before the number -1.

Then, 3 tuples consisting of 4 numbers each, L, R, V, and I, are entered. L and R are numbers between 0 and N-1; in each test case, L < R will hold. The number I will have a value of either 0 or 1. When I is 0, you should add the value V to the numbers with indices in the interval [L,R] (including L and R). When I is 1, you should add the value V to the numbers with indices in the interval (L,R) (excluding L and R).

Finally, print the array.

---

# Задача 5 - Измена на елементи од низа во зададени интервали

## Опис на задачата

Од стандарден влез се читаат N броеви. N не е однапред познато, треба да читате броеви додека да се прочита бројот -1. Сместете ги прочитаните броеви во низа. Во секој тест пример ќе има помалку од 100 броеви пред бројот -1.

Потоа се внесуваат 3 торки од по 4 броеви L, R, V и I. L и R се броеви помеѓу 0 и N-1; во секој тест пример ќе важи L < R. Бројот I ќе има вредност само 0 или 1. Кога I е 0 ќе треба на броевите со индекси во интервалот [L,R] (вклучително на L и R) да додадете вредност V. Кога I е 1 ќе треба на броевите со индекси во интервалот (L,R) (не ги вклучува L и R) да додадете вредност V.

На крај отпечатете ја низата.


## Test Cases


### Test Case 1

**Input:**
```text
0 0 0 0 0 0 0 0 0 0 0 -1
0 2 5 0
4 5 3 0
6 10 9 1
```
**Expected output:**

```text
5 5 5 0 3 3 0 9 9 9 0
```




### Test Case 2

**Input:**
```text
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 -1
13 16 13 1
11 27 3 0
23 30 6 1
```
**Expected output:**

```text
0 0 0 0 0 0 0 0 0 0 0 3 3 3 16 16 3 3 3 3 3 3 3 3 9 9 9 9 6 6 0 0 0 0
```





### Test Case 3

**Input:**
```text
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 -1
5 10 11 1
35 44 13 1
8 33 -4 1
```
**Expected output:**

```text
0 0 0 0 0 0 11 11 11 7 -4 -4 -4 -4 -4 -4 -4 -4 -4 -4 -4 -4 -4 -4 -4 -4 -4 -4 -4 -4 -4 -4 -4 0 0 0 13 13 13 13 13 13 13 13 0 0 0 0 0 0 0
```





### Test Case 4

**Input:**
```text
15 21 19 13 5 7 31 29 18 23 12 13 23 9 24 6 11 12 26 27 7 9 23 19 29 14 31 27 12 29 16 20 31 11 15 12 14 6 8 22 21 27 3 30 29 26 9 14 8 17 25 3 12 20 6 30 15 19 3 14 -1
10 21 9 0
10 27 13 1
3 5 -3 1
```
**Expected output:**

```text
15 21 19 13 2 7 31 29 18 23 21 35 45 31 46 28 33 34 48 49 29 31 36 32 42 27 44 27 12 29 16 20 31 11 15 12 14 6 8 22 21 27 3 30 29 26 9 14 8 17 25 3 12 20 6 30 15 19 3 14
```





### Test Case 5

**Input:**
```text
14 21 5 19 29 13 6 11 3 14 15 8 13 32 27 20 11 6 28 24 5 23 4 29 17 13 9 24 21 12 21 7 4 27 26 22 21 11 3 11 10 20 11 16 21 16 20 24 -1
6 41 13 0
5 32 10 1
8 17 12 0
```
**Expected output:**

```text
14 21 5 19 29 13 29 34 38 49 50 43 48 67 62 55 46 41 51 47 28 46 27 52 40 36 32 47 44 35 44 30 17 40 39 35 34 24 16 24 23 33 11 16 21 16 20 24
```





### Test Case 6

**Input:**
```text
6 17 31 27 32 22 5 18 28 6 6 16 30 7 26 11 3 21 21 3 29 11 14 32 11 22 10 15 15 31 25 11 32 13 20 11 14 18 -1
12 28 14 0
10 31 -9 0
0 3 -4 0
```
**Expected output:**

```text
2 13 27 23 32 22 5 18 28 6 -3 7 35 12 31 16 8 26 26 8 34 16 19 37 16 27 15 20 20 22 16 2 32 13 20 11 14 18
```





### Test Case 7

**Input:**
```text
```
**Expected output:**

```text
32 27 14 32 29 12 31 15 8 28 31 36 18 19 42 3 31 6 32 6 22 19 10 22 22 10 2 15 9 1 23 12 22 21 4 18 8 27 27 4 29 4 29 26 26 28 18 16 15 18 12 15 33 16 11 38 16 32 11 14 16 12 29 11 25 30 23 36 24 39 22 19
```





### Test Case 8

**Input:**
```text
10 21 20 16 23 26 31 5 8 15 23 26 10 5 22 20 18 16 7 16 5 14 24 16 15 18 26 -1
17 17 -15 0
22 22 1 0
22 24 11 1
```
**Expected output:**

```text
10 21 20 16 23 26 31 5 8 15 23 26 10 5 22 20 18 1 7 16 5 14 25 27 15 18 26
```
