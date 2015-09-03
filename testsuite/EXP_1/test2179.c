#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = INT32_MAX;
int32_t t0 = 31129903;
int32_t x12 = -1;
volatile uint16_t x14 = 1U;
int16_t x19 = 5;
static int32_t t4 = -3;
uint32_t x28 = UINT32_MAX;
static volatile int32_t x33 = -1;
static volatile int16_t x36 = INT16_MAX;
uint16_t x44 = 5013U;
static int32_t x46 = -375082608;
static int8_t x48 = -1;
static int32_t t11 = -12502;
volatile uint8_t x51 = UINT8_MAX;
volatile uint64_t x52 = 2668299LLU;
volatile int32_t t12 = 104650705;
volatile int8_t x58 = -1;
int64_t x60 = INT64_MAX;
uint64_t x65 = UINT64_MAX;
int16_t x69 = -19;
static int32_t t17 = -314;
int64_t x76 = INT64_MIN;
volatile int32_t x78 = 391;
static volatile int8_t x79 = 1;
static int32_t t19 = -168353451;
volatile int16_t x83 = -1;
static int8_t x95 = 0;
int16_t x98 = INT16_MIN;
uint16_t x99 = 13U;
static volatile int16_t x100 = -1;
static int32_t t24 = -1422;
static volatile int8_t x102 = INT8_MIN;
uint8_t x105 = 33U;
uint64_t x109 = UINT64_MAX;
int32_t t27 = 197567;
int8_t x115 = 8;
static volatile int8_t x116 = 2;
int32_t x117 = INT32_MAX;
static int64_t x122 = INT64_MIN;
static int32_t x128 = INT32_MIN;
int64_t x130 = INT64_MIN;
volatile int16_t x132 = 166;
static volatile int32_t t32 = 89316;
uint16_t x140 = 39U;
volatile int32_t t35 = -3;
volatile int16_t x145 = INT16_MIN;
int8_t x147 = -1;
uint8_t x153 = 22U;
int64_t x159 = 1330722LL;
volatile int64_t x161 = INT64_MIN;
int16_t x162 = INT16_MIN;
int64_t x163 = 14LL;
int32_t t41 = -29221;
volatile int32_t x169 = -1;
volatile int64_t x170 = -1LL;
uint8_t x173 = 2U;
uint8_t x176 = 42U;
int32_t x186 = -1;
uint32_t x189 = 1036518171U;
int32_t x190 = INT32_MAX;
static volatile int32_t x193 = INT32_MIN;
int16_t x194 = -1;
volatile uint16_t x196 = 7U;
volatile uint8_t x197 = UINT8_MAX;
int64_t x205 = INT64_MIN;
static volatile int16_t x207 = -4;
volatile int32_t x209 = INT32_MAX;
static uint16_t x210 = 116U;
int64_t x213 = 27107121211688215LL;
static int8_t x216 = 41;
uint16_t x225 = UINT16_MAX;
int32_t t58 = -4363007;
uint16_t x244 = 864U;
static int32_t t60 = -32570588;
volatile int8_t x247 = -1;
int16_t x248 = INT16_MAX;
static uint32_t x252 = 95092510U;
volatile int32_t t62 = 171493093;
int64_t x259 = INT64_MAX;
int64_t x260 = -1LL;
int64_t x270 = -111087494580386LL;
int32_t x272 = 100;
static int32_t x280 = INT32_MAX;
uint32_t x290 = 105U;
volatile int8_t x292 = -1;
int8_t x296 = INT8_MIN;
int32_t t74 = -330494;
int64_t x301 = -1LL;
static volatile int32_t t75 = 268;
uint32_t x311 = UINT32_MAX;
int8_t x317 = INT8_MIN;
static volatile int32_t x320 = INT32_MAX;
int64_t x327 = INT64_MIN;
int32_t x331 = 4;
static volatile int32_t t82 = -25;
int32_t t85 = -41186;
volatile int8_t x345 = INT8_MAX;
int32_t x351 = 7;
volatile uint8_t x355 = 50U;
uint64_t x364 = UINT64_MAX;
int32_t x365 = -1;
volatile int16_t x368 = -1;
int8_t x370 = INT8_MAX;
uint64_t x373 = 193646122158LLU;
int8_t x374 = 31;
int32_t x379 = -1;
volatile int64_t x380 = INT64_MAX;
static uint32_t x382 = 2197174U;
volatile int64_t x385 = -67638700059422653LL;
volatile int8_t x389 = INT8_MIN;
uint32_t x392 = UINT32_MAX;
uint8_t x394 = UINT8_MAX;
volatile uint32_t x396 = UINT32_MAX;
int8_t x400 = 21;


void f0(void) {
	int8_t x1 = -14;
	uint64_t x2 = 102578757167LLU;
	uint8_t x4 = 9U;

	t0 = (((x1^x2)|x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = -2900688;
	static int8_t x6 = -3;
	int8_t x7 = INT8_MAX;
	static uint8_t x8 = UINT8_MAX;
	volatile int32_t t1 = -4;

	t1 = (((x5^x6)|x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MAX;
	int16_t x10 = INT16_MIN;
	int32_t x11 = 9941;
	static int32_t t2 = -2;

	t2 = (((x9^x10)|x11)==x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = 14294;
	static int16_t x15 = INT16_MIN;
	static uint64_t x16 = 330502907651110347LLU;
	volatile int32_t t3 = -1606399;

	t3 = (((x13^x14)|x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x17 = 3U;
	volatile int8_t x18 = -24;
	int16_t x20 = -1;

	t4 = (((x17^x18)|x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -2;
	int64_t x22 = INT64_MAX;
	volatile int32_t x23 = INT32_MIN;
	uint64_t x24 = 21LLU;
	int32_t t5 = -3114445;

	t5 = (((x21^x22)|x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -3797;
	int8_t x26 = INT8_MIN;
	int32_t x27 = INT32_MIN;
	int32_t t6 = 172136;

	t6 = (((x25^x26)|x27)==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -1400917073058783LL;
	int8_t x30 = INT8_MAX;
	uint32_t x31 = 683900U;
	int64_t x32 = INT64_MAX;
	int32_t t7 = 22353;

	t7 = (((x29^x30)|x31)==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x34 = UINT8_MAX;
	uint32_t x35 = 29U;
	volatile int32_t t8 = -99;

	t8 = (((x33^x34)|x35)==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	int32_t x38 = -1;
	static volatile int64_t x39 = -1LL;
	static int64_t x40 = INT64_MAX;
	static volatile int32_t t9 = -8;

	t9 = (((x37^x38)|x39)==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -1;
	int16_t x42 = 4;
	static volatile int64_t x43 = -1636LL;
	volatile int32_t t10 = -131199;

	t10 = (((x41^x42)|x43)==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x45 = INT16_MAX;
	uint16_t x47 = 1U;

	t11 = (((x45^x46)|x47)==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x49 = -1LL;
	int16_t x50 = INT16_MIN;

	t12 = (((x49^x50)|x51)==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	int64_t x54 = -1LL;
	volatile int32_t x55 = -1;
	int64_t x56 = -3996753889870LL;
	int32_t t13 = 164821435;

	t13 = (((x53^x54)|x55)==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = UINT8_MAX;
	volatile int8_t x59 = INT8_MIN;
	static int32_t t14 = -77558074;

	t14 = (((x57^x58)|x59)==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int8_t x61 = INT8_MIN;
	int8_t x62 = -1;
	uint16_t x63 = 95U;
	volatile int32_t x64 = 94172583;
	int32_t t15 = 450;

	t15 = (((x61^x62)|x63)==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x66 = 0U;
	static uint8_t x67 = 106U;
	volatile int16_t x68 = -1;
	static volatile int32_t t16 = 6;

	t16 = (((x65^x66)|x67)==x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x70 = -1;
	volatile int8_t x71 = INT8_MIN;
	int8_t x72 = 1;

	t17 = (((x69^x70)|x71)==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MAX;
	int8_t x74 = -1;
	int16_t x75 = -1;
	int32_t t18 = -295100;

	t18 = (((x73^x74)|x75)==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x77 = 441U;
	volatile int32_t x80 = INT32_MAX;

	t19 = (((x77^x78)|x79)==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x81 = 391;
	int16_t x82 = INT16_MIN;
	uint8_t x84 = 68U;
	volatile int32_t t20 = 2;

	t20 = (((x81^x82)|x83)==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = -1;
	volatile int32_t x86 = INT32_MIN;
	static int8_t x87 = 56;
	static int64_t x88 = -1LL;
	volatile int32_t t21 = -15775202;

	t21 = (((x85^x86)|x87)==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = UINT16_MAX;
	static int32_t x90 = INT32_MIN;
	int64_t x91 = 187253427327505415LL;
	int8_t x92 = -1;
	int32_t t22 = -1;

	t22 = (((x89^x90)|x91)==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint16_t x93 = 18U;
	uint16_t x94 = 445U;
	uint64_t x96 = UINT64_MAX;
	volatile int32_t t23 = -17251989;

	t23 = (((x93^x94)|x95)==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MIN;

	t24 = (((x97^x98)|x99)==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = 3675309510475LLU;
	volatile uint64_t x103 = UINT64_MAX;
	int64_t x104 = INT64_MIN;
	volatile int32_t t25 = 1889554;

	t25 = (((x101^x102)|x103)==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x106 = 4898U;
	volatile uint32_t x107 = 5345U;
	static int8_t x108 = INT8_MAX;
	volatile int32_t t26 = -6682;

	t26 = (((x105^x106)|x107)==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x110 = INT16_MAX;
	uint64_t x111 = 101077616984169396LLU;
	uint64_t x112 = 102807793237641324LLU;

	t27 = (((x109^x110)|x111)==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x113 = INT32_MIN;
	int64_t x114 = INT64_MAX;
	int32_t t28 = -223808;

	t28 = (((x113^x114)|x115)==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x118 = INT64_MIN;
	int8_t x119 = INT8_MIN;
	volatile int16_t x120 = INT16_MIN;
	volatile int32_t t29 = -192463;

	t29 = (((x117^x118)|x119)==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x121 = -15905294972LL;
	int8_t x123 = INT8_MIN;
	uint8_t x124 = 49U;
	static volatile int32_t t30 = 9770;

	t30 = (((x121^x122)|x123)==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x125 = INT32_MIN;
	static uint64_t x126 = 278119LLU;
	static uint64_t x127 = 144032484188893767LLU;
	int32_t t31 = 3658290;

	t31 = (((x125^x126)|x127)==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x129 = UINT64_MAX;
	uint16_t x131 = 0U;

	t32 = (((x129^x130)|x131)==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = -1;
	static int8_t x134 = -25;
	uint8_t x135 = UINT8_MAX;
	int16_t x136 = 0;
	int32_t t33 = -8209513;

	t33 = (((x133^x134)|x135)==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = 1975664207U;
	uint16_t x138 = 0U;
	int64_t x139 = INT64_MAX;
	int32_t t34 = -13;

	t34 = (((x137^x138)|x139)==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MIN;
	uint32_t x142 = 1155319569U;
	static int8_t x143 = 1;
	volatile int16_t x144 = -1;

	t35 = (((x141^x142)|x143)==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x146 = INT32_MAX;
	int32_t x148 = INT32_MIN;
	int32_t t36 = 23149412;

	t36 = (((x145^x146)|x147)==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x149 = 178436253;
	int16_t x150 = INT16_MIN;
	int8_t x151 = INT8_MAX;
	int16_t x152 = INT16_MIN;
	int32_t t37 = -677719;

	t37 = (((x149^x150)|x151)==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x154 = 11;
	int16_t x155 = INT16_MIN;
	int32_t x156 = -1;
	static int32_t t38 = -421862887;

	t38 = (((x153^x154)|x155)==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = UINT8_MAX;
	int64_t x158 = INT64_MIN;
	uint32_t x160 = UINT32_MAX;
	int32_t t39 = -471;

	t39 = (((x157^x158)|x159)==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x164 = 977829975059LLU;
	int32_t t40 = 0;

	t40 = (((x161^x162)|x163)==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = -229103LL;
	int32_t x166 = INT32_MAX;
	uint8_t x167 = 3U;
	volatile int64_t x168 = INT64_MAX;

	t41 = (((x165^x166)|x167)==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x171 = 60;
	static int64_t x172 = INT64_MIN;
	volatile int32_t t42 = -1;

	t42 = (((x169^x170)|x171)==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint64_t x174 = 419639730LLU;
	uint64_t x175 = 21314LLU;
	volatile int32_t t43 = 76;

	t43 = (((x173^x174)|x175)==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = -3392151;
	volatile int8_t x178 = -1;
	int32_t x179 = INT32_MIN;
	int32_t x180 = -1;
	int32_t t44 = 2694;

	t44 = (((x177^x178)|x179)==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x181 = 25449;
	int64_t x182 = -10150433052918LL;
	int32_t x183 = -1;
	int16_t x184 = -902;
	volatile int32_t t45 = 264266;

	t45 = (((x181^x182)|x183)==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x185 = 3U;
	int16_t x187 = -1;
	static int32_t x188 = -978397502;
	int32_t t46 = -88690;

	t46 = (((x185^x186)|x187)==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x191 = 1192U;
	int32_t x192 = 953779298;
	int32_t t47 = -744533695;

	t47 = (((x189^x190)|x191)==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x195 = 14U;
	volatile int32_t t48 = -129283;

	t48 = (((x193^x194)|x195)==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x198 = -1;
	int64_t x199 = 1638493LL;
	volatile int32_t x200 = INT32_MIN;
	volatile int32_t t49 = 7678535;

	t49 = (((x197^x198)|x199)==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int32_t x201 = INT32_MAX;
	int8_t x202 = -1;
	int8_t x203 = 18;
	int64_t x204 = -1LL;
	int32_t t50 = 8583073;

	t50 = (((x201^x202)|x203)==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x206 = 2630347LL;
	volatile int32_t x208 = INT32_MIN;
	volatile int32_t t51 = -30181802;

	t51 = (((x205^x206)|x207)==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x211 = -4;
	int64_t x212 = 1LL;
	volatile int32_t t52 = -772797;

	t52 = (((x209^x210)|x211)==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x214 = -14977717;
	int32_t x215 = INT32_MAX;
	static int32_t t53 = 44864;

	t53 = (((x213^x214)|x215)==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x217 = 121U;
	static int32_t x218 = INT32_MIN;
	int64_t x219 = INT64_MIN;
	uint32_t x220 = 496904U;
	static int32_t t54 = 109;

	t54 = (((x217^x218)|x219)==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x221 = INT32_MIN;
	int8_t x222 = 24;
	volatile uint8_t x223 = 42U;
	uint16_t x224 = 2094U;
	static volatile int32_t t55 = 1356;

	t55 = (((x221^x222)|x223)==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x226 = 2;
	uint32_t x227 = 140006952U;
	uint64_t x228 = 1602266118066LLU;
	volatile int32_t t56 = 2848995;

	t56 = (((x225^x226)|x227)==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x229 = 13;
	int64_t x230 = INT64_MIN;
	int64_t x231 = INT64_MIN;
	int8_t x232 = 36;
	int32_t t57 = 31;

	t57 = (((x229^x230)|x231)==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x233 = 0U;
	int32_t x234 = -1;
	int32_t x235 = -1;
	volatile int16_t x236 = INT16_MAX;

	t58 = (((x233^x234)|x235)==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = INT32_MAX;
	uint64_t x238 = 2015451372777774729LLU;
	static int64_t x239 = INT64_MIN;
	volatile int16_t x240 = -3;
	volatile int32_t t59 = 481506135;

	t59 = (((x237^x238)|x239)==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = -1;
	int32_t x242 = -2;
	volatile int64_t x243 = INT64_MAX;

	t60 = (((x241^x242)|x243)==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = -16LL;
	int8_t x246 = INT8_MIN;
	volatile int32_t t61 = -1215585;

	t61 = (((x245^x246)|x247)==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x249 = 457724733078LL;
	uint8_t x250 = UINT8_MAX;
	uint16_t x251 = UINT16_MAX;

	t62 = (((x249^x250)|x251)==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = INT8_MAX;
	static int32_t x254 = -9;
	static int8_t x255 = 0;
	int8_t x256 = 1;
	static int32_t t63 = -137474492;

	t63 = (((x253^x254)|x255)==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x257 = INT64_MAX;
	int8_t x258 = INT8_MIN;
	static volatile int32_t t64 = 7099;

	t64 = (((x257^x258)|x259)==x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x261 = -16;
	volatile uint16_t x262 = UINT16_MAX;
	uint64_t x263 = 7632542459LLU;
	uint32_t x264 = 1U;
	volatile int32_t t65 = -273593;

	t65 = (((x261^x262)|x263)==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x265 = 2564268U;
	int32_t x266 = INT32_MIN;
	int32_t x267 = INT32_MAX;
	volatile int32_t x268 = 1793;
	volatile int32_t t66 = 6582;

	t66 = (((x265^x266)|x267)==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = INT32_MIN;
	static uint32_t x271 = 21362U;
	volatile int32_t t67 = 0;

	t67 = (((x269^x270)|x271)==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x273 = UINT32_MAX;
	uint32_t x274 = UINT32_MAX;
	static int8_t x275 = -1;
	volatile uint16_t x276 = 1183U;
	static volatile int32_t t68 = -290;

	t68 = (((x273^x274)|x275)==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MIN;
	int8_t x278 = INT8_MAX;
	volatile int8_t x279 = INT8_MIN;
	volatile int32_t t69 = 1;

	t69 = (((x277^x278)|x279)==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x281 = 458794132U;
	uint64_t x282 = 130010402035LLU;
	int32_t x283 = INT32_MIN;
	uint8_t x284 = 28U;
	int32_t t70 = -517401;

	t70 = (((x281^x282)|x283)==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x285 = 7152488LLU;
	volatile int32_t x286 = INT32_MAX;
	int64_t x287 = -2182300853065741499LL;
	static volatile int32_t x288 = 30849;
	int32_t t71 = -1828324;

	t71 = (((x285^x286)|x287)==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x289 = -7878;
	volatile uint64_t x291 = 101658067LLU;
	volatile int32_t t72 = 80672446;

	t72 = (((x289^x290)|x291)==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = 671960LL;
	volatile int64_t x294 = INT64_MIN;
	volatile int64_t x295 = INT64_MAX;
	volatile int32_t t73 = 502;

	t73 = (((x293^x294)|x295)==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x297 = INT16_MIN;
	int16_t x298 = -1;
	static volatile int32_t x299 = -1;
	int32_t x300 = INT32_MAX;

	t74 = (((x297^x298)|x299)==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x302 = -1;
	static volatile uint8_t x303 = UINT8_MAX;
	int32_t x304 = INT32_MIN;

	t75 = (((x301^x302)|x303)==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MIN;
	int32_t x306 = INT32_MIN;
	uint32_t x307 = 19056U;
	volatile int32_t x308 = INT32_MIN;
	int32_t t76 = -89504;

	t76 = (((x305^x306)|x307)==x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = INT64_MAX;
	uint16_t x310 = 0U;
	uint16_t x312 = 5U;
	volatile int32_t t77 = -187;

	t77 = (((x309^x310)|x311)==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = UINT32_MAX;
	uint16_t x314 = UINT16_MAX;
	volatile int32_t x315 = -2264788;
	volatile int32_t x316 = -1;
	static volatile int32_t t78 = -12012379;

	t78 = (((x313^x314)|x315)==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x318 = INT8_MAX;
	int64_t x319 = INT64_MIN;
	int32_t t79 = 0;

	t79 = (((x317^x318)|x319)==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x321 = -1;
	static volatile int32_t x322 = INT32_MIN;
	static int64_t x323 = -1LL;
	uint64_t x324 = UINT64_MAX;
	static int32_t t80 = -801;

	t80 = (((x321^x322)|x323)==x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x325 = UINT16_MAX;
	volatile int64_t x326 = 21LL;
	int16_t x328 = -1;
	int32_t t81 = -932497054;

	t81 = (((x325^x326)|x327)==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = INT32_MIN;
	int8_t x330 = 38;
	static uint8_t x332 = 7U;

	t82 = (((x329^x330)|x331)==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = -50641699LL;
	int32_t x334 = 7;
	int32_t x335 = -1;
	volatile int8_t x336 = -1;
	int32_t t83 = 123680859;

	t83 = (((x333^x334)|x335)==x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x337 = INT32_MIN;
	static int16_t x338 = INT16_MIN;
	int16_t x339 = -1;
	int32_t x340 = -174;
	int32_t t84 = -165158470;

	t84 = (((x337^x338)|x339)==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = -1;
	static uint64_t x342 = UINT64_MAX;
	int64_t x343 = 30673LL;
	static int32_t x344 = INT32_MIN;

	t85 = (((x341^x342)|x343)==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x346 = INT16_MIN;
	uint64_t x347 = 2LLU;
	int8_t x348 = 0;
	int32_t t86 = -318275;

	t86 = (((x345^x346)|x347)==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = INT16_MIN;
	int8_t x350 = -9;
	static int64_t x352 = -34036841477784125LL;
	volatile int32_t t87 = 3921;

	t87 = (((x349^x350)|x351)==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x353 = -1LL;
	uint16_t x354 = UINT16_MAX;
	uint16_t x356 = 1U;
	volatile int32_t t88 = -24400529;

	t88 = (((x353^x354)|x355)==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MAX;
	static volatile uint64_t x358 = 43717944803LLU;
	int32_t x359 = INT32_MIN;
	volatile int16_t x360 = 5376;
	volatile int32_t t89 = 70681385;

	t89 = (((x357^x358)|x359)==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x361 = 622U;
	volatile int32_t x362 = -724159;
	static volatile int8_t x363 = -1;
	int32_t t90 = -2530446;

	t90 = (((x361^x362)|x363)==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x366 = -1235;
	uint8_t x367 = 35U;
	volatile int32_t t91 = 1;

	t91 = (((x365^x366)|x367)==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x369 = UINT8_MAX;
	static uint16_t x371 = 1U;
	volatile uint8_t x372 = 62U;
	int32_t t92 = 2316;

	t92 = (((x369^x370)|x371)==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x375 = INT8_MIN;
	volatile uint32_t x376 = 55454534U;
	int32_t t93 = -155;

	t93 = (((x373^x374)|x375)==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x377 = 5U;
	uint64_t x378 = UINT64_MAX;
	static volatile int32_t t94 = 68;

	t94 = (((x377^x378)|x379)==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = -1;
	int64_t x383 = 993LL;
	volatile int16_t x384 = -1;
	static volatile int32_t t95 = 3838629;

	t95 = (((x381^x382)|x383)==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x386 = INT64_MIN;
	static uint32_t x387 = 6158787U;
	static int32_t x388 = -1;
	static int32_t t96 = 0;

	t96 = (((x385^x386)|x387)==x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x390 = UINT64_MAX;
	int16_t x391 = -13;
	int32_t t97 = -1;

	t97 = (((x389^x390)|x391)==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x393 = 19380739950225LLU;
	uint8_t x395 = 1U;
	volatile int32_t t98 = -3403;

	t98 = (((x393^x394)|x395)==x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = INT16_MIN;
	int16_t x398 = INT16_MIN;
	int32_t x399 = -2663;
	volatile int32_t t99 = -107;

	t99 = (((x397^x398)|x399)==x400);

	if (t99 != 0) { NG(); } else { ; }
	
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

