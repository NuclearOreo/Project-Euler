#include <iostream>
#include <math.h>

using namespace std;

#define MAX 2000000

int main(){

    long long int sum = 0;

    bool* prime = new bool[MAX];

    for(int i = 0; i < MAX; i++){
        prime[i] = true;
    }

    prime[0] = false;
    prime[1] = false;

    for(int i = 2; i < MAX; i++){
        for(int j = i*2; j < MAX; j+=i){
            prime[j] = false;
        }
    }

    for(int i = 0; i < MAX; i++){
        if(prime[i]){
            sum += i;
        }
    }

    cout << sum << endl;

    return  0;
}
