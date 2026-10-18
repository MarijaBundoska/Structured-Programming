## Exercise 19 - Calculating a Student's Grade and Checking Eligibility for a Higher Grade

Read the points earned by a student in five activities for one subject. A subject is passed if the student earns more than 50 points. If the student has 0–50 points, they fail the subject. If they have 51–60 points, they receive grade 6; 61–70 points, grade 7; 71–80 points, grade 8; 81–90 points, grade 9; and more than 90 points, grade 10.

Print the student's grade and total points. Also, print `Ima uslov za povisoka ocenka` if the student is eligible for a higher grade; otherwise, print `Nema uslov za povisoka ocenka`. The student is eligible for a higher grade only if they are missing exactly 1 point to receive the next higher grade.

## Задача 19 - Пресметување оценка и проверка на услов за повисока оценка

За еден студент се читаат освоени поени од 5 активности за еден предмет. Услов за еден предмет да биде положен е да се имаат над 50 освоени поени. Ако студентот има 0–50 поени не го положил предметот, ако има 51–60 го положил со 6, 61–70 го положил со 7, 71–80 го положил со 8, 81–90 го положил со 9 и над 90 го положил со 10.

Да се испечати оценката која ја имал студентот, неговите поени и да се испечати `Ima uslov za povisoka ocenka` доколку има услов да добие повисока оценка, а во спротивно да се испечати `Nema uslov za povisoka ocenka`. Услов за повисока оценка има само ако недостига 1 поен за добивање на повисока оценка.

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
