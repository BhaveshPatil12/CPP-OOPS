#include<iostream>
using namespace::std;
class World {
  public:
    World() {
      cout << "This is World!\n";
    }
};
class Continent: public World {
  public: 
    Continent() {
      cout << "This is Continent\n";
    }
};
class Country {
  public:
    Country() {
      cout << "This is the Country\n";
    }
};
class India: public Continent, public Country {
  public: 
    India() {
      cout << "This is India!";
    }
};
int main() {
  India myworld;
  return 0;
}