## Exercise 50 - Shopping Discounts Calculator

### Problem Description

Write a program that helps a store calculate discounts on selected items.

Discounts are represented by letters according to the following rules:

- `A` – 20% discount.
- `B` – 50% discount.
- `C` – 70% discount.
- `D` – 0% discount (no discount).

The program first reads the number of items the customer wants to purchase. Then, for each item, its price and discount type are entered as a pair.

Calculate and print the total amount the customer must pay after applying the appropriate discount to each item. On a new line, print the total discount in denars, representing the amount of money the customer has saved.

### Input

- An integer representing the number of items.
- For each item, its price and discount type (`A`, `B`, `C`, or `D`).

### Output

- The total amount to be paid after applying all discounts.
- The total amount saved through discounts, expressed in denars.

---

## Задача 50 - Пресметување попусти при купување

### Опис на проблемот

Да се напише програма што ќе ѝ помогне на една продавница во пресметувањето на попустите на одредени артикли.

Попустите се означуваат со различни букви, според следниве правила:

- `A` – попуст од 20%.
- `B` – попуст од 50%.
- `C` – попуст од 70%.
- `D` – попуст од 0% (нема попуст).

Од стандарден влез најпрво се чита бројот на артикли што купувачот сака да ги купи. Потоа, за секој артикл, како пар се внесуваат неговата цена и видот на попустот.

Треба да се пресмета и испечати вкупната сума што купувачот треба да ја плати по примената на соодветните попусти за секој артикл. Во нов ред треба да се испечати и вкупниот износ на попустот во денари, односно колку пари заштедил купувачот.

### Влез

- Цел број што го означува бројот на артикли.
- За секој артикл, неговата цена и видот на попустот (`A`, `B`, `C` или `D`).

### Излез

- Вкупната сума што треба да се плати по примената на сите попусти.
- Вкупниот износ на заштедени пари од попустите, изразен во денари.



## Test Cases


### Test Case 1

**Input:**
```text
4
180 B
340 C
250 D
540 A
```
**Expected output:**

```text
874
436
```



### Test Case 2

**Input:**
```text
5
290 D
350 A
270 B
340 C
620 B
```
**Expected output:**

```text
1117
753
```



### Test Case 3

**Input:**
```text
3
120 C
380 A
590 B
```
**Expected output:**

```text
635
455
```



### Test Case 4

**Input:**
```text
6
920 C
830 C
740 B
650 D
370 B
160 A
```
**Expected output:**

```text
1858
1812
```



### Test Case 5

**Input:**
```text
3
670 C
250 D
390 A
```
**Expected output:**

```text
763
547
```
