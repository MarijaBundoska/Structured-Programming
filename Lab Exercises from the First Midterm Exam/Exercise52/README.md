## Exercise 52 - Checking Digit Positions in Two Numbers

### Problem Description

Write a program that reads two natural numbers.

The program must check whether the digits at **odd positions** in the first number are located at **even positions** in the second number.

Positions are counted from left to right, starting from position `0` for the first digit.

If the condition is satisfied, print `DA`. Otherwise, print `NE`.

### Input

Two natural numbers.

### Output

Print `DA` if the condition is satisfied, or `NE` otherwise.

## Задача 52 - Проверка на позициите на цифрите во два броја

### Опис на проблемот

Да се напише програма која ќе прочита два природни броја.

Програмата треба да провери дали цифрите што се наоѓаат на **непарни позиции во првиот број** се наоѓаат на **парни позиции во вториот број**.

Позициите се бројат одлево надесно, при што првата цифра се наоѓа на позиција `0`.

Доколку условот е исполнет, програмата треба да испечати `DA`. Во спротивно, треба да испечати `NE`.

### Влез

Два природни броја.

### Излез

Да се испечати `DA` доколку условот е исполнет, а во спротивно `NE`.


## Test Cases


### Test Case 1

**Input:**
```text
1234567
654321
```
**Expected output:**

```text
DA
```



### Test Case 2

**Input:**
```text
13579
97531
```
**Expected output:**

```text
NE
```




### Test Case 3

**Input:**
```text
2468
12468
```
**Expected output:**

```text
DA
```



### Test Case 4

**Input:**
```text
11223344
12341234
```
**Expected output:**

```text
NE
```
