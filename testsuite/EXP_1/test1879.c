
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

static int16_t x1 = 7;
volatile int32_t x5 = 2;
volatile int32_t x11 = INT32_MIN;
static uint32_t x17 = UINT32_MAX;
uint32_t x23 = 3U;
int16_t x24 = INT16_MIN;
volatile int64_t x25 = INT64_MIN;
int32_t x28 = -6;
uint64_t x32 = 19656491686974LLU;
uint64_t t7 = 2764156121LLU;
static int16_t x33 = INT16_MAX;
uint16_t x36 = 0U;
volatile int32_t x37 = 42;
uint32_t x47 = 191397U;
int16_t x49 = INT16_MAX;
int32_t t12 = 3;
volatile int8_t x59 = 0;
volatile uint64_t x67 = UINT64_MAX;
volatile uint8_t x71 = 0U;
int8_t x75 = INT8_MIN;
uint8_t x78 = 30U;
static volatile int16_t x85 = INT16_MIN;
int32_t x89 = INT32_MAX;
uint16_t x90 = 21282U;
static int8_t x91 = -1;
static uint32_t x92 = 14631390U;
static int64_t x94 = INT64_MAX;
uint64_t t25 = 63163986072111823LLU;
static int32_t x107 = -1;
volatile int32_t t26 = -4047;
static int32_t x117 = INT32_MIN;
static int16_t x118 = INT16_MIN;
static int64_t x120 = INT64_MAX;
int8_t x123 = INT8_MAX;
volatile int32_t x125 = INT32_MIN;
volatile int32_t t32 = -12000;
volatile int16_t x134 = INT16_MIN;
uint8_t x137 = 2U;
static uint8_t x140 = UINT8_MAX;
int8_t x141 = -8;
uint64_t x143 = 3080LLU;
volatile int64_t t35 = 13381321426173LL;
int32_t x154 = 66525;
static int8_t x155 = 1;
int16_t x160 = INT16_MAX;
static int32_t t39 = -5;
static int16_t x166 = INT16_MAX;
volatile int16_t x174 = -24;
volatile int8_t x176 = 17;
int64_t t44 = INT64_MAX;
static uint64_t x185 = UINT64_MAX;
volatile int16_t x188 = INT16_MIN;
int32_t t46 = 339143;
int8_t x189 = INT8_MIN;
uint64_t x194 = 395343857LLU;
int32_t t48 = -19337102;
uint8_t x200 = UINT8_MAX;
int64_t x203 = -3428181LL;
uint16_t x206 = UINT16_MAX;
int16_t x207 = INT16_MIN;
uint64_t x219 = 4300166566LLU;
int32_t t54 = -17055;
volatile int64_t t56 = 289013046548433LL;
uint8_t x233 = 126U;
volatile int8_t x235 = INT8_MIN;
static int64_t x236 = -41590319721LL;
volatile int64_t t58 = 465924778924177LL;
int64_t x237 = INT64_MIN;
int32_t x239 = INT32_MAX;
int64_t x241 = INT64_MIN;
static int64_t x245 = 5066146LL;
volatile uint64_t x253 = UINT64_MAX;
static int64_t x257 = INT64_MAX;
int16_t x259 = INT16_MAX;
volatile int32_t t64 = -14173;
int16_t x268 = -1;
volatile int32_t t66 = 2028513;
static volatile int64_t x270 = INT64_MIN;
uint32_t x288 = UINT32_MAX;
volatile uint32_t x291 = 0U;
int16_t x292 = -1;
int32_t t72 = 31248;
static volatile int8_t x293 = -1;
static volatile int32_t t73 = 4656;
int64_t x303 = 7472795LL;
static uint8_t x309 = 33U;
volatile int32_t t77 = -159922;
static int16_t x316 = 669;
volatile int64_t x320 = INT64_MAX;
int16_t x321 = -1;
volatile int64_t t80 = INT64_MAX;
int8_t x327 = -1;
static int32_t t81 = 132979;
int64_t t82 = INT64_MIN;
int64_t t83 = -9499055470229768LL;
int16_t x338 = INT16_MIN;
volatile uint32_t x347 = UINT32_MAX;
static uint8_t x352 = UINT8_MAX;
uint32_t x360 = UINT32_MAX;
static int32_t x362 = INT32_MIN;
static int64_t x365 = 4LL;
volatile int32_t x369 = -1;
int8_t x375 = INT8_MAX;
int16_t x378 = INT16_MIN;
int8_t x383 = 0;
uint16_t x387 = UINT16_MAX;
int32_t x394 = INT32_MAX;
uint8_t x395 = 3U;
int8_t x404 = 0;
int32_t x405 = -1;
volatile int16_t x407 = -1;
uint32_t x413 = UINT32_MAX;
int32_t x414 = INT32_MAX;
int32_t x419 = INT32_MAX;
volatile int32_t x420 = -1679657;
static int32_t x425 = INT32_MIN;
int32_t t106 = -64266901;
uint16_t x434 = 0U;
static uint8_t x435 = 85U;
int32_t x441 = -1;
uint8_t x442 = UINT8_MAX;
int64_t t111 = INT64_MIN;
static uint32_t x454 = 0U;
int8_t x458 = -1;
uint32_t x473 = 13U;
int8_t x478 = -1;
volatile uint32_t x481 = UINT32_MAX;
int16_t x487 = INT16_MIN;
volatile int32_t t121 = -2688823;
static volatile int32_t t122 = 964;
uint16_t x496 = 25U;
int32_t t123 = 116373431;
uint32_t x498 = UINT32_MAX;
static uint32_t x513 = 43408U;
uint32_t x518 = 111978U;
uint32_t x520 = 78281957U;
int64_t x529 = INT64_MAX;
uint64_t x541 = 4926LLU;
int8_t x544 = INT8_MIN;
static volatile int64_t x545 = -1LL;
uint8_t x547 = 26U;
int32_t t138 = -48162;
volatile uint16_t x562 = 817U;
volatile int32_t x566 = 3854144;
int16_t x567 = -7560;
static int16_t x568 = 10;
int32_t x573 = -20229413;
static uint16_t x577 = 1060U;
int16_t x579 = -1;
volatile int64_t x582 = 1879713296946293LL;
uint8_t x586 = UINT8_MAX;
uint8_t x588 = 0U;
int16_t x590 = -1;
uint32_t x595 = UINT32_MAX;
int8_t x603 = -5;
uint8_t x607 = UINT8_MAX;
volatile uint16_t x608 = 11U;
int64_t x611 = INT64_MIN;
static volatile int32_t t152 = -163154;
int16_t x613 = INT16_MIN;
volatile int16_t x618 = INT16_MIN;
uint16_t x619 = UINT16_MAX;
int8_t x622 = -17;
int64_t x628 = INT64_MIN;
volatile uint16_t x631 = 1U;
volatile uint8_t x653 = UINT8_MAX;
int8_t x659 = INT8_MIN;
volatile int16_t x661 = INT16_MIN;
volatile int8_t x662 = 1;
static volatile int32_t t165 = INT32_MIN;
static volatile int64_t x665 = 16041347926095LL;
int32_t x672 = INT32_MAX;
uint64_t x678 = 19LLU;
uint16_t x692 = 0U;
static uint32_t x694 = 26288U;
int8_t x695 = INT8_MIN;
int32_t x696 = -106;
static int32_t t173 = -61;
int64_t t174 = -19LL;
int32_t x712 = -1;
int32_t x716 = -1;
int64_t x721 = -8575912769852LL;
int32_t x723 = -465979807;
int8_t x724 = INT8_MAX;
int8_t x725 = -1;
int32_t x733 = INT32_MIN;
static int32_t x734 = INT32_MIN;
uint8_t x736 = 0U;
volatile int32_t t183 = -238;
static volatile int64_t x747 = INT64_MAX;
int32_t x748 = 0;
static uint64_t t187 = 7342417LLU;
int64_t x759 = -4825LL;
int32_t t189 = 4;
uint8_t x762 = UINT8_MAX;
static uint8_t x763 = UINT8_MAX;
volatile int32_t t190 = -8029;
static volatile uint64_t x774 = 131750983304LLU;
uint8_t x775 = 30U;
int8_t x778 = INT8_MIN;
uint32_t x780 = 0U;
static int32_t x784 = INT32_MIN;
int32_t t196 = 48;
volatile int32_t t198 = 26;
int32_t x798 = -44284;


void f0(void) {
    	int32_t x2 = INT32_MAX;
	int32_t x3 = INT32_MIN;
	int64_t x4 = INT64_MIN;
	static volatile int64_t t0 = INT64_MIN;

    t0 = (((x1<=x2)>x3)*x4);

    if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x6 = 3U;
	uint32_t x7 = 353865514U;
	int32_t x8 = INT32_MAX;
	volatile int32_t t1 = 89;

    t1 = (((x5<=x6)>x7)*x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = 481498350LL;
	int8_t x10 = -1;
	volatile int32_t x12 = INT32_MIN;
	int32_t t2 = INT32_MIN;

    t2 = (((x9<=x10)>x11)*x12);

    if (t2 != INT32_MIN) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = INT64_MIN;
	static int16_t x14 = INT16_MIN;
	static uint64_t x15 = UINT64_MAX;
	int8_t x16 = INT8_MIN;
	static int32_t t3 = 1268;

    t3 = (((x13<=x14)>x15)*x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x18 = -1;
	static int32_t x19 = -3418;
	int64_t x20 = INT64_MIN;
	volatile int64_t t4 = INT64_MIN;

    t4 = (((x17<=x18)>x19)*x20);

    if (t4 != INT64_MIN) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = UINT8_MAX;
	static uint16_t x22 = 6436U;
	int32_t t5 = 8113355;

    t5 = (((x21<=x22)>x23)*x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x26 = -31203011887LL;
	uint16_t x27 = 43U;
	int32_t t6 = 6;

    t6 = (((x25<=x26)>x27)*x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = -1;
	uint64_t x30 = 183069LLU;
	int64_t x31 = -24943228452LL;

    t7 = (((x29<=x30)>x31)*x32);

    if (t7 != 19656491686974LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint64_t x34 = 276255825379LLU;
	int8_t x35 = 5;
	volatile int32_t t8 = -5544;

    t8 = (((x33<=x34)>x35)*x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x38 = INT8_MAX;
	int32_t x39 = 4;
	uint8_t x40 = UINT8_MAX;
	volatile int32_t t9 = 12604629;

    t9 = (((x37<=x38)>x39)*x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint64_t x41 = 1905848657279190LLU;
	uint32_t x42 = 2106U;
	int32_t x43 = INT32_MIN;
	static int16_t x44 = INT16_MAX;
	static volatile int32_t t10 = 2281434;

    t10 = (((x41<=x42)>x43)*x44);

    if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x45 = UINT64_MAX;
	static volatile uint32_t x46 = 3479101U;
	static int64_t x48 = 418621855489LL;
	volatile int64_t t11 = -11053LL;

    t11 = (((x45<=x46)>x47)*x48);

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x50 = INT32_MAX;
	int64_t x51 = INT64_MIN;
	static uint16_t x52 = 1U;

    t12 = (((x49<=x50)>x51)*x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = -4;
	int32_t x54 = -1;
	uint8_t x55 = UINT8_MAX;
	int32_t x56 = 4;
	volatile int32_t t13 = -97724463;

    t13 = (((x53<=x54)>x55)*x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = INT16_MIN;
	static uint8_t x58 = UINT8_MAX;
	int32_t x60 = INT32_MAX;
	volatile int32_t t14 = INT32_MAX;

    t14 = (((x57<=x58)>x59)*x60);

    if (t14 != INT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = INT16_MIN;
	uint16_t x62 = 63U;
	int16_t x63 = -26;
	int64_t x64 = -1861237534993LL;
	volatile int64_t t15 = -27296950LL;

    t15 = (((x61<=x62)>x63)*x64);

    if (t15 != -1861237534993LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int64_t x65 = 2100284487715361LL;
	static uint16_t x66 = 24269U;
	int16_t x68 = INT16_MAX;
	int32_t t16 = -118;

    t16 = (((x65<=x66)>x67)*x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = -49LL;
	int16_t x70 = INT16_MIN;
	volatile uint16_t x72 = 7216U;
	volatile int32_t t17 = 3922694;

    t17 = (((x69<=x70)>x71)*x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = INT32_MIN;
	int32_t x74 = -1;
	int8_t x76 = -1;
	static volatile int32_t t18 = 1;

    t18 = (((x73<=x74)>x75)*x76);

    if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = INT32_MAX;
	int64_t x79 = INT64_MAX;
	int8_t x80 = -1;
	static int32_t t19 = 76596630;

    t19 = (((x77<=x78)>x79)*x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = INT16_MAX;
	uint16_t x82 = UINT16_MAX;
	static int16_t x83 = -1;
	uint32_t x84 = UINT32_MAX;
	uint32_t t20 = UINT32_MAX;

    t20 = (((x81<=x82)>x83)*x84);

    if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x86 = 4428U;
	uint16_t x87 = UINT16_MAX;
	int8_t x88 = 38;
	static volatile int32_t t21 = -965;

    t21 = (((x85<=x86)>x87)*x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint32_t t22 = 138371929U;

    t22 = (((x89<=x90)>x91)*x92);

    if (t22 != 14631390U) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = INT32_MIN;
	int16_t x95 = INT16_MIN;
	volatile uint16_t x96 = 6U;
	int32_t t23 = 0;

    t23 = (((x93<=x94)>x95)*x96);

    if (t23 != 6) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint16_t x97 = UINT16_MAX;
	int8_t x98 = -1;
	volatile int32_t x99 = -1;
	int64_t x100 = -761388852LL;
	int64_t t24 = -2958045566341476LL;

    t24 = (((x97<=x98)>x99)*x100);

    if (t24 != -761388852LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x101 = UINT64_MAX;
	static volatile int64_t x102 = 424LL;
	uint64_t x103 = UINT64_MAX;
	uint64_t x104 = 226058LLU;

    t25 = (((x101<=x102)>x103)*x104);

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = INT8_MIN;
	static int8_t x106 = INT8_MIN;
	int32_t x108 = 10024233;

    t26 = (((x105<=x106)>x107)*x108);

    if (t26 != 10024233) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int8_t x109 = 19;
	static volatile int8_t x110 = INT8_MIN;
	static int8_t x111 = INT8_MAX;
	uint8_t x112 = 54U;
	int32_t t27 = -64644;

    t27 = (((x109<=x110)>x111)*x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x113 = INT32_MIN;
	int16_t x114 = -1;
	int64_t x115 = -1LL;
	static volatile int64_t x116 = INT64_MAX;
	static volatile int64_t t28 = INT64_MAX;

    t28 = (((x113<=x114)>x115)*x116);

    if (t28 != INT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x119 = -2004517681452711914LL;
	volatile int64_t t29 = INT64_MAX;

    t29 = (((x117<=x118)>x119)*x120);

    if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint16_t x121 = 482U;
	int8_t x122 = -1;
	volatile uint16_t x124 = UINT16_MAX;
	int32_t t30 = 648291065;

    t30 = (((x121<=x122)>x123)*x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x126 = INT64_MIN;
	int32_t x127 = 13729248;
	static int64_t x128 = INT64_MIN;
	int64_t t31 = -690LL;

    t31 = (((x125<=x126)>x127)*x128);

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = -6;
	static int32_t x130 = 428958;
	volatile int64_t x131 = -825106129342LL;
	int16_t x132 = -15520;

    t32 = (((x129<=x130)>x131)*x132);

    if (t32 != -15520) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = INT32_MIN;
	volatile int16_t x135 = -1;
	int8_t x136 = -5;
	volatile int32_t t33 = 1617;

    t33 = (((x133<=x134)>x135)*x136);

    if (t33 != -5) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x138 = 11556;
	volatile int32_t x139 = -1;
	volatile int32_t t34 = -1261749;

    t34 = (((x137<=x138)>x139)*x140);

    if (t34 != 255) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x142 = UINT32_MAX;
	int64_t x144 = INT64_MIN;

    t35 = (((x141<=x142)>x143)*x144);

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = -338067220866513719LL;
	int64_t x146 = -1LL;
	int16_t x147 = 135;
	uint32_t x148 = UINT32_MAX;
	uint32_t t36 = 10U;

    t36 = (((x145<=x146)>x147)*x148);

    if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = -3274132396671506LL;
	int8_t x150 = 1;
	int8_t x151 = -1;
	int64_t x152 = INT64_MAX;
	int64_t t37 = INT64_MAX;

    t37 = (((x149<=x150)>x151)*x152);

    if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = -1;
	int64_t x156 = -34749452708LL;
	volatile int64_t t38 = -800LL;

    t38 = (((x153<=x154)>x155)*x156);

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x157 = INT32_MIN;
	uint16_t x158 = 21935U;
	static int8_t x159 = -1;

    t39 = (((x157<=x158)>x159)*x160);

    if (t39 != 32767) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = INT64_MAX;
	static int16_t x162 = -1;
	int64_t x163 = INT64_MAX;
	static int32_t x164 = INT32_MIN;
	static volatile int32_t t40 = -234603263;

    t40 = (((x161<=x162)>x163)*x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x165 = INT32_MAX;
	volatile uint16_t x167 = 828U;
	volatile int8_t x168 = INT8_MAX;
	int32_t t41 = 49093;

    t41 = (((x165<=x166)>x167)*x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x169 = INT64_MIN;
	int16_t x170 = INT16_MAX;
	volatile int8_t x171 = INT8_MAX;
	static uint16_t x172 = 555U;
	int32_t t42 = 3308;

    t42 = (((x169<=x170)>x171)*x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint32_t x173 = UINT32_MAX;
	int8_t x175 = 10;
	volatile int32_t t43 = -1005282;

    t43 = (((x173<=x174)>x175)*x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = INT32_MAX;
	int8_t x178 = -1;
	int32_t x179 = -1066967559;
	static volatile int64_t x180 = INT64_MAX;

    t44 = (((x177<=x178)>x179)*x180);

    if (t44 != INT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = INT32_MIN;
	static int8_t x182 = INT8_MAX;
	int32_t x183 = INT32_MIN;
	int32_t x184 = INT32_MAX;
	volatile int32_t t45 = INT32_MAX;

    t45 = (((x181<=x182)>x183)*x184);

    if (t45 != INT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x186 = 9347612105LLU;
	int64_t x187 = 5032308LL;

    t46 = (((x185<=x186)>x187)*x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x190 = -1260348648106LL;
	uint16_t x191 = 906U;
	uint32_t x192 = 24U;
	volatile uint32_t t47 = 298216U;

    t47 = (((x189<=x190)>x191)*x192);

    if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x193 = 6;
	volatile uint32_t x195 = UINT32_MAX;
	int8_t x196 = -47;

    t48 = (((x193<=x194)>x195)*x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = INT64_MIN;
	int16_t x198 = INT16_MAX;
	int64_t x199 = INT64_MAX;
	int32_t t49 = -26647618;

    t49 = (((x197<=x198)>x199)*x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = INT32_MAX;
	uint16_t x202 = UINT16_MAX;
	volatile int16_t x204 = INT16_MIN;
	int32_t t50 = 3751835;

    t50 = (((x201<=x202)>x203)*x204);

    if (t50 != -32768) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x205 = INT16_MIN;
	volatile int64_t x208 = -553395401489863168LL;
	volatile int64_t t51 = -45643145LL;

    t51 = (((x205<=x206)>x207)*x208);

    if (t51 != -553395401489863168LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x209 = -365;
	int8_t x210 = 0;
	static int8_t x211 = -2;
	int8_t x212 = -14;
	volatile int32_t t52 = 61052;

    t52 = (((x209<=x210)>x211)*x212);

    if (t52 != -14) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x213 = -1LL;
	uint8_t x214 = UINT8_MAX;
	uint32_t x215 = UINT32_MAX;
	int64_t x216 = INT64_MAX;
	int64_t t53 = -34817980502615458LL;

    t53 = (((x213<=x214)>x215)*x216);

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint32_t x217 = UINT32_MAX;
	int8_t x218 = 40;
	uint16_t x220 = UINT16_MAX;

    t54 = (((x217<=x218)>x219)*x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x221 = INT16_MIN;
	int32_t x222 = -1;
	int32_t x223 = INT32_MIN;
	static uint64_t x224 = 5LLU;
	volatile uint64_t t55 = 190737073865345LLU;

    t55 = (((x221<=x222)>x223)*x224);

    if (t55 != 5LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint8_t x225 = UINT8_MAX;
	uint16_t x226 = UINT16_MAX;
	static uint16_t x227 = 23245U;
	static int64_t x228 = INT64_MAX;

    t56 = (((x225<=x226)>x227)*x228);

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint16_t x229 = 8U;
	static int8_t x230 = INT8_MIN;
	volatile uint64_t x231 = 1229417873777953LLU;
	int32_t x232 = 1;
	int32_t t57 = -15;

    t57 = (((x229<=x230)>x231)*x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x234 = INT32_MIN;

    t58 = (((x233<=x234)>x235)*x236);

    if (t58 != -41590319721LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x238 = 754;
	uint8_t x240 = UINT8_MAX;
	volatile int32_t t59 = 352;

    t59 = (((x237<=x238)>x239)*x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x242 = INT32_MIN;
	static volatile uint8_t x243 = UINT8_MAX;
	volatile uint64_t x244 = UINT64_MAX;
	volatile uint64_t t60 = 99881LLU;

    t60 = (((x241<=x242)>x243)*x244);

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x246 = 238U;
	int64_t x247 = 881300709LL;
	int16_t x248 = -19;
	volatile int32_t t61 = 5215;

    t61 = (((x245<=x246)>x247)*x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint32_t x249 = UINT32_MAX;
	static uint64_t x250 = 229741LLU;
	static int8_t x251 = INT8_MIN;
	static volatile int8_t x252 = INT8_MAX;
	int32_t t62 = 14660047;

    t62 = (((x249<=x250)>x251)*x252);

    if (t62 != 127) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x254 = INT8_MAX;
	uint64_t x255 = 2315419LLU;
	int8_t x256 = INT8_MIN;
	static int32_t t63 = 847101;

    t63 = (((x253<=x254)>x255)*x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x258 = 611121297994551LLU;
	uint16_t x260 = 963U;

    t64 = (((x257<=x258)>x259)*x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x261 = INT32_MAX;
	int64_t x262 = -84158791297782980LL;
	int8_t x263 = INT8_MAX;
	int64_t x264 = 27111396205LL;
	int64_t t65 = 845123LL;

    t65 = (((x261<=x262)>x263)*x264);

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x265 = -1LL;
	int32_t x266 = INT32_MIN;
	int64_t x267 = INT64_MIN;

    t66 = (((x265<=x266)>x267)*x268);

    if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint64_t x269 = UINT64_MAX;
	int32_t x271 = INT32_MIN;
	int16_t x272 = -1;
	volatile int32_t t67 = 4996;

    t67 = (((x269<=x270)>x271)*x272);

    if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x273 = -7;
	volatile int32_t x274 = -79;
	int16_t x275 = 437;
	static uint32_t x276 = 2010U;
	volatile uint32_t t68 = 16822358U;

    t68 = (((x273<=x274)>x275)*x276);

    if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x277 = -22;
	volatile int64_t x278 = INT64_MIN;
	volatile int16_t x279 = -1;
	int8_t x280 = INT8_MAX;
	static volatile int32_t t69 = -281;

    t69 = (((x277<=x278)>x279)*x280);

    if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x281 = INT8_MIN;
	static volatile uint8_t x282 = 63U;
	int8_t x283 = INT8_MIN;
	int8_t x284 = INT8_MIN;
	int32_t t70 = -50;

    t70 = (((x281<=x282)>x283)*x284);

    if (t70 != -128) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x285 = INT16_MIN;
	static volatile int16_t x286 = 8;
	static volatile int32_t x287 = 166;
	static uint32_t t71 = 4U;

    t71 = (((x285<=x286)>x287)*x288);

    if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x289 = INT64_MIN;
	uint32_t x290 = 2062904U;

    t72 = (((x289<=x290)>x291)*x292);

    if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x294 = 1621941918146082LLU;
	static uint64_t x295 = 43659866021LLU;
	int8_t x296 = 11;

    t73 = (((x293<=x294)>x295)*x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int64_t x297 = -410659LL;
	int64_t x298 = INT64_MAX;
	volatile int64_t x299 = INT64_MIN;
	uint64_t x300 = 7081LLU;
	static uint64_t t74 = 2780729001319LLU;

    t74 = (((x297<=x298)>x299)*x300);

    if (t74 != 7081LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int64_t x301 = -1LL;
	static uint16_t x302 = UINT16_MAX;
	int32_t x304 = INT32_MAX;
	static volatile int32_t t75 = 416695401;

    t75 = (((x301<=x302)>x303)*x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x305 = INT8_MIN;
	static int16_t x306 = INT16_MAX;
	uint32_t x307 = UINT32_MAX;
	static uint64_t x308 = 120LLU;
	static volatile uint64_t t76 = 3344102904581952LLU;

    t76 = (((x305<=x306)>x307)*x308);

    if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x310 = 55187U;
	int8_t x311 = 4;
	static int16_t x312 = INT16_MIN;

    t77 = (((x309<=x310)>x311)*x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x313 = INT16_MIN;
	int64_t x314 = INT64_MAX;
	uint64_t x315 = 8236LLU;
	static volatile int32_t t78 = 143445;

    t78 = (((x313<=x314)>x315)*x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int8_t x317 = INT8_MIN;
	int16_t x318 = -212;
	uint64_t x319 = 0LLU;
	volatile int64_t t79 = 141638117503227075LL;

    t79 = (((x317<=x318)>x319)*x320);

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile uint32_t x322 = 1208809212U;
	int64_t x323 = -1LL;
	int64_t x324 = INT64_MAX;

    t80 = (((x321<=x322)>x323)*x324);

    if (t80 != INT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int32_t x325 = INT32_MAX;
	static uint16_t x326 = UINT16_MAX;
	int16_t x328 = INT16_MAX;

    t81 = (((x325<=x326)>x327)*x328);

    if (t81 != 32767) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x329 = -3737058216984960LL;
	int32_t x330 = -71461824;
	int16_t x331 = -1843;
	volatile int64_t x332 = INT64_MIN;

    t82 = (((x329<=x330)>x331)*x332);

    if (t82 != INT64_MIN) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x333 = 192797589LLU;
	volatile int32_t x334 = INT32_MAX;
	int32_t x335 = -2;
	static int64_t x336 = 1649726LL;

    t83 = (((x333<=x334)>x335)*x336);

    if (t83 != 1649726LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint32_t x337 = UINT32_MAX;
	int16_t x339 = 3;
	static int64_t x340 = INT64_MIN;
	volatile int64_t t84 = -2LL;

    t84 = (((x337<=x338)>x339)*x340);

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = -1LL;
	uint8_t x342 = UINT8_MAX;
	int8_t x343 = -1;
	uint8_t x344 = 59U;
	static int32_t t85 = -12101;

    t85 = (((x341<=x342)>x343)*x344);

    if (t85 != 59) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x345 = INT16_MAX;
	int16_t x346 = INT16_MIN;
	int64_t x348 = INT64_MIN;
	volatile int64_t t86 = -3245361311453419864LL;

    t86 = (((x345<=x346)>x347)*x348);

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x349 = INT8_MIN;
	static int8_t x350 = 1;
	volatile uint8_t x351 = UINT8_MAX;
	volatile int32_t t87 = 113;

    t87 = (((x349<=x350)>x351)*x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x353 = 2U;
	uint64_t x354 = UINT64_MAX;
	int32_t x355 = INT32_MIN;
	int16_t x356 = 9754;
	int32_t t88 = -695137333;

    t88 = (((x353<=x354)>x355)*x356);

    if (t88 != 9754) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x357 = -31971566255541LL;
	int32_t x358 = INT32_MIN;
	int32_t x359 = INT32_MIN;
	static uint32_t t89 = UINT32_MAX;

    t89 = (((x357<=x358)>x359)*x360);

    if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x361 = -1;
	volatile uint8_t x363 = 1U;
	int8_t x364 = INT8_MIN;
	static int32_t t90 = 47216;

    t90 = (((x361<=x362)>x363)*x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x366 = INT16_MIN;
	int16_t x367 = -1;
	uint8_t x368 = 0U;
	volatile int32_t t91 = 1;

    t91 = (((x365<=x366)>x367)*x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x370 = 4994;
	uint16_t x371 = 5U;
	int64_t x372 = -1LL;
	int64_t t92 = 1607878447362LL;

    t92 = (((x369<=x370)>x371)*x372);

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x373 = INT16_MAX;
	static uint8_t x374 = 41U;
	int64_t x376 = -1251887444LL;
	volatile int64_t t93 = -4129353146790LL;

    t93 = (((x373<=x374)>x375)*x376);

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x377 = UINT8_MAX;
	int64_t x379 = INT64_MIN;
	static int64_t x380 = INT64_MAX;
	int64_t t94 = INT64_MAX;

    t94 = (((x377<=x378)>x379)*x380);

    if (t94 != INT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int64_t x381 = 1744938001113890829LL;
	int32_t x382 = INT32_MIN;
	int32_t x384 = INT32_MIN;
	int32_t t95 = -490301;

    t95 = (((x381<=x382)>x383)*x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x385 = -1;
	int32_t x386 = 1;
	volatile int8_t x388 = INT8_MIN;
	volatile int32_t t96 = 23903;

    t96 = (((x385<=x386)>x387)*x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x389 = 26;
	uint8_t x390 = 1U;
	uint16_t x391 = 12672U;
	int64_t x392 = INT64_MIN;
	volatile int64_t t97 = -75530217613362103LL;

    t97 = (((x389<=x390)>x391)*x392);

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x393 = INT16_MIN;
	static volatile uint8_t x396 = 102U;
	int32_t t98 = -1561;

    t98 = (((x393<=x394)>x395)*x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x397 = INT64_MIN;
	uint16_t x398 = 7692U;
	int8_t x399 = -1;
	int64_t x400 = 618LL;
	int64_t t99 = 461881244436534417LL;

    t99 = (((x397<=x398)>x399)*x400);

    if (t99 != 618LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint32_t x401 = 606246237U;
	uint32_t x402 = 0U;
	int32_t x403 = -2;
	volatile int32_t t100 = -424392;

    t100 = (((x401<=x402)>x403)*x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x406 = UINT32_MAX;
	int64_t x408 = -56849427792390167LL;
	volatile int64_t t101 = 3917758LL;

    t101 = (((x405<=x406)>x407)*x408);

    if (t101 != -56849427792390167LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int64_t x409 = -1LL;
	volatile uint32_t x410 = 329665822U;
	int8_t x411 = INT8_MAX;
	int16_t x412 = INT16_MIN;
	int32_t t102 = 62;

    t102 = (((x409<=x410)>x411)*x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x415 = 0U;
	static int32_t x416 = INT32_MIN;
	int32_t t103 = 11;

    t103 = (((x413<=x414)>x415)*x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static int16_t x417 = INT16_MIN;
	int16_t x418 = INT16_MAX;
	int32_t t104 = -40840;

    t104 = (((x417<=x418)>x419)*x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x421 = 2U;
	int8_t x422 = INT8_MIN;
	int16_t x423 = 1;
	uint32_t x424 = UINT32_MAX;
	uint32_t t105 = 281904U;

    t105 = (((x421<=x422)>x423)*x424);

    if (t105 != 0U) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x426 = 19U;
	volatile int16_t x427 = 4562;
	int8_t x428 = INT8_MIN;

    t106 = (((x425<=x426)>x427)*x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint16_t x429 = 16039U;
	int8_t x430 = INT8_MAX;
	int16_t x431 = 975;
	int64_t x432 = -329953247716LL;
	int64_t t107 = 821181635562LL;

    t107 = (((x429<=x430)>x431)*x432);

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x433 = 8U;
	volatile int32_t x436 = -3373;
	volatile int32_t t108 = -3358041;

    t108 = (((x433<=x434)>x435)*x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = INT64_MIN;
	int8_t x438 = -14;
	static uint64_t x439 = UINT64_MAX;
	volatile int32_t x440 = INT32_MIN;
	volatile int32_t t109 = 1026694077;

    t109 = (((x437<=x438)>x439)*x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x443 = INT16_MAX;
	static int64_t x444 = 3300847553284727LL;
	static int64_t t110 = 1139LL;

    t110 = (((x441<=x442)>x443)*x444);

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x445 = UINT8_MAX;
	uint8_t x446 = 0U;
	int32_t x447 = INT32_MIN;
	int64_t x448 = INT64_MIN;

    t111 = (((x445<=x446)>x447)*x448);

    if (t111 != INT64_MIN) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x449 = INT16_MIN;
	int8_t x450 = INT8_MIN;
	volatile int16_t x451 = 12959;
	static int32_t x452 = INT32_MIN;
	volatile int32_t t112 = -1037233028;

    t112 = (((x449<=x450)>x451)*x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x453 = INT64_MIN;
	int32_t x455 = -1;
	static int8_t x456 = INT8_MIN;
	volatile int32_t t113 = 90644991;

    t113 = (((x453<=x454)>x455)*x456);

    if (t113 != -128) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int32_t x457 = -1;
	int16_t x459 = -247;
	int8_t x460 = INT8_MAX;
	volatile int32_t t114 = -2494;

    t114 = (((x457<=x458)>x459)*x460);

    if (t114 != 127) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x461 = UINT16_MAX;
	static int8_t x462 = 1;
	volatile int16_t x463 = -1855;
	int32_t x464 = -6743;
	volatile int32_t t115 = 62019;

    t115 = (((x461<=x462)>x463)*x464);

    if (t115 != -6743) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x465 = 0;
	uint64_t x466 = 69LLU;
	uint64_t x467 = 1547023535421325LLU;
	uint64_t x468 = 43007146LLU;
	static volatile uint64_t t116 = 75LLU;

    t116 = (((x465<=x466)>x467)*x468);

    if (t116 != 0LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x469 = 91;
	int32_t x470 = INT32_MIN;
	volatile int8_t x471 = 0;
	uint64_t x472 = 11330LLU;
	uint64_t t117 = 0LLU;

    t117 = (((x469<=x470)>x471)*x472);

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x474 = INT16_MAX;
	int64_t x475 = -1LL;
	uint8_t x476 = 111U;
	volatile int32_t t118 = 2;

    t118 = (((x473<=x474)>x475)*x476);

    if (t118 != 111) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x477 = -51086655940484322LL;
	int32_t x479 = INT32_MIN;
	int16_t x480 = -1;
	volatile int32_t t119 = -578856670;

    t119 = (((x477<=x478)>x479)*x480);

    if (t119 != -1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x482 = UINT64_MAX;
	static uint16_t x483 = 0U;
	static int16_t x484 = -2;
	volatile int32_t t120 = 51449;

    t120 = (((x481<=x482)>x483)*x484);

    if (t120 != -2) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x485 = INT8_MIN;
	static volatile int8_t x486 = -1;
	uint8_t x488 = 1U;

    t121 = (((x485<=x486)>x487)*x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static int8_t x489 = INT8_MIN;
	int16_t x490 = INT16_MAX;
	volatile uint16_t x491 = UINT16_MAX;
	volatile int32_t x492 = INT32_MIN;

    t122 = (((x489<=x490)>x491)*x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x493 = INT16_MIN;
	uint8_t x494 = UINT8_MAX;
	static int32_t x495 = -4751;

    t123 = (((x493<=x494)>x495)*x496);

    if (t123 != 25) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x497 = INT64_MIN;
	volatile uint64_t x499 = 65027705382809LLU;
	static int64_t x500 = -9276898900002975LL;
	volatile int64_t t124 = -495076624125LL;

    t124 = (((x497<=x498)>x499)*x500);

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x501 = UINT32_MAX;
	static int8_t x502 = INT8_MIN;
	int16_t x503 = 1;
	int8_t x504 = -7;
	int32_t t125 = -70226;

    t125 = (((x501<=x502)>x503)*x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x505 = -61075;
	static int32_t x506 = -1;
	static int8_t x507 = -1;
	static int32_t x508 = INT32_MIN;
	int32_t t126 = INT32_MIN;

    t126 = (((x505<=x506)>x507)*x508);

    if (t126 != INT32_MIN) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x509 = INT8_MAX;
	volatile int16_t x510 = INT16_MAX;
	uint8_t x511 = 36U;
	static uint16_t x512 = 14U;
	int32_t t127 = 33;

    t127 = (((x509<=x510)>x511)*x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x514 = INT32_MIN;
	int8_t x515 = -29;
	uint64_t x516 = UINT64_MAX;
	static uint64_t t128 = UINT64_MAX;

    t128 = (((x513<=x514)>x515)*x516);

    if (t128 != UINT64_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int16_t x517 = 14218;
	uint32_t x519 = 50607341U;
	uint32_t t129 = 6U;

    t129 = (((x517<=x518)>x519)*x520);

    if (t129 != 0U) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x521 = 3LLU;
	static int16_t x522 = INT16_MAX;
	int64_t x523 = INT64_MIN;
	int64_t x524 = -12014201141LL;
	volatile int64_t t130 = 10137175364LL;

    t130 = (((x521<=x522)>x523)*x524);

    if (t130 != -12014201141LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x525 = INT8_MIN;
	uint16_t x526 = 15638U;
	static int16_t x527 = -5;
	uint8_t x528 = 5U;
	int32_t t131 = -745;

    t131 = (((x525<=x526)>x527)*x528);

    if (t131 != 5) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint16_t x530 = UINT16_MAX;
	static volatile int16_t x531 = INT16_MAX;
	int16_t x532 = INT16_MAX;
	int32_t t132 = 129546566;

    t132 = (((x529<=x530)>x531)*x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x533 = -12782LL;
	int32_t x534 = 0;
	static int32_t x535 = -823346131;
	static int64_t x536 = 94908496956837LL;
	volatile int64_t t133 = 428868602793301835LL;

    t133 = (((x533<=x534)>x535)*x536);

    if (t133 != 94908496956837LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x537 = 5733075747275LL;
	static int8_t x538 = INT8_MIN;
	uint8_t x539 = 27U;
	uint16_t x540 = 19266U;
	volatile int32_t t134 = 935928;

    t134 = (((x537<=x538)>x539)*x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint16_t x542 = 14U;
	uint64_t x543 = UINT64_MAX;
	volatile int32_t t135 = -695502;

    t135 = (((x541<=x542)>x543)*x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int32_t x546 = INT32_MIN;
	int64_t x548 = 18461279583668035LL;
	volatile int64_t t136 = 193LL;

    t136 = (((x545<=x546)>x547)*x548);

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x549 = -3LL;
	uint8_t x550 = 4U;
	volatile int8_t x551 = -1;
	int64_t x552 = INT64_MIN;
	volatile int64_t t137 = INT64_MIN;

    t137 = (((x549<=x550)>x551)*x552);

    if (t137 != INT64_MIN) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x553 = INT8_MIN;
	uint8_t x554 = 21U;
	uint64_t x555 = 25526011LLU;
	int16_t x556 = INT16_MAX;

    t138 = (((x553<=x554)>x555)*x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x557 = 159;
	int32_t x558 = INT32_MIN;
	volatile int32_t x559 = INT32_MAX;
	static volatile int8_t x560 = -1;
	int32_t t139 = -1265842;

    t139 = (((x557<=x558)>x559)*x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x561 = INT8_MAX;
	static uint16_t x563 = UINT16_MAX;
	uint8_t x564 = 5U;
	static volatile int32_t t140 = -5618;

    t140 = (((x561<=x562)>x563)*x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x565 = INT16_MIN;
	static int32_t t141 = 1918549;

    t141 = (((x565<=x566)>x567)*x568);

    if (t141 != 10) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x569 = INT32_MAX;
	uint64_t x570 = 27150608482401LLU;
	static volatile uint32_t x571 = UINT32_MAX;
	static int32_t x572 = -1;
	int32_t t142 = 2045196;

    t142 = (((x569<=x570)>x571)*x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x574 = 2243U;
	int64_t x575 = INT64_MIN;
	int32_t x576 = 68;
	static volatile int32_t t143 = -32;

    t143 = (((x573<=x574)>x575)*x576);

    if (t143 != 68) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x578 = INT8_MIN;
	uint64_t x580 = 2318099222LLU;
	static volatile uint64_t t144 = 940LLU;

    t144 = (((x577<=x578)>x579)*x580);

    if (t144 != 2318099222LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x581 = -1LL;
	int16_t x583 = -1;
	int8_t x584 = -1;
	volatile int32_t t145 = -391119;

    t145 = (((x581<=x582)>x583)*x584);

    if (t145 != -1) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x585 = INT32_MIN;
	volatile int64_t x587 = -14645883125LL;
	int32_t t146 = -3463951;

    t146 = (((x585<=x586)>x587)*x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x589 = INT16_MAX;
	uint64_t x591 = UINT64_MAX;
	uint64_t x592 = 6771382062LLU;
	uint64_t t147 = 56648406LLU;

    t147 = (((x589<=x590)>x591)*x592);

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x593 = INT64_MAX;
	int32_t x594 = INT32_MIN;
	int32_t x596 = -4794936;
	int32_t t148 = -3;

    t148 = (((x593<=x594)>x595)*x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x597 = 64U;
	volatile uint8_t x598 = 72U;
	uint32_t x599 = 13529719U;
	int64_t x600 = -9834LL;
	volatile int64_t t149 = 14002864717LL;

    t149 = (((x597<=x598)>x599)*x600);

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int8_t x601 = INT8_MAX;
	int8_t x602 = INT8_MIN;
	int32_t x604 = INT32_MIN;
	int32_t t150 = INT32_MIN;

    t150 = (((x601<=x602)>x603)*x604);

    if (t150 != INT32_MIN) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x605 = 13U;
	int8_t x606 = 0;
	static volatile int32_t t151 = -70468;

    t151 = (((x605<=x606)>x607)*x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = -1;
	uint64_t x610 = 247328LLU;
	int8_t x612 = INT8_MIN;

    t152 = (((x609<=x610)>x611)*x612);

    if (t152 != -128) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x614 = 233990041;
	int32_t x615 = INT32_MIN;
	int32_t x616 = 1;
	volatile int32_t t153 = -111;

    t153 = (((x613<=x614)>x615)*x616);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int64_t x617 = INT64_MAX;
	volatile uint8_t x620 = 40U;
	volatile int32_t t154 = -200;

    t154 = (((x617<=x618)>x619)*x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x621 = INT16_MAX;
	int8_t x623 = INT8_MIN;
	int32_t x624 = INT32_MAX;
	int32_t t155 = INT32_MAX;

    t155 = (((x621<=x622)>x623)*x624);

    if (t155 != INT32_MAX) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x625 = -5405408146LL;
	int16_t x626 = INT16_MIN;
	int16_t x627 = 0;
	int64_t t156 = INT64_MIN;

    t156 = (((x625<=x626)>x627)*x628);

    if (t156 != INT64_MIN) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x629 = 1U;
	static uint16_t x630 = 1974U;
	uint64_t x632 = 4075658224LLU;
	uint64_t t157 = 48LLU;

    t157 = (((x629<=x630)>x631)*x632);

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x633 = 985869670673494LL;
	int8_t x634 = 17;
	int32_t x635 = -1;
	int16_t x636 = -124;
	volatile int32_t t158 = -86046;

    t158 = (((x633<=x634)>x635)*x636);

    if (t158 != -124) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint32_t x637 = 31591U;
	int8_t x638 = INT8_MIN;
	int8_t x639 = INT8_MIN;
	static uint8_t x640 = 42U;
	int32_t t159 = -4032;

    t159 = (((x637<=x638)>x639)*x640);

    if (t159 != 42) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x641 = 52U;
	volatile uint8_t x642 = 48U;
	uint8_t x643 = UINT8_MAX;
	int16_t x644 = -360;
	volatile int32_t t160 = -738;

    t160 = (((x641<=x642)>x643)*x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x645 = -39;
	static uint64_t x646 = 20753362542155571LLU;
	int32_t x647 = 724982;
	uint32_t x648 = UINT32_MAX;
	uint32_t t161 = 12500U;

    t161 = (((x645<=x646)>x647)*x648);

    if (t161 != 0U) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x649 = 37U;
	int32_t x650 = INT32_MAX;
	uint64_t x651 = UINT64_MAX;
	volatile uint32_t x652 = UINT32_MAX;
	uint32_t t162 = 3866U;

    t162 = (((x649<=x650)>x651)*x652);

    if (t162 != 0U) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x654 = 1326;
	int32_t x655 = INT32_MAX;
	int16_t x656 = 1856;
	int32_t t163 = -10433254;

    t163 = (((x653<=x654)>x655)*x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x657 = INT32_MAX;
	volatile uint64_t x658 = 1651448LLU;
	static int8_t x660 = 17;
	int32_t t164 = -25;

    t164 = (((x657<=x658)>x659)*x660);

    if (t164 != 17) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x663 = INT64_MIN;
	static int32_t x664 = INT32_MIN;

    t165 = (((x661<=x662)>x663)*x664);

    if (t165 != INT32_MIN) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x666 = 21433464LLU;
	int64_t x667 = -1LL;
	static volatile int64_t x668 = INT64_MIN;
	volatile int64_t t166 = INT64_MIN;

    t166 = (((x665<=x666)>x667)*x668);

    if (t166 != INT64_MIN) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x669 = 1924U;
	static volatile int8_t x670 = INT8_MIN;
	uint8_t x671 = 54U;
	int32_t t167 = -18098;

    t167 = (((x669<=x670)>x671)*x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x673 = 1850394549777LLU;
	int32_t x674 = -1005090871;
	volatile int8_t x675 = INT8_MIN;
	int16_t x676 = INT16_MAX;
	static int32_t t168 = -452679516;

    t168 = (((x673<=x674)>x675)*x676);

    if (t168 != 32767) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x677 = INT8_MIN;
	int8_t x679 = INT8_MIN;
	int16_t x680 = INT16_MIN;
	static int32_t t169 = -39871511;

    t169 = (((x677<=x678)>x679)*x680);

    if (t169 != -32768) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = -11;
	volatile uint32_t x682 = 2711042U;
	static uint16_t x683 = UINT16_MAX;
	volatile int16_t x684 = 11;
	static volatile int32_t t170 = 10;

    t170 = (((x681<=x682)>x683)*x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x685 = 443081635U;
	uint64_t x686 = 27327LLU;
	uint32_t x687 = 22262700U;
	volatile int8_t x688 = 3;
	volatile int32_t t171 = -2;

    t171 = (((x685<=x686)>x687)*x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x689 = UINT64_MAX;
	int64_t x690 = INT64_MIN;
	volatile uint64_t x691 = UINT64_MAX;
	volatile int32_t t172 = -429110;

    t172 = (((x689<=x690)>x691)*x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x693 = INT8_MIN;

    t173 = (((x693<=x694)>x695)*x696);

    if (t173 != -106) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x697 = -148883654;
	static uint16_t x698 = UINT16_MAX;
	uint64_t x699 = 1924LLU;
	static int64_t x700 = INT64_MAX;

    t174 = (((x697<=x698)>x699)*x700);

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x701 = INT64_MIN;
	static uint8_t x702 = UINT8_MAX;
	static volatile int16_t x703 = -1;
	uint64_t x704 = UINT64_MAX;
	static uint64_t t175 = UINT64_MAX;

    t175 = (((x701<=x702)>x703)*x704);

    if (t175 != UINT64_MAX) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint8_t x705 = 59U;
	static uint32_t x706 = 1349U;
	int64_t x707 = INT64_MIN;
	uint32_t x708 = 6721746U;
	volatile uint32_t t176 = 251565U;

    t176 = (((x705<=x706)>x707)*x708);

    if (t176 != 6721746U) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint64_t x709 = UINT64_MAX;
	int32_t x710 = INT32_MIN;
	int16_t x711 = -3;
	static volatile int32_t t177 = -6587443;

    t177 = (((x709<=x710)>x711)*x712);

    if (t177 != -1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint16_t x713 = 7069U;
	int32_t x714 = -9920;
	static int64_t x715 = 21174LL;
	int32_t t178 = 119221;

    t178 = (((x713<=x714)>x715)*x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x717 = INT64_MIN;
	volatile int16_t x718 = INT16_MAX;
	uint8_t x719 = 6U;
	int64_t x720 = -1LL;
	int64_t t179 = 4552426075175153614LL;

    t179 = (((x717<=x718)>x719)*x720);

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x722 = INT8_MAX;
	int32_t t180 = 112417162;

    t180 = (((x721<=x722)>x723)*x724);

    if (t180 != 127) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int32_t x726 = -1;
	int8_t x727 = INT8_MIN;
	uint64_t x728 = 702382793228550261LLU;
	static uint64_t t181 = 85006624397405LLU;

    t181 = (((x725<=x726)>x727)*x728);

    if (t181 != 702382793228550261LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x729 = 1U;
	static uint8_t x730 = 8U;
	int64_t x731 = INT64_MIN;
	static int8_t x732 = INT8_MAX;
	static int32_t t182 = 652663961;

    t182 = (((x729<=x730)>x731)*x732);

    if (t182 != 127) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x735 = 1;

    t183 = (((x733<=x734)>x735)*x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x737 = 23592U;
	uint32_t x738 = UINT32_MAX;
	uint16_t x739 = 11245U;
	uint32_t x740 = 51661384U;
	uint32_t t184 = 38391U;

    t184 = (((x737<=x738)>x739)*x740);

    if (t184 != 0U) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x741 = 6702U;
	int8_t x742 = -1;
	int64_t x743 = 686533649LL;
	int64_t x744 = INT64_MAX;
	int64_t t185 = -38074001150643LL;

    t185 = (((x741<=x742)>x743)*x744);

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x745 = UINT8_MAX;
	int16_t x746 = INT16_MAX;
	volatile int32_t t186 = 209;

    t186 = (((x745<=x746)>x747)*x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x749 = 6324729U;
	volatile int8_t x750 = INT8_MIN;
	volatile uint64_t x751 = 35421329LLU;
	uint64_t x752 = 32795641539462LLU;

    t187 = (((x749<=x750)>x751)*x752);

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile uint8_t x753 = 105U;
	int32_t x754 = -1482496;
	int8_t x755 = -7;
	int64_t x756 = INT64_MAX;
	volatile int64_t t188 = INT64_MAX;

    t188 = (((x753<=x754)>x755)*x756);

    if (t188 != INT64_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x757 = INT8_MIN;
	int32_t x758 = 819;
	int32_t x760 = -643;

    t189 = (((x757<=x758)>x759)*x760);

    if (t189 != -643) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x761 = UINT64_MAX;
	volatile int16_t x764 = INT16_MIN;

    t190 = (((x761<=x762)>x763)*x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x765 = 10;
	int64_t x766 = INT64_MIN;
	volatile int16_t x767 = -12;
	volatile int64_t x768 = INT64_MAX;
	static int64_t t191 = INT64_MAX;

    t191 = (((x765<=x766)>x767)*x768);

    if (t191 != INT64_MAX) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x769 = INT8_MIN;
	int16_t x770 = INT16_MIN;
	int32_t x771 = 765;
	uint64_t x772 = UINT64_MAX;
	volatile uint64_t t192 = 16539285880553LLU;

    t192 = (((x769<=x770)>x771)*x772);

    if (t192 != 0LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x773 = 2U;
	static int8_t x776 = INT8_MIN;
	int32_t t193 = -1;

    t193 = (((x773<=x774)>x775)*x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x777 = INT8_MIN;
	volatile int16_t x779 = -292;
	uint32_t t194 = 108U;

    t194 = (((x777<=x778)>x779)*x780);

    if (t194 != 0U) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x781 = UINT32_MAX;
	int16_t x782 = INT16_MAX;
	static volatile uint16_t x783 = 715U;
	int32_t t195 = -141464;

    t195 = (((x781<=x782)>x783)*x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x785 = 13742U;
	int8_t x786 = 1;
	volatile int16_t x787 = 0;
	static int8_t x788 = -42;

    t196 = (((x785<=x786)>x787)*x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x789 = 81U;
	int8_t x790 = INT8_MIN;
	uint16_t x791 = UINT16_MAX;
	volatile int64_t x792 = 1066133LL;
	int64_t t197 = 5024961631914LL;

    t197 = (((x789<=x790)>x791)*x792);

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x793 = INT64_MAX;
	int16_t x794 = -470;
	static int32_t x795 = INT32_MIN;
	volatile int8_t x796 = -1;

    t198 = (((x793<=x794)>x795)*x796);

    if (t198 != -1) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x797 = INT32_MIN;
	static uint8_t x799 = 126U;
	int8_t x800 = INT8_MIN;
	volatile int32_t t199 = -46143426;

    t199 = (((x797<=x798)>x799)*x800);

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

