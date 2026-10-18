## Exercise 32 - Progressive Income Tax Calculation

In country X, a progressive personal income tax system has been introduced. Write a program to help the employees of the Public Revenue Office calculate the personal income tax for a citizen.

From standard input, first read five numbers: `percent0`, `threshold1`, `percent1`, `threshold2`, and `percent2`. Then, read the citizen's income.

Print the amount of personal income tax calculated using the progressive tax rates.

### Example Explanation

- `percent0 = 10%`
- `threshold1 = 1000`
- `percent1 = 20%`
- `threshold2 = 2500`
- `percent2 = 30%`
- `income = 3800`

The first 1000 units of income are taxed at 10%. The next 1500 units are taxed at 20%, and the remaining 1300 units are taxed at 30%.

The total tax is calculated as follows:

`1000 * 0.1 + 1500 * 0.2 + 1300 * 0.3 = 790`

The result is `790`.

<img width="848" height="72" alt="image" src="https://github.com/user-attachments/assets/2bb258b0-0a53-45cf-a333-d7d4e1d1b1da" />


## Задача 32 - Пресметување прогресивен данок на личен доход

Во државата X е воведен прогресивен данок на личен доход. Потребно е да напишете програма која ќе им помогне на вработените во УЈП на државата X да го пресметуваат данокот на определен граѓанин.

Од стандарден влез најпрво се читаат 5 броеви: `procent0`, `prag1`, `procent1`, `prag2`, `procent2`, а потоа се чита и износот на примањата на граѓанинот.

На екран треба да се испечати износот на данокот на личниот доход пресметан со прогресивна стапка.

### Објаснување за примерот

- `procent0 = 10%`
- `prag1 = 1000`
- `procent1 = 20%`
- `prag2 = 2500`
- `procent2 = 30%`
- `iznos na primanja = 3800`

Првите 1000 се оданочуваат со стапка од 10%, наредните 1500 се оданочуваат со 20%, а останатите 1300 се оданочуваат со 30%.

Резултат:

`1000 * 0.1 + 1500 * 0.2 + 1300 * 0.3 = 790`

<img width="848" height="72" alt="image" src="https://github.com/user-attachments/assets/22296fa3-2fc5-4725-b7e8-57d33e8518a7" />



## Test Cases


### Test Case 1

**Input:**
```text
10 1000 20 2500 30
3800
```
**Expected output:**

```text
790
```



### Test Case 2

**Input:**
```text
10 1000 20 2000 30
888
```
**Expected output:**

```text
88.8
```




### Test Case 3

**Input:**
```text
10 1000 20 2000 30
1802
```
**Expected output:**

```text
260.4
```




### Test Case 4

**Input:**
```text
10 1000 15 3000 20
4505
```
**Expected output:**

```text
701
```




### Test Case 5

**Input:**
```text
10 1000 15 3000 20
2903
```
**Expected output:**

```text
385.45
```




### Test Case 6

**Input:**
```text
15 1000 15 3000 20
688
```
**Expected output:**

```text
103.2
```






