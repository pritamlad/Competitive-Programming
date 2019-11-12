/*Chef is so good at programming that he won almost all competitions. With all the prizes, Chef bought a new house. The house looks like a grid of size N (1-indexed) which consists of N × N rooms containing diamonds. For each room, the room number is equal to the sum of the row number and the column number.

The number of diamonds present in each room is equal to the absolute difference between the sum of even digits and sum of odd digits in its room number. For example, if the room number is 3216, then the number of diamonds present in that room will be |(2+6)-(3+1)| = 4.

You are given the number N. You have to print the total number of diamonds present in Chef's house.
Input

    The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
    The only line of each test case contains a single integer N.

Output

For each test case, print the answer on a separate line.
Constraints

    1 ≤ T ≤ 105
    1 ≤ N ≤ 106

Subtasks

Subtask #1 (15 points):

    1 ≤ T ≤ 10
    1 ≤ N ≤ 1000

Subtask #2 (15 points):

    1 ≤ T ≤ 10
    1 ≤ N ≤ 106

Subtask #3 (70 points): original constraints
Example

Input:

3
1
2
3

Output:

2
12
36

Explanation

Example case 3: There are 9 rooms. Room (1,1) has number 2, room (1,2) has number 3, etc. For each room, the number of diamonds in it is equal to the room number, so the total number of diamonds present is (2+3+4+3+4+5+4+5+6) = 36.*/


#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll f(ll n)
{	
	ll odd = 0;
	ll even = 0;
	while (n)
	{
		
		if (n%2==0)
		{
			even += n%10;
		}
		else 
		{
			odd += n%10;
		}
		n /=10;
	}
	return abs(even-odd);
}

int main()
{	
	#ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

	int t;
	cin >> t;
	ll diamonds[2000005];
	ll prefix[1000005];
	prefix[0]=0;
	for (int i=1;i<1000005; i++)
	{
		prefix[i] = prefix[i-1] +f(i);
	}

	diamonds[0] =0;
	diamonds[1] =2;
	for(int i =2;i<1000005;i++)
	{
		diamonds[i] = diamonds[i-1] +(prefix[2*i-1] - prefix[i])*2+f(2*i);
	}

	while(t--)
	{
		long long int n;
		cin >> n;
		cout << diamonds[n] << endl;
	}
	return 0;
}
