## Exercise 33 - Telephone Call Cost Calculation

From standard input, two telephone numbers and the duration of the call in minutes are entered.

Write a program to calculate the cost of the call, knowing that:

- The first 30 minutes cost 3 denars per minute.
- Each additional minute after the first 30 minutes costs 2 denars per minute.
- If both telephone numbers belong to the same operator, a 30% discount is applied to the total cost.

The operators use the following prefixes:

- **Operator 1:** `071`, `072`, `073`
- **Operator 2:** `074`, `075`, `076`

Print the final cost of the call after applying the appropriate discount, if applicable.

## Задача 33 - Пресметување цена на телефонски разговор

Од стандарден влез се читаат два телефонски броја и времетраењето на разговорот во минути.

Да се пресмета цената на повикот доколку знаеме дека:

- Првите 30 минути чинат 3 денари по минута.
- По првите 30 минути, цената на секоја дополнителна минута е 2 денари.
- Доколку двата телефонски броја се на ист оператор, се пресметува 30% попуст на вкупната цена.

Операторите ги користат следните префикси:

- **Оператор 1:** `071`, `072`, `073`
- **Оператор 2:** `074`, `075`, `076`

Да се испечати конечната цена на повикот по пресметувањето на соодветниот попуст, доколку има услов за него.


## Test Cases


### Test Case 1

**Input:**
```text
071234567
072987654
48
```
**Expected output:**

```text
88.2
```



### Test Case 2

**Input:**
```text
073444909
075787989
80
```
**Expected output:**

```text
190
```



### Test Case 3

**Input:**
```text
076388299
074387600
45
```
**Expected output:**

```text
84
```



### Test Case 4

**Input:**
```text
076348987
071566778
20
```
**Expected output:**

```text
60
```




### Test Case 5

**Input:**
```text
075363969
074676455
25
```
**Expected output:**

```text
52.5
```
