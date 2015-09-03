#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = -1;
static uint8_t x7 = UINT8_MAX;
uint32_t x9 = UINT32_MAX;
static volatile int32_t x11 = INT32_MIN;
volatile int8_t x12 = INT8_MIN;
volatile uint64_t t4 = 16281203LLU;
int16_t x29 = -1;
volatile uint16_t x33 = 7777U;
uint16_t x52 = 22775U;
volatile uint64_t t11 = 49434669030333LLU;
int16_t x61 = INT16_MIN;
int8_t x68 = 5;
int32_t t13 = 1046566675;
uint64_t t16 = 10LLU;
volatile int16_t x98 = 0;
int32_t x99 = INT32_MAX;
int8_t x124 = 24;
volatile int8_t x130 = -21;
uint16_t x133 = 4U;
static int16_t x140 = -1;
static int16_t x149 = -13603;
uint8_t x151 = 18U;
int16_t x160 = INT16_MIN;
int8_t x202 = INT8_MIN;
uint32_t x207 = UINT32_MAX;
uint32_t t33 = 211873U;
uint16_t x215 = 6U;
static int32_t x221 = 3457;
static volatile uint32_t t38 = 220564746U;
volatile int32_t x236 = 3223804;
volatile uint64_t t40 = 589998428535659LLU;
int32_t x266 = INT32_MIN;
uint32_t x283 = UINT32_MAX;
uint32_t x302 = 100U;
int16_t x307 = -2025;
volatile uint32_t t49 = 153526528U;
uint16_t x310 = 1U;
int16_t x311 = -18;
int8_t x320 = INT8_MIN;
int16_t x324 = INT16_MIN;
uint64_t t52 = 435865520495LLU;
uint16_t x326 = UINT16_MAX;
int16_t x327 = INT16_MIN;
static uint64_t t54 = 8319120994LLU;
int64_t x333 = -1LL;
static int8_t x336 = INT8_MIN;
int64_t x344 = -6560623LL;
static volatile int64_t t56 = -12227622LL;
static int32_t x345 = 3;
volatile int16_t x348 = INT16_MAX;
static volatile int64_t t61 = 2029193LL;
uint16_t x367 = 304U;
static volatile int16_t x370 = -2;
int16_t x371 = 236;
volatile int8_t x376 = INT8_MAX;
int64_t x398 = -505071LL;
uint32_t x402 = 54476U;
int16_t x403 = INT16_MIN;
volatile uint64_t t71 = 208004556LLU;
uint32_t x424 = UINT32_MAX;
uint32_t t72 = 1978405801U;
int32_t t73 = -307;
int16_t x439 = INT16_MAX;
static int16_t x443 = INT16_MIN;
static int64_t t75 = 51923923LL;
int16_t x445 = INT16_MIN;
uint8_t x461 = 6U;
int64_t x462 = -245168LL;
static int64_t x464 = -1LL;
int64_t t78 = -1LL;
int8_t x466 = 2;
int32_t x467 = INT32_MIN;
volatile int8_t x468 = -1;
uint64_t x475 = 0LLU;
int32_t x477 = 6;
uint32_t t81 = 346191U;
int16_t x484 = INT16_MAX;
int16_t x485 = -1;
int32_t x486 = -1;
volatile uint64_t t84 = 58844284010LLU;
uint32_t x498 = UINT32_MAX;
int16_t x500 = -1;
uint64_t x501 = UINT64_MAX;
int64_t x505 = 141275010048621351LL;
int64_t x506 = -1LL;
int16_t x522 = INT16_MIN;
uint32_t x528 = 27922U;
uint8_t x533 = 1U;
static int16_t x534 = -1;
int8_t x549 = INT8_MIN;
volatile uint16_t x563 = 8428U;
int32_t x568 = -16;


void f0(void) {
	int8_t x1 = -1;
	uint32_t x3 = UINT32_MAX;
	int32_t x4 = -1;
	volatile uint32_t t0 = 269459U;

	t0 = ((x1*x2)-(x3%x4));

	if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	int8_t x6 = INT8_MIN;
	int64_t x8 = -1LL;
	int64_t t1 = 649LL;

	t1 = ((x5*x6)-(x7%x8));

	if (t1 != -8388480LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x10 = INT32_MAX;
	volatile uint32_t t2 = 216705436U;

	t2 = ((x9*x10)-(x11%x12));

	if (t2 != 2147483649U) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x21 = INT64_MIN;
	uint8_t x22 = 1U;
	static int64_t x23 = INT64_MIN;
	int32_t x24 = 5;
	volatile int64_t t3 = 14315833983LL;

	t3 = ((x21*x22)-(x23%x24));

	if (t3 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x25 = INT32_MAX;
	volatile uint64_t x26 = 4118LLU;
	uint32_t x27 = UINT32_MAX;
	int8_t x28 = INT8_MAX;

	t4 = ((x25*x26)-(x27%x28));

	if (t4 != 8843337658331LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x30 = -1;
	int32_t x31 = INT32_MIN;
	volatile int64_t x32 = INT64_MAX;
	volatile int64_t t5 = -17LL;

	t5 = ((x29*x30)-(x31%x32));

	if (t5 != 2147483649LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x34 = INT16_MAX;
	static int32_t x35 = INT32_MIN;
	static volatile int32_t x36 = -41885;
	volatile int32_t t6 = -2;

	t6 = ((x33*x34)-(x35%x36));

	if (t6 != 254868657) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x37 = 97U;
	volatile uint16_t x38 = UINT16_MAX;
	uint64_t x39 = 41098LLU;
	static int16_t x40 = INT16_MAX;
	static uint64_t t7 = 80LLU;

	t7 = ((x37*x38)-(x39%x40));

	if (t7 != 6348564LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x41 = 1815;
	volatile uint8_t x42 = 47U;
	int16_t x43 = INT16_MAX;
	int8_t x44 = INT8_MIN;
	int32_t t8 = 566220167;

	t8 = ((x41*x42)-(x43%x44));

	if (t8 != 85178) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = INT16_MIN;
	volatile uint32_t x46 = 97552012U;
	static int64_t x47 = -1LL;
	uint16_t x48 = UINT16_MAX;
	int64_t t9 = 0LL;

	t9 = ((x45*x46)-(x47%x48));

	if (t9 != 3166306305LL) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int8_t x49 = 22;
	int16_t x50 = INT16_MIN;
	int8_t x51 = INT8_MIN;
	volatile int32_t t10 = 446062;

	t10 = ((x49*x50)-(x51%x52));

	if (t10 != -720768) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x53 = 19364LL;
	int16_t x54 = INT16_MIN;
	uint64_t x55 = 1773111783407918LLU;
	int64_t x56 = -1LL;

	t11 = ((x53*x54)-(x55%x56));

	if (t11 != 18444970961291624146LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x62 = 11509U;
	static volatile int16_t x63 = INT16_MIN;
	int8_t x64 = 1;
	volatile int32_t t12 = 5;

	t12 = ((x61*x62)-(x63%x64));

	if (t12 != -377126912) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x65 = 1;
	int8_t x66 = -1;
	int16_t x67 = INT16_MAX;

	t13 = ((x65*x66)-(x67%x68));

	if (t13 != -3) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x69 = 3403662;
	uint32_t x70 = 3U;
	volatile uint32_t x71 = UINT32_MAX;
	volatile uint8_t x72 = 113U;
	volatile uint32_t t14 = 11206U;

	t14 = ((x69*x70)-(x71%x72));

	if (t14 != 10210971U) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x73 = 901U;
	uint32_t x74 = 719046668U;
	int64_t x75 = INT64_MIN;
	uint32_t x76 = 956U;
	int64_t t15 = 602919LL;

	t15 = ((x73*x74)-(x75%x76));

	if (t15 != 3615954260LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x85 = INT16_MIN;
	uint8_t x86 = UINT8_MAX;
	volatile int32_t x87 = INT32_MIN;
	static volatile uint64_t x88 = UINT64_MAX;

	t16 = ((x85*x86)-(x87%x88));

	if (t16 != 2139127808LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x93 = INT64_MAX;
	uint64_t x94 = 8105559000428LLU;
	int64_t x95 = -3349206LL;
	int32_t x96 = INT32_MAX;
	volatile uint64_t t17 = 22213726269LLU;

	t17 = ((x93*x94)-(x95%x96));

	if (t17 != 18446735968153900394LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x97 = 1327988125927438LL;
	int16_t x100 = -1;
	int64_t t18 = 479723839LL;

	t18 = ((x97*x98)-(x99%x100));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x113 = 24063464349249LLU;
	int16_t x114 = 447;
	static uint32_t x115 = 15629U;
	static int64_t x116 = INT64_MAX;
	uint64_t t19 = 26814247LLU;

	t19 = ((x113*x114)-(x115%x116));

	if (t19 != 10756368564098674LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x121 = INT16_MAX;
	volatile uint16_t x122 = UINT16_MAX;
	volatile int16_t x123 = -2;
	static int32_t t20 = -123299680;

	t20 = ((x121*x122)-(x123%x124));

	if (t20 != 2147385347) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x129 = UINT64_MAX;
	uint16_t x131 = UINT16_MAX;
	int32_t x132 = 2412;
	uint64_t t21 = 14709174LLU;

	t21 = ((x129*x130)-(x131%x132));

	if (t21 != 18446744073709551226LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x134 = 1U;
	volatile uint8_t x135 = 10U;
	volatile int64_t x136 = INT64_MIN;
	int64_t t22 = -87531468993922047LL;

	t22 = ((x133*x134)-(x135%x136));

	if (t22 != -6LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x137 = 29;
	int16_t x138 = 7120;
	int64_t x139 = INT64_MIN;
	int64_t t23 = 29567241164872672LL;

	t23 = ((x137*x138)-(x139%x140));

	if (t23 != 206480LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x141 = INT32_MAX;
	int64_t x142 = -1LL;
	uint16_t x143 = 6766U;
	int64_t x144 = INT64_MIN;
	int64_t t24 = -5593481LL;

	t24 = ((x141*x142)-(x143%x144));

	if (t24 != -2147490413LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x150 = UINT16_MAX;
	volatile int32_t x152 = INT32_MAX;
	volatile int32_t t25 = 1911526;

	t25 = ((x149*x150)-(x151%x152));

	if (t25 != -891472623) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x157 = 124U;
	int16_t x158 = -1;
	volatile int16_t x159 = -1;
	int32_t t26 = -16;

	t26 = ((x157*x158)-(x159%x160));

	if (t26 != -123) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int64_t x161 = INT64_MAX;
	volatile uint64_t x162 = UINT64_MAX;
	static uint8_t x163 = 15U;
	uint8_t x164 = UINT8_MAX;
	uint64_t t27 = 430729205830775LLU;

	t27 = ((x161*x162)-(x163%x164));

	if (t27 != 9223372036854775794LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x165 = 258546LLU;
	static int32_t x166 = -1;
	int64_t x167 = INT64_MIN;
	static int16_t x168 = 2690;
	uint64_t t28 = 36561082LLU;

	t28 = ((x165*x166)-(x167%x168));

	if (t28 != 18446744073709294578LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int8_t x181 = 6;
	volatile int32_t x182 = -389;
	int8_t x183 = -1;
	uint8_t x184 = 8U;
	volatile int32_t t29 = -238602392;

	t29 = ((x181*x182)-(x183%x184));

	if (t29 != -2333) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x189 = -33;
	volatile int64_t x190 = -1LL;
	uint8_t x191 = 10U;
	uint16_t x192 = 5U;
	static volatile int64_t t30 = -3LL;

	t30 = ((x189*x190)-(x191%x192));

	if (t30 != 33LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x193 = INT8_MIN;
	static int16_t x194 = 9;
	int8_t x195 = INT8_MIN;
	int32_t x196 = 338;
	volatile int32_t t31 = -36;

	t31 = ((x193*x194)-(x195%x196));

	if (t31 != -1024) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x201 = 68U;
	int16_t x203 = INT16_MIN;
	static int8_t x204 = -1;
	static volatile int32_t t32 = 0;

	t32 = ((x201*x202)-(x203%x204));

	if (t32 != -8704) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x205 = UINT32_MAX;
	static int16_t x206 = 4;
	int32_t x208 = 23324530;

	t33 = ((x205*x206)-(x207%x208));

	if (t33 != 4291713517U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x209 = -40;
	volatile uint32_t x210 = UINT32_MAX;
	int64_t x211 = INT64_MAX;
	uint32_t x212 = UINT32_MAX;
	volatile int64_t t34 = -5624LL;

	t34 = ((x209*x210)-(x211%x212));

	if (t34 != -2147483607LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x213 = -8;
	int16_t x214 = -1;
	int64_t x216 = INT64_MAX;
	int64_t t35 = 3658481LL;

	t35 = ((x213*x214)-(x215%x216));

	if (t35 != 2LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x217 = UINT64_MAX;
	uint64_t x218 = 15654246LLU;
	int64_t x219 = 22381120451LL;
	int16_t x220 = 164;
	volatile uint64_t t36 = 11924358729802LLU;

	t36 = ((x217*x218)-(x219%x220));

	if (t36 != 18446744073693897263LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x222 = 2U;
	int16_t x223 = INT16_MIN;
	int32_t x224 = INT32_MIN;
	int32_t t37 = 20445;

	t37 = ((x221*x222)-(x223%x224));

	if (t37 != 39682) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x229 = -1;
	int8_t x230 = 28;
	int16_t x231 = INT16_MAX;
	static uint32_t x232 = 98994U;

	t38 = ((x229*x230)-(x231%x232));

	if (t38 != 4294934501U) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x233 = INT8_MAX;
	volatile int8_t x234 = INT8_MIN;
	int64_t x235 = 1053621674505LL;
	volatile int64_t t39 = -250174536LL;

	t39 = ((x233*x234)-(x235%x236));

	if (t39 != -1948461LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x257 = 198053117685LL;
	volatile uint32_t x258 = 715609U;
	static volatile uint64_t x259 = 22LLU;
	int32_t x260 = 38;

	t40 = ((x257*x258)-(x259%x260));

	if (t40 != 141728593493445143LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x261 = INT8_MIN;
	volatile int16_t x262 = INT16_MIN;
	uint32_t x263 = 1557U;
	static uint16_t x264 = UINT16_MAX;
	volatile uint32_t t41 = 3283U;

	t41 = ((x261*x262)-(x263%x264));

	if (t41 != 4192747U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x265 = -1LL;
	int64_t x267 = -76813623736107806LL;
	int32_t x268 = INT32_MIN;
	volatile int64_t t42 = -3LL;

	t42 = ((x265*x266)-(x267%x268));

	if (t42 != 4105405214LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x269 = INT64_MIN;
	uint16_t x270 = 1U;
	int32_t x271 = INT32_MAX;
	volatile int32_t x272 = -1;
	volatile int64_t t43 = INT64_MIN;

	t43 = ((x269*x270)-(x271%x272));

	if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x281 = -4384950757243372LL;
	int8_t x282 = INT8_MAX;
	uint8_t x284 = UINT8_MAX;
	static int64_t t44 = -57685702521557LL;

	t44 = ((x281*x282)-(x283%x284));

	if (t44 != -556888746169908244LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x285 = 120619438049LLU;
	int8_t x286 = -1;
	uint32_t x287 = 29077587U;
	int8_t x288 = -1;
	volatile uint64_t t45 = 57088485LLU;

	t45 = ((x285*x286)-(x287%x288));

	if (t45 != 18446743953061035980LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x289 = 48U;
	int64_t x290 = -230664071373449LL;
	volatile uint8_t x291 = 0U;
	int64_t x292 = INT64_MIN;
	int64_t t46 = 192331LL;

	t46 = ((x289*x290)-(x291%x292));

	if (t46 != -11071875425925552LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x293 = 12965362896533LL;
	int16_t x294 = 672;
	static volatile uint8_t x295 = 2U;
	uint16_t x296 = UINT16_MAX;
	volatile int64_t t47 = -4401295647165631147LL;

	t47 = ((x293*x294)-(x295%x296));

	if (t47 != 8712723866470174LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x301 = -1;
	int32_t x303 = -1;
	static int32_t x304 = INT32_MIN;
	volatile uint32_t t48 = 49U;

	t48 = ((x301*x302)-(x303%x304));

	if (t48 != 4294967197U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x305 = -1;
	int16_t x306 = INT16_MIN;
	volatile uint32_t x308 = UINT32_MAX;

	t49 = ((x305*x306)-(x307%x308));

	if (t49 != 34793U) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x309 = 390U;
	volatile int8_t x312 = INT8_MIN;
	static volatile uint32_t t50 = 393345530U;

	t50 = ((x309*x310)-(x311%x312));

	if (t50 != 408U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x317 = -1LL;
	uint8_t x318 = 11U;
	int64_t x319 = INT64_MAX;
	static volatile int64_t t51 = -41729771841929256LL;

	t51 = ((x317*x318)-(x319%x320));

	if (t51 != -138LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x321 = UINT64_MAX;
	uint8_t x322 = 28U;
	int16_t x323 = INT16_MIN;

	t52 = ((x321*x322)-(x323%x324));

	if (t52 != 18446744073709551588LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x325 = -1;
	int32_t x328 = INT32_MIN;
	volatile int32_t t53 = 84549;

	t53 = ((x325*x326)-(x327%x328));

	if (t53 != -32767) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x329 = -1;
	uint32_t x330 = 1699U;
	uint64_t x331 = 1387LLU;
	int16_t x332 = INT16_MIN;

	t54 = ((x329*x330)-(x331%x332));

	if (t54 != 4294964210LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x334 = 3659046598367515LLU;
	uint32_t x335 = 0U;
	volatile uint64_t t55 = 512266989LLU;

	t55 = ((x333*x334)-(x335%x336));

	if (t55 != 18443085027111184101LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x341 = 14U;
	int8_t x342 = -46;
	int32_t x343 = -11924730;

	t56 = ((x341*x342)-(x343%x344));

	if (t56 != 5363463LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x346 = 4215840689053934002LLU;
	int8_t x347 = INT8_MAX;
	uint64_t t57 = 75527548818LLU;

	t57 = ((x345*x346)-(x347%x348));

	if (t57 != 12647522067161801879LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x349 = -1;
	int16_t x350 = -1;
	static int32_t x351 = 14;
	static int64_t x352 = INT64_MAX;
	static volatile int64_t t58 = -49388152372LL;

	t58 = ((x349*x350)-(x351%x352));

	if (t58 != -13LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x353 = 1442LL;
	static int32_t x354 = -451846;
	static volatile int64_t x355 = INT64_MIN;
	int64_t x356 = INT64_MAX;
	volatile int64_t t59 = -7670210991LL;

	t59 = ((x353*x354)-(x355%x356));

	if (t59 != -651561931LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x357 = INT16_MIN;
	uint64_t x358 = UINT64_MAX;
	int32_t x359 = -19613861;
	int64_t x360 = INT64_MIN;
	volatile uint64_t t60 = 1035LLU;

	t60 = ((x357*x358)-(x359%x360));

	if (t60 != 19646629LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x361 = 179U;
	static int16_t x362 = 2;
	int64_t x363 = INT64_MIN;
	static int32_t x364 = -1;

	t61 = ((x361*x362)-(x363%x364));

	if (t61 != 358LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x365 = 954948092288437LLU;
	int16_t x366 = INT16_MAX;
	int8_t x368 = -1;
	uint64_t t62 = 288760313528LLU;

	t62 = ((x365*x366)-(x367%x368));

	if (t62 != 12844040066305663563LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x369 = -1102686363365770956LL;
	int16_t x372 = INT16_MIN;
	int64_t t63 = -26945LL;

	t63 = ((x369*x370)-(x371%x372));

	if (t63 != 2205372726731541676LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x373 = -1;
	int64_t x374 = 8672589LL;
	uint8_t x375 = 51U;
	int64_t t64 = 32086782219LL;

	t64 = ((x373*x374)-(x375%x376));

	if (t64 != -8672640LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x377 = -406143;
	uint16_t x378 = 3289U;
	static int64_t x379 = -963LL;
	int16_t x380 = -1;
	static int64_t t65 = 57995305260258LL;

	t65 = ((x377*x378)-(x379%x380));

	if (t65 != -1335804327LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x389 = 29LLU;
	uint32_t x390 = 837U;
	int16_t x391 = INT16_MIN;
	static volatile int64_t x392 = -523407863086LL;
	static uint64_t t66 = 895LLU;

	t66 = ((x389*x390)-(x391%x392));

	if (t66 != 57041LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x397 = UINT64_MAX;
	volatile uint32_t x399 = UINT32_MAX;
	volatile int16_t x400 = INT16_MIN;
	uint64_t t67 = 116660248068904472LLU;

	t67 = ((x397*x398)-(x399%x400));

	if (t67 != 472304LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x401 = -1;
	int64_t x404 = INT64_MIN;
	static volatile int64_t t68 = -517760466006272826LL;

	t68 = ((x401*x402)-(x403%x404));

	if (t68 != 4294945588LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x409 = INT8_MAX;
	uint64_t x410 = 161856395894LLU;
	int32_t x411 = -1;
	uint8_t x412 = 36U;
	uint64_t t69 = 0LLU;

	t69 = ((x409*x410)-(x411%x412));

	if (t69 != 20555762278539LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x413 = 2882LLU;
	volatile uint32_t x414 = 1967U;
	int64_t x415 = INT64_MAX;
	volatile int16_t x416 = -1;
	static volatile uint64_t t70 = 6947LLU;

	t70 = ((x413*x414)-(x415%x416));

	if (t70 != 5668894LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x417 = 8775051424643444123LLU;
	uint8_t x418 = 21U;
	uint64_t x419 = 110491532104290LLU;
	uint64_t x420 = 3396LLU;

	t71 = ((x417*x418)-(x419%x420));

	if (t71 != 18255383254126359597LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x421 = 1U;
	static int32_t x422 = INT32_MIN;
	volatile uint8_t x423 = UINT8_MAX;

	t72 = ((x421*x422)-(x423%x424));

	if (t72 != 2147483393U) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x429 = 17U;
	int16_t x430 = INT16_MIN;
	volatile uint16_t x431 = 2118U;
	int32_t x432 = INT32_MAX;

	t73 = ((x429*x430)-(x431%x432));

	if (t73 != -559174) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x437 = INT8_MIN;
	int16_t x438 = INT16_MIN;
	int64_t x440 = -111594794LL;
	volatile int64_t t74 = 326137586211293LL;

	t74 = ((x437*x438)-(x439%x440));

	if (t74 != 4161537LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x441 = -470264347816055LL;
	int8_t x442 = -2;
	static int32_t x444 = INT32_MAX;

	t75 = ((x441*x442)-(x443%x444));

	if (t75 != 940528695664878LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x446 = UINT16_MAX;
	int64_t x447 = -1LL;
	volatile uint32_t x448 = UINT32_MAX;
	int64_t t76 = 532678503LL;

	t76 = ((x445*x446)-(x447%x448));

	if (t76 != -2147450879LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x457 = UINT16_MAX;
	int16_t x458 = INT16_MIN;
	volatile uint16_t x459 = 5U;
	uint32_t x460 = 172U;
	volatile uint32_t t77 = 7764155U;

	t77 = ((x457*x458)-(x459%x460));

	if (t77 != 2147516411U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x463 = 13798156337LL;

	t78 = ((x461*x462)-(x463%x464));

	if (t78 != -1471008LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x465 = INT16_MIN;
	static int32_t t79 = -989733;

	t79 = ((x465*x466)-(x467%x468));

	if (t79 != -65536) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x473 = INT16_MAX;
	uint8_t x474 = 19U;
	int8_t x476 = INT8_MAX;
	uint64_t t80 = 1450LLU;

	t80 = ((x473*x474)-(x475%x476));

	if (t80 != 622573LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x478 = INT16_MAX;
	static uint16_t x479 = UINT16_MAX;
	volatile uint32_t x480 = 4731867U;

	t81 = ((x477*x478)-(x479%x480));

	if (t81 != 131067U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x481 = INT8_MIN;
	volatile int64_t x482 = -1LL;
	uint32_t x483 = 1U;
	int64_t t82 = 815030199792350043LL;

	t82 = ((x481*x482)-(x483%x484));

	if (t82 != 127LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x487 = INT32_MIN;
	volatile uint16_t x488 = UINT16_MAX;
	volatile int32_t t83 = -18;

	t83 = ((x485*x486)-(x487%x488));

	if (t83 != 32769) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x493 = UINT8_MAX;
	int64_t x494 = -1LL;
	uint8_t x495 = 12U;
	uint64_t x496 = 127620549LLU;

	t84 = ((x493*x494)-(x495%x496));

	if (t84 != 18446744073709551349LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x497 = 1U;
	int32_t x499 = 53487;
	uint32_t t85 = UINT32_MAX;

	t85 = ((x497*x498)-(x499%x500));

	if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x502 = INT64_MIN;
	volatile uint16_t x503 = 2U;
	int16_t x504 = -1;
	volatile uint64_t t86 = 5773656148131LLU;

	t86 = ((x501*x502)-(x503%x504));

	if (t86 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x507 = -1LL;
	volatile uint16_t x508 = UINT16_MAX;
	int64_t t87 = 474LL;

	t87 = ((x505*x506)-(x507%x508));

	if (t87 != -141275010048621350LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x509 = -164971348;
	static uint16_t x510 = 1U;
	int16_t x511 = -4;
	uint64_t x512 = UINT64_MAX;
	volatile uint64_t t88 = 63799339715LLU;

	t88 = ((x509*x510)-(x511%x512));

	if (t88 != 18446744073544580272LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x513 = INT16_MIN;
	int16_t x514 = -1;
	uint16_t x515 = UINT16_MAX;
	int16_t x516 = 4;
	int32_t t89 = 2022576;

	t89 = ((x513*x514)-(x515%x516));

	if (t89 != 32765) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x517 = INT16_MIN;
	uint16_t x518 = 1872U;
	volatile int32_t x519 = INT32_MIN;
	static uint16_t x520 = 2415U;
	volatile int32_t t90 = 6484;

	t90 = ((x517*x518)-(x519%x520));

	if (t90 != -61341253) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x521 = -1LL;
	static int16_t x523 = INT16_MIN;
	int64_t x524 = INT64_MAX;
	volatile int64_t t91 = -6841029062LL;

	t91 = ((x521*x522)-(x523%x524));

	if (t91 != 65536LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x525 = -1;
	volatile uint8_t x526 = UINT8_MAX;
	int8_t x527 = -3;
	uint32_t t92 = 453U;

	t92 = ((x525*x526)-(x527%x528));

	if (t92 != 4294961788U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x529 = 0;
	volatile int64_t x530 = 17492453394884LL;
	static int8_t x531 = INT8_MAX;
	volatile uint64_t x532 = UINT64_MAX;
	volatile uint64_t t93 = 677742LLU;

	t93 = ((x529*x530)-(x531%x532));

	if (t93 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x535 = 20U;
	uint32_t x536 = 1U;
	uint32_t t94 = UINT32_MAX;

	t94 = ((x533*x534)-(x535%x536));

	if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x537 = -1;
	int8_t x538 = INT8_MIN;
	int8_t x539 = 4;
	int64_t x540 = -1LL;
	volatile int64_t t95 = -7700353776290517LL;

	t95 = ((x537*x538)-(x539%x540));

	if (t95 != 128LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x550 = 46U;
	static int8_t x551 = -4;
	volatile int8_t x552 = -53;
	volatile uint32_t t96 = 849218U;

	t96 = ((x549*x550)-(x551%x552));

	if (t96 != 4294961412U) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x557 = 105U;
	uint16_t x558 = UINT16_MAX;
	uint8_t x559 = UINT8_MAX;
	uint32_t x560 = 641464U;
	uint32_t t97 = 1005361800U;

	t97 = ((x557*x558)-(x559%x560));

	if (t97 != 6880920U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x561 = 0;
	static int64_t x562 = -1LL;
	int16_t x564 = INT16_MIN;
	volatile int64_t t98 = -3210719045748753LL;

	t98 = ((x561*x562)-(x563%x564));

	if (t98 != -8428LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x565 = INT16_MIN;
	static int16_t x566 = INT16_MIN;
	static uint16_t x567 = 21U;
	volatile int32_t t99 = 2795865;

	t99 = ((x565*x566)-(x567%x568));

	if (t99 != 1073741819) { NG(); } else { ; }
	
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

