## Exercise 34 - Cinema Ticket and Snack Cost Calculation

Marta and her three friends want to go to the cinema and buy tickets.

The initial price of a ticket for all movies is 200 denars. However:
- Comedy movies cost an additional 20 denars per ticket.
- Action movies cost an additional 40 denars per ticket.
- Romance movies cost an additional 30 denars per ticket.

They also want to buy drinks and popcorn. The menu is as follows:

**Drinks:**
- Water: 80 denars
- Fanta, Coca-Cola, Sprite: 100 denars
- IceTea: 120 denars

**Popcorn:**
- Size S: 100 denars
- Size M: 150 denars
- Size L: 200 denars

Write a program to calculate the total cost Marta and her three friends must pay.

Additionally, if they go to the cinema on Wednesday and pay with their VISA card, they receive four tickets for the price of two tickets. In other words, they get a 50% discount on the tickets, regardless of the movie genre.

### Input Description

The input contains:
- Movie genre: `action`, `comedy`, or `romance`
- Popcorn size: `S`, `M`, or `L`
- Number of popcorn packages
- Drink type: `Water`, `Fanta`, `CocaCola`, `Sprite`, or `IceTea`
- Number of drinks
- Day of the week
- VISA card availability: `1` (YES) or `0` (NO)

### Example Input

```text
action
L
2
Fanta
3
Wednesday
1
```

## Задача 34 - Пресметување цена за кино, билети и грицки

Марта и нејзините 3 другарки сакаат да одат на кино и купуваат билети.

Иницијалната цена на еден билет за сите филмови е 200 денари, но:
- Доколку филмот е комедија, се доплаќаат 20 денари по билет.
- Доколку филмот е акција, се доплаќаат 40 денари по билет.
- Доколку филмот е романса, се доплаќаат 30 денари по билет.

Освен билети, тие сакаат да купат и пијалоци и пуканки.

**Пијалоци:**
- Вода: 80 денари
- Fanta, Coca-Cola, Sprite: 100 денари
- IceTea: 120 денари

**Пуканки:**
- Големина S: 100 денари
- Големина M: 150 денари
- Големина L: 200 денари

Да се напише програма која ќе ја пресмета вкупната цена што Марта и нејзините другарки треба да ја платат.

Дополнително, доколку одат во кино во среда и платат со VISA картичка, добиваат 4 билети по цена на 2 билети, односно 50% попуст на билетите, без разлика на видот на филмот.

### Опис на влезот

Се внесуваат:
- Вид на филм: `action`, `comedy` или `romance`
- Големина на пуканки: `S`, `M` или `L`
- Број на пакувања пуканки
- Вид на пијалок: `Water`, `Fanta`, `CocaCola`, `Sprite` или `IceTea`
- Број на пијалоци
- Ден во кој ќе гледаат филм
- Дали имаат VISA картичка: `1` (ДА) или `0` (НЕ)

### Пример за влез

```text
action
L
2
Fanta
3
Wednesday
1
```


## Test Cases


### Test Case 1

**Input:**
```text
action
S
4
Fanta
3
Wednesday
1
```
**Expected output:**

```text
1180
```


### Test Case 2

**Input:**
```text	
comedy
L
2
Sprite
2
Friday
1
```
**Expected output:**

```text
1480
```



### Test Case 3

**Input:**
```text
romance
M
3
Water
4
Wednesday
0
```
**Expected output:**

```text
1690
```




### Test Case 4

**Input:**
```text
comedy
M
2
IceTea
3
Monday
0
```
**Expected output:**

```text
1540
```




### Test Case 5

**Input:**
```text
action
L
4
CocaCola
4
Wednesday
1
```
**Expected output:**

```text
1680
```







