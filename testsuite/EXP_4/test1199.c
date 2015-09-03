#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x2 = 1789873LLU;
volatile int64_t x4 = 55505LL;
uint64_t x5 = UINT64_MAX;
static int32_t x10 = INT32_MIN;
static int32_t x15 = -1;
static int8_t x17 = INT8_MAX;
int64_t t5 = 624LL;
uint64_t x34 = 44636LLU;
int32_t x36 = 27;
int64_t x40 = INT64_MAX;
uint8_t x41 = 6U;
uint8_t x44 = UINT8_MAX;
volatile int32_t t11 = 121619790;
int64_t x49 = -369240112LL;
volatile int8_t x55 = -1;
volatile int8_t x58 = INT8_MIN;
int64_t x59 = -1LL;
int32_t t15 = 24;
static volatile int32_t t16 = -15889;
static int64_t x79 = INT64_MAX;
int16_t x80 = -5;
static uint32_t t17 = 1077704U;
volatile int64_t x81 = 17921538263LL;
int64_t t20 = 391199425804972341LL;
uint32_t x99 = 498571217U;
int8_t x109 = 0;
uint32_t x111 = 8072913U;
volatile int16_t x113 = INT16_MIN;
int64_t x124 = INT64_MAX;
volatile uint64_t t26 = 6435649556LLU;
int32_t x125 = 1;
uint8_t x131 = 16U;
static uint16_t x148 = 50U;
uint16_t x149 = 8U;
int32_t x150 = 1;
static int8_t x151 = INT8_MAX;
int32_t t33 = -48;
uint8_t x154 = UINT8_MAX;
volatile int64_t t34 = -25704681605759660LL;
static int8_t x167 = 1;
int64_t x176 = INT64_MAX;
int32_t x185 = -1;
int8_t x186 = INT8_MIN;
int16_t x195 = INT16_MIN;
int64_t x196 = -1LL;
int8_t x203 = -1;
uint32_t x226 = 5165646U;
static int8_t x238 = INT8_MIN;
int8_t x249 = INT8_MIN;
int32_t x263 = -615596195;
volatile int64_t x264 = -294725916542739LL;
int8_t x275 = INT8_MAX;
uint32_t x282 = 6U;
uint32_t x284 = 117U;
static uint64_t x309 = 81LLU;
int8_t x314 = INT8_MIN;
int32_t x315 = INT32_MIN;
uint8_t x325 = 10U;
uint64_t x326 = UINT64_MAX;
int32_t x328 = INT32_MAX;
volatile uint64_t t67 = 3889337475191902501LLU;
static int8_t x334 = -1;
volatile uint32_t t69 = 2U;
int32_t x349 = -1;
volatile uint8_t x363 = 0U;
int64_t t73 = -7406LL;
volatile int64_t t75 = 2760461011998LL;
static int64_t x384 = INT64_MAX;
int16_t x389 = INT16_MIN;
int16_t x397 = INT16_MIN;
volatile uint16_t x400 = UINT16_MAX;
int64_t x402 = 48LL;
int16_t x404 = INT16_MIN;
int64_t x407 = -35670253538026918LL;
int16_t x409 = -2444;
int8_t x411 = -4;
volatile int64_t t84 = 4951954LL;
int32_t x419 = -1;
int8_t x426 = -1;
static int32_t x436 = -12160783;
uint32_t x440 = 8U;
int16_t x446 = INT16_MIN;
int16_t x448 = -1;
int8_t x462 = INT8_MAX;
static uint64_t t93 = 55586683852LLU;
int32_t x465 = -763188;
uint16_t x470 = 11581U;
int8_t x471 = INT8_MAX;
int64_t x480 = INT64_MIN;
static int32_t t97 = -615;
int64_t x490 = -1LL;


void f0(void) {
	volatile uint16_t x1 = 12U;
	uint8_t x3 = 13U;
	static uint64_t t0 = 1219330708LLU;

	t0 = (x1*(x2-(x3==x4)));

	if (t0 != 21478476LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = INT8_MIN;
	static int8_t x7 = INT8_MIN;
	static uint64_t x8 = 7570476934798514LLU;
	volatile uint64_t t1 = 16753384734326LLU;

	t1 = (x5*(x6-(x7==x8)));

	if (t1 != 128LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 1650650LL;
	uint32_t x11 = UINT32_MAX;
	static int8_t x12 = INT8_MIN;
	int64_t t2 = -5646LL;

	t2 = (x9*(x10-(x11==x12)));

	if (t2 != -3544743883571200LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x13 = 7580962720289912LLU;
	int64_t x14 = -1LL;
	volatile int64_t x16 = INT64_MIN;
	uint64_t t3 = 1006LLU;

	t3 = (x13*(x14-(x15==x16)));

	if (t3 != 18439163110989261704LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x18 = 7;
	int64_t x19 = INT64_MIN;
	int16_t x20 = INT16_MIN;
	int32_t t4 = 51;

	t4 = (x17*(x18-(x19==x20)));

	if (t4 != 889) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -34942784LL;
	static volatile int8_t x22 = -1;
	int16_t x23 = -1;
	uint8_t x24 = 7U;

	t5 = (x21*(x22-(x23==x24)));

	if (t5 != 34942784LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -11999;
	static uint16_t x26 = 1290U;
	uint32_t x27 = 1292U;
	uint32_t x28 = 267167U;
	volatile int32_t t6 = -398378560;

	t6 = (x25*(x26-(x27==x28)));

	if (t6 != -15478710) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	uint32_t x30 = 7U;
	int8_t x31 = INT8_MIN;
	volatile int64_t x32 = INT64_MAX;
	uint32_t t7 = 366877439U;

	t7 = (x29*(x30-(x31==x32)));

	if (t7 != 4294737920U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x33 = -1;
	uint16_t x35 = 1701U;
	uint64_t t8 = 505080368597780996LLU;

	t8 = (x33*(x34-(x35==x36)));

	if (t8 != 18446744073709506980LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MAX;
	static uint32_t x38 = UINT32_MAX;
	static volatile int32_t x39 = INT32_MIN;
	volatile uint32_t t9 = 78518688U;

	t9 = (x37*(x38-(x39==x40)));

	if (t9 != 2147483649U) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x42 = 753U;
	int32_t x43 = 1748;
	static volatile uint32_t t10 = 13U;

	t10 = (x41*(x42-(x43==x44)));

	if (t10 != 4518U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MAX;
	int16_t x46 = INT16_MIN;
	int16_t x47 = INT16_MIN;
	uint8_t x48 = 23U;

	t11 = (x45*(x46-(x47==x48)));

	if (t11 != -4161536) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x50 = 13948LLU;
	int8_t x51 = -1;
	uint64_t x52 = 8017951188LLU;
	uint64_t t12 = 19456LLU;

	t12 = (x49*(x50-(x51==x52)));

	if (t12 != 18446738923548469440LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x53 = 3U;
	uint32_t x54 = 5049949U;
	uint8_t x56 = 13U;
	uint32_t t13 = 201875U;

	t13 = (x53*(x54-(x55==x56)));

	if (t13 != 15149847U) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = 5947567514LLU;
	int8_t x60 = -1;
	uint64_t t14 = 289725012094LLU;

	t14 = (x57*(x58-(x59==x60)));

	if (t14 != 18446743306473342310LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = 5284;
	uint16_t x62 = 32U;
	int64_t x63 = INT64_MIN;
	int16_t x64 = -95;

	t15 = (x61*(x62-(x63==x64)));

	if (t15 != 169088) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = -10;
	static int8_t x70 = -1;
	uint8_t x71 = 2U;
	int32_t x72 = 31792;

	t16 = (x69*(x70-(x71==x72)));

	if (t16 != 10) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x77 = 382441966U;
	int16_t x78 = INT16_MIN;

	t17 = (x77*(x78-(x79==x80)));

	if (t17 != 856227840U) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x82 = UINT64_MAX;
	volatile uint64_t x83 = UINT64_MAX;
	static int64_t x84 = 440015864864642LL;
	static uint64_t t18 = 2LLU;

	t18 = (x81*(x82-(x83==x84)));

	if (t18 != 18446744055788013353LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x89 = -484;
	int8_t x90 = INT8_MIN;
	uint8_t x91 = 5U;
	uint32_t x92 = UINT32_MAX;
	static int32_t t19 = 12763;

	t19 = (x89*(x90-(x91==x92)));

	if (t19 != 61952) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x93 = UINT8_MAX;
	int64_t x94 = 3176785940141LL;
	int64_t x95 = INT64_MAX;
	static uint32_t x96 = UINT32_MAX;

	t20 = (x93*(x94-(x95==x96)));

	if (t20 != 810080414735955LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x97 = 13799006584288LLU;
	int16_t x98 = INT16_MIN;
	uint32_t x100 = 1732543U;
	volatile uint64_t t21 = 487792844LLU;

	t21 = (x97*(x98-(x99==x100)));

	if (t21 != 17994578225955602432LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x101 = INT16_MIN;
	static uint32_t x102 = 3556U;
	static int8_t x103 = -1;
	int8_t x104 = 10;
	volatile uint32_t t22 = 744U;

	t22 = (x101*(x102-(x103==x104)));

	if (t22 != 4178444288U) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x110 = 39U;
	int64_t x112 = INT64_MAX;
	volatile uint32_t t23 = 156250284U;

	t23 = (x109*(x110-(x111==x112)));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x114 = -1;
	int32_t x115 = INT32_MAX;
	static int32_t x116 = -127;
	volatile int32_t t24 = 2;

	t24 = (x113*(x114-(x115==x116)));

	if (t24 != 32768) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x117 = INT8_MIN;
	int8_t x118 = INT8_MIN;
	static int32_t x119 = 30390;
	static volatile int16_t x120 = 13641;
	int32_t t25 = -139394251;

	t25 = (x117*(x118-(x119==x120)));

	if (t25 != 16384) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x121 = 1636U;
	uint64_t x122 = UINT64_MAX;
	int32_t x123 = INT32_MAX;

	t26 = (x121*(x122-(x123==x124)));

	if (t26 != 18446744073709549980LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x126 = 89957893086213484LLU;
	int64_t x127 = INT64_MIN;
	int64_t x128 = 552922923LL;
	volatile uint64_t t27 = 15LLU;

	t27 = (x125*(x126-(x127==x128)));

	if (t27 != 89957893086213484LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x129 = 105;
	int16_t x130 = 4872;
	int16_t x132 = INT16_MIN;
	int32_t t28 = 85245496;

	t28 = (x129*(x130-(x131==x132)));

	if (t28 != 511560) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x133 = 7618;
	int8_t x134 = INT8_MIN;
	static volatile uint16_t x135 = UINT16_MAX;
	uint16_t x136 = UINT16_MAX;
	volatile int32_t t29 = 31697766;

	t29 = (x133*(x134-(x135==x136)));

	if (t29 != -982722) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x137 = 47830746U;
	static uint32_t x138 = 159476872U;
	volatile uint8_t x139 = UINT8_MAX;
	uint64_t x140 = 462285974053250417LLU;
	uint32_t t30 = 8364U;

	t30 = (x137*(x138-(x139==x140)));

	if (t30 != 1480072144U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x141 = -1;
	volatile int32_t x142 = INT32_MAX;
	uint16_t x143 = 4U;
	volatile int16_t x144 = INT16_MAX;
	int32_t t31 = 73;

	t31 = (x141*(x142-(x143==x144)));

	if (t31 != -2147483647) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x145 = INT64_MIN;
	uint64_t x146 = 2252599258185678518LLU;
	volatile int8_t x147 = 56;
	uint64_t t32 = 1729346LLU;

	t32 = (x145*(x146-(x147==x148)));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x152 = UINT8_MAX;

	t33 = (x149*(x150-(x151==x152)));

	if (t33 != 8) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x153 = 932249405504596LL;
	int64_t x155 = 537607887975972219LL;
	int8_t x156 = INT8_MIN;

	t34 = (x153*(x154-(x155==x156)));

	if (t34 != 237723598403671980LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x165 = INT8_MIN;
	static int8_t x166 = INT8_MAX;
	int32_t x168 = INT32_MAX;
	volatile int32_t t35 = 10;

	t35 = (x165*(x166-(x167==x168)));

	if (t35 != -16256) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x169 = 175275U;
	int64_t x170 = -30LL;
	int32_t x171 = INT32_MAX;
	int32_t x172 = INT32_MAX;
	int64_t t36 = 138952993458480558LL;

	t36 = (x169*(x170-(x171==x172)));

	if (t36 != -5433525LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x173 = -1;
	int8_t x174 = -1;
	uint16_t x175 = UINT16_MAX;
	int32_t t37 = 4186303;

	t37 = (x173*(x174-(x175==x176)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x177 = 4;
	int16_t x178 = -3;
	uint64_t x179 = 67851429028639102LLU;
	uint16_t x180 = 1875U;
	static volatile int32_t t38 = -18;

	t38 = (x177*(x178-(x179==x180)));

	if (t38 != -12) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x181 = 8205289LLU;
	int32_t x182 = INT32_MIN;
	uint32_t x183 = 7895630U;
	int32_t x184 = -1;
	static volatile uint64_t t39 = 2LLU;

	t39 = (x181*(x182-(x183==x184)));

	if (t39 != 18429123349754937344LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x187 = -1778;
	int8_t x188 = -1;
	volatile int32_t t40 = 119705;

	t40 = (x185*(x186-(x187==x188)));

	if (t40 != 128) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x193 = 42969036056459LLU;
	static int64_t x194 = -149LL;
	volatile uint64_t t41 = 753885LLU;

	t41 = (x193*(x194-(x195==x196)));

	if (t41 != 18440341687337139225LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x197 = -1;
	int16_t x198 = INT16_MAX;
	int8_t x199 = 4;
	int64_t x200 = -1LL;
	volatile int32_t t42 = 19;

	t42 = (x197*(x198-(x199==x200)));

	if (t42 != -32767) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x201 = UINT16_MAX;
	uint64_t x202 = UINT64_MAX;
	int32_t x204 = INT32_MIN;
	uint64_t t43 = 21LLU;

	t43 = (x201*(x202-(x203==x204)));

	if (t43 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x205 = -1;
	uint32_t x206 = 3619911U;
	int16_t x207 = -1;
	uint8_t x208 = 22U;
	volatile uint32_t t44 = 6162537U;

	t44 = (x205*(x206-(x207==x208)));

	if (t44 != 4291347385U) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x209 = 4U;
	uint8_t x210 = 10U;
	int8_t x211 = 0;
	int16_t x212 = INT16_MAX;
	static volatile int32_t t45 = -1;

	t45 = (x209*(x210-(x211==x212)));

	if (t45 != 40) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x213 = 147275259U;
	int8_t x214 = -1;
	int16_t x215 = 2077;
	int32_t x216 = 1228250;
	volatile uint32_t t46 = 489U;

	t46 = (x213*(x214-(x215==x216)));

	if (t46 != 4147692037U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x217 = -1790;
	static int32_t x218 = -1120;
	uint16_t x219 = UINT16_MAX;
	int8_t x220 = -60;
	volatile int32_t t47 = 27780795;

	t47 = (x217*(x218-(x219==x220)));

	if (t47 != 2004800) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x225 = -4971LL;
	int8_t x227 = INT8_MIN;
	uint64_t x228 = UINT64_MAX;
	static volatile int64_t t48 = 2LL;

	t48 = (x225*(x226-(x227==x228)));

	if (t48 != -25678426266LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x229 = 220LLU;
	volatile uint64_t x230 = UINT64_MAX;
	uint16_t x231 = 0U;
	volatile int16_t x232 = -1;
	uint64_t t49 = 2345LLU;

	t49 = (x229*(x230-(x231==x232)));

	if (t49 != 18446744073709551396LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x237 = 2230U;
	int32_t x239 = INT32_MIN;
	int64_t x240 = INT64_MIN;
	int32_t t50 = 32185;

	t50 = (x237*(x238-(x239==x240)));

	if (t50 != -285440) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x245 = 252U;
	static int32_t x246 = -1115;
	int8_t x247 = INT8_MAX;
	int8_t x248 = INT8_MIN;
	volatile int32_t t51 = 40767;

	t51 = (x245*(x246-(x247==x248)));

	if (t51 != -280980) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x250 = UINT16_MAX;
	uint32_t x251 = UINT32_MAX;
	int16_t x252 = 1;
	volatile int32_t t52 = -7600;

	t52 = (x249*(x250-(x251==x252)));

	if (t52 != -8388480) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x253 = -5;
	int64_t x254 = -1LL;
	int64_t x255 = -1LL;
	int64_t x256 = INT64_MAX;
	int64_t t53 = -99081997LL;

	t53 = (x253*(x254-(x255==x256)));

	if (t53 != 5LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x257 = -1;
	static uint32_t x258 = UINT32_MAX;
	int16_t x259 = INT16_MAX;
	int8_t x260 = 46;
	volatile uint32_t t54 = 7013U;

	t54 = (x257*(x258-(x259==x260)));

	if (t54 != 1U) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x261 = -1;
	int64_t x262 = -1LL;
	volatile int64_t t55 = 14LL;

	t55 = (x261*(x262-(x263==x264)));

	if (t55 != 1LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x265 = UINT64_MAX;
	int8_t x266 = 1;
	int32_t x267 = INT32_MIN;
	int32_t x268 = 46;
	static volatile uint64_t t56 = UINT64_MAX;

	t56 = (x265*(x266-(x267==x268)));

	if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x269 = INT8_MIN;
	int16_t x270 = INT16_MIN;
	int16_t x271 = INT16_MAX;
	static volatile int8_t x272 = INT8_MIN;
	volatile int32_t t57 = -22427931;

	t57 = (x269*(x270-(x271==x272)));

	if (t57 != 4194304) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x273 = INT16_MIN;
	uint32_t x274 = 59869239U;
	volatile int64_t x276 = -178416LL;
	uint32_t t58 = 0U;

	t58 = (x273*(x274-(x275==x276)));

	if (t58 != 1004830720U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x277 = -1;
	static uint32_t x278 = UINT32_MAX;
	int16_t x279 = INT16_MIN;
	int64_t x280 = 1085LL;
	uint32_t t59 = 99680U;

	t59 = (x277*(x278-(x279==x280)));

	if (t59 != 1U) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x281 = -3133LL;
	int32_t x283 = INT32_MIN;
	volatile int64_t t60 = 13150272LL;

	t60 = (x281*(x282-(x283==x284)));

	if (t60 != -18798LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x289 = INT32_MIN;
	uint32_t x290 = 3473837U;
	int16_t x291 = INT16_MAX;
	uint8_t x292 = 3U;
	volatile uint32_t t61 = 1918705U;

	t61 = (x289*(x290-(x291==x292)));

	if (t61 != 2147483648U) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x297 = 1317;
	int16_t x298 = INT16_MIN;
	int16_t x299 = 5;
	volatile uint64_t x300 = 37LLU;
	volatile int32_t t62 = 664509943;

	t62 = (x297*(x298-(x299==x300)));

	if (t62 != -43155456) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x301 = -23583;
	int8_t x302 = INT8_MIN;
	volatile uint16_t x303 = 13U;
	volatile int32_t x304 = -168;
	volatile int32_t t63 = 1708448;

	t63 = (x301*(x302-(x303==x304)));

	if (t63 != 3018624) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x310 = UINT32_MAX;
	int32_t x311 = INT32_MAX;
	int32_t x312 = -1;
	uint64_t t64 = 732794441987611981LLU;

	t64 = (x309*(x310-(x311==x312)));

	if (t64 != 347892350895LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x313 = 125;
	uint8_t x316 = UINT8_MAX;
	static volatile int32_t t65 = -17544585;

	t65 = (x313*(x314-(x315==x316)));

	if (t65 != -16000) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x317 = UINT64_MAX;
	int16_t x318 = -23;
	int8_t x319 = INT8_MIN;
	uint16_t x320 = 0U;
	volatile uint64_t t66 = 75LLU;

	t66 = (x317*(x318-(x319==x320)));

	if (t66 != 23LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x327 = 3;

	t67 = (x325*(x326-(x327==x328)));

	if (t67 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x333 = 5U;
	volatile int32_t x335 = INT32_MIN;
	int8_t x336 = -2;
	int32_t t68 = 1313392;

	t68 = (x333*(x334-(x335==x336)));

	if (t68 != -5) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x337 = 1U;
	uint32_t x338 = 7504U;
	int16_t x339 = INT16_MAX;
	int64_t x340 = INT64_MIN;

	t69 = (x337*(x338-(x339==x340)));

	if (t69 != 7504U) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x341 = 117U;
	uint16_t x342 = 19U;
	int8_t x343 = INT8_MIN;
	volatile int32_t x344 = -1;
	int32_t t70 = -20;

	t70 = (x341*(x342-(x343==x344)));

	if (t70 != 2223) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x345 = 518452266LLU;
	static int16_t x346 = 621;
	int32_t x347 = INT32_MIN;
	int64_t x348 = INT64_MIN;
	volatile uint64_t t71 = 61LLU;

	t71 = (x345*(x346-(x347==x348)));

	if (t71 != 321958857186LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x350 = UINT16_MAX;
	volatile uint16_t x351 = UINT16_MAX;
	volatile int32_t x352 = 130635258;
	volatile int32_t t72 = 1;

	t72 = (x349*(x350-(x351==x352)));

	if (t72 != -65535) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x361 = 2219801LL;
	int16_t x362 = INT16_MAX;
	uint32_t x364 = UINT32_MAX;

	t73 = (x361*(x362-(x363==x364)));

	if (t73 != 72736219367LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x365 = 114U;
	uint16_t x366 = 0U;
	uint8_t x367 = 105U;
	int32_t x368 = INT32_MAX;
	int32_t t74 = -45526649;

	t74 = (x365*(x366-(x367==x368)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x369 = -1LL;
	volatile int8_t x370 = -23;
	volatile uint16_t x371 = 44U;
	uint8_t x372 = 4U;

	t75 = (x369*(x370-(x371==x372)));

	if (t75 != 23LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x381 = -1;
	uint32_t x382 = 850776U;
	static volatile uint64_t x383 = 6668145884096963747LLU;
	volatile uint32_t t76 = 761339U;

	t76 = (x381*(x382-(x383==x384)));

	if (t76 != 4294116520U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x385 = -1;
	int16_t x386 = INT16_MIN;
	int64_t x387 = -1LL;
	volatile uint16_t x388 = 16U;
	volatile int32_t t77 = 5329658;

	t77 = (x385*(x386-(x387==x388)));

	if (t77 != 32768) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x390 = -1;
	uint8_t x391 = 6U;
	int8_t x392 = INT8_MAX;
	volatile int32_t t78 = 1;

	t78 = (x389*(x390-(x391==x392)));

	if (t78 != 32768) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint16_t x393 = 3U;
	static uint32_t x394 = 328313U;
	int8_t x395 = INT8_MIN;
	volatile int32_t x396 = INT32_MIN;
	static uint32_t t79 = 197147U;

	t79 = (x393*(x394-(x395==x396)));

	if (t79 != 984939U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x398 = -5;
	int16_t x399 = INT16_MAX;
	static int32_t t80 = 1994400;

	t80 = (x397*(x398-(x399==x400)));

	if (t80 != 163840) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x401 = -1;
	volatile uint32_t x403 = 374611U;
	volatile int64_t t81 = -2907804956LL;

	t81 = (x401*(x402-(x403==x404)));

	if (t81 != -48LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x405 = UINT64_MAX;
	uint16_t x406 = 3U;
	static int32_t x408 = INT32_MAX;
	volatile uint64_t t82 = 11050560LLU;

	t82 = (x405*(x406-(x407==x408)));

	if (t82 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x410 = UINT16_MAX;
	static int8_t x412 = INT8_MIN;
	static volatile int32_t t83 = -12092;

	t83 = (x409*(x410-(x411==x412)));

	if (t83 != -160167540) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int16_t x413 = 0;
	static int64_t x414 = -1LL;
	static int32_t x415 = -1673165;
	static int8_t x416 = INT8_MAX;

	t84 = (x413*(x414-(x415==x416)));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x417 = 9771992U;
	static volatile int16_t x418 = INT16_MIN;
	uint64_t x420 = 391847324LLU;
	volatile uint32_t t85 = 29807753U;

	t85 = (x417*(x418-(x419==x420)));

	if (t85 != 1913913344U) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int16_t x421 = -1;
	volatile int32_t x422 = INT32_MAX;
	int32_t x423 = INT32_MAX;
	int64_t x424 = 1021457146190LL;
	volatile int32_t t86 = -373621312;

	t86 = (x421*(x422-(x423==x424)));

	if (t86 != -2147483647) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x425 = 495032U;
	uint64_t x427 = UINT64_MAX;
	int8_t x428 = INT8_MIN;
	uint32_t t87 = 5U;

	t87 = (x425*(x426-(x427==x428)));

	if (t87 != 4294472264U) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x429 = 252U;
	uint64_t x430 = 5368628727966291LLU;
	uint32_t x431 = 193089U;
	volatile int32_t x432 = 27314221;
	volatile uint64_t t88 = 594989676LLU;

	t88 = (x429*(x430-(x431==x432)));

	if (t88 != 1352894439447505332LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x433 = -42;
	uint64_t x434 = 3949599683LLU;
	int8_t x435 = -1;
	volatile uint64_t t89 = 191452LLU;

	t89 = (x433*(x434-(x435==x436)));

	if (t89 != 18446743907826364930LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int64_t x437 = 245558LL;
	static uint8_t x438 = 5U;
	int64_t x439 = -1LL;
	int64_t t90 = -6500991926265LL;

	t90 = (x437*(x438-(x439==x440)));

	if (t90 != 1227790LL) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int32_t x445 = 1;
	uint64_t x447 = UINT64_MAX;
	volatile int32_t t91 = 1448900;

	t91 = (x445*(x446-(x447==x448)));

	if (t91 != -32769) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x453 = INT8_MAX;
	static volatile int32_t x454 = -1;
	volatile int16_t x455 = -1;
	int16_t x456 = INT16_MIN;
	volatile int32_t t92 = -118289;

	t92 = (x453*(x454-(x455==x456)));

	if (t92 != -127) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x461 = UINT64_MAX;
	int32_t x463 = INT32_MIN;
	volatile uint16_t x464 = 138U;

	t93 = (x461*(x462-(x463==x464)));

	if (t93 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x466 = 60LLU;
	uint32_t x467 = 17U;
	int8_t x468 = -1;
	uint64_t t94 = 8698037LLU;

	t94 = (x465*(x466-(x467==x468)));

	if (t94 != 18446744073663760336LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x469 = UINT16_MAX;
	volatile uint16_t x472 = UINT16_MAX;
	volatile int32_t t95 = -727815827;

	t95 = (x469*(x470-(x471==x472)));

	if (t95 != 758960835) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x473 = -1;
	int16_t x474 = INT16_MIN;
	static int32_t x475 = 4838;
	int64_t x476 = INT64_MIN;
	volatile int32_t t96 = -2741;

	t96 = (x473*(x474-(x475==x476)));

	if (t96 != 32768) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x477 = 21U;
	volatile uint8_t x478 = UINT8_MAX;
	uint16_t x479 = 327U;

	t97 = (x477*(x478-(x479==x480)));

	if (t97 != 5355) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x489 = 1U;
	static int16_t x491 = -1;
	static int8_t x492 = INT8_MIN;
	int64_t t98 = -38957638888875790LL;

	t98 = (x489*(x490-(x491==x492)));

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x497 = INT64_MIN;
	uint64_t x498 = UINT64_MAX;
	int8_t x499 = -1;
	int8_t x500 = INT8_MIN;
	volatile uint64_t t99 = 1878334716818LLU;

	t99 = (x497*(x498-(x499==x500)));

	if (t99 != 9223372036854775808LLU) { NG(); } else { ; }
	
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

