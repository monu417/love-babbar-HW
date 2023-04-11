#include <iostream>
using namespace std;
void merge(int*arr,int s,int e)
{
  int mid=(s+e)/2;
  int len1=mid-s+1;
  int len2=e-mid;
  int*arr1=new int[len1];
  int*arr2=new int[len2];
  int k=s;
  for(int i=0;i<len1;i++)
  {
    arr1[i]=arr[k];
    k++;
  }
  k=mid+1;
  for(int i=0;i<len2;i++)
  {
    arr2[i]=arr[k];
    k++;
  }
  int i=0,j=0;
  k=s;
  while(i<len1 && j<len2)
  {
    if(arr1[i]<arr2[j])
    {
      arr[k]=arr1[i];
      k++;
      i++;
    }
    else
    {
      arr[k]=arr2[j];
      k++;
      j++;
    }
  }
  while(i<len1)
  {
    arr[k]=arr1[i];
    k++;
    i++;
  }
  while(j<len2)
  {
    arr[k]=arr2[j];
    j++;
    k++;
  }

}
void mergesort(int*arr,int s,int e)
{
  if(s>=e)
  {
    return;
  }
  int mid=(s+e)/2;
  mergesort(arr,s,mid);
  mergesort(arr,mid+1,e);
  merge(arr,s,e);
}
int main() {
 int n;
 cin>>n;
 int*arr=new int[n];
 for(int i=0;i<n;i++)
 {
   cin>>arr[i];
 }
int s=0;
int e=n-1;
mergesort(arr,s,e);
for(int i =0;i<n;i++)
{
  cout<<arr[i]<<" ";
}
  return 0;
}
