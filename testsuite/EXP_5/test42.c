#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -782802;
static int32_t x8 = INT32_MIN;
uint8_t x11 = UINT8_MAX;
uint16_t x12 = UINT16_MAX;
volatile uint32_t x13 = UINT32_MAX;
static uint8_t x14 = 45U;
volatile int16_t x27 = -1;
uint16_t x47 = 21074U;
int32_t x49 = 5;
volatile int32_t t8 = 1321;
int64_t x55 = -1LL;
static int64_t x56 = INT64_MIN;
int64_t t9 = -160LL;
volatile uint8_t x58 = UINT8_MAX;
static int8_t x59 = INT8_MIN;
int64_t x60 = -1LL;
static int64_t t10 = -126LL;
int64_t x63 = -1LL;
uint64_t x65 = 43744445LLU;
volatile uint64_t t12 = 7LLU;
volatile int64_t x77 = 1107879256604LL;
int8_t x78 = 3;
static int8_t x79 = -1;
int32_t x88 = 3067037;
uint8_t x92 = 60U;
volatile int64_t x96 = INT64_MIN;
static volatile uint64_t t20 = 0LLU;
static int32_t x110 = INT32_MIN;
static volatile int32_t t21 = -1557948;
volatile uint64_t x115 = UINT64_MAX;
int32_t x122 = -1;
static volatile uint64_t t23 = 964LLU;
uint64_t x133 = 16569LLU;
static volatile uint64_t t24 = 3LLU;
volatile uint32_t t25 = 127472U;
static uint64_t x141 = 11LLU;
static uint32_t x144 = 773888015U;
static int32_t x163 = INT32_MIN;
static uint32_t t29 = 96U;
uint32_t x165 = UINT32_MAX;
volatile int8_t x175 = -1;
uint32_t x182 = 2845432U;
int64_t x183 = -14LL;
int64_t t33 = -1208808078391LL;
uint8_t x197 = 9U;
int64_t x200 = 4LL;
static int32_t x209 = INT32_MIN;
static int16_t x216 = -6339;
uint64_t t37 = 3138858854523448LLU;
uint64_t t38 = 234LLU;
static volatile uint16_t x226 = 17U;
static int8_t x249 = INT8_MAX;
int16_t x250 = -1;
int32_t x252 = INT32_MIN;
volatile uint16_t x255 = UINT16_MAX;
uint16_t x272 = UINT16_MAX;
uint8_t x276 = 37U;
int16_t x279 = -91;
int64_t x287 = 335446293LL;
static int16_t x291 = -1;
int32_t t53 = 2;
int64_t x295 = -123583786277245LL;
int64_t t54 = -25333LL;
volatile int32_t x304 = -1;
volatile uint32_t x307 = 10U;
uint64_t x318 = UINT64_MAX;
static int16_t x321 = -1;
volatile uint64_t t59 = 33682520LLU;
volatile uint64_t x337 = 7941868191236LLU;
int16_t x338 = -1;
int32_t x348 = INT32_MAX;
static uint32_t x352 = UINT32_MAX;
static volatile int8_t x353 = INT8_MAX;
static uint16_t x365 = 4U;
uint32_t x368 = UINT32_MAX;
static int64_t t70 = 14466184437LL;
int64_t t71 = -3858621LL;
int32_t x378 = -141869;
static uint32_t x382 = UINT32_MAX;
uint8_t x390 = 3U;
int32_t x391 = INT32_MIN;
uint64_t t80 = 908601LLU;
volatile int32_t t81 = -5229;
volatile int64_t t82 = -1674574362LL;
int16_t x421 = INT16_MIN;
volatile uint8_t x433 = 38U;
int64_t x435 = INT64_MIN;
uint8_t x437 = 2U;
volatile int8_t x441 = 10;
int16_t x442 = INT16_MAX;
volatile uint8_t x452 = 6U;
int64_t x457 = INT64_MIN;
static int16_t x474 = INT16_MIN;
int8_t x475 = INT8_MIN;
volatile uint64_t t93 = 14485613LLU;
int8_t x481 = -26;
int16_t x493 = -1;
volatile int8_t x495 = INT8_MAX;
uint64_t x497 = 29604LLU;
int16_t x499 = -686;
static int64_t x502 = INT64_MAX;
int64_t t97 = -1821529467534302LL;


void f0(void) {
	int8_t x1 = INT8_MAX;
	uint8_t x2 = UINT8_MAX;
	uint16_t x3 = UINT16_MAX;
	uint16_t x4 = 8U;

	t0 = (x1*((x2+x3)/x4));

	if (t0 != 1044321) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = -6767;
	static int32_t x6 = 2;
	uint64_t x7 = 1226267324528540LLU;
	volatile uint64_t t1 = 6959727461LLU;

	t1 = (x5*((x6+x7)/x8));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = 458843U;
	static uint32_t x10 = 11U;
	static uint32_t t2 = 414U;

	t2 = (x9*((x10+x11)/x12));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x15 = 810854U;
	volatile int32_t x16 = INT32_MAX;
	volatile uint32_t t3 = 512975U;

	t3 = (x13*((x14+x15)/x16));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x25 = UINT16_MAX;
	uint32_t x26 = UINT32_MAX;
	volatile int64_t x28 = INT64_MAX;
	static volatile int64_t t4 = -30358423444LL;

	t4 = (x25*((x26+x27)/x28));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x29 = INT16_MIN;
	static int64_t x30 = -144694492LL;
	static uint16_t x31 = 22U;
	uint16_t x32 = UINT16_MAX;
	int64_t t5 = -2879021024893281779LL;

	t5 = (x29*((x30+x31)/x32));

	if (t5 != 72318976LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x41 = -57256348552LL;
	static int16_t x42 = INT16_MIN;
	volatile int64_t x43 = -1LL;
	int16_t x44 = INT16_MIN;
	static int64_t t6 = 4843181460LL;

	t6 = (x41*((x42+x43)/x44));

	if (t6 != -57256348552LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x45 = INT32_MAX;
	int32_t x46 = 10831;
	uint16_t x48 = UINT16_MAX;
	volatile int32_t t7 = -2;

	t7 = (x45*((x46+x47)/x48));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x50 = INT8_MIN;
	static uint16_t x51 = 6251U;
	uint8_t x52 = 3U;

	t8 = (x49*((x50+x51)/x52));

	if (t8 != 10205) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x53 = 11U;
	volatile uint32_t x54 = 99513U;

	t9 = (x53*((x54+x55)/x56));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x57 = 6U;

	t10 = (x57*((x58+x59)/x60));

	if (t10 != -762LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x61 = INT8_MIN;
	uint64_t x62 = 100LLU;
	int16_t x64 = 1;
	volatile uint64_t t11 = 29409273680224LLU;

	t11 = (x61*((x62+x63)/x64));

	if (t11 != 18446744073709538944LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x66 = 0U;
	static volatile int8_t x67 = INT8_MIN;
	int64_t x68 = -1LL;

	t12 = (x65*((x66+x67)/x68));

	if (t12 != 18258863118652169856LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x69 = 31U;
	uint64_t x70 = UINT64_MAX;
	int8_t x71 = -12;
	static uint16_t x72 = UINT16_MAX;
	static volatile uint64_t t13 = 555558152591519LLU;

	t13 = (x69*((x70+x71)/x72));

	if (t13 != 8725857424048128LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x80 = -340;
	int64_t t14 = 1LL;

	t14 = (x77*((x78+x79)/x80));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x85 = -5;
	static uint64_t x86 = UINT64_MAX;
	int32_t x87 = -357354611;
	volatile uint64_t t15 = 12LLU;

	t15 = (x85*((x86+x87)/x88));

	if (t15 != 18446714001127979646LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x89 = -3361;
	int8_t x90 = -1;
	uint8_t x91 = UINT8_MAX;
	static int32_t t16 = -17994;

	t16 = (x89*((x90+x91)/x92));

	if (t16 != -13444) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x93 = 6U;
	int64_t x94 = 31549045145648LL;
	int64_t x95 = INT64_MIN;
	volatile int64_t t17 = 415611353495LL;

	t17 = (x93*((x94+x95)/x96));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x97 = -245;
	int16_t x98 = -1;
	static int16_t x99 = -14;
	volatile uint16_t x100 = UINT16_MAX;
	volatile int32_t t18 = -31827;

	t18 = (x97*((x98+x99)/x100));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x101 = 501;
	volatile int16_t x102 = 891;
	static uint32_t x103 = 1053007460U;
	static int32_t x104 = INT32_MIN;
	volatile uint32_t t19 = 47507997U;

	t19 = (x101*((x102+x103)/x104));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x105 = INT32_MIN;
	int16_t x106 = -7;
	static volatile int64_t x107 = -1LL;
	uint64_t x108 = 30567LLU;

	t20 = (x105*((x106+x107)/x108));

	if (t20 != 565466001097883648LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x109 = INT8_MIN;
	uint8_t x111 = UINT8_MAX;
	int32_t x112 = -60192;

	t21 = (x109*((x110+x111)/x112));

	if (t21 != -4566656) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x113 = -937;
	int16_t x114 = INT16_MIN;
	int16_t x116 = -1;
	volatile uint64_t t22 = 6LLU;

	t22 = (x113*((x114+x115)/x116));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x121 = 94120LLU;
	int8_t x123 = 0;
	int32_t x124 = 19;

	t23 = (x121*((x122+x123)/x124));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x134 = 42628702;
	uint8_t x135 = 115U;
	static int16_t x136 = INT16_MIN;

	t24 = (x133*((x134+x135)/x136));

	if (t24 != 18446744073688011916LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x137 = 25U;
	uint32_t x138 = 690937U;
	uint16_t x139 = 3050U;
	volatile int32_t x140 = -1;

	t25 = (x137*((x138+x139)/x140));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x142 = -200;
	int16_t x143 = INT16_MIN;
	uint64_t t26 = 8996545385690562LLU;

	t26 = (x141*((x142+x143)/x144));

	if (t26 != 55LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x145 = 48;
	int16_t x146 = INT16_MIN;
	uint64_t x147 = UINT64_MAX;
	int32_t x148 = 30238317;
	uint64_t t27 = 3922LLU;

	t27 = (x145*((x146+x147)/x148));

	if (t27 != 29282175841248LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x157 = -1LL;
	uint32_t x158 = UINT32_MAX;
	static uint64_t x159 = UINT64_MAX;
	int8_t x160 = -1;
	volatile uint64_t t28 = 1984453388LLU;

	t28 = (x157*((x158+x159)/x160));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x161 = 2U;
	uint32_t x162 = 2530583U;
	uint8_t x164 = UINT8_MAX;

	t29 = (x161*((x162+x163)/x164));

	if (t29 != 16862856U) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x166 = 7U;
	static int64_t x167 = -1LL;
	volatile int32_t x168 = INT32_MAX;
	volatile int64_t t30 = 52936364415749811LL;

	t30 = (x165*((x166+x167)/x168));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x173 = INT8_MAX;
	static int8_t x174 = INT8_MIN;
	int8_t x176 = 2;
	volatile int32_t t31 = -1229267;

	t31 = (x173*((x174+x175)/x176));

	if (t31 != -8128) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x181 = 1U;
	static int32_t x184 = -1;
	static int64_t t32 = -2119186666212220LL;

	t32 = (x181*((x182+x183)/x184));

	if (t32 != -2845418LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x193 = 23U;
	static int64_t x194 = INT64_MIN;
	uint8_t x195 = UINT8_MAX;
	static int8_t x196 = INT8_MAX;

	t33 = (x193*((x194+x195)/x196));

	if (t33 != -1670374463367400297LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x198 = INT8_MAX;
	uint8_t x199 = 0U;
	volatile int64_t t34 = -2177LL;

	t34 = (x197*((x198+x199)/x200));

	if (t34 != 279LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x210 = -56723995LL;
	volatile uint8_t x211 = UINT8_MAX;
	static int64_t x212 = INT64_MIN;
	volatile int64_t t35 = -24099271088LL;

	t35 = (x209*((x210+x211)/x212));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x213 = 81;
	uint64_t x214 = UINT64_MAX;
	uint32_t x215 = UINT32_MAX;
	uint64_t t36 = 941868687185LLU;

	t36 = (x213*((x214+x215)/x216));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x217 = 2731119239628100272LLU;
	uint64_t x218 = UINT64_MAX;
	uint64_t x219 = 76609155LLU;
	volatile int32_t x220 = 152;

	t37 = (x217*((x218+x219)/x220));

	if (t37 != 7171827033192203984LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x221 = -1LL;
	int16_t x222 = INT16_MIN;
	int16_t x223 = 0;
	uint64_t x224 = UINT64_MAX;

	t38 = (x221*((x222+x223)/x224));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x225 = INT32_MAX;
	uint32_t x227 = UINT32_MAX;
	int8_t x228 = -1;
	uint32_t t39 = 63U;

	t39 = (x225*((x226+x227)/x228));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x229 = INT64_MAX;
	volatile int16_t x230 = INT16_MIN;
	int16_t x231 = 0;
	volatile uint64_t x232 = 917077LLU;
	uint64_t t40 = 6854206543211LLU;

	t40 = (x229*((x230+x231)/x232));

	if (t40 != 18446723958992822586LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x233 = INT8_MAX;
	uint64_t x234 = 3LLU;
	int32_t x235 = -101003;
	int16_t x236 = -1;
	uint64_t t41 = 221536347812921LLU;

	t41 = (x233*((x234+x235)/x236));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x241 = UINT32_MAX;
	int16_t x242 = -1;
	static uint16_t x243 = 66U;
	uint64_t x244 = 28LLU;
	uint64_t t42 = 4670LLU;

	t42 = (x241*((x242+x243)/x244));

	if (t42 != 8589934590LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x251 = 123354LLU;
	volatile uint64_t t43 = 24213620448828LLU;

	t43 = (x249*((x250+x251)/x252));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x253 = 10086U;
	int16_t x254 = 1027;
	int32_t x256 = -1;
	volatile int32_t t44 = 1;

	t44 = (x253*((x254+x255)/x256));

	if (t44 != -671344332) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x257 = -1;
	uint8_t x258 = 1U;
	int64_t x259 = 9732036282LL;
	uint64_t x260 = 12685927291465LLU;
	uint64_t t45 = 173744314952333914LLU;

	t45 = (x257*((x258+x259)/x260));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x261 = 1;
	static uint8_t x262 = UINT8_MAX;
	int8_t x263 = INT8_MIN;
	volatile int16_t x264 = -1;
	volatile int32_t t46 = 669904;

	t46 = (x261*((x262+x263)/x264));

	if (t46 != -127) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x265 = UINT8_MAX;
	int32_t x266 = INT32_MIN;
	uint16_t x267 = 10U;
	static uint32_t x268 = 568460936U;
	static uint32_t t47 = 1U;

	t47 = (x265*((x266+x267)/x268));

	if (t47 != 765U) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x269 = UINT64_MAX;
	int64_t x270 = 28991280208433983LL;
	int32_t x271 = -1;
	uint64_t t48 = 1143078357857158974LLU;

	t48 = (x269*((x270+x271)/x272));

	if (t48 != 18446743631330972103LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x273 = 918;
	volatile uint32_t x274 = 11016639U;
	volatile int32_t x275 = INT32_MIN;
	volatile uint32_t t49 = 28864U;

	t49 = (x273*((x274+x275)/x276));

	if (t49 != 2014534158U) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x277 = -9;
	static int16_t x278 = INT16_MIN;
	int32_t x280 = -1;
	volatile int32_t t50 = -15523568;

	t50 = (x277*((x278+x279)/x280));

	if (t50 != -295731) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x281 = -1;
	int8_t x282 = -8;
	int8_t x283 = INT8_MAX;
	int8_t x284 = -26;
	int32_t t51 = -44909;

	t51 = (x281*((x282+x283)/x284));

	if (t51 != 4) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x285 = 2U;
	int8_t x286 = -12;
	volatile int16_t x288 = 932;
	int64_t t52 = -7487505698LL;

	t52 = (x285*((x286+x287)/x288));

	if (t52 != 719840LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x289 = UINT8_MAX;
	static int32_t x290 = INT32_MAX;
	uint16_t x292 = 32765U;

	t53 = (x289*((x290+x291)/x292));

	if (t53 != 16713210) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x293 = 7U;
	static volatile int32_t x294 = -1;
	int8_t x296 = -3;

	t54 = (x293*((x294+x295)/x296));

	if (t54 != 288362167980236LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x301 = -1940902;
	static uint8_t x302 = 2U;
	int16_t x303 = 1;
	volatile int32_t t55 = 124258;

	t55 = (x301*((x302+x303)/x304));

	if (t55 != 5822706) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int64_t x305 = INT64_MAX;
	int32_t x306 = INT32_MAX;
	static volatile int32_t x308 = INT32_MIN;
	static int64_t t56 = INT64_MAX;

	t56 = (x305*((x306+x307)/x308));

	if (t56 != INT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x313 = 46U;
	volatile uint64_t x314 = 230448736499LLU;
	int32_t x315 = INT32_MIN;
	static int8_t x316 = -1;
	static uint64_t t57 = 88845918304048LLU;

	t57 = (x313*((x314+x315)/x316));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x317 = 17LL;
	uint64_t x319 = 397459LLU;
	int16_t x320 = INT16_MIN;
	static uint64_t t58 = 15940862002LLU;

	t58 = (x317*((x318+x319)/x320));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x322 = INT64_MIN;
	uint64_t x323 = 6648368752269382LLU;
	static int8_t x324 = -1;

	t59 = (x321*((x322+x323)/x324));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x325 = INT16_MIN;
	int32_t x326 = 997977743;
	int16_t x327 = INT16_MIN;
	static int64_t x328 = 103LL;
	volatile int64_t t60 = 3881495297242LL;

	t60 = (x325*((x326+x327)/x328));

	if (t60 != -317482139648LL) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint64_t x329 = 24773282412875873LLU;
	volatile int8_t x330 = 5;
	int8_t x331 = INT8_MIN;
	int8_t x332 = 1;
	static uint64_t t61 = 6872159207LLU;

	t61 = (x329*((x330+x331)/x332));

	if (t61 != 15399630336925819237LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x333 = UINT16_MAX;
	int8_t x334 = 27;
	uint32_t x335 = 6822421U;
	int16_t x336 = -11;
	uint32_t t62 = 3U;

	t62 = (x333*((x334+x335)/x336));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x339 = INT8_MIN;
	static uint32_t x340 = 5U;
	volatile uint64_t t63 = 36130761265549LLU;

	t63 = (x337*((x338+x339)/x340));

	if (t63 != 15164058824487606884LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x341 = -1;
	volatile int8_t x342 = INT8_MIN;
	int8_t x343 = 1;
	int32_t x344 = -29725;
	int32_t t64 = -6;

	t64 = (x341*((x342+x343)/x344));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int8_t x345 = -1;
	volatile int16_t x346 = -1803;
	volatile int16_t x347 = -1;
	int32_t t65 = 2;

	t65 = (x345*((x346+x347)/x348));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x349 = 1941905LLU;
	int8_t x350 = -1;
	int16_t x351 = INT16_MIN;
	uint64_t t66 = 459077310LLU;

	t66 = (x349*((x350+x351)/x352));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x354 = -1;
	static uint32_t x355 = 108698U;
	volatile int64_t x356 = 3034683102151638452LL;
	int64_t t67 = 705321233LL;

	t67 = (x353*((x354+x355)/x356));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x357 = INT16_MIN;
	int64_t x358 = 0LL;
	static uint64_t x359 = 114LLU;
	volatile uint16_t x360 = UINT16_MAX;
	uint64_t t68 = 300LLU;

	t68 = (x357*((x358+x359)/x360));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x361 = 21U;
	uint16_t x362 = 39U;
	uint64_t x363 = UINT64_MAX;
	int32_t x364 = INT32_MIN;
	uint64_t t69 = 153356795LLU;

	t69 = (x361*((x362+x363)/x364));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x366 = -135;
	static int64_t x367 = INT64_MAX;

	t70 = (x365*((x366+x367)/x368));

	if (t70 != 8589934592LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x369 = INT32_MIN;
	int64_t x370 = 90LL;
	int32_t x371 = -1;
	static int64_t x372 = INT64_MIN;

	t71 = (x369*((x370+x371)/x372));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x373 = 20465051270756LL;
	uint64_t x374 = UINT64_MAX;
	static int8_t x375 = INT8_MAX;
	volatile int32_t x376 = 33848;
	static volatile uint64_t t72 = 28352LLU;

	t72 = (x373*((x374+x375)/x376));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x377 = -1;
	int64_t x379 = 2035890470LL;
	uint32_t x380 = UINT32_MAX;
	int64_t t73 = -2437377542LL;

	t73 = (x377*((x378+x379)/x380));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x381 = 69681282891779LLU;
	uint32_t x383 = 1153987U;
	static int8_t x384 = INT8_MIN;
	volatile uint64_t t74 = 5273953031772334LLU;

	t74 = (x381*((x382+x383)/x384));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x385 = -1;
	volatile int8_t x386 = INT8_MIN;
	int32_t x387 = 7;
	int64_t x388 = INT64_MIN;
	volatile int64_t t75 = 23211346LL;

	t75 = (x385*((x386+x387)/x388));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x389 = -1LL;
	int8_t x392 = -1;
	volatile int64_t t76 = -1525547676937522160LL;

	t76 = (x389*((x390+x391)/x392));

	if (t76 != -2147483645LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x393 = 5866U;
	static uint32_t x394 = UINT32_MAX;
	int8_t x395 = INT8_MIN;
	int64_t x396 = INT64_MIN;
	int64_t t77 = 3006716467233LL;

	t77 = (x393*((x394+x395)/x396));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x397 = INT8_MIN;
	int32_t x398 = -495110196;
	int64_t x399 = -16239293905LL;
	int8_t x400 = INT8_MIN;
	volatile int64_t t78 = 211503760743557866LL;

	t78 = (x397*((x398+x399)/x400));

	if (t78 != -16734404096LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x401 = UINT32_MAX;
	int32_t x402 = INT32_MAX;
	int8_t x403 = -12;
	volatile int32_t x404 = INT32_MIN;
	static volatile uint32_t t79 = 1450U;

	t79 = (x401*((x402+x403)/x404));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x405 = 12;
	volatile uint64_t x406 = 410870290189348LLU;
	int32_t x407 = 10;
	uint64_t x408 = 121142638575469LLU;

	t80 = (x405*((x406+x407)/x408));

	if (t80 != 36LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x413 = 62U;
	static int8_t x414 = 38;
	int32_t x415 = -1;
	uint8_t x416 = 15U;

	t81 = (x413*((x414+x415)/x416));

	if (t81 != 124) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x417 = 5303048;
	int64_t x418 = -24917LL;
	uint32_t x419 = UINT32_MAX;
	volatile uint8_t x420 = 7U;

	t82 = (x417*((x418+x419)/x420));

	if (t82 != 3253755079421408LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x422 = -102796873;
	uint32_t x423 = 1215885U;
	uint32_t x424 = 555U;
	uint32_t t83 = 1493287250U;

	t83 = (x421*((x422+x423)/x424));

	if (t83 != 1524531200U) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x429 = -1LL;
	int8_t x430 = 3;
	uint32_t x431 = UINT32_MAX;
	int32_t x432 = 31;
	static volatile int64_t t84 = -528192LL;

	t84 = (x429*((x430+x431)/x432));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x434 = INT8_MAX;
	static int32_t x436 = INT32_MIN;
	int64_t t85 = 5500LL;

	t85 = (x433*((x434+x435)/x436));

	if (t85 != 163208757210LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x438 = 37U;
	static int8_t x439 = 1;
	volatile int16_t x440 = 189;
	int32_t t86 = -877370;

	t86 = (x437*((x438+x439)/x440));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x443 = INT8_MIN;
	static int32_t x444 = 2882868;
	int32_t t87 = 4046268;

	t87 = (x441*((x442+x443)/x444));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x449 = 1610LLU;
	int64_t x450 = INT64_MIN;
	static int8_t x451 = INT8_MAX;
	static volatile uint64_t t88 = 482239179LLU;

	t88 = (x449*((x450+x451)/x452));

	if (t88 != 15372286728091327360LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x453 = 2159718694562LLU;
	uint8_t x454 = UINT8_MAX;
	uint16_t x455 = 1U;
	uint8_t x456 = 3U;
	volatile uint64_t t89 = 988416849LLU;

	t89 = (x453*((x454+x455)/x456));

	if (t89 != 183576089037770LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x458 = 5850824LLU;
	int8_t x459 = 3;
	static uint64_t x460 = UINT64_MAX;
	static volatile uint64_t t90 = 275881384250676566LLU;

	t90 = (x457*((x458+x459)/x460));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x461 = INT8_MIN;
	uint32_t x462 = UINT32_MAX;
	int16_t x463 = INT16_MIN;
	uint8_t x464 = 19U;
	uint32_t t91 = 16U;

	t91 = (x461*((x462+x463)/x464));

	if (t91 != 1130475392U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x473 = INT8_MAX;
	static int16_t x476 = INT16_MAX;
	static int32_t t92 = -226;

	t92 = (x473*((x474+x475)/x476));

	if (t92 != -127) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x477 = INT16_MIN;
	static uint16_t x478 = 12775U;
	volatile int8_t x479 = -1;
	uint64_t x480 = 172760555848361593LLU;

	t93 = (x477*((x478+x479)/x480));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x482 = INT16_MIN;
	int8_t x483 = INT8_MIN;
	uint32_t x484 = UINT32_MAX;
	uint32_t t94 = 18695U;

	t94 = (x481*((x482+x483)/x484));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x494 = -28;
	uint16_t x496 = UINT16_MAX;
	volatile int32_t t95 = -690722;

	t95 = (x493*((x494+x495)/x496));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x498 = INT32_MAX;
	int32_t x500 = -17530345;
	static volatile uint64_t t96 = 28892LLU;

	t96 = (x497*((x498+x499)/x500));

	if (t96 != 18446744073705939928LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x501 = 18;
	static int32_t x503 = -1;
	static volatile int8_t x504 = INT8_MIN;

	t97 = (x501*((x502+x503)/x504));

	if (t97 != -1297036692682702830LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x505 = 1020U;
	uint16_t x506 = UINT16_MAX;
	static uint32_t x507 = 67037U;
	int16_t x508 = -1;
	static uint32_t t98 = 587861U;

	t98 = (x505*((x506+x507)/x508));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x513 = -1;
	int32_t x514 = INT32_MIN;
	int32_t x515 = 566;
	int64_t x516 = 39LL;
	volatile int64_t t99 = 15665313LL;

	t99 = (x513*((x514+x515)/x516));

	if (t99 != 55063668LL) { NG(); } else { ; }
	
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

