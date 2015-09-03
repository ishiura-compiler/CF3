#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x3 = 14824258435LLU;
int16_t x4 = INT16_MIN;
int16_t x20 = -2;
static volatile int32_t t1 = 284653;
static uint8_t x24 = UINT8_MAX;
int32_t x29 = 194734;
int32_t x34 = INT32_MIN;
uint16_t x35 = 8U;
int16_t x36 = -1;
int16_t x43 = INT16_MAX;
volatile int32_t t5 = -19436;
static volatile int32_t t6 = -2670;
volatile int64_t x52 = -1LL;
volatile int32_t t8 = -1370773;
int64_t x76 = INT64_MAX;
static int8_t x89 = 3;
volatile int8_t x98 = -1;
static uint8_t x102 = 1U;
int8_t x103 = INT8_MAX;
int64_t x114 = -1LL;
int64_t x160 = 1713350LL;
int64_t x175 = INT64_MAX;
int32_t t20 = -1;
uint32_t x196 = UINT32_MAX;
int32_t t23 = 113325;
uint64_t x222 = 1LLU;
volatile int32_t t25 = -152766311;
uint64_t x247 = 476696179127692LLU;
int64_t t27 = -14707LL;
int8_t x259 = INT8_MIN;
int32_t t28 = -743946;
static volatile uint64_t t30 = 29LLU;
static uint16_t x279 = 10087U;
volatile int32_t t33 = 11280;
volatile uint32_t x290 = 9U;
volatile uint64_t x292 = 5942404558789LLU;
uint8_t x296 = UINT8_MAX;
static volatile int64_t t36 = -52317423157924LL;
int8_t x303 = INT8_MIN;
static int64_t t37 = 14196LL;
int8_t x321 = -29;
uint32_t x323 = UINT32_MAX;
volatile int64_t x324 = -1LL;
volatile int64_t t39 = 26665439225716LL;
int16_t x350 = -30;
int16_t x354 = INT16_MIN;
int64_t t43 = -104766120LL;
volatile int64_t t45 = 7962LL;
int8_t x409 = -1;
int32_t x419 = INT32_MIN;
int32_t t51 = -2308997;
volatile uint64_t x426 = 8204812LLU;
volatile int64_t x434 = -1053447692LL;
int16_t x442 = INT16_MIN;
int16_t x445 = -2;
volatile int32_t t55 = 64918;
int64_t t59 = -1067399876LL;
int8_t x495 = INT8_MIN;
volatile int64_t x515 = -1LL;
int16_t x516 = -28;
volatile int8_t x522 = 3;
int32_t x523 = 3;
int16_t x524 = INT16_MIN;
volatile int32_t t69 = -23;
int16_t x533 = INT16_MAX;
int16_t x535 = 10923;
int32_t x537 = -1;
static uint16_t x541 = 4U;
int64_t x573 = INT64_MIN;
uint8_t x603 = UINT8_MAX;
volatile int32_t x610 = INT32_MAX;
static volatile uint64_t x611 = UINT64_MAX;
static volatile uint64_t t81 = 19831127LLU;
int32_t x655 = -1;
volatile int16_t x658 = -1;
uint64_t x663 = 7221068392707512804LLU;
volatile int32_t t88 = 406;
int64_t x667 = INT64_MIN;
volatile uint64_t t89 = 229LLU;
int32_t x681 = 11;
uint8_t x699 = UINT8_MAX;
int8_t x705 = 5;
volatile uint64_t t94 = 44LLU;
static int64_t x714 = INT64_MIN;
uint16_t x715 = 46U;
volatile uint64_t x717 = 48668LLU;
int64_t x732 = INT64_MAX;
int16_t x746 = INT16_MIN;
uint64_t t99 = 60006LLU;


void f0(void) {
	int32_t x1 = INT32_MAX;
	uint32_t x2 = 10526U;
	int32_t t0 = 32991710;

	t0 = ((x1%(x2<=x3))%x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x17 = 4861850;
	volatile uint16_t x18 = 2U;
	int64_t x19 = 1864278175879091LL;

	t1 = ((x17%(x18<=x19))%x20);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x21 = -1LL;
	int32_t x22 = 10067;
	uint16_t x23 = UINT16_MAX;
	volatile int64_t t2 = 252LL;

	t2 = ((x21%(x22<=x23))%x24);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x30 = INT16_MIN;
	int32_t x31 = INT32_MAX;
	int16_t x32 = -1;
	static volatile int32_t t3 = -390;

	t3 = ((x29%(x30<=x31))%x32);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x33 = INT64_MIN;
	volatile int64_t t4 = -3146LL;

	t4 = ((x33%(x34<=x35))%x36);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x41 = INT16_MAX;
	int64_t x42 = -1LL;
	int8_t x44 = -1;

	t5 = ((x41%(x42<=x43))%x44);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x45 = 1;
	int16_t x46 = -816;
	static int16_t x47 = -15;
	int32_t x48 = INT32_MIN;

	t6 = ((x45%(x46<=x47))%x48);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x49 = 1603U;
	int32_t x50 = INT32_MIN;
	static uint16_t x51 = 570U;
	static int64_t t7 = -3342351813654LL;

	t7 = ((x49%(x50<=x51))%x52);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x69 = 0U;
	static int32_t x70 = INT32_MIN;
	static int32_t x71 = INT32_MIN;
	uint8_t x72 = 72U;

	t8 = ((x69%(x70<=x71))%x72);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x73 = INT64_MAX;
	uint64_t x74 = 4LLU;
	int32_t x75 = -1;
	volatile int64_t t9 = 13706614892569026LL;

	t9 = ((x73%(x74<=x75))%x76);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x81 = -1;
	int32_t x82 = INT32_MIN;
	volatile int16_t x83 = INT16_MIN;
	uint64_t x84 = 28LLU;
	static uint64_t t10 = 202790112841LLU;

	t10 = ((x81%(x82<=x83))%x84);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x90 = 3LLU;
	uint8_t x91 = UINT8_MAX;
	static int64_t x92 = 79013791610LL;
	volatile int64_t t11 = -126542153234564LL;

	t11 = ((x89%(x90<=x91))%x92);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint16_t x97 = 26905U;
	static uint8_t x99 = 1U;
	volatile int32_t x100 = INT32_MIN;
	int32_t t12 = 376474259;

	t12 = ((x97%(x98<=x99))%x100);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x101 = INT8_MIN;
	static int64_t x104 = INT64_MAX;
	volatile int64_t t13 = 14817317342LL;

	t13 = ((x101%(x102<=x103))%x104);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x105 = INT8_MIN;
	volatile int8_t x106 = -1;
	int32_t x107 = -1;
	uint8_t x108 = 18U;
	volatile int32_t t14 = -1;

	t14 = ((x105%(x106<=x107))%x108);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x113 = INT32_MAX;
	uint16_t x115 = 7U;
	uint8_t x116 = UINT8_MAX;
	int32_t t15 = -5878;

	t15 = ((x113%(x114<=x115))%x116);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x129 = 3LLU;
	volatile int8_t x130 = -1;
	int64_t x131 = INT64_MAX;
	static volatile uint8_t x132 = UINT8_MAX;
	volatile uint64_t t16 = 456815311193LLU;

	t16 = ((x129%(x130<=x131))%x132);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int64_t x141 = INT64_MIN;
	volatile uint64_t x142 = 287777LLU;
	static int16_t x143 = INT16_MIN;
	uint8_t x144 = 3U;
	volatile int64_t t17 = 90386599716573LL;

	t17 = ((x141%(x142<=x143))%x144);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x157 = INT8_MIN;
	static volatile int8_t x158 = INT8_MIN;
	uint16_t x159 = 10391U;
	int64_t t18 = 716084542307143LL;

	t18 = ((x157%(x158<=x159))%x160);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x161 = -1LL;
	uint64_t x162 = 2LLU;
	volatile int16_t x163 = INT16_MAX;
	static int32_t x164 = -414212;
	volatile int64_t t19 = 13LL;

	t19 = ((x161%(x162<=x163))%x164);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x173 = INT16_MIN;
	volatile int32_t x174 = 1;
	uint8_t x176 = 3U;

	t20 = ((x173%(x174<=x175))%x176);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x189 = INT16_MIN;
	int8_t x190 = INT8_MIN;
	int64_t x191 = -1LL;
	volatile int64_t x192 = -7333LL;
	int64_t t21 = 75726141499684267LL;

	t21 = ((x189%(x190<=x191))%x192);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x193 = INT64_MAX;
	int32_t x194 = 84000;
	int32_t x195 = 348982585;
	int64_t t22 = 3094637866LL;

	t22 = ((x193%(x194<=x195))%x196);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x209 = INT16_MIN;
	int64_t x210 = INT64_MIN;
	uint64_t x211 = UINT64_MAX;
	int32_t x212 = 28;

	t23 = ((x209%(x210<=x211))%x212);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x221 = 20145U;
	int16_t x223 = INT16_MAX;
	int16_t x224 = INT16_MIN;
	uint32_t t24 = 347U;

	t24 = ((x221%(x222<=x223))%x224);

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x229 = 8;
	int16_t x230 = -1;
	uint32_t x231 = UINT32_MAX;
	static volatile int16_t x232 = 196;

	t25 = ((x229%(x230<=x231))%x232);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x241 = -1;
	static volatile int16_t x242 = -1;
	volatile int16_t x243 = 7;
	uint8_t x244 = 4U;
	static int32_t t26 = 32570917;

	t26 = ((x241%(x242<=x243))%x244);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x245 = INT64_MAX;
	uint16_t x246 = UINT16_MAX;
	static int8_t x248 = INT8_MAX;

	t27 = ((x245%(x246<=x247))%x248);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x257 = INT8_MIN;
	static int32_t x258 = INT32_MIN;
	int32_t x260 = INT32_MAX;

	t28 = ((x257%(x258<=x259))%x260);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int64_t x261 = -163359LL;
	int32_t x262 = INT32_MAX;
	uint64_t x263 = 872681448952394LLU;
	int32_t x264 = -1;
	static volatile int64_t t29 = -4296737175765LL;

	t29 = ((x261%(x262<=x263))%x264);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x265 = 2116172438LLU;
	volatile uint32_t x266 = 2017U;
	int8_t x267 = -39;
	int16_t x268 = INT16_MIN;

	t30 = ((x265%(x266<=x267))%x268);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x269 = -19;
	int32_t x270 = -1;
	uint16_t x271 = 19044U;
	int32_t x272 = -1;
	volatile int32_t t31 = 2053734;

	t31 = ((x269%(x270<=x271))%x272);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x273 = INT8_MIN;
	int16_t x274 = INT16_MIN;
	int8_t x275 = -1;
	int64_t x276 = INT64_MIN;
	int64_t t32 = -28295824LL;

	t32 = ((x273%(x274<=x275))%x276);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x277 = INT16_MIN;
	static uint8_t x278 = 118U;
	static int16_t x280 = -12;

	t33 = ((x277%(x278<=x279))%x280);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x281 = 6U;
	static int16_t x282 = -1;
	int32_t x283 = INT32_MAX;
	volatile int8_t x284 = INT8_MIN;
	volatile int32_t t34 = -1509;

	t34 = ((x281%(x282<=x283))%x284);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x289 = 0U;
	int32_t x291 = INT32_MAX;
	uint64_t t35 = 484LLU;

	t35 = ((x289%(x290<=x291))%x292);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x293 = -1LL;
	int8_t x294 = -28;
	static volatile int32_t x295 = 2982901;

	t36 = ((x293%(x294<=x295))%x296);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x301 = -1;
	int8_t x302 = INT8_MIN;
	int64_t x304 = -1LL;

	t37 = ((x301%(x302<=x303))%x304);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int8_t x322 = -1;
	volatile int64_t t38 = -32920117639LL;

	t38 = ((x321%(x322<=x323))%x324);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x325 = 1072046723LL;
	uint32_t x326 = UINT32_MAX;
	uint32_t x327 = UINT32_MAX;
	int32_t x328 = -3357924;

	t39 = ((x325%(x326<=x327))%x328);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x341 = -212;
	int16_t x342 = INT16_MIN;
	static int8_t x343 = INT8_MAX;
	int16_t x344 = INT16_MIN;
	int32_t t40 = 62007676;

	t40 = ((x341%(x342<=x343))%x344);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x349 = 2U;
	int64_t x351 = 1726660214604897LL;
	int16_t x352 = -1;
	int32_t t41 = 153;

	t41 = ((x349%(x350<=x351))%x352);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x353 = -13685;
	uint16_t x355 = UINT16_MAX;
	uint8_t x356 = UINT8_MAX;
	int32_t t42 = 1242781;

	t42 = ((x353%(x354<=x355))%x356);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint32_t x365 = 124U;
	int64_t x366 = INT64_MIN;
	volatile int32_t x367 = -1723918;
	int64_t x368 = 1LL;

	t43 = ((x365%(x366<=x367))%x368);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x377 = INT16_MIN;
	int8_t x378 = INT8_MIN;
	uint8_t x379 = 8U;
	int8_t x380 = 1;
	int32_t t44 = -837;

	t44 = ((x377%(x378<=x379))%x380);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x381 = INT64_MAX;
	int16_t x382 = INT16_MIN;
	static volatile int16_t x383 = INT16_MAX;
	int8_t x384 = 1;

	t45 = ((x381%(x382<=x383))%x384);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x389 = -448;
	int64_t x390 = -31992524283LL;
	int64_t x391 = 49226384LL;
	static int64_t x392 = INT64_MIN;
	int64_t t46 = -4LL;

	t46 = ((x389%(x390<=x391))%x392);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x405 = INT32_MIN;
	uint16_t x406 = 1U;
	uint64_t x407 = 9LLU;
	int64_t x408 = -5165289058230670LL;
	volatile int64_t t47 = 357235075439715998LL;

	t47 = ((x405%(x406<=x407))%x408);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x410 = 2149606973444LL;
	volatile uint64_t x411 = UINT64_MAX;
	int16_t x412 = INT16_MIN;
	static int32_t t48 = -8011745;

	t48 = ((x409%(x410<=x411))%x412);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x413 = 7706762009629LLU;
	static uint8_t x414 = 36U;
	int64_t x415 = 96LL;
	static int8_t x416 = INT8_MIN;
	uint64_t t49 = 7842726559932898594LLU;

	t49 = ((x413%(x414<=x415))%x416);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x417 = INT64_MIN;
	int64_t x418 = INT64_MIN;
	int64_t x420 = INT64_MIN;
	int64_t t50 = 3657671217967377991LL;

	t50 = ((x417%(x418<=x419))%x420);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x421 = -1;
	int16_t x422 = INT16_MIN;
	volatile int16_t x423 = -3066;
	int32_t x424 = 456;

	t51 = ((x421%(x422<=x423))%x424);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x425 = INT16_MIN;
	int64_t x427 = INT64_MIN;
	int16_t x428 = 2;
	int32_t t52 = -47946;

	t52 = ((x425%(x426<=x427))%x428);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x433 = UINT32_MAX;
	uint8_t x435 = 25U;
	int8_t x436 = INT8_MIN;
	volatile uint32_t t53 = 500U;

	t53 = ((x433%(x434<=x435))%x436);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x441 = 141634455817967374LLU;
	uint8_t x443 = UINT8_MAX;
	static int32_t x444 = 1;
	uint64_t t54 = 573528LLU;

	t54 = ((x441%(x442<=x443))%x444);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x446 = 8LLU;
	int16_t x447 = INT16_MIN;
	static uint8_t x448 = UINT8_MAX;

	t55 = ((x445%(x446<=x447))%x448);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x453 = INT16_MIN;
	volatile int8_t x454 = 3;
	int16_t x455 = INT16_MAX;
	int16_t x456 = INT16_MIN;
	int32_t t56 = -47;

	t56 = ((x453%(x454<=x455))%x456);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x461 = 1;
	uint16_t x462 = 996U;
	uint16_t x463 = UINT16_MAX;
	uint16_t x464 = 1U;
	int32_t t57 = 622482;

	t57 = ((x461%(x462<=x463))%x464);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x465 = -1;
	int32_t x466 = INT32_MIN;
	static volatile int32_t x467 = -1;
	static int8_t x468 = INT8_MAX;
	int32_t t58 = -65350;

	t58 = ((x465%(x466<=x467))%x468);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x469 = 199733645U;
	uint16_t x470 = 5U;
	volatile int8_t x471 = INT8_MAX;
	volatile int64_t x472 = INT64_MAX;

	t59 = ((x469%(x470<=x471))%x472);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x473 = UINT32_MAX;
	static volatile int32_t x474 = INT32_MIN;
	volatile uint16_t x475 = UINT16_MAX;
	int64_t x476 = INT64_MAX;
	volatile int64_t t60 = -2460226567LL;

	t60 = ((x473%(x474<=x475))%x476);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x481 = 19;
	int8_t x482 = INT8_MIN;
	int64_t x483 = -1LL;
	uint64_t x484 = 1565089220LLU;
	volatile uint64_t t61 = 569031102287LLU;

	t61 = ((x481%(x482<=x483))%x484);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x489 = INT64_MAX;
	uint8_t x490 = 3U;
	static uint32_t x491 = 329875U;
	uint8_t x492 = 28U;
	int64_t t62 = 18LL;

	t62 = ((x489%(x490<=x491))%x492);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x493 = UINT8_MAX;
	volatile int64_t x494 = -65420488794LL;
	uint32_t x496 = UINT32_MAX;
	uint32_t t63 = 356248562U;

	t63 = ((x493%(x494<=x495))%x496);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x497 = INT64_MIN;
	int16_t x498 = -74;
	int64_t x499 = 281437358166791LL;
	static uint32_t x500 = 836175956U;
	static int64_t t64 = -14320517LL;

	t64 = ((x497%(x498<=x499))%x500);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x501 = 41;
	uint8_t x502 = UINT8_MAX;
	uint64_t x503 = 133453391401790LLU;
	int16_t x504 = -1;
	int32_t t65 = -1;

	t65 = ((x501%(x502<=x503))%x504);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x509 = UINT64_MAX;
	int64_t x510 = -6LL;
	int32_t x511 = -1;
	static int8_t x512 = INT8_MIN;
	volatile uint64_t t66 = 4285641617220LLU;

	t66 = ((x509%(x510<=x511))%x512);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x513 = INT8_MAX;
	volatile int32_t x514 = INT32_MIN;
	int32_t t67 = 0;

	t67 = ((x513%(x514<=x515))%x516);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x517 = 6;
	static volatile int32_t x518 = INT32_MIN;
	static int32_t x519 = INT32_MAX;
	static int32_t x520 = INT32_MIN;
	volatile int32_t t68 = 25679;

	t68 = ((x517%(x518<=x519))%x520);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x521 = INT8_MIN;

	t69 = ((x521%(x522<=x523))%x524);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x534 = -1;
	int64_t x536 = INT64_MIN;
	int64_t t70 = -15644686948LL;

	t70 = ((x533%(x534<=x535))%x536);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x538 = INT8_MIN;
	uint16_t x539 = UINT16_MAX;
	static int64_t x540 = -246317311169558051LL;
	int64_t t71 = 348LL;

	t71 = ((x537%(x538<=x539))%x540);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x542 = INT64_MIN;
	int16_t x543 = 0;
	int8_t x544 = -1;
	int32_t t72 = -1567537;

	t72 = ((x541%(x542<=x543))%x544);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x574 = -19937905;
	int32_t x575 = -1;
	int64_t x576 = INT64_MIN;
	static int64_t t73 = -5715504265054862LL;

	t73 = ((x573%(x574<=x575))%x576);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x577 = INT64_MAX;
	int32_t x578 = INT32_MIN;
	uint16_t x579 = UINT16_MAX;
	int8_t x580 = -2;
	volatile int64_t t74 = -19030078640905125LL;

	t74 = ((x577%(x578<=x579))%x580);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x585 = 111008453U;
	static int32_t x586 = INT32_MIN;
	volatile uint32_t x587 = UINT32_MAX;
	volatile int8_t x588 = INT8_MIN;
	uint32_t t75 = 6U;

	t75 = ((x585%(x586<=x587))%x588);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x589 = 3;
	volatile int8_t x590 = INT8_MIN;
	volatile int16_t x591 = INT16_MAX;
	int16_t x592 = 1;
	volatile int32_t t76 = 97324;

	t76 = ((x589%(x590<=x591))%x592);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x597 = 0;
	int8_t x598 = 1;
	volatile uint32_t x599 = 112U;
	int64_t x600 = INT64_MIN;
	static volatile int64_t t77 = 3416216706391016020LL;

	t77 = ((x597%(x598<=x599))%x600);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x601 = 120U;
	volatile uint16_t x602 = 0U;
	int64_t x604 = -1LL;
	int64_t t78 = 60830026489669602LL;

	t78 = ((x601%(x602<=x603))%x604);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x605 = UINT32_MAX;
	int8_t x606 = -1;
	uint8_t x607 = 15U;
	volatile int8_t x608 = INT8_MIN;
	volatile uint32_t t79 = 1116835U;

	t79 = ((x605%(x606<=x607))%x608);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x609 = INT8_MAX;
	uint8_t x612 = UINT8_MAX;
	int32_t t80 = -192;

	t80 = ((x609%(x610<=x611))%x612);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x613 = 125LLU;
	int8_t x614 = INT8_MIN;
	uint8_t x615 = 1U;
	uint8_t x616 = 1U;

	t81 = ((x613%(x614<=x615))%x616);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x621 = -1572325751519266254LL;
	volatile uint32_t x622 = 46848144U;
	uint32_t x623 = 57304862U;
	volatile int8_t x624 = INT8_MAX;
	int64_t t82 = -222LL;

	t82 = ((x621%(x622<=x623))%x624);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int8_t x637 = -1;
	int32_t x638 = INT32_MIN;
	int16_t x639 = INT16_MAX;
	int32_t x640 = INT32_MIN;
	volatile int32_t t83 = 293331228;

	t83 = ((x637%(x638<=x639))%x640);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x641 = 0;
	uint64_t x642 = 214977448LLU;
	int16_t x643 = INT16_MIN;
	static uint8_t x644 = UINT8_MAX;
	volatile int32_t t84 = -3546;

	t84 = ((x641%(x642<=x643))%x644);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x645 = 7U;
	int64_t x646 = INT64_MIN;
	uint8_t x647 = UINT8_MAX;
	int32_t x648 = 145954;
	uint32_t t85 = 709837U;

	t85 = ((x645%(x646<=x647))%x648);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x653 = 3182U;
	int64_t x654 = INT64_MIN;
	int32_t x656 = INT32_MIN;
	volatile int32_t t86 = 1;

	t86 = ((x653%(x654<=x655))%x656);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x657 = UINT64_MAX;
	volatile int64_t x659 = -1LL;
	int32_t x660 = 6311;
	uint64_t t87 = 2464916226377LLU;

	t87 = ((x657%(x658<=x659))%x660);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x661 = INT8_MAX;
	uint64_t x662 = 21035958LLU;
	int32_t x664 = -1;

	t88 = ((x661%(x662<=x663))%x664);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x665 = INT32_MAX;
	int64_t x666 = INT64_MIN;
	volatile uint64_t x668 = 33164285LLU;

	t89 = ((x665%(x666<=x667))%x668);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x677 = INT16_MIN;
	volatile int16_t x678 = -1;
	static uint16_t x679 = 13U;
	int8_t x680 = INT8_MIN;
	static volatile int32_t t90 = 30078;

	t90 = ((x677%(x678<=x679))%x680);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x682 = 50;
	uint16_t x683 = UINT16_MAX;
	uint8_t x684 = UINT8_MAX;
	static int32_t t91 = -121523;

	t91 = ((x681%(x682<=x683))%x684);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x693 = 0;
	int16_t x694 = INT16_MIN;
	int8_t x695 = INT8_MIN;
	int64_t x696 = INT64_MIN;
	int64_t t92 = 2LL;

	t92 = ((x693%(x694<=x695))%x696);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x697 = -114484766735731365LL;
	volatile int64_t x698 = -1LL;
	static int64_t x700 = INT64_MIN;
	static int64_t t93 = -993263LL;

	t93 = ((x697%(x698<=x699))%x700);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x706 = -19;
	uint64_t x707 = UINT64_MAX;
	uint64_t x708 = UINT64_MAX;

	t94 = ((x705%(x706<=x707))%x708);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x713 = 24U;
	int16_t x716 = -17;
	int32_t t95 = -56084;

	t95 = ((x713%(x714<=x715))%x716);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x718 = 109U;
	uint64_t x719 = 921603798LLU;
	int32_t x720 = INT32_MAX;
	static volatile uint64_t t96 = 328881LLU;

	t96 = ((x717%(x718<=x719))%x720);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x729 = INT8_MIN;
	static int16_t x730 = -1;
	static uint16_t x731 = 441U;
	int64_t t97 = 14LL;

	t97 = ((x729%(x730<=x731))%x732);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x737 = UINT8_MAX;
	int8_t x738 = INT8_MIN;
	int8_t x739 = INT8_MIN;
	int8_t x740 = 57;
	volatile int32_t t98 = -734;

	t98 = ((x737%(x738<=x739))%x740);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x745 = INT64_MAX;
	static int16_t x747 = INT16_MAX;
	uint64_t x748 = 30233677LLU;

	t99 = ((x745%(x746<=x747))%x748);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

