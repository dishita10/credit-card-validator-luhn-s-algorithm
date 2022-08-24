#include<bits/stdc++.h>
using namespace std;
bool checkLuhn(const string& cardNumber)
{
    int nDigits = cardNumber.length();
 
    int nSum = 0, isSecond = false;
    for (int i = nDigits - 1; i >= 0; i--) {
 
        int d = cardNumber[i] - '0';
 
        if (isSecond == true)
            d = d * 2;
 
        nSum += d / 10;
        nSum += d % 10;
 
        isSecond = !isSecond;
    }
    return (nSum % 10 == 0);
}
 
int main()
{
    string cardNumber;
    cin>>cardNumber;
    if (checkLuhn(cardNumber))
        printf("This is a valid card");
    else
        printf("This is not a valid card");
    return 0;
}