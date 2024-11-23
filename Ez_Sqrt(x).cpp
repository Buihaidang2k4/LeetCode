/*
Example 1:

Input: x = 4
Output: 2
Explanation: The square root of 4 is 2, so we return 2.
Example 2:

Input: x = 8
Output: 2
Explanation: The square root of 8 is 2.82842..., and since we round it down to the nearest integer, 2 is returned.
 */

#include <iostream>
#include<math.h>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
       double guess = x / 2; // Giá trị ban đầu của guess

    while (true) {
        double new_guess = (guess + x / guess) / 2; // Cập nhật giá trị mới cho guess
        if (fabs(new_guess - guess) < 0.0001) // Kiểm tra điều kiện dừng
            break;
        guess = new_guess; // Cập nhật guess cho lần lặp tiếp theo
    }
    return guess;
    }
};

int main()
{
	Solution solution;
	int x; cin>>x;

	int n = solution.mySqrt(x);
	cout<<"sqrt(x): "<<n;
	cout<<endl;
	return 0;
}