## Exercise 46 - Finding Numbers Containing X

### Problem Description

Two integers, `x` and `n`, are entered through standard input, followed by `n` integers.

For each of the `n` integers, check whether the number contains `x` as a sequence of consecutive digits. The value of `x` will always be smaller than the integers entered after it.

Print all numbers that satisfy the condition. If no such numbers exist, print `Nema`.

### Example

**Input:**
```text
23 4
1234 2333 1122 1114455
```

**Output:**
```text
1234
2333
```

**Explanation:**

The number `x = 23` appears as a sequence of consecutive digits in `1234` and `2333`. Therefore, these two numbers are printed.

---

## Задача 46 - Пронаоѓање броеви што го содржат X

### Опис на проблемот

Од стандарден влез се внесуваат два цели броја `x` и `n`, а потоа се внесуваат уште `n` цели броеви.

За секој од внесените `n` броеви треба да се провери дали го содржи бројот `x` како низа од последователни цифри. Секогаш `x` ќе биде помал од броевите што се внесуваат по него.

Броевите што го исполнуваат условот треба да се испечатат на екран. Доколку нема такви броеви, треба да се испечати `Nema`.

### Пример

**Влез:**
```text
23 4
1234 2333 1122 1114455
```

**Излез:**
```text
1234
2333
```

**Објаснување:**

Бројот `x = 23` се појавува како низа од последователни цифри во броевите `1234` и `2333`. Затоа, овие два броја се печатат.



## Test Cases


### Test Case 1

**Input:**
```text
23 4
1234
2333
121134
341125
```
**Expected output:**

```text
1234
2333
```



### Test Case 2

**Input:**
```text
15 4
113515
1515
5151
334
```
**Expected output:**

```text
113515
1515
5151
```



### Test Case 3

**Input:**
```text
5 5
5
5
3
2
3
```
**Expected output:**

```text
5
5
```




### Test Case 4

**Input:**
```text
1234 6
1234
4321
44444
11223344
11123411
5
```
**Expected output:**

```text
1234
11123411
```



### Test Case 5

**Input:**
```text
77 3
71
87
123
```
**Expected output:**

```text
Nema
```
