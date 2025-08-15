
#include <iostream>
using namespace std;
int main() {
    int Pin = 20122023;
    int enterPined;
    int choice;
    double balance = 25000.20;
    double amount;

    while (true) {
        cout << "Enter the Pin: ";
        cin >> enterPined;

        if (enterPined != Pin) {
            cout << "Invalid Pin. Please try again." << endl;
            continue;
        }

        do {
            cout << "\n===== ATM MENU =====\n";
            cout << "1. Check Balance\n";
            cout << "2. Withdraw Cash\n";
            cout << "3. Deposit Cash\n";
            cout << "4. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    cout << "Your current balance is: Rs. " << balance << endl;
                    break;

                case 2:
                    cout << "Enter amount to withdraw: Rs. ";
                    cin >> amount;
                    if (amount > balance) {
                        cout << "Insufficient balance.\n";
                    } else if (amount <= 0) {
                        cout << "Invalid amount.\n";
                    } else {
                        balance -= amount;
                        cout << "Withdrawal successful. Remaining balance: Rs. " << balance << endl;
                    }
                    break;
                      case 3:
                    cout << "Enter amount to deposit: Rs. ";
                    cin >> amount;
                    if (amount <= 0) {
                        cout << "Invalid amount.\n";
                    } else {
                        balance += amount;
                        cout << "Deposit successful. Current balance: Rs. " << balance << endl;
                    }
                    break;

                case 4:
                    cout << "Thank you for using the ATM. Goodbye!\n";
                    return 0;

                default:
                	cout << "Invalid choice. Please try again.\n";
                    break;
            }

        } while (choice != 4);
    }

    return 0;
}
