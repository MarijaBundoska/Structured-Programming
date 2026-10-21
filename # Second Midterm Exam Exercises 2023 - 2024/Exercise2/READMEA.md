## Exercise 2 - Sum of Z-Shaped Patterns in a Matrix

The dimensions of a matrix `A` (`m, n <= 100`) are entered from standard input, followed by its integer elements.

Print all sums obtained by tracing the letter **Z** pattern in the matrix `A`.

The first pattern is formed using the submatrix `A₁` of size `2 × 2`, starting at index `(0, 0)` in matrix `A`. The next pattern is formed using the submatrix `A₂` of size `3 × 3`, also starting at index `(0, 0)`, and so on. For each submatrix, calculate the sum of the elements that form the letter **Z**.

### Example

**Input:**
```text
4
5
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
```

**Output:**
```text
16
49
100
```

### Македонски

## Вежба 2 - Збир на елементи во форма на буквата Z во матрица

Од стандарден влез се задаваат димензиите на матрицата `A` (`m, n <= 100`), а потоа се внесуваат нејзините елементи. Елементите на матрицата се цели броеви.

Потребно е да се испечатат сите збирови што се добиваат со испишување на шаблонот за буквата **Z** во матрицата `A`.

Првиот шаблон се добива од подматрицата `A₁` со димензии `2 × 2`, почнувајќи од индекс `(0, 0)` во матрицата `A`. Следниот шаблон се добива од подматрицата `A₂` со димензии `3 × 3`, исто така почнувајќи од индекс `(0, 0)` во матрицата `A`, и така натаму.

За секоја подматрица треба да се пресмета збирот на елементите што ја формираат буквата **Z**, а потоа да се испечати добиениот збир.





<img width="881" height="343" alt="image" src="https://github.com/user-attachments/assets/7eeabecc-3f5c-4aaa-a1dd-d5eaca5c0131" />





### Пример

**Влез:**
```text
4
5
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
```

**Излез:**
```text
16
49
100
```




## Test Cases


### Test Case 1

**Input:**
```text
4
5
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
```
**Expected output:**

```text
16
49
100
```




### Test Case 2

**Input:**
```text
4
4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
```
**Expected output:**

```text
14
42
85
```




### Test Case 3

**Input:**
```text
5
5
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25
```
**Expected output:**

```text
16
49
100
169
```




### Test Case 4

**Input:**
```text
2
2
1 2
3 4
```
**Expected output:**

```text
10
```




### Test Case 5

**Input:**
```text
6
6
1 2 3 4 5 6
7 8 9 10 11 12
13 14 15 16 17 18
19 20 21 22 23 24
25 26 27 28 29 30
31 32 33 34 35 36
```
**Expected output:**

```text
18
56
115
195
296
```



### Test Case 6

**Input:**
```text
7
7
1 2 3 4 5 6 7
8 9 10 11 12 13 14
15 16 17 18 19 20 21
22 23 24 25 26 27 28
29 30 31 32 33 34 35
36 37 38 39 40 41 42
43 44 45 46 47 48 49
```
**Expected output:**

```text
20
63
130
221
336
475
```




### Test Case 7

**Input:**
```text
10
10
1 2 3 4 5 6 7 8 9 10
11 12 13 14 15 16 17 18 19 20
21 22 23 24 25 26 27 28 29 30
31 32 33 34 35 36 37 38 39 40
41 42 43 44 45 46 47 48 49 50
51 52 53 54 55 56 57 58 59 60
61 62 63 64 65 66 67 68 69 70
71 72 73 74 75 76 77 78 79 80
81 82 83 84 85 86 87 88 89 90
91 92 93 94 95 96 97 98 99 100
```
**Expected output:**

```text
26
84
175
299
456
646
869
1125
1414
```



### Test Case 8

**Input:**
```text
6
6
34 25 16 78 92 11
47 59 83 21 55 64
13 74 88 29 43 97
66 28 39 52 71 89
20 63 85 45 76 22
98 81 57 32 14 36
```
**Expected output:**

```text
165
309
495
671
760
```



