class hondacity : public car{
    public:
  hondacity(int x,int y) :car(x,y)
  {
    cout<<"honda city constructor"<<endl;
  }
  ~hondacity()
  {
    cout<<"honda city destructor"<<endl;
  }
};