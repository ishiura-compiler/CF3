
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

static int8_t x1 = 0;
int64_t x4 = -1LL;
uint8_t x6 = UINT8_MAX;
static uint64_t x11 = 11353LLU;
int16_t x17 = INT16_MIN;
static int8_t x18 = -1;
volatile int32_t t4 = -2332643;
int8_t x21 = 9;
volatile int16_t x37 = INT16_MAX;
int8_t x38 = -60;
uint64_t x40 = 2069889LLU;
int8_t x47 = 48;
volatile int32_t t8 = 3;
int8_t x51 = -1;
int64_t x53 = INT64_MIN;
static int64_t x54 = -1LL;
uint64_t x72 = UINT64_MAX;
volatile uint32_t t14 = 249134U;
static int16_t x86 = -85;
int32_t x92 = INT32_MAX;
volatile uint64_t t18 = 749758LLU;
uint16_t x129 = UINT16_MAX;
int16_t x130 = -1;
int32_t x131 = -2980674;
static volatile uint32_t t19 = 1095555U;
uint32_t x142 = 3467U;
int64_t x158 = 2792LL;
int32_t x161 = 28;
volatile int16_t x164 = INT16_MAX;
int16_t x165 = INT16_MIN;
volatile int64_t x166 = INT64_MIN;
uint32_t x167 = UINT32_MAX;
volatile uint32_t t26 = 6770628U;
uint32_t x176 = 2587457U;
uint8_t x181 = 0U;
int8_t x184 = -28;
uint32_t x185 = 13902U;
uint64_t x186 = 6365822410477106244LLU;
int64_t t35 = 29922416LL;
static uint16_t x222 = 71U;
int32_t x241 = INT32_MIN;
volatile int32_t x242 = INT32_MIN;
int16_t x248 = INT16_MAX;
volatile uint16_t x257 = 66U;
uint64_t t45 = 6068LLU;
int32_t t46 = 249;
uint8_t x300 = UINT8_MAX;
volatile int8_t x304 = INT8_MIN;
int32_t x307 = -1;
int8_t x308 = INT8_MAX;
int64_t t55 = 1185743LL;
int32_t x318 = INT32_MIN;
volatile uint64_t x320 = UINT64_MAX;
int8_t x336 = INT8_MIN;
volatile uint64_t t59 = 2434747283LLU;
volatile uint8_t x345 = 13U;
int64_t t60 = 220189695307LL;
int16_t x352 = 423;
int64_t x357 = INT64_MIN;
int8_t x359 = INT8_MIN;
int8_t x372 = -1;
volatile uint32_t t66 = 32961288U;
int8_t x382 = INT8_MIN;
volatile uint64_t t68 = 479746444701LLU;
volatile uint16_t x388 = 0U;
uint64_t x392 = 13727509295753LLU;
static int64_t x394 = INT64_MIN;
int32_t x401 = 7;
int16_t x402 = -1;
uint32_t x405 = 40320U;
static uint64_t x410 = UINT64_MAX;
uint64_t x412 = 74262658877113204LLU;
int8_t x414 = INT8_MAX;
static int64_t x420 = 1171LL;
int64_t t77 = -895974039LL;
volatile int8_t x423 = -2;
uint32_t x432 = 2U;
static int64_t x438 = INT64_MIN;
int8_t x439 = INT8_MIN;
int32_t t81 = -13170115;
static volatile int32_t t82 = 374248;
uint64_t x453 = 1231056678515920177LLU;
int64_t t84 = -3495155193LL;
static volatile int64_t x465 = -363266782048179LL;
static int8_t x491 = -2;
uint64_t x493 = 202661135LLU;
volatile uint16_t x497 = 1U;
int8_t x499 = INT8_MIN;
static int8_t x500 = -1;
static int32_t t94 = 274;
static int32_t t95 = 74064;
int16_t x520 = INT16_MIN;
int32_t x525 = INT32_MIN;
int32_t t97 = -3;
int8_t x534 = 7;
int8_t x536 = INT8_MIN;
static volatile uint64_t t101 = 3892598LLU;
int8_t x566 = -39;
int16_t x569 = INT16_MIN;
int32_t x570 = INT32_MAX;
static int32_t t105 = -230746;
uint8_t x582 = 7U;
int32_t t107 = -139;
int8_t x590 = INT8_MIN;
int16_t x591 = 0;
int64_t x597 = -1LL;
int32_t x599 = INT32_MIN;
int64_t x600 = 170517191LL;
volatile int16_t x616 = INT16_MAX;
volatile int32_t t111 = -46;
int32_t x638 = INT32_MAX;
static volatile uint16_t x645 = 1101U;
static volatile int32_t x646 = -1968;
static volatile uint8_t x652 = UINT8_MAX;
static volatile uint16_t x664 = 48U;
int8_t x665 = INT8_MAX;
static uint64_t x679 = 7834LLU;
static int32_t x697 = -3;
int16_t x703 = -1;
uint8_t x704 = UINT8_MAX;
volatile int16_t x706 = 14612;
int64_t x721 = 567367631623702206LL;
int16_t x723 = INT16_MAX;
static int8_t x740 = 1;
int32_t t133 = -1614;
volatile uint8_t x743 = UINT8_MAX;
int64_t x745 = INT64_MAX;
int16_t x756 = INT16_MAX;
volatile int32_t t137 = -3812553;
static int8_t x757 = INT8_MAX;
volatile int16_t x766 = -1;
int64_t x770 = INT64_MIN;
uint64_t x775 = UINT64_MAX;
int32_t x780 = INT32_MIN;
int16_t x790 = -2540;
uint64_t t144 = 6726416909LLU;
volatile uint32_t t145 = 23U;
int16_t x800 = INT16_MAX;
volatile int64_t x802 = INT64_MIN;
int64_t x810 = 63990769913091240LL;
uint64_t x827 = UINT64_MAX;
volatile int64_t x829 = INT64_MIN;
static int16_t x830 = INT16_MIN;
static volatile uint16_t x840 = 3U;
int64_t x841 = 1009891943591LL;
int32_t x850 = 4;
uint32_t x851 = 0U;
uint16_t x854 = UINT16_MAX;
volatile int32_t t156 = -6;
uint16_t x892 = 31616U;
int8_t x895 = -1;
static volatile int32_t x902 = INT32_MIN;
volatile uint64_t x906 = 6LLU;
int64_t x914 = -926016845410230676LL;
volatile int32_t t167 = -1142683;
static uint32_t x925 = 4418874U;
int8_t x927 = -1;
static volatile int16_t x928 = -8885;
uint32_t x934 = 161173U;
static int32_t x938 = -188255;
static volatile uint64_t t171 = UINT64_MAX;
volatile int32_t x955 = -177113556;
static int32_t x957 = 41754;
uint32_t t173 = 17799U;
volatile uint64_t t174 = 206LLU;
int32_t x970 = INT32_MIN;
static int32_t x974 = INT32_MIN;
int32_t x975 = 2024;
uint32_t x984 = 950880U;
int8_t x986 = INT8_MAX;
volatile uint32_t t179 = 8528787U;
uint16_t x992 = 2296U;
volatile int32_t x1002 = 958557866;
volatile int32_t t182 = 109;
uint8_t x1006 = 6U;
static int8_t x1012 = -4;
int16_t x1014 = -13;
int8_t x1018 = INT8_MAX;
static int16_t x1019 = 3;
int64_t x1022 = -1699461065LL;
volatile int64_t t188 = 119059567489LL;
static int16_t x1041 = -1;
int8_t x1059 = INT8_MIN;
uint8_t x1060 = UINT8_MAX;
volatile uint64_t t194 = 15440920066LLU;
static uint16_t x1087 = 279U;
int8_t x1088 = INT8_MIN;
static volatile int16_t x1091 = INT16_MIN;


void f0(void) {
    	uint8_t x2 = 8U;
	int64_t x3 = INT64_MAX;
	volatile int64_t t0 = INT64_MAX;

    t0 = ((x1==x2)-(x3*x4));

    if (t0 != INT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint64_t x5 = 407830787798LLU;
	uint8_t x7 = UINT8_MAX;
	volatile uint16_t x8 = 145U;
	static volatile int32_t t1 = 13;

    t1 = ((x5==x6)-(x7*x8));

    if (t1 != -36975) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MIN;
	static int8_t x10 = INT8_MIN;
	int8_t x12 = 0;
	uint64_t t2 = 288501LLU;

    t2 = ((x9==x10)-(x11*x12));

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = -1;
	static int8_t x14 = 0;
	int16_t x15 = 3688;
	static uint16_t x16 = 1627U;
	int32_t t3 = -458;

    t3 = ((x13==x14)-(x15*x16));

    if (t3 != -6000376) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x19 = 2;
	static uint16_t x20 = 221U;

    t4 = ((x17==x18)-(x19*x20));

    if (t4 != -442) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x22 = -244;
	uint64_t x23 = UINT64_MAX;
	static int8_t x24 = -1;
	volatile uint64_t t5 = UINT64_MAX;

    t5 = ((x21==x22)-(x23*x24));

    if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x39 = INT8_MIN;
	uint64_t t6 = 166822LLU;

    t6 = ((x37==x38)-(x39*x40));

    if (t6 != 264945792LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x41 = INT16_MIN;
	volatile int16_t x42 = -1;
	static int8_t x43 = -1;
	static uint64_t x44 = 1766095775LLU;
	volatile uint64_t t7 = 24518LLU;

    t7 = ((x41==x42)-(x43*x44));

    if (t7 != 1766095775LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x45 = UINT32_MAX;
	uint32_t x46 = 334408U;
	static int16_t x48 = INT16_MIN;

    t8 = ((x45==x46)-(x47*x48));

    if (t8 != 1572864) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x49 = INT8_MIN;
	int8_t x50 = INT8_MAX;
	int8_t x52 = INT8_MIN;
	volatile int32_t t9 = -1730813;

    t9 = ((x49==x50)-(x51*x52));

    if (t9 != -128) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x55 = UINT64_MAX;
	int16_t x56 = INT16_MIN;
	static uint64_t t10 = 4665314LLU;

    t10 = ((x53==x54)-(x55*x56));

    if (t10 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x57 = INT64_MIN;
	uint32_t x58 = 6367286U;
	volatile uint8_t x59 = 43U;
	volatile uint32_t x60 = UINT32_MAX;
	volatile uint32_t t11 = 21907U;

    t11 = ((x57==x58)-(x59*x60));

    if (t11 != 43U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x65 = 0U;
	volatile int64_t x66 = -190881428523LL;
	uint32_t x67 = 14329367U;
	int64_t x68 = -1LL;
	int64_t t12 = 3041082578258646699LL;

    t12 = ((x65==x66)-(x67*x68));

    if (t12 != 14329367LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x69 = INT16_MIN;
	static int8_t x70 = INT8_MAX;
	static int8_t x71 = INT8_MIN;
	static volatile uint64_t t13 = 71885430617967218LLU;

    t13 = ((x69==x70)-(x71*x72));

    if (t13 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x81 = -22924151043021266LL;
	uint8_t x82 = UINT8_MAX;
	static volatile int8_t x83 = INT8_MIN;
	uint32_t x84 = 5349201U;

    t14 = ((x81==x82)-(x83*x84));

    if (t14 != 684697728U) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint16_t x85 = 108U;
	volatile uint64_t x87 = UINT64_MAX;
	int32_t x88 = -2157657;
	uint64_t t15 = 1497LLU;

    t15 = ((x85==x86)-(x87*x88));

    if (t15 != 18446744073707393959LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint8_t x89 = 45U;
	int64_t x90 = -94995731918162914LL;
	int64_t x91 = 114LL;
	int64_t t16 = -948693LL;

    t16 = ((x89==x90)-(x91*x92));

    if (t16 != -244813135758LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x101 = UINT8_MAX;
	int32_t x102 = INT32_MIN;
	volatile uint16_t x103 = 433U;
	static int8_t x104 = -1;
	volatile int32_t t17 = 0;

    t17 = ((x101==x102)-(x103*x104));

    if (t17 != 433) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int64_t x113 = INT64_MIN;
	int64_t x114 = INT64_MIN;
	uint32_t x115 = UINT32_MAX;
	static uint64_t x116 = 36045LLU;

    t18 = ((x113==x114)-(x115*x116));

    if (t18 != 18446589261613403342LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x132 = UINT32_MAX;

    t19 = ((x129==x130)-(x131*x132));

    if (t19 != 4291986622U) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x141 = INT32_MIN;
	static uint16_t x143 = UINT16_MAX;
	static volatile uint64_t x144 = 7517LLU;
	uint64_t t20 = 8442514149LLU;

    t20 = ((x141==x142)-(x143*x144));

    if (t20 != 18446744073216925021LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x145 = INT16_MAX;
	int32_t x146 = INT32_MIN;
	uint16_t x147 = 4110U;
	static int8_t x148 = INT8_MIN;
	int32_t t21 = -210834;

    t21 = ((x145==x146)-(x147*x148));

    if (t21 != 526080) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x149 = 1;
	int64_t x150 = INT64_MIN;
	volatile uint64_t x151 = 124766110253146083LLU;
	int64_t x152 = -13292073475453012LL;
	uint64_t t22 = 388272889150LLU;

    t22 = ((x149==x150)-(x151*x152));

    if (t22 != 5767114962574837372LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint8_t x153 = UINT8_MAX;
	int8_t x154 = -1;
	static int16_t x155 = INT16_MIN;
	int32_t x156 = -1;
	int32_t t23 = 1;

    t23 = ((x153==x154)-(x155*x156));

    if (t23 != -32768) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x157 = 1;
	static int8_t x159 = INT8_MIN;
	volatile int8_t x160 = 3;
	int32_t t24 = -55274;

    t24 = ((x157==x158)-(x159*x160));

    if (t24 != 384) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x162 = INT32_MIN;
	int8_t x163 = INT8_MIN;
	volatile int32_t t25 = -13878;

    t25 = ((x161==x162)-(x163*x164));

    if (t25 != 4194176) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint32_t x168 = 1382U;

    t26 = ((x165==x166)-(x167*x168));

    if (t26 != 1382U) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x169 = -1;
	volatile int8_t x170 = -19;
	uint16_t x171 = 1U;
	int64_t x172 = -1LL;
	int64_t t27 = 263544785LL;

    t27 = ((x169==x170)-(x171*x172));

    if (t27 != 1LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x173 = 43196LL;
	int32_t x174 = -1689;
	static int32_t x175 = INT32_MAX;
	uint32_t t28 = 76325512U;

    t28 = ((x173==x174)-(x175*x176));

    if (t28 != 2150071105U) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x182 = INT64_MIN;
	volatile int8_t x183 = INT8_MIN;
	int32_t t29 = 6161;

    t29 = ((x181==x182)-(x183*x184));

    if (t29 != -3584) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint64_t x187 = 13LLU;
	uint16_t x188 = UINT16_MAX;
	volatile uint64_t t30 = 1240182518034LLU;

    t30 = ((x185==x186)-(x187*x188));

    if (t30 != 18446744073708699661LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x189 = INT32_MIN;
	volatile uint32_t x190 = UINT32_MAX;
	uint32_t x191 = UINT32_MAX;
	static uint64_t x192 = 2949585804391853LLU;
	static uint64_t t31 = 5553568383399023LLU;

    t31 = ((x189==x190)-(x191*x192));

    if (t31 != 715937053411046829LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint64_t x201 = UINT64_MAX;
	int32_t x202 = -1;
	volatile int32_t x203 = 98;
	volatile uint32_t x204 = 0U;
	uint32_t t32 = 1783791601U;

    t32 = ((x201==x202)-(x203*x204));

    if (t32 != 1U) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x209 = -1;
	volatile uint32_t x210 = UINT32_MAX;
	volatile uint16_t x211 = 29U;
	uint16_t x212 = 16U;
	volatile int32_t t33 = -912;

    t33 = ((x209==x210)-(x211*x212));

    if (t33 != -463) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x213 = 85U;
	int16_t x214 = 2;
	uint32_t x215 = 19616567U;
	static volatile uint32_t x216 = 3U;
	uint32_t t34 = 5828U;

    t34 = ((x213==x214)-(x215*x216));

    if (t34 != 4236117595U) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x217 = INT8_MAX;
	volatile int16_t x218 = INT16_MAX;
	static uint8_t x219 = 2U;
	int64_t x220 = 215780027393LL;

    t35 = ((x217==x218)-(x219*x220));

    if (t35 != -431560054786LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x221 = INT32_MIN;
	int16_t x223 = 0;
	uint64_t x224 = 899151462772035LLU;
	volatile uint64_t t36 = 39505685948601013LLU;

    t36 = ((x221==x222)-(x223*x224));

    if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x229 = UINT8_MAX;
	static int64_t x230 = -34092477277LL;
	static int32_t x231 = -1;
	static int16_t x232 = INT16_MIN;
	volatile int32_t t37 = -1057;

    t37 = ((x229==x230)-(x231*x232));

    if (t37 != -32768) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x233 = INT32_MIN;
	volatile int64_t x234 = INT64_MAX;
	uint16_t x235 = 82U;
	uint64_t x236 = UINT64_MAX;
	static volatile uint64_t t38 = 115890LLU;

    t38 = ((x233==x234)-(x235*x236));

    if (t38 != 82LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x243 = -1LL;
	static uint32_t x244 = UINT32_MAX;
	int64_t t39 = 2008787LL;

    t39 = ((x241==x242)-(x243*x244));

    if (t39 != 4294967296LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x245 = -1LL;
	uint32_t x246 = 11U;
	volatile int32_t x247 = -174;
	static int32_t t40 = 141;

    t40 = ((x245==x246)-(x247*x248));

    if (t40 != 5701458) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x249 = -62;
	int8_t x250 = -1;
	static uint32_t x251 = 12957U;
	uint32_t x252 = 787416335U;
	static volatile uint32_t t41 = 151U;

    t41 = ((x249==x250)-(x251*x252));

    if (t41 != 2288842701U) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x253 = -874192LL;
	volatile int64_t x254 = INT64_MAX;
	static uint32_t x255 = UINT32_MAX;
	uint16_t x256 = 85U;
	uint32_t t42 = 2389U;

    t42 = ((x253==x254)-(x255*x256));

    if (t42 != 85U) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x258 = INT8_MIN;
	uint8_t x259 = UINT8_MAX;
	uint16_t x260 = 1197U;
	static volatile int32_t t43 = 1;

    t43 = ((x257==x258)-(x259*x260));

    if (t43 != -305235) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x261 = INT8_MAX;
	int64_t x262 = INT64_MIN;
	volatile int32_t x263 = INT32_MIN;
	int64_t x264 = -1670263556LL;
	volatile int64_t t44 = 693328LL;

    t44 = ((x261==x262)-(x263*x264));

    if (t44 != -3586863674360332288LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x269 = UINT64_MAX;
	int16_t x270 = 1;
	int64_t x271 = 1405252889605995LL;
	uint64_t x272 = UINT64_MAX;

    t45 = ((x269==x270)-(x271*x272));

    if (t45 != 1405252889605995LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint16_t x277 = 1U;
	uint64_t x278 = 1357LLU;
	int16_t x279 = INT16_MIN;
	int8_t x280 = 13;

    t46 = ((x277==x278)-(x279*x280));

    if (t46 != 425984) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x281 = -600284487LL;
	int16_t x282 = INT16_MIN;
	int8_t x283 = INT8_MAX;
	uint32_t x284 = 0U;
	static uint32_t t47 = 629948724U;

    t47 = ((x281==x282)-(x283*x284));

    if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int16_t x285 = INT16_MIN;
	uint64_t x286 = UINT64_MAX;
	int16_t x287 = INT16_MIN;
	volatile int8_t x288 = 1;
	static volatile int32_t t48 = 522157122;

    t48 = ((x285==x286)-(x287*x288));

    if (t48 != 32768) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x289 = 13910529LLU;
	uint32_t x290 = UINT32_MAX;
	uint32_t x291 = 119986U;
	volatile int8_t x292 = 0;
	static volatile uint32_t t49 = 4371073U;

    t49 = ((x289==x290)-(x291*x292));

    if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x293 = UINT16_MAX;
	int32_t x294 = -14880;
	int32_t x295 = INT32_MIN;
	int8_t x296 = 0;
	static volatile int32_t t50 = 294;

    t50 = ((x293==x294)-(x295*x296));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x297 = 358;
	uint16_t x298 = 6558U;
	uint32_t x299 = UINT32_MAX;
	volatile uint32_t t51 = 61405185U;

    t51 = ((x297==x298)-(x299*x300));

    if (t51 != 255U) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x301 = 1141784054666LLU;
	static volatile uint8_t x302 = 1U;
	static uint8_t x303 = 21U;
	int32_t t52 = -31936;

    t52 = ((x301==x302)-(x303*x304));

    if (t52 != 2688) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x305 = -5;
	int8_t x306 = 0;
	int32_t t53 = -10560;

    t53 = ((x305==x306)-(x307*x308));

    if (t53 != 127) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x309 = 16;
	int64_t x310 = 2LL;
	uint64_t x311 = UINT64_MAX;
	int64_t x312 = INT64_MIN;
	uint64_t t54 = 21289394389873800LLU;

    t54 = ((x309==x310)-(x311*x312));

    if (t54 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint16_t x313 = UINT16_MAX;
	int64_t x314 = -1LL;
	volatile int64_t x315 = 57687LL;
	static volatile int16_t x316 = -1;

    t55 = ((x313==x314)-(x315*x316));

    if (t55 != 57687LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x317 = -1LL;
	int64_t x319 = -1LL;
	volatile uint64_t t56 = UINT64_MAX;

    t56 = ((x317==x318)-(x319*x320));

    if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x325 = UINT8_MAX;
	int64_t x326 = -13238040564LL;
	volatile int16_t x327 = INT16_MIN;
	int32_t x328 = -1;
	volatile int32_t t57 = 26;

    t57 = ((x325==x326)-(x327*x328));

    if (t57 != -32768) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x333 = 106U;
	static int8_t x334 = -1;
	int8_t x335 = -1;
	int32_t t58 = 26687825;

    t58 = ((x333==x334)-(x335*x336));

    if (t58 != -128) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x341 = INT64_MAX;
	uint8_t x342 = 1U;
	static int64_t x343 = INT64_MIN;
	uint64_t x344 = 2940473LLU;

    t59 = ((x341==x342)-(x343*x344));

    if (t59 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x346 = UINT16_MAX;
	static volatile int64_t x347 = -808145128914LL;
	static uint16_t x348 = UINT16_MAX;

    t60 = ((x345==x346)-(x347*x348));

    if (t60 != 52961791023378990LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x349 = -4892462541757LL;
	int16_t x350 = -1;
	int8_t x351 = INT8_MIN;
	int32_t t61 = -3262;

    t61 = ((x349==x350)-(x351*x352));

    if (t61 != 54144) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x353 = -3;
	int8_t x354 = INT8_MIN;
	static int8_t x355 = INT8_MIN;
	int8_t x356 = INT8_MAX;
	static volatile int32_t t62 = -1524;

    t62 = ((x353==x354)-(x355*x356));

    if (t62 != 16256) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x358 = INT16_MIN;
	volatile uint16_t x360 = 1U;
	volatile int32_t t63 = -901185;

    t63 = ((x357==x358)-(x359*x360));

    if (t63 != 128) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int16_t x365 = INT16_MIN;
	int64_t x366 = INT64_MIN;
	uint16_t x367 = 4725U;
	static int16_t x368 = 184;
	static int32_t t64 = -7138036;

    t64 = ((x365==x366)-(x367*x368));

    if (t64 != -869400) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x369 = 166044LL;
	int8_t x370 = 24;
	volatile int16_t x371 = 0;
	static volatile int32_t t65 = 279;

    t65 = ((x369==x370)-(x371*x372));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x373 = -1;
	int8_t x374 = -1;
	uint32_t x375 = UINT32_MAX;
	static int16_t x376 = INT16_MAX;

    t66 = ((x373==x374)-(x375*x376));

    if (t66 != 32768U) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x377 = 21;
	int32_t x378 = -1;
	static volatile uint64_t x379 = UINT64_MAX;
	int8_t x380 = -62;
	uint64_t t67 = 78973LLU;

    t67 = ((x377==x378)-(x379*x380));

    if (t67 != 18446744073709551554LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x381 = -40;
	static volatile uint64_t x383 = UINT64_MAX;
	int64_t x384 = 12652631348969LL;

    t68 = ((x381==x382)-(x383*x384));

    if (t68 != 12652631348969LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x385 = INT64_MIN;
	int8_t x386 = -1;
	uint64_t x387 = 5659410919650899LLU;
	uint64_t t69 = 469699LLU;

    t69 = ((x385==x386)-(x387*x388));

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x389 = INT64_MIN;
	uint64_t x390 = 209581LLU;
	uint32_t x391 = UINT32_MAX;
	volatile uint64_t t70 = 45251095182448LLU;

    t70 = ((x389==x390)-(x391*x392));

    if (t70 != 15037336581819118217LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x393 = INT64_MIN;
	static int32_t x395 = -1;
	int16_t x396 = INT16_MIN;
	int32_t t71 = -13875881;

    t71 = ((x393==x394)-(x395*x396));

    if (t71 != -32767) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x397 = -260519033586663186LL;
	int8_t x398 = INT8_MIN;
	int8_t x399 = 26;
	volatile int16_t x400 = -1;
	volatile int32_t t72 = -23937591;

    t72 = ((x397==x398)-(x399*x400));

    if (t72 != 26) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x403 = 1;
	volatile uint16_t x404 = 1978U;
	volatile int32_t t73 = -217757209;

    t73 = ((x401==x402)-(x403*x404));

    if (t73 != -1978) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x406 = UINT16_MAX;
	int8_t x407 = INT8_MAX;
	int64_t x408 = -7350753425LL;
	volatile int64_t t74 = 23646LL;

    t74 = ((x405==x406)-(x407*x408));

    if (t74 != 933545684975LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x409 = INT16_MIN;
	int8_t x411 = 0;
	static uint64_t t75 = 3251366187755360LLU;

    t75 = ((x409==x410)-(x411*x412));

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x413 = INT16_MIN;
	static int32_t x415 = -61;
	volatile int8_t x416 = INT8_MAX;
	static int32_t t76 = -15050;

    t76 = ((x413==x414)-(x415*x416));

    if (t76 != 7747) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x417 = INT16_MIN;
	int8_t x418 = -1;
	uint32_t x419 = 12638566U;

    t77 = ((x417==x418)-(x419*x420));

    if (t77 != -14799760786LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x421 = INT16_MIN;
	uint16_t x422 = 1U;
	uint16_t x424 = 17U;
	volatile int32_t t78 = -1191194;

    t78 = ((x421==x422)-(x423*x424));

    if (t78 != 34) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x429 = INT32_MAX;
	int8_t x430 = -1;
	int32_t x431 = INT32_MAX;
	static volatile uint32_t t79 = 5U;

    t79 = ((x429==x430)-(x431*x432));

    if (t79 != 2U) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x433 = 0U;
	int8_t x434 = INT8_MIN;
	int16_t x435 = INT16_MAX;
	int32_t x436 = -2;
	int32_t t80 = -1079548;

    t80 = ((x433==x434)-(x435*x436));

    if (t80 != 65534) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x437 = INT32_MIN;
	static int16_t x440 = 1;

    t81 = ((x437==x438)-(x439*x440));

    if (t81 != 128) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x441 = INT32_MAX;
	int64_t x442 = INT64_MIN;
	volatile int16_t x443 = INT16_MAX;
	uint16_t x444 = 78U;

    t82 = ((x441==x442)-(x443*x444));

    if (t82 != -2555826) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x454 = -77;
	static int32_t x455 = -190496;
	uint16_t x456 = 210U;
	int32_t t83 = 0;

    t83 = ((x453==x454)-(x455*x456));

    if (t83 != 40004160) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x461 = INT64_MIN;
	int16_t x462 = -1;
	static int8_t x463 = 11;
	int64_t x464 = 1LL;

    t84 = ((x461==x462)-(x463*x464));

    if (t84 != -11LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x466 = 47U;
	volatile int64_t x467 = -1LL;
	volatile uint32_t x468 = 56456U;
	int64_t t85 = -158264LL;

    t85 = ((x465==x466)-(x467*x468));

    if (t85 != 56456LL) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x469 = -1;
	volatile int8_t x470 = -17;
	static int64_t x471 = INT64_MIN;
	uint64_t x472 = 57294320948LLU;
	uint64_t t86 = 40483826LLU;

    t86 = ((x469==x470)-(x471*x472));

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x473 = 50817210498401LL;
	uint32_t x474 = 948U;
	uint16_t x475 = UINT16_MAX;
	uint16_t x476 = 7044U;
	int32_t t87 = -1649239;

    t87 = ((x473==x474)-(x475*x476));

    if (t87 != -461628540) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x481 = INT64_MIN;
	uint16_t x482 = 168U;
	int64_t x483 = INT64_MIN;
	uint64_t x484 = 0LLU;
	uint64_t t88 = 38672LLU;

    t88 = ((x481==x482)-(x483*x484));

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x485 = INT64_MIN;
	uint32_t x486 = 202891636U;
	int8_t x487 = -1;
	uint32_t x488 = UINT32_MAX;
	uint32_t t89 = UINT32_MAX;

    t89 = ((x485==x486)-(x487*x488));

    if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x489 = 1060885225542607LLU;
	volatile int8_t x490 = 42;
	int64_t x492 = -413LL;
	int64_t t90 = -53876616016905636LL;

    t90 = ((x489==x490)-(x491*x492));

    if (t90 != -826LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x494 = INT32_MIN;
	int64_t x495 = 10LL;
	int16_t x496 = -1;
	volatile int64_t t91 = 1245140LL;

    t91 = ((x493==x494)-(x495*x496));

    if (t91 != 10LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x498 = -1LL;
	volatile int32_t t92 = 1;

    t92 = ((x497==x498)-(x499*x500));

    if (t92 != -128) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x501 = 1;
	int16_t x502 = INT16_MIN;
	static uint8_t x503 = UINT8_MAX;
	uint32_t x504 = 118185U;
	volatile uint32_t t93 = 83422801U;

    t93 = ((x501==x502)-(x503*x504));

    if (t93 != 4264830121U) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x505 = -22;
	static uint8_t x506 = UINT8_MAX;
	static int8_t x507 = 0;
	int8_t x508 = INT8_MIN;

    t94 = ((x505==x506)-(x507*x508));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x509 = INT32_MIN;
	static int16_t x510 = INT16_MAX;
	static volatile int16_t x511 = -1;
	int16_t x512 = 5956;

    t95 = ((x509==x510)-(x511*x512));

    if (t95 != 5956) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x517 = INT16_MIN;
	volatile int64_t x518 = -646LL;
	static int16_t x519 = INT16_MIN;
	int32_t t96 = 43231;

    t96 = ((x517==x518)-(x519*x520));

    if (t96 != -1073741824) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x526 = 0;
	static int32_t x527 = -1;
	uint8_t x528 = UINT8_MAX;

    t97 = ((x525==x526)-(x527*x528));

    if (t97 != 255) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x529 = -7370;
	uint32_t x530 = 2673909U;
	uint32_t x531 = 3737729U;
	int32_t x532 = INT32_MAX;
	uint32_t t98 = 76U;

    t98 = ((x529==x530)-(x531*x532));

    if (t98 != 2151221377U) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x533 = 13U;
	int16_t x535 = INT16_MIN;
	int32_t t99 = -257782935;

    t99 = ((x533==x534)-(x535*x536));

    if (t99 != -4194304) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x553 = UINT8_MAX;
	int16_t x554 = -4;
	static uint32_t x555 = 55U;
	static int8_t x556 = -34;
	volatile uint32_t t100 = 2201U;

    t100 = ((x553==x554)-(x555*x556));

    if (t100 != 1870U) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint64_t x557 = 338LLU;
	volatile uint64_t x558 = UINT64_MAX;
	volatile int8_t x559 = INT8_MIN;
	static uint64_t x560 = 25143718LLU;

    t101 = ((x557==x558)-(x559*x560));

    if (t101 != 3218395904LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x561 = UINT16_MAX;
	uint64_t x562 = UINT64_MAX;
	volatile uint64_t x563 = 24469698984043LLU;
	uint32_t x564 = 60U;
	uint64_t t102 = 6046651828335551130LLU;

    t102 = ((x561==x562)-(x563*x564));

    if (t102 != 18445275891770509036LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x565 = 730983052203268422LL;
	int8_t x567 = 1;
	uint8_t x568 = 1U;
	static int32_t t103 = -222218871;

    t103 = ((x565==x566)-(x567*x568));

    if (t103 != -1) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint32_t x571 = 132899U;
	int32_t x572 = -283870;
	uint32_t t104 = 22611U;

    t104 = ((x569==x570)-(x571*x572));

    if (t104 != 3366300762U) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int8_t x573 = INT8_MAX;
	uint8_t x574 = 17U;
	volatile int8_t x575 = INT8_MAX;
	uint8_t x576 = 0U;

    t105 = ((x573==x574)-(x575*x576));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x577 = UINT8_MAX;
	int32_t x578 = INT32_MIN;
	volatile int16_t x579 = 22;
	static uint32_t x580 = 3474206U;
	static volatile uint32_t t106 = 773102U;

    t106 = ((x577==x578)-(x579*x580));

    if (t106 != 4218534764U) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x581 = -702;
	static int16_t x583 = INT16_MAX;
	volatile int8_t x584 = -1;

    t107 = ((x581==x582)-(x583*x584));

    if (t107 != 32767) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x589 = UINT16_MAX;
	int32_t x592 = 17;
	volatile int32_t t108 = 468;

    t108 = ((x589==x590)-(x591*x592));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x598 = INT8_MIN;
	int64_t t109 = -30060198LL;

    t109 = ((x597==x598)-(x599*x600));

    if (t109 != 366182879375392768LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x613 = INT64_MIN;
	static uint64_t x614 = UINT64_MAX;
	static uint32_t x615 = UINT32_MAX;
	uint32_t t110 = 2U;

    t110 = ((x613==x614)-(x615*x616));

    if (t110 != 32767U) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x617 = INT64_MIN;
	static uint8_t x618 = 109U;
	int16_t x619 = -1;
	uint16_t x620 = UINT16_MAX;

    t111 = ((x617==x618)-(x619*x620));

    if (t111 != 65535) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x621 = INT32_MAX;
	static int64_t x622 = 8002983299LL;
	int16_t x623 = 1636;
	volatile uint16_t x624 = 66U;
	int32_t t112 = -1;

    t112 = ((x621==x622)-(x623*x624));

    if (t112 != -107976) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x625 = INT16_MIN;
	int64_t x626 = -1LL;
	int16_t x627 = INT16_MAX;
	volatile int8_t x628 = INT8_MIN;
	volatile int32_t t113 = 9654;

    t113 = ((x625==x626)-(x627*x628));

    if (t113 != 4194176) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x629 = INT64_MIN;
	volatile int8_t x630 = -24;
	int8_t x631 = INT8_MIN;
	int64_t x632 = 1702LL;
	int64_t t114 = 4665165868LL;

    t114 = ((x629==x630)-(x631*x632));

    if (t114 != 217856LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x637 = INT64_MIN;
	uint64_t x639 = UINT64_MAX;
	uint64_t x640 = 10920837049LLU;
	volatile uint64_t t115 = 278048019406LLU;

    t115 = ((x637==x638)-(x639*x640));

    if (t115 != 10920837049LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x647 = 85994LLU;
	uint8_t x648 = UINT8_MAX;
	static uint64_t t116 = 53221084335LLU;

    t116 = ((x645==x646)-(x647*x648));

    if (t116 != 18446744073687623146LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x649 = INT8_MIN;
	static int16_t x650 = 162;
	uint64_t x651 = UINT64_MAX;
	static volatile uint64_t t117 = 103344796LLU;

    t117 = ((x649==x650)-(x651*x652));

    if (t117 != 255LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x657 = 3895048;
	volatile int8_t x658 = INT8_MAX;
	static int32_t x659 = -44349;
	int64_t x660 = 30162LL;
	volatile int64_t t118 = 1547LL;

    t118 = ((x657==x658)-(x659*x660));

    if (t118 != 1337654538LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x661 = -1;
	int16_t x662 = INT16_MIN;
	volatile uint16_t x663 = 342U;
	int32_t t119 = -490344;

    t119 = ((x661==x662)-(x663*x664));

    if (t119 != -16416) { NG(); } else { ; }
	
}

void f120(void) {
    	static int64_t x666 = INT64_MIN;
	int64_t x667 = INT64_MAX;
	uint16_t x668 = 0U;
	int64_t t120 = -873011596732LL;

    t120 = ((x665==x666)-(x667*x668));

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x677 = INT64_MIN;
	int32_t x678 = INT32_MAX;
	uint32_t x680 = 11142909U;
	static uint64_t t121 = 1019725944LLU;

    t121 = ((x677==x678)-(x679*x680));

    if (t121 != 18446743986416002510LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	static int32_t x681 = -271581505;
	volatile int8_t x682 = INT8_MIN;
	uint64_t x683 = 505872351317512420LLU;
	int32_t x684 = -1;
	volatile uint64_t t122 = 1753806128491229LLU;

    t122 = ((x681==x682)-(x683*x684));

    if (t122 != 505872351317512420LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x685 = -1LL;
	static int32_t x686 = INT32_MIN;
	int64_t x687 = -1LL;
	uint8_t x688 = 63U;
	volatile int64_t t123 = 74614LL;

    t123 = ((x685==x686)-(x687*x688));

    if (t123 != 63LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x689 = 0;
	int8_t x690 = INT8_MIN;
	int8_t x691 = INT8_MAX;
	static int8_t x692 = -1;
	volatile int32_t t124 = -1;

    t124 = ((x689==x690)-(x691*x692));

    if (t124 != 127) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x698 = 0U;
	static uint16_t x699 = 5937U;
	uint16_t x700 = 206U;
	volatile int32_t t125 = 1579245;

    t125 = ((x697==x698)-(x699*x700));

    if (t125 != -1223022) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x701 = -1;
	volatile int16_t x702 = INT16_MIN;
	volatile int32_t t126 = -95215560;

    t126 = ((x701==x702)-(x703*x704));

    if (t126 != 255) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x705 = -25486646LL;
	uint8_t x707 = 4U;
	static int8_t x708 = 10;
	int32_t t127 = 132415;

    t127 = ((x705==x706)-(x707*x708));

    if (t127 != -40) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x713 = INT8_MIN;
	int64_t x714 = INT64_MIN;
	volatile int8_t x715 = INT8_MIN;
	uint64_t x716 = 342564LLU;
	static volatile uint64_t t128 = 489LLU;

    t128 = ((x713==x714)-(x715*x716));

    if (t128 != 43848192LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint32_t x717 = UINT32_MAX;
	int8_t x718 = -1;
	int64_t x719 = -170306450892LL;
	int8_t x720 = INT8_MIN;
	int64_t t129 = 601016160418629LL;

    t129 = ((x717==x718)-(x719*x720));

    if (t129 != -21799225714175LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int16_t x722 = INT16_MAX;
	uint16_t x724 = 9U;
	static int32_t t130 = 1;

    t130 = ((x721==x722)-(x723*x724));

    if (t130 != -294903) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x725 = 12046;
	int16_t x726 = 49;
	volatile uint16_t x727 = UINT16_MAX;
	uint8_t x728 = UINT8_MAX;
	static volatile int32_t t131 = -20009;

    t131 = ((x725==x726)-(x727*x728));

    if (t131 != -16711425) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x729 = INT32_MIN;
	static uint64_t x730 = 12350564934286360LLU;
	volatile uint64_t x731 = UINT64_MAX;
	int32_t x732 = INT32_MIN;
	volatile uint64_t t132 = 320925063126414LLU;

    t132 = ((x729==x730)-(x731*x732));

    if (t132 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x737 = INT16_MIN;
	int64_t x738 = INT64_MAX;
	int16_t x739 = INT16_MIN;

    t133 = ((x737==x738)-(x739*x740));

    if (t133 != 32768) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x741 = INT32_MIN;
	volatile uint8_t x742 = 7U;
	uint8_t x744 = 7U;
	volatile int32_t t134 = -4065850;

    t134 = ((x741==x742)-(x743*x744));

    if (t134 != -1785) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x746 = 117;
	uint32_t x747 = 163775665U;
	static volatile uint16_t x748 = 51U;
	volatile uint32_t t135 = 7U;

    t135 = ((x745==x746)-(x747*x748));

    if (t135 != 237375677U) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x749 = INT16_MIN;
	volatile int8_t x750 = INT8_MIN;
	volatile uint32_t x751 = UINT32_MAX;
	int64_t x752 = -1LL;
	int64_t t136 = -42329512655785LL;

    t136 = ((x749==x750)-(x751*x752));

    if (t136 != 4294967295LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x753 = -1;
	static int8_t x754 = INT8_MIN;
	int16_t x755 = INT16_MIN;

    t137 = ((x753==x754)-(x755*x756));

    if (t137 != 1073709056) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint32_t x758 = 121234U;
	uint8_t x759 = UINT8_MAX;
	int16_t x760 = INT16_MAX;
	volatile int32_t t138 = -13576201;

    t138 = ((x757==x758)-(x759*x760));

    if (t138 != -8355585) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint16_t x765 = UINT16_MAX;
	uint32_t x767 = 1237093U;
	static int8_t x768 = INT8_MIN;
	static volatile uint32_t t139 = 1U;

    t139 = ((x765==x766)-(x767*x768));

    if (t139 != 158347904U) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x769 = 203U;
	int16_t x771 = INT16_MIN;
	static int32_t x772 = 26128;
	static volatile int32_t t140 = -117536;

    t140 = ((x769==x770)-(x771*x772));

    if (t140 != 856162304) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x773 = UINT64_MAX;
	uint64_t x774 = UINT64_MAX;
	uint16_t x776 = 9605U;
	volatile uint64_t t141 = 208042227801LLU;

    t141 = ((x773==x774)-(x775*x776));

    if (t141 != 9606LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x777 = 3U;
	int64_t x778 = 342975134311LL;
	static uint64_t x779 = 337926LLU;
	static volatile uint64_t t142 = 111LLU;

    t142 = ((x777==x778)-(x779*x780));

    if (t142 != 725690559234048LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x781 = INT8_MAX;
	int16_t x782 = -7;
	static uint64_t x783 = UINT64_MAX;
	int32_t x784 = -2204;
	volatile uint64_t t143 = 125479742248790992LLU;

    t143 = ((x781==x782)-(x783*x784));

    if (t143 != 18446744073709549412LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile uint32_t x789 = 9357820U;
	uint64_t x791 = 16LLU;
	uint16_t x792 = UINT16_MAX;

    t144 = ((x789==x790)-(x791*x792));

    if (t144 != 18446744073708503056LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x793 = INT8_MIN;
	uint32_t x794 = 23297U;
	static uint32_t x795 = UINT32_MAX;
	static int16_t x796 = 3;

    t145 = ((x793==x794)-(x795*x796));

    if (t145 != 3U) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x797 = INT16_MAX;
	int32_t x798 = -810;
	int64_t x799 = 73490607133LL;
	volatile int64_t t146 = -27843930LL;

    t146 = ((x797==x798)-(x799*x800));

    if (t146 != -2408066723927011LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x801 = 852167722289919LL;
	uint8_t x803 = UINT8_MAX;
	int16_t x804 = -1;
	int32_t t147 = -3952667;

    t147 = ((x801==x802)-(x803*x804));

    if (t147 != 255) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x809 = INT8_MIN;
	uint8_t x811 = 7U;
	volatile uint8_t x812 = UINT8_MAX;
	volatile int32_t t148 = 5;

    t148 = ((x809==x810)-(x811*x812));

    if (t148 != -1785) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x817 = -29;
	static uint32_t x818 = UINT32_MAX;
	volatile uint32_t x819 = 106547743U;
	int16_t x820 = INT16_MIN;
	uint32_t t149 = 29486U;

    t149 = ((x817==x818)-(x819*x820));

    if (t149 != 3842998272U) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint32_t x825 = 77784312U;
	uint32_t x826 = UINT32_MAX;
	int32_t x828 = -41703877;
	volatile uint64_t t150 = 9196296218293LLU;

    t150 = ((x825==x826)-(x827*x828));

    if (t150 != 18446744073667847739LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x831 = -3644118292193350LL;
	int8_t x832 = -1;
	int64_t t151 = -475399397LL;

    t151 = ((x829==x830)-(x831*x832));

    if (t151 != -3644118292193350LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint32_t x837 = 14121893U;
	int32_t x838 = INT32_MAX;
	int8_t x839 = -1;
	static volatile int32_t t152 = 71975215;

    t152 = ((x837==x838)-(x839*x840));

    if (t152 != 3) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile int16_t x842 = INT16_MAX;
	volatile int32_t x843 = INT32_MIN;
	volatile uint32_t x844 = 174502U;
	uint32_t t153 = 36U;

    t153 = ((x841==x842)-(x843*x844));

    if (t153 != 0U) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x849 = 13945LL;
	static int16_t x852 = INT16_MIN;
	uint32_t t154 = 10932182U;

    t154 = ((x849==x850)-(x851*x852));

    if (t154 != 0U) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x853 = -75;
	uint8_t x855 = 70U;
	int16_t x856 = 7;
	int32_t t155 = -510938;

    t155 = ((x853==x854)-(x855*x856));

    if (t155 != -490) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x861 = UINT16_MAX;
	int8_t x862 = INT8_MAX;
	static uint8_t x863 = 1U;
	uint16_t x864 = 47U;

    t156 = ((x861==x862)-(x863*x864));

    if (t156 != -47) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x865 = UINT32_MAX;
	int8_t x866 = 3;
	int8_t x867 = -4;
	uint64_t x868 = 4221435332871161418LLU;
	uint64_t t157 = 1LLU;

    t157 = ((x865==x866)-(x867*x868));

    if (t157 != 16885741331484645672LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x869 = INT16_MAX;
	int64_t x870 = -145447387389LL;
	volatile int32_t x871 = -1603468;
	int8_t x872 = -1;
	volatile int32_t t158 = -3;

    t158 = ((x869==x870)-(x871*x872));

    if (t158 != -1603468) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x877 = UINT8_MAX;
	int16_t x878 = -9405;
	volatile uint64_t x879 = UINT64_MAX;
	static uint16_t x880 = 668U;
	volatile uint64_t t159 = 3210467818LLU;

    t159 = ((x877==x878)-(x879*x880));

    if (t159 != 668LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x881 = INT64_MIN;
	uint16_t x882 = 7U;
	int32_t x883 = -1;
	int64_t x884 = INT64_MAX;
	volatile int64_t t160 = INT64_MAX;

    t160 = ((x881==x882)-(x883*x884));

    if (t160 != INT64_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x889 = 25U;
	int8_t x890 = INT8_MAX;
	static volatile uint32_t x891 = 2195U;
	static volatile uint32_t t161 = 53131560U;

    t161 = ((x889==x890)-(x891*x892));

    if (t161 != 4225570176U) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x893 = 802U;
	static int16_t x894 = INT16_MAX;
	int32_t x896 = -1;
	volatile int32_t t162 = -2586;

    t162 = ((x893==x894)-(x895*x896));

    if (t162 != -1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int16_t x897 = INT16_MIN;
	volatile int16_t x898 = INT16_MIN;
	int8_t x899 = INT8_MIN;
	int32_t x900 = 56;
	int32_t t163 = -3103;

    t163 = ((x897==x898)-(x899*x900));

    if (t163 != 7169) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t x901 = -4777;
	int8_t x903 = INT8_MIN;
	volatile uint64_t x904 = UINT64_MAX;
	volatile uint64_t t164 = 374LLU;

    t164 = ((x901==x902)-(x903*x904));

    if (t164 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x905 = INT32_MIN;
	volatile int32_t x907 = INT32_MIN;
	volatile int64_t x908 = -432052LL;
	static int64_t t165 = -2119321565969007496LL;

    t165 = ((x905==x906)-(x907*x908));

    if (t165 != -927824605085696LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x913 = INT16_MIN;
	uint64_t x915 = 3182001281525015242LLU;
	volatile uint32_t x916 = 700837U;
	volatile uint64_t t166 = 1730LLU;

    t166 = ((x913==x914)-(x915*x916));

    if (t166 != 17999162821716355534LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x921 = -1;
	static volatile int32_t x922 = INT32_MIN;
	int8_t x923 = -1;
	static volatile int8_t x924 = 28;

    t167 = ((x921==x922)-(x923*x924));

    if (t167 != 28) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x926 = -1LL;
	volatile int32_t t168 = -471129;

    t168 = ((x925==x926)-(x927*x928));

    if (t168 != -8885) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x929 = -1;
	uint64_t x930 = UINT64_MAX;
	int16_t x931 = INT16_MIN;
	static int64_t x932 = 594218LL;
	int64_t t169 = 103592467518LL;

    t169 = ((x929==x930)-(x931*x932));

    if (t169 != 19471335425LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x933 = -1LL;
	static volatile int16_t x935 = -1;
	uint32_t x936 = UINT32_MAX;
	volatile uint32_t t170 = UINT32_MAX;

    t170 = ((x933==x934)-(x935*x936));

    if (t170 != UINT32_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x937 = -10LL;
	static uint64_t x939 = UINT64_MAX;
	int16_t x940 = -1;

    t171 = ((x937==x938)-(x939*x940));

    if (t171 != UINT64_MAX) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint32_t x953 = 411270U;
	int8_t x954 = -15;
	int32_t x956 = -1;
	int32_t t172 = 3;

    t172 = ((x953==x954)-(x955*x956));

    if (t172 != -177113556) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x958 = -2103;
	uint32_t x959 = UINT32_MAX;
	uint8_t x960 = 13U;

    t173 = ((x957==x958)-(x959*x960));

    if (t173 != 13U) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x961 = -1;
	volatile uint32_t x962 = 12U;
	uint8_t x963 = UINT8_MAX;
	volatile uint64_t x964 = UINT64_MAX;

    t174 = ((x961==x962)-(x963*x964));

    if (t174 != 255LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint8_t x965 = 27U;
	volatile uint8_t x966 = 7U;
	int64_t x967 = -116745378475LL;
	uint64_t x968 = 705436815180906670LLU;
	static uint64_t t175 = 23867003416LLU;

    t175 = ((x965==x966)-(x967*x968));

    if (t175 != 4204993557563957306LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x969 = 5770LLU;
	uint8_t x971 = 43U;
	int32_t x972 = -1;
	int32_t t176 = -19;

    t176 = ((x969==x970)-(x971*x972));

    if (t176 != 43) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x973 = INT32_MAX;
	uint32_t x976 = 2161737U;
	volatile uint32_t t177 = 112U;

    t177 = ((x973==x974)-(x975*x976));

    if (t177 != 4214578904U) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint8_t x981 = UINT8_MAX;
	static int32_t x982 = INT32_MIN;
	static uint32_t x983 = 0U;
	volatile uint32_t t178 = 0U;

    t178 = ((x981==x982)-(x983*x984));

    if (t178 != 0U) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x985 = INT16_MAX;
	uint32_t x987 = 212706U;
	int16_t x988 = -117;

    t179 = ((x985==x986)-(x987*x988));

    if (t179 != 24886602U) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int64_t x989 = 60662269161385LL;
	int8_t x990 = INT8_MIN;
	static int64_t x991 = 12413LL;
	volatile int64_t t180 = -167692438594LL;

    t180 = ((x989==x990)-(x991*x992));

    if (t180 != -28500248LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x997 = INT64_MAX;
	int64_t x998 = INT64_MAX;
	uint8_t x999 = 0U;
	int8_t x1000 = INT8_MIN;
	int32_t t181 = 308429638;

    t181 = ((x997==x998)-(x999*x1000));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x1001 = INT8_MIN;
	static int16_t x1003 = INT16_MIN;
	volatile int8_t x1004 = INT8_MAX;

    t182 = ((x1001==x1002)-(x1003*x1004));

    if (t182 != 4161536) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x1005 = -1;
	volatile int8_t x1007 = INT8_MAX;
	uint32_t x1008 = 1063363033U;
	volatile uint32_t t183 = 1919U;

    t183 = ((x1005==x1006)-(x1007*x1008));

    if (t183 != 2391848281U) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x1009 = INT16_MAX;
	int32_t x1010 = INT32_MIN;
	volatile uint16_t x1011 = 1U;
	int32_t t184 = 496862;

    t184 = ((x1009==x1010)-(x1011*x1012));

    if (t184 != 4) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint16_t x1013 = 40U;
	int32_t x1015 = INT32_MAX;
	int8_t x1016 = 0;
	static int32_t t185 = -9001;

    t185 = ((x1013==x1014)-(x1015*x1016));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x1017 = -1;
	int16_t x1020 = 125;
	int32_t t186 = 1;

    t186 = ((x1017==x1018)-(x1019*x1020));

    if (t186 != -375) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x1021 = INT64_MIN;
	int16_t x1023 = -1;
	static volatile uint8_t x1024 = 1U;
	int32_t t187 = 14476854;

    t187 = ((x1021==x1022)-(x1023*x1024));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x1033 = -1;
	volatile uint64_t x1034 = UINT64_MAX;
	int16_t x1035 = -1;
	static volatile int64_t x1036 = -1LL;

    t188 = ((x1033==x1034)-(x1035*x1036));

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x1037 = UINT32_MAX;
	int16_t x1038 = INT16_MAX;
	static uint32_t x1039 = UINT32_MAX;
	int16_t x1040 = 18;
	volatile uint32_t t189 = 0U;

    t189 = ((x1037==x1038)-(x1039*x1040));

    if (t189 != 18U) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x1042 = INT64_MIN;
	int8_t x1043 = INT8_MAX;
	int8_t x1044 = -1;
	int32_t t190 = 61421883;

    t190 = ((x1041==x1042)-(x1043*x1044));

    if (t190 != 127) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x1045 = INT8_MIN;
	int8_t x1046 = INT8_MIN;
	uint32_t x1047 = 753747110U;
	static volatile uint16_t x1048 = 0U;
	static volatile uint32_t t191 = 54109453U;

    t191 = ((x1045==x1046)-(x1047*x1048));

    if (t191 != 1U) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x1057 = -1;
	static volatile int16_t x1058 = INT16_MIN;
	volatile int32_t t192 = 92;

    t192 = ((x1057==x1058)-(x1059*x1060));

    if (t192 != 32640) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x1061 = -1;
	static uint64_t x1062 = 7870073271307606771LLU;
	static int8_t x1063 = INT8_MIN;
	static uint64_t x1064 = 3596LLU;
	uint64_t t193 = 372814LLU;

    t193 = ((x1061==x1062)-(x1063*x1064));

    if (t193 != 460288LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x1065 = 6277;
	static uint32_t x1066 = UINT32_MAX;
	uint16_t x1067 = 1337U;
	uint64_t x1068 = UINT64_MAX;

    t194 = ((x1065==x1066)-(x1067*x1068));

    if (t194 != 1337LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x1069 = 21;
	int16_t x1070 = 1;
	volatile int16_t x1071 = 5181;
	int32_t x1072 = -22648;
	volatile int32_t t195 = 17;

    t195 = ((x1069==x1070)-(x1071*x1072));

    if (t195 != 117339288) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x1077 = UINT16_MAX;
	volatile int16_t x1078 = INT16_MIN;
	volatile int16_t x1079 = INT16_MAX;
	uint16_t x1080 = UINT16_MAX;
	int32_t t196 = -9644646;

    t196 = ((x1077==x1078)-(x1079*x1080));

    if (t196 != -2147385345) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint8_t x1081 = 1U;
	static volatile int32_t x1082 = INT32_MAX;
	int32_t x1083 = -178;
	int16_t x1084 = -1;
	volatile int32_t t197 = 914;

    t197 = ((x1081==x1082)-(x1083*x1084));

    if (t197 != -178) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x1085 = 1LLU;
	int32_t x1086 = -1;
	static int32_t t198 = -95;

    t198 = ((x1085==x1086)-(x1087*x1088));

    if (t198 != 35712) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int32_t x1089 = -1;
	static uint32_t x1090 = UINT32_MAX;
	uint8_t x1092 = 3U;
	volatile int32_t t199 = 11;

    t199 = ((x1089==x1090)-(x1091*x1092));

    if (t199 != 98305) { NG(); } else { ; }
	
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

