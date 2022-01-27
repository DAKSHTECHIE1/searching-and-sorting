void sort012(int x[], int s)
{
    //Write your code here
    int a=0,b=s-1;
    for(int i=0;i<=b;)//traversing
    {
        if(x[i]==0)
        {
            int temp=x[a];
            x[a]=x[i];
            x[i]=temp;
            i++;
            a++;
        }
        else if(x[i]==1)
        {
            i++;
        }
        else if(x[i]==2)
        {
            if(x[b]==2)
            {
                b--;
            }
            else if(x[b]!=2)
            {
                if(x[b]==1)
                {
                    //swap
                    int tempo=x[b];
                    x[b]=x[i];
                    x[i]=tempo;
                    b--;
                    i++;
                }
                else if(x[b]==0)
                {
                    //swap
                    int dak=x[b];
                    x[b]=x[i];
                    x[i]=dak;
                    if(i==a)
                    {
                        i++;
                        a++;
                        b--;
                    }
                    else if(i>a)
                    {
                        b--;
                    }
                    
                }
            }
        }
        
        
    }
    
}