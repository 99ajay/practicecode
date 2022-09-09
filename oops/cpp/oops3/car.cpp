//#include "vehicle.cpp"

class car :  public vehicle{
 public :
    int numgears;
    car() : vehicle(6)
    {
        cout<<"car's constructor is called "<<endl;
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