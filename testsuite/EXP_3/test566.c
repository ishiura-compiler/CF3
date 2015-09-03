#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = INT8_MIN;
int8_t x6 = INT8_MIN;
int16_t x19 = -1;
int64_t x25 = INT64_MAX;
int8_t x27 = -1;
uint32_t x37 = 29682477U;
int16_t x43 = -2964;
uint32_t t5 = 15U;
int32_t x53 = 0;
uint64_t x73 = 449615715835LLU;
uint64_t t8 = 10213446664299LLU;
int64_t x88 = INT64_MIN;
static int16_t x106 = -1;
volatile int64_t x107 = INT64_MIN;
static int8_t x113 = INT8_MIN;
volatile int16_t x114 = 2;
int64_t x116 = INT64_MIN;
int16_t x121 = 32;
uint16_t x138 = 3781U;
int64_t x144 = INT64_MAX;
volatile int16_t x147 = INT16_MIN;
static int64_t t17 = -220865865LL;
uint32_t x177 = UINT32_MAX;
int64_t x182 = -1LL;
uint32_t x213 = 117U;
int8_t x214 = INT8_MIN;
int16_t x217 = INT16_MAX;
static volatile uint32_t x220 = UINT32_MAX;
uint32_t x225 = UINT32_MAX;
uint64_t x230 = 284LLU;
volatile int64_t t28 = 2893425835480LL;
static int32_t x277 = -1;
uint8_t x295 = 2U;
static uint32_t x301 = 892U;
volatile uint32_t t33 = 64997U;
static int32_t t34 = 217;
uint16_t x363 = UINT16_MAX;
static uint16_t x365 = 2226U;
uint8_t x368 = UINT8_MAX;
uint16_t x376 = UINT16_MAX;
uint16_t x419 = 0U;
int8_t x420 = INT8_MIN;
int64_t t39 = -1467380442991LL;
uint8_t x439 = 2U;
static int16_t x445 = -1;
int8_t x454 = INT8_MIN;
int64_t x479 = -3448LL;
int8_t x483 = INT8_MIN;
int64_t x484 = INT64_MAX;
int16_t x516 = INT16_MIN;
static volatile int64_t t50 = 163LL;
uint32_t t52 = 860U;
uint32_t x555 = UINT32_MAX;
int64_t x586 = -1LL;
int8_t x595 = 2;
static int32_t x635 = -18;
static uint8_t x636 = UINT8_MAX;
static volatile uint16_t x653 = UINT16_MAX;
uint32_t x668 = UINT32_MAX;
int8_t x677 = -1;
volatile int64_t t63 = 5890494157LL;
int64_t x748 = INT64_MAX;
static volatile uint64_t t66 = 990594683531301LLU;
uint32_t x762 = UINT32_MAX;
static volatile uint32_t t69 = 248201U;
uint64_t x771 = UINT64_MAX;
volatile uint64_t x772 = UINT64_MAX;
int16_t x780 = INT16_MIN;
int64_t x807 = -1LL;
volatile int32_t x808 = INT32_MIN;
int32_t x810 = -1377;
uint8_t x811 = 3U;
static uint8_t x812 = 15U;
volatile int32_t t75 = 338766;
int32_t x834 = -1681516;
uint8_t x845 = 101U;
volatile int16_t x847 = INT16_MIN;
static volatile uint32_t t79 = 94844556U;
static uint8_t x855 = 0U;
uint16_t x879 = 474U;
int32_t x880 = INT32_MIN;
uint32_t x886 = UINT32_MAX;
static uint32_t x888 = 1633574U;
int32_t x903 = INT32_MAX;
int8_t x914 = INT8_MIN;
volatile int8_t x929 = INT8_MIN;
int64_t x933 = INT64_MIN;
volatile int16_t x934 = -1;
static int32_t x935 = INT32_MAX;
static int64_t t89 = -40LL;
int16_t x977 = INT16_MAX;
int32_t x979 = -32;
static volatile int64_t t92 = 33296020310LL;
int8_t x1036 = INT8_MAX;
volatile int8_t x1042 = -1;
uint64_t x1043 = 5784982548525LLU;
volatile int32_t t95 = -12096727;
uint64_t x1047 = 8871630481098836759LLU;
int32_t x1063 = 5;
volatile int32_t t99 = -8951565;


void f0(void) {
	int8_t x7 = 1;
	int32_t x8 = INT32_MIN;
	static volatile int32_t t0 = 346953;

	t0 = ((x5%x6)>>(x7/x8));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint16_t x9 = 348U;
	uint32_t x10 = 39U;
	int32_t x11 = INT32_MAX;
	uint64_t x12 = 426671844461562LLU;
	uint32_t t1 = 445075U;

	t1 = ((x9%x10)>>(x11/x12));

	if (t1 != 36U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x17 = 1;
	static int64_t x18 = INT64_MIN;
	int32_t x20 = INT32_MAX;
	int64_t t2 = 244925LL;

	t2 = ((x17%x18)>>(x19/x20));

	if (t2 != 1LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x26 = -1;
	static int32_t x28 = -1;
	int64_t t3 = 1352593LL;

	t3 = ((x25%x26)>>(x27/x28));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x38 = -8252269LL;
	static int16_t x39 = 71;
	uint16_t x40 = 12U;
	int64_t t4 = -199835595LL;

	t4 = ((x37%x38)>>(x39/x40));

	if (t4 != 153927LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint32_t x41 = 44278U;
	int32_t x42 = INT32_MIN;
	static int64_t x44 = 2323512142848LL;

	t5 = ((x41%x42)>>(x43/x44));

	if (t5 != 44278U) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int32_t x54 = -1;
	volatile int64_t x55 = -3LL;
	int32_t x56 = -1;
	volatile int32_t t6 = 117913;

	t6 = ((x53%x54)>>(x55/x56));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x69 = INT16_MIN;
	int8_t x70 = -1;
	int32_t x71 = 0;
	volatile int32_t x72 = INT32_MAX;
	volatile int32_t t7 = -3922;

	t7 = ((x69%x70)>>(x71/x72));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x74 = INT64_MAX;
	volatile int8_t x75 = INT8_MIN;
	int8_t x76 = INT8_MIN;

	t8 = ((x73%x74)>>(x75/x76));

	if (t8 != 224807857917LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x85 = 9U;
	uint8_t x86 = UINT8_MAX;
	int8_t x87 = -47;
	volatile int32_t t9 = -3;

	t9 = ((x85%x86)>>(x87/x88));

	if (t9 != 9) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x97 = UINT32_MAX;
	uint64_t x98 = 502458LLU;
	int8_t x99 = 13;
	uint16_t x100 = 1464U;
	volatile uint64_t t10 = 62550331547LLU;

	t10 = ((x97%x98)>>(x99/x100));

	if (t10 != 458769LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x105 = 573366724;
	int64_t x108 = INT64_MIN;
	volatile int32_t t11 = -17866486;

	t11 = ((x105%x106)>>(x107/x108));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x115 = -1LL;
	int32_t t12 = -11348;

	t12 = ((x113%x114)>>(x115/x116));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x122 = INT32_MAX;
	volatile uint64_t x123 = 57811443LLU;
	int32_t x124 = -400367126;
	int32_t t13 = -12043054;

	t13 = ((x121%x122)>>(x123/x124));

	if (t13 != 32) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x137 = 231735921467472418LLU;
	static volatile int8_t x139 = -1;
	int32_t x140 = INT32_MAX;
	volatile uint64_t t14 = 2037280022LLU;

	t14 = ((x137%x138)>>(x139/x140));

	if (t14 != 1806LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x141 = 2760U;
	int8_t x142 = -24;
	volatile int32_t x143 = INT32_MIN;
	int32_t t15 = 410733;

	t15 = ((x141%x142)>>(x143/x144));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x145 = 195604368657842LL;
	int8_t x146 = INT8_MIN;
	int64_t x148 = 2857834145497858875LL;
	volatile int64_t t16 = -168403649973LL;

	t16 = ((x145%x146)>>(x147/x148));

	if (t16 != 50LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x149 = 0;
	int64_t x150 = INT64_MAX;
	int8_t x151 = -1;
	uint8_t x152 = 17U;

	t17 = ((x149%x150)>>(x151/x152));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x157 = 111U;
	volatile uint8_t x158 = 3U;
	uint16_t x159 = 3517U;
	uint16_t x160 = 360U;
	volatile int32_t t18 = -4;

	t18 = ((x157%x158)>>(x159/x160));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x165 = INT8_MIN;
	int64_t x166 = -1LL;
	uint64_t x167 = 0LLU;
	volatile int32_t x168 = INT32_MIN;
	volatile int64_t t19 = 3014525639LL;

	t19 = ((x165%x166)>>(x167/x168));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x178 = 406094U;
	static volatile int16_t x179 = INT16_MAX;
	volatile int16_t x180 = INT16_MIN;
	uint32_t t20 = 28U;

	t20 = ((x177%x178)>>(x179/x180));

	if (t20 != 117151U) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x181 = 4U;
	int8_t x183 = 2;
	static uint8_t x184 = UINT8_MAX;
	int64_t t21 = -69LL;

	t21 = ((x181%x182)>>(x183/x184));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x209 = INT32_MAX;
	static int32_t x210 = INT32_MAX;
	int32_t x211 = -1;
	int16_t x212 = INT16_MAX;
	volatile int32_t t22 = -55022;

	t22 = ((x209%x210)>>(x211/x212));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x215 = INT32_MAX;
	int64_t x216 = INT64_MIN;
	volatile uint32_t t23 = 20203518U;

	t23 = ((x213%x214)>>(x215/x216));

	if (t23 != 117U) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x218 = 33463682581027181LL;
	int16_t x219 = -190;
	static volatile int64_t t24 = 744966947958LL;

	t24 = ((x217%x218)>>(x219/x220));

	if (t24 != 32767LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x226 = INT64_MAX;
	volatile uint64_t x227 = UINT64_MAX;
	int64_t x228 = INT64_MIN;
	volatile int64_t t25 = 16261987618690LL;

	t25 = ((x225%x226)>>(x227/x228));

	if (t25 != 2147483647LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x229 = -335113709LL;
	int16_t x231 = 61;
	int8_t x232 = INT8_MIN;
	static volatile uint64_t t26 = 562LLU;

	t26 = ((x229%x230)>>(x231/x232));

	if (t26 != 195LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x261 = 31056863U;
	static int16_t x262 = INT16_MIN;
	int8_t x263 = INT8_MIN;
	static uint32_t x264 = UINT32_MAX;
	volatile uint32_t t27 = 6U;

	t27 = ((x261%x262)>>(x263/x264));

	if (t27 != 31056863U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x269 = INT64_MAX;
	uint16_t x270 = 1206U;
	static volatile int32_t x271 = -6;
	volatile int8_t x272 = INT8_MIN;

	t28 = ((x269%x270)>>(x271/x272));

	if (t28 != 979LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x278 = -1;
	uint64_t x279 = UINT64_MAX;
	int64_t x280 = -1LL;
	volatile int32_t t29 = 763215;

	t29 = ((x277%x278)>>(x279/x280));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x289 = -1;
	volatile uint32_t x290 = 98731U;
	int8_t x291 = -1;
	int8_t x292 = 25;
	static uint32_t t30 = 339697879U;

	t30 = ((x289%x290)>>(x291/x292));

	if (t30 != 70064U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x293 = INT16_MIN;
	static int16_t x294 = -1;
	int8_t x296 = INT8_MIN;
	static int32_t t31 = -3519789;

	t31 = ((x293%x294)>>(x295/x296));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x302 = 25043U;
	int16_t x303 = 851;
	static uint16_t x304 = 1509U;
	volatile uint32_t t32 = 1218U;

	t32 = ((x301%x302)>>(x303/x304));

	if (t32 != 892U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x321 = INT32_MAX;
	uint32_t x322 = 1555U;
	int32_t x323 = 14;
	int16_t x324 = INT16_MIN;

	t33 = ((x321%x322)>>(x323/x324));

	if (t33 != 657U) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x325 = 22;
	uint16_t x326 = UINT16_MAX;
	int64_t x327 = -1LL;
	static uint8_t x328 = UINT8_MAX;

	t34 = ((x325%x326)>>(x327/x328));

	if (t34 != 22) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x345 = INT32_MAX;
	uint8_t x346 = 6U;
	uint64_t x347 = 38333517233930LLU;
	static int16_t x348 = INT16_MIN;
	int32_t t35 = -19;

	t35 = ((x345%x346)>>(x347/x348));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x361 = 57U;
	uint32_t x362 = 1906U;
	int16_t x364 = INT16_MAX;
	volatile uint32_t t36 = 1849U;

	t36 = ((x361%x362)>>(x363/x364));

	if (t36 != 14U) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x366 = 820U;
	static uint8_t x367 = 13U;
	volatile int32_t t37 = 20620;

	t37 = ((x365%x366)>>(x367/x368));

	if (t37 != 586) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x373 = UINT32_MAX;
	int16_t x374 = -1298;
	static int16_t x375 = INT16_MAX;
	uint32_t t38 = 48251529U;

	t38 = ((x373%x374)>>(x375/x376));

	if (t38 != 1297U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x417 = INT64_MIN;
	int64_t x418 = INT64_MIN;

	t39 = ((x417%x418)>>(x419/x420));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x421 = INT32_MIN;
	int16_t x422 = -1;
	int16_t x423 = INT16_MIN;
	uint64_t x424 = UINT64_MAX;
	volatile int32_t t40 = -46607887;

	t40 = ((x421%x422)>>(x423/x424));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x425 = -74;
	uint32_t x426 = UINT32_MAX;
	int8_t x427 = INT8_MIN;
	volatile int32_t x428 = INT32_MIN;
	static uint32_t t41 = 45U;

	t41 = ((x425%x426)>>(x427/x428));

	if (t41 != 4294967222U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x437 = INT32_MAX;
	uint32_t x438 = UINT32_MAX;
	int32_t x440 = -69;
	volatile uint32_t t42 = 921U;

	t42 = ((x437%x438)>>(x439/x440));

	if (t42 != 2147483647U) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x446 = -1;
	int8_t x447 = 10;
	int64_t x448 = -1007LL;
	static int32_t t43 = -54;

	t43 = ((x445%x446)>>(x447/x448));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x453 = INT8_MIN;
	static int32_t x455 = -1;
	int16_t x456 = INT16_MIN;
	int32_t t44 = -2970433;

	t44 = ((x453%x454)>>(x455/x456));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x473 = INT64_MAX;
	static uint32_t x474 = UINT32_MAX;
	uint16_t x475 = UINT16_MAX;
	volatile int32_t x476 = INT32_MIN;
	volatile int64_t t45 = -3745704LL;

	t45 = ((x473%x474)>>(x475/x476));

	if (t45 != 2147483647LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x477 = 12081218;
	int32_t x478 = -1;
	uint32_t x480 = 32291606U;
	int32_t t46 = 1;

	t46 = ((x477%x478)>>(x479/x480));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x481 = INT16_MIN;
	uint16_t x482 = 2U;
	volatile int32_t t47 = -5;

	t47 = ((x481%x482)>>(x483/x484));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x513 = -1;
	static int32_t x514 = -1;
	static volatile int8_t x515 = INT8_MIN;
	volatile int32_t t48 = 61032;

	t48 = ((x513%x514)>>(x515/x516));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x517 = INT16_MIN;
	int8_t x518 = INT8_MIN;
	int64_t x519 = INT64_MAX;
	volatile int64_t x520 = INT64_MIN;
	volatile int32_t t49 = 10;

	t49 = ((x517%x518)>>(x519/x520));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x533 = 165268U;
	int64_t x534 = -3576301562893512909LL;
	volatile uint32_t x535 = 1U;
	int8_t x536 = -1;

	t50 = ((x533%x534)>>(x535/x536));

	if (t50 != 165268LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x537 = INT32_MAX;
	volatile int16_t x538 = INT16_MAX;
	uint64_t x539 = UINT64_MAX;
	static int8_t x540 = INT8_MIN;
	int32_t t51 = 741051;

	t51 = ((x537%x538)>>(x539/x540));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x545 = 385859U;
	int32_t x546 = 45925;
	uint64_t x547 = UINT64_MAX;
	volatile int32_t x548 = -1;

	t52 = ((x545%x546)>>(x547/x548));

	if (t52 != 9229U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x553 = 2723LL;
	int32_t x554 = -625671;
	int16_t x556 = -1;
	volatile int64_t t53 = -284590622338LL;

	t53 = ((x553%x554)>>(x555/x556));

	if (t53 != 1361LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x581 = 130406472LLU;
	int8_t x582 = -7;
	uint8_t x583 = 17U;
	int8_t x584 = 15;
	volatile uint64_t t54 = 2971053961687088776LLU;

	t54 = ((x581%x582)>>(x583/x584));

	if (t54 != 65203236LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x585 = INT64_MIN;
	uint8_t x587 = 7U;
	int32_t x588 = INT32_MIN;
	static int64_t t55 = 702083843675725604LL;

	t55 = ((x585%x586)>>(x587/x588));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint64_t x589 = UINT64_MAX;
	uint16_t x590 = 8U;
	int16_t x591 = -37;
	int64_t x592 = 1218903150234LL;
	uint64_t t56 = 581LLU;

	t56 = ((x589%x590)>>(x591/x592));

	if (t56 != 7LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x593 = 144U;
	volatile int32_t x594 = -518556;
	uint64_t x596 = 200604LLU;
	uint32_t t57 = 16U;

	t57 = ((x593%x594)>>(x595/x596));

	if (t57 != 144U) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x597 = -1LL;
	uint64_t x598 = UINT64_MAX;
	volatile int8_t x599 = 0;
	uint32_t x600 = 81U;
	uint64_t t58 = 398380757497194251LLU;

	t58 = ((x597%x598)>>(x599/x600));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x633 = INT8_MIN;
	static volatile int8_t x634 = INT8_MIN;
	int32_t t59 = 0;

	t59 = ((x633%x634)>>(x635/x636));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x645 = 120148440U;
	uint32_t x646 = 52365U;
	int8_t x647 = 36;
	static int64_t x648 = INT64_MIN;
	volatile uint32_t t60 = 219688U;

	t60 = ((x645%x646)>>(x647/x648));

	if (t60 != 23130U) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x654 = INT64_MAX;
	int16_t x655 = -1;
	int64_t x656 = 7591956275283797LL;
	volatile int64_t t61 = 1LL;

	t61 = ((x653%x654)>>(x655/x656));

	if (t61 != 65535LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x665 = INT16_MIN;
	uint32_t x666 = 247866U;
	int16_t x667 = INT16_MIN;
	uint32_t t62 = 68982453U;

	t62 = ((x665%x666)>>(x667/x668));

	if (t62 != 160346U) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x678 = 1LL;
	uint8_t x679 = UINT8_MAX;
	int16_t x680 = INT16_MIN;

	t63 = ((x677%x678)>>(x679/x680));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x681 = 15;
	uint32_t x682 = 41U;
	static int32_t x683 = INT32_MIN;
	int32_t x684 = INT32_MIN;
	uint32_t t64 = 244142U;

	t64 = ((x681%x682)>>(x683/x684));

	if (t64 != 7U) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x745 = 61964950192561LLU;
	int32_t x746 = -5480;
	static volatile int8_t x747 = INT8_MIN;
	volatile uint64_t t65 = 5671LLU;

	t65 = ((x745%x746)>>(x747/x748));

	if (t65 != 61964950192561LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x749 = 4018765LLU;
	static int32_t x750 = INT32_MIN;
	int8_t x751 = 7;
	int64_t x752 = INT64_MIN;

	t66 = ((x749%x750)>>(x751/x752));

	if (t66 != 4018765LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x753 = 7265780078028129515LLU;
	static int64_t x754 = INT64_MAX;
	static int16_t x755 = INT16_MIN;
	static int32_t x756 = -3503;
	volatile uint64_t t67 = 4156LLU;

	t67 = ((x753%x754)>>(x755/x756));

	if (t67 != 14190976714898690LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x757 = UINT32_MAX;
	int8_t x758 = INT8_MIN;
	volatile uint32_t x759 = 28329U;
	int8_t x760 = INT8_MIN;
	volatile uint32_t t68 = 47659382U;

	t68 = ((x757%x758)>>(x759/x760));

	if (t68 != 127U) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x761 = UINT32_MAX;
	volatile int16_t x763 = -1;
	uint16_t x764 = 12U;

	t69 = ((x761%x762)>>(x763/x764));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x769 = UINT8_MAX;
	uint64_t x770 = 858LLU;
	uint64_t t70 = 635978LLU;

	t70 = ((x769%x770)>>(x771/x772));

	if (t70 != 127LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x773 = INT32_MIN;
	volatile int64_t x774 = -1LL;
	uint16_t x775 = 1267U;
	int32_t x776 = -125811;
	int64_t t71 = -4165101920655246565LL;

	t71 = ((x773%x774)>>(x775/x776));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x777 = INT64_MAX;
	int8_t x778 = -1;
	static int8_t x779 = -1;
	volatile int64_t t72 = -1565565132940882LL;

	t72 = ((x777%x778)>>(x779/x780));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x805 = INT16_MAX;
	volatile int32_t x806 = INT32_MIN;
	volatile int32_t t73 = 6443;

	t73 = ((x805%x806)>>(x807/x808));

	if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x809 = INT32_MAX;
	int32_t t74 = 33439806;

	t74 = ((x809%x810)>>(x811/x812));

	if (t74 != 1198) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x817 = -1;
	int32_t x818 = -1;
	int32_t x819 = -1;
	uint64_t x820 = UINT64_MAX;

	t75 = ((x817%x818)>>(x819/x820));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x833 = INT64_MAX;
	volatile int32_t x835 = -1;
	static volatile int32_t x836 = INT32_MIN;
	static int64_t t76 = -143441882LL;

	t76 = ((x833%x834)>>(x835/x836));

	if (t76 != 576235LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x841 = INT8_MAX;
	static volatile uint64_t x842 = UINT64_MAX;
	int64_t x843 = -141042LL;
	int32_t x844 = INT32_MAX;
	volatile uint64_t t77 = 490188362956635875LLU;

	t77 = ((x841%x842)>>(x843/x844));

	if (t77 != 127LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x846 = 1U;
	int16_t x848 = INT16_MIN;
	volatile int32_t t78 = -178226;

	t78 = ((x845%x846)>>(x847/x848));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x849 = INT8_MAX;
	static uint32_t x850 = 12683U;
	static int64_t x851 = -1LL;
	static int32_t x852 = INT32_MAX;

	t79 = ((x849%x850)>>(x851/x852));

	if (t79 != 127U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x853 = INT32_MIN;
	int16_t x854 = -1;
	int16_t x856 = -1261;
	volatile int32_t t80 = -15629617;

	t80 = ((x853%x854)>>(x855/x856));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x861 = INT16_MAX;
	int32_t x862 = INT32_MIN;
	uint8_t x863 = 0U;
	volatile int8_t x864 = INT8_MIN;
	volatile int32_t t81 = -10938;

	t81 = ((x861%x862)>>(x863/x864));

	if (t81 != 32767) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x877 = 26419855U;
	int8_t x878 = INT8_MAX;
	volatile uint32_t t82 = 10731303U;

	t82 = ((x877%x878)>>(x879/x880));

	if (t82 != 45U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x885 = INT32_MAX;
	uint32_t x887 = 330U;
	volatile uint32_t t83 = 0U;

	t83 = ((x885%x886)>>(x887/x888));

	if (t83 != 2147483647U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x893 = INT32_MAX;
	volatile int64_t x894 = INT64_MIN;
	int64_t x895 = -1LL;
	volatile int16_t x896 = 29;
	int64_t t84 = -456503913LL;

	t84 = ((x893%x894)>>(x895/x896));

	if (t84 != 2147483647LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x901 = UINT64_MAX;
	int64_t x902 = -1LL;
	static int64_t x904 = INT64_MIN;
	volatile uint64_t t85 = 347918099LLU;

	t85 = ((x901%x902)>>(x903/x904));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x905 = INT32_MIN;
	int64_t x906 = -1LL;
	static int8_t x907 = 38;
	static int32_t x908 = INT32_MAX;
	volatile int64_t t86 = -593272830LL;

	t86 = ((x905%x906)>>(x907/x908));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x913 = INT64_MIN;
	int32_t x915 = 0;
	static int32_t x916 = -1;
	int64_t t87 = 1386672011LL;

	t87 = ((x913%x914)>>(x915/x916));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x930 = UINT32_MAX;
	volatile uint8_t x931 = 49U;
	int16_t x932 = INT16_MAX;
	static volatile uint32_t t88 = 36967414U;

	t88 = ((x929%x930)>>(x931/x932));

	if (t88 != 4294967168U) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x936 = 2258249791427LLU;

	t89 = ((x933%x934)>>(x935/x936));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x978 = 2U;
	uint16_t x980 = UINT16_MAX;
	int32_t t90 = -2259;

	t90 = ((x977%x978)>>(x979/x980));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x981 = UINT64_MAX;
	int32_t x982 = -1;
	int32_t x983 = 3818;
	int64_t x984 = -49431545194717LL;
	volatile uint64_t t91 = 5845724834931LLU;

	t91 = ((x981%x982)>>(x983/x984));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x1001 = INT64_MIN;
	int16_t x1002 = INT16_MIN;
	static uint32_t x1003 = 97U;
	volatile uint16_t x1004 = 19889U;

	t92 = ((x1001%x1002)>>(x1003/x1004));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x1009 = 394174615U;
	static int8_t x1010 = INT8_MIN;
	int64_t x1011 = -1LL;
	uint32_t x1012 = 3U;
	uint32_t t93 = 64928432U;

	t93 = ((x1009%x1010)>>(x1011/x1012));

	if (t93 != 394174615U) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x1033 = 1U;
	int64_t x1034 = -2781727LL;
	static uint8_t x1035 = 56U;
	int64_t t94 = 3LL;

	t94 = ((x1033%x1034)>>(x1035/x1036));

	if (t94 != 1LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x1041 = -58;
	uint64_t x1044 = 2052012918377LLU;

	t95 = ((x1041%x1042)>>(x1043/x1044));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x1045 = INT8_MAX;
	int8_t x1046 = 12;
	int8_t x1048 = INT8_MIN;
	static volatile int32_t t96 = 50422929;

	t96 = ((x1045%x1046)>>(x1047/x1048));

	if (t96 != 7) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int64_t x1053 = -376496518151361LL;
	volatile uint8_t x1054 = 3U;
	int16_t x1055 = 3;
	uint8_t x1056 = 41U;
	int64_t t97 = 700472306149019656LL;

	t97 = ((x1053%x1054)>>(x1055/x1056));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x1057 = 88;
	int32_t x1058 = 109;
	int8_t x1059 = INT8_MIN;
	int64_t x1060 = INT64_MIN;
	volatile int32_t t98 = 49274722;

	t98 = ((x1057%x1058)>>(x1059/x1060));

	if (t98 != 88) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x1061 = 85U;
	static int32_t x1062 = 1;
	int8_t x1064 = INT8_MAX;

	t99 = ((x1061%x1062)>>(x1063/x1064));

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

