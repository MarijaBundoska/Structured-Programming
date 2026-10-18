## Exercise 36 - Date Validation

Write a program that reads a date in the format `DD MM YYYY` and prints `1` if the entered date is valid, or `0` otherwise.

To validate the date, consider the following conditions:

- **Leap year:** February 29 is valid only in a leap year. A year is a leap year if it is divisible by 400, or if it is divisible by 4 but not by 100.
- **Month validation:** The month must be a number between 1 and 12.
- **Day validation:** The day must correspond to the number of days in the specified month.

## Задача 36 - Проверка на валидност на датум

Да се напише програма која за вчитан датум како влезна променлива во формат `DD MM GGGG` ќе испечати на излез `1` или `0`, во зависност од тоа дали внесениот датум е правилен или не.

За проверка на валидноста на датумот, разгледајте ги следниве услови:

- **Престапна година:** За датумот 29.02. треба да се провери дали станува збор за престапна година. Престапна година е секоја година која е делива со 400 или е делива со 4, но не и со 100.
- **Проверка на месец:** Месецот мора да биде број помеѓу 1 и 12.
- **Проверка на ден:** Денот мора да одговара на бројот на денови во соодветниот месец.



## Test Cases


### Test Case 1

**Input:**
```text
1 6 1992
```
**Expected output:**

```text
1
```



### Test Case 2

**Input:**
```text
30 2 2004
```
**Expected output:**

```text
0
```



### Test Case 3

**Input:**
```text
29 2 2004
```
**Expected output:**

```text
1
```



### Test Case 4

**Input:**
```text
32 11 2022
```
**Expected output:**

```text
0
```



### Test Case 5

**Input:**
```text
10 13 2023
```
**Expected output:**

```text
0
```



### Test Case 6

**Input:**
```text
31 11 2021
```
**Expected output:**

```text
0
```



### Test Case 7

**Input:**
```text
31 4 2015
```
**Expected output:**

```text
0
```
