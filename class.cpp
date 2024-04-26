#include <bits/stdc++.h>
using namespace std;

class Hero{

    //properties
    private:
    int health;
    public:
    char* name;
    char level;

    //constructor
    Hero(){
        cout<<"Default Constructor called"<<endl;
        name=new char[100];
    }

    //parameterised constrictor
    Hero(int health){
        this->health=health;
    }

    Hero(int health, char level){
        this->health=health;
        this->level=level;
    }

    //copy constructor
    Hero(Hero& temp){

        char *ch=new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name=ch;
        cout<<"copy constrcutor called"<<endl;
        this->health=temp.health;
        this->level=temp.level;
    }

    void print(){
        cout<<endl;
        cout<<"Name: "<<this->name<<" ,";
        cout<<"level "<<this->level<<" ,";
        cout<<"health "<<this->health<<endl;
        cout<<endl;
    }

    int getHealth(){
        return health;
    }

    char getlevel(){
        return level;
    }

    void setHealth(int h){
        health=h;
    }

    void setLevel(char ch){
        level=ch;
    }

    void setName(char name[]){
        this->name=name;
    }

    ~Hero(){
        cout<<"Destructor called"<<endl;
    }
}; 

int main(){

    //static
    Hero a;

    //dynamic
    Hero* b=new Hero();
    //manually destructor called
    delete b;










    //create an object
    // Hero hero1;
    // hero1.setHealth(12);
    // hero1.setLevel('D');
    // char name[7]="ankush";
    // hero1.setName(name);

    // //hero1.print();

    // //use default copy constructor
    // Hero hero2(hero1);
    // //hero2.print();

    // hero1.name[0]='G';
    // hero1.print();
    // hero2.print();

    // hero1=hero2;

    // hero1.print();
    // hero2.print();











    // Hero S(70,'C');
    // S.print();

    // //Copy constrcutor
    // Hero R(S);
    // R.print();

    
    
    
    
    
    
    
    
    // //object created statically
    // //cout<<"hi"<<endl;
    // Hero ramesh(10);
    // ramesh.print();

    // // cout<<"Hello"<<endl;
    // // cout<<"Health: "<<ramesh.getHealth()<<endl;

    // //dynamically;
    // Hero* h=new Hero(90);
    // h->print();

    // Hero r(99,'B');
    // r.print();






    /*
    //static 
    Hero a;
    a.setHealth(90);
    a.setLevel('B');
    cout<<"level "<<a.level<<endl;
    cout<<"health "<<a.getHealth()<<endl;


    //dynamic
    Hero* b=new Hero;
    b->setHealth(30);
    b->setLevel('A');
    cout<<"level "<<b->level<<endl;
    cout<<"health "<<b->getHealth()<<endl;
    */
    
    
    // //made an object
    // Hero ramesh;

    // //using getter
    // cout<<"Health is: "<<ramesh.getHealth()<<endl;
    // //ramesh.health=70;
    // ramesh.level='A';

    // //using setter
    // ramesh.setHealth(90);
    // cout<<"Health is: "<<ramesh.getHealth()<<endl;



}
