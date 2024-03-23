/*
Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2
Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1
Example 3:

Input: nums = [1,3,5,6], target = 7
Output: 4

 nums 1 4 4 5
 i    0 1 2 3
 target = 2

target - num[i] = 2-1 = 1
 , num[i+1] - target = 3-2 = 1
 */
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        for (int i = 0; i <n; i++)
        {
        	if (nums[i] == target ) return i; //Trả về vị trí khi tìm thấy target
        	else if(nums[i] > target) return i; // Trả về vị trí chèn khi vượt qua target
        }
        return n; // Trả về vị trí chèn khi target lớn hơn tất cả phần tử trong mảng
    }
};


int main()
{
	Solution solution;
	vector<int> m = {1,3,5,6};
	
	cout<<"array: ";
	for(auto  a : m)
	{
		cout<<a<<" ";
	}
	
	int target ;
	cout<<"\nRead target: ";
	cin>>target;
	
	int n  = solution.searchInsert(m,target);
	cout<<"Vi tri: "<<n;

	cout<<endl;
	return 0;
}