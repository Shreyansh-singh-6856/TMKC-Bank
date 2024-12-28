#include <iostream>

void showbalance(int &amt){

    std::cout << "current balance : " << amt << '\n';

}

void withdraw(int &amt){
    int withdraw;
    std::cout << "Enter ammount ->" ;
    std::cin >> withdraw;
   
   if (withdraw<= amt)
   {
            amt-=withdraw;
             std::cout << "Withdraw sucessfully \n " << "Current Balance : " << amt;
   }
   else{std::cout << "Insufficient Balance\n"; 
   std::cout  << "Current Balance : " << amt;}
   
}

void deposite(int &amt){
    int deposit;
    std::cout << "Enter ammount -> \n";
    std::cin >> deposit;
    if(deposit>0){ amt+=deposit; std::cout << "Deposited sucessfully\n" << "Current Balance : " << amt;}
    else{std::cout << "invalid deposit ammount";}
}

void exit_message(){
    std::cout << "Thanks come again!!!";
}

int main() {

     std::string input;
      int amt=0;

    do{

        std::cout << "\n******* TMKC National Bank *********\n";

    std::cout << "Choose!! -> \n" << "d. -> Deposit\n" << "w. -> Withdrawl\n" << "b. -> Check Balance \n" << "e. -> exit \n";

    std::cin >> input;

    switch(input[0]){
        case 'b' : showbalance(amt);
        break;
        case 'd' : deposite(amt);
        break;
        case 'w' : withdraw(amt);
        break;
        case 'e' : exit_message();
        break;
        default : std::cout << "invalid try again";
        break;
    }}while (input[0]!= 'e');
  
    


    return 0;

}