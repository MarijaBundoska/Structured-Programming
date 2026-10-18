## Exercise 37 - Student Academic Achievement Evaluation

Write a program that evaluates a student's academic achievements based on the number of credits, year of enrollment, and average grade.

The program reads the following values from standard input:
- Number of credits (integer)
- Year of enrollment (integer, from 2010 to 2023)
- Average grade (decimal number)

The program checks whether the input data is valid and whether the student has more than 100 credits and an average grade higher than 8.

If all conditions are met, the student's predicted credits are calculated using the formula:

`Predicted credits = (2023 - year of enrollment) * 60`

If the student has more than 240 credits, the program displays the additional message `Needs to graduate!`. If the average grade is greater than 9, it displays `Great student!`.

If the conditions are not met, the student's points are set to `0`.

## Задача 37 - Евалуација на академскиот успех на студент

Да се напише програма што го проценува академскиот успех на студентот врз основа на бројот на освоени кредити, годината на запишување и просечната оценка.

Програмата ги чита следните податоци од стандарден влез:
- Број на кредити (цел број)
- Година на запишување (цел број, од 2010 до 2023)
- Просечна оценка (децимален број)

Програмата проверува дали внесените податоци се валидни и дали студентот има повеќе од 100 кредити и просечна оценка повисока од 8.

Доколку се исполнети сите услови, предвидените кредити се пресметуваат со формулата:

`Предвидени кредити = (2023 - година на запишување) * 60`

Доколку студентот има повеќе од 240 кредити, се печати дополнителната порака `Needs to graduate!`. Доколку просечната оценка е повисока од 9, се печати дополнителната порака `Great student!`.

Доколку условите не се исполнети, бројот на поени се поставува на `0`.



## Test Cases


### Test Case 1

**Input:**
```text
174 2020 9.38
```
**Expected output:**

```text
Great student! Points: 5.72 
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
Needs to graduate! Points: 13.25
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
Points: -1.3
```



### Test Case 6

**Input:**
```text
252 2018 8.6
```
**Expected output:**

```text
Needs to graduate! Points: 0.65
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




