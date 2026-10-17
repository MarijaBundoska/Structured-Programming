## Exercise 43 - Swapping Array Elements in Both Directions

Read an integer **N** from standard input, representing the length of an array. Then, read the array elements, followed by an integer **K**.

Write a program that transforms the array by swapping the element at position **K** with its predecessor.

Note that the transformation should be performed when traversing the array from left to right and also in the opposite direction, from right to left.

## Задача 43 - Замена на места на елементи во низата во двата правци

Од стандарден влез се чита цел број **n**, кој ја претставува должината на една низа, а потоа се внесуваат елементите на истата и на крај број **k**.

Да се напише програма која ја трансформира низата, така што ќе се направи замена на местата помеѓу елементот на позицијата **k** и неговиот претходник.

Имајте предвид дека промената треба да се направи кога низата ја читаме од лево кон десно и исто така во спротивен правец (од десно кон лево).

## Test Cases


### Test Case 1

**Input:**
```text
8
1 2 3 4 5 6 7 8
2
```
**Expected output:**

```text
1 3 2 4 5 7 6 8
```



### Test Case 2

**Input:**
```text
7
2
6
7
4
1
3
9
2
```
**Expected output:**

```text
2 7 6 4 3 1 9
```




### Test Case 3

**Input:**
```text
10
9
8
5
6
3
2
0
4
7
1
3
```
**Expected output:**

```text
9 8 6 5 3 2 4 0 7 1
```




### Test Case 4

**Input:**
```text
9
8
5
4
1
6
3
7
0
9
3
```
**Expected output:**

```text
8 5 1 4 6 7 3 0 9
```
