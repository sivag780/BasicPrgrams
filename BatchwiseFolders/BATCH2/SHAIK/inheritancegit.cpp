#include<iostream>
using namespace std;


//************ inheritance from class A to class B ******************

/*class A
{
    public:
    int a=10;
    int b=20;

    void fun()
    {
        cout<<"This id from class A"<<endl;
    }
};

class B : public A
{
    public:


    void sumab()
    {
        int c;
        c=a+b;
        printf("The sum of a and b is : %d",c);
    }

    void display()
    {

        cout<<"This is fun calling from class a to calss b"<<endl;
        fun();
    }
};
int main()
{
    B obj;
    obj.display();
    obj.sumab();
    return 0;
}*/


//*****************MODES OF INHERITANCE ************************************


//******************* PUBLIC MODE INHERITANCE***************************
/*class Base
{
    public:       //IN PUBLIC MODE INHERITANCE PUBLIC AND PROTECTED DATA WILL INHERIT
    int a;        //PROTECTED DATA WILL INHERIT BUT IT WILL BE IN PROTECTED MODE ONLY
    char b;       //PRIVATE DATA CAN'T BE INHERIT
    float c;

};

class Derived : public Base
{
public:
void changedata()
{
a = 10;
b = 'A';
c = 1000.00;

cout<< " The value of a is : "<<a<<endl;
cout<< " The char of b is : "<<b<<endl;
cout<< " The float of c : "<<c<<endl;
}

};
int main()
{
Derived obj;
obj.changedata();

}*/

//**********************PRIVATE INHERITANCE *******************************
/*class Base
{public:                             // IN PRIVATE MODE  INHERITANCE
    int a;                           //THE PRIVATE DATE FROM BASE CAN'T  BE INHERIT TO DERIVED CLASS
    private:                         // WE CAN'T INHERIT THE PRIVATE DATEA ANYWHERE
    char b;                          // BOTH PUBLIC AND PROTECTED DATA INHERIT AND CONVERTED INTO PRIVATE
    protected:
    float c;
};
class Derived : private Base
{
    public:

void changedata()
{
    a = 10;
    b = 'A';
    c = 2000.00;

cout<< " The value of a is : "<<a<<endl;
cout<< " The char of b is : "<<b<<endl;
cout<< " The float of c : "<<c<<endl;

}

};

int main()
{
    Derived obj;
    obj.changedata();
}*/





//**********************PROTECTED INHERITANCE *******************************
/*class Base
{public:                             // IN PROTECTED MODE  INHERITANCE
    int a;                           //BOTH PUBLIC AND PROTECTED DATA CAN BE INHERITA AND CONVERTED IN TO PROTECTED
    //private:                         // WE CAN'T INHERIT THE PRIVATE DATE ANYWHERE
    char b;
    protected:
    float c;
};
class Derived : protected Base
{
    public:

void changedata()
{
    a = 10;
    b = 'A';
    c = 2000.00;

cout<< " The value of a is : "<<a<<endl;
cout<< " The char of b is : "<<b<<endl;
cout<< " The float of c : "<<c<<endl;

}

};

int main()
{
    Derived obj;
    obj.changedata();
}*/



//********************************SINGLE INHERITANCE*************************


/*class Base
{
    public:
    Base()
    {
        cout<<"Base ctor"<<endl;
    }
    ~Base()
    {
        cout<<"Base dtor"<<endl;
    }
};
class Derived : public Base
{
    public:
    Derived()
    {
        cout<<"Derived ctor"<<endl;
    }
    ~Derived()
    {
        cout<<"Derived dtor"<<endl;
    }
};

int main()
{
    Derived obj;
}*/

//********************************MULTIPLE INHERITANCE**********************************

/*class Base1
{
    public:
    Base1()
    {
        cout<<"base1 ctor"<<endl;
    }
    ~Base1()
    {
        cout<<"base1 detor"<<endl;
    }
};
class Base2
{
    public:

    Base2()
    {
        cout<<"base2 ctor"<<endl;
    }
    ~Base2()
    {
        cout<<"base2 detor"<<endl;
    }
};

class Derived : public Base1,Base2
{
    public:
    Derived()
    {
        cout<<"Derived ctor"<<endl;
    }
    ~Derived()
    {
        cout<<"Derived dtor"<<endl;
    }
};

int main()
{
    Derived obj;
}*/


//******************************MULTILEVEL INHERITANCE*********************************


/*class Base1
{
    public:
    Base1()
    {
        cout<<"Base1 ctor"<<endl;
    }
    ~Base1()
    {
        cout<<"Base1 dtor"<<endl;
    }
};

class Base2 : public Base1
{
    public:
    Base2()
    {
        cout<<"Base2 ctor"<<endl;
    }
    ~Base2()
    {
        cout<<"Base2 detor"<<endl;
    }
};
class Derived : public Base2
{
    public:
    Derived()
    {
        cout<<"Derived ctor"<<endl;
    }
    ~Derived()
    {
        cout<<"Derived dtor"<<endl;
    }
};
int main()
{
    Derived obj;
}*/


//***************************HIERARICHAL INHERITANCE**************************************


/*class Base
{
    public:
    Base()
    {
        cout<<"Base ctor"<<endl;
    }
    ~Base()
    {
        cout<<"Base dtor"<<endl;
    }
};

class Derived1 : public Base
{
    public:
    Derived1()
    {
        cout<<" Derived1 ctor"<<endl;

    }
   ~ Derived1()
   {
   cout<<"Derived1 dtor"<<endl;
   }
};
class Derived2 : public Base
{
    public:
    Derived2()
    {
        cout<<"Derived2 ctor"<<endl;
    }
    ~Derived2()
    {
    cout<<"Derived2 dtor"<<endl;
    }
};
int main()
{
    Derived1 obj;
    Derived2 obj1;
}*/


//*******************************HYBRID INHERITANCE*****************************


/*class Base
{
    public:
    Base()
    {
        cout<<"Base ctor"<<endl;
    }
    ~Base()
    {
        cout<<"Base dtor"<<endl;
    }
};

class Derived1 : public Base
{
    public:
    Derived1()
    {
        cout<<" Derived1 ctor"<<endl;

    }
   ~ Derived1()
   {
   cout<<"Derived1 dtor"<<endl;
   }
};
class Derived2 : public Base
{
    public:
    Derived2()
    {
        cout<<"Derived2 ctor"<<endl;
    }
    ~Derived2()
    {
    cout<<"Derived2 dtor"<<endl;
    }
};

class Derived3: public Derived2
{
    public:
    Derived3()
    {
        cout<<"Derived3 ctro"<<endl;
    }
    ~Derived3 ()
    {
        cout<<"Derived3 dtor"<<endl;
    }
};
int main()
{

    Derived3 obj;
}*/


/*#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int stringlength(char []);

int main()
{
    char str[30];
    int len;
    printf("enter the string :");
    gets(str);
    len=stringlength(str);
    printf("The length of the string : %d ",len);
}

int stringlength(char x[])
{
    int i=0,count =0;
    while(x[i]!='\0')
    {
        count++;
        i++;
    }
    return count;
}*/

/*class A
{
    public:
    A()
    {
        cout<<"class A ctor"<<endl;
    }
    void display()
    {
        cout<<"This is  classA"<<endl;
    }
};
class B : public A
{
    public:
    B()
{
    cout<<" class B ctor"<<endl;
}
void display()
{
    cout<<"this is class B"<<endl;
}
};
int main()
{
    A *ptr;
    B obj;
    ptr=&obj;
    ptr ->display();

}*/

/*#include<iostream>
using namespace std;


class A
{
    public:
    A()
    {
        cout<<"class A ctor"<<endl;
    }
    void display()
    {
        cout<<"This is  classA"<<endl;
    }
    void printdata();
};
class B : public A
{
 public:
   B()
{
    cout<<" class B ctor"<<endl;

virtual void display()
{
    cout<<"this is class B"<<endl;
}

void getdata();
};
int main()
{
    A *ptr;
    B objB;
    ptr=&objB;
    ptr ->display();
    //ptr ->getdata();
    //ptr -> printdata();
    objB.getdata();


}*/









