void bubbleSort(int a[], int s)
{
    //Write your code here
    for(int i=0;i<s-1;i++)
    {
        for(int j=0;j<s-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                //swap
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            else if(a[j]<=a[j+1])
            {
               
            }
            
            
        }
    }
}