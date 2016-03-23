
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x5 = 0;
int8_t x7 = INT8_MIN;
static int8_t x10 = INT8_MIN;
static int64_t x16 = INT64_MIN;
static volatile uint64_t x29 = 509090027611LLU;
volatile int32_t x40 = INT32_MIN;
volatile uint8_t x41 = 1U;
static int8_t x42 = INT8_MIN;
volatile int32_t t9 = 6;
volatile uint64_t x45 = 28LLU;
int64_t x46 = INT64_MIN;
static int16_t x53 = 10;
static int32_t x54 = 17;
int64_t x58 = 134727009242282LL;
uint64_t x61 = 160837699062551497LLU;
int16_t x63 = -1;
volatile uint32_t t13 = 32494011U;
int32_t x71 = -1;
int64_t x76 = 7822942768822649LL;
volatile int32_t t17 = 173653;
uint64_t x85 = UINT64_MAX;
volatile int16_t x94 = INT16_MIN;
int64_t x99 = 65519LL;
uint8_t x101 = UINT8_MAX;
static volatile int32_t t22 = 1;
int16_t x115 = -1;
int64_t x124 = INT64_MAX;
static int16_t x148 = -1;
int64_t x155 = -45LL;
uint64_t x160 = 400087726LLU;
uint64_t t35 = 107175585917717LLU;
int8_t x162 = 2;
int32_t t36 = -853928640;
int32_t x167 = INT32_MIN;
int32_t x169 = -1;
int32_t x172 = INT32_MIN;
int8_t x173 = INT8_MAX;
uint8_t x179 = 11U;
int32_t t40 = 38080659;
uint32_t t41 = 800969835U;
int64_t x187 = -1837205LL;
int16_t x196 = -2996;
int64_t x201 = INT64_MIN;
static int64_t x202 = 364LL;
static int32_t x209 = -1;
int16_t x212 = 22;
static int32_t x213 = INT32_MIN;
static volatile int32_t t48 = 2862123;
int64_t t49 = -2204107141881099LL;
int32_t x228 = INT32_MIN;
int64_t t50 = -48461457718551859LL;
int8_t x232 = INT8_MAX;
int64_t t51 = 36LL;
static volatile int32_t x236 = 338610;
int32_t x240 = INT32_MIN;
volatile int32_t t53 = 5774;
int16_t x243 = INT16_MAX;
volatile uint32_t x251 = UINT32_MAX;
int8_t x252 = -1;
uint16_t x253 = 263U;
int32_t x255 = -1;
int32_t t58 = -210821725;
int16_t x262 = INT16_MAX;
volatile int32_t x268 = 3587;
uint8_t x269 = UINT8_MAX;
int8_t x274 = -2;
volatile int32_t t62 = -1;
static volatile int16_t x281 = 15250;
uint8_t x289 = UINT8_MAX;
int16_t x294 = -46;
volatile int64_t t67 = INT64_MIN;
static int64_t x299 = -1LL;
static volatile int64_t t68 = -488245473LL;
volatile int32_t t69 = 1388966;
int32_t x305 = INT32_MAX;
static int16_t x306 = 900;
static uint64_t x307 = 488805952951785292LLU;
int64_t x308 = INT64_MIN;
uint64_t t70 = 11150LLU;
static int16_t x309 = INT16_MAX;
int32_t x311 = -249852;
uint32_t x314 = UINT32_MAX;
uint32_t x318 = 40623U;
int32_t x323 = -1;
int32_t x326 = INT32_MAX;
int32_t x332 = INT32_MIN;
int8_t x335 = 0;
static int32_t x340 = INT32_MAX;
volatile int32_t t78 = -197905446;
int16_t x347 = INT16_MIN;
volatile int32_t t79 = 122563;
static uint32_t x351 = 69765U;
int8_t x355 = -1;
int32_t t81 = 47;
static volatile int64_t x359 = -459LL;
static int16_t x365 = INT16_MAX;
uint64_t x370 = 2061356661351LLU;
int64_t t84 = 77851LL;
static int8_t x374 = -1;
int32_t x379 = -61881;
static volatile int64_t x387 = -50945LL;
static volatile int64_t t88 = 0LL;
uint32_t t89 = 31024661U;
uint16_t x395 = 19505U;
static volatile int64_t t91 = 142414LL;
int32_t x407 = -5535443;
int64_t x410 = 12957631LL;
static uint32_t t94 = 8U;
uint64_t x420 = 2207648168344LLU;
int64_t x421 = INT64_MIN;
int16_t x424 = INT16_MAX;
int32_t t97 = 11;
int8_t x425 = INT8_MIN;
static int32_t x427 = -1;
static volatile uint64_t x428 = 57742087704261711LLU;
uint64_t x430 = UINT64_MAX;
uint16_t x439 = UINT16_MAX;
volatile int32_t t101 = 2;
uint8_t x445 = 2U;
int64_t x446 = INT64_MIN;
int16_t x455 = -1;
uint8_t x456 = 10U;
static int64_t x457 = INT64_MIN;
uint8_t x459 = 0U;
int32_t x463 = INT32_MAX;
static volatile int8_t x464 = 11;
uint8_t x473 = 0U;
uint16_t x478 = 9U;
int16_t x479 = INT16_MIN;
static uint32_t x480 = 50U;
uint32_t t110 = 23179U;
uint64_t x482 = 229553409LLU;
int64_t x483 = -4924LL;
int16_t x493 = INT16_MIN;
volatile int16_t x495 = INT16_MAX;
uint32_t x504 = 0U;
static int32_t x505 = INT32_MAX;
volatile int32_t t117 = 7905;
int64_t x511 = -1LL;
volatile uint16_t x523 = 1269U;
volatile uint64_t x528 = 799LLU;
static uint64_t t122 = 4293LLU;
static uint32_t x535 = 381108U;
volatile int64_t t124 = -37145847023444598LL;
uint16_t x538 = 31811U;
int16_t x542 = -1;
int8_t x543 = -11;
static int64_t x545 = -56804LL;
int64_t t127 = -21LL;
static int8_t x556 = INT8_MIN;
volatile int32_t t130 = -8;
static uint8_t x564 = UINT8_MAX;
uint32_t t133 = 105935U;
volatile uint8_t x583 = 4U;
int16_t x586 = -1;
volatile int8_t x587 = INT8_MIN;
static volatile uint16_t x594 = UINT16_MAX;
static int32_t x601 = INT32_MIN;
int64_t x610 = -344LL;
uint8_t x612 = UINT8_MAX;
int16_t x616 = -950;
volatile uint64_t x621 = UINT64_MAX;
volatile int16_t x625 = INT16_MIN;
int32_t x627 = INT32_MAX;
uint16_t x631 = 2042U;
int64_t x633 = -1LL;
uint16_t x638 = UINT16_MAX;
int64_t x641 = -33265LL;
int64_t x642 = INT64_MIN;
uint8_t x643 = UINT8_MAX;
uint16_t x647 = 101U;
int16_t x652 = INT16_MIN;
int8_t x659 = -1;
int64_t x676 = INT64_MIN;
int64_t x682 = INT64_MIN;
uint64_t x690 = 14462052940LLU;
static int64_t x694 = -1LL;
uint32_t x702 = 6917U;
int64_t x704 = -55913537656LL;
uint64_t x706 = 3488385700842131LLU;
volatile int8_t x710 = INT8_MIN;
int64_t x715 = -1LL;
volatile int32_t x717 = INT32_MIN;
volatile uint32_t x718 = 10634U;
uint32_t x727 = UINT32_MAX;
uint32_t t168 = 1227354U;
uint64_t x736 = UINT64_MAX;
uint64_t x738 = UINT64_MAX;
static uint16_t x742 = 51U;
volatile int8_t x745 = -1;
int8_t x748 = -1;
volatile uint32_t t176 = 0U;
int64_t x765 = -108927LL;
uint8_t x770 = 11U;
static int32_t t180 = -485112541;
volatile int16_t x788 = -5;
volatile int32_t x796 = -19224384;
int32_t t184 = 1764706;
volatile int16_t x808 = INT16_MAX;
static int32_t t186 = -34059715;
volatile int32_t x813 = INT32_MAX;
uint64_t x814 = 2922870841436768LLU;
int16_t x815 = INT16_MIN;
int32_t t188 = 25093;
int32_t x821 = INT32_MAX;
static int32_t t189 = 1;
uint64_t x833 = 8247601396484342LLU;
int16_t x836 = -1;
volatile int32_t t192 = 985;
volatile int32_t x838 = INT32_MAX;
volatile int32_t t193 = 727;
uint16_t x850 = UINT16_MAX;
static volatile uint64_t x860 = UINT64_MAX;
volatile int8_t x864 = 7;
static int64_t x866 = INT64_MIN;
int64_t x868 = -545538049026440961LL;
volatile int64_t t198 = 507548841580LL;
int16_t x872 = -834;
int32_t t199 = -4;


void f0(void) {
    	static int8_t x6 = INT8_MIN;
	int32_t x8 = INT32_MIN;
	int32_t t0 = -1999679;

    t0 = (((x5==x6)+x7)-x8);

    if (t0 != 2147483520) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x9 = INT16_MIN;
	uint8_t x11 = UINT8_MAX;
	volatile uint16_t x12 = 1220U;
	volatile int32_t t1 = -1050350;

    t1 = (((x9==x10)+x11)-x12);

    if (t1 != -965) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x13 = INT32_MIN;
	int8_t x14 = INT8_MIN;
	int32_t x15 = INT32_MIN;
	int64_t t2 = 0LL;

    t2 = (((x13==x14)+x15)-x16);

    if (t2 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x17 = 0;
	int8_t x18 = 2;
	uint32_t x19 = 111U;
	static volatile uint16_t x20 = 2U;
	volatile uint32_t t3 = 7U;

    t3 = (((x17==x18)+x19)-x20);

    if (t3 != 109U) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x21 = 63718825LLU;
	static uint32_t x22 = 24U;
	int64_t x23 = -1LL;
	int64_t x24 = 11386863681248260LL;
	int64_t t4 = 129944844869834640LL;

    t4 = (((x21==x22)+x23)-x24);

    if (t4 != -11386863681248261LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x25 = -76;
	volatile int8_t x26 = -1;
	uint16_t x27 = 0U;
	int32_t x28 = -1;
	volatile int32_t t5 = 1042545363;

    t5 = (((x25==x26)+x27)-x28);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x30 = INT16_MIN;
	int8_t x31 = -1;
	volatile int32_t x32 = -540;
	static int32_t t6 = -349785;

    t6 = (((x29==x30)+x31)-x32);

    if (t6 != 539) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x33 = INT16_MAX;
	volatile uint16_t x34 = 464U;
	int16_t x35 = -1;
	volatile int8_t x36 = INT8_MIN;
	volatile int32_t t7 = -39003419;

    t7 = (((x33==x34)+x35)-x36);

    if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x37 = INT32_MIN;
	int8_t x38 = 1;
	static int16_t x39 = -1;
	int32_t t8 = INT32_MAX;

    t8 = (((x37==x38)+x39)-x40);

    if (t8 != INT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x43 = -3;
	static uint8_t x44 = 9U;

    t9 = (((x41==x42)+x43)-x44);

    if (t9 != -12) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x47 = -1;
	volatile uint32_t x48 = UINT32_MAX;
	uint32_t t10 = 107938831U;

    t10 = (((x45==x46)+x47)-x48);

    if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x55 = UINT8_MAX;
	int16_t x56 = -7916;
	int32_t t11 = 0;

    t11 = (((x53==x54)+x55)-x56);

    if (t11 != 8171) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint32_t x57 = 8247321U;
	static int8_t x59 = INT8_MIN;
	static int64_t x60 = -1LL;
	int64_t t12 = 6217827LL;

    t12 = (((x57==x58)+x59)-x60);

    if (t12 != -127LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x62 = 27151U;
	uint32_t x64 = 79U;

    t13 = (((x61==x62)+x63)-x64);

    if (t13 != 4294967216U) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x65 = -1;
	int64_t x66 = INT64_MAX;
	static int8_t x67 = -1;
	static uint16_t x68 = UINT16_MAX;
	volatile int32_t t14 = 3;

    t14 = (((x65==x66)+x67)-x68);

    if (t14 != -65536) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x69 = 50;
	int16_t x70 = INT16_MIN;
	static int64_t x72 = -1LL;
	int64_t t15 = -2628471LL;

    t15 = (((x69==x70)+x71)-x72);

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x73 = INT16_MAX;
	static uint8_t x74 = 63U;
	volatile int64_t x75 = -1LL;
	volatile int64_t t16 = 884LL;

    t16 = (((x73==x74)+x75)-x76);

    if (t16 != -7822942768822650LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x77 = -14;
	int32_t x78 = INT32_MIN;
	int16_t x79 = INT16_MIN;
	int16_t x80 = -2;

    t17 = (((x77==x78)+x79)-x80);

    if (t17 != -32766) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x81 = INT8_MAX;
	uint32_t x82 = UINT32_MAX;
	uint64_t x83 = 22LLU;
	int64_t x84 = INT64_MIN;
	uint64_t t18 = 33278331161LLU;

    t18 = (((x81==x82)+x83)-x84);

    if (t18 != 9223372036854775830LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x86 = 1U;
	int8_t x87 = 2;
	static volatile int16_t x88 = INT16_MAX;
	static volatile int32_t t19 = 1056130795;

    t19 = (((x85==x86)+x87)-x88);

    if (t19 != -32765) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint16_t x93 = 19U;
	volatile int8_t x95 = INT8_MIN;
	int16_t x96 = -1;
	int32_t t20 = 8933777;

    t20 = (((x93==x94)+x95)-x96);

    if (t20 != -127) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x97 = 89877LL;
	volatile int16_t x98 = INT16_MIN;
	uint64_t x100 = 12215709601LLU;
	uint64_t t21 = 13710LLU;

    t21 = (((x97==x98)+x99)-x100);

    if (t21 != 18446744061493907534LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x102 = 1;
	int32_t x103 = INT32_MIN;
	static int8_t x104 = -59;

    t22 = (((x101==x102)+x103)-x104);

    if (t22 != -2147483589) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint16_t x105 = UINT16_MAX;
	int16_t x106 = INT16_MIN;
	static int16_t x107 = -12;
	uint32_t x108 = 4U;
	volatile uint32_t t23 = 15893715U;

    t23 = (((x105==x106)+x107)-x108);

    if (t23 != 4294967280U) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x109 = UINT16_MAX;
	static uint32_t x110 = UINT32_MAX;
	int64_t x111 = INT64_MAX;
	static volatile int8_t x112 = INT8_MAX;
	volatile int64_t t24 = -3LL;

    t24 = (((x109==x110)+x111)-x112);

    if (t24 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint16_t x113 = UINT16_MAX;
	uint64_t x114 = 11275259LLU;
	uint64_t x116 = 18218975LLU;
	uint64_t t25 = 256316638159935LLU;

    t25 = (((x113==x114)+x115)-x116);

    if (t25 != 18446744073691332640LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint64_t x117 = 492189516947815LLU;
	int64_t x118 = INT64_MIN;
	uint64_t x119 = UINT64_MAX;
	volatile uint16_t x120 = 171U;
	uint64_t t26 = 237710LLU;

    t26 = (((x117==x118)+x119)-x120);

    if (t26 != 18446744073709551444LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x121 = INT8_MIN;
	int8_t x122 = INT8_MAX;
	static uint64_t x123 = 206LLU;
	volatile uint64_t t27 = 1169984LLU;

    t27 = (((x121==x122)+x123)-x124);

    if (t27 != 9223372036854776015LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x125 = 152U;
	int32_t x126 = -30;
	static uint16_t x127 = 2U;
	int64_t x128 = INT64_MAX;
	static volatile int64_t t28 = -46311987165652275LL;

    t28 = (((x125==x126)+x127)-x128);

    if (t28 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x129 = -35;
	static volatile uint32_t x130 = 45326U;
	uint16_t x131 = UINT16_MAX;
	uint64_t x132 = 6LLU;
	static volatile uint64_t t29 = 16LLU;

    t29 = (((x129==x130)+x131)-x132);

    if (t29 != 65529LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint8_t x133 = 5U;
	volatile uint64_t x134 = 1684439801429LLU;
	int16_t x135 = -1;
	static int16_t x136 = INT16_MIN;
	volatile int32_t t30 = 105127709;

    t30 = (((x133==x134)+x135)-x136);

    if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint8_t x141 = 12U;
	int16_t x142 = 0;
	static volatile int8_t x143 = INT8_MIN;
	uint32_t x144 = 116U;
	uint32_t t31 = 45383611U;

    t31 = (((x141==x142)+x143)-x144);

    if (t31 != 4294967052U) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x145 = 2089041586986254267LLU;
	static int64_t x146 = 2311648492LL;
	int16_t x147 = INT16_MIN;
	int32_t t32 = 2217;

    t32 = (((x145==x146)+x147)-x148);

    if (t32 != -32767) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x149 = INT32_MIN;
	int8_t x150 = INT8_MAX;
	uint16_t x151 = UINT16_MAX;
	uint32_t x152 = 1U;
	uint32_t t33 = 18U;

    t33 = (((x149==x150)+x151)-x152);

    if (t33 != 65534U) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int32_t x153 = -1;
	int64_t x154 = INT64_MIN;
	int32_t x156 = INT32_MIN;
	volatile int64_t t34 = -3319LL;

    t34 = (((x153==x154)+x155)-x156);

    if (t34 != 2147483603LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x157 = INT64_MAX;
	uint64_t x158 = UINT64_MAX;
	int16_t x159 = 200;

    t35 = (((x157==x158)+x159)-x160);

    if (t35 != 18446744073309464090LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x161 = INT64_MIN;
	int32_t x163 = -1;
	int32_t x164 = 32112;

    t36 = (((x161==x162)+x163)-x164);

    if (t36 != -32113) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x165 = INT16_MIN;
	uint16_t x166 = 1U;
	volatile int32_t x168 = -1;
	int32_t t37 = 126766;

    t37 = (((x165==x166)+x167)-x168);

    if (t37 != -2147483647) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint8_t x170 = UINT8_MAX;
	uint64_t x171 = UINT64_MAX;
	volatile uint64_t t38 = 4LLU;

    t38 = (((x169==x170)+x171)-x172);

    if (t38 != 2147483647LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x174 = -1;
	static volatile int16_t x175 = -333;
	volatile uint8_t x176 = UINT8_MAX;
	volatile int32_t t39 = -1;

    t39 = (((x173==x174)+x175)-x176);

    if (t39 != -588) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x177 = -1;
	uint32_t x178 = 7626U;
	int8_t x180 = INT8_MIN;

    t40 = (((x177==x178)+x179)-x180);

    if (t40 != 139) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x181 = 1500U;
	int16_t x182 = INT16_MAX;
	int32_t x183 = -1;
	uint32_t x184 = 423948U;

    t41 = (((x181==x182)+x183)-x184);

    if (t41 != 4294543347U) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x185 = UINT8_MAX;
	int16_t x186 = INT16_MAX;
	static volatile int8_t x188 = INT8_MIN;
	volatile int64_t t42 = 48497LL;

    t42 = (((x185==x186)+x187)-x188);

    if (t42 != -1837077LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x193 = 2U;
	static int16_t x194 = INT16_MIN;
	int32_t x195 = -1;
	volatile int32_t t43 = -189;

    t43 = (((x193==x194)+x195)-x196);

    if (t43 != 2995) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x197 = INT64_MIN;
	uint16_t x198 = 481U;
	int16_t x199 = 5;
	static int8_t x200 = INT8_MIN;
	static volatile int32_t t44 = -981;

    t44 = (((x197==x198)+x199)-x200);

    if (t44 != 133) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x203 = 2U;
	static uint64_t x204 = UINT64_MAX;
	static uint64_t t45 = 565248449LLU;

    t45 = (((x201==x202)+x203)-x204);

    if (t45 != 3LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x205 = UINT32_MAX;
	uint32_t x206 = 392U;
	int64_t x207 = INT64_MIN;
	int16_t x208 = -1;
	volatile int64_t t46 = -582705868636099872LL;

    t46 = (((x205==x206)+x207)-x208);

    if (t46 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x210 = INT32_MAX;
	int8_t x211 = INT8_MIN;
	volatile int32_t t47 = 601;

    t47 = (((x209==x210)+x211)-x212);

    if (t47 != -150) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x214 = INT64_MAX;
	uint16_t x215 = UINT16_MAX;
	int16_t x216 = -316;

    t48 = (((x213==x214)+x215)-x216);

    if (t48 != 65851) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint64_t x221 = 15054363655181LLU;
	uint64_t x222 = 2154380938LLU;
	int32_t x223 = INT32_MAX;
	int64_t x224 = 547140547496860876LL;

    t49 = (((x221==x222)+x223)-x224);

    if (t49 != -547140545349377229LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x225 = INT8_MIN;
	int8_t x226 = -17;
	int64_t x227 = -1LL;

    t50 = (((x225==x226)+x227)-x228);

    if (t50 != 2147483647LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x229 = UINT32_MAX;
	uint16_t x230 = UINT16_MAX;
	int64_t x231 = INT64_MAX;

    t51 = (((x229==x230)+x231)-x232);

    if (t51 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x233 = INT16_MIN;
	int8_t x234 = INT8_MIN;
	static int32_t x235 = -1;
	volatile int32_t t52 = 547374806;

    t52 = (((x233==x234)+x235)-x236);

    if (t52 != -338611) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x237 = 49050718LLU;
	uint64_t x238 = 524425393LLU;
	volatile int16_t x239 = INT16_MIN;

    t53 = (((x237==x238)+x239)-x240);

    if (t53 != 2147450880) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x241 = INT8_MAX;
	int16_t x242 = -2260;
	static volatile int32_t x244 = 3872;
	volatile int32_t t54 = 50;

    t54 = (((x241==x242)+x243)-x244);

    if (t54 != 28895) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x245 = 51U;
	static int64_t x246 = INT64_MIN;
	volatile uint32_t x247 = 7201726U;
	static volatile uint16_t x248 = UINT16_MAX;
	uint32_t t55 = 399222U;

    t55 = (((x245==x246)+x247)-x248);

    if (t55 != 7136191U) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x249 = INT64_MAX;
	int16_t x250 = INT16_MIN;
	uint32_t t56 = 477U;

    t56 = (((x249==x250)+x251)-x252);

    if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint64_t x254 = 601951003885334LLU;
	uint64_t x256 = 3035454017763011141LLU;
	uint64_t t57 = 8387385240492213052LLU;

    t57 = (((x253==x254)+x255)-x256);

    if (t57 != 15411290055946540474LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x257 = 11;
	volatile uint16_t x258 = 10U;
	int16_t x259 = INT16_MIN;
	int8_t x260 = INT8_MAX;

    t58 = (((x257==x258)+x259)-x260);

    if (t58 != -32895) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint64_t x261 = UINT64_MAX;
	int8_t x263 = -1;
	uint64_t x264 = UINT64_MAX;
	uint64_t t59 = 37LLU;

    t59 = (((x261==x262)+x263)-x264);

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x265 = 245;
	uint64_t x266 = 3210948032073LLU;
	int64_t x267 = -798816679LL;
	volatile int64_t t60 = -17064LL;

    t60 = (((x265==x266)+x267)-x268);

    if (t60 != -798820266LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x270 = 15267U;
	uint32_t x271 = 69724U;
	static uint64_t x272 = UINT64_MAX;
	volatile uint64_t t61 = 1LLU;

    t61 = (((x269==x270)+x271)-x272);

    if (t61 != 69725LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x273 = INT8_MIN;
	int32_t x275 = -325;
	static uint16_t x276 = 7U;

    t62 = (((x273==x274)+x275)-x276);

    if (t62 != -332) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x277 = 832;
	int32_t x278 = 4152102;
	int16_t x279 = INT16_MAX;
	uint64_t x280 = UINT64_MAX;
	uint64_t t63 = 8922947851294834LLU;

    t63 = (((x277==x278)+x279)-x280);

    if (t63 != 32768LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x282 = INT64_MIN;
	uint64_t x283 = 44761187LLU;
	int16_t x284 = -1;
	volatile uint64_t t64 = 115265375LLU;

    t64 = (((x281==x282)+x283)-x284);

    if (t64 != 44761188LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint16_t x285 = UINT16_MAX;
	int16_t x286 = INT16_MAX;
	int16_t x287 = -1;
	uint32_t x288 = 578065U;
	static uint32_t t65 = 174U;

    t65 = (((x285==x286)+x287)-x288);

    if (t65 != 4294389230U) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint32_t x290 = 272U;
	static int32_t x291 = -45;
	int16_t x292 = INT16_MIN;
	volatile int32_t t66 = 0;

    t66 = (((x289==x290)+x291)-x292);

    if (t66 != 32723) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x293 = 755;
	int16_t x295 = -1;
	int64_t x296 = INT64_MAX;

    t67 = (((x293==x294)+x295)-x296);

    if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x297 = INT8_MAX;
	uint8_t x298 = UINT8_MAX;
	static int16_t x300 = -1;

    t68 = (((x297==x298)+x299)-x300);

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x301 = -3;
	int8_t x302 = INT8_MIN;
	int16_t x303 = INT16_MAX;
	volatile uint8_t x304 = 48U;

    t69 = (((x301==x302)+x303)-x304);

    if (t69 != 32719) { NG(); } else { ; }
	
}

void f70(void) {
    

    t70 = (((x305==x306)+x307)-x308);

    if (t70 != 9712177989806561100LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x310 = -1LL;
	int32_t x312 = 642039;
	static volatile int32_t t71 = 37769;

    t71 = (((x309==x310)+x311)-x312);

    if (t71 != -891891) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x313 = -1LL;
	static int16_t x315 = 1167;
	uint16_t x316 = 339U;
	volatile int32_t t72 = 116732073;

    t72 = (((x313==x314)+x315)-x316);

    if (t72 != 828) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x317 = 63558287U;
	uint32_t x319 = 453452598U;
	int64_t x320 = -1LL;
	static int64_t t73 = 1070408024280027584LL;

    t73 = (((x317==x318)+x319)-x320);

    if (t73 != 453452599LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x321 = -681987;
	static int16_t x322 = -1;
	int16_t x324 = 1124;
	int32_t t74 = 27359539;

    t74 = (((x321==x322)+x323)-x324);

    if (t74 != -1125) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x325 = 1U;
	volatile uint64_t x327 = 48LLU;
	int32_t x328 = INT32_MIN;
	uint64_t t75 = 99LLU;

    t75 = (((x325==x326)+x327)-x328);

    if (t75 != 2147483696LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x329 = 50;
	int8_t x330 = 12;
	static int64_t x331 = 15153955893670460LL;
	int64_t t76 = 462385248013030LL;

    t76 = (((x329==x330)+x331)-x332);

    if (t76 != 15153958041154108LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x333 = -525;
	int16_t x334 = INT16_MIN;
	static int16_t x336 = -3;
	volatile int32_t t77 = 292474;

    t77 = (((x333==x334)+x335)-x336);

    if (t77 != 3) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x337 = -1;
	static int16_t x338 = 1;
	uint8_t x339 = 1U;

    t78 = (((x337==x338)+x339)-x340);

    if (t78 != -2147483646) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x345 = 5U;
	volatile int16_t x346 = -1;
	int16_t x348 = -1;

    t79 = (((x345==x346)+x347)-x348);

    if (t79 != -32767) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x349 = -1;
	static uint32_t x350 = 90616U;
	uint8_t x352 = UINT8_MAX;
	uint32_t t80 = 487948758U;

    t80 = (((x349==x350)+x351)-x352);

    if (t80 != 69510U) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint64_t x353 = 1306536974364280390LLU;
	static volatile int8_t x354 = INT8_MIN;
	int16_t x356 = -1;

    t81 = (((x353==x354)+x355)-x356);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x357 = -1LL;
	int64_t x358 = -546223504LL;
	volatile int64_t x360 = INT64_MIN;
	volatile int64_t t82 = -407250LL;

    t82 = (((x357==x358)+x359)-x360);

    if (t82 != 9223372036854775349LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x366 = 1;
	int64_t x367 = -1LL;
	uint8_t x368 = UINT8_MAX;
	static volatile int64_t t83 = 0LL;

    t83 = (((x365==x366)+x367)-x368);

    if (t83 != -256LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x369 = -4;
	int64_t x371 = 3705508107810899644LL;
	int8_t x372 = -1;

    t84 = (((x369==x370)+x371)-x372);

    if (t84 != 3705508107810899645LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x373 = -1;
	int8_t x375 = INT8_MIN;
	volatile uint32_t x376 = 243951U;
	static volatile uint32_t t85 = 14879753U;

    t85 = (((x373==x374)+x375)-x376);

    if (t85 != 4294723218U) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x377 = INT32_MIN;
	volatile int8_t x378 = -44;
	int16_t x380 = -1;
	volatile int32_t t86 = 64;

    t86 = (((x377==x378)+x379)-x380);

    if (t86 != -61880) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x381 = UINT32_MAX;
	int32_t x382 = -1;
	static uint64_t x383 = 4839021005104LLU;
	uint16_t x384 = 225U;
	volatile uint64_t t87 = 14779730468805LLU;

    t87 = (((x381==x382)+x383)-x384);

    if (t87 != 4839021004880LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	static int8_t x385 = INT8_MAX;
	int64_t x386 = INT64_MIN;
	volatile int16_t x388 = INT16_MIN;

    t88 = (((x385==x386)+x387)-x388);

    if (t88 != -18177LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x389 = -7;
	int64_t x390 = INT64_MIN;
	int8_t x391 = INT8_MAX;
	uint32_t x392 = 119055384U;

    t89 = (((x389==x390)+x391)-x392);

    if (t89 != 4175912039U) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x393 = UINT8_MAX;
	uint32_t x394 = 701U;
	int32_t x396 = -1;
	int32_t t90 = 996;

    t90 = (((x393==x394)+x395)-x396);

    if (t90 != 19506) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x397 = 31577169838163590LLU;
	static uint8_t x398 = 0U;
	int32_t x399 = -8;
	static int64_t x400 = INT64_MIN;

    t91 = (((x397==x398)+x399)-x400);

    if (t91 != 9223372036854775800LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x401 = 8034675U;
	uint16_t x402 = UINT16_MAX;
	uint64_t x403 = UINT64_MAX;
	int16_t x404 = INT16_MAX;
	volatile uint64_t t92 = 1479LLU;

    t92 = (((x401==x402)+x403)-x404);

    if (t92 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x405 = 189516948;
	int8_t x406 = -1;
	uint64_t x408 = UINT64_MAX;
	volatile uint64_t t93 = 5339478LLU;

    t93 = (((x405==x406)+x407)-x408);

    if (t93 != 18446744073704016174LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint8_t x409 = UINT8_MAX;
	volatile int32_t x411 = 8643310;
	static uint32_t x412 = 1538206U;

    t94 = (((x409==x410)+x411)-x412);

    if (t94 != 7105104U) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x413 = UINT32_MAX;
	int8_t x414 = -1;
	int8_t x415 = -10;
	int8_t x416 = INT8_MIN;
	int32_t t95 = -1;

    t95 = (((x413==x414)+x415)-x416);

    if (t95 != 119) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x417 = UINT64_MAX;
	volatile int32_t x418 = INT32_MAX;
	uint64_t x419 = 30937507648514091LLU;
	volatile uint64_t t96 = 17470290229619LLU;

    t96 = (((x417==x418)+x419)-x420);

    if (t96 != 30935300000345747LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x422 = INT64_MIN;
	int32_t x423 = -1;

    t97 = (((x421==x422)+x423)-x424);

    if (t97 != -32767) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x426 = INT32_MAX;
	uint64_t t98 = 3950672593158610LLU;

    t98 = (((x425==x426)+x427)-x428);

    if (t98 != 18389001986005289904LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x429 = INT8_MIN;
	static int32_t x431 = -1;
	static int8_t x432 = INT8_MIN;
	int32_t t99 = -189;

    t99 = (((x429==x430)+x431)-x432);

    if (t99 != 127) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x433 = INT64_MIN;
	static volatile uint32_t x434 = 14U;
	int8_t x435 = INT8_MIN;
	volatile int8_t x436 = INT8_MIN;
	volatile int32_t t100 = -4914140;

    t100 = (((x433==x434)+x435)-x436);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x437 = -2979899738LL;
	int64_t x438 = -30LL;
	volatile int8_t x440 = 11;

    t101 = (((x437==x438)+x439)-x440);

    if (t101 != 65524) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x447 = UINT32_MAX;
	static int32_t x448 = INT32_MIN;
	static volatile uint32_t t102 = 290229963U;

    t102 = (((x445==x446)+x447)-x448);

    if (t102 != 2147483647U) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint64_t x449 = 222774605LLU;
	uint16_t x450 = 15U;
	int32_t x451 = INT32_MIN;
	int64_t x452 = INT64_MIN;
	volatile int64_t t103 = -592277295855378LL;

    t103 = (((x449==x450)+x451)-x452);

    if (t103 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x453 = 215974LLU;
	int8_t x454 = 2;
	static volatile int32_t t104 = -76207641;

    t104 = (((x453==x454)+x455)-x456);

    if (t104 != -11) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x458 = 2088768U;
	int64_t x460 = -1LL;
	volatile int64_t t105 = 35783LL;

    t105 = (((x457==x458)+x459)-x460);

    if (t105 != 1LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x461 = INT16_MAX;
	int8_t x462 = 9;
	int32_t t106 = -110;

    t106 = (((x461==x462)+x463)-x464);

    if (t106 != 2147483636) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint64_t x465 = 2612039563153547508LLU;
	int8_t x466 = INT8_MAX;
	volatile int32_t x467 = INT32_MIN;
	volatile uint64_t x468 = UINT64_MAX;
	uint64_t t107 = 11LLU;

    t107 = (((x465==x466)+x467)-x468);

    if (t107 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x469 = -1;
	uint8_t x470 = 109U;
	int8_t x471 = INT8_MAX;
	uint32_t x472 = UINT32_MAX;
	uint32_t t108 = 313407U;

    t108 = (((x469==x470)+x471)-x472);

    if (t108 != 128U) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint16_t x474 = 2325U;
	int8_t x475 = INT8_MAX;
	int32_t x476 = 54779957;
	int32_t t109 = 29770871;

    t109 = (((x473==x474)+x475)-x476);

    if (t109 != -54779830) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x477 = -1;

    t110 = (((x477==x478)+x479)-x480);

    if (t110 != 4294934478U) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x481 = INT32_MIN;
	static uint16_t x484 = UINT16_MAX;
	volatile int64_t t111 = -2613LL;

    t111 = (((x481==x482)+x483)-x484);

    if (t111 != -70459LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint8_t x485 = UINT8_MAX;
	uint8_t x486 = 90U;
	volatile int16_t x487 = 1;
	static uint64_t x488 = 3312228139657474508LLU;
	static uint64_t t112 = 127747955929151LLU;

    t112 = (((x485==x486)+x487)-x488);

    if (t112 != 15134515934052077109LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x489 = INT8_MIN;
	int8_t x490 = -1;
	volatile int16_t x491 = INT16_MIN;
	uint8_t x492 = 1U;
	volatile int32_t t113 = -1418995;

    t113 = (((x489==x490)+x491)-x492);

    if (t113 != -32769) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile int16_t x494 = -1;
	uint64_t x496 = UINT64_MAX;
	volatile uint64_t t114 = 101349064376LLU;

    t114 = (((x493==x494)+x495)-x496);

    if (t114 != 32768LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x497 = 15U;
	volatile int8_t x498 = INT8_MIN;
	uint8_t x499 = UINT8_MAX;
	int64_t x500 = -1LL;
	static int64_t t115 = 32677190778339LL;

    t115 = (((x497==x498)+x499)-x500);

    if (t115 != 256LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x501 = 1;
	int64_t x502 = -161056436184521LL;
	int16_t x503 = 98;
	uint32_t t116 = 38758U;

    t116 = (((x501==x502)+x503)-x504);

    if (t116 != 98U) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x506 = -1LL;
	int8_t x507 = -2;
	int8_t x508 = -5;

    t117 = (((x505==x506)+x507)-x508);

    if (t117 != 3) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile uint8_t x509 = 14U;
	static volatile int16_t x510 = INT16_MAX;
	volatile int8_t x512 = INT8_MIN;
	int64_t t118 = 26545718LL;

    t118 = (((x509==x510)+x511)-x512);

    if (t118 != 127LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x513 = INT64_MIN;
	uint8_t x514 = 29U;
	volatile int32_t x515 = -1;
	int16_t x516 = INT16_MIN;
	volatile int32_t t119 = 77775;

    t119 = (((x513==x514)+x515)-x516);

    if (t119 != 32767) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x517 = INT32_MAX;
	volatile int32_t x518 = INT32_MAX;
	int8_t x519 = -1;
	int16_t x520 = INT16_MIN;
	int32_t t120 = -50018327;

    t120 = (((x517==x518)+x519)-x520);

    if (t120 != 32768) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x521 = UINT32_MAX;
	int8_t x522 = INT8_MAX;
	uint8_t x524 = 0U;
	int32_t t121 = -37;

    t121 = (((x521==x522)+x523)-x524);

    if (t121 != 1269) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x525 = -11LL;
	int64_t x526 = -185823LL;
	int8_t x527 = INT8_MAX;

    t122 = (((x525==x526)+x527)-x528);

    if (t122 != 18446744073709550944LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x529 = -1;
	int8_t x530 = INT8_MAX;
	static int16_t x531 = -1;
	static int64_t x532 = INT64_MIN;
	int64_t t123 = INT64_MAX;

    t123 = (((x529==x530)+x531)-x532);

    if (t123 != INT64_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x533 = -2825854322620LL;
	int8_t x534 = INT8_MAX;
	int64_t x536 = 1885159652LL;

    t124 = (((x533==x534)+x535)-x536);

    if (t124 != -1884778544LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x537 = INT32_MIN;
	int16_t x539 = INT16_MIN;
	uint32_t x540 = 28505328U;
	volatile uint32_t t125 = 8230082U;

    t125 = (((x537==x538)+x539)-x540);

    if (t125 != 4266429200U) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint16_t x541 = 26U;
	int16_t x544 = INT16_MIN;
	static int32_t t126 = -338;

    t126 = (((x541==x542)+x543)-x544);

    if (t126 != 32757) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x546 = INT8_MAX;
	int64_t x547 = INT64_MIN;
	static int8_t x548 = INT8_MIN;

    t127 = (((x545==x546)+x547)-x548);

    if (t127 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x549 = -8;
	uint32_t x550 = UINT32_MAX;
	static int8_t x551 = -1;
	static uint8_t x552 = UINT8_MAX;
	static volatile int32_t t128 = -105293031;

    t128 = (((x549==x550)+x551)-x552);

    if (t128 != -256) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x553 = INT32_MIN;
	volatile int64_t x554 = INT64_MAX;
	int64_t x555 = -1LL;
	volatile int64_t t129 = -925LL;

    t129 = (((x553==x554)+x555)-x556);

    if (t129 != 127LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x557 = INT16_MIN;
	int16_t x558 = INT16_MIN;
	uint8_t x559 = UINT8_MAX;
	uint8_t x560 = UINT8_MAX;

    t130 = (((x557==x558)+x559)-x560);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint32_t x561 = UINT32_MAX;
	int16_t x562 = INT16_MIN;
	volatile int8_t x563 = -1;
	volatile int32_t t131 = -60616;

    t131 = (((x561==x562)+x563)-x564);

    if (t131 != -256) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x569 = INT8_MIN;
	int32_t x570 = -1;
	volatile int64_t x571 = -1LL;
	volatile int32_t x572 = INT32_MAX;
	volatile int64_t t132 = 54191078498436088LL;

    t132 = (((x569==x570)+x571)-x572);

    if (t132 != -2147483648LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x573 = -26;
	int64_t x574 = INT64_MIN;
	int8_t x575 = INT8_MIN;
	uint32_t x576 = 0U;

    t133 = (((x573==x574)+x575)-x576);

    if (t133 != 4294967168U) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x581 = INT8_MAX;
	int32_t x582 = INT32_MIN;
	int32_t x584 = INT32_MAX;
	volatile int32_t t134 = 34697;

    t134 = (((x581==x582)+x583)-x584);

    if (t134 != -2147483643) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t x585 = INT32_MIN;
	int16_t x588 = -2847;
	static volatile int32_t t135 = -1114451;

    t135 = (((x585==x586)+x587)-x588);

    if (t135 != 2719) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x589 = -5147LL;
	static int64_t x590 = INT64_MIN;
	int16_t x591 = INT16_MIN;
	uint32_t x592 = UINT32_MAX;
	static uint32_t t136 = 8U;

    t136 = (((x589==x590)+x591)-x592);

    if (t136 != 4294934529U) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x593 = 1;
	int32_t x595 = 864;
	int32_t x596 = -1;
	static int32_t t137 = 23;

    t137 = (((x593==x594)+x595)-x596);

    if (t137 != 865) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint8_t x602 = UINT8_MAX;
	static volatile uint8_t x603 = 7U;
	int32_t x604 = INT32_MAX;
	static int32_t t138 = 147706;

    t138 = (((x601==x602)+x603)-x604);

    if (t138 != -2147483640) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x609 = INT32_MIN;
	static int16_t x611 = INT16_MAX;
	static volatile int32_t t139 = 216969320;

    t139 = (((x609==x610)+x611)-x612);

    if (t139 != 32512) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x613 = 68;
	int32_t x614 = -2508;
	static volatile uint32_t x615 = 381U;
	static volatile uint32_t t140 = 25937U;

    t140 = (((x613==x614)+x615)-x616);

    if (t140 != 1331U) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint64_t x617 = 79550330056008390LLU;
	int32_t x618 = 3468876;
	static int32_t x619 = INT32_MIN;
	int16_t x620 = INT16_MIN;
	volatile int32_t t141 = 0;

    t141 = (((x617==x618)+x619)-x620);

    if (t141 != -2147450880) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint32_t x622 = 2065671829U;
	static int8_t x623 = INT8_MIN;
	static int8_t x624 = -1;
	volatile int32_t t142 = 1470;

    t142 = (((x621==x622)+x623)-x624);

    if (t142 != -127) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x626 = INT8_MAX;
	uint8_t x628 = UINT8_MAX;
	volatile int32_t t143 = -493;

    t143 = (((x625==x626)+x627)-x628);

    if (t143 != 2147483392) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile uint16_t x629 = 16U;
	volatile int32_t x630 = INT32_MIN;
	static uint8_t x632 = 10U;
	volatile int32_t t144 = 87303799;

    t144 = (((x629==x630)+x631)-x632);

    if (t144 != 2032) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x634 = INT32_MIN;
	volatile int16_t x635 = 4;
	uint32_t x636 = 452U;
	volatile uint32_t t145 = 5U;

    t145 = (((x633==x634)+x635)-x636);

    if (t145 != 4294966848U) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x637 = 186263235U;
	int64_t x639 = -1LL;
	volatile uint8_t x640 = UINT8_MAX;
	int64_t t146 = 164334160LL;

    t146 = (((x637==x638)+x639)-x640);

    if (t146 != -256LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x644 = -7465;
	int32_t t147 = 55;

    t147 = (((x641==x642)+x643)-x644);

    if (t147 != 7720) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x645 = 387U;
	int32_t x646 = -3000;
	static uint64_t x648 = 16519422664616LLU;
	volatile uint64_t t148 = 1335875693LLU;

    t148 = (((x645==x646)+x647)-x648);

    if (t148 != 18446727554286887101LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint32_t x649 = 60888213U;
	volatile int64_t x650 = INT64_MIN;
	int8_t x651 = -1;
	static volatile int32_t t149 = 0;

    t149 = (((x649==x650)+x651)-x652);

    if (t149 != 32767) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x653 = 2;
	static volatile uint16_t x654 = 296U;
	int64_t x655 = INT64_MAX;
	int8_t x656 = 13;
	int64_t t150 = -6552901752826508LL;

    t150 = (((x653==x654)+x655)-x656);

    if (t150 != 9223372036854775794LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x657 = UINT32_MAX;
	int32_t x658 = INT32_MAX;
	int32_t x660 = INT32_MAX;
	volatile int32_t t151 = INT32_MIN;

    t151 = (((x657==x658)+x659)-x660);

    if (t151 != INT32_MIN) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x661 = UINT64_MAX;
	int32_t x662 = INT32_MIN;
	uint32_t x663 = 0U;
	int16_t x664 = 0;
	uint32_t t152 = 20569652U;

    t152 = (((x661==x662)+x663)-x664);

    if (t152 != 0U) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x665 = 6005LL;
	uint64_t x666 = 12961054341775170LLU;
	static uint8_t x667 = 13U;
	static int16_t x668 = INT16_MIN;
	volatile int32_t t153 = 3;

    t153 = (((x665==x666)+x667)-x668);

    if (t153 != 32781) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint64_t x669 = UINT64_MAX;
	volatile uint16_t x670 = 18U;
	static int32_t x671 = 528411;
	volatile int64_t x672 = INT64_MAX;
	volatile int64_t t154 = 66303LL;

    t154 = (((x669==x670)+x671)-x672);

    if (t154 != -9223372036854247396LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x673 = 226;
	int64_t x674 = INT64_MAX;
	int64_t x675 = INT64_MIN;
	volatile int64_t t155 = -282843316839LL;

    t155 = (((x673==x674)+x675)-x676);

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static int8_t x677 = INT8_MAX;
	int8_t x678 = 10;
	static int64_t x679 = INT64_MIN;
	static int8_t x680 = INT8_MIN;
	volatile int64_t t156 = -117237372604LL;

    t156 = (((x677==x678)+x679)-x680);

    if (t156 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint8_t x681 = 24U;
	volatile int32_t x683 = INT32_MIN;
	int8_t x684 = -1;
	static int32_t t157 = 6345;

    t157 = (((x681==x682)+x683)-x684);

    if (t157 != -2147483647) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x685 = -13;
	static int8_t x686 = -1;
	int16_t x687 = -2;
	int32_t x688 = -1;
	static volatile int32_t t158 = 118376183;

    t158 = (((x685==x686)+x687)-x688);

    if (t158 != -1) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint8_t x689 = 1U;
	volatile int64_t x691 = -148760287258100601LL;
	int16_t x692 = -1;
	int64_t t159 = -236801723783780352LL;

    t159 = (((x689==x690)+x691)-x692);

    if (t159 != -148760287258100600LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x693 = INT16_MIN;
	uint32_t x695 = UINT32_MAX;
	int32_t x696 = INT32_MAX;
	volatile uint32_t t160 = 119382705U;

    t160 = (((x693==x694)+x695)-x696);

    if (t160 != 2147483648U) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x697 = UINT8_MAX;
	int32_t x698 = -1;
	int64_t x699 = -1LL;
	static uint64_t x700 = 105558437453854909LLU;
	uint64_t t161 = 10756582805634130LLU;

    t161 = (((x697==x698)+x699)-x700);

    if (t161 != 18341185636255696706LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x701 = 30112058;
	int64_t x703 = -27767346LL;
	int64_t t162 = 147LL;

    t162 = (((x701==x702)+x703)-x704);

    if (t162 != 55885770310LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x705 = -1;
	int16_t x707 = INT16_MIN;
	int64_t x708 = INT64_MIN;
	static int64_t t163 = -1113LL;

    t163 = (((x705==x706)+x707)-x708);

    if (t163 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x709 = 26U;
	uint32_t x711 = 867895926U;
	volatile int16_t x712 = -1;
	uint32_t t164 = 2568131U;

    t164 = (((x709==x710)+x711)-x712);

    if (t164 != 867895927U) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x713 = INT16_MIN;
	int8_t x714 = -21;
	int64_t x716 = 16774111LL;
	int64_t t165 = -4012LL;

    t165 = (((x713==x714)+x715)-x716);

    if (t165 != -16774112LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x719 = INT16_MAX;
	uint32_t x720 = 1844U;
	uint32_t t166 = 2136889415U;

    t166 = (((x717==x718)+x719)-x720);

    if (t166 != 30923U) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint16_t x721 = 30U;
	volatile int32_t x722 = -62;
	uint16_t x723 = 13U;
	uint64_t x724 = 13453149067860058LLU;
	volatile uint64_t t167 = 203730014196LLU;

    t167 = (((x721==x722)+x723)-x724);

    if (t167 != 18433290924641691571LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x725 = -25;
	uint64_t x726 = 1535439770297192LLU;
	volatile int8_t x728 = INT8_MIN;

    t168 = (((x725==x726)+x727)-x728);

    if (t168 != 127U) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x729 = 0;
	static int8_t x730 = INT8_MIN;
	uint64_t x731 = UINT64_MAX;
	uint16_t x732 = UINT16_MAX;
	volatile uint64_t t169 = 1078714124967569LLU;

    t169 = (((x729==x730)+x731)-x732);

    if (t169 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x733 = INT8_MIN;
	volatile uint8_t x734 = 0U;
	int64_t x735 = -377266344587591144LL;
	static uint64_t t170 = 429013501944340310LLU;

    t170 = (((x733==x734)+x735)-x736);

    if (t170 != 18069477729121960473LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x737 = INT16_MIN;
	static volatile int64_t x739 = 23358LL;
	int8_t x740 = -25;
	int64_t t171 = -3729LL;

    t171 = (((x737==x738)+x739)-x740);

    if (t171 != 23383LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x741 = -1;
	int8_t x743 = 2;
	uint64_t x744 = UINT64_MAX;
	volatile uint64_t t172 = 73LLU;

    t172 = (((x741==x742)+x743)-x744);

    if (t172 != 3LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x746 = INT16_MIN;
	uint64_t x747 = 3472063909LLU;
	static uint64_t t173 = 380093LLU;

    t173 = (((x745==x746)+x747)-x748);

    if (t173 != 3472063910LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x749 = INT8_MIN;
	int64_t x750 = INT64_MIN;
	uint16_t x751 = 2U;
	uint64_t x752 = 1111343627LLU;
	volatile uint64_t t174 = 105LLU;

    t174 = (((x749==x750)+x751)-x752);

    if (t174 != 18446744072598207991LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x753 = UINT64_MAX;
	volatile int8_t x754 = 0;
	int16_t x755 = 216;
	static int8_t x756 = INT8_MAX;
	volatile int32_t t175 = -255133;

    t175 = (((x753==x754)+x755)-x756);

    if (t175 != 89) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x757 = 0U;
	uint64_t x758 = UINT64_MAX;
	int32_t x759 = INT32_MIN;
	uint32_t x760 = 7834U;

    t176 = (((x757==x758)+x759)-x760);

    if (t176 != 2147475814U) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int64_t x761 = INT64_MIN;
	volatile int32_t x762 = INT32_MIN;
	uint16_t x763 = 12561U;
	int8_t x764 = -1;
	static volatile int32_t t177 = 37;

    t177 = (((x761==x762)+x763)-x764);

    if (t177 != 12562) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x766 = 14108U;
	static int64_t x767 = INT64_MAX;
	int8_t x768 = INT8_MAX;
	volatile int64_t t178 = 20458433422934943LL;

    t178 = (((x765==x766)+x767)-x768);

    if (t178 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x769 = INT16_MIN;
	static int16_t x771 = -300;
	uint64_t x772 = 4042020038314991LLU;
	uint64_t t179 = 6LLU;

    t179 = (((x769==x770)+x771)-x772);

    if (t179 != 18442702053671236325LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint16_t x777 = UINT16_MAX;
	int8_t x778 = 25;
	int16_t x779 = INT16_MIN;
	uint8_t x780 = 70U;

    t180 = (((x777==x778)+x779)-x780);

    if (t180 != -32838) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x781 = 0;
	int64_t x782 = -2851518189524LL;
	uint16_t x783 = UINT16_MAX;
	int16_t x784 = INT16_MIN;
	static volatile int32_t t181 = 1;

    t181 = (((x781==x782)+x783)-x784);

    if (t181 != 98303) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x785 = -1;
	int8_t x786 = 27;
	uint32_t x787 = 67U;
	static uint32_t t182 = 140932231U;

    t182 = (((x785==x786)+x787)-x788);

    if (t182 != 72U) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x789 = INT8_MAX;
	uint32_t x790 = 1329367U;
	uint64_t x791 = UINT64_MAX;
	int16_t x792 = 1;
	uint64_t t183 = 10891541886674LLU;

    t183 = (((x789==x790)+x791)-x792);

    if (t183 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x793 = -1;
	static int8_t x794 = -1;
	int8_t x795 = INT8_MIN;

    t184 = (((x793==x794)+x795)-x796);

    if (t184 != 19224257) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x801 = 4;
	static volatile uint64_t x802 = UINT64_MAX;
	int16_t x803 = 92;
	volatile int8_t x804 = INT8_MAX;
	static volatile int32_t t185 = -14280;

    t185 = (((x801==x802)+x803)-x804);

    if (t185 != -35) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x805 = INT64_MAX;
	volatile int16_t x806 = -2026;
	int32_t x807 = INT32_MAX;

    t186 = (((x805==x806)+x807)-x808);

    if (t186 != 2147450880) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x816 = 0U;
	static volatile int32_t t187 = 2582;

    t187 = (((x813==x814)+x815)-x816);

    if (t187 != -32768) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x817 = 4U;
	uint8_t x818 = 3U;
	static uint8_t x819 = 1U;
	uint8_t x820 = 3U;

    t188 = (((x817==x818)+x819)-x820);

    if (t188 != -2) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x822 = INT32_MIN;
	volatile int16_t x823 = INT16_MIN;
	int32_t x824 = -782663311;

    t189 = (((x821==x822)+x823)-x824);

    if (t189 != 782630543) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x825 = INT32_MIN;
	int32_t x826 = -1;
	int64_t x827 = 27896790462742772LL;
	static volatile int32_t x828 = INT32_MIN;
	int64_t t190 = 1113309950287892LL;

    t190 = (((x825==x826)+x827)-x828);

    if (t190 != 27896792610226420LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x829 = -9477;
	volatile int32_t x830 = INT32_MAX;
	int16_t x831 = 23;
	volatile int8_t x832 = INT8_MAX;
	int32_t t191 = 28988;

    t191 = (((x829==x830)+x831)-x832);

    if (t191 != -104) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile int32_t x834 = INT32_MAX;
	static int16_t x835 = INT16_MIN;

    t192 = (((x833==x834)+x835)-x836);

    if (t192 != -32767) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x837 = UINT16_MAX;
	static int16_t x839 = 14494;
	int16_t x840 = INT16_MAX;

    t193 = (((x837==x838)+x839)-x840);

    if (t193 != -18273) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x845 = INT64_MIN;
	volatile uint8_t x846 = 0U;
	int8_t x847 = INT8_MIN;
	uint16_t x848 = 40U;
	int32_t t194 = -32863746;

    t194 = (((x845==x846)+x847)-x848);

    if (t194 != -168) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x849 = -1;
	uint64_t x851 = UINT64_MAX;
	uint16_t x852 = 39U;
	static volatile uint64_t t195 = 3LLU;

    t195 = (((x849==x850)+x851)-x852);

    if (t195 != 18446744073709551576LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x857 = INT64_MAX;
	uint8_t x858 = UINT8_MAX;
	static volatile int32_t x859 = -53181107;
	uint64_t t196 = 52100LLU;

    t196 = (((x857==x858)+x859)-x860);

    if (t196 != 18446744073656370510LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x861 = 96403U;
	int64_t x862 = INT64_MAX;
	int8_t x863 = -1;
	int32_t t197 = -158;

    t197 = (((x861==x862)+x863)-x864);

    if (t197 != -8) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile uint16_t x865 = 14788U;
	int16_t x867 = 2;

    t198 = (((x865==x866)+x867)-x868);

    if (t198 != 545538049026440963LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x869 = -1;
	static int32_t x870 = -702819;
	volatile int32_t x871 = -1;

    t199 = (((x869==x870)+x871)-x872);

    if (t199 != 833) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

