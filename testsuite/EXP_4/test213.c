
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

static int32_t x1 = 250829637;
static int64_t x3 = -3LL;
uint16_t x5 = UINT16_MAX;
int8_t x8 = -8;
uint64_t x15 = 2692999813945726LLU;
int64_t x16 = INT64_MAX;
int64_t x18 = -1LL;
int32_t x20 = 8;
int32_t x23 = INT32_MIN;
volatile uint8_t x35 = 0U;
int8_t x44 = 0;
uint64_t t7 = 267575215375035LLU;
volatile int32_t x45 = -7;
static int32_t x46 = INT32_MIN;
static uint32_t x48 = UINT32_MAX;
uint32_t x56 = 340450731U;
volatile int8_t x61 = -1;
int32_t t10 = -1770136;
int64_t x77 = -120816826626299973LL;
int8_t x93 = INT8_MIN;
uint64_t t14 = 523166LLU;
volatile int16_t x98 = -1;
uint8_t x118 = 48U;
static uint8_t x119 = 81U;
int16_t x133 = INT16_MAX;
uint64_t t20 = 1380857814175095118LLU;
int64_t x144 = INT64_MAX;
volatile uint64_t t23 = 0LLU;
uint16_t x149 = 5U;
volatile int64_t x165 = 70LL;
int8_t x168 = 2;
uint64_t x169 = 26LLU;
uint64_t x171 = UINT64_MAX;
int32_t x172 = -1;
uint32_t x178 = UINT32_MAX;
uint32_t x225 = 14544691U;
volatile uint64_t x243 = 71398LLU;
uint64_t x254 = 77984974954LLU;
int64_t x258 = -1LL;
int64_t t37 = -6923398LL;
int64_t t38 = 1LL;
static uint32_t x283 = 74449321U;
static int64_t t39 = -366160336LL;
int64_t x299 = INT64_MAX;
int16_t x319 = INT16_MIN;
volatile int32_t t46 = 2834991;
uint8_t x338 = 60U;
volatile uint32_t x341 = 581117U;
volatile uint32_t t49 = 0U;
int16_t x361 = INT16_MIN;
int16_t x362 = INT16_MIN;
uint64_t t52 = 15326789636077823LLU;
volatile uint64_t t55 = 783918659538416418LLU;
int32_t x388 = -1;
volatile int32_t x408 = INT32_MIN;
uint64_t t63 = 40120817639716953LLU;
int32_t x446 = -87226;
int8_t x448 = INT8_MAX;
static int8_t x449 = INT8_MAX;
int32_t x462 = 178828135;
int16_t x478 = -288;
uint64_t x491 = 2297705147083LLU;
volatile uint64_t x492 = 13912LLU;
uint64_t x499 = 29508988LLU;
volatile int16_t x507 = 1276;
static int32_t x511 = INT32_MIN;
uint64_t t74 = 40676578859828169LLU;
static int64_t x520 = -1LL;
int16_t x528 = INT16_MIN;
static int16_t x529 = -1;
uint16_t x532 = 4089U;
uint8_t x536 = UINT8_MAX;
int32_t x541 = INT32_MIN;
volatile uint64_t x548 = 4LLU;
volatile uint16_t x549 = 125U;
volatile uint64_t x552 = UINT64_MAX;
uint32_t x555 = UINT32_MAX;
uint64_t t84 = 2157205320030890236LLU;
int16_t x562 = 109;
int32_t x566 = INT32_MIN;
static volatile uint16_t x570 = 5U;
volatile uint8_t x573 = 2U;
volatile int64_t t88 = 1378780786667LL;
int8_t x577 = -1;
int8_t x587 = 6;
int8_t x588 = 0;
static int16_t x591 = INT16_MIN;
static volatile int32_t x608 = -1;
int16_t x619 = 51;
volatile int64_t t94 = 411499489869777LL;
uint64_t x621 = UINT64_MAX;
int8_t x634 = INT8_MIN;
int64_t t98 = -41531430723790LL;
static uint16_t x639 = UINT16_MAX;
static int32_t x642 = 8;
static uint16_t x643 = UINT16_MAX;
static int16_t x650 = -1;
int64_t x654 = INT64_MAX;
volatile int32_t x656 = -1;
static uint64_t t102 = 1LLU;
static int64_t x662 = -1LL;
uint32_t x665 = 15833710U;
uint64_t x671 = UINT64_MAX;
uint64_t t106 = 569895800366419582LLU;
volatile int8_t x678 = -1;
int16_t x679 = -30;
int32_t t107 = 30;
int8_t x683 = -1;
volatile int32_t t108 = -546844976;
uint8_t x685 = UINT8_MAX;
uint64_t t109 = 486334LLU;
int32_t x699 = INT32_MIN;
uint64_t x705 = UINT64_MAX;
static uint64_t x724 = 0LLU;
volatile uint64_t t114 = 35LLU;
volatile uint8_t x731 = 44U;
int64_t x735 = -1LL;
int32_t x739 = -5566;
static uint64_t x743 = UINT64_MAX;
int8_t x759 = INT8_MIN;
int32_t x778 = INT32_MIN;
int8_t x785 = INT8_MAX;
static int16_t x790 = 3;
static int32_t x800 = INT32_MAX;
static volatile int32_t t127 = 29339;
uint64_t x805 = UINT64_MAX;
int16_t x806 = INT16_MIN;
static uint32_t x814 = 0U;
int64_t x816 = 27705064862277209LL;
int32_t x818 = -12245;
int32_t x825 = 56866;
uint64_t x850 = 8011912897LLU;
int8_t x851 = -1;
int8_t x871 = -3;
static volatile uint64_t x878 = 1989052LLU;
uint64_t t138 = 61849087783LLU;
uint16_t x901 = 6376U;
uint8_t x913 = 1U;
static volatile int32_t t142 = -375653;
int32_t x927 = 13481;
int8_t x928 = INT8_MIN;
int32_t x932 = -1;
int32_t x949 = INT32_MAX;
uint8_t x969 = 14U;
volatile int64_t x970 = -1LL;
uint32_t t153 = 407941696U;
uint8_t x983 = 6U;
volatile uint32_t x991 = 381247420U;
uint16_t x992 = UINT16_MAX;
uint64_t x1005 = 484678LLU;
int16_t x1008 = INT16_MAX;
uint16_t x1037 = 350U;
uint8_t x1040 = 4U;
volatile uint64_t t165 = 161008507882LLU;
int32_t x1045 = -2767;
int64_t x1048 = INT64_MIN;
static volatile int8_t x1072 = INT8_MIN;
volatile int16_t x1093 = -1;
static int32_t t172 = 29;
int16_t x1104 = INT16_MIN;
uint16_t x1117 = 322U;
static int16_t x1130 = INT16_MIN;
int32_t t176 = 1;
volatile uint16_t x1149 = UINT16_MAX;
uint16_t x1156 = 324U;
int8_t x1172 = -1;
int64_t x1181 = INT64_MAX;
int8_t x1185 = 1;
volatile uint16_t x1187 = 9U;
uint8_t x1193 = 3U;
volatile uint64_t t190 = 67593LLU;
volatile int16_t x1224 = INT16_MAX;
uint64_t t192 = 5164939139LLU;
uint64_t x1229 = 83031990919260LLU;
uint8_t x1231 = 1U;
volatile uint64_t t193 = 62867574629371434LLU;
static int8_t x1237 = -1;
uint16_t x1241 = UINT16_MAX;
int16_t x1244 = 20;
int16_t x1245 = INT16_MAX;
int8_t x1249 = INT8_MIN;
uint16_t x1250 = UINT16_MAX;
uint64_t x1252 = UINT64_MAX;
static int64_t x1256 = -1LL;
volatile int16_t x1263 = -220;


void f0(void) {
    	static int64_t x2 = 3738058680LL;
	volatile uint16_t x4 = 1035U;
	static volatile int64_t t0 = 859516831583998LL;

    t0 = (x1*(x2-(x3-x4)));

    if (t0 != 937616162150262366LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x6 = 15U;
	uint16_t x7 = 14295U;
	volatile int32_t t1 = -220981;

    t1 = (x5*(x6-(x7-x8)));

    if (t1 != -936364080) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x13 = -5;
	int64_t x14 = -1LL;
	uint64_t t2 = 1582537546349515043LLU;

    t2 = (x13*(x14-(x15-x16)));

    if (t2 != 9236837035924504448LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x17 = 1;
	int16_t x19 = INT16_MIN;
	static int64_t t3 = -5886802215693613LL;

    t3 = (x17*(x18-(x19-x20)));

    if (t3 != 32775LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint16_t x21 = 1512U;
	int32_t x22 = INT32_MIN;
	volatile int64_t x24 = -1LL;
	volatile int64_t t4 = -387LL;

    t4 = (x21*(x22-(x23-x24)));

    if (t4 != -1512LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x29 = INT32_MIN;
	static int64_t x30 = -59742233336568LL;
	static volatile int64_t x31 = INT64_MAX;
	volatile uint64_t x32 = UINT64_MAX;
	uint64_t t5 = 4347LLU;

    t5 = (x29*(x30-(x31-x32)));

    if (t5 != 16810896704038502400LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x33 = 450822645580614727LLU;
	static int64_t x34 = INT64_MIN;
	volatile int8_t x36 = INT8_MAX;
	uint64_t t6 = 35942374436441671LLU;

    t6 = (x33*(x34-(x35-x36)));

    if (t6 != 11137615804464191289LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x41 = 2577U;
	int16_t x42 = -1;
	uint64_t x43 = 117949170414LLU;

    t7 = (x41*(x42-(x43-x44)));

    if (t7 != 18446440118697392161LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x47 = -1;
	uint32_t t8 = 392741297U;

    t8 = (x45*(x46-(x47-x48)));

    if (t8 != 2147483648U) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x53 = 2229524689089262LLU;
	static uint8_t x54 = 3U;
	uint8_t x55 = 0U;
	volatile uint64_t t9 = 25644808495936LLU;

    t9 = (x53*(x54-(x55-x56)));

    if (t9 != 15138470634119074756LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x62 = INT16_MIN;
	static volatile int8_t x63 = 22;
	static uint8_t x64 = 26U;

    t10 = (x61*(x62-(x63-x64)));

    if (t10 != 32764) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x78 = UINT64_MAX;
	uint32_t x79 = 0U;
	static int8_t x80 = 18;
	volatile uint64_t t11 = 2692473980697791614LLU;

    t11 = (x77*(x78-(x79-x80)));

    if (t11 != 7310039050962281323LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x81 = UINT16_MAX;
	static uint32_t x82 = 1000766U;
	uint16_t x83 = UINT16_MAX;
	int32_t x84 = -1;
	volatile uint32_t t12 = 1489930U;

    t12 = (x81*(x82-(x83-x84)));

    if (t12 != 1160755906U) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x89 = -342980LL;
	static volatile int16_t x90 = -1;
	static int16_t x91 = INT16_MIN;
	static volatile uint32_t x92 = 105015U;
	int64_t t13 = -303979473258827032LL;

    t13 = (x89*(x90-(x91-x92)));

    if (t13 != -47256470360LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x94 = 5975360555444774LL;
	static int16_t x95 = INT16_MAX;
	uint64_t x96 = 68855334215943LLU;

    t14 = (x93*(x94-(x95-x96)));

    if (t14 != 17673084439837174016LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x97 = INT16_MIN;
	volatile int64_t x99 = -9693466LL;
	uint16_t x100 = UINT16_MAX;
	int64_t t15 = 0LL;

    t15 = (x97*(x98-(x99-x100)));

    if (t15 != -319782912000LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x105 = INT16_MAX;
	int64_t x106 = -1LL;
	volatile int16_t x107 = INT16_MAX;
	int8_t x108 = INT8_MAX;
	volatile int64_t t16 = 1851382256LL;

    t16 = (x105*(x106-(x107-x108)));

    if (t16 != -1069547647LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x109 = -1;
	uint64_t x110 = UINT64_MAX;
	int32_t x111 = INT32_MAX;
	uint8_t x112 = 2U;
	volatile uint64_t t17 = 3078296358412562LLU;

    t17 = (x109*(x110-(x111-x112)));

    if (t17 != 2147483646LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x117 = INT8_MIN;
	static int8_t x120 = 5;
	volatile int32_t t18 = -45;

    t18 = (x117*(x118-(x119-x120)));

    if (t18 != 3584) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint8_t x125 = 34U;
	volatile uint64_t x126 = 82197297696618LLU;
	int64_t x127 = INT64_MAX;
	int64_t x128 = INT64_MAX;
	volatile uint64_t t19 = 190180745291312LLU;

    t19 = (x125*(x126-(x127-x128)));

    if (t19 != 2794708121685012LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x134 = 44670820722859LLU;
	static int8_t x135 = INT8_MIN;
	int64_t x136 = -2003130113840515LL;

    t20 = (x133*(x134-(x135-x136)));

    if (t20 != 9614140637256166488LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x137 = INT8_MIN;
	volatile int8_t x138 = INT8_MAX;
	uint64_t x139 = 346460779564LLU;
	int64_t x140 = -1412LL;
	volatile uint64_t t21 = 6360070296581824858LLU;

    t21 = (x137*(x138-(x139-x140)));

    if (t21 != 44346979948672LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x141 = -1;
	int8_t x142 = -4;
	volatile uint16_t x143 = 4761U;
	int64_t t22 = 2525373074507LL;

    t22 = (x141*(x142-(x143-x144)));

    if (t22 != -9223372036854771042LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x145 = UINT16_MAX;
	uint64_t x146 = UINT64_MAX;
	int64_t x147 = INT64_MIN;
	int32_t x148 = -31;

    t23 = (x145*(x146-(x147-x148)));

    if (t23 != 9223372036852678688LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x150 = 8648U;
	uint64_t x151 = 0LLU;
	static uint8_t x152 = 86U;
	static volatile uint64_t t24 = 1LLU;

    t24 = (x149*(x150-(x151-x152)));

    if (t24 != 43670LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x166 = -1;
	int64_t x167 = 1LL;
	int64_t t25 = -2533773108108LL;

    t25 = (x165*(x166-(x167-x168)));

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint64_t x170 = UINT64_MAX;
	uint64_t t26 = 105998LLU;

    t26 = (x169*(x170-(x171-x172)));

    if (t26 != 18446744073709551590LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x177 = INT32_MAX;
	int8_t x179 = INT8_MAX;
	static uint32_t x180 = UINT32_MAX;
	uint32_t t27 = 138826533U;

    t27 = (x177*(x178-(x179-x180)));

    if (t27 != 2147483777U) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x185 = INT32_MAX;
	int32_t x186 = -1;
	uint32_t x187 = UINT32_MAX;
	static uint64_t x188 = 24313872LLU;
	uint64_t t28 = 290835952209724LLU;

    t28 = (x185*(x186-(x187-x188)));

    if (t28 != 9275585683664994288LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint16_t x197 = UINT16_MAX;
	static uint8_t x198 = UINT8_MAX;
	static volatile uint64_t x199 = UINT64_MAX;
	uint16_t x200 = 60U;
	volatile uint64_t t29 = 5LLU;

    t29 = (x197*(x198-(x199-x200)));

    if (t29 != 20709060LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint16_t x226 = 3364U;
	int32_t x227 = -1;
	volatile int32_t x228 = INT32_MIN;
	volatile uint32_t t30 = 11U;

    t30 = (x225*(x226-(x227-x228)));

    if (t30 != 3845728607U) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint64_t x229 = 20983913753817804LLU;
	int16_t x230 = -1053;
	int32_t x231 = -90;
	int32_t x232 = -4443;
	uint64_t t31 = 735756976LLU;

    t31 = (x229*(x230-(x231-x232)));

    if (t31 != 15688170762827812888LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x241 = 239217262U;
	volatile uint32_t x242 = UINT32_MAX;
	volatile uint8_t x244 = UINT8_MAX;
	static volatile uint64_t t32 = 1805969669LLU;

    t32 = (x241*(x242-(x243-x244)));

    if (t32 != 1027413298055775824LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x245 = INT32_MIN;
	int8_t x246 = INT8_MIN;
	uint16_t x247 = 33U;
	uint64_t x248 = 2616130LLU;
	static uint64_t t33 = 14963440LLU;

    t33 = (x245*(x246-(x247-x248)));

    if (t33 != 18441126323058376704LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x249 = INT32_MAX;
	volatile uint16_t x250 = 10515U;
	int16_t x251 = -228;
	volatile uint32_t x252 = UINT32_MAX;
	volatile uint32_t t34 = 1U;

    t34 = (x249*(x250-(x251-x252)));

    if (t34 != 4294956554U) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x253 = -8;
	static volatile uint64_t x255 = UINT64_MAX;
	int64_t x256 = INT64_MAX;
	uint64_t t35 = 426146LLU;

    t35 = (x253*(x254-(x255-x256)));

    if (t35 != 18446743449829751984LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint8_t x257 = 79U;
	volatile uint64_t x259 = 20646888748LLU;
	uint32_t x260 = 48533U;
	uint64_t t36 = 7586650045LLU;

    t36 = (x257*(x258-(x259-x260)));

    if (t36 != 18446742442609174552LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x261 = -1LL;
	uint32_t x262 = 29902760U;
	int64_t x263 = -1LL;
	int32_t x264 = -1;

    t37 = (x261*(x262-(x263-x264)));

    if (t37 != -29902760LL) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x265 = -90;
	int64_t x266 = 22LL;
	uint8_t x267 = 37U;
	static int16_t x268 = INT16_MIN;

    t38 = (x265*(x266-(x267-x268)));

    if (t38 != 2950470LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x281 = INT16_MIN;
	static int64_t x282 = 0LL;
	int16_t x284 = -1;

    t39 = (x281*(x282-(x283-x284)));

    if (t39 != 2439555383296LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x285 = UINT16_MAX;
	int64_t x286 = -1LL;
	int8_t x287 = -6;
	volatile int16_t x288 = -1;
	static int64_t t40 = 6866584LL;

    t40 = (x285*(x286-(x287-x288)));

    if (t40 != 262140LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int64_t x289 = -1LL;
	volatile int32_t x290 = INT32_MIN;
	int64_t x291 = 56LL;
	volatile int8_t x292 = INT8_MAX;
	volatile int64_t t41 = -329789502809LL;

    t41 = (x289*(x290-(x291-x292)));

    if (t41 != 2147483577LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x297 = INT32_MAX;
	volatile int64_t x298 = -477143649LL;
	uint64_t x300 = 3154094962243LLU;
	volatile uint64_t t42 = 171828050056571522LLU;

    t42 = (x297*(x298-(x299-x300)));

    if (t42 != 11610991306024348701LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x301 = 2U;
	static int16_t x302 = -1;
	static int32_t x303 = INT32_MIN;
	int64_t x304 = -146789801468733716LL;
	static int64_t t43 = 781526013915957627LL;

    t43 = (x301*(x302-(x303-x304)));

    if (t43 != -293579598642500138LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint16_t x305 = UINT16_MAX;
	static int8_t x306 = -10;
	static volatile int32_t x307 = INT32_MAX;
	uint32_t x308 = 39316739U;
	uint32_t t44 = 0U;

    t44 = (x305*(x306-(x307-x308)));

    if (t44 != 1789006598U) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x309 = INT32_MIN;
	uint32_t x310 = UINT32_MAX;
	volatile int64_t x311 = 70303208949236995LL;
	uint64_t x312 = 2294932375774870461LLU;
	volatile uint64_t t45 = 116923942431596LLU;

    t45 = (x309*(x310-(x311-x312)));

    if (t45 != 1815307593824862208LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x317 = INT16_MAX;
	int32_t x318 = 1;
	int16_t x320 = INT16_MIN;

    t46 = (x317*(x318-(x319-x320)));

    if (t46 != 32767) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x325 = 351683997949933LL;
	int32_t x326 = INT32_MIN;
	volatile int16_t x327 = -1;
	uint64_t x328 = UINT64_MAX;
	uint64_t t47 = 222704053LLU;

    t47 = (x325*(x326-(x327-x328)));

    if (t47 != 10961005069822066688LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x337 = INT32_MIN;
	static int16_t x339 = INT16_MIN;
	static uint64_t x340 = UINT64_MAX;
	volatile uint64_t t48 = 3791LLU;

    t48 = (x337*(x338-(x339-x340)));

    if (t48 != 18446673578263838720LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x342 = 242;
	uint16_t x343 = 0U;
	static int16_t x344 = -24;

    t49 = (x341*(x342-(x343-x344)));

    if (t49 != 126683506U) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile int16_t x349 = -8;
	static uint8_t x350 = 88U;
	static uint32_t x351 = 382038524U;
	static int16_t x352 = INT16_MIN;
	volatile uint32_t t50 = 324256465U;

    t50 = (x349*(x350-(x351-x352)));

    if (t50 != 3056569632U) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint64_t x353 = UINT64_MAX;
	volatile int16_t x354 = INT16_MAX;
	static volatile int16_t x355 = INT16_MAX;
	int16_t x356 = INT16_MAX;
	static volatile uint64_t t51 = 1595LLU;

    t51 = (x353*(x354-(x355-x356)));

    if (t51 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x363 = UINT64_MAX;
	int16_t x364 = 22;

    t52 = (x361*(x362-(x363-x364)));

    if (t52 != 1072988160LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x365 = -8;
	uint32_t x366 = 16020573U;
	int32_t x367 = -1;
	int64_t x368 = -171241260LL;
	volatile int64_t t53 = -8715LL;

    t53 = (x365*(x366-(x367-x368)));

    if (t53 != 1241765488LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x369 = 486884749123913LLU;
	volatile int64_t x370 = INT64_MAX;
	uint64_t x371 = 1511226121872022LLU;
	uint8_t x372 = UINT8_MAX;
	static volatile uint64_t t54 = 119707LLU;

    t54 = (x369*(x370-(x371-x372)));

    if (t54 != 889811207175836584LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x377 = 2841344543267183LLU;
	volatile int8_t x378 = INT8_MIN;
	uint64_t x379 = UINT64_MAX;
	int8_t x380 = -1;

    t55 = (x377*(x378-(x379-x380)));

    if (t55 != 18083051972171352192LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile uint64_t x381 = UINT64_MAX;
	static int64_t x382 = -1LL;
	static uint32_t x383 = 5881577U;
	int8_t x384 = INT8_MIN;
	volatile uint64_t t56 = 149231469364727LLU;

    t56 = (x381*(x382-(x383-x384)));

    if (t56 != 5881706LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x385 = INT64_MAX;
	int8_t x386 = -1;
	int32_t x387 = -1;
	int64_t t57 = 3574LL;

    t57 = (x385*(x386-(x387-x388)));

    if (t57 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x393 = INT32_MIN;
	volatile int8_t x394 = -1;
	uint32_t x395 = UINT32_MAX;
	int32_t x396 = INT32_MIN;
	volatile uint32_t t58 = 44U;

    t58 = (x393*(x394-(x395-x396)));

    if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint16_t x397 = 176U;
	static int8_t x398 = INT8_MIN;
	static int32_t x399 = -24936;
	static int16_t x400 = -1;
	volatile int32_t t59 = 39691;

    t59 = (x397*(x398-(x399-x400)));

    if (t59 != 4366032) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint8_t x405 = 4U;
	uint32_t x406 = UINT32_MAX;
	volatile int16_t x407 = INT16_MIN;
	static uint32_t t60 = 10504U;

    t60 = (x405*(x406-(x407-x408)));

    if (t60 != 131068U) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x413 = 52;
	uint32_t x414 = UINT32_MAX;
	volatile int8_t x415 = 1;
	static uint16_t x416 = 2U;
	uint32_t t61 = 50862956U;

    t61 = (x413*(x414-(x415-x416)));

    if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x417 = INT16_MAX;
	volatile int16_t x418 = INT16_MIN;
	int64_t x419 = INT64_MAX;
	static uint64_t x420 = UINT64_MAX;
	static uint64_t t62 = 16112LLU;

    t62 = (x417*(x418-(x419-x420)));

    if (t62 != 9223372035781066752LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x433 = INT8_MIN;
	int32_t x434 = INT32_MAX;
	uint8_t x435 = UINT8_MAX;
	uint64_t x436 = 52164693LLU;

    t63 = (x433*(x434-(x435-x436)));

    if (t63 != 18446743792154596736LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x437 = INT16_MIN;
	int8_t x438 = -1;
	static int32_t x439 = -1;
	uint32_t x440 = 14486322U;
	uint32_t t64 = 32168533U;

    t64 = (x437*(x438-(x439-x440)));

    if (t64 != 2053570560U) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint64_t x445 = UINT64_MAX;
	int16_t x447 = 1094;
	volatile uint64_t t65 = 110478510LLU;

    t65 = (x445*(x446-(x447-x448)));

    if (t65 != 88193LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x450 = 32176U;
	volatile uint32_t x451 = 49U;
	int16_t x452 = 173;
	volatile uint32_t t66 = 1099U;

    t66 = (x449*(x450-(x451-x452)));

    if (t66 != 4102100U) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x461 = 288021267LLU;
	uint8_t x463 = 23U;
	int16_t x464 = INT16_MIN;
	uint64_t t67 = 5816948721444LLU;

    t67 = (x461*(x462-(x463-x464)));

    if (t67 != 51496861512580848LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x477 = INT32_MAX;
	int8_t x479 = 0;
	volatile uint64_t x480 = 1LLU;
	uint64_t t68 = 12LLU;

    t68 = (x477*(x478-(x479-x480)));

    if (t68 != 18446743457381744927LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x481 = -1;
	volatile uint16_t x482 = UINT16_MAX;
	uint8_t x483 = UINT8_MAX;
	int16_t x484 = INT16_MIN;
	volatile int32_t t69 = -4210257;

    t69 = (x481*(x482-(x483-x484)));

    if (t69 != -32512) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x489 = 531U;
	static int8_t x490 = INT8_MIN;
	uint64_t t70 = 1770907504175779LLU;

    t70 = (x489*(x490-(x491-x492)));

    if (t70 != 18445523992283769847LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x493 = INT8_MIN;
	int64_t x494 = -1LL;
	uint64_t x495 = UINT64_MAX;
	int64_t x496 = 15754913LL;
	volatile uint64_t t71 = 62999347LLU;

    t71 = (x493*(x494-(x495-x496)));

    if (t71 != 18446744071692922752LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x497 = INT16_MIN;
	int32_t x498 = INT32_MAX;
	int8_t x500 = 7;
	volatile uint64_t t72 = 66276234067169505LLU;

    t72 = (x497*(x498-(x499-x500)));

    if (t72 != 18446674671915696128LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x505 = 40244739;
	volatile int8_t x506 = 25;
	volatile uint64_t x508 = 121738975LLU;
	static volatile uint64_t t73 = 28406LLU;

    t73 = (x505*(x506-(x507-x508)));

    if (t73 != 4899302928834036LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x509 = UINT64_MAX;
	int64_t x510 = -1LL;
	uint64_t x512 = UINT64_MAX;

    t74 = (x509*(x510-(x511-x512)));

    if (t74 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x513 = 6462646LLU;
	int8_t x514 = INT8_MIN;
	uint64_t x515 = 8651319422114LLU;
	int32_t x516 = -1;
	static uint64_t t75 = 1019301LLU;

    t75 = (x513*(x514-(x515-x516)));

    if (t75 != 17876561435957171486LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x517 = 30U;
	static int8_t x518 = -54;
	uint16_t x519 = 16325U;
	int64_t t76 = 4161583LL;

    t76 = (x517*(x518-(x519-x520)));

    if (t76 != -491400LL) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x525 = -2466;
	int8_t x526 = 1;
	volatile uint32_t x527 = 22297588U;
	volatile uint32_t t77 = 23280381U;

    t77 = (x525*(x526-(x527-x528)));

    if (t77 != 3527047878U) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int8_t x530 = -2;
	int32_t x531 = -1;
	int32_t t78 = 60176056;

    t78 = (x529*(x530-(x531-x532)));

    if (t78 != -4088) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x533 = 7;
	uint32_t x534 = 55701090U;
	static uint16_t x535 = UINT16_MAX;
	static uint32_t t79 = 575U;

    t79 = (x533*(x534-(x535-x536)));

    if (t79 != 389450670U) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x537 = 104U;
	uint32_t x538 = 17285U;
	uint64_t x539 = 15511410234LLU;
	int16_t x540 = -1;
	uint64_t t80 = 976LLU;

    t80 = (x537*(x538-(x539-x540)));

    if (t80 != 18446742460524684816LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int64_t x542 = -7867141LL;
	uint64_t x543 = 15986648LLU;
	int32_t x544 = INT32_MIN;
	uint64_t t81 = 8640733LLU;

    t81 = (x541*(x542-(x543-x544)));

    if (t81 != 4662911640247730176LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x545 = -1301LL;
	volatile uint8_t x546 = 0U;
	static int8_t x547 = -1;
	volatile uint64_t t82 = 1911407242745480204LLU;

    t82 = (x545*(x546-(x547-x548)));

    if (t82 != 18446744073709545111LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x550 = -1;
	uint64_t x551 = 27607671LLU;
	uint64_t t83 = 533626585367LLU;

    t83 = (x549*(x550-(x551-x552)));

    if (t83 != 18446744070258592491LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x553 = 1399642895LLU;
	static int32_t x554 = INT32_MAX;
	int64_t x556 = 915636LL;

    t84 = (x553*(x554-(x555-x556)));

    if (t84 != 15442315407079476876LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x561 = INT16_MIN;
	volatile int16_t x563 = -80;
	int32_t x564 = -7767;
	volatile int32_t t85 = 1;

    t85 = (x561*(x562-(x563-x564)));

    if (t85 != 248315904) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint8_t x565 = 3U;
	static uint64_t x567 = 910421278055366072LLU;
	volatile int64_t x568 = INT64_MIN;
	static volatile uint64_t t86 = 81632580205428LLU;

    t86 = (x565*(x566-(x567-x568)));

    if (t86 != 6492108196246226648LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int64_t x569 = -368LL;
	static int16_t x571 = INT16_MIN;
	int32_t x572 = 6014003;
	volatile int64_t t87 = -1LL;

    t87 = (x569*(x570-(x571-x572)));

    if (t87 != -2225213568LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x574 = 117;
	int32_t x575 = INT32_MAX;
	static int64_t x576 = -7849780LL;

    t88 = (x573*(x574-(x575-x576)));

    if (t88 != -4310666620LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x578 = 15U;
	int64_t x579 = INT64_MAX;
	int32_t x580 = INT32_MAX;
	static int64_t t89 = -16512332572911LL;

    t89 = (x577*(x578-(x579-x580)));

    if (t89 != 9223372034707292145LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x585 = -1;
	int8_t x586 = 1;
	int32_t t90 = -466;

    t90 = (x585*(x586-(x587-x588)));

    if (t90 != 5) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x589 = 1;
	uint32_t x590 = 117U;
	static int64_t x592 = -126756814553209223LL;
	int64_t t91 = 487851434544LL;

    t91 = (x589*(x590-(x591-x592)));

    if (t91 != -126756814553176338LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x593 = -1128271;
	volatile uint64_t x594 = UINT64_MAX;
	static int32_t x595 = INT32_MIN;
	volatile int16_t x596 = INT16_MIN;
	volatile uint64_t t92 = 1LLU;

    t92 = (x593*(x594-(x595-x596)));

    if (t92 != 18444321167158851407LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint32_t x605 = 25101U;
	int16_t x606 = 3;
	uint16_t x607 = 19U;
	volatile uint32_t t93 = 427U;

    t93 = (x605*(x606-(x607-x608)));

    if (t93 != 4294540579U) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x617 = INT8_MIN;
	int64_t x618 = -1LL;
	static uint8_t x620 = 10U;

    t94 = (x617*(x618-(x619-x620)));

    if (t94 != 5376LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int8_t x622 = 1;
	static int8_t x623 = INT8_MIN;
	static uint16_t x624 = 410U;
	uint64_t t95 = 5757524LLU;

    t95 = (x621*(x622-(x623-x624)));

    if (t95 != 18446744073709551077LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x625 = INT16_MIN;
	uint16_t x626 = 2U;
	uint64_t x627 = UINT64_MAX;
	uint64_t x628 = 7195202220LLU;
	uint64_t t96 = 668LLU;

    t96 = (x625*(x626-(x627-x628)));

    if (t96 != 18446508301323108352LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	static int64_t x629 = -422598086214LL;
	uint32_t x630 = 191U;
	uint64_t x631 = UINT64_MAX;
	volatile uint64_t x632 = UINT64_MAX;
	static volatile uint64_t t97 = 23127240031866257LLU;

    t97 = (x629*(x630-(x631-x632)));

    if (t97 != 18446663357475084742LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x633 = INT16_MIN;
	int8_t x635 = INT8_MIN;
	volatile int64_t x636 = -1LL;

    t98 = (x633*(x634-(x635-x636)));

    if (t98 != 32768LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x637 = 5U;
	int64_t x638 = -1LL;
	int16_t x640 = INT16_MIN;
	volatile int64_t t99 = -1LL;

    t99 = (x637*(x638-(x639-x640)));

    if (t99 != -491520LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x641 = UINT64_MAX;
	int8_t x644 = 0;
	uint64_t t100 = 63LLU;

    t100 = (x641*(x642-(x643-x644)));

    if (t100 != 65527LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x649 = 1082;
	int8_t x651 = 26;
	int8_t x652 = INT8_MIN;
	volatile int32_t t101 = -27065790;

    t101 = (x649*(x650-(x651-x652)));

    if (t101 != -167710) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x653 = INT32_MAX;
	uint64_t x655 = 116121504554079169LLU;

    t102 = (x653*(x654-(x655-x656)));

    if (t102 != 3368448443209667523LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int16_t x657 = INT16_MIN;
	int8_t x658 = INT8_MIN;
	int64_t x659 = -892160LL;
	uint8_t x660 = 37U;
	volatile int64_t t103 = 6496508976939LL;

    t103 = (x657*(x658-(x659-x660)));

    if (t103 != -29231316992LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x661 = INT32_MIN;
	volatile uint32_t x663 = 76770223U;
	volatile int32_t x664 = -1;
	int64_t t104 = 38617563852026911LL;

    t104 = (x661*(x662-(x663-x664)));

    if (t104 != 164862802840780800LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x666 = INT8_MAX;
	static uint8_t x667 = UINT8_MAX;
	int32_t x668 = -1;
	uint32_t t105 = 564U;

    t105 = (x665*(x666-(x667-x668)));

    if (t105 != 2252418706U) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x669 = -1;
	static int16_t x670 = -1;
	uint8_t x672 = 2U;

    t106 = (x669*(x670-(x671-x672)));

    if (t106 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static int8_t x677 = INT8_MIN;
	uint8_t x680 = 50U;

    t107 = (x677*(x678-(x679-x680)));

    if (t107 != -10112) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint8_t x681 = 15U;
	uint16_t x682 = UINT16_MAX;
	uint16_t x684 = 20778U;

    t108 = (x681*(x682-(x683-x684)));

    if (t108 != 1294710) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x686 = -1289384;
	volatile uint64_t x687 = 1328425547LLU;
	volatile int16_t x688 = INT16_MIN;

    t109 = (x685*(x686-(x687-x688)));

    if (t109 != 18446743734623888371LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x697 = -1LL;
	volatile uint16_t x698 = UINT16_MAX;
	int32_t x700 = INT32_MIN;
	int64_t t110 = 1331335137413LL;

    t110 = (x697*(x698-(x699-x700)));

    if (t110 != -65535LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x706 = INT16_MAX;
	uint64_t x707 = 2571123740501LLU;
	int64_t x708 = INT64_MIN;
	volatile uint64_t t111 = 27LLU;

    t111 = (x705*(x706-(x707-x708)));

    if (t111 != 9223374607978483542LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x709 = INT32_MIN;
	int32_t x710 = INT32_MIN;
	static int8_t x711 = -1;
	static int32_t x712 = INT32_MAX;
	volatile int32_t t112 = 106;

    t112 = (x709*(x710-(x711-x712)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint8_t x713 = 4U;
	volatile int64_t x714 = -1LL;
	volatile int8_t x715 = 57;
	int8_t x716 = -1;
	int64_t t113 = 39874296174087993LL;

    t113 = (x713*(x714-(x715-x716)));

    if (t113 != -236LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x721 = INT64_MAX;
	int32_t x722 = INT32_MIN;
	int64_t x723 = -19009258LL;

    t114 = (x721*(x722-(x723-x724)));

    if (t114 != 2128474390LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint64_t x729 = 3767731LLU;
	uint64_t x730 = 2239613301239444LLU;
	uint8_t x732 = 14U;
	volatile uint64_t t115 = 6725696091008924LLU;

    t115 = (x729*(x730-(x731-x732)));

    if (t115 != 8098421406813461122LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x733 = -7;
	uint16_t x734 = 7U;
	static uint32_t x736 = 1569068153U;
	volatile int64_t t116 = -7265LL;

    t116 = (x733*(x734-(x735-x736)));

    if (t116 != -10983477127LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x737 = INT16_MIN;
	static int64_t x738 = -103LL;
	volatile uint32_t x740 = 36U;
	static int64_t t117 = -215533401625330LL;

    t117 = (x737*(x738-(x739-x740)));

    if (t117 != 140737308164096LL) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x741 = -1;
	volatile uint16_t x742 = 0U;
	static int8_t x744 = INT8_MAX;
	volatile uint64_t t118 = 19777348LLU;

    t118 = (x741*(x742-(x743-x744)));

    if (t118 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x745 = -1;
	uint16_t x746 = 331U;
	static volatile uint32_t x747 = 1744711629U;
	uint8_t x748 = 61U;
	uint32_t t119 = 21247U;

    t119 = (x745*(x746-(x747-x748)));

    if (t119 != 1744711237U) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x749 = INT32_MIN;
	int8_t x750 = 1;
	uint64_t x751 = 85309026128LLU;
	int8_t x752 = 0;
	static volatile uint64_t t120 = 50561402254124719LLU;

    t120 = (x749*(x750-(x751-x752)));

    if (t120 != 17179041971151306752LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x757 = -1;
	int8_t x758 = INT8_MAX;
	int16_t x760 = 1;
	int32_t t121 = -1233;

    t121 = (x757*(x758-(x759-x760)));

    if (t121 != -256) { NG(); } else { ; }
	
}

void f122(void) {
    	static int16_t x769 = INT16_MIN;
	uint64_t x770 = 93770367378777637LLU;
	uint64_t x771 = 1945210385LLU;
	uint16_t x772 = UINT16_MAX;
	volatile uint64_t t122 = 5850323011784761LLU;

    t122 = (x769*(x770-(x771-x772)));

    if (t122 != 7938925780215955456LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x777 = 12U;
	int64_t x779 = 1389370LL;
	static int32_t x780 = INT32_MIN;
	volatile int64_t t123 = -266LL;

    t123 = (x777*(x778-(x779-x780)));

    if (t123 != -51556279992LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x786 = 195U;
	int8_t x787 = -6;
	int16_t x788 = -1;
	volatile int32_t t124 = 63360;

    t124 = (x785*(x786-(x787-x788)));

    if (t124 != 25400) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x789 = 122060336U;
	int16_t x791 = INT16_MAX;
	int64_t x792 = 2157LL;
	volatile int64_t t125 = 42668802212207494LL;

    t125 = (x789*(x790-(x791-x792)));

    if (t125 != -3735900703952LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint32_t x793 = 1815U;
	volatile int32_t x794 = INT32_MIN;
	volatile int8_t x795 = 59;
	int32_t x796 = INT32_MAX;
	volatile uint32_t t126 = 494078937U;

    t126 = (x793*(x794-(x795-x796)));

    if (t126 != 4294858396U) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x797 = INT16_MIN;
	volatile int32_t x798 = -124;
	int32_t x799 = INT32_MAX;

    t127 = (x797*(x798-(x799-x800)));

    if (t127 != 4063232) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x807 = UINT32_MAX;
	uint32_t x808 = UINT32_MAX;
	volatile uint64_t t128 = 227412844896239821LLU;

    t128 = (x805*(x806-(x807-x808)));

    if (t128 != 18446744069414617088LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x809 = 255U;
	uint64_t x810 = UINT64_MAX;
	int8_t x811 = -1;
	volatile int64_t x812 = 1LL;
	volatile uint64_t t129 = 1205173402153643142LLU;

    t129 = (x809*(x810-(x811-x812)));

    if (t129 != 255LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x813 = -22LL;
	static uint32_t x815 = UINT32_MAX;
	volatile int64_t t130 = -496000486793214584LL;

    t130 = (x813*(x814-(x815-x816)));

    if (t130 != -609511332480818108LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x817 = 1U;
	uint8_t x819 = 47U;
	volatile int64_t x820 = 4499197394489636857LL;
	static int64_t t131 = 35LL;

    t131 = (x817*(x818-(x819-x820)));

    if (t131 != 4499197394489624565LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x821 = INT16_MIN;
	uint8_t x822 = 0U;
	int32_t x823 = -1;
	static uint32_t x824 = 25971503U;
	volatile uint32_t t132 = 459269U;

    t132 = (x821*(x822-(x823-x824)));

    if (t132 != 3664248832U) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x826 = -1;
	static volatile int16_t x827 = -7588;
	int8_t x828 = -17;
	volatile int32_t t133 = -3698824;

    t133 = (x825*(x826-(x827-x828)));

    if (t133 != 430475620) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint64_t x829 = 37764364208489LLU;
	int8_t x830 = INT8_MAX;
	volatile int64_t x831 = INT64_MAX;
	volatile int8_t x832 = INT8_MAX;
	volatile uint64_t t134 = 27LLU;

    t134 = (x829*(x830-(x831-x832)));

    if (t134 != 9233001949727940503LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x849 = 0U;
	uint64_t x852 = 1041407145LLU;
	uint64_t t135 = 30LLU;

    t135 = (x849*(x850-(x851-x852)));

    if (t135 != 0LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x857 = UINT64_MAX;
	int64_t x858 = -1LL;
	uint64_t x859 = 180001LLU;
	int16_t x860 = INT16_MIN;
	static uint64_t t136 = 535591563228382510LLU;

    t136 = (x857*(x858-(x859-x860)));

    if (t136 != 212770LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x869 = -1LL;
	int32_t x870 = -1;
	volatile uint16_t x872 = 994U;
	volatile int64_t t137 = -4738LL;

    t137 = (x869*(x870-(x871-x872)));

    if (t137 != -996LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x877 = -3LL;
	int8_t x879 = -1;
	int16_t x880 = -1;

    t138 = (x877*(x878-(x879-x880)));

    if (t138 != 18446744073703584460LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x885 = -1LL;
	int32_t x886 = -1;
	int32_t x887 = -1;
	int64_t x888 = 1752LL;
	volatile int64_t t139 = -1347289981LL;

    t139 = (x885*(x886-(x887-x888)));

    if (t139 != -1752LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static int64_t x902 = -1256060LL;
	int32_t x903 = INT32_MIN;
	uint32_t x904 = UINT32_MAX;
	volatile int64_t t140 = -245362LL;

    t140 = (x901*(x902-(x903-x904)));

    if (t140 != -13700364384584LL) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x905 = 1;
	static uint64_t x906 = 256641LLU;
	volatile int8_t x907 = INT8_MIN;
	int64_t x908 = INT64_MIN;
	uint64_t t141 = 1143403046132LLU;

    t141 = (x905*(x906-(x907-x908)));

    if (t141 != 9223372036855032577LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x914 = 21U;
	uint8_t x915 = UINT8_MAX;
	int32_t x916 = 7766704;

    t142 = (x913*(x914-(x915-x916)));

    if (t142 != 7766470) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x917 = 3186U;
	uint64_t x918 = UINT64_MAX;
	int32_t x919 = -1;
	uint8_t x920 = UINT8_MAX;
	volatile uint64_t t143 = 734041160837772579LLU;

    t143 = (x917*(x918-(x919-x920)));

    if (t143 != 812430LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x925 = 47U;
	static int16_t x926 = 1880;
	volatile int32_t t144 = 47;

    t144 = (x925*(x926-(x927-x928)));

    if (t144 != -551263) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x929 = -1LL;
	uint64_t x930 = 135750903247LLU;
	volatile int32_t x931 = 385;
	uint64_t t145 = 339LLU;

    t145 = (x929*(x930-(x931-x932)));

    if (t145 != 18446743937958648755LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x933 = 3LLU;
	int64_t x934 = -383573891079229457LL;
	int16_t x935 = -4067;
	uint64_t x936 = 7172991373749516679LLU;
	static uint64_t t146 = 7LLU;

    t146 = (x933*(x934-(x935-x936)));

    if (t146 != 1921508374301322251LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x937 = -1;
	int8_t x938 = -1;
	int32_t x939 = INT32_MIN;
	uint64_t x940 = UINT64_MAX;
	static volatile uint64_t t147 = 2027998040LLU;

    t147 = (x937*(x938-(x939-x940)));

    if (t147 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x941 = INT32_MIN;
	uint32_t x942 = 9336U;
	int32_t x943 = 1;
	static int32_t x944 = -2304168;
	uint32_t t148 = 2881U;

    t148 = (x941*(x942-(x943-x944)));

    if (t148 != 2147483648U) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x950 = 10860650LL;
	int32_t x951 = INT32_MIN;
	int32_t x952 = -1;
	int64_t t149 = -13027013332LL;

    t149 = (x949*(x950-(x951-x952)));

    if (t149 != 4635009082403211159LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x953 = INT16_MIN;
	volatile int16_t x954 = 1013;
	int16_t x955 = -1;
	int16_t x956 = INT16_MIN;
	volatile int32_t t150 = -320;

    t150 = (x953*(x954-(x955-x956)));

    if (t150 != 1040515072) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x965 = 46U;
	int8_t x966 = -31;
	static uint64_t x967 = 5694355367LLU;
	int8_t x968 = -1;
	static uint64_t t151 = 223843987789LLU;

    t151 = (x965*(x966-(x967-x968)));

    if (t151 != 18446743811769203262LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x971 = INT16_MIN;
	int32_t x972 = INT32_MIN;
	volatile int64_t t152 = 1085LL;

    t152 = (x969*(x970-(x971-x972)));

    if (t152 != -30064312334LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x977 = 12U;
	uint32_t x978 = UINT32_MAX;
	volatile int32_t x979 = -1;
	int16_t x980 = INT16_MIN;

    t153 = (x977*(x978-(x979-x980)));

    if (t153 != 4294574080U) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x981 = -1;
	static int64_t x982 = -1LL;
	static volatile int16_t x984 = 5311;
	volatile int64_t t154 = 274746401842LL;

    t154 = (x981*(x982-(x983-x984)));

    if (t154 != -5304LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x985 = INT16_MIN;
	static int8_t x986 = 0;
	volatile int16_t x987 = INT16_MIN;
	int8_t x988 = 1;
	static int32_t t155 = 7984;

    t155 = (x985*(x986-(x987-x988)));

    if (t155 != -1073774592) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x989 = 2LLU;
	volatile int8_t x990 = -1;
	volatile uint64_t t156 = 181903175524221LLU;

    t156 = (x989*(x990-(x991-x992)));

    if (t156 != 7827570820LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x993 = -1LL;
	static uint64_t x994 = 311347861516491798LLU;
	static uint8_t x995 = 26U;
	uint64_t x996 = UINT64_MAX;
	volatile uint64_t t157 = 2907LLU;

    t157 = (x993*(x994-(x995-x996)));

    if (t157 != 18135396212193059845LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x997 = INT32_MIN;
	uint32_t x998 = UINT32_MAX;
	int16_t x999 = 102;
	int8_t x1000 = INT8_MIN;
	volatile uint32_t t158 = 539U;

    t158 = (x997*(x998-(x999-x1000)));

    if (t158 != 2147483648U) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x1001 = UINT64_MAX;
	int8_t x1002 = -1;
	static int8_t x1003 = 0;
	volatile int16_t x1004 = -467;
	static uint64_t t159 = 9277206698287075LLU;

    t159 = (x1001*(x1002-(x1003-x1004)));

    if (t159 != 468LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x1006 = 12LLU;
	int32_t x1007 = -204;
	volatile uint64_t t160 = 10423268465LLU;

    t160 = (x1005*(x1006-(x1007-x1008)));

    if (t160 != 15986134474LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile uint8_t x1021 = UINT8_MAX;
	static volatile uint32_t x1022 = 1037602U;
	int8_t x1023 = INT8_MIN;
	static int8_t x1024 = -1;
	volatile uint32_t t161 = 960U;

    t161 = (x1021*(x1022-(x1023-x1024)));

    if (t161 != 264620895U) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x1025 = INT8_MIN;
	int64_t x1026 = -1LL;
	volatile uint8_t x1027 = 2U;
	int32_t x1028 = -65315759;
	int64_t t162 = 3784068LL;

    t162 = (x1025*(x1026-(x1027-x1028)));

    if (t162 != 8360417536LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x1033 = 1U;
	int16_t x1034 = 50;
	int16_t x1035 = INT16_MIN;
	volatile uint64_t x1036 = 586461001446851109LLU;
	uint64_t t163 = 211115448827LLU;

    t163 = (x1033*(x1034-(x1035-x1036)));

    if (t163 != 586461001446883927LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x1038 = UINT32_MAX;
	int32_t x1039 = -139835915;
	uint32_t t164 = 5671304U;

    t164 = (x1037*(x1038-(x1039-x1040)));

    if (t164 != 1697931044U) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x1041 = 34116848512134867LLU;
	static int8_t x1042 = -1;
	static uint64_t x1043 = 11056130360LLU;
	int16_t x1044 = 1;

    t165 = (x1041*(x1042-(x1043-x1044)));

    if (t165 != 7915507013368870616LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x1046 = -6LL;
	volatile uint64_t x1047 = UINT64_MAX;
	uint64_t t166 = 66480422916LLU;

    t166 = (x1045*(x1046-(x1047-x1048)));

    if (t166 != 9223372036854789643LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x1053 = 69321;
	uint64_t x1054 = 57154656104226LLU;
	int32_t x1055 = 32;
	int64_t x1056 = INT64_MAX;
	volatile uint64_t t167 = 369LLU;

    t167 = (x1053*(x1054-(x1055-x1056)));

    if (t167 != 13185389952653538761LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x1057 = 1;
	static uint8_t x1058 = 14U;
	uint16_t x1059 = UINT16_MAX;
	uint64_t x1060 = UINT64_MAX;
	static volatile uint64_t t168 = 6405192498998LLU;

    t168 = (x1057*(x1058-(x1059-x1060)));

    if (t168 != 18446744073709486094LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x1061 = 0;
	static int8_t x1062 = INT8_MIN;
	volatile int16_t x1063 = INT16_MIN;
	volatile uint8_t x1064 = UINT8_MAX;
	static int32_t t169 = 221927;

    t169 = (x1061*(x1062-(x1063-x1064)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x1069 = UINT64_MAX;
	uint8_t x1070 = 0U;
	volatile int64_t x1071 = -1LL;
	uint64_t t170 = 1100265226940573803LLU;

    t170 = (x1069*(x1070-(x1071-x1072)));

    if (t170 != 127LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x1081 = UINT64_MAX;
	uint32_t x1082 = 52U;
	static int64_t x1083 = INT64_MAX;
	int16_t x1084 = 2;
	static uint64_t t171 = 438140300LLU;

    t171 = (x1081*(x1082-(x1083-x1084)));

    if (t171 != 9223372036854775753LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x1094 = UINT8_MAX;
	static int16_t x1095 = -2;
	int8_t x1096 = INT8_MIN;

    t172 = (x1093*(x1094-(x1095-x1096)));

    if (t172 != -129) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x1101 = -1LL;
	int32_t x1102 = INT32_MIN;
	uint64_t x1103 = 20843217LLU;
	uint64_t t173 = 4992265801174486LLU;

    t173 = (x1101*(x1102-(x1103-x1104)));

    if (t173 != 2168359633LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x1118 = INT16_MIN;
	static uint16_t x1119 = 4U;
	int64_t x1120 = 7345834LL;
	int64_t t174 = 0LL;

    t174 = (x1117*(x1118-(x1119-x1120)));

    if (t174 != 2354805964LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x1125 = -3LL;
	uint16_t x1126 = 1285U;
	volatile uint32_t x1127 = 8128156U;
	int8_t x1128 = -39;
	volatile int64_t t175 = -105868658456LL;

    t175 = (x1125*(x1126-(x1127-x1128)));

    if (t175 != -12860521158LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x1129 = UINT8_MAX;
	static volatile uint16_t x1131 = 691U;
	int32_t x1132 = -1;

    t176 = (x1129*(x1130-(x1131-x1132)));

    if (t176 != -8532300) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x1133 = 0;
	volatile int32_t x1134 = INT32_MIN;
	int8_t x1135 = INT8_MIN;
	uint32_t x1136 = 232400U;
	static volatile uint32_t t177 = 596660285U;

    t177 = (x1133*(x1134-(x1135-x1136)));

    if (t177 != 0U) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x1137 = UINT8_MAX;
	static volatile int64_t x1138 = INT64_MIN;
	int8_t x1139 = INT8_MAX;
	uint64_t x1140 = UINT64_MAX;
	volatile uint64_t t178 = 3402LLU;

    t178 = (x1137*(x1138-(x1139-x1140)));

    if (t178 != 9223372036854743168LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x1141 = 0;
	uint16_t x1142 = 28U;
	uint16_t x1143 = UINT16_MAX;
	volatile uint8_t x1144 = UINT8_MAX;
	static int32_t t179 = -54677;

    t179 = (x1141*(x1142-(x1143-x1144)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x1150 = UINT64_MAX;
	static int32_t x1151 = -1;
	volatile uint16_t x1152 = 0U;
	uint64_t t180 = 27628740981629LLU;

    t180 = (x1149*(x1150-(x1151-x1152)));

    if (t180 != 0LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x1153 = 30366688LL;
	int64_t x1154 = -1LL;
	int8_t x1155 = INT8_MAX;
	static volatile int64_t t181 = -4353821783115063332LL;

    t181 = (x1153*(x1154-(x1155-x1156)));

    if (t181 != 5951870848LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x1165 = INT8_MIN;
	uint64_t x1166 = 59533LLU;
	int16_t x1167 = -1;
	int8_t x1168 = -11;
	uint64_t t182 = 258639370381778LLU;

    t182 = (x1165*(x1166-(x1167-x1168)));

    if (t182 != 18446744073701932672LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x1169 = 44U;
	static volatile uint16_t x1170 = 60U;
	uint8_t x1171 = 1U;
	int32_t t183 = -23455;

    t183 = (x1169*(x1170-(x1171-x1172)));

    if (t183 != 2552) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x1182 = INT64_MIN;
	uint16_t x1183 = 55U;
	uint64_t x1184 = 109LLU;
	uint64_t t184 = 50165585255LLU;

    t184 = (x1181*(x1182-(x1183-x1184)));

    if (t184 != 9223372036854775754LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x1186 = -1;
	uint8_t x1188 = 0U;
	volatile int32_t t185 = 25;

    t185 = (x1185*(x1186-(x1187-x1188)));

    if (t185 != -10) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x1189 = INT32_MIN;
	static int16_t x1190 = 29;
	int8_t x1191 = -1;
	volatile uint64_t x1192 = 92418176417LLU;
	static volatile uint64_t t186 = 1315520042LLU;

    t186 = (x1189*(x1190-(x1191-x1192)));

    if (t186 != 4447662112893829120LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x1194 = INT16_MIN;
	volatile int8_t x1195 = -1;
	int16_t x1196 = -1;
	int32_t t187 = -22;

    t187 = (x1193*(x1194-(x1195-x1196)));

    if (t187 != -98304) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint64_t x1205 = 5607LLU;
	static int16_t x1206 = -1;
	int64_t x1207 = -19475LL;
	int64_t x1208 = INT64_MIN;
	uint64_t t188 = 18397805908LLU;

    t188 = (x1205*(x1206-(x1207-x1208)));

    if (t188 != 9223372036963966526LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint16_t x1209 = 76U;
	int8_t x1210 = 1;
	int16_t x1211 = INT16_MIN;
	int16_t x1212 = -1;
	static int32_t t189 = 159;

    t189 = (x1209*(x1210-(x1211-x1212)));

    if (t189 != 2490368) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint16_t x1213 = UINT16_MAX;
	volatile uint64_t x1214 = UINT64_MAX;
	int32_t x1215 = 8738;
	int8_t x1216 = INT8_MAX;

    t190 = (x1213*(x1214-(x1215-x1216)));

    if (t190 != 18446744073145164196LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x1221 = -1;
	int8_t x1222 = INT8_MIN;
	int64_t x1223 = -211441713LL;
	volatile int64_t t191 = 1367251679610584664LL;

    t191 = (x1221*(x1222-(x1223-x1224)));

    if (t191 != -211474352LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint64_t x1225 = 51LLU;
	static int32_t x1226 = -1;
	static volatile int8_t x1227 = INT8_MIN;
	static int32_t x1228 = INT32_MIN;

    t192 = (x1225*(x1226-(x1227-x1228)));

    if (t192 != 18446743964187892045LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x1230 = INT32_MAX;
	int64_t x1232 = -1LL;

    t193 = (x1229*(x1230-(x1231-x1232)));

    if (t193 != 3614294422839582444LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x1238 = 1504189062575LLU;
	int64_t x1239 = 16243581943873937LL;
	int8_t x1240 = INT8_MIN;
	uint64_t t194 = 6543944305958128LLU;

    t194 = (x1237*(x1238-(x1239-x1240)));

    if (t194 != 16242077754811490LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x1242 = UINT32_MAX;
	int32_t x1243 = INT32_MAX;
	uint32_t t195 = 20206U;

    t195 = (x1241*(x1242-(x1243-x1244)));

    if (t195 != 2148794348U) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x1246 = 1336636761LLU;
	int8_t x1247 = -1;
	int64_t x1248 = INT64_MIN;
	static volatile uint64_t t196 = 48494444992136868LLU;

    t196 = (x1245*(x1246-(x1247-x1248)));

    if (t196 != 9223415834431556262LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x1251 = INT64_MIN;
	volatile uint64_t t197 = 376942LLU;

    t197 = (x1249*(x1250-(x1251-x1252)));

    if (t197 != 18446744073701163264LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static int32_t x1253 = -2748;
	static int16_t x1254 = INT16_MIN;
	volatile int32_t x1255 = INT32_MAX;
	volatile int64_t t198 = -11935756392753552LL;

    t198 = (x1253*(x1254-(x1255-x1256)));

    if (t198 != 5901375111168LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static int64_t x1261 = INT64_MIN;
	uint64_t x1262 = 2562104822420804LLU;
	static int64_t x1264 = -1LL;
	uint64_t t199 = 19LLU;

    t199 = (x1261*(x1262-(x1263-x1264)));

    if (t199 != 9223372036854775808LLU) { NG(); } else { ; }
	
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

