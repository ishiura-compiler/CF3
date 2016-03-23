
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

volatile int8_t x4 = INT8_MIN;
int32_t x11 = INT32_MIN;
int32_t t2 = 22;
int8_t x22 = -1;
int8_t x24 = 27;
int8_t x25 = 4;
static uint32_t x28 = UINT32_MAX;
volatile int32_t t7 = -380;
int32_t t10 = -775852479;
int32_t x45 = INT32_MIN;
volatile int16_t x51 = -1;
int64_t x57 = -1LL;
int32_t x61 = 3736;
static uint16_t x68 = 42U;
uint32_t x74 = 3U;
volatile int32_t t23 = -14;
volatile uint64_t x104 = 14876785105747LLU;
uint16_t x110 = 220U;
int32_t x111 = INT32_MIN;
volatile uint32_t t27 = 9U;
int64_t x118 = 390201516342086806LL;
int8_t x124 = INT8_MIN;
int32_t x126 = -1;
int64_t x128 = INT64_MAX;
int8_t x129 = -2;
int32_t t33 = -707;
volatile int64_t x138 = INT64_MIN;
static uint32_t x139 = 52090U;
int32_t x145 = -931952;
int8_t x146 = INT8_MIN;
static int8_t x153 = 3;
int32_t t38 = 102;
volatile uint16_t x182 = 23341U;
volatile int32_t t44 = -90724;
volatile uint8_t x188 = UINT8_MAX;
int64_t t46 = 86862LL;
int32_t x194 = INT32_MIN;
volatile int16_t x196 = -2548;
volatile int32_t t48 = -849525;
int16_t x203 = -18;
volatile int8_t x205 = -13;
int32_t x210 = INT32_MIN;
volatile int16_t x215 = -1;
static int64_t x220 = INT64_MAX;
int64_t t53 = 35095970649775389LL;
volatile int64_t t54 = -5LL;
int32_t x230 = -36280;
int8_t x232 = -1;
static int32_t t56 = -497404;
volatile int8_t x235 = INT8_MIN;
uint32_t x239 = UINT32_MAX;
int32_t x241 = INT32_MIN;
volatile int16_t x242 = INT16_MAX;
static uint64_t x244 = 905249208979158125LLU;
int32_t x245 = -129166;
int64_t x251 = INT64_MAX;
int8_t x279 = 1;
static volatile int32_t t69 = 64316;
int32_t t71 = -3032203;
uint32_t x300 = 215037958U;
int16_t x304 = 8597;
static volatile int32_t t74 = 2977330;
int8_t x307 = INT8_MAX;
int32_t x310 = INT32_MIN;
volatile uint32_t x315 = UINT32_MAX;
uint32_t t77 = 131U;
static uint8_t x321 = UINT8_MAX;
int16_t x324 = INT16_MIN;
int32_t x327 = 2476600;
volatile int32_t x336 = INT32_MIN;
volatile int64_t t83 = 22301LL;
volatile int32_t t84 = -200316;
int8_t x347 = 1;
uint32_t x349 = UINT32_MAX;
uint64_t t86 = 33199081186LLU;
uint64_t x358 = UINT64_MAX;
uint64_t x361 = 441LLU;
volatile int8_t x365 = 13;
int8_t x366 = INT8_MIN;
static int64_t x367 = INT64_MIN;
static int16_t x368 = INT16_MAX;
volatile uint16_t x374 = UINT16_MAX;
uint8_t x375 = 61U;
uint8_t x380 = UINT8_MAX;
int8_t x381 = INT8_MIN;
static int64_t x384 = 12493146657059LL;
int16_t x388 = INT16_MIN;
volatile uint8_t x393 = UINT8_MAX;
int32_t t100 = -388275;
int32_t x417 = INT32_MIN;
int8_t x419 = -27;
int64_t x422 = -1LL;
volatile uint8_t x423 = 5U;
int8_t x431 = INT8_MIN;
int64_t x433 = -23426952328348LL;
uint32_t x434 = UINT32_MAX;
int32_t x447 = INT32_MIN;
int16_t x448 = 5777;
uint16_t x449 = 1U;
uint16_t x455 = 1U;
int32_t t112 = 399753803;
int8_t x465 = INT8_MIN;
static int32_t x467 = INT32_MAX;
int64_t x475 = 15701598901862LL;
volatile uint16_t x483 = 436U;
static volatile int16_t x485 = -1966;
int64_t t120 = -4LL;
uint16_t x495 = 15U;
static int64_t x496 = INT64_MAX;
int64_t x497 = INT64_MIN;
int64_t x500 = -42864791525LL;
uint16_t x508 = 1U;
int64_t x513 = INT64_MIN;
uint64_t x529 = 151237199876567934LLU;
int8_t x530 = 1;
static uint32_t x534 = 109369U;
int64_t x535 = INT64_MIN;
volatile int32_t x542 = INT32_MIN;
int16_t x545 = -1;
int8_t x546 = -11;
int16_t x547 = -1;
uint64_t x548 = 29254739681310LLU;
int64_t x556 = INT64_MIN;
int64_t x561 = -1LL;
volatile int8_t x564 = -1;
int32_t t139 = -75;
uint32_t x569 = UINT32_MAX;
static int16_t x570 = INT16_MIN;
uint64_t x579 = 215626LLU;
uint32_t x580 = UINT32_MAX;
static int32_t x584 = INT32_MIN;
static int32_t x587 = -1;
int64_t x588 = -1LL;
volatile uint64_t x589 = 35262137459146LLU;
uint64_t x595 = 584999535LLU;
volatile int32_t x597 = INT32_MAX;
uint8_t x600 = UINT8_MAX;
uint8_t x605 = UINT8_MAX;
int32_t x607 = INT32_MIN;
volatile int64_t t151 = -43380209642469978LL;
int64_t x613 = -1LL;
int32_t t155 = 15785082;
int16_t x629 = -1;
static uint32_t t156 = 93523927U;
volatile int16_t x634 = INT16_MAX;
int8_t x636 = -1;
uint64_t x640 = UINT64_MAX;
uint64_t x643 = UINT64_MAX;
uint64_t t160 = 211065LLU;
int8_t x656 = INT8_MAX;
int16_t x658 = INT16_MAX;
int64_t x662 = INT64_MIN;
int32_t t164 = 10006559;
int16_t x666 = INT16_MIN;
static int32_t t166 = -885;
volatile int32_t x677 = INT32_MIN;
static int16_t x680 = INT16_MAX;
static uint64_t x681 = 14670700LLU;
int32_t t171 = 4;
uint64_t x716 = 1711868992LLU;
int8_t x719 = INT8_MAX;
int32_t x720 = INT32_MAX;
static int32_t x721 = -1;
int8_t x727 = INT8_MAX;
int16_t x735 = 2953;
static int64_t x736 = -1LL;
int8_t x745 = 0;
static int64_t x748 = INT64_MIN;
static volatile uint64_t t186 = 214047LLU;
uint8_t x754 = 2U;
int32_t x758 = INT32_MIN;
volatile int32_t x763 = -1;
static volatile int32_t t191 = 47035535;
int16_t x773 = -1;
uint16_t x775 = 13194U;
static int8_t x778 = -1;
int32_t x779 = 205810;
int8_t x780 = INT8_MIN;
volatile int64_t x783 = INT64_MIN;
static int64_t x785 = INT64_MIN;
volatile uint32_t t198 = 1215458U;


void f0(void) {
    	int32_t x1 = INT32_MAX;
	volatile uint64_t x2 = 23613262646129LLU;
	int8_t x3 = 12;
	volatile int32_t t0 = 90080773;

    t0 = (((x1==x2)|x3)%x4);

    if (t0 != 12) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = 3729749LL;
	int32_t x6 = INT32_MIN;
	int16_t x7 = 5;
	uint8_t x8 = 5U;
	int32_t t1 = -120397718;

    t1 = (((x5==x6)|x7)%x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = 0U;
	static volatile int8_t x10 = INT8_MIN;
	static volatile int32_t x12 = INT32_MIN;

    t2 = (((x9==x10)|x11)%x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = -1LL;
	static int32_t x14 = -879622;
	uint64_t x15 = UINT64_MAX;
	static int16_t x16 = -1;
	static volatile uint64_t t3 = 36480LLU;

    t3 = (((x13==x14)|x15)%x16);

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = INT32_MAX;
	volatile int32_t x18 = -1;
	int32_t x19 = INT32_MAX;
	static uint64_t x20 = 31102LLU;
	static uint64_t t4 = 8629799130LLU;

    t4 = (((x17==x18)|x19)%x20);

    if (t4 != 14955LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = 652218;
	uint8_t x23 = 0U;
	volatile int32_t t5 = -26864;

    t5 = (((x21==x22)|x23)%x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x26 = INT32_MAX;
	int64_t x27 = -1LL;
	volatile int64_t t6 = -141LL;

    t6 = (((x25==x26)|x27)%x28);

    if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x29 = 49;
	int16_t x30 = -1;
	static int16_t x31 = -8255;
	uint8_t x32 = 7U;

    t7 = (((x29==x30)|x31)%x32);

    if (t7 != -2) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint32_t x33 = 153255U;
	volatile uint8_t x34 = 14U;
	int16_t x35 = 52;
	volatile uint32_t x36 = 30U;
	static volatile uint32_t t8 = 55223U;

    t8 = (((x33==x34)|x35)%x36);

    if (t8 != 22U) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x37 = 30U;
	int8_t x38 = -1;
	volatile int64_t x39 = INT64_MIN;
	volatile int16_t x40 = INT16_MIN;
	int64_t t9 = -1129041314LL;

    t9 = (((x37==x38)|x39)%x40);

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = 0LL;
	static int16_t x42 = INT16_MAX;
	int16_t x43 = INT16_MAX;
	int32_t x44 = -1;

    t10 = (((x41==x42)|x43)%x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint64_t x46 = 7026034174990285878LLU;
	int64_t x47 = INT64_MIN;
	int8_t x48 = INT8_MAX;
	int64_t t11 = -3707828LL;

    t11 = (((x45==x46)|x47)%x48);

    if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = INT64_MIN;
	uint8_t x50 = 0U;
	int32_t x52 = 113259;
	volatile int32_t t12 = -8032;

    t12 = (((x49==x50)|x51)%x52);

    if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = INT32_MIN;
	uint8_t x54 = 1U;
	int32_t x55 = INT32_MIN;
	int64_t x56 = INT64_MAX;
	volatile int64_t t13 = -1707645LL;

    t13 = (((x53==x54)|x55)%x56);

    if (t13 != -2147483648LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x58 = -6020;
	volatile int16_t x59 = -7013;
	static int32_t x60 = -1;
	int32_t t14 = -233;

    t14 = (((x57==x58)|x59)%x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x62 = 22493U;
	uint64_t x63 = UINT64_MAX;
	int8_t x64 = 1;
	uint64_t t15 = 7447024434766155LLU;

    t15 = (((x61==x62)|x63)%x64);

    if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int16_t x65 = 2520;
	int32_t x66 = INT32_MIN;
	static int8_t x67 = -3;
	int32_t t16 = -94;

    t16 = (((x65==x66)|x67)%x68);

    if (t16 != -3) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = INT64_MAX;
	int64_t x70 = INT64_MIN;
	volatile int16_t x71 = 2775;
	uint16_t x72 = 347U;
	volatile int32_t t17 = -6435589;

    t17 = (((x69==x70)|x71)%x72);

    if (t17 != 346) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = INT8_MAX;
	int16_t x75 = INT16_MIN;
	static int8_t x76 = 3;
	volatile int32_t t18 = -185100313;

    t18 = (((x73==x74)|x75)%x76);

    if (t18 != -2) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = INT8_MIN;
	static int8_t x78 = -1;
	int32_t x79 = INT32_MIN;
	int32_t x80 = INT32_MAX;
	int32_t t19 = -688195381;

    t19 = (((x77==x78)|x79)%x80);

    if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = INT64_MAX;
	int8_t x82 = INT8_MAX;
	volatile int16_t x83 = INT16_MIN;
	volatile int8_t x84 = INT8_MIN;
	volatile int32_t t20 = -30091287;

    t20 = (((x81==x82)|x83)%x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = 1LL;
	uint64_t x86 = UINT64_MAX;
	volatile int64_t x87 = INT64_MIN;
	volatile uint64_t x88 = UINT64_MAX;
	uint64_t t21 = 0LLU;

    t21 = (((x85==x86)|x87)%x88);

    if (t21 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = 1;
	static uint16_t x90 = 1U;
	volatile uint16_t x91 = 2U;
	int64_t x92 = 190LL;
	volatile int64_t t22 = 470LL;

    t22 = (((x89==x90)|x91)%x92);

    if (t22 != 3LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x93 = 6081085LLU;
	uint16_t x94 = UINT16_MAX;
	static int8_t x95 = -38;
	static volatile int8_t x96 = INT8_MIN;

    t23 = (((x93==x94)|x95)%x96);

    if (t23 != -38) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = INT8_MIN;
	volatile int32_t x98 = 222;
	volatile int16_t x99 = 88;
	uint16_t x100 = UINT16_MAX;
	int32_t t24 = -566;

    t24 = (((x97==x98)|x99)%x100);

    if (t24 != 88) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x101 = 56;
	uint64_t x102 = 9366933964590109LLU;
	uint8_t x103 = 118U;
	volatile uint64_t t25 = 1110675703LLU;

    t25 = (((x101==x102)|x103)%x104);

    if (t25 != 118LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = -1;
	volatile uint8_t x106 = 8U;
	int64_t x107 = INT64_MIN;
	int32_t x108 = INT32_MAX;
	volatile int64_t t26 = 10289700073542937LL;

    t26 = (((x105==x106)|x107)%x108);

    if (t26 != -2LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint64_t x109 = 1056531022634LLU;
	uint32_t x112 = 15777566U;

    t27 = (((x109==x110)|x111)%x112);

    if (t27 != 1734672U) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = 343;
	static int16_t x114 = -1;
	uint64_t x115 = 5LLU;
	int32_t x116 = INT32_MIN;
	uint64_t t28 = 130441LLU;

    t28 = (((x113==x114)|x115)%x116);

    if (t28 != 5LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = -1;
	int64_t x119 = -1LL;
	uint8_t x120 = 6U;
	volatile int64_t t29 = -1015610776LL;

    t29 = (((x117==x118)|x119)%x120);

    if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x121 = -5;
	static volatile uint32_t x122 = 66U;
	static int64_t x123 = -1LL;
	volatile int64_t t30 = 20037798113349281LL;

    t30 = (((x121==x122)|x123)%x124);

    if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x125 = 78U;
	static uint64_t x127 = 3358090LLU;
	uint64_t t31 = 25LLU;

    t31 = (((x125==x126)|x127)%x128);

    if (t31 != 3358090LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x130 = INT32_MIN;
	int32_t x131 = -1;
	int16_t x132 = INT16_MIN;
	volatile int32_t t32 = 4063948;

    t32 = (((x129==x130)|x131)%x132);

    if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile uint16_t x133 = 56U;
	int16_t x134 = INT16_MIN;
	int8_t x135 = -1;
	static volatile int32_t x136 = -15731;

    t33 = (((x133==x134)|x135)%x136);

    if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = -1LL;
	int64_t x140 = -1158LL;
	volatile int64_t t34 = -81064225673LL;

    t34 = (((x137==x138)|x139)%x140);

    if (t34 != 1138LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = 1803;
	static volatile int16_t x142 = INT16_MAX;
	int8_t x143 = INT8_MIN;
	volatile int32_t x144 = INT32_MIN;
	volatile int32_t t35 = 997072057;

    t35 = (((x141==x142)|x143)%x144);

    if (t35 != -128) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x147 = -1LL;
	int16_t x148 = INT16_MIN;
	volatile int64_t t36 = 4269944051LL;

    t36 = (((x145==x146)|x147)%x148);

    if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x149 = UINT32_MAX;
	int32_t x150 = 1394874;
	volatile int8_t x151 = -3;
	volatile int32_t x152 = 41;
	volatile int32_t t37 = -659602;

    t37 = (((x149==x150)|x151)%x152);

    if (t37 != -3) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x154 = INT64_MIN;
	static int16_t x155 = 124;
	int8_t x156 = INT8_MIN;

    t38 = (((x153==x154)|x155)%x156);

    if (t38 != 124) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x157 = 955631LL;
	int32_t x158 = -444778932;
	int64_t x159 = INT64_MIN;
	int8_t x160 = INT8_MIN;
	int64_t t39 = -52719071566LL;

    t39 = (((x157==x158)|x159)%x160);

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x165 = INT32_MIN;
	volatile int8_t x166 = INT8_MIN;
	static int8_t x167 = INT8_MIN;
	uint64_t x168 = 1700395445LLU;
	uint64_t t40 = 9920347682613LLU;

    t40 = (((x165==x166)|x167)%x168);

    if (t40 != 876401708LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x169 = -1;
	uint32_t x170 = UINT32_MAX;
	int64_t x171 = -365481598507LL;
	volatile int8_t x172 = INT8_MIN;
	int64_t t41 = 27551LL;

    t41 = (((x169==x170)|x171)%x172);

    if (t41 != -43LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x173 = 161412711060LL;
	int32_t x174 = INT32_MAX;
	int32_t x175 = INT32_MIN;
	int32_t x176 = INT32_MAX;
	int32_t t42 = 152378;

    t42 = (((x173==x174)|x175)%x176);

    if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x177 = -494319;
	uint64_t x178 = 38LLU;
	int8_t x179 = INT8_MAX;
	uint64_t x180 = 1532LLU;
	volatile uint64_t t43 = 395LLU;

    t43 = (((x177==x178)|x179)%x180);

    if (t43 != 127LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x181 = 27LLU;
	static int32_t x183 = -1;
	int8_t x184 = 55;

    t44 = (((x181==x182)|x183)%x184);

    if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x185 = 2417303980537522008LLU;
	int8_t x186 = -3;
	int64_t x187 = -1LL;
	static volatile int64_t t45 = -48708960274LL;

    t45 = (((x185==x186)|x187)%x188);

    if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x189 = 515246U;
	int64_t x190 = -876907157537749856LL;
	int64_t x191 = INT64_MIN;
	int16_t x192 = INT16_MIN;

    t46 = (((x189==x190)|x191)%x192);

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint8_t x193 = 2U;
	int16_t x195 = -4;
	int32_t t47 = -60763456;

    t47 = (((x193==x194)|x195)%x196);

    if (t47 != -4) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x197 = INT64_MAX;
	int8_t x198 = INT8_MAX;
	volatile int32_t x199 = 79843240;
	static volatile int16_t x200 = INT16_MIN;

    t48 = (((x197==x198)|x199)%x200);

    if (t48 != 20392) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x201 = 2U;
	int16_t x202 = 46;
	int32_t x204 = INT32_MIN;
	volatile int32_t t49 = 155982678;

    t49 = (((x201==x202)|x203)%x204);

    if (t49 != -18) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x206 = INT64_MIN;
	volatile int8_t x207 = -1;
	int64_t x208 = 2310548199LL;
	volatile int64_t t50 = 1803193780636627649LL;

    t50 = (((x205==x206)|x207)%x208);

    if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x209 = INT64_MAX;
	static int8_t x211 = INT8_MIN;
	volatile uint64_t x212 = UINT64_MAX;
	uint64_t t51 = 2983850090772LLU;

    t51 = (((x209==x210)|x211)%x212);

    if (t51 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x213 = INT16_MIN;
	int64_t x214 = -337LL;
	uint16_t x216 = 1833U;
	int32_t t52 = -360424938;

    t52 = (((x213==x214)|x215)%x216);

    if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x217 = 9921U;
	static uint32_t x218 = UINT32_MAX;
	static int8_t x219 = INT8_MIN;

    t53 = (((x217==x218)|x219)%x220);

    if (t53 != -128LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x221 = INT8_MAX;
	int32_t x222 = INT32_MAX;
	uint16_t x223 = UINT16_MAX;
	int64_t x224 = INT64_MIN;

    t54 = (((x221==x222)|x223)%x224);

    if (t54 != 65535LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x225 = 24U;
	uint16_t x226 = 4U;
	uint64_t x227 = 256809701LLU;
	volatile int64_t x228 = INT64_MIN;
	uint64_t t55 = 1080237530565087LLU;

    t55 = (((x225==x226)|x227)%x228);

    if (t55 != 256809701LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x229 = -505LL;
	int16_t x231 = INT16_MAX;

    t56 = (((x229==x230)|x231)%x232);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x233 = INT8_MIN;
	int64_t x234 = INT64_MIN;
	static int64_t x236 = -1329520LL;
	volatile int64_t t57 = 2388728885002306745LL;

    t57 = (((x233==x234)|x235)%x236);

    if (t57 != -128LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x237 = -1;
	int8_t x238 = INT8_MAX;
	uint32_t x240 = UINT32_MAX;
	volatile uint32_t t58 = 40692683U;

    t58 = (((x237==x238)|x239)%x240);

    if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x243 = INT64_MIN;
	uint64_t t59 = 3807LLU;

    t59 = (((x241==x242)|x243)%x244);

    if (t59 != 170879947063194558LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x246 = -16;
	uint32_t x247 = 101817U;
	int32_t x248 = 9;
	uint32_t t60 = 6366U;

    t60 = (((x245==x246)|x247)%x248);

    if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x249 = 0LLU;
	int32_t x250 = INT32_MIN;
	int8_t x252 = -1;
	int64_t t61 = 1LL;

    t61 = (((x249==x250)|x251)%x252);

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x253 = 4044;
	static uint16_t x254 = 128U;
	static int8_t x255 = INT8_MIN;
	int32_t x256 = -48445;
	volatile int32_t t62 = 539810972;

    t62 = (((x253==x254)|x255)%x256);

    if (t62 != -128) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x257 = -11792989589898732LL;
	volatile int16_t x258 = -1;
	int32_t x259 = INT32_MIN;
	int16_t x260 = -1;
	int32_t t63 = -383790;

    t63 = (((x257==x258)|x259)%x260);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x261 = 10139152238LLU;
	static uint32_t x262 = 2502284U;
	static int64_t x263 = INT64_MIN;
	volatile uint16_t x264 = UINT16_MAX;
	static volatile int64_t t64 = -1941782800435131LL;

    t64 = (((x261==x262)|x263)%x264);

    if (t64 != -32768LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x265 = 66U;
	int16_t x266 = INT16_MAX;
	static uint8_t x267 = UINT8_MAX;
	uint8_t x268 = 1U;
	volatile int32_t t65 = -2385553;

    t65 = (((x265==x266)|x267)%x268);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x269 = -13;
	int32_t x270 = 1414899;
	volatile int64_t x271 = 1787LL;
	uint32_t x272 = UINT32_MAX;
	int64_t t66 = 1126286789512305466LL;

    t66 = (((x269==x270)|x271)%x272);

    if (t66 != 1787LL) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int64_t x273 = INT64_MIN;
	volatile int8_t x274 = -1;
	uint64_t x275 = 234240127581LLU;
	static int8_t x276 = -1;
	volatile uint64_t t67 = 5LLU;

    t67 = (((x273==x274)|x275)%x276);

    if (t67 != 234240127581LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x277 = -1;
	int64_t x278 = 185701978296936267LL;
	uint32_t x280 = 231538658U;
	uint32_t t68 = 24874162U;

    t68 = (((x277==x278)|x279)%x280);

    if (t68 != 1U) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x281 = UINT16_MAX;
	volatile int64_t x282 = -242441062892LL;
	static volatile uint8_t x283 = UINT8_MAX;
	volatile int32_t x284 = -1;

    t69 = (((x281==x282)|x283)%x284);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x285 = -1;
	volatile int32_t x286 = -1;
	uint16_t x287 = 45U;
	int16_t x288 = INT16_MAX;
	static volatile int32_t t70 = -140775;

    t70 = (((x285==x286)|x287)%x288);

    if (t70 != 45) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile uint8_t x289 = UINT8_MAX;
	uint64_t x290 = UINT64_MAX;
	uint8_t x291 = 5U;
	uint8_t x292 = 83U;

    t71 = (((x289==x290)|x291)%x292);

    if (t71 != 5) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint64_t x293 = 1081762172658LLU;
	uint16_t x294 = 19940U;
	volatile int8_t x295 = -1;
	int32_t x296 = 711613;
	volatile int32_t t72 = -14606134;

    t72 = (((x293==x294)|x295)%x296);

    if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x297 = -1;
	static int64_t x298 = -215796404LL;
	volatile int32_t x299 = 336;
	volatile uint32_t t73 = 20U;

    t73 = (((x297==x298)|x299)%x300);

    if (t73 != 336U) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x301 = -3LL;
	static int64_t x302 = INT64_MIN;
	int16_t x303 = INT16_MIN;

    t74 = (((x301==x302)|x303)%x304);

    if (t74 != -6977) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x305 = INT32_MIN;
	volatile int8_t x306 = -1;
	int32_t x308 = INT32_MIN;
	volatile int32_t t75 = 17420;

    t75 = (((x305==x306)|x307)%x308);

    if (t75 != 127) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint8_t x309 = 35U;
	static int32_t x311 = 15494;
	volatile int16_t x312 = INT16_MIN;
	int32_t t76 = -1;

    t76 = (((x309==x310)|x311)%x312);

    if (t76 != 15494) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x313 = -1;
	volatile int64_t x314 = INT64_MIN;
	static int16_t x316 = INT16_MIN;

    t77 = (((x313==x314)|x315)%x316);

    if (t77 != 32767U) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x317 = INT32_MIN;
	int64_t x318 = INT64_MIN;
	uint64_t x319 = 8032237LLU;
	int8_t x320 = INT8_MIN;
	volatile uint64_t t78 = 1582905LLU;

    t78 = (((x317==x318)|x319)%x320);

    if (t78 != 8032237LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x322 = -1;
	int16_t x323 = -1;
	volatile int32_t t79 = 6044;

    t79 = (((x321==x322)|x323)%x324);

    if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x325 = INT8_MIN;
	static uint32_t x326 = 1987U;
	static int8_t x328 = INT8_MIN;
	volatile int32_t t80 = -968693926;

    t80 = (((x325==x326)|x327)%x328);

    if (t80 != 56) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x329 = INT16_MIN;
	uint8_t x330 = UINT8_MAX;
	volatile uint64_t x331 = 69LLU;
	static int16_t x332 = INT16_MAX;
	static volatile uint64_t t81 = 2811738181476LLU;

    t81 = (((x329==x330)|x331)%x332);

    if (t81 != 69LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x333 = UINT8_MAX;
	uint64_t x334 = UINT64_MAX;
	static uint8_t x335 = 3U;
	int32_t t82 = 6974;

    t82 = (((x333==x334)|x335)%x336);

    if (t82 != 3) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint64_t x337 = UINT64_MAX;
	static uint32_t x338 = 2U;
	int64_t x339 = INT64_MIN;
	int16_t x340 = INT16_MAX;

    t83 = (((x337==x338)|x339)%x340);

    if (t83 != -8LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x341 = 0;
	uint8_t x342 = 1U;
	volatile int8_t x343 = INT8_MAX;
	volatile uint8_t x344 = UINT8_MAX;

    t84 = (((x341==x342)|x343)%x344);

    if (t84 != 127) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x345 = -103510592017962LL;
	int32_t x346 = INT32_MAX;
	int8_t x348 = INT8_MIN;
	int32_t t85 = -767;

    t85 = (((x345==x346)|x347)%x348);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x350 = -1006993;
	uint64_t x351 = 216370LLU;
	int8_t x352 = INT8_MIN;

    t86 = (((x349==x350)|x351)%x352);

    if (t86 != 216370LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile int8_t x353 = -1;
	static volatile int16_t x354 = 0;
	int8_t x355 = INT8_MIN;
	uint64_t x356 = 2309LLU;
	uint64_t t87 = 88242271LLU;

    t87 = (((x353==x354)|x355)%x356);

    if (t87 != 563LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint16_t x357 = 173U;
	int64_t x359 = -9517LL;
	int32_t x360 = INT32_MIN;
	volatile int64_t t88 = 412123793LL;

    t88 = (((x357==x358)|x359)%x360);

    if (t88 != -9517LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x362 = 62;
	int8_t x363 = 0;
	int32_t x364 = INT32_MAX;
	int32_t t89 = 0;

    t89 = (((x361==x362)|x363)%x364);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t t90 = -2736LL;

    t90 = (((x365==x366)|x367)%x368);

    if (t90 != -8LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x369 = INT16_MIN;
	volatile uint64_t x370 = UINT64_MAX;
	static uint32_t x371 = 1636990U;
	uint32_t x372 = UINT32_MAX;
	volatile uint32_t t91 = 1784507434U;

    t91 = (((x369==x370)|x371)%x372);

    if (t91 != 1636990U) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x373 = -1;
	int16_t x376 = INT16_MIN;
	volatile int32_t t92 = 5;

    t92 = (((x373==x374)|x375)%x376);

    if (t92 != 61) { NG(); } else { ; }
	
}

void f93(void) {
    	static int32_t x377 = INT32_MIN;
	int64_t x378 = INT64_MAX;
	int64_t x379 = INT64_MIN;
	int64_t t93 = -1LL;

    t93 = (((x377==x378)|x379)%x380);

    if (t93 != -128LL) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int32_t x382 = 378488009;
	volatile int64_t x383 = -2749LL;
	int64_t t94 = -187665LL;

    t94 = (((x381==x382)|x383)%x384);

    if (t94 != -2749LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int8_t x385 = INT8_MIN;
	static int16_t x386 = INT16_MAX;
	int32_t x387 = INT32_MIN;
	static volatile int32_t t95 = 0;

    t95 = (((x385==x386)|x387)%x388);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int64_t x389 = INT64_MIN;
	uint64_t x390 = 240460947474LLU;
	int64_t x391 = -96140LL;
	static volatile uint8_t x392 = 2U;
	volatile int64_t t96 = -11593404LL;

    t96 = (((x389==x390)|x391)%x392);

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x394 = UINT16_MAX;
	int8_t x395 = 47;
	int64_t x396 = INT64_MAX;
	int64_t t97 = 367LL;

    t97 = (((x393==x394)|x395)%x396);

    if (t97 != 47LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x397 = -61;
	static int32_t x398 = INT32_MIN;
	volatile int16_t x399 = INT16_MIN;
	int8_t x400 = -1;
	static volatile int32_t t98 = -76;

    t98 = (((x397==x398)|x399)%x400);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x401 = 2066;
	int16_t x402 = INT16_MIN;
	uint8_t x403 = UINT8_MAX;
	int8_t x404 = INT8_MAX;
	volatile int32_t t99 = 497;

    t99 = (((x401==x402)|x403)%x404);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint32_t x405 = 81U;
	int8_t x406 = INT8_MIN;
	int32_t x407 = INT32_MAX;
	int8_t x408 = INT8_MAX;

    t100 = (((x405==x406)|x407)%x408);

    if (t100 != 7) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x409 = 2694576;
	int32_t x410 = INT32_MIN;
	volatile uint8_t x411 = 46U;
	static int32_t x412 = -1;
	int32_t t101 = 1337;

    t101 = (((x409==x410)|x411)%x412);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int8_t x413 = -1;
	uint16_t x414 = 140U;
	uint64_t x415 = 2716LLU;
	static uint32_t x416 = 2897348U;
	static uint64_t t102 = 116605053670585LLU;

    t102 = (((x413==x414)|x415)%x416);

    if (t102 != 2716LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x418 = INT16_MIN;
	uint8_t x420 = 3U;
	static volatile int32_t t103 = -27794;

    t103 = (((x417==x418)|x419)%x420);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x421 = 20012U;
	int32_t x424 = -1;
	static volatile int32_t t104 = 456;

    t104 = (((x421==x422)|x423)%x424);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x425 = INT8_MAX;
	int16_t x426 = 2;
	uint8_t x427 = 5U;
	int64_t x428 = -13263098515108LL;
	volatile int64_t t105 = 751099773LL;

    t105 = (((x425==x426)|x427)%x428);

    if (t105 != 5LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x429 = 20870693;
	int32_t x430 = -1;
	volatile int64_t x432 = 2LL;
	volatile int64_t t106 = 96803345LL;

    t106 = (((x429==x430)|x431)%x432);

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x435 = INT64_MIN;
	volatile int64_t x436 = -17179098813LL;
	volatile int64_t t107 = -3178608750197LL;

    t107 = (((x433==x434)|x435)%x436);

    if (t107 != -2977425377LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x437 = -1;
	static uint16_t x438 = 135U;
	volatile uint64_t x439 = 4896217542666483LLU;
	volatile uint64_t x440 = 2068454763469926064LLU;
	volatile uint64_t t108 = 368922822097241LLU;

    t108 = (((x437==x438)|x439)%x440);

    if (t108 != 4896217542666483LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x441 = INT8_MIN;
	int8_t x442 = -46;
	volatile uint32_t x443 = 0U;
	uint16_t x444 = UINT16_MAX;
	static uint32_t t109 = 164162487U;

    t109 = (((x441==x442)|x443)%x444);

    if (t109 != 0U) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int8_t x445 = 0;
	static int16_t x446 = INT16_MAX;
	int32_t t110 = -52938;

    t110 = (((x445==x446)|x447)%x448);

    if (t110 != -5215) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x450 = INT8_MAX;
	volatile int8_t x451 = INT8_MIN;
	int16_t x452 = INT16_MIN;
	volatile int32_t t111 = 6697;

    t111 = (((x449==x450)|x451)%x452);

    if (t111 != -128) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x453 = UINT16_MAX;
	int32_t x454 = INT32_MIN;
	static int16_t x456 = INT16_MAX;

    t112 = (((x453==x454)|x455)%x456);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x457 = INT32_MIN;
	int32_t x458 = 56617877;
	uint8_t x459 = 42U;
	uint8_t x460 = 1U;
	int32_t t113 = 6;

    t113 = (((x457==x458)|x459)%x460);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x461 = 12U;
	int32_t x462 = -1;
	static int8_t x463 = INT8_MIN;
	int16_t x464 = INT16_MIN;
	int32_t t114 = -5652695;

    t114 = (((x461==x462)|x463)%x464);

    if (t114 != -128) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x466 = -1457;
	int16_t x468 = INT16_MIN;
	volatile int32_t t115 = -4504474;

    t115 = (((x465==x466)|x467)%x468);

    if (t115 != 32767) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x469 = -312249419791447707LL;
	volatile int32_t x470 = -1;
	static int64_t x471 = -8673171605321LL;
	static volatile int32_t x472 = INT32_MIN;
	int64_t t116 = -67710816657389LL;

    t116 = (((x469==x470)|x471)%x472);

    if (t116 != -1632634697LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x473 = 1071U;
	int64_t x474 = INT64_MIN;
	int64_t x476 = INT64_MIN;
	int64_t t117 = -3465LL;

    t117 = (((x473==x474)|x475)%x476);

    if (t117 != 15701598901862LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x477 = 2;
	int16_t x478 = -1;
	int64_t x479 = INT64_MIN;
	volatile int32_t x480 = 1888316;
	volatile int64_t t118 = 7944389291189LL;

    t118 = (((x477==x478)|x479)%x480);

    if (t118 != -340876LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x481 = 0U;
	int8_t x482 = -1;
	uint32_t x484 = 12652U;
	volatile uint32_t t119 = 639266U;

    t119 = (((x481==x482)|x483)%x484);

    if (t119 != 436U) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint16_t x486 = UINT16_MAX;
	int64_t x487 = -2070556825782280LL;
	static int8_t x488 = 11;

    t120 = (((x485==x486)|x487)%x488);

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x489 = INT16_MIN;
	static int32_t x490 = -121860478;
	static volatile uint32_t x491 = 0U;
	volatile int64_t x492 = INT64_MIN;
	static int64_t t121 = -751LL;

    t121 = (((x489==x490)|x491)%x492);

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x493 = -1;
	uint8_t x494 = 80U;
	int64_t t122 = 1269LL;

    t122 = (((x493==x494)|x495)%x496);

    if (t122 != 15LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x498 = INT32_MIN;
	int8_t x499 = INT8_MAX;
	volatile int64_t t123 = 18856LL;

    t123 = (((x497==x498)|x499)%x500);

    if (t123 != 127LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x501 = 1;
	uint32_t x502 = 6632U;
	uint64_t x503 = 98LLU;
	int8_t x504 = -1;
	uint64_t t124 = 98708LLU;

    t124 = (((x501==x502)|x503)%x504);

    if (t124 != 98LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x505 = -251;
	uint8_t x506 = 28U;
	uint8_t x507 = UINT8_MAX;
	static int32_t t125 = 0;

    t125 = (((x505==x506)|x507)%x508);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x509 = INT64_MAX;
	uint16_t x510 = 0U;
	int32_t x511 = INT32_MIN;
	static uint32_t x512 = 235548615U;
	static uint32_t t126 = 17898U;

    t126 = (((x509==x510)|x511)%x512);

    if (t126 != 27546113U) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x514 = 252354437488468311LLU;
	volatile uint64_t x515 = 13615775019297LLU;
	int8_t x516 = INT8_MAX;
	uint64_t t127 = 13430LLU;

    t127 = (((x513==x514)|x515)%x516);

    if (t127 != 76LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x517 = 3419101;
	volatile uint8_t x518 = 16U;
	static int64_t x519 = 2211106458775858LL;
	int8_t x520 = -19;
	static volatile int64_t t128 = -434712LL;

    t128 = (((x517==x518)|x519)%x520);

    if (t128 != 15LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x521 = INT8_MIN;
	int16_t x522 = INT16_MAX;
	uint16_t x523 = 5U;
	int8_t x524 = -1;
	int32_t t129 = -1550045;

    t129 = (((x521==x522)|x523)%x524);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint32_t x525 = 116732U;
	int32_t x526 = INT32_MIN;
	int32_t x527 = 80;
	static uint16_t x528 = 21313U;
	static volatile int32_t t130 = 5184972;

    t130 = (((x525==x526)|x527)%x528);

    if (t130 != 80) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x531 = UINT8_MAX;
	static int16_t x532 = -46;
	volatile int32_t t131 = 9;

    t131 = (((x529==x530)|x531)%x532);

    if (t131 != 25) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile uint8_t x533 = UINT8_MAX;
	int64_t x536 = INT64_MIN;
	int64_t t132 = 0LL;

    t132 = (((x533==x534)|x535)%x536);

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x537 = -1LL;
	int32_t x538 = INT32_MIN;
	static volatile uint16_t x539 = 8357U;
	static int16_t x540 = INT16_MIN;
	static volatile int32_t t133 = -51;

    t133 = (((x537==x538)|x539)%x540);

    if (t133 != 8357) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x541 = -1;
	volatile int16_t x543 = INT16_MIN;
	int32_t x544 = 163125701;
	static volatile int32_t t134 = -151;

    t134 = (((x541==x542)|x543)%x544);

    if (t134 != -32768) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t t135 = 1502064102974LLU;

    t135 = (((x545==x546)|x547)%x548);

    if (t135 != 21693961124565LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x549 = 15326U;
	volatile int64_t x550 = -56871223LL;
	static volatile int32_t x551 = -488;
	uint16_t x552 = UINT16_MAX;
	static int32_t t136 = -2210;

    t136 = (((x549==x550)|x551)%x552);

    if (t136 != -488) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x553 = INT64_MAX;
	volatile int8_t x554 = INT8_MAX;
	volatile int16_t x555 = 7;
	volatile int64_t t137 = -36595228LL;

    t137 = (((x553==x554)|x555)%x556);

    if (t137 != 7LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x557 = 1472;
	uint8_t x558 = 1U;
	uint16_t x559 = 5815U;
	volatile int64_t x560 = -1LL;
	volatile int64_t t138 = 38188883866097669LL;

    t138 = (((x557==x558)|x559)%x560);

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x562 = 7591;
	int16_t x563 = INT16_MIN;

    t139 = (((x561==x562)|x563)%x564);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x565 = INT8_MIN;
	int32_t x566 = INT32_MIN;
	static uint64_t x567 = 132590280507LLU;
	uint16_t x568 = 299U;
	uint64_t t140 = 2887LLU;

    t140 = (((x565==x566)|x567)%x568);

    if (t140 != 61LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x571 = 2LLU;
	int32_t x572 = 60208829;
	static volatile uint64_t t141 = 5736765LLU;

    t141 = (((x569==x570)|x571)%x572);

    if (t141 != 2LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x573 = 0;
	int32_t x574 = INT32_MIN;
	volatile uint32_t x575 = UINT32_MAX;
	static volatile int16_t x576 = INT16_MIN;
	uint32_t t142 = 2U;

    t142 = (((x573==x574)|x575)%x576);

    if (t142 != 32767U) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int8_t x577 = INT8_MAX;
	int8_t x578 = -19;
	uint64_t t143 = 1007209087LLU;

    t143 = (((x577==x578)|x579)%x580);

    if (t143 != 215626LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x581 = INT16_MAX;
	int16_t x582 = INT16_MIN;
	int32_t x583 = -1;
	static int32_t t144 = 12073;

    t144 = (((x581==x582)|x583)%x584);

    if (t144 != -1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x585 = 73169LLU;
	int64_t x586 = INT64_MIN;
	int64_t t145 = -14492465609LL;

    t145 = (((x585==x586)|x587)%x588);

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x590 = INT8_MIN;
	int32_t x591 = INT32_MIN;
	uint32_t x592 = UINT32_MAX;
	uint32_t t146 = 13U;

    t146 = (((x589==x590)|x591)%x592);

    if (t146 != 2147483648U) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x593 = INT16_MIN;
	int16_t x594 = INT16_MAX;
	int64_t x596 = -1053663514470992622LL;
	volatile uint64_t t147 = 17393776266LLU;

    t147 = (((x593==x594)|x595)%x596);

    if (t147 != 584999535LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint64_t x598 = 18130766824160313LLU;
	static volatile int16_t x599 = INT16_MAX;
	int32_t t148 = 41660;

    t148 = (((x597==x598)|x599)%x600);

    if (t148 != 127) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int64_t x601 = INT64_MIN;
	static int32_t x602 = INT32_MIN;
	int8_t x603 = -7;
	static uint32_t x604 = 850864U;
	static volatile uint32_t t149 = 1244448973U;

    t149 = (((x601==x602)|x603)%x604);

    if (t149 != 656681U) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x606 = INT64_MAX;
	volatile int8_t x608 = -38;
	static volatile int32_t t150 = -445045;

    t150 = (((x605==x606)|x607)%x608);

    if (t150 != -22) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x609 = -1;
	uint16_t x610 = 16U;
	int64_t x611 = -907717521057LL;
	int16_t x612 = INT16_MAX;

    t151 = (((x609==x610)|x611)%x612);

    if (t151 != -25162LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x614 = INT64_MAX;
	int64_t x615 = -1LL;
	uint16_t x616 = UINT16_MAX;
	int64_t t152 = -20111LL;

    t152 = (((x613==x614)|x615)%x616);

    if (t152 != -1LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x617 = -54;
	static int16_t x618 = -1;
	int8_t x619 = -3;
	uint32_t x620 = 1975458U;
	uint32_t t153 = 6522U;

    t153 = (((x617==x618)|x619)%x620);

    if (t153 != 321601U) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x621 = 341U;
	uint64_t x622 = UINT64_MAX;
	static volatile int8_t x623 = -1;
	volatile int64_t x624 = -371882551LL;
	volatile int64_t t154 = -73740396LL;

    t154 = (((x621==x622)|x623)%x624);

    if (t154 != -1LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static int32_t x625 = -1330;
	int64_t x626 = INT64_MAX;
	int16_t x627 = INT16_MIN;
	static int8_t x628 = -1;

    t155 = (((x625==x626)|x627)%x628);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile uint32_t x630 = 13U;
	uint32_t x631 = 6932507U;
	static uint16_t x632 = 2U;

    t156 = (((x629==x630)|x631)%x632);

    if (t156 != 1U) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x633 = 3;
	uint64_t x635 = 122342LLU;
	uint64_t t157 = 57529LLU;

    t157 = (((x633==x634)|x635)%x636);

    if (t157 != 122342LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static int64_t x637 = -1LL;
	volatile uint16_t x638 = 63U;
	int64_t x639 = INT64_MIN;
	uint64_t t158 = 74943758381LLU;

    t158 = (((x637==x638)|x639)%x640);

    if (t158 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x641 = INT8_MAX;
	volatile int32_t x642 = 2;
	int32_t x644 = INT32_MIN;
	uint64_t t159 = 3000173159565148LLU;

    t159 = (((x641==x642)|x643)%x644);

    if (t159 != 2147483647LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x645 = UINT64_MAX;
	int16_t x646 = -1;
	uint64_t x647 = UINT64_MAX;
	uint64_t x648 = 12625651887892475LLU;

    t160 = (((x645==x646)|x647)%x648);

    if (t160 != 666665498645640LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x649 = INT8_MIN;
	volatile uint16_t x650 = 28U;
	int64_t x651 = -18378197905390129LL;
	uint8_t x652 = 1U;
	volatile int64_t t161 = -2476506062909LL;

    t161 = (((x649==x650)|x651)%x652);

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x653 = 404;
	volatile int16_t x654 = INT16_MAX;
	int8_t x655 = INT8_MIN;
	int32_t t162 = 255;

    t162 = (((x653==x654)|x655)%x656);

    if (t162 != -1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x657 = 22U;
	int32_t x659 = INT32_MIN;
	int32_t x660 = INT32_MAX;
	static int32_t t163 = -6;

    t163 = (((x657==x658)|x659)%x660);

    if (t163 != -1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint8_t x661 = 2U;
	static volatile int32_t x663 = INT32_MIN;
	int8_t x664 = -1;

    t164 = (((x661==x662)|x663)%x664);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x665 = 11;
	int64_t x667 = -1LL;
	int8_t x668 = INT8_MAX;
	int64_t t165 = 46840472901696LL;

    t165 = (((x665==x666)|x667)%x668);

    if (t165 != -1LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x669 = 15;
	uint64_t x670 = 689059LLU;
	int32_t x671 = INT32_MIN;
	int16_t x672 = INT16_MIN;

    t166 = (((x669==x670)|x671)%x672);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x673 = UINT64_MAX;
	volatile int32_t x674 = INT32_MIN;
	static int16_t x675 = INT16_MAX;
	static volatile int32_t x676 = -308127198;
	volatile int32_t t167 = -1;

    t167 = (((x673==x674)|x675)%x676);

    if (t167 != 32767) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x678 = INT32_MIN;
	static int8_t x679 = INT8_MAX;
	volatile int32_t t168 = 332;

    t168 = (((x677==x678)|x679)%x680);

    if (t168 != 127) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint16_t x682 = 0U;
	volatile uint64_t x683 = 391729207728859872LLU;
	static volatile int8_t x684 = INT8_MIN;
	static volatile uint64_t t169 = 1931288786139497LLU;

    t169 = (((x681==x682)|x683)%x684);

    if (t169 != 391729207728859872LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x685 = 1920U;
	int64_t x686 = INT64_MAX;
	static uint16_t x687 = UINT16_MAX;
	static uint64_t x688 = 65438LLU;
	volatile uint64_t t170 = 1745579036153LLU;

    t170 = (((x685==x686)|x687)%x688);

    if (t170 != 97LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x689 = 1;
	volatile int64_t x690 = INT64_MIN;
	int32_t x691 = INT32_MAX;
	uint8_t x692 = UINT8_MAX;

    t171 = (((x689==x690)|x691)%x692);

    if (t171 != 127) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x693 = 255105;
	static int16_t x694 = INT16_MIN;
	int16_t x695 = -1;
	int16_t x696 = 1;
	int32_t t172 = 28913778;

    t172 = (((x693==x694)|x695)%x696);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x697 = UINT64_MAX;
	uint8_t x698 = 114U;
	int8_t x699 = INT8_MIN;
	volatile int64_t x700 = INT64_MAX;
	volatile int64_t t173 = 23453098195LL;

    t173 = (((x697==x698)|x699)%x700);

    if (t173 != -128LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x701 = -979570986595752LL;
	static int64_t x702 = 1087644998810LL;
	uint8_t x703 = UINT8_MAX;
	volatile uint32_t x704 = 1151102187U;
	volatile uint32_t t174 = 124841U;

    t174 = (((x701==x702)|x703)%x704);

    if (t174 != 255U) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x705 = 2U;
	uint16_t x706 = 312U;
	int32_t x707 = INT32_MIN;
	int64_t x708 = -6755LL;
	static int64_t t175 = 4584768689768LL;

    t175 = (((x705==x706)|x707)%x708);

    if (t175 != -1598LL) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int16_t x709 = -11;
	static int16_t x710 = INT16_MIN;
	uint64_t x711 = 1293LLU;
	static uint64_t x712 = UINT64_MAX;
	volatile uint64_t t176 = 692LLU;

    t176 = (((x709==x710)|x711)%x712);

    if (t176 != 1293LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x713 = -124;
	uint64_t x714 = UINT64_MAX;
	uint8_t x715 = 3U;
	uint64_t t177 = 330004608LLU;

    t177 = (((x713==x714)|x715)%x716);

    if (t177 != 3LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x717 = INT64_MIN;
	uint64_t x718 = UINT64_MAX;
	static volatile int32_t t178 = 5;

    t178 = (((x717==x718)|x719)%x720);

    if (t178 != 127) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x722 = -983;
	static volatile uint32_t x723 = 42517500U;
	static uint8_t x724 = 2U;
	volatile uint32_t t179 = 0U;

    t179 = (((x721==x722)|x723)%x724);

    if (t179 != 0U) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x725 = UINT16_MAX;
	int32_t x726 = 215164;
	int32_t x728 = -297826;
	int32_t t180 = -3;

    t180 = (((x725==x726)|x727)%x728);

    if (t180 != 127) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x729 = -1;
	uint32_t x730 = UINT32_MAX;
	static int16_t x731 = INT16_MIN;
	static int32_t x732 = -1;
	static int32_t t181 = -497;

    t181 = (((x729==x730)|x731)%x732);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x733 = -1;
	uint32_t x734 = UINT32_MAX;
	int64_t t182 = -23LL;

    t182 = (((x733==x734)|x735)%x736);

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x737 = -7;
	int8_t x738 = 4;
	int16_t x739 = INT16_MIN;
	volatile uint32_t x740 = 30U;
	volatile uint32_t t183 = 8272809U;

    t183 = (((x737==x738)|x739)%x740);

    if (t183 != 8U) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x741 = INT16_MAX;
	static int16_t x742 = INT16_MIN;
	static uint64_t x743 = 491551021018920015LLU;
	static int16_t x744 = -2000;
	uint64_t t184 = 12803LLU;

    t184 = (((x741==x742)|x743)%x744);

    if (t184 != 491551021018920015LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x746 = -1;
	volatile int64_t x747 = 9626027LL;
	int64_t t185 = -11336LL;

    t185 = (((x745==x746)|x747)%x748);

    if (t185 != 9626027LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x749 = -573;
	uint16_t x750 = 89U;
	uint64_t x751 = 2115217336LLU;
	int32_t x752 = INT32_MAX;

    t186 = (((x749==x750)|x751)%x752);

    if (t186 != 2115217336LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x753 = UINT16_MAX;
	static int16_t x755 = INT16_MIN;
	uint16_t x756 = 41U;
	volatile int32_t t187 = 22;

    t187 = (((x753==x754)|x755)%x756);

    if (t187 != -9) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile uint32_t x757 = UINT32_MAX;
	int16_t x759 = -1;
	int32_t x760 = -2036;
	volatile int32_t t188 = -1274379;

    t188 = (((x757==x758)|x759)%x760);

    if (t188 != -1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int8_t x761 = -1;
	int32_t x762 = INT32_MAX;
	uint32_t x764 = UINT32_MAX;
	static volatile uint32_t t189 = 468U;

    t189 = (((x761==x762)|x763)%x764);

    if (t189 != 0U) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x765 = 120U;
	int32_t x766 = -129920;
	int64_t x767 = -22049582760LL;
	int8_t x768 = INT8_MAX;
	int64_t t190 = -848201209675401LL;

    t190 = (((x765==x766)|x767)%x768);

    if (t190 != -113LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x769 = INT16_MIN;
	int16_t x770 = INT16_MIN;
	uint16_t x771 = 14861U;
	int8_t x772 = -1;

    t191 = (((x769==x770)|x771)%x772);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x774 = -191346944LL;
	uint32_t x776 = 506774263U;
	uint32_t t192 = 151079U;

    t192 = (((x773==x774)|x775)%x776);

    if (t192 != 13194U) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x777 = 1053300069910721334LLU;
	volatile int32_t t193 = 501;

    t193 = (((x777==x778)|x779)%x780);

    if (t193 != 114) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x781 = UINT8_MAX;
	static int64_t x782 = -1LL;
	static int32_t x784 = INT32_MIN;
	int64_t t194 = -835160174LL;

    t194 = (((x781==x782)|x783)%x784);

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x786 = 1;
	int64_t x787 = 55429838342072066LL;
	volatile int64_t x788 = INT64_MIN;
	int64_t t195 = 3777633781513462487LL;

    t195 = (((x785==x786)|x787)%x788);

    if (t195 != 55429838342072066LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x793 = 840;
	int16_t x794 = -9839;
	int16_t x795 = INT16_MIN;
	uint8_t x796 = 15U;
	int32_t t196 = -403;

    t196 = (((x793==x794)|x795)%x796);

    if (t196 != -8) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x797 = 1745968159U;
	int16_t x798 = INT16_MAX;
	uint32_t x799 = UINT32_MAX;
	uint64_t x800 = UINT64_MAX;
	volatile uint64_t t197 = 5448LLU;

    t197 = (((x797==x798)|x799)%x800);

    if (t197 != 4294967295LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x801 = 275804096744608LL;
	int32_t x802 = INT32_MIN;
	volatile int32_t x803 = INT32_MIN;
	volatile uint32_t x804 = 2622902U;

    t198 = (((x801==x802)|x803)%x804);

    if (t198 != 1949812U) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x805 = 16593LLU;
	volatile uint64_t x806 = UINT64_MAX;
	volatile int8_t x807 = -1;
	int8_t x808 = -31;
	volatile int32_t t199 = -1223;

    t199 = (((x805==x806)|x807)%x808);

    if (t199 != -1) { NG(); } else { ; }
	
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

