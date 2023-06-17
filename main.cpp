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

    //m��ü�� ��ȸ�ϸ� key�� value ���
    for(it = m.begin(); it != m.end(); it++)
        cout << it->first << ' ' <<it->second << endl;

    if(m.find('B') != m.end())
        cout << "key���� B�� ��尡 �����մϴ�." << endl;
    else
        cout << "key���� B�� ��尡 �������� �ʽ��ϴ�." << endl;
    return 0;
}
