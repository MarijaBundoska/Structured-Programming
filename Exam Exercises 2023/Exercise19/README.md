# Exercise 19 - Recursive String Transformation

## Task

From standard input, `N` strings (character arrays) are read, each no longer than 80 characters.

At the beginning of the program, two integers are read:

- `N` - the number of strings that will be read
- `X` - the shift

Each of the input strings should be transformed so that every lowercase and uppercase letter (`a-z`, `A-Z`) is replaced with the same letter shifted `X` positions forward in the alphabet (`a-z`).

If the range of letters in the alphabet is exceeded, the transformation continues **cyclically from the beginning of the alphabet**.

The transformed string should be printed to standard output.

**The transformation must be implemented using a separate recursive function.**

### Example

```text
Welcome
```
Transformed with a shift of `5`:

```text
Bjqhtrj
```


# Вежба 19 - Рекурзивна трансформација на стринг

## Опис на задачата

Од стандарден влез се читаат `N` низи од знаци (стрингови) не подолги од 80 знаци.

На почетокот на програмата се читаат два цели броеви:

- `N` - бројот на низи од знаци кои ќе се читаат
- `X` - поместување

Секоја од вчитаните низи од знаци треба да се трансформира на тој начин што секоја од малите и големите букви (`a-z`, `A-Z`) се заменува со истата буква поместена `X` места понапред во азбуката (`a-z`).

Ако се надмине опсегот на буквите во азбуката, се продолжува **циклично од почетокот на азбуката**.

Трансформираната низа да се отпечати на стандарден излез.

**Трансформацијата да се имплементира со посебна рекурзивна функција.**

### Пример

```text
Welcome
```

Трансформирано со поместување `5`:

```text
Bjqhtrj
```

## Test Cases


### Test Case 1

**Input:**
```text
16 1
Sheets of empty canvas, untouched sheets of clay
Were laid spread out before me as her body once did.
All of five horizons revolved around her soul as the earth to the sun
Now the air I tasted and breathed has taken a turn
Ooh, and all I taught her was everything
Ooh, I know she gave me all that she was
And now my bitter hands chafe beneath the clouds of what was everything.
Oh, the pictures have all been washed in black, tattooed everything...
I take a walk outside, I'm surrounded by some kids at play
I can feel their laughter, so why do I sear?
Oh, and twisted thoughts that spin round my head, I'm spinning, oh,
I'm spinning, how quick the sun can drop away
And now my bitter hands cradle broken glass of what was everything
All the pictures have all been washed in black, tattooed everything...
All the love gone bad turned my world to black
Tattooed all I see, all that I am, all I'll be... yeah...
```
**Expected output:**

```text
Tiffut pg fnquz dbowbt, voupvdife tiffut pg dmbz
Xfsf mbje tqsfbe pvu cfgpsf nf bt ifs cpez podf eje.
Bmm pg gjwf ipsjapot sfwpmwfe bspvoe ifs tpvm bt uif fbsui up uif tvo
Opx uif bjs J ubtufe boe csfbuife ibt ublfo b uvso
Ppi, boe bmm J ubvhiu ifs xbt fwfszuijoh
Ppi, J lopx tif hbwf nf bmm uibu tif xbt
Boe opx nz cjuufs iboet dibgf cfofbui uif dmpvet pg xibu xbt fwfszuijoh.
Pi, uif qjduvsft ibwf bmm cffo xbtife jo cmbdl, ubuuppfe fwfszuijoh...
J ublf b xbml pvutjef, J'n tvsspvoefe cz tpnf ljet bu qmbz
J dbo gffm uifjs mbvhiufs, tp xiz ep J tfbs?
Pi, boe uxjtufe uipvhiut uibu tqjo spvoe nz ifbe, J'n tqjoojoh, pi,
J'n tqjoojoh, ipx rvjdl uif tvo dbo espq bxbz
Boe opx nz cjuufs iboet dsbemf csplfo hmbtt pg xibu xbt fwfszuijoh
Bmm uif qjduvsft ibwf bmm cffo xbtife jo cmbdl, ubuuppfe fwfszuijoh...
Bmm uif mpwf hpof cbe uvsofe nz xpsme up cmbdl
Ubuuppfe bmm J tff, bmm uibu J bn, bmm J'mm cf... zfbi...
```





### Test Case 2

**Input:**
```text
16 10
Sheets of empty canvas, untouched sheets of clay
Were laid spread out before me as her body once did.
All of five horizons revolved around her soul as the earth to the sun
Now the air I tasted and breathed has taken a turn
Ooh, and all I taught her was everything
Ooh, I know she gave me all that she was
And now my bitter hands chafe beneath the clouds of what was everything.
Oh, the pictures have all been washed in black, tattooed everything...
I take a walk outside, I'm surrounded by some kids at play
I can feel their laughter, so why do I sear?
Oh, and twisted thoughts that spin round my head, I'm spinning, oh,
I'm spinning, how quick the sun can drop away
And now my bitter hands cradle broken glass of what was everything
All the pictures have all been washed in black, tattooed everything...
All the love gone bad turned my world to black
Tattooed all I see, all that I am, all I'll be... yeah...
```
**Expected output:**

```text
Croodc yp owzdi mkxfkc, exdyemron croodc yp mvki
Gobo vksn czbokn yed lopybo wo kc rob lyni yxmo nsn.
Kvv yp psfo rybsjyxc bofyvfon kbyexn rob cyev kc dro okbdr dy dro cex
Xyg dro ksb S dkcdon kxn lbokdron rkc dkuox k debx
Yyr, kxn kvv S dkeqrd rob gkc ofobidrsxq
Yyr, S uxyg cro qkfo wo kvv drkd cro gkc
Kxn xyg wi lsddob rkxnc mrkpo loxokdr dro mvyenc yp grkd gkc ofobidrsxq.
Yr, dro zsmdeboc rkfo kvv loox gkcron sx lvkmu, dkddyyon ofobidrsxq...
S dkuo k gkvu yedcsno, S'w cebbyexnon li cywo usnc kd zvki
S mkx poov drosb vkeqrdob, cy gri ny S cokb?
Yr, kxn dgscdon dryeqrdc drkd czsx byexn wi rokn, S'w czsxxsxq, yr,
S'w czsxxsxq, ryg aesmu dro cex mkx nbyz kgki
Kxn xyg wi lsddob rkxnc mbknvo lbyuox qvkcc yp grkd gkc ofobidrsxq
Kvv dro zsmdeboc rkfo kvv loox gkcron sx lvkmu, dkddyyon ofobidrsxq...
Kvv dro vyfo qyxo lkn debxon wi gybvn dy lvkmu
Dkddyyon kvv S coo, kvv drkd S kw, kvv S'vv lo... iokr...
```




### Test Case 3

**Input:**
```text
7 3
Daddy's flown across the ocean
Leaving just a memory
Snapshot in the family album
Daddy what else did you leave for me?
Daddy, what'd'ja leave behind for me?!?
All in all it was just a brick in the wall.
All in all it was all just bricks in the wall.
```
**Expected output:**

```text
Gdggb'v iorzq dfurvv wkh rfhdq
Ohdylqj mxvw d phprub
Vqdsvkrw lq wkh idplob doexp
Gdggb zkdw hovh glg brx ohdyh iru ph?
Gdggb, zkdw'g'md ohdyh ehklqg iru ph?!?
Doo lq doo lw zdv mxvw d eulfn lq wkh zdoo.
Doo lq doo lw zdv doo mxvw eulfnv lq wkh zdoo.
```





### Test Case 4

**Input:**
```text
11 1
We don't need no education
We dont need no thought control
No dark sarcasm in the classroom
Teachers leave them kids alone
Hey! Teachers! Leave them kids alone!
All in all it's just another brick in the wall.
All in all you're just another brick in the wall.
"Wrong, Do it again!"
"If you don't eat yer meat, you can't have any pudding. How can you
have any pudding if you don't eat yer meat?"
"You! Yes, you behind the bikesheds, stand still laddy!"
```
**Expected output:**

```text
Xf epo'u offe op fevdbujpo
Xf epou offe op uipvhiu dpouspm
Op ebsl tbsdbtn jo uif dmbttsppn
Ufbdifst mfbwf uifn ljet bmpof
Ifz! Ufbdifst! Mfbwf uifn ljet bmpof!
Bmm jo bmm ju't kvtu bopuifs csjdl jo uif xbmm.
Bmm jo bmm zpv'sf kvtu bopuifs csjdl jo uif xbmm.
"Xspoh, Ep ju bhbjo!"
"Jg zpv epo'u fbu zfs nfbu, zpv dbo'u ibwf boz qveejoh. Ipx dbo zpv
ibwf boz qveejoh jg zpv epo'u fbu zfs nfbu?"
"Zpv! Zft, zpv cfijoe uif cjlftifet, tuboe tujmm mbeez!"
```





### Test Case 5

**Input:**
```text
12 18
Finished with my woman 'cause she couldn't help me with my mind
people think I'm insane because I am frowning all the time
All day long I think of things but nothing seems to satisfy
Think I'll lose my mind if I don't find something to pacify
Can you help me occupy my brain?
Oh yeah
I need someone to show me the things in life that I can't find
I can't see the things that make true happiness, I must be blind
Make a joke and I will sigh and you will laugh and I will cry
Happiness I cannot feel and love to me is so unreal
And so as you hear these words telling you now of my state
I tell you to enjoy life I wish I could but it's too late
```
**Expected output:**

```text
Xafakzwv oalz eq ogesf 'usmkw kzw ugmdvf'l zwdh ew oalz eq eafv
hwghdw lzafc A'e afksfw twusmkw A se xjgofafy sdd lzw laew
Sdd vsq dgfy A lzafc gx lzafyk tml fglzafy kwwek lg kslakxq
Lzafc A'dd dgkw eq eafv ax A vgf'l xafv kgewlzafy lg hsuaxq
Usf qgm zwdh ew guumhq eq tjsaf?
Gz qwsz
A fwwv kgewgfw lg kzgo ew lzw lzafyk af daxw lzsl A usf'l xafv
A usf'l kww lzw lzafyk lzsl escw ljmw zshhafwkk, A emkl tw tdafv
Escw s bgcw sfv A oadd kayz sfv qgm oadd dsmyz sfv A oadd ujq
Zshhafwkk A usffgl xwwd sfv dgnw lg ew ak kg mfjwsd
Sfv kg sk qgm zwsj lzwkw ogjvk lwddafy qgm fgo gx eq klslw
A lwdd qgm lg wfbgq daxw A oakz A ugmdv tml al'k lgg dslw
```





### Test Case 6

**Input:**
```text
3 5
Welcome to the Machine
Another Brick in the Wall
Shine on you crazy Diamond
```
**Expected output:**

```text
Bjqhtrj yt ymj Rfhmnsj
Fstymjw Gwnhp ns ymj Bfqq
Xmnsj ts dtz hwfed Infrtsi
```
