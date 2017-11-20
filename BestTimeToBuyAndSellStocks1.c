/**
 * @input A : Read only ( DON'T MODIFY ) Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer
 */
int maxProfit(const int* a, int n) {
        int profit=0,buy=-1,sell=-1,i;
    for(i=1;i<n;i++)
    {
        if(a[i]>a[i-1])
        {
            buy=a[i-1];
            sell=a[i];
            break;
        }
    }
    i++;
    if(buy!=-1&&sell!=-1)
    {
        for(i;i<n;i++)
        {
            if(a[i]<buy)
            {
                if((sell-buy)>profit)
                profit=sell-buy;
                buy=a[i];
                sell=0;
            }
            else if(a[i]>sell)
            sell=a[i];
        }
    }
    if((sell-buy)>profit)
    profit=sell-buy;
    return profit;

}
