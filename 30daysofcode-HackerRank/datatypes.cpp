#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int a;
    double b;
    string c;

    cin >> a;
    cin >> b;
    getline(cin, c);
    getline(cin, c);

    cout << (a + i) << endl;
    cout << setprecision(1) << fixed << (b + d) << endl;
    cout << (s + c) << endl;
    return 0;
