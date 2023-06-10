#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> v;

void nummobile()
{
    for(int i = 0; i < v.size(); i++)
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
    int N, num;
    cin >> N >> num;

    for(int i = 0; i < N; i++) nummobile();
    for(int i = v.size(); i--;) cout << v[i];
    return 0;
}
