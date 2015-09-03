#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x4 = 127U;
volatile uint8_t x5 = UINT8_MAX;
int32_t x9 = 30;
volatile int32_t t2 = -1;
volatile int16_t x17 = -1;
static int32_t t4 = -10112;
static uint32_t x23 = 27572U;
int16_t x24 = INT16_MIN;
volatile uint16_t x28 = 2U;
volatile int32_t t7 = -51206809;
volatile int16_t x41 = INT16_MIN;
uint16_t x44 = 4477U;
int32_t t8 = -6673;
int64_t x56 = -17644357880LL;
int32_t t10 = -800143;
volatile uint16_t x70 = 24258U;
volatile int32_t t13 = -39806080;
volatile int16_t x89 = INT16_MAX;
static int32_t x94 = INT32_MIN;
int32_t t16 = 92;
int8_t x100 = -2;
volatile int32_t t17 = -80;
int8_t x107 = INT8_MIN;
int32_t t19 = 0;
uint64_t x111 = 115052LLU;
int64_t x112 = INT64_MIN;
int64_t x113 = -199290LL;
volatile int8_t x131 = INT8_MIN;
static int16_t x132 = -1;
int32_t t22 = -1;
int8_t x133 = INT8_MAX;
uint8_t x147 = 0U;
int8_t x160 = 2;
volatile int32_t x163 = 961075;
volatile int32_t t27 = -7795;
int8_t x182 = INT8_MIN;
int8_t x184 = INT8_MIN;
int8_t x189 = -21;
int16_t x190 = -1;
static int64_t x196 = -160653LL;
volatile int32_t t34 = -4000795;
volatile int32_t x248 = -1;
volatile int32_t t37 = 2;
volatile int16_t x259 = -49;
volatile int32_t t40 = 1;
volatile int64_t x261 = -1LL;
volatile int16_t x263 = INT16_MAX;
static uint16_t x287 = 535U;
uint16_t x290 = 2U;
volatile int64_t x292 = 232LL;
static int32_t t45 = -2;
static volatile int8_t x301 = -1;
int32_t x305 = INT32_MIN;
int16_t x307 = -1;
uint8_t x308 = UINT8_MAX;
int64_t x314 = -1LL;
volatile int32_t t51 = -22742;
volatile int32_t t53 = -200800947;
int64_t x369 = -1LL;
int16_t x375 = INT16_MIN;
volatile int32_t t57 = -310315;
int32_t t58 = 30;
volatile int32_t x384 = INT32_MIN;
uint16_t x393 = UINT16_MAX;
static uint32_t x396 = 257291U;
uint8_t x398 = 1U;
uint64_t x415 = 177370509LLU;
int32_t t66 = 202623092;
volatile int32_t x422 = INT32_MAX;
static volatile int32_t x436 = INT32_MIN;
volatile int32_t t71 = 7996327;
uint64_t x452 = UINT64_MAX;
volatile uint32_t x454 = UINT32_MAX;
volatile int64_t x460 = 178LL;
uint16_t x462 = 7U;
int64_t x463 = -1LL;
uint16_t x464 = UINT16_MAX;
static volatile uint64_t x468 = 228361223LLU;
static int16_t x474 = -655;
uint32_t x475 = 47U;
volatile int32_t x480 = INT32_MAX;
int32_t t82 = 239775;
volatile int32_t x497 = -1;
int8_t x499 = INT8_MAX;
volatile uint16_t x502 = 19277U;
uint16_t x503 = 2830U;
volatile int8_t x515 = 0;
volatile int32_t t87 = -6839136;
static int8_t x523 = INT8_MIN;
uint32_t x539 = 6078876U;
int16_t x540 = -1;
volatile int32_t t91 = 62;
volatile int32_t t92 = -3523943;
uint32_t x545 = 491U;
uint64_t x546 = 680911638807176LLU;
int64_t x548 = -1LL;
uint64_t x552 = UINT64_MAX;
static volatile int32_t x568 = -1278120;
int8_t x575 = 54;


void f0(void) {
	volatile int64_t x1 = -1LL;
	int8_t x2 = -51;
	uint16_t x3 = 9502U;
	volatile int32_t t0 = 54417610;

	t0 = ((x1-x2)<=(x3*x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x6 = 264771270U;
	static int32_t x7 = -3621;
	static volatile uint64_t x8 = UINT64_MAX;
	int32_t t1 = -644741308;

	t1 = ((x5-x6)<=(x7*x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x10 = INT32_MAX;
	int16_t x11 = -1;
	volatile int64_t x12 = 69571LL;

	t2 = ((x9-x10)<=(x11*x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	int16_t x14 = 0;
	uint16_t x15 = UINT16_MAX;
	volatile int8_t x16 = -1;
	int32_t t3 = -1988392;

	t3 = ((x13-x14)<=(x15*x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int32_t x18 = -1;
	uint64_t x19 = UINT64_MAX;
	int16_t x20 = -1;

	t4 = ((x17-x18)<=(x19*x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = UINT8_MAX;
	int64_t x22 = -1LL;
	static volatile int32_t t5 = 31;

	t5 = ((x21-x22)<=(x23*x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = INT16_MIN;
	uint8_t x26 = 3U;
	uint16_t x27 = 3U;
	int32_t t6 = 1222020;

	t6 = ((x25-x26)<=(x27*x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x33 = INT64_MIN;
	volatile int16_t x34 = INT16_MIN;
	int16_t x35 = INT16_MAX;
	int64_t x36 = 21547LL;

	t7 = ((x33-x34)<=(x35*x36));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x42 = UINT32_MAX;
	volatile int16_t x43 = -28;

	t8 = ((x41-x42)<=(x43*x44));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x49 = 236544796;
	uint16_t x50 = 2875U;
	static volatile uint32_t x51 = UINT32_MAX;
	uint32_t x52 = 7899672U;
	int32_t t9 = 94;

	t9 = ((x49-x50)<=(x51*x52));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x53 = 1040408906LLU;
	uint32_t x54 = 21559U;
	volatile uint16_t x55 = UINT16_MAX;

	t10 = ((x53-x54)<=(x55*x56));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x57 = -1;
	volatile int8_t x58 = -1;
	uint16_t x59 = 9273U;
	int8_t x60 = INT8_MIN;
	int32_t t11 = 456;

	t11 = ((x57-x58)<=(x59*x60));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x61 = 36021489454296LLU;
	volatile int32_t x62 = 3;
	uint32_t x63 = 110659U;
	int16_t x64 = 15541;
	int32_t t12 = 261860;

	t12 = ((x61-x62)<=(x63*x64));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x69 = 166066U;
	int8_t x71 = INT8_MIN;
	static int8_t x72 = -15;

	t13 = ((x69-x70)<=(x71*x72));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x73 = -1;
	int32_t x74 = INT32_MIN;
	static uint16_t x75 = 5U;
	int8_t x76 = INT8_MAX;
	volatile int32_t t14 = 2;

	t14 = ((x73-x74)<=(x75*x76));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x90 = 17U;
	int8_t x91 = -1;
	int16_t x92 = 6;
	volatile int32_t t15 = -3381;

	t15 = ((x89-x90)<=(x91*x92));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x93 = -29872LL;
	int64_t x95 = -32LL;
	int16_t x96 = INT16_MAX;

	t16 = ((x93-x94)<=(x95*x96));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x97 = UINT8_MAX;
	int32_t x98 = -60973247;
	int16_t x99 = -379;

	t17 = ((x97-x98)<=(x99*x100));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x101 = UINT16_MAX;
	int8_t x102 = 1;
	volatile uint16_t x103 = UINT16_MAX;
	int8_t x104 = 1;
	int32_t t18 = -461833;

	t18 = ((x101-x102)<=(x103*x104));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x105 = INT32_MAX;
	static uint32_t x106 = UINT32_MAX;
	static int16_t x108 = 99;

	t19 = ((x105-x106)<=(x107*x108));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x109 = 43;
	volatile int32_t x110 = 11297532;
	volatile int32_t t20 = -35;

	t20 = ((x109-x110)<=(x111*x112));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x114 = -1;
	static int16_t x115 = INT16_MIN;
	uint32_t x116 = 98U;
	int32_t t21 = 21641741;

	t21 = ((x113-x114)<=(x115*x116));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x129 = 1;
	static int16_t x130 = 0;

	t22 = ((x129-x130)<=(x131*x132));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x134 = INT8_MAX;
	volatile int16_t x135 = -55;
	volatile int32_t x136 = -369104;
	static volatile int32_t t23 = 6638;

	t23 = ((x133-x134)<=(x135*x136));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x141 = 36497941470303LLU;
	static int16_t x142 = INT16_MAX;
	int64_t x143 = -2LL;
	int32_t x144 = INT32_MIN;
	int32_t t24 = 289;

	t24 = ((x141-x142)<=(x143*x144));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x145 = -1447838LL;
	int8_t x146 = INT8_MAX;
	volatile uint64_t x148 = UINT64_MAX;
	int32_t t25 = 26159819;

	t25 = ((x145-x146)<=(x147*x148));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x157 = -56;
	int64_t x158 = -226365446729LL;
	volatile uint8_t x159 = 57U;
	static int32_t t26 = -115310;

	t26 = ((x157-x158)<=(x159*x160));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x161 = 0;
	static int32_t x162 = INT32_MAX;
	static int16_t x164 = -1;

	t27 = ((x161-x162)<=(x163*x164));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x165 = UINT8_MAX;
	int8_t x166 = INT8_MAX;
	static int16_t x167 = INT16_MIN;
	uint32_t x168 = 22U;
	static int32_t t28 = 25840;

	t28 = ((x165-x166)<=(x167*x168));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x169 = 4U;
	int16_t x170 = -1;
	uint32_t x171 = 241600580U;
	static volatile uint8_t x172 = 12U;
	int32_t t29 = -137804;

	t29 = ((x169-x170)<=(x171*x172));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x173 = INT32_MIN;
	uint64_t x174 = 910261749531LLU;
	int64_t x175 = -1LL;
	int32_t x176 = INT32_MIN;
	volatile int32_t t30 = 149898;

	t30 = ((x173-x174)<=(x175*x176));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x181 = 23397421254250LL;
	int64_t x183 = 202202407LL;
	int32_t t31 = -61;

	t31 = ((x181-x182)<=(x183*x184));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x191 = INT8_MIN;
	int16_t x192 = 1;
	volatile int32_t t32 = -129;

	t32 = ((x189-x190)<=(x191*x192));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x193 = INT8_MIN;
	volatile uint8_t x194 = 0U;
	volatile int32_t x195 = 112;
	static volatile int32_t t33 = -68190420;

	t33 = ((x193-x194)<=(x195*x196));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x197 = 173798694025832295LLU;
	int16_t x198 = -4047;
	int8_t x199 = 3;
	int32_t x200 = -451;

	t34 = ((x197-x198)<=(x199*x200));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x217 = INT32_MIN;
	volatile int16_t x218 = -463;
	int16_t x219 = INT16_MIN;
	uint8_t x220 = 2U;
	static int32_t t35 = -413739;

	t35 = ((x217-x218)<=(x219*x220));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x229 = 11U;
	uint8_t x230 = UINT8_MAX;
	int8_t x231 = -13;
	int8_t x232 = 60;
	int32_t t36 = 146935;

	t36 = ((x229-x230)<=(x231*x232));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x245 = INT64_MAX;
	volatile int8_t x246 = 1;
	static int32_t x247 = -360328;

	t37 = ((x245-x246)<=(x247*x248));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x249 = UINT32_MAX;
	int32_t x250 = 64511854;
	uint8_t x251 = UINT8_MAX;
	int64_t x252 = -1LL;
	volatile int32_t t38 = -1;

	t38 = ((x249-x250)<=(x251*x252));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x253 = 123352254803LLU;
	static volatile uint64_t x254 = 704971769419779LLU;
	int8_t x255 = -1;
	uint8_t x256 = 1U;
	volatile int32_t t39 = -30410;

	t39 = ((x253-x254)<=(x255*x256));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x257 = 27LLU;
	uint64_t x258 = 104328370LLU;
	volatile uint64_t x260 = UINT64_MAX;

	t40 = ((x257-x258)<=(x259*x260));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x262 = INT64_MIN;
	int8_t x264 = -1;
	volatile int32_t t41 = -4419;

	t41 = ((x261-x262)<=(x263*x264));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x269 = 10063U;
	static int32_t x270 = -187563379;
	volatile int8_t x271 = INT8_MIN;
	uint64_t x272 = UINT64_MAX;
	int32_t t42 = 35083666;

	t42 = ((x269-x270)<=(x271*x272));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x281 = 274;
	int8_t x282 = INT8_MIN;
	int8_t x283 = -1;
	int64_t x284 = -1LL;
	volatile int32_t t43 = -631;

	t43 = ((x281-x282)<=(x283*x284));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x285 = 50847LLU;
	int16_t x286 = 136;
	int16_t x288 = -1;
	volatile int32_t t44 = -436816485;

	t44 = ((x285-x286)<=(x287*x288));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x289 = 995725647576179LLU;
	uint64_t x291 = 12954948580878479LLU;

	t45 = ((x289-x290)<=(x291*x292));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x297 = -1;
	int32_t x298 = INT32_MIN;
	int64_t x299 = -1LL;
	static volatile int16_t x300 = -1;
	volatile int32_t t46 = -258293;

	t46 = ((x297-x298)<=(x299*x300));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x302 = 43U;
	int16_t x303 = INT16_MIN;
	uint32_t x304 = 30893227U;
	static volatile int32_t t47 = 1;

	t47 = ((x301-x302)<=(x303*x304));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x306 = 8U;
	int32_t t48 = -5795012;

	t48 = ((x305-x306)<=(x307*x308));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x309 = 1068620211U;
	int32_t x310 = INT32_MIN;
	uint64_t x311 = 17269741807LLU;
	int64_t x312 = 1914781716455311LL;
	volatile int32_t t49 = 0;

	t49 = ((x309-x310)<=(x311*x312));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x313 = INT16_MIN;
	int64_t x315 = -1LL;
	int32_t x316 = INT32_MAX;
	volatile int32_t t50 = -1719;

	t50 = ((x313-x314)<=(x315*x316));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x317 = -1;
	static uint64_t x318 = 10649273LLU;
	volatile int16_t x319 = INT16_MIN;
	int16_t x320 = 0;

	t51 = ((x317-x318)<=(x319*x320));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x321 = 0;
	uint64_t x322 = UINT64_MAX;
	uint8_t x323 = UINT8_MAX;
	volatile int16_t x324 = -1;
	volatile int32_t t52 = 1966;

	t52 = ((x321-x322)<=(x323*x324));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x325 = -1LL;
	static volatile int32_t x326 = INT32_MIN;
	static volatile int32_t x327 = 1475;
	uint32_t x328 = UINT32_MAX;

	t53 = ((x325-x326)<=(x327*x328));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x353 = INT16_MIN;
	static int32_t x354 = INT32_MIN;
	int16_t x355 = -14467;
	int8_t x356 = INT8_MIN;
	int32_t t54 = -76120998;

	t54 = ((x353-x354)<=(x355*x356));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x365 = 2U;
	static int8_t x366 = -1;
	int32_t x367 = -23676649;
	int32_t x368 = -1;
	static volatile int32_t t55 = -1481;

	t55 = ((x365-x366)<=(x367*x368));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x370 = INT32_MIN;
	volatile uint32_t x371 = 1U;
	static int8_t x372 = -1;
	volatile int32_t t56 = -212489;

	t56 = ((x369-x370)<=(x371*x372));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x373 = UINT16_MAX;
	int8_t x374 = 7;
	uint32_t x376 = 223U;

	t57 = ((x373-x374)<=(x375*x376));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x377 = -185710540;
	volatile int8_t x378 = -5;
	uint32_t x379 = 73993923U;
	int64_t x380 = -1LL;

	t58 = ((x377-x378)<=(x379*x380));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x381 = -1;
	static int8_t x382 = INT8_MIN;
	uint64_t x383 = 4LLU;
	volatile int32_t t59 = -1;

	t59 = ((x381-x382)<=(x383*x384));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x385 = INT16_MAX;
	uint32_t x386 = 20329753U;
	static volatile int8_t x387 = INT8_MIN;
	uint8_t x388 = 10U;
	volatile int32_t t60 = -210;

	t60 = ((x385-x386)<=(x387*x388));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x389 = UINT8_MAX;
	uint8_t x390 = 26U;
	uint64_t x391 = UINT64_MAX;
	static int8_t x392 = INT8_MAX;
	volatile int32_t t61 = -57419;

	t61 = ((x389-x390)<=(x391*x392));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x394 = 2U;
	int16_t x395 = INT16_MAX;
	volatile int32_t t62 = 70;

	t62 = ((x393-x394)<=(x395*x396));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x397 = 2043U;
	static volatile int8_t x399 = -1;
	int32_t x400 = -1;
	volatile int32_t t63 = -3956554;

	t63 = ((x397-x398)<=(x399*x400));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x401 = -1;
	int16_t x402 = 2;
	int32_t x403 = -4;
	uint64_t x404 = 18695LLU;
	volatile int32_t t64 = 7089137;

	t64 = ((x401-x402)<=(x403*x404));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x405 = 34;
	static uint64_t x406 = 701929LLU;
	static volatile int8_t x407 = INT8_MAX;
	uint8_t x408 = 14U;
	int32_t t65 = 117423497;

	t65 = ((x405-x406)<=(x407*x408));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x413 = INT32_MIN;
	int16_t x414 = -12587;
	static uint64_t x416 = 352008LLU;

	t66 = ((x413-x414)<=(x415*x416));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x417 = 125U;
	volatile int16_t x418 = INT16_MAX;
	int8_t x419 = 36;
	int8_t x420 = INT8_MIN;
	int32_t t67 = 4887354;

	t67 = ((x417-x418)<=(x419*x420));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x421 = INT32_MAX;
	static uint64_t x423 = 195059530238511426LLU;
	int16_t x424 = -9083;
	int32_t t68 = 94144675;

	t68 = ((x421-x422)<=(x423*x424));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x429 = UINT16_MAX;
	uint32_t x430 = UINT32_MAX;
	int8_t x431 = 5;
	static uint64_t x432 = UINT64_MAX;
	int32_t t69 = 189744;

	t69 = ((x429-x430)<=(x431*x432));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x433 = 895U;
	int16_t x434 = -1;
	uint64_t x435 = 653319830244LLU;
	int32_t t70 = -22924957;

	t70 = ((x433-x434)<=(x435*x436));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x441 = 497559517953792251LL;
	static uint16_t x442 = UINT16_MAX;
	int16_t x443 = 2178;
	static int8_t x444 = -1;

	t71 = ((x441-x442)<=(x443*x444));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x445 = INT8_MIN;
	volatile uint32_t x446 = UINT32_MAX;
	volatile uint16_t x447 = 0U;
	int32_t x448 = 497987;
	volatile int32_t t72 = 100563;

	t72 = ((x445-x446)<=(x447*x448));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x449 = INT8_MAX;
	int8_t x450 = INT8_MAX;
	uint64_t x451 = UINT64_MAX;
	static volatile int32_t t73 = 594819;

	t73 = ((x449-x450)<=(x451*x452));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x453 = -1;
	int8_t x455 = -2;
	volatile int16_t x456 = INT16_MIN;
	volatile int32_t t74 = -236;

	t74 = ((x453-x454)<=(x455*x456));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x457 = 1;
	static uint32_t x458 = 635982966U;
	uint16_t x459 = 4017U;
	int32_t t75 = 1679;

	t75 = ((x457-x458)<=(x459*x460));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x461 = UINT64_MAX;
	static volatile int32_t t76 = 556;

	t76 = ((x461-x462)<=(x463*x464));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x465 = INT32_MIN;
	static int32_t x466 = -1618511;
	uint8_t x467 = UINT8_MAX;
	volatile int32_t t77 = -19784;

	t77 = ((x465-x466)<=(x467*x468));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x473 = INT32_MIN;
	uint16_t x476 = 45U;
	volatile int32_t t78 = 0;

	t78 = ((x473-x474)<=(x475*x476));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x477 = INT64_MAX;
	static volatile uint16_t x478 = 51U;
	static int8_t x479 = 1;
	static int32_t t79 = -13007;

	t79 = ((x477-x478)<=(x479*x480));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x481 = INT64_MIN;
	int64_t x482 = -84127326804581LL;
	int16_t x483 = INT16_MAX;
	volatile uint8_t x484 = 12U;
	volatile int32_t t80 = -51;

	t80 = ((x481-x482)<=(x483*x484));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x485 = UINT16_MAX;
	int16_t x486 = INT16_MIN;
	int16_t x487 = -1;
	int8_t x488 = INT8_MIN;
	static volatile int32_t t81 = -97;

	t81 = ((x485-x486)<=(x487*x488));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x489 = -1;
	uint8_t x490 = 34U;
	static uint64_t x491 = UINT64_MAX;
	volatile int32_t x492 = 121915;

	t82 = ((x489-x490)<=(x491*x492));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x498 = INT32_MIN;
	static int64_t x500 = 6993348LL;
	volatile int32_t t83 = 29197;

	t83 = ((x497-x498)<=(x499*x500));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x501 = -98;
	volatile int64_t x504 = 152606542694LL;
	int32_t t84 = 1;

	t84 = ((x501-x502)<=(x503*x504));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x505 = -644604LL;
	int32_t x506 = -1;
	int32_t x507 = INT32_MAX;
	uint64_t x508 = 154570617243752791LLU;
	volatile int32_t t85 = 739;

	t85 = ((x505-x506)<=(x507*x508));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x509 = 583858537U;
	static int16_t x510 = -2;
	static uint8_t x511 = 14U;
	uint32_t x512 = 0U;
	int32_t t86 = 416948335;

	t86 = ((x509-x510)<=(x511*x512));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x513 = INT8_MIN;
	int8_t x514 = 5;
	int32_t x516 = INT32_MAX;

	t87 = ((x513-x514)<=(x515*x516));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x517 = -674103106LL;
	static int16_t x518 = -1;
	int8_t x519 = -1;
	int64_t x520 = 4882107664LL;
	volatile int32_t t88 = 570367;

	t88 = ((x517-x518)<=(x519*x520));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x521 = UINT16_MAX;
	int8_t x522 = 0;
	static volatile int32_t x524 = -1;
	volatile int32_t t89 = -948;

	t89 = ((x521-x522)<=(x523*x524));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x525 = 2U;
	int64_t x526 = -1LL;
	int16_t x527 = -1;
	volatile uint16_t x528 = UINT16_MAX;
	int32_t t90 = 5;

	t90 = ((x525-x526)<=(x527*x528));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x537 = 18561428384002LLU;
	int64_t x538 = 505156LL;

	t91 = ((x537-x538)<=(x539*x540));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x541 = INT16_MAX;
	int64_t x542 = -1LL;
	static uint64_t x543 = 2224LLU;
	int8_t x544 = INT8_MIN;

	t92 = ((x541-x542)<=(x543*x544));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x547 = INT32_MIN;
	int32_t t93 = -523145254;

	t93 = ((x545-x546)<=(x547*x548));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x549 = INT8_MIN;
	static uint8_t x550 = UINT8_MAX;
	static int16_t x551 = INT16_MIN;
	int32_t t94 = 276;

	t94 = ((x549-x550)<=(x551*x552));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x565 = -103;
	int64_t x566 = INT64_MIN;
	volatile uint32_t x567 = 16474734U;
	int32_t t95 = -25168;

	t95 = ((x565-x566)<=(x567*x568));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x573 = 204268947551612LL;
	volatile int32_t x574 = INT32_MIN;
	uint8_t x576 = 0U;
	volatile int32_t t96 = -1046350363;

	t96 = ((x573-x574)<=(x575*x576));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x585 = INT16_MIN;
	uint16_t x586 = 36U;
	uint16_t x587 = UINT16_MAX;
	int8_t x588 = -1;
	int32_t t97 = -58265;

	t97 = ((x585-x586)<=(x587*x588));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x589 = UINT8_MAX;
	volatile int16_t x590 = INT16_MIN;
	static volatile uint32_t x591 = 279805U;
	static uint8_t x592 = 0U;
	int32_t t98 = 59294;

	t98 = ((x589-x590)<=(x591*x592));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x597 = 567U;
	static int32_t x598 = INT32_MAX;
	int16_t x599 = INT16_MIN;
	volatile int8_t x600 = -6;
	int32_t t99 = -139049;

	t99 = ((x597-x598)<=(x599*x600));

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

