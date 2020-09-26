#include<iostream>
using namespace std;

class Account{
    private:
    int money = 100000;
    int add;
    int password;
    void showMoney(){
        cout<<money<<"$";

    }
    void addMoney(){
        money = money + add;
        cout<<"Transaction Added with capital of : "<<add<<" $"<<endl;
        cout<<"Final capital : "<<money<<" $"<<endl;
    }

    public:
    void inputAmount(int a){
        add = a;

    }
    void showAmount(){
        addMoney();
    }
    void showamount(){
        showMoney();
    }



};


//by default password = user1234
//by default user name = user1234
//by default user ID = 102D
int main(){
    Account acc1;

    string name;
    string ID;
    string password;
    string defaultPassword = "user1234";
    int userCase;
    int i;
    label:
    int addmoney;
    cout<<"-------------------------------------"<<endl;
    cout<<"input user name: "<<endl;
    cin>>name;
    cout<<"input user ID: "<<endl;
    cin>>ID;
    cout<<"input user Password: "<<endl;
    cin>>password;
    cout<<endl;
    cout<<"--------------------------------------"<<endl;
    
    if (name == "user1234" && ID == "102D" && password == defaultPassword ){
        cout<<"Account accessed"<<endl;
        cout<<"\ndo you want to Add MOney or view money \n press '1' to add money \n press '2' to view account \n press '3' to update password"<<endl;
        cin>>userCase;
        switch(userCase){
            case 1:
            cout<<"input amount to add"<<endl;
            cin>>addmoney;
            acc1.inputAmount(addmoney);
            cout<<"final amount is :";
            acc1.showAmount();
            break;
            case 2:
            acc1.showamount();
            cout<<"\n Thank you for Visiting";
            case 3:
            cout<<"so you want to update password"<<endl;
            cout<<"input old password :";
            cin>>password;
            if (password == defaultPassword){
                cout<<"input new password: ";
                cin>>password;
                defaultPassword = password;
                string yn;
                cout<<"do you want to check updated password (y/n) :";
                cin>>yn;
                if(yn == "y"){ 
                 goto label;
                }
                else{
                    cout<<"thank you !";
                }
                
            }
            else{
                cout<<"invalid password !! Try Next time";
            }

            break;
            default:
            cout<<"invalid Entry !! ";
            break;



        }

    }
    else{
        cout<<"wrong input";
        cout<<"try Next time";
       
    }
    
return 0;



}
