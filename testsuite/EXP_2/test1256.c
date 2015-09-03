#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x3 = UINT32_MAX;
int32_t x9 = 19;
volatile int32_t t3 = -1415;
uint64_t x32 = UINT64_MAX;
int32_t t4 = -39116;
int64_t x59 = -2933477LL;
uint16_t x61 = UINT16_MAX;
int16_t x63 = -1;
static volatile int16_t x70 = INT16_MIN;
int64_t x71 = INT64_MIN;
static int32_t t9 = -7945821;
int32_t t10 = -10046718;
volatile int8_t x91 = -1;
static uint64_t x92 = 288017952740089LLU;
volatile uint16_t x93 = 790U;
uint64_t x110 = UINT64_MAX;
uint32_t x112 = UINT32_MAX;
int32_t t17 = 13;
uint16_t x138 = 0U;
int32_t t19 = -844;
int8_t x142 = -1;
volatile uint64_t x144 = UINT64_MAX;
int32_t t20 = -411326739;
static volatile int32_t t22 = -195;
int8_t x196 = -15;
volatile int32_t t26 = -400346696;
int8_t x211 = -1;
volatile uint8_t x212 = 31U;
uint64_t x216 = 20175LLU;
static uint16_t x217 = UINT16_MAX;
static int8_t x218 = -1;
int32_t t30 = -5385117;
uint64_t x237 = 444324135000782219LLU;
static volatile int32_t t32 = -142921568;
int64_t x241 = INT64_MAX;
uint32_t x243 = UINT32_MAX;
int32_t t34 = 22246442;
volatile int64_t x257 = 1193952358338LL;
int8_t x258 = INT8_MAX;
int32_t t37 = 204;
volatile int16_t x279 = INT16_MAX;
static volatile uint16_t x305 = UINT16_MAX;
int32_t t44 = -11;
static uint16_t x317 = 4U;
uint32_t x318 = 783591262U;
uint64_t x319 = 10814061067LLU;
uint64_t x320 = UINT64_MAX;
int32_t x327 = -14298017;
uint8_t x336 = 10U;
int8_t x352 = INT8_MAX;
int32_t t50 = -361819;
int64_t x360 = INT64_MAX;
int64_t x371 = -211291911621LL;
int32_t x383 = INT32_MAX;
volatile int16_t x391 = -1;
static int64_t x408 = -1LL;
volatile int32_t x412 = -1;
volatile uint32_t x422 = 7719797U;
int32_t x436 = -1;
uint32_t x441 = 57U;
uint16_t x444 = UINT16_MAX;
int32_t x453 = 827;
int8_t x454 = INT8_MIN;
int8_t x458 = INT8_MIN;
int64_t x460 = -1LL;
volatile int32_t t62 = -1;
uint8_t x466 = UINT8_MAX;
uint8_t x471 = UINT8_MAX;
int32_t t65 = 1659871;
volatile int64_t x483 = INT64_MIN;
int32_t t66 = 436056980;
static uint32_t x497 = UINT32_MAX;
volatile int16_t x500 = -15558;
int32_t t69 = 21;
uint8_t x508 = 12U;
int16_t x518 = 0;
static volatile int32_t t74 = 0;
volatile int32_t x534 = INT32_MIN;
static int8_t x550 = -1;
uint64_t x552 = UINT64_MAX;
uint16_t x569 = 2894U;
volatile int16_t x575 = 0;
static uint64_t x578 = 7478486173LLU;
uint32_t x591 = 2126590128U;
static int16_t x602 = INT16_MIN;
static uint64_t x610 = UINT64_MAX;
uint16_t x614 = 120U;
int16_t x617 = INT16_MAX;
int64_t x619 = INT64_MIN;
static int64_t x628 = INT64_MIN;
static int64_t x631 = 29716864608551LL;
volatile int16_t x632 = INT16_MIN;
volatile int8_t x643 = 7;
static volatile int32_t t94 = -121;
int8_t x667 = -14;
static volatile int16_t x668 = INT16_MAX;
volatile int32_t t95 = 1;
int16_t x681 = INT16_MAX;
int32_t x682 = -1;
int32_t x691 = INT32_MAX;
int16_t x692 = INT16_MIN;
volatile int32_t t98 = 10;


void f0(void) {
	static uint64_t x1 = 2375117331LLU;
	volatile uint32_t x2 = 1883060357U;
	int64_t x4 = -1LL;
	int32_t t0 = -12180479;

	t0 = ((x1<<(x2==x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x10 = UINT32_MAX;
	uint64_t x11 = 4LLU;
	int8_t x12 = -1;
	int32_t t1 = 44;

	t1 = ((x9<<(x10==x11))==x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x17 = 4LLU;
	int64_t x18 = -50560791976LL;
	int64_t x19 = INT64_MAX;
	int16_t x20 = -1;
	int32_t t2 = -32;

	t2 = ((x17<<(x18==x19))==x20);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x25 = 1U;
	volatile uint16_t x26 = UINT16_MAX;
	int64_t x27 = -12987863124719LL;
	static uint32_t x28 = 2459137U;

	t3 = ((x25<<(x26==x27))==x28);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x29 = UINT8_MAX;
	int32_t x30 = INT32_MIN;
	volatile int16_t x31 = INT16_MIN;

	t4 = ((x29<<(x30==x31))==x32);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x37 = INT64_MAX;
	int16_t x38 = INT16_MAX;
	static volatile int64_t x39 = 13LL;
	int64_t x40 = INT64_MAX;
	int32_t t5 = 0;

	t5 = ((x37<<(x38==x39))==x40);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x57 = 242;
	int8_t x58 = -4;
	int16_t x60 = INT16_MIN;
	int32_t t6 = -68160266;

	t6 = ((x57<<(x58==x59))==x60);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x62 = 508744938LLU;
	int32_t x64 = INT32_MIN;
	int32_t t7 = 54;

	t7 = ((x61<<(x62==x63))==x64);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x69 = INT32_MAX;
	uint16_t x72 = 438U;
	int32_t t8 = 0;

	t8 = ((x69<<(x70==x71))==x72);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x73 = INT64_MAX;
	volatile int8_t x74 = -1;
	volatile int8_t x75 = INT8_MIN;
	uint64_t x76 = UINT64_MAX;

	t9 = ((x73<<(x74==x75))==x76);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x77 = 1300836036335632LL;
	static int32_t x78 = 19083;
	int8_t x79 = INT8_MIN;
	static uint8_t x80 = 0U;

	t10 = ((x77<<(x78==x79))==x80);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x81 = UINT16_MAX;
	uint8_t x82 = UINT8_MAX;
	uint16_t x83 = UINT16_MAX;
	int32_t x84 = 459215;
	static int32_t t11 = 187701;

	t11 = ((x81<<(x82==x83))==x84);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x89 = INT8_MAX;
	int64_t x90 = -250386LL;
	static volatile int32_t t12 = -4;

	t12 = ((x89<<(x90==x91))==x92);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x94 = -853737;
	int8_t x95 = -8;
	int64_t x96 = INT64_MIN;
	static volatile int32_t t13 = -40727087;

	t13 = ((x93<<(x94==x95))==x96);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x97 = 3U;
	static int32_t x98 = INT32_MIN;
	int16_t x99 = -1;
	int64_t x100 = -18909968716540021LL;
	volatile int32_t t14 = -379594;

	t14 = ((x97<<(x98==x99))==x100);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x101 = 26;
	static uint8_t x102 = 16U;
	uint8_t x103 = 29U;
	volatile int32_t x104 = 1419;
	int32_t t15 = 126979;

	t15 = ((x101<<(x102==x103))==x104);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x105 = 1;
	static int16_t x106 = INT16_MAX;
	int32_t x107 = -1;
	uint64_t x108 = 289164LLU;
	volatile int32_t t16 = -198724;

	t16 = ((x105<<(x106==x107))==x108);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x109 = INT32_MAX;
	uint8_t x111 = UINT8_MAX;

	t17 = ((x109<<(x110==x111))==x112);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x121 = 3U;
	uint64_t x122 = 1453758881982335609LLU;
	uint8_t x123 = 0U;
	volatile uint8_t x124 = 0U;
	volatile int32_t t18 = -11658;

	t18 = ((x121<<(x122==x123))==x124);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x137 = 4U;
	uint16_t x139 = UINT16_MAX;
	static int32_t x140 = INT32_MIN;

	t19 = ((x137<<(x138==x139))==x140);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x141 = UINT8_MAX;
	int32_t x143 = 6274507;

	t20 = ((x141<<(x142==x143))==x144);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x149 = 0U;
	static volatile int16_t x150 = -1;
	int8_t x151 = -1;
	uint16_t x152 = 19842U;
	int32_t t21 = -13885;

	t21 = ((x149<<(x150==x151))==x152);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x173 = 515733U;
	int8_t x174 = INT8_MIN;
	static uint64_t x175 = 7393153342LLU;
	uint32_t x176 = 4U;

	t22 = ((x173<<(x174==x175))==x176);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x177 = 4594U;
	int32_t x178 = INT32_MIN;
	uint8_t x179 = 0U;
	int8_t x180 = INT8_MIN;
	int32_t t23 = 36;

	t23 = ((x177<<(x178==x179))==x180);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x189 = INT32_MAX;
	static int64_t x190 = -1517175801635937980LL;
	static int32_t x191 = INT32_MIN;
	volatile int32_t x192 = -1;
	int32_t t24 = 1266683;

	t24 = ((x189<<(x190==x191))==x192);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x193 = UINT64_MAX;
	volatile int8_t x194 = INT8_MIN;
	int64_t x195 = 8953950073LL;
	int32_t t25 = 933065525;

	t25 = ((x193<<(x194==x195))==x196);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint16_t x201 = UINT16_MAX;
	int16_t x202 = INT16_MIN;
	int64_t x203 = -1LL;
	volatile int32_t x204 = INT32_MAX;

	t26 = ((x201<<(x202==x203))==x204);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x209 = UINT32_MAX;
	int64_t x210 = -1LL;
	int32_t t27 = 31206950;

	t27 = ((x209<<(x210==x211))==x212);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x213 = 2U;
	static uint64_t x214 = 66119LLU;
	volatile int32_t x215 = INT32_MIN;
	int32_t t28 = 18207073;

	t28 = ((x213<<(x214==x215))==x216);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x219 = 554627634460604416LLU;
	static uint8_t x220 = UINT8_MAX;
	int32_t t29 = -145668;

	t29 = ((x217<<(x218==x219))==x220);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x225 = 7;
	int64_t x226 = -2050841153539415559LL;
	int16_t x227 = -4;
	uint16_t x228 = 418U;

	t30 = ((x225<<(x226==x227))==x228);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x233 = 47;
	volatile int16_t x234 = 125;
	int32_t x235 = -1;
	volatile int8_t x236 = INT8_MIN;
	volatile int32_t t31 = -818146443;

	t31 = ((x233<<(x234==x235))==x236);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x238 = INT16_MIN;
	int32_t x239 = 239230;
	int16_t x240 = INT16_MIN;

	t32 = ((x237<<(x238==x239))==x240);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x242 = 30U;
	uint8_t x244 = 42U;
	int32_t t33 = 1438272;

	t33 = ((x241<<(x242==x243))==x244);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x253 = UINT64_MAX;
	int16_t x254 = INT16_MIN;
	int8_t x255 = -4;
	static uint32_t x256 = UINT32_MAX;

	t34 = ((x253<<(x254==x255))==x256);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x259 = INT32_MAX;
	int32_t x260 = -3;
	int32_t t35 = -40066;

	t35 = ((x257<<(x258==x259))==x260);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x261 = INT64_MAX;
	static volatile int16_t x262 = 12;
	int64_t x263 = -129176695LL;
	int64_t x264 = INT64_MIN;
	volatile int32_t t36 = 199;

	t36 = ((x261<<(x262==x263))==x264);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x273 = 3U;
	static uint8_t x274 = UINT8_MAX;
	int8_t x275 = -1;
	static volatile uint16_t x276 = UINT16_MAX;

	t37 = ((x273<<(x274==x275))==x276);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x277 = 1U;
	volatile int32_t x278 = INT32_MAX;
	static int64_t x280 = 84208402750LL;
	static volatile int32_t t38 = -4171;

	t38 = ((x277<<(x278==x279))==x280);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x281 = 380500U;
	static volatile int64_t x282 = 90LL;
	int16_t x283 = 542;
	int64_t x284 = -1LL;
	volatile int32_t t39 = 581535;

	t39 = ((x281<<(x282==x283))==x284);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x285 = UINT8_MAX;
	int16_t x286 = -1;
	int32_t x287 = -1;
	uint64_t x288 = 8634LLU;
	static int32_t t40 = -62609;

	t40 = ((x285<<(x286==x287))==x288);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x301 = 6U;
	int32_t x302 = -1;
	int64_t x303 = 1355194732893959719LL;
	volatile uint64_t x304 = 2270670016332049LLU;
	static volatile int32_t t41 = -138;

	t41 = ((x301<<(x302==x303))==x304);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x306 = INT32_MIN;
	int8_t x307 = -1;
	static int8_t x308 = INT8_MAX;
	volatile int32_t t42 = -3892146;

	t42 = ((x305<<(x306==x307))==x308);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x309 = 17;
	int64_t x310 = -1LL;
	uint8_t x311 = 8U;
	volatile int16_t x312 = -1;
	volatile int32_t t43 = 625;

	t43 = ((x309<<(x310==x311))==x312);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x313 = 246U;
	static volatile int8_t x314 = INT8_MIN;
	int64_t x315 = INT64_MIN;
	int8_t x316 = INT8_MIN;

	t44 = ((x313<<(x314==x315))==x316);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t t45 = -9;

	t45 = ((x317<<(x318==x319))==x320);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x325 = 26U;
	int64_t x326 = INT64_MAX;
	int64_t x328 = INT64_MIN;
	static volatile int32_t t46 = 1;

	t46 = ((x325<<(x326==x327))==x328);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x329 = INT64_MAX;
	static uint32_t x330 = 685443513U;
	volatile int8_t x331 = -1;
	int16_t x332 = 736;
	int32_t t47 = 304;

	t47 = ((x329<<(x330==x331))==x332);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x333 = INT64_MAX;
	int16_t x334 = 1;
	volatile int8_t x335 = INT8_MIN;
	volatile int32_t t48 = -16;

	t48 = ((x333<<(x334==x335))==x336);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x337 = UINT64_MAX;
	volatile int64_t x338 = -6524105143LL;
	volatile uint16_t x339 = UINT16_MAX;
	volatile uint32_t x340 = 1U;
	static int32_t t49 = -5475;

	t49 = ((x337<<(x338==x339))==x340);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x349 = 1;
	volatile uint64_t x350 = 4922LLU;
	int8_t x351 = 1;

	t50 = ((x349<<(x350==x351))==x352);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x357 = 1U;
	static volatile int64_t x358 = -1LL;
	volatile int64_t x359 = INT64_MIN;
	volatile int32_t t51 = 2;

	t51 = ((x357<<(x358==x359))==x360);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x369 = INT32_MAX;
	int32_t x370 = -1;
	static volatile int32_t x372 = INT32_MIN;
	int32_t t52 = -12;

	t52 = ((x369<<(x370==x371))==x372);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x377 = 22403798375271LL;
	static int16_t x378 = 10462;
	static volatile uint16_t x379 = UINT16_MAX;
	int64_t x380 = INT64_MAX;
	static int32_t t53 = -8451651;

	t53 = ((x377<<(x378==x379))==x380);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x381 = UINT8_MAX;
	int16_t x382 = -1;
	static uint32_t x384 = 7242158U;
	static int32_t t54 = -2;

	t54 = ((x381<<(x382==x383))==x384);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x389 = 1814157477U;
	volatile uint8_t x390 = 4U;
	int8_t x392 = 6;
	volatile int32_t t55 = -3062090;

	t55 = ((x389<<(x390==x391))==x392);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x405 = 7U;
	uint8_t x406 = UINT8_MAX;
	uint32_t x407 = 32676U;
	int32_t t56 = 6147031;

	t56 = ((x405<<(x406==x407))==x408);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x409 = UINT32_MAX;
	static volatile int8_t x410 = INT8_MIN;
	static volatile int16_t x411 = -9490;
	static int32_t t57 = -2;

	t57 = ((x409<<(x410==x411))==x412);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x421 = 0U;
	int64_t x423 = INT64_MIN;
	int16_t x424 = INT16_MIN;
	volatile int32_t t58 = -16;

	t58 = ((x421<<(x422==x423))==x424);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x433 = 2U;
	static uint16_t x434 = 18U;
	int16_t x435 = INT16_MAX;
	static volatile int32_t t59 = -1;

	t59 = ((x433<<(x434==x435))==x436);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x442 = INT32_MIN;
	uint64_t x443 = 7700251808LLU;
	int32_t t60 = 221442;

	t60 = ((x441<<(x442==x443))==x444);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x455 = INT64_MIN;
	int32_t x456 = -1;
	volatile int32_t t61 = 381405019;

	t61 = ((x453<<(x454==x455))==x456);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x457 = 242254;
	static int8_t x459 = -1;

	t62 = ((x457<<(x458==x459))==x460);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x465 = 121U;
	volatile int8_t x467 = 0;
	uint64_t x468 = 82210LLU;
	volatile int32_t t63 = 14212;

	t63 = ((x465<<(x466==x467))==x468);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x469 = UINT8_MAX;
	int32_t x470 = INT32_MIN;
	int64_t x472 = -2175463LL;
	int32_t t64 = -9177768;

	t64 = ((x469<<(x470==x471))==x472);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x473 = 5014U;
	static uint16_t x474 = 1553U;
	int64_t x475 = INT64_MAX;
	int32_t x476 = -1;

	t65 = ((x473<<(x474==x475))==x476);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x481 = 523841LLU;
	int8_t x482 = -1;
	uint8_t x484 = 31U;

	t66 = ((x481<<(x482==x483))==x484);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x485 = UINT32_MAX;
	volatile int16_t x486 = INT16_MAX;
	int8_t x487 = INT8_MIN;
	int8_t x488 = INT8_MIN;
	volatile int32_t t67 = -2789;

	t67 = ((x485<<(x486==x487))==x488);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x493 = 1LLU;
	int64_t x494 = INT64_MAX;
	static int64_t x495 = INT64_MIN;
	int16_t x496 = INT16_MIN;
	volatile int32_t t68 = -15685;

	t68 = ((x493<<(x494==x495))==x496);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x498 = -1;
	uint16_t x499 = 63U;

	t69 = ((x497<<(x498==x499))==x500);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x501 = 0U;
	int8_t x502 = INT8_MIN;
	uint64_t x503 = UINT64_MAX;
	int64_t x504 = INT64_MAX;
	volatile int32_t t70 = 944217;

	t70 = ((x501<<(x502==x503))==x504);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x505 = 2U;
	uint32_t x506 = 0U;
	static uint8_t x507 = 3U;
	int32_t t71 = 0;

	t71 = ((x505<<(x506==x507))==x508);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint16_t x513 = 120U;
	static int8_t x514 = INT8_MIN;
	static int8_t x515 = -1;
	volatile int32_t x516 = 30158344;
	int32_t t72 = 520636;

	t72 = ((x513<<(x514==x515))==x516);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x517 = 0U;
	static int16_t x519 = 6253;
	uint64_t x520 = UINT64_MAX;
	volatile int32_t t73 = -5;

	t73 = ((x517<<(x518==x519))==x520);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x521 = 37274286U;
	int8_t x522 = -1;
	int64_t x523 = INT64_MIN;
	int16_t x524 = -1;

	t74 = ((x521<<(x522==x523))==x524);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x533 = UINT32_MAX;
	uint8_t x535 = 33U;
	static uint64_t x536 = 29667259211LLU;
	volatile int32_t t75 = 9;

	t75 = ((x533<<(x534==x535))==x536);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x549 = 1U;
	static int16_t x551 = INT16_MIN;
	volatile int32_t t76 = 1204;

	t76 = ((x549<<(x550==x551))==x552);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x561 = 32875282U;
	int32_t x562 = INT32_MIN;
	int32_t x563 = -1;
	uint64_t x564 = UINT64_MAX;
	int32_t t77 = 0;

	t77 = ((x561<<(x562==x563))==x564);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x570 = INT64_MIN;
	int64_t x571 = INT64_MAX;
	int16_t x572 = INT16_MIN;
	volatile int32_t t78 = 48423;

	t78 = ((x569<<(x570==x571))==x572);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x573 = 1565;
	int32_t x574 = INT32_MIN;
	volatile int16_t x576 = INT16_MIN;
	volatile int32_t t79 = 853873317;

	t79 = ((x573<<(x574==x575))==x576);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x577 = 0LLU;
	volatile int8_t x579 = -1;
	uint8_t x580 = 105U;
	static volatile int32_t t80 = 5456915;

	t80 = ((x577<<(x578==x579))==x580);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x585 = 2;
	uint64_t x586 = 60018850075634017LLU;
	int64_t x587 = 1174176410956LL;
	volatile int32_t x588 = INT32_MIN;
	volatile int32_t t81 = -1;

	t81 = ((x585<<(x586==x587))==x588);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x589 = 15111548721262LL;
	uint64_t x590 = UINT64_MAX;
	static volatile int64_t x592 = -1225LL;
	volatile int32_t t82 = 211;

	t82 = ((x589<<(x590==x591))==x592);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint64_t x597 = UINT64_MAX;
	volatile int32_t x598 = INT32_MIN;
	volatile int32_t x599 = 0;
	int64_t x600 = INT64_MIN;
	int32_t t83 = -7137;

	t83 = ((x597<<(x598==x599))==x600);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x601 = 28808015264972856LLU;
	uint32_t x603 = 204U;
	uint16_t x604 = 52U;
	volatile int32_t t84 = -126;

	t84 = ((x601<<(x602==x603))==x604);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x609 = 165U;
	volatile int16_t x611 = -1;
	int32_t x612 = -1;
	static int32_t t85 = -15;

	t85 = ((x609<<(x610==x611))==x612);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int32_t x613 = INT32_MAX;
	int8_t x615 = 0;
	static uint16_t x616 = 90U;
	volatile int32_t t86 = -173;

	t86 = ((x613<<(x614==x615))==x616);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint16_t x618 = UINT16_MAX;
	uint8_t x620 = UINT8_MAX;
	int32_t t87 = 10;

	t87 = ((x617<<(x618==x619))==x620);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x625 = 16;
	volatile uint64_t x626 = UINT64_MAX;
	int8_t x627 = -1;
	static int32_t t88 = -3640973;

	t88 = ((x625<<(x626==x627))==x628);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x629 = INT8_MAX;
	uint16_t x630 = 0U;
	static volatile int32_t t89 = -3192538;

	t89 = ((x629<<(x630==x631))==x632);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x641 = 18254LLU;
	int16_t x642 = INT16_MIN;
	uint32_t x644 = 30U;
	int32_t t90 = 341;

	t90 = ((x641<<(x642==x643))==x644);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x645 = 1224317011549LL;
	int32_t x646 = 4181;
	static volatile int16_t x647 = -1;
	static volatile uint64_t x648 = UINT64_MAX;
	int32_t t91 = 6;

	t91 = ((x645<<(x646==x647))==x648);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x649 = 85405549505824LL;
	volatile int16_t x650 = INT16_MAX;
	int16_t x651 = INT16_MIN;
	uint64_t x652 = 3564660633490687493LLU;
	static volatile int32_t t92 = -2153287;

	t92 = ((x649<<(x650==x651))==x652);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x653 = 88U;
	static int16_t x654 = INT16_MAX;
	uint8_t x655 = UINT8_MAX;
	int16_t x656 = -592;
	int32_t t93 = 198314;

	t93 = ((x653<<(x654==x655))==x656);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x657 = 1;
	static uint32_t x658 = 134330U;
	int32_t x659 = INT32_MAX;
	volatile int64_t x660 = INT64_MIN;

	t94 = ((x657<<(x658==x659))==x660);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x665 = 1U;
	int8_t x666 = -56;

	t95 = ((x665<<(x666==x667))==x668);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x683 = INT8_MIN;
	int64_t x684 = 2189953117095065LL;
	volatile int32_t t96 = -510;

	t96 = ((x681<<(x682==x683))==x684);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x685 = 7U;
	int16_t x686 = -166;
	uint64_t x687 = 255080868441646LLU;
	int8_t x688 = -3;
	static volatile int32_t t97 = 27326;

	t97 = ((x685<<(x686==x687))==x688);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x689 = UINT8_MAX;
	uint32_t x690 = 1227853588U;

	t98 = ((x689<<(x690==x691))==x692);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x697 = 11285927052376643LLU;
	uint64_t x698 = 463LLU;
	volatile int16_t x699 = -1;
	uint8_t x700 = 13U;
	int32_t t99 = 3;

	t99 = ((x697<<(x698==x699))==x700);

	if (t99 != 0) { NG(); } else { ; }
	
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

