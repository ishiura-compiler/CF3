#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x5 = INT8_MIN;
int8_t x7 = -34;
volatile int32_t t1 = -59666;
int8_t x13 = INT8_MAX;
volatile int8_t x19 = INT8_MIN;
int8_t x24 = -1;
uint32_t x37 = UINT32_MAX;
uint32_t x40 = 7859U;
volatile uint64_t t7 = 144LLU;
int8_t x47 = INT8_MIN;
volatile uint64_t t8 = 2389054LLU;
uint8_t x50 = UINT8_MAX;
static uint8_t x53 = 91U;
int64_t x55 = INT64_MAX;
volatile int64_t x70 = -1LL;
static volatile uint64_t t11 = 1173815610349193LLU;
int16_t x74 = INT16_MIN;
int8_t x75 = -1;
int16_t x93 = 3;
int16_t x95 = 3988;
volatile int8_t x101 = INT8_MAX;
volatile int8_t x114 = -1;
int64_t x116 = INT64_MAX;
uint8_t x121 = UINT8_MAX;
volatile int32_t x125 = -1;
int16_t x131 = INT16_MAX;
static volatile int16_t x136 = -843;
int32_t x144 = INT32_MIN;
volatile int64_t x161 = INT64_MIN;
uint32_t x163 = 245531658U;
int32_t x176 = INT32_MIN;
volatile int32_t x181 = -1;
int64_t x186 = INT64_MAX;
volatile int64_t x194 = 182194896421LL;
volatile int64_t t32 = -6040LL;
int8_t x205 = -1;
int64_t x207 = -1LL;
uint64_t t34 = 1873LLU;
static int64_t x217 = -2175858883415320669LL;
static volatile uint64_t t41 = 96101940254889488LLU;
static volatile uint64_t x251 = UINT64_MAX;
volatile int8_t x253 = -1;
int8_t x255 = INT8_MAX;
int64_t x272 = -82712396730102839LL;
uint16_t x278 = 1U;
volatile int16_t x280 = INT16_MIN;
int16_t x284 = -1;
static volatile int32_t t50 = 30;
int16_t x292 = -1822;
volatile int64_t t51 = -216LL;
uint64_t x296 = 30017780365LLU;
static uint64_t t52 = 180811664367LLU;
int64_t x297 = -1LL;
volatile int8_t x305 = INT8_MIN;
volatile uint64_t x312 = 87561388450111101LLU;
volatile uint64_t t55 = 58745653LLU;
int64_t x315 = INT64_MAX;
volatile int64_t t57 = -24302LL;
int32_t x334 = 1;
volatile int64_t x336 = INT64_MIN;
volatile int8_t x359 = INT8_MIN;
volatile uint64_t x381 = 2LLU;
volatile uint64_t t68 = 278022906134916LLU;
volatile int64_t t71 = -31743908239LL;
int32_t x397 = 1629;
uint64_t t72 = 745518LLU;
volatile uint16_t x405 = UINT16_MAX;
static int16_t x406 = -1;
volatile int64_t x411 = -1LL;
uint64_t t76 = 2172695528LLU;
int64_t x430 = 25LL;
int8_t x438 = INT8_MIN;
volatile uint8_t x440 = 1U;
volatile int64_t t78 = -414001135LL;
int16_t x447 = 737;
volatile uint32_t x454 = 7U;
int8_t x455 = -1;
volatile int64_t x456 = -114537LL;
int8_t x464 = -1;
volatile uint64_t t83 = 22418786664747LLU;
volatile int8_t x469 = INT8_MIN;
int32_t x470 = -1;
volatile uint32_t x472 = UINT32_MAX;
volatile uint32_t t84 = 307022U;
static int64_t t85 = -1103088519LL;
volatile uint32_t x477 = 3504360U;
int8_t x481 = -1;
int64_t x482 = INT64_MIN;
int32_t x487 = INT32_MIN;
static int64_t t88 = -113620LL;
volatile int32_t t89 = 1298;
static volatile int64_t x493 = INT64_MAX;
static volatile int32_t x503 = -1;
static uint16_t x513 = 24U;
uint64_t x514 = 100065103227774LLU;
static int64_t x516 = -176314975169985LL;
volatile uint64_t t95 = 159701LLU;
static int64_t x525 = INT64_MIN;
int8_t x529 = INT8_MAX;
int16_t x530 = 4530;
volatile uint16_t x537 = 11261U;
static volatile uint64_t t99 = 7042600566691LLU;


void f0(void) {
	int32_t x1 = -1;
	int32_t x2 = -1907;
	int8_t x3 = 17;
	static uint8_t x4 = 9U;
	static int32_t t0 = -1;

	t0 = ((x1/x2)%(x3&x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x6 = UINT8_MAX;
	volatile int8_t x8 = INT8_MIN;

	t1 = ((x5/x6)%(x7&x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x9 = 46U;
	int32_t x10 = -450813483;
	volatile int64_t x11 = -434216326901LL;
	uint16_t x12 = 390U;
	int64_t t2 = 4LL;

	t2 = ((x9/x10)%(x11&x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = INT16_MIN;
	uint64_t x15 = UINT64_MAX;
	int64_t x16 = -1LL;
	static uint64_t t3 = 11LLU;

	t3 = ((x13/x14)%(x15&x16));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 765U;
	uint16_t x18 = 7U;
	uint32_t x20 = 136508U;
	volatile uint32_t t4 = 1450626119U;

	t4 = ((x17/x18)%(x19&x20));

	if (t4 != 109U) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 2253U;
	int16_t x22 = INT16_MAX;
	static int32_t x23 = INT32_MIN;
	static int32_t t5 = -44618;

	t5 = ((x21/x22)%(x23&x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x38 = INT16_MIN;
	static volatile int64_t x39 = INT64_MAX;
	int64_t t6 = 137176838110005LL;

	t6 = ((x37/x38)%(x39&x40));

	if (t6 != 1LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x41 = 6U;
	static int16_t x42 = INT16_MIN;
	int8_t x43 = -1;
	volatile uint64_t x44 = UINT64_MAX;

	t7 = ((x41/x42)%(x43&x44));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x45 = 8LLU;
	int32_t x46 = 931817;
	static int32_t x48 = -585;

	t8 = ((x45/x46)%(x47&x48));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x49 = 14630940463LLU;
	static int16_t x51 = INT16_MIN;
	static int64_t x52 = -1LL;
	uint64_t t9 = 8158432145LLU;

	t9 = ((x49/x50)%(x51&x52));

	if (t9 != 57376237LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x54 = UINT32_MAX;
	static int16_t x56 = -9;
	int64_t t10 = 16321607096LL;

	t10 = ((x53/x54)%(x55&x56));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x69 = -1;
	int64_t x71 = -1LL;
	static uint64_t x72 = 990168702738319LLU;

	t11 = ((x69/x70)%(x71&x72));

	if (t11 != 1LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x73 = INT64_MIN;
	int64_t x76 = INT64_MAX;
	static volatile int64_t t12 = 0LL;

	t12 = ((x73/x74)%(x75&x76));

	if (t12 != 281474976710656LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x77 = 0;
	static int16_t x78 = -1;
	uint8_t x79 = 14U;
	int32_t x80 = -1796173;
	static int32_t t13 = -1116617;

	t13 = ((x77/x78)%(x79&x80));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int32_t x94 = INT32_MIN;
	uint32_t x96 = UINT32_MAX;
	uint32_t t14 = 377043U;

	t14 = ((x93/x94)%(x95&x96));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x97 = INT32_MIN;
	int16_t x98 = -595;
	uint64_t x99 = 22LLU;
	int64_t x100 = -100060688LL;
	static volatile uint64_t t15 = 72LLU;

	t15 = ((x97/x98)%(x99&x100));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x102 = 1U;
	int8_t x103 = INT8_MAX;
	uint64_t x104 = UINT64_MAX;
	uint64_t t16 = 76232618564713LLU;

	t16 = ((x101/x102)%(x103&x104));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x109 = 1;
	volatile int32_t x110 = INT32_MIN;
	static volatile int16_t x111 = -1;
	int8_t x112 = -1;
	int32_t t17 = 93925;

	t17 = ((x109/x110)%(x111&x112));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x113 = INT8_MIN;
	uint16_t x115 = UINT16_MAX;
	int64_t t18 = -7069653297776008LL;

	t18 = ((x113/x114)%(x115&x116));

	if (t18 != 128LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x122 = -15;
	static int64_t x123 = -1LL;
	int64_t x124 = INT64_MAX;
	volatile int64_t t19 = 100209LL;

	t19 = ((x121/x122)%(x123&x124));

	if (t19 != -17LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x126 = INT64_MIN;
	volatile uint16_t x127 = UINT16_MAX;
	volatile int8_t x128 = -40;
	static int64_t t20 = -24095368558LL;

	t20 = ((x125/x126)%(x127&x128));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x129 = 27610U;
	static uint8_t x130 = 3U;
	static uint16_t x132 = 22225U;
	int32_t t21 = 2037623;

	t21 = ((x129/x130)%(x131&x132));

	if (t21 != 9203) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x133 = 1;
	uint32_t x134 = 196983553U;
	volatile uint64_t x135 = 161578421LLU;
	volatile uint64_t t22 = 3768942LLU;

	t22 = ((x133/x134)%(x135&x136));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x137 = 115U;
	uint32_t x138 = UINT32_MAX;
	volatile int64_t x139 = 45626677956LL;
	static int64_t x140 = 452755301222586858LL;
	volatile int64_t t23 = 92813LL;

	t23 = ((x137/x138)%(x139&x140));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x141 = INT32_MIN;
	uint32_t x142 = 94475694U;
	int8_t x143 = -1;
	volatile uint32_t t24 = 33U;

	t24 = ((x141/x142)%(x143&x144));

	if (t24 != 22U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x153 = INT8_MIN;
	static int64_t x154 = INT64_MIN;
	int16_t x155 = -1;
	static uint64_t x156 = 181LLU;
	volatile uint64_t t25 = 34681913101LLU;

	t25 = ((x153/x154)%(x155&x156));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x162 = INT8_MIN;
	uint32_t x164 = 17123U;
	volatile int64_t t26 = -71251226LL;

	t26 = ((x161/x162)%(x163&x164));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x165 = -1LL;
	uint16_t x166 = UINT16_MAX;
	int8_t x167 = -1;
	uint8_t x168 = UINT8_MAX;
	volatile int64_t t27 = 268187049868550LL;

	t27 = ((x165/x166)%(x167&x168));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x173 = 7U;
	static int64_t x174 = -163898115744438LL;
	int32_t x175 = INT32_MIN;
	int64_t t28 = 226865742998359LL;

	t28 = ((x173/x174)%(x175&x176));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x182 = INT8_MIN;
	uint16_t x183 = UINT16_MAX;
	volatile uint8_t x184 = UINT8_MAX;
	static volatile int32_t t29 = -42498;

	t29 = ((x181/x182)%(x183&x184));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x185 = -1;
	int64_t x187 = -1392530000LL;
	uint8_t x188 = UINT8_MAX;
	static volatile int64_t t30 = -209661510089LL;

	t30 = ((x185/x186)%(x187&x188));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x193 = INT8_MAX;
	uint64_t x195 = 545101561821LLU;
	int64_t x196 = -57725395441LL;
	volatile uint64_t t31 = 4309852737LLU;

	t31 = ((x193/x194)%(x195&x196));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x197 = 73U;
	int64_t x198 = -1682LL;
	static uint8_t x199 = UINT8_MAX;
	volatile int32_t x200 = 24812818;

	t32 = ((x197/x198)%(x199&x200));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x206 = 12U;
	uint32_t x208 = UINT32_MAX;
	volatile int64_t t33 = 326663804830420708LL;

	t33 = ((x205/x206)%(x207&x208));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x209 = -1;
	static uint64_t x210 = 822386793625831548LLU;
	static uint32_t x211 = 1583490U;
	volatile int32_t x212 = -1;

	t34 = ((x209/x210)%(x211&x212));

	if (t34 != 22LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x213 = 3U;
	int16_t x214 = INT16_MAX;
	int64_t x215 = -1331699844LL;
	volatile uint64_t x216 = 757706034LLU;
	static uint64_t t35 = 102LLU;

	t35 = ((x213/x214)%(x215&x216));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x218 = 24U;
	static int64_t x219 = INT64_MIN;
	int16_t x220 = -1;
	volatile int64_t t36 = -13274927709LL;

	t36 = ((x217/x218)%(x219&x220));

	if (t36 != -90660786808971694LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x221 = 31347LLU;
	int8_t x222 = 3;
	static uint64_t x223 = 110333621LLU;
	int16_t x224 = 1;
	volatile uint64_t t37 = 80284LLU;

	t37 = ((x221/x222)%(x223&x224));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x229 = 4U;
	int16_t x230 = 1;
	uint64_t x231 = 342139385851469LLU;
	static uint8_t x232 = 62U;
	uint64_t t38 = 66503135258381LLU;

	t38 = ((x229/x230)%(x231&x232));

	if (t38 != 4LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x233 = -1;
	int16_t x234 = -802;
	static int64_t x235 = 1342964552327LL;
	uint32_t x236 = UINT32_MAX;
	int64_t t39 = -6700154382735069LL;

	t39 = ((x233/x234)%(x235&x236));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x237 = -1;
	volatile int64_t x238 = -25238LL;
	static int8_t x239 = INT8_MIN;
	int8_t x240 = INT8_MIN;
	volatile int64_t t40 = -302LL;

	t40 = ((x237/x238)%(x239&x240));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x241 = 6LLU;
	int16_t x242 = -160;
	static int8_t x243 = INT8_MIN;
	int64_t x244 = INT64_MIN;

	t41 = ((x241/x242)%(x243&x244));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x245 = UINT16_MAX;
	int64_t x246 = -1LL;
	static uint64_t x247 = UINT64_MAX;
	int64_t x248 = INT64_MIN;
	uint64_t t42 = 3646LLU;

	t42 = ((x245/x246)%(x247&x248));

	if (t42 != 9223372036854710273LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x249 = INT8_MIN;
	int8_t x250 = INT8_MAX;
	int32_t x252 = 4725015;
	static uint64_t t43 = 70332LLU;

	t43 = ((x249/x250)%(x251&x252));

	if (t43 != 411765LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x254 = -38;
	int64_t x256 = 97983237LL;
	int64_t t44 = -1791820490249357LL;

	t44 = ((x253/x254)%(x255&x256));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x265 = 10U;
	int8_t x266 = INT8_MAX;
	int64_t x267 = INT64_MAX;
	int64_t x268 = INT64_MAX;
	volatile int64_t t45 = 94232LL;

	t45 = ((x265/x266)%(x267&x268));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x269 = 20550U;
	volatile uint32_t x270 = 122490U;
	int8_t x271 = INT8_MAX;
	int64_t t46 = 2977124875LL;

	t46 = ((x269/x270)%(x271&x272));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x273 = INT8_MIN;
	int32_t x274 = INT32_MIN;
	volatile uint32_t x275 = 60667U;
	int16_t x276 = INT16_MIN;
	volatile uint32_t t47 = 671169298U;

	t47 = ((x273/x274)%(x275&x276));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x277 = -1LL;
	int64_t x279 = 533356347LL;
	static int64_t t48 = 388687378764LL;

	t48 = ((x277/x278)%(x279&x280));

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x281 = INT64_MAX;
	int64_t x282 = INT64_MIN;
	static volatile int32_t x283 = INT32_MIN;
	int64_t t49 = -171183717709281444LL;

	t49 = ((x281/x282)%(x283&x284));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x285 = INT8_MAX;
	static uint16_t x286 = UINT16_MAX;
	int32_t x287 = INT32_MIN;
	static int8_t x288 = -1;

	t50 = ((x285/x286)%(x287&x288));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x289 = INT64_MIN;
	int16_t x290 = INT16_MAX;
	volatile uint32_t x291 = UINT32_MAX;

	t51 = ((x289/x290)%(x291&x292));

	if (t51 != -119672388LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x293 = 41051448;
	uint8_t x294 = 1U;
	int64_t x295 = INT64_MAX;

	t52 = ((x293/x294)%(x295&x296));

	if (t52 != 41051448LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x298 = UINT32_MAX;
	volatile int32_t x299 = INT32_MAX;
	int32_t x300 = -28311444;
	int64_t t53 = 1LL;

	t53 = ((x297/x298)%(x299&x300));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x306 = 85;
	volatile int64_t x307 = -1LL;
	int8_t x308 = INT8_MAX;
	static int64_t t54 = -820065067813LL;

	t54 = ((x305/x306)%(x307&x308));

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x309 = INT8_MIN;
	int8_t x310 = INT8_MIN;
	volatile uint64_t x311 = UINT64_MAX;

	t55 = ((x309/x310)%(x311&x312));

	if (t55 != 1LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x313 = 7050;
	volatile uint8_t x314 = 47U;
	volatile int16_t x316 = INT16_MIN;
	int64_t t56 = 911LL;

	t56 = ((x313/x314)%(x315&x316));

	if (t56 != 150LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x325 = 3U;
	int64_t x326 = -1LL;
	int32_t x327 = INT32_MAX;
	uint8_t x328 = UINT8_MAX;

	t57 = ((x325/x326)%(x327&x328));

	if (t57 != -3LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x329 = INT32_MAX;
	static uint8_t x330 = 3U;
	int16_t x331 = INT16_MAX;
	volatile int16_t x332 = -1;
	int32_t t58 = -1027052;

	t58 = ((x329/x330)%(x331&x332));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x333 = INT8_MIN;
	int64_t x335 = INT64_MIN;
	int64_t t59 = 3713462LL;

	t59 = ((x333/x334)%(x335&x336));

	if (t59 != -128LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x341 = 6;
	int16_t x342 = -3;
	uint32_t x343 = 46U;
	static uint16_t x344 = 1276U;
	uint32_t t60 = 185U;

	t60 = ((x341/x342)%(x343&x344));

	if (t60 != 2U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x345 = -25;
	volatile int16_t x346 = INT16_MIN;
	int8_t x347 = -63;
	int16_t x348 = -3;
	static volatile int32_t t61 = -15;

	t61 = ((x345/x346)%(x347&x348));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x349 = UINT64_MAX;
	static uint8_t x350 = 14U;
	static uint64_t x351 = 86353854326995LLU;
	int16_t x352 = INT16_MAX;
	uint64_t t62 = 1325977251335969247LLU;

	t62 = ((x349/x350)%(x351&x352));

	if (t62 != 1756LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x357 = INT32_MAX;
	int64_t x358 = 9LL;
	static int8_t x360 = -1;
	int64_t t63 = -460LL;

	t63 = ((x357/x358)%(x359&x360));

	if (t63 != 14LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x361 = -1;
	uint64_t x362 = 607638493LLU;
	int8_t x363 = INT8_MIN;
	int32_t x364 = INT32_MAX;
	static volatile uint64_t t64 = 87051370LLU;

	t64 = ((x361/x362)%(x363&x364));

	if (t64 != 293320745LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x369 = 58612239LLU;
	volatile uint8_t x370 = 38U;
	volatile int32_t x371 = INT32_MAX;
	uint64_t x372 = 859299692LLU;
	volatile uint64_t t65 = 218318894070LLU;

	t65 = ((x369/x370)%(x371&x372));

	if (t65 != 1542427LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int16_t x373 = 116;
	volatile int16_t x374 = INT16_MIN;
	int64_t x375 = INT64_MAX;
	uint8_t x376 = 7U;
	volatile int64_t t66 = 118206191378743LL;

	t66 = ((x373/x374)%(x375&x376));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x377 = 3;
	static int32_t x378 = 1;
	static int32_t x379 = INT32_MIN;
	int16_t x380 = -1;
	int32_t t67 = -4937193;

	t67 = ((x377/x378)%(x379&x380));

	if (t67 != 3) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x382 = INT8_MIN;
	int32_t x383 = 58;
	uint16_t x384 = 41U;

	t68 = ((x381/x382)%(x383&x384));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x385 = INT16_MIN;
	int32_t x386 = INT32_MIN;
	int32_t x387 = INT32_MIN;
	volatile int8_t x388 = -1;
	int32_t t69 = 44;

	t69 = ((x385/x386)%(x387&x388));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x389 = 135772976LLU;
	volatile uint8_t x390 = 7U;
	int64_t x391 = INT64_MIN;
	int32_t x392 = INT32_MIN;
	uint64_t t70 = 11LLU;

	t70 = ((x389/x390)%(x391&x392));

	if (t70 != 19396139LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x393 = 1LL;
	int64_t x394 = INT64_MIN;
	int16_t x395 = INT16_MIN;
	uint32_t x396 = UINT32_MAX;

	t71 = ((x393/x394)%(x395&x396));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint64_t x398 = UINT64_MAX;
	volatile uint16_t x399 = UINT16_MAX;
	int16_t x400 = -1;

	t72 = ((x397/x398)%(x399&x400));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x407 = INT64_MIN;
	volatile int64_t x408 = INT64_MIN;
	volatile int64_t t73 = -320918LL;

	t73 = ((x405/x406)%(x407&x408));

	if (t73 != -65535LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x409 = -102;
	static int8_t x410 = INT8_MIN;
	volatile int16_t x412 = INT16_MIN;
	int64_t t74 = 102LL;

	t74 = ((x409/x410)%(x411&x412));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x417 = INT16_MAX;
	volatile int8_t x418 = -1;
	static int16_t x419 = INT16_MIN;
	uint32_t x420 = 155825733U;
	volatile uint32_t t75 = 2U;

	t75 = ((x417/x418)%(x419&x420));

	if (t75 != 88014849U) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint64_t x425 = 28LLU;
	volatile int64_t x426 = 8510413152401437LL;
	static uint64_t x427 = UINT64_MAX;
	static int32_t x428 = INT32_MIN;

	t76 = ((x425/x426)%(x427&x428));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x429 = 4937711662096703417LLU;
	int16_t x431 = INT16_MAX;
	volatile int32_t x432 = -31866;
	uint64_t t77 = 136308633LLU;

	t77 = ((x429/x430)%(x431&x432));

	if (t77 != 542LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x437 = 2422973139LL;
	int64_t x439 = 23823591620613LL;

	t78 = ((x437/x438)%(x439&x440));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x445 = INT8_MIN;
	int32_t x446 = INT32_MIN;
	int64_t x448 = -1LL;
	int64_t t79 = -1432012625351LL;

	t79 = ((x445/x446)%(x447&x448));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x449 = 1LLU;
	uint64_t x450 = 1454413118332875LLU;
	uint8_t x451 = UINT8_MAX;
	int16_t x452 = -1;
	volatile uint64_t t80 = 4119068107177LLU;

	t80 = ((x449/x450)%(x451&x452));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x453 = 1;
	int64_t t81 = 1LL;

	t81 = ((x453/x454)%(x455&x456));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x461 = -23;
	static uint8_t x462 = UINT8_MAX;
	uint64_t x463 = UINT64_MAX;
	uint64_t t82 = 16LLU;

	t82 = ((x461/x462)%(x463&x464));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x465 = -1;
	uint64_t x466 = 138896614762150LLU;
	static int16_t x467 = -1;
	uint8_t x468 = 43U;

	t83 = ((x465/x466)%(x467&x468));

	if (t83 != 25LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x471 = INT8_MAX;

	t84 = ((x469/x470)%(x471&x472));

	if (t84 != 1U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x473 = 601492565325248LL;
	uint16_t x474 = UINT16_MAX;
	uint16_t x475 = 58U;
	uint16_t x476 = 4411U;

	t85 = ((x473/x474)%(x475&x476));

	if (t85 != 32LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x478 = INT32_MIN;
	static int16_t x479 = INT16_MIN;
	volatile int64_t x480 = INT64_MIN;
	volatile int64_t t86 = 2578LL;

	t86 = ((x477/x478)%(x479&x480));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x483 = 7674LLU;
	static uint64_t x484 = 61184238511697156LLU;
	uint64_t t87 = 51LLU;

	t87 = ((x481/x482)%(x483&x484));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x485 = INT32_MIN;
	int16_t x486 = -7;
	int64_t x488 = INT64_MIN;

	t88 = ((x485/x486)%(x487&x488));

	if (t88 != 306783378LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x489 = 51;
	uint16_t x490 = 1818U;
	int16_t x491 = -47;
	static int8_t x492 = INT8_MIN;

	t89 = ((x489/x490)%(x491&x492));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x494 = UINT64_MAX;
	int32_t x495 = 1214;
	int8_t x496 = -1;
	volatile uint64_t t90 = 126878859592790LLU;

	t90 = ((x493/x494)%(x495&x496));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x497 = INT16_MAX;
	volatile uint32_t x498 = 127342532U;
	int16_t x499 = -1;
	int32_t x500 = 26008;
	uint32_t t91 = 177912U;

	t91 = ((x497/x498)%(x499&x500));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x501 = -1LL;
	uint64_t x502 = UINT64_MAX;
	static int16_t x504 = -2451;
	static volatile uint64_t t92 = 2722561219037046554LLU;

	t92 = ((x501/x502)%(x503&x504));

	if (t92 != 1LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x509 = UINT32_MAX;
	int8_t x510 = 37;
	int8_t x511 = INT8_MAX;
	int32_t x512 = 25;
	static volatile uint32_t t93 = 25365325U;

	t93 = ((x509/x510)%(x511&x512));

	if (t93 != 22U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x515 = INT8_MIN;
	static uint64_t t94 = 14845LLU;

	t94 = ((x513/x514)%(x515&x516));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x521 = UINT64_MAX;
	int8_t x522 = INT8_MAX;
	static volatile int64_t x523 = -31435LL;
	int64_t x524 = -1LL;

	t95 = ((x521/x522)%(x523&x524));

	if (t95 != 145249953336295682LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x526 = UINT32_MAX;
	int64_t x527 = -1LL;
	static int32_t x528 = INT32_MIN;
	volatile int64_t t96 = -8557990LL;

	t96 = ((x525/x526)%(x527&x528));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x531 = INT8_MIN;
	static int64_t x532 = INT64_MIN;
	volatile int64_t t97 = -27365265423389LL;

	t97 = ((x529/x530)%(x531&x532));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x533 = UINT64_MAX;
	volatile int64_t x534 = -1LL;
	volatile uint16_t x535 = UINT16_MAX;
	int32_t x536 = -1;
	static volatile uint64_t t98 = 93LLU;

	t98 = ((x533/x534)%(x535&x536));

	if (t98 != 1LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x538 = INT64_MIN;
	volatile uint64_t x539 = 721218429395414130LLU;
	static int8_t x540 = INT8_MIN;

	t99 = ((x537/x538)%(x539&x540));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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
