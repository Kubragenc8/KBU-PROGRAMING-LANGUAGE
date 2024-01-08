int main(){
    int number, opp=0, temp, rem;
    printf("enter a number: ");
    scanf("%d", &number);
    
    temp = number;
    while(temp>0){
        rem = temp % 10;
        opp = (opp * 10) + rem;
        temp = temp / 10;
    }
    if ( opp==number)
        printf("palindrome_numbers");
    else
        printf("not_polindrome_numbers");
        
    return 0;
}