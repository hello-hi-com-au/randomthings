#include <iostream>
using namespace std;

int main() {
cout << "Welcome to Simple Calculator!\n\n";
int x, y, z;
int answer;
string operation;
cout << "Type a number: ";
cin >> x;
cout << "\nType a number 1 for +, 2 for -, 3 for * and 4 for /: ";
cin >> z;
cout << "\nType another number: ";
cin >> y;
if(z == 1) {
    answer = x + y;
    operation = "+";
}
if(z == 2) {
    answer = x - y;
    operation = "-";
}
if(z == 3) {
    answer = x * y;
    operation = "*";
}
if(z == 4) {
    answer = x / y;
    operation = "/";
}
cout << "\n" << x << operation << y << "=" << answer;
}
