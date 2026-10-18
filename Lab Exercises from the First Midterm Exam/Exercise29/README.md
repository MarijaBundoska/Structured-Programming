## Exercise 29 - Calculating VAT and VAT Refund for Receipts

Write a program that reads information about three receipts from standard input. Each receipt consists of a pair of values: the receipt amount and the tax type.

The tax type is represented by a character (`A`, `B`, `C`, `D`, or any other letter) and determines the VAT rate:

- `A` — 18%
- `B` — 10%
- `C` — 5%
- `D` — 0%
- Any other character — 15%

If a receipt amount exceeds 30,000 denars, the VAT is calculated as if the amount were 30,000 denars. Receipts with negative amounts are invalid and must be rejected.

Print the total VAT for all valid receipts on the first line. On the second line, print the total VAT refund, calculated as 15% of the total VAT. The total VAT refund cannot exceed 2,100 denars.

### Example Input

10000 A
7500 B
18000 F

## Задача 29 - Пресметување ДДВ и поврат на ДДВ за фискални сметки

Да се напише код којшто од стандарден влез ќе чита информации за фискални сметки. На стандарден влез се читаат 3 фискални сметки, кои се составени од парови на вредности (износ, тип_на_данок).

Пример:

10000 A  
7500 B  
18000 F

Првата вредност во парот го означува износот на фискалната сметка, додека втората вредност е карактер (`A`, `B`, `C`, `D`, `F`...`Z`) што означува каков тип на данок на додадена вредност се пресметува за тој артикал:

- `A` означува 18%.
- `B` означува 10%.
- `C` означува 5%.
- `D` означува 0%.
- Доколку се внесе различен карактер, се пресметува данок од 15%.

Доколку сметката надминува 30.000 денари, данокот се пресметува како за сметка од 30.000 денари.

Сметките што имаат негативна сума не се валидни и се отфрлаат.

Вкупниот поврат на ДДВ не може да надмине 2.100 денари.

Во првата линија да се испечати вкупниот ДДВ на фискалните сметки што се вчитани од стандарден влез.

Во наредната линија да се испечати вкупниот поврат на ДДВ за фискалните сметки што се вчитани од стандарден влез. Повратот на ДДВ се пресметува како 15% од вкупниот ДДВ на фискалните сметки.


## Test Cases


### Test Case 1

**Input:**
```text
10000 A
7500 B
18000 F
```
**Expected output:**

```text
Total VAT of the receipts is equal to: 5250den.
Total refund VAT of the receipts is equal to: 787.5den.
```



### Test Case 2

**Input:**
```text
35000 A
44000 A
54000 F
```
**Expected output:**

```text
Total VAT of the receipts is equal to: 15300den.
Total refund VAT of the receipts is equal to: 2100den.
```




### Test Case 3

**Input:**
```text
-10000 A
3000 B
-23123 C
```
**Expected output:**

```text
Total VAT of the receipts is equal to: 300den.
Total refund VAT of the receipts is equal to: 45den.
```




### Test Case 4

**Input:**
```text
29999 B
24000 A
-178 C
```
**Expected output:**

```text
Total VAT of the receipts is equal to: 7319.9den.
Total refund VAT of the receipts is equal to: 1097.98den.
```




### Test Case 5

**Input:**
```text
0 A
27800 D
-3500 C
```
**Expected output:**

```text
Total VAT of the receipts is equal to: 0den.
Total refund VAT of the receipts is equal to: 0den.
```



### Test Case 6

**Input:**
```text
29000 A
37000 F
29950 B
```
**Expected output:**

```text
Total VAT of the receipts is equal to: 12715den.
Total refund VAT of the receipts is equal to: 1907.25den.
```



### Test Case 7

**Input:**
```text
30000 A
29999 F
30500 D
```
**Expected output:**

```text
Total VAT of the receipts is equal to: 9899.85den.
Total refund VAT of the receipts is equal to: 1484.98den.
```




### Test Case 8

**Input:**
```text
11450 B
12300 C
14400 D
```
**Expected output:**

```text
Total VAT of the receipts is equal to: 1760den.
Total refund VAT of the receipts is equal to: 264den.
```
