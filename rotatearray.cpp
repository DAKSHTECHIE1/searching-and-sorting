void rotate(int a[], int b, int n)
{
    int p[1000000];//10 ki power6
    // 10 ki power 6 pe 6 10's;
    int i=0;
    
    for(;i<n-b;i++)
    {
        p[i]=a[b+i];
        
    }
    // upar vala hi i chahiye unchanged
    int k=0;
    for(int j=0;j<b;j++)
    {
        p[i]=a[k];
        k++;
        i++;
        
    }
    for(int w=0;w<n;w++)// n baar chlega and then n elements copy ho jayenge.
    {
        a[w]=p[w];
        
    }
    
    
}