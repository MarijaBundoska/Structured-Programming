# Exercise 9 - Recursive Function for a Continued Fraction


Implement a **recursive** function that, for an array of integers $[a_0, a_1, ..., a_{n-1}]$, calculates the value of the continued fraction defined as:

<img width="273" height="87" alt="image" src="https://github.com/user-attachments/assets/777cd0ec-4750-4dd3-8552-03109dbac5df" />


Write a program in which an integer `N` is read, after which the elements of an array of `N` integers are read (not more than 100).

Then, the recursive function is called and the result is printed on a new line.

---

# Задача 9 - Рекурзивна функција за непрекината дропка

Да се имплементира **рекурзивна** функција која за низа од цели броеви $[a_0, a_1, ..., a_{n-1}]$ ќе ја пресмета вредноста на непрекинатата дропка дефинирана како:

<img width="273" height="87" alt="image" src="https://github.com/user-attachments/assets/dfe52aef-d781-4626-afb1-6c6a92502887" />


Да се напише програма во која се чита цел број `N`, по што се читаат елементите на низа од `N` цели броеви (не повеќе од 100).

Потоа се повикува рекурзивната функција и се печати резултатот во нов ред.


## Test Cases


### Test Case 1

**Input:**
```text
50 50 8 43 32 29 4 23 26 17 16 30 16 20 42 41 24 36 27 38 43 22 10 27 14 48 21 20 40 36 13 10 28 33 3 8 3 6 49 23 23 12 31 37 33 12 47 32 42 16 1
```
**Expected output:**

```text
50.1246
```



### Test Case 2

**Input:**
```text
2 1 2
```
**Expected output:**

```text
1.5
```



### Test Case 3

**Input:**
```text
75 2 1 10 43 35 15 30 4 34 19 16 8 47 45 39 46 29 32 17 46 10 35 17 19 41 26 9 33 1 35 48 3 8 12 11 25 24 47 36 15 26 27 16 29 11 23 30 43 26 29 18 38 44 31 11 11 36 1 48 44 47 48 47 14 24 12 4 2 6 36 11 36 46 3 41
```
**Expected output:**

```text
2.90928
```




### Test Case 4

**Input:**
```text
7 3 7 15 1 292 1 1
```
**Expected output:**

```text
3.14159
```



### Test Case 5

**Input:**
```text
3 0 3 2
```
**Expected output:**

```text
0.285714
```



### Test Case 6

**Input:**
```text
1 2
```
**Expected output:**

```text
2
```
