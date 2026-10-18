## Exercise 45 - Numbers with the Same Number of Digits

### Problem Description

A number `X` is entered through standard input, followed by a sequence of values entered until a value that is not a number is encountered.

For each entered number, check whether its number of digits is equal to the number of digits in `X`. If the condition is satisfied, print the number.

### Input

- An integer `X`.
- A sequence of numbers, terminated by an input value that is not a number.

### Output

Print each number from the sequence whose number of digits is equal to the number of digits in `X`.

---

## Задача 45 - Броеви со ист број на цифри

### Опис на проблемот

Од стандарден влез се внесува бројот `X`, а потоа се внесуваат броеви сè додека не се внесе нешто што не е број.

За секој од внесените броеви треба да се провери дали неговиот број на цифри е еднаков со бројот на цифри на `X`. Доколку условот е исполнет, бројот треба да се испечати.

### Влез

- Цел број `X`.
- Низа од броеви, при што внесувањето завршува кога ќе се внесе вредност што не е број.

### Излез

Да се испечати секој број од низата чиј број на цифри е еднаков со бројот на цифри на `X`.


## Test Cases


### Test Case 1

**Input:**
```text
1234
453
3745
123
6
6850
a
```
**Expected output:**

```text
3745
6850
```


### Test Case 2

**Input:**
```text
791
2
346
158
m
```
**Expected output:**

```text
346
158
```



### Test Case 3

**Input:**
```text
42661
125
75
87654
4572
55555
/
```
**Expected output:**

```text
87654
55555
```



### Test Case 4

**Input:**
```text
15
20
30
152
1
6
x
```
**Expected output:**

```text
20
30
```
