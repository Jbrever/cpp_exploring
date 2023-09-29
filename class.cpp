#include <iostream>
using namespace std;

class alfa
{
   int level;
   int health;

public:
   // constructor

   alfa()
   {
      cout << "consturtor called" << endl;
   }

   // parameterised consturctor(
   //  this keyword refer to instance variable
   //  this contain address of current object;

   alfa(int health)
   {
      this->health = health;
      cout<<"constructore health-: "<<this -> health<<endl;
   }

   // copy constructor
   alfa(alfa& temp){
        this -> health = temp.health;
        cout<<"copy constructor -:"<<this -> health<<endl; 
   }

   void get()
   {
      cout << "level is-:" << level << endl;
      cout << "health id-:" << health << endl;
   }
   void set(int a, int b)
   {
      level = a;
      health = b;
   }
};

int main()
{
   //parameterised constructor 
   alfa constructor(15);

   // copy constructore
   alfa copyConstruct(constructor);

   // static memory allocation
   alfa a1;
   alfa *ptr = &a1;

   // Dynamic memory allocation
   alfa *a = new alfa;
   (*a).set(4, 5);
   (*a).get();
   a->set(4, 5);
   a->get();

   // first way to call set and get function
   a1.set(4, 5);
   a1.get();

   // second way to call set and get function
   (*ptr).set(4, 5);
   (*ptr).get();

   // third way to use set and get function by arrow operator
   ptr->set(4, 5);
   ptr->get();

   return 0;
}