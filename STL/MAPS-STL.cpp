int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size, query, grade;
    string name;
    cin>>size;
    std::map <string, int> m;
    for (int i = 0; i<size; i++) {
        cin>>query>>name;
        if (query==1) {
            cin>>grade;
            map<string,int>::iterator itr=m.find(name);
            if (itr!=m.end()) {
                grade = grade+m[name];
            }
            m.erase(name);
            m.insert(make_pair(name,grade));
            
        }
        else if (query==2) {
            m.erase(name);
        }
        else {
            map<string,int>::iterator itr=m.find(name);
            if (itr!=m.end()) {
                cout<<m[name]<<endl;
            }
            else {
                cout<<0<<endl;
            }
        }
    }
    return 0;
}
