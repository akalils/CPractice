bool squareIsWhite(char * coordinates){
    int x = coordinates[0] - 'a';
    int y = coordinates[1] - '1';
    if ((x + y) % 2 == 0)
        return false;
    else
        return true;
}
