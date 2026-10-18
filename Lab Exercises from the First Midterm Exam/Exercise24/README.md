## Exercise 23 - Checking Whether a Five-Digit Number Is Special

Write a program that reads a five-digit number from standard input. Print `1` if the number is special, and `0` otherwise.

A number is considered special if it is divisible by the sum of its second and third digits, and its first, third, and fifth digits are in strictly ascending order.

Be careful when dividing by zero. If the sum of the second and third digits is zero, print `-1`.

## Задача 23 - Проверка дали петцифрен број е специјален

Да се напише програма каде од стандарден влез се внесува еден петцифрен број. Програмата печати `1` доколку бројот е специјален, а `0` во спротивно.

Еден број е специјален доколку за него важи дека е делив со збирот на својата втора и трета цифра и првата, третата и петтата цифра се во строго растечки редослед.

Да се внимава на делење со `0`, т.е. да се испечати `-1` во таков случај.\



## Test Cases


### Test Case 1

**Input:**
```text
12345
```
**Expected output:**

```text
1
```



### Test Case 2

**Input:**
```text
14104
```
**Expected output:**

```text
0
```




### Test Case 3

**Input:**
```text
24680
```
**Expected output:**

```text
0
```




### Test Case 4

**Input:**
```text
20010
```
**Expected output:**

```text
-1
```




### Test Case 5

**Input:**
```text
12468
```
**Expected output:**

```text
1
```
