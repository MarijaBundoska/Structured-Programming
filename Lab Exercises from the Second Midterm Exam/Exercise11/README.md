# Exercise 11 - Checking a Matrix Condition

## Problem Description

Read the dimensions of a square matrix from standard input (maximum size 100x100). Check whether the matrix satisfies the following condition: **each element on the main diagonal must be equal to the sum of the elements to its right in the same row**. If the matrix satisfies the condition, print the matrix; otherwise, print `-1`.

---

# Задача 11 - Проверка на услов за квадратна матрица

## Опис на задачата

Од тастатура се чита димензија на квадратна матрица (максимална големина 100х100). Треба да се провери дали матрицата го задоволува следниот услов: **секој елемент од главната дијагонала да биде еднаков со збирот на елементите десно (во истата редица) од тој елемент**. Ако матрицата го исполнува условот истата треба да се испечати на екран, а во спротивно се печати `-1`.


## Test Cases


### Test Case 1

**Input:**
```text
4
7 1 2 4
9 3 1 2
5 10 4 4
16 10 7 8
```
**Expected output:**

```text
7 1 2 4
9 3 1 2
5 10 4 4
16 10 7 8
```






### Test Case 2

**Input:**
```text
3
1 2 3
4 5 6
7 8 9
```
**Expected output:**

```text
-1
```







### Test Case 3

**Input:**
```text	
6
6 7 2 9 8 9
4 3 2 1 10 11
9 8 9 2 1 10
12 7 2 3 4 5
4 2 9 11 10 9
17 11 10 8 7 2
```
**Expected output:**

```text
-1
```






### Test Case 4

**Input:**
```text
5
15 4 1 8 2
3 9 5 1 3
11 7 13 3 10
5 8 2 4 4
12 15 7 9 1
```
**Expected output:**

```text
15 4 1 8 2
3 9 5 1 3
11 7 13 3 10
5 8 2 4 4
12 15 7 9 1
```
