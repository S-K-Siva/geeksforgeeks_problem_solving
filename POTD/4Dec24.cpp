int areRotations(char* s1, char* s2) {
    if(strlen(s1) != strlen(s2)) return 0;

    
    char combine[2 * strlen(s1) + 1];
    
    strcpy(combine, s1);
    strcat(combine, s1);
    
    
    if(strstr(combine, s2) != NULL){
        return 1;
    }
    return 0;
}
