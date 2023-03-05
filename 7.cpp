#include <iostream>
#include <array>
#include <numeric>

using namespace std;

int main()
{
    srand(0);
    array<int, 10> nums;
    for(int i = 0; i < 10; i++)
        nums[i] = rand() %10;
    float sum = accumulate(begin(nums), end(nums), 0, plus<int>());
    float sred = sum / 10;
    cout << "Sred = " << sred;

    return 0;
}
