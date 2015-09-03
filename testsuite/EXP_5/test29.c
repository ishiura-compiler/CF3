#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint32_t x6 = 7344U;
uint8_t x27 = 19U;
uint8_t x36 = 2U;
static uint8_t x37 = UINT8_MAX;
uint32_t t6 = 24U;
int8_t x44 = INT8_MAX;
int32_t t7 = -101;
volatile uint16_t x49 = 1U;
int32_t x59 = 1401;
uint32_t x61 = 246U;
uint16_t x62 = 344U;
uint32_t x63 = UINT32_MAX;
uint8_t x78 = UINT8_MAX;
volatile int16_t x82 = INT16_MIN;
int64_t x84 = -10341115LL;
int8_t x95 = -1;
static int32_t t14 = -8;
static uint16_t x102 = 1U;
volatile int32_t x112 = INT32_MIN;
int8_t x123 = INT8_MAX;
int64_t x124 = -1LL;
int32_t x133 = INT32_MIN;
int32_t x140 = -1;
int32_t x141 = 631;
uint8_t x144 = UINT8_MAX;
int16_t x158 = -1;
volatile int32_t x161 = INT32_MIN;
int32_t x162 = INT32_MAX;
volatile uint32_t t23 = 5297U;
static volatile uint64_t x170 = UINT64_MAX;
uint64_t t24 = 16261541315LLU;
uint16_t x186 = 12U;
volatile int8_t x190 = INT8_MIN;
static volatile uint64_t x191 = 7111317350884LLU;
uint16_t x201 = 506U;
static int64_t t29 = -1477984892004950894LL;
int64_t x205 = INT64_MAX;
uint32_t x208 = UINT32_MAX;
uint64_t x209 = 295LLU;
int64_t x220 = -1LL;
int16_t x222 = INT16_MIN;
int64_t x242 = INT64_MIN;
int16_t x247 = INT16_MIN;
static int8_t x248 = 8;
uint16_t x257 = UINT16_MAX;
uint16_t x267 = 0U;
uint64_t t40 = 3707370653LLU;
volatile int8_t x286 = INT8_MAX;
static int64_t x300 = INT64_MAX;
uint64_t x305 = 1012458883LLU;
volatile uint8_t x306 = UINT8_MAX;
uint32_t x307 = 2834U;
volatile uint32_t x313 = 2141U;
static uint64_t t44 = 304850LLU;
uint8_t x319 = UINT8_MAX;
volatile int16_t x333 = INT16_MIN;
int16_t x337 = INT16_MIN;
int64_t x343 = -1LL;
uint32_t x344 = UINT32_MAX;
volatile uint64_t t49 = 0LLU;
uint64_t x362 = 2532LLU;
uint8_t x366 = 17U;
static int32_t x371 = -104;
uint64_t x372 = 40421990614342LLU;
int8_t x374 = INT8_MAX;
volatile int16_t x376 = 5;
static volatile uint64_t t55 = 49LLU;
static int8_t x397 = INT8_MIN;
uint32_t x405 = UINT32_MAX;
int32_t x415 = 836035263;
int8_t x425 = INT8_MAX;
static int32_t x428 = -1;
volatile uint64_t x431 = 30107514687LLU;
int16_t x456 = 16;
int8_t x457 = -11;
volatile int64_t x464 = -1LL;
volatile int64_t t66 = INT64_MIN;
uint64_t x471 = UINT64_MAX;
uint64_t t67 = 585922263656321692LLU;
static volatile int64_t x482 = -8LL;
int64_t x483 = -1LL;
uint8_t x494 = 4U;
int8_t x497 = -3;
int64_t x500 = -1LL;
uint32_t x502 = 2U;
uint32_t x514 = 2U;
static uint32_t x526 = UINT32_MAX;
int16_t x530 = 15;
uint16_t x531 = 8066U;
int8_t x541 = INT8_MAX;
static uint64_t x543 = 669069182927LLU;
uint64_t x552 = UINT64_MAX;
int32_t x554 = -1;
volatile int32_t x559 = 27032132;
int32_t x562 = 1;
volatile uint32_t t85 = 1813U;
static int32_t x567 = -1;
volatile uint64_t t90 = 57LLU;
uint32_t t92 = 32528U;
volatile uint64_t x651 = 19914490112246LLU;
int32_t x654 = INT32_MAX;
uint64_t x670 = UINT64_MAX;
int32_t x671 = INT32_MIN;
int64_t x672 = -5168285261226LL;


void f0(void) {
	int8_t x1 = 6;
	volatile int16_t x2 = INT16_MAX;
	volatile int16_t x3 = -1;
	uint64_t x4 = 15690368236230LLU;
	uint64_t t0 = 1880LLU;

	t0 = (x1*((x2+x3)*x4));

	if (t0 != 3084663633769873080LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	uint64_t x7 = UINT64_MAX;
	static uint16_t x8 = UINT16_MAX;
	uint64_t t1 = 1761LLU;

	t1 = (x5*((x6+x7)*x8));

	if (t1 != 61115385135LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x13 = 0U;
	int16_t x14 = INT16_MIN;
	int8_t x15 = -1;
	uint8_t x16 = 86U;
	volatile int32_t t2 = 379175;

	t2 = (x13*((x14+x15)*x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = -1;
	static volatile uint32_t x18 = 52U;
	static uint32_t x19 = 124U;
	int8_t x20 = -1;
	static uint32_t t3 = 1U;

	t3 = (x17*((x18+x19)*x20));

	if (t3 != 176U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x25 = 3LL;
	volatile uint32_t x26 = UINT32_MAX;
	static int16_t x28 = 27;
	volatile int64_t t4 = 7847501060854838LL;

	t4 = (x25*((x26+x27)*x28));

	if (t4 != 1458LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x33 = UINT32_MAX;
	int32_t x34 = INT32_MAX;
	int32_t x35 = INT32_MIN;
	volatile uint32_t t5 = 812062U;

	t5 = (x33*((x34+x35)*x36));

	if (t5 != 2U) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x38 = 0;
	static int32_t x39 = -1;
	volatile uint32_t x40 = 171663U;

	t6 = (x37*((x38+x39)*x40));

	if (t6 != 4251193231U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x41 = -7;
	int8_t x42 = INT8_MAX;
	volatile int32_t x43 = -1;

	t7 = (x41*((x42+x43)*x44));

	if (t7 != -112014) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x50 = INT32_MIN;
	static volatile uint64_t x51 = 827834695LLU;
	uint64_t x52 = UINT64_MAX;
	uint64_t t8 = 32936365207LLU;

	t8 = (x49*((x50+x51)*x52));

	if (t8 != 1319648953LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x57 = UINT64_MAX;
	int64_t x58 = -280617368139LL;
	uint8_t x60 = 1U;
	uint64_t t9 = 1438748780703959LLU;

	t9 = (x57*((x58+x59)*x60));

	if (t9 != 280617366738LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x64 = INT16_MIN;
	uint32_t t10 = 1416399U;

	t10 = (x61*((x62+x63)*x64));

	if (t10 != 1530068992U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x77 = 34819584347149577LLU;
	uint32_t x79 = 6166955U;
	int16_t x80 = -15941;
	volatile uint64_t t11 = 11LLU;

	t11 = (x77*((x78+x79)*x80));

	if (t11 != 7098506544069249950LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x81 = 67LLU;
	int8_t x83 = 30;
	static volatile uint64_t t12 = 259356LLU;

	t12 = (x81*((x82+x83)*x84));

	if (t12 != 22682677332290LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x85 = 6U;
	volatile uint32_t x86 = UINT32_MAX;
	static uint8_t x87 = 0U;
	uint64_t x88 = 1678993249225178784LLU;
	static volatile uint64_t t13 = 2LLU;

	t13 = (x85*((x86+x87)*x88));

	if (t13 != 16592689252268836928LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x93 = INT8_MAX;
	int8_t x94 = -1;
	int8_t x96 = -7;

	t14 = (x93*((x94+x95)*x96));

	if (t14 != 1778) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x101 = 127U;
	volatile uint8_t x103 = UINT8_MAX;
	volatile uint16_t x104 = 332U;
	volatile int32_t t15 = -1;

	t15 = (x101*((x102+x103)*x104));

	if (t15 != 10793984) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x109 = 210;
	static volatile int64_t x110 = -4371237LL;
	uint64_t x111 = UINT64_MAX;
	volatile uint64_t t16 = 7833168451LLU;

	t16 = (x109*((x110+x111)*x112));

	if (t16 != 1971304046568407040LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x121 = 1969U;
	uint64_t x122 = 1836LLU;
	static uint64_t t17 = 12976LLU;

	t17 = (x121*((x122+x123)*x124));

	if (t17 != 18446744073705686469LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int32_t x125 = 337633607;
	uint64_t x126 = 9855476606419187LLU;
	volatile uint64_t x127 = UINT64_MAX;
	uint32_t x128 = 7U;
	volatile uint64_t t18 = 8226461LLU;

	t18 = (x125*((x126+x127)*x128));

	if (t18 != 3278456658198557650LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int32_t x134 = INT32_MIN;
	uint32_t x135 = 549423U;
	static int8_t x136 = 1;
	volatile uint32_t t19 = 288367U;

	t19 = (x133*((x134+x135)*x136));

	if (t19 != 2147483648U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x137 = INT8_MIN;
	volatile int16_t x138 = -1;
	uint64_t x139 = UINT64_MAX;
	uint64_t t20 = 916479850946LLU;

	t20 = (x137*((x138+x139)*x140));

	if (t20 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x142 = 1550U;
	uint16_t x143 = 17457U;
	uint32_t t21 = 22437U;

	t21 = (x141*((x142+x143)*x144));

	if (t21 != 3058321335U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x157 = -1;
	volatile int8_t x159 = INT8_MIN;
	volatile int32_t x160 = 1;
	int32_t t22 = -453022;

	t22 = (x157*((x158+x159)*x160));

	if (t22 != 129) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x163 = 2732179U;
	uint8_t x164 = 26U;

	t23 = (x161*((x162+x163)*x164));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x169 = UINT16_MAX;
	int16_t x171 = INT16_MAX;
	int32_t x172 = 3055680;

	t24 = (x169*((x170+x171)*x172));

	if (t24 != 6561522197020800LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x173 = -8511270475LL;
	volatile int8_t x174 = -1;
	int16_t x175 = -1344;
	uint8_t x176 = 1U;
	static int64_t t25 = 16104142890330LL;

	t25 = (x173*((x174+x175)*x176));

	if (t25 != 11447658788875LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x181 = INT64_MAX;
	uint64_t x182 = 6341346790044369LLU;
	volatile uint32_t x183 = 68U;
	int64_t x184 = INT64_MIN;
	uint64_t t26 = 3LLU;

	t26 = (x181*((x182+x183)*x184));

	if (t26 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x185 = INT64_MAX;
	uint32_t x187 = 77U;
	uint64_t x188 = 165365817609LLU;
	volatile uint64_t t27 = 6308138115141LLU;

	t27 = (x185*((x186+x187)*x188));

	if (t27 != 9223357319297008607LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x189 = INT64_MAX;
	volatile uint8_t x192 = UINT8_MAX;
	uint64_t t28 = 76850166LLU;

	t28 = (x189*((x190+x191)*x192));

	if (t28 != 18444930687785108836LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x202 = -1LL;
	int64_t x203 = -1LL;
	int8_t x204 = 56;

	t29 = (x201*((x202+x203)*x204));

	if (t29 != -56672LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x206 = -97129147;
	uint64_t x207 = 2LLU;
	static uint64_t t30 = 12246901729844439LLU;

	t30 = (x205*((x206+x207)*x208));

	if (t30 != 9640538538021088583LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x210 = 5068U;
	uint8_t x211 = UINT8_MAX;
	static uint64_t x212 = 1637748283LLU;
	uint64_t t31 = 24LLU;

	t31 = (x209*((x210+x211)*x212));

	if (t31 != 2571731562570655LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x217 = -1;
	volatile uint64_t x218 = 12736753393078544LLU;
	int16_t x219 = INT16_MAX;
	uint64_t t32 = 495948361909LLU;

	t32 = (x217*((x218+x219)*x220));

	if (t32 != 12736753393111311LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint8_t x221 = 121U;
	static uint8_t x223 = 1U;
	uint8_t x224 = 87U;
	volatile int32_t t33 = -152;

	t33 = (x221*((x222+x223)*x224));

	if (t33 != -344938209) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x233 = 1U;
	uint16_t x234 = 168U;
	volatile int8_t x235 = -1;
	static int8_t x236 = INT8_MIN;
	volatile uint32_t t34 = 1771166U;

	t34 = (x233*((x234+x235)*x236));

	if (t34 != 4294945920U) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x241 = -1LL;
	uint64_t x243 = UINT64_MAX;
	static int8_t x244 = -1;
	uint64_t t35 = 7112128166LLU;

	t35 = (x241*((x242+x243)*x244));

	if (t35 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x245 = INT16_MIN;
	uint32_t x246 = 3632700U;
	uint32_t t36 = 14937U;

	t36 = (x245*((x246+x247)*x248));

	if (t36 != 1192230912U) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint8_t x258 = 111U;
	uint64_t x259 = 319043LLU;
	uint64_t x260 = 1901343785219389LLU;
	uint64_t t37 = 3385437052LLU;

	t37 = (x257*((x258+x259)*x260));

	if (t37 != 1050207745587713430LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x265 = 32391U;
	static int16_t x266 = 1;
	int16_t x268 = INT16_MIN;
	int32_t t38 = -1;

	t38 = (x265*((x266+x267)*x268));

	if (t38 != -1061388288) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x269 = 8;
	int8_t x270 = 3;
	uint32_t x271 = 26U;
	int32_t x272 = INT32_MAX;
	uint32_t t39 = 79U;

	t39 = (x269*((x270+x271)*x272));

	if (t39 != 4294967064U) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x273 = UINT16_MAX;
	static uint64_t x274 = 271955748LLU;
	int32_t x275 = -1;
	uint64_t x276 = UINT64_MAX;

	t40 = (x273*((x274+x275)*x276));

	if (t40 != 18446726251089671971LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x285 = -1;
	int16_t x287 = INT16_MIN;
	static int16_t x288 = -101;
	int32_t t41 = -128181;

	t41 = (x285*((x286+x287)*x288));

	if (t41 != -3296741) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int64_t x297 = -3343154564623LL;
	static uint64_t x298 = 15836109461830LLU;
	volatile int8_t x299 = INT8_MIN;
	volatile uint64_t t42 = 29LLU;

	t42 = (x297*((x298+x299)*x300));

	if (t42 != 312842485954512794LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x308 = INT16_MAX;
	volatile uint64_t t43 = 64863594LLU;

	t43 = (x305*((x306+x307)*x308));

	if (t43 != 102478317037297229LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x314 = -474;
	uint64_t x315 = 20325375LLU;
	int16_t x316 = 7;

	t44 = (x313*((x314+x315)*x316));

	if (t44 != 304609291287LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x317 = -5;
	uint32_t x318 = 263032865U;
	int32_t x320 = INT32_MIN;
	volatile uint32_t t45 = 1036765U;

	t45 = (x317*((x318+x319)*x320));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x334 = 792U;
	uint16_t x335 = 14968U;
	int16_t x336 = INT16_MIN;
	uint32_t t46 = 58441U;

	t46 = (x333*((x334+x335)*x336));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x338 = INT8_MAX;
	int32_t x339 = 128060;
	volatile uint32_t x340 = 144U;
	uint32_t t47 = 63656U;

	t47 = (x337*((x338+x339)*x340));

	if (t47 != 728236032U) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x341 = 5594U;
	uint16_t x342 = 1U;
	volatile int64_t t48 = 2976524632232793LL;

	t48 = (x341*((x342+x343)*x344));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x353 = INT16_MIN;
	volatile int32_t x354 = -20953050;
	int64_t x355 = INT64_MAX;
	volatile uint64_t x356 = 1933021260859LLU;

	t49 = (x353*((x354+x355)*x356));

	if (t49 != 4350412711406632960LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x361 = 0U;
	uint64_t x363 = 132333163781125LLU;
	volatile uint32_t x364 = 1U;
	uint64_t t50 = 237604LLU;

	t50 = (x361*((x362+x363)*x364));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x365 = 1;
	int64_t x367 = -147714LL;
	uint64_t x368 = 13164706287LLU;
	volatile uint64_t t51 = 113873946319736016LLU;

	t51 = (x365*((x366+x367)*x368));

	if (t51 != 18444799686085080577LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x369 = -1;
	uint64_t x370 = 2107534252420911LLU;
	uint64_t t52 = 238888LLU;

	t52 = (x369*((x370+x371)*x372));

	if (t52 != 6381172509603959446LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x373 = INT16_MAX;
	volatile uint32_t x375 = 711140U;
	uint32_t t53 = 2118779390U;

	t53 = (x373*((x374+x375)*x376));

	if (t53 != 566311953U) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x381 = 6U;
	int16_t x382 = -1;
	uint16_t x383 = 1271U;
	volatile uint32_t x384 = 0U;
	uint32_t t54 = 166666100U;

	t54 = (x381*((x382+x383)*x384));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x385 = -1;
	uint64_t x386 = UINT64_MAX;
	static int32_t x387 = INT32_MIN;
	uint16_t x388 = 6U;

	t55 = (x385*((x386+x387)*x388));

	if (t55 != 12884901894LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x398 = INT8_MAX;
	volatile int8_t x399 = -1;
	uint8_t x400 = 22U;
	static volatile int32_t t56 = -56444;

	t56 = (x397*((x398+x399)*x400));

	if (t56 != -354816) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x406 = UINT8_MAX;
	static volatile int16_t x407 = -11;
	static int16_t x408 = INT16_MAX;
	volatile uint32_t t57 = 276532675U;

	t57 = (x405*((x406+x407)*x408));

	if (t57 != 4286972148U) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x409 = -27;
	static uint16_t x410 = UINT16_MAX;
	uint32_t x411 = 231U;
	uint32_t x412 = 2241636U;
	volatile uint32_t t58 = 129802997U;

	t58 = (x409*((x410+x411)*x412));

	if (t58 != 1001987640U) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x413 = UINT32_MAX;
	int16_t x414 = -115;
	int64_t x416 = -1LL;
	volatile int64_t t59 = -342823619010453LL;

	t59 = (x413*((x414+x415)*x416));

	if (t59 != -3590743618130484660LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x421 = 23746U;
	int16_t x422 = -1;
	int8_t x423 = 3;
	uint64_t x424 = 352LLU;
	uint64_t t60 = 6463014754194299LLU;

	t60 = (x421*((x422+x423)*x424));

	if (t60 != 16717184LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x426 = -1LL;
	int32_t x427 = -7617;
	int64_t t61 = 454599124768019LL;

	t61 = (x425*((x426+x427)*x428));

	if (t61 != 967486LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x429 = 3022;
	uint8_t x430 = 7U;
	volatile int32_t x432 = INT32_MAX;
	volatile uint64_t t62 = 6800010449LLU;

	t62 = (x429*((x430+x431)*x432));

	if (t62 != 691842857954935724LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x449 = 154295;
	uint16_t x450 = 44U;
	volatile uint64_t x451 = UINT64_MAX;
	uint32_t x452 = 431213U;
	volatile uint64_t t63 = 110349850082761782LLU;

	t63 = (x449*((x450+x451)*x452));

	if (t63 != 2860962422905LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x453 = INT64_MIN;
	int64_t x454 = INT64_MIN;
	uint64_t x455 = 15LLU;
	uint64_t t64 = 51199LLU;

	t64 = (x453*((x454+x455)*x456));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x458 = 1;
	int8_t x459 = 2;
	uint64_t x460 = 34088LLU;
	volatile uint64_t t65 = 18379773889421LLU;

	t65 = (x457*((x458+x459)*x460));

	if (t65 != 18446744073708426712LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x461 = INT64_MIN;
	volatile int32_t x462 = INT32_MAX;
	int32_t x463 = INT32_MIN;

	t66 = (x461*((x462+x463)*x464));

	if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x469 = INT16_MIN;
	int64_t x470 = 45005926530706LL;
	uint8_t x472 = 2U;

	t67 = (x469*((x470+x471)*x472));

	if (t67 != 15497235672593268736LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x481 = 28LLU;
	uint32_t x484 = 1783U;
	static uint64_t t68 = 508LLU;

	t68 = (x481*((x482+x483)*x484));

	if (t68 != 18446744073709102300LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x485 = -682618;
	volatile uint64_t x486 = 8021LLU;
	int16_t x487 = INT16_MIN;
	int8_t x488 = -30;
	uint64_t t69 = 12894843LLU;

	t69 = (x485*((x486+x487)*x488));

	if (t69 != 18446743566927122236LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x489 = 3491U;
	volatile int32_t x490 = INT32_MIN;
	uint32_t x491 = UINT32_MAX;
	volatile uint16_t x492 = 19U;
	volatile uint32_t t70 = 387393U;

	t70 = (x489*((x490+x491)*x492));

	if (t70 != 2147417319U) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x493 = INT8_MAX;
	uint8_t x495 = 97U;
	uint16_t x496 = 0U;
	static int32_t t71 = -237807;

	t71 = (x493*((x494+x495)*x496));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x498 = UINT8_MAX;
	int32_t x499 = -1;
	volatile int64_t t72 = 65136417226874796LL;

	t72 = (x497*((x498+x499)*x500));

	if (t72 != 762LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x501 = UINT32_MAX;
	static volatile int16_t x503 = INT16_MAX;
	int8_t x504 = -1;
	static volatile uint32_t t73 = 96511710U;

	t73 = (x501*((x502+x503)*x504));

	if (t73 != 32769U) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x513 = 1U;
	static int32_t x515 = -1;
	int16_t x516 = INT16_MIN;
	static volatile uint32_t t74 = 18378U;

	t74 = (x513*((x514+x515)*x516));

	if (t74 != 4294934528U) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x517 = 31U;
	static int32_t x518 = -19792944;
	int8_t x519 = INT8_MIN;
	uint8_t x520 = 1U;
	int32_t t75 = 1069598630;

	t75 = (x517*((x518+x519)*x520));

	if (t75 != -613585232) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x521 = 1;
	static int8_t x522 = -30;
	uint64_t x523 = 439775850LLU;
	int64_t x524 = INT64_MAX;
	volatile uint64_t t76 = 262801439158LLU;

	t76 = (x521*((x522+x523)*x524));

	if (t76 != 18446744073269775796LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x525 = 18U;
	int16_t x527 = INT16_MIN;
	int32_t x528 = -1;
	volatile uint32_t t77 = 488954U;

	t77 = (x525*((x526+x527)*x528));

	if (t77 != 589842U) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x529 = 7U;
	uint64_t x532 = 9LLU;
	static uint64_t t78 = 975LLU;

	t78 = (x529*((x530+x531)*x532));

	if (t78 != 509103LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x533 = 391U;
	int32_t x534 = -88080;
	uint64_t x535 = 1144235007760LLU;
	int64_t x536 = INT64_MIN;
	uint64_t t79 = 1289826275432785985LLU;

	t79 = (x533*((x534+x535)*x536));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x537 = 11;
	int8_t x538 = 0;
	volatile uint64_t x539 = 2LLU;
	static uint16_t x540 = UINT16_MAX;
	volatile uint64_t t80 = 136107852217LLU;

	t80 = (x537*((x538+x539)*x540));

	if (t80 != 1441770LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x542 = INT8_MIN;
	static uint64_t x544 = 444944046244747LLU;
	uint64_t t81 = 183612393729818LLU;

	t81 = (x541*((x542+x543)*x544));

	if (t81 != 1494611136679923099LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x549 = INT32_MIN;
	static int16_t x550 = INT16_MAX;
	int16_t x551 = INT16_MIN;
	uint64_t t82 = 63526LLU;

	t82 = (x549*((x550+x551)*x552));

	if (t82 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x553 = -1LL;
	volatile int8_t x555 = -3;
	int16_t x556 = INT16_MAX;
	volatile int64_t t83 = 140521155141LL;

	t83 = (x553*((x554+x555)*x556));

	if (t83 != 131068LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x557 = UINT8_MAX;
	volatile int16_t x558 = INT16_MIN;
	uint64_t x560 = UINT64_MAX;
	uint64_t t84 = 103LLU;

	t84 = (x557*((x558+x559)*x560));

	if (t84 != 18446744066824713796LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x561 = INT16_MAX;
	int32_t x563 = INT32_MIN;
	uint32_t x564 = 254U;

	t85 = (x561*((x562+x563)*x564));

	if (t85 != 8322818U) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x565 = UINT16_MAX;
	static uint64_t x566 = 17658336268650448LLU;
	int16_t x568 = INT16_MIN;
	volatile uint64_t t86 = 26434LLU;

	t86 = (x565*((x566+x567)*x568));

	if (t86 != 8630553195147919360LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x573 = INT8_MIN;
	volatile int64_t x574 = -86817211455829349LL;
	int16_t x575 = INT16_MIN;
	uint64_t x576 = UINT64_MAX;
	static uint64_t t87 = 976015620847LLU;

	t87 = (x573*((x574+x575)*x576));

	if (t87 != 7334141007359200640LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x585 = -1;
	static volatile uint32_t x586 = UINT32_MAX;
	static int16_t x587 = INT16_MAX;
	int16_t x588 = -226;
	volatile uint32_t t88 = 3015U;

	t88 = (x585*((x586+x587)*x588));

	if (t88 != 7405116U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x593 = INT8_MIN;
	uint64_t x594 = 2251487065102LLU;
	int32_t x595 = 0;
	static uint16_t x596 = UINT16_MAX;
	uint64_t t89 = 170014LLU;

	t89 = (x593*((x594+x595)*x596));

	if (t89 != 18006933931552278272LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x597 = 1;
	static int8_t x598 = 18;
	static uint64_t x599 = UINT64_MAX;
	uint32_t x600 = 0U;

	t90 = (x597*((x598+x599)*x600));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x601 = INT16_MAX;
	uint64_t x602 = 8602181488202LLU;
	int8_t x603 = INT8_MIN;
	static int8_t x604 = -1;
	volatile uint64_t t91 = 78836694688211LLU;

	t91 = (x601*((x602+x603)*x604));

	if (t91 != 18164876392889830858LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x605 = 69056U;
	int8_t x606 = INT8_MIN;
	volatile int32_t x607 = -1;
	int16_t x608 = -1;

	t92 = (x605*((x606+x607)*x608));

	if (t92 != 8908224U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x625 = INT32_MIN;
	int16_t x626 = INT16_MIN;
	uint32_t x627 = 18U;
	volatile int8_t x628 = -1;
	volatile uint32_t t93 = 251U;

	t93 = (x625*((x626+x627)*x628));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x633 = UINT32_MAX;
	uint16_t x634 = 22U;
	uint8_t x635 = 23U;
	int64_t x636 = -1LL;
	volatile int64_t t94 = 0LL;

	t94 = (x633*((x634+x635)*x636));

	if (t94 != -193273528275LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x645 = INT8_MIN;
	volatile int32_t x646 = -272;
	int16_t x647 = INT16_MAX;
	int64_t x648 = 2780LL;
	int64_t t95 = 8297500LL;

	t95 = (x645*((x646+x647)*x648));

	if (t95 != -11563020800LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x649 = INT8_MIN;
	uint8_t x650 = UINT8_MAX;
	int16_t x652 = INT16_MAX;
	uint64_t t96 = 1280438LLU;

	t96 = (x649*((x650+x651)*x652));

	if (t96 != 8708843886458763904LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x653 = INT8_MAX;
	uint32_t x655 = UINT32_MAX;
	static uint64_t x656 = 206367226LLU;
	volatile uint64_t t97 = 330LLU;

	t97 = (x653*((x654+x655)*x656));

	if (t97 != 942388627855366644LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x665 = 0;
	volatile uint8_t x666 = 17U;
	uint8_t x667 = UINT8_MAX;
	int8_t x668 = INT8_MIN;
	int32_t t98 = -31160;

	t98 = (x665*((x666+x667)*x668));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x669 = UINT32_MAX;
	uint64_t t99 = 519117578LLU;

	t99 = (x669*((x670+x671)*x672));

	if (t99 != 12314893214517650006LLU) { NG(); } else { ; }
	
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

