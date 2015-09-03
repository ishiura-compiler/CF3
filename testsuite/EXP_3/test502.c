#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = INT64_MIN;
int32_t x6 = INT32_MIN;
uint32_t x11 = 38076543U;
int32_t t2 = 21350;
uint64_t x34 = 152994133592563LLU;
static int16_t x51 = INT16_MIN;
uint64_t x60 = UINT64_MAX;
uint32_t x65 = UINT32_MAX;
static int32_t x67 = 277;
int16_t x90 = -2;
volatile int64_t x91 = -22348LL;
static int64_t x93 = -1946953575716072776LL;
uint64_t x94 = 221888952782LLU;
int64_t x106 = -1LL;
int8_t x109 = 6;
int64_t x112 = -1LL;
volatile uint8_t x120 = 1U;
int64_t x137 = -1LL;
volatile int32_t t27 = 999787;
uint64_t x152 = 782427LLU;
volatile int32_t t28 = 173645;
volatile int64_t x162 = 7LL;
volatile uint16_t x168 = 11920U;
int32_t t31 = 14262154;
volatile uint16_t x170 = 232U;
static volatile int64_t x182 = -1LL;
volatile uint8_t x183 = 1U;
uint32_t x184 = 5U;
int64_t x186 = INT64_MIN;
volatile int8_t x187 = -14;
uint8_t x190 = 84U;
uint16_t x191 = UINT16_MAX;
int8_t x194 = -1;
static int8_t x199 = -1;
static int32_t t39 = 517752650;
int32_t x224 = INT32_MIN;
static int8_t x227 = 0;
static uint8_t x238 = UINT8_MAX;
int32_t x241 = INT32_MAX;
int64_t x242 = INT64_MAX;
volatile uint64_t x247 = 60862753LLU;
int16_t x248 = INT16_MAX;
int64_t x249 = -1LL;
volatile int32_t t48 = -9453516;
static int32_t x261 = -11;
static volatile int32_t t50 = -2185692;
uint32_t x275 = 46983010U;
volatile int32_t t51 = 20;
int16_t x289 = 18;
int8_t x296 = -1;
int8_t x299 = INT8_MIN;
int8_t x303 = -2;
volatile int32_t t55 = -806392;
volatile int64_t x305 = 13LL;
static int8_t x311 = INT8_MIN;
int32_t x312 = -1;
uint16_t x317 = UINT16_MAX;
uint32_t x319 = UINT32_MAX;
static uint16_t x336 = 671U;
int64_t x350 = INT64_MAX;
volatile int32_t t68 = -830;
static uint64_t x361 = 9553057495903LLU;
volatile uint64_t x362 = UINT64_MAX;
static int64_t x366 = INT64_MIN;
uint8_t x378 = 1U;
int32_t x385 = -22369;
int64_t x391 = -1LL;
int32_t t75 = 2572520;
volatile int32_t t76 = 20030263;
static uint16_t x403 = 992U;
int16_t x409 = INT16_MIN;
int64_t x413 = INT64_MIN;
uint8_t x414 = UINT8_MAX;
volatile int32_t t81 = 1178218;
static int32_t t83 = 80;
uint16_t x436 = 858U;
volatile uint8_t x447 = 0U;
volatile int32_t t85 = -3;
uint64_t x458 = 254604137771917517LLU;
int16_t x459 = -3;
int32_t x466 = -117;
int16_t x468 = INT16_MIN;
int32_t t88 = -12;
volatile uint64_t x471 = 15LLU;
int64_t x476 = -1LL;
volatile int32_t t92 = 0;
int32_t x489 = INT32_MAX;
uint64_t x491 = UINT64_MAX;
volatile int16_t x500 = -7364;
int32_t t95 = 32261;
int32_t t96 = 4523308;
int64_t x505 = INT64_MAX;
int16_t x507 = 0;
static int64_t x513 = INT64_MAX;
static volatile int16_t x515 = -1;
static volatile int16_t x516 = -1;


void f0(void) {
	static int16_t x2 = INT16_MAX;
	static uint32_t x3 = 1976U;
	static int16_t x4 = INT16_MIN;
	int32_t t0 = -1518;

	t0 = ((x1^x2)==(x3*x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 192;
	static int16_t x7 = 0;
	int64_t x8 = INT64_MIN;
	volatile int32_t t1 = -176;

	t1 = ((x5^x6)==(x7*x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 23U;
	volatile uint16_t x10 = 9465U;
	static int8_t x12 = -1;

	t2 = ((x9^x10)==(x11*x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int8_t x17 = -2;
	volatile uint8_t x18 = 30U;
	int16_t x19 = INT16_MIN;
	uint32_t x20 = 13U;
	static int32_t t3 = -165472857;

	t3 = ((x17^x18)==(x19*x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x21 = -1;
	static uint8_t x22 = 0U;
	int16_t x23 = INT16_MIN;
	static int32_t x24 = -1;
	int32_t t4 = 1;

	t4 = ((x21^x22)==(x23*x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x25 = 3257U;
	static uint8_t x26 = 1U;
	int16_t x27 = 7394;
	volatile int32_t x28 = -3;
	int32_t t5 = 13776501;

	t5 = ((x25^x26)==(x27*x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x29 = 2LLU;
	static volatile int8_t x30 = INT8_MIN;
	int8_t x31 = INT8_MIN;
	int16_t x32 = -1;
	static int32_t t6 = -435925;

	t6 = ((x29^x30)==(x31*x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = INT8_MAX;
	uint32_t x35 = 1994102U;
	uint32_t x36 = 74U;
	int32_t t7 = -1458830;

	t7 = ((x33^x34)==(x35*x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x45 = INT64_MIN;
	volatile int64_t x46 = -1LL;
	volatile uint16_t x47 = UINT16_MAX;
	static int16_t x48 = -1;
	volatile int32_t t8 = -596933;

	t8 = ((x45^x46)==(x47*x48));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x49 = 5656U;
	static int8_t x50 = INT8_MAX;
	int8_t x52 = 0;
	volatile int32_t t9 = -454413;

	t9 = ((x49^x50)==(x51*x52));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x53 = 1071U;
	int8_t x54 = INT8_MAX;
	uint32_t x55 = 444776U;
	uint8_t x56 = 103U;
	int32_t t10 = -927523574;

	t10 = ((x53^x54)==(x55*x56));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x57 = 171989386027262229LL;
	int8_t x58 = INT8_MIN;
	int16_t x59 = INT16_MAX;
	int32_t t11 = 10142;

	t11 = ((x57^x58)==(x59*x60));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x61 = -1;
	int8_t x62 = INT8_MAX;
	int16_t x63 = INT16_MIN;
	volatile int16_t x64 = -1;
	int32_t t12 = 40373;

	t12 = ((x61^x62)==(x63*x64));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x66 = INT64_MAX;
	int64_t x68 = -1LL;
	static int32_t t13 = -1997;

	t13 = ((x65^x66)==(x67*x68));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x77 = 211958U;
	volatile int64_t x78 = -1LL;
	uint32_t x79 = 6655366U;
	int32_t x80 = -392787421;
	volatile int32_t t14 = 57729;

	t14 = ((x77^x78)==(x79*x80));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x85 = INT8_MIN;
	volatile int16_t x86 = -251;
	volatile int32_t x87 = -1;
	int16_t x88 = -1;
	int32_t t15 = -15298;

	t15 = ((x85^x86)==(x87*x88));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x89 = INT8_MAX;
	uint8_t x92 = 122U;
	int32_t t16 = 289;

	t16 = ((x89^x90)==(x91*x92));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x95 = 629U;
	int32_t x96 = 2961436;
	int32_t t17 = -106;

	t17 = ((x93^x94)==(x95*x96));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x97 = UINT16_MAX;
	volatile int8_t x98 = INT8_MAX;
	uint8_t x99 = UINT8_MAX;
	int8_t x100 = 32;
	int32_t t18 = 34698;

	t18 = ((x97^x98)==(x99*x100));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x105 = INT16_MAX;
	volatile int64_t x107 = -123LL;
	uint32_t x108 = 2513U;
	int32_t t19 = -40645424;

	t19 = ((x105^x106)==(x107*x108));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint16_t x110 = 1U;
	int32_t x111 = -1;
	int32_t t20 = -21250887;

	t20 = ((x109^x110)==(x111*x112));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x113 = INT32_MIN;
	static int16_t x114 = INT16_MIN;
	volatile int16_t x115 = 97;
	int16_t x116 = INT16_MAX;
	volatile int32_t t21 = -2;

	t21 = ((x113^x114)==(x115*x116));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x117 = 0U;
	int32_t x118 = INT32_MIN;
	uint32_t x119 = 113107U;
	volatile int32_t t22 = -6386;

	t22 = ((x117^x118)==(x119*x120));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x121 = 98U;
	int8_t x122 = INT8_MAX;
	uint8_t x123 = 10U;
	uint64_t x124 = UINT64_MAX;
	int32_t t23 = -14902;

	t23 = ((x121^x122)==(x123*x124));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x125 = UINT64_MAX;
	int64_t x126 = 30759LL;
	int64_t x127 = -1LL;
	int16_t x128 = -1;
	volatile int32_t t24 = -32;

	t24 = ((x125^x126)==(x127*x128));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x129 = UINT16_MAX;
	static int8_t x130 = INT8_MIN;
	static int8_t x131 = -1;
	uint8_t x132 = UINT8_MAX;
	int32_t t25 = -1983915;

	t25 = ((x129^x130)==(x131*x132));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x138 = 117702516;
	static uint32_t x139 = 66498782U;
	int16_t x140 = INT16_MIN;
	volatile int32_t t26 = -511;

	t26 = ((x137^x138)==(x139*x140));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x145 = 169;
	volatile int32_t x146 = INT32_MIN;
	static int8_t x147 = INT8_MAX;
	volatile uint8_t x148 = 4U;

	t27 = ((x145^x146)==(x147*x148));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x149 = INT64_MIN;
	volatile uint64_t x150 = 16LLU;
	uint64_t x151 = UINT64_MAX;

	t28 = ((x149^x150)==(x151*x152));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x153 = -1;
	volatile int32_t x154 = -1;
	int16_t x155 = 3967;
	static volatile int32_t x156 = 0;
	static int32_t t29 = 428377394;

	t29 = ((x153^x154)==(x155*x156));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x161 = INT32_MIN;
	uint64_t x163 = 1993932LLU;
	static int64_t x164 = INT64_MIN;
	volatile int32_t t30 = -136;

	t30 = ((x161^x162)==(x163*x164));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x165 = INT8_MIN;
	int8_t x166 = INT8_MAX;
	volatile uint64_t x167 = UINT64_MAX;

	t31 = ((x165^x166)==(x167*x168));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x169 = 1230;
	int32_t x171 = -1;
	uint8_t x172 = 1U;
	volatile int32_t t32 = 57;

	t32 = ((x169^x170)==(x171*x172));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x173 = 3U;
	static int64_t x174 = 283406921LL;
	uint64_t x175 = 533LLU;
	int16_t x176 = 14632;
	volatile int32_t t33 = 1;

	t33 = ((x173^x174)==(x175*x176));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x177 = -115072152720294LL;
	int64_t x178 = 1LL;
	int8_t x179 = INT8_MIN;
	uint16_t x180 = UINT16_MAX;
	volatile int32_t t34 = -33643318;

	t34 = ((x177^x178)==(x179*x180));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x181 = INT32_MIN;
	volatile int32_t t35 = -1965;

	t35 = ((x181^x182)==(x183*x184));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x185 = 4651;
	static int32_t x188 = 13287388;
	static volatile int32_t t36 = 92;

	t36 = ((x185^x186)==(x187*x188));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x189 = -2;
	uint8_t x192 = 29U;
	volatile int32_t t37 = 2846223;

	t37 = ((x189^x190)==(x191*x192));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x193 = 7321511179536820153LLU;
	int32_t x195 = INT32_MIN;
	volatile uint32_t x196 = UINT32_MAX;
	volatile int32_t t38 = 20537;

	t38 = ((x193^x194)==(x195*x196));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x197 = 25U;
	int16_t x198 = INT16_MIN;
	static uint32_t x200 = UINT32_MAX;

	t39 = ((x197^x198)==(x199*x200));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x217 = INT16_MIN;
	int8_t x218 = INT8_MIN;
	int8_t x219 = INT8_MIN;
	int64_t x220 = 610LL;
	volatile int32_t t40 = -86331;

	t40 = ((x217^x218)==(x219*x220));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x221 = INT64_MIN;
	uint32_t x222 = 5880U;
	uint32_t x223 = UINT32_MAX;
	volatile int32_t t41 = -4845;

	t41 = ((x221^x222)==(x223*x224));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x225 = 4U;
	volatile uint16_t x226 = UINT16_MAX;
	int64_t x228 = -1LL;
	int32_t t42 = -1;

	t42 = ((x225^x226)==(x227*x228));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x233 = 0U;
	int16_t x234 = -8;
	static int16_t x235 = -1;
	static int16_t x236 = 6702;
	volatile int32_t t43 = -18409;

	t43 = ((x233^x234)==(x235*x236));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x237 = 215433011;
	static int16_t x239 = INT16_MIN;
	uint32_t x240 = 19801750U;
	static int32_t t44 = 74358;

	t44 = ((x237^x238)==(x239*x240));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x243 = -159372119853642LL;
	int32_t x244 = 3676;
	int32_t t45 = 1;

	t45 = ((x241^x242)==(x243*x244));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x245 = UINT16_MAX;
	uint32_t x246 = UINT32_MAX;
	int32_t t46 = 2643;

	t46 = ((x245^x246)==(x247*x248));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x250 = -1;
	static int8_t x251 = -1;
	int16_t x252 = 1;
	static int32_t t47 = -185;

	t47 = ((x249^x250)==(x251*x252));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x257 = 5;
	static int64_t x258 = -1LL;
	int8_t x259 = INT8_MAX;
	static int16_t x260 = INT16_MIN;

	t48 = ((x257^x258)==(x259*x260));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int8_t x262 = INT8_MIN;
	uint64_t x263 = 83098914LLU;
	int64_t x264 = 272861919800LL;
	int32_t t49 = -908;

	t49 = ((x261^x262)==(x263*x264));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x265 = -1LL;
	int64_t x266 = INT64_MIN;
	static int64_t x267 = -1LL;
	int64_t x268 = INT64_MAX;

	t50 = ((x265^x266)==(x267*x268));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x273 = UINT32_MAX;
	static int64_t x274 = INT64_MAX;
	static int32_t x276 = 364754;

	t51 = ((x273^x274)==(x275*x276));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x290 = INT8_MIN;
	volatile uint32_t x291 = UINT32_MAX;
	int16_t x292 = 0;
	static int32_t t52 = 8731308;

	t52 = ((x289^x290)==(x291*x292));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x293 = INT16_MIN;
	int16_t x294 = -1;
	int64_t x295 = 1936660983LL;
	volatile int32_t t53 = 217906;

	t53 = ((x293^x294)==(x295*x296));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint8_t x297 = UINT8_MAX;
	volatile int16_t x298 = INT16_MIN;
	volatile uint16_t x300 = 13847U;
	int32_t t54 = 518;

	t54 = ((x297^x298)==(x299*x300));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x301 = INT64_MIN;
	int64_t x302 = INT64_MAX;
	static int64_t x304 = 0LL;

	t55 = ((x301^x302)==(x303*x304));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x306 = INT16_MIN;
	volatile int16_t x307 = INT16_MIN;
	static int8_t x308 = -1;
	int32_t t56 = 281192881;

	t56 = ((x305^x306)==(x307*x308));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x309 = INT16_MIN;
	static int8_t x310 = INT8_MIN;
	int32_t t57 = -89669079;

	t57 = ((x309^x310)==(x311*x312));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x313 = 1U;
	uint8_t x314 = 0U;
	volatile uint64_t x315 = 75LLU;
	int64_t x316 = INT64_MIN;
	int32_t t58 = 288078875;

	t58 = ((x313^x314)==(x315*x316));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x318 = -74;
	int32_t x320 = 317;
	volatile int32_t t59 = 55;

	t59 = ((x317^x318)==(x319*x320));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x321 = INT16_MAX;
	static int16_t x322 = INT16_MIN;
	volatile int32_t x323 = 9287831;
	volatile int8_t x324 = -1;
	static volatile int32_t t60 = 9;

	t60 = ((x321^x322)==(x323*x324));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x325 = -465871238303350LL;
	static uint64_t x326 = 53870497304929LLU;
	int16_t x327 = 157;
	int64_t x328 = -10999424236057LL;
	static int32_t t61 = -113890413;

	t61 = ((x325^x326)==(x327*x328));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x329 = 0U;
	int64_t x330 = 1467802294421590LL;
	uint16_t x331 = 30U;
	static uint64_t x332 = 72LLU;
	static int32_t t62 = 8246986;

	t62 = ((x329^x330)==(x331*x332));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x333 = INT64_MAX;
	volatile int64_t x334 = 936995LL;
	static volatile int8_t x335 = INT8_MAX;
	static int32_t t63 = -347464;

	t63 = ((x333^x334)==(x335*x336));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x337 = UINT64_MAX;
	static int8_t x338 = 0;
	static uint32_t x339 = 564356U;
	int32_t x340 = INT32_MIN;
	int32_t t64 = 8336436;

	t64 = ((x337^x338)==(x339*x340));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x341 = 5;
	static int32_t x342 = INT32_MIN;
	uint8_t x343 = 1U;
	int32_t x344 = 410;
	volatile int32_t t65 = -2;

	t65 = ((x341^x342)==(x343*x344));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int32_t x349 = -1;
	static uint64_t x351 = UINT64_MAX;
	int64_t x352 = INT64_MAX;
	volatile int32_t t66 = -1;

	t66 = ((x349^x350)==(x351*x352));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x353 = INT32_MAX;
	int16_t x354 = INT16_MAX;
	int8_t x355 = -6;
	int16_t x356 = -43;
	int32_t t67 = -20979;

	t67 = ((x353^x354)==(x355*x356));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x357 = 536319348LL;
	int8_t x358 = -2;
	uint32_t x359 = 3085126U;
	volatile int32_t x360 = -110060;

	t68 = ((x357^x358)==(x359*x360));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x363 = INT8_MIN;
	static uint16_t x364 = 10457U;
	volatile int32_t t69 = 11625473;

	t69 = ((x361^x362)==(x363*x364));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x365 = 71U;
	static int8_t x367 = -1;
	int64_t x368 = INT64_MAX;
	volatile int32_t t70 = 918;

	t70 = ((x365^x366)==(x367*x368));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x373 = 42;
	static uint64_t x374 = UINT64_MAX;
	uint8_t x375 = 51U;
	uint32_t x376 = 6208525U;
	volatile int32_t t71 = 26696298;

	t71 = ((x373^x374)==(x375*x376));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x377 = -17075660;
	static uint8_t x379 = UINT8_MAX;
	int8_t x380 = INT8_MIN;
	int32_t t72 = -1707;

	t72 = ((x377^x378)==(x379*x380));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x381 = -1228972LL;
	static uint64_t x382 = UINT64_MAX;
	static int16_t x383 = INT16_MAX;
	uint32_t x384 = 5U;
	volatile int32_t t73 = -733;

	t73 = ((x381^x382)==(x383*x384));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int32_t x386 = -1;
	int16_t x387 = INT16_MIN;
	volatile uint8_t x388 = 6U;
	static volatile int32_t t74 = -12755;

	t74 = ((x385^x386)==(x387*x388));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x389 = INT16_MIN;
	static uint32_t x390 = UINT32_MAX;
	uint16_t x392 = 7228U;

	t75 = ((x389^x390)==(x391*x392));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x393 = INT8_MIN;
	uint32_t x394 = UINT32_MAX;
	volatile int8_t x395 = -1;
	volatile int32_t x396 = -1;

	t76 = ((x393^x394)==(x395*x396));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x397 = INT64_MIN;
	uint32_t x398 = 347236U;
	static int16_t x399 = -1;
	uint16_t x400 = 3U;
	volatile int32_t t77 = -23;

	t77 = ((x397^x398)==(x399*x400));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int32_t x401 = -6370;
	int8_t x402 = INT8_MAX;
	volatile int8_t x404 = INT8_MAX;
	static volatile int32_t t78 = 150639052;

	t78 = ((x401^x402)==(x403*x404));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x410 = 111407U;
	int64_t x411 = 1370215LL;
	uint64_t x412 = UINT64_MAX;
	volatile int32_t t79 = 33496446;

	t79 = ((x409^x410)==(x411*x412));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x415 = 474500;
	int8_t x416 = 29;
	static int32_t t80 = 68369548;

	t80 = ((x413^x414)==(x415*x416));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x421 = 14U;
	int8_t x422 = -1;
	uint16_t x423 = 289U;
	uint64_t x424 = 1028960103LLU;

	t81 = ((x421^x422)==(x423*x424));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x425 = 12U;
	uint16_t x426 = 6263U;
	uint16_t x427 = 9262U;
	volatile int64_t x428 = -496830468LL;
	static int32_t t82 = -8;

	t82 = ((x425^x426)==(x427*x428));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x429 = 2U;
	int32_t x430 = INT32_MAX;
	int64_t x431 = -18704023733LL;
	static int8_t x432 = INT8_MIN;

	t83 = ((x429^x430)==(x431*x432));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x433 = INT16_MAX;
	int8_t x434 = INT8_MIN;
	static uint16_t x435 = 2U;
	volatile int32_t t84 = 144;

	t84 = ((x433^x434)==(x435*x436));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x445 = -7755890;
	static int64_t x446 = INT64_MIN;
	static int64_t x448 = 688538814001574142LL;

	t85 = ((x445^x446)==(x447*x448));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int8_t x453 = -3;
	static volatile int32_t x454 = 134126;
	uint16_t x455 = 0U;
	uint32_t x456 = 3923U;
	int32_t t86 = 149147;

	t86 = ((x453^x454)==(x455*x456));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x457 = -11550;
	volatile int64_t x460 = -18395865LL;
	volatile int32_t t87 = -15057;

	t87 = ((x457^x458)==(x459*x460));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x465 = -1;
	uint8_t x467 = 50U;

	t88 = ((x465^x466)==(x467*x468));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x469 = -234099;
	volatile uint16_t x470 = UINT16_MAX;
	int16_t x472 = -1;
	volatile int32_t t89 = 51917;

	t89 = ((x469^x470)==(x471*x472));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x473 = -1LL;
	static int8_t x474 = -1;
	volatile uint8_t x475 = 4U;
	int32_t t90 = 1;

	t90 = ((x473^x474)==(x475*x476));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x477 = UINT8_MAX;
	uint32_t x478 = 782439U;
	uint16_t x479 = 254U;
	uint64_t x480 = 14053737499LLU;
	volatile int32_t t91 = -486;

	t91 = ((x477^x478)==(x479*x480));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x481 = INT8_MAX;
	volatile int64_t x482 = -6LL;
	int16_t x483 = 1;
	volatile int16_t x484 = -1;

	t92 = ((x481^x482)==(x483*x484));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x485 = 35;
	int16_t x486 = -723;
	uint8_t x487 = UINT8_MAX;
	int16_t x488 = INT16_MAX;
	volatile int32_t t93 = -178189619;

	t93 = ((x485^x486)==(x487*x488));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x490 = 68;
	int16_t x492 = INT16_MAX;
	volatile int32_t t94 = 1;

	t94 = ((x489^x490)==(x491*x492));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x497 = 37;
	int64_t x498 = -1LL;
	int16_t x499 = INT16_MIN;

	t95 = ((x497^x498)==(x499*x500));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x501 = -35;
	uint64_t x502 = 5027LLU;
	uint32_t x503 = 3U;
	static int32_t x504 = -1;

	t96 = ((x501^x502)==(x503*x504));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x506 = INT16_MAX;
	static int16_t x508 = INT16_MIN;
	volatile int32_t t97 = 2168;

	t97 = ((x505^x506)==(x507*x508));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x514 = 18U;
	volatile int32_t t98 = 278850;

	t98 = ((x513^x514)==(x515*x516));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x517 = 2U;
	static uint16_t x518 = UINT16_MAX;
	int8_t x519 = 10;
	uint8_t x520 = UINT8_MAX;
	volatile int32_t t99 = 1041;

	t99 = ((x517^x518)==(x519*x520));

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

