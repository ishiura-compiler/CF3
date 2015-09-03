#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x4 = INT32_MIN;
uint32_t x9 = 194382U;
uint8_t x19 = 25U;
uint64_t x24 = UINT64_MAX;
uint32_t x29 = 3496U;
uint8_t x30 = 16U;
int16_t x31 = INT16_MIN;
uint16_t x36 = 96U;
int8_t x38 = 45;
volatile int64_t t8 = -1370346409376408343LL;
int64_t x47 = -1LL;
int8_t x48 = INT8_MIN;
int64_t t9 = 56LL;
uint8_t x53 = UINT8_MAX;
int64_t x54 = INT64_MIN;
volatile int32_t x55 = INT32_MIN;
uint16_t x58 = 0U;
volatile int8_t x64 = -1;
uint64_t x71 = 103560646LLU;
static int32_t x74 = INT32_MIN;
int8_t x77 = -16;
uint8_t x81 = 1U;
int64_t t19 = 604491039668904127LL;
uint32_t x89 = 674775U;
uint8_t x91 = 2U;
int16_t x96 = -66;
uint64_t x100 = 417756245399345LLU;
volatile int64_t t24 = 114612503126LL;
int8_t x120 = -1;
int64_t t26 = 230377796394LL;
int64_t x129 = INT64_MIN;
int16_t x131 = -108;
volatile uint64_t t29 = 3LLU;
int16_t x135 = INT16_MAX;
volatile uint32_t t32 = 204U;
uint32_t x152 = UINT32_MAX;
static uint32_t t34 = 157352830U;
int64_t x157 = -1LL;
uint8_t x158 = 88U;
int32_t x159 = -1;
int64_t t39 = -6036580038LL;
static int32_t x179 = INT32_MIN;
int32_t x182 = -9;
int32_t x186 = INT32_MIN;
int16_t x191 = INT16_MIN;
uint32_t t44 = 39809430U;
int8_t x197 = -1;
static uint32_t x199 = 479264906U;
int32_t x203 = INT32_MIN;
int32_t x210 = -4077329;
int32_t x212 = -1;
static int64_t t52 = -742340398369267LL;
static uint64_t t53 = 53240775168398LLU;
uint16_t x231 = 29U;
static int8_t x237 = 0;
volatile int64_t t56 = 1022212919183LL;
volatile uint32_t x248 = UINT32_MAX;
uint64_t t58 = 7LLU;
uint32_t x250 = 4061016U;
int64_t x254 = INT64_MAX;
uint64_t x256 = 5738342LLU;
int8_t x257 = INT8_MIN;
uint32_t x258 = UINT32_MAX;
int32_t x260 = -39176;
int64_t t62 = 4017LL;
uint64_t x272 = 68337533829705LLU;
int64_t x273 = INT64_MAX;
int32_t x287 = INT32_MIN;
static uint32_t x294 = UINT32_MAX;
static int8_t x299 = INT8_MIN;
uint8_t x300 = UINT8_MAX;
volatile int32_t x303 = INT32_MIN;
volatile int64_t t72 = 1156LL;
int64_t t73 = 555639141LL;
int8_t x310 = -20;
int32_t t74 = 44974576;
volatile int8_t x315 = -1;
static int64_t x316 = -1LL;
static uint64_t x317 = 3286009842LLU;
int16_t x322 = INT16_MAX;
volatile uint64_t x325 = 4029277329494077LLU;
volatile uint8_t x327 = 4U;
int16_t x337 = 1;
uint32_t x338 = UINT32_MAX;
int32_t x347 = -1;
int32_t x351 = INT32_MIN;
int64_t x353 = 168LL;
uint64_t x355 = UINT64_MAX;
int16_t x360 = INT16_MAX;
static int8_t x365 = INT8_MAX;
int8_t x371 = -1;
int64_t x372 = -1LL;
int16_t x376 = -303;
int8_t x377 = INT8_MIN;
int16_t x381 = INT16_MAX;
static int8_t x396 = 0;
int64_t t95 = -440855327555895LL;
int16_t x401 = INT16_MAX;
int32_t x402 = INT32_MIN;
int32_t x406 = INT32_MAX;
static uint32_t t98 = 1703266389U;


void f0(void) {
	int64_t x1 = INT64_MIN;
	uint32_t x2 = 2026462U;
	static volatile int64_t x3 = INT64_MAX;
	static volatile int64_t t0 = -2LL;

	t0 = ((x1/(x2|x3))*x4);

	if (t0 != 2147483648LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	volatile uint32_t x6 = 1U;
	static uint64_t x7 = UINT64_MAX;
	int8_t x8 = INT8_MIN;
	static uint64_t t1 = 184577465675427LLU;

	t1 = ((x5/(x6|x7))*x8);

	if (t1 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x10 = 874617563615LLU;
	int16_t x11 = -1;
	volatile uint32_t x12 = UINT32_MAX;
	static uint64_t t2 = 365054851LLU;

	t2 = ((x9/(x10|x11))*x12);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = 75U;
	int8_t x18 = INT8_MAX;
	static uint8_t x20 = 0U;
	int32_t t3 = 88;

	t3 = ((x17/(x18|x19))*x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x21 = UINT16_MAX;
	int8_t x22 = 7;
	volatile int8_t x23 = -4;
	uint64_t t4 = 5760LLU;

	t4 = ((x21/(x22|x23))*x24);

	if (t4 != 65535LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int16_t x25 = -1135;
	volatile int32_t x26 = 116954475;
	int32_t x27 = 28750;
	int16_t x28 = INT16_MIN;
	int32_t t5 = 2848288;

	t5 = ((x25/(x26|x27))*x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x32 = -872397226;
	static volatile uint32_t t6 = 1886U;

	t6 = ((x29/(x30|x31))*x32);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = -3408781;
	int32_t x34 = INT32_MIN;
	uint8_t x35 = UINT8_MAX;
	int32_t t7 = -801;

	t7 = ((x33/(x34|x35))*x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x37 = -170778;
	int32_t x39 = INT32_MIN;
	static int64_t x40 = -112LL;

	t8 = ((x37/(x38|x39))*x40);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = 914;
	int64_t x46 = INT64_MIN;

	t9 = ((x45/(x46|x47))*x48);

	if (t9 != 116992LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x49 = INT64_MAX;
	uint64_t x50 = UINT64_MAX;
	static int16_t x51 = -1;
	static int64_t x52 = INT64_MIN;
	uint64_t t10 = 4264855489LLU;

	t10 = ((x49/(x50|x51))*x52);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint32_t x56 = 61U;
	int64_t t11 = 3860801347266340243LL;

	t11 = ((x53/(x54|x55))*x56);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int32_t x57 = INT32_MAX;
	static uint64_t x59 = 165953248575LLU;
	static uint64_t x60 = 249516143401LLU;
	volatile uint64_t t12 = 1022002LLU;

	t12 = ((x57/(x58|x59))*x60);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x61 = UINT64_MAX;
	volatile int64_t x62 = -968673427735778195LL;
	int64_t x63 = INT64_MIN;
	uint64_t t13 = UINT64_MAX;

	t13 = ((x61/(x62|x63))*x64);

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x65 = INT16_MAX;
	int16_t x66 = INT16_MIN;
	volatile int64_t x67 = -2087979205LL;
	int32_t x68 = INT32_MIN;
	volatile int64_t t14 = 746078971LL;

	t14 = ((x65/(x66|x67))*x68);

	if (t14 != 30064771072LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = INT8_MAX;
	static int16_t x70 = INT16_MIN;
	volatile int16_t x72 = -1;
	uint64_t t15 = 1535583276477558LLU;

	t15 = ((x69/(x70|x71))*x72);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x73 = 8671889565LL;
	static int8_t x75 = -1;
	int32_t x76 = -111;
	int64_t t16 = 1583393780133242LL;

	t16 = ((x73/(x74|x75))*x76);

	if (t16 != 962579741715LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x78 = 64008LL;
	static int32_t x79 = -1;
	int16_t x80 = -1;
	volatile int64_t t17 = -2871129268691527LL;

	t17 = ((x77/(x78|x79))*x80);

	if (t17 != -16LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x82 = 46U;
	static volatile int16_t x83 = -1;
	volatile int8_t x84 = INT8_MIN;
	volatile int32_t t18 = 1;

	t18 = ((x81/(x82|x83))*x84);

	if (t18 != 128) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x85 = 1;
	int16_t x86 = 856;
	volatile int64_t x87 = INT64_MIN;
	static volatile uint8_t x88 = 28U;

	t19 = ((x85/(x86|x87))*x88);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x90 = -1;
	uint64_t x92 = UINT64_MAX;
	volatile uint64_t t20 = 315790LLU;

	t20 = ((x89/(x90|x91))*x92);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x93 = INT64_MAX;
	static int32_t x94 = INT32_MAX;
	static uint64_t x95 = 28970745LLU;
	uint64_t t21 = 93982728097593LLU;

	t21 = ((x93/(x94|x95))*x96);

	if (t21 != 18446743790241709948LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x97 = 425U;
	volatile uint32_t x98 = UINT32_MAX;
	int16_t x99 = 389;
	volatile uint64_t t22 = 52002183278011LLU;

	t22 = ((x97/(x98|x99))*x100);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x105 = INT64_MAX;
	int8_t x106 = 1;
	volatile uint32_t x107 = UINT32_MAX;
	int8_t x108 = 11;
	volatile int64_t t23 = -49118110LL;

	t23 = ((x105/(x106|x107))*x108);

	if (t23 != 23622320128LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x109 = -1950;
	volatile int64_t x110 = -6140659276380LL;
	int32_t x111 = INT32_MAX;
	int8_t x112 = -1;

	t24 = ((x109/(x110|x111))*x112);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x113 = -1;
	int64_t x114 = 2270047014LL;
	uint8_t x115 = 0U;
	int64_t x116 = INT64_MIN;
	static int64_t t25 = -1345099620143228LL;

	t25 = ((x113/(x114|x115))*x116);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x117 = 16166007;
	int64_t x118 = -1LL;
	int8_t x119 = 1;

	t26 = ((x117/(x118|x119))*x120);

	if (t26 != 16166007LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x121 = -106571849670436LL;
	uint8_t x122 = 1U;
	uint64_t x123 = UINT64_MAX;
	volatile int16_t x124 = INT16_MIN;
	volatile uint64_t t27 = 47LLU;

	t27 = ((x121/(x122|x123))*x124);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x125 = -1765;
	int32_t x126 = INT32_MIN;
	uint64_t x127 = UINT64_MAX;
	uint32_t x128 = UINT32_MAX;
	volatile uint64_t t28 = 126302955LLU;

	t28 = ((x125/(x126|x127))*x128);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x130 = 41329418591LLU;
	int8_t x132 = -1;

	t29 = ((x129/(x130|x131))*x132);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x133 = INT32_MIN;
	volatile int64_t x134 = 240973721943063LL;
	static uint8_t x136 = 0U;
	static int64_t t30 = 571822LL;

	t30 = ((x133/(x134|x135))*x136);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x137 = 51U;
	int16_t x138 = INT16_MIN;
	volatile int32_t x139 = INT32_MIN;
	static int64_t x140 = INT64_MIN;
	volatile int64_t t31 = -19348LL;

	t31 = ((x137/(x138|x139))*x140);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x141 = INT32_MAX;
	uint32_t x142 = 373U;
	static int8_t x143 = INT8_MIN;
	int8_t x144 = 0;

	t32 = ((x141/(x142|x143))*x144);

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint16_t x145 = 2U;
	uint64_t x146 = 8407LLU;
	volatile uint64_t x147 = UINT64_MAX;
	uint8_t x148 = 3U;
	uint64_t t33 = 398072730920LLU;

	t33 = ((x145/(x146|x147))*x148);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x149 = 96706U;
	static uint8_t x150 = 0U;
	uint8_t x151 = 10U;

	t34 = ((x149/(x150|x151))*x152);

	if (t34 != 4294957626U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x153 = -1;
	uint16_t x154 = 1U;
	uint16_t x155 = UINT16_MAX;
	int64_t x156 = 5239LL;
	volatile int64_t t35 = 1659099880LL;

	t35 = ((x153/(x154|x155))*x156);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x160 = 15;
	int64_t t36 = 56933507916991LL;

	t36 = ((x157/(x158|x159))*x160);

	if (t36 != 15LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x161 = INT16_MIN;
	int16_t x162 = -98;
	int32_t x163 = -3232;
	uint16_t x164 = 1U;
	int32_t t37 = -11084821;

	t37 = ((x161/(x162|x163))*x164);

	if (t37 != 16384) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x165 = 1293363U;
	int64_t x166 = -4054LL;
	int16_t x167 = -3;
	int32_t x168 = -1;
	static volatile int64_t t38 = -4184145173604513LL;

	t38 = ((x165/(x166|x167))*x168);

	if (t38 != 1293363LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x169 = -6215LL;
	int16_t x170 = INT16_MIN;
	int8_t x171 = INT8_MIN;
	static int8_t x172 = -1;

	t39 = ((x169/(x170|x171))*x172);

	if (t39 != -48LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x173 = 556044197LLU;
	static volatile int32_t x174 = INT32_MAX;
	volatile uint16_t x175 = UINT16_MAX;
	int32_t x176 = INT32_MIN;
	static volatile uint64_t t40 = 57511LLU;

	t40 = ((x173/(x174|x175))*x176);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x177 = 5;
	uint16_t x178 = 468U;
	volatile int8_t x180 = -1;
	volatile int32_t t41 = -7;

	t41 = ((x177/(x178|x179))*x180);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x181 = INT16_MIN;
	static int16_t x183 = INT16_MIN;
	uint8_t x184 = 1U;
	int32_t t42 = 75042;

	t42 = ((x181/(x182|x183))*x184);

	if (t42 != 3640) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x185 = INT8_MIN;
	volatile int64_t x187 = -175430750185361LL;
	static int8_t x188 = INT8_MIN;
	volatile int64_t t43 = 1LL;

	t43 = ((x185/(x186|x187))*x188);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x189 = UINT32_MAX;
	static int32_t x190 = INT32_MAX;
	int8_t x192 = INT8_MIN;

	t44 = ((x189/(x190|x191))*x192);

	if (t44 != 4294967168U) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x193 = 1U;
	int32_t x194 = INT32_MIN;
	uint8_t x195 = 8U;
	static int32_t x196 = -60;
	volatile int32_t t45 = -3201;

	t45 = ((x193/(x194|x195))*x196);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x198 = INT64_MIN;
	uint32_t x200 = UINT32_MAX;
	volatile int64_t t46 = -12461272586361LL;

	t46 = ((x197/(x198|x199))*x200);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x201 = 1847;
	int16_t x202 = -1;
	volatile int8_t x204 = INT8_MIN;
	volatile int32_t t47 = -1455322;

	t47 = ((x201/(x202|x203))*x204);

	if (t47 != 236416) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x205 = 53U;
	int8_t x206 = INT8_MIN;
	int16_t x207 = INT16_MIN;
	volatile int64_t x208 = INT64_MIN;
	volatile int64_t t48 = -134439171LL;

	t48 = ((x205/(x206|x207))*x208);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x209 = INT16_MIN;
	uint32_t x211 = UINT32_MAX;
	static volatile uint32_t t49 = 169U;

	t49 = ((x209/(x210|x211))*x212);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x213 = -1LL;
	static int8_t x214 = -61;
	uint32_t x215 = 233U;
	uint64_t x216 = 1048144174351091LLU;
	static volatile uint64_t t50 = 57424212857573819LLU;

	t50 = ((x213/(x214|x215))*x216);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x217 = 37LLU;
	int16_t x218 = -1;
	volatile int16_t x219 = 0;
	int64_t x220 = INT64_MIN;
	volatile uint64_t t51 = 1422148998440833123LLU;

	t51 = ((x217/(x218|x219))*x220);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x221 = INT32_MAX;
	int32_t x222 = INT32_MIN;
	static uint16_t x223 = 1U;
	int64_t x224 = INT64_MAX;

	t52 = ((x221/(x222|x223))*x224);

	if (t52 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x225 = INT8_MAX;
	uint64_t x226 = 4LLU;
	int8_t x227 = -3;
	int16_t x228 = -1;

	t53 = ((x225/(x226|x227))*x228);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x229 = 58218853LLU;
	int32_t x230 = -1;
	int16_t x232 = INT16_MIN;
	static uint64_t t54 = 5136731498LLU;

	t54 = ((x229/(x230|x231))*x232);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x233 = 105U;
	volatile int32_t x234 = -10518473;
	static uint64_t x235 = 48496318LLU;
	int8_t x236 = INT8_MIN;
	static uint64_t t55 = 1431803385757LLU;

	t55 = ((x233/(x234|x235))*x236);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x238 = INT64_MAX;
	volatile int64_t x239 = INT64_MAX;
	uint16_t x240 = 346U;

	t56 = ((x237/(x238|x239))*x240);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x241 = 1936;
	int32_t x242 = 58959514;
	volatile int16_t x243 = INT16_MAX;
	static int8_t x244 = INT8_MIN;
	int32_t t57 = -651;

	t57 = ((x241/(x242|x243))*x244);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x245 = -1LL;
	static int8_t x246 = -1;
	static uint64_t x247 = 2LLU;

	t58 = ((x245/(x246|x247))*x248);

	if (t58 != 4294967295LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint64_t x249 = 48628272324405LLU;
	uint8_t x251 = 3U;
	static int8_t x252 = -1;
	volatile uint64_t t59 = 3549604685286758LLU;

	t59 = ((x249/(x250|x251))*x252);

	if (t59 != 18446744073697577215LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x253 = INT8_MIN;
	static uint32_t x255 = 24U;
	uint64_t t60 = 0LLU;

	t60 = ((x253/(x254|x255))*x256);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x259 = 2;
	uint32_t t61 = 27U;

	t61 = ((x257/(x258|x259))*x260);

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x261 = -56;
	uint16_t x262 = UINT16_MAX;
	int64_t x263 = INT64_MIN;
	int64_t x264 = INT64_MAX;

	t62 = ((x261/(x262|x263))*x264);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x265 = 3U;
	volatile int32_t x266 = 3648;
	volatile uint64_t x267 = UINT64_MAX;
	static uint64_t x268 = 10637LLU;
	uint64_t t63 = 31328922283133445LLU;

	t63 = ((x265/(x266|x267))*x268);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x269 = INT32_MAX;
	volatile int32_t x270 = INT32_MIN;
	volatile int16_t x271 = -1;
	uint64_t t64 = 276642578537143861LLU;

	t64 = ((x269/(x270|x271))*x272);

	if (t64 != 8559474832422322761LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x274 = INT64_MIN;
	int32_t x275 = 5654;
	uint64_t x276 = 1861314725LLU;
	uint64_t t65 = 559802612571963224LLU;

	t65 = ((x273/(x274|x275))*x276);

	if (t65 != 18446744071848236891LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x277 = -13;
	static volatile uint32_t x278 = UINT32_MAX;
	volatile uint64_t x279 = 212158928LLU;
	uint16_t x280 = 30U;
	uint64_t t66 = 719702928730098514LLU;

	t66 = ((x277/(x278|x279))*x280);

	if (t66 != 128849018880LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x281 = INT8_MIN;
	int64_t x282 = 123515LL;
	int64_t x283 = -1LL;
	uint16_t x284 = 501U;
	static volatile int64_t t67 = -43400LL;

	t67 = ((x281/(x282|x283))*x284);

	if (t67 != 64128LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x285 = UINT16_MAX;
	static uint32_t x286 = UINT32_MAX;
	int32_t x288 = -6742054;
	volatile uint32_t t68 = 713336U;

	t68 = ((x285/(x286|x287))*x288);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x289 = 5859U;
	volatile int32_t x290 = INT32_MIN;
	int64_t x291 = INT64_MAX;
	int8_t x292 = INT8_MIN;
	volatile int64_t t69 = 9483701364LL;

	t69 = ((x289/(x290|x291))*x292);

	if (t69 != 749952LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x293 = INT64_MIN;
	int32_t x295 = 415125895;
	int16_t x296 = INT16_MIN;
	volatile int64_t t70 = 628758629201964322LL;

	t70 = ((x293/(x294|x295))*x296);

	if (t70 != 70368744177664LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x297 = UINT64_MAX;
	volatile uint16_t x298 = 2U;
	volatile uint64_t t71 = 362485202610663196LLU;

	t71 = ((x297/(x298|x299))*x300);

	if (t71 != 255LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x301 = UINT32_MAX;
	volatile int64_t x302 = 12605700756LL;
	int32_t x304 = -3;

	t72 = ((x301/(x302|x303))*x304);

	if (t72 != 45LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x305 = INT32_MIN;
	int8_t x306 = INT8_MIN;
	volatile int64_t x307 = -45229638421378LL;
	uint32_t x308 = 3255U;

	t73 = ((x305/(x306|x307))*x308);

	if (t73 != 3495029637120LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x309 = INT8_MAX;
	volatile int16_t x311 = INT16_MAX;
	int16_t x312 = INT16_MAX;

	t74 = ((x309/(x310|x311))*x312);

	if (t74 != -4161409) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x313 = -1;
	int64_t x314 = INT64_MIN;
	int64_t t75 = -1LL;

	t75 = ((x313/(x314|x315))*x316);

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint16_t x318 = UINT16_MAX;
	uint8_t x319 = 1U;
	uint16_t x320 = UINT16_MAX;
	volatile uint64_t t76 = 1LLU;

	t76 = ((x317/(x318|x319))*x320);

	if (t76 != 3285990435LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x321 = -29;
	uint64_t x323 = 2LLU;
	volatile uint32_t x324 = UINT32_MAX;
	uint64_t t77 = 8851634356111526LLU;

	t77 = ((x321/(x322|x323))*x324);

	if (t77 != 1688897104379889LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x326 = INT32_MAX;
	uint32_t x328 = 955617726U;
	volatile uint64_t t78 = 122492LLU;

	t78 = ((x325/(x326|x327))*x328);

	if (t78 != 1793004515703828LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x329 = 1;
	static int16_t x330 = -1;
	volatile uint64_t x331 = 2109LLU;
	uint64_t x332 = 29193994992LLU;
	volatile uint64_t t79 = 57667814LLU;

	t79 = ((x329/(x330|x331))*x332);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int64_t x333 = INT64_MAX;
	int16_t x334 = INT16_MIN;
	int64_t x335 = 843679LL;
	int8_t x336 = 0;
	static int64_t t80 = -105916LL;

	t80 = ((x333/(x334|x335))*x336);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x339 = INT64_MIN;
	volatile uint16_t x340 = 99U;
	volatile int64_t t81 = -332427932154608775LL;

	t81 = ((x337/(x338|x339))*x340);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x341 = -1;
	uint32_t x342 = UINT32_MAX;
	static int64_t x343 = -1LL;
	uint16_t x344 = 905U;
	int64_t t82 = -3393163933877449LL;

	t82 = ((x341/(x342|x343))*x344);

	if (t82 != 905LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x345 = 74647497511LL;
	int16_t x346 = -1;
	uint32_t x348 = 993171U;
	int64_t t83 = 15779456094526399LL;

	t83 = ((x345/(x346|x347))*x348);

	if (t83 != -74137729750497381LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x349 = 0;
	int8_t x350 = 24;
	volatile uint32_t x352 = 1487482864U;
	volatile uint32_t t84 = 344U;

	t84 = ((x349/(x350|x351))*x352);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x354 = INT64_MIN;
	int32_t x356 = INT32_MIN;
	uint64_t t85 = 11640905876LLU;

	t85 = ((x353/(x354|x355))*x356);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x357 = 3U;
	uint8_t x358 = 1U;
	int32_t x359 = -7;
	volatile int32_t t86 = 3;

	t86 = ((x357/(x358|x359))*x360);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x361 = -1;
	uint16_t x362 = UINT16_MAX;
	int16_t x363 = INT16_MAX;
	int32_t x364 = -217777;
	volatile int32_t t87 = -1595;

	t87 = ((x361/(x362|x363))*x364);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x366 = 2626775948LLU;
	uint8_t x367 = 28U;
	uint16_t x368 = 10U;
	volatile uint64_t t88 = 453495116754627LLU;

	t88 = ((x365/(x366|x367))*x368);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x369 = 14U;
	uint8_t x370 = 6U;
	int64_t t89 = 39341LL;

	t89 = ((x369/(x370|x371))*x372);

	if (t89 != 14LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x373 = -145;
	volatile int8_t x374 = -1;
	static uint8_t x375 = 6U;
	int32_t t90 = 7;

	t90 = ((x373/(x374|x375))*x376);

	if (t90 != -43935) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x378 = 13027;
	static int8_t x379 = INT8_MIN;
	static uint16_t x380 = 429U;
	static int32_t t91 = -16159519;

	t91 = ((x377/(x378|x379))*x380);

	if (t91 != 1716) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x382 = INT64_MAX;
	static uint8_t x383 = 42U;
	uint32_t x384 = 48888U;
	static int64_t t92 = -109528281339561LL;

	t92 = ((x381/(x382|x383))*x384);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x385 = INT8_MIN;
	volatile int32_t x386 = INT32_MIN;
	uint64_t x387 = UINT64_MAX;
	uint32_t x388 = 101869U;
	volatile uint64_t t93 = 772399LLU;

	t93 = ((x385/(x386|x387))*x388);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x389 = UINT32_MAX;
	int64_t x390 = 1243430LL;
	static int64_t x391 = 3010LL;
	volatile int64_t x392 = -1358897LL;
	static volatile int64_t t94 = -60384LL;

	t94 = ((x389/(x390|x391))*x392);

	if (t94 != -4690912444LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x393 = INT16_MIN;
	int64_t x394 = -67510859421511LL;
	static int64_t x395 = 1LL;

	t95 = ((x393/(x394|x395))*x396);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x397 = UINT8_MAX;
	uint8_t x398 = UINT8_MAX;
	uint16_t x399 = 1011U;
	uint16_t x400 = UINT16_MAX;
	volatile int32_t t96 = -241162100;

	t96 = ((x397/(x398|x399))*x400);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int64_t x403 = INT64_MIN;
	static int16_t x404 = -1;
	volatile int64_t t97 = 67685346688184791LL;

	t97 = ((x401/(x402|x403))*x404);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x405 = INT32_MIN;
	volatile uint32_t x407 = 119232U;
	int8_t x408 = INT8_MAX;

	t98 = ((x405/(x406|x407))*x408);

	if (t98 != 127U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x409 = INT32_MIN;
	int32_t x410 = INT32_MIN;
	int32_t x411 = INT32_MIN;
	static uint64_t x412 = 3635108LLU;
	uint64_t t99 = 406810055453LLU;

	t99 = ((x409/(x410|x411))*x412);

	if (t99 != 3635108LLU) { NG(); } else { ; }
	
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

