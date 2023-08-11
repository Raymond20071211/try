#include <iostream>;
#include <vector>;
using namespace std;
int main() {
	int time,min,max,item;
	item = 0;
	min = 0;
	max = 0;
	cin >> time;
	vector<int>front;
	vector<int>back;
	vector<int>data;
	for (int i = 0; i < time; i++) {
		int f,b;
		cin >> f >> b;
		if (time == 0) {
			max = b;
		}
		if (f < min) {
			min = f;
		}
		if (b > max) {
			max = b;
		}
		front.push_back(f);
		back.push_back(b);
	}
	for (int i = 0; i < front.size(); i++) {
		front[i]-= min;
	}
	for (int i = 0; i < back.size(); i++) {
		back[i] -= min;
	}
	max -= min;
	for (int i = 0; i <= max; i++) {
		data.push_back(0);
	}
	for (int i = 0; i < data.size(); i++) {
		for (int k = 0; k < time; k++) {
			if (i >= front[k] && i < back[k] && data[i] == 0) {
				data[i] = 1;
				item++;
				break;
			}
		}
	}
	cout << item;
}