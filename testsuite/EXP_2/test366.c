#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x1 = 26;
uint64_t x7 = 1921825267687704LLU;
int16_t x39 = -1;
uint64_t t4 = 44194266828LLU;
int8_t x67 = INT8_MIN;
int32_t t7 = 1;
int8_t x119 = 7;
volatile int16_t x126 = 3;
int8_t x135 = -1;
volatile int16_t x142 = 2;
int8_t x145 = INT8_MIN;
int8_t x147 = INT8_MIN;
int64_t x153 = 260783574LL;
uint16_t x159 = 1U;
uint8_t x160 = 53U;
uint32_t x169 = UINT32_MAX;
uint64_t x170 = 244184LLU;
int16_t x172 = -1;
uint64_t t19 = 31LLU;
static uint16_t x187 = 4610U;
static uint8_t x188 = UINT8_MAX;
int8_t x192 = 11;
uint64_t x193 = 1020105708LLU;
static volatile uint64_t x196 = 12381542487LLU;
static volatile uint32_t x219 = 1320718929U;
int8_t x220 = 0;
int8_t x225 = INT8_MAX;
uint64_t t25 = 712663LLU;
static uint64_t t26 = 181190749374447LLU;
uint16_t x233 = 149U;
static int32_t x240 = -60951;
int16_t x260 = -1;
int8_t x261 = 1;
static int64_t x270 = 21607LL;
int8_t x271 = 35;
int8_t x314 = -1;
int32_t t38 = 663655;
uint64_t x317 = 6LLU;
int8_t x318 = INT8_MIN;
uint32_t x320 = 2U;
int8_t x322 = -1;
volatile int64_t x323 = -1LL;
static int16_t x327 = -1;
int32_t x339 = 268418;
uint64_t x341 = UINT64_MAX;
uint16_t x348 = UINT16_MAX;
int16_t x352 = 2;
volatile int32_t x358 = 58;
int16_t x361 = 6;
int16_t x366 = INT16_MIN;
static uint32_t x367 = UINT32_MAX;
int32_t t51 = 14593623;
int8_t x389 = INT8_MIN;
static int8_t x397 = INT8_MIN;
static volatile uint64_t t55 = 864236343LLU;
int16_t x405 = INT16_MAX;
static volatile uint64_t t57 = 408633202237LLU;
volatile int32_t x413 = -1;
int8_t x430 = 1;
volatile uint64_t t59 = 15223992LLU;
int8_t x435 = INT8_MAX;
static volatile uint16_t x436 = 836U;
int8_t x438 = -1;
int32_t t61 = -1673;
int64_t x449 = -1LL;
static int16_t x450 = 12307;
static volatile int64_t t62 = -85658295301681983LL;
int16_t x458 = -1;
uint64_t t64 = 3991382688297LLU;
int16_t x469 = INT16_MIN;
volatile uint8_t x480 = UINT8_MAX;
static volatile int8_t x485 = -1;
int32_t x496 = INT32_MAX;
static volatile int32_t x504 = INT32_MIN;
uint32_t x517 = UINT32_MAX;
volatile uint32_t x523 = 1433074230U;
uint32_t t73 = 265659253U;
int8_t x533 = INT8_MIN;
volatile uint64_t t79 = 145368LLU;
int8_t x567 = INT8_MIN;
static uint32_t x569 = UINT32_MAX;
int64_t x582 = -4266104923LL;
static int32_t x600 = -1;
uint64_t x615 = UINT64_MAX;
int32_t x622 = -1;
int8_t x624 = -1;
static int16_t x628 = INT16_MIN;
static int16_t x643 = 9;
int8_t x645 = -1;
static int8_t x647 = INT8_MIN;
int16_t x658 = INT16_MAX;
static int8_t x659 = 7;
static int8_t x676 = -61;
int64_t x677 = INT64_MIN;
uint16_t x679 = 0U;
volatile uint8_t x684 = 1U;


void f0(void) {
	int32_t x2 = -21;
	static int32_t x3 = -1;
	int32_t x4 = INT32_MAX;
	int32_t t0 = -348;

	t0 = ((x1*(x2*x3))-x4);

	if (t0 != -2147483101) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int64_t x6 = -1LL;
	static int32_t x8 = INT32_MAX;
	uint64_t t1 = 525046121LLU;

	t1 = ((x5*(x6*x7))-x8);

	if (t1 != 245993632116542465LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -23;
	static int8_t x10 = INT8_MIN;
	int8_t x11 = INT8_MIN;
	int32_t x12 = INT32_MIN;
	static volatile int32_t t2 = -11779738;

	t2 = ((x9*(x10*x11))-x12);

	if (t2 != 2147106816) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x37 = 13U;
	volatile int8_t x38 = INT8_MIN;
	static volatile int64_t x40 = 61497203LL;
	static int64_t t3 = -53390432LL;

	t3 = ((x37*(x38*x39))-x40);

	if (t3 != -61495539LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x41 = UINT32_MAX;
	volatile uint64_t x42 = 69308609538LLU;
	uint32_t x43 = 559139U;
	uint64_t x44 = 114LLU;

	t4 = ((x41*(x42*x43))-x44);

	if (t4 != 1310053252184150856LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x65 = 23U;
	uint64_t x66 = 1818LLU;
	static int16_t x68 = -1;
	volatile uint64_t t5 = 3836450935LLU;

	t5 = ((x65*(x66*x67))-x68);

	if (t5 != 18446744073704199425LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x97 = 10306;
	int64_t x98 = -25658LL;
	int32_t x99 = -1;
	volatile int8_t x100 = -1;
	static volatile int64_t t6 = -8LL;

	t6 = ((x97*(x98*x99))-x100);

	if (t6 != 264431349LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x105 = UINT16_MAX;
	int8_t x106 = -1;
	uint8_t x107 = UINT8_MAX;
	static uint8_t x108 = UINT8_MAX;

	t7 = ((x105*(x106*x107))-x108);

	if (t7 != -16711680) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int32_t x117 = INT32_MIN;
	uint64_t x118 = 91242LLU;
	uint64_t x120 = 2LLU;
	volatile uint64_t t8 = 67691893535182LLU;

	t8 = ((x117*(x118*x119))-x120);

	if (t8 != 18445372488788475902LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x121 = 1;
	uint16_t x122 = UINT16_MAX;
	int16_t x123 = 1;
	int32_t x124 = 39;
	static int32_t t9 = -790166;

	t9 = ((x121*(x122*x123))-x124);

	if (t9 != 65496) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x125 = -105507974LL;
	int16_t x127 = INT16_MIN;
	int16_t x128 = INT16_MAX;
	volatile int64_t t10 = 114836458868695362LL;

	t10 = ((x125*(x126*x127))-x128);

	if (t10 != 10371855843329LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x133 = 25626;
	int8_t x134 = INT8_MIN;
	volatile uint32_t x136 = 59376663U;
	volatile uint32_t t11 = 981855U;

	t11 = ((x133*(x134*x135))-x136);

	if (t11 != 4238870761U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x141 = 1;
	static volatile int16_t x143 = 180;
	static volatile uint8_t x144 = UINT8_MAX;
	static volatile int32_t t12 = 696596;

	t12 = ((x141*(x142*x143))-x144);

	if (t12 != 105) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x146 = -1;
	uint16_t x148 = UINT16_MAX;
	static volatile int32_t t13 = 12279659;

	t13 = ((x145*(x146*x147))-x148);

	if (t13 != -81919) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x149 = 104U;
	uint32_t x150 = UINT32_MAX;
	int8_t x151 = 1;
	static int64_t x152 = 1769LL;
	volatile int64_t t14 = 1906128886LL;

	t14 = ((x149*(x150*x151))-x152);

	if (t14 != 4294965423LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x154 = -1LL;
	int32_t x155 = INT32_MIN;
	static int32_t x156 = INT32_MIN;
	int64_t t15 = 92LL;

	t15 = ((x153*(x154*x155))-x156);

	if (t15 != 560028462979481600LL) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint64_t x157 = 2403371669608843419LLU;
	int16_t x158 = INT16_MIN;
	uint64_t t16 = 109670790545LLU;

	t16 = ((x157*(x158*x159))-x160);

	if (t16 != 13914324997204246475LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x165 = 29U;
	int8_t x166 = -1;
	volatile uint8_t x167 = 1U;
	int8_t x168 = INT8_MIN;
	int32_t t17 = -4752478;

	t17 = ((x165*(x166*x167))-x168);

	if (t17 != 99) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x171 = 39280U;
	uint64_t t18 = 28175580122429432LLU;

	t18 = ((x169*(x170*x171))-x172);

	if (t18 != 4301894759419255169LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x181 = 117760LLU;
	static volatile int16_t x182 = 4;
	uint16_t x183 = 173U;
	int16_t x184 = INT16_MIN;

	t19 = ((x181*(x182*x183))-x184);

	if (t19 != 81522688LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x185 = 3475784LLU;
	uint16_t x186 = 1099U;
	static uint64_t t20 = 9828508221897LLU;

	t20 = ((x185*(x186*x187))-x188);

	if (t20 != 17609677299505LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x189 = -1;
	int16_t x190 = INT16_MIN;
	int32_t x191 = -1;
	volatile int32_t t21 = -1;

	t21 = ((x189*(x190*x191))-x192);

	if (t21 != -32779) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x194 = -75;
	volatile int16_t x195 = INT16_MAX;
	static uint64_t t22 = 0LLU;

	t22 = ((x193*(x194*x195))-x196);

	if (t22 != 18444237126047956429LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x201 = 2;
	volatile int32_t x202 = INT32_MIN;
	uint32_t x203 = UINT32_MAX;
	int32_t x204 = 15846;
	volatile uint32_t t23 = 120864U;

	t23 = ((x201*(x202*x203))-x204);

	if (t23 != 4294951450U) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x217 = UINT64_MAX;
	volatile uint64_t x218 = 1192202366427141873LLU;
	uint64_t t24 = 3509333141232LLU;

	t24 = ((x217*(x218*x219))-x220);

	if (t24 != 16937183865403231167LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x226 = 6393U;
	uint8_t x227 = UINT8_MAX;
	uint64_t x228 = 267712413527851LLU;

	t25 = ((x225*(x226*x227))-x228);

	if (t25 != 18446476361503061070LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x229 = 65240165885861548LLU;
	volatile int16_t x230 = INT16_MIN;
	int64_t x231 = 191234824015964LL;
	static volatile int8_t x232 = -24;

	t26 = ((x229*(x230*x231))-x232);

	if (t26 != 8208081181335879704LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x234 = INT16_MIN;
	uint16_t x235 = 3U;
	static uint16_t x236 = 15342U;
	int32_t t27 = -2123940;

	t27 = ((x233*(x234*x235))-x236);

	if (t27 != -14662638) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x237 = UINT64_MAX;
	uint64_t x238 = 15037778726797790LLU;
	uint64_t x239 = UINT64_MAX;
	volatile uint64_t t28 = 226774109865LLU;

	t28 = ((x237*(x238*x239))-x240);

	if (t28 != 15037778726858741LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x241 = 825353577769LLU;
	static int32_t x242 = -1;
	volatile uint64_t x243 = 2353843LLU;
	uint64_t x244 = UINT64_MAX;
	static volatile uint64_t t29 = 116584711528070LLU;

	t29 = ((x241*(x242*x243))-x244);

	if (t29 != 16503991332153035350LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x253 = INT8_MAX;
	volatile int8_t x254 = -1;
	int16_t x255 = -27;
	int64_t x256 = -1LL;
	int64_t t30 = -18391661LL;

	t30 = ((x253*(x254*x255))-x256);

	if (t30 != 3430LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x257 = INT8_MIN;
	static int16_t x258 = INT16_MAX;
	int32_t x259 = -13;
	volatile int32_t t31 = 167699;

	t31 = ((x257*(x258*x259))-x260);

	if (t31 != 54524289) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x262 = 14U;
	static int64_t x263 = -14609574989LL;
	int8_t x264 = INT8_MAX;
	volatile int64_t t32 = -3593787LL;

	t32 = ((x261*(x262*x263))-x264);

	if (t32 != -204534049973LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x269 = 7U;
	static int32_t x272 = -10746;
	static volatile int64_t t33 = 51LL;

	t33 = ((x269*(x270*x271))-x272);

	if (t33 != 5304461LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x293 = 0U;
	uint8_t x294 = 64U;
	int16_t x295 = 0;
	uint16_t x296 = 0U;
	int32_t t34 = 44;

	t34 = ((x293*(x294*x295))-x296);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x301 = 13066691089698LLU;
	int16_t x302 = INT16_MIN;
	static int32_t x303 = -1;
	int8_t x304 = INT8_MIN;
	uint64_t t35 = 207010482LLU;

	t35 = ((x301*(x302*x303))-x304);

	if (t35 != 428169333627224192LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x305 = 1LLU;
	static uint64_t x306 = 8003749753LLU;
	int64_t x307 = INT64_MIN;
	int64_t x308 = 66111009LL;
	uint64_t t36 = 10LLU;

	t36 = ((x305*(x306*x307))-x308);

	if (t36 != 9223372036788664799LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x309 = INT16_MIN;
	uint32_t x310 = UINT32_MAX;
	int64_t x311 = -6LL;
	int8_t x312 = INT8_MIN;
	int64_t t37 = -16067907LL;

	t37 = ((x309*(x310*x311))-x312);

	if (t37 != 844424929935488LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x313 = INT32_MAX;
	int8_t x315 = -1;
	volatile uint16_t x316 = 3761U;

	t38 = ((x313*(x314*x315))-x316);

	if (t38 != 2147479886) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x319 = INT16_MAX;
	volatile uint64_t t39 = 807029610149338LLU;

	t39 = ((x317*(x318*x319))-x320);

	if (t39 != 18446744073684386558LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x321 = -1LL;
	uint8_t x324 = 1U;
	int64_t t40 = -100172129364955LL;

	t40 = ((x321*(x322*x323))-x324);

	if (t40 != -2LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x325 = INT64_MIN;
	volatile int16_t x326 = 0;
	int8_t x328 = 15;
	int64_t t41 = 5LL;

	t41 = ((x325*(x326*x327))-x328);

	if (t41 != -15LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x337 = 31U;
	uint8_t x338 = UINT8_MAX;
	static int32_t x340 = -1236;
	volatile int32_t t42 = -410067745;

	t42 = ((x337*(x338*x339))-x340);

	if (t42 != 2121845526) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x342 = 29277U;
	uint64_t x343 = 7LLU;
	int64_t x344 = 33118305LL;
	volatile uint64_t t43 = 206LLU;

	t43 = ((x341*(x342*x343))-x344);

	if (t43 != 18446744073676228372LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x345 = 3243303;
	int8_t x346 = INT8_MIN;
	uint64_t x347 = 17052639LLU;
	uint64_t t44 = 749301348109994909LLU;

	t44 = ((x345*(x346*x347))-x348);

	if (t44 != 18439664793680479105LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x349 = 60;
	int16_t x350 = INT16_MAX;
	uint64_t x351 = 3439812780056849LLU;
	uint64_t t45 = 576LLU;

	t45 = ((x349*(x350*x351))-x352);

	if (t45 != 11232390869670379522LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x353 = INT16_MIN;
	volatile int8_t x354 = 0;
	int8_t x355 = -1;
	int64_t x356 = -1LL;
	volatile int64_t t46 = 17948992048313LL;

	t46 = ((x353*(x354*x355))-x356);

	if (t46 != 1LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x357 = 14333U;
	uint64_t x359 = UINT64_MAX;
	static int16_t x360 = 1782;
	volatile uint64_t t47 = 6436258219535907003LLU;

	t47 = ((x357*(x358*x359))-x360);

	if (t47 != 18446744073708718520LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x362 = 1659843173537387943LLU;
	static int32_t x363 = -1;
	int32_t x364 = INT32_MIN;
	volatile uint64_t t48 = 4848618LLU;

	t48 = ((x361*(x362*x363))-x364);

	if (t48 != 8487685034632707606LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x365 = INT8_MAX;
	uint8_t x368 = UINT8_MAX;
	volatile uint32_t t49 = 2U;

	t49 = ((x365*(x366*x367))-x368);

	if (t49 != 4161281U) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x369 = 1669302223811LLU;
	int32_t x370 = -50250;
	uint8_t x371 = 1U;
	static int8_t x372 = 1;
	static uint64_t t50 = 123217305112852LLU;

	t50 = ((x369*(x370*x371))-x372);

	if (t50 != 18362861636963048865LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x381 = INT8_MIN;
	uint16_t x382 = UINT16_MAX;
	int16_t x383 = -50;
	volatile int32_t x384 = -904861;

	t51 = ((x381*(x382*x383))-x384);

	if (t51 != 420328861) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x385 = 32008U;
	int8_t x386 = INT8_MIN;
	uint16_t x387 = 3U;
	int8_t x388 = -1;
	int32_t t52 = -932;

	t52 = ((x385*(x386*x387))-x388);

	if (t52 != -12291071) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x390 = -1;
	int8_t x391 = INT8_MAX;
	volatile uint64_t x392 = 61362212362LLU;
	volatile uint64_t t53 = 1LLU;

	t53 = ((x389*(x390*x391))-x392);

	if (t53 != 18446744012347355510LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x393 = INT8_MIN;
	uint32_t x394 = UINT32_MAX;
	uint64_t x395 = UINT64_MAX;
	static int32_t x396 = -7541708;
	uint64_t t54 = 111069796806LLU;

	t54 = ((x393*(x394*x395))-x396);

	if (t54 != 549763355468LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x398 = UINT64_MAX;
	volatile int16_t x399 = INT16_MAX;
	static uint32_t x400 = UINT32_MAX;

	t55 = ((x397*(x398*x399))-x400);

	if (t55 != 18446744069418778497LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x406 = 1LLU;
	volatile int64_t x407 = INT64_MIN;
	uint8_t x408 = 1U;
	volatile uint64_t t56 = 9436684675LLU;

	t56 = ((x405*(x406*x407))-x408);

	if (t56 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x409 = INT64_MIN;
	int8_t x410 = INT8_MAX;
	uint64_t x411 = 203635954609LLU;
	int64_t x412 = INT64_MIN;

	t57 = ((x409*(x410*x411))-x412);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x414 = 3757;
	volatile uint16_t x415 = 1U;
	static int16_t x416 = 0;
	int32_t t58 = -43083110;

	t58 = ((x413*(x414*x415))-x416);

	if (t58 != -3757) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x429 = INT32_MIN;
	static uint64_t x431 = UINT64_MAX;
	int16_t x432 = INT16_MIN;

	t59 = ((x429*(x430*x431))-x432);

	if (t59 != 2147516416LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x433 = -473;
	uint64_t x434 = UINT64_MAX;
	volatile uint64_t t60 = 3038303764100206LLU;

	t60 = ((x433*(x434*x435))-x436);

	if (t60 != 59235LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x437 = 10812U;
	uint8_t x439 = 26U;
	int8_t x440 = INT8_MIN;

	t61 = ((x437*(x438*x439))-x440);

	if (t61 != -280984) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x451 = INT16_MIN;
	static int32_t x452 = INT32_MIN;

	t62 = ((x449*(x450*x451))-x452);

	if (t62 != 2550759424LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x457 = 14U;
	uint64_t x459 = 44895343162120378LLU;
	int16_t x460 = -835;
	static volatile uint64_t t63 = 5308874433679619LLU;

	t63 = ((x457*(x458*x459))-x460);

	if (t63 != 17818209269439867159LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x461 = -38909LL;
	uint64_t x462 = 102347357900LLU;
	uint64_t x463 = 3847LLU;
	uint8_t x464 = UINT8_MAX;

	t64 = ((x461*(x462*x463))-x464);

	if (t64 != 3127092381910409661LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x470 = 51464;
	uint64_t x471 = UINT64_MAX;
	volatile int64_t x472 = INT64_MIN;
	uint64_t t65 = 1747395LLU;

	t65 = ((x469*(x470*x471))-x472);

	if (t65 != 9223372038541148160LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x473 = UINT64_MAX;
	int64_t x474 = -1LL;
	int32_t x475 = INT32_MIN;
	int8_t x476 = 49;
	uint64_t t66 = 1LLU;

	t66 = ((x473*(x474*x475))-x476);

	if (t66 != 18446744071562067919LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x477 = INT16_MIN;
	int16_t x478 = -4;
	int8_t x479 = INT8_MIN;
	int32_t t67 = 3;

	t67 = ((x477*(x478*x479))-x480);

	if (t67 != -16777471) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x486 = INT8_MAX;
	int16_t x487 = -1;
	int32_t x488 = 525562630;
	volatile int32_t t68 = -1;

	t68 = ((x485*(x486*x487))-x488);

	if (t68 != -525562503) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x493 = INT64_MIN;
	volatile uint64_t x494 = UINT64_MAX;
	int8_t x495 = INT8_MIN;
	uint64_t t69 = 52LLU;

	t69 = ((x493*(x494*x495))-x496);

	if (t69 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int64_t x501 = INT64_MIN;
	uint64_t x502 = UINT64_MAX;
	static int64_t x503 = -1LL;
	volatile uint64_t t70 = 433182992LLU;

	t70 = ((x501*(x502*x503))-x504);

	if (t70 != 9223372039002259456LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x505 = 98881732U;
	int16_t x506 = INT16_MIN;
	int8_t x507 = INT8_MIN;
	uint16_t x508 = UINT16_MAX;
	uint32_t t71 = 1932U;

	t71 = ((x505*(x506*x507))-x508);

	if (t71 != 822018049U) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x518 = 3U;
	uint64_t x519 = 847698869LLU;
	int64_t x520 = INT64_MIN;
	volatile uint64_t t72 = 3818674323133811LLU;

	t72 = ((x517*(x518*x519))-x520);

	if (t72 != 1699144718235692257LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x521 = UINT16_MAX;
	int8_t x522 = INT8_MIN;
	static int16_t x524 = -1;

	t73 = ((x521*(x522*x523))-x524);

	if (t73 != 2591890177U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x534 = 619;
	int16_t x535 = -1;
	uint8_t x536 = 15U;
	static volatile int32_t t74 = -137;

	t74 = ((x533*(x534*x535))-x536);

	if (t74 != 79217) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x537 = UINT64_MAX;
	volatile int16_t x538 = -1;
	uint32_t x539 = 118854280U;
	uint8_t x540 = 94U;
	uint64_t t75 = 98375198272LLU;

	t75 = ((x537*(x538*x539))-x540);

	if (t75 != 18446744069533438506LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x545 = 25650874990912LLU;
	uint64_t x546 = UINT64_MAX;
	uint8_t x547 = 4U;
	int8_t x548 = INT8_MIN;
	static uint64_t t76 = 20084260324LLU;

	t76 = ((x545*(x546*x547))-x548);

	if (t76 != 18446641470209588096LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x549 = 10033LLU;
	uint32_t x550 = 6930117U;
	static int32_t x551 = INT32_MAX;
	int16_t x552 = -1;
	volatile uint64_t t77 = 778394LLU;

	t77 = ((x549*(x550*x551))-x552);

	if (t77 != 21476173576524LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x557 = -21818;
	uint16_t x558 = 11931U;
	uint64_t x559 = 102437LLU;
	static int8_t x560 = INT8_MAX;
	uint64_t t78 = 2730598LLU;

	t78 = ((x557*(x558*x559))-x560);

	if (t78 != 18446717408276921643LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x561 = INT16_MAX;
	uint16_t x562 = 608U;
	volatile uint32_t x563 = 1921U;
	volatile uint64_t x564 = 8235150109611253LLU;

	t79 = ((x561*(x562*x563))-x564);

	if (t79 != 18438508927511009451LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x565 = UINT16_MAX;
	int16_t x566 = -31;
	volatile int16_t x568 = -3205;
	static volatile int32_t t80 = 1;

	t80 = ((x565*(x566*x567))-x568);

	if (t80 != 260046085) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x570 = INT8_MIN;
	uint16_t x571 = UINT16_MAX;
	uint16_t x572 = 2926U;
	uint32_t t81 = 228U;

	t81 = ((x569*(x570*x571))-x572);

	if (t81 != 8385554U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x577 = -1LL;
	uint8_t x578 = 6U;
	uint8_t x579 = 3U;
	int8_t x580 = -1;
	int64_t t82 = 5713382LL;

	t82 = ((x577*(x578*x579))-x580);

	if (t82 != -17LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x581 = -1;
	int16_t x583 = -34;
	int8_t x584 = -1;
	volatile int64_t t83 = 30334243LL;

	t83 = ((x581*(x582*x583))-x584);

	if (t83 != -145047567381LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x597 = 8143866049022721LLU;
	int8_t x598 = -1;
	int32_t x599 = -1;
	volatile uint64_t t84 = 828581478425LLU;

	t84 = ((x597*(x598*x599))-x600);

	if (t84 != 8143866049022722LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x601 = -1;
	int32_t x602 = 93034903;
	uint64_t x603 = UINT64_MAX;
	volatile int16_t x604 = INT16_MAX;
	uint64_t t85 = 429132962448650668LLU;

	t85 = ((x601*(x602*x603))-x604);

	if (t85 != 93002136LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x613 = INT16_MAX;
	int64_t x614 = -1LL;
	int16_t x616 = -14;
	uint64_t t86 = 12LLU;

	t86 = ((x613*(x614*x615))-x616);

	if (t86 != 32781LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x617 = INT8_MAX;
	int8_t x618 = INT8_MIN;
	volatile int16_t x619 = INT16_MAX;
	int8_t x620 = INT8_MIN;
	static volatile int32_t t87 = 1819880;

	t87 = ((x617*(x618*x619))-x620);

	if (t87 != -532660224) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x621 = -1;
	static int32_t x623 = -1;
	int32_t t88 = -58955330;

	t88 = ((x621*(x622*x623))-x624);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x625 = UINT32_MAX;
	static int64_t x626 = 52LL;
	static volatile int32_t x627 = -1;
	int64_t t89 = 47261730673694696LL;

	t89 = ((x625*(x626*x627))-x628);

	if (t89 != -223338266572LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x633 = INT64_MIN;
	uint64_t x634 = 1640580399LLU;
	static volatile uint16_t x635 = UINT16_MAX;
	int64_t x636 = -1LL;
	uint64_t t90 = 2060093LLU;

	t90 = ((x633*(x634*x635))-x636);

	if (t90 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x641 = INT8_MIN;
	volatile int64_t x642 = -531LL;
	uint8_t x644 = 1U;
	int64_t t91 = -809636795187660437LL;

	t91 = ((x641*(x642*x643))-x644);

	if (t91 != 611711LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x646 = -41943350129LL;
	int16_t x648 = -55;
	int64_t t92 = -839302252LL;

	t92 = ((x645*(x646*x647))-x648);

	if (t92 != -5368748816457LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x653 = 799219LLU;
	static volatile uint64_t x654 = 474212441599069LLU;
	uint64_t x655 = 1837979849499652LLU;
	int8_t x656 = INT8_MIN;
	volatile uint64_t t93 = 7911686LLU;

	t93 = ((x653*(x654*x655))-x656);

	if (t93 != 5828881981970391452LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x657 = UINT64_MAX;
	volatile int32_t x660 = INT32_MIN;
	uint64_t t94 = 1LLU;

	t94 = ((x657*(x658*x659))-x660);

	if (t94 != 2147254279LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x661 = 3807U;
	static int16_t x662 = 0;
	uint16_t x663 = 0U;
	int64_t x664 = 473LL;
	static int64_t t95 = -16422865260846LL;

	t95 = ((x661*(x662*x663))-x664);

	if (t95 != -473LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x673 = -1;
	int16_t x674 = 1;
	uint32_t x675 = 209326264U;
	volatile uint32_t t96 = 1U;

	t96 = ((x673*(x674*x675))-x676);

	if (t96 != 4085641093U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x678 = INT16_MIN;
	int32_t x680 = -1;
	int64_t t97 = 279502141LL;

	t97 = ((x677*(x678*x679))-x680);

	if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x681 = INT16_MIN;
	volatile int8_t x682 = INT8_MIN;
	int64_t x683 = -1LL;
	int64_t t98 = 32102LL;

	t98 = ((x681*(x682*x683))-x684);

	if (t98 != -4194305LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x701 = -1;
	int8_t x702 = 1;
	uint64_t x703 = 31752966LLU;
	uint16_t x704 = 972U;
	uint64_t t99 = 917030811802781672LLU;

	t99 = ((x701*(x702*x703))-x704);

	if (t99 != 18446744073677797678LLU) { NG(); } else { ; }
	
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

