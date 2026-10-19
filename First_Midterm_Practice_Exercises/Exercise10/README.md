## Exercise 10 - Zigzag Numbers

### Description

A number is called a **zigzag number** if every pair of adjacent digits alternates between being greater and smaller than each other.

For example, if a number consists of the digits `a`, `b`, `c`, `d`, and `e`, one of the following patterns must hold:

- `a > b`, `b < c`, `c > d`, `d < e`
- `a < b`, `b > c`, `c < d`, `d > e`

**Examples:** `343`, `4624`, `6231209`

Read an unknown number of integers from standard input. Numbers greater than or equal to 10 should be considered, while numbers smaller than 10 are ignored.

Reading stops when a character that is not a digit is encountered.

Print all the zigzag numbers.

## Задача 10 - Цик-цак броеви

### Опис

Цик-цак е број за кој важи дека секој пар соседни цифри е наизменично поголем или помал една во однос на друга.

На пример, ако бројот се состои од цифрите `a`, `b`, `c`, `d` и `e`, треба да важи еден од следниве обрасци:

- `a > b`, `b < c`, `c > d`, `d < e`
- `a < b`, `b > c`, `c < d`, `d > e`

**Примери:** `343`, `4624`, `6231209`

Од стандарден влез се читаат непознат број цели броеви поголеми или еднакви на 10. Броевите помали од 10 се игнорираат.

Читањето завршува кога ќе се прочита знак што не е цифра.

Да се испечатат сите цик-цак броеви.







## Test Cases


### Test Case 1

**Input:**
```text
343
22
4624
123456
6231209
9
k
```
**Expected output:**

```text
343
4624
6231209
```






### Test Case 2

**Input:**
```text
10
11
123
9876
12345
543210
k
```
**Expected output:**

```text
10
```





### Test Case 3

**Input:**
```text
5
-10
-9261
9
12
k
```
**Expected output:**

```text
12
```





### Test Case 4

**Input:**
```text
1221
3266
11111
98776
12231
55661
22
777
31
k
```
**Expected output:**

```text
31
```




### Test Case 5

**Input:**
```text
120
3241
31425
36475
k
```
**Expected output:**

```text
120
3241
31425
36475
```



### Test Case 6

**Input:**
```text
-12065
12065
13269
9876
6545
12321
k
```
**Expected output:**

```text
12065
```




