#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(8);

    for(int i = 0; i < v.size(); i++)
        cout << v[i] << en
        dl;

//    for(auto a = v.begin(); a!= v.end(); a++)
//        cout << *a << ' ';

//    for(auto k : v)
//        cout << k << ' ';

//    for (int i = 0; i < v.size(); i++)
//        cout << v[i] << ' ';

    return 0;
}
