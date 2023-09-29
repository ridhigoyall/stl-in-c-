// Vector in stl
#include <iostream>
#include <vector>
using namespace std;
template <class T>
void display(vector<T> &v)
{
    cout << "Displaying the vector" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        // cout << v.at(i) << " ";
    }
    cout << endl;
}

int main()
{
    // Ways to create a vector
    vector<int> vec1; // zero length vector
    int element, size = 5;
    // cout << "Enter the size of an array " << endl;
    // cin >> size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter the elements to add in a vector: ";
    //     cin >> element;
    //     vec1.push_back(element);
    // }
    // vec1.pop_back();
    // vector<int> vec2;
    // display(vec1);
    // vector<int>::iterator iter = vec1.begin();
    // vec1.insert(iter, 5, 566);
    // display(vec1);

    vector<char> vec2(4); // 4elements character vector
    // vec2.push_back('5');
    // display(vec2);

    vector<char> vec3(vec2); // 4 elements character vector from vec2
    // display(vec3);

    vector<int> vec4(6, 13); // 6 element vector of 3s
    display(vec4);

    return 0;
}