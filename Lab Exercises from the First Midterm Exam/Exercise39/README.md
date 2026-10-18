## Exercise 39 - Student Service Waiting Time

### Problem Description

At FINKI, it is time to enroll new students. For a student to enroll, they must arrive at the faculty before 9 a.m. and wait in line to be served by the student service.

The student service starts working at 9:00 a.m. It works for 2 hours, takes a 30-minute break, works for another hour, takes another 30-minute break, and then works for 2 more hours before closing.

The student service needs exactly 5 minutes to serve one student.

Your task is to determine, given the position of a student in the queue, the time in hours and minutes when the student will be served. If the student will not be served before the student service closes, print `Student will not be served at all`.

### Опис на задачата

На ФИНКИ е време за запишување нови студенти. За да може студентот да се запише, треба да пристигне на факултетот пред 9 часот наутро и да чека во ред за да биде услужен од студентската служба.

Студентската служба започнува со работа во 9:00 часот. Работи 2 часа, па има пауза од 30 минути. Потоа работи уште 1 час, има пауза од 30 минути и продолжува да работи уште 2 часа, по што завршува со работа.

На студентската служба ѝ се потребни точно 5 минути за да услужи еден студент.

Твоја задача е, за даден реден број на студентот во редицата, да го испечатиш времето во часови и минути кога тој ќе биде услужен. Доколку студентот не може да биде услужен пред завршувањето на работното време на студентската служба, да се испечати пораката `Student will not be served at all`.


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
Student will not be served at all
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



