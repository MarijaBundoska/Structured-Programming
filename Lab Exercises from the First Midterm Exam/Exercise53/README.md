## Exercise 53 - Reversing a Number and Replacing Digits at Even Positions

### Problem Description

Alexander is trying to communicate with you using encrypted messages. He gives us the following instructions on how to decrypt them so that the numbers he wants to send us become readable.

Given a number entered from standard input, print the number reversed. Additionally, a character `x` is entered, and all digits at even positions of the number must be replaced with this character.

First, enter the character `x`, followed by the number. Print the reversed number with the digits at even positions replaced by the character.

**Note:** The rightmost digit is considered the digit at position 0.

**Example:**

For the number `12345`, the digits at even positions are `5`, `3`, and `1`, while the reversed number is `54321`.

### Input

A character `x` followed by an integer.

### Output

Print the reversed number, replacing all digits at even positions with the character `x`.

---

## Задача 53 - Превртување на број и замена на цифрите на парни позиции

### Опис на проблемот

Александар пробува да комуницира со вас преку шифрирани пораки. Тој ни ги дава следните инструкции за како да ги дешифрираме за да бидат читливи бројките што сака да ни ги испрати.

За даден број внесен на стандарден влез, да се испечати истиот број превртен во обратен редослед. Притоа, се внесува и карактер `x`, со кој треба да се заменат сите цифри на парните позиции на бројот.

Прво се внесува карактерот `x`, а потоа бројот. Да се испечати превртениот број со цифрите на парните позиции заменети со карактерот `x`.

**Напомена:** Најдесната цифра се смета за цифра на позиција 0.

**Пример:**

За бројот `12345`, цифрите на парните позиции се `5`, `3` и `1`, а превртениот број е `54321`.

### Влез

Се внесува еден карактер `x`, а потоа еден цел број.

### Излез

Да се испечати превртениот број, при што цифрите на парните позиции се заменети со карактерот `x`.





## Test Cases


### Test Case 1

**Input:**
```text
M
856142211
```
**Expected output:**

```text
M1M2M1M5M
```



### Test Case 2

**Input:**
```text
-
3710307
```
**Expected output:**

```text
-0-0-7-
```




### Test Case 3

**Input:**
```text
^9
17239301
```
**Expected output:**

```text
^1^3^3^7^
```



### Test Case 4

**Input:**
```text
.
936524113
```
**Expected output:**

```text
.1.4.5.3.
```


### Test Case 5

**Input:**
```text
*
96
```
**Expected output:**

```text
*9
```
