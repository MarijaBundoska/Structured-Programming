## Exercise 5 - Even Equivalent Number

### Description

Read two positive integers from the keyboard. If at least one of the numbers is negative or equal to zero, print `Invalid input`.

Determine whether the smaller number is an **even equivalent** of the larger number.

A number is an even equivalent of another number if and only if its digits appear at the even positions of the other number, in the same order.

The digit positions are counted from right to left, where the least significant digit is at position 1.

Print `PAREN` if the smaller number is an even equivalent of the larger number. Otherwise, print `NE`.

## Задача 5 - Број со парен еквивалент

### Опис

Од тастатура се читаат два позитивни цели броеви. Доколку барем еден од броевите е негативен или е еднаков на нула, да се отпечати `Invalid input`.

Потребно е да се определи дали помалиот број е **парен еквивалент** на поголемиот број.

Еден број е парен еквивалент на друг број ако и само ако неговите цифри се наоѓаат на парните позиции од другиот број, во истиот редослед.

Позициите се бројат оддесно налево, при што најмалку значајната цифра се наоѓа на позиција 1.

Да се отпечати `PAREN` доколку помалиот број е парен еквивалент на поголемиот број. Во спротивно, да се отпечати `NE`.




## Test Cases


### Test Case 1

**Input:**
```text
12345678 1357
```
**Expected output:**

```text
PAREN
```



### Test Case 2

**Input:**
```text
15370 57
```
**Expected output:**

```text
PAREN
```



### Test Case 3

**Input:**
```text
1537 57
```
**Expected output:**

```text
NE
```



### Test Case 4

**Input:**
```text
-6 99
```
**Expected output:**

```text
Invalid input
```



### Test Case 6

**Input:**
```text
5573 58
```
**Expected output:**

```text
NE
```



### Test Case 7

**Input:**
```text
1234 13
```
**Expected output:**

```text
PAREN
```


### Test Case 7

**Input:**
```text
567890 7
```
**Expected output:**

```text
NE
```



### Test Case 8

**Input:**
```text
45 14456
```
**Expected output:**

```text
PAREN
```


### Test Case 9

**Input:**
```text
0 0
```
**Expected output:**

```text
Invalid input
```




### Test Case 10

**Input:**
```text
5573 57
```
**Expected output:**

```text
PAREN
```

