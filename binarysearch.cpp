int binarySearch(int a[], int n, int x)
{    
    int s=0,e=n-1;   //s,e are indexes of starting and ending elements
    while(s<=e)
    {
        int mid=(s+e)/2;//mid index of comparing element
        if(a[mid]==x)
        {
            return mid;
            
        }
        else if(x<a[mid])
        {
            e=mid-1;
        }
        else if(x>a[mid])
        {
            s=mid+1;
        }
    }
    //if control reaches here it means elemnt not found and now we would return -1
    return -1;
}