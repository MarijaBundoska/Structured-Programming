## Exercise 31 - Scaling Students' Exam Scores

For the needs of FINKI professors and teaching assistants, write a program that scales students' scores from an exam.

Read the exam scores of up to 100 students from standard input and store them in an array.

Define a function `void scale` that receives an array of numbers (the students' exam scores) as an argument. The function must scale the scores as follows:

1. Find the maximum score on the exam (e.g., 88 out of 100).
2. Calculate the quotient `100 / max` (e.g., `100 / 88 = 1.13636`).
3. Multiply all scores in the array by this quotient so that the student with the highest score on the exam receives 100 points.

Print the array with the scaled scores.

**Important:** Do not use an auxiliary array to solve the problem. The array transformation must be performed **in-place**.

## Задача 31 - Скалирање на поени од испит

За потребите на професорите и асистентите на ФИНКИ потребно е да напишете програма која ќе врши скалирање на поените на студентите од еден испит.

Од стандарден влез потребно е да се вчитаат поени од определен испит на најмногу 100 студенти и истите да се зачуваат во низа.

Да се дефинира функција `void scale` која ќе прими како аргумент низа од броеви (поени на студентите на испитот). Функцијата потребно е да ги скалира поените на следниот начин:

1. Да се најдат максималните поени на испитот (пример 88 од 100).
2. Да се пресмета количникот 100/max (пример 100/88 = 1.13636).
3. Сите поени од низата да се помножат со овој количник со цел студентот којшто има најмногу поени на испитот да добие 100 поени.

Да се испечати на екран низата со скалирани поени.

**Важно:** Да не се користи помошна низа за решавање на задачата, односно трансформацијата на низата да биде **in-place**.



## Test Cases


### Test Case 1

**Input:**
```text
5
10 20 30 40 82
```
**Expected output:**

```text
12.20 24.39 36.59 48.78 100.00
```





### Test Case 2

**Input:**
```text
10
10 12 13 15 56 56 67 95 92 80
```
**Expected output:**

```text
10.53 12.63 13.68 15.79 58.95 58.95 70.53 100.00 96.84 84.21
```






### Test Case 3

**Input:**
```text
10
10 12 13 15 56 56 67 95 100 80
```
**Expected output:**

```text
10.00 12.00 13.00 15.00 56.00 56.00 67.00 95.00 100.00 80.00
```




### Test Case 4

**Input:**
```text
10
20 12 13 15 56 56 67 77 82 80
```
**Expected output:**

```text
24.39 14.63 15.85 18.29 68.29 68.29 81.71 93.90 100.00 97.56
```
