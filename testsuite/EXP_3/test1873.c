#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x5 = 114;
int16_t x6 = INT16_MAX;
static uint32_t x8 = 200252407U;
uint8_t x19 = UINT8_MAX;
int16_t x22 = 2397;
int64_t t3 = -1927329LL;
uint64_t x32 = 12992LLU;
static int64_t x36 = -437340828LL;
int16_t x40 = -1;
int64_t x41 = INT64_MIN;
int32_t x45 = -246;
int64_t x48 = -1LL;
volatile uint64_t x49 = 1057378705315301LLU;
int16_t x53 = INT16_MIN;
volatile int32_t x56 = INT32_MAX;
int16_t x87 = INT16_MAX;
volatile int8_t x96 = INT8_MAX;
volatile uint32_t t19 = 1554247286U;
int64_t x103 = -3346248583021454LL;
volatile int16_t x110 = INT16_MIN;
int64_t x111 = 25740875717508854LL;
int16_t x114 = INT16_MIN;
static int64_t x115 = 3282438LL;
volatile int64_t x126 = -213743772858LL;
static int64_t x128 = 711207104327720LL;
int32_t x140 = INT32_MIN;
volatile uint32_t t27 = 43630U;
uint32_t x173 = UINT32_MAX;
volatile uint32_t t32 = 241987U;
uint16_t x178 = UINT16_MAX;
static int32_t x179 = -1;
int64_t x180 = INT64_MIN;
int64_t t33 = -8996209679552LL;
static volatile uint64_t x185 = UINT64_MAX;
int16_t x191 = 1;
volatile int8_t x195 = 9;
int16_t x206 = INT16_MIN;
int8_t x207 = 20;
uint8_t x208 = 20U;
volatile int64_t t40 = -215LL;
volatile int32_t t41 = -25;
int32_t x221 = -1;
int8_t x223 = INT8_MAX;
static int16_t x229 = INT16_MIN;
static uint8_t x235 = 19U;
static uint8_t x242 = UINT8_MAX;
int8_t x245 = INT8_MAX;
static int32_t x247 = -894;
static uint16_t x250 = 12U;
volatile uint64_t x258 = UINT64_MAX;
int32_t x259 = -8;
static uint32_t x262 = 90121U;
uint64_t x263 = 1356166747178LLU;
uint32_t x274 = 10U;
uint32_t x276 = 338733U;
uint64_t t53 = 457140LLU;
static int64_t x282 = INT64_MIN;
int64_t x290 = -1LL;
int16_t x295 = INT16_MIN;
int8_t x296 = INT8_MAX;
uint8_t x301 = UINT8_MAX;
uint64_t t59 = 140LLU;
int8_t x309 = -1;
uint64_t x316 = 251LLU;
int64_t x317 = -1LL;
uint32_t x318 = UINT32_MAX;
static int64_t t63 = 24551LL;
int32_t x343 = 7;
static int8_t x344 = INT8_MIN;
int32_t x345 = -2;
volatile int32_t x347 = INT32_MIN;
static int32_t t67 = 2;
static int16_t x354 = INT16_MIN;
volatile int32_t t69 = -1;
int8_t x360 = INT8_MIN;
volatile int32_t t70 = -1950079;
volatile int8_t x365 = 1;
int32_t t71 = -63988;
uint16_t x374 = 592U;
int16_t x378 = INT16_MIN;
volatile uint8_t x379 = UINT8_MAX;
int8_t x388 = INT8_MIN;
static volatile uint64_t t76 = 116273LLU;
uint8_t x392 = UINT8_MAX;
int64_t x394 = -1LL;
int32_t x395 = -1;
static uint16_t x397 = 4683U;
uint64_t x402 = UINT64_MAX;
static uint64_t t80 = 739428LLU;
volatile uint64_t t81 = 16463LLU;
volatile int32_t x409 = INT32_MIN;
int8_t x428 = 30;
int64_t x433 = INT64_MIN;
int8_t x442 = -27;
volatile int32_t t87 = 9;
static int64_t x452 = 2002530611LL;
static int32_t x477 = -1;
static int8_t x486 = -1;
uint32_t t98 = 126692U;


void f0(void) {
	static int16_t x1 = INT16_MIN;
	int8_t x2 = 2;
	volatile uint8_t x3 = UINT8_MAX;
	int16_t x4 = INT16_MIN;
	volatile int32_t t0 = -1060186;

	t0 = ((x1-x2)+(x3|x4));

	if (t0 != -65283) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x7 = -57;
	static volatile uint32_t t1 = 35U;

	t1 = ((x5-x6)+(x7|x8));

	if (t1 != 4294934634U) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int16_t x17 = INT16_MIN;
	volatile uint32_t x18 = UINT32_MAX;
	volatile int16_t x20 = 0;
	uint32_t t2 = 14638258U;

	t2 = ((x17-x18)+(x19|x20));

	if (t2 != 4294934784U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x21 = INT16_MIN;
	int32_t x23 = -2928;
	volatile int64_t x24 = -1LL;

	t3 = ((x21-x22)+(x23|x24));

	if (t3 != -35166LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x29 = INT16_MAX;
	uint64_t x30 = 10585570LLU;
	static uint64_t x31 = UINT64_MAX;
	volatile uint64_t t4 = 14820545143LLU;

	t4 = ((x29-x30)+(x31|x32));

	if (t4 != 18446744073698998812LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x33 = 1;
	int16_t x34 = INT16_MIN;
	uint8_t x35 = 27U;
	int64_t t5 = 16132701986LL;

	t5 = ((x33-x34)+(x35|x36));

	if (t5 != -437308032LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x37 = 1;
	uint8_t x38 = 2U;
	uint32_t x39 = UINT32_MAX;
	volatile uint32_t t6 = 20931260U;

	t6 = ((x37-x38)+(x39|x40));

	if (t6 != 4294967294U) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x42 = INT16_MIN;
	uint8_t x43 = 9U;
	int32_t x44 = 356156;
	int64_t t7 = 6LL;

	t7 = ((x41-x42)+(x43|x44));

	if (t7 != -9223372036854386883LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x46 = UINT64_MAX;
	uint64_t x47 = 5534682097261884750LLU;
	uint64_t t8 = 9660LLU;

	t8 = ((x45-x46)+(x47|x48));

	if (t8 != 18446744073709551370LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x50 = INT8_MIN;
	static int8_t x51 = -1;
	static int8_t x52 = -1;
	volatile uint64_t t9 = 214241555LLU;

	t9 = ((x49-x50)+(x51|x52));

	if (t9 != 1057378705315428LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x54 = 223U;
	int64_t x55 = INT64_MIN;
	int64_t t10 = -915019918389884541LL;

	t10 = ((x53-x54)+(x55|x56));

	if (t10 != -9223372034707325152LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x57 = 4003U;
	uint16_t x58 = 18U;
	int16_t x59 = 1244;
	int64_t x60 = -1LL;
	static volatile int64_t t11 = -13LL;

	t11 = ((x57-x58)+(x59|x60));

	if (t11 != 3984LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x61 = -900;
	volatile uint32_t x62 = 28293560U;
	uint16_t x63 = 42U;
	uint32_t x64 = UINT32_MAX;
	volatile uint32_t t12 = 1485U;

	t12 = ((x61-x62)+(x63|x64));

	if (t12 != 4266672835U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x65 = 55U;
	int16_t x66 = INT16_MAX;
	uint8_t x67 = 34U;
	int8_t x68 = -50;
	volatile int32_t t13 = 4405413;

	t13 = ((x65-x66)+(x67|x68));

	if (t13 != -32730) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x69 = -1;
	uint8_t x70 = UINT8_MAX;
	volatile uint64_t x71 = UINT64_MAX;
	int32_t x72 = INT32_MAX;
	volatile uint64_t t14 = 11225715029292LLU;

	t14 = ((x69-x70)+(x71|x72));

	if (t14 != 18446744073709551359LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x73 = INT16_MIN;
	uint64_t x74 = 1896LLU;
	int32_t x75 = 498034;
	volatile int64_t x76 = 338352861939378943LL;
	static volatile uint64_t t15 = 87984091934778578LLU;

	t15 = ((x73-x74)+(x75|x76));

	if (t15 != 338352861939709079LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x77 = 2U;
	volatile int32_t x78 = 333;
	int16_t x79 = -1;
	int64_t x80 = INT64_MIN;
	int64_t t16 = 453644321960LL;

	t16 = ((x77-x78)+(x79|x80));

	if (t16 != 4294966964LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x85 = -1;
	volatile uint64_t x86 = UINT64_MAX;
	static uint16_t x88 = 28971U;
	volatile uint64_t t17 = 54085508054LLU;

	t17 = ((x85-x86)+(x87|x88));

	if (t17 != 32767LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x93 = 1;
	uint64_t x94 = 67525169522798LLU;
	static int16_t x95 = 2;
	uint64_t t18 = 410LLU;

	t18 = ((x93-x94)+(x95|x96));

	if (t18 != 18446676548540028946LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x97 = INT8_MIN;
	uint32_t x98 = 5U;
	uint32_t x99 = UINT32_MAX;
	static int16_t x100 = INT16_MAX;

	t19 = ((x97-x98)+(x99|x100));

	if (t19 != 4294967162U) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x101 = INT32_MAX;
	static uint32_t x102 = 4677U;
	int64_t x104 = INT64_MIN;
	int64_t t20 = 15830453LL;

	t20 = ((x101-x102)+(x103|x104));

	if (t20 != -3346246435542484LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x109 = -1331;
	volatile int16_t x112 = INT16_MAX;
	int64_t t21 = 40173492473425LL;

	t21 = ((x109-x110)+(x111|x112));

	if (t21 != 25740875717540556LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x113 = UINT8_MAX;
	int8_t x116 = -1;
	volatile int64_t t22 = 15816067364LL;

	t22 = ((x113-x114)+(x115|x116));

	if (t22 != 33022LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x117 = 3370U;
	uint32_t x118 = 434116U;
	static volatile int32_t x119 = INT32_MAX;
	volatile int8_t x120 = 3;
	volatile uint32_t t23 = 6U;

	t23 = ((x117-x118)+(x119|x120));

	if (t23 != 2147052901U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x121 = UINT8_MAX;
	uint64_t x122 = UINT64_MAX;
	uint32_t x123 = 50U;
	int16_t x124 = INT16_MIN;
	uint64_t t24 = 17929144884401618LLU;

	t24 = ((x121-x122)+(x123|x124));

	if (t24 != 4294934834LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x125 = 0U;
	int16_t x127 = INT16_MIN;
	int64_t t25 = 2763147314899800703LL;

	t25 = ((x125-x126)+(x127|x128));

	if (t25 != 213743752418LL) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x133 = 121U;
	uint16_t x134 = 0U;
	volatile int32_t x135 = INT32_MIN;
	uint64_t x136 = 1497592963380LLU;
	volatile uint64_t t26 = 3LLU;

	t26 = ((x133-x134)+(x135|x136));

	if (t26 != 18446744072358928813LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x137 = -8;
	uint8_t x138 = 12U;
	uint32_t x139 = 436245U;

	t27 = ((x137-x138)+(x139|x140));

	if (t27 != 2147919873U) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x141 = 12861642395LLU;
	volatile int32_t x142 = 3443179;
	volatile uint8_t x143 = 23U;
	int16_t x144 = INT16_MIN;
	volatile uint64_t t28 = 1018441112LLU;

	t28 = ((x141-x142)+(x143|x144));

	if (t28 != 12858166471LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x149 = INT16_MIN;
	volatile uint16_t x150 = 70U;
	static int64_t x151 = 5LL;
	volatile int64_t x152 = 558002571702LL;
	volatile int64_t t29 = -125366888674123LL;

	t29 = ((x149-x150)+(x151|x152));

	if (t29 != 558002538865LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x153 = -1;
	uint8_t x154 = UINT8_MAX;
	volatile int32_t x155 = INT32_MIN;
	static int16_t x156 = INT16_MIN;
	int32_t t30 = -1925072;

	t30 = ((x153-x154)+(x155|x156));

	if (t30 != -33024) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x169 = INT32_MIN;
	int64_t x170 = 230973795829LL;
	int8_t x171 = -1;
	static int16_t x172 = -254;
	int64_t t31 = -22285323624LL;

	t31 = ((x169-x170)+(x171|x172));

	if (t31 != -233121279478LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x174 = INT32_MIN;
	int8_t x175 = INT8_MIN;
	int16_t x176 = -1;

	t32 = ((x173-x174)+(x175|x176));

	if (t32 != 2147483646U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x177 = INT16_MIN;

	t33 = ((x177-x178)+(x179|x180));

	if (t33 != -98304LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x186 = -240877;
	static int32_t x187 = -536148143;
	volatile int8_t x188 = INT8_MIN;
	uint64_t t34 = 394080947797993LLU;

	t34 = ((x185-x186)+(x187|x188));

	if (t34 != 240829LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x189 = -1;
	int32_t x190 = INT32_MAX;
	uint64_t x192 = 1573347LLU;
	static uint64_t t35 = 1LLU;

	t35 = ((x189-x190)+(x191|x192));

	if (t35 != 18446744071563641315LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x193 = -1050433912044412874LL;
	volatile int16_t x194 = 15890;
	static volatile int16_t x196 = -34;
	volatile int64_t t36 = 3213237LL;

	t36 = ((x193-x194)+(x195|x196));

	if (t36 != -1050433912044428797LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int64_t x197 = -1LL;
	int32_t x198 = INT32_MAX;
	volatile int16_t x199 = INT16_MIN;
	static int64_t x200 = 370LL;
	volatile int64_t t37 = 134409521LL;

	t37 = ((x197-x198)+(x199|x200));

	if (t37 != -2147516046LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x201 = -1;
	static uint8_t x202 = UINT8_MAX;
	uint32_t x203 = 2989276U;
	int32_t x204 = INT32_MIN;
	uint32_t t38 = 1869984711U;

	t38 = ((x201-x202)+(x203|x204));

	if (t38 != 2150472668U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x205 = -1LL;
	int64_t t39 = -398366874287728LL;

	t39 = ((x205-x206)+(x207|x208));

	if (t39 != 32787LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x209 = -6116744339296493LL;
	volatile uint32_t x210 = 2314U;
	int16_t x211 = -1;
	static uint16_t x212 = 13133U;

	t40 = ((x209-x210)+(x211|x212));

	if (t40 != -6116744339298808LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x217 = 30U;
	uint8_t x218 = 35U;
	int32_t x219 = INT32_MAX;
	int16_t x220 = INT16_MAX;

	t41 = ((x217-x218)+(x219|x220));

	if (t41 != 2147483642) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x222 = -1LL;
	int8_t x224 = INT8_MAX;
	int64_t t42 = 229403LL;

	t42 = ((x221-x222)+(x223|x224));

	if (t42 != 127LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x225 = INT16_MAX;
	volatile int32_t x226 = -1;
	static int16_t x227 = INT16_MIN;
	int32_t x228 = -1;
	static volatile int32_t t43 = -1;

	t43 = ((x225-x226)+(x227|x228));

	if (t43 != 32767) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x230 = INT8_MIN;
	uint32_t x231 = UINT32_MAX;
	static int16_t x232 = -26;
	volatile uint32_t t44 = 940815U;

	t44 = ((x229-x230)+(x231|x232));

	if (t44 != 4294934655U) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x233 = UINT32_MAX;
	int32_t x234 = INT32_MAX;
	uint8_t x236 = 15U;
	volatile uint32_t t45 = 134U;

	t45 = ((x233-x234)+(x235|x236));

	if (t45 != 2147483679U) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x237 = UINT64_MAX;
	static int8_t x238 = INT8_MAX;
	int8_t x239 = -1;
	static uint8_t x240 = 18U;
	uint64_t t46 = 17LLU;

	t46 = ((x237-x238)+(x239|x240));

	if (t46 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x241 = 3U;
	int8_t x243 = INT8_MIN;
	static uint16_t x244 = 16035U;
	int32_t t47 = 26;

	t47 = ((x241-x242)+(x243|x244));

	if (t47 != -345) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x246 = INT32_MAX;
	int64_t x248 = -1LL;
	volatile int64_t t48 = 551327861978LL;

	t48 = ((x245-x246)+(x247|x248));

	if (t48 != -2147483521LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x249 = UINT64_MAX;
	int64_t x251 = INT64_MAX;
	int64_t x252 = -1LL;
	volatile uint64_t t49 = 195LLU;

	t49 = ((x249-x250)+(x251|x252));

	if (t49 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x253 = 0U;
	uint16_t x254 = 0U;
	int8_t x255 = INT8_MIN;
	int32_t x256 = INT32_MIN;
	volatile int32_t t50 = 1967087;

	t50 = ((x253-x254)+(x255|x256));

	if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x257 = -1;
	uint64_t x260 = 22036749607LLU;
	static volatile uint64_t t51 = UINT64_MAX;

	t51 = ((x257-x258)+(x259|x260));

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x261 = -345LL;
	int8_t x264 = 12;
	volatile uint64_t t52 = 162585865744117LLU;

	t52 = ((x261-x262)+(x263|x264));

	if (t52 != 1356166656716LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x273 = 1983;
	volatile uint64_t x275 = 1LLU;

	t53 = ((x273-x274)+(x275|x276));

	if (t53 != 340706LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x281 = INT32_MIN;
	int16_t x283 = INT16_MIN;
	int8_t x284 = -1;
	static volatile int64_t t54 = 22623068389LL;

	t54 = ((x281-x282)+(x283|x284));

	if (t54 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x285 = UINT16_MAX;
	volatile int32_t x286 = INT32_MAX;
	int64_t x287 = INT64_MAX;
	volatile int16_t x288 = INT16_MIN;
	volatile int64_t t55 = -6312852783933734LL;

	t55 = ((x285-x286)+(x287|x288));

	if (t55 != -2147418113LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x289 = 5914U;
	int64_t x291 = -1LL;
	uint64_t x292 = UINT64_MAX;
	static uint64_t t56 = 151066347066332LLU;

	t56 = ((x289-x290)+(x291|x292));

	if (t56 != 5914LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x293 = UINT32_MAX;
	static uint8_t x294 = UINT8_MAX;
	uint32_t t57 = 69U;

	t57 = ((x293-x294)+(x295|x296));

	if (t57 != 4294934399U) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x297 = 374485LLU;
	volatile int64_t x298 = INT64_MIN;
	volatile int64_t x299 = INT64_MAX;
	uint32_t x300 = 123218U;
	volatile uint64_t t58 = 418LLU;

	t58 = ((x297-x298)+(x299|x300));

	if (t58 != 374484LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x302 = 8;
	uint64_t x303 = 51131791LLU;
	int64_t x304 = INT64_MIN;

	t59 = ((x301-x302)+(x303|x304));

	if (t59 != 9223372036905907846LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x305 = 110U;
	volatile uint64_t x306 = 23322404LLU;
	static int8_t x307 = -4;
	int32_t x308 = 568719;
	uint64_t t60 = 99939LLU;

	t60 = ((x305-x306)+(x307|x308));

	if (t60 != 18446744073686229321LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x310 = 811187LL;
	uint16_t x311 = UINT16_MAX;
	int16_t x312 = INT16_MIN;
	volatile int64_t t61 = -1788633LL;

	t61 = ((x309-x310)+(x311|x312));

	if (t61 != -811189LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x313 = UINT32_MAX;
	int16_t x314 = INT16_MIN;
	static volatile int16_t x315 = 38;
	static volatile uint64_t t62 = 24913733308150LLU;

	t62 = ((x313-x314)+(x315|x316));

	if (t62 != 33022LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x319 = 1;
	static int64_t x320 = -152655525825419LL;

	t63 = ((x317-x318)+(x319|x320));

	if (t63 != -152659820792715LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x325 = UINT32_MAX;
	volatile uint64_t x326 = 7031511464156277888LLU;
	int64_t x327 = -849376764026092587LL;
	int8_t x328 = INT8_MAX;
	uint64_t t64 = 58430392LLU;

	t64 = ((x325-x326)+(x327|x328));

	if (t64 != 10565855849822148478LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x337 = -1;
	int8_t x338 = INT8_MAX;
	volatile uint64_t x339 = UINT64_MAX;
	volatile int64_t x340 = INT64_MIN;
	volatile uint64_t t65 = 134792134083LLU;

	t65 = ((x337-x338)+(x339|x340));

	if (t65 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x341 = UINT64_MAX;
	volatile int8_t x342 = -1;
	static volatile uint64_t t66 = 1LLU;

	t66 = ((x341-x342)+(x343|x344));

	if (t66 != 18446744073709551495LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x346 = INT32_MIN;
	int32_t x348 = INT32_MAX;

	t67 = ((x345-x346)+(x347|x348));

	if (t67 != 2147483645) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x349 = INT8_MIN;
	int32_t x350 = -1;
	int32_t x351 = -1;
	uint8_t x352 = 11U;
	int32_t t68 = 0;

	t68 = ((x349-x350)+(x351|x352));

	if (t68 != -128) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x353 = INT16_MAX;
	int8_t x355 = INT8_MIN;
	int8_t x356 = INT8_MAX;

	t69 = ((x353-x354)+(x355|x356));

	if (t69 != 65534) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x357 = -1;
	volatile int8_t x358 = 10;
	int16_t x359 = INT16_MIN;

	t70 = ((x357-x358)+(x359|x360));

	if (t70 != -139) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x366 = -31;
	static int8_t x367 = -1;
	uint8_t x368 = UINT8_MAX;

	t71 = ((x365-x366)+(x367|x368));

	if (t71 != 31) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x369 = INT8_MIN;
	static uint16_t x370 = 48U;
	uint32_t x371 = 0U;
	int32_t x372 = -1;
	volatile uint32_t t72 = 68595U;

	t72 = ((x369-x370)+(x371|x372));

	if (t72 != 4294967119U) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x373 = -5LL;
	uint32_t x375 = UINT32_MAX;
	volatile uint16_t x376 = 5U;
	int64_t t73 = -7567800LL;

	t73 = ((x373-x374)+(x375|x376));

	if (t73 != 4294966698LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x377 = -982;
	uint32_t x380 = 3566U;
	static uint32_t t74 = 82U;

	t74 = ((x377-x378)+(x379|x380));

	if (t74 != 35369U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x381 = 165;
	volatile int16_t x382 = INT16_MIN;
	static int16_t x383 = INT16_MIN;
	static int32_t x384 = -225180945;
	volatile int32_t t75 = 14327685;

	t75 = ((x381-x382)+(x383|x384));

	if (t75 != 916) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x385 = 41;
	int16_t x386 = INT16_MIN;
	uint64_t x387 = 397459115LLU;

	t76 = ((x385-x386)+(x387|x388));

	if (t76 != 32724LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x389 = UINT32_MAX;
	uint64_t x390 = 176080798480070096LLU;
	int8_t x391 = 15;
	static volatile uint64_t t77 = 211600730LLU;

	t77 = ((x389-x390)+(x391|x392));

	if (t77 != 18270663279524449070LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x393 = 5954U;
	static int8_t x396 = INT8_MIN;
	static volatile int64_t t78 = 29LL;

	t78 = ((x393-x394)+(x395|x396));

	if (t78 != 5954LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x398 = -1;
	static uint8_t x399 = 5U;
	uint8_t x400 = 9U;
	int32_t t79 = 15;

	t79 = ((x397-x398)+(x399|x400));

	if (t79 != 4697) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x401 = UINT8_MAX;
	static int8_t x403 = -1;
	uint32_t x404 = 112U;

	t80 = ((x401-x402)+(x403|x404));

	if (t80 != 4294967551LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x405 = 3U;
	uint8_t x406 = 1U;
	static uint8_t x407 = UINT8_MAX;
	uint64_t x408 = 4270006LLU;

	t81 = ((x405-x406)+(x407|x408));

	if (t81 != 4270081LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x410 = -1;
	uint64_t x411 = 7557404955579512LLU;
	int8_t x412 = -1;
	static volatile uint64_t t82 = 828964797LLU;

	t82 = ((x409-x410)+(x411|x412));

	if (t82 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x421 = 0;
	int64_t x422 = -19794018368704LL;
	uint8_t x423 = 0U;
	int64_t x424 = -94771LL;
	volatile int64_t t83 = 70565LL;

	t83 = ((x421-x422)+(x423|x424));

	if (t83 != 19794018273933LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x425 = -1LL;
	uint16_t x426 = 3776U;
	int64_t x427 = 2106LL;
	static int64_t t84 = 5854087LL;

	t84 = ((x425-x426)+(x427|x428));

	if (t84 != -1667LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x434 = UINT64_MAX;
	volatile uint8_t x435 = UINT8_MAX;
	int16_t x436 = INT16_MIN;
	volatile uint64_t t85 = 5456071465875LLU;

	t85 = ((x433-x434)+(x435|x436));

	if (t85 != 9223372036854743296LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x437 = -34;
	int32_t x438 = -37550;
	volatile int8_t x439 = INT8_MAX;
	int64_t x440 = INT64_MIN;
	int64_t t86 = -329065459872620974LL;

	t86 = ((x437-x438)+(x439|x440));

	if (t86 != -9223372036854738165LL) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int8_t x441 = INT8_MAX;
	int32_t x443 = INT32_MIN;
	static int16_t x444 = INT16_MIN;

	t87 = ((x441-x442)+(x443|x444));

	if (t87 != -32614) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x445 = 0LL;
	int16_t x446 = INT16_MIN;
	volatile int16_t x447 = -585;
	uint16_t x448 = UINT16_MAX;
	int64_t t88 = -7141721361LL;

	t88 = ((x445-x446)+(x447|x448));

	if (t88 != 32767LL) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int32_t x449 = INT32_MAX;
	int8_t x450 = 29;
	int32_t x451 = 10178;
	int64_t t89 = -950566349559417930LL;

	t89 = ((x449-x450)+(x451|x452));

	if (t89 != 4150015957LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x453 = UINT64_MAX;
	int32_t x454 = 167924;
	volatile int32_t x455 = INT32_MIN;
	uint32_t x456 = 7496U;
	static uint64_t t90 = 21472LLU;

	t90 = ((x453-x454)+(x455|x456));

	if (t90 != 2147323219LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x457 = INT16_MAX;
	volatile int64_t x458 = INT64_MAX;
	static int64_t x459 = INT64_MIN;
	int8_t x460 = -1;
	volatile int64_t t91 = -45446578LL;

	t91 = ((x457-x458)+(x459|x460));

	if (t91 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x461 = INT16_MIN;
	volatile uint64_t x462 = 6435645LLU;
	int64_t x463 = INT64_MIN;
	uint64_t x464 = 129659682LLU;
	volatile uint64_t t92 = 9104075506011147246LLU;

	t92 = ((x461-x462)+(x463|x464));

	if (t92 != 9223372036977967077LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x465 = 34628872789747731LLU;
	int8_t x466 = INT8_MAX;
	volatile uint16_t x467 = 2U;
	static uint8_t x468 = 4U;
	volatile uint64_t t93 = 638786545097847LLU;

	t93 = ((x465-x466)+(x467|x468));

	if (t93 != 34628872789747610LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x469 = UINT64_MAX;
	int64_t x470 = INT64_MIN;
	static volatile int8_t x471 = INT8_MAX;
	uint32_t x472 = 1509872260U;
	volatile uint64_t t94 = 261986658786714LLU;

	t94 = ((x469-x470)+(x471|x472));

	if (t94 != 9223372038364648190LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x473 = UINT32_MAX;
	uint32_t x474 = 403560U;
	int64_t x475 = -905769239248791LL;
	volatile int8_t x476 = INT8_MIN;
	static volatile int64_t t95 = -5892241LL;

	t95 = ((x473-x474)+(x475|x476));

	if (t95 != 4294563712LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x478 = 4U;
	uint16_t x479 = 16684U;
	int64_t x480 = -1LL;
	int64_t t96 = 2063745LL;

	t96 = ((x477-x478)+(x479|x480));

	if (t96 != -6LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x485 = 413;
	int8_t x487 = 1;
	int32_t x488 = INT32_MIN;
	volatile int32_t t97 = 7242;

	t97 = ((x485-x486)+(x487|x488));

	if (t97 != -2147483233) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x489 = INT16_MIN;
	volatile uint16_t x490 = 7U;
	int8_t x491 = INT8_MIN;
	uint32_t x492 = 8969199U;

	t98 = ((x489-x490)+(x491|x492));

	if (t98 != 4294934504U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x493 = INT64_MAX;
	int32_t x494 = 3053983;
	int32_t x495 = INT32_MIN;
	volatile int32_t x496 = INT32_MAX;
	volatile int64_t t99 = 81295350104LL;

	t99 = ((x493-x494)+(x495|x496));

	if (t99 != 9223372036851721823LL) { NG(); } else { ; }
	
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

