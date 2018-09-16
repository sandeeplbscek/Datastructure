void selection_sort(int a[],int size)
{
        int i,j,temp;
        
	
	for(i=0;i<size;i++)
	{
	 	for(j=i+1;j<size;j++)
		{
			

			if(a[i]>a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
		}
		

	}
		



}


void bubble_sort(int a[],int size)
{
        int i,j,temp,flag=0;
        
	
	for(i=0;i<size;i++)
	{
		flag=0;
	 	for(j=0;j<size-1;j++)
		{
			

			if(a[j]>a[j+1])
				{
					flag=1;
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
		}
		if(flag==0)
			break;
		
		

	}
		



}

void insertion_sort(int a[],int size)
{
        int i,j,temp;
        
	
	for(i=0;i<size;i++)
	{
		temp = a[i];
       		j = i-1;
    
 		while (j >= 0 && a[j] > temp)
       			{
           		a[j+1] = a[j];
           		j = j-1;
       			}
       		a[j+1] = temp;	
		

	}
		



}




