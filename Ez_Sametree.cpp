#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;
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
    
    bool isSameTree(TreeNode* a, TreeNode* b) {
        if(a == NULL && b == NULL) return true;

        if(a == NULL || b == NULL) return false;
        if((a->val == b->val) && isSameTree(a->left,b->left) && isSameTree(a->right,b->right) )
        return true;
        return false;        
    }
};
int main() {
    ios::sync_with_stdio(false); // Tối ưu tốc độ I/O
    cin.tie(nullptr);

    TreeNode* a  = new TreeNode(5);
    a->left = new TreeNode(5);
    a->right = new TreeNode(5);

 	TreeNode* b  = new TreeNode(5);
    b->left = new TreeNode(5);
    b->right = new TreeNode(5);

    Solution s;
    bool rel = s.isSameTree(a,b);
    cout<<rel;
    return 0;
}
