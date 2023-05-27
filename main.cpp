#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> v;

int main() {
	// v�� �� 0~4 �� �־��ֱ�
	int n; cin >> n;
	v.resize(n);
	for (int i=0; i<n; i++) {
		v[i] = i;
	}

	// ���� �� vector ����, size, capacity ���
	cout << "���� �� vector ���� : ";
	for(auto i = v.begin(); i != v.end(); i++){
        cout << *i << " ";
	}
	cout << "\n";
	cout << "Ȯ���� ���� ���� ���� �߰��� ��� : ";

	for(auto i = v.begin(); i != v.end(); i++)
	cout << *i << " ";

	cout << "\n";
	cout << "size : " << v.size() << "\n";
	cout << "capacity : " << v.capacity() << "\n";
	cout << "============\n";

	// ���� : 0~4(ó������ ��) �� �� 1 ���ֱ�
	remove(v.begin(), v.end(), 1);

	// ���� �� vector ����, size, capacity ���
	cout << "���� �� vector ���� : ";
	for(auto i = v.begin(); i < v.end(); i++){
        cout << *i << " ";
    }
	cout << "\n";
	cout << "Ȯ���� ���� ���� ���� �߰��� ��� : ";
	for(auto i = v.begin(); i < v.end(); i++){
        cout << *i << " ";
	}
	cout << "\n";
	cout << "size : " << v.size() << "\n";
	cout << "capacity : " << v.capacity() << "\n";

    return 0;
}
