#include<iostream>
#include<list>
using namespace std;
class graph
{
  int v;
  list<int> *l;
  public:
       graph(int v)
       {
           this->v=v;
           l= new list<int>[v];
       }
       void addedge(int x,int y)
       {
           l[x].push_back(y);
           l[y].push_back(x);
       }
       void printagjalist()
       {
       for(int i=0;i<v;i++)
       {
       
       
           //cout<<"vertex "<<i<<"->"
           for(int nbr : l[i])
           {
               cout<<nbr<<",";
           }
           cout<<endl;
       }
       
       }
              
};
int main()
{n
  graph g(4);
  g.addedge(0,1);
  g.addedge(0,2);
  g.addedge(2,3);
  g.addedge(1,2);
  g.printagjalist();   
  return 0;

  
}