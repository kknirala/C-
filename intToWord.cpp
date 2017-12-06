// interger to word converter
// use enum function and reduce line of statement.
#include<iostream>
#include<string.h>
using namespace std;

void print_fun(int,int);
void conv_fun(int);

//global variables
char word1[90]=" ";
int k=0;
int ar[20];
//main function
int main()
{
	long int num;
	int len,l,i=0;
    
	cout<<"Enter Integer number\t";
	cin>>num;	
	
	//digit extraction
	while(num>0)
	{
		ar[i]=num%10;
		i++;
		num=num/10;
	}
	len=i-1;
	 cout<<"len="<<i;
	while(len>=0)
	{
		print_fun(ar[len],len);
		len--;
	}
	// cout<<"len="<<len;
	cout<<word1;
	return 0;
}
void print_fun(int num,int i)
{
	int nnum;
 switch(i)
 {
 	case 0:
 	case 1:
 		if(i==1)
 		{
 			k=ar[i]*10;
 			break;
 		}
 		nnum=k+ar[0];
 		conv_fun(nnum);
 		strcat(word1," ");
 		break;
 	case 2:
 		conv_fun(num);
 		if(num==0)
 			strcat(word1," ");
 		else
 		strcat(word1," Hundrard ");
 		break;
 	case 3:
 	case 4:
 		if(i==4)
 		{
 			k=ar[i]*10;
 			break;
 		}
 		nnum=k+ar[i];
 		conv_fun(nnum);
 		strcat(word1," Thausand ");
 		break;
 	case 5:
 	case 6:
 		if(i==6)
 		{
 			k=ar[i]*10;
 			break;
 		}
 		nnum=k+ar[i];
 		conv_fun(nnum);
 		strcat(word1," lakh ");
 		break;
 	case 7:
 	case 8:
 		if(i==8)
 		{
 			k=ar[i]*10;
 			break;
 		}
 		nnum=k+ar[i];
 		conv_fun(nnum);
 		strcat(word1," caror ");
 		break;
 	case 9:
 	case 10:
 		if(i==10)
 		{
 			k=ar[i]*10;
 			break;
 		}
 		nnum=k+ar[i];
 		conv_fun(nnum);
 		strcat(word1," arab ");
 		break;
 	case 11:
 	case 12:
 		if(i==12)
 		{
 			k=ar[i]*10;
 			break;
 		}
 		nnum=k+ar[i];
 		conv_fun(nnum);
 		strcat(word1," kharab ");
 		break;
 	default:
 		cout<<"sorry!! your number is Out of range.";
 } // closing of switch
}// closing of print_fun

// Starting of conv_fun
void conv_fun(int num)
{
	int n1,n2;
	
	switch(num)
	{
		case 1:
			strcat(word1," one ");
			break;
	    case 2:
			strcat(word1," two ");
			break;
		case 3:
			strcat(word1," three ");
			break;
		case 4:
			strcat(word1," four ");
			break;
		case 5:
			strcat(word1," five ");
			break;
		case 6:
			strcat(word1," six ");
			break;
		case 7:
			strcat(word1," seven ");
			break;
	    case 8:
			strcat(word1," eight ");
			break;
	    case 9:
			strcat(word1," nine ");
			break;
		case 10:
			strcat(word1," ten ");
			break;
		case 11:
			strcat(word1," elevan ");
			break;
		case 12:
			strcat(word1," twelve ");
			break;
		case 13:
			strcat(word1," thirteen ");
			break;
		case 14:
			strcat(word1," fourteen ");
			break;
		case 15:
			strcat(word1," fifteen ");
			break;
		case 16:
			strcat(word1," sixteen ");
			break;
		case 17:
			strcat(word1," seventeen ");
			break;
		case 18:
			strcat(word1," eighteen ");
			break;
		case 19:
			strcat(word1," nineteen ");
			break;
		case 20:
			strcat(word1," twenty ");
			break;
		case 30:
			strcat(word1," thirty ");
			break;
		case 40:
			strcat(word1," fourty ");
			break;
		case 50:
			strcat(word1," fifty ");
			break;
		case 60:
			strcat(word1," sixty ");
			break;
		case 70:
			strcat(word1," seventy ");
			break;
		case 80:
			strcat(word1," eighty ");
			break;
		case 90:
			strcat(word1," ninety ");
			break;
		default:
			if(num>20 && num<99)
			{
				n1=(num/10);
				n2=num%10;
				conv_fun(n1*10);
				conv_fun(n2);
			}
			
	} // closing of switch 
} //closing of conv_fun.
