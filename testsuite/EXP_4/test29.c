#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x17 = 7692LL;
int32_t x19 = INT32_MAX;
static uint64_t x28 = UINT64_MAX;
int64_t x34 = -53805008667583LL;
volatile int8_t x36 = INT8_MIN;
volatile int64_t t5 = 126855482334935611LL;
uint8_t x40 = 0U;
static volatile uint64_t t6 = 37LLU;
static int64_t x42 = 62210629812LL;
uint32_t x47 = 25U;
int8_t x49 = -1;
int16_t x50 = 49;
static uint64_t t9 = 8231221963LLU;
uint64_t x54 = UINT64_MAX;
int64_t x56 = -1LL;
uint64_t t10 = 3655452575860818769LLU;
uint64_t x65 = 65888670LLU;
volatile uint64_t t11 = 1712692852LLU;
volatile int64_t t12 = -190258010679LL;
uint32_t x78 = 1572070622U;
int8_t x108 = INT8_MAX;
int8_t x130 = -2;
int8_t x135 = INT8_MIN;
int64_t x138 = INT64_MIN;
volatile uint64_t t21 = 1953LLU;
volatile int16_t x146 = INT16_MIN;
int32_t t22 = -109;
volatile uint32_t x154 = UINT32_MAX;
volatile int32_t x175 = 262;
uint64_t x178 = 130880337LLU;
volatile int8_t x194 = INT8_MAX;
uint64_t x207 = UINT64_MAX;
int16_t x209 = INT16_MIN;
uint32_t x228 = 436668U;
volatile uint32_t x232 = 54012349U;
int32_t x252 = 68274;
int8_t x269 = -23;
static volatile int64_t x271 = 375LL;
volatile int64_t t41 = -443529LL;
volatile int8_t x274 = INT8_MAX;
uint32_t x278 = 6148346U;
volatile int16_t x279 = INT16_MAX;
static volatile int16_t x280 = INT16_MAX;
uint16_t x285 = 145U;
volatile int64_t x294 = -1LL;
volatile uint64_t t45 = 2932672856LLU;
uint64_t t47 = 96626235LLU;
int16_t x309 = -1;
int32_t x310 = -1;
uint8_t x324 = UINT8_MAX;
static uint64_t x337 = 355LLU;
volatile int32_t x338 = INT32_MIN;
uint64_t t50 = 5123370723LLU;
uint64_t x349 = UINT64_MAX;
int16_t x387 = INT16_MIN;
static int8_t x394 = -1;
volatile int64_t t57 = -3740319022154LL;
int32_t x405 = INT32_MAX;
int8_t x425 = INT8_MIN;
int16_t x435 = INT16_MAX;
static uint64_t t65 = 528034518702911LLU;
volatile int8_t x454 = INT8_MAX;
static int64_t x463 = 19201LL;
static uint64_t t68 = 16734121475LLU;
volatile uint64_t x475 = 248196567738154526LLU;
int8_t x489 = INT8_MAX;
int32_t x491 = -1;
int32_t t70 = 2;
uint64_t x502 = UINT64_MAX;
volatile uint64_t t72 = 102462501902295640LLU;
volatile uint64_t t73 = 2754795928630455LLU;
int16_t x509 = -1;
volatile int16_t x512 = INT16_MAX;
volatile int32_t t74 = 865;
volatile uint64_t x520 = 58203410LLU;
uint16_t x524 = 1U;
int64_t x525 = INT64_MAX;
static int32_t x527 = 798;
uint64_t x528 = 414602LLU;
uint16_t x547 = 1368U;
uint16_t x555 = 357U;
volatile uint64_t t81 = 109947019625646965LLU;
volatile int32_t t82 = 132600233;
static int64_t t84 = -906134LL;
uint16_t x581 = 244U;
volatile int64_t x584 = -1LL;
int16_t x595 = -1;
uint64_t x605 = 2170655385LLU;
uint8_t x609 = 1U;
int16_t x610 = -1;
uint16_t x611 = UINT16_MAX;
uint16_t x634 = UINT16_MAX;
uint8_t x636 = 22U;
int32_t x647 = 122;
static int8_t x663 = INT8_MIN;
volatile int8_t x677 = INT8_MAX;
int32_t t97 = -24542;


void f0(void) {
	static int16_t x1 = INT16_MIN;
	uint8_t x2 = UINT8_MAX;
	volatile uint64_t x3 = UINT64_MAX;
	volatile uint8_t x4 = 0U;
	uint64_t t0 = 4043552469132LLU;

	t0 = (x1*(x2*(x3+x4)));

	if (t0 != 8355840LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = INT16_MAX;
	int8_t x6 = 23;
	int32_t x7 = INT32_MAX;
	int32_t x8 = INT32_MIN;
	volatile int32_t t1 = 0;

	t1 = (x5*(x6*(x7+x8)));

	if (t1 != -753641) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint32_t x9 = 9312U;
	int16_t x10 = -2;
	static uint32_t x11 = UINT32_MAX;
	int16_t x12 = -34;
	volatile uint32_t t2 = 2042223U;

	t2 = (x9*(x10*(x11+x12)));

	if (t2 != 651840U) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x18 = 1U;
	int8_t x20 = INT8_MIN;
	static int64_t t3 = -70322LL;

	t3 = (x17*(x18*(x19+x20)));

	if (t3 != 16518443228148LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x25 = INT64_MIN;
	static volatile int16_t x26 = INT16_MIN;
	volatile uint32_t x27 = 199305957U;
	uint64_t t4 = 1523052125111476LLU;

	t4 = (x25*(x26*(x27+x28)));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x33 = -4093;
	volatile int8_t x35 = INT8_MAX;

	t5 = (x33*(x34*(x35+x36)));

	if (t5 != -220223900476417219LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x37 = INT64_MIN;
	int32_t x38 = INT32_MIN;
	volatile uint64_t x39 = 2056872119396016LLU;

	t6 = (x37*(x38*(x39+x40)));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x41 = -15;
	volatile int8_t x43 = INT8_MIN;
	int16_t x44 = INT16_MIN;
	int64_t t7 = 241310522146LL;

	t7 = (x41*(x42*(x43+x44)));

	if (t7 != 30697213174433280LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x45 = 0U;
	int32_t x46 = -70405220;
	int64_t x48 = -8157907596LL;
	int64_t t8 = 256693276424334LL;

	t8 = (x45*(x46*(x47+x48)));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint16_t x51 = UINT16_MAX;
	static uint64_t x52 = 11LLU;

	t9 = (x49*(x50*(x51+x52)));

	if (t9 != 18446744073706339862LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x53 = -1LL;
	uint16_t x55 = 79U;

	t10 = (x53*(x54*(x55+x56)));

	if (t10 != 78LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x66 = INT64_MIN;
	static uint64_t x67 = 25876836544310LLU;
	static uint8_t x68 = UINT8_MAX;

	t11 = (x65*(x66*(x67+x68)));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x73 = INT16_MIN;
	uint16_t x74 = UINT16_MAX;
	int64_t x75 = -1LL;
	int32_t x76 = INT32_MIN;

	t12 = (x73*(x74*(x75+x76)));

	if (t12 != 4611615651830661120LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x77 = 0U;
	volatile int64_t x79 = -1LL;
	static uint32_t x80 = UINT32_MAX;
	volatile int64_t t13 = 12416635826822LL;

	t13 = (x77*(x78*(x79+x80)));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x85 = UINT8_MAX;
	static uint16_t x86 = UINT16_MAX;
	volatile int8_t x87 = INT8_MIN;
	uint64_t x88 = UINT64_MAX;
	static uint64_t t14 = 211933LLU;

	t14 = (x85*(x86*(x87+x88)));

	if (t14 != 18446744071553777791LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x89 = INT8_MIN;
	uint8_t x90 = 34U;
	static volatile int64_t x91 = 0LL;
	int32_t x92 = -20529;
	int64_t t15 = 6630LL;

	t15 = (x89*(x90*(x91+x92)));

	if (t15 != 89342208LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x105 = INT8_MAX;
	int16_t x106 = -1;
	static volatile uint32_t x107 = UINT32_MAX;
	uint32_t t16 = 240U;

	t16 = (x105*(x106*(x107+x108)));

	if (t16 != 4294951294U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x113 = 3U;
	int8_t x114 = -1;
	int64_t x115 = INT64_MAX;
	uint64_t x116 = UINT64_MAX;
	volatile uint64_t t17 = 25386653436705LLU;

	t17 = (x113*(x114*(x115+x116)));

	if (t17 != 9223372036854775814LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x125 = -1;
	static int32_t x126 = -2408;
	volatile int16_t x127 = -20;
	static int16_t x128 = 1;
	int32_t t18 = -23399678;

	t18 = (x125*(x126*(x127+x128)));

	if (t18 != -45752) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x129 = INT8_MIN;
	uint64_t x131 = 37472661925621402LLU;
	int8_t x132 = 22;
	static uint64_t t19 = 14636751632945930LLU;

	t19 = (x129*(x130*(x131+x132)));

	if (t19 != 9593001452959084544LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x133 = 1999U;
	int16_t x134 = INT16_MIN;
	volatile int8_t x136 = INT8_MIN;
	uint32_t t20 = 127042662U;

	t20 = (x133*(x134*(x135+x136)));

	if (t20 != 3883925504U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x137 = -21;
	uint64_t x139 = UINT64_MAX;
	uint16_t x140 = UINT16_MAX;

	t21 = (x137*(x138*(x139+x140)));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x145 = 34U;
	int8_t x147 = INT8_MIN;
	uint8_t x148 = UINT8_MAX;

	t22 = (x145*(x146*(x147+x148)));

	if (t22 != -141492224) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x153 = INT8_MIN;
	int16_t x155 = 667;
	int32_t x156 = INT32_MIN;
	volatile uint32_t t23 = 4503U;

	t23 = (x153*(x154*(x155+x156)));

	if (t23 != 85376U) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x173 = 1256960U;
	volatile int16_t x174 = INT16_MIN;
	static int64_t x176 = -21859LL;
	volatile int64_t t24 = 145LL;

	t24 = (x173*(x174*(x175+x176)));

	if (t24 != 889538645852160LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x177 = INT32_MIN;
	int8_t x179 = INT8_MIN;
	uint64_t x180 = 4467363933435LLU;
	static uint64_t t25 = 4090042LLU;

	t25 = (x177*(x178*(x179+x180)));

	if (t25 != 16828551074766913536LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x185 = UINT64_MAX;
	static uint64_t x186 = 6LLU;
	uint8_t x187 = 3U;
	uint32_t x188 = UINT32_MAX;
	static uint64_t t26 = 15LLU;

	t26 = (x185*(x186*(x187+x188)));

	if (t26 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x189 = -1;
	int8_t x190 = INT8_MAX;
	int8_t x191 = INT8_MAX;
	int8_t x192 = -1;
	int32_t t27 = -109;

	t27 = (x189*(x190*(x191+x192)));

	if (t27 != -16002) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x193 = INT16_MAX;
	uint8_t x195 = UINT8_MAX;
	static uint8_t x196 = 6U;
	volatile int32_t t28 = 11655871;

	t28 = (x193*(x194*(x195+x196)));

	if (t28 != 1086127749) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x197 = -1LL;
	uint8_t x198 = UINT8_MAX;
	int32_t x199 = INT32_MIN;
	int64_t x200 = -1LL;
	volatile int64_t t29 = 437LL;

	t29 = (x197*(x198*(x199+x200)));

	if (t29 != 547608330495LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int32_t x205 = -23;
	int32_t x206 = -1;
	int64_t x208 = INT64_MAX;
	volatile uint64_t t30 = 6264292284LLU;

	t30 = (x205*(x206*(x207+x208)));

	if (t30 != 9223372036854775762LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x210 = 62U;
	int16_t x211 = -1;
	int8_t x212 = INT8_MIN;
	int32_t t31 = -4;

	t31 = (x209*(x210*(x211+x212)));

	if (t31 != 262078464) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x213 = 29U;
	static int16_t x214 = -1;
	int32_t x215 = 1;
	volatile int16_t x216 = INT16_MIN;
	uint32_t t32 = 107119433U;

	t32 = (x213*(x214*(x215+x216)));

	if (t32 != 950243U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x217 = INT16_MIN;
	static int16_t x218 = -1;
	static uint16_t x219 = 2U;
	int8_t x220 = -1;
	int32_t t33 = -50;

	t33 = (x217*(x218*(x219+x220)));

	if (t33 != 32768) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x225 = INT32_MAX;
	static uint16_t x226 = UINT16_MAX;
	static volatile uint16_t x227 = UINT16_MAX;
	uint32_t t34 = 5983599U;

	t34 = (x225*(x226*(x227+x228)));

	if (t34 != 3595348411U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x229 = INT16_MIN;
	uint8_t x230 = 116U;
	static int16_t x231 = -5180;
	volatile uint32_t t35 = 1528167U;

	t35 = (x229*(x230*(x231+x232)));

	if (t35 != 549847040U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x233 = -1LL;
	int64_t x234 = -1LL;
	static uint64_t x235 = UINT64_MAX;
	int16_t x236 = INT16_MIN;
	volatile uint64_t t36 = 4082LLU;

	t36 = (x233*(x234*(x235+x236)));

	if (t36 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x237 = 7U;
	static int32_t x238 = INT32_MAX;
	volatile uint8_t x239 = 6U;
	uint64_t x240 = 2103458861768248603LLU;
	uint64_t t37 = 4421303586LLU;

	t37 = (x237*(x238*(x239+x240)));

	if (t37 != 11051065058818237465LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x241 = -14LL;
	volatile uint8_t x242 = UINT8_MAX;
	uint64_t x243 = UINT64_MAX;
	int64_t x244 = -327838820LL;
	static volatile uint64_t t38 = 9LLU;

	t38 = (x241*(x242*(x243+x244)));

	if (t38 != 1170384590970LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int32_t x249 = -16;
	volatile int16_t x250 = -1;
	static volatile uint8_t x251 = UINT8_MAX;
	int32_t t39 = 488829405;

	t39 = (x249*(x250*(x251+x252)));

	if (t39 != 1096464) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x261 = -5004482;
	uint8_t x262 = 3U;
	volatile uint32_t x263 = 4U;
	uint16_t x264 = UINT16_MAX;
	volatile uint32_t t40 = 143766U;

	t40 = (x261*(x262*(x263+x264)));

	if (t40 != 3876240686U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x270 = -1;
	static int16_t x272 = INT16_MAX;

	t41 = (x269*(x270*(x271+x272)));

	if (t41 != 762266LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x273 = INT16_MIN;
	int32_t x275 = -1;
	int8_t x276 = -1;
	int32_t t42 = 3756;

	t42 = (x273*(x274*(x275+x276)));

	if (t42 != 8323072) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x277 = 36;
	volatile uint32_t t43 = 79536754U;

	t43 = (x277*(x278*(x279+x280)));

	if (t43 != 1220884912U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x286 = INT32_MIN;
	volatile uint32_t x287 = 5U;
	uint64_t x288 = UINT64_MAX;
	volatile uint64_t t44 = 56051182708738451LLU;

	t44 = (x285*(x286*(x287+x288)));

	if (t44 != 18446742828169035776LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x293 = 63;
	uint64_t x295 = 494659248LLU;
	static uint32_t x296 = 15553766U;

	t45 = (x293*(x294*(x295+x296)));

	if (t45 != 18446744041566131734LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x297 = 0U;
	int8_t x298 = -1;
	volatile uint8_t x299 = 28U;
	uint32_t x300 = 8U;
	uint32_t t46 = 247U;

	t46 = (x297*(x298*(x299+x300)));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x305 = UINT64_MAX;
	int8_t x306 = -12;
	volatile int16_t x307 = -1;
	int64_t x308 = -1LL;

	t47 = (x305*(x306*(x307+x308)));

	if (t47 != 18446744073709551592LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x311 = 7326U;
	static int8_t x312 = 28;
	int32_t t48 = 68811;

	t48 = (x309*(x310*(x311+x312)));

	if (t48 != 7354) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x321 = -526916;
	uint8_t x322 = 0U;
	int64_t x323 = -1383926843LL;
	volatile int64_t t49 = 4984634351LL;

	t49 = (x321*(x322*(x323+x324)));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x339 = 11;
	uint32_t x340 = 2306479U;

	t50 = (x337*(x338*(x339+x340)));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x350 = INT32_MAX;
	volatile int16_t x351 = -1;
	int64_t x352 = -364650LL;
	static uint64_t t51 = 4918LLU;

	t51 = (x349*(x350*(x351+x352)));

	if (t51 != 783082059362197LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x361 = 1010672LLU;
	int8_t x362 = INT8_MAX;
	int32_t x363 = -10;
	static uint64_t x364 = 7LLU;
	volatile uint64_t t52 = 1095111261124782LLU;

	t52 = (x361*(x362*(x363+x364)));

	if (t52 != 18446744073324485584LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x373 = INT64_MIN;
	int32_t x374 = INT32_MIN;
	uint32_t x375 = 9U;
	volatile int32_t x376 = 8351;
	static volatile int64_t t53 = 15492154LL;

	t53 = (x373*(x374*(x375+x376)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x385 = -710832776695LL;
	uint64_t x386 = 221LLU;
	uint32_t x388 = 0U;
	volatile uint64_t t54 = 1LLU;

	t54 = (x385*(x386*(x387+x388)));

	if (t54 != 17925770289570742272LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x389 = -1LL;
	static volatile uint64_t x390 = UINT64_MAX;
	uint32_t x391 = UINT32_MAX;
	int16_t x392 = -1;
	uint64_t t55 = 1845162008070909660LLU;

	t55 = (x389*(x390*(x391+x392)));

	if (t55 != 4294967294LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x393 = 11252527950801LL;
	int16_t x395 = -1;
	int32_t x396 = -1;
	static int64_t t56 = -434LL;

	t56 = (x393*(x394*(x395+x396)));

	if (t56 != 22505055901602LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x397 = -1LL;
	int8_t x398 = 10;
	volatile int32_t x399 = INT32_MIN;
	static int64_t x400 = 35LL;

	t57 = (x397*(x398*(x399+x400)));

	if (t57 != 21474836130LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x406 = UINT64_MAX;
	int64_t x407 = -1LL;
	int64_t x408 = -1LL;
	uint64_t t58 = 18897902LLU;

	t58 = (x405*(x406*(x407+x408)));

	if (t58 != 4294967294LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x409 = -1LL;
	uint8_t x410 = 3U;
	volatile uint64_t x411 = 1590029260LLU;
	int32_t x412 = 1;
	volatile uint64_t t59 = 52935222341543895LLU;

	t59 = (x409*(x410*(x411+x412)));

	if (t59 != 18446744068939463833LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x413 = INT8_MIN;
	int8_t x414 = INT8_MIN;
	volatile uint32_t x415 = 317U;
	uint32_t x416 = 6885U;
	uint32_t t60 = 235319U;

	t60 = (x413*(x414*(x415+x416)));

	if (t60 != 117997568U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x421 = -1LL;
	int8_t x422 = -1;
	static int8_t x423 = -1;
	static int8_t x424 = -1;
	volatile int64_t t61 = 4995395264LL;

	t61 = (x421*(x422*(x423+x424)));

	if (t61 != -2LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x426 = 31LLU;
	static uint32_t x427 = 406372U;
	int64_t x428 = INT64_MIN;
	volatile uint64_t t62 = 3546617155122838LLU;

	t62 = (x425*(x426*(x427+x428)));

	if (t62 != 18446744072097067520LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x429 = -3803LL;
	uint16_t x430 = 3U;
	int64_t x431 = -1LL;
	uint8_t x432 = 11U;
	static int64_t t63 = -77801589153LL;

	t63 = (x429*(x430*(x431+x432)));

	if (t63 != -114090LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x433 = 970850U;
	int16_t x434 = INT16_MIN;
	int16_t x436 = INT16_MIN;
	uint32_t t64 = 291045583U;

	t64 = (x433*(x434*(x435+x436)));

	if (t64 != 1748041728U) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x441 = 752087585474076229LLU;
	static uint64_t x442 = 93LLU;
	uint16_t x443 = 5U;
	volatile int8_t x444 = -1;

	t65 = (x441*(x442*(x443+x444)));

	if (t65 != 3075420690713082948LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x453 = UINT8_MAX;
	uint8_t x455 = 4U;
	int16_t x456 = 7665;
	static int32_t t66 = 128770284;

	t66 = (x453*(x454*(x455+x456)));

	if (t66 != 248360565) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x461 = -4LL;
	int8_t x462 = 0;
	int16_t x464 = 61;
	static volatile int64_t t67 = -14132LL;

	t67 = (x461*(x462*(x463+x464)));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x469 = 510U;
	volatile int64_t x470 = INT64_MIN;
	int8_t x471 = -1;
	uint64_t x472 = 1012945297LLU;

	t68 = (x469*(x470*(x471+x472)));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x473 = -1;
	uint32_t x474 = UINT32_MAX;
	int32_t x476 = -1;
	static volatile uint64_t t69 = 310642060526283LLU;

	t69 = (x473*(x474*(x475+x476)));

	if (t69 != 7273532585928621597LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x490 = INT16_MAX;
	int16_t x492 = -1;

	t70 = (x489*(x490*(x491+x492)));

	if (t70 != -8322818) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x493 = -220063;
	static int32_t x494 = -1;
	uint8_t x495 = 83U;
	volatile uint32_t x496 = 115378079U;
	static uint32_t t71 = 134130205U;

	t71 = (x493*(x494*(x495+x496)));

	if (t71 != 2912777550U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x501 = INT8_MIN;
	uint32_t x503 = 20391U;
	uint8_t x504 = 67U;

	t72 = (x501*(x502*(x503+x504)));

	if (t72 != 2618624LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x505 = 11146119704926LL;
	int64_t x506 = INT64_MAX;
	static int32_t x507 = INT32_MAX;
	uint64_t x508 = UINT64_MAX;

	t73 = (x505*(x506*(x507+x508)));

	if (t73 != 7764024988067357372LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x510 = INT16_MAX;
	uint8_t x511 = 1U;

	t74 = (x509*(x510*(x511+x512)));

	if (t74 != -1073709056) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x517 = UINT8_MAX;
	int32_t x518 = INT32_MAX;
	static uint32_t x519 = 754U;
	volatile uint64_t t75 = 24854LLU;

	t75 = (x517*(x518*(x519+x520)));

	if (t75 != 13426340972503505924LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x521 = UINT8_MAX;
	static uint16_t x522 = 1112U;
	uint64_t x523 = 121288785910LLU;
	uint64_t t76 = 1682143180770LLU;

	t76 = (x521*(x522*(x523+x524)));

	if (t76 != 34392648132923160LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int64_t x526 = INT64_MIN;
	uint64_t t77 = 851305796LLU;

	t77 = (x525*(x526*(x527+x528)));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x541 = 2U;
	static int8_t x542 = INT8_MAX;
	int32_t x543 = -1;
	int16_t x544 = -52;
	volatile int32_t t78 = 6210;

	t78 = (x541*(x542*(x543+x544)));

	if (t78 != -13462) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x545 = INT32_MAX;
	volatile uint32_t x546 = 134942U;
	int8_t x548 = -1;
	uint32_t t79 = 20301352U;

	t79 = (x545*(x546*(x547+x548)));

	if (t79 != 4110501582U) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x553 = INT16_MAX;
	int8_t x554 = 9;
	uint64_t x556 = 19775998LLU;
	volatile uint64_t t80 = 4792LLU;

	t80 = (x553*(x554*(x555+x556)));

	if (t80 != 5832106418565LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x561 = 61923LLU;
	uint16_t x562 = 403U;
	uint8_t x563 = 1U;
	uint32_t x564 = UINT32_MAX;

	t81 = (x561*(x562*(x563+x564)));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x565 = UINT8_MAX;
	int32_t x566 = -1;
	int8_t x567 = 1;
	static int32_t x568 = -591656;

	t82 = (x565*(x566*(x567+x568)));

	if (t82 != 150872025) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint64_t x569 = 109092466789LLU;
	int64_t x570 = -1LL;
	int16_t x571 = INT16_MIN;
	volatile int64_t x572 = 25LL;
	static uint64_t t83 = 7280LLU;

	t83 = (x569*(x570*(x571+x572)));

	if (t83 != 3572014640072227LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x573 = 250U;
	int16_t x574 = 28;
	volatile int64_t x575 = -1LL;
	volatile int8_t x576 = INT8_MAX;

	t84 = (x573*(x574*(x575+x576)));

	if (t84 != 882000LL) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int32_t x582 = -1;
	int16_t x583 = -1;
	int64_t t85 = -44344212784753747LL;

	t85 = (x581*(x582*(x583+x584)));

	if (t85 != 488LL) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int16_t x585 = INT16_MAX;
	static int32_t x586 = -1;
	int64_t x587 = -1LL;
	volatile uint8_t x588 = 1U;
	int64_t t86 = 226096537422747LL;

	t86 = (x585*(x586*(x587+x588)));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x593 = UINT64_MAX;
	static uint32_t x594 = 1554116509U;
	uint16_t x596 = 0U;
	uint64_t t87 = 167759707394LLU;

	t87 = (x593*(x594*(x595+x596)));

	if (t87 != 18446744070968700829LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x597 = -333;
	int32_t x598 = INT32_MIN;
	int8_t x599 = 1;
	uint32_t x600 = 859941U;
	volatile uint32_t t88 = 210259U;

	t88 = (x597*(x598*(x599+x600)));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x601 = INT32_MAX;
	uint32_t x602 = 1U;
	int8_t x603 = 1;
	int16_t x604 = 6859;
	uint32_t t89 = 10814U;

	t89 = (x601*(x602*(x603+x604)));

	if (t89 != 4294960436U) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x606 = -1;
	int8_t x607 = INT8_MIN;
	volatile int8_t x608 = 3;
	uint64_t t90 = 255535545638LLU;

	t90 = (x605*(x606*(x607+x608)));

	if (t90 != 271331923125LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x612 = UINT16_MAX;
	int32_t t91 = -1925;

	t91 = (x609*(x610*(x611+x612)));

	if (t91 != -131070) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int32_t x629 = -1;
	uint32_t x630 = 3U;
	static uint64_t x631 = 1195108LLU;
	int64_t x632 = 813689170011515LL;
	volatile uint64_t t92 = 254381869LLU;

	t92 = (x629*(x630*(x631+x632)));

	if (t92 != 18444303006195931747LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x633 = INT32_MIN;
	volatile int64_t x635 = 2774LL;
	int64_t t93 = -113041145954070LL;

	t93 = (x633*(x634*(x635+x636)));

	if (t93 != -393496013077217280LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x645 = 30895U;
	int8_t x646 = INT8_MIN;
	int16_t x648 = INT16_MIN;
	uint32_t t94 = 0U;

	t94 = (x645*(x646*(x647+x648)));

	if (t94 != 251546880U) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x657 = 155U;
	static int32_t x658 = -551;
	int8_t x659 = -1;
	int8_t x660 = INT8_MAX;
	volatile int32_t t95 = -1960;

	t95 = (x657*(x658*(x659+x660)));

	if (t95 != -10761030) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x661 = INT16_MAX;
	uint64_t x662 = 2045905739290LLU;
	static int16_t x664 = INT16_MIN;
	volatile uint64_t t96 = 301332LLU;

	t96 = (x661*(x662*(x663+x664)));

	if (t96 != 8320880097105808640LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x678 = -1;
	int32_t x679 = INT32_MIN;
	static int32_t x680 = INT32_MAX;

	t97 = (x677*(x678*(x679+x680)));

	if (t97 != 127) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x681 = INT32_MIN;
	volatile uint64_t x682 = UINT64_MAX;
	int32_t x683 = INT32_MAX;
	static int32_t x684 = INT32_MIN;
	uint64_t t98 = 258098189LLU;

	t98 = (x681*(x682*(x683+x684)));

	if (t98 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x685 = INT32_MAX;
	volatile uint32_t x686 = 36537U;
	int16_t x687 = 0;
	int16_t x688 = INT16_MAX;
	volatile uint32_t t99 = 491431934U;

	t99 = (x685*(x686*(x687+x688)));

	if (t99 != 950275769U) { NG(); } else { ; }
	
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

