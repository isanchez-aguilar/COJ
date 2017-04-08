/*
*	User: IsanchezAguilar
*	Problem: COJ 2642 - Divisibility by 3
*/
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int testCases;
	string binary;
	cin >> testCases;
	while(testCases--)
	{
		cin >> binary;
		int count = 0;
		bool even = true;
		int length = binary.length();
		reverse(binary.begin(), binary.begin() + length);
		for(int i = 0; i < length; ++i)
		{
			switch(binary[i])
			{
				case '1':
					switch(even)
					{
						case 1:
							++count;
						break;
						default:
							count += 2;
					}
					count %= 3;
				break;
			}
			even = !even;
		}
		if(count)
			cout << "NO\n";
		else
			cout << "YES\n";
	}
	return 0;
}
