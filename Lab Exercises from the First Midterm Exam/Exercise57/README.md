## Exercise 57 - Semester Grade Average Calculator

### Problem Description

Create a calculator that determines the semester in which a student achieved the highest average.

First, an integer `N` is entered, representing the number of semesters the student has enrolled in.

For each semester:
1. Enter an integer `M`, representing the number of grades recorded for that semester.
2. Enter the `M` grades.
3. Enter the number of courses planned for that semester.

**Example Input:**
```text
3
5 9 10 8 9 7 5
4 8 8 7 9 5
5 10 8 10 9 9 6
```

From this example, `N = 3`, meaning the student has enrolled in three semesters. For the first semester, `M = 5`, meaning five grades have been entered. The last number, `5`, indicates the number of courses planned for that semester.

The average for each semester is calculated using the following formula:

\[
\text{Average} =
\left(\frac{\text{sumGrades}}{\text{numberGrades}}\right)
\cdot
\left(\frac{\text{numberSubjects}}{\text{predictedSubjects}}\right)
+
\left(1-\frac{\text{numberSubjects}}{\text{predictedSubjects}}\right)\cdot 5
\]

Where:
- `sumGrades` is the sum of all grades entered for the semester.
- `numberGrades` is the number of grades entered.
- `numberSubjects` is the number of grades (courses) recorded for the semester.
- `predictedSubjects` is the number of courses planned for the semester.

### Input

- An integer `N`, representing the number of semesters.
- For each semester:
  - An integer `M`, representing the number of grades entered.
  - `M` grades.
  - An integer representing the number of courses planned for that semester.

### Output

Print the ordinal number of the semester with the highest calculated average, the average for that semester, and the percentage of passed subjects relative to the planned subjects.

---

## Задача 57 - Калкулатор за просек на оценки по семестри

### Опис на проблемот

Да се направи калкулатор којшто при внесување на оцените по семестар ќе го испечати редниот број на семестарот во кој студентот остварил највисок просек.

На почетокот се внесува бројот `N`, кој означува колку семестри има запишано студентот.

За секој семестар:
1. Прво се внесува бројот `M`, кој означува колку оценки има студентот за тој семестар.
2. Потоа се внесуваат `M`-те оценки.
3. По внесувањето на оценките, се внесува бројот на предмети што биле предвидени за тој семестар.

**Пример за влез:**
```text
3
5 9 10 8 9 7 5
4 8 8 7 9 5
5 10 8 10 9 9 6
```

Од примерот може да заклучиме дека `N = 3`, односно студентот има запишано три семестри. За првиот семестар, `M = 5`, што значи дека се внесени пет оценки. Последниот број `5` означува колку предмети биле предвидени за тој семестар.

Просекот се пресметува според следнава формула:

\[
\text{Просек} =
\left(\frac{\text{збирОцени}}{\text{бројОцени}}\right)
\cdot
\left(\frac{\text{бројПредмети}}{\text{предвидениПредмети}}\right)
+
\left(1-\frac{\text{бројПредмети}}{\text{предвидениПредмети}}\right)\cdot 5
\]

Каде што:
- `збирОцени` е збирот на сите внесени оценки за семестарот.
- `бројОцени` е бројот на внесени оценки.
- `бројПредмети` е бројот на предмети за кои се внесени оценки.
- `предвидениПредмети` е бројот на предмети предвидени за семестарот.

### Влез

- Цел број `N`, кој го означува бројот на семестри.
- За секој семестар:
  - Цел број `M`, кој го означува бројот на внесени оценки.
  - `M` оценки.
  - Цел број што го означува бројот на предмети предвидени за семестарот.

### Излез

Да се испечатат редниот број на семестарот со највисок пресметан просек, просекот за тој семестар и процентот на положени предмети во однос на предвидените предмети.





## Test Cases


### Test Case 1

**Input:**
```text
3
5 9 10 8 9 7 5
4 8 8 7 9 5
5 10 8 10 9 9 6
```
**Expected output:**

```text
Semester: 1
Grade point average : 8.6, percentage of subjects passed: 100%
```





### Test Case 2

**Input:**
```text
5
3 10 10 10 5
4 9 10 9 8 5
5 8 9 9 9 9 5
5 9 10 9 10 10 6
4 10 8 7 8 4
```
**Expected output:**

```text
Semester: 4
Grade point average : 8.83333, percentage of subjects passed: 83.3333%
```




### Test Case 3

**Input:**
```text
4
3 8 7 9 5
0 5
5 8 7 9 8 8 5
5 8 9 9 8 6 5
```
**Expected output:**

```text
Semester: 3
Grade point average : 8, percentage of subjects passed: 100%
```
