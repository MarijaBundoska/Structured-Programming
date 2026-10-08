# Exercise 17 - Matrix Transformation

## Task

The dimensions of a matrix (`m`, `n` <= 100) are entered from the keyboard, followed by the elements of the matrix.

The matrix should be transformed so that the middle element in each row is replaced with the **absolute difference** between the sum of the elements in the first half of the row and the sum of the elements in the second half of the row.

If the matrix has an even number of columns, the values of the **two middle elements** are changed.

The middle element(s) are included in the sums. For an odd number of columns, the middle element is included in **both sums**.

Print the transformed matrix.

### Example

**Input:**

```text
m = 4
n = 4

1 3 -5 4
2 10 2 10
7 2 3 5
3 2 10 3
```

**Output:**
```text
1 5 5 4
2 0 0 10
7 1 1 5
3 8 8 3
```


# Задача 17 - Трансформација на матрица

## Опис на задачата

Од тастатура се внесуваат димензиите на една матрица (`m`, `n` <= 100), а потоа и елементите од матрицата.

Да се трансформира матрицата така што средниот елемент во секоја редица ќе се замени со **разликата (по апсолутна вредност)** на сумата на елементите во првата половина од редицата и сумата на елементите во втората половина на редицата.

Ако матрицата има парен број колони, се менува вредноста на **средните два елементи**.

Средниот/те елемент/и влегува/ат во сумите. При непарен број на колони, средниот елемент влегува во **двете суми**.

Да се испечати на екран променетата матрица.

### Пример

**Влез:**

```text
m = 4
n = 4

1 3 -5 4
2 10 2 10
7 2 3 5
3 2 10 3
```

**Излез:**
```text
1 5 5 4
2 0 0 10
7 1 1 5
3 8 8 3
```



## Test Cases


### Test Case 1

**Input:**
```text
4 5
1 0 0 3 1
0 0 1 2 5
1 2 1 0 0
1 1 0 0 3
```
**Expected output:**

```text
1 0 3 3 1
0 0 7 2 5
1 2 3 0 0
1 1 1 0 3
```



### Test Case 2

**Input:**
```text
2 3
5 3 0
9 6 0
```
**Expected output:**

```text
5 5 0
9 9 0
```




### Test Case 3

**Input:**
```text
10 10
0 1 2 3 4 4 3 2 1 0
1 2 3 4 0 0 1 2 3 4
0 0 0 0 0 1 2 3 4 5
5 4 3 2 1 0 0 0 0 0
0 1 0 2 0 3 0 4 0 5
1 2 3 0 0 0 4 5 0 0
1 2 0 0 0 0 0 5 4 3
5 4 0 0 1 0 0 0 2 3
4 0 0 2 0 0 1 3 0 5
3 0 4 0 0 1 2 0 5 0
```
**Expected output:**

```text
0 1 2 3 0 0 3 2 1 0
1 2 3 4 0 0 1 2 3 4
0 0 0 0 15 15 2 3 4 5
5 4 3 2 15 15 0 0 0 0
0 1 0 2 9 9 0 4 0 5
1 2 3 0 3 3 4 5 0 0
1 2 0 0 9 9 0 5 4 3
5 4 0 0 5 5 0 0 2 3
4 0 0 2 3 3 1 3 0 5
3 0 4 0 1 1 2 0 5 0
```




### Test Case 4

**Input:**
```text
5 6
0 0 0 0 0 0
-5 0 0 0 4 -2
0 0 0 45 -23 11
-100 -30 -20 0 0 0
-10 0 22 0 14 0
```
**Expected output:**

```text
0 0 0 0 0 0
-5 0 7 7 4 -2
0 0 33 33 -23 11
-100 -30 150 150 0 0
-10 0 2 2 14 0
```




### Test Case 5

**Input:**
```text
5 5
1 2 3 2 1
-1 -2 -3 1 2
3 0 2 0 1
-5 5 -4 4 2
10 20 30 40 50
```
**Expected output:**

```text
1 2 0 2 1
-1 -2 6 1 2
3 0 2 0 1
-5 5 6 4 2
10 20 60 40 50
```




### Test Case 6

**Input:**
```text
4 4
1 3 -5 4
2 10 2 10
7 2 3 5
3 2 10 3
```
**Expected output:**

```text
1 5 5 4
2 0 0 10
7 1 1 5
3 8 8 3
```
