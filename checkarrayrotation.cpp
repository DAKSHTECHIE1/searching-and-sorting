int arrayRotateCheck(int a[], int s)
{
    //Write your code here
    for(int i=0;i<s-1;i++)
    {
        if(a[i+1]>a[i])
        {
            //np
        }
        else if(a[i+1]<a[i])
        {
            return  i+1;
        }
    }
  return 0;// for no rotation.
    
}