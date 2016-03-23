
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x8 = INT16_MIN;
int32_t x10 = INT32_MIN;
volatile int32_t x11 = -1;
uint32_t x14 = UINT32_MAX;
uint8_t x17 = 13U;
static uint32_t t6 = 415672U;
uint16_t x36 = UINT16_MAX;
volatile uint32_t x37 = 2U;
uint16_t x42 = 9U;
volatile int32_t x50 = INT32_MIN;
int32_t x52 = -1;
static volatile uint64_t t11 = 68687376469701423LLU;
int16_t x57 = -1;
int16_t x58 = INT16_MIN;
int32_t t13 = -196909572;
int32_t x61 = INT32_MIN;
int16_t x64 = -1;
volatile uint16_t x69 = 17464U;
int16_t x83 = 0;
volatile int32_t t16 = -161;
static int16_t x86 = -1;
volatile uint64_t t18 = 312691496576372605LLU;
int32_t x100 = INT32_MIN;
volatile int64_t t20 = 9LL;
static volatile uint8_t x101 = UINT8_MAX;
int8_t x108 = INT8_MAX;
int16_t x116 = INT16_MIN;
volatile uint64_t t24 = 39099864069369733LLU;
int64_t x128 = -24730573316LL;
volatile int8_t x134 = 10;
static volatile uint8_t x138 = 1U;
int64_t t31 = 49221885LL;
uint8_t x152 = 1U;
int64_t x153 = INT64_MAX;
int16_t x157 = -1;
int32_t x161 = INT32_MIN;
uint16_t x162 = 96U;
uint16_t x163 = 12U;
int16_t x164 = INT16_MIN;
int8_t x170 = 56;
int16_t x173 = INT16_MIN;
int8_t x175 = INT8_MIN;
int64_t x183 = INT64_MIN;
static volatile uint16_t x187 = 28U;
int64_t x191 = -384862983LL;
uint64_t x197 = 5628418476LLU;
volatile int64_t t44 = -1433LL;
uint64_t t45 = 21199463855LLU;
static int16_t x212 = -34;
uint32_t t48 = 4086450U;
int32_t x226 = INT32_MAX;
uint64_t x228 = 7685641068860LLU;
volatile uint64_t t50 = 9651116759249LLU;
int16_t x229 = INT16_MAX;
int8_t x232 = INT8_MIN;
uint8_t x237 = 63U;
uint8_t x238 = 1U;
uint32_t x241 = 593525918U;
volatile uint64_t t54 = 115201646408LLU;
int8_t x245 = 0;
volatile uint16_t x248 = UINT16_MAX;
volatile int32_t t55 = -8547;
int64_t x252 = 44LL;
volatile int64_t t56 = -25813996201248LL;
int64_t x254 = -722575422684LL;
static uint32_t x262 = UINT32_MAX;
volatile uint64_t x265 = UINT64_MAX;
volatile int32_t t61 = -1739754;
int8_t x281 = INT8_MIN;
int64_t x286 = INT64_MAX;
int64_t x289 = INT64_MIN;
int32_t x294 = INT32_MIN;
uint16_t x302 = 1U;
uint8_t x305 = UINT8_MAX;
int8_t x312 = INT8_MIN;
int32_t x313 = -4444;
int32_t x316 = INT32_MIN;
uint8_t x322 = 3U;
int64_t x325 = 181LL;
uint16_t x329 = 49U;
int64_t x331 = INT64_MIN;
volatile uint64_t x340 = UINT64_MAX;
uint64_t t77 = 359500LLU;
static int8_t x351 = 35;
int16_t x354 = INT16_MAX;
int8_t x356 = -1;
static int32_t x369 = -1;
int32_t x379 = -1;
uint64_t x380 = 85957521882570679LLU;
static uint64_t t84 = 58423LLU;
static int32_t x381 = 5;
int16_t x386 = INT16_MIN;
int16_t x387 = INT16_MIN;
volatile uint32_t t87 = 109013U;
int16_t x393 = INT16_MAX;
static volatile int32_t x397 = 30013;
volatile int8_t x405 = INT8_MIN;
static volatile int8_t x408 = -1;
uint16_t x415 = UINT16_MAX;
int16_t x416 = INT16_MIN;
uint64_t t94 = 3523LLU;
int32_t x421 = INT32_MIN;
int32_t x422 = INT32_MIN;
int8_t x430 = -1;
int64_t x431 = -1LL;
volatile int32_t t98 = -4;
volatile int8_t x437 = 29;
int8_t x443 = INT8_MIN;
int8_t x448 = INT8_MIN;
uint32_t x449 = 237495993U;
static volatile int32_t t104 = 125495;
int32_t x464 = INT32_MAX;
int32_t t105 = 22;
int64_t x471 = -1LL;
int8_t x483 = -43;
volatile int8_t x484 = -16;
uint64_t t109 = 467687797LLU;
static int8_t x489 = INT8_MIN;
int64_t t113 = -3LL;
uint8_t x504 = 4U;
static uint16_t x512 = UINT16_MAX;
uint64_t x514 = 42747957LLU;
int64_t x515 = INT64_MIN;
uint16_t x528 = 342U;
volatile uint64_t t119 = 560LLU;
uint64_t x529 = 111689599486307LLU;
volatile uint64_t t120 = 15224697LLU;
int64_t x535 = INT64_MIN;
volatile uint64_t x536 = 87592733958331LLU;
static uint8_t x537 = 0U;
volatile uint64_t x547 = 830185914285LLU;
static int8_t x550 = INT8_MIN;
uint32_t x552 = 1793636107U;
static volatile uint64_t t124 = 237715287009059958LLU;
int8_t x554 = 0;
static uint32_t t125 = 4170U;
int16_t x557 = INT16_MIN;
static uint8_t x562 = 93U;
volatile uint32_t t128 = 604U;
static volatile int32_t x569 = -12;
int32_t x574 = 3;
static volatile uint64_t t132 = 6031LLU;
int32_t x594 = -1;
int16_t x601 = INT16_MIN;
uint8_t x610 = UINT8_MAX;
volatile uint64_t t138 = 9330084021LLU;
int32_t x615 = 1;
int32_t x616 = INT32_MIN;
static int8_t x619 = INT8_MIN;
static volatile int16_t x620 = -7936;
volatile uint64_t t140 = 605881263826250LLU;
uint32_t x621 = 376052369U;
static volatile int16_t x622 = INT16_MIN;
volatile uint64_t t142 = 463193765995567448LLU;
uint64_t x630 = 126099306LLU;
uint64_t x634 = 3875815LLU;
volatile uint64_t t144 = 2257596083106995015LLU;
static uint32_t x643 = 5279329U;
volatile int16_t x645 = INT16_MAX;
volatile uint8_t x648 = UINT8_MAX;
int32_t t147 = -13407678;
int32_t x653 = 5775;
int16_t x654 = INT16_MIN;
uint8_t x658 = 7U;
static int32_t x670 = 18122;
uint64_t t150 = 32753LLU;
int64_t x679 = 8054650966715434LL;
volatile int64_t t153 = 9982018831LL;
volatile uint64_t x689 = 84LLU;
int16_t x692 = 1;
uint8_t x695 = 34U;
int8_t x696 = INT8_MAX;
uint64_t x713 = 871640462315332682LLU;
int8_t x716 = INT8_MAX;
volatile int32_t x720 = 2771332;
volatile uint64_t t159 = 452769286718LLU;
uint32_t x722 = 15375U;
int16_t x728 = INT16_MIN;
uint32_t x739 = 80U;
uint16_t x744 = UINT16_MAX;
int16_t x746 = -11;
uint64_t t168 = 1331982LLU;
volatile int8_t x765 = INT8_MAX;
uint64_t t169 = 10467585169489LLU;
static volatile int16_t x775 = 37;
int8_t x786 = 0;
static int64_t x788 = 216898937951253883LL;
volatile int64_t t173 = -140541479332644602LL;
int8_t x791 = -1;
uint32_t t174 = 1U;
uint64_t x795 = 1008760850754LLU;
volatile int16_t x800 = INT16_MIN;
volatile int64_t t176 = 6313LL;
static volatile uint16_t x802 = 1079U;
int8_t x815 = -26;
volatile uint64_t t180 = 498122LLU;
uint64_t t182 = 35612855108042716LLU;
int16_t x825 = -6;
int8_t x839 = INT8_MIN;
int32_t x858 = -1;
static int32_t t190 = -42609087;
uint64_t t192 = 257124049LLU;
uint64_t x884 = 4867187LLU;
volatile int32_t x888 = INT32_MAX;
volatile int16_t x890 = INT16_MIN;
static int32_t x900 = INT32_MAX;
volatile int64_t t199 = 19167597958LL;


void f0(void) {
    	int32_t x1 = INT32_MAX;
	uint8_t x2 = 4U;
	int32_t x3 = -1;
	int64_t x4 = -72LL;
	volatile int64_t t0 = -95LL;

    t0 = (x1+(x2-(x3/x4)));

    if (t0 != 2147483651LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint8_t x5 = 2U;
	uint64_t x6 = 3185644487398064159LLU;
	volatile uint16_t x7 = 2989U;
	uint64_t t1 = 112LLU;

    t1 = (x5+(x6-(x7/x8)));

    if (t1 != 3185644487398064161LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = -61;
	volatile uint64_t x12 = UINT64_MAX;
	uint64_t t2 = 30797558471227LLU;

    t2 = (x9+(x10-(x11/x12)));

    if (t2 != 18446744071562067906LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = 443955U;
	int32_t x15 = INT32_MIN;
	uint64_t x16 = UINT64_MAX;
	static volatile uint64_t t3 = 94656LLU;

    t3 = (x13+(x14-(x15/x16)));

    if (t3 != 4295411250LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x18 = UINT16_MAX;
	int8_t x19 = 14;
	static volatile int64_t x20 = -1LL;
	int64_t t4 = -1920182LL;

    t4 = (x17+(x18-(x19/x20)));

    if (t4 != 65562LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x25 = 12880;
	volatile int64_t x26 = -1LL;
	volatile uint32_t x27 = 8U;
	int16_t x28 = INT16_MIN;
	volatile int64_t t5 = -442908LL;

    t5 = (x25+(x26-(x27/x28)));

    if (t5 != 12879LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x29 = UINT32_MAX;
	int16_t x30 = INT16_MIN;
	static uint32_t x31 = UINT32_MAX;
	uint32_t x32 = 718U;

    t6 = (x29+(x30-(x31/x32)));

    if (t6 != 4288952679U) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x33 = INT16_MIN;
	int16_t x34 = -1923;
	int8_t x35 = INT8_MIN;
	int32_t t7 = -6928961;

    t7 = (x33+(x34-(x35/x36)));

    if (t7 != -34691) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x38 = -1LL;
	uint64_t x39 = 492237136522817772LLU;
	static int32_t x40 = -35690;
	static volatile uint64_t t8 = 58LLU;

    t8 = (x37+(x38-(x39/x40)));

    if (t8 != 1LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x41 = INT16_MIN;
	uint32_t x43 = UINT32_MAX;
	static volatile int8_t x44 = INT8_MAX;
	uint32_t t9 = 25U;

    t9 = (x41+(x42-(x43/x44)));

    if (t9 != 4261115897U) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x45 = 814238300677941LLU;
	volatile int64_t x46 = 44854LL;
	uint64_t x47 = UINT64_MAX;
	volatile int8_t x48 = INT8_MAX;
	uint64_t t10 = 1867531555658101LLU;

    t10 = (x45+(x46-(x47/x48)));

    if (t10 != 18302308358673978729LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x49 = INT8_MAX;
	uint64_t x51 = 125320254697251107LLU;

    t11 = (x49+(x50-(x51/x52)));

    if (t11 != 18446744071562068095LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x53 = 2888726682LLU;
	volatile uint8_t x54 = 13U;
	int8_t x55 = -55;
	int32_t x56 = INT32_MIN;
	volatile uint64_t t12 = 29387958LLU;

    t12 = (x53+(x54-(x55/x56)));

    if (t12 != 2888726695LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x59 = UINT8_MAX;
	static int16_t x60 = 76;

    t13 = (x57+(x58-(x59/x60)));

    if (t13 != -32772) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x62 = 14;
	uint64_t x63 = 12609267816026867LLU;
	uint64_t t14 = 23477511LLU;

    t14 = (x61+(x62-(x63/x64)));

    if (t14 != 18446744071562067982LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x70 = INT16_MAX;
	uint32_t x71 = 1890310U;
	int8_t x72 = INT8_MIN;
	volatile uint32_t t15 = 30922245U;

    t15 = (x69+(x70-(x71/x72)));

    if (t15 != 50231U) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile uint8_t x81 = 54U;
	int8_t x82 = -1;
	int8_t x84 = INT8_MAX;

    t16 = (x81+(x82-(x83/x84)));

    if (t16 != 53) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x85 = -1;
	int16_t x87 = INT16_MIN;
	int32_t x88 = INT32_MAX;
	static int32_t t17 = -969214;

    t17 = (x85+(x86-(x87/x88)));

    if (t17 != -2) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x89 = INT32_MIN;
	uint64_t x90 = 424413LLU;
	uint16_t x91 = 1U;
	static int32_t x92 = -2851373;

    t18 = (x89+(x90-(x91/x92)));

    if (t18 != 18446744071562492381LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x93 = UINT8_MAX;
	static int64_t x94 = -1020LL;
	int32_t x95 = INT32_MIN;
	volatile int32_t x96 = 53273465;
	static volatile int64_t t19 = 1543287LL;

    t19 = (x93+(x94-(x95/x96)));

    if (t19 != -725LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x97 = 128711LL;
	uint32_t x98 = UINT32_MAX;
	static int32_t x99 = INT32_MIN;

    t20 = (x97+(x98-(x99/x100)));

    if (t20 != 4295096005LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x102 = -120062606LL;
	int32_t x103 = -94;
	uint64_t x104 = 14387379542878LLU;
	uint64_t t21 = 3867966822678484LLU;

    t21 = (x101+(x102-(x103/x104)));

    if (t21 != 18446744073588207118LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x105 = 26U;
	uint64_t x106 = 95877505247751LLU;
	uint64_t x107 = 466515350LLU;
	uint64_t t22 = 214LLU;

    t22 = (x105+(x106-(x107/x108)));

    if (t22 != 95877501574428LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile uint64_t x109 = 14058879244086081LLU;
	int16_t x110 = -1;
	volatile int64_t x111 = INT64_MIN;
	int32_t x112 = 17919;
	uint64_t t23 = 2130832529146654LLU;

    t23 = (x109+(x110-(x111/x112)));

    if (t23 != 14573605067896268LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x113 = INT16_MIN;
	int8_t x114 = 5;
	uint64_t x115 = 10197782931LLU;

    t24 = (x113+(x114-(x115/x116)));

    if (t24 != 18446744073709518853LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x117 = 1;
	uint16_t x118 = UINT16_MAX;
	int8_t x119 = INT8_MAX;
	volatile int8_t x120 = -8;
	volatile int32_t t25 = 785504236;

    t25 = (x117+(x118-(x119/x120)));

    if (t25 != 65551) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x121 = UINT64_MAX;
	int32_t x122 = INT32_MIN;
	uint32_t x123 = 13U;
	int32_t x124 = INT32_MIN;
	volatile uint64_t t26 = 1011394683655386LLU;

    t26 = (x121+(x122-(x123/x124)));

    if (t26 != 2147483647LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int64_t x125 = INT64_MIN;
	volatile int32_t x126 = 4032;
	volatile uint16_t x127 = 167U;
	volatile int64_t t27 = -566418897631761750LL;

    t27 = (x125+(x126-(x127/x128)));

    if (t27 != -9223372036854771776LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x129 = INT8_MIN;
	uint64_t x130 = 339881562539853LLU;
	int32_t x131 = 18451037;
	uint16_t x132 = UINT16_MAX;
	uint64_t t28 = 0LLU;

    t28 = (x129+(x130-(x131/x132)));

    if (t28 != 339881562539444LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x133 = 0;
	uint16_t x135 = 607U;
	static uint16_t x136 = 44U;
	int32_t t29 = -41;

    t29 = (x133+(x134-(x135/x136)));

    if (t29 != -3) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x137 = -1;
	int32_t x139 = 1;
	int64_t x140 = INT64_MAX;
	int64_t t30 = -1813787460533227515LL;

    t30 = (x137+(x138-(x139/x140)));

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x141 = -36;
	volatile int8_t x142 = -11;
	static int64_t x143 = -1LL;
	volatile int16_t x144 = 2;

    t31 = (x141+(x142-(x143/x144)));

    if (t31 != -47LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x149 = 187U;
	static volatile int32_t x150 = INT32_MIN;
	int32_t x151 = -822237;
	volatile int32_t t32 = 1;

    t32 = (x149+(x150-(x151/x152)));

    if (t32 != -2146661224) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x154 = 0;
	uint16_t x155 = UINT16_MAX;
	static int16_t x156 = 29;
	volatile int64_t t33 = 1LL;

    t33 = (x153+(x154-(x155/x156)));

    if (t33 != 9223372036854773548LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint64_t x158 = UINT64_MAX;
	uint8_t x159 = UINT8_MAX;
	int16_t x160 = INT16_MIN;
	volatile uint64_t t34 = 153479LLU;

    t34 = (x157+(x158-(x159/x160)));

    if (t34 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t t35 = -355780034;

    t35 = (x161+(x162-(x163/x164)));

    if (t35 != -2147483552) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint32_t x165 = UINT32_MAX;
	int16_t x166 = INT16_MAX;
	volatile int64_t x167 = 505219870LL;
	int8_t x168 = INT8_MAX;
	static volatile int64_t t36 = -3568564LL;

    t36 = (x165+(x166-(x167/x168)));

    if (t36 != 4291021953LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x169 = INT32_MAX;
	static uint32_t x171 = 0U;
	volatile int16_t x172 = -1;
	volatile uint32_t t37 = 7758964U;

    t37 = (x169+(x170-(x171/x172)));

    if (t37 != 2147483703U) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x174 = INT32_MAX;
	uint64_t x176 = 403LLU;
	volatile uint64_t t38 = 1002493999LLU;

    t38 = (x173+(x174-(x175/x176)));

    if (t38 != 18400970517361445296LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x181 = INT32_MIN;
	static int32_t x182 = 6623;
	uint64_t x184 = 223LLU;
	static uint64_t t39 = 16048693707858LLU;

    t39 = (x181+(x182-(x183/x184)));

    if (t39 != 18405383658840752727LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x185 = 465;
	static uint8_t x186 = 62U;
	volatile uint32_t x188 = UINT32_MAX;
	uint32_t t40 = 757U;

    t40 = (x185+(x186-(x187/x188)));

    if (t40 != 527U) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint8_t x189 = UINT8_MAX;
	int64_t x190 = INT64_MIN;
	uint32_t x192 = 489481U;
	volatile int64_t t41 = -81LL;

    t41 = (x189+(x190-(x191/x192)));

    if (t41 != -9223372036854774767LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x193 = INT64_MIN;
	static int32_t x194 = -1;
	uint32_t x195 = 18U;
	volatile int8_t x196 = INT8_MIN;
	int64_t t42 = 1859LL;

    t42 = (x193+(x194-(x195/x196)));

    if (t42 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x198 = -1;
	int64_t x199 = INT64_MIN;
	static int16_t x200 = INT16_MIN;
	volatile uint64_t t43 = 69425660160LLU;

    t43 = (x197+(x198-(x199/x200)));

    if (t43 != 18446462604361259435LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x201 = 996567352LL;
	static volatile uint32_t x202 = UINT32_MAX;
	int64_t x203 = -1LL;
	uint16_t x204 = UINT16_MAX;

    t44 = (x201+(x202-(x203/x204)));

    if (t44 != 5291534647LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x205 = INT16_MIN;
	uint64_t x206 = 13766LLU;
	int32_t x207 = -1;
	volatile uint16_t x208 = 4U;

    t45 = (x205+(x206-(x207/x208)));

    if (t45 != 18446744073709532614LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x209 = 10583;
	static uint32_t x210 = UINT32_MAX;
	int8_t x211 = INT8_MAX;
	uint32_t t46 = 3671740U;

    t46 = (x209+(x210-(x211/x212)));

    if (t46 != 10585U) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x213 = INT64_MIN;
	volatile uint32_t x214 = 8885U;
	uint16_t x215 = 6079U;
	volatile uint64_t x216 = 273035239118LLU;
	uint64_t t47 = 18676473886635LLU;

    t47 = (x213+(x214-(x215/x216)));

    if (t47 != 9223372036854784693LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x217 = 6;
	int8_t x218 = INT8_MAX;
	volatile uint32_t x219 = UINT32_MAX;
	int16_t x220 = 1700;

    t48 = (x217+(x218-(x219/x220)));

    if (t48 != 4292440978U) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x221 = 637U;
	int16_t x222 = INT16_MIN;
	int8_t x223 = INT8_MAX;
	uint32_t x224 = 1752305U;
	uint32_t t49 = 7U;

    t49 = (x221+(x222-(x223/x224)));

    if (t49 != 4294935165U) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x225 = 0U;
	int16_t x227 = -1;

    t50 = (x225+(x226-(x227/x228)));

    if (t50 != 2145083491LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint64_t x230 = UINT64_MAX;
	uint64_t x231 = UINT64_MAX;
	uint64_t t51 = 8170289237179050LLU;

    t51 = (x229+(x230-(x231/x232)));

    if (t51 != 32765LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x233 = 13;
	uint8_t x234 = 1U;
	static int16_t x235 = -1;
	uint8_t x236 = UINT8_MAX;
	static int32_t t52 = 3975;

    t52 = (x233+(x234-(x235/x236)));

    if (t52 != 14) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint32_t x239 = UINT32_MAX;
	int64_t x240 = -36070563LL;
	volatile int64_t t53 = -1651LL;

    t53 = (x237+(x238-(x239/x240)));

    if (t53 != 183LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x242 = 1;
	volatile int16_t x243 = -1;
	uint64_t x244 = 2759387LLU;

    t54 = (x241+(x242-(x243/x244)));

    if (t54 != 18446737389215384613LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x246 = 79739;
	int16_t x247 = -1;

    t55 = (x245+(x246-(x247/x248)));

    if (t55 != 79739) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x249 = INT32_MIN;
	uint8_t x250 = UINT8_MAX;
	int32_t x251 = INT32_MIN;

    t56 = (x249+(x250-(x251/x252)));

    if (t56 != -2098676947LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x253 = UINT32_MAX;
	static int32_t x255 = -1;
	int32_t x256 = INT32_MIN;
	volatile int64_t t57 = -982549216732253LL;

    t57 = (x253+(x254-(x255/x256)));

    if (t57 != -718280455389LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x257 = 1858U;
	int64_t x258 = INT64_MIN;
	int64_t x259 = INT64_MIN;
	uint32_t x260 = 318227U;
	int64_t t58 = -55142096831354LL;

    t58 = (x257+(x258-(x259/x260)));

    if (t58 != -9223343053229761444LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x261 = 99217LLU;
	int16_t x263 = INT16_MIN;
	int16_t x264 = -1;
	uint64_t t59 = 1616LLU;

    t59 = (x261+(x262-(x263/x264)));

    if (t59 != 4295033744LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x266 = INT8_MAX;
	int16_t x267 = -1;
	static uint16_t x268 = 79U;
	volatile uint64_t t60 = 91036802206598554LLU;

    t60 = (x265+(x266-(x267/x268)));

    if (t60 != 126LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x269 = -1;
	static volatile int32_t x270 = INT32_MIN;
	uint8_t x271 = UINT8_MAX;
	static int16_t x272 = -1;

    t61 = (x269+(x270-(x271/x272)));

    if (t61 != -2147483394) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x273 = UINT64_MAX;
	volatile int8_t x274 = INT8_MIN;
	static volatile uint8_t x275 = 39U;
	uint8_t x276 = UINT8_MAX;
	uint64_t t62 = 705534LLU;

    t62 = (x273+(x274-(x275/x276)));

    if (t62 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x277 = INT16_MAX;
	volatile int8_t x278 = -1;
	static uint32_t x279 = 271U;
	volatile int64_t x280 = INT64_MIN;
	volatile int64_t t63 = -44284404LL;

    t63 = (x277+(x278-(x279/x280)));

    if (t63 != 32766LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x282 = INT32_MAX;
	int32_t x283 = INT32_MAX;
	volatile int16_t x284 = INT16_MAX;
	volatile int32_t t64 = -106;

    t64 = (x281+(x282-(x283/x284)));

    if (t64 != 2147417981) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x285 = 47U;
	int8_t x287 = INT8_MAX;
	static uint32_t x288 = 2U;
	static volatile int64_t t65 = 0LL;

    t65 = (x285+(x286-(x287/x288)));

    if (t65 != 9223372036854775791LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x290 = INT64_MIN;
	int16_t x291 = 0;
	volatile uint64_t x292 = UINT64_MAX;
	static volatile uint64_t t66 = 0LLU;

    t66 = (x289+(x290-(x291/x292)));

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int16_t x293 = INT16_MAX;
	volatile int16_t x295 = -1;
	uint8_t x296 = 3U;
	volatile int32_t t67 = 1;

    t67 = (x293+(x294-(x295/x296)));

    if (t67 != -2147450881) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x297 = -1;
	uint8_t x298 = UINT8_MAX;
	static int8_t x299 = -1;
	int64_t x300 = INT64_MAX;
	volatile int64_t t68 = 122LL;

    t68 = (x297+(x298-(x299/x300)));

    if (t68 != 254LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x301 = INT64_MAX;
	int64_t x303 = -1707492834LL;
	int16_t x304 = -1;
	volatile int64_t t69 = -300069764459921LL;

    t69 = (x301+(x302-(x303/x304)));

    if (t69 != 9223372035147282974LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x306 = 32388540LLU;
	int16_t x307 = INT16_MAX;
	int16_t x308 = 1;
	uint64_t t70 = 61724731202752778LLU;

    t70 = (x305+(x306-(x307/x308)));

    if (t70 != 32356028LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x309 = 0LL;
	static volatile int8_t x310 = INT8_MIN;
	static int8_t x311 = INT8_MAX;
	static int64_t t71 = 16727727LL;

    t71 = (x309+(x310-(x311/x312)));

    if (t71 != -128LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static int32_t x314 = 45;
	volatile int32_t x315 = 27717;
	volatile int32_t t72 = 2;

    t72 = (x313+(x314-(x315/x316)));

    if (t72 != -4399) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x317 = INT8_MIN;
	static int16_t x318 = 0;
	volatile uint8_t x319 = UINT8_MAX;
	volatile uint16_t x320 = UINT16_MAX;
	volatile int32_t t73 = 212280276;

    t73 = (x317+(x318-(x319/x320)));

    if (t73 != -128) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x321 = 6375942LL;
	volatile int16_t x323 = -1;
	uint64_t x324 = 207206LLU;
	volatile uint64_t t74 = 587695LLU;

    t74 = (x321+(x322-(x323/x324)));

    if (t74 != 18446655047606289281LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x326 = INT8_MIN;
	int16_t x327 = INT16_MIN;
	uint16_t x328 = UINT16_MAX;
	volatile int64_t t75 = -405293160LL;

    t75 = (x325+(x326-(x327/x328)));

    if (t75 != 53LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x330 = 7932LLU;
	volatile uint8_t x332 = UINT8_MAX;
	static uint64_t t76 = 1LLU;

    t76 = (x329+(x330-(x331/x332)));

    if (t76 != 36170086419046317LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x337 = INT16_MAX;
	int8_t x338 = -28;
	int8_t x339 = -1;

    t77 = (x337+(x338-(x339/x340)));

    if (t77 != 32738LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x345 = -698;
	uint64_t x346 = 4583LLU;
	uint32_t x347 = 3688U;
	int32_t x348 = INT32_MIN;
	static volatile uint64_t t78 = 349007LLU;

    t78 = (x345+(x346-(x347/x348)));

    if (t78 != 3885LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x349 = -1;
	int8_t x350 = INT8_MIN;
	volatile int32_t x352 = -4;
	static int32_t t79 = -29;

    t79 = (x349+(x350-(x351/x352)));

    if (t79 != -121) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x353 = 131532314U;
	volatile uint16_t x355 = 179U;
	volatile uint32_t t80 = 6941736U;

    t80 = (x353+(x354-(x355/x356)));

    if (t80 != 131565260U) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x357 = -1;
	volatile int32_t x358 = -1;
	static uint16_t x359 = UINT16_MAX;
	volatile int32_t x360 = 54298985;
	volatile int32_t t81 = -20;

    t81 = (x357+(x358-(x359/x360)));

    if (t81 != -2) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint8_t x370 = UINT8_MAX;
	volatile int32_t x371 = -1;
	uint16_t x372 = 1740U;
	volatile int32_t t82 = 48;

    t82 = (x369+(x370-(x371/x372)));

    if (t82 != 254) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x373 = -1;
	static volatile int16_t x374 = INT16_MAX;
	uint8_t x375 = UINT8_MAX;
	int64_t x376 = INT64_MAX;
	volatile int64_t t83 = -139254298159840850LL;

    t83 = (x373+(x374-(x375/x376)));

    if (t83 != 32766LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint16_t x377 = 538U;
	int32_t x378 = -198562787;

    t84 = (x377+(x378-(x379/x380)));

    if (t84 != 18446744073510989153LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x382 = -1;
	int64_t x383 = -51391102782LL;
	int32_t x384 = 2;
	static volatile int64_t t85 = 8377215251LL;

    t85 = (x381+(x382-(x383/x384)));

    if (t85 != 25695551395LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile uint64_t x385 = 0LLU;
	static int16_t x388 = INT16_MAX;
	static volatile uint64_t t86 = 27466505554LLU;

    t86 = (x385+(x386-(x387/x388)));

    if (t86 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint32_t x389 = UINT32_MAX;
	volatile uint32_t x390 = UINT32_MAX;
	uint8_t x391 = 6U;
	static uint32_t x392 = 63927067U;

    t87 = (x389+(x390-(x391/x392)));

    if (t87 != 4294967294U) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint8_t x394 = 1U;
	uint64_t x395 = 6608183334021943LLU;
	int16_t x396 = INT16_MIN;
	uint64_t t88 = 7739LLU;

    t88 = (x393+(x394-(x395/x396)));

    if (t88 != 32768LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x398 = INT64_MAX;
	int64_t x399 = 1657710420986476168LL;
	static int32_t x400 = 14718;
	int64_t t89 = 1532LL;

    t89 = (x397+(x398-(x399/x400)));

    if (t89 != 9223259405354534963LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x401 = 1402187071356LLU;
	int32_t x402 = INT32_MAX;
	static int16_t x403 = -75;
	uint32_t x404 = UINT32_MAX;
	volatile uint64_t t90 = 15847321478LLU;

    t90 = (x401+(x402-(x403/x404)));

    if (t90 != 1404334555003LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x406 = -1385;
	static int16_t x407 = INT16_MIN;
	int32_t t91 = -77;

    t91 = (x405+(x406-(x407/x408)));

    if (t91 != -34281) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint16_t x409 = 23414U;
	static volatile int64_t x410 = -3LL;
	int8_t x411 = INT8_MIN;
	int32_t x412 = -5747;
	volatile int64_t t92 = -50196LL;

    t92 = (x409+(x410-(x411/x412)));

    if (t92 != 23411LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x413 = -1;
	volatile int16_t x414 = 2440;
	int32_t t93 = 3;

    t93 = (x413+(x414-(x415/x416)));

    if (t93 != 2440) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x417 = INT8_MIN;
	int16_t x418 = -362;
	uint64_t x419 = 1409240LLU;
	static uint32_t x420 = 55969U;

    t94 = (x417+(x418-(x419/x420)));

    if (t94 != 18446744073709551101LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint64_t x423 = 15987701434LLU;
	volatile int32_t x424 = INT32_MIN;
	uint64_t t95 = 2014571774LLU;

    t95 = (x421+(x422-(x423/x424)));

    if (t95 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint32_t x425 = 9U;
	int16_t x426 = INT16_MAX;
	int32_t x427 = INT32_MIN;
	static int8_t x428 = INT8_MAX;
	volatile uint32_t t96 = 1374U;

    t96 = (x425+(x426-(x427/x428)));

    if (t96 != 16942096U) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x429 = -1LL;
	uint8_t x432 = 111U;
	volatile int64_t t97 = -972129353755LL;

    t97 = (x429+(x430-(x431/x432)));

    if (t97 != -2LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x433 = 885;
	int16_t x434 = INT16_MIN;
	int32_t x435 = INT32_MIN;
	uint8_t x436 = UINT8_MAX;

    t98 = (x433+(x434-(x435/x436)));

    if (t98 != 8389621) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x438 = INT8_MIN;
	uint8_t x439 = 115U;
	volatile int8_t x440 = INT8_MIN;
	static volatile int32_t t99 = -854;

    t99 = (x437+(x438-(x439/x440)));

    if (t99 != -99) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x441 = -4;
	int64_t x442 = -200544866LL;
	uint16_t x444 = UINT16_MAX;
	volatile int64_t t100 = -1159447130652147205LL;

    t100 = (x441+(x442-(x443/x444)));

    if (t100 != -200544870LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x445 = INT64_MIN;
	uint32_t x446 = 101U;
	static int64_t x447 = -1LL;
	volatile int64_t t101 = -1526002059616LL;

    t101 = (x445+(x446-(x447/x448)));

    if (t101 != -9223372036854775707LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x450 = 15445478556702228LL;
	volatile uint8_t x451 = 73U;
	static int8_t x452 = INT8_MIN;
	volatile int64_t t102 = 25547627LL;

    t102 = (x449+(x450-(x451/x452)));

    if (t102 != 15445478794198221LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x453 = INT8_MIN;
	volatile int16_t x454 = 55;
	int8_t x455 = INT8_MIN;
	int8_t x456 = INT8_MAX;
	volatile int32_t t103 = 0;

    t103 = (x453+(x454-(x455/x456)));

    if (t103 != -72) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x457 = -65;
	static int16_t x458 = 0;
	int32_t x459 = 289130761;
	static int8_t x460 = INT8_MIN;

    t104 = (x457+(x458-(x459/x460)));

    if (t104 != 2258769) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x461 = INT16_MAX;
	static volatile uint8_t x462 = 45U;
	uint16_t x463 = UINT16_MAX;

    t105 = (x461+(x462-(x463/x464)));

    if (t105 != 32812) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x465 = -1;
	volatile int16_t x466 = INT16_MIN;
	volatile uint64_t x467 = UINT64_MAX;
	int16_t x468 = 273;
	uint64_t t106 = 18904684468031640LLU;

    t106 = (x465+(x466-(x467/x468)));

    if (t106 != 18379173582597029647LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x469 = UINT16_MAX;
	int32_t x470 = INT32_MAX;
	int16_t x472 = INT16_MAX;
	volatile int64_t t107 = 132106450LL;

    t107 = (x469+(x470-(x471/x472)));

    if (t107 != 2147549182LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x473 = INT16_MAX;
	static volatile uint64_t x474 = 7797948086902776LLU;
	int16_t x475 = 238;
	static int16_t x476 = -7736;
	static volatile uint64_t t108 = 2825LLU;

    t108 = (x473+(x474-(x475/x476)));

    if (t108 != 7797948086935543LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x481 = 3769733417892445LLU;
	int16_t x482 = INT16_MIN;

    t109 = (x481+(x482-(x483/x484)));

    if (t109 != 3769733417859675LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint8_t x485 = 1U;
	static int32_t x486 = -1;
	int64_t x487 = INT64_MIN;
	static int32_t x488 = -784777577;
	static volatile int64_t t110 = -334176929550430822LL;

    t110 = (x485+(x486-(x487/x488)));

    if (t110 != -11752848586LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int8_t x490 = -1;
	static int16_t x491 = -4;
	int16_t x492 = INT16_MIN;
	int32_t t111 = 98;

    t111 = (x489+(x490-(x491/x492)));

    if (t111 != -129) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x493 = INT8_MAX;
	int16_t x494 = -1;
	static uint16_t x495 = UINT16_MAX;
	int8_t x496 = -6;
	volatile int32_t t112 = 36973;

    t112 = (x493+(x494-(x495/x496)));

    if (t112 != 11048) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x497 = UINT32_MAX;
	static uint32_t x498 = UINT32_MAX;
	int8_t x499 = INT8_MAX;
	static int64_t x500 = INT64_MAX;

    t113 = (x497+(x498-(x499/x500)));

    if (t113 != 8589934590LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint16_t x501 = 2U;
	volatile uint16_t x502 = 19974U;
	volatile int16_t x503 = INT16_MAX;
	int32_t t114 = -7238001;

    t114 = (x501+(x502-(x503/x504)));

    if (t114 != 11785) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int64_t x505 = -1LL;
	int32_t x506 = -1;
	int8_t x507 = -24;
	int32_t x508 = INT32_MIN;
	static int64_t t115 = 0LL;

    t115 = (x505+(x506-(x507/x508)));

    if (t115 != -2LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x509 = INT64_MAX;
	int64_t x510 = -1LL;
	int16_t x511 = -1;
	int64_t t116 = 683LL;

    t116 = (x509+(x510-(x511/x512)));

    if (t116 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static int32_t x513 = INT32_MAX;
	int16_t x516 = INT16_MIN;
	volatile uint64_t t117 = 16970043862703LLU;

    t117 = (x513+(x514-(x515/x516)));

    if (t117 != 18446462600923072564LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x517 = INT16_MAX;
	int16_t x518 = -287;
	static uint16_t x519 = 3U;
	volatile int16_t x520 = -1;
	static int32_t t118 = -4602;

    t118 = (x517+(x518-(x519/x520)));

    if (t118 != 32483) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int64_t x525 = INT64_MIN;
	uint64_t x526 = 1229243LLU;
	static int8_t x527 = INT8_MAX;

    t119 = (x525+(x526-(x527/x528)));

    if (t119 != 9223372036856005051LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x530 = 0;
	volatile uint8_t x531 = 55U;
	volatile int64_t x532 = -1LL;

    t120 = (x529+(x530-(x531/x532)));

    if (t120 != 111689599486362LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile int64_t x533 = -162913179LL;
	uint8_t x534 = 2U;
	uint64_t t121 = 4965390LLU;

    t121 = (x533+(x534-(x535/x536)));

    if (t121 != 18446744073546533141LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x538 = 981U;
	int64_t x539 = INT64_MIN;
	int16_t x540 = INT16_MIN;
	static int64_t t122 = -6366459135465161LL;

    t122 = (x537+(x538-(x539/x540)));

    if (t122 != -281474976709675LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x545 = INT16_MIN;
	static volatile uint16_t x546 = 56U;
	int16_t x548 = -7;
	volatile uint64_t t123 = 13248461264842LLU;

    t123 = (x545+(x546-(x547/x548)));

    if (t123 != 18446744073709518904LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x549 = UINT64_MAX;
	static int16_t x551 = 5;

    t124 = (x549+(x550-(x551/x552)));

    if (t124 != 4294967167LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x553 = 161U;
	uint8_t x555 = UINT8_MAX;
	int32_t x556 = -1;

    t125 = (x553+(x554-(x555/x556)));

    if (t125 != 416U) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x558 = -1;
	uint32_t x559 = 234U;
	volatile int8_t x560 = INT8_MAX;
	static uint32_t t126 = 366048944U;

    t126 = (x557+(x558-(x559/x560)));

    if (t126 != 4294934526U) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x561 = 2679LLU;
	uint16_t x563 = 7U;
	volatile int16_t x564 = INT16_MIN;
	volatile uint64_t t127 = 57LLU;

    t127 = (x561+(x562-(x563/x564)));

    if (t127 != 2772LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint32_t x565 = 719851644U;
	int32_t x566 = 143196;
	uint8_t x567 = 120U;
	uint16_t x568 = 5U;

    t128 = (x565+(x566-(x567/x568)));

    if (t128 != 719994816U) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x570 = -1;
	int64_t x571 = INT64_MIN;
	volatile int32_t x572 = -73402;
	volatile int64_t t129 = 0LL;

    t129 = (x569+(x570-(x571/x572)));

    if (t129 != -125655595717497LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x573 = -2;
	uint32_t x575 = UINT32_MAX;
	volatile int16_t x576 = INT16_MIN;
	static volatile uint32_t t130 = 201806U;

    t130 = (x573+(x574-(x575/x576)));

    if (t130 != 0U) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x577 = -1;
	int32_t x578 = -1;
	int32_t x579 = 364;
	uint8_t x580 = 4U;
	int32_t t131 = 225;

    t131 = (x577+(x578-(x579/x580)));

    if (t131 != -93) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x581 = 14595U;
	uint64_t x582 = 51LLU;
	static uint16_t x583 = 0U;
	volatile int16_t x584 = -1;

    t132 = (x581+(x582-(x583/x584)));

    if (t132 != 14646LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x585 = 230167947;
	uint8_t x586 = UINT8_MAX;
	uint16_t x587 = 16115U;
	int64_t x588 = INT64_MIN;
	volatile int64_t t133 = -2323571486530LL;

    t133 = (x585+(x586-(x587/x588)));

    if (t133 != 230168202LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x589 = UINT32_MAX;
	int8_t x590 = INT8_MAX;
	int32_t x591 = INT32_MIN;
	int16_t x592 = -8;
	volatile uint32_t t134 = 4008U;

    t134 = (x589+(x590-(x591/x592)));

    if (t134 != 4026531966U) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x593 = 284626U;
	volatile uint8_t x595 = 1U;
	volatile int16_t x596 = INT16_MIN;
	static uint32_t t135 = 17827U;

    t135 = (x593+(x594-(x595/x596)));

    if (t135 != 284625U) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x597 = UINT16_MAX;
	volatile int32_t x598 = INT32_MIN;
	int32_t x599 = -1;
	int64_t x600 = INT64_MAX;
	int64_t t136 = 367LL;

    t136 = (x597+(x598-(x599/x600)));

    if (t136 != -2147418113LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x602 = INT8_MIN;
	volatile int32_t x603 = INT32_MAX;
	static int32_t x604 = -1;
	volatile int32_t t137 = 17;

    t137 = (x601+(x602-(x603/x604)));

    if (t137 != 2147450751) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint64_t x609 = 4304095632890926LLU;
	static volatile int8_t x611 = -1;
	uint32_t x612 = 720841U;

    t138 = (x609+(x610-(x611/x612)));

    if (t138 != 4304099927852519LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x613 = 1U;
	int64_t x614 = INT64_MIN;
	int64_t t139 = 38LL;

    t139 = (x613+(x614-(x615/x616)));

    if (t139 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint64_t x617 = 1025119713619LLU;
	volatile uint8_t x618 = 44U;

    t140 = (x617+(x618-(x619/x620)));

    if (t140 != 1025119713663LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint8_t x623 = UINT8_MAX;
	int16_t x624 = INT16_MIN;
	static volatile uint32_t t141 = 3U;

    t141 = (x621+(x622-(x623/x624)));

    if (t141 != 376019601U) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x625 = -301;
	static uint64_t x626 = 33764LLU;
	uint16_t x627 = UINT16_MAX;
	int32_t x628 = -415057601;

    t142 = (x625+(x626-(x627/x628)));

    if (t142 != 33463LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x629 = INT32_MAX;
	int32_t x631 = -1;
	int16_t x632 = 3;
	volatile uint64_t t143 = 53LLU;

    t143 = (x629+(x630-(x631/x632)));

    if (t143 != 2273582953LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x633 = -1LL;
	static int32_t x635 = INT32_MIN;
	uint8_t x636 = 61U;

    t144 = (x633+(x634-(x635/x636)));

    if (t144 != 39080463LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x637 = INT32_MAX;
	volatile uint64_t x638 = 1185327790685396087LLU;
	int16_t x639 = -136;
	static uint64_t x640 = UINT64_MAX;
	volatile uint64_t t145 = 2044943680116LLU;

    t145 = (x637+(x638-(x639/x640)));

    if (t145 != 1185327792832879734LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x641 = 54549;
	int32_t x642 = -699873283;
	int16_t x644 = -10;
	uint32_t t146 = 6U;

    t146 = (x641+(x642-(x643/x644)));

    if (t146 != 3595148562U) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x646 = -41;
	int32_t x647 = INT32_MAX;

    t147 = (x645+(x646-(x647/x648)));

    if (t147 != -8388778) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x655 = 231U;
	int16_t x656 = 897;
	volatile int32_t t148 = -2542;

    t148 = (x653+(x654-(x655/x656)));

    if (t148 != -26993) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x657 = 94U;
	uint8_t x659 = 1U;
	static int8_t x660 = INT8_MIN;
	static int32_t t149 = 6;

    t149 = (x657+(x658-(x659/x660)));

    if (t149 != 101) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint64_t x669 = 786680059596617635LLU;
	int8_t x671 = INT8_MIN;
	uint32_t x672 = 83727U;

    t150 = (x669+(x670-(x671/x672)));

    if (t150 != 786680063891551756LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x673 = 0;
	static int8_t x674 = INT8_MAX;
	static int64_t x675 = -1LL;
	uint32_t x676 = 7154U;
	int64_t t151 = -3859720LL;

    t151 = (x673+(x674-(x675/x676)));

    if (t151 != 127LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x677 = INT8_MIN;
	static uint8_t x678 = UINT8_MAX;
	static int8_t x680 = 41;
	int64_t t152 = -14548967LL;

    t152 = (x677+(x678-(x679/x680)));

    if (t152 != -196454901627078LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x685 = 13441326LL;
	int16_t x686 = -6;
	static int64_t x687 = INT64_MIN;
	uint8_t x688 = 5U;

    t153 = (x685+(x686-(x687/x688)));

    if (t153 != 1844674407384396481LL) { NG(); } else { ; }
	
}

void f154(void) {
    	static int64_t x690 = INT64_MAX;
	volatile int8_t x691 = INT8_MAX;
	uint64_t t154 = 1891LLU;

    t154 = (x689+(x690-(x691/x692)));

    if (t154 != 9223372036854775764LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int16_t x693 = 94;
	static int8_t x694 = 7;
	volatile int32_t t155 = 1;

    t155 = (x693+(x694-(x695/x696)));

    if (t155 != 101) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x697 = 53588068LLU;
	int32_t x698 = INT32_MAX;
	uint16_t x699 = 15885U;
	int64_t x700 = INT64_MIN;
	uint64_t t156 = 5210239672898324LLU;

    t156 = (x697+(x698-(x699/x700)));

    if (t156 != 2201071715LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x709 = INT16_MIN;
	int16_t x710 = INT16_MIN;
	int32_t x711 = 1532957;
	volatile int8_t x712 = INT8_MIN;
	int32_t t157 = -6016675;

    t157 = (x709+(x710-(x711/x712)));

    if (t157 != -53560) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x714 = INT32_MIN;
	static uint32_t x715 = UINT32_MAX;
	static volatile uint64_t t158 = 33488047066841670LLU;

    t158 = (x713+(x714-(x715/x716)));

    if (t158 != 871640464428997690LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x717 = -1;
	static int8_t x718 = INT8_MIN;
	uint64_t x719 = UINT64_MAX;

    t159 = (x717+(x718-(x719/x720)));

    if (t159 != 18446737417435935151LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x721 = -1;
	int8_t x723 = 0;
	int8_t x724 = INT8_MIN;
	uint32_t t160 = 27171U;

    t160 = (x721+(x722-(x723/x724)));

    if (t160 != 15374U) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x725 = -416;
	int8_t x726 = 1;
	uint32_t x727 = 12U;
	uint32_t t161 = 904520U;

    t161 = (x725+(x726-(x727/x728)));

    if (t161 != 4294966881U) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x729 = 3U;
	int16_t x730 = 403;
	int8_t x731 = -1;
	int8_t x732 = INT8_MIN;
	volatile int32_t t162 = -553100480;

    t162 = (x729+(x730-(x731/x732)));

    if (t162 != 406) { NG(); } else { ; }
	
}

void f163(void) {
    	static int8_t x733 = INT8_MIN;
	int8_t x734 = 6;
	uint8_t x735 = 10U;
	uint16_t x736 = UINT16_MAX;
	int32_t t163 = 544562;

    t163 = (x733+(x734-(x735/x736)));

    if (t163 != -122) { NG(); } else { ; }
	
}

void f164(void) {
    	static int16_t x737 = INT16_MIN;
	uint32_t x738 = UINT32_MAX;
	uint32_t x740 = 18U;
	volatile uint32_t t164 = 1775158103U;

    t164 = (x737+(x738-(x739/x740)));

    if (t164 != 4294934523U) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x741 = INT8_MIN;
	static uint32_t x742 = UINT32_MAX;
	uint64_t x743 = 21690300980458LLU;
	static volatile uint64_t t165 = 4803882571794050312LLU;

    t165 = (x741+(x742-(x743/x744)));

    if (t165 != 3963994390LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x745 = 1013LLU;
	int16_t x747 = 0;
	volatile int64_t x748 = 529102653LL;
	static volatile uint64_t t166 = 11597426939548077LLU;

    t166 = (x745+(x746-(x747/x748)));

    if (t166 != 1002LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x749 = INT64_MAX;
	int64_t x750 = INT64_MIN;
	volatile uint8_t x751 = 106U;
	static uint64_t x752 = UINT64_MAX;
	volatile uint64_t t167 = UINT64_MAX;

    t167 = (x749+(x750-(x751/x752)));

    if (t167 != UINT64_MAX) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x757 = INT64_MIN;
	int16_t x758 = INT16_MIN;
	uint16_t x759 = 4U;
	static uint64_t x760 = UINT64_MAX;

    t168 = (x757+(x758-(x759/x760)));

    if (t168 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x766 = 92965391947408LLU;
	uint64_t x767 = UINT64_MAX;
	uint32_t x768 = 684U;

    t169 = (x765+(x766-(x767/x768)));

    if (t169 != 18419868115017128462LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x769 = -1927;
	static int16_t x770 = INT16_MIN;
	volatile uint8_t x771 = 3U;
	uint16_t x772 = 2729U;
	int32_t t170 = -5;

    t170 = (x769+(x770-(x771/x772)));

    if (t170 != -34695) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x773 = INT32_MIN;
	uint8_t x774 = UINT8_MAX;
	int64_t x776 = -1LL;
	static int64_t t171 = 990126304446LL;

    t171 = (x773+(x774-(x775/x776)));

    if (t171 != -2147483356LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x777 = -1;
	static volatile int32_t x778 = -42341659;
	uint64_t x779 = 145LLU;
	int64_t x780 = 125535727798560660LL;
	volatile uint64_t t172 = 25LLU;

    t172 = (x777+(x778-(x779/x780)));

    if (t172 != 18446744073667209956LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint16_t x785 = 126U;
	static int64_t x787 = -27367187LL;

    t173 = (x785+(x786-(x787/x788)));

    if (t173 != 126LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x789 = 2097562U;
	uint32_t x790 = UINT32_MAX;
	volatile int32_t x792 = INT32_MAX;

    t174 = (x789+(x790-(x791/x792)));

    if (t174 != 2097561U) { NG(); } else { ; }
	
}

void f175(void) {
    	static int16_t x793 = -1;
	int32_t x794 = INT32_MIN;
	static volatile uint16_t x796 = UINT16_MAX;
	uint64_t t175 = 146LLU;

    t175 = (x793+(x794-(x795/x796)));

    if (t175 != 18446744071546675264LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static int8_t x797 = 1;
	volatile int16_t x798 = INT16_MIN;
	int64_t x799 = -1LL;

    t176 = (x797+(x798-(x799/x800)));

    if (t176 != -32767LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x801 = INT64_MAX;
	volatile int64_t x803 = INT64_MIN;
	uint64_t x804 = 346372269547762LLU;
	static volatile uint64_t t177 = 1LLU;

    t177 = (x801+(x802-(x803/x804)));

    if (t177 != 9223372036854750258LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x805 = -25;
	volatile int32_t x806 = -380405208;
	uint16_t x807 = 1806U;
	int64_t x808 = 254950956LL;
	static volatile int64_t t178 = 1403090137677LL;

    t178 = (x805+(x806-(x807/x808)));

    if (t178 != -380405233LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x809 = UINT64_MAX;
	static int8_t x810 = -11;
	uint8_t x811 = 5U;
	int16_t x812 = 4592;
	volatile uint64_t t179 = 93751708511269442LLU;

    t179 = (x809+(x810-(x811/x812)));

    if (t179 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x813 = INT8_MAX;
	static uint64_t x814 = 522748638570389186LLU;
	int64_t x816 = 17339237LL;

    t180 = (x813+(x814-(x815/x816)));

    if (t180 != 522748638570389313LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x817 = -74616480974481LL;
	volatile int8_t x818 = INT8_MIN;
	volatile uint8_t x819 = 0U;
	int16_t x820 = INT16_MIN;
	volatile int64_t t181 = -661698117836227376LL;

    t181 = (x817+(x818-(x819/x820)));

    if (t181 != -74616480974609LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x821 = INT32_MIN;
	uint8_t x822 = 12U;
	volatile int16_t x823 = INT16_MIN;
	uint64_t x824 = UINT64_MAX;

    t182 = (x821+(x822-(x823/x824)));

    if (t182 != 18446744071562067980LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x826 = INT64_MAX;
	uint16_t x827 = UINT16_MAX;
	int32_t x828 = INT32_MIN;
	static int64_t t183 = -4LL;

    t183 = (x825+(x826-(x827/x828)));

    if (t183 != 9223372036854775801LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x829 = INT16_MIN;
	int16_t x830 = -1;
	int32_t x831 = -1;
	int8_t x832 = -1;
	volatile int32_t t184 = -43885;

    t184 = (x829+(x830-(x831/x832)));

    if (t184 != -32770) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x833 = UINT32_MAX;
	static volatile int16_t x834 = -1;
	static volatile int32_t x835 = INT32_MIN;
	volatile int64_t x836 = -1LL;
	volatile int64_t t185 = 2LL;

    t185 = (x833+(x834-(x835/x836)));

    if (t185 != 2147483646LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x837 = -617804245LL;
	int32_t x838 = 908128668;
	volatile uint8_t x840 = 1U;
	volatile int64_t t186 = 3741769306LL;

    t186 = (x837+(x838-(x839/x840)));

    if (t186 != 290324551LL) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int16_t x845 = INT16_MIN;
	static volatile uint64_t x846 = 0LLU;
	volatile int16_t x847 = 0;
	int16_t x848 = 2917;
	volatile uint64_t t187 = 964964161034962LLU;

    t187 = (x845+(x846-(x847/x848)));

    if (t187 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int8_t x849 = -4;
	volatile int16_t x850 = 3088;
	int16_t x851 = INT16_MIN;
	int64_t x852 = -1LL;
	volatile int64_t t188 = -8510887670LL;

    t188 = (x849+(x850-(x851/x852)));

    if (t188 != -29684LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x853 = INT16_MAX;
	int64_t x854 = 1402955187LL;
	volatile int64_t x855 = -1LL;
	int32_t x856 = INT32_MIN;
	static volatile int64_t t189 = 11765986LL;

    t189 = (x853+(x854-(x855/x856)));

    if (t189 != 1402987954LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x857 = INT8_MIN;
	int16_t x859 = INT16_MIN;
	int8_t x860 = INT8_MIN;

    t190 = (x857+(x858-(x859/x860)));

    if (t190 != -385) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x865 = 0U;
	uint64_t x866 = UINT64_MAX;
	int16_t x867 = -1;
	int8_t x868 = INT8_MIN;
	volatile uint64_t t191 = UINT64_MAX;

    t191 = (x865+(x866-(x867/x868)));

    if (t191 != UINT64_MAX) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x869 = INT64_MIN;
	volatile int64_t x870 = INT64_MIN;
	volatile uint64_t x871 = 313LLU;
	uint64_t x872 = 8403724107645709LLU;

    t192 = (x869+(x870-(x871/x872)));

    if (t192 != 0LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x873 = 10483;
	uint32_t x874 = 10615937U;
	int8_t x875 = INT8_MAX;
	uint64_t x876 = 1835LLU;
	uint64_t t193 = 3085374840080LLU;

    t193 = (x873+(x874-(x875/x876)));

    if (t193 != 10626420LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x877 = INT64_MAX;
	uint64_t x878 = 23846065157LLU;
	int64_t x879 = -470340169427339422LL;
	uint16_t x880 = 524U;
	uint64_t t194 = 1LLU;

    t194 = (x877+(x878-(x879/x880)));

    if (t194 != 9224269656444022909LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint32_t x881 = 205U;
	static int32_t x882 = -1;
	volatile int16_t x883 = INT16_MAX;
	static uint64_t t195 = 2830LLU;

    t195 = (x881+(x882-(x883/x884)));

    if (t195 != 204LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x885 = INT64_MIN;
	uint16_t x886 = 18274U;
	static uint64_t x887 = UINT64_MAX;
	volatile uint64_t t196 = 21953633691LLU;

    t196 = (x885+(x886-(x887/x888)));

    if (t196 != 9223372028264859486LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x889 = 262560522U;
	static int8_t x891 = INT8_MIN;
	volatile uint64_t x892 = 3LLU;
	uint64_t t197 = 2301LLU;

    t197 = (x889+(x890-(x891/x892)));

    if (t197 != 12297829382735562208LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x897 = -1;
	int8_t x898 = 11;
	int8_t x899 = -23;
	static volatile int32_t t198 = -171;

    t198 = (x897+(x898-(x899/x900)));

    if (t198 != 10) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x901 = -10677782;
	volatile int64_t x902 = -1111922LL;
	volatile int8_t x903 = 0;
	uint8_t x904 = UINT8_MAX;

    t199 = (x901+(x902-(x903/x904)));

    if (t199 != -11789704LL) { NG(); } else { ; }
	
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
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

