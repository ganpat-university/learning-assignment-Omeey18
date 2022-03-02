/*Write a function that receives marks received by a student in 3 subjects
and returns the total and percentage of these marks. Call this function from
main( ) and print the results in main( ).*/

#include <stdio.h>

float * Cal_Per(float maths, float sci, float eng){
    static float ans[2];
    ans[0] = maths+sci+eng;
    ans[1] = (ans[0]*100)/300;

    return ans;
}

int main(){
    float maths,eng,sci;
    float *result;
    printf("Enter Marks of Maths: \n");
    scanf("%f",&maths);
    printf("Enter Marks of English: \n");
    scanf("%f",&eng);
    printf("Enter Marks of Science: \n");
    scanf("%f",&sci);

    result = Cal_Per(maths, sci, eng);

    printf("Total Marks are %.2f out of 300\n",result[0]);
    printf("You got %.2f percentage\n",result[1]);
    return 0;
}