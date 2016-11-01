/*
 * Include Files
 *
 */
#if defined(MATLAB_MEX_FILE)
#include "tmwtypes.h"
#include "simstruc_types.h"
#else
#include "rtwtypes.h"
#endif

/* %%%-SFUNWIZ_wrapper_includes_Changes_BEGIN --- EDIT HERE TO _END */
#include <math.h>
/* %%%-SFUNWIZ_wrapper_includes_Changes_END --- EDIT HERE TO _BEGIN */
#define u_width 408
#define y_width 1
/*
 * Create external references here.  
 *
 */
/* %%%-SFUNWIZ_wrapper_externs_Changes_BEGIN --- EDIT HERE TO _END */
/* extern double func(double a); */
/* %%%-SFUNWIZ_wrapper_externs_Changes_END --- EDIT HERE TO _BEGIN */

void populateUint32(const uint8_T *Input, int *offset, uint32_T *number)
{
    union {
    uint32_T d;
    uint8_T bytes[4];
    } u;
    u.bytes[3] = Input[*offset];
    u.bytes[2] = Input[*offset+1];
    u.bytes[1] = Input[*offset+2];
    u.bytes[0] = Input[*offset+3];
    
    *number = u.d;
    *offset += 4;
    //mexPrintf("Number: %d\n",u.d);
    //mexPrintf("offset: %d\n",*offset);
}
void populateReal(const uint8_T *Input, int *offset, real_T *number)
{
    union {
    real_T d;
    uint8_T bytes[8];
    } u;
    u.bytes[7] = Input[*offset];
    u.bytes[6] = Input[*offset+1];
    u.bytes[5] = Input[*offset+2];
    u.bytes[4] = Input[*offset+3]; 
    u.bytes[3] = Input[*offset+4];
    u.bytes[2] = Input[*offset+5];
    u.bytes[1] = Input[*offset+6];
    u.bytes[0] = Input[*offset+7];  
    *number = u.d;
    //mexPrintf("NumberR: %g\n",u.d);
    //mexPrintf("offset: %d\n",*offset);
     
    *offset += 8;

}
void populateReal32(const uint8_T *Input, int *offset, real32_T *number)
{
    union {
    real32_T d;
    uint8_T bytes[4];
    } u;
    u.bytes[3] = Input[*offset];
    u.bytes[2] = Input[*offset+1];
    u.bytes[1] = Input[*offset+2];
    u.bytes[0] = Input[*offset+3];
    *number = u.d;
    *offset += 4;
    //mexPrintf("NumberR32: %g\n",u.d);
    //mexPrintf("offset: %d\n",*offset);

}

void populateUint32_arr(const uint8_T *Input, int *offset, uint32_T *number, int alen)
{
    int i = 0;
    while(i<alen){
        populateUint32(Input,offset, number + i);
        i++;
    }
}
void populateReal_arr(const uint8_T *Input, int *offset, real_T *number, int alen)
{
     int i = 0;
    while(i<alen){
        populateReal(Input,offset, number + i);
        i++;
    }
}
void populateReal32_arr(const uint8_T *Input, int *offset, real32_T *number, int alen)
{
    int i = 0;
    while(i<alen){
        populateReal32(Input,offset, number + i);
        i++;
    }
}
