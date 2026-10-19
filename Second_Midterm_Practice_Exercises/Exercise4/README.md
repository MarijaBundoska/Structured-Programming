## Exercise 4 - Sum of Matrix Quadrants

### Description

An element of a matrix divides the matrix into four quadrants, as shown in the figure. The element that divides the matrix itself belongs to the fourth quadrant.

Read a matrix with dimensions `N x M` (`1 <= N, M < 100`) from standard input. Then, read two integers representing the row and column indices of an element in the matrix.

Calculate and print the sums of all four quadrants in the following order: first quadrant, second quadrant, third quadrant, and fourth quadrant.

If a quadrant cannot be formed, print `0` as its sum.

<img width="472" height="450" alt="image" src="https://github.com/user-attachments/assets/0f849da3-76cc-4deb-82e9-59983ca4a493" />


## Задача 4 - Суми на квадрантите на матрица

### Опис

Еден елемент од матрица ја дели матрицата на четири квадранти. Притоа, самиот елемент што ја дели матрицата припаѓа во четвртиот квадрант.

Од стандарден влез се внесува матрица со димензии `N x M` (`1 <= N, M < 100`). Потоа се внесуваат два броја што ги претставуваат индексите на еден елемент од матрицата.

Треба да се пресметаат сумите на секој од четирите квадранти и да се испечатат на стандарден излез, по следниот редослед: првиот, вториот, третиот и четвртиот квадрант.

Доколку не може да се формира некој квадрант, за неговата сума треба да се испечати `0`.


<img width="472" height="450" alt="image" src="https://github.com/user-attachments/assets/70a6d77c-9b0b-487d-bf46-2314df040e22" />



## Test Cases


### Test Case 1

**Input:**
```text
2 3
5 7 8
1 2 3
1 1
```
**Expected output:**

```text
15 5 1 5
```




### Test Case 2

**Input:**
```text
4 8
73  6  38  16  34  45  72  59
84  17  68  95  93  94  50  47
56  74  16  96  65  66  81  95
64  44  48  75  71  14  19  10
3 3
```
**Expected output:**

```text
1008 432 156 189
```




### Test Case 3

**Input:**
```text
3 3
1 2 3
4 5 6
7 8 9
1 1
```
**Expected output:**

```text
5 1 11 28
```




### Test Case 4

**Input:**
```text
4 8
81  29  53  46  45  100  84  75
19  87  45  38  3  87  10  53
84  45  50  13  40  30  50  25
39  30  89  5  57  58  7  79
2 2
```
**Expected output:**

```text
639 216 198 503
```





### Test Case 5

**Input:**
```text
2 4
23  16  85  67
89  18  33  46
0 1
```
**Expected output:**

```text
0 0 112 265
```



### Test Case 6

**Input:**
```text
5 4
4 2 7 11
3 8 16 1
17 8 9 5
6 14 4 7
5 15 5 6
3 3
```
**Expected output:**

```text
17 74 49 13
```
