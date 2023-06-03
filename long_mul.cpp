#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    vector<int> x, y,z(a.size()+b.size());
    for(auto k : a) x.push_back(k - '0');
    for(auto k : b) y.push_back(k - '0');

    for(int i=0; i<x.size(); i++)
    {
        for(int j=0; j<y.size(); j++)
        {
            z[i+j] += x[i] * y[j];
       }
    }

    for(int k=0; k<z.size(); k++)
    {
        z[k+1] += z[k] / 10;
        z[k] %= 10;
    }

    while(z.size() > 1 && z.back() == 0) z.pop_back();

    reverse(z.begin(), z.end());
    for(auto k : z) cout << k;
    return 0;
}
