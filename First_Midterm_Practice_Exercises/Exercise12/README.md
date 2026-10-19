## Exercise 12 - Statistics of Maximum Digit Positions

### Description

Read an unknown number of positive integers from the keyboard, each containing at most five digits. Reading stops when the input is not an integer.

For each number, find the position of the **first occurrence of its largest digit**, counting positions from right to left, where the units digit is at position `0`.

Then, print the statistics for the positions of the largest digits in the following format:

`[position]: [number of integers whose largest digit is first found at that position]`

**Example**

Input:
```text
97654 48654 12345 12343 1263 12443 12643 12777
```

Output:
```text
0: 2
1: 3
2: 1
3: 1
4: 1
```

## Задача 12 - Статистика за позициите на максималните цифри

### Опис

Од тастатура се читаат непознат број позитивни цели броеви со најмногу пет цифри. Читањето завршува кога ќе се внесе нешто што не е цел број.

За секој број треба да се најде позицијата на **првото појавување на неговата најголема цифра**, сметајќи оддесно налево, при што цифрата на единиците се наоѓа на позиција `0`.

Потоа, да се испечати статистика за позициите на најголемите цифри во следниот формат:

`[позиција]: [број на цели броеви чија најголема цифра првпат се појавува на таа позиција]`

**Пример**

Влез:
```text
97654 48654 12345 12343 1263 12443 12643 12777
```

Излез:
```text
0: 2
1: 3
2: 1
3: 1
4: 1
```



## Test Cases


### Test Case 1

**Input:**
```text
97654 48654 12345 12343 1263 12443 12643 12777 #
```
**Expected output:**

```text
0: 2
1: 3
2: 1
3: 1
4: 1
```





### Test Case 2

**Input:**
```text
542 8965 7452 1111 12 8 6532 98745 15926 #
```
**Expected output:**

```text
0: 3
1: 0
2: 3
3: 2
4: 1
```





### Test Case 3

**Input:**
```text
9 8 7 6 5 4 3 2 1 #
```
**Expected output:**

```text
0: 9
1: 0
2: 0
3: 0
4: 0
```





### Test Case 4

**Input:**
```text
75386 86142 94285 15926 35724 #
```
**Expected output:**

```text
0: 0
1: 1
2: 2
3: 0
4: 2
```




### Test Case 5

**Input:**
```text
123 456 789 987 654 321 #
```
**Expected output:**

```text
0: 3
1: 0
2: 3
3: 0
4: 0
```





### Test Case 6

**Input:**
```text
10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 100 101 102 156 189 178 #
```
**Expected output:**

```text
0: 22
1: 4
2: 1
3: 0
4: 0
```
