class Solution {
public:
    int maximum69Number (int num) {
        int a=0;
        int arr[10];
        int cnt=0;
        int temp=num;
        while(temp>0){
            arr[cnt++]=temp%10;
            temp/=10;
        }
        for(int i=cnt-1;i>=0;i--){
            if(arr[i]==6){
                arr[i]=9;
                break;
            }
        }
        for(int i=cnt-1;i>=0;i--){
            a=(a*10)+arr[i];
        }
        num=a;
        return a;
    }
};