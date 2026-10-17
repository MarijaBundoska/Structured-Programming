## Exercise 30 - Palindromes Containing Only Digits 0, 1, 2, 3, and 4

Read the integers `A` and `B` from the keyboard. Print all numbers from the interval `[A, B]` that are **palindromes** and consist only of the digits 0, 1, 2, 3, and 4.

**Suggested approach:**

- Implement a function `reverseNumber(int number)` that calculates the reverse of a given number `number`.
- Implement a function `isPalindrome(int number)` that returns `1` if the number `number` is a palindrome, and `0` otherwise.
- Implement a function `containsDigits(int number)` that returns `1` if all digits in the number are 0, 1, 2, 3, or 4, and `0` otherwise.
- Use the functions `isPalindrome` and `containsDigits` in the `main` function.

**Additional requirement:** Make the function `containsDigits` recursive.

## Задача 30 - Палиндроми составени само од цифрите 0, 1, 2, 3 и 4

Од тастатура се вчитуваат броевите A и B. На екран да се испечатат сите броеви од интервалот [A,B] кои се **палиндроми** и се составени само од цифрите 0,1,2,3 и 4.

**Предлог за работа:**

- Да се имплементира функција `reverseNumber(int number)` која ќе го пресмета обратниот број на определен број `number`.
- Да се имплементира функција `isPalindrome(int number)` која ќе врати 1 доколку бројот `number` е палиндром, а 0 во спротивно.
- Да се имплементира функција `containsDigits(int number)` која ќе врати 1 доколку сите цифри во бројот се 0, 1, 2, 3 или 4, а 0 во спротивно.
- Да се искористат функциите `isPalindrome` и `containsDigits` во `main` функцијата.

**Дополнително:** Направете ја функцијата `containsDigits` рекурзивна.


## Test Cases


### Test Case 1

**Input:**
```text
10 100
```
**Expected output:**

```text
11
22
33
44
```





### Test Case 2

**Input:**
```text
200 300
```
**Expected output:**

```text	
202
212
222
232
242
```




### Test Case 3

**Input:**
```text
300 1000
```
**Expected output:**

```text
303
313
323
333
343
404
414
424
434
444
```




### Test Case 4

**Input:**
```text
1000000 2000000
```
**Expected output:**

```text
1000001
1001001
1002001
1003001
1004001
1010101
1011101
1012101
1013101
1014101
1020201
1021201
1022201
1023201
1024201
1030301
1031301
1032301
1033301
1034301
1040401
1041401
1042401
1043401
1044401
1100011
1101011
1102011
1103011
1104011
1110111
1111111
1112111
1113111
1114111
1120211
1121211
1122211
1123211
1124211
1130311
1131311
1132311
1133311
1134311
1140411
1141411
1142411
1143411
1144411
1200021
1201021
1202021
1203021
1204021
1210121
1211121
1212121
1213121
1214121
1220221
1221221
1222221
1223221
1224221
1230321
1231321
1232321
1233321
1234321
1240421
1241421
1242421
1243421
1244421
1300031
1301031
1302031
1303031
1304031
1310131
1311131
1312131
1313131
1314131
1320231
1321231
1322231
1323231
1324231
1330331
1331331
1332331
1333331
1334331
1340431
1341431
1342431
1343431
1344431
1400041
1401041
1402041
1403041
1404041
1410141
1411141
1412141
1413141
1414141
1420241
1421241
1422241
1423241
1424241
1430341
1431341
1432341
1433341
1434341
1440441
1441441
1442441
1443441
1444441
```
