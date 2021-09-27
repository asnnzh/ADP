#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <random>
using namespace std;

class Person {
public:
    //Attribute
    string name;
    int age;
    int luck;

     Person() {}; //Constructer
     Person(string n, int a, int l) {
        name = n;
        age = a;
        luck = l;
    }
    //Setter
    void setName(string n) {
        name = n;

    }
    void setAge(int a) {
        age = a;
    }
    void setLuck(int l) {
        luck = l;
    }
    // Getter
    string getName() {
        return name;
    }
    int getAge() {
        return age;
    }
    int getLuck() {
        return luck;
    }
};
int main() {
    // Create Person objects and call the constructor with different values
    Person person1("Nazira", 17,0);
    Person person2("Nazgul", 18, 0);
    Person person3("Nazerke", 19, 0);
    Person person4("Daryn", 21, 0);
    Person person5("Dauren", 23, 0);
    int size = 10;
    srand(time(NULL));
    vector<int> Luck;
    for (int i = 0; i < 5; ++i) {
        Luck.push_back(rand() % size + 1); //random
    }
    cout << "Name:" << person1.name << " " << "Age:" << person1.age << "\n";
    cout << "Name:" << person2.name << " " << "Age:" << person2.age << "\n";
    cout << "Name:" << person3.name << " " << "Age:" << person3.age << "\n";
    cout << "Name:" << person4.name << " " << "Age:" << person4.age  << "\n";
    cout << "Name:" << person5.name << " " << "Age:" << person5.age << "\n";
    cout << "The luckiest number" << *max_element(Luck.begin(), Luck.end());

    //for (int i = 0; i < 5; ++i) {
        //cout << Luck.at(i) << ", ";
    //cout << *max_element(Luck.begin(), Luck.end());
    //}
    //for (int i = 0; i < 5; ++i) {
        //cout << Luck.at(i);
       // int a, b;
      //  a = Luck.at(i);
       // b = Luck.at(i);
      //  cout << a << " ";
   // }
    return 0;
}
