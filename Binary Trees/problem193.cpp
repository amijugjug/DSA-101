int getNumber(string str,int &i,int n){
    int num=0;
    while(i<n && isdigit(str[i]))
        num = num*10+(str[i++]-'0');
    
    return num;
}
Node* constructTree(string str,int &i,int n){
    if(n==0 && i>=n)
        return NULL;
    
    //To check if number is not positive (say -4 is the number)
    bool neg=str[i]=='-'?i++,true:false;
    
    //To extract number from string (say number is 437 then we have to traverse 3 index of string)
    int num = getNumber(str,i,n);
    
    num = neg==true?-num:num;
    
    Node* root = new Node(num);
    //Going for left sub tree
    if(i<n && str[i] == '(')
        root->left = constructTree(str,++i,n);
    if(i<n && str[i] == ')')
        i++;
        
    //Going for right sub tree
    if(i<n && str[i] == '(')
        root->right = constructTree(str,++i,n);
    if(i<n && str[i] == ')')
        i++;
    return root;
}