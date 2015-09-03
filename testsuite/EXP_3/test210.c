#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int8_t x2 = INT8_MIN;
volatile int8_t x14 = -1;
static volatile int32_t t2 = -201;
uint64_t t3 = 38800LLU;
int8_t x28 = -3;
uint8_t x31 = 1U;
int32_t x35 = -905292;
uint64_t t7 = 475298003760LLU;
static int64_t x46 = INT64_MIN;
uint64_t x51 = 137775744891527827LLU;
volatile uint64_t t9 = 610546141184442688LLU;
volatile int16_t x63 = 19;
volatile int16_t x67 = -1;
int64_t x71 = 655714131LL;
volatile int64_t x74 = INT64_MIN;
volatile uint32_t t15 = 99448U;
uint64_t t16 = 24044LLU;
static uint32_t x106 = 103132U;
int64_t t19 = -508LL;
static int8_t x112 = 0;
volatile int16_t x118 = -1;
volatile int32_t t21 = 376473361;
int64_t x126 = INT64_MIN;
int8_t x138 = INT8_MIN;
int32_t x144 = -1;
volatile uint64_t x145 = 39LLU;
int32_t x149 = INT32_MAX;
uint32_t x151 = 2U;
int64_t x153 = INT64_MAX;
uint8_t x160 = 81U;
static volatile int32_t x161 = 378288;
volatile int16_t x162 = INT16_MIN;
static uint64_t x163 = 1060800993129860376LLU;
volatile int64_t t39 = -7931140252453457LL;
static uint64_t t40 = 47971196794819LLU;
int16_t x208 = 67;
int32_t t43 = 1;
uint8_t x221 = UINT8_MAX;
volatile int64_t t44 = 142818LL;
static int32_t x227 = INT32_MAX;
uint64_t x228 = 4750633741LLU;
volatile uint8_t x238 = UINT8_MAX;
int16_t x239 = INT16_MIN;
int32_t x241 = INT32_MAX;
int32_t x242 = 47611056;
uint16_t x251 = 2162U;
uint32_t t51 = 296U;
int16_t x255 = -813;
static int16_t x256 = INT16_MAX;
uint16_t x262 = 11975U;
int32_t t54 = -19695;
int32_t x268 = -1;
uint32_t t55 = 7U;
int8_t x275 = -48;
int8_t x285 = INT8_MAX;
uint64_t x288 = 294771LLU;
uint16_t x289 = 11U;
volatile uint8_t x291 = UINT8_MAX;
uint32_t x294 = 446032425U;
int16_t x306 = -1;
static int8_t x307 = -1;
uint16_t x311 = 18445U;
uint32_t x312 = 2577504U;
uint64_t x314 = UINT64_MAX;
volatile uint64_t t66 = 2101450819917603272LLU;
int64_t x318 = INT64_MAX;
int8_t x323 = INT8_MIN;
uint16_t x329 = 4845U;
int8_t x332 = -1;
int8_t x334 = INT8_MAX;
int8_t x336 = INT8_MAX;
volatile uint64_t x341 = 32720183111LLU;
volatile uint64_t t74 = 1482241837265LLU;
int32_t x357 = INT32_MAX;
volatile uint64_t t76 = 26LLU;
uint64_t x372 = 1732356099885LLU;
volatile uint64_t t78 = 2880749424446590LLU;
static int32_t x375 = -10871926;
int64_t x377 = INT64_MIN;
int64_t x383 = -74215465525408623LL;
static int16_t x395 = INT16_MIN;
static int64_t t84 = -32867879288844463LL;
volatile uint16_t x399 = UINT16_MAX;
int8_t x407 = 17;
volatile uint64_t t86 = 169314908352LLU;
static int16_t x411 = -2945;
volatile int64_t t87 = -2075254250681082LL;
uint32_t x413 = UINT32_MAX;
uint64_t t88 = 4028854018617795LLU;
int64_t x418 = -1LL;
uint32_t x419 = 8399075U;
uint64_t x420 = UINT64_MAX;
volatile uint64_t t89 = 163302919217827094LLU;
volatile int16_t x431 = INT16_MIN;
volatile uint64_t t92 = 93910618088LLU;
uint32_t x451 = 1441505198U;
int32_t x453 = INT32_MAX;
static uint64_t x459 = UINT64_MAX;
volatile int16_t x468 = 0;


void f0(void) {
	uint16_t x1 = 429U;
	static volatile int8_t x3 = INT8_MIN;
	int8_t x4 = -1;
	int32_t t0 = -60;

	t0 = ((x1/x2)-(x3-x4));

	if (t0 != 124) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	uint8_t x6 = UINT8_MAX;
	int16_t x7 = INT16_MAX;
	uint32_t x8 = 144893U;
	volatile uint32_t t1 = 833U;

	t1 = ((x5/x6)-(x7-x8));

	if (t1 != 112126U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x13 = 1;
	int32_t x15 = INT32_MAX;
	uint16_t x16 = 141U;

	t2 = ((x13/x14)-(x15-x16));

	if (t2 != -2147483507) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x17 = UINT64_MAX;
	uint16_t x18 = UINT16_MAX;
	uint32_t x19 = 30318U;
	volatile int64_t x20 = -558573962936722309LL;

	t3 = ((x17/x18)-(x19-x20));

	if (t3 != 17888451590044542478LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x21 = -1;
	static volatile uint64_t x22 = 27LLU;
	uint64_t x23 = 91148116LLU;
	int8_t x24 = INT8_MAX;
	volatile uint64_t t4 = 13372770316LLU;

	t4 = ((x21/x22)-(x23-x24));

	if (t4 != 683212743379576144LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x25 = 1U;
	uint32_t x26 = 4100831U;
	volatile int32_t x27 = INT32_MIN;
	volatile uint32_t t5 = 21U;

	t5 = ((x25/x26)-(x27-x28));

	if (t5 != 2147483645U) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x29 = 3U;
	volatile uint16_t x30 = UINT16_MAX;
	int32_t x32 = -1;
	static volatile int32_t t6 = 54;

	t6 = ((x29/x30)-(x31-x32));

	if (t6 != -2) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x33 = 84720218LLU;
	int8_t x34 = INT8_MAX;
	int8_t x36 = INT8_MIN;

	t7 = ((x33/x34)-(x35-x36));

	if (t7 != 1572252LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x45 = -4;
	int64_t x47 = 27244LL;
	uint32_t x48 = UINT32_MAX;
	volatile int64_t t8 = -22982462303091LL;

	t8 = ((x45/x46)-(x47-x48));

	if (t8 != 4294940051LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x49 = INT64_MIN;
	volatile int16_t x50 = INT16_MAX;
	static uint32_t x52 = 519072150U;

	t9 = ((x49/x50)-(x51-x52));

	if (t9 != 18308686845770188539LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x53 = INT64_MIN;
	uint32_t x54 = 999U;
	int32_t x55 = -445;
	int16_t x56 = INT16_MIN;
	int64_t t10 = 598LL;

	t10 = ((x53/x54)-(x55-x56));

	if (t10 != -9232604641528595LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x61 = 1U;
	uint16_t x62 = 283U;
	static uint32_t x64 = 0U;
	uint32_t t11 = 11840215U;

	t11 = ((x61/x62)-(x63-x64));

	if (t11 != 4294967277U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x65 = 7343345;
	int32_t x66 = 1;
	static int8_t x68 = -35;
	int32_t t12 = -15501552;

	t12 = ((x65/x66)-(x67-x68));

	if (t12 != 7343311) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x69 = 114U;
	volatile int16_t x70 = -1;
	volatile int32_t x72 = -1;
	volatile int64_t t13 = 2LL;

	t13 = ((x69/x70)-(x71-x72));

	if (t13 != -655714246LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x73 = -294027439716LL;
	static volatile int16_t x75 = -1;
	int32_t x76 = INT32_MIN;
	volatile int64_t t14 = 386891LL;

	t14 = ((x73/x74)-(x75-x76));

	if (t14 != -2147483647LL) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint32_t x89 = 9319328U;
	int8_t x90 = 15;
	int16_t x91 = INT16_MIN;
	volatile int16_t x92 = INT16_MIN;

	t15 = ((x89/x90)-(x91-x92));

	if (t15 != 621288U) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x93 = 5083841649605223353LLU;
	int8_t x94 = 15;
	int8_t x95 = INT8_MIN;
	uint64_t x96 = 47096644134061224LLU;

	t16 = ((x93/x94)-(x95-x96));

	if (t16 != 386019420774409575LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x97 = 86013534431575495LLU;
	int32_t x98 = -29;
	int32_t x99 = -1;
	static uint16_t x100 = 139U;
	static volatile uint64_t t17 = 3801966752453169LLU;

	t17 = ((x97/x98)-(x99-x100));

	if (t17 != 140LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x101 = INT8_MIN;
	volatile int64_t x102 = -1828908761674044969LL;
	uint32_t x103 = 1440U;
	int8_t x104 = INT8_MAX;
	volatile int64_t t18 = 3961116605LL;

	t18 = ((x101/x102)-(x103-x104));

	if (t18 != -1313LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x105 = UINT32_MAX;
	int64_t x107 = 460036542322385LL;
	int16_t x108 = -1;

	t19 = ((x105/x106)-(x107-x108));

	if (t19 != -460036542280741LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x109 = -1;
	static volatile int8_t x110 = 1;
	static volatile int32_t x111 = INT32_MIN;
	int32_t t20 = INT32_MAX;

	t20 = ((x109/x110)-(x111-x112));

	if (t20 != INT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x117 = UINT8_MAX;
	int32_t x119 = 3145;
	volatile uint8_t x120 = UINT8_MAX;

	t21 = ((x117/x118)-(x119-x120));

	if (t21 != -3145) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x121 = UINT32_MAX;
	int32_t x122 = 1747;
	uint8_t x123 = 19U;
	volatile int32_t x124 = 4945408;
	volatile uint32_t t22 = 120101U;

	t22 = ((x121/x122)-(x123-x124));

	if (t22 != 7403870U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x125 = -1;
	volatile int8_t x127 = 55;
	volatile uint8_t x128 = 3U;
	int64_t t23 = -1LL;

	t23 = ((x125/x126)-(x127-x128));

	if (t23 != -52LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x129 = -1;
	uint8_t x130 = 2U;
	volatile int8_t x131 = -2;
	int16_t x132 = -90;
	int32_t t24 = -5235;

	t24 = ((x129/x130)-(x131-x132));

	if (t24 != -88) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x133 = 1033575;
	volatile int64_t x134 = INT64_MIN;
	int64_t x135 = -1LL;
	uint32_t x136 = 24U;
	volatile int64_t t25 = 0LL;

	t25 = ((x133/x134)-(x135-x136));

	if (t25 != 25LL) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x137 = 45U;
	int8_t x139 = -1;
	static volatile int32_t x140 = INT32_MIN;
	int32_t t26 = -1;

	t26 = ((x137/x138)-(x139-x140));

	if (t26 != -2147483647) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x141 = 15;
	static volatile uint16_t x142 = 13U;
	static int64_t x143 = 127321943LL;
	volatile int64_t t27 = 87953LL;

	t27 = ((x141/x142)-(x143-x144));

	if (t27 != -127321943LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x146 = UINT16_MAX;
	int8_t x147 = INT8_MAX;
	volatile int16_t x148 = -1;
	uint64_t t28 = 28197010LLU;

	t28 = ((x145/x146)-(x147-x148));

	if (t28 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x150 = UINT32_MAX;
	int32_t x152 = 5;
	volatile uint32_t t29 = 0U;

	t29 = ((x149/x150)-(x151-x152));

	if (t29 != 3U) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x154 = UINT64_MAX;
	static int64_t x155 = INT64_MIN;
	volatile int8_t x156 = INT8_MIN;
	uint64_t t30 = 15LLU;

	t30 = ((x153/x154)-(x155-x156));

	if (t30 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x157 = 6336319340403LLU;
	static int8_t x158 = -3;
	int16_t x159 = INT16_MIN;
	volatile uint64_t t31 = 428505822401LLU;

	t31 = ((x157/x158)-(x159-x160));

	if (t31 != 32849LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x164 = INT16_MIN;
	volatile uint64_t t32 = 2433800193891110LLU;

	t32 = ((x161/x162)-(x163-x164));

	if (t32 != 17385943080579658461LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x165 = 0U;
	int64_t x166 = -62570LL;
	uint8_t x167 = 51U;
	int8_t x168 = INT8_MIN;
	volatile int64_t t33 = -517081565846620806LL;

	t33 = ((x165/x166)-(x167-x168));

	if (t33 != -179LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x169 = INT8_MAX;
	volatile uint16_t x170 = 110U;
	int64_t x171 = -7084262LL;
	int64_t x172 = 1533470012LL;
	int64_t t34 = 232674872969572LL;

	t34 = ((x169/x170)-(x171-x172));

	if (t34 != 1540554275LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x173 = 12962957183132762LLU;
	volatile int64_t x174 = INT64_MIN;
	volatile int16_t x175 = INT16_MIN;
	int64_t x176 = 309260920LL;
	uint64_t t35 = 6720749278704164LLU;

	t35 = ((x173/x174)-(x175-x176));

	if (t35 != 309293688LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x177 = INT32_MAX;
	static int64_t x178 = INT64_MAX;
	int64_t x179 = INT64_MIN;
	static int16_t x180 = -1;
	volatile int64_t t36 = INT64_MAX;

	t36 = ((x177/x178)-(x179-x180));

	if (t36 != INT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x181 = UINT8_MAX;
	static int8_t x182 = INT8_MAX;
	int64_t x183 = -1LL;
	static uint64_t x184 = 132234790691024LLU;
	volatile uint64_t t37 = 7520217LLU;

	t37 = ((x181/x182)-(x183-x184));

	if (t37 != 132234790691027LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x185 = -1;
	int64_t x186 = INT64_MIN;
	uint8_t x187 = 57U;
	int64_t x188 = -92216575905035074LL;
	int64_t t38 = 1857228502588349LL;

	t38 = ((x185/x186)-(x187-x188));

	if (t38 != -92216575905035131LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x197 = 29U;
	int64_t x198 = -1LL;
	volatile int8_t x199 = 1;
	int16_t x200 = 9461;

	t39 = ((x197/x198)-(x199-x200));

	if (t39 != 9431LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x201 = 2449849998051279LLU;
	int64_t x202 = -1LL;
	int16_t x203 = INT16_MAX;
	uint32_t x204 = 42302748U;

	t40 = ((x201/x202)-(x203-x204));

	if (t40 != 18446744069456854301LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x205 = 336316043929LLU;
	int8_t x206 = -2;
	uint32_t x207 = UINT32_MAX;
	volatile uint64_t t41 = 5755095LLU;

	t41 = ((x205/x206)-(x207-x208));

	if (t41 != 18446744069414584388LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x213 = -1LL;
	uint8_t x214 = 1U;
	volatile uint64_t x215 = 38695879787LLU;
	int32_t x216 = 1;
	volatile uint64_t t42 = 1513587LLU;

	t42 = ((x213/x214)-(x215-x216));

	if (t42 != 18446744035013671829LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x217 = UINT16_MAX;
	uint16_t x218 = 1U;
	uint16_t x219 = 77U;
	int8_t x220 = 1;

	t43 = ((x217/x218)-(x219-x220));

	if (t43 != 65459) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x222 = -1LL;
	int16_t x223 = 1872;
	int64_t x224 = -22019LL;

	t44 = ((x221/x222)-(x223-x224));

	if (t44 != -24146LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x225 = 0;
	static int8_t x226 = INT8_MAX;
	volatile uint64_t t45 = 58762103557134LLU;

	t45 = ((x225/x226)-(x227-x228));

	if (t45 != 2603150094LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x229 = INT64_MAX;
	static uint32_t x230 = 180800U;
	int32_t x231 = INT32_MAX;
	volatile uint32_t x232 = 463828425U;
	volatile int64_t t46 = -47403012LL;

	t46 = ((x229/x230)-(x231-x232));

	if (t46 != 51012542212337LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x233 = 7U;
	static int32_t x234 = -29727919;
	uint64_t x235 = UINT64_MAX;
	uint8_t x236 = 7U;
	uint64_t t47 = 140619700628152LLU;

	t47 = ((x233/x234)-(x235-x236));

	if (t47 != 8LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x237 = INT32_MAX;
	int8_t x240 = INT8_MIN;
	volatile int32_t t48 = 738636;

	t48 = ((x237/x238)-(x239-x240));

	if (t48 != 8454144) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x243 = 7793;
	volatile int8_t x244 = -1;
	volatile int32_t t49 = -15;

	t49 = ((x241/x242)-(x243-x244));

	if (t49 != -7749) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x245 = -1LL;
	static int64_t x246 = INT64_MAX;
	volatile int8_t x247 = -30;
	int16_t x248 = -17;
	volatile int64_t t50 = 5292786870768858LL;

	t50 = ((x245/x246)-(x247-x248));

	if (t50 != 13LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x249 = INT16_MIN;
	int32_t x250 = INT32_MAX;
	uint32_t x252 = UINT32_MAX;

	t51 = ((x249/x250)-(x251-x252));

	if (t51 != 4294965133U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x253 = 805LL;
	volatile int64_t x254 = 14715611278LL;
	int64_t t52 = -4324235878541824523LL;

	t52 = ((x253/x254)-(x255-x256));

	if (t52 != 33580LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x257 = INT8_MIN;
	volatile uint16_t x258 = 12105U;
	int16_t x259 = 280;
	uint16_t x260 = 8915U;
	static volatile int32_t t53 = 165;

	t53 = ((x257/x258)-(x259-x260));

	if (t53 != 8635) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x261 = INT32_MIN;
	uint8_t x263 = 3U;
	int16_t x264 = -1;

	t54 = ((x261/x262)-(x263-x264));

	if (t54 != -179334) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint32_t x265 = 0U;
	volatile int16_t x266 = -109;
	int8_t x267 = -3;

	t55 = ((x265/x266)-(x267-x268));

	if (t55 != 2U) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x269 = UINT64_MAX;
	uint64_t x270 = 3653LLU;
	int64_t x271 = INT64_MIN;
	int64_t x272 = -822096779969903LL;
	volatile uint64_t t56 = 69079821LLU;

	t56 = ((x269/x270)-(x271-x272));

	if (t56 != 9227599692079653852LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x273 = -3;
	int32_t x274 = INT32_MIN;
	int16_t x276 = INT16_MIN;
	static volatile int32_t t57 = -37523182;

	t57 = ((x273/x274)-(x275-x276));

	if (t57 != -32720) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int16_t x277 = INT16_MAX;
	int8_t x278 = -30;
	int32_t x279 = -1;
	volatile uint64_t x280 = 6098001252433561129LLU;
	uint64_t t58 = 437LLU;

	t58 = ((x277/x278)-(x279-x280));

	if (t58 != 6098001252433560038LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x286 = INT32_MAX;
	uint16_t x287 = 7587U;
	volatile uint64_t t59 = 57916130714664054LLU;

	t59 = ((x285/x286)-(x287-x288));

	if (t59 != 287184LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x290 = 1419848U;
	int16_t x292 = 8327;
	uint32_t t60 = 51585318U;

	t60 = ((x289/x290)-(x291-x292));

	if (t60 != 8072U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x293 = INT32_MIN;
	int32_t x295 = INT32_MIN;
	int16_t x296 = INT16_MIN;
	volatile uint32_t t61 = 3125U;

	t61 = ((x293/x294)-(x295-x296));

	if (t61 != 2147450884U) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x297 = INT32_MIN;
	static volatile uint64_t x298 = 10140156LLU;
	static volatile int8_t x299 = -15;
	uint32_t x300 = 575207U;
	uint64_t t62 = 6847594942LLU;

	t62 = ((x297/x298)-(x299-x300));

	if (t62 != 1814883150319LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x301 = -1;
	int16_t x302 = 382;
	volatile uint16_t x303 = 15U;
	uint64_t x304 = 6171LLU;
	static volatile uint64_t t63 = 535999LLU;

	t63 = ((x301/x302)-(x303-x304));

	if (t63 != 6156LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint8_t x305 = 1U;
	int16_t x308 = -658;
	int32_t t64 = -59068;

	t64 = ((x305/x306)-(x307-x308));

	if (t64 != -658) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x309 = -1;
	uint32_t x310 = 8816488U;
	volatile uint32_t t65 = 138U;

	t65 = ((x309/x310)-(x311-x312));

	if (t65 != 2559546U) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x313 = UINT64_MAX;
	int64_t x315 = INT64_MIN;
	int16_t x316 = INT16_MIN;

	t66 = ((x313/x314)-(x315-x316));

	if (t66 != 9223372036854743041LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int8_t x317 = -1;
	static uint16_t x319 = 925U;
	int16_t x320 = INT16_MIN;
	int64_t t67 = -112378LL;

	t67 = ((x317/x318)-(x319-x320));

	if (t67 != -33693LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x321 = 0U;
	uint8_t x322 = 6U;
	static uint16_t x324 = 69U;
	int32_t t68 = -11025882;

	t68 = ((x321/x322)-(x323-x324));

	if (t68 != 197) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x325 = UINT8_MAX;
	int8_t x326 = INT8_MIN;
	volatile uint64_t x327 = UINT64_MAX;
	int32_t x328 = -1;
	volatile uint64_t t69 = UINT64_MAX;

	t69 = ((x325/x326)-(x327-x328));

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x330 = 1LLU;
	static uint16_t x331 = UINT16_MAX;
	volatile uint64_t t70 = 1LLU;

	t70 = ((x329/x330)-(x331-x332));

	if (t70 != 18446744073709490925LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x333 = UINT64_MAX;
	int16_t x335 = -1;
	uint64_t t71 = 7201LLU;

	t71 = ((x333/x334)-(x335-x336));

	if (t71 != 145249953336295810LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x337 = INT16_MIN;
	int64_t x338 = INT64_MAX;
	uint32_t x339 = 408U;
	uint16_t x340 = UINT16_MAX;
	volatile int64_t t72 = 153306261318029368LL;

	t72 = ((x337/x338)-(x339-x340));

	if (t72 != -4294902169LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x342 = INT16_MIN;
	volatile int16_t x343 = -35;
	uint16_t x344 = UINT16_MAX;
	uint64_t t73 = 84478LLU;

	t73 = ((x341/x342)-(x343-x344));

	if (t73 != 65570LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x345 = UINT8_MAX;
	int8_t x346 = 1;
	uint8_t x347 = 30U;
	uint64_t x348 = UINT64_MAX;

	t74 = ((x345/x346)-(x347-x348));

	if (t74 != 224LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x349 = 8429970178640648LLU;
	uint16_t x350 = 1U;
	uint32_t x351 = UINT32_MAX;
	static volatile int16_t x352 = 601;
	static volatile uint64_t t75 = 332LLU;

	t75 = ((x349/x350)-(x351-x352));

	if (t75 != 8429965883673954LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x358 = 109446LLU;
	uint64_t x359 = 97LLU;
	volatile uint16_t x360 = 33U;

	t76 = ((x357/x358)-(x359-x360));

	if (t76 != 19557LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x365 = 1237U;
	int32_t x366 = 67629;
	static uint32_t x367 = 932241U;
	static int64_t x368 = INT64_MAX;
	volatile int64_t t77 = -3LL;

	t77 = ((x365/x366)-(x367-x368));

	if (t77 != 9223372036853843566LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x369 = -1;
	uint16_t x370 = UINT16_MAX;
	volatile int64_t x371 = INT64_MAX;

	t78 = ((x369/x370)-(x371-x372));

	if (t78 != 9223373769210875694LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x373 = UINT16_MAX;
	int16_t x374 = INT16_MAX;
	int16_t x376 = 974;
	volatile int32_t t79 = 718;

	t79 = ((x373/x374)-(x375-x376));

	if (t79 != 10872902) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x378 = INT64_MAX;
	int8_t x379 = INT8_MAX;
	int16_t x380 = INT16_MAX;
	int64_t t80 = 3381032032401053394LL;

	t80 = ((x377/x378)-(x379-x380));

	if (t80 != 32639LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x381 = -1562;
	uint8_t x382 = 17U;
	int32_t x384 = -44645808;
	volatile int64_t t81 = -136315030206367638LL;

	t81 = ((x381/x382)-(x383-x384));

	if (t81 != 74215465480762724LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x385 = 0U;
	volatile int32_t x386 = 44560991;
	int16_t x387 = INT16_MIN;
	uint32_t x388 = UINT32_MAX;
	static uint32_t t82 = 11698788U;

	t82 = ((x385/x386)-(x387-x388));

	if (t82 != 32767U) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x389 = 12LLU;
	uint64_t x390 = 281LLU;
	int8_t x391 = 26;
	static int8_t x392 = -1;
	volatile uint64_t t83 = 55LLU;

	t83 = ((x389/x390)-(x391-x392));

	if (t83 != 18446744073709551589LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x393 = -1LL;
	int64_t x394 = 1948998261842041637LL;
	int64_t x396 = INT64_MIN;

	t84 = ((x393/x394)-(x395-x396));

	if (t84 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x397 = 18;
	int8_t x398 = -1;
	int8_t x400 = -10;
	volatile int32_t t85 = 3088083;

	t85 = ((x397/x398)-(x399-x400));

	if (t85 != -65563) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x405 = 2886185671896971LL;
	uint64_t x406 = 737976767011LLU;
	int16_t x408 = INT16_MIN;

	t86 = ((x405/x406)-(x407-x408));

	if (t86 != 18446744073709522741LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int32_t x409 = 969771026;
	static uint8_t x410 = 1U;
	volatile int64_t x412 = INT64_MIN;

	t87 = ((x409/x410)-(x411-x412));

	if (t87 != -9223372035885001837LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x414 = -1;
	uint32_t x415 = UINT32_MAX;
	uint64_t x416 = 227837801945195207LLU;

	t88 = ((x413/x414)-(x415-x416));

	if (t88 != 227837797650227913LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x417 = 1536017U;

	t89 = ((x417/x418)-(x419-x420));

	if (t89 != 18446744073699616523LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x425 = INT64_MIN;
	int64_t x426 = INT64_MIN;
	uint8_t x427 = 90U;
	int16_t x428 = -834;
	int64_t t90 = -6210288LL;

	t90 = ((x425/x426)-(x427-x428));

	if (t90 != -923LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x429 = -15066298LL;
	volatile int16_t x430 = INT16_MIN;
	uint64_t x432 = 5638708LLU;
	static volatile uint64_t t91 = 544331118234LLU;

	t91 = ((x429/x430)-(x431-x432));

	if (t91 != 5671935LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x433 = 1U;
	uint64_t x434 = 143LLU;
	int8_t x435 = -1;
	int16_t x436 = INT16_MIN;

	t92 = ((x433/x434)-(x435-x436));

	if (t92 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x441 = UINT64_MAX;
	uint32_t x442 = 1520246U;
	int64_t x443 = -1LL;
	volatile int8_t x444 = INT8_MIN;
	uint64_t t93 = 23LLU;

	t93 = ((x441/x442)-(x443-x444));

	if (t93 != 12134052037312LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x449 = INT16_MIN;
	int8_t x450 = 26;
	int16_t x452 = INT16_MAX;
	uint32_t t94 = 5U;

	t94 = ((x449/x450)-(x451-x452));

	if (t94 != 2853493605U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x454 = INT64_MIN;
	uint8_t x455 = 37U;
	static int64_t x456 = -1LL;
	int64_t t95 = 38892407376124LL;

	t95 = ((x453/x454)-(x455-x456));

	if (t95 != -38LL) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int64_t x457 = 265641999184LL;
	uint32_t x458 = UINT32_MAX;
	static volatile uint8_t x460 = UINT8_MAX;
	volatile uint64_t t96 = 49369LLU;

	t96 = ((x457/x458)-(x459-x460));

	if (t96 != 317LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x465 = 1563U;
	uint32_t x466 = UINT32_MAX;
	static int64_t x467 = 95873LL;
	volatile int64_t t97 = -30447123LL;

	t97 = ((x465/x466)-(x467-x468));

	if (t97 != -95873LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x469 = INT64_MIN;
	int32_t x470 = 3;
	uint8_t x471 = 7U;
	uint32_t x472 = 31388U;
	volatile int64_t t98 = -402340871094815201LL;

	t98 = ((x469/x470)-(x471-x472));

	if (t98 != -3074457349913194517LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x473 = INT8_MIN;
	volatile uint64_t x474 = 661795008LLU;
	int8_t x475 = -1;
	volatile uint16_t x476 = 80U;
	static uint64_t t99 = 75495168LLU;

	t99 = ((x473/x474)-(x475-x476));

	if (t99 != 27873803676LLU) { NG(); } else { ; }
	
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

