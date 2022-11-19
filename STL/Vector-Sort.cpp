int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size,num;
    cin>>size;
    vector<int> output;
    for (int i = 0; i<size; i++) {
        cin>>num;
        output.push_back(num); 
    }
    sort(output.begin(), output.end());
    for (int i = 0; i<size; i++) {
        cout<<output[i]<<" ";
    }
    return 0;
}
