/*
Input: nums = [3,2,2,3], val = 3
Output: 2, nums = [2,2,_,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 2.
It does not matter what you leave beyond the returned k (hence they are underscores).

Input: nums = [0,1,2,2,3,0,4,2], val = 2
Output: 5, nums = [0,1,4,0,3,_,_,_]
Explanation: Your function should return k = 5, with the first five elements of nums containing 0, 0, 1, 3, and 4.
Note that the five elements can be returned in any order.
It does not matter what you leave beyond the returned k (hence they are underscores).
*/


#include <iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums,int val) {
    	int n = nums.size();
    	if(n == 1) 
        {
            if(nums[0] == val) return 0;
            else return n;
        }
    	// int index = 0;
       	// for (int i = 0; i < n; ++i)
       	// {
       	// 	// So sánh với val nếu không bằng val thì đẩy lên đầu
       	// 	if(nums[i] != val)
       	// 	{
	    //    		nums[index] = nums[i];	
       	// 		index++;
       	// 	}

       	// }
       	while(true)
       	{
       		auto it = find(nums.begin(),nums.end(),val);

       		if (it != nums.end())
       		{
       			nums.erase(it);
       		}
       		else break;
       	}
       	return nums.size();
       	// Cập nhật lại kích thước cho vector
       	// nums.erase(nums.begin() + index,nums.end());
        // Tra ve kich thuoc moi cho vector
    	// return index;
    }
};

int main()
{
	Solution solution;

	std::vector<int> nums = {1,1,2,2,3,3,4,5};

	std::cout << "Before removing: ";
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
	int n  = solution.removeElement(nums,1);
    

    std::cout << "After removing:  ";
    for (int i = 0; i < n; ++i) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}