#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x9 = 59236LLU;
int8_t x12 = INT8_MIN;
uint64_t x15 = UINT64_MAX;
volatile uint32_t x23 = 248U;
uint32_t x28 = UINT32_MAX;
uint32_t x45 = 127524U;
volatile int64_t t11 = 103674540LL;
volatile int16_t x59 = 906;
int16_t x61 = INT16_MIN;
volatile int8_t x72 = -1;
int64_t x80 = INT64_MAX;
uint64_t t21 = 168831120681282228LLU;
uint8_t x97 = UINT8_MAX;
uint32_t x104 = 641558U;
int64_t x107 = INT64_MIN;
volatile uint64_t t26 = 10291242212LLU;
int64_t x117 = 114855778LL;
int32_t x133 = -1;
int16_t x135 = 1;
uint64_t x145 = UINT64_MAX;
volatile int64_t x148 = -964781854696384LL;
uint64_t t34 = 173813LLU;
volatile uint64_t t35 = 519096076762688591LLU;
volatile int64_t x164 = 18244214939LL;
int64_t t38 = 1655540556298321148LL;
static int8_t x166 = INT8_MAX;
uint32_t x167 = 316307U;
int64_t x175 = -1LL;
int64_t x184 = INT64_MIN;
volatile int8_t x190 = -1;
int64_t x191 = INT64_MAX;
uint64_t x193 = 590985LLU;
int16_t x194 = -2;
int32_t x199 = INT32_MAX;
int32_t x218 = -1;
uint64_t t51 = 26921530205LLU;
static uint64_t x225 = 62605424LLU;
int16_t x227 = INT16_MIN;
int8_t x233 = 6;
int32_t x235 = 80611773;
static uint64_t t54 = 841541157706769496LLU;
uint8_t x252 = 103U;
int64_t x259 = INT64_MAX;
volatile uint16_t x262 = UINT16_MAX;
volatile uint64_t x263 = 424136282LLU;
static volatile uint64_t t61 = 682358LLU;
int32_t x271 = -1;
int16_t x283 = INT16_MAX;
static int32_t t64 = 221;
int16_t x286 = -22;
uint16_t x287 = 19170U;
volatile int8_t x293 = INT8_MAX;
static int16_t x294 = -37;
static volatile uint16_t x295 = UINT16_MAX;
volatile uint32_t t67 = 10419781U;
int16_t x299 = 1;
int8_t x300 = -1;
int8_t x305 = INT8_MIN;
static uint64_t x306 = 1LLU;
int8_t x308 = INT8_MIN;
int8_t x326 = INT8_MIN;
int64_t x327 = INT64_MAX;
int64_t t74 = -445236967787040LL;
int8_t x334 = -1;
int64_t x338 = -1LL;
uint8_t x341 = 14U;
int16_t x350 = -1;
uint16_t x353 = 0U;
int32_t x355 = -1;
static volatile int64_t t81 = 1695LL;
int8_t x362 = INT8_MIN;
volatile int16_t x364 = 236;
uint8_t x371 = UINT8_MAX;
uint8_t x381 = 41U;
uint32_t x382 = 5128U;
int16_t x401 = INT16_MIN;
static volatile uint64_t t89 = 461622037839377LLU;
volatile int32_t x408 = INT32_MIN;
static int32_t x415 = INT32_MIN;
int16_t x420 = INT16_MAX;
uint16_t x425 = 1U;
int32_t x428 = -1;
uint16_t x431 = 854U;
int16_t x436 = -218;
volatile uint32_t t97 = 3581680U;
static uint32_t t98 = 7535U;


void f0(void) {
	static uint8_t x1 = 12U;
	volatile uint32_t x2 = 8054376U;
	uint16_t x3 = UINT16_MAX;
	uint64_t x4 = 19LLU;
	uint64_t t0 = 602414784117LLU;

	t0 = (x1+(x2-(x3/x4)));

	if (t0 != 8050939LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 1906LLU;
	int64_t x6 = INT64_MIN;
	int16_t x7 = INT16_MIN;
	volatile uint8_t x8 = 10U;
	static uint64_t t1 = 126710948959LLU;

	t1 = (x5+(x6-(x7/x8)));

	if (t1 != 9223372036854780990LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x10 = INT32_MIN;
	static uint32_t x11 = 15397105U;
	volatile uint64_t t2 = 110387811526380315LLU;

	t2 = (x9+(x10-(x11/x12)));

	if (t2 != 2147542884LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	volatile uint64_t x14 = UINT64_MAX;
	uint64_t x16 = 664LLU;
	static uint64_t t3 = 10310LLU;

	t3 = (x13+(x14-(x15/x16)));

	if (t3 != 9195590795779912025LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	int16_t x18 = INT16_MIN;
	static int32_t x19 = INT32_MIN;
	int64_t x20 = 1LL;
	int64_t t4 = -22102LL;

	t4 = (x17+(x18-(x19/x20)));

	if (t4 != 2147450879LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -1;
	uint64_t x22 = 5783LLU;
	volatile int16_t x24 = 30;
	volatile uint64_t t5 = 241212188852744LLU;

	t5 = (x21+(x22-(x23/x24)));

	if (t5 != 5774LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = INT32_MAX;
	volatile int8_t x26 = INT8_MAX;
	int64_t x27 = -1718195588834321LL;
	volatile int64_t t6 = 7446122479778238LL;

	t6 = (x25+(x26-(x27/x28)));

	if (t6 != 2147883822LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MAX;
	static int32_t x30 = INT32_MIN;
	static int32_t x31 = INT32_MIN;
	static int32_t x32 = INT32_MAX;
	volatile int32_t t7 = 2699;

	t7 = (x29+(x30-(x31/x32)));

	if (t7 != -2147483520) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 116408U;
	int8_t x34 = 0;
	int8_t x35 = -1;
	int8_t x36 = -1;
	uint32_t t8 = 27397U;

	t8 = (x33+(x34-(x35/x36)));

	if (t8 != 116407U) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x37 = -265797467163109LL;
	volatile uint8_t x38 = 1U;
	volatile int64_t x39 = -2913911109585638LL;
	volatile int8_t x40 = INT8_MIN;
	int64_t t9 = 4316197LL;

	t9 = (x37+(x38-(x39/x40)));

	if (t9 != -288562397706745LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 2401929U;
	volatile uint32_t x42 = 12U;
	static int32_t x43 = -150530;
	int32_t x44 = INT32_MIN;
	static volatile uint32_t t10 = 23U;

	t10 = (x41+(x42-(x43/x44)));

	if (t10 != 2401941U) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x46 = INT64_MIN;
	static uint16_t x47 = 707U;
	int32_t x48 = -1;

	t11 = (x45+(x46-(x47/x48)));

	if (t11 != -9223372036854647577LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	volatile int16_t x50 = -1;
	uint16_t x51 = 401U;
	static int16_t x52 = INT16_MAX;
	static volatile int32_t t12 = -39277;

	t12 = (x49+(x50-(x51/x52)));

	if (t12 != -32769) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x53 = 0;
	int8_t x54 = -1;
	uint32_t x55 = 4U;
	int32_t x56 = -2;
	volatile uint32_t t13 = UINT32_MAX;

	t13 = (x53+(x54-(x55/x56)));

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 22U;
	volatile int32_t x58 = INT32_MIN;
	volatile int16_t x60 = -1;
	int32_t t14 = 1;

	t14 = (x57+(x58-(x59/x60)));

	if (t14 != -2147482720) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x62 = 7;
	uint8_t x63 = 35U;
	volatile int64_t x64 = -1LL;
	static int64_t t15 = 2426LL;

	t15 = (x61+(x62-(x63/x64)));

	if (t15 != -32726LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = -1;
	int16_t x66 = INT16_MAX;
	uint8_t x67 = UINT8_MAX;
	int8_t x68 = INT8_MIN;
	volatile int32_t t16 = 227;

	t16 = (x65+(x66-(x67/x68)));

	if (t16 != 32767) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 7292617649LLU;
	static int64_t x70 = INT64_MIN;
	uint8_t x71 = 3U;
	uint64_t t17 = 764651978LLU;

	t17 = (x69+(x70-(x71/x72)));

	if (t17 != 9223372044147393460LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 76672LLU;
	static int64_t x74 = INT64_MIN;
	int64_t x75 = -26861236041666LL;
	uint64_t x76 = 20LLU;
	volatile uint64_t t18 = 24663677233909757LLU;

	t18 = (x73+(x74-(x75/x76)));

	if (t18 != 8301036176231176983LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MIN;
	uint16_t x78 = 95U;
	static uint16_t x79 = UINT16_MAX;
	static volatile int64_t t19 = -194586346LL;

	t19 = (x77+(x78-(x79/x80)));

	if (t19 != -2147483553LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x81 = -114;
	int32_t x82 = INT32_MIN;
	int8_t x83 = INT8_MAX;
	int16_t x84 = -1;
	volatile int32_t t20 = -46;

	t20 = (x81+(x82-(x83/x84)));

	if (t20 != -2147483635) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	volatile uint64_t x86 = 28317050484282LLU;
	int8_t x87 = -7;
	int16_t x88 = -1;

	t21 = (x85+(x86-(x87/x88)));

	if (t21 != 28317050484147LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = -1;
	int16_t x90 = -1;
	static int32_t x91 = INT32_MAX;
	uint32_t x92 = UINT32_MAX;
	uint32_t t22 = 11U;

	t22 = (x89+(x90-(x91/x92)));

	if (t22 != 4294967294U) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x98 = 30131LLU;
	static int32_t x99 = -1021;
	static int16_t x100 = 1;
	volatile uint64_t t23 = 2703549908545LLU;

	t23 = (x97+(x98-(x99/x100)));

	if (t23 != 31407LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x101 = INT32_MAX;
	int16_t x102 = 2522;
	uint32_t x103 = 1946385U;
	static uint32_t t24 = 1U;

	t24 = (x101+(x102-(x103/x104)));

	if (t24 != 2147486166U) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x105 = 54987599805692LLU;
	static volatile int16_t x106 = 2;
	static volatile uint32_t x108 = 1167250U;
	static volatile uint64_t t25 = 199165741LLU;

	t25 = (x105+(x106-(x107/x108)));

	if (t25 != 62889396367574LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x109 = -1LL;
	int32_t x110 = INT32_MAX;
	uint64_t x111 = UINT64_MAX;
	volatile int64_t x112 = INT64_MIN;

	t26 = (x109+(x110-(x111/x112)));

	if (t26 != 2147483645LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x113 = INT32_MAX;
	uint8_t x114 = UINT8_MAX;
	uint16_t x115 = 15U;
	uint32_t x116 = 23953U;
	uint32_t t27 = 20502U;

	t27 = (x113+(x114-(x115/x116)));

	if (t27 != 2147483902U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x118 = -1;
	int8_t x119 = -1;
	volatile int64_t x120 = -94474212673205LL;
	int64_t t28 = 290607148002935LL;

	t28 = (x117+(x118-(x119/x120)));

	if (t28 != 114855777LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x121 = INT32_MIN;
	static volatile int64_t x122 = -779712570891LL;
	static int16_t x123 = INT16_MIN;
	volatile int16_t x124 = 17;
	int64_t t29 = -362133591LL;

	t29 = (x121+(x122-(x123/x124)));

	if (t29 != -781860052612LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x129 = INT32_MIN;
	int32_t x130 = -1;
	static uint32_t x131 = 1U;
	uint8_t x132 = 55U;
	uint32_t t30 = 64955402U;

	t30 = (x129+(x130-(x131/x132)));

	if (t30 != 2147483647U) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int8_t x134 = 4;
	uint64_t x136 = UINT64_MAX;
	uint64_t t31 = 13LLU;

	t31 = (x133+(x134-(x135/x136)));

	if (t31 != 3LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x137 = INT8_MIN;
	int64_t x138 = INT64_MIN;
	static volatile int64_t x139 = -1LL;
	static uint64_t x140 = 455874450681877759LLU;
	uint64_t t32 = 57123LLU;

	t32 = (x137+(x138-(x139/x140)));

	if (t32 != 9223372036854775640LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x141 = 37272214703033LLU;
	static int8_t x142 = INT8_MAX;
	uint8_t x143 = 29U;
	uint32_t x144 = UINT32_MAX;
	static uint64_t t33 = 66566489702185403LLU;

	t33 = (x141+(x142-(x143/x144)));

	if (t33 != 37272214703160LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x146 = INT64_MIN;
	uint16_t x147 = 10607U;

	t34 = (x145+(x146-(x147/x148)));

	if (t34 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x149 = 586384U;
	uint8_t x150 = 9U;
	int16_t x151 = INT16_MIN;
	uint64_t x152 = UINT64_MAX;

	t35 = (x149+(x150-(x151/x152)));

	if (t35 != 586393LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x153 = 604927547LLU;
	int32_t x154 = -1984;
	static uint64_t x155 = 37LLU;
	uint16_t x156 = 77U;
	uint64_t t36 = 36314384295496LLU;

	t36 = (x153+(x154-(x155/x156)));

	if (t36 != 604925563LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x157 = 361U;
	uint8_t x158 = 1U;
	static int64_t x159 = -5626595128802520LL;
	volatile int32_t x160 = INT32_MIN;
	int64_t t37 = -946553069736129082LL;

	t37 = (x157+(x158-(x159/x160)));

	if (t37 != -2619725LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x161 = 32506U;
	uint16_t x162 = 373U;
	volatile int64_t x163 = INT64_MIN;

	t38 = (x161+(x162-(x163/x164)));

	if (t38 != 505583381LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x165 = 21U;
	int32_t x168 = INT32_MIN;
	volatile uint32_t t39 = 23853602U;

	t39 = (x165+(x166-(x167/x168)));

	if (t39 != 148U) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x169 = 119U;
	uint8_t x170 = UINT8_MAX;
	volatile int32_t x171 = INT32_MIN;
	static int8_t x172 = INT8_MIN;
	int32_t t40 = -241325422;

	t40 = (x169+(x170-(x171/x172)));

	if (t40 != -16776842) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x173 = 0U;
	volatile int64_t x174 = INT64_MIN;
	volatile int8_t x176 = INT8_MAX;
	int64_t t41 = INT64_MIN;

	t41 = (x173+(x174-(x175/x176)));

	if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x181 = -1;
	int8_t x182 = -1;
	uint64_t x183 = UINT64_MAX;
	static uint64_t t42 = 3978117535LLU;

	t42 = (x181+(x182-(x183/x184)));

	if (t42 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x185 = INT64_MAX;
	int32_t x186 = -1;
	static int16_t x187 = -1730;
	int32_t x188 = INT32_MAX;
	volatile int64_t t43 = -15LL;

	t43 = (x185+(x186-(x187/x188)));

	if (t43 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x189 = INT8_MIN;
	int16_t x192 = INT16_MIN;
	volatile int64_t t44 = -1626LL;

	t44 = (x189+(x190-(x191/x192)));

	if (t44 != 281474976710526LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x195 = INT16_MIN;
	int32_t x196 = INT32_MIN;
	volatile uint64_t t45 = 40180674673670023LLU;

	t45 = (x193+(x194-(x195/x196)));

	if (t45 != 590983LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int32_t x197 = -1;
	int16_t x198 = INT16_MIN;
	int16_t x200 = -1;
	int32_t t46 = 24178;

	t46 = (x197+(x198-(x199/x200)));

	if (t46 != 2147450878) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x201 = INT32_MAX;
	int64_t x202 = -64413977213LL;
	static int64_t x203 = INT64_MIN;
	int32_t x204 = 514;
	volatile int64_t t47 = -18425823845819832LL;

	t47 = (x201+(x202-(x203/x204)));

	if (t47 != 17944241307153857LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x209 = 104U;
	static uint8_t x210 = 2U;
	int8_t x211 = -1;
	volatile uint64_t x212 = UINT64_MAX;
	uint64_t t48 = 22095LLU;

	t48 = (x209+(x210-(x211/x212)));

	if (t48 != 105LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x213 = 8324706218012LL;
	int64_t x214 = -1LL;
	int64_t x215 = -1LL;
	volatile uint64_t x216 = 13466920952109LLU;
	volatile uint64_t t49 = 15015LLU;

	t49 = (x213+(x214-(x215/x216)));

	if (t49 != 8324704848230LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x217 = 3;
	volatile uint32_t x219 = 62706280U;
	volatile int8_t x220 = 54;
	volatile uint32_t t50 = 3102810U;

	t50 = (x217+(x218-(x219/x220)));

	if (t50 != 4293806071U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x221 = 22;
	int32_t x222 = -257581;
	volatile int16_t x223 = 1;
	uint64_t x224 = 1LLU;

	t51 = (x221+(x222-(x223/x224)));

	if (t51 != 18446744073709294056LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x226 = INT32_MIN;
	uint64_t x228 = UINT64_MAX;
	uint64_t t52 = 47123276415819LLU;

	t52 = (x225+(x226-(x227/x228)));

	if (t52 != 18446744071624673392LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x229 = 4525U;
	int16_t x230 = INT16_MAX;
	int16_t x231 = 1431;
	volatile int8_t x232 = -1;
	static volatile int32_t t53 = -14;

	t53 = (x229+(x230-(x231/x232)));

	if (t53 != 38723) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x234 = UINT64_MAX;
	static int64_t x236 = INT64_MIN;

	t54 = (x233+(x234-(x235/x236)));

	if (t54 != 5LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x237 = INT8_MIN;
	static int8_t x238 = INT8_MAX;
	int64_t x239 = -1LL;
	volatile uint32_t x240 = UINT32_MAX;
	volatile int64_t t55 = -2882363LL;

	t55 = (x237+(x238-(x239/x240)));

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x241 = 15482U;
	volatile int8_t x242 = 15;
	uint16_t x243 = UINT16_MAX;
	int64_t x244 = INT64_MIN;
	int64_t t56 = 3055663955194157LL;

	t56 = (x241+(x242-(x243/x244)));

	if (t56 != 15497LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x245 = UINT16_MAX;
	static volatile int16_t x246 = INT16_MIN;
	static int16_t x247 = INT16_MIN;
	uint8_t x248 = UINT8_MAX;
	volatile int32_t t57 = 735473;

	t57 = (x245+(x246-(x247/x248)));

	if (t57 != 32895) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x249 = 6;
	uint32_t x250 = 929469866U;
	int8_t x251 = -1;
	uint32_t t58 = 9791U;

	t58 = (x249+(x250-(x251/x252)));

	if (t58 != 929469872U) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x253 = INT16_MAX;
	int16_t x254 = INT16_MIN;
	static int8_t x255 = 3;
	uint16_t x256 = 13U;
	static volatile int32_t t59 = 260236852;

	t59 = (x253+(x254-(x255/x256)));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x257 = INT8_MAX;
	uint32_t x258 = UINT32_MAX;
	int32_t x260 = -232749;
	volatile int64_t t60 = 5841358374LL;

	t60 = (x257+(x258-(x259/x260)));

	if (t60 != 39632272045109LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x261 = -58;
	int64_t x264 = INT64_MIN;

	t61 = (x261+(x262-(x263/x264)));

	if (t61 != 65477LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x265 = -1LL;
	uint16_t x266 = 11586U;
	static int32_t x267 = -7992;
	int8_t x268 = INT8_MAX;
	volatile int64_t t62 = -3483967505000LL;

	t62 = (x265+(x266-(x267/x268)));

	if (t62 != 11647LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x269 = -716;
	int16_t x270 = -1;
	int8_t x272 = INT8_MIN;
	volatile int32_t t63 = 1;

	t63 = (x269+(x270-(x271/x272)));

	if (t63 != -717) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x281 = -443349336;
	int32_t x282 = -1;
	static int8_t x284 = INT8_MAX;

	t64 = (x281+(x282-(x283/x284)));

	if (t64 != -443349595) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x285 = -1;
	int64_t x288 = INT64_MAX;
	volatile int64_t t65 = -22986332851175991LL;

	t65 = (x285+(x286-(x287/x288)));

	if (t65 != -23LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x289 = 2671;
	int16_t x290 = INT16_MIN;
	int32_t x291 = INT32_MIN;
	int64_t x292 = INT64_MIN;
	int64_t t66 = -788LL;

	t66 = (x289+(x290-(x291/x292)));

	if (t66 != -30097LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x296 = 8099U;

	t67 = (x293+(x294-(x295/x296)));

	if (t67 != 82U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x297 = -1;
	int32_t x298 = -1;
	int32_t t68 = -110218;

	t68 = (x297+(x298-(x299/x300)));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x301 = -1LL;
	static uint32_t x302 = 4057392U;
	volatile int16_t x303 = 5;
	int32_t x304 = INT32_MAX;
	int64_t t69 = -392989LL;

	t69 = (x301+(x302-(x303/x304)));

	if (t69 != 4057391LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x307 = INT8_MIN;
	volatile uint64_t t70 = 2758LLU;

	t70 = (x305+(x306-(x307/x308)));

	if (t70 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x309 = INT64_MIN;
	static volatile uint64_t x310 = UINT64_MAX;
	volatile int16_t x311 = -2;
	static uint64_t x312 = 41887LLU;
	uint64_t t71 = 390925999437502184LLU;

	t71 = (x309+(x310-(x311/x312)));

	if (t71 != 9222931643795504206LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x313 = INT16_MIN;
	uint32_t x314 = 1835869U;
	uint8_t x315 = UINT8_MAX;
	int16_t x316 = INT16_MIN;
	uint32_t t72 = 140643097U;

	t72 = (x313+(x314-(x315/x316)));

	if (t72 != 1803101U) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x317 = INT32_MIN;
	static int8_t x318 = 0;
	int16_t x319 = INT16_MAX;
	static uint64_t x320 = 562270941801LLU;
	uint64_t t73 = 10164656841138377LLU;

	t73 = (x317+(x318-(x319/x320)));

	if (t73 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x325 = 6U;
	volatile int32_t x328 = INT32_MIN;

	t74 = (x325+(x326-(x327/x328)));

	if (t74 != 4294967173LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x329 = 852U;
	uint16_t x330 = 62U;
	uint64_t x331 = UINT64_MAX;
	volatile uint16_t x332 = UINT16_MAX;
	volatile uint64_t t75 = 71LLU;

	t75 = (x329+(x330-(x331/x332)));

	if (t75 != 18446462594437809041LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x333 = -241706866262603LL;
	int64_t x335 = INT64_MAX;
	static int32_t x336 = INT32_MAX;
	volatile int64_t t76 = -15409549675638LL;

	t76 = (x333+(x334-(x335/x336)));

	if (t76 != -241711161229902LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x337 = 45;
	int64_t x339 = -31275926LL;
	int64_t x340 = INT64_MIN;
	int64_t t77 = 2147847211584644125LL;

	t77 = (x337+(x338-(x339/x340)));

	if (t77 != 44LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x342 = INT8_MIN;
	int8_t x343 = INT8_MIN;
	int32_t x344 = -1;
	int32_t t78 = -3810423;

	t78 = (x341+(x342-(x343/x344)));

	if (t78 != -242) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x345 = 7867;
	static volatile int8_t x346 = 1;
	int16_t x347 = INT16_MIN;
	static int16_t x348 = INT16_MAX;
	volatile int32_t t79 = -1;

	t79 = (x345+(x346-(x347/x348)));

	if (t79 != 7869) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint32_t x349 = 14846U;
	static int8_t x351 = 12;
	static int32_t x352 = -4494837;
	static volatile uint32_t t80 = 1285642U;

	t80 = (x349+(x350-(x351/x352)));

	if (t80 != 14845U) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x354 = INT16_MAX;
	int64_t x356 = 8687428198135LL;

	t81 = (x353+(x354-(x355/x356)));

	if (t81 != 32767LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x361 = 531U;
	int8_t x363 = INT8_MAX;
	uint32_t t82 = 48968638U;

	t82 = (x361+(x362-(x363/x364)));

	if (t82 != 403U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x365 = INT64_MIN;
	static volatile uint8_t x366 = 4U;
	int8_t x367 = -20;
	static int32_t x368 = INT32_MIN;
	int64_t t83 = 19715LL;

	t83 = (x365+(x366-(x367/x368)));

	if (t83 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x369 = -1LL;
	uint32_t x370 = UINT32_MAX;
	uint16_t x372 = 866U;
	volatile int64_t t84 = -32526627678LL;

	t84 = (x369+(x370-(x371/x372)));

	if (t84 != 4294967294LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x383 = INT64_MIN;
	static int32_t x384 = INT32_MIN;
	int64_t t85 = 8236235669LL;

	t85 = (x381+(x382-(x383/x384)));

	if (t85 != -4294962127LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x385 = UINT64_MAX;
	volatile int8_t x386 = -1;
	int64_t x387 = -502222746314LL;
	uint16_t x388 = 44U;
	static volatile uint64_t t86 = 1645646148810510535LLU;

	t86 = (x385+(x386-(x387/x388)));

	if (t86 != 11414153323LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x393 = UINT64_MAX;
	static int32_t x394 = -1;
	volatile uint16_t x395 = UINT16_MAX;
	static volatile uint32_t x396 = UINT32_MAX;
	static volatile uint64_t t87 = 4390616705212LLU;

	t87 = (x393+(x394-(x395/x396)));

	if (t87 != 4294967294LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x397 = -118382;
	int8_t x398 = -14;
	int8_t x399 = INT8_MAX;
	static uint64_t x400 = UINT64_MAX;
	static uint64_t t88 = 123929319443LLU;

	t88 = (x397+(x398-(x399/x400)));

	if (t88 != 18446744073709433220LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x402 = 29U;
	static int8_t x403 = INT8_MIN;
	uint64_t x404 = 29939252917466275LLU;

	t89 = (x401+(x402-(x403/x404)));

	if (t89 != 18446744073709518261LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x405 = -1;
	int8_t x406 = 0;
	int64_t x407 = -1LL;
	static volatile int64_t t90 = 1034305917778749140LL;

	t90 = (x405+(x406-(x407/x408)));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x409 = UINT8_MAX;
	int64_t x410 = -1LL;
	int64_t x411 = 150LL;
	uint16_t x412 = 5137U;
	volatile int64_t t91 = -2604969615960053LL;

	t91 = (x409+(x410-(x411/x412)));

	if (t91 != 254LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x413 = 17502LLU;
	volatile int16_t x414 = -1;
	uint8_t x416 = 114U;
	volatile uint64_t t92 = 31631724413356LLU;

	t92 = (x413+(x414-(x415/x416)));

	if (t92 != 18855076LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x417 = -1049205;
	uint32_t x418 = 27612112U;
	static uint64_t x419 = 315460LLU;
	uint64_t t93 = 1LLU;

	t93 = (x417+(x418-(x419/x420)));

	if (t93 != 26562898LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x421 = 342U;
	static int32_t x422 = -1;
	int16_t x423 = -7;
	int16_t x424 = INT16_MIN;
	uint32_t t94 = 5U;

	t94 = (x421+(x422-(x423/x424)));

	if (t94 != 341U) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x426 = UINT16_MAX;
	uint32_t x427 = UINT32_MAX;
	volatile uint32_t t95 = 886U;

	t95 = (x425+(x426-(x427/x428)));

	if (t95 != 65535U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x429 = INT32_MIN;
	int8_t x430 = 24;
	int16_t x432 = INT16_MIN;
	int32_t t96 = -18;

	t96 = (x429+(x430-(x431/x432)));

	if (t96 != -2147483624) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x433 = -1;
	int8_t x434 = INT8_MAX;
	volatile uint32_t x435 = 3U;

	t97 = (x433+(x434-(x435/x436)));

	if (t97 != 126U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x437 = -1;
	volatile uint32_t x438 = 579600041U;
	static int16_t x439 = -1;
	uint32_t x440 = 834246066U;

	t98 = (x437+(x438-(x439/x440)));

	if (t98 != 579600035U) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x445 = 1268;
	static int8_t x446 = -14;
	int16_t x447 = INT16_MIN;
	int32_t x448 = -396871962;
	int32_t t99 = -16678513;

	t99 = (x445+(x446-(x447/x448)));

	if (t99 != 1254) { NG(); } else { ; }
	
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

