#include <iostream>
#include <array>

using namespace std;
int main()
{
    array <int,10> mas;
    int sum_for_9 = 0;
    int sum_for_20 = 0;
    int sum_for_3 = 0;

    for(int i = 0; i < 40 ; i++)
    {
        mas[i] = rand() % 40;
    }

    for(int i=0;i<10;i++){
        if(mas[i]>9)
        {
            sum_for_9 += mas[i];
        }
    }
    cout << ">5 :" << sum_for_9 << endl;

    for(int i=0;i<10;i++){
        if(mas[i]<20)
        {
            sum_for_20 += mas[i];
        }
    }
    cout << "<7 :" << sum_for_20 << endl;

    for(int i=0;i<10;i++){
        if(mas[i]<3)
        {
            sum_for_3 += mas[i];
        }
    }
    cout << ">3 :" <<sum_for_3 << endl;
    return 0;
}
