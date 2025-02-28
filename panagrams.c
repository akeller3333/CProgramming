// A pangram is a string that contains every letter of the alphabet. Given a sentence determine whether it is a pangram in the English alphabet. Ignore case. Return either pangram or not pangram as appropriate.

char* pangrams(char* s) {

    int arr[26] = {0};

    char* retstring = malloc(100 * sizeof(char));
    int length = strlen(s);
    
    for(int i = 0; i < length; i++)
    {
        char currentchar = toupper(s[i]);
        for(int i = 65; i < 91; i++)
        {
            if(currentchar == i){
                arr[i - 65] = 1;
            }
        }
    }
    
    int boolean = 1;
    for(int i = 0; i < 26; i++)
    {
        if(arr[i] == 0)
        {
            printf("%d", arr[i]);
            boolean = 0;
            break;
        } 
    }
    
    if(boolean == 1){
        strcat(retstring, "pangram");
    }else {
        strcat(retstring, "not pangram");
    }
    
    return retstring;
}
