## Exercise 11 - Zigzag Numbers Based on the Digit 5

### Description

A number is called a **zigzag number** if, for every pair of adjacent digits, one digit is smaller than 5 and the other digit is greater than or equal to 5.

For example, if a number consists of the digits `a`, `b`, `c`, and `d`, one of the following patterns must hold:

- `a < 5`, `b >= 5`, `c < 5`, `d >= 5`
- `a >= 5`, `b < 5`, `c >= 5`, `d < 5`

**Examples:** `508294`, `2638`, `81`

Read an unknown number of integers from standard input. Only numbers greater than or equal to 10 should be considered; numbers smaller than 10 are ignored.

Reading stops when a character that is not a digit is encountered.

Print all the zigzag numbers.

## Задача 11 - Цик-цак броеви според цифрата 5

### Опис

Цик-цак е број за кој важи дека за секој пар соседни цифри во бројот, едната цифра е помала од 5, а другата е поголема или еднаква на 5.

На пример, ако бројот се состои од цифрите `a`, `b`, `c` и `d`, треба да важи еден од следниве обрасци:

- `a < 5`, `b >= 5`, `c < 5`, `d >= 5`
- `a >= 5`, `b < 5`, `c >= 5`, `d < 5`

**Примери:** `508294`, `2638`, `81`

Од тастатура се читаат непознат број цели броеви поголеми или еднакви на 10. Броевите помали од 10 се игнорираат.

Читањето завршува кога ќе се прочита знак што не е цифра.

Да се испечатат сите цик-цак броеви.





## Test Cases


### Test Case 1

**Input:**
```text
5005
5050
60619
21365
12345
8045
8050
k
```
**Expected output:**

```text
5050
60619
8050
```





### Test Case 2

**Input:**
```text
12345
54321
12063
70819
k
```
**Expected output:**

```text
70819
```





### Test Case 3

**Input:**
```text
-9016
-5
-91
5
19
50
10
k
```
**Expected output:**

```text
19
50
```





### Test Case 4

**Input:**
```text
508294
2
2638
889
81
10
16
927
k
```
**Expected output:**

```text
508294
2638
81
16
927
```





### Test Case 5

**Input:**
```text
19
k
```
**Expected output:**

```text
19
```




### Test Case 6

**Input:**
```text
-15
15
5509
505
50619
1928370
k
```
**Expected output:**

```text
15
505
50619
1928370
```



