    #include <stdio.h>
    #include <string.h>
    #include <math.h>
    #include <stdlib.h>
     
    int min(int a, int b)
        {
        return a<b?a:b;
    }
     
    int main() {
        
        int t;
        scanf("%d",&t);
        while(t--){
            int i,j,k,n;
            scanf("%d",&n);
            int arr[n], dp[n+1];
            for(i=0;i<n;i++){
                scanf("%d",&arr[i]);
            }
            dp[0] = 0;
            
            for(i=1;i<n+1;i++)
                {
                dp[i] = dp[i-1]+1;
                for(j=i-1;j>=0;j--){
                    if(j+arr[j] == i){
                        dp[i] = min(dp[i], 1+dp[j]);
                    }
                }
            }
            
            for(i=1;i<n+1;i++)
                {
                dp[i] = dp[i-1]+1;
                for(j=0;j<n;j++){
                    if(j+arr[j] == i){
                        dp[i] = min(dp[i], 1+dp[j]);
                    }
                }
            }
            
            printf("%d\n",dp[n]);
            
        }
     
    }