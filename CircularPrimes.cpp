#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

vector<int> prime_list(int num);
bool check(vector<int> list, int num);

int main()
{
    int count = 0;
    vector<int> nums = prime_list(1000000);

    for(unsigned i = 0; i < nums.size(); i++){
        if(nums[i] < 10){
            count++;
        }else{
            if(check(nums,nums[i]))
                count++;
        }
    }

    cout << count << endl;
    return 0;
}

vector<int> prime_list(int num){
    vector<int> prime;
    bool* list = new bool[num];

    fill_n(list,num,true);

    list[0] = false;
    list[1] =false;

    for(int i = 2; i < sqrt(num); i++)
        if(list[i])
            for(int j = 2*i; j < num; j+=i)
                list[j] = false;

    for(int i = 0; i < num; i++)
        if(list[i])
            prime.push_back(i);

    return prime;
}

bool check(vector<int> list, int num){
    string temp;
    ostringstream convert;
    vector<int> cycle;

    convert << num;
    temp = convert.str();

    for(unsigned i = 0; i < temp.length(); i++){
        istringstream(temp) >> num;
        cycle.push_back(num);

        char save;
        save = temp[0];
        for(unsigned i = 0; i < temp.length()-1; i++){
            temp[i] = temp[i+1];
        }
        temp[temp.length()-1] = save;
    }

    int count = 0;
    for(unsigned i = 0; i < cycle.size(); i++)
        if(binary_search(list.begin(),list.end(),cycle[i]))
            count++;
    if(unsigned(count) == cycle.size())
        return true;
    return 0;
}
