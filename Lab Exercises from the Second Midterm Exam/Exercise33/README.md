## Exercise 33 - Array Transformation Based on Equal Elements

Read a sequence of integers from standard input until a non-integer value is entered. Transform the sequence so that, for each element, all subsequent elements that are equal to it are increased by the difference between the positions of the two elements.

**Example:**

The array `5 6 10 5 3 10 10`, after transformation, becomes `5 6 10 8 3 13 14`.

## Задача 33 - Трансформација на низа врз основа на еднакви елементи

Од стандарден влез се чита низа на цели броеви се додека не се внесе нешто различно од цел број. Треба да се направи трансформација на низата, на тој начин што за секој елемент, сите елементи после него кои што се еднакви со него ќе се зголемат за разликата на позициите помеѓу двата елементи.

**Пример:** Низата `5 6 10 5 3 10 10`, после трансформација би била `5 6 10 8 3 13 14`.


## Test Cases


### Test Case 1

**Input:**
```text
5
6
10
7
3
10
10
*
```
**Expected output:**

```text
5 6 10 7 3 13 14
```




### Test Case 2

**Input:**
```text
3
3
.
```
**Expected output:**

```text
3 4
```




### Test Case 3

**Input:**
```text
14
2
5
14
2
5
14
a
```
**Expected output:**

```text
14 2 5 17 7 8 20
```



### Test Case 4

**Input:**
```text
12
3
11
4
7
1
9
m
```
**Expected output:**

```text
12 3 11 4 7 1 9
```
