## Exercise 37 - Transforming Arrays Based on k

Read an integer **n** from standard input. Then, read **n** integer arrays, where the length of each array is entered first, followed by all its elements, and finally the number **k**.

Write a program that transforms each array by multiplying every k-th element by its position in the array and then subtracting its successor.

If the k-th element has no successor, add its predecessor instead.

For example, given the following array:

`1 2 3 4 5 6 7 8`, for `k = 2`, the result is:

`1 1 3 11 5 29 7 71`

Print all transformed arrays.

## Задача 37 - Трансформација на низи според k

Од стандарден влез се чита цел број n. Потоа се вчитуваат n низи од цели броеви, при што за секоја прво се внесува должината на низата, а потоа сите елементи на низата, па на крај бројот k.

Да се напише програма која за секоја низа ќе ја трансформира истата, т.ш. секој k-ти елемент прво ќе го помножи со неговиот реден број во низата, потоа ќе го одземе неговиот следбеник.

Доколку к-тиот елемент нема следбеник, се собира со неговиот претходник.

На пример, ако е дадена следната низа:

`1 2 3 4 5 6 7 8`, за `k = 2` се добива:

`1 1 3 11 5 29 7 71`

Да се испечатат сите трансформирани низи.


## Test Cases


### Test Case 1

**Input:**
```text
5
4
1 2 3 4
3
5
1 2 3 4 5
2
8
1 6 7 3 1 6 8 2
4
9
1 5 3 6 8 23 12 65 8
2
11
1 5 43 6 8 6 4 2 23 65 44
5
```
**Expected output:**

```text
1 2 5 4
1 1 3 11 5
1 6 7 11 1 6 8 24
1 7 3 16 8 126 12 512 8
1 5 43 6 34 6 4 2 23 606 44
```




### Test Case 2

**Input:**
```text
3
4
1 2 3 4
2
5
1 2 3 4 5
1
4
1 5 6 7
5
```
**Expected output:**

```text
1 1 3 19
-1 1 5 11 36
1 5 6 7
```




### Test Case 3

**Input:**
```text
2
8
1 2 3 4 5 6 7 8
8
7
1 0 1 0 1 0 1
3
```
**Expected output:**

```text
1 2 3 4 5 6 7 71
1 0 3 0 1 -1 1
```




### Test Case 4

**Input:**
```text
5
4
1 2 3 4
3
5
1 2 3 4 5
2
8
1 6 7 3 1 6 8 2
4
9
1 5 3 6 8 23 12 65 8
2
11
1 5 43 6 8 6 4 2 23 65 44
5
```
**Expected output:**

```text
1 2 5 4
1 1 3 11 5
1 6 7 11 1 6 8 24
1 7 3 16 8 126 12 512 8
1 5 43 6 34 6 4 2 23 606 44
```



### Test Case 5

**Input:**
```text
10
4
1 2 3 4
2
6
5 8 2 1 9 7
3
3
11 22 33
1
5
6 7 8 9 10
5
7
15 18 20 25 30 35 40
6
2
55 60
2
9
14 21 28 35 42 49 56 63 70
8
8
4 8 12 16 20 24 28 32
1
6
3 6 9 12 15 18
4
10
100 200 300 400 500 600 700 800 900 1000
7
```
**Expected output:**

```text
1 1 3 19
5 8 5 1 9 51
-11 11 110
6 7 8 9 59
15 18 20 25 30 170 40
55 175
14 21 28 35 42 49 56 434 70
-4 4 20 44 76 116 164 420
3 6 9 33 15 18
100 200 300 400 500 600 4100 800 900 1000
```
