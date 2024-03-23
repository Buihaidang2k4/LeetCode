/*
Example 1:
true nếu đọc từ trái sang phải và phải sang trái giống nhau

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.

*/

#include <bits/stdc++.h>
using namespace std;
using dd = double;

class Solution {
public:
    bool isPalindrome(int x) {
        int tmp ;
        int res = 0;
        int n = x;
        if(x<0) return false;
        while(x)
        {
            tmp = x%10;
		    res = res * 10 + tmp;
		    x = x/10;
        }
        
        return n == res;
    }
};

int main()
{
	Solution A;
	int x;
	cout<<"Nhap x:";
	cin>>x;
 
	cout<<A.isPalindrome(x);

	cout<<endl;
	return 0;
}



