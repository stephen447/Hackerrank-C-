class BadLengthException{
    private:
        int n;
    public:
        BadLengthException(int error_num){
            n = error_num;
        }
        int what(){
            return n;
        }
        
};
