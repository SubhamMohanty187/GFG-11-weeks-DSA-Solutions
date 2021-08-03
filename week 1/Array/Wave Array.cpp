void convertToWave(vector<int>& arr, int n){
       //Swap the even position elements only, the odd postion elements will be automatically arranged in wave form.
        for(int i=1;i<n;i+=2)
        {
            swap(arr[i],arr[i-1]);
        }
        
    }
