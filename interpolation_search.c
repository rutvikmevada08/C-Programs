#include<stdio.h>
int interpolation_search(int a[],int n,int key)
{
    int low=0,high=n-1;
    if(a[low]==a[high])
    {
        if(a[low]==key)
        {
            return low;
        }
        else
        {
            return -1;
        }
    }
    while(low<=high && a[low]<=key && a[high]>=key)
    {
        int pos=low+(((double)key-a[low])*(high-low))/(a[high]-a[low]);
        if(a[pos]==key)
        {
            return pos;
        }
        else if(a[pos]<key)
        {
            low=pos+1;
        }
        else
        {
            high=pos-1;
        }
    }
    return -1;
}
void sort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int key=arr[i];
        int j=i-1;
        while(j>=0 && key<arr[j])
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
void print(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main()
{
    int n;
    printf("Enter the Size of Array : ");
    scanf("%d",&n);
    
    int a[n];
    printf("Enter the Element of Array : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Your Orginal Array : ");
    print(a,n);
    sort(a,n);
    printf("Array After Sorting : ");
    print(a,n);
    printf("Enter Key To Find : ");
    int key;
    scanf("%d",&key);
    int x=interpolation_search(a,n,key);
    if(x !=-1)
    {
        printf("Element is Found At %d Position",x+1);
        
    }
    else
    {
        printf("Element is not Found");
    }
    return 0;
}
