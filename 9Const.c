#include <stdio.h>

// const -- capital -- UPPERCASE
// variable -- camelCase -- myVariableNameIsThis
// function -- camelCase -- myFunctionNameIsThis
// struct/class -- PascalCase -- MyClassIsThis

void main()
{
    const float pi = 3.14;
    float radius = 2.0;

    float area = pi * radius * radius;

    printf("Area of circle having radius %f is %f\n", radius, area);
}