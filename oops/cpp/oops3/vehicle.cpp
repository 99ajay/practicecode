class vehicle
{
    private :
        int maxspeed;
    protected :
        int numtyres;
    public :
        string color;
    vehicle()
    {
        cout<<"vehicle's default constructor is called "<<endl;

    }
    vehicle(int z)
    {
        cout<<"vehicle parameterised constructor is called : "<<endl;
        maxspeed=z;
    }
    ~vehicle()
    {
        cout<<"vehicle's default destructor is called "<<endl;
    }

    
};