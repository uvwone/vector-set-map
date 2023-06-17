#include <iostream>
#include <vector>
#include <set>
#include <math.h>

using namespace std;
set<int> s;

void factor(int k)
{
    int r = sqrt(k);
    for(int i = 1; i <= r; i++) {
        if(k % i == 0)
        {
            s.insert(i);
            s.insert(k/i);
        }
    }
}

int main()
{
    int n;
    cin >> n;
    factor(n);
    for(auto k : s) cout << k << ' ';
    return 0;
}
