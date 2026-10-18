## Exercise 7 - Extracting Digits from a Three-Digit Number

Write a program that reads a three-digit number. If the entered number is a three-digit number, determine its units, tens, and hundreds digits. Also, check whether the units digit is even or odd. If it is even, the variable `ediniciParenBroj` should have the value `true`; otherwise, it should have the value `false`.

If the entered number is not a three-digit number, print an appropriate message indicating that the number is not a three-digit number.

**Note:** The number `0` is considered even.

**Explanation:** For the number `367`, the units digit is `7`, the tens digit is `6`, and the hundreds digit is `3`. The value of the variable `ediniciParenBroj` should be `false`.

## Задача 7 - Издвојување цифри од трицифрен број

Да се напише програма со која се внесува трицифрен број. Ако внесениот број е трицифрен, треба да се одреди цифрата на единици, десетки и стотки. Исто така, треба да се провери дали цифрата на единици е парен или непарен број. Доколку е парен број, променливата `ediniciParenBroj` треба да има вредност `true`, во спротивно треба да има вредност `false`.

Ако внесениот број не е трицифрен, треба да се испечати соодветна порака дека не станува збор за трицифрен број.

**Напомена:** Бројот `0` се смета за парен број.

**Појаснување:** За бројот `367`, цифрата на единици е `7`, на десетки е `6`, а на стотки е `3`. Вредноста на променливата `ediniciParenBroj` треба да биде `false`.


## Test Cases


### Test Case 1

**Input:**
```text
100
```
**Expected output:**

```text
Vrednosta na stotki, desetki i edinici e: 1,0,0
Vredonsta na promenlivata ediniciParenBroj e 1
```



### Test Case 2

**Input:**
```text
367
```
**Expected output:**

```text
Vrednosta na stotki, desetki i edinici e: 3,6,7
Vredonsta na promenlivata ediniciParenBroj e 0
```




### Test Case 3

**Input:**
```text
572
```
**Expected output:**

```text
Vrednosta na stotki, desetki i edinici e: 5,7,2
Vredonsta na promenlivata ediniciParenBroj e 1
```
