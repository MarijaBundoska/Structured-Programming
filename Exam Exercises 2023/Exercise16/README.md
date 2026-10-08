# Exercise 16 - Recursive Function for Finding the Maximum Digit

## Task

Write a **recursive** function for finding the maximum digit of a given integer.

From standard input, an unknown number of integers are entered until something that is not a number is entered.

For each integer, print the maximum digit on a separate line.

**Note:** A solution using a recursive function receives 100% of the points, while a solution using a non-recursive function receives 70% of the points.

**Note:** The use of global variables is **FORBIDDEN**.

---

# Задача 16 - Рекурзивна функција за наоѓање на максималната цифра

## Опис на задачата

Да се напише **рекурзивна** функција за наоѓање на максималната цифра од даден цел број.

Од стандарден влез се внесуваат непознат број цели броеви се додека не се внесе нешто што не е број.

За секој од нив да се испечати максималната цифра во посебен ред.

**Забелешка:** Решението со рекурзивна функција носи 100% од поените, а со нерекурзивна функција 70% од поените.

**Забелешка:** **ЗАБРАНЕТО** е користење на глобални променливи.


## Test Cases


### Test Case 1

**Input:**
```text
5128
4126
7258
4000
4500
6882
7762
3900
4100
4400
4897
6000
7000
7500
8002
3000
3910
4090
4110
4202
4490
4800
5000
5990
6500
6905
7010
7400
7600
8000
8005
2999
3001
3905
3999
5128
4126
7258
4000
4500
6882
7762
3900
4100
4400
4897
6000
7000
7500
8002
3000
3910
4090
4110
4202
4490
4800
5000
5990
6500
6905
7010
7400
7600
8000
8005
/
```
**Expected output:**

```text
8
6
8
4
5
8
7
9
4
4
9
6
7
7
8
3
9
9
4
4
9
8
5
9
6
9
7
7
7
8
8
9
3
9
9
8
6
8
4
5
8
7
9
4
4
9
6
7
7
8
3
9
9
4
4
9
8
5
9
6
9
7
7
7
8
8
```





### Test Case 2

**Input:**
```text
1124
245
23580
234
7969
3479
808856
6479
242541
10632235
*
```
**Expected output:**

```text
4
5
8
4
9
9
8
9
5
6
```





### Test Case 3

**Input:**
```text
1221
12332
142727
909
281788
29901
6666
x
```
**Expected output:**

```text
2
3
7
9
8
9
6
```





### Test Case 4

**Input:**
```text
1
12
123
1234
12345
123456
1234567
12345678
123456789
.
```
**Expected output:**

```text
1
2
3
4
5
6
7
8
9
```





### Test Case 5

**Input:**
```text
22222
3333
4444
555
777777
0
,
```
**Expected output:**

```text
2
3
4
5
7
0
```
