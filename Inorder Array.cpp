//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


// } Driver Code Ends
/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
}; */

class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    vector<int> inOrder(Node* root) {
        // Your code here
        vector<int> ans;
        if(root!=NULL){
            vector<int> leftT=inOrder(root->left);
            ans.insert(ans.end(),leftT.begin(),leftT.end());
            ans.push_back(root->data);
            vector<int> rightT=inOrder(root->right);
            ans.insert(ans.end(),rightT.begin(),rightT.end());
            
        }
        return ans;
    }
};

