#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x4 = 1997U;
uint16_t x7 = 472U;
int16_t x16 = -1;
uint16_t x19 = 10024U;
int32_t t4 = 64057;
static int64_t x32 = INT64_MAX;
static volatile int32_t t7 = 1770875;
static uint8_t x53 = UINT8_MAX;
static int32_t t10 = 462;
uint16_t x57 = UINT16_MAX;
int16_t x60 = INT16_MAX;
static volatile int32_t t11 = 6;
volatile int16_t x63 = -10;
int64_t x73 = INT64_MAX;
int32_t x75 = -1;
int64_t x76 = INT64_MAX;
int16_t x77 = INT16_MAX;
uint64_t x91 = 1109815206LLU;
uint64_t x93 = UINT64_MAX;
volatile int64_t x94 = -8375764702364LL;
int16_t x96 = INT16_MIN;
volatile uint64_t t16 = UINT64_MAX;
int8_t x104 = INT8_MIN;
static volatile uint8_t x119 = 0U;
int8_t x126 = 1;
static int64_t x134 = -1LL;
int16_t x139 = INT16_MIN;
volatile int32_t t23 = -188;
uint8_t x150 = 0U;
static int32_t x151 = INT32_MIN;
volatile int32_t t24 = 143716742;
volatile uint32_t x153 = 30295U;
int32_t t26 = 5;
uint32_t x165 = 101U;
int16_t x166 = 40;
int32_t x187 = -1;
uint16_t x193 = UINT16_MAX;
uint8_t x196 = 10U;
uint64_t x197 = 55LLU;
int64_t x199 = INT64_MIN;
volatile uint32_t x207 = UINT32_MAX;
uint32_t x221 = UINT32_MAX;
volatile int32_t x239 = INT32_MAX;
volatile int32_t t37 = -28756;
int16_t x248 = INT16_MIN;
volatile int32_t t39 = INT32_MAX;
static volatile int16_t x249 = INT16_MAX;
static uint8_t x271 = UINT8_MAX;
volatile int16_t x285 = 72;
volatile int8_t x294 = 0;
int8_t x299 = 40;
uint8_t x303 = 3U;
uint16_t x304 = 283U;
int64_t t50 = INT64_MAX;
static uint32_t x309 = 2117990U;
uint32_t x312 = 3U;
uint32_t t51 = 231538411U;
uint16_t x326 = 8U;
int16_t x327 = -676;
uint32_t x333 = 6487993U;
int16_t x334 = INT16_MAX;
int32_t x340 = -1;
int64_t x342 = -2030LL;
volatile int32_t t57 = -1;
volatile int64_t x353 = INT64_MAX;
static uint64_t x356 = 128362LLU;
volatile int64_t t58 = INT64_MAX;
uint16_t x363 = 956U;
static volatile uint64_t t60 = 6088LLU;
uint8_t x369 = 43U;
int32_t t62 = -89105659;
static uint8_t x373 = 4U;
volatile int64_t x375 = INT64_MIN;
int64_t x376 = INT64_MAX;
int64_t x385 = INT64_MAX;
static volatile int32_t x391 = -115390747;
uint64_t x395 = UINT64_MAX;
uint64_t x406 = 2LLU;
int16_t x408 = INT16_MAX;
static uint32_t t69 = 2816U;
int8_t x412 = INT8_MAX;
static uint32_t t73 = 776U;
int16_t x442 = -1;
static int16_t x444 = -1;
volatile int32_t t75 = 1571077;
int16_t x455 = -26;
volatile int32_t t77 = 28600;
int64_t x477 = INT64_MAX;
int8_t x489 = 0;
int32_t x492 = -4065;
int32_t t80 = -250;
static volatile uint8_t x499 = 3U;
int16_t x505 = INT16_MAX;
int16_t x524 = INT16_MIN;
static volatile int16_t x528 = -1;
uint8_t x538 = UINT8_MAX;
int16_t x540 = INT16_MIN;
uint64_t x554 = 13LLU;
volatile int8_t x556 = INT8_MAX;
static int32_t t88 = -63;
uint32_t x558 = 4U;
static uint64_t x559 = 549739443068LLU;
static int64_t x582 = INT64_MIN;
static int16_t x583 = 45;
static int8_t x595 = -1;
int64_t x598 = -1019588440129592LL;
uint64_t x600 = UINT64_MAX;
uint64_t x603 = 13439LLU;
static volatile int8_t x616 = -52;
int8_t x618 = 3;
static int8_t x619 = INT8_MIN;
volatile int32_t t99 = -31;


void f0(void) {
	int16_t x1 = INT16_MAX;
	uint8_t x2 = 12U;
	int32_t x3 = 521453;
	int32_t t0 = -1;

	t0 = (x1<<(x2==(x3<=x4)));

	if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int8_t x5 = INT8_MAX;
	int64_t x6 = -1613LL;
	int32_t x8 = -1;
	int32_t t1 = 28038;

	t1 = (x5<<(x6==(x7<=x8)));

	if (t1 != 127) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x13 = 5389869U;
	uint16_t x14 = 124U;
	int32_t x15 = 10616;
	static uint32_t t2 = 8646700U;

	t2 = (x13<<(x14==(x15<=x16)));

	if (t2 != 5389869U) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = UINT32_MAX;
	uint8_t x18 = 38U;
	int64_t x20 = 359LL;
	uint32_t t3 = UINT32_MAX;

	t3 = (x17<<(x18==(x19<=x20)));

	if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x21 = 0U;
	int16_t x22 = INT16_MIN;
	static volatile uint16_t x23 = 51U;
	int16_t x24 = INT16_MIN;

	t4 = (x21<<(x22==(x23<=x24)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x29 = 11658392443266LL;
	volatile uint32_t x30 = UINT32_MAX;
	volatile int64_t x31 = -2145973195612661452LL;
	int64_t t5 = -367579531746334384LL;

	t5 = (x29<<(x30==(x31<=x32)));

	if (t5 != 11658392443266LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int64_t x33 = 1643906758243LL;
	uint8_t x34 = UINT8_MAX;
	uint16_t x35 = 439U;
	static int8_t x36 = -1;
	volatile int64_t t6 = 243295LL;

	t6 = (x33<<(x34==(x35<=x36)));

	if (t6 != 1643906758243LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x37 = 30U;
	int64_t x38 = INT64_MIN;
	uint16_t x39 = 1911U;
	int16_t x40 = INT16_MIN;

	t7 = (x37<<(x38==(x39<=x40)));

	if (t7 != 30) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x45 = INT32_MAX;
	static int16_t x46 = -6742;
	int8_t x47 = INT8_MIN;
	uint16_t x48 = 23940U;
	volatile int32_t t8 = INT32_MAX;

	t8 = (x45<<(x46==(x47<=x48)));

	if (t8 != INT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x49 = UINT64_MAX;
	int8_t x50 = INT8_MIN;
	static volatile uint16_t x51 = UINT16_MAX;
	static uint16_t x52 = 1025U;
	static volatile uint64_t t9 = UINT64_MAX;

	t9 = (x49<<(x50==(x51<=x52)));

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x54 = UINT32_MAX;
	static int8_t x55 = INT8_MIN;
	uint8_t x56 = UINT8_MAX;

	t10 = (x53<<(x54==(x55<=x56)));

	if (t10 != 255) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x58 = 15LLU;
	uint32_t x59 = 50U;

	t11 = (x57<<(x58==(x59<=x60)));

	if (t11 != 65535) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x61 = UINT64_MAX;
	volatile int64_t x62 = INT64_MAX;
	static int8_t x64 = -3;
	uint64_t t12 = UINT64_MAX;

	t12 = (x61<<(x62==(x63<=x64)));

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x74 = 11;
	int64_t t13 = INT64_MAX;

	t13 = (x73<<(x74==(x75<=x76)));

	if (t13 != INT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x78 = -27;
	int8_t x79 = -1;
	int8_t x80 = INT8_MIN;
	static int32_t t14 = -18;

	t14 = (x77<<(x78==(x79<=x80)));

	if (t14 != 32767) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x89 = UINT16_MAX;
	static int8_t x90 = INT8_MIN;
	static uint8_t x92 = 0U;
	volatile int32_t t15 = 22;

	t15 = (x89<<(x90==(x91<=x92)));

	if (t15 != 65535) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x95 = INT16_MIN;

	t16 = (x93<<(x94==(x95<=x96)));

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x101 = UINT32_MAX;
	uint16_t x102 = 75U;
	uint8_t x103 = UINT8_MAX;
	uint32_t t17 = UINT32_MAX;

	t17 = (x101<<(x102==(x103<=x104)));

	if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x109 = UINT8_MAX;
	static uint8_t x110 = UINT8_MAX;
	uint32_t x111 = 88347U;
	uint8_t x112 = 3U;
	int32_t t18 = 156604;

	t18 = (x109<<(x110==(x111<=x112)));

	if (t18 != 255) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x117 = 0;
	volatile int32_t x118 = INT32_MAX;
	uint8_t x120 = 0U;
	volatile int32_t t19 = 433388;

	t19 = (x117<<(x118==(x119<=x120)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x121 = 22422329882LL;
	int64_t x122 = INT64_MAX;
	uint16_t x123 = 1508U;
	static uint32_t x124 = UINT32_MAX;
	volatile int64_t t20 = -3462476635LL;

	t20 = (x121<<(x122==(x123<=x124)));

	if (t20 != 22422329882LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x125 = 21U;
	volatile uint8_t x127 = UINT8_MAX;
	static uint16_t x128 = 66U;
	volatile int32_t t21 = -29694370;

	t21 = (x125<<(x126==(x127<=x128)));

	if (t21 != 21) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x133 = 676U;
	static int32_t x135 = -1;
	uint16_t x136 = 10555U;
	volatile uint32_t t22 = 3823566U;

	t22 = (x133<<(x134==(x135<=x136)));

	if (t22 != 676U) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x137 = UINT16_MAX;
	volatile int32_t x138 = INT32_MIN;
	int8_t x140 = 13;

	t23 = (x137<<(x138==(x139<=x140)));

	if (t23 != 65535) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x149 = UINT16_MAX;
	int16_t x152 = 157;

	t24 = (x149<<(x150==(x151<=x152)));

	if (t24 != 65535) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x154 = INT64_MAX;
	static uint32_t x155 = 1590063694U;
	volatile uint8_t x156 = 1U;
	uint32_t t25 = 228U;

	t25 = (x153<<(x154==(x155<=x156)));

	if (t25 != 30295U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x157 = INT8_MAX;
	static uint32_t x158 = 57380U;
	int64_t x159 = INT64_MIN;
	static int16_t x160 = INT16_MAX;

	t26 = (x157<<(x158==(x159<=x160)));

	if (t26 != 127) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x167 = 422U;
	uint64_t x168 = 1LLU;
	volatile uint32_t t27 = 135580140U;

	t27 = (x165<<(x166==(x167<=x168)));

	if (t27 != 101U) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x181 = INT16_MAX;
	int16_t x182 = INT16_MIN;
	static int8_t x183 = 3;
	uint64_t x184 = 27088LLU;
	volatile int32_t t28 = -204571776;

	t28 = (x181<<(x182==(x183<=x184)));

	if (t28 != 32767) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x185 = 2072U;
	int8_t x186 = INT8_MAX;
	static int64_t x188 = INT64_MAX;
	int32_t t29 = 1;

	t29 = (x185<<(x186==(x187<=x188)));

	if (t29 != 2072) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x189 = 93U;
	uint8_t x190 = 5U;
	volatile int8_t x191 = INT8_MIN;
	uint8_t x192 = UINT8_MAX;
	volatile int32_t t30 = 368;

	t30 = (x189<<(x190==(x191<=x192)));

	if (t30 != 93) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x194 = INT16_MIN;
	volatile int16_t x195 = INT16_MIN;
	volatile int32_t t31 = 555;

	t31 = (x193<<(x194==(x195<=x196)));

	if (t31 != 65535) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x198 = UINT16_MAX;
	int64_t x200 = -122LL;
	volatile uint64_t t32 = 6635569884LLU;

	t32 = (x197<<(x198==(x199<=x200)));

	if (t32 != 55LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x205 = 119;
	static volatile int64_t x206 = INT64_MIN;
	int16_t x208 = INT16_MIN;
	volatile int32_t t33 = -56534997;

	t33 = (x205<<(x206==(x207<=x208)));

	if (t33 != 119) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x209 = UINT32_MAX;
	uint64_t x210 = 1076208399667200LLU;
	int64_t x211 = -1LL;
	int8_t x212 = INT8_MIN;
	volatile uint32_t t34 = UINT32_MAX;

	t34 = (x209<<(x210==(x211<=x212)));

	if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x217 = INT64_MAX;
	volatile uint8_t x218 = 90U;
	int64_t x219 = INT64_MIN;
	uint64_t x220 = 64871320986745600LLU;
	volatile int64_t t35 = INT64_MAX;

	t35 = (x217<<(x218==(x219<=x220)));

	if (t35 != INT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x222 = INT16_MIN;
	static int16_t x223 = -1847;
	static int32_t x224 = -1;
	uint32_t t36 = UINT32_MAX;

	t36 = (x221<<(x222==(x223<=x224)));

	if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x237 = 560U;
	static int8_t x238 = 1;
	uint16_t x240 = 1952U;

	t37 = (x237<<(x238==(x239<=x240)));

	if (t37 != 560) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x241 = 1911130570LL;
	int8_t x242 = -1;
	volatile int32_t x243 = -1;
	volatile int32_t x244 = -1;
	int64_t t38 = -95LL;

	t38 = (x241<<(x242==(x243<=x244)));

	if (t38 != 1911130570LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x245 = INT32_MAX;
	uint64_t x246 = 256091448LLU;
	static int8_t x247 = INT8_MIN;

	t39 = (x245<<(x246==(x247<=x248)));

	if (t39 != INT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x250 = -13582322724LL;
	volatile int8_t x251 = -13;
	uint64_t x252 = 6985646936085554LLU;
	volatile int32_t t40 = -848873;

	t40 = (x249<<(x250==(x251<=x252)));

	if (t40 != 32767) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x261 = UINT64_MAX;
	volatile int16_t x262 = -1;
	volatile uint64_t x263 = UINT64_MAX;
	static int8_t x264 = 0;
	volatile uint64_t t41 = UINT64_MAX;

	t41 = (x261<<(x262==(x263<=x264)));

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x269 = UINT64_MAX;
	static int16_t x270 = -1;
	uint32_t x272 = 1898297955U;
	uint64_t t42 = UINT64_MAX;

	t42 = (x269<<(x270==(x271<=x272)));

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x273 = UINT8_MAX;
	int32_t x274 = -333222;
	uint32_t x275 = UINT32_MAX;
	uint32_t x276 = 347U;
	volatile int32_t t43 = 1381273;

	t43 = (x273<<(x274==(x275<=x276)));

	if (t43 != 255) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x277 = 925723U;
	int32_t x278 = INT32_MAX;
	int64_t x279 = -738LL;
	int32_t x280 = INT32_MIN;
	volatile uint32_t t44 = 24495096U;

	t44 = (x277<<(x278==(x279<=x280)));

	if (t44 != 925723U) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x281 = 90U;
	int16_t x282 = INT16_MAX;
	int32_t x283 = INT32_MIN;
	uint64_t x284 = UINT64_MAX;
	int32_t t45 = 41;

	t45 = (x281<<(x282==(x283<=x284)));

	if (t45 != 90) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x286 = 300167624407779385LL;
	uint8_t x287 = 18U;
	static uint16_t x288 = 3460U;
	int32_t t46 = -111020;

	t46 = (x285<<(x286==(x287<=x288)));

	if (t46 != 72) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x293 = 92304659892642LLU;
	uint16_t x295 = 0U;
	volatile uint8_t x296 = 3U;
	uint64_t t47 = 3LLU;

	t47 = (x293<<(x294==(x295<=x296)));

	if (t47 != 92304659892642LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x297 = 5459975U;
	volatile int16_t x298 = INT16_MAX;
	static int32_t x300 = 16;
	volatile uint32_t t48 = 372U;

	t48 = (x297<<(x298==(x299<=x300)));

	if (t48 != 5459975U) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x301 = 349U;
	uint16_t x302 = 391U;
	static uint32_t t49 = 2104407U;

	t49 = (x301<<(x302==(x303<=x304)));

	if (t49 != 349U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x305 = INT64_MAX;
	int32_t x306 = INT32_MAX;
	int8_t x307 = -1;
	volatile int32_t x308 = -1;

	t50 = (x305<<(x306==(x307<=x308)));

	if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x310 = INT64_MIN;
	volatile int16_t x311 = -1;

	t51 = (x309<<(x310==(x311<=x312)));

	if (t51 != 2117990U) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x313 = 1392U;
	uint32_t x314 = 28901U;
	uint8_t x315 = UINT8_MAX;
	int32_t x316 = INT32_MIN;
	int32_t t52 = 2;

	t52 = (x313<<(x314==(x315<=x316)));

	if (t52 != 1392) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x325 = INT32_MAX;
	volatile uint32_t x328 = 27U;
	volatile int32_t t53 = INT32_MAX;

	t53 = (x325<<(x326==(x327<=x328)));

	if (t53 != INT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x335 = UINT64_MAX;
	static volatile int8_t x336 = -1;
	volatile uint32_t t54 = 212U;

	t54 = (x333<<(x334==(x335<=x336)));

	if (t54 != 6487993U) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x337 = INT64_MAX;
	static int64_t x338 = -579315LL;
	int32_t x339 = -255024266;
	volatile int64_t t55 = INT64_MAX;

	t55 = (x337<<(x338==(x339<=x340)));

	if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x341 = INT8_MAX;
	uint16_t x343 = UINT16_MAX;
	volatile uint16_t x344 = 13U;
	volatile int32_t t56 = -34095440;

	t56 = (x341<<(x342==(x343<=x344)));

	if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x345 = INT8_MAX;
	int8_t x346 = INT8_MIN;
	uint16_t x347 = UINT16_MAX;
	int16_t x348 = INT16_MAX;

	t57 = (x345<<(x346==(x347<=x348)));

	if (t57 != 127) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x354 = -1LL;
	int16_t x355 = 159;

	t58 = (x353<<(x354==(x355<=x356)));

	if (t58 != INT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x357 = INT32_MAX;
	uint32_t x358 = 579U;
	uint8_t x359 = 19U;
	uint32_t x360 = UINT32_MAX;
	int32_t t59 = INT32_MAX;

	t59 = (x357<<(x358==(x359<=x360)));

	if (t59 != INT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x361 = 13370706318058207LLU;
	static int64_t x362 = INT64_MIN;
	static int64_t x364 = -2458LL;

	t60 = (x361<<(x362==(x363<=x364)));

	if (t60 != 13370706318058207LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x365 = 31U;
	uint8_t x366 = 1U;
	static int32_t x367 = INT32_MIN;
	static int16_t x368 = INT16_MAX;
	volatile int32_t t61 = 3990;

	t61 = (x365<<(x366==(x367<=x368)));

	if (t61 != 62) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x370 = 183;
	uint32_t x371 = 2296050U;
	uint32_t x372 = 158U;

	t62 = (x369<<(x370==(x371<=x372)));

	if (t62 != 43) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x374 = -34111944365994LL;
	int32_t t63 = -61;

	t63 = (x373<<(x374==(x375<=x376)));

	if (t63 != 4) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x381 = UINT64_MAX;
	uint8_t x382 = UINT8_MAX;
	uint64_t x383 = UINT64_MAX;
	uint32_t x384 = 132445144U;
	static uint64_t t64 = UINT64_MAX;

	t64 = (x381<<(x382==(x383<=x384)));

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int32_t x386 = INT32_MIN;
	int8_t x387 = -1;
	int64_t x388 = -63597LL;
	volatile int64_t t65 = INT64_MAX;

	t65 = (x385<<(x386==(x387<=x388)));

	if (t65 != INT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x389 = 1U;
	int16_t x390 = -22;
	int8_t x392 = 15;
	volatile int32_t t66 = -52588454;

	t66 = (x389<<(x390==(x391<=x392)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x393 = 1U;
	static int8_t x394 = INT8_MAX;
	uint16_t x396 = 6244U;
	volatile uint32_t t67 = 613112U;

	t67 = (x393<<(x394==(x395<=x396)));

	if (t67 != 1U) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x397 = UINT32_MAX;
	uint16_t x398 = UINT16_MAX;
	int8_t x399 = -8;
	int16_t x400 = INT16_MAX;
	static uint32_t t68 = UINT32_MAX;

	t68 = (x397<<(x398==(x399<=x400)));

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x405 = 4U;
	static int8_t x407 = 3;

	t69 = (x405<<(x406==(x407<=x408)));

	if (t69 != 4U) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x409 = 12U;
	int8_t x410 = 15;
	int64_t x411 = INT64_MAX;
	volatile int32_t t70 = 4;

	t70 = (x409<<(x410==(x411<=x412)));

	if (t70 != 12) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x413 = 204176LLU;
	uint64_t x414 = 25650145LLU;
	int64_t x415 = INT64_MIN;
	static int8_t x416 = -1;
	uint64_t t71 = 4067784LLU;

	t71 = (x413<<(x414==(x415<=x416)));

	if (t71 != 204176LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x417 = UINT32_MAX;
	int64_t x418 = INT64_MIN;
	uint8_t x419 = 1U;
	static int64_t x420 = -1LL;
	uint32_t t72 = UINT32_MAX;

	t72 = (x417<<(x418==(x419<=x420)));

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x421 = 9U;
	static int8_t x422 = INT8_MIN;
	volatile int32_t x423 = INT32_MIN;
	int64_t x424 = 207LL;

	t73 = (x421<<(x422==(x423<=x424)));

	if (t73 != 9U) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x425 = 51;
	int64_t x426 = INT64_MIN;
	int32_t x427 = -11758893;
	int32_t x428 = -1;
	int32_t t74 = 593;

	t74 = (x425<<(x426==(x427<=x428)));

	if (t74 != 51) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x441 = INT16_MAX;
	volatile int16_t x443 = 61;

	t75 = (x441<<(x442==(x443<=x444)));

	if (t75 != 32767) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x453 = UINT16_MAX;
	volatile uint8_t x454 = 1U;
	volatile uint16_t x456 = UINT16_MAX;
	volatile int32_t t76 = -1992410;

	t76 = (x453<<(x454==(x455<=x456)));

	if (t76 != 131070) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x461 = 10U;
	int64_t x462 = -1LL;
	static int16_t x463 = INT16_MIN;
	int32_t x464 = -2561;

	t77 = (x461<<(x462==(x463<=x464)));

	if (t77 != 10) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x465 = 0U;
	int32_t x466 = INT32_MIN;
	int64_t x467 = INT64_MIN;
	static int32_t x468 = -1;
	volatile uint32_t t78 = 47U;

	t78 = (x465<<(x466==(x467<=x468)));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x478 = 19765576LLU;
	int16_t x479 = INT16_MAX;
	int64_t x480 = INT64_MIN;
	int64_t t79 = INT64_MAX;

	t79 = (x477<<(x478==(x479<=x480)));

	if (t79 != INT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x490 = UINT16_MAX;
	int16_t x491 = INT16_MIN;

	t80 = (x489<<(x490==(x491<=x492)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x497 = 947;
	int64_t x498 = -1LL;
	int8_t x500 = INT8_MIN;
	volatile int32_t t81 = 323479518;

	t81 = (x497<<(x498==(x499<=x500)));

	if (t81 != 947) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x506 = 376U;
	static int16_t x507 = 2;
	static uint8_t x508 = UINT8_MAX;
	int32_t t82 = -240984924;

	t82 = (x505<<(x506==(x507<=x508)));

	if (t82 != 32767) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x513 = 1651281U;
	int8_t x514 = -1;
	static uint16_t x515 = 56U;
	uint16_t x516 = 26585U;
	volatile uint32_t t83 = 108446U;

	t83 = (x513<<(x514==(x515<=x516)));

	if (t83 != 1651281U) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x517 = 32U;
	uint8_t x518 = UINT8_MAX;
	int16_t x519 = INT16_MAX;
	int16_t x520 = -3;
	uint32_t t84 = 5U;

	t84 = (x517<<(x518==(x519<=x520)));

	if (t84 != 32U) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint64_t x521 = UINT64_MAX;
	int64_t x522 = INT64_MIN;
	int16_t x523 = INT16_MIN;
	uint64_t t85 = UINT64_MAX;

	t85 = (x521<<(x522==(x523<=x524)));

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x525 = UINT16_MAX;
	int8_t x526 = INT8_MIN;
	volatile int16_t x527 = -129;
	volatile int32_t t86 = 467;

	t86 = (x525<<(x526==(x527<=x528)));

	if (t86 != 65535) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x537 = 231211LL;
	static int64_t x539 = 3225343033993753914LL;
	int64_t t87 = 486575965792734588LL;

	t87 = (x537<<(x538==(x539<=x540)));

	if (t87 != 231211LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x553 = 89;
	int32_t x555 = INT32_MIN;

	t88 = (x553<<(x554==(x555<=x556)));

	if (t88 != 89) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x557 = 91992864322659LLU;
	int16_t x560 = INT16_MIN;
	static volatile uint64_t t89 = 48LLU;

	t89 = (x557<<(x558==(x559<=x560)));

	if (t89 != 91992864322659LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x565 = UINT32_MAX;
	int16_t x566 = INT16_MAX;
	static uint32_t x567 = UINT32_MAX;
	uint64_t x568 = UINT64_MAX;
	uint32_t t90 = UINT32_MAX;

	t90 = (x565<<(x566==(x567<=x568)));

	if (t90 != UINT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x577 = 2844U;
	volatile int32_t x578 = -1027;
	int64_t x579 = 34464955752LL;
	uint64_t x580 = 11339778045912LLU;
	static volatile uint32_t t91 = 2U;

	t91 = (x577<<(x578==(x579<=x580)));

	if (t91 != 2844U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x581 = 0LL;
	volatile int64_t x584 = INT64_MIN;
	volatile int64_t t92 = -1098267813859920LL;

	t92 = (x581<<(x582==(x583<=x584)));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x585 = 365061663LLU;
	int64_t x586 = -71LL;
	int8_t x587 = -2;
	volatile int8_t x588 = INT8_MIN;
	volatile uint64_t t93 = 15228123415301LLU;

	t93 = (x585<<(x586==(x587<=x588)));

	if (t93 != 365061663LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x593 = UINT16_MAX;
	int8_t x594 = 50;
	int32_t x596 = 10667;
	static int32_t t94 = -10977129;

	t94 = (x593<<(x594==(x595<=x596)));

	if (t94 != 65535) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x597 = UINT32_MAX;
	int32_t x599 = 2150858;
	volatile uint32_t t95 = UINT32_MAX;

	t95 = (x597<<(x598==(x599<=x600)));

	if (t95 != UINT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x601 = 74077;
	volatile uint8_t x602 = 0U;
	static volatile int8_t x604 = INT8_MAX;
	static int32_t t96 = 128001;

	t96 = (x601<<(x602==(x603<=x604)));

	if (t96 != 148154) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int32_t x609 = 2;
	volatile int16_t x610 = -203;
	volatile int16_t x611 = INT16_MAX;
	int32_t x612 = INT32_MIN;
	volatile int32_t t97 = -1;

	t97 = (x609<<(x610==(x611<=x612)));

	if (t97 != 2) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x613 = UINT8_MAX;
	uint8_t x614 = 11U;
	uint16_t x615 = 2U;
	int32_t t98 = -11;

	t98 = (x613<<(x614==(x615<=x616)));

	if (t98 != 255) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x617 = UINT16_MAX;
	int64_t x620 = -659970888737549LL;

	t99 = (x617<<(x618==(x619<=x620)));

	if (t99 != 65535) { NG(); } else { ; }
	
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

