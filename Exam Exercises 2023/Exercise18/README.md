# Exercise 18 - Matrix Transformation Using Diagonal Sums

## Task

For a square matrix `A` with dimensions `n x n`, the number `n` (`n > 2`) and the elements of the matrix (real numbers) are entered from standard input.

Let **X** be the sum of the elements below the main diagonal in matrix `A`.

Let **Y** be the sum of the elements below the secondary diagonal in matrix `A`.

Create a new matrix `B` in the following way:

- All elements on the main diagonal in matrix `B` should have the value **X**.
- All elements on the secondary diagonal in matrix `B` should have the value **Y**.
- If an element belongs to both the main and secondary diagonal in matrix `B`, its value should be **X + Y**.
- All remaining elements in matrix `B` should have the value `0`.

Print the new matrix `B` to standard output.

### Example

**Matrix A**

<img width="261" height="153" alt="image" src="https://github.com/user-attachments/assets/1255fedf-4233-4a70-bfcf-d6a0d4d22c5f" />


**Matrix B**

<img width="339" height="153" alt="image" src="https://github.com/user-attachments/assets/50dc1bab-db34-4372-becb-83f01da7f4ae" />


# Задача 18 - Трансформација на матрица со суми на дијагонали

## Опис на задачата

За квадратна матрица `A` со димензии `n x n`, од стандарден влез се внесува бројот `n` (`n > 2`) и елементите на матрицата (реални броеви).

Нека **X** е збирот од елементите под главната дијагонала во матрицата `A`.

Нека **Y** е збирот од елементите под споредната дијагонала во матрицата `A`.

Да се креира нова матрица `B` на следниот начин:

- Сите елементи од главната дијагонала во матрицата `B` треба да имаат вредност **X**.
- Сите елементи од споредната дијагонала во матрицата `B` треба да имаат вредност **Y**.
- Ако даден елемент припаѓа и на главната и на споредната дијагонала во матрицата `B`, тогаш неговата вредност е **X + Y**.
- Сите останати елементи во матрицата `B` имаат вредност `0`.

Новата матрица `B` да се испечати на стандарден излез.

### Пример

**Матрица A**

<img width="261" height="153" alt="image" src="https://github.com/user-attachments/assets/5063f7be-1f41-4f38-a1b5-e46d27c31a26" />


**Матрица B**

<img width="339" height="153" alt="image" src="https://github.com/user-attachments/assets/a9a9d696-889c-4eea-bbef-82a47fe011fc" />


## Test Cases


### Test Case 1

**Input:**
```text
3
101 202 303
11 22 33
1 2 3
```
**Expected output:**

```text
14 0 38
0 52 0
38 0 14
```



### Test Case 2

**Input:**
```text
5
5 5.5 6 1.2 2.5
8 95.1 21.3 13 0.2
34 4.1 37.4 22 6
4.1 5.5 0.7 7 0
42 1.1 3.2 7.5 1.8
```
**Expected output:**

```text
110.2 0 0 0 49.5
0 110.2 0 49.5 0
0 0 159.7 0 0
0 49.5 0 110.2 0
49.5 0 0 0 110.2
```




### Test Case 3

**Input:**
```text
2
1 1
2 2
```
**Expected output:**

```text
2 2
2 2
```




### Test Case 4

**Input:**
```text
6
1 23 2.2 3 5 15
2 3.3 4.4 5.5 6.6 7.7
1 2 3 4 5 6
100 99 98 97 96 95
2.2 4.8 3.3 5.7 4.4 6.6
12 15 11 13 17 14
```
**Expected output:**

```text
386 0 0 0 0 396.7
0 386 0 0 396.7 0
0 0 386 396.7 0 0
0 0 396.7 386 0 0
0 396.7 0 0 386 0
396.7 0 0 0 0 386
```




### Test Case 5

**Input:**
```text
9
1 2 3 4 5 6 7 8 9
10 1.1 1.2 1.3 1.4 1.5 1.6 1.7 1.8
1.9 2.0 2.1 2.2 2.3 2.4 2.5 2.6 2.7
2.8 2.9 3.0 3.1 3.2 3.3 3.4 3.5 3.6
3.7 3.8 3.9 4.0 4.1 4.2 4.3 4.4 4.5
4.6 4.7 4.8 4.9 5.0 5.1 5.2 5.3 5.4
5.5 5.6 5.7 5.8 5.9 6.0 6.1 6.2 6.3
6.4 6.5 6.6 6.7 6.8 6.9 7.0 7.1 7.2
7.3 7.4 7.5 7.6 7.7 7.8 7.9 8.0 8.1
```
**Expected output:**

```text
204.6 0 0 0 0 0 0 0 207.6
0 204.6 0 0 0 0 0 207.6 0
0 0 204.6 0 0 0 207.6 0 0
0 0 0 204.6 0 207.6 0 0 0
0 0 0 0 412.2 0 0 0 0
0 0 0 207.6 0 204.6 0 0 0
0 0 207.6 0 0 0 204.6 0 0
0 207.6 0 0 0 0 0 204.6 0
207.6 0 0 0 0 0 0 0 204.6
```




### Test Case 6

**Input:**
```text
5
5 5 6 1 2
8 95 21 13 0
34 4 37 22 6
4 5 0 7 0
42 1 3 7 1
```
**Expected output:**

```text
108 0 0 0 47
0 108 0 47 0
0 0 155 0 0
0 47 0 108 0
47 0 0 0 108
```





### Test Case 7

**Input:**
```text
7
1.1 1 1.1 1 1.1 1 1.1
0.2 0 0.2 0 0.2 0 0.2
1.3 0 1.3 0 1.3 0 1.3
0.3 1 0.3 1 0.3 1 0.3
0.4 0 1.4 1 0.4 0 1.4
1.5 1 0.5 0 1.5 1 0.5
1 1 1 0 0 0 0
```
**Expected output:**

```text
13.4 0 0 0 0 0 11.4
0 13.4 0 0 0 11.4 0
0 0 13.4 0 11.4 0 0
0 0 0 24.8 0 0 0
0 0 11.4 0 13.4 0 0
0 11.4 0 0 0 13.4 0
11.4 0 0 0 0 0 13.4
```
