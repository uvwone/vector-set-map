#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;

    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());

    vector<int> x, y;
    for(auto k : a) x.push_back(k - '0');
    for(auto k : b) y.push_back(k - '0');

    for(int i=0; i<y.size(); i++) x[i] -= y[i];

    while(x.size() > 1 && x.back() == 0) x.pop_back();
    reverse(x.begin(),x.end());
    for(auto k : x)   cout << k;
    return 0;
}
