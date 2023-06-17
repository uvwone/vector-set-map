#include <iostream>
#include <vector>
#include <set>

using namespace std;
//°³¼ö Å½»ö
int main()
{
    set<int> set;

    set.insert(30);
    set.insert(40);
    set.insert(10);
    set.insert(50);

    cout << "element 60 count: " << set.count(60) << "\n";
    return 0;
}
