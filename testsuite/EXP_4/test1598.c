
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

static uint8_t x4 = 11U;
uint8_t x9 = 21U;
int8_t x14 = 28;
uint16_t x18 = 78U;
volatile int32_t x25 = -1;
static uint64_t x28 = UINT64_MAX;
int8_t x31 = INT8_MIN;
int8_t x40 = INT8_MIN;
volatile uint64_t t9 = 547623311592LLU;
volatile int8_t x41 = -56;
int32_t t11 = 48838070;
uint64_t x54 = 41LLU;
volatile uint64_t t13 = 17548820126347870LLU;
int32_t x59 = INT32_MIN;
int32_t x63 = INT32_MIN;
volatile uint64_t t15 = UINT64_MAX;
static volatile int8_t x66 = INT8_MIN;
static volatile uint32_t t17 = 116774320U;
int64_t x76 = INT64_MAX;
volatile int16_t x78 = -1300;
static int8_t x83 = INT8_MIN;
uint16_t x85 = 0U;
volatile uint16_t x87 = 5U;
uint32_t t21 = 6035U;
int16_t x91 = INT16_MIN;
int16_t x92 = INT16_MAX;
int32_t t22 = 14498655;
uint32_t x103 = 3151U;
int64_t x112 = INT64_MIN;
static int32_t x127 = -1;
int32_t t31 = 3292005;
int32_t x129 = INT32_MIN;
volatile int16_t x131 = INT16_MIN;
int32_t x132 = INT32_MIN;
int64_t x136 = INT64_MAX;
int8_t x140 = 62;
uint32_t t37 = 3893992U;
static int16_t x155 = -4116;
int64_t x158 = 648666LL;
static int64_t x161 = -1LL;
static int32_t t41 = 2345;
int32_t x175 = INT32_MAX;
static int8_t x177 = INT8_MIN;
int32_t x179 = -1;
uint32_t t46 = UINT32_MAX;
volatile uint32_t x189 = 93U;
volatile uint16_t x191 = 13U;
uint32_t x198 = 21057U;
volatile int16_t x205 = 2;
int64_t x206 = -14LL;
static volatile int64_t t51 = 125758317694807593LL;
volatile int32_t x222 = -1;
int32_t x223 = INT32_MIN;
volatile int32_t x229 = INT32_MIN;
static int8_t x232 = INT8_MAX;
static uint32_t x236 = UINT32_MAX;
volatile int32_t x242 = INT32_MAX;
volatile int64_t t58 = 46112147722566483LL;
int16_t x245 = 1868;
int16_t x256 = INT16_MIN;
uint32_t x259 = UINT32_MAX;
int8_t x262 = INT8_MIN;
static uint32_t x266 = 65270U;
static int8_t x268 = -3;
uint8_t x270 = 29U;
int8_t x271 = 5;
volatile int64_t x272 = INT64_MAX;
int32_t t65 = 1810236;
static int8_t x275 = -1;
volatile uint64_t t68 = 395LLU;
int64_t x295 = INT64_MIN;
int8_t x297 = INT8_MIN;
int32_t x300 = INT32_MIN;
volatile int32_t t73 = 3083;
uint16_t x306 = UINT16_MAX;
int8_t x309 = -1;
static int64_t x316 = INT64_MIN;
static uint32_t t76 = 22U;
int16_t x320 = INT16_MIN;
int64_t t77 = -28078375487631267LL;
static uint16_t x326 = UINT16_MAX;
int64_t x327 = INT64_MIN;
int8_t x333 = INT8_MIN;
int16_t x334 = -992;
int16_t x335 = 1;
volatile int32_t t79 = -20279230;
int8_t x337 = INT8_MAX;
volatile int8_t x338 = INT8_MIN;
volatile int32_t x339 = INT32_MIN;
uint8_t x340 = 0U;
int32_t t80 = -2527105;
volatile int64_t x346 = INT64_MIN;
static int16_t x354 = INT16_MIN;
int32_t t84 = 165;
int16_t x357 = INT16_MAX;
int8_t x360 = -1;
volatile int64_t t87 = 2313558LL;
int32_t x372 = INT32_MIN;
static int64_t t88 = 0LL;
int64_t x382 = INT64_MIN;
uint8_t x385 = UINT8_MAX;
int16_t x389 = INT16_MIN;
int32_t x392 = INT32_MIN;
volatile int32_t x395 = INT32_MIN;
int32_t x396 = -1;
volatile int8_t x399 = -1;
static volatile int64_t x404 = INT64_MIN;
volatile int32_t t97 = INT32_MIN;
int16_t x415 = -3938;
uint8_t x418 = 76U;
volatile int16_t x419 = INT16_MIN;
int32_t x421 = INT32_MIN;
static int16_t x447 = -1;
int16_t x452 = 3509;
static volatile uint64_t t107 = 322646415933LLU;
volatile int32_t t109 = -21485;
static uint16_t x470 = UINT16_MAX;
static volatile int64_t t113 = INT64_MIN;
static int16_t x493 = INT16_MIN;
int16_t x499 = 1;
int32_t x501 = INT32_MIN;
static volatile int64_t x506 = -1LL;
int64_t x516 = INT64_MIN;
int32_t t119 = -463679780;
static int64_t t121 = -174944426111260LL;
int8_t x534 = -1;
int16_t x535 = 6;
volatile int64_t x543 = INT64_MIN;
volatile uint64_t t127 = 1066195813LLU;
int64_t x558 = -14LL;
static uint64_t x563 = UINT64_MAX;
int16_t x567 = 0;
uint16_t x576 = 19U;
static volatile int32_t t134 = 10420;
volatile int32_t x583 = -403;
uint32_t x592 = 4784217U;
volatile int64_t t142 = 0LL;
int32_t x615 = -4868204;
uint64_t t143 = 7LLU;
int64_t x617 = INT64_MIN;
int8_t x618 = INT8_MIN;
volatile uint64_t x626 = UINT64_MAX;
int32_t x627 = INT32_MIN;
int8_t x629 = 0;
int64_t x631 = INT64_MAX;
static int32_t t147 = -530;
int32_t x634 = INT32_MIN;
uint64_t x636 = 26072139699914LLU;
volatile uint64_t t148 = 240983LLU;
volatile int8_t x647 = INT8_MIN;
static uint16_t x652 = 23826U;
volatile int64_t x655 = INT64_MIN;
static int8_t x656 = -1;
static int16_t x659 = -1;
int16_t x665 = 59;
uint32_t x666 = UINT32_MAX;
uint8_t x673 = 3U;
int64_t x680 = INT64_MIN;
uint32_t x682 = 10664982U;
static volatile int32_t x684 = 189910;
static int64_t x687 = INT64_MIN;
static int64_t x690 = 9LL;
static int32_t x694 = -1;
volatile int32_t t162 = -1;
uint64_t x708 = 303047045LLU;
int16_t x724 = -1;
uint16_t x726 = UINT16_MAX;
int8_t x728 = -3;
volatile int32_t x729 = INT32_MIN;
uint8_t x743 = UINT8_MAX;
int32_t x744 = INT32_MIN;
uint64_t x747 = 31LLU;
static int64_t x749 = INT64_MAX;
uint16_t x750 = UINT16_MAX;
static int8_t x751 = INT8_MIN;
volatile uint8_t x752 = UINT8_MAX;
static uint8_t x756 = 21U;
uint8_t x760 = 1U;
int64_t x762 = INT64_MIN;
int64_t t178 = INT64_MAX;
int32_t x776 = -1;
volatile uint8_t x782 = 2U;
uint16_t x784 = 112U;
static volatile int8_t x789 = -1;
uint32_t t186 = 403U;
int16_t x812 = INT16_MIN;
int16_t x816 = INT16_MIN;
int16_t x819 = 1;
int8_t x821 = -14;
uint16_t x829 = UINT16_MAX;
int32_t x830 = INT32_MAX;
volatile int16_t x834 = -560;
volatile int32_t x835 = 16631839;
int8_t x836 = INT8_MAX;
uint8_t x840 = 5U;
uint8_t x842 = 1U;
static volatile int8_t x849 = INT8_MAX;
volatile uint8_t x850 = 56U;
static uint8_t x852 = UINT8_MAX;
volatile int32_t t197 = -5191951;
int32_t x854 = INT32_MIN;


void f0(void) {
    	int16_t x1 = INT16_MIN;
	uint32_t x2 = 18U;
	int8_t x3 = INT8_MIN;
	volatile uint32_t t0 = 20U;

    t0 = (x1-(x2*(x3>x4)));

    if (t0 != 4294934528U) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x5 = -59;
	static volatile int16_t x6 = -1;
	int32_t x7 = INT32_MIN;
	static int8_t x8 = -1;
	volatile int32_t t1 = 5822930;

    t1 = (x5-(x6*(x7>x8)));

    if (t1 != -59) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint64_t x10 = 5210900716691LLU;
	int64_t x11 = -1152LL;
	static volatile uint64_t x12 = UINT64_MAX;
	volatile uint64_t t2 = 245437658139568352LLU;

    t2 = (x9-(x10*(x11>x12)));

    if (t2 != 21LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = 2542850621041LL;
	static int64_t x15 = INT64_MAX;
	volatile uint8_t x16 = UINT8_MAX;
	int64_t t3 = 13969063012669LL;

    t3 = (x13-(x14*(x15>x16)));

    if (t3 != 2542850621013LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = 403449475945083LLU;
	int8_t x19 = 43;
	int16_t x20 = 29;
	volatile uint64_t t4 = 1694LLU;

    t4 = (x17-(x18*(x19>x20)));

    if (t4 != 403449475945005LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x21 = INT8_MAX;
	int32_t x22 = INT32_MAX;
	static volatile int16_t x23 = -2196;
	static int64_t x24 = INT64_MIN;
	int32_t t5 = -1;

    t5 = (x21-(x22*(x23>x24)));

    if (t5 != -2147483520) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile uint32_t x26 = UINT32_MAX;
	int16_t x27 = 7306;
	volatile uint32_t t6 = UINT32_MAX;

    t6 = (x25-(x26*(x27>x28)));

    if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MIN;
	uint32_t x30 = 15U;
	int16_t x32 = INT16_MIN;
	static volatile uint32_t t7 = 161999U;

    t7 = (x29-(x30*(x31>x32)));

    if (t7 != 2147483633U) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = -102458504521826784LL;
	uint16_t x34 = 10U;
	int16_t x35 = INT16_MAX;
	int64_t x36 = 3106427976900924LL;
	static int64_t t8 = 377LL;

    t8 = (x33-(x34*(x35>x36)));

    if (t8 != -102458504521826784LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x37 = UINT64_MAX;
	static int32_t x38 = INT32_MIN;
	int32_t x39 = INT32_MAX;

    t9 = (x37-(x38*(x39>x40)));

    if (t9 != 2147483647LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x42 = INT8_MIN;
	volatile int32_t x43 = -1;
	uint32_t x44 = 101U;
	int32_t t10 = -2525744;

    t10 = (x41-(x42*(x43>x44)));

    if (t10 != 72) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x45 = UINT16_MAX;
	int8_t x46 = 28;
	int32_t x47 = INT32_MIN;
	volatile uint8_t x48 = UINT8_MAX;

    t11 = (x45-(x46*(x47>x48)));

    if (t11 != 65535) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x49 = 1119441529U;
	uint16_t x50 = 39U;
	int64_t x51 = 0LL;
	int32_t x52 = INT32_MIN;
	volatile uint32_t t12 = 657U;

    t12 = (x49-(x50*(x51>x52)));

    if (t12 != 1119441490U) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint16_t x53 = 473U;
	static volatile int64_t x55 = INT64_MIN;
	uint8_t x56 = 9U;

    t13 = (x53-(x54*(x55>x56)));

    if (t13 != 473LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = -5;
	uint16_t x58 = 8U;
	int64_t x60 = INT64_MIN;
	static volatile int32_t t14 = 1;

    t14 = (x57-(x58*(x59>x60)));

    if (t14 != -13) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint64_t x61 = UINT64_MAX;
	uint64_t x62 = 1584335LLU;
	volatile int32_t x64 = INT32_MAX;

    t15 = (x61-(x62*(x63>x64)));

    if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x65 = -1;
	int16_t x67 = INT16_MIN;
	int32_t x68 = -13;
	volatile int32_t t16 = 43;

    t16 = (x65-(x66*(x67>x68)));

    if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x69 = UINT16_MAX;
	uint32_t x70 = UINT32_MAX;
	static int16_t x71 = INT16_MIN;
	static volatile int64_t x72 = 111624LL;

    t17 = (x69-(x70*(x71>x72)));

    if (t17 != 65535U) { NG(); } else { ; }
	
}

void f18(void) {
    	static int64_t x73 = INT64_MIN;
	int64_t x74 = INT64_MIN;
	volatile int64_t x75 = -3790942LL;
	volatile int64_t t18 = INT64_MIN;

    t18 = (x73-(x74*(x75>x76)));

    if (t18 != INT64_MIN) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = INT8_MAX;
	volatile int16_t x79 = INT16_MIN;
	int32_t x80 = 1970540;
	int32_t t19 = 63;

    t19 = (x77-(x78*(x79>x80)));

    if (t19 != 127) { NG(); } else { ; }
	
}

void f20(void) {
    	static int32_t x81 = 195;
	int64_t x82 = INT64_MAX;
	static uint8_t x84 = UINT8_MAX;
	volatile int64_t t20 = -40702LL;

    t20 = (x81-(x82*(x83>x84)));

    if (t20 != 195LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x86 = 4112195U;
	uint32_t x88 = 8U;

    t21 = (x85-(x86*(x87>x88)));

    if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int8_t x89 = INT8_MIN;
	int32_t x90 = INT32_MAX;

    t22 = (x89-(x90*(x91>x92)));

    if (t22 != -128) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = -1;
	volatile uint32_t x94 = 607302610U;
	static int16_t x95 = -1;
	uint64_t x96 = 36LLU;
	uint32_t t23 = 1191U;

    t23 = (x93-(x94*(x95>x96)));

    if (t23 != 3687664685U) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x97 = 1;
	uint64_t x98 = UINT64_MAX;
	volatile int16_t x99 = INT16_MIN;
	int32_t x100 = INT32_MIN;
	static uint64_t t24 = 1531450968554938554LLU;

    t24 = (x97-(x98*(x99>x100)));

    if (t24 != 2LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = INT16_MAX;
	static volatile uint32_t x102 = 13280U;
	uint32_t x104 = 117U;
	uint32_t t25 = 22299U;

    t25 = (x101-(x102*(x103>x104)));

    if (t25 != 19487U) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = 10LL;
	int32_t x106 = -2;
	int16_t x107 = -1;
	int64_t x108 = INT64_MIN;
	volatile int64_t t26 = 2753545922256LL;

    t26 = (x105-(x106*(x107>x108)));

    if (t26 != 12LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = INT16_MIN;
	static int64_t x110 = -1LL;
	int32_t x111 = -25;
	volatile int64_t t27 = 7579151330097041LL;

    t27 = (x109-(x110*(x111>x112)));

    if (t27 != -32767LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = INT16_MIN;
	int32_t x114 = INT32_MAX;
	int16_t x115 = INT16_MIN;
	static int16_t x116 = INT16_MIN;
	volatile int32_t t28 = 17484973;

    t28 = (x113-(x114*(x115>x116)));

    if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = INT32_MIN;
	uint32_t x118 = 57362U;
	int64_t x119 = INT64_MIN;
	uint8_t x120 = UINT8_MAX;
	uint32_t t29 = 1858709U;

    t29 = (x117-(x118*(x119>x120)));

    if (t29 != 2147483648U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x121 = 4U;
	int64_t x122 = -1LL;
	static uint32_t x123 = 224080U;
	int16_t x124 = INT16_MAX;
	volatile int64_t t30 = 266330967LL;

    t30 = (x121-(x122*(x123>x124)));

    if (t30 != 5LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = 30;
	volatile int16_t x126 = -1;
	int16_t x128 = -1;

    t31 = (x125-(x126*(x127>x128)));

    if (t31 != 30) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x130 = INT32_MIN;
	int32_t t32 = -9859;

    t32 = (x129-(x130*(x131>x132)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = INT32_MIN;
	int8_t x134 = 57;
	static uint8_t x135 = 22U;
	int32_t t33 = INT32_MIN;

    t33 = (x133-(x134*(x135>x136)));

    if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x137 = -3481;
	volatile int16_t x138 = -1;
	static int64_t x139 = INT64_MIN;
	volatile int32_t t34 = -392;

    t34 = (x137-(x138*(x139>x140)));

    if (t34 != -3481) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = INT8_MIN;
	volatile int16_t x142 = -57;
	int16_t x143 = INT16_MAX;
	int8_t x144 = 0;
	volatile int32_t t35 = -192763;

    t35 = (x141-(x142*(x143>x144)));

    if (t35 != -71) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x145 = 3U;
	uint64_t x146 = 587449103752041009LLU;
	static uint64_t x147 = UINT64_MAX;
	int64_t x148 = INT64_MIN;
	uint64_t t36 = 36226LLU;

    t36 = (x145-(x146*(x147>x148)));

    if (t36 != 17859294969957510610LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x149 = UINT32_MAX;
	static int8_t x150 = -1;
	uint32_t x151 = 808952714U;
	int16_t x152 = 764;

    t37 = (x149-(x150*(x151>x152)));

    if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = INT32_MAX;
	static int32_t x154 = INT32_MIN;
	static int16_t x156 = INT16_MAX;
	int32_t t38 = INT32_MAX;

    t38 = (x153-(x154*(x155>x156)));

    if (t38 != INT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint32_t x157 = 121180U;
	int8_t x159 = 12;
	int64_t x160 = INT64_MAX;
	int64_t t39 = -1973163296879LL;

    t39 = (x157-(x158*(x159>x160)));

    if (t39 != 121180LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x162 = INT8_MIN;
	int16_t x163 = INT16_MIN;
	static uint32_t x164 = 8485565U;
	int64_t t40 = -4315LL;

    t40 = (x161-(x162*(x163>x164)));

    if (t40 != 127LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x165 = INT8_MIN;
	uint8_t x166 = 0U;
	int64_t x167 = INT64_MIN;
	int16_t x168 = INT16_MIN;

    t41 = (x165-(x166*(x167>x168)));

    if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x169 = 385U;
	uint32_t x170 = 47U;
	static int16_t x171 = -1;
	static int32_t x172 = INT32_MIN;
	volatile uint32_t t42 = 265U;

    t42 = (x169-(x170*(x171>x172)));

    if (t42 != 338U) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint32_t x173 = 41414U;
	int64_t x174 = INT64_MAX;
	volatile int64_t x176 = INT64_MIN;
	volatile int64_t t43 = -23572188732805LL;

    t43 = (x173-(x174*(x175>x176)));

    if (t43 != -9223372036854734393LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint32_t x178 = UINT32_MAX;
	static volatile int16_t x180 = INT16_MAX;
	uint32_t t44 = 4839U;

    t44 = (x177-(x178*(x179>x180)));

    if (t44 != 4294967168U) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x181 = -1;
	int8_t x182 = 13;
	volatile int8_t x183 = 15;
	int8_t x184 = -1;
	int32_t t45 = 66675623;

    t45 = (x181-(x182*(x183>x184)));

    if (t45 != -14) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x185 = UINT32_MAX;
	static int32_t x186 = 42;
	volatile int64_t x187 = INT64_MIN;
	static uint32_t x188 = 3614189U;

    t46 = (x185-(x186*(x187>x188)));

    if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x190 = INT16_MAX;
	uint32_t x192 = 187U;
	volatile uint32_t t47 = 85U;

    t47 = (x189-(x190*(x191>x192)));

    if (t47 != 93U) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint16_t x193 = UINT16_MAX;
	uint32_t x194 = UINT32_MAX;
	int16_t x195 = INT16_MIN;
	static uint8_t x196 = 1U;
	volatile uint32_t t48 = 242U;

    t48 = (x193-(x194*(x195>x196)));

    if (t48 != 65535U) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint32_t x197 = UINT32_MAX;
	int8_t x199 = -1;
	volatile uint32_t x200 = 281634U;
	uint32_t t49 = 445U;

    t49 = (x197-(x198*(x199>x200)));

    if (t49 != 4294946238U) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = INT32_MAX;
	volatile int64_t x202 = 149347546659150LL;
	uint16_t x203 = UINT16_MAX;
	volatile int16_t x204 = INT16_MIN;
	volatile int64_t t50 = 1083699491754646951LL;

    t50 = (x201-(x202*(x203>x204)));

    if (t50 != -149345399175503LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint64_t x207 = 981478678LLU;
	int16_t x208 = INT16_MIN;

    t51 = (x205-(x206*(x207>x208)));

    if (t51 != 2LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x209 = INT32_MIN;
	static int8_t x210 = 0;
	int64_t x211 = 32962775082175LL;
	uint16_t x212 = 25U;
	int32_t t52 = INT32_MIN;

    t52 = (x209-(x210*(x211>x212)));

    if (t52 != INT32_MIN) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x213 = -1;
	static int8_t x214 = 5;
	int64_t x215 = -1LL;
	static int16_t x216 = -1321;
	int32_t t53 = -1305117;

    t53 = (x213-(x214*(x215>x216)));

    if (t53 != -6) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x221 = -4;
	static int8_t x224 = INT8_MIN;
	static int32_t t54 = 2526;

    t54 = (x221-(x222*(x223>x224)));

    if (t54 != -4) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x230 = INT8_MAX;
	int8_t x231 = -1;
	volatile int32_t t55 = INT32_MIN;

    t55 = (x229-(x230*(x231>x232)));

    if (t55 != INT32_MIN) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x233 = 15U;
	static int16_t x234 = -1;
	int32_t x235 = INT32_MIN;
	static volatile int32_t t56 = -1191483;

    t56 = (x233-(x234*(x235>x236)));

    if (t56 != 15) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x237 = 56U;
	int64_t x238 = INT64_MAX;
	int64_t x239 = INT64_MIN;
	static int64_t x240 = -1LL;
	static int64_t t57 = 9331439LL;

    t57 = (x237-(x238*(x239>x240)));

    if (t57 != 56LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x241 = -1LL;
	volatile uint16_t x243 = UINT16_MAX;
	int8_t x244 = -1;

    t58 = (x241-(x242*(x243>x244)));

    if (t58 != -2147483648LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x246 = UINT32_MAX;
	int64_t x247 = INT64_MIN;
	uint32_t x248 = UINT32_MAX;
	volatile uint32_t t59 = 330U;

    t59 = (x245-(x246*(x247>x248)));

    if (t59 != 1868U) { NG(); } else { ; }
	
}

void f60(void) {
    	static int8_t x249 = INT8_MIN;
	static uint32_t x250 = 2U;
	volatile int32_t x251 = 657605;
	uint8_t x252 = 5U;
	static uint32_t t60 = 237924134U;

    t60 = (x249-(x250*(x251>x252)));

    if (t60 != 4294967166U) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint32_t x253 = 617199U;
	volatile int16_t x254 = -1;
	int16_t x255 = -1;
	uint32_t t61 = 20964U;

    t61 = (x253-(x254*(x255>x256)));

    if (t61 != 617200U) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x257 = 3468056U;
	volatile uint16_t x258 = 3289U;
	uint32_t x260 = UINT32_MAX;
	static volatile uint32_t t62 = 2930147U;

    t62 = (x257-(x258*(x259>x260)));

    if (t62 != 3468056U) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x261 = 0U;
	uint8_t x263 = UINT8_MAX;
	uint32_t x264 = 137066U;
	int32_t t63 = -313;

    t63 = (x261-(x262*(x263>x264)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x265 = INT16_MAX;
	int64_t x267 = -151570696717824LL;
	uint32_t t64 = 10409505U;

    t64 = (x265-(x266*(x267>x268)));

    if (t64 != 32767U) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x269 = -185;

    t65 = (x269-(x270*(x271>x272)));

    if (t65 != -185) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x273 = 1LLU;
	static volatile uint8_t x274 = UINT8_MAX;
	int32_t x276 = 337;
	static uint64_t t66 = 3768749154608006651LLU;

    t66 = (x273-(x274*(x275>x276)));

    if (t66 != 1LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int16_t x277 = -4;
	int64_t x278 = 92182006645LL;
	int8_t x279 = 0;
	int64_t x280 = INT64_MIN;
	int64_t t67 = -2095701035LL;

    t67 = (x277-(x278*(x279>x280)));

    if (t67 != -92182006649LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint64_t x281 = UINT64_MAX;
	static volatile uint8_t x282 = UINT8_MAX;
	volatile int32_t x283 = -1;
	static uint32_t x284 = 389220368U;

    t68 = (x281-(x282*(x283>x284)));

    if (t68 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x285 = -1LL;
	int32_t x286 = INT32_MIN;
	volatile int32_t x287 = INT32_MAX;
	uint8_t x288 = UINT8_MAX;
	volatile int64_t t69 = -702424869958LL;

    t69 = (x285-(x286*(x287>x288)));

    if (t69 != 2147483647LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint32_t x289 = 29458967U;
	int32_t x290 = -1;
	int16_t x291 = 819;
	int64_t x292 = INT64_MIN;
	uint32_t t70 = 4860645U;

    t70 = (x289-(x290*(x291>x292)));

    if (t70 != 29458968U) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x293 = -244650572;
	int8_t x294 = -1;
	uint16_t x296 = UINT16_MAX;
	volatile int32_t t71 = 1832;

    t71 = (x293-(x294*(x295>x296)));

    if (t71 != -244650572) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x298 = 44U;
	int32_t x299 = 16;
	int32_t t72 = 3487;

    t72 = (x297-(x298*(x299>x300)));

    if (t72 != -172) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x301 = INT8_MAX;
	uint8_t x302 = UINT8_MAX;
	static int64_t x303 = INT64_MIN;
	int8_t x304 = -1;

    t73 = (x301-(x302*(x303>x304)));

    if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint32_t x305 = 1282U;
	int64_t x307 = INT64_MAX;
	int8_t x308 = 14;
	uint32_t t74 = 319U;

    t74 = (x305-(x306*(x307>x308)));

    if (t74 != 4294903043U) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x310 = -54201491LL;
	uint32_t x311 = 315346096U;
	int16_t x312 = 2542;
	static volatile int64_t t75 = 7799354192752LL;

    t75 = (x309-(x310*(x311>x312)));

    if (t75 != 54201490LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x313 = 6;
	static uint32_t x314 = 127738U;
	uint16_t x315 = 488U;

    t76 = (x313-(x314*(x315>x316)));

    if (t76 != 4294839564U) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x317 = INT8_MIN;
	int64_t x318 = INT64_MIN;
	static volatile int32_t x319 = INT32_MAX;

    t77 = (x317-(x318*(x319>x320)));

    if (t77 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x325 = INT16_MAX;
	int32_t x328 = 392108893;
	int32_t t78 = -6393;

    t78 = (x325-(x326*(x327>x328)));

    if (t78 != 32767) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x336 = INT32_MIN;

    t79 = (x333-(x334*(x335>x336)));

    if (t79 != 864) { NG(); } else { ; }
	
}

void f80(void) {
    

    t80 = (x337-(x338*(x339>x340)));

    if (t80 != 127) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int64_t x341 = -1LL;
	uint16_t x342 = 497U;
	static uint8_t x343 = UINT8_MAX;
	uint64_t x344 = UINT64_MAX;
	int64_t t81 = -3LL;

    t81 = (x341-(x342*(x343>x344)));

    if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x345 = 76U;
	volatile uint8_t x347 = 0U;
	int8_t x348 = INT8_MAX;
	int64_t t82 = -270258249839720419LL;

    t82 = (x345-(x346*(x347>x348)));

    if (t82 != 76LL) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x349 = -1;
	static int32_t x350 = INT32_MIN;
	volatile uint16_t x351 = 1U;
	static volatile uint8_t x352 = 54U;
	static volatile int32_t t83 = -21732762;

    t83 = (x349-(x350*(x351>x352)));

    if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x353 = UINT8_MAX;
	static uint8_t x355 = UINT8_MAX;
	volatile int32_t x356 = -1;

    t84 = (x353-(x354*(x355>x356)));

    if (t84 != 33023) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint64_t x358 = 11277090583604564LLU;
	static uint16_t x359 = UINT16_MAX;
	uint64_t t85 = 658598078912LLU;

    t85 = (x357-(x358*(x359>x360)));

    if (t85 != 18435466983125979819LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile int32_t x361 = 987;
	uint64_t x362 = UINT64_MAX;
	uint64_t x363 = 984021154350018060LLU;
	int16_t x364 = INT16_MIN;
	volatile uint64_t t86 = 22128LLU;

    t86 = (x361-(x362*(x363>x364)));

    if (t86 != 987LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int64_t x365 = -1LL;
	int16_t x366 = INT16_MIN;
	uint32_t x367 = UINT32_MAX;
	uint32_t x368 = 972U;

    t87 = (x365-(x366*(x367>x368)));

    if (t87 != 32767LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x369 = INT8_MIN;
	int64_t x370 = INT64_MIN;
	int16_t x371 = -1;

    t88 = (x369-(x370*(x371>x372)));

    if (t88 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static int8_t x373 = INT8_MAX;
	uint16_t x374 = 59U;
	int64_t x375 = -21388833856LL;
	volatile uint32_t x376 = UINT32_MAX;
	int32_t t89 = -1228;

    t89 = (x373-(x374*(x375>x376)));

    if (t89 != 127) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x377 = UINT64_MAX;
	int64_t x378 = INT64_MIN;
	volatile int64_t x379 = 8010LL;
	int8_t x380 = INT8_MIN;
	uint64_t t90 = 27649LLU;

    t90 = (x377-(x378*(x379>x380)));

    if (t90 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x381 = INT8_MIN;
	static volatile int32_t x383 = INT32_MAX;
	int32_t x384 = 559;
	volatile int64_t t91 = 285776399446715400LL;

    t91 = (x381-(x382*(x383>x384)));

    if (t91 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x386 = -1LL;
	uint32_t x387 = 185U;
	static volatile int16_t x388 = -1;
	static volatile int64_t t92 = -162671184LL;

    t92 = (x385-(x386*(x387>x388)));

    if (t92 != 255LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint32_t x390 = 480632U;
	volatile uint8_t x391 = 0U;
	volatile uint32_t t93 = 208562U;

    t93 = (x389-(x390*(x391>x392)));

    if (t93 != 4294453896U) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x393 = 13931992U;
	static int32_t x394 = INT32_MIN;
	volatile uint32_t t94 = 15139U;

    t94 = (x393-(x394*(x395>x396)));

    if (t94 != 13931992U) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int8_t x397 = INT8_MIN;
	uint16_t x398 = 23U;
	int8_t x400 = INT8_MIN;
	int32_t t95 = -11284415;

    t95 = (x397-(x398*(x399>x400)));

    if (t95 != -151) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x401 = 7482;
	static int32_t x402 = 1;
	int32_t x403 = -500;
	int32_t t96 = -1;

    t96 = (x401-(x402*(x403>x404)));

    if (t96 != 7481) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x405 = INT32_MIN;
	static int32_t x406 = INT32_MAX;
	uint8_t x407 = 9U;
	static uint16_t x408 = 195U;

    t97 = (x405-(x406*(x407>x408)));

    if (t97 != INT32_MIN) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x413 = 0;
	int32_t x414 = INT32_MAX;
	int32_t x416 = -15546922;
	volatile int32_t t98 = 641;

    t98 = (x413-(x414*(x415>x416)));

    if (t98 != -2147483647) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x417 = -2;
	static int16_t x420 = -1;
	int32_t t99 = -2641;

    t99 = (x417-(x418*(x419>x420)));

    if (t99 != -2) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x422 = -1;
	int32_t x423 = INT32_MIN;
	uint8_t x424 = UINT8_MAX;
	volatile int32_t t100 = INT32_MIN;

    t100 = (x421-(x422*(x423>x424)));

    if (t100 != INT32_MIN) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile int8_t x425 = 0;
	int8_t x426 = INT8_MIN;
	int8_t x427 = INT8_MIN;
	int8_t x428 = -1;
	static volatile int32_t t101 = -1;

    t101 = (x425-(x426*(x427>x428)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x429 = -1LL;
	static int64_t x430 = INT64_MAX;
	uint32_t x431 = UINT32_MAX;
	int32_t x432 = INT32_MAX;
	volatile int64_t t102 = INT64_MIN;

    t102 = (x429-(x430*(x431>x432)));

    if (t102 != INT64_MIN) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x433 = -1021477241496298175LL;
	int16_t x434 = 924;
	int8_t x435 = INT8_MIN;
	static uint16_t x436 = 13456U;
	int64_t t103 = -209401033605LL;

    t103 = (x433-(x434*(x435>x436)));

    if (t103 != -1021477241496298175LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x441 = 31;
	int32_t x442 = -324;
	int64_t x443 = -20366654995585LL;
	volatile int8_t x444 = INT8_MIN;
	volatile int32_t t104 = 6677657;

    t104 = (x441-(x442*(x443>x444)));

    if (t104 != 31) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x445 = 2U;
	static int32_t x446 = -51141197;
	int8_t x448 = 3;
	volatile int32_t t105 = -15;

    t105 = (x445-(x446*(x447>x448)));

    if (t105 != 2) { NG(); } else { ; }
	
}

void f106(void) {
    	static int8_t x449 = INT8_MAX;
	volatile uint32_t x450 = 8897684U;
	int64_t x451 = 579LL;
	uint32_t t106 = 2032662U;

    t106 = (x449-(x450*(x451>x452)));

    if (t106 != 127U) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint32_t x453 = 958U;
	uint64_t x454 = 111610LLU;
	int16_t x455 = -1;
	int64_t x456 = -1LL;

    t107 = (x453-(x454*(x455>x456)));

    if (t107 != 958LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x457 = -7;
	volatile int8_t x458 = 50;
	int64_t x459 = INT64_MIN;
	uint16_t x460 = 9U;
	volatile int32_t t108 = -87843248;

    t108 = (x457-(x458*(x459>x460)));

    if (t108 != -7) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x461 = -1;
	volatile int8_t x462 = -1;
	uint32_t x463 = 1U;
	static int64_t x464 = INT64_MIN;

    t109 = (x461-(x462*(x463>x464)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x469 = 387;
	volatile int64_t x471 = -1LL;
	volatile int32_t x472 = INT32_MIN;
	int32_t t110 = -242;

    t110 = (x469-(x470*(x471>x472)));

    if (t110 != -65148) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x477 = INT16_MIN;
	int16_t x478 = INT16_MAX;
	int16_t x479 = 7;
	int16_t x480 = 1;
	volatile int32_t t111 = -228;

    t111 = (x477-(x478*(x479>x480)));

    if (t111 != -65535) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x485 = UINT32_MAX;
	static int8_t x486 = INT8_MIN;
	static int16_t x487 = INT16_MIN;
	int8_t x488 = 7;
	volatile uint32_t t112 = UINT32_MAX;

    t112 = (x485-(x486*(x487>x488)));

    if (t112 != UINT32_MAX) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x489 = INT64_MIN;
	volatile uint32_t x490 = UINT32_MAX;
	int8_t x491 = -1;
	uint32_t x492 = UINT32_MAX;

    t113 = (x489-(x490*(x491>x492)));

    if (t113 != INT64_MIN) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x494 = INT32_MIN;
	uint16_t x495 = 4310U;
	int32_t x496 = 770;
	volatile int32_t t114 = 4016383;

    t114 = (x493-(x494*(x495>x496)));

    if (t114 != 2147450880) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int64_t x497 = INT64_MIN;
	int16_t x498 = -1;
	int16_t x500 = INT16_MIN;
	volatile int64_t t115 = 132736860847815064LL;

    t115 = (x497-(x498*(x499>x500)));

    if (t115 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x502 = 5U;
	int64_t x503 = -1LL;
	uint32_t x504 = UINT32_MAX;
	int32_t t116 = INT32_MIN;

    t116 = (x501-(x502*(x503>x504)));

    if (t116 != INT32_MIN) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x505 = INT8_MIN;
	int8_t x507 = INT8_MIN;
	int8_t x508 = -11;
	int64_t t117 = -1LL;

    t117 = (x505-(x506*(x507>x508)));

    if (t117 != -128LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x513 = INT32_MIN;
	int32_t x514 = INT32_MIN;
	uint8_t x515 = UINT8_MAX;
	volatile int32_t t118 = 3;

    t118 = (x513-(x514*(x515>x516)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x517 = INT8_MIN;
	int16_t x518 = INT16_MAX;
	int64_t x519 = INT64_MAX;
	int16_t x520 = INT16_MIN;

    t119 = (x517-(x518*(x519>x520)));

    if (t119 != -32895) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x521 = INT32_MIN;
	int8_t x522 = INT8_MIN;
	uint16_t x523 = 6123U;
	static volatile int8_t x524 = 15;
	static int32_t t120 = -15393427;

    t120 = (x521-(x522*(x523>x524)));

    if (t120 != -2147483520) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint32_t x525 = 16379U;
	int64_t x526 = -1LL;
	uint16_t x527 = 30U;
	int64_t x528 = -1LL;

    t121 = (x525-(x526*(x527>x528)));

    if (t121 != 16380LL) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x529 = 2;
	volatile int16_t x530 = INT16_MAX;
	int64_t x531 = 1149459553818LL;
	int64_t x532 = INT64_MAX;
	volatile int32_t t122 = 839823531;

    t122 = (x529-(x530*(x531>x532)));

    if (t122 != 2) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x533 = 43871;
	int32_t x536 = INT32_MIN;
	volatile int32_t t123 = 1;

    t123 = (x533-(x534*(x535>x536)));

    if (t123 != 43872) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint32_t x537 = 11079U;
	uint64_t x538 = 1999891137LLU;
	int8_t x539 = -34;
	int64_t x540 = INT64_MIN;
	volatile uint64_t t124 = 0LLU;

    t124 = (x537-(x538*(x539>x540)));

    if (t124 != 18446744071709671558LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int64_t x541 = 5987179LL;
	volatile int64_t x542 = INT64_MIN;
	int32_t x544 = -1;
	int64_t t125 = -14LL;

    t125 = (x541-(x542*(x543>x544)));

    if (t125 != 5987179LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static int32_t x545 = -578735;
	uint8_t x546 = 0U;
	volatile int32_t x547 = INT32_MIN;
	volatile uint8_t x548 = 12U;
	static volatile int32_t t126 = -4;

    t126 = (x545-(x546*(x547>x548)));

    if (t126 != -578735) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint64_t x549 = 39079340215LLU;
	int16_t x550 = -1;
	int8_t x551 = -1;
	static int64_t x552 = INT64_MIN;

    t127 = (x549-(x550*(x551>x552)));

    if (t127 != 39079340216LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint64_t x553 = 58077LLU;
	int64_t x554 = 2043679LL;
	static volatile int64_t x555 = INT64_MIN;
	int8_t x556 = INT8_MIN;
	uint64_t t128 = 40LLU;

    t128 = (x553-(x554*(x555>x556)));

    if (t128 != 58077LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x557 = -21;
	volatile int8_t x559 = 40;
	int8_t x560 = INT8_MIN;
	volatile int64_t t129 = -45529737LL;

    t129 = (x557-(x558*(x559>x560)));

    if (t129 != -7LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x561 = UINT64_MAX;
	int64_t x562 = INT64_MIN;
	uint16_t x564 = 63U;
	volatile uint64_t t130 = 2002600492537LLU;

    t130 = (x561-(x562*(x563>x564)));

    if (t130 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x565 = INT64_MAX;
	uint8_t x566 = UINT8_MAX;
	volatile uint16_t x568 = 16U;
	static volatile int64_t t131 = INT64_MAX;

    t131 = (x565-(x566*(x567>x568)));

    if (t131 != INT64_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x569 = INT16_MAX;
	int64_t x570 = 4506383LL;
	int64_t x571 = -1LL;
	int8_t x572 = 2;
	int64_t t132 = 1LL;

    t132 = (x569-(x570*(x571>x572)));

    if (t132 != 32767LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x573 = UINT32_MAX;
	int8_t x574 = 59;
	uint8_t x575 = 7U;
	uint32_t t133 = UINT32_MAX;

    t133 = (x573-(x574*(x575>x576)));

    if (t133 != UINT32_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x577 = 5U;
	int32_t x578 = 77;
	int64_t x579 = INT64_MAX;
	uint8_t x580 = UINT8_MAX;

    t134 = (x577-(x578*(x579>x580)));

    if (t134 != -72) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x581 = INT64_MIN;
	int32_t x582 = -80;
	int16_t x584 = INT16_MIN;
	int64_t t135 = 1LL;

    t135 = (x581-(x582*(x583>x584)));

    if (t135 != -9223372036854775728LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x585 = INT16_MIN;
	int16_t x586 = INT16_MIN;
	uint16_t x587 = 7837U;
	volatile int8_t x588 = INT8_MIN;
	int32_t t136 = 15061;

    t136 = (x585-(x586*(x587>x588)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x589 = INT8_MIN;
	int32_t x590 = -1;
	int32_t x591 = 5730426;
	volatile int32_t t137 = -5716;

    t137 = (x589-(x590*(x591>x592)));

    if (t137 != -127) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x593 = INT8_MIN;
	int64_t x594 = 3LL;
	static uint8_t x595 = 36U;
	volatile uint8_t x596 = 5U;
	volatile int64_t t138 = 8506212698394865LL;

    t138 = (x593-(x594*(x595>x596)));

    if (t138 != -131LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x597 = UINT16_MAX;
	int16_t x598 = -1;
	uint8_t x599 = UINT8_MAX;
	int16_t x600 = INT16_MIN;
	volatile int32_t t139 = 4562650;

    t139 = (x597-(x598*(x599>x600)));

    if (t139 != 65536) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x601 = 82190201U;
	volatile uint64_t x602 = 2378088496882783LLU;
	volatile int64_t x603 = INT64_MIN;
	static uint8_t x604 = UINT8_MAX;
	uint64_t t140 = 137348166305627LLU;

    t140 = (x601-(x602*(x603>x604)));

    if (t140 != 82190201LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x605 = INT8_MIN;
	uint8_t x606 = UINT8_MAX;
	volatile uint32_t x607 = 1696533U;
	int64_t x608 = -29827LL;
	int32_t t141 = -7728;

    t141 = (x605-(x606*(x607>x608)));

    if (t141 != -383) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x609 = 17016206284590464LL;
	uint16_t x610 = 14U;
	int64_t x611 = INT64_MAX;
	int8_t x612 = -29;

    t142 = (x609-(x610*(x611>x612)));

    if (t142 != 17016206284590450LL) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint64_t x613 = 22872474266472155LLU;
	static volatile int16_t x614 = INT16_MAX;
	static volatile int16_t x616 = INT16_MIN;

    t143 = (x613-(x614*(x615>x616)));

    if (t143 != 22872474266472155LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x619 = 1;
	int64_t x620 = 296LL;
	volatile int64_t t144 = INT64_MIN;

    t144 = (x617-(x618*(x619>x620)));

    if (t144 != INT64_MIN) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint64_t x621 = 2972671538158125940LLU;
	int64_t x622 = 14LL;
	uint32_t x623 = 1U;
	uint16_t x624 = 982U;
	uint64_t t145 = 152206539953LLU;

    t145 = (x621-(x622*(x623>x624)));

    if (t145 != 2972671538158125940LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x625 = 1928LLU;
	int8_t x628 = INT8_MAX;
	uint64_t t146 = 6423LLU;

    t146 = (x625-(x626*(x627>x628)));

    if (t146 != 1928LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x630 = INT8_MAX;
	uint8_t x632 = 0U;

    t147 = (x629-(x630*(x631>x632)));

    if (t147 != -127) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint64_t x633 = UINT64_MAX;
	int32_t x635 = INT32_MIN;

    t148 = (x633-(x634*(x635>x636)));

    if (t148 != 2147483647LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x637 = INT8_MIN;
	int16_t x638 = -1;
	int16_t x639 = -1;
	uint64_t x640 = UINT64_MAX;
	volatile int32_t t149 = 1;

    t149 = (x637-(x638*(x639>x640)));

    if (t149 != -128) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x645 = INT32_MIN;
	int64_t x646 = -111555158LL;
	static uint16_t x648 = 49U;
	volatile int64_t t150 = -2526140913257682894LL;

    t150 = (x645-(x646*(x647>x648)));

    if (t150 != -2147483648LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x649 = -13137698;
	volatile int16_t x650 = INT16_MAX;
	volatile int8_t x651 = -1;
	volatile int32_t t151 = -80;

    t151 = (x649-(x650*(x651>x652)));

    if (t151 != -13137698) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x653 = UINT64_MAX;
	int32_t x654 = 471;
	uint64_t t152 = UINT64_MAX;

    t152 = (x653-(x654*(x655>x656)));

    if (t152 != UINT64_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x657 = -8;
	static uint64_t x658 = 3130253LLU;
	int32_t x660 = 0;
	volatile uint64_t t153 = 13632205LLU;

    t153 = (x657-(x658*(x659>x660)));

    if (t153 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x667 = INT16_MIN;
	int16_t x668 = 7979;
	volatile uint32_t t154 = 348961676U;

    t154 = (x665-(x666*(x667>x668)));

    if (t154 != 59U) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x669 = INT32_MIN;
	int8_t x670 = -1;
	int32_t x671 = -50630;
	uint64_t x672 = 18973635279846LLU;
	int32_t t155 = -1;

    t155 = (x669-(x670*(x671>x672)));

    if (t155 != -2147483647) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x674 = INT32_MIN;
	int16_t x675 = INT16_MIN;
	uint8_t x676 = 13U;
	volatile int32_t t156 = 60;

    t156 = (x673-(x674*(x675>x676)));

    if (t156 != 3) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x677 = INT8_MAX;
	static int16_t x678 = INT16_MAX;
	static volatile int32_t x679 = INT32_MIN;
	int32_t t157 = -7173794;

    t157 = (x677-(x678*(x679>x680)));

    if (t157 != -32640) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x681 = -1;
	int64_t x683 = INT64_MIN;
	static uint32_t t158 = UINT32_MAX;

    t158 = (x681-(x682*(x683>x684)));

    if (t158 != UINT32_MAX) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x685 = INT16_MAX;
	static int16_t x686 = INT16_MIN;
	int8_t x688 = -1;
	int32_t t159 = 0;

    t159 = (x685-(x686*(x687>x688)));

    if (t159 != 32767) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x689 = INT8_MIN;
	int8_t x691 = INT8_MIN;
	int64_t x692 = INT64_MAX;
	int64_t t160 = 292791LL;

    t160 = (x689-(x690*(x691>x692)));

    if (t160 != -128LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x693 = 8U;
	static int32_t x695 = -1;
	volatile uint8_t x696 = 33U;
	volatile int32_t t161 = -3;

    t161 = (x693-(x694*(x695>x696)));

    if (t161 != 8) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x697 = INT16_MIN;
	int16_t x698 = INT16_MIN;
	static volatile uint8_t x699 = 1U;
	uint16_t x700 = UINT16_MAX;

    t162 = (x697-(x698*(x699>x700)));

    if (t162 != -32768) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x701 = -1LL;
	uint8_t x702 = 38U;
	uint32_t x703 = UINT32_MAX;
	int8_t x704 = 1;
	int64_t t163 = 24284994939LL;

    t163 = (x701-(x702*(x703>x704)));

    if (t163 != -39LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x705 = INT16_MIN;
	int32_t x706 = INT32_MAX;
	uint64_t x707 = 363027LLU;
	volatile int32_t t164 = -7;

    t164 = (x705-(x706*(x707>x708)));

    if (t164 != -32768) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x709 = UINT64_MAX;
	static int64_t x710 = -1LL;
	int16_t x711 = INT16_MIN;
	static uint16_t x712 = UINT16_MAX;
	uint64_t t165 = UINT64_MAX;

    t165 = (x709-(x710*(x711>x712)));

    if (t165 != UINT64_MAX) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint16_t x713 = UINT16_MAX;
	static int64_t x714 = -3801LL;
	static volatile int32_t x715 = -1;
	int64_t x716 = INT64_MIN;
	volatile int64_t t166 = 2986431247LL;

    t166 = (x713-(x714*(x715>x716)));

    if (t166 != 69336LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x717 = UINT32_MAX;
	uint8_t x718 = 1U;
	int8_t x719 = INT8_MIN;
	uint16_t x720 = UINT16_MAX;
	volatile uint32_t t167 = UINT32_MAX;

    t167 = (x717-(x718*(x719>x720)));

    if (t167 != UINT32_MAX) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x721 = -149;
	uint32_t x722 = 1352U;
	uint32_t x723 = 461U;
	static uint32_t t168 = 756466U;

    t168 = (x721-(x722*(x723>x724)));

    if (t168 != 4294967147U) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x725 = INT8_MIN;
	static uint16_t x727 = 26U;
	static volatile int32_t t169 = 0;

    t169 = (x725-(x726*(x727>x728)));

    if (t169 != -65663) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x730 = 642U;
	static int32_t x731 = -1;
	int32_t x732 = INT32_MAX;
	uint32_t t170 = 309U;

    t170 = (x729-(x730*(x731>x732)));

    if (t170 != 2147483648U) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x733 = -422691;
	int32_t x734 = -1;
	int8_t x735 = INT8_MIN;
	uint64_t x736 = 6LLU;
	volatile int32_t t171 = 2855;

    t171 = (x733-(x734*(x735>x736)));

    if (t171 != -422690) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint8_t x737 = UINT8_MAX;
	int8_t x738 = INT8_MAX;
	int32_t x739 = INT32_MIN;
	volatile int32_t x740 = INT32_MIN;
	static volatile int32_t t172 = 74;

    t172 = (x737-(x738*(x739>x740)));

    if (t172 != 255) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x741 = -1LL;
	int32_t x742 = INT32_MIN;
	volatile int64_t t173 = 239930167205LL;

    t173 = (x741-(x742*(x743>x744)));

    if (t173 != 2147483647LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x745 = 23U;
	uint8_t x746 = UINT8_MAX;
	int32_t x748 = INT32_MAX;
	int32_t t174 = -4720;

    t174 = (x745-(x746*(x747>x748)));

    if (t174 != 23) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t t175 = INT64_MAX;

    t175 = (x749-(x750*(x751>x752)));

    if (t175 != INT64_MAX) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x753 = -1;
	uint8_t x754 = 1U;
	int16_t x755 = 1;
	static int32_t t176 = 62537845;

    t176 = (x753-(x754*(x755>x756)));

    if (t176 != -1) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x757 = 20;
	static uint32_t x758 = 32775U;
	uint32_t x759 = 0U;
	uint32_t t177 = 117221U;

    t177 = (x757-(x758*(x759>x760)));

    if (t177 != 20U) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x761 = -1;
	uint16_t x763 = 15U;
	int32_t x764 = 1;

    t178 = (x761-(x762*(x763>x764)));

    if (t178 != INT64_MAX) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x773 = INT8_MAX;
	int32_t x774 = -1;
	static int32_t x775 = -1;
	int32_t t179 = -80825397;

    t179 = (x773-(x774*(x775>x776)));

    if (t179 != 127) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x781 = 4U;
	int32_t x783 = -930378119;
	volatile int32_t t180 = 1234070;

    t180 = (x781-(x782*(x783>x784)));

    if (t180 != 4) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x785 = -1;
	int16_t x786 = INT16_MIN;
	uint32_t x787 = 1U;
	int8_t x788 = INT8_MAX;
	volatile int32_t t181 = -986927845;

    t181 = (x785-(x786*(x787>x788)));

    if (t181 != -1) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x790 = INT32_MIN;
	int8_t x791 = -1;
	int64_t x792 = 212365243999332829LL;
	int32_t t182 = -1474;

    t182 = (x789-(x790*(x791>x792)));

    if (t182 != -1) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x793 = -1;
	static uint64_t x794 = UINT64_MAX;
	uint16_t x795 = 84U;
	int32_t x796 = -446;
	volatile uint64_t t183 = 656382942885LLU;

    t183 = (x793-(x794*(x795>x796)));

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x797 = INT64_MIN;
	int16_t x798 = -1;
	static int32_t x799 = -57485020;
	volatile int32_t x800 = INT32_MAX;
	static int64_t t184 = INT64_MIN;

    t184 = (x797-(x798*(x799>x800)));

    if (t184 != INT64_MIN) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x801 = 11U;
	static int64_t x802 = -432538229878248549LL;
	static uint32_t x803 = UINT32_MAX;
	uint32_t x804 = 1614U;
	volatile int64_t t185 = 321403306664983287LL;

    t185 = (x801-(x802*(x803>x804)));

    if (t185 != 432538229878248560LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x805 = 161336U;
	uint16_t x806 = 127U;
	int32_t x807 = INT32_MIN;
	int8_t x808 = -1;

    t186 = (x805-(x806*(x807>x808)));

    if (t186 != 161336U) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x809 = 468716U;
	int32_t x810 = INT32_MAX;
	int32_t x811 = 7;
	static volatile uint32_t t187 = 2053392270U;

    t187 = (x809-(x810*(x811>x812)));

    if (t187 != 2147952365U) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x813 = INT64_MIN;
	int8_t x814 = -1;
	static uint16_t x815 = 967U;
	volatile int64_t t188 = -498983160520935LL;

    t188 = (x813-(x814*(x815>x816)));

    if (t188 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x817 = INT32_MAX;
	volatile int8_t x818 = 0;
	int64_t x820 = INT64_MIN;
	int32_t t189 = INT32_MAX;

    t189 = (x817-(x818*(x819>x820)));

    if (t189 != INT32_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint16_t x822 = 12U;
	int32_t x823 = INT32_MAX;
	int32_t x824 = 976753556;
	static int32_t t190 = -373;

    t190 = (x821-(x822*(x823>x824)));

    if (t190 != -26) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x825 = INT8_MAX;
	static volatile uint16_t x826 = 0U;
	static uint8_t x827 = UINT8_MAX;
	int8_t x828 = INT8_MAX;
	static volatile int32_t t191 = -143;

    t191 = (x825-(x826*(x827>x828)));

    if (t191 != 127) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x831 = 1290U;
	uint8_t x832 = 30U;
	volatile int32_t t192 = -15;

    t192 = (x829-(x830*(x831>x832)));

    if (t192 != -2147418112) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int8_t x833 = INT8_MAX;
	int32_t t193 = 832923;

    t193 = (x833-(x834*(x835>x836)));

    if (t193 != 687) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint64_t x837 = 146717352289330LLU;
	static uint64_t x838 = 1764488580LLU;
	volatile int32_t x839 = INT32_MIN;
	uint64_t t194 = 463355448438LLU;

    t194 = (x837-(x838*(x839>x840)));

    if (t194 != 146717352289330LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x841 = -8;
	static uint32_t x843 = 29805883U;
	static uint64_t x844 = UINT64_MAX;
	volatile int32_t t195 = 2698314;

    t195 = (x841-(x842*(x843>x844)));

    if (t195 != -8) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x845 = 1U;
	int64_t x846 = -1LL;
	static int16_t x847 = -84;
	int8_t x848 = INT8_MIN;
	int64_t t196 = -18634620567LL;

    t196 = (x845-(x846*(x847>x848)));

    if (t196 != 2LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x851 = UINT16_MAX;

    t197 = (x849-(x850*(x851>x852)));

    if (t197 != 71) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x853 = -1291894825625383LL;
	int8_t x855 = 4;
	int32_t x856 = 3545;
	int64_t t198 = -1LL;

    t198 = (x853-(x854*(x855>x856)));

    if (t198 != -1291894825625383LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x857 = 0LL;
	static int64_t x858 = -1LL;
	int32_t x859 = -1;
	static int32_t x860 = INT32_MAX;
	int64_t t199 = -1788LL;

    t199 = (x857-(x858*(x859>x860)));

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

