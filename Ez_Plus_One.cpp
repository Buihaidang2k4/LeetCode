
/*
 

Example 1:

Input: digits = [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
Incrementing by one gives 123 + 1 = 124.
Thus, the result should be [1,2,4].
Example 2:

Input: digits = [4,3,2,1]
Output: [4,3,2,2]
Explanation: The array represents the integer 4321.
Incrementing by one gives 4321 + 1 = 4322.
Thus, the result should be [4,3,2,2].
Example 3:

Input: digits = [9]
Output: [1,0]
Explanation: The array represents the integer 9.
Incrementing by one gives 9 + 1 = 10.
Thus, the result should be [1,0].
 */

#include <iostream>
#include<string>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& v) {
    	int n = v.size();
    	for (int i = n-1; i >= 0 ; i--)
    	{
    		if (v[i]+1 == 10)
    		{
    			v[i] = 0;
    		}else{
    			v[i]++;
    			return v;// Nếu phần tử cuối cùng được cộng trả luôn về mảng
    		}
    	}
    	v.insert(v.begin(),1); // nếu chạy hết mảng chưa được trả về thì trong mảng đg là 999 
    	return v; 
    }
};

int main()
{
	Solution solution;
	vector<int> v = {9};

	vector<int> n =  solution.plusOne(v);
	
	for (int i = 0; i < v.size(); i++)
	{
		cout<<n[i]<<" ";
	}

	cout<<endl;
	return 0;
}