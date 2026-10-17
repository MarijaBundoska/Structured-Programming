## Exercise 51 - Replacing Even Elements with the Sum of Their Indices

Read a square matrix with **N** rows and columns from standard input. First, read the integer **N**, followed by the **N × N** elements of the matrix.

Your task is to replace all even elements in the matrix with the sum of their row and column indices.

Finally, print the modified matrix.

## Задача 51 - Замена на парните елементи со збирот на нивните индекси

Од стандарден влез да се прочита квадратна матрица со број на редици и колони **N**. Прво се вчитува бројот **N**, а потоа и **N × N** елементите на матрицата.

Вашата задача е да ги замените сите парни елементи во матрицата со збирот на нивните индекси на редови и колони.

На крај испечатете ја изменетата матрица.

## Test Cases


### Test Case 1

**Input:**
```text
5
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
-1 -2 -3 -4 -5
-5 -6 -7 -8 -9
```
**Expected output:**

```text
1 1 3 3 5
1 7 3 9 5
11 3 13 5 15
-1 4 -3 6 -5
-5 5 -7 7 -9
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
1 1 3
1 5 3
7 3 9
```



### Test Case 3

**Input:**
```text
4
1 1 1 1
2 2 2 2
3 3 3 3
4 4 4 4
```
**Expected output:**

```text
1 1 1 1
1 2 3 4
3 3 3 3
3 4 5 6
```




### Test Case 4

**Input:**
```text
3
1 2 3
4 5 6
7 8 9
```
**Expected output:**

```text
1 1 3
1 5 3
7 3 9
```
