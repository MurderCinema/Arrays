#include <iostream>
#include <array>

using namespace std;
int main(){
    srand(0);
    array<int, 1000> nums;
    for(int i = 0; i < 1000; i++)
        nums[i] = rand()%20;

    for(int i = 0; i < 20; i++)
        if (nums[i] > 5 && nums[i] < 15)
            cout << " " << i;

    return 0;

}
