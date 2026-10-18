## Exercise 35 - Student Result Evaluation

Write a program that determines a student's result in a course. The program should perform the following tasks:

1. Read the following information from standard input:
   - Exam points (an integer between 0 and 100).
   - Student attendance (the number of classes attended relative to the total number of classes in the course).

2. Validate the input data. Exam points must be within the range from 0 to 100, and attendance values must be positive numbers.

3. Calculate the student's result according to the following criteria:
   - If the exam points are greater than or equal to 60 and attendance is at least 80% of the total classes, print `"Odlichna ocenka."`.
   - If the exam points are greater than or equal to 50 and attendance is at least 70% of the total classes, print `"Zadovolitelna ocenka."`.
   - In all other cases, print `"Prosechen rezultat."`.

4. Display the student's result on the screen.

## Задача 35 - Одредување на резултатот на студент

Да се напише програма која ќе го одреди резултатот на студентот по еден предмет. Програмата треба да ги изврши следниве задачи:

1. Програмата бара внес на следниве податоци од студентот:
   - Поени на испитот (цел број од 0 до 100).
   - Присуство на студентот (број на часови посетени во однос на вкупниот број на часови во курсот).

2. Да се провери дали внесените податоци се валидни. Поените од испитот треба да бидат во опсегот од 0 до 100, а присуството на часови треба да биде позитивен број.

3. Да се пресмета резултатот на студентот според следниве критериуми:
   - Ако бројот на поени на испитот е поголем или еднаков на 60 и присуството е 80% или повеќе од вкупниот број на часови, студентот добива `"Odlichna ocenka."`.
   - Ако бројот на поени на испитот е поголем или еднаков на 50 и присуството е 70% или повеќе од вкупниот број на часови, студентот добива `"Zadovolitelna ocenka."`.
   - Во сите други случаи, студентот добива `"Prosechen rezultat."`.

4. Да се прикаже резултатот на студентот, односно неговата оценка.



## Test Cases


### Test Case 1

**Input:**
```text
60 0.9
```
**Expected output:**

```text
Odlichna ocenka
```


### Test Case 2

**Input:**
```text
52 0.8
```
**Expected output:**

```text
Zadovolitelna ocenka
```



### Test Case 3

**Input:**
```text
49 0.7
```
**Expected output:**

```text
Prosechen rezultat
```


### Test Case 4

**Input:**
```text
50 -1
```
**Expected output:**

```text
Nevalidni vlezni podatoci
```



### Test Case 5

**Input:**
```text
59 0.7
```
**Expected output:**

```text
Prosechen rezultat
```



### Test Case 6

**Input:**
```text
20 0.9
```
**Expected output:**

```text
Prosechen rezultat
```


### Test Case 7

**Input:**
```text
102 0.9
```
**Expected output:**

```text
Nevalidni vlezni podatoci
```

