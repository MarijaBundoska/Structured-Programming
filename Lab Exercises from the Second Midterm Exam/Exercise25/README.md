## Exercise 25 - Array Transformation Using Pointers

Read an integer `n` from the keyboard, followed by an array of `n` elements. Transform the array so that the maximum and minimum elements swap places, while the difference between the maximum and minimum elements is added to all the remaining elements. The transformation itself should be performed in the function:

`void transform(int *arr, int n)`

## Задача 25 - Трансформација на низа со покажувачи

Од тастатура се чита број n а потоа и низа од n елементи. Потребно е низата да се трансформира така што максималниот и минималниот елемент ќе си ги заменат местата, а на останатите елементи ќе им се додаде разликата меѓу максималниот и минималниот елемент. Самата трансформација треба да се изврши во функцијата:

`void transform(int *arr, int n)`



## Test Cases


### Test Case 1

**Input:**
```text
4
1 2 3 4
```
**Expected output:**

```text
4 5 6 1
```



### Test Case 2

**Input:**
```text
7
7 2 9 3 8 4 3
```
**Expected output:**

```text
14 9 2 10 15 11 10
```




### Test Case 3

**Input:**
```text
5
2 5 1 9 0
```
**Expected output:**

```text
11 14 10 0 9
```
