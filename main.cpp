#include <iostream>
#include <vector>
#include <map>

using namespace std;

int N;
vector<int> v;

void print_v()
{
    cout << "v�� ���� : ";
//    for(int i = 0; i<v.size(); i++)        cout << v[i] << " ";
//    for(auto k : v)  cout << k << " ";
    for(auto i=v.begin(); i!=v.end(); i++) cout << *i << " ";
    cout << endl;
}

int main()
{
    cout << "\n v�� 1~3���� ����\n";
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    print_v(); // 1 2 3

    cout << "\n\n v�� 3��° ��ġ�� 9 ����\n";
    v.insert(v.begin() + 3, 9);
    print_v(); // 1 4 2 3

    cout << "\n\n v�� ������ ���� ����\n";
    v.pop_back();
    print_v(); // 1 4 2

    cout << "\n\n v�� �� �ڿ� 5 ����\n";
    v.push_back(5);
    print_v(); // 1 4 2 6

    cout << "\n\n v�� ���� ��ü clear!\n";
    v.clear();
    print_v(); //empty

    return 0;
}
