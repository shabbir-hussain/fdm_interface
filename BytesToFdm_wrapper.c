

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
#include "helper.h"
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

/*
 * Output functions
 *
 */
void BytesToFdm_Outputs_wrapper(const uint8_T *Input,
			uint32_T *Version,
			uint32_T *padding,
			real_T *longitude,
			real_T *latitude,
			real_T *altitude,
			real32_T *agl,
			real32_T *phi,
			real32_T *theta,
			real32_T *psi,
			real32_T *alpha,
			real32_T *beta,
			real32_T *phidot,
			real32_T *thetadot,
			real32_T *psidot,
			real32_T *vcas,
			real32_T *climb_rate,
			real32_T *v_north,
			real32_T *v_east,
			real32_T *v_down,
			real32_T *v_body_u,
			real32_T *v_body_v,
			real32_T *v_body_w,
			real32_T *A_X_pilot,
			real32_T *A_Y_pilot,
			real32_T *A_Z_pilot,
			real32_T *stall_warning,
			real32_T *slip_deg,
			uint32_T *num_engines,
			uint32_T *eng_state,
			real32_T *rpm,
			real32_T *fuel_flow,
			real32_T *fuel_px,
			real32_T *egt,
			real32_T *cht,
			real32_T *mp_osi,
			real32_T *tit,
			real32_T *oil_temp,
			real32_T *oil_px,
			uint32_T *num_tanks,
			real32_T *fuel_quantity,
			uint32_T *num_wheels,
			uint32_T *wow,
			real32_T *gear_pos,
			real32_T *gear_steer,
			real32_T *gear_compression,
			uint32_T *cur_time,
			uint32_T *warp,
			real32_T *visibility,
			real32_T *elevator,
			real32_T *elevator_trim_tab,
			real32_T *left_flap,
			real32_T *right_flap,
			real32_T *left_aileron,
			real32_T *right_aileron,
			real32_T *rudder,
			real32_T *nose_wheel,
			real32_T *speedbrake,
			real32_T *spoilers)
{
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_BEGIN --- EDIT HERE TO _END */
/* This sample sets the output equal to the input
      y0[0] = u0[0]; 
 For complex signals use: y0[0].re = u0[0].re; 
      y0[0].im = u0[0].im;
      y1[0].re = u1[0].re;
      y1[0].im = u1[0].im;
*/
    int offset = 0;
    populateUint32(Input,&offset,Version);
    populateUint32(Input,&offset,padding);
    
	populateReal(Input,&offset,longitude);
    populateReal(Input,&offset,latitude);
    populateReal(Input,&offset,altitude);
    
    populateReal32(Input,&offset,agl);
    populateReal32(Input,&offset,phi);
    populateReal32(Input,&offset,theta);
    populateReal32(Input,&offset,psi);
    populateReal32(Input,&offset,alpha);
    populateReal32(Input,&offset,beta);
    
    populateReal32(Input,&offset,phidot);
    populateReal32(Input,&offset,thetadot);
    populateReal32(Input,&offset,psidot);
    populateReal32(Input,&offset,vcas);
    populateReal32(Input,&offset,climb_rate);
    populateReal32(Input,&offset,v_north);
    populateReal32(Input,&offset,v_east);
    populateReal32(Input,&offset,v_down);
    populateReal32(Input,&offset,v_body_u);
    populateReal32(Input,&offset,v_body_v);
    populateReal32(Input,&offset,v_body_w);
	
    populateReal32(Input,&offset,A_X_pilot);
    populateReal32(Input,&offset,A_Y_pilot);
    populateReal32(Input,&offset,A_Z_pilot);
    
    populateReal32(Input,&offset,stall_warning);
    populateReal32(Input,&offset,slip_deg);
    
    populateUint32(Input,&offset,num_engines);
    populateUint32_arr(Input,&offset,eng_state,4);
    populateReal32_arr(Input,&offset,fuel_flow,4);
    populateReal32_arr(Input,&offset,fuel_px,4);
    populateReal32_arr(Input,&offset,egt,4);
    populateReal32_arr(Input,&offset,mp_osi,4);
    populateReal32_arr(Input,&offset,tit,4);
    populateReal32_arr(Input,&offset,oil_temp,4);
    populateReal32_arr(Input,&offset,oil_px,4);

    populateUint32(Input,&offset,num_tanks);
    populateReal32_arr(Input,&offset,fuel_quantity,4);

    populateUint32(Input,&offset,num_wheels);
    populateUint32_arr(Input,&offset,wow,3);
    populateReal32_arr(Input,&offset,gear_pos,3);
    populateReal32_arr(Input,&offset,gear_steer,3);
    populateReal32_arr(Input,&offset,gear_compression,3);
   
    populateUint32(Input,&offset,cur_time);
    populateUint32(Input,&offset,warp);
    populateReal32(Input,&offset,visibility);
    
    populateReal32(Input,&offset,elevator);
    populateReal32(Input,&offset,elevator_trim_tab);
    populateReal32(Input,&offset,left_flap);
    populateReal32(Input,&offset,right_flap);
    populateReal32(Input,&offset,left_aileron);
    populateReal32(Input,&offset,right_aileron);
    populateReal32(Input,&offset,rudder);
    populateReal32(Input,&offset,nose_wheel);
    populateReal32(Input,&offset,speedbrake);
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_END --- EDIT HERE TO _BEGIN */
}
