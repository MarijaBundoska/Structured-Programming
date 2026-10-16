# Exercise 13 - Checking Whether a Matrix Is Symmetric

## Problem Description

Write a program to read the elements of a matrix and check whether the given matrix is symmetric or not.

The dimensions of the matrix, `M` and `N`, are read from standard input, followed by the elements of the matrix.

Your task is to print `1` if the matrix is symmetric or `-1` if it is not symmetric. Then, print the matrix itself.

---

# Задача 13 - Проверка дали матрицата е симетрична

## Опис на задачата

Да се напише програма за читање на елементите на една матрица и да се провери дали дадената матрица е симетрична или не.

Од стандарден влез се внесуваат димензиите на матрицата `M` и `N`, соодветно, а потоа се внесуваат елементите на матрицата.

Ваша задача е доколку матрицата е симетрична, да испечатите `1` на екран, а доколку не е симетрична, да испечатите `-1`. Потоа се печати самата матрица на екран.



## Test Cases


### Test Case 1

**Input:**
```text
3 3
1 2 3
2 4 5
3 5 8
```
**Expected output:**

```text
1
1 2 3
2 4 5
3 5 8
```





### Test Case 2

**Input:**
```text
5 5
2 1 1 1 1
1 2 1 1 1
1 1 2 1 1
1 1 1 2 1
1 1 1 1 2
```
**Expected output:**

```text
1
2 1 1 1 1
1 2 1 1 1
1 1 2 1 1
1 1 1 2 1
1 1 1 1 2
```





### Test Case 3

**Input:**
```text
4 4
12 24 30 48
24 50 80 20
45 60 80 90
85 23 80 90
```
**Expected output:**

```text
-1
12 24 30 48
24 50 80 20
45 60 80 90
85 23 80 90
```




### Test Case 4

**Input:**
```text
8 8
1 2 3 4 5 6 3 3
2 1 5 6 3 2 2 11
3 5 1 8 3 3 8 9
4 6 8 1 3 8 9 12
5 6 3 3 1 8 5 6
3 2 3 2 3 1 5 7
3 2 1 2 5 1 1 8
3 8 5 12 7 5 6 1
```
**Expected output:**

```text
-1
1 2 3 4 5 6 3 3
2 1 5 6 3 2 2 11
3 5 1 8 3 3 8 9
4 6 8 1 3 8 9 12
5 6 3 3 1 8 5 6
3 2 3 2 3 1 5 7
3 2 1 2 5 1 1 8
3 8 5 12 7 5 6 1
```
