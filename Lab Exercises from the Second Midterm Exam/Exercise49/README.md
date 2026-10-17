## Exercise 49 - Replacing the Last Element of Each Row

Read two integers **M** and **N** from standard input, representing the dimensions of an **M × N** matrix. Then, read the elements of the matrix.

Your task is to replace the last element of each row with the maximum element in that row.

Finally, print the modified matrix and, on a new line, the average value of the modified matrix.

## Задача 49 - Замена на последниот елемент во секој ред

Од стандарден влез се вчитуваат 2 броја **M** и **N**, кои ги означуваат димензиите на матрицата **M × N**, а потоа се внесуваат елементите во матрицата.

Вашата задача е последниот елемент во секој од редовите на матрицата да го замените со максималниот елемент од тој ред.

На крај испечатете ја изменетата матрица и во нов ред средната вредност на изменетата матрица.


## Test Cases


### Test Case 1

**Input:**
```text
2 3
1 2 3
4 5 6
```
**Expected output:**

```text
1 2 3
4 5 6
3.5
```



### Test Case 2

**Input:**
```text
3 4
1 5 6 7
5 4 7 3
5 5 7 7
```
**Expected output:**

```text
1 5 6 7
5 4 7 7
5 5 7 7
5.5
```



### Test Case 3

**Input:**
```text
2 3
3 1 2
5 9 4
```
**Expected output:**

```text
3 1 3
5 9 9
5
```




### Test Case 4

**Input:**
```text
5 5
1 4 6 7 8
1 6 4 3 5
8 6 3 5 3
3 6 8 4 2
5 5 5 5 5
```
**Expected output:**

```text
1 4 6 7 8
1 6 4 3 6
8 6 3 5 8
3 6 8 4 8
5 5 5 5 5
5.2
```




### Test Case 5

**Input:**
```text
4 4
7 6 8 5
4 6 3 2
5 6 3 7
4 4 3 4
```
**Expected output:**

```text
7 6 8 8
4 6 3 6
5 6 3 7
4 4 3 4
5.25
```
