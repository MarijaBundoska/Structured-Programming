## Exercise 13 - Modifying Matrix Rows Based on Their Sum

### Description

Read an integer `X`, the dimensions of a matrix `M` and `N` (integers), and the elements of the matrix with dimensions `M × N` (integers) from standard input.

Write a program that modifies the rows of the matrix according to the following rules:

- If the sum of the elements in a row is greater than `X`, all elements in that row are assigned the value `1`.
- If the sum of the elements in a row is less than `X`, all elements in that row are assigned the value `-1`.
- If the sum of the elements in a row is equal to `X`, all elements in that row are assigned the value `0`.

Print the modified matrix to the screen.

### Example

**Input:**
```text
31
```

<img width="167" height="144" alt="image" src="https://github.com/user-attachments/assets/e7732c7d-3322-43df-83a3-3337f5f54b6b" />



**Output:**


<img width="206" height="143" alt="image" src="https://github.com/user-attachments/assets/208b0475-4ac1-4f24-a03f-5ff5c077a3eb" />




## Задача 13 - Промена на редиците во матрица според нивниот збир

### Опис

Од стандарден влез се вчитува еден цел број `X`, димензиите на матрица `M` и `N` (цели броеви), како и елементите на матрицата со димензии `M × N` (цели броеви).

Да се напише програма што ќе ги промени редиците на матрицата на следниот начин:

- Ако збирот на елементите од редот е поголем од `X`, елементите на тој ред добиваат вредност `1`.
- Ако збирот на елементите од редот е помал од `X`, елементите на тој ред добиваат вредност `-1`.
- Ако збирот на елементите од редот е еднаков на `X`, елементите на тој ред добиваат вредност `0`.

Променетата матрица да се испечати на екран.


### Пример

**Влез:**
```text
31
```

<img width="167" height="144" alt="image" src="https://github.com/user-attachments/assets/fb18d12d-c804-4245-a965-861f544a3062" />



**Излез:**

<img width="206" height="143" alt="image" src="https://github.com/user-attachments/assets/bc1329ae-9c95-4ef2-b0c1-174337c05117" />



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
