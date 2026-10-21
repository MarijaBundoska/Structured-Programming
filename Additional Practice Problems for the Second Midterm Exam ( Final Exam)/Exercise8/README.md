## Exercise 8 - Finding a Word in a Word Search Matrix

A word search puzzle is a matrix containing words written horizontally and vertically, from left to right and from right to left. Each element of the matrix represents a letter of the English alphabet.

For example, the hidden words are HAIR and OLE (crossed out), and FISH and TOE (underlined).





<img width="111" height="146" alt="image" src="https://github.com/user-attachments/assets/a7ddea2e-d419-48ec-883b-81642450393b" />





Read a square matrix of order **n** (**3 ≤ n ≤ 50**) consisting of characters from standard input. First, read the number **n**, representing the number of rows and columns of the matrix, followed by the elements of the matrix.

After reading the matrix, read a word consisting of at most **10 letters**.

Determine whether the word appears in the word search puzzle, either horizontally or vertically, from left to right or from right to left. Print the coordinates **(row, column)** of the first and last letters of the word.

If the word appears multiple times, print the first occurrence, considering the matrix elements in row-major order (from left to right, row by row).

If the word is not found, print the message specified by the problem statement.

---

## Задача 8 - Пронаоѓање збор во четиринасочник

Четиринасочник претставува матрица во која се испишани зборови хоризонтално и вертикално, одлево-надесно и оддесно-налево. Притоа, секој елемент од матрицата претставува буква од англиската азбука.

На пример, скриени зборови се HAIR и OLE (прецртани), како и FISH и TOE (подвлечени).



<img width="111" height="146" alt="image" src="https://github.com/user-attachments/assets/d582df27-d3d4-4bb4-88cf-2a03ff23bec5" />




Од стандарден влез се чита квадратна матрица од ред **n** (**3 ≤ n ≤ 50**), составена од знаци. Прво се чита бројот **n** — бројот на редици и колони на матрицата, а потоа и самите елементи на матрицата.

По читањето на матрицата, од стандарден влез се внесува збор составен од најмногу **10 букви**.

Ваша задача е да определите дали зборот се наоѓа во четиринасочникот (хоризонтално или вертикално, одлево-надесно или оддесно-налево). Потребно е да се испечатат координатите **(ред, колона)** на првата и последната буква од зборот.

Доколку зборот повеќепати се наоѓа во четиринасочникот, треба да се испечати првото појавување, гледано елемент по елемент, како што се чита матрицата.

Доколку зборот не се пронајде, се печати пораката наведена во условот на задачата.




## Test Cases


### Test Case 1

**Input:**
```text
4
T H K I E E N K M A E J M I E P
KNEE
```
**Expected output:**

```text
0, 2 -> 3, 2
```





### Test Case 2

**Input:**
```text
3
a b c d e f g h i
def
```
**Expected output:**

```text
1, 0 -> 1, 2
```




### Test Case 3

**Input:**
```text
3
a b c d e f g h i
adg
```
**Expected output:**

```text
0, 0 -> 2, 0
```





### Test Case 4

**Input:**
```text
3
a b c d e f g h i
heb
```
**Expected output:**

```text
2, 1 -> 0, 1
```





### Test Case 5

**Input:**
```text
6
T H A I R E E E N K N E M A M J O L M I S P S T L R G M L O R U T Y O E
BLEF
```
**Expected output:**

```text
Not Found
```




### Test Case 6

**Input:**
```text
6
T H A I R E E E N K N E M A M J O L M I S P S T L R G M L O R U T Y O E
ТОЕ
```
**Expected output:**

```text
Not Found
```




### Test Case 7

**Input:**
```text
6
T H N I R E E E A K N E M A M J O L M T S P S T L R G M L O R U T Y O E
HEAT
```
**Expected output:**

```text
0, 1 -> 3, 1
```




### Test Case 8

**Input:**
```text
6
T H N I R E E E A K N E M A M J O L M T S P S T L R G M L O R U T Y O E
HEATS
```
**Expected output:**

```text
Not Found
```





### Test Case 9

**Input:**
```text
6
T H N I R E E E A K N E M A M A M A M T A P S T L R M M L O R U A Y O E
MAMA
```
**Expected output:**

```text
2, 0 -> 2, 3
```
