
// Another sorting method, the counting sort, does not require comparison. Instead, you create an integer array whose index range covers the entire range of values in your array to sort. 
// Each time a value occurs in the original array, you increment the counter at that index. At the end, run through your counting array, printing the value of each non-zero valued index that number of times.



int* countingSort(int arr_count, int* arr, int* result_count) {

    // The array that we will be returning 
    static int a[100] = {0};
    int counter = 0;

    for(int i = 0; i < arr_count; i++)
    {
        counter = arr[i];
        a[counter]++;
        
    }
    *result_count = 100;
    return a;

}
