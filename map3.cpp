#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<char, int> m;
    map<char, int> :: iterator it;

    m['Q'] = 2;                     //m : (0,2)
    m.insert(make_pair('A', 1));   //m : (A,1) (B,2)
    m['C'] = 3;                     //m : (A,1) (B,2) (C,3)

    m.erase('A');                   //m : (B,2) (C,3)

    //m전체를 순회하며 key와 value 출력
    for(it = m.begin(); it != m.end(); it++)
        cout << it->first << ' ' <<it->second << endl;

    if(m.find('B') != m.end())
        cout << "key값이 B인 노드가 존재합니다." << endl;
    else
        cout << "key값이 B인 노드가 존재하지 않습니다." << endl;
    return 0;
}
