#include <iostream>
using namespace std;
int fibonachy(int x) {             
	if (x ==0)
		return x;
	if (x == 1)
		return x;
	else
		return fibonachy(x - 1) + fibonachy(x - 2);
}

int main() {
	int x = 0;
	int s = 0;
	cout << "Введите число: " << endl;
	cin >> x;
	while (s < x) {
		cout << fibonachy(s) << endl;
		s++;
	}
	return 0;
}
