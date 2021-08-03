vector<int> leaders(int a[], int n){
        vector<int> arr;
        
        int leader = a[n-1];
        arr.push_back(leader);
        
        for(int i=n-2;i>=0;i--)
        {
            if(leader <= a[i])
            {
                leader=a[i];
                arr.push_back(leader);
            }
        }
        reverse(arr.begin(),arr.end());
        return arr;
        
    }
