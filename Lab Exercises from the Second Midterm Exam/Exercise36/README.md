## Exercise 36 - Transforming Array Elements

Read an integer **N** from standard input, followed by **N** elements in an array.

Transform the array by doubling each element and replacing every negative element with its absolute value.

Print the transformed array to standard output, with the elements separated by spaces.

## Задача 36 - Трансформација на елементи во низа

Од стандарден влез да се вчита број **N** и потоа да се вчитаат **N** елементи во една низа. Трансформирајте ја низата со удвојување на секој елемент и замена на секој негативен елемент со неговата апсолутна вредност.

Трансформираната низа да се испечати на стандарден излез, така што елементите ќе се одвоени со празно место меѓу нив.


## Test Cases


### Test Case 1

**Input:**
```text
5
1 -2 3 -4 5
```
**Expected output:**

```text
2 4 6 8 10
```



### Test Case 2

**Input:**
```text
6
-2 -2 -2 2 2 2
```
**Expected output:**

```text
4 4 4 4 4 4
```



### Test Case 3

**Input:**
```text
5
-10 20 30 40 -50
```
**Expected output:**

```text
20 40 60 80 100
```




### Test Case 4

**Input:**
```text
8
-1 -5 -2 6 2 3 -100 -200
```
**Expected output:**

```text
2 10 4 12 4 6 200 400
```
