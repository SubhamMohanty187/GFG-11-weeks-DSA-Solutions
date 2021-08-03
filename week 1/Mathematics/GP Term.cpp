double termOfGP(int A,int B,int N)
    {
        //Your code here
        double r = (double)B/A;
        double t = floor(A*pow(r,N-1));
        return t;
    }
