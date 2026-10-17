## Exercise 54 - Replacing Negative Elements with the Sum of Their Neighbors

Write a program that reads a square matrix. First, read the integer **N**, representing the number of rows and columns of the matrix, followed by the elements of the matrix.

Transform the matrix by replacing every negative number with the sum of its neighbors.

The neighbors of an element in a matrix are the elements directly adjacent to it horizontally and vertically.

## Задача 54 - Замена на негативните елементи со збирот на нивните соседи

Да се напише програма која вчитува квадратна матрица. На почетокот се внесува бројот на редици и колони **N** на матрицата, а потоа и елементите на матрицата.

Да се трансформира матрицата на тој начин што секој негативен број во неа би се заменил со збирот на неговите соседи.

Соседи на даден број во матрица се броевите до него (гледано хоризонтално и вертикално).


## Test Cases


### Test Case 1

**Input:**
```text
4
5
6
7
8
20
-1
4
3
50
1
2
-6
5
-8
5
4
```
**Expected output:**

```text
5 6 7 8
20 31 4 3
50 1 2 9
5 11 5 4
```


### Test Case 2

**Input:**
```text
5
2
-15
0
3
-2
7
18
16
5
4
-18
4
1
30
-8
3
5
-5
7
5
-6
1
13
10
-20
```
**Expected output:**

```text
2 20 0 3 7
7 18 16 5 4
14 4 1 30 39
3 5 26 7 5
4 1 13 10 15
```




### Test Case 3

**Input:**
```text
3
4
-6
8
10
-5
1
3
-6
15
```
**Expected output:**

```text
4 7 8
10 12 1
3 30 15
```
