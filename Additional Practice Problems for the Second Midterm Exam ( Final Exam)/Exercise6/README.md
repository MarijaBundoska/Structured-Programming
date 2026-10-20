## Exercise 6 - Smallest Element Appearing an Even Number of Times

Read a natural number **N** (**N ≤ 100**) and an array of **N positive integers** `a[]` from standard input.

Write a function `int par(a, n)` that returns the smallest element in the array that appears an even number of times. If no such element exists, the function returns `0`.

Write a program that calls the function `par` for the given array `a[]` and prints the smallest number that appears an even number of times in the array.

**Example 1**

**Input**
```text
12
1 3 4 5 3 1 4 5 5 3 2 3
```

**Output**
```text
Najmaliot element koj se pojavuva paren broj pati e 1
```

In this example, the function `par` returns `1`.

**Example 2**

**Input**
```text
12
7 3 4 5 3 8 4 5 5 3 2 6
```

**Output**
```text
Nitu eden element ne se pojavuva paren broj pati!
```

In this example, the function `par` returns `0`.

---

## Задача 6 - Најмал елемент што се појавува парен број пати

Од стандарден влез се чита природен број **N** (**N ≤ 100**), како и низа од **N позитивни цели броеви** `a[]`.

Да се напише функција `int par(a, n)` која ќе го врати најмалиот елемент во низата што се појавува парен број пати. Доколку нема таков елемент, функцијата враќа вредност `0`.

Да се напише програма што ќе ја повика функцијата `par` за внесената низа `a[]` и ќе го испечати најмалиот број што се појавува парен број пати во низата.

**Пример 1**

**Влез**
```text
12
1 3 4 5 3 1 4 5 5 3 2 3
```

**Излез**
```text
Najmaliot element koj se pojavuva paren broj pati e 1
```

Во овој пример, функцијата `par` враќа вредност `1`.

**Пример 2**

**Влез**
```text
12
7 3 4 5 3 8 4 5 5 3 2 6
```

**Излез**
```text
Nitu eden element ne se pojavuva paren broj pati!
```

Во овој пример, функцијата `par` враќа вредност `0`.






## Test Cases


### Test Case 1

**Input:**
```text
12
1 3 4 5 3 1 4 5 5 3 2 3
```
**Expected output:**

```text
Najmaliot element koj se pojavuva paren broj pati e 1
```





### Test Case 2

**Input:**
```text
12
7 3 4 5 3 8 1 5 5 3 2 6
```
**Expected output:**

```text
Nitu eden element ne se pojavuva paren broj pati!
```






### Test Case 3

**Input:**
```text
12
7 3 4 5 3 8 4 5 5 3 2 3
```
**Expected output:**

```text
Najmaliot element koj se pojavuva paren broj pati e 3
```




### Test Case 4

**Input:**
```text
20
893 1460 4309 365 807 6062 2308 1897 7825 4044 2115 9106 6765 6481 3883 4826 2943 1935 7880 6121
```
**Expected output:**

```text
Nitu eden element ne se pojavuva paren broj pati!
```
