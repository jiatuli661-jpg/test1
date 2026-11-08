bool isRobotBounded(char* instructions) {
    int len=strlen(instructions);
    int f=0;
    int x=0;
    int y=0;
    for(int i=0;i<len;i++)
    {
        if(instructions[i]=='G')
        {
            if(f==0)
            {
                y++;
            }else if(f==1)
            {
                x++;
            }else if(f==2)
            {
                y--;
            }else{
                x--;
            }
        }
        if(instructions[i]=='L')
        {
            f=(f+3)%4;
        }else if(instructions[i]=='R')
        {
            f=(f+1)%4;
        }
    }
    if((x==0&&y==0)||f!=0)
    {
        return true;
    }
    return false;
}