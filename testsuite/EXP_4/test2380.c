
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

static volatile int64_t x4 = -32891811828183LL;
int64_t x6 = -3671831393265563003LL;
uint16_t x7 = 6754U;
int8_t x13 = INT8_MIN;
uint16_t x16 = 1565U;
int64_t x19 = -15706LL;
int32_t x20 = 55251835;
int64_t x28 = INT64_MIN;
static uint32_t x31 = 4U;
static int8_t x36 = 0;
int32_t x39 = INT32_MAX;
uint64_t t8 = 98549839644823361LLU;
int16_t x57 = INT16_MIN;
int64_t x58 = 4092397LL;
static int32_t x61 = -1;
int32_t x65 = INT32_MAX;
uint8_t x66 = 29U;
int16_t x74 = 63;
volatile int64_t t17 = 32490752833983LL;
int64_t x83 = INT64_MIN;
static volatile int64_t t18 = 28816438LL;
int8_t x88 = INT8_MAX;
int16_t x89 = -1;
static volatile int16_t x90 = INT16_MIN;
uint32_t x93 = UINT32_MAX;
int32_t x94 = 0;
uint8_t x101 = 0U;
static uint32_t x113 = UINT32_MAX;
volatile int64_t x115 = -1LL;
volatile uint8_t x119 = 102U;
int32_t x145 = INT32_MAX;
int16_t x146 = -1;
static int32_t x150 = -47;
static volatile int8_t x153 = -14;
uint32_t x154 = 123245U;
uint8_t x155 = 22U;
uint64_t x157 = 0LLU;
int64_t x159 = -1LL;
uint64_t t34 = 0LLU;
uint64_t x161 = 7641166553366LLU;
static uint64_t x164 = UINT64_MAX;
static int32_t x177 = INT32_MAX;
int64_t x178 = -30679909LL;
int64_t x180 = -1LL;
int64_t t38 = 5922356821937LL;
volatile int64_t t39 = 29297LL;
int32_t x186 = INT32_MIN;
static volatile int8_t x187 = INT8_MIN;
int8_t x188 = 0;
static uint8_t x189 = UINT8_MAX;
volatile int64_t x204 = INT64_MIN;
uint8_t x206 = 85U;
uint8_t x207 = 5U;
static volatile uint32_t t44 = 368U;
volatile uint32_t t48 = 2U;
int32_t x238 = INT32_MIN;
int64_t t52 = 45896960645508LL;
uint16_t x246 = UINT16_MAX;
int64_t t54 = 7489660463576799LL;
volatile int16_t x255 = INT16_MIN;
int16_t x258 = -6565;
volatile int32_t x260 = INT32_MAX;
int8_t x270 = INT8_MIN;
uint8_t x271 = UINT8_MAX;
int8_t x277 = -1;
volatile uint64_t x283 = 4087678095LLU;
static int8_t x284 = INT8_MIN;
volatile int64_t x291 = -110395268074LL;
static volatile int64_t t64 = 70577979391LL;
volatile uint32_t x305 = UINT32_MAX;
volatile int64_t t68 = -38783770185388668LL;
int32_t x314 = -1;
int32_t x316 = INT32_MIN;
uint8_t x319 = UINT8_MAX;
uint16_t x324 = 1U;
int64_t x336 = -1LL;
static int16_t x338 = INT16_MIN;
int64_t t75 = 335233717LL;
volatile int64_t x342 = INT64_MAX;
static uint64_t x343 = 79950771070900LLU;
int64_t x346 = -4015103LL;
static int8_t x356 = INT8_MIN;
static uint64_t t81 = 568527LLU;
uint8_t x370 = 1U;
uint16_t x372 = UINT16_MAX;
static int32_t x376 = INT32_MIN;
int8_t x383 = INT8_MAX;
uint8_t x389 = 28U;
static int8_t x391 = -11;
int64_t x394 = INT64_MAX;
static int16_t x406 = 3852;
int16_t x411 = INT16_MIN;
static volatile int64_t t92 = 46783548834LL;
int8_t x414 = -1;
int32_t x429 = 850887497;
int8_t x430 = -6;
static volatile int64_t t99 = 11038238LL;
uint32_t x452 = 95367078U;
uint8_t x458 = UINT8_MAX;
int64_t x461 = INT64_MIN;
volatile int64_t x464 = INT64_MAX;
int64_t t103 = 769293492904476LL;
uint32_t t105 = 18728U;
volatile int8_t x477 = INT8_MAX;
uint64_t x479 = 200372972469197962LLU;
int32_t t109 = -8;
int32_t x489 = -3857209;
int32_t x492 = -1;
int64_t x500 = -1205717521LL;
volatile uint64_t t113 = 68757592842195462LLU;
volatile int32_t x510 = 1102;
static uint16_t x514 = UINT16_MAX;
int64_t t115 = 2264591092637725LL;
int16_t x517 = -1;
int64_t t117 = -236979715522817LL;
int64_t x533 = INT64_MIN;
uint16_t x534 = 464U;
uint32_t x539 = 63740U;
int16_t x547 = INT16_MIN;
volatile int8_t x549 = -11;
uint16_t x557 = 9U;
int16_t x561 = -1;
int64_t t126 = -4316128789520LL;
static int64_t x573 = INT64_MIN;
int64_t x590 = -43LL;
int8_t x597 = INT8_MIN;
static uint32_t t132 = 43353618U;
static uint64_t t133 = 32781527644714581LLU;
uint16_t x610 = 5U;
int32_t t139 = 829474;
uint8_t x641 = UINT8_MAX;
uint32_t x650 = UINT32_MAX;
volatile int64_t x651 = -15LL;
volatile int64_t t143 = -972526LL;
volatile uint32_t t145 = 1460462767U;
int32_t t146 = 29799755;
int32_t x665 = 488003;
uint64_t t148 = 1LLU;
int8_t x677 = INT8_MAX;
uint8_t x680 = UINT8_MAX;
int64_t x687 = 476404027LL;
uint64_t x692 = 31716956LLU;
volatile int64_t x694 = INT64_MIN;
volatile int64_t t154 = -2LL;
uint32_t x700 = UINT32_MAX;
static int8_t x701 = INT8_MIN;
volatile uint64_t t158 = 2386094628884LLU;
uint64_t x718 = 3126LLU;
static uint16_t x728 = 9539U;
volatile uint64_t x731 = 64545357100018898LLU;
int64_t x732 = -47117560880185LL;
volatile int32_t t164 = 19424593;
int32_t x749 = INT32_MAX;
int8_t x757 = INT8_MIN;
int8_t x759 = INT8_MIN;
volatile int32_t x762 = 12;
volatile int64_t x771 = -121626028LL;
volatile int8_t x773 = -4;
static volatile uint8_t x777 = UINT8_MAX;
int16_t x781 = -1;
int16_t x782 = INT16_MAX;
int16_t x783 = INT16_MAX;
int8_t x784 = -11;
int16_t x788 = INT16_MAX;
int16_t x798 = INT16_MAX;
static int32_t x803 = -1;
volatile int32_t x806 = INT32_MIN;
int64_t x819 = -1LL;
static int64_t t181 = 4332533127849LL;
int32_t x821 = INT32_MIN;
int64_t x832 = -116744272463LL;
static volatile uint8_t x835 = 0U;
volatile uint64_t t185 = 64666461778273LLU;
uint16_t x844 = UINT16_MAX;
volatile int8_t x847 = INT8_MIN;
uint8_t x853 = 8U;
int64_t x855 = 253844640973013529LL;
uint8_t x856 = 0U;
uint64_t x861 = 572283292682155446LLU;
uint64_t x862 = UINT64_MAX;
uint16_t x864 = UINT16_MAX;
volatile int8_t x866 = INT8_MIN;
static int64_t t193 = -8LL;
int64_t x873 = -31LL;
int8_t x876 = INT8_MAX;
int8_t x883 = -1;
volatile int32_t x884 = -11901815;
static int64_t t197 = -267LL;
uint8_t x889 = 1U;
int8_t x891 = -33;
static volatile int16_t x896 = -1;


void f0(void) {
    	uint8_t x1 = 21U;
	int16_t x2 = INT16_MAX;
	int8_t x3 = -8;
	static int64_t t0 = 64854LL;

    t0 = (x1^(x2-(x3|x4)));

    if (t0 != 32787LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int64_t x5 = INT64_MAX;
	static int16_t x8 = INT16_MIN;
	volatile int64_t t1 = 5222572631193020LL;

    t1 = (x5^(x6-(x7|x8)));

    if (t1 != -5551540643589238820LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static int64_t x14 = INT64_MIN;
	volatile int64_t x15 = -1LL;
	int64_t t2 = 628LL;

    t2 = (x13^(x14-(x15|x16)));

    if (t2 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x17 = -21602752;
	uint32_t x18 = UINT32_MAX;
	int64_t t3 = -97383LL;

    t3 = (x17^(x18-(x19|x20)));

    if (t3 != -4316564928LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x21 = INT32_MIN;
	int8_t x22 = -1;
	int64_t x23 = -2LL;
	volatile int16_t x24 = 1;
	volatile int64_t t4 = 4100435LL;

    t4 = (x21^(x22-(x23|x24)));

    if (t4 != -2147483648LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x25 = 38;
	volatile uint16_t x26 = UINT16_MAX;
	static int32_t x27 = -1;
	volatile int64_t t5 = 514299858162342LL;

    t5 = (x25^(x26-(x27|x28)));

    if (t5 != 65574LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x29 = 13U;
	uint8_t x30 = UINT8_MAX;
	int64_t x32 = INT64_MAX;
	static int64_t t6 = -24764722378LL;

    t6 = (x29^(x30-(x31|x32)));

    if (t6 != -9223372036854775539LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x33 = -1;
	uint64_t x34 = UINT64_MAX;
	uint64_t x35 = UINT64_MAX;
	static volatile uint64_t t7 = UINT64_MAX;

    t7 = (x33^(x34-(x35|x36)));

    if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x37 = 4;
	uint64_t x38 = 1342670914LLU;
	uint16_t x40 = UINT16_MAX;

    t8 = (x37^(x38-(x39|x40)));

    if (t8 != 18446744072904738887LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x45 = INT8_MIN;
	static int16_t x46 = -1;
	volatile uint32_t x47 = UINT32_MAX;
	volatile uint32_t x48 = UINT32_MAX;
	static volatile uint32_t t9 = 1558329545U;

    t9 = (x45^(x46-(x47|x48)));

    if (t9 != 4294967168U) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x49 = INT64_MAX;
	volatile uint8_t x50 = 37U;
	uint8_t x51 = UINT8_MAX;
	uint64_t x52 = 351106782LLU;
	static uint64_t t10 = 523392234049LLU;

    t10 = (x49^(x50-(x51|x52)));

    if (t10 != 9223372037205882585LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x53 = -647;
	uint8_t x54 = 122U;
	volatile int8_t x55 = INT8_MIN;
	volatile uint32_t x56 = 12184U;
	uint32_t t11 = 0U;

    t11 = (x53^(x54-(x55|x56)));

    if (t11 != 4294966683U) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x59 = INT8_MIN;
	int8_t x60 = INT8_MIN;
	int64_t t12 = -877752059LL;

    t12 = (x57^(x58-(x59|x60)));

    if (t12 != -4066707LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x62 = INT8_MIN;
	int32_t x63 = INT32_MIN;
	int16_t x64 = -1;
	int32_t t13 = 327594240;

    t13 = (x61^(x62-(x63|x64)));

    if (t13 != 126) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x67 = 0;
	static volatile uint32_t x68 = 18717396U;
	uint32_t t14 = 10086U;

    t14 = (x65^(x66-(x67|x68)));

    if (t14 != 2166201014U) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x69 = -1LL;
	int64_t x70 = -1LL;
	volatile int8_t x71 = INT8_MIN;
	volatile int32_t x72 = INT32_MIN;
	int64_t t15 = -742LL;

    t15 = (x69^(x70-(x71|x72)));

    if (t15 != -128LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile uint8_t x73 = 19U;
	volatile int32_t x75 = -1;
	uint32_t x76 = 1905217328U;
	static uint32_t t16 = 3880043U;

    t16 = (x73^(x74-(x75|x76)));

    if (t16 != 83U) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint8_t x77 = UINT8_MAX;
	static volatile int64_t x78 = -1LL;
	volatile uint16_t x79 = 2015U;
	static int16_t x80 = 1;

    t17 = (x77^(x78-(x79|x80)));

    if (t17 != -1825LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x81 = INT32_MAX;
	static int32_t x82 = 3137;
	static int8_t x84 = -1;

    t18 = (x81^(x82-(x83|x84)));

    if (t18 != 2147480509LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x85 = 106U;
	int8_t x86 = INT8_MIN;
	static int32_t x87 = -32881350;
	int32_t t19 = -210;

    t19 = (x85^(x86-(x87|x88)));

    if (t19 != 32881259) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x91 = 1U;
	uint64_t x92 = UINT64_MAX;
	volatile uint64_t t20 = 126858442LLU;

    t20 = (x89^(x90-(x91|x92)));

    if (t20 != 32766LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x95 = INT16_MAX;
	uint32_t x96 = 193U;
	static volatile uint32_t t21 = 26U;

    t21 = (x93^(x94-(x95|x96)));

    if (t21 != 32766U) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x97 = INT64_MAX;
	int16_t x98 = -1;
	uint32_t x99 = 792U;
	uint32_t x100 = 887U;
	int64_t t22 = 3016678008039LL;

    t22 = (x97^(x98-(x99|x100)));

    if (t22 != 9223372032559809407LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x102 = 3810424516137LL;
	uint16_t x103 = 1U;
	uint16_t x104 = UINT16_MAX;
	int64_t t23 = 0LL;

    t23 = (x101^(x102-(x103|x104)));

    if (t23 != 3810424450602LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x105 = INT64_MIN;
	uint64_t x106 = 277012939504119157LLU;
	int64_t x107 = -4686428694362LL;
	volatile int16_t x108 = INT16_MIN;
	volatile uint64_t t24 = 206919579523199LLU;

    t24 = (x105^(x106-(x107|x108)));

    if (t24 != 9500384976358921423LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x109 = INT16_MAX;
	int16_t x110 = -1;
	uint64_t x111 = 13LLU;
	static int32_t x112 = INT32_MAX;
	uint64_t t25 = 321597079657755LLU;

    t25 = (x109^(x110-(x111|x112)));

    if (t25 != 18446744071562100735LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x114 = -1;
	int64_t x116 = 526259078274785637LL;
	volatile int64_t t26 = -24LL;

    t26 = (x113^(x114-(x115|x116)));

    if (t26 != 4294967295LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x117 = -1;
	uint8_t x118 = UINT8_MAX;
	volatile int64_t x120 = -4724727153LL;
	volatile int64_t t27 = 9LL;

    t27 = (x117^(x118-(x119|x120)));

    if (t27 != -4724727313LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x121 = -1LL;
	static uint32_t x122 = 1989U;
	static int8_t x123 = -6;
	static volatile int32_t x124 = -398232944;
	int64_t t28 = 5011875854448LL;

    t28 = (x121^(x122-(x123|x124)));

    if (t28 != -1996LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x133 = 20U;
	uint32_t x134 = UINT32_MAX;
	int32_t x135 = INT32_MIN;
	int32_t x136 = 136;
	volatile uint32_t t29 = 956192U;

    t29 = (x133^(x134-(x135|x136)));

    if (t29 != 2147483491U) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x137 = 27LL;
	int8_t x138 = 0;
	int64_t x139 = INT64_MAX;
	static uint32_t x140 = UINT32_MAX;
	volatile int64_t t30 = -242014023810LL;

    t30 = (x137^(x138-(x139|x140)));

    if (t30 != -9223372036854775782LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x147 = 1166820243U;
	uint8_t x148 = UINT8_MAX;
	uint32_t t31 = 233064U;

    t31 = (x145^(x146-(x147|x148)));

    if (t31 != 3314303999U) { NG(); } else { ; }
	
}

void f32(void) {
    	static int32_t x149 = INT32_MIN;
	int64_t x151 = INT64_MAX;
	int64_t x152 = -1LL;
	volatile int64_t t32 = -3380439LL;

    t32 = (x149^(x150-(x151|x152)));

    if (t32 != 2147483602LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x156 = INT8_MIN;
	volatile uint32_t t33 = 30430908U;

    t33 = (x153^(x154-(x155|x156)));

    if (t33 != 4294843941U) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x158 = -1;
	int8_t x160 = -1;

    t34 = (x157^(x158-(x159|x160)));

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x162 = 56527484LLU;
	static volatile uint16_t x163 = 2879U;
	uint64_t t35 = 33598LLU;

    t35 = (x161^(x162-(x163|x164)));

    if (t35 != 7641188936555LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile uint8_t x169 = 21U;
	uint16_t x170 = 19U;
	uint32_t x171 = 449306U;
	int8_t x172 = -1;
	volatile uint32_t t36 = 3715U;

    t36 = (x169^(x170-(x171|x172)));

    if (t36 != 1U) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x173 = INT64_MIN;
	int32_t x174 = -23;
	static int64_t x175 = -1LL;
	int32_t x176 = -1;
	static volatile int64_t t37 = -349382627365692LL;

    t37 = (x173^(x174-(x175|x176)));

    if (t37 != 9223372036854775786LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x179 = 1954U;

    t38 = (x177^(x178-(x179|x180)));

    if (t38 != -2116803741LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x181 = UINT32_MAX;
	volatile int64_t x182 = INT64_MIN;
	uint8_t x183 = 2U;
	volatile int32_t x184 = INT32_MIN;

    t39 = (x181^(x182-(x183|x184)));

    if (t39 != -9223372034707292159LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x185 = -1;
	volatile int32_t t40 = 3262;

    t40 = (x185^(x186-(x187|x188)));

    if (t40 != 2147483519) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x190 = INT32_MAX;
	uint32_t x191 = 8071113U;
	int32_t x192 = -14;
	volatile uint32_t t41 = 36167U;

    t41 = (x189^(x190-(x191|x192)));

    if (t41 != 2147483899U) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x193 = INT8_MIN;
	int32_t x194 = INT32_MIN;
	uint64_t x195 = 1365025837207LLU;
	volatile int8_t x196 = INT8_MIN;
	static volatile uint64_t t42 = 743718962101347LLU;

    t42 = (x193^(x194-(x195|x196)));

    if (t42 != 2147483625LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x201 = 47931679136LLU;
	uint32_t x202 = UINT32_MAX;
	int16_t x203 = -37;
	uint64_t t43 = 7LLU;

    t43 = (x201^(x202-(x203|x204)));

    if (t43 != 43636711812LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x205 = INT32_MIN;
	uint32_t x208 = 14601082U;

    t44 = (x205^(x206-(x207|x208)));

    if (t44 != 2132882646U) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x213 = INT8_MIN;
	volatile int32_t x214 = -1;
	int64_t x215 = 25LL;
	int16_t x216 = INT16_MAX;
	int64_t t45 = -405LL;

    t45 = (x213^(x214-(x215|x216)));

    if (t45 != 32640LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x217 = INT64_MAX;
	int32_t x218 = INT32_MAX;
	static int64_t x219 = -1LL;
	volatile int64_t x220 = INT64_MIN;
	int64_t t46 = -1461655822772810LL;

    t46 = (x217^(x218-(x219|x220)));

    if (t46 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x221 = INT16_MIN;
	int32_t x222 = -419901;
	static uint64_t x223 = UINT64_MAX;
	uint16_t x224 = UINT16_MAX;
	static volatile uint64_t t47 = 558277003148708LLU;

    t47 = (x221^(x222-(x223|x224)));

    if (t47 != 399300LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint8_t x225 = UINT8_MAX;
	volatile uint32_t x226 = 179737U;
	int32_t x227 = INT32_MIN;
	volatile int8_t x228 = -1;

    t48 = (x225^(x226-(x227|x228)));

    if (t48 != 179941U) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x229 = INT32_MIN;
	volatile int16_t x230 = -112;
	volatile int64_t x231 = INT64_MAX;
	uint64_t x232 = 3699179245106LLU;
	uint64_t t49 = 13661196277987LLU;

    t49 = (x229^(x230-(x231|x232)));

    if (t49 != 9223372039002259345LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint16_t x233 = 1U;
	int8_t x234 = -1;
	volatile int16_t x235 = 4723;
	uint64_t x236 = UINT64_MAX;
	volatile uint64_t t50 = 3926746LLU;

    t50 = (x233^(x234-(x235|x236)));

    if (t50 != 1LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x237 = UINT8_MAX;
	uint32_t x239 = UINT32_MAX;
	int8_t x240 = INT8_MIN;
	uint32_t t51 = 2436U;

    t51 = (x237^(x238-(x239|x240)));

    if (t51 != 2147483902U) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x241 = 0;
	int8_t x242 = INT8_MIN;
	int8_t x243 = INT8_MIN;
	int64_t x244 = INT64_MIN;

    t52 = (x241^(x242-(x243|x244)));

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static int32_t x245 = INT32_MAX;
	uint32_t x247 = 2457U;
	int8_t x248 = INT8_MIN;
	volatile uint32_t t53 = 490U;

    t53 = (x245^(x246-(x247|x248)));

    if (t53 != 2147418009U) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint8_t x249 = UINT8_MAX;
	int64_t x250 = -1LL;
	int32_t x251 = INT32_MIN;
	int64_t x252 = INT64_MIN;

    t54 = (x249^(x250-(x251|x252)));

    if (t54 != 2147483392LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x253 = INT8_MIN;
	volatile uint32_t x254 = 137312072U;
	uint32_t x256 = 55U;
	uint32_t t55 = 5039U;

    t55 = (x253^(x254-(x255|x256)));

    if (t55 != 4157622417U) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x257 = INT64_MIN;
	int64_t x259 = -271998015647LL;
	static volatile int64_t t56 = -67882492482LL;

    t56 = (x257^(x258-(x259|x260)));

    if (t56 != -9223371766271842724LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x261 = -37882;
	static uint64_t x262 = 44LLU;
	int8_t x263 = INT8_MAX;
	uint32_t x264 = UINT32_MAX;
	static volatile uint64_t t57 = 1389634407LLU;

    t57 = (x261^(x262-(x263|x264)));

    if (t57 != 4294929451LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint32_t x265 = 129077U;
	int16_t x266 = -1;
	static int32_t x267 = INT32_MIN;
	uint16_t x268 = UINT16_MAX;
	uint32_t t58 = 465U;

    t58 = (x265^(x266-(x267|x268)));

    if (t58 != 2147416117U) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x269 = INT8_MIN;
	static uint32_t x272 = UINT32_MAX;
	volatile uint32_t t59 = 67U;

    t59 = (x269^(x270-(x271|x272)));

    if (t59 != 1U) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint32_t x273 = 383U;
	int8_t x274 = INT8_MAX;
	static uint32_t x275 = 26700215U;
	int32_t x276 = INT32_MIN;
	uint32_t t60 = 3U;

    t60 = (x273^(x274-(x275|x276)));

    if (t60 != 2120783799U) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x278 = -1;
	static volatile uint16_t x279 = 36U;
	static int8_t x280 = 8;
	volatile int32_t t61 = 50728;

    t61 = (x277^(x278-(x279|x280)));

    if (t61 != 44) { NG(); } else { ; }
	
}

void f62(void) {
    	static int8_t x281 = 38;
	int32_t x282 = -1;
	uint64_t t62 = 92649298634LLU;

    t62 = (x281^(x282-(x283|x284)));

    if (t62 != 86LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x285 = -9024;
	int64_t x286 = 1LL;
	uint64_t x287 = UINT64_MAX;
	uint32_t x288 = 153U;
	volatile uint64_t t63 = 181716061736LLU;

    t63 = (x285^(x286-(x287|x288)));

    if (t63 != 18446744073709542594LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x289 = 0;
	int16_t x290 = -2;
	static volatile int16_t x292 = -1;

    t64 = (x289^(x290-(x291|x292)));

    if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x293 = INT32_MIN;
	uint8_t x294 = 24U;
	int8_t x295 = INT8_MIN;
	uint64_t x296 = 2410734876LLU;
	volatile uint64_t t65 = 2700891LLU;

    t65 = (x293^(x294-(x295|x296)));

    if (t65 != 18446744071562068092LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x301 = INT8_MIN;
	volatile int16_t x302 = INT16_MIN;
	int32_t x303 = -1;
	int64_t x304 = INT64_MAX;
	static int64_t t66 = 16606575LL;

    t66 = (x301^(x302-(x303|x304)));

    if (t66 != 32641LL) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint16_t x306 = 962U;
	int64_t x307 = 879702523345LL;
	static uint32_t x308 = 256166207U;
	int64_t t67 = -3013522337352LL;

    t67 = (x305^(x306-(x307|x308)));

    if (t67 != -876720686532LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x309 = INT16_MIN;
	int64_t x310 = -1LL;
	uint32_t x311 = 162677U;
	uint32_t x312 = 114618U;

    t68 = (x309^(x310-(x311|x312)));

    if (t68 != 229376LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x313 = -1;
	int16_t x315 = INT16_MIN;
	int32_t t69 = -373829783;

    t69 = (x313^(x314-(x315|x316)));

    if (t69 != -32768) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x317 = UINT32_MAX;
	static int8_t x318 = INT8_MIN;
	uint8_t x320 = 76U;
	volatile uint32_t t70 = 72U;

    t70 = (x317^(x318-(x319|x320)));

    if (t70 != 382U) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x321 = 4U;
	volatile int16_t x322 = INT16_MIN;
	int8_t x323 = INT8_MIN;
	int32_t t71 = -2;

    t71 = (x321^(x322-(x323|x324)));

    if (t71 != -32645) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x325 = -36270001LL;
	uint64_t x326 = 7409936650074267LLU;
	static int64_t x327 = INT64_MAX;
	int8_t x328 = INT8_MIN;
	uint64_t t72 = 1672949LLU;

    t72 = (x325^(x326-(x327|x328)));

    if (t72 != 18439334137023391955LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint8_t x329 = UINT8_MAX;
	uint16_t x330 = 161U;
	int64_t x331 = -15629725344LL;
	int64_t x332 = -18410172LL;
	int64_t t73 = 376813291895270323LL;

    t73 = (x329^(x330-(x331|x332)));

    if (t73 != 18394050LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x333 = INT64_MAX;
	uint16_t x334 = UINT16_MAX;
	int16_t x335 = 720;
	int64_t t74 = -914116LL;

    t74 = (x333^(x334-(x335|x336)));

    if (t74 != 9223372036854710271LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x337 = -2917152158LL;
	static int32_t x339 = -1;
	volatile int32_t x340 = -1;

    t75 = (x337^(x338-(x339|x340)));

    if (t75 != 2917157475LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x341 = 3277U;
	int64_t x344 = 77LL;
	static uint64_t t76 = 11689964LLU;

    t76 = (x341^(x342-(x343|x344)));

    if (t76 != 9223292086083704015LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x345 = INT16_MAX;
	uint16_t x347 = 61U;
	uint32_t x348 = UINT32_MAX;
	volatile int64_t t77 = 195LL;

    t77 = (x345^(x346-(x347|x348)));

    if (t77 != -4298980355LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x349 = INT16_MAX;
	int16_t x350 = -1;
	static int16_t x351 = INT16_MAX;
	static int16_t x352 = INT16_MIN;
	volatile int32_t t78 = 78944723;

    t78 = (x349^(x350-(x351|x352)));

    if (t78 != 32767) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint16_t x353 = UINT16_MAX;
	int32_t x354 = INT32_MIN;
	int32_t x355 = -4633;
	int32_t t79 = -5427;

    t79 = (x353^(x354-(x355|x356)));

    if (t79 != -2147418138) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x357 = -1;
	volatile int64_t x358 = -9877915068182LL;
	int32_t x359 = INT32_MAX;
	static int64_t x360 = 245242961LL;
	static volatile int64_t t80 = -55498053LL;

    t80 = (x357^(x358-(x359|x360)));

    if (t80 != 9880062551828LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x361 = UINT64_MAX;
	int16_t x362 = -11;
	static int8_t x363 = 17;
	uint16_t x364 = UINT16_MAX;

    t81 = (x361^(x362-(x363|x364)));

    if (t81 != 65545LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x365 = INT64_MIN;
	volatile int16_t x366 = 61;
	int8_t x367 = -1;
	uint32_t x368 = UINT32_MAX;
	volatile int64_t t82 = -251LL;

    t82 = (x365^(x366-(x367|x368)));

    if (t82 != -9223372036854775746LL) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint8_t x369 = UINT8_MAX;
	int32_t x371 = 19897;
	static int32_t t83 = -12071798;

    t83 = (x369^(x370-(x371|x372)));

    if (t83 != -65283) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x373 = INT16_MIN;
	volatile uint64_t x374 = 433518021424527192LLU;
	volatile uint64_t x375 = 45LLU;
	volatile uint64_t t84 = 1054LLU;

    t84 = (x373^(x374-(x375|x376)));

    if (t84 != 18013226050137536299LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x377 = -186;
	uint64_t x378 = UINT64_MAX;
	static uint64_t x379 = UINT64_MAX;
	int64_t x380 = 68314784691093LL;
	uint64_t t85 = 3442677LLU;

    t85 = (x377^(x378-(x379|x380)));

    if (t85 != 18446744073709551430LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x381 = -1;
	static uint8_t x382 = 0U;
	uint64_t x384 = 1983732447LLU;
	uint64_t t86 = 1869LLU;

    t86 = (x381^(x382-(x383|x384)));

    if (t86 != 1983732478LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x390 = UINT64_MAX;
	static int32_t x392 = -1;
	uint64_t t87 = 141807166976433LLU;

    t87 = (x389^(x390-(x391|x392)));

    if (t87 != 28LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x393 = -1LL;
	static volatile int32_t x395 = 60216;
	uint32_t x396 = 47832U;
	int64_t t88 = -30555537122014LL;

    t88 = (x393^(x394-(x395|x396)));

    if (t88 != -9223372036854711304LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x397 = 15396U;
	int8_t x398 = INT8_MIN;
	static int8_t x399 = -12;
	int16_t x400 = INT16_MIN;
	volatile int32_t t89 = -17412214;

    t89 = (x397^(x398-(x399|x400)));

    if (t89 != -15448) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x401 = INT32_MIN;
	int64_t x402 = -1LL;
	static int64_t x403 = -1LL;
	uint16_t x404 = UINT16_MAX;
	volatile int64_t t90 = 22900LL;

    t90 = (x401^(x402-(x403|x404)));

    if (t90 != -2147483648LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x405 = INT8_MIN;
	uint32_t x407 = UINT32_MAX;
	uint8_t x408 = UINT8_MAX;
	volatile uint32_t t91 = 855873204U;

    t91 = (x405^(x406-(x407|x408)));

    if (t91 != 4294963341U) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x409 = -1;
	int32_t x410 = -1;
	static volatile int64_t x412 = -9574623716563LL;

    t92 = (x409^(x410-(x411|x412)));

    if (t92 != -9427LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x413 = UINT8_MAX;
	uint16_t x415 = UINT16_MAX;
	int8_t x416 = INT8_MAX;
	static int32_t t93 = -22222;

    t93 = (x413^(x414-(x415|x416)));

    if (t93 != -65281) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x417 = -1;
	int16_t x418 = -1;
	uint8_t x419 = 1U;
	int32_t x420 = INT32_MAX;
	volatile int32_t t94 = INT32_MAX;

    t94 = (x417^(x418-(x419|x420)));

    if (t94 != INT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x425 = INT64_MAX;
	volatile int8_t x426 = 0;
	int8_t x427 = 1;
	volatile uint8_t x428 = 5U;
	static volatile int64_t t95 = 26LL;

    t95 = (x425^(x426-(x427|x428)));

    if (t95 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x431 = INT8_MAX;
	volatile int16_t x432 = INT16_MIN;
	volatile int32_t t96 = 26;

    t96 = (x429^(x430-(x431|x432)));

    if (t96 != 850918450) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x437 = -1;
	int64_t x438 = INT64_MAX;
	int32_t x439 = INT32_MIN;
	volatile uint32_t x440 = 586840122U;
	volatile int64_t t97 = 32546LL;

    t97 = (x437^(x438-(x439|x440)));

    if (t97 != -9223372034120452038LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x441 = -1;
	uint32_t x442 = 975U;
	uint64_t x443 = UINT64_MAX;
	static volatile int8_t x444 = INT8_MIN;
	volatile uint64_t t98 = 992074986298LLU;

    t98 = (x441^(x442-(x443|x444)));

    if (t98 != 18446744073709550639LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x445 = INT32_MIN;
	int64_t x446 = 1002938519309795752LL;
	volatile int8_t x447 = INT8_MIN;
	static int64_t x448 = -1LL;

    t99 = (x445^(x446-(x447|x448)));

    if (t99 != -1002938517195308631LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint32_t x449 = UINT32_MAX;
	int64_t x450 = -1LL;
	int32_t x451 = -1;
	static volatile int64_t t100 = -3LL;

    t100 = (x449^(x450-(x451|x452)));

    if (t100 != -1LL) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint16_t x453 = UINT16_MAX;
	int64_t x454 = INT64_MIN;
	volatile int64_t x455 = -1LL;
	int16_t x456 = -6653;
	int64_t t101 = -469773694640847LL;

    t101 = (x453^(x454-(x455|x456)));

    if (t101 != -9223372036854710274LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x457 = -1LL;
	int16_t x459 = 0;
	uint64_t x460 = 60466453520899LLU;
	volatile uint64_t t102 = 903949903LLU;

    t102 = (x457^(x458-(x459|x460)));

    if (t102 != 60466453520643LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int32_t x462 = INT32_MIN;
	int8_t x463 = INT8_MIN;

    t103 = (x461^(x462-(x463|x464)));

    if (t103 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static int64_t x465 = INT64_MIN;
	int8_t x466 = -1;
	int64_t x467 = -1LL;
	volatile int64_t x468 = INT64_MAX;
	int64_t t104 = INT64_MIN;

    t104 = (x465^(x466-(x467|x468)));

    if (t104 != INT64_MIN) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x469 = INT32_MIN;
	int16_t x470 = 1;
	uint32_t x471 = 68244063U;
	int8_t x472 = INT8_MAX;

    t105 = (x469^(x470-(x471|x472)));

    if (t105 != 2079239554U) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile uint16_t x473 = 23U;
	int32_t x474 = INT32_MIN;
	static volatile int8_t x475 = INT8_MIN;
	volatile int8_t x476 = -23;
	volatile int32_t t106 = INT32_MIN;

    t106 = (x473^(x474-(x475|x476)));

    if (t106 != INT32_MIN) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x478 = 11674375U;
	int32_t x480 = 25105516;
	volatile uint64_t t107 = 7659161604156840LLU;

    t107 = (x477^(x478-(x479|x480)));

    if (t107 != 18246371101228828262LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int8_t x481 = 0;
	int16_t x482 = INT16_MIN;
	uint64_t x483 = 884225861291032142LLU;
	int8_t x484 = 53;
	volatile uint64_t t108 = 164075202LLU;

    t108 = (x481^(x482-(x483|x484)));

    if (t108 != 17562518212418486657LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x485 = 9;
	static int8_t x486 = INT8_MIN;
	volatile uint8_t x487 = UINT8_MAX;
	int32_t x488 = INT32_MIN;

    t109 = (x485^(x486-(x487|x488)));

    if (t109 != 2147483272) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint64_t x490 = 2047802599732912689LLU;
	int8_t x491 = INT8_MIN;
	uint64_t t110 = 105232860519481LLU;

    t110 = (x489^(x490-(x491|x492)));

    if (t110 != 16398941473979401973LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x493 = -1;
	int8_t x494 = INT8_MAX;
	static volatile int16_t x495 = INT16_MIN;
	volatile int8_t x496 = INT8_MAX;
	int32_t t111 = -351173;

    t111 = (x493^(x494-(x495|x496)));

    if (t111 != -32769) { NG(); } else { ; }
	
}

void f112(void) {
    	static int8_t x497 = INT8_MAX;
	volatile int8_t x498 = INT8_MAX;
	static uint8_t x499 = UINT8_MAX;
	volatile int64_t t112 = -59327001328987037LL;

    t112 = (x497^(x498-(x499|x500)));

    if (t112 != 1205717759LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x501 = -1LL;
	volatile uint16_t x502 = 101U;
	int16_t x503 = -1;
	uint64_t x504 = 30863448455557LLU;

    t113 = (x501^(x502-(x503|x504)));

    if (t113 != 18446744073709551513LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x509 = 414090954861LLU;
	volatile int8_t x511 = INT8_MIN;
	uint64_t x512 = UINT64_MAX;
	volatile uint64_t t114 = 334008751LLU;

    t114 = (x509^(x510-(x511|x512)));

    if (t114 != 414090955810LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x513 = INT32_MIN;
	int64_t x515 = 25234631LL;
	uint16_t x516 = UINT16_MAX;

    t115 = (x513^(x514-(x515|x516)));

    if (t115 != 2122252288LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x518 = -1LL;
	volatile int8_t x519 = -1;
	uint16_t x520 = 12676U;
	volatile int64_t t116 = 70529LL;

    t116 = (x517^(x518-(x519|x520)));

    if (t116 != -1LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x525 = 62;
	int8_t x526 = INT8_MAX;
	int64_t x527 = 16118777552488LL;
	volatile int8_t x528 = INT8_MAX;

    t117 = (x525^(x526-(x527|x528)));

    if (t117 != -16118777552322LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x535 = INT16_MIN;
	uint32_t x536 = UINT32_MAX;
	static volatile int64_t t118 = -1766706LL;

    t118 = (x533^(x534-(x535|x536)));

    if (t118 != -9223372036854775343LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x537 = INT8_MAX;
	volatile int32_t x538 = -1;
	int64_t x540 = INT64_MAX;
	volatile int64_t t119 = 2066380720LL;

    t119 = (x537^(x538-(x539|x540)));

    if (t119 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x541 = -1;
	static int8_t x542 = -1;
	uint32_t x543 = 667383U;
	int32_t x544 = INT32_MAX;
	volatile uint32_t t120 = 15589U;

    t120 = (x541^(x542-(x543|x544)));

    if (t120 != 2147483647U) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x545 = INT64_MIN;
	int16_t x546 = 12;
	uint16_t x548 = UINT16_MAX;
	static volatile int64_t t121 = 647553685279907LL;

    t121 = (x545^(x546-(x547|x548)));

    if (t121 != -9223372036854775795LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint64_t x550 = 1995354896732086209LLU;
	int64_t x551 = INT64_MAX;
	static volatile uint16_t x552 = UINT16_MAX;
	uint64_t t122 = 101907829086582793LLU;

    t122 = (x549^(x550-(x551|x552)));

    if (t122 != 7228017140122689591LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x558 = UINT16_MAX;
	int8_t x559 = -1;
	int64_t x560 = -1LL;
	volatile int64_t t123 = -17355178714810651LL;

    t123 = (x557^(x558-(x559|x560)));

    if (t123 != 65545LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x562 = -1016LL;
	uint16_t x563 = 14U;
	int64_t x564 = INT64_MIN;
	volatile int64_t t124 = 280230871772LL;

    t124 = (x561^(x562-(x563|x564)));

    if (t124 != -9223372036854774779LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x565 = 132LL;
	static volatile uint64_t x566 = 24892918353LLU;
	static volatile int16_t x567 = INT16_MIN;
	volatile int16_t x568 = INT16_MAX;
	volatile uint64_t t125 = 435240648159131848LLU;

    t125 = (x565^(x566-(x567|x568)));

    if (t125 != 24892918486LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x569 = -8430604494LL;
	static uint16_t x570 = UINT16_MAX;
	int16_t x571 = INT16_MIN;
	int64_t x572 = INT64_MIN;

    t126 = (x569^(x570-(x571|x572)));

    if (t126 != -8430661427LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x574 = 5664;
	uint8_t x575 = 12U;
	uint64_t x576 = UINT64_MAX;
	uint64_t t127 = 11987490429265480LLU;

    t127 = (x573^(x574-(x575|x576)));

    if (t127 != 9223372036854781473LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x577 = UINT32_MAX;
	int16_t x578 = INT16_MIN;
	static uint16_t x579 = 589U;
	int16_t x580 = -1;
	volatile uint32_t t128 = 128U;

    t128 = (x577^(x578-(x579|x580)));

    if (t128 != 32766U) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x585 = INT16_MAX;
	volatile int64_t x586 = -1LL;
	int64_t x587 = INT64_MIN;
	int8_t x588 = INT8_MIN;
	static int64_t t129 = 12283636041979LL;

    t129 = (x585^(x586-(x587|x588)));

    if (t129 != 32640LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x589 = INT64_MIN;
	static int64_t x591 = INT64_MAX;
	int8_t x592 = INT8_MIN;
	static volatile int64_t t130 = -101742235LL;

    t130 = (x589^(x590-(x591|x592)));

    if (t130 != 9223372036854775766LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x593 = UINT16_MAX;
	uint16_t x594 = 579U;
	static int8_t x595 = -1;
	uint8_t x596 = UINT8_MAX;
	int32_t t131 = -11388885;

    t131 = (x593^(x594-(x595|x596)));

    if (t131 != 64955) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint32_t x598 = 70091U;
	volatile int32_t x599 = INT32_MAX;
	volatile int8_t x600 = INT8_MAX;

    t132 = (x597^(x598-(x599|x600)));

    if (t132 != 2147413580U) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x601 = UINT16_MAX;
	uint64_t x602 = 29283799525422LLU;
	int32_t x603 = -1;
	uint8_t x604 = 24U;

    t133 = (x601^(x602-(x603|x604)));

    if (t133 != 29283799472080LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x609 = UINT8_MAX;
	uint8_t x611 = UINT8_MAX;
	uint8_t x612 = 2U;
	int32_t t134 = 0;

    t134 = (x609^(x610-(x611|x612)));

    if (t134 != -7) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x613 = INT16_MIN;
	static volatile int64_t x614 = INT64_MIN;
	int64_t x615 = -1LL;
	uint64_t x616 = 4008LLU;
	static volatile uint64_t t135 = 839309175284481822LLU;

    t135 = (x613^(x614-(x615|x616)));

    if (t135 != 9223372036854743041LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint64_t x617 = 3037006LLU;
	int32_t x618 = INT32_MIN;
	uint32_t x619 = UINT32_MAX;
	int8_t x620 = INT8_MIN;
	volatile uint64_t t136 = 5063LLU;

    t136 = (x617^(x618-(x619|x620)));

    if (t136 != 2150520655LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x621 = 98U;
	volatile int8_t x622 = 17;
	volatile uint16_t x623 = UINT16_MAX;
	uint16_t x624 = UINT16_MAX;
	volatile int32_t t137 = 11;

    t137 = (x621^(x622-(x623|x624)));

    if (t137 != -65424) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x625 = 30;
	volatile int32_t x626 = INT32_MIN;
	volatile uint64_t x627 = 7016859105LLU;
	volatile uint64_t x628 = 2LLU;
	uint64_t t138 = 1176147554201772007LLU;

    t138 = (x625^(x626-(x627|x628)));

    if (t138 != 18446744064545208835LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int16_t x629 = 908;
	int8_t x630 = -1;
	int32_t x631 = INT32_MIN;
	int32_t x632 = INT32_MAX;

    t139 = (x629^(x630-(x631|x632)));

    if (t139 != 908) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x637 = 0;
	int64_t x638 = -47321047395LL;
	int32_t x639 = -37502683;
	int32_t x640 = INT32_MAX;
	volatile int64_t t140 = 1790669820LL;

    t140 = (x637^(x638-(x639|x640)));

    if (t140 != -47321047394LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x642 = 2113U;
	static uint32_t x643 = UINT32_MAX;
	int8_t x644 = INT8_MIN;
	static uint32_t t141 = 0U;

    t141 = (x641^(x642-(x643|x644)));

    if (t141 != 2237U) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint16_t x645 = 10548U;
	volatile int32_t x646 = -1;
	int32_t x647 = INT32_MIN;
	static uint64_t x648 = 7768665597226811006LLU;
	static uint64_t t142 = 722326LLU;

    t142 = (x645^(x646-(x647|x648)));

    if (t142 != 713009333LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x649 = -1;
	int32_t x652 = -29;

    t143 = (x649^(x650-(x651|x652)));

    if (t143 != -4294967309LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x653 = UINT8_MAX;
	uint8_t x654 = 51U;
	uint32_t x655 = 737U;
	int32_t x656 = INT32_MAX;
	volatile uint32_t t144 = 16U;

    t144 = (x653^(x654-(x655|x656)));

    if (t144 != 2147483851U) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x657 = 0;
	static volatile uint32_t x658 = 48656U;
	uint16_t x659 = 1771U;
	volatile uint32_t x660 = 2090761495U;

    t145 = (x657^(x658-(x659|x660)));

    if (t145 != 2204253713U) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x661 = INT8_MIN;
	int16_t x662 = INT16_MIN;
	uint8_t x663 = UINT8_MAX;
	int16_t x664 = 100;

    t146 = (x661^(x662-(x663|x664)));

    if (t146 != 32897) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x666 = INT8_MIN;
	volatile int16_t x667 = -103;
	uint32_t x668 = 531U;
	uint32_t t147 = 1868779U;

    t147 = (x665^(x666-(x667|x668)));

    if (t147 != 4294479270U) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x669 = 10017536009154LLU;
	uint16_t x670 = 47U;
	volatile int16_t x671 = INT16_MIN;
	int64_t x672 = INT64_MAX;

    t148 = (x669^(x670-(x671|x672)));

    if (t148 != 10017536009202LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint16_t x673 = 4655U;
	int8_t x674 = INT8_MAX;
	volatile int16_t x675 = INT16_MIN;
	uint8_t x676 = 53U;
	volatile int32_t t149 = 109;

    t149 = (x673^(x674-(x675|x676)));

    if (t149 != 37477) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x678 = INT8_MIN;
	int64_t x679 = INT64_MIN;
	volatile int64_t t150 = 72007106916LL;

    t150 = (x677^(x678-(x679|x680)));

    if (t150 != 9223372036854775550LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x681 = UINT64_MAX;
	volatile uint32_t x682 = 450266U;
	int8_t x683 = INT8_MIN;
	int16_t x684 = INT16_MAX;
	static uint64_t t151 = 1201837221939LLU;

    t151 = (x681^(x682-(x683|x684)));

    if (t151 != 18446744073709101348LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x685 = 14U;
	int64_t x686 = -6085218586521627LL;
	uint8_t x688 = UINT8_MAX;
	static int64_t t152 = -10LL;

    t152 = (x685^(x686-(x687|x688)));

    if (t152 != -6085219062925848LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x689 = -141636168193603797LL;
	int16_t x690 = -1;
	volatile int8_t x691 = INT8_MIN;
	volatile uint64_t t153 = 24LLU;

    t153 = (x689^(x690-(x691|x692)));

    if (t153 != 18305107905515947784LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x693 = UINT32_MAX;
	int32_t x695 = INT32_MIN;
	int8_t x696 = 4;

    t154 = (x693^(x694-(x695|x696)));

    if (t154 != -9223372034707292157LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x697 = -227225152LL;
	static int8_t x698 = -1;
	static int64_t x699 = -1LL;
	static volatile int64_t t155 = -856803358LL;

    t155 = (x697^(x698-(x699|x700)));

    if (t155 != -227225152LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x702 = 2739;
	int64_t x703 = -1LL;
	static int16_t x704 = INT16_MIN;
	volatile int64_t t156 = -102213054756892LL;

    t156 = (x701^(x702-(x703|x704)));

    if (t156 != -2764LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x705 = 17;
	uint16_t x706 = UINT16_MAX;
	int64_t x707 = 11481356406LL;
	uint16_t x708 = UINT16_MAX;
	volatile int64_t t157 = 65332LL;

    t157 = (x705^(x706-(x707|x708)));

    if (t157 != -11481317359LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x709 = 460060;
	int8_t x710 = INT8_MIN;
	static int32_t x711 = 145231;
	uint64_t x712 = 55120LLU;

    t158 = (x709^(x710-(x711|x712)));

    if (t158 != 18446744073709161789LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int16_t x713 = -7514;
	int64_t x714 = -1389199LL;
	static int16_t x715 = -181;
	static uint32_t x716 = 1667U;
	int64_t t159 = 1307LL;

    t159 = (x713^(x714-(x715|x716)));

    if (t159 != 4296355584LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x717 = UINT16_MAX;
	int64_t x719 = INT64_MIN;
	volatile int8_t x720 = INT8_MIN;
	uint64_t t160 = 83947LLU;

    t160 = (x717^(x718-(x719|x720)));

    if (t160 != 62281LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x721 = -1;
	int32_t x722 = INT32_MAX;
	static volatile uint32_t x723 = UINT32_MAX;
	static int8_t x724 = -1;
	static uint32_t t161 = 14568667U;

    t161 = (x721^(x722-(x723|x724)));

    if (t161 != 2147483647U) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x725 = INT16_MIN;
	int8_t x726 = INT8_MAX;
	static uint32_t x727 = 107701U;
	uint32_t t162 = 1304002U;

    t162 = (x725^(x726-(x727|x728)));

    if (t162 != 121480U) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint64_t x729 = 1560220762295810105LLU;
	int32_t x730 = INT32_MIN;
	static volatile uint64_t t163 = 67108947500950LLU;

    t163 = (x729^(x730-(x731|x732)));

    if (t163 != 1560256296173086736LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x733 = 3;
	volatile int32_t x734 = -1;
	int8_t x735 = -1;
	volatile int16_t x736 = INT16_MAX;

    t164 = (x733^(x734-(x735|x736)));

    if (t164 != 3) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x737 = INT8_MIN;
	uint64_t x738 = 27597427789LLU;
	int8_t x739 = INT8_MAX;
	volatile int64_t x740 = INT64_MIN;
	uint64_t t165 = 10703656437349475LLU;

    t165 = (x737^(x738-(x739|x740)));

    if (t165 != 9223372009257348174LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x741 = INT32_MAX;
	volatile int16_t x742 = -15;
	int16_t x743 = -5430;
	static int16_t x744 = INT16_MIN;
	volatile int32_t t166 = 6148742;

    t166 = (x741^(x742-(x743|x744)));

    if (t166 != 2147478232) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x745 = -1;
	static int16_t x746 = -1;
	static int64_t x747 = INT64_MAX;
	int32_t x748 = INT32_MIN;
	volatile int64_t t167 = 99544949456LL;

    t167 = (x745^(x746-(x747|x748)));

    if (t167 != -1LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x750 = -14735790;
	int64_t x751 = INT64_MIN;
	uint32_t x752 = UINT32_MAX;
	volatile int64_t t168 = 1672904295302LL;

    t168 = (x749^(x750-(x751|x752)));

    if (t168 != 9223372030427060652LL) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x758 = 30026315;
	uint64_t x760 = 67118330372827LLU;
	static uint64_t t169 = 8403538974103LLU;

    t169 = (x757^(x758-(x759|x760)));

    if (t169 != 18446744073679525360LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile uint8_t x761 = UINT8_MAX;
	uint64_t x763 = UINT64_MAX;
	int8_t x764 = -1;
	uint64_t t170 = 20763179788705LLU;

    t170 = (x761^(x762-(x763|x764)));

    if (t170 != 242LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x769 = 178210835547094LLU;
	int32_t x770 = 1017;
	int32_t x772 = INT32_MIN;
	volatile uint64_t t171 = 13LLU;

    t171 = (x769^(x770-(x771|x772)));

    if (t171 != 178210922013299LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x774 = 66U;
	static int16_t x775 = INT16_MIN;
	static uint64_t x776 = UINT64_MAX;
	volatile uint64_t t172 = 50142382477028622LLU;

    t172 = (x773^(x774-(x775|x776)));

    if (t172 != 18446744073709551551LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int32_t x778 = -1;
	volatile int8_t x779 = -1;
	int32_t x780 = -436526444;
	volatile int32_t t173 = 1205;

    t173 = (x777^(x778-(x779|x780)));

    if (t173 != 255) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t t174 = 5798;

    t174 = (x781^(x782-(x783|x784)));

    if (t174 != -32769) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x785 = 480440129;
	int8_t x786 = INT8_MIN;
	int16_t x787 = INT16_MIN;
	int32_t t175 = 58;

    t175 = (x785^(x786-(x787|x788)));

    if (t175 != -480440128) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x789 = 1;
	int32_t x790 = -3;
	uint8_t x791 = 120U;
	static uint64_t x792 = UINT64_MAX;
	static uint64_t t176 = UINT64_MAX;

    t176 = (x789^(x790-(x791|x792)));

    if (t176 != UINT64_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint32_t x797 = 1376239U;
	int64_t x799 = -12630LL;
	int16_t x800 = -2388;
	volatile int64_t t177 = -1128625LL;

    t177 = (x797^(x798-(x799|x800)));

    if (t177 != 1343166LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x801 = 135403LL;
	uint16_t x802 = UINT16_MAX;
	int16_t x804 = -1255;
	int64_t t178 = 0LL;

    t178 = (x801^(x802-(x803|x804)));

    if (t178 != 200939LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x805 = INT16_MIN;
	uint8_t x807 = 78U;
	volatile int32_t x808 = -58;
	int32_t t179 = 51691397;

    t179 = (x805^(x806-(x807|x808)));

    if (t179 != 2147450930) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x809 = UINT64_MAX;
	volatile uint64_t x810 = 1799LLU;
	int16_t x811 = -13085;
	uint64_t x812 = UINT64_MAX;
	volatile uint64_t t180 = 740LLU;

    t180 = (x809^(x810-(x811|x812)));

    if (t180 != 18446744073709549815LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x817 = -1;
	uint16_t x818 = 1U;
	int32_t x820 = INT32_MIN;

    t181 = (x817^(x818-(x819|x820)));

    if (t181 != -3LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x822 = -1;
	int32_t x823 = -10190897;
	volatile int32_t x824 = INT32_MAX;
	int32_t t182 = INT32_MIN;

    t182 = (x821^(x822-(x823|x824)));

    if (t182 != INT32_MIN) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile uint32_t x829 = 228468390U;
	static volatile uint64_t x830 = 263204084773LLU;
	int8_t x831 = -15;
	uint64_t t183 = 13834422LLU;

    t183 = (x829^(x830-(x831|x832)));

    if (t183 != 263162280594LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x833 = UINT32_MAX;
	static uint32_t x834 = 354469103U;
	volatile uint16_t x836 = 1U;
	uint32_t t184 = 8542301U;

    t184 = (x833^(x834-(x835|x836)));

    if (t184 != 3940498193U) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x837 = -1;
	static uint64_t x838 = 6444LLU;
	int8_t x839 = INT8_MIN;
	volatile int16_t x840 = INT16_MIN;

    t185 = (x837^(x838-(x839|x840)));

    if (t185 != 18446744073709545043LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x841 = -1;
	volatile int64_t x842 = INT64_MIN;
	int64_t x843 = -5014646340LL;
	volatile int64_t t186 = 19681814533LL;

    t186 = (x841^(x842-(x843|x844)));

    if (t186 != 9223372031840157694LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x845 = INT8_MIN;
	volatile int8_t x846 = INT8_MAX;
	static volatile int16_t x848 = -7;
	volatile int32_t t187 = -114701770;

    t187 = (x845^(x846-(x847|x848)));

    if (t187 != -250) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x849 = 11868;
	int64_t x850 = INT64_MIN;
	uint8_t x851 = UINT8_MAX;
	static int32_t x852 = INT32_MIN;
	int64_t t188 = 17532410613LL;

    t188 = (x849^(x850-(x851|x852)));

    if (t188 != -9223372034707304099LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint64_t x854 = UINT64_MAX;
	volatile uint64_t t189 = 2075385610269494534LLU;

    t189 = (x853^(x854-(x855|x856)));

    if (t189 != 18192899432736538094LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x857 = 3U;
	int64_t x858 = -857029LL;
	int64_t x859 = INT64_MIN;
	uint32_t x860 = 64U;
	volatile int64_t t190 = -473041LL;

    t190 = (x857^(x858-(x859|x860)));

    if (t190 != 9223372036853918712LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x863 = INT32_MAX;
	uint64_t t191 = 325407743LLU;

    t191 = (x861^(x862-(x863|x864)));

    if (t191 != 17874460782208873910LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x865 = -54;
	volatile uint16_t x867 = UINT16_MAX;
	int64_t x868 = -1LL;
	int64_t t192 = -1051039107584LL;

    t192 = (x865^(x866-(x867|x868)));

    if (t192 != 75LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x869 = UINT8_MAX;
	int16_t x870 = INT16_MAX;
	int32_t x871 = INT32_MIN;
	int64_t x872 = INT64_MIN;

    t193 = (x869^(x870-(x871|x872)));

    if (t193 != 2147516160LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint32_t x874 = UINT32_MAX;
	uint64_t x875 = 240718513LLU;
	uint64_t t194 = 3737158LLU;

    t194 = (x873^(x874-(x875|x876)));

    if (t194 != 18446744069655302881LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x877 = 27U;
	volatile int64_t x878 = INT64_MIN;
	volatile uint16_t x879 = 80U;
	static int16_t x880 = -1;
	static int64_t t195 = 233686LL;

    t195 = (x877^(x878-(x879|x880)));

    if (t195 != -9223372036854775782LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x881 = -1;
	static volatile int64_t x882 = -1LL;
	int64_t t196 = -3252395210846118LL;

    t196 = (x881^(x882-(x883|x884)));

    if (t196 != -1LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x885 = INT16_MAX;
	int16_t x886 = INT16_MAX;
	int64_t x887 = INT64_MAX;
	int32_t x888 = INT32_MIN;

    t197 = (x885^(x886-(x887|x888)));

    if (t197 != 65535LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x890 = UINT8_MAX;
	static volatile uint16_t x892 = UINT16_MAX;
	volatile int32_t t198 = 731650;

    t198 = (x889^(x890-(x891|x892)));

    if (t198 != 257) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x893 = INT32_MAX;
	int16_t x894 = -7354;
	int8_t x895 = 0;
	int32_t t199 = 20680;

    t199 = (x893^(x894-(x895|x896)));

    if (t199 != -2147476296) { NG(); } else { ; }
	
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

