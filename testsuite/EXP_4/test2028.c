#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -22686;
volatile uint64_t x10 = UINT64_MAX;
volatile uint16_t x13 = UINT16_MAX;
static int64_t x14 = INT64_MIN;
volatile int64_t x15 = -754089498LL;
int8_t x21 = -1;
volatile int64_t t6 = -6024910086LL;
uint8_t x35 = 114U;
volatile int8_t x36 = INT8_MAX;
int64_t t8 = -6345454LL;
static int32_t x37 = INT32_MAX;
uint8_t x42 = 3U;
static uint32_t t10 = 157951554U;
static uint16_t x52 = UINT16_MAX;
int64_t x53 = 4LL;
uint32_t x54 = 5041210U;
int64_t t13 = 115380053505939308LL;
int8_t x57 = 26;
int64_t x58 = INT64_MIN;
int32_t x62 = -1;
volatile int32_t x73 = INT32_MIN;
int32_t x75 = INT32_MIN;
volatile int64_t x76 = INT64_MIN;
volatile int64_t t18 = 737232525219286957LL;
int32_t x77 = 1118;
int64_t t19 = 628214245703LL;
volatile int64_t x81 = INT64_MIN;
static int8_t x89 = INT8_MIN;
uint64_t x93 = 129299821851LLU;
static volatile int64_t x95 = -127547LL;
uint8_t x97 = UINT8_MAX;
static volatile uint32_t x98 = 357668U;
int8_t x99 = INT8_MAX;
int8_t x106 = INT8_MAX;
int16_t x107 = INT16_MIN;
int64_t x110 = INT64_MAX;
int64_t x112 = INT64_MIN;
static uint32_t x115 = 177U;
int64_t x116 = INT64_MIN;
int64_t x118 = -1LL;
static uint64_t t29 = 366125LLU;
int16_t x121 = INT16_MAX;
volatile int64_t t30 = 6838591766647160LL;
int64_t x127 = -1LL;
int16_t x129 = 522;
int64_t x132 = -1LL;
volatile int64_t t32 = 118151873LL;
int64_t x137 = 21945LL;
int8_t x139 = INT8_MIN;
int32_t x149 = -599596728;
int16_t x155 = -1;
uint32_t t38 = 72433U;
int64_t t39 = 240988LL;
int8_t x161 = -1;
static volatile int16_t x171 = INT16_MAX;
volatile int64_t t43 = 31880496768LL;
static volatile uint8_t x183 = 6U;
int64_t x184 = INT64_MIN;
int16_t x186 = INT16_MIN;
uint64_t t46 = 935870922238606LLU;
volatile uint32_t t48 = 37853U;
int64_t x201 = INT64_MIN;
volatile int16_t x205 = -1;
int8_t x209 = INT8_MIN;
volatile int32_t x214 = 20594;
static int8_t x224 = INT8_MIN;
volatile int32_t t55 = 2076798;
volatile uint8_t x227 = UINT8_MAX;
uint64_t t56 = 12798LLU;
static volatile int8_t x230 = -26;
uint64_t t57 = 507670915179LLU;
int32_t x238 = 1443550;
static uint64_t t59 = 7300175840264LLU;
int64_t x242 = -1LL;
int8_t x246 = INT8_MIN;
uint32_t x251 = 2441974U;
static volatile int64_t x252 = 111LL;
volatile int64_t x263 = -3025577LL;
static volatile int32_t t66 = 258897023;
uint8_t x269 = UINT8_MAX;
int32_t x271 = INT32_MAX;
static uint64_t x272 = UINT64_MAX;
uint64_t t67 = 58890LLU;
uint16_t x274 = 52U;
int64_t t69 = -5586515205LL;
int8_t x286 = INT8_MIN;
static volatile int32_t x289 = -76388;
volatile uint8_t x290 = 31U;
int16_t x291 = 1151;
static int8_t x294 = INT8_MIN;
volatile int32_t x297 = -51;
static int16_t x301 = INT16_MAX;
uint32_t x311 = UINT32_MAX;
int8_t x317 = -1;
int16_t x318 = -145;
uint8_t x322 = 0U;
int32_t x330 = 1069384;
int8_t x335 = INT8_MAX;
uint64_t t83 = 20126216988621LLU;
static uint8_t x338 = UINT8_MAX;
volatile uint64_t x342 = 754389952645876LLU;
int64_t x348 = 29604LL;
volatile int64_t t86 = -1LL;
int64_t x353 = -1LL;
int8_t x358 = -1;
uint8_t x371 = 22U;
uint64_t t93 = 203653505LLU;
volatile int64_t x389 = INT64_MIN;
volatile uint8_t x392 = UINT8_MAX;


void f0(void) {
	uint16_t x1 = 31712U;
	uint8_t x2 = 2U;
	int32_t x3 = INT32_MIN;
	uint8_t x4 = 28U;

	t0 = (x1^(x2^(x3|x4)));

	if (t0 != -2147451906) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	uint32_t x6 = 49U;
	volatile int32_t x7 = -1050256355;
	static int16_t x8 = INT16_MIN;
	uint32_t t1 = 602U;

	t1 = (x5^(x6^(x7|x8)));

	if (t1 != 9171U) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 0U;
	uint8_t x11 = 49U;
	volatile int16_t x12 = INT16_MIN;
	uint64_t t2 = 10778830828LLU;

	t2 = (x9^(x10^(x11|x12)));

	if (t2 != 32718LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x16 = INT8_MAX;
	int64_t t3 = 2374557285191LL;

	t3 = (x13^(x14^(x15|x16)));

	if (t3 != 9223372036100685312LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	int16_t x18 = -610;
	static int32_t x19 = INT32_MIN;
	int16_t x20 = INT16_MIN;
	int32_t t4 = 819751805;

	t4 = (x17^(x18^(x19|x20)));

	if (t4 != -32159) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x22 = INT8_MIN;
	uint8_t x23 = 3U;
	static int32_t x24 = INT32_MAX;
	volatile int32_t t5 = 93889;

	t5 = (x21^(x22^(x23|x24)));

	if (t5 != 2147483520) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MAX;
	volatile int64_t x26 = INT64_MIN;
	static int16_t x27 = 1430;
	int16_t x28 = -1;

	t6 = (x25^(x26^(x27|x28)));

	if (t6 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -1;
	int8_t x30 = 1;
	int64_t x31 = -1LL;
	int16_t x32 = INT16_MIN;
	int64_t t7 = 729LL;

	t7 = (x29^(x30^(x31|x32)));

	if (t7 != 1LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = INT64_MIN;
	static int64_t x34 = INT64_MIN;

	t8 = (x33^(x34^(x35|x36)));

	if (t8 != 127LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x38 = INT16_MAX;
	static int16_t x39 = -970;
	int16_t x40 = -2450;
	int32_t t9 = 363215905;

	t9 = (x37^(x38^(x39|x40)));

	if (t9 != -2147451266) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x41 = INT32_MIN;
	uint32_t x43 = UINT32_MAX;
	static int32_t x44 = -1;

	t10 = (x41^(x42^(x43|x44)));

	if (t10 != 2147483644U) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = 352468317;
	static int8_t x46 = INT8_MAX;
	volatile int16_t x47 = -1189;
	int32_t x48 = INT32_MAX;
	volatile int32_t t11 = 1627488;

	t11 = (x45^(x46^(x47|x48)));

	if (t11 != -352468259) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x49 = 7U;
	uint64_t x50 = 184704LLU;
	volatile uint32_t x51 = 63U;
	uint64_t t12 = 18881LLU;

	t12 = (x49^(x50^(x51|x52)));

	if (t12 != 142968LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x55 = 628894U;
	volatile int16_t x56 = -1;

	t13 = (x53^(x54^(x55|x56)));

	if (t13 != 4289926081LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x59 = INT8_MIN;
	int64_t x60 = -1LL;
	static int64_t t14 = 1LL;

	t14 = (x57^(x58^(x59|x60)));

	if (t14 != 9223372036854775781LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -21610LL;
	int16_t x63 = 15;
	int64_t x64 = INT64_MAX;
	static volatile int64_t t15 = -1359153619319LL;

	t15 = (x61^(x62^(x63|x64)));

	if (t15 != 9223372036854754198LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -74;
	uint8_t x66 = UINT8_MAX;
	volatile int64_t x67 = -1LL;
	volatile int8_t x68 = -3;
	volatile int64_t t16 = 242374029785942LL;

	t16 = (x65^(x66^(x67|x68)));

	if (t16 != 182LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x69 = INT8_MAX;
	volatile int32_t x70 = -1;
	uint32_t x71 = UINT32_MAX;
	int32_t x72 = -5909540;
	uint32_t t17 = 281U;

	t17 = (x69^(x70^(x71|x72)));

	if (t17 != 127U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x74 = -1LL;

	t18 = (x73^(x74^(x75|x76)));

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x78 = -1;
	int16_t x79 = INT16_MIN;
	static int64_t x80 = INT64_MIN;

	t19 = (x77^(x78^(x79|x80)));

	if (t19 != 31649LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x82 = 10928U;
	int32_t x83 = 2423311;
	volatile int32_t x84 = INT32_MIN;
	int64_t t20 = -1393413LL;

	t20 = (x81^(x82^(x83|x84)));

	if (t20 != -9223372034704879425LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MIN;
	int64_t x86 = INT64_MAX;
	int8_t x87 = -1;
	uint8_t x88 = UINT8_MAX;
	volatile int64_t t21 = -30LL;

	t21 = (x85^(x86^(x87|x88)));

	if (t21 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x90 = 232256;
	int16_t x91 = INT16_MAX;
	volatile int64_t x92 = INT64_MIN;
	int64_t t22 = -55537860659520009LL;

	t22 = (x89^(x90^(x91|x92)));

	if (t22 != 9223372036854516543LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x94 = INT64_MAX;
	static int8_t x96 = -1;
	volatile uint64_t t23 = 1689108730746526LLU;

	t23 = (x93^(x94^(x95|x96)));

	if (t23 != 9223372166154597659LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x100 = 335536170U;
	volatile uint32_t t24 = 116520U;

	t24 = (x97^(x98^(x99|x100)));

	if (t24 != 335189412U) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = 532734078901053202LL;
	uint64_t x102 = 32175666419542087LLU;
	uint64_t x103 = UINT64_MAX;
	volatile uint16_t x104 = UINT16_MAX;
	uint64_t t25 = 33548029334701LLU;

	t25 = (x101^(x102^(x103|x104)));

	if (t25 != 17935891955947057322LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x105 = INT8_MAX;
	int16_t x108 = -1600;
	volatile int32_t t26 = -61979754;

	t26 = (x105^(x106^(x107|x108)));

	if (t26 != -1600) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MIN;
	static int32_t x111 = INT32_MIN;
	int64_t t27 = 753307125948LL;

	t27 = (x109^(x110^(x111|x112)));

	if (t27 != 9223372034707324927LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x113 = -49776715LL;
	int16_t x114 = -2;
	int64_t t28 = -149LL;

	t28 = (x113^(x114^(x115|x116)));

	if (t28 != -9223372036804998918LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = 450U;
	uint64_t x119 = 329034191914457330LLU;
	static int8_t x120 = INT8_MIN;

	t29 = (x117^(x118^(x119|x120)));

	if (t29 != 463LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x122 = -1;
	int64_t x123 = -5912225LL;
	volatile int64_t x124 = INT64_MIN;

	t30 = (x121^(x122^(x123|x124)));

	if (t30 != 5917023LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x125 = 1U;
	volatile int64_t x126 = INT64_MAX;
	uint8_t x128 = UINT8_MAX;
	volatile int64_t t31 = -80307169837LL;

	t31 = (x125^(x126^(x127|x128)));

	if (t31 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x130 = INT64_MIN;
	int32_t x131 = 22;

	t32 = (x129^(x130^(x131|x132)));

	if (t32 != 9223372036854775285LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x133 = 244093LLU;
	int8_t x134 = 19;
	static uint32_t x135 = 2868828U;
	uint64_t x136 = 9LLU;
	uint64_t t33 = 4702LLU;

	t33 = (x133^(x134^(x135|x136)));

	if (t33 != 2654003LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x138 = INT8_MAX;
	int64_t x140 = INT64_MIN;
	volatile int64_t t34 = 6622166894LL;

	t34 = (x137^(x138^(x139|x140)));

	if (t34 != -21946LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x141 = 1371;
	int16_t x142 = -246;
	uint16_t x143 = 145U;
	int32_t x144 = -1;
	int32_t t35 = 41641;

	t35 = (x141^(x142^(x143|x144)));

	if (t35 != 1454) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x145 = -1LL;
	static volatile int32_t x146 = -1;
	uint32_t x147 = UINT32_MAX;
	int16_t x148 = -1;
	static int64_t t36 = -951408708556316LL;

	t36 = (x145^(x146^(x147|x148)));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x150 = -1;
	volatile int16_t x151 = INT16_MAX;
	static volatile int32_t x152 = -78388045;
	volatile int32_t t37 = 1;

	t37 = (x149^(x150^(x151|x152)));

	if (t37 != -655433400) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = -11;
	uint8_t x154 = 21U;
	uint32_t x156 = UINT32_MAX;

	t38 = (x153^(x154^(x155|x156)));

	if (t38 != 31U) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = 1U;
	static int64_t x158 = INT64_MIN;
	int64_t x159 = INT64_MAX;
	uint8_t x160 = UINT8_MAX;

	t39 = (x157^(x158^(x159|x160)));

	if (t39 != -2LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x162 = INT64_MIN;
	uint64_t x163 = UINT64_MAX;
	static int32_t x164 = 1;
	static volatile uint64_t t40 = 59943919966299838LLU;

	t40 = (x161^(x162^(x163|x164)));

	if (t40 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x165 = INT64_MIN;
	int64_t x166 = INT64_MAX;
	static int16_t x167 = -1801;
	int32_t x168 = INT32_MIN;
	int64_t t41 = 1686LL;

	t41 = (x165^(x166^(x167|x168)));

	if (t41 != 1800LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = INT16_MIN;
	int8_t x170 = -1;
	uint8_t x172 = 88U;
	static volatile int32_t t42 = 292054;

	t42 = (x169^(x170^(x171|x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = 0;
	uint16_t x174 = 5U;
	static int64_t x175 = -28465121781LL;
	int8_t x176 = -1;

	t43 = (x173^(x174^(x175|x176)));

	if (t43 != -6LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x177 = 4U;
	uint32_t x178 = UINT32_MAX;
	int8_t x179 = 55;
	uint8_t x180 = 6U;
	volatile uint32_t t44 = 7633U;

	t44 = (x177^(x178^(x179|x180)));

	if (t44 != 4294967244U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = 3;
	static volatile int8_t x182 = INT8_MIN;
	volatile int64_t t45 = -92946899094468LL;

	t45 = (x181^(x182^(x183|x184)));

	if (t45 != 9223372036854775685LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = 61880555734LLU;
	int8_t x187 = INT8_MAX;
	int32_t x188 = -1;

	t46 = (x185^(x186^(x187|x188)));

	if (t46 != 61880543017LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MAX;
	uint32_t x190 = 2976U;
	int16_t x191 = -1180;
	volatile int16_t x192 = INT16_MIN;
	int64_t t47 = 0LL;

	t47 = (x189^(x190^(x191|x192)));

	if (t47 != 9223372032559812411LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MIN;
	uint32_t x194 = 9291U;
	volatile int32_t x195 = 1026585;
	uint8_t x196 = 10U;

	t48 = (x193^(x194^(x195|x196)));

	if (t48 != 4293922384U) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = INT32_MIN;
	static int32_t x198 = 0;
	uint32_t x199 = 955906976U;
	int8_t x200 = INT8_MAX;
	volatile uint32_t t49 = 12U;

	t49 = (x197^(x198^(x199|x200)));

	if (t49 != 3103390719U) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x202 = UINT64_MAX;
	int8_t x203 = INT8_MIN;
	int32_t x204 = 8428;
	volatile uint64_t t50 = 3625406759266LLU;

	t50 = (x201^(x202^(x203|x204)));

	if (t50 != 9223372036854775827LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x206 = 10U;
	int64_t x207 = INT64_MIN;
	int8_t x208 = 0;
	volatile int64_t t51 = 9977LL;

	t51 = (x205^(x206^(x207|x208)));

	if (t51 != 9223372036854775797LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x210 = 6LL;
	int8_t x211 = INT8_MAX;
	uint16_t x212 = 208U;
	volatile int64_t t52 = -3938LL;

	t52 = (x209^(x210^(x211|x212)));

	if (t52 != -135LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x213 = UINT32_MAX;
	volatile uint8_t x215 = UINT8_MAX;
	static uint8_t x216 = 3U;
	volatile uint32_t t53 = 3327954U;

	t53 = (x213^(x214^(x215|x216)));

	if (t53 != 4294946674U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MIN;
	static int8_t x218 = -1;
	int32_t x219 = -1;
	int8_t x220 = -11;
	volatile int32_t t54 = -12989;

	t54 = (x217^(x218^(x219|x220)));

	if (t54 != -128) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x221 = INT16_MAX;
	volatile int32_t x222 = 3973847;
	static uint8_t x223 = UINT8_MAX;

	t55 = (x221^(x222^(x223|x224)));

	if (t55 != -3988777) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x225 = UINT64_MAX;
	uint32_t x226 = UINT32_MAX;
	int16_t x228 = 231;

	t56 = (x225^(x226^(x227|x228)));

	if (t56 != 18446744069414584575LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = 273;
	int32_t x231 = INT32_MIN;
	uint64_t x232 = 26LLU;

	t57 = (x229^(x230^(x231|x232)));

	if (t57 != 2147483373LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = 0;
	int8_t x234 = -1;
	int64_t x235 = -128745LL;
	uint32_t x236 = 642U;
	volatile int64_t t58 = 482070362964797570LL;

	t58 = (x233^(x234^(x235|x236)));

	if (t58 != 128104LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = INT8_MAX;
	volatile uint64_t x239 = UINT64_MAX;
	volatile int32_t x240 = INT32_MIN;

	t59 = (x237^(x238^(x239|x240)));

	if (t59 != 18446744073708108126LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x241 = -14;
	volatile uint16_t x243 = 6U;
	int64_t x244 = -11347358037713LL;
	int64_t t60 = 3178909LL;

	t60 = (x241^(x242^(x243|x244)));

	if (t60 != -11347358037726LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = -1;
	static int32_t x247 = INT32_MAX;
	int8_t x248 = 1;
	static volatile int32_t t61 = 615674;

	t61 = (x245^(x246^(x247|x248)));

	if (t61 != 2147483520) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = 1;
	uint16_t x250 = 2U;
	int64_t t62 = -4287833LL;

	t62 = (x249^(x250^(x251|x252)));

	if (t62 != 2441980LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = INT32_MAX;
	uint64_t x254 = UINT64_MAX;
	int16_t x255 = INT16_MIN;
	uint32_t x256 = UINT32_MAX;
	static volatile uint64_t t63 = 315245992LLU;

	t63 = (x253^(x254^(x255|x256)));

	if (t63 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int32_t x257 = -57;
	int32_t x258 = INT32_MAX;
	uint16_t x259 = 239U;
	int64_t x260 = -1LL;
	int64_t t64 = -75314405005031996LL;

	t64 = (x257^(x258^(x259|x260)));

	if (t64 != 2147483591LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x261 = INT8_MIN;
	static int8_t x262 = INT8_MIN;
	volatile int16_t x264 = 22;
	int64_t t65 = -2LL;

	t65 = (x261^(x262^(x263|x264)));

	if (t65 != -3025577LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x265 = 3U;
	int8_t x266 = INT8_MIN;
	static int8_t x267 = -1;
	static volatile uint16_t x268 = UINT16_MAX;

	t66 = (x265^(x266^(x267|x268)));

	if (t66 != 124) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x270 = INT8_MIN;

	t67 = (x269^(x270^(x271|x272)));

	if (t67 != 128LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MIN;
	int8_t x275 = INT8_MIN;
	uint64_t x276 = 34914418305652LLU;
	uint64_t t68 = 3979880639363770LLU;

	t68 = (x273^(x274^(x275|x276)));

	if (t68 != 9223372036854775744LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MAX;
	int64_t x278 = INT64_MIN;
	static int32_t x279 = -6933305;
	int64_t x280 = INT64_MAX;

	t69 = (x277^(x278^(x279|x280)));

	if (t69 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x281 = UINT32_MAX;
	uint8_t x282 = 1U;
	int8_t x283 = INT8_MIN;
	int16_t x284 = -1;
	uint32_t t70 = 175U;

	t70 = (x281^(x282^(x283|x284)));

	if (t70 != 1U) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int64_t x285 = 3952046LL;
	static volatile int64_t x287 = -1LL;
	static int32_t x288 = -1;
	int64_t t71 = -233447998380LL;

	t71 = (x285^(x286^(x287|x288)));

	if (t71 != 3952081LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x292 = 22820664LL;
	static int64_t t72 = 66326806071747386LL;

	t72 = (x289^(x290^(x291|x292)));

	if (t72 != -22879492LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int8_t x293 = INT8_MAX;
	int64_t x295 = -1LL;
	int32_t x296 = INT32_MIN;
	volatile int64_t t73 = -1LL;

	t73 = (x293^(x294^(x295|x296)));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x298 = -1;
	static int32_t x299 = INT32_MIN;
	uint8_t x300 = UINT8_MAX;
	volatile int32_t t74 = -1948;

	t74 = (x297^(x298^(x299|x300)));

	if (t74 != -2147483443) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x302 = INT32_MAX;
	int64_t x303 = INT64_MIN;
	int64_t x304 = INT64_MIN;
	static volatile int64_t t75 = -239410521LL;

	t75 = (x301^(x302^(x303|x304)));

	if (t75 != -9223372034707324928LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x305 = 0;
	volatile int64_t x306 = -47957855143960503LL;
	volatile uint8_t x307 = UINT8_MAX;
	int64_t x308 = -11581297058LL;
	int64_t t76 = 182003LL;

	t76 = (x305^(x306^(x307|x308)));

	if (t76 != 47957849544265398LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x309 = 2111974671U;
	volatile int16_t x310 = 1;
	static int8_t x312 = -1;
	static volatile uint32_t t77 = 50784496U;

	t77 = (x309^(x310^(x311|x312)));

	if (t77 != 2182992625U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = 3;
	static volatile uint8_t x314 = 8U;
	int32_t x315 = INT32_MIN;
	volatile int8_t x316 = -1;
	volatile int32_t t78 = -709102;

	t78 = (x313^(x314^(x315|x316)));

	if (t78 != -12) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x319 = -59482968873775LL;
	int8_t x320 = INT8_MIN;
	volatile int64_t t79 = -72LL;

	t79 = (x317^(x318^(x319|x320)));

	if (t79 != -191LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = -1;
	int32_t x323 = 129495;
	int32_t x324 = 3256;
	int32_t t80 = -3420;

	t80 = (x321^(x322^(x323|x324)));

	if (t80 != -130560) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = INT8_MIN;
	static int64_t x326 = 1959519LL;
	static int16_t x327 = INT16_MIN;
	int16_t x328 = -1;
	int64_t t81 = -810LL;

	t81 = (x325^(x326^(x327|x328)));

	if (t81 != 1959456LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x329 = 33;
	int8_t x331 = INT8_MIN;
	uint32_t x332 = UINT32_MAX;
	volatile uint32_t t82 = 14U;

	t82 = (x329^(x330^(x331|x332)));

	if (t82 != 4293897878U) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x333 = 3029LLU;
	uint32_t x334 = 1643350U;
	int32_t x336 = 1;

	t83 = (x333^(x334^(x335|x336)));

	if (t83 != 1644796LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = -19050676;
	volatile uint32_t x339 = UINT32_MAX;
	static uint32_t x340 = 3U;
	uint32_t t84 = 2058974171U;

	t84 = (x337^(x338^(x339|x340)));

	if (t84 != 19050572U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = -1LL;
	static int64_t x343 = INT64_MAX;
	uint16_t x344 = 21890U;
	volatile uint64_t t85 = 2107816458286093488LLU;

	t85 = (x341^(x342^(x343|x344)));

	if (t85 != 9224126426807421684LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x345 = -78;
	int16_t x346 = 5473;
	volatile int8_t x347 = INT8_MIN;

	t86 = (x345^(x346^(x347|x348)));

	if (t86 != 5495LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MAX;
	static uint8_t x350 = UINT8_MAX;
	volatile uint8_t x351 = 3U;
	static int16_t x352 = INT16_MIN;
	int32_t t87 = -5;

	t87 = (x349^(x350^(x351|x352)));

	if (t87 != -32637) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x354 = -1;
	int8_t x355 = -1;
	static int16_t x356 = -3897;
	volatile int64_t t88 = 0LL;

	t88 = (x353^(x354^(x355|x356)));

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x357 = UINT8_MAX;
	volatile int16_t x359 = -221;
	int64_t x360 = INT64_MIN;
	int64_t t89 = 56467LL;

	t89 = (x357^(x358^(x359|x360)));

	if (t89 != 35LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = 32206885141327LL;
	uint64_t x362 = UINT64_MAX;
	int32_t x363 = INT32_MIN;
	int16_t x364 = INT16_MAX;
	uint64_t t90 = 27LLU;

	t90 = (x361^(x362^(x363|x364)));

	if (t90 != 32206886878031LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x365 = UINT16_MAX;
	volatile int8_t x366 = -1;
	uint8_t x367 = 4U;
	static int32_t x368 = -1;
	volatile int32_t t91 = -45906953;

	t91 = (x365^(x366^(x367|x368)));

	if (t91 != 65535) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x369 = UINT16_MAX;
	int8_t x370 = INT8_MAX;
	int16_t x372 = -5;
	static int32_t t92 = -27553;

	t92 = (x369^(x370^(x371|x372)));

	if (t92 != -65409) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x373 = 566563LLU;
	static volatile int64_t x374 = 0LL;
	int32_t x375 = -1;
	int32_t x376 = 10;

	t93 = (x373^(x374^(x375|x376)));

	if (t93 != 18446744073708985052LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = 1;
	int16_t x378 = INT16_MAX;
	int64_t x379 = INT64_MAX;
	static int32_t x380 = INT32_MIN;
	int64_t t94 = 170LL;

	t94 = (x377^(x378^(x379|x380)));

	if (t94 != -32767LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = -2286511058493633347LL;
	uint64_t x382 = UINT64_MAX;
	uint16_t x383 = 584U;
	volatile int64_t x384 = INT64_MIN;
	static uint64_t t95 = 3823501343883245LLU;

	t95 = (x381^(x382^(x383|x384)));

	if (t95 != 11509883095348408586LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x385 = UINT16_MAX;
	static int8_t x386 = -39;
	int32_t x387 = -1;
	static int32_t x388 = INT32_MIN;
	static volatile int32_t t96 = 31357418;

	t96 = (x385^(x386^(x387|x388)));

	if (t96 != 65497) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x390 = INT64_MAX;
	int64_t x391 = INT64_MIN;
	static int64_t t97 = 135208269614892LL;

	t97 = (x389^(x390^(x391|x392)));

	if (t97 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint64_t x393 = UINT64_MAX;
	static volatile uint32_t x394 = UINT32_MAX;
	int32_t x395 = INT32_MAX;
	static int64_t x396 = INT64_MIN;
	static volatile uint64_t t98 = 344217831LLU;

	t98 = (x393^(x394^(x395|x396)));

	if (t98 != 9223372034707292159LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = INT16_MAX;
	volatile int64_t x398 = -1LL;
	volatile int8_t x399 = INT8_MIN;
	static int32_t x400 = INT32_MIN;
	int64_t t99 = 110785108LL;

	t99 = (x397^(x398^(x399|x400)));

	if (t99 != 32640LL) { NG(); } else { ; }
	
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

