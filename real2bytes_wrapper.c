

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
#define u_width 1
#define y_width 1
/*
 * Create external references here.  
 *
 */
/* %%%-SFUNWIZ_wrapper_externs_Changes_BEGIN --- EDIT HERE TO _END */
/* extern double func(double a); */
/* %%%-SFUNWIZ_wrapper_externs_Changes_END --- EDIT HERE TO _BEGIN */

/*
 * Output functions
 *
 */
void real2bytes_Outputs_wrapper(const real_T *u0,
			uint8_T *y0,
			uint8_T *y1,
			uint8_T *y2,
			uint8_T *y3,
			uint8_T *y4,
			uint8_T *y5,
			uint8_T *y6,
			uint8_T *y7,
			uint8_T *size)
{
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_BEGIN --- EDIT HERE TO _END */
/* This sample sets the output equal to the input
      y0[0] = u0[0]; 
 For complex signals use: y0[0].re = u0[0].re; 
      y0[0].im = u0[0].im;
      y1[0].re = u1[0].re;
      y1[0].im = u1[0].im;
*/

union {
    real_T d;
    uint8_T bytes[8];
    } u;
    
    u.d = *u0;
    *y0 = u.bytes[0];
    *y1 = u.bytes[1];
    *y2 = u.bytes[2];
    *y3 = u.bytes[3];
    *y4 = u.bytes[4];
    *y5 = u.bytes[5];
    *y6 = u.bytes[6];
    *y7 = u.bytes[7];
    
    *size = sizeof(real_T);

/* %%%-SFUNWIZ_wrapper_Outputs_Changes_END --- EDIT HERE TO _BEGIN */
}
