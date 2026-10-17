## Exercise 27 - Finding the Next Number Divisible by K

Define the following functions:

- `divisibleByK(int number, int k)` - returns `1` if the number `k` is a divisor of `number`, and `0` otherwise.
- `nextDivisibleByK(int number, int k)` - returns the first number greater than `number` that is divisible by `k`. A call to `divisibleByK` must be used in this function.

The `main` function must not be changed!

**Example explanation:** In each line, the number on the left of the arrow is each number from the interval `[10, 20]`, and the number on the right is the next number greater than the number on the left that is divisible by `k`.

**Bonus:** Implement the `nextDivisibleByK` function recursively.

## Задача 27 - Наоѓање на следниот број делив со K

Да се дефинираат функциите:

- `divisibleByK(int number, int k)` - која ќе враќа 1 доколку бројот k е делител на бројот number, а 0 во спротивно.
- `nextDivisibleByK(int number, int k)` - која ќе го врати првиот број поголем од number кој е делив со k. Да се употреби повик до `divisibleByK` во оваа функција.

Да не се менува main функцијата!

**Објаснување на примерот:** Во секоја линија лево од стрелката се печати секој број од интервалот од [10,20], а десно од стрелката се печати наредниот број поголем од бројот лево којшто е делив со бројот k.

**Бонус:** Направете ја функцијата `nextDivisibleByK` рекурзивна.




## Test Cases


### Test Case 1

**Input:**
```text
10 20 7
```
**Expected output:**

```text
10 -> 14
11 -> 14
12 -> 14
13 -> 14
14 -> 21
15 -> 21
16 -> 21
17 -> 21
18 -> 21
19 -> 21
20 -> 21
```




### Test Case 2

**Input:**
```text
10 30 8
```
**Expected output:**

```text
10 -> 16
11 -> 16
12 -> 16
13 -> 16
14 -> 16
15 -> 16
16 -> 24
17 -> 24
18 -> 24
19 -> 24
20 -> 24
21 -> 24
22 -> 24
23 -> 24
24 -> 32
25 -> 32
26 -> 32
27 -> 32
28 -> 32
29 -> 32
30 -> 32
```





### Test Case 3

**Input:**
```text
10 30 11
```
**Expected output:**

```text
10 -> 11
11 -> 22
12 -> 22
13 -> 22
14 -> 22
15 -> 22
16 -> 22
17 -> 22
18 -> 22
19 -> 22
20 -> 22
21 -> 22
22 -> 33
23 -> 33
24 -> 33
25 -> 33
26 -> 33
27 -> 33
28 -> 33
29 -> 33
30 -> 33
```





### Test Case 4

**Input:**
```text
10 30 12
```
**Expected output:**

```text
10 -> 12
11 -> 12
12 -> 24
13 -> 24
14 -> 24
15 -> 24
16 -> 24
17 -> 24
18 -> 24
19 -> 24
20 -> 24
21 -> 24
22 -> 24
23 -> 24
24 -> 36
25 -> 36
26 -> 36
27 -> 36
28 -> 36
29 -> 36
30 -> 36
```
