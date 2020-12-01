#include <stdio.h>
long long int gcd(long long int a,long long int b) // function to find gcd of two nos
{
    if(b==0)
    return a; // base condition
    
    return gcd(b,a%b); // recursive condition 
}
long long int lcm(long long int a,long long int b)
{
    long long int prod=a*b;
    return prod/(gcd(a,b)); // returns lcm of a and b
}
int main()
{
    long long int t; // variable to store no of test cases
    scanf("%lld",&t); // to take user input
    long long int n; // to store no of input value
    for(long long int i=0;i<t;i++) // loop through 
    {
        scanf("%lld",&n); // to take user input
        long long int arr[n]; // to store n integers whose lcm is to be calculated
        for(long long int j=0;j<n;j++)
        {
            scanf("%lld",&arr[j]); // looping and taking input from user for n integers
        }
        // lcm is commutative
        //LCM(a, b, c) = LCM(LCM(a, b), c) = LCM(a, LCM(b, c))
        long long int l=lcm(arr[0],arr[1]); // to store lcm of given nos
        for(long long int j=2;j<n;j++)
        {
            l=lcm(l,arr[j]); // iteratively calling lcm function as lcm is commutative
        }
        printf("Case #%lld: %lld\n",i+1,l); // output lcm to the screen
    }
    return 0;
}
