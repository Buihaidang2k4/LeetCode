/*
ample 1:

Input: s = "Hello World"
Output: 5
Explanation: The last word is "World" with length 5.
Example 2:

Input: s = "   fly me   to   the moon  "
Output: 4
Explanation: The last word is "moon" with length 4.
Example 3:

Input: s = "luffy is still joyboy"
Output: 6
Explanation: The last word is "joyboy" with length 6.
 
*/


#include <iostream>
#include<string>
#include<vector>
#include<set>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int count = 0;

        int i = n-1;

        // bỏ qua khoảng trắng ở cuối chuỗi
        while( i >= 0 && s[i] ==' ')
        {
            i--;
        }
        
        while( i>=0 && s[i] != ' ')
        {
            count++;
            i--;
        }
        
        return count;

    }
};


int main()
{
    Solution solution;
    string s ="   chaoa em aaa";

    int n = solution.lengthOfLastWord(s);

    cout << "Length of last word: " << n << endl;

    return 0;
}





