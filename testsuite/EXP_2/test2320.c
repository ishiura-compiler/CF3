
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

static int8_t x5 = -1;
int32_t x11 = -3658;
volatile uint8_t x17 = 18U;
int32_t x28 = INT32_MIN;
uint32_t x32 = UINT32_MAX;
uint32_t x38 = UINT32_MAX;
static int64_t x40 = -1355971030LL;
int8_t x42 = INT8_MAX;
int32_t x43 = INT32_MIN;
uint16_t x44 = 32063U;
int32_t t14 = 816742308;
uint64_t x63 = 929368LLU;
uint64_t x66 = UINT64_MAX;
int64_t x67 = 360980229104890LL;
volatile int32_t t16 = -41;
int32_t x80 = -51095317;
int32_t x82 = INT32_MIN;
static int32_t t20 = 21295890;
int8_t x97 = INT8_MAX;
static uint64_t x101 = 107212LLU;
static int64_t x102 = INT64_MAX;
int16_t x103 = INT16_MIN;
static int64_t x105 = -56252663LL;
static int64_t x106 = INT64_MIN;
uint32_t x109 = 1630257743U;
int8_t x110 = INT8_MIN;
int32_t t28 = -121893980;
static uint16_t x117 = 4U;
static uint32_t x120 = 82658648U;
int16_t x125 = INT16_MIN;
int32_t t33 = -3;
uint32_t x140 = UINT32_MAX;
int16_t x141 = INT16_MIN;
uint64_t x142 = 0LLU;
int8_t x144 = INT8_MIN;
int32_t t36 = -22;
uint16_t x149 = 19967U;
int32_t t37 = -441018932;
int64_t x153 = 8774831894LL;
int32_t t38 = -135557861;
static uint8_t x164 = 1U;
volatile int32_t x169 = -1564;
volatile int64_t x171 = -2368843738876LL;
int8_t x174 = INT8_MIN;
volatile int8_t x179 = -48;
static volatile uint16_t x183 = 112U;
volatile uint32_t x184 = 122506U;
static volatile int32_t t46 = 56203665;
int8_t x189 = 1;
int64_t x192 = 107256LL;
uint16_t x195 = UINT16_MAX;
uint8_t x196 = 25U;
volatile int32_t x197 = 100;
volatile int32_t t49 = 587996821;
volatile int32_t t50 = -359;
static int32_t x207 = -21441081;
volatile int32_t t52 = -24225217;
volatile int32_t t54 = 24597236;
volatile int16_t x225 = INT16_MIN;
static uint8_t x226 = UINT8_MAX;
int8_t x228 = INT8_MIN;
int32_t x229 = INT32_MIN;
volatile int32_t t57 = -15196335;
int64_t x237 = 493556233157393294LL;
int32_t x239 = 0;
volatile int32_t t59 = 10821133;
static int32_t x244 = 1;
volatile int8_t x245 = 0;
int32_t t63 = 1;
volatile int64_t x258 = -1LL;
static uint16_t x268 = UINT16_MAX;
static int8_t x279 = INT8_MAX;
uint8_t x280 = UINT8_MAX;
int16_t x282 = -8243;
int64_t x289 = 417901966063125072LL;
static int16_t x294 = -1;
int8_t x295 = INT8_MAX;
static int32_t t74 = -1587586;
volatile int32_t x309 = INT32_MIN;
uint64_t x315 = UINT64_MAX;
static int16_t x320 = -1;
int8_t x321 = -3;
int8_t x331 = INT8_MIN;
static int32_t t82 = -2464613;
int32_t t83 = -127897875;
uint32_t x337 = 214948922U;
int8_t x343 = INT8_MAX;
int32_t t85 = -6322;
volatile int32_t x346 = -974126;
int16_t x348 = INT16_MIN;
volatile int64_t x354 = INT64_MIN;
int32_t x357 = INT32_MAX;
int32_t t89 = 158491;
volatile uint16_t x363 = 12U;
static volatile int32_t t90 = -11241;
uint32_t x369 = 1735825311U;
int32_t t92 = -16869189;
int32_t x375 = INT32_MIN;
int16_t x377 = -1;
volatile int32_t t94 = 125409;
int64_t x387 = -1LL;
static int32_t x388 = -301825808;
volatile int32_t x392 = INT32_MAX;
volatile uint32_t x403 = 9U;
static int64_t x404 = INT64_MIN;
static volatile int32_t t102 = -352;
static int16_t x420 = INT16_MIN;
uint32_t x426 = 663314U;
static uint64_t x433 = UINT64_MAX;
uint64_t x435 = 3583185LLU;
static uint8_t x441 = 5U;
uint16_t x443 = UINT16_MAX;
static volatile int32_t t110 = -43;
static int8_t x447 = 54;
volatile int32_t t111 = -904281;
static uint64_t x452 = 1LLU;
int16_t x454 = 1;
int8_t x465 = INT8_MAX;
int64_t x466 = INT64_MIN;
int32_t x472 = INT32_MIN;
int64_t x480 = INT64_MIN;
volatile int16_t x485 = -1;
int16_t x488 = -5;
int32_t t121 = 215279708;
int16_t x489 = INT16_MIN;
int8_t x495 = -7;
int32_t t123 = -893;
int16_t x504 = INT16_MAX;
int64_t x508 = 67910291179LL;
int16_t x509 = INT16_MIN;
volatile int64_t x510 = -1LL;
static int32_t t128 = 1884719;
int64_t x521 = -16485055034LL;
uint32_t x526 = 2315U;
static volatile int8_t x527 = -16;
static int64_t x535 = -1LL;
uint32_t x536 = 2777U;
uint8_t x539 = 7U;
uint16_t x547 = 350U;
uint8_t x548 = UINT8_MAX;
uint8_t x549 = UINT8_MAX;
static uint64_t x560 = 13404LLU;
int32_t t140 = 16843;
uint16_t x572 = 1U;
int16_t x577 = -1052;
uint8_t x580 = UINT8_MAX;
static volatile int32_t t144 = -3903;
volatile int32_t t147 = -456068756;
int32_t x597 = -1027251;
static volatile int32_t t149 = 422035467;
static int16_t x604 = 23;
uint16_t x611 = UINT16_MAX;
int8_t x612 = INT8_MIN;
int64_t x615 = -15144273399LL;
int32_t t153 = -9839;
int32_t t155 = -1166;
int8_t x628 = INT8_MAX;
int32_t x631 = INT32_MIN;
int16_t x636 = INT16_MAX;
int8_t x640 = -1;
volatile int32_t t159 = -12286786;
volatile int8_t x641 = -12;
int32_t t160 = -274375;
volatile int32_t x645 = -1;
static uint64_t x652 = UINT64_MAX;
int8_t x657 = -5;
uint8_t x663 = UINT8_MAX;
int64_t x665 = -12537056LL;
volatile int64_t x667 = 28068260LL;
volatile int32_t t167 = 254859;
volatile int32_t t168 = 4366017;
static volatile int32_t x678 = 104888296;
uint64_t x683 = UINT64_MAX;
int64_t x685 = -3195250297LL;
static volatile int32_t t171 = 160310989;
int32_t t173 = 223639;
int32_t x698 = -1;
int16_t x699 = 1;
int16_t x710 = INT16_MAX;
static int8_t x711 = -1;
int16_t x713 = INT16_MIN;
static int32_t t178 = 25;
int64_t x721 = -60463231LL;
int8_t x724 = -1;
static int64_t x726 = INT64_MAX;
static volatile int64_t x727 = -1LL;
int8_t x728 = INT8_MAX;
uint32_t x732 = 1991324745U;
int32_t t182 = -655396;
static volatile int32_t t183 = 3;
uint32_t x737 = 655953U;
int8_t x739 = INT8_MIN;
int8_t x742 = -47;
int64_t x744 = INT64_MIN;
int32_t t185 = -3;
static volatile uint32_t x745 = 77U;
volatile int32_t t187 = 0;
volatile int16_t x753 = 0;
volatile int32_t t188 = -1096534;
static volatile int32_t t189 = -15;
int32_t x766 = 128446414;
volatile int32_t t192 = 0;
volatile uint16_t x774 = 208U;
volatile int64_t x779 = -1LL;
int16_t x780 = -1;
static int32_t x781 = 118352;
volatile int16_t x786 = -490;
static uint32_t x787 = UINT32_MAX;
int16_t x792 = 3929;
static int32_t t197 = -30;
uint16_t x793 = UINT16_MAX;
static int8_t x797 = 23;


void f0(void) {
    	int16_t x1 = -4474;
	int8_t x2 = INT8_MIN;
	int8_t x3 = 1;
	static volatile int64_t x4 = INT64_MIN;
	volatile int32_t t0 = 929267;

    t0 = ((x1&(x2&x3))<=x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x6 = INT32_MAX;
	volatile int8_t x7 = -1;
	int32_t x8 = -45919;
	static int32_t t1 = 1;

    t1 = ((x5&(x6&x7))<=x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = 866U;
	int64_t x10 = INT64_MIN;
	int64_t x12 = -1LL;
	volatile int32_t t2 = 14;

    t2 = ((x9&(x10&x11))<=x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x13 = INT8_MIN;
	uint16_t x14 = 29595U;
	int64_t x15 = INT64_MAX;
	uint64_t x16 = 6314153739191LLU;
	volatile int32_t t3 = 0;

    t3 = ((x13&(x14&x15))<=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint8_t x18 = UINT8_MAX;
	static volatile uint8_t x19 = 119U;
	uint8_t x20 = UINT8_MAX;
	int32_t t4 = -8374511;

    t4 = ((x17&(x18&x19))<=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x21 = -1329344100276726LL;
	int64_t x22 = INT64_MAX;
	uint16_t x23 = 562U;
	uint32_t x24 = 941906U;
	static int32_t t5 = 136914;

    t5 = ((x21&(x22&x23))<=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = INT64_MIN;
	int8_t x26 = -1;
	int32_t x27 = -73;
	static int32_t t6 = -44505970;

    t6 = ((x25&(x26&x27))<=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x29 = UINT32_MAX;
	static volatile int32_t x30 = -1;
	volatile int16_t x31 = 159;
	static volatile int32_t t7 = 391500;

    t7 = ((x29&(x30&x31))<=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x33 = INT64_MIN;
	int32_t x34 = -873835884;
	uint32_t x35 = 534362844U;
	volatile uint32_t x36 = UINT32_MAX;
	int32_t t8 = 36145;

    t8 = ((x33&(x34&x35))<=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x37 = INT64_MAX;
	static uint8_t x39 = 3U;
	volatile int32_t t9 = 182762;

    t9 = ((x37&(x38&x39))<=x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int8_t x41 = INT8_MIN;
	int32_t t10 = 23945114;

    t10 = ((x41&(x42&x43))<=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x45 = 0U;
	static volatile int32_t x46 = INT32_MIN;
	int16_t x47 = -1055;
	int32_t x48 = INT32_MAX;
	int32_t t11 = -1007;

    t11 = ((x45&(x46&x47))<=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x49 = 16884752361262LLU;
	int32_t x50 = INT32_MIN;
	int16_t x51 = INT16_MIN;
	uint8_t x52 = 3U;
	volatile int32_t t12 = -7043;

    t12 = ((x49&(x50&x51))<=x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = -1;
	int8_t x54 = -17;
	volatile int32_t x55 = -14;
	int32_t x56 = INT32_MIN;
	int32_t t13 = 88;

    t13 = ((x53&(x54&x55))<=x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int32_t x57 = -1;
	uint16_t x58 = 986U;
	uint8_t x59 = 3U;
	static uint64_t x60 = 8630747575407243162LLU;

    t14 = ((x57&(x58&x59))<=x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint64_t x61 = 210094519025520762LLU;
	volatile uint64_t x62 = 301114088096077351LLU;
	int16_t x64 = INT16_MIN;
	int32_t t15 = -307;

    t15 = ((x61&(x62&x63))<=x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x65 = INT64_MAX;
	int16_t x68 = INT16_MIN;

    t16 = ((x65&(x66&x67))<=x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = INT16_MIN;
	int32_t x70 = -1;
	int32_t x71 = -1;
	int64_t x72 = INT64_MIN;
	int32_t t17 = -25518407;

    t17 = ((x69&(x70&x71))<=x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = -1;
	uint16_t x74 = 442U;
	volatile int16_t x75 = 334;
	static int8_t x76 = 1;
	static volatile int32_t t18 = 412776;

    t18 = ((x73&(x74&x75))<=x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = -1;
	uint64_t x78 = 8050LLU;
	volatile int32_t x79 = INT32_MAX;
	int32_t t19 = 325896902;

    t19 = ((x77&(x78&x79))<=x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int8_t x81 = -1;
	volatile int16_t x83 = 343;
	uint32_t x84 = 1U;

    t20 = ((x81&(x82&x83))<=x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = INT16_MIN;
	volatile uint8_t x86 = UINT8_MAX;
	int8_t x87 = 0;
	volatile uint32_t x88 = 435U;
	volatile int32_t t21 = -1;

    t21 = ((x85&(x86&x87))<=x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = 39;
	int16_t x90 = 224;
	uint32_t x91 = 251027218U;
	uint16_t x92 = UINT16_MAX;
	int32_t t22 = 0;

    t22 = ((x89&(x90&x91))<=x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = INT32_MAX;
	uint16_t x94 = UINT16_MAX;
	int8_t x95 = INT8_MAX;
	static int64_t x96 = INT64_MIN;
	volatile int32_t t23 = -955;

    t23 = ((x93&(x94&x95))<=x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x98 = 4312;
	static uint64_t x99 = 4404763593356939LLU;
	int32_t x100 = -27614;
	int32_t t24 = -1391651;

    t24 = ((x97&(x98&x99))<=x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile uint16_t x104 = 12U;
	volatile int32_t t25 = -231;

    t25 = ((x101&(x102&x103))<=x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x107 = UINT16_MAX;
	uint16_t x108 = UINT16_MAX;
	volatile int32_t t26 = -15;

    t26 = ((x105&(x106&x107))<=x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x111 = -144;
	int16_t x112 = -1;
	volatile int32_t t27 = 114195649;

    t27 = ((x109&(x110&x111))<=x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x113 = 38738U;
	volatile uint32_t x114 = 21435840U;
	int16_t x115 = INT16_MIN;
	int16_t x116 = 1522;

    t28 = ((x113&(x114&x115))<=x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static int8_t x118 = INT8_MIN;
	uint64_t x119 = 32LLU;
	int32_t t29 = 16376657;

    t29 = ((x117&(x118&x119))<=x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = INT64_MIN;
	int64_t x122 = -1LL;
	static uint16_t x123 = 132U;
	int16_t x124 = INT16_MIN;
	static volatile int32_t t30 = -7103;

    t30 = ((x121&(x122&x123))<=x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile int32_t x126 = INT32_MAX;
	volatile int8_t x127 = INT8_MIN;
	int16_t x128 = 6619;
	static int32_t t31 = 974667;

    t31 = ((x125&(x126&x127))<=x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x129 = INT32_MIN;
	int16_t x130 = INT16_MIN;
	uint32_t x131 = 422762034U;
	int32_t x132 = INT32_MIN;
	int32_t t32 = 1340;

    t32 = ((x129&(x130&x131))<=x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x133 = 0;
	static uint8_t x134 = 3U;
	int64_t x135 = -190557156667549255LL;
	uint8_t x136 = UINT8_MAX;

    t33 = ((x133&(x134&x135))<=x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint8_t x137 = 93U;
	int8_t x138 = -2;
	uint8_t x139 = UINT8_MAX;
	volatile int32_t t34 = -730;

    t34 = ((x137&(x138&x139))<=x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x143 = INT16_MIN;
	volatile int32_t t35 = 61;

    t35 = ((x141&(x142&x143))<=x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint64_t x145 = UINT64_MAX;
	int8_t x146 = -1;
	int32_t x147 = -1;
	int64_t x148 = -387LL;

    t36 = ((x145&(x146&x147))<=x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x150 = -3331LL;
	int16_t x151 = -15;
	int64_t x152 = 3510751626LL;

    t37 = ((x149&(x150&x151))<=x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int8_t x154 = INT8_MAX;
	volatile uint64_t x155 = 1913787LLU;
	int64_t x156 = -1LL;

    t38 = ((x153&(x154&x155))<=x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint32_t x157 = 105126U;
	int8_t x158 = INT8_MAX;
	uint8_t x159 = UINT8_MAX;
	static volatile int8_t x160 = INT8_MAX;
	volatile int32_t t39 = 21287632;

    t39 = ((x157&(x158&x159))<=x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x161 = INT16_MAX;
	int64_t x162 = 3645505417985LL;
	static int16_t x163 = -1;
	int32_t t40 = 15861;

    t40 = ((x161&(x162&x163))<=x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x165 = INT8_MAX;
	int16_t x166 = 1;
	uint64_t x167 = 38053995LLU;
	uint16_t x168 = 4842U;
	int32_t t41 = 86;

    t41 = ((x165&(x166&x167))<=x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x170 = UINT32_MAX;
	volatile uint32_t x172 = UINT32_MAX;
	static volatile int32_t t42 = -8059808;

    t42 = ((x169&(x170&x171))<=x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x173 = INT32_MAX;
	static int8_t x175 = -1;
	volatile uint32_t x176 = 3300U;
	int32_t t43 = 422775989;

    t43 = ((x173&(x174&x175))<=x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int8_t x177 = -1;
	int16_t x178 = -180;
	uint8_t x180 = 24U;
	volatile int32_t t44 = 18583;

    t44 = ((x177&(x178&x179))<=x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x181 = INT8_MAX;
	int16_t x182 = -1;
	int32_t t45 = 114;

    t45 = ((x181&(x182&x183))<=x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = 2;
	volatile int16_t x186 = -310;
	int16_t x187 = -475;
	int32_t x188 = INT32_MAX;

    t46 = ((x185&(x186&x187))<=x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x190 = -1;
	int32_t x191 = INT32_MAX;
	volatile int32_t t47 = -114405458;

    t47 = ((x189&(x190&x191))<=x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static int16_t x193 = 4058;
	static int16_t x194 = -1;
	int32_t t48 = -3;

    t48 = ((x193&(x194&x195))<=x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x198 = -9366042348235367LL;
	int32_t x199 = -3;
	int16_t x200 = 233;

    t49 = ((x197&(x198&x199))<=x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x201 = INT8_MIN;
	static uint32_t x202 = 519889987U;
	static int64_t x203 = INT64_MIN;
	uint16_t x204 = 5958U;

    t50 = ((x201&(x202&x203))<=x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x205 = 7041583LLU;
	int16_t x206 = 317;
	uint8_t x208 = UINT8_MAX;
	volatile int32_t t51 = 0;

    t51 = ((x205&(x206&x207))<=x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x209 = -1;
	int16_t x210 = -3;
	int8_t x211 = INT8_MIN;
	int16_t x212 = INT16_MIN;

    t52 = ((x209&(x210&x211))<=x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint64_t x213 = UINT64_MAX;
	int16_t x214 = INT16_MIN;
	volatile int32_t x215 = INT32_MIN;
	static int16_t x216 = -1;
	int32_t t53 = -18739;

    t53 = ((x213&(x214&x215))<=x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x217 = INT8_MIN;
	int8_t x218 = INT8_MIN;
	int16_t x219 = -1;
	volatile int16_t x220 = INT16_MIN;

    t54 = ((x217&(x218&x219))<=x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x221 = 48U;
	static int8_t x222 = 19;
	uint32_t x223 = 1317273692U;
	int16_t x224 = INT16_MIN;
	volatile int32_t t55 = 22928948;

    t55 = ((x221&(x222&x223))<=x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x227 = INT8_MIN;
	static volatile int32_t t56 = 0;

    t56 = ((x225&(x226&x227))<=x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint8_t x230 = 59U;
	volatile int64_t x231 = INT64_MAX;
	int32_t x232 = INT32_MIN;

    t57 = ((x229&(x230&x231))<=x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x233 = 17828U;
	uint8_t x234 = 8U;
	int64_t x235 = INT64_MAX;
	uint64_t x236 = UINT64_MAX;
	static volatile int32_t t58 = 3;

    t58 = ((x233&(x234&x235))<=x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x238 = INT32_MIN;
	int16_t x240 = INT16_MIN;

    t59 = ((x237&(x238&x239))<=x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x241 = -736221;
	int8_t x242 = INT8_MIN;
	volatile int16_t x243 = INT16_MAX;
	int32_t t60 = -3441;

    t60 = ((x241&(x242&x243))<=x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int64_t x246 = 10198LL;
	volatile int32_t x247 = INT32_MIN;
	static uint32_t x248 = 4U;
	int32_t t61 = 1022;

    t61 = ((x245&(x246&x247))<=x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x249 = INT32_MAX;
	volatile int32_t x250 = INT32_MAX;
	int8_t x251 = -13;
	uint16_t x252 = UINT16_MAX;
	volatile int32_t t62 = -45178976;

    t62 = ((x249&(x250&x251))<=x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x253 = -3617177;
	uint64_t x254 = UINT64_MAX;
	uint8_t x255 = UINT8_MAX;
	static int64_t x256 = INT64_MIN;

    t63 = ((x253&(x254&x255))<=x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint8_t x257 = 2U;
	volatile int64_t x259 = INT64_MIN;
	int16_t x260 = INT16_MIN;
	volatile int32_t t64 = -969212;

    t64 = ((x257&(x258&x259))<=x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = 1;
	uint16_t x262 = 1U;
	static volatile uint32_t x263 = 6U;
	volatile uint8_t x264 = UINT8_MAX;
	int32_t t65 = 22;

    t65 = ((x261&(x262&x263))<=x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x265 = 31LLU;
	static uint16_t x266 = 6U;
	int8_t x267 = INT8_MIN;
	int32_t t66 = -5532;

    t66 = ((x265&(x266&x267))<=x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = INT64_MIN;
	static int8_t x270 = INT8_MIN;
	static volatile int16_t x271 = INT16_MIN;
	int16_t x272 = INT16_MIN;
	int32_t t67 = 1;

    t67 = ((x269&(x270&x271))<=x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x273 = INT32_MIN;
	static uint16_t x274 = UINT16_MAX;
	static int16_t x275 = INT16_MAX;
	uint8_t x276 = 0U;
	volatile int32_t t68 = 2;

    t68 = ((x273&(x274&x275))<=x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x277 = 1868LLU;
	volatile uint64_t x278 = UINT64_MAX;
	volatile int32_t t69 = -16644;

    t69 = ((x277&(x278&x279))<=x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint16_t x281 = 6539U;
	static uint64_t x283 = UINT64_MAX;
	volatile int8_t x284 = 1;
	volatile int32_t t70 = -26;

    t70 = ((x281&(x282&x283))<=x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = INT32_MIN;
	int8_t x286 = INT8_MAX;
	uint64_t x287 = UINT64_MAX;
	volatile int32_t x288 = INT32_MIN;
	volatile int32_t t71 = 320603;

    t71 = ((x285&(x286&x287))<=x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x290 = INT16_MIN;
	int8_t x291 = INT8_MIN;
	static int32_t x292 = -78607474;
	static int32_t t72 = 100932;

    t72 = ((x289&(x290&x291))<=x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x293 = UINT32_MAX;
	uint64_t x296 = 22904242LLU;
	volatile int32_t t73 = -3278684;

    t73 = ((x293&(x294&x295))<=x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x297 = INT16_MAX;
	static int16_t x298 = INT16_MAX;
	volatile int64_t x299 = 15026642LL;
	int32_t x300 = INT32_MIN;

    t74 = ((x297&(x298&x299))<=x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x301 = 2U;
	static uint32_t x302 = UINT32_MAX;
	uint8_t x303 = UINT8_MAX;
	volatile uint64_t x304 = UINT64_MAX;
	int32_t t75 = -19973;

    t75 = ((x301&(x302&x303))<=x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x305 = INT8_MIN;
	static int64_t x306 = INT64_MIN;
	static uint32_t x307 = 1069581178U;
	int8_t x308 = -5;
	int32_t t76 = 119840;

    t76 = ((x305&(x306&x307))<=x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x310 = -1;
	int8_t x311 = -46;
	int16_t x312 = 16;
	static int32_t t77 = -4311;

    t77 = ((x309&(x310&x311))<=x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint8_t x313 = 1U;
	static uint8_t x314 = 7U;
	volatile int8_t x316 = 3;
	volatile int32_t t78 = 102568980;

    t78 = ((x313&(x314&x315))<=x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x317 = -45588;
	uint32_t x318 = 1185U;
	int16_t x319 = INT16_MIN;
	volatile int32_t t79 = -7;

    t79 = ((x317&(x318&x319))<=x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x322 = INT8_MIN;
	int64_t x323 = INT64_MIN;
	uint8_t x324 = 0U;
	int32_t t80 = -157461104;

    t80 = ((x321&(x322&x323))<=x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x325 = INT16_MAX;
	int8_t x326 = -7;
	volatile int16_t x327 = INT16_MIN;
	int8_t x328 = INT8_MIN;
	int32_t t81 = 3;

    t81 = ((x325&(x326&x327))<=x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x329 = INT32_MIN;
	uint16_t x330 = 99U;
	static int64_t x332 = -1LL;

    t82 = ((x329&(x330&x331))<=x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x333 = INT32_MIN;
	int32_t x334 = INT32_MIN;
	int64_t x335 = INT64_MAX;
	int32_t x336 = INT32_MAX;

    t83 = ((x333&(x334&x335))<=x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x338 = INT16_MIN;
	volatile uint32_t x339 = UINT32_MAX;
	volatile uint64_t x340 = 4908LLU;
	int32_t t84 = 54;

    t84 = ((x337&(x338&x339))<=x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x341 = INT16_MIN;
	static uint64_t x342 = 467501LLU;
	int8_t x344 = INT8_MAX;

    t85 = ((x341&(x342&x343))<=x344);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x345 = UINT8_MAX;
	uint8_t x347 = 29U;
	int32_t t86 = -178010456;

    t86 = ((x345&(x346&x347))<=x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int64_t x349 = -1LL;
	int32_t x350 = INT32_MIN;
	uint64_t x351 = UINT64_MAX;
	static int16_t x352 = INT16_MAX;
	int32_t t87 = 1;

    t87 = ((x349&(x350&x351))<=x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x353 = INT64_MAX;
	int64_t x355 = INT64_MIN;
	uint16_t x356 = UINT16_MAX;
	volatile int32_t t88 = -7;

    t88 = ((x353&(x354&x355))<=x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x358 = INT64_MIN;
	int16_t x359 = -1;
	int16_t x360 = -1;

    t89 = ((x357&(x358&x359))<=x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint32_t x361 = 10U;
	uint16_t x362 = 11134U;
	int8_t x364 = INT8_MIN;

    t90 = ((x361&(x362&x363))<=x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x365 = 0;
	volatile int16_t x366 = 744;
	int16_t x367 = -99;
	static int8_t x368 = INT8_MIN;
	volatile int32_t t91 = -10;

    t91 = ((x365&(x366&x367))<=x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x370 = -1LL;
	uint8_t x371 = UINT8_MAX;
	static uint16_t x372 = UINT16_MAX;

    t92 = ((x369&(x370&x371))<=x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x373 = 2542U;
	uint16_t x374 = 689U;
	int32_t x376 = -38;
	volatile int32_t t93 = -39;

    t93 = ((x373&(x374&x375))<=x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x378 = 11U;
	static int8_t x379 = INT8_MAX;
	int64_t x380 = -1LL;

    t94 = ((x377&(x378&x379))<=x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint64_t x381 = 6892559546030LLU;
	static int64_t x382 = 665667544125LL;
	uint64_t x383 = UINT64_MAX;
	int32_t x384 = INT32_MAX;
	volatile int32_t t95 = -255939;

    t95 = ((x381&(x382&x383))<=x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x385 = -1650;
	uint8_t x386 = UINT8_MAX;
	volatile int32_t t96 = 1465185;

    t96 = ((x385&(x386&x387))<=x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x389 = INT8_MIN;
	int8_t x390 = INT8_MIN;
	static uint32_t x391 = 4U;
	volatile int32_t t97 = 3674227;

    t97 = ((x389&(x390&x391))<=x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = -1;
	static volatile uint8_t x394 = UINT8_MAX;
	int32_t x395 = INT32_MIN;
	int64_t x396 = 3807118LL;
	volatile int32_t t98 = -226;

    t98 = ((x393&(x394&x395))<=x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x397 = INT16_MIN;
	int16_t x398 = INT16_MIN;
	uint32_t x399 = 4063246U;
	int32_t x400 = INT32_MAX;
	static int32_t t99 = -7278638;

    t99 = ((x397&(x398&x399))<=x400);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x401 = 8U;
	int64_t x402 = INT64_MAX;
	volatile int32_t t100 = -45;

    t100 = ((x401&(x402&x403))<=x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = -1;
	int16_t x406 = -59;
	volatile uint16_t x407 = UINT16_MAX;
	int16_t x408 = -2;
	volatile int32_t t101 = 35;

    t101 = ((x405&(x406&x407))<=x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x409 = INT16_MIN;
	int8_t x410 = INT8_MIN;
	volatile uint8_t x411 = 30U;
	int32_t x412 = INT32_MIN;

    t102 = ((x409&(x410&x411))<=x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x413 = 231188561;
	uint32_t x414 = UINT32_MAX;
	volatile uint8_t x415 = 3U;
	int16_t x416 = 1;
	volatile int32_t t103 = 6427082;

    t103 = ((x413&(x414&x415))<=x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x417 = INT8_MIN;
	uint16_t x418 = UINT16_MAX;
	uint16_t x419 = UINT16_MAX;
	volatile int32_t t104 = -3738;

    t104 = ((x417&(x418&x419))<=x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x421 = -456331807;
	int64_t x422 = INT64_MIN;
	int32_t x423 = 47479932;
	static volatile int16_t x424 = INT16_MIN;
	volatile int32_t t105 = -335;

    t105 = ((x421&(x422&x423))<=x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x425 = -1;
	uint8_t x427 = 115U;
	static uint16_t x428 = 254U;
	static volatile int32_t t106 = -28655;

    t106 = ((x425&(x426&x427))<=x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int32_t x429 = -1;
	int8_t x430 = -1;
	int64_t x431 = -54594LL;
	volatile int16_t x432 = INT16_MIN;
	int32_t t107 = -1582282;

    t107 = ((x429&(x430&x431))<=x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x434 = -60;
	uint16_t x436 = 44U;
	int32_t t108 = -1234539;

    t108 = ((x433&(x434&x435))<=x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x437 = -231;
	static int8_t x438 = INT8_MIN;
	int64_t x439 = INT64_MAX;
	int32_t x440 = -1;
	static volatile int32_t t109 = 1629;

    t109 = ((x437&(x438&x439))<=x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x442 = 1U;
	uint8_t x444 = UINT8_MAX;

    t110 = ((x441&(x442&x443))<=x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x445 = INT8_MAX;
	int64_t x446 = INT64_MIN;
	static uint16_t x448 = UINT16_MAX;

    t111 = ((x445&(x446&x447))<=x448);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int16_t x449 = -1;
	volatile int64_t x450 = 5615959139748LL;
	int16_t x451 = INT16_MIN;
	static int32_t t112 = 19903482;

    t112 = ((x449&(x450&x451))<=x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int32_t x453 = INT32_MIN;
	int16_t x455 = INT16_MAX;
	uint32_t x456 = 57138U;
	int32_t t113 = -813745;

    t113 = ((x453&(x454&x455))<=x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x457 = 13858U;
	static int64_t x458 = 6515930273937328LL;
	static uint64_t x459 = 136255LLU;
	volatile int64_t x460 = INT64_MIN;
	static int32_t t114 = -22;

    t114 = ((x457&(x458&x459))<=x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x461 = -1;
	static uint32_t x462 = 3U;
	uint64_t x463 = 1724762113654LLU;
	static uint64_t x464 = 153605LLU;
	int32_t t115 = 105298;

    t115 = ((x461&(x462&x463))<=x464);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x467 = 410;
	int16_t x468 = INT16_MAX;
	int32_t t116 = -28817117;

    t116 = ((x465&(x466&x467))<=x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x469 = INT32_MAX;
	int32_t x470 = INT32_MIN;
	static int32_t x471 = -5;
	int32_t t117 = -2206;

    t117 = ((x469&(x470&x471))<=x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint64_t x473 = 1553LLU;
	static int64_t x474 = 8LL;
	uint32_t x475 = 7206454U;
	uint64_t x476 = UINT64_MAX;
	volatile int32_t t118 = 409541;

    t118 = ((x473&(x474&x475))<=x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x477 = INT8_MAX;
	int16_t x478 = -1;
	uint32_t x479 = 6567U;
	volatile int32_t t119 = -1001210;

    t119 = ((x477&(x478&x479))<=x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x481 = UINT32_MAX;
	uint64_t x482 = 32613975LLU;
	int16_t x483 = INT16_MIN;
	volatile int8_t x484 = INT8_MIN;
	volatile int32_t t120 = -38267;

    t120 = ((x481&(x482&x483))<=x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x486 = 1;
	uint16_t x487 = UINT16_MAX;

    t121 = ((x485&(x486&x487))<=x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x490 = 3205LL;
	static int32_t x491 = INT32_MIN;
	uint8_t x492 = 1U;
	static int32_t t122 = -33258328;

    t122 = ((x489&(x490&x491))<=x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x493 = 32;
	static int32_t x494 = 1;
	static uint8_t x496 = 2U;

    t123 = ((x493&(x494&x495))<=x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x497 = INT16_MIN;
	int32_t x498 = -61;
	uint32_t x499 = UINT32_MAX;
	volatile int16_t x500 = 10210;
	volatile int32_t t124 = -480;

    t124 = ((x497&(x498&x499))<=x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x501 = -36;
	int64_t x502 = -491358026267LL;
	int32_t x503 = -395777873;
	static int32_t t125 = -19842;

    t125 = ((x501&(x502&x503))<=x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x505 = -1;
	uint64_t x506 = 184LLU;
	int8_t x507 = -1;
	int32_t t126 = 488511;

    t126 = ((x505&(x506&x507))<=x508);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint32_t x511 = UINT32_MAX;
	int8_t x512 = -5;
	int32_t t127 = -14217;

    t127 = ((x509&(x510&x511))<=x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x513 = INT64_MIN;
	int32_t x514 = INT32_MIN;
	int64_t x515 = 921913517356LL;
	uint32_t x516 = UINT32_MAX;

    t128 = ((x513&(x514&x515))<=x516);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x517 = UINT64_MAX;
	volatile int64_t x518 = INT64_MIN;
	uint32_t x519 = 2416022U;
	volatile uint8_t x520 = 13U;
	static volatile int32_t t129 = 28;

    t129 = ((x517&(x518&x519))<=x520);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x522 = 41177265973086915LL;
	uint64_t x523 = 396LLU;
	uint32_t x524 = 10376U;
	static int32_t t130 = 470080333;

    t130 = ((x521&(x522&x523))<=x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x525 = UINT8_MAX;
	uint32_t x528 = UINT32_MAX;
	int32_t t131 = 1103347;

    t131 = ((x525&(x526&x527))<=x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x529 = 389U;
	static int64_t x530 = -2408130534023544615LL;
	static volatile uint16_t x531 = 11U;
	static int32_t x532 = -1;
	volatile int32_t t132 = -1774954;

    t132 = ((x529&(x530&x531))<=x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x533 = 471LL;
	int8_t x534 = 20;
	int32_t t133 = 806585278;

    t133 = ((x533&(x534&x535))<=x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x537 = 29130778447533LL;
	uint64_t x538 = 41307130176272642LLU;
	uint32_t x540 = 7327U;
	static volatile int32_t t134 = -28476;

    t134 = ((x537&(x538&x539))<=x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x541 = INT8_MAX;
	int32_t x542 = -1;
	int8_t x543 = 9;
	uint8_t x544 = 1U;
	int32_t t135 = -1;

    t135 = ((x541&(x542&x543))<=x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint32_t x545 = 28794U;
	int64_t x546 = 127351257701371LL;
	int32_t t136 = 1;

    t136 = ((x545&(x546&x547))<=x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static int32_t x550 = INT32_MIN;
	int32_t x551 = INT32_MIN;
	uint16_t x552 = 13977U;
	volatile int32_t t137 = -8498;

    t137 = ((x549&(x550&x551))<=x552);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint64_t x553 = UINT64_MAX;
	uint8_t x554 = UINT8_MAX;
	int32_t x555 = INT32_MAX;
	int32_t x556 = INT32_MIN;
	static volatile int32_t t138 = 2;

    t138 = ((x553&(x554&x555))<=x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x557 = INT8_MIN;
	uint16_t x558 = 10523U;
	volatile int8_t x559 = INT8_MIN;
	volatile int32_t t139 = 973370621;

    t139 = ((x557&(x558&x559))<=x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x561 = 2329;
	static volatile uint64_t x562 = UINT64_MAX;
	uint64_t x563 = UINT64_MAX;
	uint32_t x564 = UINT32_MAX;

    t140 = ((x561&(x562&x563))<=x564);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile uint64_t x565 = UINT64_MAX;
	int16_t x566 = INT16_MAX;
	uint8_t x567 = UINT8_MAX;
	uint64_t x568 = 44558011LLU;
	static volatile int32_t t141 = 468741;

    t141 = ((x565&(x566&x567))<=x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x569 = INT32_MAX;
	uint32_t x570 = UINT32_MAX;
	volatile int32_t x571 = INT32_MIN;
	int32_t t142 = 61505;

    t142 = ((x569&(x570&x571))<=x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x573 = 7355569;
	uint8_t x574 = 9U;
	int64_t x575 = -1LL;
	volatile uint8_t x576 = 0U;
	volatile int32_t t143 = 4501173;

    t143 = ((x573&(x574&x575))<=x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x578 = INT32_MIN;
	int32_t x579 = 201350;

    t144 = ((x577&(x578&x579))<=x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static int64_t x581 = 57134498086319429LL;
	uint32_t x582 = UINT32_MAX;
	uint64_t x583 = UINT64_MAX;
	uint64_t x584 = 1LLU;
	int32_t t145 = 115;

    t145 = ((x581&(x582&x583))<=x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x585 = 122U;
	uint64_t x586 = UINT64_MAX;
	volatile int64_t x587 = -3775470080LL;
	volatile int16_t x588 = 77;
	volatile int32_t t146 = -37;

    t146 = ((x585&(x586&x587))<=x588);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x589 = INT32_MIN;
	int16_t x590 = INT16_MIN;
	int16_t x591 = -1;
	static int8_t x592 = INT8_MAX;

    t147 = ((x589&(x590&x591))<=x592);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x593 = INT32_MIN;
	uint16_t x594 = 0U;
	int32_t x595 = INT32_MIN;
	int16_t x596 = -1;
	volatile int32_t t148 = 142;

    t148 = ((x593&(x594&x595))<=x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int64_t x598 = -1LL;
	int16_t x599 = 128;
	static int8_t x600 = -1;

    t149 = ((x597&(x598&x599))<=x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint16_t x601 = UINT16_MAX;
	static int8_t x602 = INT8_MAX;
	volatile int16_t x603 = INT16_MIN;
	static int32_t t150 = -2635773;

    t150 = ((x601&(x602&x603))<=x604);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x605 = INT16_MAX;
	static volatile int64_t x606 = INT64_MAX;
	uint8_t x607 = UINT8_MAX;
	int8_t x608 = INT8_MAX;
	int32_t t151 = 106636;

    t151 = ((x605&(x606&x607))<=x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x609 = -14;
	int16_t x610 = INT16_MAX;
	static volatile int32_t t152 = 9302924;

    t152 = ((x609&(x610&x611))<=x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint32_t x613 = 252063U;
	int8_t x614 = INT8_MIN;
	int32_t x616 = INT32_MIN;

    t153 = ((x613&(x614&x615))<=x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x617 = UINT64_MAX;
	int16_t x618 = 3409;
	uint8_t x619 = UINT8_MAX;
	int16_t x620 = INT16_MIN;
	volatile int32_t t154 = 93;

    t154 = ((x617&(x618&x619))<=x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x621 = INT64_MIN;
	volatile int64_t x622 = 126274LL;
	int8_t x623 = 1;
	uint8_t x624 = 0U;

    t155 = ((x621&(x622&x623))<=x624);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x625 = INT32_MIN;
	static uint16_t x626 = 245U;
	uint16_t x627 = 200U;
	int32_t t156 = 1;

    t156 = ((x625&(x626&x627))<=x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x629 = 1U;
	uint16_t x630 = 758U;
	int64_t x632 = INT64_MIN;
	int32_t t157 = 154;

    t157 = ((x629&(x630&x631))<=x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint8_t x633 = 2U;
	volatile int64_t x634 = INT64_MIN;
	int16_t x635 = 4;
	int32_t t158 = -98687;

    t158 = ((x633&(x634&x635))<=x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x637 = UINT16_MAX;
	uint16_t x638 = 1288U;
	static int16_t x639 = -1;

    t159 = ((x637&(x638&x639))<=x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x642 = INT64_MIN;
	int32_t x643 = -85;
	uint64_t x644 = 7306231065623LLU;

    t160 = ((x641&(x642&x643))<=x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x646 = INT32_MIN;
	static int64_t x647 = 595400186LL;
	int32_t x648 = 14149;
	int32_t t161 = 11686453;

    t161 = ((x645&(x646&x647))<=x648);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x649 = 28U;
	uint8_t x650 = 0U;
	int8_t x651 = INT8_MIN;
	volatile int32_t t162 = 304344;

    t162 = ((x649&(x650&x651))<=x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x653 = -6;
	uint16_t x654 = 26471U;
	int32_t x655 = INT32_MIN;
	volatile uint16_t x656 = 10U;
	int32_t t163 = -60308;

    t163 = ((x653&(x654&x655))<=x656);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x658 = INT32_MAX;
	int16_t x659 = -1;
	static int8_t x660 = 1;
	int32_t t164 = 11570326;

    t164 = ((x657&(x658&x659))<=x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x661 = -1;
	volatile int16_t x662 = -1;
	int32_t x664 = INT32_MIN;
	volatile int32_t t165 = 107377597;

    t165 = ((x661&(x662&x663))<=x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x666 = INT64_MIN;
	int64_t x668 = -1LL;
	int32_t t166 = -19223;

    t166 = ((x665&(x666&x667))<=x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x669 = INT16_MAX;
	static int8_t x670 = -21;
	int8_t x671 = -1;
	uint32_t x672 = UINT32_MAX;

    t167 = ((x669&(x670&x671))<=x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x673 = 14465U;
	int64_t x674 = -1LL;
	static int32_t x675 = INT32_MIN;
	static uint8_t x676 = 2U;

    t168 = ((x673&(x674&x675))<=x676);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x677 = 1428;
	static int8_t x679 = INT8_MIN;
	int32_t x680 = -1;
	int32_t t169 = 453442491;

    t169 = ((x677&(x678&x679))<=x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint64_t x681 = 57LLU;
	int32_t x682 = INT32_MIN;
	uint32_t x684 = 80U;
	int32_t t170 = -4;

    t170 = ((x681&(x682&x683))<=x684);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x686 = -19;
	uint32_t x687 = 1240723563U;
	int8_t x688 = -1;

    t171 = ((x685&(x686&x687))<=x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x689 = -22620277166873445LL;
	int16_t x690 = -18;
	int32_t x691 = INT32_MIN;
	int16_t x692 = INT16_MIN;
	static int32_t t172 = 328632171;

    t172 = ((x689&(x690&x691))<=x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x693 = INT64_MIN;
	uint64_t x694 = 731863420733260LLU;
	static uint64_t x695 = 14086LLU;
	volatile uint8_t x696 = 32U;

    t173 = ((x693&(x694&x695))<=x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x697 = INT32_MIN;
	int16_t x700 = -1;
	volatile int32_t t174 = 3;

    t174 = ((x697&(x698&x699))<=x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint32_t x701 = 52953194U;
	volatile uint16_t x702 = 1U;
	int32_t x703 = INT32_MAX;
	static int32_t x704 = -1;
	volatile int32_t t175 = -7995;

    t175 = ((x701&(x702&x703))<=x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint16_t x705 = UINT16_MAX;
	uint16_t x706 = UINT16_MAX;
	int64_t x707 = INT64_MIN;
	int16_t x708 = 1;
	volatile int32_t t176 = -21;

    t176 = ((x705&(x706&x707))<=x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x709 = INT32_MAX;
	uint32_t x712 = UINT32_MAX;
	volatile int32_t t177 = 143572480;

    t177 = ((x709&(x710&x711))<=x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x714 = INT16_MAX;
	int8_t x715 = INT8_MAX;
	int32_t x716 = INT32_MAX;

    t178 = ((x713&(x714&x715))<=x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x717 = INT8_MAX;
	int16_t x718 = 161;
	volatile int32_t x719 = INT32_MIN;
	volatile int8_t x720 = INT8_MIN;
	int32_t t179 = 6782341;

    t179 = ((x717&(x718&x719))<=x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x722 = INT32_MAX;
	int16_t x723 = 3;
	volatile int32_t t180 = 37;

    t180 = ((x721&(x722&x723))<=x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x725 = -1LL;
	static volatile int32_t t181 = -3521544;

    t181 = ((x725&(x726&x727))<=x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x729 = INT16_MIN;
	static uint32_t x730 = 0U;
	int32_t x731 = -1;

    t182 = ((x729&(x730&x731))<=x732);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int32_t x733 = INT32_MIN;
	volatile int32_t x734 = INT32_MIN;
	uint64_t x735 = UINT64_MAX;
	static uint8_t x736 = 0U;

    t183 = ((x733&(x734&x735))<=x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x738 = INT32_MAX;
	int16_t x740 = INT16_MAX;
	int32_t t184 = 1;

    t184 = ((x737&(x738&x739))<=x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x741 = INT64_MAX;
	int8_t x743 = -1;

    t185 = ((x741&(x742&x743))<=x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint32_t x746 = 23U;
	volatile int16_t x747 = 0;
	int8_t x748 = -10;
	int32_t t186 = -105047548;

    t186 = ((x745&(x746&x747))<=x748);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int8_t x749 = -1;
	int64_t x750 = 1LL;
	static uint64_t x751 = 530324735571023LLU;
	uint8_t x752 = UINT8_MAX;

    t187 = ((x749&(x750&x751))<=x752);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x754 = 0;
	int8_t x755 = INT8_MIN;
	uint32_t x756 = UINT32_MAX;

    t188 = ((x753&(x754&x755))<=x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x757 = 1601168LLU;
	static volatile uint32_t x758 = 0U;
	uint64_t x759 = UINT64_MAX;
	int8_t x760 = -1;

    t189 = ((x757&(x758&x759))<=x760);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint8_t x761 = 3U;
	static volatile int16_t x762 = 27;
	int8_t x763 = INT8_MAX;
	uint64_t x764 = 3448938LLU;
	static volatile int32_t t190 = 436146;

    t190 = ((x761&(x762&x763))<=x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint32_t x765 = 178U;
	int8_t x767 = INT8_MIN;
	int64_t x768 = INT64_MIN;
	static int32_t t191 = 50;

    t191 = ((x765&(x766&x767))<=x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint16_t x769 = 3U;
	int64_t x770 = INT64_MIN;
	uint64_t x771 = 8252557147762172484LLU;
	static volatile uint16_t x772 = 1538U;

    t192 = ((x769&(x770&x771))<=x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x773 = 2U;
	int16_t x775 = INT16_MAX;
	int16_t x776 = -7;
	int32_t t193 = -15611879;

    t193 = ((x773&(x774&x775))<=x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x777 = 978056878472628425LL;
	volatile int32_t x778 = 0;
	int32_t t194 = 427301;

    t194 = ((x777&(x778&x779))<=x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint8_t x782 = UINT8_MAX;
	static int8_t x783 = INT8_MAX;
	uint32_t x784 = UINT32_MAX;
	volatile int32_t t195 = 788;

    t195 = ((x781&(x782&x783))<=x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int16_t x785 = INT16_MIN;
	uint16_t x788 = 52U;
	volatile int32_t t196 = -1;

    t196 = ((x785&(x786&x787))<=x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint32_t x789 = UINT32_MAX;
	int32_t x790 = INT32_MIN;
	static uint8_t x791 = 1U;

    t197 = ((x789&(x790&x791))<=x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x794 = -1;
	static int16_t x795 = 215;
	uint32_t x796 = 23814732U;
	static volatile int32_t t198 = -5047;

    t198 = ((x793&(x794&x795))<=x796);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x798 = 1U;
	int16_t x799 = INT16_MAX;
	int32_t x800 = INT32_MIN;
	volatile int32_t t199 = 12852470;

    t199 = ((x797&(x798&x799))<=x800);

    if (t199 != 0) { NG(); } else { ; }
	
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

