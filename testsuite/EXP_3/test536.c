#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x1 = 1;
int32_t x3 = INT32_MIN;
volatile int64_t t0 = 63591507713161LL;
static int16_t x18 = INT16_MAX;
volatile uint32_t x25 = 1171346U;
static int8_t x31 = INT8_MIN;
uint8_t x60 = UINT8_MAX;
int32_t x76 = -1;
int64_t x78 = -1LL;
volatile uint16_t x82 = UINT16_MAX;
int8_t x91 = INT8_MIN;
volatile uint8_t x92 = 52U;
volatile uint32_t x104 = 28611036U;
uint8_t x106 = UINT8_MAX;
int8_t x109 = INT8_MIN;
uint64_t t20 = 3334138LLU;
int8_t x130 = 1;
static volatile int8_t x131 = -41;
int32_t t21 = -2;
int64_t t23 = 5018593008024LL;
int64_t x146 = 3181869216212715512LL;
int32_t x152 = 804020540;
int32_t x164 = -1;
static int64_t x167 = -98825885898413LL;
static volatile uint64_t t28 = 8561458456LLU;
uint32_t x170 = UINT32_MAX;
uint8_t x172 = 56U;
static uint32_t t29 = 23463626U;
static volatile uint16_t x184 = 52U;
volatile uint32_t t30 = 42360989U;
uint16_t x188 = 585U;
static uint16_t x193 = 3U;
int64_t x197 = -1193LL;
volatile int32_t x200 = INT32_MIN;
int8_t x206 = INT8_MAX;
int16_t x210 = 60;
static int16_t x214 = 0;
int16_t x215 = INT16_MAX;
int64_t t36 = -30828LL;
static int32_t x218 = INT32_MIN;
volatile uint16_t x223 = 423U;
uint8_t x225 = 24U;
int8_t x226 = INT8_MAX;
uint32_t x227 = 11U;
int64_t x248 = INT64_MAX;
uint32_t x263 = UINT32_MAX;
uint8_t x289 = 100U;
static int16_t x290 = -179;
static volatile uint32_t t46 = 3U;
uint64_t x301 = 3100LLU;
int32_t x320 = INT32_MIN;
static volatile uint64_t x321 = 8149LLU;
int32_t x324 = -89635;
uint64_t t50 = 23785LLU;
int8_t x327 = -1;
int32_t x332 = 38;
uint32_t x338 = UINT32_MAX;
uint8_t x347 = 14U;
int64_t t54 = -11391008853LL;
int8_t x355 = INT8_MAX;
int32_t x360 = -1;
volatile int32_t t56 = 0;
int16_t x361 = -1;
int64_t x364 = 106574011LL;
uint16_t x366 = 0U;
uint8_t x370 = 20U;
static uint16_t x371 = UINT16_MAX;
int32_t t59 = -178297;
int16_t x376 = INT16_MIN;
int32_t t60 = -6854134;
uint32_t x378 = 0U;
uint32_t x382 = 854402475U;
uint32_t t62 = 721U;
uint8_t x387 = UINT8_MAX;
uint64_t t63 = 258471789371LLU;
int8_t x391 = 16;
int16_t x401 = 1695;
int8_t x403 = INT8_MAX;
uint16_t x417 = UINT16_MAX;
int32_t x420 = -1481526;
uint8_t x431 = 7U;
int32_t x449 = 1;
int16_t x453 = -1;
volatile uint64_t x456 = UINT64_MAX;
uint64_t t73 = 15331542477LLU;
static int32_t x458 = 1;
volatile uint32_t x470 = UINT32_MAX;
int64_t x490 = -1LL;
int16_t x499 = INT16_MAX;
int16_t x501 = 117;
uint64_t t81 = 106LLU;
int16_t x518 = INT16_MIN;
volatile uint64_t t82 = 101580932458873063LLU;
static uint32_t x528 = 53U;
int8_t x533 = INT8_MIN;
static uint32_t x535 = 1474587U;
static volatile int8_t x536 = INT8_MIN;
volatile uint32_t t84 = 3243U;
static uint8_t x537 = 7U;
volatile uint16_t x539 = UINT16_MAX;
int64_t x551 = -5LL;
volatile uint64_t t89 = 100441LLU;
uint32_t x570 = 23950U;
uint64_t t90 = 41LLU;
int8_t x573 = 0;
uint16_t x575 = 1U;
int16_t x576 = 52;
volatile uint16_t x591 = 20U;
int8_t x595 = 0;
volatile int32_t x621 = 3722694;
static int32_t x624 = -1;


void f0(void) {
	volatile int8_t x2 = -1;
	static int64_t x4 = 1LL;

	t0 = ((x1*x2)*(x3/x4));

	if (t0 != 2147483648LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 4;
	uint64_t x6 = 33179351462LLU;
	int32_t x7 = 294;
	uint16_t x8 = UINT16_MAX;
	volatile uint64_t t1 = 440469725LLU;

	t1 = ((x5*x6)*(x7/x8));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = -1;
	volatile uint16_t x10 = 60U;
	uint8_t x11 = UINT8_MAX;
	uint32_t x12 = UINT32_MAX;
	static uint32_t t2 = 9118439U;

	t2 = ((x9*x10)*(x11/x12));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = 54;
	static volatile uint8_t x19 = 26U;
	uint32_t x20 = 214325888U;
	static uint32_t t3 = 97408062U;

	t3 = ((x17*x18)*(x19/x20));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int8_t x26 = -38;
	static volatile uint32_t x27 = 145458599U;
	static volatile int32_t x28 = INT32_MAX;
	volatile uint32_t t4 = 873U;

	t4 = ((x25*x26)*(x27/x28));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x29 = 8414LL;
	volatile int8_t x30 = INT8_MIN;
	int8_t x32 = -14;
	volatile int64_t t5 = 216LL;

	t5 = ((x29*x30)*(x31/x32));

	if (t5 != -9692928LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x37 = 1U;
	int8_t x38 = INT8_MIN;
	int16_t x39 = -6886;
	volatile int64_t x40 = INT64_MAX;
	int64_t t6 = -51763LL;

	t6 = ((x37*x38)*(x39/x40));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x41 = 2150068U;
	uint64_t x42 = UINT64_MAX;
	uint16_t x43 = 506U;
	volatile int64_t x44 = INT64_MIN;
	volatile uint64_t t7 = 9650040886855242LLU;

	t7 = ((x41*x42)*(x43/x44));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x49 = 1;
	uint8_t x50 = UINT8_MAX;
	static int8_t x51 = INT8_MAX;
	volatile uint64_t x52 = UINT64_MAX;
	volatile uint64_t t8 = 114LLU;

	t8 = ((x49*x50)*(x51/x52));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x57 = -6;
	int64_t x58 = 525LL;
	uint16_t x59 = UINT16_MAX;
	int64_t t9 = -358454631441LL;

	t9 = ((x57*x58)*(x59/x60));

	if (t9 != -809550LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x61 = 0;
	int16_t x62 = -5;
	int16_t x63 = 1;
	static int64_t x64 = -334995489943925439LL;
	int64_t t10 = -6LL;

	t10 = ((x61*x62)*(x63/x64));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint64_t x73 = UINT64_MAX;
	static int32_t x74 = -2647;
	uint16_t x75 = 554U;
	uint64_t t11 = 520950010393133555LLU;

	t11 = ((x73*x74)*(x75/x76));

	if (t11 != 18446744073708085178LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x77 = UINT16_MAX;
	uint8_t x79 = 44U;
	int64_t x80 = INT64_MIN;
	volatile int64_t t12 = 5009LL;

	t12 = ((x77*x78)*(x79/x80));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x81 = -3;
	uint64_t x83 = 248592089111606LLU;
	uint16_t x84 = 17646U;
	volatile uint64_t t13 = 19459668607422LLU;

	t13 = ((x81*x82)*(x83/x84));

	if (t13 != 18443974355491364251LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x89 = 177U;
	uint32_t x90 = UINT32_MAX;
	uint32_t t14 = 12834131U;

	t14 = ((x89*x90)*(x91/x92));

	if (t14 != 354U) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x93 = UINT8_MAX;
	volatile uint8_t x94 = 5U;
	int16_t x95 = INT16_MIN;
	volatile uint32_t x96 = 61U;
	volatile uint32_t t15 = 10U;

	t15 = ((x93*x94)*(x95/x96));

	if (t15 != 3871825630U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x97 = UINT32_MAX;
	int32_t x98 = -3805226;
	uint32_t x99 = 215384U;
	uint8_t x100 = UINT8_MAX;
	uint32_t t16 = 22U;

	t16 = ((x97*x98)*(x99/x100));

	if (t16 != 3211610744U) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x101 = 14928U;
	int64_t x102 = -247020761522LL;
	uint8_t x103 = 38U;
	volatile int64_t t17 = -3379LL;

	t17 = ((x101*x102)*(x103/x104));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x105 = INT8_MIN;
	int8_t x107 = INT8_MAX;
	volatile int64_t x108 = -222225946LL;
	volatile int64_t t18 = 11LL;

	t18 = ((x105*x106)*(x107/x108));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x110 = UINT64_MAX;
	int8_t x111 = INT8_MIN;
	static int16_t x112 = -14273;
	volatile uint64_t t19 = 55809324667613LLU;

	t19 = ((x109*x110)*(x111/x112));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x117 = INT64_MIN;
	int8_t x118 = 0;
	volatile uint16_t x119 = UINT16_MAX;
	uint64_t x120 = 2LLU;

	t20 = ((x117*x118)*(x119/x120));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x129 = -1;
	volatile int16_t x132 = INT16_MIN;

	t21 = ((x129*x130)*(x131/x132));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x133 = 432838;
	uint32_t x134 = UINT32_MAX;
	static int32_t x135 = INT32_MIN;
	int16_t x136 = INT16_MIN;
	volatile uint32_t t22 = 958520U;

	t22 = ((x133*x134)*(x135/x136));

	if (t22 != 1698299904U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x141 = -1;
	int32_t x142 = -1;
	uint16_t x143 = 542U;
	volatile int64_t x144 = INT64_MAX;

	t23 = ((x141*x142)*(x143/x144));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x145 = 1191321859LLU;
	static uint8_t x147 = 28U;
	int16_t x148 = INT16_MIN;
	static volatile uint64_t t24 = 2915929LLU;

	t24 = ((x145*x146)*(x147/x148));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x149 = 0;
	uint16_t x150 = UINT16_MAX;
	int32_t x151 = -1;
	static int32_t t25 = -5555619;

	t25 = ((x149*x150)*(x151/x152));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x157 = -1;
	static int16_t x158 = 1655;
	uint32_t x159 = UINT32_MAX;
	static uint64_t x160 = 449869827350803527LLU;
	static volatile uint64_t t26 = 1033877697778560078LLU;

	t26 = ((x157*x158)*(x159/x160));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x161 = 101183623327699LLU;
	static int32_t x162 = INT32_MIN;
	int8_t x163 = 1;
	uint64_t t27 = 0LLU;

	t27 = ((x161*x162)*(x163/x164));

	if (t27 != 5978097400139481088LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x165 = INT16_MIN;
	static uint64_t x166 = UINT64_MAX;
	int8_t x168 = INT8_MIN;

	t28 = ((x165*x166)*(x167/x168));

	if (t28 != 25299426789982208LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x169 = 358;
	int32_t x171 = INT32_MIN;

	t29 = ((x169*x170)*(x171/x172));

	if (t29 != 843654188U) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x181 = UINT8_MAX;
	volatile int8_t x182 = INT8_MIN;
	uint32_t x183 = UINT32_MAX;

	t30 = ((x181*x182)*(x183/x184));

	if (t30 != 1321558528U) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x185 = 4U;
	volatile int16_t x186 = 2945;
	volatile uint64_t x187 = UINT64_MAX;
	uint64_t t31 = 3LLU;

	t31 = ((x185*x186)*(x187/x188));

	if (t31 != 2522631668199596480LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x194 = 12U;
	int32_t x195 = INT32_MAX;
	uint64_t x196 = 7856461936491218723LLU;
	volatile uint64_t t32 = 18790LLU;

	t32 = ((x193*x194)*(x195/x196));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x198 = INT16_MIN;
	uint8_t x199 = 4U;
	volatile int64_t t33 = -2319383152928LL;

	t33 = ((x197*x198)*(x199/x200));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x205 = UINT32_MAX;
	int8_t x207 = INT8_MAX;
	static int8_t x208 = -1;
	uint32_t t34 = 21730U;

	t34 = ((x205*x206)*(x207/x208));

	if (t34 != 16129U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x209 = -3;
	uint64_t x211 = UINT64_MAX;
	uint16_t x212 = 18U;
	volatile uint64_t t35 = 123LLU;

	t35 = ((x209*x210)*(x211/x212));

	if (t35 != 160LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x213 = 120LL;
	uint16_t x216 = UINT16_MAX;

	t36 = ((x213*x214)*(x215/x216));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x217 = 0;
	volatile int64_t x219 = INT64_MIN;
	uint64_t x220 = 418LLU;
	static volatile uint64_t t37 = 101385LLU;

	t37 = ((x217*x218)*(x219/x220));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x221 = 1U;
	int32_t x222 = 305;
	volatile int16_t x224 = INT16_MAX;
	int32_t t38 = 375;

	t38 = ((x221*x222)*(x223/x224));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x228 = 13992U;
	uint32_t t39 = 85065U;

	t39 = ((x225*x226)*(x227/x228));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x229 = 0LL;
	static int16_t x230 = 1;
	int32_t x231 = INT32_MAX;
	int32_t x232 = INT32_MIN;
	int64_t t40 = 0LL;

	t40 = ((x229*x230)*(x231/x232));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x245 = -1LL;
	int16_t x246 = INT16_MIN;
	static volatile uint32_t x247 = 203859U;
	int64_t t41 = -2047LL;

	t41 = ((x245*x246)*(x247/x248));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x261 = 1886U;
	int16_t x262 = INT16_MIN;
	uint16_t x264 = 372U;
	uint32_t t42 = 60380U;

	t42 = ((x261*x262)*(x263/x264));

	if (t42 != 3279618048U) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x265 = -1;
	int16_t x266 = INT16_MIN;
	static int64_t x267 = 16162LL;
	int8_t x268 = 12;
	int64_t t43 = 48229873973590LL;

	t43 = ((x265*x266)*(x267/x268));

	if (t43 != 44105728LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x281 = INT8_MIN;
	static volatile int16_t x282 = -1;
	int32_t x283 = INT32_MIN;
	int32_t x284 = INT32_MIN;
	int32_t t44 = -384;

	t44 = ((x281*x282)*(x283/x284));

	if (t44 != 128) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x291 = UINT8_MAX;
	uint64_t x292 = 23919799058657LLU;
	uint64_t t45 = 32514512972LLU;

	t45 = ((x289*x290)*(x291/x292));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x293 = 119676611U;
	int32_t x294 = INT32_MIN;
	uint16_t x295 = 1U;
	volatile uint16_t x296 = 99U;

	t46 = ((x293*x294)*(x295/x296));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x297 = -750116785LL;
	volatile uint16_t x298 = UINT16_MAX;
	static uint16_t x299 = UINT16_MAX;
	int64_t x300 = -3LL;
	volatile int64_t t47 = 1LL;

	t47 = ((x297*x298)*(x299/x300));

	if (t47 != 1073876247066178875LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x302 = -55;
	uint64_t x303 = 3432370268363978LLU;
	static int32_t x304 = INT32_MIN;
	volatile uint64_t t48 = 139501582830564LLU;

	t48 = ((x301*x302)*(x303/x304));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x317 = 117476280U;
	uint8_t x318 = UINT8_MAX;
	int8_t x319 = INT8_MAX;
	volatile uint32_t t49 = 838418U;

	t49 = ((x317*x318)*(x319/x320));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x322 = 58U;
	volatile uint8_t x323 = 2U;

	t50 = ((x321*x322)*(x323/x324));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x325 = 117005LL;
	int8_t x326 = INT8_MAX;
	int16_t x328 = INT16_MAX;
	volatile int64_t t51 = 27217874830195921LL;

	t51 = ((x325*x326)*(x327/x328));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x329 = 8919U;
	int16_t x330 = INT16_MIN;
	int8_t x331 = INT8_MAX;
	uint32_t t52 = 13822142U;

	t52 = ((x329*x330)*(x331/x332));

	if (t52 != 3418193920U) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x337 = UINT16_MAX;
	static volatile int16_t x339 = -13156;
	static volatile uint32_t x340 = 45U;
	uint32_t t53 = 2605695U;

	t53 = ((x337*x338)*(x339/x340));

	if (t53 != 2882492897U) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x345 = 0U;
	static int64_t x346 = -1LL;
	uint16_t x348 = 409U;

	t54 = ((x345*x346)*(x347/x348));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x353 = INT32_MIN;
	uint64_t x354 = UINT64_MAX;
	int8_t x356 = -26;
	uint64_t t55 = 242943599011412407LLU;

	t55 = ((x353*x354)*(x355/x356));

	if (t55 != 18446744065119617024LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x357 = INT8_MIN;
	int32_t x358 = 8;
	static uint16_t x359 = UINT16_MAX;

	t56 = ((x357*x358)*(x359/x360));

	if (t56 != 67107840) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x362 = INT32_MAX;
	static uint8_t x363 = UINT8_MAX;
	int64_t t57 = -3527250489192LL;

	t57 = ((x361*x362)*(x363/x364));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x365 = UINT8_MAX;
	static int32_t x367 = -930;
	uint16_t x368 = 113U;
	int32_t t58 = 603;

	t58 = ((x365*x366)*(x367/x368));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x369 = UINT16_MAX;
	uint16_t x372 = UINT16_MAX;

	t59 = ((x369*x370)*(x371/x372));

	if (t59 != 1310700) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x373 = INT16_MIN;
	uint8_t x374 = UINT8_MAX;
	static uint16_t x375 = 78U;

	t60 = ((x373*x374)*(x375/x376));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x377 = INT8_MIN;
	static uint64_t x379 = 43493LLU;
	volatile int64_t x380 = INT64_MIN;
	static volatile uint64_t t61 = 6953LLU;

	t61 = ((x377*x378)*(x379/x380));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x381 = INT32_MIN;
	uint8_t x383 = UINT8_MAX;
	uint8_t x384 = UINT8_MAX;

	t62 = ((x381*x382)*(x383/x384));

	if (t62 != 2147483648U) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x385 = INT64_MIN;
	uint64_t x386 = UINT64_MAX;
	uint16_t x388 = UINT16_MAX;

	t63 = ((x385*x386)*(x387/x388));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x389 = UINT32_MAX;
	int32_t x390 = INT32_MIN;
	int8_t x392 = INT8_MIN;
	uint32_t t64 = 11U;

	t64 = ((x389*x390)*(x391/x392));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x402 = UINT16_MAX;
	int64_t x404 = -115782LL;
	volatile int64_t t65 = -695159640738LL;

	t65 = ((x401*x402)*(x403/x404));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x409 = INT16_MIN;
	int8_t x410 = 2;
	int16_t x411 = INT16_MIN;
	static uint64_t x412 = 15476LLU;
	uint64_t t66 = 1998288868709365725LLU;

	t66 = ((x409*x410)*(x411/x412));

	if (t66 != 14117552132916707328LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x413 = INT8_MAX;
	int16_t x414 = 13343;
	static int8_t x415 = 0;
	static int64_t x416 = INT64_MIN;
	int64_t t67 = -3417806557378822LL;

	t67 = ((x413*x414)*(x415/x416));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x418 = 24643U;
	static volatile int16_t x419 = -1;
	int32_t t68 = -512398;

	t68 = ((x417*x418)*(x419/x420));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x429 = 15;
	volatile int8_t x430 = INT8_MIN;
	int32_t x432 = 38;
	volatile int32_t t69 = -23483786;

	t69 = ((x429*x430)*(x431/x432));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x437 = UINT64_MAX;
	int8_t x438 = INT8_MIN;
	int8_t x439 = -56;
	volatile int8_t x440 = INT8_MIN;
	volatile uint64_t t70 = 5LLU;

	t70 = ((x437*x438)*(x439/x440));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x445 = INT8_MAX;
	static int64_t x446 = 26LL;
	uint16_t x447 = 6U;
	static int32_t x448 = INT32_MAX;
	int64_t t71 = -1065889202164071LL;

	t71 = ((x445*x446)*(x447/x448));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x450 = -1;
	int32_t x451 = 4138;
	int64_t x452 = -1LL;
	static volatile int64_t t72 = 91679160LL;

	t72 = ((x449*x450)*(x451/x452));

	if (t72 != 4138LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x454 = INT8_MIN;
	int8_t x455 = 0;

	t73 = ((x453*x454)*(x455/x456));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x457 = 0;
	int8_t x459 = -1;
	int16_t x460 = -1;
	volatile int32_t t74 = 30842732;

	t74 = ((x457*x458)*(x459/x460));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x461 = 7;
	uint8_t x462 = 2U;
	static int16_t x463 = INT16_MIN;
	static int32_t x464 = -1;
	static volatile int32_t t75 = -3120;

	t75 = ((x461*x462)*(x463/x464));

	if (t75 != 458752) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x469 = INT16_MIN;
	uint16_t x471 = UINT16_MAX;
	int32_t x472 = INT32_MIN;
	uint32_t t76 = 502409U;

	t76 = ((x469*x470)*(x471/x472));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x477 = 0U;
	volatile int8_t x478 = 13;
	int64_t x479 = INT64_MIN;
	static int16_t x480 = INT16_MAX;
	volatile int64_t t77 = -3972207425670LL;

	t77 = ((x477*x478)*(x479/x480));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x489 = -1;
	volatile int64_t x491 = INT64_MIN;
	volatile int32_t x492 = INT32_MIN;
	volatile int64_t t78 = 26LL;

	t78 = ((x489*x490)*(x491/x492));

	if (t78 != 4294967296LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x497 = UINT64_MAX;
	uint32_t x498 = UINT32_MAX;
	int32_t x500 = -1;
	volatile uint64_t t79 = 447816720433826LLU;

	t79 = ((x497*x498)*(x499/x500));

	if (t79 != 140733193355265LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int8_t x502 = -7;
	int32_t x503 = INT32_MIN;
	int64_t x504 = -976160052792050LL;
	volatile int64_t t80 = -41071LL;

	t80 = ((x501*x502)*(x503/x504));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x513 = 859;
	uint64_t x514 = 7916029687322149LLU;
	int32_t x515 = INT32_MIN;
	int64_t x516 = INT64_MIN;

	t81 = ((x513*x514)*(x515/x516));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x517 = 123041136LLU;
	int32_t x519 = INT32_MAX;
	int16_t x520 = INT16_MIN;

	t82 = ((x517*x518)*(x519/x520));

	if (t82 != 264224795779399680LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x525 = 27612U;
	int16_t x526 = -62;
	volatile uint32_t x527 = UINT32_MAX;
	volatile uint32_t t83 = 36U;

	t83 = ((x525*x526)*(x527/x528));

	if (t83 != 730690704U) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x534 = UINT32_MAX;

	t84 = ((x533*x534)*(x535/x536));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x538 = 11U;
	int16_t x540 = INT16_MIN;
	int32_t t85 = 403076;

	t85 = ((x537*x538)*(x539/x540));

	if (t85 != -77) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x541 = -17;
	int8_t x542 = -1;
	volatile uint16_t x543 = 3U;
	int16_t x544 = -130;
	static int32_t t86 = -5;

	t86 = ((x541*x542)*(x543/x544));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x545 = 4;
	uint16_t x546 = UINT16_MAX;
	volatile uint32_t x547 = 36760228U;
	volatile uint8_t x548 = UINT8_MAX;
	uint32_t t87 = 599376928U;

	t87 = ((x545*x546)*(x547/x548));

	if (t87 != 3429577612U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x549 = 3;
	volatile int8_t x550 = INT8_MIN;
	int8_t x552 = 2;
	static volatile int64_t t88 = -2738222LL;

	t88 = ((x549*x550)*(x551/x552));

	if (t88 != 768LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x561 = UINT64_MAX;
	int16_t x562 = INT16_MAX;
	uint64_t x563 = 1LLU;
	int16_t x564 = -1;

	t89 = ((x561*x562)*(x563/x564));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x569 = 4532168001120403639LLU;
	int64_t x571 = INT64_MIN;
	int64_t x572 = 1755173490LL;

	t90 = ((x569*x570)*(x571/x572));

	if (t90 != 17120937525169541704LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x574 = INT16_MIN;
	int32_t t91 = 65743141;

	t91 = ((x573*x574)*(x575/x576));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x581 = 58;
	int32_t x582 = -1;
	int32_t x583 = 0;
	static volatile int16_t x584 = INT16_MIN;
	static int32_t t92 = -10;

	t92 = ((x581*x582)*(x583/x584));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x585 = 6;
	volatile int32_t x586 = 6;
	static uint64_t x587 = 25288479LLU;
	int64_t x588 = -412163414669872903LL;
	uint64_t t93 = 131996881640467LLU;

	t93 = ((x585*x586)*(x587/x588));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x589 = 4592U;
	static uint64_t x590 = UINT64_MAX;
	int32_t x592 = -1;
	volatile uint64_t t94 = 919LLU;

	t94 = ((x589*x590)*(x591/x592));

	if (t94 != 91840LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x593 = -4;
	volatile int16_t x594 = 581;
	int32_t x596 = INT32_MAX;
	volatile int32_t t95 = -4005373;

	t95 = ((x593*x594)*(x595/x596));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x601 = 10704801242718LL;
	uint16_t x602 = UINT16_MAX;
	static int8_t x603 = -1;
	int8_t x604 = INT8_MAX;
	int64_t t96 = -286797311LL;

	t96 = ((x601*x602)*(x603/x604));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x605 = 46U;
	int16_t x606 = 748;
	static int16_t x607 = 3;
	uint32_t x608 = UINT32_MAX;
	uint32_t t97 = 514U;

	t97 = ((x605*x606)*(x607/x608));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x609 = 3;
	volatile uint16_t x610 = 949U;
	int64_t x611 = 37165975723LL;
	static int8_t x612 = INT8_MAX;
	int64_t t98 = -165142LL;

	t98 = ((x609*x610)*(x611/x612));

	if (t98 != 833161675866LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x622 = 34110U;
	volatile uint8_t x623 = 95U;
	static volatile uint32_t t99 = 19917633U;

	t99 = ((x621*x622)*(x623/x624));

	if (t99 != 1359362164U) { NG(); } else { ; }
	
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

