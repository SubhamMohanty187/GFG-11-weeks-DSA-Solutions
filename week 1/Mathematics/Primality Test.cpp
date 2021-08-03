bool isPrime(int N)
    {
        //Your code here
        int f = 0;
        for(int i =2;i*i <= N;i++)
        {
            if(N%i == 0)
            {
                f=1;
                break;
            }
        }
        if(f)
        return false;
        else
        return true;
