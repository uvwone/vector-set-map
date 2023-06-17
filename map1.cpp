#include <iostream>
#include <map>

using namespace std;

map<string, int> m;

int main(void) {

	m.insert({ "A", 100 });
	m.insert({ "B", 200 });

	if (m.find("A") != m.end()) cout << "find" << endl;
	else cout << "not find" << endl;

	//ÀÎµ¦½º±â¹Ý
	for (auto iter = m.begin() ; iter !=  m.end(); iter++)
	{
		cout << iter->first << " " << iter->second << endl;
	}
	cout << endl;

	//¹üÀ§±â¹Ý
	for (auto iter : m) {
		cout << iter.first << " " << iter.second << endl;
	}

	return 0;
}
