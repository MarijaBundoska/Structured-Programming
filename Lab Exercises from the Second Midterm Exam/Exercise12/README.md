# Exercise 12 - Matrix Transformation Based on the Secondary Diagonal

## Problem Description

Read a matrix with `n` rows and `n` columns from standard input. First, read the number `n`, followed by the elements of the matrix.

The matrix should be transformed so that **every element located to the right of the secondary diagonal in the same row, which is smaller than the average of the elements to the left of the secondary diagonal in the same row, must be replaced with `-1`**. Print the transformed matrix to the screen.

**Example Explanation:**

2 3 5 **9**

7 8 **4** 2

4 **2** 3 5

**7** 10 9 2

For the second row, the element on the secondary diagonal is '4'. The elements to its left are '7' and '8', whose average is '7.5'. The element to its right is '2', which is smaller than '7.5', so it is replaced with '-1'.


# Задача 12 - Трансформација на матрица според споредната дијагонала

## Опис на задачата

Од стандарден влез се вчитува матрица со `n` редици и `n` колони. Прво се вчитува бројот `n`, а потоа и елементите на матрицата.

Матрицата треба да се трансформира така што **секој елемент што се наоѓа десно од споредната дијагонала во истата редица и е помал од просекот на елементите лево од споредната дијагонала во истата редица, треба да се замени со `-1`**. Вака трансформираната матрица да се испечати на екран.

**Објаснување на примерот:**

2 3 5 **9**

7 8 **4** 2

4 **2** 3 5

**7** 10 9 2

За втората редица, елементот на споредната дијагонала е `4`. Елементите лево од него се `7` и `8`, чиј просек е `7.5`. Елементот десно од него е `2`. Бидејќи `2` е помал од `7.5`, тој се заменува со `-1`.


## Test Cases


### Test Case 1

**Input:**
```text
4
2 3 5 9
7 8 4 2
4 2 3 5
7 10 9 2
```
**Expected output:**

```text
2 3 5 9
7 8 4 -1
4 2 -1 5
7 10 9 2
```





### Test Case 2

**Input:**
```text
5
1 2 3 4 5
2 7 9 13 3
4 6 8 3 1
7 2 9 10 6
5 3 9 2 1
```
**Expected output:**

```text
1 2 3 4 5
2 7 9 13 -1
4 6 8 -1 -1
7 2 9 10 -1
5 3 9 2 1
```





### Test Case 3

**Input:**
```text
3
7 2 8
4 3 2
2 5 2
```
**Expected output:**

```text
7 2 8
4 3 -1
2 5 2
```





### Test Case 4

**Input:**
```text
7
5 8 9 3 2 6 1
5 2 9 2 5 4 10
2 3 4 2 3 2 4
10 2 5 9 3 4 6
7 13 2 9 11 9 13
3 4 1 5 1 2 5
2 9 8 7 6 2 5
```
**Expected output:**

```text
5 8 9 3 2 6 1
5 2 9 2 5 4 10
2 3 4 2 3 -1 4
10 2 5 9 -1 -1 6
7 13 2 -1 11 -1 13
3 4 -1 5 -1 -1 5
2 9 8 7 6 2 5
```
