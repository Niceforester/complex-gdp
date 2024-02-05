#include <iostream>

class Vertex
{
public:
  // Construction
  Vertex(float x,float y, float z) : x_(x), y_(y), z_(z) {}

  // Getters
  float getX() const {return x_;}
  float getY() const {return y_;}
  float getZ() const {return z_;}

  // Setters
  void setX(float val) {x_ = val;}
  void setY(float val) {y_ = val;}
  void setZ(float val) {z_ = val;}
private:
  float x_;
  float y_;
  float z_;
};

int main()
{
  Vertex v(6.0f,7.2f,3.3f);
  v.setZ(7.7f);
  std::cout << "vertex components are " << v.getX() << ',' << v.getY() << ',' << v.getZ() << std::endl;
}
