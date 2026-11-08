int check(char bord[3][3],char p)
{
    for(int i=0;i<3;i++)
    {
        if(bord[i][0]==p&&bord[i][1]==p&&bord[i][2]==p)
        {
            return 1;
        }
    }
    for(int i=0;i<3;i++)
    {
        if(bord[0][i]==p&&bord[1][i]==p&&bord[2][i]==p)
        {
            return 1;
        }
    }
    if(bord[0][0]==p&&bord[1][1]==p&&bord[2][2]==p)
    {
        return 1;
    }
    if(bord[0][2]==p&&bord[1][1]==p&&bord[2][0]==p)
    {
        return 1;
    }
    return 0;
}
char* tictactoe(int** moves, int movesSize, int* movesColSize) {
    char bord[3][3];
    for(int i=0;i<movesSize;i++)
    {
        int row=moves[i][0];
        int low=moves[i][1];
        if(i%2==0)
        {
            bord[row][low]='0';
        }else{
            bord[row][low]='X';
        }
    }
    if(check(bord,'X'))
    {
        return "B";
    }
    if(check(bord,'0'))
    {
        return "A";
    }
    if(movesSize==9)
    {
        return "Draw";
    }
    return "Pending";
}