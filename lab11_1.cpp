#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    int id;
    // เพิ่มเอาเอง
    string name;
    int age;
    double height;
public:
    Student(int i, string n, int a, double h)
    {
        id = i;
        name = n;
        age = a;
        height = h;
    }

    int getId()
    {
        return id;
    }
    // เพิ่มเอาเอง
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    double getHeight()
    {
        return height;
    }
};

int main ()
{
    Student Noctis(36548, "Noctis",20,176);
    Student Ignis(36549, "Ignis",22,183);
    Student gladiolus(36550, "gladiolus",23,198);
    Student prompto(36551, "prompto",20,173);

    cout << "Id : " << Noctis.getId() << endl ;
    cout << "Name : " << Noctis.getName() << endl ;
    cout << "Age : " << Noctis.getAge() << endl ;
    cout << "Height : " << Noctis.getHeight() << endl ;

    cout << "Id : " << Ignis.getId() << endl ;
    cout << "Name : " << Ignis.getName() << endl ;
    cout << "Age : " << Ignis.getAge() << endl ;
    cout << "Height : " << Ignis.getHeight() << endl ;

    cout << "Id : " << gladiolus.getId() << endl ;
    cout << "Name : " << gladiolus.getName() << endl ;
    cout << "Age : " << gladiolus.getAge() << endl ;
    cout << "Height : " << gladiolus.getHeight() << endl ;

    cout << "Id : " << prompto.getId() << endl ;
    cout << "Name : " << prompto.getName() << endl ;
    cout << "Age : " << prompto.getAge() << endl ;
    cout << "Height : " << prompto.getHeight() << endl ;

    return 0;
}
