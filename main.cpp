//
//  main.cpp
//  anagram
//
//  Created by Alka Wadhwa on 12/12/20.
//  Copyright © 2020 Alka Wadhwa. All rights reserved.
//

#include <iostream>
using namespace std;
void frequency(int n,int freq[]){
    while(n){
        int digit=n%10;
        freq[digit]++;
        n=n/10;
    }
}
bool ana(int a,int b){
    int freqa[10]={0 };
    int freqb[10]={0 };
    
    frequency(a,freqa);
    frequency(b,freqb);
    for(int i=0;i<10;i++){
        if(freqa[i]!=freqb[i])
        return false;
    }
    return true;
}
int difference(int input1[],int input2){
    int *ans;
    int n;
    int count=0;
    ans=new int[n];
    int max,min;
    int sub=0;
    for(int i=0;i<input2;i++){
         for(int j=i+1;j<input2;j++)
        if(ana(input1[i],input1[j])){
            ans[i]=input1[i];
            ans[j]=input1[j];
             cout << ans[i] << " is anagram of " << ans[j] << endl;
            count=count+2;
        }
    }
    n=count;
    cout<<"size is "<<n<<endl;
    cout<<"elements are:"<<endl;
    for(int i=0;i<n;i++){
    cout<<ans[i]<<endl;
    }
    max=ans[0];
    min=ans[0];
    for(int i=0;i<n;i++){
        if(max<ans[i]){
            max=ans[i];
        }
    }
    
    cout<<"max element is"<<endl;
     cout<<max<<endl;
    for(int i=0;i<n;i++){
           if(min>ans[i]){
               min=ans[i];
           }
       }
    cout<<"min element is"<<endl;
      cout<<min<<endl;
    sub=max-min;
    return sub;
}
int main() {
    int *arr;
    int n;
    cin>>n;
    arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int diff;
    diff=difference(arr,n);
    cout<<"Difference is:"<<endl;
    cout<<diff<<endl;
    return 0;
}
