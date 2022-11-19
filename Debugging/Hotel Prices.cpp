int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size, bedroom, bathroom, profit;
    int total_profit = 0;
    cin>>size;
    string apart_type;
    for (int i = 0; i<size; i++) {
        cin>>apart_type>>bedroom>>bathroom;
        if (apart_type=="standard") {
            profit = (50*bedroom)+(100*bathroom);
        }
        else{
            profit = (50*bedroom)+(100*bathroom)+100;
        }
        total_profit = total_profit+profit;
    }
    cout<<total_profit;
    return 0;
}
