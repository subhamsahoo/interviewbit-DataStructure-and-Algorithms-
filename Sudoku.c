/**
 * @input A : 2D char array 
 * @input n11 : char array's ( A ) rows
 * @input n12 : char array's ( A ) columns
 * 
 * @Output Void. Just modifies the args passed by reference 
 */
 int rowsafe(char** A,int row,char num,int n11)
 {
     int i=0;
     for(i;i<n11;i++)
     {
         if(A[row][i]==num)
         return 0;
     }
     return 1;
 }
 int colsafe(char** A,int col,char num,int n11)
 {
     int i=0;
     for(i;i<n11;i++)
     {
         if(A[i][col]==num)
         return 0;
     }
     return 1;
 }
 int boxsafe(char** A,int row,int col,char num)
 {
     int i,j;
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             if(A[i+row][j+col]==num)
             return 0;
         }
     }
     return 1;
 }
 int safe(char** A,int row,int col,char num,int n11)
 {
     if(rowsafe(A,row,num,n11)==0)
     return 0;
     if(colsafe(A,col,num,n11)==0)
     return 0;
     if(boxsafe(A,row-row%3,col-col%3,num)==0)
     return 0;
     return 1;
 }
 
 int findnext(char** A,int* row,int* col,int n11)
 {
     int i,j;
     for(i=0;i<n11;i++)
     {
         for(j=0;j<n11;j++)
         {
             if(A[i][j]=='.')
             {
                 *row=i;
                 *col=j;
                 return 0;
             }
         }
     }
     return 1;
 }
 
 int solve(char** A,int n11)
 {
     int row,col,i;
     if(findnext(A,&row,&col,n11)==1)
     return 1;
     for(i=49;i<=57;i++)
     {
         if(safe(A,row,col,i,n11))
         {
             A[row][col]=(char)i;
             if(solve(A,n11))
             return 1;
             A[row][col]='.';
         }
     }
     return 0;
 }
void solveSudoku(char** A, int n11, int n12) {
    solve(A,n11);
}
