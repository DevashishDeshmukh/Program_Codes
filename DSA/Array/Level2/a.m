Matlab code:-
%matlab program for dc-dc buck converter
%output voltage is varied by varying duty cycle
tsim=.1;
Vdcin=100;
Rload=100;
Lseries=100e-3;
Cparallel=50e-6;
fswitch=10000;
Tp=1/fswitch;
for i=1:19
 D=i*5;
 dd(i)=D;
 sim('dc_dc_buck',tsim);
 outv(i)=yout(end);
end
plot(dd,outv)