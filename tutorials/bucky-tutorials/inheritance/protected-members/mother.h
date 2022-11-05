#ifndef MOTHER_H
#define MOTHER_H
// base class: class your inheriting from
class Mother {

  // any other file has access to this
public:
  int publicv;

  // anything inside class has access
  // and any friend has access to it
  // and derived class has access
protected:
  int protectedv;

  // only this file has access to this
private:
  int privatev;
};
#endif // !MOTHER_H
