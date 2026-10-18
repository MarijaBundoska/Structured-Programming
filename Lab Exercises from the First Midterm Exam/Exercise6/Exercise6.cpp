#include <iostream>
using namespace std;

int main(){
    int days, months, years, remainingDays;
    cin >> days;
    years = days / 365;
    months = (days - years * 365) / 30;
    remainingDays = (days - years * 365 - months * 30);
    cout << "Years: " << years << "," << " months: " << months << "," << " days: " << remainingDays << endl;
    return 0;
}
