#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x16 = -1;
uint32_t x24 = 551U;
volatile int32_t t3 = -83003;
int32_t t5 = 782711;
int32_t x33 = INT32_MIN;
uint16_t x34 = 3U;
uint32_t x44 = 1U;
int16_t x46 = INT16_MIN;
volatile uint32_t x62 = UINT32_MAX;
int32_t t11 = -159434105;
uint8_t x84 = 25U;
volatile int32_t t14 = -8;
volatile int32_t t15 = 31301;
uint64_t x103 = UINT64_MAX;
static int16_t x111 = -1;
uint16_t x112 = 0U;
int8_t x115 = -1;
int16_t x135 = INT16_MAX;
volatile int32_t t21 = -2;
uint32_t x148 = UINT32_MAX;
volatile int32_t t25 = 6298800;
uint64_t x164 = 2065LLU;
int32_t t26 = -1;
int64_t x166 = 133524779LL;
uint16_t x172 = 8U;
static int64_t x180 = -1LL;
int32_t x185 = -1;
volatile int16_t x201 = INT16_MAX;
static int64_t x203 = -7435LL;
uint8_t x225 = 6U;
uint16_t x239 = UINT16_MAX;
int8_t x240 = -1;
volatile int32_t t37 = 0;
uint64_t x241 = UINT64_MAX;
volatile int8_t x244 = INT8_MAX;
static int8_t x247 = -7;
static int64_t x249 = 10898157525495LL;
int64_t x277 = -1LL;
int32_t t42 = 21083598;
int32_t t43 = -40;
static uint8_t x293 = 3U;
uint16_t x294 = 8654U;
volatile uint64_t x298 = 225667696LLU;
static volatile int64_t x302 = INT64_MIN;
uint64_t x318 = 49464279733921LLU;
volatile int32_t t49 = 89;
static int64_t x321 = 4231453788280520LL;
int32_t t50 = -61787400;
int8_t x329 = INT8_MIN;
int16_t x338 = INT16_MIN;
uint8_t x357 = 13U;
volatile uint32_t x366 = UINT32_MAX;
int8_t x367 = INT8_MAX;
static volatile int16_t x375 = -16;
int8_t x376 = -1;
volatile int32_t t61 = -9494;
int8_t x381 = INT8_MAX;
int64_t x383 = -1LL;
int16_t x388 = INT16_MAX;
volatile int32_t t63 = 2;
volatile int8_t x409 = -2;
volatile uint16_t x412 = 840U;
uint8_t x417 = 2U;
uint32_t x421 = 12U;
volatile int32_t t67 = -41597;
int32_t t69 = 0;
static int32_t x437 = -106;
volatile int8_t x447 = INT8_MIN;
static int8_t x448 = INT8_MIN;
int8_t x450 = -1;
uint16_t x452 = UINT16_MAX;
int32_t x461 = 11766;
uint8_t x467 = 31U;
volatile int16_t x468 = INT16_MAX;
uint16_t x491 = 30U;
int16_t x502 = -4;
volatile int32_t t79 = -1;
uint32_t x507 = 61U;
int8_t x521 = INT8_MAX;
int32_t t83 = 762;
volatile int32_t x540 = -16;
volatile int32_t t85 = -8183;
volatile int32_t x549 = 22433263;
uint32_t x576 = UINT32_MAX;
int8_t x580 = 5;
volatile int32_t t89 = 13;
uint8_t x595 = UINT8_MAX;
uint32_t x600 = 927U;
uint8_t x612 = UINT8_MAX;
int16_t x633 = -1;
int32_t x636 = -1;
uint64_t x639 = UINT64_MAX;
int16_t x641 = INT16_MIN;
uint16_t x644 = UINT16_MAX;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	uint64_t x2 = 460343826759523137LLU;
	int8_t x3 = 1;
	volatile int64_t x4 = INT64_MIN;
	volatile int32_t t0 = 16;

	t0 = ((x1+x2)<=(x3*x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x9 = 303U;
	uint32_t x10 = UINT32_MAX;
	uint64_t x11 = UINT64_MAX;
	int64_t x12 = INT64_MAX;
	int32_t t1 = 87;

	t1 = ((x9+x10)<=(x11*x12));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = INT32_MAX;
	uint32_t x14 = 5242U;
	static uint32_t x15 = UINT32_MAX;
	volatile int32_t t2 = 264;

	t2 = ((x13+x14)<=(x15*x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x21 = 1U;
	uint64_t x22 = UINT64_MAX;
	volatile uint16_t x23 = UINT16_MAX;

	t3 = ((x21+x22)<=(x23*x24));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x25 = -913447109379LL;
	static int64_t x26 = -1LL;
	volatile uint32_t x27 = 1051722464U;
	int8_t x28 = 48;
	int32_t t4 = 9688;

	t4 = ((x25+x26)<=(x27*x28));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x29 = 1LL;
	static int16_t x30 = INT16_MIN;
	volatile int8_t x31 = 26;
	uint16_t x32 = 50U;

	t5 = ((x29+x30)<=(x31*x32));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x35 = INT32_MIN;
	int64_t x36 = 431804LL;
	static volatile int32_t t6 = 433244519;

	t6 = ((x33+x34)<=(x35*x36));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x41 = UINT64_MAX;
	static uint32_t x42 = 380U;
	uint16_t x43 = 1353U;
	volatile int32_t t7 = 0;

	t7 = ((x41+x42)<=(x43*x44));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x45 = -1;
	int64_t x47 = -8034161697966LL;
	uint64_t x48 = 565711064LLU;
	volatile int32_t t8 = -1;

	t8 = ((x45+x46)<=(x47*x48));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x49 = 492137220U;
	int64_t x50 = -8066956589519144LL;
	uint32_t x51 = UINT32_MAX;
	volatile uint64_t x52 = 145LLU;
	int32_t t9 = 6012;

	t9 = ((x49+x50)<=(x51*x52));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x57 = UINT8_MAX;
	int8_t x58 = 31;
	static uint32_t x59 = 430152907U;
	int8_t x60 = INT8_MIN;
	volatile int32_t t10 = -395894682;

	t10 = ((x57+x58)<=(x59*x60));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x61 = INT8_MIN;
	int32_t x63 = INT32_MIN;
	static int16_t x64 = 0;

	t11 = ((x61+x62)<=(x63*x64));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x69 = 4810627;
	volatile int8_t x70 = INT8_MIN;
	uint16_t x71 = 1U;
	volatile int64_t x72 = INT64_MAX;
	volatile int32_t t12 = -249;

	t12 = ((x69+x70)<=(x71*x72));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x73 = -1;
	uint8_t x74 = 4U;
	static int16_t x75 = INT16_MIN;
	uint64_t x76 = 64327LLU;
	int32_t t13 = -1;

	t13 = ((x73+x74)<=(x75*x76));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x81 = 0U;
	volatile int8_t x82 = 0;
	int8_t x83 = -1;

	t14 = ((x81+x82)<=(x83*x84));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x85 = 10U;
	int32_t x86 = INT32_MAX;
	int64_t x87 = -32173LL;
	static volatile uint64_t x88 = UINT64_MAX;

	t15 = ((x85+x86)<=(x87*x88));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x101 = 4277325427LLU;
	static uint16_t x102 = UINT16_MAX;
	int8_t x104 = INT8_MIN;
	static int32_t t16 = -215738;

	t16 = ((x101+x102)<=(x103*x104));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x105 = 99U;
	volatile uint8_t x106 = 91U;
	uint16_t x107 = UINT16_MAX;
	static int16_t x108 = -1;
	int32_t t17 = -701424;

	t17 = ((x105+x106)<=(x107*x108));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x109 = INT8_MIN;
	int16_t x110 = INT16_MIN;
	int32_t t18 = 461;

	t18 = ((x109+x110)<=(x111*x112));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x113 = -1;
	uint64_t x114 = 3246597507622LLU;
	uint64_t x116 = UINT64_MAX;
	int32_t t19 = 0;

	t19 = ((x113+x114)<=(x115*x116));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x129 = UINT64_MAX;
	static uint64_t x130 = 115882LLU;
	int8_t x131 = -29;
	static uint8_t x132 = 67U;
	volatile int32_t t20 = 10;

	t20 = ((x129+x130)<=(x131*x132));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x133 = UINT32_MAX;
	uint16_t x134 = 80U;
	static uint32_t x136 = 201180905U;

	t21 = ((x133+x134)<=(x135*x136));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x141 = -3;
	volatile int16_t x142 = -51;
	uint64_t x143 = 1266557LLU;
	static uint16_t x144 = UINT16_MAX;
	volatile int32_t t22 = -201;

	t22 = ((x141+x142)<=(x143*x144));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x145 = INT16_MAX;
	uint8_t x146 = UINT8_MAX;
	static uint16_t x147 = 206U;
	int32_t t23 = -39;

	t23 = ((x145+x146)<=(x147*x148));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x149 = INT16_MIN;
	volatile uint16_t x150 = 7774U;
	uint64_t x151 = 229LLU;
	volatile int16_t x152 = -1;
	static int32_t t24 = 170552;

	t24 = ((x149+x150)<=(x151*x152));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x157 = UINT16_MAX;
	int16_t x158 = 85;
	volatile uint8_t x159 = UINT8_MAX;
	uint16_t x160 = 1811U;

	t25 = ((x157+x158)<=(x159*x160));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x161 = -1;
	int32_t x162 = 0;
	volatile int64_t x163 = INT64_MIN;

	t26 = ((x161+x162)<=(x163*x164));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x165 = INT32_MAX;
	int8_t x167 = -1;
	uint64_t x168 = 947685514671882428LLU;
	volatile int32_t t27 = 16926210;

	t27 = ((x165+x166)<=(x167*x168));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x169 = 51053635LLU;
	uint8_t x170 = 27U;
	static uint8_t x171 = 1U;
	volatile int32_t t28 = 813654;

	t28 = ((x169+x170)<=(x171*x172));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x177 = INT8_MAX;
	int16_t x178 = 1491;
	int32_t x179 = INT32_MAX;
	int32_t t29 = 0;

	t29 = ((x177+x178)<=(x179*x180));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x186 = 6635U;
	int16_t x187 = -1;
	int64_t x188 = INT64_MAX;
	static int32_t t30 = -33371;

	t30 = ((x185+x186)<=(x187*x188));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x189 = -1LL;
	uint8_t x190 = 61U;
	uint32_t x191 = 491U;
	static volatile int8_t x192 = 0;
	volatile int32_t t31 = 1;

	t31 = ((x189+x190)<=(x191*x192));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x197 = -1;
	int32_t x198 = 1013;
	uint64_t x199 = UINT64_MAX;
	int64_t x200 = -373LL;
	volatile int32_t t32 = -557;

	t32 = ((x197+x198)<=(x199*x200));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x202 = 18U;
	uint8_t x204 = 29U;
	volatile int32_t t33 = 46622;

	t33 = ((x201+x202)<=(x203*x204));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x213 = INT64_MIN;
	static uint64_t x214 = 309364798802519LLU;
	volatile int8_t x215 = -31;
	static int16_t x216 = -1;
	int32_t t34 = 1;

	t34 = ((x213+x214)<=(x215*x216));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x226 = 91U;
	uint64_t x227 = 253909LLU;
	int32_t x228 = -1;
	volatile int32_t t35 = 245570;

	t35 = ((x225+x226)<=(x227*x228));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x229 = INT8_MIN;
	int32_t x230 = INT32_MAX;
	volatile int8_t x231 = 15;
	static int64_t x232 = 117LL;
	volatile int32_t t36 = 51523243;

	t36 = ((x229+x230)<=(x231*x232));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x237 = 258U;
	static int32_t x238 = -1;

	t37 = ((x237+x238)<=(x239*x240));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x242 = 124122629760LLU;
	volatile uint32_t x243 = 1828105769U;
	int32_t t38 = 5;

	t38 = ((x241+x242)<=(x243*x244));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x245 = -1662;
	static volatile int8_t x246 = -5;
	static volatile int8_t x248 = INT8_MIN;
	static int32_t t39 = 23279;

	t39 = ((x245+x246)<=(x247*x248));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x250 = UINT32_MAX;
	volatile uint64_t x251 = 7LLU;
	volatile uint16_t x252 = UINT16_MAX;
	volatile int32_t t40 = 18749;

	t40 = ((x249+x250)<=(x251*x252));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x269 = -1104LL;
	uint16_t x270 = UINT16_MAX;
	int16_t x271 = INT16_MIN;
	volatile int16_t x272 = INT16_MAX;
	volatile int32_t t41 = 753403981;

	t41 = ((x269+x270)<=(x271*x272));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x278 = UINT16_MAX;
	uint32_t x279 = 48U;
	static int16_t x280 = -817;

	t42 = ((x277+x278)<=(x279*x280));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x289 = 836535703990LLU;
	volatile int64_t x290 = INT64_MIN;
	int32_t x291 = INT32_MAX;
	static int64_t x292 = 253500801LL;

	t43 = ((x289+x290)<=(x291*x292));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x295 = 11847094U;
	volatile uint8_t x296 = 7U;
	int32_t t44 = 573;

	t44 = ((x293+x294)<=(x295*x296));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x297 = 54U;
	int8_t x299 = 2;
	volatile uint16_t x300 = UINT16_MAX;
	volatile int32_t t45 = -123;

	t45 = ((x297+x298)<=(x299*x300));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x301 = INT32_MAX;
	static int32_t x303 = -1;
	int32_t x304 = -1;
	int32_t t46 = -23;

	t46 = ((x301+x302)<=(x303*x304));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x305 = INT8_MIN;
	int64_t x306 = -1LL;
	static uint16_t x307 = 164U;
	int16_t x308 = -1;
	volatile int32_t t47 = 0;

	t47 = ((x305+x306)<=(x307*x308));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x309 = -1LL;
	uint16_t x310 = UINT16_MAX;
	int8_t x311 = -1;
	uint64_t x312 = 1824182524041LLU;
	volatile int32_t t48 = -296532651;

	t48 = ((x309+x310)<=(x311*x312));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x317 = 3U;
	int8_t x319 = INT8_MIN;
	uint32_t x320 = 109U;

	t49 = ((x317+x318)<=(x319*x320));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x322 = UINT32_MAX;
	static uint16_t x323 = UINT16_MAX;
	int16_t x324 = 0;

	t50 = ((x321+x322)<=(x323*x324));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x325 = 6U;
	static int16_t x326 = -1;
	int8_t x327 = INT8_MIN;
	uint64_t x328 = 3655649LLU;
	int32_t t51 = 9;

	t51 = ((x325+x326)<=(x327*x328));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x330 = -1;
	static int8_t x331 = INT8_MIN;
	int8_t x332 = INT8_MIN;
	static volatile int32_t t52 = -3689;

	t52 = ((x329+x330)<=(x331*x332));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x333 = 3;
	int8_t x334 = -10;
	int16_t x335 = INT16_MAX;
	volatile uint64_t x336 = 105641325280LLU;
	int32_t t53 = 13;

	t53 = ((x333+x334)<=(x335*x336));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x337 = -1;
	static int16_t x339 = INT16_MAX;
	int16_t x340 = INT16_MIN;
	volatile int32_t t54 = -28578;

	t54 = ((x337+x338)<=(x339*x340));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x345 = INT16_MIN;
	volatile int16_t x346 = -1;
	int8_t x347 = -4;
	uint8_t x348 = 1U;
	int32_t t55 = -10204;

	t55 = ((x345+x346)<=(x347*x348));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x349 = INT16_MIN;
	int32_t x350 = -1;
	static volatile uint32_t x351 = UINT32_MAX;
	int8_t x352 = INT8_MIN;
	int32_t t56 = 934834742;

	t56 = ((x349+x350)<=(x351*x352));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x358 = INT64_MIN;
	static uint32_t x359 = UINT32_MAX;
	int8_t x360 = INT8_MIN;
	volatile int32_t t57 = -136029918;

	t57 = ((x357+x358)<=(x359*x360));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x361 = INT64_MAX;
	volatile int8_t x362 = -1;
	int8_t x363 = -1;
	volatile int16_t x364 = INT16_MAX;
	static int32_t t58 = 1;

	t58 = ((x361+x362)<=(x363*x364));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x365 = UINT8_MAX;
	static uint8_t x368 = 2U;
	int32_t t59 = 18;

	t59 = ((x365+x366)<=(x367*x368));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x373 = 21U;
	uint32_t x374 = UINT32_MAX;
	int32_t t60 = 47383;

	t60 = ((x373+x374)<=(x375*x376));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x377 = -1LL;
	uint8_t x378 = UINT8_MAX;
	volatile int8_t x379 = INT8_MIN;
	int64_t x380 = -1LL;

	t61 = ((x377+x378)<=(x379*x380));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x382 = 30U;
	static uint8_t x384 = 15U;
	int32_t t62 = -11125;

	t62 = ((x381+x382)<=(x383*x384));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x385 = 31U;
	int16_t x386 = -1;
	int64_t x387 = -3383327621LL;

	t63 = ((x385+x386)<=(x387*x388));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x410 = INT16_MIN;
	int32_t x411 = -1;
	volatile int32_t t64 = -101366861;

	t64 = ((x409+x410)<=(x411*x412));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x413 = 1542U;
	static uint64_t x414 = 98426265919202LLU;
	uint16_t x415 = UINT16_MAX;
	uint32_t x416 = UINT32_MAX;
	volatile int32_t t65 = 1307246;

	t65 = ((x413+x414)<=(x415*x416));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x418 = -1;
	int8_t x419 = INT8_MIN;
	uint8_t x420 = 7U;
	volatile int32_t t66 = -1;

	t66 = ((x417+x418)<=(x419*x420));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x422 = INT64_MIN;
	static uint32_t x423 = 66U;
	static int16_t x424 = INT16_MAX;

	t67 = ((x421+x422)<=(x423*x424));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x425 = 5;
	int16_t x426 = -1;
	int32_t x427 = -9;
	volatile uint16_t x428 = 24U;
	int32_t t68 = -3176;

	t68 = ((x425+x426)<=(x427*x428));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x433 = UINT32_MAX;
	uint64_t x434 = 217640165167538676LLU;
	static int32_t x435 = -1;
	uint16_t x436 = 0U;

	t69 = ((x433+x434)<=(x435*x436));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x438 = 15619882LL;
	volatile int8_t x439 = -1;
	static uint16_t x440 = 30909U;
	static volatile int32_t t70 = -40629;

	t70 = ((x437+x438)<=(x439*x440));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x445 = 2070;
	int32_t x446 = INT32_MIN;
	int32_t t71 = 325;

	t71 = ((x445+x446)<=(x447*x448));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x449 = UINT64_MAX;
	static volatile int32_t x451 = -1699;
	int32_t t72 = 10850004;

	t72 = ((x449+x450)<=(x451*x452));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x453 = -1398;
	int32_t x454 = -1;
	int32_t x455 = INT32_MAX;
	volatile int64_t x456 = -50739986LL;
	int32_t t73 = 904146571;

	t73 = ((x453+x454)<=(x455*x456));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x462 = -12805;
	uint32_t x463 = 27502380U;
	static int8_t x464 = -11;
	volatile int32_t t74 = -17;

	t74 = ((x461+x462)<=(x463*x464));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x465 = INT16_MAX;
	uint8_t x466 = 7U;
	int32_t t75 = 781611535;

	t75 = ((x465+x466)<=(x467*x468));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x469 = 35223553LLU;
	volatile uint16_t x470 = 1457U;
	static int32_t x471 = -1;
	static volatile int16_t x472 = 5185;
	int32_t t76 = 1793;

	t76 = ((x469+x470)<=(x471*x472));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x481 = 4;
	static int16_t x482 = INT16_MIN;
	int8_t x483 = INT8_MIN;
	static int8_t x484 = INT8_MAX;
	volatile int32_t t77 = -543864;

	t77 = ((x481+x482)<=(x483*x484));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x489 = 5U;
	volatile int8_t x490 = INT8_MIN;
	int8_t x492 = -26;
	volatile int32_t t78 = -771862;

	t78 = ((x489+x490)<=(x491*x492));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x501 = -1;
	static int8_t x503 = -1;
	uint64_t x504 = UINT64_MAX;

	t79 = ((x501+x502)<=(x503*x504));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x505 = INT16_MIN;
	uint64_t x506 = UINT64_MAX;
	int16_t x508 = -3767;
	volatile int32_t t80 = -110;

	t80 = ((x505+x506)<=(x507*x508));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x513 = -1;
	volatile uint8_t x514 = 61U;
	int16_t x515 = INT16_MIN;
	uint64_t x516 = 919870326214566628LLU;
	volatile int32_t t81 = -1;

	t81 = ((x513+x514)<=(x515*x516));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x517 = -1LL;
	volatile uint64_t x518 = 2023870808715726LLU;
	uint16_t x519 = UINT16_MAX;
	int16_t x520 = -1;
	static volatile int32_t t82 = 120524845;

	t82 = ((x517+x518)<=(x519*x520));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x522 = 0;
	int8_t x523 = INT8_MAX;
	uint64_t x524 = UINT64_MAX;

	t83 = ((x521+x522)<=(x523*x524));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x537 = INT64_MIN;
	uint16_t x538 = 0U;
	uint64_t x539 = 1571502905423209331LLU;
	volatile int32_t t84 = 29;

	t84 = ((x537+x538)<=(x539*x540));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x545 = INT32_MIN;
	volatile uint8_t x546 = 88U;
	int8_t x547 = -45;
	int32_t x548 = -1;

	t85 = ((x545+x546)<=(x547*x548));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x550 = INT16_MIN;
	int16_t x551 = -796;
	static uint64_t x552 = UINT64_MAX;
	static int32_t t86 = 26;

	t86 = ((x549+x550)<=(x551*x552));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x557 = 1021701043U;
	int8_t x558 = INT8_MIN;
	volatile uint64_t x559 = 890LLU;
	int16_t x560 = INT16_MAX;
	volatile int32_t t87 = -1;

	t87 = ((x557+x558)<=(x559*x560));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x573 = -1;
	static int32_t x574 = -1;
	volatile uint64_t x575 = UINT64_MAX;
	static volatile int32_t t88 = -234407;

	t88 = ((x573+x574)<=(x575*x576));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x577 = 3;
	volatile uint16_t x578 = 63U;
	int16_t x579 = INT16_MIN;

	t89 = ((x577+x578)<=(x579*x580));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x589 = -1;
	volatile int64_t x590 = 33870922494LL;
	volatile uint64_t x591 = 0LLU;
	int16_t x592 = INT16_MIN;
	int32_t t90 = 0;

	t90 = ((x589+x590)<=(x591*x592));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x593 = INT8_MAX;
	int32_t x594 = 84257;
	uint8_t x596 = 90U;
	volatile int32_t t91 = 1345;

	t91 = ((x593+x594)<=(x595*x596));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x597 = INT8_MAX;
	uint32_t x598 = 41465696U;
	int64_t x599 = -226177983LL;
	static volatile int32_t t92 = 427;

	t92 = ((x597+x598)<=(x599*x600));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x609 = -1;
	int16_t x610 = -1;
	uint16_t x611 = UINT16_MAX;
	int32_t t93 = 29769806;

	t93 = ((x609+x610)<=(x611*x612));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x613 = INT64_MIN;
	int64_t x614 = 1631558160505412LL;
	uint32_t x615 = UINT32_MAX;
	int16_t x616 = INT16_MIN;
	int32_t t94 = 205207150;

	t94 = ((x613+x614)<=(x615*x616));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x617 = UINT8_MAX;
	volatile int8_t x618 = -1;
	volatile int8_t x619 = -1;
	int16_t x620 = INT16_MIN;
	volatile int32_t t95 = 376042250;

	t95 = ((x617+x618)<=(x619*x620));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x629 = INT32_MAX;
	int8_t x630 = INT8_MIN;
	static uint32_t x631 = 5U;
	uint16_t x632 = UINT16_MAX;
	volatile int32_t t96 = 126;

	t96 = ((x629+x630)<=(x631*x632));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x634 = 3U;
	static uint64_t x635 = 144913084476LLU;
	static volatile int32_t t97 = 90167;

	t97 = ((x633+x634)<=(x635*x636));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x637 = UINT64_MAX;
	uint64_t x638 = UINT64_MAX;
	int8_t x640 = INT8_MIN;
	volatile int32_t t98 = -311742546;

	t98 = ((x637+x638)<=(x639*x640));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x642 = INT16_MIN;
	int16_t x643 = 9;
	static volatile int32_t t99 = 961321395;

	t99 = ((x641+x642)<=(x643*x644));

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

