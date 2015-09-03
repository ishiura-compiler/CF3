#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MIN;
int16_t x6 = INT16_MIN;
uint64_t x7 = 23789LLU;
volatile int32_t t1 = 771555;
int16_t x11 = INT16_MIN;
static int16_t x12 = INT16_MIN;
int32_t t2 = -89969;
int64_t x18 = 123305486686LL;
int16_t x19 = INT16_MIN;
volatile uint32_t x41 = UINT32_MAX;
volatile int32_t t8 = -49;
uint16_t x57 = 113U;
volatile int64_t x67 = 1LL;
int16_t x79 = INT16_MIN;
uint16_t x85 = 7U;
int32_t x89 = INT32_MAX;
int8_t x95 = -1;
int32_t t20 = -30603150;
static volatile int32_t t21 = -1251285;
volatile uint16_t x103 = 14U;
int32_t t22 = 44800462;
int8_t x108 = -38;
int32_t t23 = 9113;
int16_t x115 = INT16_MIN;
volatile int32_t t27 = -677;
volatile uint32_t x156 = 39U;
volatile uint16_t x160 = 46U;
static int32_t t32 = -54439006;
static uint8_t x161 = 11U;
int64_t x164 = 133589140183796LL;
volatile int32_t t33 = 1;
volatile uint16_t x165 = 11U;
int8_t x167 = INT8_MIN;
int32_t t35 = 20;
volatile int32_t t38 = 96808;
int32_t t40 = 0;
int16_t x201 = INT16_MAX;
static uint8_t x203 = 9U;
int32_t t41 = -10401;
uint64_t x205 = UINT64_MAX;
static volatile int16_t x207 = INT16_MIN;
uint16_t x210 = UINT16_MAX;
int32_t x211 = INT32_MAX;
int16_t x219 = -76;
int32_t x224 = INT32_MAX;
volatile int32_t t46 = -1;
int32_t x226 = INT32_MIN;
int32_t x235 = INT32_MIN;
int32_t x239 = INT32_MIN;
volatile uint64_t x240 = 130LLU;
volatile int32_t t51 = 0;
static int32_t t52 = 31279;
int32_t x253 = -1;
volatile int32_t t53 = -287;
int8_t x261 = -1;
int8_t x262 = 34;
uint64_t x265 = 3578540071204988403LLU;
int8_t x267 = INT8_MAX;
int32_t x270 = -21;
volatile int32_t t56 = 192829;
int16_t x274 = INT16_MAX;
static int8_t x277 = INT8_MAX;
int16_t x280 = INT16_MIN;
int32_t t58 = 27246;
int64_t x296 = INT64_MIN;
int16_t x306 = INT16_MIN;
volatile uint64_t x310 = 5908318429LLU;
uint64_t x312 = UINT64_MAX;
int64_t x319 = INT64_MIN;
static int32_t t64 = 0;
static volatile int16_t x327 = -1;
int16_t x328 = INT16_MIN;
int8_t x346 = INT8_MAX;
static volatile int64_t x348 = 104LL;
int32_t x350 = 0;
int32_t t68 = 560197607;
volatile int32_t x356 = -1;
static int32_t x362 = 631;
static uint64_t x378 = 100929456227421099LLU;
volatile int32_t t74 = 23;
uint16_t x386 = 6131U;
int8_t x390 = INT8_MAX;
volatile int8_t x392 = INT8_MAX;
uint16_t x393 = 8U;
volatile uint16_t x394 = 0U;
int16_t x399 = 5711;
volatile int32_t t78 = -5332374;
volatile int16_t x415 = 2;
int32_t x416 = INT32_MAX;
int64_t x428 = -636LL;
volatile int32_t t83 = 3401;
int16_t x429 = 109;
static uint16_t x433 = 1833U;
int32_t x455 = 2;
int16_t x458 = INT16_MIN;
volatile uint8_t x462 = UINT8_MAX;
uint64_t x465 = 8298057184468521905LLU;
int32_t t90 = -24383475;
uint64_t x471 = UINT64_MAX;
static int16_t x472 = INT16_MAX;
int16_t x481 = 358;
static uint32_t x482 = 10U;
int8_t x484 = INT8_MIN;
int8_t x510 = 15;


void f0(void) {
	volatile uint32_t x1 = 5U;
	static int16_t x3 = INT16_MIN;
	int8_t x4 = -1;
	volatile int32_t t0 = 47;

	t0 = ((x1*x2)<(x3|x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = INT8_MAX;
	int16_t x8 = INT16_MAX;

	t1 = ((x5*x6)<(x7|x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 231133923LLU;
	volatile int16_t x10 = INT16_MIN;

	t2 = ((x9*x10)<(x11|x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 6539U;
	uint8_t x14 = 1U;
	volatile uint16_t x15 = 12U;
	int8_t x16 = -12;
	int32_t t3 = 86625781;

	t3 = ((x13*x14)<(x15|x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MAX;
	int16_t x20 = 1;
	static volatile int32_t t4 = 14;

	t4 = ((x17*x18)<(x19|x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x25 = 2U;
	volatile uint64_t x26 = 565LLU;
	uint8_t x27 = 1U;
	int8_t x28 = 51;
	int32_t t5 = 5234;

	t5 = ((x25*x26)<(x27|x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x29 = 0;
	int64_t x30 = INT64_MIN;
	int64_t x31 = INT64_MAX;
	int32_t x32 = 66973024;
	int32_t t6 = -2381;

	t6 = ((x29*x30)<(x31|x32));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = INT8_MAX;
	volatile int64_t x34 = 78LL;
	static int32_t x35 = INT32_MIN;
	uint32_t x36 = 73U;
	int32_t t7 = -3764213;

	t7 = ((x33*x34)<(x35|x36));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x42 = 1U;
	uint64_t x43 = 1700467758574LLU;
	static int32_t x44 = INT32_MIN;

	t8 = ((x41*x42)<(x43|x44));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x49 = 7532906291LLU;
	static int16_t x50 = INT16_MIN;
	static int32_t x51 = INT32_MIN;
	uint16_t x52 = 7079U;
	volatile int32_t t9 = -4;

	t9 = ((x49*x50)<(x51|x52));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x53 = -6604923;
	uint64_t x54 = 1482656398LLU;
	uint64_t x55 = UINT64_MAX;
	static uint32_t x56 = UINT32_MAX;
	volatile int32_t t10 = -30858;

	t10 = ((x53*x54)<(x55|x56));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x58 = -1;
	int32_t x59 = INT32_MIN;
	int64_t x60 = 253127LL;
	int32_t t11 = -1831839;

	t11 = ((x57*x58)<(x59|x60));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x61 = UINT16_MAX;
	uint8_t x62 = UINT8_MAX;
	uint64_t x63 = 15LLU;
	static uint64_t x64 = UINT64_MAX;
	static int32_t t12 = -1;

	t12 = ((x61*x62)<(x63|x64));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x65 = 28;
	uint64_t x66 = 454LLU;
	uint32_t x68 = 3134831U;
	int32_t t13 = 14794;

	t13 = ((x65*x66)<(x67|x68));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x69 = 11761;
	int16_t x70 = INT16_MAX;
	static int16_t x71 = -1;
	volatile int16_t x72 = -1;
	int32_t t14 = -4081;

	t14 = ((x69*x70)<(x71|x72));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint64_t x73 = 5697932759LLU;
	uint8_t x74 = 3U;
	int64_t x75 = INT64_MIN;
	int8_t x76 = -3;
	int32_t t15 = -1114814;

	t15 = ((x73*x74)<(x75|x76));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x77 = 10U;
	static int64_t x78 = -1LL;
	static uint16_t x80 = UINT16_MAX;
	volatile int32_t t16 = 7;

	t16 = ((x77*x78)<(x79|x80));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x81 = UINT64_MAX;
	int8_t x82 = -1;
	volatile uint16_t x83 = UINT16_MAX;
	int8_t x84 = INT8_MIN;
	volatile int32_t t17 = -7;

	t17 = ((x81*x82)<(x83|x84));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x86 = INT16_MIN;
	int32_t x87 = -54;
	volatile uint32_t x88 = UINT32_MAX;
	int32_t t18 = -1;

	t18 = ((x85*x86)<(x87|x88));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x90 = 889LLU;
	int32_t x91 = -1;
	volatile int8_t x92 = 45;
	volatile int32_t t19 = 19759427;

	t19 = ((x89*x90)<(x91|x92));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x93 = 2;
	uint64_t x94 = UINT64_MAX;
	volatile uint16_t x96 = UINT16_MAX;

	t20 = ((x93*x94)<(x95|x96));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x97 = 29;
	int16_t x98 = -696;
	static int16_t x99 = INT16_MAX;
	uint32_t x100 = UINT32_MAX;

	t21 = ((x97*x98)<(x99|x100));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x101 = 15178956657838LLU;
	int16_t x102 = INT16_MIN;
	uint32_t x104 = 14462U;

	t22 = ((x101*x102)<(x103|x104));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x105 = INT32_MIN;
	volatile int64_t x106 = -1LL;
	int16_t x107 = -53;

	t23 = ((x105*x106)<(x107|x108));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x113 = -1;
	uint8_t x114 = 2U;
	int32_t x116 = INT32_MIN;
	int32_t t24 = -7957081;

	t24 = ((x113*x114)<(x115|x116));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x121 = -56125LL;
	volatile uint32_t x122 = 7U;
	uint32_t x123 = 274863569U;
	uint8_t x124 = 4U;
	static volatile int32_t t25 = -357423;

	t25 = ((x121*x122)<(x123|x124));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x125 = 0U;
	uint32_t x126 = 660301U;
	int16_t x127 = 1100;
	static uint64_t x128 = 31171LLU;
	volatile int32_t t26 = -203432;

	t26 = ((x125*x126)<(x127|x128));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x129 = -1;
	uint32_t x130 = UINT32_MAX;
	volatile uint8_t x131 = 3U;
	static int64_t x132 = -1LL;

	t27 = ((x129*x130)<(x131|x132));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x137 = INT16_MAX;
	uint32_t x138 = 441U;
	volatile int64_t x139 = INT64_MAX;
	static int64_t x140 = 244844683138LL;
	volatile int32_t t28 = -14;

	t28 = ((x137*x138)<(x139|x140));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x145 = -4183;
	uint16_t x146 = UINT16_MAX;
	int8_t x147 = INT8_MIN;
	volatile int32_t x148 = -14161;
	volatile int32_t t29 = 48993;

	t29 = ((x145*x146)<(x147|x148));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x149 = 9U;
	static uint32_t x150 = 3044990U;
	uint8_t x151 = 1U;
	volatile int64_t x152 = -1LL;
	volatile int32_t t30 = 1109;

	t30 = ((x149*x150)<(x151|x152));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x153 = INT16_MAX;
	int32_t x154 = -1;
	int64_t x155 = INT64_MIN;
	volatile int32_t t31 = 26951;

	t31 = ((x153*x154)<(x155|x156));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x157 = -1;
	static int32_t x158 = 990;
	volatile int64_t x159 = -1LL;

	t32 = ((x157*x158)<(x159|x160));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x162 = INT8_MAX;
	static int16_t x163 = INT16_MIN;

	t33 = ((x161*x162)<(x163|x164));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x166 = 195078LLU;
	int8_t x168 = INT8_MIN;
	int32_t t34 = -1;

	t34 = ((x165*x166)<(x167|x168));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x173 = UINT8_MAX;
	volatile int64_t x174 = 334854255787LL;
	uint8_t x175 = 32U;
	uint32_t x176 = 1088905322U;

	t35 = ((x173*x174)<(x175|x176));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x181 = UINT16_MAX;
	int8_t x182 = -1;
	int16_t x183 = 776;
	int32_t x184 = INT32_MIN;
	volatile int32_t t36 = -176654284;

	t36 = ((x181*x182)<(x183|x184));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x185 = INT16_MAX;
	volatile uint32_t x186 = 142U;
	static uint64_t x187 = 2104049708686550527LLU;
	uint16_t x188 = 6177U;
	volatile int32_t t37 = 0;

	t37 = ((x185*x186)<(x187|x188));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x189 = -1;
	static int8_t x190 = -9;
	int64_t x191 = -2LL;
	int8_t x192 = INT8_MIN;

	t38 = ((x189*x190)<(x191|x192));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x193 = UINT32_MAX;
	uint64_t x194 = UINT64_MAX;
	uint64_t x195 = 98796LLU;
	static uint64_t x196 = 12697775053LLU;
	volatile int32_t t39 = -10216;

	t39 = ((x193*x194)<(x195|x196));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x197 = 362U;
	uint64_t x198 = 929251961625416046LLU;
	static uint64_t x199 = 43865878696790686LLU;
	int8_t x200 = INT8_MIN;

	t40 = ((x197*x198)<(x199|x200));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x202 = UINT8_MAX;
	uint8_t x204 = UINT8_MAX;

	t41 = ((x201*x202)<(x203|x204));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x206 = 53806U;
	uint16_t x208 = 7237U;
	volatile int32_t t42 = 827;

	t42 = ((x205*x206)<(x207|x208));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x209 = UINT32_MAX;
	volatile int16_t x212 = -193;
	static volatile int32_t t43 = -32340;

	t43 = ((x209*x210)<(x211|x212));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x213 = -1;
	int64_t x214 = 3906575060LL;
	uint64_t x215 = UINT64_MAX;
	int32_t x216 = INT32_MIN;
	static volatile int32_t t44 = -2216494;

	t44 = ((x213*x214)<(x215|x216));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x217 = INT32_MIN;
	static uint32_t x218 = 3U;
	int32_t x220 = -1;
	int32_t t45 = -874;

	t45 = ((x217*x218)<(x219|x220));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x221 = 0U;
	int8_t x222 = INT8_MIN;
	int32_t x223 = -1;

	t46 = ((x221*x222)<(x223|x224));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x225 = 1;
	int64_t x227 = -1LL;
	uint64_t x228 = 10804472518725934LLU;
	static volatile int32_t t47 = -1490754;

	t47 = ((x225*x226)<(x227|x228));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x229 = -4631345728908LL;
	static int16_t x230 = INT16_MIN;
	int32_t x231 = -20;
	int8_t x232 = 0;
	volatile int32_t t48 = 61;

	t48 = ((x229*x230)<(x231|x232));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x233 = INT16_MIN;
	static int32_t x234 = -1;
	uint64_t x236 = 2256577903591114LLU;
	int32_t t49 = -220177;

	t49 = ((x233*x234)<(x235|x236));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x237 = INT32_MIN;
	uint64_t x238 = UINT64_MAX;
	int32_t t50 = -1;

	t50 = ((x237*x238)<(x239|x240));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x245 = UINT64_MAX;
	int32_t x246 = 11999818;
	uint8_t x247 = UINT8_MAX;
	int8_t x248 = INT8_MIN;

	t51 = ((x245*x246)<(x247|x248));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x249 = 15727LL;
	static volatile uint8_t x250 = UINT8_MAX;
	uint32_t x251 = 648682U;
	uint16_t x252 = 2452U;

	t52 = ((x249*x250)<(x251|x252));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x254 = 264U;
	static volatile int64_t x255 = -1LL;
	int32_t x256 = INT32_MIN;

	t53 = ((x253*x254)<(x255|x256));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x263 = -1;
	int8_t x264 = -1;
	int32_t t54 = -41205;

	t54 = ((x261*x262)<(x263|x264));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x266 = -1;
	static volatile int16_t x268 = INT16_MIN;
	volatile int32_t t55 = -916788;

	t55 = ((x265*x266)<(x267|x268));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x269 = UINT8_MAX;
	static uint8_t x271 = 7U;
	int32_t x272 = INT32_MAX;

	t56 = ((x269*x270)<(x271|x272));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x273 = 544601855269LLU;
	int32_t x275 = -1;
	int64_t x276 = -1LL;
	int32_t t57 = -5170;

	t57 = ((x273*x274)<(x275|x276));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x278 = -236888750LL;
	volatile int16_t x279 = 7617;

	t58 = ((x277*x278)<(x279|x280));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x293 = INT16_MIN;
	int8_t x294 = 0;
	int64_t x295 = 112188029398054LL;
	int32_t t59 = -1;

	t59 = ((x293*x294)<(x295|x296));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x301 = 1;
	int32_t x302 = 0;
	volatile int8_t x303 = INT8_MAX;
	int8_t x304 = -1;
	volatile int32_t t60 = 422;

	t60 = ((x301*x302)<(x303|x304));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x305 = -1;
	uint64_t x307 = 18LLU;
	int32_t x308 = 38;
	volatile int32_t t61 = -51740910;

	t61 = ((x305*x306)<(x307|x308));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x309 = 24U;
	uint64_t x311 = UINT64_MAX;
	int32_t t62 = -3;

	t62 = ((x309*x310)<(x311|x312));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x313 = 110U;
	int64_t x314 = -64LL;
	volatile uint16_t x315 = UINT16_MAX;
	int8_t x316 = INT8_MIN;
	int32_t t63 = -34;

	t63 = ((x313*x314)<(x315|x316));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x317 = INT8_MAX;
	uint64_t x318 = 8153LLU;
	uint64_t x320 = 3580487490370586148LLU;

	t64 = ((x317*x318)<(x319|x320));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x325 = INT16_MIN;
	uint64_t x326 = 106843LLU;
	volatile int32_t t65 = 102375330;

	t65 = ((x325*x326)<(x327|x328));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x337 = 28;
	static uint32_t x338 = 124U;
	uint16_t x339 = 4U;
	int16_t x340 = 0;
	int32_t t66 = -46526;

	t66 = ((x337*x338)<(x339|x340));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x345 = 0U;
	int16_t x347 = -1;
	int32_t t67 = -26;

	t67 = ((x345*x346)<(x347|x348));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x349 = -1LL;
	int8_t x351 = INT8_MIN;
	int64_t x352 = -1LL;

	t68 = ((x349*x350)<(x351|x352));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x353 = -1;
	int64_t x354 = -3378881521LL;
	volatile int32_t x355 = INT32_MAX;
	int32_t t69 = 37613;

	t69 = ((x353*x354)<(x355|x356));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x357 = -583851965;
	volatile uint64_t x358 = 677LLU;
	volatile int64_t x359 = 13437982668905LL;
	int64_t x360 = -1226401289LL;
	int32_t t70 = 9;

	t70 = ((x357*x358)<(x359|x360));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x361 = -1LL;
	static volatile uint8_t x363 = 0U;
	int16_t x364 = -1;
	volatile int32_t t71 = 7579;

	t71 = ((x361*x362)<(x363|x364));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x369 = -1LL;
	int32_t x370 = INT32_MAX;
	int16_t x371 = 96;
	int16_t x372 = INT16_MIN;
	volatile int32_t t72 = 352496512;

	t72 = ((x369*x370)<(x371|x372));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x373 = -1;
	static int32_t x374 = -1;
	int16_t x375 = 419;
	volatile uint32_t x376 = 99U;
	int32_t t73 = 14383063;

	t73 = ((x373*x374)<(x375|x376));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x377 = INT8_MAX;
	static int8_t x379 = INT8_MAX;
	int64_t x380 = 8099540LL;

	t74 = ((x377*x378)<(x379|x380));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x385 = -2414;
	static uint16_t x387 = UINT16_MAX;
	int32_t x388 = -1;
	volatile int32_t t75 = 2682;

	t75 = ((x385*x386)<(x387|x388));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x389 = INT8_MAX;
	static int16_t x391 = INT16_MIN;
	int32_t t76 = -18779;

	t76 = ((x389*x390)<(x391|x392));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x395 = 43U;
	volatile int32_t x396 = 9071301;
	static int32_t t77 = 8309;

	t77 = ((x393*x394)<(x395|x396));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x397 = 2;
	volatile int32_t x398 = -1;
	volatile int16_t x400 = INT16_MAX;

	t78 = ((x397*x398)<(x399|x400));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x401 = 1;
	int32_t x402 = -119544517;
	volatile int16_t x403 = INT16_MIN;
	static int16_t x404 = INT16_MIN;
	int32_t t79 = 377;

	t79 = ((x401*x402)<(x403|x404));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x409 = -1;
	int8_t x410 = -3;
	int64_t x411 = -1LL;
	uint16_t x412 = UINT16_MAX;
	int32_t t80 = 1;

	t80 = ((x409*x410)<(x411|x412));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x413 = -1;
	uint64_t x414 = 1338085609329LLU;
	volatile int32_t t81 = -1;

	t81 = ((x413*x414)<(x415|x416));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x421 = 22U;
	uint64_t x422 = 29309943397LLU;
	static volatile uint64_t x423 = UINT64_MAX;
	int16_t x424 = 8966;
	int32_t t82 = 298086;

	t82 = ((x421*x422)<(x423|x424));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x425 = 14235LLU;
	static int16_t x426 = INT16_MIN;
	uint32_t x427 = 505U;

	t83 = ((x425*x426)<(x427|x428));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x430 = INT8_MIN;
	volatile int8_t x431 = INT8_MAX;
	uint32_t x432 = 13U;
	static int32_t t84 = 15433111;

	t84 = ((x429*x430)<(x431|x432));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x434 = -48;
	volatile uint16_t x435 = 61U;
	static volatile int16_t x436 = 1321;
	volatile int32_t t85 = -3;

	t85 = ((x433*x434)<(x435|x436));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x449 = 161U;
	uint16_t x450 = 4U;
	volatile int8_t x451 = -5;
	int32_t x452 = -1;
	volatile int32_t t86 = 51470602;

	t86 = ((x449*x450)<(x451|x452));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x453 = INT8_MIN;
	int32_t x454 = -365;
	int32_t x456 = INT32_MIN;
	int32_t t87 = -158;

	t87 = ((x453*x454)<(x455|x456));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x457 = UINT8_MAX;
	int32_t x459 = INT32_MIN;
	volatile int16_t x460 = INT16_MAX;
	volatile int32_t t88 = 0;

	t88 = ((x457*x458)<(x459|x460));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x461 = -1;
	int8_t x463 = INT8_MIN;
	int32_t x464 = 188175476;
	int32_t t89 = 3519;

	t89 = ((x461*x462)<(x463|x464));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x466 = UINT32_MAX;
	static uint16_t x467 = UINT16_MAX;
	uint32_t x468 = UINT32_MAX;

	t90 = ((x465*x466)<(x467|x468));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x469 = INT64_MIN;
	uint64_t x470 = 3812330187LLU;
	static int32_t t91 = -5715543;

	t91 = ((x469*x470)<(x471|x472));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x473 = UINT8_MAX;
	volatile int8_t x474 = 1;
	volatile int64_t x475 = 3641606304069529LL;
	uint64_t x476 = UINT64_MAX;
	volatile int32_t t92 = -420549564;

	t92 = ((x473*x474)<(x475|x476));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x477 = 49U;
	volatile int32_t x478 = 4172465;
	volatile int8_t x479 = INT8_MIN;
	uint16_t x480 = 67U;
	static volatile int32_t t93 = -2482;

	t93 = ((x477*x478)<(x479|x480));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x483 = -34303;
	volatile int32_t t94 = -62945;

	t94 = ((x481*x482)<(x483|x484));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x485 = 96U;
	uint32_t x486 = 972U;
	int64_t x487 = 41998390699LL;
	uint8_t x488 = 2U;
	static volatile int32_t t95 = -404507;

	t95 = ((x485*x486)<(x487|x488));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x489 = -1;
	int16_t x490 = 14845;
	volatile int64_t x491 = INT64_MAX;
	uint32_t x492 = UINT32_MAX;
	int32_t t96 = 227205;

	t96 = ((x489*x490)<(x491|x492));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x497 = 10U;
	uint16_t x498 = 4787U;
	int32_t x499 = -45;
	static uint16_t x500 = 5497U;
	volatile int32_t t97 = -3;

	t97 = ((x497*x498)<(x499|x500));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x505 = INT8_MIN;
	int16_t x506 = 1;
	int16_t x507 = INT16_MAX;
	volatile uint32_t x508 = 228292U;
	int32_t t98 = 420898038;

	t98 = ((x505*x506)<(x507|x508));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x509 = INT8_MIN;
	volatile int8_t x511 = -1;
	int16_t x512 = 3060;
	int32_t t99 = 1;

	t99 = ((x509*x510)<(x511|x512));

	if (t99 != 1) { NG(); } else { ; }
	
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

