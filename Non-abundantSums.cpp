#include <iostream>
#include <vector>

using namespace std;

int sumD(int n);

int main()
{
    vector<int> abn;
    bool* sum2abn = new bool[28123];
    int sum = 0;

    for(int i = 1; i < 28123; i++){
        if(sumD(i) > i)
            abn.push_back(i);
    }

    fill_n(sum2abn,28123,false);

    for(unsigned i = 0; i < abn.size(); i++)
        for(unsigned j = 0; j < abn.size(); j++){
            int temp = abn[i] + abn[j];
            if(temp < 28123)
                sum2abn[temp] = true;
        }

    for(unsigned i = 0; i < 28123; i++)
        if(!sum2abn[i])
            sum += i;

    cout << sum << endl;

    return 0;
}

int sumD(int n){
    int sum = 0;
    for(int i = 1; i <= n/2; i++){
        if(n % i == 0)
            sum += i;
    }
    return sum;
}
