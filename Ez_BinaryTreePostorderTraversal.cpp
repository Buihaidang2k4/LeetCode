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
    vector<int> rel;
    vector<int> postorderTraversal(TreeNode* root) {
         if (root != NULL)
        {
            postorderTraversal(root->left);
            postorderTraversal(root->right);
            rel.push_back(root->val);
        }
        return rel;
    }
};

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);

    Solution s;
    vector<int> rel = s.postorderTraversal(root);

    for(auto n : rel){
        cout<<n<<" ";
    }
    return 0;
}
/*


*/