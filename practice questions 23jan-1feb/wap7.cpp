// #include <iostream>
// using namespace std;

// int findElectricityBill(float units){
//   // 134 , 50 at 0.5 , 134-50 = 84
//   float bill;
//   int remainingUnits;
//   if(units <50){
//     bill = units*0.5;
//   }
//   else if(units <150){
//     remainingUnits = units - 50;
//     bill = 50*0.5 + remainingUnits*0.75;
//   }
//   else if(units <100){
//     remainingUnits = units - 150;
//     bill = 50*0.5 + 100*0.75 + remainingUnits *1.2;
//   }
//   else{
//     remainingUnits = units - 250;
//     float startingBill = 50*0.5 + 100*0.75 + 100*1.2 + remainingUnits * 1.5;
//     bill = startingBill + startingBill*0.2;
//   }
//   return bill;
// }
// int main(){
//   int units;
//   cout << "Enter the no. of units";
//    cin >> units;
//   float finalBill = findElectricityBill(units);
//   cout << finalBill;
// }