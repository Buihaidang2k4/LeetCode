/*
Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000

Example 1:

Input: s = "III"
Output: 3
Explanation: III = 3.
Example 2:

Input: s = "LVIII"
Output: 58
Explanation: L = 50, V= 5, III = 3.
Example 3:

Input: s = "MCMXCIV"
Output: 1994
Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.
*/

#include <bits/stdc++.h>
using namespace std;

// Chuyển số la mã thành số nguyên 
class Solution {
public:
    int romanToInt(string s) {
    	map<char,int> values = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
    	int ans = 0;
    	for(int i =0; i < s.length();i++)
    	{
    		if (values[s[i]] < values[s[i+1]]) ans -= values[s[i]];
    		else ans += values[s[i]];
    	}
    	return ans;
    }
};

int main()
{
	Solution A;
	string a;
	cout<<"Nhap ky tu la ma: ";
	getline(cin,a);

	int s = A.romanToInt(a);
	cout<<"\nSo la ma sau khi dich: "<<s;

	cout<<endl;
	return 0;

}