#include<iostream>
using namespace std;

int main() {
    string S;
    cin>>S;
    int maxRainyDays = 0;
    int currentRainyDays = 0;

    for(char ch : S) {
        if(ch == 'R') {
            currentRainyDays++;
            if(currentRainyDays > maxRainyDays) {
                maxRainyDays = currentRainyDays;
            }
        } else {
            currentRainyDays = 0;
        }
    }
    cout<< maxRainyDays << endl;
    return 0;
}