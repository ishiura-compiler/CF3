#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x5 = -1;
int64_t x8 = 2199LL;
int64_t x9 = -1LL;
uint64_t x16 = UINT64_MAX;
uint64_t t2 = 18381246443886876LLU;
uint64_t x32 = 92398554LLU;
static uint64_t t5 = 0LLU;
int32_t x38 = -119;
uint16_t x41 = 7U;
volatile uint32_t t9 = 1067356864U;
int64_t x53 = -1LL;
uint32_t x58 = 4163U;
volatile int16_t x66 = INT16_MAX;
static uint64_t x76 = 1993926044085476LLU;
int32_t x78 = -912833892;
int64_t x79 = INT64_MAX;
int32_t x93 = -916;
static volatile int32_t t21 = 1;
uint32_t x106 = UINT32_MAX;
uint32_t t22 = 168029U;
int64_t t23 = -2304505LL;
volatile uint64_t t25 = 51438489791LLU;
int16_t x129 = INT16_MAX;
uint8_t x133 = 61U;
static int16_t x143 = INT16_MAX;
static uint64_t t31 = 16849465824506490LLU;
static volatile uint16_t x156 = 8U;
uint16_t x157 = 4317U;
int32_t x159 = 2361048;
int64_t x177 = INT64_MIN;
uint16_t x179 = 1U;
int64_t x185 = INT64_MAX;
uint16_t x186 = UINT16_MAX;
uint64_t x191 = 9653LLU;
static uint64_t x196 = 63516371720905040LLU;
int32_t x199 = INT32_MIN;
int8_t x215 = INT8_MAX;
uint32_t x221 = 18290U;
static int16_t x222 = -1;
int64_t x225 = 1LL;
int32_t x228 = INT32_MIN;
uint64_t x229 = UINT64_MAX;
int32_t x231 = -1;
static volatile uint16_t x238 = UINT16_MAX;
int64_t x241 = -743598LL;
static volatile uint64_t t51 = 311307509LLU;
volatile int64_t x247 = INT64_MAX;
int32_t x259 = INT32_MAX;
volatile int16_t x264 = INT16_MIN;
uint64_t t57 = 484645143LLU;
int64_t x278 = -1862577979561LL;
volatile uint32_t x281 = UINT32_MAX;
uint64_t x283 = UINT64_MAX;
int64_t x294 = 27443713925420LL;
int8_t x298 = -1;
static uint16_t x301 = UINT16_MAX;
volatile int16_t x307 = INT16_MIN;
volatile int8_t x308 = INT8_MIN;
uint16_t x315 = 16U;
int32_t x332 = -1;
static int64_t x333 = 728321326LL;
int8_t x334 = INT8_MAX;
int8_t x350 = -1;
volatile uint64_t x352 = 403613028703183LLU;
static int16_t x354 = -1;
volatile int64_t t76 = -13114335LL;
static uint16_t x363 = 19U;
uint8_t x365 = 56U;
int32_t x379 = 437;
int32_t x382 = 182312;
uint32_t t81 = 9132U;
volatile int32_t t82 = -1;
uint8_t x398 = UINT8_MAX;
int64_t x402 = INT64_MIN;
int64_t x410 = INT64_MIN;
uint32_t x412 = 2337U;
static int8_t x418 = INT8_MIN;
uint8_t x438 = 4U;
static int8_t x441 = -7;
int64_t x442 = -1LL;
int8_t x448 = INT8_MIN;
uint32_t x449 = 4U;
volatile int64_t x455 = 0LL;
int8_t x463 = 18;
int8_t x464 = INT8_MIN;
uint32_t x465 = UINT32_MAX;
int32_t x466 = INT32_MAX;
static uint64_t t99 = 3LLU;


void f0(void) {
	uint32_t x6 = 131857830U;
	volatile int16_t x7 = 0;
	volatile int64_t t0 = -16747LL;

	t0 = ((x5/(x6+x7))&x8);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x10 = INT8_MIN;
	int16_t x11 = INT16_MAX;
	static int32_t x12 = INT32_MAX;
	volatile int64_t t1 = 3240037287993LL;

	t1 = ((x9/(x10+x11))&x12);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x13 = 267U;
	int64_t x14 = -1LL;
	int32_t x15 = INT32_MAX;

	t2 = ((x13/(x14+x15))&x16);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x21 = -15;
	int16_t x22 = -7471;
	int64_t x23 = -1LL;
	volatile int8_t x24 = -1;
	int64_t t3 = -627114266LL;

	t3 = ((x21/(x22+x23))&x24);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x25 = INT16_MIN;
	static int16_t x26 = -124;
	int64_t x27 = INT64_MAX;
	int64_t x28 = 21133978555LL;
	int64_t t4 = 207LL;

	t4 = ((x25/(x26+x27))&x28);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x29 = INT16_MAX;
	volatile uint64_t x30 = 19LLU;
	volatile uint8_t x31 = 122U;

	t5 = ((x29/(x30+x31))&x32);

	if (t5 != 200LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x33 = 28;
	volatile int16_t x34 = -1;
	uint32_t x35 = 12399093U;
	uint8_t x36 = 0U;
	volatile uint32_t t6 = 13075U;

	t6 = ((x33/(x34+x35))&x36);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x37 = INT32_MIN;
	uint32_t x39 = 22778U;
	static volatile int64_t x40 = -1LL;
	int64_t t7 = -67332LL;

	t7 = ((x37/(x38+x39))&x40);

	if (t7 != 94773LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x42 = 10;
	volatile int16_t x43 = INT16_MAX;
	int8_t x44 = INT8_MAX;
	int32_t t8 = 20567;

	t8 = ((x41/(x42+x43))&x44);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x49 = 45;
	int32_t x50 = -64472801;
	uint32_t x51 = UINT32_MAX;
	static volatile int32_t x52 = INT32_MIN;

	t9 = ((x49/(x50+x51))&x52);

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint32_t x54 = 5U;
	volatile int8_t x55 = INT8_MAX;
	volatile uint32_t x56 = 0U;
	static int64_t t10 = 14833871065855351LL;

	t10 = ((x53/(x54+x55))&x56);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x57 = 5U;
	static uint32_t x59 = UINT32_MAX;
	int64_t x60 = INT64_MIN;
	int64_t t11 = -830LL;

	t11 = ((x57/(x58+x59))&x60);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x61 = 0;
	int16_t x62 = 878;
	int32_t x63 = -1;
	static int32_t x64 = 1051;
	volatile int32_t t12 = 624;

	t12 = ((x61/(x62+x63))&x64);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x65 = 23U;
	int32_t x67 = -85635184;
	int16_t x68 = INT16_MIN;
	static int32_t t13 = 11254;

	t13 = ((x65/(x66+x67))&x68);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x69 = 436400207U;
	int16_t x70 = INT16_MIN;
	int32_t x71 = INT32_MAX;
	int16_t x72 = -1;
	uint32_t t14 = 443769U;

	t14 = ((x69/(x70+x71))&x72);

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x73 = -1;
	uint64_t x74 = UINT64_MAX;
	int16_t x75 = -1;
	volatile uint64_t t15 = 197LLU;

	t15 = ((x73/(x74+x75))&x76);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x77 = 1U;
	static int32_t x80 = INT32_MAX;
	int64_t t16 = -21915184248LL;

	t16 = ((x77/(x78+x79))&x80);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x81 = INT16_MIN;
	volatile uint8_t x82 = 95U;
	uint32_t x83 = UINT32_MAX;
	volatile int32_t x84 = INT32_MAX;
	volatile uint32_t t17 = 26848U;

	t17 = ((x81/(x82+x83))&x84);

	if (t17 != 45690792U) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint8_t x85 = 3U;
	uint64_t x86 = 16010795LLU;
	volatile int16_t x87 = 64;
	uint8_t x88 = UINT8_MAX;
	volatile uint64_t t18 = 17527996360536696LLU;

	t18 = ((x85/(x86+x87))&x88);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x89 = 1U;
	int32_t x90 = -7346;
	uint16_t x91 = UINT16_MAX;
	int64_t x92 = -309381130LL;
	volatile int64_t t19 = 15542156395544747LL;

	t19 = ((x89/(x90+x91))&x92);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x94 = INT32_MIN;
	int64_t x95 = -800519LL;
	int16_t x96 = 0;
	int64_t t20 = -22189750003980386LL;

	t20 = ((x93/(x94+x95))&x96);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x97 = INT16_MIN;
	int16_t x98 = INT16_MIN;
	int16_t x99 = INT16_MIN;
	volatile int32_t x100 = INT32_MIN;

	t21 = ((x97/(x98+x99))&x100);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x105 = 1566U;
	volatile int32_t x107 = -87324567;
	uint32_t x108 = 152023U;

	t22 = ((x105/(x106+x107))&x108);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x113 = INT64_MIN;
	static int8_t x114 = INT8_MAX;
	int8_t x115 = -1;
	int16_t x116 = INT16_MAX;

	t23 = ((x113/(x114+x115))&x116);

	if (t23 != 16124LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x117 = INT64_MIN;
	int64_t x118 = -41LL;
	int8_t x119 = INT8_MAX;
	int32_t x120 = INT32_MIN;
	int64_t t24 = 94244305109LL;

	t24 = ((x117/(x118+x119))&x120);

	if (t24 != -107248513804402688LL) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int32_t x121 = INT32_MAX;
	volatile uint32_t x122 = 512U;
	static uint64_t x123 = UINT64_MAX;
	int64_t x124 = INT64_MAX;

	t25 = ((x121/(x122+x123))&x124);

	if (t25 != 4202512LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x130 = -2;
	int16_t x131 = INT16_MIN;
	uint16_t x132 = 158U;
	volatile int32_t t26 = -120;

	t26 = ((x129/(x130+x131))&x132);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x134 = INT32_MIN;
	static int16_t x135 = INT16_MAX;
	volatile int32_t x136 = -1758;
	volatile int32_t t27 = -2;

	t27 = ((x133/(x134+x135))&x136);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x137 = 127U;
	int8_t x138 = 1;
	static uint32_t x139 = 931U;
	int8_t x140 = 3;
	static volatile uint32_t t28 = 222U;

	t28 = ((x137/(x138+x139))&x140);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int8_t x141 = INT8_MIN;
	static int32_t x142 = 21;
	volatile int8_t x144 = 0;
	static int32_t t29 = -27;

	t29 = ((x141/(x142+x143))&x144);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x145 = -1LL;
	int64_t x146 = INT64_MIN;
	static int16_t x147 = INT16_MAX;
	int16_t x148 = INT16_MIN;
	volatile int64_t t30 = -59LL;

	t30 = ((x145/(x146+x147))&x148);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x149 = 59;
	int64_t x150 = 2428130LL;
	int8_t x151 = -1;
	uint64_t x152 = 186732062LLU;

	t31 = ((x149/(x150+x151))&x152);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x153 = UINT16_MAX;
	static int64_t x154 = -1931LL;
	int16_t x155 = -1;
	int64_t t32 = -699947LL;

	t32 = ((x153/(x154+x155))&x156);

	if (t32 != 8LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x158 = -24;
	uint16_t x160 = 17275U;
	static int32_t t33 = 30;

	t33 = ((x157/(x158+x159))&x160);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x161 = INT32_MIN;
	int64_t x162 = INT64_MIN;
	int64_t x163 = INT64_MAX;
	uint8_t x164 = UINT8_MAX;
	static int64_t t34 = -97356461932LL;

	t34 = ((x161/(x162+x163))&x164);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x169 = 12175U;
	volatile uint16_t x170 = UINT16_MAX;
	static int32_t x171 = INT32_MIN;
	static int32_t x172 = INT32_MIN;
	static uint32_t t35 = 4635U;

	t35 = ((x169/(x170+x171))&x172);

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x173 = INT64_MIN;
	volatile int16_t x174 = -1;
	int8_t x175 = INT8_MIN;
	uint16_t x176 = UINT16_MAX;
	volatile int64_t t36 = 29033091189LL;

	t36 = ((x173/(x174+x175))&x176);

	if (t36 != 16256LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x178 = UINT16_MAX;
	int8_t x180 = 3;
	static volatile int64_t t37 = 216792LL;

	t37 = ((x177/(x178+x179))&x180);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x181 = -7;
	int64_t x182 = INT64_MIN;
	volatile uint64_t x183 = 3LLU;
	int32_t x184 = INT32_MIN;
	uint64_t t38 = 119LLU;

	t38 = ((x181/(x182+x183))&x184);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x187 = 6629;
	volatile int8_t x188 = INT8_MIN;
	static int64_t t39 = -42LL;

	t39 = ((x185/(x186+x187))&x188);

	if (t39 != 127811263744384LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x189 = UINT64_MAX;
	static volatile int64_t x190 = INT64_MIN;
	int8_t x192 = -15;
	uint64_t t40 = 62455253819LLU;

	t40 = ((x189/(x190+x191))&x192);

	if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x193 = -1;
	int32_t x194 = INT32_MIN;
	uint64_t x195 = 699169244670027LLU;
	uint64_t t41 = 4329598964456LLU;

	t41 = ((x193/(x194+x195))&x196);

	if (t41 != 8448LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x197 = 7;
	uint32_t x198 = 761642U;
	volatile int16_t x200 = -32;
	uint32_t t42 = 295926725U;

	t42 = ((x197/(x198+x199))&x200);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x201 = -1;
	static volatile int16_t x202 = 6541;
	static int8_t x203 = INT8_MAX;
	int16_t x204 = -261;
	int32_t t43 = -15930;

	t43 = ((x201/(x202+x203))&x204);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x205 = 447U;
	uint32_t x206 = 0U;
	static int8_t x207 = -25;
	int16_t x208 = -3;
	volatile uint32_t t44 = 64438U;

	t44 = ((x205/(x206+x207))&x208);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x213 = 486649;
	static uint32_t x214 = 16U;
	uint64_t x216 = 111324325LLU;
	volatile uint64_t t45 = 30623LLU;

	t45 = ((x213/(x214+x215))&x216);

	if (t45 != 3073LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x223 = 0;
	static int8_t x224 = INT8_MIN;
	uint32_t t46 = 2U;

	t46 = ((x221/(x222+x223))&x224);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x226 = 3LL;
	static volatile int8_t x227 = 12;
	volatile int64_t t47 = 483296206LL;

	t47 = ((x225/(x226+x227))&x228);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint32_t x230 = UINT32_MAX;
	volatile int64_t x232 = 2672504LL;
	uint64_t t48 = 66289140LLU;

	t48 = ((x229/(x230+x231))&x232);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x233 = UINT64_MAX;
	int64_t x234 = INT64_MAX;
	int8_t x235 = -1;
	uint64_t x236 = UINT64_MAX;
	volatile uint64_t t49 = 217227276397002LLU;

	t49 = ((x233/(x234+x235))&x236);

	if (t49 != 2LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x237 = 2221LLU;
	int64_t x239 = INT64_MIN;
	static int16_t x240 = 347;
	uint64_t t50 = 271008162322575LLU;

	t50 = ((x237/(x238+x239))&x240);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x242 = 5920835519454924LLU;
	static volatile uint8_t x243 = UINT8_MAX;
	uint16_t x244 = UINT16_MAX;

	t51 = ((x241/(x242+x243))&x244);

	if (t51 != 3115LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint64_t x245 = 4388748LLU;
	int16_t x246 = INT16_MIN;
	uint64_t x248 = 2495579LLU;
	volatile uint64_t t52 = 51895551801LLU;

	t52 = ((x245/(x246+x247))&x248);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x249 = INT8_MIN;
	int64_t x250 = -1LL;
	uint16_t x251 = 3U;
	static int64_t x252 = INT64_MIN;
	int64_t t53 = INT64_MIN;

	t53 = ((x249/(x250+x251))&x252);

	if (t53 != INT64_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x253 = 1788U;
	uint8_t x254 = UINT8_MAX;
	int16_t x255 = INT16_MIN;
	uint32_t x256 = 0U;
	uint32_t t54 = 106727316U;

	t54 = ((x253/(x254+x255))&x256);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x257 = INT8_MIN;
	int64_t x258 = INT64_MIN;
	int8_t x260 = INT8_MIN;
	int64_t t55 = -25658345LL;

	t55 = ((x257/(x258+x259))&x260);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x261 = INT32_MAX;
	int8_t x262 = -2;
	volatile int8_t x263 = -3;
	int32_t t56 = -186094600;

	t56 = ((x261/(x262+x263))&x264);

	if (t56 != -429522944) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x269 = 1;
	volatile int8_t x270 = INT8_MAX;
	int32_t x271 = 6120;
	uint64_t x272 = 798347731485274588LLU;

	t57 = ((x269/(x270+x271))&x272);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x273 = -1;
	int8_t x274 = INT8_MIN;
	volatile int32_t x275 = 28422280;
	int8_t x276 = INT8_MIN;
	volatile int32_t t58 = 12;

	t58 = ((x273/(x274+x275))&x276);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x277 = 1U;
	uint16_t x279 = 8276U;
	uint16_t x280 = 17U;
	int64_t t59 = -54221125625305418LL;

	t59 = ((x277/(x278+x279))&x280);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x282 = UINT32_MAX;
	uint8_t x284 = 0U;
	uint64_t t60 = 2738LLU;

	t60 = ((x281/(x282+x283))&x284);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x285 = -4;
	uint64_t x286 = 32043081LLU;
	static int32_t x287 = INT32_MIN;
	uint8_t x288 = 30U;
	uint64_t t61 = 448734039018164LLU;

	t61 = ((x285/(x286+x287))&x288);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x293 = INT64_MIN;
	volatile int32_t x295 = 6;
	int16_t x296 = 0;
	int64_t t62 = 8030992114224LL;

	t62 = ((x293/(x294+x295))&x296);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x297 = UINT64_MAX;
	int64_t x299 = 7LL;
	int8_t x300 = INT8_MIN;
	uint64_t t63 = 354186347LLU;

	t63 = ((x297/(x298+x299))&x300);

	if (t63 != 3074457345618258560LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int8_t x302 = INT8_MAX;
	int8_t x303 = 0;
	int16_t x304 = INT16_MIN;
	volatile int32_t t64 = 15464028;

	t64 = ((x301/(x302+x303))&x304);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x305 = 407783191LL;
	uint16_t x306 = UINT16_MAX;
	volatile int64_t t65 = 738547866721LL;

	t65 = ((x305/(x306+x307))&x308);

	if (t65 != 12416LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x313 = -1;
	static uint8_t x314 = 3U;
	int64_t x316 = INT64_MIN;
	int64_t t66 = -15981381LL;

	t66 = ((x313/(x314+x315))&x316);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x317 = 1611348865988LLU;
	uint32_t x318 = 1462793082U;
	uint32_t x319 = 3159580U;
	static int8_t x320 = INT8_MAX;
	volatile uint64_t t67 = 2120153725087727318LLU;

	t67 = ((x317/(x318+x319))&x320);

	if (t67 != 75LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x321 = INT8_MAX;
	int64_t x322 = -1LL;
	int64_t x323 = INT64_MAX;
	uint64_t x324 = 8065543131833LLU;
	uint64_t t68 = 2493LLU;

	t68 = ((x321/(x322+x323))&x324);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x325 = INT16_MAX;
	int16_t x326 = -1;
	volatile int32_t x327 = 6792733;
	uint8_t x328 = UINT8_MAX;
	volatile int32_t t69 = 4980;

	t69 = ((x325/(x326+x327))&x328);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x329 = 0U;
	uint32_t x330 = UINT32_MAX;
	static volatile int16_t x331 = INT16_MIN;
	volatile uint32_t t70 = 281614U;

	t70 = ((x329/(x330+x331))&x332);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x335 = -1LL;
	volatile int64_t x336 = INT64_MAX;
	int64_t t71 = -217011LL;

	t71 = ((x333/(x334+x335))&x336);

	if (t71 != 5780327LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x337 = 3250537566369038LL;
	int32_t x338 = -1;
	int8_t x339 = INT8_MIN;
	volatile uint16_t x340 = 991U;
	volatile int64_t t72 = 16996255645LL;

	t72 = ((x337/(x338+x339))&x340);

	if (t72 != 721LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x345 = 0U;
	volatile int32_t x346 = -1;
	static int8_t x347 = -1;
	int32_t x348 = 127;
	int32_t t73 = 1047430113;

	t73 = ((x345/(x346+x347))&x348);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x349 = -1;
	int64_t x351 = -1LL;
	uint64_t t74 = 4978989784LLU;

	t74 = ((x349/(x350+x351))&x352);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x353 = INT8_MIN;
	static int16_t x355 = -6385;
	static int64_t x356 = -108668895604226LL;
	static int64_t t75 = 37LL;

	t75 = ((x353/(x354+x355))&x356);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x357 = 63196LL;
	volatile uint32_t x358 = 1870728207U;
	int8_t x359 = -1;
	uint16_t x360 = 240U;

	t76 = ((x357/(x358+x359))&x360);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x361 = -1;
	volatile int16_t x362 = INT16_MAX;
	int16_t x364 = INT16_MIN;
	int32_t t77 = 91;

	t77 = ((x361/(x362+x363))&x364);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x366 = 730U;
	static uint16_t x367 = 1986U;
	int8_t x368 = INT8_MIN;
	int32_t t78 = -137;

	t78 = ((x365/(x366+x367))&x368);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x373 = INT8_MIN;
	uint32_t x374 = 4U;
	int16_t x375 = INT16_MAX;
	static int8_t x376 = INT8_MAX;
	volatile uint32_t t79 = 700977846U;

	t79 = ((x373/(x374+x375))&x376);

	if (t79 != 115U) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int16_t x377 = INT16_MIN;
	int16_t x378 = 771;
	int8_t x380 = 3;
	int32_t t80 = -33;

	t80 = ((x377/(x378+x379))&x380);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x381 = 875U;
	uint8_t x383 = UINT8_MAX;
	static int8_t x384 = INT8_MIN;

	t81 = ((x381/(x382+x383))&x384);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x385 = INT8_MIN;
	static int8_t x386 = 1;
	uint8_t x387 = 1U;
	static int8_t x388 = 0;

	t82 = ((x385/(x386+x387))&x388);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x389 = 51789LLU;
	int8_t x390 = INT8_MIN;
	int16_t x391 = 15898;
	static int32_t x392 = INT32_MIN;
	uint64_t t83 = 12391865951LLU;

	t83 = ((x389/(x390+x391))&x392);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x397 = -1LL;
	int32_t x399 = -1;
	int64_t x400 = INT64_MAX;
	volatile int64_t t84 = -31451236LL;

	t84 = ((x397/(x398+x399))&x400);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x401 = INT16_MIN;
	volatile int64_t x403 = 1264474468055629LL;
	volatile int64_t x404 = INT64_MIN;
	static volatile int64_t t85 = 364238077265635324LL;

	t85 = ((x401/(x402+x403))&x404);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x405 = -24;
	int8_t x406 = 40;
	volatile int64_t x407 = -16700656301LL;
	int16_t x408 = -1;
	volatile int64_t t86 = -603383953LL;

	t86 = ((x405/(x406+x407))&x408);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x409 = INT8_MIN;
	uint8_t x411 = UINT8_MAX;
	static int64_t t87 = 7LL;

	t87 = ((x409/(x410+x411))&x412);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x413 = -10906;
	static volatile int64_t x414 = -1LL;
	int64_t x415 = -1LL;
	static volatile int8_t x416 = 19;
	volatile int64_t t88 = -112914623LL;

	t88 = ((x413/(x414+x415))&x416);

	if (t88 != 1LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x417 = UINT64_MAX;
	int32_t x419 = -68446170;
	static int16_t x420 = -1;
	volatile uint64_t t89 = 372272LLU;

	t89 = ((x417/(x418+x419))&x420);

	if (t89 != 1LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x425 = -1;
	uint32_t x426 = UINT32_MAX;
	static volatile int64_t x427 = INT64_MIN;
	int16_t x428 = -1;
	volatile int64_t t90 = -266078583LL;

	t90 = ((x425/(x426+x427))&x428);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x429 = -6;
	static uint16_t x430 = 0U;
	static int16_t x431 = 248;
	volatile int16_t x432 = INT16_MIN;
	volatile int32_t t91 = -35989;

	t91 = ((x429/(x430+x431))&x432);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x437 = 28781669044627781LLU;
	uint64_t x439 = UINT64_MAX;
	int64_t x440 = INT64_MIN;
	volatile uint64_t t92 = 118LLU;

	t92 = ((x437/(x438+x439))&x440);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int32_t x443 = INT32_MAX;
	static uint64_t x444 = UINT64_MAX;
	volatile uint64_t t93 = 4734008840562LLU;

	t93 = ((x441/(x442+x443))&x444);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x445 = INT16_MIN;
	volatile uint64_t x446 = UINT64_MAX;
	uint16_t x447 = 113U;
	volatile uint64_t t94 = 5429012610766916LLU;

	t94 = ((x445/(x446+x447))&x448);

	if (t94 != 164703072086692096LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x450 = INT16_MIN;
	static int32_t x451 = 3;
	uint16_t x452 = UINT16_MAX;
	uint32_t t95 = 251923538U;

	t95 = ((x449/(x450+x451))&x452);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x453 = -1;
	int32_t x454 = INT32_MAX;
	uint16_t x456 = 0U;
	int64_t t96 = -779881311370209967LL;

	t96 = ((x453/(x454+x455))&x456);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x457 = 159LLU;
	volatile uint16_t x458 = 965U;
	volatile uint64_t x459 = UINT64_MAX;
	static int32_t x460 = INT32_MIN;
	static volatile uint64_t t97 = 276LLU;

	t97 = ((x457/(x458+x459))&x460);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x461 = 31;
	volatile int16_t x462 = INT16_MIN;
	static volatile int32_t t98 = -6316325;

	t98 = ((x461/(x462+x463))&x464);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x467 = UINT64_MAX;
	uint64_t x468 = 6974300923709023LLU;

	t99 = ((x465/(x466+x467))&x468);

	if (t99 != 2LLU) { NG(); } else { ; }
	
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

