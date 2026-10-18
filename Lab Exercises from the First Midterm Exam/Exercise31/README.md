## Exercise 31 - Game Points Calculation

You have purchased a new game with the following rules:

- When the game ends, you receive `P1` points for each completed level.
- If you have completed more than `C1` levels, you receive `P2` points instead of `P1` for each level.
- If you have completed more than `C2` levels, where `C2 > C1`, you receive `P3` points instead of `P2` for each level.

For example, let `P1 = 100`, `C1 = 3`, `P2 = 150`, `C2 = 6`, and `P3 = 200`. Then:

- Completing 2 levels gives `2 * P1 = 200` points.
- Completing 4 levels gives `4 * P2 = 600` points.
- Completing 6 levels gives `6 * P2 = 900` points.
- Completing 8 levels gives `8 * P3 = 1600` points.

You play the game three times, starting from the beginning each time. You complete `A` levels in the first attempt, `B` levels in the second attempt, and `C` levels in the third attempt.

Write a program that reads the values `P1`, `C1`, `P2`, `C2`, `P3`, and `A`, `B`, and `C`, and calculates and prints the total number of points earned across all three attempts.

## Задача 31 - Пресметување поени од игра

Имате купено нова игра која ги има следните правила:

- Кога ќе заврши играта, добивате `P1` поени за секое поминато ниво.
- Доколку имате поминато над `C1` нивоа, добивате `P2` поени наместо `P1` за секое ниво.
- Доколку имате поминато над `C2` нивоа, каде што `C2 > C1`, добивате `P3` поени наместо `P2` за секое ниво.

На пример, ако `P1 = 100`, `C1 = 3`, `P2 = 150`, `C2 = 6` и `P3 = 200`, тогаш:

- За поминати 2 нивоа добивате `2 * P1 = 200` поени.
- За поминати 4 нивоа добивате `4 * P2 = 600` поени.
- За поминати 6 нивоа добивате `6 * P2 = 900` поени.
- За поминати 8 нивоа добивате `8 * P3 = 1600` поени.

Ја играте играта три пати, при што секојпат започнувате од почеток. Првиот пат поминувате `A` нивоа, вториот пат `B` нивоа, а третиот пат `C` нивоа.

Да се напише програма која за дадените вредности `P1`, `C1`, `P2`, `C2`, `P3`, како и `A`, `B` и `C`, ќе пресмета и ќе го испечати вкупниот број освоени поени од трите играња.





## Test Cases


### Test Case 1

**Input:**
```text
100 3 150 6 200
4 0 0
```
**Expected output:**

```text
600
```



### Test Case 2

**Input:**
```text
102 4 131 5 142
4 7 5
```
**Expected output:**

```text
2057
```




### Test Case 3

**Input:**
```text
97 1 182 8 246
7 1 10
```
**Expected output:**

```text
3831
```




### Test Case 4

**Input:**
```text
135 5 148 6 200
4 6 12
```
**Expected output:**

```text
3828
```


