#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> v(10) = {4, 7, 2, 5, 10, 8, 1, 6, 3};
    cout << "정렬 전 :";
    for(auto i = v.rbegin(); i < v.rend(); i++){
        cout << *i << " ";
    }
    cout << endl;
    sort(v.begin(), v.end());
    cout << "정렬 후: ";
    for(auto i = v.begin(); i < v.end(); i++){
        cout << *i << " ";
    }
    cout << endl;
    return 0;
}
