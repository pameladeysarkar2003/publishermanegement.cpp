#include<iostream>
using namespace std;
class Publication{
    protected:
    float price;
    public:
    void getdata(){
        cout<<"Enter Price:";
        cin>>price;
    }
    void putdata(){
        cout<<"Price:"<<price<<endl;
    }
};

class Book:public Publication{
    private:
    int pageCount:
    public:
    void getdata(){
        cout<<"Enter number of pages:";
        cin>>pageCount;
    }
    void putdata(){
        cout<<"Price:"<<price<<endl;
    }

};
class Book:public Publication{
    private:
    int pageCount;
    public:
    void getdata(){
        cout<<"Enter Number of Page:";
        cin>>pageCount;
    }
    void putdata(){
        cout<<"Number of pages:"<<pageCount<<endl;
    }
};
class TAPE:public Publication{
    private:
    float time;
    public:
    void getdata(){
        cout<<"Enter Time in minutes:";
        cin>>time;
    }
    void putdata(){
        cout<<"Time:"<<time<<endl;
    }
};
main(){
    Book b;
    TAPE t;
    int op;
    cout<<"1.Book Information"<<endl;
    cout<<"2.TAPE Information"<<endl;
    cout<<"---------------------"<<endl;
    cout<<"Please Enter Your Choice:";
    cin>>op;
    switch(op){
        case 1:"Book Information"<<endl;
        b.getdata();
        b.putdata();
        break;
        case 2:
        cout<<"TAPE Information"<<endl;
        t.getdata();
        t.putdata();
        break;
        default:
        cout<<"Invalid Number"<<endl;

        return 0;
    }
}