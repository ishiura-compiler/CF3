#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x6 = -1;
static uint64_t x7 = UINT64_MAX;
volatile uint64_t t3 = 112LLU;
static int32_t x41 = INT32_MIN;
int64_t x42 = -192LL;
int64_t t5 = -14449330702122030LL;
static uint8_t x46 = 1U;
uint64_t x51 = UINT64_MAX;
int8_t x53 = INT8_MIN;
int64_t x58 = INT64_MIN;
volatile int64_t x62 = INT64_MAX;
static uint64_t x72 = 379722714LLU;
volatile int64_t t13 = 2307372781LL;
uint64_t t14 = 10669773698289198LLU;
volatile int64_t t16 = 32792649LL;
volatile int64_t x106 = INT64_MAX;
static volatile int64_t t19 = -1063161758458715457LL;
uint32_t x111 = 381506179U;
int8_t x112 = -1;
volatile uint32_t t20 = 374023548U;
uint64_t t21 = 0LLU;
static int32_t x124 = INT32_MIN;
uint32_t x125 = 17U;
static uint32_t t23 = 316298U;
volatile uint64_t x133 = 75072765452LLU;
uint64_t x134 = 21403620196882615LLU;
static uint16_t x138 = UINT16_MAX;
uint64_t x144 = 6782LLU;
uint64_t x152 = UINT64_MAX;
int8_t x153 = 37;
uint8_t x157 = 93U;
uint64_t x159 = 822504556346232988LLU;
volatile uint64_t t30 = 60004414530235635LLU;
static int16_t x167 = -1;
int8_t x168 = INT8_MAX;
static volatile int64_t t32 = 4157562896482242LL;
uint16_t x171 = 222U;
int32_t t33 = -1014;
int64_t x177 = -1LL;
int64_t t34 = 482729867LL;
static int8_t x184 = INT8_MIN;
static volatile int64_t t35 = -500718241443LL;
static int16_t x187 = INT16_MIN;
int8_t x191 = INT8_MIN;
int8_t x192 = 1;
volatile int64_t t38 = 51LL;
volatile int64_t x221 = INT64_MAX;
int16_t x223 = 0;
int64_t x224 = INT64_MIN;
volatile int64_t x227 = -1LL;
int32_t x228 = INT32_MAX;
volatile uint64_t t44 = 315LLU;
int64_t x241 = INT64_MIN;
volatile uint64_t x249 = 5006296LLU;
int8_t x251 = INT8_MIN;
static int64_t x253 = 461647382LL;
volatile uint64_t x254 = 748LLU;
int8_t x256 = INT8_MIN;
int32_t x257 = -1;
uint32_t x259 = 254241683U;
int16_t x260 = -10879;
volatile int8_t x262 = -1;
uint64_t t50 = 1662982LLU;
uint64_t x267 = UINT64_MAX;
volatile uint64_t t51 = 112864986099LLU;
volatile uint64_t x270 = 3555788511695421LLU;
int16_t x276 = INT16_MIN;
int64_t x280 = -1LL;
volatile int64_t t54 = -4868916864LL;
static uint16_t x281 = 4652U;
int16_t x287 = -1;
volatile int8_t x302 = 5;
int8_t x306 = 56;
static uint8_t x311 = 2U;
volatile int64_t t61 = 95175841725835LL;
int16_t x314 = INT16_MIN;
static volatile int64_t t64 = 1830167LL;
static volatile int32_t x335 = INT32_MIN;
int64_t x336 = -96LL;
int16_t x347 = INT16_MIN;
int64_t x363 = 3083564LL;
volatile uint32_t x365 = UINT32_MAX;
volatile int32_t x367 = -1;
int8_t x369 = INT8_MAX;
volatile int64_t x370 = INT64_MAX;
uint8_t x399 = UINT8_MAX;
int64_t t76 = 100310510060548541LL;
uint64_t x414 = UINT64_MAX;
static int64_t x419 = 124363LL;
int64_t x435 = 793629LL;
int16_t x437 = -865;
uint32_t x443 = 188U;
static uint64_t t84 = 1148879843LLU;
int16_t x453 = -53;
static volatile int64_t x454 = -1LL;
int64_t x464 = -1LL;
static uint64_t t88 = 48968694407LLU;
uint64_t x465 = 100066679276442337LLU;
int16_t x479 = 4;
int32_t t92 = 881947288;
volatile uint16_t x481 = 5299U;
uint8_t x482 = 17U;
uint16_t x484 = UINT16_MAX;
volatile uint64_t x485 = UINT64_MAX;
volatile int32_t x487 = 0;
uint8_t x494 = 7U;
static int64_t x496 = -164637LL;
uint8_t x503 = 4U;


void f0(void) {
	uint64_t x1 = 487236995242617728LLU;
	int16_t x2 = -659;
	volatile uint8_t x3 = 9U;
	int16_t x4 = INT16_MIN;
	uint64_t t0 = 4505141431766998354LLU;

	t0 = ((x1&x2)&(x3*x4));

	if (t0 != 487236995242328064LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 105355723438683LLU;
	volatile uint64_t x8 = UINT64_MAX;
	static uint64_t t1 = 32514785LLU;

	t1 = ((x5&x6)&(x7*x8));

	if (t1 != 1LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x13 = 31398U;
	int64_t x14 = -1819LL;
	static int64_t x15 = -1LL;
	static uint32_t x16 = 961809486U;
	int64_t t2 = -379877009LL;

	t2 = ((x13&x14)&(x15*x16));

	if (t2 != 28832LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x21 = -6;
	uint32_t x22 = 153303U;
	uint64_t x23 = UINT64_MAX;
	uint8_t x24 = UINT8_MAX;

	t3 = ((x21&x22)&(x23*x24));

	if (t3 != 153088LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x33 = 1177U;
	static int8_t x34 = -1;
	int16_t x35 = -454;
	int16_t x36 = INT16_MAX;
	int32_t t4 = -2;

	t4 = ((x33&x34)&(x35*x36));

	if (t4 != 128) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x43 = 1U;
	int16_t x44 = INT16_MIN;

	t5 = ((x41&x42)&(x43*x44));

	if (t5 != -2147483648LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x45 = UINT8_MAX;
	int32_t x47 = INT32_MAX;
	int8_t x48 = -1;
	volatile int32_t t6 = 992785475;

	t6 = ((x45&x46)&(x47*x48));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x49 = INT32_MIN;
	uint32_t x50 = 4U;
	int64_t x52 = -1LL;
	uint64_t t7 = 6588181261538111LLU;

	t7 = ((x49&x50)&(x51*x52));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x54 = 3;
	static int16_t x55 = 3091;
	static int64_t x56 = -1LL;
	int64_t t8 = 33532423512LL;

	t8 = ((x53&x54)&(x55*x56));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x57 = INT16_MIN;
	int16_t x59 = INT16_MAX;
	uint8_t x60 = 1U;
	int64_t t9 = -217929994032362LL;

	t9 = ((x57&x58)&(x59*x60));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x61 = -1LL;
	static int16_t x63 = INT16_MIN;
	volatile int16_t x64 = INT16_MAX;
	volatile int64_t t10 = 106440282LL;

	t10 = ((x61&x62)&(x63*x64));

	if (t10 != 9223372035781066752LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x65 = INT32_MIN;
	volatile int64_t x66 = 1008713LL;
	int64_t x67 = -1LL;
	int16_t x68 = 150;
	int64_t t11 = -10LL;

	t11 = ((x65&x66)&(x67*x68));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x69 = 397669LL;
	volatile int16_t x70 = -1;
	static int8_t x71 = -24;
	static volatile uint64_t t12 = 0LLU;

	t12 = ((x69&x70)&(x71*x72));

	if (t12 != 262400LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x73 = INT64_MIN;
	static uint8_t x74 = 30U;
	static int8_t x75 = INT8_MAX;
	int8_t x76 = INT8_MIN;

	t13 = ((x73&x74)&(x75*x76));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x77 = -300736LL;
	uint64_t x78 = 12181423LLU;
	int64_t x79 = -1564492LL;
	int16_t x80 = -1;

	t14 = ((x77&x78)&(x79*x80));

	if (t14 != 1132800LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x85 = UINT32_MAX;
	volatile uint64_t x86 = 84166319436824LLU;
	int16_t x87 = -2632;
	int16_t x88 = -1;
	uint64_t t15 = 13755274989LLU;

	t15 = ((x85&x86)&(x87*x88));

	if (t15 != 8LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x93 = INT8_MIN;
	uint32_t x94 = 0U;
	uint8_t x95 = 45U;
	int64_t x96 = 4205020LL;

	t16 = ((x93&x94)&(x95*x96));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x97 = INT64_MIN;
	uint8_t x98 = 52U;
	volatile int8_t x99 = -1;
	static volatile int16_t x100 = INT16_MIN;
	volatile int64_t t17 = -16749134833LL;

	t17 = ((x97&x98)&(x99*x100));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x101 = -1;
	int8_t x102 = -1;
	volatile int32_t x103 = -1;
	uint64_t x104 = UINT64_MAX;
	volatile uint64_t t18 = 34199LLU;

	t18 = ((x101&x102)&(x103*x104));

	if (t18 != 1LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x105 = -1LL;
	int32_t x107 = 1;
	int16_t x108 = INT16_MIN;

	t19 = ((x105&x106)&(x107*x108));

	if (t19 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x109 = -1;
	uint32_t x110 = 148591819U;

	t20 = ((x109&x110)&(x111*x112));

	if (t20 != 138544201U) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x117 = UINT64_MAX;
	static int8_t x118 = INT8_MIN;
	static uint32_t x119 = 123U;
	int32_t x120 = -1;

	t21 = ((x117&x118)&(x119*x120));

	if (t21 != 4294967168LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x121 = -12;
	uint64_t x122 = UINT64_MAX;
	static volatile uint32_t x123 = 60024853U;
	uint64_t t22 = 278965653859881372LLU;

	t22 = ((x121&x122)&(x123*x124));

	if (t22 != 2147483648LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x126 = 27235U;
	int8_t x127 = -1;
	uint32_t x128 = UINT32_MAX;

	t23 = ((x125&x126)&(x127*x128));

	if (t23 != 1U) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x129 = UINT8_MAX;
	static uint64_t x130 = UINT64_MAX;
	static uint8_t x131 = 5U;
	int16_t x132 = 1;
	uint64_t t24 = 3114LLU;

	t24 = ((x129&x130)&(x131*x132));

	if (t24 != 5LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x135 = INT16_MAX;
	int8_t x136 = -1;
	uint64_t t25 = 65943060454LLU;

	t25 = ((x133&x134)&(x135*x136));

	if (t25 != 69435523072LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x137 = INT8_MAX;
	int16_t x139 = -1;
	int16_t x140 = INT16_MAX;
	int32_t t26 = -1;

	t26 = ((x137&x138)&(x139*x140));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x141 = -1LL;
	int16_t x142 = INT16_MAX;
	uint32_t x143 = 1103U;
	static volatile uint64_t t27 = 49919997LLU;

	t27 = ((x141&x142)&(x143*x144));

	if (t27 != 9442LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x149 = 0U;
	static volatile int8_t x150 = INT8_MIN;
	uint16_t x151 = 106U;
	volatile uint64_t t28 = 112043LLU;

	t28 = ((x149&x150)&(x151*x152));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x154 = 2045943U;
	uint64_t x155 = UINT64_MAX;
	int8_t x156 = INT8_MAX;
	volatile uint64_t t29 = 8031232242684407630LLU;

	t29 = ((x153&x154)&(x155*x156));

	if (t29 != 1LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x158 = INT32_MIN;
	static volatile int8_t x160 = INT8_MIN;

	t30 = ((x157&x158)&(x159*x160));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x161 = INT64_MIN;
	int16_t x162 = 1;
	int64_t x163 = -1LL;
	int16_t x164 = INT16_MIN;
	int64_t t31 = -30784212LL;

	t31 = ((x161&x162)&(x163*x164));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x165 = -1;
	int64_t x166 = -1937141201LL;

	t32 = ((x165&x166)&(x167*x168));

	if (t32 != -1937141247LL) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int8_t x169 = 1;
	int32_t x170 = -433661221;
	uint16_t x172 = 12421U;

	t33 = ((x169&x170)&(x171*x172));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x178 = 39U;
	int16_t x179 = INT16_MAX;
	int8_t x180 = 59;

	t34 = ((x177&x178)&(x179*x180));

	if (t34 != 5LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x181 = INT32_MIN;
	int8_t x182 = 3;
	int64_t x183 = 1766703LL;

	t35 = ((x181&x182)&(x183*x184));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x185 = INT16_MIN;
	uint64_t x186 = 13LLU;
	int16_t x188 = -626;
	uint64_t t36 = 11862657LLU;

	t36 = ((x185&x186)&(x187*x188));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x189 = -1;
	volatile int64_t x190 = INT64_MAX;
	volatile int64_t t37 = -1685493351726697028LL;

	t37 = ((x189&x190)&(x191*x192));

	if (t37 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x197 = 1122U;
	uint32_t x198 = 1137335392U;
	int64_t x199 = INT64_MAX;
	int8_t x200 = -1;

	t38 = ((x197&x198)&(x199*x200));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x205 = INT8_MIN;
	uint8_t x206 = 2U;
	int8_t x207 = 5;
	uint16_t x208 = 657U;
	int32_t t39 = 30;

	t39 = ((x205&x206)&(x207*x208));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x209 = 6681U;
	int64_t x210 = 0LL;
	int16_t x211 = INT16_MAX;
	uint16_t x212 = 790U;
	static volatile int64_t t40 = -188971470546LL;

	t40 = ((x209&x210)&(x211*x212));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x222 = INT32_MIN;
	volatile int64_t t41 = -3554LL;

	t41 = ((x221&x222)&(x223*x224));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x225 = UINT64_MAX;
	static volatile int8_t x226 = -45;
	uint64_t t42 = 3560758068316LLU;

	t42 = ((x225&x226)&(x227*x228));

	if (t42 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x229 = 9U;
	uint32_t x230 = UINT32_MAX;
	int64_t x231 = -1LL;
	static uint8_t x232 = UINT8_MAX;
	static volatile int64_t t43 = -1181LL;

	t43 = ((x229&x230)&(x231*x232));

	if (t43 != 1LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x233 = -1;
	uint64_t x234 = UINT64_MAX;
	int32_t x235 = INT32_MIN;
	int16_t x236 = 1;

	t44 = ((x233&x234)&(x235*x236));

	if (t44 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x237 = 14U;
	uint64_t x238 = UINT64_MAX;
	int8_t x239 = -14;
	volatile int8_t x240 = INT8_MIN;
	uint64_t t45 = 5060645LLU;

	t45 = ((x237&x238)&(x239*x240));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x242 = -1;
	int8_t x243 = 13;
	int16_t x244 = -1;
	int64_t t46 = INT64_MIN;

	t46 = ((x241&x242)&(x243*x244));

	if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint8_t x250 = UINT8_MAX;
	int16_t x252 = 37;
	static volatile uint64_t t47 = 165159519923735561LLU;

	t47 = ((x249&x250)&(x251*x252));

	if (t47 != 128LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x255 = -200576242LL;
	static volatile uint64_t t48 = 46171349LLU;

	t48 = ((x253&x254)&(x255*x256));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x258 = -1LL;
	int64_t t49 = 105331298313525LL;

	t49 = ((x257&x258)&(x259*x260));

	if (t49 != 63669267LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x261 = INT32_MIN;
	uint64_t x263 = UINT64_MAX;
	int64_t x264 = -1LL;

	t50 = ((x261&x262)&(x263*x264));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x265 = -1;
	int8_t x266 = -12;
	uint32_t x268 = 1282230U;

	t51 = ((x265&x266)&(x267*x268));

	if (t51 != 18446744073708269376LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x269 = -1;
	uint64_t x271 = 265751935976240729LLU;
	volatile int32_t x272 = INT32_MIN;
	volatile uint64_t t52 = 8886838516684238LLU;

	t52 = ((x269&x270)&(x271*x272));

	if (t52 != 141632989036544LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x273 = INT64_MIN;
	volatile uint32_t x274 = UINT32_MAX;
	int16_t x275 = INT16_MAX;
	static volatile int64_t t53 = -601LL;

	t53 = ((x273&x274)&(x275*x276));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x277 = INT16_MIN;
	uint8_t x278 = 33U;
	static int16_t x279 = INT16_MAX;

	t54 = ((x277&x278)&(x279*x280));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x282 = INT8_MAX;
	int16_t x283 = -10850;
	int32_t x284 = -1;
	static int32_t t55 = 0;

	t55 = ((x281&x282)&(x283*x284));

	if (t55 != 32) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x285 = INT8_MAX;
	int8_t x286 = INT8_MIN;
	int16_t x288 = -1407;
	int32_t t56 = 7614;

	t56 = ((x285&x286)&(x287*x288));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x289 = INT8_MIN;
	volatile uint8_t x290 = 2U;
	uint8_t x291 = UINT8_MAX;
	static int8_t x292 = INT8_MIN;
	volatile int32_t t57 = -4485;

	t57 = ((x289&x290)&(x291*x292));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x297 = -1LL;
	uint16_t x298 = 22063U;
	uint64_t x299 = UINT64_MAX;
	int8_t x300 = INT8_MIN;
	uint64_t t58 = 6848797260461759950LLU;

	t58 = ((x297&x298)&(x299*x300));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x301 = INT8_MIN;
	int8_t x303 = INT8_MIN;
	int16_t x304 = INT16_MIN;
	int32_t t59 = 108208063;

	t59 = ((x301&x302)&(x303*x304));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x305 = 4439;
	uint64_t x307 = 18LLU;
	static volatile int64_t x308 = INT64_MIN;
	uint64_t t60 = 6191589245062549609LLU;

	t60 = ((x305&x306)&(x307*x308));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x309 = 25LL;
	volatile uint32_t x310 = 5U;
	int64_t x312 = 114027772256LL;

	t61 = ((x309&x310)&(x311*x312));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x313 = 382418414U;
	uint64_t x315 = UINT64_MAX;
	int16_t x316 = 42;
	uint64_t t62 = 49934929565148697LLU;

	t62 = ((x313&x314)&(x315*x316));

	if (t62 != 382402560LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x321 = INT64_MIN;
	int8_t x322 = INT8_MIN;
	int8_t x323 = -1;
	static volatile int32_t x324 = 87;
	volatile int64_t t63 = INT64_MIN;

	t63 = ((x321&x322)&(x323*x324));

	if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x325 = 122587655LL;
	static int16_t x326 = 57;
	uint16_t x327 = 92U;
	static uint16_t x328 = 3U;

	t64 = ((x325&x326)&(x327*x328));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x329 = 200;
	volatile uint16_t x330 = UINT16_MAX;
	int64_t x331 = 5741972514070LL;
	uint16_t x332 = 4U;
	static int64_t t65 = 6LL;

	t65 = ((x329&x330)&(x331*x332));

	if (t65 != 72LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x333 = INT64_MIN;
	volatile uint32_t x334 = UINT32_MAX;
	volatile int64_t t66 = 2658568005816428953LL;

	t66 = ((x333&x334)&(x335*x336));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x337 = INT64_MAX;
	int64_t x338 = INT64_MIN;
	static int64_t x339 = -25144359840918LL;
	int64_t x340 = -1LL;
	static volatile int64_t t67 = -95008413LL;

	t67 = ((x337&x338)&(x339*x340));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x345 = UINT64_MAX;
	static int16_t x346 = -3914;
	volatile uint64_t x348 = UINT64_MAX;
	uint64_t t68 = 112170673825495121LLU;

	t68 = ((x345&x346)&(x347*x348));

	if (t68 != 32768LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x353 = 3U;
	int32_t x354 = -1;
	uint32_t x355 = UINT32_MAX;
	uint32_t x356 = 13U;
	uint32_t t69 = 16305917U;

	t69 = ((x353&x354)&(x355*x356));

	if (t69 != 3U) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x357 = -184550;
	int16_t x358 = INT16_MIN;
	int8_t x359 = INT8_MAX;
	static int64_t x360 = 1318296457858634LL;
	int64_t t70 = 37LL;

	t70 = ((x357&x358)&(x359*x360));

	if (t70 != 167423650147860480LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x361 = 9112208LLU;
	int32_t x362 = 2359972;
	int16_t x364 = INT16_MIN;
	uint64_t t71 = 314LLU;

	t71 = ((x361&x362)&(x363*x364));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x366 = -1;
	uint16_t x368 = 1U;
	uint32_t t72 = UINT32_MAX;

	t72 = ((x365&x366)&(x367*x368));

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x371 = INT16_MAX;
	int16_t x372 = INT16_MIN;
	volatile int64_t t73 = -2LL;

	t73 = ((x369&x370)&(x371*x372));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x389 = INT64_MAX;
	uint8_t x390 = 5U;
	volatile uint16_t x391 = 12U;
	int8_t x392 = 31;
	static volatile int64_t t74 = -16191366865939040LL;

	t74 = ((x389&x390)&(x391*x392));

	if (t74 != 4LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x393 = INT8_MAX;
	volatile int64_t x394 = INT64_MIN;
	int16_t x395 = INT16_MIN;
	volatile int16_t x396 = -5451;
	volatile int64_t t75 = 1378828268260LL;

	t75 = ((x393&x394)&(x395*x396));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x397 = INT32_MIN;
	int16_t x398 = 3;
	volatile int64_t x400 = 3844LL;

	t76 = ((x397&x398)&(x399*x400));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x413 = UINT8_MAX;
	int16_t x415 = INT16_MAX;
	int8_t x416 = -1;
	static volatile uint64_t t77 = 26009LLU;

	t77 = ((x413&x414)&(x415*x416));

	if (t77 != 1LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x417 = 27;
	volatile int32_t x418 = INT32_MAX;
	volatile int32_t x420 = INT32_MIN;
	int64_t t78 = -2268758LL;

	t78 = ((x417&x418)&(x419*x420));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x421 = UINT16_MAX;
	int64_t x422 = INT64_MAX;
	int16_t x423 = INT16_MIN;
	static int16_t x424 = INT16_MAX;
	int64_t t79 = 65499582772LL;

	t79 = ((x421&x422)&(x423*x424));

	if (t79 != 32768LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x425 = INT64_MAX;
	int16_t x426 = -1;
	static int16_t x427 = -1;
	int32_t x428 = -1;
	volatile int64_t t80 = 2455LL;

	t80 = ((x425&x426)&(x427*x428));

	if (t80 != 1LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x433 = UINT32_MAX;
	static volatile int32_t x434 = INT32_MAX;
	uint16_t x436 = UINT16_MAX;
	int64_t t81 = -125334LL;

	t81 = ((x433&x434)&(x435*x436));

	if (t81 != 470868963LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x438 = INT32_MAX;
	int16_t x439 = -8;
	uint32_t x440 = 7024U;
	uint32_t t82 = 6651U;

	t82 = ((x437&x438)&(x439*x440));

	if (t82 != 2147427456U) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x441 = INT64_MIN;
	int64_t x442 = -30327493751115LL;
	static int8_t x444 = 1;
	int64_t t83 = 13267461LL;

	t83 = ((x441&x442)&(x443*x444));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x445 = 16872433101266576LLU;
	volatile int32_t x446 = INT32_MAX;
	static volatile int16_t x447 = -1;
	int8_t x448 = -1;

	t84 = ((x445&x446)&(x447*x448));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x449 = INT16_MAX;
	int32_t x450 = 23535;
	volatile uint64_t x451 = 13LLU;
	static uint64_t x452 = 0LLU;
	uint64_t t85 = 453043788LLU;

	t85 = ((x449&x450)&(x451*x452));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x455 = -1;
	uint8_t x456 = 56U;
	int64_t t86 = -905510636846184742LL;

	t86 = ((x453&x454)&(x455*x456));

	if (t86 != -56LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x457 = INT32_MIN;
	volatile int32_t x458 = INT32_MAX;
	static int8_t x459 = INT8_MAX;
	int16_t x460 = 1;
	static volatile int32_t t87 = -2;

	t87 = ((x457&x458)&(x459*x460));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x461 = INT8_MIN;
	uint64_t x462 = 2LLU;
	static uint64_t x463 = UINT64_MAX;

	t88 = ((x461&x462)&(x463*x464));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x466 = UINT16_MAX;
	static int16_t x467 = INT16_MIN;
	static int16_t x468 = -1745;
	volatile uint64_t t89 = 237287470LLU;

	t89 = ((x465&x466)&(x467*x468));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x469 = UINT32_MAX;
	static int32_t x470 = -1;
	static uint16_t x471 = 53U;
	static int64_t x472 = -1LL;
	int64_t t90 = -26520LL;

	t90 = ((x469&x470)&(x471*x472));

	if (t90 != 4294967243LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x473 = 1289;
	static uint16_t x474 = 85U;
	static uint64_t x475 = 1772554LLU;
	static volatile int8_t x476 = -1;
	uint64_t t91 = 667160384581585048LLU;

	t91 = ((x473&x474)&(x475*x476));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x477 = 1;
	volatile int16_t x478 = INT16_MIN;
	int16_t x480 = 54;

	t92 = ((x477&x478)&(x479*x480));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x483 = UINT32_MAX;
	volatile uint32_t t93 = 38888444U;

	t93 = ((x481&x482)&(x483*x484));

	if (t93 != 1U) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x486 = 2U;
	static int32_t x488 = 65090807;
	volatile uint64_t t94 = 12LLU;

	t94 = ((x485&x486)&(x487*x488));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x489 = 373893021U;
	int64_t x490 = INT64_MAX;
	uint16_t x491 = 3266U;
	static uint64_t x492 = 1979321128442322LLU;
	volatile uint64_t t95 = 6722LLU;

	t95 = ((x489&x490)&(x491*x492));

	if (t95 != 532740LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x493 = INT16_MIN;
	int32_t x495 = INT32_MAX;
	int64_t t96 = -1901723049LL;

	t96 = ((x493&x494)&(x495*x496));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x497 = UINT8_MAX;
	int16_t x498 = 1309;
	int32_t x499 = 1573440;
	static int8_t x500 = INT8_MIN;
	int32_t t97 = 3006;

	t97 = ((x497&x498)&(x499*x500));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x501 = -1;
	uint32_t x502 = UINT32_MAX;
	uint16_t x504 = 0U;
	volatile uint32_t t98 = 233U;

	t98 = ((x501&x502)&(x503*x504));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x509 = INT64_MIN;
	int64_t x510 = INT64_MAX;
	volatile int32_t x511 = INT32_MIN;
	int64_t x512 = -12526LL;
	static volatile int64_t t99 = 453026243LL;

	t99 = ((x509&x510)&(x511*x512));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

