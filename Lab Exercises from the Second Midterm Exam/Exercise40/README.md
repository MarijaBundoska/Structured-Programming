## Exercise 40 - Transforming Array Elements Using Their Left Neighbors

Read an integer **N** from standard input, followed by **N** elements in an array.

Transform the array by adding the previous left neighbor to every second element in the array.

Print the transformed array to standard output, with the elements separated by spaces.

## Задача 40 - Трансформација на елементи во низа со користење на левите соседи

Од стандарден влез да се вчита број **N** и потоа да се вчитаат **N** елементи во една низа.

Внесената низа да се трансформира на начин што за секој втор елемент во низата, да му се додаде неговиот претходен лев сосед.

Трансформираната низа да се испечати на стандарден излез, така што елементите ќе се одвоени со празно место меѓу нив.



## Test Cases


### Test Case 1

**Input:**
```text
5
1 2 3 4 5
```
**Expected output:**

```text
1 2 3 4 5
1 3 3 7 5
```





### Test Case 2

**Input:**
```text
10
8 50 74 59 31 73 45 79 24 10
```
**Expected output:**

```text
8 58 74 133 31 104 45 124 24 34
```




### Test Case 3

**Input:**
```text
15
72 57 4 89 74 83 98 74 63 87 99 49 21 63 88
```
**Expected output:**

```text
72 129 4 93 74 157 98 172 63 150 99 148 21 84 88
```



### Test Case 4

**Input:**
```text
7
38 84 15 47 74 43 76
```
**Expected output:**

```text
38 122 15 62 74 117 76
```



### Test Case 5

**Input:**
```text
20
41 17 98 18 92 49 58 85 42 76 4 6 53 83 29 84 3 8 12 35
```
**Expected output:**

```text
41 58 98 116 92 141 58 143 42 118 4 10 53 136 29 113 3 11 12 47
```
