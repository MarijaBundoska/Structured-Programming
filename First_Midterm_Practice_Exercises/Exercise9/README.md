## Exercise 9 - Sum of Hexadecimal Digits

### Description

Read an unknown number of hexadecimal digits from standard input until a period (`.`) is entered.

Calculate the decimal sum of the entered hexadecimal digits.

- If the resulting sum is divisible by 16 and its last two digits are `16`, print `Poln pogodok`.
- If the resulting sum is divisible by 16 but its last two digits are not `16`, print `Pogodok`.
- Otherwise, print the sum itself.

**Example**

Input:
```text
A 7 F 2 0 c A 5 .
```

Output:
```text
61
```

Explanation:

The decimal sum is `61 = 10 + 7 + 15 + 2 + 0 + 12 + 10 + 5`. Since 61 is not divisible by 16 and does not end in 16, the output is `61`.

## Задача 9 - Збир на хексадецимални цифри

### Опис

Од стандарден влез се чита непознат број на хексадецимални цифри сè додека не се внесе точка (`.`).

Потребно е да се пресмета декадниот збир на внесените хексадецимални цифри.

- Доколку добиениот збир е делив со 16 и завршува со цифрите `16`, да се отпечати `Poln pogodok`.
- Доколку збирот е делив со 16, но не завршува со цифрите `16`, да се отпечати `Pogodok`.
- Во спротивно, да се отпечати самиот збир.

**Пример**

Влез:
```text
A 7 F 2 0 c A 5 .
```

Излез:
```text
61
```

Објаснување:

Декадниот збир е `61 = 10 + 7 + 15 + 2 + 0 + 12 + 10 + 5`. Бидејќи 61 не е делив со 16 и не завршува со цифрите 16, се печати `61`.







## Test Cases 1


### Test Case 

**Input:**
```text
0
1
0
0
0
1
d
0
0
0
1
.
```
**Expected output:**

```text
Poln pogodok
```




### Test Case 2

**Input:**
```text
A
7
F
2
0
c
A
5
A
a
A
a
A
5
.
```
**Expected output:**

```text
116
```





### Test Case 3

**Input:**
```text
5
7
e
8
0
0
F
6
C
2
2
0
A
9
b
.
```
**Expected output:**

```text
101
```




### Test Case 4

**Input:**
```text
A
7
F
2
0
c
A
5
.
```
**Expected output:**

```text
61
```





### Test Case 5

**Input:**
```text
A
7
3
F
2
0
c
A
5
.
```
**Expected output:**

```text
Pogodok
```





### Test Case 6

**Input:**
```text
7
e
8
0
0
F
6
C
2
2
0
A
9
b
.
```
**Expected output:**

```text
Pogodok
```
