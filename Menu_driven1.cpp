
#include <iostream>
using namespace std;
int factorialit(int num)
{
	int fact=1;
	if(num<0)
	cout<<"invalid input";
	if(num==0)
	return 1;
	else
	{
		while(num!=0)
		{
			fact=fact*num;
			num--;
		}
	}
return fact;
}
int factorialrec(int n)
{
    if(n > 1)
    return n*factorialrec(n - 1);
    else
    return 1;
}
int gcdit(int a,int b)
{
	int temp=0;
	while(b!=0)
	{
		temp=a;
		a=b;
		b=temp%a;
	}
	return a;
}
int powit(int a,int b)
{
	int pow=1;
	while(b!=0)
	{
		pow*=a;
		b--;
	}
}
int Power(int base, int power)
{
    if (power != 0)
    return (base*Power(base, power-1));
    else
    return 1;
}
int fibonaccirec(int n,int term1,int term2)
{ if(n>2)
  {
	int term3= term1+term2;
	cout<<term3<<" ";
	return fibonaccirec(n-1,term2,term3);
	
  }
  else if(n==2)
  {
  	return n;
  }
}
int gcdrec(int a,int b)
{
	return(b!=0)?gcdrec(b,a%b):a;
}


int main()

{
	char choice;
	char ch;
	do{
		cout << "Choose what u wanna do ";
		cout << "\na.Print factorial of entered number by iteration.";
		cout << "\nb.Print factorial of entered number by recursion.";
		cout << "\nc.Print the gcd of entered no using iteration.";
		cout << "\nd.Print the gcd of entered no using recursion.";
		cout << "\ne.Print fibonacci series upto n digits(using iteration).";
		cout << "\nf.Print fibonacci series upto n digits(using recursion).";
		cout << "\ng.Print result of m raise to power n by iteration(pow func).";
		cout << "\nh.Print result of m raise to power n by recursion(pow func).";
		cout << "\n\nEnter your choice:  ";
		cin >> ch;
		switch(ch)
		{
			case 'a':
				int a,result;
	            cout<<"Enter the no whose factorial u wanna calculate";
	            cin>>a;
	            result=factorialit(a);
	            cout<<"factorial of entered no is: "<<result;
				break;
				
			case 'b':
				int n;
                cout<<"Enter a positive integer: ";
                cin>>n;
                cout<<"Factorial of " << n << " = " << factorialrec(n);
				break;
				
			case 'c':
				int p;
	            int q;
	            cout<<"enter the numbers whose gcd u wanna calculate";
	            cin>>p>>q;
	            try
	            {  
	              if(p==0&&q==0)
	              throw"invalid inputs";
                }
                catch(const char *str)
                {
	              cout<<str;
	              exit(0);
                }
	            result=gcdit(p,q);
	            if(p==0||q==0)
	            {
		          result=1;
	            }
	            cout<<" gcd of entered nos is: "<<result;
			   	break;
			   	
			case 'd':
	        {
			   
				int a,c;
				cout<<"enter the numbers whose gcd u wanna calculate";
                cin>>a>>c;
	            try
	            {  
	                if(a==0&&c==0)
	                throw"invalid inputs";
                }
                catch(const char *str)
                {
	                cout<<str;
	                exit(0);
                }
	            result=gcdrec(a,c);
	            if(a==0||c==0)
	            {
		            result=1;
	            }
	            cout<<" gcd of entered nos is: "<<result;
			   	break;
		    }
			case 'e':
			{
				int term1=0, term2=1, nextTerm=0;
                cout<<"Enter the number of terms: ";
                cin>>n;
	            cout<<"Fibonacci Series: ";
	            for(int i=1;i<=n;i++)
               {
                 if(i==1)
                {
		          cout<< " "<<term1<<" ";
                  continue;
                }
                if(i==2)
                {
                  cout<<term2 << " "<<" ";
                  continue;
                }
                nextTerm=term1+term2;
                term1=term2;
                term2=nextTerm;
                cout << nextTerm << " ";
              }
			  break;
		   }
				
			case 'f':
			{
				int i,n,term1=0,term2=1;
	            cout<<"Enter no of terms: ";
             	cin>>n;
	            cout<<" 0 1 ";
                fibonaccirec(n,term1,term2);
				break;
			}
			case 'g':
			{
			   int p;
	           int q;
	           cout<<"enter the num";
	           cin>>p;
	           cout<<"enter the power";
	           cin>>q;
               if(q==0)
	        {
		        int result=1;
	        }
	          try
         	{  
	           if(p==0&&q==0)
	           throw"invalid inputs";
            }
             catch(const char *str)
            {
	          cout<<str;
	          exit(0);
            }
           int result=powit(p,q);
           cout<<" the value of p raise to pow q:  "<<result;
		   break;
		   }
			case 'h':
			{
				int p;
	            int q;
	            cout<<"enter the num";
            	cin>>p;
	            cout<<"enter the power";
             	cin>>q;
	            try
	           {    
	             if(p==0&&q==0)
	             throw"invalid inputs";
               }
               catch(const char *str)
               {
	             cout<<str;
               }
	           int result=Power(p,q);
	           if(p==0||q==0)
	           {
		         result=1;
	           }
	           cout<<" the value of p raise to pow q:  "<<result;
			   break;
		    }
			default:
			 {
			   cout << "Invalid Input!";
			   break;
		     }
		    }
		    cout << "\nDo you wish to continue?(Y/N):";
		    cin >>choice;
	      }while(choice=='y'||choice=='Y');
	      return 0;
}

