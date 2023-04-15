#include <iostream>
#include <vector>
#include <map>

using namespace std;

int N;
vector<int> v;

void print_v()
{
    cout << "v의 원소 : ";
//    for(int i = 0; i<v.size(); i++)        cout << v[i] << " ";
//    for(auto k : v)  cout << k << " ";
    for(auto i=v.begin(); i!=v.end(); i++) cout << *i << " ";
    cout << endl;
}

int main()
{
    cout << "\n v에 1~3까지 삽입\n";
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    print_v(); // 1 2 3

    cout << "\n\n v의 3번째 위치에 9 삽입\n";
    v.insert(v.begin() + 3, 9);
    print_v(); // 1 4 2 3

    cout << "\n\n v의 마지막 원소 삭제\n";
    v.pop_back();
    print_v(); // 1 4 2

    cout << "\n\n v의 맨 뒤에 5 삽입\n";
    v.push_back(5);
    print_v(); // 1 4 2 6

    cout << "\n\n v의 원소 전체 clear!\n";
    v.clear();
    print_v(); //empty

    return 0;
}
