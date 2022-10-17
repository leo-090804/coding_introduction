#include <iostream>
using namespace std;
int main() {

    int month, date;
    cin >> date >> month;
    switch (month) {
    case 1:
        if (date <= 19 && date >= 1) {
            cout << "Ma Ket" << endl;
        }
        else if (date > 19 && date <= 31) {
            cout << "Bao Binh" << endl;
        }
        break;
    case 2:
        if (date <= 18 && date >= 1) {
            cout << "Bao Binh" << endl;
        }
        else if (date > 18 && date <= 28) {
            cout << "Song Ngu" << endl;
            break;
        }
    case 3:
        if (date <= 20 && date >= 1) {
            cout << "Song Ngu" << endl;
        }
        else if (date > 20 && date <= 31) {
            cout << "Bach Duong" << endl;
        }
        break;
    case 4:
        if (date <= 19 && date >= 1) {
            cout << "Bach Duong" << endl;
        }
        else if (date > 19 && date <= 30) {
            cout << "Kim Nguu" << endl;
        }
        break;
    case 5:
        if (date <= 20 && date >= 1) {
            cout << "Kim Nguu" << endl;
        }
        else if (date > 20 && date <= 31) {
            cout << "Song Tu" << endl;
        }
        break;
        case 6
            if (date <= 21 && date >= 1) {
                cout << "Song Tu" << endl;
            }
            else if (date > 20 && date <= 31) {
                cout << "Bach Duong" << endl;
            }
        break;
    }
}