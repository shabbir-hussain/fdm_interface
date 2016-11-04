

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
#include "Arinc825.h"
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
void ARINC825HeaderDirectedMessage_Outputs_wrapper(const uint32_T *LCC,
			const uint32_T *SourceAddress,
			const uint32_T *DestinationAddress,
			const uint32_T *SourcePortID,
			const uint32_T *DestinationPortID,
			uint32_T *Header)
{
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_BEGIN --- EDIT HERE TO _END */
/* This sample sets the output equal to the input
      y0[0] = u0[0]; 
 For complex signals use: y0[0].re = u0[0].re; 
      y0[0].im = u0[0].im;
      y1[0].re = u1[0].re;
      y1[0].im = u1[0].im;
*/
    *Header = 0;
    assignLCC(LCC, Header);
    assignField(SourceAddress, Header, _SourceAddress);
    assignField(DestinationAddress, Header, _DestinationAddress);
    assignField(SourcePortID, Header, _SourcePortID);
    assignField(DestinationPortID, Header, _DestinationPortID);
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_END --- EDIT HERE TO _BEGIN */
}
