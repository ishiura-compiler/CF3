
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

static volatile int32_t x2 = 260091;
uint64_t x6 = 73118983LLU;
int8_t x7 = -1;
int8_t x8 = INT8_MAX;
int64_t x16 = -1LL;
int16_t x20 = -15690;
uint64_t x22 = 282382LLU;
uint16_t x23 = 868U;
volatile int32_t t7 = 29734;
int32_t t10 = -252762677;
uint8_t x50 = 3U;
uint64_t x52 = UINT64_MAX;
static int8_t x54 = 2;
uint16_t x55 = 354U;
int64_t x60 = 59194274LL;
int64_t x62 = 80LL;
int64_t x63 = -1LL;
volatile int32_t t15 = 370;
uint8_t x71 = 2U;
uint8_t x78 = 47U;
uint64_t x79 = 6162788510552LLU;
volatile int8_t x84 = 11;
int32_t t20 = 206679;
int32_t t21 = -112757;
volatile int32_t x90 = INT32_MAX;
int32_t x92 = INT32_MAX;
static int32_t t22 = -97015358;
int16_t x94 = 2;
volatile int32_t t23 = 32388;
volatile int16_t x101 = 14045;
int8_t x102 = -22;
static int64_t x104 = INT64_MIN;
uint64_t x112 = 73644002774804951LLU;
int16_t x117 = INT16_MIN;
uint16_t x126 = UINT16_MAX;
volatile int32_t x128 = INT32_MIN;
int32_t t30 = -60878;
volatile int16_t x129 = INT16_MIN;
int16_t x130 = INT16_MIN;
volatile uint32_t x133 = UINT32_MAX;
static int16_t x135 = INT16_MIN;
static volatile int32_t t32 = -69351068;
volatile int64_t x137 = INT64_MIN;
static int64_t x146 = -4010LL;
volatile int16_t x149 = -104;
static int64_t x151 = -1LL;
int32_t x153 = INT32_MIN;
static uint32_t x160 = 990686U;
int8_t x168 = -3;
int8_t x174 = INT8_MIN;
volatile int32_t x179 = INT32_MAX;
int32_t x180 = -1;
int16_t x182 = INT16_MIN;
volatile int32_t t44 = 3;
static int32_t x185 = INT32_MAX;
int32_t x189 = 11191;
uint32_t x190 = 204297310U;
static uint16_t x197 = UINT16_MAX;
volatile int32_t t48 = 7446062;
static volatile int32_t x208 = -1110;
static volatile int32_t t50 = -3455890;
int64_t x209 = INT64_MAX;
static volatile int64_t x212 = INT64_MAX;
volatile int32_t t52 = 0;
int32_t x218 = 214559805;
volatile int32_t t53 = -7370323;
int8_t x224 = -1;
static int32_t t55 = -296259118;
int8_t x233 = INT8_MIN;
static int64_t x235 = -54924805221718LL;
uint8_t x236 = 16U;
int64_t x237 = -131370427LL;
uint8_t x242 = 7U;
int64_t x243 = 232537LL;
uint32_t x244 = 58637238U;
static uint64_t x245 = 429478590259LLU;
int32_t x257 = INT32_MAX;
static int64_t x265 = 246787049429875LL;
volatile uint32_t x271 = 5U;
int64_t x276 = -1LL;
int16_t x279 = INT16_MIN;
static int8_t x281 = INT8_MIN;
volatile int64_t x282 = INT64_MIN;
int16_t x284 = INT16_MIN;
int32_t t69 = 26082227;
int32_t x288 = -1;
static int32_t t70 = 338543997;
uint16_t x295 = 52U;
int16_t x296 = -1;
volatile int32_t t72 = -926554;
static int8_t x307 = INT8_MAX;
volatile int32_t t75 = -45236988;
static int32_t t77 = -15359120;
int32_t x322 = INT32_MIN;
int8_t x327 = INT8_MIN;
int16_t x331 = -1;
uint16_t x332 = UINT16_MAX;
static int32_t x334 = 2156;
volatile int32_t t82 = 1;
uint16_t x351 = 1778U;
int8_t x377 = -1;
int8_t x391 = INT8_MIN;
static int8_t x392 = -3;
int64_t x394 = INT64_MIN;
static int32_t t96 = 3228;
int64_t x399 = -1LL;
int32_t x402 = INT32_MAX;
uint32_t x404 = 32058U;
int32_t t98 = -92247388;
uint32_t x405 = 18U;
int32_t x422 = -217353985;
int64_t x425 = INT64_MAX;
int8_t x428 = INT8_MIN;
int32_t x429 = INT32_MIN;
uint64_t x431 = UINT64_MAX;
volatile int8_t x435 = -1;
volatile int16_t x440 = -110;
static int32_t t107 = -310451473;
int16_t x441 = 62;
static volatile uint32_t x444 = 228U;
int64_t x445 = -3760LL;
volatile int32_t t109 = 520660;
static uint32_t x458 = 389618U;
int32_t t113 = 980;
int8_t x470 = INT8_MAX;
static int16_t x472 = 0;
uint64_t x479 = UINT64_MAX;
static int8_t x487 = 30;
static int32_t x488 = INT32_MIN;
int16_t x492 = INT16_MAX;
int64_t x501 = INT64_MAX;
uint8_t x505 = 1U;
int32_t t124 = 32;
int32_t x510 = 112356983;
static int64_t x514 = 0LL;
uint32_t x515 = 3277U;
uint32_t x522 = UINT32_MAX;
volatile int16_t x525 = -3165;
int8_t x535 = -27;
volatile int64_t x538 = INT64_MAX;
uint64_t x539 = 86198218LLU;
static uint64_t x543 = 12477683894306LLU;
int8_t x563 = INT8_MIN;
uint16_t x573 = 0U;
int8_t x575 = INT8_MAX;
volatile int8_t x576 = INT8_MIN;
int8_t x579 = INT8_MIN;
int32_t t143 = -74856;
static int64_t x597 = -988679750413765826LL;
volatile uint8_t x598 = 60U;
int16_t x601 = -1;
int32_t x602 = -521386;
int32_t t148 = 3;
int16_t x605 = INT16_MIN;
static uint64_t x610 = 9341249LLU;
int64_t x611 = -498141409LL;
int64_t x615 = 5116551913599386LL;
volatile int32_t t151 = 0;
volatile uint32_t x623 = 413U;
int32_t t153 = 1047069793;
volatile int8_t x625 = -1;
int8_t x633 = INT8_MIN;
uint16_t x635 = 20U;
int16_t x645 = INT16_MAX;
volatile int32_t t159 = 14;
volatile int32_t t160 = 145;
volatile int32_t t162 = -24956742;
static int32_t t163 = -31;
uint16_t x668 = UINT16_MAX;
static volatile int16_t x680 = INT16_MIN;
int16_t x690 = -1;
int32_t x693 = INT32_MIN;
static uint32_t x696 = UINT32_MAX;
volatile int16_t x698 = INT16_MAX;
static int16_t x702 = INT16_MIN;
volatile uint8_t x709 = 45U;
uint16_t x711 = 9387U;
uint8_t x720 = 7U;
int64_t x725 = INT64_MIN;
volatile uint16_t x738 = UINT16_MAX;
static volatile int32_t t182 = 1942;
uint64_t x744 = 6582054LLU;
int32_t t184 = -623109274;
int32_t t185 = -900290534;
int32_t t186 = 1;
uint64_t x764 = 831458LLU;
int64_t x771 = INT64_MAX;
static volatile int32_t t191 = 6467303;
static int64_t x777 = -1LL;
static int32_t t193 = 1470288;
static int32_t x789 = INT32_MAX;
int16_t x791 = INT16_MIN;
static int32_t t195 = -14249919;
int64_t x795 = -1LL;
volatile int32_t x799 = INT32_MIN;
int64_t x803 = -1LL;
int16_t x804 = -1;


void f0(void) {
    	uint32_t x1 = 124734947U;
	uint8_t x3 = UINT8_MAX;
	static int64_t x4 = -1LL;
	volatile int32_t t0 = 307924;

    t0 = ((x1>(x2%x3))>x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = UINT64_MAX;
	static volatile int32_t t1 = -96;

    t1 = ((x5>(x6%x7))>x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MIN;
	int32_t x10 = INT32_MAX;
	volatile int32_t x11 = -1;
	static volatile uint32_t x12 = 258323036U;
	int32_t t2 = 927;

    t2 = ((x9>(x10%x11))>x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x13 = 1;
	static int32_t x14 = INT32_MAX;
	int64_t x15 = INT64_MAX;
	int32_t t3 = -465920916;

    t3 = ((x13>(x14%x15))>x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint32_t x17 = 11105U;
	int16_t x18 = -1;
	int64_t x19 = -1LL;
	int32_t t4 = 1;

    t4 = ((x17>(x18%x19))>x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = -1LL;
	int32_t x24 = INT32_MAX;
	int32_t t5 = 101017481;

    t5 = ((x21>(x22%x23))>x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = INT16_MIN;
	volatile int32_t x26 = 260;
	int32_t x27 = INT32_MIN;
	int16_t x28 = 110;
	int32_t t6 = 10;

    t6 = ((x25>(x26%x27))>x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int64_t x29 = 528970353964787421LL;
	int16_t x30 = -1;
	int64_t x31 = INT64_MAX;
	static int8_t x32 = INT8_MIN;

    t7 = ((x29>(x30%x31))>x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x33 = 83U;
	int64_t x34 = -1LL;
	static volatile int32_t x35 = -1;
	int32_t x36 = -3761;
	int32_t t8 = 16;

    t8 = ((x33>(x34%x35))>x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x37 = UINT64_MAX;
	uint32_t x38 = UINT32_MAX;
	int64_t x39 = INT64_MAX;
	volatile int64_t x40 = INT64_MAX;
	int32_t t9 = -19;

    t9 = ((x37>(x38%x39))>x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = -1LL;
	int64_t x42 = -76346021816460406LL;
	int16_t x43 = -64;
	int16_t x44 = -1;

    t10 = ((x41>(x42%x43))>x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = INT16_MAX;
	int64_t x46 = INT64_MAX;
	volatile uint8_t x47 = 16U;
	int64_t x48 = INT64_MAX;
	int32_t t11 = -2404996;

    t11 = ((x45>(x46%x47))>x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = -1;
	uint32_t x51 = UINT32_MAX;
	int32_t t12 = -1837308;

    t12 = ((x49>(x50%x51))>x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x53 = 4590U;
	static int64_t x56 = INT64_MIN;
	int32_t t13 = -27;

    t13 = ((x53>(x54%x55))>x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = 280;
	volatile int32_t x58 = INT32_MAX;
	int64_t x59 = 140LL;
	volatile int32_t t14 = -808802714;

    t14 = ((x57>(x58%x59))>x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x61 = UINT32_MAX;
	static volatile uint32_t x64 = UINT32_MAX;

    t15 = ((x61>(x62%x63))>x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint32_t x65 = 15U;
	static volatile int16_t x66 = INT16_MIN;
	static int32_t x67 = 1440086;
	int64_t x68 = 0LL;
	int32_t t16 = 5;

    t16 = ((x65>(x66%x67))>x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = INT16_MIN;
	int32_t x70 = INT32_MAX;
	uint32_t x72 = 4960U;
	static int32_t t17 = -12649;

    t17 = ((x69>(x70%x71))>x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x73 = 14U;
	volatile uint16_t x74 = UINT16_MAX;
	static int64_t x75 = INT64_MIN;
	volatile int64_t x76 = -2802582314445524813LL;
	volatile int32_t t18 = 1033413;

    t18 = ((x73>(x74%x75))>x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x77 = UINT32_MAX;
	volatile uint64_t x80 = 0LLU;
	volatile int32_t t19 = 1064;

    t19 = ((x77>(x78%x79))>x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = 1;
	int32_t x82 = INT32_MIN;
	int32_t x83 = -3653983;

    t20 = ((x81>(x82%x83))>x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile uint64_t x85 = 232161656LLU;
	static uint16_t x86 = 7U;
	volatile uint64_t x87 = 62934263LLU;
	static int16_t x88 = -15671;

    t21 = ((x85>(x86%x87))>x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x89 = 2966759776581468141LLU;
	int16_t x91 = -1;

    t22 = ((x89>(x90%x91))>x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint16_t x93 = 3U;
	static uint8_t x95 = 1U;
	int32_t x96 = 21794;

    t23 = ((x93>(x94%x95))>x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x97 = 2321212U;
	static int8_t x98 = INT8_MIN;
	static int16_t x99 = INT16_MIN;
	static volatile int16_t x100 = 2;
	int32_t t24 = 20;

    t24 = ((x97>(x98%x99))>x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile uint32_t x103 = 13072289U;
	int32_t t25 = 264981;

    t25 = ((x101>(x102%x103))>x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x105 = -1;
	uint8_t x106 = UINT8_MAX;
	int64_t x107 = -5LL;
	int32_t x108 = -325901;
	int32_t t26 = -857897;

    t26 = ((x105>(x106%x107))>x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x109 = 3341LLU;
	uint64_t x110 = 72198829LLU;
	static uint64_t x111 = 17LLU;
	int32_t t27 = 108;

    t27 = ((x109>(x110%x111))>x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = INT64_MIN;
	int8_t x114 = INT8_MIN;
	int16_t x115 = 10044;
	int16_t x116 = INT16_MIN;
	volatile int32_t t28 = -18;

    t28 = ((x113>(x114%x115))>x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x118 = INT32_MIN;
	int8_t x119 = 1;
	int8_t x120 = 0;
	volatile int32_t t29 = -207564960;

    t29 = ((x117>(x118%x119))>x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x125 = INT32_MAX;
	volatile int64_t x127 = INT64_MIN;

    t30 = ((x125>(x126%x127))>x128);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x131 = INT8_MAX;
	volatile uint8_t x132 = 14U;
	int32_t t31 = -42;

    t31 = ((x129>(x130%x131))>x132);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x134 = INT16_MAX;
	static int8_t x136 = 1;

    t32 = ((x133>(x134%x135))>x136);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x138 = 1000U;
	int16_t x139 = INT16_MIN;
	uint64_t x140 = 818780LLU;
	int32_t t33 = -3;

    t33 = ((x137>(x138%x139))>x140);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile uint64_t x141 = 1260LLU;
	volatile uint8_t x142 = 17U;
	int8_t x143 = INT8_MAX;
	uint32_t x144 = UINT32_MAX;
	int32_t t34 = -4018;

    t34 = ((x141>(x142%x143))>x144);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int64_t x145 = -1LL;
	int8_t x147 = -1;
	int32_t x148 = -1;
	static int32_t t35 = 1;

    t35 = ((x145>(x146%x147))>x148);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint64_t x150 = 9054947866754020001LLU;
	uint64_t x152 = 22LLU;
	static volatile int32_t t36 = -1;

    t36 = ((x149>(x150%x151))>x152);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int64_t x154 = 846754LL;
	static int8_t x155 = INT8_MAX;
	volatile int32_t x156 = 110;
	volatile int32_t t37 = -1;

    t37 = ((x153>(x154%x155))>x156);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x157 = -37533988589LL;
	uint8_t x158 = 7U;
	int32_t x159 = INT32_MIN;
	static volatile int32_t t38 = 14837;

    t38 = ((x157>(x158%x159))>x160);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x161 = -1;
	int8_t x162 = INT8_MIN;
	int8_t x163 = 1;
	uint16_t x164 = 3U;
	static volatile int32_t t39 = 41555598;

    t39 = ((x161>(x162%x163))>x164);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x165 = -1;
	int32_t x166 = 352;
	int32_t x167 = INT32_MAX;
	int32_t t40 = -13779;

    t40 = ((x165>(x166%x167))>x168);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x169 = INT64_MAX;
	int32_t x170 = INT32_MAX;
	int8_t x171 = 6;
	int8_t x172 = INT8_MIN;
	int32_t t41 = -3249767;

    t41 = ((x169>(x170%x171))>x172);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x173 = -1;
	int32_t x175 = INT32_MIN;
	int16_t x176 = -3;
	static int32_t t42 = 973;

    t42 = ((x173>(x174%x175))>x176);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint16_t x177 = 12U;
	int8_t x178 = INT8_MIN;
	int32_t t43 = -1;

    t43 = ((x177>(x178%x179))>x180);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x181 = 14;
	static int32_t x183 = 1593;
	uint8_t x184 = 14U;

    t44 = ((x181>(x182%x183))>x184);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int32_t x186 = INT32_MIN;
	int8_t x187 = INT8_MIN;
	int32_t x188 = INT32_MIN;
	volatile int32_t t45 = 945488;

    t45 = ((x185>(x186%x187))>x188);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint64_t x191 = 26242LLU;
	int64_t x192 = -1LL;
	volatile int32_t t46 = -150422469;

    t46 = ((x189>(x190%x191))>x192);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x193 = -1;
	uint32_t x194 = 10U;
	int16_t x195 = 1446;
	uint64_t x196 = 866428605415539LLU;
	volatile int32_t t47 = 1354;

    t47 = ((x193>(x194%x195))>x196);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x198 = INT8_MIN;
	static uint32_t x199 = UINT32_MAX;
	static int8_t x200 = INT8_MIN;

    t48 = ((x197>(x198%x199))>x200);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x201 = 47190898LLU;
	uint64_t x202 = UINT64_MAX;
	int64_t x203 = 268784LL;
	int32_t x204 = -1;
	static volatile int32_t t49 = 304020;

    t49 = ((x201>(x202%x203))>x204);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x205 = 24922441LL;
	volatile int8_t x206 = -1;
	int32_t x207 = -366;

    t50 = ((x205>(x206%x207))>x208);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x210 = UINT32_MAX;
	int64_t x211 = INT64_MAX;
	volatile int32_t t51 = 1;

    t51 = ((x209>(x210%x211))>x212);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int32_t x213 = INT32_MIN;
	int64_t x214 = -17465092548966LL;
	volatile int16_t x215 = -1;
	int64_t x216 = -1LL;

    t52 = ((x213>(x214%x215))>x216);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x217 = -40;
	int32_t x219 = 28011918;
	int32_t x220 = 71;

    t53 = ((x217>(x218%x219))>x220);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x221 = INT64_MIN;
	volatile int16_t x222 = INT16_MAX;
	uint8_t x223 = UINT8_MAX;
	volatile int32_t t54 = -117572366;

    t54 = ((x221>(x222%x223))>x224);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x225 = -1;
	static int8_t x226 = 1;
	int8_t x227 = INT8_MIN;
	int8_t x228 = INT8_MIN;

    t55 = ((x225>(x226%x227))>x228);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x229 = 1;
	volatile int8_t x230 = INT8_MIN;
	int8_t x231 = -1;
	int32_t x232 = -1;
	int32_t t56 = -2308;

    t56 = ((x229>(x230%x231))>x232);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x234 = 0U;
	int32_t t57 = -6903338;

    t57 = ((x233>(x234%x235))>x236);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x238 = 243567002;
	int8_t x239 = INT8_MAX;
	static int16_t x240 = -9052;
	volatile int32_t t58 = -110;

    t58 = ((x237>(x238%x239))>x240);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x241 = 1806U;
	static int32_t t59 = -2;

    t59 = ((x241>(x242%x243))>x244);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x246 = UINT64_MAX;
	static uint32_t x247 = UINT32_MAX;
	int64_t x248 = -7472777LL;
	volatile int32_t t60 = 60316999;

    t60 = ((x245>(x246%x247))>x248);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x249 = -2;
	volatile int8_t x250 = INT8_MIN;
	uint64_t x251 = 6LLU;
	uint64_t x252 = UINT64_MAX;
	int32_t t61 = -254399;

    t61 = ((x249>(x250%x251))>x252);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x253 = -9;
	uint32_t x254 = 25569U;
	static int64_t x255 = INT64_MIN;
	volatile uint16_t x256 = 2748U;
	int32_t t62 = 7;

    t62 = ((x253>(x254%x255))>x256);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x258 = -37;
	uint64_t x259 = UINT64_MAX;
	int64_t x260 = -787202183287155LL;
	int32_t t63 = -205;

    t63 = ((x257>(x258%x259))>x260);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile uint8_t x261 = 1U;
	uint8_t x262 = 30U;
	volatile int8_t x263 = -58;
	int16_t x264 = INT16_MAX;
	volatile int32_t t64 = 10539;

    t64 = ((x261>(x262%x263))>x264);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x266 = -1;
	volatile int64_t x267 = 979256534586663775LL;
	int64_t x268 = 69548276378187LL;
	int32_t t65 = 0;

    t65 = ((x265>(x266%x267))>x268);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x269 = 12173U;
	uint8_t x270 = UINT8_MAX;
	volatile int16_t x272 = -1;
	volatile int32_t t66 = -496879;

    t66 = ((x269>(x270%x271))>x272);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint16_t x273 = 7042U;
	static uint16_t x274 = UINT16_MAX;
	int32_t x275 = -1;
	volatile int32_t t67 = -7264;

    t67 = ((x273>(x274%x275))>x276);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x277 = INT32_MIN;
	int8_t x278 = INT8_MIN;
	static int64_t x280 = INT64_MAX;
	int32_t t68 = -85;

    t68 = ((x277>(x278%x279))>x280);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x283 = INT8_MAX;

    t69 = ((x281>(x282%x283))>x284);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x285 = INT32_MIN;
	static int8_t x286 = INT8_MIN;
	volatile int16_t x287 = 3;

    t70 = ((x285>(x286%x287))>x288);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x289 = 849U;
	volatile int8_t x290 = INT8_MAX;
	uint32_t x291 = UINT32_MAX;
	uint8_t x292 = 1U;
	volatile int32_t t71 = -7543;

    t71 = ((x289>(x290%x291))>x292);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint8_t x293 = 16U;
	int32_t x294 = 1390;

    t72 = ((x293>(x294%x295))>x296);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x297 = UINT16_MAX;
	uint32_t x298 = 111064U;
	uint32_t x299 = 629875065U;
	uint16_t x300 = 13U;
	volatile int32_t t73 = -1;

    t73 = ((x297>(x298%x299))>x300);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint16_t x301 = UINT16_MAX;
	static uint8_t x302 = UINT8_MAX;
	int64_t x303 = INT64_MIN;
	volatile uint16_t x304 = 2U;
	static int32_t t74 = -236;

    t74 = ((x301>(x302%x303))>x304);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x305 = INT64_MIN;
	uint32_t x306 = 17U;
	volatile uint32_t x308 = 356U;

    t75 = ((x305>(x306%x307))>x308);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x309 = INT16_MIN;
	int8_t x310 = INT8_MIN;
	int32_t x311 = -1;
	uint32_t x312 = UINT32_MAX;
	int32_t t76 = 13693146;

    t76 = ((x309>(x310%x311))>x312);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x317 = -1;
	static uint8_t x318 = UINT8_MAX;
	int64_t x319 = -1LL;
	int64_t x320 = -44640977191302LL;

    t77 = ((x317>(x318%x319))>x320);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint16_t x321 = UINT16_MAX;
	static int32_t x323 = INT32_MIN;
	uint16_t x324 = 46U;
	int32_t t78 = 28862;

    t78 = ((x321>(x322%x323))>x324);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x325 = 785737508438158649LLU;
	int64_t x326 = INT64_MIN;
	uint8_t x328 = 0U;
	int32_t t79 = 164089367;

    t79 = ((x325>(x326%x327))>x328);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x329 = INT8_MIN;
	int64_t x330 = -435LL;
	int32_t t80 = 189;

    t80 = ((x329>(x330%x331))>x332);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x333 = INT64_MIN;
	int64_t x335 = INT64_MIN;
	uint8_t x336 = UINT8_MAX;
	int32_t t81 = 267144298;

    t81 = ((x333>(x334%x335))>x336);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x337 = 1204979450036LLU;
	static volatile uint8_t x338 = 1U;
	int64_t x339 = INT64_MIN;
	static volatile int32_t x340 = -1;

    t82 = ((x337>(x338%x339))>x340);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x341 = INT64_MIN;
	int16_t x342 = -12706;
	volatile int32_t x343 = INT32_MIN;
	int16_t x344 = INT16_MIN;
	volatile int32_t t83 = 12568;

    t83 = ((x341>(x342%x343))>x344);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint8_t x345 = 27U;
	volatile int8_t x346 = INT8_MIN;
	static int32_t x347 = -53;
	uint16_t x348 = UINT16_MAX;
	static volatile int32_t t84 = 22437;

    t84 = ((x345>(x346%x347))>x348);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x349 = 184797LLU;
	volatile uint16_t x350 = 15957U;
	static int64_t x352 = -1LL;
	int32_t t85 = 39;

    t85 = ((x349>(x350%x351))>x352);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x353 = INT16_MIN;
	int16_t x354 = INT16_MAX;
	int8_t x355 = INT8_MIN;
	volatile int32_t x356 = INT32_MIN;
	volatile int32_t t86 = -10074;

    t86 = ((x353>(x354%x355))>x356);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x357 = UINT64_MAX;
	int32_t x358 = INT32_MIN;
	int64_t x359 = -1LL;
	static int64_t x360 = -2793689851969620580LL;
	int32_t t87 = -21;

    t87 = ((x357>(x358%x359))>x360);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x361 = 40U;
	int64_t x362 = INT64_MAX;
	int32_t x363 = INT32_MIN;
	int16_t x364 = INT16_MIN;
	volatile int32_t t88 = 110940431;

    t88 = ((x361>(x362%x363))>x364);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x365 = 15;
	int64_t x366 = INT64_MIN;
	volatile int16_t x367 = -1;
	int8_t x368 = INT8_MIN;
	volatile int32_t t89 = -1;

    t89 = ((x365>(x366%x367))>x368);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x369 = INT8_MIN;
	uint64_t x370 = 4735776632350018LLU;
	int16_t x371 = -1;
	int64_t x372 = INT64_MAX;
	volatile int32_t t90 = 1;

    t90 = ((x369>(x370%x371))>x372);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x373 = INT16_MIN;
	static volatile uint16_t x374 = UINT16_MAX;
	int8_t x375 = INT8_MAX;
	int32_t x376 = INT32_MIN;
	volatile int32_t t91 = -31938893;

    t91 = ((x373>(x374%x375))>x376);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x378 = 511694081957852LLU;
	int8_t x379 = 18;
	int8_t x380 = INT8_MIN;
	static int32_t t92 = 973521607;

    t92 = ((x377>(x378%x379))>x380);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x381 = INT64_MIN;
	int64_t x382 = INT64_MAX;
	int8_t x383 = 2;
	uint64_t x384 = UINT64_MAX;
	static volatile int32_t t93 = 52377571;

    t93 = ((x381>(x382%x383))>x384);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint16_t x385 = 14U;
	static int64_t x386 = -3518774082025092027LL;
	int32_t x387 = INT32_MIN;
	uint16_t x388 = UINT16_MAX;
	int32_t t94 = 419;

    t94 = ((x385>(x386%x387))>x388);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x389 = INT16_MAX;
	int8_t x390 = -1;
	static int32_t t95 = 1;

    t95 = ((x389>(x390%x391))>x392);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x393 = 1U;
	int64_t x395 = 10986520366843LL;
	static int16_t x396 = INT16_MIN;

    t96 = ((x393>(x394%x395))>x396);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x397 = -20295301LL;
	static int64_t x398 = INT64_MIN;
	int16_t x400 = INT16_MAX;
	int32_t t97 = -600049163;

    t97 = ((x397>(x398%x399))>x400);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x401 = 7108;
	uint64_t x403 = UINT64_MAX;

    t98 = ((x401>(x402%x403))>x404);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x406 = -1;
	int64_t x407 = 2961785093535896LL;
	uint64_t x408 = 22574991214LLU;
	volatile int32_t t99 = -364;

    t99 = ((x405>(x406%x407))>x408);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint32_t x409 = UINT32_MAX;
	uint32_t x410 = UINT32_MAX;
	static int8_t x411 = INT8_MIN;
	int64_t x412 = INT64_MIN;
	volatile int32_t t100 = -46875958;

    t100 = ((x409>(x410%x411))>x412);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x413 = -1;
	volatile int32_t x414 = 8691033;
	int8_t x415 = -1;
	uint8_t x416 = UINT8_MAX;
	volatile int32_t t101 = 156340397;

    t101 = ((x413>(x414%x415))>x416);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x417 = INT32_MIN;
	uint16_t x418 = 31683U;
	uint64_t x419 = 2997767024639940LLU;
	uint32_t x420 = 606U;
	int32_t t102 = -82197782;

    t102 = ((x417>(x418%x419))>x420);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x421 = 1U;
	volatile int64_t x423 = -1LL;
	volatile int16_t x424 = INT16_MIN;
	int32_t t103 = 402;

    t103 = ((x421>(x422%x423))>x424);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x426 = 144431450LL;
	int16_t x427 = 1;
	volatile int32_t t104 = 1981553;

    t104 = ((x425>(x426%x427))>x428);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x430 = INT16_MAX;
	int8_t x432 = -2;
	volatile int32_t t105 = 125130020;

    t105 = ((x429>(x430%x431))>x432);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x433 = INT32_MAX;
	uint8_t x434 = 0U;
	volatile int64_t x436 = 62177674LL;
	int32_t t106 = -289528923;

    t106 = ((x433>(x434%x435))>x436);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x437 = UINT16_MAX;
	uint8_t x438 = 4U;
	static int16_t x439 = INT16_MAX;

    t107 = ((x437>(x438%x439))>x440);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x442 = UINT32_MAX;
	int16_t x443 = INT16_MIN;
	volatile int32_t t108 = -31147;

    t108 = ((x441>(x442%x443))>x444);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x446 = INT8_MAX;
	int64_t x447 = 56LL;
	static int8_t x448 = -1;

    t109 = ((x445>(x446%x447))>x448);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x449 = -1;
	int8_t x450 = INT8_MAX;
	uint16_t x451 = 151U;
	volatile int16_t x452 = INT16_MIN;
	int32_t t110 = -29757535;

    t110 = ((x449>(x450%x451))>x452);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x453 = -1;
	static int64_t x454 = INT64_MAX;
	int16_t x455 = -1;
	static volatile int8_t x456 = INT8_MIN;
	int32_t t111 = -1122;

    t111 = ((x453>(x454%x455))>x456);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x457 = UINT16_MAX;
	uint64_t x459 = UINT64_MAX;
	int8_t x460 = INT8_MIN;
	volatile int32_t t112 = 516652035;

    t112 = ((x457>(x458%x459))>x460);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x461 = INT32_MAX;
	uint8_t x462 = 1U;
	int16_t x463 = 1470;
	int64_t x464 = -20503788136551180LL;

    t113 = ((x461>(x462%x463))>x464);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x465 = UINT8_MAX;
	int16_t x466 = -1;
	static int64_t x467 = -1LL;
	int8_t x468 = -1;
	static int32_t t114 = 2;

    t114 = ((x465>(x466%x467))>x468);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint8_t x469 = 36U;
	int8_t x471 = INT8_MAX;
	static volatile int32_t t115 = 13619015;

    t115 = ((x469>(x470%x471))>x472);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x473 = 6456985094LLU;
	uint16_t x474 = 60U;
	int64_t x475 = INT64_MAX;
	int8_t x476 = 15;
	static int32_t t116 = -52;

    t116 = ((x473>(x474%x475))>x476);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x477 = -1;
	static int64_t x478 = 1459853424528086506LL;
	uint16_t x480 = 1U;
	int32_t t117 = -262;

    t117 = ((x477>(x478%x479))>x480);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x481 = INT8_MIN;
	volatile uint32_t x482 = 84640U;
	int64_t x483 = -1LL;
	int64_t x484 = -1LL;
	static volatile int32_t t118 = -1;

    t118 = ((x481>(x482%x483))>x484);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x485 = INT8_MAX;
	uint16_t x486 = 95U;
	volatile int32_t t119 = 0;

    t119 = ((x485>(x486%x487))>x488);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static int32_t x489 = -1;
	int8_t x490 = 3;
	uint8_t x491 = UINT8_MAX;
	static int32_t t120 = 115;

    t120 = ((x489>(x490%x491))>x492);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x493 = INT32_MAX;
	int64_t x494 = 375651090153LL;
	uint32_t x495 = 80842U;
	volatile int32_t x496 = -16428;
	int32_t t121 = -452435;

    t121 = ((x493>(x494%x495))>x496);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint16_t x497 = 84U;
	static uint8_t x498 = 7U;
	int64_t x499 = -1LL;
	int64_t x500 = INT64_MAX;
	volatile int32_t t122 = 41;

    t122 = ((x497>(x498%x499))>x500);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x502 = UINT16_MAX;
	static volatile int8_t x503 = INT8_MIN;
	int8_t x504 = INT8_MAX;
	static volatile int32_t t123 = 23705962;

    t123 = ((x501>(x502%x503))>x504);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x506 = -2228;
	uint8_t x507 = UINT8_MAX;
	volatile int64_t x508 = -1LL;

    t124 = ((x505>(x506%x507))>x508);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x509 = INT64_MIN;
	int16_t x511 = -1;
	int64_t x512 = INT64_MIN;
	int32_t t125 = 119411067;

    t125 = ((x509>(x510%x511))>x512);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x513 = -1;
	int32_t x516 = INT32_MAX;
	static volatile int32_t t126 = 30;

    t126 = ((x513>(x514%x515))>x516);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x517 = -10157067294LL;
	volatile int32_t x518 = -1;
	int32_t x519 = 473;
	int8_t x520 = INT8_MIN;
	static int32_t t127 = -109469;

    t127 = ((x517>(x518%x519))>x520);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x521 = 110959682038662LL;
	int32_t x523 = -525485;
	int64_t x524 = -1LL;
	int32_t t128 = -1;

    t128 = ((x521>(x522%x523))>x524);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x526 = 9543LLU;
	static int16_t x527 = INT16_MAX;
	volatile int32_t x528 = INT32_MIN;
	volatile int32_t t129 = -1;

    t129 = ((x525>(x526%x527))>x528);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x529 = INT32_MIN;
	static int8_t x530 = INT8_MIN;
	volatile int32_t x531 = INT32_MAX;
	int32_t x532 = -1;
	int32_t t130 = 7850;

    t130 = ((x529>(x530%x531))>x532);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x533 = INT8_MIN;
	static int32_t x534 = INT32_MIN;
	int32_t x536 = INT32_MIN;
	static volatile int32_t t131 = 0;

    t131 = ((x533>(x534%x535))>x536);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x537 = UINT16_MAX;
	static uint16_t x540 = 2361U;
	static int32_t t132 = 23;

    t132 = ((x537>(x538%x539))>x540);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int8_t x541 = -1;
	uint64_t x542 = 27215508456478004LLU;
	int16_t x544 = INT16_MAX;
	int32_t t133 = -799116257;

    t133 = ((x541>(x542%x543))>x544);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint16_t x545 = UINT16_MAX;
	static uint8_t x546 = 61U;
	int8_t x547 = -1;
	static uint16_t x548 = 409U;
	volatile int32_t t134 = -2;

    t134 = ((x545>(x546%x547))>x548);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x549 = INT64_MIN;
	int64_t x550 = INT64_MIN;
	uint8_t x551 = 60U;
	int64_t x552 = INT64_MIN;
	int32_t t135 = 902627;

    t135 = ((x549>(x550%x551))>x552);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static int8_t x553 = INT8_MAX;
	static volatile int16_t x554 = -641;
	uint32_t x555 = UINT32_MAX;
	uint32_t x556 = UINT32_MAX;
	volatile int32_t t136 = 7517;

    t136 = ((x553>(x554%x555))>x556);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x557 = 7486U;
	static int16_t x558 = 30;
	volatile int64_t x559 = INT64_MIN;
	int8_t x560 = INT8_MIN;
	volatile int32_t t137 = 1717;

    t137 = ((x557>(x558%x559))>x560);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x561 = 102;
	int8_t x562 = 42;
	int64_t x564 = -1LL;
	int32_t t138 = -7623;

    t138 = ((x561>(x562%x563))>x564);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x565 = -1;
	uint16_t x566 = UINT16_MAX;
	uint32_t x567 = 26008U;
	int8_t x568 = INT8_MIN;
	volatile int32_t t139 = 237894;

    t139 = ((x565>(x566%x567))>x568);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x569 = UINT32_MAX;
	volatile int16_t x570 = INT16_MIN;
	static uint8_t x571 = 105U;
	uint8_t x572 = 60U;
	int32_t t140 = 1;

    t140 = ((x569>(x570%x571))>x572);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x574 = 184045U;
	int32_t t141 = 12;

    t141 = ((x573>(x574%x575))>x576);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x577 = INT64_MAX;
	uint32_t x578 = 3347409U;
	uint8_t x580 = 88U;
	volatile int32_t t142 = 106011919;

    t142 = ((x577>(x578%x579))>x580);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint32_t x581 = 425792074U;
	int64_t x582 = INT64_MIN;
	int64_t x583 = -33741333932541931LL;
	int16_t x584 = -170;

    t143 = ((x581>(x582%x583))>x584);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x585 = INT64_MAX;
	uint16_t x586 = UINT16_MAX;
	volatile int16_t x587 = -1;
	int32_t x588 = -1;
	volatile int32_t t144 = -256507;

    t144 = ((x585>(x586%x587))>x588);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x589 = INT8_MAX;
	int64_t x590 = INT64_MAX;
	int16_t x591 = 3;
	int64_t x592 = 18LL;
	static volatile int32_t t145 = 1839;

    t145 = ((x589>(x590%x591))>x592);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x593 = INT64_MIN;
	int64_t x594 = -1LL;
	uint16_t x595 = 486U;
	int16_t x596 = INT16_MIN;
	volatile int32_t t146 = -418500452;

    t146 = ((x593>(x594%x595))>x596);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint64_t x599 = UINT64_MAX;
	int16_t x600 = INT16_MAX;
	volatile int32_t t147 = 3;

    t147 = ((x597>(x598%x599))>x600);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x603 = INT64_MIN;
	static uint8_t x604 = 19U;

    t148 = ((x601>(x602%x603))>x604);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile uint64_t x606 = 25859879631423LLU;
	int32_t x607 = INT32_MIN;
	int8_t x608 = -1;
	int32_t t149 = 56113775;

    t149 = ((x605>(x606%x607))>x608);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static int32_t x609 = INT32_MAX;
	int32_t x612 = INT32_MIN;
	volatile int32_t t150 = -113271936;

    t150 = ((x609>(x610%x611))>x612);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x613 = 6862;
	volatile int16_t x614 = INT16_MIN;
	int32_t x616 = -17;

    t151 = ((x613>(x614%x615))>x616);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x617 = -1;
	int64_t x618 = INT64_MIN;
	uint16_t x619 = UINT16_MAX;
	static volatile int16_t x620 = INT16_MIN;
	int32_t t152 = 1;

    t152 = ((x617>(x618%x619))>x620);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x621 = -53;
	int8_t x622 = INT8_MAX;
	volatile int16_t x624 = INT16_MIN;

    t153 = ((x621>(x622%x623))>x624);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static int32_t x626 = -3;
	int64_t x627 = -1287LL;
	static uint32_t x628 = 73U;
	volatile int32_t t154 = -190;

    t154 = ((x625>(x626%x627))>x628);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x629 = 8978362695730534062LLU;
	uint8_t x630 = UINT8_MAX;
	int8_t x631 = INT8_MAX;
	int16_t x632 = -1;
	static int32_t t155 = 3553;

    t155 = ((x629>(x630%x631))>x632);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x634 = INT64_MAX;
	int16_t x636 = INT16_MIN;
	int32_t t156 = -2;

    t156 = ((x633>(x634%x635))>x636);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x637 = -1;
	volatile int8_t x638 = 5;
	int8_t x639 = -1;
	static int32_t x640 = -1;
	volatile int32_t t157 = -858;

    t157 = ((x637>(x638%x639))>x640);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x641 = -1;
	volatile uint8_t x642 = UINT8_MAX;
	uint64_t x643 = 25972039783LLU;
	int8_t x644 = INT8_MAX;
	int32_t t158 = 1096;

    t158 = ((x641>(x642%x643))>x644);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x646 = INT32_MIN;
	int8_t x647 = -11;
	volatile int32_t x648 = -1;

    t159 = ((x645>(x646%x647))>x648);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x649 = 0;
	uint32_t x650 = UINT32_MAX;
	volatile uint64_t x651 = UINT64_MAX;
	int8_t x652 = 1;

    t160 = ((x649>(x650%x651))>x652);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x653 = -1;
	uint8_t x654 = 0U;
	static int64_t x655 = -1LL;
	uint32_t x656 = 2586U;
	int32_t t161 = -357;

    t161 = ((x653>(x654%x655))>x656);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x657 = INT64_MAX;
	int64_t x658 = INT64_MAX;
	int16_t x659 = -1;
	int64_t x660 = INT64_MIN;

    t162 = ((x657>(x658%x659))>x660);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x661 = -2935449649LL;
	volatile int32_t x662 = INT32_MIN;
	int64_t x663 = -9LL;
	volatile int8_t x664 = INT8_MAX;

    t163 = ((x661>(x662%x663))>x664);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x665 = INT64_MIN;
	static int64_t x666 = 113936448LL;
	static int32_t x667 = INT32_MIN;
	static int32_t t164 = 6;

    t164 = ((x665>(x666%x667))>x668);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x669 = INT8_MIN;
	static volatile uint16_t x670 = UINT16_MAX;
	uint32_t x671 = 151475U;
	uint16_t x672 = 641U;
	static volatile int32_t t165 = -1632;

    t165 = ((x669>(x670%x671))>x672);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x673 = -13;
	uint64_t x674 = 64803480LLU;
	int64_t x675 = -1LL;
	int32_t x676 = -39343;
	volatile int32_t t166 = -113133325;

    t166 = ((x673>(x674%x675))>x676);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint32_t x677 = 2U;
	int32_t x678 = INT32_MIN;
	volatile uint16_t x679 = 2655U;
	int32_t t167 = -30184970;

    t167 = ((x677>(x678%x679))>x680);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x681 = INT16_MAX;
	int32_t x682 = INT32_MIN;
	static volatile int64_t x683 = -1LL;
	uint32_t x684 = UINT32_MAX;
	volatile int32_t t168 = -15476688;

    t168 = ((x681>(x682%x683))>x684);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x685 = -1;
	int16_t x686 = 926;
	volatile int32_t x687 = INT32_MIN;
	static uint32_t x688 = UINT32_MAX;
	static volatile int32_t t169 = 1995;

    t169 = ((x685>(x686%x687))>x688);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x689 = INT64_MIN;
	int32_t x691 = -1;
	uint32_t x692 = UINT32_MAX;
	volatile int32_t t170 = -164;

    t170 = ((x689>(x690%x691))>x692);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x694 = INT64_MAX;
	volatile int16_t x695 = INT16_MIN;
	volatile int32_t t171 = 235158;

    t171 = ((x693>(x694%x695))>x696);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile uint64_t x697 = 10328364479LLU;
	volatile uint16_t x699 = 22U;
	volatile int8_t x700 = INT8_MAX;
	volatile int32_t t172 = 25664;

    t172 = ((x697>(x698%x699))>x700);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint8_t x701 = 12U;
	int16_t x703 = INT16_MIN;
	uint16_t x704 = 22U;
	int32_t t173 = -62;

    t173 = ((x701>(x702%x703))>x704);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x705 = INT8_MAX;
	int8_t x706 = INT8_MIN;
	static uint64_t x707 = 133712LLU;
	int32_t x708 = -1;
	int32_t t174 = 484051;

    t174 = ((x705>(x706%x707))>x708);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x710 = -4400491;
	int64_t x712 = INT64_MAX;
	int32_t t175 = -785704901;

    t175 = ((x709>(x710%x711))>x712);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x713 = 0;
	static int32_t x714 = -1;
	volatile uint8_t x715 = 103U;
	int32_t x716 = INT32_MIN;
	int32_t t176 = -18253;

    t176 = ((x713>(x714%x715))>x716);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x717 = INT16_MIN;
	int32_t x718 = INT32_MAX;
	volatile int16_t x719 = INT16_MAX;
	volatile int32_t t177 = 0;

    t177 = ((x717>(x718%x719))>x720);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x721 = INT8_MIN;
	int32_t x722 = INT32_MAX;
	int32_t x723 = -1;
	static uint16_t x724 = UINT16_MAX;
	static volatile int32_t t178 = -124032177;

    t178 = ((x721>(x722%x723))>x724);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x726 = INT16_MAX;
	static uint16_t x727 = 427U;
	uint64_t x728 = UINT64_MAX;
	int32_t t179 = -4219423;

    t179 = ((x725>(x726%x727))>x728);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x729 = INT8_MAX;
	static int8_t x730 = -48;
	static int32_t x731 = INT32_MIN;
	uint64_t x732 = UINT64_MAX;
	int32_t t180 = -53180;

    t180 = ((x729>(x730%x731))>x732);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x733 = 0;
	int16_t x734 = -80;
	int16_t x735 = INT16_MIN;
	int64_t x736 = -46626003LL;
	volatile int32_t t181 = -287;

    t181 = ((x733>(x734%x735))>x736);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x737 = INT8_MIN;
	int32_t x739 = -14713;
	static int16_t x740 = -1;

    t182 = ((x737>(x738%x739))>x740);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint32_t x741 = UINT32_MAX;
	volatile uint64_t x742 = UINT64_MAX;
	volatile int8_t x743 = INT8_MIN;
	static volatile int32_t t183 = 869992977;

    t183 = ((x741>(x742%x743))>x744);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x745 = UINT32_MAX;
	int64_t x746 = -1506539LL;
	uint32_t x747 = UINT32_MAX;
	uint8_t x748 = 12U;

    t184 = ((x745>(x746%x747))>x748);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x749 = -1;
	static int16_t x750 = -12;
	int16_t x751 = INT16_MIN;
	int8_t x752 = INT8_MIN;

    t185 = ((x749>(x750%x751))>x752);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x753 = INT8_MAX;
	int8_t x754 = INT8_MAX;
	int16_t x755 = -1;
	int8_t x756 = INT8_MIN;

    t186 = ((x753>(x754%x755))>x756);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x757 = 47U;
	static uint8_t x758 = UINT8_MAX;
	uint16_t x759 = 714U;
	static int32_t x760 = INT32_MIN;
	volatile int32_t t187 = -8165929;

    t187 = ((x757>(x758%x759))>x760);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x761 = -42;
	int32_t x762 = INT32_MAX;
	int8_t x763 = INT8_MAX;
	volatile int32_t t188 = -118196733;

    t188 = ((x761>(x762%x763))>x764);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x765 = INT8_MAX;
	int16_t x766 = INT16_MIN;
	int64_t x767 = 11339LL;
	int16_t x768 = -418;
	volatile int32_t t189 = 17131;

    t189 = ((x765>(x766%x767))>x768);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x769 = 33534606LL;
	volatile int32_t x770 = INT32_MAX;
	int32_t x772 = INT32_MAX;
	int32_t t190 = 174084608;

    t190 = ((x769>(x770%x771))>x772);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint32_t x773 = UINT32_MAX;
	volatile uint8_t x774 = 1U;
	uint8_t x775 = 4U;
	int8_t x776 = INT8_MIN;

    t191 = ((x773>(x774%x775))>x776);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x778 = -1LL;
	uint8_t x779 = 120U;
	int32_t x780 = 1;
	static volatile int32_t t192 = 1185;

    t192 = ((x777>(x778%x779))>x780);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x781 = INT8_MIN;
	uint32_t x782 = 356U;
	uint64_t x783 = 2254003026LLU;
	static volatile uint16_t x784 = UINT16_MAX;

    t193 = ((x781>(x782%x783))>x784);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x785 = INT64_MIN;
	int64_t x786 = -1LL;
	uint32_t x787 = 53U;
	volatile int16_t x788 = INT16_MIN;
	int32_t t194 = 441104;

    t194 = ((x785>(x786%x787))>x788);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x790 = INT8_MAX;
	int8_t x792 = 1;

    t195 = ((x789>(x790%x791))>x792);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static int64_t x793 = -1080796LL;
	uint32_t x794 = UINT32_MAX;
	uint8_t x796 = 48U;
	volatile int32_t t196 = 1143;

    t196 = ((x793>(x794%x795))>x796);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x797 = 15002593066959831LLU;
	int8_t x798 = 1;
	int16_t x800 = INT16_MIN;
	volatile int32_t t197 = -64082243;

    t197 = ((x797>(x798%x799))>x800);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int16_t x801 = INT16_MIN;
	volatile int16_t x802 = -1;
	static volatile int32_t t198 = 2;

    t198 = ((x801>(x802%x803))>x804);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x805 = 17;
	volatile int8_t x806 = INT8_MIN;
	int64_t x807 = -106069851607770856LL;
	int8_t x808 = INT8_MIN;
	volatile int32_t t199 = 93575756;

    t199 = ((x805>(x806%x807))>x808);

    if (t199 != 1) { NG(); } else { ; }
	
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

