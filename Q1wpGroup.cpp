//write a code to reverse a number.
#include<iostream>
int reverseNumber(int num){
    int reversed_num = 0;
    while(num!=0){
        int digit = num % 10;
        reversed_num = reversed_num * 10 + digit;
        num/=10;
    }
}
int main()
{
    int num = 123456;

}