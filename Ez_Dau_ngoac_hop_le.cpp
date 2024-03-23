/*
Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "()[]{}"
Output: true
Example 3:

Input: s = "(]"
Output: false
*/

#include <bits/stdc++.h>
#include <iostream>
#include<vector>
#include<string>
#include<stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0 ; i < s.length(); i++)
        {
            if(!st.empty())
            {
            	// Các trường hợp thử nếu không dấu ngược ở đầu thì xoá và false
                if(s[i] == ')' && st.top() == '(') st.pop();
                else if(s[i] == ']' && st.top() == '[') st.pop();
                else if(s[i] == '}' && st.top() == '{') st.pop();
                else st.push(s[i]);
            }else if(s[i] == '(' || s[i] == '[' || s[i] == '{') // Nếu phần tử đầu tiên là dấu mở thì thêm vào stack
            {
               st.push(s[i]);
            }else return false;

        }

        if(st.empty()) return true;
        return false;
    }
};

int main()
{
	Solution kh;

	string input;
	getline(cin,input);	

	if (kh.isValid(input)) cout<<"true";
	else cout<<"false";


	cout<<endl;
	return 0;
}