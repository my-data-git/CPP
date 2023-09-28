#include<iostream>
using namespace std;
#define print(a)  cout<<a<<endl
#define print_endl(a) cout<<a
#define p(a) cout<<a<<endl
#define scan(a) cin>>a
int choice;


class Matrix{
private:
    int** arr;
    int** arr2;
    
    int row;
    int column;
public:
    Matrix()
    {
        this->row=2;
        this->column=2;
        //dynamic alloction of two dimensional array

        this->arr = new int*[this->row];  // making the rows
        for (int i = 0; i < row; i++)
        {
            arr[i] = new int[this->column];  // making the columns
        }
        
        
    }
  
  
  
    Matrix(int row, int column){
this->row=row;
this->column=column;

//dynamic alloction of two dimensional array

        this->arr = new int*[this->row];  // making the rows
        for (int i = 0; i < row; i++)
        {
            arr[i] = new int[this->column];  // making the columns
        }
    
    
    
    }






//accepting the Matrix------------------------------------------------------------
void acceptMatrix(){
    for(int i=0;i<this->row;i++){
        for(int j=0;j<this->column;j++){
            cout<< "Enter matrix[" <<i <<"]["<< j <<"] : ";
            cin>> arr[i][j];


        }

    }

}
//---------------------------------------------------------------------------------
//printing Matrix-----------------------------------------------------------------
void printMatrix(){
    cout<< "matrix["<<this->row<<"]["<<this->column<<"]:"<<endl;
    for(int i=0;i<this->row;i++){
        for(int j=0;j<this->column;j++){
            cout<<this->arr[i][j] << "  " ;
            


        }
        cout << endl;

    }
}
//--------------------------------------------------------------------------------


//addtion-------------------------------------------------------------------------
void add(Matrix b){
if((this->row==b.getRow())&&(this->column==b.getColumn())){
            print("Note this will change the initial Matrix");

for(int i=0;i<this->row;i++){
        for(int j=0;j<this->column;j++){
           this->arr[i][j]=this->arr[i][j]+b.getElement(i,j);

        }
        
    }

print("Result of Matrix Addition");
//this->printMatrix();    


}else{
    cout<<"we cannot add matrices having diffrent dimension"<<endl;
}
}
//--------------------------------------------------------------------------------




//subtract-------------------------------------------------------------------------
void subtract(Matrix b){
if((this->row==b.getRow())&&(this->column==b.getColumn())){
            print("Note this will change the initial Matrix");

for(int i=0;i<this->row;i++){
        for(int j=0;j<this->column;j++){
           this->arr[i][j]=this->arr[i][j]-b.getElement(i,j);

        }
        
    }

print("Result of Matrix Subtraction");
this->printMatrix();    


}else{
    cout<<"we cannot subtract matrices having diffrent dimension"<<endl;
}
}
//---------------------------------------------------------------------------------


//multiply------------------------------------------------------------

void multiply(Matrix b){
    int row_a=this->row;
    int column_a=this->column;
    int row_b=b.getRow();
    int column_b=b.getColumn();


if((this->row==b.getColumn())&&(this->column==b.getRow())){
    

    //dynamic 2d array allocation
        this->arr2 = new int*[row_a];  // making the rows
        for (int i = 0; i < row; i++)
        {
            arr2[i] = new int[column_b];  // making the columns
        }

        
        int add=0;
        int a_row=0;
        int a_column=0;
        int b_row=0;
        int b_column=0;
     for(int i=0;i<row_a;i++){//0-1
        for(int j=0;j<column_b;j++){//0-1
            for(int k=0;k<column_a;k++){//0-3
                    int sum=1;
                    
                    sum=sum*this->arr[a_row][k]*b.getElement(k,b_column);
                    
                    add=add+sum;
                    
                             
                    sum=1;



            }
            arr2[i][j]=add;
            add=0;
            b_column++;


        }
        b_column=0;
        a_row++;
    
    }   


    

        





print("Result of Matrix Multiplication");
for(int i=0;i<row_a;i++){
        for(int j=0;j<column_b;j++){
            cout<<this->arr2[i][j] << "  " ;
            


        }
        cout << endl;

    }   


}else{
    cout<<"You can only multiply two matrices if their dimensions are compatible , which means the number of columns in the first matrix is the same as the number of rows in the second matrix. "<<endl;
}
}


//--------------------------------------------------------------------
void transpose(){

    int new_row=this->column;
    int new_column=this->row;


  

     for(int i=0;i<new_row;i++){
        for(int j=0;j<new_column;j++){
            cout<<arr[j][i] << "  " ;
            


        }
        cout << endl;

    }

      



}


int getRow(){
    return this->row;
}


int getColumn(){
    return this->column;
}


int getElement(int i,int j){
    return this->arr[i][j];
}

};



int menu(){
    p("Enter the corresponding digit");
    p("0. EXIT");
    p("1. Matrix Addtion - Addtion of Matrix A to Matrix B. Note it will modify Matrix A.");
    p("2. Matrix Subtraction - Subtraction of Matrix A to Matrix B. Note it will modify Matrix A.");
    p("3. Matrix Multiplication - Multiplication of Matrix A and Matrix B");
    p("4. Transpose Matrix- Traspose of Matrix A");
    p("5. Print Matrix");
    p("Enter your digit : ");
    scan(choice);
    return choice;
}




int main(){
    int row_a=0;
    int column_a=0;
    int row_b=0;
    int column_b=0;
    print("Initiate the Matrix : ");
        print("Enter the number of row of matrix A: ");
    cin>>row_a;
     print("\nEnter the number of column of matrix A: ");
    cin>>column_a; 
    print("\nEnter the number of row of matrix B: ");
    cin>>row_b;
     print("\nEnter the number of column of matrix B: ");
    cin>>column_b;

    Matrix a(row_a,column_a);
    a.acceptMatrix();
    Matrix b(row_b,column_b);
    b.acceptMatrix();

    while(menu()){
        switch (choice)
        {
           case 1:
            print("Matrix Addition");
            a.add(b);

            break;
            case 2:
            print("Matrix Subractation");
            a.subtract(b);
            
            break;
               case 3:
               print("Matrix Multiplication");
               a.multiply(b);

            
            break;    
               case 4:
               print("Transpose Of Matrix A");
               a.transpose();
               print("Transpose of Matrix B");
               b.transpose();

            
            break;
               case 5:
               print("Matrix A");
               a.printMatrix();
               print("Matrix B");
               b.printMatrix();
            
            break;
        
        default:
            break;
        }


    }
    


    
    
    
    //Matrix a(2,3);
    //a.acceptMatrix();
    //a.printMatrix();

   // Matrix b(3,2);
    //b.acceptMatrix();
    //b.printMatrix();

    //a.add(b);
    //a.subtract(b);
    //a.multiply(b);
    //a.transpose();


    return 0;
}
