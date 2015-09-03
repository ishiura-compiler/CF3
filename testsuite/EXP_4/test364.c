#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x4 = 7284U;
uint64_t x10 = 51832LLU;
int16_t x27 = -1;
volatile int32_t t3 = -2;
volatile uint8_t x31 = 11U;
int16_t x34 = INT16_MIN;
int8_t x46 = INT8_MIN;
volatile int64_t x48 = -1LL;
volatile uint64_t x52 = UINT64_MAX;
uint32_t x55 = UINT32_MAX;
uint32_t x69 = 1U;
volatile uint32_t t11 = 382329263U;
int32_t x106 = -3;
uint64_t x107 = 899600736812LLU;
uint64_t t17 = 93891926318002258LLU;
int32_t x114 = INT32_MIN;
uint64_t x116 = UINT64_MAX;
volatile int16_t x118 = INT16_MIN;
int8_t x119 = 9;
int8_t x120 = -6;
uint64_t t19 = 30946LLU;
volatile int64_t x122 = -95198LL;
uint32_t x126 = UINT32_MAX;
uint64_t x136 = 27419277LLU;
uint8_t x150 = 0U;
volatile int32_t t24 = 271850092;
uint32_t x154 = UINT32_MAX;
volatile uint32_t x159 = 1018U;
uint32_t t26 = 1902U;
int16_t x164 = -13472;
int8_t x171 = INT8_MIN;
volatile uint64_t x172 = 331813285046585LLU;
int8_t x176 = INT8_MIN;
int8_t x177 = INT8_MAX;
int8_t x189 = INT8_MIN;
int8_t x203 = INT8_MIN;
volatile int8_t x206 = 11;
int32_t x208 = INT32_MIN;
uint64_t t35 = 249398858707617488LLU;
volatile int64_t x222 = INT64_MAX;
int16_t x230 = -340;
static volatile uint64_t t38 = 11751929173335LLU;
static int64_t x237 = 1228125624379LL;
static volatile int64_t t39 = 13378851164461LL;
static volatile int64_t t40 = 4127167367387974400LL;
static volatile uint16_t x247 = UINT16_MAX;
static int64_t x263 = 1LL;
static uint8_t x264 = 12U;
static uint16_t x271 = 7U;
static int32_t t46 = -5954;
volatile int8_t x299 = 8;
uint64_t x303 = UINT64_MAX;
int16_t x304 = -12598;
volatile uint64_t t48 = 54287872127030LLU;
volatile int16_t x318 = -1;
int32_t x319 = -177;
int64_t x329 = 1LL;
uint16_t x334 = 403U;
uint64_t x335 = 3831LLU;
volatile uint32_t x337 = 4967U;
static int8_t x338 = -1;
uint8_t x358 = 117U;
volatile uint16_t x362 = 49U;
int32_t x367 = -3;
volatile uint32_t x370 = UINT32_MAX;
volatile uint32_t x371 = 5U;
static uint16_t x374 = 140U;
static uint8_t x402 = 63U;
int32_t x406 = -55965891;
int64_t t62 = 1320470733LL;
uint16_t x410 = 8U;
static volatile uint32_t t67 = 651859U;
uint16_t x448 = UINT16_MAX;
int32_t x451 = 7;
static uint64_t x452 = 205137997LLU;
uint8_t x455 = 21U;
int64_t x457 = -1LL;
static int16_t x458 = INT16_MIN;
volatile int64_t x459 = -1LL;
uint32_t x462 = 3013640U;
int8_t x463 = INT8_MAX;
static volatile uint64_t t72 = 210556841810999LLU;
volatile int64_t t73 = -8677581732LL;
uint64_t x476 = 6612018535006LLU;
volatile uint64_t t75 = 1111556501247653LLU;
volatile uint8_t x481 = 3U;
volatile int16_t x482 = INT16_MIN;
static uint32_t t79 = 169U;
volatile uint8_t x507 = 91U;
int8_t x508 = -1;
int64_t t81 = 4338976264134321LL;
volatile int16_t x510 = 1303;
static volatile int8_t x512 = INT8_MIN;
int16_t x516 = -1;
static uint64_t t83 = 15904LLU;
static int32_t x526 = -15886797;
volatile int32_t x527 = -1;
int64_t x529 = INT64_MIN;
static volatile uint64_t x530 = 57893849348158LLU;
int16_t x570 = INT16_MIN;
volatile int8_t x577 = 7;
int64_t x578 = -1LL;
int32_t t94 = 1;
int16_t x587 = INT16_MAX;
int8_t x588 = INT8_MIN;
static int16_t x593 = 1;
uint32_t x594 = 140U;
volatile int16_t x595 = 9;
int8_t x599 = -1;
volatile uint16_t x601 = 3671U;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int8_t x2 = -1;
	int8_t x3 = 3;
	volatile int64_t t0 = -45613505665812346LL;

	t0 = (x1^(x2-(x3*x4)));

	if (t0 != -9223372032559830365LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = INT64_MIN;
	int8_t x11 = -1;
	int32_t x12 = -31;
	volatile uint64_t t1 = 63338025LLU;

	t1 = (x9^(x10-(x11*x12)));

	if (t1 != 9223372036854827609LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x13 = 27U;
	uint64_t x14 = 16678465LLU;
	int16_t x15 = -1;
	uint8_t x16 = UINT8_MAX;
	volatile uint64_t t2 = 217236871178791LLU;

	t2 = (x13^(x14-(x15*x16)));

	if (t2 != 16678747LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x25 = INT16_MIN;
	volatile int8_t x26 = 9;
	static int8_t x28 = INT8_MIN;

	t3 = (x25^(x26-(x27*x28)));

	if (t3 != 32649) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int64_t x29 = INT64_MAX;
	uint16_t x30 = 25867U;
	static int16_t x32 = INT16_MAX;
	volatile int64_t t4 = 852026685618886LL;

	t4 = (x29^(x30-(x31*x32)));

	if (t4 != -9223372036854441239LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x33 = 422U;
	static int32_t x35 = 5371;
	static int16_t x36 = 6;
	int32_t t5 = 27102182;

	t5 = (x33^(x34-(x35*x36)));

	if (t5 != -64584) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x37 = INT32_MIN;
	int32_t x38 = INT32_MIN;
	static int8_t x39 = INT8_MIN;
	uint64_t x40 = UINT64_MAX;
	volatile uint64_t t6 = 38LLU;

	t6 = (x37^(x38-(x39*x40)));

	if (t6 != 4294967168LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x45 = -1;
	volatile int32_t x47 = INT32_MIN;
	int64_t t7 = 23642966549132438LL;

	t7 = (x45^(x46-(x47*x48)));

	if (t7 != 2147483775LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x49 = INT8_MIN;
	volatile int64_t x50 = INT64_MIN;
	int32_t x51 = INT32_MAX;
	uint64_t t8 = 170039LLU;

	t8 = (x49^(x50-(x51*x52)));

	if (t8 != 9223372034707292287LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int16_t x53 = -1;
	static volatile int16_t x54 = INT16_MAX;
	int8_t x56 = -19;
	uint32_t t9 = 0U;

	t9 = (x53^(x54-(x55*x56)));

	if (t9 != 4294934547U) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x65 = 931447937476LLU;
	int64_t x66 = -108619LL;
	static volatile int32_t x67 = INT32_MIN;
	int64_t x68 = 6LL;
	volatile uint64_t t10 = 273749638LLU;

	t10 = (x65^(x66-(x67*x68)));

	if (t10 != 936862928497LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x70 = 14U;
	uint32_t x71 = 2U;
	static int32_t x72 = INT32_MAX;

	t11 = (x69^(x70-(x71*x72)));

	if (t11 != 17U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x85 = INT32_MIN;
	int16_t x86 = 3;
	static int16_t x87 = -1;
	static int8_t x88 = INT8_MIN;
	int32_t t12 = -7;

	t12 = (x85^(x86-(x87*x88)));

	if (t12 != 2147483523) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x89 = INT32_MIN;
	uint64_t x90 = 2137082066549361LLU;
	uint64_t x91 = 23456736191117LLU;
	int16_t x92 = INT16_MAX;
	volatile uint64_t t13 = 8371076LLU;

	t13 = (x89^(x90-(x91*x92)));

	if (t13 != 766469793331404030LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x93 = INT16_MIN;
	static volatile int8_t x94 = 30;
	int16_t x95 = INT16_MIN;
	static int16_t x96 = -5;
	static volatile int32_t t14 = 164;

	t14 = (x93^(x94-(x95*x96)));

	if (t14 != 131102) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x97 = INT8_MIN;
	volatile uint8_t x98 = 1U;
	int8_t x99 = INT8_MIN;
	uint32_t x100 = 6552932U;
	uint32_t t15 = 53U;

	t15 = (x97^(x98-(x99*x100)));

	if (t15 != 3456191873U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x105 = INT16_MIN;
	int8_t x108 = -29;
	uint64_t t16 = 240484636LLU;

	t16 = (x105^(x106-(x107*x108)));

	if (t16 != 18446717985288167161LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x109 = -5087;
	static int32_t x110 = INT32_MIN;
	volatile uint64_t x111 = 117719176877LLU;
	volatile int16_t x112 = 5;

	t17 = (x109^(x110-(x111*x112)));

	if (t17 != 590743364286LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x113 = 172;
	volatile uint32_t x115 = 244U;
	uint64_t t18 = 242168888776LLU;

	t18 = (x113^(x114-(x115*x116)));

	if (t18 != 18446744071562068056LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x117 = 15091407LLU;

	t19 = (x117^(x118-(x119*x120)));

	if (t19 != 18446744073694463737LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x121 = 1;
	int16_t x123 = -1;
	int8_t x124 = 1;
	volatile int64_t t20 = -12LL;

	t20 = (x121^(x122-(x123*x124)));

	if (t20 != -95198LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x125 = UINT8_MAX;
	uint32_t x127 = UINT32_MAX;
	static int64_t x128 = -1LL;
	int64_t t21 = 58912925854824LL;

	t21 = (x125^(x126-(x127*x128)));

	if (t21 != 8589934337LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x129 = 40U;
	static uint32_t x130 = 336U;
	static int16_t x131 = 7896;
	int16_t x132 = INT16_MAX;
	volatile uint32_t t22 = 15728583U;

	t22 = (x129^(x130-(x131*x132)));

	if (t22 != 4036239360U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x133 = -1;
	int32_t x134 = -1;
	int64_t x135 = INT64_MAX;
	volatile uint64_t t23 = 242156LLU;

	t23 = (x133^(x134-(x135*x136)));

	if (t23 != 9223372036827356531LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x149 = 13U;
	int16_t x151 = -1;
	int8_t x152 = -13;

	t24 = (x149^(x150-(x151*x152)));

	if (t24 != -2) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x153 = INT32_MAX;
	static uint32_t x155 = 1596718784U;
	int64_t x156 = -853LL;
	static volatile int64_t t25 = -4335466717866214LL;

	t25 = (x153^(x154-(x155*x156)));

	if (t25 != 1367450593856LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x157 = INT32_MAX;
	int16_t x158 = INT16_MIN;
	static int8_t x160 = INT8_MAX;

	t26 = (x157^(x158-(x159*x160)));

	if (t26 != 2147645701U) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x161 = INT32_MAX;
	volatile int32_t x162 = -1;
	static int16_t x163 = INT16_MIN;
	volatile int32_t t27 = 277670870;

	t27 = (x161^(x162-(x163*x164)));

	if (t27 != -1706033152) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x169 = INT64_MIN;
	int16_t x170 = INT16_MIN;
	volatile uint64_t t28 = 413962LLU;

	t28 = (x169^(x170-(x171*x172)));

	if (t28 != 9265844137340705920LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x173 = 28;
	uint32_t x174 = 220150711U;
	int32_t x175 = 26260;
	volatile uint32_t t29 = 2965U;

	t29 = (x173^(x174-(x175*x176)));

	if (t29 != 223511979U) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x178 = INT64_MIN;
	int8_t x179 = INT8_MAX;
	int64_t x180 = -792387470LL;
	int64_t t30 = -8241773791542LL;

	t30 = (x177^(x178-(x179*x180)));

	if (t30 != -9223371936221567219LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x185 = INT64_MIN;
	static int8_t x186 = INT8_MIN;
	uint32_t x187 = 9596U;
	volatile int8_t x188 = INT8_MAX;
	static int64_t t31 = 1LL;

	t31 = (x185^(x186-(x187*x188)));

	if (t31 != -9223372032561027332LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x190 = 22U;
	int16_t x191 = INT16_MAX;
	uint16_t x192 = 506U;
	int32_t t32 = 36793;

	t32 = (x189^(x190-(x191*x192)));

	if (t32 != 16579984) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x193 = INT64_MAX;
	uint32_t x194 = 946115U;
	static uint8_t x195 = 42U;
	int8_t x196 = INT8_MAX;
	int64_t t33 = 1055LL;

	t33 = (x193^(x194-(x195*x196)));

	if (t33 != 9223372036853835026LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x201 = INT16_MIN;
	static uint64_t x202 = 14481460310123LLU;
	int64_t x204 = -1LL;
	uint64_t t34 = 848831000831551LLU;

	t34 = (x201^(x202-(x203*x204)));

	if (t34 != 18446729592249233387LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x205 = 6044292LL;
	uint64_t x207 = 383468781330LLU;

	t35 = (x205^(x206-(x207*x208)));

	if (t35 != 11836198181448465039LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x217 = -127;
	int32_t x218 = INT32_MIN;
	static uint64_t x219 = 7193LLU;
	uint8_t x220 = UINT8_MAX;
	volatile uint64_t t36 = 87064LLU;

	t36 = (x217^(x218-(x219*x220)));

	if (t36 != 2149317784LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x221 = 0;
	int8_t x223 = -3;
	uint64_t x224 = UINT64_MAX;
	uint64_t t37 = 887135724LLU;

	t37 = (x221^(x222-(x223*x224)));

	if (t37 != 9223372036854775804LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x229 = INT16_MAX;
	uint32_t x231 = UINT32_MAX;
	uint64_t x232 = 6801LLU;

	t38 = (x229^(x230-(x231*x232)));

	if (t38 != 18446714863636997826LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x238 = 91U;
	static int8_t x239 = INT8_MIN;
	static int16_t x240 = INT16_MIN;

	t39 = (x237^(x238-(x239*x240)));

	if (t39 != -1228121712544LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x241 = INT64_MIN;
	volatile int16_t x242 = INT16_MIN;
	static int8_t x243 = INT8_MIN;
	uint32_t x244 = 0U;

	t40 = (x241^(x242-(x243*x244)));

	if (t40 != -9223372032559841280LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x245 = INT32_MIN;
	uint32_t x246 = 42U;
	static uint8_t x248 = 16U;
	volatile uint32_t t41 = 30189U;

	t41 = (x245^(x246-(x247*x248)));

	if (t41 != 2146435130U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x253 = 51;
	int16_t x254 = -6584;
	int32_t x255 = -1350757;
	uint32_t x256 = 210919U;
	volatile uint32_t t42 = 0U;

	t42 = (x253^(x254-(x255*x256)));

	if (t42 != 1432467544U) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int64_t x257 = 10LL;
	int32_t x258 = 739;
	uint32_t x259 = UINT32_MAX;
	static uint16_t x260 = UINT16_MAX;
	volatile int64_t t43 = 1054604320585643LL;

	t43 = (x257^(x258-(x259*x260)));

	if (t43 != 66280LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x261 = 6U;
	uint64_t x262 = 15169LLU;
	static uint64_t t44 = 607653LLU;

	t44 = (x261^(x262-(x263*x264)));

	if (t44 != 15155LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x269 = 8005855;
	uint8_t x270 = 24U;
	int8_t x272 = -1;
	volatile int32_t t45 = -190398886;

	t45 = (x269^(x270-(x271*x272)));

	if (t45 != 8005824) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x289 = INT16_MIN;
	int16_t x290 = INT16_MIN;
	uint8_t x291 = 92U;
	static uint8_t x292 = 2U;

	t46 = (x289^(x290-(x291*x292)));

	if (t46 != 65352) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x297 = 14U;
	int8_t x298 = INT8_MIN;
	int16_t x300 = 12736;
	static volatile int32_t t47 = -6811;

	t47 = (x297^(x298-(x299*x300)));

	if (t47 != -102002) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x301 = -1LL;
	int64_t x302 = INT64_MIN;

	t48 = (x301^(x302-(x303*x304)));

	if (t48 != 9223372036854788405LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x317 = 4U;
	uint32_t x320 = UINT32_MAX;
	static uint32_t t49 = 15989U;

	t49 = (x317^(x318-(x319*x320)));

	if (t49 != 4294967114U) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x330 = INT32_MIN;
	uint32_t x331 = UINT32_MAX;
	uint64_t x332 = 379817LLU;
	static volatile uint64_t t50 = 245083122838297513LLU;

	t50 = (x329^(x330-(x331*x332)));

	if (t50 != 18445112769968982952LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x333 = -1;
	uint64_t x336 = UINT64_MAX;
	static uint64_t t51 = 11711LLU;

	t51 = (x333^(x334-(x335*x336)));

	if (t51 != 18446744073709547381LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x339 = -9;
	uint8_t x340 = 10U;
	volatile uint32_t t52 = 23801U;

	t52 = (x337^(x338-(x339*x340)));

	if (t52 != 4926U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x353 = INT8_MAX;
	volatile int16_t x354 = 216;
	volatile int8_t x355 = 6;
	int16_t x356 = INT16_MIN;
	volatile int32_t t53 = 80661999;

	t53 = (x353^(x354-(x355*x356)));

	if (t53 != 196775) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x357 = INT32_MIN;
	uint32_t x359 = 6558U;
	static volatile uint64_t x360 = UINT64_MAX;
	volatile uint64_t t54 = 2280360286146LLU;

	t54 = (x357^(x358-(x359*x360)));

	if (t54 != 18446744071562074643LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x361 = 80U;
	volatile int32_t x363 = INT32_MIN;
	uint32_t x364 = UINT32_MAX;
	volatile uint32_t t55 = 133669179U;

	t55 = (x361^(x362-(x363*x364)));

	if (t55 != 2147483745U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x365 = 8184U;
	int8_t x366 = INT8_MIN;
	int64_t x368 = -1LL;
	int64_t t56 = -1942162746LL;

	t56 = (x365^(x366-(x367*x368)));

	if (t56 != -8059LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x369 = -1LL;
	static uint64_t x372 = UINT64_MAX;
	uint64_t t57 = 93833LLU;

	t57 = (x369^(x370-(x371*x372)));

	if (t57 != 18446744069414584315LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x373 = 16U;
	int8_t x375 = 1;
	uint16_t x376 = 20U;
	static int32_t t58 = -484941;

	t58 = (x373^(x374-(x375*x376)));

	if (t58 != 104) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x381 = 111U;
	volatile int16_t x382 = INT16_MIN;
	static uint32_t x383 = 2702U;
	int32_t x384 = -787;
	volatile uint32_t t59 = 421823915U;

	t59 = (x381^(x382-(x383*x384)));

	if (t59 != 2093797U) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x393 = 5617893U;
	int32_t x394 = INT32_MIN;
	static volatile uint16_t x395 = 146U;
	static volatile uint64_t x396 = 560900709639170LLU;
	uint64_t t60 = 6LLU;

	t60 = (x393^(x394-(x395*x396)));

	if (t60 != 18364852567949266489LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x401 = -24306074159149520LL;
	uint64_t x403 = UINT64_MAX;
	int8_t x404 = -1;
	uint64_t t61 = 11LLU;

	t61 = (x401^(x402-(x403*x404)));

	if (t61 != 18422437999550402062LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x405 = INT16_MAX;
	int8_t x407 = INT8_MIN;
	int64_t x408 = -24698346LL;

	t62 = (x405^(x406-(x407*x408)));

	if (t62 != -3217330750LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x409 = 1U;
	volatile int64_t x411 = -1LL;
	static int8_t x412 = -1;
	int64_t t63 = 19LL;

	t63 = (x409^(x410-(x411*x412)));

	if (t63 != 6LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x413 = 0U;
	volatile uint32_t x414 = 665U;
	int32_t x415 = -1;
	volatile int32_t x416 = INT32_MAX;
	volatile uint32_t t64 = 160416623U;

	t64 = (x413^(x414-(x415*x416)));

	if (t64 != 2147484312U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x421 = INT8_MIN;
	int32_t x422 = INT32_MIN;
	int16_t x423 = INT16_MAX;
	volatile int16_t x424 = -165;
	int32_t t65 = -1063893693;

	t65 = (x421^(x422-(x423*x424)));

	if (t65 != 2142077147) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x433 = INT8_MIN;
	static uint64_t x434 = 2613050LLU;
	int8_t x435 = INT8_MIN;
	int64_t x436 = 1099732110LL;
	static uint64_t t66 = 1344219598387688LLU;

	t66 = (x433^(x434-(x435*x436)));

	if (t66 != 18446743932941228474LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x441 = INT8_MAX;
	uint32_t x442 = 7646776U;
	static int16_t x443 = 19;
	int8_t x444 = -1;

	t67 = (x441^(x442-(x443*x444)));

	if (t67 != 7646772U) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x445 = UINT64_MAX;
	static uint64_t x446 = 114999680LLU;
	uint8_t x447 = 3U;
	static volatile uint64_t t68 = 13608286179672426LLU;

	t68 = (x445^(x446-(x447*x448)));

	if (t68 != 18446744073594748540LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x449 = INT32_MIN;
	int8_t x450 = INT8_MIN;
	uint64_t t69 = 2009053999LLU;

	t69 = (x449^(x450-(x451*x452)));

	if (t69 != 711517541LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x453 = UINT16_MAX;
	int8_t x454 = INT8_MAX;
	uint8_t x456 = 2U;
	volatile int32_t t70 = -339;

	t70 = (x453^(x454-(x455*x456)));

	if (t70 != 65450) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x460 = 22;
	static volatile int64_t t71 = -23LL;

	t71 = (x457^(x458-(x459*x460)));

	if (t71 != 32745LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x461 = 2856227975345466811LLU;
	static volatile int16_t x464 = INT16_MAX;

	t72 = (x461^(x462-(x463*x464)));

	if (t72 != 2856227971722744124LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x465 = INT64_MAX;
	uint8_t x466 = 1U;
	static int16_t x467 = -1330;
	int8_t x468 = -55;

	t73 = (x465^(x466-(x467*x468)));

	if (t73 != -9223372036854702660LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x469 = 105662LL;
	volatile uint8_t x470 = 2U;
	static int8_t x471 = INT8_MIN;
	static volatile uint16_t x472 = 278U;
	volatile int64_t t74 = -2LL;

	t74 = (x469^(x470-(x471*x472)));

	if (t74 != 71612LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x473 = 1LL;
	int16_t x474 = INT16_MIN;
	static int32_t x475 = -113;

	t75 = (x473^(x474-(x475*x476)));

	if (t75 != 747158094422911LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x477 = INT64_MIN;
	int16_t x478 = INT16_MIN;
	volatile int32_t x479 = -1;
	int8_t x480 = 9;
	volatile int64_t t76 = -108481101170LL;

	t76 = (x477^(x478-(x479*x480)));

	if (t76 != 9223372036854743049LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x483 = 1980;
	int16_t x484 = INT16_MIN;
	int32_t t77 = 52704461;

	t77 = (x481^(x482-(x483*x484)));

	if (t77 != 64847875) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x493 = INT64_MIN;
	volatile int64_t x494 = INT64_MAX;
	int32_t x495 = INT32_MAX;
	volatile uint64_t x496 = 4174860529006427662LLU;
	uint64_t t78 = 214637923428431639LLU;

	t78 = (x493^(x494-(x495*x496)));

	if (t78 != 2941684541111811597LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x497 = -33;
	int32_t x498 = -34;
	uint32_t x499 = 127U;
	uint8_t x500 = 53U;

	t79 = (x497^(x498-(x499*x500)));

	if (t79 != 6732U) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x501 = 18U;
	uint32_t x502 = 59U;
	uint16_t x503 = UINT16_MAX;
	int8_t x504 = -1;
	volatile uint32_t t80 = 77438U;

	t80 = (x501^(x502-(x503*x504)));

	if (t80 != 65576U) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x505 = 25220889U;
	int64_t x506 = INT64_MIN;

	t81 = (x505^(x506-(x507*x508)));

	if (t81 != -9223372036829554878LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x509 = -2030745LL;
	static int32_t x511 = -1;
	volatile int64_t t82 = 1026343LL;

	t82 = (x509^(x510-(x511*x512)));

	if (t82 != -2029584LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x513 = UINT64_MAX;
	int16_t x514 = INT16_MIN;
	int8_t x515 = -23;

	t83 = (x513^(x514-(x515*x516)));

	if (t83 != 32790LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x521 = INT8_MIN;
	int16_t x522 = INT16_MIN;
	volatile int16_t x523 = -1;
	static volatile uint8_t x524 = UINT8_MAX;
	volatile int32_t t84 = -31386;

	t84 = (x521^(x522-(x523*x524)));

	if (t84 != 32639) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x525 = -1;
	uint16_t x528 = UINT16_MAX;
	volatile int32_t t85 = -46528;

	t85 = (x525^(x526-(x527*x528)));

	if (t85 != 15821261) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x531 = -1;
	volatile int8_t x532 = 1;
	volatile uint64_t t86 = 15776902834367918LLU;

	t86 = (x529^(x530-(x531*x532)));

	if (t86 != 9223429930704123967LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x533 = INT16_MAX;
	int64_t x534 = -1LL;
	static int16_t x535 = INT16_MIN;
	int64_t x536 = -1LL;
	static volatile int64_t t87 = 147483000366440LL;

	t87 = (x533^(x534-(x535*x536)));

	if (t87 != -65536LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x541 = -10151;
	int32_t x542 = INT32_MAX;
	int32_t x543 = 192019;
	int16_t x544 = 1;
	volatile int32_t t88 = -456058930;

	t88 = (x541^(x542-(x543*x544)));

	if (t88 != -2147300939) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x549 = INT16_MIN;
	uint16_t x550 = 29127U;
	static int32_t x551 = -407;
	int16_t x552 = 479;
	int32_t t89 = 553744443;

	t89 = (x549^(x550-(x551*x552)));

	if (t89 != -201904) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x565 = INT32_MAX;
	uint32_t x566 = UINT32_MAX;
	static int64_t x567 = 18LL;
	int16_t x568 = INT16_MAX;
	int64_t t90 = -26722277673437LL;

	t90 = (x565^(x566-(x567*x568)));

	if (t90 != 2148073454LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x569 = 15U;
	int16_t x571 = INT16_MAX;
	volatile uint8_t x572 = UINT8_MAX;
	int32_t t91 = 37246;

	t91 = (x569^(x570-(x571*x572)));

	if (t91 != -8388368) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x573 = INT16_MIN;
	int16_t x574 = INT16_MIN;
	volatile uint16_t x575 = 53U;
	int32_t x576 = -1;
	volatile int32_t t92 = -94144271;

	t92 = (x573^(x574-(x575*x576)));

	if (t92 != 53) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x579 = 25013101513LLU;
	static volatile int32_t x580 = -1;
	uint64_t t93 = 1386223942LLU;

	t93 = (x577^(x578-(x579*x580)));

	if (t93 != 25013101519LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x581 = 439144193;
	volatile int16_t x582 = INT16_MAX;
	static int16_t x583 = 1747;
	int32_t x584 = -3;

	t94 = (x581^(x582-(x583*x584)));

	if (t94 != 439114617) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x585 = UINT32_MAX;
	volatile uint8_t x586 = 9U;
	volatile uint32_t t95 = 974U;

	t95 = (x585^(x586-(x587*x588)));

	if (t95 != 4290773110U) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int64_t x589 = INT64_MAX;
	static int64_t x590 = INT64_MIN;
	static uint8_t x591 = 57U;
	static volatile int16_t x592 = INT16_MIN;
	volatile int64_t t96 = -7118312651LL;

	t96 = (x589^(x590-(x591*x592)));

	if (t96 != -1867777LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x596 = -1LL;
	volatile int64_t t97 = 14268931LL;

	t97 = (x593^(x594-(x595*x596)));

	if (t97 != 148LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x597 = INT32_MIN;
	int32_t x598 = -1093;
	volatile int64_t x600 = -794291479LL;
	volatile int64_t t98 = -19605806776LL;

	t98 = (x597^(x598-(x599*x600)));

	if (t98 != 1353191076LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x602 = INT16_MIN;
	volatile uint64_t x603 = UINT64_MAX;
	int16_t x604 = INT16_MAX;
	uint64_t t99 = 28915941770LLU;

	t99 = (x601^(x602-(x603*x604)));

	if (t99 != 18446744073709547944LLU) { NG(); } else { ; }
	
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

