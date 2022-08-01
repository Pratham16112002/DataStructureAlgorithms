#include<iostream>

using namespace std;
void swap(int num_arr[] , int i , int j){
    int temp = num_arr[i];
    num_arr[i] = num_arr[j];
    num_arr[j] = temp;
}
void reverse(int num_arr[], int start){
    int num_length = sizeof(num_arr) / sizeof(num_arr[0]);
    int end = num_length - 1;
    while(start<=end){
        swap(num_arr,start,end);
        start++;
        end--;
    }
}
void solve(int num_arr[]){
    int num_length = sizeof(num_arr)/sizeof(num_arr[0]);
    int i = num_length -2 ;
    while( i >= 0 && num_arr[i] >= num_arr[i+1] ){
        i++;
    }
    if(i>= 0 ){
        int j = num_length -1;
        while( j>= 0 && num_arr[j] <= num_arr[i]){
            j--;
        }
        swap(num_arr,i,j);
}
    reverse(num_arr,i+1);
}
int main(){
    int num_arr [] = {1,2,3};
    solve(num_arr);
    return 0;
}