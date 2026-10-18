## Exercise 40 - Student Service Waiting Time

### Problem Description

At FINKI, it is time to enroll new students. For a student to enroll, they must arrive at the faculty before 9 a.m. and wait in line to be served by the student service.

The student service starts working at 9 a.m. It works for 2 hours, takes a 30-minute break, works for another hour, takes another 30-minute break, and then works for 2 more hours before closing.

The student service needs exactly 5 minutes to serve one student.

Your task is to determine, given the position of a student in the queue, the time in hours and minutes that the student will wait before being served. If the student will not be served before the student service closes, print `Student will not be served at all`.


## Задача 40 - Време на чекање во студентската служба


### Опис на задачата

На ФИНКИ е време за упис на нови студенти. За да може студентот да се запише, треба да пристигне на факултетот пред 9 часот наутро и да чека во ред за да биде услужен од студентската служба.

Студентската служба започнува со работа во 9 часот наутро. Работи 2 часа, потоа прави пауза од 30 минути, работи уште 1 час, повторно прави пауза од 30 минути, а потоа работи уште 2 часа, по што завршува со работа.

На студентската служба ѝ се потребни точно 5 минути за да услужи еден студент.

Твоја задача е, за даден реден број на студентот во редицата, да го испечатиш времето во часови и минути што студентот ќе го чека пред да биде услужен. Доколку студентот не биде услужен пред завршувањето на работното време на студентската служба, да се испечати пораката `Student will not be served at all`.


## Test Cases


### Test Case 1

**Input:**
```text
26
```
**Expected output:**

```text
Hours: 2, minutes: 35
```



### Test Case 2

**Input:**
```text
64
```
**Expected output:**

```text
Studentot ne e voopsto usluzen
```



### Test Case 3

**Input:**
```text
12
```
**Expected output:**

```text
Hours: 0, minutes: 55
```




### Test Case 4

**Input:**
```text
50
```
**Expected output:**

```text
Hours: 5, minutes: 5
```


### Test Case 5

**Input:**
```text
55
```
**Expected output:**

```text
Hours: 5, minutes: 30
```
