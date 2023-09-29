#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;
int main()
{
    // function object is also called functor
    int arr[] = {1, 3, 43, 2, 35, 23};
    sort(arr, arr + 6);                 // asending order
    sort(arr, arr + 6, greater<int>()); // Decending order

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}