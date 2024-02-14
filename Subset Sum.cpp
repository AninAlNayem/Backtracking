#include<bits/stdc++.h>
using namespace std;

int main(){

   int n,x;
   scanf("%d%d",&n,&x);
   int arr[n];
   for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
   }

   bool res=0;
   for(int mask=0;mask<(1<<n);mask++){
     int sum=0;
     for(int i=0;i<n;i++){
        if(mask & (1<<i)){
            sum+=arr[i];
        }
     }
     if(sum==x){
        res=1;
        break;
     }
   }
   if(res){
     printf("Yes\n");
   }
   else{
     printf("No\n");
   }

return 0;
}
