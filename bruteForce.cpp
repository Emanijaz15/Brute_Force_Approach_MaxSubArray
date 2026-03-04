#include <iostream>
using namespace std;
int main(){
    int arr[]={2,6,3,-5,-7,-1,5,4,9};
    int n=9;
    int currSum=0;
    int MaxSum=0;
    for(int st=0;st<n;st++){
        for(int end=st;end<n;end++){
            currSum=currSum+arr[end];
            MaxSum=max(currSum,MaxSum);
        }
    }
    cout<<"Maximum SubArray is: "<<MaxSum;
}
























// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,5,3,-5,7,2,8,6};
//     int n=8;
//     for(int st=0; st<n; st++){
//         for(int end=st; end<n; end++){
//             for(int i=st;i<=end;i++){
//                 cout<<arr[i];
//             }
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }