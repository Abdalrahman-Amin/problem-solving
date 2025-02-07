#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int last = n % 10;
    int first = n / 100;
    if(last == first){
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}