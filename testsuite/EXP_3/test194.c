#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x1 = 9021U;
static uint8_t x14 = UINT8_MAX;
uint16_t x15 = 40U;
int64_t x21 = INT64_MAX;
static uint64_t x22 = UINT64_MAX;
uint64_t t2 = 40856175LLU;
uint16_t x25 = 5838U;
int16_t x38 = -4;
uint32_t t5 = 1174961765U;
int16_t x54 = -1;
static uint32_t t8 = 119U;
volatile uint8_t x66 = 0U;
uint64_t x69 = 3076185183803LLU;
uint64_t x72 = 444452218132LLU;
volatile uint8_t x77 = UINT8_MAX;
int16_t x87 = -2223;
static uint64_t t14 = 165423893LLU;
uint64_t x92 = 586LLU;
uint8_t x93 = UINT8_MAX;
uint64_t x97 = 74LLU;
volatile uint64_t t17 = 664644561LLU;
int8_t x109 = -23;
static uint8_t x120 = UINT8_MAX;
int32_t x125 = -111590607;
uint8_t x128 = UINT8_MAX;
int64_t x142 = INT64_MIN;
volatile uint64_t x143 = UINT64_MAX;
volatile int64_t x145 = 16438432188403LL;
int32_t x154 = -1;
int32_t x157 = 24894871;
int8_t x158 = INT8_MIN;
uint16_t x175 = 0U;
uint64_t t31 = 530LLU;
uint16_t x183 = 106U;
static int64_t t32 = 2672LL;
static int16_t x185 = 10648;
int16_t x187 = INT16_MIN;
volatile int16_t x191 = INT16_MIN;
volatile int8_t x199 = INT8_MIN;
uint64_t t37 = 864LLU;
uint32_t x217 = 3424806U;
uint32_t x218 = 502U;
static uint16_t x219 = 112U;
int64_t x224 = INT64_MIN;
int64_t t42 = 4579781684429LL;
int64_t x226 = INT64_MAX;
volatile int32_t x229 = INT32_MAX;
uint32_t x233 = UINT32_MAX;
static uint16_t x238 = 23U;
static volatile int8_t x240 = INT8_MAX;
static int16_t x242 = INT16_MAX;
int8_t x245 = INT8_MAX;
volatile int64_t x250 = INT64_MIN;
uint64_t x251 = 573LLU;
static volatile uint64_t t49 = 56924802022310LLU;
static int32_t x268 = 25768518;
int32_t x270 = INT32_MIN;
volatile int16_t x274 = -196;
volatile int64_t t54 = 116743534LL;
int32_t t55 = -715;
uint8_t x296 = 78U;
volatile uint64_t x303 = 202678601137007091LLU;
int16_t x304 = -1;
int8_t x312 = -1;
int16_t x314 = 11333;
int16_t x325 = INT16_MIN;
volatile uint64_t x334 = UINT64_MAX;
int8_t x340 = 2;
uint32_t x341 = 1538U;
int32_t t70 = -2220;
int8_t x354 = INT8_MIN;
int32_t x357 = INT32_MIN;
int64_t t73 = -49851649LL;
volatile int64_t t74 = 3948995988880062LL;
static uint16_t x381 = UINT16_MAX;
static volatile int8_t x386 = INT8_MAX;
static volatile uint32_t t78 = 24406U;
volatile int32_t x392 = -1;
volatile int8_t x402 = -1;
volatile uint16_t x410 = 32401U;
uint16_t x412 = 2225U;
volatile int32_t t83 = -1847;
int8_t x413 = -11;
static int64_t x416 = -1LL;
int64_t t84 = 110597266381LL;
static volatile int64_t x421 = 103106101007061665LL;
static uint32_t t87 = 8078U;
static uint8_t x437 = 2U;
volatile int32_t t89 = -155;
uint32_t x445 = 5U;
int16_t x446 = INT16_MAX;
uint64_t x447 = 1013682837577834740LLU;
int16_t x448 = -4;
volatile int16_t x449 = INT16_MAX;
int64_t x453 = INT64_MIN;
int64_t x459 = INT64_MAX;
static uint8_t x460 = 71U;
static volatile int64_t t95 = -6296952673LL;
int16_t x467 = -1;
int8_t x469 = 5;
uint16_t x471 = 3367U;
static uint32_t x474 = 95529U;
static int32_t x475 = INT32_MAX;
uint64_t x478 = 2022393738745834766LLU;


void f0(void) {
	int16_t x2 = -2879;
	int16_t x3 = INT16_MIN;
	static int32_t x4 = INT32_MIN;
	volatile int32_t t0 = 336;

	t0 = ((x1-x2)|(x3-x4));

	if (t0 != 2147462780) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x13 = 494058U;
	volatile int64_t x16 = INT64_MAX;
	volatile int64_t t1 = -2LL;

	t1 = ((x13-x14)|(x15-x16));

	if (t1 != -9223372036854282005LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x23 = 4U;
	int16_t x24 = 677;

	t2 = ((x21-x22)|(x23-x24));

	if (t2 != 18446744073709550943LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x26 = 9;
	int64_t x27 = -1LL;
	static volatile uint64_t x28 = 2441960324622967LLU;
	static volatile uint64_t t3 = 4270868525295147LLU;

	t3 = ((x25-x26)|(x27-x28));

	if (t3 != 18444302113384929229LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x33 = UINT64_MAX;
	int64_t x34 = -1LL;
	uint16_t x35 = 24288U;
	volatile int8_t x36 = INT8_MIN;
	uint64_t t4 = 512LLU;

	t4 = ((x33-x34)|(x35-x36));

	if (t4 != 24416LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x37 = UINT32_MAX;
	int8_t x39 = -1;
	int32_t x40 = INT32_MIN;

	t5 = ((x37-x38)|(x39-x40));

	if (t5 != 2147483647U) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x49 = 5191U;
	int8_t x50 = INT8_MIN;
	int32_t x51 = INT32_MIN;
	int16_t x52 = -1;
	volatile int32_t t6 = 3;

	t6 = ((x49-x50)|(x51-x52));

	if (t6 != -2147478329) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x53 = -1143;
	int16_t x55 = INT16_MIN;
	uint8_t x56 = 3U;
	volatile int32_t t7 = -219520115;

	t7 = ((x53-x54)|(x55-x56));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x57 = -248912;
	uint32_t x58 = 2297U;
	volatile int32_t x59 = 1;
	uint16_t x60 = UINT16_MAX;

	t8 = ((x57-x58)|(x59-x60));

	if (t8 != 4294912695U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x65 = 0U;
	static int16_t x67 = -832;
	uint64_t x68 = 79908LLU;
	volatile uint64_t t9 = 2330LLU;

	t9 = ((x65-x66)|(x67-x68));

	if (t9 != 18446744073709470876LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x70 = INT32_MIN;
	static int16_t x71 = INT16_MIN;
	volatile uint64_t t10 = 1695665680LLU;

	t10 = ((x69-x70)|(x71-x72));

	if (t10 != 18446743922294972159LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x73 = 20U;
	int32_t x74 = -1;
	int64_t x75 = 6LL;
	int8_t x76 = INT8_MIN;
	volatile int64_t t11 = -26LL;

	t11 = ((x73-x74)|(x75-x76));

	if (t11 != 151LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x78 = -1;
	int64_t x79 = -1LL;
	int32_t x80 = -21981;
	volatile int64_t t12 = -527LL;

	t12 = ((x77-x78)|(x79-x80));

	if (t12 != 21980LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x81 = -2;
	uint32_t x82 = UINT32_MAX;
	static uint8_t x83 = 4U;
	int16_t x84 = INT16_MIN;
	uint32_t t13 = UINT32_MAX;

	t13 = ((x81-x82)|(x83-x84));

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x85 = 24486110755289078LLU;
	int32_t x86 = -1;
	int16_t x88 = -1;

	t14 = ((x85-x86)|(x87-x88));

	if (t14 != 18446744073709549559LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x89 = -10LL;
	int64_t x90 = -1LL;
	int8_t x91 = 1;
	volatile uint64_t t15 = 295008029415647LLU;

	t15 = ((x89-x90)|(x91-x92));

	if (t15 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x94 = 15268U;
	uint16_t x95 = 1257U;
	volatile uint64_t x96 = 2916LLU;
	uint64_t t16 = 37LLU;

	t16 = ((x93-x94)|(x95-x96));

	if (t16 != 18446744073709551071LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x98 = 0;
	uint8_t x99 = UINT8_MAX;
	static uint8_t x100 = UINT8_MAX;

	t17 = ((x97-x98)|(x99-x100));

	if (t17 != 74LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x101 = 2013LLU;
	volatile int64_t x102 = INT64_MIN;
	int16_t x103 = INT16_MIN;
	volatile uint8_t x104 = 1U;
	uint64_t t18 = 257374LLU;

	t18 = ((x101-x102)|(x103-x104));

	if (t18 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x105 = INT16_MAX;
	volatile int8_t x106 = INT8_MIN;
	int64_t x107 = -55910955181135LL;
	static volatile int16_t x108 = 839;
	int64_t t19 = 99639021321LL;

	t19 = ((x105-x106)|(x107-x108));

	if (t19 != -55910955181953LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x110 = 0;
	int8_t x111 = INT8_MIN;
	volatile int64_t x112 = INT64_MIN;
	int64_t t20 = -7159893490539LL;

	t20 = ((x109-x110)|(x111-x112));

	if (t20 != -23LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x113 = UINT64_MAX;
	int64_t x114 = -2772LL;
	volatile int16_t x115 = INT16_MAX;
	int64_t x116 = 3LL;
	static uint64_t t21 = 23750983347158LLU;

	t21 = ((x113-x114)|(x115-x116));

	if (t21 != 32767LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x117 = 26790963237907LL;
	uint16_t x118 = 320U;
	int8_t x119 = 14;
	volatile int64_t t22 = -1170951949300431LL;

	t22 = ((x117-x118)|(x119-x120));

	if (t22 != -33LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x126 = -3757;
	uint32_t x127 = 503U;
	uint32_t t23 = 97U;

	t23 = ((x125-x126)|(x127-x128));

	if (t23 != 4183380478U) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x133 = INT32_MIN;
	volatile int64_t x134 = -1LL;
	int64_t x135 = INT64_MAX;
	static int8_t x136 = INT8_MAX;
	int64_t t24 = -331LL;

	t24 = ((x133-x134)|(x135-x136));

	if (t24 != -127LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x141 = INT32_MIN;
	int32_t x144 = INT32_MIN;
	uint64_t t25 = 2784873LLU;

	t25 = ((x141-x142)|(x143-x144));

	if (t25 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x146 = INT32_MAX;
	int8_t x147 = INT8_MIN;
	int8_t x148 = 7;
	volatile int64_t t26 = 478259892963037351LL;

	t26 = ((x145-x146)|(x147-x148));

	if (t26 != -3LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x153 = UINT8_MAX;
	uint64_t x155 = UINT64_MAX;
	int32_t x156 = 692221469;
	volatile uint64_t t27 = 2383709862072413061LLU;

	t27 = ((x153-x154)|(x155-x156));

	if (t27 != 18446744073017330146LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x159 = 1576U;
	uint64_t x160 = UINT64_MAX;
	static volatile uint64_t t28 = 1335050338464055LLU;

	t28 = ((x157-x158)|(x159-x160));

	if (t28 != 24895039LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x161 = UINT32_MAX;
	static uint16_t x162 = UINT16_MAX;
	volatile int16_t x163 = -1;
	uint16_t x164 = UINT16_MAX;
	volatile uint32_t t29 = 2176U;

	t29 = ((x161-x162)|(x163-x164));

	if (t29 != 4294901760U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x165 = INT16_MIN;
	int8_t x166 = INT8_MAX;
	int64_t x167 = -1793284281345LL;
	int32_t x168 = INT32_MAX;
	static volatile int64_t t30 = -2LL;

	t30 = ((x165-x166)|(x167-x168));

	if (t30 != -32895LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x173 = 37U;
	int32_t x174 = 121814688;
	static uint64_t x176 = 525884LLU;

	t31 = ((x173-x174)|(x175-x176));

	if (t31 != 18446744073709550021LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x181 = -1;
	volatile int64_t x182 = INT64_MIN;
	static int32_t x184 = INT32_MAX;

	t32 = ((x181-x182)|(x183-x184));

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x186 = UINT64_MAX;
	uint16_t x188 = UINT16_MAX;
	volatile uint64_t t33 = 1047521065756765LLU;

	t33 = ((x185-x186)|(x187-x188));

	if (t33 != 18446744073709463961LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x189 = -3256;
	static int64_t x190 = -1LL;
	int8_t x192 = INT8_MAX;
	int64_t t34 = -12382272685LL;

	t34 = ((x189-x190)|(x191-x192));

	if (t34 != -55LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x193 = 1U;
	int16_t x194 = 6952;
	int64_t x195 = INT64_MIN;
	static int64_t x196 = INT64_MIN;
	int64_t t35 = -3496447LL;

	t35 = ((x193-x194)|(x195-x196));

	if (t35 != -6951LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x197 = -126;
	int64_t x198 = INT64_MIN;
	int16_t x200 = INT16_MIN;
	static int64_t t36 = -8746023567LL;

	t36 = ((x197-x198)|(x199-x200));

	if (t36 != 9223372036854775682LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x201 = 11871502LLU;
	int64_t x202 = INT64_MAX;
	int64_t x203 = INT64_MIN;
	int16_t x204 = INT16_MIN;

	t37 = ((x201-x202)|(x203-x204));

	if (t37 != 9223372036866680079LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x205 = 904593356;
	uint16_t x206 = 57U;
	static int8_t x207 = INT8_MIN;
	uint32_t x208 = 52375217U;
	uint32_t t38 = 114U;

	t38 = ((x205-x206)|(x207-x208));

	if (t38 != 4260036575U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x209 = INT32_MIN;
	uint32_t x210 = 40U;
	static uint16_t x211 = 29843U;
	int32_t x212 = 2482936;
	uint32_t t39 = 45U;

	t39 = ((x209-x210)|(x211-x212));

	if (t39 != 4294967259U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x213 = INT8_MIN;
	int64_t x214 = -409LL;
	uint8_t x215 = 18U;
	uint64_t x216 = 17934LLU;
	static volatile uint64_t t40 = 169LLU;

	t40 = ((x213-x214)|(x215-x216));

	if (t40 != 18446744073709533981LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int64_t x220 = -1LL;
	static int64_t t41 = 1256587090LL;

	t41 = ((x217-x218)|(x219-x220));

	if (t41 != 3424369LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x221 = 42981LL;
	uint32_t x222 = UINT32_MAX;
	volatile int64_t x223 = INT64_MIN;

	t42 = ((x221-x222)|(x223-x224));

	if (t42 != -4294924314LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x225 = UINT8_MAX;
	int32_t x227 = INT32_MIN;
	int16_t x228 = INT16_MIN;
	int64_t t43 = 2603009895396521LL;

	t43 = ((x225-x226)|(x227-x228));

	if (t43 != -2147450624LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x230 = INT32_MAX;
	static int32_t x231 = INT32_MIN;
	int32_t x232 = -128428582;
	int32_t t44 = -3;

	t44 = ((x229-x230)|(x231-x232));

	if (t44 != -2019055066) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x234 = 148614;
	int64_t x235 = INT64_MAX;
	int8_t x236 = INT8_MAX;
	volatile int64_t t45 = -28728609938591577LL;

	t45 = ((x233-x234)|(x235-x236));

	if (t45 != 9223372036854775801LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x237 = UINT64_MAX;
	volatile uint16_t x239 = 25U;
	volatile uint64_t t46 = 975652LLU;

	t46 = ((x237-x238)|(x239-x240));

	if (t46 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x241 = 1;
	int64_t x243 = INT64_MAX;
	int8_t x244 = INT8_MAX;
	int64_t t47 = -491779938264051419LL;

	t47 = ((x241-x242)|(x243-x244));

	if (t47 != -126LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x246 = INT16_MIN;
	int64_t x247 = 51105LL;
	volatile int8_t x248 = 0;
	volatile int64_t t48 = -3417022848LL;

	t48 = ((x245-x246)|(x247-x248));

	if (t48 != 51199LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x249 = INT16_MIN;
	uint16_t x252 = 1U;

	t49 = ((x249-x250)|(x251-x252));

	if (t49 != 9223372036854743612LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x257 = 3005694440LL;
	int32_t x258 = INT32_MIN;
	uint8_t x259 = 26U;
	int8_t x260 = INT8_MAX;
	volatile int64_t t50 = -439LL;

	t50 = ((x257-x258)|(x259-x260));

	if (t50 != -5LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x261 = INT16_MIN;
	volatile int64_t x262 = -1LL;
	volatile int64_t x263 = INT64_MAX;
	int32_t x264 = INT32_MAX;
	static int64_t t51 = -714922220342LL;

	t51 = ((x261-x262)|(x263-x264));

	if (t51 != -32767LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x265 = INT8_MIN;
	uint16_t x266 = 790U;
	volatile uint16_t x267 = 1U;
	int32_t t52 = 2;

	t52 = ((x265-x266)|(x267-x268));

	if (t52 != -517) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x269 = INT8_MIN;
	int8_t x271 = INT8_MIN;
	static int16_t x272 = INT16_MIN;
	volatile int32_t t53 = 27;

	t53 = ((x269-x270)|(x271-x272));

	if (t53 != 2147483520) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x273 = -205;
	static int64_t x275 = INT64_MIN;
	static int32_t x276 = INT32_MIN;

	t54 = ((x273-x274)|(x275-x276));

	if (t54 != -9LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x281 = -1;
	uint16_t x282 = 46U;
	int8_t x283 = 1;
	uint8_t x284 = UINT8_MAX;

	t55 = ((x281-x282)|(x283-x284));

	if (t55 != -45) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x289 = INT32_MIN;
	int8_t x290 = -1;
	uint16_t x291 = UINT16_MAX;
	static int8_t x292 = INT8_MIN;
	volatile int32_t t56 = -657476578;

	t56 = ((x289-x290)|(x291-x292));

	if (t56 != -2147417985) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x293 = -1;
	static int32_t x294 = INT32_MAX;
	static uint32_t x295 = UINT32_MAX;
	static uint32_t t57 = 401103886U;

	t57 = ((x293-x294)|(x295-x296));

	if (t57 != 4294967217U) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x297 = INT32_MIN;
	uint64_t x298 = 549913796901090LLU;
	volatile int64_t x299 = -114LL;
	int8_t x300 = INT8_MAX;
	uint64_t t58 = 736132473669868LLU;

	t58 = ((x297-x298)|(x299-x300));

	if (t58 != 18446744073709551391LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x301 = INT32_MIN;
	int16_t x302 = -173;
	uint64_t t59 = 1044171LLU;

	t59 = ((x301-x302)|(x303-x304));

	if (t59 != 18446744072238934525LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x309 = -15772;
	int16_t x310 = INT16_MIN;
	uint16_t x311 = 11U;
	volatile int32_t t60 = 12499745;

	t60 = ((x309-x310)|(x311-x312));

	if (t60 != 17004) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x313 = 30U;
	int16_t x315 = 6;
	static uint8_t x316 = 17U;
	volatile uint32_t t61 = 5U;

	t61 = ((x313-x314)|(x315-x316));

	if (t61 != 4294967293U) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x317 = 136869503U;
	uint32_t x318 = 27010U;
	static int64_t x319 = -58449900633LL;
	int64_t x320 = -34804444LL;
	int64_t t62 = 6LL;

	t62 = ((x317-x318)|(x319-x320));

	if (t62 != -58280354049LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x321 = 11537;
	int8_t x322 = -1;
	int16_t x323 = INT16_MIN;
	int8_t x324 = INT8_MIN;
	int32_t t63 = 176947;

	t63 = ((x321-x322)|(x323-x324));

	if (t63 != -21102) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x326 = 428324;
	uint32_t x327 = UINT32_MAX;
	int32_t x328 = -2870;
	volatile uint32_t t64 = 331532715U;

	t64 = ((x325-x326)|(x327-x328));

	if (t64 != 4294508541U) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x329 = UINT8_MAX;
	int64_t x330 = -21875082923322775LL;
	uint64_t x331 = 1LLU;
	int32_t x332 = INT32_MIN;
	volatile uint64_t t65 = 23033LLU;

	t65 = ((x329-x330)|(x331-x332));

	if (t65 != 21875082923323031LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint8_t x333 = 13U;
	volatile int8_t x335 = -1;
	uint64_t x336 = UINT64_MAX;
	static uint64_t t66 = 11857405438LLU;

	t66 = ((x333-x334)|(x335-x336));

	if (t66 != 14LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x337 = INT8_MIN;
	int16_t x338 = INT16_MAX;
	volatile int16_t x339 = INT16_MIN;
	int32_t t67 = -6409231;

	t67 = ((x337-x338)|(x339-x340));

	if (t67 != -32769) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x342 = -1;
	uint64_t x343 = UINT64_MAX;
	uint8_t x344 = UINT8_MAX;
	uint64_t t68 = 17503LLU;

	t68 = ((x341-x342)|(x343-x344));

	if (t68 != 18446744073709551363LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint64_t x345 = 7LLU;
	volatile int8_t x346 = -1;
	static volatile uint16_t x347 = UINT16_MAX;
	uint64_t x348 = 7367741447372494708LLU;
	volatile uint64_t t69 = 339321560581085LLU;

	t69 = ((x345-x346)|(x347-x348));

	if (t69 != 11079002626337122443LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x349 = -1;
	int8_t x350 = INT8_MAX;
	int8_t x351 = -1;
	int32_t x352 = -1;

	t70 = ((x349-x350)|(x351-x352));

	if (t70 != -128) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x353 = -1LL;
	int32_t x355 = -1;
	int64_t x356 = INT64_MIN;
	volatile int64_t t71 = INT64_MAX;

	t71 = ((x353-x354)|(x355-x356));

	if (t71 != INT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x358 = -1;
	volatile uint8_t x359 = 2U;
	int64_t x360 = -75305573480LL;
	int64_t t72 = -255789639797614LL;

	t72 = ((x357-x358)|(x359-x360));

	if (t72 != -2003837845LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x361 = 535U;
	int64_t x362 = INT64_MAX;
	int64_t x363 = 3236777307LL;
	volatile int64_t x364 = 72LL;

	t73 = ((x361-x362)|(x363-x364));

	if (t73 != -9223372033617998053LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x365 = 11U;
	uint8_t x366 = 59U;
	int32_t x367 = INT32_MIN;
	int64_t x368 = -1LL;

	t74 = ((x365-x366)|(x367-x368));

	if (t74 != -47LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x369 = 82819725LLU;
	int64_t x370 = 881LL;
	uint16_t x371 = UINT16_MAX;
	int64_t x372 = INT64_MAX;
	static volatile uint64_t t75 = 55335LLU;

	t75 = ((x369-x370)|(x371-x372));

	if (t75 != 9223372036937594652LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x377 = 274994394973LL;
	static int32_t x378 = 2;
	int16_t x379 = INT16_MIN;
	int32_t x380 = -1;
	volatile int64_t t76 = 242LL;

	t76 = ((x377-x378)|(x379-x380));

	if (t76 != -2213LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x382 = INT16_MAX;
	volatile uint64_t x383 = UINT64_MAX;
	static uint8_t x384 = 41U;
	volatile uint64_t t77 = 310233859527LLU;

	t77 = ((x381-x382)|(x383-x384));

	if (t77 != 18446744073709551574LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x385 = -3;
	volatile int16_t x387 = INT16_MIN;
	volatile uint32_t x388 = 25945831U;

	t78 = ((x385-x386)|(x387-x388));

	if (t78 != 4294967167U) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x389 = 2U;
	int16_t x390 = -2019;
	static volatile uint16_t x391 = UINT16_MAX;
	static uint32_t t79 = 110111615U;

	t79 = ((x389-x390)|(x391-x392));

	if (t79 != 67557U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x393 = -943;
	int8_t x394 = INT8_MAX;
	static int8_t x395 = INT8_MIN;
	uint16_t x396 = UINT16_MAX;
	volatile int32_t t80 = 55;

	t80 = ((x393-x394)|(x395-x396));

	if (t80 != -45) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint64_t x401 = UINT64_MAX;
	static int64_t x403 = INT64_MAX;
	uint64_t x404 = UINT64_MAX;
	volatile uint64_t t81 = 8458LLU;

	t81 = ((x401-x402)|(x403-x404));

	if (t81 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x405 = -1;
	int64_t x406 = INT64_MIN;
	int32_t x407 = -10;
	int16_t x408 = -63;
	static volatile int64_t t82 = INT64_MAX;

	t82 = ((x405-x406)|(x407-x408));

	if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x409 = -1;
	volatile int8_t x411 = 1;

	t83 = ((x409-x410)|(x411-x412));

	if (t83 != -2178) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x414 = 476LL;
	volatile int16_t x415 = INT16_MAX;

	t84 = ((x413-x414)|(x415-x416));

	if (t84 != -487LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x422 = UINT64_MAX;
	int32_t x423 = INT32_MIN;
	static volatile uint32_t x424 = 120U;
	static uint64_t t85 = 369719391887511LLU;

	t85 = ((x421-x422)|(x423-x424));

	if (t85 != 103106101599272874LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x425 = -1LL;
	int8_t x426 = 0;
	static int32_t x427 = -1;
	uint64_t x428 = 55172110LLU;
	static volatile uint64_t t86 = UINT64_MAX;

	t86 = ((x425-x426)|(x427-x428));

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x429 = INT16_MIN;
	int32_t x430 = INT32_MIN;
	static uint32_t x431 = 13123U;
	volatile int8_t x432 = INT8_MIN;

	t87 = ((x429-x430)|(x431-x432));

	if (t87 != 2147464131U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x433 = 1;
	volatile uint16_t x434 = 12U;
	volatile int64_t x435 = INT64_MAX;
	int16_t x436 = INT16_MAX;
	volatile int64_t t88 = 2544545161632297LL;

	t88 = ((x433-x434)|(x435-x436));

	if (t88 != -11LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x438 = 12434;
	uint8_t x439 = 6U;
	int16_t x440 = -24;

	t89 = ((x437-x438)|(x439-x440));

	if (t89 != -12418) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x441 = INT32_MAX;
	uint64_t x442 = 679LLU;
	uint32_t x443 = 28U;
	int32_t x444 = -1;
	uint64_t t90 = 2326LLU;

	t90 = ((x441-x442)|(x443-x444));

	if (t90 != 2147482973LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint64_t t91 = 3596218482783406LLU;

	t91 = ((x445-x446)|(x447-x448));

	if (t91 != 1013682839578714366LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x450 = -22156978916755LL;
	static int16_t x451 = INT16_MIN;
	int16_t x452 = 0;
	static int64_t t92 = -1072029703392LL;

	t92 = ((x449-x450)|(x451-x452));

	if (t92 != -29294LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x454 = -74088463450702LL;
	static uint16_t x455 = UINT16_MAX;
	int64_t x456 = -1LL;
	static int64_t t93 = 5060716LL;

	t93 = ((x453-x454)|(x455-x456));

	if (t93 != -9223297948391325106LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x457 = UINT64_MAX;
	static volatile int32_t x458 = INT32_MIN;
	static uint64_t t94 = 49LLU;

	t94 = ((x457-x458)|(x459-x460));

	if (t94 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x461 = -1LL;
	uint16_t x462 = 10330U;
	uint16_t x463 = 2U;
	static volatile int8_t x464 = INT8_MIN;

	t95 = ((x461-x462)|(x463-x464));

	if (t95 != -10329LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x465 = 15602U;
	volatile int8_t x466 = -1;
	static uint64_t x468 = 14020857816559313LLU;
	volatile uint64_t t96 = 17203LLU;

	t96 = ((x465-x466)|(x467-x468));

	if (t96 != 18432723215893003775LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x470 = INT16_MIN;
	uint32_t x472 = 728230U;
	volatile uint32_t t97 = 1151539U;

	t97 = ((x469-x470)|(x471-x472));

	if (t97 != 4294242437U) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x473 = 125U;
	int64_t x476 = -928110174LL;
	int64_t t98 = -7315719568701LL;

	t98 = ((x473-x474)|(x475-x476));

	if (t98 != 4294958941LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x477 = INT16_MIN;
	int8_t x479 = 50;
	volatile int8_t x480 = 18;
	static volatile uint64_t t99 = 1LLU;

	t99 = ((x477-x478)|(x479-x480));

	if (t99 != 16424350334963684082LLU) { NG(); } else { ; }
	
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

