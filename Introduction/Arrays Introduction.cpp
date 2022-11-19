int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int size, num;
    cin>>size;
    int arr [size];
    for (int i = 0; i<size; i++) {
        cin>>num;
        arr[i] = num; 
    } 
    for (int i = size-1; i >= 0; i--) {
        cout<<arr[i]<<" ";
    }
    return 0;
}
