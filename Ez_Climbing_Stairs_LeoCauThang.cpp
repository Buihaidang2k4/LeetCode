/*
Leo cầu thang
Ví dụ 1:

Đầu vào: n = 2
 Đầu ra: 2
 Giải thích: Có hai cách để leo lên đỉnh.
1. 1 bước + 1 bước
2. 2 bước
Ví dụ 2:

Đầu vào: n = 3
 Đầu ra: 3
 Giải thích: Có ba cách để leo lên đỉnh.
1. 1 bước + 1 bước + 1 bước
2. 1 bước + 2 bước
3. 2 bước + 1 bước
 

Hạn chế:

1 <= n <= 45
 */

#include <iostream>
#include <vector>
using namespace std;

// class Solution {
// public:
//     int climbStairs(int n) {
//      	if (n <= 1) return 1;
//      	return climbStairs(n-1) + climbStairs(n-2);   
//     }

// };




class Solution {
public:
    int climbStairs(int n) {
       if(n<=1) {
       	return 1;
       }

       // Tao vector luu so sach leo tung bac
       vector<int> v(n+1);
       v[0] = 1;
       v[1] = 1;

       // Tinh so cach leo len bac i
       for (int i = 2; i <=n; ++i)
       {
       		v[i] = v[i-1] + v[i-2];
       }

       return v[n];
    }
};

// v[2] = v[i-1] + v[i-2] = v[1] + v[0] = 2
// v[3] = v[2] + v[1] = 3
// v[4] = v[3] + v[2] = 5
//


int main()
{
	Solution solution;
	int n; cin>>n;
	int cnt = solution.climbStairs(n);
	cout<<"So cach leo cau thang: ";
	cout<<cnt;


	cout<<endl;
	return 0;
}

