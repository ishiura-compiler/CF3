
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

int8_t x13 = 26;
volatile int32_t t1 = 1;
static uint8_t x21 = 0U;
int8_t x23 = -5;
volatile int32_t t3 = 44;
int32_t t4 = 4818;
volatile uint16_t x32 = 37U;
int32_t x33 = INT32_MIN;
static int16_t x36 = INT16_MIN;
static int8_t x38 = INT8_MIN;
int8_t x46 = 1;
int8_t x54 = INT8_MIN;
int64_t x89 = 97563188605076LL;
int64_t x91 = -2645488448385LL;
static uint8_t x96 = 31U;
volatile int32_t t16 = 45;
int8_t x100 = INT8_MIN;
int32_t t17 = 888;
uint16_t x103 = UINT16_MAX;
volatile int32_t t18 = -4731;
int8_t x105 = -1;
static int16_t x108 = INT16_MIN;
uint64_t x109 = 176250480LLU;
int32_t x111 = -515757804;
int16_t x116 = INT16_MAX;
int32_t t22 = 3415;
volatile uint64_t x123 = 384LLU;
int64_t x124 = 1266794401LL;
uint8_t x125 = 0U;
int32_t x136 = INT32_MIN;
int64_t x145 = -79417LL;
static int32_t x148 = -1;
static uint8_t x168 = UINT8_MAX;
static int32_t t29 = -535012856;
int8_t x175 = -47;
volatile int32_t t30 = -9;
volatile int8_t x180 = 1;
static int16_t x189 = -1;
static uint8_t x191 = 1U;
static uint16_t x198 = UINT16_MAX;
uint32_t x199 = 110U;
static volatile int32_t t35 = -3589775;
uint8_t x222 = 1U;
uint64_t x224 = 243250218331LLU;
int32_t t40 = 145;
int8_t x225 = 1;
int16_t x228 = -1;
uint64_t x236 = 3833LLU;
static uint32_t x247 = UINT32_MAX;
int64_t x253 = -1110630098782594LL;
int16_t x255 = INT16_MIN;
volatile int32_t t48 = 26658;
int32_t t49 = -209271;
static int8_t x282 = -1;
static int32_t x283 = 7;
int32_t x284 = -601;
int32_t t51 = 84645;
static volatile int8_t x288 = INT8_MIN;
static volatile int64_t x294 = INT64_MIN;
volatile uint16_t x297 = 27463U;
int32_t x300 = -1;
static int32_t t56 = 21313;
uint32_t x306 = 1883499512U;
int8_t x319 = INT8_MAX;
static volatile int64_t x321 = INT64_MAX;
int32_t t60 = 8170498;
static int32_t x326 = -1;
volatile int32_t t61 = 0;
volatile int32_t x342 = INT32_MIN;
uint16_t x344 = UINT16_MAX;
volatile int32_t t64 = -15;
uint32_t x346 = 5492U;
int64_t x349 = -1LL;
volatile int16_t x360 = INT16_MAX;
volatile int32_t t67 = -164619116;
int32_t t72 = 4240573;
volatile int64_t x382 = INT64_MIN;
int32_t x395 = INT32_MAX;
static int16_t x396 = 253;
volatile int32_t t75 = 14428;
int32_t t76 = 4979501;
uint16_t x414 = 76U;
uint16_t x430 = 796U;
uint64_t x431 = 12188495163084410LLU;
int16_t x433 = -14;
int8_t x435 = INT8_MAX;
uint16_t x441 = UINT16_MAX;
static int32_t x442 = -615;
int16_t x448 = INT16_MIN;
static volatile int32_t t82 = 182696394;
static volatile int32_t x453 = INT32_MIN;
int8_t x454 = INT8_MIN;
uint32_t x458 = 6844742U;
uint8_t x462 = 30U;
volatile uint32_t x473 = 1442094356U;
uint32_t x475 = 359483U;
int32_t x487 = 11809;
volatile int32_t x493 = -417699361;
volatile uint32_t x496 = UINT32_MAX;
volatile int32_t t92 = 4142;
int16_t x510 = INT16_MIN;
int32_t t96 = -1;
int64_t x522 = -1LL;
volatile int64_t x531 = 3172LL;
static int8_t x538 = -12;
uint8_t x551 = 1U;
volatile int64_t x553 = INT64_MIN;
int8_t x568 = INT8_MIN;
static int64_t x572 = INT64_MAX;
int64_t x573 = -1LL;
int32_t t107 = 380;
int16_t x577 = -2;
int64_t x579 = -1LL;
uint32_t x585 = 2803U;
static volatile int32_t t109 = -70419858;
static int8_t x590 = -1;
int32_t t110 = 11509736;
int8_t x594 = 1;
uint16_t x596 = 4U;
volatile int8_t x599 = -1;
uint16_t x614 = 15440U;
uint64_t x616 = 7LLU;
int32_t x617 = -1;
uint16_t x624 = 30457U;
int32_t t115 = 236585;
int32_t t119 = -34337;
int8_t x645 = -3;
uint64_t x651 = 38LLU;
int64_t x663 = -181836045619114192LL;
int64_t x674 = 4261841LL;
uint16_t x676 = 2116U;
uint16_t x679 = 7185U;
static int64_t x680 = -1LL;
volatile int32_t t126 = 1561189;
int16_t x689 = 1;
static int32_t x690 = 13;
volatile int32_t t129 = 113314018;
uint8_t x697 = UINT8_MAX;
volatile int16_t x699 = INT16_MAX;
int16_t x702 = INT16_MIN;
volatile int64_t x706 = INT64_MAX;
uint64_t x716 = UINT64_MAX;
int32_t t134 = 411567;
int8_t x726 = 46;
int32_t x728 = -1;
static int16_t x733 = 162;
static int64_t x755 = INT64_MAX;
static volatile int32_t t141 = 812762;
int16_t x770 = -47;
int32_t t144 = -104529;
uint16_t x778 = 3U;
int64_t x784 = INT64_MIN;
static uint64_t x800 = UINT64_MAX;
static int16_t x802 = 3;
volatile int32_t x803 = INT32_MAX;
int32_t t149 = 397655437;
static volatile int16_t x823 = INT16_MAX;
int32_t x825 = 13591149;
int32_t x830 = -19;
int32_t t154 = 20358324;
int32_t x837 = INT32_MIN;
uint32_t x839 = 87077U;
volatile int8_t x851 = INT8_MIN;
static int16_t x853 = -1;
int32_t t159 = -858627178;
uint16_t x865 = UINT16_MAX;
int16_t x872 = INT16_MIN;
int16_t x878 = INT16_MAX;
volatile int32_t x881 = -1;
volatile int8_t x883 = INT8_MIN;
static uint8_t x891 = UINT8_MAX;
int64_t x892 = -2LL;
int64_t x904 = INT64_MIN;
int32_t t167 = -5;
volatile int16_t x918 = INT16_MAX;
int16_t x920 = INT16_MIN;
int32_t t170 = -11397;
volatile uint8_t x929 = 3U;
int64_t x932 = INT64_MIN;
int8_t x956 = INT8_MIN;
volatile int32_t t174 = -139;
static int8_t x963 = INT8_MIN;
static int8_t x971 = -6;
uint32_t x975 = UINT32_MAX;
static int16_t x976 = INT16_MAX;
int8_t x981 = INT8_MAX;
int8_t x1007 = -13;
static volatile int32_t t185 = -1626;
volatile int16_t x1015 = INT16_MIN;
int16_t x1023 = -3741;
int32_t t188 = 247;
volatile int32_t t189 = -138;
static volatile int32_t t190 = 0;
uint16_t x1037 = UINT16_MAX;
int16_t x1041 = 122;
int64_t x1043 = 29355365571153LL;
uint16_t x1059 = 1047U;
uint32_t x1067 = UINT32_MAX;
int32_t t195 = -12522614;
uint32_t x1073 = 78628U;
int32_t x1078 = INT32_MIN;
static int16_t x1080 = -1;


void f0(void) {
    	static uint16_t x9 = 244U;
	int8_t x10 = INT8_MAX;
	int32_t x11 = -329997;
	uint32_t x12 = 26U;
	int32_t t0 = -453;

    t0 = (x9==(x10%(x11&x12)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x14 = INT32_MAX;
	uint32_t x15 = 309U;
	int16_t x16 = 3;

    t1 = (x13==(x14%(x15&x16)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x17 = INT8_MIN;
	int16_t x18 = 6116;
	uint64_t x19 = 5LLU;
	volatile uint32_t x20 = 138369U;
	volatile int32_t t2 = 515044;

    t2 = (x17==(x18%(x19&x20)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint16_t x22 = UINT16_MAX;
	int16_t x24 = INT16_MIN;

    t3 = (x21==(x22%(x23&x24)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x25 = 129070367315158LLU;
	static volatile int16_t x26 = 13687;
	static int8_t x27 = -1;
	int64_t x28 = INT64_MAX;

    t4 = (x25==(x26%(x27&x28)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x29 = INT8_MIN;
	uint32_t x30 = 28U;
	uint32_t x31 = 4U;
	int32_t t5 = 49;

    t5 = (x29==(x30%(x31&x32)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x34 = 9441U;
	static uint64_t x35 = 52196493066691698LLU;
	int32_t t6 = 493527;

    t6 = (x33==(x34%(x35&x36)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int32_t x37 = INT32_MAX;
	uint16_t x39 = 953U;
	int32_t x40 = INT32_MAX;
	volatile int32_t t7 = -140355604;

    t7 = (x37==(x38%(x39&x40)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x45 = UINT32_MAX;
	int32_t x47 = 19;
	int16_t x48 = -1;
	volatile int32_t t8 = -1;

    t8 = (x45==(x46%(x47&x48)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint32_t x49 = 4707684U;
	int8_t x50 = INT8_MAX;
	int32_t x51 = INT32_MIN;
	int64_t x52 = INT64_MIN;
	int32_t t9 = 10;

    t9 = (x49==(x50%(x51&x52)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x53 = INT64_MAX;
	uint16_t x55 = UINT16_MAX;
	int16_t x56 = -261;
	int32_t t10 = 159;

    t10 = (x53==(x54%(x55&x56)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int32_t x69 = 14980;
	volatile int32_t x70 = INT32_MAX;
	uint16_t x71 = 3U;
	int8_t x72 = INT8_MAX;
	int32_t t11 = -119;

    t11 = (x69==(x70%(x71&x72)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint8_t x73 = 46U;
	uint16_t x74 = UINT16_MAX;
	uint64_t x75 = UINT64_MAX;
	uint64_t x76 = 4786230118324963LLU;
	volatile int32_t t12 = -187;

    t12 = (x73==(x74%(x75&x76)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x77 = INT64_MAX;
	int32_t x78 = INT32_MAX;
	uint32_t x79 = UINT32_MAX;
	volatile int16_t x80 = -1;
	int32_t t13 = -346206;

    t13 = (x77==(x78%(x79&x80)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x85 = -1;
	uint16_t x86 = 24U;
	int32_t x87 = INT32_MAX;
	int8_t x88 = INT8_MIN;
	volatile int32_t t14 = 3;

    t14 = (x85==(x86%(x87&x88)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x90 = 122U;
	int64_t x92 = -1LL;
	int32_t t15 = -652;

    t15 = (x89==(x90%(x91&x92)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x93 = UINT64_MAX;
	uint64_t x94 = 51807280LLU;
	int32_t x95 = INT32_MAX;

    t16 = (x93==(x94%(x95&x96)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x97 = INT64_MAX;
	uint32_t x98 = 3716U;
	static int8_t x99 = INT8_MIN;

    t17 = (x97==(x98%(x99&x100)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int64_t x101 = INT64_MIN;
	uint32_t x102 = UINT32_MAX;
	static uint8_t x104 = UINT8_MAX;

    t18 = (x101==(x102%(x103&x104)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x106 = 24U;
	uint16_t x107 = UINT16_MAX;
	static int32_t t19 = -8;

    t19 = (x105==(x106%(x107&x108)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x110 = -1;
	int16_t x112 = INT16_MIN;
	static int32_t t20 = 20085;

    t20 = (x109==(x110%(x111&x112)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x113 = 4;
	uint64_t x114 = UINT64_MAX;
	static int64_t x115 = INT64_MAX;
	int32_t t21 = 924;

    t21 = (x113==(x114%(x115&x116)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x117 = INT64_MIN;
	int32_t x118 = 1;
	int32_t x119 = -1;
	int64_t x120 = INT64_MIN;

    t22 = (x117==(x118%(x119&x120)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x121 = UINT8_MAX;
	uint64_t x122 = UINT64_MAX;
	volatile int32_t t23 = -27898;

    t23 = (x121==(x122%(x123&x124)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x126 = 5LLU;
	int32_t x127 = INT32_MIN;
	static int64_t x128 = 21109301686809LL;
	volatile int32_t t24 = -6090158;

    t24 = (x125==(x126%(x127&x128)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x133 = INT32_MAX;
	volatile int16_t x134 = -1;
	int8_t x135 = -1;
	volatile int32_t t25 = -1944253;

    t25 = (x133==(x134%(x135&x136)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x146 = 12903;
	int8_t x147 = -8;
	volatile int32_t t26 = -10143245;

    t26 = (x145==(x146%(x147&x148)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x149 = -4707247056085059LL;
	int64_t x150 = INT64_MAX;
	static int8_t x151 = INT8_MIN;
	uint32_t x152 = 87468U;
	volatile int32_t t27 = 320;

    t27 = (x149==(x150%(x151&x152)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x165 = -1;
	int16_t x166 = -637;
	int8_t x167 = INT8_MIN;
	volatile int32_t t28 = -30980;

    t28 = (x165==(x166%(x167&x168)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint32_t x169 = UINT32_MAX;
	int16_t x170 = 127;
	int16_t x171 = -1;
	int64_t x172 = 356433594479636LL;

    t29 = (x169==(x170%(x171&x172)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x173 = 28;
	int32_t x174 = -336;
	int64_t x176 = INT64_MIN;

    t30 = (x173==(x174%(x175&x176)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x177 = -1;
	volatile uint64_t x178 = UINT64_MAX;
	static uint64_t x179 = UINT64_MAX;
	volatile int32_t t31 = -63853;

    t31 = (x177==(x178%(x179&x180)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x181 = -284322;
	int8_t x182 = INT8_MAX;
	int8_t x183 = INT8_MIN;
	int16_t x184 = INT16_MIN;
	volatile int32_t t32 = 86869314;

    t32 = (x181==(x182%(x183&x184)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x185 = -1;
	volatile int32_t x186 = INT32_MIN;
	int16_t x187 = INT16_MAX;
	volatile uint16_t x188 = 1U;
	static volatile int32_t t33 = 34037494;

    t33 = (x185==(x186%(x187&x188)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x190 = INT32_MIN;
	volatile int8_t x192 = -1;
	volatile int32_t t34 = 0;

    t34 = (x189==(x190%(x191&x192)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x197 = INT32_MAX;
	volatile uint32_t x200 = UINT32_MAX;

    t35 = (x197==(x198%(x199&x200)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x205 = INT16_MIN;
	int32_t x206 = 2372907;
	int32_t x207 = INT32_MIN;
	int32_t x208 = -1431864;
	int32_t t36 = 112771;

    t36 = (x205==(x206%(x207&x208)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x209 = INT64_MIN;
	int64_t x210 = -8436628136172866LL;
	volatile int32_t x211 = INT32_MIN;
	int64_t x212 = INT64_MAX;
	volatile int32_t t37 = 6;

    t37 = (x209==(x210%(x211&x212)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x213 = 40149;
	static int8_t x214 = 2;
	int8_t x215 = -1;
	int8_t x216 = INT8_MAX;
	int32_t t38 = 6;

    t38 = (x213==(x214%(x215&x216)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x217 = INT16_MIN;
	int16_t x218 = 11780;
	static uint16_t x219 = 7U;
	static int16_t x220 = INT16_MAX;
	volatile int32_t t39 = 153689;

    t39 = (x217==(x218%(x219&x220)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x221 = -6791;
	static volatile uint64_t x223 = 317449393LLU;

    t40 = (x221==(x222%(x223&x224)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x226 = 61U;
	static uint8_t x227 = 93U;
	static volatile int32_t t41 = -949494;

    t41 = (x225==(x226%(x227&x228)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x233 = 109261LLU;
	int16_t x234 = 1;
	uint8_t x235 = 8U;
	int32_t t42 = -1208;

    t42 = (x233==(x234%(x235&x236)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x237 = UINT32_MAX;
	volatile uint32_t x238 = 1866466438U;
	uint32_t x239 = 1362191578U;
	static uint8_t x240 = UINT8_MAX;
	volatile int32_t t43 = -165;

    t43 = (x237==(x238%(x239&x240)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x245 = INT8_MAX;
	static uint8_t x246 = 7U;
	static uint64_t x248 = 299582518216261192LLU;
	int32_t t44 = 44;

    t44 = (x245==(x246%(x247&x248)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int64_t x254 = 949LL;
	int8_t x256 = INT8_MIN;
	int32_t t45 = 1;

    t45 = (x253==(x254%(x255&x256)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x257 = 0U;
	int64_t x258 = INT64_MIN;
	int32_t x259 = INT32_MIN;
	int8_t x260 = INT8_MIN;
	int32_t t46 = 0;

    t46 = (x257==(x258%(x259&x260)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x261 = -1;
	int64_t x262 = -1LL;
	static uint32_t x263 = UINT32_MAX;
	int32_t x264 = INT32_MIN;
	volatile int32_t t47 = -470662041;

    t47 = (x261==(x262%(x263&x264)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static int32_t x269 = -1;
	uint8_t x270 = 87U;
	volatile int8_t x271 = INT8_MAX;
	uint64_t x272 = 218367LLU;

    t48 = (x269==(x270%(x271&x272)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint16_t x273 = 54U;
	volatile uint8_t x274 = 19U;
	int32_t x275 = INT32_MAX;
	uint16_t x276 = 440U;

    t49 = (x273==(x274%(x275&x276)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x277 = -1;
	static int8_t x278 = -1;
	int64_t x279 = 17LL;
	int64_t x280 = -1LL;
	static int32_t t50 = -69689100;

    t50 = (x277==(x278%(x279&x280)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x281 = 0U;

    t51 = (x281==(x282%(x283&x284)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x285 = 30U;
	volatile int8_t x286 = 1;
	int32_t x287 = -1;
	volatile int32_t t52 = 110109044;

    t52 = (x285==(x286%(x287&x288)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint32_t x289 = 2U;
	volatile uint64_t x290 = 2LLU;
	int32_t x291 = -1;
	int8_t x292 = INT8_MIN;
	volatile int32_t t53 = 21648;

    t53 = (x289==(x290%(x291&x292)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint8_t x293 = 97U;
	int16_t x295 = INT16_MIN;
	uint32_t x296 = 257952920U;
	volatile int32_t t54 = 18585452;

    t54 = (x293==(x294%(x295&x296)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x298 = -293;
	int8_t x299 = 2;
	volatile int32_t t55 = 188578797;

    t55 = (x297==(x298%(x299&x300)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x301 = UINT32_MAX;
	int32_t x302 = INT32_MAX;
	int64_t x303 = INT64_MAX;
	int32_t x304 = INT32_MIN;

    t56 = (x301==(x302%(x303&x304)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x305 = 14;
	volatile uint32_t x307 = 4061331U;
	int64_t x308 = 21775LL;
	int32_t t57 = -884229;

    t57 = (x305==(x306%(x307&x308)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x309 = INT16_MAX;
	int16_t x310 = -29;
	uint8_t x311 = UINT8_MAX;
	int8_t x312 = INT8_MIN;
	volatile int32_t t58 = -5157;

    t58 = (x309==(x310%(x311&x312)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x317 = INT64_MAX;
	volatile uint8_t x318 = 99U;
	static uint8_t x320 = UINT8_MAX;
	static int32_t t59 = 1227940;

    t59 = (x317==(x318%(x319&x320)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x322 = INT16_MAX;
	volatile int64_t x323 = -1LL;
	int32_t x324 = INT32_MIN;

    t60 = (x321==(x322%(x323&x324)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x325 = 1;
	volatile int64_t x327 = -1LL;
	volatile int64_t x328 = INT64_MAX;

    t61 = (x325==(x326%(x327&x328)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x329 = INT32_MIN;
	static int64_t x330 = INT64_MIN;
	volatile uint64_t x331 = 1104450390741595LLU;
	int32_t x332 = INT32_MAX;
	volatile int32_t t62 = 1;

    t62 = (x329==(x330%(x331&x332)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x337 = -1;
	volatile int8_t x338 = INT8_MIN;
	int16_t x339 = -18;
	static uint16_t x340 = 6U;
	static int32_t t63 = 24;

    t63 = (x337==(x338%(x339&x340)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x341 = UINT16_MAX;
	int16_t x343 = INT16_MIN;

    t64 = (x341==(x342%(x343&x344)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x345 = 165U;
	volatile int16_t x347 = INT16_MAX;
	uint8_t x348 = 36U;
	volatile int32_t t65 = 1;

    t65 = (x345==(x346%(x347&x348)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x350 = 2LL;
	int16_t x351 = INT16_MIN;
	int8_t x352 = INT8_MIN;
	int32_t t66 = 14;

    t66 = (x349==(x350%(x351&x352)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x357 = 80494U;
	int32_t x358 = INT32_MAX;
	int64_t x359 = INT64_MAX;

    t67 = (x357==(x358%(x359&x360)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x361 = -49;
	int8_t x362 = INT8_MIN;
	uint64_t x363 = UINT64_MAX;
	static volatile uint16_t x364 = UINT16_MAX;
	int32_t t68 = 719187;

    t68 = (x361==(x362%(x363&x364)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x365 = INT16_MIN;
	volatile uint64_t x366 = 3949046003152402133LLU;
	uint16_t x367 = 5U;
	volatile uint32_t x368 = UINT32_MAX;
	static volatile int32_t t69 = -1;

    t69 = (x365==(x366%(x367&x368)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x369 = 1U;
	int64_t x370 = INT64_MAX;
	uint8_t x371 = UINT8_MAX;
	int16_t x372 = -1;
	static int32_t t70 = 109198849;

    t70 = (x369==(x370%(x371&x372)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x373 = -368;
	volatile int32_t x374 = -3014;
	uint64_t x375 = 35244248648862426LLU;
	uint64_t x376 = 96942220027441397LLU;
	int32_t t71 = -80778;

    t71 = (x373==(x374%(x375&x376)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x377 = INT8_MAX;
	static int32_t x378 = -1;
	volatile uint64_t x379 = 42184456266920LLU;
	static uint64_t x380 = UINT64_MAX;

    t72 = (x377==(x378%(x379&x380)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x381 = INT64_MIN;
	int64_t x383 = INT64_MAX;
	static int16_t x384 = 1;
	static int32_t t73 = -1;

    t73 = (x381==(x382%(x383&x384)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x393 = INT8_MIN;
	int64_t x394 = INT64_MIN;
	static volatile int32_t t74 = 249;

    t74 = (x393==(x394%(x395&x396)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x405 = -1;
	uint16_t x406 = 11U;
	int8_t x407 = INT8_MAX;
	int8_t x408 = INT8_MAX;

    t75 = (x405==(x406%(x407&x408)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x409 = 7764843;
	int32_t x410 = INT32_MAX;
	volatile int16_t x411 = INT16_MIN;
	uint64_t x412 = 2912150348549LLU;

    t76 = (x409==(x410%(x411&x412)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint32_t x413 = 39942U;
	int32_t x415 = -226498;
	uint32_t x416 = 380352U;
	volatile int32_t t77 = -2444013;

    t77 = (x413==(x414%(x415&x416)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile uint16_t x425 = 1519U;
	int64_t x426 = INT64_MIN;
	int8_t x427 = -22;
	int64_t x428 = INT64_MAX;
	volatile int32_t t78 = 1;

    t78 = (x425==(x426%(x427&x428)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x429 = 61;
	int8_t x432 = INT8_MIN;
	static int32_t t79 = 914;

    t79 = (x429==(x430%(x431&x432)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x434 = -2932786;
	uint64_t x436 = UINT64_MAX;
	volatile int32_t t80 = -1397870;

    t80 = (x433==(x434%(x435&x436)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x443 = INT8_MIN;
	int64_t x444 = INT64_MIN;
	int32_t t81 = -13896355;

    t81 = (x441==(x442%(x443&x444)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x445 = 26158U;
	int8_t x446 = INT8_MAX;
	volatile int8_t x447 = INT8_MIN;

    t82 = (x445==(x446%(x447&x448)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x449 = INT16_MIN;
	int8_t x450 = -57;
	int8_t x451 = -26;
	int32_t x452 = -20205827;
	volatile int32_t t83 = 1;

    t83 = (x449==(x450%(x451&x452)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x455 = INT64_MAX;
	static volatile int16_t x456 = -16283;
	int32_t t84 = 0;

    t84 = (x453==(x454%(x455&x456)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x457 = 701;
	int16_t x459 = INT16_MAX;
	static volatile uint64_t x460 = 8529233704569000LLU;
	int32_t t85 = 786395759;

    t85 = (x457==(x458%(x459&x460)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x461 = 18U;
	volatile uint32_t x463 = UINT32_MAX;
	int64_t x464 = 109727607581302760LL;
	volatile int32_t t86 = 3953675;

    t86 = (x461==(x462%(x463&x464)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint16_t x465 = 31000U;
	int16_t x466 = INT16_MIN;
	uint16_t x467 = 7188U;
	int8_t x468 = -1;
	volatile int32_t t87 = 13;

    t87 = (x465==(x466%(x467&x468)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x469 = 1;
	uint32_t x470 = 1283U;
	volatile uint16_t x471 = UINT16_MAX;
	int64_t x472 = INT64_MAX;
	int32_t t88 = 14;

    t88 = (x469==(x470%(x471&x472)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x474 = 13539U;
	int32_t x476 = -1;
	static int32_t t89 = 388542;

    t89 = (x473==(x474%(x475&x476)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint16_t x485 = 41U;
	int32_t x486 = -1;
	int16_t x488 = 219;
	int32_t t90 = 0;

    t90 = (x485==(x486%(x487&x488)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x489 = -5;
	int8_t x490 = INT8_MIN;
	int16_t x491 = -1016;
	volatile int64_t x492 = INT64_MIN;
	int32_t t91 = 1;

    t91 = (x489==(x490%(x491&x492)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x494 = INT8_MAX;
	int8_t x495 = -2;

    t92 = (x493==(x494%(x495&x496)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x497 = INT64_MIN;
	int64_t x498 = INT64_MIN;
	int64_t x499 = INT64_MIN;
	static int64_t x500 = -58970LL;
	int32_t t93 = 941288348;

    t93 = (x497==(x498%(x499&x500)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x501 = 71LLU;
	uint16_t x502 = UINT16_MAX;
	uint32_t x503 = 1U;
	int64_t x504 = -1LL;
	static int32_t t94 = -4082;

    t94 = (x501==(x502%(x503&x504)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static int8_t x509 = -2;
	volatile int32_t x511 = INT32_MAX;
	static int64_t x512 = INT64_MAX;
	int32_t t95 = 0;

    t95 = (x509==(x510%(x511&x512)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x517 = UINT32_MAX;
	uint8_t x518 = 0U;
	volatile int64_t x519 = 595948254798055LL;
	uint64_t x520 = 354070LLU;

    t96 = (x517==(x518%(x519&x520)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint16_t x521 = UINT16_MAX;
	static uint64_t x523 = 15271620052LLU;
	volatile int32_t x524 = INT32_MIN;
	volatile int32_t t97 = 128267552;

    t97 = (x521==(x522%(x523&x524)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x525 = -2191029LL;
	uint64_t x526 = UINT64_MAX;
	static uint32_t x527 = UINT32_MAX;
	int8_t x528 = INT8_MIN;
	volatile int32_t t98 = 46218927;

    t98 = (x525==(x526%(x527&x528)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x529 = 151300;
	static int16_t x530 = INT16_MAX;
	int64_t x532 = -4LL;
	int32_t t99 = 1;

    t99 = (x529==(x530%(x531&x532)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile uint16_t x533 = 1309U;
	static volatile int64_t x534 = 427884101342540LL;
	uint16_t x535 = UINT16_MAX;
	uint8_t x536 = 11U;
	int32_t t100 = 96137;

    t100 = (x533==(x534%(x535&x536)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x537 = -1;
	uint8_t x539 = UINT8_MAX;
	volatile uint32_t x540 = UINT32_MAX;
	static int32_t t101 = -2014387;

    t101 = (x537==(x538%(x539&x540)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x549 = INT64_MIN;
	int8_t x550 = INT8_MIN;
	int16_t x552 = -1;
	volatile int32_t t102 = -419447957;

    t102 = (x549==(x550%(x551&x552)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int16_t x554 = 3;
	uint8_t x555 = UINT8_MAX;
	static uint16_t x556 = 4105U;
	int32_t t103 = 824778167;

    t103 = (x553==(x554%(x555&x556)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x561 = 7688077U;
	volatile uint32_t x562 = 209111796U;
	volatile uint64_t x563 = 24150605992914175LLU;
	int16_t x564 = -503;
	volatile int32_t t104 = -149;

    t104 = (x561==(x562%(x563&x564)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x565 = -7;
	uint8_t x566 = UINT8_MAX;
	int64_t x567 = -6561363562LL;
	volatile int32_t t105 = 3633949;

    t105 = (x565==(x566%(x567&x568)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x569 = 9967583U;
	uint8_t x570 = 1U;
	int8_t x571 = INT8_MIN;
	volatile int32_t t106 = 5;

    t106 = (x569==(x570%(x571&x572)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x574 = -1;
	int16_t x575 = INT16_MIN;
	int32_t x576 = INT32_MAX;

    t107 = (x573==(x574%(x575&x576)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x578 = INT8_MIN;
	static volatile int64_t x580 = -29379245393186LL;
	int32_t t108 = -1;

    t108 = (x577==(x578%(x579&x580)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x586 = 1008U;
	int16_t x587 = 19;
	static int32_t x588 = 1;

    t109 = (x585==(x586%(x587&x588)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x589 = INT16_MAX;
	int8_t x591 = 1;
	volatile uint8_t x592 = UINT8_MAX;

    t110 = (x589==(x590%(x591&x592)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int64_t x593 = INT64_MIN;
	int16_t x595 = -1;
	int32_t t111 = 262;

    t111 = (x593==(x594%(x595&x596)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x597 = -3675232216LL;
	static volatile int8_t x598 = 29;
	uint8_t x600 = UINT8_MAX;
	int32_t t112 = -13821623;

    t112 = (x597==(x598%(x599&x600)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile uint32_t x613 = 2912U;
	int32_t x615 = 447603;
	volatile int32_t t113 = -1;

    t113 = (x613==(x614%(x615&x616)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x618 = INT16_MIN;
	int16_t x619 = INT16_MIN;
	int64_t x620 = -668LL;
	int32_t t114 = 10;

    t114 = (x617==(x618%(x619&x620)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint16_t x621 = UINT16_MAX;
	static uint32_t x622 = 2180U;
	uint64_t x623 = UINT64_MAX;

    t115 = (x621==(x622%(x623&x624)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int32_t x625 = INT32_MAX;
	int8_t x626 = INT8_MIN;
	int64_t x627 = INT64_MAX;
	static int8_t x628 = INT8_MIN;
	int32_t t116 = -51524;

    t116 = (x625==(x626%(x627&x628)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint32_t x633 = 51U;
	uint64_t x634 = 16718239590665825LLU;
	volatile int32_t x635 = INT32_MAX;
	uint16_t x636 = 42U;
	int32_t t117 = 3;

    t117 = (x633==(x634%(x635&x636)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint16_t x637 = 1131U;
	int32_t x638 = INT32_MIN;
	static uint16_t x639 = 45U;
	static uint8_t x640 = UINT8_MAX;
	volatile int32_t t118 = -31;

    t118 = (x637==(x638%(x639&x640)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x641 = INT32_MAX;
	volatile uint16_t x642 = 10U;
	volatile int8_t x643 = INT8_MIN;
	uint32_t x644 = 5770527U;

    t119 = (x641==(x642%(x643&x644)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x646 = INT16_MAX;
	int32_t x647 = -1689442;
	volatile int64_t x648 = -22083807LL;
	static int32_t t120 = -51175092;

    t120 = (x645==(x646%(x647&x648)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x649 = INT64_MIN;
	int32_t x650 = -55916749;
	int8_t x652 = -1;
	int32_t t121 = -136981449;

    t121 = (x649==(x650%(x651&x652)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x653 = -1LL;
	uint8_t x654 = 1U;
	int32_t x655 = -1;
	static volatile int64_t x656 = INT64_MAX;
	volatile int32_t t122 = 7710;

    t122 = (x653==(x654%(x655&x656)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x661 = 200076;
	uint16_t x662 = UINT16_MAX;
	int16_t x664 = 8143;
	int32_t t123 = 30;

    t123 = (x661==(x662%(x663&x664)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x669 = 80412U;
	uint32_t x670 = 535311633U;
	volatile uint64_t x671 = UINT64_MAX;
	volatile uint64_t x672 = 193453966LLU;
	int32_t t124 = -43;

    t124 = (x669==(x670%(x671&x672)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x673 = INT16_MIN;
	uint64_t x675 = 117LLU;
	static volatile int32_t t125 = -7143401;

    t125 = (x673==(x674%(x675&x676)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x677 = INT32_MIN;
	int32_t x678 = INT32_MIN;

    t126 = (x677==(x678%(x679&x680)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x685 = 32019746U;
	uint8_t x686 = 63U;
	int16_t x687 = -63;
	static int8_t x688 = -6;
	int32_t t127 = -40357;

    t127 = (x685==(x686%(x687&x688)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x691 = -1LL;
	int32_t x692 = INT32_MAX;
	volatile int32_t t128 = 0;

    t128 = (x689==(x690%(x691&x692)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x693 = -1LL;
	uint32_t x694 = UINT32_MAX;
	int16_t x695 = INT16_MIN;
	int32_t x696 = 394262;

    t129 = (x693==(x694%(x695&x696)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x698 = 9;
	uint8_t x700 = UINT8_MAX;
	int32_t t130 = -5037;

    t130 = (x697==(x698%(x699&x700)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x701 = 4432425664945942LLU;
	uint8_t x703 = 21U;
	int8_t x704 = -23;
	static volatile int32_t t131 = -1316352;

    t131 = (x701==(x702%(x703&x704)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int32_t x705 = -1;
	int8_t x707 = INT8_MIN;
	uint16_t x708 = 488U;
	volatile int32_t t132 = 2683294;

    t132 = (x705==(x706%(x707&x708)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint64_t x713 = 2489476913194357795LLU;
	uint8_t x714 = UINT8_MAX;
	uint64_t x715 = UINT64_MAX;
	volatile int32_t t133 = 3568713;

    t133 = (x713==(x714%(x715&x716)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x721 = INT16_MIN;
	int8_t x722 = INT8_MIN;
	static uint16_t x723 = UINT16_MAX;
	int64_t x724 = -2175807672LL;

    t134 = (x721==(x722%(x723&x724)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int16_t x725 = INT16_MIN;
	int32_t x727 = INT32_MAX;
	volatile int32_t t135 = 362715;

    t135 = (x725==(x726%(x727&x728)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x734 = -1;
	int16_t x735 = -1330;
	volatile int64_t x736 = INT64_MAX;
	volatile int32_t t136 = 83064;

    t136 = (x733==(x734%(x735&x736)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile int16_t x737 = INT16_MAX;
	int64_t x738 = INT64_MAX;
	static volatile int8_t x739 = INT8_MIN;
	static uint16_t x740 = UINT16_MAX;
	volatile int32_t t137 = 0;

    t137 = (x737==(x738%(x739&x740)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x741 = INT8_MAX;
	int32_t x742 = -4574523;
	int32_t x743 = -146200454;
	int64_t x744 = INT64_MIN;
	volatile int32_t t138 = 528;

    t138 = (x741==(x742%(x743&x744)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x749 = 3818;
	uint64_t x750 = 2400111195559LLU;
	int16_t x751 = -1;
	int8_t x752 = INT8_MIN;
	volatile int32_t t139 = -4513347;

    t139 = (x749==(x750%(x751&x752)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int32_t x753 = 1021581;
	int16_t x754 = INT16_MIN;
	uint64_t x756 = 5LLU;
	int32_t t140 = -165;

    t140 = (x753==(x754%(x755&x756)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x757 = -22;
	volatile int32_t x758 = INT32_MIN;
	int64_t x759 = 266649048412762LL;
	int8_t x760 = INT8_MIN;

    t141 = (x757==(x758%(x759&x760)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x761 = -1;
	int32_t x762 = INT32_MAX;
	int32_t x763 = INT32_MIN;
	int8_t x764 = INT8_MIN;
	static int32_t t142 = -5908;

    t142 = (x761==(x762%(x763&x764)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x765 = 2LL;
	volatile int32_t x766 = INT32_MIN;
	int32_t x767 = -1;
	static int8_t x768 = -1;
	volatile int32_t t143 = 430559605;

    t143 = (x765==(x766%(x767&x768)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x769 = 342329LL;
	volatile int64_t x771 = -1296397LL;
	int64_t x772 = INT64_MIN;

    t144 = (x769==(x770%(x771&x772)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint32_t x777 = UINT32_MAX;
	int8_t x779 = INT8_MIN;
	volatile int8_t x780 = -1;
	int32_t t145 = 7881950;

    t145 = (x777==(x778%(x779&x780)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x781 = INT64_MIN;
	int8_t x782 = 1;
	static int8_t x783 = -7;
	volatile int32_t t146 = 0;

    t146 = (x781==(x782%(x783&x784)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x797 = INT8_MIN;
	static uint32_t x798 = 797394U;
	uint16_t x799 = 1U;
	volatile int32_t t147 = -3442;

    t147 = (x797==(x798%(x799&x800)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x801 = INT32_MIN;
	uint32_t x804 = 626897893U;
	int32_t t148 = 2929852;

    t148 = (x801==(x802%(x803&x804)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x805 = INT8_MIN;
	static uint32_t x806 = UINT32_MAX;
	uint64_t x807 = UINT64_MAX;
	volatile int64_t x808 = 3331834LL;

    t149 = (x805==(x806%(x807&x808)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x809 = -130;
	uint32_t x810 = UINT32_MAX;
	uint64_t x811 = 119502222780044806LLU;
	uint32_t x812 = 21119197U;
	volatile int32_t t150 = 95041;

    t150 = (x809==(x810%(x811&x812)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint32_t x817 = 108419U;
	volatile int16_t x818 = -1;
	int16_t x819 = -1;
	static int64_t x820 = INT64_MAX;
	volatile int32_t t151 = 96887513;

    t151 = (x817==(x818%(x819&x820)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x821 = 5481LL;
	volatile uint8_t x822 = 12U;
	volatile int16_t x824 = -1;
	int32_t t152 = 96999;

    t152 = (x821==(x822%(x823&x824)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x826 = INT64_MAX;
	volatile int32_t x827 = INT32_MAX;
	int16_t x828 = 15652;
	volatile int32_t t153 = -691;

    t153 = (x825==(x826%(x827&x828)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x829 = -1;
	static int8_t x831 = -1;
	volatile uint16_t x832 = UINT16_MAX;

    t154 = (x829==(x830%(x831&x832)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x838 = 188368422757103912LLU;
	int16_t x840 = INT16_MAX;
	volatile int32_t t155 = -20490;

    t155 = (x837==(x838%(x839&x840)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x845 = INT8_MAX;
	int8_t x846 = 7;
	static int16_t x847 = INT16_MIN;
	volatile int8_t x848 = INT8_MIN;
	int32_t t156 = 5641668;

    t156 = (x845==(x846%(x847&x848)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int64_t x849 = -1LL;
	static uint8_t x850 = 2U;
	static uint32_t x852 = 96561978U;
	volatile int32_t t157 = -9;

    t157 = (x849==(x850%(x851&x852)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x854 = 12959193LL;
	uint64_t x855 = 26705928262676075LLU;
	static volatile int64_t x856 = -352689826LL;
	volatile int32_t t158 = -495998;

    t158 = (x853==(x854%(x855&x856)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x857 = 12U;
	int16_t x858 = INT16_MIN;
	int64_t x859 = INT64_MAX;
	volatile int16_t x860 = INT16_MIN;

    t159 = (x857==(x858%(x859&x860)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x861 = 1968U;
	static volatile int8_t x862 = -10;
	int16_t x863 = -136;
	int16_t x864 = -1;
	int32_t t160 = 0;

    t160 = (x861==(x862%(x863&x864)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x866 = INT16_MAX;
	int8_t x867 = -1;
	int16_t x868 = INT16_MIN;
	volatile int32_t t161 = -31324;

    t161 = (x865==(x866%(x867&x868)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x869 = -2;
	static int16_t x870 = INT16_MIN;
	static volatile int64_t x871 = INT64_MAX;
	volatile int32_t t162 = -89567;

    t162 = (x869==(x870%(x871&x872)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x877 = INT16_MIN;
	int8_t x879 = INT8_MIN;
	static int64_t x880 = INT64_MIN;
	volatile int32_t t163 = -247049650;

    t163 = (x877==(x878%(x879&x880)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x882 = 6647111U;
	int8_t x884 = -1;
	int32_t t164 = 2777788;

    t164 = (x881==(x882%(x883&x884)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x889 = INT32_MIN;
	static volatile uint32_t x890 = 7845U;
	int32_t t165 = 8;

    t165 = (x889==(x890%(x891&x892)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x901 = INT32_MIN;
	static int16_t x902 = 1;
	uint64_t x903 = UINT64_MAX;
	static volatile int32_t t166 = -604;

    t166 = (x901==(x902%(x903&x904)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x905 = UINT16_MAX;
	uint32_t x906 = 114055U;
	volatile int32_t x907 = -956282;
	int8_t x908 = -1;

    t167 = (x905==(x906%(x907&x908)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x913 = INT64_MIN;
	volatile uint64_t x914 = UINT64_MAX;
	int16_t x915 = INT16_MAX;
	static uint64_t x916 = 105756007LLU;
	volatile int32_t t168 = 11135;

    t168 = (x913==(x914%(x915&x916)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x917 = -1;
	int64_t x919 = -6523LL;
	int32_t t169 = -3362;

    t169 = (x917==(x918%(x919&x920)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x925 = -2;
	int16_t x926 = INT16_MAX;
	int8_t x927 = INT8_MIN;
	int16_t x928 = INT16_MAX;

    t170 = (x925==(x926%(x927&x928)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x930 = UINT8_MAX;
	int32_t x931 = INT32_MIN;
	volatile int32_t t171 = -117525608;

    t171 = (x929==(x930%(x931&x932)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int16_t x937 = INT16_MAX;
	int64_t x938 = INT64_MIN;
	volatile uint64_t x939 = UINT64_MAX;
	uint64_t x940 = 172073785262LLU;
	volatile int32_t t172 = 465560756;

    t172 = (x937==(x938%(x939&x940)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x945 = 0;
	uint8_t x946 = UINT8_MAX;
	volatile uint8_t x947 = 2U;
	uint8_t x948 = 15U;
	volatile int32_t t173 = 79336236;

    t173 = (x945==(x946%(x947&x948)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x953 = INT16_MIN;
	int8_t x954 = INT8_MIN;
	volatile int8_t x955 = -38;

    t174 = (x953==(x954%(x955&x956)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x957 = INT8_MAX;
	uint16_t x958 = 3624U;
	static uint64_t x959 = 2275LLU;
	uint8_t x960 = UINT8_MAX;
	volatile int32_t t175 = 338008260;

    t175 = (x957==(x958%(x959&x960)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x961 = INT8_MIN;
	int8_t x962 = INT8_MIN;
	static uint64_t x964 = 56181LLU;
	volatile int32_t t176 = 61;

    t176 = (x961==(x962%(x963&x964)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x965 = 0;
	uint16_t x966 = 24070U;
	volatile int16_t x967 = -439;
	int16_t x968 = INT16_MIN;
	volatile int32_t t177 = 1;

    t177 = (x965==(x966%(x967&x968)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x969 = INT32_MIN;
	uint8_t x970 = UINT8_MAX;
	int16_t x972 = -1;
	volatile int32_t t178 = 0;

    t178 = (x969==(x970%(x971&x972)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x973 = -1;
	volatile int64_t x974 = 45693LL;
	static volatile int32_t t179 = 625;

    t179 = (x973==(x974%(x975&x976)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x982 = INT16_MIN;
	int8_t x983 = INT8_MIN;
	int32_t x984 = INT32_MIN;
	volatile int32_t t180 = 24;

    t180 = (x981==(x982%(x983&x984)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x985 = INT8_MIN;
	volatile int32_t x986 = INT32_MIN;
	int32_t x987 = INT32_MAX;
	int16_t x988 = INT16_MIN;
	volatile int32_t t181 = -12446;

    t181 = (x985==(x986%(x987&x988)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile int8_t x989 = 32;
	int16_t x990 = 33;
	uint16_t x991 = 85U;
	static int16_t x992 = -1;
	int32_t t182 = -87490177;

    t182 = (x989==(x990%(x991&x992)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x993 = INT32_MAX;
	static int16_t x994 = INT16_MIN;
	volatile int32_t x995 = -1;
	static volatile int64_t x996 = 545589448761701130LL;
	volatile int32_t t183 = -478839;

    t183 = (x993==(x994%(x995&x996)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x997 = -247093LL;
	int16_t x998 = -1;
	int8_t x999 = INT8_MIN;
	volatile int64_t x1000 = INT64_MIN;
	static int32_t t184 = -28;

    t184 = (x997==(x998%(x999&x1000)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x1005 = -1;
	static int64_t x1006 = INT64_MIN;
	int64_t x1008 = INT64_MIN;

    t185 = (x1005==(x1006%(x1007&x1008)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x1013 = 1;
	int8_t x1014 = -1;
	int32_t x1016 = -29292;
	static int32_t t186 = -2834;

    t186 = (x1013==(x1014%(x1015&x1016)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int64_t x1017 = INT64_MAX;
	static volatile int8_t x1018 = INT8_MIN;
	static uint8_t x1019 = 2U;
	int8_t x1020 = -1;
	volatile int32_t t187 = -27;

    t187 = (x1017==(x1018%(x1019&x1020)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x1021 = INT32_MAX;
	int32_t x1022 = INT32_MIN;
	int8_t x1024 = INT8_MIN;

    t188 = (x1021==(x1022%(x1023&x1024)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x1025 = INT8_MIN;
	volatile int64_t x1026 = INT64_MIN;
	static int16_t x1027 = -186;
	static volatile int8_t x1028 = INT8_MIN;

    t189 = (x1025==(x1026%(x1027&x1028)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x1033 = -1LL;
	uint8_t x1034 = 93U;
	uint16_t x1035 = UINT16_MAX;
	uint16_t x1036 = UINT16_MAX;

    t190 = (x1033==(x1034%(x1035&x1036)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x1038 = INT8_MAX;
	static int8_t x1039 = -13;
	int8_t x1040 = INT8_MAX;
	volatile int32_t t191 = -7;

    t191 = (x1037==(x1038%(x1039&x1040)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint8_t x1042 = 25U;
	static uint32_t x1044 = UINT32_MAX;
	static volatile int32_t t192 = -2938;

    t192 = (x1041==(x1042%(x1043&x1044)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x1045 = 34366U;
	int16_t x1046 = -59;
	uint16_t x1047 = 130U;
	int32_t x1048 = -60;
	static volatile int32_t t193 = 62642;

    t193 = (x1045==(x1046%(x1047&x1048)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x1057 = -78;
	uint8_t x1058 = UINT8_MAX;
	int8_t x1060 = INT8_MIN;
	static volatile int32_t t194 = 339851;

    t194 = (x1057==(x1058%(x1059&x1060)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x1065 = 13;
	static int64_t x1066 = INT64_MAX;
	uint64_t x1068 = 1153258952LLU;

    t195 = (x1065==(x1066%(x1067&x1068)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x1074 = UINT8_MAX;
	static int8_t x1075 = -26;
	volatile int16_t x1076 = 4;
	int32_t t196 = -33824;

    t196 = (x1073==(x1074%(x1075&x1076)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x1077 = INT16_MIN;
	static int64_t x1079 = INT64_MAX;
	int32_t t197 = 338735;

    t197 = (x1077==(x1078%(x1079&x1080)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x1089 = 39U;
	int8_t x1090 = INT8_MAX;
	volatile uint16_t x1091 = UINT16_MAX;
	int64_t x1092 = -15025LL;
	volatile int32_t t198 = -1920;

    t198 = (x1089==(x1090%(x1091&x1092)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x1101 = INT32_MIN;
	static uint8_t x1102 = 1U;
	int64_t x1103 = -1LL;
	int8_t x1104 = INT8_MIN;
	int32_t t199 = 283;

    t199 = (x1101==(x1102%(x1103&x1104)));

    if (t199 != 0) { NG(); } else { ; }
	
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

