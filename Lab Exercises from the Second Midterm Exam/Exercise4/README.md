# Exercise 4 - Merging Two Sorted Arrays

## Problem Description

Read an array with M elements and an array with N elements from standard input. Your task is to merge the two arrays into a third array sorted in ascending order.

**Explanation:** First, the length of the first array M is entered, followed by the first array. Then, the length of the second array N is entered, followed by the second array.

**Note:** The elements in both input arrays are sorted. The maximum length of the arrays is 100.

---

# Задача 4 - Спојување на две сортирани низи

## Опис на задачата

Од стандарден влез се читаат соодветно низа со M елементи и низа со N елементи, ваша задача е да ги споите двете низи во трета сортирана низа по растечки редослед.

**Објаснување:** Се внесува најпрвин должината на првата низа М, па потоа се чита првата низа, потоа се внесува должината на втората низа N, па втората низа.

**Напомена:** Елементите во двете низи кои се внесуваат се сортирани. Максималната должина на низите е 100.


## Test Cases


### Test Case 1

**Input:**
```text
5
1 4 6 9 15
4
2 5 8 10
```
**Expected output:**

```text
1 2 4 5 6 8 9 10 15
```





### Test Case 2

**Input:**
```text
4
2 6 10 15
6
1 3 4 5 11 16
```
**Expected output:**

```text
1 2 3 4 5 6 10 11 15 16
```





### Test Case 3

**Input:**
```text
5
5 7 9 10 17
6
2 3 4 6 12 16
```
**Expected output:**

```text
2 3 4 5 6 7 9 10 12 16 17
```





### Test Case 4

**Input:**
```text
10
4 6 8 10 12 14 16 18 20 22
8
1 2 3 5 7 9 11 13
```
**Expected output:**

```text
1 2 3 4 5 6 7 8 9 10 11 12 13 14 16 18 20 22
```
