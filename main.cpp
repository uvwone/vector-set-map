#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> v;

int main() {
	// v에 값 0~4 값 넣어주기
	int n; cin >> n;
	v.resize(n);
	for (int i=0; i<n; i++) {
		v[i] = i;
	}

	// 삭제 전 vector 값들, size, capacity 출력
	cout << "삭제 전 vector 값들 : ";
	for(auto i = v.begin(); i != v.end(); i++){
        cout << *i << " ";
	}
	cout << "\n";
	cout << "확인을 위해 뒤의 값들 추가로 출력 : ";

	for(auto i = v.begin(); i != v.end(); i++)
	cout << *i << " ";

	cout << "\n";
	cout << "size : " << v.size() << "\n";
	cout << "capacity : " << v.capacity() << "\n";
	cout << "============\n";

	// 삭제 : 0~4(처음부터 끝) 값 중 1 없애기
	remove(v.begin(), v.end(), 1);

	// 삭제 후 vector 값들, size, capacity 출력
	cout << "삭제 후 vector 값들 : ";
	for(auto i = v.begin(); i < v.end(); i++){
        cout << *i << " ";
    }
	cout << "\n";
	cout << "확인을 위해 뒤의 값들 추가로 출력 : ";
	for(auto i = v.begin(); i < v.end(); i++){
        cout << *i << " ";
	}
	cout << "\n";
	cout << "size : " << v.size() << "\n";
	cout << "capacity : " << v.capacity() << "\n";

    return 0;
}
