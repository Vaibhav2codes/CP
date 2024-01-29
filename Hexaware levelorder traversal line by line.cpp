#include <iostream>
#include <queue>
#include <stack>
#include <vector>
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Function to build a binary tree from level order traversal
TreeNode* buildTreeFromLevelOrder(const vector<int>& levelOrder) {
    if (levelOrder.empty() || levelOrder[0] == -1) {
        return nullptr;
    }

    TreeNode* root = new TreeNode(levelOrder[0]);
    queue<TreeNode*> q;
    q.push(root);

    int i = 1;

    while (!q.empty() && i < levelOrder.size()) {
        TreeNode* current = q.front();
        q.pop();

        if (levelOrder[i] != -1) {
            current->left = new TreeNode(levelOrder[i]);
            q.push(current->left);
        }
        i++;

        if (i < levelOrder.size() && levelOrder[i] != -1) {
            current->right = new TreeNode(levelOrder[i]);
            q.push(current->right);
        }
        i++;
    }

    return root;
}

void spiralLevelOrderTraversal(TreeNode* root) {
    if (!root) {
        return;
    }
    bool lefttorightflag =false;
    queue<TreeNode*> q;
    q.push(root);
    while(q.empty()==false){
        vector<int> temp;
        int s=q.size();
        for(int i=0;i<s;i++){
        TreeNode* curr=q.front();
        q.pop();

        temp.push_back(curr->val);

        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right != NULL){
            q.push(curr->right);
        }
        }
        if(lefttorightflag==false){
            reverse(temp.begin(),temp.end());
        }
        for(auto x:temp){
            if(x!=-1) cout<<x<<" ";
        }
        lefttorightflag=!lefttorightflag;
    }
}

int main() {
    int height;
    cin >> height;

    vector<int> levelOrder;
    if(height==-1){
        cout<<"NULL";
    }
    else{
    for (int i = 0; i <= height ; i++) {
        for(int j=1;j<=pow(2,i);j++){
        int nodeValue;
        cin >> nodeValue;
        levelOrder.push_back(nodeValue);
    }
    }
    TreeNode* root = buildTreeFromLevelOrder(levelOrder);
    spiralLevelOrderTraversal(root);}

    return 0;
}
