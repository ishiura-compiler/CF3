
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

int32_t x1 = INT32_MIN;
volatile uint8_t x4 = UINT8_MAX;
int8_t x24 = -62;
volatile int32_t t2 = 185;
uint8_t x29 = UINT8_MAX;
int64_t x31 = 191LL;
static int8_t x32 = 1;
int16_t x37 = INT16_MAX;
int16_t x46 = 1272;
uint64_t x48 = 486818LLU;
static int16_t x53 = INT16_MAX;
volatile uint32_t x64 = 4044395U;
int8_t x68 = INT8_MAX;
static int8_t x72 = INT8_MIN;
int32_t t12 = -28;
volatile int8_t x73 = 0;
volatile int64_t x77 = -1LL;
int32_t x81 = -1;
int64_t x84 = -1LL;
int8_t x85 = INT8_MIN;
int32_t x88 = -1;
int32_t t16 = 27280678;
static uint64_t x108 = UINT64_MAX;
uint16_t x109 = 637U;
int16_t x111 = INT16_MIN;
int8_t x112 = -1;
volatile int32_t t20 = 24689;
int64_t x122 = -1LL;
int64_t x129 = INT64_MIN;
volatile int32_t t23 = -10719;
int8_t x151 = INT8_MIN;
int8_t x165 = -1;
int64_t x168 = -1LL;
int64_t x172 = 1058021866LL;
int32_t t29 = 480;
int8_t x177 = INT8_MIN;
volatile int16_t x182 = INT16_MIN;
volatile int32_t t31 = 145400022;
uint16_t x206 = 520U;
static int8_t x211 = 1;
uint16_t x213 = 0U;
static int32_t x219 = -3030;
static int32_t x237 = INT32_MAX;
int8_t x246 = 1;
volatile int16_t x257 = -1;
int8_t x273 = -1;
int32_t t46 = 9;
int64_t x280 = -1LL;
static int8_t x284 = INT8_MIN;
int32_t x287 = INT32_MIN;
uint64_t x310 = UINT64_MAX;
int32_t x318 = INT32_MIN;
uint8_t x321 = UINT8_MAX;
uint64_t x339 = 166744450251470548LLU;
uint64_t x360 = 1231659LLU;
int16_t x364 = INT16_MIN;
static int32_t t60 = 87240;
static uint16_t x367 = 9U;
int8_t x370 = 1;
uint16_t x372 = 15169U;
int32_t t62 = 58264645;
int8_t x379 = -1;
int8_t x380 = 32;
uint64_t x396 = 27077031859914790LLU;
int8_t x400 = 2;
volatile int16_t x404 = INT16_MAX;
volatile int32_t t68 = -7625;
static int32_t x414 = -229389334;
int8_t x421 = 6;
static int64_t x424 = -1LL;
int64_t x428 = 197461416152743572LL;
int64_t x429 = INT64_MAX;
static int32_t t76 = -503440374;
int32_t t79 = -193;
static volatile int32_t t80 = -38990042;
static int64_t x489 = INT64_MAX;
static int32_t x491 = 230;
uint8_t x492 = 1U;
volatile uint8_t x495 = 13U;
int64_t x502 = -1LL;
uint16_t x508 = 337U;
int16_t x516 = INT16_MIN;
int8_t x519 = INT8_MIN;
volatile uint8_t x532 = 1U;
uint8_t x540 = 12U;
int32_t t90 = -90714652;
uint16_t x543 = 1602U;
volatile int32_t t91 = -33154;
volatile uint8_t x550 = 7U;
int16_t x554 = -1;
int32_t t96 = -155;
static volatile int32_t t97 = -194695268;
volatile int16_t x584 = 18;
volatile int32_t t100 = -91129;
volatile uint16_t x604 = 2U;
uint64_t x606 = 176557656025238LLU;
volatile int8_t x607 = INT8_MIN;
int64_t x618 = 140896179LL;
int32_t t104 = 2501;
uint8_t x640 = 3U;
volatile int16_t x643 = -3;
volatile int32_t t107 = -238372;
static uint8_t x653 = UINT8_MAX;
uint64_t x665 = UINT64_MAX;
uint16_t x667 = 7U;
int16_t x695 = INT16_MIN;
int16_t x699 = INT16_MIN;
int8_t x710 = 0;
uint32_t x712 = 35342123U;
static int32_t t115 = 54530;
uint64_t x713 = 1803942950221306LLU;
int8_t x715 = INT8_MIN;
uint8_t x717 = 1U;
int16_t x718 = -1;
uint8_t x720 = 12U;
static uint8_t x726 = UINT8_MAX;
int8_t x728 = 2;
volatile int32_t t119 = 36818154;
int8_t x730 = INT8_MIN;
volatile int16_t x737 = INT16_MIN;
uint32_t x740 = 4U;
static int8_t x742 = 1;
volatile uint8_t x744 = 1U;
int32_t t122 = -2;
static int32_t x745 = INT32_MIN;
int8_t x747 = INT8_MAX;
int8_t x751 = 60;
volatile uint16_t x761 = UINT16_MAX;
uint64_t x762 = UINT64_MAX;
volatile int8_t x763 = INT8_MIN;
int32_t x768 = INT32_MIN;
static uint32_t x785 = UINT32_MAX;
int32_t x786 = INT32_MIN;
static int8_t x795 = INT8_MAX;
uint16_t x796 = UINT16_MAX;
static volatile int32_t t131 = 29;
int16_t x800 = 1;
static uint16_t x822 = 24U;
volatile int32_t t134 = 1;
static volatile int64_t x843 = 125LL;
int32_t t136 = 214;
volatile int64_t x855 = -11306192348969LL;
static uint32_t x860 = UINT32_MAX;
uint16_t x875 = UINT16_MAX;
uint32_t x877 = 99659U;
static uint64_t x879 = 1LLU;
uint64_t x880 = 101195761LLU;
int64_t x883 = -1LL;
int64_t x890 = INT64_MIN;
int8_t x895 = INT8_MIN;
volatile int32_t t147 = 30;
int16_t x915 = -7;
static volatile uint64_t x916 = 19LLU;
volatile int32_t t149 = 1;
uint8_t x943 = 1U;
static int64_t x946 = -62077621606167LL;
static uint32_t x970 = 415571U;
static volatile int32_t t156 = 257347;
volatile uint32_t x981 = UINT32_MAX;
uint32_t x985 = 271925679U;
int8_t x987 = -1;
volatile int16_t x999 = -3926;
int32_t x1002 = INT32_MAX;
static int32_t x1003 = INT32_MIN;
int32_t t160 = -2066920;
int32_t t161 = 823;
int64_t x1018 = -44663602LL;
int16_t x1019 = -1;
static volatile int32_t x1020 = -128;
uint32_t x1026 = UINT32_MAX;
int32_t x1027 = 29779;
int8_t x1028 = -54;
int8_t x1031 = 1;
int64_t x1032 = INT64_MIN;
static uint64_t x1035 = UINT64_MAX;
int8_t x1036 = 1;
volatile int32_t t167 = -1151;
static int32_t x1038 = 596598;
int32_t x1041 = INT32_MIN;
volatile int8_t x1044 = -1;
int8_t x1056 = INT8_MAX;
int32_t x1067 = -1;
uint16_t x1073 = UINT16_MAX;
volatile uint32_t x1074 = 7102U;
volatile int32_t x1078 = INT32_MIN;
static uint32_t x1079 = UINT32_MAX;
static int16_t x1087 = 4;
volatile int8_t x1088 = -1;
volatile uint64_t x1095 = 4496206035882LLU;
static uint16_t x1101 = 112U;
static volatile int64_t x1103 = -35345113931610LL;
static uint8_t x1104 = 5U;
int32_t t181 = -10;
static int64_t x1121 = -3356369799237LL;
static int8_t x1122 = -4;
volatile int16_t x1124 = 502;
volatile int32_t x1125 = INT32_MIN;
int32_t x1132 = INT32_MAX;
volatile int32_t t186 = -174;
int32_t t187 = 584127;
int32_t x1148 = -1;
int16_t x1153 = -1;
volatile uint64_t x1154 = 53522654LLU;
volatile uint8_t x1157 = UINT8_MAX;
static volatile int32_t t192 = -2965;
volatile int32_t t193 = 5056074;
static volatile int32_t x1168 = 4447;
volatile int16_t x1169 = 237;
int8_t x1171 = INT8_MAX;
uint8_t x1190 = 55U;
int32_t x1195 = -725046;
int32_t x1198 = 3;
uint8_t x1199 = 20U;


void f0(void) {
    	int8_t x2 = INT8_MIN;
	volatile int32_t x3 = -3171211;
	int32_t t0 = -85;

    t0 = (x1>(x2%(x3*x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = 389258097;
	int32_t x6 = INT32_MIN;
	static uint8_t x7 = UINT8_MAX;
	volatile uint8_t x8 = UINT8_MAX;
	int32_t t1 = 4141765;

    t1 = (x5>(x6%(x7*x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x21 = -1;
	int64_t x22 = -1LL;
	uint64_t x23 = 128255519868LLU;

    t2 = (x21>(x22%(x23*x24)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x30 = -1;
	static volatile int32_t t3 = -3755;

    t3 = (x29>(x30%(x31*x32)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x33 = 2384U;
	static uint64_t x34 = UINT64_MAX;
	int16_t x35 = -3;
	int32_t x36 = 9074;
	volatile int32_t t4 = 2642427;

    t4 = (x33>(x34%(x35*x36)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x38 = 5903030349978LL;
	int16_t x39 = -4027;
	uint64_t x40 = 15648962823LLU;
	volatile int32_t t5 = 21152054;

    t5 = (x37>(x38%(x39*x40)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x41 = 129U;
	uint32_t x42 = 44081163U;
	uint16_t x43 = 31U;
	static uint16_t x44 = 7644U;
	int32_t t6 = 3079;

    t6 = (x41>(x42%(x43*x44)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x45 = INT8_MIN;
	uint64_t x47 = 4030652439413606LLU;
	volatile int32_t t7 = 274327197;

    t7 = (x45>(x46%(x47*x48)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x49 = 2689071LLU;
	int16_t x50 = INT16_MAX;
	uint64_t x51 = UINT64_MAX;
	int32_t x52 = INT32_MIN;
	volatile int32_t t8 = -273171579;

    t8 = (x49>(x50%(x51*x52)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x54 = 2U;
	static volatile int64_t x55 = -1LL;
	static volatile int8_t x56 = INT8_MAX;
	volatile int32_t t9 = 1;

    t9 = (x53>(x54%(x55*x56)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int32_t x61 = 825;
	uint8_t x62 = UINT8_MAX;
	int32_t x63 = -5085;
	volatile int32_t t10 = 14948;

    t10 = (x61>(x62%(x63*x64)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint32_t x65 = 3U;
	static uint32_t x66 = UINT32_MAX;
	uint64_t x67 = 344LLU;
	int32_t t11 = -20825039;

    t11 = (x65>(x66%(x67*x68)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint16_t x69 = 782U;
	int64_t x70 = INT64_MAX;
	int16_t x71 = INT16_MAX;

    t12 = (x69>(x70%(x71*x72)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x74 = 222993U;
	uint32_t x75 = UINT32_MAX;
	int16_t x76 = INT16_MIN;
	volatile int32_t t13 = 463;

    t13 = (x73>(x74%(x75*x76)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x78 = INT64_MIN;
	static uint64_t x79 = 374817191926LLU;
	int32_t x80 = INT32_MIN;
	static int32_t t14 = -1;

    t14 = (x77>(x78%(x79*x80)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x82 = -1LL;
	static int32_t x83 = INT32_MIN;
	int32_t t15 = 7556716;

    t15 = (x81>(x82%(x83*x84)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x86 = UINT64_MAX;
	int32_t x87 = -45;

    t16 = (x85>(x86%(x87*x88)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x89 = 123;
	int16_t x90 = INT16_MIN;
	uint64_t x91 = 14371LLU;
	uint32_t x92 = 38711359U;
	volatile int32_t t17 = 41694;

    t17 = (x89>(x90%(x91*x92)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x93 = UINT8_MAX;
	int8_t x94 = -1;
	uint16_t x95 = 25U;
	int32_t x96 = -155;
	int32_t t18 = -113070;

    t18 = (x93>(x94%(x95*x96)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x105 = UINT32_MAX;
	uint16_t x106 = 3477U;
	int16_t x107 = INT16_MIN;
	volatile int32_t t19 = -165881978;

    t19 = (x105>(x106%(x107*x108)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x110 = INT64_MIN;

    t20 = (x109>(x110%(x111*x112)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x113 = 1170;
	int64_t x114 = -481924603LL;
	volatile int8_t x115 = 1;
	int64_t x116 = INT64_MAX;
	volatile int32_t t21 = -1024512994;

    t21 = (x113>(x114%(x115*x116)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x121 = 2118U;
	volatile uint16_t x123 = 242U;
	uint32_t x124 = 1002U;
	int32_t t22 = -1011;

    t22 = (x121>(x122%(x123*x124)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x130 = 247103052930LL;
	int16_t x131 = -56;
	volatile int8_t x132 = -1;

    t23 = (x129>(x130%(x131*x132)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x137 = 13692LL;
	int16_t x138 = INT16_MIN;
	int32_t x139 = -1;
	int16_t x140 = INT16_MIN;
	int32_t t24 = 6;

    t24 = (x137>(x138%(x139*x140)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int64_t x141 = -1LL;
	int64_t x142 = -1LL;
	static int8_t x143 = -1;
	int32_t x144 = 632;
	volatile int32_t t25 = -218272;

    t25 = (x141>(x142%(x143*x144)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x149 = UINT8_MAX;
	static uint64_t x150 = 542404704LLU;
	static volatile uint16_t x152 = 244U;
	volatile int32_t t26 = 1;

    t26 = (x149>(x150%(x151*x152)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x153 = 14567U;
	int64_t x154 = 17395880570311559LL;
	volatile int8_t x155 = INT8_MIN;
	uint16_t x156 = 19730U;
	int32_t t27 = 812211;

    t27 = (x153>(x154%(x155*x156)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int64_t x166 = INT64_MIN;
	uint8_t x167 = 1U;
	volatile int32_t t28 = 18106;

    t28 = (x165>(x166%(x167*x168)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint8_t x169 = UINT8_MAX;
	int32_t x170 = 763654996;
	int64_t x171 = -1LL;

    t29 = (x169>(x170%(x171*x172)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x178 = 3717147355116LLU;
	int16_t x179 = INT16_MIN;
	int8_t x180 = 28;
	volatile int32_t t30 = -7;

    t30 = (x177>(x178%(x179*x180)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint8_t x181 = 94U;
	uint32_t x183 = UINT32_MAX;
	uint16_t x184 = UINT16_MAX;

    t31 = (x181>(x182%(x183*x184)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile int32_t x185 = -1;
	static int64_t x186 = 3849409405087257257LL;
	int16_t x187 = INT16_MIN;
	uint8_t x188 = 2U;
	int32_t t32 = 54835294;

    t32 = (x185>(x186%(x187*x188)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x197 = INT32_MIN;
	uint32_t x198 = UINT32_MAX;
	uint32_t x199 = 58U;
	static volatile uint16_t x200 = 81U;
	volatile int32_t t33 = 0;

    t33 = (x197>(x198%(x199*x200)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x205 = 1U;
	uint8_t x207 = UINT8_MAX;
	int8_t x208 = INT8_MAX;
	int32_t t34 = 31;

    t34 = (x205>(x206%(x207*x208)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x209 = INT16_MIN;
	uint8_t x210 = 24U;
	static int16_t x212 = INT16_MAX;
	static volatile int32_t t35 = 59;

    t35 = (x209>(x210%(x211*x212)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x214 = 455838781828214309LLU;
	int8_t x215 = -1;
	int8_t x216 = -1;
	volatile int32_t t36 = -6972660;

    t36 = (x213>(x214%(x215*x216)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x217 = INT16_MIN;
	uint16_t x218 = 36U;
	int8_t x220 = INT8_MAX;
	volatile int32_t t37 = -347043493;

    t37 = (x217>(x218%(x219*x220)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x225 = -6750630507141LL;
	int64_t x226 = INT64_MAX;
	static uint64_t x227 = UINT64_MAX;
	int16_t x228 = -4;
	int32_t t38 = -5060226;

    t38 = (x225>(x226%(x227*x228)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x238 = 119852908LL;
	static int16_t x239 = INT16_MIN;
	int8_t x240 = 2;
	volatile int32_t t39 = -527245340;

    t39 = (x237>(x238%(x239*x240)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x241 = INT64_MAX;
	int64_t x242 = INT64_MIN;
	volatile int16_t x243 = -1;
	static int8_t x244 = -1;
	int32_t t40 = 2786;

    t40 = (x241>(x242%(x243*x244)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x245 = -1LL;
	int32_t x247 = -1;
	static int16_t x248 = 1;
	int32_t t41 = 1716955;

    t41 = (x245>(x246%(x247*x248)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile int32_t x249 = INT32_MIN;
	int32_t x250 = INT32_MIN;
	uint8_t x251 = UINT8_MAX;
	int8_t x252 = 47;
	static volatile int32_t t42 = -59608;

    t42 = (x249>(x250%(x251*x252)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x258 = 255615109738LLU;
	static volatile uint16_t x259 = UINT16_MAX;
	uint64_t x260 = 2LLU;
	int32_t t43 = -2793581;

    t43 = (x257>(x258%(x259*x260)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x261 = INT16_MAX;
	uint16_t x262 = 661U;
	int64_t x263 = -1LL;
	static volatile int16_t x264 = -258;
	volatile int32_t t44 = -125;

    t44 = (x261>(x262%(x263*x264)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x269 = UINT16_MAX;
	static int8_t x270 = INT8_MIN;
	static int8_t x271 = -1;
	int8_t x272 = 31;
	int32_t t45 = -1;

    t45 = (x269>(x270%(x271*x272)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint64_t x274 = 846353242282LLU;
	static int8_t x275 = 6;
	int32_t x276 = -1;

    t46 = (x273>(x274%(x275*x276)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x277 = -1228191;
	int64_t x278 = INT64_MIN;
	int32_t x279 = INT32_MIN;
	int32_t t47 = 112;

    t47 = (x277>(x278%(x279*x280)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x281 = INT32_MIN;
	int16_t x282 = -418;
	static int8_t x283 = 31;
	int32_t t48 = -1459370;

    t48 = (x281>(x282%(x283*x284)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x285 = INT64_MIN;
	uint8_t x286 = 4U;
	volatile uint32_t x288 = 15U;
	volatile int32_t t49 = -32;

    t49 = (x285>(x286%(x287*x288)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint32_t x297 = UINT32_MAX;
	int32_t x298 = 5892;
	static uint64_t x299 = 4486704236001664LLU;
	int32_t x300 = INT32_MIN;
	int32_t t50 = -486419;

    t50 = (x297>(x298%(x299*x300)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x301 = -1;
	int8_t x302 = INT8_MIN;
	static volatile int64_t x303 = -1LL;
	uint32_t x304 = 43628103U;
	static volatile int32_t t51 = -251;

    t51 = (x301>(x302%(x303*x304)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int32_t x305 = -1;
	int64_t x306 = INT64_MIN;
	static int8_t x307 = -1;
	static int8_t x308 = INT8_MIN;
	static volatile int32_t t52 = -148;

    t52 = (x305>(x306%(x307*x308)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint32_t x309 = UINT32_MAX;
	int16_t x311 = INT16_MIN;
	int64_t x312 = -75620533655985LL;
	volatile int32_t t53 = -7848;

    t53 = (x309>(x310%(x311*x312)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x317 = 331;
	volatile uint64_t x319 = UINT64_MAX;
	int8_t x320 = INT8_MIN;
	static volatile int32_t t54 = 0;

    t54 = (x317>(x318%(x319*x320)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint8_t x322 = UINT8_MAX;
	uint64_t x323 = UINT64_MAX;
	volatile int16_t x324 = INT16_MAX;
	static int32_t t55 = -36679;

    t55 = (x321>(x322%(x323*x324)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x337 = 0;
	static int16_t x338 = 56;
	int8_t x340 = 6;
	volatile int32_t t56 = 0;

    t56 = (x337>(x338%(x339*x340)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x345 = -1;
	static int8_t x346 = INT8_MIN;
	uint64_t x347 = 78322186LLU;
	static int8_t x348 = INT8_MAX;
	int32_t t57 = 48702;

    t57 = (x345>(x346%(x347*x348)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x349 = -1;
	int32_t x350 = 996454559;
	static int16_t x351 = 250;
	volatile int8_t x352 = -1;
	volatile int32_t t58 = 35663261;

    t58 = (x349>(x350%(x351*x352)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x357 = -1;
	static volatile int8_t x358 = INT8_MIN;
	volatile uint32_t x359 = 11U;
	volatile int32_t t59 = 963201893;

    t59 = (x357>(x358%(x359*x360)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x361 = INT16_MIN;
	int32_t x362 = INT32_MIN;
	int8_t x363 = INT8_MAX;

    t60 = (x361>(x362%(x363*x364)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint8_t x365 = UINT8_MAX;
	volatile int32_t x366 = INT32_MIN;
	volatile int16_t x368 = 21;
	volatile int32_t t61 = 325;

    t61 = (x365>(x366%(x367*x368)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int32_t x369 = -229;
	static int16_t x371 = -1;

    t62 = (x369>(x370%(x371*x372)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x373 = INT32_MAX;
	static int8_t x374 = INT8_MIN;
	uint64_t x375 = UINT64_MAX;
	volatile uint8_t x376 = 4U;
	volatile int32_t t63 = 434796648;

    t63 = (x373>(x374%(x375*x376)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x377 = -110844;
	int64_t x378 = INT64_MAX;
	int32_t t64 = 53241;

    t64 = (x377>(x378%(x379*x380)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x389 = INT32_MAX;
	uint8_t x390 = 3U;
	uint16_t x391 = 653U;
	volatile int8_t x392 = INT8_MIN;
	int32_t t65 = 413154870;

    t65 = (x389>(x390%(x391*x392)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int16_t x393 = -1;
	static int32_t x394 = INT32_MAX;
	int16_t x395 = -1;
	volatile int32_t t66 = -1852;

    t66 = (x393>(x394%(x395*x396)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x397 = INT16_MIN;
	int64_t x398 = -235757311107311581LL;
	static uint8_t x399 = 1U;
	int32_t t67 = 1309331;

    t67 = (x397>(x398%(x399*x400)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint64_t x401 = 2087317331LLU;
	int8_t x402 = INT8_MAX;
	uint8_t x403 = 25U;

    t68 = (x401>(x402%(x403*x404)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x405 = -58;
	volatile uint16_t x406 = UINT16_MAX;
	volatile int64_t x407 = 719203LL;
	int64_t x408 = 727970097LL;
	volatile int32_t t69 = 154;

    t69 = (x405>(x406%(x407*x408)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x409 = -1LL;
	int16_t x410 = -1;
	uint64_t x411 = 397121LLU;
	int16_t x412 = INT16_MIN;
	int32_t t70 = 515901;

    t70 = (x409>(x410%(x411*x412)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint8_t x413 = UINT8_MAX;
	int32_t x415 = -945;
	volatile int64_t x416 = -687956571383070LL;
	volatile int32_t t71 = 840518;

    t71 = (x413>(x414%(x415*x416)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x417 = 23314LLU;
	int8_t x418 = -1;
	static int8_t x419 = INT8_MAX;
	int32_t x420 = -1;
	int32_t t72 = 146;

    t72 = (x417>(x418%(x419*x420)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint8_t x422 = UINT8_MAX;
	int64_t x423 = INT64_MAX;
	int32_t t73 = 1005465;

    t73 = (x421>(x422%(x423*x424)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x425 = INT32_MAX;
	static int64_t x426 = INT64_MIN;
	uint16_t x427 = 6U;
	volatile int32_t t74 = -20717806;

    t74 = (x425>(x426%(x427*x428)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint32_t x430 = UINT32_MAX;
	static uint64_t x431 = 432827061188025622LLU;
	uint16_t x432 = 105U;
	volatile int32_t t75 = 2;

    t75 = (x429>(x430%(x431*x432)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile int8_t x437 = INT8_MAX;
	int64_t x438 = INT64_MIN;
	int32_t x439 = INT32_MAX;
	uint64_t x440 = UINT64_MAX;

    t76 = (x437>(x438%(x439*x440)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint8_t x449 = 22U;
	volatile int16_t x450 = INT16_MIN;
	uint32_t x451 = 26108815U;
	static uint32_t x452 = 25859812U;
	int32_t t77 = -9108;

    t77 = (x449>(x450%(x451*x452)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x453 = INT16_MAX;
	static int16_t x454 = INT16_MAX;
	int32_t x455 = INT32_MAX;
	int8_t x456 = -1;
	volatile int32_t t78 = -31332;

    t78 = (x453>(x454%(x455*x456)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x465 = -32493LL;
	int32_t x466 = INT32_MIN;
	int32_t x467 = INT32_MAX;
	uint64_t x468 = 331550035657958LLU;

    t79 = (x465>(x466%(x467*x468)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x469 = 0LLU;
	int8_t x470 = 1;
	int16_t x471 = INT16_MAX;
	volatile int32_t x472 = 1103;

    t80 = (x469>(x470%(x471*x472)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x477 = UINT64_MAX;
	int16_t x478 = 32;
	static volatile int64_t x479 = -60LL;
	static int64_t x480 = 222LL;
	int32_t t81 = -15262;

    t81 = (x477>(x478%(x479*x480)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint8_t x490 = 17U;
	volatile int32_t t82 = 165633327;

    t82 = (x489>(x490%(x491*x492)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x493 = -10;
	static int8_t x494 = INT8_MIN;
	int32_t x496 = -6450155;
	volatile int32_t t83 = -20203;

    t83 = (x493>(x494%(x495*x496)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int8_t x501 = INT8_MAX;
	uint64_t x503 = 450386241072612LLU;
	static volatile int32_t x504 = 2398;
	volatile int32_t t84 = -2784;

    t84 = (x501>(x502%(x503*x504)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint8_t x505 = 56U;
	int8_t x506 = INT8_MIN;
	int8_t x507 = -1;
	int32_t t85 = -389;

    t85 = (x505>(x506%(x507*x508)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x509 = INT16_MIN;
	static volatile uint8_t x510 = 117U;
	static int32_t x511 = -1;
	int16_t x512 = INT16_MAX;
	static volatile int32_t t86 = 111484;

    t86 = (x509>(x510%(x511*x512)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int64_t x513 = INT64_MIN;
	static int64_t x514 = INT64_MIN;
	int32_t x515 = -1;
	volatile int32_t t87 = -188839334;

    t87 = (x513>(x514%(x515*x516)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x517 = 965544913754749760LL;
	int8_t x518 = 42;
	uint64_t x520 = 14487606920563LLU;
	volatile int32_t t88 = 1;

    t88 = (x517>(x518%(x519*x520)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint32_t x529 = 1U;
	int16_t x530 = 3;
	int8_t x531 = INT8_MIN;
	int32_t t89 = -255840;

    t89 = (x529>(x530%(x531*x532)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint64_t x537 = UINT64_MAX;
	uint8_t x538 = 2U;
	int8_t x539 = INT8_MIN;

    t90 = (x537>(x538%(x539*x540)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x541 = 148U;
	volatile int64_t x542 = INT64_MIN;
	int32_t x544 = -1;

    t91 = (x541>(x542%(x543*x544)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x545 = UINT8_MAX;
	static uint32_t x546 = 1808U;
	uint64_t x547 = 789426841752276253LLU;
	volatile uint16_t x548 = 52U;
	volatile int32_t t92 = 679;

    t92 = (x545>(x546%(x547*x548)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x549 = 1U;
	uint64_t x551 = 1096LLU;
	int32_t x552 = 8331289;
	int32_t t93 = -3105;

    t93 = (x549>(x550%(x551*x552)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int32_t x553 = -1;
	uint32_t x555 = 12877458U;
	int32_t x556 = -1;
	int32_t t94 = 0;

    t94 = (x553>(x554%(x555*x556)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x557 = UINT64_MAX;
	int32_t x558 = -53362327;
	volatile int8_t x559 = 16;
	int32_t x560 = 50969;
	volatile int32_t t95 = 5231347;

    t95 = (x557>(x558%(x559*x560)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x561 = 2462605U;
	uint8_t x562 = UINT8_MAX;
	static int8_t x563 = -1;
	static int64_t x564 = -12548446632196LL;

    t96 = (x561>(x562%(x563*x564)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x569 = 6618;
	static int64_t x570 = INT64_MAX;
	uint32_t x571 = UINT32_MAX;
	static uint8_t x572 = 39U;

    t97 = (x569>(x570%(x571*x572)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint64_t x573 = 4300574578LLU;
	static uint16_t x574 = 6768U;
	int16_t x575 = INT16_MIN;
	int32_t x576 = -428;
	volatile int32_t t98 = 1;

    t98 = (x573>(x574%(x575*x576)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x577 = -1;
	uint8_t x578 = UINT8_MAX;
	volatile int32_t x579 = INT32_MIN;
	int8_t x580 = 1;
	volatile int32_t t99 = 5;

    t99 = (x577>(x578%(x579*x580)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x581 = UINT32_MAX;
	uint32_t x582 = 3115U;
	volatile int32_t x583 = -1361;

    t100 = (x581>(x582%(x583*x584)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint32_t x601 = UINT32_MAX;
	int8_t x602 = -1;
	static uint16_t x603 = 44U;
	volatile int32_t t101 = 24255;

    t101 = (x601>(x602%(x603*x604)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x605 = 2U;
	static int16_t x608 = -1;
	volatile int32_t t102 = -4322;

    t102 = (x605>(x606%(x607*x608)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x617 = 756;
	int32_t x619 = 172448;
	uint32_t x620 = 372U;
	volatile int32_t t103 = -8713868;

    t103 = (x617>(x618%(x619*x620)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x625 = -6;
	int16_t x626 = INT16_MIN;
	static volatile uint64_t x627 = 4638949LLU;
	uint8_t x628 = 62U;

    t104 = (x625>(x626%(x627*x628)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x629 = 857739U;
	int32_t x630 = INT32_MAX;
	static int64_t x631 = -1LL;
	int16_t x632 = INT16_MAX;
	static int32_t t105 = -205450;

    t105 = (x629>(x630%(x631*x632)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x637 = -1;
	int64_t x638 = INT64_MIN;
	int8_t x639 = -1;
	volatile int32_t t106 = 0;

    t106 = (x637>(x638%(x639*x640)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x641 = 115U;
	volatile uint8_t x642 = UINT8_MAX;
	volatile int16_t x644 = -1;

    t107 = (x641>(x642%(x643*x644)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x654 = -1;
	uint64_t x655 = UINT64_MAX;
	int64_t x656 = 49LL;
	volatile int32_t t108 = 7165584;

    t108 = (x653>(x654%(x655*x656)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x666 = INT32_MAX;
	uint64_t x668 = 86LLU;
	int32_t t109 = -34534586;

    t109 = (x665>(x666%(x667*x668)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x669 = 3733;
	static uint8_t x670 = UINT8_MAX;
	static int8_t x671 = INT8_MIN;
	volatile uint64_t x672 = UINT64_MAX;
	int32_t t110 = -97027;

    t110 = (x669>(x670%(x671*x672)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x685 = INT16_MIN;
	int32_t x686 = 211111613;
	int16_t x687 = INT16_MIN;
	int32_t x688 = -1;
	static int32_t t111 = -30;

    t111 = (x685>(x686%(x687*x688)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x693 = INT32_MIN;
	int64_t x694 = INT64_MIN;
	uint16_t x696 = UINT16_MAX;
	int32_t t112 = 0;

    t112 = (x693>(x694%(x695*x696)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int32_t x697 = INT32_MIN;
	volatile int8_t x698 = -1;
	volatile int32_t x700 = -1;
	int32_t t113 = -1013;

    t113 = (x697>(x698%(x699*x700)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint8_t x705 = 23U;
	volatile int16_t x706 = -2;
	int8_t x707 = INT8_MIN;
	int16_t x708 = -10;
	int32_t t114 = 7091;

    t114 = (x705>(x706%(x707*x708)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile uint16_t x709 = 0U;
	int8_t x711 = -5;

    t115 = (x709>(x710%(x711*x712)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint32_t x714 = 3578U;
	int8_t x716 = INT8_MAX;
	static int32_t t116 = 628437;

    t116 = (x713>(x714%(x715*x716)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x719 = UINT16_MAX;
	int32_t t117 = 15571;

    t117 = (x717>(x718%(x719*x720)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x721 = -611;
	uint32_t x722 = 977071U;
	volatile uint32_t x723 = UINT32_MAX;
	int8_t x724 = INT8_MAX;
	volatile int32_t t118 = 7;

    t118 = (x721>(x722%(x723*x724)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x725 = INT16_MAX;
	int64_t x727 = -496LL;

    t119 = (x725>(x726%(x727*x728)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x729 = INT8_MIN;
	uint64_t x731 = 15845122305088293LLU;
	static int8_t x732 = INT8_MIN;
	int32_t t120 = -446982;

    t120 = (x729>(x730%(x731*x732)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x738 = 30716046LLU;
	uint16_t x739 = UINT16_MAX;
	int32_t t121 = -17;

    t121 = (x737>(x738%(x739*x740)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x741 = INT32_MIN;
	int64_t x743 = -1LL;

    t122 = (x741>(x742%(x743*x744)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x746 = INT8_MAX;
	uint16_t x748 = 1U;
	int32_t t123 = 85;

    t123 = (x745>(x746%(x747*x748)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x749 = -77;
	int32_t x750 = 0;
	int8_t x752 = INT8_MAX;
	static volatile int32_t t124 = 742080;

    t124 = (x749>(x750%(x751*x752)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x753 = 20;
	volatile uint32_t x754 = UINT32_MAX;
	static uint64_t x755 = 15LLU;
	static int64_t x756 = INT64_MAX;
	int32_t t125 = 81;

    t125 = (x753>(x754%(x755*x756)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x757 = -15LL;
	volatile int8_t x758 = INT8_MAX;
	int32_t x759 = 3195548;
	uint32_t x760 = 7766666U;
	volatile int32_t t126 = -17;

    t126 = (x757>(x758%(x759*x760)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x764 = 3001;
	int32_t t127 = 24;

    t127 = (x761>(x762%(x763*x764)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x765 = INT8_MIN;
	static int32_t x766 = INT32_MAX;
	uint32_t x767 = UINT32_MAX;
	int32_t t128 = -1369;

    t128 = (x765>(x766%(x767*x768)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x781 = INT8_MAX;
	static int16_t x782 = 78;
	static uint64_t x783 = UINT64_MAX;
	static int8_t x784 = INT8_MIN;
	int32_t t129 = 2649;

    t129 = (x781>(x782%(x783*x784)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x787 = INT16_MIN;
	uint64_t x788 = UINT64_MAX;
	static volatile int32_t t130 = -24094;

    t130 = (x785>(x786%(x787*x788)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x793 = -168;
	static int64_t x794 = INT64_MIN;

    t131 = (x793>(x794%(x795*x796)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x797 = -7;
	volatile uint64_t x798 = 10853229LLU;
	static volatile int32_t x799 = -31268649;
	volatile int32_t t132 = 598873190;

    t132 = (x797>(x798%(x799*x800)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x805 = INT32_MIN;
	uint8_t x806 = UINT8_MAX;
	uint32_t x807 = 13196235U;
	static int16_t x808 = INT16_MIN;
	static volatile int32_t t133 = 13184;

    t133 = (x805>(x806%(x807*x808)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x821 = 24651290113979632LL;
	volatile uint16_t x823 = 6784U;
	int16_t x824 = -1;

    t134 = (x821>(x822%(x823*x824)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x841 = INT32_MAX;
	uint16_t x842 = 6U;
	uint32_t x844 = UINT32_MAX;
	int32_t t135 = -29;

    t135 = (x841>(x842%(x843*x844)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x849 = INT16_MAX;
	static int8_t x850 = 3;
	uint64_t x851 = 48LLU;
	volatile int16_t x852 = -1;

    t136 = (x849>(x850%(x851*x852)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static int16_t x853 = -2026;
	int16_t x854 = INT16_MIN;
	volatile uint16_t x856 = UINT16_MAX;
	static int32_t t137 = 979;

    t137 = (x853>(x854%(x855*x856)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint64_t x857 = UINT64_MAX;
	volatile int8_t x858 = 1;
	int32_t x859 = INT32_MIN;
	int32_t t138 = 0;

    t138 = (x857>(x858%(x859*x860)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x861 = INT64_MIN;
	static int16_t x862 = 57;
	static int16_t x863 = 1;
	int16_t x864 = -1;
	int32_t t139 = 3;

    t139 = (x861>(x862%(x863*x864)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x873 = -1;
	volatile int8_t x874 = 1;
	uint64_t x876 = 27695LLU;
	int32_t t140 = -15;

    t140 = (x873>(x874%(x875*x876)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x878 = INT64_MIN;
	volatile int32_t t141 = -25434271;

    t141 = (x877>(x878%(x879*x880)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint64_t x881 = UINT64_MAX;
	static int8_t x882 = INT8_MAX;
	volatile int8_t x884 = INT8_MIN;
	volatile int32_t t142 = 0;

    t142 = (x881>(x882%(x883*x884)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int8_t x885 = -1;
	uint64_t x886 = 18068541509575748LLU;
	static int16_t x887 = INT16_MIN;
	static int16_t x888 = -13898;
	static int32_t t143 = -70;

    t143 = (x885>(x886%(x887*x888)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x889 = INT64_MAX;
	static int8_t x891 = INT8_MAX;
	int16_t x892 = INT16_MIN;
	volatile int32_t t144 = -28072;

    t144 = (x889>(x890%(x891*x892)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x893 = 19302U;
	uint32_t x894 = 2051688538U;
	volatile uint64_t x896 = 214181185567592LLU;
	volatile int32_t t145 = -1;

    t145 = (x893>(x894%(x895*x896)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x897 = 5338U;
	volatile int16_t x898 = 475;
	int32_t x899 = -1;
	int64_t x900 = -1LL;
	int32_t t146 = -13446364;

    t146 = (x897>(x898%(x899*x900)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x905 = INT64_MIN;
	uint64_t x906 = UINT64_MAX;
	int8_t x907 = -1;
	int32_t x908 = -198943;

    t147 = (x905>(x906%(x907*x908)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x913 = UINT8_MAX;
	static int32_t x914 = -51657;
	int32_t t148 = 8;

    t148 = (x913>(x914%(x915*x916)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x925 = INT8_MIN;
	volatile int8_t x926 = INT8_MIN;
	int16_t x927 = INT16_MIN;
	int16_t x928 = -969;

    t149 = (x925>(x926%(x927*x928)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint8_t x941 = 0U;
	uint64_t x942 = UINT64_MAX;
	int64_t x944 = INT64_MIN;
	int32_t t150 = -11667944;

    t150 = (x941>(x942%(x943*x944)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x945 = 21LLU;
	uint32_t x947 = UINT32_MAX;
	volatile int16_t x948 = INT16_MIN;
	volatile int32_t t151 = -110;

    t151 = (x945>(x946%(x947*x948)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x949 = 1685778LLU;
	int64_t x950 = INT64_MAX;
	uint32_t x951 = 20706U;
	int8_t x952 = 17;
	static volatile int32_t t152 = 231870;

    t152 = (x949>(x950%(x951*x952)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x961 = INT64_MAX;
	static uint16_t x962 = 4U;
	int8_t x963 = 13;
	static uint64_t x964 = 2382888104LLU;
	volatile int32_t t153 = 68993;

    t153 = (x961>(x962%(x963*x964)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint64_t x965 = UINT64_MAX;
	uint64_t x966 = 15900925LLU;
	volatile uint32_t x967 = 402093U;
	int8_t x968 = INT8_MAX;
	volatile int32_t t154 = -65;

    t154 = (x965>(x966%(x967*x968)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x969 = -675;
	int64_t x971 = -1LL;
	uint64_t x972 = UINT64_MAX;
	volatile int32_t t155 = 8830106;

    t155 = (x969>(x970%(x971*x972)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static int32_t x973 = -113546257;
	int32_t x974 = INT32_MIN;
	static uint32_t x975 = 192U;
	volatile uint16_t x976 = 66U;

    t156 = (x973>(x974%(x975*x976)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x982 = INT16_MIN;
	volatile int16_t x983 = 29;
	int32_t x984 = -1;
	int32_t t157 = -1;

    t157 = (x981>(x982%(x983*x984)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static int16_t x986 = 0;
	volatile int8_t x988 = INT8_MIN;
	static volatile int32_t t158 = 2;

    t158 = (x985>(x986%(x987*x988)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x997 = -1;
	int32_t x998 = 3830028;
	int16_t x1000 = -6112;
	int32_t t159 = 0;

    t159 = (x997>(x998%(x999*x1000)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int16_t x1001 = INT16_MIN;
	static volatile int64_t x1004 = -1LL;

    t160 = (x1001>(x1002%(x1003*x1004)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint16_t x1005 = 61U;
	int16_t x1006 = -1;
	int64_t x1007 = -1948914LL;
	static int32_t x1008 = INT32_MIN;

    t161 = (x1005>(x1006%(x1007*x1008)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x1009 = INT16_MIN;
	uint8_t x1010 = 0U;
	volatile int16_t x1011 = INT16_MIN;
	volatile int8_t x1012 = 2;
	static int32_t t162 = -363172156;

    t162 = (x1009>(x1010%(x1011*x1012)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x1017 = -1;
	volatile int32_t t163 = 11;

    t163 = (x1017>(x1018%(x1019*x1020)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint64_t x1021 = UINT64_MAX;
	uint16_t x1022 = 9830U;
	int64_t x1023 = -6LL;
	int16_t x1024 = 12123;
	static int32_t t164 = 10;

    t164 = (x1021>(x1022%(x1023*x1024)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x1025 = INT16_MIN;
	volatile int32_t t165 = 756;

    t165 = (x1025>(x1026%(x1027*x1028)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x1029 = -191958574LL;
	static int32_t x1030 = INT32_MIN;
	volatile int32_t t166 = 168683;

    t166 = (x1029>(x1030%(x1031*x1032)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint8_t x1033 = 73U;
	int32_t x1034 = INT32_MAX;

    t167 = (x1033>(x1034%(x1035*x1036)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x1037 = INT8_MIN;
	uint32_t x1039 = 33202313U;
	volatile int16_t x1040 = -1;
	int32_t t168 = 3;

    t168 = (x1037>(x1038%(x1039*x1040)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x1042 = INT64_MIN;
	uint32_t x1043 = UINT32_MAX;
	int32_t t169 = 3061447;

    t169 = (x1041>(x1042%(x1043*x1044)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x1045 = INT8_MAX;
	int16_t x1046 = -1;
	int16_t x1047 = INT16_MIN;
	uint8_t x1048 = UINT8_MAX;
	volatile int32_t t170 = -468325;

    t170 = (x1045>(x1046%(x1047*x1048)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x1049 = -1;
	int16_t x1050 = INT16_MAX;
	uint64_t x1051 = 45014893LLU;
	int16_t x1052 = -940;
	volatile int32_t t171 = 0;

    t171 = (x1049>(x1050%(x1051*x1052)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint64_t x1053 = UINT64_MAX;
	uint8_t x1054 = 45U;
	int16_t x1055 = INT16_MIN;
	int32_t t172 = 329638;

    t172 = (x1053>(x1054%(x1055*x1056)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x1061 = INT64_MAX;
	int64_t x1062 = INT64_MAX;
	uint64_t x1063 = 927LLU;
	int16_t x1064 = INT16_MAX;
	int32_t t173 = -3;

    t173 = (x1061>(x1062%(x1063*x1064)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x1065 = INT16_MIN;
	volatile int16_t x1066 = -1;
	static uint8_t x1068 = UINT8_MAX;
	int32_t t174 = 1;

    t174 = (x1065>(x1066%(x1067*x1068)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x1075 = -1LL;
	int8_t x1076 = -1;
	volatile int32_t t175 = -219583427;

    t175 = (x1073>(x1074%(x1075*x1076)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x1077 = 13LLU;
	static int8_t x1080 = -26;
	volatile int32_t t176 = 225366;

    t176 = (x1077>(x1078%(x1079*x1080)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x1085 = 4687573092LLU;
	int8_t x1086 = -1;
	int32_t t177 = 47935;

    t177 = (x1085>(x1086%(x1087*x1088)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x1093 = 13U;
	uint8_t x1094 = 69U;
	int32_t x1096 = -1;
	static int32_t t178 = 10434195;

    t178 = (x1093>(x1094%(x1095*x1096)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x1097 = -1LL;
	volatile uint8_t x1098 = UINT8_MAX;
	int16_t x1099 = INT16_MAX;
	volatile int16_t x1100 = 42;
	static volatile int32_t t179 = 236469644;

    t179 = (x1097>(x1098%(x1099*x1100)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x1102 = INT32_MIN;
	int32_t t180 = 612323472;

    t180 = (x1101>(x1102%(x1103*x1104)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static int16_t x1105 = -8;
	int8_t x1106 = 8;
	volatile int8_t x1107 = -1;
	int64_t x1108 = INT64_MAX;

    t181 = (x1105>(x1106%(x1107*x1108)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x1113 = UINT64_MAX;
	int64_t x1114 = -111229900740096LL;
	uint32_t x1115 = 127U;
	int64_t x1116 = -1LL;
	volatile int32_t t182 = -9349;

    t182 = (x1113>(x1114%(x1115*x1116)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x1117 = -1LL;
	volatile uint16_t x1118 = 1U;
	int64_t x1119 = 15799851631LL;
	volatile int8_t x1120 = -1;
	volatile int32_t t183 = -6576;

    t183 = (x1117>(x1118%(x1119*x1120)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x1123 = 1;
	static volatile int32_t t184 = 1;

    t184 = (x1121>(x1122%(x1123*x1124)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x1126 = INT8_MIN;
	int64_t x1127 = INT64_MAX;
	int16_t x1128 = -1;
	int32_t t185 = 4870;

    t185 = (x1125>(x1126%(x1127*x1128)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint16_t x1129 = 7919U;
	int32_t x1130 = INT32_MAX;
	volatile int16_t x1131 = -1;

    t186 = (x1129>(x1130%(x1131*x1132)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x1133 = 1U;
	volatile uint8_t x1134 = UINT8_MAX;
	int8_t x1135 = -3;
	int64_t x1136 = -1LL;

    t187 = (x1133>(x1134%(x1135*x1136)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint64_t x1137 = 730156602791761LLU;
	static int16_t x1138 = -1;
	int32_t x1139 = -1;
	volatile int16_t x1140 = -1;
	static int32_t t188 = -3;

    t188 = (x1137>(x1138%(x1139*x1140)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x1141 = 8201U;
	uint32_t x1142 = UINT32_MAX;
	uint32_t x1143 = 79308U;
	static uint8_t x1144 = 40U;
	volatile int32_t t189 = -210812;

    t189 = (x1141>(x1142%(x1143*x1144)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x1145 = -1;
	volatile int32_t x1146 = 398070;
	int32_t x1147 = INT32_MAX;
	int32_t t190 = 25425;

    t190 = (x1145>(x1146%(x1147*x1148)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x1155 = UINT16_MAX;
	uint8_t x1156 = UINT8_MAX;
	volatile int32_t t191 = 112849751;

    t191 = (x1153>(x1154%(x1155*x1156)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x1158 = -7;
	int64_t x1159 = 36555152811LL;
	static int8_t x1160 = INT8_MIN;

    t192 = (x1157>(x1158%(x1159*x1160)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x1161 = 0;
	volatile int8_t x1162 = INT8_MAX;
	volatile int8_t x1163 = INT8_MAX;
	uint8_t x1164 = 2U;

    t193 = (x1161>(x1162%(x1163*x1164)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x1165 = 64317272LL;
	int8_t x1166 = 1;
	volatile uint16_t x1167 = 192U;
	static volatile int32_t t194 = 6380763;

    t194 = (x1165>(x1166%(x1167*x1168)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int64_t x1170 = 11979077056219LL;
	uint64_t x1172 = 4LLU;
	int32_t t195 = 640;

    t195 = (x1169>(x1170%(x1171*x1172)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x1177 = -11204814;
	int64_t x1178 = -5710LL;
	uint32_t x1179 = UINT32_MAX;
	static int16_t x1180 = -1;
	int32_t t196 = -125710316;

    t196 = (x1177>(x1178%(x1179*x1180)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x1189 = UINT8_MAX;
	int16_t x1191 = 79;
	static int8_t x1192 = INT8_MAX;
	volatile int32_t t197 = -608671;

    t197 = (x1189>(x1190%(x1191*x1192)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x1193 = 1U;
	static uint32_t x1194 = UINT32_MAX;
	uint8_t x1196 = 26U;
	volatile int32_t t198 = -11770;

    t198 = (x1193>(x1194%(x1195*x1196)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x1197 = 13777525080297045LLU;
	uint32_t x1200 = 1U;
	int32_t t199 = -935749655;

    t199 = (x1197>(x1198%(x1199*x1200)));

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

