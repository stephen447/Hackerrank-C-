void update(int *a,int *b) {
    // Complete this function  
    int d = *a+*b; 
    int c = *a-*b;
    c = abs(c);
    *a = d;
    *b = c;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
