## Exercise 3 - Strings Containing the Substring "A1c" at Least Twice

### Description

Read an integer `N` (`N < 100`) from standard input, followed by `N` strings. The strings contain letters, digits, and special characters, and each string is no longer than 50 characters.

Write a program that prints all strings containing the substring `A1c` at least twice, preserving their original input order.

When printing the strings, **all alphabetic characters must be converted to lowercase**.

**Example**

**Input:**
```text
6
Ekjqh!!lkjsdh
A1c01AA1c92
12A1cwwA1cxy
12A1cwwA1bxy
aA1cwA1cA1ccA1cxab
nemaA1c_povekjepati
```

**Output:**
```text
a1c01aa1c92
12a1cwwa1cxy
aa1cwa1ca1cca1cxab
```

## Задача 3 - Низи што ја содржат поднизата „A1c“ најмалку двапати

### Опис

Од стандарден влез се чита цел број `N` (`N < 100`), а потоа `N` низи од знаци. Низите содржат букви, цифри и специјални знаци, а секоја од нив не е подолга од 50 знаци.

Да се напише програма што ќе ги отпечати сите низи во кои поднизата `A1c` се содржи најмалку двапати, според редоследот по кој се прочитани од влезот.

При печатењето, **сите алфабетски знаци треба да се претворат во мали букви**.

**Пример**

**Влез:**
```text
6
Ekjqh!!lkjsdh
A1c01AA1c92
12A1cwwA1cxy
12A1cwwA1bxy
aA1cwA1cA1ccA1cxab
nemaA1c_povekjepati
```

**Излез:**
```text
a1c01aa1c92
12a1cwwa1cxy
aa1cwa1ca1cca1cxab
```



## Test Cases


### Test Case 1

**Input:**
```text
6
Ekjqh!!lkjsdh
A1c01АA1c92
12A1cwwA1cxy
12A1cwwA1bxy
аA1cwA1cA1ccA1cxab
nemaA1c_povekjepati
```
**Expected output:**

```text
a1c01Аa1c92
12a1cwwa1cxy
аa1cwa1ca1cca1cxab
```







### Test Case 2

**Input:**
```text
10
A1C0cWqx5A1CqNtZCuqDZ
TyoWHFvCVZDyqmEWqn
0Lb2J8MFyi1ESK4WrE
a1Cyp4jHVyn83uaajdYA1C
qnZOuyfvsHJp2Iv9QF
I4RWKn5IfK4ZNQeacq
A1CzJVA1CXQEnA1Cl72zAquyyE6
6ljR3ZkRow3MA6g1HI
9ExwrNA1CA1C8TS3e7JDNLtM
QtqgUOqSA2CDfqjRFFKXa1C
```
**Expected output:**

```text
a1c0cwqx5a1cqntzcuqdz
a1cyp4jhvyn83uaajdya1c
a1czjva1cxqena1cl72zaquyye6
9exwrna1ca1c8ts3e7jdnltm
```






### Test Case 3

**Input:**
```text
7
kAc1A1cA1cxzdWjwis6cj43d
EA1c9vBRSS3JS1vJcA1CBA1c
OWJ76fdbGYo4kfp
21zGhbHYrFzCcjj
ElPh6CCTDkONsIO
A1cQVPoA1cxBp3bO
A1cA1cIq2pJl7LOuY1VAk
```
**Expected output:**

```text
kac1a1ca1cxzdwjwis6cj43d
ea1c9vbrss3js1vjca1cba1c
a1cqvpoa1cxbp3bo
a1ca1ciq2pjl7louy1vak
```





### Test Case 4

**Input:**
```text
5
test!A1cA1c
A1ctest!A1c
?!A1ca1C?
A1cstringaA1Cac1
r@n0mStRiNgA1c
```
**Expected output:**

```text
test!a1ca1c
a1ctest!a1c
?!a1ca1c?
a1cstringaa1cac1
```




### Test Case 5

**Input:**
```text
10
sSxgG6ylHKoTyq8hEA1cA1cA1cA1cuvE
6kHzdDyYZECwGYPsrIRJ
rodoWSIA1ceyYOrimlvfA1cPx9
lBH082vwCdsAg7XpMu8g
bRG9A80BWq8DWfijB2Ex
BGJFFYDSjgz37U8GDk2W
uieGA1cQA1cy2Br99Ins1
4J9MZHA1CKHm9RSuKLoBHa
A1cj1YuoC0Fk5RKbumhdNyJ
qH3b3J3VXeNJhwlkARygA1cA1c
```
**Expected output:**

```text
ssxgg6ylhkotyq8hea1ca1ca1ca1cuve
rodowsia1ceyyorimlvfa1cpx9
uiega1cqa1cy2br99ins1
qh3b3j3vxenjhwlkaryga1ca1c
```





