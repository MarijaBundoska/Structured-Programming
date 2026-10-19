## Exercise 4 - Sum of Numbers Hidden in Text

Write a program that reads characters from standard input until an exclamation mark (`!`) is encountered.

The text contains hidden integers smaller than `100`. The program must read all characters and print the sum of all numbers hidden in the text.

**Note:** In C++, `cin` ignores whitespace characters by default. To prevent this when reading individual characters, use `noskipws` (e.g., `cin >> noskipws >> character;`).

## Задача 4 - Збир на броевите скриени во текст

Од стандарден влез се читаат знаци сè додека не се прочита извичник (`!`).

Во вака внесениот текст се скриени цели броеви помали од `100`. Да се напише програма што ќе ги прочита сите знаци и на излез ќе го испечати збирот на сите броеви скриени во текстот.

**Забелешка:** Во C++, `cin` стандардно ги игнорира празните места (`space`). За да не ги игнорира при читање поединечни знаци, потребно е да се додаде `noskipws` (на пример, `cin >> noskipws >> znak;`).


## Test Cases


### Test Case 1

**Input:**
```text
ako34D neka12em bashka41mewr20!
```
**Expected output:**

```text
107
```




### Test Case 2

**Input:**
```text
1ako fdsfsfD ne 12 ka10em bashka10mewr5!
```
**Expected output:**

```text
38
```




### Test Case 3

**Input:**
```text
Weiur23j sdlkj22lkadad 21kjs 20sdkjsd!
```
**Expected output:**

```text
86
```




### Test Case 4

**Input:**
```text
ako34D neka12em bashka41mewr!
```
**Expected output:**

```text
87
```




### Test Case 5

**Input:**
```text
ako3 1 4D4 ne 88 ka12em ba12shka41mewr!
```
**Expected output:**

```text
165
```




### Test Case 6

**Input:**
```text
9Ako D1me ima 12 evra, za 9 dena, kje kupi 10ka!
```
**Expected output:**

```text
41
```
