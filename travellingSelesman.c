#include<stdio.h>
int pos(int a);
int main(){
  int n,m;
  scanf("%d",&n);
  int i,j;
  int a,b,sum[n];
  for(i=0;i<n;i++){
    sum[i]=0;
    scanf("%d",&m);
    for(j=0;j<m;j++){
      scanf("%d %d",&a,&b);
      a=pos(a);
      b=pos(b);
      if(a>b) sum[i]=sum[i]+a;
      else if(b>a) sum[i]=sum[i]+b;
      else if(a==b && a!=0) sum[i]=sum[i]+1;
    }
  }
  int x;
  for(x=0;x<n;x++){
    printf("%d\n",2*sum[x]);
  }
}

int pos(int a){
  if(a>0) return a;
  else return -1*a;
}
