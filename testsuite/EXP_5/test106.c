#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x3 = 702LLU;
volatile int32_t t1 = 0;
int8_t x13 = INT8_MAX;
int16_t x15 = INT16_MAX;
int32_t t6 = 236663920;
static int16_t x43 = 5;
volatile int64_t t7 = INT64_MIN;
static int64_t x49 = -320857800209348LL;
int64_t t8 = -3485LL;
int64_t x55 = INT64_MAX;
volatile uint64_t x59 = UINT64_MAX;
int32_t x65 = -1;
static int32_t t12 = -3686645;
uint16_t x70 = 94U;
int32_t t13 = -136006303;
volatile int32_t x76 = -266;
static uint32_t x87 = 365U;
int32_t x88 = INT32_MAX;
int64_t x96 = INT64_MIN;
volatile uint64_t x119 = UINT64_MAX;
static int16_t x130 = INT16_MIN;
int32_t t23 = -257;
volatile int8_t x134 = INT8_MIN;
int32_t x135 = INT32_MAX;
int8_t x146 = -1;
int32_t x161 = INT32_MIN;
static int64_t x165 = INT64_MAX;
int8_t x168 = -1;
int32_t x169 = INT32_MIN;
int16_t x172 = 1;
volatile int32_t t32 = INT32_MIN;
int8_t x178 = INT8_MIN;
uint32_t x186 = UINT32_MAX;
int16_t x190 = INT16_MAX;
volatile uint64_t t36 = 8247426989286327LLU;
int64_t x201 = -3931235LL;
volatile int16_t x205 = INT16_MAX;
volatile int32_t t39 = 433840299;
uint8_t x212 = 1U;
static uint64_t x227 = 2638099LLU;
uint64_t x229 = 35953668424858257LLU;
int64_t x233 = 457LL;
uint8_t x234 = 27U;
volatile int64_t t46 = -769881430059706LL;
uint64_t t47 = 113768379415LLU;
static uint32_t x243 = UINT32_MAX;
int32_t x244 = -14;
int64_t x248 = INT64_MIN;
int16_t x253 = 195;
int8_t x262 = -1;
uint16_t x263 = 9U;
volatile int16_t x265 = INT16_MAX;
volatile int16_t x266 = 1265;
static int32_t t54 = -12727;
volatile int8_t x290 = -6;
uint32_t x301 = 31U;
int32_t x302 = INT32_MIN;
volatile uint32_t x304 = 56U;
uint32_t x310 = 11U;
static volatile uint64_t x311 = 703006875LLU;
volatile int32_t t60 = 1;
uint8_t x316 = UINT8_MAX;
uint16_t x321 = UINT16_MAX;
int16_t x323 = 1297;
int64_t x328 = -50422816906032LL;
int32_t t65 = 5;
uint8_t x343 = 12U;
int16_t x347 = INT16_MIN;
int16_t x348 = -1;
int32_t t70 = -7;
static int64_t x355 = -13782101200LL;
static int16_t x370 = -1;
int64_t t73 = INT64_MIN;
uint32_t x373 = 135023U;
volatile uint32_t t74 = 3U;
int16_t x378 = INT16_MIN;
volatile uint16_t x379 = 29802U;
volatile uint16_t x381 = 3U;
int64_t x382 = -1LL;
int16_t x384 = INT16_MIN;
volatile int32_t t77 = -26450;
int8_t x395 = INT8_MIN;
volatile int8_t x398 = INT8_MIN;
volatile uint32_t x404 = 327183U;
static int32_t x411 = -3078;
volatile int64_t x419 = INT64_MAX;
int8_t x424 = 12;
volatile int32_t t84 = 32488793;
static int32_t t85 = 0;
static uint32_t x444 = 998159U;
uint64_t x449 = 22LLU;
int8_t x455 = -2;
uint32_t t91 = UINT32_MAX;
volatile int32_t t92 = -973112672;
static volatile int32_t t93 = -2;
uint64_t x466 = UINT64_MAX;
volatile uint64_t x467 = 868055604711LLU;
static uint16_t x470 = 28893U;
int32_t x474 = -386412727;
uint64_t x476 = 74254934749683LLU;
static int16_t x482 = INT16_MIN;
static int32_t x490 = -1748;


void f0(void) {
	int16_t x1 = 974;
	int64_t x2 = INT64_MIN;
	static uint32_t x4 = UINT32_MAX;
	volatile int32_t t0 = -934330;

	t0 = (x1-((x2+x3)<x4));

	if (t0 != 974) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = INT8_MIN;
	volatile int8_t x10 = 60;
	static uint16_t x11 = 1113U;
	volatile uint8_t x12 = UINT8_MAX;

	t1 = (x9-((x10+x11)<x12));

	if (t1 != -128) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x14 = 17LL;
	int32_t x16 = -797691;
	int32_t t2 = -1;

	t2 = (x13-((x14+x15)<x16));

	if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = -1;
	int16_t x18 = INT16_MAX;
	static uint32_t x19 = UINT32_MAX;
	volatile int64_t x20 = INT64_MIN;
	volatile int32_t t3 = 1;

	t3 = (x17-((x18+x19)<x20));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x21 = UINT64_MAX;
	static int8_t x22 = INT8_MAX;
	int8_t x23 = -1;
	int8_t x24 = 20;
	volatile uint64_t t4 = UINT64_MAX;

	t4 = (x21-((x22+x23)<x24));

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = INT8_MIN;
	int16_t x26 = 0;
	int64_t x27 = -1LL;
	static int32_t x28 = -1;
	volatile int32_t t5 = 14836;

	t5 = (x25-((x26+x27)<x28));

	if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x37 = INT8_MIN;
	static uint16_t x38 = 27534U;
	int16_t x39 = INT16_MAX;
	volatile uint64_t x40 = 83278344489LLU;

	t6 = (x37-((x38+x39)<x40));

	if (t6 != -129) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x41 = INT64_MIN;
	int32_t x42 = -1;
	volatile int64_t x44 = -73692702365527319LL;

	t7 = (x41-((x42+x43)<x44));

	if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x50 = 5U;
	static int8_t x51 = -1;
	int8_t x52 = INT8_MAX;

	t8 = (x49-((x50+x51)<x52));

	if (t8 != -320857800209349LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x53 = -1;
	static int64_t x54 = INT64_MIN;
	int64_t x56 = INT64_MIN;
	int32_t t9 = 156165432;

	t9 = (x53-((x54+x55)<x56));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x57 = 2U;
	int16_t x58 = -5;
	uint64_t x60 = 74849787LLU;
	volatile uint32_t t10 = 5265124U;

	t10 = (x57-((x58+x59)<x60));

	if (t10 != 2U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x61 = INT8_MIN;
	int16_t x62 = 33;
	int8_t x63 = INT8_MIN;
	static int16_t x64 = INT16_MAX;
	int32_t t11 = -3;

	t11 = (x61-((x62+x63)<x64));

	if (t11 != -129) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x66 = 8112U;
	static volatile int16_t x67 = INT16_MIN;
	volatile int64_t x68 = INT64_MIN;

	t12 = (x65-((x66+x67)<x68));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x69 = INT32_MAX;
	int16_t x71 = -1;
	uint16_t x72 = UINT16_MAX;

	t13 = (x69-((x70+x71)<x72));

	if (t13 != 2147483646) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x73 = INT8_MAX;
	static uint32_t x74 = UINT32_MAX;
	int8_t x75 = INT8_MIN;
	int32_t t14 = 1;

	t14 = (x73-((x74+x75)<x76));

	if (t14 != 127) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x85 = INT64_MIN;
	int16_t x86 = INT16_MIN;
	static int64_t t15 = INT64_MIN;

	t15 = (x85-((x86+x87)<x88));

	if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x93 = 19LLU;
	static int64_t x94 = INT64_MIN;
	uint16_t x95 = UINT16_MAX;
	uint64_t t16 = 134748713LLU;

	t16 = (x93-((x94+x95)<x96));

	if (t16 != 19LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x105 = INT16_MAX;
	int16_t x106 = -5880;
	volatile int32_t x107 = 58153432;
	int64_t x108 = 94680LL;
	volatile int32_t t17 = 2062425;

	t17 = (x105-((x106+x107)<x108));

	if (t17 != 32767) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x109 = 14098U;
	static int16_t x110 = -71;
	volatile int8_t x111 = -1;
	uint8_t x112 = 7U;
	static volatile int32_t t18 = -42;

	t18 = (x109-((x110+x111)<x112));

	if (t18 != 14097) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x113 = INT8_MIN;
	static uint32_t x114 = 3638152U;
	int32_t x115 = INT32_MIN;
	uint8_t x116 = UINT8_MAX;
	int32_t t19 = 510088;

	t19 = (x113-((x114+x115)<x116));

	if (t19 != -128) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x117 = INT8_MIN;
	int32_t x118 = -7;
	uint32_t x120 = UINT32_MAX;
	int32_t t20 = -708464366;

	t20 = (x117-((x118+x119)<x120));

	if (t20 != -128) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x121 = INT16_MAX;
	uint32_t x122 = 121U;
	uint64_t x123 = 898251LLU;
	uint16_t x124 = UINT16_MAX;
	int32_t t21 = 65800330;

	t21 = (x121-((x122+x123)<x124));

	if (t21 != 32767) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x125 = UINT16_MAX;
	static int8_t x126 = -2;
	int32_t x127 = INT32_MAX;
	volatile int32_t x128 = 80627765;
	static volatile int32_t t22 = 1275;

	t22 = (x125-((x126+x127)<x128));

	if (t22 != 65535) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x129 = -1;
	static int64_t x131 = 307567LL;
	static int16_t x132 = -1;

	t23 = (x129-((x130+x131)<x132));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x133 = -1;
	uint64_t x136 = 10642238557081340LLU;
	volatile int32_t t24 = -29885;

	t24 = (x133-((x134+x135)<x136));

	if (t24 != -2) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x137 = -1;
	int16_t x138 = INT16_MAX;
	int64_t x139 = 2342LL;
	int8_t x140 = -1;
	int32_t t25 = -29707238;

	t25 = (x137-((x138+x139)<x140));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x141 = INT8_MIN;
	uint32_t x142 = 224403U;
	static int8_t x143 = -2;
	int64_t x144 = -87708177679358LL;
	int32_t t26 = -3417;

	t26 = (x141-((x142+x143)<x144));

	if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x145 = -1;
	int64_t x147 = 3988092LL;
	int64_t x148 = INT64_MIN;
	int32_t t27 = -107;

	t27 = (x145-((x146+x147)<x148));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x149 = 22;
	int64_t x150 = INT64_MIN;
	static uint8_t x151 = 11U;
	static volatile int8_t x152 = INT8_MAX;
	static int32_t t28 = 740557695;

	t28 = (x149-((x150+x151)<x152));

	if (t28 != 21) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x153 = INT32_MIN;
	int32_t x154 = 0;
	int32_t x155 = -1;
	static int8_t x156 = -1;
	static int32_t t29 = INT32_MIN;

	t29 = (x153-((x154+x155)<x156));

	if (t29 != INT32_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x162 = UINT64_MAX;
	int64_t x163 = -1LL;
	volatile int8_t x164 = 3;
	int32_t t30 = INT32_MIN;

	t30 = (x161-((x162+x163)<x164));

	if (t30 != INT32_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x166 = -1;
	uint16_t x167 = 19869U;
	volatile int64_t t31 = INT64_MAX;

	t31 = (x165-((x166+x167)<x168));

	if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x170 = -1;
	uint64_t x171 = UINT64_MAX;

	t32 = (x169-((x170+x171)<x172));

	if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x177 = INT8_MIN;
	uint8_t x179 = 9U;
	uint32_t x180 = 55U;
	int32_t t33 = -66469;

	t33 = (x177-((x178+x179)<x180));

	if (t33 != -128) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x181 = 3U;
	int16_t x182 = -96;
	volatile uint64_t x183 = UINT64_MAX;
	uint64_t x184 = UINT64_MAX;
	int32_t t34 = -475420;

	t34 = (x181-((x182+x183)<x184));

	if (t34 != 2) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x185 = INT64_MIN;
	int8_t x187 = INT8_MIN;
	static volatile int64_t x188 = -1LL;
	static int64_t t35 = INT64_MIN;

	t35 = (x185-((x186+x187)<x188));

	if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x189 = 14953147LLU;
	int32_t x191 = INT32_MIN;
	int64_t x192 = -1LL;

	t36 = (x189-((x190+x191)<x192));

	if (t36 != 14953146LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x197 = 1;
	volatile int32_t x198 = INT32_MAX;
	volatile int16_t x199 = INT16_MIN;
	uint64_t x200 = 7563330922373867815LLU;
	static int32_t t37 = -8286854;

	t37 = (x197-((x198+x199)<x200));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x202 = 10U;
	int64_t x203 = -75035331439711LL;
	volatile uint16_t x204 = 19776U;
	volatile int64_t t38 = 79997650396874LL;

	t38 = (x201-((x202+x203)<x204));

	if (t38 != -3931236LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x206 = -1;
	uint64_t x207 = 5101342292LLU;
	int32_t x208 = 96984574;

	t39 = (x205-((x206+x207)<x208));

	if (t39 != 32767) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x209 = INT16_MIN;
	uint32_t x210 = 6567877U;
	int32_t x211 = 1861;
	int32_t t40 = -39;

	t40 = (x209-((x210+x211)<x212));

	if (t40 != -32768) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x213 = -2953;
	int32_t x214 = INT32_MIN;
	int8_t x215 = INT8_MAX;
	int64_t x216 = 126166466LL;
	volatile int32_t t41 = 1;

	t41 = (x213-((x214+x215)<x216));

	if (t41 != -2954) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x217 = INT16_MIN;
	int16_t x218 = INT16_MIN;
	uint16_t x219 = 748U;
	int64_t x220 = INT64_MAX;
	static volatile int32_t t42 = -1493;

	t42 = (x217-((x218+x219)<x220));

	if (t42 != -32769) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x221 = 151U;
	uint32_t x222 = 2U;
	volatile int16_t x223 = INT16_MAX;
	static int64_t x224 = 413442328LL;
	static volatile int32_t t43 = 1;

	t43 = (x221-((x222+x223)<x224));

	if (t43 != 150) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x225 = INT32_MIN;
	uint8_t x226 = UINT8_MAX;
	volatile uint16_t x228 = 118U;
	volatile int32_t t44 = INT32_MIN;

	t44 = (x225-((x226+x227)<x228));

	if (t44 != INT32_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x230 = INT16_MAX;
	int64_t x231 = 6680524947053LL;
	int16_t x232 = INT16_MIN;
	volatile uint64_t t45 = 4168LLU;

	t45 = (x229-((x230+x231)<x232));

	if (t45 != 35953668424858257LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x235 = UINT8_MAX;
	static int16_t x236 = INT16_MIN;

	t46 = (x233-((x234+x235)<x236));

	if (t46 != 457LL) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint64_t x237 = 64873825059999LLU;
	static uint32_t x238 = 1U;
	int8_t x239 = INT8_MIN;
	static uint64_t x240 = 2117209733576999LLU;

	t47 = (x237-((x238+x239)<x240));

	if (t47 != 64873825059998LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x241 = -1;
	int16_t x242 = INT16_MIN;
	static int32_t t48 = -12326;

	t48 = (x241-((x242+x243)<x244));

	if (t48 != -2) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x245 = 0;
	uint16_t x246 = 13U;
	static int16_t x247 = -1;
	volatile int32_t t49 = 1277;

	t49 = (x245-((x246+x247)<x248));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x254 = UINT16_MAX;
	static uint32_t x255 = 573319U;
	int64_t x256 = -313033LL;
	int32_t t50 = -201515;

	t50 = (x253-((x254+x255)<x256));

	if (t50 != 195) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x257 = 31U;
	uint16_t x258 = UINT16_MAX;
	static int32_t x259 = 63;
	int64_t x260 = INT64_MIN;
	volatile int32_t t51 = 0;

	t51 = (x257-((x258+x259)<x260));

	if (t51 != 31) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x261 = 10U;
	int8_t x264 = INT8_MAX;
	volatile int32_t t52 = 3287;

	t52 = (x261-((x262+x263)<x264));

	if (t52 != 9) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x267 = 2U;
	int64_t x268 = -1LL;
	static int32_t t53 = -142;

	t53 = (x265-((x266+x267)<x268));

	if (t53 != 32767) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x273 = 3048941;
	static int32_t x274 = 3393;
	uint32_t x275 = UINT32_MAX;
	volatile uint8_t x276 = 1U;

	t54 = (x273-((x274+x275)<x276));

	if (t54 != 3048941) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint64_t x277 = 206653680284443LLU;
	uint64_t x278 = 248888559LLU;
	uint32_t x279 = UINT32_MAX;
	static uint8_t x280 = 1U;
	uint64_t t55 = 114LLU;

	t55 = (x277-((x278+x279)<x280));

	if (t55 != 206653680284443LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x281 = UINT8_MAX;
	int8_t x282 = INT8_MIN;
	int8_t x283 = -1;
	int32_t x284 = INT32_MAX;
	volatile int32_t t56 = 0;

	t56 = (x281-((x282+x283)<x284));

	if (t56 != 254) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x289 = 0;
	uint16_t x291 = 4U;
	int8_t x292 = INT8_MIN;
	int32_t t57 = 1;

	t57 = (x289-((x290+x291)<x292));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x297 = 8083270973652380606LLU;
	volatile int8_t x298 = INT8_MAX;
	int64_t x299 = INT64_MIN;
	uint8_t x300 = UINT8_MAX;
	volatile uint64_t t58 = 193705612097428LLU;

	t58 = (x297-((x298+x299)<x300));

	if (t58 != 8083270973652380605LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int32_t x303 = 1543268;
	volatile uint32_t t59 = 20753022U;

	t59 = (x301-((x302+x303)<x304));

	if (t59 != 31U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x309 = INT8_MIN;
	static volatile int16_t x312 = 215;

	t60 = (x309-((x310+x311)<x312));

	if (t60 != -128) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x313 = -5LL;
	volatile int64_t x314 = 409257176LL;
	static uint16_t x315 = UINT16_MAX;
	static volatile int64_t t61 = -2270513430901491594LL;

	t61 = (x313-((x314+x315)<x316));

	if (t61 != -5LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x317 = 0U;
	int64_t x318 = -1LL;
	static int16_t x319 = INT16_MIN;
	int16_t x320 = INT16_MIN;
	static volatile int32_t t62 = -1659139;

	t62 = (x317-((x318+x319)<x320));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x322 = -1;
	int8_t x324 = INT8_MAX;
	static int32_t t63 = -3;

	t63 = (x321-((x322+x323)<x324));

	if (t63 != 65535) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x325 = -1LL;
	int64_t x326 = -12678307LL;
	static volatile uint64_t x327 = UINT64_MAX;
	volatile int64_t t64 = 445448638436170LL;

	t64 = (x325-((x326+x327)<x328));

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x329 = INT16_MIN;
	int64_t x330 = -962017939LL;
	static int8_t x331 = INT8_MIN;
	static int32_t x332 = 22;

	t65 = (x329-((x330+x331)<x332));

	if (t65 != -32769) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x333 = INT64_MIN;
	static uint16_t x334 = 3209U;
	static volatile int64_t x335 = -1LL;
	uint32_t x336 = 137U;
	int64_t t66 = INT64_MIN;

	t66 = (x333-((x334+x335)<x336));

	if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x337 = 0U;
	volatile int8_t x338 = 0;
	int8_t x339 = INT8_MAX;
	int64_t x340 = INT64_MAX;
	volatile int32_t t67 = -2288417;

	t67 = (x337-((x338+x339)<x340));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x341 = 312640824;
	int16_t x342 = -1;
	static volatile int8_t x344 = INT8_MAX;
	volatile int32_t t68 = -5837223;

	t68 = (x341-((x342+x343)<x344));

	if (t68 != 312640823) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x345 = 1U;
	static volatile int32_t x346 = 963847;
	volatile int32_t t69 = 8891451;

	t69 = (x345-((x346+x347)<x348));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x349 = UINT8_MAX;
	static uint16_t x350 = 273U;
	static uint16_t x351 = 4U;
	uint16_t x352 = UINT16_MAX;

	t70 = (x349-((x350+x351)<x352));

	if (t70 != 254) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x353 = -26;
	volatile int16_t x354 = INT16_MIN;
	int32_t x356 = 250831;
	static int32_t t71 = 97423416;

	t71 = (x353-((x354+x355)<x356));

	if (t71 != -27) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x357 = 661933254;
	volatile int32_t x358 = -926;
	static int8_t x359 = -1;
	int16_t x360 = INT16_MIN;
	static volatile int32_t t72 = 2;

	t72 = (x357-((x358+x359)<x360));

	if (t72 != 661933254) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x369 = INT64_MIN;
	int64_t x371 = 2493820491LL;
	static volatile uint64_t x372 = 57LLU;

	t73 = (x369-((x370+x371)<x372));

	if (t73 != INT64_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x374 = INT8_MIN;
	uint16_t x375 = 124U;
	static uint16_t x376 = 1U;

	t74 = (x373-((x374+x375)<x376));

	if (t74 != 135022U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x377 = INT16_MAX;
	int32_t x380 = INT32_MAX;
	int32_t t75 = 65;

	t75 = (x377-((x378+x379)<x380));

	if (t75 != 32766) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x383 = -1;
	static volatile int32_t t76 = -429612577;

	t76 = (x381-((x382+x383)<x384));

	if (t76 != 3) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x385 = 6U;
	int32_t x386 = -1;
	uint8_t x387 = 6U;
	uint8_t x388 = UINT8_MAX;

	t77 = (x385-((x386+x387)<x388));

	if (t77 != 5) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x393 = INT16_MAX;
	int64_t x394 = -86899LL;
	volatile uint8_t x396 = 55U;
	int32_t t78 = 208;

	t78 = (x393-((x394+x395)<x396));

	if (t78 != 32766) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x397 = INT16_MAX;
	static int32_t x399 = 22145;
	int8_t x400 = INT8_MIN;
	volatile int32_t t79 = 9;

	t79 = (x397-((x398+x399)<x400));

	if (t79 != 32767) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x401 = -1LL;
	int32_t x402 = INT32_MIN;
	int16_t x403 = INT16_MAX;
	int64_t t80 = 26LL;

	t80 = (x401-((x402+x403)<x404));

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x409 = -196;
	static int16_t x410 = -1;
	int16_t x412 = -3;
	static volatile int32_t t81 = 17;

	t81 = (x409-((x410+x411)<x412));

	if (t81 != -197) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint32_t x413 = 23462948U;
	static int16_t x414 = -265;
	uint64_t x415 = UINT64_MAX;
	uint64_t x416 = UINT64_MAX;
	uint32_t t82 = 80802122U;

	t82 = (x413-((x414+x415)<x416));

	if (t82 != 23462947U) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x417 = UINT32_MAX;
	int8_t x418 = -2;
	int64_t x420 = INT64_MIN;
	volatile uint32_t t83 = UINT32_MAX;

	t83 = (x417-((x418+x419)<x420));

	if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x421 = INT8_MIN;
	int8_t x422 = INT8_MAX;
	int8_t x423 = -3;

	t84 = (x421-((x422+x423)<x424));

	if (t84 != -128) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x425 = 9U;
	volatile uint32_t x426 = UINT32_MAX;
	static uint64_t x427 = 3058392622345LLU;
	static volatile int32_t x428 = -1;

	t85 = (x425-((x426+x427)<x428));

	if (t85 != 8) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x433 = 214324462;
	volatile int64_t x434 = INT64_MIN;
	uint8_t x435 = 0U;
	uint16_t x436 = UINT16_MAX;
	static int32_t t86 = -55;

	t86 = (x433-((x434+x435)<x436));

	if (t86 != 214324461) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x437 = 0LL;
	uint32_t x438 = 36036735U;
	volatile int64_t x439 = -1LL;
	volatile uint32_t x440 = UINT32_MAX;
	int64_t t87 = 743935829531524935LL;

	t87 = (x437-((x438+x439)<x440));

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x441 = 88U;
	static uint64_t x442 = 6842LLU;
	int32_t x443 = -1;
	int32_t t88 = -10430623;

	t88 = (x441-((x442+x443)<x444));

	if (t88 != 87) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x445 = INT8_MAX;
	int64_t x446 = 31998455LL;
	int16_t x447 = INT16_MAX;
	uint16_t x448 = 1400U;
	int32_t t89 = -3;

	t89 = (x445-((x446+x447)<x448));

	if (t89 != 127) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x450 = INT8_MIN;
	uint32_t x451 = UINT32_MAX;
	uint16_t x452 = 846U;
	volatile uint64_t t90 = 749757LLU;

	t90 = (x449-((x450+x451)<x452));

	if (t90 != 22LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x453 = 0U;
	uint32_t x454 = 5743U;
	volatile int32_t x456 = -1;

	t91 = (x453-((x454+x455)<x456));

	if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x457 = -1;
	uint64_t x458 = 119118812039319420LLU;
	static int64_t x459 = INT64_MIN;
	int8_t x460 = -3;

	t92 = (x457-((x458+x459)<x460));

	if (t92 != -2) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x461 = INT8_MAX;
	static volatile int32_t x462 = -43;
	uint16_t x463 = UINT16_MAX;
	static int16_t x464 = -1;

	t93 = (x461-((x462+x463)<x464));

	if (t93 != 127) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x465 = 8588LLU;
	int8_t x468 = 61;
	uint64_t t94 = 32879245017937LLU;

	t94 = (x465-((x466+x467)<x468));

	if (t94 != 8588LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x469 = INT8_MAX;
	int64_t x471 = 5092672018LL;
	static int64_t x472 = -1LL;
	static volatile int32_t t95 = 1377;

	t95 = (x469-((x470+x471)<x472));

	if (t95 != 127) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x473 = -1;
	static int16_t x475 = -1;
	int32_t t96 = 2743954;

	t96 = (x473-((x474+x475)<x476));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x481 = 17;
	int64_t x483 = 5174594516756LL;
	int64_t x484 = INT64_MIN;
	volatile int32_t t97 = -1981091;

	t97 = (x481-((x482+x483)<x484));

	if (t97 != 17) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x485 = 357U;
	uint16_t x486 = UINT16_MAX;
	uint32_t x487 = 0U;
	int8_t x488 = 1;
	static int32_t t98 = -4139663;

	t98 = (x485-((x486+x487)<x488));

	if (t98 != 357) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int64_t x489 = -1LL;
	static uint64_t x491 = UINT64_MAX;
	uint8_t x492 = 18U;
	static int64_t t99 = 93697601833694LL;

	t99 = (x489-((x490+x491)<x492));

	if (t99 != -1LL) { NG(); } else { ; }
	
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

