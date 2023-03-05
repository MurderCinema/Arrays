#include <iostream>
#include <array>

int main()
{
    std :: array <int,10> arr1;
    std :: array <int,10> arr2;
    std :: array <int,10> arr;
    for(int  i = 0; i < 10 ; i++)
    {
        arr1[i] = rand() % 20;
    }

    for(int  i = 0; i < 10 ; i++)
    {
        arr2[i] = rand() % 20;
    }

    for(int  i = 0; i < 10 ; i++)
    {
        arr[i] = arr1[i] * arr2[i];
        std :: cout << arr[i] << std :: endl;
    }
    return 0;
}
