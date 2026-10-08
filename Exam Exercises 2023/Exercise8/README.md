# Exercise 8 - Longest Row with at Least Two Digits

## Task

An unknown number of rows are read from standard input until `0` is read.

Find the **longest row that contains at least 2 digits**.

Then, print to standard output the characters from the longest row that are located **between the first and last digit**, including those two digits, in the same order.

If there are multiple rows of the same maximum length, print the **last one**.

It is assumed that no row is longer than 100 characters.

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

# Вежба 8 - Најдолг ред со најмалку две цифри

## Опис на задачата

Од стандарден влез се читаат непознат број на редови додека не се прочита `0`.

Да се најде **најдолгиот ред во кој има барем 2 цифри**.

Потоа, на стандарден излез да се испечатат знаците од најдолгиот ред кои се наоѓаат **помеѓу првата и последната цифра**, заедно со тие 2 цифри, во истиот редослед.

Доколку има повеќе такви редови, се печати **последниот**.

Се претпоставува дека ниту еден ред не е подолг од 100 знаци.

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

