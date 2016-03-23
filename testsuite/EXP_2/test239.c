
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

static int32_t x23 = 1;
int8_t x30 = -59;
int16_t x43 = -6;
uint32_t x44 = 3465U;
int16_t x50 = INT16_MIN;
volatile int64_t x63 = INT64_MAX;
int64_t x64 = INT64_MAX;
volatile int64_t t7 = INT64_MAX;
int8_t x75 = INT8_MAX;
volatile int8_t x80 = INT8_MAX;
int32_t x90 = INT32_MIN;
static volatile int32_t t12 = 996695340;
uint16_t x102 = 3874U;
uint64_t x105 = UINT64_MAX;
int8_t x109 = -1;
volatile uint64_t x111 = 7182404LLU;
int8_t x112 = INT8_MIN;
volatile int16_t x116 = -2209;
uint64_t t17 = 1LLU;
int16_t x118 = INT16_MAX;
int16_t x124 = 2942;
int8_t x141 = INT8_MAX;
int64_t x147 = INT64_MIN;
static volatile uint64_t t24 = 4341709262454102661LLU;
int16_t x156 = 1;
int16_t x168 = INT16_MIN;
int32_t x174 = INT32_MAX;
int64_t x179 = -433763426896710904LL;
int32_t x183 = -35;
int64_t x186 = -759158231169555377LL;
uint64_t t32 = UINT64_MAX;
static volatile int8_t x210 = -1;
volatile int8_t x220 = -1;
int64_t x221 = -1949375605942LL;
uint64_t x223 = 1799LLU;
static uint64_t x231 = 1430723617178796580LLU;
uint8_t x257 = 28U;
int32_t x260 = INT32_MIN;
int32_t t41 = INT32_MIN;
int64_t x262 = INT64_MIN;
static int8_t x266 = INT8_MAX;
volatile int16_t x270 = INT16_MAX;
volatile int16_t x271 = INT16_MIN;
int64_t t46 = -16LL;
volatile uint8_t x281 = UINT8_MAX;
volatile int32_t x284 = INT32_MIN;
int16_t x288 = INT16_MIN;
volatile uint64_t x296 = 1LLU;
volatile uint32_t x298 = 35000U;
static int16_t x302 = INT16_MIN;
volatile int32_t x303 = INT32_MIN;
volatile int32_t x304 = -96509852;
int64_t x308 = INT64_MAX;
static volatile int64_t t52 = INT64_MAX;
static uint8_t x331 = UINT8_MAX;
uint16_t x332 = UINT16_MAX;
int32_t x334 = INT32_MIN;
int8_t x338 = INT8_MIN;
volatile int16_t x340 = INT16_MAX;
volatile int64_t t56 = 65789371767LL;
uint8_t x362 = 27U;
volatile uint64_t t60 = 17384184724137429LLU;
int32_t x372 = -7391;
static volatile uint16_t x384 = 22959U;
volatile int16_t x385 = -283;
int8_t x386 = -1;
int16_t x389 = 30;
int8_t x416 = INT8_MAX;
static int32_t x418 = -33478;
volatile int32_t x419 = INT32_MIN;
volatile uint8_t x420 = 1U;
int16_t x429 = 2004;
volatile int16_t x430 = INT16_MIN;
int16_t x437 = 59;
int32_t x445 = INT32_MIN;
uint32_t t75 = 1641670U;
int8_t x452 = -1;
volatile uint32_t t76 = 34041530U;
int64_t x453 = -1LL;
uint64_t t77 = 1196583150323267877LLU;
int8_t x467 = INT8_MAX;
volatile uint64_t t82 = 3776223408778871LLU;
volatile int32_t x486 = INT32_MAX;
int64_t t84 = 1LL;
volatile int64_t t86 = INT64_MIN;
volatile int64_t t88 = INT64_MIN;
static int8_t x533 = -13;
int64_t x534 = INT64_MIN;
int8_t x536 = -58;
static int16_t x539 = 30;
volatile uint32_t t93 = UINT32_MAX;
volatile int64_t t95 = INT64_MIN;
uint32_t x552 = 3175U;
uint32_t t96 = 224160U;
int16_t x554 = INT16_MIN;
int64_t t98 = 714908157LL;
uint16_t x565 = 0U;
uint16_t x567 = UINT16_MAX;
volatile int32_t t99 = -1195;
static volatile uint32_t x569 = 1436786822U;
int32_t x570 = INT32_MAX;
int32_t x577 = 947;
int64_t x578 = 10058LL;
volatile int32_t x583 = 20;
uint32_t x586 = 57280045U;
uint16_t x589 = UINT16_MAX;
int64_t x593 = 9302557282221LL;
uint64_t x595 = 375398923725508LLU;
static int64_t x603 = 10LL;
static volatile int8_t x607 = INT8_MIN;
int32_t t108 = -689536313;
uint32_t x611 = 7U;
volatile uint32_t x612 = 8448841U;
int16_t x613 = INT16_MAX;
static uint32_t x621 = 36U;
static int64_t x623 = INT64_MAX;
int64_t t111 = 252261134082062LL;
static uint32_t x629 = 428334U;
volatile int64_t t112 = -5LL;
int32_t t114 = 9623191;
int8_t x650 = INT8_MAX;
int16_t x656 = -1;
volatile uint32_t t119 = UINT32_MAX;
int64_t t120 = -3088588375129198040LL;
volatile int16_t x665 = 9972;
int8_t x669 = 1;
int64_t x670 = 45496907326LL;
int32_t x672 = INT32_MIN;
uint32_t x674 = 3194735U;
uint8_t x677 = UINT8_MAX;
int64_t x680 = INT64_MIN;
int64_t t124 = INT64_MIN;
int16_t x685 = -1;
uint64_t x688 = 1914376247315147973LLU;
volatile int32_t x693 = -1;
static int64_t t127 = -111894LL;
int32_t x701 = INT32_MAX;
int64_t x704 = 235772094LL;
static volatile uint64_t t129 = 249905634059620714LLU;
uint8_t x716 = 27U;
uint64_t x722 = 101161LLU;
int8_t x748 = INT8_MIN;
volatile int32_t t140 = -629118;
static int16_t x762 = 20;
int64_t x764 = INT64_MIN;
int16_t x769 = 3570;
volatile int32_t t143 = INT32_MAX;
uint8_t x775 = UINT8_MAX;
volatile int8_t x780 = INT8_MIN;
volatile uint64_t t145 = 1793LLU;
uint32_t x783 = 1U;
int32_t x793 = 368;
uint8_t x796 = 2U;
static uint64_t x798 = UINT64_MAX;
uint16_t x805 = 7441U;
volatile uint64_t x816 = 520901768518LLU;
uint8_t x823 = 44U;
int32_t x824 = INT32_MIN;
volatile int16_t x826 = -1;
volatile uint16_t x830 = UINT16_MAX;
uint16_t x834 = 76U;
volatile int32_t t156 = -300;
int32_t x841 = 199;
volatile int8_t x844 = -1;
static volatile uint32_t x848 = 43142913U;
int32_t x852 = -6830449;
volatile uint32_t t159 = 45716U;
volatile int64_t x861 = INT64_MAX;
volatile int16_t x863 = 4932;
uint16_t x867 = 132U;
static int64_t x870 = INT64_MIN;
uint64_t t164 = UINT64_MAX;
int32_t x886 = -18;
int8_t x896 = INT8_MAX;
static volatile int32_t t167 = 773757334;
uint16_t x904 = 189U;
volatile uint64_t t168 = 17065386759LLU;
uint64_t x911 = 69742LLU;
static uint32_t x913 = 341U;
volatile int32_t x916 = INT32_MAX;
static volatile uint64_t t171 = 5860082LLU;
int32_t x928 = INT32_MIN;
uint32_t x937 = 2679180U;
volatile uint16_t x944 = 242U;
uint64_t x946 = UINT64_MAX;
volatile uint32_t x961 = 7474U;
uint64_t x967 = UINT64_MAX;
volatile int16_t x970 = -1;
static int64_t x973 = INT64_MIN;
volatile int8_t x977 = 1;
uint64_t t187 = UINT64_MAX;
int32_t t188 = 1;
volatile int64_t x1008 = -1LL;
int16_t x1009 = 203;
uint64_t x1010 = 552592182661LLU;
int64_t x1012 = -3040935504981LL;
static volatile int64_t t195 = 27037652722LL;
int16_t x1042 = -1;
static uint16_t x1043 = UINT16_MAX;
uint64_t x1045 = 3LLU;
static volatile int16_t x1047 = -1;
uint64_t t198 = UINT64_MAX;


void f0(void) {
    	uint32_t x13 = 147216388U;
	int8_t x14 = -1;
	volatile int32_t x15 = INT32_MIN;
	static int8_t x16 = INT8_MIN;
	static volatile uint32_t t0 = 26636U;

    t0 = ((x13/(x14-x15))+x16);

    if (t0 != 4294967168U) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x21 = INT32_MIN;
	static int8_t x22 = 29;
	uint32_t x24 = 13200U;
	static uint32_t t1 = 989961U;

    t1 = ((x21/(x22-x23))+x24);

    if (t1 != 4218284652U) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x25 = INT32_MIN;
	volatile uint32_t x26 = 11297876U;
	int32_t x27 = INT32_MIN;
	static uint64_t x28 = UINT64_MAX;
	volatile uint64_t t2 = UINT64_MAX;

    t2 = ((x25/(x26-x27))+x28);

    if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x29 = -1;
	int16_t x31 = INT16_MIN;
	static int8_t x32 = -12;
	volatile int32_t t3 = 293711;

    t3 = ((x29/(x30-x31))+x32);

    if (t3 != -12) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint64_t x33 = UINT64_MAX;
	int8_t x34 = -7;
	volatile int32_t x35 = INT32_MIN;
	int16_t x36 = 1672;
	uint64_t t4 = 128101988854848928LLU;

    t4 = ((x33/(x34-x35))+x36);

    if (t4 != 8589936292LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x41 = -24820;
	uint32_t x42 = 1672913281U;
	uint32_t t5 = 1231U;

    t5 = ((x41/(x42-x43))+x44);

    if (t5 != 3467U) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x49 = -10;
	uint8_t x51 = 1U;
	uint16_t x52 = UINT16_MAX;
	static int32_t t6 = -25;

    t6 = ((x49/(x50-x51))+x52);

    if (t6 != 65535) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x61 = 20;
	static uint8_t x62 = 0U;

    t7 = ((x61/(x62-x63))+x64);

    if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x65 = -1;
	static int8_t x66 = -3;
	int64_t x67 = -385774157375LL;
	int8_t x68 = INT8_MAX;
	int64_t t8 = -3677451997LL;

    t8 = ((x65/(x66-x67))+x68);

    if (t8 != 127LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x73 = 1996417LLU;
	uint16_t x74 = 1326U;
	volatile int8_t x76 = -1;
	uint64_t t9 = 1LLU;

    t9 = ((x73/(x74-x75))+x76);

    if (t9 != 1664LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static int32_t x77 = -1;
	int16_t x78 = INT16_MIN;
	uint16_t x79 = 2U;
	volatile int32_t t10 = 348338;

    t10 = ((x77/(x78-x79))+x80);

    if (t10 != 127) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x89 = 23224431210010816LLU;
	int64_t x91 = INT64_MIN;
	static volatile int16_t x92 = INT16_MAX;
	volatile uint64_t t11 = 259981LLU;

    t11 = ((x89/(x90-x91))+x92);

    if (t11 != 32767LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x93 = 14U;
	int16_t x94 = INT16_MIN;
	int16_t x95 = 1;
	int8_t x96 = -6;

    t12 = ((x93/(x94-x95))+x96);

    if (t12 != -6) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint16_t x97 = UINT16_MAX;
	volatile int64_t x98 = INT64_MIN;
	int32_t x99 = INT32_MIN;
	int16_t x100 = -2036;
	int64_t t13 = 685582LL;

    t13 = ((x97/(x98-x99))+x100);

    if (t13 != -2036LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x101 = UINT8_MAX;
	int64_t x103 = 514443LL;
	int64_t x104 = 7426515LL;
	int64_t t14 = 1LL;

    t14 = ((x101/(x102-x103))+x104);

    if (t14 != 7426515LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x106 = INT8_MIN;
	int8_t x107 = INT8_MAX;
	volatile uint32_t x108 = 17914093U;
	uint64_t t15 = 90367956833LLU;

    t15 = ((x105/(x106-x107))+x108);

    if (t15 != 17914094LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x110 = UINT32_MAX;
	volatile uint64_t t16 = 0LLU;

    t16 = ((x109/(x110-x111))+x112);

    if (t16 != 4302161604LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x113 = 687583581711382752LLU;
	uint8_t x114 = 122U;
	int32_t x115 = 9382743;

    t17 = ((x113/(x114-x115))+x116);

    if (t17 != 18446744073709549407LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x117 = 97U;
	int64_t x119 = INT64_MAX;
	static volatile int64_t x120 = INT64_MIN;
	volatile int64_t t18 = INT64_MIN;

    t18 = ((x117/(x118-x119))+x120);

    if (t18 != INT64_MIN) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x121 = 0U;
	uint16_t x122 = 12U;
	int16_t x123 = INT16_MIN;
	volatile int32_t t19 = -3115;

    t19 = ((x121/(x122-x123))+x124);

    if (t19 != 2942) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x129 = INT64_MIN;
	uint8_t x130 = UINT8_MAX;
	static uint64_t x131 = UINT64_MAX;
	uint32_t x132 = 963636U;
	volatile uint64_t t20 = 1197105189494788LLU;

    t20 = ((x129/(x130-x131))+x132);

    if (t20 != 36028797019927604LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x133 = -1LL;
	uint32_t x134 = 9U;
	int64_t x135 = -49737901009301LL;
	int8_t x136 = -62;
	int64_t t21 = -5393296LL;

    t21 = ((x133/(x134-x135))+x136);

    if (t21 != -62LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x137 = -1;
	int64_t x138 = -72192348LL;
	volatile int64_t x139 = -831051442LL;
	int64_t x140 = 354LL;
	static int64_t t22 = 66704437702LL;

    t22 = ((x137/(x138-x139))+x140);

    if (t22 != 354LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x142 = INT16_MIN;
	int8_t x143 = INT8_MAX;
	static volatile int8_t x144 = INT8_MAX;
	int32_t t23 = -4;

    t23 = ((x141/(x142-x143))+x144);

    if (t23 != 127) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x145 = 1;
	int32_t x146 = -1;
	uint64_t x148 = 49316347564617975LLU;

    t24 = ((x145/(x146-x147))+x148);

    if (t24 != 49316347564617975LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x149 = 1;
	int16_t x150 = -38;
	static int8_t x151 = INT8_MAX;
	uint64_t x152 = 316391959820742LLU;
	volatile uint64_t t25 = 49615808LLU;

    t25 = ((x149/(x150-x151))+x152);

    if (t25 != 316391959820742LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x153 = INT32_MIN;
	int8_t x154 = -1;
	uint16_t x155 = 270U;
	int32_t t26 = 1;

    t26 = ((x153/(x154-x155))+x156);

    if (t26 != 7924294) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int32_t x165 = INT32_MAX;
	int16_t x166 = 59;
	static int16_t x167 = -1;
	static int32_t t27 = -4690;

    t27 = ((x165/(x166-x167))+x168);

    if (t27 != 35758626) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint8_t x173 = 23U;
	uint32_t x175 = UINT32_MAX;
	int16_t x176 = INT16_MIN;
	uint32_t t28 = 2590455U;

    t28 = ((x173/(x174-x175))+x176);

    if (t28 != 4294934528U) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x177 = 12004U;
	uint8_t x178 = 22U;
	volatile uint16_t x180 = UINT16_MAX;
	static volatile int64_t t29 = -165293570702LL;

    t29 = ((x177/(x178-x179))+x180);

    if (t29 != 65535LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x181 = INT8_MIN;
	int32_t x182 = INT32_MIN;
	int8_t x184 = -1;
	volatile int32_t t30 = -1963;

    t30 = ((x181/(x182-x183))+x184);

    if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x185 = -1;
	int64_t x187 = -1LL;
	int64_t x188 = INT64_MAX;
	volatile int64_t t31 = INT64_MAX;

    t31 = ((x185/(x186-x187))+x188);

    if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x193 = 22905U;
	uint64_t x194 = 247869152459820749LLU;
	int8_t x195 = INT8_MIN;
	int64_t x196 = -1LL;

    t32 = ((x193/(x194-x195))+x196);

    if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x201 = INT16_MIN;
	static uint16_t x202 = UINT16_MAX;
	static uint8_t x203 = 20U;
	int16_t x204 = -1;
	static volatile int32_t t33 = 16570408;

    t33 = ((x201/(x202-x203))+x204);

    if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x209 = UINT32_MAX;
	static int64_t x211 = 1246609LL;
	static int8_t x212 = INT8_MAX;
	volatile int64_t t34 = 405LL;

    t34 = ((x209/(x210-x211))+x212);

    if (t34 != -3318LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x213 = INT32_MIN;
	int8_t x214 = 0;
	uint32_t x215 = 1769152U;
	int8_t x216 = -1;
	volatile uint32_t t35 = UINT32_MAX;

    t35 = ((x213/(x214-x215))+x216);

    if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x217 = INT8_MAX;
	static int8_t x218 = -1;
	static volatile int16_t x219 = -3;
	int32_t t36 = 30505876;

    t36 = ((x217/(x218-x219))+x220);

    if (t36 != 62) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x222 = -4;
	int16_t x224 = INT16_MIN;
	uint64_t t37 = 260033LLU;

    t37 = ((x221/(x222-x223))+x224);

    if (t37 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x225 = INT8_MIN;
	static int32_t x226 = INT32_MIN;
	volatile uint64_t x227 = 31LLU;
	volatile int64_t x228 = -1992047878672421LL;
	uint64_t t38 = 2LLU;

    t38 = ((x225/(x226-x227))+x228);

    if (t38 != 18444752025830879196LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x229 = -7555738;
	uint64_t x230 = 18164LLU;
	uint64_t x232 = 1LLU;
	volatile uint64_t t39 = 360214955688773LLU;

    t39 = ((x229/(x230-x231))+x232);

    if (t39 != 2LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x253 = 8;
	uint32_t x254 = 37449U;
	static int8_t x255 = -1;
	volatile int64_t x256 = INT64_MIN;
	int64_t t40 = INT64_MIN;

    t40 = ((x253/(x254-x255))+x256);

    if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x258 = -24;
	int32_t x259 = INT32_MIN;

    t41 = ((x257/(x258-x259))+x260);

    if (t41 != INT32_MIN) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x261 = 91063289;
	volatile int32_t x263 = -22845876;
	int16_t x264 = INT16_MIN;
	volatile int64_t t42 = -10818846080LL;

    t42 = ((x261/(x262-x263))+x264);

    if (t42 != -32768LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x265 = INT32_MIN;
	static volatile int16_t x267 = INT16_MAX;
	int64_t x268 = INT64_MIN;
	volatile int64_t t43 = -1LL;

    t43 = ((x265/(x266-x267))+x268);

    if (t43 != -9223372036854710015LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x269 = 1322330U;
	volatile int16_t x272 = -1;
	static uint32_t t44 = 286895U;

    t44 = ((x269/(x270-x271))+x272);

    if (t44 != 19U) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x273 = -17;
	int8_t x274 = -1;
	static int32_t x275 = -382937576;
	volatile int8_t x276 = 0;
	volatile int32_t t45 = 1472612;

    t45 = ((x273/(x274-x275))+x276);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x277 = INT64_MIN;
	int16_t x278 = INT16_MAX;
	volatile int16_t x279 = -10;
	int16_t x280 = -7;

    t46 = ((x277/(x278-x279))+x280);

    if (t46 != -281397688527168LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x282 = 839LLU;
	uint64_t x283 = 107039185LLU;
	static volatile uint64_t t47 = 5172LLU;

    t47 = ((x281/(x282-x283))+x284);

    if (t47 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x285 = INT32_MAX;
	int8_t x286 = 5;
	uint8_t x287 = UINT8_MAX;
	int32_t t48 = -352;

    t48 = ((x285/(x286-x287))+x288);

    if (t48 != -8622702) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x293 = 1U;
	uint64_t x294 = UINT64_MAX;
	uint8_t x295 = 0U;
	volatile uint64_t t49 = 105612789302670LLU;

    t49 = ((x293/(x294-x295))+x296);

    if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x297 = INT64_MAX;
	int64_t x299 = 1205566615790548LL;
	uint16_t x300 = 41U;
	int64_t t50 = -12011231703273847LL;

    t50 = ((x297/(x298-x299))+x300);

    if (t50 != -7609LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x301 = INT64_MIN;
	volatile int64_t t51 = -177275873LL;

    t51 = ((x301/(x302-x303))+x304);

    if (t51 != -4391542685LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x305 = 87U;
	uint16_t x306 = UINT16_MAX;
	static int8_t x307 = 12;

    t52 = ((x305/(x306-x307))+x308);

    if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x329 = -1LL;
	static int64_t x330 = -1LL;
	volatile int64_t t53 = 4482348086453505141LL;

    t53 = ((x329/(x330-x331))+x332);

    if (t53 != 65535LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x333 = INT8_MIN;
	int64_t x335 = INT64_MIN;
	int8_t x336 = -1;
	int64_t t54 = -1468369293000LL;

    t54 = ((x333/(x334-x335))+x336);

    if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x337 = INT32_MAX;
	int64_t x339 = INT64_MIN;
	int64_t t55 = 1185905LL;

    t55 = ((x337/(x338-x339))+x340);

    if (t55 != 32767LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x345 = INT16_MIN;
	int64_t x346 = INT64_MIN;
	int8_t x347 = INT8_MIN;
	int64_t x348 = -1LL;

    t56 = ((x345/(x346-x347))+x348);

    if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint8_t x353 = 126U;
	static int32_t x354 = INT32_MIN;
	uint64_t x355 = 6825430178664LLU;
	uint16_t x356 = UINT16_MAX;
	uint64_t t57 = 63185562LLU;

    t57 = ((x353/(x354-x355))+x356);

    if (t57 != 65535LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x357 = 12040U;
	int32_t x358 = INT32_MIN;
	int16_t x359 = -2;
	int32_t x360 = INT32_MIN;
	uint32_t t58 = 812747U;

    t58 = ((x357/(x358-x359))+x360);

    if (t58 != 2147483648U) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x361 = INT16_MIN;
	int16_t x363 = -4;
	int8_t x364 = 1;
	int32_t t59 = 26092;

    t59 = ((x361/(x362-x363))+x364);

    if (t59 != -1056) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x365 = INT64_MIN;
	static uint16_t x366 = UINT16_MAX;
	int16_t x367 = INT16_MAX;
	volatile uint64_t x368 = 34269328010075LLU;

    t60 = ((x365/(x366-x367))+x368);

    if (t60 != 18446496868060851035LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x369 = 1593LLU;
	int16_t x370 = INT16_MIN;
	int16_t x371 = INT16_MAX;
	volatile uint64_t t61 = 0LLU;

    t61 = ((x369/(x370-x371))+x372);

    if (t61 != 18446744073709544225LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x373 = INT16_MIN;
	uint32_t x374 = 1124115259U;
	uint64_t x375 = UINT64_MAX;
	int16_t x376 = INT16_MIN;
	static volatile uint64_t t62 = 5066970327430LLU;

    t62 = ((x373/(x374-x375))+x376);

    if (t62 != 16409978491LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint16_t x381 = 710U;
	int16_t x382 = -4;
	static uint64_t x383 = 1579205738152103067LLU;
	uint64_t t63 = 1LLU;

    t63 = ((x381/(x382-x383))+x384);

    if (t63 != 22959LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x387 = INT8_MIN;
	static volatile int16_t x388 = -2;
	volatile int32_t t64 = -56;

    t64 = ((x385/(x386-x387))+x388);

    if (t64 != -4) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x390 = INT64_MAX;
	volatile uint16_t x391 = 15400U;
	int64_t x392 = INT64_MAX;
	static volatile int64_t t65 = INT64_MAX;

    t65 = ((x389/(x390-x391))+x392);

    if (t65 != INT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x393 = INT64_MIN;
	int32_t x394 = 33;
	int8_t x395 = -1;
	uint32_t x396 = 4688137U;
	int64_t t66 = -2046330589LL;

    t66 = ((x393/(x394-x395))+x396);

    if (t66 != -271275648138099386LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x401 = 15U;
	static int64_t x402 = -1LL;
	static volatile int8_t x403 = INT8_MIN;
	int16_t x404 = 11;
	int64_t t67 = 3444442645LL;

    t67 = ((x401/(x402-x403))+x404);

    if (t67 != 11LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x409 = INT64_MIN;
	int32_t x410 = -8;
	volatile int64_t x411 = INT64_MIN;
	volatile uint16_t x412 = UINT16_MAX;
	volatile int64_t t68 = -267482688259184819LL;

    t68 = ((x409/(x410-x411))+x412);

    if (t68 != 65534LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x413 = INT64_MAX;
	int8_t x414 = -3;
	int16_t x415 = INT16_MAX;
	int64_t t69 = 3360050LL;

    t69 = ((x413/(x414-x415))+x416);

    if (t69 != -281457797889857LL) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint32_t x417 = 29U;
	volatile uint32_t t70 = 283U;

    t70 = ((x417/(x418-x419))+x420);

    if (t70 != 1U) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x425 = UINT32_MAX;
	int8_t x426 = -1;
	uint32_t x427 = 191209U;
	int64_t x428 = INT64_MIN;
	int64_t t71 = -24091025747258851LL;

    t71 = ((x425/(x426-x427))+x428);

    if (t71 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint64_t x431 = UINT64_MAX;
	static int64_t x432 = -143714407637325LL;
	uint64_t t72 = 2905193653014784328LLU;

    t72 = ((x429/(x430-x431))+x432);

    if (t72 != 18446600359301914291LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x438 = 17;
	int64_t x439 = INT64_MAX;
	int16_t x440 = -3;
	volatile int64_t t73 = 181805321258LL;

    t73 = ((x437/(x438-x439))+x440);

    if (t73 != -3LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x441 = INT16_MAX;
	volatile uint16_t x442 = UINT16_MAX;
	static int8_t x443 = INT8_MIN;
	uint16_t x444 = 457U;
	int32_t t74 = -2406768;

    t74 = ((x441/(x442-x443))+x444);

    if (t74 != 457) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint16_t x446 = UINT16_MAX;
	volatile uint32_t x447 = 1909625977U;
	int8_t x448 = 1;

    t75 = ((x445/(x446-x447))+x448);

    if (t75 != 1U) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x449 = 28446U;
	uint32_t x450 = 1775U;
	uint8_t x451 = UINT8_MAX;

    t76 = ((x449/(x450-x451))+x452);

    if (t76 != 17U) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x454 = INT16_MIN;
	int32_t x455 = -5271578;
	static uint64_t x456 = 2301197LLU;

    t77 = ((x453/(x454-x455))+x456);

    if (t77 != 2301197LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x457 = INT16_MIN;
	int8_t x458 = INT8_MAX;
	int16_t x459 = -1;
	int32_t x460 = INT32_MAX;
	volatile int32_t t78 = -660;

    t78 = ((x457/(x458-x459))+x460);

    if (t78 != 2147483391) { NG(); } else { ; }
	
}

void f79(void) {
    	static int64_t x465 = INT64_MAX;
	int16_t x466 = -1;
	int8_t x468 = 2;
	int64_t t79 = 3809859690309LL;

    t79 = ((x465/(x466-x467))+x468);

    if (t79 != -72057594037927933LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x469 = -1;
	int32_t x470 = -493361;
	volatile int32_t x471 = INT32_MIN;
	uint16_t x472 = UINT16_MAX;
	static volatile int32_t t80 = 8429;

    t80 = ((x469/(x470-x471))+x472);

    if (t80 != 65535) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x473 = 1U;
	int64_t x474 = INT64_MIN;
	int8_t x475 = INT8_MIN;
	int64_t x476 = INT64_MIN;
	static int64_t t81 = INT64_MIN;

    t81 = ((x473/(x474-x475))+x476);

    if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x477 = INT8_MIN;
	static uint8_t x478 = 1U;
	uint64_t x479 = UINT64_MAX;
	int8_t x480 = INT8_MIN;

    t82 = ((x477/(x478-x479))+x480);

    if (t82 != 9223372036854775616LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x485 = INT16_MAX;
	static volatile uint16_t x487 = UINT16_MAX;
	volatile int32_t x488 = -1;
	int32_t t83 = -1;

    t83 = ((x485/(x486-x487))+x488);

    if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x489 = 1475840753U;
	volatile int32_t x490 = INT32_MIN;
	int16_t x491 = -1;
	int64_t x492 = -15356LL;

    t84 = ((x489/(x490-x491))+x492);

    if (t84 != -15356LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x501 = 10278989739517LLU;
	uint32_t x502 = UINT32_MAX;
	static int32_t x503 = -63242;
	int32_t x504 = INT32_MIN;
	volatile uint64_t t85 = 18752556940684LLU;

    t85 = ((x501/(x502-x503))+x504);

    if (t85 != 18446744071724604767LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x505 = -1;
	int32_t x506 = -17845;
	int16_t x507 = -686;
	volatile int64_t x508 = INT64_MIN;

    t86 = ((x505/(x506-x507))+x508);

    if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x509 = -1556;
	int8_t x510 = INT8_MAX;
	int8_t x511 = 25;
	volatile int8_t x512 = 1;
	int32_t t87 = 25543420;

    t87 = ((x509/(x510-x511))+x512);

    if (t87 != -14) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x513 = 108;
	static volatile uint16_t x514 = UINT16_MAX;
	int64_t x515 = -1LL;
	int64_t x516 = INT64_MIN;

    t88 = ((x513/(x514-x515))+x516);

    if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint64_t x521 = UINT64_MAX;
	int32_t x522 = INT32_MIN;
	uint32_t x523 = UINT32_MAX;
	static int8_t x524 = 8;
	uint64_t t89 = 6527839847294380461LLU;

    t89 = ((x521/(x522-x523))+x524);

    if (t89 != 8589934596LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x525 = 1U;
	uint32_t x526 = 379351882U;
	int16_t x527 = INT16_MIN;
	volatile uint16_t x528 = UINT16_MAX;
	static volatile uint32_t t90 = 2U;

    t90 = ((x525/(x526-x527))+x528);

    if (t90 != 65535U) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x529 = INT8_MIN;
	int32_t x530 = 6255;
	static volatile uint16_t x531 = 654U;
	volatile int8_t x532 = -7;
	volatile int32_t t91 = 525;

    t91 = ((x529/(x530-x531))+x532);

    if (t91 != -7) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x535 = INT32_MIN;
	volatile int64_t t92 = 240997630863LL;

    t92 = ((x533/(x534-x535))+x536);

    if (t92 != -58LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x537 = 2145U;
	uint32_t x538 = 1U;
	static uint32_t x540 = UINT32_MAX;

    t93 = ((x537/(x538-x539))+x540);

    if (t93 != UINT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x541 = INT8_MIN;
	volatile int16_t x542 = INT16_MAX;
	int16_t x543 = 0;
	uint16_t x544 = UINT16_MAX;
	int32_t t94 = 241;

    t94 = ((x541/(x542-x543))+x544);

    if (t94 != 65535) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint8_t x545 = 1U;
	int8_t x546 = -55;
	int32_t x547 = INT32_MIN;
	int64_t x548 = INT64_MIN;

    t95 = ((x545/(x546-x547))+x548);

    if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint8_t x549 = 23U;
	uint16_t x550 = 7U;
	int32_t x551 = 22;

    t96 = ((x549/(x550-x551))+x552);

    if (t96 != 3174U) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x553 = INT8_MIN;
	static int16_t x555 = 848;
	static int8_t x556 = INT8_MAX;
	volatile int32_t t97 = 128827;

    t97 = ((x553/(x554-x555))+x556);

    if (t97 != 127) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x561 = 1;
	static uint8_t x562 = 34U;
	int64_t x563 = -1LL;
	static uint8_t x564 = 1U;

    t98 = ((x561/(x562-x563))+x564);

    if (t98 != 1LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x566 = -1;
	static volatile uint16_t x568 = 6113U;

    t99 = ((x565/(x566-x567))+x568);

    if (t99 != 6113) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x571 = 39383096U;
	uint64_t x572 = UINT64_MAX;
	uint64_t t100 = UINT64_MAX;

    t100 = ((x569/(x570-x571))+x572);

    if (t100 != UINT64_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x579 = -1LL;
	int32_t x580 = INT32_MIN;
	volatile int64_t t101 = 111014671049559408LL;

    t101 = ((x577/(x578-x579))+x580);

    if (t101 != -2147483648LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint16_t x581 = 1906U;
	int32_t x582 = INT32_MAX;
	uint8_t x584 = 26U;
	volatile int32_t t102 = -7752847;

    t102 = ((x581/(x582-x583))+x584);

    if (t102 != 26) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x585 = 0;
	int32_t x587 = INT32_MAX;
	uint16_t x588 = 4U;
	uint32_t t103 = 19U;

    t103 = ((x585/(x586-x587))+x588);

    if (t103 != 4U) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x590 = INT32_MAX;
	int8_t x591 = 1;
	uint8_t x592 = UINT8_MAX;
	volatile int32_t t104 = -841825;

    t104 = ((x589/(x590-x591))+x592);

    if (t104 != 255) { NG(); } else { ; }
	
}

void f105(void) {
    	static int8_t x594 = INT8_MIN;
	int16_t x596 = INT16_MAX;
	volatile uint64_t t105 = 1LLU;

    t105 = ((x593/(x594-x595))+x596);

    if (t105 != 32767LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x597 = 17511LLU;
	int16_t x598 = INT16_MAX;
	uint32_t x599 = 2790487U;
	static uint16_t x600 = UINT16_MAX;
	volatile uint64_t t106 = 22630LLU;

    t106 = ((x597/(x598-x599))+x600);

    if (t106 != 65535LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x601 = 14;
	volatile int8_t x602 = 0;
	volatile int32_t x604 = INT32_MIN;
	int64_t t107 = 20LL;

    t107 = ((x601/(x602-x603))+x604);

    if (t107 != -2147483649LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x605 = UINT16_MAX;
	int32_t x606 = -1;
	int32_t x608 = -1;

    t108 = ((x605/(x606-x607))+x608);

    if (t108 != 515) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x609 = INT64_MIN;
	static int16_t x610 = INT16_MIN;
	int64_t t109 = 151887739LL;

    t109 = ((x609/(x610-x611))+x612);

    if (t109 != -2139051194LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x614 = 0;
	static int16_t x615 = 115;
	int16_t x616 = 1;
	volatile int32_t t110 = 29;

    t110 = ((x613/(x614-x615))+x616);

    if (t110 != -283) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x622 = INT8_MAX;
	static volatile int8_t x624 = -1;

    t111 = ((x621/(x622-x623))+x624);

    if (t111 != -1LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x630 = INT64_MIN;
	int8_t x631 = INT8_MIN;
	uint8_t x632 = UINT8_MAX;

    t112 = ((x629/(x630-x631))+x632);

    if (t112 != 255LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x633 = 665;
	int32_t x634 = INT32_MIN;
	volatile int8_t x635 = INT8_MIN;
	static uint32_t x636 = 1970854130U;
	uint32_t t113 = 40108575U;

    t113 = ((x633/(x634-x635))+x636);

    if (t113 != 1970854130U) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x637 = INT32_MIN;
	uint16_t x638 = UINT16_MAX;
	int32_t x639 = INT32_MAX;
	volatile int16_t x640 = INT16_MAX;

    t114 = ((x637/(x638-x639))+x640);

    if (t114 != 32768) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x641 = -59;
	int64_t x642 = 119363906778872LL;
	int32_t x643 = INT32_MAX;
	uint16_t x644 = 1475U;
	static int64_t t115 = -344693418LL;

    t115 = ((x641/(x642-x643))+x644);

    if (t115 != 1475LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x645 = INT16_MIN;
	int8_t x646 = INT8_MIN;
	int32_t x647 = INT32_MIN;
	int64_t x648 = INT64_MIN;
	int64_t t116 = INT64_MIN;

    t116 = ((x645/(x646-x647))+x648);

    if (t116 != INT64_MIN) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile int8_t x649 = -1;
	static volatile int8_t x651 = -1;
	int32_t x652 = INT32_MIN;
	int32_t t117 = INT32_MIN;

    t117 = ((x649/(x650-x651))+x652);

    if (t117 != INT32_MIN) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x653 = INT64_MIN;
	static int32_t x654 = -1;
	uint8_t x655 = 45U;
	static volatile int64_t t118 = 309LL;

    t118 = ((x653/(x654-x655))+x656);

    if (t118 != 200508087757712516LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x657 = -1352;
	int8_t x658 = INT8_MIN;
	uint32_t x659 = 97U;
	int16_t x660 = -1;

    t119 = ((x657/(x658-x659))+x660);

    if (t119 != UINT32_MAX) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x661 = INT64_MAX;
	volatile int64_t x662 = INT64_MIN;
	int32_t x663 = -1;
	static uint8_t x664 = UINT8_MAX;

    t120 = ((x661/(x662-x663))+x664);

    if (t120 != 254LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x666 = -1;
	static uint8_t x667 = UINT8_MAX;
	int32_t x668 = -154012;
	int32_t t121 = 207166;

    t121 = ((x665/(x666-x667))+x668);

    if (t121 != -154050) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x671 = -1583682;
	int64_t t122 = -9141716LL;

    t122 = ((x669/(x670-x671))+x672);

    if (t122 != -2147483648LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x673 = UINT64_MAX;
	uint32_t x675 = UINT32_MAX;
	volatile int64_t x676 = -1LL;
	volatile uint64_t t123 = 7441383LLU;

    t123 = ((x673/(x674-x675))+x676);

    if (t123 != 5774105927283LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint32_t x678 = 159813U;
	int32_t x679 = -1;

    t124 = ((x677/(x678-x679))+x680);

    if (t124 != INT64_MIN) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint16_t x686 = 55U;
	uint32_t x687 = UINT32_MAX;
	volatile uint64_t t125 = 104LLU;

    t125 = ((x685/(x686-x687))+x688);

    if (t125 != 1914376247391843817LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x694 = INT32_MIN;
	static int16_t x695 = INT16_MIN;
	uint8_t x696 = UINT8_MAX;
	static int32_t t126 = 120;

    t126 = ((x693/(x694-x695))+x696);

    if (t126 != 255) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int64_t x697 = -65LL;
	int16_t x698 = INT16_MIN;
	uint8_t x699 = 29U;
	int16_t x700 = -1791;

    t127 = ((x697/(x698-x699))+x700);

    if (t127 != -1791LL) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int32_t x702 = INT32_MIN;
	static int64_t x703 = -1LL;
	int64_t t128 = -13074LL;

    t128 = ((x701/(x702-x703))+x704);

    if (t128 != 235772093LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int16_t x705 = INT16_MIN;
	volatile int8_t x706 = 1;
	uint64_t x707 = 17784341343739LLU;
	uint16_t x708 = UINT16_MAX;

    t129 = ((x705/(x706-x707))+x708);

    if (t129 != 65536LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x709 = -1LL;
	int8_t x710 = INT8_MIN;
	int8_t x711 = -12;
	static uint8_t x712 = 0U;
	int64_t t130 = 9LL;

    t130 = ((x709/(x710-x711))+x712);

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x713 = INT8_MIN;
	uint32_t x714 = 15187733U;
	int64_t x715 = 150483463476354LL;
	static int64_t t131 = -3848828929308392LL;

    t131 = ((x713/(x714-x715))+x716);

    if (t131 != 27LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x717 = 30617669U;
	uint64_t x718 = 1186544LLU;
	static volatile int16_t x719 = 0;
	uint32_t x720 = 613U;
	uint64_t t132 = 129468404LLU;

    t132 = ((x717/(x718-x719))+x720);

    if (t132 != 638LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x721 = -1;
	static int64_t x723 = -907890LL;
	uint64_t x724 = 495LLU;
	uint64_t t133 = 240LLU;

    t133 = ((x721/(x722-x723))+x724);

    if (t133 != 18281280207054LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x725 = 672892U;
	volatile int64_t x726 = INT64_MIN;
	int8_t x727 = -1;
	static int64_t x728 = INT64_MAX;
	volatile int64_t t134 = INT64_MAX;

    t134 = ((x725/(x726-x727))+x728);

    if (t134 != INT64_MAX) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x733 = -1814;
	int32_t x734 = 799565397;
	int8_t x735 = 1;
	int32_t x736 = INT32_MAX;
	volatile int32_t t135 = INT32_MAX;

    t135 = ((x733/(x734-x735))+x736);

    if (t135 != INT32_MAX) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x737 = 1888162LLU;
	int8_t x738 = 3;
	int32_t x739 = -6285;
	static volatile int64_t x740 = 1063083682396495437LL;
	volatile uint64_t t136 = 1881776970664LLU;

    t136 = ((x737/(x738-x739))+x740);

    if (t136 != 1063083682396495737LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x741 = UINT64_MAX;
	int16_t x742 = INT16_MIN;
	uint32_t x743 = 1899695975U;
	static uint32_t x744 = 44U;
	volatile uint64_t t137 = 8237121146499522520LLU;

    t137 = ((x741/(x742-x743))+x744);

    if (t137 != 7701422539LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x745 = INT32_MIN;
	static uint16_t x746 = 19U;
	int64_t x747 = 120986794287710380LL;
	int64_t t138 = 368669687259276757LL;

    t138 = ((x745/(x746-x747))+x748);

    if (t138 != -128LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x749 = INT32_MIN;
	uint8_t x750 = 3U;
	int8_t x751 = -1;
	uint8_t x752 = 49U;
	static volatile int32_t t139 = 1017;

    t139 = ((x749/(x750-x751))+x752);

    if (t139 != -536870863) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x753 = INT32_MIN;
	volatile int8_t x754 = 13;
	uint16_t x755 = 1U;
	int32_t x756 = -1;

    t140 = ((x753/(x754-x755))+x756);

    if (t140 != -178956971) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x757 = UINT64_MAX;
	static uint16_t x758 = 3U;
	static int16_t x759 = INT16_MIN;
	static uint64_t x760 = 2165564431959161994LLU;
	uint64_t t141 = 87931LLU;

    t141 = ((x757/(x758-x759))+x760);

    if (t141 != 2166127330377693914LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint32_t x761 = 785U;
	int16_t x763 = 6;
	int64_t t142 = 14849900096710477LL;

    t142 = ((x761/(x762-x763))+x764);

    if (t142 != -9223372036854775752LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static int8_t x770 = INT8_MIN;
	int16_t x771 = INT16_MIN;
	int32_t x772 = INT32_MAX;

    t143 = ((x769/(x770-x771))+x772);

    if (t143 != INT32_MAX) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x773 = UINT32_MAX;
	int32_t x774 = -1;
	volatile int8_t x776 = INT8_MIN;
	uint32_t t144 = 7863U;

    t144 = ((x773/(x774-x775))+x776);

    if (t144 != 4294967169U) { NG(); } else { ; }
	
}

void f145(void) {
    	static int64_t x777 = 3287LL;
	static volatile uint64_t x778 = 7939255795613386LLU;
	int8_t x779 = -1;

    t145 = ((x777/(x778-x779))+x780);

    if (t145 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x781 = INT8_MAX;
	int32_t x782 = -462001186;
	int16_t x784 = -104;
	uint32_t t146 = 263472542U;

    t146 = ((x781/(x782-x783))+x784);

    if (t146 != 4294967192U) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int16_t x789 = -1552;
	static volatile int64_t x790 = -239LL;
	int16_t x791 = -1;
	int16_t x792 = 0;
	int64_t t147 = 116364649101LL;

    t147 = ((x789/(x790-x791))+x792);

    if (t147 != 6LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x794 = 15475656;
	uint32_t x795 = 19582U;
	uint32_t t148 = 459818U;

    t148 = ((x793/(x794-x795))+x796);

    if (t148 != 2U) { NG(); } else { ; }
	
}

void f149(void) {
    	static int32_t x797 = 3882721;
	uint8_t x799 = UINT8_MAX;
	int32_t x800 = INT32_MIN;
	volatile uint64_t t149 = 424LLU;

    t149 = ((x797/(x798-x799))+x800);

    if (t149 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint64_t x806 = UINT64_MAX;
	int32_t x807 = INT32_MIN;
	static int8_t x808 = -1;
	volatile uint64_t t150 = UINT64_MAX;

    t150 = ((x805/(x806-x807))+x808);

    if (t150 != UINT64_MAX) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x813 = 93737460U;
	uint16_t x814 = 71U;
	int32_t x815 = -2363;
	static volatile uint64_t t151 = 48622636698352LLU;

    t151 = ((x813/(x814-x815))+x816);

    if (t151 != 520901807029LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x821 = -54;
	int8_t x822 = INT8_MAX;
	volatile int32_t t152 = INT32_MIN;

    t152 = ((x821/(x822-x823))+x824);

    if (t152 != INT32_MIN) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x825 = INT8_MIN;
	int16_t x827 = INT16_MIN;
	volatile uint16_t x828 = 7571U;
	int32_t t153 = -5;

    t153 = ((x825/(x826-x827))+x828);

    if (t153 != 7571) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x829 = -10;
	uint8_t x831 = 92U;
	int16_t x832 = INT16_MIN;
	volatile int32_t t154 = 3;

    t154 = ((x829/(x830-x831))+x832);

    if (t154 != -32768) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x833 = 362505LLU;
	int16_t x835 = -1;
	int32_t x836 = 454779;
	volatile uint64_t t155 = 260786LLU;

    t155 = ((x833/(x834-x835))+x836);

    if (t155 != 459486LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x837 = INT32_MAX;
	int16_t x838 = INT16_MIN;
	int8_t x839 = INT8_MIN;
	uint16_t x840 = UINT16_MAX;

    t156 = ((x837/(x838-x839))+x840);

    if (t156 != -258) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile uint16_t x842 = UINT16_MAX;
	static volatile int16_t x843 = -1;
	static int32_t t157 = -8;

    t157 = ((x841/(x842-x843))+x844);

    if (t157 != -1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x845 = UINT32_MAX;
	int32_t x846 = -1;
	volatile uint16_t x847 = 251U;
	volatile uint32_t t158 = 23U;

    t158 = ((x845/(x846-x847))+x848);

    if (t158 != 43142914U) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x849 = 635686558;
	uint16_t x850 = 2534U;
	uint32_t x851 = 3601764U;

    t159 = ((x849/(x850-x851))+x852);

    if (t159 != 4288136847U) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x857 = INT16_MAX;
	volatile uint16_t x858 = 95U;
	volatile int64_t x859 = INT64_MAX;
	int8_t x860 = INT8_MIN;
	static volatile int64_t t160 = -117LL;

    t160 = ((x857/(x858-x859))+x860);

    if (t160 != -128LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static int8_t x862 = -12;
	uint8_t x864 = 90U;
	int64_t t161 = 14482742504279993LL;

    t161 = ((x861/(x862-x863))+x864);

    if (t161 != -1865568777680892LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x865 = -15968139078LL;
	static int8_t x866 = INT8_MIN;
	static uint64_t x868 = UINT64_MAX;
	uint64_t t162 = 23447LLU;

    t162 = ((x865/(x866-x867))+x868);

    if (t162 != 61415918LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x869 = UINT16_MAX;
	int8_t x871 = INT8_MIN;
	uint8_t x872 = 5U;
	volatile int64_t t163 = 3095445056323LL;

    t163 = ((x869/(x870-x871))+x872);

    if (t163 != 5LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x881 = 1;
	volatile int64_t x882 = -45568LL;
	uint64_t x883 = UINT64_MAX;
	volatile int16_t x884 = -1;

    t164 = ((x881/(x882-x883))+x884);

    if (t164 != UINT64_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x885 = 58U;
	int8_t x887 = 7;
	volatile int8_t x888 = 0;
	int32_t t165 = 5043;

    t165 = ((x885/(x886-x887))+x888);

    if (t165 != -2) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x893 = -2348384;
	static volatile int32_t x894 = 31229;
	uint16_t x895 = 5U;
	static volatile int32_t t166 = 13411;

    t166 = ((x893/(x894-x895))+x896);

    if (t166 != 52) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint16_t x897 = UINT16_MAX;
	int32_t x898 = -1;
	volatile int32_t x899 = 1326141;
	int8_t x900 = 38;

    t167 = ((x897/(x898-x899))+x900);

    if (t167 != 38) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x901 = INT64_MIN;
	static uint64_t x902 = UINT64_MAX;
	static volatile int32_t x903 = -3773162;

    t168 = ((x901/(x902-x903))+x904);

    if (t168 != 2444468189289LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x905 = UINT64_MAX;
	int8_t x906 = 0;
	int8_t x907 = -1;
	int64_t x908 = INT64_MAX;
	volatile uint64_t t169 = 2150311734267657115LLU;

    t169 = ((x905/(x906-x907))+x908);

    if (t169 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x909 = -61LL;
	int8_t x910 = INT8_MAX;
	volatile int64_t x912 = INT64_MAX;
	static volatile uint64_t t170 = 5436797431712153LLU;

    t170 = ((x909/(x910-x911))+x912);

    if (t170 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x914 = INT16_MIN;
	uint64_t x915 = UINT64_MAX;

    t171 = ((x913/(x914-x915))+x916);

    if (t171 != 2147483647LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x917 = 26638U;
	int8_t x918 = INT8_MIN;
	int16_t x919 = -1;
	int16_t x920 = -962;
	volatile int32_t t172 = -6395887;

    t172 = ((x917/(x918-x919))+x920);

    if (t172 != -1171) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x921 = 50U;
	int32_t x922 = -1;
	static volatile int8_t x923 = INT8_MIN;
	volatile uint64_t x924 = 967733481204LLU;
	uint64_t t173 = 81440348496447LLU;

    t173 = ((x921/(x922-x923))+x924);

    if (t173 != 967733481204LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x925 = INT8_MIN;
	uint64_t x926 = 108699481LLU;
	int8_t x927 = INT8_MIN;
	uint64_t t174 = 17211396487LLU;

    t174 = ((x925/(x926-x927))+x928);

    if (t174 != 167556384134LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x929 = INT16_MIN;
	static volatile int64_t x930 = -3363673565433359002LL;
	int8_t x931 = 8;
	uint32_t x932 = 554019U;
	volatile int64_t t175 = 5LL;

    t175 = ((x929/(x930-x931))+x932);

    if (t175 != 554019LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x938 = 1276U;
	uint8_t x939 = 81U;
	volatile int64_t x940 = 18486000LL;
	volatile int64_t t176 = 1444530LL;

    t176 = ((x937/(x938-x939))+x940);

    if (t176 != 18488241LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x941 = INT16_MIN;
	volatile uint32_t x942 = UINT32_MAX;
	int32_t x943 = 24320;
	volatile uint32_t t177 = 276536U;

    t177 = ((x941/(x942-x943))+x944);

    if (t177 != 242U) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x945 = INT32_MAX;
	int64_t x947 = INT64_MIN;
	static uint16_t x948 = UINT16_MAX;
	static uint64_t t178 = 36452LLU;

    t178 = ((x945/(x946-x947))+x948);

    if (t178 != 65535LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x953 = 16;
	uint8_t x954 = UINT8_MAX;
	int32_t x955 = -1824113;
	int32_t x956 = -1;
	volatile int32_t t179 = 13;

    t179 = ((x953/(x954-x955))+x956);

    if (t179 != -1) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x957 = -1;
	uint16_t x958 = 6U;
	volatile int64_t x959 = -1LL;
	int64_t x960 = INT64_MAX;
	int64_t t180 = INT64_MAX;

    t180 = ((x957/(x958-x959))+x960);

    if (t180 != INT64_MAX) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint16_t x962 = 31U;
	volatile int16_t x963 = INT16_MIN;
	int8_t x964 = 1;
	volatile uint32_t t181 = 10U;

    t181 = ((x961/(x962-x963))+x964);

    if (t181 != 1U) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x965 = -1;
	int32_t x966 = INT32_MAX;
	int64_t x968 = INT64_MAX;
	uint64_t t182 = 7771830900LLU;

    t182 = ((x965/(x966-x967))+x968);

    if (t182 != 9223372045444710398LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x969 = 10695;
	uint64_t x971 = 2988LLU;
	volatile int16_t x972 = -1;
	uint64_t t183 = UINT64_MAX;

    t183 = ((x969/(x970-x971))+x972);

    if (t183 != UINT64_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int8_t x974 = INT8_MIN;
	volatile int16_t x975 = INT16_MIN;
	volatile int8_t x976 = 1;
	int64_t t184 = -1496457146370845039LL;

    t184 = ((x973/(x974-x975))+x976);

    if (t184 != -282578800148736LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static int8_t x978 = -1;
	volatile int8_t x979 = INT8_MAX;
	uint16_t x980 = 25818U;
	volatile int32_t t185 = 171819;

    t185 = ((x977/(x978-x979))+x980);

    if (t185 != 25818) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x981 = -1;
	int8_t x982 = 1;
	int16_t x983 = INT16_MIN;
	uint16_t x984 = 3U;
	static int32_t t186 = 151734446;

    t186 = ((x981/(x982-x983))+x984);

    if (t186 != 3) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x989 = 930U;
	volatile int32_t x990 = -1;
	int32_t x991 = INT32_MIN;
	uint64_t x992 = UINT64_MAX;

    t187 = ((x989/(x990-x991))+x992);

    if (t187 != UINT64_MAX) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x993 = INT16_MIN;
	int16_t x994 = INT16_MAX;
	uint16_t x995 = 849U;
	int8_t x996 = 16;

    t188 = ((x993/(x994-x995))+x996);

    if (t188 != 15) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x997 = INT16_MIN;
	int64_t x998 = 720604514LL;
	static uint32_t x999 = 20821U;
	int8_t x1000 = INT8_MAX;
	volatile int64_t t189 = -6651782LL;

    t189 = ((x997/(x998-x999))+x1000);

    if (t189 != 127LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x1001 = 45435560874910115LLU;
	int16_t x1002 = -1;
	int32_t x1003 = -934;
	volatile int16_t x1004 = INT16_MIN;
	uint64_t t190 = 0LLU;

    t190 = ((x1001/(x1002-x1003))+x1004);

    if (t190 != 48698350315474LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x1005 = 131799168LLU;
	int32_t x1006 = 115;
	uint16_t x1007 = 28764U;
	uint64_t t191 = UINT64_MAX;

    t191 = ((x1005/(x1006-x1007))+x1008);

    if (t191 != UINT64_MAX) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile int64_t x1011 = -891672702LL;
	uint64_t t192 = 68574315561LLU;

    t192 = ((x1009/(x1010-x1011))+x1012);

    if (t192 != 18446741032774046635LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x1013 = 1LLU;
	static volatile int64_t x1014 = INT64_MIN;
	static volatile int8_t x1015 = INT8_MIN;
	static uint32_t x1016 = 777717U;
	volatile uint64_t t193 = 1254456187120LLU;

    t193 = ((x1013/(x1014-x1015))+x1016);

    if (t193 != 777717LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint64_t x1021 = UINT64_MAX;
	static int64_t x1022 = INT64_MAX;
	uint8_t x1023 = UINT8_MAX;
	uint16_t x1024 = UINT16_MAX;
	uint64_t t194 = 438794157699LLU;

    t194 = ((x1021/(x1022-x1023))+x1024);

    if (t194 != 65537LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint32_t x1025 = 0U;
	int64_t x1026 = -1LL;
	int8_t x1027 = 1;
	static int8_t x1028 = 21;

    t195 = ((x1025/(x1026-x1027))+x1028);

    if (t195 != 21LL) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x1033 = -16971333954043240LL;
	volatile int8_t x1034 = -1;
	int64_t x1035 = INT64_MIN;
	static volatile uint64_t x1036 = 12778LLU;
	uint64_t t196 = 103341225116497LLU;

    t196 = ((x1033/(x1034-x1035))+x1036);

    if (t196 != 12778LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int64_t x1041 = INT64_MIN;
	int32_t x1044 = INT32_MIN;
	volatile int64_t t197 = -2862945951240337LL;

    t197 = ((x1041/(x1042-x1043))+x1044);

    if (t197 != 140735340871680LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x1046 = -413;
	int64_t x1048 = -1LL;

    t198 = ((x1045/(x1046-x1047))+x1048);

    if (t198 != UINT64_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x1049 = -1;
	uint64_t x1050 = UINT64_MAX;
	int8_t x1051 = INT8_MIN;
	volatile int32_t x1052 = 201;
	static uint64_t t199 = 20567167072LLU;

    t199 = ((x1049/(x1050-x1051))+x1052);

    if (t199 != 145249953336295883LLU) { NG(); } else { ; }
	
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

