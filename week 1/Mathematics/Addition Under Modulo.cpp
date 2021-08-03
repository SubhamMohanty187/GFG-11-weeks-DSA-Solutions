long long sumUnderModulo(long long a,long long b)
    {
        // code here
        long long sum,c;
        c = pow(10,9) + 7;
        sum = ((a % c)+ (b % c))%c;
        return sum;
    }
