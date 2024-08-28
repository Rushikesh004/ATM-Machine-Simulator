#include <iostream>
using namespace std;
void displayMenu() {
    cout << "\n*********** ATM MENU ***********\n";
    cout << "1. View Balance\n";
    cout << "2. Withdraw Cash\n";
    cout << "3. Deposit Funds\n";
    cout << "4. Change PIN\n";
    cout << "5. Exit\n";
    cout << "********************************\n";
}

int main() {
    int pin, option;
    int PIN = 5555;
    float balance = 10000;
    
    cout << "Welcome to Rushikesh's ATM Service\n";
    cout << "Enter Your PIN: ";
    cin >> pin;

    if (pin == PIN) {
        while (true) {
            displayMenu();
            cout << "Enter Option: ";
            cin >> option;

            switch (option) {
                case 1:
                    cout << "\nBalance: Rs " << balance << endl;
                    break;

                case 2:
                    float withdrawAmount;
                    cout << "Enter Withdraw Amount: Rs ";
                    cin >> withdrawAmount;
                    if (withdrawAmount <= balance) {
                        balance -= withdrawAmount;
                        cout << "Withdrawal Successful. New Balance: Rs " << balance << endl;
                    } else {
                        cout << "Insufficient Balance. Withdrawal Failed." << endl;
                    }
                    break;

                case 3:
                    float depositAmount;
                    cout << "Enter Deposit Amount: Rs ";
                    cin >> depositAmount;
                    balance += depositAmount;
                    cout << "Deposit Successful. New Balance: Rs " << balance << endl;
                    break;

                case 4:
                    int newPin;
                    cout << "Enter New PIN: ";
                    cin >> newPin;
                    PIN = newPin;
                    cout << "PIN Changed Successfully." << endl;
                    break;

                case 5:
                    cout << "Thank you for using Rushikesh's ATM. Goodbye!" << endl;
                    return 0;

                default:
                    cout << "Invalid Option. Please try again." << endl;
            }
        }
    } else {
        cout << "Wrong PIN. Access Denied." << endl;
    }

    return 0;
}
