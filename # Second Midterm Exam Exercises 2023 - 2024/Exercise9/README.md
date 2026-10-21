## Exercise 9 - Finding the First Punctuation Mark Recursively

### Problem Description

Given a character array with a maximum length of `100` characters, entered from the keyboard, find and return the first punctuation mark using a recursive function.

Print the found punctuation mark to the screen. If no punctuation mark is found, the function should return the character `'\0'`.

## Задача 9 - Пронаоѓање на првиот интерпункциски знак со рекурзија

### Опис на задачата

За дадена низа од знаци со максимална големина од `100` знаци, внесена од тастатура, да се пронајде и врати првиот интерпункциски знак со помош на рекурзивна функција.

Пронајдениот интерпункциски знак да се испечати на екран. Доколку нема интерпункциски знак, функцијата треба да го врати знакот `'\0'`.





## Test Cases


### Test Case 1

**Input:**
```text
daNh5 }cFVfj.aQsC06eTHr;y0;!YZ~S;%cF{
```
**Expected output:**

```text
}
```




### Test Case 2

**Input:**
```text
henOp'XP%Nc`;Y>)uwF-
```
**Expected output:**

```text
'
```





### Test Case 3

**Input:**
```text\
MJ5O*V@V2NN)e*8-A
```
**Expected output:**

```text
*
```




### Test Case 4

**Input:**
```text
pui fbNRe?;jD^Rv?crlR9NLt(lHC~vOP%!u`F-
```
**Expected output:**

```text
?
```




### Test Case 5

**Input:**
```text
^>*8+!U"m:3kZaFvJ}qDqqICJ:tHbLh')a0F~ml5nx9kGz3
```
**Expected output:**

```text
^
```




### Test Case 6

**Input:**
```text
5CF0(qOBFB6x>b
```
**Expected output:**

```text
(
```





### Test Case 7

**Input:**
```text
d2G 2%Ui@Q59hk+3%pVBv`3Klk!o%os6l(
```
**Expected output:**

```text
%
```





### Test Case 8

**Input:**
```text
NKdXPItqi40xslG2c0MwfbFoGdNuQXMJE7
```
**Expected output:**

```text
Nema
```
