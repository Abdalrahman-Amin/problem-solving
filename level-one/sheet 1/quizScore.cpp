#include<iostream>
using namespace std;


int main(){

    int quizScore;
    cin>>quizScore;
    if(quizScore>= 90) {
        cout<<"expert";
    } else if (quizScore >= 70) {
        cout<< 90 - quizScore;
    } else if (quizScore >= 40) {
        cout<< 70 - quizScore;
    } else if (quizScore >= 0) {
        cout<< 40 - quizScore;
    }
    return 0;
}