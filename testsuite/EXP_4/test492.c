#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x2 = -421804;
volatile int16_t x9 = 1845;
uint64_t t1 = 118381412193LLU;
int8_t x17 = INT8_MIN;
int32_t x20 = INT32_MAX;
int8_t x22 = 3;
volatile int64_t t4 = INT64_MIN;
volatile int16_t x27 = 123;
volatile int16_t x28 = INT16_MIN;
static int8_t x31 = 3;
static uint16_t x44 = UINT16_MAX;
int16_t x46 = INT16_MIN;
int16_t x54 = INT16_MIN;
int8_t x60 = -16;
int64_t x61 = INT64_MAX;
volatile int64_t x69 = INT64_MAX;
static int8_t x71 = INT8_MIN;
uint8_t x76 = UINT8_MAX;
uint16_t x81 = 105U;
int8_t x82 = -1;
int16_t x84 = INT16_MAX;
static int8_t x91 = INT8_MIN;
int64_t x92 = 10566795LL;
uint64_t x94 = UINT64_MAX;
int16_t x95 = INT16_MIN;
static int32_t x100 = INT32_MAX;
uint16_t x105 = 27U;
int16_t x107 = INT16_MIN;
uint16_t x115 = 31859U;
static int32_t x117 = -1;
uint8_t x119 = UINT8_MAX;
int32_t x127 = 847;
int16_t x128 = -1;
volatile int32_t t28 = 253195;
volatile int32_t x135 = INT32_MIN;
int64_t x139 = 4465252376358704960LL;
int64_t t31 = 3804LL;
int8_t x152 = INT8_MIN;
uint8_t x172 = UINT8_MAX;
uint32_t t35 = 5U;
volatile uint64_t x181 = UINT64_MAX;
uint32_t x182 = 29U;
uint32_t x184 = UINT32_MAX;
volatile uint64_t t36 = 1LLU;
int64_t x195 = -34LL;
static uint8_t x196 = UINT8_MAX;
uint64_t x204 = 1358637LLU;
int64_t x218 = -48LL;
int32_t x234 = INT32_MAX;
volatile int64_t x237 = -1LL;
volatile uint64_t x241 = 12428542475714926LLU;
int64_t x246 = INT64_MIN;
static volatile int64_t x253 = -1LL;
static volatile int64_t t51 = -42156LL;
static int16_t x261 = INT16_MIN;
int16_t x262 = INT16_MAX;
int32_t t52 = 2091676;
int64_t x265 = -3LL;
static volatile int16_t x266 = INT16_MIN;
int16_t x273 = INT16_MIN;
int32_t x274 = -23220;
int64_t x275 = -1760LL;
uint32_t x278 = 51338013U;
static uint32_t t55 = 61941336U;
volatile int32_t x282 = INT32_MAX;
static int16_t x290 = 277;
int16_t x293 = INT16_MIN;
int64_t x320 = 0LL;
static int8_t x324 = 21;
uint32_t x337 = UINT32_MAX;
int64_t x338 = INT64_MAX;
uint32_t x340 = 2369U;
int64_t t65 = -2962LL;
volatile int8_t x351 = -1;
volatile int32_t t67 = 42;
volatile uint64_t t68 = 1529LLU;
int16_t x365 = 43;
static volatile uint64_t x366 = UINT64_MAX;
static int32_t x367 = -1;
int8_t x368 = 0;
int64_t x369 = -60449000309842LL;
static int64_t x370 = INT64_MAX;
static int16_t x372 = -9;
volatile int64_t t70 = -2349095LL;
int8_t x389 = 0;
uint32_t x392 = 22U;
int64_t x394 = INT64_MIN;
volatile int8_t x398 = -1;
static int64_t x402 = INT64_MIN;
int64_t t77 = INT64_MIN;
uint64_t x409 = UINT64_MAX;
uint32_t x421 = UINT32_MAX;
volatile uint8_t x423 = 3U;
volatile uint32_t t80 = 950U;
int32_t x425 = 202522;
int32_t x427 = 14;
uint32_t t81 = 6486935U;
static int16_t x437 = INT16_MIN;
int16_t x440 = -1;
volatile uint64_t t85 = 176502566LLU;
uint32_t x487 = 441321U;
static int8_t x495 = 3;
int64_t t93 = -903LL;
uint32_t x515 = 2U;
int32_t x523 = 0;
static int64_t t95 = -3601930311896154LL;
uint8_t x525 = UINT8_MAX;
uint64_t t96 = 3LLU;
static int32_t x529 = 37507647;
volatile uint64_t t98 = 265716578987021LLU;
static volatile uint64_t t99 = 250573771LLU;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	uint64_t x3 = 29840749910023949LLU;
	int32_t x4 = INT32_MIN;
	uint64_t t0 = 793075420184LLU;

	t0 = (x1&(x2|(x3*x4)));

	if (t0 != 4294545492LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x10 = 15527994799LLU;
	static int64_t x11 = -1LL;
	int8_t x12 = -1;

	t1 = (x9&(x10|(x11*x12)));

	if (t1 != 1317LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x13 = -6;
	volatile int8_t x14 = INT8_MIN;
	uint32_t x15 = 65982U;
	uint64_t x16 = UINT64_MAX;
	static uint64_t t2 = 534893583318211706LLU;

	t2 = (x13&(x14|(x15*x16)));

	if (t2 != 18446744073709551554LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x18 = 7;
	volatile uint32_t x19 = 61561U;
	volatile uint32_t t3 = 979937U;

	t3 = (x17&(x18|(x19*x20)));

	if (t3 != 2147422080U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = INT64_MIN;
	int8_t x23 = -1;
	static int8_t x24 = 13;

	t4 = (x21&(x22|(x23*x24)));

	if (t4 != INT64_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = INT64_MIN;
	int32_t x26 = 816103730;
	int64_t t5 = INT64_MIN;

	t5 = (x25&(x26|(x27*x28)));

	if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x29 = 33U;
	volatile int16_t x30 = INT16_MIN;
	volatile int64_t x32 = 319409489286LL;
	int64_t t6 = 5141095362288869LL;

	t6 = (x29&(x30|(x31*x32)));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x41 = 8379051U;
	static int32_t x42 = INT32_MIN;
	int16_t x43 = INT16_MIN;
	uint32_t t7 = 1668184042U;

	t7 = (x41&(x42|(x43*x44)));

	if (t7 != 32768U) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x45 = INT32_MAX;
	uint8_t x47 = 7U;
	volatile uint16_t x48 = 46U;
	int32_t t8 = -55;

	t8 = (x45&(x46|(x47*x48)));

	if (t8 != 2147451202) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x49 = UINT16_MAX;
	int16_t x50 = -1;
	uint8_t x51 = 5U;
	uint64_t x52 = UINT64_MAX;
	uint64_t t9 = 837033564286LLU;

	t9 = (x49&(x50|(x51*x52)));

	if (t9 != 65535LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x53 = INT16_MIN;
	uint16_t x55 = 1713U;
	static uint32_t x56 = UINT32_MAX;
	uint32_t t10 = 1U;

	t10 = (x53&(x54|(x55*x56)));

	if (t10 != 4294934528U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x57 = INT16_MIN;
	int32_t x58 = INT32_MIN;
	int16_t x59 = INT16_MAX;
	volatile int32_t t11 = 248;

	t11 = (x57&(x58|(x59*x60)));

	if (t11 != -524288) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x62 = -61;
	static uint16_t x63 = UINT16_MAX;
	int16_t x64 = -53;
	int64_t t12 = -19430235490751133LL;

	t12 = (x61&(x62|(x63*x64)));

	if (t12 != 9223372036854775799LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x65 = 2681U;
	volatile uint16_t x66 = 2713U;
	volatile int16_t x67 = -374;
	int64_t x68 = -25LL;
	volatile int64_t t13 = -125418399330LL;

	t13 = (x65&(x66|(x67*x68)));

	if (t13 != 2585LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x70 = INT32_MAX;
	static uint8_t x72 = 4U;
	static volatile int64_t t14 = INT64_MAX;

	t14 = (x69&(x70|(x71*x72)));

	if (t14 != INT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int32_t x73 = -1;
	int64_t x74 = 981664327377510LL;
	static uint32_t x75 = UINT32_MAX;
	int64_t t15 = 24581813LL;

	t15 = (x73&(x74|(x75*x76)));

	if (t15 != 981666315108199LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x77 = -1LL;
	volatile uint32_t x78 = UINT32_MAX;
	int8_t x79 = -50;
	int8_t x80 = 19;
	volatile int64_t t16 = -70741888LL;

	t16 = (x77&(x78|(x79*x80)));

	if (t16 != 4294967295LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x83 = 24;
	static volatile int32_t t17 = -99600;

	t17 = (x81&(x82|(x83*x84)));

	if (t17 != 105) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x85 = INT32_MAX;
	int32_t x86 = -4958725;
	volatile uint8_t x87 = 12U;
	int64_t x88 = 1639168762118LL;
	int64_t t18 = -677205496LL;

	t18 = (x85&(x86|(x87*x88)));

	if (t18 != 2147278331LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x89 = UINT64_MAX;
	static uint16_t x90 = 2U;
	uint64_t t19 = 395197709061LLU;

	t19 = (x89&(x90|(x91*x92)));

	if (t19 != 18446744072357001858LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x93 = -1LL;
	uint64_t x96 = 81165342945546LLU;
	static volatile uint64_t t20 = UINT64_MAX;

	t20 = (x93&(x94|(x95*x96)));

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x97 = 131206405U;
	static int16_t x98 = INT16_MIN;
	volatile int16_t x99 = 0;
	uint32_t t21 = 449523U;

	t21 = (x97&(x98|(x99*x100)));

	if (t21 != 131203072U) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x101 = INT64_MIN;
	int16_t x102 = -1286;
	int64_t x103 = -1LL;
	uint32_t x104 = 6U;
	static volatile int64_t t22 = INT64_MIN;

	t22 = (x101&(x102|(x103*x104)));

	if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x106 = INT16_MIN;
	static uint16_t x108 = 56U;
	volatile int32_t t23 = 62594484;

	t23 = (x105&(x106|(x107*x108)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x109 = 13804U;
	volatile int8_t x110 = -1;
	static int16_t x111 = INT16_MIN;
	int32_t x112 = -52113;
	static uint32_t t24 = 7U;

	t24 = (x109&(x110|(x111*x112)));

	if (t24 != 13804U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x113 = INT8_MAX;
	uint64_t x114 = UINT64_MAX;
	int8_t x116 = INT8_MIN;
	volatile uint64_t t25 = 16200860576207LLU;

	t25 = (x113&(x114|(x115*x116)));

	if (t25 != 127LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x118 = INT16_MAX;
	static int64_t x120 = -1LL;
	volatile int64_t t26 = 8435045990594LL;

	t26 = (x117&(x118|(x119*x120)));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x121 = 38882U;
	static volatile uint64_t x122 = 112974531LLU;
	static int16_t x123 = 1;
	volatile int64_t x124 = INT64_MAX;
	uint64_t t27 = 279874494LLU;

	t27 = (x121&(x122|(x123*x124)));

	if (t27 != 38882LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x125 = -1;
	static int8_t x126 = INT8_MIN;

	t28 = (x125&(x126|(x127*x128)));

	if (t28 != -79) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x133 = 389U;
	static int32_t x134 = INT32_MAX;
	uint64_t x136 = 50LLU;
	volatile uint64_t t29 = 211848136LLU;

	t29 = (x133&(x134|(x135*x136)));

	if (t29 != 389LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x137 = INT16_MIN;
	static volatile int8_t x138 = -1;
	int32_t x140 = -1;
	static int64_t t30 = -143813857380001LL;

	t30 = (x137&(x138|(x139*x140)));

	if (t30 != -32768LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x145 = INT8_MIN;
	volatile int64_t x146 = INT64_MAX;
	int8_t x147 = -1;
	uint8_t x148 = UINT8_MAX;

	t31 = (x145&(x146|(x147*x148)));

	if (t31 != -128LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x149 = INT32_MIN;
	static volatile uint8_t x150 = 24U;
	volatile int8_t x151 = INT8_MIN;
	volatile int32_t t32 = -1684039;

	t32 = (x149&(x150|(x151*x152)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x153 = -655;
	int32_t x154 = INT32_MIN;
	int32_t x155 = 53;
	int32_t x156 = -1;
	int32_t t33 = -3;

	t33 = (x153&(x154|(x155*x156)));

	if (t33 != -703) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x157 = 1798U;
	int64_t x158 = -1LL;
	static volatile uint8_t x159 = 50U;
	int16_t x160 = 0;
	int64_t t34 = -1576815088931849LL;

	t34 = (x157&(x158|(x159*x160)));

	if (t34 != 1798LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x169 = 1530U;
	int16_t x170 = 3;
	volatile uint16_t x171 = 0U;

	t35 = (x169&(x170|(x171*x172)));

	if (t35 != 2U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x183 = INT8_MIN;

	t36 = (x181&(x182|(x183*x184)));

	if (t36 != 157LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x185 = -14365;
	int8_t x186 = INT8_MIN;
	volatile int16_t x187 = -1;
	int32_t x188 = 13732851;
	static volatile int32_t t37 = -64095;

	t37 = (x185&(x186|(x187*x188)));

	if (t37 != -14463) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x193 = INT8_MAX;
	int64_t x194 = -3128013884LL;
	volatile int64_t t38 = -9LL;

	t38 = (x193&(x194|(x195*x196)));

	if (t38 != 102LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x201 = -546374143139689626LL;
	uint64_t x202 = 18LLU;
	volatile int64_t x203 = INT64_MIN;
	static volatile uint64_t t39 = 9LLU;

	t39 = (x201&(x202|(x203*x204)));

	if (t39 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x205 = INT64_MIN;
	static int16_t x206 = INT16_MIN;
	int8_t x207 = -2;
	volatile uint32_t x208 = UINT32_MAX;
	int64_t t40 = -205LL;

	t40 = (x205&(x206|(x207*x208)));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x209 = INT8_MIN;
	int32_t x210 = INT32_MIN;
	static int16_t x211 = INT16_MAX;
	int16_t x212 = 1739;
	int32_t t41 = 50976;

	t41 = (x209&(x210|(x211*x212)));

	if (t41 != -2090501888) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x217 = -3;
	volatile int8_t x219 = 0;
	uint8_t x220 = 2U;
	static int64_t t42 = 650831989879051995LL;

	t42 = (x217&(x218|(x219*x220)));

	if (t42 != -48LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x221 = INT16_MIN;
	volatile uint32_t x222 = UINT32_MAX;
	int16_t x223 = -1;
	int32_t x224 = -1;
	volatile uint32_t t43 = 1423988U;

	t43 = (x221&(x222|(x223*x224)));

	if (t43 != 4294934528U) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x225 = 36U;
	int64_t x226 = INT64_MIN;
	uint16_t x227 = 30551U;
	int8_t x228 = -1;
	volatile int64_t t44 = -38867335LL;

	t44 = (x225&(x226|(x227*x228)));

	if (t44 != 32LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x233 = 1U;
	static uint8_t x235 = UINT8_MAX;
	static uint32_t x236 = 3733U;
	uint32_t t45 = 82330U;

	t45 = (x233&(x234|(x235*x236)));

	if (t45 != 1U) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x238 = INT8_MIN;
	static volatile uint16_t x239 = 27U;
	int64_t x240 = 324724965658393350LL;
	volatile int64_t t46 = -55235839LL;

	t46 = (x237&(x238|(x239*x240)));

	if (t46 != -94LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x242 = INT32_MAX;
	int16_t x243 = -1;
	int32_t x244 = INT32_MAX;
	volatile uint64_t t47 = 12955LLU;

	t47 = (x241&(x242|(x243*x244)));

	if (t47 != 12428542475714926LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x245 = -3;
	volatile int8_t x247 = -30;
	int64_t x248 = 1LL;
	int64_t t48 = -6655666541469LL;

	t48 = (x245&(x246|(x247*x248)));

	if (t48 != -32LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x249 = INT8_MIN;
	int64_t x250 = -29719LL;
	int32_t x251 = -1;
	uint8_t x252 = UINT8_MAX;
	volatile int64_t t49 = 8718200333949255LL;

	t49 = (x249&(x250|(x251*x252)));

	if (t49 != -128LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x254 = INT16_MIN;
	uint8_t x255 = UINT8_MAX;
	int64_t x256 = -1LL;
	static volatile int64_t t50 = 337862344LL;

	t50 = (x253&(x254|(x255*x256)));

	if (t50 != -255LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x257 = -3;
	int16_t x258 = INT16_MIN;
	volatile int32_t x259 = INT32_MIN;
	int64_t x260 = 256LL;

	t51 = (x257&(x258|(x259*x260)));

	if (t51 != -32768LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x263 = -1;
	static uint8_t x264 = 39U;

	t52 = (x261&(x262|(x263*x264)));

	if (t52 != -32768) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x267 = 1LLU;
	uint8_t x268 = UINT8_MAX;
	volatile uint64_t t53 = 1863110311432901LLU;

	t53 = (x265&(x266|(x267*x268)));

	if (t53 != 18446744073709519101LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x276 = 565446019U;
	static int64_t t54 = -653083196074345LL;

	t54 = (x273&(x274|(x275*x276)));

	if (t54 != -32768LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x277 = 19U;
	static int32_t x279 = -13;
	int16_t x280 = INT16_MIN;

	t55 = (x277&(x278|(x279*x280)));

	if (t55 != 17U) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x281 = UINT16_MAX;
	volatile int16_t x283 = INT16_MIN;
	int8_t x284 = INT8_MIN;
	volatile int32_t t56 = 23381;

	t56 = (x281&(x282|(x283*x284)));

	if (t56 != 65535) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x289 = INT8_MAX;
	uint64_t x291 = 3082LLU;
	uint16_t x292 = 1U;
	static volatile uint64_t t57 = 7LLU;

	t57 = (x289&(x290|(x291*x292)));

	if (t57 != 31LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x294 = -1924746436169568LL;
	int8_t x295 = -1;
	static int32_t x296 = 7786;
	volatile int64_t t58 = 1406786LL;

	t58 = (x293&(x294|(x295*x296)));

	if (t58 != -32768LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x301 = 148LLU;
	int32_t x302 = -1;
	volatile uint8_t x303 = 6U;
	int8_t x304 = INT8_MIN;
	uint64_t t59 = 4LLU;

	t59 = (x301&(x302|(x303*x304)));

	if (t59 != 148LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x305 = 15107U;
	uint64_t x306 = 1999023057252058173LLU;
	uint8_t x307 = 0U;
	static int64_t x308 = INT64_MAX;
	uint64_t t60 = 687926294700LLU;

	t60 = (x305&(x306|(x307*x308)));

	if (t60 != 1LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int64_t x313 = -1LL;
	int64_t x314 = 61080975540LL;
	uint64_t x315 = UINT64_MAX;
	uint32_t x316 = UINT32_MAX;
	uint64_t t61 = 3886739083196LLU;

	t61 = (x313&(x314|(x315*x316)));

	if (t61 != 18446744070366017717LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x317 = 3LLU;
	int32_t x318 = 1049328;
	uint64_t x319 = 14014080LLU;
	static uint64_t t62 = 708LLU;

	t62 = (x317&(x318|(x319*x320)));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x321 = -258;
	volatile int16_t x322 = 1;
	uint16_t x323 = 885U;
	int32_t t63 = -2413;

	t63 = (x321&(x322|(x323*x324)));

	if (t63 != 18584) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x325 = -37400LL;
	static int64_t x326 = 11440515079LL;
	int16_t x327 = INT16_MAX;
	static uint16_t x328 = 3U;
	int64_t t64 = -384586523902954LL;

	t64 = (x325&(x326|(x327*x328)));

	if (t64 != 11440582120LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x339 = -1;

	t65 = (x337&(x338|(x339*x340)));

	if (t65 != 4294967295LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x341 = 30;
	uint32_t x342 = UINT32_MAX;
	int32_t x343 = 1;
	static uint16_t x344 = UINT16_MAX;
	uint32_t t66 = 98052U;

	t66 = (x341&(x342|(x343*x344)));

	if (t66 != 30U) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x349 = 2U;
	uint16_t x350 = 17752U;
	static uint16_t x352 = UINT16_MAX;

	t67 = (x349&(x350|(x351*x352)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x353 = INT16_MAX;
	volatile int16_t x354 = INT16_MIN;
	static uint64_t x355 = 19888807LLU;
	int32_t x356 = -65649;

	t68 = (x353&(x354|(x355*x356)));

	if (t68 != 23625LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t t69 = 359618LLU;

	t69 = (x365&(x366|(x367*x368)));

	if (t69 != 43LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x371 = INT8_MAX;

	t70 = (x369&(x370|(x371*x372)));

	if (t70 != -60449000309842LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x373 = INT64_MIN;
	volatile int16_t x374 = INT16_MIN;
	int16_t x375 = -26;
	int16_t x376 = INT16_MIN;
	static volatile int64_t t71 = INT64_MIN;

	t71 = (x373&(x374|(x375*x376)));

	if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x377 = INT32_MAX;
	volatile int8_t x378 = INT8_MIN;
	static volatile int64_t x379 = 0LL;
	int32_t x380 = INT32_MIN;
	volatile int64_t t72 = 918526869463888LL;

	t72 = (x377&(x378|(x379*x380)));

	if (t72 != 2147483520LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x390 = INT64_MAX;
	uint32_t x391 = 37U;
	volatile int64_t t73 = 20100784899924644LL;

	t73 = (x389&(x390|(x391*x392)));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x393 = INT16_MAX;
	int64_t x395 = -13622512459982LL;
	int16_t x396 = INT16_MIN;
	volatile int64_t t74 = -128437LL;

	t74 = (x393&(x394|(x395*x396)));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x397 = 3737U;
	int64_t x399 = -516278345955LL;
	int16_t x400 = INT16_MAX;
	static int64_t t75 = -2603930877039LL;

	t75 = (x397&(x398|(x399*x400)));

	if (t75 != 3737LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x401 = 69U;
	static int32_t x403 = INT32_MIN;
	uint64_t x404 = 194757374863996LLU;
	static uint64_t t76 = 47035657728446LLU;

	t76 = (x401&(x402|(x403*x404)));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x405 = INT64_MIN;
	int8_t x406 = INT8_MIN;
	uint8_t x407 = UINT8_MAX;
	int64_t x408 = -986255975694LL;

	t77 = (x405&(x406|(x407*x408)));

	if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x410 = INT8_MIN;
	static uint16_t x411 = UINT16_MAX;
	volatile uint8_t x412 = UINT8_MAX;
	volatile uint64_t t78 = 59267268424815LLU;

	t78 = (x409&(x410|(x411*x412)));

	if (t78 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x413 = -29;
	static volatile uint8_t x414 = 56U;
	int32_t x415 = -517128523;
	int64_t x416 = 47LL;
	int64_t t79 = -7930967455207196LL;

	t79 = (x413&(x414|(x415*x416)));

	if (t79 != -24305040605LL) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint16_t x422 = 7217U;
	int32_t x424 = 59;

	t80 = (x421&(x422|(x423*x424)));

	if (t80 != 7345U) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x426 = 37630491U;
	int8_t x428 = 7;

	t81 = (x425&(x426|(x427*x428)));

	if (t81 != 135706U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x433 = -2;
	int16_t x434 = -117;
	static int8_t x435 = 0;
	volatile int8_t x436 = INT8_MAX;
	static volatile int32_t t82 = -7360;

	t82 = (x433&(x434|(x435*x436)));

	if (t82 != -118) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x438 = INT8_MIN;
	static int16_t x439 = -1;
	volatile int32_t t83 = 177168;

	t83 = (x437&(x438|(x439*x440)));

	if (t83 != -32768) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x449 = INT8_MAX;
	uint32_t x450 = 36U;
	volatile int8_t x451 = INT8_MIN;
	static uint8_t x452 = 8U;
	volatile uint32_t t84 = 4U;

	t84 = (x449&(x450|(x451*x452)));

	if (t84 != 36U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x457 = INT32_MIN;
	int8_t x458 = INT8_MIN;
	volatile uint64_t x459 = 631494LLU;
	int16_t x460 = INT16_MIN;

	t85 = (x457&(x458|(x459*x460)));

	if (t85 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x461 = INT32_MAX;
	int32_t x462 = -11;
	int8_t x463 = -30;
	int16_t x464 = 3422;
	int32_t t86 = -504381414;

	t86 = (x461&(x462|(x463*x464)));

	if (t86 != 2147483645) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x465 = -1;
	volatile int16_t x466 = -3;
	int8_t x467 = -3;
	int8_t x468 = -4;
	int32_t t87 = -499;

	t87 = (x465&(x466|(x467*x468)));

	if (t87 != -3) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x473 = 3U;
	int32_t x474 = -1;
	int8_t x475 = -1;
	volatile uint64_t x476 = 778798632186746LLU;
	uint64_t t88 = 7384LLU;

	t88 = (x473&(x474|(x475*x476)));

	if (t88 != 3LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x481 = 278239447332438929LLU;
	static int8_t x482 = 0;
	static uint8_t x483 = 2U;
	int8_t x484 = INT8_MAX;
	static uint64_t t89 = 3LLU;

	t89 = (x481&(x482|(x483*x484)));

	if (t89 != 144LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x485 = 45LLU;
	static volatile int32_t x486 = -95517;
	uint8_t x488 = 3U;
	uint64_t t90 = 918878750LLU;

	t90 = (x485&(x486|(x487*x488)));

	if (t90 != 41LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int32_t x493 = -1;
	int16_t x494 = 339;
	uint32_t x496 = UINT32_MAX;
	volatile uint32_t t91 = UINT32_MAX;

	t91 = (x493&(x494|(x495*x496)));

	if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x501 = 636U;
	int32_t x502 = INT32_MAX;
	int8_t x503 = INT8_MIN;
	int8_t x504 = 3;
	volatile int32_t t92 = -24;

	t92 = (x501&(x502|(x503*x504)));

	if (t92 != 636) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x509 = -1;
	static volatile uint32_t x510 = UINT32_MAX;
	int64_t x511 = -6880108LL;
	uint8_t x512 = UINT8_MAX;

	t93 = (x509&(x510|(x511*x512)));

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x513 = 58U;
	int32_t x514 = INT32_MAX;
	uint64_t x516 = 116824416404LLU;
	volatile uint64_t t94 = 3975911116934LLU;

	t94 = (x513&(x514|(x515*x516)));

	if (t94 != 58LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x521 = 3;
	volatile int64_t x522 = -14048398345411LL;
	uint8_t x524 = UINT8_MAX;

	t95 = (x521&(x522|(x523*x524)));

	if (t95 != 1LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x526 = 4147884;
	static uint64_t x527 = 118935469044263690LLU;
	uint16_t x528 = 0U;

	t96 = (x525&(x526|(x527*x528)));

	if (t96 != 172LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x530 = INT16_MAX;
	int16_t x531 = INT16_MAX;
	uint16_t x532 = UINT16_MAX;
	volatile int32_t t97 = -9852;

	t97 = (x529&(x530|(x531*x532)));

	if (t97 != 37507647) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x533 = INT16_MIN;
	uint64_t x534 = 15315LLU;
	volatile uint8_t x535 = 65U;
	volatile int32_t x536 = -1;

	t98 = (x533&(x534|(x535*x536)));

	if (t98 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int8_t x537 = 21;
	static int16_t x538 = -1;
	uint64_t x539 = 69678482014428LLU;
	uint8_t x540 = 1U;

	t99 = (x537&(x538|(x539*x540)));

	if (t99 != 21LLU) { NG(); } else { ; }
	
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

