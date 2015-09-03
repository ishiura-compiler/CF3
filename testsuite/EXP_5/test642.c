#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x18 = UINT16_MAX;
int32_t t0 = 0;
volatile int16_t x32 = -1;
int64_t x49 = INT64_MAX;
uint64_t x50 = UINT64_MAX;
static int8_t x52 = INT8_MAX;
volatile uint64_t t2 = 0LLU;
int8_t x54 = INT8_MIN;
volatile int16_t x56 = INT16_MAX;
int64_t t3 = 5391670165851LL;
int64_t x73 = -1LL;
int8_t x74 = 30;
int64_t x103 = -1LL;
int8_t x109 = -1;
uint32_t x111 = 1841U;
int16_t x123 = -713;
static uint16_t x129 = 203U;
int64_t x131 = INT64_MIN;
int8_t x132 = -51;
volatile uint16_t x135 = 247U;
static uint16_t x136 = 9987U;
uint64_t x139 = 4708180400566LLU;
int64_t x140 = -2617980390976LL;
int8_t x141 = INT8_MAX;
static int64_t t13 = 1469LL;
int64_t x146 = INT64_MIN;
int32_t x152 = 15148;
int8_t x165 = -1;
static volatile uint32_t x191 = 15630U;
int64_t x192 = INT64_MAX;
static uint8_t x199 = 48U;
volatile uint16_t x243 = 1U;
uint16_t x253 = 0U;
int8_t x264 = 3;
volatile int64_t t22 = -10792888LL;
int32_t x268 = INT32_MAX;
int16_t x270 = INT16_MIN;
int8_t x272 = 35;
static int64_t t25 = -230286712945700LL;
static uint64_t t26 = 13792431244068683LLU;
uint64_t x297 = 44LLU;
uint32_t x337 = UINT32_MAX;
volatile int16_t x343 = INT16_MIN;
int32_t x359 = INT32_MAX;
volatile int64_t t32 = -116904723LL;
int64_t x403 = -1LL;
static volatile int64_t t33 = -104166686402938746LL;
int16_t x410 = INT16_MIN;
volatile int8_t x460 = 21;
volatile uint64_t t35 = 7111LLU;
static volatile int64_t x462 = -1784292975LL;
volatile int64_t t36 = 57598646679032600LL;
int16_t x516 = 7100;
uint32_t x534 = 768041724U;
volatile uint32_t t42 = 6950U;
int32_t x541 = -8333792;
uint64_t t46 = 46736364612LLU;
int64_t x588 = 428LL;
int16_t x589 = 45;
volatile int64_t t48 = -5310LL;
volatile int64_t x617 = INT64_MIN;
int64_t t49 = 138267LL;
int16_t x621 = -1;
int64_t x626 = -43014LL;
static volatile int64_t t51 = 25968LL;
static volatile int64_t x635 = -1LL;
uint16_t x646 = 2043U;
int32_t x671 = -1;
int16_t x691 = INT16_MAX;
int32_t x701 = INT32_MIN;
volatile int32_t x704 = -1000027805;
static uint32_t t58 = 0U;
uint64_t x720 = UINT64_MAX;
int16_t x731 = INT16_MIN;
static int16_t x763 = 5;
volatile int32_t x773 = 122467;
volatile int64_t x796 = -3LL;
int64_t x799 = 1LL;
int32_t x805 = INT32_MIN;
int32_t x808 = INT32_MAX;
int32_t x810 = INT32_MAX;
volatile int32_t x835 = INT32_MAX;
uint8_t x843 = 63U;
static int32_t t73 = -872127859;
int16_t x851 = 9;
static uint32_t x880 = 394341732U;
uint16_t x886 = UINT16_MAX;
volatile int16_t x888 = -1;
volatile int32_t t77 = 9205;
uint16_t x906 = 304U;
static int32_t x910 = INT32_MIN;
static volatile uint64_t x934 = 4307455524LLU;
int32_t x936 = -1;
volatile uint64_t t81 = 5947537LLU;
int64_t x946 = INT64_MAX;
int64_t t83 = -35LL;
int16_t x949 = 1;
static volatile int64_t t84 = -22479645063804221LL;
uint64_t x972 = UINT64_MAX;
int32_t x973 = -3;
int64_t x979 = -1205630952643LL;
int64_t t90 = -1179249297113644792LL;
int8_t x1030 = -13;
int64_t x1041 = INT64_MIN;
static int32_t x1042 = 25608;
int64_t t93 = -6041204272LL;
int8_t x1079 = -60;
static int64_t x1086 = INT64_MIN;
uint64_t x1091 = 446LLU;
int32_t x1092 = INT32_MAX;
uint16_t x1107 = UINT16_MAX;
int64_t t99 = -27466503377LL;


void f0(void) {
	uint8_t x17 = 1U;
	int8_t x19 = -1;
	static int32_t x20 = INT32_MIN;

	t0 = (x17%((x18/x19)&x20));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x29 = INT8_MAX;
	volatile uint8_t x30 = UINT8_MAX;
	int16_t x31 = -1;
	volatile int32_t t1 = 117;

	t1 = (x29%((x30/x31)&x32));

	if (t1 != 127) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x51 = -48;

	t2 = (x49%((x50/x51)&x52));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x53 = INT16_MIN;
	static int64_t x55 = -1LL;

	t3 = (x53%((x54/x55)&x56));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x65 = INT8_MAX;
	int16_t x66 = INT16_MIN;
	int64_t x67 = -164LL;
	static int32_t x68 = -1;
	volatile int64_t t4 = -10976948LL;

	t4 = (x65%((x66/x67)&x68));

	if (t4 != 127LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x69 = -121;
	volatile int64_t x70 = 7LL;
	static int8_t x71 = 1;
	int64_t x72 = 143LL;
	int64_t t5 = -699LL;

	t5 = (x69%((x70/x71)&x72));

	if (t5 != -2LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x75 = 1;
	static volatile uint8_t x76 = UINT8_MAX;
	volatile int64_t t6 = 29179172166LL;

	t6 = (x73%((x74/x75)&x76));

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x101 = -1;
	int32_t x102 = 7285;
	static uint8_t x104 = 1U;
	int64_t t7 = -38517466884LL;

	t7 = (x101%((x102/x103)&x104));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x110 = 139451081704LL;
	static int32_t x112 = 822079996;
	int64_t t8 = -4480LL;

	t8 = (x109%((x110/x111)&x112));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x121 = 0;
	int16_t x122 = INT16_MIN;
	uint8_t x124 = 3U;
	volatile int32_t t9 = 8;

	t9 = (x121%((x122/x123)&x124));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x130 = INT64_MIN;
	int64_t t10 = -90046324LL;

	t10 = (x129%((x130/x131)&x132));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x133 = -1;
	int32_t x134 = INT32_MIN;
	static volatile int32_t t11 = -580987444;

	t11 = (x133%((x134/x135)&x136));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x137 = INT64_MAX;
	int8_t x138 = -1;
	uint64_t t12 = 246LLU;

	t12 = (x137%((x138/x139)&x140));

	if (t12 != 588287LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x142 = UINT32_MAX;
	int32_t x143 = -13;
	volatile int64_t x144 = -1715239LL;

	t13 = (x141%((x142/x143)&x144));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x145 = 1437343325170621512LL;
	static volatile int32_t x147 = INT32_MAX;
	volatile int32_t x148 = -3;
	int64_t t14 = 3LL;

	t14 = (x145%((x146/x147)&x148));

	if (t14 != 1028193212LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x149 = 1U;
	static volatile int32_t x150 = INT32_MIN;
	int8_t x151 = -57;
	volatile int32_t t15 = 50712622;

	t15 = (x149%((x150/x151)&x152));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x166 = INT32_MIN;
	uint8_t x167 = UINT8_MAX;
	int8_t x168 = INT8_MIN;
	int32_t t16 = -236217;

	t16 = (x165%((x166/x167)&x168));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x173 = INT8_MAX;
	int8_t x174 = INT8_MAX;
	volatile int8_t x175 = -33;
	int64_t x176 = 157146954668351LL;
	int64_t t17 = -3833433729LL;

	t17 = (x173%((x174/x175)&x176));

	if (t17 != 127LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x189 = INT32_MIN;
	int8_t x190 = -1;
	volatile int64_t t18 = 3LL;

	t18 = (x189%((x190/x191)&x192));

	if (t18 != -7613LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x197 = -1LL;
	int16_t x198 = 103;
	int8_t x200 = -1;
	volatile int64_t t19 = -1699391136283856738LL;

	t19 = (x197%((x198/x199)&x200));

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x241 = 0;
	volatile uint64_t x242 = UINT64_MAX;
	static int64_t x244 = -1LL;
	uint64_t t20 = 239975LLU;

	t20 = (x241%((x242/x243)&x244));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x254 = INT32_MAX;
	int8_t x255 = 1;
	static int16_t x256 = INT16_MIN;
	volatile int32_t t21 = -41;

	t21 = (x253%((x254/x255)&x256));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x261 = -1LL;
	uint16_t x262 = UINT16_MAX;
	static uint16_t x263 = UINT16_MAX;

	t22 = (x261%((x262/x263)&x264));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x265 = 46565551;
	int8_t x266 = -2;
	int8_t x267 = -1;
	int32_t t23 = -4;

	t23 = (x265%((x266/x267)&x268));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x269 = 95U;
	volatile int16_t x271 = INT16_MAX;
	static int32_t t24 = 12;

	t24 = (x269%((x270/x271)&x272));

	if (t24 != 25) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x277 = 1381U;
	int64_t x278 = -305186LL;
	int16_t x279 = 39;
	uint8_t x280 = UINT8_MAX;

	t25 = (x277%((x278/x279)&x280));

	if (t25 != 49LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x281 = UINT64_MAX;
	uint32_t x282 = 2730U;
	int64_t x283 = -845LL;
	int64_t x284 = INT64_MIN;

	t26 = (x281%((x282/x283)&x284));

	if (t26 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x298 = INT32_MAX;
	int32_t x299 = INT32_MAX;
	uint64_t x300 = 95745LLU;
	volatile uint64_t t27 = 6709425470393LLU;

	t27 = (x297%((x298/x299)&x300));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x325 = -1;
	uint16_t x326 = 84U;
	volatile int8_t x327 = -11;
	int8_t x328 = INT8_MIN;
	int32_t t28 = -9;

	t28 = (x325%((x326/x327)&x328));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x338 = 1LL;
	int8_t x339 = -1;
	volatile uint64_t x340 = UINT64_MAX;
	uint64_t t29 = 807078934645LLU;

	t29 = (x337%((x338/x339)&x340));

	if (t29 != 4294967295LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x341 = -1;
	uint32_t x342 = UINT32_MAX;
	uint64_t x344 = 17LLU;
	static volatile uint64_t t30 = 8113749982154LLU;

	t30 = (x341%((x342/x343)&x344));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x357 = 74122284911846050LLU;
	uint64_t x358 = UINT64_MAX;
	static int16_t x360 = INT16_MIN;
	volatile uint64_t t31 = 126505LLU;

	t31 = (x357%((x358/x359)&x360));

	if (t31 != 5605450402LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x393 = INT64_MIN;
	static int64_t x394 = INT64_MIN;
	int8_t x395 = INT8_MIN;
	int8_t x396 = -1;

	t32 = (x393%((x394/x395)&x396));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x401 = INT16_MAX;
	int32_t x402 = INT32_MIN;
	int16_t x404 = -7911;

	t33 = (x401%((x402/x403)&x404));

	if (t33 != 32767LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x409 = INT32_MIN;
	int8_t x411 = -1;
	int8_t x412 = INT8_MIN;
	static volatile int32_t t34 = -6281289;

	t34 = (x409%((x410/x411)&x412));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x457 = 187;
	int32_t x458 = INT32_MAX;
	uint64_t x459 = 131LLU;

	t35 = (x457%((x458/x459)&x460));

	if (t35 != 3LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x461 = INT32_MAX;
	uint16_t x463 = 1U;
	uint32_t x464 = 843550U;

	t36 = (x461%((x462/x463)&x464));

	if (t36 != 68239LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x485 = 1U;
	volatile uint64_t x486 = 23520301612439133LLU;
	int16_t x487 = 87;
	int8_t x488 = INT8_MIN;
	uint64_t t37 = 2973160LLU;

	t37 = (x485%((x486/x487)&x488));

	if (t37 != 1LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x489 = 7U;
	uint16_t x490 = 4509U;
	static int64_t x491 = -1LL;
	uint32_t x492 = 1U;
	volatile int64_t t38 = 3LL;

	t38 = (x489%((x490/x491)&x492));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x497 = 0;
	static uint32_t x498 = 1745U;
	volatile uint8_t x499 = 1U;
	int64_t x500 = -1LL;
	volatile int64_t t39 = -3383753373884LL;

	t39 = (x497%((x498/x499)&x500));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x513 = -1;
	volatile int32_t x514 = 13635517;
	static uint16_t x515 = 351U;
	int32_t t40 = -5747;

	t40 = (x513%((x514/x515)&x516));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x521 = UINT32_MAX;
	uint16_t x522 = 95U;
	int8_t x523 = -1;
	uint32_t x524 = 7376242U;
	uint32_t t41 = 4044737U;

	t41 = (x521%((x522/x523)&x524));

	if (t41 != 2042175U) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x533 = 14U;
	static uint16_t x535 = 392U;
	volatile uint16_t x536 = 23U;

	t42 = (x533%((x534/x535)&x536));

	if (t42 != 14U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x542 = -1;
	int64_t x543 = -1LL;
	static volatile uint64_t x544 = 16362771549LLU;
	uint64_t t43 = 48641LLU;

	t43 = (x541%((x542/x543)&x544));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x549 = -15856;
	int16_t x550 = INT16_MIN;
	static volatile uint32_t x551 = 15158284U;
	int32_t x552 = INT32_MAX;
	volatile uint32_t t44 = 60722U;

	t44 = (x549%((x550/x551)&x552));

	if (t44 != 242U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x557 = INT8_MAX;
	uint8_t x558 = UINT8_MAX;
	volatile int16_t x559 = -1;
	static int64_t x560 = -1846927932099028LL;
	volatile int64_t t45 = 19742270426183935LL;

	t45 = (x557%((x558/x559)&x560));

	if (t45 != 127LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x561 = 7U;
	volatile int32_t x562 = 1524404;
	volatile int16_t x563 = INT16_MIN;
	uint64_t x564 = 182149918LLU;

	t46 = (x561%((x562/x563)&x564));

	if (t46 != 7LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x585 = -77708307146LL;
	static uint16_t x586 = 154U;
	int16_t x587 = -1;
	static int64_t t47 = 38LL;

	t47 = (x585%((x586/x587)&x588));

	if (t47 != -158LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x590 = 11314;
	int8_t x591 = -1;
	int64_t x592 = -1LL;

	t48 = (x589%((x590/x591)&x592));

	if (t48 != 45LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x618 = -1;
	volatile uint32_t x619 = 1207U;
	uint16_t x620 = 2U;

	t49 = (x617%((x618/x619)&x620));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x622 = INT16_MIN;
	uint32_t x623 = 84927U;
	uint32_t x624 = UINT32_MAX;
	static volatile uint32_t t50 = 13341762U;

	t50 = (x621%((x622/x623)&x624));

	if (t50 != 39051U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x625 = INT64_MAX;
	uint8_t x627 = 11U;
	int64_t x628 = 13039537219LL;

	t51 = (x625%((x626/x627)&x628));

	if (t51 != 8703785329LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x633 = INT16_MIN;
	uint32_t x634 = 986097370U;
	int8_t x636 = INT8_MAX;
	int64_t t52 = -404020279LL;

	t52 = (x633%((x634/x635)&x636));

	if (t52 != -12LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x645 = 232552208;
	int8_t x647 = INT8_MIN;
	volatile uint16_t x648 = 607U;
	static int32_t t53 = 109;

	t53 = (x645%((x646/x647)&x648));

	if (t53 != 142) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x669 = UINT64_MAX;
	int64_t x670 = 1895807248LL;
	int8_t x672 = -35;
	uint64_t t54 = 20625LLU;

	t54 = (x669%((x670/x671)&x672));

	if (t54 != 1895807279LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x677 = 11364081LL;
	int32_t x678 = -156266;
	int8_t x679 = -22;
	uint8_t x680 = 1U;
	int64_t t55 = -3248518625511730593LL;

	t55 = (x677%((x678/x679)&x680));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x689 = -1LL;
	static int32_t x690 = INT32_MIN;
	int16_t x692 = INT16_MIN;
	static int64_t t56 = 13632LL;

	t56 = (x689%((x690/x691)&x692));

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x702 = INT16_MAX;
	int16_t x703 = -1;
	int32_t t57 = 444331;

	t57 = (x701%((x702/x703)&x704));

	if (t57 != -147390466) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x705 = UINT32_MAX;
	int16_t x706 = INT16_MIN;
	int16_t x707 = -1;
	volatile int32_t x708 = 184657784;

	t58 = (x705%((x706/x707)&x708));

	if (t58 != 32767U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x709 = -1;
	uint8_t x710 = 47U;
	static int8_t x711 = -1;
	int16_t x712 = -1;
	int32_t t59 = 50951;

	t59 = (x709%((x710/x711)&x712));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x713 = INT16_MIN;
	int32_t x714 = -1;
	int8_t x715 = -1;
	uint8_t x716 = UINT8_MAX;
	volatile int32_t t60 = 54;

	t60 = (x713%((x714/x715)&x716));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x717 = 63U;
	int16_t x718 = 4738;
	int8_t x719 = INT8_MAX;
	uint64_t t61 = 60LLU;

	t61 = (x717%((x718/x719)&x720));

	if (t61 != 26LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x725 = 1869;
	int64_t x726 = INT64_MAX;
	static int16_t x727 = -1;
	uint64_t x728 = UINT64_MAX;
	volatile uint64_t t62 = 3720909708504LLU;

	t62 = (x725%((x726/x727)&x728));

	if (t62 != 1869LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x729 = 6;
	uint16_t x730 = UINT16_MAX;
	int16_t x732 = INT16_MAX;
	volatile int32_t t63 = 12980068;

	t63 = (x729%((x730/x731)&x732));

	if (t63 != 6) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x761 = INT32_MIN;
	uint32_t x762 = UINT32_MAX;
	static uint32_t x764 = 1121436U;
	volatile uint32_t t64 = 58116U;

	t64 = (x761%((x762/x763)&x764));

	if (t64 != 493568U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x774 = INT8_MIN;
	int8_t x775 = INT8_MIN;
	volatile int16_t x776 = -9;
	int32_t t65 = 2;

	t65 = (x773%((x774/x775)&x776));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x777 = UINT64_MAX;
	int64_t x778 = -1007350032221155900LL;
	int8_t x779 = INT8_MIN;
	int16_t x780 = 7;
	volatile uint64_t t66 = 629087330046723LLU;

	t66 = (x777%((x778/x779)&x780));

	if (t66 != 3LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x793 = INT16_MAX;
	int32_t x794 = INT32_MAX;
	uint32_t x795 = 6849U;
	volatile int64_t t67 = 275LL;

	t67 = (x793%((x794/x795)&x796));

	if (t67 != 32767LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x797 = INT16_MAX;
	volatile uint16_t x798 = UINT16_MAX;
	int64_t x800 = INT64_MAX;
	int64_t t68 = -1004036279053718043LL;

	t68 = (x797%((x798/x799)&x800));

	if (t68 != 32767LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x806 = INT32_MIN;
	static int32_t x807 = INT32_MIN;
	volatile int32_t t69 = 10871950;

	t69 = (x805%((x806/x807)&x808));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x809 = UINT8_MAX;
	int32_t x811 = INT32_MAX;
	static uint16_t x812 = 1535U;
	static volatile int32_t t70 = 9477;

	t70 = (x809%((x810/x811)&x812));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x829 = -120;
	volatile int32_t x830 = INT32_MIN;
	uint32_t x831 = 806706146U;
	int16_t x832 = -1;
	uint32_t t71 = 53330873U;

	t71 = (x829%((x830/x831)&x832));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x833 = -19;
	static int64_t x834 = INT64_MIN;
	int8_t x836 = 7;
	int64_t t72 = 1411770516913701LL;

	t72 = (x833%((x834/x835)&x836));

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x841 = 188429657;
	volatile int16_t x842 = INT16_MIN;
	int8_t x844 = -1;

	t73 = (x841%((x842/x843)&x844));

	if (t73 != 377) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x849 = 60U;
	volatile int8_t x850 = INT8_MIN;
	int16_t x852 = INT16_MAX;
	static int32_t t74 = 1;

	t74 = (x849%((x850/x851)&x852));

	if (t74 != 60) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x877 = 3518575859194510LLU;
	int64_t x878 = 3945LL;
	int32_t x879 = -3474;
	volatile uint64_t t75 = 17125459LLU;

	t75 = (x877%((x878/x879)&x880));

	if (t75 != 238114318LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x881 = INT32_MIN;
	uint8_t x882 = UINT8_MAX;
	int8_t x883 = -1;
	volatile int16_t x884 = INT16_MAX;
	volatile int32_t t76 = 1428969;

	t76 = (x881%((x882/x883)&x884));

	if (t76 != -32511) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x885 = -14239;
	static volatile int8_t x887 = 9;

	t77 = (x885%((x886/x887)&x888));

	if (t77 != -6958) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x901 = -3973;
	int32_t x902 = INT32_MIN;
	uint16_t x903 = 107U;
	uint16_t x904 = UINT16_MAX;
	int32_t t78 = -18;

	t78 = (x901%((x902/x903)&x904));

	if (t78 != -3973) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x905 = 218;
	int8_t x907 = -1;
	int16_t x908 = -96;
	volatile int32_t t79 = -11;

	t79 = (x905%((x906/x907)&x908));

	if (t79 != 218) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x909 = 1LLU;
	int32_t x911 = INT32_MAX;
	uint32_t x912 = 46867088U;
	volatile uint64_t t80 = 443235208788854LLU;

	t80 = (x909%((x910/x911)&x912));

	if (t80 != 1LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x933 = UINT8_MAX;
	uint32_t x935 = 1U;

	t81 = (x933%((x934/x935)&x936));

	if (t81 != 255LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x937 = -1;
	static uint64_t x938 = UINT64_MAX;
	static int8_t x939 = 30;
	int32_t x940 = 11;
	uint64_t t82 = 623LLU;

	t82 = (x937%((x938/x939)&x940));

	if (t82 != 7LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x945 = INT64_MIN;
	volatile int8_t x947 = INT8_MIN;
	int64_t x948 = INT64_MIN;

	t83 = (x945%((x946/x947)&x948));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x950 = -4273612269504LL;
	int32_t x951 = 28537071;
	static uint8_t x952 = UINT8_MAX;

	t84 = (x949%((x950/x951)&x952));

	if (t84 != 1LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x961 = -1LL;
	static int16_t x962 = INT16_MIN;
	uint8_t x963 = UINT8_MAX;
	int8_t x964 = -8;
	int64_t t85 = 1LL;

	t85 = (x961%((x962/x963)&x964));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x969 = UINT64_MAX;
	int64_t x970 = INT64_MIN;
	int32_t x971 = INT32_MAX;
	volatile uint64_t t86 = 52482744048208865LLU;

	t86 = (x969%((x970/x971)&x972));

	if (t86 != 4294967297LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x974 = INT16_MIN;
	int8_t x975 = INT8_MIN;
	uint64_t x976 = 1572667LLU;
	static uint64_t t87 = 32345LLU;

	t87 = (x973%((x974/x975)&x976));

	if (t87 != 253LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x977 = -1;
	volatile int64_t x978 = INT64_MIN;
	int16_t x980 = 1254;
	int64_t t88 = -148781463LL;

	t88 = (x977%((x978/x979)&x980));

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x989 = INT32_MIN;
	int16_t x990 = INT16_MAX;
	int64_t x991 = -5469LL;
	int32_t x992 = -1;
	volatile int64_t t89 = -4282519LL;

	t89 = (x989%((x990/x991)&x992));

	if (t89 != -3LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x1009 = 15584U;
	static uint16_t x1010 = UINT16_MAX;
	int16_t x1011 = -1;
	volatile int64_t x1012 = -5812050342076512LL;

	t90 = (x1009%((x1010/x1011)&x1012));

	if (t90 != 15584LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x1013 = 89443907809LL;
	int64_t x1014 = -66039880570559LL;
	uint64_t x1015 = 1265357LLU;
	volatile int8_t x1016 = -1;
	volatile uint64_t t91 = 7508LLU;

	t91 = (x1013%((x1014/x1015)&x1016));

	if (t91 != 89443907809LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x1029 = INT16_MAX;
	int16_t x1031 = -1;
	int8_t x1032 = -1;
	int32_t t92 = -1654;

	t92 = (x1029%((x1030/x1031)&x1032));

	if (t92 != 7) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x1043 = -1;
	volatile int32_t x1044 = INT32_MIN;

	t93 = (x1041%((x1042/x1043)&x1044));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x1057 = 1U;
	int16_t x1058 = -526;
	volatile int32_t x1059 = -1;
	int32_t x1060 = 31;
	int32_t t94 = 8534;

	t94 = (x1057%((x1058/x1059)&x1060));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x1077 = -1;
	uint16_t x1078 = UINT16_MAX;
	uint64_t x1080 = 103993LLU;
	uint64_t t95 = 154391367LLU;

	t95 = (x1077%((x1078/x1079)&x1080));

	if (t95 != 1967LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x1085 = -1;
	static int8_t x1087 = INT8_MIN;
	static int16_t x1088 = -43;
	int64_t t96 = -31283713LL;

	t96 = (x1085%((x1086/x1087)&x1088));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x1089 = INT64_MAX;
	volatile int8_t x1090 = -1;
	volatile uint64_t t97 = 88761LLU;

	t97 = (x1089%((x1090/x1091)&x1092));

	if (t97 != 20636407LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x1105 = INT16_MIN;
	uint64_t x1106 = UINT64_MAX;
	static uint8_t x1108 = UINT8_MAX;
	uint64_t t98 = 707841325572LLU;

	t98 = (x1105%((x1106/x1107)&x1108));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x1109 = 0U;
	int64_t x1110 = 8267939LL;
	int8_t x1111 = INT8_MAX;
	int16_t x1112 = INT16_MIN;

	t99 = (x1109%((x1110/x1111)&x1112));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

