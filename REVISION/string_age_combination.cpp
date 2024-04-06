#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Person
{
  string name;
  int age;

public:
  Person(string Name, int Age)
  {
    name = Name;
    age = Age;
  }
  string getName()
  {
    return name;
  }
  int getAge()
  {
    return age;
  }
};

int main()
{
  cout << "Enter total: ";
  int n;
  cin >> n;
  vector<Person> persons;
  for (int i = 0; i < n; i++)
  {
    cout << "Enter name: ";
    string name;
    cin >> name;
    cout << "Enter age: ";
    int age;
    cin >> age;
    Person p(name, age);
    persons.push_back(p);
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (persons[i].getAge() < persons[j].getAge())
      {
        swap(persons[i], persons[j]);
      }
    }
  }

  for (int i = 0; i < n; i++)
  {
    cout << persons[i].getName() << ' ' << persons[i].getAge() << endl;
  }
  return 0;
}
//fdf