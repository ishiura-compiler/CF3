#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x10 = -15LL;
uint32_t x24 = 534U;
int32_t x35 = 16;
int32_t t4 = 792105500;
uint64_t x76 = 12312993LLU;
uint8_t x87 = UINT8_MAX;
volatile int16_t x92 = -1;
static volatile int64_t t8 = 13734293LL;
static int8_t x97 = -1;
volatile int16_t x117 = INT16_MAX;
uint64_t t11 = 497LLU;
uint64_t x128 = 35658259703900475LLU;
static volatile int16_t x130 = -102;
volatile uint32_t t14 = 1614289U;
int8_t x133 = INT8_MAX;
int8_t x144 = INT8_MIN;
static volatile int32_t x145 = INT32_MAX;
volatile int8_t x146 = -1;
int64_t x148 = -2291422207356683LL;
int64_t x246 = INT64_MIN;
uint64_t x247 = 7909194455266LLU;
static uint8_t x248 = UINT8_MAX;
static volatile int64_t x272 = INT64_MAX;
volatile uint16_t x286 = UINT16_MAX;
int64_t x287 = -1LL;
volatile uint32_t x297 = 126U;
int64_t x299 = -1LL;
uint64_t x300 = UINT64_MAX;
static int8_t x310 = INT8_MIN;
uint8_t x312 = 3U;
volatile uint64_t x313 = UINT64_MAX;
volatile int16_t x316 = INT16_MIN;
volatile uint16_t x317 = UINT16_MAX;
volatile uint32_t t31 = 8360815U;
static int16_t x326 = -1;
static volatile uint32_t x327 = 750157750U;
uint16_t x328 = 137U;
static int64_t x338 = -6663817870245094LL;
int8_t x339 = -5;
uint16_t x373 = 24U;
uint64_t x374 = 1932054720492403676LLU;
int64_t x393 = INT64_MIN;
volatile int32_t x395 = INT32_MIN;
static int32_t x398 = 57930950;
static volatile int32_t t39 = 252;
int32_t x409 = -1;
int16_t x432 = INT16_MAX;
int8_t x477 = INT8_MIN;
int64_t x478 = -1379409026410344LL;
int32_t x479 = 400784662;
uint32_t x492 = 2451U;
uint8_t x508 = 3U;
int16_t x516 = INT16_MAX;
volatile int64_t t52 = -398931262800692LL;
int32_t x518 = -1;
volatile int64_t t53 = -1267691LL;
volatile int16_t x525 = -1;
int16_t x527 = 74;
int64_t x532 = INT64_MIN;
int32_t x539 = INT32_MIN;
int32_t x540 = INT32_MAX;
int64_t t57 = 408LL;
int8_t x565 = INT8_MIN;
int8_t x566 = -1;
volatile int32_t t59 = 14757;
volatile int8_t x582 = -1;
int8_t x584 = 60;
int64_t t60 = -745615971961134446LL;
int8_t x585 = 1;
uint32_t x586 = UINT32_MAX;
int8_t x588 = 15;
static volatile int64_t t62 = -250285102LL;
int64_t x616 = INT64_MIN;
static int16_t x626 = INT16_MIN;
static volatile int8_t x653 = INT8_MAX;
uint64_t x654 = UINT64_MAX;
int16_t x655 = INT16_MIN;
static int8_t x679 = -43;
int32_t x694 = -9439;
volatile int8_t x695 = -1;
int32_t t72 = 20334;
uint8_t x713 = 125U;
static int8_t x728 = -51;
volatile int64_t t76 = -119800614LL;
static int16_t x742 = -2021;
int32_t t77 = -231608;
int32_t x746 = -50;
int32_t x747 = -1;
static uint8_t x748 = 2U;
int32_t x760 = INT32_MIN;
int64_t t80 = 73099450LL;
int64_t t81 = -491943533LL;
uint8_t x778 = UINT8_MAX;
int16_t x780 = INT16_MIN;
int64_t t82 = -2LL;
volatile int64_t x815 = -7LL;
static uint64_t t86 = 129347504649LLU;
int32_t x920 = 1;
uint64_t x928 = 43830894598203LLU;
uint32_t x956 = 1U;
static int16_t x967 = INT16_MIN;
int16_t x986 = -1;
volatile int64_t x1022 = INT64_MIN;


void f0(void) {
	static uint64_t x9 = UINT64_MAX;
	uint64_t x11 = 171997805745488180LLU;
	int64_t x12 = -44LL;
	volatile uint64_t t0 = 13522566271826LLU;

	t0 = ((x9%(x10/x11))*x12);

	if (t0 != 18446744073709547612LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x17 = 270689288;
	int64_t x18 = INT64_MAX;
	int32_t x19 = INT32_MIN;
	volatile uint16_t x20 = UINT16_MAX;
	volatile int64_t t1 = -110403448052224LL;

	t1 = ((x17%(x18/x19))*x20);

	if (t1 != 17739622489080LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x21 = 52514055654LLU;
	volatile int32_t x22 = 889590350;
	int8_t x23 = INT8_MAX;
	static volatile uint64_t t2 = 1414461632201360882LLU;

	t2 = ((x21%(x22/x23))*x24);

	if (t2 != 111925332LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x25 = -1;
	int64_t x26 = INT64_MIN;
	int32_t x27 = INT32_MAX;
	uint64_t x28 = 1420104167542313676LLU;
	static volatile uint64_t t3 = 362573LLU;

	t3 = ((x25%(x26/x27))*x28);

	if (t3 != 17026639906167237940LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x33 = INT32_MAX;
	uint8_t x34 = UINT8_MAX;
	uint16_t x36 = UINT16_MAX;

	t4 = ((x33%(x34/x35))*x36);

	if (t4 != 458745) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x37 = UINT8_MAX;
	int64_t x38 = INT64_MAX;
	uint64_t x39 = 1002487733973LLU;
	static int8_t x40 = INT8_MAX;
	volatile uint64_t t5 = 13LLU;

	t5 = ((x37%(x38/x39))*x40);

	if (t5 != 32385LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x73 = 3206943889773LLU;
	int64_t x74 = INT64_MAX;
	uint16_t x75 = 6U;
	volatile uint64_t t6 = 50213673619LLU;

	t6 = ((x73%(x74/x75))*x76);

	if (t6 != 2593589518748617357LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x85 = INT64_MIN;
	uint8_t x86 = UINT8_MAX;
	int32_t x88 = INT32_MIN;
	static int64_t t7 = -8308562LL;

	t7 = ((x85%(x86/x87))*x88);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x89 = -1LL;
	int16_t x90 = INT16_MIN;
	int32_t x91 = -1;

	t8 = ((x89%(x90/x91))*x92);

	if (t8 != 1LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x93 = INT32_MAX;
	uint64_t x94 = 6661501LLU;
	int8_t x95 = 2;
	int64_t x96 = INT64_MIN;
	static volatile uint64_t t9 = 12899LLU;

	t9 = ((x93%(x94/x95))*x96);

	if (t9 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x98 = INT64_MAX;
	static uint8_t x99 = UINT8_MAX;
	static int16_t x100 = INT16_MAX;
	int64_t t10 = -453102868797090603LL;

	t10 = ((x97%(x98/x99))*x100);

	if (t10 != -32767LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x118 = UINT64_MAX;
	static int32_t x119 = -324819757;
	volatile int8_t x120 = INT8_MIN;

	t11 = ((x117%(x118/x119))*x120);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x121 = UINT8_MAX;
	int64_t x122 = INT64_MAX;
	static volatile uint8_t x123 = UINT8_MAX;
	int64_t x124 = -1LL;
	static volatile int64_t t12 = -11595384LL;

	t12 = ((x121%(x122/x123))*x124);

	if (t12 != -255LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x125 = UINT8_MAX;
	uint64_t x126 = 179LLU;
	volatile uint8_t x127 = 19U;
	volatile uint64_t t13 = 2975031435088LLU;

	t13 = ((x125%(x126/x127))*x128);

	if (t13 != 106974779111701425LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x129 = 172U;
	int8_t x131 = -3;
	uint16_t x132 = 820U;

	t14 = ((x129%(x130/x131))*x132);

	if (t14 != 1640U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x134 = -1;
	uint64_t x135 = 60239603LLU;
	uint32_t x136 = UINT32_MAX;
	uint64_t t15 = 47155LLU;

	t15 = ((x133%(x134/x135))*x136);

	if (t15 != 545460846465LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x137 = UINT16_MAX;
	static int16_t x138 = INT16_MIN;
	static volatile int16_t x139 = 133;
	uint16_t x140 = 6U;
	int32_t t16 = -6717460;

	t16 = ((x137%(x138/x139))*x140);

	if (t16 != 594) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x141 = INT64_MIN;
	int32_t x142 = INT32_MAX;
	int8_t x143 = INT8_MIN;
	volatile int64_t t17 = 677610877054388LL;

	t17 = ((x141%(x142/x143))*x144);

	if (t17 != 4194304LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x147 = UINT32_MAX;
	volatile int64_t t18 = 4201304893303712LL;

	t18 = ((x145%(x146/x147))*x148);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x157 = -57;
	int64_t x158 = INT64_MIN;
	int16_t x159 = 1005;
	int8_t x160 = INT8_MAX;
	static int64_t t19 = 3802443LL;

	t19 = ((x157%(x158/x159))*x160);

	if (t19 != -7239LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x173 = -3434226553187006LL;
	int16_t x174 = -1;
	uint32_t x175 = 121399816U;
	static int8_t x176 = -1;
	volatile int64_t t20 = -3163213914677792LL;

	t20 = ((x173%(x174/x175))*x176);

	if (t20 != 31LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x205 = 3U;
	uint8_t x206 = UINT8_MAX;
	int8_t x207 = -1;
	static uint64_t x208 = 55LLU;
	volatile uint64_t t21 = 227518LLU;

	t21 = ((x205%(x206/x207))*x208);

	if (t21 != 165LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x241 = INT32_MIN;
	int32_t x242 = INT32_MIN;
	volatile int16_t x243 = INT16_MIN;
	static uint8_t x244 = 3U;
	int32_t t22 = 25;

	t22 = ((x241%(x242/x243))*x244);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x245 = -1;
	volatile uint64_t t23 = 16288711360LLU;

	t23 = ((x245%(x246/x247))*x248);

	if (t23 != 216917025LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x253 = INT8_MIN;
	volatile int32_t x254 = INT32_MIN;
	int32_t x255 = INT32_MIN;
	volatile int64_t x256 = -1LL;
	static int64_t t24 = 415LL;

	t24 = ((x253%(x254/x255))*x256);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x261 = -1;
	volatile int64_t x262 = INT64_MIN;
	volatile int8_t x263 = INT8_MIN;
	uint32_t x264 = 54696342U;
	volatile int64_t t25 = 243367017100262LL;

	t25 = ((x261%(x262/x263))*x264);

	if (t25 != -54696342LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x269 = UINT64_MAX;
	int64_t x270 = -107618LL;
	int16_t x271 = -1;
	uint64_t t26 = 272541761711LLU;

	t26 = ((x269%(x270/x271))*x272);

	if (t26 != 9223372036854774659LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x285 = -688488LL;
	int32_t x288 = INT32_MIN;
	int64_t t27 = -3434486279LL;

	t27 = ((x285%(x286/x287))*x288);

	if (t27 != 71163313127424LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x298 = 45U;
	volatile uint64_t t28 = 118341683779840404LLU;

	t28 = ((x297%(x298/x299))*x300);

	if (t28 != 18446744073709551580LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x309 = 99U;
	int8_t x311 = 1;
	uint32_t t29 = 2090505794U;

	t29 = ((x309%(x310/x311))*x312);

	if (t29 != 297U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x314 = INT64_MIN;
	uint16_t x315 = UINT16_MAX;
	uint64_t t30 = 29088657LLU;

	t30 = ((x313%(x314/x315))*x316);

	if (t30 != 13834987685464276992LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x318 = -1;
	static uint32_t x319 = UINT32_MAX;
	uint8_t x320 = 8U;

	t31 = ((x317%(x318/x319))*x320);

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x325 = 5;
	uint32_t t32 = 93082717U;

	t32 = ((x325%(x326/x327))*x328);

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x333 = 517079LLU;
	int64_t x334 = INT64_MIN;
	static int32_t x335 = INT32_MIN;
	uint64_t x336 = 1187123101872785630LLU;
	volatile uint64_t t33 = 22287761035LLU;

	t33 = ((x333%(x334/x335))*x336);

	if (t33 != 2570596519081200754LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x337 = UINT8_MAX;
	int16_t x340 = INT16_MIN;
	static volatile int64_t t34 = 2073LL;

	t34 = ((x337%(x338/x339))*x340);

	if (t34 != -8355840LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x349 = -1;
	int32_t x350 = -1;
	int32_t x351 = -1;
	uint16_t x352 = UINT16_MAX;
	int32_t t35 = -1;

	t35 = ((x349%(x350/x351))*x352);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x361 = 1654900031227834LLU;
	volatile int16_t x362 = 1938;
	volatile int8_t x363 = INT8_MIN;
	volatile uint16_t x364 = UINT16_MAX;
	static uint64_t t36 = 370LLU;

	t36 = ((x361%(x362/x363))*x364);

	if (t36 != 16220153177968343110LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x375 = 1;
	uint16_t x376 = 25U;
	uint64_t t37 = 15148430LLU;

	t37 = ((x373%(x374/x375))*x376);

	if (t37 != 600LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x394 = INT64_MIN;
	volatile uint64_t x396 = 3733655383943721094LLU;
	uint64_t t38 = 11787119LLU;

	t38 = ((x393%(x394/x395))*x396);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint8_t x397 = UINT8_MAX;
	volatile int32_t x399 = -4809908;
	int8_t x400 = -1;

	t39 = ((x397%(x398/x399))*x400);

	if (t39 != -3) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x410 = INT64_MAX;
	uint8_t x411 = 2U;
	int8_t x412 = INT8_MAX;
	volatile int64_t t40 = 1LL;

	t40 = ((x409%(x410/x411))*x412);

	if (t40 != -127LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x429 = 105032LLU;
	int16_t x430 = INT16_MIN;
	static uint64_t x431 = 35452131668855LLU;
	volatile uint64_t t41 = 5361823934LLU;

	t41 = ((x429%(x430/x431))*x432);

	if (t41 != 3441583544LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x437 = -1;
	int16_t x438 = 2709;
	static int8_t x439 = 4;
	uint16_t x440 = UINT16_MAX;
	static volatile int32_t t42 = 0;

	t42 = ((x437%(x438/x439))*x440);

	if (t42 != -65535) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x445 = 0;
	volatile int32_t x446 = INT32_MIN;
	static int32_t x447 = 801418314;
	int32_t x448 = INT32_MIN;
	int32_t t43 = 1839477;

	t43 = ((x445%(x446/x447))*x448);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x457 = 1;
	int64_t x458 = 18101047276327LL;
	uint8_t x459 = UINT8_MAX;
	uint16_t x460 = 195U;
	int64_t t44 = 2465343597640357LL;

	t44 = ((x457%(x458/x459))*x460);

	if (t44 != 195LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x461 = 298094313LLU;
	static uint64_t x462 = 517560618037299LLU;
	uint32_t x463 = UINT32_MAX;
	int16_t x464 = 128;
	static uint64_t t45 = 104066435562048LLU;

	t45 = ((x461%(x462/x463))*x464);

	if (t45 != 11570432LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x465 = UINT32_MAX;
	int32_t x466 = INT32_MAX;
	volatile int16_t x467 = -1;
	volatile int32_t x468 = INT32_MIN;
	volatile uint32_t t46 = 105U;

	t46 = ((x465%(x466/x467))*x468);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x473 = 3804LL;
	static uint16_t x474 = UINT16_MAX;
	int64_t x475 = -1LL;
	int32_t x476 = -30915;
	int64_t t47 = 40LL;

	t47 = ((x473%(x474/x475))*x476);

	if (t47 != -117600660LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x480 = UINT16_MAX;
	int64_t t48 = 165LL;

	t48 = ((x477%(x478/x479))*x480);

	if (t48 != -8388480LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x489 = 191381243171LL;
	static volatile int16_t x490 = INT16_MIN;
	int32_t x491 = -1027;
	static volatile int64_t t49 = 269473LL;

	t49 = ((x489%(x490/x491))*x492);

	if (t49 != 29412LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x493 = INT16_MIN;
	int64_t x494 = INT64_MIN;
	int8_t x495 = -5;
	static int8_t x496 = INT8_MAX;
	static volatile int64_t t50 = -20784621838LL;

	t50 = ((x493%(x494/x495))*x496);

	if (t50 != -4161536LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x505 = INT32_MAX;
	int64_t x506 = INT64_MAX;
	volatile int64_t x507 = 108430956759LL;
	int64_t t51 = 752848LL;

	t51 = ((x505%(x506/x507))*x508);

	if (t51 != 62788566LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x513 = 61105518;
	int64_t x514 = 942065730812150LL;
	int32_t x515 = -408062;

	t52 = ((x513%(x514/x515))*x516);

	if (t52 != 2002244508306LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x517 = -1;
	uint32_t x519 = UINT32_MAX;
	int64_t x520 = 15LL;

	t53 = ((x517%(x518/x519))*x520);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x526 = INT16_MAX;
	uint8_t x528 = UINT8_MAX;
	int32_t t54 = -1002615022;

	t54 = ((x525%(x526/x527))*x528);

	if (t54 != -255) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x529 = 26408LLU;
	static int16_t x530 = -1;
	uint64_t x531 = UINT64_MAX;
	volatile uint64_t t55 = 32990359142601LLU;

	t55 = ((x529%(x530/x531))*x532);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x533 = 1U;
	static uint8_t x534 = 1U;
	int8_t x535 = -1;
	static volatile uint32_t x536 = 305413436U;
	uint32_t t56 = 367U;

	t56 = ((x533%(x534/x535))*x536);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x537 = 1U;
	int64_t x538 = 172739070013207943LL;

	t57 = ((x537%(x538/x539))*x540);

	if (t57 != 2147483647LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x549 = -1;
	int64_t x550 = INT64_MIN;
	static volatile int8_t x551 = INT8_MAX;
	uint64_t x552 = 190230924539484953LLU;
	volatile uint64_t t58 = 4107LLU;

	t58 = ((x549%(x550/x551))*x552);

	if (t58 != 18256513149170066663LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x567 = 1;
	int16_t x568 = INT16_MIN;

	t59 = ((x565%(x566/x567))*x568);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int64_t x581 = INT64_MIN;
	uint8_t x583 = 1U;

	t60 = ((x581%(x582/x583))*x584);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x587 = UINT32_MAX;
	uint32_t t61 = 184U;

	t61 = ((x585%(x586/x587))*x588);

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x605 = UINT16_MAX;
	static int64_t x606 = INT64_MIN;
	int16_t x607 = INT16_MAX;
	uint32_t x608 = 12128109U;

	t62 = ((x605%(x606/x607))*x608);

	if (t62 != 794815623315LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x613 = 2013966U;
	static uint64_t x614 = 84LLU;
	volatile uint8_t x615 = 31U;
	uint64_t t63 = 407LLU;

	t63 = ((x613%(x614/x615))*x616);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x621 = 199U;
	static int16_t x622 = -15615;
	int32_t x623 = -1;
	volatile uint64_t x624 = UINT64_MAX;
	static uint64_t t64 = 1748691840380281LLU;

	t64 = ((x621%(x622/x623))*x624);

	if (t64 != 18446744073709551417LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x625 = 1;
	volatile int64_t x627 = 117LL;
	static int32_t x628 = -3620248;
	static volatile int64_t t65 = -412083143LL;

	t65 = ((x625%(x626/x627))*x628);

	if (t65 != -3620248LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x649 = 3U;
	static int32_t x650 = INT32_MIN;
	static int32_t x651 = -1313;
	uint32_t x652 = 2076677U;
	volatile uint32_t t66 = 370757280U;

	t66 = ((x649%(x650/x651))*x652);

	if (t66 != 6230031U) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x656 = 156544114;
	static volatile uint64_t t67 = 12735LLU;

	t67 = ((x653%(x654/x655))*x656);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int8_t x661 = INT8_MIN;
	int32_t x662 = INT32_MAX;
	uint16_t x663 = UINT16_MAX;
	int16_t x664 = 1;
	volatile int32_t t68 = -12924;

	t68 = ((x661%(x662/x663))*x664);

	if (t68 != -128) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x673 = INT8_MIN;
	int64_t x674 = 1587732718371392115LL;
	int32_t x675 = -1;
	static int8_t x676 = 1;
	int64_t t69 = -469059LL;

	t69 = ((x673%(x674/x675))*x676);

	if (t69 != -128LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x677 = 209;
	volatile int8_t x678 = INT8_MIN;
	int32_t x680 = -1;
	volatile int32_t t70 = 118328504;

	t70 = ((x677%(x678/x679))*x680);

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x685 = -85928525380LL;
	volatile int64_t x686 = INT64_MIN;
	volatile uint8_t x687 = 3U;
	static uint32_t x688 = 10U;
	volatile int64_t t71 = -440LL;

	t71 = ((x685%(x686/x687))*x688);

	if (t71 != -859285253800LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x693 = -1;
	int16_t x696 = 9;

	t72 = ((x693%(x694/x695))*x696);

	if (t72 != -9) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x714 = 86;
	static volatile int16_t x715 = -1;
	volatile uint8_t x716 = 12U;
	volatile int32_t t73 = 207;

	t73 = ((x713%(x714/x715))*x716);

	if (t73 != 468) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x725 = UINT8_MAX;
	uint8_t x726 = UINT8_MAX;
	static volatile int16_t x727 = 15;
	static int32_t t74 = -176;

	t74 = ((x725%(x726/x727))*x728);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x729 = INT16_MAX;
	int16_t x730 = -1;
	int16_t x731 = 1;
	static int8_t x732 = INT8_MAX;
	volatile int32_t t75 = 874171;

	t75 = ((x729%(x730/x731))*x732);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x733 = -2;
	int32_t x734 = -1;
	int64_t x735 = -1LL;
	uint8_t x736 = 12U;

	t76 = ((x733%(x734/x735))*x736);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x741 = 2;
	uint16_t x743 = 3U;
	volatile int8_t x744 = INT8_MIN;

	t77 = ((x741%(x742/x743))*x744);

	if (t77 != -256) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x745 = INT64_MAX;
	int64_t t78 = 32667044LL;

	t78 = ((x745%(x746/x747))*x748);

	if (t78 != 14LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x749 = UINT64_MAX;
	volatile int64_t x750 = -2120933LL;
	uint16_t x751 = 11U;
	uint8_t x752 = UINT8_MAX;
	volatile uint64_t t79 = 1441136LLU;

	t79 = ((x749%(x750/x751))*x752);

	if (t79 != 49166805LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x757 = INT16_MAX;
	int64_t x758 = INT64_MAX;
	volatile int8_t x759 = -2;

	t80 = ((x757%(x758/x759))*x760);

	if (t80 != -70366596694016LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x769 = 311533386U;
	int64_t x770 = INT64_MIN;
	static int8_t x771 = INT8_MIN;
	volatile int8_t x772 = -1;

	t81 = ((x769%(x770/x771))*x772);

	if (t81 != -311533386LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x777 = INT64_MAX;
	volatile int8_t x779 = -1;

	t82 = ((x777%(x778/x779))*x780);

	if (t82 != -4161536LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x805 = 789LLU;
	int8_t x806 = -1;
	int16_t x807 = 1;
	int8_t x808 = INT8_MIN;
	static uint64_t t83 = 0LLU;

	t83 = ((x805%(x806/x807))*x808);

	if (t83 != 18446744073709450624LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x813 = UINT64_MAX;
	uint32_t x814 = 27084U;
	volatile uint16_t x816 = 99U;
	uint64_t t84 = 8LLU;

	t84 = ((x813%(x814/x815))*x816);

	if (t84 != 382932LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x817 = 917U;
	uint32_t x818 = 13U;
	uint8_t x819 = 1U;
	uint64_t x820 = 12718374LLU;
	uint64_t t85 = 1LLU;

	t85 = ((x817%(x818/x819))*x820);

	if (t85 != 89028618LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x821 = INT64_MAX;
	volatile uint64_t x822 = UINT64_MAX;
	int8_t x823 = INT8_MIN;
	uint8_t x824 = 11U;

	t86 = ((x821%(x822/x823))*x824);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x837 = -1;
	int16_t x838 = INT16_MIN;
	static uint32_t x839 = 1655726U;
	static uint8_t x840 = 31U;
	static uint32_t t87 = 27956U;

	t87 = ((x837%(x838/x839))*x840);

	if (t87 != 76818U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x849 = -1;
	static int8_t x850 = INT8_MIN;
	int16_t x851 = -1;
	static uint32_t x852 = UINT32_MAX;
	uint32_t t88 = 132086373U;

	t88 = ((x849%(x850/x851))*x852);

	if (t88 != 1U) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x885 = -14;
	int8_t x886 = -1;
	static uint64_t x887 = 99409774369699018LLU;
	static volatile int64_t x888 = INT64_MIN;
	volatile uint64_t t89 = 148LLU;

	t89 = ((x885%(x886/x887))*x888);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x901 = -1;
	uint64_t x902 = 48342993345789838LLU;
	static uint32_t x903 = 3760662U;
	uint32_t x904 = 11U;
	volatile uint64_t t90 = 7LLU;

	t90 = ((x901%(x902/x903))*x904);

	if (t90 != 50774825640LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x917 = -1;
	static volatile uint32_t x918 = 1976555U;
	static uint16_t x919 = 458U;
	uint32_t t91 = 1861752U;

	t91 = ((x917%(x918/x919))*x920);

	if (t91 != 1840U) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x925 = 234868802U;
	static int32_t x926 = INT32_MIN;
	int8_t x927 = INT8_MIN;
	uint64_t t92 = 766005646171342LLU;

	t92 = ((x925%(x926/x927))*x928);

	if (t92 != 15401666078833192758LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x941 = -1LL;
	int32_t x942 = INT32_MIN;
	volatile int32_t x943 = INT32_MAX;
	int8_t x944 = INT8_MIN;
	static volatile int64_t t93 = 2225408LL;

	t93 = ((x941%(x942/x943))*x944);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x953 = INT32_MIN;
	volatile int16_t x954 = INT16_MIN;
	uint32_t x955 = 2070586446U;
	volatile uint32_t t94 = 86912U;

	t94 = ((x953%(x954/x955))*x956);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x965 = -1;
	int32_t x966 = INT32_MAX;
	static uint16_t x968 = UINT16_MAX;
	int32_t t95 = -31;

	t95 = ((x965%(x966/x967))*x968);

	if (t95 != -65535) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x985 = 401;
	int32_t x987 = -1;
	uint64_t x988 = 6553655951855LLU;
	volatile uint64_t t96 = 127020334106451LLU;

	t96 = ((x985%(x986/x987))*x988);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int64_t x993 = -1669LL;
	uint8_t x994 = 31U;
	uint8_t x995 = 1U;
	int64_t x996 = 49107707895131672LL;
	int64_t t97 = 7LL;

	t97 = ((x993%(x994/x995))*x996);

	if (t97 != -1276800405273423472LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x1001 = 0;
	int32_t x1002 = INT32_MIN;
	volatile int32_t x1003 = -27337;
	uint32_t x1004 = 6U;
	uint32_t t98 = 2944727U;

	t98 = ((x1001%(x1002/x1003))*x1004);

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x1021 = 1919U;
	int64_t x1023 = INT64_MAX;
	volatile uint64_t x1024 = 104940887LLU;
	uint64_t t99 = 59825168998LLU;

	t99 = ((x1021%(x1022/x1023))*x1024);

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

