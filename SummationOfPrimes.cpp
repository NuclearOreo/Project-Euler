#include <iostream>
#include <vector>

using namespace std;

int main()
{

    /*bool TF = false;
    int num1 = 0;
    int prime;
    int num2 = 0;

    for(int num = 2000000; num > 1; num--){
        for(int i = num - 1; i > 1; i--){
            if((num % i == 0) || (num1 > 0)){
                TF = false;
                num1++;
            }else if((num % 1 != 0) || (num1 == 0)){
                TF = true;
                prime = num;
            }
        }
        num1 = 0;
        if(TF){
            cout << prime << endl;
            //num2 +=prime;
        }
    }

    //cout << num2 << endl;
    */

    vector<bool>primes(2000000,true);

        primes[1] = false;
        for(unsigned int a = 2; a*a < primes.size(); ++a){
            if(primes[a]==true){
                for(unsigned int b = 0; a*a+b*a < primes.size(); ++b){
                        primes[a*a+b*a] = false;
                }
            }
        }

        long long total = 0;
        for(unsigned int c = 1; c < primes.size(); c++){
            if(primes[c] == true)
                total +=c;
        }
        cout << total << endl;


    return 0;
}

