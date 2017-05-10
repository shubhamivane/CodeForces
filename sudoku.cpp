#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
using namespace std;

bool solve_sudoku(vector< vector<int> > input1);
bool find_unassigned_location(vector< vector<int> > input1,int &row,int &col);
bool is_safe(vector< vector<int> > input1,int row,int col,int num);
bool used_in_row(vector< vector<int> > input1,int row,int num);
bool used_in_col(vector< vector<int> > input1,int col,int num);
bool used_in_box(vector< vector<int> > input1,int row,int col,int num);
bool check_row(vector< vector<int> > input1,int mi,int ma,int row,int col,int num);
bool check_col(vector< vector<int> > input1,int mi,int ma,int row,int col,int num);
bool check_swap(vector< vector<int> > input1,int block_size,int row,int col,int num);

int main()
{
    int size1,size2,num;
    cin >> size1 >> size2;
    vector< vector<int> > input1;
    for(register int i=0;i<size1;i++)
    {
        vector<int> v;
        for(register int j=0;j<size2;j++)
        {
            cin >> num;
            v.push_back(num);
        }
        input1.push_back(v);
    }
    if(solve_sudoku(input1))
        cout << "1" << endl;
    else
        cout << "0" << endl;
    return 0;
}

bool solve_sudoku(vector< vector<int> > input1)
{
    int row,col;
    if(!find_unassigned_location(input1,row,col))
        return true;
    for(register int i=1;i<=input1.size();i++)
    {
        if(!check_swap(input1,(int)sqrt(input1.size()),row,col,i))
           continue;
        if(is_safe(input1,row,col,i))
        {
            input1[row][col] = i;
            if(solve_sudoku(input1))
                return true;
            input1[row][col] = 0;
        }
    }
    return false;
}
bool used_in_box(vector< vector<int> > input1,int row,int col,int num)
{
    for(register int i=0;i<row;i++)
        for(register int j=0;j<col;j++)
        if(input1[i][j] == num)
        return true;
    return false;
}
bool used_in_row(vector< vector<int> > input1,int row,int num)
{
    for(register int col=0;col<input1.size();col++)
        if(input1[row][col] == num)
        return true;
    return false;
}
bool used_in_col(vector< vector<int> > input1,int col,int num)
{
    for(register int row=0;row<input1.size();row++)
        if(input1[row][col] == num)
        return true;
    return false;
}
bool is_safe(vector< vector<int> > input1,int row,int col,int num)
{
    int n =(int)sqrt(input1.size());
    return (!used_in_row(input1,row,num)&&!used_in_col(input1,col,num)&&!used_in_box(input1,row-n,col-n,num));
}
bool find_unassigned_location(vector< vector<int> > input1,int &row,int &col)
{
    for(row=0;row<input1.size();row++)
        for(col=0;col<input1.size();col++)
        if(input1[row][col] == 0)
            return true;
    return false;
}
bool check_swap(vector< vector<int> > input1,int block_size,int row,int col,int num)
{
    int i;
    int mi;
    int ma;
    bool bool1,bool2,bool3,bool4;
    bool1=true;
    bool2=true;
    bool3=true;
    bool4=true;
    //swap with up
    if(row-block_size>=0)
    {
        i=1;
        mi = 0;
        ma = 0;
        while(i)
        {
            mi = ma;
            ma = sqrt(input1.size())*i-1;
            if(col <= ma)
                break;

        }
        bool1 = check_row(input1,mi,ma,row-block_size,col,num);
    }
    //swap with down
    if(row+block_size<input1.size())
    {
        i=1;
        mi = 0;
        ma = 0;
        while(i)
        {
            mi = ma;
            ma = sqrt(input1.size())*i-1;
            if(col <= ma)
                break;
            ++i;
        }
        bool2 = check_row(input1,mi,ma,row+block_size,col,num);
    }
    //swap with left
    if(col-block_size>=0)
    {
        i=1;
        mi=0;
        ma=0;
        while(i)
        {
            mi=ma;
            ma=sqrt(input1.size())*i-1;
            if(row<=ma)
                break;
        }
        ++i;
        bool3 = check_col(input1,mi,ma,row,col-block_size,num);
    }
    //swap with right
    if(col+block_size<input1.size())
    {
        i=1;
        mi=0;
        ma=0;
        while(i)
        {
            mi=ma;
            ma=sqrt(input1.size())*i-1;
            if(row<=ma)
                break;
            ++i;
        }
        bool4 = check_col(input1,mi,ma,row,col+block_size,num);
    }
    if(bool1==true&&bool2==true&&bool3==true&&bool4==true)
        return true;
    else
        return false;
}
bool check_col(vector< vector<int> > input1,int mi,int ma,int row,int col,int num)
{
    for(register int i=0;i<input1.size();i++)
    {
        if(i>=mi&&i<=ma)
            continue;
        if(input1[i][col]==num)
            return false;
    }
    return true;
}
bool check_row(vector< vector<int> > input1,int mi,int ma,int row,int col,int num)
{
    for(register int i=0;i<input1.size();i++)
    {
        if(i>=mi&&i<=ma)
            continue;
        if(input1[row][i]==num)
            return false;
    }
    return true;
}
