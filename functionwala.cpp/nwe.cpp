#include <iostream>
using namespace std;
void akriti()
{
    cout<<"I am beautiful"<<endl;
    return;//return lekhna compulsory xaina void ko case me but for other it's complusion
}
void adarsha()
{
    cout<<"you are handsome"<<endl;
    akriti();//main function bahek aru function ma ni function call hunxa
}
int main(){//main function generally tala lekhinxa
adarsha();//yo function call ;gareyko ho
return 0;}//c++ mw main fun ko case me return nalekhyani by default hunxa

/*suru ma main function ma janxa,tya adarsha function lai call gareyxa so aba adarsha fun me gayo tya 
cout mw vako display hunxa ani akriti vaney function lai call gareou ani tya ko cout display vhayo*/
