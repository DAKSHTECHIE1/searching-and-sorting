int findSecondLargest(int a[], int n)
{    //Write your code here
    int lar,seclar;
    if(a[0]>a[1])
    {
        lar=a[0];
        seclar=a[1];
    }
    else if(a[0]<a[1])
    {
        lar=a[1];
        seclar=a[0];
    }
    else
    {
        lar=a[0];
        seclar=-2147483648;
    }
    for(int i=0;i<n-2;i++)
    {
        if(a[i+2]>lar)
        {
            seclar=lar;
            lar=a[i+2];
            
        }
        else if(a[i+2]<lar)
        {
            if(a[i+2]>seclar)
            {
                seclar=a[i+2];
            }
            else if(a[i+2]<seclar)
            {
                //no change
            }
            else//equal
            {
               //=toseclarg therefore no change 
            }
        }
        else//=lar
        {
            //lar unchanged seclarg no change
        }
    }
    return seclar;
}