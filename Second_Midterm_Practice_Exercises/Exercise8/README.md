## Exercise 8 - Longest Line Containing at Least Two Digits

### Description

Read an unknown number of lines from standard input until the line `0` is encountered. Find the longest line that contains at least two digits.

Print the characters between the first and the last digit of the longest qualifying line, including both digits, while preserving their original order.

If multiple lines have the same maximum length, print the last one among them. It is assumed that no line is longer than 100 characters.

### Example

**Input:**
```text
aaa123aa222aa2aaa23aaaaa22
aaaaaaaaaaaa 23aaaa
123 aaa aaa aaa aaa 12345 aaa aaa 2a
0
```

**Output:**
```text
123 aaa aaa aaa aaa 12345 aaa aaa 2
```

## Задача 8 - Најдолг ред што содржи најмалку две цифри

### Опис

Од стандарден влез се читаат непознат број редови сè додека не се прочита редот `0`. Треба да се најде најдолгиот ред што содржи најмалку две цифри.

На стандарден излез да се испечатат знаците од најдолгиот ред што се наоѓаат помеѓу првата и последната цифра, вклучувајќи ги и двете цифри, во истиот редослед.

Доколку има повеќе редови со иста максимална должина, се печати последниот од нив. Се претпоставува дека ниту еден ред не е подолг од 100 знаци.

### Пример

**Влез:**
```text
aaa123aa222aa2aaa23aaaaa22
aaaaaaaaaaaa 23aaaa
123 aaa aaa aaa aaa 12345 aaa aaa 2a
0
```

**Излез:**
```text
123 aaa aaa aaa aaa 12345 aaa aaa 2
```



## Test Cases


### Test Case 1

**Input:**
```text
aaa123aa222aa2aaa23aaaaa22 11112 222311111
aaa123aa222aa2aaa23aaaaa22 11112 aaaaaaaa1
aaa123aa222aa2aaa23aaaaa22 11112 2a23111a1
aaa123aa222aa2aaa23aaaaa22 11112 222311aa1
aaa123aa222aa2aaa23aaaaa22 11112 222311111
aaa123aa222aa2aaa21aa11122 11112 aaaa11111
1aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
0
```
**Expected output:**

```text
123aa222aa2aaa21aa11122 11112 aaaa11111
```




### Test Case 2

**Input:**
```text
aaa123aa222aa2aaa23aaaaa22
aaaaaaaaaaaa 23aaaa
123 aaa aaa aaa aaa 12345 aaa aaa 2a
0
```
**Expected output:**

```text
123 aaa aaa aaa aaa 12345 aaa aaa 2
```





### Test Case 3

**Input:**
```text
aaa123aa222aa2aaa23aaaaa22 11112 222311111
aaaaaaaaaaaa 23aaaa
123 aaa aaa aaa aaa 12345 aaa aaa 2132a
aaaa 3
0
```
**Expected output:**

```text
123aa222aa2aaa23aaaaa22 11112 222311111
```




