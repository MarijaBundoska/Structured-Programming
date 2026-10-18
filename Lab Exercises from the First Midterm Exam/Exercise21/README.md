## Exercise 21 - Fruit Salad Cost Calculator

Igor wants to make a fruit salad. To do this, he goes to a market where the prices are as follows:

- 100 grams of apples cost 30 denars.
- 100 grams of raspberries cost 50 denars.
- 100 grams of bananas cost 40 denars.

If he buys 200 grams of a single type of fruit (apples, raspberries, or bananas), he receives a 30% discount on that fruit. If he buys 500 grams or more of a single type of fruit, he receives a 50% discount on that fruit. The discount applies separately to each type of fruit, not to the total weight of all fruits combined.

Additionally, when paying, Igor can choose whether to use 140 denars from his daily student meal allowance. If he chooses to use it, 140 denars are deducted from the total cost; otherwise, the total remains unchanged.

Write a program that calculates how many denars Igor needs to pay.

**Input:** The quantities of apples, raspberries, and bananas in grams, respectively, followed by `1` if Igor wants to use his student card or `0` otherwise.

## Задача 21 - Пресметување на цената на овошна салата

Игор сака да направи овошна салата. За таа цел оди во маркет каде цените се следните:

- Цената на 100 грама јаболка е 30 денари.
- Цената на 100 грама малини е 50 денари.
- Цената на 100 грама банани е 40 денари.

Доколку купи 200 грама од еден вид овошје (јаболка, малини или банани), добива 30% попуст, а доколку купи 500 грама или повеќе од еден вид овошје, добива 50% попуст. Попустот се пресметува посебно за секој вид овошје, а не врз основа на вкупната количина од сите овошја.

Дополнително, при наплата се проверува дали Игор сака да искористи 140 денари од својот дневен студентски оброк. Доколку одговорот е да, 140 денари се одземаат од целокупната сума, во спротивно сумата останува непроменета.

Да се напише програма која ќе пресмета колку денари ќе треба да доплати Игор.

**Влез:** Се внесува количината во грами за секој вид овошје, според редоследот јаболка, малини и банани, а потоа `1` или `0`, во зависност од тоа дали Игор сака да плати 140 денари со својата студентска картичка.



## Test Cases


### Test Case 1

**Input:**
```text
100
200
600
1
```
**Expected output:**

```text
80
```




### Test Case 2

**Input:**
```text
700
200
300
1
```
**Expected output:**

```text
155
```




### Test Case 3

**Input:**
```text
200
500
300
0
```
**Expected output:**

```text
287
```





### Test Case 4

**Input:**
```text
200
200
200
0
```
**Expected output:**

```text
168
```





### Test Case 5

**Input:**
```text
700
500
600
1
```
**Expected output:**

```text
210
```


