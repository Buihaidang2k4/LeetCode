#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <unordered_map>
#include <chrono>

// Sử dụng namespace để tránh gõ lặp "std::"
using namespace std;

// Tạo alias để rút ngắn mã
using ll = long long;          // Định nghĩa kiểu số nguyên lớn
using vi = vector<int>;        // Vector số nguyên
using vll = vector<ll>;        // Vector số nguyên lớn
using umap = unordered_map<int, string>; // Bảng băm không tuần tự

// Đo thời gian thực thi
#define START_TIMER auto start = chrono::high_resolution_clock::now();
#define END_TIMER   auto end = chrono::high_resolution_clock::now(); \
                    cout << "Bắt đầu thực thi: " \
                         << chrono::duration_cast<chrono::microseconds>(end - start).count() \
                         << " microseconds" << endl;

// Macro tối ưu hóa vòng lặp
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define RFOR(i, a, b) for (int i = (a); i > (b); --i)

// Hàm đọc nhanh
inline void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

class Solution {
public:

    bool isSymmetric(TreeNode* root) {
    	if(!root) return true;

	    return check(root->left,root->right);
    }
private:
	bool check(TreeNode *r1 , TreeNode *r2){
		if(!r1 && !r2) return true;
		if(!r1 || !r2) return false;
		return (r1->val == r2->val) && check(r1->left,r2->right) && check(r1->right,r2->left);
	}
};

// Hàm chính
int main() {
    fastIO(); // Tăng tốc độ đọc/ghi
    START_TIMER; // Bắt đầu đo thời gian
   	


	TreeNode* root = new TreeNode(1);
	root->left = new TreeNode(2);
	root->right = new TreeNode(2);
	root->left->left = new TreeNode(3);
	root->left->right = new TreeNode(4);
	root->right->left = new TreeNode(4);
	root->right->right = new TreeNode(3);

Solution solution;
cout << solution.isSymmetric(root) << endl;
    cout << endl;
    END_TIMER; 
    return 0;
}

