long long getSmallestDivNum(long long n)
{
        // code here
        long long sol = 1;
        for(long long i =1;i<=n;i++)
        {
            sol = (sol * i)/(__gcd(sol,i));
        }
        return sol;
}
