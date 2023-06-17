#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

struct Person
{
    int age;
    string phone;
    string address;
};

int main()
{
    pair<int, string> p1;
    p1 = make_pair();
    p1 = {1,"°³¶ËÀÌ"};

    cout << p1.first << ',' << p1.second << endl;

    map < string, int > fourth;
    fourth["A"] = 1;
    fourth["C"] = 2;
    fourth["B"] = 3;
    fourth.insert(make_pair("D",4));
    fourth.insert({"E",5});

    fourth["F"];
    fourth["A"] = 8;

    if(fourth["S"] == 3) {

    }


    set<pair<string, int>> s;

    s.insert({"E",9});
    s.insert({"E",3});
    s.insert({"B",20});

    return 0;
}
