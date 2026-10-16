# Exercise 3 - Array Transformation Based on Element Positions

## Problem Description

Read a sequence of integers from standard input until a value that is not an integer is entered. The sequence should be transformed so that, for each element, all elements after it that are equal to it are increased by the difference between the positions of the two elements.

**Example:**

Input:
```text
5 6 10 5 3 10 10
```

Output:
```text
5 6 10 7 3 13 14
```

# Задача 3 - Трансформација на низа според позициите на елементите

## Опис на задачата

Од стандарден влез се чита низа на цели броеви се додека не се внесе нешто различно од цел број. Треба да се направи трансформација на низата, на тој начин што за секој елемент, сите елементи после него кои што се еднакви со него ќе се зголемат за разликата на позициите помеѓу двата елементи.

**Пример:**

Влез:
```text
5 6 10 5 3 10 10
```

Излез:
```text
5 6 10 7 3 13 14
```



## Test Cases 1


### Test Case 

**Input:**
```text
5
6
10
7
3
10
10
*
```
**Expected output:**

```text
5 6 10 7 3 13 14
```





### Test Case 2

**Input:**
```text
3
3
.
```
**Expected output:**

```text
3 4
```





### Test Case 3

**Input:**
```text
14
2
5
14
2
5
14
a
```
**Expected output:**

```text
14 2 5 17 7 8 20
```





### Test Case 4

**Input:**
```text	
12
3
11
4
7
1
9
m
```
**Expected output:**

```text
12 3 11 4 7 1 9
```
