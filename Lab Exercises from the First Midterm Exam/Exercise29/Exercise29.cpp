#include <iostream>
using namespace std;

int main() {
    double amount, totalVAT = 0;
    char taxType;

    for (int i = 0; i < 3; i++) {
        cin >> amount >> taxType;

        if (amount < 0) {
            continue;
        }

        if (amount > 30000) {
            amount = 30000;
        }

        double rate;

        if (taxType == 'A') {
            rate = 0.18;
        } else if (taxType == 'B') {
            rate = 0.10;
        } else if (taxType == 'C') {
            rate = 0.05;
        } else if (taxType == 'D') {
            rate = 0.0;
        } else {
            rate = 0.15;
        }

        totalVAT += amount * rate;
    }

    double refund = totalVAT * 0.15;

    if (refund > 2100) {
        refund = 2100;
    }

    cout << "Total VAT of the receipts is equal to: "
         << totalVAT << "den." << endl;

    cout << "Total refund VAT of the receipts is equal to: "
         << refund << "den." << endl;

    return 0;
}
