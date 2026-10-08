# Exercise 13 - Matrix Row Modification

## Description

From standard input, an **integer `X`**, the **dimensions of a matrix `M` and `N`** (integers), as well as the **elements of the matrix with dimensions `M x N`** (integers) are read.

Write a program that will modify the **rows** of the matrix in the following way:

- If the sum of the elements of a row is greater than `X`, the elements of that row are assigned the value `1`.
- If the sum of the elements of a row is less than `X`, the elements of that row are assigned the value `-1`.
- If the sum of the elements of a row is equal to `X`, the elements of that row are assigned the value `0`.

The **modified** matrix should be printed on the screen.

### Example

**Input:**

```text
31
```
<img width="188" height="171" alt="image" src="https://github.com/user-attachments/assets/aeddfd00-8e37-49dd-83a8-3b0d267c9283" />


**Output:**

<img width="233" height="173" alt="image" src="https://github.com/user-attachments/assets/d828e1d3-ca61-4e5a-acdb-b397d906d0ae" />

# Задача 13 - Промена на редици во матрица


Од стандарден влез се вчитува еден **цел број `X`**, **димензии на матрица `M` и `N`** (цели броеви), како и **елементите на матрицата со димензии `M x N`** (цели броеви).

Да се напише програма што ќе ги промени **редиците** на матрицата на следниот начин:

- Ако збирот на елементите од редот е поголем од `X`, елементите на тој ред добиваат вредност `1`.
- Ако збирот на елементите од редот е помал од `X`, елементите на тој ред добиваат вредност `-1`.
- Ако збирот на елементите од редот е еднаков на `X`, елементите на тој ред добиваат вредност `0`.

**Променетата** матрица да се испечати на екран.

### Пример

**Влез:**

```text
31
```
<img width="188" height="171" alt="image" src="https://github.com/user-attachments/assets/65d410c5-b67b-44b0-95f6-b88d78307ab3" />

**Излез:**
<img width="233" height="173" alt="image" src="https://github.com/user-attachments/assets/4c9e1bda-5da6-46b9-9a6c-4ad5e3100784" />


## Test Cases


### Test Case 1

**Input:**
```text
17
4 6
1 5 7 2 1 1
10 0 0 5 1 1
5 8 3 9 1 0
9 8 2 5 3 4
```
**Expected output:**

```text
0 0 0 0 0 0
0 0 0 0 0 0
1 1 1 1 1 1
1 1 1 1 1 1
```



### Test Case 2

**Input:**
```text
10
4 4
2 2 2 2
3 3 3 3
5 0 5 0
3 2 1 4
```
**Expected output:**

```text
-1 -1 -1 -1
1 1 1 1
0 0 0 0
0 0 0 0
```




### Test Case 3

**Input:**
```text
20
5 6
5 4 1 3 3 4
16 2 4 7 1 2
0 12 3 1 0 2
14 12 3 2 1 1
1 10 2 5 1 1
```
**Expected output:**

```text
0 0 0 0 0 0
1 1 1 1 1 1
-1 -1 -1 -1 -1 -1
1 1 1 1 1 1
0 0 0 0 0 0
```




### Test Case 4

**Input:**
```text
31
5 4
4 2 7 11
3 8 16 1
17 8 9 5
6 14 4 7
5 15 5 6
```
**Expected output:**

```text
-1 -1 -1 -1
-1 -1 -1 -1
1 1 1 1
0 0 0 0
0 0 0 0
```




### Test Case 5

**Input:**
```text
12
2 3
5 7 8
1 2 3
```
**Expected output:**

```text
1 1 1
-1 -1 -1
```
