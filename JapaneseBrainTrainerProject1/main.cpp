#include <iostream>
#include <ctime>
using namespace std;

int main() {
	
	int answer = 0;

		srand(time(NULL));

		do {
			int num = 1 + rand() % (10 - 1 + 1);

			int num2 = 1 + rand() % (10 - 1 + 1);

			int num3 = 1 + rand() % (10 - 1 + 1);
		

			cout << num << "-" << num2 << "+" << num3 << "= ";
			cin >> answer;

			cout << num << "+" << num2 << "-" << num3 << "= ";
			cin >> answer;
		} while (answer!=100);
	
}