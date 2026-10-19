## Exercise 6 - Counting Rows and Columns with Three Consecutive Ones

### Description

Write a program that reads a matrix with dimensions `M x N` (maximum size `100 x 100`). First, the dimensions of the matrix are entered, followed by its elements, which can only have values of `1` and `0`.

The program should count and print the number of rows and columns that contain at least three consecutive elements with the value `1`.

## Задача 6 - Броење редици и колони со три последователни единици

### Опис

Да се напише програма која вчитува матрица со димензии `M x N` (максимум `100 x 100`). На почетокот се внесуваат димензиите на матрицата, а потоа и нејзините елементи, кои можат да имаат само вредности `1` и `0`.

Програмата треба да изброи и да испечати на стандарден излез во колку редици и колони има барем три последователни елементи со вредност `1`.


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
