#include <iostream>

using namespace std;

int people[1001];	// such that, this array can save 1000 numbers;

int main()
{
	int input, i, flag, count, pointer;
	cout << "Input the size of Josephus problem:";
	cin >> input;
	if(input > 1000 || input < 1) {	// we need to check the size is between 1 and 1000
		return 1;	// Usually, a return number of main() is not 0 means that there is something wrong.
	}

	for(i = 1; i <= input; i++) {	// we will use people[1] to people[input] in our program.
		people[i] = 2;	// we define that people[i] = 1 that i is dead, while people[i] = 2 that i is alive.
	}	
	flag = 1;
	count = 0;
	pointer = 0;
	while(count < input) {	// the loop ends with count == input
		pointer++;
		if(pointer > input) {	// we simulate a loop from the array.
			pointer = 1;
		}
		if(people[pointer] == 2) {	// find the next person who is alive.
			people[pointer] = flag;
			if(flag == 1) count++;	// count only added here, where we execute someone.
			flag = 3 - flag;	// here, when flag = 1, nextFlag = 2; when flag = 2, nextFlag = 1;
		}
	}
	// The last 'executed' number is the one who lives last.

	cout << "The one lives last has number " << pointer << "." << endl;
	return 0;
}
