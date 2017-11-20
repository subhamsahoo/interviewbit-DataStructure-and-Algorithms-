/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer
 */
int firstMissingPositive(int* A, int n1) {
        if(A==NULL||n1<1)
    return 1;
    	int length=n1,*nums=A,i;
       for(i=0;i<length;i++)
	{
		nums[i]=nums[i]-1;
	}
	for(i=0;i<length;i++)
	{
		if(nums[i]>=0&&nums[i]<length)
		{
			if(nums[i]==i);
			else
			{
				while(nums[i]>=0&&nums[i]<length)
				{
					int num=nums[i];
					if(nums[i]==i)
						break;
					if(nums[i]==nums[num])
					{
						nums[i]=-1;
						break;
					}
					int temp=nums[i];
					nums[i]=nums[num];
					nums[num]=temp;
				}
			}
				
		}
	}
	for(i=0;i<length;i++)
		if(nums[i]!=i)
			return i+1;
		return i+1;
}