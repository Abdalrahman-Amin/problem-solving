#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int oppositeSideSume = 21 - (a + b + c);
    cout << oppositeSideSume;
    return 0;
}