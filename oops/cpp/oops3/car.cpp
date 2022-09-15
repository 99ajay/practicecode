//#include "vehicle.cpp"

class car :  public vehicle{
 public :
    int numgears;
    car(int x,int y) : vehicle(x)//if we want to call parameterised constructor of vehicle class then we write as like else default constructor is called
    {
        cout<<"car's constructor is called "<<endl;
        numgears=y;
    }
    ~car()
    {
        cout<<"car's destructor is called "<<endl;
    }
    
    void print()
    {
        cout<<"num tyres : "<<numtyres<<endl;
        cout<<"color : "<<color<<endl;
        cout<<"numgears : "<<numgears<<endl;
       // cout<<"maxspeed : "<<maxspeed<<endl;
    }
};