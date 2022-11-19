int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size, query, num;
    cin>>size;
    set<int> s;
    for (int i = 0; i<size; i++) {
        cin>>query>>num;
        if (query==1) {
            s.insert(num);
        }
        else if (query==2) {
            s.erase(num);
        }
        else{
            set<int>::iterator itr=s.find(num);
            if (itr==s.end()) {
                cout<<"No"<<endl;
            }
            else{
                cout<<"Yes"<<endl;
            }
        }
    }
    return 0;
}
