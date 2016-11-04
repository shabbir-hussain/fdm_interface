

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
void ARINC825Header1toMany_Outputs_wrapper(const uint32_T *LCC,
			const uint32_T *SourceFID,
			const uint32_T *FSB,
			const uint32_T *LCL,
			const uint32_T *PVT,
			const uint32_T *DOC,
			const uint32_T *RCI,
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
    assignField(SourceFID, Header, _SourceFID);
    assignField(FSB, Header, _FSB);
    assignField(LCL, Header, _LCL);
    assignField(PVT, Header, _PVT);
    assignField(DOC, Header, _DOC);
    assignField(RCI, Header, _RCI);
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_END --- EDIT HERE TO _BEGIN */
}
