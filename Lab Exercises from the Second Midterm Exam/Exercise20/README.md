## Exercise 20 - Palindrome Numbers, Digit Sum, and Recursive Digit Count

Read numbers from standard input until a non-numeric value is entered.

- For each number that is a **palindrome**, print the sum of its digits.
- For each number that is **not a palindrome**, print the number of digits it contains.

Implement the following operations using separate functions:
- Checking whether a number is a palindrome.
- Calculating the sum of a number's digits.
- Counting the number of digits in a number.

**The function for counting digits must be implemented recursively.**

---

## Задача 20 - Палиндроми, сума на цифри и рекурзивно броење на цифри

Од стандарден влез се читаат броеви сè додека не се прочита нешто што не е број.

- За секој број што е **палиндром**, на екран да се испечати сумата на неговите цифри.
- За секој број што **не е палиндром**, на екран да се испечати од колку цифри е составен.

Проверката дали бројот е палиндром, пресметувањето на сумата на цифрите и броењето на цифрите треба да се реализираат со **посебни функции**.

**Дополнително, функцијата за броење на цифрите мора да биде рекурзивна.**


## Test Cases


### Test Case 1

**Input:**
```text
1221
123
717
8258
28
.
```
**Expected output:**

```text
6
3
15
4
2
```




### Test Case 2

**Input:**
```text
777
56
12321
98789
123
4334
17
2
#
```
**Expected output:**

```text
21
2
9
41
3
14
2
2
```





### Test Case 3

**Input:**
```text
584
9779
1161
454
23432
1221
72
525
82135
121
@
```
**Expected output:**

```text
3
32
4
13
14
6
2
12
5
4
```
