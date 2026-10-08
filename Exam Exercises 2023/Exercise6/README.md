# Exercise 6 - Matrix Rows and Columns with Consecutive Ones

## Task

Write a program that reads a matrix with dimensions `M x N` (maximum `100 x 100`).

First, the dimensions of the matrix are entered, followed by the elements of the matrix, which can only have the values `1` and `0`.

The program should count and print to standard output in how many of the rows and columns there are at least **3 consecutive elements** with the value `1`.

### Example

<img width="164" height="108" alt="image" src="https://github.com/user-attachments/assets/02bb701a-b4cc-402f-9fc6-478c7b93e36d" />

```text
1 row + 1 column = 2
```

# Задача 6 - Редици и колони со последователни единици

## Опис на задачата

Да се напише програма која вчитува матрица со димензии `M x N` (макс.`100 x 100`).

На почетокот се внесуваат димензиите на матрицата, а потоа и елементите на матрицата кои се само вредностите `1` и `0`.

Програмата треба да изброи и отпечати на стандарден излез во колку од редиците и колоните има барем **3 последователни елементи** со вредност `1`.

### Пример

<img width="165" height="116" alt="image" src="https://github.com/user-attachments/assets/eb7ff278-c11d-461f-994c-ae953e764cb6" />


```text
1 ред + 1 колона = 2
```


## Test Cases


### Test Case 1

**Input:**
```text
3 8
0 0 1 1 1 0 0 0
1 1 1 0 1 1 1 0
0 1 1 1 1 0 0 1
```
**Expected output:**

```text
5
```



### Test Case 2

**Input:**
```text
7 9
1 0 0 0 0 0 1 1 0
0 0 0 0 1 1 1 1 0
0 1 1 0 1 0 1 1 0
1 1 1 0 0 1 1 0 1
1 1 1 0 0 0 1 0 0
0 1 0 1 1 0 1 0 1
0 0 1 1 0 1 0 0 1
```
**Expected output:**

```text
7
```




### Test Case 3

**Input:**
```text
8 4
0 0 0 1
1 1 0 1
1 1 1 0
1 0 1 0
0 0 0 0
0 0 1 0
1 0 0 0
1 1 0 0
```
**Expected output:**

```text
2
```




### Test Case 4

**Input:**
```text
10 4
0 0 0 1
0 1 0 0
0 0 0 1
1 0 0 0
0 0 0 1
1 0 0 1
0 1 0 0
1 0 1 1
0 1 1 0
1 0 1 1
```
**Expected output:**

```text
1
```




### Test Case 5

**Input:**
```text
4 7
0 1 0 0 1 1 1
1 1 1 1 1 0 0
1 1 1 1 1 1 0
0 0 0 0 1 1 0
```
**Expected output:**

```text
5
```




### Test Case 6

**Input:**
```text
8 6
0 0 1 0 0 0
0 0 0 0 1 0
0 0 1 0 0 0
1 1 1 1 0 1
0 0 1 0 0 1
0 1 1 1 1 0
0 0 1 1 1 1
0 1 0 1 0 0
```
**Expected output:**

```text
5
```




### Test Case 7

**Input:**
```text
3 4
1 1 1 0
1 0 1 1
1 0 0 1
```
**Expected output:**

```text
2
```




### Test Case 8

**Input:**
```text
5 9
1 1 1 1 0 0 1 1 0
1 1 0 1 1 0 0 0 1
0 1 1 1 1 1 1 0 0
1 0 1 1 1 1 0 1 1
1 1 1 0 1 0 0 1 0
```
**Expected output:**

```text
8
```




### Test Case 9

**Input:**
```text
4 5
1 1 0 1 1
0 1 1 1 1
0 0 0 0 1
0 0 1 1 1
```
**Expected output:**

```text
3
```




### Test Case 10

**Input:**
```text
10 10
1 1 0 1 1 1 1 0 1 1
0 0 1 1 0 0 1 1 0 1
0 1 1 0 0 0 1 1 0 0
1 1 0 1 1 0 1 0 1 0
0 0 1 0 1 1 1 1 1 0
1 1 0 0 1 0 1 1 1 0
0 1 0 1 1 0 0 0 0 1
0 1 0 1 0 1 0 0 0 1
1 0 1 0 1 0 1 0 0 0
1 0 0 0 1 0 0 0 0 0
```
**Expected output:**

```text
7
```
