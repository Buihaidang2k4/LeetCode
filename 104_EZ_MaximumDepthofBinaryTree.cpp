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
                    cout << "Starts: " \
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
    int maxDepth(TreeNode* root) {

        if(root == NULL) return 0;
        int right = maxDepth(root->right);
        int left = maxDepth(root->left);

        return 1 + max(left,right);
    }
};

int main() {
    fastIO(); 
    START_TIMER;    
   

    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);

    Solution s;
    int n  = s.maxDepth(root);
    cout<< n;



    cout << endl;
    END_TIMER; 
    return 0;
}
