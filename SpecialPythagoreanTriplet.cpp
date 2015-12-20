#include <iostream>

using namespace std;

int main(){

    int product;
    double a = 1, b = 2, c;

    for(int i = 0; i < 1000; i++){
        for(int j = 0; j < 175; j++){

            if(a < b){
                c = sqrt(a*a + b*b);
            }

            if(b < c && (a+b+c) == 1000){
                product = a*b*c;
                cout << product << endl;
            }
            b++;
        }
        a++;
        b = a + 1;
    }

    return 0;
}
