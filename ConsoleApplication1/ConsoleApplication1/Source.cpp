#include <iostream>
#include <string>

using namespace std;


int main() {
string number = "473";
//getline(cin, number);

if (number[0] == 0) {
	cout << "invalid" << endl;
}
else {
	for (int i = 0; i <= number.length(); ++i) {
		if (number[i] < 0 && number[i]>9) {
			cout << "invalid" << endl;
		}
		else {
			continue;
		}
	cout << number[i] << endl;
	}
return number[0];
}
}

