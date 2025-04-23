#include <iostream>
#include <string>
#include <algorithm>
#include<vector>
#include<limits.h>

using namespace std;

int main(){
    int test_case;
    cin>>test_case;
    while(test_case--){
        int n=3;
        vector<int>array(n);
        int max=INT_MIN,min=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>array[i];
        }
        for(int i=0;i<n;i++){
            if(array[i]>max){
                max=array[i];
            }
            if(array[i]<min){
                min=array[i];
            }
        }
        //cout<<max<<" "<<min;
        for(int i=0;i<n;i++){
            if(array[i]!=max && array[i]!=min){
                cout<<array[i]<<endl;
            }
        }
    }
    return 0;
}