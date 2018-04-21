#include <iostream>		// std::cin and std::cout is defined in this file
				// iostream in C++ is like stdio.h in C

using namespace std;	// cin and cout are two objects in namespace std.

int fib(int k);		// or you can say
			// int fib(int);
			// this is called a declaration声明
			// it tells us some info about the function fib.
			// we can know fib() uses an int parameter形式参数（形参） and returns an int result.
			// after a declaration, you can use it in main() and define fib() in other place.
			// or you have to define fib() before you use it in main().


int main()	// here is the place where a program starts from.
{
	int input;		// here we define an integer named 'input'.
	cout << "Input a number: " << endl;	// and we print something onto the screen to tell people to input a number.
	cin >> input;	/// NOTE: you should always first define and then use!
	int ans = fib(input);	// in this step, function main() call the function fib(),
				// and pass the argument实际参数（实参） to the function, 
				// here, the argument is input.
				// the function fib() takes input as its parameter and COPY the value of 'input' to 'k'.
				// then, the control flow goes to function fib().
				// When fib(input) returns, it give us the answer we want, and this is abstract抽象.
	cout << "Answer is: " << ans << endl;
	return 0;
}

int fib(int k)		// int fib(int k) {...}
			// This is called a definition定义, it defines how this function works.
{
	if (k == 0 || k == 1) {
		return 1;
	}	// this pair of brackets can be ommitted
	else {
		return fib(k-2) + fib(k-1);		// if k is too large, we can devide question k to k-2 and k-1.
	}	// this pair of brackets can be ommitted, too.
}
