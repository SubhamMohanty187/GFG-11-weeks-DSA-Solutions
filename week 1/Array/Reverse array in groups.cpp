void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
        for(int i =0;i<n;i+=k)
        {
        int l =i;
        int r = min(i+k-1,n-1);
        while(l<r)
        {
            swap(arr[l],arr[r]);
            l++;
            r--;
        }
    }
}
