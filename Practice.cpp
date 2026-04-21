#include <iostream>
using namespace std;

class Item {
    private:
        string name;
        int id;
        static int count;

    public:
        Item(string name, int it) : name(name), id(id) {
            count++;
        }

    void setName(string name){
        this->name = name;
    }
    string getName(){
        return name;
    }
    static int getCount(){
        return count;
    }
    ~Item(){
        cout << "Destructor was called for " << name << endl;
        count--;
    }
};

int Item::count = 0;

class Electronics : public Item {
    private:
     str
}