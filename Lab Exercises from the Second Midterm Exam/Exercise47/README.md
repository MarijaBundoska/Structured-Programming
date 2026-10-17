## Exercise 47 - Transforming the Column with the Maximum Sum

Read an integer **N** from standard input, representing the number of rows and columns of a square matrix. First, read **N**, followed by the **N × N** elements of the matrix.

Your task is to find the column with the maximum sum of its elements and add that sum to every element in that column.

Finally, print the transformed matrix.

**Note:** If two columns have the same maximum sum, choose the first one encountered.

## Задача 47 - Трансформација на колоната со максимална сума

Од стандарден влез да се прочита квадратна матрица со број на редици и колони **N**. Прво се вчитува бројот **N**, а потоа и **N × N** елементите на матрицата.

Ваша задача е да ја пронајдете колоната со максимална сума на елементите и таа сума да ја додадете на секој елемент на таа колона.

На крај испечатете ја трансформираната матрица.

**Забелешка:** Доколку има две колони со иста максимална сума, да се зачува таа што е прва најдена.


## Test Cases


### Test Case 

**Input:**
```text
3
1 2 3
4 5 6
7 8 9
```
**Expected output:**

```text
1 2 21
4 5 24
7 8 27
```


### Test Case 

**Input:**
```text
5
1 3 5 7 9
10 8 6 4 2
1 1 1 1 1
1 2 3 4 5
5 4 3 2 1
```
**Expected output:**

```text
19 3 5 7 9
28 8 6 4 2
19 1 1 1 1
19 2 3 4 5
23 4 3 2 1
```




### Test Case 

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
11 1 1 1
12 2 2 2
13 3 3 3
14 4 4 4
```
