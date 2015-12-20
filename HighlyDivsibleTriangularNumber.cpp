#include <iostream>
#include <cmath>

using namespace std;

int counter(int num);

int main()
{

    int num = 1, i = 2, div = 0;

    while(div < 500){
        num += i;
        i++;
        div = counter(num);
    }
    cout << num << endl;
}

int counter(int num){
    int count = 0;

    for(int j = 1; j < sqrt(num); j++){
        if(num % j == 0){
            count += 2;
        }
    }
    return count;
}
