#include <iostream>
#include <string>

using namespace std;

string convertToMinimumNumber(string x) {
    int n = x.length();
    for (int i = 0; i < n; i++) {
        int d = x[i] - '0';
        if (d > 4) {
            x[i] = '9' - d;
        }
    }
    return x;
}

int main() {
    string x = "9851";
    string y = convertToMinimumNumber(x);
    cout << "X: " << x << endl;
    cout << "Y: " << y << endl;
    return 0;
}