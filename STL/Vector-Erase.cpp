int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size, num, num_end;
    vector<int> output;
    cin>>size;
    for (int i = 0; i<size; i++) {
        cin>>num;
        output.push_back(num);
    }
    cin>>num;
    output.erase(output.begin()+num-1);
    cin>>num>>num_end;
    output.erase(output.begin()+num-1, output.begin()+num_end-1);
    cout<<output.size()<<endl;
    for (int i = 0; i<output.size(); i++) {
        cout<<output[i]<<" ";
    }
    return 0;
}
