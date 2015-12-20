#include <iostream>

using namespace std;

int main()
{
    int count = 0, days_in_month, days_passed = 2;

    for(int i = 1901; i <= 2000; i++){
        for(int j = 1; j <= 12; j++){
            if(j == 4 || j == 6 || j == 9 || j == 11)
                days_in_month = 30;
            else if(j == 2){
                if(i % 400 == 0 || (i % 4 == 0 && i % 100 != 0))
                    days_in_month = 29;
                else
                    days_in_month = 28;
            }else
                days_in_month = 31;
            if(days_passed % 7 == 0)
                count++;
            days_passed += days_in_month;
        }
    }

    cout << count << endl;
    return 0;
}
