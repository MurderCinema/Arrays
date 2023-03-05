#include <iostream>
#include <array>

using namespace std;

int main()
{
    srand(0);
    array<int, 10> nums;
    for(int i = 0; i < 10; i++)
        nums[i] = rand() %10;
    int  max = INT_MIN;
    for (int i: nums)
    {

        if (i > max) {
            max = i;
        }
    }

    cout << "The max element is " << max << endl;

    return 0;
}
