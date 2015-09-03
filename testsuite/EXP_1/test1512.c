#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MIN;
uint16_t x3 = 295U;
volatile int64_t t0 = -3662LL;
int64_t x7 = 11540LL;
volatile uint16_t x8 = 7U;
volatile int64_t t1 = -150479310576354LL;
volatile int64_t x14 = 2861035LL;
int8_t x21 = INT8_MAX;
volatile int16_t x23 = -1;
volatile uint16_t x35 = 165U;
uint8_t x36 = UINT8_MAX;
int8_t x40 = INT8_MIN;
uint32_t x42 = 534318U;
volatile int16_t x43 = INT16_MIN;
int32_t t11 = 16308;
uint32_t x62 = 4783549U;
uint16_t x67 = 16371U;
int16_t x68 = 66;
static volatile int16_t x75 = -1;
volatile uint32_t x76 = UINT32_MAX;
volatile int32_t x86 = -12991346;
int8_t x88 = 21;
volatile int32_t t21 = -1;
static int16_t x90 = INT16_MIN;
int64_t x99 = -1245266589190LL;
int16_t x101 = -1;
static int8_t x105 = INT8_MAX;
int64_t x109 = -1LL;
volatile int64_t x114 = -1LL;
static volatile int32_t t28 = -21164;
int32_t x120 = INT32_MAX;
uint64_t t30 = 2704163579599LLU;
int32_t x128 = -1;
int8_t x130 = INT8_MIN;
int32_t x138 = 72613;
volatile uint8_t x145 = UINT8_MAX;
int16_t x147 = INT16_MIN;
int64_t x148 = INT64_MIN;
int64_t x149 = INT64_MIN;
int16_t x152 = INT16_MAX;
uint32_t x153 = UINT32_MAX;
int32_t x154 = -1;
int8_t x161 = INT8_MAX;
volatile int64_t t39 = -37862213550401016LL;
int8_t x167 = 1;
uint64_t x172 = 48785452160616616LLU;
int64_t x175 = INT64_MIN;
int16_t x181 = INT16_MAX;
int64_t x182 = -560LL;
volatile int32_t t44 = 2594582;
int16_t x190 = 430;
uint16_t x191 = 10U;
int32_t x193 = INT32_MIN;
uint32_t x196 = 3U;
volatile int8_t x201 = 0;
static volatile int16_t x203 = INT16_MAX;
static int8_t x213 = INT8_MIN;
volatile int16_t x218 = -1;
int16_t x227 = INT16_MIN;
static volatile int8_t x229 = 5;
uint8_t x242 = 9U;
int32_t t60 = 17;
uint8_t x251 = UINT8_MAX;
int64_t x257 = INT64_MAX;
volatile int8_t x261 = 7;
int8_t x268 = INT8_MAX;
volatile int64_t x274 = INT64_MIN;
static int16_t x280 = 182;
volatile uint8_t x284 = 3U;
int8_t x285 = INT8_MIN;
uint64_t x287 = 40LLU;
volatile int8_t x288 = -1;
int8_t x292 = 35;
static int16_t x303 = 1040;
uint32_t x304 = 10U;
static uint64_t x305 = 184943LLU;
uint8_t x306 = UINT8_MAX;
int64_t x311 = INT64_MIN;
volatile int64_t x316 = 212LL;
static volatile uint64_t t77 = 835701220817726660LLU;
int32_t x331 = INT32_MAX;
int8_t x336 = INT8_MIN;
static int8_t x340 = 37;
int32_t t83 = 45509139;
int64_t x349 = INT64_MIN;
int16_t x350 = INT16_MIN;
int8_t x358 = INT8_MAX;
int32_t x364 = 1458472;
static int8_t x379 = 0;
uint16_t x381 = UINT16_MAX;
int16_t x387 = -1;
volatile uint8_t x390 = 31U;
int8_t x395 = INT8_MAX;
int64_t x398 = INT64_MIN;
uint32_t x400 = 24011U;
uint16_t x401 = 436U;
volatile uint32_t x402 = UINT32_MAX;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int64_t x4 = 9418677LL;

	t0 = (((x1<x2)^x3)/x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	uint8_t x6 = 3U;

	t1 = (((x5<x6)^x7)/x8);

	if (t1 != 1648LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -7;
	uint8_t x10 = 32U;
	static int32_t x11 = -6;
	uint8_t x12 = 6U;
	volatile int32_t t2 = 0;

	t2 = (((x9<x10)^x11)/x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 127U;
	uint16_t x15 = UINT16_MAX;
	int32_t x16 = -1;
	int32_t t3 = -113;

	t3 = (((x13<x14)^x15)/x16);

	if (t3 != -65534) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	uint32_t x18 = 124116927U;
	int16_t x19 = -11;
	int16_t x20 = 10;
	volatile int32_t t4 = -1036;

	t4 = (((x17<x18)^x19)/x20);

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x22 = -27;
	volatile int16_t x24 = INT16_MIN;
	static int32_t t5 = 7110983;

	t5 = (((x21<x22)^x23)/x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = 0;
	static volatile uint16_t x26 = 3U;
	static volatile int32_t x27 = -1;
	volatile uint8_t x28 = 113U;
	int32_t t6 = 1328;

	t6 = (((x25<x26)^x27)/x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MAX;
	static int64_t x30 = -1LL;
	int16_t x31 = -1;
	uint32_t x32 = 2U;
	uint32_t t7 = 1U;

	t7 = (((x29<x30)^x31)/x32);

	if (t7 != 2147483647U) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = 11151164946523LL;
	uint32_t x34 = 530326681U;
	volatile int32_t t8 = 253;

	t8 = (((x33<x34)^x35)/x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 2812354611LLU;
	int16_t x38 = INT16_MIN;
	int8_t x39 = INT8_MIN;
	volatile int32_t t9 = -22150041;

	t9 = (((x37<x38)^x39)/x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = UINT16_MAX;
	uint64_t x44 = UINT64_MAX;
	volatile uint64_t t10 = 515469491050363109LLU;

	t10 = (((x41<x42)^x43)/x44);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x45 = UINT32_MAX;
	int64_t x46 = INT64_MIN;
	static int8_t x47 = -2;
	static uint16_t x48 = 157U;

	t11 = (((x45<x46)^x47)/x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x49 = -2425;
	uint32_t x50 = UINT32_MAX;
	uint64_t x51 = 5276447110LLU;
	int16_t x52 = -1;
	volatile uint64_t t12 = 510LLU;

	t12 = (((x49<x50)^x51)/x52);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = -604;
	int16_t x54 = INT16_MIN;
	int8_t x55 = -1;
	static uint16_t x56 = 7U;
	volatile int32_t t13 = 1150;

	t13 = (((x53<x54)^x55)/x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x57 = 6;
	int32_t x58 = INT32_MIN;
	int8_t x59 = 5;
	volatile uint64_t x60 = UINT64_MAX;
	uint64_t t14 = 112471313281LLU;

	t14 = (((x57<x58)^x59)/x60);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = 2626LL;
	int32_t x63 = -10182;
	int32_t x64 = 32106;
	static int32_t t15 = 2915075;

	t15 = (((x61<x62)^x63)/x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x65 = -3923;
	uint32_t x66 = UINT32_MAX;
	volatile int32_t t16 = -542784;

	t16 = (((x65<x66)^x67)/x68);

	if (t16 != 248) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	uint64_t x70 = 6158102399170254LLU;
	volatile int8_t x71 = 49;
	uint32_t x72 = UINT32_MAX;
	static volatile uint32_t t17 = 313887872U;

	t17 = (((x69<x70)^x71)/x72);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x73 = INT32_MIN;
	uint16_t x74 = UINT16_MAX;
	uint32_t t18 = 16U;

	t18 = (((x73<x74)^x75)/x76);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = UINT8_MAX;
	volatile uint32_t x78 = 349810U;
	uint16_t x79 = 4344U;
	int16_t x80 = INT16_MAX;
	static int32_t t19 = 740905083;

	t19 = (((x77<x78)^x79)/x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x81 = -4740;
	volatile uint64_t x82 = 762531587987LLU;
	uint32_t x83 = 17791726U;
	volatile int8_t x84 = INT8_MIN;
	uint32_t t20 = 732048U;

	t20 = (((x81<x82)^x83)/x84);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = 0U;
	static uint8_t x87 = 3U;

	t21 = (((x85<x86)^x87)/x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x89 = INT64_MIN;
	uint8_t x91 = UINT8_MAX;
	int64_t x92 = INT64_MIN;
	static volatile int64_t t22 = -18997697846LL;

	t22 = (((x89<x90)^x91)/x92);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = UINT16_MAX;
	volatile int16_t x94 = INT16_MAX;
	volatile int64_t x95 = INT64_MIN;
	int16_t x96 = -28;
	int64_t t23 = 1203648053018205LL;

	t23 = (((x93<x94)^x95)/x96);

	if (t23 != 329406144173384850LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x97 = 16U;
	uint32_t x98 = 52228667U;
	volatile int8_t x100 = INT8_MAX;
	static volatile int64_t t24 = 9892780LL;

	t24 = (((x97<x98)^x99)/x100);

	if (t24 != -9805248733LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x102 = INT64_MAX;
	int16_t x103 = INT16_MAX;
	uint16_t x104 = 533U;
	static volatile int32_t t25 = 41472;

	t25 = (((x101<x102)^x103)/x104);

	if (t25 != 61) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x106 = 4115U;
	int16_t x107 = INT16_MIN;
	volatile int16_t x108 = -1;
	int32_t t26 = -8880977;

	t26 = (((x105<x106)^x107)/x108);

	if (t26 != 32767) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x110 = 7594756182013433728LLU;
	volatile int8_t x111 = INT8_MAX;
	static int64_t x112 = 81551858390838LL;
	volatile int64_t t27 = -427960LL;

	t27 = (((x109<x110)^x111)/x112);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MAX;
	int16_t x115 = -1;
	volatile uint8_t x116 = UINT8_MAX;

	t28 = (((x113<x114)^x115)/x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MAX;
	uint64_t x118 = 400386947LLU;
	uint8_t x119 = 22U;
	volatile int32_t t29 = 115;

	t29 = (((x117<x118)^x119)/x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x121 = UINT16_MAX;
	static uint16_t x122 = 8U;
	volatile int16_t x123 = -170;
	uint64_t x124 = 1016590858139731996LLU;

	t30 = (((x121<x122)^x123)/x124);

	if (t30 != 18LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x125 = 5U;
	volatile int16_t x126 = -1;
	int16_t x127 = INT16_MAX;
	volatile int32_t t31 = -1;

	t31 = (((x125<x126)^x127)/x128);

	if (t31 != -32766) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = INT16_MIN;
	int32_t x131 = -25654;
	static uint32_t x132 = UINT32_MAX;
	volatile uint32_t t32 = 80904U;

	t32 = (((x129<x130)^x131)/x132);

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MIN;
	uint32_t x134 = 68142401U;
	uint64_t x135 = UINT64_MAX;
	uint8_t x136 = UINT8_MAX;
	uint64_t t33 = 273397019414LLU;

	t33 = (((x133<x134)^x135)/x136);

	if (t33 != 72340172838076673LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x137 = 49208199LL;
	int32_t x139 = INT32_MIN;
	static volatile uint16_t x140 = 16599U;
	int32_t t34 = 3853514;

	t34 = (((x137<x138)^x139)/x140);

	if (t34 != -129374) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x146 = -431939;
	int64_t t35 = 857316956LL;

	t35 = (((x145<x146)^x147)/x148);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x150 = -2214382519402548LL;
	volatile uint32_t x151 = UINT32_MAX;
	static volatile uint32_t t36 = 2045768U;

	t36 = (((x149<x150)^x151)/x152);

	if (t36 != 131076U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x155 = INT8_MAX;
	static volatile int8_t x156 = 8;
	static int32_t t37 = 1;

	t37 = (((x153<x154)^x155)/x156);

	if (t37 != 15) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x157 = UINT32_MAX;
	uint64_t x158 = 210613325828LLU;
	volatile int64_t x159 = -4455372847005LL;
	int8_t x160 = 1;
	static int64_t t38 = -219806342079555178LL;

	t38 = (((x157<x158)^x159)/x160);

	if (t38 != -4455372847006LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x162 = INT8_MIN;
	int32_t x163 = INT32_MIN;
	int64_t x164 = 71686717035LL;

	t39 = (((x161<x162)^x163)/x164);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x165 = UINT16_MAX;
	static volatile int32_t x166 = 28737;
	uint64_t x168 = 128517653523872LLU;
	volatile uint64_t t40 = 29699256037677LLU;

	t40 = (((x165<x166)^x167)/x168);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x169 = 32;
	int8_t x170 = -1;
	int8_t x171 = 3;
	uint64_t t41 = 32759102686055LLU;

	t41 = (((x169<x170)^x171)/x172);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x173 = 3600936386LLU;
	static volatile uint16_t x174 = UINT16_MAX;
	volatile int8_t x176 = INT8_MIN;
	volatile int64_t t42 = 6590115473829LL;

	t42 = (((x173<x174)^x175)/x176);

	if (t42 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x177 = UINT64_MAX;
	int64_t x178 = INT64_MIN;
	int16_t x179 = -2638;
	int64_t x180 = INT64_MIN;
	volatile int64_t t43 = 91999167LL;

	t43 = (((x177<x178)^x179)/x180);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x183 = 96;
	uint16_t x184 = 3U;

	t44 = (((x181<x182)^x183)/x184);

	if (t44 != 32) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x185 = INT8_MAX;
	int64_t x186 = INT64_MIN;
	int32_t x187 = INT32_MIN;
	uint16_t x188 = 1249U;
	volatile int32_t t45 = -115119;

	t45 = (((x185<x186)^x187)/x188);

	if (t45 != -1719362) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x189 = INT16_MIN;
	int64_t x192 = INT64_MIN;
	volatile int64_t t46 = -172025928979LL;

	t46 = (((x189<x190)^x191)/x192);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x194 = 1781LLU;
	int64_t x195 = INT64_MIN;
	int64_t t47 = 247844565685282029LL;

	t47 = (((x193<x194)^x195)/x196);

	if (t47 != -3074457345618258602LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint16_t x197 = 1708U;
	int8_t x198 = INT8_MIN;
	volatile uint64_t x199 = 8122827207022506794LLU;
	static volatile uint64_t x200 = UINT64_MAX;
	volatile uint64_t t48 = 28891762557996LLU;

	t48 = (((x197<x198)^x199)/x200);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x202 = 601735658843LLU;
	int16_t x204 = INT16_MIN;
	volatile int32_t t49 = 42;

	t49 = (((x201<x202)^x203)/x204);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x205 = INT16_MIN;
	volatile int64_t x206 = INT64_MIN;
	static volatile int64_t x207 = INT64_MIN;
	int16_t x208 = INT16_MIN;
	int64_t t50 = -884087LL;

	t50 = (((x205<x206)^x207)/x208);

	if (t50 != 281474976710656LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x209 = 10066138298LLU;
	uint16_t x210 = 1U;
	static uint64_t x211 = 137619696LLU;
	static volatile uint16_t x212 = UINT16_MAX;
	volatile uint64_t t51 = 945259736425511LLU;

	t51 = (((x209<x210)^x211)/x212);

	if (t51 != 2099LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x214 = UINT16_MAX;
	int32_t x215 = 1;
	uint64_t x216 = 183212LLU;
	uint64_t t52 = 2645565LLU;

	t52 = (((x213<x214)^x215)/x216);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x217 = INT8_MIN;
	uint16_t x219 = 11644U;
	uint16_t x220 = UINT16_MAX;
	int32_t t53 = 138846751;

	t53 = (((x217<x218)^x219)/x220);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x221 = INT32_MIN;
	static volatile int64_t x222 = INT64_MAX;
	volatile int32_t x223 = 182940974;
	int8_t x224 = INT8_MIN;
	volatile int32_t t54 = 64697806;

	t54 = (((x221<x222)^x223)/x224);

	if (t54 != -1429226) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x225 = INT16_MIN;
	uint8_t x226 = 23U;
	static uint32_t x228 = UINT32_MAX;
	uint32_t t55 = 472184855U;

	t55 = (((x225<x226)^x227)/x228);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x230 = -1;
	int32_t x231 = -1;
	volatile int8_t x232 = INT8_MIN;
	static volatile int32_t t56 = 757912;

	t56 = (((x229<x230)^x231)/x232);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x233 = INT16_MIN;
	uint32_t x234 = 46498189U;
	int64_t x235 = INT64_MIN;
	uint64_t x236 = 53110120350LLU;
	volatile uint64_t t57 = 1512LLU;

	t57 = (((x233<x234)^x235)/x236);

	if (t57 != 173665056LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x237 = INT32_MIN;
	int32_t x238 = INT32_MIN;
	static int8_t x239 = 1;
	uint16_t x240 = 17881U;
	int32_t t58 = 19266517;

	t58 = (((x237<x238)^x239)/x240);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint64_t x241 = UINT64_MAX;
	int64_t x243 = -1LL;
	uint64_t x244 = UINT64_MAX;
	volatile uint64_t t59 = 26366384LLU;

	t59 = (((x241<x242)^x243)/x244);

	if (t59 != 1LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x245 = 509;
	int32_t x246 = -1;
	int8_t x247 = -1;
	volatile int32_t x248 = INT32_MIN;

	t60 = (((x245<x246)^x247)/x248);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x249 = 14994449;
	uint8_t x250 = 2U;
	static int64_t x252 = INT64_MIN;
	volatile int64_t t61 = -6907LL;

	t61 = (((x249<x250)^x251)/x252);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x253 = 93U;
	uint16_t x254 = 3136U;
	int32_t x255 = -1;
	int32_t x256 = 184576;
	int32_t t62 = 50;

	t62 = (((x253<x254)^x255)/x256);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x258 = INT16_MIN;
	int16_t x259 = -1;
	int32_t x260 = 13159358;
	volatile int32_t t63 = -60000772;

	t63 = (((x257<x258)^x259)/x260);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x262 = INT32_MAX;
	volatile int64_t x263 = INT64_MAX;
	static uint16_t x264 = UINT16_MAX;
	int64_t t64 = 0LL;

	t64 = (((x261<x262)^x263)/x264);

	if (t64 != 140739635871744LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x265 = -6;
	int16_t x266 = INT16_MAX;
	volatile int16_t x267 = INT16_MIN;
	volatile int32_t t65 = 213637;

	t65 = (((x265<x266)^x267)/x268);

	if (t65 != -258) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x269 = -31;
	static int32_t x270 = -3;
	int8_t x271 = -1;
	int8_t x272 = -1;
	volatile int32_t t66 = -1422;

	t66 = (((x269<x270)^x271)/x272);

	if (t66 != 2) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x273 = UINT64_MAX;
	volatile int8_t x275 = 3;
	static int64_t x276 = -1LL;
	int64_t t67 = 158496805767692LL;

	t67 = (((x273<x274)^x275)/x276);

	if (t67 != -3LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x277 = 8980LL;
	int64_t x278 = -1LL;
	uint16_t x279 = 2U;
	volatile int32_t t68 = -1863;

	t68 = (((x277<x278)^x279)/x280);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x281 = 21U;
	int32_t x282 = -421164;
	int8_t x283 = -3;
	volatile int32_t t69 = 794;

	t69 = (((x281<x282)^x283)/x284);

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x286 = INT16_MIN;
	uint64_t t70 = 1441101796805421LLU;

	t70 = (((x285<x286)^x287)/x288);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x289 = INT32_MIN;
	static int16_t x290 = 2;
	uint8_t x291 = UINT8_MAX;
	volatile int32_t t71 = 53382;

	t71 = (((x289<x290)^x291)/x292);

	if (t71 != 7) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x293 = UINT32_MAX;
	uint32_t x294 = 1987411U;
	int16_t x295 = INT16_MIN;
	int16_t x296 = 2;
	volatile int32_t t72 = -225;

	t72 = (((x293<x294)^x295)/x296);

	if (t72 != -16384) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int16_t x297 = -90;
	volatile uint8_t x298 = 2U;
	int32_t x299 = -15092;
	int16_t x300 = -1;
	int32_t t73 = 4085;

	t73 = (((x297<x298)^x299)/x300);

	if (t73 != 15091) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x301 = 1;
	int8_t x302 = INT8_MAX;
	uint32_t t74 = 27501915U;

	t74 = (((x301<x302)^x303)/x304);

	if (t74 != 104U) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x307 = UINT16_MAX;
	int32_t x308 = -1;
	static volatile int32_t t75 = -48;

	t75 = (((x305<x306)^x307)/x308);

	if (t75 != -65535) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x309 = 14330642989238LLU;
	int8_t x310 = -1;
	uint64_t x312 = UINT64_MAX;
	static volatile uint64_t t76 = 499870411LLU;

	t76 = (((x309<x310)^x311)/x312);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x313 = -1;
	static int64_t x314 = -1LL;
	static uint64_t x315 = 752709085252622LLU;

	t77 = (((x313<x314)^x315)/x316);

	if (t77 != 3550514553078LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x317 = INT64_MIN;
	int64_t x318 = INT64_MIN;
	volatile int64_t x319 = INT64_MAX;
	volatile int8_t x320 = INT8_MAX;
	static volatile int64_t t78 = -1LL;

	t78 = (((x317<x318)^x319)/x320);

	if (t78 != 72624976668147841LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x321 = INT8_MIN;
	int64_t x322 = 3LL;
	int64_t x323 = -1LL;
	static int32_t x324 = -15;
	int64_t t79 = 26623098133690LL;

	t79 = (((x321<x322)^x323)/x324);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x325 = 1693674529912LLU;
	int16_t x326 = -1;
	int16_t x327 = -194;
	volatile uint32_t x328 = 12699877U;
	volatile uint32_t t80 = 224168950U;

	t80 = (((x325<x326)^x327)/x328);

	if (t80 != 338U) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x329 = UINT8_MAX;
	int8_t x330 = INT8_MAX;
	static uint16_t x332 = 96U;
	volatile int32_t t81 = 466;

	t81 = (((x329<x330)^x331)/x332);

	if (t81 != 22369621) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x333 = 4206084526459630167LL;
	uint16_t x334 = 480U;
	int8_t x335 = INT8_MAX;
	static volatile int32_t t82 = 950;

	t82 = (((x333<x334)^x335)/x336);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x337 = INT8_MIN;
	volatile int8_t x338 = -1;
	int16_t x339 = -1;

	t83 = (((x337<x338)^x339)/x340);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x341 = INT16_MIN;
	static int8_t x342 = INT8_MAX;
	static volatile int32_t x343 = 25922480;
	int64_t x344 = INT64_MAX;
	volatile int64_t t84 = 13795949499037LL;

	t84 = (((x341<x342)^x343)/x344);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x345 = INT64_MIN;
	int32_t x346 = INT32_MAX;
	int32_t x347 = -353;
	int8_t x348 = INT8_MAX;
	int32_t t85 = 447009;

	t85 = (((x345<x346)^x347)/x348);

	if (t85 != -2) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x351 = -1LL;
	volatile int64_t x352 = INT64_MIN;
	volatile int64_t t86 = -62452178239LL;

	t86 = (((x349<x350)^x351)/x352);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x353 = INT8_MIN;
	int64_t x354 = INT64_MIN;
	int8_t x355 = INT8_MIN;
	volatile int8_t x356 = INT8_MAX;
	static int32_t t87 = 7898;

	t87 = (((x353<x354)^x355)/x356);

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x357 = INT64_MIN;
	int16_t x359 = INT16_MAX;
	int16_t x360 = -1;
	volatile int32_t t88 = -5;

	t88 = (((x357<x358)^x359)/x360);

	if (t88 != -32766) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x361 = INT64_MIN;
	int32_t x362 = INT32_MAX;
	static volatile int16_t x363 = 0;
	int32_t t89 = -13;

	t89 = (((x361<x362)^x363)/x364);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x365 = INT8_MAX;
	static volatile int32_t x366 = INT32_MAX;
	int32_t x367 = 915545;
	volatile int32_t x368 = 3968;
	int32_t t90 = 991066324;

	t90 = (((x365<x366)^x367)/x368);

	if (t90 != 230) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x369 = 0;
	int64_t x370 = INT64_MIN;
	volatile int8_t x371 = 41;
	int8_t x372 = -1;
	volatile int32_t t91 = -5;

	t91 = (((x369<x370)^x371)/x372);

	if (t91 != -41) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int64_t x373 = INT64_MIN;
	int16_t x374 = -1;
	int64_t x375 = 753856828537LL;
	volatile uint32_t x376 = 729U;
	volatile int64_t t92 = 523220LL;

	t92 = (((x373<x374)^x375)/x376);

	if (t92 != 1034097158LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x377 = UINT8_MAX;
	uint64_t x378 = UINT64_MAX;
	int8_t x380 = INT8_MIN;
	static int32_t t93 = 3494990;

	t93 = (((x377<x378)^x379)/x380);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x382 = INT32_MIN;
	static uint16_t x383 = 7U;
	static uint8_t x384 = 1U;
	int32_t t94 = -5238788;

	t94 = (((x381<x382)^x383)/x384);

	if (t94 != 7) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x385 = UINT32_MAX;
	uint16_t x386 = 50U;
	volatile uint16_t x388 = 6986U;
	int32_t t95 = -775005;

	t95 = (((x385<x386)^x387)/x388);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x389 = 0;
	static int16_t x391 = 1;
	volatile int64_t x392 = 7788119LL;
	int64_t t96 = -11729198488LL;

	t96 = (((x389<x390)^x391)/x392);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x393 = 95LL;
	int64_t x394 = -1LL;
	static int32_t x396 = 138990;
	volatile int32_t t97 = 53473;

	t97 = (((x393<x394)^x395)/x396);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x397 = -1LL;
	volatile int8_t x399 = INT8_MIN;
	volatile uint32_t t98 = 5U;

	t98 = (((x397<x398)^x399)/x400);

	if (t98 != 178874U) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x403 = UINT8_MAX;
	int8_t x404 = INT8_MAX;
	int32_t t99 = -5180585;

	t99 = (((x401<x402)^x403)/x404);

	if (t99 != 2) { NG(); } else { ; }
	
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


    return 0;
}

