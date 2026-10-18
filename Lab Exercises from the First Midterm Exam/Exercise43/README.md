## Exercise 43 - Semester Planning and Scholarship Eligibility

### Problem Description

Viktor is a FINKI student who is thinking about how to plan his semester in order to potentially receive a scholarship. He knows himself well and has researched the subjects, so he can predict the grades he expects to receive in the subjects he might enroll in. He wants to plan his semester in such a way that he achieves the highest possible average grade at the end of the semester.

Six grades are entered through standard input. The first five grades correspond to compulsory subjects that he must enroll in. The sixth grade corresponds to an optional subject that he may choose to enroll in or skip.

Viktor must enroll in either **5 or 6 subjects**. He will choose the option that gives him the **highest average grade**.

### Output

Print the number of subjects Viktor enrolls in. On a new line, print:

- `1` if Viktor receives a scholarship.
- `0` otherwise.

Viktor receives a scholarship only if he enrolls in **6 subjects** and his average grade is **8.5 or higher**.

---

## Задача 43 - Планирање на семестар и право на стипендија

### Опис на проблемот

Виктор е студент на ФИНКИ кој размислува како да го испланира својот семестар за евентуално да добие стипендија. Тој добро се познава себеси и има истражувано за предметите, па може да ги претпостави оценките што би ги добил по предметите што планира да ги запише. Неговата цел е да го испланира семестарот така што на крајот ќе има што е можно повисок просек.

На стандарден влез се внесуваат **6 оценки** за предметите. Првите 5 оценки се однесуваат на задолжителни предмети што мора да ги запише. Шестата оценка е за дополнителен изборен предмет, кој може да одлучи дали ќе го запише или не.

Виктор мора да запише вкупно **5 или 6 предмети**. Тој ќе ја избере опцијата што му овозможува да постигне **највисок просек**.

### Излез

Да се испечати бројот на предмети што ги запишува Виктор. Во нов ред да се испечати:

- `1` доколку Виктор добива стипендија.
- `0` во спротивно.

Виктор добива стипендија само доколку запише **6 предмети** и неговиот просек е **8.5 или поголем**.



## Test Cases


### Test Case 1

**Input:**
```text
8 7 9 7 9
7
```
**Expected output:**

```text
Enrolled 5 subjects
0
```


### Test Case 2

**Input:**
```text
6 7 5 9 7
7
```
**Expected output:**

```text
Enrolled 6 subjects
0
```



### Test Case 3

**Input:**
```text
7 9 8 9 8
5
```
**Expected output:**

```text
Enrolled 5 subjects
0
```




### Test Case 4

**Input:**
```text
10 9 8 7 9
9
```
**Expected output:**

```text
Enrolled 6 subjects
1
```




### Test Case 5

**Input:**
```text
9 8 10 8 9
8
```
**Expected output:**

```text
Enrolled 5 subjects
0
```



### Test Case 6

**Input:**
```text
7 10 9 8 8
10
```
**Expected output:**

```text
Enrolled 6 subjects
1
```

