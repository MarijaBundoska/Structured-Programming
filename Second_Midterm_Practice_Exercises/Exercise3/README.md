## Exercise 3 - Sum of Elements from a Given Index Using Pointers

### Description

Read `N` positive integers (`N <= 100`) into an array, followed by an integer `ind` (`ind >= 0`).

Write a function `sum_pos` that takes the array, the index `ind`, and the number of valid elements in the array as arguments. The function should return the sum of all elements starting from the given index `ind` to the end of the array. If the index `ind` is greater than `N`, the function should return `0`.

**Note:** The problem must be solved using pointers, without using the subscript operator `[ ]`.

### Example

**Input:**
```text
10
2 4 6 8 1 3 9 12 33 44
6
```

**Output:**
```text
98
```

Explanation: `98 = 9 + 12 + 33 + 44`

## Задача 3 - Збир на елементите од даден индекс со покажувачи

### Опис

Од тастатура се внесуваат `N` позитивни цели броеви (`N <= 100`) во низа, а потоа се внесува и цел број `ind` (`ind >= 0`).

Да се напише функција `sum_pos` која ги прима низата, индексот `ind` и бројот на валидни елементи во низата. Функцијата треба да ја врати сумата на сите елементи почнувајќи од индексот `ind` па сè до крајот на низата. Ако индексот `ind` е поголем од `N`, функцијата треба да врати `0`.

**Забелешка:** Задачата треба да се реши со помош на покажувачи, без користење на операторот `[ ]`.

### Пример

**Влез:**
```text
10
2 4 6 8 1 3 9 12 33 44
6
```

**Излез:**
```text
98
```

Објаснување: `98 = 9 + 12 + 33 + 44`





## Test Cases


### Test Case 1

**Input:**
```text
6
2 1 66 100 1 2
5
```
**Expected output:**

```text
2
```






### Test Case 2

**Input:**
```text
6
2 1 66 100 1 2
0
```
**Expected output:**

```text
172
```




### Test Case 3

**Input:**
```text
5
1 2 3 4 5
3
```
**Expected output:**

```text
9
```




### Test Case 4

**Input:**
```text
5
1 2 3 4 5
5
```
**Expected output:**

```text
0
```




### Test Case 5

**Input:**
```text
6
2 1 66 100 1 2
4
```
**Expected output:**

```text
3
```





### Test Case 6

**Input:**
```text
10
2 4 6 8 1 3 9 12 33 44
6
```
**Expected output:**

```text
98
```



