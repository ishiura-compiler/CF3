#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x13 = INT8_MIN;
volatile int32_t t1 = 392352;
volatile int64_t x22 = -915861806799LL;
int32_t t4 = 13360761;
static volatile int8_t x44 = -1;
int16_t x46 = INT16_MIN;
int32_t x47 = 142464;
volatile int32_t t7 = -15;
volatile int16_t x53 = INT16_MIN;
static int32_t t11 = 5563;
uint8_t x81 = UINT8_MAX;
volatile int16_t x82 = INT16_MIN;
volatile int8_t x84 = -1;
int32_t t13 = 6980;
uint16_t x90 = 165U;
int8_t x91 = -1;
static int64_t x104 = -1LL;
volatile int32_t t17 = -8468311;
int16_t x137 = -5;
int32_t x138 = 0;
int8_t x139 = -1;
int32_t t19 = 3745835;
volatile uint8_t x170 = 9U;
volatile uint32_t x171 = 145248U;
int64_t x187 = INT64_MAX;
uint32_t x188 = UINT32_MAX;
int32_t x192 = -5056;
int32_t x199 = 1909854;
int32_t t23 = 53;
int8_t x226 = INT8_MIN;
int16_t x228 = INT16_MAX;
int32_t x242 = INT32_MIN;
int16_t x245 = INT16_MAX;
int8_t x247 = -61;
static volatile int32_t t29 = 7992;
volatile uint16_t x270 = 29U;
int16_t x276 = INT16_MAX;
int32_t t31 = 3935753;
volatile int8_t x302 = -1;
int8_t x324 = 1;
volatile uint16_t x326 = UINT16_MAX;
uint8_t x327 = 31U;
int32_t t35 = 226321;
int32_t x331 = -696;
int8_t x332 = INT8_MIN;
uint32_t x337 = UINT32_MAX;
static volatile int32_t t38 = 3;
int8_t x342 = -1;
uint64_t x343 = 52408502LLU;
int8_t x349 = -1;
int64_t x350 = INT64_MIN;
int8_t x351 = -1;
int32_t t40 = 55612468;
uint16_t x365 = UINT16_MAX;
int32_t x379 = INT32_MIN;
int32_t t43 = 10;
int16_t x381 = -1;
int64_t x384 = -2598874564LL;
uint8_t x386 = 63U;
uint8_t x387 = UINT8_MAX;
int64_t x413 = INT64_MAX;
int64_t x414 = -1LL;
volatile int32_t t49 = 224554;
int64_t x422 = 4138120868427LL;
int64_t x440 = 43LL;
uint16_t x446 = 3555U;
int32_t t54 = 35;
int8_t x449 = INT8_MIN;
volatile uint8_t x452 = 6U;
uint16_t x461 = 7472U;
static int64_t x462 = INT64_MIN;
uint32_t x469 = 217303946U;
volatile int32_t t58 = -73281;
int8_t x474 = INT8_MAX;
int32_t x476 = -1;
int16_t x497 = 821;
int32_t t61 = -9863321;
int16_t x510 = INT16_MIN;
uint8_t x512 = 1U;
static int32_t t62 = 129740496;
int32_t x516 = -1;
int8_t x535 = INT8_MIN;
int32_t x538 = INT32_MIN;
volatile uint8_t x553 = 1U;
int64_t x558 = INT64_MAX;
static int32_t t68 = 35723867;
int16_t x586 = INT16_MIN;
int32_t x588 = -1;
int16_t x590 = -1;
int32_t t71 = 784997;
static uint16_t x595 = 23522U;
uint16_t x597 = 0U;
int32_t x610 = -729021175;
int16_t x614 = 1157;
uint16_t x615 = UINT16_MAX;
volatile uint8_t x616 = 5U;
int8_t x620 = -1;
int64_t x623 = INT64_MIN;
int8_t x632 = INT8_MAX;
static volatile int32_t t79 = 5511233;
int16_t x634 = INT16_MIN;
int32_t x635 = -72;
uint32_t x641 = 1907041486U;
int16_t x646 = INT16_MIN;
volatile int32_t t82 = -94;
static int8_t x661 = INT8_MAX;
int64_t x663 = INT64_MAX;
uint8_t x673 = UINT8_MAX;
int64_t x674 = -1LL;
int16_t x677 = INT16_MIN;
uint16_t x680 = 3947U;
static volatile int64_t x709 = 114294335LL;
volatile int32_t t88 = 11971546;
int64_t x717 = INT64_MIN;
volatile uint32_t x737 = 1653U;
static int32_t x738 = -63;
volatile int64_t x759 = INT64_MIN;
uint8_t x765 = 12U;
volatile int32_t x780 = 9914;
uint16_t x806 = 88U;
int32_t x817 = -1;
int8_t x818 = INT8_MIN;


void f0(void) {
	volatile int8_t x14 = 1;
	int64_t x15 = -1543LL;
	uint64_t x16 = 132628084LLU;
	volatile int32_t t0 = 1;

	t0 = (x13<=(x14/(x15/x16)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x17 = 163299114641453LL;
	int32_t x18 = -153;
	static int64_t x19 = INT64_MAX;
	uint32_t x20 = UINT32_MAX;

	t1 = (x17<=(x18/(x19/x20)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x21 = INT16_MIN;
	int64_t x23 = INT64_MIN;
	int64_t x24 = 16959302700439262LL;
	static volatile int32_t t2 = -46;

	t2 = (x21<=(x22/(x23/x24)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x33 = INT64_MIN;
	int16_t x34 = INT16_MIN;
	uint32_t x35 = UINT32_MAX;
	uint64_t x36 = 1LLU;
	int32_t t3 = 409;

	t3 = (x33<=(x34/(x35/x36)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x37 = 865977156U;
	static int64_t x38 = INT64_MIN;
	static uint64_t x39 = 121668690331251780LLU;
	volatile int8_t x40 = INT8_MAX;

	t4 = (x37<=(x38/(x39/x40)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x41 = 16007949;
	static int8_t x42 = INT8_MIN;
	int16_t x43 = INT16_MAX;
	volatile int32_t t5 = 37;

	t5 = (x41<=(x42/(x43/x44)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x45 = INT8_MIN;
	int8_t x48 = -1;
	volatile int32_t t6 = 84;

	t6 = (x45<=(x46/(x47/x48)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x49 = 16208937283863LLU;
	int64_t x50 = INT64_MIN;
	volatile int8_t x51 = -6;
	static int32_t x52 = -1;

	t7 = (x49<=(x50/(x51/x52)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int8_t x54 = INT8_MAX;
	int64_t x55 = INT64_MIN;
	static int64_t x56 = -153034400978425499LL;
	volatile int32_t t8 = -42111;

	t8 = (x53<=(x54/(x55/x56)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x57 = -1;
	int8_t x58 = 2;
	int8_t x59 = INT8_MIN;
	int8_t x60 = 1;
	volatile int32_t t9 = -768305261;

	t9 = (x57<=(x58/(x59/x60)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x69 = -1;
	int32_t x70 = -41407;
	volatile int16_t x71 = -1;
	int32_t x72 = -1;
	volatile int32_t t10 = -102480;

	t10 = (x69<=(x70/(x71/x72)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x73 = INT16_MAX;
	int16_t x74 = INT16_MAX;
	uint64_t x75 = UINT64_MAX;
	static uint8_t x76 = UINT8_MAX;

	t11 = (x73<=(x74/(x75/x76)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x77 = INT16_MIN;
	int16_t x78 = -16;
	uint32_t x79 = UINT32_MAX;
	int32_t x80 = INT32_MIN;
	volatile int32_t t12 = -42426;

	t12 = (x77<=(x78/(x79/x80)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x83 = 543;

	t13 = (x81<=(x82/(x83/x84)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x89 = -485179744;
	uint64_t x92 = UINT64_MAX;
	volatile int32_t t14 = -382;

	t14 = (x89<=(x90/(x91/x92)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x101 = UINT16_MAX;
	volatile int8_t x102 = INT8_MIN;
	int32_t x103 = -2629141;
	int32_t t15 = -120;

	t15 = (x101<=(x102/(x103/x104)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x113 = 1690U;
	uint64_t x114 = 23191070LLU;
	int64_t x115 = INT64_MIN;
	int8_t x116 = 4;
	volatile int32_t t16 = -9749;

	t16 = (x113<=(x114/(x115/x116)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x121 = -1;
	int32_t x122 = -13746068;
	int64_t x123 = -1LL;
	uint64_t x124 = 2LLU;

	t17 = (x121<=(x122/(x123/x124)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x140 = UINT32_MAX;
	volatile int32_t t18 = 51592528;

	t18 = (x137<=(x138/(x139/x140)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x161 = -4864;
	volatile int8_t x162 = 1;
	static int32_t x163 = INT32_MIN;
	int32_t x164 = -38541021;

	t19 = (x161<=(x162/(x163/x164)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x169 = INT64_MIN;
	static volatile uint16_t x172 = UINT16_MAX;
	int32_t t20 = -14642;

	t20 = (x169<=(x170/(x171/x172)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint16_t x185 = UINT16_MAX;
	int16_t x186 = 0;
	volatile int32_t t21 = -1453;

	t21 = (x185<=(x186/(x187/x188)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x189 = -856430;
	uint16_t x190 = 24U;
	uint32_t x191 = UINT32_MAX;
	volatile int32_t t22 = -61;

	t22 = (x189<=(x190/(x191/x192)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x197 = -1201;
	uint16_t x198 = UINT16_MAX;
	int32_t x200 = -1;

	t23 = (x197<=(x198/(x199/x200)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x225 = INT8_MIN;
	static uint16_t x227 = UINT16_MAX;
	volatile int32_t t24 = 1015111;

	t24 = (x225<=(x226/(x227/x228)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x237 = INT32_MIN;
	uint64_t x238 = 30389504LLU;
	int64_t x239 = INT64_MIN;
	int64_t x240 = INT64_MAX;
	int32_t t25 = 747395;

	t25 = (x237<=(x238/(x239/x240)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x241 = INT64_MIN;
	int16_t x243 = -1;
	static volatile uint64_t x244 = 1073507LLU;
	int32_t t26 = -40;

	t26 = (x241<=(x242/(x243/x244)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x246 = 24685U;
	int8_t x248 = 1;
	int32_t t27 = 0;

	t27 = (x245<=(x246/(x247/x248)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x253 = 778441107139381LLU;
	int16_t x254 = -5834;
	int16_t x255 = INT16_MIN;
	int8_t x256 = INT8_MAX;
	volatile int32_t t28 = -430647693;

	t28 = (x253<=(x254/(x255/x256)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x261 = INT64_MIN;
	int32_t x262 = -1;
	int16_t x263 = 5434;
	int8_t x264 = -1;

	t29 = (x261<=(x262/(x263/x264)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x269 = 2;
	int64_t x271 = INT64_MIN;
	static volatile int32_t x272 = -31133206;
	volatile int32_t t30 = -28075957;

	t30 = (x269<=(x270/(x271/x272)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x273 = -37;
	int64_t x274 = INT64_MIN;
	int32_t x275 = 13222281;

	t31 = (x273<=(x274/(x275/x276)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x281 = 608U;
	static uint16_t x282 = 20U;
	uint8_t x283 = UINT8_MAX;
	volatile uint8_t x284 = UINT8_MAX;
	static int32_t t32 = -129800230;

	t32 = (x281<=(x282/(x283/x284)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x301 = 20U;
	int32_t x303 = INT32_MIN;
	int8_t x304 = -6;
	int32_t t33 = 15;

	t33 = (x301<=(x302/(x303/x304)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x321 = 2474U;
	int16_t x322 = INT16_MIN;
	int16_t x323 = 482;
	volatile int32_t t34 = -123526;

	t34 = (x321<=(x322/(x323/x324)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x325 = UINT16_MAX;
	int8_t x328 = -5;

	t35 = (x325<=(x326/(x327/x328)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x329 = 1;
	int16_t x330 = -1;
	volatile int32_t t36 = -2536;

	t36 = (x329<=(x330/(x331/x332)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x333 = 7U;
	int64_t x334 = -146011356271046609LL;
	uint32_t x335 = 183739U;
	uint16_t x336 = 8U;
	volatile int32_t t37 = -1;

	t37 = (x333<=(x334/(x335/x336)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x338 = 22U;
	int32_t x339 = INT32_MIN;
	uint8_t x340 = 1U;

	t38 = (x337<=(x338/(x339/x340)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x341 = -1;
	volatile uint64_t x344 = 7855LLU;
	volatile int32_t t39 = -36;

	t39 = (x341<=(x342/(x343/x344)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x352 = -1;

	t40 = (x349<=(x350/(x351/x352)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x357 = 650638U;
	int8_t x358 = 12;
	int64_t x359 = 7099789426430LL;
	int16_t x360 = INT16_MIN;
	volatile int32_t t41 = 21058;

	t41 = (x357<=(x358/(x359/x360)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x366 = UINT8_MAX;
	volatile uint8_t x367 = 120U;
	int16_t x368 = -15;
	int32_t t42 = -68364484;

	t42 = (x365<=(x366/(x367/x368)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x377 = 0U;
	uint16_t x378 = 6U;
	uint8_t x380 = 70U;

	t43 = (x377<=(x378/(x379/x380)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x382 = 2455;
	static uint64_t x383 = UINT64_MAX;
	int32_t t44 = 1600627;

	t44 = (x381<=(x382/(x383/x384)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x385 = UINT8_MAX;
	int64_t x388 = -1LL;
	int32_t t45 = 13434515;

	t45 = (x385<=(x386/(x387/x388)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x393 = 19U;
	int32_t x394 = 0;
	int32_t x395 = INT32_MIN;
	int8_t x396 = 3;
	int32_t t46 = -36325;

	t46 = (x393<=(x394/(x395/x396)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x397 = INT32_MIN;
	static int64_t x398 = INT64_MIN;
	int64_t x399 = INT64_MIN;
	int16_t x400 = INT16_MIN;
	int32_t t47 = 1929779;

	t47 = (x397<=(x398/(x399/x400)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x409 = 43428LLU;
	int16_t x410 = INT16_MIN;
	int32_t x411 = INT32_MAX;
	static uint8_t x412 = UINT8_MAX;
	int32_t t48 = -253585;

	t48 = (x409<=(x410/(x411/x412)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x415 = INT64_MIN;
	static uint32_t x416 = 16559U;

	t49 = (x413<=(x414/(x415/x416)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x417 = 20U;
	uint8_t x418 = 86U;
	int8_t x419 = INT8_MIN;
	volatile int8_t x420 = INT8_MAX;
	volatile int32_t t50 = 273;

	t50 = (x417<=(x418/(x419/x420)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x421 = -16117;
	uint32_t x423 = UINT32_MAX;
	int8_t x424 = INT8_MAX;
	volatile int32_t t51 = -34200;

	t51 = (x421<=(x422/(x423/x424)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x437 = INT8_MIN;
	int32_t x438 = -1;
	volatile int8_t x439 = INT8_MIN;
	int32_t t52 = 2;

	t52 = (x437<=(x438/(x439/x440)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x441 = 519056529U;
	int64_t x442 = INT64_MIN;
	int32_t x443 = INT32_MIN;
	int16_t x444 = INT16_MIN;
	int32_t t53 = -290038015;

	t53 = (x441<=(x442/(x443/x444)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x445 = -1;
	static volatile int32_t x447 = INT32_MAX;
	uint32_t x448 = 58989274U;

	t54 = (x445<=(x446/(x447/x448)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x450 = 30U;
	uint64_t x451 = 3930054410LLU;
	volatile int32_t t55 = 5035779;

	t55 = (x449<=(x450/(x451/x452)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x463 = 15U;
	int8_t x464 = -1;
	static int32_t t56 = -2031694;

	t56 = (x461<=(x462/(x463/x464)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x465 = 1110046141202906559LLU;
	int32_t x466 = INT32_MAX;
	static int32_t x467 = INT32_MIN;
	int8_t x468 = -6;
	int32_t t57 = -431701;

	t57 = (x465<=(x466/(x467/x468)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x470 = UINT64_MAX;
	volatile int32_t x471 = INT32_MAX;
	uint32_t x472 = 109344062U;

	t58 = (x469<=(x470/(x471/x472)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x473 = INT8_MIN;
	uint16_t x475 = 10104U;
	int32_t t59 = 87609105;

	t59 = (x473<=(x474/(x475/x476)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x498 = INT64_MAX;
	int8_t x499 = INT8_MIN;
	uint32_t x500 = 1751405U;
	volatile int32_t t60 = -2661103;

	t60 = (x497<=(x498/(x499/x500)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x505 = 15906698823075LL;
	int8_t x506 = -2;
	volatile int32_t x507 = INT32_MIN;
	uint16_t x508 = 2U;

	t61 = (x505<=(x506/(x507/x508)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x509 = 2335U;
	volatile int64_t x511 = -1087260594435821LL;

	t62 = (x509<=(x510/(x511/x512)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x513 = 12U;
	int64_t x514 = -2536LL;
	static int16_t x515 = INT16_MIN;
	volatile int32_t t63 = 322600;

	t63 = (x513<=(x514/(x515/x516)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x533 = 52U;
	static int32_t x534 = 87745;
	int8_t x536 = INT8_MAX;
	int32_t t64 = -1;

	t64 = (x533<=(x534/(x535/x536)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x537 = INT16_MIN;
	int16_t x539 = INT16_MIN;
	int8_t x540 = -7;
	static volatile int32_t t65 = -1;

	t65 = (x537<=(x538/(x539/x540)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int16_t x545 = INT16_MAX;
	int16_t x546 = INT16_MAX;
	int16_t x547 = INT16_MIN;
	volatile int8_t x548 = INT8_MAX;
	int32_t t66 = 6413687;

	t66 = (x545<=(x546/(x547/x548)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x554 = -1LL;
	int64_t x555 = INT64_MIN;
	int32_t x556 = INT32_MIN;
	int32_t t67 = 201669200;

	t67 = (x553<=(x554/(x555/x556)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int16_t x557 = INT16_MIN;
	int64_t x559 = 660879439334969LL;
	uint64_t x560 = 1LLU;

	t68 = (x557<=(x558/(x559/x560)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x565 = 2563U;
	int32_t x566 = INT32_MIN;
	volatile int64_t x567 = INT64_MAX;
	uint16_t x568 = 1U;
	volatile int32_t t69 = 55740954;

	t69 = (x565<=(x566/(x567/x568)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x585 = INT32_MAX;
	volatile uint16_t x587 = UINT16_MAX;
	volatile int32_t t70 = 5;

	t70 = (x585<=(x586/(x587/x588)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x589 = -145;
	int16_t x591 = -1;
	int16_t x592 = 1;

	t71 = (x589<=(x590/(x591/x592)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x593 = -1LL;
	int32_t x594 = -88;
	int8_t x596 = -1;
	volatile int32_t t72 = -208703109;

	t72 = (x593<=(x594/(x595/x596)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x598 = 2U;
	int32_t x599 = -1;
	int16_t x600 = -1;
	int32_t t73 = -35584;

	t73 = (x597<=(x598/(x599/x600)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x601 = -1;
	volatile int32_t x602 = -99975078;
	static volatile int64_t x603 = 6241227LL;
	static volatile uint16_t x604 = 8U;
	volatile int32_t t74 = -16475;

	t74 = (x601<=(x602/(x603/x604)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x609 = UINT16_MAX;
	int8_t x611 = INT8_MIN;
	int16_t x612 = -30;
	int32_t t75 = -11008515;

	t75 = (x609<=(x610/(x611/x612)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x613 = 0U;
	static int32_t t76 = 1968683;

	t76 = (x613<=(x614/(x615/x616)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x617 = 927;
	static int32_t x618 = INT32_MIN;
	int16_t x619 = INT16_MIN;
	int32_t t77 = -7915;

	t77 = (x617<=(x618/(x619/x620)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x621 = 1U;
	uint64_t x622 = UINT64_MAX;
	volatile uint32_t x624 = 4052115U;
	volatile int32_t t78 = -54;

	t78 = (x621<=(x622/(x623/x624)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x629 = INT16_MIN;
	int32_t x630 = -1;
	int8_t x631 = INT8_MIN;

	t79 = (x629<=(x630/(x631/x632)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x633 = INT8_MAX;
	uint32_t x636 = 193060133U;
	int32_t t80 = 19343290;

	t80 = (x633<=(x634/(x635/x636)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x642 = UINT16_MAX;
	int64_t x643 = 917378248LL;
	volatile uint32_t x644 = 276U;
	int32_t t81 = -951677034;

	t81 = (x641<=(x642/(x643/x644)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x645 = INT16_MAX;
	int16_t x647 = -3283;
	volatile int8_t x648 = 61;

	t82 = (x645<=(x646/(x647/x648)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x662 = -1;
	int16_t x664 = INT16_MAX;
	volatile int32_t t83 = -7;

	t83 = (x661<=(x662/(x663/x664)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x675 = 6118U;
	int16_t x676 = -1;
	int32_t t84 = 2;

	t84 = (x673<=(x674/(x675/x676)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x678 = -78;
	static int16_t x679 = INT16_MIN;
	volatile int32_t t85 = 13195;

	t85 = (x677<=(x678/(x679/x680)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x693 = -130461880617720LL;
	static volatile int32_t x694 = -309732077;
	volatile int16_t x695 = INT16_MAX;
	uint32_t x696 = 24U;
	volatile int32_t t86 = 3224;

	t86 = (x693<=(x694/(x695/x696)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x710 = -1;
	static int16_t x711 = INT16_MIN;
	volatile int8_t x712 = -13;
	static int32_t t87 = 487298402;

	t87 = (x709<=(x710/(x711/x712)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x713 = 282404U;
	int64_t x714 = -26991197015744868LL;
	int8_t x715 = -1;
	uint16_t x716 = 1U;

	t88 = (x713<=(x714/(x715/x716)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x718 = 2;
	static uint8_t x719 = UINT8_MAX;
	uint8_t x720 = UINT8_MAX;
	volatile int32_t t89 = 3;

	t89 = (x717<=(x718/(x719/x720)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x729 = INT16_MAX;
	int16_t x730 = INT16_MIN;
	int32_t x731 = INT32_MAX;
	int8_t x732 = INT8_MAX;
	volatile int32_t t90 = 95878325;

	t90 = (x729<=(x730/(x731/x732)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x733 = -1LL;
	volatile int8_t x734 = INT8_MAX;
	int32_t x735 = INT32_MIN;
	static int32_t x736 = INT32_MIN;
	int32_t t91 = 120;

	t91 = (x733<=(x734/(x735/x736)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x739 = INT16_MAX;
	uint16_t x740 = 54U;
	volatile int32_t t92 = 45165897;

	t92 = (x737<=(x738/(x739/x740)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x757 = INT64_MAX;
	uint64_t x758 = 69223700662592305LLU;
	uint16_t x760 = UINT16_MAX;
	volatile int32_t t93 = 64224728;

	t93 = (x757<=(x758/(x759/x760)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x761 = UINT8_MAX;
	volatile int8_t x762 = INT8_MIN;
	static int8_t x763 = INT8_MIN;
	int8_t x764 = INT8_MIN;
	volatile int32_t t94 = 855474;

	t94 = (x761<=(x762/(x763/x764)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x766 = 474LLU;
	volatile int64_t x767 = INT64_MAX;
	int32_t x768 = -2199980;
	volatile int32_t t95 = 17;

	t95 = (x765<=(x766/(x767/x768)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x769 = INT16_MIN;
	uint8_t x770 = UINT8_MAX;
	uint64_t x771 = 16763282LLU;
	uint32_t x772 = 13430382U;
	int32_t t96 = -453068;

	t96 = (x769<=(x770/(x771/x772)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x777 = INT64_MIN;
	int16_t x778 = -1;
	uint64_t x779 = 2344035798737LLU;
	int32_t t97 = -6768;

	t97 = (x777<=(x778/(x779/x780)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x805 = INT8_MAX;
	volatile uint8_t x807 = UINT8_MAX;
	uint32_t x808 = 14U;
	int32_t t98 = 5602898;

	t98 = (x805<=(x806/(x807/x808)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x819 = INT64_MIN;
	static uint8_t x820 = 1U;
	static int32_t t99 = -5;

	t99 = (x817<=(x818/(x819/x820)));

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

