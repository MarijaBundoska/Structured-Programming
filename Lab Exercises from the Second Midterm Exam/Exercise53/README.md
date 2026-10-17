## Exercise 53 - Replacing Minimum and Maximum Elements in Each Row

Read a square matrix with **N** rows and columns from standard input. First, read the integer **N**, followed by the **N × N** elements of the matrix.

Your task is to find the minimum and maximum elements in each row and replace them with **0** and **1**, respectively (**min = 0, max = 1**).

If the minimum or maximum element appears more than once in a row, all occurrences must be replaced.

Finally, print the transformed matrix.

## Задача 53 - Замена на минималните и максималните елементи во секој ред

Од стандарден влез да се прочита квадратна матрица со број на редици и колони **N**. Прво се вчитува бројот **N**, а потоа и **N × N** елементите на матрицата.

Ваша задача е да ги пронајдете минималниот и максималниот број од секоја редица и соодветно да ги промените во **0** и **1** (**min = 0, max = 1**).

Доколку најмалиот или најголемиот број се повторуваат повеќе пати, треба сите да се променат.

На крај испечатете ја трансформираната матрица.


## Test Cases


### Test Case 1

**Input:**
```text
4
55 39 73 46
21 53 36 88
96 44 32 64
39 67 47 25
```
**Expected output:**

```text
55 0 1 46
0 53 36 1
1 44 0 64
39 1 47 0
```



### Test Case 2

**Input:**
```text
5
61 23 58 42 50
19 35 43 77 24
18 12 36 34 45
60 75 47 21 48
33 65 88 53 27
```
**Expected output:**

```text
1 0 58 42 50
0 35 43 1 24
18 0 36 34 1
60 1 47 0 48
33 65 1 53 0
```




### Test Case 3

**Input:**
```text
4
23 47 68 23
34 65 65 12
35 13 13 46
24 53 41 53
```
**Expected output:**

```text
0 47 1 0
34 1 1 0
35 0 0 1
0 1 41 1
```




### Test Case 4

**Input:**
```text
3
17 54 17
19 19 19
67 38 67
```
**Expected output:**

```text
0 1 0
0 0 0
1 0 1
```
