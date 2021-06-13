vector<int>ASL(vector<int> arr){
        stack<int>S;
        vector<int>v;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(S.empty()){
                v.push_back(arr[i]);
                S.push(arr[i]);
            }
            else if(S.top()<=arr[i])
                v.push_back(S.top());
            else if(S.top() > arr[i]){
                while(!S.empty() && S.top() > arr[i])
                    S.pop();
                if(S.empty()){
                    v.push_back(arr[i]);
                    S.push(arr[i]);
                }
                else
                    v.push_back(S.top());
            }
        }
        return v;
    }
    int maxProfit(vector<int>& prices) {
        vector<int>purchase = ASL(prices);
        int max=0;
        for(int i=0;i<prices.size();i++){
            if(max < prices[i]-purchase[i])
                max = prices[i]-purchase[i];
        }
        return max;
    }