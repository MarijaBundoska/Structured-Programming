## Exercise 48 - Printing Diagonal Elements of a Matrix

You are given an **N × M** matrix. First, read the integers **N** and **M**, followed by the elements of the matrix.

Your task is to print the diagonal elements (see the image), starting from the **first row** of the matrix.

Refer to the test cases for the expected output.

**Note:** Pay attention to cases where the matrix is not square.

## Задача 48 - Печатење на дијагоналните елементи на матрица

На влез имате **N × M** матрица, каде прво се вчитуваат **N** и **M**, а потоа елементите на матрицата.

Ваша задача е да ги испечатите дијагоналните елементи (види слика), почнувајќи од **првиот ред** на матрицата.

Видете ги тест-примерите за начинот на печатење.

**Напомена:** Внимавајте во случај матрицата да не е квадратна.

<img width="230" height="226" alt="image" src="https://github.com/user-attachments/assets/3da41b08-4f60-4131-85b7-d495eebc73f7" />



## Test Cases


### Test Case 1

**Input:**
```text
3
3
1 2 3
4 5 6
7 8 9
```
**Expected output:**

```text
1
2 4
3 5 7
```




### Test Case 2

**Input:**
```text
4
4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
```
**Expected output:**

```text
1
2 5
3 6 9
4 7 10 13
```




### Test Case 3

**Input:**
```text
2
4
1 2 3 4
5 6 7 8
```
**Expected output:**

```text
1
2 5
3 6
4 7
```



### Test Case 4

**Input:**
```text
1
5
1 2 3 4 5
```
**Expected output:**

```text
1
2
3
4
5
```



### Test Case 5

**Input:**
```text
3
4
1 2 3 4
5 6 7 8
9 1 2 3
```
**Expected output:**

```text
1
2 5
3 6 9
4 7 1
```
