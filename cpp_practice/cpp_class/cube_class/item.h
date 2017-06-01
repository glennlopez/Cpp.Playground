#ifndef ITEM_H
#define ITEM_H

class SphereClass{
  public:
    SphereClass(void);

  private:
    double radius;
    double volume;  //<-- (4/3)pi*(radius)^3
};

class CubeClass{
  public:
    CubeClass(void);

    //setter
    void setEdge(double param);

    //getter
    double getEdge(void);
    double getVolume(void);


  private:
    double edge;
    double volume;  //<-- edge^3
};

#endif // ITEM_H
