#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Person
{
   string name;
   int age;
   int seq;
};

bool cmp(const Person &v, const Person &u)
{
   if (v.age == u.age)
      return (v.seq < u.seq);
   else
      return (v.age < u.age);
}

int main(void)
{
   int n;
   cin >> n;
   vector<Person> person(n);
   for (int i = 0; i < n; i++)
   {
      cin >> person[i].age >> person[i].name;
      person[i].seq = i;
   }
   sort(person.begin(), person.end(), cmp);
   for (int i = 0; i < n; i++)
   {
      cout << person[i].age << " " << person[i].name << '\n';
   }
   return 0;
}