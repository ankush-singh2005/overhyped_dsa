#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left=NULL;
    Node* right=NULL;

    Node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

//inserting into bst
Node* insertintoBST(Node* root, int data){

    //base case
    if(root==NULL){
        root=new Node(data);
        return root;
    }

    //inserting in the right part
    if(data>root->data){
        root->right=insertintoBST(root->right,data);
    }

    //inserting in the left part
    else{
        root->left=insertintoBST(root->left,data);
    }

    return root;
}


//for taking input
void takeinput(Node* &root){
    int data;
    cin>>data;
    while(data!=-1){
        root=insertintoBST(root,data);
        cin>>data;
    }
}

//inorder left->data->right
void inorder(Node* root){
if(root==NULL) return;
inorder(root->left);
cout<<root->data<<" ";
inorder(root->right);
}

//postorder left->right->data
void postorder(Node* root){
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}


//preorder Data->Left->Right
void preorder(Node* root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}


//search from the bst
bool search(Node* root, int num){

    //recursive way.. 
    // if(root==NULL) return false;
    // if(root->data==num) return  true;

    // else if(root->data<num){
    //     return search(root->right,num);
    // }
    // else return search(root->left,num);


    //iterative way.. used for less time complexity
    Node* temp=root;
    while(temp!=NULL){
        if(temp->data==num) return true;

        else if(temp->data<num) temp=temp->right;
        else temp=temp->left;
    }
    return false;

}


//find the min node in a bst
Node* minVal(Node* root){
    Node* temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp;
}

//find the max node in a bst
Node* maxVal(Node* root){
    Node* temp=root;
    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp;
}

//deleting from a bst
Node* deleteFromBST(Node* root, int val){

    //base case
    if(root==NULL) return root;

    if(root->data==val){

        //0 child
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }

        //1 child

        //left child
        if(root->left!=NULL && root->right==NULL){
            Node* temp=root->left;
            delete root;
            return temp;
        }

        //right child
        if(root->left==NULL && root->right!=NULL){
            Node* temp=root->right;
            delete root;
            return temp;
        }


        //2 child
        if(root->right!=NULL && root->left!=NULL){
            int mini=minVal(root->right) -> data;
            root->data=mini;
            root->right=deleteFromBST(root->right, mini);
            return root;
        }
    }

    //data smaller than val
    else if(root->data>val){
        root->left=deleteFromBST(root->left, val);
        return root;
    }

    //data greater than val
    else{
        root->right=deleteFromBST(root->right,val);
        return root;
    }

}

int main(){
    Node* root=NULL;
    cout<<"Enter data to insert"<<endl;
    takeinput(root);

    cout<<"Inorder traversal is: "<<endl;
    inorder(root);
    cout<<endl;


    cout<<"Preorder traversal is: "<<endl;
    preorder(root);
    cout<<endl; 

    cout<<"Postorder traversal is: "<<endl;
    postorder(root);
    cout<<endl; 

    int num;
    cout<<"Enter the number you want to search"<<endl;
    cin>>num;

    bool check=search(root, num);
    if(check) cout<<"Element is present"<<endl;
    else cout<<"Element is not present"<<endl;

    Node* min=minVal(root);
    Node* max=maxVal(root);
    cout<<"Min node is: "<<min->data<<endl;
    cout<<"Max node is: "<<max->data<<endl;

    root=deleteFromBST(root, 50);


    cout<<"Inorder traversal is: "<<endl;
    inorder(root);
    cout<<endl;

}

//50 20 70 10 30 90 110 -1
