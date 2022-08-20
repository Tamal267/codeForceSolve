#include<stdio.h>
#include<math.h>

int main(){
  int n;
  scanf("%d",&n);
  int arr[n];
  int i;
  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }

  int j,k,temp;
  for(j=0;j<n;j++){
    for(k=j;k<n;k++){
      if(arr[k]>arr[j]){
        temp=arr[j];
        arr[j]=arr[k];
        arr[k]=temp;
      }
    }
  }

  int sum=0;
  int p;
  for(p=0;p<n;p++){
    sum=sum+arr[p];
  }

  int x=0,count=0,sum2=ceil(sum/2);
  while(count<=sum2){
    count=count+arr[x];
    x++;
  }
  printf("%d",x);

}
