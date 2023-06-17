#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> set;
    set.insert(30);
    set.insert(40);
    set.insert(10);
    set.insert(50);

    if(set.find(50) == set.end()) cout << "element 50 is not here";
        else cout << "element 50 is here";
    return 0;
}
