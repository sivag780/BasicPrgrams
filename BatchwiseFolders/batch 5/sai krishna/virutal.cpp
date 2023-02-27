#include <iostream>
using namespace std;

class Shape {
  protected:
    int height, width;
  public:
    void set_values (int x, int y)
      {
          width = x; 
          height = y;
      }
      virtual int area ()
      {
          return 0;
      }
};

class Rectangle: public Shape {
  public:
    int area ()
      {
          return width * height;
      }
};

class Triangle: public Shape {
  public:
    int area ()
      { 
          return (width * height / 2);   
      }
};

int main () {
  Rectangle rect;
  Triangle trgl;
  Shape shape_obj;
    
  Shape *shape_ptr = &rect;
  shape_ptr->set_values (10, 20);
  
  cout << "Area of Rectangle is: " << shape_ptr -> area() << '\n';

   shape_ptr = &trgl;
   shape_ptr->set_values (10, 20);
   cout << "Area of Triangle is: " << shape_ptr -> area() << '\n';

   shape_ptr = &shape_obj;
	shape_ptr->set_values (10, 20);
  cout << "Area of Polygon is: " << shape_ptr -> area() << '\n';
   
  return 0;
}
