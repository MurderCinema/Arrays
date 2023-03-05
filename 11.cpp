#include <iostream>
#include <array>

int main()
{
    std :: array <int,10> arr;
    int sum = 0;
    for(int i = 0; i < 10 ; i++)
    {
        arr[i] = rand() % 20;
        sum += arr[i];
    }
    int srednee = sum / 10;

    for(int i = 0; i< 10; i++)
    {
        if(arr[i] < srednee)
        {
            std :: cout << arr[i] << std :: endl;
        }
    }
    return 0;
}
