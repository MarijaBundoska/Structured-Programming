## Exercise 56 - Swapping the Main Diagonal with a Row and Column

On standard input, a number **N** is entered, representing the dimensions of an **N × N** matrix. Then, the elements of the matrix are entered. After entering the matrix, a value **Y** is entered, representing the row and column index.

Transform the matrix so that the main diagonal is replaced by column **Y**, while column **Y** and row **Y** are replaced by the main diagonal.

## Задача 56 - Замена на главната дијагонала со редица и колона

На стандарден влез се внесува број **N** за димензии на матрица **N × N**, потоа се внесуваат елементите на матрицата. По внесување на матрицата се внесува и вредност **Y** за колоната и редицата.

Да се направи трансформација на матрицата така што главната дијагонала се заменува со колоната **Y**, а колоната и редицата **Y** се заменуваат со главната дијагонала.

## Test Cases


### Test Case 1

**Input:**
```text
5
9 1 2 3 4
1 9 2 3 4
1 2 9 3 4
1 2 3 9 4
1 2 3 4 9
0
```
**Expected output:**

```text
9 9 9 9 9
9 1 2 3 4
9 2 1 3 4
9 2 3 1 4
9 2 3 4 1
```


### Test Case 2

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
3
```
**Expected output:**

```text
2 7 1 4 9 0 9 8
5 7 7 1 9 5 5 9
4 7 0 1 9 6 0 0
4 1 1 6 8 6 1 9
1 8 6 8 1 9 8 7
9 8 6 6 3 1 8 4
7 3 9 1 4 2 7 8
3 5 7 9 2 0 7 2
```




### Test Case 3

**Input:**
```text
10
5 1 2 0 0 7 3 8 3 5
3 3 8 2 2 2 6 1 1 2
9 1 7 6 8 1 2 6 2 4
0 1 9 8 8 7 4 3 8 4
5 1 1 4 8 4 2 3 7 4
6 5 1 1 7 8 8 1 4 3
9 6 2 0 4 9 0 7 0 2
8 8 6 8 3 6 8 7 7 6
3 1 6 6 2 5 7 1 4 5
7 1 5 0 0 2 4 9 0 0
4
```
**Expected output:**

```text
0 1 2 0 5 7 3 8 3 5
3 2 8 2 3 2 6 1 1 2
9 1 8 6 7 1 2 6 2 4
0 1 9 8 8 7 4 3 8 4
5 3 7 8 8 8 0 7 4 0
6 5 1 1 8 7 8 1 4 3
9 6 2 0 0 9 4 7 0 2
8 8 6 8 7 6 8 3 7 6
3 1 6 6 4 5 7 1 2 5
7 1 5 0 0 2 4 9 0 0
```




### Test Case 4

**Input:**
```text
5
9 0 0 0 0
0 9 0 0 0
0 0 9 0 0
0 0 0 9 0
0 0 0 0 9
2
```
**Expected output:**

```text
0 0 9 0 0
0 0 9 0 0
9 9 9 9 9
0 0 9 0 0
0 0 9 0 0
```
