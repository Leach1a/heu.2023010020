#include<stdio.h>
void paixu(int a[], int n)
{
	int j,k;    
	for(j=0; j<n-1; j++)    
	{
		for(k=0; k<n-j-1; k++)    
		{
			if(a[k]>a[k+1])    
			{
				int temp=a[k];    
				a[k]=a[k+1];
				a[k+1]=temp;
			}
		}
	}
}
int main()
{
    int a[5];
    int i;
    for(i = 0;i<5;i++){
    scanf("%d",&a[i]);
    }
    paixu(a,5);
    for(i = 0;i<5;i++){
    printf("%d ",a[i]);
    }
    return 0;
}
