#include<iostream>
#include<conio.h>
using namespace std;
int main()
{   int op,scr=0,count=0;
    char ch,ans,reply;
	cout<<"\n\t**** Welcome to the Quiz Competition ****\n\t"<<endl;
	main:
	cout<<"\n\t 1)Start Quiz \n\t"<<endl ;
	cout<<"\n\t 2)View Score \n\t"<<endl;
	cout<<"\n\t 3)Total number of right answers \n\t"<<endl;
	cout<<"\n\t 4)Quit game \n\t"<<endl;
	cout<<"Enter your option"<<endl;
	cin>>op;
	
	switch(op){
		case 1:
			cout<<"\n\t Q1. Which one of the following is a keyword? \n\t"<<endl;
			cout<<"\n\t A.Size\n\t B.Key\n\t C.Jump\n\t D.Switch\n\t "<<endl;
			cout<<" \n\t Select correct option(only in alphabets between A-D or a-d) \n\t"<<endl;
			cin>>ch;
			if(ch=='d'|| ch=='D')
			{
				cout<<"\n\t Congratulations,Your answer is correct \n\t"<<endl;
				scr = scr+5;
				count++;
			}
			
			else
			{
				cout<<"\n\t Wrong answer ,Better luck next time \n\t";
				cout<<"\n\t Do u wanna know the right answer (type y /n) \n\t";
				cin>>ans;
				if(ans=='y'|| ans=='Y')
				{
					cout<<"\n\t The right answer is : D)Switch \n\t "<<endl;
				}
				
				
		}
		    cout<<" \n\t Q2.The modulus operator uses ___ character.\n\t"<<endl;
				
			cout<<"\n\t A.+ \n\t B.* \n\t C.% \n\t D./"<<endl;
			 
			cout<<" \n\t Select correct option (only in alphabets between A-D or a-d) \n\t"<<endl;
			cin>>ch;
			if(ch=='c'|| ch=='C')
			{
				cout<<"\n\t Congratulations,Your answer is correct \n\t"<<endl;
				scr = scr+5;
				 count++;
			}
			
			else
			{
				cout<<"\n\t Wrong answer ,Better luck next time \n\t";
				cout<<"\n\t Do u wanna know the right answer (type y /n) \n\t";
				cin>>ans;
				if(ans=='y'|| ans=='Y')
				{
					cout<<"\n\t The right answer is :C)% \n\t "<<endl;
				}
				
				
			}
                         cout<<" \n\t Q3.Which one of the following is a membership operator?\n\t"<<endl;
				
			cout<<"\n\t A.! \n\t B.& \n\t C.:: \n\t D.."<<endl;
			 
			cout<<" \n\t Select correct option (only in alphabets between A-D or a-d) \n\t"<<endl;
			cin>>ch;
			if(ch=='c'|| ch=='C')
			{
				cout<<"\n\t Congratulations,Your answer is correct \n\t"<<endl;
				scr = scr+5;
				 count++;
			}
			
			else
			{
				cout<<"\n\t Wrong answer ,Better luck next time \n\t";
				cout<<"\n\t Do u wanna know the right answer (type y /n) \n\t";
				cin>>ans;
				if(ans=='y'|| ans=='Y')
				{
					cout<<"\n\t The right answer is :C):: \n\t "<<endl;
				}
            }
               cout<<" \n\t Q4.Signed, unsigned, long and short are some of the _\n\t"<<endl;
				
			cout<<"\n\t A.Void \n\t B.Data \n\t C.Derived data \n\t D.Modifiers"<<endl;
			 
			cout<<" \n\t Select correct option (only in alphabets between A-D or a-d) \n\t"<<endl;
			cin>>ch;
			if(ch=='d'|| ch=='D')
			{
				cout<<"\n\t Congratulations,Your answer is correct \n\t"<<endl;
				scr = scr+5;
				 count++;
			}
			
			else
			{
				cout<<"\n\t Wrong answer ,Better luck next time \n\t";
				cout<<"\n\t Do u wanna know the right answer (type y /n) \n\t";
				cin>>ans;
				if(ans=='y'|| ans=='Y')
				{
					cout<<"\n\t The right answer is :D)Modifiers \n\t "<<endl;
				}
            }
            cout<<" \n\t Q5.In C++, programs, the keyword friend appears in the\n\t"<<endl;
				
			cout<<"\n\t A.class allowing access to another class \n\t B.private section of a class \n\t C.public section of a class \n\t D.all of these"<<endl;
			 
			cout<<" \n\t Select correct option (only in alphabets between A-D or a-d) \n\t"<<endl;
			cin>>ch;
			if(ch=='d'|| ch=='D')
			{
				cout<<"\n\t Congratulations,Your answer is correct \n\t"<<endl;
				scr = scr+5;
				 count++;
			}
			
			else
			{
				cout<<"\n\t Wrong answer ,Better luck next time \n\t";
				cout<<"\n\t Do u wanna know the right answer (type y /n) \n\t";
				cin>>ans;
				if(ans=='y'|| ans=='Y')
				{
					cout<<"\n\t The right answer is :D)all of these\n\t "<<endl;
				}
            }
             cout<<" \n\t Q6.__ is the smallest individual unit in a program.\n\t"<<endl;
				
			cout<<"\n\t A.Token \n\t B.control \n\t C.character \n\t D.Variable"<<endl;
			 
			cout<<" \n\t Select correct option (only in alphabets between A-D or a-d) \n\t"<<endl;
			cin>>ch;
			if(ch=='a'|| ch=='A')
			{
				cout<<"\n\t Congratulations,Your answer is correct \n\t"<<endl;
				scr = scr+5;
				 count++;
			}
			
			else
			{
				cout<<"\n\t Wrong answer ,Better luck next time \n\t";
				cout<<"\n\t Do u wanna know the right answer (type y /n) \n\t";
				cin>>ans;
				if(ans=='y'|| ans=='Y')
				{
					cout<<"\n\t The right answer is :A)Token\n\t "<<endl;
				}
            }
             cout<<" \n\t Q7.C++ was developed by _\n\t"<<endl;
				
			cout<<"\n\t A.Thomas Kushz \n\t B.John Kemney\n\t C.Bjarne Stroutstrup \n\t D.James Goling"<<endl;
			 
			cout<<" \n\t Select correct option (only in alphabets between A-D or a-d) \n\t"<<endl;
			cin>>ch;
			if(ch=='c'|| ch=='C')
			{
				cout<<"\n\t Congratulations,Your answer is correct \n\t"<<endl;
				scr = scr+5;
				 count++;
			}
			
			else
			{
				cout<<"\n\t Wrong answer ,Better luck next time \n\t";
				cout<<"\n\t Do u wanna know the right answer (type y /n) \n\t";
				cin>>ans;
				if(ans=='y'|| ans=='Y')
				{
					cout<<"\n\t The right answer is :C)Bjarne Stroutstrup\n\t "<<endl;
				}
            }

            cout<<" \n\t Q8. _ data type to indicate the function does not return a value.\n\t"<<endl;
				
			cout<<"\n\t A.static\n\t B.main\n\t C.public \n\t D.void"<<endl;
			 
			cout<<" \n\t Select correct option (only in alphabets between A-D or a-d) \n\t"<<endl;
			cin>>ch;
			if(ch=='c'|| ch=='C')
			{
				cout<<"\n\t Congratulations,Your answer is correct \n\t"<<endl;
				scr = scr+5;
				 count++;
			}
			
			else
			{
				cout<<"\n\t Wrong answer ,Better luck next time \n\t";
				cout<<"\n\t Do u wanna know the right answer (type y /n) \n\t";
				cin>>ans;
				if(ans=='y'|| ans=='Y')
				{
					cout<<"\n\t The right answer is :C)pubic\n\t "<<endl;
				}
            }
            cout<<" \n\t Q9. __ allocates memory, based on the data type of the variable.\n\t"<<endl;
				
			cout<<"\n\t A.Interpreter\n\t B.Link\n\t C.Converter\n\t D.Compiler"<<endl;
			 
			cout<<" \n\t Select correct option (only in alphabets between A-D or a-d) \n\t"<<endl;
			cin>>ch;
			if(ch=='d'|| ch=='D')
			{
				cout<<"\n\t Congratulations,Your answer is correct \n\t"<<endl;
				scr = scr+5;
				 count++;
			}
			
			else
			{
				cout<<"\n\t Wrong answer ,Better luck next time \n\t";
				cout<<"\n\t Do u wanna know the right answer (type y /n) \n\t";
				cin>>ans;
				if(ans=='y'|| ans=='Y')
				{
					cout<<"\n\t The right answer is :D)Compiler\n\t "<<endl;
				}
            }
		cout<<" \n\t Q10.Wrapping data and its related functionality into a single entity is known as \n\t"<<endl;
				
			cout<<"\n\t A.Abstraction \n\t B.Encapsulation \n\t C.Polymorphism \n\t D.Inheritance \n\t "<<endl;
			cout<<" \n\t Select correct option (only in alphabets between A-D or a-d) \n\t"<<endl;
			cin>>ch;
			if(ch=='b'|| ch=='B')
			{
				cout<<"\n\t Congratulations,Your answer is correct \n\t"<<endl;
				scr = scr+5;
			
				count++;
				goto main;
			}
			
			else
			{
				cout<<"\n\t Wrong answer ,Better luck next time \n\t";
				cout<<"\n\t Do u wanna know the right answer (type y /n) \n\t";
				cin>>ans;
				if(ans=='y'|| ans=='Y')
				{
					cout<<"\n\t The right answer is :B)Encapsulation \n\t "<<endl;
					goto main;
				}
				
				else{
					goto main;
				}
				
            }	
		break;
		case 2:
			cout<<"\n\t Total score is \n\t";
			cout<<scr<<endl;
			goto main;
		break;
		case 3:
			cout<<" The total numbers of right answers are "<<count<<endl;
			goto main;
			break;
		case 4:
		       cout<<"\n\t Do u want to end the quiz\n\t(y/n) "<<endl;
		       cin>>reply;
		     if(reply == 'y' or reply =='Y')
		   {
			  break;
		   }
		    else{
			goto main;
		  }
		break;
		default :
			cout<<"Invalid choice"<<endl;
}
    getch();
	
}

