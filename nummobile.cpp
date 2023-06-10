#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

void mul(vector<int>& v, int k)
{
    reverse(v.begin(),v.end());
    for(int i = 0; i<v.size(); i++) v[i] *= k;
    for(int i = 0; i<v.size(); i++)
    {
        int mok = v[i] / 10;
        if(mok > 0)
        {
            if(i+1 < v.size())   v[i+1] += mok;
            else v.push_back(mok);
            v[i] %= 10;
        }
    }
    reverse(v.begin(),v.end());
}


string nummobile(vector<int> num)
{
    vector<int> v = num;
    set<vector<int>> s;
    for(int i=0; i<v.size(); i++)
    {
        s.insert(v);
        v.push_back(v.front());   v.erase(v.begin());
//        v.rotate(v.begin(),v.begin()+1,v.end())
//        v.insert(v.begin(),v.back());   v.pop_back();
//        v.rotate(v.begin(),v.end()-1,v.end())
    }

    for(int i = 2; i <= v.size(); i++)
    {
        v = num;
        mul(v,i);
        if(s.find(v) == s.end()) return "NO";
    }

    return "YES";
}


int main()
{
    int N;
    string num;
    vector<int> v;
    cin >> N;
    for(int i=N; i--;)
    {
        cin >> num;
        for(auto t : num) v.push_back(t-'0');
        cout << nummobile(v) << endl;
    }

    return 0;
}
