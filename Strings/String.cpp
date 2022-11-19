int main() {
	// Complete the program
    string a, b;
    cin>>a;
    cin>>b;
    cout<<a.size()<<" ";
    cout<<b.size()<<endl;
    cout<<a+b<<endl;
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    cout<<a<<" "<<b;
  
    return 0;
}
