## Exercise 30 - Student Grade and Eligibility for a Higher Grade

For one student, the points earned from 5 activities in a course are entered.

A course is considered passed if the student earns more than 50 points. The student's grade is determined according to the following rules:

- 0–50 points: The student has failed the course.
- 51–60 points: Grade 6.
- 61–70 points: Grade 7.
- 71–80 points: Grade 8.
- 81–90 points: Grade 9.
- More than 90 points: Grade 10.

Print the student's grade and total points. Additionally, print `1` if the student is eligible for a higher grade, or `0` otherwise.

The student is eligible for a higher grade only if they are missing exactly 1 point to reach the next grade.

## Задача 30 - Оценка на студент и услов за повисока оценка

За еден студент се читаат освоени поени од 5 активности за еден предмет.

Услов за еден предмет да биде положен е студентот да има над 50 освоени поени. Оценката се одредува според следниве правила:

- 0–50 поени: Студентот не го положил предметот.
- 51–60 поени: Оценка 6.
- 61–70 поени: Оценка 7.
- 71–80 поени: Оценка 8.
- 81–90 поени: Оценка 9.
- Над 90 поени: Оценка 10.

Да се испечати оценката на студентот и вкупниот број освоени поени. Дополнително, да се испечати `1` доколку студентот има услов да добие повисока оценка, а во спротивно `0`.

Услов за повисока оценка има само ако недостига точно 1 поен за добивање на повисока оценка.



## Test Cases


### Test Case 1

**Input:**
```text
10 2 3 5 6
```
**Expected output:**

```text
Predmetot ne e polozen
```



### Test Case 2

**Input:**
```text
30 40 5 10 3
```
**Expected output:**

```text
Ocenka: 9, poeni: 88
Nema uslov za povisoka ocenka
```




### Test Case 3

**Input:**
```text
2 25 70 1 2
```
**Expected output:**

```text
Ocenka: 10, poeni: 100
```



### Test Case 4

**Input:**
```text
10 30 11 20 9
```
**Expected output:**

```text
Ocenka: 8, poeni: 80
Ima uslov za povisoka ocenka
```
