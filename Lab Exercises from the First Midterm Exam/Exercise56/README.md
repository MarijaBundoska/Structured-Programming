## Exercise 56 - Filtering Numbers by Divisibility and Parity

### Problem Description

Read two integers `a` and `b` from standard input.

Write a program that prints all numbers in the range `(a, b]` that satisfy at least one of the following conditions:

- The number is even and divisible by 7.
- The number is odd and not divisible by 3.

If no numbers satisfy these conditions, print `0`. Otherwise, print all numbers that meet the conditions and the percentage of numbers in the range that satisfy them.

### Input

Two integers `a` and `b`.

### Output

Print all numbers in the range `(a, b]` that satisfy the given conditions. If no such numbers exist, print `0`. Otherwise, print the percentage of numbers that satisfy the conditions.

---

## Задача 56 - Филтрирање броеви според деливост и парност

### Опис на проблемот

Од стандарден влез се читаат два цели броја `a` и `b`.

Да се напише програма што ќе ги отпечати сите броеви во опсегот `(a, b]` што исполнуваат барем еден од следниве услови:

- Бројот е парен и делив со 7.
- Бројот е непарен и не е делив со 3.

Доколку не постојат броеви што ги исполнуваат условите, да се отпечати `0`. Во спротивно, да се отпечатат сите броеви што ги исполнуваат условите и процентот на броеви во опсегот што ги исполнуваат условите.

### Влез

Два цели броја `a` и `b`.

### Излез

Да се отпечатат сите броеви во опсегот `(a, b]` што ги исполнуваат зададените услови. Доколку не постојат такви броеви, да се отпечати `0`. Во спротивно, да се отпечати процентот на броеви што ги исполнуваат условите.



## Test Cases


### Test Case 1

**Input:**
```text
1 7
```
**Expected output:**

```text
5
7
33.3333%
```



### Test Case 2

**Input:**
```text
1 2
```
**Expected output:**

```text
0
```



### Test Case 3

**Input:**
```text
123 134
```
**Expected output:**

```text
125
126
127
131
133
45.4545%
```




### Test Case 4

**Input:**
```text
14 30
```
**Expected output:**

```text
17
19
23
25
28
29
37.5%
```



### Test Case 5

**Input:**
```text
80 99
```
**Expected output:**

```text
83
84
85
89
91
95
97
98
42.1053%
```
