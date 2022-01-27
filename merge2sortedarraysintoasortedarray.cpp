void merge(int a[], int s, int b[], int d, int m[])
{
    int i=0,j=0,k=0;// error bcoz of ; and,
    for(;(i<s)&&(j<d);)
    {
        //fully explore nhi hue hai.
        if(a[i]>=b[j])
        {
           m[k]=b[j]; 
            k++;
            j++;
        }
        else// < wala case yaani a[i]<b[j]
        {
          m[k]=a[i];
            i++;
            k++;
            
        }
        
    }
    
    if(i==s&&j<d)//a khtm b ke as it is daal denge
    {
        for(;j<d;j++,k++)
        {
          m[k]=b[j];
            
        }
        
    }
    else if(j==d&&i<s)// b khtm a ke as it is daal denge
    {
        for(;i<s;i++,k++)
        {
            m[k]=a[i];
        }
        
    }
    else
    {
       // j and i dono khtm
        // a and b dono arrays mere khtm ho jyenge
        // dono khtm ho gye yaani merge + sort krdiye gye dono arrays completely
        // to ab aur kuch krane ki zarrorat nhi hai
        // therefore no work reqd here.
        
    }
    
    
    
}