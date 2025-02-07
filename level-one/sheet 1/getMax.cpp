#include<iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int results[3] = {a + b, a - b, a * b};
    int max = results[0];
    for(int i = 1; i < 3; i++) {
        if(results[i] > max) {
            max = results[i];
        }
    }
    cout << max;
  
    return 0;
}