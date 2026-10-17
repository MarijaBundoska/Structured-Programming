## Exercise 28 - Interesting Numbers and Recursive Array Printing

Read an integer `N` from standard input, followed by an array of `N` integers. Define the function `int isInteresting(int number)`, which returns `1` if the number is **interesting**, meaning that its digits alternate between even and odd digits. Otherwise, it returns `0`.

Define the function `void printArray(int numbers[], int n)`, which prints all the **interesting** numbers in the array.

**Examples of interesting numbers:** `1634`, `678`, `141858`

**To earn all the points for the exercise, the `printArray` function must be recursive.**

## Задача 28 - Интересни броеви и рекурзивно печатење на низа

Од стандарден влез се чита број N, а потоа низа на N цели броеви. Да се дефинира функција **`int isInteresting(int number)`** која што ќе врати 1 доколку е **интересен** број, односно доколку цифрите на бројот се парна-непарна цифра, наизменично. Во спротивно враќа 0. Да се дефинира функција **`void printArray(int numbers[], int n)`** која што ќе ги испринта сите броеви во низата кои што се **интересни**.

**Пример интересни броеви:** `1634`, `678`, `141858`

**За се освојат сите поени од вежбата, потребно е функцијата `printArray` да биде рекурзивна.**


## Test Cases


### Test Case 1

**Input:**
```text
5
123
6789
111
5325
325
```
**Expected output:**

```text
325
6789
123
```



### Test Case 2

**Input:**
```text
3
5298
123456789
25861
```
**Expected output:**

```text
123456789
5298
```




### Test Case 3

**Input:**
```text
4
8251
163892
34
9623
```
**Expected output:**

```text
34
163892
```




### Test Case 4

**Input:**
```text
6
3141
745812
876
24
23
1698
```
**Expected output:**

```text
1698
23
876
745812
```
