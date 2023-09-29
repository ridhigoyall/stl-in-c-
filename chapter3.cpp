#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
    map<string, int> marksMap;
    marksMap["Ridhi"] = 98;
    marksMap["goya"] = 88;
    marksMap["West"] = 48;

    map<string, int>::iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << endl;
    }
    return 0;
}