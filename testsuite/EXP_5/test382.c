#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x4 = INT64_MAX;
uint64_t t0 = 248345587864726704LLU;
int16_t x20 = -3;
volatile uint32_t t2 = 99057U;
int8_t x29 = -1;
static int16_t x30 = 7;
int32_t x49 = INT32_MIN;
volatile int16_t x138 = INT16_MIN;
static int16_t x140 = -1;
static uint64_t x167 = UINT64_MAX;
uint8_t x171 = 25U;
volatile uint32_t x186 = 1976114U;
uint16_t x187 = 14720U;
uint32_t x190 = UINT32_MAX;
int64_t t17 = -8254674LL;
int32_t x201 = 321;
volatile int8_t x203 = INT8_MIN;
static volatile uint16_t x207 = 16U;
static int8_t x215 = INT8_MAX;
uint8_t x222 = UINT8_MAX;
int64_t x223 = 2008472LL;
uint16_t x224 = 931U;
int16_t x239 = INT16_MIN;
volatile uint16_t x251 = 3734U;
static int8_t x255 = INT8_MAX;
int16_t x277 = -1;
static volatile int32_t t26 = 31165;
uint64_t x294 = UINT64_MAX;
volatile int64_t t28 = 4622LL;
int8_t x326 = -6;
int64_t t30 = 5606216448621113LL;
uint8_t x332 = 18U;
int64_t t32 = -1640066102702LL;
volatile int16_t x376 = -1;
static uint32_t x387 = UINT32_MAX;
int32_t t37 = 88021345;
int64_t x447 = 90536970339747LL;
volatile int64_t t42 = -384694LL;
volatile int64_t t44 = 17931804177762299LL;
static uint16_t x526 = 1U;
volatile int16_t x535 = INT16_MIN;
volatile int32_t x543 = -73;
uint32_t t49 = 9610U;
uint64_t x549 = 188LLU;
volatile int16_t x559 = INT16_MIN;
uint16_t x560 = 46U;
uint16_t x586 = 3007U;
int8_t x589 = 0;
uint64_t t54 = 34505053056295LLU;
int8_t x605 = -58;
int32_t x607 = INT32_MAX;
int16_t x610 = INT16_MAX;
int16_t x611 = -1;
volatile uint16_t x617 = 279U;
uint16_t x618 = UINT16_MAX;
uint32_t x622 = 847U;
uint8_t x623 = 3U;
volatile uint32_t t59 = 126639449U;
volatile int64_t t60 = 113699075966048114LL;
static int8_t x703 = 19;
int64_t t65 = -8LL;
static uint64_t x719 = 50386797950LLU;
volatile int64_t t70 = 53444426634375LL;
uint16_t x753 = UINT16_MAX;
int32_t x764 = -885;
int8_t x793 = INT8_MIN;
uint32_t x802 = 39958U;
int32_t x853 = -1;
uint8_t x858 = 20U;
int64_t t80 = -2192830819LL;
int64_t x883 = -1LL;
static int32_t x901 = -22123263;
int64_t x902 = INT64_MAX;
uint8_t x907 = 1U;
static int64_t x909 = INT64_MAX;
volatile int64_t t85 = -2662LL;
volatile int32_t x917 = -105611;
volatile uint32_t x922 = UINT32_MAX;
int32_t x924 = INT32_MIN;
static uint32_t t88 = 643228U;
int16_t x926 = 90;
static uint16_t x953 = 1U;
uint32_t x954 = UINT32_MAX;
volatile int32_t t91 = 1;
static volatile int64_t x979 = -1LL;
int32_t x992 = -1;
volatile uint8_t x1032 = 68U;
static uint32_t x1036 = 39U;
static uint64_t t99 = 327349438364466LLU;


void f0(void) {
	uint16_t x1 = 10744U;
	uint64_t x2 = 843LLU;
	int64_t x3 = INT64_MIN;

	t0 = (x1%((x2*x3)/x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x5 = 18U;
	volatile uint32_t x6 = 1212405590U;
	volatile uint8_t x7 = 78U;
	static int16_t x8 = 428;
	uint32_t t1 = 106U;

	t1 = (x5%((x6*x7)/x8));

	if (t1 != 18U) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x17 = 0U;
	uint8_t x18 = 3U;
	int8_t x19 = -1;

	t2 = (x17%((x18*x19)/x20));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x31 = UINT64_MAX;
	static int8_t x32 = 1;
	volatile uint64_t t3 = 8589126LLU;

	t3 = (x29%((x30*x31)/x32));

	if (t3 != 6LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x37 = -1;
	volatile int16_t x38 = -1;
	volatile int16_t x39 = INT16_MIN;
	uint8_t x40 = UINT8_MAX;
	static int32_t t4 = 10450313;

	t4 = (x37%((x38*x39)/x40));

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x50 = -33670547595LL;
	static int8_t x51 = -1;
	volatile uint8_t x52 = UINT8_MAX;
	int64_t t5 = 4LL;

	t5 = (x49%((x50*x51)/x52));

	if (t5 != -34821840LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x61 = INT64_MIN;
	uint8_t x62 = 88U;
	int16_t x63 = -2;
	static int8_t x64 = -31;
	volatile int64_t t6 = 10693556593079347LL;

	t6 = (x61%((x62*x63)/x64));

	if (t6 != -3LL) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint16_t x65 = 1U;
	static int8_t x66 = -1;
	int64_t x67 = INT64_MAX;
	static int32_t x68 = 15;
	int64_t t7 = 8211LL;

	t7 = (x65%((x66*x67)/x68));

	if (t7 != 1LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x89 = UINT16_MAX;
	int32_t x90 = -1;
	volatile uint16_t x91 = 98U;
	volatile int8_t x92 = -30;
	int32_t t8 = 282529;

	t8 = (x89%((x90*x91)/x92));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x113 = UINT64_MAX;
	static int16_t x114 = 2176;
	int8_t x115 = 3;
	int8_t x116 = 11;
	uint64_t t9 = 22867035523LLU;

	t9 = (x113%((x114*x115)/x116));

	if (t9 != 398LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x129 = INT16_MIN;
	static volatile uint32_t x130 = 480018U;
	int32_t x131 = -1;
	volatile int16_t x132 = INT16_MAX;
	uint32_t t10 = 301U;

	t10 = (x129%((x130*x131)/x132));

	if (t10 != 65558U) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int16_t x133 = INT16_MAX;
	int8_t x134 = 9;
	volatile int64_t x135 = 476979LL;
	uint64_t x136 = 1377251LLU;
	volatile uint64_t t11 = 10740538877912304LLU;

	t11 = (x133%((x134*x135)/x136));

	if (t11 != 1LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x137 = 0U;
	volatile uint16_t x139 = UINT16_MAX;
	uint32_t t12 = 54U;

	t12 = (x137%((x138*x139)/x140));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x149 = 1409U;
	static int16_t x150 = 790;
	uint32_t x151 = 8U;
	volatile int8_t x152 = INT8_MAX;
	volatile uint32_t t13 = 917085015U;

	t13 = (x149%((x150*x151)/x152));

	if (t13 != 37U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x165 = INT8_MIN;
	uint32_t x166 = 3168U;
	static volatile uint8_t x168 = UINT8_MAX;
	uint64_t t14 = 111950451772454LLU;

	t14 = (x165%((x166*x167)/x168));

	if (t14 != 3188LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x169 = -1;
	uint16_t x170 = UINT16_MAX;
	int64_t x172 = -1LL;
	volatile int64_t t15 = 7650053893694868LL;

	t15 = (x169%((x170*x171)/x172));

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x185 = INT32_MIN;
	int8_t x188 = INT8_MAX;
	volatile uint32_t t16 = 1U;

	t16 = (x185%((x186*x187)/x188));

	if (t16 != 4769282U) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x189 = -1469LL;
	static int64_t x191 = -1LL;
	int16_t x192 = 13361;

	t17 = (x189%((x190*x191)/x192));

	if (t17 != -1469LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x202 = -3;
	int16_t x204 = 185;
	volatile int32_t t18 = -302;

	t18 = (x201%((x202*x203)/x204));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x205 = -1LL;
	int16_t x206 = INT16_MIN;
	static int8_t x208 = INT8_MAX;
	volatile int64_t t19 = -45669400794838271LL;

	t19 = (x205%((x206*x207)/x208));

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x213 = 24U;
	volatile int16_t x214 = INT16_MIN;
	volatile int16_t x216 = -1006;
	static int32_t t20 = -45395;

	t20 = (x213%((x214*x215)/x216));

	if (t20 != 24) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x217 = 0;
	int16_t x218 = INT16_MIN;
	static volatile int64_t x219 = 17873398477LL;
	int16_t x220 = INT16_MAX;
	volatile int64_t t21 = -417635560018906LL;

	t21 = (x217%((x218*x219)/x220));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x221 = 19;
	int64_t t22 = 3LL;

	t22 = (x221%((x222*x223)/x224));

	if (t22 != 19LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x237 = INT16_MIN;
	int64_t x238 = 34135955131694LL;
	static int32_t x240 = -73;
	volatile int64_t t23 = -662060953336199LL;

	t23 = (x237%((x238*x239)/x240));

	if (t23 != -32768LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x249 = -31475463;
	volatile uint16_t x250 = 7U;
	volatile int64_t x252 = -1LL;
	int64_t t24 = 386618729427LL;

	t24 = (x249%((x250*x251)/x252));

	if (t24 != -5311LL) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int8_t x253 = -1;
	int8_t x254 = INT8_MIN;
	uint32_t x256 = 15376U;
	volatile uint32_t t25 = 1370889U;

	t25 = (x253%((x254*x255)/x256));

	if (t25 != 19967U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x278 = 1015U;
	volatile uint16_t x279 = 8178U;
	static volatile int32_t x280 = -35;

	t26 = (x277%((x278*x279)/x280));

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x293 = -1;
	static int64_t x295 = INT64_MIN;
	static int32_t x296 = 16;
	volatile uint64_t t27 = 283584117LLU;

	t27 = (x293%((x294*x295)/x296));

	if (t27 != 576460752303423487LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x309 = INT16_MIN;
	uint32_t x310 = UINT32_MAX;
	int64_t x311 = -1LL;
	static int32_t x312 = INT32_MIN;

	t28 = (x309%((x310*x311)/x312));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x317 = -14;
	volatile uint64_t x318 = 14895742681275084LLU;
	static uint8_t x319 = UINT8_MAX;
	static int8_t x320 = INT8_MAX;
	volatile uint64_t t29 = 2013299572310791LLU;

	t29 = (x317%((x318*x319)/x320));

	if (t29 != 22938873908841970LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x325 = INT64_MIN;
	static uint8_t x327 = 4U;
	uint16_t x328 = 2U;

	t30 = (x325%((x326*x327)/x328));

	if (t30 != -8LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x329 = -1;
	uint16_t x330 = 2220U;
	int64_t x331 = -1LL;
	int64_t t31 = 748001LL;

	t31 = (x329%((x330*x331)/x332));

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x345 = 54U;
	uint32_t x346 = 1022251U;
	int32_t x347 = -607;
	static int64_t x348 = -17LL;

	t32 = (x345%((x346*x347)/x348));

	if (t32 != 54LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x361 = UINT64_MAX;
	static uint16_t x362 = UINT16_MAX;
	uint64_t x363 = UINT64_MAX;
	uint8_t x364 = UINT8_MAX;
	static uint64_t t33 = 238LLU;

	t33 = (x361%((x362*x363)/x364));

	if (t33 != 65535LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x373 = -4706;
	volatile int64_t x374 = INT64_MAX;
	static int8_t x375 = 1;
	volatile int64_t t34 = -176516514499304615LL;

	t34 = (x373%((x374*x375)/x376));

	if (t34 != -4706LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x377 = -1;
	int64_t x378 = -1LL;
	int32_t x379 = INT32_MIN;
	uint16_t x380 = UINT16_MAX;
	static int64_t t35 = -14707LL;

	t35 = (x377%((x378*x379)/x380));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x385 = 26U;
	static int32_t x386 = INT32_MAX;
	volatile int16_t x388 = INT16_MAX;
	volatile uint32_t t36 = 120233U;

	t36 = (x385%((x386*x387)/x388));

	if (t36 != 26U) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x409 = 1U;
	static int8_t x410 = INT8_MIN;
	int16_t x411 = INT16_MIN;
	static int16_t x412 = INT16_MIN;

	t37 = (x409%((x410*x411)/x412));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x413 = 44;
	int8_t x414 = INT8_MAX;
	static uint8_t x415 = 2U;
	static volatile uint8_t x416 = 16U;
	volatile int32_t t38 = 1;

	t38 = (x413%((x414*x415)/x416));

	if (t38 != 14) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x417 = UINT32_MAX;
	volatile uint64_t x418 = 216849209521LLU;
	int64_t x419 = -1LL;
	uint8_t x420 = UINT8_MAX;
	static volatile uint64_t t39 = 67LLU;

	t39 = (x417%((x418*x419)/x420));

	if (t39 != 4294967295LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x425 = 43U;
	volatile uint64_t x426 = 5LLU;
	volatile uint64_t x427 = UINT64_MAX;
	uint32_t x428 = 2625357U;
	uint64_t t40 = 14165326695LLU;

	t40 = (x425%((x426*x427)/x428));

	if (t40 != 43LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x445 = -1;
	int8_t x446 = -1;
	int8_t x448 = INT8_MIN;
	int64_t t41 = 2LL;

	t41 = (x445%((x446*x447)/x448));

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x465 = 409091U;
	int16_t x466 = INT16_MIN;
	int64_t x467 = -18862788311419LL;
	int16_t x468 = -1;

	t42 = (x465%((x466*x467)/x468));

	if (t42 != 409091LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x489 = -31;
	int8_t x490 = INT8_MIN;
	uint16_t x491 = 8U;
	int8_t x492 = -19;
	int32_t t43 = 1;

	t43 = (x489%((x490*x491)/x492));

	if (t43 != -31) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x493 = 30U;
	volatile int64_t x494 = 17177214148026432LL;
	int16_t x495 = 21;
	static int32_t x496 = -4567830;

	t44 = (x493%((x494*x495)/x496));

	if (t44 != 30LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x505 = UINT16_MAX;
	int64_t x506 = 1029139026047392LL;
	uint8_t x507 = 1U;
	int16_t x508 = 66;
	volatile int64_t t45 = -1175678030797947494LL;

	t45 = (x505%((x506*x507)/x508));

	if (t45 != 65535LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x509 = 984180169LLU;
	int64_t x510 = 198429416LL;
	volatile int16_t x511 = -14;
	uint8_t x512 = UINT8_MAX;
	uint64_t t46 = 8049910LLU;

	t46 = (x509%((x510*x511)/x512));

	if (t46 != 984180169LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x525 = UINT64_MAX;
	int64_t x527 = INT64_MAX;
	uint16_t x528 = UINT16_MAX;
	uint64_t t47 = 0LLU;

	t47 = (x525%((x526*x527)/x528));

	if (t47 != 65535LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x533 = UINT64_MAX;
	uint32_t x534 = UINT32_MAX;
	uint8_t x536 = 119U;
	volatile uint64_t t48 = 28LLU;

	t48 = (x533%((x534*x535)/x536));

	if (t48 != 15LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x541 = INT8_MIN;
	int8_t x542 = INT8_MIN;
	volatile uint32_t x544 = 5000U;

	t49 = (x541%((x542*x543)/x544));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x550 = INT8_MIN;
	uint64_t x551 = 45942203727425LLU;
	uint32_t x552 = UINT32_MAX;
	static volatile uint64_t t50 = 23LLU;

	t50 = (x549%((x550*x551)/x552));

	if (t50 != 188LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x557 = 751U;
	uint32_t x558 = UINT32_MAX;
	static volatile uint32_t t51 = 195514U;

	t51 = (x557%((x558*x559)/x560));

	if (t51 != 39U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x585 = -2;
	static volatile int8_t x587 = -1;
	int8_t x588 = INT8_MIN;
	static int32_t t52 = -521;

	t52 = (x585%((x586*x587)/x588));

	if (t52 != -2) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x590 = 60U;
	volatile int64_t x591 = 59901417LL;
	static int64_t x592 = -102858131LL;
	volatile int64_t t53 = -25LL;

	t53 = (x589%((x590*x591)/x592));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x597 = -1;
	int32_t x598 = 9844;
	static volatile uint64_t x599 = UINT64_MAX;
	int32_t x600 = INT32_MAX;

	t54 = (x597%((x598*x599)/x600));

	if (t54 != 2147483650LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x601 = 1149LLU;
	int32_t x602 = INT32_MAX;
	static volatile int16_t x603 = -1;
	static int8_t x604 = -36;
	volatile uint64_t t55 = 25554LLU;

	t55 = (x601%((x602*x603)/x604));

	if (t55 != 1149LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x606 = -3LL;
	int16_t x608 = INT16_MAX;
	volatile int64_t t56 = 13580372928LL;

	t56 = (x605%((x606*x607)/x608));

	if (t56 != -58LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x609 = UINT32_MAX;
	uint8_t x612 = 31U;
	static uint32_t t57 = 262U;

	t57 = (x609%((x610*x611)/x612));

	if (t57 != 1056U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x619 = INT16_MIN;
	uint64_t x620 = 423965980073LLU;
	volatile uint64_t t58 = 1765842923940537552LLU;

	t58 = (x617%((x618*x619)/x620));

	if (t58 != 279LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x621 = -1580364;
	static volatile uint16_t x624 = 6U;

	t59 = (x621%((x622*x623)/x624));

	if (t59 != 382U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x625 = INT64_MIN;
	uint8_t x626 = UINT8_MAX;
	int16_t x627 = -1;
	static int32_t x628 = -1;

	t60 = (x625%((x626*x627)/x628));

	if (t60 != -128LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x633 = -4;
	uint64_t x634 = 440323052515028695LLU;
	int64_t x635 = 74197969202461623LL;
	uint16_t x636 = 3450U;
	uint64_t t61 = 421413LLU;

	t61 = (x633%((x634*x635)/x636));

	if (t61 != 1390161802875332LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x641 = 29LLU;
	volatile int16_t x642 = INT16_MAX;
	uint32_t x643 = UINT32_MAX;
	static int8_t x644 = INT8_MAX;
	uint64_t t62 = 27606LLU;

	t62 = (x641%((x642*x643)/x644));

	if (t62 != 29LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x681 = INT8_MIN;
	int8_t x682 = INT8_MIN;
	uint64_t x683 = 104952403821276LLU;
	uint8_t x684 = UINT8_MAX;
	uint64_t t63 = 82LLU;

	t63 = (x681%((x682*x683)/x684));

	if (t63 != 13433907689123318LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x689 = INT64_MAX;
	int64_t x690 = -1LL;
	static int32_t x691 = 52960;
	int16_t x692 = INT16_MAX;
	int64_t t64 = -804LL;

	t64 = (x689%((x690*x691)/x692));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x701 = 5968;
	static int16_t x702 = INT16_MIN;
	int64_t x704 = -1LL;

	t65 = (x701%((x702*x703)/x704));

	if (t65 != 5968LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x713 = INT64_MIN;
	int64_t x714 = INT64_MIN;
	static uint64_t x715 = 408507562554697LLU;
	int16_t x716 = 245;
	volatile uint64_t t66 = 437LLU;

	t66 = (x713%((x714*x715)/x716));

	if (t66 != 148LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x717 = INT32_MIN;
	int16_t x718 = INT16_MIN;
	volatile int32_t x720 = INT32_MAX;
	uint64_t t67 = 9LLU;

	t67 = (x717%((x718*x719)/x720));

	if (t67 != 3909248972LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x721 = INT32_MIN;
	int32_t x722 = -1;
	int8_t x723 = 24;
	int16_t x724 = 1;
	volatile int32_t t68 = 13;

	t68 = (x721%((x722*x723)/x724));

	if (t68 != -8) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x725 = UINT8_MAX;
	volatile int32_t x726 = -59690;
	uint32_t x727 = UINT32_MAX;
	uint32_t x728 = 1021U;
	volatile uint32_t t69 = 117686U;

	t69 = (x725%((x726*x727)/x728));

	if (t69 != 23U) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x729 = INT64_MIN;
	volatile uint32_t x730 = 101790266U;
	int32_t x731 = -119854981;
	int8_t x732 = INT8_MAX;

	t70 = (x729%((x730*x731)/x732));

	if (t70 != -18295766LL) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint32_t x733 = 4951151U;
	uint8_t x734 = 28U;
	static int8_t x735 = 24;
	int16_t x736 = -1;
	uint32_t t71 = 743757U;

	t71 = (x733%((x734*x735)/x736));

	if (t71 != 4951151U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x754 = -1;
	volatile uint64_t x755 = 204847LLU;
	uint16_t x756 = UINT16_MAX;
	static volatile uint64_t t72 = 24903099142584432LLU;

	t72 = (x753%((x754*x755)/x756));

	if (t72 != 65535LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x761 = -9;
	static volatile int32_t x762 = -1;
	static int32_t x763 = INT32_MAX;
	int32_t t73 = -2319;

	t73 = (x761%((x762*x763)/x764));

	if (t73 != -9) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int8_t x781 = 12;
	uint8_t x782 = 30U;
	int16_t x783 = INT16_MAX;
	int8_t x784 = INT8_MIN;
	int32_t t74 = 353;

	t74 = (x781%((x782*x783)/x784));

	if (t74 != 12) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x794 = INT8_MAX;
	int8_t x795 = INT8_MIN;
	int8_t x796 = -23;
	volatile int32_t t75 = 2;

	t75 = (x793%((x794*x795)/x796));

	if (t75 != -128) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x801 = UINT8_MAX;
	static int32_t x803 = -1;
	uint8_t x804 = 14U;
	volatile uint32_t t76 = 244988U;

	t76 = (x801%((x802*x803)/x804));

	if (t76 != 255U) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x849 = UINT8_MAX;
	static volatile int16_t x850 = INT16_MIN;
	uint16_t x851 = 3875U;
	uint16_t x852 = 1743U;
	volatile int32_t t77 = 1300214;

	t77 = (x849%((x850*x851)/x852));

	if (t77 != 255) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x854 = 18U;
	volatile int8_t x855 = INT8_MIN;
	int8_t x856 = INT8_MAX;
	int32_t t78 = -13;

	t78 = (x853%((x854*x855)/x856));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x857 = 108;
	uint32_t x859 = 4975U;
	uint16_t x860 = UINT16_MAX;
	uint32_t t79 = 1939U;

	t79 = (x857%((x858*x859)/x860));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x877 = INT64_MIN;
	int16_t x878 = INT16_MIN;
	volatile int16_t x879 = INT16_MAX;
	int32_t x880 = -122;

	t80 = (x877%((x878*x879)/x880));

	if (t80 != -5226146LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x881 = INT64_MIN;
	int64_t x882 = -1LL;
	int8_t x884 = -1;
	int64_t t81 = 181535645715117190LL;

	t81 = (x881%((x882*x883)/x884));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x893 = 2U;
	uint8_t x894 = 1U;
	int32_t x895 = -955447;
	volatile int32_t x896 = -1;
	volatile int32_t t82 = -251250;

	t82 = (x893%((x894*x895)/x896));

	if (t82 != 2) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x903 = -1LL;
	int8_t x904 = -1;
	int64_t t83 = -522830160LL;

	t83 = (x901%((x902*x903)/x904));

	if (t83 != -22123263LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x905 = INT8_MIN;
	int64_t x906 = INT64_MAX;
	int16_t x908 = INT16_MIN;
	int64_t t84 = 407763930LL;

	t84 = (x905%((x906*x907)/x908));

	if (t84 != -128LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x910 = 1;
	uint8_t x911 = UINT8_MAX;
	int64_t x912 = -1LL;

	t85 = (x909%((x910*x911)/x912));

	if (t85 != 127LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x913 = -1;
	static uint64_t x914 = 99662976LLU;
	static int64_t x915 = -1LL;
	int32_t x916 = INT32_MAX;
	volatile uint64_t t86 = 62573542897LLU;

	t86 = (x913%((x914*x915)/x916));

	if (t86 != 2147483650LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x918 = UINT8_MAX;
	int8_t x919 = INT8_MIN;
	volatile uint8_t x920 = UINT8_MAX;
	volatile int32_t t87 = -613849443;

	t87 = (x917%((x918*x919)/x920));

	if (t87 != -11) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x921 = 4780U;
	uint16_t x923 = UINT16_MAX;

	t88 = (x921%((x922*x923)/x924));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x925 = 231189U;
	uint64_t x927 = UINT64_MAX;
	uint16_t x928 = 111U;
	uint64_t t89 = 126627791980LLU;

	t89 = (x925%((x926*x927)/x928));

	if (t89 != 231189LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x955 = 2;
	uint8_t x956 = 5U;
	static volatile uint32_t t90 = 9U;

	t90 = (x953%((x954*x955)/x956));

	if (t90 != 1U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x957 = -10;
	int8_t x958 = -1;
	int16_t x959 = 1;
	static int8_t x960 = -1;

	t91 = (x957%((x958*x959)/x960));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x977 = 863220046U;
	static volatile uint8_t x978 = UINT8_MAX;
	volatile uint16_t x980 = 241U;
	int64_t t92 = 1LL;

	t92 = (x977%((x978*x979)/x980));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int8_t x989 = -1;
	static int8_t x990 = 19;
	volatile int64_t x991 = 103355LL;
	int64_t t93 = 45672LL;

	t93 = (x989%((x990*x991)/x992));

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x993 = INT8_MAX;
	static volatile int8_t x994 = INT8_MIN;
	uint64_t x995 = 160951979330532730LLU;
	int8_t x996 = 5;
	uint64_t t94 = 1614056180150224LLU;

	t94 = (x993%((x994*x995)/x996));

	if (t94 != 127LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x1001 = UINT16_MAX;
	volatile int64_t x1002 = 492811LL;
	int32_t x1003 = -1;
	int16_t x1004 = INT16_MAX;
	static volatile int64_t t95 = 4LL;

	t95 = (x1001%((x1002*x1003)/x1004));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x1013 = -1LL;
	static volatile int16_t x1014 = -1;
	uint64_t x1015 = 10903LLU;
	uint16_t x1016 = 98U;
	uint64_t t96 = 53LLU;

	t96 = (x1013%((x1014*x1015)/x1016));

	if (t96 != 10977LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x1029 = -204665;
	uint64_t x1030 = 2146191467025LLU;
	volatile uint64_t x1031 = UINT64_MAX;
	volatile uint64_t t97 = 543577382LLU;

	t97 = (x1029%((x1030*x1031)/x1032));

	if (t97 != 2146191262415LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x1033 = INT32_MIN;
	uint64_t x1034 = UINT64_MAX;
	static uint64_t x1035 = 231547050871LLU;
	static uint64_t t98 = 551LLU;

	t98 = (x1033%((x1034*x1035)/x1036));

	if (t98 != 229399567259LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x1049 = 126U;
	static uint8_t x1050 = 15U;
	uint64_t x1051 = 71LLU;
	uint8_t x1052 = UINT8_MAX;

	t99 = (x1049%((x1050*x1051)/x1052));

	if (t99 != 2LLU) { NG(); } else { ; }
	
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

