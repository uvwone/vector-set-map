#include <iostream> //https://notepad96.tistory.com/25
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    set<int> set;  //a : less<int>
    //set<int, greater<int>> set; //

    set.insert(30);
    set.insert(40);
    set.insert(10);
    set.insert(50);
    set.insert(50);  // x

    for(int i : set) cout << i<< " ";
    cout <<"\n";
    for(auto it = set.begin(); it!= set.end(); it++) cout << *it << " ";
    cout << "\n";

    //search
    //1.
    auto it = set.insert(50); //pair<set<int>::iterator, bool>
    if(it.second) cout << *it.first << " success\n";
    else cout << *it.first << " fail\n";

    return 0;
}
