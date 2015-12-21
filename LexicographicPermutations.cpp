#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int myints[] = {0,1,2,3,4,5,6,7,8,9};
    int i = 0;

    sort (myints,myints+10);

    do{
      i++;
      if(i == 1000000){
          for(int j = 0; j < 10; j++)
              cout << myints[j];
          cout << endl;
      }
    } while (next_permutation(myints,myints+10));

    return 0;
}
