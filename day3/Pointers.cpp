#include <iostream>

   using namespace std;

//int main(){
/*
  int number = 10;

  int* ptr = &number;

  *ptr = 20;
  cout <<number;
*/

/*int a = 20;
int *p;
p = &a;

cout << *p <<endl;


 */

/*void increasePrice(double& price) {
price *=1.2;


}
int main(){

    double price = 100;
    increasePrice(price);
    cout <<price;
*/

//EXERCISE ..


void swap(int* first , int* second) {
    int temp = *first;
    *first = *second;
    *second = temp;

}

int main(){
   /* int x = 10;
    int y = 20;
    swap(x , y);

    cout <<x << " , " << y;
*/
  /* int numbers[] = {10,40,49,};
   int* moha = &numbers[size(numbers) -1];
   while(moha >= numbers){
       cout <<*moha <<endl;
       moha--;
   }
*/


  int* numbers = new int[6];
  int entries = 0;

  while(true){
      cout <<"number: ";
      cin >> numbers[entries];
      if (cin.fail()) break;
      entries++;
  }

  for (int i = 0; i < entries; i++)
      cout <<numbers[i] <<endl;

    return 0;


}