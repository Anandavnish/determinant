#include<iostream>
using namespace std;
int main()
{   
    int x1y1,x2y1,x3y1;
    int x1y2,x2y2,x3y2;
    int x1y3,x2y3,x3y3;
    int corr,col,r,ans,f,d;
    // int col;
    // int r=0;
    // int ans;
    // int f;
    // int d;
    r=0;
    cout<<"calculate the value of determinant "<<endl;
    st:
    cout<<"Enter" <<endl;
    cout<<">> 2 for 2x2"<<endl;
    cout<<">> 3 for 3x3"<<endl<<">> ";
    cin>>d;
    if(d==3){        
        do{
            cout<<"find the value of determant "<<endl<<endl;
            cout<<"Simple view of determinant"<<endl;
            cout<<"|Y"<<endl;
            cout<<"|"<<endl;
            cout<<"|"<<endl;
            cout<<"|___________X"<<endl<<endl;
            cout<<"Formate ------>"<<endl;
            cout<<"____________________________"<<endl;
            cout<<"| X1Y1 |  | X2Y1 |  | X3Y1 |"<<endl;
            cout<<"|--------------------------|"<<endl;
            cout<<"| X1Y2 |  | X2Y2 |  | X3Y2 |"<<endl;
            cout<<"|--------------------------|"<<endl;
            cout<<"| X1Y3 |  | X2Y3 |  | X3Y3 |"<<endl;
            cout<<"___________________________"<<endl;

           //Taking the value of these value
            cout<<endl<<endl<<"Warining these value in integer type ";
            cout<<endl<<"Beaware while entering these value Ones you "<<endl;
            cout<<" entered wrong you have to wait to come chance to correct the vlaue"<<endl;
    
            column_X1:
            {
                cout<<"Enter vlaue in IST column"<<endl;
                cout<<"X1Y1 --> ";
                cin>>x1y1;
                cout<<"X1Y2 --> ";
                cin>>x1y2;
                cout<<"x1Y3 --> ";
                cin>>x1y3;

                if(r==1){
                    goto round;
                }      
            }
    
            column_X2:
            {
                cout<<"Enter vlaue in 2nd column"<<endl;
                cout<<"X2Y1 --> ";
                cin>>x2y1;
                cout<<"X2Y2 --> ";
                cin>>x2y2;
                cout<<"x2Y3 --> ";
                cin>>x2y3;

                if(r==1){
                    goto round;
                }
            }

            column_X3:
            {
                cout<<"Enter vlaue in 3rd column"<<endl;
                cout<<"X3Y1 --> ";
                cin>>x3y1;
                cout<<"X3Y2 --> ";
                cin>>x3y2;
                cout<<"x3Y3 --> ";
                cin>>x3y3;

                if(r==1){
                    goto round;
                }
            }

            round:
            cout<<endl<<"You Have enterd---->"<<endl;
            cout<<"_________________________"<<endl;
            cout<<"| "<<x1y1<<" |  | "<<x2y1<<" |  | "<<x3y1<<" |"<<endl;
            cout<<"|-----------------------|"<<endl;
            cout<<"| "<<x1y2<<" |  | "<<x2y2<<" |  | "<<x3y2<<" |"<<endl;
            cout<<"|-----------------------|"<<endl;
            cout<<"| "<<x1y3<<" |  | "<<x2y3<<" |  | "<<x3y3<<" |"<<endl;
            cout<<"________________________"<<endl;

            //correction time.....
            cout<<endl<<"Whould you want to any correction ?"<<endl;
            cout<<">>1 for Yes"<<endl;
            cout<<">>2 for NO"<<endl<<">> ";
            cin>>corr;

            if(corr==1)
            {   
                ones:
                cout<<"In Which column ?[1,2,3]"<<endl<<">> ";
                cin>>col;
                if(col==1){
                    r=1;
                    goto column_X1;
                
                }
                else if(col==2){
                    r=1;
                    goto column_X2;
                
                }
                else if(col==3){
                    r=1;
                    goto column_X3;
                
                }
                else{ 
                    goto ones;
                }
            
            }

            //Now calculate time....

            ans=(x1y1*((x2y2*x3y3)-(x3y2*x2y3)))-(x2y1*((x1y2*x3y3)-(x3y2*x1y3)))+(x3y1*((x1y2*x2y3)-(x2y2*x1y3)));
        
            cout<<"Value of Determinant is ---> "<<ans<<endl;


            cout<<"Enter ";
            cout<<endl<<"1 for 2x2";
            cout<<endl<<"any num. for exit"<<endl<<">> "; 
            cin>>f;   
        }while(f==1);
    }
    //2x2
    else if(d==2){

        do{
                
            cout<<"find the value of determant "<<endl<<endl;
            cout<<"Simple view of determinant"<<endl;
            cout<<"|Y"<<endl;
            cout<<"|"<<endl;
            cout<<"|"<<endl;
            cout<<"|___________X"<<endl<<endl;
            cout<<"Formate ------>"<<endl;
            cout<<"_________________"<<endl;
            cout<<"| X1Y1 |  | X2Y1 |"<<endl;
            cout<<"|----------------|"<<endl;
            cout<<"| X1Y2 |  | X2Y2 |"<<endl;
            cout<<"_________________"<<endl;

           //Taking the value of these value
            cout<<endl<<endl<<"Warining these value in integer type ";
            cout<<endl<<"Beaware while entering these value Ones you "<<endl;
            cout<<" entered wrong you have to wait to come chance to correct the vlaue"<<endl;
    
            x2column_X1:
            {
                cout<<"Enter vlaue in IST column"<<endl;
                cout<<"X1Y1 --> ";
                cin>>x1y1;
                cout<<"X1Y2 --> ";
                cin>>x1y2;
    
                if(r==1){
                    goto x2round;
                }      
            }
    
            x2column_X2:
            {
                cout<<"Enter vlaue in 2nd column"<<endl;
                cout<<"X2Y1 --> ";
                cin>>x2y1;
                cout<<"X2Y2 --> ";
                cin>>x2y2;
                
                if(r==1){
                    goto x2round;
                }
            }

            x2round:
            cout<<endl<<"You Have enterd---->"<<endl;
            cout<<"_____________"<<endl;
            cout<<"| "<<x1y1<<" |  | "<<x2y1<<" |"<<endl;
            cout<<"|-----------|"<<endl;
            cout<<"| "<<x1y2<<" |  | "<<x2y2<<" |"<<endl;
            cout<<"____________"<<endl;

            //correction time.....
            cout<<endl<<"Whould you want to any correction ?"<<endl;
            cout<<">>1 for Yes"<<endl;
            cout<<">>2 for NO"<<endl<<">> ";
            cin>>corr;

            if(corr==1)
            {   
                x2ones:
                cout<<"In Which column ?[1,2]"<<endl<<">> ";
                cin>>col;
                if(col==1){
                    r=1;
                    goto x2column_X1;
                
                }
                else if(col==2){
                    r=1;
                    goto x2column_X2;
                
                }
                else{ 
                    goto x2ones;
                }
            
            }

            //Now calculate time....

            ans=((x1y1*x2y2)-(x2y1*x1y2));
            cout<<"Value of Determinant is ---> "<<ans<<endl;


            cout<<"Enter ";
            cout<<endl<<"1 for 3*3";
            cout<<endl<<"any num. for exit"<<endl<<">>";
            cin>>f;
        }while(f==1);
        
    }
    else
        goto st;    
    return 0;
}