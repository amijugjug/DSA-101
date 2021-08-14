/*
Lets examine this problem
Basically a naive approach could be a top down approach in which you have to stand on a node then,
1.Check weather the left side of that node is BST
2.Check weather the right side of that node is BST
This approach will take O(n^2) time and O(n) space


The approach discussed here is using bottom-up approach it is a very good ques
Firstly we are performing post-order traversal 
Which means we check for LST then RST and at last the Node
Using this 


Base Condition : It states if there is only one node in a tree it is obviously a BST 
by this condition leaf nodes are always BST so if there are any number of node in a tree
the minimum size of BST could be found is 1.
Also we have made mine = INT_MAX the reason is we want to get the maximum from LST to check weather
the maximum node's data existing in LST is less than the root's data or not,similarly we have made
maxe = INT_MIN because  we want to get the minimum from RST to check weather
the minimum node's data existing in RST is greater than the root's data or not.
(Check conditions below you will understand)

We could check weather the LST and RST are BST or not and
If they are then check for current node
The node LST and RST combined will be BST if and only if : 
1.RST of node is BST
2.LST of node is BST
3.maximum value existing in LST must be less than node's value
4.minimum value existing in RST must be greater than node's value

Also as we are going from bottom to up we have to take care of values of minimum node in LST
and maximum node in RST so we are doing
min(l.mine,root->data) and maxe(r.maxe,root->data)
Another reason is since we are returning the INT_MAX as left when a leaf node encountered and INT_MIN when a right node 
is encounterd.

And if any of the condition do not fulfill respective subtree could not be BST.

Because at every step we have to keep track of so many varriable we made a structure BST
>isBST : bool varriable which tells weather a node is a BST or a subtree underlying the node is BST or not.
>size : tells the sie of BST
>mine : tells the minimum element encountered
>maxe : tells the maximum element encountered



*/


struct BST{
    bool isBST;
    int size,mine,maxe;
};
BST findSize(Node* root){
    BST b;
    if(!root){
        b = {true,0,INT_MAX,INT_MIN};
        return b;
    }
    BST l = findSize(root->left);
    BST r = findSize(root->right);
    
    if(l.isBST && r.isBST && l.maxe < root->data && r.mine > root->data)
        b = {true,1+l.size+r.size, min(l.mine,root->data),max(r.maxe,root->data)};

    else
        b = {false,max(l.size,r.size),-1,-1};
    return b;
}
int largestBst(Node *root)
{
    if(!root)
        return 0;
    struct BST b = findSize(root);
    return b.size;
}