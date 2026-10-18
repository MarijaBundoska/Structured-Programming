## Exercise 54 - Multiplication Table

### Problem Description

For a given number `N` entered from standard input, print the multiplication table for that number.

**Note:** To ensure uniform formatting of the output, the `iomanip` library should be included and the `setw(5)` function should be used when printing values, so that each value occupies a fixed width of five characters.

### Input

An integer `N`.

### Output

Print the multiplication table for the number `N`, using `setw(5)` to ensure uniform formatting.

---

## Задача 54 - Таблица за множење

### Опис на проблемот

За внесен број `N` на стандарден влез, да се испечати таблица за множење со тој број.

**Напомена:** За форматирањето на стандардниот излез да биде униформно, треба да се вклучи библиотеката `iomanip` и да се искористи функцијата `setw(5)` при печатењето на вредностите, со цел секоја вредност да зафаќа фиксен број од пет карактери.

### Влез

Еден цел број `N`.

### Излез

Да се испечати таблицата за множење со бројот `N`, со користење на `setw(5)` за униформно форматирање.





## Test Cases


### Test Case 1

**Input:**
```text
5
```
**Expected output:**

```text
      1    2    3    4    5
    1    1    2    3    4    5
    2    2    4    6    8   10
    3    3    6    9   12   15
    4    4    8   12   16   20
    5    5   10   15   20   25
```


### Test Case 2

**Input:**
```text
10
```
**Expected output:**

```text
	
         1    2    3    4    5    6    7    8    9   10
    1    1    2    3    4    5    6    7    8    9   10
    2    2    4    6    8   10   12   14   16   18   20
    3    3    6    9   12   15   18   21   24   27   30
    4    4    8   12   16   20   24   28   32   36   40
    5    5   10   15   20   25   30   35   40   45   50
    6    6   12   18   24   30   36   42   48   54   60
    7    7   14   21   28   35   42   49   56   63   70
    8    8   16   24   32   40   48   56   64   72   80
    9    9   18   27   36   45   54   63   72   81   90
   10   10   20   30   40   50   60   70   80   90  100
```
