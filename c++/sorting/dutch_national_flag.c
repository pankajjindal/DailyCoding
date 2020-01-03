void swap(char * a, char *b)
{
    char temp;
    temp = *a;
    *a=*b;
    *b=temp;
    
}
void dutch_flag_sort(int balls_count, char* balls) {
    int k = balls_count;
    int j = -1;
    
    if( balls_count < 0)
        return;
        
    if (balls_count ==0 || balls_count ==1)
        return;
        
    for ( int i =0;i<balls_count;i++)
    {
        if((j<=i) && (balls[i]=='R')){
            j++;
            swap(&balls[j],&balls[i]);
        }
        else if ((k >= i) && (balls[i]=='B'))
        {
            k--;
            swap(&balls[k],&balls[i]);
        }
        
    }

}
