int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int arr_num, query_num, size, num, q1, q2;
    cin>>arr_num;
    cin>>query_num;
    //cout<<query_num;
    vector<int> vect[arr_num];
    
    
    
    for (int i = 0; i<arr_num; i++) {
        cin>>size;
        for (int j = 0; j<size; j++) {
            cin>>num;
            vect[i].push_back(num);
        } 
    }
    
    for (int i = 0; i<query_num; i++) {
        cin>>q1>>q2;
        cout<<vect[q1][q2]<<endl;
    }
    return 0;
}
