// Given an array of integers, where all elements but one occur twice, find the unique element.
int lonelyinteger(int a_count, int* a) 
{
    for(int i = 0; i < a_count; i++)
    {
        int curr = a[i];
        int count = 0;
        for(int y = 0; y < a_count; y++)
        {
            if(a[y] == curr){
                count++;
            }
            if(count >= 2){
                break;
            }
            
        }
        if(count < 2){
            return curr;
        }
        
    }
    return -1;
}
