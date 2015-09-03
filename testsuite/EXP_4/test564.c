#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x23 = 11;
int64_t x47 = INT64_MIN;
static volatile uint64_t x73 = 685LLU;
int64_t x98 = INT64_MIN;
volatile uint16_t x116 = UINT16_MAX;
int16_t x138 = -1;
int64_t x139 = INT64_MIN;
uint16_t x148 = UINT16_MAX;
static int64_t x153 = INT64_MIN;
uint16_t x154 = 3U;
int16_t x168 = INT16_MAX;
static volatile int64_t t13 = -492566905993LL;
int64_t x185 = -1LL;
uint32_t x200 = UINT32_MAX;
uint8_t x219 = 21U;
int64_t x220 = -1LL;
int8_t x267 = INT8_MAX;
int8_t x281 = -1;
int16_t x294 = -1;
int32_t x295 = 8647727;
uint8_t x308 = 127U;
volatile int32_t t27 = -115674164;
uint32_t x312 = 192U;
uint64_t t29 = 383542LLU;
volatile int64_t t30 = 1531857067230LL;
volatile uint32_t x362 = 253715U;
static uint64_t t34 = 315570244602210496LLU;
uint32_t x372 = 11346U;
int16_t x379 = INT16_MIN;
uint32_t x380 = 1547192406U;
uint16_t x409 = UINT16_MAX;
volatile int64_t t39 = 36141591563095LL;
int8_t x421 = -5;
volatile uint8_t x424 = 12U;
uint32_t x432 = 167868521U;
int64_t t41 = 10LL;
int64_t x487 = INT64_MIN;
uint32_t x497 = 318152U;
uint8_t x500 = 3U;
uint8_t x513 = 25U;
static int8_t x514 = INT8_MAX;
uint16_t x525 = 4U;
int16_t x563 = INT16_MIN;
int32_t x591 = INT32_MIN;
uint16_t x596 = UINT16_MAX;
uint32_t x599 = UINT32_MAX;
static int32_t x609 = INT32_MIN;
uint32_t x617 = UINT32_MAX;
int32_t x655 = -106;
int32_t t61 = -1;
int32_t x663 = INT32_MIN;
uint64_t t63 = 2933LLU;
static int16_t x684 = INT16_MAX;
volatile int8_t x699 = INT8_MAX;
int64_t t66 = 1788017252LL;
volatile uint64_t t68 = 60534864004LLU;
int16_t x718 = -1;
uint16_t x738 = 20353U;
uint16_t x739 = 5599U;
uint32_t x748 = UINT32_MAX;
int64_t t77 = 1027637847730LL;
int32_t x816 = -72;
volatile int64_t x841 = INT64_MAX;
int32_t x845 = INT32_MIN;
uint64_t x846 = 370327074LLU;
static uint32_t x848 = 5U;
int64_t x855 = INT64_MIN;
static volatile uint64_t x858 = 3783683362770LLU;
uint8_t x859 = 47U;
int16_t x860 = -3;
uint8_t x869 = UINT8_MAX;
int8_t x884 = -6;
int64_t t85 = -13751405783LL;
static volatile int32_t x911 = INT32_MIN;
int32_t x931 = INT32_MAX;
int8_t x944 = -35;
uint32_t x962 = 27689152U;
int8_t x964 = -1;
static int16_t x974 = -1;
int64_t x977 = 9166114373698LL;
static int32_t x988 = 1;
int64_t t95 = 1036340921574LL;
int64_t x993 = 545764905450166LL;
int16_t x1003 = INT16_MAX;
static int32_t x1016 = -2559615;


void f0(void) {
	int8_t x21 = INT8_MAX;
	uint64_t x22 = 52726840861169554LLU;
	int8_t x24 = -1;
	uint64_t t0 = 40581LLU;

	t0 = (x21%(x22%(x23/x24)));

	if (t0 != 127LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x25 = INT8_MIN;
	uint32_t x26 = 2132347238U;
	int16_t x27 = INT16_MIN;
	int16_t x28 = 38;
	uint32_t t1 = 16068U;

	t1 = (x25%(x26%(x27/x28)));

	if (t1 != 30272692U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x45 = INT32_MAX;
	int64_t x46 = INT64_MAX;
	int32_t x48 = 10;
	int64_t t2 = -59960LL;

	t2 = (x45%(x46%(x47/x48)));

	if (t2 != 1LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x57 = 988U;
	volatile int32_t x58 = -1;
	static int32_t x59 = INT32_MIN;
	volatile uint64_t x60 = 596580LLU;
	uint64_t t3 = 6330586261LLU;

	t3 = (x57%(x58%(x59/x60)));

	if (t3 != 988LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x74 = INT16_MAX;
	static volatile int64_t x75 = INT64_MAX;
	int8_t x76 = INT8_MIN;
	uint64_t t4 = 363590116548965LLU;

	t4 = (x73%(x74%(x75/x76)));

	if (t4 != 685LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x81 = 7103U;
	volatile int16_t x82 = -1;
	int64_t x83 = -79490683189746LL;
	int32_t x84 = INT32_MIN;
	int64_t t5 = 6169731836371823LL;

	t5 = (x81%(x82%(x83/x84)));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x89 = -1LL;
	static volatile uint64_t x90 = 4397957492447LLU;
	volatile int32_t x91 = -101483;
	int16_t x92 = -255;
	volatile uint64_t t6 = 538563994365497280LLU;

	t6 = (x89%(x90%(x91/x92)));

	if (t6 != 13LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x97 = INT64_MIN;
	uint16_t x99 = UINT16_MAX;
	volatile int8_t x100 = -1;
	volatile int64_t t7 = 23786244666602LL;

	t7 = (x97%(x98%(x99/x100)));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x113 = INT32_MIN;
	static volatile uint64_t x114 = UINT64_MAX;
	int64_t x115 = INT64_MIN;
	static volatile uint64_t t8 = 312134587755738LLU;

	t8 = (x113%(x114%(x115/x116)));

	if (t8 != 140737488584701LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x125 = 281984065U;
	volatile int16_t x126 = -1;
	static uint64_t x127 = UINT64_MAX;
	uint32_t x128 = 842U;
	static uint64_t t9 = 2195069850314888062LLU;

	t9 = (x125%(x126%(x127/x128)));

	if (t9 != 15LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x137 = INT8_MIN;
	static uint32_t x140 = 22675501U;
	int64_t t10 = -1LL;

	t10 = (x137%(x138%(x139/x140)));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x145 = 61121;
	uint32_t x146 = 59U;
	uint64_t x147 = UINT64_MAX;
	volatile uint64_t t11 = 67072442LLU;

	t11 = (x145%(x146%(x147/x148)));

	if (t11 != 56LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x155 = INT32_MIN;
	int8_t x156 = INT8_MIN;
	volatile int64_t t12 = 129036803328923LL;

	t12 = (x153%(x154%(x155/x156)));

	if (t12 != -2LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x165 = 15587352U;
	static uint16_t x166 = UINT16_MAX;
	int64_t x167 = INT64_MAX;

	t13 = (x165%(x166%(x167/x168)));

	if (t13 != 55557LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x173 = UINT32_MAX;
	static volatile uint64_t x174 = 123769225LLU;
	static int32_t x175 = INT32_MAX;
	volatile uint16_t x176 = 176U;
	static uint64_t t14 = 18090553254999LLU;

	t14 = (x173%(x174%(x175/x176)));

	if (t14 != 1588660LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x186 = 1U;
	volatile int64_t x187 = INT64_MIN;
	int16_t x188 = INT16_MIN;
	static volatile int64_t t15 = 652601141995560810LL;

	t15 = (x185%(x186%(x187/x188)));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x193 = INT8_MIN;
	int32_t x194 = INT32_MAX;
	int64_t x195 = INT64_MAX;
	static int16_t x196 = INT16_MIN;
	static volatile int64_t t16 = -4568648067LL;

	t16 = (x193%(x194%(x195/x196)));

	if (t16 != -128LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x197 = UINT8_MAX;
	volatile int64_t x198 = 2446441422LL;
	int64_t x199 = INT64_MAX;
	int64_t t17 = -2246232676LL;

	t17 = (x197%(x198%(x199/x200)));

	if (t17 != 255LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x213 = -1;
	uint64_t x214 = 8744288469243LLU;
	int64_t x215 = -29LL;
	int8_t x216 = -3;
	uint64_t t18 = 449LLU;

	t18 = (x213%(x214%(x215/x216)));

	if (t18 != 3LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x217 = 2;
	static uint64_t x218 = UINT64_MAX;
	volatile uint64_t t19 = 219543LLU;

	t19 = (x217%(x218%(x219/x220)));

	if (t19 != 2LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x233 = INT64_MIN;
	uint32_t x234 = 494111199U;
	volatile int32_t x235 = 204414039;
	uint8_t x236 = 2U;
	int64_t t20 = -4373LL;

	t20 = (x233%(x234%(x235/x236)));

	if (t20 != -11043130LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x241 = 8442293827542545LLU;
	volatile int32_t x242 = INT32_MIN;
	int32_t x243 = INT32_MIN;
	int16_t x244 = INT16_MAX;
	uint64_t t21 = 87901226819633799LLU;

	t21 = (x241%(x242%(x243/x244)));

	if (t21 != 8442293827542545LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x253 = 4U;
	int64_t x254 = INT64_MIN;
	int16_t x255 = INT16_MAX;
	int8_t x256 = INT8_MIN;
	int64_t t22 = 13701LL;

	t22 = (x253%(x254%(x255/x256)));

	if (t22 != 4LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x265 = INT32_MAX;
	volatile uint8_t x266 = 16U;
	static uint8_t x268 = 6U;
	volatile int32_t t23 = -38974946;

	t23 = (x265%(x266%(x267/x268)));

	if (t23 != 15) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x269 = INT64_MAX;
	uint16_t x270 = 97U;
	int64_t x271 = INT64_MIN;
	int8_t x272 = INT8_MIN;
	int64_t t24 = 16171910LL;

	t24 = (x269%(x270%(x271/x272)));

	if (t24 != 78LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x282 = UINT32_MAX;
	int64_t x283 = -12111018075992553LL;
	int16_t x284 = INT16_MIN;
	int64_t t25 = -2732LL;

	t25 = (x281%(x282%(x283/x284)));

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint32_t x293 = 20834U;
	uint16_t x296 = 1459U;
	uint32_t t26 = 1008U;

	t26 = (x293%(x294%(x295/x296)));

	if (t26 != 20834U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x305 = INT32_MAX;
	volatile int32_t x306 = 31556109;
	int32_t x307 = INT32_MIN;

	t27 = (x305%(x306%(x307/x308)));

	if (t27 != 9052453) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x309 = 28917U;
	static volatile int8_t x310 = INT8_MIN;
	volatile uint32_t x311 = 113790U;
	static uint32_t t28 = 657U;

	t28 = (x309%(x310%(x311/x312)));

	if (t28 != 53U) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x317 = UINT32_MAX;
	volatile uint8_t x318 = 53U;
	int16_t x319 = INT16_MIN;
	uint64_t x320 = 9LLU;

	t29 = (x317%(x318%(x319/x320)));

	if (t29 != 41LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x321 = -17663282207LL;
	int8_t x322 = -1;
	int32_t x323 = INT32_MIN;
	int8_t x324 = 3;

	t30 = (x321%(x322%(x323/x324)));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x325 = -136683;
	int8_t x326 = 1;
	volatile int32_t x327 = INT32_MAX;
	static int8_t x328 = -1;
	volatile int32_t t31 = 3267353;

	t31 = (x325%(x326%(x327/x328)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x329 = INT8_MIN;
	static int64_t x330 = -425186299104580LL;
	volatile int32_t x331 = INT32_MIN;
	int16_t x332 = -21;
	int64_t t32 = -286276839650982LL;

	t32 = (x329%(x330%(x331/x332)));

	if (t32 != -128LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x345 = INT8_MIN;
	int32_t x346 = 1839201;
	int64_t x347 = 1733915069657949LL;
	int16_t x348 = INT16_MAX;
	volatile int64_t t33 = 385633881249LL;

	t33 = (x345%(x346%(x347/x348)));

	if (t33 != -128LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x361 = UINT32_MAX;
	static int16_t x363 = -1517;
	static uint64_t x364 = 57335345857901LLU;

	t34 = (x361%(x362%(x363/x364)));

	if (t34 != 79775LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x369 = -1;
	int16_t x370 = INT16_MAX;
	int16_t x371 = INT16_MAX;
	static volatile uint32_t t35 = 1900U;

	t35 = (x369%(x370%(x371/x372)));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x373 = 61U;
	int8_t x374 = -24;
	int32_t x375 = INT32_MIN;
	volatile uint16_t x376 = 2151U;
	volatile int32_t t36 = 33835025;

	t36 = (x373%(x374%(x375/x376)));

	if (t36 != 13) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x377 = -224083749449818LL;
	int64_t x378 = INT64_MAX;
	static volatile int64_t t37 = -10101276LL;

	t37 = (x377%(x378%(x379/x380)));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x385 = UINT16_MAX;
	int16_t x386 = 158;
	int32_t x387 = -29;
	uint32_t x388 = 29U;
	uint32_t t38 = 242100785U;

	t38 = (x385%(x386%(x387/x388)));

	if (t38 != 123U) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x410 = INT8_MIN;
	static int64_t x411 = INT64_MAX;
	int64_t x412 = -1173612141LL;

	t39 = (x409%(x410%(x411/x412)));

	if (t39 != 127LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x422 = 1;
	int32_t x423 = INT32_MIN;
	volatile int32_t t40 = -6182404;

	t40 = (x421%(x422%(x423/x424)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x429 = -1;
	int64_t x430 = -1LL;
	int16_t x431 = INT16_MIN;

	t41 = (x429%(x430%(x431/x432)));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x449 = 7U;
	uint64_t x450 = 526LLU;
	int32_t x451 = INT32_MIN;
	static int16_t x452 = -58;
	volatile uint64_t t42 = 5041LLU;

	t42 = (x449%(x450%(x451/x452)));

	if (t42 != 7LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x461 = INT32_MIN;
	volatile int8_t x462 = -1;
	int64_t x463 = INT64_MIN;
	uint64_t x464 = 1006988LLU;
	static uint64_t t43 = 4808729824200683423LLU;

	t43 = (x461%(x462%(x463/x464)));

	if (t43 != 449694LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x465 = INT16_MAX;
	int32_t x466 = INT32_MIN;
	int8_t x467 = 23;
	volatile uint8_t x468 = 2U;
	volatile int32_t t44 = 10;

	t44 = (x465%(x466%(x467/x468)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x473 = 402U;
	int8_t x474 = -1;
	int64_t x475 = -1LL;
	volatile uint64_t x476 = 332438573267382LLU;
	static volatile uint64_t t45 = 2155237043310253LLU;

	t45 = (x473%(x474%(x475/x476)));

	if (t45 != 402LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x485 = INT8_MIN;
	int64_t x486 = INT64_MIN;
	int16_t x488 = INT16_MAX;
	int64_t t46 = -1891LL;

	t46 = (x485%(x486%(x487/x488)));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x498 = INT32_MIN;
	uint8_t x499 = UINT8_MAX;
	uint32_t t47 = 11U;

	t47 = (x497%(x498%(x499/x500)));

	if (t47 != 318152U) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x501 = 6U;
	static uint64_t x502 = 1676139LLU;
	volatile uint64_t x503 = UINT64_MAX;
	int64_t x504 = 7183388048977695LL;
	uint64_t t48 = 2057LLU;

	t48 = (x501%(x502%(x503/x504)));

	if (t48 != 6LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x515 = 10629U;
	int32_t x516 = -1;
	int32_t t49 = 19838;

	t49 = (x513%(x514%(x515/x516)));

	if (t49 != 25) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x526 = INT32_MAX;
	uint64_t x527 = 8522LLU;
	uint8_t x528 = 39U;
	uint64_t t50 = 64073511391LLU;

	t50 = (x525%(x526%(x527/x528)));

	if (t50 != 4LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x561 = 3;
	uint16_t x562 = 510U;
	int8_t x564 = -1;
	int32_t t51 = 0;

	t51 = (x561%(x562%(x563/x564)));

	if (t51 != 3) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x589 = INT16_MAX;
	static int8_t x590 = INT8_MIN;
	volatile uint16_t x592 = 39U;
	static volatile int32_t t52 = 224050;

	t52 = (x589%(x590%(x591/x592)));

	if (t52 != 127) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x593 = INT8_MIN;
	int32_t x594 = INT32_MIN;
	volatile uint32_t x595 = UINT32_MAX;
	volatile uint32_t t53 = 0U;

	t53 = (x593%(x594%(x595/x596)));

	if (t53 != 32645U) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x597 = INT64_MIN;
	volatile int32_t x598 = 29474;
	int16_t x600 = 2432;
	volatile int64_t t54 = -84620LL;

	t54 = (x597%(x598%(x599/x600)));

	if (t54 != -14754LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x605 = INT64_MIN;
	static volatile uint32_t x606 = UINT32_MAX;
	int16_t x607 = INT16_MIN;
	static uint64_t x608 = 26950831238LLU;
	static volatile uint64_t t55 = 24893LLU;

	t55 = (x605%(x606%(x607/x608)));

	if (t55 != 118584188LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x610 = UINT8_MAX;
	int32_t x611 = INT32_MAX;
	volatile uint8_t x612 = UINT8_MAX;
	volatile int32_t t56 = 52595;

	t56 = (x609%(x610%(x611/x612)));

	if (t56 != -128) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x618 = INT8_MAX;
	int32_t x619 = -596479;
	int8_t x620 = 1;
	uint32_t t57 = 16281U;

	t57 = (x617%(x618%(x619/x620)));

	if (t57 != 15U) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int64_t x629 = -1LL;
	volatile uint8_t x630 = UINT8_MAX;
	int16_t x631 = -6;
	int16_t x632 = -1;
	int64_t t58 = -3188075126464969LL;

	t58 = (x629%(x630%(x631/x632)));

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x637 = INT32_MAX;
	volatile int32_t x638 = -1;
	uint16_t x639 = UINT16_MAX;
	uint32_t x640 = 14U;
	static uint32_t t59 = 2216U;

	t59 = (x637%(x638%(x639/x640)));

	if (t59 != 1U) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x645 = -1;
	int32_t x646 = INT32_MIN;
	uint8_t x647 = 34U;
	int32_t x648 = -1;
	volatile int32_t t60 = 564;

	t60 = (x645%(x646%(x647/x648)));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x653 = -390868;
	int8_t x654 = INT8_MIN;
	int8_t x656 = 17;

	t61 = (x653%(x654%(x655/x656)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x661 = 3;
	uint8_t x662 = UINT8_MAX;
	uint8_t x664 = 119U;
	volatile int32_t t62 = 139249284;

	t62 = (x661%(x662%(x663/x664)));

	if (t62 != 3) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x673 = UINT64_MAX;
	int8_t x674 = -1;
	static int32_t x675 = -1;
	uint32_t x676 = 6U;

	t63 = (x673%(x674%(x675/x676)));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x677 = INT16_MIN;
	static int8_t x678 = -60;
	volatile int8_t x679 = INT8_MAX;
	int32_t x680 = -1;
	static int32_t t64 = -7565405;

	t64 = (x677%(x678%(x679/x680)));

	if (t64 != -8) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x681 = 48563U;
	uint64_t x682 = 990662LLU;
	int32_t x683 = INT32_MAX;
	static uint64_t t65 = 459140LLU;

	t65 = (x681%(x682%(x683/x684)));

	if (t65 != 3011LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x697 = INT32_MIN;
	volatile uint16_t x698 = 24U;
	int64_t x700 = -1LL;

	t66 = (x697%(x698%(x699/x700)));

	if (t66 != -8LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x705 = UINT8_MAX;
	static volatile int32_t x706 = -45755;
	static volatile int8_t x707 = INT8_MAX;
	int8_t x708 = -1;
	int32_t t67 = 440;

	t67 = (x705%(x706%(x707/x708)));

	if (t67 != 10) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x709 = INT16_MAX;
	int32_t x710 = -1;
	volatile int8_t x711 = INT8_MIN;
	static uint64_t x712 = 1902634366LLU;

	t68 = (x709%(x710%(x711/x712)));

	if (t68 != 32767LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x717 = INT64_MAX;
	volatile uint64_t x719 = 1838LLU;
	static volatile int8_t x720 = 1;
	static uint64_t t69 = 4829LLU;

	t69 = (x717%(x718%(x719/x720)));

	if (t69 != 752LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x725 = INT64_MIN;
	static int64_t x726 = 3269443412127LL;
	int16_t x727 = -6090;
	uint16_t x728 = 229U;
	volatile int64_t t70 = 699326LL;

	t70 = (x725%(x726%(x727/x728)));

	if (t70 != -8LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x737 = 0;
	static volatile int8_t x740 = INT8_MIN;
	static int32_t t71 = -24135678;

	t71 = (x737%(x738%(x739/x740)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x745 = UINT16_MAX;
	static int16_t x746 = INT16_MIN;
	uint64_t x747 = 32961747493LLU;
	uint64_t t72 = 1758813103066LLU;

	t72 = (x745%(x746%(x747/x748)));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x749 = 2U;
	volatile int16_t x750 = -1;
	int32_t x751 = INT32_MAX;
	uint8_t x752 = 3U;
	volatile int32_t t73 = 2;

	t73 = (x749%(x750%(x751/x752)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x765 = -1;
	int16_t x766 = 119;
	int32_t x767 = INT32_MIN;
	volatile int16_t x768 = INT16_MIN;
	int32_t t74 = 0;

	t74 = (x765%(x766%(x767/x768)));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x777 = INT32_MAX;
	volatile int8_t x778 = INT8_MAX;
	int64_t x779 = INT64_MAX;
	static uint16_t x780 = 22U;
	volatile int64_t t75 = -34235743180069LL;

	t75 = (x777%(x778%(x779/x780)));

	if (t75 != 7LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x781 = INT64_MIN;
	static uint32_t x782 = 125U;
	int64_t x783 = INT64_MIN;
	static int64_t x784 = -354170LL;
	int64_t t76 = 17189197263424114LL;

	t76 = (x781%(x782%(x783/x784)));

	if (t76 != -58LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x785 = 1476U;
	int8_t x786 = -4;
	static uint16_t x787 = UINT16_MAX;
	static volatile int64_t x788 = -1LL;

	t77 = (x785%(x786%(x787/x788)));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x813 = INT8_MIN;
	uint16_t x814 = 4746U;
	int32_t x815 = INT32_MIN;
	static int32_t t78 = 173676;

	t78 = (x813%(x814%(x815/x816)));

	if (t78 != -128) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x837 = INT64_MIN;
	int16_t x838 = -1;
	uint16_t x839 = 231U;
	uint16_t x840 = 15U;
	int64_t t79 = 860LL;

	t79 = (x837%(x838%(x839/x840)));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x842 = 1337444U;
	volatile uint16_t x843 = 232U;
	uint8_t x844 = 7U;
	int64_t t80 = 3392150LL;

	t80 = (x841%(x842%(x843/x844)));

	if (t80 != 7LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x847 = 47932U;
	static uint64_t t81 = 22LLU;

	t81 = (x845%(x846%(x847/x848)));

	if (t81 != 622LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x853 = INT16_MIN;
	volatile uint16_t x854 = 5U;
	uint64_t x856 = 8LLU;
	static volatile uint64_t t82 = 107082174892LLU;

	t82 = (x853%(x854%(x855/x856)));

	if (t82 != 3LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x857 = 7814LLU;
	volatile uint64_t t83 = 216581141LLU;

	t83 = (x857%(x858%(x859/x860)));

	if (t83 != 7814LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x870 = -106;
	int16_t x871 = INT16_MIN;
	uint8_t x872 = 7U;
	volatile int32_t t84 = 4872223;

	t84 = (x869%(x870%(x871/x872)));

	if (t84 != 43) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x881 = INT64_MIN;
	static uint16_t x882 = 1617U;
	int32_t x883 = INT32_MAX;

	t85 = (x881%(x882%(x883/x884)));

	if (t85 != -932LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x909 = 372U;
	static volatile int32_t x910 = -1;
	int16_t x912 = -925;
	volatile int32_t t86 = 217058;

	t86 = (x909%(x910%(x911/x912)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x929 = 5U;
	uint16_t x930 = 59U;
	int16_t x932 = -1;
	static int32_t t87 = 1482;

	t87 = (x929%(x930%(x931/x932)));

	if (t87 != 5) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x941 = -10;
	int16_t x942 = -1;
	int16_t x943 = INT16_MAX;
	volatile int32_t t88 = -3726407;

	t88 = (x941%(x942%(x943/x944)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x949 = -195386;
	int32_t x950 = INT32_MAX;
	int32_t x951 = -967;
	uint8_t x952 = 3U;
	static int32_t t89 = -499846935;

	t89 = (x949%(x950%(x951/x952)));

	if (t89 != -91) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x953 = INT32_MIN;
	volatile int8_t x954 = -18;
	volatile int16_t x955 = INT16_MIN;
	static int16_t x956 = 1;
	volatile int32_t t90 = -545;

	t90 = (x953%(x954%(x955/x956)));

	if (t90 != -2) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint64_t x957 = 456018906LLU;
	uint16_t x958 = UINT16_MAX;
	int32_t x959 = -16725322;
	uint16_t x960 = 333U;
	volatile uint64_t t91 = 16468LLU;

	t91 = (x957%(x958%(x959/x960)));

	if (t91 != 9723LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x961 = UINT32_MAX;
	static uint8_t x963 = 3U;
	uint32_t t92 = 854725U;

	t92 = (x961%(x962%(x963/x964)));

	if (t92 != 3148735U) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x973 = -65;
	volatile int16_t x975 = -474;
	int16_t x976 = -27;
	volatile int32_t t93 = -8;

	t93 = (x973%(x974%(x975/x976)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x978 = -1;
	int64_t x979 = INT64_MIN;
	int32_t x980 = -17588463;
	int64_t t94 = -15121020LL;

	t94 = (x977%(x978%(x979/x980)));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x985 = 156U;
	int32_t x986 = INT32_MIN;
	int64_t x987 = INT64_MAX;

	t95 = (x985%(x986%(x987/x988)));

	if (t95 != 156LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x994 = UINT32_MAX;
	int32_t x995 = -553873;
	uint16_t x996 = 92U;
	static int64_t t96 = 551LL;

	t96 = (x993%(x994%(x995/x996)));

	if (t96 != 3587LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x997 = 8874246LLU;
	int16_t x998 = INT16_MIN;
	uint32_t x999 = UINT32_MAX;
	volatile uint8_t x1000 = UINT8_MAX;
	uint64_t t97 = 130477996419898LLU;

	t97 = (x997%(x998%(x999/x1000)));

	if (t97 != 8874246LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x1001 = 9;
	volatile uint64_t x1002 = 39LLU;
	uint8_t x1004 = 14U;
	uint64_t t98 = 7713LLU;

	t98 = (x1001%(x1002%(x1003/x1004)));

	if (t98 != 9LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x1013 = 10511LL;
	int16_t x1014 = 3;
	int64_t x1015 = -7751599899772LL;
	static volatile int64_t t99 = 934LL;

	t99 = (x1013%(x1014%(x1015/x1016)));

	if (t99 != 2LL) { NG(); } else { ; }
	
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

