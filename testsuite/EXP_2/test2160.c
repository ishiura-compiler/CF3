
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

static int32_t x6 = INT32_MAX;
volatile int16_t x11 = -1;
uint8_t x12 = 13U;
volatile int64_t x17 = -667LL;
volatile uint32_t x24 = 600715314U;
uint32_t t4 = 9851291U;
static int16_t x27 = INT16_MAX;
int16_t x29 = INT16_MAX;
int8_t x52 = -1;
static volatile int32_t t10 = -118;
volatile int64_t x61 = -54765321LL;
int16_t x63 = INT16_MIN;
static volatile uint32_t t12 = 6399U;
uint64_t x74 = 1602547009LLU;
static int16_t x85 = INT16_MIN;
uint8_t x88 = UINT8_MAX;
static volatile int32_t t16 = -434625;
int16_t x93 = INT16_MIN;
static volatile int32_t x96 = INT32_MIN;
uint64_t t17 = 29158LLU;
int64_t x97 = -1LL;
uint32_t x99 = 3U;
volatile int64_t t18 = -81620512389LL;
int8_t x103 = -1;
int8_t x104 = INT8_MIN;
static volatile uint64_t t19 = 4768702577856LLU;
int16_t x110 = INT16_MIN;
static volatile int32_t t20 = -2;
int16_t x114 = -1;
int8_t x130 = INT8_MIN;
int16_t x135 = -1;
volatile uint64_t x141 = UINT64_MAX;
uint16_t x147 = 3U;
static int16_t x151 = 107;
int8_t x152 = INT8_MIN;
uint32_t x154 = 10662U;
int16_t x156 = -372;
static volatile uint64_t t31 = 98430617406833448LLU;
int16_t x165 = -66;
uint16_t x168 = 3910U;
uint64_t t35 = 1022839136850148789LLU;
static volatile uint64_t x189 = 813172915457LLU;
int32_t x199 = -1;
volatile uint64_t t38 = 28090048619805LLU;
static int32_t x201 = INT32_MIN;
uint64_t t39 = 19495LLU;
static int32_t x205 = INT32_MIN;
uint32_t x207 = UINT32_MAX;
static int16_t x208 = -1;
int64_t x223 = INT64_MIN;
volatile int64_t x226 = 101094706617LL;
int32_t x230 = INT32_MIN;
static uint32_t t44 = 51169U;
int8_t x237 = -17;
uint64_t x238 = 6737LLU;
volatile int8_t x239 = -41;
uint64_t t45 = 1296424873373231LLU;
int64_t x241 = INT64_MIN;
int32_t x243 = INT32_MIN;
volatile int8_t x244 = -44;
int32_t x246 = 242225;
static uint64_t t48 = 5995721418LLU;
uint16_t x253 = UINT16_MAX;
int16_t x257 = -120;
static int8_t x258 = -1;
uint32_t x260 = UINT32_MAX;
int32_t x262 = -723951278;
static int64_t x263 = -1LL;
uint8_t x268 = 1U;
int64_t x270 = INT64_MIN;
volatile uint16_t x274 = 10402U;
uint16_t x275 = UINT16_MAX;
int16_t x276 = 39;
int16_t x279 = 14323;
int8_t x286 = INT8_MIN;
int32_t x288 = INT32_MIN;
int64_t x290 = INT64_MIN;
int16_t x294 = -433;
volatile uint16_t x304 = UINT16_MAX;
volatile int64_t t61 = 179793LL;
uint8_t x306 = 4U;
int16_t x314 = -6;
int32_t x318 = INT32_MAX;
uint64_t t70 = 571LLU;
static uint16_t x356 = 1910U;
uint32_t t71 = 5616U;
volatile uint32_t x357 = UINT32_MAX;
uint8_t x362 = 99U;
int32_t x363 = INT32_MAX;
int32_t t73 = 7211;
int32_t t74 = -45470;
volatile int64_t x369 = -1LL;
uint8_t x376 = UINT8_MAX;
static int64_t x380 = INT64_MIN;
int32_t x389 = INT32_MAX;
int16_t x390 = INT16_MIN;
volatile int64_t x392 = INT64_MAX;
int16_t x396 = INT16_MIN;
volatile int8_t x397 = 1;
int64_t x401 = -234004LL;
int16_t x404 = INT16_MAX;
int32_t x406 = -171276;
int16_t x407 = -1;
uint8_t x408 = UINT8_MAX;
int16_t x409 = INT16_MAX;
volatile int64_t t84 = 187571227768018LL;
static int64_t t87 = 65929272872687LL;
int16_t x427 = INT16_MAX;
volatile int32_t x428 = INT32_MAX;
static int64_t x434 = INT64_MIN;
static int32_t x436 = INT32_MAX;
int8_t x440 = INT8_MIN;
int16_t x441 = INT16_MIN;
uint32_t x442 = 7U;
volatile int64_t x445 = -3LL;
uint32_t x460 = UINT32_MAX;
static volatile uint64_t t96 = 562371347573015LLU;
volatile int32_t x464 = INT32_MIN;
static int32_t x465 = -119;
static int64_t x468 = 1LL;
int8_t x473 = INT8_MAX;
int64_t x476 = 12742LL;
volatile int32_t x478 = INT32_MIN;
uint64_t x479 = 5244130LLU;
uint64_t t101 = 432LLU;
static int32_t x482 = 254680;
int64_t x483 = INT64_MIN;
int32_t x484 = INT32_MAX;
int64_t t102 = 2232717LL;
int8_t x488 = INT8_MIN;
int64_t x495 = -1310445LL;
static int16_t x497 = -1;
int64_t x500 = -11099473LL;
uint64_t x506 = 54843LLU;
static uint64_t t108 = 377824477858293640LLU;
int8_t x509 = INT8_MAX;
uint16_t x513 = 2U;
static volatile int8_t x515 = 1;
uint16_t x521 = UINT16_MAX;
int16_t x530 = INT16_MAX;
int32_t x532 = 120;
static uint32_t x537 = 16532565U;
static int16_t x538 = 3414;
uint16_t x544 = 1U;
int64_t x545 = INT64_MAX;
int64_t x548 = INT64_MAX;
volatile int64_t x551 = 12LL;
int16_t x561 = INT16_MAX;
volatile int8_t x562 = -1;
int32_t x564 = -1;
int32_t t122 = -380254;
static volatile int64_t t124 = -100370318793LL;
volatile uint32_t x574 = UINT32_MAX;
uint8_t x576 = UINT8_MAX;
int64_t x581 = -1LL;
volatile int16_t x582 = INT16_MIN;
int16_t x585 = INT16_MAX;
volatile int16_t x586 = INT16_MAX;
volatile int64_t x598 = -1LL;
uint16_t x601 = 962U;
volatile uint64_t t132 = 115765826227LLU;
int16_t x620 = INT16_MIN;
uint64_t t135 = 12006663LLU;
int8_t x634 = INT8_MIN;
uint64_t x635 = 4289676752LLU;
uint64_t t136 = 7682LLU;
static int8_t x637 = INT8_MAX;
volatile uint8_t x646 = 13U;
int64_t x647 = -1LL;
uint8_t x655 = 55U;
static int16_t x658 = INT16_MIN;
static volatile int16_t x677 = INT16_MIN;
uint32_t x680 = 11420159U;
uint32_t t145 = 103U;
static uint32_t t148 = 199U;
int32_t x695 = INT32_MIN;
int16_t x699 = 435;
volatile uint64_t t150 = 126250992957LLU;
static volatile int8_t x703 = 2;
int8_t x705 = INT8_MIN;
static uint32_t t153 = 581529U;
int16_t x716 = -6;
static uint32_t x722 = UINT32_MAX;
uint64_t x726 = 4674410784251244LLU;
int8_t x728 = 1;
uint64_t t157 = 59082214864206635LLU;
uint64_t x729 = 233470568957141LLU;
volatile uint64_t x730 = 1222860LLU;
int32_t x732 = -11760;
uint64_t x734 = 7583305LLU;
uint32_t x740 = 120074028U;
static int8_t x746 = INT8_MIN;
static int8_t x760 = INT8_MIN;
static int16_t x763 = INT16_MIN;
int64_t x765 = INT64_MIN;
int64_t x766 = INT64_MIN;
int32_t x774 = -1;
int8_t x787 = 1;
int64_t x788 = -1LL;
static int64_t x797 = -1LL;
int64_t t175 = -31LL;
static int64_t x806 = -1LL;
int64_t t176 = -3770LL;
uint32_t t177 = 949U;
int64_t x818 = INT64_MIN;
uint8_t x822 = 1U;
int64_t t180 = 21007LL;
uint8_t x830 = 9U;
int8_t x831 = INT8_MAX;
int32_t x833 = -1;
volatile int8_t x838 = -1;
int32_t x843 = -1;
static int16_t x849 = 1658;
uint64_t x850 = 33649531663LLU;
int32_t x858 = INT32_MIN;
volatile int64_t x862 = INT64_MAX;
int16_t x868 = INT16_MIN;
static uint8_t x871 = 2U;
static uint16_t x878 = 928U;
int64_t x882 = 1647443074312710899LL;
int64_t t194 = -57LL;
volatile int64_t x888 = -6979LL;
volatile int64_t t196 = -1LL;
volatile int32_t t197 = 0;
static uint64_t x898 = 6670033175916LLU;


void f0(void) {
    	volatile int64_t x5 = INT64_MIN;
	volatile int16_t x7 = INT16_MIN;
	static volatile uint8_t x8 = 3U;
	int64_t t0 = -1464465580LL;

    t0 = ((x5+(x6&x7))/x8);

    if (t0 != -3074457344902441642LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x9 = INT8_MIN;
	uint16_t x10 = 43U;
	int32_t t1 = 14;

    t1 = ((x9+(x10&x11))/x12);

    if (t1 != -6) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x13 = INT16_MIN;
	int64_t x14 = INT64_MIN;
	uint16_t x15 = 14141U;
	uint8_t x16 = 1U;
	int64_t t2 = 1LL;

    t2 = ((x13+(x14&x15))/x16);

    if (t2 != -32768LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x18 = -2522481244359976LL;
	int64_t x19 = -1LL;
	uint64_t x20 = 28051919371892LLU;
	uint64_t t3 = 43491LLU;

    t3 = ((x17+(x18&x19))/x20);

    if (t3 != 657503LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x21 = 12297;
	volatile uint16_t x22 = UINT16_MAX;
	static volatile int32_t x23 = INT32_MIN;

    t4 = ((x21+(x22&x23))/x24);

    if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x25 = -6;
	int8_t x26 = 62;
	int32_t x28 = -1;
	static int32_t t5 = 831;

    t5 = ((x25+(x26&x27))/x28);

    if (t5 != -56) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x30 = INT16_MAX;
	uint64_t x31 = UINT64_MAX;
	volatile int8_t x32 = -15;
	volatile uint64_t t6 = 9480691340039LLU;

    t6 = ((x29+(x30&x31))/x32);

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x45 = UINT32_MAX;
	static volatile int8_t x46 = 40;
	int8_t x47 = -2;
	static int32_t x48 = -1131044;
	uint32_t t7 = 172U;

    t7 = ((x45+(x46&x47))/x48);

    if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint32_t x49 = 68243U;
	uint64_t x50 = 0LLU;
	static int64_t x51 = 15403200615LL;
	uint64_t t8 = 7192820084LLU;

    t8 = ((x49+(x50&x51))/x52);

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x53 = UINT64_MAX;
	int16_t x54 = 4;
	uint16_t x55 = 10751U;
	static uint16_t x56 = 1382U;
	uint64_t t9 = 115582LLU;

    t9 = ((x53+(x54&x55))/x56);

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint16_t x57 = UINT16_MAX;
	int8_t x58 = -1;
	int16_t x59 = -1;
	int16_t x60 = -324;

    t10 = ((x57+(x58&x59))/x60);

    if (t10 != -202) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x62 = 0;
	int64_t x64 = INT64_MAX;
	static volatile int64_t t11 = -3879576274LL;

    t11 = ((x61+(x62&x63))/x64);

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x69 = INT16_MIN;
	uint32_t x70 = 14U;
	int32_t x71 = -1;
	int32_t x72 = INT32_MAX;

    t12 = ((x69+(x70&x71))/x72);

    if (t12 != 1U) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x73 = UINT32_MAX;
	int64_t x75 = -1LL;
	static int16_t x76 = -1;
	volatile uint64_t t13 = 43767119982LLU;

    t13 = ((x73+(x74&x75))/x76);

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x77 = INT32_MIN;
	volatile uint32_t x78 = UINT32_MAX;
	int64_t x79 = -1LL;
	int8_t x80 = -1;
	volatile int64_t t14 = -319573LL;

    t14 = ((x77+(x78&x79))/x80);

    if (t14 != -2147483647LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x86 = 258298LLU;
	int16_t x87 = -2405;
	volatile uint64_t t15 = 53LLU;

    t15 = ((x85+(x86&x87))/x88);

    if (t15 != 884LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x89 = INT8_MIN;
	int16_t x90 = INT16_MIN;
	int8_t x91 = INT8_MIN;
	int8_t x92 = -2;

    t16 = ((x89+(x90&x91))/x92);

    if (t16 != 16448) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x94 = 5278524096423646LLU;
	uint32_t x95 = 372478U;

    t17 = ((x93+(x94&x95))/x96);

    if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x98 = INT32_MAX;
	static uint16_t x100 = UINT16_MAX;

    t18 = ((x97+(x98&x99))/x100);

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x101 = 24LLU;
	volatile uint8_t x102 = 0U;

    t19 = ((x101+(x102&x103))/x104);

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint8_t x109 = 64U;
	int8_t x111 = INT8_MIN;
	int32_t x112 = INT32_MIN;

    t20 = ((x109+(x110&x111))/x112);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x113 = INT64_MAX;
	int16_t x115 = -30;
	int32_t x116 = INT32_MIN;
	volatile int64_t t21 = -3605LL;

    t21 = ((x113+(x114&x115))/x116);

    if (t21 != -4294967295LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x121 = -1;
	volatile uint64_t x122 = 2202226LLU;
	static uint32_t x123 = UINT32_MAX;
	int64_t x124 = INT64_MIN;
	uint64_t t22 = 1976142LLU;

    t22 = ((x121+(x122&x123))/x124);

    if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x125 = 663LL;
	int16_t x126 = 1;
	int32_t x127 = INT32_MIN;
	static int32_t x128 = -1;
	static int64_t t23 = 279537822135431746LL;

    t23 = ((x125+(x126&x127))/x128);

    if (t23 != -663LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint8_t x129 = UINT8_MAX;
	int8_t x131 = -1;
	static volatile uint32_t x132 = 200450066U;
	static uint32_t t24 = 3388U;

    t24 = ((x129+(x130&x131))/x132);

    if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x133 = 37U;
	int32_t x134 = -1;
	static volatile int16_t x136 = INT16_MIN;
	static volatile int32_t t25 = -3;

    t25 = ((x133+(x134&x135))/x136);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x137 = INT8_MIN;
	int64_t x138 = 57LL;
	uint64_t x139 = 5LLU;
	static uint8_t x140 = 50U;
	uint64_t t26 = 6039LLU;

    t26 = ((x137+(x138&x139))/x140);

    if (t26 != 368934881474191029LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x142 = -1478;
	static int16_t x143 = 46;
	static int8_t x144 = -1;
	volatile uint64_t t27 = 10981768LLU;

    t27 = ((x141+(x142&x143))/x144);

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x145 = -14;
	static volatile uint32_t x146 = 2041605072U;
	volatile uint64_t x148 = UINT64_MAX;
	volatile uint64_t t28 = 66386625113965409LLU;

    t28 = ((x145+(x146&x147))/x148);

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x149 = INT16_MIN;
	int64_t x150 = INT64_MIN;
	static int64_t t29 = 26594679263LL;

    t29 = ((x149+(x150&x151))/x152);

    if (t29 != 256LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x153 = INT64_MIN;
	uint16_t x155 = UINT16_MAX;
	volatile int64_t t30 = -1401173331421736LL;

    t30 = ((x153+(x154&x155))/x156);

    if (t30 != 24794010851760121LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x157 = UINT64_MAX;
	volatile int8_t x158 = INT8_MAX;
	uint64_t x159 = 140193693646110180LLU;
	volatile int32_t x160 = -1;

    t31 = ((x157+(x158&x159))/x160);

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x166 = 27155425;
	static volatile uint64_t x167 = 67841LLU;
	volatile uint64_t t32 = 1375657863976LLU;

    t32 = ((x165+(x166&x167))/x168);

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x169 = INT16_MIN;
	volatile uint32_t x170 = 9523720U;
	volatile int8_t x171 = -1;
	static int32_t x172 = 1;
	uint32_t t33 = 6363740U;

    t33 = ((x169+(x170&x171))/x172);

    if (t33 != 9490952U) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x173 = INT32_MIN;
	int64_t x174 = INT64_MAX;
	volatile int64_t x175 = -937955569180543LL;
	volatile int8_t x176 = -1;
	volatile int64_t t34 = -146612116LL;

    t34 = ((x173+(x174&x175))/x176);

    if (t34 != -9222434079138111617LL) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x181 = 76;
	int8_t x182 = -1;
	uint32_t x183 = UINT32_MAX;
	uint64_t x184 = UINT64_MAX;

    t35 = ((x181+(x182&x183))/x184);

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x190 = INT16_MIN;
	int64_t x191 = -1LL;
	uint16_t x192 = UINT16_MAX;
	static volatile uint64_t t36 = 446LLU;

    t36 = ((x189+(x190&x191))/x192);

    if (t36 != 12408222LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x193 = 2;
	volatile int8_t x194 = -1;
	int8_t x195 = INT8_MIN;
	static uint64_t x196 = 33390875024751768LLU;
	uint64_t t37 = 490LLU;

    t37 = ((x193+(x194&x195))/x196);

    if (t37 != 552LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x197 = 1067135868619265LLU;
	uint16_t x198 = UINT16_MAX;
	int8_t x200 = INT8_MIN;

    t38 = ((x197+(x198&x199))/x200);

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x202 = -1LL;
	uint32_t x203 = 15862711U;
	static volatile uint64_t x204 = 182LLU;

    t39 = ((x201+(x202&x203))/x204);

    if (t39 != 101355736657021597LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x206 = UINT64_MAX;
	volatile uint64_t t40 = 25423LLU;

    t40 = ((x205+(x206&x207))/x208);

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint16_t x221 = UINT16_MAX;
	uint64_t x222 = UINT64_MAX;
	int8_t x224 = INT8_MIN;
	static uint64_t t41 = 71465441419672732LLU;

    t41 = ((x221+(x222&x223))/x224);

    if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x225 = 0U;
	int32_t x227 = INT32_MIN;
	uint16_t x228 = 19031U;
	static int64_t t42 = -2468283LL;

    t42 = ((x225+(x226&x227))/x228);

    if (t42 != 5303543LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int32_t x229 = 0;
	int8_t x231 = -1;
	int64_t x232 = -20997LL;
	int64_t t43 = -3LL;

    t43 = ((x229+(x230&x231))/x232);

    if (t43 != 102275LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x233 = 23U;
	uint16_t x234 = 728U;
	static int16_t x235 = INT16_MIN;
	int32_t x236 = INT32_MIN;

    t44 = ((x233+(x234&x235))/x236);

    if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x240 = 3198U;

    t45 = ((x237+(x238&x239))/x240);

    if (t45 != 2LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x242 = 2337;
	static volatile int64_t t46 = -148787LL;

    t46 = ((x241+(x242&x243))/x244);

    if (t46 != 209622091746699450LL) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x245 = -356;
	static uint8_t x247 = 4U;
	static volatile int64_t x248 = -1LL;
	static int64_t t47 = 229173LL;

    t47 = ((x245+(x246&x247))/x248);

    if (t47 != 356LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x249 = INT8_MIN;
	uint16_t x250 = 736U;
	uint8_t x251 = 3U;
	uint64_t x252 = 25598073640LLU;

    t48 = ((x249+(x250&x251))/x252);

    if (t48 != 720630166LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x254 = 45;
	volatile uint32_t x255 = 33U;
	uint8_t x256 = 118U;
	uint32_t t49 = 21U;

    t49 = ((x253+(x254&x255))/x256);

    if (t49 != 555U) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x259 = 27U;
	static volatile uint32_t t50 = 82379040U;

    t50 = ((x257+(x258&x259))/x260);

    if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x261 = -2;
	uint64_t x264 = 246519101LLU;
	uint64_t t51 = 15388LLU;

    t51 = ((x261+(x262&x263))/x264);

    if (t51 != 74828863151LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x265 = -1;
	int16_t x266 = INT16_MAX;
	int16_t x267 = INT16_MIN;
	int32_t t52 = 8;

    t52 = ((x265+(x266&x267))/x268);

    if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x269 = INT32_MIN;
	int16_t x271 = INT16_MAX;
	volatile int16_t x272 = INT16_MIN;
	volatile int64_t t53 = 26326535808022LL;

    t53 = ((x269+(x270&x271))/x272);

    if (t53 != 65536LL) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x273 = INT16_MAX;
	volatile int32_t t54 = 995;

    t54 = ((x273+(x274&x275))/x276);

    if (t54 != 1106) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x277 = INT8_MIN;
	static int8_t x278 = INT8_MIN;
	static uint32_t x280 = 26669137U;
	static uint32_t t55 = 729409U;

    t55 = ((x277+(x278&x279))/x280);

    if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x281 = -1;
	static uint64_t x282 = 15LLU;
	volatile uint8_t x283 = UINT8_MAX;
	int8_t x284 = INT8_MIN;
	uint64_t t56 = 693LLU;

    t56 = ((x281+(x282&x283))/x284);

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint8_t x285 = UINT8_MAX;
	volatile int32_t x287 = -1;
	int32_t t57 = -76297388;

    t57 = ((x285+(x286&x287))/x288);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x289 = -3;
	static uint16_t x291 = 1U;
	int64_t x292 = INT64_MIN;
	int64_t t58 = 363212LL;

    t58 = ((x289+(x290&x291))/x292);

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x293 = 10275U;
	int64_t x295 = -4983LL;
	int16_t x296 = INT16_MAX;
	volatile int64_t t59 = -7107LL;

    t59 = ((x293+(x294&x295))/x296);

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x297 = 0U;
	int8_t x298 = 30;
	static volatile uint32_t x299 = UINT32_MAX;
	uint64_t x300 = 13405388321060LLU;
	static uint64_t t60 = 3909214887408285804LLU;

    t60 = ((x297+(x298&x299))/x300);

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x301 = INT32_MIN;
	int64_t x302 = INT64_MIN;
	uint32_t x303 = 143811U;

    t61 = ((x301+(x302&x303))/x304);

    if (t61 != -32768LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x305 = 3U;
	int32_t x307 = -235;
	uint32_t x308 = UINT32_MAX;
	static volatile uint32_t t62 = 830099U;

    t62 = ((x305+(x306&x307))/x308);

    if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x313 = 160;
	int64_t x315 = INT64_MIN;
	int16_t x316 = 287;
	volatile int64_t t63 = -1LL;

    t63 = ((x313+(x314&x315))/x316);

    if (t63 != -32137184797403399LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x317 = -1;
	uint8_t x319 = 28U;
	uint16_t x320 = 287U;
	volatile int32_t t64 = 359841;

    t64 = ((x317+(x318&x319))/x320);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x321 = INT8_MAX;
	int32_t x322 = INT32_MIN;
	volatile uint16_t x323 = 5177U;
	int16_t x324 = -23;
	int32_t t65 = -58106;

    t65 = ((x321+(x322&x323))/x324);

    if (t65 != -5) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x325 = 4696LLU;
	uint8_t x326 = 2U;
	int16_t x327 = INT16_MIN;
	int16_t x328 = -1;
	volatile uint64_t t66 = 1974837578741186111LLU;

    t66 = ((x325+(x326&x327))/x328);

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x337 = 3U;
	int16_t x338 = INT16_MAX;
	int8_t x339 = INT8_MAX;
	int32_t x340 = -1;
	static volatile uint32_t t67 = 6U;

    t67 = ((x337+(x338&x339))/x340);

    if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint8_t x341 = 117U;
	static int64_t x342 = -3690878LL;
	uint64_t x343 = 59162124724580LLU;
	volatile uint32_t x344 = UINT32_MAX;
	uint64_t t68 = 13LLU;

    t68 = ((x341+(x342&x343))/x344);

    if (t68 != 13774LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x345 = 2794225LLU;
	uint8_t x346 = 28U;
	int8_t x347 = INT8_MIN;
	static int64_t x348 = -69LL;
	static volatile uint64_t t69 = 98127LLU;

    t69 = ((x345+(x346&x347))/x348);

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile uint32_t x349 = 195897U;
	uint64_t x350 = UINT64_MAX;
	int32_t x351 = -491;
	static uint8_t x352 = UINT8_MAX;

    t70 = ((x349+(x350&x351))/x352);

    if (t70 != 766LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x353 = UINT32_MAX;
	static uint8_t x354 = UINT8_MAX;
	int32_t x355 = 3092238;

    t71 = ((x353+(x354&x355))/x356);

    if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x358 = INT64_MIN;
	int8_t x359 = -1;
	static uint8_t x360 = 8U;
	int64_t t72 = 111LL;

    t72 = ((x357+(x358&x359))/x360);

    if (t72 != -1152921504069976064LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static int16_t x361 = -593;
	int32_t x364 = 11800;

    t73 = ((x361+(x362&x363))/x364);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x365 = -2;
	uint16_t x366 = 18U;
	static volatile uint8_t x367 = 0U;
	static uint16_t x368 = 134U;

    t74 = ((x365+(x366&x367))/x368);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x370 = INT64_MIN;
	int64_t x371 = INT64_MAX;
	static int32_t x372 = INT32_MIN;
	volatile int64_t t75 = -9368009270LL;

    t75 = ((x369+(x370&x371))/x372);

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile uint64_t x373 = 181LLU;
	int64_t x374 = -4056906LL;
	int64_t x375 = -141401LL;
	volatile uint64_t t76 = 5743LLU;

    t76 = ((x373+(x374&x375))/x376);

    if (t76 != 72340172838060242LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x377 = 302U;
	volatile int64_t x378 = -110LL;
	volatile int16_t x379 = -16033;
	volatile int64_t t77 = 172377524850LL;

    t77 = ((x377+(x378&x379))/x380);

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x381 = INT16_MIN;
	int64_t x382 = 185354608LL;
	int32_t x383 = INT32_MIN;
	int64_t x384 = INT64_MIN;
	int64_t t78 = 8206182907LL;

    t78 = ((x381+(x382&x383))/x384);

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x391 = INT64_MIN;
	volatile int64_t t79 = -7760LL;

    t79 = ((x389+(x390&x391))/x392);

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint16_t x393 = 16202U;
	uint8_t x394 = UINT8_MAX;
	volatile uint16_t x395 = 3722U;
	static volatile int32_t t80 = 0;

    t80 = ((x393+(x394&x395))/x396);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x398 = INT16_MIN;
	volatile uint32_t x399 = 254660U;
	int32_t x400 = INT32_MIN;
	volatile uint32_t t81 = 1651212680U;

    t81 = ((x397+(x398&x399))/x400);

    if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint64_t x402 = 297735625LLU;
	int16_t x403 = 8;
	uint64_t t82 = 3830LLU;

    t82 = ((x401+(x402&x403))/x404);

    if (t82 != 562967133814792LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x405 = 223U;
	volatile int32_t t83 = -1;

    t83 = ((x405+(x406&x407))/x408);

    if (t83 != -670) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x410 = INT64_MIN;
	static int64_t x411 = -1LL;
	uint16_t x412 = UINT16_MAX;

    t84 = ((x409+(x410&x411))/x412);

    if (t84 != -140739635871744LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x413 = -1LL;
	int16_t x414 = 9424;
	int8_t x415 = 14;
	int8_t x416 = -1;
	int64_t t85 = -192937935666203341LL;

    t85 = ((x413+(x414&x415))/x416);

    if (t85 != 1LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x417 = -1;
	uint32_t x418 = UINT32_MAX;
	static uint32_t x419 = 1U;
	static volatile int64_t x420 = -1LL;
	int64_t t86 = 16068LL;

    t86 = ((x417+(x418&x419))/x420);

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x421 = 1;
	uint8_t x422 = 95U;
	uint8_t x423 = 3U;
	int64_t x424 = INT64_MIN;

    t87 = ((x421+(x422&x423))/x424);

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x425 = -1;
	int32_t x426 = INT32_MIN;
	int32_t t88 = -24;

    t88 = ((x425+(x426&x427))/x428);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x429 = -8LL;
	static volatile int32_t x430 = -1;
	uint16_t x431 = UINT16_MAX;
	int32_t x432 = INT32_MIN;
	volatile int64_t t89 = -74202836809LL;

    t89 = ((x429+(x430&x431))/x432);

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static int64_t x433 = 2116LL;
	uint64_t x435 = UINT64_MAX;
	volatile uint64_t t90 = 211861047196LLU;

    t90 = ((x433+(x434&x435))/x436);

    if (t90 != 4294967298LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x437 = 14U;
	uint64_t x438 = 380686487LLU;
	static uint64_t x439 = UINT64_MAX;
	static volatile uint64_t t91 = 7682998LLU;

    t91 = ((x437+(x438&x439))/x440);

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x443 = -65406715;
	volatile uint32_t x444 = UINT32_MAX;
	static uint32_t t92 = 2U;

    t92 = ((x441+(x442&x443))/x444);

    if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x446 = 25195U;
	int16_t x447 = INT16_MIN;
	volatile int64_t x448 = -268273563LL;
	volatile int64_t t93 = 58910603806258LL;

    t93 = ((x445+(x446&x447))/x448);

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x449 = -1;
	int16_t x450 = -228;
	int16_t x451 = -1;
	int8_t x452 = INT8_MAX;
	volatile int32_t t94 = 109;

    t94 = ((x449+(x450&x451))/x452);

    if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint8_t x453 = 6U;
	static int8_t x454 = 0;
	static int64_t x455 = INT64_MIN;
	int8_t x456 = INT8_MIN;
	volatile int64_t t95 = -34LL;

    t95 = ((x453+(x454&x455))/x456);

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x457 = INT16_MIN;
	static int8_t x458 = INT8_MIN;
	uint64_t x459 = 10302LLU;

    t96 = ((x457+(x458&x459))/x460);

    if (t96 != 4294967296LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x461 = INT16_MAX;
	int32_t x462 = -1;
	int32_t x463 = -433847440;
	volatile int32_t t97 = 349997;

    t97 = ((x461+(x462&x463))/x464);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x466 = -1;
	int32_t x467 = -1;
	int64_t t98 = 147741103669941458LL;

    t98 = ((x465+(x466&x467))/x468);

    if (t98 != -120LL) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x469 = -1LL;
	volatile uint8_t x470 = 14U;
	uint16_t x471 = 444U;
	volatile int16_t x472 = INT16_MIN;
	volatile int64_t t99 = -53LL;

    t99 = ((x469+(x470&x471))/x472);

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x474 = -1LL;
	int8_t x475 = INT8_MIN;
	int64_t t100 = 51LL;

    t100 = ((x473+(x474&x475))/x476);

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x477 = INT16_MAX;
	volatile int8_t x480 = -1;

    t101 = ((x477+(x478&x479))/x480);

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x481 = -1;

    t102 = ((x481+(x482&x483))/x484);

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x485 = 75U;
	static uint8_t x486 = 1U;
	int32_t x487 = INT32_MAX;
	volatile int32_t t103 = -26844;

    t103 = ((x485+(x486&x487))/x488);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x489 = 1482;
	int8_t x490 = 13;
	uint16_t x491 = 16650U;
	static int8_t x492 = 1;
	volatile int32_t t104 = 5804809;

    t104 = ((x489+(x490&x491))/x492);

    if (t104 != 1490) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x493 = -1678884LL;
	uint32_t x494 = 88112U;
	static volatile int16_t x496 = 6050;
	volatile int64_t t105 = 5541486LL;

    t105 = ((x493+(x494&x495))/x496);

    if (t105 != -277LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x498 = INT8_MIN;
	uint8_t x499 = 20U;
	static volatile int64_t t106 = -502208963309028377LL;

    t106 = ((x497+(x498&x499))/x500);

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x501 = -14;
	volatile uint64_t x502 = 8843306620914892297LLU;
	volatile int8_t x503 = 1;
	static int16_t x504 = -1;
	volatile uint64_t t107 = 7813053904635965455LLU;

    t107 = ((x501+(x502&x503))/x504);

    if (t107 != 0LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint8_t x505 = 14U;
	uint8_t x507 = 115U;
	uint32_t x508 = 1450153709U;

    t108 = ((x505+(x506&x507))/x508);

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x510 = INT64_MAX;
	int32_t x511 = INT32_MAX;
	int16_t x512 = 12200;
	static volatile int64_t t109 = -2585767505LL;

    t109 = ((x509+(x510&x511))/x512);

    if (t109 != 176023LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x514 = UINT16_MAX;
	int64_t x516 = INT64_MIN;
	static volatile int64_t t110 = 32820LL;

    t110 = ((x513+(x514&x515))/x516);

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int8_t x517 = INT8_MIN;
	int16_t x518 = 43;
	volatile uint16_t x519 = 11356U;
	int8_t x520 = 15;
	int32_t t111 = -3773;

    t111 = ((x517+(x518&x519))/x520);

    if (t111 != -8) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x522 = 7185174U;
	volatile uint8_t x523 = 0U;
	uint64_t x524 = 4LLU;
	volatile uint64_t t112 = 595534976092684LLU;

    t112 = ((x521+(x522&x523))/x524);

    if (t112 != 16383LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x525 = -1;
	volatile int16_t x526 = -495;
	static int64_t x527 = -97LL;
	int16_t x528 = 113;
	static volatile int64_t t113 = 1LL;

    t113 = ((x525+(x526&x527))/x528);

    if (t113 != -4LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x529 = INT8_MAX;
	static int16_t x531 = INT16_MIN;
	int32_t t114 = -526710454;

    t114 = ((x529+(x530&x531))/x532);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x533 = INT16_MAX;
	int64_t x534 = 2304984546LL;
	int8_t x535 = INT8_MIN;
	volatile int64_t x536 = INT64_MIN;
	static int64_t t115 = -98LL;

    t115 = ((x533+(x534&x535))/x536);

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x539 = -1;
	int32_t x540 = INT32_MAX;
	uint32_t t116 = 3500U;

    t116 = ((x537+(x538&x539))/x540);

    if (t116 != 0U) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x541 = INT8_MAX;
	static int32_t x542 = -1;
	int64_t x543 = INT64_MIN;
	int64_t t117 = -3472890506871LL;

    t117 = ((x541+(x542&x543))/x544);

    if (t117 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x546 = INT16_MIN;
	static int32_t x547 = INT32_MIN;
	int64_t t118 = 227LL;

    t118 = ((x545+(x546&x547))/x548);

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x549 = 397U;
	volatile int16_t x550 = 12;
	int32_t x552 = INT32_MAX;
	int64_t t119 = -404653916610674LL;

    t119 = ((x549+(x550&x551))/x552);

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile uint16_t x553 = UINT16_MAX;
	uint64_t x554 = 21LLU;
	int64_t x555 = 0LL;
	uint16_t x556 = UINT16_MAX;
	uint64_t t120 = 26467LLU;

    t120 = ((x553+(x554&x555))/x556);

    if (t120 != 1LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x557 = 54;
	static int64_t x558 = INT64_MIN;
	int64_t x559 = 409696245LL;
	volatile int16_t x560 = INT16_MAX;
	int64_t t121 = -326310124541LL;

    t121 = ((x557+(x558&x559))/x560);

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x563 = -1;

    t122 = ((x561+(x562&x563))/x564);

    if (t122 != -32766) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x565 = INT32_MIN;
	volatile uint64_t x566 = 1057929887851735LLU;
	int8_t x567 = INT8_MIN;
	int8_t x568 = -19;
	uint64_t t123 = 230739353492LLU;

    t123 = ((x565+(x566&x567))/x568);

    if (t123 != 0LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x569 = INT64_MAX;
	static int8_t x570 = INT8_MIN;
	volatile int8_t x571 = -1;
	static uint16_t x572 = UINT16_MAX;

    t124 = ((x569+(x570&x571))/x572);

    if (t124 != 140739635871744LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x573 = -9;
	uint8_t x575 = UINT8_MAX;
	volatile uint32_t t125 = 258591218U;

    t125 = ((x573+(x574&x575))/x576);

    if (t125 != 0U) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x577 = 126887206099054LL;
	uint32_t x578 = 37349U;
	int16_t x579 = INT16_MIN;
	int32_t x580 = -1;
	int64_t t126 = 4068LL;

    t126 = ((x577+(x578&x579))/x580);

    if (t126 != -126887206131822LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint16_t x583 = 19680U;
	uint64_t x584 = UINT64_MAX;
	uint64_t t127 = 27727988LLU;

    t127 = ((x581+(x582&x583))/x584);

    if (t127 != 1LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x587 = -1;
	volatile int32_t x588 = 15091;
	int32_t t128 = -12;

    t128 = ((x585+(x586&x587))/x588);

    if (t128 != 4) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x589 = INT32_MAX;
	uint64_t x590 = 224979548274LLU;
	int64_t x591 = INT64_MIN;
	int8_t x592 = INT8_MAX;
	static volatile uint64_t t129 = 62392407070384496LLU;

    t129 = ((x589+(x590&x591))/x592);

    if (t129 != 16909320LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x593 = -1;
	uint32_t x594 = UINT32_MAX;
	int16_t x595 = INT16_MIN;
	volatile int16_t x596 = 1;
	uint32_t t130 = 2203U;

    t130 = ((x593+(x594&x595))/x596);

    if (t130 != 4294934527U) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x597 = INT16_MIN;
	int64_t x599 = -1260028939431998740LL;
	int16_t x600 = INT16_MAX;
	volatile int64_t t131 = 11645148LL;

    t131 = ((x597+(x598&x599))/x600);

    if (t131 != -38454205128087LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint64_t x602 = 1416232640750521233LLU;
	volatile int32_t x603 = 698208046;
	static int16_t x604 = INT16_MIN;

    t132 = ((x601+(x602&x603))/x604);

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	static int32_t x613 = INT32_MIN;
	uint16_t x614 = 1U;
	uint64_t x615 = UINT64_MAX;
	int8_t x616 = INT8_MIN;
	volatile uint64_t t133 = 15451LLU;

    t133 = ((x613+(x614&x615))/x616);

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x617 = -1;
	uint16_t x618 = 14491U;
	int32_t x619 = -326;
	int32_t t134 = -1;

    t134 = ((x617+(x618&x619))/x620);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x621 = 1U;
	static int8_t x622 = -32;
	uint64_t x623 = UINT64_MAX;
	int64_t x624 = INT64_MIN;

    t135 = ((x621+(x622&x623))/x624);

    if (t135 != 1LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x633 = -2575;
	uint32_t x636 = 1789420U;

    t136 = ((x633+(x634&x635))/x636);

    if (t136 != 2397LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x638 = UINT8_MAX;
	volatile uint16_t x639 = UINT16_MAX;
	uint8_t x640 = UINT8_MAX;
	volatile int32_t t137 = -1;

    t137 = ((x637+(x638&x639))/x640);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x645 = INT16_MAX;
	uint16_t x648 = 1139U;
	int64_t t138 = -979840LL;

    t138 = ((x645+(x646&x647))/x648);

    if (t138 != 28LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int16_t x649 = INT16_MIN;
	int32_t x650 = 682959911;
	static int32_t x651 = INT32_MIN;
	volatile uint32_t x652 = UINT32_MAX;
	volatile uint32_t t139 = 50378034U;

    t139 = ((x649+(x650&x651))/x652);

    if (t139 != 0U) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint32_t x653 = UINT32_MAX;
	int64_t x654 = INT64_MIN;
	int16_t x656 = -1;
	int64_t t140 = -4086062466595088844LL;

    t140 = ((x653+(x654&x655))/x656);

    if (t140 != -4294967295LL) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x657 = INT64_MAX;
	int64_t x659 = -1LL;
	int8_t x660 = -1;
	volatile int64_t t141 = 1936800824335967808LL;

    t141 = ((x657+(x658&x659))/x660);

    if (t141 != -9223372036854743039LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x661 = 1;
	int16_t x662 = INT16_MAX;
	static uint32_t x663 = 692U;
	static volatile int16_t x664 = INT16_MAX;
	volatile uint32_t t142 = 21974U;

    t142 = ((x661+(x662&x663))/x664);

    if (t142 != 0U) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x665 = INT32_MIN;
	static volatile uint16_t x666 = 3U;
	int8_t x667 = 16;
	volatile int8_t x668 = -37;
	static volatile int32_t t143 = -58841610;

    t143 = ((x665+(x666&x667))/x668);

    if (t143 != 58040098) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x669 = INT8_MAX;
	uint32_t x670 = UINT32_MAX;
	int16_t x671 = INT16_MIN;
	static int16_t x672 = INT16_MAX;
	volatile uint32_t t144 = 692U;

    t144 = ((x669+(x670&x671))/x672);

    if (t144 != 131075U) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x678 = -1;
	int16_t x679 = INT16_MIN;

    t145 = ((x677+(x678&x679))/x680);

    if (t145 != 376U) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x681 = 134U;
	static uint8_t x682 = 2U;
	uint64_t x683 = UINT64_MAX;
	int8_t x684 = 1;
	uint64_t t146 = 3889116388362959064LLU;

    t146 = ((x681+(x682&x683))/x684);

    if (t146 != 136LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x685 = INT32_MIN;
	uint16_t x686 = 3653U;
	static int8_t x687 = -27;
	volatile int8_t x688 = 28;
	static volatile int32_t t147 = 13;

    t147 = ((x685+(x686&x687))/x688);

    if (t147 != -76695714) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile uint16_t x689 = 10018U;
	uint32_t x690 = 71U;
	static int32_t x691 = -5;
	int32_t x692 = INT32_MAX;

    t148 = ((x689+(x690&x691))/x692);

    if (t148 != 0U) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x693 = 0U;
	static int64_t x694 = INT64_MIN;
	volatile int64_t x696 = INT64_MAX;
	int64_t t149 = 1767030760503LL;

    t149 = ((x693+(x694&x695))/x696);

    if (t149 != -1LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x697 = -30;
	static uint64_t x698 = 127752LLU;
	int32_t x700 = INT32_MIN;

    t150 = ((x697+(x698&x699))/x700);

    if (t150 != 0LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x701 = -1;
	int16_t x702 = INT16_MIN;
	uint8_t x704 = 21U;
	int32_t t151 = 185626;

    t151 = ((x701+(x702&x703))/x704);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x706 = UINT8_MAX;
	int16_t x707 = -1;
	int64_t x708 = -105LL;
	int64_t t152 = -744024LL;

    t152 = ((x705+(x706&x707))/x708);

    if (t152 != -1LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x709 = 3131U;
	int16_t x710 = -6;
	uint32_t x711 = 166250037U;
	int16_t x712 = INT16_MIN;

    t153 = ((x709+(x710&x711))/x712);

    if (t153 != 0U) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x713 = 1;
	uint16_t x714 = 12460U;
	static uint32_t x715 = 31U;
	uint32_t t154 = 218U;

    t154 = ((x713+(x714&x715))/x716);

    if (t154 != 0U) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint8_t x717 = 55U;
	int64_t x718 = INT64_MIN;
	int8_t x719 = INT8_MIN;
	static int64_t x720 = INT64_MAX;
	int64_t t155 = -33006717LL;

    t155 = ((x717+(x718&x719))/x720);

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static int8_t x721 = INT8_MIN;
	static volatile int32_t x723 = INT32_MIN;
	int16_t x724 = 103;
	uint32_t t156 = 23U;

    t156 = ((x721+(x722&x723))/x724);

    if (t156 != 20849354U) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x725 = 0U;
	volatile int16_t x727 = INT16_MIN;

    t157 = ((x725+(x726&x727))/x728);

    if (t157 != 4674410784227328LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x731 = 525U;
	uint64_t t158 = 4LLU;

    t158 = ((x729+(x730&x731))/x732);

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x733 = -1;
	int16_t x735 = INT16_MIN;
	int16_t x736 = -1;
	static uint64_t t159 = 16018LLU;

    t159 = ((x733+(x734&x735))/x736);

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x737 = -1103;
	uint8_t x738 = 0U;
	volatile uint8_t x739 = 1U;
	uint32_t t160 = 13759U;

    t160 = ((x737+(x738&x739))/x740);

    if (t160 != 35U) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x741 = UINT64_MAX;
	static volatile uint32_t x742 = 129619U;
	int16_t x743 = 10;
	uint16_t x744 = 11U;
	volatile uint64_t t161 = 25901LLU;

    t161 = ((x741+(x742&x743))/x744);

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x745 = INT64_MAX;
	uint64_t x747 = UINT64_MAX;
	volatile int16_t x748 = -1;
	static volatile uint64_t t162 = 60219792675704116LLU;

    t162 = ((x745+(x746&x747))/x748);

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint8_t x749 = 77U;
	int32_t x750 = INT32_MIN;
	int64_t x751 = INT64_MIN;
	static int16_t x752 = INT16_MIN;
	volatile int64_t t163 = 982557988LL;

    t163 = ((x749+(x750&x751))/x752);

    if (t163 != 281474976710655LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x753 = 1;
	int32_t x754 = -1056801;
	uint8_t x755 = UINT8_MAX;
	volatile int64_t x756 = INT64_MAX;
	static int64_t t164 = 10548362075962342LL;

    t164 = ((x753+(x754&x755))/x756);

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x757 = INT64_MAX;
	int32_t x758 = 101;
	static int64_t x759 = 0LL;
	volatile int64_t t165 = -10627933747782LL;

    t165 = ((x757+(x758&x759))/x760);

    if (t165 != -72057594037927935LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x761 = 0;
	uint8_t x762 = UINT8_MAX;
	int16_t x764 = INT16_MIN;
	int32_t t166 = -2245151;

    t166 = ((x761+(x762&x763))/x764);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x767 = INT8_MAX;
	volatile int64_t x768 = 140497457518835031LL;
	volatile int64_t t167 = -194LL;

    t167 = ((x765+(x766&x767))/x768);

    if (t167 != -65LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x769 = UINT8_MAX;
	static uint8_t x770 = UINT8_MAX;
	uint64_t x771 = UINT64_MAX;
	int8_t x772 = INT8_MIN;
	volatile uint64_t t168 = 257127427LLU;

    t168 = ((x769+(x770&x771))/x772);

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x773 = 132421739U;
	int16_t x775 = INT16_MAX;
	int32_t x776 = -126320094;
	volatile uint32_t t169 = 14U;

    t169 = ((x773+(x774&x775))/x776);

    if (t169 != 0U) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x777 = -1;
	int8_t x778 = 3;
	uint8_t x779 = 0U;
	volatile int64_t x780 = 12LL;
	volatile int64_t t170 = -1937LL;

    t170 = ((x777+(x778&x779))/x780);

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x781 = INT32_MIN;
	uint16_t x782 = 114U;
	int64_t x783 = INT64_MIN;
	int32_t x784 = 1;
	int64_t t171 = -106630LL;

    t171 = ((x781+(x782&x783))/x784);

    if (t171 != -2147483648LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x785 = 57U;
	uint32_t x786 = 375165843U;
	int64_t t172 = -55049656138126079LL;

    t172 = ((x785+(x786&x787))/x788);

    if (t172 != -58LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x789 = 29;
	int16_t x790 = INT16_MAX;
	static int64_t x791 = INT64_MAX;
	volatile int32_t x792 = -1;
	int64_t t173 = -164107331LL;

    t173 = ((x789+(x790&x791))/x792);

    if (t173 != -32796LL) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int16_t x798 = 5;
	uint64_t x799 = 84580312051313466LLU;
	uint32_t x800 = UINT32_MAX;
	volatile uint64_t t174 = 1407074249809LLU;

    t174 = ((x797+(x798&x799))/x800);

    if (t174 != 4294967297LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x801 = -1;
	volatile int64_t x802 = 14341972LL;
	int64_t x803 = -1LL;
	static int32_t x804 = 283004533;

    t175 = ((x801+(x802&x803))/x804);

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x805 = -6656;
	static uint8_t x807 = 1U;
	int16_t x808 = INT16_MIN;

    t176 = ((x805+(x806&x807))/x808);

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint32_t x809 = 23080875U;
	volatile int32_t x810 = 23491126;
	int16_t x811 = -1;
	volatile int32_t x812 = 3;

    t177 = ((x809+(x810&x811))/x812);

    if (t177 != 15524000U) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x813 = -1;
	int64_t x814 = 557LL;
	static int64_t x815 = 179LL;
	int64_t x816 = INT64_MIN;
	volatile int64_t t178 = 2444755516179LL;

    t178 = ((x813+(x814&x815))/x816);

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x817 = INT8_MAX;
	uint8_t x819 = UINT8_MAX;
	int8_t x820 = INT8_MIN;
	volatile int64_t t179 = 90795018062282248LL;

    t179 = ((x817+(x818&x819))/x820);

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int64_t x821 = -533467770LL;
	int64_t x823 = INT64_MIN;
	int16_t x824 = -1;

    t180 = ((x821+(x822&x823))/x824);

    if (t180 != 533467770LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x825 = -1;
	int16_t x826 = INT16_MIN;
	uint16_t x827 = 3546U;
	static int32_t x828 = 35238;
	volatile int32_t t181 = 55;

    t181 = ((x825+(x826&x827))/x828);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x829 = 14657;
	static int64_t x832 = INT64_MIN;
	int64_t t182 = 0LL;

    t182 = ((x829+(x830&x831))/x832);

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x834 = -427;
	volatile uint64_t x835 = 6417LLU;
	int32_t x836 = -26033;
	uint64_t t183 = 3246669LLU;

    t183 = ((x833+(x834&x835))/x836);

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x837 = 122U;
	int64_t x839 = 8967540349221LL;
	int8_t x840 = -1;
	static volatile int64_t t184 = -2223724600283648LL;

    t184 = ((x837+(x838&x839))/x840);

    if (t184 != -8967540349343LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x841 = 70U;
	uint16_t x842 = 30U;
	volatile int8_t x844 = INT8_MAX;
	static int32_t t185 = 1759;

    t185 = ((x841+(x842&x843))/x844);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int8_t x851 = -1;
	volatile int32_t x852 = -484;
	static volatile uint64_t t186 = 13564865493224LLU;

    t186 = ((x849+(x850&x851))/x852);

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x853 = 16U;
	uint64_t x854 = UINT64_MAX;
	volatile uint32_t x855 = 1U;
	int16_t x856 = 9362;
	uint64_t t187 = 29290739361773LLU;

    t187 = ((x853+(x854&x855))/x856);

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x857 = -1;
	uint8_t x859 = UINT8_MAX;
	int64_t x860 = INT64_MAX;
	volatile int64_t t188 = 7384LL;

    t188 = ((x857+(x858&x859))/x860);

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int8_t x861 = INT8_MIN;
	volatile int32_t x863 = INT32_MIN;
	uint8_t x864 = 95U;
	volatile int64_t t189 = 7846352296155833LL;

    t189 = ((x861+(x862&x863))/x864);

    if (t189 != 97088126681129389LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x865 = -1;
	int64_t x866 = 5302554903LL;
	uint64_t x867 = UINT64_MAX;
	uint64_t t190 = 1927274711501607473LLU;

    t190 = ((x865+(x866&x867))/x868);

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x869 = 5;
	static int16_t x870 = 15617;
	int16_t x872 = INT16_MIN;
	static volatile int32_t t191 = 232;

    t191 = ((x869+(x870&x871))/x872);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x873 = 95194227466387320LLU;
	static uint32_t x874 = UINT32_MAX;
	volatile int32_t x875 = INT32_MIN;
	static uint8_t x876 = UINT8_MAX;
	uint64_t t192 = 448452043358LLU;

    t192 = ((x873+(x874&x875))/x876);

    if (t192 != 373310704368121LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x877 = 2U;
	int32_t x879 = -1304957;
	int8_t x880 = INT8_MIN;
	static volatile int32_t t193 = 1694;

    t193 = ((x877+(x878&x879))/x880);

    if (t193 != -5) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x881 = UINT16_MAX;
	uint16_t x883 = UINT16_MAX;
	int64_t x884 = -1LL;

    t194 = ((x881+(x882&x883))/x884);

    if (t194 != -76530LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x885 = INT16_MIN;
	uint16_t x886 = UINT16_MAX;
	static int64_t x887 = 40697LL;
	volatile int64_t t195 = 16735LL;

    t195 = ((x885+(x886&x887))/x888);

    if (t195 != -1LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x889 = -7;
	volatile uint16_t x890 = 48U;
	int64_t x891 = INT64_MAX;
	int32_t x892 = INT32_MAX;

    t196 = ((x889+(x890&x891))/x892);

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x893 = INT8_MAX;
	int8_t x894 = INT8_MAX;
	int32_t x895 = INT32_MAX;
	volatile uint8_t x896 = 12U;

    t197 = ((x893+(x894&x895))/x896);

    if (t197 != 21) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x897 = INT64_MAX;
	int32_t x899 = -1;
	static uint32_t x900 = 3U;
	uint64_t t198 = 24696LLU;

    t198 = ((x897+(x898&x899))/x900);

    if (t198 != 3074459568962650574LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint16_t x901 = UINT16_MAX;
	static uint32_t x902 = 186U;
	static int32_t x903 = INT32_MIN;
	uint8_t x904 = UINT8_MAX;
	volatile uint32_t t199 = 27U;

    t199 = ((x901+(x902&x903))/x904);

    if (t199 != 257U) { NG(); } else { ; }
	
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

