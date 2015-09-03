#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x36 = -1;
int32_t x46 = INT32_MIN;
int16_t x48 = -1;
static volatile int64_t x74 = INT64_MIN;
volatile int32_t t6 = -257;
volatile uint32_t x86 = 88706U;
int32_t x96 = -52138;
int64_t x110 = -11885183684746932LL;
volatile int16_t x111 = INT16_MIN;
uint64_t x112 = 426662365223480LLU;
volatile int32_t t10 = 27430;
uint16_t x116 = 1U;
volatile int32_t t11 = 2;
int8_t x125 = -1;
int64_t x130 = INT64_MAX;
static uint64_t x158 = UINT64_MAX;
static volatile uint64_t x159 = 28336125142162525LLU;
int32_t x198 = INT32_MIN;
volatile int32_t t19 = 303804;
uint32_t x201 = UINT32_MAX;
volatile int32_t t20 = 358714452;
int32_t x212 = INT32_MIN;
volatile int32_t t21 = -1;
static int32_t x213 = INT32_MIN;
static volatile uint32_t x214 = UINT32_MAX;
int16_t x233 = INT16_MIN;
int32_t x234 = -1;
volatile uint32_t x245 = 248U;
volatile int8_t x248 = INT8_MIN;
static volatile int32_t t25 = 173;
static uint8_t x253 = 0U;
volatile int32_t t30 = 160630;
static uint16_t x298 = 3841U;
int32_t t31 = -13174229;
int16_t x320 = -62;
volatile int64_t x322 = 1830886134724LL;
int64_t x333 = -1LL;
int16_t x337 = INT16_MIN;
int16_t x339 = 14;
static volatile int32_t t36 = 600220;
uint8_t x351 = 50U;
int8_t x352 = 58;
volatile int32_t t37 = -1;
uint64_t x357 = UINT64_MAX;
int16_t x358 = INT16_MIN;
static int8_t x359 = INT8_MIN;
int16_t x393 = -1;
int64_t x394 = INT64_MAX;
uint16_t x398 = 30U;
int64_t x415 = INT64_MAX;
static int32_t t45 = 1;
int16_t x417 = INT16_MIN;
uint8_t x421 = 18U;
static uint64_t x427 = 6252966453673LLU;
int64_t x448 = INT64_MAX;
int64_t x454 = INT64_MIN;
volatile int8_t x456 = INT8_MIN;
int32_t t52 = 177;
uint32_t x472 = 354484U;
static int32_t x478 = INT32_MIN;
volatile uint32_t x480 = UINT32_MAX;
uint64_t x482 = UINT64_MAX;
volatile uint64_t x483 = UINT64_MAX;
int64_t x486 = 1304LL;
int16_t x491 = -1;
static int16_t x537 = -4;
int32_t x555 = -1;
int16_t x584 = INT16_MAX;
static volatile int16_t x587 = 151;
int32_t t70 = -36112;
int32_t t71 = 0;
static int8_t x597 = 0;
volatile int16_t x609 = INT16_MIN;
static volatile int32_t x612 = INT32_MIN;
volatile int32_t t74 = -273179551;
volatile uint32_t x613 = 136U;
volatile int16_t x620 = INT16_MIN;
int16_t x627 = INT16_MAX;
uint16_t x660 = 15825U;
static int64_t x673 = 3086215817329170LL;
static volatile int64_t x690 = INT64_MIN;
static int8_t x692 = -1;
uint8_t x698 = 65U;
static volatile int32_t t84 = -48601777;
static uint32_t x710 = UINT32_MAX;
volatile int32_t x713 = -1;
static int16_t x715 = -1053;
int32_t x734 = 1613;
static volatile int8_t x737 = INT8_MAX;
volatile int32_t x742 = 83644;
static uint8_t x743 = 71U;
volatile int8_t x744 = INT8_MAX;
static int8_t x748 = INT8_MIN;
int16_t x752 = -3631;
static int32_t t92 = 2185;
int8_t x757 = -1;
int8_t x765 = INT8_MIN;
int64_t x766 = 270040LL;
volatile int8_t x768 = INT8_MIN;
static int64_t x773 = INT64_MIN;
int64_t x776 = INT64_MIN;
int32_t t96 = 5074779;
int32_t x777 = 392326;
int16_t x783 = INT16_MIN;
static int64_t x784 = -1517765120447346723LL;


void f0(void) {
	int32_t x1 = -18692;
	uint16_t x2 = UINT16_MAX;
	uint16_t x3 = 89U;
	static uint64_t x4 = 3967LLU;
	int32_t t0 = 11436927;

	t0 = ((x1%(x2/x3))<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x25 = INT64_MIN;
	volatile int32_t x26 = INT32_MIN;
	int16_t x27 = 19;
	uint32_t x28 = 121585U;
	volatile int32_t t1 = -785;

	t1 = ((x25%(x26/x27))<x28);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x29 = 32U;
	int16_t x30 = INT16_MIN;
	int16_t x31 = -1;
	int16_t x32 = INT16_MIN;
	int32_t t2 = -1;

	t2 = ((x29%(x30/x31))<x32);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x33 = INT16_MAX;
	uint64_t x34 = UINT64_MAX;
	int32_t x35 = -10;
	volatile int32_t t3 = -5302744;

	t3 = ((x33%(x34/x35))<x36);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x45 = 283136;
	int32_t x47 = INT32_MIN;
	int32_t t4 = 3;

	t4 = ((x45%(x46/x47))<x48);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x73 = 48393653LL;
	uint64_t x75 = 11382099672352069LLU;
	uint8_t x76 = 42U;
	int32_t t5 = 1;

	t5 = ((x73%(x74/x75))<x76);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x81 = 35563U;
	volatile int32_t x82 = 468098;
	volatile uint32_t x83 = 19U;
	int16_t x84 = -1;

	t6 = ((x81%(x82/x83))<x84);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x85 = 1U;
	int16_t x87 = INT16_MAX;
	int64_t x88 = 4481710476174727LL;
	static volatile int32_t t7 = 61;

	t7 = ((x85%(x86/x87))<x88);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x93 = INT64_MIN;
	int16_t x94 = INT16_MIN;
	int64_t x95 = -1LL;
	volatile int32_t t8 = 5334688;

	t8 = ((x93%(x94/x95))<x96);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint32_t x105 = 515U;
	int64_t x106 = INT64_MIN;
	int64_t x107 = 2685LL;
	volatile int16_t x108 = 0;
	volatile int32_t t9 = -20941;

	t9 = ((x105%(x106/x107))<x108);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x109 = 3320757LLU;

	t10 = ((x109%(x110/x111))<x112);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x113 = UINT16_MAX;
	volatile int32_t x114 = 1633226;
	int8_t x115 = INT8_MIN;

	t11 = ((x113%(x114/x115))<x116);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint16_t x117 = 916U;
	int32_t x118 = -25;
	volatile uint64_t x119 = 11LLU;
	uint32_t x120 = 5495071U;
	volatile int32_t t12 = -1;

	t12 = ((x117%(x118/x119))<x120);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x121 = 8LL;
	int32_t x122 = INT32_MIN;
	static int32_t x123 = 259702351;
	static int64_t x124 = INT64_MIN;
	int32_t t13 = 1;

	t13 = ((x121%(x122/x123))<x124);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x126 = -66;
	uint64_t x127 = 194394LLU;
	int32_t x128 = -1;
	int32_t t14 = -1;

	t14 = ((x125%(x126/x127))<x128);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x129 = 13523309017504LLU;
	static int16_t x131 = -6;
	uint16_t x132 = UINT16_MAX;
	static int32_t t15 = 2828;

	t15 = ((x129%(x130/x131))<x132);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x149 = 125139LLU;
	int64_t x150 = INT64_MIN;
	uint16_t x151 = UINT16_MAX;
	int8_t x152 = 1;
	volatile int32_t t16 = -112;

	t16 = ((x149%(x150/x151))<x152);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x157 = INT16_MIN;
	uint8_t x160 = 3U;
	static int32_t t17 = 1480;

	t17 = ((x157%(x158/x159))<x160);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x169 = 93;
	volatile int64_t x170 = INT64_MIN;
	int16_t x171 = INT16_MIN;
	int8_t x172 = 1;
	int32_t t18 = 1867;

	t18 = ((x169%(x170/x171))<x172);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x197 = 1;
	int16_t x199 = 20;
	int32_t x200 = 1813573;

	t19 = ((x197%(x198/x199))<x200);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x202 = -1;
	uint32_t x203 = 1U;
	int32_t x204 = 23455436;

	t20 = ((x201%(x202/x203))<x204);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x209 = 11U;
	int8_t x210 = INT8_MIN;
	uint8_t x211 = 2U;

	t21 = ((x209%(x210/x211))<x212);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x215 = UINT8_MAX;
	volatile int16_t x216 = 336;
	volatile int32_t t22 = -3399222;

	t22 = ((x213%(x214/x215))<x216);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x217 = -1;
	uint16_t x218 = UINT16_MAX;
	int8_t x219 = INT8_MIN;
	volatile int16_t x220 = -7692;
	volatile int32_t t23 = 173221629;

	t23 = ((x217%(x218/x219))<x220);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x235 = -1;
	int16_t x236 = INT16_MIN;
	volatile int32_t t24 = -502258715;

	t24 = ((x233%(x234/x235))<x236);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x246 = 777640790263LLU;
	int32_t x247 = INT32_MAX;

	t25 = ((x245%(x246/x247))<x248);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x249 = INT32_MAX;
	volatile int32_t x250 = INT32_MIN;
	int8_t x251 = INT8_MIN;
	uint8_t x252 = 14U;
	volatile int32_t t26 = -434;

	t26 = ((x249%(x250/x251))<x252);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x254 = 7122;
	int8_t x255 = -2;
	volatile uint16_t x256 = 254U;
	int32_t t27 = 992937286;

	t27 = ((x253%(x254/x255))<x256);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x257 = INT64_MIN;
	int16_t x258 = -398;
	int16_t x259 = -51;
	static int8_t x260 = INT8_MAX;
	int32_t t28 = 25566;

	t28 = ((x257%(x258/x259))<x260);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x281 = 124278494LLU;
	volatile uint8_t x282 = UINT8_MAX;
	uint16_t x283 = 11U;
	static uint64_t x284 = UINT64_MAX;
	int32_t t29 = -794525092;

	t29 = ((x281%(x282/x283))<x284);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x285 = -926115665823315101LL;
	static int32_t x286 = -1;
	int8_t x287 = -1;
	int16_t x288 = -1;

	t30 = ((x285%(x286/x287))<x288);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x297 = 346U;
	int16_t x299 = -1;
	int64_t x300 = INT64_MAX;

	t31 = ((x297%(x298/x299))<x300);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x317 = -1;
	volatile int64_t x318 = INT64_MIN;
	uint16_t x319 = 709U;
	static volatile int32_t t32 = 163335;

	t32 = ((x317%(x318/x319))<x320);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x321 = 1;
	volatile uint8_t x323 = 51U;
	uint64_t x324 = UINT64_MAX;
	volatile int32_t t33 = 121;

	t33 = ((x321%(x322/x323))<x324);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x334 = 116U;
	volatile int32_t x335 = 24;
	volatile uint8_t x336 = UINT8_MAX;
	static volatile int32_t t34 = -45215843;

	t34 = ((x333%(x334/x335))<x336);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x338 = INT8_MIN;
	volatile int8_t x340 = INT8_MAX;
	int32_t t35 = -22487;

	t35 = ((x337%(x338/x339))<x340);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x345 = 29351641856514LL;
	int64_t x346 = 5959936416224LL;
	static uint32_t x347 = 935U;
	int8_t x348 = -1;

	t36 = ((x345%(x346/x347))<x348);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x349 = 1U;
	int64_t x350 = 93498LL;

	t37 = ((x349%(x350/x351))<x352);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x360 = -1;
	int32_t t38 = 20;

	t38 = ((x357%(x358/x359))<x360);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x377 = -1;
	int32_t x378 = INT32_MAX;
	static int32_t x379 = 29;
	int32_t x380 = INT32_MIN;
	int32_t t39 = -9;

	t39 = ((x377%(x378/x379))<x380);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x385 = -1;
	uint8_t x386 = 56U;
	int8_t x387 = -1;
	volatile int8_t x388 = INT8_MAX;
	int32_t t40 = 1000958;

	t40 = ((x385%(x386/x387))<x388);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x395 = INT16_MIN;
	static volatile int32_t x396 = INT32_MIN;
	volatile int32_t t41 = -26;

	t41 = ((x393%(x394/x395))<x396);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x397 = UINT32_MAX;
	int8_t x399 = -1;
	static uint16_t x400 = 0U;
	volatile int32_t t42 = -163851596;

	t42 = ((x397%(x398/x399))<x400);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x405 = -1;
	int32_t x406 = 50166;
	int8_t x407 = -13;
	int16_t x408 = INT16_MAX;
	static volatile int32_t t43 = 55781191;

	t43 = ((x405%(x406/x407))<x408);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x409 = -13605;
	static int32_t x410 = INT32_MIN;
	static int16_t x411 = 9603;
	int16_t x412 = 60;
	volatile int32_t t44 = 44;

	t44 = ((x409%(x410/x411))<x412);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x413 = -1;
	static int64_t x414 = INT64_MAX;
	static uint32_t x416 = 13U;

	t45 = ((x413%(x414/x415))<x416);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x418 = 87U;
	int8_t x419 = -49;
	int32_t x420 = 778;
	volatile int32_t t46 = -64;

	t46 = ((x417%(x418/x419))<x420);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x422 = 1;
	int32_t x423 = 1;
	int32_t x424 = INT32_MAX;
	volatile int32_t t47 = 16221218;

	t47 = ((x421%(x422/x423))<x424);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x425 = 6;
	int8_t x426 = INT8_MIN;
	uint8_t x428 = UINT8_MAX;
	int32_t t48 = 0;

	t48 = ((x425%(x426/x427))<x428);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x433 = -15;
	static int16_t x434 = INT16_MAX;
	static volatile int8_t x435 = INT8_MAX;
	int16_t x436 = -153;
	int32_t t49 = -7065;

	t49 = ((x433%(x434/x435))<x436);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x437 = -19;
	int64_t x438 = INT64_MIN;
	static volatile int32_t x439 = INT32_MIN;
	int8_t x440 = INT8_MIN;
	static volatile int32_t t50 = 7998;

	t50 = ((x437%(x438/x439))<x440);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x445 = -1;
	uint64_t x446 = UINT64_MAX;
	int16_t x447 = 2;
	volatile int32_t t51 = -53;

	t51 = ((x445%(x446/x447))<x448);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x453 = INT16_MIN;
	int64_t x455 = INT64_MIN;

	t52 = ((x453%(x454/x455))<x456);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x469 = 2439320384797LL;
	static int8_t x470 = INT8_MIN;
	static int8_t x471 = INT8_MIN;
	static volatile int32_t t53 = 38664;

	t53 = ((x469%(x470/x471))<x472);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x477 = 109U;
	uint32_t x479 = 352547U;
	volatile int32_t t54 = -6;

	t54 = ((x477%(x478/x479))<x480);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x481 = INT32_MAX;
	uint32_t x484 = UINT32_MAX;
	int32_t t55 = 6246789;

	t55 = ((x481%(x482/x483))<x484);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x485 = INT32_MIN;
	static int8_t x487 = 12;
	int64_t x488 = -1LL;
	volatile int32_t t56 = 15;

	t56 = ((x485%(x486/x487))<x488);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x489 = INT32_MAX;
	volatile uint16_t x490 = UINT16_MAX;
	int16_t x492 = 3;
	int32_t t57 = 1299821;

	t57 = ((x489%(x490/x491))<x492);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x493 = INT64_MAX;
	int64_t x494 = 1201673996921446LL;
	int8_t x495 = -1;
	volatile uint64_t x496 = 10337849314LLU;
	volatile int32_t t58 = 123395748;

	t58 = ((x493%(x494/x495))<x496);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x505 = -28;
	int8_t x506 = INT8_MAX;
	int8_t x507 = -5;
	static int64_t x508 = INT64_MIN;
	static volatile int32_t t59 = 154710707;

	t59 = ((x505%(x506/x507))<x508);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x509 = 24;
	uint64_t x510 = UINT64_MAX;
	int32_t x511 = INT32_MAX;
	int8_t x512 = INT8_MIN;
	static int32_t t60 = -214804;

	t60 = ((x509%(x510/x511))<x512);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x521 = -1LL;
	uint8_t x522 = 25U;
	int16_t x523 = -1;
	int32_t x524 = INT32_MIN;
	int32_t t61 = 900496;

	t61 = ((x521%(x522/x523))<x524);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x525 = 344992146U;
	volatile int8_t x526 = -1;
	int64_t x527 = -1LL;
	int64_t x528 = 44717137301455451LL;
	int32_t t62 = -2940;

	t62 = ((x525%(x526/x527))<x528);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x529 = -1;
	static int16_t x530 = INT16_MIN;
	static int8_t x531 = INT8_MAX;
	int16_t x532 = INT16_MIN;
	volatile int32_t t63 = 54662398;

	t63 = ((x529%(x530/x531))<x532);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x538 = UINT64_MAX;
	uint16_t x539 = 5185U;
	int64_t x540 = INT64_MIN;
	volatile int32_t t64 = -1;

	t64 = ((x537%(x538/x539))<x540);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x541 = INT32_MAX;
	int32_t x542 = 2982;
	int16_t x543 = 292;
	volatile int32_t x544 = INT32_MAX;
	int32_t t65 = -355;

	t65 = ((x541%(x542/x543))<x544);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x553 = -60;
	static volatile int8_t x554 = INT8_MAX;
	int64_t x556 = INT64_MIN;
	volatile int32_t t66 = 78892829;

	t66 = ((x553%(x554/x555))<x556);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x557 = 188U;
	static int64_t x558 = -13128299LL;
	int8_t x559 = 1;
	volatile int8_t x560 = -1;
	volatile int32_t t67 = 0;

	t67 = ((x557%(x558/x559))<x560);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x561 = INT16_MIN;
	volatile int64_t x562 = 333598985046LL;
	static volatile int32_t x563 = 583183740;
	uint8_t x564 = 45U;
	static volatile int32_t t68 = 965;

	t68 = ((x561%(x562/x563))<x564);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x581 = -1LL;
	uint16_t x582 = UINT16_MAX;
	int16_t x583 = INT16_MIN;
	int32_t t69 = -4038698;

	t69 = ((x581%(x582/x583))<x584);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x585 = UINT8_MAX;
	int16_t x586 = INT16_MIN;
	volatile int32_t x588 = INT32_MIN;

	t70 = ((x585%(x586/x587))<x588);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x589 = INT8_MIN;
	int32_t x590 = INT32_MIN;
	int8_t x591 = INT8_MIN;
	uint8_t x592 = 4U;

	t71 = ((x589%(x590/x591))<x592);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x593 = 66958115100266858LL;
	static int64_t x594 = INT64_MAX;
	int64_t x595 = -1100LL;
	uint32_t x596 = 7160447U;
	int32_t t72 = -15558746;

	t72 = ((x593%(x594/x595))<x596);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x598 = 909962;
	int32_t x599 = -1;
	int64_t x600 = INT64_MIN;
	int32_t t73 = 55;

	t73 = ((x597%(x598/x599))<x600);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x610 = INT8_MIN;
	int32_t x611 = -1;

	t74 = ((x609%(x610/x611))<x612);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x614 = INT8_MIN;
	int16_t x615 = -1;
	volatile int8_t x616 = INT8_MIN;
	static volatile int32_t t75 = 1;

	t75 = ((x613%(x614/x615))<x616);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x617 = INT16_MAX;
	int16_t x618 = INT16_MIN;
	volatile int16_t x619 = INT16_MIN;
	volatile int32_t t76 = -1429994;

	t76 = ((x617%(x618/x619))<x620);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x621 = INT8_MAX;
	int64_t x622 = INT64_MIN;
	int64_t x623 = INT64_MIN;
	static int8_t x624 = 38;
	volatile int32_t t77 = 102110491;

	t77 = ((x621%(x622/x623))<x624);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x625 = 1;
	static uint64_t x626 = UINT64_MAX;
	int32_t x628 = -1;
	volatile int32_t t78 = -31430;

	t78 = ((x625%(x626/x627))<x628);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int64_t x657 = INT64_MIN;
	int32_t x658 = -1;
	int64_t x659 = -1LL;
	int32_t t79 = 116;

	t79 = ((x657%(x658/x659))<x660);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x661 = INT32_MIN;
	static volatile int8_t x662 = INT8_MIN;
	int64_t x663 = -1LL;
	int64_t x664 = -1LL;
	int32_t t80 = 235786395;

	t80 = ((x661%(x662/x663))<x664);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x674 = UINT64_MAX;
	static volatile int16_t x675 = 1;
	int16_t x676 = 42;
	static int32_t t81 = -31598;

	t81 = ((x673%(x674/x675))<x676);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x689 = INT32_MAX;
	static int8_t x691 = INT8_MIN;
	static volatile int32_t t82 = 61729907;

	t82 = ((x689%(x690/x691))<x692);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x697 = INT64_MIN;
	int8_t x699 = -1;
	uint32_t x700 = 397752U;
	volatile int32_t t83 = 74368303;

	t83 = ((x697%(x698/x699))<x700);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int8_t x705 = 0;
	static int16_t x706 = -1;
	uint64_t x707 = 1979311108155902LLU;
	int64_t x708 = 59LL;

	t84 = ((x705%(x706/x707))<x708);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x709 = INT64_MIN;
	volatile int8_t x711 = INT8_MIN;
	uint32_t x712 = UINT32_MAX;
	int32_t t85 = 1;

	t85 = ((x709%(x710/x711))<x712);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x714 = -96039707;
	int16_t x716 = 67;
	volatile int32_t t86 = 152420664;

	t86 = ((x713%(x714/x715))<x716);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x733 = INT64_MIN;
	int8_t x735 = -1;
	uint32_t x736 = 3220940U;
	int32_t t87 = -20518624;

	t87 = ((x733%(x734/x735))<x736);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x738 = INT16_MIN;
	int16_t x739 = INT16_MIN;
	int64_t x740 = INT64_MIN;
	int32_t t88 = -2186362;

	t88 = ((x737%(x738/x739))<x740);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int16_t x741 = INT16_MIN;
	int32_t t89 = -49750569;

	t89 = ((x741%(x742/x743))<x744);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x745 = -55;
	int8_t x746 = INT8_MIN;
	uint32_t x747 = 908484U;
	static volatile int32_t t90 = 512580427;

	t90 = ((x745%(x746/x747))<x748);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x749 = INT64_MIN;
	int8_t x750 = INT8_MIN;
	static int8_t x751 = 63;
	int32_t t91 = -64930;

	t91 = ((x749%(x750/x751))<x752);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x753 = 15U;
	int16_t x754 = INT16_MIN;
	uint32_t x755 = 1087352800U;
	static int32_t x756 = -1;

	t92 = ((x753%(x754/x755))<x756);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x758 = UINT8_MAX;
	static uint16_t x759 = 162U;
	int64_t x760 = 1300467571LL;
	volatile int32_t t93 = -403103;

	t93 = ((x757%(x758/x759))<x760);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x761 = 68454965164731879LL;
	uint8_t x762 = 7U;
	static volatile int8_t x763 = -2;
	static int16_t x764 = INT16_MIN;
	static int32_t t94 = -1;

	t94 = ((x761%(x762/x763))<x764);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x767 = INT8_MIN;
	static int32_t t95 = 477858832;

	t95 = ((x765%(x766/x767))<x768);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x774 = INT32_MIN;
	volatile uint64_t x775 = 37667LLU;

	t96 = ((x773%(x774/x775))<x776);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x778 = INT64_MAX;
	uint32_t x779 = 816915U;
	static int32_t x780 = -242073;
	int32_t t97 = 12;

	t97 = ((x777%(x778/x779))<x780);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x781 = -31LL;
	int32_t x782 = INT32_MAX;
	int32_t t98 = 1;

	t98 = ((x781%(x782/x783))<x784);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x789 = 1U;
	uint64_t x790 = 190779977LLU;
	uint16_t x791 = UINT16_MAX;
	uint64_t x792 = 23595803930832391LLU;
	volatile int32_t t99 = 0;

	t99 = ((x789%(x790/x791))<x792);

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

