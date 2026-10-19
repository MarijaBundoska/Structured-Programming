## Exercise 1 - Consecutive Vowel Pairs in Sentences

### Description

Read lines of text from standard input until the character `#` is encountered. Count and print all occurrences of consecutive vowels in the sentences, ignoring the difference between uppercase and lowercase letters.

Print each pair of consecutive vowels on a separate line, using lowercase letters. After printing all pairs, print the total number of occurrences on a new line.

### Example

**Input:**
```text
IO is short for Input Output
medioio medIo song
#
```

**Output:**
```text
io
ou
io
oi
io
io
6
```

## Задача 1 - Последователни парови самогласки во реченици

### Опис

Се читаат низи од знаци од стандарден влез сè додека не се прочита знакот `#`. Треба да се избројат и да се испечатат сите појавувања на соседни самогласки во речениците, при што не се прави разлика помеѓу големи и мали букви.

Секој пронајден пар соседни самогласки се печати во посебен ред, со мали букви. Потоа, во нов ред, се печати вкупниот број на пронајдени парови.

### Пример

**Влез:**
```text
IO is short for Input Output
medioio medIo song
#
```

**Излез:**
```text
io
ou
io
oi
io
io
6
```




## Test Cases


### Test Case 1

**Input:**
```text
Why so serious?
#
```
**Expected output:**

```text
io
ou
2
```




### Test Case 2

**Input:**
```text
Didn't know what time it was and the lights were low
I leaned back on my radio
Some cat was layin' down some rock 'n' roll 'lotta soul, he said
Then the loud sound did seem to fade
Came back like a slow voice on a wave of phase
That weren't no D.J. that was hazy cosmic jive

There's a starman waiting in the sky
He'd like to come and meet us
But he thinks he'd blow our minds
There's a starman waiting in the sky
He's told us not to blow it
'Cause he knows it's all worthwhile
He told me
Let the children lose it
Let the children use it
Let all the children boogie

I had to phone someone so I picked on you
Hey, that's far out so you heard him too
Switch on the TV we may pick him up on Channel Two
Look out your window I can see his light
If we can sparkle he may land tonight
Don't tell your poppa or he'll get us locked up in fright

There's a starman waiting in the sky
He'd like to come and meet us
But he thinks he'd blow our minds
There's a starman waiting in the sky
He's told us not to blow it
'Cause he knows it's all worthwhile
He told me
Let the children lose it
Let the children use it
Let all the children boogie

Starman waiting in the sky
He'd like to come and meet us
But he thinks he'd blow our minds
There's a starman waiting in the sky
He's told us not to blow it
'Cause he knows it's all worthwhile
He told me
Let the children lose it
Let the children use it
Let all the children boogie

La, la, la, la, la, la, la, la
La, la, la, la, la, la, la, la
La, la, la, la, la, la, la, la
La, la, la, la, la, la, la, la
#
```
**Expected output:**

```text
ea
io
ou
ai
ou
ou
ee
oi
ai
ee
ou
ai
au
oo
ie
eo
ou
ou
ou
ea
oo
oo
ou
ou
ee
ou
ai
ee
ou
ai
au
oo
ie
ai
ee
ou
ai
au
oo
ie
40
```




### Test Case 3

**Input:**
```text
Overhead the albatross
Hangs motionless upon the air
And deep beneath the rolling waves
In labyrinths of coral caves
The echo of a distant time
Comes willowing across the sand
And everything is green and submarine

And no one showed us to the land
And no one knows the where's or why's
Something stirs and something tries
Starts to climb toward the light

Strangers passing in the street
By chance two separate glances meet
And I am you and what I see is me
And do I take you by the hand
And lead you through the land
And help me understand
The best I can

And no one called us to the dawn
And no one forces down our eyes
No one speaks and no one tries
No one flies around the sun

Cloudless everyday you fall
Upon my waking eyes
Inviting and inciting me
To rise
And through the window in the wall
Come streaming in on sunlight wings
A million bright ambassadors of morning

And no one sings me lullabies
And no one makes me close my eyes
So I throw the windows wide
And call to you across the sky
#
```
**Expected output:**

```text
ea
io
ai
ee
ea
ee
ie
ee
ee
ou
ee
ou
ea
ou
ou
ou
ea
ie
ie
ou
ou
ou
ou
ea
io
ie
ou
27
```




### Test Case 4

**Input:**
```text
No vowel here
#
```
**Expected output:**

```text
0
```




### Test Case 5

**Input:**
```text
IO is short for Input Output
medioio medIo song
#
```
**Expected output:**

```text
io
ou
io
oi
io
io
6
```
