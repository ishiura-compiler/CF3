#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t0 = 47781685LL;
static uint32_t x16 = UINT32_MAX;
static uint32_t t2 = 5997450U;
volatile uint64_t t3 = 215693253230LLU;
int64_t x25 = -40869632027137LL;
int8_t x31 = 1;
uint64_t x34 = 11LLU;
uint32_t x49 = 759001934U;
int8_t x54 = -1;
volatile int16_t x63 = INT16_MAX;
static uint16_t x71 = 12605U;
int32_t x75 = -1;
static volatile int32_t x138 = INT32_MIN;
int16_t x146 = -1977;
uint8_t x157 = UINT8_MAX;
volatile int64_t t25 = 262115826096085LL;
volatile int8_t x167 = -1;
static int8_t x182 = INT8_MIN;
int8_t x191 = -1;
int32_t t31 = -109045;
int64_t x193 = -1LL;
volatile int16_t x194 = INT16_MIN;
volatile int64_t x201 = -28098712018028LL;
volatile int16_t x204 = INT16_MIN;
static volatile int64_t t34 = 3240846521LL;
volatile uint32_t t35 = 53680236U;
uint32_t x218 = 8298032U;
uint32_t x220 = 270083U;
volatile uint64_t x224 = 48788274LLU;
volatile int32_t t38 = -892275;
int32_t x234 = -30;
static int32_t x235 = -82;
static int8_t x242 = INT8_MAX;
int16_t x246 = -8;
volatile uint8_t x247 = UINT8_MAX;
uint8_t x248 = 71U;
static volatile int32_t t42 = -126227;
uint8_t x254 = 0U;
volatile uint32_t t43 = 14643400U;
int8_t x257 = 0;
uint32_t x258 = 20045599U;
uint32_t x263 = UINT32_MAX;
volatile int32_t x265 = -1;
volatile uint64_t t46 = 42410984497629458LLU;
static uint64_t x272 = UINT64_MAX;
uint32_t x275 = UINT32_MAX;
volatile int32_t t49 = 42801218;
uint8_t x293 = 14U;
uint64_t x326 = 1571876431LLU;
uint16_t x327 = UINT16_MAX;
volatile int64_t t57 = -790349LL;
int64_t x380 = -1LL;
static uint8_t x384 = UINT8_MAX;
uint64_t x387 = UINT64_MAX;
uint64_t t62 = 22046LLU;
static int64_t x402 = -1LL;
uint8_t x410 = 10U;
int64_t x412 = -414LL;
int32_t x416 = 25;
uint16_t x418 = 5053U;
int8_t x419 = INT8_MIN;
uint16_t x430 = 1U;
uint64_t x437 = 1219712780986064531LLU;
uint8_t x444 = UINT8_MAX;
int32_t t71 = 445;
static int32_t x449 = INT32_MAX;
volatile int32_t t75 = -490081427;
uint16_t x462 = 0U;
uint32_t x463 = UINT32_MAX;
int32_t x465 = -172201;
uint16_t x467 = UINT16_MAX;
volatile int8_t x469 = 16;
uint8_t x472 = 8U;
int32_t x482 = INT32_MAX;
int8_t x483 = 4;
static int16_t x485 = INT16_MIN;
volatile uint16_t x486 = 11U;
static int32_t x494 = -408353;
uint8_t x496 = UINT8_MAX;
int16_t x508 = INT16_MIN;
uint16_t x516 = UINT16_MAX;
uint64_t x517 = 43LLU;
volatile uint64_t t87 = 1538522056782LLU;
int16_t x522 = -1;
uint16_t x525 = 23271U;
uint8_t x527 = 2U;
volatile int8_t x528 = 8;
static volatile uint64_t t89 = 12580948425635089LLU;
int32_t x539 = -31981387;
int16_t x540 = -1;
int16_t x542 = -852;
volatile int64_t x543 = INT64_MIN;
int8_t x553 = -43;
int16_t x554 = INT16_MAX;
static int32_t x561 = INT32_MIN;
uint64_t t98 = 352673807859408278LLU;
uint64_t x573 = UINT64_MAX;
int32_t x574 = INT32_MIN;
int64_t x576 = -2238361997769983588LL;


void f0(void) {
	int64_t x1 = 32669325195567LL;
	int64_t x2 = INT64_MIN;
	static int16_t x3 = -1;
	uint32_t x4 = 16286U;

	t0 = ((x1&(x2-x3))*x4);

	if (t0 != 16286LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 1;
	uint16_t x6 = UINT16_MAX;
	static uint8_t x7 = 98U;
	volatile uint8_t x8 = 16U;
	static int32_t t1 = 1786573;

	t1 = ((x5&(x6-x7))*x8);

	if (t1 != 16) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x13 = -199109827;
	uint8_t x14 = 45U;
	static int16_t x15 = INT16_MIN;

	t2 = ((x13&(x14-x15))*x16);

	if (t2 != 4294934483U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x17 = INT8_MIN;
	uint8_t x18 = 7U;
	int16_t x19 = 213;
	uint64_t x20 = UINT64_MAX;

	t3 = ((x17&(x18-x19))*x20);

	if (t3 != 256LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = -1;
	int64_t x22 = -1173410587975416LL;
	volatile uint64_t x23 = 1363712671457408309LLU;
	static int16_t x24 = -162;
	uint64_t t4 = 1266589536668063689LLU;

	t4 = ((x21&(x22-x23))*x24);

	if (t4 != 18197360480547095674LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x26 = 3147LLU;
	volatile int64_t x27 = INT64_MIN;
	int8_t x28 = INT8_MIN;
	volatile uint64_t t5 = 9621528252485996LLU;

	t5 = ((x25&(x26-x27))*x28);

	if (t5 != 18446744073709410944LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x29 = INT8_MIN;
	volatile int32_t x30 = -1;
	uint32_t x32 = UINT32_MAX;
	uint32_t t6 = 1U;

	t6 = ((x29&(x30-x31))*x32);

	if (t6 != 128U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = -1;
	int64_t x35 = -1LL;
	volatile uint64_t x36 = 32613445LLU;
	uint64_t t7 = 13515933LLU;

	t7 = ((x33&(x34-x35))*x36);

	if (t7 != 391361340LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x37 = 1U;
	uint32_t x38 = UINT32_MAX;
	uint32_t x39 = UINT32_MAX;
	static uint32_t x40 = UINT32_MAX;
	uint32_t t8 = 4647U;

	t8 = ((x37&(x38-x39))*x40);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x50 = -1;
	int8_t x51 = INT8_MIN;
	int8_t x52 = -22;
	volatile uint32_t t9 = 62089124U;

	t9 = ((x49&(x50-x51))*x52);

	if (t9 != 4294965580U) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x53 = 884874535U;
	int64_t x55 = -1LL;
	static int32_t x56 = -1;
	int64_t t10 = 443114118LL;

	t10 = ((x53&(x54-x55))*x56);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x61 = 538954628909LLU;
	uint32_t x62 = 713190999U;
	uint32_t x64 = 38730485U;
	volatile uint64_t t11 = 1622269LLU;

	t11 = ((x61&(x62-x63))*x64);

	if (t11 != 25993948586024360LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x69 = 7U;
	uint32_t x70 = UINT32_MAX;
	static volatile int8_t x72 = INT8_MIN;
	uint32_t t12 = 31003U;

	t12 = ((x69&(x70-x71))*x72);

	if (t12 != 4294967040U) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x73 = UINT32_MAX;
	int64_t x74 = INT64_MIN;
	int64_t x76 = INT64_MIN;
	static volatile int64_t t13 = INT64_MIN;

	t13 = ((x73&(x74-x75))*x76);

	if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x77 = INT8_MIN;
	uint8_t x78 = 20U;
	int8_t x79 = -14;
	int8_t x80 = INT8_MIN;
	volatile int32_t t14 = -627105479;

	t14 = ((x77&(x78-x79))*x80);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x81 = UINT16_MAX;
	static volatile int32_t x82 = INT32_MIN;
	int32_t x83 = -1;
	uint32_t x84 = 146455U;
	uint32_t t15 = 1289609U;

	t15 = ((x81&(x82-x83))*x84);

	if (t15 != 146455U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x85 = INT16_MAX;
	static uint64_t x86 = 1900751LLU;
	int32_t x87 = -6;
	volatile int32_t x88 = -1758;
	volatile uint64_t t16 = 54166901LLU;

	t16 = ((x85&(x86-x87))*x88);

	if (t16 != 18446744073709177162LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x109 = 498499;
	int32_t x110 = INT32_MIN;
	volatile int64_t x111 = -1LL;
	int16_t x112 = INT16_MIN;
	static int64_t t17 = -9269879793522LL;

	t17 = ((x109&(x110-x111))*x112);

	if (t17 != -32768LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x117 = INT32_MIN;
	uint32_t x118 = UINT32_MAX;
	int64_t x119 = -1LL;
	volatile int8_t x120 = -1;
	volatile int64_t t18 = -3687329237446044LL;

	t18 = ((x117&(x118-x119))*x120);

	if (t18 != -4294967296LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x125 = 364LL;
	int16_t x126 = INT16_MIN;
	volatile uint32_t x127 = 8637369U;
	static int8_t x128 = INT8_MIN;
	volatile int64_t t19 = -1909867690815191600LL;

	t19 = ((x125&(x126-x127))*x128);

	if (t19 != -8704LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x129 = INT64_MIN;
	int8_t x130 = 4;
	volatile int32_t x131 = -27;
	int32_t x132 = INT32_MAX;
	int64_t t20 = -735912742239802LL;

	t20 = ((x129&(x130-x131))*x132);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x133 = 4642964U;
	int32_t x134 = -1;
	int8_t x135 = INT8_MAX;
	volatile int16_t x136 = INT16_MAX;
	volatile uint32_t t21 = 30884854U;

	t21 = ((x133&(x134-x135))*x136);

	if (t21 != 1811490688U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x137 = 20589602U;
	uint32_t x139 = UINT32_MAX;
	int16_t x140 = INT16_MAX;
	volatile uint32_t t22 = 136786U;

	t22 = ((x137&(x138-x139))*x140);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x145 = 695756U;
	int16_t x147 = 25;
	uint8_t x148 = UINT8_MAX;
	static volatile uint32_t t23 = 527664195U;

	t23 = ((x145&(x146-x147))*x148);

	if (t23 != 177042420U) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x149 = 10U;
	int32_t x150 = INT32_MIN;
	volatile int16_t x151 = -1;
	int32_t x152 = 1;
	int32_t t24 = -209585361;

	t24 = ((x149&(x150-x151))*x152);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x158 = INT8_MIN;
	static int64_t x159 = INT64_MIN;
	int32_t x160 = INT32_MAX;

	t25 = ((x157&(x158-x159))*x160);

	if (t25 != 274877906816LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x165 = 9917473;
	volatile int16_t x166 = INT16_MIN;
	static uint8_t x168 = 4U;
	static int32_t t26 = -348860013;

	t26 = ((x165&(x166-x167))*x168);

	if (t26 != 39583748) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x169 = UINT16_MAX;
	int64_t x170 = 11144514LL;
	int16_t x171 = -1;
	uint8_t x172 = UINT8_MAX;
	volatile int64_t t27 = 106268906LL;

	t27 = ((x169&(x170-x171))*x172);

	if (t27 != 865725LL) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint16_t x173 = 1U;
	int16_t x174 = 1;
	int64_t x175 = -5609867640958LL;
	static int32_t x176 = INT32_MIN;
	volatile int64_t t28 = -66196071616LL;

	t28 = ((x173&(x174-x175))*x176);

	if (t28 != -2147483648LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x181 = 25;
	int32_t x183 = INT32_MIN;
	volatile int8_t x184 = 1;
	int32_t t29 = 15236;

	t29 = ((x181&(x182-x183))*x184);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x185 = -105156;
	uint64_t x186 = 129224115LLU;
	int8_t x187 = 1;
	volatile int8_t x188 = -1;
	uint64_t t30 = 1493468923125LLU;

	t30 = ((x185&(x186-x187))*x188);

	if (t30 != 18446744073580427984LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x189 = 14395U;
	int16_t x190 = -1;
	int16_t x192 = INT16_MAX;

	t31 = ((x189&(x190-x191))*x192);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x195 = INT8_MAX;
	uint64_t x196 = 4229571234872168445LLU;
	volatile uint64_t t32 = 233517602LLU;

	t32 = ((x193&(x194-x195))*x196);

	if (t32 != 12044776871166841213LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x197 = 0;
	static uint32_t x198 = 163U;
	int32_t x199 = -1;
	static volatile int64_t x200 = 452724LL;
	int64_t t33 = 400838LL;

	t33 = ((x197&(x198-x199))*x200);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x202 = INT32_MAX;
	uint16_t x203 = 8U;

	t34 = ((x201&(x202-x203))*x204);

	if (t34 != -36422157991936LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x213 = UINT16_MAX;
	uint32_t x214 = 2078640856U;
	static volatile int8_t x215 = 0;
	uint16_t x216 = 1U;

	t35 = ((x213&(x214-x215))*x216);

	if (t35 != 35544U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x217 = 3;
	uint8_t x219 = 23U;
	static volatile uint32_t t36 = 5U;

	t36 = ((x217&(x218-x219))*x220);

	if (t36 != 270083U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x221 = INT64_MIN;
	int16_t x222 = -160;
	volatile int8_t x223 = INT8_MAX;
	uint64_t t37 = 41006843LLU;

	t37 = ((x221&(x222-x223))*x224);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x225 = INT16_MIN;
	int16_t x226 = -1;
	static uint16_t x227 = 3828U;
	int32_t x228 = -1;

	t38 = ((x225&(x226-x227))*x228);

	if (t38 != 32768) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x233 = INT32_MAX;
	static uint8_t x236 = 44U;
	volatile int32_t t39 = 514240447;

	t39 = ((x233&(x234-x235))*x236);

	if (t39 != 2288) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x237 = 0U;
	int8_t x238 = INT8_MAX;
	int8_t x239 = -1;
	int32_t x240 = 2741581;
	int32_t t40 = -246;

	t40 = ((x237&(x238-x239))*x240);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x241 = UINT16_MAX;
	int8_t x243 = INT8_MIN;
	uint16_t x244 = UINT16_MAX;
	volatile int32_t t41 = -13;

	t41 = ((x241&(x242-x243))*x244);

	if (t41 != 16711425) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x245 = 148;

	t42 = ((x245&(x246-x247))*x248);

	if (t42 != 10224) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x253 = -1;
	uint32_t x255 = 1393793985U;
	static volatile uint8_t x256 = UINT8_MAX;

	t43 = ((x253&(x254-x255))*x256);

	if (t43 != 1064819393U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x259 = -7;
	static uint32_t x260 = 45581U;
	uint32_t t44 = 0U;

	t44 = ((x257&(x258-x259))*x260);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int16_t x261 = -1;
	static int64_t x262 = -1LL;
	uint8_t x264 = UINT8_MAX;
	int64_t t45 = 112318207512814456LL;

	t45 = ((x261&(x262-x263))*x264);

	if (t45 != -1095216660480LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x266 = -1;
	static volatile uint64_t x267 = 23065796967376LLU;
	static int8_t x268 = -28;

	t46 = ((x265&(x266-x267))*x268);

	if (t46 != 645842315086556LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x269 = -1;
	int16_t x270 = INT16_MIN;
	int8_t x271 = -1;
	volatile uint64_t t47 = 66089284LLU;

	t47 = ((x269&(x270-x271))*x272);

	if (t47 != 32767LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x273 = INT16_MIN;
	static int32_t x274 = 0;
	int32_t x276 = -969;
	volatile uint32_t t48 = 512695U;

	t48 = ((x273&(x274-x275))*x276);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x281 = -1;
	uint8_t x282 = 65U;
	int8_t x283 = INT8_MIN;
	static volatile int16_t x284 = -33;

	t49 = ((x281&(x282-x283))*x284);

	if (t49 != -6369) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x294 = -1;
	static int16_t x295 = INT16_MAX;
	int64_t x296 = 132030204LL;
	int64_t t50 = 56LL;

	t50 = ((x293&(x294-x295))*x296);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x301 = -351843LL;
	uint32_t x302 = 52194937U;
	volatile int32_t x303 = INT32_MIN;
	uint64_t x304 = 710795921LLU;
	volatile uint64_t t51 = 3091609563546LLU;

	t51 = ((x301&(x302-x303))*x304);

	if (t51 != 1563321973433778217LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x317 = UINT8_MAX;
	int8_t x318 = INT8_MAX;
	uint16_t x319 = 30U;
	uint32_t x320 = 4U;
	static uint32_t t52 = 20371U;

	t52 = ((x317&(x318-x319))*x320);

	if (t52 != 388U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x325 = INT64_MAX;
	uint64_t x328 = UINT64_MAX;
	uint64_t t53 = 717257829LLU;

	t53 = ((x325&(x326-x327))*x328);

	if (t53 != 18446744072137740720LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x337 = -1;
	uint8_t x338 = UINT8_MAX;
	static volatile uint16_t x339 = UINT16_MAX;
	static volatile int64_t x340 = 239815573630LL;
	int64_t t54 = 939826653LL;

	t54 = ((x337&(x338-x339))*x340);

	if (t54 != -15655160646566400LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x341 = INT64_MIN;
	int32_t x342 = -1;
	int32_t x343 = INT32_MIN;
	int8_t x344 = 5;
	static int64_t t55 = 861124991287928LL;

	t55 = ((x341&(x342-x343))*x344);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x345 = 7878;
	static uint32_t x346 = 26U;
	int8_t x347 = -1;
	int64_t x348 = 12647087LL;
	volatile int64_t t56 = -36365164LL;

	t56 = ((x345&(x346-x347))*x348);

	if (t56 != 25294174LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x349 = -1;
	int8_t x350 = INT8_MIN;
	volatile int32_t x351 = INT32_MIN;
	int64_t x352 = 26LL;

	t57 = ((x349&(x350-x351))*x352);

	if (t57 != 55834571520LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x353 = -15;
	uint8_t x354 = 116U;
	int16_t x355 = INT16_MAX;
	uint64_t x356 = 1656025529512LLU;
	uint64_t t58 = 210682LLU;

	t58 = ((x353&(x354-x355))*x356);

	if (t58 != 18392666560043337256LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x373 = -1;
	volatile int16_t x374 = -11929;
	volatile int8_t x375 = -1;
	static volatile int16_t x376 = INT16_MAX;
	int32_t t59 = 28744;

	t59 = ((x373&(x374-x375))*x376);

	if (t59 != -390844776) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint32_t x377 = 67U;
	int32_t x378 = INT32_MIN;
	int8_t x379 = INT8_MIN;
	static int64_t t60 = -563204LL;

	t60 = ((x377&(x378-x379))*x380);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x381 = INT32_MAX;
	int32_t x382 = 6;
	int16_t x383 = -788;
	volatile int32_t t61 = -85364495;

	t61 = ((x381&(x382-x383))*x384);

	if (t61 != 202470) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x385 = INT8_MIN;
	int8_t x386 = INT8_MAX;
	static int64_t x388 = 642LL;

	t62 = ((x385&(x386-x387))*x388);

	if (t62 != 82176LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x397 = 13;
	uint8_t x398 = 41U;
	int16_t x399 = -976;
	volatile uint64_t x400 = 1001077135035414544LLU;
	volatile uint64_t t63 = 98583LLU;

	t63 = ((x397&(x398-x399))*x400);

	if (t63 != 9009694215318730896LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x401 = INT64_MIN;
	volatile int8_t x403 = -1;
	uint8_t x404 = UINT8_MAX;
	volatile int64_t t64 = 80627071102542069LL;

	t64 = ((x401&(x402-x403))*x404);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x409 = 12U;
	uint8_t x411 = 44U;
	int64_t t65 = 134576096123078LL;

	t65 = ((x409&(x410-x411))*x412);

	if (t65 != -4968LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x413 = UINT16_MAX;
	int64_t x414 = INT64_MIN;
	int8_t x415 = INT8_MIN;
	volatile int64_t t66 = -48LL;

	t66 = ((x413&(x414-x415))*x416);

	if (t66 != 3200LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x417 = 8934617278831LLU;
	int16_t x420 = -1;
	uint64_t t67 = 226999LLU;

	t67 = ((x417&(x418-x419))*x420);

	if (t67 != 18446744073709551571LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x429 = 521268683U;
	int64_t x431 = 1902775861173LL;
	int32_t x432 = INT32_MIN;
	int64_t t68 = 1LL;

	t68 = ((x429&(x430-x431))*x432);

	if (t68 != -903042248650784768LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int16_t x433 = 1;
	uint64_t x434 = UINT64_MAX;
	int8_t x435 = INT8_MAX;
	int8_t x436 = INT8_MAX;
	volatile uint64_t t69 = 224292202034LLU;

	t69 = ((x433&(x434-x435))*x436);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x438 = 1;
	int8_t x439 = INT8_MAX;
	int32_t x440 = INT32_MAX;
	uint64_t t70 = 60LLU;

	t70 = ((x437&(x438-x439))*x440);

	if (t70 != 16026486920155652478LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x441 = 9U;
	int16_t x442 = INT16_MAX;
	static int8_t x443 = INT8_MAX;

	t71 = ((x441&(x442-x443))*x444);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x445 = INT16_MIN;
	static int64_t x446 = INT64_MIN;
	int8_t x447 = INT8_MIN;
	uint64_t x448 = 5251314460937LLU;
	volatile uint64_t t72 = 9942854727444LLU;

	t72 = ((x445&(x446-x447))*x448);

	if (t72 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x450 = 3201188U;
	int32_t x451 = 7668;
	volatile uint16_t x452 = 14U;
	uint32_t t73 = 22U;

	t73 = ((x449&(x450-x451))*x452);

	if (t73 != 44709280U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x453 = INT8_MIN;
	volatile int16_t x454 = -28;
	int16_t x455 = -1;
	int8_t x456 = INT8_MAX;
	volatile int32_t t74 = 1;

	t74 = ((x453&(x454-x455))*x456);

	if (t74 != -16256) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x457 = 1U;
	static int8_t x458 = -6;
	volatile uint16_t x459 = 1U;
	uint16_t x460 = 0U;

	t75 = ((x457&(x458-x459))*x460);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x461 = 1727975128687870LL;
	uint32_t x464 = 8U;
	volatile int64_t t76 = -14669921534LL;

	t76 = ((x461&(x462-x463))*x464);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x466 = 0U;
	int8_t x468 = INT8_MIN;
	int32_t t77 = -207783894;

	t77 = ((x465&(x466-x467))*x468);

	if (t77 != 25165696) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x470 = INT8_MIN;
	volatile uint64_t x471 = 3767678558487550929LLU;
	uint64_t t78 = 14041272LLU;

	t78 = ((x469&(x470-x471))*x472);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x473 = INT64_MIN;
	uint8_t x474 = 25U;
	static int16_t x475 = -62;
	static volatile int32_t x476 = -1;
	int64_t t79 = 1LL;

	t79 = ((x473&(x474-x475))*x476);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x481 = 3610693U;
	int8_t x484 = INT8_MIN;
	static volatile uint32_t t80 = 11U;

	t80 = ((x481&(x482-x483))*x484);

	if (t80 != 3832799104U) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int16_t x487 = INT16_MIN;
	static int8_t x488 = INT8_MIN;
	int32_t t81 = 1;

	t81 = ((x485&(x486-x487))*x488);

	if (t81 != -4194304) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x489 = 8833LLU;
	int8_t x490 = -1;
	int16_t x491 = INT16_MIN;
	uint32_t x492 = 265U;
	uint64_t t82 = 14931LLU;

	t82 = ((x489&(x490-x491))*x492);

	if (t82 != 2340745LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint64_t x493 = UINT64_MAX;
	static volatile int8_t x495 = 1;
	volatile uint64_t t83 = 1206LLU;

	t83 = ((x493&(x494-x495))*x496);

	if (t83 != 18446744073605421346LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x505 = INT8_MIN;
	int8_t x506 = -1;
	static int8_t x507 = -23;
	volatile int32_t t84 = -291923;

	t84 = ((x505&(x506-x507))*x508);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x509 = 10618321LLU;
	int32_t x510 = INT32_MIN;
	volatile int64_t x511 = INT64_MIN;
	volatile int8_t x512 = -1;
	volatile uint64_t t85 = 778LLU;

	t85 = ((x509&(x510-x511))*x512);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x513 = INT32_MIN;
	int8_t x514 = 11;
	static volatile int8_t x515 = INT8_MIN;
	volatile int32_t t86 = 3235;

	t86 = ((x513&(x514-x515))*x516);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x518 = UINT16_MAX;
	volatile int16_t x519 = 55;
	static uint32_t x520 = 385843987U;

	t87 = ((x517&(x518-x519))*x520);

	if (t87 != 3086751896LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x521 = 0;
	int8_t x523 = INT8_MIN;
	int32_t x524 = INT32_MIN;
	int32_t t88 = 466492508;

	t88 = ((x521&(x522-x523))*x524);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x526 = UINT64_MAX;

	t89 = ((x525&(x526-x527))*x528);

	if (t89 != 186152LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x537 = -1LL;
	static int64_t x538 = -31523422525742436LL;
	int64_t t90 = -4052928771655056084LL;

	t90 = ((x537&(x538-x539))*x540);

	if (t90 != 31523422493761049LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x541 = 3;
	static uint16_t x544 = 589U;
	int64_t t91 = -305662LL;

	t91 = ((x541&(x542-x543))*x544);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x545 = INT16_MAX;
	int64_t x546 = INT64_MIN;
	static int64_t x547 = -1LL;
	uint8_t x548 = 4U;
	volatile int64_t t92 = 85746258229797951LL;

	t92 = ((x545&(x546-x547))*x548);

	if (t92 != 4LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x549 = INT32_MAX;
	int16_t x550 = INT16_MAX;
	volatile int8_t x551 = -49;
	volatile int32_t x552 = 6055;
	volatile int32_t t93 = -28516;

	t93 = ((x549&(x550-x551))*x552);

	if (t93 != 198700880) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x555 = -1;
	volatile int8_t x556 = -1;
	static int32_t t94 = -209624;

	t94 = ((x553&(x554-x555))*x556);

	if (t94 != -32768) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x557 = 285U;
	static volatile int32_t x558 = INT32_MIN;
	int64_t x559 = -1LL;
	int64_t x560 = INT64_MAX;
	int64_t t95 = INT64_MAX;

	t95 = ((x557&(x558-x559))*x560);

	if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x562 = 2302078872561685906LLU;
	volatile int16_t x563 = -1;
	int32_t x564 = INT32_MIN;
	static volatile uint64_t t96 = 3800615543500183LLU;

	t96 = ((x561&(x562-x563))*x564);

	if (t96 != 4611686018427387904LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x565 = 96U;
	int8_t x566 = INT8_MIN;
	volatile int64_t x567 = -1LL;
	volatile uint64_t x568 = 3851297547965136LLU;
	static uint64_t t97 = 672742LLU;

	t97 = ((x565&(x566-x567))*x568);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x569 = 57;
	uint64_t x570 = UINT64_MAX;
	static int64_t x571 = INT64_MAX;
	volatile int8_t x572 = 2;

	t98 = ((x569&(x570-x571))*x572);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x575 = -4379;
	uint64_t t99 = 1932917771LLU;

	t99 = ((x573&(x574-x575))*x576);

	if (t99 != 18070895364199411572LLU) { NG(); } else { ; }
	
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

