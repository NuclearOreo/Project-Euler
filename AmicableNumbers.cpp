#include <iostream>

using namespace std;

int main()
{

    int count = 0,count2 = 0, sum = 0;

    for(int num = 220; num < 10000; num++){
        for(int i = 1; i <= num/2; i++){
            if(num % i == 0)
                count += i;
        }
        for(int i = 1; i <= count/2; i++){
            if(count % i == 0)
                count2 += i;
        }
        if(count2 == num && count != count2){
            sum += count + count2;
            num = count;
        }
        count = count2 = 0;
    }

    cout << sum << endl;

    return 0;
}
