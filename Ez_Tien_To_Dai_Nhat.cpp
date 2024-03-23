// Ví dụ 1:

// Đầu vào: strs = ["flower","flow","flight"]
//  Đầu ra: "fl"
// Ví dụ 2:

// Đầu vào: strs = ["dog","racecar","car"]
//  Đầu ra: ""
//  Giải thích: Không có tiền tố chung giữa các chuỗi đầu vào.

#include <iostream>
#include<vector>
#include<string>
using namespace std;

// Tìm kiếm tiền tố chung dài nhất
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string tmp;

    	if (strs.empty()) {
            return tmp; // Trả về chuỗi rỗng nếu vector là rỗng
        }


       	// Duyệt qua các ký tự của chuỗi đầu tiên
        for (int i = 0; i < strs[0].size(); ++i) {
            char currentChar = strs[0][i];

            // So sánh với các ký tự tương ứng trong các chuỗi khác
            for (int j = 1; j < strs.size(); ++j) {
                if (i >= strs[j].size() || strs[j][i] != currentChar) {
                    return tmp; // Trả về kết quả hiện tại nếu không khớp
                }
            }

            // Thêm ký tự vào chuỗi kết quả
            tmp += currentChar;
        }

        return tmp;
    }
};


int main()
{
	Solution A;
	vector<string> strs;
	
	int n; cin>>n;
	cin.ignore();
	for (int i = 0; i <n ; ++i)
	{
		string input;
        getline(cin, input);
        strs.push_back(input);
	}

	for(int i = 0;i<n;i++)
	{
		cout<<strs[i]<<" ";
	}

	string tmp =  A.longestCommonPrefix(strs);
	cout<<"\nTrung ky tu: "<<tmp;


	cout<<endl;
	return 0;
}