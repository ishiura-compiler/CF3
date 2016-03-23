
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

static int64_t x10 = INT64_MIN;
int32_t x23 = -6847;
int32_t t3 = -451610;
static volatile int64_t x25 = -288LL;
volatile int32_t t4 = 2;
int32_t x33 = -1;
int32_t x34 = 1050;
volatile int32_t t5 = -3559;
uint64_t x40 = 1575765317906989862LLU;
volatile int8_t x41 = INT8_MIN;
int16_t x43 = INT16_MIN;
int16_t x46 = 41;
int8_t x50 = -1;
volatile uint16_t x56 = 0U;
int32_t x59 = -1;
int64_t x61 = INT64_MIN;
int64_t x65 = INT64_MIN;
uint8_t x72 = 16U;
volatile int32_t t15 = 1357214;
int8_t x77 = INT8_MIN;
uint32_t x80 = 5042965U;
volatile int32_t t16 = 1143;
uint16_t x90 = 278U;
uint64_t x124 = 7660LLU;
volatile int32_t t20 = 2039;
int8_t x128 = -1;
uint32_t x134 = UINT32_MAX;
static int32_t x139 = -1;
uint32_t x140 = UINT32_MAX;
int16_t x151 = INT16_MAX;
uint8_t x158 = 6U;
static volatile int32_t x167 = INT32_MAX;
volatile int16_t x169 = -1;
int8_t x176 = 24;
int8_t x187 = 63;
uint32_t x193 = 1424105U;
static uint32_t x198 = UINT32_MAX;
volatile int64_t x199 = INT64_MIN;
uint8_t x200 = 0U;
uint32_t x201 = 132345259U;
uint8_t x207 = 3U;
volatile int32_t x209 = -1;
int64_t x213 = INT64_MIN;
int8_t x215 = -1;
static int8_t x224 = 1;
int64_t x233 = -52639LL;
int16_t x235 = INT16_MIN;
int8_t x238 = INT8_MAX;
uint32_t x239 = 2481U;
static volatile int16_t x240 = -1;
volatile int32_t t45 = 1;
volatile int32_t x241 = INT32_MAX;
uint32_t x243 = 49U;
static int32_t x245 = 599599892;
int32_t x249 = 697;
static uint16_t x255 = 25U;
static int16_t x258 = INT16_MIN;
int32_t t50 = 1664129;
uint64_t x263 = UINT64_MAX;
uint32_t x264 = UINT32_MAX;
volatile uint64_t x265 = 626LLU;
static int8_t x270 = INT8_MAX;
static volatile int16_t x276 = INT16_MIN;
int32_t x288 = 1;
uint64_t x302 = UINT64_MAX;
static volatile int32_t t57 = -198265388;
static int16_t x311 = INT16_MAX;
int32_t x321 = INT32_MIN;
static volatile uint64_t x323 = 827952206516387195LLU;
uint8_t x324 = 2U;
uint64_t x332 = 9LLU;
uint32_t x353 = UINT32_MAX;
static int32_t x362 = -1;
uint8_t x364 = 0U;
int32_t x365 = 101;
volatile int64_t x371 = -1LL;
int32_t x385 = INT32_MAX;
int16_t x394 = -14606;
int32_t x405 = INT32_MAX;
int32_t x408 = -1;
static volatile int32_t t73 = -1105;
volatile uint32_t x411 = UINT32_MAX;
uint64_t x415 = 229LLU;
static uint8_t x416 = 12U;
uint16_t x428 = 30U;
volatile int16_t x434 = INT16_MIN;
int64_t x437 = -11453695864216LL;
uint32_t x445 = 684U;
static uint16_t x446 = 0U;
int64_t x448 = 20714844799LL;
static int32_t t81 = -86497613;
int8_t x454 = INT8_MAX;
static uint64_t x455 = 91893922LLU;
volatile int32_t t82 = 0;
int8_t x457 = -1;
int32_t t83 = -2208;
int8_t x465 = 1;
volatile int8_t x466 = -1;
uint16_t x467 = 3477U;
static uint32_t x475 = 1148848U;
int8_t x507 = INT8_MAX;
int8_t x509 = INT8_MIN;
uint32_t x510 = 227542663U;
volatile uint64_t x522 = UINT64_MAX;
int32_t t93 = 34267400;
int32_t x529 = INT32_MIN;
volatile int32_t t95 = -869948423;
int8_t x553 = INT8_MAX;
uint8_t x565 = 9U;
int16_t x566 = INT16_MAX;
static volatile int32_t t103 = -842373;
volatile int32_t t105 = -657199;
uint32_t x590 = UINT32_MAX;
static int64_t x594 = INT64_MIN;
volatile int32_t x598 = INT32_MAX;
volatile int16_t x604 = INT16_MIN;
int64_t x605 = 24LL;
int32_t x609 = -1;
volatile uint16_t x619 = 25062U;
static uint16_t x631 = 33U;
uint32_t x634 = UINT32_MAX;
uint16_t x635 = 3U;
int16_t x638 = INT16_MAX;
int8_t x640 = INT8_MIN;
volatile int32_t t118 = -6988949;
volatile int8_t x647 = 1;
static int32_t x657 = INT32_MAX;
volatile int32_t t122 = -2942;
uint16_t x675 = UINT16_MAX;
static volatile int16_t x676 = -1;
int32_t t125 = 131112625;
int32_t x685 = -1;
static int16_t x693 = INT16_MIN;
uint16_t x695 = 260U;
int32_t x699 = 210701;
uint16_t x702 = UINT16_MAX;
uint64_t x706 = 974735LLU;
volatile int32_t t132 = 3313;
int16_t x727 = INT16_MIN;
static uint64_t x730 = 18LLU;
int8_t x751 = 0;
int8_t x752 = 2;
int8_t x755 = 2;
int16_t x763 = INT16_MIN;
static int32_t t141 = 3;
int32_t x768 = -146;
volatile int32_t t143 = 498210714;
int16_t x782 = INT16_MIN;
volatile int16_t x787 = -1;
volatile int32_t t147 = 72549943;
int32_t x793 = -5;
int16_t x808 = INT16_MIN;
uint8_t x815 = 113U;
int16_t x843 = 0;
int8_t x851 = INT8_MAX;
uint8_t x857 = 45U;
static volatile int32_t t160 = 27314;
static int16_t x880 = -250;
uint16_t x882 = 18U;
int64_t x887 = INT64_MAX;
uint16_t x889 = 34U;
static volatile int64_t x898 = -1LL;
int8_t x906 = INT8_MIN;
volatile uint16_t x914 = 221U;
static uint8_t x919 = 2U;
uint32_t x920 = 80U;
int32_t t171 = -454916521;
int64_t x930 = INT64_MAX;
uint8_t x938 = UINT8_MAX;
uint64_t x940 = UINT64_MAX;
static volatile uint32_t x950 = UINT32_MAX;
volatile int64_t x965 = -1LL;
int64_t x970 = INT64_MIN;
volatile int32_t t177 = -1113;
static int8_t x979 = INT8_MIN;
uint16_t x991 = 1544U;
uint16_t x1001 = UINT16_MAX;
int64_t x1004 = -1LL;
int16_t x1007 = INT16_MIN;
volatile int32_t t183 = 12;
int64_t x1009 = INT64_MIN;
static uint32_t x1010 = 87223920U;
volatile int32_t t184 = -3;
static volatile uint16_t x1014 = UINT16_MAX;
static int16_t x1019 = INT16_MIN;
static volatile uint8_t x1020 = UINT8_MAX;
int8_t x1024 = -44;
int32_t t187 = -13111656;
uint32_t x1035 = 2003933293U;
uint32_t x1038 = UINT32_MAX;
volatile uint8_t x1040 = UINT8_MAX;
int64_t x1042 = -1LL;
static int32_t t191 = -3460016;
int32_t t193 = -196469;
volatile int32_t t194 = -2888350;
volatile int16_t x1057 = -1;
int16_t x1065 = INT16_MIN;


void f0(void) {
    	uint8_t x5 = 2U;
	uint64_t x6 = 842500705104634009LLU;
	volatile uint16_t x7 = 21U;
	int16_t x8 = -2785;
	int32_t t0 = 9;

    t0 = (x5==(x6<=(x7*x8)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x9 = UINT64_MAX;
	int16_t x11 = INT16_MIN;
	volatile int16_t x12 = -1;
	volatile int32_t t1 = 40;

    t1 = (x9==(x10<=(x11*x12)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x17 = INT8_MIN;
	static uint8_t x18 = 40U;
	volatile uint16_t x19 = 77U;
	volatile int8_t x20 = -1;
	volatile int32_t t2 = 7;

    t2 = (x17==(x18<=(x19*x20)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x21 = INT64_MIN;
	uint8_t x22 = 7U;
	volatile int8_t x24 = INT8_MIN;

    t3 = (x21==(x22<=(x23*x24)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x26 = 2067155436LLU;
	volatile int32_t x27 = INT32_MAX;
	int64_t x28 = 3333667LL;

    t4 = (x25==(x26<=(x27*x28)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile int32_t x35 = INT32_MIN;
	volatile uint32_t x36 = 1710U;

    t5 = (x33==(x34<=(x35*x36)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int64_t x37 = INT64_MIN;
	uint8_t x38 = 2U;
	static volatile int64_t x39 = INT64_MIN;
	volatile int32_t t6 = 431;

    t6 = (x37==(x38<=(x39*x40)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x42 = 1U;
	static volatile int16_t x44 = INT16_MIN;
	int32_t t7 = -339166322;

    t7 = (x41==(x42<=(x43*x44)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int32_t x45 = INT32_MAX;
	uint64_t x47 = 31240923880LLU;
	static int16_t x48 = 58;
	int32_t t8 = 249;

    t8 = (x45==(x46<=(x47*x48)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x49 = 951U;
	int8_t x51 = -1;
	uint64_t x52 = UINT64_MAX;
	volatile int32_t t9 = -1594;

    t9 = (x49==(x50<=(x51*x52)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x53 = UINT32_MAX;
	uint32_t x54 = 1U;
	int64_t x55 = INT64_MIN;
	int32_t t10 = 3;

    t10 = (x53==(x54<=(x55*x56)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x57 = -533000;
	uint16_t x58 = 1315U;
	int16_t x60 = INT16_MAX;
	volatile int32_t t11 = 814762868;

    t11 = (x57==(x58<=(x59*x60)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x62 = UINT8_MAX;
	int16_t x63 = INT16_MIN;
	uint32_t x64 = 87659U;
	int32_t t12 = -141845;

    t12 = (x61==(x62<=(x63*x64)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x66 = -1;
	int16_t x67 = 10852;
	int16_t x68 = INT16_MIN;
	int32_t t13 = -68232;

    t13 = (x65==(x66<=(x67*x68)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x69 = UINT64_MAX;
	volatile int32_t x70 = INT32_MIN;
	int16_t x71 = -1;
	static volatile int32_t t14 = 8;

    t14 = (x69==(x70<=(x71*x72)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x73 = INT64_MAX;
	int16_t x74 = INT16_MIN;
	uint8_t x75 = 4U;
	volatile int8_t x76 = -15;

    t15 = (x73==(x74<=(x75*x76)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x78 = 13U;
	volatile int32_t x79 = INT32_MIN;

    t16 = (x77==(x78<=(x79*x80)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint64_t x85 = UINT64_MAX;
	int32_t x86 = -1;
	int64_t x87 = -57590400887316621LL;
	int16_t x88 = -1;
	volatile int32_t t17 = 67;

    t17 = (x85==(x86<=(x87*x88)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x89 = INT16_MIN;
	uint16_t x91 = 0U;
	uint16_t x92 = 51U;
	volatile int32_t t18 = 128166;

    t18 = (x89==(x90<=(x91*x92)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint64_t x93 = 375912058LLU;
	int16_t x94 = INT16_MIN;
	int32_t x95 = INT32_MIN;
	volatile int64_t x96 = -1LL;
	volatile int32_t t19 = -122807123;

    t19 = (x93==(x94<=(x95*x96)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint8_t x121 = 1U;
	volatile uint32_t x122 = UINT32_MAX;
	int8_t x123 = INT8_MIN;

    t20 = (x121==(x122<=(x123*x124)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x125 = 0LL;
	volatile uint16_t x126 = 7030U;
	uint8_t x127 = 1U;
	static int32_t t21 = 1;

    t21 = (x125==(x126<=(x127*x128)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int32_t x133 = INT32_MIN;
	static int64_t x135 = 2246680912LL;
	volatile uint16_t x136 = UINT16_MAX;
	int32_t t22 = -39639560;

    t22 = (x133==(x134<=(x135*x136)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x137 = 44024LL;
	uint32_t x138 = 254U;
	int32_t t23 = 72;

    t23 = (x137==(x138<=(x139*x140)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x141 = INT32_MAX;
	int32_t x142 = INT32_MIN;
	int16_t x143 = INT16_MIN;
	static volatile uint16_t x144 = UINT16_MAX;
	volatile int32_t t24 = -899180;

    t24 = (x141==(x142<=(x143*x144)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x149 = 4558U;
	uint64_t x150 = UINT64_MAX;
	int64_t x152 = -1LL;
	int32_t t25 = 10;

    t25 = (x149==(x150<=(x151*x152)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x157 = INT32_MIN;
	int8_t x159 = 1;
	uint64_t x160 = 61230793148085LLU;
	volatile int32_t t26 = 1;

    t26 = (x157==(x158<=(x159*x160)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint16_t x161 = 1U;
	int32_t x162 = INT32_MIN;
	static int16_t x163 = INT16_MIN;
	int16_t x164 = 13094;
	int32_t t27 = 14;

    t27 = (x161==(x162<=(x163*x164)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x165 = INT32_MIN;
	int16_t x166 = -6985;
	volatile int8_t x168 = -1;
	int32_t t28 = -143;

    t28 = (x165==(x166<=(x167*x168)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x170 = INT8_MIN;
	uint16_t x171 = 33U;
	volatile int8_t x172 = INT8_MIN;
	int32_t t29 = -21;

    t29 = (x169==(x170<=(x171*x172)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int8_t x173 = -1;
	static volatile uint16_t x174 = 15863U;
	static int64_t x175 = -194LL;
	volatile int32_t t30 = -4317;

    t30 = (x173==(x174<=(x175*x176)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint64_t x177 = 628LLU;
	static int64_t x178 = INT64_MIN;
	int8_t x179 = INT8_MAX;
	int8_t x180 = INT8_MIN;
	volatile int32_t t31 = 1;

    t31 = (x177==(x178<=(x179*x180)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x181 = -105;
	uint16_t x182 = 57U;
	static uint16_t x183 = UINT16_MAX;
	volatile uint64_t x184 = UINT64_MAX;
	int32_t t32 = -1517;

    t32 = (x181==(x182<=(x183*x184)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x185 = 886U;
	static uint32_t x186 = UINT32_MAX;
	int16_t x188 = -1;
	volatile int32_t t33 = 13;

    t33 = (x185==(x186<=(x187*x188)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x194 = INT8_MIN;
	uint64_t x195 = 3153034695567077LLU;
	int16_t x196 = -1;
	int32_t t34 = -6457;

    t34 = (x193==(x194<=(x195*x196)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x197 = 18283802330LLU;
	volatile int32_t t35 = -6;

    t35 = (x197==(x198<=(x199*x200)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x202 = INT16_MIN;
	int16_t x203 = -1;
	uint8_t x204 = 4U;
	volatile int32_t t36 = -197336806;

    t36 = (x201==(x202<=(x203*x204)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile uint16_t x205 = 932U;
	int64_t x206 = -1LL;
	int8_t x208 = INT8_MAX;
	int32_t t37 = -7908661;

    t37 = (x205==(x206<=(x207*x208)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int32_t x210 = INT32_MIN;
	static uint16_t x211 = UINT16_MAX;
	int64_t x212 = -100585445469090LL;
	int32_t t38 = -1;

    t38 = (x209==(x210<=(x211*x212)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint32_t x214 = UINT32_MAX;
	int16_t x216 = INT16_MAX;
	volatile int32_t t39 = -6136874;

    t39 = (x213==(x214<=(x215*x216)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x217 = 673U;
	volatile int32_t x218 = -16321;
	volatile uint32_t x219 = 1597073605U;
	uint32_t x220 = UINT32_MAX;
	int32_t t40 = -34421;

    t40 = (x217==(x218<=(x219*x220)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x221 = INT16_MIN;
	uint16_t x222 = UINT16_MAX;
	static int16_t x223 = 3094;
	int32_t t41 = -14844538;

    t41 = (x221==(x222<=(x223*x224)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x225 = -3470445;
	uint8_t x226 = 59U;
	uint32_t x227 = 386639U;
	static int8_t x228 = -28;
	static volatile int32_t t42 = 4816111;

    t42 = (x225==(x226<=(x227*x228)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x229 = -151004778797650LL;
	int16_t x230 = INT16_MAX;
	volatile int64_t x231 = 1579215LL;
	static uint64_t x232 = UINT64_MAX;
	static volatile int32_t t43 = -1872896;

    t43 = (x229==(x230<=(x231*x232)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x234 = INT16_MIN;
	uint16_t x236 = 522U;
	int32_t t44 = 6217;

    t44 = (x233==(x234<=(x235*x236)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint32_t x237 = 8078U;

    t45 = (x237==(x238<=(x239*x240)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x242 = INT64_MIN;
	int32_t x244 = INT32_MIN;
	volatile int32_t t46 = -23;

    t46 = (x241==(x242<=(x243*x244)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x246 = INT16_MIN;
	volatile uint32_t x247 = 839504U;
	uint32_t x248 = 2U;
	static int32_t t47 = -82128;

    t47 = (x245==(x246<=(x247*x248)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x250 = INT8_MIN;
	int64_t x251 = 8528428322827LL;
	uint32_t x252 = 254U;
	volatile int32_t t48 = -78;

    t48 = (x249==(x250<=(x251*x252)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x253 = UINT64_MAX;
	uint32_t x254 = 188920189U;
	uint32_t x256 = 253566117U;
	volatile int32_t t49 = 1;

    t49 = (x253==(x254<=(x255*x256)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint8_t x257 = 17U;
	uint64_t x259 = UINT64_MAX;
	static int8_t x260 = INT8_MIN;

    t50 = (x257==(x258<=(x259*x260)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x261 = 156590905429179LLU;
	int32_t x262 = INT32_MAX;
	static int32_t t51 = -185998;

    t51 = (x261==(x262<=(x263*x264)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x266 = -1LL;
	int8_t x267 = -1;
	int64_t x268 = -1LL;
	volatile int32_t t52 = -9728;

    t52 = (x265==(x266<=(x267*x268)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x269 = 20672LL;
	uint64_t x271 = 57515379LLU;
	int64_t x272 = -188873591LL;
	int32_t t53 = 334249243;

    t53 = (x269==(x270<=(x271*x272)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x273 = UINT32_MAX;
	int64_t x274 = -1LL;
	static uint32_t x275 = 8U;
	static volatile int32_t t54 = -398929;

    t54 = (x273==(x274<=(x275*x276)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x285 = 12U;
	uint8_t x286 = 4U;
	uint32_t x287 = 66541565U;
	static int32_t t55 = -4;

    t55 = (x285==(x286<=(x287*x288)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x293 = -16810067;
	uint64_t x294 = 171LLU;
	static volatile int8_t x295 = INT8_MAX;
	int64_t x296 = -49207839LL;
	int32_t t56 = -392;

    t56 = (x293==(x294<=(x295*x296)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x301 = UINT32_MAX;
	int8_t x303 = 60;
	int32_t x304 = 2780;

    t57 = (x301==(x302<=(x303*x304)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x305 = -1;
	int8_t x306 = INT8_MAX;
	int8_t x307 = -40;
	int8_t x308 = INT8_MAX;
	static volatile int32_t t58 = 327;

    t58 = (x305==(x306<=(x307*x308)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x309 = 34;
	uint8_t x310 = 1U;
	static volatile uint32_t x312 = 59799U;
	volatile int32_t t59 = 1;

    t59 = (x309==(x310<=(x311*x312)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x313 = 0;
	static uint32_t x314 = 9768000U;
	static int8_t x315 = 1;
	int16_t x316 = -52;
	static int32_t t60 = -50356;

    t60 = (x313==(x314<=(x315*x316)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x322 = 10724566;
	volatile int32_t t61 = -3163;

    t61 = (x321==(x322<=(x323*x324)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x329 = INT32_MIN;
	int32_t x330 = INT32_MAX;
	static volatile int32_t x331 = INT32_MIN;
	int32_t t62 = 3449331;

    t62 = (x329==(x330<=(x331*x332)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x341 = INT16_MIN;
	int32_t x342 = -887741;
	volatile uint32_t x343 = 3264U;
	uint64_t x344 = UINT64_MAX;
	static int32_t t63 = 6;

    t63 = (x341==(x342<=(x343*x344)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x354 = -1;
	static uint16_t x355 = 10U;
	volatile uint16_t x356 = UINT16_MAX;
	volatile int32_t t64 = 3768235;

    t64 = (x353==(x354<=(x355*x356)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x357 = INT16_MIN;
	int16_t x358 = INT16_MAX;
	uint16_t x359 = 40U;
	static int8_t x360 = -1;
	int32_t t65 = 4397980;

    t65 = (x357==(x358<=(x359*x360)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x361 = 12752U;
	static int16_t x363 = INT16_MIN;
	volatile int32_t t66 = -46315746;

    t66 = (x361==(x362<=(x363*x364)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x366 = -1;
	static uint16_t x367 = 0U;
	uint64_t x368 = UINT64_MAX;
	static volatile int32_t t67 = -580076374;

    t67 = (x365==(x366<=(x367*x368)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint64_t x369 = UINT64_MAX;
	int32_t x370 = 2246094;
	int32_t x372 = -243;
	static volatile int32_t t68 = 474;

    t68 = (x369==(x370<=(x371*x372)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x386 = -1;
	static uint64_t x387 = UINT64_MAX;
	int32_t x388 = -20536184;
	volatile int32_t t69 = 15827;

    t69 = (x385==(x386<=(x387*x388)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x389 = INT32_MIN;
	int64_t x390 = 5614079115LL;
	int16_t x391 = -6599;
	volatile int16_t x392 = INT16_MAX;
	volatile int32_t t70 = -9041;

    t70 = (x389==(x390<=(x391*x392)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint8_t x393 = 2U;
	int8_t x395 = 4;
	int32_t x396 = -1;
	volatile int32_t t71 = -1;

    t71 = (x393==(x394<=(x395*x396)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x401 = -1LL;
	int32_t x402 = INT32_MIN;
	static uint32_t x403 = 49U;
	int64_t x404 = 3468270734176LL;
	int32_t t72 = 30484737;

    t72 = (x401==(x402<=(x403*x404)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint8_t x406 = 116U;
	uint64_t x407 = 1494349398LLU;

    t73 = (x405==(x406<=(x407*x408)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x409 = 27295LLU;
	volatile uint32_t x410 = 26705893U;
	int16_t x412 = 3484;
	volatile int32_t t74 = -173139;

    t74 = (x409==(x410<=(x411*x412)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x413 = UINT16_MAX;
	volatile int16_t x414 = INT16_MIN;
	volatile int32_t t75 = -679295;

    t75 = (x413==(x414<=(x415*x416)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint64_t x417 = UINT64_MAX;
	static volatile int64_t x418 = -12906LL;
	uint32_t x419 = 20U;
	int32_t x420 = -1;
	static int32_t t76 = 1708;

    t76 = (x417==(x418<=(x419*x420)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x425 = INT64_MIN;
	uint16_t x426 = UINT16_MAX;
	uint64_t x427 = 110135439013733035LLU;
	volatile int32_t t77 = -8;

    t77 = (x425==(x426<=(x427*x428)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int64_t x429 = 29428795894288LL;
	int32_t x430 = INT32_MIN;
	int8_t x431 = -1;
	uint32_t x432 = 917U;
	int32_t t78 = -448;

    t78 = (x429==(x430<=(x431*x432)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile int32_t x433 = 58;
	static uint32_t x435 = UINT32_MAX;
	int32_t x436 = INT32_MIN;
	int32_t t79 = 494058381;

    t79 = (x433==(x434<=(x435*x436)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x438 = 1184775U;
	static int8_t x439 = 0;
	volatile int16_t x440 = INT16_MIN;
	static int32_t t80 = 0;

    t80 = (x437==(x438<=(x439*x440)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x447 = -155;

    t81 = (x445==(x446<=(x447*x448)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x453 = 37323LLU;
	uint16_t x456 = 280U;

    t82 = (x453==(x454<=(x455*x456)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x458 = 34469708U;
	static int8_t x459 = INT8_MAX;
	volatile uint32_t x460 = 1U;

    t83 = (x457==(x458<=(x459*x460)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x461 = INT32_MAX;
	uint16_t x462 = 807U;
	int8_t x463 = -1;
	int8_t x464 = -1;
	int32_t t84 = -49612871;

    t84 = (x461==(x462<=(x463*x464)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x468 = 332941009388089951LLU;
	static int32_t t85 = -3972;

    t85 = (x465==(x466<=(x467*x468)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x473 = INT64_MIN;
	uint64_t x474 = UINT64_MAX;
	volatile uint8_t x476 = 3U;
	volatile int32_t t86 = 1;

    t86 = (x473==(x474<=(x475*x476)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x489 = INT64_MIN;
	uint64_t x490 = 5LLU;
	uint8_t x491 = 4U;
	int64_t x492 = -91041LL;
	static int32_t t87 = 278637210;

    t87 = (x489==(x490<=(x491*x492)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x493 = INT64_MIN;
	int32_t x494 = INT32_MIN;
	int8_t x495 = -2;
	volatile int8_t x496 = INT8_MAX;
	volatile int32_t t88 = 1;

    t88 = (x493==(x494<=(x495*x496)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x497 = -1LL;
	volatile int64_t x498 = INT64_MIN;
	static int8_t x499 = INT8_MIN;
	int16_t x500 = -12;
	volatile int32_t t89 = -2;

    t89 = (x497==(x498<=(x499*x500)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x505 = INT32_MAX;
	volatile int16_t x506 = -3;
	static uint16_t x508 = UINT16_MAX;
	int32_t t90 = -765;

    t90 = (x505==(x506<=(x507*x508)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x511 = -1;
	uint64_t x512 = 75977211LLU;
	volatile int32_t t91 = 136424767;

    t91 = (x509==(x510<=(x511*x512)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x517 = -4834LL;
	int8_t x518 = 59;
	int64_t x519 = 1272142LL;
	int8_t x520 = INT8_MAX;
	static int32_t t92 = 4;

    t92 = (x517==(x518<=(x519*x520)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile int8_t x521 = INT8_MAX;
	static uint8_t x523 = 3U;
	static uint32_t x524 = UINT32_MAX;

    t93 = (x521==(x522<=(x523*x524)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t x525 = 746619397511855LL;
	int64_t x526 = INT64_MAX;
	int64_t x527 = 27866LL;
	static int32_t x528 = -1;
	int32_t t94 = 14;

    t94 = (x525==(x526<=(x527*x528)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int16_t x530 = INT16_MAX;
	uint64_t x531 = 1LLU;
	int8_t x532 = 14;

    t95 = (x529==(x530<=(x531*x532)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x533 = -116LL;
	volatile int32_t x534 = -1;
	volatile int16_t x535 = -1;
	int8_t x536 = INT8_MAX;
	int32_t t96 = -5338648;

    t96 = (x533==(x534<=(x535*x536)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x537 = INT16_MIN;
	volatile uint32_t x538 = 0U;
	int8_t x539 = 1;
	int64_t x540 = INT64_MAX;
	int32_t t97 = -13;

    t97 = (x537==(x538<=(x539*x540)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x549 = INT8_MIN;
	volatile uint16_t x550 = UINT16_MAX;
	int16_t x551 = 15308;
	int16_t x552 = INT16_MAX;
	static int32_t t98 = 54165565;

    t98 = (x549==(x550<=(x551*x552)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x554 = INT64_MIN;
	uint16_t x555 = UINT16_MAX;
	int16_t x556 = -1;
	int32_t t99 = -10653;

    t99 = (x553==(x554<=(x555*x556)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x557 = 918111165U;
	int8_t x558 = INT8_MAX;
	uint16_t x559 = 387U;
	int64_t x560 = 955382LL;
	volatile int32_t t100 = -7;

    t100 = (x557==(x558<=(x559*x560)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x567 = -16;
	volatile int16_t x568 = INT16_MIN;
	volatile int32_t t101 = -191272;

    t101 = (x565==(x566<=(x567*x568)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int64_t x569 = -34202736210LL;
	volatile int8_t x570 = 14;
	uint64_t x571 = 219104LLU;
	static volatile int8_t x572 = -1;
	int32_t t102 = -11;

    t102 = (x569==(x570<=(x571*x572)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint32_t x573 = 24077626U;
	int64_t x574 = INT64_MIN;
	volatile int32_t x575 = INT32_MIN;
	uint64_t x576 = 0LLU;

    t103 = (x573==(x574<=(x575*x576)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x577 = -1;
	int32_t x578 = INT32_MAX;
	int8_t x579 = INT8_MIN;
	volatile int64_t x580 = -3264LL;
	volatile int32_t t104 = 1202321;

    t104 = (x577==(x578<=(x579*x580)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int16_t x581 = INT16_MIN;
	static int16_t x582 = -10459;
	int64_t x583 = INT64_MAX;
	int16_t x584 = -1;

    t105 = (x581==(x582<=(x583*x584)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x585 = -72;
	int16_t x586 = -1;
	uint64_t x587 = UINT64_MAX;
	int32_t x588 = INT32_MAX;
	static int32_t t106 = 4565071;

    t106 = (x585==(x586<=(x587*x588)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x589 = 26;
	volatile int16_t x591 = -1;
	static volatile uint16_t x592 = 940U;
	int32_t t107 = -38393;

    t107 = (x589==(x590<=(x591*x592)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x593 = 1LLU;
	uint8_t x595 = UINT8_MAX;
	static int64_t x596 = -1LL;
	volatile int32_t t108 = -425681;

    t108 = (x593==(x594<=(x595*x596)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x597 = UINT16_MAX;
	volatile uint8_t x599 = UINT8_MAX;
	uint8_t x600 = UINT8_MAX;
	volatile int32_t t109 = -361211;

    t109 = (x597==(x598<=(x599*x600)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x601 = -1681024966051421131LL;
	uint8_t x602 = UINT8_MAX;
	uint16_t x603 = 0U;
	volatile int32_t t110 = -1;

    t110 = (x601==(x602<=(x603*x604)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x606 = INT8_MAX;
	uint32_t x607 = UINT32_MAX;
	uint64_t x608 = UINT64_MAX;
	volatile int32_t t111 = -23286419;

    t111 = (x605==(x606<=(x607*x608)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x610 = 279;
	static int32_t x611 = -1;
	int8_t x612 = INT8_MIN;
	static int32_t t112 = 4;

    t112 = (x609==(x610<=(x611*x612)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x613 = 90563U;
	volatile int32_t x614 = INT32_MAX;
	uint64_t x615 = 16721LLU;
	int8_t x616 = INT8_MAX;
	int32_t t113 = -15637;

    t113 = (x613==(x614<=(x615*x616)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x617 = 2462;
	int32_t x618 = INT32_MIN;
	int8_t x620 = INT8_MAX;
	int32_t t114 = -13;

    t114 = (x617==(x618<=(x619*x620)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x629 = INT32_MAX;
	uint32_t x630 = 191U;
	static volatile uint32_t x632 = UINT32_MAX;
	volatile int32_t t115 = -2335638;

    t115 = (x629==(x630<=(x631*x632)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x633 = INT64_MIN;
	int16_t x636 = INT16_MIN;
	volatile int32_t t116 = -1;

    t116 = (x633==(x634<=(x635*x636)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x637 = -1LL;
	uint8_t x639 = 0U;
	volatile int32_t t117 = -179887776;

    t117 = (x637==(x638<=(x639*x640)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x641 = 4;
	int8_t x642 = -16;
	static volatile uint64_t x643 = 23836LLU;
	volatile uint16_t x644 = UINT16_MAX;

    t118 = (x641==(x642<=(x643*x644)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x645 = UINT8_MAX;
	uint64_t x646 = 83487336973LLU;
	static int8_t x648 = 3;
	volatile int32_t t119 = 139;

    t119 = (x645==(x646<=(x647*x648)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x658 = INT16_MIN;
	volatile int8_t x659 = INT8_MIN;
	uint64_t x660 = 269113567155830LLU;
	volatile int32_t t120 = 130721;

    t120 = (x657==(x658<=(x659*x660)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint16_t x661 = 19U;
	int8_t x662 = 8;
	static volatile int32_t x663 = INT32_MIN;
	int64_t x664 = -1LL;
	volatile int32_t t121 = -21759241;

    t121 = (x661==(x662<=(x663*x664)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x665 = INT64_MAX;
	int32_t x666 = INT32_MIN;
	int32_t x667 = -1;
	int16_t x668 = INT16_MAX;

    t122 = (x665==(x666<=(x667*x668)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x669 = -3383397308859452253LL;
	static int32_t x670 = 1;
	volatile int16_t x671 = -1;
	uint8_t x672 = UINT8_MAX;
	int32_t t123 = 65227845;

    t123 = (x669==(x670<=(x671*x672)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x673 = 9728369574LL;
	int16_t x674 = -3678;
	static int32_t t124 = -14181;

    t124 = (x673==(x674<=(x675*x676)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x677 = INT16_MIN;
	int8_t x678 = INT8_MIN;
	int8_t x679 = INT8_MAX;
	int8_t x680 = -1;

    t125 = (x677==(x678<=(x679*x680)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint8_t x681 = 1U;
	int64_t x682 = INT64_MIN;
	int8_t x683 = INT8_MIN;
	int8_t x684 = INT8_MIN;
	static int32_t t126 = -60;

    t126 = (x681==(x682<=(x683*x684)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x686 = INT64_MIN;
	int32_t x687 = INT32_MAX;
	int8_t x688 = -1;
	volatile int32_t t127 = 2321;

    t127 = (x685==(x686<=(x687*x688)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x689 = 20U;
	uint64_t x690 = UINT64_MAX;
	int16_t x691 = INT16_MIN;
	uint16_t x692 = 733U;
	int32_t t128 = -908091524;

    t128 = (x689==(x690<=(x691*x692)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x694 = -4;
	volatile int8_t x696 = INT8_MIN;
	volatile int32_t t129 = 1;

    t129 = (x693==(x694<=(x695*x696)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x697 = 37;
	volatile int8_t x698 = INT8_MIN;
	int8_t x700 = -1;
	static volatile int32_t t130 = -31815466;

    t130 = (x697==(x698<=(x699*x700)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x701 = -2;
	uint8_t x703 = UINT8_MAX;
	int8_t x704 = INT8_MIN;
	int32_t t131 = -435913;

    t131 = (x701==(x702<=(x703*x704)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint64_t x705 = UINT64_MAX;
	int8_t x707 = 13;
	int32_t x708 = 56042222;

    t132 = (x705==(x706<=(x707*x708)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x713 = -11862;
	int64_t x714 = INT64_MIN;
	int64_t x715 = -34004169929LL;
	int16_t x716 = INT16_MIN;
	static volatile int32_t t133 = -872;

    t133 = (x713==(x714<=(x715*x716)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x721 = -45632;
	volatile uint8_t x722 = 1U;
	uint8_t x723 = UINT8_MAX;
	static uint8_t x724 = UINT8_MAX;
	int32_t t134 = 13;

    t134 = (x721==(x722<=(x723*x724)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x725 = INT16_MIN;
	int16_t x726 = INT16_MIN;
	uint8_t x728 = 86U;
	volatile int32_t t135 = -6;

    t135 = (x725==(x726<=(x727*x728)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x729 = 0;
	static int8_t x731 = INT8_MIN;
	int8_t x732 = INT8_MIN;
	int32_t t136 = 5677315;

    t136 = (x729==(x730<=(x731*x732)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x733 = INT16_MIN;
	uint64_t x734 = 573597697424594442LLU;
	int16_t x735 = -148;
	volatile int8_t x736 = -6;
	volatile int32_t t137 = -426;

    t137 = (x733==(x734<=(x735*x736)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x737 = -1;
	int16_t x738 = INT16_MIN;
	int16_t x739 = -1;
	uint8_t x740 = 34U;
	volatile int32_t t138 = -20129;

    t138 = (x737==(x738<=(x739*x740)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x749 = INT16_MIN;
	int16_t x750 = INT16_MAX;
	int32_t t139 = -1541221;

    t139 = (x749==(x750<=(x751*x752)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x753 = INT64_MAX;
	static uint64_t x754 = UINT64_MAX;
	static uint16_t x756 = 125U;
	static int32_t t140 = -50506822;

    t140 = (x753==(x754<=(x755*x756)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x761 = UINT64_MAX;
	int8_t x762 = INT8_MIN;
	uint16_t x764 = UINT16_MAX;

    t141 = (x761==(x762<=(x763*x764)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x765 = -1;
	int16_t x766 = -1;
	volatile uint32_t x767 = UINT32_MAX;
	static int32_t t142 = 775;

    t142 = (x765==(x766<=(x767*x768)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x769 = INT16_MIN;
	int32_t x770 = INT32_MIN;
	volatile uint16_t x771 = 0U;
	static int16_t x772 = -3;

    t143 = (x769==(x770<=(x771*x772)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x773 = 1082818LLU;
	static volatile uint32_t x774 = 32U;
	static uint16_t x775 = UINT16_MAX;
	static int8_t x776 = INT8_MIN;
	volatile int32_t t144 = 178197;

    t144 = (x773==(x774<=(x775*x776)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int8_t x777 = INT8_MAX;
	int16_t x778 = INT16_MIN;
	int8_t x779 = -1;
	uint16_t x780 = UINT16_MAX;
	volatile int32_t t145 = 16625;

    t145 = (x777==(x778<=(x779*x780)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x781 = 1U;
	int32_t x783 = -1;
	int16_t x784 = -1;
	static int32_t t146 = 10984807;

    t146 = (x781==(x782<=(x783*x784)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint16_t x785 = 24U;
	uint16_t x786 = 5U;
	volatile int64_t x788 = -1LL;

    t147 = (x785==(x786<=(x787*x788)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x789 = INT16_MIN;
	volatile uint8_t x790 = 10U;
	int8_t x791 = INT8_MAX;
	static uint32_t x792 = 0U;
	volatile int32_t t148 = -370;

    t148 = (x789==(x790<=(x791*x792)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x794 = INT8_MIN;
	int64_t x795 = -2204962727LL;
	static int8_t x796 = -1;
	int32_t t149 = -3189;

    t149 = (x793==(x794<=(x795*x796)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x801 = INT8_MIN;
	int16_t x802 = -154;
	uint8_t x803 = UINT8_MAX;
	static uint32_t x804 = UINT32_MAX;
	volatile int32_t t150 = -1;

    t150 = (x801==(x802<=(x803*x804)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int8_t x805 = INT8_MAX;
	int64_t x806 = -1LL;
	volatile int8_t x807 = INT8_MAX;
	static volatile int32_t t151 = -468559642;

    t151 = (x805==(x806<=(x807*x808)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x809 = 429529LLU;
	int8_t x810 = INT8_MIN;
	int8_t x811 = -3;
	uint16_t x812 = 3U;
	volatile int32_t t152 = 1555720;

    t152 = (x809==(x810<=(x811*x812)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x813 = INT32_MIN;
	int16_t x814 = INT16_MAX;
	uint32_t x816 = 428U;
	volatile int32_t t153 = 3221675;

    t153 = (x813==(x814<=(x815*x816)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x817 = INT32_MAX;
	int8_t x818 = INT8_MAX;
	int8_t x819 = INT8_MAX;
	int16_t x820 = INT16_MIN;
	int32_t t154 = -31;

    t154 = (x817==(x818<=(x819*x820)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x821 = INT8_MIN;
	static int32_t x822 = 1;
	int32_t x823 = -1;
	int16_t x824 = 21;
	static volatile int32_t t155 = 927959;

    t155 = (x821==(x822<=(x823*x824)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int32_t x837 = INT32_MAX;
	int64_t x838 = 5024809LL;
	int8_t x839 = INT8_MAX;
	int32_t x840 = -1;
	volatile int32_t t156 = 1;

    t156 = (x837==(x838<=(x839*x840)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint8_t x841 = UINT8_MAX;
	volatile int16_t x842 = -11912;
	int8_t x844 = INT8_MIN;
	volatile int32_t t157 = -18312;

    t157 = (x841==(x842<=(x843*x844)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint8_t x849 = 0U;
	uint64_t x850 = 37089066LLU;
	static uint16_t x852 = UINT16_MAX;
	int32_t t158 = -1;

    t158 = (x849==(x850<=(x851*x852)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x853 = INT16_MAX;
	static uint16_t x854 = UINT16_MAX;
	int16_t x855 = -67;
	static int32_t x856 = -12987;
	int32_t t159 = 4461794;

    t159 = (x853==(x854<=(x855*x856)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x858 = 6LL;
	int32_t x859 = -24580;
	int8_t x860 = INT8_MAX;

    t160 = (x857==(x858<=(x859*x860)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint32_t x861 = 4495662U;
	uint8_t x862 = 0U;
	static int64_t x863 = INT64_MAX;
	int64_t x864 = -1LL;
	int32_t t161 = -7;

    t161 = (x861==(x862<=(x863*x864)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x865 = 556;
	uint32_t x866 = 1695547U;
	uint32_t x867 = 3186958U;
	int16_t x868 = INT16_MIN;
	volatile int32_t t162 = 929952;

    t162 = (x865==(x866<=(x867*x868)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x873 = UINT16_MAX;
	volatile int32_t x874 = 603;
	volatile uint8_t x875 = 4U;
	int32_t x876 = -513055663;
	static int32_t t163 = 11594;

    t163 = (x873==(x874<=(x875*x876)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x877 = UINT32_MAX;
	volatile uint8_t x878 = 0U;
	uint64_t x879 = 59LLU;
	static volatile int32_t t164 = 62187;

    t164 = (x877==(x878<=(x879*x880)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x881 = -352567;
	int8_t x883 = -1;
	static int16_t x884 = -1;
	volatile int32_t t165 = 15;

    t165 = (x881==(x882<=(x883*x884)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x885 = UINT64_MAX;
	volatile int32_t x886 = 1737;
	int8_t x888 = -1;
	int32_t t166 = -232;

    t166 = (x885==(x886<=(x887*x888)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x890 = 433;
	int8_t x891 = INT8_MIN;
	uint64_t x892 = 21LLU;
	int32_t t167 = -31102;

    t167 = (x889==(x890<=(x891*x892)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int8_t x897 = -1;
	int8_t x899 = INT8_MIN;
	uint16_t x900 = UINT16_MAX;
	volatile int32_t t168 = 168402;

    t168 = (x897==(x898<=(x899*x900)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x905 = INT8_MAX;
	int16_t x907 = INT16_MIN;
	uint64_t x908 = 308369089268412LLU;
	volatile int32_t t169 = -192231;

    t169 = (x905==(x906<=(x907*x908)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x913 = 10;
	volatile int64_t x915 = 513059710438432226LL;
	uint8_t x916 = 1U;
	int32_t t170 = -331;

    t170 = (x913==(x914<=(x915*x916)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x917 = INT32_MIN;
	static uint32_t x918 = 654460942U;

    t171 = (x917==(x918<=(x919*x920)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x929 = UINT8_MAX;
	static int16_t x931 = -1;
	int8_t x932 = 21;
	int32_t t172 = 1933;

    t172 = (x929==(x930<=(x931*x932)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int16_t x937 = -1;
	uint64_t x939 = 283704541186345710LLU;
	int32_t t173 = 5288;

    t173 = (x937==(x938<=(x939*x940)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x949 = INT8_MIN;
	int8_t x951 = -2;
	static int16_t x952 = INT16_MIN;
	volatile int32_t t174 = 5;

    t174 = (x949==(x950<=(x951*x952)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x957 = INT16_MAX;
	uint16_t x958 = 7U;
	static int8_t x959 = INT8_MIN;
	int64_t x960 = 482LL;
	volatile int32_t t175 = -2;

    t175 = (x957==(x958<=(x959*x960)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x966 = INT8_MAX;
	int64_t x967 = 0LL;
	volatile int8_t x968 = -5;
	int32_t t176 = -7;

    t176 = (x965==(x966<=(x967*x968)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x969 = -1;
	static uint32_t x971 = UINT32_MAX;
	int8_t x972 = -5;

    t177 = (x969==(x970<=(x971*x972)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x977 = 7;
	int32_t x978 = -1;
	static uint16_t x980 = UINT16_MAX;
	volatile int32_t t178 = -10887;

    t178 = (x977==(x978<=(x979*x980)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int32_t x981 = INT32_MIN;
	volatile int16_t x982 = -680;
	int8_t x983 = 31;
	uint8_t x984 = 1U;
	static int32_t t179 = 0;

    t179 = (x981==(x982<=(x983*x984)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x989 = INT32_MAX;
	volatile uint32_t x990 = 282U;
	static uint32_t x992 = 7U;
	int32_t t180 = 4885;

    t180 = (x989==(x990<=(x991*x992)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x997 = INT8_MIN;
	int16_t x998 = INT16_MIN;
	static int8_t x999 = -1;
	static uint32_t x1000 = UINT32_MAX;
	volatile int32_t t181 = -383891;

    t181 = (x997==(x998<=(x999*x1000)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x1002 = INT8_MIN;
	uint32_t x1003 = 3608491U;
	int32_t t182 = 353;

    t182 = (x1001==(x1002<=(x1003*x1004)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x1005 = -18;
	int32_t x1006 = INT32_MIN;
	static uint8_t x1008 = 2U;

    t183 = (x1005==(x1006<=(x1007*x1008)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x1011 = INT8_MIN;
	int8_t x1012 = -1;

    t184 = (x1009==(x1010<=(x1011*x1012)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x1013 = -4117078567886522901LL;
	int8_t x1015 = 4;
	static int8_t x1016 = INT8_MIN;
	volatile int32_t t185 = 8183;

    t185 = (x1013==(x1014<=(x1015*x1016)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x1017 = 3249709U;
	volatile uint8_t x1018 = UINT8_MAX;
	volatile int32_t t186 = 10;

    t186 = (x1017==(x1018<=(x1019*x1020)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x1021 = 8269297971LL;
	int32_t x1022 = -89;
	uint8_t x1023 = UINT8_MAX;

    t187 = (x1021==(x1022<=(x1023*x1024)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x1025 = -1;
	int16_t x1026 = INT16_MAX;
	uint16_t x1027 = 3800U;
	static int8_t x1028 = INT8_MIN;
	volatile int32_t t188 = 3;

    t188 = (x1025==(x1026<=(x1027*x1028)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x1033 = -14LL;
	int32_t x1034 = -1;
	uint64_t x1036 = 2840178984538119045LLU;
	int32_t t189 = -13;

    t189 = (x1033==(x1034<=(x1035*x1036)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x1037 = INT32_MIN;
	uint8_t x1039 = UINT8_MAX;
	int32_t t190 = 2020;

    t190 = (x1037==(x1038<=(x1039*x1040)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x1041 = -1066;
	uint16_t x1043 = UINT16_MAX;
	static int8_t x1044 = INT8_MIN;

    t191 = (x1041==(x1042<=(x1043*x1044)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int64_t x1045 = INT64_MAX;
	int16_t x1046 = -1;
	static uint8_t x1047 = 17U;
	volatile int16_t x1048 = -8;
	static volatile int32_t t192 = -29552102;

    t192 = (x1045==(x1046<=(x1047*x1048)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x1049 = 24271U;
	int16_t x1050 = INT16_MIN;
	uint64_t x1051 = 1LLU;
	uint16_t x1052 = 1U;

    t193 = (x1049==(x1050<=(x1051*x1052)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x1053 = -1;
	static int8_t x1054 = INT8_MAX;
	static volatile uint32_t x1055 = UINT32_MAX;
	static int8_t x1056 = INT8_MIN;

    t194 = (x1053==(x1054<=(x1055*x1056)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x1058 = INT16_MIN;
	int8_t x1059 = 0;
	uint64_t x1060 = 1562801429LLU;
	int32_t t195 = 21423285;

    t195 = (x1057==(x1058<=(x1059*x1060)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x1061 = UINT32_MAX;
	static volatile int32_t x1062 = INT32_MIN;
	uint32_t x1063 = 7983U;
	static uint64_t x1064 = 1LLU;
	static int32_t t196 = -1800727;

    t196 = (x1061==(x1062<=(x1063*x1064)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint16_t x1066 = 7055U;
	static volatile uint32_t x1067 = 3330U;
	static int8_t x1068 = 0;
	volatile int32_t t197 = 686840;

    t197 = (x1065==(x1066<=(x1067*x1068)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x1069 = -145592249354222LL;
	volatile uint8_t x1070 = 52U;
	int16_t x1071 = INT16_MIN;
	uint64_t x1072 = UINT64_MAX;
	volatile int32_t t198 = 1578;

    t198 = (x1069==(x1070<=(x1071*x1072)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint32_t x1073 = 763U;
	int8_t x1074 = 0;
	uint8_t x1075 = 40U;
	uint64_t x1076 = UINT64_MAX;
	int32_t t199 = -361;

    t199 = (x1073==(x1074<=(x1075*x1076)));

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

