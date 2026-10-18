#include <iostream>
#include <string>
using namespace std;

int main() {
    string movie, popcorn, drink, day;
    int popcornCount, drinkCount, visa;
    int ticketPrice = 200;
    int popcornPrice, drinkPrice;
    int totalTickets, total;

    cin >> movie;
    cin >> popcorn;
    cin >> popcornCount;
    cin >> drink;
    cin >> drinkCount;
    cin >> day;
    cin >> visa;

    if (movie == "comedy") {
        ticketPrice += 20;
    } else if (movie == "action") {
        ticketPrice += 40;
    } else if (movie == "romance") {
        ticketPrice += 30;
    }

    totalTickets = 4 * ticketPrice;

    if (day == "Wednesday" && visa == 1) {
        totalTickets = 2 * ticketPrice;
    }

    if (popcorn == "S") {
        popcornPrice = 100;
    } else if (popcorn == "M") {
        popcornPrice = 150;
    } else {
        popcornPrice = 200;
    }

    if (drink == "Water") {
        drinkPrice = 80;
    } else if (drink == "Fanta" ||
               drink == "CocaCola" ||
               drink == "Sprite") {
        drinkPrice = 100;
    } else {
        drinkPrice = 120;
    }

    total = totalTickets
          + popcornCount * popcornPrice
          + drinkCount * drinkPrice;

    cout << total << endl;

    return 0;
}
