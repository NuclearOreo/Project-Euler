#include <iostream>

using namespace std;

int main(){

    unsigned num = 0;
    int repitition = 0;
    int largest = 0;
    int specialNum = 0;

    for(unsigned i = 1; i < 1000000; i++){
        num = i;

        while(num != 1){

            if(num%2 == 0){
                num = num/2;
            }else{
                num = 3*num + 1;
            }
            repitition++;
        }

        if(repitition > largest){
            largest = repitition;
            specialNum = i;
        }

        repitition = 0;
    }
    cout << "SPECIALNUM: " << specialNum << " LARGEST: " << largest << endl;
    return 0;
}
