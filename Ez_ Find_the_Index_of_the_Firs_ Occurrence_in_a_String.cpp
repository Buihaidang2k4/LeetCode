/*
xample 1:

Input: haystack = "sadbutsad", needle = "sad"
Output: 0
Explanation: "sad" occurs at index 0 and 6.
The first occurrence is at index 0, so we return 0.
Example 2:

Input: haystack = "leetcode", needle = "leeto"
Output: -1
Explanation: "leeto" did not occur in "leetcode", so we return -1.
 

Constraints:

1 <= haystack.length, needle.length <= 104
haystack and needle consist of only lowercase English characters.
*/
#include <iostream>
#include<string>
using namespace std;

class Solution {
public:
    // int strStr(string haystack, string needle) {
    //   	  int n = haystack.length();
    //   	  int m = needle.length();

    //   	  if(m == 0) return -1;

    //   	  int index = 0;
    //   	  for (int i = 0; i < n; ++i)
    //   	  {
    //   	  	if (haystack[i] == needle[index] )
    //   	  	{
    //   	  		index++;
    //   	  		if(index == m)
    //   	  		{
    //   	  			return 0;
    //   	  			break;
    //   	  		}
    //   	  	}
    //   	  }
    //   	  return -1;
    // }
    int strStr(string haystack, string needle) {
    int n = haystack.length();// 5
    int m = needle.length();// 3

    if (m == 0) return 0; // needle is empty, return 0

    for (int i = 0; i <= n - m; ++i) {
        for (int j = 0; j < m; ++j) {
            if (haystack[i + j] != needle[j]) {
                break;
            }
        }
        if (j == m) {
            return i; // found needle at index i
        }
    }

    return -1; // needle not found
}

};

int main()
{
	Solution solution;
	string haystack = "leetcode";
	string needle = "leeto";

	int s1 = solution.strStr(haystack,needle);

	cout<<s1;

	cout<<endl;
	return 0;
}