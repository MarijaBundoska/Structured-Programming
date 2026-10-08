# Task 10 - Substrings Between Two Characters

## 🇬🇧 English

From standard input, first two characters `z1` and `z2` are read, and then lines containing sequences of characters are read until the character `#` is read (each line is no longer than 80 characters).

Write a program that will print to standard output the substrings from each line consisting of the characters that are located **between `z1` and `z2` (excluding them)**.

Each substring is printed on a new line.

It is assumed that each line of the input **contains the characters `z1` and `z2` exactly once**, the character `z1` is always located **before** the character `z2`, and there is always **at least one character between `z1` and `z2`**.

---

## 🇲🇰 Македонски

Од стандарден влез прво се читаат два знака `z1` и `z2`, а потоа се читаат редови со низи од знаци сè додека не се прочита знакот `#` (секој од редовите не е подолг од 80 знаци).

Да се напише програма со која на стандарден излез ќе се испечатат поднизите од секој ред составени од знаците што се наоѓаат **меѓу `z1` и `z2` (без нив)**.

Секоја подниза се печати во нов ред.

Се смета дека секој ред од датотеката **точно еднаш** ги содржи знаците `z1` и `z2`, знакот `z1` секогаш се наоѓа **пред** знакот `z2`, а меѓу `z1` и `z2` секогаш има **барем еден знак**.

## Test Cases


### Test Case 1

**Input:**
```text
0 9
nfjskdz0nvjkfdmnlks9bvfkjmcdz,
bfhjdskvfdkl0fvkdzddjmje k dmkldz kdfds!%mlacsd9
0fbnrjkdn9
fjkd0jdfkfmjndksfjd;sj sad;jm 9nfcjka
#
```
**Expected output:**

```text
nvjkfdmnlks
fvkdzddjmje k dmkldz kdfds!%mlacsd
fbnrjkdn
jdfkfmjndksfjd;sj sad;jm
```



### Test Case 2

**Input:**
```text
, :
1122,mleko:100
1312,leb:50
14567,kakao:20
987,testo za pica:30
7865,FINKI smoki:150
34567,jogurt:85
2345,puter:130
#
```
**Expected output:**

```text
mleko
leb
kakao
testo za pica
FINKI smoki
jogurt
puter
```




### Test Case 3

**Input:**
```text
5 :
12345Maja Majovska: 34
13145Aco Acoski: 93
14785Martin Martinoski: 87
#
```
**Expected output:**

```text
Maja Majovska
Aco Acoski
Martin Martinoski
```



### Test Case 4

**Input:**
```text
- :
12345-Maja Majovska: 54
15145-Aco Acoski: 95
14785-Martin Martinoski: 87
#
```
**Expected output:**

```text
Maja Majovska
Aco Acoski
Martin Martinoski
```
