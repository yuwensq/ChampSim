#include <vector>
#include <iostream>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    v.push_back(3);
    v.push_back(2);
    v.push_back(4);
    vector<int>::iterator it = v.begin();
    while (it != v.end())
    {
        if (*it != 2)
        {
            it++;
        }
        else
        {
            v.erase(it);
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}