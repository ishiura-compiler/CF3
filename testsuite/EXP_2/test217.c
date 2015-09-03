#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = INT8_MIN;
int16_t x3 = INT16_MIN;
static int64_t x10 = -19306LL;
volatile uint16_t x23 = 62U;
int64_t x24 = INT64_MIN;
volatile int16_t x33 = INT16_MIN;
int8_t x35 = INT8_MAX;
uint64_t x43 = 25LLU;
static uint16_t x52 = 255U;
static int32_t x57 = -1;
int16_t x61 = INT16_MAX;
int64_t x64 = 5398844485344301LL;
volatile int32_t t9 = 1;
int32_t x69 = INT32_MIN;
volatile int8_t x77 = INT8_MAX;
static volatile uint8_t x78 = 2U;
int16_t x83 = -1;
volatile int32_t t16 = -1;
int32_t x93 = INT32_MIN;
int64_t x99 = -1LL;
int64_t x101 = -1LL;
uint16_t x103 = 6145U;
int32_t x104 = 100249;
static int16_t x105 = INT16_MIN;
volatile int32_t x114 = -1;
volatile uint32_t x126 = UINT32_MAX;
uint64_t x128 = 2133809756401688469LLU;
int64_t x129 = INT64_MAX;
static int16_t x130 = -2;
int8_t x132 = 12;
int32_t t23 = 339639;
int8_t x133 = INT8_MAX;
static uint32_t x134 = 29900U;
int8_t x135 = INT8_MIN;
uint16_t x136 = 34U;
volatile int32_t t25 = -816964;
int8_t x149 = INT8_MAX;
int64_t x157 = -1LL;
int32_t x166 = INT32_MIN;
volatile uint32_t x167 = 239181661U;
volatile int8_t x168 = INT8_MIN;
int8_t x175 = INT8_MIN;
static int64_t x182 = 615517LL;
volatile uint16_t x188 = 747U;
volatile int32_t t34 = -30;
static uint32_t x197 = 13653176U;
int8_t x198 = INT8_MAX;
uint8_t x202 = UINT8_MAX;
volatile int32_t t38 = 3;
int32_t x220 = -1;
volatile int32_t t42 = 3702;
uint8_t x236 = UINT8_MAX;
int16_t x240 = -1;
uint8_t x258 = 38U;
int16_t x264 = -1;
int16_t x266 = INT16_MAX;
volatile uint8_t x271 = UINT8_MAX;
int32_t t52 = 28226185;
int16_t x278 = -947;
uint8_t x288 = 90U;
uint32_t x293 = 3733732U;
static uint8_t x296 = 6U;
int32_t t58 = 1;
uint32_t x299 = 690391880U;
int32_t x301 = -813602;
uint32_t x302 = 2207928U;
int32_t x305 = -1;
volatile int64_t x310 = INT64_MIN;
int64_t x317 = INT64_MIN;
int16_t x320 = INT16_MIN;
static int64_t x326 = -1LL;
uint64_t x327 = 13LLU;
int16_t x342 = -118;
int32_t t68 = 1;
int64_t x353 = INT64_MIN;
volatile uint32_t x362 = 64213113U;
volatile int32_t t72 = 3540732;
uint8_t x367 = 13U;
volatile int32_t t73 = 119178948;
int64_t x375 = 61373805LL;
int8_t x379 = INT8_MAX;
int64_t x388 = -1LL;
int32_t x398 = 38578731;
volatile int8_t x435 = 2;
uint16_t x445 = 6664U;
int16_t x455 = INT16_MIN;
static int64_t x462 = -1LL;
int8_t x466 = 5;
int32_t x469 = INT32_MIN;
int32_t x471 = 0;
int8_t x473 = -3;
uint16_t x476 = 7U;
volatile int32_t t98 = 1113321;
int64_t x493 = 502458133253LL;


void f0(void) {
	int64_t x2 = -1LL;
	volatile int64_t x4 = 60810200184297340LL;
	int32_t t0 = 89801;

	t0 = ((x1/(x2-x3))<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x9 = UINT8_MAX;
	uint16_t x11 = 39U;
	int16_t x12 = INT16_MIN;
	volatile int32_t t1 = 1;

	t1 = ((x9/(x10-x11))<x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x17 = INT64_MAX;
	int16_t x18 = INT16_MAX;
	int64_t x19 = 64459230LL;
	int64_t x20 = INT64_MIN;
	volatile int32_t t2 = 50185;

	t2 = ((x17/(x18-x19))<x20);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x21 = INT64_MAX;
	uint16_t x22 = 29U;
	static volatile int32_t t3 = -96614;

	t3 = ((x21/(x22-x23))<x24);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int64_t x25 = -1LL;
	uint32_t x26 = 106957628U;
	uint32_t x27 = UINT32_MAX;
	static int16_t x28 = -1;
	static int32_t t4 = -36536;

	t4 = ((x25/(x26-x27))<x28);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x34 = INT16_MIN;
	static int16_t x36 = -1;
	static volatile int32_t t5 = 0;

	t5 = ((x33/(x34-x35))<x36);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x41 = UINT32_MAX;
	uint64_t x42 = 1732251LLU;
	int8_t x44 = -1;
	volatile int32_t t6 = -5;

	t6 = ((x41/(x42-x43))<x44);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x49 = -3;
	int8_t x50 = INT8_MIN;
	int32_t x51 = 3186;
	volatile int32_t t7 = -1;

	t7 = ((x49/(x50-x51))<x52);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x58 = -5480680116924LL;
	int8_t x59 = 24;
	uint32_t x60 = UINT32_MAX;
	volatile int32_t t8 = 4709692;

	t8 = ((x57/(x58-x59))<x60);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x62 = INT16_MAX;
	int8_t x63 = INT8_MIN;

	t9 = ((x61/(x62-x63))<x64);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x65 = -21;
	volatile uint64_t x66 = UINT64_MAX;
	int32_t x67 = INT32_MIN;
	volatile uint8_t x68 = 0U;
	static int32_t t10 = -23;

	t10 = ((x65/(x66-x67))<x68);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x70 = UINT64_MAX;
	int8_t x71 = 0;
	volatile int32_t x72 = INT32_MIN;
	volatile int32_t t11 = -7657781;

	t11 = ((x69/(x70-x71))<x72);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x73 = UINT32_MAX;
	uint8_t x74 = UINT8_MAX;
	int8_t x75 = 14;
	uint32_t x76 = 0U;
	int32_t t12 = 51499;

	t12 = ((x73/(x74-x75))<x76);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x79 = 3;
	volatile int16_t x80 = INT16_MIN;
	int32_t t13 = -15;

	t13 = ((x77/(x78-x79))<x80);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x81 = INT64_MAX;
	int8_t x82 = INT8_MIN;
	static uint64_t x84 = 7048024912LLU;
	static volatile int32_t t14 = 21807;

	t14 = ((x81/(x82-x83))<x84);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x85 = -10;
	uint64_t x86 = 449LLU;
	static int8_t x87 = INT8_MAX;
	uint16_t x88 = UINT16_MAX;
	volatile int32_t t15 = -59717008;

	t15 = ((x85/(x86-x87))<x88);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x89 = 63U;
	static uint8_t x90 = 10U;
	int8_t x91 = INT8_MAX;
	static uint32_t x92 = 39U;

	t16 = ((x89/(x90-x91))<x92);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x94 = 76;
	static int64_t x95 = -1482489LL;
	static int64_t x96 = 68823201663LL;
	int32_t t17 = 0;

	t17 = ((x93/(x94-x95))<x96);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x97 = INT64_MAX;
	int16_t x98 = INT16_MIN;
	int8_t x100 = 0;
	volatile int32_t t18 = -9600742;

	t18 = ((x97/(x98-x99))<x100);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x102 = -1;
	static volatile int32_t t19 = -35982;

	t19 = ((x101/(x102-x103))<x104);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x106 = INT64_MIN;
	volatile int8_t x107 = INT8_MIN;
	volatile int8_t x108 = INT8_MIN;
	int32_t t20 = 0;

	t20 = ((x105/(x106-x107))<x108);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x113 = INT16_MIN;
	static uint8_t x115 = UINT8_MAX;
	volatile uint32_t x116 = 173U;
	static volatile int32_t t21 = -53;

	t21 = ((x113/(x114-x115))<x116);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x125 = UINT16_MAX;
	int16_t x127 = INT16_MIN;
	volatile int32_t t22 = 1447811;

	t22 = ((x125/(x126-x127))<x128);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x131 = INT64_MIN;

	t23 = ((x129/(x130-x131))<x132);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t t24 = 0;

	t24 = ((x133/(x134-x135))<x136);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x141 = INT8_MAX;
	uint64_t x142 = UINT64_MAX;
	int64_t x143 = INT64_MAX;
	uint32_t x144 = UINT32_MAX;

	t25 = ((x141/(x142-x143))<x144);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x145 = 1732514;
	uint32_t x146 = UINT32_MAX;
	uint64_t x147 = 39134621519887LLU;
	static int16_t x148 = INT16_MIN;
	static int32_t t26 = 14;

	t26 = ((x145/(x146-x147))<x148);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x150 = 61524078LLU;
	int64_t x151 = INT64_MIN;
	int8_t x152 = 1;
	volatile int32_t t27 = -310;

	t27 = ((x149/(x150-x151))<x152);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x153 = INT8_MAX;
	uint32_t x154 = UINT32_MAX;
	uint64_t x155 = 3086302170790140LLU;
	int64_t x156 = INT64_MIN;
	volatile int32_t t28 = 192680898;

	t28 = ((x153/(x154-x155))<x156);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x158 = -2752137842LL;
	uint64_t x159 = 171837113615LLU;
	int8_t x160 = -1;
	volatile int32_t t29 = -13;

	t29 = ((x157/(x158-x159))<x160);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x165 = -3;
	volatile int32_t t30 = -126595;

	t30 = ((x165/(x166-x167))<x168);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x169 = INT8_MIN;
	int16_t x170 = INT16_MAX;
	int8_t x171 = INT8_MAX;
	int8_t x172 = -4;
	volatile int32_t t31 = -1592;

	t31 = ((x169/(x170-x171))<x172);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x173 = INT32_MIN;
	static volatile int64_t x174 = 180008126LL;
	int64_t x176 = INT64_MIN;
	volatile int32_t t32 = 87413;

	t32 = ((x173/(x174-x175))<x176);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x181 = INT32_MIN;
	int16_t x183 = INT16_MAX;
	uint16_t x184 = 27544U;
	volatile int32_t t33 = -925;

	t33 = ((x181/(x182-x183))<x184);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x185 = INT16_MIN;
	static int8_t x186 = -1;
	static int32_t x187 = 1;

	t34 = ((x185/(x186-x187))<x188);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x189 = INT32_MIN;
	int8_t x190 = INT8_MIN;
	int16_t x191 = INT16_MAX;
	uint16_t x192 = UINT16_MAX;
	static volatile int32_t t35 = -59436633;

	t35 = ((x189/(x190-x191))<x192);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x199 = -1;
	int16_t x200 = INT16_MIN;
	static volatile int32_t t36 = 1957485;

	t36 = ((x197/(x198-x199))<x200);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x201 = UINT16_MAX;
	uint8_t x203 = 64U;
	int8_t x204 = -1;
	volatile int32_t t37 = 38250;

	t37 = ((x201/(x202-x203))<x204);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x209 = UINT16_MAX;
	int8_t x210 = INT8_MIN;
	static volatile int16_t x211 = -41;
	uint8_t x212 = 27U;

	t38 = ((x209/(x210-x211))<x212);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x213 = INT64_MIN;
	int64_t x214 = -1LL;
	static volatile uint8_t x215 = 7U;
	int16_t x216 = 75;
	volatile int32_t t39 = 327868325;

	t39 = ((x213/(x214-x215))<x216);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int32_t x217 = -424612021;
	uint32_t x218 = 13U;
	volatile uint8_t x219 = UINT8_MAX;
	int32_t t40 = -2240;

	t40 = ((x217/(x218-x219))<x220);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x221 = INT64_MIN;
	uint32_t x222 = 882413U;
	static volatile uint16_t x223 = 968U;
	int8_t x224 = -1;
	int32_t t41 = 966429569;

	t41 = ((x221/(x222-x223))<x224);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x225 = 105887815687841213LLU;
	static int16_t x226 = 1;
	static int16_t x227 = -6170;
	int8_t x228 = -1;

	t42 = ((x225/(x226-x227))<x228);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x229 = -25223490647499077LL;
	int64_t x230 = -1LL;
	volatile uint32_t x231 = UINT32_MAX;
	int16_t x232 = INT16_MAX;
	volatile int32_t t43 = -14047451;

	t43 = ((x229/(x230-x231))<x232);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x233 = -1;
	volatile int8_t x234 = 6;
	volatile int8_t x235 = -6;
	volatile int32_t t44 = -2001;

	t44 = ((x233/(x234-x235))<x236);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x237 = INT32_MIN;
	int64_t x238 = -69393321441LL;
	uint16_t x239 = 0U;
	volatile int32_t t45 = -1;

	t45 = ((x237/(x238-x239))<x240);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x241 = 698726U;
	int32_t x242 = 0;
	uint64_t x243 = 476796072LLU;
	volatile uint16_t x244 = UINT16_MAX;
	volatile int32_t t46 = -75677;

	t46 = ((x241/(x242-x243))<x244);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x245 = 3280LL;
	int32_t x246 = INT32_MIN;
	volatile int8_t x247 = -55;
	int64_t x248 = INT64_MAX;
	volatile int32_t t47 = -770903;

	t47 = ((x245/(x246-x247))<x248);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x249 = INT32_MIN;
	int8_t x250 = 1;
	static uint32_t x251 = 2015U;
	int32_t x252 = -608;
	int32_t t48 = 492228407;

	t48 = ((x249/(x250-x251))<x252);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x257 = -26725659422643LL;
	int16_t x259 = -1;
	volatile int8_t x260 = 1;
	static volatile int32_t t49 = -9968;

	t49 = ((x257/(x258-x259))<x260);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x261 = INT16_MAX;
	int32_t x262 = -8;
	int32_t x263 = INT32_MIN;
	int32_t t50 = 473496;

	t50 = ((x261/(x262-x263))<x264);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x265 = UINT64_MAX;
	int32_t x267 = INT32_MAX;
	int16_t x268 = INT16_MAX;
	int32_t t51 = 2450;

	t51 = ((x265/(x266-x267))<x268);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x269 = 127LL;
	uint32_t x270 = UINT32_MAX;
	int8_t x272 = INT8_MIN;

	t52 = ((x269/(x270-x271))<x272);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x273 = INT64_MAX;
	uint32_t x274 = 527U;
	int16_t x275 = INT16_MIN;
	static int32_t x276 = 77832;
	int32_t t53 = 4140;

	t53 = ((x273/(x274-x275))<x276);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x277 = INT64_MAX;
	uint64_t x279 = 201104LLU;
	uint64_t x280 = 508516437725LLU;
	int32_t t54 = -5448476;

	t54 = ((x277/(x278-x279))<x280);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x281 = UINT32_MAX;
	int32_t x282 = 1702704;
	static volatile int64_t x283 = INT64_MAX;
	uint8_t x284 = UINT8_MAX;
	volatile int32_t t55 = 6663308;

	t55 = ((x281/(x282-x283))<x284);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x285 = 7U;
	static uint32_t x286 = 15344U;
	uint64_t x287 = 483LLU;
	static volatile int32_t t56 = -1;

	t56 = ((x285/(x286-x287))<x288);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x289 = UINT64_MAX;
	static int16_t x290 = INT16_MIN;
	static uint16_t x291 = 142U;
	static int64_t x292 = INT64_MIN;
	int32_t t57 = 723;

	t57 = ((x289/(x290-x291))<x292);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x294 = 7U;
	int64_t x295 = INT64_MAX;

	t58 = ((x293/(x294-x295))<x296);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x297 = INT32_MAX;
	int16_t x298 = -1;
	uint64_t x300 = UINT64_MAX;
	int32_t t59 = 428310362;

	t59 = ((x297/(x298-x299))<x300);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x303 = INT64_MAX;
	int32_t x304 = INT32_MIN;
	volatile int32_t t60 = 1;

	t60 = ((x301/(x302-x303))<x304);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x306 = 3U;
	int16_t x307 = INT16_MIN;
	int16_t x308 = 0;
	static int32_t t61 = 1;

	t61 = ((x305/(x306-x307))<x308);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x309 = 3538188477543320LL;
	int32_t x311 = -16840339;
	volatile uint8_t x312 = 7U;
	volatile int32_t t62 = 305520;

	t62 = ((x309/(x310-x311))<x312);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x313 = INT16_MIN;
	int16_t x314 = INT16_MIN;
	int64_t x315 = -1LL;
	static int8_t x316 = INT8_MAX;
	int32_t t63 = -533566;

	t63 = ((x313/(x314-x315))<x316);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x318 = -1;
	uint16_t x319 = UINT16_MAX;
	volatile int32_t t64 = 5159935;

	t64 = ((x317/(x318-x319))<x320);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x325 = 11444LL;
	int64_t x328 = -1LL;
	int32_t t65 = 56283837;

	t65 = ((x325/(x326-x327))<x328);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x329 = 34U;
	static int8_t x330 = INT8_MAX;
	int16_t x331 = INT16_MAX;
	volatile uint32_t x332 = UINT32_MAX;
	static int32_t t66 = 73427;

	t66 = ((x329/(x330-x331))<x332);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x337 = INT16_MIN;
	static int8_t x338 = INT8_MIN;
	int64_t x339 = -1LL;
	int8_t x340 = INT8_MIN;
	int32_t t67 = -965;

	t67 = ((x337/(x338-x339))<x340);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x341 = UINT32_MAX;
	uint8_t x343 = 107U;
	int8_t x344 = INT8_MAX;

	t68 = ((x341/(x342-x343))<x344);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x345 = 515U;
	int32_t x346 = 278065673;
	static int16_t x347 = 1;
	uint32_t x348 = 2951U;
	static int32_t t69 = 33;

	t69 = ((x345/(x346-x347))<x348);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x354 = 17U;
	volatile uint8_t x355 = 0U;
	int8_t x356 = -1;
	volatile int32_t t70 = 98858376;

	t70 = ((x353/(x354-x355))<x356);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int64_t x357 = INT64_MIN;
	int32_t x358 = 7001011;
	static volatile uint16_t x359 = 31143U;
	int16_t x360 = INT16_MIN;
	volatile int32_t t71 = -1;

	t71 = ((x357/(x358-x359))<x360);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x361 = 5U;
	volatile int16_t x363 = -13;
	int64_t x364 = INT64_MIN;

	t72 = ((x361/(x362-x363))<x364);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x365 = UINT64_MAX;
	volatile int16_t x366 = INT16_MIN;
	static int32_t x368 = INT32_MAX;

	t73 = ((x365/(x366-x367))<x368);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x373 = 777LLU;
	static volatile int32_t x374 = -54;
	int32_t x376 = INT32_MIN;
	static int32_t t74 = 155489;

	t74 = ((x373/(x374-x375))<x376);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x377 = 56771487561981876LLU;
	int16_t x378 = 19;
	int64_t x380 = INT64_MIN;
	volatile int32_t t75 = 45;

	t75 = ((x377/(x378-x379))<x380);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x381 = INT32_MIN;
	static int64_t x382 = INT64_MIN;
	int16_t x383 = INT16_MIN;
	int16_t x384 = INT16_MIN;
	volatile int32_t t76 = 0;

	t76 = ((x381/(x382-x383))<x384);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x385 = 275241309989990LLU;
	uint16_t x386 = UINT16_MAX;
	int8_t x387 = -1;
	volatile int32_t t77 = 129209272;

	t77 = ((x385/(x386-x387))<x388);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x389 = INT32_MIN;
	int32_t x390 = -3;
	int64_t x391 = 685778532761LL;
	uint32_t x392 = 0U;
	int32_t t78 = -13236;

	t78 = ((x389/(x390-x391))<x392);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x393 = 15U;
	int64_t x394 = -1LL;
	int16_t x395 = INT16_MIN;
	uint64_t x396 = UINT64_MAX;
	int32_t t79 = -1;

	t79 = ((x393/(x394-x395))<x396);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x397 = INT16_MIN;
	uint32_t x399 = 12933U;
	volatile int32_t x400 = INT32_MIN;
	volatile int32_t t80 = -686575;

	t80 = ((x397/(x398-x399))<x400);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x405 = 260915LL;
	static uint16_t x406 = UINT16_MAX;
	int8_t x407 = -1;
	uint8_t x408 = 21U;
	int32_t t81 = 864618689;

	t81 = ((x405/(x406-x407))<x408);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x413 = -1;
	static int16_t x414 = -1;
	static int16_t x415 = 0;
	volatile uint8_t x416 = 1U;
	volatile int32_t t82 = 6686;

	t82 = ((x413/(x414-x415))<x416);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x417 = -1;
	int32_t x418 = INT32_MAX;
	uint64_t x419 = 0LLU;
	static volatile int64_t x420 = INT64_MIN;
	int32_t t83 = 65;

	t83 = ((x417/(x418-x419))<x420);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x429 = 20U;
	int16_t x430 = 295;
	int64_t x431 = 44725838335141LL;
	int64_t x432 = INT64_MAX;
	volatile int32_t t84 = -1870202;

	t84 = ((x429/(x430-x431))<x432);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x433 = INT32_MAX;
	static int16_t x434 = -310;
	int64_t x436 = 410960449946759727LL;
	int32_t t85 = -45435;

	t85 = ((x433/(x434-x435))<x436);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x441 = 1;
	volatile int64_t x442 = -1LL;
	int16_t x443 = INT16_MIN;
	uint8_t x444 = 1U;
	volatile int32_t t86 = -65207;

	t86 = ((x441/(x442-x443))<x444);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x446 = 2;
	uint16_t x447 = UINT16_MAX;
	int64_t x448 = 1469LL;
	int32_t t87 = 505354077;

	t87 = ((x445/(x446-x447))<x448);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x449 = UINT8_MAX;
	uint32_t x450 = 36053076U;
	volatile int32_t x451 = INT32_MIN;
	int8_t x452 = -4;
	volatile int32_t t88 = 79527;

	t88 = ((x449/(x450-x451))<x452);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x453 = INT64_MAX;
	int64_t x454 = -1LL;
	uint64_t x456 = UINT64_MAX;
	int32_t t89 = 1442992;

	t89 = ((x453/(x454-x455))<x456);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x457 = -1;
	int64_t x458 = -968040607597236LL;
	int64_t x459 = -19011809LL;
	static uint64_t x460 = UINT64_MAX;
	static int32_t t90 = 31;

	t90 = ((x457/(x458-x459))<x460);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x461 = INT64_MAX;
	int16_t x463 = -787;
	static uint8_t x464 = 50U;
	int32_t t91 = 0;

	t91 = ((x461/(x462-x463))<x464);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x465 = INT64_MAX;
	int16_t x467 = INT16_MIN;
	int8_t x468 = INT8_MIN;
	int32_t t92 = -14;

	t92 = ((x465/(x466-x467))<x468);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x470 = INT8_MAX;
	static int64_t x472 = INT64_MIN;
	int32_t t93 = -7;

	t93 = ((x469/(x470-x471))<x472);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x474 = -6070;
	uint64_t x475 = 313621156784590796LLU;
	int32_t t94 = -2652;

	t94 = ((x473/(x474-x475))<x476);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x477 = -48;
	static int32_t x478 = 334332093;
	volatile int16_t x479 = -1;
	int32_t x480 = INT32_MAX;
	int32_t t95 = 253900;

	t95 = ((x477/(x478-x479))<x480);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x481 = INT8_MIN;
	static int16_t x482 = INT16_MAX;
	uint16_t x483 = 6947U;
	int8_t x484 = INT8_MIN;
	volatile int32_t t96 = 30;

	t96 = ((x481/(x482-x483))<x484);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x485 = UINT16_MAX;
	uint8_t x486 = 10U;
	uint32_t x487 = UINT32_MAX;
	static int8_t x488 = INT8_MIN;
	volatile int32_t t97 = 21;

	t97 = ((x485/(x486-x487))<x488);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x489 = 12258U;
	static uint32_t x490 = UINT32_MAX;
	static volatile int32_t x491 = INT32_MAX;
	static int32_t x492 = 1666;

	t98 = ((x489/(x490-x491))<x492);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x494 = -53999;
	uint8_t x495 = UINT8_MAX;
	int16_t x496 = INT16_MAX;
	volatile int32_t t99 = -6072134;

	t99 = ((x493/(x494-x495))<x496);

	if (t99 != 1) { NG(); } else { ; }
	
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

