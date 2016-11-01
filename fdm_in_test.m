% Author: Shabbir Hussain
% Date: Nov 1 2016
% Desc: This script Tests the bytes to FDM S-function


% Run Sim
clc;
clear;

%input frmo fgtrace.pcapng
tolerance = 0.2;
%pad with 0
sim_input = [0, 0, 0, 0, 24, 0, 0, 0, 0, 192, 1, 24, 241, 191, 130, 106, 183, 63, 229, 5, 69, 50, 116, 30, 140, 64, 152, 191, 29, 187, 30, 202, 137, 68, 182, 59, 83, 189, 110, 16, 146, 185, 156, 214, 28, 64, 55, 25, 209, 61, 159, 39, 111, 0, 0, 0, 0, 187, 115, 130, 8, 186, 57, 221, 227, 188, 100, 245, 29, 66, 141, 244, 223, 193, 33, 214, 71, 195, 5, 77, 67, 66, 74, 182, 231, 65, 33, 214, 71, 67, 14, 32, 89, 193, 69, 113, 145, 65, 21, 240, 213, 191, 68, 22, 1, 61, 71, 215, 3, 194, 0, 115, 227, 0, 0, 0, 0, 60, 98, 216, 172, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 19, 32, 87, 66, 19, 32, 87, 0, 0, 0, 0, 0, 0, 0, 0, 66, 30, 4, 210, 66, 30, 159, 207, 0, 0, 0, 0, 0, 0, 0, 0, 65, 199, 142, 20, 65, 199, 142, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 7, 164, 26, 66, 7, 168, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 65, 159, 247, 54, 65, 159, 247, 54, 60, 12, 157, 160, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 128, 0, 0, 63, 128, 0, 0, 63, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 188, 224, 223, 232, 171, 198, 107, 70, 123, 117, 195, 189, 204, 194, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 221, 36, 108, 60, 221, 36, 108, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0];
sim('FDM_in_Test');

% Init expected Values
ex_Version = 24;
ex_Padding = 0;

ex_longitude= -2.1371799496168;
ex_latitude = 0.65689356020243; 
ex_altitude=1583.8861798111; 
ex_agl=1457.9423828125;
ex_phi= -0.057997327297926;    
ex_theta= -0.00027710723225027;   
ex_psi= 2.8614158630371;    
ex_alpha = 0.07770574837923; 
ex_beta=0;
ex_phidot=-0.0037207456771284;

ex_vcas =70.989067077637; 
ex_climb_rate = -10.112714767456; 
ex_v_north = -133.33920288086; 
ex_v_east =50.627849578857;
ex_v_down =10.112714767456; 
ex_v_wind_body_north = 142.14254760742;
ex_v_wind_body_east = -12.34609413147;
ex_v_wind_body_down =9.3734474182129;
ex_A_X_pilot = -0.76622897386551;
ex_A_Y_pilot =0.048583883792162;
ex_A_Z_pilot =-32.121486663818; 
ex_stall_warning = 0; 
ex_slip_deg = 0.013799147680402; 

ex_num_tanks = 4;
ex_fuel_quantityL = 19.995708465576;
ex_fuel_quantityC = 19.995708465576;
ex_fuel_quantityR = 0.0085825026035309;
ex_fuel_quantityA = 0;

ex_num_wheels = 3 ;
ex_wowN = 0 ;
ex_wowL = 0 ;
ex_wowR = 0 ;
ex_gear_posN= 1 ;
ex_gear_posL= 1 ;
ex_gear_posR= 1 ;
ex_gear_steerN = 0 ;
ex_gear_steerL = 0 ;
ex_gear_steerR = 0 ;
ex_gear_compressionN = 0 ;
ex_gear_compressionL = 0 ;
ex_gear_compressionR = 0 ;

ex_cur_time = 1086120159;
ex_warp =-391395733 ;
ex_visibility = 16093.440429688 ;

ex_elevator = -0.099981136620045 ;
ex_elevator_trim_tab = 0 ;
ex_left_flap = 0 ;
ex_right_flap = 0 ;
ex_left_aileron = 0.026994906365871 ;
ex_right_aileron = 0.026994906365871 ;
ex_rudder = -0 ;
ex_nose_wheel = 0 ;
ex_speedbrake = 0 ;
ex_spoilers = 0 ;


% Verify
assert(abs(Version - ex_Version) < tolerance);
assert(abs(Longitude - ex_longitude) < tolerance);
assert(abs(Latitude - ex_latitude) < tolerance);
assert(abs(Altitude - ex_altitude) < tolerance);
assert(abs(Agl - ex_agl) < tolerance);
assert(abs(Phi - ex_phi) < tolerance);
assert(abs(Theta - ex_theta) < tolerance);
assert(abs(Psi - ex_psi) < tolerance);
assert(abs(Alpha - ex_alpha) < tolerance);
assert(abs(Beta - ex_beta) < tolerance);
assert(abs(PhiDot - ex_phidot) < tolerance);


assert(abs(Vcas - ex_vcas) < tolerance);
assert(abs(Climb_rate- ex_climb_rate) < tolerance);
assert(abs(V_north - ex_v_north ) < tolerance);
assert(abs(V_east - ex_v_east ) < tolerance);
assert(abs(V_down - ex_v_down ) < tolerance);
assert(abs(V_body_north - ex_v_wind_body_north ) < tolerance);
assert(abs(V_body_east - ex_v_wind_body_east ) < tolerance);
assert(abs(V_body_down - ex_v_wind_body_down ) < tolerance);
assert(abs(A_x_pilot - ex_A_X_pilot ) < tolerance);
assert(abs(A_y_pilot - ex_A_Y_pilot ) < tolerance);
assert(abs(A_z_pilot - ex_A_Z_pilot ) < tolerance);
assert(abs(Stall_warning - ex_stall_warning ) < tolerance);
assert(abs(Slip_deg - ex_slip_deg ) < tolerance);

assert(abs(Num_tanks - ex_num_tanks ) < tolerance);
assert(abs(Fuel_quantity(0) - ex_fuel_quantityL ) < tolerance);
assert(abs(Fuel_quantity(1) - ex_fuel_quantityC ) < tolerance);
assert(abs(Fuel_quantity(2) - ex_fuel_quantityR ) < tolerance);
assert(abs(Fuel_quantity(3) - ex_fuel_quantityA ) < tolerance);

assert(abs() < tolerance);
assert(abs() < tolerance);
assert(abs() < tolerance);


assert(abs(Num_wheels - ex_num_wheels) < tolerance);
assert(abs(Wow(0) - ex_wowN) < tolerance);
assert(abs(Wow(1) - ex_wowL) < tolerance);
assert(abs(Wow(2) - ex_wowR) < tolerance);
assert(abs(Gear_pos(0) - ex_gear_pos) < tolerance);
assert(abs(Gear_pos(1) - ex_gear_pos) < tolerance);
assert(abs(Gear_pos(2) - ex_gear_pos) < tolerance);
assert(abs(Gear_steer(0) - ex_gear_steerN) < tolerance);
assert(abs(Gear_steer(1) - ex_gear_steerL) < tolerance);
assert(abs(Gear_steer(2) - ex_gear_steerR) < tolerance);
assert(abs(Gear_compression(0) - ex_gear_compressionN) < tolerance);
assert(abs(Gear_compression(1) - ex_gear_compressionL) < tolerance);
assert(abs(Gear_compression(2) - ex_gear_compressionR) < tolerance);

assert(abs(Cur_time - ex_cur_time) < tolerance);
assert(abs(Warp - ex_warp) < tolerance);
assert(abs(Visibility - ex_visibility ) < tolerance);

assert(abs(Elevator - ex_elevator = -0.09998113662) < tolerance);
assert(abs(Elevator_trim_tab - ex_elevator_trim_tab) < tolerance);
assert(abs(Left_flap  - ex_left_flap) < tolerance);
assert(abs(Right_flap - ex_right_flap) < tolerance);
assert(abs(Left_aileron - ex_left_aileron ) < tolerance);
assert(abs(Right_aileron -  ex_right_aileron ) < tolerance);
assert(abs(Rudder - ex_rudder ) < tolerance);
assert(abs(Nose_wheel - ex_nose_wheel) < tolerance);
assert(abs(SpeedBrake - ex_speedbrake) < tolerance);
assert(abs(Spoiler - ex_spoilers) < tolerance);

disp('Fdm_in_test: Passing');
