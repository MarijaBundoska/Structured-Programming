## Exercise 46 - Changing the Sign of Elements Below Both Diagonals

Read an integer **n** from standard input, representing the dimensions of a square matrix. Then, read the matrix.

Transform the matrix by changing the sign of every element that is located below both the main diagonal and the secondary diagonal.

The sign of an element is changed as follows:
- Positive numbers become negative.
- Negative numbers become positive.

**Example:**

For a 5 × 5 matrix, the elements marked in bold are located below both the main and secondary diagonals.

1  2  3  4  5
1  2  3  4  5
1  2  3  4  5
1  2 *3*  4  5
1 *2* *3* *4*  5


## Test Cases


### Test Case 1

**Input:**
```text
5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
```
**Expected output:**

```text
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 -3 4 5
1 -2 -3 -4 5
```


### Test Case 2

**Input:**
```text
4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
```
**Expected output:**

```text
1 2 3 4
5 6 7 8
9 10 11 12
13 -14 -15 16
```



### Test Case 3

**Input:**
```text
7
1 1 1 1 1 1 1
1 1 1 1 1 1 1
1 1 1 1 1 1 1
1 1 1 1 1 1 1
1 1 1 1 1 1 1
1 1 1 1 1 1 1
1 1 1 1 1 1 1
```
**Expected output:**

```text
1 1 1 1 1 1 1
1 1 1 1 1 1 1
1 1 1 1 1 1 1
1 1 1 1 1 1 1
1 1 1 -1 1 1 1
1 1 -1 -1 -1 1 1
1 -1 -1 -1 -1 -1 1
```




### Test Case 4

**Input:**
```text
10
0 1 2 3 4 5 6 7 8 9
0 1 2 3 4 5 6 7 8 9
0 1 2 3 4 5 6 7 8 9
0 1 2 3 4 5 6 7 8 9
0 1 2 3 4 5 6 7 8 9
0 1 2 3 4 5 6 7 8 9
0 1 2 3 4 5 6 7 8 9
0 1 2 3 4 5 6 7 8 9
0 1 2 3 4 5 6 7 8 9
0 1 2 3 4 5 6 7 8 9
```
**Expected output:**

```text
0 1 2 3 4 5 6 7 8 9
0 1 2 3 4 5 6 7 8 9
0 1 2 3 4 5 6 7 8 9
0 1 2 3 4 5 6 7 8 9
0 1 2 3 4 5 6 7 8 9
0 1 2 3 4 5 6 7 8 9
0 1 2 3 -4 -5 6 7 8 9
0 1 2 -3 -4 -5 -6 7 8 9
0 1 -2 -3 -4 -5 -6 -7 8 9
0 -1 -2 -3 -4 -5 -6 -7 -8 9
```




### Test Case 5

**Input:**
```text
2
1 2
2 1
```
**Expected output:**

```text
1 2
2 1
```


