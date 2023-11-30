//process
    //length counting
    for(int i = 0 ; str1[i] != '\0' ; i++){
        len1++;
    }
    for(int i = 0 ; str2[i] != '\0' ; i++){
        len2++;
    }
    //tranfer 1 string to 3string
    int i;
    for(i = 0 ; i < len1 ; i++){
        str3[i] = str1[i];
    }
    
    //tranfer 2 string to 3string
    for(int j = 0 ; j < len2 ; j++){
        str3[i] = str1[j];
        i++;
    }
    printf("%d \n",i);
    //output
    printf("%s ",str3);