/* 
You are given an integer N. You need to convert all zeroes of N to 5.

Input:
N = 1004
Output: 1554
Explanation: There are two zeroes in 1004
on replacing all zeroes with "5", the new
number will be "1554".

*/

int convertFive(int n) {
    vector<int> num;

int a = 5;

while(n>0)

{ int digit = n%10;

if(digit == 0){

int a = 5;

num.push_back(a);

}

else{

num.push_back(digit); }

n = n/10; }

int newNumber = 0;

for (int i = num.size() - 1; i >= 0; i--) {

newNumber = newNumber * 10 + num[i]; }

return newNumber;


}
