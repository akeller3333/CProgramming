// There is a collection of input strings and a collection of query strings. For each query string, determine how many times it occurs in the list of input strings. Return an array of the results.

int* matchingStrings(int strings_count, char** strings, int queries_count, char** queries, int* result_count) {
     int* a = (int *)malloc(queries_count * sizeof(int));
     *result_count = queries_count;
    for(int i = 0; i < queries_count; i++)
    {
        a[i] = 0;
    }

    for(int i = 0; i < queries_count; i++)
    {    
        for(int y = 0; y < strings_count; y++)
        {
            if(strcmp(strings[y], queries[i]) == 0){
                a[i]++;
            }
        }
    }    
    
   for(int i = 0; i < queries_count; i++){
        printf("%d\n", a[i]);
    }
        
    return a;
}
