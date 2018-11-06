#include<iostream>
#include<conio.h>
using namespace std;
int maximise_element(int arr[])
{
    int max=0,i;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        else
        {
            continue;
        }
    }
    return max;
}
int maximise_revenue(int M,int n,int x[],int r[])
{
   int i,j,k,temp,rev,reslt,l,cnt=0;
   int max_rev_find[500];

   for(i=0;i<n;i++) //loop fpr each element of array to be compared with other
   {
       for(l=i+1;l<n;l++)
      {
       k=i;
       rev=0;
       j=l;
       while(j<n)
       {
           if((x[j]-x[k])>5)
           {
             temp = r[k]+r[j];
             rev+=temp;
             k=j;
             j++;
           }
           else
           {
             j++;
           }
       }
       max_rev_find[cnt]=rev ;
       cnt++;
   }
   }
   reslt=maximise_element(max_rev_find);
   return reslt;
}

int main()
{
    int site[10],revenue[10],miles;
    int i,j,n,result;
    cout<<"Enter the no. of miles "<<"\n";
    cin>>miles;
    cout<<"Enter the no. of sites "<<"\n";
    cin>>n;
    cout<<"Enter the sites for billboards to be placed  "<<"\n";
    for(i=0;i<n;i++)
        cin>>site[i];
    cout<<"Enter the revenues of each site  "<<"\n";
    for(j=0;j<n;j++)
        cin>>revenue[j];

    result = maximise_revenue(miles,n,site,revenue);
    cout<<"Maximised result is ::  "<<result;
    return 0;
}
///////////////////////////////////////////////////////////////////////////////
#include<iostream>
#include<conio.h>
using namespace std;
int maximise_element(int arr[])
{
    int max=0,i,pos;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            pos=i;
        }
        else
        {
            continue;
        }
    }
    cout<<"maximum revenue is :: "<<max<<"\n";
    return i;
}
void maximise_revenue(int M,int n,int x[],int r[])
{
   int i,j,k,temp,rev,reslt,l,cnt=0,row=0,col=0,cnt2=0;
   int max_rev_find[500],arry[100][20];

   for(i=0;i<n;i++) //loop fpr each element of array to be compared with other
   {
       for(l=i+1;l<n;l++)
      {
       col=0;
       k=i;
       rev=0;
       j=l;
       while(j<n)
       {
           if((x[j]-x[k])>5)
           {
             temp = r[k]+r[j];
             rev+=temp;
             arry[cnt][col]=x[k];
             col++;
             k=j;
             j++;

           }
           else
           {
             j++;
             arry[cnt][col]=0;
           }
       }
       max_rev_find[cnt]=rev ;
       cnt++;
       //row++;
   }
   }
   reslt=maximise_element(max_rev_find); // position of max element is returned
   cout<<"position of sites  ::"<<"\n";
   for(int d=0;d<20;d++)
       cout<<arry[reslt][d]<<"  ";
}

int main()
{
    int site[10],revenue[10],miles;
    int i,j,n,result;
    cout<<"Enter the no. of miles "<<"\n";
    cin>>miles;
    cout<<"Enter the no. of sites "<<"\n";
    cin>>n;
    cout<<"Enter the sites for billboards to be placed  "<<"\n";
    for(i=0;i<n;i++)
        cin>>site[i];
    cout<<"Enter the revenues of each site  "<<"\n";
    for(j=0;j<n;j++)
        cin>>revenue[j];
    maximise_revenue(miles,n,site,revenue);

    return 0;
}

