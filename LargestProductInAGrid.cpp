#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream file;
    file.open("num.txt");
    int numlist[20][20];

    for(int i = 0; i < 20; i++){
        for(int j = 0; j < 20; j++){
            file >> numlist[i][j];
        }
    }

    int max = 0, sum;
    for(int i = 0; i < 20; i++){
        for(int j = 0; j < 20; j++){

            if(j < 17)
                sum = numlist[i][j] * numlist[i][j+1] * numlist[i][j+2] * numlist[i][j+3];
            if(sum >= max)
                max = sum;

            if(i < 17)
                sum = numlist[i][j] * numlist[i+1][j] * numlist[i+2][j] * numlist[i+3][j];
            if(sum >= max)
                max = sum;

            if(i < 17 && j < 17)
                sum = numlist[i][j] * numlist[i+1][j+1] * numlist[i+2][j+2] * numlist[i+3][j+3];
            if(sum >= max)
                max = sum;

            if(i < 17)
                sum = numlist[i][j] * numlist[i+1][j-1] * numlist[i+2][j-2] * numlist[i+3][j-3];
            if(sum >= max)
                max = sum;

        }
    }

    cout << max << endl;

    return 0;
}
