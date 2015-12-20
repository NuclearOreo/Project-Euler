#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    ifstream file("triangle.txt");
    vector< vector<int> > triangle;

    if(file.is_open()){
        int numRow = 1, num;
        while(file.peek() != EOF){
            vector<int> row;
            for(int i = 0; i < numRow; i++){
                file >> num;
                row.push_back(num);
            }
            triangle.push_back(row);
            numRow++;
        }
        file.close();

        for(int a = triangle.size()-1; a >= 1; a--){
            for(int b = 0; b <= a-1; b++){
                if(triangle[a][b] > triangle[a][b+1] )
                    triangle[a-1][b] += triangle[a][b];
                else
                    triangle[a-1][b] += triangle[a][b+1];
            }
        }
        cout << triangle[0][0] << endl;
    }else
        cout << "Fucked up" << endl;

    return 0;
}


