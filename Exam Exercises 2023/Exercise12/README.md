# Exercise 12 - Counting Positive Numbers Recursively

## Description

Write a **recursive function** that will find the number of positive numbers in an integer array.

The function receives as arguments the array for which the number of positive numbers is being determined and the total number of elements in that array.

The function is given with the following prototype:

```text
int BrojPozitivni(int niza[], int n);
```
Write a `main()` function to test the`BrojPozitivni` function.

# Задача 12 - Броење на позитивни броеви со рекурзија


## Опис

Да се напише **рекурзивна функција** која ќе го најде бројот на позитивни броеви од целобројна низа.

Функцијата како аргумент ја прима низата, за која се бара бројот на позитивни броеви и вкупниот број на елементи, кои ги има таа низа.

Функцијата е зададена со следниот прототип:

```text
int BrojPozitivni(int niza[], int n);
```
Да се напише и функција `main()` за тестирање на функцијата `BrojPozitivni`.

## Test Cases


### Test Case 1

**Input:**
```text
2
-2
5
```
**Expected output:**

```text
1
```




### Test Case 2

**Input:**
```text
10
1
-2
3
4
5
-6
7
8
9
10
```
**Expected output:**

```text
8
```



### Test Case 3

**Input:**
```text
11
-1
-2
-5
5
7
-7
5
100
-6
-2
6
```
**Expected output:**

```text
5
```



### Test Case 4

**Input:**
```text
25
-1
-2
-5
5
7
-7
5
100
-6
-2
6
-6
-2
-9
-110
-24
-55
2
4
6
8
10
17
24
-25
```
**Expected output:**

```text
12
```



### Test Case 5

**Input:**
```text
10
1
2
3
4
5
6
7
8
9
10
```
**Expected output:**

```text
10
```



### Test Case 6

**Input:**
```text
10
-1
2
-11
3
5
-8
6
11
2
7
```
**Expected output:**

```text
7
```
