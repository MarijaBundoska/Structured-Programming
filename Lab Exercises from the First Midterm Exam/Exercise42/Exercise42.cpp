#include <iostream>
using namespace std;

int main() {
    double vmv, skd, co2, zashteda_sredstva, mesechen_prihod;
    int gorivo, zashteda, meseci_na_isplata;

    if (!(cin >> vmv >> skd >> co2 >> gorivo >> zashteda >> zashteda_sredstva >> meseci_na_isplata >> mesechen_prihod)) {
        return 0;
    }

    if (vmv <= 0 || skd <= 0 || co2 < 0 || meseci_na_isplata <= 0 || mesechen_prihod <= 0) {
        cout << "Input greshka" << endl;
        return 0;
    }
    if (gorivo != 0 && gorivo != 1) {
        cout << "Input greshka" << endl;
        return 0;
    }
    if (zashteda != 0 && zashteda != 1) {
        cout << "Input greshka" << endl;
        return 0;
    }
    if (zashteda == 0 && zashteda_sredstva != 0) {
        cout << "Input greshka" << endl;
        return 0;
    }
    if (zashteda_sredstva < 0) {
        cout << "Input greshka" << endl;
        return 0;
    }

    double pbb = 0;
    if (vmv < 10000) {
        pbb = 0.0;
    } else if (vmv < 20000) {
        pbb = 0.05;
    } else if (vmv < 30000) {
        pbb = 0.10;
    } else {
        pbb = 0.15;
    }

    double kCO2 = 0;
    if (gorivo == 0) {
        if (co2 > 0 && co2 < 75) {
            kCO2 = 5;
        } else {
            kCO2 = 15;
        }
    } else {
        if (co2 > 0 && co2 < 75) {
            kCO2 = 10;
        } else {
            kCO2 = 20;
        }
    }

    double dmv = (vmv * pbb) * skd + co2 * kCO2;

    double vkupno_evra = vmv;
    if (zashteda == 1) {
        vkupno_evra -= zashteda_sredstva;
    }

    if (vkupno_evra <= 0) {
        cout << "Nema potreba od kredit" << endl;
        return 0;
    }

    double vkupna_suma_denari = (vkupno_evra * skd) + dmv;


    cout << "Vkupno: " << (int)vkupna_suma_denari << endl;

    double kamata = vkupna_suma_denari * meseci_na_isplata * 0.02;
    double mesecna_rata = (vkupna_suma_denari + kamata) / meseci_na_isplata;

    double prihod_denari = mesechen_prihod * skd;

    if (prihod_denari < mesecna_rata) {
        cout << "Kreditot ne e odobren" << endl;
    } else {
        cout << "Odobren kredit so mesechna rata od: " << (int)mesecna_rata << endl;
    }

    return 0;
}
