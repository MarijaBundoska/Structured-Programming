## Exercise 55 - Bingo Joker Number

### Problem Description

In the game of Bingo, an unknown number of numbers with values between **1 and 90** are drawn in sequence.

More than 8 numbers are always drawn. The input ends when a number outside the valid range is entered.

Besides the main prize, players also compete for a joker number. The joker number is formed as follows:

- Concatenate the **least significant digits** (the rightmost digits) of the **first 7 drawn numbers** to form a new number.
- Add the sum of all the subsequently entered numbers to that number. The last entered number, which is outside the valid range, must not be included.

Your task is to print the resulting joker number.

### Example

**Input:**
```text
2 32 45 78 64 21 7 65 18 32 88 1 99
```

**Explanation:**

The least significant digits of the first seven numbers are `2, 2, 5, 8, 4, 1, 7`. Concatenating them gives the number `2258417`.

The sum of the remaining valid numbers is:

`65 + 18 + 32 + 88 + 1 = 204`

Adding this sum to the concatenated number gives:

`2258417 + 204 = 2258621`

**Output:**
```text
2258621
```

### Input

A sequence of integers representing the drawn Bingo numbers. The sequence ends when a number outside the range from 1 to 90 is entered.

### Output

Print the joker number obtained by concatenating the least significant digits of the first seven numbers and adding the sum of all subsequent valid numbers.

---

## Задача 55 - Џокер број во Бинго

### Опис на проблемот

Во играта Бинго по редослед се извлекуваат непознат број броеви со вредности помеѓу **1 и 90**.

Секогаш се извлекуваат повеќе од 8 броја, а внесувањето престанува кога ќе се внесе број што не е во дозволениот опсег.

Освен главната добивка, играчите играат и на џокер број. Џокер бројот се формира на следниот начин:

- Се слепуваат **помалку значајните цифри** (цифрите на единиците) од **првите 7 извлечени броеви**, со што се добива нов број.
- На тој број се додава збирот на сите следни внесени броеви. Последниот внесен број, кој е надвор од дозволениот опсег, **не треба да се вклучи во збирот**.

Ваша задача е да го отпечатите така добиениот џокер број.

### Пример

**Влез:**
```text
2 32 45 78 64 21 7 65 18 32 88 1 99
```

**Објаснување:**

Помалку значајните цифри од првите седум броеви се `2, 2, 5, 8, 4, 1, 7`. Со нивно слепување се добива бројот `2258417`.

Збирот на преостанатите валидни броеви е:

`65 + 18 + 32 + 88 + 1 = 204`

Кога овој збир ќе се додаде на добиениот број, се добива:

`2258417 + 204 = 2258621`

**Излез:**
```text
2258621
```

### Влез

Низа од цели броеви што ги претставуваат извлечените броеви во Бинго. Внесувањето завршува кога ќе се внесе број надвор од опсегот од 1 до 90.

### Излез

Да се отпечати џокер бројот добиен со слепување на помалку значајните цифри од првите седум броеви и додавање на збирот на сите следни валидни броеви.





## Test Cases


### Test Case 1

**Input:**
```text
2 32 45 78 64 21 7 65 18 32 88 1 99
```
**Expected output:**

```text
2258621
```



### Test Case 2

**Input:**
```text
56 13 87 89 55 47 65 1 10 20 99
```
**Expected output:**

```text
6379606
```


### Test Case 3

**Input:**
```text
32 89 78 65 45 12 32 1 5 2 3 -8
```
**Expected output:**

```text
2985533
```




### Test Case 4

**Input:**
```text
10 20 30 40 50 60 70 80 22 33 55 12 4 3 0
```
**Expected output:**

```text
209
```




### Test Case 5

**Input:**
```text
12 9 22 31 7 49 5 13 1 4 81 99
```
**Expected output:**

```text
2921894
```




### Test Case 6

**Input:**
```text
15 25 36 54 78 65 9 45 20 16 17 99
```
**Expected output:**

```text
5564957
```
