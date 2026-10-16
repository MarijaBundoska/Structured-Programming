# Exercise 16 - Folding a Square Matrix

## Problem Description

Read a square matrix with `n` rows and `n` columns from standard input. First, read the number `n`, followed by the `n × n` elements of the matrix.

If `n` is an odd number, print `GRESKA` and terminate the program.

Otherwise, fold the matrix as shown in the image. When folding the matrix, **add together the elements at positions that overlap during the folding process**.

---

# Задача 16 - Здиплување на квадратна матрица

## Опис на задачата

Од стандарден влез се вчитува квадратна матрица со `n` редици и `n` колони. Прво се вчитува бројот `n`, а потоа и елементите на матрицата.

Доколку `n` е непарен број, да се испечати пораката `GRESKA` и да заврши програмата.

Потребно е матрицата да се здипли како што е прикажано на сликата. При диплењето на матрицата, се собираат елементите на позициите што се поклопуваат при диплењето.



## Test Cases


### Test Case 1

**Input:**
```text
4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
```
**Expected output:**

```text
34 34
34 34
```





### Test Case 2

**Input:**
```text
11
2 0 6 5 9 6 7 4 8 8 5
2 6 9 0 4 6 0 6 0 8 6
1 7 2 2 7 5 2 1 9 1 9
2 4 4 0 6 9 9 0 1 0 8
2 4 2 0 1 5 2 7 0 3 9
3 5 1 9 9 8 6 1 6 4 2
5 0 6 9 2 7 8 8 2 1 6
3 8 5 2 3 5 7 3 8 5 9
3 8 1 8 6 0 1 2 5 7 0
1 4 2 0 8 8 1 0 8 3 6
5 3 6 0 8 5 5 0 0 2 8
```
**Expected output:**

```text
GRESKA
```





### Test Case 3

**Input:**
```text
8
4 7 1 2 9 0 9 8
5 1 7 7 9 5 5 9
4 7 1 0 9 6 0 0
5 6 5 6 0 3 1 8
1 8 6 1 8 9 8 7
9 8 6 1 3 6 8 4
7 3 9 7 4 2 1 8
3 5 7 2 2 0 7 9
```
**Expected output:**

```text
24 28 8 15
29 10 23 27
17 23 19 13
21 23 23 15
```
