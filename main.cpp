#include <iostream>
#include <map>

using namespace std;

map<string, int> m;

int main(void) {

	m.insert({ "A", 100 });
	m.insert({ "B", 200 });

	if (m.find("A") != m.end()) cout << "find" << endl;
	else cout << "not find" << endl;

	//인덱스기반
	for (auto iter = m.begin() ; iter !=  m.end(); iter++)
	{
		cout << iter->first << " " << iter->second << endl;
	}
	cout << endl;

	//범위기반
	for (auto iter : m) {
		cout << iter.first << " " << iter.second << endl;
	}

	return 0;
}
