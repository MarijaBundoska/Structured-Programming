## Exercise 55 - Adding Row Minima to the Subsequent Rows

Read a square matrix with **N** rows and columns from standard input. First, read the number **N**, followed by the **N × N** elements of the matrix.

Your task is to find the minimum element in each odd-numbered row and add this minimum value to every element in the subsequent (even-numbered) row.

## Задача 55 - Додавање на минималните елементи во следните редови

Од стандарден влез да се прочита квадратна матрица со број на редици и колони **N**. Прво се вчитува бројот **N**, а потоа и **N × N** елементите на матрицата.

Ваша задача е да го пронајдете минималниот елемент во секој непарен ред и да ја додадете оваа минимална вредност на секој елемент во следниот (парен) ред.


## Test Cases


### Test Case 1

**Input:**
```text
3
1 2 3
4 5 6
7 8 9
```
**Expected output:**

```text
1 2 3
5 6 7
7 8 9
```


### Test Case 2

**Input:**
```text	
4
2 5 1 6
7 12 3 4
9 6 5 4
1 1 2 3
```
**Expected output:**

```text
2 5 1 6
8 13 4 5
9 6 5 4
5 5 6 7
```




### Test Case 3

**Input:**
```text
5
1 3 6 0 7
6 4 8 9 2
8 12 15 6 10
7 2 1 0 0
9 6 4 5 2
```
**Expected output:**

```text
1 3 6 0 7
6 4 8 9 2
8 12 15 6 10
13 8 7 6 6
9 6 4 5 2
```
