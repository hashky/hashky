
thick = 1;
length = 21.2;
width = 19.5;
height = 8;
slength = 6;
swidth = 7.5;
usb = 12;

/*u clamp thing*/
difference(){
union(){
difference(){
cube([length+2*thick,width+2*thick,height+2*thick]);
translate([ thick,thick,thick]) cube([length,width,height+thick]);
translate([ (length+2*thick-usb)/2,thick,thick]) cube([usb,width+thick,height*0.75]);
translate([0,-thick,thick*4.2]) cube([thick,thick*5,height/3]);
translate([0,width-thick*4,thick*4.2]) cube([thick,thick*6,height/3]);
}
/*translate([ thick,width-swidth+2*thick,height+thick]) cube([slength+thick,swidth,thick]);*/


translate([ length/2+thick,-0,0]) 

difference(){
scale([1.8,0.9,1]) difference(){
cylinder(height+2*thick,6,6);
cylinder(height+2*thick,4,4);
}
translate([-length,0,0])cube([2*length,width,height+2*thick]);

}
}

translate([thick,0,height+thick]) cube([length,thick,height/5]);
translate([length/4-4.7,width/2+2,0]) scale([0.34,0.34,0.34]) linear_extrude(5) rotate([180,0,0]) text("HASHKY",font = "Boulder:style=Bold");
translate([6.17,9.98,0]) cylinder(height+2*thick,1,1);
}