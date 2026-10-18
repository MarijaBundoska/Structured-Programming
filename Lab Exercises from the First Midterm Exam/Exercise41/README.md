## Exercise 41 - Movie Ticket Price Calculator

### Problem Description

Write a program to calculate the price of a movie ticket. The ticket price depends on the movie category and the age of the customer.

The ticket prices are determined according to the following rules:

- For movies in **category 1**, the ticket price is $8 for all ages.
- For movies in **category 2**, the ticket price is $8 for customers under 12 years old and $12 for customers aged 12 and above.
- For movies in **category 3**, the ticket price is $10 for customers under 12 years old and $15 for customers aged 12 and above.
- For movies in **category 4**, the ticket price is $15 for customers under 17 years old and $18 for customers aged 17 and above.

The program reads the movie category and the customer's age from standard input. It should print the ticket price.

## Задача 41 - Калкулатор за цена на кино-билети

### Опис на задачата

Да се напише програма за пресметување на цената на билет за кино. Цената на билетот зависи од категоријата на филмот и возраста на купувачот.

Цените на билетите се одредуваат според следниве правила:

- За филмови од **категорија 1**, цената на билетот е 8 долари за сите возрасти.
- За филмови од **категорија 2**, цената на билетот е 8 долари за купувачи помлади од 12 години и 12 долари за купувачи на возраст од 12 години и постари.
- За филмови од **категорија 3**, цената на билетот е 10 долари за купувачи помлади од 12 години и 15 долари за купувачи на возраст од 12 години и постари.
- За филмови од **категорија 4**, цената на билетот е 15 долари за купувачи помлади од 17 години и 18 долари за купувачи на возраст од 17 години и постари.

Од стандарден влез се читаат категоријата на филмот и возраста на купувачот. На стандарден излез треба да се испечати цената на билетот.


## Test Cases


### Test Case 1

**Input:**
```text
1 10
```
**Expected output:**

```text
Price: 8$
```



### Test Case 2

**Input:**
```text
2 8
```
**Expected output:**

```text
Price: 8$
```



### Test Case 3

**Input:**
```text
2 12
```
**Expected output:**

```text
Price: 12$
```



### Test Case 4

**Input:**
```text
3 9
```
**Expected output:**

```text
Price: 10$
```



### Test Case 5

**Input:**
```text
3 13
```
**Expected output:**

```text
Price: 15$
```




### Test Case 6

**Input:**
```text
4 16
```
**Expected output:**

```text
Price: 15$
```



### Test Case 7

**Input:**
```text
4 20
```
**Expected output:**

```text
Price: 18$
```
