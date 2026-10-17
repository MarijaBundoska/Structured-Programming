Сакаме да ги истражиме цените на одредени производи во продавница и да видиме кои од нив се над просечната цена, а кои се под просечната цена. 

За да го постигнеме ова, влезот е 
N, бројот на производите, и потоа 
N производи, претставувајќи ја нивната цена. Вашата задача е да го пресметате просекот на сите производи, а потоа да ги замените оние кои се под просекот со вредност 0 и оние над просекот (или еднакви) со вредност 1.

На излез испечатете ја просечната цена, како и трансформираната низата (види тест примери)



You are tasked with analyzing product prices in a store to identify those above and below the average price. 

The input consists of an integer 
N, representing the number of products, followed by 
N prices (of those products). 

Your goal is to compute the average price of all products and then replace prices below the average with 0 and prices above the average (or equal) with 1.

Print the average price as well as the transformed array (check test cases)


## Test Cases


### Test Case 1

**Input:**
```text
5
100 150 200 250 300
```
**Expected output:**

```text
Average price: 200
0 0 1 1 1
```



### Test Case 2

**Input:**
```text
7
80 120 350 420 480 200 90
```
**Expected output:**

```text
Average price: 248.571
0 0 1 1 1 0 0
```



### Test Case 3

**Input:**
```text
4
300 100 400 50
```
**Expected output:**

```text
Average price: 212.5
1 0 1 0
```




### Test Case 4

**Input:**
```text
6
450 380 520 490 480 510
```
**Expected output:**

```text
Average price: 471.667
0 0 1 1 1 1
```



### Test Case 5

**Input:**
```text
5
150 150 150 150 150
```
**Expected output:**

```text
Average price: 150
1 1 1 1 1
```
