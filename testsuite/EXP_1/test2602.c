
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

int16_t x5 = INT16_MIN;
int8_t x8 = -1;
int32_t x13 = INT32_MIN;
int64_t x20 = INT64_MIN;
uint64_t x27 = UINT64_MAX;
static int64_t x28 = INT64_MIN;
uint64_t x30 = UINT64_MAX;
uint64_t t8 = 703119LLU;
int32_t x38 = INT32_MIN;
uint8_t x48 = 1U;
uint32_t t11 = 8U;
uint8_t x51 = UINT8_MAX;
int8_t x76 = -6;
static uint64_t x79 = 185LLU;
int32_t x84 = INT32_MAX;
static int8_t x85 = INT8_MIN;
uint8_t x86 = 0U;
static int8_t x88 = 9;
uint8_t x91 = 12U;
uint8_t x95 = 1U;
static int8_t x102 = INT8_MAX;
int16_t x104 = -1;
static volatile uint64_t x108 = 71492442044517448LLU;
uint8_t x112 = 6U;
volatile int64_t t27 = -202911287913LL;
static volatile int16_t x113 = INT16_MIN;
int16_t x116 = -3346;
static int8_t x138 = -24;
static volatile uint32_t t34 = 1159608U;
int16_t x141 = -1269;
int32_t x142 = INT32_MIN;
static volatile int32_t t35 = 2971;
int64_t x147 = -1LL;
int8_t x151 = INT8_MIN;
static uint16_t x155 = 143U;
int64_t t38 = -2LL;
uint64_t t39 = 1306543258280LLU;
volatile int32_t t40 = -73036683;
static volatile uint32_t x166 = 18U;
volatile uint32_t x171 = UINT32_MAX;
volatile uint16_t x176 = UINT16_MAX;
int64_t x185 = INT64_MIN;
uint16_t x187 = UINT16_MAX;
uint8_t x189 = UINT8_MAX;
uint8_t x196 = 1U;
int32_t x198 = INT32_MIN;
volatile int16_t x199 = INT16_MIN;
int32_t x207 = 4408;
int8_t x219 = INT8_MIN;
int64_t x222 = INT64_MAX;
int64_t x224 = INT64_MIN;
int32_t x228 = 102808;
static uint32_t t55 = 2139U;
volatile int32_t x231 = INT32_MAX;
uint8_t x234 = UINT8_MAX;
uint32_t x237 = 12556670U;
int32_t x243 = INT32_MAX;
volatile uint64_t t59 = 29LLU;
int32_t t61 = 14;
static volatile int16_t x259 = INT16_MIN;
int8_t x260 = -1;
volatile int64_t t63 = -416LL;
uint64_t x267 = 613895922LLU;
static uint64_t t65 = 248652533018257LLU;
volatile int32_t x271 = -1;
static int64_t x272 = INT64_MIN;
static int64_t t66 = -622598077740LL;
int16_t x278 = INT16_MAX;
int64_t x279 = -1LL;
volatile int64_t t67 = -352311303048147585LL;
static volatile int16_t x291 = INT16_MIN;
int32_t t70 = 5;
static volatile int16_t x294 = -1;
static int32_t x296 = 106116877;
volatile int64_t x300 = 1687817438502LL;
int16_t x304 = -1;
int16_t x309 = -2101;
int32_t x317 = 0;
int64_t x320 = INT64_MIN;
volatile uint64_t x322 = 225LLU;
static volatile uint8_t x323 = 10U;
static int64_t t81 = -1338LL;
static int64_t x343 = -6219475714006115LL;
volatile int8_t x346 = 3;
int64_t t83 = -4560721636885LL;
volatile int64_t x351 = INT64_MIN;
int64_t x360 = INT64_MIN;
int64_t x362 = INT64_MIN;
uint16_t x365 = UINT16_MAX;
int64_t x371 = 2307127459552638855LL;
int8_t x373 = INT8_MIN;
volatile int32_t x374 = -32758;
int64_t x379 = -79493032745381LL;
static int16_t x380 = INT16_MAX;
volatile int64_t t92 = -1734712239LL;
int16_t x386 = INT16_MIN;
static int64_t x387 = -1LL;
int16_t x395 = 22;
int16_t x397 = INT16_MAX;
static uint8_t x399 = 42U;
int16_t x401 = -141;
uint8_t x404 = UINT8_MAX;
uint64_t t97 = 7643453LLU;
int8_t x407 = INT8_MAX;
int64_t x408 = -1LL;
uint64_t t102 = 0LLU;
volatile int64_t x426 = -1LL;
int16_t x430 = 396;
volatile uint32_t x431 = 5U;
int8_t x436 = -1;
uint16_t x442 = 42U;
uint64_t x446 = UINT64_MAX;
int32_t x451 = INT32_MAX;
int8_t x454 = INT8_MIN;
uint8_t x458 = 62U;
uint16_t x468 = 15U;
uint32_t t113 = 1507387694U;
uint32_t x480 = UINT32_MAX;
int32_t x482 = INT32_MIN;
uint16_t x486 = 146U;
static uint8_t x489 = 0U;
int32_t x490 = 85811948;
volatile int16_t x492 = 9281;
static int64_t x496 = -1LL;
static volatile uint32_t x497 = UINT32_MAX;
volatile int64_t x507 = -1LL;
static int64_t t123 = 3LL;
int32_t x517 = -1;
uint64_t x520 = 340789924225529LLU;
int8_t x523 = -1;
volatile uint32_t x533 = 19794U;
int64_t t130 = -11741937844934LL;
uint8_t x537 = 1U;
uint32_t t131 = 228U;
int16_t x547 = INT16_MIN;
int8_t x550 = 6;
static uint16_t x562 = 1883U;
static volatile int64_t t138 = 2183037109269LL;
int64_t t139 = 30989LL;
volatile int64_t t140 = 32975016786357591LL;
static uint8_t x586 = 1U;
int32_t t142 = 47428;
uint8_t x589 = UINT8_MAX;
volatile uint64_t t143 = 59323254181LLU;
int32_t x596 = INT32_MIN;
uint32_t x598 = 0U;
static volatile uint32_t t145 = 12U;
int32_t x602 = INT32_MAX;
volatile int64_t t146 = 7150756911571052LL;
volatile uint32_t x611 = 273119540U;
static int32_t x612 = 954407635;
uint32_t x631 = 118038425U;
uint16_t x632 = 11731U;
int64_t t155 = -122167636023633LL;
int64_t t157 = -9LL;
int16_t x670 = INT16_MIN;
static volatile int64_t t163 = -20657443LL;
int16_t x677 = INT16_MAX;
volatile int32_t t165 = -63720106;
int16_t x681 = -1;
volatile int16_t x685 = -1;
uint16_t x686 = 3U;
volatile int64_t x687 = -1LL;
int64_t x702 = INT64_MIN;
volatile int64_t t170 = 793380LL;
volatile uint64_t x711 = UINT64_MAX;
int8_t x713 = INT8_MAX;
volatile int8_t x716 = -1;
int64_t x718 = 20295808948681LL;
volatile uint64_t x720 = UINT64_MAX;
volatile int16_t x733 = 0;
int8_t x741 = INT8_MIN;
int32_t x750 = INT32_MIN;
int32_t x752 = INT32_MIN;
volatile uint16_t x754 = UINT16_MAX;
int8_t x762 = INT8_MAX;
int8_t x765 = INT8_MAX;
volatile uint64_t t187 = 62089237LLU;
int8_t x778 = INT8_MIN;
static int16_t x784 = INT16_MIN;
int64_t x786 = 195277853564198LL;
int64_t x789 = INT64_MIN;
uint64_t x790 = UINT64_MAX;
int32_t x800 = -337;
volatile int32_t t193 = 824102;
static uint8_t x810 = 13U;
static uint8_t x813 = 2U;
static uint64_t x814 = UINT64_MAX;
uint32_t x816 = 397665U;


void f0(void) {
    	int32_t x1 = 58322;
	volatile int64_t x2 = -4414638282220134LL;
	static int16_t x3 = -1;
	volatile uint8_t x4 = UINT8_MAX;
	int64_t t0 = 184295770693119472LL;

    t0 = (((x1^x2)/x3)&x4);

    if (t0 != 184LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x6 = INT32_MAX;
	static volatile int64_t x7 = INT64_MIN;
	static int64_t t1 = 38657124254860LL;

    t1 = (((x5^x6)/x7)&x8);

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint64_t x9 = UINT64_MAX;
	volatile uint16_t x10 = 647U;
	volatile int64_t x11 = 352983524442LL;
	static uint8_t x12 = UINT8_MAX;
	uint64_t t2 = 5LLU;

    t2 = (((x9^x10)/x11)&x12);

    if (t2 != 176LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x14 = -1;
	int16_t x15 = 7;
	int32_t x16 = INT32_MIN;
	volatile int32_t t3 = -7105702;

    t3 = (((x13^x14)/x15)&x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MIN;
	int8_t x18 = INT8_MAX;
	static int32_t x19 = 219096;
	int64_t t4 = 1608877LL;

    t4 = (((x17^x18)/x19)&x20);

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x21 = 1;
	int16_t x22 = INT16_MIN;
	int32_t x23 = 31855;
	int8_t x24 = INT8_MIN;
	static int32_t t5 = -51740974;

    t5 = (((x21^x22)/x23)&x24);

    if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint32_t x25 = 54U;
	uint64_t x26 = UINT64_MAX;
	uint64_t t6 = 31633206665LLU;

    t6 = (((x25^x26)/x27)&x28);

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static int64_t x29 = 1515226LL;
	uint64_t x31 = 4026198LLU;
	uint32_t x32 = 5694U;
	static volatile uint64_t t7 = 113045254LLU;

    t7 = (((x29^x30)/x31)&x32);

    if (t7 != 4614LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = INT8_MIN;
	uint32_t x34 = UINT32_MAX;
	int8_t x35 = -5;
	volatile uint64_t x36 = UINT64_MAX;

    t8 = (((x33^x34)/x35)&x36);

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = -2;
	static int64_t x39 = -2986524LL;
	int8_t x40 = INT8_MIN;
	volatile int64_t t9 = 499253058343012LL;

    t9 = (((x37^x38)/x39)&x40);

    if (t9 != -768LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = INT64_MAX;
	int8_t x42 = 10;
	uint8_t x43 = 8U;
	volatile int32_t x44 = -1;
	static int64_t t10 = -96954934207062727LL;

    t10 = (((x41^x42)/x43)&x44);

    if (t10 != 1152921504606846974LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x45 = UINT8_MAX;
	uint16_t x46 = 927U;
	uint32_t x47 = 17U;

    t11 = (((x45^x46)/x47)&x48);

    if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = INT8_MIN;
	volatile int8_t x50 = 0;
	uint8_t x52 = 0U;
	volatile int32_t t12 = -728260663;

    t12 = (((x49^x50)/x51)&x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint64_t x53 = 11853049738231LLU;
	volatile uint32_t x54 = 452873U;
	static int32_t x55 = -434;
	static volatile uint64_t x56 = 3647366054087443LLU;
	volatile uint64_t t13 = 3301815LLU;

    t13 = (((x53^x54)/x55)&x56);

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x57 = UINT32_MAX;
	int8_t x58 = INT8_MAX;
	int16_t x59 = -1;
	int8_t x60 = 0;
	volatile uint32_t t14 = 172U;

    t14 = (((x57^x58)/x59)&x60);

    if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = -29;
	uint32_t x62 = 1370U;
	uint16_t x63 = UINT16_MAX;
	uint16_t x64 = 17U;
	uint32_t t15 = 477554367U;

    t15 = (((x61^x62)/x63)&x64);

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = 2;
	static volatile int32_t x66 = INT32_MIN;
	static int64_t x67 = 2397LL;
	uint64_t x68 = UINT64_MAX;
	volatile uint64_t t16 = 712369LLU;

    t16 = (((x65^x66)/x67)&x68);

    if (t16 != 18446744073708655712LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x69 = 3LLU;
	int64_t x70 = -17053978LL;
	uint32_t x71 = UINT32_MAX;
	int8_t x72 = -1;
	uint64_t t17 = 837282699667283232LLU;

    t17 = (((x69^x70)/x71)&x72);

    if (t17 != 4294967296LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = INT32_MIN;
	int16_t x74 = 3;
	int16_t x75 = INT16_MAX;
	static volatile int32_t t18 = 2;

    t18 = (((x73^x74)/x75)&x76);

    if (t18 != -65542) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x77 = -1;
	int8_t x78 = -1;
	uint8_t x80 = 1U;
	uint64_t t19 = 1691522604550970403LLU;

    t19 = (((x77^x78)/x79)&x80);

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint8_t x81 = 3U;
	int8_t x82 = INT8_MIN;
	uint32_t x83 = UINT32_MAX;
	static volatile uint32_t t20 = 11U;

    t20 = (((x81^x82)/x83)&x84);

    if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x87 = 375587U;
	volatile uint32_t t21 = 101814U;

    t21 = (((x85^x86)/x87)&x88);

    if (t21 != 9U) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int64_t x89 = INT64_MAX;
	int8_t x90 = INT8_MIN;
	int64_t x92 = INT64_MIN;
	volatile int64_t t22 = INT64_MIN;

    t22 = (((x89^x90)/x91)&x92);

    if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = -1;
	static int64_t x94 = -1LL;
	volatile int64_t x96 = -1LL;
	static int64_t t23 = -1613257467934LL;

    t23 = (((x93^x94)/x95)&x96);

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint16_t x97 = UINT16_MAX;
	uint64_t x98 = 8251598274LLU;
	int8_t x99 = INT8_MIN;
	int16_t x100 = -332;
	volatile uint64_t t24 = 7LLU;

    t24 = (((x97^x98)/x99)&x100);

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static int64_t x101 = INT64_MIN;
	int64_t x103 = INT64_MIN;
	static int64_t t25 = 11194LL;

    t25 = (((x101^x102)/x103)&x104);

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = -1;
	static int64_t x106 = 413045LL;
	static int16_t x107 = INT16_MAX;
	volatile uint64_t t26 = 4881LLU;

    t26 = (((x105^x106)/x107)&x108);

    if (t26 != 71492442044517440LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = INT8_MIN;
	int64_t x110 = INT64_MAX;
	volatile int64_t x111 = INT64_MIN;

    t27 = (((x109^x110)/x111)&x112);

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x114 = -63145;
	int16_t x115 = -1;
	int32_t t28 = 2;

    t28 = (((x113^x114)/x115)&x116);

    if (t28 != -36184) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = INT8_MIN;
	uint16_t x118 = 292U;
	volatile int32_t x119 = 1;
	int16_t x120 = -1;
	static int32_t t29 = -5463;

    t29 = (((x117^x118)/x119)&x120);

    if (t29 != -348) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = INT64_MIN;
	static uint64_t x122 = UINT64_MAX;
	int16_t x123 = -245;
	int64_t x124 = 5LL;
	uint64_t t30 = 985546LLU;

    t30 = (((x121^x122)/x123)&x124);

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x125 = UINT16_MAX;
	static int16_t x126 = INT16_MAX;
	static int64_t x127 = -4240497237630722104LL;
	uint32_t x128 = 62U;
	static volatile int64_t t31 = 5LL;

    t31 = (((x125^x126)/x127)&x128);

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile int64_t x129 = 85136527099805LL;
	int8_t x130 = -1;
	uint64_t x131 = 1037748979958272LLU;
	uint16_t x132 = UINT16_MAX;
	uint64_t t32 = 933LLU;

    t32 = (((x129^x130)/x131)&x132);

    if (t32 != 17775LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile uint64_t x133 = 12385069LLU;
	int32_t x134 = INT32_MAX;
	int32_t x135 = INT32_MAX;
	int64_t x136 = INT64_MAX;
	volatile uint64_t t33 = 73857846097240LLU;

    t33 = (((x133^x134)/x135)&x136);

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x137 = 6711;
	int16_t x139 = -1;
	uint32_t x140 = 2U;

    t34 = (((x137^x138)/x139)&x140);

    if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x143 = -1;
	static int16_t x144 = -1;

    t35 = (((x141^x142)/x143)&x144);

    if (t35 != -2147482379) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x145 = 14U;
	static uint8_t x146 = 25U;
	static uint32_t x148 = 1650U;
	volatile int64_t t36 = -26356270459468LL;

    t36 = (((x145^x146)/x147)&x148);

    if (t36 != 1632LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint16_t x149 = UINT16_MAX;
	static int64_t x150 = -9045151042518LL;
	volatile int64_t x152 = INT64_MIN;
	int64_t t37 = 196LL;

    t37 = (((x149^x150)/x151)&x152);

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x153 = 14;
	int64_t x154 = -1LL;
	static int64_t x156 = INT64_MAX;

    t38 = (((x153^x154)/x155)&x156);

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x157 = UINT64_MAX;
	static int32_t x158 = INT32_MAX;
	int64_t x159 = -64297951433LL;
	uint16_t x160 = 704U;

    t39 = (((x157^x158)/x159)&x160);

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x161 = 105U;
	int32_t x162 = INT32_MAX;
	int32_t x163 = INT32_MIN;
	static int8_t x164 = 3;

    t40 = (((x161^x162)/x163)&x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x165 = INT16_MAX;
	uint16_t x167 = UINT16_MAX;
	static int16_t x168 = INT16_MIN;
	uint32_t t41 = 90U;

    t41 = (((x165^x166)/x167)&x168);

    if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x169 = 65U;
	static volatile uint64_t x170 = 287562133LLU;
	static volatile uint32_t x172 = 18U;
	volatile uint64_t t42 = 1LLU;

    t42 = (((x169^x170)/x171)&x172);

    if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x173 = INT32_MIN;
	volatile int8_t x174 = INT8_MIN;
	int16_t x175 = -30;
	volatile int32_t t43 = 2551312;

    t43 = (((x173^x174)/x175)&x176);

    if (t43 != 48064) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x177 = INT8_MIN;
	int16_t x178 = -3842;
	int32_t x179 = INT32_MIN;
	static volatile int8_t x180 = INT8_MIN;
	int32_t t44 = -1762;

    t44 = (((x177^x178)/x179)&x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = INT64_MAX;
	uint32_t x182 = 15U;
	int16_t x183 = -3;
	int32_t x184 = -1;
	static int64_t t45 = 9LL;

    t45 = (((x181^x182)/x183)&x184);

    if (t45 != -3074457345618258597LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x186 = -1;
	int32_t x188 = INT32_MIN;
	volatile int64_t t46 = 3384478508323LL;

    t46 = (((x185^x186)/x187)&x188);

    if (t46 != 140739635838976LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x190 = -20;
	volatile int8_t x191 = 2;
	int32_t x192 = INT32_MIN;
	int32_t t47 = INT32_MIN;

    t47 = (((x189^x190)/x191)&x192);

    if (t47 != INT32_MIN) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x193 = 1;
	static volatile uint64_t x194 = 21LLU;
	int64_t x195 = -240685353558LL;
	volatile uint64_t t48 = 3784742719LLU;

    t48 = (((x193^x194)/x195)&x196);

    if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x197 = 1734U;
	uint32_t x200 = 1368511939U;
	uint32_t t49 = 1U;

    t49 = (((x197^x198)/x199)&x200);

    if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = 56;
	int64_t x202 = 69LL;
	static volatile uint8_t x203 = 18U;
	int16_t x204 = INT16_MIN;
	int64_t t50 = -13911257265718LL;

    t50 = (((x201^x202)/x203)&x204);

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x205 = UINT16_MAX;
	volatile uint64_t x206 = 6053573584774084LLU;
	volatile int64_t x208 = INT64_MIN;
	uint64_t t51 = 609712221LLU;

    t51 = (((x205^x206)/x207)&x208);

    if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x209 = -1;
	volatile int8_t x210 = 57;
	static int16_t x211 = INT16_MIN;
	volatile int16_t x212 = -1;
	volatile int32_t t52 = 0;

    t52 = (((x209^x210)/x211)&x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint8_t x217 = 39U;
	uint32_t x218 = UINT32_MAX;
	int16_t x220 = INT16_MIN;
	uint32_t t53 = 67U;

    t53 = (((x217^x218)/x219)&x220);

    if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x221 = -8;
	static int8_t x223 = -1;
	int64_t t54 = 7LL;

    t54 = (((x221^x222)/x223)&x224);

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x225 = -1;
	uint32_t x226 = 48574607U;
	int8_t x227 = -1;

    t55 = (((x225^x226)/x227)&x228);

    if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x229 = 6326U;
	volatile int32_t x230 = INT32_MIN;
	uint64_t x232 = UINT64_MAX;
	static volatile uint64_t t56 = 7232035048998489807LLU;

    t56 = (((x229^x230)/x231)&x232);

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x233 = 0U;
	uint64_t x235 = 373199108780800LLU;
	uint16_t x236 = UINT16_MAX;
	static volatile uint64_t t57 = 21259002LLU;

    t57 = (((x233^x234)/x235)&x236);

    if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x238 = 41U;
	static int32_t x239 = -5;
	volatile uint64_t x240 = UINT64_MAX;
	uint64_t t58 = 2693142036LLU;

    t58 = (((x237^x238)/x239)&x240);

    if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x241 = INT32_MAX;
	static uint64_t x242 = UINT64_MAX;
	static volatile uint32_t x244 = UINT32_MAX;

    t59 = (((x241^x242)/x243)&x244);

    if (t59 != 3LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x245 = 78608994U;
	int16_t x246 = INT16_MIN;
	int64_t x247 = -1LL;
	uint64_t x248 = 292926LLU;
	volatile uint64_t t60 = 41435643977LLU;

    t60 = (((x245^x246)/x247)&x248);

    if (t60 != 262174LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x249 = INT8_MAX;
	uint16_t x250 = 10135U;
	int16_t x251 = INT16_MIN;
	int16_t x252 = INT16_MAX;

    t61 = (((x249^x250)/x251)&x252);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x253 = 723;
	uint32_t x254 = UINT32_MAX;
	volatile uint32_t x255 = 24475316U;
	volatile int16_t x256 = INT16_MIN;
	volatile uint32_t t62 = 40954U;

    t62 = (((x253^x254)/x255)&x256);

    if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x257 = INT32_MAX;
	volatile int64_t x258 = INT64_MAX;

    t63 = (((x257^x258)/x259)&x260);

    if (t63 != -281474976645120LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x261 = -1LL;
	int32_t x262 = 2507;
	int64_t x263 = 2LL;
	int8_t x264 = -1;
	volatile int64_t t64 = 22267556216432571LL;

    t64 = (((x261^x262)/x263)&x264);

    if (t64 != -1254LL) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x265 = -1;
	static int32_t x266 = -3;
	int32_t x268 = -1;

    t65 = (((x265^x266)/x267)&x268);

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x269 = 4;
	int8_t x270 = -2;

    t66 = (((x269^x270)/x271)&x272);

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x277 = 2U;
	volatile int64_t x280 = -1LL;

    t67 = (((x277^x278)/x279)&x280);

    if (t67 != -32765LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x281 = -25134095665LL;
	int32_t x282 = 58321143;
	int64_t x283 = -3087LL;
	static int8_t x284 = 10;
	int64_t t68 = -3952476281133700LL;

    t68 = (((x281^x282)/x283)&x284);

    if (t68 != 2LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x285 = 12U;
	int8_t x286 = -4;
	static int16_t x287 = 5;
	static uint8_t x288 = 8U;
	volatile uint32_t t69 = 825U;

    t69 = (((x285^x286)/x287)&x288);

    if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x289 = INT16_MIN;
	uint8_t x290 = 11U;
	uint8_t x292 = 15U;

    t70 = (((x289^x290)/x291)&x292);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x293 = -1;
	uint8_t x295 = 60U;
	int32_t t71 = -109;

    t71 = (((x293^x294)/x295)&x296);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x297 = 10;
	int32_t x298 = INT32_MIN;
	uint16_t x299 = UINT16_MAX;
	volatile int64_t t72 = -6160690LL;

    t72 = (((x297^x298)/x299)&x300);

    if (t72 != 1687817420800LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static int16_t x301 = -584;
	uint8_t x302 = 31U;
	int8_t x303 = INT8_MIN;
	static volatile int32_t t73 = -231869247;

    t73 = (((x301^x302)/x303)&x304);

    if (t73 != 4) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint8_t x305 = 4U;
	uint8_t x306 = UINT8_MAX;
	uint8_t x307 = UINT8_MAX;
	int64_t x308 = INT64_MAX;
	int64_t t74 = 0LL;

    t74 = (((x305^x306)/x307)&x308);

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x310 = INT16_MIN;
	int32_t x311 = -3;
	int64_t x312 = -54150069758LL;
	static volatile int64_t t75 = 12382968235459726LL;

    t75 = (((x309^x310)/x311)&x312);

    if (t75 != -54150070270LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x313 = 2165711917668503333LL;
	static int32_t x314 = INT32_MIN;
	uint64_t x315 = UINT64_MAX;
	volatile uint32_t x316 = 43910U;
	uint64_t t76 = 8LLU;

    t76 = (((x313^x314)/x315)&x316);

    if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x318 = INT32_MIN;
	int64_t x319 = INT64_MAX;
	static int64_t t77 = -2321296299629867034LL;

    t77 = (((x317^x318)/x319)&x320);

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x321 = 2961U;
	static uint8_t x324 = 11U;
	volatile uint64_t t78 = 127022579LLU;

    t78 = (((x321^x322)/x323)&x324);

    if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x329 = 4LLU;
	int16_t x330 = 4;
	int16_t x331 = -199;
	int16_t x332 = -89;
	uint64_t t79 = 2268977912240659941LLU;

    t79 = (((x329^x330)/x331)&x332);

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x333 = -1;
	int16_t x334 = INT16_MAX;
	volatile int16_t x335 = -2334;
	int64_t x336 = INT64_MIN;
	int64_t t80 = 5LL;

    t80 = (((x333^x334)/x335)&x336);

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x337 = 28;
	static volatile int64_t x338 = -1LL;
	volatile uint8_t x339 = UINT8_MAX;
	volatile uint16_t x340 = 212U;

    t81 = (((x337^x338)/x339)&x340);

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x341 = INT16_MIN;
	static volatile uint64_t x342 = 2553LLU;
	int64_t x344 = INT64_MIN;
	uint64_t t82 = 83180297554LLU;

    t82 = (((x341^x342)/x343)&x344);

    if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x345 = INT32_MAX;
	static uint32_t x347 = 2460U;
	int64_t x348 = -1886954753201LL;

    t83 = (((x345^x346)/x347)&x348);

    if (t83 != 610816LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x349 = UINT16_MAX;
	int16_t x350 = 3212;
	uint32_t x352 = 23036407U;
	int64_t t84 = 139347706526624000LL;

    t84 = (((x349^x350)/x351)&x352);

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint16_t x353 = UINT16_MAX;
	uint16_t x354 = 1948U;
	volatile uint16_t x355 = 496U;
	static int8_t x356 = -1;
	volatile int32_t t85 = -203738;

    t85 = (((x353^x354)/x355)&x356);

    if (t85 != 128) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x357 = -1;
	static int16_t x358 = -23;
	uint8_t x359 = UINT8_MAX;
	static volatile int64_t t86 = -22995LL;

    t86 = (((x357^x358)/x359)&x360);

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x361 = -223573447;
	volatile int64_t x363 = INT64_MIN;
	static int32_t x364 = -224148406;
	volatile int64_t t87 = 3LL;

    t87 = (((x361^x362)/x363)&x364);

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x366 = -1;
	volatile int64_t x367 = -15858840227516749LL;
	int32_t x368 = 61423;
	volatile int64_t t88 = -4106508LL;

    t88 = (((x365^x366)/x367)&x368);

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x369 = INT32_MIN;
	static uint32_t x370 = 3397U;
	volatile int16_t x372 = 0;
	int64_t t89 = 11452LL;

    t89 = (((x369^x370)/x371)&x372);

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x375 = 807U;
	int16_t x376 = 12;
	volatile int32_t t90 = 1;

    t90 = (((x373^x374)/x375)&x376);

    if (t90 != 8) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x377 = 4428U;
	uint32_t x378 = 440704U;
	volatile int64_t t91 = -768368945235783LL;

    t91 = (((x377^x378)/x379)&x380);

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x381 = INT16_MIN;
	static int64_t x382 = INT64_MIN;
	volatile int32_t x383 = INT32_MIN;
	int64_t x384 = -6493717084121LL;

    t92 = (((x381^x382)/x383)&x384);

    if (t92 != -6493990551551LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x385 = UINT8_MAX;
	int8_t x388 = 1;
	int64_t t93 = -1610838812LL;

    t93 = (((x385^x386)/x387)&x388);

    if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x389 = 150234305273966432LLU;
	int64_t x390 = INT64_MIN;
	int32_t x391 = -848659;
	int8_t x392 = INT8_MIN;
	volatile uint64_t t94 = 3545911009565940720LLU;

    t94 = (((x389^x390)/x391)&x392);

    if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static int32_t x393 = INT32_MIN;
	int16_t x394 = 0;
	int16_t x396 = 1;
	int32_t t95 = -3575024;

    t95 = (((x393^x394)/x395)&x396);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x398 = 0;
	int32_t x400 = 3927;
	int32_t t96 = -32;

    t96 = (((x397^x398)/x399)&x400);

    if (t96 != 772) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x402 = 5042313340324439350LLU;
	int32_t x403 = INT32_MIN;

    t97 = (((x401^x402)/x403)&x404);

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint64_t x405 = 96315LLU;
	int8_t x406 = INT8_MIN;
	uint64_t t98 = 16566082072963LLU;

    t98 = (((x405^x406)/x407)&x408);

    if (t98 != 145249953336294923LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x409 = INT64_MAX;
	static int16_t x410 = -1;
	uint32_t x411 = 448022589U;
	volatile uint8_t x412 = 14U;
	int64_t t99 = -7860525LL;

    t99 = (((x409^x410)/x411)&x412);

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile uint8_t x413 = 34U;
	int64_t x414 = INT64_MAX;
	uint8_t x415 = UINT8_MAX;
	uint16_t x416 = 1U;
	volatile int64_t t100 = -71291LL;

    t100 = (((x413^x414)/x415)&x416);

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x417 = UINT64_MAX;
	int16_t x418 = INT16_MIN;
	static int16_t x419 = 60;
	uint8_t x420 = UINT8_MAX;
	volatile uint64_t t101 = 3092116492412309LLU;

    t101 = (((x417^x418)/x419)&x420);

    if (t101 != 34LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x421 = INT32_MAX;
	volatile uint16_t x422 = 22U;
	int8_t x423 = 3;
	volatile uint64_t x424 = 8737763537941302770LLU;

    t102 = (((x421^x422)/x423)&x424);

    if (t102 != 571082914LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x425 = 40;
	int8_t x427 = INT8_MIN;
	static int16_t x428 = INT16_MIN;
	int64_t t103 = -1LL;

    t103 = (((x425^x426)/x427)&x428);

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x429 = -8;
	static volatile int16_t x432 = -65;
	static volatile uint32_t t104 = 15214U;

    t104 = (((x429^x430)/x431)&x432);

    if (t104 != 858993316U) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x433 = 0;
	int32_t x434 = 149;
	int8_t x435 = INT8_MIN;
	int32_t t105 = -989;

    t105 = (((x433^x434)/x435)&x436);

    if (t105 != -1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x437 = 119LLU;
	volatile uint16_t x438 = 7335U;
	int32_t x439 = -1;
	int8_t x440 = INT8_MIN;
	volatile uint64_t t106 = 15287657736LLU;

    t106 = (((x437^x438)/x439)&x440);

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int32_t x441 = -1;
	int8_t x443 = -1;
	int8_t x444 = INT8_MAX;
	static int32_t t107 = 2477921;

    t107 = (((x441^x442)/x443)&x444);

    if (t107 != 43) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x445 = 306;
	int8_t x447 = INT8_MAX;
	uint32_t x448 = UINT32_MAX;
	static volatile uint64_t t108 = 24LLU;

    t108 = (((x445^x446)/x447)&x448);

    if (t108 != 541098239LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint16_t x449 = 3U;
	volatile int16_t x450 = INT16_MIN;
	static int8_t x452 = INT8_MIN;
	volatile int32_t t109 = -1;

    t109 = (((x449^x450)/x451)&x452);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x453 = -1549680021288420737LL;
	static int64_t x455 = INT64_MIN;
	volatile int16_t x456 = INT16_MAX;
	volatile int64_t t110 = -2024433LL;

    t110 = (((x453^x454)/x455)&x456);

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x457 = INT8_MAX;
	static int16_t x459 = -72;
	uint32_t x460 = UINT32_MAX;
	volatile uint32_t t111 = 14808300U;

    t111 = (((x457^x458)/x459)&x460);

    if (t111 != 0U) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x461 = INT16_MIN;
	volatile int32_t x462 = INT32_MIN;
	uint16_t x463 = 2U;
	static int64_t x464 = 11272510847LL;
	static volatile int64_t t112 = 591299716806510LL;

    t112 = (((x461^x462)/x463)&x464);

    if (t112 != 535085056LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x465 = 99U;
	uint32_t x466 = 1951U;
	static int8_t x467 = INT8_MAX;

    t113 = (((x465^x466)/x467)&x468);

    if (t113 != 0U) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x469 = INT64_MIN;
	int16_t x470 = -1;
	uint64_t x471 = 3LLU;
	static volatile int16_t x472 = INT16_MIN;
	volatile uint64_t t114 = 30295098166LLU;

    t114 = (((x469^x470)/x471)&x472);

    if (t114 != 3074457345618247680LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x473 = INT64_MIN;
	int8_t x474 = -1;
	uint16_t x475 = 5U;
	volatile int8_t x476 = 3;
	int64_t t115 = -2467691124LL;

    t115 = (((x473^x474)/x475)&x476);

    if (t115 != 1LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x477 = INT16_MIN;
	volatile int64_t x478 = -21341478916757308LL;
	volatile int16_t x479 = INT16_MIN;
	int64_t t116 = -5507LL;

    t116 = (((x477^x478)/x479)&x480);

    if (t116 != 1544778847LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x481 = -1;
	static uint8_t x483 = UINT8_MAX;
	static int8_t x484 = 4;
	static volatile int32_t t117 = -9112;

    t117 = (((x481^x482)/x483)&x484);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x485 = INT32_MIN;
	static int64_t x487 = INT64_MAX;
	volatile int16_t x488 = 337;
	volatile int64_t t118 = 18952288278062411LL;

    t118 = (((x485^x486)/x487)&x488);

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint16_t x491 = 226U;
	volatile int32_t t119 = -129785528;

    t119 = (((x489^x490)/x491)&x492);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint8_t x493 = 51U;
	static uint8_t x494 = UINT8_MAX;
	static volatile uint8_t x495 = 3U;
	volatile int64_t t120 = -15153LL;

    t120 = (((x493^x494)/x495)&x496);

    if (t120 != 68LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x498 = 14750U;
	int16_t x499 = 25;
	int32_t x500 = -7868547;
	volatile uint32_t t121 = 1U;

    t121 = (((x497^x498)/x499)&x500);

    if (t121 != 168128085U) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x501 = -60598LL;
	int64_t x502 = -13169750947965LL;
	static int64_t x503 = 525LL;
	uint8_t x504 = 33U;
	volatile int64_t t122 = 25471701626LL;

    t122 = (((x501^x502)/x503)&x504);

    if (t122 != 32LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x505 = 0U;
	uint32_t x506 = 91608U;
	uint8_t x508 = UINT8_MAX;

    t123 = (((x505^x506)/x507)&x508);

    if (t123 != 40LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x509 = INT8_MAX;
	int8_t x510 = -6;
	uint8_t x511 = 64U;
	int16_t x512 = INT16_MIN;
	static int32_t t124 = 0;

    t124 = (((x509^x510)/x511)&x512);

    if (t124 != -32768) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x513 = INT64_MAX;
	static volatile int8_t x514 = 29;
	static volatile int32_t x515 = -210234728;
	volatile int64_t x516 = INT64_MAX;
	int64_t t125 = -18152300LL;

    t125 = (((x513^x514)/x515)&x516);

    if (t125 != 9223371992982994374LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x518 = INT64_MIN;
	int32_t x519 = INT32_MIN;
	static uint64_t t126 = 3628950292072LLU;

    t126 = (((x517^x518)/x519)&x520);

    if (t126 != 340788475068417LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x521 = UINT8_MAX;
	uint32_t x522 = 5545U;
	static uint16_t x524 = 777U;
	uint32_t t127 = 60568488U;

    t127 = (((x521^x522)/x523)&x524);

    if (t127 != 0U) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x525 = -66119140LL;
	static uint64_t x526 = 672189620LLU;
	volatile int64_t x527 = INT64_MIN;
	int8_t x528 = 0;
	volatile uint64_t t128 = 2757LLU;

    t128 = (((x525^x526)/x527)&x528);

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x529 = 7U;
	static volatile uint8_t x530 = UINT8_MAX;
	uint32_t x531 = UINT32_MAX;
	static volatile int32_t x532 = -39768911;
	static uint32_t t129 = 69422U;

    t129 = (((x529^x530)/x531)&x532);

    if (t129 != 0U) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x534 = INT16_MAX;
	int64_t x535 = 1LL;
	uint8_t x536 = 112U;

    t130 = (((x533^x534)/x535)&x536);

    if (t130 != 32LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x538 = INT32_MIN;
	static volatile int8_t x539 = INT8_MAX;
	volatile uint32_t x540 = 1689572965U;

    t131 = (((x537^x538)/x539)&x540);

    if (t131 != 1689571936U) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x541 = INT32_MIN;
	volatile int16_t x542 = INT16_MAX;
	volatile uint8_t x543 = 2U;
	int64_t x544 = INT64_MIN;
	int64_t t132 = INT64_MIN;

    t132 = (((x541^x542)/x543)&x544);

    if (t132 != INT64_MIN) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x545 = INT8_MIN;
	static int64_t x546 = -1LL;
	static volatile uint8_t x548 = UINT8_MAX;
	volatile int64_t t133 = -68018848123731616LL;

    t133 = (((x545^x546)/x547)&x548);

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int8_t x549 = INT8_MIN;
	int32_t x551 = INT32_MAX;
	int16_t x552 = INT16_MAX;
	int32_t t134 = 81475666;

    t134 = (((x549^x550)/x551)&x552);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x553 = 0;
	int8_t x554 = INT8_MIN;
	volatile int64_t x555 = INT64_MAX;
	int16_t x556 = -1;
	int64_t t135 = 5LL;

    t135 = (((x553^x554)/x555)&x556);

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x557 = INT16_MIN;
	volatile int64_t x558 = INT64_MAX;
	static int8_t x559 = INT8_MIN;
	int8_t x560 = INT8_MIN;
	int64_t t136 = -1LL;

    t136 = (((x557^x558)/x559)&x560);

    if (t136 != 72057594037927680LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x561 = 1;
	int64_t x563 = INT64_MIN;
	volatile uint64_t x564 = 81566788604LLU;
	volatile uint64_t t137 = 352597836941395500LLU;

    t137 = (((x561^x562)/x563)&x564);

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x565 = -264813627134LL;
	int64_t x566 = 2035973634900888339LL;
	int64_t x567 = -1LL;
	uint32_t x568 = UINT32_MAX;

    t138 = (((x565^x566)/x567)&x568);

    if (t138 != 1212894703LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x569 = INT64_MIN;
	int32_t x570 = -1;
	uint8_t x571 = 3U;
	static int64_t x572 = INT64_MIN;

    t139 = (((x569^x570)/x571)&x572);

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x577 = 22;
	volatile uint32_t x578 = UINT32_MAX;
	int64_t x579 = INT64_MIN;
	static uint8_t x580 = UINT8_MAX;

    t140 = (((x577^x578)/x579)&x580);

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x581 = 2;
	uint64_t x582 = 651261301LLU;
	uint32_t x583 = 1023197660U;
	volatile uint16_t x584 = UINT16_MAX;
	volatile uint64_t t141 = 111535LLU;

    t141 = (((x581^x582)/x583)&x584);

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x585 = -1;
	volatile int8_t x587 = 48;
	volatile uint8_t x588 = 39U;

    t142 = (((x585^x586)/x587)&x588);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x590 = 182LLU;
	int64_t x591 = -179LL;
	int16_t x592 = INT16_MIN;

    t143 = (((x589^x590)/x591)&x592);

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x593 = -1;
	uint16_t x594 = UINT16_MAX;
	uint64_t x595 = 35720LLU;
	uint64_t t144 = 38LLU;

    t144 = (((x593^x594)/x595)&x596);

    if (t144 != 516424720187392LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint32_t x597 = 125U;
	int16_t x599 = 5;
	volatile int32_t x600 = -1199239;

    t145 = (((x597^x598)/x599)&x600);

    if (t145 != 25U) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x601 = INT64_MAX;
	int64_t x603 = INT64_MAX;
	int64_t x604 = -1LL;

    t146 = (((x601^x602)/x603)&x604);

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint16_t x605 = UINT16_MAX;
	static uint16_t x606 = 899U;
	volatile int32_t x607 = INT32_MAX;
	int64_t x608 = -1LL;
	static volatile int64_t t147 = 1401547LL;

    t147 = (((x605^x606)/x607)&x608);

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x609 = -3322LL;
	uint16_t x610 = UINT16_MAX;
	static volatile int64_t t148 = 144393243771LL;

    t148 = (((x609^x610)/x611)&x612);

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint16_t x613 = 46U;
	int8_t x614 = INT8_MIN;
	int8_t x615 = INT8_MIN;
	volatile uint8_t x616 = 11U;
	int32_t t149 = 394605;

    t149 = (((x613^x614)/x615)&x616);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x617 = 2956LLU;
	static int32_t x618 = -1;
	static volatile uint32_t x619 = 2U;
	int8_t x620 = INT8_MIN;
	static uint64_t t150 = 373LLU;

    t150 = (((x617^x618)/x619)&x620);

    if (t150 != 9223372036854774272LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x621 = INT64_MIN;
	int64_t x622 = INT64_MIN;
	int16_t x623 = INT16_MIN;
	int32_t x624 = INT32_MIN;
	volatile int64_t t151 = 1360559797691273LL;

    t151 = (((x621^x622)/x623)&x624);

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x625 = UINT32_MAX;
	int64_t x626 = 1607233LL;
	uint32_t x627 = 123991U;
	static int32_t x628 = -102840695;
	volatile int64_t t152 = -1LL;

    t152 = (((x625^x626)/x627)&x628);

    if (t152 != 34304LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint64_t x629 = 44791660028814158LLU;
	static uint16_t x630 = UINT16_MAX;
	uint64_t t153 = 1620LLU;

    t153 = (((x629^x630)/x631)&x632);

    if (t153 != 9235LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x633 = UINT8_MAX;
	uint8_t x634 = 6U;
	uint64_t x635 = UINT64_MAX;
	static uint32_t x636 = 284078U;
	static volatile uint64_t t154 = 202246328898033LLU;

    t154 = (((x633^x634)/x635)&x636);

    if (t154 != 0LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x637 = -228;
	int64_t x638 = INT64_MAX;
	uint8_t x639 = 9U;
	int8_t x640 = INT8_MIN;

    t155 = (((x637^x638)/x639)&x640);

    if (t155 != -1024819115206086272LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x641 = -1;
	static int64_t x642 = 258985445113049776LL;
	int32_t x643 = -784894;
	uint64_t x644 = 42076179659600051LLU;
	uint64_t t156 = 415920416LLU;

    t156 = (((x641^x642)/x643)&x644);

    if (t156 != 55063425040LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x645 = INT64_MIN;
	static volatile uint8_t x646 = 6U;
	int8_t x647 = -1;
	uint16_t x648 = 1032U;

    t157 = (((x645^x646)/x647)&x648);

    if (t157 != 1032LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x649 = INT32_MIN;
	int32_t x650 = INT32_MAX;
	uint8_t x651 = 32U;
	int32_t x652 = INT32_MIN;
	volatile int32_t t158 = -12558;

    t158 = (((x649^x650)/x651)&x652);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint8_t x653 = 38U;
	uint8_t x654 = 1U;
	uint8_t x655 = 10U;
	volatile int64_t x656 = INT64_MAX;
	int64_t t159 = -145214294138LL;

    t159 = (((x653^x654)/x655)&x656);

    if (t159 != 3LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x657 = 19LL;
	static uint16_t x658 = 1U;
	int32_t x659 = -1;
	int32_t x660 = INT32_MAX;
	int64_t t160 = 28860LL;

    t160 = (((x657^x658)/x659)&x660);

    if (t160 != 2147483630LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x661 = INT32_MIN;
	static int16_t x662 = 957;
	int16_t x663 = -1;
	uint64_t x664 = UINT64_MAX;
	uint64_t t161 = 7722743LLU;

    t161 = (((x661^x662)/x663)&x664);

    if (t161 != 2147482691LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x665 = 1585U;
	static int8_t x666 = INT8_MIN;
	static int8_t x667 = 2;
	volatile int64_t x668 = -1LL;
	int64_t t162 = 1519845LL;

    t162 = (((x665^x666)/x667)&x668);

    if (t162 != -807LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x669 = -23;
	int8_t x671 = INT8_MIN;
	int64_t x672 = 388109147483679LL;

    t163 = (((x669^x670)/x671)&x672);

    if (t163 != 388109147483649LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x673 = 6111;
	int8_t x674 = INT8_MIN;
	uint32_t x675 = 30322U;
	int32_t x676 = 0;
	static uint32_t t164 = 66U;

    t164 = (((x673^x674)/x675)&x676);

    if (t164 != 0U) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x678 = INT8_MIN;
	int16_t x679 = INT16_MIN;
	uint16_t x680 = 220U;

    t165 = (((x677^x678)/x679)&x680);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x682 = INT8_MIN;
	static int32_t x683 = 645509;
	int64_t x684 = -1897LL;
	volatile int64_t t166 = -10471514501LL;

    t166 = (((x681^x682)/x683)&x684);

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x688 = -1;
	volatile int64_t t167 = 4372969LL;

    t167 = (((x685^x686)/x687)&x688);

    if (t167 != 4LL) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint64_t x689 = 1733LLU;
	int8_t x690 = -1;
	int64_t x691 = -1LL;
	int64_t x692 = -31017352285845LL;
	uint64_t t168 = 63LLU;

    t168 = (((x689^x690)/x691)&x692);

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x693 = -1;
	int8_t x694 = -7;
	uint8_t x695 = UINT8_MAX;
	int16_t x696 = INT16_MAX;
	volatile int32_t t169 = -2;

    t169 = (((x693^x694)/x695)&x696);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x701 = 6327U;
	int8_t x703 = -1;
	int32_t x704 = INT32_MIN;

    t170 = (((x701^x702)/x703)&x704);

    if (t170 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x705 = 12U;
	int64_t x706 = 549701116166196679LL;
	static int16_t x707 = 983;
	volatile int64_t x708 = INT64_MIN;
	volatile int64_t t171 = 61LL;

    t171 = (((x705^x706)/x707)&x708);

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int32_t x709 = INT32_MIN;
	uint64_t x710 = 941645130LLU;
	volatile uint16_t x712 = 5684U;
	uint64_t t172 = 118970765861648566LLU;

    t172 = (((x709^x710)/x711)&x712);

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	static int16_t x714 = -5;
	volatile uint32_t x715 = 257765067U;
	uint32_t t173 = 140704486U;

    t173 = (((x713^x714)/x715)&x716);

    if (t173 != 16U) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x717 = INT8_MIN;
	static uint8_t x719 = 2U;
	volatile uint64_t t174 = 33705579682587LLU;

    t174 = (((x717^x718)/x719)&x720);

    if (t174 != 18446733925805077285LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x721 = INT8_MIN;
	int32_t x722 = INT32_MIN;
	uint64_t x723 = UINT64_MAX;
	volatile int64_t x724 = 169911091785873668LL;
	uint64_t t175 = 145090835019050LLU;

    t175 = (((x721^x722)/x723)&x724);

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x725 = 1526165572LL;
	int64_t x726 = -1LL;
	uint16_t x727 = 620U;
	uint16_t x728 = 3U;
	volatile int64_t t176 = -1LL;

    t176 = (((x725^x726)/x727)&x728);

    if (t176 != 3LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x729 = 1868LLU;
	int64_t x730 = 0LL;
	uint32_t x731 = 3157U;
	int8_t x732 = INT8_MIN;
	uint64_t t177 = 2399349997LLU;

    t177 = (((x729^x730)/x731)&x732);

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x734 = 9U;
	int16_t x735 = INT16_MIN;
	int64_t x736 = -3940476363LL;
	int64_t t178 = -7LL;

    t178 = (((x733^x734)/x735)&x736);

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint32_t x737 = 53624U;
	int8_t x738 = INT8_MIN;
	static int16_t x739 = INT16_MIN;
	volatile uint32_t x740 = 695U;
	volatile uint32_t t179 = 1919500156U;

    t179 = (((x737^x738)/x739)&x740);

    if (t179 != 0U) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x742 = 22402U;
	int32_t x743 = -1;
	uint64_t x744 = 72603912LLU;
	uint64_t t180 = 62362LLU;

    t180 = (((x741^x742)/x743)&x744);

    if (t180 != 20744LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x745 = INT8_MAX;
	volatile int8_t x746 = INT8_MIN;
	int32_t x747 = -2113;
	int16_t x748 = -1;
	volatile int32_t t181 = -169;

    t181 = (((x745^x746)/x747)&x748);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x749 = -1;
	uint8_t x751 = 7U;
	static int32_t t182 = -4510320;

    t182 = (((x749^x750)/x751)&x752);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x753 = INT16_MIN;
	int8_t x755 = -1;
	volatile int8_t x756 = INT8_MAX;
	int32_t t183 = 24100;

    t183 = (((x753^x754)/x755)&x756);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint16_t x761 = 22U;
	uint64_t x763 = UINT64_MAX;
	int64_t x764 = -370LL;
	uint64_t t184 = 207214601LLU;

    t184 = (((x761^x762)/x763)&x764);

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint8_t x766 = 0U;
	int32_t x767 = INT32_MIN;
	volatile int16_t x768 = 1424;
	volatile int32_t t185 = 8;

    t185 = (((x765^x766)/x767)&x768);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x769 = UINT8_MAX;
	int8_t x770 = INT8_MIN;
	int8_t x771 = INT8_MIN;
	uint8_t x772 = 5U;
	static volatile int32_t t186 = -2111766;

    t186 = (((x769^x770)/x771)&x772);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x773 = INT32_MIN;
	int64_t x774 = INT64_MIN;
	uint64_t x775 = UINT64_MAX;
	static int64_t x776 = 1210805111256852LL;

    t187 = (((x773^x774)/x775)&x776);

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int8_t x777 = INT8_MIN;
	int64_t x779 = 6935969215010656LL;
	uint8_t x780 = UINT8_MAX;
	volatile int64_t t188 = -5858654LL;

    t188 = (((x777^x778)/x779)&x780);

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint64_t x781 = UINT64_MAX;
	static uint16_t x782 = UINT16_MAX;
	uint64_t x783 = UINT64_MAX;
	uint64_t t189 = 359158653713964LLU;

    t189 = (((x781^x782)/x783)&x784);

    if (t189 != 0LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x785 = 577LLU;
	volatile int16_t x787 = 5940;
	volatile int32_t x788 = INT32_MIN;
	uint64_t t190 = 157307310821LLU;

    t190 = (((x785^x786)/x787)&x788);

    if (t190 != 32212254720LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int32_t x791 = 41099617;
	volatile int32_t x792 = -1;
	static volatile uint64_t t191 = 3251672629LLU;

    t191 = (((x789^x790)/x791)&x792);

    if (t191 != 224415036199LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x793 = INT32_MIN;
	int32_t x794 = INT32_MAX;
	int16_t x795 = -3;
	volatile int32_t x796 = INT32_MIN;
	int32_t t192 = -406321386;

    t192 = (((x793^x794)/x795)&x796);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x797 = INT16_MIN;
	int32_t x798 = -1;
	int16_t x799 = -14;

    t193 = (((x797^x798)/x799)&x800);

    if (t193 != -2420) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x801 = UINT8_MAX;
	int16_t x802 = INT16_MAX;
	int32_t x803 = -58;
	uint8_t x804 = UINT8_MAX;
	int32_t t194 = -7;

    t194 = (((x801^x802)/x803)&x804);

    if (t194 != 208) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x805 = 5;
	int32_t x806 = INT32_MIN;
	int8_t x807 = INT8_MIN;
	int8_t x808 = INT8_MIN;
	volatile int32_t t195 = 6593625;

    t195 = (((x805^x806)/x807)&x808);

    if (t195 != 16777088) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x809 = 0;
	static volatile int32_t x811 = INT32_MIN;
	int32_t x812 = 19018;
	int32_t t196 = -175690;

    t196 = (((x809^x810)/x811)&x812);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x815 = -4333461296412LL;
	uint64_t t197 = 6334731LLU;

    t197 = (((x813^x814)/x815)&x816);

    if (t197 != 1LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x817 = 0U;
	uint32_t x818 = UINT32_MAX;
	int16_t x819 = 5626;
	static uint32_t x820 = 35517U;
	volatile uint32_t t198 = 3276424U;

    t198 = (((x817^x818)/x819)&x820);

    if (t198 != 33300U) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x821 = INT32_MAX;
	uint16_t x822 = 189U;
	uint8_t x823 = 17U;
	volatile uint16_t x824 = UINT16_MAX;
	volatile int32_t t199 = -192;

    t199 = (((x821^x822)/x823)&x824);

    if (t199 != 34684) { NG(); } else { ; }
	
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

