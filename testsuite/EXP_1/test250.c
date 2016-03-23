
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

volatile uint32_t x5 = 1U;
uint16_t x8 = 5U;
volatile int64_t x17 = INT64_MIN;
static int32_t x18 = INT32_MIN;
int8_t x22 = INT8_MIN;
uint64_t x23 = UINT64_MAX;
int32_t x31 = INT32_MAX;
int32_t t5 = -1960;
uint64_t x47 = 7134387349266LLU;
static volatile uint64_t t7 = 596543257LLU;
uint64_t x56 = 6999LLU;
volatile uint64_t t8 = 8719618872LLU;
static int16_t x61 = INT16_MIN;
int32_t x62 = 6429443;
int8_t x64 = -10;
volatile int8_t x76 = -3;
int32_t x84 = 74800;
static uint8_t x91 = 70U;
int16_t x94 = -15148;
volatile int16_t x97 = INT16_MIN;
int32_t x116 = INT32_MIN;
static int32_t t19 = 49211261;
volatile uint32_t x117 = 279U;
volatile int64_t t20 = 468731021519923009LL;
volatile int64_t t21 = -445854LL;
int32_t x128 = INT32_MIN;
int64_t t22 = -91LL;
uint16_t x151 = 14U;
volatile int32_t t29 = 535813834;
int32_t x177 = -1;
volatile uint64_t x178 = 7725069685123508LLU;
int32_t x186 = -1;
int8_t x189 = 26;
static int16_t x197 = 9;
static int8_t x199 = INT8_MAX;
uint32_t x200 = 15U;
int32_t x201 = -1;
int64_t x212 = INT64_MIN;
int16_t x219 = 201;
int64_t x229 = -1LL;
static int64_t x239 = 18390240LL;
static int16_t x243 = -1;
volatile int16_t x244 = -6;
uint16_t x246 = UINT16_MAX;
static int16_t x249 = INT16_MAX;
int64_t t47 = 447889794346995LL;
static int64_t x269 = -4701LL;
static uint64_t t49 = 7379842172070146LLU;
int16_t x278 = INT16_MAX;
static int32_t x279 = INT32_MAX;
int8_t x281 = INT8_MIN;
int64_t t52 = 11947780LL;
uint32_t t53 = 103114986U;
int64_t x296 = -1LL;
int64_t t55 = -1248176224051LL;
uint8_t x297 = 113U;
uint32_t x299 = 118U;
int64_t x300 = 202LL;
int16_t x307 = -1;
int64_t x322 = INT64_MIN;
int16_t x324 = 60;
static uint16_t x328 = 1U;
volatile int32_t x335 = INT32_MAX;
uint8_t x340 = UINT8_MAX;
int16_t x341 = INT16_MIN;
int64_t x344 = -1LL;
int32_t x355 = -4;
static int32_t x365 = 19543533;
int8_t x366 = -1;
int16_t x370 = INT16_MIN;
int32_t x385 = -28;
volatile uint8_t x386 = UINT8_MAX;
volatile uint8_t x395 = 63U;
volatile int32_t x396 = 91;
volatile int64_t t76 = 167922638LL;
int8_t x408 = -2;
uint32_t t78 = 42080528U;
volatile uint8_t x419 = UINT8_MAX;
static volatile uint64_t x422 = 952518300160LLU;
uint8_t x425 = 0U;
static int16_t x428 = 7462;
volatile int32_t x429 = -1;
int8_t x443 = -43;
uint64_t x445 = UINT64_MAX;
uint16_t x457 = UINT16_MAX;
int32_t x459 = INT32_MIN;
int8_t x461 = 1;
int32_t x484 = -1;
int8_t x485 = INT8_MIN;
volatile int64_t x488 = 0LL;
int64_t t95 = -119136080980856LL;
int32_t t97 = -1;
volatile int64_t t98 = 1LL;
int32_t x511 = INT32_MIN;
static int64_t x513 = INT64_MAX;
uint16_t x515 = UINT16_MAX;
int32_t x516 = -81721041;
uint16_t x531 = 102U;
int32_t x532 = 0;
int64_t x533 = -45954001LL;
int16_t x555 = INT16_MAX;
int8_t x558 = 0;
int16_t x561 = INT16_MIN;
volatile uint64_t x567 = 119270154404185LLU;
static volatile int32_t x572 = INT32_MAX;
uint64_t t116 = 5199LLU;
volatile int32_t t118 = 3575087;
int32_t x581 = INT32_MIN;
uint64_t x585 = UINT64_MAX;
int8_t x586 = -1;
uint64_t x587 = 54LLU;
uint8_t x591 = UINT8_MAX;
volatile int64_t t122 = -108LL;
uint64_t x606 = UINT64_MAX;
int16_t x607 = INT16_MIN;
uint64_t t123 = 425877LLU;
int64_t x622 = INT64_MIN;
int16_t x625 = INT16_MIN;
int32_t x634 = 0;
int16_t x643 = INT16_MAX;
static int64_t x644 = -17723925111531027LL;
static int64_t t130 = -1336544126507568LL;
volatile uint64_t x645 = 68046928097LLU;
int8_t x646 = INT8_MIN;
int16_t x648 = 2102;
int8_t x656 = INT8_MIN;
static volatile int16_t x659 = INT16_MIN;
volatile int8_t x660 = INT8_MIN;
static int8_t x662 = INT8_MIN;
uint8_t x663 = UINT8_MAX;
volatile int64_t t137 = 1170711383888816LL;
volatile uint8_t x676 = UINT8_MAX;
volatile int64_t t139 = 1954LL;
static volatile uint32_t x689 = UINT32_MAX;
volatile uint32_t t141 = 13726U;
volatile int64_t t142 = 9712362LL;
int32_t x697 = -1;
int8_t x698 = INT8_MIN;
uint32_t x699 = 102U;
volatile uint32_t t143 = 0U;
volatile int8_t x701 = -1;
uint16_t x704 = 5U;
int16_t x706 = INT16_MIN;
static int32_t x709 = 1190691;
static uint32_t x721 = UINT32_MAX;
volatile int8_t x722 = -1;
uint32_t t148 = 8408025U;
static uint32_t x729 = UINT32_MAX;
uint16_t x730 = 4857U;
int64_t t150 = -8959924288885LL;
volatile uint64_t x748 = UINT64_MAX;
uint64_t t152 = 2786562269067572657LLU;
volatile int32_t x751 = INT32_MIN;
int8_t x757 = INT8_MIN;
volatile uint32_t x771 = UINT32_MAX;
volatile int16_t x772 = -1;
int32_t t157 = 1311;
int8_t x783 = -1;
static uint8_t x792 = 1U;
int32_t t161 = 33548406;
int16_t x794 = INT16_MIN;
uint16_t x795 = UINT16_MAX;
volatile int32_t t164 = 6421;
static volatile int16_t x816 = INT16_MIN;
static int8_t x820 = 18;
volatile int32_t t166 = 56;
uint8_t x822 = 1U;
static int16_t x827 = 936;
int16_t x828 = -1;
uint8_t x837 = 67U;
int32_t x842 = -638;
static int16_t x844 = -22;
volatile int32_t x850 = INT32_MIN;
int32_t t171 = -8099788;
volatile int8_t x854 = 24;
int8_t x865 = -1;
uint64_t x871 = 7633932288366056457LLU;
static uint64_t t176 = 3959820410900LLU;
static uint8_t x880 = 10U;
uint32_t x882 = 331U;
volatile int32_t x899 = INT32_MIN;
uint32_t t182 = 464U;
volatile int64_t t184 = 905LL;
uint32_t x913 = 3293550U;
int64_t x915 = 9370965LL;
uint16_t x921 = 7U;
int64_t x923 = 9LL;
uint32_t t188 = 15464218U;
uint64_t t189 = 6448LLU;
uint16_t x937 = 12U;
volatile int64_t t191 = -87613223912LL;
int64_t x946 = INT64_MIN;
uint64_t x948 = 1659035394LLU;
uint16_t x950 = UINT16_MAX;
int64_t x958 = INT64_MAX;
int32_t x964 = INT32_MIN;
int8_t x966 = INT8_MAX;
int8_t x968 = 10;
static volatile int16_t x971 = INT16_MIN;


void f0(void) {
    	int16_t x6 = INT16_MAX;
	uint64_t x7 = 58LLU;
	uint64_t t0 = 13295LLU;

    t0 = (((x5-x6)/x7)&x8);

    if (t0 != 1LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x9 = -5380;
	static int32_t x10 = INT32_MIN;
	uint8_t x11 = UINT8_MAX;
	int32_t x12 = 1;
	volatile int32_t t1 = 0;

    t1 = (((x9-x10)/x11)&x12);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x13 = -1LL;
	static int32_t x14 = INT32_MIN;
	static int32_t x15 = INT32_MIN;
	int32_t x16 = INT32_MAX;
	volatile int64_t t2 = -206LL;

    t2 = (((x13-x14)/x15)&x16);

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x19 = 22411398761LLU;
	volatile uint8_t x20 = 17U;
	volatile uint64_t t3 = 2477534454LLU;

    t3 = (((x17-x18)/x19)&x20);

    if (t3 != 16LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x21 = INT8_MAX;
	static int32_t x24 = 1;
	uint64_t t4 = 23417LLU;

    t4 = (((x21-x22)/x23)&x24);

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint16_t x29 = 1181U;
	static int8_t x30 = 33;
	uint8_t x32 = 91U;

    t5 = (((x29-x30)/x31)&x32);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x37 = 1996;
	int16_t x38 = -1;
	int64_t x39 = -171463306695662LL;
	int32_t x40 = INT32_MIN;
	int64_t t6 = 4027593LL;

    t6 = (((x37-x38)/x39)&x40);

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x45 = -1;
	volatile uint16_t x46 = 815U;
	int32_t x48 = INT32_MIN;

    t7 = (((x45-x46)/x47)&x48);

    if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x53 = 27U;
	static int8_t x54 = INT8_MIN;
	uint32_t x55 = 152U;

    t8 = (((x53-x54)/x55)&x56);

    if (t8 != 1LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x63 = INT32_MAX;
	int32_t t9 = -2748;

    t9 = (((x61-x62)/x63)&x64);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x69 = -1;
	volatile int8_t x70 = 1;
	int32_t x71 = -87655489;
	static int8_t x72 = INT8_MAX;
	static int32_t t10 = 57674988;

    t10 = (((x69-x70)/x71)&x72);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x73 = INT8_MAX;
	static volatile uint32_t x74 = 2567U;
	static int32_t x75 = INT32_MIN;
	volatile uint32_t t11 = 4954855U;

    t11 = (((x73-x74)/x75)&x76);

    if (t11 != 1U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x81 = 93U;
	static volatile int16_t x82 = -1;
	uint64_t x83 = 718742819435897760LLU;
	static volatile uint64_t t12 = 518798356917484LLU;

    t12 = (((x81-x82)/x83)&x84);

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x89 = 6;
	int32_t x90 = -1;
	volatile int64_t x92 = -1LL;
	int64_t t13 = 5225442430183418LL;

    t13 = (((x89-x90)/x91)&x92);

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x93 = 112U;
	int8_t x95 = INT8_MIN;
	uint32_t x96 = 131U;
	static volatile uint32_t t14 = 1368659U;

    t14 = (((x93-x94)/x95)&x96);

    if (t14 != 129U) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x98 = 13;
	uint64_t x99 = UINT64_MAX;
	int8_t x100 = 49;
	uint64_t t15 = 8311LLU;

    t15 = (((x97-x98)/x99)&x100);

    if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x101 = -10482455905LL;
	int16_t x102 = INT16_MAX;
	int16_t x103 = INT16_MAX;
	int64_t x104 = INT64_MIN;
	static volatile int64_t t16 = INT64_MIN;

    t16 = (((x101-x102)/x103)&x104);

    if (t16 != INT64_MIN) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x105 = -9513800;
	int16_t x106 = INT16_MIN;
	static int32_t x107 = INT32_MAX;
	uint64_t x108 = UINT64_MAX;
	volatile uint64_t t17 = 706783175271317LLU;

    t17 = (((x105-x106)/x107)&x108);

    if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x109 = INT8_MIN;
	uint64_t x110 = 4604524831LLU;
	int16_t x111 = INT16_MAX;
	int8_t x112 = 15;
	volatile uint64_t t18 = 1447LLU;

    t18 = (((x109-x110)/x111)&x112);

    if (t18 != 4LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x113 = 812U;
	uint8_t x114 = 61U;
	uint16_t x115 = UINT16_MAX;

    t19 = (((x113-x114)/x115)&x116);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x118 = INT16_MIN;
	int64_t x119 = 403243554518LL;
	int64_t x120 = -2LL;

    t20 = (((x117-x118)/x119)&x120);

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x121 = 5495495015LL;
	volatile int32_t x122 = INT32_MIN;
	int64_t x123 = INT64_MAX;
	int8_t x124 = INT8_MAX;

    t21 = (((x121-x122)/x123)&x124);

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile uint16_t x125 = 8052U;
	uint32_t x126 = UINT32_MAX;
	int64_t x127 = INT64_MIN;

    t22 = (((x125-x126)/x127)&x128);

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x129 = -1;
	int16_t x130 = INT16_MIN;
	int32_t x131 = -1;
	int16_t x132 = -3;
	int32_t t23 = -5;

    t23 = (((x129-x130)/x131)&x132);

    if (t23 != -32767) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x137 = INT32_MAX;
	uint64_t x138 = 889743695LLU;
	volatile uint64_t x139 = UINT64_MAX;
	volatile int32_t x140 = INT32_MAX;
	volatile uint64_t t24 = 125711941432052781LLU;

    t24 = (((x137-x138)/x139)&x140);

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x141 = INT32_MIN;
	static uint32_t x142 = UINT32_MAX;
	static uint32_t x143 = 185029U;
	uint64_t x144 = 10185738788156384LLU;
	volatile uint64_t t25 = 1083750082079LLU;

    t25 = (((x141-x142)/x143)&x144);

    if (t25 != 8512LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x149 = INT8_MIN;
	int64_t x150 = 4LL;
	int8_t x152 = INT8_MIN;
	int64_t t26 = -431897LL;

    t26 = (((x149-x150)/x151)&x152);

    if (t26 != -128LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x165 = -6958;
	int8_t x166 = INT8_MIN;
	volatile uint16_t x167 = 1U;
	static uint64_t x168 = 1LLU;
	static volatile uint64_t t27 = 15040270154426LLU;

    t27 = (((x165-x166)/x167)&x168);

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x169 = 384841915U;
	int16_t x170 = -2;
	volatile int16_t x171 = INT16_MIN;
	static uint16_t x172 = 36U;
	uint32_t t28 = 1292487U;

    t28 = (((x169-x170)/x171)&x172);

    if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x173 = INT8_MAX;
	int32_t x174 = -1;
	volatile int32_t x175 = INT32_MIN;
	int32_t x176 = INT32_MIN;

    t29 = (((x173-x174)/x175)&x176);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x179 = 1;
	int8_t x180 = INT8_MIN;
	volatile uint64_t t30 = 2795598724139690LLU;

    t30 = (((x177-x178)/x179)&x180);

    if (t30 != 18439019004024428032LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x181 = INT16_MIN;
	int32_t x182 = INT32_MIN;
	static int8_t x183 = -1;
	int32_t x184 = INT32_MIN;
	volatile int32_t t31 = INT32_MIN;

    t31 = (((x181-x182)/x183)&x184);

    if (t31 != INT32_MIN) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t x185 = INT32_MIN;
	volatile uint8_t x187 = UINT8_MAX;
	int8_t x188 = -1;
	volatile int32_t t32 = 290295019;

    t32 = (((x185-x186)/x187)&x188);

    if (t32 != -8421504) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x190 = INT8_MIN;
	volatile uint64_t x191 = 1341746LLU;
	static volatile uint8_t x192 = 0U;
	volatile uint64_t t33 = 5362LLU;

    t33 = (((x189-x190)/x191)&x192);

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x193 = -1;
	int8_t x194 = INT8_MAX;
	volatile int64_t x195 = -1LL;
	static uint16_t x196 = 1215U;
	int64_t t34 = -2606LL;

    t34 = (((x193-x194)/x195)&x196);

    if (t34 != 128LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint64_t x198 = 1423804908189LLU;
	uint64_t t35 = 8993404241LLU;

    t35 = (((x197-x198)/x199)&x200);

    if (t35 != 4LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint32_t x202 = UINT32_MAX;
	int64_t x203 = 1077660248271142003LL;
	int32_t x204 = INT32_MIN;
	int64_t t36 = -4422750657217LL;

    t36 = (((x201-x202)/x203)&x204);

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x205 = -77;
	uint8_t x206 = 1U;
	int16_t x207 = -1;
	volatile uint16_t x208 = 6637U;
	static int32_t t37 = -53547;

    t37 = (((x205-x206)/x207)&x208);

    if (t37 != 76) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x209 = UINT64_MAX;
	int64_t x210 = INT64_MIN;
	int64_t x211 = -545174020750LL;
	uint64_t t38 = 2819281480710LLU;

    t38 = (((x209-x210)/x211)&x212);

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x217 = -2034194;
	uint32_t x218 = 14U;
	int8_t x220 = INT8_MAX;
	volatile uint32_t t39 = 1U;

    t39 = (((x217-x218)/x219)&x220);

    if (t39 != 52U) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x225 = 1;
	static int16_t x226 = 30;
	int32_t x227 = INT32_MIN;
	int64_t x228 = INT64_MIN;
	int64_t t40 = -4928215383544722LL;

    t40 = (((x225-x226)/x227)&x228);

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x230 = UINT16_MAX;
	uint16_t x231 = 510U;
	int16_t x232 = INT16_MAX;
	int64_t t41 = 383136294LL;

    t41 = (((x229-x230)/x231)&x232);

    if (t41 != 32640LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x233 = UINT8_MAX;
	int64_t x234 = INT64_MAX;
	int16_t x235 = -1;
	int32_t x236 = -6;
	int64_t t42 = 7093444851LL;

    t42 = (((x233-x234)/x235)&x236);

    if (t42 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x237 = 3762LL;
	int64_t x238 = INT64_MAX;
	static int64_t x240 = -2814450865638LL;
	static volatile int64_t t43 = -4122602858008LL;

    t43 = (((x237-x238)/x239)&x240);

    if (t43 != -3297729306614LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x241 = INT16_MIN;
	uint64_t x242 = 96921290923LLU;
	volatile uint64_t t44 = 239585324648LLU;

    t44 = (((x241-x242)/x243)&x244);

    if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x245 = -1LL;
	uint8_t x247 = 14U;
	uint16_t x248 = UINT16_MAX;
	int64_t t45 = -64356LL;

    t45 = (((x245-x246)/x247)&x248);

    if (t45 != 60855LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint64_t x250 = 7673724987LLU;
	int32_t x251 = -1;
	int32_t x252 = -28195;
	uint64_t t46 = 3LLU;

    t46 = (((x249-x250)/x251)&x252);

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int64_t x253 = -1LL;
	int16_t x254 = INT16_MIN;
	int32_t x255 = 7;
	int16_t x256 = INT16_MIN;

    t47 = (((x253-x254)/x255)&x256);

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x261 = INT32_MIN;
	uint32_t x262 = UINT32_MAX;
	static uint64_t x263 = 58048916606LLU;
	int64_t x264 = 69678919LL;
	static uint64_t t48 = 3443936LLU;

    t48 = (((x261-x262)/x263)&x264);

    if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x270 = 1022764423352LLU;
	int16_t x271 = 5916;
	int64_t x272 = INT64_MIN;

    t49 = (((x269-x270)/x271)&x272);

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x273 = 1;
	int16_t x274 = 7;
	int16_t x275 = 136;
	int64_t x276 = 112694635230817510LL;
	volatile int64_t t50 = 21173LL;

    t50 = (((x273-x274)/x275)&x276);

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x277 = UINT16_MAX;
	uint64_t x280 = 997778353064405764LLU;
	volatile uint64_t t51 = 27505055789148LLU;

    t51 = (((x277-x278)/x279)&x280);

    if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x282 = 6U;
	int64_t x283 = INT64_MIN;
	static int16_t x284 = INT16_MIN;

    t52 = (((x281-x282)/x283)&x284);

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x285 = -1;
	uint32_t x286 = 0U;
	static int32_t x287 = -1;
	int16_t x288 = INT16_MIN;

    t53 = (((x285-x286)/x287)&x288);

    if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int32_t x289 = INT32_MAX;
	uint32_t x290 = 1078667954U;
	volatile int64_t x291 = 120931548886LL;
	int16_t x292 = INT16_MIN;
	volatile int64_t t54 = -469829342238528282LL;

    t54 = (((x289-x290)/x291)&x292);

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x293 = INT8_MAX;
	volatile int16_t x294 = -8;
	static uint32_t x295 = UINT32_MAX;

    t55 = (((x293-x294)/x295)&x296);

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static int64_t x298 = 63565951072LL;
	int64_t t56 = -100127511149619074LL;

    t56 = (((x297-x298)/x299)&x300);

    if (t56 != 136LL) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint64_t x301 = 1566968786LLU;
	uint32_t x302 = 152953U;
	volatile uint8_t x303 = 81U;
	int64_t x304 = INT64_MIN;
	uint64_t t57 = 1471756368390LLU;

    t57 = (((x301-x302)/x303)&x304);

    if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x305 = INT8_MIN;
	int64_t x306 = -2099LL;
	static uint32_t x308 = 404380172U;
	int64_t t58 = -436111683LL;

    t58 = (((x305-x306)/x307)&x308);

    if (t58 != 404379660LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x313 = 1;
	uint8_t x314 = 7U;
	int8_t x315 = 9;
	volatile int32_t x316 = INT32_MIN;
	volatile int32_t t59 = -42;

    t59 = (((x313-x314)/x315)&x316);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int8_t x317 = INT8_MIN;
	static uint32_t x318 = 2565U;
	static int8_t x319 = INT8_MIN;
	int8_t x320 = -1;
	static uint32_t t60 = 5318051U;

    t60 = (((x317-x318)/x319)&x320);

    if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x321 = UINT64_MAX;
	uint16_t x323 = UINT16_MAX;
	uint64_t t61 = 3064LLU;

    t61 = (((x321-x322)/x323)&x324);

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x325 = -15264;
	int32_t x326 = INT32_MIN;
	int32_t x327 = -1260;
	int32_t t62 = 414835;

    t62 = (((x325-x326)/x327)&x328);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x333 = UINT8_MAX;
	int32_t x334 = -1;
	volatile int32_t x336 = -1;
	volatile int32_t t63 = -7;

    t63 = (((x333-x334)/x335)&x336);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x337 = INT8_MIN;
	uint64_t x338 = 4015156623LLU;
	uint16_t x339 = UINT16_MAX;
	volatile uint64_t t64 = 4338792820LLU;

    t64 = (((x337-x338)/x339)&x340);

    if (t64 != 173LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x342 = 15083101705LLU;
	static volatile int32_t x343 = -1;
	volatile uint64_t t65 = 223081LLU;

    t65 = (((x341-x342)/x343)&x344);

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int16_t x349 = -1016;
	int64_t x350 = 16044648542212956LL;
	int16_t x351 = -509;
	int8_t x352 = INT8_MIN;
	static int64_t t66 = 7695326633001LL;

    t66 = (((x349-x350)/x351)&x352);

    if (t66 != 31521902833408LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x353 = 11786;
	uint8_t x354 = 0U;
	static int8_t x356 = INT8_MIN;
	volatile int32_t t67 = 13351;

    t67 = (((x353-x354)/x355)&x356);

    if (t67 != -3072) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x357 = -1;
	int8_t x358 = -11;
	uint64_t x359 = 92654075646513LLU;
	uint64_t x360 = UINT64_MAX;
	volatile uint64_t t68 = 210964385LLU;

    t68 = (((x357-x358)/x359)&x360);

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x367 = UINT16_MAX;
	static volatile uint16_t x368 = UINT16_MAX;
	volatile int32_t t69 = 1;

    t69 = (((x365-x366)/x367)&x368);

    if (t69 != 298) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int8_t x369 = INT8_MAX;
	static int8_t x371 = -1;
	int8_t x372 = -12;
	int32_t t70 = -1172096;

    t70 = (((x369-x370)/x371)&x372);

    if (t70 != -32896) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x373 = INT16_MAX;
	uint16_t x374 = UINT16_MAX;
	static uint64_t x375 = UINT64_MAX;
	int32_t x376 = -5593614;
	static volatile uint64_t t71 = 4397380614979LLU;

    t71 = (((x373-x374)/x375)&x376);

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x377 = UINT32_MAX;
	uint32_t x378 = 10219U;
	uint32_t x379 = 28594U;
	int8_t x380 = INT8_MIN;
	volatile uint32_t t72 = 1635331U;

    t72 = (((x377-x378)/x379)&x380);

    if (t72 != 150144U) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x381 = INT8_MIN;
	int32_t x382 = -56;
	int8_t x383 = -10;
	static volatile int16_t x384 = -1;
	volatile int32_t t73 = -151200;

    t73 = (((x381-x382)/x383)&x384);

    if (t73 != 7) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x387 = 4U;
	uint64_t x388 = UINT64_MAX;
	uint64_t t74 = 1566935763879LLU;

    t74 = (((x385-x386)/x387)&x388);

    if (t74 != 18446744073709551546LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x393 = 59U;
	int32_t x394 = -652;
	volatile int32_t t75 = 46604;

    t75 = (((x393-x394)/x395)&x396);

    if (t75 != 11) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x397 = 32U;
	static int32_t x398 = 891423735;
	int16_t x399 = INT16_MIN;
	int64_t x400 = 895LL;

    t76 = (((x397-x398)/x399)&x400);

    if (t76 != 580LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x401 = -1;
	static uint8_t x402 = 89U;
	int16_t x403 = 1;
	uint8_t x404 = 35U;
	int32_t t77 = 934152561;

    t77 = (((x401-x402)/x403)&x404);

    if (t77 != 34) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x405 = -11300053;
	uint32_t x406 = UINT32_MAX;
	uint8_t x407 = 50U;

    t78 = (((x405-x406)/x407)&x408);

    if (t78 != 85673344U) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x413 = 114;
	int64_t x414 = INT64_MAX;
	uint64_t x415 = 107669546LLU;
	int64_t x416 = INT64_MIN;
	volatile uint64_t t79 = 37076LLU;

    t79 = (((x413-x414)/x415)&x416);

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x417 = -1;
	volatile int64_t x418 = 40141781654713LL;
	int64_t x420 = INT64_MIN;
	int64_t t80 = INT64_MIN;

    t80 = (((x417-x418)/x419)&x420);

    if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x421 = 968LL;
	volatile int64_t x423 = INT64_MAX;
	uint64_t x424 = UINT64_MAX;
	uint64_t t81 = 12775LLU;

    t81 = (((x421-x422)/x423)&x424);

    if (t81 != 1LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x426 = -1;
	int16_t x427 = 6;
	static volatile int32_t t82 = 19324;

    t82 = (((x425-x426)/x427)&x428);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x430 = -2;
	volatile int8_t x431 = 2;
	int8_t x432 = 57;
	volatile int32_t t83 = 3748350;

    t83 = (((x429-x430)/x431)&x432);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x437 = 52U;
	volatile uint16_t x438 = 703U;
	int32_t x439 = -201;
	int64_t x440 = INT64_MAX;
	volatile int64_t t84 = -7LL;

    t84 = (((x437-x438)/x439)&x440);

    if (t84 != 3LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x441 = 2532683559575716975LL;
	volatile int64_t x442 = -1LL;
	int32_t x444 = 51419366;
	int64_t t85 = 1791106803983826345LL;

    t85 = (((x441-x442)/x443)&x444);

    if (t85 != 51417186LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x446 = UINT16_MAX;
	uint32_t x447 = UINT32_MAX;
	static int32_t x448 = -5811022;
	static uint64_t t86 = 72085LLU;

    t86 = (((x445-x446)/x447)&x448);

    if (t86 != 4294967296LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x449 = -1;
	uint16_t x450 = 20U;
	uint32_t x451 = UINT32_MAX;
	static uint8_t x452 = 3U;
	static uint32_t t87 = 7U;

    t87 = (((x449-x450)/x451)&x452);

    if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x453 = -1;
	int16_t x454 = -8595;
	int64_t x455 = INT64_MAX;
	volatile int64_t x456 = -1LL;
	volatile int64_t t88 = -10125LL;

    t88 = (((x453-x454)/x455)&x456);

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static int8_t x458 = INT8_MIN;
	int32_t x460 = 5;
	static volatile int32_t t89 = -502109323;

    t89 = (((x457-x458)/x459)&x460);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x462 = 55235939665232746LLU;
	uint32_t x463 = 1902427U;
	static volatile int64_t x464 = -1LL;
	volatile uint64_t t90 = 2366885391201082LLU;

    t90 = (((x461-x462)/x463)&x464);

    if (t90 != 9667392301541LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x465 = 4;
	int16_t x466 = -18;
	static int64_t x467 = INT64_MAX;
	volatile int8_t x468 = 0;
	volatile int64_t t91 = 19921995646LL;

    t91 = (((x465-x466)/x467)&x468);

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint8_t x469 = UINT8_MAX;
	int16_t x470 = INT16_MIN;
	int32_t x471 = -82;
	int8_t x472 = INT8_MIN;
	int32_t t92 = -122995;

    t92 = (((x469-x470)/x471)&x472);

    if (t92 != -512) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x473 = INT8_MAX;
	volatile int32_t x474 = -64;
	int32_t x475 = 46255343;
	volatile int64_t x476 = INT64_MAX;
	int64_t t93 = -2LL;

    t93 = (((x473-x474)/x475)&x476);

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static int16_t x481 = 1421;
	int8_t x482 = 4;
	int64_t x483 = -1770828692240941302LL;
	volatile int64_t t94 = -2400293216829LL;

    t94 = (((x481-x482)/x483)&x484);

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x486 = 139U;
	int16_t x487 = INT16_MAX;

    t95 = (((x485-x486)/x487)&x488);

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x489 = INT8_MIN;
	int8_t x490 = INT8_MAX;
	volatile int16_t x491 = -1;
	int64_t x492 = 0LL;
	int64_t t96 = -1084LL;

    t96 = (((x489-x490)/x491)&x492);

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x493 = INT16_MIN;
	volatile int8_t x494 = -1;
	int32_t x495 = 141368;
	static int8_t x496 = -1;

    t97 = (((x493-x494)/x495)&x496);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x497 = 31;
	int16_t x498 = INT16_MIN;
	int64_t x499 = -1LL;
	uint16_t x500 = 14U;

    t98 = (((x497-x498)/x499)&x500);

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile uint8_t x501 = 1U;
	int16_t x502 = INT16_MIN;
	int64_t x503 = INT64_MIN;
	uint8_t x504 = UINT8_MAX;
	volatile int64_t t99 = 369477181283434LL;

    t99 = (((x501-x502)/x503)&x504);

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int32_t x505 = 103996206;
	int64_t x506 = INT64_MAX;
	int64_t x507 = -1LL;
	int16_t x508 = INT16_MIN;
	int64_t t100 = -64219424314176LL;

    t100 = (((x505-x506)/x507)&x508);

    if (t100 != 9223372036750770176LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int32_t x509 = INT32_MIN;
	uint64_t x510 = 3729198LLU;
	volatile int32_t x512 = 0;
	uint64_t t101 = 114786259LLU;

    t101 = (((x509-x510)/x511)&x512);

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x514 = 56661;
	volatile int64_t t102 = 417934222780LL;

    t102 = (((x513-x514)/x515)&x516);

    if (t102 != 140739635841327LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x517 = INT8_MIN;
	uint8_t x518 = 109U;
	int64_t x519 = INT64_MIN;
	int32_t x520 = INT32_MIN;
	int64_t t103 = 22475307273594LL;

    t103 = (((x517-x518)/x519)&x520);

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x521 = -1;
	int16_t x522 = INT16_MIN;
	int8_t x523 = INT8_MIN;
	uint64_t x524 = 3678859907926221484LLU;
	volatile uint64_t t104 = 231259065954439LLU;

    t104 = (((x521-x522)/x523)&x524);

    if (t104 != 3678859907926221312LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x525 = INT16_MAX;
	uint64_t x526 = 2164405LLU;
	volatile uint64_t x527 = 104283855922LLU;
	int32_t x528 = INT32_MAX;
	uint64_t t105 = 20LLU;

    t105 = (((x525-x526)/x527)&x528);

    if (t105 != 176889739LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x529 = 1;
	int32_t x530 = INT32_MAX;
	int32_t t106 = -42079;

    t106 = (((x529-x530)/x531)&x532);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x534 = 61;
	uint32_t x535 = 40584335U;
	int16_t x536 = INT16_MIN;
	int64_t t107 = -433220902387101778LL;

    t107 = (((x533-x534)/x535)&x536);

    if (t107 != -32768LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static int8_t x537 = INT8_MAX;
	static uint16_t x538 = 6723U;
	int8_t x539 = 1;
	static int8_t x540 = -1;
	static int32_t t108 = -234012193;

    t108 = (((x537-x538)/x539)&x540);

    if (t108 != -6596) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x541 = INT8_MIN;
	int8_t x542 = INT8_MIN;
	volatile int8_t x543 = 5;
	int16_t x544 = -6066;
	volatile int32_t t109 = -23461;

    t109 = (((x541-x542)/x543)&x544);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x545 = -13;
	volatile int8_t x546 = -1;
	volatile int32_t x547 = -93778494;
	uint32_t x548 = 1230902170U;
	uint32_t t110 = 1778178042U;

    t110 = (((x545-x546)/x547)&x548);

    if (t110 != 0U) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x549 = -1;
	int8_t x550 = INT8_MAX;
	int64_t x551 = INT64_MAX;
	volatile int16_t x552 = -263;
	volatile int64_t t111 = -21641LL;

    t111 = (((x549-x550)/x551)&x552);

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x553 = -1LL;
	int8_t x554 = INT8_MAX;
	int64_t x556 = INT64_MAX;
	static int64_t t112 = 1063717109LL;

    t112 = (((x553-x554)/x555)&x556);

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x557 = 13483;
	static int64_t x559 = INT64_MIN;
	uint16_t x560 = 330U;
	static int64_t t113 = -3235203LL;

    t113 = (((x557-x558)/x559)&x560);

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x562 = 250682U;
	int32_t x563 = INT32_MIN;
	volatile int16_t x564 = 2;
	volatile uint32_t t114 = 2U;

    t114 = (((x561-x562)/x563)&x564);

    if (t114 != 0U) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x565 = -58;
	int32_t x566 = INT32_MIN;
	volatile uint32_t x568 = UINT32_MAX;
	uint64_t t115 = 8515840323776033684LLU;

    t115 = (((x565-x566)/x567)&x568);

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x569 = 19202U;
	static volatile uint64_t x570 = 8239048LLU;
	static uint8_t x571 = 120U;

    t116 = (((x569-x570)/x571)&x572);

    if (t116 != 572593807LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile uint32_t x573 = 71286128U;
	uint8_t x574 = 0U;
	volatile int8_t x575 = 6;
	int32_t x576 = INT32_MAX;
	volatile uint32_t t117 = 1846802528U;

    t117 = (((x573-x574)/x575)&x576);

    if (t117 != 11881021U) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x577 = -1;
	int16_t x578 = INT16_MIN;
	volatile int16_t x579 = INT16_MAX;
	int32_t x580 = INT32_MAX;

    t118 = (((x577-x578)/x579)&x580);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x582 = 84LLU;
	uint64_t x583 = 203020880172874LLU;
	static int64_t x584 = 19741037125519099LL;
	volatile uint64_t t119 = 24403602LLU;

    t119 = (((x581-x582)/x583)&x584);

    if (t119 != 82665LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x588 = 47143640LLU;
	volatile uint64_t t120 = 2095719950LLU;

    t120 = (((x585-x586)/x587)&x588);

    if (t120 != 0LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x589 = 0;
	int16_t x590 = INT16_MAX;
	volatile int32_t x592 = 208215;
	static volatile int32_t t121 = 2;

    t121 = (((x589-x590)/x591)&x592);

    if (t121 != 208128) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x593 = -1LL;
	static int32_t x594 = INT32_MIN;
	static int8_t x595 = 1;
	int32_t x596 = 1;

    t122 = (((x593-x594)/x595)&x596);

    if (t122 != 1LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x605 = 2687;
	uint8_t x608 = UINT8_MAX;

    t123 = (((x605-x606)/x607)&x608);

    if (t123 != 0LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x609 = INT32_MIN;
	int8_t x610 = -1;
	static int8_t x611 = INT8_MIN;
	static volatile uint8_t x612 = 42U;
	int32_t t124 = -220050704;

    t124 = (((x609-x610)/x611)&x612);

    if (t124 != 42) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x617 = 46U;
	volatile uint32_t x618 = 121930U;
	int32_t x619 = INT32_MIN;
	int64_t x620 = INT64_MAX;
	volatile int64_t t125 = 44594250LL;

    t125 = (((x617-x618)/x619)&x620);

    if (t125 != 1LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x621 = INT32_MIN;
	int8_t x623 = INT8_MIN;
	static int64_t x624 = -1LL;
	volatile int64_t t126 = -390627LL;

    t126 = (((x621-x622)/x623)&x624);

    if (t126 != -72057594021150720LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x626 = INT16_MIN;
	int32_t x627 = INT32_MIN;
	volatile uint64_t x628 = UINT64_MAX;
	volatile uint64_t t127 = 15658849634475LLU;

    t127 = (((x625-x626)/x627)&x628);

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x633 = 1042679083U;
	int16_t x635 = 2;
	uint8_t x636 = 4U;
	uint32_t t128 = 38233U;

    t128 = (((x633-x634)/x635)&x636);

    if (t128 != 4U) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x637 = INT8_MIN;
	static volatile int32_t x638 = 560413;
	uint32_t x639 = 88785U;
	int64_t x640 = INT64_MAX;
	static int64_t t129 = 110903406621328LL;

    t129 = (((x637-x638)/x639)&x640);

    if (t129 != 48368LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x641 = -1;
	uint16_t x642 = 508U;

    t130 = (((x641-x642)/x643)&x644);

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x647 = 1015;
	volatile uint64_t t131 = 121681935984088LLU;

    t131 = (((x645-x646)/x647)&x648);

    if (t131 != 2068LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x649 = INT16_MIN;
	int8_t x650 = INT8_MAX;
	int32_t x651 = -1;
	int8_t x652 = -1;
	volatile int32_t t132 = 1;

    t132 = (((x649-x650)/x651)&x652);

    if (t132 != 32895) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x653 = INT32_MAX;
	uint32_t x654 = UINT32_MAX;
	volatile uint64_t x655 = UINT64_MAX;
	uint64_t t133 = 231LLU;

    t133 = (((x653-x654)/x655)&x656);

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x657 = UINT16_MAX;
	int32_t x658 = INT32_MAX;
	volatile int32_t t134 = 35839;

    t134 = (((x657-x658)/x659)&x660);

    if (t134 != 65408) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x661 = INT16_MIN;
	volatile int32_t x664 = INT32_MAX;
	int32_t t135 = 172955003;

    t135 = (((x661-x662)/x663)&x664);

    if (t135 != 2147483520) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x665 = 36400;
	int16_t x666 = -1;
	int16_t x667 = INT16_MAX;
	static volatile int32_t x668 = -1;
	int32_t t136 = -30863462;

    t136 = (((x665-x666)/x667)&x668);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x669 = INT8_MIN;
	static int64_t x670 = INT64_MIN;
	int16_t x671 = -44;
	int8_t x672 = INT8_MIN;

    t137 = (((x669-x670)/x671)&x672);

    if (t137 != -209622091746699520LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x673 = 3039298LLU;
	int64_t x674 = INT64_MIN;
	uint32_t x675 = 5U;
	volatile uint64_t t138 = 243999465LLU;

    t138 = (((x673-x674)/x675)&x676);

    if (t138 != 13LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x677 = INT16_MIN;
	static int8_t x678 = INT8_MIN;
	static volatile int16_t x679 = INT16_MIN;
	int64_t x680 = 66754410LL;

    t139 = (((x677-x678)/x679)&x680);

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static int32_t x681 = -2131643;
	int64_t x682 = -1LL;
	int16_t x683 = INT16_MIN;
	int8_t x684 = INT8_MAX;
	static int64_t t140 = 137670872698382388LL;

    t140 = (((x681-x682)/x683)&x684);

    if (t140 != 65LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x690 = UINT16_MAX;
	uint8_t x691 = 11U;
	uint8_t x692 = UINT8_MAX;

    t141 = (((x689-x690)/x691)&x692);

    if (t141 != 46U) { NG(); } else { ; }
	
}

void f142(void) {
    	static int64_t x693 = 15405LL;
	static int32_t x694 = -1050376140;
	int32_t x695 = INT32_MIN;
	static uint32_t x696 = 1493U;

    t142 = (((x693-x694)/x695)&x696);

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static int8_t x700 = INT8_MIN;

    t143 = (((x697-x698)/x699)&x700);

    if (t143 != 0U) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint64_t x702 = 3LLU;
	int8_t x703 = INT8_MIN;
	volatile uint64_t t144 = 669LLU;

    t144 = (((x701-x702)/x703)&x704);

    if (t144 != 1LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x705 = -1;
	static int16_t x707 = 2;
	int16_t x708 = -1;
	volatile int32_t t145 = -1;

    t145 = (((x705-x706)/x707)&x708);

    if (t145 != 16383) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x710 = 1U;
	volatile int64_t x711 = -1LL;
	static int16_t x712 = -1;
	int64_t t146 = -3288LL;

    t146 = (((x709-x710)/x711)&x712);

    if (t146 != -1190690LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x717 = 25U;
	int32_t x718 = INT32_MAX;
	volatile uint16_t x719 = 10U;
	static int16_t x720 = -25;
	volatile int32_t t147 = -31028352;

    t147 = (((x717-x718)/x719)&x720);

    if (t147 != -214748378) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint16_t x723 = 382U;
	int8_t x724 = INT8_MIN;

    t148 = (((x721-x722)/x723)&x724);

    if (t148 != 0U) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x725 = 2554669941941LL;
	volatile int32_t x726 = 22089;
	volatile uint16_t x727 = UINT16_MAX;
	uint16_t x728 = 392U;
	static int64_t t149 = -480008586291646LL;

    t149 = (((x725-x726)/x727)&x728);

    if (t149 != 128LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x731 = INT32_MAX;
	int64_t x732 = -7LL;

    t150 = (((x729-x730)/x731)&x732);

    if (t150 != 1LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x737 = -16262;
	static int8_t x738 = INT8_MIN;
	volatile int64_t x739 = INT64_MIN;
	uint8_t x740 = 51U;
	volatile int64_t t151 = -1LL;

    t151 = (((x737-x738)/x739)&x740);

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x745 = INT32_MAX;
	uint32_t x746 = 297828U;
	static uint64_t x747 = UINT64_MAX;

    t152 = (((x745-x746)/x747)&x748);

    if (t152 != 0LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x749 = 3237;
	int32_t x750 = INT32_MAX;
	static int32_t x752 = INT32_MIN;
	int32_t t153 = 712546;

    t153 = (((x749-x750)/x751)&x752);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x753 = 32112U;
	uint32_t x754 = 89U;
	static uint32_t x755 = 32U;
	int16_t x756 = INT16_MIN;
	volatile uint32_t t154 = 1818U;

    t154 = (((x753-x754)/x755)&x756);

    if (t154 != 0U) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x758 = -1;
	int32_t x759 = 1411;
	uint64_t x760 = 17342915690153088LLU;
	static uint64_t t155 = 1441075165808120LLU;

    t155 = (((x757-x758)/x759)&x760);

    if (t155 != 0LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x769 = 19;
	volatile uint32_t x770 = UINT32_MAX;
	static uint32_t t156 = 7585136U;

    t156 = (((x769-x770)/x771)&x772);

    if (t156 != 0U) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x773 = 539;
	int16_t x774 = INT16_MIN;
	int8_t x775 = -1;
	int8_t x776 = -1;

    t157 = (((x773-x774)/x775)&x776);

    if (t157 != -33307) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x777 = UINT64_MAX;
	int32_t x778 = INT32_MAX;
	volatile uint64_t x779 = UINT64_MAX;
	volatile uint32_t x780 = 2960022U;
	static volatile uint64_t t158 = 869190915659LLU;

    t158 = (((x777-x778)/x779)&x780);

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x781 = UINT8_MAX;
	int16_t x782 = -1;
	int64_t x784 = INT64_MAX;
	int64_t t159 = -10897600641756107LL;

    t159 = (((x781-x782)/x783)&x784);

    if (t159 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x785 = 10U;
	uint16_t x786 = UINT16_MAX;
	volatile uint32_t x787 = UINT32_MAX;
	uint32_t x788 = UINT32_MAX;
	volatile uint32_t t160 = 144153U;

    t160 = (((x785-x786)/x787)&x788);

    if (t160 != 0U) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x789 = UINT8_MAX;
	uint16_t x790 = 25775U;
	volatile uint8_t x791 = 12U;

    t161 = (((x789-x790)/x791)&x792);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x793 = 1;
	int16_t x796 = -1;
	int32_t t162 = 7620;

    t162 = (((x793-x794)/x795)&x796);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x797 = -1;
	static volatile int64_t x798 = INT64_MIN;
	int64_t x799 = 4837001LL;
	int8_t x800 = 4;
	volatile int64_t t163 = 8004826LL;

    t163 = (((x797-x798)/x799)&x800);

    if (t163 != 4LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x805 = 3583;
	uint16_t x806 = 515U;
	int16_t x807 = INT16_MIN;
	volatile int8_t x808 = INT8_MIN;

    t164 = (((x805-x806)/x807)&x808);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x813 = INT8_MAX;
	volatile int64_t x814 = -1LL;
	uint32_t x815 = 1350176U;
	volatile int64_t t165 = 26962600269LL;

    t165 = (((x813-x814)/x815)&x816);

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x817 = INT16_MIN;
	int8_t x818 = -1;
	uint16_t x819 = UINT16_MAX;

    t166 = (((x817-x818)/x819)&x820);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint8_t x821 = 0U;
	uint16_t x823 = 969U;
	volatile int64_t x824 = -8441LL;
	volatile int64_t t167 = -11233700995641LL;

    t167 = (((x821-x822)/x823)&x824);

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x825 = INT16_MAX;
	int32_t x826 = -1421675;
	int32_t t168 = 48826733;

    t168 = (((x825-x826)/x827)&x828);

    if (t168 != 1553) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x838 = UINT16_MAX;
	static volatile int64_t x839 = -123111LL;
	uint32_t x840 = 359878U;
	volatile int64_t t169 = -16759074751597LL;

    t169 = (((x837-x838)/x839)&x840);

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int16_t x841 = -2;
	uint16_t x843 = 15U;
	volatile int32_t t170 = 1684905;

    t170 = (((x841-x842)/x843)&x844);

    if (t170 != 42) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x849 = INT16_MIN;
	uint8_t x851 = 17U;
	int8_t x852 = INT8_MAX;

    t171 = (((x849-x850)/x851)&x852);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int32_t x853 = 2803292;
	int32_t x855 = INT32_MIN;
	static int64_t x856 = INT64_MIN;
	volatile int64_t t172 = 28457LL;

    t172 = (((x853-x854)/x855)&x856);

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x857 = INT8_MIN;
	volatile int8_t x858 = 0;
	int64_t x859 = 441LL;
	volatile int8_t x860 = 9;
	volatile int64_t t173 = 116075478811333LL;

    t173 = (((x857-x858)/x859)&x860);

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile uint8_t x861 = UINT8_MAX;
	uint32_t x862 = 35U;
	int64_t x863 = INT64_MIN;
	int8_t x864 = -1;
	static int64_t t174 = -32471602806LL;

    t174 = (((x861-x862)/x863)&x864);

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x866 = -3;
	static uint64_t x867 = 837390LLU;
	int32_t x868 = INT32_MIN;
	volatile uint64_t t175 = 116001LLU;

    t175 = (((x865-x866)/x867)&x868);

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x869 = 35;
	volatile int8_t x870 = -8;
	volatile uint32_t x872 = 3U;

    t176 = (((x869-x870)/x871)&x872);

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x873 = INT8_MIN;
	volatile int8_t x874 = -39;
	uint16_t x875 = UINT16_MAX;
	uint8_t x876 = 10U;
	volatile int32_t t177 = -76196912;

    t177 = (((x873-x874)/x875)&x876);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x877 = INT32_MIN;
	static volatile int64_t x878 = -1LL;
	int8_t x879 = -1;
	int64_t t178 = 46432LL;

    t178 = (((x877-x878)/x879)&x880);

    if (t178 != 10LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x881 = -87;
	static int16_t x883 = -1;
	int8_t x884 = INT8_MIN;
	static volatile uint32_t t179 = 210614U;

    t179 = (((x881-x882)/x883)&x884);

    if (t179 != 0U) { NG(); } else { ; }
	
}

void f180(void) {
    	static int64_t x885 = INT64_MIN;
	int32_t x886 = INT32_MIN;
	int32_t x887 = 4;
	static uint32_t x888 = 2U;
	static int64_t t180 = 8093142LL;

    t180 = (((x885-x886)/x887)&x888);

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint8_t x893 = 5U;
	volatile int8_t x894 = -1;
	int64_t x895 = 1955002LL;
	uint64_t x896 = 226444LLU;
	uint64_t t181 = 4584323LLU;

    t181 = (((x893-x894)/x895)&x896);

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x897 = -1;
	static int16_t x898 = -57;
	uint32_t x900 = 950418U;

    t182 = (((x897-x898)/x899)&x900);

    if (t182 != 0U) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x905 = INT16_MIN;
	int32_t x906 = 5;
	uint32_t x907 = 1547180U;
	static volatile int32_t x908 = INT32_MAX;
	uint32_t t183 = 40U;

    t183 = (((x905-x906)/x907)&x908);

    if (t183 != 2775U) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x909 = -1;
	int64_t x910 = INT64_MIN;
	int64_t x911 = INT64_MAX;
	uint32_t x912 = UINT32_MAX;

    t184 = (((x909-x910)/x911)&x912);

    if (t184 != 1LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x914 = INT8_MAX;
	static int8_t x916 = -1;
	volatile int64_t t185 = -815593297LL;

    t185 = (((x913-x914)/x915)&x916);

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x917 = 1;
	int8_t x918 = -1;
	int64_t x919 = INT64_MIN;
	int64_t x920 = INT64_MIN;
	volatile int64_t t186 = -62380LL;

    t186 = (((x917-x918)/x919)&x920);

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x922 = 14951796575069LLU;
	int8_t x924 = 6;
	uint64_t t187 = 246265661451LLU;

    t187 = (((x921-x922)/x923)&x924);

    if (t187 != 6LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x929 = 0U;
	static int32_t x930 = -1;
	int16_t x931 = INT16_MAX;
	volatile uint32_t x932 = 21U;

    t188 = (((x929-x930)/x931)&x932);

    if (t188 != 0U) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x933 = INT16_MIN;
	uint64_t x934 = UINT64_MAX;
	int16_t x935 = INT16_MIN;
	uint32_t x936 = UINT32_MAX;

    t189 = (((x933-x934)/x935)&x936);

    if (t189 != 1LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x938 = UINT16_MAX;
	static int32_t x939 = INT32_MIN;
	uint8_t x940 = 6U;
	static int32_t t190 = 980590;

    t190 = (((x937-x938)/x939)&x940);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x941 = INT64_MIN;
	volatile int64_t x942 = INT64_MIN;
	int16_t x943 = INT16_MIN;
	int64_t x944 = INT64_MAX;

    t191 = (((x941-x942)/x943)&x944);

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static int64_t x945 = INT64_MIN;
	int64_t x947 = 3LL;
	uint64_t t192 = 34867341890931196LLU;

    t192 = (((x945-x946)/x947)&x948);

    if (t192 != 0LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int64_t x949 = -232LL;
	static int8_t x951 = 1;
	int16_t x952 = INT16_MAX;
	volatile int64_t t193 = 88960459806501LL;

    t193 = (((x949-x950)/x951)&x952);

    if (t193 != 32537LL) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint16_t x953 = UINT16_MAX;
	uint16_t x954 = UINT16_MAX;
	volatile int8_t x955 = INT8_MIN;
	int16_t x956 = INT16_MAX;
	int32_t t194 = -11;

    t194 = (((x953-x954)/x955)&x956);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x957 = INT16_MAX;
	volatile uint16_t x959 = UINT16_MAX;
	volatile uint32_t x960 = 83U;
	static int64_t t195 = -205320475LL;

    t195 = (((x957-x958)/x959)&x960);

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x961 = -16;
	int8_t x962 = INT8_MAX;
	int8_t x963 = INT8_MIN;
	static int32_t t196 = -716;

    t196 = (((x961-x962)/x963)&x964);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x965 = 98U;
	int32_t x967 = -1;
	volatile int32_t t197 = -417015;

    t197 = (((x965-x966)/x967)&x968);

    if (t197 != 8) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x969 = -1LL;
	int64_t x970 = -1LL;
	static int64_t x972 = INT64_MIN;
	int64_t t198 = 304462700313643LL;

    t198 = (((x969-x970)/x971)&x972);

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x973 = UINT8_MAX;
	uint16_t x974 = UINT16_MAX;
	volatile int16_t x975 = -2067;
	static uint64_t x976 = 346468400003LLU;
	volatile uint64_t t199 = 7LLU;

    t199 = (((x973-x974)/x975)&x976);

    if (t199 != 3LLU) { NG(); } else { ; }
	
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

