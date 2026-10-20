## Exercise 15 - Recursive Number Transformation and Finding the Five Smallest Values

### Description

A natural number `a` is called a **transformation** of another natural number `b` if and only if every digit equal to `9` in `b` is replaced with the digit `7` in `a`.

**Example:** The number `734775` is a transformation of the number `934795`.

Read an unknown number of integers from standard input, up to a maximum of 100, until a value that cannot be interpreted as an integer is entered.

Your task is to print the **five smallest transformed values** of all the entered numbers, in ascending order.

**Note:** If fewer than five numbers are entered, print all the transformed values that were entered.

The transformation of a given number must be implemented in a separate **recursive function**:

```cpp
int poramnet(int a);
```

**Example:**

For the numbers `9592`, `69403`, `100007`, `6`, `987`, `6977`, `33439`, their transformations are `7572`, `67403`, `100007`, `6`, `787`, `6777`, and `33437`, respectively.

The five smallest transformed values, printed in ascending order, are:

```text
6 787 6777 7572 33437
```

**It is forbidden to use global variables.**

## Задача 15 - Рекурзивно порамнување на броеви и наоѓање на петте најмали вредности

### Опис

За еден природен број `a` велиме дека е **порамнување** на друг природен број `b` ако и само ако цифрите еднакви на `9` во бројот `b` се заменети со цифрата `7` во бројот `a`.

**Пример:** Бројот `734775` е порамнување на бројот `934795`.

Од стандарден влез се внесуваат непознат број на цели броеви (не повеќе од 100), сè додека не се внесе нешто што не може да се интерпретира како цел број.

Ваша задача е да ги отпечатите **најмалите 5 порамнувања** на сите внесени броеви, по редослед од најмалиот кон најголемиот.

**Забелешка:** Доколку се внесат помалку од 5 броеви, тогаш се печатат толку броеви колку што се соодветно внесени.

Наоѓањето на порамнувањето на даден број треба да се реализира во посебна **рекурзивна функција**:

```cpp
int poramnet(int a);
```

**Пример:**

За броевите `9592`, `69403`, `100007`, `6`, `987`, `6977`, `33439`, треба да се најдат нивните порамнувања, односно `7572`, `67403`, `100007`, `6`, `787`, `6777` и `33437`, соодветно.

Најмалите 5 порамнувања, отпечатени по растечки редослед, се:

```text
6 787 6777 7572 33437
```

**ЗАБРАНЕТО** е користење на глобални променливи.




## Test Cases


### Test Case 1

**Input:**
```text
5
6
8
9
9
9
9
y
```
**Expected output:**

```text
5 6 7 7 7
```





### Test Case 2

**Input:**
```text
11
22
33
44
55
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
212
213
217
717
707
888
9999
917
76
9
.
```
**Expected output:**

```text
6 7 7 7 8
```






### Test Case 3

**Input:**
```text
997797797
d
```
**Expected output:**

```text
777777777
```





### Test Case 4

**Input:**
```text
9592
69403
100007
6
987
6977
33439
x
```
**Expected output:**

```text
6 787 6777 7572 33437
```






### Test Case 5

**Input:**
```text
988
999
10
9797
g
```
**Expected output:**

```text
10 777 788 7777
```





### Test Case 6

**Input:**
```text
123
54397
99999999
7777777
34789
gh
```
**Expected output:**

```text
123 34787 54377 7777777 77777777
```
