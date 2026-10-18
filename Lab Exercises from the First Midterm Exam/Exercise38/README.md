## Exercise 38 - Student Academic Evaluation

### Problem Description

Write a program to evaluate students based on their academic achievements. The program should perform the following tasks:

- Check whether the entered data is valid, whether the student has more than 100 credits, and whether the average grade is higher than 8.
- If all conditions are met, calculate the predicted credits using the following formula:

  `Predicted Credits = (2023 - Year of Enrollment) * 60`

- If the student has more than 240 credits, display the additional message `Needs to graduate!`.
- If the student's average grade is greater than 9, display the additional message `Great student!`.
- If the required conditions are not met, set the points to `0`.

The program reads the number of credits (integer), year of enrollment (2010–2023), and average grade (decimal number) from standard input. It should print the student's points and the relevant additional message, if necessary.

## Задача 38 - Оценување на академските постигнувања на студентите


### Опис на задачата

Да се напише програма која ќе ги оцени студентите според нивните академски постигнувања. Програмата треба да ги изврши следниве задачи:

- Да провери дали внесените податоци се валидни, дали студентот има повеќе од 100 кредити и дали просекот е поголем од 8.
- Доколку се исполнети сите услови, да ги пресмета предвидените кредити според следнава формула:

  `Предвидени кредити = (2023 - Година на запишување) * 60`

- Доколку студентот има повеќе од 240 кредити, да ја прикаже дополнителната порака `Needs to graduate!`.
- Доколку просекот на студентот е поголем од 9, да ја прикаже дополнителната порака `Great student!`.
- Доколку условите не се исполнети, поените да се постават на `0`.

Од стандарден влез се читаат бројот на кредити (цел број), годината на запишување (2010–2023) и просекот (децимален број). На стандарден излез треба да се испечатат поените на студентот и соодветната дополнителна порака, доколку е потребно.



## Test Cases


### Test Case 1

**Input:**
```text
174 2020 9.38
```
**Expected output:**

```text
Great student! Points: 15.3867
```


### Test Case 2

**Input:**
```text
120 2021 8.9
```
**Expected output:**

```text
Points: 12.6
```



### Test Case 3

**Input:**
```text
244 2019 9.0
```
**Expected output:**

```text
Needs to graduate! Points: 13.4167
```



### Test Case 4

**Input:**
```text
180 2020 7.9
```
**Expected output:**

```text
Points: 0
```



### Test Case 5

**Input:**
```text
162 2020 8.3
```
**Expected output:**

```text
Points: 7.7
```



### Test Case 6

**Input:**
```text
252 2018 8.6
```
**Expected output:**

```text
Needs to graduate! Points: 9.05
```


### Test Case 7

**Input:**
```text
96 2022 9.6
```
**Expected output:**

```text
Points: 0
```


