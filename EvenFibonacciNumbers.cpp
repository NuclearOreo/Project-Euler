#include <iostream>

using namespace std;

int main()
{
    int n[32];
    int sum = 0;

    n[0] = 1;
    n[1] = 2;

    for(int i = 2; i < 32; i++){
            n[i] = n[i-1] + n[i-2];
    }

    for(int i = 0; i < 32;i++){
        if(n[i] % 2 == 0){
            sum += n[i];
        }
    }

    cout << "sum: " << sum << endl;

    return 0;
}

