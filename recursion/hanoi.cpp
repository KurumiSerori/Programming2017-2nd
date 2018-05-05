#include <iostream>

using namespace std;

int hanoi(int t)
{
	if(t == 1) {
		return 1;
	}
	else {
		return 2 * hanoi(t-1) + 1;
	}
}

int main()
{
	cout << "Input a number" << endl;
	int input;
	cin >> input;
	cout << hanoi(input) << endl;	/* or you can say
									   int answer = hanoi(input);
									   cout << answer << endl;
									*/
	return 0;
}
