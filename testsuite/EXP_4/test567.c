#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 22991928;
int64_t x14 = INT64_MAX;
static int8_t x17 = INT8_MIN;
volatile int64_t x19 = INT64_MIN;
int64_t x28 = -1LL;
volatile uint16_t x30 = 58U;
uint64_t x31 = 573427LLU;
volatile int64_t x33 = INT64_MIN;
volatile int32_t t5 = 244839;
volatile int64_t x41 = -1LL;
uint32_t x51 = 1077506580U;
uint32_t x52 = 41U;
int16_t x53 = -1;
volatile int64_t x55 = 1028910201646860537LL;
uint64_t x94 = 4302746074421349LLU;
int8_t x98 = INT8_MIN;
int32_t x125 = INT32_MAX;
int16_t x140 = -1;
int64_t x150 = -1LL;
volatile uint32_t x151 = UINT32_MAX;
int16_t x159 = INT16_MIN;
static int32_t t21 = 20974;
volatile int8_t x165 = INT8_MAX;
int8_t x166 = -3;
int32_t x168 = -15;
static volatile int32_t t23 = -4836;
int32_t x180 = INT32_MAX;
int32_t x212 = -1;
int32_t t27 = -5667;
int8_t x233 = -1;
uint64_t x244 = 17736254832LLU;
int16_t x251 = INT16_MAX;
int32_t x261 = INT32_MAX;
uint32_t x280 = 244304U;
static int16_t x282 = INT16_MIN;
uint16_t x292 = 73U;
static int16_t x300 = INT16_MIN;
static int32_t x310 = 109;
int64_t x311 = -1LL;
uint64_t x319 = 42818016990641147LLU;
uint32_t x349 = 1728126900U;
volatile int32_t t43 = 207799;
volatile int32_t x358 = INT32_MIN;
volatile int32_t t44 = -314;
int32_t t46 = 791805299;
static int64_t x382 = 19957018747LL;
int32_t x383 = INT32_MIN;
int32_t x409 = -3829324;
static int32_t x410 = -1;
int16_t x412 = -1;
uint16_t x417 = UINT16_MAX;
int32_t x421 = INT32_MAX;
int8_t x437 = -8;
int32_t t53 = -125021;
static volatile int16_t x459 = INT16_MAX;
volatile int64_t x470 = -3433136816431LL;
int8_t x475 = -11;
int32_t x494 = 404;
static volatile int32_t t59 = 12530;
int64_t x530 = INT64_MIN;
static int32_t t61 = -2443;
uint32_t x541 = UINT32_MAX;
int32_t t62 = 2627;
uint64_t x550 = 0LLU;
static uint32_t x551 = UINT32_MAX;
static int8_t x610 = INT8_MIN;
volatile int32_t t67 = -93487;
static int32_t x623 = INT32_MIN;
static volatile int8_t x653 = -1;
int32_t t71 = -416149;
int32_t x686 = INT32_MIN;
volatile int8_t x688 = -1;
int16_t x702 = INT16_MIN;
int8_t x713 = -1;
int8_t x714 = 58;
static volatile int32_t x715 = 6148596;
volatile uint64_t x726 = UINT64_MAX;
uint64_t x738 = UINT64_MAX;
int32_t x740 = INT32_MAX;
volatile int32_t x753 = -42063233;
volatile int16_t x756 = INT16_MIN;
volatile uint64_t x779 = UINT64_MAX;
static int32_t x781 = INT32_MIN;
volatile int32_t t84 = 1;
int8_t x789 = INT8_MIN;
volatile int16_t x790 = INT16_MAX;
volatile int32_t t85 = -357855;
volatile int64_t x807 = -259922LL;
volatile int32_t t87 = 755306;
int32_t x817 = -1;
int64_t x819 = INT64_MAX;
static uint16_t x830 = UINT16_MAX;
static int16_t x840 = INT16_MAX;
static volatile int32_t t90 = 1;
uint64_t x846 = 82LLU;
uint8_t x847 = UINT8_MAX;
volatile int32_t t91 = -12834465;
volatile int8_t x849 = -1;
uint16_t x850 = 1U;
static int16_t x852 = -27;
int64_t x853 = 512729321LL;
int64_t x855 = -1LL;
int8_t x859 = INT8_MIN;
int32_t t94 = -465217;
static int32_t x862 = INT32_MAX;
int32_t x864 = -1;
int32_t x875 = INT32_MIN;
static volatile int32_t t96 = -657444208;
static uint32_t x887 = UINT32_MAX;
volatile int32_t t98 = 9932;
static volatile int16_t x891 = INT16_MIN;


void f0(void) {
	uint32_t x1 = 1319183U;
	int8_t x2 = INT8_MIN;
	int32_t x3 = INT32_MAX;
	volatile uint64_t x4 = 470491634LLU;

	t0 = (x1==(x2%(x3/x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x13 = UINT8_MAX;
	volatile int16_t x15 = INT16_MIN;
	static int16_t x16 = INT16_MIN;
	static int32_t t1 = 16646;

	t1 = (x13==(x14%(x15/x16)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x18 = UINT64_MAX;
	static int64_t x20 = -3432560011579LL;
	static int32_t t2 = -379050;

	t2 = (x17==(x18%(x19/x20)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x25 = 6U;
	static int32_t x26 = INT32_MIN;
	volatile uint8_t x27 = 11U;
	int32_t t3 = 15340624;

	t3 = (x25==(x26%(x27/x28)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x29 = 280U;
	volatile uint16_t x32 = 674U;
	int32_t t4 = 1100250;

	t4 = (x29==(x30%(x31/x32)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x34 = 229761903LLU;
	int8_t x35 = INT8_MIN;
	int8_t x36 = -1;

	t5 = (x33==(x34%(x35/x36)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x42 = INT16_MIN;
	volatile int16_t x43 = INT16_MIN;
	volatile int16_t x44 = -1;
	int32_t t6 = -1350575;

	t6 = (x41==(x42%(x43/x44)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x49 = -2;
	static int64_t x50 = -84211LL;
	int32_t t7 = 31694;

	t7 = (x49==(x50%(x51/x52)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x54 = 29582994LLU;
	volatile int64_t x56 = 82174607532LL;
	volatile int32_t t8 = -501720;

	t8 = (x53==(x54%(x55/x56)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x57 = -1;
	static int16_t x58 = 32;
	static int64_t x59 = INT64_MAX;
	int64_t x60 = -1LL;
	int32_t t9 = 40;

	t9 = (x57==(x58%(x59/x60)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x65 = INT16_MIN;
	int8_t x66 = INT8_MIN;
	volatile uint32_t x67 = 404166617U;
	volatile uint32_t x68 = 3520U;
	int32_t t10 = -3348348;

	t10 = (x65==(x66%(x67/x68)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x69 = UINT32_MAX;
	int64_t x70 = INT64_MAX;
	int8_t x71 = INT8_MAX;
	int8_t x72 = 54;
	int32_t t11 = -827;

	t11 = (x69==(x70%(x71/x72)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x73 = -1;
	int16_t x74 = INT16_MIN;
	int32_t x75 = INT32_MAX;
	int8_t x76 = INT8_MIN;
	int32_t t12 = 1;

	t12 = (x73==(x74%(x75/x76)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x93 = INT64_MIN;
	int64_t x95 = -192715869699240LL;
	int16_t x96 = INT16_MIN;
	static volatile int32_t t13 = -120096;

	t13 = (x93==(x94%(x95/x96)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x97 = 24048631U;
	int8_t x99 = -6;
	uint64_t x100 = 18LLU;
	int32_t t14 = -2177;

	t14 = (x97==(x98%(x99/x100)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x126 = INT64_MIN;
	static int64_t x127 = 337439019614LL;
	uint8_t x128 = 91U;
	static int32_t t15 = 14145;

	t15 = (x125==(x126%(x127/x128)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint32_t x129 = 0U;
	static uint16_t x130 = 2191U;
	volatile int16_t x131 = INT16_MIN;
	uint32_t x132 = 85U;
	static int32_t t16 = 11857570;

	t16 = (x129==(x130%(x131/x132)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x137 = INT64_MIN;
	uint16_t x138 = 178U;
	int8_t x139 = 2;
	static int32_t t17 = 12747;

	t17 = (x137==(x138%(x139/x140)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x145 = INT64_MIN;
	static int64_t x146 = -22602689366223LL;
	int8_t x147 = -1;
	uint64_t x148 = UINT64_MAX;
	volatile int32_t t18 = 17;

	t18 = (x145==(x146%(x147/x148)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x149 = -2;
	int32_t x152 = 7;
	volatile int32_t t19 = 35680895;

	t19 = (x149==(x150%(x151/x152)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x153 = 120585U;
	int32_t x154 = -1;
	uint64_t x155 = 444103232LLU;
	uint32_t x156 = 377U;
	static int32_t t20 = 24960976;

	t20 = (x153==(x154%(x155/x156)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x157 = 21883175247LL;
	static volatile int16_t x158 = -1;
	uint16_t x160 = 1U;

	t21 = (x157==(x158%(x159/x160)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x167 = -26658975;
	volatile int32_t t22 = 31237;

	t22 = (x165==(x166%(x167/x168)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x173 = 407U;
	static int32_t x174 = INT32_MAX;
	static int8_t x175 = INT8_MIN;
	int16_t x176 = 3;

	t23 = (x173==(x174%(x175/x176)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x177 = INT64_MAX;
	uint8_t x178 = UINT8_MAX;
	int32_t x179 = INT32_MIN;
	static volatile int32_t t24 = -1;

	t24 = (x177==(x178%(x179/x180)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x181 = -1LL;
	static int64_t x182 = -2997894856LL;
	int32_t x183 = INT32_MAX;
	static uint8_t x184 = 49U;
	static int32_t t25 = 2;

	t25 = (x181==(x182%(x183/x184)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int32_t x201 = INT32_MIN;
	uint64_t x202 = 412133LLU;
	volatile uint16_t x203 = 1U;
	int8_t x204 = -1;
	volatile int32_t t26 = -1;

	t26 = (x201==(x202%(x203/x204)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int16_t x209 = 1;
	int64_t x210 = -41298LL;
	static uint8_t x211 = UINT8_MAX;

	t27 = (x209==(x210%(x211/x212)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x217 = -1LL;
	int32_t x218 = -1327;
	uint64_t x219 = 355903630255773LLU;
	uint16_t x220 = UINT16_MAX;
	volatile int32_t t28 = 0;

	t28 = (x217==(x218%(x219/x220)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x229 = 3U;
	static uint8_t x230 = 96U;
	volatile int16_t x231 = INT16_MIN;
	uint32_t x232 = 60U;
	static volatile int32_t t29 = -194972764;

	t29 = (x229==(x230%(x231/x232)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x234 = INT64_MAX;
	uint64_t x235 = UINT64_MAX;
	int8_t x236 = INT8_MIN;
	static volatile int32_t t30 = 1;

	t30 = (x233==(x234%(x235/x236)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x237 = 2325LLU;
	int32_t x238 = INT32_MIN;
	int16_t x239 = INT16_MAX;
	uint8_t x240 = UINT8_MAX;
	static volatile int32_t t31 = 46;

	t31 = (x237==(x238%(x239/x240)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x241 = 1;
	uint8_t x242 = 3U;
	static volatile int64_t x243 = INT64_MIN;
	static int32_t t32 = -598;

	t32 = (x241==(x242%(x243/x244)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x249 = INT16_MIN;
	uint8_t x250 = 5U;
	volatile int8_t x252 = INT8_MIN;
	int32_t t33 = 1;

	t33 = (x249==(x250%(x251/x252)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x253 = 241176474199LLU;
	static uint32_t x254 = 445132940U;
	int16_t x255 = INT16_MIN;
	uint32_t x256 = 10459U;
	volatile int32_t t34 = -1631089;

	t34 = (x253==(x254%(x255/x256)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x262 = UINT64_MAX;
	int16_t x263 = INT16_MIN;
	uint8_t x264 = UINT8_MAX;
	static int32_t t35 = -44969277;

	t35 = (x261==(x262%(x263/x264)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x269 = INT8_MIN;
	volatile int32_t x270 = INT32_MIN;
	static int64_t x271 = INT64_MAX;
	volatile uint32_t x272 = 257955295U;
	volatile int32_t t36 = -189388564;

	t36 = (x269==(x270%(x271/x272)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x277 = UINT8_MAX;
	int64_t x278 = INT64_MIN;
	int32_t x279 = INT32_MAX;
	int32_t t37 = -1;

	t37 = (x277==(x278%(x279/x280)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x281 = -1LL;
	uint8_t x283 = 98U;
	int8_t x284 = 1;
	int32_t t38 = -3;

	t38 = (x281==(x282%(x283/x284)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x289 = 4U;
	int8_t x290 = INT8_MAX;
	static int64_t x291 = -25209785564LL;
	volatile int32_t t39 = 120826906;

	t39 = (x289==(x290%(x291/x292)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x297 = -1;
	int8_t x298 = INT8_MIN;
	static volatile int32_t x299 = INT32_MIN;
	int32_t t40 = 222970970;

	t40 = (x297==(x298%(x299/x300)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x309 = -938;
	int16_t x312 = -1;
	volatile int32_t t41 = 1566599;

	t41 = (x309==(x310%(x311/x312)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x317 = INT16_MAX;
	volatile uint32_t x318 = UINT32_MAX;
	int16_t x320 = 1;
	int32_t t42 = -78085;

	t42 = (x317==(x318%(x319/x320)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x350 = INT64_MIN;
	uint64_t x351 = UINT64_MAX;
	uint64_t x352 = 392750572511378LLU;

	t43 = (x349==(x350%(x351/x352)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x357 = 565;
	int16_t x359 = INT16_MIN;
	static int8_t x360 = INT8_MIN;

	t44 = (x357==(x358%(x359/x360)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x369 = 1414LLU;
	int32_t x370 = INT32_MIN;
	int32_t x371 = 244939;
	int16_t x372 = 4;
	static volatile int32_t t45 = -337497;

	t45 = (x369==(x370%(x371/x372)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x377 = 1;
	int32_t x378 = INT32_MIN;
	static uint64_t x379 = 672449448189LLU;
	uint32_t x380 = 2U;

	t46 = (x377==(x378%(x379/x380)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x381 = INT64_MIN;
	static volatile int8_t x384 = INT8_MAX;
	volatile int32_t t47 = 44374657;

	t47 = (x381==(x382%(x383/x384)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int32_t x401 = -433166;
	int64_t x402 = INT64_MIN;
	static uint64_t x403 = UINT64_MAX;
	volatile int64_t x404 = -1064898233089460804LL;
	int32_t t48 = -372550;

	t48 = (x401==(x402%(x403/x404)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x411 = -2;
	volatile int32_t t49 = 1;

	t49 = (x409==(x410%(x411/x412)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x413 = 16304LLU;
	volatile int16_t x414 = INT16_MIN;
	int32_t x415 = INT32_MAX;
	uint16_t x416 = 254U;
	volatile int32_t t50 = -1986;

	t50 = (x413==(x414%(x415/x416)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x418 = 650484LL;
	int8_t x419 = -1;
	uint32_t x420 = UINT32_MAX;
	int32_t t51 = -1;

	t51 = (x417==(x418%(x419/x420)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x422 = INT16_MIN;
	int16_t x423 = INT16_MIN;
	uint32_t x424 = 189U;
	int32_t t52 = 1981;

	t52 = (x421==(x422%(x423/x424)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x438 = -1;
	volatile int32_t x439 = INT32_MIN;
	volatile int32_t x440 = -110800;

	t53 = (x437==(x438%(x439/x440)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x449 = 0U;
	int16_t x450 = -1;
	uint64_t x451 = UINT64_MAX;
	int16_t x452 = -6;
	volatile int32_t t54 = -2;

	t54 = (x449==(x450%(x451/x452)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x457 = 1LL;
	uint16_t x458 = 1995U;
	uint32_t x460 = 9412U;
	static int32_t t55 = 268352976;

	t55 = (x457==(x458%(x459/x460)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x469 = -1LL;
	int64_t x471 = INT64_MAX;
	int32_t x472 = -124040;
	volatile int32_t t56 = 1;

	t56 = (x469==(x470%(x471/x472)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x473 = INT8_MIN;
	int8_t x474 = INT8_MIN;
	uint16_t x476 = 11U;
	int32_t t57 = 222075375;

	t57 = (x473==(x474%(x475/x476)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int16_t x493 = INT16_MIN;
	static uint32_t x495 = UINT32_MAX;
	int32_t x496 = 632794;
	int32_t t58 = -196;

	t58 = (x493==(x494%(x495/x496)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x497 = 6U;
	uint8_t x498 = 7U;
	int16_t x499 = -1;
	uint64_t x500 = UINT64_MAX;

	t59 = (x497==(x498%(x499/x500)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x517 = 285012898814696LLU;
	volatile int8_t x518 = INT8_MIN;
	static volatile int16_t x519 = INT16_MAX;
	uint64_t x520 = 1517LLU;
	volatile int32_t t60 = -109799;

	t60 = (x517==(x518%(x519/x520)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x529 = 185093997402056545LLU;
	uint32_t x531 = 5470U;
	int8_t x532 = INT8_MAX;

	t61 = (x529==(x530%(x531/x532)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x542 = UINT32_MAX;
	int8_t x543 = -1;
	uint64_t x544 = 248583423955784126LLU;

	t62 = (x541==(x542%(x543/x544)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x549 = 2LLU;
	static int8_t x552 = INT8_MAX;
	int32_t t63 = -27;

	t63 = (x549==(x550%(x551/x552)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x565 = 0;
	static int64_t x566 = -476859986014LL;
	volatile int8_t x567 = INT8_MIN;
	int8_t x568 = INT8_MAX;
	int32_t t64 = 1537703;

	t64 = (x565==(x566%(x567/x568)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x597 = INT64_MAX;
	static uint16_t x598 = 5U;
	volatile int8_t x599 = INT8_MAX;
	int8_t x600 = 23;
	int32_t t65 = -165506;

	t65 = (x597==(x598%(x599/x600)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x601 = 25;
	volatile int64_t x602 = INT64_MIN;
	int32_t x603 = INT32_MAX;
	volatile int8_t x604 = INT8_MIN;
	static volatile int32_t t66 = 13400;

	t66 = (x601==(x602%(x603/x604)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x609 = -1;
	static int16_t x611 = -1;
	static int8_t x612 = 1;

	t67 = (x609==(x610%(x611/x612)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x621 = INT8_MIN;
	volatile uint8_t x622 = 25U;
	static uint32_t x624 = 10012U;
	volatile int32_t t68 = -5798;

	t68 = (x621==(x622%(x623/x624)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x649 = 199245;
	int32_t x650 = 5455;
	static volatile int64_t x651 = INT64_MAX;
	uint8_t x652 = 41U;
	static int32_t t69 = 359290472;

	t69 = (x649==(x650%(x651/x652)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x654 = 473608U;
	int32_t x655 = -20989783;
	static int8_t x656 = INT8_MIN;
	int32_t t70 = 4736941;

	t70 = (x653==(x654%(x655/x656)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x673 = UINT8_MAX;
	int64_t x674 = -1LL;
	int64_t x675 = INT64_MIN;
	static uint16_t x676 = 80U;

	t71 = (x673==(x674%(x675/x676)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x685 = 4578618;
	uint8_t x687 = UINT8_MAX;
	volatile int32_t t72 = 506963;

	t72 = (x685==(x686%(x687/x688)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x693 = 617960223LL;
	static uint8_t x694 = 21U;
	int32_t x695 = INT32_MAX;
	uint32_t x696 = 15802U;
	volatile int32_t t73 = 8;

	t73 = (x693==(x694%(x695/x696)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x697 = 283U;
	int32_t x698 = INT32_MIN;
	uint32_t x699 = UINT32_MAX;
	int8_t x700 = INT8_MIN;
	volatile int32_t t74 = 471;

	t74 = (x697==(x698%(x699/x700)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x701 = -1;
	uint64_t x703 = 46940916970566612LLU;
	int32_t x704 = INT32_MAX;
	volatile int32_t t75 = 1;

	t75 = (x701==(x702%(x703/x704)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x705 = -1LL;
	uint16_t x706 = UINT16_MAX;
	int8_t x707 = INT8_MIN;
	static int16_t x708 = 32;
	volatile int32_t t76 = 212510;

	t76 = (x705==(x706%(x707/x708)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x716 = -13;
	int32_t t77 = -68773422;

	t77 = (x713==(x714%(x715/x716)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x725 = 1LL;
	int64_t x727 = INT64_MAX;
	int16_t x728 = -1;
	volatile int32_t t78 = 19588;

	t78 = (x725==(x726%(x727/x728)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x737 = -323;
	volatile int32_t x739 = INT32_MIN;
	int32_t t79 = 10822052;

	t79 = (x737==(x738%(x739/x740)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x754 = 10U;
	int64_t x755 = INT64_MIN;
	int32_t t80 = 244;

	t80 = (x753==(x754%(x755/x756)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x757 = 54U;
	uint64_t x758 = UINT64_MAX;
	uint16_t x759 = 18U;
	volatile int8_t x760 = 4;
	volatile int32_t t81 = -348878886;

	t81 = (x757==(x758%(x759/x760)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x765 = 93931U;
	int64_t x766 = INT64_MIN;
	volatile int16_t x767 = INT16_MIN;
	static int16_t x768 = INT16_MIN;
	volatile int32_t t82 = -209;

	t82 = (x765==(x766%(x767/x768)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x777 = 666LLU;
	static volatile int64_t x778 = INT64_MIN;
	int8_t x780 = -2;
	static volatile int32_t t83 = 1;

	t83 = (x777==(x778%(x779/x780)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x782 = -1;
	int64_t x783 = INT64_MIN;
	volatile int64_t x784 = -1066LL;

	t84 = (x781==(x782%(x783/x784)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x791 = INT32_MAX;
	uint16_t x792 = UINT16_MAX;

	t85 = (x789==(x790%(x791/x792)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x793 = 545854573440964274LL;
	int8_t x794 = -1;
	int16_t x795 = INT16_MAX;
	int32_t x796 = -1;
	volatile int32_t t86 = -95225;

	t86 = (x793==(x794%(x795/x796)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x805 = -1LL;
	int8_t x806 = INT8_MIN;
	int8_t x808 = 1;

	t87 = (x805==(x806%(x807/x808)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x818 = INT8_MIN;
	int32_t x820 = INT32_MIN;
	volatile int32_t t88 = 38;

	t88 = (x817==(x818%(x819/x820)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x829 = 1;
	uint64_t x831 = UINT64_MAX;
	int32_t x832 = INT32_MAX;
	volatile int32_t t89 = -5487226;

	t89 = (x829==(x830%(x831/x832)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x837 = 108U;
	volatile uint64_t x838 = UINT64_MAX;
	volatile int16_t x839 = INT16_MIN;

	t90 = (x837==(x838%(x839/x840)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x845 = -12;
	int8_t x848 = -5;

	t91 = (x845==(x846%(x847/x848)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x851 = -14778614;
	int32_t t92 = 897299269;

	t92 = (x849==(x850%(x851/x852)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x854 = 16U;
	volatile int16_t x856 = -1;
	volatile int32_t t93 = -24769786;

	t93 = (x853==(x854%(x855/x856)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x857 = 3400LLU;
	uint64_t x858 = 43405026606578LLU;
	int8_t x860 = INT8_MIN;

	t94 = (x857==(x858%(x859/x860)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x861 = 1100U;
	int32_t x863 = -4;
	volatile int32_t t95 = -4430;

	t95 = (x861==(x862%(x863/x864)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x873 = 3413U;
	int64_t x874 = INT64_MAX;
	int8_t x876 = INT8_MIN;

	t96 = (x873==(x874%(x875/x876)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x881 = UINT16_MAX;
	int64_t x882 = -1LL;
	int16_t x883 = INT16_MAX;
	volatile int8_t x884 = -20;
	static volatile int32_t t97 = 25;

	t97 = (x881==(x882%(x883/x884)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x885 = -1LL;
	volatile uint8_t x886 = UINT8_MAX;
	int16_t x888 = -1;

	t98 = (x885==(x886%(x887/x888)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x889 = INT32_MAX;
	uint32_t x890 = UINT32_MAX;
	static uint32_t x892 = 117254U;
	volatile int32_t t99 = 7313;

	t99 = (x889==(x890%(x891/x892)));

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

