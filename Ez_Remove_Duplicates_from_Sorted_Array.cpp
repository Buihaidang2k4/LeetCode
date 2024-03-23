/*

Example 1:
Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).

Example 2:
Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
Explanation: Your function should return k = 5, with the first five elements of nums being 0, 1, 2, 3, and 4 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).

*/

#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
    	if(n <= 1) return n;

        // delete Duplicates
        int tmp = 0;// con tro chi vi tri duy nhat
        for (int i = 1; i < n; ++i)
        {
            if (nums[i] != nums[tmp])
            {
                tmp++;
                nums[tmp] = nums[i];// di chuyen phan tu khac vao vi tri dau tien cua day duy nhat
            }
        }
        
        // Xoa phan tu du thua sau tmp
        nums.erase(nums.begin() + tmp + 1,nums.end());

        // Tra ve kich thuoc moi cho vector
    	return tmp+1;
    }
};

int main()
{
	Solution solution;

	std::vector<int> nums = {1,1,2, 2,3, 3, 4, 5};

	std::cout << "Before removing: ";
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
	int newSize = solution.removeDuplicates(nums);
    
    std::cout << "After removing:  ";
    for (int i = 0; i < newSize; ++i) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}