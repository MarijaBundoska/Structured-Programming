# Exercise 14 - Matrix Transformation Based on the Main and Secondary Diagonals

## Problem Description

Read an integer `n` from standard input, representing the dimensions of a square matrix. Then, read the elements of the matrix.

Transform the matrix so that **every element located simultaneously below the main diagonal and below the secondary diagonal is replaced with its opposite number**. The opposite of a number is obtained by changing its sign: positive numbers become negative, and negative numbers become positive.

**Example Explanation:**

The bold elements are located below both the main and secondary diagonals.

1 2 3 4 5

1 2 3 4 5

1 2 3 4 5

1 2 **3** 4 5

1 **2 3 4** 5

---

# Задача 14 - Трансформација на матрица според главната и споредната дијагонала

## Опис на задачата

Од стандарден влез се внесува бројот `n`, кој ги претставува димензиите на квадратна матрица. Потоа се внесуваат елементите на матрицата.

Матрицата треба да се трансформира така што **секој елемент кој истовремено се наоѓа под главната и под споредната дијагонала ќе се замени со неговиот спротивен број**. Спротивен број се добива со промена на знакот на бројот: позитивниот број станува негативен, а негативниот станува позитивен.

**Објаснување на првиот тест-пример:**

Броевите што се задебелени се наоѓаат под главната и под споредната дијагонала.

1 2 3 4 5

1 2 3 4 5

1 2 3 4 5

1 2 **3** 4 5

1 **2 3 4** 5


## Test Cases


### Test Case 1

**Input:**
```text
5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
```
**Expected output:**

```text
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 -3 4 5
1 -2 -3 -4 5
```




### Test Case 2

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
1 2 3 4
5 6 7 8
9 10 11 12
13 -14 -15 16
```






### Test Case 3

**Input:**
```text
7
1 1 1 1 1 1 1
1 1 1 1 1 1 1
1 1 1 1 1 1 1
1 1 1 1 1 1 1
1 1 1 1 1 1 1
1 1 1 1 1 1 1
1 1 1 1 1 1 1
```
**Expected output:**

```text
1 1 1 1 1 1 1
1 1 1 1 1 1 1
1 1 1 1 1 1 1
1 1 1 1 1 1 1
1 1 1 -1 1 1 1
1 1 -1 -1 -1 1 1
1 -1 -1 -1 -1 -1 1
```






### Test Case 4

**Input:**
```text
10
0 1 2 3 4 5 6 7 8 9
0 1 2 3 4 5 6 7 8 9
0 1 2 3 4 5 6 7 8 9
0 1 2 3 4 5 6 7 8 9
0 1 2 3 4 5 6 7 8 9
0 1 2 3 4 5 6 7 8 9
0 1 2 3 4 5 6 7 8 9
0 1 2 3 4 5 6 7 8 9
0 1 2 3 4 5 6 7 8 9
0 1 2 3 4 5 6 7 8 9
```
**Expected output:**

```text
0 1 2 3 4 5 6 7 8 9
0 1 2 3 4 5 6 7 8 9
0 1 2 3 4 5 6 7 8 9
0 1 2 3 4 5 6 7 8 9
0 1 2 3 4 5 6 7 8 9
0 1 2 3 4 5 6 7 8 9
0 1 2 3 -4 -5 6 7 8 9
0 1 2 -3 -4 -5 -6 7 8 9
0 1 -2 -3 -4 -5 -6 -7 8 9
0 -1 -2 -3 -4 -5 -6 -7 -8 9
```






### Test Case 5

**Input:**
```text
2
1 2
2 1
```
**Expected output:**

```text
1 2
2 1
```
