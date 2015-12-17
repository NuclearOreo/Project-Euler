#include <iostream>

using namespace std;

int main()
{

    int number = 1;
    bool TF = false;
    int ListLength = 0;

    while(ListLength != 10000){
        for(int i = (number-1); i > 1; i--){
            if(number % i == 0){
                TF = false;
                break;
            }else if(number % i != 0){
                TF = true;
            }
        }

        if(TF){
            ListLength++;
            cout << number << endl;
            TF = false;
        }
        number++;
    }

    return 0;
}

