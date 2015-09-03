#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x6 = 872U;
static int16_t x7 = INT16_MAX;
uint64_t x8 = UINT64_MAX;
uint32_t x25 = 7641502U;
int16_t x28 = INT16_MAX;
int8_t x31 = 25;
volatile uint32_t x34 = 142705982U;
int32_t x35 = 48;
static volatile uint64_t x49 = UINT64_MAX;
uint16_t x50 = UINT16_MAX;
volatile uint64_t t9 = 429693862LLU;
volatile int64_t x173 = -166900LL;
int16_t x174 = 1257;
volatile int16_t x207 = 2;
volatile uint16_t x208 = UINT16_MAX;
static uint64_t x261 = 53361239LLU;
static volatile int8_t x263 = 1;
int32_t x264 = 1;
uint64_t x282 = 7LLU;
static int32_t x297 = -1;
static uint8_t x302 = UINT8_MAX;
uint64_t x304 = UINT64_MAX;
volatile int32_t t20 = -880;
uint32_t x317 = 4455892U;
uint8_t x319 = 1U;
int32_t x361 = -22140;
uint8_t x362 = 46U;
int16_t x393 = 336;
int8_t x424 = -1;
uint16_t x439 = 1U;
static volatile int32_t t28 = 1975;
int64_t t29 = -17694445760447202LL;
int16_t x474 = 384;
int32_t x492 = 2747;
int16_t x507 = -42;
uint32_t x547 = 46747U;
uint8_t x555 = 37U;
volatile int64_t x556 = INT64_MAX;
volatile uint32_t t37 = 934U;
int8_t x599 = INT8_MAX;
static uint64_t t39 = 63369LLU;
int32_t x620 = 963068553;
int32_t x622 = INT32_MAX;
static volatile int32_t x646 = 493018;
int8_t x647 = INT8_MIN;
int32_t t43 = -414;
int8_t x679 = -1;
uint16_t x680 = UINT16_MAX;
int32_t t45 = 61576;
int16_t x719 = 3;
int8_t x782 = 10;
int64_t x783 = -154489353LL;
static uint16_t x785 = UINT16_MAX;
static int64_t x788 = INT64_MIN;
volatile int8_t x828 = INT8_MIN;
uint32_t t50 = 21671772U;
uint64_t x848 = UINT64_MAX;
uint16_t x850 = 1294U;
static int64_t x851 = -3002LL;
static uint32_t x852 = UINT32_MAX;
int16_t x867 = 0;
volatile uint32_t t55 = 454490852U;
int8_t x884 = -1;
uint8_t x899 = UINT8_MAX;
uint64_t x916 = 580955LLU;
volatile int32_t t59 = 57416535;
uint16_t x923 = 0U;
uint32_t x1026 = UINT32_MAX;
static int32_t x1028 = INT32_MIN;
uint64_t t63 = 16667653771539700LLU;
volatile int64_t t65 = 85324508LL;
uint16_t x1082 = UINT16_MAX;
int32_t x1089 = -1;
uint8_t x1090 = 62U;
int32_t x1114 = 2;
uint8_t x1141 = UINT8_MAX;
int8_t x1143 = INT8_MIN;
volatile int32_t t69 = 1;
int8_t x1153 = 5;
uint32_t x1154 = UINT32_MAX;
static uint64_t x1188 = 9749734LLU;
int32_t t72 = -870612852;
uint64_t x1206 = 12250643827161LLU;
static int64_t x1230 = 0LL;
volatile int8_t x1232 = -1;
int64_t x1240 = INT64_MIN;
int8_t x1253 = INT8_MIN;
static int8_t x1261 = 22;
uint32_t x1262 = 27840452U;
uint64_t x1268 = UINT64_MAX;
volatile uint16_t x1272 = UINT16_MAX;
int8_t x1282 = 0;
int64_t x1284 = -50LL;
int16_t x1291 = -1;
static uint8_t x1310 = UINT8_MAX;
uint8_t x1315 = 39U;
volatile uint64_t t85 = 3443167LLU;
int32_t t86 = -1;
static volatile uint16_t x1362 = 1U;
volatile int32_t t90 = -57190551;
uint64_t x1375 = 0LLU;
int64_t x1376 = INT64_MAX;
int8_t x1424 = INT8_MAX;
int16_t x1432 = INT16_MAX;
volatile int32_t x1443 = -1;
uint32_t x1463 = 37U;
uint8_t x1464 = UINT8_MAX;


void f0(void) {
	int16_t x5 = INT16_MAX;
	uint32_t t0 = 4U;

	t0 = (x5-(x6<<(x7/x8)));

	if (t0 != 31895U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x26 = 7;
	static uint8_t x27 = 15U;
	uint32_t t1 = 45128U;

	t1 = (x25-(x26<<(x27/x28)));

	if (t1 != 7641495U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x29 = 14;
	static volatile uint32_t x30 = UINT32_MAX;
	int32_t x32 = INT32_MIN;
	static uint32_t t2 = 2661163U;

	t2 = (x29-(x30<<(x31/x32)));

	if (t2 != 15U) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x33 = -1;
	int32_t x36 = -78132;
	uint32_t t3 = 2953254U;

	t3 = (x33-(x34<<(x35/x36)));

	if (t3 != 4152261313U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x45 = INT16_MAX;
	uint8_t x46 = 2U;
	volatile uint8_t x47 = 1U;
	int16_t x48 = -3;
	static volatile int32_t t4 = -464;

	t4 = (x45-(x46<<(x47/x48)));

	if (t4 != 32765) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x51 = -1;
	volatile int16_t x52 = INT16_MAX;
	volatile uint64_t t5 = 1621831852853LLU;

	t5 = (x49-(x50<<(x51/x52)));

	if (t5 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x69 = UINT32_MAX;
	uint64_t x70 = 5997769364947953945LLU;
	int8_t x71 = INT8_MAX;
	static uint16_t x72 = 30001U;
	uint64_t t6 = 268662774944947151LLU;

	t6 = (x69-(x70<<(x71/x72)));

	if (t6 != 12448974713056564966LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x73 = 3333773497LLU;
	int8_t x74 = INT8_MAX;
	int32_t x75 = 381143;
	volatile uint64_t x76 = UINT64_MAX;
	volatile uint64_t t7 = 575271LLU;

	t7 = (x73-(x74<<(x75/x76)));

	if (t7 != 3333773370LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x89 = -1LL;
	volatile uint16_t x90 = UINT16_MAX;
	int64_t x91 = -1LL;
	uint32_t x92 = UINT32_MAX;
	static volatile int64_t t8 = -955024711LL;

	t8 = (x89-(x90<<(x91/x92)));

	if (t8 != -65536LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x113 = UINT64_MAX;
	volatile int64_t x114 = 3063779LL;
	int64_t x115 = -1LL;
	int32_t x116 = INT32_MAX;

	t9 = (x113-(x114<<(x115/x116)));

	if (t9 != 18446744073706487836LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x121 = 806272126U;
	int32_t x122 = 63;
	volatile uint64_t x123 = 21421LLU;
	volatile int8_t x124 = -1;
	uint32_t t10 = 19278334U;

	t10 = (x121-(x122<<(x123/x124)));

	if (t10 != 806272063U) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x175 = 465627738610890LLU;
	volatile int64_t x176 = -1LL;
	int64_t t11 = 2103171029238746747LL;

	t11 = (x173-(x174<<(x175/x176)));

	if (t11 != -168157LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x201 = 25U;
	static volatile int64_t x202 = INT64_MAX;
	volatile int8_t x203 = -1;
	int8_t x204 = INT8_MAX;
	int64_t t12 = -1284355608LL;

	t12 = (x201-(x202<<(x203/x204)));

	if (t12 != -9223372036854775782LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint32_t x205 = 675978836U;
	static volatile uint16_t x206 = UINT16_MAX;
	volatile uint32_t t13 = 1739845444U;

	t13 = (x205-(x206<<(x207/x208)));

	if (t13 != 675913301U) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x221 = UINT16_MAX;
	int32_t x222 = 40025;
	static volatile uint8_t x223 = 21U;
	int64_t x224 = -57619LL;
	static int32_t t14 = 194;

	t14 = (x221-(x222<<(x223/x224)));

	if (t14 != 25510) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x233 = INT8_MIN;
	volatile int8_t x234 = 0;
	volatile int16_t x235 = 0;
	int16_t x236 = INT16_MIN;
	volatile int32_t t15 = 31;

	t15 = (x233-(x234<<(x235/x236)));

	if (t15 != -128) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x245 = UINT32_MAX;
	volatile int16_t x246 = INT16_MAX;
	int64_t x247 = -1LL;
	int8_t x248 = -1;
	volatile uint32_t t16 = 291099093U;

	t16 = (x245-(x246<<(x247/x248)));

	if (t16 != 4294901761U) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x262 = 3U;
	volatile uint64_t t17 = 1792161LLU;

	t17 = (x261-(x262<<(x263/x264)));

	if (t17 != 53361233LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x281 = UINT32_MAX;
	static uint32_t x283 = 986335U;
	int8_t x284 = -1;
	volatile uint64_t t18 = 3724LLU;

	t18 = (x281-(x282<<(x283/x284)));

	if (t18 != 4294967288LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x298 = 19U;
	int8_t x299 = -22;
	int64_t x300 = -1LL;
	uint32_t t19 = 59089434U;

	t19 = (x297-(x298<<(x299/x300)));

	if (t19 != 4215275519U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x301 = UINT8_MAX;
	uint16_t x303 = UINT16_MAX;

	t20 = (x301-(x302<<(x303/x304)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x318 = UINT16_MAX;
	uint16_t x320 = 28U;
	static volatile uint32_t t21 = 51893U;

	t21 = (x317-(x318<<(x319/x320)));

	if (t21 != 4390357U) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x363 = 873U;
	uint8_t x364 = UINT8_MAX;
	volatile int32_t t22 = 56085;

	t22 = (x361-(x362<<(x363/x364)));

	if (t22 != -22508) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x365 = 1;
	static uint64_t x366 = 21018732LLU;
	int8_t x367 = INT8_MAX;
	uint64_t x368 = 5520080522473730522LLU;
	volatile uint64_t t23 = 247402480LLU;

	t23 = (x365-(x366<<(x367/x368)));

	if (t23 != 18446744073688532885LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x394 = UINT64_MAX;
	uint8_t x395 = 1U;
	volatile uint8_t x396 = 3U;
	static volatile uint64_t t24 = 408LLU;

	t24 = (x393-(x394<<(x395/x396)));

	if (t24 != 337LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x421 = INT16_MIN;
	volatile int16_t x422 = INT16_MAX;
	uint64_t x423 = UINT64_MAX;
	int32_t t25 = -22544660;

	t25 = (x421-(x422<<(x423/x424)));

	if (t25 != -98302) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x425 = 16778505;
	volatile int64_t x426 = 3856LL;
	int8_t x427 = -6;
	static int32_t x428 = -78217833;
	volatile int64_t t26 = 1930213878240971LL;

	t26 = (x425-(x426<<(x427/x428)));

	if (t26 != 16774649LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x437 = INT8_MAX;
	int32_t x438 = 8088208;
	static uint16_t x440 = 346U;
	volatile int32_t t27 = -63293769;

	t27 = (x437-(x438<<(x439/x440)));

	if (t27 != -8088081) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x445 = INT16_MAX;
	int8_t x446 = 1;
	int64_t x447 = 61LL;
	volatile uint16_t x448 = 44U;

	t28 = (x445-(x446<<(x447/x448)));

	if (t28 != 32765) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x469 = -26788777983859133LL;
	static volatile int8_t x470 = INT8_MAX;
	int32_t x471 = INT32_MIN;
	int64_t x472 = INT64_MIN;

	t29 = (x469-(x470<<(x471/x472)));

	if (t29 != -26788777983859260LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x473 = -1;
	static int64_t x475 = -1LL;
	int8_t x476 = -1;
	volatile int32_t t30 = 1683909;

	t30 = (x473-(x474<<(x475/x476)));

	if (t30 != -769) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x489 = 20LLU;
	int16_t x490 = 0;
	int16_t x491 = -9;
	uint64_t t31 = 183LLU;

	t31 = (x489-(x490<<(x491/x492)));

	if (t31 != 20LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x505 = INT8_MIN;
	uint64_t x506 = 20606LLU;
	int64_t x508 = INT64_MIN;
	volatile uint64_t t32 = 17334LLU;

	t32 = (x505-(x506<<(x507/x508)));

	if (t32 != 18446744073709530882LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x529 = 36076LL;
	volatile uint8_t x530 = 46U;
	int64_t x531 = INT64_MAX;
	uint64_t x532 = UINT64_MAX;
	static int64_t t33 = -2500601862107236LL;

	t33 = (x529-(x530<<(x531/x532)));

	if (t33 != 36030LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x545 = -1LL;
	int32_t x546 = INT32_MAX;
	uint32_t x548 = 124591878U;
	static int64_t t34 = 53880LL;

	t34 = (x545-(x546<<(x547/x548)));

	if (t34 != -2147483648LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x549 = 10971;
	uint8_t x550 = 119U;
	static int64_t x551 = INT64_MIN;
	uint64_t x552 = UINT64_MAX;
	int32_t t35 = 24;

	t35 = (x549-(x550<<(x551/x552)));

	if (t35 != 10852) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x553 = UINT8_MAX;
	volatile int8_t x554 = 1;
	volatile int32_t t36 = 59;

	t36 = (x553-(x554<<(x555/x556)));

	if (t36 != 254) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x561 = UINT32_MAX;
	uint16_t x562 = UINT16_MAX;
	int32_t x563 = INT32_MIN;
	uint32_t x564 = UINT32_MAX;

	t37 = (x561-(x562<<(x563/x564)));

	if (t37 != 4294901760U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x573 = INT8_MAX;
	volatile uint16_t x574 = 7U;
	int8_t x575 = INT8_MAX;
	int32_t x576 = -98782253;
	int32_t t38 = 0;

	t38 = (x573-(x574<<(x575/x576)));

	if (t38 != 120) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x597 = 30024005LLU;
	uint32_t x598 = 894720U;
	uint16_t x600 = 109U;

	t39 = (x597-(x598<<(x599/x600)));

	if (t39 != 28234565LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x617 = 92768246281972LLU;
	uint16_t x618 = UINT16_MAX;
	int16_t x619 = -1;
	volatile uint64_t t40 = 117744416854728LLU;

	t40 = (x617-(x618<<(x619/x620)));

	if (t40 != 92768246216437LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x621 = UINT8_MAX;
	static int32_t x623 = INT32_MIN;
	uint32_t x624 = UINT32_MAX;
	static volatile int32_t t41 = 7580949;

	t41 = (x621-(x622<<(x623/x624)));

	if (t41 != -2147483392) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x633 = UINT16_MAX;
	int32_t x634 = INT32_MAX;
	int8_t x635 = -1;
	int64_t x636 = INT64_MAX;
	static volatile int32_t t42 = 13;

	t42 = (x633-(x634<<(x635/x636)));

	if (t42 != -2147418112) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x645 = INT8_MAX;
	int64_t x648 = INT64_MIN;

	t43 = (x645-(x646<<(x647/x648)));

	if (t43 != -492891) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x669 = 5U;
	int8_t x670 = INT8_MAX;
	static int16_t x671 = -3;
	static uint16_t x672 = UINT16_MAX;
	static volatile int32_t t44 = 148656301;

	t44 = (x669-(x670<<(x671/x672)));

	if (t44 != -122) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x677 = INT8_MIN;
	uint8_t x678 = 0U;

	t45 = (x677-(x678<<(x679/x680)));

	if (t45 != -128) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x717 = 667;
	uint16_t x718 = 0U;
	int16_t x720 = -11;
	volatile int32_t t46 = 1682511;

	t46 = (x717-(x718<<(x719/x720)));

	if (t46 != 667) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x721 = INT32_MIN;
	volatile uint64_t x722 = UINT64_MAX;
	static uint32_t x723 = 7U;
	int16_t x724 = INT16_MIN;
	static volatile uint64_t t47 = 139336585LLU;

	t47 = (x721-(x722<<(x723/x724)));

	if (t47 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x781 = INT16_MIN;
	volatile uint32_t x784 = UINT32_MAX;
	volatile int32_t t48 = 0;

	t48 = (x781-(x782<<(x783/x784)));

	if (t48 != -32778) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x786 = 9007832410846LLU;
	int32_t x787 = INT32_MAX;
	volatile uint64_t t49 = 442LLU;

	t49 = (x785-(x786<<(x787/x788)));

	if (t49 != 18446735065877206305LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x825 = 682214796U;
	volatile int32_t x826 = INT32_MAX;
	int8_t x827 = INT8_MAX;

	t50 = (x825-(x826<<(x827/x828)));

	if (t50 != 2829698445U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x845 = INT8_MIN;
	uint64_t x846 = 2889490LLU;
	int32_t x847 = -1;
	static uint64_t t51 = 18118104576370LLU;

	t51 = (x845-(x846<<(x847/x848)));

	if (t51 != 18446744073703772508LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x849 = 62U;
	uint32_t t52 = 1756U;

	t52 = (x849-(x850<<(x851/x852)));

	if (t52 != 4294966064U) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x861 = 0U;
	int32_t x862 = 216516;
	uint64_t x863 = 25LLU;
	volatile uint64_t x864 = 58589714706781LLU;
	volatile uint32_t t53 = 2103839719U;

	t53 = (x861-(x862<<(x863/x864)));

	if (t53 != 4294750780U) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x865 = 53291U;
	int16_t x866 = INT16_MAX;
	static volatile int8_t x868 = -1;
	volatile uint32_t t54 = 349U;

	t54 = (x865-(x866<<(x867/x868)));

	if (t54 != 20524U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x869 = INT16_MAX;
	static uint32_t x870 = 477136581U;
	uint8_t x871 = 0U;
	uint32_t x872 = 5U;

	t55 = (x869-(x870<<(x871/x872)));

	if (t55 != 3817863482U) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x877 = 1U;
	int64_t x878 = 18344LL;
	volatile int64_t x879 = 1705212253481LL;
	volatile int64_t x880 = INT64_MIN;
	volatile int64_t t56 = 443160839LL;

	t56 = (x877-(x878<<(x879/x880)));

	if (t56 != -18343LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x881 = 222U;
	uint16_t x882 = 707U;
	int64_t x883 = -1LL;
	volatile uint32_t t57 = 2118U;

	t57 = (x881-(x882<<(x883/x884)));

	if (t57 != 4294966104U) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x897 = 13182550152LL;
	volatile uint16_t x898 = UINT16_MAX;
	static uint8_t x900 = UINT8_MAX;
	int64_t t58 = -50896749371LL;

	t58 = (x897-(x898<<(x899/x900)));

	if (t58 != 13182419082LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x913 = INT16_MIN;
	int32_t x914 = 1487;
	uint8_t x915 = 1U;

	t59 = (x913-(x914<<(x915/x916)));

	if (t59 != -34255) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x917 = 14U;
	uint8_t x918 = UINT8_MAX;
	int32_t x919 = -1;
	int16_t x920 = INT16_MAX;
	static volatile int32_t t60 = 9931;

	t60 = (x917-(x918<<(x919/x920)));

	if (t60 != -241) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x921 = 3U;
	int32_t x922 = INT32_MAX;
	uint16_t x924 = UINT16_MAX;
	int32_t t61 = 0;

	t61 = (x921-(x922<<(x923/x924)));

	if (t61 != -2147483644) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x949 = INT32_MAX;
	volatile int16_t x950 = INT16_MAX;
	uint16_t x951 = 13U;
	int8_t x952 = INT8_MIN;
	int32_t t62 = 13;

	t62 = (x949-(x950<<(x951/x952)));

	if (t62 != 2147450880) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x1025 = 2LLU;
	uint16_t x1027 = UINT16_MAX;

	t63 = (x1025-(x1026<<(x1027/x1028)));

	if (t63 != 18446744069414584323LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x1029 = 1;
	uint8_t x1030 = 3U;
	static int8_t x1031 = INT8_MIN;
	int16_t x1032 = INT16_MAX;
	int32_t t64 = -6420043;

	t64 = (x1029-(x1030<<(x1031/x1032)));

	if (t64 != -2) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x1037 = INT64_MAX;
	int16_t x1038 = INT16_MAX;
	volatile int8_t x1039 = INT8_MIN;
	volatile int64_t x1040 = INT64_MIN;

	t65 = (x1037-(x1038<<(x1039/x1040)));

	if (t65 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x1081 = INT8_MAX;
	uint16_t x1083 = 6U;
	int32_t x1084 = INT32_MIN;
	volatile int32_t t66 = -332644;

	t66 = (x1081-(x1082<<(x1083/x1084)));

	if (t66 != -65408) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x1091 = UINT16_MAX;
	int32_t x1092 = INT32_MIN;
	volatile int32_t t67 = 23532;

	t67 = (x1089-(x1090<<(x1091/x1092)));

	if (t67 != -63) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x1113 = 1993875411026LL;
	uint32_t x1115 = 462832514U;
	static int8_t x1116 = -1;
	volatile int64_t t68 = -662079342278967LL;

	t68 = (x1113-(x1114<<(x1115/x1116)));

	if (t68 != 1993875411024LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x1142 = 1;
	int8_t x1144 = INT8_MIN;

	t69 = (x1141-(x1142<<(x1143/x1144)));

	if (t69 != 253) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x1155 = INT8_MIN;
	volatile int64_t x1156 = 3931789383LL;
	static uint32_t t70 = 0U;

	t70 = (x1153-(x1154<<(x1155/x1156)));

	if (t70 != 6U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x1165 = 0;
	int16_t x1166 = 18;
	int16_t x1167 = INT16_MIN;
	int32_t x1168 = INT32_MIN;
	static int32_t t71 = 1878859;

	t71 = (x1165-(x1166<<(x1167/x1168)));

	if (t71 != -18) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int16_t x1185 = -6;
	int32_t x1186 = 0;
	static uint8_t x1187 = 93U;

	t72 = (x1185-(x1186<<(x1187/x1188)));

	if (t72 != -6) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x1205 = UINT8_MAX;
	uint8_t x1207 = UINT8_MAX;
	int32_t x1208 = INT32_MIN;
	volatile uint64_t t73 = 42330287273322LLU;

	t73 = (x1205-(x1206<<(x1207/x1208)));

	if (t73 != 18446731823065724710LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x1213 = INT32_MAX;
	static uint16_t x1214 = 0U;
	volatile int8_t x1215 = 57;
	volatile int32_t x1216 = -13357;
	int32_t t74 = INT32_MAX;

	t74 = (x1213-(x1214<<(x1215/x1216)));

	if (t74 != INT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x1229 = UINT32_MAX;
	uint64_t x1231 = 6436131004439022878LLU;
	int64_t t75 = -407667573899193LL;

	t75 = (x1229-(x1230<<(x1231/x1232)));

	if (t75 != 4294967295LL) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int16_t x1237 = 5110;
	int32_t x1238 = INT32_MAX;
	volatile int32_t x1239 = INT32_MIN;
	volatile int32_t t76 = 15031437;

	t76 = (x1237-(x1238<<(x1239/x1240)));

	if (t76 != -2147478537) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x1249 = INT8_MIN;
	uint8_t x1250 = UINT8_MAX;
	int16_t x1251 = INT16_MIN;
	int32_t x1252 = 894549;
	volatile int32_t t77 = -94164;

	t77 = (x1249-(x1250<<(x1251/x1252)));

	if (t77 != -383) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x1254 = 14U;
	volatile int64_t x1255 = INT64_MIN;
	int64_t x1256 = INT64_MIN;
	int32_t t78 = -170;

	t78 = (x1253-(x1254<<(x1255/x1256)));

	if (t78 != -156) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x1263 = -3;
	uint8_t x1264 = 18U;
	uint32_t t79 = 19778U;

	t79 = (x1261-(x1262<<(x1263/x1264)));

	if (t79 != 4267126866U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x1265 = -792308152368LL;
	uint16_t x1266 = 125U;
	static int8_t x1267 = -1;
	static int64_t t80 = 50721956065LL;

	t80 = (x1265-(x1266<<(x1267/x1268)));

	if (t80 != -792308152618LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x1269 = INT8_MIN;
	uint8_t x1270 = 1U;
	int8_t x1271 = 14;
	volatile int32_t t81 = -1;

	t81 = (x1269-(x1270<<(x1271/x1272)));

	if (t81 != -129) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x1281 = INT8_MIN;
	int64_t x1283 = -1LL;
	static int32_t t82 = -214651;

	t82 = (x1281-(x1282<<(x1283/x1284)));

	if (t82 != -128) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x1289 = 15U;
	static uint64_t x1290 = 284371501428LLU;
	int8_t x1292 = INT8_MIN;
	static uint64_t t83 = 795383411803LLU;

	t83 = (x1289-(x1290<<(x1291/x1292)));

	if (t83 != 18446743789338050203LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x1309 = 46U;
	uint64_t x1311 = 2160208768003841LLU;
	uint64_t x1312 = UINT64_MAX;
	volatile int32_t t84 = 1;

	t84 = (x1309-(x1310<<(x1311/x1312)));

	if (t84 != -209) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int16_t x1313 = 58;
	uint64_t x1314 = UINT64_MAX;
	volatile uint32_t x1316 = 944007384U;

	t85 = (x1313-(x1314<<(x1315/x1316)));

	if (t85 != 59LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x1325 = -1;
	static uint8_t x1326 = 77U;
	int32_t x1327 = 65700282;
	static uint32_t x1328 = UINT32_MAX;

	t86 = (x1325-(x1326<<(x1327/x1328)));

	if (t86 != -78) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x1333 = -1;
	static uint16_t x1334 = UINT16_MAX;
	int8_t x1335 = INT8_MIN;
	int16_t x1336 = INT16_MIN;
	int32_t t87 = -111197;

	t87 = (x1333-(x1334<<(x1335/x1336)));

	if (t87 != -65536) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x1345 = 147U;
	int32_t x1346 = 1;
	uint16_t x1347 = 92U;
	int64_t x1348 = 22025LL;
	int32_t t88 = 90597;

	t88 = (x1345-(x1346<<(x1347/x1348)));

	if (t88 != 146) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x1357 = UINT64_MAX;
	volatile int16_t x1358 = INT16_MAX;
	static uint64_t x1359 = 1925267936232766LLU;
	static int16_t x1360 = -1;
	static uint64_t t89 = 226841440LLU;

	t89 = (x1357-(x1358<<(x1359/x1360)));

	if (t89 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x1361 = INT32_MAX;
	static uint8_t x1363 = UINT8_MAX;
	volatile int16_t x1364 = INT16_MIN;

	t90 = (x1361-(x1362<<(x1363/x1364)));

	if (t90 != 2147483646) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x1373 = 79U;
	uint16_t x1374 = UINT16_MAX;
	volatile int32_t t91 = -48;

	t91 = (x1373-(x1374<<(x1375/x1376)));

	if (t91 != -65456) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x1405 = INT32_MIN;
	static uint64_t x1406 = UINT64_MAX;
	int8_t x1407 = -33;
	int32_t x1408 = INT32_MAX;
	volatile uint64_t t92 = 1048260LLU;

	t92 = (x1405-(x1406<<(x1407/x1408)));

	if (t92 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x1417 = UINT8_MAX;
	int64_t x1418 = INT64_MAX;
	uint8_t x1419 = UINT8_MAX;
	volatile uint32_t x1420 = UINT32_MAX;
	int64_t t93 = -603469179493437LL;

	t93 = (x1417-(x1418<<(x1419/x1420)));

	if (t93 != -9223372036854775552LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x1421 = -254647276;
	int64_t x1422 = 696206318LL;
	static int64_t x1423 = -1LL;
	volatile int64_t t94 = -3696678265888997570LL;

	t94 = (x1421-(x1422<<(x1423/x1424)));

	if (t94 != -950853594LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x1429 = -567767;
	int8_t x1430 = 0;
	int8_t x1431 = 9;
	volatile int32_t t95 = -71661648;

	t95 = (x1429-(x1430<<(x1431/x1432)));

	if (t95 != -567767) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x1441 = UINT32_MAX;
	uint32_t x1442 = 5119791U;
	int8_t x1444 = 28;
	volatile uint32_t t96 = 129248353U;

	t96 = (x1441-(x1442<<(x1443/x1444)));

	if (t96 != 4289847504U) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x1453 = 3U;
	uint64_t x1454 = 7106276035LLU;
	volatile int8_t x1455 = INT8_MAX;
	uint64_t x1456 = 32965958990394LLU;
	volatile uint64_t t97 = 353LLU;

	t97 = (x1453-(x1454<<(x1455/x1456)));

	if (t97 != 18446744066603275584LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x1461 = 5910472;
	static volatile int64_t x1462 = INT64_MAX;
	static int64_t t98 = -7760251LL;

	t98 = (x1461-(x1462<<(x1463/x1464)));

	if (t98 != -9223372036848865335LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x1469 = 940764645167LLU;
	static uint64_t x1470 = 198988639200326LLU;
	static int8_t x1471 = -1;
	int32_t x1472 = INT32_MIN;
	uint64_t t99 = 11147LLU;

	t99 = (x1469-(x1470<<(x1471/x1472)));

	if (t99 != 18446546025834996457LLU) { NG(); } else { ; }
	
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

