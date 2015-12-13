//  Lab IV Part II
//
//  Created by Edgar Esparza on 6/15/15.
//

#include <iostream>
using namespace std;

double owedTax(double grossIncome);
int main() {
    double grossIncome=0;
    cout<<"Please enter your gross income: ";
    cin>>grossIncome;
    if (grossIncome>=0){

        cout<<"The tax is: "<<owedTax(grossIncome)<<endl;
    }
        else{
               cout<<"Invald income";
    }
}
    double owedTax(double grossIncome){
    if (grossIncome>=336550)
        return(97653+(.35*(grossIncome-336550)));
        else if (grossIncome<336550 && grossIncome>=154800)
            return(37675.50+(.33*(grossIncome-154800)));
            else if (grossIncome<154800 && grossIncome>=74200)
                return(15107.50+(.28*(grossIncome-74200)));
                else if (grossIncome<74200 && grossIncome>=30650)
                    return(4220+(.25*(grossIncome-30650)));
                    else if (grossIncome<30650 && grossIncome>7550)
                        return(755+(.15*(grossIncome-7550)));
                        else;
                            return(0.1*grossIncome);
    
    return 0;
}
