## Exercise 2 - Largest Interesting Number

A natural number is considered *interesting* if its reversed number is divisible by the number of digits in the original number.

The reversed number is formed using the same digits as the original number, but in reverse order. For example, the reversed number of `356` is `653`.

Write a program that reads a natural number `n`, where `n > 9`, and finds and prints the largest natural number smaller than `n` that is interesting.

If the entered number is invalid, print the message `Brojot ne e validen`.

## Задача 2 - Најголем интересен број

Еден природен број е „интересен“ ако неговиот обратен број е делив со бројот на цифри на оригиналниот број.

Обратен број е бројот составен од истите цифри, но во обратен редослед. На пример, обратниот број на `356` е `653`.

Да се напише програма во која се внесува природен број `n`, при што `n > 9`. Треба да се најде и да се испечати најголемиот природен број помал од `n` кој е „интересен“.

Ако внесениот број не е валиден, да се испечати пораката `Brojot ne e validen`.




## Test Cases


### Test Case 1

**Input:**
```text
5
```
**Expected output:**

```text
Brojot ne e validen
```



### Test Case 2

**Input:**
```text
50
```
**Expected output:**

```text
49
```




### Test Case 3

**Input:**
```text
100
```
**Expected output:**

```text
89
```



### Test Case 4

**Input:**
```text
17
```
**Expected output:**

```text
9
```



### Test Case 5

**Input:**
```text
-5
```
**Expected output:**

```text
Brojot ne e validen
```




### Test Case 6

**Input:**
```text
990
```
**Expected output:**

```text
987
```



### Test Case 7

**Input:**
```text
10
```
**Expected output:**

```text
9
```


