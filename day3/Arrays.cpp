

#include <iostream>
    using namespace std;




//int main() {
    /* int first[] = {10, 30, 89, 00};
     int second[] = {10, 3, 89, 00};

     bool areEqual = true;
     for (int i = 0; i < size(first); i++)
         if (first[i] != second[i]){

             areEqual = false;
             break;
         }
     cout << boolalpha <<areEqual <<endl;
 */


/*void printNumbers(int numbers[], int size){
    for (int i= 0; i<size; i++)
        cout << numbers[i] <<endl;
}

   int main(){

  int numbers[] = {10,20,30};
       printNumbers( numbers , size(numbers));
*/
//EVERCISE TO SOLVED
    int find(int numbers [] , int size , int target){
        for (int i = 0 ; i < size ; i++)
            if(numbers [i] == target  )
                return i;
        return -2;
    }

    int main(){
        int numbers[] = {10 , 20 , 30};
        cout <<find (numbers , size(numbers), 1);




        return 0;
    }




}
