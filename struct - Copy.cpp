#include <iostream>
#include <string>
using namespace std;


struct Customer {
    string name;
    int accountNumber;
    double balance;
};


void displayLowBalanceCustomers(Customer c[], int n) {
    cout << "Customers with balance less than 5000 Rs:" << endl;
    for (int i = 0; i < n; i++) {
        if (c[i].balance < 5000) {
            cout <<c[i].name << endl;
        }
    }
}

int main() {
    const int n = 5;
    Customer c[n];

    
    for (int i = 0; i < n; i++) {
        cout << "Enter details for customer " << i + 1 << ":" << endl;
        cout << "Name: ";
        cin >> c[i].name;
        cout << "Account Number: ";
        cin >> c[i].accountNumber;
        cout << "Balance: ";
        cin >> c[i].balance;
        cout << endl;
    }

    
    displayLowBalanceCustomers(c, n);

    return 0;
}
