//Given a time in 12-hour AM/PM format, convert it to military (24-hour) time.
//Input: A single string  that represents a time in 12-hour clock format (i.e.hh:mm:ssAM or hh:mm:ssPM).

char* timeConversion(char* s) {

    char* return_string = malloc(100 * sizeof(char));
    char hours[2];
    char day[3];
    
    hours[0] = s[0];
    hours[1] = s[1];
    
    day[0] = s[8];
    day[1] = s[9];
    
    printf("%s", day);
    if(s[0] == '1' && s[1] == '2' && (strcmp(day, "AM") == 0)){
        sprintf(return_string, "%s", "00");
        printf("am 12");
        printf("%s", hours);
    }
    
     if(s[0] != '1' && s[1] != '2' && (strcmp(day, "AM") == 0)){
        return_string[0] = s[0];
        return_string[1] = s[1];
        printf("am not 12");
        printf("%s", hours);
    }
    
    if(strcmp(hours, "12") != 0 && (strcmp(day, "PM") == 0)){
        int test = atoi(hours);
        test += 12;
        sprintf(return_string, "%d", test);
        printf("pm not 12");
        printf("%s", hours);
    }
    
     if(s[0] == '1' && s[1] == '2' && (strcmp(day, "PM") == 0)){
        return_string[0] = s[0];
        return_string[1] = s[1];       
        printf("%s", hours);
    }
    
    
    return_string[2] = s[2];
    return_string[3] = s[3];
    return_string[4] = s[4];
    return_string[5] = s[5];
    return_string[6] = s[6];
    return_string[7] = s[7];
    
    printf("%s return string\n", return_string);
    return return_string;

    
}
