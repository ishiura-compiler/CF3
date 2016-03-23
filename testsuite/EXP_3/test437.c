
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

int32_t x8 = INT32_MIN;
int64_t x17 = INT64_MIN;
int32_t x18 = INT32_MAX;
static uint64_t x19 = 488632691847462164LLU;
uint32_t x29 = UINT32_MAX;
uint16_t x31 = 35U;
static volatile int16_t x36 = INT16_MIN;
volatile int32_t x37 = INT32_MAX;
uint64_t x48 = 45789171366583LLU;
uint32_t x56 = 28521787U;
uint64_t x72 = 56849540183374LLU;
int32_t x73 = INT32_MIN;
volatile int32_t x74 = 5534;
static int8_t x84 = INT8_MAX;
uint64_t x94 = 2206667077LLU;
uint64_t x95 = 159251966686834LLU;
uint64_t t15 = 3509794412279270LLU;
int8_t x97 = -49;
int64_t x106 = INT64_MAX;
int16_t x107 = 2421;
int64_t t18 = -16852633LL;
static volatile uint32_t t20 = 190U;
int32_t x124 = -1;
static int64_t x129 = INT64_MIN;
uint16_t x169 = 652U;
static volatile uint64_t x172 = 59430375716809899LLU;
volatile uint64_t t29 = 4203048724216152LLU;
int8_t x193 = INT8_MIN;
int32_t x194 = INT32_MAX;
int16_t x196 = INT16_MAX;
int8_t x202 = INT8_MIN;
int64_t x210 = -4LL;
volatile uint64_t t34 = 37LLU;
uint32_t t37 = 26U;
uint16_t x226 = UINT16_MAX;
static uint16_t x231 = 111U;
int32_t t39 = 173264722;
uint16_t x234 = UINT16_MAX;
static volatile uint64_t t40 = 61LLU;
static uint16_t x237 = 0U;
int16_t x241 = INT16_MIN;
volatile int64_t t44 = -85634LL;
volatile uint32_t t45 = 75U;
int8_t x275 = 1;
int16_t x276 = -6244;
volatile uint64_t x280 = 5LLU;
int16_t x285 = 10079;
int16_t x291 = INT16_MAX;
int8_t x292 = -2;
uint32_t x293 = 6429243U;
volatile int64_t x307 = -2056LL;
volatile uint64_t x308 = UINT64_MAX;
static int16_t x315 = 0;
int64_t x316 = INT64_MIN;
static uint64_t t56 = 101535114665LLU;
int64_t x340 = -118982011891334112LL;
volatile int64_t x350 = 1242587599259099488LL;
static uint16_t x351 = 12188U;
static volatile uint32_t t60 = 256284091U;
volatile uint32_t x365 = 209U;
int8_t x379 = -1;
int16_t x380 = INT16_MIN;
volatile uint64_t t64 = 6723532LLU;
uint64_t x407 = UINT64_MAX;
volatile uint64_t t66 = 133383630304237LLU;
static volatile int8_t x411 = 27;
static volatile int16_t x416 = -1;
static uint64_t x420 = 227812629LLU;
uint16_t x421 = 0U;
static int16_t x422 = -1;
int8_t x425 = INT8_MAX;
int16_t x431 = 12;
volatile uint64_t t72 = 6829335693613LLU;
int64_t x439 = -1LL;
int8_t x440 = -1;
volatile int64_t t73 = -368827792LL;
int32_t x444 = INT32_MIN;
uint32_t x449 = UINT32_MAX;
uint64_t t75 = 3310LLU;
int8_t x458 = -1;
uint16_t x459 = 0U;
uint64_t t77 = 5737867250601558LLU;
static uint8_t x464 = 15U;
volatile uint64_t t79 = 43LLU;
volatile int64_t t80 = 49986484120967165LL;
volatile uint8_t x476 = UINT8_MAX;
volatile uint64_t t82 = 3055751LLU;
uint64_t x487 = UINT64_MAX;
uint32_t x492 = UINT32_MAX;
uint8_t x494 = UINT8_MAX;
static int32_t t86 = 87353;
static volatile uint64_t x497 = 6137436LLU;
int16_t x499 = 10;
volatile int8_t x500 = INT8_MIN;
static int32_t x501 = -172;
int32_t t88 = -1934539;
int8_t x507 = INT8_MAX;
int16_t x510 = INT16_MIN;
uint8_t x511 = 9U;
int32_t t90 = -1486929;
int64_t x522 = INT64_MAX;
int16_t x524 = INT16_MIN;
static int64_t x533 = 2297599015416553989LL;
volatile uint64_t x535 = 1325166871426LLU;
int64_t x537 = 3804LL;
int64_t x540 = INT64_MAX;
static int16_t x543 = -1;
int32_t x553 = -1;
int32_t x562 = -1;
int8_t x567 = 1;
volatile int16_t x568 = INT16_MAX;
volatile int32_t t103 = -35;
int8_t x577 = INT8_MAX;
static int32_t x579 = -1;
volatile int32_t t104 = 7;
int32_t x586 = INT32_MIN;
volatile int8_t x588 = -1;
int32_t x589 = -1;
uint8_t x613 = 0U;
volatile int32_t t111 = 33538122;
volatile uint32_t x622 = UINT32_MAX;
static int64_t x624 = -12871LL;
int32_t x625 = INT32_MIN;
uint8_t x627 = 1U;
int8_t x628 = 1;
int32_t t115 = 62933;
volatile int32_t x647 = INT32_MAX;
uint8_t x650 = UINT8_MAX;
volatile int32_t t117 = 169605;
uint32_t x664 = 0U;
volatile uint8_t x706 = UINT8_MAX;
int32_t x709 = INT32_MIN;
uint64_t x712 = UINT64_MAX;
uint16_t x718 = 2172U;
volatile uint64_t t122 = 1959630497062LLU;
int64_t x738 = 64869628979666LL;
static int64_t x740 = -1LL;
uint8_t x741 = UINT8_MAX;
int32_t x765 = -715711834;
static int16_t x766 = INT16_MAX;
volatile int64_t t128 = -3409324047028985944LL;
uint64_t x772 = 1828LLU;
int64_t x780 = -1LL;
static int64_t x802 = INT64_MIN;
int8_t x803 = -1;
uint32_t x809 = 3281U;
volatile int16_t x814 = INT16_MAX;
int64_t x818 = INT64_MIN;
volatile int64_t t135 = 30675833655380936LL;
int64_t x828 = -1LL;
int16_t x829 = -1;
uint32_t x832 = 9046554U;
volatile int64_t x834 = 295938150677253LL;
int64_t t139 = 2257161751098263LL;
int8_t x846 = -43;
int16_t x853 = INT16_MAX;
static uint16_t x863 = 0U;
uint32_t x876 = UINT32_MAX;
int8_t x885 = INT8_MIN;
int64_t x890 = 4148192820770356713LL;
int16_t x897 = -28;
uint8_t x898 = 16U;
uint64_t t148 = 2984LLU;
int32_t t150 = 816994101;
int16_t x914 = 9433;
volatile uint32_t x925 = UINT32_MAX;
uint8_t x935 = 5U;
static volatile int64_t t153 = 600603865342691LL;
int64_t x948 = -1LL;
int64_t t155 = 5630101LL;
volatile uint64_t t156 = 210963900926738LLU;
static volatile uint64_t t157 = 961LLU;
volatile uint64_t t158 = 76LLU;
uint32_t x993 = UINT32_MAX;
int32_t x994 = INT32_MIN;
volatile int16_t x997 = 6;
int64_t x1017 = INT64_MIN;
uint64_t t168 = 7801299535LLU;
int64_t x1030 = 13LL;
static uint64_t x1031 = 31012093077LLU;
int32_t x1032 = 12604;
static int64_t x1037 = 81238968LL;
uint64_t x1052 = 67361472531262LLU;
volatile uint8_t x1056 = UINT8_MAX;
uint16_t x1065 = 4U;
uint16_t x1066 = UINT16_MAX;
int64_t t178 = 1241225978LL;
int32_t x1075 = -1;
int64_t x1090 = INT64_MIN;
uint16_t x1095 = 16U;
uint8_t x1105 = 120U;
uint32_t x1109 = 256598384U;
static int8_t x1110 = -1;
int16_t x1123 = INT16_MAX;
uint32_t t187 = 10621503U;
uint64_t x1125 = 2037738LLU;
volatile uint32_t x1140 = 0U;
uint32_t t190 = 11U;
uint32_t x1154 = 909190U;
volatile uint64_t x1170 = 203467LLU;
uint32_t t194 = 9330U;
volatile int32_t t195 = 50;
static uint64_t x1195 = 90508LLU;
volatile uint64_t t197 = 1057663943706LLU;
uint8_t x1203 = 3U;
volatile int16_t x1206 = 2;


void f0(void) {
    	static int64_t x1 = 669LL;
	uint8_t x2 = 9U;
	volatile uint32_t x3 = 72U;
	uint64_t x4 = UINT64_MAX;
	uint64_t t0 = 1LLU;

    t0 = ((x1/x2)*(x3*x4));

    if (t0 != 18446744073709546288LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x5 = 1;
	volatile int64_t x6 = -1LL;
	uint32_t x7 = UINT32_MAX;
	int64_t t1 = -50835LL;

    t1 = ((x5/x6)*(x7*x8));

    if (t1 != -2147483648LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x9 = INT16_MIN;
	int16_t x10 = INT16_MIN;
	volatile int8_t x11 = -1;
	int16_t x12 = INT16_MIN;
	volatile int32_t t2 = -348;

    t2 = ((x9/x10)*(x11*x12));

    if (t2 != 32768) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x20 = 16U;
	uint64_t t3 = 31765687393476803LLU;

    t3 = ((x17/x18)*(x19*x20));

    if (t3 != 12943648498342976896LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x21 = 0;
	int8_t x22 = INT8_MIN;
	int16_t x23 = -5;
	uint32_t x24 = 10780U;
	volatile uint32_t t4 = 227734109U;

    t4 = ((x21/x22)*(x23*x24));

    if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x30 = 20739U;
	int8_t x32 = 1;
	volatile uint32_t t5 = 227084U;

    t5 = ((x29/x30)*(x31*x32));

    if (t5 != 7248360U) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x33 = INT16_MAX;
	volatile int32_t x34 = 1574068;
	uint16_t x35 = UINT16_MAX;
	int32_t t6 = 84203167;

    t6 = ((x33/x34)*(x35*x36));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x38 = 247U;
	uint64_t x39 = UINT64_MAX;
	int8_t x40 = INT8_MAX;
	volatile uint64_t t7 = 165909418974LLU;

    t7 = ((x37/x38)*(x39*x40));

    if (t7 != 18446744072605379961LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int8_t x45 = INT8_MAX;
	volatile int32_t x46 = INT32_MAX;
	int8_t x47 = -1;
	uint64_t t8 = 6949381611LLU;

    t8 = ((x45/x46)*(x47*x48));

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x49 = INT16_MIN;
	static int32_t x50 = -12500;
	int64_t x51 = 3LL;
	volatile int8_t x52 = INT8_MIN;
	int64_t t9 = -2757119066419141LL;

    t9 = ((x49/x50)*(x51*x52));

    if (t9 != -768LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x53 = -50;
	volatile int8_t x54 = INT8_MIN;
	int64_t x55 = -1LL;
	static volatile int64_t t10 = 381LL;

    t10 = ((x53/x54)*(x55*x56));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x69 = -1LL;
	static volatile int64_t x70 = INT64_MIN;
	int8_t x71 = -1;
	volatile uint64_t t11 = 218652487729LLU;

    t11 = ((x69/x70)*(x71*x72));

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x75 = -65628LL;
	uint8_t x76 = 13U;
	int64_t t12 = 3LL;

    t12 = ((x73/x74)*(x75*x76));

    if (t12 != 331071996528LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x81 = INT16_MIN;
	volatile uint8_t x82 = 26U;
	static volatile int32_t x83 = 5;
	int32_t t13 = -455734;

    t13 = ((x81/x82)*(x83*x84));

    if (t13 != -800100) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x85 = INT8_MIN;
	int64_t x86 = -2641744308LL;
	int16_t x87 = 2;
	int16_t x88 = INT16_MIN;
	static int64_t t14 = 4188501735LL;

    t14 = ((x85/x86)*(x87*x88));

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x93 = -1;
	int8_t x96 = -1;

    t15 = ((x93/x94)*(x95*x96));

    if (t15 != 8272643346129718344LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x98 = 5U;
	int16_t x99 = INT16_MAX;
	uint16_t x100 = 4967U;
	uint32_t t16 = 8263041U;

    t16 = ((x97/x98)*(x99*x100));

    if (t16 != 1775886209U) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint8_t x101 = UINT8_MAX;
	int16_t x102 = INT16_MAX;
	int8_t x103 = -18;
	uint64_t x104 = 38759986LLU;
	static volatile uint64_t t17 = 63633660LLU;

    t17 = ((x101/x102)*(x103*x104));

    if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x105 = 6U;
	uint32_t x108 = UINT32_MAX;

    t18 = ((x105/x106)*(x107*x108));

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x109 = INT32_MAX;
	static int64_t x110 = INT64_MIN;
	uint64_t x111 = 39979530406046042LLU;
	int16_t x112 = INT16_MAX;
	volatile uint64_t t19 = 137527954296028LLU;

    t19 = ((x109/x110)*(x111*x112));

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x117 = -1;
	uint32_t x118 = 20U;
	static volatile int8_t x119 = INT8_MAX;
	uint16_t x120 = 144U;

    t20 = ((x117/x118)*(x119*x120));

    if (t20 != 1717972288U) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x121 = -1;
	int64_t x122 = -1LL;
	uint16_t x123 = 23473U;
	int64_t t21 = -91386962054864489LL;

    t21 = ((x121/x122)*(x123*x124));

    if (t21 != -23473LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x125 = 108;
	volatile int8_t x126 = INT8_MIN;
	int16_t x127 = -1;
	int8_t x128 = INT8_MAX;
	volatile int32_t t22 = -6438;

    t22 = ((x125/x126)*(x127*x128));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x130 = INT16_MAX;
	int16_t x131 = -6386;
	int32_t x132 = -1;
	int64_t t23 = -814199575LL;

    t23 = ((x129/x130)*(x131*x132));

    if (t23 != -1797554058270656400LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x141 = -243;
	uint64_t x142 = UINT64_MAX;
	uint32_t x143 = 7197U;
	static uint8_t x144 = 90U;
	volatile uint64_t t24 = 2866327129934LLU;

    t24 = ((x141/x142)*(x143*x144));

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x145 = UINT16_MAX;
	static int16_t x146 = INT16_MIN;
	int64_t x147 = -1LL;
	int32_t x148 = -186280591;
	int64_t t25 = 558467221408322LL;

    t25 = ((x145/x146)*(x147*x148));

    if (t25 != -186280591LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x149 = UINT64_MAX;
	int32_t x150 = -1;
	volatile int32_t x151 = INT32_MAX;
	int8_t x152 = 1;
	uint64_t t26 = 249LLU;

    t26 = ((x149/x150)*(x151*x152));

    if (t26 != 2147483647LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x157 = INT16_MAX;
	uint64_t x158 = UINT64_MAX;
	int8_t x159 = -1;
	uint32_t x160 = 153992459U;
	volatile uint64_t t27 = 5694681207650238785LLU;

    t27 = ((x157/x158)*(x159*x160));

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint32_t x165 = UINT32_MAX;
	volatile int64_t x166 = INT64_MIN;
	static int64_t x167 = -1LL;
	uint64_t x168 = UINT64_MAX;
	uint64_t t28 = 3LLU;

    t28 = ((x165/x166)*(x167*x168));

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x170 = INT16_MIN;
	static int64_t x171 = INT64_MIN;

    t29 = ((x169/x170)*(x171*x172));

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x181 = INT8_MIN;
	volatile uint64_t x182 = 2193116204052LLU;
	int16_t x183 = -1;
	uint32_t x184 = 1U;
	uint64_t t30 = 116LLU;

    t30 = ((x181/x182)*(x183*x184));

    if (t30 != 36125837501638590LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x195 = -1;
	int32_t t31 = -458942851;

    t31 = ((x193/x194)*(x195*x196));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x197 = INT32_MAX;
	int64_t x198 = INT64_MIN;
	volatile uint32_t x199 = 50031U;
	static int32_t x200 = INT32_MIN;
	static int64_t t32 = -144851717401909LL;

    t32 = ((x197/x198)*(x199*x200));

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x201 = UINT8_MAX;
	int32_t x203 = INT32_MAX;
	int64_t x204 = 9343LL;
	volatile int64_t t33 = -237792147LL;

    t33 = ((x201/x202)*(x203*x204));

    if (t33 != -20063939713921LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int64_t x209 = -1LL;
	uint16_t x211 = 191U;
	uint64_t x212 = 49LLU;

    t34 = ((x209/x210)*(x211*x212));

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x213 = 11U;
	uint32_t x214 = 172242907U;
	uint32_t x215 = 1U;
	uint64_t x216 = 1607994736730993LLU;
	uint64_t t35 = 1899747649149LLU;

    t35 = ((x213/x214)*(x215*x216));

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x217 = -27;
	int8_t x218 = INT8_MIN;
	uint64_t x219 = 2437048719LLU;
	int64_t x220 = 641796589919789LL;
	volatile uint64_t t36 = 325LLU;

    t36 = ((x217/x218)*(x219*x220));

    if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x221 = UINT8_MAX;
	uint16_t x222 = 1U;
	uint16_t x223 = 4869U;
	uint32_t x224 = UINT32_MAX;

    t37 = ((x221/x222)*(x223*x224));

    if (t37 != 4293725701U) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x225 = 25956U;
	int32_t x227 = INT32_MAX;
	uint8_t x228 = 1U;
	int32_t t38 = 392;

    t38 = ((x225/x226)*(x227*x228));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x229 = 485;
	static volatile uint16_t x230 = 10722U;
	int16_t x232 = INT16_MAX;

    t39 = ((x229/x230)*(x231*x232));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x233 = UINT32_MAX;
	uint64_t x235 = UINT64_MAX;
	static uint16_t x236 = 24U;

    t40 = ((x233/x234)*(x235*x236));

    if (t40 != 18446744073707978728LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x238 = 1352553LL;
	static volatile uint16_t x239 = UINT16_MAX;
	uint8_t x240 = UINT8_MAX;
	volatile int64_t t41 = 4654813LL;

    t41 = ((x237/x238)*(x239*x240));

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x242 = INT64_MIN;
	static int8_t x243 = -1;
	volatile int32_t x244 = -28056;
	volatile int64_t t42 = -83769107LL;

    t42 = ((x241/x242)*(x243*x244));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x245 = INT64_MIN;
	volatile int16_t x246 = INT16_MAX;
	int16_t x247 = INT16_MIN;
	uint64_t x248 = 13964553830457226LLU;
	uint64_t t43 = 520880124LLU;

    t43 = ((x245/x246)*(x247*x248));

    if (t43 != 8020903375025995776LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x249 = -1;
	static volatile int32_t x250 = INT32_MIN;
	int64_t x251 = -23907LL;
	int32_t x252 = INT32_MAX;

    t44 = ((x249/x250)*(x251*x252));

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x253 = 28444017U;
	static uint16_t x254 = 23U;
	static int32_t x255 = 678519;
	int8_t x256 = INT8_MIN;

    t45 = ((x253/x254)*(x255*x256));

    if (t45 != 960285696U) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x257 = INT64_MAX;
	volatile uint8_t x258 = UINT8_MAX;
	volatile int8_t x259 = -1;
	int8_t x260 = INT8_MIN;
	int64_t t46 = -530241744LL;

    t46 = ((x257/x258)*(x259*x260));

    if (t46 != 4629771061636907008LL) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint16_t x273 = 221U;
	static int64_t x274 = -1LL;
	int64_t t47 = 212805183229LL;

    t47 = ((x273/x274)*(x275*x276));

    if (t47 != 1379924LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x277 = -1;
	int64_t x278 = INT64_MIN;
	int64_t x279 = INT64_MAX;
	volatile uint64_t t48 = 34LLU;

    t48 = ((x277/x278)*(x279*x280));

    if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile int64_t x286 = INT64_MIN;
	static volatile int32_t x287 = -4;
	volatile int8_t x288 = INT8_MIN;
	static int64_t t49 = -10899163214464LL;

    t49 = ((x285/x286)*(x287*x288));

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint16_t x289 = 3016U;
	int8_t x290 = -1;
	int32_t t50 = 14;

    t50 = ((x289/x290)*(x291*x292));

    if (t50 != 197650544) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x294 = INT8_MIN;
	int16_t x295 = 340;
	int8_t x296 = 2;
	static uint32_t t51 = 659U;

    t51 = ((x293/x294)*(x295*x296));

    if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x297 = INT16_MIN;
	volatile int16_t x298 = -57;
	int8_t x299 = INT8_MAX;
	volatile int16_t x300 = -14974;
	int32_t t52 = 2;

    t52 = ((x297/x298)*(x299*x300));

    if (t52 != -1091574652) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x305 = 4620447941LLU;
	uint64_t x306 = 77777371708376LLU;
	static volatile uint64_t t53 = 15999322474890372LLU;

    t53 = ((x305/x306)*(x307*x308));

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int64_t x313 = INT64_MIN;
	int32_t x314 = 1111;
	static int64_t t54 = 986126003822LL;

    t54 = ((x313/x314)*(x315*x316));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x317 = INT8_MIN;
	int64_t x318 = INT64_MAX;
	int16_t x319 = -1;
	static int8_t x320 = -30;
	volatile int64_t t55 = 3067344740288238641LL;

    t55 = ((x317/x318)*(x319*x320));

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint8_t x329 = 3U;
	int32_t x330 = -1;
	static volatile int64_t x331 = INT64_MIN;
	uint64_t x332 = UINT64_MAX;

    t56 = ((x329/x330)*(x331*x332));

    if (t56 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x337 = -3;
	static int32_t x338 = INT32_MIN;
	uint64_t x339 = 47527LLU;
	volatile uint64_t t57 = 46822403018469LLU;

    t57 = ((x337/x338)*(x339*x340));

    if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x345 = INT32_MIN;
	uint8_t x346 = UINT8_MAX;
	static volatile int8_t x347 = -1;
	int8_t x348 = INT8_MAX;
	volatile int32_t t58 = 994612;

    t58 = ((x345/x346)*(x347*x348));

    if (t58 != 1069531008) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x349 = 391873U;
	int32_t x352 = -1;
	volatile int64_t t59 = 6374007171LL;

    t59 = ((x349/x350)*(x351*x352));

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x353 = INT8_MIN;
	int16_t x354 = INT16_MAX;
	int8_t x355 = 1;
	static uint32_t x356 = 33117019U;

    t60 = ((x353/x354)*(x355*x356));

    if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x366 = INT32_MAX;
	static int8_t x367 = -1;
	uint64_t x368 = 687977LLU;
	volatile uint64_t t61 = 3680960848212575LLU;

    t61 = ((x365/x366)*(x367*x368));

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x377 = INT32_MAX;
	int64_t x378 = INT64_MAX;
	int64_t t62 = 193682548207548547LL;

    t62 = ((x377/x378)*(x379*x380));

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x381 = INT16_MIN;
	static int64_t x382 = -67146528115087615LL;
	static uint32_t x383 = UINT32_MAX;
	int32_t x384 = -5;
	int64_t t63 = -66109269456843389LL;

    t63 = ((x381/x382)*(x383*x384));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x385 = 36454693LLU;
	volatile int8_t x386 = INT8_MAX;
	uint32_t x387 = 401605841U;
	static int8_t x388 = INT8_MIN;

    t64 = ((x385/x386)*(x387*x388));

    if (t64 != 38481091083776LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x389 = INT16_MAX;
	int32_t x390 = INT32_MIN;
	static int16_t x391 = 147;
	uint16_t x392 = UINT16_MAX;
	volatile int32_t t65 = -1;

    t65 = ((x389/x390)*(x391*x392));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x405 = INT64_MIN;
	uint8_t x406 = 54U;
	int16_t x408 = -1;

    t66 = ((x405/x406)*(x407*x408));

    if (t66 != 18275940887841870583LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x409 = INT8_MIN;
	int32_t x410 = -1977954;
	static uint8_t x412 = UINT8_MAX;
	volatile int32_t t67 = -45535;

    t67 = ((x409/x410)*(x411*x412));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint64_t x413 = 1LLU;
	int8_t x414 = -1;
	static uint8_t x415 = 0U;
	volatile uint64_t t68 = 35560728149694LLU;

    t68 = ((x413/x414)*(x415*x416));

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x417 = 1;
	uint16_t x418 = UINT16_MAX;
	uint8_t x419 = 0U;
	volatile uint64_t t69 = 163LLU;

    t69 = ((x417/x418)*(x419*x420));

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile uint64_t x423 = UINT64_MAX;
	static volatile int16_t x424 = 106;
	static volatile uint64_t t70 = 334714994509683132LLU;

    t70 = ((x421/x422)*(x423*x424));

    if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x426 = 1413U;
	int8_t x427 = 0;
	uint64_t x428 = 2774901029LLU;
	uint64_t t71 = 2515184LLU;

    t71 = ((x425/x426)*(x427*x428));

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint64_t x429 = 1032273612750936511LLU;
	uint8_t x430 = 10U;
	int8_t x432 = INT8_MIN;

    t72 = ((x429/x430)*(x431*x432));

    if (t72 != 7463469744842116608LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x437 = INT8_MIN;
	int64_t x438 = INT64_MAX;

    t73 = ((x437/x438)*(x439*x440));

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static int32_t x441 = INT32_MAX;
	static uint64_t x442 = 22646211971437973LLU;
	int8_t x443 = 0;
	volatile uint64_t t74 = 21986456095960989LLU;

    t74 = ((x441/x442)*(x443*x444));

    if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x450 = INT8_MAX;
	int32_t x451 = INT32_MIN;
	uint64_t x452 = UINT64_MAX;

    t75 = ((x449/x450)*(x451*x452));

    if (t75 != 72624976397598720LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x453 = INT16_MAX;
	int8_t x454 = 1;
	int8_t x455 = -1;
	static volatile uint16_t x456 = 1650U;
	volatile int32_t t76 = -2962;

    t76 = ((x453/x454)*(x455*x456));

    if (t76 != -54065550) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile uint64_t x457 = 569726375LLU;
	uint8_t x460 = 25U;

    t77 = ((x457/x458)*(x459*x460));

    if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int64_t x461 = INT64_MIN;
	uint32_t x462 = 41709U;
	int8_t x463 = INT8_MAX;
	int64_t t78 = -26LL;

    t78 = ((x461/x462)*(x463*x464));

    if (t78 != -421264564727236665LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x465 = INT16_MIN;
	int16_t x466 = INT16_MAX;
	uint64_t x467 = UINT64_MAX;
	int32_t x468 = 9;

    t79 = ((x465/x466)*(x467*x468));

    if (t79 != 9LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x469 = INT8_MIN;
	int64_t x470 = INT64_MIN;
	uint32_t x471 = 1200U;
	uint32_t x472 = UINT32_MAX;

    t80 = ((x469/x470)*(x471*x472));

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x473 = INT16_MIN;
	int8_t x474 = INT8_MAX;
	static uint32_t x475 = 1539U;
	uint32_t t81 = 355239659U;

    t81 = ((x473/x474)*(x475*x476));

    if (t81 != 4193716486U) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint8_t x477 = 90U;
	int32_t x478 = -1;
	static uint64_t x479 = 2742441262647079LLU;
	volatile int16_t x480 = INT16_MAX;

    t82 = ((x477/x478)*(x479*x480));

    if (t82 != 10579091574377776054LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x481 = -1;
	uint16_t x482 = 90U;
	uint32_t x483 = 21560U;
	int16_t x484 = INT16_MIN;
	uint32_t t83 = 27U;

    t83 = ((x481/x482)*(x483*x484));

    if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x485 = 6996;
	static int64_t x486 = 15444LL;
	volatile uint32_t x488 = 46444046U;
	volatile uint64_t t84 = 8360400203080LLU;

    t84 = ((x485/x486)*(x487*x488));

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x489 = -19468174;
	static uint64_t x490 = 3572225804558LLU;
	static int16_t x491 = INT16_MAX;
	volatile uint64_t t85 = 129887441LLU;

    t85 = ((x489/x490)*(x491*x492));

    if (t85 != 22178762737011615LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x493 = -1;
	uint8_t x495 = 6U;
	static int32_t x496 = 1004646;

    t86 = ((x493/x494)*(x495*x496));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile int8_t x498 = INT8_MIN;
	uint64_t t87 = 8198068LLU;

    t87 = ((x497/x498)*(x499*x500));

    if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile int16_t x502 = -3;
	int8_t x503 = INT8_MAX;
	int32_t x504 = 0;

    t88 = ((x501/x502)*(x503*x504));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x505 = -1LL;
	int8_t x506 = INT8_MIN;
	int32_t x508 = 15436;
	volatile int64_t t89 = 1320979767140737171LL;

    t89 = ((x505/x506)*(x507*x508));

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x509 = 0;
	int16_t x512 = INT16_MIN;

    t90 = ((x509/x510)*(x511*x512));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint16_t x513 = 5087U;
	int64_t x514 = -1LL;
	int16_t x515 = 0;
	int16_t x516 = -20;
	static int64_t t91 = 5747271515782731LL;

    t91 = ((x513/x514)*(x515*x516));

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x521 = 33787498011745LLU;
	uint32_t x523 = 1173654U;
	uint64_t t92 = 65077944446411244LLU;

    t92 = ((x521/x522)*(x523*x524));

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x525 = INT16_MIN;
	int16_t x526 = -745;
	volatile uint16_t x527 = 26767U;
	int8_t x528 = 19;
	volatile int32_t t93 = -1859969;

    t93 = ((x525/x526)*(x527*x528));

    if (t93 != 21868639) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x534 = INT32_MIN;
	uint32_t x536 = 38538057U;
	uint64_t t94 = 5620044140764987221LLU;

    t94 = ((x533/x534)*(x535*x536));

    if (t94 != 1598122189519511882LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint16_t x538 = UINT16_MAX;
	static volatile int64_t x539 = -1LL;
	volatile int64_t t95 = 60435345925291887LL;

    t95 = ((x537/x538)*(x539*x540));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x541 = INT16_MIN;
	uint8_t x542 = UINT8_MAX;
	volatile int8_t x544 = INT8_MIN;
	int32_t t96 = 1;

    t96 = ((x541/x542)*(x543*x544));

    if (t96 != -16384) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x545 = UINT64_MAX;
	int64_t x546 = INT64_MIN;
	int16_t x547 = -4921;
	uint16_t x548 = UINT16_MAX;
	volatile uint64_t t97 = 101LLU;

    t97 = ((x545/x546)*(x547*x548));

    if (t97 != 18446744073387053881LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x549 = 541LL;
	int16_t x550 = -84;
	static int16_t x551 = -1;
	int16_t x552 = -1;
	static volatile int64_t t98 = 0LL;

    t98 = ((x549/x550)*(x551*x552));

    if (t98 != -6LL) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x554 = -50;
	volatile uint64_t x555 = 71235610902428613LLU;
	static uint16_t x556 = UINT16_MAX;
	uint64_t t99 = 3364782848906LLU;

    t99 = ((x553/x554)*(x555*x556));

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int32_t x557 = -633;
	static int16_t x558 = -1;
	uint8_t x559 = 3U;
	static uint16_t x560 = 0U;
	static int32_t t100 = -2;

    t100 = ((x557/x558)*(x559*x560));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x561 = -1;
	uint16_t x563 = 3U;
	int32_t x564 = -2054071;
	int32_t t101 = -853534969;

    t101 = ((x561/x562)*(x563*x564));

    if (t101 != -6162213) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x565 = -1;
	uint16_t x566 = 5U;
	volatile int32_t t102 = 7;

    t102 = ((x565/x566)*(x567*x568));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x569 = -14003;
	uint8_t x570 = 3U;
	int16_t x571 = 386;
	uint8_t x572 = 43U;

    t103 = ((x569/x570)*(x571*x572));

    if (t103 != -77462866) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x578 = INT8_MIN;
	static volatile int8_t x580 = INT8_MAX;

    t104 = ((x577/x578)*(x579*x580));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x581 = INT32_MIN;
	volatile uint16_t x582 = 13U;
	uint32_t x583 = 10U;
	volatile int16_t x584 = INT16_MAX;
	uint32_t t105 = 40565U;

    t105 = ((x581/x582)*(x583*x584));

    if (t105 != 1321805658U) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint16_t x585 = 9U;
	uint64_t x587 = 1161219LLU;
	uint64_t t106 = 0LLU;

    t106 = ((x585/x586)*(x587*x588));

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x590 = INT32_MAX;
	volatile uint64_t x591 = 324901033854534539LLU;
	uint16_t x592 = UINT16_MAX;
	uint64_t t107 = 17482978346LLU;

    t107 = ((x589/x590)*(x591*x592));

    if (t107 != 0LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x593 = -1;
	static uint32_t x594 = 2U;
	int16_t x595 = INT16_MAX;
	uint64_t x596 = 247LLU;
	static volatile uint64_t t108 = 396759917669522LLU;

    t108 = ((x593/x594)*(x595*x596));

    if (t108 != 17380549375328503LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x601 = 2177;
	int8_t x602 = INT8_MAX;
	int32_t x603 = -3;
	static volatile int16_t x604 = INT16_MIN;
	int32_t t109 = -12998716;

    t109 = ((x601/x602)*(x603*x604));

    if (t109 != 1671168) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x609 = UINT64_MAX;
	uint32_t x610 = UINT32_MAX;
	int64_t x611 = INT64_MAX;
	int16_t x612 = -1;
	static uint64_t t110 = 3005061636686LLU;

    t110 = ((x609/x610)*(x611*x612));

    if (t110 != 9223372041149743105LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x614 = -8;
	int16_t x615 = 1;
	volatile uint16_t x616 = UINT16_MAX;

    t111 = ((x613/x614)*(x615*x616));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x621 = -1;
	volatile int8_t x623 = INT8_MIN;
	int64_t t112 = 78LL;

    t112 = ((x621/x622)*(x623*x624));

    if (t112 != 1647488LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x626 = 2981U;
	uint32_t t113 = 55568U;

    t113 = ((x625/x626)*(x627*x628));

    if (t113 != 720390U) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint64_t x629 = 30515119742LLU;
	int64_t x630 = INT64_MIN;
	static volatile int32_t x631 = -27584262;
	static uint32_t x632 = 43U;
	volatile uint64_t t114 = 6609800475LLU;

    t114 = ((x629/x630)*(x631*x632));

    if (t114 != 0LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x637 = INT8_MIN;
	volatile uint16_t x638 = UINT16_MAX;
	uint8_t x639 = 4U;
	volatile int16_t x640 = -921;

    t115 = ((x637/x638)*(x639*x640));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x645 = -21;
	volatile int8_t x646 = INT8_MIN;
	int64_t x648 = -14401708LL;
	volatile int64_t t116 = -206315128714761241LL;

    t116 = ((x645/x646)*(x647*x648));

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x649 = 43;
	uint8_t x651 = UINT8_MAX;
	volatile int16_t x652 = -657;

    t117 = ((x649/x650)*(x651*x652));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x661 = 2300;
	static volatile uint8_t x662 = 28U;
	static int64_t x663 = INT64_MIN;
	static int64_t t118 = -135LL;

    t118 = ((x661/x662)*(x663*x664));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x693 = INT32_MIN;
	int32_t x694 = INT32_MAX;
	int64_t x695 = -1LL;
	int16_t x696 = INT16_MAX;
	int64_t t119 = 5452132677212093LL;

    t119 = ((x693/x694)*(x695*x696));

    if (t119 != 32767LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x705 = 7772;
	int64_t x707 = -1LL;
	int16_t x708 = INT16_MIN;
	int64_t t120 = 185840309079493461LL;

    t120 = ((x705/x706)*(x707*x708));

    if (t120 != 983040LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x710 = INT64_MIN;
	int8_t x711 = -8;
	volatile uint64_t t121 = 6664240501168LLU;

    t121 = ((x709/x710)*(x711*x712));

    if (t121 != 0LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x717 = 13U;
	volatile uint64_t x719 = 12733705693533LLU;
	int64_t x720 = INT64_MIN;

    t122 = ((x717/x718)*(x719*x720));

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x725 = 3;
	uint32_t x726 = 3U;
	uint64_t x727 = 580632478LLU;
	int16_t x728 = INT16_MIN;
	uint64_t t123 = 15263272354LLU;

    t123 = ((x725/x726)*(x727*x728));

    if (t123 != 18446725047544512512LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x729 = -7;
	static int32_t x730 = INT32_MIN;
	int64_t x731 = -1LL;
	uint8_t x732 = 7U;
	static int64_t t124 = -2LL;

    t124 = ((x729/x730)*(x731*x732));

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x737 = 7004;
	uint16_t x739 = 10U;
	volatile int64_t t125 = 1836651768947078588LL;

    t125 = ((x737/x738)*(x739*x740));

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x742 = -1LL;
	int16_t x743 = 12;
	int16_t x744 = 13611;
	volatile int64_t t126 = -8224060213LL;

    t126 = ((x741/x742)*(x743*x744));

    if (t126 != -41649660LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x753 = INT32_MAX;
	static volatile int64_t x754 = INT64_MIN;
	int8_t x755 = -12;
	uint32_t x756 = 101U;
	static int64_t t127 = -1860212LL;

    t127 = ((x753/x754)*(x755*x756));

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x767 = -12562625897LL;
	uint8_t x768 = 1U;

    t128 = ((x765/x766)*(x767*x768));

    if (t128 != 274392874842274LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x769 = INT64_MAX;
	volatile uint32_t x770 = 7453784U;
	uint8_t x771 = UINT8_MAX;
	volatile uint64_t t129 = 20219774LLU;

    t129 = ((x769/x770)*(x771*x772));

    if (t129 != 576805370434462140LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x777 = INT8_MAX;
	uint16_t x778 = 146U;
	int16_t x779 = INT16_MIN;
	int64_t t130 = -232295638673LL;

    t130 = ((x777/x778)*(x779*x780));

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint8_t x789 = 0U;
	int64_t x790 = -1LL;
	uint8_t x791 = 1U;
	int16_t x792 = 28;
	int64_t t131 = 1LL;

    t131 = ((x789/x790)*(x791*x792));

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x801 = 1823487LLU;
	uint16_t x804 = UINT16_MAX;
	uint64_t t132 = 1886185664586270LLU;

    t132 = ((x801/x802)*(x803*x804));

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x810 = -67;
	volatile uint32_t x811 = 637136372U;
	static int8_t x812 = INT8_MIN;
	static uint32_t t133 = 63769389U;

    t133 = ((x809/x810)*(x811*x812));

    if (t133 != 0U) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int16_t x813 = INT16_MIN;
	int8_t x815 = INT8_MIN;
	static uint64_t x816 = UINT64_MAX;
	uint64_t t134 = 2342625636LLU;

    t134 = ((x813/x814)*(x815*x816));

    if (t134 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x817 = INT32_MAX;
	int16_t x819 = INT16_MIN;
	uint16_t x820 = 2U;

    t135 = ((x817/x818)*(x819*x820));

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static int8_t x821 = -1;
	int16_t x822 = -22;
	volatile uint32_t x823 = 4558326U;
	uint64_t x824 = 173LLU;
	uint64_t t136 = 61LLU;

    t136 = ((x821/x822)*(x823*x824));

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x825 = INT32_MIN;
	uint8_t x826 = 22U;
	uint8_t x827 = UINT8_MAX;
	volatile int64_t t137 = -51390157295725624LL;

    t137 = ((x825/x826)*(x827*x828));

    if (t137 != 24891287715LL) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int32_t x830 = -1;
	int16_t x831 = INT16_MIN;
	uint32_t t138 = 0U;

    t138 = ((x829/x830)*(x831*x832));

    if (t138 != 4210229248U) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x833 = UINT16_MAX;
	int32_t x835 = -1;
	int8_t x836 = INT8_MIN;

    t139 = ((x833/x834)*(x835*x836));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint64_t x837 = 1048773295430372LLU;
	int32_t x838 = INT32_MIN;
	uint8_t x839 = 5U;
	volatile int32_t x840 = 1;
	uint64_t t140 = 1016057683432391LLU;

    t140 = ((x837/x838)*(x839*x840));

    if (t140 != 0LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static int32_t x845 = 3;
	uint32_t x847 = 5864081U;
	uint32_t x848 = 233116U;
	static uint32_t t141 = 2289165U;

    t141 = ((x845/x846)*(x847*x848));

    if (t141 != 0U) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x854 = INT32_MIN;
	int8_t x855 = -1;
	int16_t x856 = INT16_MIN;
	volatile int32_t t142 = -116260366;

    t142 = ((x853/x854)*(x855*x856));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x861 = -46517194540LL;
	int16_t x862 = -1;
	static int8_t x864 = INT8_MAX;
	int64_t t143 = -800617744660512LL;

    t143 = ((x861/x862)*(x863*x864));

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint32_t x873 = UINT32_MAX;
	int32_t x874 = 14370;
	static int32_t x875 = -938;
	uint32_t t144 = 2722U;

    t144 = ((x873/x874)*(x875*x876));

    if (t144 != 280353192U) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x877 = 273U;
	int64_t x878 = 61LL;
	int16_t x879 = -1;
	int32_t x880 = 472361404;
	int64_t t145 = -7417LL;

    t145 = ((x877/x878)*(x879*x880));

    if (t145 != -1889445616LL) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x886 = INT8_MIN;
	static int32_t x887 = 966;
	static uint16_t x888 = 0U;
	int32_t t146 = 750104;

    t146 = ((x885/x886)*(x887*x888));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x889 = UINT32_MAX;
	int16_t x891 = 881;
	volatile int16_t x892 = 482;
	static volatile int64_t t147 = 1826LL;

    t147 = ((x889/x890)*(x891*x892));

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x899 = 622LLU;
	volatile int16_t x900 = -1;

    t148 = ((x897/x898)*(x899*x900));

    if (t148 != 622LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x901 = UINT64_MAX;
	int64_t x902 = -2250627890692191311LL;
	static volatile int32_t x903 = INT32_MAX;
	volatile int64_t x904 = -1LL;
	volatile uint64_t t149 = 375345876283LLU;

    t149 = ((x901/x902)*(x903*x904));

    if (t149 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile uint16_t x905 = UINT16_MAX;
	static int8_t x906 = INT8_MAX;
	static volatile uint16_t x907 = 19U;
	static uint16_t x908 = UINT16_MAX;

    t150 = ((x905/x906)*(x907*x908));

    if (t150 != 642505140) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int8_t x913 = INT8_MIN;
	volatile uint32_t x915 = UINT32_MAX;
	int64_t x916 = -1LL;
	volatile int64_t t151 = -61LL;

    t151 = ((x913/x914)*(x915*x916));

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int8_t x926 = INT8_MIN;
	static volatile int8_t x927 = -1;
	uint8_t x928 = UINT8_MAX;
	volatile uint32_t t152 = 209U;

    t152 = ((x925/x926)*(x927*x928));

    if (t152 != 4294967041U) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x933 = -1;
	int64_t x934 = INT64_MAX;
	static uint16_t x936 = UINT16_MAX;

    t153 = ((x933/x934)*(x935*x936));

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x937 = UINT16_MAX;
	int64_t x938 = INT64_MAX;
	int8_t x939 = INT8_MAX;
	int16_t x940 = -347;
	volatile int64_t t154 = 1694709290LL;

    t154 = ((x937/x938)*(x939*x940));

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x945 = INT16_MAX;
	int64_t x946 = INT64_MAX;
	static int16_t x947 = -2468;

    t155 = ((x945/x946)*(x947*x948));

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x953 = 1U;
	volatile int16_t x954 = 69;
	int8_t x955 = 1;
	uint64_t x956 = UINT64_MAX;

    t156 = ((x953/x954)*(x955*x956));

    if (t156 != 0LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x973 = INT16_MIN;
	int32_t x974 = INT32_MAX;
	uint64_t x975 = 7364LLU;
	static volatile uint32_t x976 = 5U;

    t157 = ((x973/x974)*(x975*x976));

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x977 = 6348679284467LLU;
	int8_t x978 = -1;
	int8_t x979 = INT8_MAX;
	uint16_t x980 = UINT16_MAX;

    t158 = ((x977/x978)*(x979*x980));

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint16_t x981 = 200U;
	int32_t x982 = 1093226;
	volatile int16_t x983 = INT16_MIN;
	uint32_t x984 = UINT32_MAX;
	volatile uint32_t t159 = 507U;

    t159 = ((x981/x982)*(x983*x984));

    if (t159 != 0U) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x985 = 24U;
	int64_t x986 = -3715629715229LL;
	uint64_t x987 = 101599725391294LLU;
	volatile int32_t x988 = 38;
	uint64_t t160 = 20LLU;

    t160 = ((x985/x986)*(x987*x988));

    if (t160 != 0LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x989 = UINT8_MAX;
	uint16_t x990 = 27573U;
	static int8_t x991 = INT8_MAX;
	uint16_t x992 = 2U;
	int32_t t161 = -2016;

    t161 = ((x989/x990)*(x991*x992));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x995 = INT16_MAX;
	uint64_t x996 = UINT64_MAX;
	volatile uint64_t t162 = 318940871467575814LLU;

    t162 = ((x993/x994)*(x995*x996));

    if (t162 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x998 = INT8_MIN;
	int32_t x999 = INT32_MAX;
	int8_t x1000 = -1;
	volatile int32_t t163 = -1;

    t163 = ((x997/x998)*(x999*x1000));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x1001 = 1527;
	uint16_t x1002 = UINT16_MAX;
	int32_t x1003 = INT32_MIN;
	volatile uint64_t x1004 = 340LLU;
	volatile uint64_t t164 = 48436601274545268LLU;

    t164 = ((x1001/x1002)*(x1003*x1004));

    if (t164 != 0LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint64_t x1005 = 247888LLU;
	int64_t x1006 = -2107LL;
	int32_t x1007 = INT32_MIN;
	uint64_t x1008 = UINT64_MAX;
	volatile uint64_t t165 = 136036836154LLU;

    t165 = ((x1005/x1006)*(x1007*x1008));

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x1009 = 2LLU;
	volatile int64_t x1010 = INT64_MIN;
	uint8_t x1011 = 26U;
	static int32_t x1012 = -1;
	static uint64_t t166 = 153153232LLU;

    t166 = ((x1009/x1010)*(x1011*x1012));

    if (t166 != 0LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x1013 = UINT32_MAX;
	int64_t x1014 = -1LL;
	int8_t x1015 = INT8_MIN;
	static int32_t x1016 = -1;
	volatile int64_t t167 = 54632965757206049LL;

    t167 = ((x1013/x1014)*(x1015*x1016));

    if (t167 != -549755813760LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x1018 = 4387002056931216934LLU;
	int8_t x1019 = -1;
	static int64_t x1020 = -400382598LL;

    t168 = ((x1017/x1018)*(x1019*x1020));

    if (t168 != 800765196LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint32_t x1025 = UINT32_MAX;
	int32_t x1026 = INT32_MIN;
	uint8_t x1027 = 0U;
	uint64_t x1028 = 269851051449973121LLU;
	volatile uint64_t t169 = 461276585770687644LLU;

    t169 = ((x1025/x1026)*(x1027*x1028));

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x1029 = -244;
	static volatile uint64_t t170 = 8979007566572280976LLU;

    t170 = ((x1029/x1030)*(x1031*x1032));

    if (t170 != 18439708298128986472LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x1033 = INT16_MAX;
	uint16_t x1034 = UINT16_MAX;
	uint64_t x1035 = 24237396983LLU;
	uint32_t x1036 = UINT32_MAX;
	volatile uint64_t t171 = 902815501060LLU;

    t171 = ((x1033/x1034)*(x1035*x1036));

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x1038 = INT64_MIN;
	volatile uint64_t x1039 = UINT64_MAX;
	int8_t x1040 = INT8_MIN;
	volatile uint64_t t172 = 1488715692113181115LLU;

    t172 = ((x1037/x1038)*(x1039*x1040));

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint64_t x1041 = UINT64_MAX;
	uint8_t x1042 = UINT8_MAX;
	volatile int8_t x1043 = INT8_MIN;
	static uint8_t x1044 = 0U;
	volatile uint64_t t173 = 195529LLU;

    t173 = ((x1041/x1042)*(x1043*x1044));

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int16_t x1045 = -1;
	uint16_t x1046 = 13U;
	int32_t x1047 = -1;
	static int16_t x1048 = INT16_MAX;
	volatile int32_t t174 = 1;

    t174 = ((x1045/x1046)*(x1047*x1048));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x1049 = INT64_MIN;
	int16_t x1050 = 1641;
	static int16_t x1051 = -14978;
	uint64_t t175 = 498677LLU;

    t175 = ((x1049/x1050)*(x1051*x1052));

    if (t175 != 1613366132069551376LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x1053 = INT8_MIN;
	int32_t x1054 = -1;
	static volatile uint32_t x1055 = UINT32_MAX;
	static volatile uint32_t t176 = 337U;

    t176 = ((x1053/x1054)*(x1055*x1056));

    if (t176 != 4294934656U) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x1061 = 36U;
	static int64_t x1062 = INT64_MAX;
	int8_t x1063 = 1;
	uint8_t x1064 = 6U;
	volatile int64_t t177 = -42262794LL;

    t177 = ((x1061/x1062)*(x1063*x1064));

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x1067 = -1;
	volatile int64_t x1068 = 158038960402LL;

    t178 = ((x1065/x1066)*(x1067*x1068));

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x1069 = INT16_MIN;
	static int64_t x1070 = INT64_MIN;
	volatile uint8_t x1071 = 33U;
	uint8_t x1072 = 0U;
	int64_t t179 = -187LL;

    t179 = ((x1069/x1070)*(x1071*x1072));

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x1073 = 11U;
	static int64_t x1074 = 165LL;
	uint32_t x1076 = 114147358U;
	static volatile int64_t t180 = 254823160729244982LL;

    t180 = ((x1073/x1074)*(x1075*x1076));

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x1077 = INT8_MIN;
	int16_t x1078 = -1;
	uint8_t x1079 = 3U;
	volatile int16_t x1080 = 45;
	volatile int32_t t181 = 860598183;

    t181 = ((x1077/x1078)*(x1079*x1080));

    if (t181 != 17280) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x1089 = 0U;
	volatile int64_t x1091 = INT64_MIN;
	volatile uint64_t x1092 = UINT64_MAX;
	uint64_t t182 = 643377140136605935LLU;

    t182 = ((x1089/x1090)*(x1091*x1092));

    if (t182 != 0LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x1093 = UINT8_MAX;
	int8_t x1094 = -1;
	int8_t x1096 = INT8_MIN;
	volatile int32_t t183 = -23544629;

    t183 = ((x1093/x1094)*(x1095*x1096));

    if (t183 != 522240) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x1101 = -1;
	volatile int16_t x1102 = INT16_MIN;
	static int64_t x1103 = -1LL;
	int8_t x1104 = INT8_MAX;
	int64_t t184 = 1811657555LL;

    t184 = ((x1101/x1102)*(x1103*x1104));

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x1106 = INT64_MAX;
	int8_t x1107 = -28;
	volatile uint32_t x1108 = 43U;
	volatile int64_t t185 = -992000524615173986LL;

    t185 = ((x1105/x1106)*(x1107*x1108));

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x1111 = -1;
	int16_t x1112 = -1;
	volatile uint32_t t186 = 4733U;

    t186 = ((x1109/x1110)*(x1111*x1112));

    if (t186 != 0U) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x1121 = 7950269U;
	int8_t x1122 = -1;
	int32_t x1124 = 0;

    t187 = ((x1121/x1122)*(x1123*x1124));

    if (t187 != 0U) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x1126 = 120009173721LL;
	uint8_t x1127 = 1U;
	static int8_t x1128 = INT8_MIN;
	static uint64_t t188 = 552LLU;

    t188 = ((x1125/x1126)*(x1127*x1128));

    if (t188 != 0LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x1129 = UINT16_MAX;
	int8_t x1130 = INT8_MIN;
	int32_t x1131 = -1;
	int8_t x1132 = INT8_MIN;
	int32_t t189 = 56935;

    t189 = ((x1129/x1130)*(x1131*x1132));

    if (t189 != -65408) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x1137 = 1U;
	volatile int16_t x1138 = INT16_MAX;
	volatile int32_t x1139 = INT32_MIN;

    t190 = ((x1137/x1138)*(x1139*x1140));

    if (t190 != 0U) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x1153 = INT64_MAX;
	int8_t x1155 = INT8_MIN;
	uint32_t x1156 = UINT32_MAX;
	volatile int64_t t191 = 6LL;

    t191 = ((x1153/x1154)*(x1155*x1156));

    if (t191 != 1298509245281408LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x1161 = UINT32_MAX;
	uint8_t x1162 = 10U;
	uint16_t x1163 = UINT16_MAX;
	uint8_t x1164 = 7U;
	volatile uint32_t t192 = 698U;

    t192 = ((x1161/x1162)*(x1163*x1164));

    if (t192 != 2147208401U) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint64_t x1169 = UINT64_MAX;
	int64_t x1171 = -30317LL;
	volatile int32_t x1172 = INT32_MIN;
	static uint64_t t193 = 50LLU;

    t193 = ((x1169/x1170)*(x1171*x1172));

    if (t193 != 14027923939666165760LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint32_t x1185 = UINT32_MAX;
	volatile int32_t x1186 = INT32_MIN;
	uint8_t x1187 = 2U;
	uint8_t x1188 = 31U;

    t194 = ((x1185/x1186)*(x1187*x1188));

    if (t194 != 62U) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x1189 = INT32_MAX;
	uint8_t x1190 = UINT8_MAX;
	volatile int16_t x1191 = -5;
	uint16_t x1192 = 2U;

    t195 = ((x1189/x1190)*(x1191*x1192));

    if (t195 != -84215040) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x1193 = UINT64_MAX;
	int8_t x1194 = INT8_MIN;
	volatile uint32_t x1196 = 170434U;
	uint64_t t196 = 27LLU;

    t196 = ((x1193/x1194)*(x1195*x1196));

    if (t196 != 15425640472LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x1197 = INT16_MAX;
	volatile int8_t x1198 = INT8_MIN;
	int32_t x1199 = -1;
	static volatile uint64_t x1200 = 29080LLU;

    t197 = ((x1197/x1198)*(x1199*x1200));

    if (t197 != 7415400LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x1201 = 50U;
	uint16_t x1202 = 2246U;
	volatile int32_t x1204 = -1;
	volatile uint32_t t198 = 2U;

    t198 = ((x1201/x1202)*(x1203*x1204));

    if (t198 != 0U) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x1205 = INT8_MAX;
	static uint64_t x1207 = UINT64_MAX;
	static int64_t x1208 = INT64_MAX;
	uint64_t t199 = 1424686808LLU;

    t199 = ((x1205/x1206)*(x1207*x1208));

    if (t199 != 9223372036854775871LLU) { NG(); } else { ; }
	
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

