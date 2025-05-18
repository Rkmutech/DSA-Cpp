# include<iostream>
using namespace std;

function printPairs(int arr[],n){
    for(int i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            cout<<arr[i],arr[j]<<endl;
        }
    }
  
}

int main(){
    int arr = [1,2,3,4,5];
    int n= sizeof(arr)/sizeof(int);
    printPairs(arr,n);

}