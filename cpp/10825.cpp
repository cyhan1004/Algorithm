#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
struct Student
{
   string name;
   int kor, eng, math;
};

bool cmp(const Student &u, const Student &v)
{
   if (u.kor == v.kor && u.eng == v.eng && u.math == v.math)
      return (u.name < v.name);
   else if (u.kor == v.kor && u.eng == v.eng)
      return (u.math > v.math);
   else if (u.kor == v.kor)
      return (u.eng < v.eng);
   else
      return (u.kor > v.kor);
}

int main(void)
{
   int n;
   cin >> n;
   vector<Student> student(n);
   
   for (int i = 0; i < n; i++)
   {
      cin >> student[i].name >> student[i].kor >> student[i].eng >> student[i].math;
   }
   sort(student.begin(), student.end(), cmp);
   for (int i = 0; i < n; i++)
   {
      cout << student[i].name << '\n';
   }
   return 0;

}