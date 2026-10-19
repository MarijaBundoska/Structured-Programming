## Exercise 13 - Digit Sum and Previous Number's Maximum Digit

### Description

Read an unknown number of positive integers from the keyboard until a non-numeric input is entered. For each number, calculate the sum of its digits and add the maximum digit of the previously entered number. For the first number, calculate only the sum of its digits.

Print the result for each number in the following format:

`[number]: [result]`

### Example

**Input:**
```text
342
345
123
456
```

**Output:**
```text
342: 9
345: 16
123: 11
456: 18
```

## Задача 13 - Збир на цифрите и максимална цифра од претходниот број

### Опис

Од тастатура се читаат непознат број позитивни цели броеви сè додека не се внесе нешто различно од број. За секој број треба да се пресмета збирот на неговите цифри и да се додаде максималната цифра од претходно внесениот број. За првиот внесен број се пресметува само збирот на неговите цифри.

Резултатот за секој број треба да се испечати во следниот формат:

`[број]: [резултат]`

### Пример

**Влез:**
```text
342
345
123
456
```

**Излез:**
```text
342: 9
345: 16
123: 11
456: 18
```






## Test Cases




### Test Case 1

**Input:**
```text
97654 48654 12345 12343 1263 12443 12643 12777 #
```
**Expected output:**

```text
97654: 31
48654: 36
12345: 23
12343: 18
1263: 16
12443: 20
12643: 20
12777: 30
```





### Test Case 2

**Input:**
```text
542 8965 7452 1111 12 8 6532 98745 15926 #
```
**Expected output:**

```text
542: 11
8965: 33
7452: 27
1111: 11
12: 4
8: 10
6532: 24
98745: 39
15926: 32
```





### Test Case 3

**Input:**
```text
9 8 7 6 5 4 3 2 1 #
```
**Expected output:**

```text
9: 9
8: 17
7: 15
6: 13
5: 11
4: 9
3: 7
2: 5
1: 3
```





### Test Case 4

**Input:**
```text
75386 86142 94285 15926 35724 #
```
**Expected output:**

```text
75386: 29
86142: 29
94285: 36
15926: 32
35724: 30
```





### Test Case 5

**Input:**
```text
123 456 789 987 654 321 #
```
**Expected output:**

```text
123: 6
456: 18
789: 30
987: 33
654: 24
321: 12
```




### Test Case 6

**Input:**
```text
10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 100 101 102 156 189 178 #
```
**Expected output:**

```text
10: 1
11: 3
12: 4
13: 6
14: 8
15: 10
16: 12
17: 14
18: 16
19: 18
20: 11
21: 5
22: 6
23: 7
24: 9
25: 11
26: 13
27: 15
28: 17
29: 19
30: 12
100: 4
101: 3
102: 4
156: 14
189: 24
178: 25
```

