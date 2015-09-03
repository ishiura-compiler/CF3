#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x4 = INT32_MAX;
int16_t x8 = INT16_MIN;
int64_t x11 = 361077034580696LL;
int16_t x15 = INT16_MIN;
int64_t x21 = INT64_MIN;
int16_t x23 = -6272;
int8_t x30 = -1;
volatile uint32_t x37 = 238906899U;
int16_t x38 = INT16_MAX;
int64_t x39 = -76315LL;
volatile int8_t x47 = INT8_MIN;
static volatile uint64_t t10 = 74444738LLU;
volatile int16_t x57 = INT16_MIN;
static uint32_t t14 = 62263688U;
uint32_t t15 = 3096108U;
volatile uint64_t t16 = 1552335274LLU;
volatile int64_t t18 = -292128333304LL;
int32_t x85 = 395752;
int32_t x99 = -1;
uint64_t x108 = 199565LLU;
static volatile int64_t x116 = -8695999060059LL;
uint32_t x121 = 41U;
static int32_t x123 = 365;
volatile uint16_t x128 = 309U;
int8_t x130 = -1;
int16_t x138 = INT16_MAX;
uint64_t x146 = 602475102934LLU;
static int16_t x152 = -910;
static volatile int32_t t34 = -1771262;
int16_t x165 = 109;
volatile int32_t x172 = 160391463;
uint16_t x176 = 2U;
volatile int64_t t38 = -10480862147378157LL;
volatile int64_t t39 = 70169LL;
static uint16_t x194 = UINT16_MAX;
volatile int64_t x199 = INT64_MIN;
int8_t x200 = 1;
int64_t x206 = -6935005101604LL;
int16_t x209 = 1;
static volatile uint64_t x212 = UINT64_MAX;
static uint64_t t48 = 31712231LLU;
uint64_t x229 = 6096LLU;
volatile uint64_t t49 = 5457554474165614LLU;
int8_t x238 = -1;
static volatile int8_t x243 = INT8_MAX;
int64_t t52 = 918119110LL;
static volatile int16_t x258 = INT16_MIN;
int64_t t56 = -245158322313LL;
uint64_t t57 = 5LLU;
uint8_t x271 = 1U;
int64_t x274 = -55LL;
volatile int32_t t62 = -3162;
int8_t x289 = -1;
static volatile uint32_t x292 = UINT32_MAX;
static int64_t x304 = 3LL;
int32_t x306 = -1;
int64_t x307 = INT64_MIN;
int64_t x315 = -1LL;
int16_t x321 = INT16_MIN;
int64_t x329 = -126836244623384518LL;
static volatile uint64_t x333 = UINT64_MAX;
volatile uint64_t t73 = 205405LLU;
static int16_t x340 = INT16_MIN;
int8_t x341 = INT8_MIN;
static uint8_t x343 = 4U;
int32_t x350 = 15020920;
int16_t x351 = 2274;
uint8_t x356 = UINT8_MAX;
int64_t t84 = 23546021890518206LL;
int64_t x398 = -216707121140927LL;
int8_t x400 = INT8_MAX;
int64_t x418 = 6937LL;
int8_t x419 = INT8_MIN;
int16_t x430 = INT16_MIN;
volatile int32_t t91 = -353694;
uint32_t x440 = 732910U;
int64_t x442 = 110607220758LL;
static uint64_t x451 = 33963053507435LLU;
volatile uint64_t t94 = 23729LLU;
int64_t x454 = -1LL;
uint16_t x456 = UINT16_MAX;
volatile uint8_t x469 = UINT8_MAX;
static volatile uint32_t x470 = 11745831U;
uint64_t x472 = 2227473749275511LLU;
uint64_t t98 = 329951960LLU;
volatile int64_t x474 = -946731LL;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	volatile uint64_t x2 = 3352295LLU;
	uint8_t x3 = UINT8_MAX;
	uint64_t t0 = 2612896043658LLU;

	t0 = (x1-(x2+(x3|x4)));

	if (t0 != 18446744071558781209LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	int16_t x6 = INT16_MAX;
	int8_t x7 = -1;
	volatile int32_t t1 = 0;

	t1 = (x5-(x6+(x7|x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 101U;
	int32_t x10 = -1;
	int32_t x12 = INT32_MAX;
	volatile int64_t t2 = -1003LL;

	t2 = (x9-(x10+(x11|x12)));

	if (t2 != -361077900574617LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -14998749106LL;
	static uint8_t x14 = 12U;
	volatile uint64_t x16 = UINT64_MAX;
	uint64_t t3 = 4599642LLU;

	t3 = (x13-(x14+(x15|x16)));

	if (t3 != 18446744058710802499LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x22 = -1;
	int32_t x24 = 1919793;
	int64_t t4 = 290784LL;

	t4 = (x21-(x22+(x23|x24)));

	if (t4 != -9223372036854771632LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int32_t x25 = INT32_MIN;
	int8_t x26 = INT8_MIN;
	uint16_t x27 = 5316U;
	uint64_t x28 = UINT64_MAX;
	static volatile uint64_t t5 = 359252725518817674LLU;

	t5 = (x25-(x26+(x27|x28)));

	if (t5 != 18446744071562068097LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x29 = -15;
	int8_t x31 = INT8_MIN;
	uint16_t x32 = UINT16_MAX;
	volatile int32_t t6 = -127083411;

	t6 = (x29-(x30+(x31|x32)));

	if (t6 != -13) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x40 = 23U;
	volatile int64_t t7 = -4979LL;

	t7 = (x37-(x38+(x39|x40)));

	if (t7 != 238950429LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x41 = INT32_MIN;
	uint8_t x42 = 16U;
	uint64_t x43 = 4166041633154828422LLU;
	uint16_t x44 = 3881U;
	uint64_t t8 = 5450488741LLU;

	t8 = (x41-(x42+(x43|x44)));

	if (t8 != 14280702438407237697LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x45 = 980113U;
	uint32_t x46 = 859U;
	int64_t x48 = INT64_MIN;
	volatile int64_t t9 = -1LL;

	t9 = (x45-(x46+(x47|x48)));

	if (t9 != 979382LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x49 = INT16_MIN;
	volatile int64_t x50 = -1LL;
	int64_t x51 = INT64_MIN;
	static uint64_t x52 = 223384679386603LLU;

	t10 = (x49-(x50+(x51|x52)));

	if (t10 != 9223148652175356438LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x53 = 54U;
	uint16_t x54 = 39U;
	static uint16_t x55 = 3546U;
	int16_t x56 = -1;
	static volatile int32_t t11 = 57375;

	t11 = (x53-(x54+(x55|x56)));

	if (t11 != 16) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x58 = INT64_MIN;
	static int32_t x59 = INT32_MIN;
	volatile uint64_t x60 = 15167LLU;
	static uint64_t t12 = 209282733925677LLU;

	t12 = (x57-(x58+(x59|x60)));

	if (t12 != 9223372039002211521LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x61 = -1LL;
	uint64_t x62 = UINT64_MAX;
	static int64_t x63 = INT64_MIN;
	static int64_t x64 = 265649386350LL;
	uint64_t t13 = 615244907228095226LLU;

	t13 = (x61-(x62+(x63|x64)));

	if (t13 != 9223371771205389458LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x65 = INT32_MAX;
	uint8_t x66 = 0U;
	uint32_t x67 = 243710572U;
	int8_t x68 = 26;

	t14 = (x65-(x66+(x67|x68)));

	if (t14 != 1903773057U) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x69 = 602695U;
	int16_t x70 = -143;
	uint8_t x71 = 0U;
	int32_t x72 = -26931412;

	t15 = (x69-(x70+(x71|x72)));

	if (t15 != 27534250U) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x73 = 22985275237LLU;
	static uint8_t x74 = UINT8_MAX;
	int64_t x75 = 628081LL;
	int32_t x76 = INT32_MAX;

	t16 = (x73-(x74+(x75|x76)));

	if (t16 != 20837791335LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x77 = 73U;
	uint16_t x78 = 7U;
	static int8_t x79 = INT8_MIN;
	int8_t x80 = INT8_MIN;
	int32_t t17 = 65616179;

	t17 = (x77-(x78+(x79|x80)));

	if (t17 != 194) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x81 = INT16_MIN;
	int8_t x82 = -1;
	int64_t x83 = -3829424LL;
	int16_t x84 = INT16_MIN;

	t18 = (x81-(x82+(x83|x84)));

	if (t18 != -4431LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x86 = 0LLU;
	int64_t x87 = 7650614946822LL;
	int32_t x88 = INT32_MAX;
	uint64_t t19 = 303984LLU;

	t19 = (x85-(x86+(x87|x88)));

	if (t19 != 18446736422225709545LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x89 = 2030684786LL;
	static int8_t x90 = -1;
	uint64_t x91 = UINT64_MAX;
	volatile int8_t x92 = INT8_MIN;
	static uint64_t t20 = 3858918639LLU;

	t20 = (x89-(x90+(x91|x92)));

	if (t20 != 2030684788LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x93 = 114U;
	int8_t x94 = 6;
	uint16_t x95 = 122U;
	uint8_t x96 = 10U;
	uint32_t t21 = 383872942U;

	t21 = (x93-(x94+(x95|x96)));

	if (t21 != 4294967282U) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int8_t x97 = INT8_MIN;
	int16_t x98 = INT16_MAX;
	volatile int64_t x100 = -1LL;
	volatile int64_t t22 = 72265093579LL;

	t22 = (x97-(x98+(x99|x100)));

	if (t22 != -32894LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x101 = -1LL;
	int64_t x102 = -1LL;
	int16_t x103 = 6743;
	uint8_t x104 = 0U;
	volatile int64_t t23 = -228369LL;

	t23 = (x101-(x102+(x103|x104)));

	if (t23 != -6743LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x105 = INT16_MIN;
	static uint8_t x106 = 1U;
	int16_t x107 = -1;
	static volatile uint64_t t24 = 31108778878891LLU;

	t24 = (x105-(x106+(x107|x108)));

	if (t24 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x109 = -1;
	int8_t x110 = 26;
	volatile int8_t x111 = 3;
	uint64_t x112 = 26178149693800544LLU;
	uint64_t t25 = 468822116556LLU;

	t25 = (x109-(x110+(x111|x112)));

	if (t25 != 18420565924015751042LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x113 = -1;
	int32_t x114 = -1;
	int16_t x115 = INT16_MAX;
	static int64_t t26 = 1816LL;

	t26 = (x113-(x114+(x115|x116)));

	if (t26 != 8695999037441LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x122 = -2597359130526219LL;
	uint8_t x124 = UINT8_MAX;
	volatile int64_t t27 = 532072616649344194LL;

	t27 = (x121-(x122+(x123|x124)));

	if (t27 != 2597359130525749LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x125 = 742706813;
	int16_t x126 = INT16_MIN;
	volatile uint64_t x127 = UINT64_MAX;
	volatile uint64_t t28 = 7097062092803870950LLU;

	t28 = (x125-(x126+(x127|x128)));

	if (t28 != 742739582LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x129 = -1LL;
	uint8_t x131 = 3U;
	int64_t x132 = -1LL;
	volatile int64_t t29 = 916462474577475991LL;

	t29 = (x129-(x130+(x131|x132)));

	if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x137 = 1626U;
	uint64_t x139 = UINT64_MAX;
	static uint32_t x140 = UINT32_MAX;
	static uint64_t t30 = 18472412LLU;

	t30 = (x137-(x138+(x139|x140)));

	if (t30 != 18446744073709520476LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x141 = INT8_MAX;
	int64_t x142 = INT64_MIN;
	uint32_t x143 = 1778695U;
	static int32_t x144 = 1321558;
	int64_t t31 = 301091LL;

	t31 = (x141-(x142+(x143|x144)));

	if (t31 != 9223372036852732456LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x145 = INT64_MIN;
	int32_t x147 = -1;
	static int16_t x148 = INT16_MAX;
	uint64_t t32 = 131813453134600LLU;

	t32 = (x145-(x146+(x147|x148)));

	if (t32 != 9223371434379672875LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x149 = UINT16_MAX;
	int16_t x150 = 899;
	int64_t x151 = INT64_MIN;
	volatile int64_t t33 = 4LL;

	t33 = (x149-(x150+(x151|x152)));

	if (t33 != 65546LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x153 = INT8_MIN;
	int8_t x154 = INT8_MAX;
	uint8_t x155 = 1U;
	static volatile int8_t x156 = INT8_MIN;

	t34 = (x153-(x154+(x155|x156)));

	if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x161 = 2000U;
	int64_t x162 = INT64_MIN;
	static int32_t x163 = INT32_MAX;
	int32_t x164 = 469527;
	volatile int64_t t35 = 110517500545593LL;

	t35 = (x161-(x162+(x163|x164)));

	if (t35 != 9223372034707294161LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x166 = 0;
	int16_t x167 = -1;
	int64_t x168 = -1LL;
	int64_t t36 = -510629117608200900LL;

	t36 = (x165-(x166+(x167|x168)));

	if (t36 != 110LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x169 = 437191617843360LLU;
	uint32_t x170 = 134U;
	int32_t x171 = INT32_MIN;
	volatile uint64_t t37 = 571LLU;

	t37 = (x169-(x170+(x171|x172)));

	if (t37 != 437189309968115LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x173 = 0;
	static uint8_t x174 = 0U;
	static int64_t x175 = INT64_MIN;

	t38 = (x173-(x174+(x175|x176)));

	if (t38 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x181 = UINT8_MAX;
	static uint8_t x182 = 16U;
	static int8_t x183 = -5;
	static int64_t x184 = INT64_MAX;

	t39 = (x181-(x182+(x183|x184)));

	if (t39 != 240LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x185 = 201U;
	static volatile int64_t x186 = -1LL;
	int32_t x187 = -134811;
	uint8_t x188 = 2U;
	volatile int64_t t40 = 27624051LL;

	t40 = (x185-(x186+(x187|x188)));

	if (t40 != 135011LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x189 = INT32_MAX;
	volatile int32_t x190 = 100;
	uint16_t x191 = UINT16_MAX;
	static uint8_t x192 = UINT8_MAX;
	int32_t t41 = 0;

	t41 = (x189-(x190+(x191|x192)));

	if (t41 != 2147418012) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x193 = -1;
	volatile int32_t x195 = -1;
	volatile uint16_t x196 = 3U;
	int32_t t42 = 1241893;

	t42 = (x193-(x194+(x195|x196)));

	if (t42 != -65535) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x197 = INT64_MIN;
	int64_t x198 = -1LL;
	volatile int64_t t43 = 311620813419061LL;

	t43 = (x197-(x198+(x199|x200)));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x201 = UINT16_MAX;
	int8_t x202 = 1;
	int64_t x203 = INT64_MAX;
	uint64_t x204 = 95309429970LLU;
	uint64_t t44 = 4608231698LLU;

	t44 = (x201-(x202+(x203|x204)));

	if (t44 != 9223372036854841343LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x205 = INT32_MIN;
	uint32_t x207 = 70457U;
	static uint64_t x208 = 113082868408LLU;
	uint64_t t45 = 7LLU;

	t45 = (x205-(x206+(x207|x208)));

	if (t45 != 6819774745195LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x210 = INT32_MAX;
	int8_t x211 = INT8_MIN;
	uint64_t t46 = 515615223599LLU;

	t46 = (x209-(x210+(x211|x212)));

	if (t46 != 18446744071562067971LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x217 = -9;
	volatile int16_t x218 = 16235;
	int16_t x219 = -1;
	uint32_t x220 = 7U;
	volatile uint32_t t47 = 415005U;

	t47 = (x217-(x218+(x219|x220)));

	if (t47 != 4294951053U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x225 = -5;
	uint16_t x226 = UINT16_MAX;
	uint64_t x227 = 189660849258678950LLU;
	static uint8_t x228 = UINT8_MAX;

	t48 = (x225-(x226+(x227|x228)));

	if (t48 != 18257083224450807037LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x230 = -36287600828894LL;
	uint16_t x231 = 1U;
	int16_t x232 = INT16_MIN;

	t49 = (x229-(x230+(x231|x232)));

	if (t49 != 36287600867757LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x233 = 0U;
	volatile uint64_t x234 = 1LLU;
	uint16_t x235 = 109U;
	uint64_t x236 = 21446134408LLU;
	volatile uint64_t t50 = 2945533LLU;

	t50 = (x233-(x234+(x235|x236)));

	if (t50 != 18446744052263417106LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x237 = INT32_MIN;
	int16_t x239 = INT16_MAX;
	static int32_t x240 = -126;
	int32_t t51 = -806468;

	t51 = (x237-(x238+(x239|x240)));

	if (t51 != -2147483646) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x241 = INT64_MAX;
	int8_t x242 = INT8_MIN;
	uint16_t x244 = 460U;

	t52 = (x241-(x242+(x243|x244)));

	if (t52 != 9223372036854775424LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint32_t x245 = UINT32_MAX;
	int64_t x246 = INT64_MAX;
	volatile uint64_t x247 = 4833040581754605LLU;
	int16_t x248 = -742;
	volatile uint64_t t53 = 8921568284275LLU;

	t53 = (x245-(x246+(x247|x248)));

	if (t53 != 9223372041149743105LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x253 = UINT32_MAX;
	int32_t x254 = INT32_MIN;
	static uint64_t x255 = 317066664552034248LLU;
	volatile int8_t x256 = -23;
	uint64_t t54 = 0LLU;

	t54 = (x253-(x254+(x255|x256)));

	if (t54 != 6442450966LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x257 = -174209;
	int8_t x259 = INT8_MIN;
	int16_t x260 = INT16_MIN;
	int32_t t55 = -2008646;

	t55 = (x257-(x258+(x259|x260)));

	if (t55 != -141313) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x261 = INT16_MIN;
	int64_t x262 = INT64_MIN;
	uint8_t x263 = 0U;
	int8_t x264 = 44;

	t56 = (x261-(x262+(x263|x264)));

	if (t56 != 9223372036854742996LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x265 = INT64_MIN;
	uint8_t x266 = 51U;
	uint64_t x267 = 56540377061108133LLU;
	int64_t x268 = INT64_MIN;

	t57 = (x265-(x266+(x267|x268)));

	if (t57 != 18390203696648443432LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x269 = -162228543889688277LL;
	uint8_t x270 = 123U;
	volatile uint8_t x272 = 37U;
	int64_t t58 = 115LL;

	t58 = (x269-(x270+(x271|x272)));

	if (t58 != -162228543889688437LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x273 = INT64_MIN;
	int16_t x275 = -1;
	uint64_t x276 = 57687436120655607LLU;
	volatile uint64_t t59 = 41679157LLU;

	t59 = (x273-(x274+(x275|x276)));

	if (t59 != 9223372036854775864LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x277 = 476745;
	volatile int64_t x278 = -753330016253LL;
	int64_t x279 = 6LL;
	int16_t x280 = -2;
	int64_t t60 = 694723737441967LL;

	t60 = (x277-(x278+(x279|x280)));

	if (t60 != 753330493000LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x281 = 2;
	int8_t x282 = INT8_MIN;
	int16_t x283 = INT16_MAX;
	uint8_t x284 = UINT8_MAX;
	volatile int32_t t61 = -1752063;

	t61 = (x281-(x282+(x283|x284)));

	if (t61 != -32637) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x285 = INT16_MAX;
	volatile int8_t x286 = INT8_MAX;
	int8_t x287 = INT8_MIN;
	int16_t x288 = -1;

	t62 = (x285-(x286+(x287|x288)));

	if (t62 != 32641) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x290 = 655LLU;
	uint8_t x291 = 125U;
	uint64_t t63 = 617399761306410LLU;

	t63 = (x289-(x290+(x291|x292)));

	if (t63 != 18446744069414583665LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x293 = UINT64_MAX;
	int64_t x294 = INT64_MIN;
	uint8_t x295 = 113U;
	int32_t x296 = 48865;
	volatile uint64_t t64 = 0LLU;

	t64 = (x293-(x294+(x295|x296)));

	if (t64 != 9223372036854726926LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x297 = 204;
	static uint16_t x298 = UINT16_MAX;
	int16_t x299 = -1;
	int32_t x300 = INT32_MAX;
	volatile int32_t t65 = -27747101;

	t65 = (x297-(x298+(x299|x300)));

	if (t65 != -65330) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x301 = INT16_MIN;
	volatile uint32_t x302 = 1U;
	static int16_t x303 = INT16_MIN;
	int64_t t66 = -1799039LL;

	t66 = (x301-(x302+(x303|x304)));

	if (t66 != -4LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x305 = UINT16_MAX;
	static int8_t x308 = INT8_MIN;
	static int64_t t67 = 179077969LL;

	t67 = (x305-(x306+(x307|x308)));

	if (t67 != 65664LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x309 = INT32_MIN;
	int64_t x310 = 201LL;
	volatile int16_t x311 = INT16_MIN;
	uint8_t x312 = 27U;
	volatile int64_t t68 = 16991906835861LL;

	t68 = (x309-(x310+(x311|x312)));

	if (t68 != -2147451108LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x313 = INT32_MIN;
	int32_t x314 = -1;
	static uint8_t x316 = 3U;
	int64_t t69 = 18584651LL;

	t69 = (x313-(x314+(x315|x316)));

	if (t69 != -2147483646LL) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint8_t x317 = 0U;
	static int64_t x318 = 727482883949643LL;
	int8_t x319 = INT8_MIN;
	int32_t x320 = INT32_MIN;
	static volatile int64_t t70 = -22LL;

	t70 = (x317-(x318+(x319|x320)));

	if (t70 != -727482883949515LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x322 = INT16_MAX;
	int16_t x323 = INT16_MAX;
	int32_t x324 = INT32_MIN;
	volatile int32_t t71 = 833907;

	t71 = (x321-(x322+(x323|x324)));

	if (t71 != 2147385346) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x330 = -1;
	int8_t x331 = -1;
	int64_t x332 = 1LL;
	volatile int64_t t72 = 28LL;

	t72 = (x329-(x330+(x331|x332)));

	if (t72 != -126836244623384516LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x334 = 3908455U;
	static int64_t x335 = INT64_MIN;
	int32_t x336 = -1;

	t73 = (x333-(x334+(x335|x336)));

	if (t73 != 18446744073705643161LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x337 = -1;
	uint8_t x338 = UINT8_MAX;
	int16_t x339 = INT16_MIN;
	int32_t t74 = -845;

	t74 = (x337-(x338+(x339|x340)));

	if (t74 != 32512) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x342 = 80571777;
	int8_t x344 = -2;
	volatile int32_t t75 = -22;

	t75 = (x341-(x342+(x343|x344)));

	if (t75 != -80571903) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x349 = INT32_MIN;
	int64_t x352 = -1LL;
	int64_t t76 = 1682284478293LL;

	t76 = (x349-(x350+(x351|x352)));

	if (t76 != -2162504567LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x353 = INT8_MIN;
	uint8_t x354 = 14U;
	int32_t x355 = INT32_MIN;
	volatile int32_t t77 = 1;

	t77 = (x353-(x354+(x355|x356)));

	if (t77 != 2147483251) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x365 = -224569;
	uint64_t x366 = 1054440415969LLU;
	int32_t x367 = 206653;
	int16_t x368 = 1;
	volatile uint64_t t78 = 716968147LLU;

	t78 = (x365-(x366+(x367|x368)));

	if (t78 != 18446743019268704425LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x373 = INT32_MIN;
	uint32_t x374 = 350U;
	volatile int16_t x375 = INT16_MIN;
	static uint8_t x376 = 3U;
	static volatile uint32_t t79 = 589U;

	t79 = (x373-(x374+(x375|x376)));

	if (t79 != 2147516063U) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x377 = -13459131191737513LL;
	int32_t x378 = -1;
	int8_t x379 = 13;
	uint16_t x380 = UINT16_MAX;
	int64_t t80 = -83194244072109LL;

	t80 = (x377-(x378+(x379|x380)));

	if (t80 != -13459131191803047LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x381 = INT32_MIN;
	static volatile int8_t x382 = INT8_MAX;
	uint64_t x383 = UINT64_MAX;
	int32_t x384 = -5;
	uint64_t t81 = 0LLU;

	t81 = (x381-(x382+(x383|x384)));

	if (t81 != 18446744071562067842LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x385 = 1593899;
	int16_t x386 = INT16_MAX;
	int16_t x387 = -13722;
	uint32_t x388 = 970U;
	uint32_t t82 = 6U;

	t82 = (x385-(x386+(x387|x388)));

	if (t82 != 1574462U) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x389 = 14U;
	int8_t x390 = INT8_MIN;
	uint64_t x391 = 31LLU;
	static int32_t x392 = 11672079;
	volatile uint64_t t83 = 159LLU;

	t83 = (x389-(x390+(x391|x392)));

	if (t83 != 18446744073697879663LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x393 = 13206U;
	int32_t x394 = -1;
	int64_t x395 = -132622LL;
	int64_t x396 = INT64_MIN;

	t84 = (x393-(x394+(x395|x396)));

	if (t84 != 145829LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x397 = INT16_MAX;
	volatile uint64_t x399 = 336LLU;
	uint64_t t85 = 306LLU;

	t85 = (x397-(x398+(x399|x400)));

	if (t85 != 216707121173311LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x409 = 11748;
	int64_t x410 = INT64_MAX;
	volatile int16_t x411 = -1;
	int32_t x412 = -1;
	volatile int64_t t86 = -2669426291620826118LL;

	t86 = (x409-(x410+(x411|x412)));

	if (t86 != -9223372036854764058LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x413 = 57006;
	static uint32_t x414 = 2215U;
	int32_t x415 = -1943690;
	static int64_t x416 = -1LL;
	volatile int64_t t87 = -11009394197LL;

	t87 = (x413-(x414+(x415|x416)));

	if (t87 != 54792LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x417 = INT16_MIN;
	static uint16_t x420 = 295U;
	static int64_t t88 = -435391665432020LL;

	t88 = (x417-(x418+(x419|x420)));

	if (t88 != -39616LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x425 = 162;
	volatile int32_t x426 = INT32_MIN;
	uint32_t x427 = UINT32_MAX;
	int64_t x428 = INT64_MIN;
	int64_t t89 = -1865955LL;

	t89 = (x425-(x426+(x427|x428)));

	if (t89 != 9223372034707292323LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x429 = INT16_MIN;
	uint16_t x431 = UINT16_MAX;
	static int64_t x432 = INT64_MIN;
	int64_t t90 = -393775711992LL;

	t90 = (x429-(x430+(x431|x432)));

	if (t90 != 9223372036854710273LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x433 = INT32_MIN;
	volatile int8_t x434 = INT8_MIN;
	int16_t x435 = INT16_MIN;
	int16_t x436 = INT16_MIN;

	t91 = (x433-(x434+(x435|x436)));

	if (t91 != -2147450752) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x437 = -1LL;
	uint64_t x438 = 3270670591369LLU;
	uint8_t x439 = 5U;
	volatile uint64_t t92 = 21LLU;

	t92 = (x437-(x438+(x439|x440)));

	if (t92 != 18446740803038227335LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x441 = 1U;
	volatile int32_t x443 = 1277;
	uint16_t x444 = 59U;
	int64_t t93 = -16LL;

	t93 = (x441-(x442+(x443|x444)));

	if (t93 != -110607222036LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x449 = 1U;
	int8_t x450 = INT8_MAX;
	uint16_t x452 = 23907U;

	t94 = (x449-(x450+(x451|x452)));

	if (t94 != 18446710110656036887LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x453 = 9181474248157LLU;
	uint64_t x455 = 6566963LLU;
	volatile uint64_t t95 = 7672018905588299LLU;

	t95 = (x453-(x454+(x455|x456)));

	if (t95 != 9181467629023LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x461 = -1;
	volatile uint16_t x462 = 13735U;
	int32_t x463 = -12912;
	int16_t x464 = INT16_MIN;
	int32_t t96 = 223358;

	t96 = (x461-(x462+(x463|x464)));

	if (t96 != -824) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x465 = -7830;
	volatile uint32_t x466 = 16347398U;
	int8_t x467 = -1;
	uint64_t x468 = UINT64_MAX;
	volatile uint64_t t97 = 34LLU;

	t97 = (x465-(x466+(x467|x468)));

	if (t97 != 18446744073693196389LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x471 = 1057801323659LLU;

	t98 = (x469-(x470+(x471|x472)));

	if (t98 != 18444516504246243033LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x473 = -2;
	static int8_t x475 = INT8_MIN;
	int16_t x476 = INT16_MIN;
	int64_t t99 = 3380980214LL;

	t99 = (x473-(x474+(x475|x476)));

	if (t99 != 946857LL) { NG(); } else { ; }
	
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

