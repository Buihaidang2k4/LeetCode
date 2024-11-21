/*
Example 1:
Input: a = "11", b = "1"
Output: "100"
Example 2:

Input: a = "1010", b = "1011"
Output: "10101"
 */

#include <iostream>
#include <string.h>
#include<math.h>
#include <vector>
using namespace std;

class Solution {
public:
	// Tổng hai dãy nhị phân
    string addBinary(string a, string b) {
		 int carry = 0;
        string result = "";

        int i = a.size() - 1;
        int j = b.size() - 1;

        // Duyệt qua cả hai chuỗi từ phải sang trái
        while (i >= 0 || j >= 0 || carry > 0) {
            int sum = carry;

            if (i >= 0)
                sum += a[i--] - '0';
            if (j >= 0)
                sum += b[j--] - '0';

            // Tính toán bit hiện tại của tổng và cập nhật bit nhớ
            result = to_string(sum % 2) + result;
            carry = sum / 2;
        }

        return result;

    }
};

int main()
{
	Solution solution;
	string a = "0";
	string b = "0";

	string sum = solution.addBinary(a,b);

	cout<<"Sum: "<<sum;

	cout<<endl;
	return 0;
}