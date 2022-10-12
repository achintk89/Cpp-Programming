// C++ program for factorial of a number ad print string of it
#include <bits/stdc++.h>
using namespace std;

// function to find factorial of given number
string factorial(unsigned int n)
{
	int res = 1, i;
	for (i = 2; i <= n; i++)
		res *= i;
	string s=to_string(res);
	return s;
}

// Driver code
int main()
{
	int num = 5;
	cout << "Factorial of "
		<< num << " is "
		<< factorial(num) << endl;
	return 0;
}

// This code is contributed by Shivi_Aggarwal
