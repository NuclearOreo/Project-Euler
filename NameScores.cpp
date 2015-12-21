#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int main()
{
    ifstream file("names.txt");

    if(!file.is_open()){
        cout << "File not open" << endl;
        exit(EXIT_FAILURE);
    }

    vector<string> list;
    string name = "";

    while(file.peek() != EOF){
        if(file.peek() != 34 && file.peek() != 44){
            name += char(file.get());
        }else{
            file.get();
            if(name != "")
                list.push_back(name);
            name = "";
        }
    }
    file.close();

    sort(list.begin(),list.end());

    int sum = 0;

    for(unsigned i = 0; i < list.size(); i++){
        int score = 0;
        for(unsigned j = 0; j < list[i].length(); j++){
            score += int(list[i][j]) - 64;
        }
        score *= i+1;
        sum += score;
    }

    cout << sum << endl;

    return 0;
}
