#include <iostream>
using namespace std;

class Human{
    private:
        int d, m, y;
        string name;
    public:
        void messege () {
            cout << "Happy Birthday - " << name << endl;
        }
        void set(int day, int month, int year){
            d = day;
            m = month;
            y = year;
        }

        void setName(string nameOfPerson){
            name = nameOfPerson;
        }

        void get () {
            cout << " day " << d << " month " << m << " year " << y << endl;
         }
};

int main() {
    Human dias;
    dias.setName("Dias");
    dias.messege();
    dias.set(16,03,2002);
    dias.get();

    return 0;
}