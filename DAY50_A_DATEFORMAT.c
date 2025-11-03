Q.  //Change the date format from dd/04/yyyy to dd-Apr-yyyy

SOL. #include <stdio.h>
#include <time.h>
#include <string.h>

int main() {
    char input_date[] = "15/04/2023"; // dd/04/yyyy format
    struct tm tm = {0};
    
    // Parse the input date assuming it's in dd/mm/yyyy format
    strptime(input_date, "%d/%m/%Y", &tm);
    
    // Buffer to hold output string in dd-MMM-yyyy format
    char output_date[20];
    
    // Format tm to desired output format dd-Apr-yyyy (using %b for abbreviated month)
    strftime(output_date, sizeof(output_date), "%d-%b-%Y", &tm);
    
    printf("Formatted date: %s\n", output_date); // Output: 15-Apr-2023
    
    return 0;
}
