#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v(10);
    for(int i = 0; i < 10; i++){
        v[i] = i;
    }
    cout << "����� ��: ";
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    v.erase(v.begin() + 5);
    cout << "5�� �ε��� ���� ��: ";
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}
