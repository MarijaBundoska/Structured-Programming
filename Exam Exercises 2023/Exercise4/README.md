# Exercise 4 - Matrix Quadrants

## Task

An element of a matrix divides the matrix into 4 quadrants, as shown in the figure. The element itself that divides the matrix belongs to the fourth quadrant (`-5` in the example shown in the figure).

A matrix with dimensions `N x M` (`1 <= N, M < 100`) is entered from standard input. Then, two numbers are entered that represent the indices of one element of the matrix.

Find the sums of each of the four quadrants and print them to standard output.

The sums should be printed in the following order:

1. First quadrant
2. Second quadrant
3. Third quadrant
4. Fourth quadrant

If a quadrant cannot be formed, the sum for that quadrant should be printed as `0`.

---

# Вежба 4 - Квадранти на матрица

## Опис на задачата

Еден елемент од матрица ја дели матрицата на 4 квадранти (прикажани на сликата). Притоа самиот елемент кој ја дели матрицата припаѓа во четвртиот квадрант (`-5` во примерот на сликата).

Од стандарден влез се внесува матрица со димензии `N x M` (`1 <= N, M < 100`). Потоа се внесуваат два броеви кои претставуваат индекси на еден елемент од матрицата.

Да се најдат сумите на секој од квадрантите и да се испечатат на стандарден излез.

Притоа се печати сумата за:

1. Првиот квадрант
2. Вториот квадрант
3. Третиот квадрант
4. Четвртиот квадрант

Доколку не може да се креира квадрант, тогаш за сумата на тој квадрант треба да се испечати `0`.

<img width="578" height="547" alt="image" src="https://github.com/user-attachments/assets/0a5f4927-f27a-4cad-8a46-c57a90cbba19" />



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
1 2 3
4 5 6
7 8 9
1 1
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

