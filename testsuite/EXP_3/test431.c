#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x7 = INT32_MAX;
int64_t x9 = INT64_MIN;
uint64_t x10 = 2388219086575LLU;
static uint64_t x12 = 31942654483LLU;
int16_t x16 = -100;
int8_t x25 = -1;
uint16_t x30 = 14292U;
int64_t x34 = -280235LL;
uint64_t x39 = 13771324662LLU;
static int16_t x43 = INT16_MIN;
int16_t x44 = INT16_MAX;
volatile int32_t x49 = INT32_MIN;
static int64_t t8 = 128692247750LL;
volatile uint16_t x53 = 347U;
static int64_t t9 = 11718554159LL;
uint32_t x67 = 1342847570U;
uint32_t t11 = 4725579U;
static int8_t x69 = 6;
uint16_t x70 = 6189U;
int64_t x75 = INT64_MAX;
uint16_t x85 = 11U;
int8_t x89 = INT8_MAX;
uint64_t x91 = 1082409028347LLU;
volatile uint8_t x93 = UINT8_MAX;
int32_t x96 = 1568084;
static int32_t x105 = INT32_MIN;
uint64_t x118 = 102146666LLU;
int64_t x120 = INT64_MIN;
int32_t x130 = INT32_MIN;
static int8_t x145 = INT8_MIN;
int32_t x157 = INT32_MIN;
int8_t x159 = INT8_MIN;
volatile int32_t x161 = 1;
int8_t x166 = 1;
int64_t x168 = -1LL;
uint64_t x177 = UINT64_MAX;
uint8_t x190 = 7U;
int64_t x197 = -486450833065684LL;
static uint64_t x205 = 4499415372493LLU;
int64_t x206 = INT64_MIN;
volatile int32_t t38 = 306;
static uint32_t x221 = 5U;
uint8_t x222 = 0U;
int8_t x227 = -1;
static int8_t x233 = INT8_MAX;
static int8_t x234 = INT8_MIN;
volatile int32_t t43 = -688299522;
volatile uint64_t t44 = 411067954075287LLU;
uint32_t x255 = UINT32_MAX;
volatile int8_t x263 = -1;
static int16_t x284 = -1;
int32_t x293 = INT32_MIN;
uint16_t x297 = 111U;
static volatile uint64_t x301 = 19028055814LLU;
int16_t x308 = INT16_MIN;
int32_t x309 = 6680251;
int8_t x311 = 7;
int8_t x317 = INT8_MAX;
volatile int8_t x318 = INT8_MIN;
volatile int32_t t57 = -4;
uint32_t x323 = 7785U;
uint32_t x324 = UINT32_MAX;
volatile int8_t x338 = 2;
int64_t x339 = -1LL;
int32_t x342 = -1;
static uint32_t x344 = 162U;
static uint32_t x358 = 49114920U;
static int64_t t63 = INT64_MAX;
int64_t t64 = 982001369371068LL;
static uint64_t x365 = 13LLU;
int32_t x367 = -1;
volatile uint32_t t67 = 2989U;
volatile uint32_t x383 = UINT32_MAX;
static int16_t x385 = -1;
volatile int8_t x388 = INT8_MAX;
static int8_t x400 = -1;
int64_t x401 = INT64_MIN;
volatile uint16_t x413 = 2U;
int64_t t75 = INT64_MAX;
uint64_t x425 = 51490260574372LLU;
int32_t x427 = 67162;
volatile int16_t x430 = INT16_MIN;
int64_t x433 = INT64_MAX;
int16_t x437 = -362;
uint8_t x438 = 58U;
int8_t x441 = INT8_MIN;
int64_t x443 = -1LL;
static int64_t t81 = 15LL;
int8_t x445 = -1;
int8_t x447 = INT8_MIN;
static volatile int32_t x449 = -1;
uint64_t t83 = 17089083897432810LLU;
static int8_t x455 = -1;
uint8_t x456 = 24U;
uint16_t x459 = 3355U;
int64_t x471 = INT64_MIN;
int32_t x485 = 16076093;
int16_t x491 = -1;
static uint64_t x492 = 116LLU;
static int32_t t91 = 743579428;
int64_t x497 = -1LL;
int16_t x509 = -1;
static uint16_t x511 = UINT16_MAX;
int16_t x515 = INT16_MIN;
int32_t x522 = INT32_MIN;
int8_t x524 = 6;
volatile uint8_t x526 = 8U;
int8_t x527 = -1;


void f0(void) {
	static uint8_t x5 = UINT8_MAX;
	int32_t x6 = INT32_MIN;
	uint32_t x8 = 1384175851U;
	volatile uint32_t t0 = 39U;

	t0 = ((x5==x6)-(x7*x8));

	if (t0 != 3531659499U) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x11 = UINT16_MAX;
	volatile uint64_t t1 = 87091098LLU;

	t1 = ((x9==x10)-(x11*x12));

	if (t1 != 18444650711848008211LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = INT32_MAX;
	int32_t x14 = -1;
	uint32_t x15 = UINT32_MAX;
	static uint32_t t2 = 131891603U;

	t2 = ((x13==x14)-(x15*x16));

	if (t2 != 4294967196U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x26 = INT32_MIN;
	uint32_t x27 = 250180U;
	int16_t x28 = -1;
	volatile uint32_t t3 = 7314196U;

	t3 = ((x25==x26)-(x27*x28));

	if (t3 != 250180U) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x29 = 593U;
	int64_t x31 = 14034107069252LL;
	uint32_t x32 = 18U;
	int64_t t4 = -112753LL;

	t4 = ((x29==x30)-(x31*x32));

	if (t4 != -252613927246536LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x33 = 109U;
	static volatile uint8_t x35 = UINT8_MAX;
	volatile int16_t x36 = 5;
	static volatile int32_t t5 = -399;

	t5 = ((x33==x34)-(x35*x36));

	if (t5 != -1275) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x37 = INT16_MIN;
	static volatile uint32_t x38 = 95394564U;
	static uint64_t x40 = 2LLU;
	static uint64_t t6 = 532670942LLU;

	t6 = ((x37==x38)-(x39*x40));

	if (t6 != 18446744046166902292LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x41 = -1;
	int8_t x42 = 9;
	static int32_t t7 = 806928284;

	t7 = ((x41==x42)-(x43*x44));

	if (t7 != 1073709056) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x50 = UINT32_MAX;
	volatile int16_t x51 = -1051;
	int64_t x52 = 4547694LL;

	t8 = ((x49==x50)-(x51*x52));

	if (t8 != 4779626394LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x54 = 66U;
	uint16_t x55 = 1U;
	int64_t x56 = INT64_MAX;

	t9 = ((x53==x54)-(x55*x56));

	if (t9 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x57 = -1;
	int64_t x58 = INT64_MIN;
	static int8_t x59 = INT8_MIN;
	static int8_t x60 = INT8_MAX;
	volatile int32_t t10 = -59747;

	t10 = ((x57==x58)-(x59*x60));

	if (t10 != 16256) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x65 = 1029760LLU;
	static uint64_t x66 = 47082429945900156LLU;
	int8_t x68 = -1;

	t11 = ((x65==x66)-(x67*x68));

	if (t11 != 1342847570U) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x71 = 3937202U;
	volatile int32_t x72 = -3443;
	static volatile uint32_t t12 = 235653627U;

	t12 = ((x69==x70)-(x71*x72));

	if (t12 != 670884598U) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x73 = INT16_MIN;
	uint64_t x74 = 72717280LLU;
	int64_t x76 = -1LL;
	volatile int64_t t13 = INT64_MAX;

	t13 = ((x73==x74)-(x75*x76));

	if (t13 != INT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x77 = -1;
	volatile int32_t x78 = -7;
	uint64_t x79 = UINT64_MAX;
	int32_t x80 = 1;
	static uint64_t t14 = 260185394868LLU;

	t14 = ((x77==x78)-(x79*x80));

	if (t14 != 1LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x86 = 29139217U;
	uint8_t x87 = 23U;
	uint16_t x88 = 3U;
	volatile int32_t t15 = -976283731;

	t15 = ((x85==x86)-(x87*x88));

	if (t15 != -69) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x90 = 3320665957903307LLU;
	uint64_t x92 = UINT64_MAX;
	static volatile uint64_t t16 = 2720697576886LLU;

	t16 = ((x89==x90)-(x91*x92));

	if (t16 != 1082409028347LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x94 = INT32_MIN;
	static uint16_t x95 = 36U;
	int32_t t17 = 1357;

	t17 = ((x93==x94)-(x95*x96));

	if (t17 != -56451024) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x106 = 13U;
	int8_t x107 = 0;
	static int16_t x108 = 0;
	int32_t t18 = -115;

	t18 = ((x105==x106)-(x107*x108));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x117 = -125557518755280274LL;
	static uint32_t x119 = 0U;
	static int64_t t19 = 5999382765211LL;

	t19 = ((x117==x118)-(x119*x120));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x121 = INT64_MAX;
	static int32_t x122 = -7959796;
	static volatile uint64_t x123 = 720583LLU;
	static uint64_t x124 = 3935LLU;
	uint64_t t20 = 599LLU;

	t20 = ((x121==x122)-(x123*x124));

	if (t20 != 18446744070874057511LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x129 = 14U;
	static int16_t x131 = INT16_MIN;
	volatile uint16_t x132 = 100U;
	int32_t t21 = -15067;

	t21 = ((x129==x130)-(x131*x132));

	if (t21 != 3276800) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x133 = INT16_MIN;
	static uint8_t x134 = UINT8_MAX;
	int32_t x135 = 16;
	int32_t x136 = -3127;
	int32_t t22 = -587763;

	t22 = ((x133==x134)-(x135*x136));

	if (t22 != 50032) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x137 = INT64_MIN;
	int64_t x138 = INT64_MAX;
	int8_t x139 = INT8_MIN;
	int8_t x140 = INT8_MIN;
	static volatile int32_t t23 = -21348;

	t23 = ((x137==x138)-(x139*x140));

	if (t23 != -16384) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x146 = INT64_MIN;
	uint32_t x147 = UINT32_MAX;
	int32_t x148 = -1;
	volatile uint32_t t24 = UINT32_MAX;

	t24 = ((x145==x146)-(x147*x148));

	if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x153 = INT16_MAX;
	static volatile uint16_t x154 = 2U;
	uint64_t x155 = 321827447106351LLU;
	int32_t x156 = -6963988;
	static volatile uint64_t t25 = 7531132202538977LLU;

	t25 = ((x153==x154)-(x155*x156));

	if (t25 != 9146446800407342252LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x158 = INT16_MIN;
	int8_t x160 = INT8_MIN;
	static int32_t t26 = -106;

	t26 = ((x157==x158)-(x159*x160));

	if (t26 != -16384) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x162 = INT16_MIN;
	int8_t x163 = INT8_MIN;
	static int8_t x164 = -1;
	int32_t t27 = -9492;

	t27 = ((x161==x162)-(x163*x164));

	if (t27 != -128) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x165 = -1;
	int8_t x167 = INT8_MIN;
	int64_t t28 = 979980854864LL;

	t28 = ((x165==x166)-(x167*x168));

	if (t28 != -128LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x169 = INT16_MAX;
	int16_t x170 = -4;
	static int64_t x171 = -1LL;
	uint64_t x172 = 1104953348255303624LLU;
	volatile uint64_t t29 = 475LLU;

	t29 = ((x169==x170)-(x171*x172));

	if (t29 != 1104953348255303624LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x173 = 4976U;
	uint8_t x174 = UINT8_MAX;
	static volatile uint8_t x175 = 40U;
	uint32_t x176 = UINT32_MAX;
	uint32_t t30 = 650U;

	t30 = ((x173==x174)-(x175*x176));

	if (t30 != 40U) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x178 = 51021LLU;
	int16_t x179 = -73;
	int8_t x180 = -1;
	int32_t t31 = -1;

	t31 = ((x177==x178)-(x179*x180));

	if (t31 != -73) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x185 = INT16_MIN;
	static int32_t x186 = INT32_MAX;
	int64_t x187 = -1LL;
	static volatile uint64_t x188 = 269548072LLU;
	volatile uint64_t t32 = 15324589694226325LLU;

	t32 = ((x185==x186)-(x187*x188));

	if (t32 != 269548072LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x189 = INT16_MAX;
	int32_t x191 = -1;
	int16_t x192 = INT16_MAX;
	int32_t t33 = 105;

	t33 = ((x189==x190)-(x191*x192));

	if (t33 != 32767) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x198 = INT16_MAX;
	volatile int8_t x199 = -1;
	int16_t x200 = INT16_MIN;
	int32_t t34 = 251;

	t34 = ((x197==x198)-(x199*x200));

	if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x201 = INT32_MIN;
	volatile uint16_t x202 = UINT16_MAX;
	int16_t x203 = INT16_MIN;
	int8_t x204 = 1;
	static volatile int32_t t35 = -119596075;

	t35 = ((x201==x202)-(x203*x204));

	if (t35 != 32768) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x207 = INT8_MAX;
	int8_t x208 = INT8_MIN;
	static volatile int32_t t36 = -94462;

	t36 = ((x205==x206)-(x207*x208));

	if (t36 != 16256) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x209 = -1;
	volatile int32_t x210 = -1;
	uint32_t x211 = 13785U;
	volatile uint8_t x212 = 50U;
	volatile uint32_t t37 = 107873U;

	t37 = ((x209==x210)-(x211*x212));

	if (t37 != 4294278047U) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x213 = -2LL;
	static int32_t x214 = INT32_MIN;
	static int32_t x215 = -16;
	volatile int16_t x216 = INT16_MIN;

	t38 = ((x213==x214)-(x215*x216));

	if (t38 != -524288) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x223 = 22U;
	int8_t x224 = 0;
	volatile int32_t t39 = -1113738;

	t39 = ((x221==x222)-(x223*x224));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x225 = 7U;
	uint64_t x226 = 1400LLU;
	uint32_t x228 = UINT32_MAX;
	uint32_t t40 = UINT32_MAX;

	t40 = ((x225==x226)-(x227*x228));

	if (t40 != UINT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x229 = 28;
	int64_t x230 = INT64_MIN;
	uint16_t x231 = 3U;
	int8_t x232 = -1;
	int32_t t41 = -2031471;

	t41 = ((x229==x230)-(x231*x232));

	if (t41 != 3) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x235 = -1LL;
	int16_t x236 = 0;
	volatile int64_t t42 = 5LL;

	t42 = ((x233==x234)-(x235*x236));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x237 = INT32_MAX;
	int64_t x238 = 0LL;
	int8_t x239 = -10;
	volatile int16_t x240 = INT16_MIN;

	t43 = ((x237==x238)-(x239*x240));

	if (t43 != -327680) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x249 = UINT64_MAX;
	uint32_t x250 = UINT32_MAX;
	uint64_t x251 = UINT64_MAX;
	int32_t x252 = INT32_MIN;

	t44 = ((x249==x250)-(x251*x252));

	if (t44 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x253 = 2LLU;
	static uint8_t x254 = 7U;
	volatile int16_t x256 = -1722;
	uint32_t t45 = 4U;

	t45 = ((x253==x254)-(x255*x256));

	if (t45 != 4294965574U) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x257 = UINT64_MAX;
	int32_t x258 = 893125985;
	uint64_t x259 = 59260348LLU;
	static int32_t x260 = INT32_MIN;
	volatile uint64_t t46 = 63185141143LLU;

	t46 = ((x257==x258)-(x259*x260));

	if (t46 != 127260628304789504LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int8_t x261 = INT8_MIN;
	int16_t x262 = INT16_MIN;
	int16_t x264 = INT16_MIN;
	int32_t t47 = -21843603;

	t47 = ((x261==x262)-(x263*x264));

	if (t47 != -32768) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x273 = UINT16_MAX;
	uint64_t x274 = 78239556041518LLU;
	uint32_t x275 = UINT32_MAX;
	uint32_t x276 = 15763263U;
	uint32_t t48 = 12936531U;

	t48 = ((x273==x274)-(x275*x276));

	if (t48 != 15763263U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x281 = INT64_MIN;
	static int32_t x282 = INT32_MIN;
	volatile uint16_t x283 = 7U;
	int32_t t49 = 9287;

	t49 = ((x281==x282)-(x283*x284));

	if (t49 != 7) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x285 = 11U;
	uint8_t x286 = 13U;
	volatile uint32_t x287 = UINT32_MAX;
	int16_t x288 = 14621;
	volatile uint32_t t50 = 109U;

	t50 = ((x285==x286)-(x287*x288));

	if (t50 != 14621U) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x294 = -1;
	int16_t x295 = -43;
	static int16_t x296 = INT16_MIN;
	volatile int32_t t51 = 8584247;

	t51 = ((x293==x294)-(x295*x296));

	if (t51 != -1409024) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x298 = 0;
	uint32_t x299 = 40U;
	volatile int32_t x300 = INT32_MIN;
	uint32_t t52 = 246723U;

	t52 = ((x297==x298)-(x299*x300));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x302 = INT8_MAX;
	int8_t x303 = INT8_MIN;
	uint16_t x304 = 84U;
	volatile int32_t t53 = 58;

	t53 = ((x301==x302)-(x303*x304));

	if (t53 != 10752) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x305 = UINT32_MAX;
	int64_t x306 = -456709442LL;
	volatile int8_t x307 = INT8_MIN;
	int32_t t54 = -78879;

	t54 = ((x305==x306)-(x307*x308));

	if (t54 != -4194304) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x310 = INT64_MAX;
	volatile int16_t x312 = -1;
	volatile int32_t t55 = 5028;

	t55 = ((x309==x310)-(x311*x312));

	if (t55 != 7) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint8_t x313 = 6U;
	int64_t x314 = INT64_MIN;
	int16_t x315 = INT16_MIN;
	volatile uint64_t x316 = UINT64_MAX;
	uint64_t t56 = 10082623367263631LLU;

	t56 = ((x313==x314)-(x315*x316));

	if (t56 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x319 = INT8_MIN;
	int8_t x320 = INT8_MAX;

	t57 = ((x317==x318)-(x319*x320));

	if (t57 != 16256) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x321 = -14717771164LL;
	int8_t x322 = -1;
	uint32_t t58 = 2U;

	t58 = ((x321==x322)-(x323*x324));

	if (t58 != 7785U) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x329 = 10058227475317075LLU;
	int8_t x330 = -1;
	uint8_t x331 = UINT8_MAX;
	int64_t x332 = 55LL;
	volatile int64_t t59 = -1939232195112728LL;

	t59 = ((x329==x330)-(x331*x332));

	if (t59 != -14025LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x337 = UINT64_MAX;
	int16_t x340 = INT16_MIN;
	volatile int64_t t60 = -275612993082750LL;

	t60 = ((x337==x338)-(x339*x340));

	if (t60 != -32768LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x341 = INT32_MIN;
	uint8_t x343 = 104U;
	static volatile uint32_t t61 = 291156U;

	t61 = ((x341==x342)-(x343*x344));

	if (t61 != 4294950448U) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x349 = 1418U;
	uint64_t x350 = UINT64_MAX;
	int64_t x351 = 921646058567LL;
	int16_t x352 = INT16_MIN;
	static volatile int64_t t62 = 12766412LL;

	t62 = ((x349==x350)-(x351*x352));

	if (t62 != 30200498047123456LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x357 = -1;
	static volatile int64_t x359 = INT64_MAX;
	int16_t x360 = -1;

	t63 = ((x357==x358)-(x359*x360));

	if (t63 != INT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x361 = INT64_MAX;
	int16_t x362 = -963;
	volatile int64_t x363 = 11660115889426LL;
	uint16_t x364 = 1U;

	t64 = ((x361==x362)-(x363*x364));

	if (t64 != -11660115889426LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x366 = 1U;
	int32_t x368 = 53301;
	int32_t t65 = 186;

	t65 = ((x365==x366)-(x367*x368));

	if (t65 != 53301) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x373 = INT32_MAX;
	int16_t x374 = 1;
	int8_t x375 = -1;
	int64_t x376 = 36482467967LL;
	volatile int64_t t66 = 649988520983LL;

	t66 = ((x373==x374)-(x375*x376));

	if (t66 != 36482467967LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x377 = 14;
	uint16_t x378 = UINT16_MAX;
	static uint32_t x379 = 2781U;
	int8_t x380 = INT8_MIN;

	t67 = ((x377==x378)-(x379*x380));

	if (t67 != 355968U) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x381 = 30660U;
	int32_t x382 = 1353;
	static int8_t x384 = INT8_MIN;
	volatile uint32_t t68 = 170413U;

	t68 = ((x381==x382)-(x383*x384));

	if (t68 != 4294967168U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x386 = INT8_MIN;
	int32_t x387 = -1;
	int32_t t69 = 1038924;

	t69 = ((x385==x386)-(x387*x388));

	if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x389 = -78192524;
	volatile uint8_t x390 = 0U;
	int16_t x391 = 571;
	int16_t x392 = -24;
	volatile int32_t t70 = 0;

	t70 = ((x389==x390)-(x391*x392));

	if (t70 != 13704) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x397 = UINT16_MAX;
	volatile uint16_t x398 = 118U;
	int16_t x399 = INT16_MIN;
	int32_t t71 = 3282;

	t71 = ((x397==x398)-(x399*x400));

	if (t71 != -32768) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x402 = 9U;
	int32_t x403 = -1;
	static int32_t x404 = -1;
	volatile int32_t t72 = -1893;

	t72 = ((x401==x402)-(x403*x404));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x405 = 1U;
	volatile int64_t x406 = INT64_MIN;
	uint32_t x407 = 1U;
	int32_t x408 = INT32_MAX;
	static volatile uint32_t t73 = 102559U;

	t73 = ((x405==x406)-(x407*x408));

	if (t73 != 2147483649U) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x409 = 7209027U;
	volatile int8_t x410 = INT8_MIN;
	uint64_t x411 = UINT64_MAX;
	int32_t x412 = INT32_MAX;
	volatile uint64_t t74 = 1285904244933465LLU;

	t74 = ((x409==x410)-(x411*x412));

	if (t74 != 2147483647LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x414 = 0LL;
	int64_t x415 = INT64_MAX;
	static int8_t x416 = -1;

	t75 = ((x413==x414)-(x415*x416));

	if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x421 = INT8_MIN;
	uint64_t x422 = UINT64_MAX;
	uint64_t x423 = 231573LLU;
	int32_t x424 = -1;
	volatile uint64_t t76 = 1347653634993562LLU;

	t76 = ((x421==x422)-(x423*x424));

	if (t76 != 231573LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x426 = 40660;
	volatile int16_t x428 = -1;
	int32_t t77 = -471;

	t77 = ((x425==x426)-(x427*x428));

	if (t77 != 67162) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x429 = -1;
	int8_t x431 = INT8_MIN;
	volatile uint8_t x432 = 0U;
	int32_t t78 = 27605;

	t78 = ((x429==x430)-(x431*x432));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x434 = 2077948306LLU;
	int8_t x435 = INT8_MIN;
	uint8_t x436 = 0U;
	static volatile int32_t t79 = -1;

	t79 = ((x433==x434)-(x435*x436));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x439 = 6518;
	int8_t x440 = -1;
	int32_t t80 = 0;

	t80 = ((x437==x438)-(x439*x440));

	if (t80 != 6518) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x442 = INT16_MIN;
	static int64_t x444 = -7444121891758910LL;

	t81 = ((x441==x442)-(x443*x444));

	if (t81 != -7444121891758910LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x446 = 104U;
	int8_t x448 = 7;
	static int32_t t82 = 76380103;

	t82 = ((x445==x446)-(x447*x448));

	if (t82 != 896) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x450 = -1;
	int16_t x451 = -1;
	volatile uint64_t x452 = 0LLU;

	t83 = ((x449==x450)-(x451*x452));

	if (t83 != 1LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x453 = INT8_MIN;
	volatile uint8_t x454 = UINT8_MAX;
	int32_t t84 = 435488;

	t84 = ((x453==x454)-(x455*x456));

	if (t84 != 24) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x457 = -878326125412459804LL;
	int32_t x458 = -1;
	int16_t x460 = 2;
	int32_t t85 = 14046891;

	t85 = ((x457==x458)-(x459*x460));

	if (t85 != -6710) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x461 = -5;
	int8_t x462 = -14;
	int16_t x463 = INT16_MIN;
	int16_t x464 = -1;
	volatile int32_t t86 = 37320;

	t86 = ((x461==x462)-(x463*x464));

	if (t86 != -32768) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x469 = UINT32_MAX;
	int32_t x470 = INT32_MIN;
	static volatile uint64_t x472 = UINT64_MAX;
	uint64_t t87 = 2LLU;

	t87 = ((x469==x470)-(x471*x472));

	if (t87 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x473 = UINT64_MAX;
	int8_t x474 = INT8_MAX;
	static volatile int64_t x475 = 6178739LL;
	uint16_t x476 = UINT16_MAX;
	int64_t t88 = 143074LL;

	t88 = ((x473==x474)-(x475*x476));

	if (t88 != -404923660365LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x486 = INT8_MAX;
	int16_t x487 = INT16_MIN;
	static int8_t x488 = INT8_MAX;
	static int32_t t89 = 4329;

	t89 = ((x485==x486)-(x487*x488));

	if (t89 != 4161536) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x489 = UINT16_MAX;
	int8_t x490 = -1;
	volatile uint64_t t90 = 262721818166722LLU;

	t90 = ((x489==x490)-(x491*x492));

	if (t90 != 116LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x493 = INT64_MAX;
	int16_t x494 = INT16_MAX;
	int16_t x495 = -6833;
	int8_t x496 = INT8_MIN;

	t91 = ((x493==x494)-(x495*x496));

	if (t91 != -874624) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x498 = 1789674843625LLU;
	volatile int16_t x499 = 61;
	uint16_t x500 = 5187U;
	int32_t t92 = 65075421;

	t92 = ((x497==x498)-(x499*x500));

	if (t92 != -316407) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x501 = INT64_MIN;
	uint32_t x502 = 2U;
	uint8_t x503 = 4U;
	int16_t x504 = INT16_MIN;
	volatile int32_t t93 = 403238;

	t93 = ((x501==x502)-(x503*x504));

	if (t93 != 131072) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x505 = 1;
	uint16_t x506 = UINT16_MAX;
	int64_t x507 = 884LL;
	uint32_t x508 = 3U;
	volatile int64_t t94 = -16011633941329LL;

	t94 = ((x505==x506)-(x507*x508));

	if (t94 != -2652LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x510 = UINT64_MAX;
	int8_t x512 = -53;
	static volatile int32_t t95 = -29;

	t95 = ((x509==x510)-(x511*x512));

	if (t95 != 3473356) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x513 = UINT32_MAX;
	int8_t x514 = INT8_MIN;
	volatile uint16_t x516 = UINT16_MAX;
	volatile int32_t t96 = -9;

	t96 = ((x513==x514)-(x515*x516));

	if (t96 != 2147450880) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x521 = INT32_MIN;
	uint8_t x523 = 8U;
	int32_t t97 = 71499281;

	t97 = ((x521==x522)-(x523*x524));

	if (t97 != -47) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x525 = 16U;
	static volatile int64_t x528 = INT64_MAX;
	volatile int64_t t98 = INT64_MAX;

	t98 = ((x525==x526)-(x527*x528));

	if (t98 != INT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x529 = 49U;
	int32_t x530 = INT32_MIN;
	volatile int64_t x531 = INT64_MIN;
	volatile int64_t x532 = 0LL;
	volatile int64_t t99 = 130471493886394LL;

	t99 = ((x529==x530)-(x531*x532));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

