
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

static int16_t x4 = INT16_MIN;
uint16_t x5 = 4U;
volatile int8_t x31 = -1;
static volatile int32_t t5 = 1384264;
uint64_t x40 = UINT64_MAX;
static int32_t t9 = 0;
int32_t x49 = INT32_MIN;
int32_t x53 = -1;
static int32_t x54 = INT32_MIN;
volatile int16_t x61 = -1;
uint8_t x67 = 2U;
int32_t x69 = INT32_MIN;
volatile int32_t x70 = INT32_MAX;
static volatile int64_t t15 = 1012LL;
uint32_t x77 = 18U;
uint8_t x78 = 0U;
static int16_t x79 = INT16_MAX;
uint64_t x80 = UINT64_MAX;
static volatile int32_t x81 = INT32_MIN;
int8_t x82 = -3;
int32_t x89 = INT32_MIN;
int32_t t20 = -124246813;
int64_t x106 = INT64_MIN;
int8_t x107 = -6;
uint8_t x119 = UINT8_MAX;
int32_t x120 = 19181;
int32_t t26 = -495;
static int32_t x122 = 4540;
static int32_t x126 = -1;
static int64_t x130 = INT64_MIN;
int8_t x131 = -1;
int64_t x137 = INT64_MIN;
uint16_t x149 = 31041U;
int8_t x152 = INT8_MIN;
int32_t t34 = 8416;
volatile uint16_t x164 = 6U;
uint32_t x165 = 315067U;
int32_t t41 = 0;
uint32_t x185 = UINT32_MAX;
uint32_t x195 = 1308904U;
volatile uint32_t x196 = 443U;
uint32_t t45 = 1U;
volatile int64_t t47 = -95730128386LL;
int32_t x217 = -11;
volatile int16_t x218 = -1;
uint64_t x224 = 834981452243LLU;
volatile int32_t t50 = 449856034;
int32_t x231 = 1953;
static uint32_t x235 = 520022618U;
int32_t x238 = INT32_MAX;
int64_t x249 = INT64_MIN;
int32_t t55 = 2798;
static int32_t t56 = 16318199;
uint16_t x264 = UINT16_MAX;
static uint64_t t58 = 1019294676855369LLU;
uint32_t x270 = 513408411U;
uint16_t x273 = UINT16_MAX;
volatile int16_t x280 = -1;
int8_t x284 = INT8_MIN;
uint32_t x288 = 3431141U;
volatile uint32_t t63 = 330U;
int16_t x291 = INT16_MAX;
int32_t x298 = -1;
int64_t t68 = 84505LL;
uint8_t x324 = UINT8_MAX;
uint32_t x328 = 38260U;
static volatile int64_t x329 = INT64_MIN;
int8_t x332 = -6;
static volatile uint8_t x334 = UINT8_MAX;
int8_t x336 = INT8_MAX;
uint32_t x339 = 16550535U;
uint64_t t76 = 10059863378623LLU;
volatile int16_t x343 = INT16_MAX;
int64_t x347 = -1LL;
int64_t x361 = INT64_MIN;
static int16_t x363 = -4626;
int16_t x373 = -87;
volatile int64_t t81 = -31050409673644LL;
int16_t x380 = INT16_MAX;
volatile uint32_t t82 = 1U;
uint32_t x383 = 121U;
int64_t x384 = INT64_MAX;
uint64_t x385 = 92722256914168LLU;
volatile uint16_t x388 = 3789U;
volatile uint64_t x389 = UINT64_MAX;
int16_t x393 = 1;
static uint32_t x402 = 930922350U;
int8_t x406 = -26;
uint64_t x423 = 57993LLU;
int64_t x425 = INT64_MAX;
static uint64_t t94 = 123LLU;
uint16_t x435 = UINT16_MAX;
int16_t x436 = -1513;
uint64_t x437 = UINT64_MAX;
volatile int64_t t97 = 161790LL;
volatile int8_t x445 = INT8_MIN;
uint16_t x459 = 15862U;
int64_t x464 = -38676235LL;
volatile int64_t t102 = 26365LL;
static volatile int32_t t103 = 79255;
int8_t x479 = -3;
int16_t x482 = -1;
volatile uint64_t x494 = 138258LLU;
static int64_t t108 = -64524698587LL;
uint64_t x499 = UINT64_MAX;
static uint32_t x506 = 179418U;
int64_t x509 = INT64_MIN;
static uint64_t x512 = UINT64_MAX;
volatile int64_t t112 = -15709295807302372LL;
uint16_t x520 = 101U;
static int16_t x521 = -1;
volatile int32_t t116 = 1160;
int64_t x533 = 745LL;
volatile uint32_t x536 = 39035U;
int32_t x537 = INT32_MIN;
uint32_t x540 = 504730U;
uint8_t x542 = 2U;
uint64_t x544 = 5569930908LLU;
volatile uint64_t t121 = 256935841LLU;
static int64_t x553 = -1LL;
volatile int8_t x560 = INT8_MIN;
int64_t x564 = -1LL;
int64_t x573 = INT64_MIN;
int8_t x574 = INT8_MIN;
uint16_t x576 = UINT16_MAX;
int8_t x579 = INT8_MIN;
volatile int32_t x581 = INT32_MIN;
int64_t x582 = -1LL;
static volatile uint64_t x592 = 505188242LLU;
static int32_t x599 = INT32_MAX;
static int64_t t133 = 32577109549LL;
int32_t t134 = -431235;
static volatile uint64_t x605 = 417330559805LLU;
int16_t x610 = 1067;
static volatile uint32_t x615 = 51U;
volatile int8_t x633 = INT8_MAX;
int8_t x635 = INT8_MIN;
int8_t x636 = -1;
volatile int16_t x637 = -1;
static volatile int32_t t142 = 783053839;
volatile int32_t t143 = -283972;
static uint32_t x653 = UINT32_MAX;
uint8_t x654 = 4U;
uint32_t x659 = UINT32_MAX;
uint64_t x660 = 147LLU;
int32_t t149 = -2;
int32_t x670 = 140749;
uint16_t x672 = 1354U;
int16_t x678 = INT16_MIN;
static uint32_t x704 = UINT32_MAX;
static uint32_t x716 = UINT32_MAX;
uint32_t t160 = 0U;
int32_t x720 = -5726;
volatile uint32_t x736 = 1U;
static int64_t t165 = 0LL;
int8_t x746 = INT8_MIN;
int16_t x751 = 22;
uint8_t x759 = 2U;
uint32_t x766 = 866121U;
volatile uint64_t x767 = 1LLU;
uint64_t t171 = 1692550LLU;
static uint8_t x776 = 6U;
uint64_t x781 = 1686311142753232527LLU;
static int16_t x783 = -1;
int8_t x784 = INT8_MIN;
volatile int64_t t177 = -2271LL;
int16_t x798 = INT16_MIN;
volatile int64_t t178 = -404928LL;
static uint64_t x802 = 1415268132691LLU;
int64_t x818 = -1LL;
int64_t x819 = 846545LL;
int64_t x821 = 7635718427LL;
int8_t x829 = INT8_MIN;
int32_t x833 = INT32_MIN;
volatile int16_t x835 = -4;
static int32_t x851 = 9;
static volatile int64_t x852 = -828830623394LL;
static volatile int16_t x853 = INT16_MAX;
int32_t t188 = -13949076;
static volatile int64_t x858 = -1LL;
volatile int32_t x863 = INT32_MIN;
volatile int64_t x865 = INT64_MAX;
volatile int32_t x868 = INT32_MAX;
uint64_t x877 = UINT64_MAX;
static volatile int8_t x880 = 1;
int32_t x881 = INT32_MAX;
static int32_t x890 = 11129966;
int32_t x894 = -9591203;
int32_t t198 = -8126771;


void f0(void) {
    	static int64_t x1 = INT64_MIN;
	static int32_t x2 = INT32_MIN;
	static volatile int32_t x3 = -1;
	int32_t t0 = 1148;

    t0 = (((x1==x2)%x3)-x4);

    if (t0 != 32768) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x6 = 0;
	static int32_t x7 = INT32_MAX;
	uint16_t x8 = 2U;
	int32_t t1 = -1;

    t1 = (((x5==x6)%x7)-x8);

    if (t1 != -2) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = 0U;
	static int16_t x10 = INT16_MIN;
	int32_t x11 = INT32_MIN;
	int8_t x12 = INT8_MIN;
	volatile int32_t t2 = 430;

    t2 = (((x9==x10)%x11)-x12);

    if (t2 != 128) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint16_t x17 = 12U;
	uint8_t x18 = 0U;
	volatile int16_t x19 = INT16_MIN;
	volatile uint16_t x20 = 8U;
	int32_t t3 = -20;

    t3 = (((x17==x18)%x19)-x20);

    if (t3 != -8) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint64_t x21 = 3LLU;
	int16_t x22 = INT16_MAX;
	int8_t x23 = -1;
	int8_t x24 = INT8_MIN;
	volatile int32_t t4 = 96;

    t4 = (((x21==x22)%x23)-x24);

    if (t4 != 128) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x29 = -486;
	int16_t x30 = INT16_MAX;
	static int16_t x32 = INT16_MIN;

    t5 = (((x29==x30)%x31)-x32);

    if (t5 != 32768) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x33 = 14162U;
	uint8_t x34 = UINT8_MAX;
	volatile uint8_t x35 = 13U;
	static uint64_t x36 = 823302767801269LLU;
	static volatile uint64_t t6 = 211067445307LLU;

    t6 = (((x33==x34)%x35)-x36);

    if (t6 != 18445920770941750347LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x37 = INT32_MIN;
	int16_t x38 = 1;
	int64_t x39 = 4902409674LL;
	uint64_t t7 = 45LLU;

    t7 = (((x37==x38)%x39)-x40);

    if (t7 != 1LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x41 = -1;
	uint8_t x42 = UINT8_MAX;
	static volatile int16_t x43 = 186;
	uint16_t x44 = 766U;
	int32_t t8 = -783;

    t8 = (((x41==x42)%x43)-x44);

    if (t8 != -766) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x45 = 1421443;
	static int64_t x46 = INT64_MIN;
	uint16_t x47 = UINT16_MAX;
	int8_t x48 = 0;

    t9 = (((x45==x46)%x47)-x48);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint8_t x50 = 124U;
	int16_t x51 = -5264;
	uint64_t x52 = UINT64_MAX;
	static uint64_t t10 = 202152247941429LLU;

    t10 = (((x49==x50)%x51)-x52);

    if (t10 != 1LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int32_t x55 = INT32_MIN;
	int32_t x56 = -1;
	int32_t t11 = -34484283;

    t11 = (((x53==x54)%x55)-x56);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x57 = 156U;
	int16_t x58 = 12;
	volatile int16_t x59 = 436;
	uint16_t x60 = 7U;
	int32_t t12 = 2491339;

    t12 = (((x57==x58)%x59)-x60);

    if (t12 != -7) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x62 = UINT8_MAX;
	int8_t x63 = INT8_MAX;
	uint8_t x64 = 65U;
	volatile int32_t t13 = 0;

    t13 = (((x61==x62)%x63)-x64);

    if (t13 != -65) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x65 = 222845653105762025LLU;
	int8_t x66 = INT8_MAX;
	int16_t x68 = INT16_MIN;
	int32_t t14 = 4;

    t14 = (((x65==x66)%x67)-x68);

    if (t14 != 32768) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x71 = INT64_MIN;
	volatile int16_t x72 = INT16_MIN;

    t15 = (((x69==x70)%x71)-x72);

    if (t15 != 32768LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int16_t x73 = INT16_MIN;
	int64_t x74 = INT64_MIN;
	uint32_t x75 = UINT32_MAX;
	int8_t x76 = -1;
	uint32_t t16 = 7447U;

    t16 = (((x73==x74)%x75)-x76);

    if (t16 != 1U) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint64_t t17 = 589489543071437830LLU;

    t17 = (((x77==x78)%x79)-x80);

    if (t17 != 1LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x83 = 52904938;
	int64_t x84 = INT64_MAX;
	int64_t t18 = 394261965LL;

    t18 = (((x81==x82)%x83)-x84);

    if (t18 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x85 = 0;
	int32_t x86 = INT32_MIN;
	volatile int16_t x87 = INT16_MIN;
	int8_t x88 = -1;
	volatile int32_t t19 = -5119;

    t19 = (((x85==x86)%x87)-x88);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x90 = INT64_MIN;
	uint16_t x91 = UINT16_MAX;
	static int16_t x92 = INT16_MIN;

    t20 = (((x89==x90)%x91)-x92);

    if (t20 != 32768) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x93 = INT32_MIN;
	int8_t x94 = -1;
	volatile uint64_t x95 = UINT64_MAX;
	int64_t x96 = -1LL;
	volatile uint64_t t21 = 324012312LLU;

    t21 = (((x93==x94)%x95)-x96);

    if (t21 != 1LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x97 = -48518876;
	uint16_t x98 = 4U;
	int8_t x99 = INT8_MIN;
	uint64_t x100 = 8642014609105LLU;
	volatile uint64_t t22 = 1875558042087LLU;

    t22 = (((x97==x98)%x99)-x100);

    if (t22 != 18446735431694942511LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x101 = 763532485LLU;
	volatile int32_t x102 = -1;
	uint32_t x103 = 2821870U;
	volatile int32_t x104 = -8;
	volatile uint32_t t23 = 5965U;

    t23 = (((x101==x102)%x103)-x104);

    if (t23 != 8U) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x105 = 3812;
	volatile uint32_t x108 = 344166890U;
	uint32_t t24 = 9000U;

    t24 = (((x105==x106)%x107)-x108);

    if (t24 != 3950800406U) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint64_t x113 = 6109LLU;
	static int64_t x114 = 28263360223057951LL;
	uint64_t x115 = 8169801LLU;
	static int32_t x116 = INT32_MIN;
	volatile uint64_t t25 = 350646429018808LLU;

    t25 = (((x113==x114)%x115)-x116);

    if (t25 != 2147483648LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x117 = INT64_MIN;
	int64_t x118 = INT64_MIN;

    t26 = (((x117==x118)%x119)-x120);

    if (t26 != -19180) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x121 = UINT16_MAX;
	uint8_t x123 = 76U;
	int16_t x124 = 154;
	int32_t t27 = -19199;

    t27 = (((x121==x122)%x123)-x124);

    if (t27 != -154) { NG(); } else { ; }
	
}

void f28(void) {
    	static int64_t x125 = -1LL;
	int8_t x127 = INT8_MIN;
	int8_t x128 = -6;
	volatile int32_t t28 = 362763;

    t28 = (((x125==x126)%x127)-x128);

    if (t28 != 7) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x129 = INT16_MIN;
	int64_t x132 = 1LL;
	int64_t t29 = -1960875805800757219LL;

    t29 = (((x129==x130)%x131)-x132);

    if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x133 = 1U;
	static uint32_t x134 = 14U;
	uint32_t x135 = 49222569U;
	int16_t x136 = INT16_MIN;
	volatile uint32_t t30 = 50230U;

    t30 = (((x133==x134)%x135)-x136);

    if (t30 != 32768U) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x138 = INT16_MIN;
	uint16_t x139 = UINT16_MAX;
	volatile uint16_t x140 = UINT16_MAX;
	volatile int32_t t31 = -49349;

    t31 = (((x137==x138)%x139)-x140);

    if (t31 != -65535) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x141 = 1164831LL;
	uint64_t x142 = 13572277310129194LLU;
	int64_t x143 = -1LL;
	uint64_t x144 = 9902239278032LLU;
	uint64_t t32 = 396805559860LLU;

    t32 = (((x141==x142)%x143)-x144);

    if (t32 != 18446734171470273584LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x145 = INT8_MIN;
	volatile int8_t x146 = -5;
	static int32_t x147 = -52477;
	int16_t x148 = INT16_MIN;
	volatile int32_t t33 = 1175914;

    t33 = (((x145==x146)%x147)-x148);

    if (t33 != 32768) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x150 = INT16_MIN;
	uint16_t x151 = 465U;

    t34 = (((x149==x150)%x151)-x152);

    if (t34 != 128) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint16_t x153 = UINT16_MAX;
	int64_t x154 = -1LL;
	static int8_t x155 = INT8_MIN;
	int16_t x156 = INT16_MAX;
	volatile int32_t t35 = -41770867;

    t35 = (((x153==x154)%x155)-x156);

    if (t35 != -32767) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x157 = -78;
	int32_t x158 = INT32_MIN;
	volatile int8_t x159 = -1;
	int64_t x160 = 6LL;
	int64_t t36 = 53858519555LL;

    t36 = (((x157==x158)%x159)-x160);

    if (t36 != -6LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x161 = 5607LLU;
	volatile uint8_t x162 = 28U;
	static uint8_t x163 = 4U;
	volatile int32_t t37 = 15;

    t37 = (((x161==x162)%x163)-x164);

    if (t37 != -6) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x166 = UINT8_MAX;
	uint64_t x167 = UINT64_MAX;
	int64_t x168 = 143234369LL;
	volatile uint64_t t38 = 52LLU;

    t38 = (((x165==x166)%x167)-x168);

    if (t38 != 18446744073566317247LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x169 = 18LLU;
	volatile int16_t x170 = -1;
	uint16_t x171 = 71U;
	int64_t x172 = -521145412139LL;
	volatile int64_t t39 = 12408LL;

    t39 = (((x169==x170)%x171)-x172);

    if (t39 != 521145412139LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x173 = INT8_MIN;
	uint64_t x174 = UINT64_MAX;
	int64_t x175 = INT64_MIN;
	uint32_t x176 = UINT32_MAX;
	static volatile int64_t t40 = 591609881607469LL;

    t40 = (((x173==x174)%x175)-x176);

    if (t40 != -4294967295LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x177 = INT32_MIN;
	int64_t x178 = INT64_MAX;
	uint8_t x179 = 91U;
	volatile uint8_t x180 = UINT8_MAX;

    t41 = (((x177==x178)%x179)-x180);

    if (t41 != -255) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x181 = -59725;
	int32_t x182 = INT32_MIN;
	int32_t x183 = INT32_MIN;
	int16_t x184 = INT16_MIN;
	int32_t t42 = -15;

    t42 = (((x181==x182)%x183)-x184);

    if (t42 != 32768) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint32_t x186 = 1307763464U;
	int16_t x187 = -1;
	static uint32_t x188 = 4U;
	volatile uint32_t t43 = 208154U;

    t43 = (((x185==x186)%x187)-x188);

    if (t43 != 4294967292U) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x189 = -1LL;
	int8_t x190 = -1;
	static int8_t x191 = INT8_MIN;
	static uint64_t x192 = UINT64_MAX;
	uint64_t t44 = 22743152541418673LLU;

    t44 = (((x189==x190)%x191)-x192);

    if (t44 != 2LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x193 = 92LL;
	volatile int16_t x194 = INT16_MAX;

    t45 = (((x193==x194)%x195)-x196);

    if (t45 != 4294966853U) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x205 = UINT64_MAX;
	int64_t x206 = -2809106854900351345LL;
	int16_t x207 = INT16_MIN;
	int64_t x208 = -1LL;
	int64_t t46 = 2578LL;

    t46 = (((x205==x206)%x207)-x208);

    if (t46 != 1LL) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint8_t x209 = 46U;
	volatile int64_t x210 = -1LL;
	int8_t x211 = -1;
	int64_t x212 = INT64_MAX;

    t47 = (((x209==x210)%x211)-x212);

    if (t47 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x219 = 1653;
	int64_t x220 = -18490910735768LL;
	int64_t t48 = 130431LL;

    t48 = (((x217==x218)%x219)-x220);

    if (t48 != 18490910735768LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x221 = 1;
	static volatile int32_t x222 = INT32_MIN;
	int8_t x223 = 47;
	uint64_t t49 = 24344154488756850LLU;

    t49 = (((x221==x222)%x223)-x224);

    if (t49 != 18446743238728099373LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x225 = UINT64_MAX;
	volatile int64_t x226 = 865043168583LL;
	volatile int8_t x227 = INT8_MIN;
	int16_t x228 = INT16_MIN;

    t50 = (((x225==x226)%x227)-x228);

    if (t50 != 32768) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x229 = 0U;
	volatile uint8_t x230 = UINT8_MAX;
	int8_t x232 = -23;
	int32_t t51 = -3;

    t51 = (((x229==x230)%x231)-x232);

    if (t51 != 23) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x233 = UINT16_MAX;
	volatile uint64_t x234 = UINT64_MAX;
	int16_t x236 = -1;
	uint32_t t52 = 443673918U;

    t52 = (((x233==x234)%x235)-x236);

    if (t52 != 1U) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x237 = 29;
	volatile int16_t x239 = 1;
	int64_t x240 = INT64_MAX;
	int64_t t53 = -2817308336844LL;

    t53 = (((x237==x238)%x239)-x240);

    if (t53 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x245 = 1;
	static uint64_t x246 = UINT64_MAX;
	int64_t x247 = 91497LL;
	static volatile int32_t x248 = INT32_MIN;
	int64_t t54 = 0LL;

    t54 = (((x245==x246)%x247)-x248);

    if (t54 != 2147483648LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x250 = -53;
	static int16_t x251 = -6387;
	uint8_t x252 = UINT8_MAX;

    t55 = (((x249==x250)%x251)-x252);

    if (t55 != -255) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x257 = 23U;
	int8_t x258 = -1;
	volatile uint16_t x259 = 3050U;
	volatile int16_t x260 = INT16_MAX;

    t56 = (((x257==x258)%x259)-x260);

    if (t56 != -32767) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x261 = -19;
	volatile uint16_t x262 = UINT16_MAX;
	int64_t x263 = INT64_MIN;
	volatile int64_t t57 = 7527718979422486LL;

    t57 = (((x261==x262)%x263)-x264);

    if (t57 != -65535LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint32_t x265 = 44U;
	int32_t x266 = 77455574;
	static uint8_t x267 = 6U;
	uint64_t x268 = UINT64_MAX;

    t58 = (((x265==x266)%x267)-x268);

    if (t58 != 1LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint16_t x269 = 28U;
	int16_t x271 = -1;
	int64_t x272 = 257332203339LL;
	static volatile int64_t t59 = -2242LL;

    t59 = (((x269==x270)%x271)-x272);

    if (t59 != -257332203339LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x274 = -1;
	int32_t x275 = -1;
	volatile uint32_t x276 = 17072723U;
	static volatile uint32_t t60 = 78U;

    t60 = (((x273==x274)%x275)-x276);

    if (t60 != 4277894573U) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x277 = INT8_MIN;
	static uint16_t x278 = 16U;
	int64_t x279 = 133551915LL;
	int64_t t61 = -1LL;

    t61 = (((x277==x278)%x279)-x280);

    if (t61 != 1LL) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint16_t x281 = UINT16_MAX;
	static volatile uint32_t x282 = 17U;
	int64_t x283 = -1LL;
	volatile int64_t t62 = -1371058949LL;

    t62 = (((x281==x282)%x283)-x284);

    if (t62 != 128LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint64_t x285 = UINT64_MAX;
	int32_t x286 = INT32_MAX;
	volatile uint16_t x287 = 24833U;

    t63 = (((x285==x286)%x287)-x288);

    if (t63 != 4291536155U) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x289 = INT32_MAX;
	int32_t x290 = INT32_MIN;
	static uint64_t x292 = UINT64_MAX;
	static volatile uint64_t t64 = 29571LLU;

    t64 = (((x289==x290)%x291)-x292);

    if (t64 != 1LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int16_t x293 = INT16_MIN;
	static int64_t x294 = 27991LL;
	int8_t x295 = -1;
	int8_t x296 = 3;
	volatile int32_t t65 = -12959;

    t65 = (((x293==x294)%x295)-x296);

    if (t65 != -3) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x297 = INT64_MAX;
	int32_t x299 = INT32_MIN;
	uint32_t x300 = 1042891U;
	volatile uint32_t t66 = 15634846U;

    t66 = (((x297==x298)%x299)-x300);

    if (t66 != 4293924405U) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x301 = -1;
	int32_t x302 = 13;
	volatile uint32_t x303 = 11U;
	volatile int16_t x304 = INT16_MIN;
	uint32_t t67 = 35U;

    t67 = (((x301==x302)%x303)-x304);

    if (t67 != 32768U) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x305 = -1;
	static uint32_t x306 = UINT32_MAX;
	int32_t x307 = INT32_MIN;
	volatile int64_t x308 = -4270797868469LL;

    t68 = (((x305==x306)%x307)-x308);

    if (t68 != 4270797868470LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint64_t x309 = 56762LLU;
	uint32_t x310 = UINT32_MAX;
	uint64_t x311 = 3547828618720996LLU;
	static int32_t x312 = INT32_MAX;
	volatile uint64_t t69 = 38544LLU;

    t69 = (((x309==x310)%x311)-x312);

    if (t69 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x313 = UINT64_MAX;
	int64_t x314 = INT64_MIN;
	volatile int32_t x315 = INT32_MAX;
	int16_t x316 = -1;
	static volatile int32_t t70 = 120;

    t70 = (((x313==x314)%x315)-x316);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x317 = 7LLU;
	static int16_t x318 = INT16_MAX;
	uint64_t x319 = UINT64_MAX;
	volatile int16_t x320 = -1;
	uint64_t t71 = 658141100334766LLU;

    t71 = (((x317==x318)%x319)-x320);

    if (t71 != 1LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x321 = -1;
	int64_t x322 = INT64_MAX;
	static int64_t x323 = -1LL;
	volatile int64_t t72 = 56LL;

    t72 = (((x321==x322)%x323)-x324);

    if (t72 != -255LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x325 = INT32_MIN;
	int8_t x326 = 1;
	int64_t x327 = INT64_MIN;
	volatile int64_t t73 = -61030422753LL;

    t73 = (((x325==x326)%x327)-x328);

    if (t73 != -38260LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x330 = INT64_MIN;
	static int16_t x331 = -1;
	static volatile int32_t t74 = -82;

    t74 = (((x329==x330)%x331)-x332);

    if (t74 != 6) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x333 = INT64_MIN;
	static volatile uint16_t x335 = 1U;
	int32_t t75 = -3606;

    t75 = (((x333==x334)%x335)-x336);

    if (t75 != -127) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x337 = INT16_MAX;
	int8_t x338 = INT8_MAX;
	uint64_t x340 = UINT64_MAX;

    t76 = (((x337==x338)%x339)-x340);

    if (t76 != 1LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x341 = -1;
	volatile int32_t x342 = -3010;
	uint32_t x344 = 3707U;
	volatile uint32_t t77 = 9U;

    t77 = (((x341==x342)%x343)-x344);

    if (t77 != 4294963589U) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x345 = 379182566059539168LLU;
	int8_t x346 = -1;
	uint32_t x348 = 1227304U;
	int64_t t78 = -109628109829980LL;

    t78 = (((x345==x346)%x347)-x348);

    if (t78 != -1227304LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x349 = -1;
	int8_t x350 = 1;
	int16_t x351 = INT16_MAX;
	uint32_t x352 = 14528183U;
	uint32_t t79 = 94723177U;

    t79 = (((x349==x350)%x351)-x352);

    if (t79 != 4280439113U) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x362 = -1;
	volatile uint64_t x364 = 4065373708960499LLU;
	volatile uint64_t t80 = 2861LLU;

    t80 = (((x361==x362)%x363)-x364);

    if (t80 != 18442678700000591117LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int64_t x374 = INT64_MAX;
	static int8_t x375 = INT8_MIN;
	int64_t x376 = -1LL;

    t81 = (((x373==x374)%x375)-x376);

    if (t81 != 1LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x377 = 33U;
	int64_t x378 = -1LL;
	uint32_t x379 = UINT32_MAX;

    t82 = (((x377==x378)%x379)-x380);

    if (t82 != 4294934529U) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x381 = INT32_MIN;
	uint64_t x382 = 2609902144LLU;
	volatile int64_t t83 = -6971160281632692LL;

    t83 = (((x381==x382)%x383)-x384);

    if (t83 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x386 = -1;
	static volatile int8_t x387 = -1;
	int32_t t84 = -3510;

    t84 = (((x385==x386)%x387)-x388);

    if (t84 != -3789) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint32_t x390 = 2045289U;
	int8_t x391 = 1;
	volatile uint8_t x392 = 100U;
	int32_t t85 = 321250019;

    t85 = (((x389==x390)%x391)-x392);

    if (t85 != -100) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x394 = 1659U;
	uint16_t x395 = UINT16_MAX;
	static uint64_t x396 = 63714LLU;
	uint64_t t86 = 880204370LLU;

    t86 = (((x393==x394)%x395)-x396);

    if (t86 != 18446744073709487902LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x397 = 62184LLU;
	static int64_t x398 = -1LL;
	uint8_t x399 = 5U;
	static volatile uint64_t x400 = UINT64_MAX;
	volatile uint64_t t87 = 172996322208LLU;

    t87 = (((x397==x398)%x399)-x400);

    if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x401 = UINT16_MAX;
	int64_t x403 = 203LL;
	uint16_t x404 = 161U;
	volatile int64_t t88 = 86936658168366LL;

    t88 = (((x401==x402)%x403)-x404);

    if (t88 != -161LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x405 = 18099534833371LLU;
	int64_t x407 = INT64_MIN;
	int32_t x408 = INT32_MIN;
	static volatile int64_t t89 = -4219LL;

    t89 = (((x405==x406)%x407)-x408);

    if (t89 != 2147483648LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint64_t x409 = UINT64_MAX;
	volatile uint32_t x410 = 27163443U;
	static int32_t x411 = -3953;
	static int8_t x412 = -3;
	int32_t t90 = -481;

    t90 = (((x409==x410)%x411)-x412);

    if (t90 != 3) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x413 = INT8_MIN;
	int32_t x414 = -1;
	int8_t x415 = 5;
	volatile int64_t x416 = 1LL;
	int64_t t91 = -7710756762454827LL;

    t91 = (((x413==x414)%x415)-x416);

    if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x417 = UINT16_MAX;
	int64_t x418 = INT64_MIN;
	static int16_t x419 = -63;
	int16_t x420 = INT16_MIN;
	int32_t t92 = 0;

    t92 = (((x417==x418)%x419)-x420);

    if (t92 != 32768) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint64_t x421 = 409248943024901LLU;
	int32_t x422 = -1;
	uint64_t x424 = 3LLU;
	static uint64_t t93 = 5005011742LLU;

    t93 = (((x421==x422)%x423)-x424);

    if (t93 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x426 = INT8_MIN;
	volatile uint64_t x427 = 8607622683014931094LLU;
	int32_t x428 = -8167;

    t94 = (((x425==x426)%x427)-x428);

    if (t94 != 8167LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int16_t x429 = INT16_MIN;
	uint8_t x430 = 32U;
	int16_t x431 = -1;
	static volatile int16_t x432 = INT16_MAX;
	int32_t t95 = -1;

    t95 = (((x429==x430)%x431)-x432);

    if (t95 != -32767) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint16_t x433 = UINT16_MAX;
	static int16_t x434 = 2003;
	static int32_t t96 = -18818;

    t96 = (((x433==x434)%x435)-x436);

    if (t96 != 1513) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x438 = 17517771751230644LLU;
	int64_t x439 = 2279683858090LL;
	volatile int32_t x440 = -1824;

    t97 = (((x437==x438)%x439)-x440);

    if (t97 != 1824LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x446 = INT64_MIN;
	int16_t x447 = -7;
	int16_t x448 = -4035;
	volatile int32_t t98 = 437;

    t98 = (((x445==x446)%x447)-x448);

    if (t98 != 4035) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile uint8_t x449 = UINT8_MAX;
	uint64_t x450 = 0LLU;
	int64_t x451 = 71522LL;
	int8_t x452 = 9;
	static volatile int64_t t99 = -75617LL;

    t99 = (((x449==x450)%x451)-x452);

    if (t99 != -9LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x453 = -893;
	int32_t x454 = -1;
	int16_t x455 = INT16_MIN;
	uint64_t x456 = 21656444455229288LLU;
	volatile uint64_t t100 = 948409821LLU;

    t100 = (((x453==x454)%x455)-x456);

    if (t100 != 18425087629254322328LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint16_t x457 = 217U;
	uint8_t x458 = 20U;
	static uint16_t x460 = 379U;
	int32_t t101 = 0;

    t101 = (((x457==x458)%x459)-x460);

    if (t101 != -379) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x461 = 3U;
	static uint16_t x462 = 36U;
	static int32_t x463 = -1;

    t102 = (((x461==x462)%x463)-x464);

    if (t102 != 38676235LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x465 = -58;
	int16_t x466 = INT16_MIN;
	static int8_t x467 = -1;
	int8_t x468 = INT8_MIN;

    t103 = (((x465==x466)%x467)-x468);

    if (t103 != 128) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x469 = -1;
	uint32_t x470 = 156U;
	uint64_t x471 = 1087500914842945LLU;
	int32_t x472 = -32797158;
	uint64_t t104 = 10904LLU;

    t104 = (((x469==x470)%x471)-x472);

    if (t104 != 32797158LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint32_t x477 = 2U;
	int64_t x478 = INT64_MIN;
	volatile int64_t x480 = 3133332958341037402LL;
	volatile int64_t t105 = 4664LL;

    t105 = (((x477==x478)%x479)-x480);

    if (t105 != -3133332958341037402LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x481 = -1LL;
	volatile int32_t x483 = 2733110;
	int8_t x484 = 6;
	int32_t t106 = 61;

    t106 = (((x481==x482)%x483)-x484);

    if (t106 != -5) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int64_t x485 = INT64_MIN;
	static volatile uint8_t x486 = UINT8_MAX;
	int16_t x487 = -1;
	static uint64_t x488 = 80229292LLU;
	volatile uint64_t t107 = 450LLU;

    t107 = (((x485==x486)%x487)-x488);

    if (t107 != 18446744073629322324LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x493 = INT32_MAX;
	volatile int64_t x495 = INT64_MIN;
	static int16_t x496 = INT16_MIN;

    t108 = (((x493==x494)%x495)-x496);

    if (t108 != 32768LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int16_t x497 = 8317;
	int64_t x498 = INT64_MAX;
	volatile uint8_t x500 = UINT8_MAX;
	volatile uint64_t t109 = 5863011LLU;

    t109 = (((x497==x498)%x499)-x500);

    if (t109 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x505 = -402;
	uint8_t x507 = 57U;
	int32_t x508 = -569771465;
	static int32_t t110 = -1727;

    t110 = (((x505==x506)%x507)-x508);

    if (t110 != 569771465) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x510 = INT8_MIN;
	volatile uint32_t x511 = UINT32_MAX;
	uint64_t t111 = 27590LLU;

    t111 = (((x509==x510)%x511)-x512);

    if (t111 != 1LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x513 = INT32_MIN;
	uint16_t x514 = 243U;
	volatile int8_t x515 = INT8_MIN;
	int64_t x516 = INT64_MAX;

    t112 = (((x513==x514)%x515)-x516);

    if (t112 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x517 = INT64_MAX;
	uint16_t x518 = 720U;
	uint64_t x519 = 5LLU;
	uint64_t t113 = 140490950LLU;

    t113 = (((x517==x518)%x519)-x520);

    if (t113 != 18446744073709551515LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x522 = 204;
	int64_t x523 = 2514491833467LL;
	volatile uint16_t x524 = 2234U;
	volatile int64_t t114 = 5953950682073LL;

    t114 = (((x521==x522)%x523)-x524);

    if (t114 != -2234LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x525 = -1LL;
	volatile uint16_t x526 = 19U;
	int8_t x527 = INT8_MIN;
	int16_t x528 = 610;
	int32_t t115 = 960;

    t115 = (((x525==x526)%x527)-x528);

    if (t115 != -610) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x529 = INT32_MIN;
	uint32_t x530 = 117932958U;
	volatile int16_t x531 = -1;
	int32_t x532 = 536;

    t116 = (((x529==x530)%x531)-x532);

    if (t116 != -536) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x534 = 93357949;
	volatile int8_t x535 = INT8_MIN;
	uint32_t t117 = 3863075U;

    t117 = (((x533==x534)%x535)-x536);

    if (t117 != 4294928261U) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x538 = INT32_MIN;
	volatile int64_t x539 = 112871LL;
	volatile int64_t t118 = -3224729954778400608LL;

    t118 = (((x537==x538)%x539)-x540);

    if (t118 != -504729LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x541 = INT64_MAX;
	uint8_t x543 = 7U;
	static uint64_t t119 = 0LLU;

    t119 = (((x541==x542)%x543)-x544);

    if (t119 != 18446744068139620708LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x545 = UINT8_MAX;
	uint16_t x546 = 1U;
	static volatile uint32_t x547 = 6U;
	uint32_t x548 = UINT32_MAX;
	uint32_t t120 = 178863117U;

    t120 = (((x545==x546)%x547)-x548);

    if (t120 != 1U) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint64_t x549 = UINT64_MAX;
	volatile uint8_t x550 = UINT8_MAX;
	int64_t x551 = INT64_MIN;
	static uint64_t x552 = 78103296935472LLU;

    t121 = (((x549==x550)%x551)-x552);

    if (t121 != 18446665970412616144LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	static int32_t x554 = 56294599;
	uint64_t x555 = UINT64_MAX;
	int64_t x556 = INT64_MIN;
	uint64_t t122 = 6LLU;

    t122 = (((x553==x554)%x555)-x556);

    if (t122 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x557 = INT8_MAX;
	uint32_t x558 = 15972U;
	int8_t x559 = INT8_MIN;
	volatile int32_t t123 = -3961947;

    t123 = (((x557==x558)%x559)-x560);

    if (t123 != 128) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x561 = 0;
	int16_t x562 = 19;
	static int8_t x563 = INT8_MIN;
	volatile int64_t t124 = 634LL;

    t124 = (((x561==x562)%x563)-x564);

    if (t124 != 1LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x565 = 1;
	uint32_t x566 = 128025U;
	int8_t x567 = INT8_MIN;
	int32_t x568 = -1;
	volatile int32_t t125 = -223721010;

    t125 = (((x565==x566)%x567)-x568);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x569 = 5U;
	int8_t x570 = -1;
	static int32_t x571 = INT32_MIN;
	int32_t x572 = INT32_MAX;
	static int32_t t126 = 11322;

    t126 = (((x569==x570)%x571)-x572);

    if (t126 != -2147483647) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x575 = INT32_MIN;
	int32_t t127 = 319;

    t127 = (((x573==x574)%x575)-x576);

    if (t127 != -65535) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x577 = INT64_MIN;
	int8_t x578 = INT8_MIN;
	uint16_t x580 = UINT16_MAX;
	volatile int32_t t128 = 216114921;

    t128 = (((x577==x578)%x579)-x580);

    if (t128 != -65535) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x583 = INT64_MAX;
	volatile uint16_t x584 = UINT16_MAX;
	volatile int64_t t129 = 85LL;

    t129 = (((x581==x582)%x583)-x584);

    if (t129 != -65535LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x585 = -58037049513726444LL;
	volatile uint16_t x586 = 154U;
	volatile uint32_t x587 = UINT32_MAX;
	int32_t x588 = -1;
	volatile uint32_t t130 = 7388U;

    t130 = (((x585==x586)%x587)-x588);

    if (t130 != 1U) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x589 = -1;
	static int8_t x590 = INT8_MAX;
	int32_t x591 = INT32_MIN;
	volatile uint64_t t131 = 75172170906767998LLU;

    t131 = (((x589==x590)%x591)-x592);

    if (t131 != 18446744073204363374LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x593 = 0;
	int8_t x594 = INT8_MIN;
	uint32_t x595 = 1836U;
	int64_t x596 = INT64_MAX;
	int64_t t132 = -474865459290058413LL;

    t132 = (((x593==x594)%x595)-x596);

    if (t132 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x597 = 184116494134LLU;
	int8_t x598 = INT8_MAX;
	static int64_t x600 = INT64_MAX;

    t133 = (((x597==x598)%x599)-x600);

    if (t133 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x601 = -2;
	static volatile uint16_t x602 = 511U;
	int8_t x603 = -1;
	int8_t x604 = INT8_MAX;

    t134 = (((x601==x602)%x603)-x604);

    if (t134 != -127) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x606 = INT16_MIN;
	int16_t x607 = -117;
	uint64_t x608 = UINT64_MAX;
	uint64_t t135 = 7124LLU;

    t135 = (((x605==x606)%x607)-x608);

    if (t135 != 1LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x609 = INT16_MIN;
	int8_t x611 = INT8_MAX;
	int8_t x612 = INT8_MAX;
	volatile int32_t t136 = -30;

    t136 = (((x609==x610)%x611)-x612);

    if (t136 != -127) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint16_t x613 = UINT16_MAX;
	int64_t x614 = INT64_MIN;
	volatile int16_t x616 = -6260;
	uint32_t t137 = 344697U;

    t137 = (((x613==x614)%x615)-x616);

    if (t137 != 6260U) { NG(); } else { ; }
	
}

void f138(void) {
    	static int64_t x617 = INT64_MAX;
	int32_t x618 = -4280;
	int8_t x619 = INT8_MIN;
	uint8_t x620 = 5U;
	volatile int32_t t138 = -113148;

    t138 = (((x617==x618)%x619)-x620);

    if (t138 != -5) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint64_t x621 = 6627LLU;
	uint64_t x622 = 24271566001014LLU;
	int16_t x623 = -1;
	int8_t x624 = 0;
	volatile int32_t t139 = 26;

    t139 = (((x621==x622)%x623)-x624);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x625 = 0U;
	int64_t x626 = INT64_MIN;
	static int8_t x627 = -1;
	static int8_t x628 = -1;
	static int32_t t140 = -58587;

    t140 = (((x625==x626)%x627)-x628);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x634 = -36;
	int32_t t141 = -34706;

    t141 = (((x633==x634)%x635)-x636);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x638 = 8076U;
	int32_t x639 = -10027293;
	int8_t x640 = INT8_MIN;

    t142 = (((x637==x638)%x639)-x640);

    if (t142 != 128) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint8_t x641 = UINT8_MAX;
	static uint8_t x642 = 16U;
	int32_t x643 = INT32_MIN;
	int16_t x644 = -11181;

    t143 = (((x641==x642)%x643)-x644);

    if (t143 != 11181) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x645 = 15U;
	int16_t x646 = INT16_MIN;
	volatile int32_t x647 = -116505847;
	int64_t x648 = -23418794587937449LL;
	int64_t t144 = -4080703742LL;

    t144 = (((x645==x646)%x647)-x648);

    if (t144 != 23418794587937449LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x649 = 7013833531329292959LLU;
	static uint8_t x650 = UINT8_MAX;
	static uint64_t x651 = 2LLU;
	uint64_t x652 = 186LLU;
	uint64_t t145 = 153358527121321854LLU;

    t145 = (((x649==x650)%x651)-x652);

    if (t145 != 18446744073709551430LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x655 = 26U;
	static int8_t x656 = INT8_MIN;
	static volatile int32_t t146 = 80555;

    t146 = (((x653==x654)%x655)-x656);

    if (t146 != 128) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile uint16_t x657 = 19020U;
	int16_t x658 = 255;
	volatile uint64_t t147 = 44185870480LLU;

    t147 = (((x657==x658)%x659)-x660);

    if (t147 != 18446744073709551469LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x661 = INT16_MAX;
	uint64_t x662 = 1942082LLU;
	static volatile int8_t x663 = -1;
	int16_t x664 = 7405;
	static int32_t t148 = -45;

    t148 = (((x661==x662)%x663)-x664);

    if (t148 != -7405) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint64_t x665 = 2247LLU;
	uint8_t x666 = UINT8_MAX;
	int8_t x667 = 59;
	uint8_t x668 = 15U;

    t149 = (((x665==x666)%x667)-x668);

    if (t149 != -15) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x669 = UINT64_MAX;
	int8_t x671 = -4;
	int32_t t150 = 3143734;

    t150 = (((x669==x670)%x671)-x672);

    if (t150 != -1354) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint32_t x673 = UINT32_MAX;
	uint8_t x674 = 3U;
	int16_t x675 = INT16_MAX;
	int16_t x676 = -1;
	int32_t t151 = -1667;

    t151 = (((x673==x674)%x675)-x676);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x677 = INT64_MAX;
	static volatile uint16_t x679 = 11U;
	uint64_t x680 = 4037948LLU;
	static uint64_t t152 = 3292716428LLU;

    t152 = (((x677==x678)%x679)-x680);

    if (t152 != 18446744073705513668LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x681 = 253U;
	uint8_t x682 = UINT8_MAX;
	int16_t x683 = INT16_MAX;
	uint16_t x684 = 6U;
	static int32_t t153 = -6;

    t153 = (((x681==x682)%x683)-x684);

    if (t153 != -6) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile uint16_t x685 = 49U;
	volatile int32_t x686 = 3074868;
	int16_t x687 = -1;
	static uint32_t x688 = 249891012U;
	static uint32_t t154 = 272U;

    t154 = (((x685==x686)%x687)-x688);

    if (t154 != 4045076284U) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x693 = 373258399;
	static volatile int64_t x694 = -1LL;
	volatile int64_t x695 = INT64_MIN;
	static volatile int32_t x696 = INT32_MAX;
	volatile int64_t t155 = 34LL;

    t155 = (((x693==x694)%x695)-x696);

    if (t155 != -2147483647LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint16_t x697 = 1134U;
	static int64_t x698 = -2330637037972LL;
	uint32_t x699 = UINT32_MAX;
	static uint64_t x700 = UINT64_MAX;
	uint64_t t156 = 103LLU;

    t156 = (((x697==x698)%x699)-x700);

    if (t156 != 1LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x701 = 3U;
	int64_t x702 = -21030039503460LL;
	static uint64_t x703 = UINT64_MAX;
	volatile uint64_t t157 = 8241874LLU;

    t157 = (((x701==x702)%x703)-x704);

    if (t157 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x705 = -1LL;
	int8_t x706 = 0;
	uint64_t x707 = 16205376453356452LLU;
	int64_t x708 = INT64_MIN;
	static volatile uint64_t t158 = 3LLU;

    t158 = (((x705==x706)%x707)-x708);

    if (t158 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint16_t x709 = UINT16_MAX;
	uint16_t x710 = 1955U;
	volatile uint64_t x711 = 27LLU;
	int64_t x712 = INT64_MIN;
	uint64_t t159 = 839545841LLU;

    t159 = (((x709==x710)%x711)-x712);

    if (t159 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x713 = -1;
	volatile int16_t x714 = INT16_MIN;
	int32_t x715 = INT32_MAX;

    t160 = (((x713==x714)%x715)-x716);

    if (t160 != 1U) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint16_t x717 = UINT16_MAX;
	static int8_t x718 = 22;
	int32_t x719 = 200749263;
	static int32_t t161 = 0;

    t161 = (((x717==x718)%x719)-x720);

    if (t161 != 5726) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x725 = INT32_MIN;
	volatile int8_t x726 = INT8_MIN;
	volatile int64_t x727 = INT64_MAX;
	int64_t x728 = 2302252667LL;
	int64_t t162 = -51LL;

    t162 = (((x725==x726)%x727)-x728);

    if (t162 != -2302252667LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x729 = INT8_MAX;
	int64_t x730 = -1LL;
	int32_t x731 = -1;
	int16_t x732 = INT16_MIN;
	volatile int32_t t163 = -23580734;

    t163 = (((x729==x730)%x731)-x732);

    if (t163 != 32768) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint16_t x733 = UINT16_MAX;
	static int16_t x734 = INT16_MIN;
	static int64_t x735 = INT64_MIN;
	int64_t t164 = 49LL;

    t164 = (((x733==x734)%x735)-x736);

    if (t164 != -1LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x737 = INT8_MAX;
	int64_t x738 = -138646796631835779LL;
	int16_t x739 = INT16_MIN;
	int64_t x740 = -1LL;

    t165 = (((x737==x738)%x739)-x740);

    if (t165 != 1LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x741 = -17264408134024LL;
	volatile uint64_t x742 = 67485927LLU;
	int32_t x743 = INT32_MIN;
	int8_t x744 = -26;
	volatile int32_t t166 = 9936;

    t166 = (((x741==x742)%x743)-x744);

    if (t166 != 26) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x745 = INT16_MAX;
	int8_t x747 = INT8_MIN;
	uint8_t x748 = UINT8_MAX;
	int32_t t167 = -2;

    t167 = (((x745==x746)%x747)-x748);

    if (t167 != -255) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x749 = INT32_MAX;
	uint16_t x750 = 771U;
	int8_t x752 = INT8_MAX;
	int32_t t168 = 151820;

    t168 = (((x749==x750)%x751)-x752);

    if (t168 != -127) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t x757 = INT32_MIN;
	volatile int64_t x758 = INT64_MIN;
	int8_t x760 = 1;
	volatile int32_t t169 = -126;

    t169 = (((x757==x758)%x759)-x760);

    if (t169 != -1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x761 = 9LLU;
	int16_t x762 = INT16_MIN;
	uint64_t x763 = 9542372734558LLU;
	volatile uint64_t x764 = 66311028068LLU;
	volatile uint64_t t170 = 12261214473751512LLU;

    t170 = (((x761==x762)%x763)-x764);

    if (t170 != 18446744007398523548LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x765 = UINT64_MAX;
	uint64_t x768 = UINT64_MAX;

    t171 = (((x765==x766)%x767)-x768);

    if (t171 != 1LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x773 = -2939145;
	volatile int8_t x774 = 1;
	uint64_t x775 = UINT64_MAX;
	volatile uint64_t t172 = 25LLU;

    t172 = (((x773==x774)%x775)-x776);

    if (t172 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x777 = INT64_MAX;
	int64_t x778 = INT64_MIN;
	int32_t x779 = INT32_MIN;
	uint8_t x780 = UINT8_MAX;
	int32_t t173 = 7;

    t173 = (((x777==x778)%x779)-x780);

    if (t173 != -255) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int16_t x782 = INT16_MIN;
	int32_t t174 = 7349915;

    t174 = (((x781==x782)%x783)-x784);

    if (t174 != 128) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x785 = INT32_MAX;
	uint32_t x786 = 1488354217U;
	static int32_t x787 = -399;
	int8_t x788 = -4;
	static int32_t t175 = -102371526;

    t175 = (((x785==x786)%x787)-x788);

    if (t175 != 4) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x789 = INT64_MIN;
	int16_t x790 = 36;
	int64_t x791 = INT64_MIN;
	static volatile uint64_t x792 = UINT64_MAX;
	static volatile uint64_t t176 = 538774LLU;

    t176 = (((x789==x790)%x791)-x792);

    if (t176 != 1LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x793 = INT16_MAX;
	int64_t x794 = -1LL;
	int64_t x795 = INT64_MIN;
	int32_t x796 = INT32_MIN;

    t177 = (((x793==x794)%x795)-x796);

    if (t177 != 2147483648LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x797 = 203;
	int64_t x799 = -4047980LL;
	int64_t x800 = 27LL;

    t178 = (((x797==x798)%x799)-x800);

    if (t178 != -27LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x801 = 931770997LLU;
	uint8_t x803 = 111U;
	uint16_t x804 = 3U;
	int32_t t179 = 235352;

    t179 = (((x801==x802)%x803)-x804);

    if (t179 != -3) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x809 = -1LL;
	volatile int64_t x810 = INT64_MIN;
	int16_t x811 = INT16_MIN;
	uint64_t x812 = 259072148LLU;
	volatile uint64_t t180 = 3541499998LLU;

    t180 = (((x809==x810)%x811)-x812);

    if (t180 != 18446744073450479468LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x817 = -1LL;
	int32_t x820 = 599331;
	int64_t t181 = 782542427788995LL;

    t181 = (((x817==x818)%x819)-x820);

    if (t181 != -599330LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x822 = -1LL;
	int8_t x823 = -1;
	volatile int8_t x824 = -1;
	volatile int32_t t182 = 9;

    t182 = (((x821==x822)%x823)-x824);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x830 = INT32_MIN;
	uint16_t x831 = 27U;
	uint16_t x832 = 59U;
	volatile int32_t t183 = 13533071;

    t183 = (((x829==x830)%x831)-x832);

    if (t183 != -59) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x834 = INT16_MAX;
	int32_t x836 = INT32_MAX;
	volatile int32_t t184 = -2467;

    t184 = (((x833==x834)%x835)-x836);

    if (t184 != -2147483647) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x837 = INT16_MIN;
	int16_t x838 = INT16_MIN;
	volatile uint64_t x839 = 16008155009LLU;
	static int16_t x840 = INT16_MIN;
	uint64_t t185 = 855211629939837251LLU;

    t185 = (((x837==x838)%x839)-x840);

    if (t185 != 32769LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x845 = INT8_MAX;
	int8_t x846 = 1;
	volatile int32_t x847 = INT32_MIN;
	volatile uint64_t x848 = 146634LLU;
	uint64_t t186 = 9141313218LLU;

    t186 = (((x845==x846)%x847)-x848);

    if (t186 != 18446744073709404982LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint16_t x849 = UINT16_MAX;
	int32_t x850 = INT32_MAX;
	static volatile int64_t t187 = -1LL;

    t187 = (((x849==x850)%x851)-x852);

    if (t187 != 828830623394LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x854 = 0U;
	uint8_t x855 = 2U;
	uint8_t x856 = UINT8_MAX;

    t188 = (((x853==x854)%x855)-x856);

    if (t188 != -255) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x857 = INT8_MAX;
	static int16_t x859 = -33;
	volatile int16_t x860 = 26;
	volatile int32_t t189 = -5;

    t189 = (((x857==x858)%x859)-x860);

    if (t189 != -26) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x861 = -10378;
	int32_t x862 = INT32_MIN;
	uint64_t x864 = 10457107308LLU;
	static volatile uint64_t t190 = 26504813044030LLU;

    t190 = (((x861==x862)%x863)-x864);

    if (t190 != 18446744063252444308LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x866 = -1;
	int16_t x867 = INT16_MIN;
	int32_t t191 = 85824;

    t191 = (((x865==x866)%x867)-x868);

    if (t191 != -2147483647) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x869 = -1LL;
	static volatile int32_t x870 = -1;
	int32_t x871 = INT32_MIN;
	int16_t x872 = INT16_MIN;
	volatile int32_t t192 = 567;

    t192 = (((x869==x870)%x871)-x872);

    if (t192 != 32769) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x873 = 3770155;
	uint64_t x874 = 855860LLU;
	uint64_t x875 = 1075241LLU;
	int32_t x876 = 2818065;
	volatile uint64_t t193 = 55LLU;

    t193 = (((x873==x874)%x875)-x876);

    if (t193 != 18446744073706733551LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x878 = INT16_MIN;
	volatile int16_t x879 = -1933;
	int32_t t194 = -223575;

    t194 = (((x877==x878)%x879)-x880);

    if (t194 != -1) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint16_t x882 = 3U;
	uint64_t x883 = 1516LLU;
	int32_t x884 = INT32_MIN;
	uint64_t t195 = 53467591947294927LLU;

    t195 = (((x881==x882)%x883)-x884);

    if (t195 != 2147483648LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static int64_t x889 = -844720357478LL;
	volatile int32_t x891 = INT32_MIN;
	static volatile int16_t x892 = INT16_MIN;
	int32_t t196 = -1038420;

    t196 = (((x889==x890)%x891)-x892);

    if (t196 != 32768) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x893 = 521095;
	int8_t x895 = -3;
	static uint32_t x896 = 1403519214U;
	volatile uint32_t t197 = 27U;

    t197 = (((x893==x894)%x895)-x896);

    if (t197 != 2891448082U) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x897 = INT32_MAX;
	int32_t x898 = INT32_MAX;
	int16_t x899 = -1;
	int16_t x900 = -1;

    t198 = (((x897==x898)%x899)-x900);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x901 = 7;
	int64_t x902 = -116153917849305LL;
	int64_t x903 = INT64_MIN;
	uint32_t x904 = 65U;
	volatile int64_t t199 = -4267LL;

    t199 = (((x901==x902)%x903)-x904);

    if (t199 != -65LL) { NG(); } else { ; }
	
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

