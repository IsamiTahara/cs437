#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string originalCurrency, desiredCurrency;
    double amount, convertedAmount;

    cin >> originalCurrency >> amount >> desiredCurrency;

    if (originalCurrency == "EUR") {
        if (desiredCurrency == "USD") {
            convertedAmount = amount * 1.09;
        } else if (desiredCurrency == "YEN") {
            convertedAmount = amount * 141.70;
        } else {
            cout << "Invalid input" << endl;
            return 0;
        }
    } else if (originalCurrency == "USD") {
        if (desiredCurrency == "EUR") {
            convertedAmount = amount / 1.09;
        } else if (desiredCurrency == "YEN") {
            convertedAmount = amount * 130.18;
        } else {
            cout << "Invalid input" << endl;
            return 0;
        }
    } else if (originalCurrency == "YEN") {
        if (desiredCurrency == "EUR") {
            convertedAmount = amount / 141.70;
        } else if (desiredCurrency == "USD") {
            convertedAmount = amount / 130.18;
        } else {
            cout << "Invalid input" << endl;
            return 0;
        }
    } else {
        cout << "Invalid input" << endl;
        return 0;
    }

    cout << fixed << setprecision(2) << convertedAmount << endl;

    return 0;
}
