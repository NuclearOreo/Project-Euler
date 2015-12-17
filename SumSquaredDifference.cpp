#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num = 0,num1 = 0;

    for(int i = 1; i <= 100; i++){
        num += pow(i,2);
    }

    for(int i = 1; i <= 100; i++){
        num1 += i;
    }

    num1 = pow(num1,2);

    cout << (num1 - num) << endl;

    return 0;
}

