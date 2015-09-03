#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t t0 = 53LL;
static volatile uint8_t x5 = 6U;
int64_t x8 = -1LL;
volatile int8_t x12 = -1;
int32_t x13 = INT32_MIN;
volatile uint32_t x14 = UINT32_MAX;
static int64_t x18 = INT64_MIN;
uint64_t t4 = 84151LLU;
int32_t x30 = 34;
uint16_t x32 = UINT16_MAX;
static uint64_t x34 = 146125023LLU;
volatile int32_t t7 = 2;
int16_t x45 = -1;
int32_t x48 = INT32_MIN;
int16_t x50 = 47;
uint16_t x59 = 10U;
int8_t x66 = INT8_MAX;
uint64_t x76 = 5346867LLU;
int64_t x77 = 60601275056LL;
int32_t x91 = -2;
uint8_t x94 = UINT8_MAX;
uint64_t x99 = 80151237766569LLU;
int8_t x106 = INT8_MAX;
volatile int16_t x110 = INT16_MIN;
int16_t x118 = -1;
static int64_t x127 = 6229813547LL;
int32_t x129 = 0;
int8_t x134 = INT8_MIN;
volatile int32_t x142 = -1;
static uint32_t x154 = 216354319U;
uint64_t t30 = 1527192207376367351LLU;
uint32_t x170 = 231505025U;
uint64_t t32 = 42547LLU;
int64_t x173 = -1LL;
static uint32_t x179 = 183746563U;
volatile int64_t t34 = 61068916LL;
int32_t x186 = -1;
static int8_t x190 = INT8_MAX;
volatile int16_t x191 = -189;
int32_t t37 = 215988803;
static uint32_t x196 = UINT32_MAX;
int64_t x208 = INT64_MAX;
static int32_t x211 = -1;
int64_t x214 = 3086LL;
int32_t x226 = -27764;
uint64_t x228 = 93461LLU;
volatile int16_t x229 = 1;
volatile int16_t x234 = INT16_MIN;
int64_t x237 = 221034LL;
volatile int64_t t48 = 0LL;
volatile int32_t x249 = INT32_MIN;
static int32_t x253 = 13502;
uint32_t x260 = 840702954U;
uint32_t x267 = 12U;
uint16_t x273 = 8900U;
static volatile int32_t t56 = -3362499;
uint32_t x293 = 389U;
uint32_t t58 = 413914216U;
int64_t x307 = 31635LL;
int16_t x312 = -1;
static int16_t x314 = INT16_MIN;
volatile uint32_t t63 = 783182U;
volatile int32_t x317 = -1;
int8_t x320 = -1;
uint32_t x327 = UINT32_MAX;
static uint64_t x334 = UINT64_MAX;
static int16_t x336 = 108;
static uint8_t x340 = 100U;
int32_t x341 = -1;
static int64_t t70 = 550567362010LL;
int32_t t71 = 15286;
int8_t x354 = 1;
uint16_t x361 = 460U;
uint32_t x372 = 84450U;
volatile int32_t t76 = -675373;
static volatile int64_t x373 = -434119945LL;
uint64_t x389 = UINT64_MAX;
volatile int16_t x390 = -8617;
volatile uint64_t t81 = 11057964LLU;
int32_t x397 = INT32_MIN;
volatile int16_t x398 = 1809;
static int8_t x400 = 0;
volatile int32_t t82 = 495880;
int64_t x404 = INT64_MIN;
uint16_t x412 = 16U;
uint8_t x426 = 1U;
int64_t x440 = INT64_MIN;
static int16_t x445 = 0;
int16_t x467 = 232;
uint64_t x473 = UINT64_MAX;
int64_t x474 = -8559094520LL;


void f0(void) {
	int64_t x1 = INT64_MAX;
	int16_t x2 = INT16_MAX;
	int16_t x3 = -2646;
	volatile int64_t x4 = 5226134740LL;

	t0 = (x1&((x2*x3)==x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x6 = UINT32_MAX;
	uint8_t x7 = 19U;
	int32_t t1 = -6;

	t1 = (x5&((x6*x7)==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = 102250298547LL;
	volatile int8_t x10 = -20;
	int8_t x11 = INT8_MAX;
	int64_t t2 = 3439042LL;

	t2 = (x9&((x10*x11)==x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x15 = INT8_MAX;
	uint8_t x16 = 22U;
	int32_t t3 = 13957358;

	t3 = (x13&((x14*x15)==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 4920755780029LLU;
	int16_t x19 = 1;
	int64_t x20 = -16251750568695049LL;

	t4 = (x17&((x18*x19)==x20));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x25 = -1;
	int8_t x26 = 0;
	uint16_t x27 = UINT16_MAX;
	volatile int32_t x28 = INT32_MIN;
	volatile int32_t t5 = -255229;

	t5 = (x25&((x26*x27)==x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x29 = UINT8_MAX;
	static int32_t x31 = -23;
	volatile int32_t t6 = -791493;

	t6 = (x29&((x30*x31)==x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = INT16_MIN;
	uint8_t x35 = UINT8_MAX;
	uint8_t x36 = 38U;

	t7 = (x33&((x34*x35)==x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x41 = 227020680;
	int8_t x42 = 0;
	int16_t x43 = -53;
	uint8_t x44 = 18U;
	volatile int32_t t8 = -267452973;

	t8 = (x41&((x42*x43)==x44));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x46 = 1121U;
	volatile int16_t x47 = INT16_MIN;
	static int32_t t9 = 11269;

	t9 = (x45&((x46*x47)==x48));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint32_t x49 = 5768U;
	int32_t x51 = -1;
	int16_t x52 = INT16_MIN;
	volatile uint32_t t10 = 264633550U;

	t10 = (x49&((x50*x51)==x52));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x53 = 527631104990948LLU;
	uint32_t x54 = UINT32_MAX;
	int32_t x55 = 120026;
	int8_t x56 = -3;
	static uint64_t t11 = 134451LLU;

	t11 = (x53&((x54*x55)==x56));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint8_t x57 = 93U;
	volatile uint16_t x58 = UINT16_MAX;
	volatile int8_t x60 = INT8_MIN;
	volatile int32_t t12 = -1034685;

	t12 = (x57&((x58*x59)==x60));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x65 = -1;
	int16_t x67 = INT16_MIN;
	uint64_t x68 = 57181583442768LLU;
	int32_t t13 = 7899;

	t13 = (x65&((x66*x67)==x68));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x69 = INT8_MAX;
	int8_t x70 = 55;
	static volatile int32_t x71 = 132477;
	int64_t x72 = INT64_MIN;
	int32_t t14 = 131496069;

	t14 = (x69&((x70*x71)==x72));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x73 = UINT16_MAX;
	int16_t x74 = -1;
	static uint8_t x75 = UINT8_MAX;
	int32_t t15 = -26402;

	t15 = (x73&((x74*x75)==x76));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x78 = 27U;
	int64_t x79 = 603282790171590LL;
	int32_t x80 = -1;
	volatile int64_t t16 = -15167779LL;

	t16 = (x77&((x78*x79)==x80));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint32_t x89 = 1221739U;
	int64_t x90 = -1LL;
	int32_t x92 = INT32_MIN;
	uint32_t t17 = 71901U;

	t17 = (x89&((x90*x91)==x92));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x93 = INT16_MAX;
	int8_t x95 = INT8_MAX;
	static int16_t x96 = INT16_MAX;
	static int32_t t18 = 26671;

	t18 = (x93&((x94*x95)==x96));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x97 = UINT32_MAX;
	static uint16_t x98 = 112U;
	uint32_t x100 = UINT32_MAX;
	volatile uint32_t t19 = 38U;

	t19 = (x97&((x98*x99)==x100));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x105 = 164835LLU;
	int8_t x107 = 24;
	int64_t x108 = 4997003461LL;
	uint64_t t20 = 1261985001087LLU;

	t20 = (x105&((x106*x107)==x108));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x109 = 731848437LL;
	int8_t x111 = -1;
	int32_t x112 = 5;
	int64_t t21 = -2772LL;

	t21 = (x109&((x110*x111)==x112));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x117 = INT16_MIN;
	int8_t x119 = INT8_MAX;
	int64_t x120 = -903628928655610LL;
	volatile int32_t t22 = 1;

	t22 = (x117&((x118*x119)==x120));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x125 = 3U;
	uint64_t x126 = 3523LLU;
	uint64_t x128 = 36586384239020LLU;
	int32_t t23 = 996682303;

	t23 = (x125&((x126*x127)==x128));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x130 = -2599;
	uint16_t x131 = 485U;
	volatile uint16_t x132 = 1026U;
	volatile int32_t t24 = -52307;

	t24 = (x129&((x130*x131)==x132));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x133 = 3;
	int16_t x135 = INT16_MIN;
	static int64_t x136 = -1LL;
	static int32_t t25 = 0;

	t25 = (x133&((x134*x135)==x136));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x137 = INT16_MIN;
	int8_t x138 = INT8_MIN;
	int16_t x139 = 7;
	static volatile int16_t x140 = INT16_MAX;
	int32_t t26 = -13;

	t26 = (x137&((x138*x139)==x140));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x141 = INT32_MIN;
	volatile int16_t x143 = 4020;
	uint8_t x144 = 13U;
	volatile int32_t t27 = -267129651;

	t27 = (x141&((x142*x143)==x144));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x145 = INT16_MIN;
	static int16_t x146 = INT16_MIN;
	int8_t x147 = INT8_MIN;
	uint32_t x148 = 15641913U;
	static volatile int32_t t28 = 489980;

	t28 = (x145&((x146*x147)==x148));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x153 = INT64_MAX;
	static uint16_t x155 = 603U;
	int32_t x156 = INT32_MIN;
	int64_t t29 = -133819474641799LL;

	t29 = (x153&((x154*x155)==x156));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x157 = 15645746LLU;
	uint64_t x158 = 3044LLU;
	int8_t x159 = -1;
	int64_t x160 = INT64_MIN;

	t30 = (x157&((x158*x159)==x160));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x161 = -10959963371442609LL;
	uint64_t x162 = 100764697627355898LLU;
	int32_t x163 = INT32_MIN;
	volatile int8_t x164 = INT8_MAX;
	static volatile int64_t t31 = -85821138706LL;

	t31 = (x161&((x162*x163)==x164));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x169 = 120722LLU;
	int32_t x171 = -1;
	int8_t x172 = INT8_MIN;

	t32 = (x169&((x170*x171)==x172));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x174 = UINT8_MAX;
	int8_t x175 = INT8_MIN;
	int64_t x176 = INT64_MIN;
	volatile int64_t t33 = -2024323556625732643LL;

	t33 = (x173&((x174*x175)==x176));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x177 = 15358LL;
	int16_t x178 = -1;
	uint8_t x180 = 6U;

	t34 = (x177&((x178*x179)==x180));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x181 = -616694058018079199LL;
	volatile uint32_t x182 = UINT32_MAX;
	uint32_t x183 = 69930U;
	uint16_t x184 = 8966U;
	static int64_t t35 = 136615999998LL;

	t35 = (x181&((x182*x183)==x184));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x185 = INT8_MIN;
	int16_t x187 = 44;
	int64_t x188 = -12600882562880LL;
	static int32_t t36 = -62241;

	t36 = (x185&((x186*x187)==x188));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x189 = INT8_MAX;
	int64_t x192 = 15742285971452650LL;

	t37 = (x189&((x190*x191)==x192));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x193 = 873LL;
	uint64_t x194 = UINT64_MAX;
	int16_t x195 = 30;
	volatile int64_t t38 = -85501070LL;

	t38 = (x193&((x194*x195)==x196));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x201 = 130U;
	uint8_t x202 = 0U;
	uint64_t x203 = UINT64_MAX;
	uint32_t x204 = UINT32_MAX;
	int32_t t39 = 1993;

	t39 = (x201&((x202*x203)==x204));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x205 = 168392LLU;
	static uint64_t x206 = 1155LLU;
	uint64_t x207 = 338014029493LLU;
	volatile uint64_t t40 = 2292698402194LLU;

	t40 = (x205&((x206*x207)==x208));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x209 = INT32_MIN;
	int8_t x210 = INT8_MIN;
	volatile int16_t x212 = 0;
	int32_t t41 = -11;

	t41 = (x209&((x210*x211)==x212));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x213 = UINT16_MAX;
	int16_t x215 = INT16_MIN;
	static uint16_t x216 = UINT16_MAX;
	int32_t t42 = -16;

	t42 = (x213&((x214*x215)==x216));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x217 = 154566791071163LLU;
	uint32_t x218 = 950170950U;
	int32_t x219 = -1;
	static int16_t x220 = 12;
	volatile uint64_t t43 = 241LLU;

	t43 = (x217&((x218*x219)==x220));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x221 = -1LL;
	int16_t x222 = -1;
	static uint16_t x223 = UINT16_MAX;
	int16_t x224 = INT16_MAX;
	volatile int64_t t44 = -102926085001208LL;

	t44 = (x221&((x222*x223)==x224));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x225 = 1U;
	volatile int64_t x227 = -100872LL;
	volatile int32_t t45 = 1;

	t45 = (x225&((x226*x227)==x228));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x230 = -1;
	int8_t x231 = INT8_MIN;
	static volatile int16_t x232 = INT16_MIN;
	volatile int32_t t46 = 2;

	t46 = (x229&((x230*x231)==x232));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x233 = 11535;
	int16_t x235 = INT16_MIN;
	volatile int64_t x236 = 124219316523015LL;
	int32_t t47 = 4;

	t47 = (x233&((x234*x235)==x236));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x238 = -69;
	uint32_t x239 = 85U;
	static int64_t x240 = 1LL;

	t48 = (x237&((x238*x239)==x240));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x241 = INT8_MIN;
	static uint32_t x242 = 2762U;
	static volatile int64_t x243 = -1LL;
	int64_t x244 = -25LL;
	int32_t t49 = 114341812;

	t49 = (x241&((x242*x243)==x244));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x250 = INT16_MIN;
	uint64_t x251 = 700163LLU;
	uint64_t x252 = UINT64_MAX;
	volatile int32_t t50 = -1193344;

	t50 = (x249&((x250*x251)==x252));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x254 = INT8_MIN;
	volatile uint32_t x255 = 3U;
	int16_t x256 = -1;
	volatile int32_t t51 = 60601;

	t51 = (x253&((x254*x255)==x256));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x257 = INT32_MAX;
	int8_t x258 = -2;
	int16_t x259 = -1;
	int32_t t52 = -15244;

	t52 = (x257&((x258*x259)==x260));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x261 = UINT8_MAX;
	static int8_t x262 = INT8_MIN;
	uint64_t x263 = 1014198043993LLU;
	volatile int64_t x264 = INT64_MIN;
	static int32_t t53 = -685600;

	t53 = (x261&((x262*x263)==x264));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x265 = -119475720;
	static int8_t x266 = -1;
	volatile int32_t x268 = -8016714;
	int32_t t54 = 64788;

	t54 = (x265&((x266*x267)==x268));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x274 = INT16_MIN;
	static uint8_t x275 = 31U;
	int16_t x276 = INT16_MIN;
	static int32_t t55 = 41449933;

	t55 = (x273&((x274*x275)==x276));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x277 = INT8_MIN;
	volatile uint16_t x278 = UINT16_MAX;
	static int16_t x279 = 2276;
	int64_t x280 = -1170096903781533637LL;

	t56 = (x277&((x278*x279)==x280));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x285 = 29288186462330104LLU;
	static uint16_t x286 = UINT16_MAX;
	static int32_t x287 = -14776;
	int64_t x288 = 13969726521015706LL;
	volatile uint64_t t57 = 699516029743LLU;

	t57 = (x285&((x286*x287)==x288));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x294 = -1;
	int16_t x295 = INT16_MAX;
	int32_t x296 = -1;

	t58 = (x293&((x294*x295)==x296));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x297 = 6U;
	int16_t x298 = -2;
	uint8_t x299 = 9U;
	uint8_t x300 = 5U;
	static volatile uint32_t t59 = 20U;

	t59 = (x297&((x298*x299)==x300));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x301 = INT16_MIN;
	static int32_t x302 = -1;
	uint8_t x303 = 6U;
	int8_t x304 = INT8_MIN;
	static volatile int32_t t60 = -223;

	t60 = (x301&((x302*x303)==x304));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x305 = 170453114LL;
	int16_t x306 = INT16_MIN;
	static uint64_t x308 = 1LLU;
	static volatile int64_t t61 = -73165407LL;

	t61 = (x305&((x306*x307)==x308));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x309 = INT8_MIN;
	volatile int8_t x310 = -2;
	uint64_t x311 = 519219171397LLU;
	int32_t t62 = -2;

	t62 = (x309&((x310*x311)==x312));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x313 = 243U;
	static volatile uint64_t x315 = 357042215LLU;
	int32_t x316 = INT32_MAX;

	t63 = (x313&((x314*x315)==x316));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x318 = 15664542U;
	static volatile uint8_t x319 = 0U;
	volatile int32_t t64 = 1307;

	t64 = (x317&((x318*x319)==x320));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x321 = -1;
	uint16_t x322 = 3790U;
	uint64_t x323 = UINT64_MAX;
	static uint8_t x324 = 109U;
	volatile int32_t t65 = 3;

	t65 = (x321&((x322*x323)==x324));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x325 = INT8_MIN;
	int16_t x326 = INT16_MIN;
	int32_t x328 = INT32_MIN;
	int32_t t66 = -117615398;

	t66 = (x325&((x326*x327)==x328));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x333 = -1473;
	uint8_t x335 = UINT8_MAX;
	volatile int32_t t67 = -109;

	t67 = (x333&((x334*x335)==x336));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x337 = 234878573LLU;
	int32_t x338 = 4;
	int8_t x339 = INT8_MIN;
	uint64_t t68 = 6306909LLU;

	t68 = (x337&((x338*x339)==x340));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x342 = 1U;
	int32_t x343 = INT32_MAX;
	uint8_t x344 = 124U;
	volatile int32_t t69 = 117960;

	t69 = (x341&((x342*x343)==x344));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x345 = -452984673LL;
	static int16_t x346 = INT16_MIN;
	static int16_t x347 = -1864;
	static int32_t x348 = -2883769;

	t70 = (x345&((x346*x347)==x348));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x349 = INT8_MIN;
	uint64_t x350 = 388132LLU;
	uint32_t x351 = 213005126U;
	int16_t x352 = INT16_MIN;

	t71 = (x349&((x350*x351)==x352));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x353 = -815;
	static int32_t x355 = INT32_MIN;
	int64_t x356 = INT64_MIN;
	static volatile int32_t t72 = -19746948;

	t72 = (x353&((x354*x355)==x356));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x357 = INT64_MIN;
	volatile int32_t x358 = INT32_MIN;
	uint64_t x359 = 227513LLU;
	int8_t x360 = INT8_MIN;
	volatile int64_t t73 = 3108758414068856655LL;

	t73 = (x357&((x358*x359)==x360));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x362 = -30783329LL;
	int32_t x363 = 3;
	uint16_t x364 = 12U;
	int32_t t74 = 1;

	t74 = (x361&((x362*x363)==x364));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x365 = INT32_MIN;
	uint64_t x366 = UINT64_MAX;
	uint64_t x367 = 3850671177239285LLU;
	int64_t x368 = INT64_MIN;
	static int32_t t75 = 969521066;

	t75 = (x365&((x366*x367)==x368));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x369 = 38217071;
	int8_t x370 = INT8_MAX;
	volatile uint16_t x371 = 1739U;

	t76 = (x369&((x370*x371)==x372));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x374 = 941816694LLU;
	int32_t x375 = INT32_MIN;
	int8_t x376 = -1;
	volatile int64_t t77 = -415LL;

	t77 = (x373&((x374*x375)==x376));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x377 = INT32_MIN;
	int16_t x378 = -1;
	static volatile uint16_t x379 = UINT16_MAX;
	uint8_t x380 = 4U;
	volatile int32_t t78 = 79490815;

	t78 = (x377&((x378*x379)==x380));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x385 = UINT16_MAX;
	volatile int16_t x386 = -117;
	int8_t x387 = -38;
	static int64_t x388 = -28685782LL;
	int32_t t79 = 14357693;

	t79 = (x385&((x386*x387)==x388));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x391 = -815;
	static volatile uint32_t x392 = UINT32_MAX;
	volatile uint64_t t80 = 4671252LLU;

	t80 = (x389&((x390*x391)==x392));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x393 = 2LLU;
	int32_t x394 = INT32_MAX;
	uint64_t x395 = 20LLU;
	uint32_t x396 = UINT32_MAX;

	t81 = (x393&((x394*x395)==x396));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x399 = INT8_MAX;

	t82 = (x397&((x398*x399)==x400));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x401 = -1;
	static uint16_t x402 = 4U;
	int8_t x403 = -1;
	volatile int32_t t83 = -13559;

	t83 = (x401&((x402*x403)==x404));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x409 = 2U;
	int8_t x410 = -26;
	static int16_t x411 = INT16_MAX;
	uint32_t t84 = 1456U;

	t84 = (x409&((x410*x411)==x412));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x413 = INT64_MIN;
	int32_t x414 = INT32_MIN;
	static int64_t x415 = 40392099LL;
	uint16_t x416 = UINT16_MAX;
	int64_t t85 = 3850LL;

	t85 = (x413&((x414*x415)==x416));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x417 = 7429761;
	uint8_t x418 = 1U;
	static volatile int16_t x419 = -1;
	static int16_t x420 = 58;
	int32_t t86 = -305;

	t86 = (x417&((x418*x419)==x420));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x421 = UINT16_MAX;
	volatile uint32_t x422 = 42U;
	static int8_t x423 = -57;
	int64_t x424 = INT64_MIN;
	static volatile int32_t t87 = 6438565;

	t87 = (x421&((x422*x423)==x424));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x425 = -15440670LL;
	uint32_t x427 = UINT32_MAX;
	uint32_t x428 = UINT32_MAX;
	static int64_t t88 = 9LL;

	t88 = (x425&((x426*x427)==x428));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint8_t x429 = UINT8_MAX;
	volatile uint16_t x430 = 1U;
	int32_t x431 = INT32_MAX;
	int32_t x432 = 3049365;
	static volatile int32_t t89 = -1;

	t89 = (x429&((x430*x431)==x432));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x433 = -1LL;
	int32_t x434 = INT32_MAX;
	int16_t x435 = -1;
	int8_t x436 = INT8_MAX;
	int64_t t90 = -6863112361LL;

	t90 = (x433&((x434*x435)==x436));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x437 = INT8_MIN;
	uint32_t x438 = 15U;
	static uint64_t x439 = UINT64_MAX;
	static volatile int32_t t91 = -15;

	t91 = (x437&((x438*x439)==x440));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x446 = INT8_MIN;
	static int8_t x447 = INT8_MAX;
	static volatile int64_t x448 = INT64_MIN;
	volatile int32_t t92 = -56685;

	t92 = (x445&((x446*x447)==x448));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x449 = -1;
	int64_t x450 = 4352925889059746LL;
	volatile int32_t x451 = -1;
	int64_t x452 = 13124LL;
	int32_t t93 = -7;

	t93 = (x449&((x450*x451)==x452));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int16_t x457 = -9;
	int16_t x458 = INT16_MAX;
	volatile int32_t x459 = -1;
	int64_t x460 = -1LL;
	static int32_t t94 = -8748007;

	t94 = (x457&((x458*x459)==x460));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x465 = 8528U;
	int8_t x466 = -1;
	volatile int16_t x468 = -6;
	volatile int32_t t95 = -2963158;

	t95 = (x465&((x466*x467)==x468));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x469 = UINT8_MAX;
	int64_t x470 = INT64_MAX;
	int16_t x471 = -1;
	int64_t x472 = INT64_MIN;
	static volatile int32_t t96 = -5;

	t96 = (x469&((x470*x471)==x472));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x475 = INT16_MIN;
	int8_t x476 = -1;
	static volatile uint64_t t97 = 1678718238LLU;

	t97 = (x473&((x474*x475)==x476));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x481 = -1;
	static uint64_t x482 = 410488160LLU;
	int64_t x483 = -1LL;
	uint32_t x484 = 1425U;
	volatile int32_t t98 = 9294;

	t98 = (x481&((x482*x483)==x484));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x489 = INT16_MAX;
	static int8_t x490 = -1;
	volatile int8_t x491 = -17;
	uint64_t x492 = UINT64_MAX;
	volatile int32_t t99 = -10385886;

	t99 = (x489&((x490*x491)==x492));

	if (t99 != 0) { NG(); } else { ; }
	
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

