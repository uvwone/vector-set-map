#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> v = {1};

void two(int k)
{
    for(int i = 0; i<v.size(); i++) v[i] *= k;
    for(int i = 0; i<v.size(); i++)
    {
        int mok = v[i] / 10;
        if(mok > 0)
        {
            if(i+1 < v.size()) v[i+1] += mok;
            else v.push_back(mok);
            v[i] %= 10;
        }
    }
}

int main()
{
    int N;
    cin >> N;
    for(int i = 1; i<=N; i++) two(i);
    for(int i = v.size(); i--;) cout << v[i];
    return 0;
}
