
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

int64_t x4 = -1LL;
uint8_t x8 = 68U;
volatile int16_t x12 = 8;
volatile int32_t t2 = -1151259;
volatile int64_t x16 = -167692634824281557LL;
volatile int64_t t4 = -1LL;
volatile int64_t x31 = INT64_MIN;
int8_t x33 = INT8_MIN;
static int64_t x36 = INT64_MIN;
volatile uint64_t x40 = 15284LLU;
int16_t x45 = INT16_MIN;
int8_t x48 = 1;
uint8_t x62 = UINT8_MAX;
int16_t x63 = 1854;
int64_t t12 = -1997359LL;
volatile uint32_t x65 = 4926U;
int64_t x80 = INT64_MIN;
static int32_t x84 = -1;
int64_t t17 = 2363253906222183470LL;
int32_t t19 = -40987369;
int64_t x109 = INT64_MAX;
static volatile int64_t t22 = -2382LL;
uint8_t x114 = 1U;
volatile int64_t x116 = 716584LL;
uint8_t x118 = 59U;
static uint8_t x134 = 56U;
static int8_t x135 = -1;
int8_t x152 = INT8_MAX;
volatile int64_t t31 = 237LL;
uint32_t x165 = UINT32_MAX;
static int32_t x167 = 186795339;
int32_t x170 = INT32_MIN;
volatile int8_t x178 = INT8_MIN;
volatile uint8_t x182 = 7U;
static uint8_t x188 = 73U;
volatile int64_t x198 = -5951LL;
static volatile int64_t t38 = 91199LL;
uint64_t t40 = 385797373389908909LLU;
int32_t x212 = 1061;
uint8_t x216 = 9U;
uint64_t t42 = 263LLU;
int16_t x227 = -1;
uint8_t x236 = 10U;
uint16_t x243 = UINT16_MAX;
int8_t x245 = -1;
int16_t x247 = -3446;
uint64_t x250 = 7616620LLU;
volatile int32_t t52 = 3703;
static int64_t x273 = INT64_MAX;
int8_t x279 = INT8_MIN;
volatile int32_t x282 = INT32_MAX;
uint64_t t57 = 6LLU;
int16_t x290 = 10;
int16_t x295 = 0;
uint8_t x296 = 2U;
int16_t x297 = -408;
static int32_t x299 = INT32_MIN;
uint16_t x306 = UINT16_MAX;
int8_t x309 = -1;
int16_t x311 = -65;
int32_t x314 = -1;
static int64_t x323 = INT64_MIN;
int16_t x335 = INT16_MIN;
int64_t x337 = 26972040799919LL;
int64_t t76 = 764676273LL;
int16_t x378 = INT16_MIN;
volatile int16_t x380 = INT16_MAX;
int64_t x382 = -566345450LL;
int64_t x383 = -379975735LL;
int64_t x384 = INT64_MIN;
int16_t x386 = -1;
int32_t x388 = INT32_MIN;
volatile int32_t x389 = INT32_MIN;
int8_t x390 = INT8_MIN;
volatile int64_t x400 = -1LL;
static uint32_t x405 = 502163U;
uint32_t t85 = 1U;
int64_t x413 = 8658493LL;
int64_t x426 = INT64_MIN;
volatile uint32_t x428 = UINT32_MAX;
int32_t x440 = 1444342;
int8_t x447 = -1;
uint32_t x448 = UINT32_MAX;
static uint64_t x450 = 445362397343LLU;
int8_t x451 = 1;
uint32_t x459 = 1299U;
static volatile int8_t x472 = INT8_MIN;
uint64_t x473 = UINT64_MAX;
int32_t x475 = 49;
int64_t x486 = 11163LL;
volatile int64_t t102 = -3348272033550755LL;
volatile uint32_t x492 = 840713U;
uint64_t x507 = 36106332351304233LLU;
int32_t t106 = -68;
int64_t t108 = -1646522262LL;
int8_t x517 = -1;
int16_t x520 = -1;
static int32_t t109 = 215;
int8_t x521 = INT8_MAX;
uint32_t x523 = UINT32_MAX;
uint16_t x524 = UINT16_MAX;
static volatile int64_t t110 = 12183814211LL;
int8_t x525 = 0;
int8_t x528 = -4;
int32_t t112 = -160;
static uint8_t x535 = 26U;
int32_t x536 = INT32_MAX;
int32_t t113 = 1414078;
int64_t x545 = INT64_MIN;
uint64_t x546 = 29143LLU;
volatile uint16_t x552 = UINT16_MAX;
static int32_t t115 = 2328;
int64_t t116 = 138387LL;
volatile uint8_t x562 = 24U;
int8_t x567 = INT8_MIN;
int16_t x569 = 3;
int32_t x575 = -1;
int64_t x579 = INT64_MIN;
int32_t t122 = 13636;
int16_t x584 = INT16_MAX;
static volatile uint64_t t123 = 201LLU;
uint32_t x586 = 85249775U;
static int8_t x587 = INT8_MIN;
static int16_t x591 = 1;
static int32_t x592 = 17;
uint32_t x601 = 0U;
int8_t x617 = -39;
static volatile int32_t x619 = INT32_MIN;
static uint64_t x620 = 123268059066LLU;
volatile int32_t t130 = -858132213;
static volatile uint64_t x621 = UINT64_MAX;
int16_t x622 = INT16_MAX;
int32_t x624 = -1;
int32_t x628 = INT32_MIN;
static uint16_t x630 = 3U;
uint32_t x642 = 430U;
int32_t x653 = INT32_MAX;
int32_t x654 = 53222483;
int16_t x657 = 2035;
static int64_t x660 = INT64_MIN;
uint64_t x669 = 1646LLU;
uint64_t t142 = 3LLU;
static int32_t x675 = -1;
uint32_t x680 = 3U;
static int8_t x682 = INT8_MAX;
volatile int32_t t145 = -85727;
int16_t x685 = 5;
int16_t x687 = INT16_MIN;
uint16_t x692 = 1472U;
static int32_t t147 = -45942;
static int32_t x703 = -3;
volatile int64_t t149 = 3304399360802542LL;
static uint64_t x714 = 2011925278LLU;
volatile uint64_t t151 = 1446429608LLU;
int8_t x721 = -1;
uint8_t x724 = UINT8_MAX;
int64_t t153 = INT64_MIN;
int64_t x736 = INT64_MIN;
int32_t t156 = 30074780;
uint16_t x737 = UINT16_MAX;
uint64_t x738 = 493229477922LLU;
uint64_t t157 = 1742LLU;
uint16_t x750 = 3350U;
uint64_t x755 = 13288LLU;
int64_t x760 = -33LL;
static int8_t x764 = INT8_MIN;
volatile int64_t x769 = INT64_MIN;
int32_t x771 = 8;
int16_t x774 = -8536;
uint64_t x783 = 430717270773526LLU;
static uint64_t x786 = 163206162734466LLU;
int16_t x790 = -1;
int16_t x792 = INT16_MAX;
uint8_t x795 = 41U;
int8_t x809 = INT8_MIN;
static volatile int8_t x817 = INT8_MIN;
uint64_t x824 = 2252244939366196867LLU;
volatile int32_t t175 = -8004954;
int32_t x826 = 6592;
volatile int32_t t176 = -50;
int16_t x831 = INT16_MIN;
uint32_t x840 = 6580950U;
volatile uint16_t x841 = 14U;
uint32_t x842 = UINT32_MAX;
int16_t x848 = INT16_MIN;
volatile uint16_t x849 = 11986U;
volatile int8_t x861 = INT8_MAX;
static int64_t x863 = INT64_MIN;
int64_t t186 = -3801683526598060LL;
uint32_t x869 = 3604U;
int16_t x870 = INT16_MIN;
volatile uint8_t x887 = UINT8_MAX;
volatile int8_t x889 = -1;
int8_t x890 = INT8_MIN;
volatile int64_t t193 = 1LL;
int16_t x901 = INT16_MAX;
uint8_t x903 = 4U;
int8_t x904 = INT8_MIN;
int8_t x905 = INT8_MIN;
int64_t x907 = INT64_MAX;
volatile uint32_t t196 = 89690U;
int8_t x911 = INT8_MIN;
int16_t x919 = INT16_MIN;
int16_t x920 = 15;


void f0(void) {
    	int8_t x1 = -1;
	uint64_t x2 = 10301219691339730LLU;
	uint16_t x3 = UINT16_MAX;
	static uint64_t t0 = 6LLU;

    t0 = (x1-(x2^(x3>x4)));

    if (t0 != 18436442854018211884LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x5 = INT32_MIN;
	volatile int64_t x6 = 1548438096085696604LL;
	volatile int64_t x7 = -260119561083698LL;
	int64_t t1 = -69850830312LL;

    t1 = (x5-(x6^(x7>x8)));

    if (t1 != -1548438098233180252LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x9 = -1;
	volatile int8_t x10 = INT8_MIN;
	uint64_t x11 = 120997LLU;

    t2 = (x9-(x10^(x11>x12)));

    if (t2 != 126) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x13 = INT8_MAX;
	static int8_t x14 = -1;
	static int16_t x15 = INT16_MAX;
	int32_t t3 = 93636516;

    t3 = (x13-(x14^(x15>x16)));

    if (t3 != 129) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x25 = -20139442778746LL;
	uint8_t x26 = 0U;
	uint16_t x27 = UINT16_MAX;
	static int64_t x28 = 12192LL;

    t4 = (x25-(x26^(x27>x28)));

    if (t4 != -20139442778747LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint32_t x29 = 5399597U;
	uint16_t x30 = UINT16_MAX;
	uint16_t x32 = 257U;
	uint32_t t5 = 13670988U;

    t5 = (x29-(x30^(x31>x32)));

    if (t5 != 5334062U) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x34 = -3649;
	int32_t x35 = 0;
	volatile int32_t t6 = -1808;

    t6 = (x33-(x34^(x35>x36)));

    if (t6 != 3522) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x37 = 1759;
	static uint8_t x38 = UINT8_MAX;
	uint8_t x39 = 40U;
	volatile int32_t t7 = -378381;

    t7 = (x37-(x38^(x39>x40)));

    if (t7 != 1504) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint32_t x46 = UINT32_MAX;
	int64_t x47 = INT64_MAX;
	uint32_t t8 = 2U;

    t8 = (x45-(x46^(x47>x48)));

    if (t8 != 4294934530U) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x49 = -94823846;
	uint8_t x50 = UINT8_MAX;
	uint16_t x51 = 2549U;
	int32_t x52 = INT32_MIN;
	volatile int32_t t9 = -363;

    t9 = (x49-(x50^(x51>x52)));

    if (t9 != -94824100) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x53 = -16;
	volatile int16_t x54 = -1;
	int8_t x55 = INT8_MIN;
	volatile uint8_t x56 = 2U;
	static volatile int32_t t10 = -3542278;

    t10 = (x53-(x54^(x55>x56)));

    if (t10 != -15) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint8_t x57 = 40U;
	uint32_t x58 = UINT32_MAX;
	int64_t x59 = -1LL;
	int8_t x60 = INT8_MAX;
	static volatile uint32_t t11 = 90U;

    t11 = (x57-(x58^(x59>x60)));

    if (t11 != 41U) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x61 = -37483452838LL;
	int16_t x64 = -22;

    t12 = (x61-(x62^(x63>x64)));

    if (t12 != -37483453092LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x66 = UINT8_MAX;
	uint8_t x67 = UINT8_MAX;
	static int32_t x68 = INT32_MIN;
	uint32_t t13 = 0U;

    t13 = (x65-(x66^(x67>x68)));

    if (t13 != 4672U) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int16_t x73 = INT16_MIN;
	volatile int16_t x74 = 475;
	int64_t x75 = -1LL;
	uint64_t x76 = 458094107918933595LLU;
	static volatile int32_t t14 = 3481;

    t14 = (x73-(x74^(x75>x76)));

    if (t14 != -33242) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int16_t x77 = INT16_MIN;
	static int32_t x78 = INT32_MIN;
	int16_t x79 = INT16_MIN;
	int32_t t15 = 0;

    t15 = (x77-(x78^(x79>x80)));

    if (t15 != 2147450879) { NG(); } else { ; }
	
}

void f16(void) {
    	static int64_t x81 = 37185315301LL;
	static uint64_t x82 = 14LLU;
	uint32_t x83 = 33549032U;
	uint64_t t16 = 5735477797825LLU;

    t16 = (x81-(x82^(x83>x84)));

    if (t16 != 37185315287LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x89 = -5404440318366LL;
	uint16_t x90 = UINT16_MAX;
	int64_t x91 = -1LL;
	int32_t x92 = -1;

    t17 = (x89-(x90^(x91>x92)));

    if (t17 != -5404440383901LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x93 = -1;
	volatile int32_t x94 = 551728;
	volatile int64_t x95 = -1055120LL;
	uint32_t x96 = UINT32_MAX;
	int32_t t18 = -3194;

    t18 = (x93-(x94^(x95>x96)));

    if (t18 != -551729) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x97 = -1;
	int16_t x98 = INT16_MAX;
	int64_t x99 = 951LL;
	int16_t x100 = -23;

    t19 = (x97-(x98^(x99>x100)));

    if (t19 != -32767) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x101 = INT16_MIN;
	int16_t x102 = INT16_MIN;
	volatile int64_t x103 = INT64_MAX;
	uint32_t x104 = 92U;
	int32_t t20 = -851577075;

    t20 = (x101-(x102^(x103>x104)));

    if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x105 = INT32_MIN;
	int64_t x106 = -1532LL;
	int8_t x107 = INT8_MAX;
	uint32_t x108 = 535847321U;
	volatile int64_t t21 = 218895LL;

    t21 = (x105-(x106^(x107>x108)));

    if (t21 != -2147482116LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x110 = INT64_MAX;
	uint32_t x111 = 7699U;
	int8_t x112 = INT8_MAX;

    t22 = (x109-(x110^(x111>x112)));

    if (t22 != 1LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x113 = 493816228652LLU;
	int64_t x115 = -16586206143639440LL;
	volatile uint64_t t23 = 46995515003952LLU;

    t23 = (x113-(x114^(x115>x116)));

    if (t23 != 493816228651LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x117 = 3001547U;
	volatile int16_t x119 = 110;
	int16_t x120 = INT16_MIN;
	uint32_t t24 = 75U;

    t24 = (x117-(x118^(x119>x120)));

    if (t24 != 3001489U) { NG(); } else { ; }
	
}

void f25(void) {
    	static int64_t x121 = -2063945729549074250LL;
	int16_t x122 = INT16_MIN;
	volatile uint32_t x123 = UINT32_MAX;
	uint16_t x124 = UINT16_MAX;
	volatile int64_t t25 = 69098257781LL;

    t25 = (x121-(x122^(x123>x124)));

    if (t25 != -2063945729549041483LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint16_t x125 = 285U;
	static int16_t x126 = INT16_MAX;
	volatile int16_t x127 = -1;
	int32_t x128 = INT32_MIN;
	volatile int32_t t26 = 9;

    t26 = (x125-(x126^(x127>x128)));

    if (t26 != -32481) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint16_t x133 = UINT16_MAX;
	int8_t x136 = INT8_MIN;
	volatile int32_t t27 = -3414;

    t27 = (x133-(x134^(x135>x136)));

    if (t27 != 65478) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int64_t x137 = -6LL;
	int64_t x138 = -1LL;
	static int16_t x139 = -1;
	int16_t x140 = INT16_MIN;
	int64_t t28 = -69515LL;

    t28 = (x137-(x138^(x139>x140)));

    if (t28 != -4LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x145 = 13200829U;
	int16_t x146 = INT16_MAX;
	int32_t x147 = -1;
	int64_t x148 = INT64_MAX;
	static volatile uint32_t t29 = 244493U;

    t29 = (x145-(x146^(x147>x148)));

    if (t29 != 13168062U) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x149 = 3;
	volatile int8_t x150 = -47;
	uint16_t x151 = 127U;
	static volatile int32_t t30 = -14945360;

    t30 = (x149-(x150^(x151>x152)));

    if (t30 != 50) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x161 = -1241LL;
	static int8_t x162 = -35;
	static int32_t x163 = -1;
	static uint8_t x164 = UINT8_MAX;

    t31 = (x161-(x162^(x163>x164)));

    if (t31 != -1206LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x166 = -1;
	int64_t x168 = INT64_MIN;
	static uint32_t t32 = 1224678835U;

    t32 = (x165-(x166^(x167>x168)));

    if (t32 != 1U) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x169 = UINT64_MAX;
	static int8_t x171 = INT8_MIN;
	int64_t x172 = -1LL;
	volatile uint64_t t33 = 3705048919962956662LLU;

    t33 = (x169-(x170^(x171>x172)));

    if (t33 != 2147483647LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint8_t x173 = 2U;
	int8_t x174 = -14;
	int8_t x175 = 1;
	int8_t x176 = 18;
	volatile int32_t t34 = 156503;

    t34 = (x173-(x174^(x175>x176)));

    if (t34 != 16) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x177 = 7U;
	int32_t x179 = -1;
	volatile int8_t x180 = -21;
	volatile int32_t t35 = -1;

    t35 = (x177-(x178^(x179>x180)));

    if (t35 != 134) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x181 = 0U;
	static int16_t x183 = -1;
	static int32_t x184 = -1;
	volatile uint32_t t36 = 1U;

    t36 = (x181-(x182^(x183>x184)));

    if (t36 != 4294967289U) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x185 = -211;
	uint8_t x186 = 15U;
	int16_t x187 = -81;
	volatile int32_t t37 = -20590;

    t37 = (x185-(x186^(x187>x188)));

    if (t37 != -226) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint8_t x197 = UINT8_MAX;
	int16_t x199 = -1;
	int8_t x200 = INT8_MIN;

    t38 = (x197-(x198^(x199>x200)));

    if (t38 != 6207LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint64_t x201 = 127634281985001LLU;
	static int16_t x202 = 1;
	int32_t x203 = INT32_MAX;
	uint16_t x204 = UINT16_MAX;
	volatile uint64_t t39 = 3676267LLU;

    t39 = (x201-(x202^(x203>x204)));

    if (t39 != 127634281985001LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint16_t x205 = UINT16_MAX;
	volatile uint64_t x206 = 8786403629380LLU;
	uint16_t x207 = 1535U;
	int64_t x208 = INT64_MIN;

    t40 = (x205-(x206^(x207>x208)));

    if (t40 != 18446735287305987770LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x209 = INT32_MAX;
	int64_t x210 = 134LL;
	int8_t x211 = -1;
	int64_t t41 = -77788LL;

    t41 = (x209-(x210^(x211>x212)));

    if (t41 != 2147483513LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x213 = 2160966379LLU;
	static int8_t x214 = -1;
	int64_t x215 = -1LL;

    t42 = (x213-(x214^(x215>x216)));

    if (t42 != 2160966380LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x217 = UINT8_MAX;
	uint8_t x218 = 13U;
	uint64_t x219 = 246LLU;
	uint16_t x220 = UINT16_MAX;
	int32_t t43 = 201;

    t43 = (x217-(x218^(x219>x220)));

    if (t43 != 242) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x225 = -6LL;
	int16_t x226 = INT16_MIN;
	uint32_t x228 = UINT32_MAX;
	int64_t t44 = 495LL;

    t44 = (x225-(x226^(x227>x228)));

    if (t44 != 32762LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x229 = INT32_MIN;
	static int32_t x230 = 0;
	int32_t x231 = 2513;
	int16_t x232 = 7770;
	int32_t t45 = INT32_MIN;

    t45 = (x229-(x230^(x231>x232)));

    if (t45 != INT32_MIN) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x233 = 706850545127LLU;
	uint64_t x234 = 18320201666703757LLU;
	uint8_t x235 = 72U;
	uint64_t t46 = 124664925193405621LLU;

    t46 = (x233-(x234^(x235>x236)));

    if (t46 != 18428424578893392987LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x237 = -1LL;
	int32_t x238 = INT32_MAX;
	static uint64_t x239 = UINT64_MAX;
	int32_t x240 = INT32_MIN;
	volatile int64_t t47 = 75822688232LL;

    t47 = (x237-(x238^(x239>x240)));

    if (t47 != -2147483647LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x241 = INT32_MIN;
	volatile int32_t x242 = -46216;
	volatile uint32_t x244 = 0U;
	int32_t t48 = 50151;

    t48 = (x241-(x242^(x243>x244)));

    if (t48 != -2147437433) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x246 = INT32_MIN;
	int64_t x248 = INT64_MIN;
	volatile int32_t t49 = 460;

    t49 = (x245-(x246^(x247>x248)));

    if (t49 != 2147483646) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x249 = -9;
	uint8_t x251 = 53U;
	uint8_t x252 = 11U;
	volatile uint64_t t50 = 12939158102478LLU;

    t50 = (x249-(x250^(x251>x252)));

    if (t50 != 18446744073701934986LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x253 = -31;
	int16_t x254 = INT16_MIN;
	int8_t x255 = 39;
	int16_t x256 = INT16_MAX;
	int32_t t51 = 142819466;

    t51 = (x253-(x254^(x255>x256)));

    if (t51 != 32737) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x261 = -9782;
	volatile int8_t x262 = INT8_MIN;
	uint16_t x263 = UINT16_MAX;
	int32_t x264 = INT32_MAX;

    t52 = (x261-(x262^(x263>x264)));

    if (t52 != -9654) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint32_t x265 = 943934503U;
	int32_t x266 = INT32_MIN;
	uint32_t x267 = 221U;
	static int8_t x268 = 7;
	uint32_t t53 = 54953417U;

    t53 = (x265-(x266^(x267>x268)));

    if (t53 != 3091418150U) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x269 = -1;
	int32_t x270 = INT32_MAX;
	static uint16_t x271 = UINT16_MAX;
	int64_t x272 = 429675LL;
	static int32_t t54 = INT32_MIN;

    t54 = (x269-(x270^(x271>x272)));

    if (t54 != INT32_MIN) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int64_t x274 = 19961471512231011LL;
	uint64_t x275 = UINT64_MAX;
	int16_t x276 = 6;
	int64_t t55 = 8305268813LL;

    t55 = (x273-(x274^(x275>x276)));

    if (t55 != 9203410565342544797LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x277 = -1;
	static int8_t x278 = INT8_MIN;
	int32_t x280 = 129392322;
	int32_t t56 = -51181800;

    t56 = (x277-(x278^(x279>x280)));

    if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint64_t x281 = 1771729LLU;
	static int8_t x283 = -1;
	uint16_t x284 = 168U;

    t57 = (x281-(x282^(x283>x284)));

    if (t57 != 18446744071563839698LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x285 = 14;
	uint32_t x286 = 27U;
	volatile int32_t x287 = -1;
	static uint8_t x288 = UINT8_MAX;
	uint32_t t58 = 2U;

    t58 = (x285-(x286^(x287>x288)));

    if (t58 != 4294967283U) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x289 = 1U;
	int8_t x291 = INT8_MIN;
	uint64_t x292 = UINT64_MAX;
	int32_t t59 = -45;

    t59 = (x289-(x290^(x291>x292)));

    if (t59 != -9) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint32_t x293 = UINT32_MAX;
	static uint8_t x294 = 60U;
	volatile uint32_t t60 = 50058U;

    t60 = (x293-(x294^(x295>x296)));

    if (t60 != 4294967235U) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x298 = INT8_MIN;
	int32_t x300 = -1;
	int32_t t61 = 72627;

    t61 = (x297-(x298^(x299>x300)));

    if (t61 != -280) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x301 = 2033457;
	int16_t x302 = INT16_MIN;
	uint16_t x303 = 3817U;
	int8_t x304 = INT8_MIN;
	int32_t t62 = -407;

    t62 = (x301-(x302^(x303>x304)));

    if (t62 != 2066224) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x305 = 9336U;
	volatile uint8_t x307 = 1U;
	int32_t x308 = 1658;
	int32_t t63 = 71100762;

    t63 = (x305-(x306^(x307>x308)));

    if (t63 != -56199) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x310 = INT64_MIN;
	int64_t x312 = INT64_MIN;
	volatile int64_t t64 = 9LL;

    t64 = (x309-(x310^(x311>x312)));

    if (t64 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint64_t x313 = 4523253LLU;
	static uint8_t x315 = 59U;
	uint32_t x316 = UINT32_MAX;
	uint64_t t65 = 7226490061738LLU;

    t65 = (x313-(x314^(x315>x316)));

    if (t65 != 4523254LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x317 = -1;
	int16_t x318 = -1;
	static volatile uint8_t x319 = UINT8_MAX;
	int16_t x320 = -1;
	volatile int32_t t66 = -874;

    t66 = (x317-(x318^(x319>x320)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x321 = INT8_MIN;
	volatile int8_t x322 = INT8_MIN;
	static int64_t x324 = INT64_MIN;
	int32_t t67 = -88;

    t67 = (x321-(x322^(x323>x324)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x325 = UINT32_MAX;
	uint32_t x326 = UINT32_MAX;
	static uint32_t x327 = UINT32_MAX;
	int64_t x328 = 49012171LL;
	static volatile uint32_t t68 = 22199132U;

    t68 = (x325-(x326^(x327>x328)));

    if (t68 != 1U) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint32_t x329 = UINT32_MAX;
	int8_t x330 = INT8_MAX;
	static int16_t x331 = INT16_MAX;
	int32_t x332 = -1452516;
	volatile uint32_t t69 = 25U;

    t69 = (x329-(x330^(x331>x332)));

    if (t69 != 4294967169U) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x333 = INT16_MIN;
	int16_t x334 = 1917;
	volatile int16_t x336 = -232;
	static volatile int32_t t70 = -4372;

    t70 = (x333-(x334^(x335>x336)));

    if (t70 != -34685) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x338 = -1LL;
	uint32_t x339 = UINT32_MAX;
	int32_t x340 = -276673;
	static volatile int64_t t71 = -6LL;

    t71 = (x337-(x338^(x339>x340)));

    if (t71 != 26972040799921LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x341 = -7293;
	volatile int32_t x342 = 115723;
	uint16_t x343 = UINT16_MAX;
	static volatile int32_t x344 = INT32_MAX;
	int32_t t72 = -9;

    t72 = (x341-(x342^(x343>x344)));

    if (t72 != -123016) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x349 = -1;
	static volatile int16_t x350 = INT16_MIN;
	int64_t x351 = INT64_MIN;
	int64_t x352 = INT64_MIN;
	int32_t t73 = 20209567;

    t73 = (x349-(x350^(x351>x352)));

    if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x353 = INT32_MAX;
	volatile uint8_t x354 = 25U;
	volatile int32_t x355 = -10876;
	volatile int64_t x356 = -47884978LL;
	int32_t t74 = -1;

    t74 = (x353-(x354^(x355>x356)));

    if (t74 != 2147483623) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x361 = INT16_MAX;
	static volatile int32_t x362 = -1;
	int32_t x363 = 514915974;
	int8_t x364 = INT8_MIN;
	volatile int32_t t75 = 172850;

    t75 = (x361-(x362^(x363>x364)));

    if (t75 != 32769) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x365 = 627U;
	static int64_t x366 = -1LL;
	int32_t x367 = INT32_MAX;
	uint64_t x368 = 3LLU;

    t76 = (x365-(x366^(x367>x368)));

    if (t76 != 629LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x369 = INT16_MIN;
	uint16_t x370 = 115U;
	volatile int32_t x371 = INT32_MIN;
	int8_t x372 = INT8_MIN;
	volatile int32_t t77 = -988382576;

    t77 = (x369-(x370^(x371>x372)));

    if (t77 != -32883) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint32_t x377 = 7337259U;
	int16_t x379 = INT16_MIN;
	volatile uint32_t t78 = 63072U;

    t78 = (x377-(x378^(x379>x380)));

    if (t78 != 7370027U) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x381 = INT16_MAX;
	volatile int64_t t79 = 130531143437LL;

    t79 = (x381-(x382^(x383>x384)));

    if (t79 != 566378216LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x385 = INT16_MAX;
	uint16_t x387 = 5455U;
	volatile int32_t t80 = 103563859;

    t80 = (x385-(x386^(x387>x388)));

    if (t80 != 32769) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x391 = -3410;
	int64_t x392 = -2129LL;
	volatile int32_t t81 = -20;

    t81 = (x389-(x390^(x391>x392)));

    if (t81 != -2147483520) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x393 = UINT8_MAX;
	int16_t x394 = INT16_MIN;
	int32_t x395 = INT32_MIN;
	static int8_t x396 = 1;
	static int32_t t82 = -206838;

    t82 = (x393-(x394^(x395>x396)));

    if (t82 != 33023) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x397 = INT32_MAX;
	uint64_t x398 = UINT64_MAX;
	static int8_t x399 = INT8_MIN;
	uint64_t t83 = 1433LLU;

    t83 = (x397-(x398^(x399>x400)));

    if (t83 != 2147483648LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x401 = -1;
	uint8_t x402 = 9U;
	uint16_t x403 = 11U;
	int8_t x404 = 0;
	int32_t t84 = -14601335;

    t84 = (x401-(x402^(x403>x404)));

    if (t84 != -9) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint16_t x406 = 73U;
	int64_t x407 = INT64_MIN;
	uint16_t x408 = 22529U;

    t85 = (x405-(x406^(x407>x408)));

    if (t85 != 502090U) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x409 = 9211876377LLU;
	uint8_t x410 = 1U;
	uint64_t x411 = 51527356751LLU;
	volatile int8_t x412 = -31;
	volatile uint64_t t86 = 122LLU;

    t86 = (x409-(x410^(x411>x412)));

    if (t86 != 9211876376LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint32_t x414 = 55063724U;
	int32_t x415 = -5;
	int64_t x416 = -1LL;
	int64_t t87 = 11875622LL;

    t87 = (x413-(x414^(x415>x416)));

    if (t87 != -46405231LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x421 = -1;
	volatile uint8_t x422 = 6U;
	uint16_t x423 = 894U;
	int64_t x424 = INT64_MAX;
	int32_t t88 = 1;

    t88 = (x421-(x422^(x423>x424)));

    if (t88 != -7) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x425 = INT8_MIN;
	static int32_t x427 = -35452200;
	volatile int64_t t89 = 1342921587660829086LL;

    t89 = (x425-(x426^(x427>x428)));

    if (t89 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x429 = -2;
	static int16_t x430 = INT16_MIN;
	static volatile int32_t x431 = INT32_MIN;
	uint64_t x432 = UINT64_MAX;
	int32_t t90 = 7;

    t90 = (x429-(x430^(x431>x432)));

    if (t90 != 32766) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x433 = -1;
	int16_t x434 = INT16_MAX;
	int32_t x435 = INT32_MIN;
	int32_t x436 = 23;
	int32_t t91 = -9;

    t91 = (x433-(x434^(x435>x436)));

    if (t91 != -32768) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x437 = UINT64_MAX;
	volatile int8_t x438 = 0;
	int64_t x439 = INT64_MAX;
	volatile uint64_t t92 = 1944935596829LLU;

    t92 = (x437-(x438^(x439>x440)));

    if (t92 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint64_t x441 = 1601597985032LLU;
	static volatile int32_t x442 = INT32_MAX;
	uint64_t x443 = UINT64_MAX;
	int64_t x444 = 10LL;
	static volatile uint64_t t93 = 584410761775841LLU;

    t93 = (x441-(x442^(x443>x444)));

    if (t93 != 1599450501386LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int64_t x445 = INT64_MIN;
	int8_t x446 = -1;
	int64_t t94 = 849832596272151LL;

    t94 = (x445-(x446^(x447>x448)));

    if (t94 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static int32_t x449 = INT32_MIN;
	int16_t x452 = -583;
	uint64_t t95 = 7885773963LLU;

    t95 = (x449-(x450^(x451>x452)));

    if (t95 != 18446743626199670626LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x453 = 2U;
	uint8_t x454 = UINT8_MAX;
	int64_t x455 = INT64_MIN;
	volatile int16_t x456 = INT16_MIN;
	static int32_t t96 = -2824004;

    t96 = (x453-(x454^(x455>x456)));

    if (t96 != -253) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x457 = 7U;
	int16_t x458 = INT16_MAX;
	static volatile int32_t x460 = INT32_MIN;
	volatile int32_t t97 = -12;

    t97 = (x457-(x458^(x459>x460)));

    if (t97 != -32760) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x461 = -1LL;
	static int64_t x462 = -1LL;
	int16_t x463 = INT16_MIN;
	volatile int32_t x464 = INT32_MIN;
	int64_t t98 = 44LL;

    t98 = (x461-(x462^(x463>x464)));

    if (t98 != 1LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x465 = INT8_MIN;
	int32_t x466 = INT32_MIN;
	static volatile int64_t x467 = -1LL;
	int64_t x468 = 5LL;
	static volatile int32_t t99 = -121330973;

    t99 = (x465-(x466^(x467>x468)));

    if (t99 != 2147483520) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint64_t x469 = 2788346LLU;
	int16_t x470 = -1;
	int32_t x471 = INT32_MIN;
	volatile uint64_t t100 = 221734LLU;

    t100 = (x469-(x470^(x471>x472)));

    if (t100 != 2788347LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x474 = -1;
	uint32_t x476 = 3U;
	uint64_t t101 = 3085711LLU;

    t101 = (x473-(x474^(x475>x476)));

    if (t101 != 1LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x485 = INT16_MIN;
	uint16_t x487 = 379U;
	int16_t x488 = -1;

    t102 = (x485-(x486^(x487>x488)));

    if (t102 != -43930LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x489 = -1LL;
	int16_t x490 = -1;
	int8_t x491 = INT8_MAX;
	volatile int64_t t103 = 40994448404246LL;

    t103 = (x489-(x490^(x491>x492)));

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x493 = UINT64_MAX;
	int64_t x494 = INT64_MIN;
	uint16_t x495 = 376U;
	int64_t x496 = INT64_MAX;
	volatile uint64_t t104 = 180265LLU;

    t104 = (x493-(x494^(x495>x496)));

    if (t104 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile uint64_t x501 = UINT64_MAX;
	int8_t x502 = INT8_MAX;
	uint16_t x503 = 479U;
	int8_t x504 = -1;
	volatile uint64_t t105 = 8807262819396231994LLU;

    t105 = (x501-(x502^(x503>x504)));

    if (t105 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x505 = -1;
	uint16_t x506 = 17691U;
	int16_t x508 = -1;

    t106 = (x505-(x506^(x507>x508)));

    if (t106 != -17692) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x509 = INT8_MIN;
	volatile int8_t x510 = INT8_MIN;
	volatile uint64_t x511 = UINT64_MAX;
	static volatile uint8_t x512 = 3U;
	volatile int32_t t107 = 91;

    t107 = (x509-(x510^(x511>x512)));

    if (t107 != -1) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x513 = INT64_MAX;
	uint8_t x514 = UINT8_MAX;
	uint32_t x515 = 79548359U;
	int32_t x516 = -1;

    t108 = (x513-(x514^(x515>x516)));

    if (t108 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x518 = 12U;
	uint8_t x519 = 126U;

    t109 = (x517-(x518^(x519>x520)));

    if (t109 != -14) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x522 = INT64_MAX;

    t110 = (x521-(x522^(x523>x524)));

    if (t110 != -9223372036854775679LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint8_t x526 = 42U;
	volatile int16_t x527 = -461;
	int32_t t111 = 4;

    t111 = (x525-(x526^(x527>x528)));

    if (t111 != -42) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x529 = UINT8_MAX;
	int16_t x530 = -1908;
	static volatile uint16_t x531 = 2158U;
	uint8_t x532 = UINT8_MAX;

    t112 = (x529-(x530^(x531>x532)));

    if (t112 != 2162) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x533 = UINT8_MAX;
	int16_t x534 = -1;

    t113 = (x533-(x534^(x535>x536)));

    if (t113 != 256) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x547 = UINT32_MAX;
	uint64_t x548 = UINT64_MAX;
	uint64_t t114 = 2360383134909LLU;

    t114 = (x545-(x546^(x547>x548)));

    if (t114 != 9223372036854746665LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint8_t x549 = 10U;
	static volatile int32_t x550 = 3077;
	volatile uint8_t x551 = UINT8_MAX;

    t115 = (x549-(x550^(x551>x552)));

    if (t115 != -3067) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x553 = UINT16_MAX;
	int64_t x554 = -11LL;
	volatile int32_t x555 = 8543993;
	int32_t x556 = 3854;

    t116 = (x553-(x554^(x555>x556)));

    if (t116 != 65547LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x557 = INT64_MIN;
	int64_t x558 = -85961830100LL;
	int16_t x559 = 30;
	static volatile int8_t x560 = INT8_MIN;
	static int64_t t117 = 672LL;

    t117 = (x557-(x558^(x559>x560)));

    if (t117 != -9223371950892945709LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x561 = UINT8_MAX;
	static volatile int32_t x563 = INT32_MAX;
	int32_t x564 = INT32_MIN;
	static int32_t t118 = -374;

    t118 = (x561-(x562^(x563>x564)));

    if (t118 != 230) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int16_t x565 = -1;
	volatile int8_t x566 = INT8_MAX;
	int16_t x568 = INT16_MIN;
	volatile int32_t t119 = 49407557;

    t119 = (x565-(x566^(x567>x568)));

    if (t119 != -127) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x570 = UINT64_MAX;
	static uint16_t x571 = 487U;
	uint8_t x572 = UINT8_MAX;
	uint64_t t120 = 271LLU;

    t120 = (x569-(x570^(x571>x572)));

    if (t120 != 5LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x573 = INT16_MIN;
	int8_t x574 = INT8_MIN;
	uint16_t x576 = 36U;
	int32_t t121 = 691;

    t121 = (x573-(x574^(x575>x576)));

    if (t121 != -32640) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x577 = INT16_MIN;
	int32_t x578 = -1;
	volatile uint8_t x580 = UINT8_MAX;

    t122 = (x577-(x578^(x579>x580)));

    if (t122 != -32767) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x581 = INT16_MAX;
	static volatile uint64_t x582 = 4857293LLU;
	volatile int64_t x583 = INT64_MIN;

    t123 = (x581-(x582^(x583>x584)));

    if (t123 != 18446744073704727090LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x585 = 13U;
	static uint8_t x588 = UINT8_MAX;
	uint32_t t124 = 67U;

    t124 = (x585-(x586^(x587>x588)));

    if (t124 != 4209717534U) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint64_t x589 = UINT64_MAX;
	int8_t x590 = 12;
	uint64_t t125 = 1101660399520858LLU;

    t125 = (x589-(x590^(x591>x592)));

    if (t125 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x593 = 33U;
	uint8_t x594 = 1U;
	int32_t x595 = INT32_MAX;
	uint16_t x596 = UINT16_MAX;
	static int32_t t126 = 8738234;

    t126 = (x593-(x594^(x595>x596)));

    if (t126 != 33) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x602 = INT32_MAX;
	static volatile int8_t x603 = INT8_MIN;
	int16_t x604 = -1;
	static uint32_t t127 = 41985U;

    t127 = (x601-(x602^(x603>x604)));

    if (t127 != 2147483649U) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x605 = -1;
	int8_t x606 = INT8_MIN;
	int64_t x607 = -205348021LL;
	uint32_t x608 = UINT32_MAX;
	int32_t t128 = 126828;

    t128 = (x605-(x606^(x607>x608)));

    if (t128 != 127) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x613 = INT16_MIN;
	int16_t x614 = INT16_MIN;
	uint32_t x615 = 254802U;
	static volatile int8_t x616 = -12;
	static volatile int32_t t129 = -493812665;

    t129 = (x613-(x614^(x615>x616)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x618 = 6951U;

    t130 = (x617-(x618^(x619>x620)));

    if (t130 != -6989) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x623 = 2U;
	uint64_t t131 = 1439359606LLU;

    t131 = (x621-(x622^(x623>x624)));

    if (t131 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x625 = INT16_MIN;
	volatile int16_t x626 = -4;
	int16_t x627 = 4986;
	static volatile int32_t t132 = 6;

    t132 = (x625-(x626^(x627>x628)));

    if (t132 != -32765) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x629 = 0;
	int64_t x631 = INT64_MIN;
	static volatile int16_t x632 = -1;
	volatile int32_t t133 = -1;

    t133 = (x629-(x630^(x631>x632)));

    if (t133 != -3) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x633 = INT32_MIN;
	volatile uint32_t x634 = 622U;
	static int32_t x635 = INT32_MIN;
	uint8_t x636 = 7U;
	uint32_t t134 = 3129390U;

    t134 = (x633-(x634^(x635>x636)));

    if (t134 != 2147483026U) { NG(); } else { ; }
	
}

void f135(void) {
    	static int16_t x637 = 955;
	static volatile int64_t x638 = INT64_MAX;
	static int64_t x639 = -1LL;
	int8_t x640 = 29;
	volatile int64_t t135 = 6628143113LL;

    t135 = (x637-(x638^(x639>x640)));

    if (t135 != -9223372036854774852LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile uint64_t x641 = 186462608074033LLU;
	volatile uint8_t x643 = UINT8_MAX;
	volatile int64_t x644 = INT64_MIN;
	volatile uint64_t t136 = 108LLU;

    t136 = (x641-(x642^(x643>x644)));

    if (t136 != 186462608073602LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x645 = UINT32_MAX;
	static volatile int16_t x646 = -13759;
	int32_t x647 = -1;
	int8_t x648 = INT8_MIN;
	uint32_t t137 = 128155777U;

    t137 = (x645-(x646^(x647>x648)));

    if (t137 != 13759U) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x649 = INT32_MIN;
	uint32_t x650 = UINT32_MAX;
	volatile int32_t x651 = -1;
	int16_t x652 = INT16_MAX;
	uint32_t t138 = 3U;

    t138 = (x649-(x650^(x651>x652)));

    if (t138 != 2147483649U) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x655 = 102U;
	volatile int32_t x656 = INT32_MIN;
	volatile int32_t t139 = -130494;

    t139 = (x653-(x654^(x655>x656)));

    if (t139 != 2094261164) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x658 = -1LL;
	int32_t x659 = -375009;
	int64_t t140 = -22276LL;

    t140 = (x657-(x658^(x659>x660)));

    if (t140 != 2037LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x661 = 667U;
	uint32_t x662 = 26095711U;
	int16_t x663 = -1;
	volatile uint8_t x664 = 22U;
	static uint32_t t141 = 2U;

    t141 = (x661-(x662^(x663>x664)));

    if (t141 != 4268872252U) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x670 = 4984996260826LLU;
	int32_t x671 = INT32_MIN;
	static int8_t x672 = INT8_MAX;

    t142 = (x669-(x670^(x671>x672)));

    if (t142 != 18446739088713292436LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	static int8_t x673 = 0;
	int8_t x674 = INT8_MAX;
	uint16_t x676 = 168U;
	volatile int32_t t143 = -248454;

    t143 = (x673-(x674^(x675>x676)));

    if (t143 != -127) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x677 = -20;
	volatile int32_t x678 = 41;
	int16_t x679 = -1;
	static int32_t t144 = -100;

    t144 = (x677-(x678^(x679>x680)));

    if (t144 != -60) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x681 = -1;
	int64_t x683 = 56472478197019LL;
	int64_t x684 = -1LL;

    t145 = (x681-(x682^(x683>x684)));

    if (t145 != -127) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x686 = 14;
	uint32_t x688 = UINT32_MAX;
	int32_t t146 = -57;

    t146 = (x685-(x686^(x687>x688)));

    if (t146 != -9) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x689 = INT32_MAX;
	int32_t x690 = 1;
	int64_t x691 = INT64_MIN;

    t147 = (x689-(x690^(x691>x692)));

    if (t147 != 2147483646) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint8_t x693 = UINT8_MAX;
	volatile uint32_t x694 = UINT32_MAX;
	static int32_t x695 = INT32_MIN;
	int32_t x696 = -11844404;
	static volatile uint32_t t148 = 4967854U;

    t148 = (x693-(x694^(x695>x696)));

    if (t148 != 256U) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x701 = -1;
	static int64_t x702 = -1LL;
	int32_t x704 = INT32_MIN;

    t149 = (x701-(x702^(x703>x704)));

    if (t149 != 1LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x705 = INT64_MIN;
	int64_t x706 = -1LL;
	int64_t x707 = INT64_MIN;
	int8_t x708 = 51;
	static int64_t t150 = -1LL;

    t150 = (x705-(x706^(x707>x708)));

    if (t150 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x713 = INT64_MIN;
	static int64_t x715 = 528120LL;
	int64_t x716 = -1LL;

    t151 = (x713-(x714^(x715>x716)));

    if (t151 != 9223372034842850529LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x717 = 97014525139694484LLU;
	int16_t x718 = 967;
	int16_t x719 = -1;
	static volatile uint64_t x720 = 2280849343LLU;
	volatile uint64_t t152 = 125004335LLU;

    t152 = (x717-(x718^(x719>x720)));

    if (t152 != 97014525139693518LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x722 = INT64_MAX;
	uint8_t x723 = UINT8_MAX;

    t153 = (x721-(x722^(x723>x724)));

    if (t153 != INT64_MIN) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x725 = INT64_MIN;
	uint64_t x726 = 944674036157566LLU;
	static volatile uint8_t x727 = 0U;
	int32_t x728 = -9109184;
	volatile uint64_t t154 = 0LLU;

    t154 = (x725-(x726^(x727>x728)));

    if (t154 != 9222427362818618241LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint64_t x729 = UINT64_MAX;
	int64_t x730 = 112897LL;
	static uint32_t x731 = 4205U;
	int64_t x732 = 4073890894LL;
	static uint64_t t155 = 99142641454015721LLU;

    t155 = (x729-(x730^(x731>x732)));

    if (t155 != 18446744073709438718LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x733 = INT32_MIN;
	volatile int32_t x734 = -1;
	int64_t x735 = -1LL;

    t156 = (x733-(x734^(x735>x736)));

    if (t156 != -2147483646) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x739 = 8U;
	int64_t x740 = INT64_MAX;

    t157 = (x737-(x738^(x739>x740)));

    if (t157 != 18446743580480139229LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x741 = INT32_MAX;
	uint16_t x742 = 174U;
	volatile uint32_t x743 = 126722U;
	static int64_t x744 = INT64_MIN;
	int32_t t158 = -1;

    t158 = (x741-(x742^(x743>x744)));

    if (t158 != 2147483472) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x745 = -25;
	volatile int64_t x746 = -1LL;
	int8_t x747 = 11;
	int32_t x748 = INT32_MAX;
	static int64_t t159 = -60628974LL;

    t159 = (x745-(x746^(x747>x748)));

    if (t159 != -24LL) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x749 = INT8_MIN;
	static int16_t x751 = INT16_MIN;
	int32_t x752 = -2749;
	int32_t t160 = 138250332;

    t160 = (x749-(x750^(x751>x752)));

    if (t160 != -3478) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x753 = 1453192539LL;
	volatile int16_t x754 = INT16_MIN;
	volatile int32_t x756 = -44;
	static int64_t t161 = 11LL;

    t161 = (x753-(x754^(x755>x756)));

    if (t161 != 1453225307LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint16_t x757 = UINT16_MAX;
	static volatile int64_t x758 = 0LL;
	int16_t x759 = -1;
	int64_t t162 = -879040019695049897LL;

    t162 = (x757-(x758^(x759>x760)));

    if (t162 != 65534LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x761 = 3U;
	uint16_t x762 = UINT16_MAX;
	volatile int64_t x763 = -1LL;
	volatile int32_t t163 = 2663;

    t163 = (x761-(x762^(x763>x764)));

    if (t163 != -65531) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x765 = 75755252U;
	int64_t x766 = INT64_MAX;
	int32_t x767 = -192669498;
	volatile int16_t x768 = INT16_MAX;
	volatile int64_t t164 = -246225LL;

    t164 = (x765-(x766^(x767>x768)));

    if (t164 != -9223372036779020555LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static int16_t x770 = INT16_MIN;
	uint64_t x772 = 10376200LLU;
	volatile int64_t t165 = -1108806573487339LL;

    t165 = (x769-(x770^(x771>x772)));

    if (t165 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x773 = 13931409LL;
	uint32_t x775 = 1U;
	int16_t x776 = -1;
	volatile int64_t t166 = -213LL;

    t166 = (x773-(x774^(x775>x776)));

    if (t166 != 13939945LL) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint32_t x781 = UINT32_MAX;
	int16_t x782 = INT16_MIN;
	uint8_t x784 = UINT8_MAX;
	uint32_t t167 = 31289728U;

    t167 = (x781-(x782^(x783>x784)));

    if (t167 != 32766U) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x785 = INT32_MIN;
	int16_t x787 = 137;
	uint32_t x788 = 4464U;
	volatile uint64_t t168 = 61LLU;

    t168 = (x785-(x786^(x787>x788)));

    if (t168 != 18446580865399333502LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x789 = 5792208965LL;
	static int8_t x791 = INT8_MIN;
	int64_t t169 = -5LL;

    t169 = (x789-(x790^(x791>x792)));

    if (t169 != 5792208966LL) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint32_t x793 = 21005400U;
	int64_t x794 = INT64_MAX;
	int32_t x796 = -7;
	int64_t t170 = 1LL;

    t170 = (x793-(x794^(x795>x796)));

    if (t170 != -9223372036833770406LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x797 = INT8_MIN;
	int64_t x798 = 0LL;
	uint8_t x799 = 13U;
	uint64_t x800 = 207912697259583246LLU;
	int64_t t171 = -535287970950234LL;

    t171 = (x797-(x798^(x799>x800)));

    if (t171 != -128LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x810 = 4346U;
	int64_t x811 = 82072478815405LL;
	int64_t x812 = INT64_MIN;
	int32_t t172 = -70270;

    t172 = (x809-(x810^(x811>x812)));

    if (t172 != -4475) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x813 = -1686364LL;
	int16_t x814 = 13;
	uint16_t x815 = UINT16_MAX;
	static int64_t x816 = INT64_MIN;
	volatile int64_t t173 = -20712441717208LL;

    t173 = (x813-(x814^(x815>x816)));

    if (t173 != -1686376LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x818 = 496840306271714492LLU;
	volatile uint16_t x819 = UINT16_MAX;
	uint64_t x820 = 1325987LLU;
	uint64_t t174 = 7948284LLU;

    t174 = (x817-(x818^(x819>x820)));

    if (t174 != 17949903767437836996LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x821 = UINT8_MAX;
	int16_t x822 = INT16_MAX;
	uint32_t x823 = 14U;

    t175 = (x821-(x822^(x823>x824)));

    if (t175 != -32512) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x825 = INT16_MAX;
	int32_t x827 = 61;
	static uint32_t x828 = UINT32_MAX;

    t176 = (x825-(x826^(x827>x828)));

    if (t176 != 26175) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x829 = 1829U;
	int8_t x830 = 0;
	int8_t x832 = -1;
	int32_t t177 = -2;

    t177 = (x829-(x830^(x831>x832)));

    if (t177 != 1829) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x833 = INT64_MIN;
	int32_t x834 = INT32_MIN;
	int64_t x835 = -184581417829371805LL;
	uint32_t x836 = UINT32_MAX;
	volatile int64_t t178 = -1LL;

    t178 = (x833-(x834^(x835>x836)));

    if (t178 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x837 = 1512930001U;
	int16_t x838 = INT16_MIN;
	int32_t x839 = INT32_MIN;
	uint32_t t179 = 54396U;

    t179 = (x837-(x838^(x839>x840)));

    if (t179 != 1512962768U) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x843 = INT64_MAX;
	volatile uint32_t x844 = 27592675U;
	uint32_t t180 = 526426274U;

    t180 = (x841-(x842^(x843>x844)));

    if (t180 != 16U) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x845 = -1;
	uint64_t x846 = UINT64_MAX;
	int16_t x847 = INT16_MIN;
	volatile uint64_t t181 = 120616578984556LLU;

    t181 = (x845-(x846^(x847>x848)));

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x850 = -1LL;
	uint64_t x851 = 12050331092LLU;
	static uint32_t x852 = UINT32_MAX;
	int64_t t182 = 179705LL;

    t182 = (x849-(x850^(x851>x852)));

    if (t182 != 11988LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x853 = 2145U;
	uint16_t x854 = 398U;
	int16_t x855 = -1;
	uint8_t x856 = 46U;
	uint32_t t183 = 32161U;

    t183 = (x853-(x854^(x855>x856)));

    if (t183 != 1747U) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x857 = 874U;
	int32_t x858 = 912025623;
	int8_t x859 = INT8_MIN;
	int64_t x860 = INT64_MAX;
	volatile int32_t t184 = -73283526;

    t184 = (x857-(x858^(x859>x860)));

    if (t184 != -912024749) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x862 = INT32_MAX;
	uint8_t x864 = UINT8_MAX;
	static int32_t t185 = -277;

    t185 = (x861-(x862^(x863>x864)));

    if (t185 != -2147483520) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x865 = INT64_MAX;
	int16_t x866 = 213;
	static int32_t x867 = -112;
	volatile int8_t x868 = INT8_MAX;

    t186 = (x865-(x866^(x867>x868)));

    if (t186 != 9223372036854775594LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x871 = 6;
	uint64_t x872 = 16420550416LLU;
	uint32_t t187 = 47391U;

    t187 = (x869-(x870^(x871>x872)));

    if (t187 != 36372U) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint64_t x873 = 31379370LLU;
	int32_t x874 = INT32_MAX;
	uint8_t x875 = UINT8_MAX;
	static uint8_t x876 = UINT8_MAX;
	uint64_t t188 = 881534392LLU;

    t188 = (x873-(x874^(x875>x876)));

    if (t188 != 18446744071593447339LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x877 = INT16_MIN;
	int64_t x878 = INT64_MIN;
	int32_t x879 = INT32_MAX;
	int32_t x880 = -1;
	volatile int64_t t189 = 558617177973495LL;

    t189 = (x877-(x878^(x879>x880)));

    if (t189 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x881 = -1LL;
	int16_t x882 = INT16_MIN;
	static int32_t x883 = INT32_MIN;
	static int8_t x884 = INT8_MIN;
	static volatile int64_t t190 = 227LL;

    t190 = (x881-(x882^(x883>x884)));

    if (t190 != 32767LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x885 = INT16_MIN;
	int16_t x886 = -1;
	uint64_t x888 = 6LLU;
	volatile int32_t t191 = 29257;

    t191 = (x885-(x886^(x887>x888)));

    if (t191 != -32766) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x891 = INT8_MIN;
	volatile int32_t x892 = INT32_MIN;
	static int32_t t192 = -1;

    t192 = (x889-(x890^(x891>x892)));

    if (t192 != 126) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x893 = -1LL;
	static int64_t x894 = -2757356811403877LL;
	int32_t x895 = INT32_MIN;
	static uint64_t x896 = 314236130929LLU;

    t193 = (x893-(x894^(x895>x896)));

    if (t193 != 2757356811403877LL) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x897 = INT8_MAX;
	volatile int8_t x898 = -4;
	static int64_t x899 = INT64_MAX;
	uint16_t x900 = 69U;
	static volatile int32_t t194 = -1;

    t194 = (x897-(x898^(x899>x900)));

    if (t194 != 130) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x902 = UINT8_MAX;
	static int32_t t195 = -1;

    t195 = (x901-(x902^(x903>x904)));

    if (t195 != 32513) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint32_t x906 = 1U;
	int64_t x908 = 189LL;

    t196 = (x905-(x906^(x907>x908)));

    if (t196 != 4294967168U) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x909 = UINT64_MAX;
	int16_t x910 = -1;
	volatile uint32_t x912 = 1031016U;
	volatile uint64_t t197 = 7LLU;

    t197 = (x909-(x910^(x911>x912)));

    if (t197 != 1LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x917 = INT64_MIN;
	int8_t x918 = INT8_MIN;
	int64_t t198 = -15LL;

    t198 = (x917-(x918^(x919>x920)));

    if (t198 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint64_t x921 = 81790981LLU;
	int8_t x922 = -1;
	int64_t x923 = -1LL;
	static int64_t x924 = INT64_MAX;
	volatile uint64_t t199 = 767799LLU;

    t199 = (x921-(x922^(x923>x924)));

    if (t199 != 81790982LLU) { NG(); } else { ; }
	
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

