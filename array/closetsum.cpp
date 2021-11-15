int closestsum(int arr ,int n,int x){
    int val =0,closetvalue=INT_MAX;
    for(int i = 0; i < n; i++){
        for(int j = i; j < arr; j){
            for(int k = i; k < n; k++){
              int val = arr[i]+arr[j]+arr[k];
              if(x-val < x - closetvalue){
                  closetvalue=value;
              }
            }
        }
    }
    return closetvalue;
}

int closestsum(int arr,int n,int x){
        sort(arr,arr+n,x);
        for(int i = 0; i < n-2; i++){
        int ptr1=i+1;
        int ptr2= n-1;
        int value=0,closeval=INT_MAX;
         while(ptr1<ptr2){
             int val= arr[i]+arr[ptr1]+arr[ptr2];
             if(x-val < x- closeval){
                 closeval=val;
             }
             if(val>x){
                 prt2--;
             }
             else(val<ptr1){
                 prt1++;
             }
            
         }
        }
        return closeval;
}