## Exercise 52 - Magic Square

Read a square matrix with **n** rows and columns from standard input. First, read the integer **n**, followed by the **n × n** elements of the matrix.

Your task is to write a C++ program that determines whether the given matrix is a **magic square**.

A magic square is a square matrix in which the sum of the elements in each row and each column is the same.

If the matrix is a magic square, print `"True"` and replace the elements on the main and secondary diagonals with the common sum of the elements in each row and column.

Otherwise, print `"False"`.

## Задача 52 - Магичен квадрат

Од стандарден влез се вчитува квадратна матрица со **n** редици и колони. Прво се вчитува бројот **n**, па потоа и **n × n** елементите на матрицата.

Вашата задача е да напишете програма во C++ која ќе определува дали дадената матрица е **„магичен квадрат“**.

Магичен квадрат е квадратна матрица каде што збирот на елементите во секој ред и колона е ист.

Доколку матрицата е „магичен квадрат“, да се испечати `"True"` и да се променат елементите од главната и споредната дијагонала со збирот на елементите што е ист за секоја редица и колона.

Во спротивно, да се испечати `"False"`.



## Test Cases


### Test Case 1

**Input:**
```text
4
16 23 44 51
32 36 32 34
54 44 13 23
32 31 45 26
```
**Expected output:**

```text
True
134 23 44 134
32 134 134 34
54 134 134 23
134 31 45 134
```



### Test Case 2

**Input:**
```text
5
1 2 3 4 5
2 2 2 2 2
1 2 2 1 4
55 22 11 22 33
5 44 22 11 54
```
**Expected output:**

```text
False
```



### Test Case 3

**Input:**
```text	
3
8 1 6
3 5 7
4 9 2
```
**Expected output:**

```text
True
15 1 15
3 15 7
15 9 15
```





### Test Case 4

**Input:**
```text
3
54 23 33
23 60 14
24 55 12
```
**Expected output:**

```text
False
```
