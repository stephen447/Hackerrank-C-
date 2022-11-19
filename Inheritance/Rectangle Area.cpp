 class Rectangle{
     protected:
        int height, width;
     public:
        void display(){
            cout<<width<<" "<<height<<endl;
        }
 };
 class RectangleArea : public Rectangle{
     public:
        void read_input(){
            cin>>width>>height;
        }
        void display(){
            cout<<height*width<<endl;
        }
     
 };
