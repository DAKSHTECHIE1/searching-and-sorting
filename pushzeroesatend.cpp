void pushZeroesEnd(int a[], int s)
{
    //Write your code here
    // only 1 for loop is allowed
    // p=pointing to earliest 0 pe in sequence .reason-bcoz potentially,hame vaha pe non0 se exchange krna pad skta.
    //i= normally,array ke har element ko access krne ke liye use kar rahe in the code.
    int i=0,p=0;
    for(;i<s;)
    {
        if(a[i]==0)
        {
         i++;
            
        }
        else if(a[i]!=0)
        {
            int temp=a[p];
            a[p]=a[i];     // SWAPPING
            a[i]=temp;
            p++;
            i++;
        }
    }    
                
            
        
        
        
    
        
    
}