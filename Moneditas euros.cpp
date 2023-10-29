#include <iostream>
using namespace std;

int main () {
int euro1, euro2, euro5, euro10, euro20, euro50, euro100, euro200, euro500, cen1, cen2, cen5, cen10, cen20, cen50, cen, euro;
cin >> euro;
cin >> cen;
 euro500 = euro / 500;
euro %= 500;
euro200 = euro / 200;
euro %= 200;
euro100 = euro / 100;
euro %= 100;
euro50 = euro / 50;
euro %= 50;
euro20 = euro / 20;
euro %= 20;
euro10 = euro / 10;
euro %= 10;
euro5 = euro / 5;
euro %= 5;
euro2 = euro / 2;
euro1 = euro%2;
cen50 = cen / 50;
cen %= 50;
cen20 = cen / 20;
cen %= 20;
cen10 = cen / 10;
cen %= 10;
cen5 = cen / 5;
cen %= 5;
cen2 = cen / 2;
cen1 = cen % 2;
cout<<"Banknotes of 500 euros: " <<euro500<< endl;
cout <<"Banknotes of 200 euros: "<<euro200<<endl;
cout <<"Banknotes of 100 euros: "<<euro100<< endl;
cout <<"Banknotes of 50 euros: "<<euro50<<endl;
cout <<"Banknotes of 20 euros: "<<euro20<< endl;
cout <<"Banknotes of 10 euros: "<<euro10<< endl;
cout <<"Banknotes of 5 euros: "<<euro5<< endl;
cout <<"Coins of 2 euros: "<<euro2<< endl;
cout <<"Coins of 1 euro: "<<euro1<<endl;
cout <<"Coins of 50 cents: "<<cen50<<endl;
cout <<"Coins of 20 cents: "<< cen20<<endl;
cout <<"Coins of 10 cents: " <<cen10<<endl;
cout <<"Coins of 5 cents: "<< cen5<<endl;
cout <<"Coins of 2 cents: "<<cen2<< endl;
cout <<"Coins of 1 cent: "<<cen1<<endl;
}
