## Exercise 22 - Increasing Numbers and Recursive Sum of Digits

Read an integer `n` from standard input, followed by `n` integers. Print all numbers whose digits are strictly increasing, meaning that each digit is greater than the previous one (1589 is increasing, while 1529 is not). The check whether a number is increasing must be implemented using a separate function that returns `1` if the number is increasing and `-1` otherwise. Additionally, if the number is increasing, a function must be called to calculate the sum of its digits.

**Additional requirement:** The function for calculating the sum of digits must be recursive.

The output must follow this format: `1234 (sum: 10)`

## Задача 22 - Растечки броеви и рекурзивна сума на цифри

Од стандарден влез се чита број n, а потоа се читаат и n броеви. Потребно е на екран да се испечатат сите броеви кои што се строго растечки односо секоја цифра е поголема од претходната (1589 е растечки, 1529 не е растечки). Проверката за тоа дали бројот е растечки да се реализира со посебна функција која ќе врати 1 ако е растечки и -1 ако не е растечки. Дополнително ако бројот е растечки за него треба да се повика функција која ќе ја пресмета сумата на цифрите од кои е составен.

**Дополнително:** функцијата за пресметување на сума на цифри да биде рекурзивна.

Печатењето треба да е во следен формат: `1234 (suma: 10)`



## Test Cases


### Test Case 1

**Input:**
```text
5
257 391 423 789 269
```
**Expected output:**

```text
257 (suma: 14)
789 (suma: 24)
269 (suma: 17)
```



### Test Case 2

**Input:**
```text
7
1257 294 921 578 221 579 257
```
**Expected output:**

```text
1257 (suma: 15)
578 (suma: 20)
579 (suma: 21)
257 (suma: 14)
```




### Test Case 3

**Input:**
```text
3
389 987 3468
```
**Expected output:**

```text
389 (suma: 20)
3468 (suma: 21)
```
