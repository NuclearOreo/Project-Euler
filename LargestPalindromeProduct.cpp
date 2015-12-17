#include <iostream>
#include <string>
#include <sstream>

using namespace std;

bool reverse(string x);
string converter(int x);

int main()
{

    int pal;
    int largest = 0;

    for(int i = 999; i >= 100; i--){
        for(int j = 999; j >= 100;j--){
            pal = i * j;
            if(reverse(converter(pal))){
                if(pal > largest){
                    largest =  pal;
                }
            }
        }
    }

    cout << largest << endl;

    return 0;
}

bool reverse(string x){

    bool TF;

    for(int i = x.length() - 1; i >= 0; i--){

       if(x[i] == x[x.length()- 1 - i]){
           TF = true;
       }else{
           TF = false;
           break;
       }

    }

    return TF;
}

string converter(int x){

    string num;
    ostringstream convert;

    convert << x;

    num = convert.str();

    return num;
}
