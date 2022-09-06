using namespace std;
class student
{
    public:
    int rollno;
    private:
    int age;

    public :
    ~student()
    {
        cout<<"destructor is called now "<<endl;
    }
    student()//default constructor
    {
      cout<<"default constructor"<<endl;
    }
    // student(int r)
    // {
    //     cout<<"paramaterised constructor"<<endl;
    //     rollno=r;
    // }
    student(int rollno)
    {
        cout<<"paramaterised constructor"<<endl;
        this->rollno=rollno;
    }
    

    student(int a,int r)
    {
        cout<<"two parameter passing constructor"<<endl;
        cout<<"this : "<<this<<endl;
        this->age=a;
        this->rollno=r;
    }
    void display()
    {
        cout<<age<<" "<<rollno<<endl;
    }

    int getage()
    {
        return age;
    }
    void setage(int a,int passward)
    {
        if(passward!=123)//can be used for the security purpose 
        {
            return ;
        }
        if(a<0)
        {
            return;
        }
        age=a;
    }
    
};