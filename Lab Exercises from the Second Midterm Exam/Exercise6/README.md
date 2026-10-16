# Exercise 6 - Array Transformation Based on Parity

## Problem Description

Read an integer `N` from standard input, followed by `N` elements of an array.

Transform the input array so that even elements are increased by 1, while odd elements are decreased by 1.

Print the transformed array to standard output, with the elements separated by spaces.


# Задача 6 - Трансформација на низа според парноста на елементите

## Опис на задачата

Од стандарден влез да се вчита број `N` и потоа да се вчитаат `N` елементи во една низа.

Внесената низа да се трансформира на начин што парните елементи ќе се зголемат за 1, а непарните ќе се намалат за 1.

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
0 3 2 5 4
```




### Test Case 2

**Input:**
```text
10
-2 1 1 1 1 1 1 1 1 1
```
**Expected output:**

```text
-1 0 0 0 0 0 0 0 0 0
```




### Test Case 3

**Input:**
```text
10
1 2 3 4 5 6 7 7 8 9
```
**Expected output:**

```text
0 3 2 5 4 7 6 6 9 8
```
