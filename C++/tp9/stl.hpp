#ifndef STL

#define STL

#include <algorithm>
#include <vector>
#include <iostream>
#include <iterator>
#include <stack>  //pour la pile
#include <string>
#include <cstring>
#include <queue> //Defined in header <queue> sur cppreference

using std::endl;
using std::cout;
using std::string;

class ZZ{
  string prenom, nom;
  double note;
public:
  ZZ();
  ZZ(string, string, double);
  ~ZZ();
  const string& getPrenom() const;
  const string& getNom() const;
  const double& getNote() const; //& pour ne pas faire de copie
  bool operator<(const ZZ&) const; //opérateur interne (à la classe)
  // const lié au premier argument const ZZ&
  // et "const ZZ&" lié au second argument dans le cpp
};

class Cmp
{
public:
  bool operator<(const ZZ&) const;
};

std::ostream& operator<<(std::ostream&, const ZZ&); //externe à la classe donc pas d'inversion des const (cf. photos et stl.cpp)

typedef std::vector<ZZ>  vzz;
// OU en C++ 2011
// using vzz = std::vector<ZZ> ;

#endif
