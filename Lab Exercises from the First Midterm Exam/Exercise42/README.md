## Exercise 42 - Car Import Tax and Loan Calculator

### Problem Description

According to the regulations and laws in our country, importing a car from another country requires paying a motor vehicle tax. Anja wants to buy a car from Bulgaria, so she decides to take out a loan. However, in addition to purchasing the vehicle, she must also cover the import tax.

The formula used to calculate the motor vehicle tax (`dmv`) is:

**dmv = (vmv * pbb) * skd + CO2 + kCO2**

Where:

- `dmv` – motor vehicle tax.
- `vmv` – motor vehicle value (purchase price).
- `pbb` – percentage based on the vehicle's value, determined according to the following rules:
  - For a price below €10,000, the value is `0`.
  - For a price from €10,000 up to €20,000, the value is `0.05`.
  - For a price from €20,000 up to €30,000, the value is `0.10`.
  - For a price of €30,000 or more, the value is `0.15`.
- `skd` – exchange rate of the Macedonian denar against the euro, provided by the National Bank of the Republic of North Macedonia.
- `CO2` – CO₂ emissions of the vehicle.
- `kCO2` – coefficient calculated according to the CO₂ emissions and fuel type:
  - **For petrol vehicles:**
    - If CO₂ is greater than 0 and less than 75, the coefficient is `5`.
    - If CO₂ is 75 or greater, the coefficient is `15`.
  - **For diesel vehicles:**
    - If CO₂ is greater than 0 and less than 75, the coefficient is `10`.
    - If CO₂ is 75 or greater, the coefficient is `20`.

After calculating the tax, the program must calculate the monthly loan installment and determine whether Anja is eligible for a loan.

The loan must cover the total cost of the car and its tax. If Anja has savings, the saved amount must be deducted from the total cost.

Anja must enter `1` if she has savings and `0` otherwise. If she enters `0` but also enters a nonzero amount of savings, the program must display an error message.

The program must check whether the savings exceed the amount that would need to be borrowed. If the savings are greater than the total cost, it must display a message stating that a loan is unnecessary. Otherwise, the program calculates the interest and monthly installment for the specified repayment period using an interest rate of `0.02`.

The interest is calculated using the following formula:

**Interest = Total Amount × Number of Months × Interest Rate**

The monthly installment is calculated as:

**Monthly Installment = (Total Amount + Interest) / Number of Months**

All monetary amounts entered as input are in euros, while the monthly installment must be displayed in Macedonian denars.

Anja must also enter her monthly income. If her income is lower than the calculated monthly installment, the program must display a message stating that she is not eligible for a loan. Otherwise, it must display the monthly installment in denars.

### Input

The input values must be entered in the following order:

1. `vmv` – vehicle purchase price in euros.
2. `skd` – exchange rate of the denar against the euro.
3. `co2` – CO₂ emissions.
4. `gorivo` – fuel type (`0` for petrol, `1` for diesel).
5. `zashteda` – whether the buyer has savings (`1` if yes, `0` if no).
6. `zashteda_sredstva` – amount of savings in euros.
7. `meseci_na_isplata` – loan repayment period in months.
8. `mesechen_prihod` – monthly income in euros.

### Validation Rules

- All input values must be positive, except for `gorivo` and `zashteda`, which must be either `0` or `1`.
- If `zashteda` is `0`, the savings amount must be `0`; otherwise, an error message must be displayed.
- The program must correctly determine the applicable percentage and CO₂ coefficient.
- If the savings exceed the total cost, the program must indicate that taking out a loan is unnecessary.
- If the monthly income is lower than the monthly installment, the program must indicate that the user is not eligible for a loan.
- If the user is eligible, the monthly installment must be displayed in denars.

---

## Задача 42 - Пресметка на данок за увоз на автомобил и кредитна рата

### Опис на проблемот

Според регулативата и законите во нашата држава, при увоз на автомобил од друга држава треба да се плати данок на моторно возило. Ања сака да купи автомобил од Бугарија, па затоа одлучува да подигне кредит. Покрај купопродажната цена на возилото, таа треба да ги подмири и трошоците за данокот.

Формулата која се користи за пресметка на данокот на моторно возило (`dmv`) е:

**dmv = (vmv * pbb) * skd + CO2 + kCO2**

Каде што:

- `dmv` – данок на моторно возило.
- `vmv` – вредност на моторното возило, односно купопродажната цена.
- `pbb` – процент кој се одредува според вредноста на возилото:
  - За цена помала од 10.000 евра, вредноста е `0`.
  - За цена од 10.000 евра до 20.000 евра, вредноста е `0.05`.
  - За цена од 20.000 евра до 30.000 евра, вредноста е `0.10`.
  - За цена од 30.000 евра или повеќе, вредноста е `0.15`.
- `skd` – среден курс на денарот во однос на еврото, определен од Народната банка на Република Северна Македонија.
- `CO2` – емисија на CO₂ за соодветното моторно возило.
- `kCO2` – коефициент кој се пресметува според емисијата на CO₂ и видот на горивото:
  - **За возила кои користат бензин:**
    - Ако вредноста на CO₂ е поголема од 0 и помала од 75, коефициентот е `5`.
    - Ако вредноста на CO₂ е 75 или поголема, коефициентот е `15`.
  - **За возила кои користат дизел:**
    - Ако вредноста на CO₂ е поголема од 0 и помала од 75, коефициентот е `10`.
    - Ако вредноста на CO₂ е 75 или поголема, коефициентот е `20`.

Откако ќе се пресмета данокот, програмата треба да ја пресмета месечната кредитна рата и да провери дали Ања има право да подигне кредит.

Кредитот треба да ја покрие вкупната сума, односно цената на автомобилот заедно со данокот. Доколку Ања има заштедени средства, тие треба да се одземат од вкупната сума што треба да се плати.

Ања треба да внесе `1` доколку има заштеда, а `0` доколку нема. Ако внесе `0`, а притоа внесе и ненулта сума на заштедени средства, програмата треба да прикаже порака за грешка.

Потоа треба да се провери дали заштедените средства се поголеми од сумата што треба да се позајми. Доколку заштедата е поголема од вкупната цена, треба да се испечати порака дека нема потреба од подигнување кредит. Во спротивно, треба да се пресметаат каматата и месечната рата за зададениот период на отплата, со каматна стапка од `0.02`.

Каматата се пресметува според формулата:

**Камата = Вкупна сума × Број на месеци × Каматна стапка**

Месечната рата се пресметува според формулата:

**Месечна рата = (Вкупна сума + Камата) / Број на месеци**

Сите парични износи внесени како влезни податоци се во евра, додека месечната рата треба да се прикаже во денари.

Ања треба да ги внесе и своите месечни примања. Доколку примањата се помали од пресметаната месечна рата, програмата треба да прикаже порака дека корисникот не може да подигне кредит. Во спротивно, треба да ја испечати месечната рата во денари.

### Влез

Вредностите треба да се внесат по следниот редослед:

1. `vmv` – купопродажна цена на автомобилот во евра.
2. `skd` – курс на денарот во однос на еврото.
3. `co2` – емисија на CO₂.
4. `gorivo` – вид на гориво (`0` за бензин, `1` за дизел).
5. `zashteda` – дали корисникот има заштеда (`1` ако има, `0` ако нема).
6. `zashteda_sredstva` – износ на заштедените средства во евра.
7. `meseci_na_isplata` – број на месеци за отплата на кредитот.
8. `mesechen_prihod` – месечни примања во евра.

### Правила за проверка на влезните податоци

- Сите влезни вредности треба да бидат позитивни, освен `gorivo` и `zashteda`, кои треба да имаат вредност `0` или `1`.
- Ако `zashteda` е `0`, износот на заштедените средства мора да биде `0`; во спротивно, треба да се прикаже порака за грешка.
- Програмата треба правилно да го одреди соодветниот процент и коефициент според емисијата на CO₂.
- Ако заштедените средства се поголеми од вкупната цена, треба да се прикаже порака дека нема потреба од кредит.
- Ако месечните примања се помали од месечната рата, треба да се прикаже порака дека корисникот нема право да подигне кредит.
- Доколку корисникот ги исполнува условите, треба да се прикаже месечната рата во денари.




## Test Cases


### Test Case 1

**Input:**
```text
15000
61.5
50
1
1
600
12
1500
```
**Expected output:**

```text
Vkupno: 932225
Kreditot ne e odobren
```



### Test Case 2

**Input:**
```text
8000
61.5
10
0
1
600
24
1500
```
**Expected output:**

```text
Vkupno: 455150
Odobren kredit so mesechna rata od: 28067
```



### Test Case 3

**Input:**
```text
8000
61.5
10
2
1
600
24
1500
```
**Expected output:**

```text
Input greshka
```



### Test Case 4

**Input:**
```text
8000
-61.5
10
2
1
600
24
1500
```
**Expected output:**

```text
Input greshka
```



### Test Case 5

**Input:**
```text
8000
61.5
10
0
0
0
24
1500
```
**Expected output:**

```text
Vkupno: 492050
Odobren kredit so mesechna rata od: 30343
```



### Test Case 6

**Input:**
```text
8000
61.5
10
0
0
50
24
1500
```
**Expected output:**

```text
Input greshka
```




### Test Case 7

**Input:**
```text
15000
61.5
50
1
1
20000
12
1500
```
**Expected output:**

```text
Nema potreba od kredit
```
