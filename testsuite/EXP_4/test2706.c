
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

static int32_t x10 = -1;
uint16_t x11 = UINT16_MAX;
static int64_t x17 = 73LL;
volatile int64_t t3 = 787964449LL;
int32_t x34 = INT32_MIN;
int8_t x39 = INT8_MAX;
int32_t x42 = 10008;
static int16_t x47 = INT16_MIN;
static int64_t x53 = 3667060990LL;
volatile uint32_t x61 = 108561U;
uint8_t x70 = 3U;
uint64_t t12 = 548814013583467430LLU;
int64_t x75 = INT64_MIN;
static int32_t x88 = 3;
volatile int64_t t15 = 238126880491LL;
static int8_t x104 = 0;
int32_t t17 = 166724853;
static int8_t x105 = INT8_MAX;
static int8_t x109 = INT8_MIN;
static uint16_t x120 = 7U;
uint16_t x121 = UINT16_MAX;
int16_t x124 = INT16_MAX;
static volatile uint8_t x135 = 64U;
static int16_t x141 = INT16_MIN;
uint8_t x143 = UINT8_MAX;
volatile int64_t t25 = 10048933LL;
int64_t x182 = INT64_MAX;
int8_t x183 = INT8_MAX;
int32_t t31 = -28;
volatile int8_t x198 = -6;
static int32_t x200 = -1;
int16_t x202 = INT16_MIN;
int64_t x206 = INT64_MIN;
int8_t x207 = INT8_MIN;
volatile uint16_t x217 = UINT16_MAX;
static int8_t x220 = INT8_MAX;
int32_t x242 = INT32_MIN;
volatile int64_t t39 = 19LL;
volatile int8_t x251 = -1;
volatile int64_t t42 = 825261LL;
int16_t x257 = INT16_MAX;
volatile int16_t x259 = -1;
uint64_t x265 = UINT64_MAX;
uint16_t x279 = 14324U;
uint64_t t48 = 1656LLU;
int64_t x287 = 10LL;
int16_t x290 = 277;
volatile uint64_t x292 = UINT64_MAX;
static int64_t x293 = 89120028957335LL;
static int64_t x296 = INT64_MIN;
volatile uint32_t t52 = 2037967252U;
volatile int64_t t55 = -562LL;
int32_t x331 = -10497;
static int16_t x335 = -67;
uint32_t x341 = UINT32_MAX;
volatile int32_t x342 = INT32_MAX;
static volatile uint64_t t58 = 2418146LLU;
int64_t x369 = -1LL;
int8_t x370 = -1;
volatile uint64_t t62 = 853321224682572LLU;
uint32_t x390 = 82U;
volatile int16_t x392 = 604;
int64_t x396 = INT64_MIN;
volatile uint64_t x400 = UINT64_MAX;
int8_t x409 = INT8_MIN;
int16_t x410 = INT16_MAX;
static volatile uint64_t x411 = UINT64_MAX;
uint8_t x423 = 0U;
int16_t x433 = INT16_MIN;
int8_t x434 = INT8_MIN;
int8_t x438 = -3;
volatile uint8_t x441 = 20U;
static uint16_t x451 = UINT16_MAX;
volatile int64_t t77 = 29232703LL;
uint16_t x454 = 1187U;
volatile int16_t x456 = 1381;
volatile int64_t t78 = 686120280654LL;
int8_t x466 = INT8_MIN;
uint8_t x475 = UINT8_MAX;
uint64_t t82 = 274250107805LLU;
uint16_t x478 = 14316U;
uint64_t x480 = UINT64_MAX;
static uint64_t t83 = 4133218436702234LLU;
int64_t x483 = -1LL;
static volatile uint32_t x485 = 55432657U;
int32_t x490 = -1;
volatile int16_t x492 = -85;
int64_t x493 = INT64_MAX;
uint8_t x495 = UINT8_MAX;
int64_t t87 = 30057658982488LL;
uint16_t x497 = UINT16_MAX;
int32_t x498 = INT32_MAX;
uint16_t x502 = 5U;
uint64_t t89 = 74412979LLU;
int32_t t92 = 465387;
volatile int64_t t93 = 1975633167947LL;
static volatile int8_t x522 = -1;
static int32_t t94 = 6673601;
int16_t x527 = -1;
static volatile uint8_t x529 = 17U;
int8_t x530 = INT8_MIN;
int32_t x548 = INT32_MIN;
int16_t x553 = INT16_MAX;
int16_t x561 = -1321;
int16_t x569 = INT16_MIN;
uint32_t x570 = UINT32_MAX;
int8_t x574 = -1;
volatile int64_t x585 = -59735975541404LL;
int16_t x586 = -8;
volatile uint32_t x594 = 775497245U;
uint8_t x596 = 10U;
volatile int8_t x600 = -30;
static int16_t x602 = -1;
int16_t x607 = -1;
int8_t x612 = -1;
uint32_t x618 = 121U;
volatile uint64_t x622 = UINT64_MAX;
uint64_t x623 = 14967911883LLU;
volatile uint32_t t118 = 14U;
static uint16_t x633 = 84U;
uint16_t x636 = 6922U;
static int64_t x642 = -1LL;
uint16_t x648 = 33U;
int64_t x650 = -20534514LL;
static volatile int64_t t122 = -7919204402LL;
uint8_t x655 = 7U;
int64_t t123 = 265224434LL;
volatile int32_t x659 = 70519273;
int64_t x672 = INT64_MIN;
volatile uint64_t t126 = 313663806883478429LLU;
int64_t x673 = 17805096456389254LL;
static int64_t x674 = -159333LL;
uint32_t x676 = 32712U;
int8_t x678 = INT8_MAX;
int64_t x683 = 1248511LL;
volatile int64_t x684 = INT64_MIN;
int64_t t129 = 1962158482LL;
int8_t x686 = INT8_MIN;
int32_t x688 = INT32_MAX;
volatile int64_t t131 = 294LL;
volatile int8_t x701 = INT8_MIN;
uint64_t t135 = 139LLU;
int16_t x722 = INT16_MAX;
int8_t x726 = -1;
uint16_t x729 = 603U;
static volatile uint8_t x731 = 6U;
static volatile int32_t t139 = -10;
int64_t x733 = -79933887949LL;
static int64_t t140 = -125103819264090LL;
int32_t x744 = -7307;
uint16_t x754 = UINT16_MAX;
volatile int64_t x758 = -348LL;
volatile uint32_t x763 = 25338237U;
volatile int32_t x768 = 214275;
int8_t x769 = INT8_MIN;
static volatile uint64_t t147 = 2017LLU;
int16_t x789 = INT16_MIN;
int16_t x796 = 4;
int8_t x801 = -1;
static volatile int64_t x805 = -36041424989364LL;
volatile int64_t x808 = INT64_MIN;
volatile int64_t t151 = -2LL;
uint8_t x810 = 14U;
uint32_t x812 = UINT32_MAX;
static int16_t x817 = 0;
int32_t x821 = -152601;
uint16_t x824 = UINT16_MAX;
volatile int32_t t155 = -53202081;
static uint32_t x826 = 223439U;
int8_t x830 = -1;
int8_t x837 = INT8_MAX;
uint32_t x839 = 133U;
uint32_t x841 = 58969631U;
int32_t x842 = -25148813;
volatile uint32_t x843 = 16065732U;
static volatile uint16_t x849 = UINT16_MAX;
volatile int8_t x860 = INT8_MIN;
volatile uint64_t t165 = 45713LLU;
uint8_t x882 = 85U;
volatile uint64_t t168 = 143688317479LLU;
int16_t x902 = -1;
int16_t x903 = 8;
int16_t x916 = INT16_MAX;
static int16_t x940 = 53;
uint8_t x941 = 30U;
uint32_t x948 = 3274587U;
static int64_t t178 = -1005994698815060847LL;
volatile int64_t x954 = INT64_MIN;
int64_t t181 = 0LL;
int16_t x965 = -1;
static int32_t x971 = 1528445;
uint64_t x972 = 3431587806LLU;
volatile int8_t x974 = -22;
uint32_t x981 = UINT32_MAX;
volatile int8_t x983 = INT8_MIN;
int64_t x995 = -1LL;
static int16_t x998 = 223;
int16_t x1001 = INT16_MIN;
int16_t x1003 = INT16_MIN;
volatile uint32_t t190 = 1695168742U;
static int64_t x1007 = 33LL;
int32_t x1018 = INT32_MIN;
int32_t x1020 = INT32_MAX;
uint32_t x1023 = UINT32_MAX;
static uint32_t t194 = 16439212U;
static int64_t t195 = -18LL;
int8_t x1043 = 0;


void f0(void) {
    	int64_t x1 = INT64_MAX;
	volatile int16_t x2 = INT16_MIN;
	uint16_t x3 = 35U;
	volatile int64_t x4 = -1LL;
	int64_t t0 = -2424LL;

    t0 = (x1/(x2&(x3^x4)));

    if (t0 != -281474976710655LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x9 = 1988145;
	int16_t x12 = INT16_MIN;
	static volatile int32_t t1 = -6578;

    t1 = (x9/(x10&(x11^x12)));

    if (t1 != -60) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x13 = -1LL;
	int16_t x14 = 6453;
	static volatile uint32_t x15 = 1346953U;
	int8_t x16 = 0;
	int64_t t2 = -88848301LL;

    t2 = (x13/(x14&(x15^x16)));

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x18 = INT8_MAX;
	uint16_t x19 = UINT16_MAX;
	int64_t x20 = INT64_MIN;

    t3 = (x17/(x18&(x19^x20)));

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x29 = -1;
	static int16_t x30 = INT16_MIN;
	uint16_t x31 = UINT16_MAX;
	uint8_t x32 = 23U;
	static int32_t t4 = 109682053;

    t4 = (x29/(x30&(x31^x32)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x33 = 9798U;
	int16_t x35 = -1;
	int32_t x36 = 105502;
	int32_t t5 = 17101;

    t5 = (x33/(x34&(x35^x36)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint8_t x37 = 0U;
	static int16_t x38 = -27;
	static int16_t x40 = INT16_MIN;
	static int32_t t6 = 10788741;

    t6 = (x37/(x38&(x39^x40)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x41 = UINT8_MAX;
	int16_t x43 = 3714;
	uint16_t x44 = UINT16_MAX;
	static int32_t t7 = 96;

    t7 = (x41/(x42&(x43^x44)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x45 = INT32_MIN;
	int16_t x46 = INT16_MIN;
	int16_t x48 = INT16_MAX;
	int32_t t8 = -45;

    t8 = (x45/(x46&(x47^x48)));

    if (t8 != 65536) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x49 = INT64_MAX;
	volatile int32_t x50 = INT32_MAX;
	static int16_t x51 = INT16_MIN;
	int8_t x52 = INT8_MIN;
	int64_t t9 = 7043401LL;

    t9 = (x49/(x50&(x51^x52)));

    if (t9 != 282578800148737LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x54 = 7;
	static int64_t x55 = INT64_MAX;
	static int32_t x56 = INT32_MIN;
	static int64_t t10 = 4852LL;

    t10 = (x53/(x54&(x55^x56)));

    if (t10 != 523865855LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x62 = -1LL;
	volatile uint16_t x63 = 1662U;
	int32_t x64 = INT32_MAX;
	static int64_t t11 = 495514300LL;

    t11 = (x61/(x62&(x63^x64)));

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x69 = -1;
	static uint8_t x71 = UINT8_MAX;
	static uint64_t x72 = 64396LLU;

    t12 = (x69/(x70&(x71^x72)));

    if (t12 != 6148914691236517205LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x73 = INT16_MAX;
	int16_t x74 = -13;
	int16_t x76 = INT16_MIN;
	int64_t t13 = 128LL;

    t13 = (x73/(x74&(x75^x76)));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x85 = -29496;
	uint32_t x86 = 9U;
	int8_t x87 = 0;
	volatile uint32_t t14 = 26650783U;

    t14 = (x85/(x86&(x87^x88)));

    if (t14 != 4294937800U) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x93 = -1;
	volatile int16_t x94 = INT16_MIN;
	static int64_t x95 = INT64_MIN;
	uint8_t x96 = 7U;

    t15 = (x93/(x94&(x95^x96)));

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x97 = 26386U;
	int8_t x98 = -1;
	uint32_t x99 = UINT32_MAX;
	uint32_t x100 = 58U;
	uint32_t t16 = 1612460580U;

    t16 = (x97/(x98&(x99^x100)));

    if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x101 = -1;
	static int16_t x102 = -1;
	int16_t x103 = -1;

    t17 = (x101/(x102&(x103^x104)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x106 = 9;
	volatile int64_t x107 = -1LL;
	volatile int8_t x108 = 24;
	volatile int64_t t18 = -76564982LL;

    t18 = (x105/(x106&(x107^x108)));

    if (t18 != 127LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x110 = 1;
	uint8_t x111 = UINT8_MAX;
	int32_t x112 = INT32_MIN;
	static int32_t t19 = 892;

    t19 = (x109/(x110&(x111^x112)));

    if (t19 != -128) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x117 = -1;
	static int8_t x118 = INT8_MIN;
	static uint32_t x119 = 399900U;
	volatile uint32_t t20 = 3805U;

    t20 = (x117/(x118&(x119^x120)));

    if (t20 != 10740U) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x122 = INT8_MAX;
	static uint64_t x123 = 16289LLU;
	uint64_t t21 = 0LLU;

    t21 = (x121/(x122&(x123^x124)));

    if (t21 != 697LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x133 = INT8_MAX;
	volatile int64_t x134 = INT64_MIN;
	static int64_t x136 = INT64_MIN;
	int64_t t22 = 28753LL;

    t22 = (x133/(x134&(x135^x136)));

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint8_t x137 = 0U;
	int16_t x138 = INT16_MIN;
	static int16_t x139 = INT16_MAX;
	volatile int16_t x140 = INT16_MIN;
	volatile int32_t t23 = -30702363;

    t23 = (x137/(x138&(x139^x140)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x142 = INT32_MIN;
	int16_t x144 = INT16_MIN;
	int32_t t24 = -45626375;

    t24 = (x141/(x142&(x143^x144)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x145 = 16315219997849LL;
	volatile int64_t x146 = INT64_MAX;
	int32_t x147 = -1;
	volatile int8_t x148 = INT8_MIN;

    t25 = (x145/(x146&(x147^x148)));

    if (t25 != 128466299195LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x149 = 1325769818312976913LLU;
	uint32_t x150 = UINT32_MAX;
	int32_t x151 = -508453;
	int32_t x152 = -1;
	volatile uint64_t t26 = 15128997872843LLU;

    t26 = (x149/(x150&(x151^x152)));

    if (t26 != 2607463080709LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x165 = 1;
	int8_t x166 = INT8_MIN;
	int32_t x167 = INT32_MIN;
	volatile int64_t x168 = -614500153891869062LL;
	volatile int64_t t27 = 686417795LL;

    t27 = (x165/(x166&(x167^x168)));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x169 = INT16_MIN;
	static uint8_t x170 = 116U;
	static int16_t x171 = 4;
	int8_t x172 = 1;
	static volatile int32_t t28 = -6;

    t28 = (x169/(x170&(x171^x172)));

    if (t28 != -8192) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x173 = -1LL;
	static uint8_t x174 = 1U;
	uint16_t x175 = 0U;
	static uint64_t x176 = 3LLU;
	uint64_t t29 = UINT64_MAX;

    t29 = (x173/(x174&(x175^x176)));

    if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x181 = -1LL;
	int8_t x184 = 12;
	static int64_t t30 = -14249277732360170LL;

    t30 = (x181/(x182&(x183^x184)));

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x185 = INT8_MAX;
	int8_t x186 = INT8_MIN;
	int8_t x187 = INT8_MAX;
	int16_t x188 = -1;

    t31 = (x185/(x186&(x187^x188)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x193 = -1LL;
	int64_t x194 = INT64_MAX;
	volatile int16_t x195 = INT16_MIN;
	int32_t x196 = -112703244;
	volatile int64_t t32 = 685871LL;

    t32 = (x193/(x194&(x195^x196)));

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x197 = -523LL;
	volatile int64_t x199 = -11797992LL;
	int64_t t33 = -126262390818LL;

    t33 = (x197/(x198&(x199^x200)));

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x201 = 45;
	int8_t x203 = INT8_MAX;
	int16_t x204 = -563;
	volatile int32_t t34 = 22017;

    t34 = (x201/(x202&(x203^x204)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint16_t x205 = UINT16_MAX;
	uint8_t x208 = UINT8_MAX;
	int64_t t35 = 314201332852LL;

    t35 = (x205/(x206&(x207^x208)));

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x218 = -1;
	static volatile int64_t x219 = INT64_MIN;
	static int64_t t36 = 4518002696103847LL;

    t36 = (x217/(x218&(x219^x220)));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int8_t x221 = INT8_MIN;
	uint32_t x222 = 183876U;
	static volatile uint32_t x223 = UINT32_MAX;
	volatile uint64_t x224 = 42189068139874LLU;
	volatile uint64_t t37 = 11511164541220LLU;

    t37 = (x221/(x222&(x223^x224)));

    if (t37 != 554222571617280LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x233 = -1;
	uint8_t x234 = 3U;
	int16_t x235 = -1;
	int8_t x236 = INT8_MIN;
	volatile int32_t t38 = 29;

    t38 = (x233/(x234&(x235^x236)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x241 = 1789U;
	volatile int64_t x243 = -1LL;
	uint32_t x244 = 0U;

    t39 = (x241/(x242&(x243^x244)));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x245 = UINT32_MAX;
	int16_t x246 = -1;
	int8_t x247 = 36;
	static int32_t x248 = INT32_MIN;
	volatile uint32_t t40 = 710364090U;

    t40 = (x245/(x246&(x247^x248)));

    if (t40 != 1U) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint8_t x249 = 57U;
	int16_t x250 = 8536;
	static uint64_t x252 = 10407566828721856LLU;
	volatile uint64_t t41 = 28LLU;

    t41 = (x249/(x250&(x251^x252)));

    if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x253 = -13118513;
	int32_t x254 = INT32_MIN;
	int32_t x255 = -8745;
	static int64_t x256 = INT64_MIN;

    t42 = (x253/(x254&(x255^x256)));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x258 = UINT64_MAX;
	static int64_t x260 = INT64_MAX;
	volatile uint64_t t43 = 51119402109LLU;

    t43 = (x257/(x258&(x259^x260)));

    if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x261 = 10398648789039932LLU;
	static uint8_t x262 = UINT8_MAX;
	int64_t x263 = INT64_MIN;
	volatile uint32_t x264 = 516735U;
	volatile uint64_t t44 = 45063899870507581LLU;

    t44 = (x261/(x262&(x263^x264)));

    if (t44 != 81879124323149LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint32_t x266 = 62U;
	static int16_t x267 = -60;
	int64_t x268 = -1LL;
	volatile uint64_t t45 = 0LLU;

    t45 = (x265/(x266&(x267^x268)));

    if (t45 != 318047311615681924LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x273 = 23948LLU;
	static uint16_t x274 = UINT16_MAX;
	uint64_t x275 = 1166713207LLU;
	int16_t x276 = INT16_MIN;
	static volatile uint64_t t46 = 21299743LLU;

    t46 = (x273/(x274&(x275^x276)));

    if (t46 != 2LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint8_t x277 = UINT8_MAX;
	uint32_t x278 = UINT32_MAX;
	int64_t x280 = INT64_MIN;
	int64_t t47 = -251697659834884413LL;

    t47 = (x277/(x278&(x279^x280)));

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x281 = -3360;
	uint64_t x282 = 18732680757721LLU;
	static uint64_t x283 = UINT64_MAX;
	static int16_t x284 = 29;

    t48 = (x281/(x282&(x283^x284)));

    if (t48 != 984735LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint32_t x285 = UINT32_MAX;
	int64_t x286 = INT64_MAX;
	uint8_t x288 = 1U;
	static int64_t t49 = 7369LL;

    t49 = (x285/(x286&(x287^x288)));

    if (t49 != 390451572LL) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x289 = INT32_MIN;
	volatile int64_t x291 = 31398LL;
	uint64_t t50 = 3991697772LLU;

    t50 = (x289/(x290&(x291^x292)));

    if (t50 != 67570491104622959LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static int32_t x294 = INT32_MIN;
	static volatile uint32_t x295 = 624161015U;
	int64_t t51 = -24998LL;

    t51 = (x293/(x294&(x295^x296)));

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x309 = -1;
	int32_t x310 = INT32_MIN;
	static int16_t x311 = INT16_MIN;
	uint32_t x312 = 9U;

    t52 = (x309/(x310&(x311^x312)));

    if (t52 != 1U) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x317 = 0;
	int16_t x318 = -1;
	int64_t x319 = INT64_MIN;
	volatile int8_t x320 = 48;
	static volatile int64_t t53 = 138118503365401LL;

    t53 = (x317/(x318&(x319^x320)));

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint32_t x321 = UINT32_MAX;
	uint8_t x322 = UINT8_MAX;
	uint32_t x323 = 112U;
	volatile int16_t x324 = 10374;
	volatile uint32_t t54 = 32514043U;

    t54 = (x321/(x322&(x323^x324)));

    if (t54 != 17459216U) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x325 = 43;
	static int64_t x326 = -1LL;
	int8_t x327 = -1;
	uint8_t x328 = 3U;

    t55 = (x325/(x326&(x327^x328)));

    if (t55 != -10LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint8_t x329 = UINT8_MAX;
	volatile uint32_t x330 = UINT32_MAX;
	volatile int64_t x332 = 1779259833LL;
	volatile int64_t t56 = 345894503765799723LL;

    t56 = (x329/(x330&(x331^x332)));

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint64_t x333 = 1970LLU;
	int32_t x334 = INT32_MIN;
	static uint16_t x336 = UINT16_MAX;
	volatile uint64_t t57 = 22683599703471206LLU;

    t57 = (x333/(x334&(x335^x336)));

    if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x343 = 829709290360LLU;
	uint64_t x344 = 6677232599278304230LLU;

    t58 = (x341/(x342&(x343^x344)));

    if (t58 != 3LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int32_t x365 = INT32_MIN;
	int32_t x366 = 4885;
	int8_t x367 = INT8_MIN;
	int16_t x368 = INT16_MIN;
	volatile int32_t t59 = -2100934;

    t59 = (x365/(x366&(x367^x368)));

    if (t59 != -441505) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x371 = 84;
	volatile int32_t x372 = 190135406;
	static int64_t t60 = -6306LL;

    t60 = (x369/(x370&(x371^x372)));

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x373 = 1;
	static int16_t x374 = INT16_MIN;
	volatile int16_t x375 = 3;
	int64_t x376 = -140422999808056273LL;
	int64_t t61 = 2169400754976740142LL;

    t61 = (x373/(x374&(x375^x376)));

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint64_t x377 = UINT64_MAX;
	uint32_t x378 = UINT32_MAX;
	volatile int64_t x379 = INT64_MIN;
	volatile uint64_t x380 = 130206LLU;

    t62 = (x377/(x378&(x379^x380)));

    if (t62 != 141673533275805LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint16_t x381 = 11548U;
	static uint64_t x382 = 26LLU;
	int64_t x383 = -3191429LL;
	int8_t x384 = -31;
	volatile uint64_t t63 = 2128670617861363LLU;

    t63 = (x381/(x382&(x383^x384)));

    if (t63 != 444LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint64_t x385 = 209LLU;
	int16_t x386 = 1;
	int8_t x387 = INT8_MIN;
	static int16_t x388 = -1;
	volatile uint64_t t64 = 121LLU;

    t64 = (x385/(x386&(x387^x388)));

    if (t64 != 209LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x389 = INT8_MAX;
	static int32_t x391 = -1;
	volatile uint32_t t65 = 1U;

    t65 = (x389/(x390&(x391^x392)));

    if (t65 != 63U) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x393 = INT32_MAX;
	static uint8_t x394 = 15U;
	static int8_t x395 = 3;
	static volatile int64_t t66 = -12750801096LL;

    t66 = (x393/(x394&(x395^x396)));

    if (t66 != 715827882LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x397 = -1;
	int8_t x398 = -14;
	static int8_t x399 = INT8_MIN;
	volatile uint64_t t67 = 32618LLU;

    t67 = (x397/(x398&(x399^x400)));

    if (t67 != 161813544506224136LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint8_t x401 = UINT8_MAX;
	uint16_t x402 = UINT16_MAX;
	uint32_t x403 = 38U;
	int8_t x404 = -1;
	uint32_t t68 = 341U;

    t68 = (x401/(x402&(x403^x404)));

    if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x412 = INT64_MIN;
	volatile uint64_t t69 = 6868282066152888LLU;

    t69 = (x409/(x410&(x411^x412)));

    if (t69 != 562967133814799LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x421 = INT32_MAX;
	int8_t x422 = -14;
	int8_t x424 = INT8_MIN;
	int32_t t70 = 3350038;

    t70 = (x421/(x422&(x423^x424)));

    if (t70 != -16777215) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x425 = INT64_MIN;
	volatile int8_t x426 = -1;
	int64_t x427 = INT64_MAX;
	volatile uint16_t x428 = 4106U;
	volatile int64_t t71 = 112063119455LL;

    t71 = (x425/(x426&(x427^x428)));

    if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x429 = INT32_MIN;
	int32_t x430 = INT32_MIN;
	uint64_t x431 = 32LLU;
	volatile int32_t x432 = INT32_MIN;
	volatile uint64_t t72 = 9LLU;

    t72 = (x429/(x430&(x431^x432)));

    if (t72 != 1LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x435 = -303;
	uint8_t x436 = 3U;
	int32_t t73 = 53190856;

    t73 = (x433/(x434&(x435^x436)));

    if (t73 != 85) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x437 = 14U;
	volatile int64_t x439 = INT64_MAX;
	uint16_t x440 = 0U;
	volatile int64_t t74 = -26LL;

    t74 = (x437/(x438&(x439^x440)));

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x442 = INT64_MAX;
	uint32_t x443 = 19319738U;
	int8_t x444 = INT8_MAX;
	int64_t t75 = -16809LL;

    t75 = (x441/(x442&(x443^x444)));

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile uint32_t x445 = UINT32_MAX;
	uint8_t x446 = 79U;
	uint32_t x447 = 76U;
	static int8_t x448 = 23;
	volatile uint32_t t76 = 66172U;

    t76 = (x445/(x446&(x447^x448)));

    if (t76 != 57266230U) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x449 = INT16_MIN;
	uint16_t x450 = 3830U;
	static int64_t x452 = INT64_MIN;

    t77 = (x449/(x450&(x451^x452)));

    if (t77 != -8LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x453 = INT32_MIN;
	int64_t x455 = 131778LL;

    t78 = (x453/(x454&(x455^x456)));

    if (t78 != -1809169LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x461 = 10195U;
	uint8_t x462 = 1U;
	int32_t x463 = INT32_MIN;
	int16_t x464 = 47;
	volatile uint32_t t79 = 69095U;

    t79 = (x461/(x462&(x463^x464)));

    if (t79 != 10195U) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x465 = 15U;
	uint8_t x467 = UINT8_MAX;
	int8_t x468 = INT8_MAX;
	int32_t t80 = 176950296;

    t80 = (x465/(x466&(x467^x468)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x469 = 952261LLU;
	volatile uint16_t x470 = 22U;
	uint64_t x471 = 121330595LLU;
	int64_t x472 = -1028451667047679320LL;
	uint64_t t81 = 2959LLU;

    t81 = (x469/(x470&(x471^x472)));

    if (t81 != 476130LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x473 = UINT64_MAX;
	int8_t x474 = -1;
	static uint16_t x476 = UINT16_MAX;

    t82 = (x473/(x474&(x475^x476)));

    if (t82 != 282578800148737LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x477 = -28439528;
	uint16_t x479 = 50U;

    t83 = (x477/(x478&(x479^x480)));

    if (t83 != 1291427056404446LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int32_t x481 = -1;
	volatile int16_t x482 = 1995;
	int32_t x484 = 7928;
	volatile int64_t t84 = 900888683030LL;

    t84 = (x481/(x482&(x483^x484)));

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x486 = -1;
	static uint32_t x487 = 1795U;
	int16_t x488 = -1;
	volatile uint32_t t85 = 1U;

    t85 = (x485/(x486&(x487^x488)));

    if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint64_t x489 = UINT64_MAX;
	int8_t x491 = 55;
	uint64_t t86 = 1752774209205475291LLU;

    t86 = (x489/(x490&(x491^x492)));

    if (t86 != 1LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t x494 = INT32_MAX;
	int32_t x496 = INT32_MIN;

    t87 = (x493/(x494&(x495^x496)));

    if (t87 != 36170086419038336LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x499 = INT64_MAX;
	volatile uint16_t x500 = UINT16_MAX;
	volatile int64_t t88 = 41789658276400LL;

    t88 = (x497/(x498&(x499^x500)));

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x501 = INT64_MIN;
	volatile uint64_t x503 = 41223LLU;
	int64_t x504 = INT64_MIN;

    t89 = (x501/(x502&(x503^x504)));

    if (t89 != 1844674407370955161LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x505 = -1;
	int8_t x506 = INT8_MIN;
	static int64_t x507 = -1LL;
	uint8_t x508 = UINT8_MAX;
	int64_t t90 = -6735735LL;

    t90 = (x505/(x506&(x507^x508)));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x509 = INT8_MAX;
	volatile uint64_t x510 = 894453950022557LLU;
	int32_t x511 = INT32_MIN;
	volatile uint32_t x512 = UINT32_MAX;
	static uint64_t t91 = 59026LLU;

    t91 = (x509/(x510&(x511^x512)));

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x513 = INT32_MAX;
	static int32_t x514 = -30830999;
	uint16_t x515 = 24595U;
	int16_t x516 = -1;

    t92 = (x513/(x514&(x515^x516)));

    if (t92 != -69) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x517 = UINT16_MAX;
	uint16_t x518 = UINT16_MAX;
	int64_t x519 = INT64_MIN;
	int8_t x520 = 8;

    t93 = (x517/(x518&(x519^x520)));

    if (t93 != 8191LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x521 = -1;
	static uint16_t x523 = UINT16_MAX;
	static int8_t x524 = INT8_MAX;

    t94 = (x521/(x522&(x523^x524)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x525 = UINT16_MAX;
	int16_t x526 = 6567;
	uint8_t x528 = UINT8_MAX;
	int32_t t95 = -64820;

    t95 = (x525/(x526&(x527^x528)));

    if (t95 != 10) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x531 = 13U;
	int8_t x532 = -1;
	int32_t t96 = 494;

    t96 = (x529/(x530&(x531^x532)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x533 = -1;
	static volatile uint64_t x534 = 186310412LLU;
	static int16_t x535 = -1;
	int32_t x536 = INT32_MIN;
	volatile uint64_t t97 = 3157891924976LLU;

    t97 = (x533/(x534&(x535^x536)));

    if (t97 != 99010806082LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x537 = UINT8_MAX;
	int32_t x538 = INT32_MIN;
	volatile int32_t x539 = INT32_MIN;
	int32_t x540 = 540;
	static int32_t t98 = -43354935;

    t98 = (x537/(x538&(x539^x540)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x541 = 1;
	volatile uint16_t x542 = 2901U;
	volatile int16_t x543 = INT16_MIN;
	static uint64_t x544 = UINT64_MAX;
	uint64_t t99 = 412839663271327LLU;

    t99 = (x541/(x542&(x543^x544)));

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x545 = -1LL;
	volatile uint16_t x546 = 20313U;
	uint8_t x547 = UINT8_MAX;
	volatile int64_t t100 = 0LL;

    t100 = (x545/(x546&(x547^x548)));

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x549 = 0;
	int8_t x550 = -1;
	uint8_t x551 = UINT8_MAX;
	int16_t x552 = -1;
	volatile int32_t t101 = 30;

    t101 = (x549/(x550&(x551^x552)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x554 = INT32_MIN;
	int16_t x555 = INT16_MIN;
	int64_t x556 = INT64_MIN;
	int64_t t102 = 19120540LL;

    t102 = (x553/(x554&(x555^x556)));

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x557 = -1;
	int8_t x558 = -1;
	volatile int64_t x559 = 7LL;
	static volatile int64_t x560 = -144LL;
	volatile int64_t t103 = -1975LL;

    t103 = (x557/(x558&(x559^x560)));

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x562 = -1;
	static int16_t x563 = -1;
	uint32_t x564 = 0U;
	volatile uint32_t t104 = 16497U;

    t104 = (x561/(x562&(x563^x564)));

    if (t104 != 0U) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x571 = INT8_MIN;
	uint32_t x572 = UINT32_MAX;
	uint32_t t105 = 152448U;

    t105 = (x569/(x570&(x571^x572)));

    if (t105 != 33818382U) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x573 = 235463052035289402LLU;
	int16_t x575 = 12;
	static int64_t x576 = 8411177444793LL;
	volatile uint64_t t106 = 17LLU;

    t106 = (x573/(x574&(x575^x576)));

    if (t106 != 27994LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x577 = INT16_MIN;
	int32_t x578 = 19;
	uint64_t x579 = 5729099142261631LLU;
	static uint64_t x580 = 4LLU;
	uint64_t t107 = 0LLU;

    t107 = (x577/(x578&(x579^x580)));

    if (t107 != 970881267037343097LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int32_t x587 = -72716279;
	int64_t x588 = 156710427997247LL;
	int64_t t108 = 495622049150693LL;

    t108 = (x585/(x586&(x587^x588)));

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x589 = -1;
	uint8_t x590 = 5U;
	int16_t x591 = INT16_MIN;
	static volatile int8_t x592 = 1;
	int32_t t109 = -17159;

    t109 = (x589/(x590&(x591^x592)));

    if (t109 != -1) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x593 = INT64_MAX;
	int32_t x595 = -168726;
	volatile int64_t t110 = 1LL;

    t110 = (x593/(x594&(x595^x596)));

    if (t110 != 11893502563LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x597 = INT64_MIN;
	volatile uint64_t x598 = 18348967014469784LLU;
	int16_t x599 = -2004;
	volatile uint64_t t111 = 34323071152429590LLU;

    t111 = (x597/(x598&(x599^x600)));

    if (t111 != 67818912035696880LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static int8_t x601 = INT8_MAX;
	static uint8_t x603 = 0U;
	int64_t x604 = 901LL;
	static volatile int64_t t112 = 51833869049121389LL;

    t112 = (x601/(x602&(x603^x604)));

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x605 = 1647;
	static volatile uint8_t x606 = 2U;
	static volatile int32_t x608 = INT32_MIN;
	static int32_t t113 = 27533;

    t113 = (x605/(x606&(x607^x608)));

    if (t113 != 823) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x609 = 6779711295806018948LLU;
	int64_t x610 = INT64_MIN;
	uint64_t x611 = 2527237444419332991LLU;
	volatile uint64_t t114 = 38030276744904LLU;

    t114 = (x609/(x610&(x611^x612)));

    if (t114 != 0LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x617 = INT16_MAX;
	int64_t x619 = INT64_MAX;
	uint64_t x620 = 24277716550548994LLU;
	uint64_t t115 = 4LLU;

    t115 = (x617/(x618&(x619^x620)));

    if (t115 != 270LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x621 = INT32_MIN;
	int16_t x624 = 3;
	uint64_t t116 = 24195654807212LLU;

    t116 = (x621/(x622&(x623^x624)));

    if (t116 != 1232419339LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x625 = 2853951483836230LLU;
	static int16_t x626 = -29;
	uint64_t x627 = UINT64_MAX;
	static int16_t x628 = 0;
	volatile uint64_t t117 = 1062340563909953LLU;

    t117 = (x625/(x626&(x627^x628)));

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x629 = UINT32_MAX;
	int16_t x630 = -1;
	static uint32_t x631 = UINT32_MAX;
	uint32_t x632 = 567372425U;

    t118 = (x629/(x630&(x631^x632)));

    if (t118 != 1U) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint32_t x634 = UINT32_MAX;
	int64_t x635 = 19519544005909LL;
	volatile int64_t t119 = -848159212071LL;

    t119 = (x633/(x634&(x635^x636)));

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x641 = 11LLU;
	int64_t x643 = INT64_MIN;
	int16_t x644 = -8603;
	static uint64_t t120 = 673576051LLU;

    t120 = (x641/(x642&(x643^x644)));

    if (t120 != 0LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x645 = 7640708U;
	int8_t x646 = -1;
	uint32_t x647 = UINT32_MAX;
	uint32_t t121 = 1883188U;

    t121 = (x645/(x646&(x647^x648)));

    if (t121 != 0U) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x649 = INT8_MIN;
	uint8_t x651 = UINT8_MAX;
	volatile int8_t x652 = INT8_MIN;

    t122 = (x649/(x650&(x651^x652)));

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x653 = INT8_MIN;
	volatile int64_t x654 = 132003467LL;
	int16_t x656 = INT16_MIN;

    t123 = (x653/(x654&(x655^x656)));

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x657 = INT16_MIN;
	int8_t x658 = INT8_MIN;
	static int64_t x660 = INT64_MIN;
	int64_t t124 = 723444027044701212LL;

    t124 = (x657/(x658&(x659^x660)));

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x661 = -1;
	int32_t x662 = INT32_MAX;
	static volatile uint64_t x663 = 7949098554919090202LLU;
	int8_t x664 = INT8_MIN;
	volatile uint64_t t125 = 30472622261LLU;

    t125 = (x661/(x662&(x663^x664)));

    if (t125 != 8762677184LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x669 = INT32_MAX;
	volatile uint64_t x670 = UINT64_MAX;
	static uint64_t x671 = 122704683370843LLU;

    t126 = (x669/(x670&(x671^x672)));

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint8_t x675 = UINT8_MAX;
	int64_t t127 = -425LL;

    t127 = (x673/(x674&(x675^x676)));

    if (t127 != 4073460639759LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static int8_t x677 = INT8_MIN;
	static uint32_t x679 = 2U;
	uint8_t x680 = 36U;
	uint32_t t128 = 418484U;

    t128 = (x677/(x678&(x679^x680)));

    if (t128 != 113025451U) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x681 = 39263537U;
	static volatile int16_t x682 = -1;

    t129 = (x681/(x682&(x683^x684)));

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x685 = INT32_MIN;
	uint64_t x687 = UINT64_MAX;
	uint64_t t130 = 7932463540LLU;

    t130 = (x685/(x686&(x687^x688)));

    if (t130 != 1LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x689 = INT32_MIN;
	volatile int64_t x690 = INT64_MIN;
	int32_t x691 = INT32_MAX;
	volatile int32_t x692 = -1;

    t131 = (x689/(x690&(x691^x692)));

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x697 = 881643313233353LL;
	volatile int32_t x698 = INT32_MIN;
	static int16_t x699 = -1;
	uint16_t x700 = UINT16_MAX;
	volatile int64_t t132 = 2225800514LL;

    t132 = (x697/(x698&(x699^x700)));

    if (t132 != -410547LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x702 = UINT8_MAX;
	static int16_t x703 = INT16_MAX;
	static int16_t x704 = INT16_MIN;
	volatile int32_t t133 = -1;

    t133 = (x701/(x702&(x703^x704)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x705 = INT8_MAX;
	int64_t x706 = -1LL;
	static volatile int64_t x707 = 23LL;
	uint64_t x708 = 2652182126345462LLU;
	uint64_t t134 = 64091314926654855LLU;

    t134 = (x705/(x706&(x707^x708)));

    if (t134 != 0LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x709 = INT64_MIN;
	uint64_t x710 = UINT64_MAX;
	static uint32_t x711 = UINT32_MAX;
	static uint64_t x712 = 1598LLU;

    t135 = (x709/(x710&(x711^x712)));

    if (t135 != 2147484447LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint16_t x717 = 174U;
	int8_t x718 = -59;
	int16_t x719 = INT16_MIN;
	int8_t x720 = INT8_MAX;
	int32_t t136 = 420;

    t136 = (x717/(x718&(x719^x720)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x721 = INT8_MAX;
	static int8_t x723 = INT8_MIN;
	int16_t x724 = 14;
	static volatile int32_t t137 = 227762731;

    t137 = (x721/(x722&(x723^x724)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x725 = INT64_MIN;
	static uint16_t x727 = UINT16_MAX;
	int32_t x728 = 1;
	volatile int64_t t138 = -237312019LL;

    t138 = (x725/(x726&(x727^x728)));

    if (t138 != -140741783453700LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x730 = -1;
	int32_t x732 = -4;

    t139 = (x729/(x730&(x731^x732)));

    if (t139 != -100) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x734 = 6U;
	int64_t x735 = INT64_MIN;
	int64_t x736 = 532975355024690563LL;

    t140 = (x733/(x734&(x735^x736)));

    if (t140 != -39966943974LL) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint32_t x741 = 257U;
	int8_t x742 = INT8_MAX;
	uint8_t x743 = UINT8_MAX;
	volatile uint32_t t141 = 123U;

    t141 = (x741/(x742&(x743^x744)));

    if (t141 != 25U) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x753 = -1;
	int16_t x755 = INT16_MAX;
	int32_t x756 = INT32_MIN;
	volatile int32_t t142 = 58215237;

    t142 = (x753/(x754&(x755^x756)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x757 = -145305475;
	volatile uint32_t x759 = 7198053U;
	volatile uint16_t x760 = 0U;
	int64_t t143 = -3092138863361LL;

    t143 = (x757/(x758&(x759^x760)));

    if (t143 != -20LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x761 = INT8_MAX;
	uint8_t x762 = 11U;
	int16_t x764 = -1;
	volatile uint32_t t144 = 112530U;

    t144 = (x761/(x762&(x763^x764)));

    if (t144 != 63U) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint64_t x765 = 29808012LLU;
	int16_t x766 = -1;
	static uint32_t x767 = 3U;
	volatile uint64_t t145 = 7271LLU;

    t145 = (x765/(x766&(x767^x768)));

    if (t145 != 139LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x770 = UINT16_MAX;
	int64_t x771 = INT64_MIN;
	int8_t x772 = INT8_MIN;
	int64_t t146 = -55242186508LL;

    t146 = (x769/(x770&(x771^x772)));

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x773 = UINT8_MAX;
	uint64_t x774 = UINT64_MAX;
	int8_t x775 = -1;
	int32_t x776 = -456396294;

    t147 = (x773/(x774&(x775^x776)));

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x790 = -2LL;
	int16_t x791 = -1;
	int16_t x792 = INT16_MIN;
	volatile int64_t t148 = -490193535794LL;

    t148 = (x789/(x790&(x791^x792)));

    if (t148 != -1LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x793 = UINT32_MAX;
	int32_t x794 = -1;
	int16_t x795 = INT16_MIN;
	volatile uint32_t t149 = 0U;

    t149 = (x793/(x794&(x795^x796)));

    if (t149 != 1U) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x802 = 11543U;
	uint32_t x803 = 266234256U;
	static uint64_t x804 = 306128886671831LLU;
	static volatile uint64_t t150 = 304LLU;

    t150 = (x801/(x802&(x803^x804)));

    if (t150 != 2635249153387078802LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x806 = 1044437U;
	static int8_t x807 = -1;

    t151 = (x805/(x806&(x807^x808)));

    if (t151 != -34507993LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x809 = 18817LLU;
	int32_t x811 = INT32_MIN;
	uint64_t t152 = 5963580625LLU;

    t152 = (x809/(x810&(x811^x812)));

    if (t152 != 1344LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x813 = -17653469934334370LL;
	volatile int16_t x814 = -243;
	int64_t x815 = INT64_MIN;
	static uint8_t x816 = UINT8_MAX;
	volatile int64_t t153 = 431859097396445364LL;

    t153 = (x813/(x814&(x815^x816)));

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x818 = -370LL;
	int32_t x819 = INT32_MIN;
	int32_t x820 = -1;
	volatile int64_t t154 = 591507310LL;

    t154 = (x817/(x818&(x819^x820)));

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint8_t x822 = UINT8_MAX;
	static volatile int8_t x823 = INT8_MAX;

    t155 = (x821/(x822&(x823^x824)));

    if (t155 != -1192) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x825 = INT8_MIN;
	static int64_t x827 = -15087660264068214LL;
	int8_t x828 = INT8_MAX;
	int64_t t156 = 166LL;

    t156 = (x825/(x826&(x827^x828)));

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x829 = INT32_MIN;
	volatile uint32_t x831 = UINT32_MAX;
	volatile int16_t x832 = -4036;
	uint32_t t157 = 11554301U;

    t157 = (x829/(x830&(x831^x832)));

    if (t157 != 532214U) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x833 = 7;
	int32_t x834 = INT32_MAX;
	static uint32_t x835 = 1U;
	static uint32_t x836 = UINT32_MAX;
	uint32_t t158 = 1U;

    t158 = (x833/(x834&(x835^x836)));

    if (t158 != 0U) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x838 = 31U;
	int64_t x840 = -1LL;
	volatile int64_t t159 = 4433310508606161LL;

    t159 = (x837/(x838&(x839^x840)));

    if (t159 != 4LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x844 = 194083647541637LL;
	int64_t t160 = -8032LL;

    t160 = (x841/(x842&(x843^x844)));

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x850 = INT32_MIN;
	uint8_t x851 = 71U;
	static uint64_t x852 = 70455071627615598LLU;
	static uint64_t t161 = 16145LLU;

    t161 = (x849/(x850&(x851^x852)));

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x853 = 6602;
	volatile int8_t x854 = -1;
	int16_t x855 = INT16_MIN;
	int16_t x856 = 520;
	int32_t t162 = -9;

    t162 = (x853/(x854&(x855^x856)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int8_t x857 = INT8_MAX;
	static volatile int8_t x858 = INT8_MIN;
	static volatile int32_t x859 = 805264048;
	volatile int32_t t163 = 4331458;

    t163 = (x857/(x858&(x859^x860)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x865 = 228;
	int32_t x866 = INT32_MIN;
	volatile int8_t x867 = INT8_MAX;
	volatile int32_t x868 = INT32_MIN;
	int32_t t164 = 29105780;

    t164 = (x865/(x866&(x867^x868)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x873 = INT8_MAX;
	uint64_t x874 = 531216068326LLU;
	volatile uint64_t x875 = UINT64_MAX;
	volatile uint16_t x876 = UINT16_MAX;

    t165 = (x873/(x874&(x875^x876)));

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x877 = -1;
	int16_t x878 = -1;
	int8_t x879 = -4;
	int64_t x880 = INT64_MAX;
	int64_t t166 = -512LL;

    t166 = (x877/(x878&(x879^x880)));

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x881 = 1;
	uint32_t x883 = 3U;
	int8_t x884 = INT8_MAX;
	volatile uint32_t t167 = 31U;

    t167 = (x881/(x882&(x883^x884)));

    if (t167 != 0U) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x889 = -11193904;
	uint8_t x890 = 11U;
	int8_t x891 = INT8_MIN;
	uint64_t x892 = 29287LLU;

    t168 = (x889/(x890&(x891^x892)));

    if (t168 != 6148914691232785904LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x893 = -21;
	static int8_t x894 = -1;
	int64_t x895 = -1LL;
	uint16_t x896 = UINT16_MAX;
	int64_t t169 = -11107753LL;

    t169 = (x893/(x894&(x895^x896)));

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x901 = UINT32_MAX;
	static int64_t x904 = -1LL;
	int64_t t170 = 33327266208722LL;

    t170 = (x901/(x902&(x903^x904)));

    if (t170 != -477218588LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x909 = -1;
	int8_t x910 = INT8_MAX;
	int16_t x911 = -96;
	static volatile int16_t x912 = -1;
	volatile int32_t t171 = 14104826;

    t171 = (x909/(x910&(x911^x912)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x913 = -1LL;
	int8_t x914 = 28;
	uint64_t x915 = 803626LLU;
	volatile uint64_t t172 = 1088497LLU;

    t172 = (x913/(x914&(x915^x916)));

    if (t172 != 922337203685477580LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x925 = INT64_MIN;
	int16_t x926 = INT16_MIN;
	int16_t x927 = 3;
	volatile int16_t x928 = INT16_MIN;
	volatile int64_t t173 = 15812811561082526LL;

    t173 = (x925/(x926&(x927^x928)));

    if (t173 != 281474976710656LL) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x929 = -15;
	uint16_t x930 = 284U;
	int32_t x931 = INT32_MAX;
	int32_t x932 = 261168517;
	int32_t t174 = 8317;

    t174 = (x929/(x930&(x931^x932)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint64_t x933 = 30916610459306LLU;
	volatile int16_t x934 = INT16_MIN;
	static int16_t x935 = 363;
	volatile int8_t x936 = -1;
	volatile uint64_t t175 = 3544189985695031660LLU;

    t175 = (x933/(x934&(x935^x936)));

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x937 = 57U;
	int8_t x938 = -1;
	volatile int64_t x939 = -1LL;
	int64_t t176 = 39LL;

    t176 = (x937/(x938&(x939^x940)));

    if (t176 != -1LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x942 = -1;
	uint32_t x943 = 2313852U;
	int16_t x944 = -1;
	uint32_t t177 = 925188U;

    t177 = (x941/(x942&(x943^x944)));

    if (t177 != 0U) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x945 = INT64_MAX;
	volatile int16_t x946 = -5;
	int64_t x947 = -20356127752395LL;

    t178 = (x945/(x946&(x947^x948)));

    if (t178 != -453100LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x949 = INT16_MIN;
	int64_t x950 = 1183LL;
	volatile uint16_t x951 = 2U;
	static int64_t x952 = 4130029314047801LL;
	static volatile int64_t t179 = 30837669406299LL;

    t179 = (x949/(x950&(x951^x952)));

    if (t179 != -31LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x953 = 140697595U;
	int64_t x955 = INT64_MIN;
	int32_t x956 = INT32_MAX;
	volatile int64_t t180 = 3LL;

    t180 = (x953/(x954&(x955^x956)));

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x957 = INT64_MAX;
	volatile uint32_t x958 = 7562385U;
	static uint8_t x959 = 0U;
	int16_t x960 = INT16_MIN;

    t181 = (x957/(x958&(x959^x960)));

    if (t181 != 1223804246568LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x966 = -1;
	int16_t x967 = -1;
	uint32_t x968 = 1879222403U;
	volatile uint32_t t182 = 368282U;

    t182 = (x965/(x966&(x967^x968)));

    if (t182 != 1U) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x969 = 13U;
	volatile uint8_t x970 = UINT8_MAX;
	uint64_t t183 = 44038418510193823LLU;

    t183 = (x969/(x970&(x971^x972)));

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x973 = INT64_MAX;
	int32_t x975 = INT32_MAX;
	volatile int8_t x976 = INT8_MAX;
	static volatile int64_t t184 = -6LL;

    t184 = (x973/(x974&(x975^x976)));

    if (t184 != 4294967552LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x977 = INT32_MIN;
	int16_t x978 = INT16_MIN;
	uint16_t x979 = UINT16_MAX;
	int64_t x980 = 726277007LL;
	int64_t t185 = -806678208832LL;

    t185 = (x977/(x978&(x979^x980)));

    if (t185 != -2LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x982 = 60;
	static int16_t x984 = 15798;
	volatile uint32_t t186 = 108U;

    t186 = (x981/(x982&(x983^x984)));

    if (t186 != 82595524U) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x985 = -664237418362154928LL;
	int32_t x986 = -1;
	int32_t x987 = INT32_MIN;
	static int64_t x988 = INT64_MIN;
	int64_t t187 = -2340396293743LL;

    t187 = (x985/(x986&(x987^x988)));

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x993 = -1;
	int32_t x994 = -92;
	static volatile int64_t x996 = INT64_MIN;
	volatile int64_t t188 = 193528012055780LL;

    t188 = (x993/(x994&(x995^x996)));

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x997 = 1LLU;
	static int8_t x999 = INT8_MIN;
	uint8_t x1000 = UINT8_MAX;
	uint64_t t189 = 225333010LLU;

    t189 = (x997/(x998&(x999^x1000)));

    if (t189 != 0LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x1002 = 1011U;
	int8_t x1004 = -1;

    t190 = (x1001/(x1002&(x1003^x1004)));

    if (t190 != 4248204U) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x1005 = -16091419291LL;
	int32_t x1006 = INT32_MAX;
	int8_t x1008 = INT8_MIN;
	int64_t t191 = -2119846653880LL;

    t191 = (x1005/(x1006&(x1007^x1008)));

    if (t191 != -7LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x1013 = 11943034LLU;
	volatile int32_t x1014 = 5;
	uint32_t x1015 = 157186U;
	int64_t x1016 = INT64_MAX;
	static uint64_t t192 = 15189240LLU;

    t192 = (x1013/(x1014&(x1015^x1016)));

    if (t192 != 2388606LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x1017 = INT64_MAX;
	static uint64_t x1019 = UINT64_MAX;
	uint64_t t193 = 4032482LLU;

    t193 = (x1017/(x1018&(x1019^x1020)));

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x1021 = INT32_MAX;
	uint8_t x1022 = 119U;
	uint32_t x1024 = 3611784U;

    t194 = (x1021/(x1022&(x1023^x1024)));

    if (t194 != 18046081U) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x1025 = INT16_MIN;
	volatile int64_t x1026 = 178034975000045LL;
	int32_t x1027 = 962796;
	volatile uint16_t x1028 = UINT16_MAX;

    t195 = (x1025/(x1026&(x1027^x1028)));

    if (t195 != -1LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x1029 = INT16_MIN;
	static int8_t x1030 = -2;
	uint8_t x1031 = 20U;
	int32_t x1032 = INT32_MIN;
	volatile int32_t t196 = -887;

    t196 = (x1029/(x1030&(x1031^x1032)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x1033 = -46;
	uint32_t x1034 = 1007U;
	uint8_t x1035 = 24U;
	volatile int64_t x1036 = -1LL;
	int64_t t197 = -18213795316701LL;

    t197 = (x1033/(x1034&(x1035^x1036)));

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static int32_t x1037 = INT32_MAX;
	static volatile uint16_t x1038 = UINT16_MAX;
	int16_t x1039 = 4;
	int32_t x1040 = INT32_MIN;
	volatile int32_t t198 = -5;

    t198 = (x1037/(x1038&(x1039^x1040)));

    if (t198 != 536870911) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x1041 = -1;
	static int16_t x1042 = INT16_MIN;
	static uint16_t x1044 = UINT16_MAX;
	volatile int32_t t199 = -411705122;

    t199 = (x1041/(x1042&(x1043^x1044)));

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

