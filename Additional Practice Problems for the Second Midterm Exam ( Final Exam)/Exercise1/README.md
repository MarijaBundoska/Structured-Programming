## Exercise 1 - Longest Palindrome Containing a Special Character

### Description

Read an integer `N` (`N <= 100`) from standard input, followed by `N` strings. The strings contain letters, digits, and special characters (without spaces), and each string is no longer than 80 characters.

Write a program that prints the **longest string that is a palindrome** (reads the same from left to right and from right to left) and contains at least one special character.

If no such string exists, print `"Nema!"`. If two or more strings satisfy the conditions and have the same maximum length, print the first one that satisfies the conditions.

**Input:**
```text
9
a!bcdedcb!a
Kfd?vsvv98_89vvsv?dfK
Ccsvsdvdfv
342425vbbcb
352!2353696969625
gdg??dfg!!
5336346644747
8338736767867
12344321
```

**Output:**
```text
Kfd?vsvv98_89vvsv?dfK
```

## Задача 1 - Најдолга палиндромска низа со специјален знак

### Опис

Од стандарден влез се чита цел број `N` (`N <= 100`), а потоа `N` низи од знаци. Низите содржат букви, цифри и специјални знаци (без празни места), а секоја од нив не е подолга од 80 знаци.

Да се напише програма што на стандарден излез ќе ја отпечати **најдолгата низа што е палиндром** (се чита исто од лево на десно и од десно на лево) и содржи барем еден специјален знак.

Ако нема такви низи, да се отпечати `"Nema!"`. Ако две или повеќе низи го задоволуваат условот и имаат иста максимална должина, да се отпечати првата низа што го задоволува условот.

**Влез:**
```text
9
a!bcdedcb!a
Kfd?vsvv98_89vvsv?dfK
Ccsvsdvdfv
342425vbbcb
352!2353696969625
gdg??dfg!!
5336346644747
8338736767867
12344321
```

**Излез:**
```text
Kfd?vsvv98_89vvsv?dfK
```




## Test Cases 1


### Test Case 

**Input:**
```text
9
a!bcdedcb!a
Kfd?vsvv98_89vvsv?dfK
Ccsvsdvdfv
342425vbbcb
352!2353696969625
gdg??dfg!!
5336346644747
8338736767867
12344321
```
**Expected output:**

```text
Kfd?vsvv98_89vvsv?dfK
```




### Test Case 2

**Input:**
```text
7
?!W2sse2W!?
352!2353696969625
gdg??dfg!!
!bananab!
5336346644747
8338736767867
1123443211
```
**Expected output:**

```text
!bananab!
```







### Test Case 3

**Input:**
```text
5
palindromemordnilap
AnothERString?gnirtSREhtonA
bananab
!randomodnar!
?strts?
```
**Expected output:**

```text
AnothERString?gnirtSREhtonA
```






### Test Case 4

**Input:**
```text
4
reversesrever
kalabalak
123321
testtset
```
**Expected output:**

```text
Nema!
```






### Test Case 5

**Input:**
```text
11
a!bcdedcb!a
Kfd?vsvv98_89vvsv?dfK
AnothERString?gnirtSREhtonA
BnothERString?gnirtSREhtonB
Ccsvsdvdfv
342425vbbcb
352!2353696969625
gdg??dfg!!
5336346644747
8338736767867
12344321
```
**Expected output:**

```text
AnothERString?gnirtSREhtonA
```
