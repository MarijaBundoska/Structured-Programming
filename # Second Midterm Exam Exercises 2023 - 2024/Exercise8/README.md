## Exercise 8 - Matrix Transformation Using the Letter Z

### Problem Description

From the standard input, the dimensions `m` and `n` of a matrix `A` (`m, n <= 100`) are given, followed by the elements of the matrix. The matrix elements are integers. After the matrix elements, an additional integer `k` is entered, representing the size of the letter Z.

Create a new matrix `M` whose elements are calculated as the sums of the elements lying along the sides of the letter Z. The number of elements forming each side of the letter Z is determined by the given integer `k`.

Each element `M[i][j]` of the new matrix is equal to the sum of the elements along the path that forms the letter Z, starting from the corresponding element `A[i][j]`:
- The top horizontal side of the Z.
- The diagonal side connecting the top-right element to the bottom-left element.
- The bottom horizontal side of the Z.

Elements for which the letter Z cannot be formed remain unchanged in the new matrix.

Print the resulting matrix `M` to the standard output.

### Example

**Input:**
```text
4
5
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
3
```

**Output:**
```text
49 56 63 4 5
84 91 98 9 10
11 12 13 14 15
16 17 18 19 20
```

**Explanation:**

For a letter Z of size `3`, each valid starting position defines a pattern consisting of three elements on the top horizontal side, three elements along the diagonal path, and three elements on the bottom horizontal side. The corner elements are shared between sides and must not be counted twice.



<img width="579" height="216" alt="image" src="https://github.com/user-attachments/assets/342ea55d-e889-4ff2-8a47-6fc6892137b0" />




Examples of the calculations:

- `49 = 1 + 2 + 3 + 7 + 11 + 12 + 13`
- `56 = 2 + 3 + 4 + 8 + 12 + 13 + 14`
- `98 = 8 + 9 + 10 + 14 + 18 + 19 + 20`

## Задача 8 - Трансформација на матрица со користење на буквата Z


### Опис на задачата

Од стандарден влез се задаваат димензиите `m` и `n` на матрицата `A` (`m, n <= 100`), а потоа се внесуваат елементите на матрицата. Елементите се цели броеви. По елементите на матрицата се внесува уште еден цел број `k`, кој ја претставува големината на буквата Z.

Да се креира нова матрица `M`, чии елементи се пресметуваат како збирови на елементите што лежат на страните на буквата Z. Бројот на елементи што ја формираат секоја страна на буквата Z е определен со внесениот цел број `k`.

Секој елемент `M[i][j]` од новата матрица е еднаков на збирот на елементите по патеката што ја формира буквата Z, почнувајќи од соодветниот елемент `A[i][j]`:
- Горната хоризонтална страна на буквата Z.
- Дијагоналната страна што го поврзува горниот десен елемент со долниот лев елемент.
- Долната хоризонтална страна на буквата Z.

Елементите за кои не може да се формира буквата Z остануваат непроменети во новата матрица.

Новодобиената матрица `M` да се испечати на стандарден излез.

### Пример

**Влез:**
```text
4
5
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
3
```

**Излез:**
```text
49 56 63 4 5
84 91 98 9 10
11 12 13 14 15
16 17 18 19 20
```

**Објаснување:**

За буква Z со големина `3`, секоја валидна почетна позиција дефинира патека составена од три елементи на горната хоризонтална страна, три елементи по дијагоналата и три елементи на долната хоризонтална страна. Заедничките аголни елементи не треба да се бројат двапати.


<img width="579" height="216" alt="image" src="https://github.com/user-attachments/assets/affd9a71-2b4a-48e9-a0bd-89f53a47ff89" />




Примери за пресметките:

- `49 = 1 + 2 + 3 + 7 + 11 + 12 + 13`
- `56 = 2 + 3 + 4 + 8 + 12 + 13 + 14`
- `98 = 8 + 9 + 10 + 14 + 18 + 19 + 20`







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
3
```
**Expected output:**

```text
49 56 63 4 5
84 91 98 9 10
11 12 13 14 15
16 17 18 19 20
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
2
```
**Expected output:**

```text
14 18 22 4
30 34 38 8
46 50 54 12
13 14 15 16
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
3
```
**Expected output:**

```text
49 56 63 4 5
84 91 98 9 10
119 126 133 14 15
16 17 18 19 20
21 22 23 24 25
```







### Test Case 4

**Input:**
```text
2
2
1 2
3 4
1
```
**Expected output:**

```text
1 2
3 4
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
4
```
**Expected output:**

```text
115 125 135 4 5 6
175 185 195 10 11 12
235 245 255 16 17 18
19 20 21 22 23 24
25 26 27 28 29 30
31 32 33 34 35 36
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
5
```
**Expected output:**

```text
221 234 247 4 5 6 7
312 325 338 11 12 13 14
403 416 429 18 19 20 21
22 23 24 25 26 27 28
29 30 31 32 33 34 35
36 37 38 39 40 41 42
43 44 45 46 47 48 49
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
6
```
**Expected output:**

```text
456 472 488 504 520 6 7 8 9 10
616 632 648 664 680 16 17 18 19 20
776 792 808 824 840 26 27 28 29 30
936 952 968 984 1000 36 37 38 39 40
1096 1112 1128 1144 1160 46 47 48 49 50
51 52 53 54 55 56 57 58 59 60
61 62 63 64 65 66 67 68 69 70
71 72 73 74 75 76 77 78 79 80
81 82 83 84 85 86 87 88 89 90
91 92 93 94 95 96 97 98 99 100
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
2
```
**Expected output:**

```text
165 183 198 246 222 11
193 304 221 148 259 64
181 229 208 195 300 97
177 215 221 244 258 89
262 286 219 167 148 22
98 81 57 32 14 36
```
