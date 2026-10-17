## Exercise 41 - Elements with at Least Two Greater Elements After Them

Read an integer **n** from standard input, representing the number of elements in the array, followed by the array elements.

Print every element that has at least two greater elements appearing after it in the array.

**Example:**

Input:
```text
n = 5
array = [3 10 16 20 1]
```


Explanation: The element `3` has three greater elements after it, and `10` has two greater elements after it. However, `16` has only one greater element after it, so it is not printed.

## Задача 41 - Елементи со најмалку два поголеми елементи по нив

Од стандарден влез се вчитува цел број **n**, кој го претставува бројот на елементи во низата, а потоа се внесуваат елементите на низата.

Да се испечати секој елемент кој има најмалку два поголеми елементи по него во низата.

**Пример:**

Влез:
```text
n = 5
array = [3 10 16 20 1]
```

Објаснување: Елементот `3` има три поголеми елементи по него, а елементот `10` има два поголеми елементи по него. Меѓутоа, `16` има само еден поголем елемент по него, па затоа не се печати.


## Test Cases


### Test Case 1

**Input:**
```text
8
7
12
9
15
19
32
56
70
```
**Expected output:**

```text
7 12 9 15 19 32
```




### Test Case 2

**Input:**
```text	
7
59
32
97
63
19
8
2
```
**Expected output:**

```text
59 32
```





### Test Case 3

**Input:**
```text
7
88
12
9
15
3
12
1
```
**Expected output:**

```text
9
```



### Test Case 4

**Input:**
```text
5
102
92
82
50
10
```
**Expected output:**

```text
```
