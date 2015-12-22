#include <iostream>

using namespace std;

int main(){
    int seq = 1,jump = 2, sum = 0;

    while(jump < 1001){
        for(int i = 0; i < 4; i++){
                sum += seq;
                seq += jump;
        }
        jump += 2;
    }
    sum += seq;

    cout << sum << endl;

    return 0;
}
