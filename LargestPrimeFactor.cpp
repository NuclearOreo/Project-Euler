#include <iostream>

using namespace std;

int main()
{
    long long int number = 75;
    long long int count = 0;
    long long int result = 0;

    for(long long int i = number; i > 0; i--){
        if(number % i == 0){
            count++;
        }
    }

    long long int index = count;
    int*n = new int[count];

    for(long long int i = number; i > 0; i--){
        if(number % i == 0){
            index--;
            n[index] = i;
        }
    }

    cout << "Prime Factors of " << number << endl;
    cout << "---------------------------" << endl;

    for (long long int i = 0; i < count; i++){
        for (long long int j = 1; j < n[i]; j++){
            if (n[i] % j == 0){
                result++;
            }
        }
        if(result == 1){
            cout << n[i] << endl;
        }
        result = 0;
    }

    return 0;
}

