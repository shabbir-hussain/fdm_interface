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


disp('Fdm_in_test: Passing');
