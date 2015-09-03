#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x17 = 56U;
volatile int8_t x24 = INT8_MIN;
volatile int64_t x25 = -16433LL;
static uint64_t x30 = UINT64_MAX;
uint64_t t9 = 90408LLU;
int32_t x64 = INT32_MAX;
static volatile int64_t x107 = -1LL;
int64_t x110 = INT64_MAX;
int16_t x114 = -1;
int32_t x117 = INT32_MIN;
uint32_t x127 = 27U;
static int8_t x128 = INT8_MAX;
int8_t x132 = 12;
static int32_t t26 = -80;
int64_t x133 = 7361632054LL;
int8_t x134 = 62;
int16_t x144 = INT16_MAX;
int8_t x154 = -13;
uint32_t x158 = 335387U;
int16_t x163 = INT16_MIN;
int64_t x168 = INT64_MIN;
uint64_t x171 = UINT64_MAX;
uint64_t t35 = 706LLU;
int16_t x176 = -369;
uint64_t t37 = 66344638570880LLU;
uint32_t x187 = 462U;
volatile uint32_t t38 = 62060840U;
uint16_t x191 = UINT16_MAX;
int32_t x192 = INT32_MAX;
static int8_t x197 = INT8_MIN;
int8_t x206 = INT8_MIN;
int32_t x210 = INT32_MIN;
volatile int64_t x215 = -109LL;
int16_t x224 = -337;
volatile int32_t t46 = -1019925;
volatile uint8_t x232 = 0U;
volatile int64_t t48 = 319712946752675LL;
uint32_t x233 = 363U;
static int16_t x242 = INT16_MIN;
uint16_t x250 = UINT16_MAX;
int16_t x253 = -1;
int32_t x258 = -1361045;
static uint8_t x269 = UINT8_MAX;
int32_t x272 = INT32_MAX;
int32_t x279 = INT32_MIN;
int64_t x281 = 25604653045LL;
int8_t x283 = -1;
int8_t x292 = INT8_MAX;
int8_t x295 = 1;
int8_t x304 = 0;
int64_t t62 = -694784758LL;
uint32_t t66 = 1385U;
uint8_t x336 = UINT8_MAX;
volatile uint64_t x344 = 39532407403LLU;
int8_t x349 = -1;
static int8_t x352 = INT8_MAX;
int16_t x356 = 0;
int16_t x357 = INT16_MAX;
uint8_t x367 = 50U;
volatile int8_t x368 = -1;
volatile int32_t t77 = -2276;
static volatile int16_t x375 = INT16_MIN;
int32_t x376 = INT32_MIN;
static int8_t x387 = 1;
static volatile uint64_t x399 = UINT64_MAX;
volatile uint64_t t82 = 13340190701708716LLU;
static uint16_t x413 = 19U;
int8_t x424 = 0;
int64_t x428 = -2LL;
static int32_t x441 = INT32_MIN;
int8_t x442 = -1;
int8_t x449 = 3;
int16_t x450 = INT16_MIN;
int32_t x454 = INT32_MIN;
volatile int32_t t97 = 687219;


void f0(void) {
	int8_t x1 = 1;
	int8_t x2 = -28;
	uint32_t x3 = 16523843U;
	volatile int16_t x4 = -1;
	static volatile uint32_t t0 = 30016U;

	t0 = (x1-(x2&(x3|x4)));

	if (t0 != 29U) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x9 = 60U;
	volatile int64_t x10 = -72633390603LL;
	int8_t x11 = INT8_MIN;
	int8_t x12 = -1;
	int64_t t1 = 74509460LL;

	t1 = (x9-(x10&(x11|x12)));

	if (t1 != 72633390663LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x13 = 1U;
	volatile uint16_t x14 = 21U;
	volatile int16_t x15 = -3;
	static int64_t x16 = -3268125757818806LL;
	int64_t t2 = -6843262743LL;

	t2 = (x13-(x14&(x15|x16)));

	if (t2 != -20LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x18 = 429295575986LLU;
	int16_t x19 = INT16_MIN;
	int32_t x20 = -768261;
	static volatile uint64_t t3 = 952258511195289LLU;

	t3 = (x17-(x18&(x19|x20)));

	if (t3 != 18446743644413984134LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x21 = 415788LL;
	static int8_t x22 = INT8_MIN;
	int16_t x23 = INT16_MIN;
	int64_t t4 = 229LL;

	t4 = (x21-(x22&(x23|x24)));

	if (t4 != 415916LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x26 = -1;
	static volatile int64_t x27 = INT64_MIN;
	static uint16_t x28 = 15U;
	static volatile int64_t t5 = 15LL;

	t5 = (x25-(x26&(x27|x28)));

	if (t5 != 9223372036854759360LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = -7;
	uint8_t x31 = UINT8_MAX;
	volatile int32_t x32 = INT32_MIN;
	uint64_t t6 = 36LLU;

	t6 = (x29-(x30&(x31|x32)));

	if (t6 != 2147483386LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x33 = -1;
	int16_t x34 = INT16_MIN;
	int16_t x35 = 3472;
	static int32_t x36 = INT32_MAX;
	volatile int32_t t7 = -894077023;

	t7 = (x33-(x34&(x35|x36)));

	if (t7 != -2147450881) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x37 = 5LLU;
	int64_t x38 = INT64_MIN;
	uint16_t x39 = 3U;
	uint8_t x40 = 2U;
	uint64_t t8 = 124588795422LLU;

	t8 = (x37-(x38&(x39|x40)));

	if (t8 != 5LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = 17;
	static uint8_t x46 = 2U;
	uint64_t x47 = UINT64_MAX;
	int16_t x48 = 6532;

	t9 = (x45-(x46&(x47|x48)));

	if (t9 != 15LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x49 = -30;
	volatile uint32_t x50 = 20899315U;
	static volatile int32_t x51 = -32;
	static int16_t x52 = -583;
	static uint32_t t10 = 1816518U;

	t10 = (x49-(x50&(x51|x52)));

	if (t10 != 4274067953U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x53 = INT32_MIN;
	uint32_t x54 = UINT32_MAX;
	uint64_t x55 = UINT64_MAX;
	int32_t x56 = -1;
	uint64_t t11 = 182LLU;

	t11 = (x53-(x54&(x55|x56)));

	if (t11 != 18446744067267100673LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x57 = INT32_MIN;
	int32_t x58 = INT32_MIN;
	static uint16_t x59 = 206U;
	uint16_t x60 = UINT16_MAX;
	static int32_t t12 = INT32_MIN;

	t12 = (x57-(x58&(x59|x60)));

	if (t12 != INT32_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x61 = INT8_MAX;
	int16_t x62 = INT16_MAX;
	int8_t x63 = -1;
	int32_t t13 = -40;

	t13 = (x61-(x62&(x63|x64)));

	if (t13 != -32640) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x73 = INT8_MIN;
	uint32_t x74 = 10235313U;
	int64_t x75 = INT64_MIN;
	volatile uint16_t x76 = 26U;
	volatile int64_t t14 = 209455573454350173LL;

	t14 = (x73-(x74&(x75|x76)));

	if (t14 != -144LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x77 = INT8_MIN;
	int32_t x78 = -1;
	volatile int16_t x79 = -1;
	uint64_t x80 = UINT64_MAX;
	uint64_t t15 = 144380998LLU;

	t15 = (x77-(x78&(x79|x80)));

	if (t15 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x81 = -1;
	volatile int64_t x82 = -1LL;
	int32_t x83 = INT32_MIN;
	int16_t x84 = INT16_MIN;
	int64_t t16 = -228378LL;

	t16 = (x81-(x82&(x83|x84)));

	if (t16 != 32767LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x85 = -1;
	volatile int16_t x86 = -105;
	int8_t x87 = INT8_MIN;
	uint32_t x88 = 322411U;
	static uint32_t t17 = 30904U;

	t17 = (x85-(x86&(x87|x88)));

	if (t17 != 124U) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x89 = 15U;
	volatile int64_t x90 = 629725036LL;
	static int16_t x91 = -1;
	int32_t x92 = INT32_MIN;
	int64_t t18 = -772398LL;

	t18 = (x89-(x90&(x91|x92)));

	if (t18 != -629725021LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x93 = UINT8_MAX;
	volatile uint16_t x94 = UINT16_MAX;
	uint16_t x95 = UINT16_MAX;
	static int16_t x96 = INT16_MIN;
	int32_t t19 = 0;

	t19 = (x93-(x94&(x95|x96)));

	if (t19 != -65280) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x97 = 344LL;
	uint16_t x98 = 7271U;
	int32_t x99 = INT32_MAX;
	static int16_t x100 = INT16_MIN;
	static int64_t t20 = -937067964LL;

	t20 = (x97-(x98&(x99|x100)));

	if (t20 != -6927LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x105 = INT8_MAX;
	int16_t x106 = INT16_MAX;
	volatile int16_t x108 = INT16_MIN;
	static int64_t t21 = 1LL;

	t21 = (x105-(x106&(x107|x108)));

	if (t21 != -32640LL) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint8_t x109 = 1U;
	static int32_t x111 = -932551872;
	static int32_t x112 = 373;
	int64_t t22 = 1757169130878764LL;

	t22 = (x109-(x110&(x111|x112)));

	if (t22 != -9223372035922223988LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x113 = -1;
	int16_t x115 = -24;
	static volatile int32_t x116 = -618;
	int32_t t23 = 1829;

	t23 = (x113-(x114&(x115|x116)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x118 = 1U;
	int64_t x119 = INT64_MAX;
	static int8_t x120 = INT8_MIN;
	volatile int64_t t24 = 1526102134924996398LL;

	t24 = (x117-(x118&(x119|x120)));

	if (t24 != -2147483649LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x125 = INT16_MAX;
	static int8_t x126 = 60;
	uint32_t t25 = 28394840U;

	t25 = (x125-(x126&(x127|x128)));

	if (t25 != 32707U) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x129 = 0U;
	int16_t x130 = -1;
	int8_t x131 = -1;

	t26 = (x129-(x130&(x131|x132)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x135 = 14U;
	int32_t x136 = 7600896;
	int64_t t27 = 1450511414741772639LL;

	t27 = (x133-(x134&(x135|x136)));

	if (t27 != 7361632040LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x141 = 6259002260LLU;
	int64_t x142 = 4153935841LL;
	int64_t x143 = -1LL;
	volatile uint64_t t28 = 109758565LLU;

	t28 = (x141-(x142&(x143|x144)));

	if (t28 != 2105066419LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x145 = UINT16_MAX;
	int32_t x146 = -1;
	int16_t x147 = 5831;
	int8_t x148 = INT8_MIN;
	volatile int32_t t29 = -58;

	t29 = (x145-(x146&(x147|x148)));

	if (t29 != 65592) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int64_t x149 = -1LL;
	uint32_t x150 = 6U;
	static uint32_t x151 = 1173155755U;
	uint8_t x152 = 86U;
	volatile int64_t t30 = 803LL;

	t30 = (x149-(x150&(x151|x152)));

	if (t30 != -7LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x153 = INT8_MIN;
	volatile int32_t x155 = INT32_MIN;
	int64_t x156 = -1LL;
	static int64_t t31 = -482830537836010034LL;

	t31 = (x153-(x154&(x155|x156)));

	if (t31 != -115LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x157 = INT16_MAX;
	volatile int16_t x159 = 12;
	int64_t x160 = -121418621898LL;
	int64_t t32 = -37047LL;

	t32 = (x157-(x158&(x159|x160)));

	if (t32 != 25573LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x161 = INT32_MAX;
	volatile int16_t x162 = -5451;
	uint32_t x164 = 2238468U;
	volatile uint32_t t33 = 516570U;

	t33 = (x161-(x162&(x163|x164)));

	if (t33 != 2147506171U) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x165 = INT32_MIN;
	uint16_t x166 = UINT16_MAX;
	uint8_t x167 = 28U;
	int64_t t34 = 6445LL;

	t34 = (x165-(x166&(x167|x168)));

	if (t34 != -2147483676LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x169 = INT32_MIN;
	int16_t x170 = -218;
	static int32_t x172 = -22;

	t35 = (x169-(x170&(x171|x172)));

	if (t35 != 18446744071562068186LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x173 = -1LL;
	volatile int16_t x174 = INT16_MIN;
	static int64_t x175 = INT64_MAX;
	int64_t t36 = -59676773LL;

	t36 = (x173-(x174&(x175|x176)));

	if (t36 != 32767LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x177 = UINT64_MAX;
	static int16_t x178 = -2754;
	volatile int16_t x179 = -2;
	int8_t x180 = INT8_MAX;

	t37 = (x177-(x178&(x179|x180)));

	if (t37 != 2753LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x185 = INT32_MAX;
	uint32_t x186 = 31916622U;
	static uint32_t x188 = 711502525U;

	t38 = (x185-(x186&(x187|x188)));

	if (t38 != 2141191601U) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x189 = UINT32_MAX;
	uint8_t x190 = UINT8_MAX;
	uint32_t t39 = 208557443U;

	t39 = (x189-(x190&(x191|x192)));

	if (t39 != 4294967040U) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x198 = 38U;
	uint16_t x199 = 837U;
	int16_t x200 = -1;
	volatile int32_t t40 = 4666519;

	t40 = (x197-(x198&(x199|x200)));

	if (t40 != -166) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x201 = 18706409U;
	volatile uint64_t x202 = 451493429342948LLU;
	volatile int32_t x203 = INT32_MAX;
	uint8_t x204 = UINT8_MAX;
	uint64_t t41 = 0LLU;

	t41 = (x201-(x202&(x203|x204)));

	if (t41 != 18446744073703521541LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x205 = INT16_MIN;
	int64_t x207 = -1LL;
	int16_t x208 = -1;
	volatile int64_t t42 = -369641542609798LL;

	t42 = (x205-(x206&(x207|x208)));

	if (t42 != -32640LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x209 = 42787U;
	int64_t x211 = -1LL;
	volatile int8_t x212 = -1;
	static volatile int64_t t43 = 141LL;

	t43 = (x209-(x210&(x211|x212)));

	if (t43 != 2147526435LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x213 = -1;
	static int8_t x214 = -14;
	static uint8_t x216 = 1U;
	int64_t t44 = 1729038084085576LL;

	t44 = (x213-(x214&(x215|x216)));

	if (t44 != 109LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x217 = INT8_MAX;
	int16_t x218 = INT16_MIN;
	uint16_t x219 = 3U;
	uint16_t x220 = UINT16_MAX;
	volatile int32_t t45 = 9136;

	t45 = (x217-(x218&(x219|x220)));

	if (t45 != -32641) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x221 = 11327;
	int32_t x222 = -1;
	volatile uint8_t x223 = UINT8_MAX;

	t46 = (x221-(x222&(x223|x224)));

	if (t46 != 11584) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x225 = 0;
	static int8_t x226 = -1;
	int64_t x227 = -1LL;
	int8_t x228 = -1;
	static volatile int64_t t47 = 800LL;

	t47 = (x225-(x226&(x227|x228)));

	if (t47 != 1LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x229 = UINT8_MAX;
	int8_t x230 = INT8_MIN;
	static int64_t x231 = -1LL;

	t48 = (x229-(x230&(x231|x232)));

	if (t48 != 383LL) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int64_t x234 = -575814077LL;
	volatile int16_t x235 = INT16_MIN;
	int16_t x236 = 15381;
	volatile int64_t t49 = -1699583126438LL;

	t49 = (x233-(x234&(x235|x236)));

	if (t49 != 575831402LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x241 = 22324400;
	int16_t x243 = INT16_MIN;
	uint16_t x244 = UINT16_MAX;
	int32_t t50 = -351786;

	t50 = (x241-(x242&(x243|x244)));

	if (t50 != 22357168) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x249 = INT16_MAX;
	int16_t x251 = -7;
	static uint32_t x252 = 99U;
	uint32_t t51 = 7205U;

	t51 = (x249-(x250&(x251|x252)));

	if (t51 != 4294934532U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x254 = INT32_MIN;
	uint8_t x255 = UINT8_MAX;
	uint16_t x256 = 14U;
	volatile int32_t t52 = 550;

	t52 = (x253-(x254&(x255|x256)));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x257 = 5U;
	volatile uint32_t x259 = 0U;
	int32_t x260 = -1;
	uint32_t t53 = 2486U;

	t53 = (x257-(x258&(x259|x260)));

	if (t53 != 1361050U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x261 = INT8_MAX;
	uint16_t x262 = UINT16_MAX;
	volatile int8_t x263 = INT8_MIN;
	uint32_t x264 = UINT32_MAX;
	volatile uint32_t t54 = 4685808U;

	t54 = (x261-(x262&(x263|x264)));

	if (t54 != 4294901888U) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x265 = INT8_MIN;
	int64_t x266 = -1LL;
	static int32_t x267 = INT32_MIN;
	static volatile uint16_t x268 = 1226U;
	int64_t t55 = -369333887477LL;

	t55 = (x265-(x266&(x267|x268)));

	if (t55 != 2147482294LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x270 = UINT64_MAX;
	uint8_t x271 = UINT8_MAX;
	static uint64_t t56 = 32LLU;

	t56 = (x269-(x270&(x271|x272)));

	if (t56 != 18446744071562068224LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x273 = 17109U;
	int8_t x274 = INT8_MAX;
	uint8_t x275 = UINT8_MAX;
	static uint64_t x276 = UINT64_MAX;
	static volatile uint64_t t57 = 2290LLU;

	t57 = (x273-(x274&(x275|x276)));

	if (t57 != 16982LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x277 = 1U;
	uint8_t x278 = 31U;
	int8_t x280 = INT8_MIN;
	int32_t t58 = -388277171;

	t58 = (x277-(x278&(x279|x280)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x282 = -1;
	static volatile uint64_t x284 = 204368586LLU;
	static uint64_t t59 = 8LLU;

	t59 = (x281-(x282&(x283|x284)));

	if (t59 != 25604653046LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x289 = 17747924402258853LLU;
	int64_t x290 = -1LL;
	int8_t x291 = -26;
	uint64_t t60 = 14LLU;

	t60 = (x289-(x290&(x291|x292)));

	if (t60 != 17747924402258854LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x293 = -5;
	uint8_t x294 = 3U;
	int64_t x296 = INT64_MAX;
	static volatile int64_t t61 = -7309227624996LL;

	t61 = (x293-(x294&(x295|x296)));

	if (t61 != -8LL) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int16_t x301 = -1;
	volatile int8_t x302 = -1;
	volatile int64_t x303 = 577LL;

	t62 = (x301-(x302&(x303|x304)));

	if (t62 != -578LL) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int64_t x305 = INT64_MAX;
	uint64_t x306 = UINT64_MAX;
	int16_t x307 = INT16_MAX;
	uint64_t x308 = 1110430808987030190LLU;
	static uint64_t t63 = 207LLU;

	t63 = (x305-(x306&(x307|x308)));

	if (t63 != 8112941227867734016LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x309 = 8461095;
	int16_t x310 = INT16_MIN;
	int64_t x311 = INT64_MIN;
	uint64_t x312 = 36266268982185191LLU;
	uint64_t t64 = 215308066471085LLU;

	t64 = (x309-(x310&(x311|x312)));

	if (t64 != 9187105767881055015LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x313 = INT8_MAX;
	static int8_t x314 = 24;
	volatile int16_t x315 = INT16_MIN;
	volatile uint64_t x316 = 62087564934259LLU;
	static uint64_t t65 = 113325687581348LLU;

	t65 = (x313-(x314&(x315|x316)));

	if (t65 != 111LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x317 = 0U;
	uint8_t x318 = 3U;
	int8_t x319 = INT8_MIN;
	static volatile uint16_t x320 = 2367U;

	t66 = (x317-(x318&(x319|x320)));

	if (t66 != 4294967293U) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x321 = -2422;
	volatile int64_t x322 = 47683LL;
	uint32_t x323 = UINT32_MAX;
	int8_t x324 = INT8_MAX;
	int64_t t67 = -6289782LL;

	t67 = (x321-(x322&(x323|x324)));

	if (t67 != -50105LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x325 = -1LL;
	uint64_t x326 = 3570LLU;
	int32_t x327 = 7647512;
	uint16_t x328 = 16387U;
	static volatile uint64_t t68 = 65LLU;

	t68 = (x325-(x326&(x327|x328)));

	if (t68 != 18446744073709551341LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x333 = 0;
	int16_t x334 = 1;
	int16_t x335 = -717;
	int32_t t69 = -110;

	t69 = (x333-(x334&(x335|x336)));

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x337 = -1;
	volatile int16_t x338 = 5;
	int32_t x339 = -21;
	uint16_t x340 = 237U;
	int32_t t70 = 66469160;

	t70 = (x337-(x338&(x339|x340)));

	if (t70 != -6) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x341 = INT8_MIN;
	static uint8_t x342 = 3U;
	int64_t x343 = INT64_MIN;
	volatile uint64_t t71 = 137674512911547LLU;

	t71 = (x341-(x342&(x343|x344)));

	if (t71 != 18446744073709551485LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x345 = INT32_MAX;
	int8_t x346 = INT8_MIN;
	static int8_t x347 = INT8_MIN;
	int64_t x348 = INT64_MIN;
	int64_t t72 = -56555329LL;

	t72 = (x345-(x346&(x347|x348)));

	if (t72 != 2147483775LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x350 = INT64_MAX;
	static uint32_t x351 = UINT32_MAX;
	static int64_t t73 = 1LL;

	t73 = (x349-(x350&(x351|x352)));

	if (t73 != -4294967296LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x353 = INT32_MAX;
	static volatile int64_t x354 = INT64_MAX;
	volatile int16_t x355 = INT16_MIN;
	int64_t t74 = -19LL;

	t74 = (x353-(x354&(x355|x356)));

	if (t74 != -9223372034707259393LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x358 = -1;
	int8_t x359 = -2;
	volatile int32_t x360 = INT32_MIN;
	volatile int32_t t75 = -17428;

	t75 = (x357-(x358&(x359|x360)));

	if (t75 != 32769) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x361 = -1;
	uint64_t x362 = 7009189060277146LLU;
	int8_t x363 = INT8_MAX;
	int32_t x364 = INT32_MIN;
	uint64_t t76 = 106LLU;

	t76 = (x361-(x362&(x363|x364)));

	if (t76 != 18439734884650975205LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x365 = -1;
	uint16_t x366 = 2U;

	t77 = (x365-(x366&(x367|x368)));

	if (t77 != -3) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x373 = INT8_MIN;
	static volatile uint32_t x374 = 31U;
	volatile uint32_t t78 = 1747861936U;

	t78 = (x373-(x374&(x375|x376)));

	if (t78 != 4294967168U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x381 = INT16_MAX;
	int8_t x382 = -22;
	uint64_t x383 = 6495502577497LLU;
	int8_t x384 = 0;
	volatile uint64_t t79 = 265374740026356LLU;

	t79 = (x381-(x382&(x383|x384)));

	if (t79 != 18446737578207006903LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x385 = -1;
	volatile int32_t x386 = INT32_MAX;
	int8_t x388 = INT8_MIN;
	int32_t t80 = -34729;

	t80 = (x385-(x386&(x387|x388)));

	if (t80 != -2147483522) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x393 = -1;
	uint64_t x394 = 5486300590LLU;
	volatile uint8_t x395 = UINT8_MAX;
	static uint32_t x396 = UINT32_MAX;
	volatile uint64_t t81 = 80405543LLU;

	t81 = (x393-(x394&(x395|x396)));

	if (t81 != 18446744072518218321LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x397 = 252;
	static int64_t x398 = INT64_MIN;
	int8_t x400 = INT8_MIN;

	t82 = (x397-(x398&(x399|x400)));

	if (t82 != 9223372036854776060LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x401 = INT16_MIN;
	static int64_t x402 = 3063648307786240096LL;
	int64_t x403 = -1LL;
	volatile int64_t x404 = -945976642408LL;
	int64_t t83 = -4743290090494358LL;

	t83 = (x401-(x402&(x403|x404)));

	if (t83 != -3063648307786272864LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x405 = -38389LL;
	uint8_t x406 = 62U;
	volatile uint8_t x407 = 4U;
	int64_t x408 = INT64_MIN;
	volatile int64_t t84 = -39506324023195288LL;

	t84 = (x405-(x406&(x407|x408)));

	if (t84 != -38393LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x414 = INT16_MIN;
	volatile uint8_t x415 = 105U;
	int8_t x416 = -1;
	int32_t t85 = 3486;

	t85 = (x413-(x414&(x415|x416)));

	if (t85 != 32787) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x421 = INT16_MIN;
	static volatile int64_t x422 = INT64_MIN;
	int16_t x423 = -23;
	int64_t t86 = -1255986776LL;

	t86 = (x421-(x422&(x423|x424)));

	if (t86 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x425 = 7U;
	int16_t x426 = -1;
	int32_t x427 = -1;
	int64_t t87 = 687136LL;

	t87 = (x425-(x426&(x427|x428)));

	if (t87 != 8LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x429 = -153;
	int64_t x430 = INT64_MIN;
	int32_t x431 = INT32_MIN;
	uint16_t x432 = 5U;
	volatile int64_t t88 = -24098042132625LL;

	t88 = (x429-(x430&(x431|x432)));

	if (t88 != 9223372036854775655LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x437 = -1;
	static volatile int16_t x438 = -1;
	int16_t x439 = INT16_MAX;
	int8_t x440 = INT8_MIN;
	int32_t t89 = 478;

	t89 = (x437-(x438&(x439|x440)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x443 = -308;
	int32_t x444 = INT32_MIN;
	volatile int32_t t90 = -204;

	t90 = (x441-(x442&(x443|x444)));

	if (t90 != -2147483340) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x451 = INT16_MAX;
	int8_t x452 = INT8_MIN;
	int32_t t91 = -101448465;

	t91 = (x449-(x450&(x451|x452)));

	if (t91 != 32771) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x453 = 25019849868LL;
	int32_t x455 = INT32_MIN;
	int16_t x456 = INT16_MIN;
	volatile int64_t t92 = -4201116622805651897LL;

	t92 = (x453-(x454&(x455|x456)));

	if (t92 != 27167333516LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x457 = -1;
	static int16_t x458 = -56;
	int16_t x459 = INT16_MIN;
	int64_t x460 = 228529783506LL;
	volatile int64_t t93 = 246333539LL;

	t93 = (x457-(x458&(x459|x460)));

	if (t93 != 15679LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x461 = UINT64_MAX;
	volatile int64_t x462 = -10506364921373078LL;
	uint8_t x463 = UINT8_MAX;
	uint64_t x464 = UINT64_MAX;
	uint64_t t94 = 38823LLU;

	t94 = (x461-(x462&(x463|x464)));

	if (t94 != 10506364921373077LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x465 = INT8_MAX;
	volatile uint16_t x466 = 1977U;
	static uint8_t x467 = 23U;
	int16_t x468 = -1;
	volatile int32_t t95 = 6704202;

	t95 = (x465-(x466&(x467|x468)));

	if (t95 != -1850) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x473 = 215U;
	int16_t x474 = INT16_MAX;
	static uint64_t x475 = UINT64_MAX;
	int8_t x476 = -1;
	uint64_t t96 = 32422LLU;

	t96 = (x473-(x474&(x475|x476)));

	if (t96 != 18446744073709519064LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x477 = 13;
	int32_t x478 = -268;
	volatile int32_t x479 = -1;
	int16_t x480 = 68;

	t97 = (x477-(x478&(x479|x480)));

	if (t97 != 281) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x481 = -390280059131230099LL;
	int16_t x482 = INT16_MIN;
	uint16_t x483 = 729U;
	int32_t x484 = INT32_MIN;
	int64_t t98 = -718LL;

	t98 = (x481-(x482&(x483|x484)));

	if (t98 != -390280056983746451LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x485 = 2U;
	int64_t x486 = INT64_MAX;
	uint64_t x487 = 10444475829LLU;
	volatile int16_t x488 = -1;
	static volatile uint64_t t99 = 6883531LLU;

	t99 = (x485-(x486&(x487|x488)));

	if (t99 != 9223372036854775811LLU) { NG(); } else { ; }
	
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

