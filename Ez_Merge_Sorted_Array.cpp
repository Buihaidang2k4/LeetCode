// //Example 1:
// /*
// Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
// Output: [1,2,2,3,5,6]
// Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
// The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.
// Example 2:

// Input: nums1 = [1], m = 1, nums2 = [], n = 0
// Output: [1]
// Explanation: The arrays we are merging are [1] and [].
// The result of the merge is [1].
// Example 3:

// Input: nums1 = [0], m = 0, nums2 = [1], n = 1
// Output: [1]
// Explanation: The arrays we are merging are [] and [1].
// The result of the merge is [1].
// Note that because m = 0, there are no elements in nums1. The 0 is only there to ensure the merge result can fit in nums1.
// */

// #include <iostream>
// #include <vector>

// using namespace std;

// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//     	vector<int> nums3; 
//         if(m && n == 0 ) return;

//         int i=0,j=0;

//         while(i<m || j<n){
//         	if(nums1[i] == 0){
//         		nums1.erase(nums1.begin() + i - 1);
//         	}
        	
//         	if(nums2[i] == 0){
//         		nums2.erase(nums2.begin() + j - 1);
//         	}	
//         	i++;
//         	j++;
//         }


//         while(i<m && j<n){
//         	if(nums1[i] <= nums2[j]){
//         		nums3.push_back(nums1[i]);
//         		i++;
//         	}else{
//         		nums3.push_back(nums2[j]);
//         		j++;
//         	}

//         }

//         while(i<m)
//         {
//         	nums3.push_back(nums1[i]); i++;
//         }

//  		while(j<n)
//         {
//         	nums3.push_back(nums2[i]); j++;
//         }

//          // Copy elements of nums3 back to nums1
//         for(int k = 0; k < m + n; k++) {
//             nums1[k] = nums3[k];
//         }

//     }
// };


// int main()
// {
// 	Solution solution;
// 	vector<int> nums1 = {1,2,3,0,0,0};
// 	vector<int> nums2 = {2,5,6};
// 	int m = 3;
// 	int n = 3;

// 	solution.merge(nums1, m, nums2, n);
//     for(int num : nums1) {
//         cout << num << " ";
//     }

//     cout<<endl;
//     return 0;
// }


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         if (m == 0 && n == 0) return;

//         int i = 0, j = 0;
//         while (i < m || j < n) {
//             if (i < m && nums1[i] <= 0) {
//                 i++;
//             } else if (j < n && nums2[j] <= 0) {
//                 j++;
//             } else {
//                 if (i < m && j < n) {
//                     if (nums1[i] <= nums2[j]) {
//                         nums1.push_back(nums1[i]);
//                         i++;
//                     } else {
//                         nums1.push_back(nums2[j]);
//                         j++;
//                     }
//                 } else if (i < m) {
//                     nums1.push_back(nums1[i]);
//                     i++;
//                 } else {
//                     nums1.push_back(nums2[j]);
//                     j++;
//                 }
//             }
//         }

//         // Xóa tất cả các số 0 khỏi nums1
//         nums1.erase(remove(nums1.begin(), nums1.end(), 0), nums1.end());
//         // Xóa các phần tử ban đầu của nums1
//         nums1.erase(nums1.begin(), nums1.begin() + m);
//     }
// };
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int j = 0, i = m; j<n; j++){
            nums1[i] = nums2[j];
            i++;
        }
        sort(nums1.begin(),nums1.end());
    }
};
int main() {
    Solution solution;
    vector<int> nums1 = {-1,0,0,3,3,3,0,0,0};
    vector<int> nums2 = {1,2,2};
    int m = 6;
    int n = 3;

    solution.merge(nums1, m, nums2, n);
    for (int num : nums1) {
        cout << num << " ";
    }

    cout << endl;
    return 0;
}
