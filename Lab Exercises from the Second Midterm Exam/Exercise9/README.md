# Exercise 9 - Football Field and Ball Movement

## Problem Description

The size of a football field `M x N` is entered from standard input. Then, the location of the player on the field (`x_igrac`, `y_igrac`) is entered, followed by the location of the ball (`x_topka`, `y_topka`) and the location of the goal (`x1_gol`, `y1_gol`) (`x2_gol`, `y2_gol`).

After these values are entered, the football field should be printed. On the football field, the player is represented by the character `'i'`, the goal is represented by the character `']'`, the ball is represented by `'o'`, and everything else is represented by `'-'`.

Your task is first to print the football field according to the entered values. Then, two values are read from standard input: the displacement of the ball along the x-coordinate and the displacement of the ball along the y-coordinate.

After moving the ball:
- If it is in the goal, print `GOAL`.
- If it is outside the football field, print `OUT`.
- If it is inside the field but not in the goal, print the ball's new position and the football field with the ball at its new position.

**Note:** Use a matrix to represent the football field.

---

# Задача 9 - Фудбалски терен и движење на топката

## Опис на задачата

Од стандарден влез се внесува големината на еден фудбалски терен MxN. Потоа се внесува локацијата на играчот на тој терен (x_igrac, y_igrac), па се внесува локацијата на топката (x_topka, y_topka) и локацијата на голот (x1_gol, y1_gol) (x2_gol, y2_gol). Од кога ќе се внесат овие вредности треба да се испечати фудбалскиот терен, во фудбалскиот терен играчот е означен со карактер 'i', голот е означен со карактер ']' и топката е означена со 'o', се останато се означува со '-'. Ваша задача е најпрво да го испечатите на екран фудбалскиот терен според внесените вредности. Потоа од стандарден влез се внесуваат две вредности за поместувањето на топката за x координатата и поместувањето на топката за у координатата. По поместувањето на топката доколку се наоѓа во голот се печати GOAL, доколку се наоѓа надвор од фудбалскиот терен се печати OUT и доколку се наоѓа во теренот, но не е гол се печати новата позиција на топката и фудбалскиот терен со новата позиција на топката.

**Напомена:** За репрезентација на фудбалскиот терен користете матрица.



## Test Cases


### Test Case 1

**Input:**
```text
5 6
2 2
2 3
2 5 3 5
0 2
```
**Expected output:**

```text
- - - - - -
- - - - - -
- - i o - ]
- - - - - ]
- - - - - -
GOAL!
```




### Test Case 2

**Input:**
```text
6 10
3 3
4 4
2 9 3 9
3 -1
```
**Expected output:**

```text
- - - - - - - - - -
- - - - - - - - - -
- - - - - - - - - ]
- - - i - - - - - ]
- - - - o - - - - -
- - - - - - - - - -
OUT!
```





### Test Case 3

**Input:**
```text
5 5
0 1
1 2
1 4 2 4
3 2
```
**Expected output:**

```text
- i - - -
- - o - ]
- - - - ]
- - - - -
- - - - -
Novata pozicija na topkata e (4, 4)
- i - - -
- - - - ]
- - - - ]
- - - - -
- - - - o
```





### Test Case 4

**Input:**
```text
4 6
1 3
2 4
1 5 2 5
0 1
```
**Expected output:**

```text
- - - - - -
- - - i - ]
- - - - o ]
- - - - - -
GOAL!
```
