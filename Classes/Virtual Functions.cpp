class Person{
    public:
        string name;
        int age;
    virtual void getdata() = 0;
    virtual void putdata() = 0;
    
        
    
};
class Professor:public Person{
    public:
        int publications;
        int cur_id;
        static int id;
    Professor(){
        id++;
        cur_id = id;
    }
    void getdata(){
        cin>>name>>age>>publications;
    }
    void putdata(){
        cout<<name<<" "<<age<<" "<<publications<< " "<<cur_id<<endl;
    }
        
    
};
class Student:public Person{
    public:
        int marks [6];
        int cur_id;
        static int id;
    Student(){
        id++;
        cur_id = id;
    }
    void getdata(){
        cin>>name>>age>>marks[0]>>marks[1]>>marks[2]>>marks[3]>>marks[4]>>marks[5];
    }
    void putdata(){
        int sum = marks[0]+marks[1]+marks[2]+marks[3]+marks[4]+marks[5];
        cout<<name<<" "<<age<<" "<<sum<< " "<<cur_id<<endl;
    }    
};
int Professor::id=0;
int Student::id=0;
