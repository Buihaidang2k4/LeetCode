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
/*
TH1:
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        if(root == nullptr) return result;


        // Duyet goc
        result.push_back(root->val);

        // Duyet nut con trai 
        if (root->left != nullptr)
        {
            vector<int> leftRel = preorderTraversal(root->left);
            result.insert(result.end(),leftRel.begin(),leftRel.end());
        }
        
        // Duyet nut con phai 
        if (root->right != nullptr)
        {
            vector<int> rightRel = preorderTraversal(root->right);
            result.insert(result.end(),rightRel.begin(),rightRel.end());
        }

        return  result;
    }
};
*/

class Solution {
public:
    void preorder(TreeNode* root,vector<int>& res){
        if (root == NULL) return;

        res.push_back(root->val);

        preorder(root->left,res);
        preorder(root->right,res);

    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> rel;
        preorder(root,rel);        
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
    vector<int> rel = s.preorderTraversal(root);

    for(auto n : rel){
        cout<<n<<" ";
    }
    return 0;
}
/*
Example 1
Input: root = [1,null,2,3]

Output: [1,2,3]

Example 2:

Input: root = [1,2,3,4,5,null,8,null,null,6,7,9]

Output: [1,2,4,5,6,7,3,8,9]

*/