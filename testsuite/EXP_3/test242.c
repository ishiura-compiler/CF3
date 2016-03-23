
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

int64_t x10 = -1LL;
int32_t x19 = -243;
int8_t x21 = INT8_MIN;
static int64_t x22 = 1LL;
int16_t x24 = -2;
uint16_t x26 = 74U;
int32_t x35 = -112726;
static volatile int32_t x41 = INT32_MAX;
int8_t x52 = INT8_MIN;
uint32_t x70 = 5205U;
uint64_t x88 = UINT64_MAX;
int32_t x89 = INT32_MAX;
volatile int32_t t18 = -96643316;
uint16_t x129 = 38U;
volatile int8_t x137 = -1;
uint32_t x139 = 815659409U;
static uint32_t t25 = 7905525U;
int64_t x143 = -1LL;
int64_t x145 = -1445LL;
volatile uint64_t t28 = 1199LLU;
static int8_t x156 = INT8_MIN;
static int32_t t29 = -656;
int64_t x166 = -15223LL;
static int16_t x169 = INT16_MAX;
int64_t x188 = -65LL;
static int64_t x201 = 0LL;
volatile uint64_t t40 = 2013261LLU;
static int8_t x220 = INT8_MAX;
int32_t x222 = INT32_MAX;
uint64_t x226 = 5914476483272LLU;
uint16_t x234 = 1722U;
int16_t x236 = 15726;
uint32_t x239 = 53U;
int8_t x241 = INT8_MAX;
int16_t x244 = -16;
uint8_t x251 = 31U;
volatile uint64_t t50 = 32171948229693194LLU;
volatile int16_t x256 = INT16_MAX;
static uint64_t t52 = 3050370693927138LLU;
int32_t x262 = -29;
uint64_t x283 = 4680109LLU;
uint8_t x288 = UINT8_MAX;
static int16_t x290 = INT16_MAX;
int8_t x292 = 52;
volatile int64_t x296 = 9255LL;
static int16_t x299 = INT16_MIN;
static int64_t t61 = 219LL;
uint8_t x310 = UINT8_MAX;
volatile int32_t x311 = 0;
static int16_t x317 = INT16_MAX;
volatile int64_t x319 = -33684571986004LL;
static int64_t x321 = -1LL;
int16_t x324 = 0;
int64_t t65 = -1LL;
int32_t x334 = INT32_MIN;
uint8_t x335 = UINT8_MAX;
volatile uint64_t t69 = 744448297237054LLU;
static int16_t x343 = INT16_MAX;
static int64_t x344 = -29658425845LL;
int64_t t70 = -20LL;
volatile uint64_t x345 = 61715LLU;
volatile int8_t x351 = INT8_MAX;
int16_t x352 = 25;
volatile uint64_t t73 = 4280241387923920823LLU;
volatile uint32_t x357 = UINT32_MAX;
int8_t x358 = INT8_MAX;
int8_t x370 = INT8_MIN;
int16_t x372 = INT16_MAX;
int16_t x377 = -20;
int8_t x379 = INT8_MIN;
static uint8_t x397 = 0U;
uint64_t x399 = 14508173744LLU;
uint64_t t83 = 643751115148913LLU;
int16_t x413 = INT16_MAX;
int32_t x418 = INT32_MAX;
int16_t x426 = -564;
uint32_t x428 = 3541062U;
int64_t x429 = INT64_MAX;
int16_t x430 = 13602;
int64_t x435 = 1856LL;
uint64_t x436 = 62004LLU;
static uint64_t x448 = UINT64_MAX;
static volatile uint64_t t93 = 1LLU;
static volatile int16_t x459 = INT16_MIN;
volatile int8_t x462 = INT8_MIN;
volatile int64_t x466 = INT64_MAX;
static int16_t x467 = -1;
int64_t t96 = 1418948395546040952LL;
int16_t x470 = 209;
int8_t x473 = INT8_MIN;
static volatile int16_t x475 = INT16_MIN;
volatile int64_t t98 = -159844037921LL;
uint64_t x487 = 464605LLU;
volatile uint64_t t101 = 45678855330630LLU;
int16_t x491 = INT16_MIN;
int8_t x506 = INT8_MIN;
uint8_t x509 = UINT8_MAX;
uint32_t x515 = 4U;
volatile int8_t x526 = INT8_MIN;
uint64_t x528 = 1267963314873LLU;
uint64_t x529 = 95177LLU;
int64_t t112 = 1303408338376620195LL;
uint64_t x556 = UINT64_MAX;
volatile int32_t x563 = INT32_MIN;
volatile int64_t t116 = 104200LL;
int32_t x598 = INT32_MAX;
volatile int32_t t120 = 54395;
static volatile int8_t x604 = INT8_MAX;
uint16_t x607 = 36U;
uint8_t x608 = 55U;
uint64_t t122 = 19890LLU;
volatile int16_t x617 = -383;
volatile int32_t t123 = -3809785;
volatile int64_t x622 = INT64_MAX;
uint16_t x625 = 84U;
volatile int8_t x626 = INT8_MIN;
static int32_t x627 = INT32_MIN;
int64_t t125 = -19LL;
volatile int64_t x634 = 22243171LL;
static volatile int16_t x636 = INT16_MAX;
uint32_t x641 = 6837796U;
uint8_t x650 = 11U;
int16_t x653 = -7625;
int8_t x654 = INT8_MIN;
static int8_t x666 = 15;
volatile int64_t x667 = -1LL;
uint64_t x672 = 109237634951035LLU;
uint32_t t137 = 393212U;
static uint32_t x680 = 888U;
int32_t x681 = INT32_MIN;
int32_t t139 = -766113854;
volatile int64_t x689 = 60507718596867943LL;
static int8_t x699 = -40;
volatile uint32_t t142 = 7856U;
int64_t x703 = -99040LL;
uint8_t x709 = 0U;
int32_t x712 = 40;
int8_t x716 = -1;
uint32_t x724 = 162459U;
int32_t x726 = 272660;
int64_t x728 = -1LL;
volatile int64_t t148 = -2089070253674LL;
volatile int8_t x732 = -1;
static uint32_t x737 = 22569U;
int16_t x741 = INT16_MAX;
int16_t x748 = 4056;
uint8_t x750 = 112U;
int8_t x751 = 44;
static uint32_t t155 = 14078721U;
uint32_t x757 = 186530014U;
volatile int32_t x761 = INT32_MIN;
int16_t x764 = INT16_MIN;
uint32_t t157 = 259196039U;
int32_t x768 = INT32_MIN;
int8_t x770 = 1;
int32_t x772 = -1;
uint64_t x775 = 68607726389LLU;
uint32_t x776 = UINT32_MAX;
static uint16_t x779 = 8U;
volatile uint32_t t161 = 0U;
int64_t x818 = -1LL;
static volatile int16_t x821 = INT16_MIN;
static int32_t t171 = -1;
int64_t x826 = -1LL;
int32_t x829 = INT32_MIN;
int16_t x830 = INT16_MAX;
volatile uint8_t x832 = UINT8_MAX;
int32_t t173 = -1202;
uint32_t x841 = 2U;
uint32_t x842 = 1U;
int16_t x845 = INT16_MIN;
uint32_t t176 = 93600474U;
static int32_t x866 = 1;
int8_t x871 = INT8_MAX;
volatile uint64_t t181 = 397266092262604600LLU;
uint64_t x879 = UINT64_MAX;
uint32_t x883 = 162U;
uint64_t t183 = 18LLU;
uint64_t x898 = 7664684337997LLU;
volatile uint8_t x900 = UINT8_MAX;
uint8_t x901 = 17U;
int16_t x903 = 457;
static int32_t x905 = -1;
static int64_t x907 = 74370489756580233LL;
int64_t x910 = -1LL;
volatile int64_t x916 = -4549062150839264498LL;
int64_t x919 = INT64_MIN;
volatile int16_t x920 = -1;
static int32_t x921 = INT32_MAX;
int64_t x924 = -352923578LL;
static int32_t x933 = INT32_MIN;
int8_t x937 = 5;
uint8_t x944 = 78U;
int8_t x945 = INT8_MIN;
int8_t x946 = INT8_MIN;
uint32_t x947 = 1208355U;
static int32_t t198 = 1356;
static int16_t x958 = INT16_MAX;


void f0(void) {
    	static volatile int64_t x1 = -121394335LL;
	int64_t x2 = -1LL;
	uint16_t x3 = 11922U;
	static uint64_t x4 = 6LLU;
	uint64_t t0 = 83LLU;

    t0 = ((x1/x2)/(x3-x4));

    if (t0 != 10187LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x9 = -1;
	uint32_t x11 = 943912U;
	int32_t x12 = -1;
	volatile int64_t t1 = -259584876577919LL;

    t1 = ((x9/x10)/(x11-x12));

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x13 = 212118812682117267LL;
	volatile int64_t x14 = -60227435774871LL;
	static volatile int64_t x15 = 87824387LL;
	volatile int32_t x16 = INT32_MIN;
	int64_t t2 = 570041924LL;

    t2 = ((x13/x14)/(x15-x16));

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x17 = 40864703296374467LL;
	uint16_t x18 = 495U;
	static volatile uint8_t x20 = 47U;
	int64_t t3 = -12784476LL;

    t3 = ((x17/x18)/(x19-x20));

    if (t3 != -284672262601LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x23 = INT64_MIN;
	int64_t t4 = 323LL;

    t4 = ((x21/x22)/(x23-x24));

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x25 = INT32_MIN;
	uint16_t x27 = 7U;
	int64_t x28 = -1LL;
	int64_t t5 = -26277214964558997LL;

    t5 = ((x25/x26)/(x27-x28));

    if (t5 != -3627506LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x29 = -29559;
	volatile int64_t x30 = 11LL;
	static volatile int16_t x31 = INT16_MIN;
	uint32_t x32 = 38863U;
	int64_t t6 = 100178LL;

    t6 = ((x29/x30)/(x31-x32));

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint8_t x33 = 0U;
	int8_t x34 = 32;
	int64_t x36 = -1LL;
	int64_t t7 = -4087123905257LL;

    t7 = ((x33/x34)/(x35-x36));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x42 = INT16_MIN;
	volatile int32_t x43 = INT32_MIN;
	volatile int16_t x44 = INT16_MIN;
	volatile int32_t t8 = -759063;

    t8 = ((x41/x42)/(x43-x44));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x45 = INT8_MIN;
	volatile uint8_t x46 = 9U;
	int16_t x47 = INT16_MIN;
	int16_t x48 = -1;
	int32_t t9 = 400992;

    t9 = ((x45/x46)/(x47-x48));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x49 = INT32_MIN;
	static int8_t x50 = INT8_MIN;
	int64_t x51 = -36LL;
	int64_t t10 = 198767588894069417LL;

    t10 = ((x49/x50)/(x51-x52));

    if (t10 != 182361LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x57 = INT16_MAX;
	uint8_t x58 = 18U;
	volatile int8_t x59 = INT8_MIN;
	static int64_t x60 = INT64_MIN;
	int64_t t11 = -2614114986LL;

    t11 = ((x57/x58)/(x59-x60));

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x65 = 1U;
	int16_t x66 = 13;
	static uint32_t x67 = 52211U;
	uint64_t x68 = 2637152LLU;
	uint64_t t12 = 34304074LLU;

    t12 = ((x65/x66)/(x67-x68));

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x69 = INT32_MIN;
	uint32_t x71 = UINT32_MAX;
	static int64_t x72 = -1LL;
	volatile int64_t t13 = 20623585600501LL;

    t13 = ((x69/x70)/(x71-x72));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x73 = INT32_MIN;
	int16_t x74 = 1460;
	uint32_t x75 = UINT32_MAX;
	int32_t x76 = INT32_MIN;
	uint32_t t14 = 1U;

    t14 = ((x73/x74)/(x75-x76));

    if (t14 != 1U) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x85 = -41238;
	int8_t x86 = 19;
	int64_t x87 = INT64_MIN;
	static uint64_t t15 = 34125161LLU;

    t15 = ((x85/x86)/(x87-x88));

    if (t15 != 1LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint8_t x90 = 82U;
	uint8_t x91 = 6U;
	int64_t x92 = 17289348LL;
	volatile int64_t t16 = 2850751501269LL;

    t16 = ((x89/x90)/(x91-x92));

    if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int16_t x93 = INT16_MAX;
	int32_t x94 = -773;
	uint16_t x95 = UINT16_MAX;
	int8_t x96 = INT8_MIN;
	volatile int32_t t17 = -956143;

    t17 = ((x93/x94)/(x95-x96));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x97 = INT8_MIN;
	volatile int16_t x98 = -3;
	int16_t x99 = -1806;
	static int16_t x100 = INT16_MIN;

    t18 = ((x97/x98)/(x99-x100));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x101 = UINT64_MAX;
	int64_t x102 = INT64_MAX;
	static volatile int32_t x103 = INT32_MIN;
	static uint32_t x104 = UINT32_MAX;
	volatile uint64_t t19 = 771528632LLU;

    t19 = ((x101/x102)/(x103-x104));

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint8_t x109 = UINT8_MAX;
	int16_t x110 = -1;
	int8_t x111 = INT8_MIN;
	uint32_t x112 = UINT32_MAX;
	volatile uint32_t t20 = 8955319U;

    t20 = ((x109/x110)/(x111-x112));

    if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x113 = INT64_MIN;
	int16_t x114 = INT16_MIN;
	static volatile int8_t x115 = INT8_MAX;
	int16_t x116 = -1;
	static volatile int64_t t21 = 17LL;

    t21 = ((x113/x114)/(x115-x116));

    if (t21 != 2199023255552LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint64_t x121 = UINT64_MAX;
	uint16_t x122 = 7997U;
	static uint32_t x123 = 14U;
	uint64_t x124 = 100177LLU;
	uint64_t t22 = 2084LLU;

    t22 = ((x121/x122)/(x123-x124));

    if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x125 = 20U;
	uint64_t x126 = 913614LLU;
	int16_t x127 = -3346;
	static uint16_t x128 = 7932U;
	uint64_t t23 = 15084027505LLU;

    t23 = ((x125/x126)/(x127-x128));

    if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x130 = -1;
	static int32_t x131 = -1;
	static int32_t x132 = -77837577;
	volatile int32_t t24 = -11;

    t24 = ((x129/x130)/(x131-x132));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint16_t x138 = 843U;
	volatile uint8_t x140 = UINT8_MAX;

    t25 = ((x137/x138)/(x139-x140));

    if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x141 = INT8_MIN;
	uint8_t x142 = 34U;
	uint8_t x144 = 15U;
	volatile int64_t t26 = 13329LL;

    t26 = ((x141/x142)/(x143-x144));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x146 = INT64_MIN;
	int64_t x147 = INT64_MIN;
	int16_t x148 = -1;
	int64_t t27 = 256157427LL;

    t27 = ((x145/x146)/(x147-x148));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x149 = 15199338LLU;
	volatile uint64_t x150 = 4363468818147LLU;
	uint32_t x151 = UINT32_MAX;
	int64_t x152 = -1LL;

    t28 = ((x149/x150)/(x151-x152));

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x153 = INT32_MAX;
	int16_t x154 = INT16_MIN;
	volatile int8_t x155 = 63;

    t29 = ((x153/x154)/(x155-x156));

    if (t29 != -343) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x157 = INT16_MIN;
	volatile uint16_t x158 = 16524U;
	uint8_t x159 = UINT8_MAX;
	volatile uint16_t x160 = UINT16_MAX;
	static int32_t t30 = 434386;

    t30 = ((x157/x158)/(x159-x160));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x161 = -386070LL;
	int32_t x162 = 1014501;
	uint64_t x163 = UINT64_MAX;
	int16_t x164 = INT16_MAX;
	volatile uint64_t t31 = 6082819955LLU;

    t31 = ((x161/x162)/(x163-x164));

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x165 = 417255505U;
	volatile uint16_t x167 = 20908U;
	static volatile int16_t x168 = INT16_MIN;
	static int64_t t32 = 22379164658LL;

    t32 = ((x165/x166)/(x167-x168));

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x170 = INT8_MIN;
	volatile int8_t x171 = INT8_MIN;
	volatile int64_t x172 = INT64_MIN;
	volatile int64_t t33 = 4287138633LL;

    t33 = ((x169/x170)/(x171-x172));

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x173 = INT32_MAX;
	static uint8_t x174 = 6U;
	int16_t x175 = -1;
	int16_t x176 = INT16_MIN;
	int32_t t34 = -18;

    t34 = ((x173/x174)/(x175-x176));

    if (t34 != 10923) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x181 = -214;
	uint32_t x182 = UINT32_MAX;
	volatile uint64_t x183 = 805LLU;
	uint16_t x184 = 2U;
	uint64_t t35 = 3580LLU;

    t35 = ((x181/x182)/(x183-x184));

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x185 = UINT32_MAX;
	uint16_t x186 = 4718U;
	int8_t x187 = INT8_MIN;
	static volatile int64_t t36 = 1LL;

    t36 = ((x185/x186)/(x187-x188));

    if (t36 != -14449LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x189 = 9187224U;
	volatile int64_t x190 = INT64_MIN;
	volatile int16_t x191 = -1;
	int64_t x192 = 18LL;
	int64_t t37 = -108969003LL;

    t37 = ((x189/x190)/(x191-x192));

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x197 = INT32_MIN;
	static int64_t x198 = -25792979366LL;
	int8_t x199 = 17;
	int32_t x200 = -55576;
	int64_t t38 = 815820910LL;

    t38 = ((x197/x198)/(x199-x200));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x202 = INT16_MIN;
	static volatile uint64_t x203 = UINT64_MAX;
	int32_t x204 = -147313;
	static volatile uint64_t t39 = 32678LLU;

    t39 = ((x201/x202)/(x203-x204));

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x205 = 231;
	static volatile uint64_t x206 = 293656371LLU;
	int32_t x207 = INT32_MIN;
	int8_t x208 = -1;

    t40 = ((x205/x206)/(x207-x208));

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x213 = INT8_MAX;
	static uint8_t x214 = 1U;
	static int32_t x215 = INT32_MIN;
	static int64_t x216 = INT64_MIN;
	int64_t t41 = -896192LL;

    t41 = ((x213/x214)/(x215-x216));

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x217 = UINT32_MAX;
	uint8_t x218 = UINT8_MAX;
	int32_t x219 = 902641;
	static volatile uint32_t t42 = 477716060U;

    t42 = ((x217/x218)/(x219-x220));

    if (t42 != 18U) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x221 = INT16_MIN;
	int16_t x223 = INT16_MIN;
	static uint8_t x224 = UINT8_MAX;
	static int32_t t43 = -6419877;

    t43 = ((x221/x222)/(x223-x224));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x225 = -1LL;
	int16_t x227 = INT16_MAX;
	static uint8_t x228 = UINT8_MAX;
	static volatile uint64_t t44 = 8358044861381LLU;

    t44 = ((x225/x226)/(x227-x228));

    if (t44 != 95LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x229 = INT8_MAX;
	int32_t x230 = -211830023;
	int8_t x231 = INT8_MAX;
	static int16_t x232 = INT16_MIN;
	volatile int32_t t45 = -1;

    t45 = ((x229/x230)/(x231-x232));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x233 = UINT32_MAX;
	uint64_t x235 = 9912606977LLU;
	uint64_t t46 = 1542437905829927LLU;

    t46 = ((x233/x234)/(x235-x236));

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x237 = 9157577785837901LLU;
	int32_t x238 = 20269259;
	static uint32_t x240 = 1473U;
	volatile uint64_t t47 = 3884562145996LLU;

    t47 = ((x237/x238)/(x239-x240));

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x242 = INT16_MAX;
	static int8_t x243 = -15;
	volatile int32_t t48 = 31290158;

    t48 = ((x241/x242)/(x243-x244));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint32_t x245 = UINT32_MAX;
	int8_t x246 = INT8_MIN;
	int32_t x247 = -736;
	uint16_t x248 = 15U;
	uint32_t t49 = 81U;

    t49 = ((x245/x246)/(x247-x248));

    if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x249 = -1;
	volatile uint64_t x250 = UINT64_MAX;
	int32_t x252 = 66392;

    t50 = ((x249/x250)/(x251-x252));

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x253 = -1;
	uint32_t x254 = UINT32_MAX;
	int8_t x255 = -4;
	volatile uint32_t t51 = 92807858U;

    t51 = ((x253/x254)/(x255-x256));

    if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint8_t x257 = UINT8_MAX;
	volatile uint32_t x258 = 55U;
	int64_t x259 = 2670LL;
	uint64_t x260 = UINT64_MAX;

    t52 = ((x257/x258)/(x259-x260));

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x261 = INT32_MIN;
	static volatile uint64_t x263 = 31035LLU;
	int32_t x264 = INT32_MIN;
	uint64_t t53 = 29256123655990LLU;

    t53 = ((x261/x262)/(x263-x264));

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x265 = INT32_MAX;
	volatile int32_t x266 = -823;
	int64_t x267 = INT64_MIN;
	int16_t x268 = -1;
	int64_t t54 = -629940339LL;

    t54 = ((x265/x266)/(x267-x268));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x273 = 0;
	static int8_t x274 = 3;
	uint64_t x275 = UINT64_MAX;
	uint16_t x276 = UINT16_MAX;
	uint64_t t55 = 3572LLU;

    t55 = ((x273/x274)/(x275-x276));

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x277 = 804U;
	static int32_t x278 = -1;
	int32_t x279 = INT32_MIN;
	volatile uint64_t x280 = 7127562LLU;
	static uint64_t t56 = 198771089LLU;

    t56 = ((x277/x278)/(x279-x280));

    if (t56 != 1LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x281 = INT64_MIN;
	int8_t x282 = 1;
	int64_t x284 = -1LL;
	uint64_t t57 = 7644698611804LLU;

    t57 = ((x281/x282)/(x283-x284));

    if (t57 != 1970759669506LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x285 = INT16_MAX;
	volatile int32_t x286 = INT32_MAX;
	uint64_t x287 = 59LLU;
	volatile uint64_t t58 = 54798916706LLU;

    t58 = ((x285/x286)/(x287-x288));

    if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x289 = INT32_MAX;
	static uint64_t x291 = UINT64_MAX;
	volatile uint64_t t59 = 10487581LLU;

    t59 = ((x289/x290)/(x291-x292));

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x293 = -5;
	int32_t x294 = INT32_MIN;
	uint16_t x295 = 3U;
	volatile int64_t t60 = -538354LL;

    t60 = ((x293/x294)/(x295-x296));

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x297 = INT16_MIN;
	int64_t x298 = -384879006861546LL;
	int8_t x300 = INT8_MIN;

    t61 = ((x297/x298)/(x299-x300));

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x301 = -217286897LL;
	int8_t x302 = INT8_MIN;
	uint64_t x303 = UINT64_MAX;
	uint8_t x304 = 10U;
	volatile uint64_t t62 = 2173405214453977LLU;

    t62 = ((x301/x302)/(x303-x304));

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint64_t x309 = UINT64_MAX;
	int16_t x312 = INT16_MIN;
	static volatile uint64_t t63 = 1178LLU;

    t63 = ((x309/x310)/(x311-x312));

    if (t63 != 2207646876162LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x318 = INT64_MIN;
	int8_t x320 = -3;
	int64_t t64 = 2820611LL;

    t64 = ((x317/x318)/(x319-x320));

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x322 = INT32_MAX;
	static volatile int8_t x323 = INT8_MIN;

    t65 = ((x321/x322)/(x323-x324));

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x325 = INT64_MIN;
	static uint64_t x326 = UINT64_MAX;
	static int32_t x327 = -3591322;
	int8_t x328 = INT8_MIN;
	uint64_t t66 = 242080926LLU;

    t66 = ((x325/x326)/(x327-x328));

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x329 = -1;
	int8_t x330 = -1;
	int16_t x331 = 0;
	uint16_t x332 = 5U;
	volatile int32_t t67 = -6;

    t67 = ((x329/x330)/(x331-x332));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x333 = 6316U;
	static int16_t x336 = -1;
	volatile int32_t t68 = -846588884;

    t68 = ((x333/x334)/(x335-x336));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x337 = INT8_MIN;
	uint64_t x338 = 30385092LLU;
	volatile int32_t x339 = -1;
	volatile int16_t x340 = INT16_MIN;

    t69 = ((x337/x338)/(x339-x340));

    if (t69 != 18527741LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int8_t x341 = INT8_MAX;
	int8_t x342 = INT8_MIN;

    t70 = ((x341/x342)/(x343-x344));

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x346 = INT64_MIN;
	uint32_t x347 = 90U;
	int8_t x348 = INT8_MIN;
	static uint64_t t71 = 531266942389LLU;

    t71 = ((x345/x346)/(x347-x348));

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x349 = UINT64_MAX;
	uint16_t x350 = UINT16_MAX;
	volatile uint64_t t72 = 8440008846122LLU;

    t72 = ((x349/x350)/(x351-x352));

    if (t72 != 2759600703367LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x353 = -28LL;
	int64_t x354 = -1LL;
	uint64_t x355 = UINT64_MAX;
	uint16_t x356 = UINT16_MAX;

    t73 = ((x353/x354)/(x355-x356));

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint8_t x359 = 1U;
	int8_t x360 = INT8_MAX;
	volatile uint32_t t74 = 10230844U;

    t74 = ((x357/x358)/(x359-x360));

    if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x361 = INT8_MIN;
	int64_t x362 = INT64_MIN;
	int32_t x363 = -1;
	int64_t x364 = 213LL;
	volatile int64_t t75 = -120768LL;

    t75 = ((x361/x362)/(x363-x364));

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x365 = 1737LLU;
	static volatile int8_t x366 = -8;
	uint16_t x367 = 68U;
	static int16_t x368 = INT16_MIN;
	volatile uint64_t t76 = 20955866387379326LLU;

    t76 = ((x365/x366)/(x367-x368));

    if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x369 = UINT32_MAX;
	static int8_t x371 = INT8_MAX;
	static volatile uint32_t t77 = 1064032U;

    t77 = ((x369/x370)/(x371-x372));

    if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x373 = UINT64_MAX;
	volatile uint64_t x374 = 1LLU;
	uint8_t x375 = 8U;
	volatile int16_t x376 = INT16_MAX;
	volatile uint64_t t78 = 22360LLU;

    t78 = ((x373/x374)/(x375-x376));

    if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x378 = -1;
	uint8_t x380 = 4U;
	int32_t t79 = 1592;

    t79 = ((x377/x378)/(x379-x380));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x381 = -1;
	volatile int64_t x382 = INT64_MAX;
	volatile uint64_t x383 = 35349121458388549LLU;
	static int16_t x384 = -1093;
	volatile uint64_t t80 = 124874292LLU;

    t80 = ((x381/x382)/(x383-x384));

    if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x389 = -1;
	int8_t x390 = 4;
	int8_t x391 = 0;
	uint8_t x392 = 22U;
	volatile int32_t t81 = -120319440;

    t81 = ((x389/x390)/(x391-x392));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x393 = INT16_MIN;
	int8_t x394 = 14;
	int32_t x395 = 9466;
	static int32_t x396 = 36014247;
	volatile int32_t t82 = -23;

    t82 = ((x393/x394)/(x395-x396));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint32_t x398 = 7892383U;
	uint32_t x400 = 347715312U;

    t83 = ((x397/x398)/(x399-x400));

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x405 = -1LL;
	static volatile uint32_t x406 = UINT32_MAX;
	int16_t x407 = INT16_MIN;
	int32_t x408 = INT32_MIN;
	int64_t t84 = 231833569211371935LL;

    t84 = ((x405/x406)/(x407-x408));

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x409 = 282052867LLU;
	int64_t x410 = 518735LL;
	static uint8_t x411 = 5U;
	static int16_t x412 = -1;
	volatile uint64_t t85 = 32LLU;

    t85 = ((x409/x410)/(x411-x412));

    if (t85 != 90LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x414 = -1;
	int8_t x415 = -1;
	int8_t x416 = INT8_MIN;
	static int32_t t86 = -31816654;

    t86 = ((x413/x414)/(x415-x416));

    if (t86 != -258) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x417 = INT16_MIN;
	int64_t x419 = 332203226LL;
	uint8_t x420 = 8U;
	int64_t t87 = 315582025LL;

    t87 = ((x417/x418)/(x419-x420));

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x425 = 4U;
	int8_t x427 = 16;
	static uint32_t t88 = 58U;

    t88 = ((x425/x426)/(x427-x428));

    if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x431 = INT8_MIN;
	volatile int16_t x432 = -7;
	static int64_t t89 = 128584LL;

    t89 = ((x429/x430)/(x431-x432));

    if (t89 != -5604044639069LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x433 = INT16_MAX;
	int8_t x434 = 8;
	static uint64_t t90 = 102099931LLU;

    t90 = ((x433/x434)/(x435-x436));

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int8_t x441 = -5;
	uint32_t x442 = 1U;
	uint16_t x443 = 7U;
	volatile int8_t x444 = -10;
	volatile uint32_t t91 = 121821U;

    t91 = ((x441/x442)/(x443-x444));

    if (t91 != 252645134U) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint64_t x445 = 3970188LLU;
	uint16_t x446 = 190U;
	int32_t x447 = INT32_MIN;
	uint64_t t92 = 14974662023994LLU;

    t92 = ((x445/x446)/(x447-x448));

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x449 = -1LL;
	uint64_t x450 = 17427LLU;
	int64_t x451 = -844LL;
	int16_t x452 = INT16_MIN;

    t93 = ((x449/x450)/(x451-x452));

    if (t93 != 33157348133LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x457 = 7068;
	int64_t x458 = INT64_MIN;
	static int64_t x460 = INT64_MIN;
	volatile int64_t t94 = 1318271440LL;

    t94 = ((x457/x458)/(x459-x460));

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x461 = 10U;
	int16_t x463 = INT16_MIN;
	static uint16_t x464 = UINT16_MAX;
	int32_t t95 = 663;

    t95 = ((x461/x462)/(x463-x464));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x465 = 14061U;
	int64_t x468 = -96763408LL;

    t96 = ((x465/x466)/(x467-x468));

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x469 = -1;
	int16_t x471 = -1;
	static int64_t x472 = INT64_MIN;
	volatile int64_t t97 = -7361196858300LL;

    t97 = ((x469/x470)/(x471-x472));

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x474 = 987740U;
	int64_t x476 = INT64_MIN;

    t98 = ((x473/x474)/(x475-x476));

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x477 = 2U;
	int64_t x478 = -1LL;
	volatile uint32_t x479 = UINT32_MAX;
	uint8_t x480 = 7U;
	int64_t t99 = 4LL;

    t99 = ((x477/x478)/(x479-x480));

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x481 = INT8_MIN;
	static uint8_t x482 = 51U;
	int16_t x483 = INT16_MIN;
	volatile uint64_t x484 = UINT64_MAX;
	volatile uint64_t t100 = 220405021040LLU;

    t100 = ((x481/x482)/(x483-x484));

    if (t100 != 1LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x485 = 1;
	static int32_t x486 = INT32_MIN;
	uint64_t x488 = UINT64_MAX;

    t101 = ((x485/x486)/(x487-x488));

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x489 = 5U;
	uint8_t x490 = 6U;
	uint32_t x492 = UINT32_MAX;
	uint32_t t102 = 5U;

    t102 = ((x489/x490)/(x491-x492));

    if (t102 != 0U) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x493 = -63;
	int32_t x494 = -385770141;
	int8_t x495 = INT8_MAX;
	uint32_t x496 = 4103424U;
	static uint32_t t103 = 40370U;

    t103 = ((x493/x494)/(x495-x496));

    if (t103 != 0U) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x501 = INT8_MAX;
	volatile int64_t x502 = 3078458094786245077LL;
	int64_t x503 = 52LL;
	uint64_t x504 = UINT64_MAX;
	volatile uint64_t t104 = 426655777443LLU;

    t104 = ((x501/x502)/(x503-x504));

    if (t104 != 0LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x505 = INT64_MIN;
	uint8_t x507 = 1U;
	int32_t x508 = -1;
	static int64_t t105 = 1867LL;

    t105 = ((x505/x506)/(x507-x508));

    if (t105 != 36028797018963968LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static int32_t x510 = -1;
	uint32_t x511 = 114142U;
	volatile int16_t x512 = INT16_MAX;
	static volatile uint32_t t106 = 154U;

    t106 = ((x509/x510)/(x511-x512));

    if (t106 != 52779U) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x513 = INT64_MAX;
	volatile int16_t x514 = -1;
	volatile int64_t x516 = -27323184561LL;
	volatile int64_t t107 = -7148521LL;

    t107 = ((x513/x514)/(x515-x516));

    if (t107 != -337565777LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x525 = 15;
	int32_t x527 = INT32_MAX;
	volatile uint64_t t108 = 7LLU;

    t108 = ((x525/x526)/(x527-x528));

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x530 = 1;
	int64_t x531 = INT64_MIN;
	volatile int8_t x532 = INT8_MIN;
	volatile uint64_t t109 = 4708LLU;

    t109 = ((x529/x530)/(x531-x532));

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x537 = INT16_MIN;
	static int32_t x538 = -4;
	static volatile int8_t x539 = 28;
	uint32_t x540 = 38419213U;
	uint32_t t110 = 6197U;

    t110 = ((x537/x538)/(x539-x540));

    if (t110 != 0U) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int16_t x541 = -2;
	volatile uint8_t x542 = 59U;
	volatile uint8_t x543 = 4U;
	uint64_t x544 = 28LLU;
	volatile uint64_t t111 = 408040715LLU;

    t111 = ((x541/x542)/(x543-x544));

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int16_t x545 = -605;
	volatile uint8_t x546 = 90U;
	int16_t x547 = INT16_MIN;
	volatile int64_t x548 = INT64_MIN;

    t112 = ((x545/x546)/(x547-x548));

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint64_t x549 = 99998LLU;
	static uint64_t x550 = 68388357993357LLU;
	int64_t x551 = 120877137LL;
	int8_t x552 = INT8_MIN;
	volatile uint64_t t113 = 7LLU;

    t113 = ((x549/x550)/(x551-x552));

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x553 = INT8_MAX;
	uint8_t x554 = 27U;
	volatile int16_t x555 = 71;
	volatile uint64_t t114 = 5245067790532935LLU;

    t114 = ((x553/x554)/(x555-x556));

    if (t114 != 0LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x557 = 58838074701748062LLU;
	int8_t x558 = INT8_MIN;
	int32_t x559 = -1;
	int16_t x560 = INT16_MIN;
	static volatile uint64_t t115 = 1430443783459382LLU;

    t115 = ((x557/x558)/(x559-x560));

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x561 = INT64_MAX;
	int32_t x562 = INT32_MAX;
	static int8_t x564 = INT8_MIN;

    t116 = ((x561/x562)/(x563-x564));

    if (t116 != -2LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x569 = 0;
	volatile uint32_t x570 = 7038335U;
	int8_t x571 = -1;
	uint16_t x572 = 4U;
	uint32_t t117 = 123039U;

    t117 = ((x569/x570)/(x571-x572));

    if (t117 != 0U) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x581 = INT16_MAX;
	volatile uint32_t x582 = 3976U;
	int16_t x583 = INT16_MAX;
	int8_t x584 = -1;
	uint32_t t118 = 275152446U;

    t118 = ((x581/x582)/(x583-x584));

    if (t118 != 0U) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x593 = INT64_MIN;
	uint64_t x594 = UINT64_MAX;
	volatile int16_t x595 = INT16_MAX;
	volatile int8_t x596 = INT8_MIN;
	uint64_t t119 = 26503553893680LLU;

    t119 = ((x593/x594)/(x595-x596));

    if (t119 != 0LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint16_t x597 = 17282U;
	uint16_t x599 = UINT16_MAX;
	int16_t x600 = 0;

    t120 = ((x597/x598)/(x599-x600));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x601 = 1325151024315562LL;
	uint64_t x602 = 123911125452231065LLU;
	int8_t x603 = INT8_MIN;
	uint64_t t121 = 334463899104LLU;

    t121 = ((x601/x602)/(x603-x604));

    if (t121 != 0LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x605 = 275041LLU;
	int64_t x606 = -234095LL;

    t122 = ((x605/x606)/(x607-x608));

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x618 = UINT8_MAX;
	uint16_t x619 = 11U;
	volatile int16_t x620 = INT16_MAX;

    t123 = ((x617/x618)/(x619-x620));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x621 = INT64_MIN;
	static uint16_t x623 = 96U;
	static int16_t x624 = INT16_MAX;
	static volatile int64_t t124 = -7868664173340316LL;

    t124 = ((x621/x622)/(x623-x624));

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static int64_t x628 = INT64_MIN;

    t125 = ((x625/x626)/(x627-x628));

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x629 = -1;
	int32_t x630 = -1;
	int32_t x631 = 530879;
	uint64_t x632 = 8774579381774284470LLU;
	uint64_t t126 = 303342LLU;

    t126 = ((x629/x630)/(x631-x632));

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int64_t x633 = INT64_MIN;
	static int64_t x635 = INT64_MAX;
	volatile int64_t t127 = -1LL;

    t127 = ((x633/x634)/(x635-x636));

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x637 = UINT8_MAX;
	uint32_t x638 = 214U;
	uint16_t x639 = 469U;
	int32_t x640 = -2;
	volatile uint32_t t128 = 24707U;

    t128 = ((x637/x638)/(x639-x640));

    if (t128 != 0U) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x642 = INT8_MAX;
	int64_t x643 = INT64_MIN;
	int8_t x644 = -1;
	int64_t t129 = 0LL;

    t129 = ((x641/x642)/(x643-x644));

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x645 = 7542U;
	int32_t x646 = -6729;
	int16_t x647 = 450;
	int8_t x648 = -8;
	uint32_t t130 = 4U;

    t130 = ((x645/x646)/(x647-x648));

    if (t130 != 0U) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x649 = INT64_MIN;
	int16_t x651 = -1;
	static int32_t x652 = 880785;
	volatile int64_t t131 = -1843936213LL;

    t131 = ((x649/x650)/(x651-x652));

    if (t131 != 951977400851LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint8_t x655 = 106U;
	int8_t x656 = -35;
	int32_t t132 = -6993996;

    t132 = ((x653/x654)/(x655-x656));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x657 = 0U;
	uint64_t x658 = UINT64_MAX;
	int16_t x659 = -4586;
	int8_t x660 = INT8_MIN;
	volatile uint64_t t133 = 1023735133606630LLU;

    t133 = ((x657/x658)/(x659-x660));

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint8_t x661 = 1U;
	volatile int8_t x662 = INT8_MIN;
	volatile uint64_t x663 = 88152227012798LLU;
	static volatile int32_t x664 = -255623673;
	static uint64_t t134 = 41035395995874979LLU;

    t134 = ((x661/x662)/(x663-x664));

    if (t134 != 0LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x665 = -1;
	int64_t x668 = 86990016LL;
	int64_t t135 = 416165618806353122LL;

    t135 = ((x665/x666)/(x667-x668));

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x669 = UINT16_MAX;
	uint64_t x670 = 18907LLU;
	volatile int16_t x671 = -1;
	uint64_t t136 = 1512633722763LLU;

    t136 = ((x669/x670)/(x671-x672));

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x673 = 0U;
	uint8_t x674 = UINT8_MAX;
	uint32_t x675 = UINT32_MAX;
	uint32_t x676 = 100U;

    t137 = ((x673/x674)/(x675-x676));

    if (t137 != 0U) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile uint16_t x677 = UINT16_MAX;
	volatile int32_t x678 = 136614624;
	int16_t x679 = 8056;
	uint32_t t138 = 268U;

    t138 = ((x677/x678)/(x679-x680));

    if (t138 != 0U) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x682 = 13;
	volatile int16_t x683 = 0;
	int8_t x684 = -1;

    t139 = ((x681/x682)/(x683-x684));

    if (t139 != -165191049) { NG(); } else { ; }
	
}

void f140(void) {
    	static int32_t x685 = -1;
	int8_t x686 = -1;
	int64_t x687 = 1025731269LL;
	int8_t x688 = -32;
	int64_t t140 = -236501514LL;

    t140 = ((x685/x686)/(x687-x688));

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile int16_t x690 = INT16_MIN;
	static volatile int16_t x691 = 7;
	int8_t x692 = 15;
	int64_t t141 = -11509LL;

    t141 = ((x689/x690)/(x691-x692));

    if (t141 != 230818628680LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x697 = INT8_MAX;
	volatile uint32_t x698 = 253618U;
	int16_t x700 = 5;

    t142 = ((x697/x698)/(x699-x700));

    if (t142 != 0U) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x701 = INT64_MAX;
	int64_t x702 = INT64_MAX;
	int64_t x704 = INT64_MIN;
	int64_t t143 = -16431150530679571LL;

    t143 = ((x701/x702)/(x703-x704));

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x710 = -11;
	int32_t x711 = -1;
	volatile int32_t t144 = 482276;

    t144 = ((x709/x710)/(x711-x712));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x713 = INT64_MAX;
	int64_t x714 = INT64_MIN;
	static int8_t x715 = INT8_MIN;
	static int64_t t145 = -116LL;

    t145 = ((x713/x714)/(x715-x716));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x717 = 549U;
	uint8_t x718 = 6U;
	int8_t x719 = INT8_MIN;
	static volatile int64_t x720 = -133246669LL;
	volatile int64_t t146 = -8LL;

    t146 = ((x717/x718)/(x719-x720));

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x721 = -3;
	int8_t x722 = INT8_MIN;
	int32_t x723 = -245;
	volatile uint32_t t147 = 20413U;

    t147 = ((x721/x722)/(x723-x724));

    if (t147 != 0U) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x725 = 0;
	static volatile int32_t x727 = INT32_MIN;

    t148 = ((x725/x726)/(x727-x728));

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint8_t x729 = 0U;
	int16_t x730 = INT16_MIN;
	uint8_t x731 = 8U;
	volatile int32_t t149 = -76865296;

    t149 = ((x729/x730)/(x731-x732));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x733 = UINT16_MAX;
	int16_t x734 = INT16_MIN;
	int64_t x735 = INT64_MIN;
	int8_t x736 = -1;
	int64_t t150 = 3793LL;

    t150 = ((x733/x734)/(x735-x736));

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint8_t x738 = 101U;
	int64_t x739 = -1LL;
	int32_t x740 = INT32_MIN;
	int64_t t151 = 3036724275056711LL;

    t151 = ((x737/x738)/(x739-x740));

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x742 = INT64_MIN;
	uint16_t x743 = 1155U;
	int64_t x744 = -1LL;
	int64_t t152 = 10882055710LL;

    t152 = ((x741/x742)/(x743-x744));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint64_t x745 = 3938LLU;
	volatile int16_t x746 = INT16_MAX;
	static int8_t x747 = INT8_MAX;
	uint64_t t153 = 3139LLU;

    t153 = ((x745/x746)/(x747-x748));

    if (t153 != 0LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile uint64_t x749 = 15707LLU;
	static int16_t x752 = INT16_MIN;
	static volatile uint64_t t154 = 238LLU;

    t154 = ((x749/x750)/(x751-x752));

    if (t154 != 0LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x753 = -13;
	uint32_t x754 = UINT32_MAX;
	uint8_t x755 = 53U;
	static int16_t x756 = 2;

    t155 = ((x753/x754)/(x755-x756));

    if (t155 != 0U) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x758 = INT16_MIN;
	int8_t x759 = 26;
	int8_t x760 = INT8_MIN;
	uint32_t t156 = 4677U;

    t156 = ((x757/x758)/(x759-x760));

    if (t156 != 0U) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint32_t x762 = UINT32_MAX;
	volatile int8_t x763 = INT8_MIN;

    t157 = ((x761/x762)/(x763-x764));

    if (t157 != 0U) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x765 = 121U;
	uint16_t x766 = 24U;
	static int8_t x767 = -1;
	volatile int32_t t158 = 27602055;

    t158 = ((x765/x766)/(x767-x768));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x769 = INT64_MIN;
	int16_t x771 = 190;
	int64_t t159 = 82749LL;

    t159 = ((x769/x770)/(x771-x772));

    if (t159 != -48289905952119245LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x773 = 4;
	static volatile int64_t x774 = -51812148LL;
	volatile uint64_t t160 = 1775301535897917374LLU;

    t160 = ((x773/x774)/(x775-x776));

    if (t160 != 0LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x777 = UINT8_MAX;
	uint32_t x778 = UINT32_MAX;
	int8_t x780 = INT8_MIN;

    t161 = ((x777/x778)/(x779-x780));

    if (t161 != 0U) { NG(); } else { ; }
	
}

void f162(void) {
    	static int64_t x781 = -14741021425921LL;
	static uint16_t x782 = 563U;
	volatile int64_t x783 = -852535952233624954LL;
	static int64_t x784 = INT64_MIN;
	int64_t t162 = -6854140825196LL;

    t162 = ((x781/x782)/(x783-x784));

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x785 = INT64_MIN;
	uint16_t x786 = 23U;
	int32_t x787 = INT32_MAX;
	int32_t x788 = 70;
	volatile int64_t t163 = -12035668LL;

    t163 = ((x785/x786)/(x787-x788));

    if (t163 != -186737714LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x793 = 3777U;
	static int8_t x794 = INT8_MAX;
	int8_t x795 = -1;
	int16_t x796 = INT16_MIN;
	static volatile int32_t t164 = 1;

    t164 = ((x793/x794)/(x795-x796));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x797 = INT32_MIN;
	int64_t x798 = INT64_MAX;
	static int8_t x799 = -1;
	uint32_t x800 = 963986598U;
	int64_t t165 = 26079389LL;

    t165 = ((x797/x798)/(x799-x800));

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x801 = 1;
	uint64_t x802 = 4LLU;
	volatile uint32_t x803 = UINT32_MAX;
	volatile int16_t x804 = INT16_MAX;
	uint64_t t166 = 142155666687442567LLU;

    t166 = ((x801/x802)/(x803-x804));

    if (t166 != 0LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x805 = INT32_MIN;
	int32_t x806 = INT32_MIN;
	uint64_t x807 = 47227621685158978LLU;
	uint8_t x808 = UINT8_MAX;
	uint64_t t167 = 227641323587057LLU;

    t167 = ((x805/x806)/(x807-x808));

    if (t167 != 0LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x809 = INT16_MAX;
	int8_t x810 = -31;
	int8_t x811 = INT8_MIN;
	uint8_t x812 = 1U;
	int32_t t168 = 132906;

    t168 = ((x809/x810)/(x811-x812));

    if (t168 != 8) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x813 = INT64_MIN;
	volatile uint32_t x814 = UINT32_MAX;
	static uint16_t x815 = 4115U;
	volatile int16_t x816 = INT16_MIN;
	static volatile int64_t t169 = 46133785533716LL;

    t169 = ((x813/x814)/(x815-x816));

    if (t169 != -58224LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x817 = INT16_MAX;
	uint8_t x819 = 16U;
	int8_t x820 = -1;
	volatile int64_t t170 = 124771108400LL;

    t170 = ((x817/x818)/(x819-x820));

    if (t170 != -1927LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x822 = INT8_MIN;
	uint16_t x823 = 144U;
	uint8_t x824 = 12U;

    t171 = ((x821/x822)/(x823-x824));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x825 = -624;
	int32_t x827 = INT32_MIN;
	int32_t x828 = -1;
	volatile int64_t t172 = -3782145159974688033LL;

    t172 = ((x825/x826)/(x827-x828));

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint16_t x831 = 557U;

    t173 = ((x829/x830)/(x831-x832));

    if (t173 != -217) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x833 = UINT32_MAX;
	int32_t x834 = 3;
	int16_t x835 = INT16_MAX;
	int16_t x836 = 2352;
	volatile uint32_t t174 = 8583U;

    t174 = ((x833/x834)/(x835-x836));

    if (t174 != 47070U) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint8_t x843 = UINT8_MAX;
	static int64_t x844 = INT64_MAX;
	int64_t t175 = -3050831842470LL;

    t175 = ((x841/x842)/(x843-x844));

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x846 = INT16_MAX;
	uint32_t x847 = UINT32_MAX;
	int32_t x848 = -188053;

    t176 = ((x845/x846)/(x847-x848));

    if (t176 != 22839U) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile uint16_t x849 = 62U;
	int8_t x850 = INT8_MIN;
	volatile uint64_t x851 = UINT64_MAX;
	volatile uint32_t x852 = UINT32_MAX;
	static volatile uint64_t t177 = 284089023184278LLU;

    t177 = ((x849/x850)/(x851-x852));

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x857 = INT8_MAX;
	int16_t x858 = -1;
	int64_t x859 = -13047397267112468LL;
	int16_t x860 = -1;
	volatile int64_t t178 = 77LL;

    t178 = ((x857/x858)/(x859-x860));

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x865 = 10U;
	int64_t x867 = 873780LL;
	volatile int32_t x868 = INT32_MIN;
	volatile int64_t t179 = -61774742021LL;

    t179 = ((x865/x866)/(x867-x868));

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile int32_t x869 = INT32_MIN;
	uint16_t x870 = UINT16_MAX;
	uint8_t x872 = UINT8_MAX;
	volatile int32_t t180 = -60902787;

    t180 = ((x869/x870)/(x871-x872));

    if (t180 != 256) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x873 = 27U;
	static uint32_t x874 = UINT32_MAX;
	static uint64_t x875 = UINT64_MAX;
	int16_t x876 = -1923;

    t181 = ((x873/x874)/(x875-x876));

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x877 = UINT8_MAX;
	uint8_t x878 = 127U;
	int8_t x880 = INT8_MIN;
	volatile uint64_t t182 = 3152LLU;

    t182 = ((x877/x878)/(x879-x880));

    if (t182 != 0LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint64_t x881 = UINT64_MAX;
	int16_t x882 = INT16_MAX;
	int32_t x884 = -2516969;

    t183 = ((x881/x882)/(x883-x884));

    if (t183 != 223654284LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x889 = -1048322397;
	int64_t x890 = INT64_MIN;
	volatile int16_t x891 = -1;
	static int16_t x892 = INT16_MAX;
	int64_t t184 = 2286722836973145144LL;

    t184 = ((x889/x890)/(x891-x892));

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x893 = 91571831395186LL;
	uint16_t x894 = UINT16_MAX;
	volatile int8_t x895 = 23;
	int8_t x896 = INT8_MAX;
	static volatile int64_t t185 = 242290477217LL;

    t185 = ((x893/x894)/(x895-x896));

    if (t185 != -13435544LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x897 = -1;
	volatile uint8_t x899 = 0U;
	volatile uint64_t t186 = 23LLU;

    t186 = ((x897/x898)/(x899-x900));

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x902 = INT32_MIN;
	uint64_t x904 = 5LLU;
	static volatile uint64_t t187 = 1LLU;

    t187 = ((x901/x902)/(x903-x904));

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x906 = INT64_MAX;
	uint32_t x908 = 2821U;
	int64_t t188 = -72LL;

    t188 = ((x905/x906)/(x907-x908));

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x909 = 454U;
	int16_t x911 = -198;
	int8_t x912 = INT8_MIN;
	volatile int64_t t189 = -114801207393LL;

    t189 = ((x909/x910)/(x911-x912));

    if (t189 != 6LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x913 = UINT64_MAX;
	uint16_t x914 = 410U;
	static uint16_t x915 = UINT16_MAX;
	uint64_t t190 = 1344543261LLU;

    t190 = ((x913/x914)/(x915-x916));

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint64_t x917 = UINT64_MAX;
	uint64_t x918 = 542312266248253LLU;
	static volatile uint64_t t191 = 1385369674906LLU;

    t191 = ((x917/x918)/(x919-x920));

    if (t191 != 0LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x922 = INT8_MIN;
	int64_t x923 = -723814509006092014LL;
	int64_t t192 = -6LL;

    t192 = ((x921/x922)/(x923-x924));

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x929 = UINT64_MAX;
	static int8_t x930 = INT8_MIN;
	uint64_t x931 = 167490270LLU;
	static uint32_t x932 = 344765438U;
	static volatile uint64_t t193 = 7096110477339068571LLU;

    t193 = ((x929/x930)/(x931-x932));

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x934 = INT32_MAX;
	int64_t x935 = -1LL;
	volatile int32_t x936 = INT32_MIN;
	volatile int64_t t194 = -93785173LL;

    t194 = ((x933/x934)/(x935-x936));

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x938 = INT32_MIN;
	static uint32_t x939 = 425U;
	static int32_t x940 = -10;
	uint32_t t195 = 105060245U;

    t195 = ((x937/x938)/(x939-x940));

    if (t195 != 0U) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x941 = -126935295;
	static uint16_t x942 = 467U;
	uint8_t x943 = 0U;
	int32_t t196 = 253741548;

    t196 = ((x941/x942)/(x943-x944));

    if (t196 != 3484) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x948 = INT32_MIN;
	uint32_t t197 = 49205U;

    t197 = ((x945/x946)/(x947-x948));

    if (t197 != 0U) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x953 = -2;
	volatile int8_t x954 = INT8_MIN;
	int32_t x955 = INT32_MIN;
	int16_t x956 = -1;

    t198 = ((x953/x954)/(x955-x956));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x957 = 3U;
	int32_t x959 = 298264;
	volatile int64_t x960 = -1649580178861LL;
	volatile int64_t t199 = 2397727068082285LL;

    t199 = ((x957/x958)/(x959-x960));

    if (t199 != 0LL) { NG(); } else { ; }
	
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

