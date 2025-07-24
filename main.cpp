#include <iostream>
using namespace std;
class node{
public:
    int data;
    node* next;
    node(){
        data=0;
        next=NULL;
    }
};
class DriveThruSystem{
public:
    node *backk;
    node *front;
    DriveThruSystem(){
        backk=front=NULL;
    }
    bool isempty(){
        if (front==NULL&&backk==NULL){
            return true;
        } else return false;
    }

     void Enqueue(int item){

        node*newnode=new node();
        newnode->data=item;
         if (isempty()){
             backk=newnode;
             front=newnode;
         }
         else{
             backk->next=newnode;
             backk=newnode;
         }
    }
    void display(){
        node*temp=front;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    };
    void Dequeue(){
        if (isempty()){
        } else if (front==backk){
            delete front;
            front=backk=NULL;

        }
        else{
            node*delptr=front;
            front=front->next;
            delete delptr;
        }

    }

    void countfunction() {
        int count = 0;

        node *temp = front;
        while (temp != NULL) {

            temp = temp->next;
            count++;
        }
        cout << "{{counter}} : " <<count<< endl;
    }
};



int menu(int oldCost){
    cout<<"                                        {{{{welcome in our restaurant}}}}"<<endl;
cout<<"   "<<endl;
cout<<"   "<<endl;
cout<<"we have in the food section :"<<endl;

cout<<"    a.smashed burger = 20$"<<endl;
cout<<"    b.hot dog = 15$"<<endl;
cout<<"    c.fried chicken = 17$"<<endl;
cout<<"    d.fries = 7$"<<endl;
cout<<"    e.pizza = 25$"<<endl;
cout<<"   "<<endl;
cout<<"   "<<endl;

cout<<"we have in the drinks section :"<<endl;
cout<<"    a.cola = 10$"<<endl;
cout<<"    b.sprite = 10$"<<endl;
cout<<"    c.pepsi = 10$"<<endl;
cout<<"    d.fanta = 10$"<<endl;
cout<<"    e.cola diet = 10$"<<endl;
cout<<"   "<<endl;
string food;
string drink;
cout<<"Which food you want ? "<<endl;
cin>>food;
cout<<"Choose your drink"<<endl;
cin>>drink;

int totalCost = oldCost;

    if (food == "a") {
        totalCost += 20;
    } else if (food == "b") {
        totalCost += 15;
    } else if (food == "c") {
        totalCost += 17;
    } else if (food == "d") {
        totalCost += 7;
    } else if (food == "e") {
        totalCost += 25;
    }

    if (drink == "a" || drink == "b" || drink == "c" || drink == "d" || drink == "e") {
        totalCost += 10;
    }


    return totalCost;


}

int main(){
    DriveThruSystem x;
int car;

cout<<"                                         /- - - - - - - - - - - - - - - - - - - - - - -/"<<endl;
cout<<"                                        /                                             /"<<endl;
cout<<"                                       /             AE DRIVE THRU                   /"<<endl;
cout<<"                                      /                 OPEN                        /"<<endl;
cout<<"                                     /- - - - - - - - - - - - - - - - - - - - - - -/"<<endl;
cout<<"   "<<endl;
cout<<"   "<<endl;
cout<<"enter 1st car "<<endl;
cin>>car;
x.Enqueue(car);
cout<<"enter 2nd car "<<endl;
cin>>car;
x.Enqueue(car);
cout<<"enter 3rd car "<<endl;
cin>>car;
x.Enqueue(car);
cout<<"enter 4th car "<<endl;
cin>>car;
x.Enqueue(car);
cout<<"enter 5th car "<<endl;
cin>>car;
x.Enqueue(car);
cout<<"enter 6th car "<<endl;
cin>>car;
x.Enqueue(car);
x.display();
cout<<"  "<<endl;

cout<<"                                                 --car number 1--"<<endl;


int totalCost=0;
totalCost=menu(totalCost);
cout<<"do you want anything else"<<endl;
string ans;
cin>>ans;
if(ans=="Yes"||ans=="yes"){
totalCost=menu(totalCost);
}
cout<<"  "<<endl;
double discount=0;
if(totalCost>50){
    cout<<"-thank you. please go to the next window"<<endl;
    cout<<"-your order number is 71 "<<endl;
    cout << "-Total cost of your order= $" << totalCost << endl;
    discount=totalCost*10/100;

cout<<"-the total after discount = $"<<totalCost-discount<<endl;
}else{
    cout<<"  "<<endl;
    cout<<"-thank you. please go to the next window"<<endl;
    cout<<"-your order number is 71 "<<endl;
    cout << "-Total cost of your order= $" << totalCost << endl;
    cout<<"  "<<endl;
}
cout<<"  "<<endl;
x.Dequeue();
x.countfunction();
cout<<"                                       -------------------------------------"<<endl;



cout<<"                                                 --car number 2--"<<endl;
totalCost=0;
totalCost=menu(totalCost);
cout<<"do you want anything else"<<endl;
cin>>ans;
if(ans=="Yes"||ans=="yes"){
totalCost=menu(totalCost);


}
cout<<"  "<<endl;
if(totalCost>50){
    cout<<"-thank you. please go to the next window"<<endl;
    cout<<"-your order number is 72 "<<endl;
    cout << "-Total cost of your order= $" << totalCost << endl;
    discount=totalCost*10/100;

cout<<"-the total after discount = $"<<totalCost-discount<<endl;
}else{
    cout<<"  "<<endl;
    cout<<"-thank you. please go to the next window"<<endl;
    cout<<"-your order number is 72 "<<endl;
    cout << "-Total cost of your order= $" << totalCost << endl;
    cout<<"  "<<endl;
}
cout<<"  "<<endl;
x.Dequeue();
x.countfunction();

cout<<"                                       -------------------------------------"<<endl;



cout<<"                                                 --car number 3--"<<endl;
totalCost=0;
totalCost=menu(totalCost);
cout<<"do you want anything else"<<endl;
cin>>ans;
if(ans=="Yes"||ans=="yes"){
totalCost=menu(totalCost);

}
cout<<"  "<<endl;
if(totalCost>50){
    cout<<"-thank you. please go to the next window"<<endl;
    cout<<"-your order number is 73 "<<endl;
    cout << "-Total cost of your order= $" << totalCost << endl;
    discount=totalCost*10/100;

cout<<"-the total after discount = $"<<totalCost-discount<<endl;
}else{
    cout<<"  "<<endl;
    cout<<"-thank you. please go to the next window"<<endl;
    cout<<"-your order number is 73 "<<endl;
    cout << "-Total cost of your order= $" << totalCost << endl;
    cout<<"  "<<endl;
}
cout<<"  "<<endl;
x.Dequeue();
x.countfunction();
cout<<"                                       -------------------------------------"<<endl;



cout<<"                                                 --car number 4--"<<endl;
totalCost=0;
totalCost=menu(totalCost);
cout<<"do you want anything else"<<endl;
cin>>ans;
if(ans=="Yes"||ans=="yes"){
totalCost=menu(totalCost);


}
cout<<"  "<<endl;
if(totalCost>50){
    cout<<"-thank you. please go to the next window"<<endl;
    cout<<"-your order number is 74 "<<endl;
    cout << "-Total cost of your order= $" << totalCost << endl;
    discount=totalCost*10/100;

cout<<"-the total after discount = $"<<totalCost-discount<<endl;
}else{
    cout<<"  "<<endl;
    cout<<"-thank you. please go to the next window"<<endl;
    cout<<"-your order number is 74 "<<endl;
    cout << "-Total cost of your order= $" << totalCost << endl;
    cout<<"  "<<endl;
}
cout<<"  "<<endl;
x.Dequeue();
x.countfunction();
cout<<"                                      -------------------------------------"<<endl;




cout<<"                                                 --car number 5--"<<endl;
totalCost=0;
totalCost=menu(totalCost);
cout<<"do you want anything else"<<endl;
cin>>ans;
if(ans=="Yes"||ans=="yes"){
totalCost=menu(totalCost);


}
cout<<"  "<<endl;
if(totalCost>50){
    cout<<"-thank you. please go to the next window"<<endl;
    cout<<"-your order number is 75 "<<endl;
    cout << "-Total cost of your order= $" << totalCost << endl;
    discount=totalCost*10/100;

cout<<"-the total after discount = $"<<totalCost-discount<<endl;
}else{
    cout<<"  "<<endl;
    cout<<"-thank you. please go to the next window"<<endl;
    cout<<"-your order number is 75 "<<endl;
    cout << "-Total cost of your order= $" << totalCost << endl;
    cout<<"  "<<endl;
}
cout<<"  "<<endl;

x.Dequeue();
x.countfunction();
cout<<"                                      -------------------------------------"<<endl;



cout<<"                                                 --car number 6--"<<endl;
totalCost=0;
totalCost=menu(totalCost);
cout<<"do you want anything else"<<endl;
cin>>ans;
if(ans=="Yes"||ans=="yes"){
totalCost=menu(totalCost);

}
cout<<"  "<<endl;
if(totalCost>50){
    cout<<"-thank you. please go to the next window"<<endl;
    cout<<"-your order number is 76 "<<endl;
    cout << "-Total cost of your order= $" << totalCost << endl;
    discount=totalCost*10/100;

cout<<"-the total after discount = $"<<totalCost-discount<<endl;
}else{
    cout<<"  "<<endl;
    cout<<"-thank you. please go to the next window"<<endl;
    cout<<"-your order number is 76 "<<endl;
    cout << "-Total cost of your order= $" << totalCost << endl;
    cout<<"  "<<endl;
}
cout<<"  "<<endl;
x.Dequeue();
x.countfunction();
cout<<"                                     -------------------------------------"<<endl;




    cout<<"                                <<<<there is no another cars in the drive thru>>>>"<<endl;


cout<<"   "<<endl;
cout<<"   "<<endl;
cout<<"                                         /- - - - - - - - - - - - - - - - - - - - - - -/"<<endl;
cout<<"                                        /                                             /"<<endl;
cout<<"                                       /             AE DRIVE THRU                   /"<<endl;
cout<<"                                      /                 CLOSE                       /"<<endl;
cout<<"                                     /- - - - - - - - - - - - - - - - - - - - - - -/"<<endl;
cout<<"   "<<endl;
cout<<"   "<<endl;
    return 0;
}
