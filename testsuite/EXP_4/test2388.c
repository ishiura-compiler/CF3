
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

uint8_t x2 = 0U;
int32_t t0 = 0;
static volatile int16_t x7 = 32;
int8_t x10 = INT8_MIN;
volatile int32_t t2 = 235138;
uint32_t x16 = 147U;
static volatile int32_t t3 = 2609620;
int16_t x18 = 0;
volatile int32_t t5 = 37969729;
volatile int16_t x26 = -1;
static volatile int32_t t6 = -11813;
uint64_t x31 = 2845499340938LLU;
volatile int32_t t7 = -1048007227;
volatile int32_t x48 = -1;
int32_t t13 = -1;
static int64_t x73 = INT64_MAX;
static int32_t x76 = -10;
uint32_t x78 = 2966121U;
uint32_t x84 = 151U;
volatile int32_t t17 = -165;
static int8_t x85 = -1;
static volatile int32_t t18 = 406552;
int32_t x90 = INT32_MIN;
static volatile int32_t t19 = 941;
uint8_t x94 = 1U;
int32_t t20 = 6;
volatile uint8_t x99 = 2U;
volatile uint8_t x101 = 6U;
uint8_t x113 = 8U;
uint16_t x115 = UINT16_MAX;
int64_t x116 = INT64_MIN;
int8_t x117 = INT8_MAX;
volatile int32_t t24 = -34;
static int8_t x127 = -1;
volatile int32_t x136 = INT32_MIN;
uint16_t x140 = UINT16_MAX;
int16_t x142 = INT16_MIN;
int32_t x148 = 3271716;
static int8_t x151 = -41;
volatile uint32_t x152 = 6934U;
volatile int32_t t33 = 139;
uint8_t x164 = UINT8_MAX;
static int8_t x172 = INT8_MIN;
int32_t t36 = -4198;
int8_t x173 = 15;
uint8_t x174 = UINT8_MAX;
static volatile int64_t x184 = INT64_MAX;
static volatile int16_t x189 = 28;
uint8_t x191 = 1U;
int64_t x192 = 28624674819675069LL;
int64_t x196 = -1LL;
volatile int16_t x197 = -5037;
volatile uint16_t x200 = 27501U;
int32_t t41 = 10827;
int8_t x203 = INT8_MIN;
uint8_t x205 = 45U;
volatile int32_t x207 = 431;
int16_t x212 = INT16_MIN;
volatile int32_t t47 = 23368854;
uint64_t x240 = 89476LLU;
volatile int32_t t50 = 111;
static uint16_t x241 = 62U;
volatile int8_t x242 = -1;
uint8_t x244 = 7U;
int16_t x245 = INT16_MIN;
int16_t x248 = INT16_MAX;
static int32_t t52 = 1568;
int32_t x268 = -1;
int16_t x271 = -7;
int64_t x276 = -1LL;
static int16_t x278 = INT16_MIN;
volatile int32_t t57 = 6806952;
static int16_t x281 = INT16_MAX;
int32_t t59 = 111353;
volatile int32_t x291 = INT32_MAX;
static volatile int8_t x292 = INT8_MIN;
int16_t x296 = INT16_MAX;
uint8_t x302 = 1U;
int8_t x309 = -1;
volatile int32_t x310 = -1;
volatile uint32_t x312 = 348254358U;
int16_t x319 = 1;
uint8_t x331 = 2U;
int32_t x343 = -11665;
volatile int16_t x348 = 27;
static uint16_t x353 = UINT16_MAX;
static uint16_t x354 = 3U;
int8_t x356 = 1;
static volatile uint32_t x361 = 22U;
static int64_t x362 = -1LL;
int16_t x364 = 497;
int32_t t76 = 101271;
volatile uint16_t x373 = 0U;
volatile uint16_t x377 = 164U;
static int8_t x379 = INT8_MAX;
int32_t x392 = -20;
volatile int32_t x400 = INT32_MAX;
int32_t x401 = 1439714;
volatile int32_t x402 = INT32_MIN;
volatile int32_t t84 = 1122138;
int8_t x425 = -2;
volatile int32_t t88 = -3413;
int64_t x429 = -1LL;
uint64_t x437 = UINT64_MAX;
static int64_t x441 = -1LL;
static int32_t t91 = 0;
int32_t x448 = -1;
int8_t x458 = 1;
int8_t x462 = -2;
volatile uint16_t x463 = 0U;
static int8_t x464 = -17;
static int16_t x467 = INT16_MIN;
int8_t x470 = INT8_MIN;
volatile int8_t x481 = -3;
uint64_t x498 = 2149913015708LLU;
volatile int8_t x518 = -1;
uint16_t x519 = UINT16_MAX;
uint8_t x520 = 13U;
int32_t x523 = -14522;
int64_t x524 = INT64_MIN;
int8_t x526 = -1;
volatile int64_t x527 = -1LL;
uint8_t x530 = 15U;
static int8_t x545 = INT8_MIN;
int16_t x552 = INT16_MAX;
static uint32_t x557 = 107271U;
volatile uint64_t x558 = 375677110553LLU;
int16_t x562 = 0;
int8_t x563 = -1;
int16_t x564 = INT16_MIN;
int16_t x567 = INT16_MIN;
volatile int64_t x571 = -1LL;
int64_t x572 = 37640720093535LL;
volatile uint64_t x580 = UINT64_MAX;
uint64_t x598 = 9120964070977273609LLU;
volatile uint8_t x601 = UINT8_MAX;
int64_t x622 = -1LL;
static int32_t t126 = 251276;
int64_t x639 = -1622436489094LL;
uint64_t x641 = UINT64_MAX;
uint64_t x643 = UINT64_MAX;
static int32_t t131 = 386905;
static int16_t x645 = -1;
int8_t x649 = INT8_MIN;
int32_t t133 = 570;
int16_t x653 = -310;
int16_t x654 = INT16_MIN;
int16_t x655 = -1;
static volatile int64_t x663 = -1LL;
int8_t x670 = -1;
static int8_t x691 = 0;
int32_t t139 = -250;
uint32_t x700 = 6288U;
static int8_t x704 = 59;
int32_t t144 = -140316275;
uint64_t x716 = UINT64_MAX;
int64_t x724 = -1LL;
int16_t x741 = INT16_MIN;
int8_t x748 = -47;
int32_t t149 = 1379;
int16_t x762 = -1;
static int32_t x769 = INT32_MIN;
volatile int32_t t156 = 6261;
static uint8_t x786 = 49U;
static int8_t x787 = 14;
uint8_t x788 = 51U;
uint16_t x789 = 309U;
uint16_t x799 = 11U;
int8_t x801 = INT8_MAX;
int32_t x814 = -1;
volatile uint8_t x815 = 14U;
int8_t x819 = -1;
static int32_t t164 = 2885907;
static int32_t t165 = -358;
int32_t x825 = -1;
volatile int16_t x828 = -88;
int32_t x856 = 485390646;
volatile int32_t t171 = 124;
uint32_t x864 = 1274118264U;
int32_t t172 = -354467133;
volatile uint16_t x882 = UINT16_MAX;
uint16_t x883 = 362U;
volatile int32_t t179 = 284905264;
volatile int32_t t181 = 28;
int32_t x915 = -1402172;
volatile int32_t t183 = 2018;
int8_t x925 = -1;
static int8_t x926 = INT8_MIN;
uint8_t x932 = 0U;
int64_t x934 = -1895LL;
static volatile int32_t t188 = 37364;
static int32_t x963 = INT32_MAX;
int32_t t191 = 2;
volatile uint16_t x999 = 1690U;
uint16_t x1000 = 14137U;
static volatile int32_t t197 = -14;
static uint32_t x1013 = 13U;
int64_t x1016 = 1011365102674323205LL;
volatile int32_t t199 = -50;


void f0(void) {
    	volatile int8_t x1 = INT8_MIN;
	volatile int32_t x3 = -1;
	uint8_t x4 = 0U;

    t0 = (x1==(x2*(x3|x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MIN;
	volatile uint64_t x6 = UINT64_MAX;
	static uint8_t x8 = 17U;
	static int32_t t1 = -11;

    t1 = (x5==(x6*(x7|x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = -1;
	int16_t x11 = INT16_MIN;
	uint32_t x12 = 6U;

    t2 = (x9==(x10*(x11|x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x13 = 73U;
	int32_t x14 = INT32_MIN;
	static uint64_t x15 = UINT64_MAX;

    t3 = (x13==(x14*(x15|x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = -1;
	volatile int16_t x19 = -21;
	int32_t x20 = INT32_MIN;
	volatile int32_t t4 = 1738;

    t4 = (x17==(x18*(x19|x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = UINT8_MAX;
	int16_t x22 = 2;
	static uint16_t x23 = 3U;
	uint8_t x24 = UINT8_MAX;

    t5 = (x21==(x22*(x23|x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint8_t x25 = 11U;
	uint16_t x27 = 21156U;
	int8_t x28 = -1;

    t6 = (x25==(x26*(x27|x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = 3075517572219401LL;
	static uint8_t x30 = 40U;
	uint64_t x32 = UINT64_MAX;

    t7 = (x29==(x30*(x31|x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = -25;
	int32_t x34 = -1;
	static int32_t x35 = 60461;
	volatile int32_t x36 = 13064654;
	volatile int32_t t8 = 69245725;

    t8 = (x33==(x34*(x35|x36)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint32_t x37 = UINT32_MAX;
	uint16_t x38 = 8U;
	uint32_t x39 = 7277991U;
	int16_t x40 = INT16_MIN;
	volatile int32_t t9 = 49;

    t9 = (x37==(x38*(x39|x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x45 = 3400998LL;
	int32_t x46 = 675780874;
	int32_t x47 = INT32_MIN;
	int32_t t10 = 6;

    t10 = (x45==(x46*(x47|x48)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x49 = INT64_MIN;
	uint8_t x50 = UINT8_MAX;
	static uint8_t x51 = 1U;
	static int64_t x52 = -1LL;
	volatile int32_t t11 = -1070699;

    t11 = (x49==(x50*(x51|x52)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x53 = INT32_MAX;
	int32_t x54 = 3344385;
	int16_t x55 = 1;
	volatile uint32_t x56 = UINT32_MAX;
	static int32_t t12 = 60;

    t12 = (x53==(x54*(x55|x56)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint8_t x57 = 0U;
	int16_t x58 = 249;
	uint16_t x59 = UINT16_MAX;
	uint16_t x60 = 7209U;

    t13 = (x57==(x58*(x59|x60)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x69 = UINT8_MAX;
	uint32_t x70 = 108151381U;
	static uint8_t x71 = 88U;
	static int64_t x72 = 689511LL;
	static int32_t t14 = -967248106;

    t14 = (x69==(x70*(x71|x72)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile uint64_t x74 = UINT64_MAX;
	int32_t x75 = INT32_MIN;
	int32_t t15 = -26269275;

    t15 = (x73==(x74*(x75|x76)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x77 = INT16_MIN;
	int8_t x79 = -21;
	uint64_t x80 = 292623LLU;
	int32_t t16 = 23036177;

    t16 = (x77==(x78*(x79|x80)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x81 = INT64_MIN;
	volatile int8_t x82 = INT8_MIN;
	int64_t x83 = -1LL;

    t17 = (x81==(x82*(x83|x84)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x86 = INT16_MIN;
	int64_t x87 = 290742682LL;
	int8_t x88 = -5;

    t18 = (x85==(x86*(x87|x88)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x89 = 17234U;
	int16_t x91 = 1;
	uint32_t x92 = 191752303U;

    t19 = (x89==(x90*(x91|x92)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x93 = INT8_MIN;
	int64_t x95 = -194034360692LL;
	int16_t x96 = -1;

    t20 = (x93==(x94*(x95|x96)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x97 = INT8_MIN;
	int16_t x98 = 0;
	static uint64_t x100 = 73698LLU;
	int32_t t21 = 45030302;

    t21 = (x97==(x98*(x99|x100)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x102 = -1;
	static uint8_t x103 = UINT8_MAX;
	static int16_t x104 = -13;
	int32_t t22 = 35213187;

    t22 = (x101==(x102*(x103|x104)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x114 = 36592284LLU;
	int32_t t23 = -2095;

    t23 = (x113==(x114*(x115|x116)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x118 = -1;
	static int32_t x119 = INT32_MIN;
	uint64_t x120 = 7LLU;

    t24 = (x117==(x118*(x119|x120)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x125 = -1LL;
	volatile uint8_t x126 = UINT8_MAX;
	volatile int8_t x128 = -1;
	int32_t t25 = -60280586;

    t25 = (x125==(x126*(x127|x128)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x129 = 1016541LLU;
	int16_t x130 = INT16_MIN;
	static int32_t x131 = -1;
	int32_t x132 = -8887;
	int32_t t26 = -1129569;

    t26 = (x129==(x130*(x131|x132)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x133 = 1;
	int16_t x134 = INT16_MIN;
	uint32_t x135 = 924508366U;
	volatile int32_t t27 = 11966;

    t27 = (x133==(x134*(x135|x136)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x137 = -1;
	int32_t x138 = INT32_MAX;
	int16_t x139 = INT16_MIN;
	int32_t t28 = -49126464;

    t28 = (x137==(x138*(x139|x140)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x141 = 736U;
	volatile int32_t x143 = INT32_MIN;
	volatile int16_t x144 = -1;
	volatile int32_t t29 = 7116703;

    t29 = (x141==(x142*(x143|x144)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x145 = -15187992342LL;
	int8_t x146 = 1;
	int8_t x147 = 0;
	volatile int32_t t30 = 0;

    t30 = (x145==(x146*(x147|x148)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x149 = 173205LLU;
	volatile uint64_t x150 = 12016451748LLU;
	volatile int32_t t31 = 6004;

    t31 = (x149==(x150*(x151|x152)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x153 = INT8_MIN;
	uint16_t x154 = 1308U;
	uint16_t x155 = 4U;
	int8_t x156 = INT8_MIN;
	volatile int32_t t32 = 37255;

    t32 = (x153==(x154*(x155|x156)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint8_t x157 = 12U;
	uint16_t x158 = 1296U;
	int32_t x159 = -81022;
	volatile uint64_t x160 = 9LLU;

    t33 = (x157==(x158*(x159|x160)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint8_t x161 = 2U;
	static uint64_t x162 = 305LLU;
	uint16_t x163 = 3U;
	static volatile int32_t t34 = -191022014;

    t34 = (x161==(x162*(x163|x164)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x165 = 1;
	volatile uint64_t x166 = 411364036LLU;
	uint32_t x167 = UINT32_MAX;
	int32_t x168 = INT32_MIN;
	volatile int32_t t35 = 1647574;

    t35 = (x165==(x166*(x167|x168)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x169 = -1;
	static int64_t x170 = -1LL;
	int32_t x171 = -2688;

    t36 = (x169==(x170*(x171|x172)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x175 = INT32_MIN;
	static int32_t x176 = -16355;
	int32_t t37 = -8093879;

    t37 = (x173==(x174*(x175|x176)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint64_t x181 = 16002908817557482LLU;
	uint64_t x182 = UINT64_MAX;
	int8_t x183 = INT8_MAX;
	volatile int32_t t38 = 5738920;

    t38 = (x181==(x182*(x183|x184)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x190 = -6;
	int32_t t39 = -314164;

    t39 = (x189==(x190*(x191|x192)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x193 = -1;
	uint16_t x194 = 31641U;
	int64_t x195 = -1LL;
	int32_t t40 = -34704;

    t40 = (x193==(x194*(x195|x196)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint16_t x198 = 3U;
	volatile int16_t x199 = 1761;

    t41 = (x197==(x198*(x199|x200)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x201 = -1LL;
	static int64_t x202 = INT64_MIN;
	volatile uint64_t x204 = 17LLU;
	int32_t t42 = 26658;

    t42 = (x201==(x202*(x203|x204)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x206 = -10168;
	volatile uint16_t x208 = UINT16_MAX;
	volatile int32_t t43 = 1;

    t43 = (x205==(x206*(x207|x208)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x209 = -33;
	static uint32_t x210 = UINT32_MAX;
	int32_t x211 = INT32_MIN;
	int32_t t44 = 517635;

    t44 = (x209==(x210*(x211|x212)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int64_t x213 = INT64_MIN;
	uint32_t x214 = 109U;
	uint32_t x215 = 4795671U;
	int16_t x216 = INT16_MIN;
	volatile int32_t t45 = 1893689;

    t45 = (x213==(x214*(x215|x216)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x217 = INT16_MAX;
	uint16_t x218 = 5332U;
	uint32_t x219 = 85U;
	uint16_t x220 = 3155U;
	int32_t t46 = 38840;

    t46 = (x217==(x218*(x219|x220)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int8_t x225 = INT8_MIN;
	uint64_t x226 = 2841806LLU;
	uint32_t x227 = UINT32_MAX;
	int8_t x228 = INT8_MAX;

    t47 = (x225==(x226*(x227|x228)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x229 = 10;
	int8_t x230 = -34;
	int16_t x231 = INT16_MIN;
	static uint8_t x232 = UINT8_MAX;
	int32_t t48 = 513356458;

    t48 = (x229==(x230*(x231|x232)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int32_t x233 = INT32_MIN;
	uint16_t x234 = UINT16_MAX;
	int32_t x235 = -568823665;
	static volatile int16_t x236 = INT16_MIN;
	int32_t t49 = 36220;

    t49 = (x233==(x234*(x235|x236)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x237 = INT8_MAX;
	int64_t x238 = INT64_MIN;
	static int32_t x239 = 1;

    t50 = (x237==(x238*(x239|x240)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x243 = INT16_MAX;
	int32_t t51 = -107;

    t51 = (x241==(x242*(x243|x244)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x246 = INT8_MIN;
	uint64_t x247 = 139638778LLU;

    t52 = (x245==(x246*(x247|x248)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint8_t x261 = UINT8_MAX;
	static uint16_t x262 = 0U;
	uint16_t x263 = 9714U;
	uint16_t x264 = UINT16_MAX;
	int32_t t53 = 5060318;

    t53 = (x261==(x262*(x263|x264)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x265 = -1;
	int64_t x266 = -1LL;
	static int8_t x267 = -9;
	volatile int32_t t54 = -7;

    t54 = (x265==(x266*(x267|x268)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x269 = INT8_MIN;
	uint16_t x270 = 728U;
	volatile uint16_t x272 = 1475U;
	volatile int32_t t55 = 16005;

    t55 = (x269==(x270*(x271|x272)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x273 = INT64_MAX;
	int64_t x274 = -4318368993259154896LL;
	uint32_t x275 = 64482U;
	volatile int32_t t56 = -175;

    t56 = (x273==(x274*(x275|x276)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x277 = 1;
	int8_t x279 = 1;
	static volatile int16_t x280 = 3808;

    t57 = (x277==(x278*(x279|x280)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x282 = 199051403U;
	volatile uint64_t x283 = UINT64_MAX;
	volatile int8_t x284 = -1;
	volatile int32_t t58 = -97;

    t58 = (x281==(x282*(x283|x284)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x285 = 1045;
	uint8_t x286 = 1U;
	uint32_t x287 = UINT32_MAX;
	int16_t x288 = 14;

    t59 = (x285==(x286*(x287|x288)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x289 = 4301198223284LL;
	int64_t x290 = -587860355589871406LL;
	static int32_t t60 = -29001;

    t60 = (x289==(x290*(x291|x292)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x293 = -18923252;
	volatile int16_t x294 = INT16_MIN;
	int64_t x295 = 52153770LL;
	int32_t t61 = -10771267;

    t61 = (x293==(x294*(x295|x296)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x297 = 163938;
	volatile int32_t x298 = -38;
	volatile int8_t x299 = -22;
	int32_t x300 = INT32_MIN;
	int32_t t62 = 34;

    t62 = (x297==(x298*(x299|x300)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x301 = INT8_MIN;
	int16_t x303 = INT16_MAX;
	volatile int8_t x304 = -3;
	int32_t t63 = -114;

    t63 = (x301==(x302*(x303|x304)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x305 = 16297865U;
	uint16_t x306 = 0U;
	int8_t x307 = 3;
	int8_t x308 = INT8_MIN;
	volatile int32_t t64 = -1;

    t64 = (x305==(x306*(x307|x308)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x311 = -4;
	int32_t t65 = 1270;

    t65 = (x309==(x310*(x311|x312)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x317 = -400545419582596837LL;
	uint32_t x318 = 362341020U;
	int64_t x320 = -1LL;
	static int32_t t66 = -3310;

    t66 = (x317==(x318*(x319|x320)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint16_t x325 = 1U;
	int8_t x326 = INT8_MIN;
	int16_t x327 = -1;
	int8_t x328 = INT8_MAX;
	volatile int32_t t67 = 30403000;

    t67 = (x325==(x326*(x327|x328)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x329 = INT64_MIN;
	static volatile int16_t x330 = -1;
	int32_t x332 = INT32_MIN;
	int32_t t68 = 1;

    t68 = (x329==(x330*(x331|x332)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x333 = -1;
	volatile int64_t x334 = 201386868083357304LL;
	int32_t x335 = -1;
	int32_t x336 = INT32_MIN;
	int32_t t69 = -1860277;

    t69 = (x333==(x334*(x335|x336)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile int16_t x337 = -28;
	uint64_t x338 = 3581320215822399LLU;
	static int64_t x339 = -56908679575315945LL;
	int8_t x340 = -1;
	int32_t t70 = 2;

    t70 = (x337==(x338*(x339|x340)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint32_t x341 = 6U;
	int32_t x342 = -1;
	int64_t x344 = INT64_MIN;
	int32_t t71 = 350853;

    t71 = (x341==(x342*(x343|x344)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x345 = INT16_MIN;
	volatile int64_t x346 = -2LL;
	uint64_t x347 = UINT64_MAX;
	volatile int32_t t72 = -34394;

    t72 = (x345==(x346*(x347|x348)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x349 = UINT16_MAX;
	int8_t x350 = -1;
	int64_t x351 = -3LL;
	uint64_t x352 = 277360400410LLU;
	int32_t t73 = -301635;

    t73 = (x349==(x350*(x351|x352)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x355 = 43885751LLU;
	volatile int32_t t74 = -4455;

    t74 = (x353==(x354*(x355|x356)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x357 = -1;
	int32_t x358 = 113;
	static int16_t x359 = INT16_MAX;
	int32_t x360 = 34;
	volatile int32_t t75 = -16544683;

    t75 = (x357==(x358*(x359|x360)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x363 = 2302LLU;

    t76 = (x361==(x362*(x363|x364)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x369 = INT32_MIN;
	int32_t x370 = 7696;
	static int64_t x371 = INT64_MAX;
	int16_t x372 = INT16_MIN;
	volatile int32_t t77 = 126;

    t77 = (x369==(x370*(x371|x372)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x374 = -1;
	volatile int64_t x375 = INT64_MIN;
	int16_t x376 = INT16_MIN;
	volatile int32_t t78 = 16548;

    t78 = (x373==(x374*(x375|x376)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint64_t x378 = 29371160LLU;
	uint16_t x380 = UINT16_MAX;
	volatile int32_t t79 = 116;

    t79 = (x377==(x378*(x379|x380)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x389 = -1LL;
	volatile uint32_t x390 = 0U;
	volatile int64_t x391 = INT64_MIN;
	volatile int32_t t80 = -285;

    t80 = (x389==(x390*(x391|x392)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x393 = INT8_MIN;
	static int32_t x394 = -1;
	volatile int8_t x395 = -1;
	volatile uint16_t x396 = UINT16_MAX;
	volatile int32_t t81 = -5;

    t81 = (x393==(x394*(x395|x396)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x397 = -62102099384309LL;
	volatile uint16_t x398 = 7U;
	uint64_t x399 = 13099LLU;
	volatile int32_t t82 = -1;

    t82 = (x397==(x398*(x399|x400)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x403 = 1U;
	int16_t x404 = INT16_MIN;
	int32_t t83 = 174;

    t83 = (x401==(x402*(x403|x404)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x405 = 129700100LL;
	static int16_t x406 = 2307;
	static int32_t x407 = 32079155;
	int64_t x408 = -2859355359485LL;

    t84 = (x405==(x406*(x407|x408)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x409 = -46;
	int16_t x410 = 0;
	int32_t x411 = INT32_MIN;
	static int16_t x412 = INT16_MAX;
	static int32_t t85 = -398;

    t85 = (x409==(x410*(x411|x412)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x413 = 2636U;
	static int8_t x414 = -1;
	uint8_t x415 = 10U;
	int8_t x416 = 0;
	int32_t t86 = -75651;

    t86 = (x413==(x414*(x415|x416)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x417 = -1709;
	int64_t x418 = INT64_MAX;
	int8_t x419 = -1;
	static int64_t x420 = -1LL;
	int32_t t87 = 99842230;

    t87 = (x417==(x418*(x419|x420)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x426 = -1;
	uint32_t x427 = UINT32_MAX;
	int8_t x428 = INT8_MAX;

    t88 = (x425==(x426*(x427|x428)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x430 = -13133;
	int32_t x431 = INT32_MIN;
	static volatile uint64_t x432 = 819955121488208LLU;
	static int32_t t89 = -932410315;

    t89 = (x429==(x430*(x431|x432)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x438 = 6U;
	volatile int32_t x439 = INT32_MAX;
	int64_t x440 = 184152826415816003LL;
	volatile int32_t t90 = 52272032;

    t90 = (x437==(x438*(x439|x440)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x442 = -3;
	int64_t x443 = INT64_MIN;
	int8_t x444 = -1;

    t91 = (x441==(x442*(x443|x444)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x445 = 41877662864482LL;
	volatile int16_t x446 = INT16_MAX;
	int32_t x447 = INT32_MAX;
	volatile int32_t t92 = -1;

    t92 = (x445==(x446*(x447|x448)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x453 = INT16_MIN;
	volatile uint8_t x454 = 0U;
	int64_t x455 = 108256LL;
	int8_t x456 = INT8_MIN;
	volatile int32_t t93 = 3;

    t93 = (x453==(x454*(x455|x456)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x457 = -1;
	uint64_t x459 = 46670LLU;
	uint8_t x460 = 1U;
	volatile int32_t t94 = 14403753;

    t94 = (x457==(x458*(x459|x460)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x461 = -4;
	int32_t t95 = 0;

    t95 = (x461==(x462*(x463|x464)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x465 = -1;
	volatile int16_t x466 = 439;
	static uint16_t x468 = UINT16_MAX;
	int32_t t96 = -7711;

    t96 = (x465==(x466*(x467|x468)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x469 = INT64_MAX;
	volatile uint64_t x471 = 6169048494509LLU;
	static volatile uint16_t x472 = 21U;
	volatile int32_t t97 = -3753;

    t97 = (x469==(x470*(x471|x472)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint32_t x473 = 20756U;
	int64_t x474 = -37493027375535LL;
	uint64_t x475 = 3032824900LLU;
	int32_t x476 = INT32_MAX;
	int32_t t98 = 7;

    t98 = (x473==(x474*(x475|x476)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x477 = 2011690U;
	uint64_t x478 = 7655165678266201053LLU;
	volatile uint32_t x479 = 244U;
	int32_t x480 = INT32_MIN;
	int32_t t99 = 2;

    t99 = (x477==(x478*(x479|x480)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x482 = INT16_MIN;
	uint64_t x483 = 599946668LLU;
	static int64_t x484 = -4LL;
	volatile int32_t t100 = 84272358;

    t100 = (x481==(x482*(x483|x484)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x489 = INT32_MIN;
	int32_t x490 = -1;
	uint32_t x491 = UINT32_MAX;
	static volatile uint16_t x492 = 1298U;
	static volatile int32_t t101 = 296593;

    t101 = (x489==(x490*(x491|x492)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint64_t x493 = 0LLU;
	volatile uint32_t x494 = UINT32_MAX;
	volatile uint32_t x495 = 1U;
	int16_t x496 = 1027;
	int32_t t102 = 12123528;

    t102 = (x493==(x494*(x495|x496)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x497 = 7U;
	int16_t x499 = INT16_MAX;
	uint8_t x500 = 52U;
	int32_t t103 = -399824430;

    t103 = (x497==(x498*(x499|x500)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x501 = 53U;
	int32_t x502 = -6;
	uint64_t x503 = UINT64_MAX;
	static volatile int8_t x504 = -24;
	volatile int32_t t104 = 132083243;

    t104 = (x501==(x502*(x503|x504)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int64_t x509 = INT64_MAX;
	int8_t x510 = INT8_MAX;
	static volatile int32_t x511 = -237;
	static int32_t x512 = INT32_MIN;
	static volatile int32_t t105 = -65051969;

    t105 = (x509==(x510*(x511|x512)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x517 = -1;
	int32_t t106 = -4419;

    t106 = (x517==(x518*(x519|x520)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint32_t x521 = UINT32_MAX;
	static int64_t x522 = -1LL;
	static volatile int32_t t107 = -50104766;

    t107 = (x521==(x522*(x523|x524)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x525 = INT64_MAX;
	int32_t x528 = -6664585;
	int32_t t108 = -2982772;

    t108 = (x525==(x526*(x527|x528)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x529 = -1;
	int8_t x531 = -1;
	int16_t x532 = -2;
	int32_t t109 = 2137580;

    t109 = (x529==(x530*(x531|x532)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x541 = -1LL;
	volatile int16_t x542 = -1;
	volatile int8_t x543 = INT8_MIN;
	static uint16_t x544 = UINT16_MAX;
	volatile int32_t t110 = -18;

    t110 = (x541==(x542*(x543|x544)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x546 = 1;
	int16_t x547 = INT16_MIN;
	uint8_t x548 = UINT8_MAX;
	volatile int32_t t111 = -851524128;

    t111 = (x545==(x546*(x547|x548)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x549 = 265256U;
	uint64_t x550 = 1086763611808266LLU;
	static int16_t x551 = -8768;
	volatile int32_t t112 = -1;

    t112 = (x549==(x550*(x551|x552)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x559 = UINT8_MAX;
	int16_t x560 = INT16_MIN;
	volatile int32_t t113 = -650743918;

    t113 = (x557==(x558*(x559|x560)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x561 = INT16_MIN;
	int32_t t114 = -670;

    t114 = (x561==(x562*(x563|x564)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x565 = -1LL;
	int8_t x566 = -30;
	volatile int64_t x568 = 291405LL;
	static int32_t t115 = 4514743;

    t115 = (x565==(x566*(x567|x568)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x569 = INT64_MAX;
	int8_t x570 = 12;
	static volatile int32_t t116 = -24365;

    t116 = (x569==(x570*(x571|x572)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x577 = INT32_MAX;
	int32_t x578 = -1;
	int16_t x579 = INT16_MIN;
	volatile int32_t t117 = -3156;

    t117 = (x577==(x578*(x579|x580)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x581 = -1139;
	int16_t x582 = INT16_MIN;
	volatile uint64_t x583 = UINT64_MAX;
	volatile uint8_t x584 = 49U;
	volatile int32_t t118 = -1;

    t118 = (x581==(x582*(x583|x584)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x593 = 135U;
	volatile int8_t x594 = INT8_MAX;
	static int16_t x595 = -1;
	int64_t x596 = INT64_MAX;
	static int32_t t119 = -45;

    t119 = (x593==(x594*(x595|x596)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int64_t x597 = -1LL;
	int64_t x599 = -1LL;
	int8_t x600 = -1;
	int32_t t120 = -207;

    t120 = (x597==(x598*(x599|x600)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint32_t x602 = 1U;
	volatile uint64_t x603 = UINT64_MAX;
	int8_t x604 = INT8_MIN;
	static int32_t t121 = -17;

    t121 = (x601==(x602*(x603|x604)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x605 = UINT8_MAX;
	uint16_t x606 = 54U;
	int64_t x607 = INT64_MAX;
	static int8_t x608 = INT8_MIN;
	int32_t t122 = -31557;

    t122 = (x605==(x606*(x607|x608)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint16_t x609 = 1U;
	volatile int16_t x610 = INT16_MAX;
	uint8_t x611 = UINT8_MAX;
	static uint32_t x612 = 1U;
	int32_t t123 = 1232;

    t123 = (x609==(x610*(x611|x612)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x613 = 71546LL;
	uint16_t x614 = 937U;
	static int64_t x615 = INT64_MAX;
	int64_t x616 = INT64_MIN;
	static volatile int32_t t124 = -1;

    t124 = (x613==(x614*(x615|x616)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x617 = INT8_MAX;
	static int8_t x618 = INT8_MIN;
	int8_t x619 = -1;
	uint64_t x620 = 3LLU;
	int32_t t125 = -116760256;

    t125 = (x617==(x618*(x619|x620)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x621 = INT64_MAX;
	int16_t x623 = INT16_MIN;
	uint8_t x624 = UINT8_MAX;

    t126 = (x621==(x622*(x623|x624)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x625 = UINT64_MAX;
	uint32_t x626 = 78U;
	volatile int64_t x627 = -627045674LL;
	int8_t x628 = 12;
	volatile int32_t t127 = 12029118;

    t127 = (x625==(x626*(x627|x628)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x629 = -1;
	volatile int64_t x630 = 105350650877753912LL;
	uint16_t x631 = UINT16_MAX;
	static int64_t x632 = -7152LL;
	static int32_t t128 = -842366;

    t128 = (x629==(x630*(x631|x632)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x633 = UINT8_MAX;
	static int64_t x634 = -1LL;
	int64_t x635 = INT64_MIN;
	int8_t x636 = -1;
	static volatile int32_t t129 = 465422;

    t129 = (x633==(x634*(x635|x636)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int64_t x637 = INT64_MIN;
	uint16_t x638 = UINT16_MAX;
	uint64_t x640 = 5LLU;
	int32_t t130 = -305;

    t130 = (x637==(x638*(x639|x640)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x642 = INT16_MIN;
	volatile uint32_t x644 = UINT32_MAX;

    t131 = (x641==(x642*(x643|x644)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x646 = INT16_MAX;
	int32_t x647 = -1;
	uint16_t x648 = UINT16_MAX;
	volatile int32_t t132 = -16208;

    t132 = (x645==(x646*(x647|x648)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x650 = 0U;
	uint8_t x651 = UINT8_MAX;
	volatile int64_t x652 = -1LL;

    t133 = (x649==(x650*(x651|x652)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x656 = UINT16_MAX;
	static int32_t t134 = -1;

    t134 = (x653==(x654*(x655|x656)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x661 = INT16_MIN;
	volatile int8_t x662 = -1;
	uint32_t x664 = 29U;
	volatile int32_t t135 = 1367;

    t135 = (x661==(x662*(x663|x664)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x669 = UINT64_MAX;
	int64_t x671 = INT64_MIN;
	int8_t x672 = INT8_MAX;
	volatile int32_t t136 = -183847;

    t136 = (x669==(x670*(x671|x672)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x673 = INT8_MIN;
	volatile int16_t x674 = INT16_MIN;
	static uint64_t x675 = 4336339LLU;
	int16_t x676 = 1;
	int32_t t137 = -7;

    t137 = (x673==(x674*(x675|x676)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x681 = 14674591;
	uint32_t x682 = 0U;
	int16_t x683 = INT16_MIN;
	int16_t x684 = INT16_MAX;
	volatile int32_t t138 = -1;

    t138 = (x681==(x682*(x683|x684)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int64_t x689 = 4571LL;
	volatile uint64_t x690 = UINT64_MAX;
	int32_t x692 = INT32_MIN;

    t139 = (x689==(x690*(x691|x692)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x693 = INT16_MAX;
	static uint8_t x694 = 2U;
	uint8_t x695 = 0U;
	int16_t x696 = INT16_MAX;
	int32_t t140 = 7772;

    t140 = (x693==(x694*(x695|x696)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x697 = INT8_MIN;
	static volatile int32_t x698 = INT32_MIN;
	int32_t x699 = INT32_MIN;
	volatile int32_t t141 = -9681;

    t141 = (x697==(x698*(x699|x700)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int32_t x701 = -1;
	int16_t x702 = INT16_MIN;
	int64_t x703 = -1LL;
	volatile int32_t t142 = -1671185;

    t142 = (x701==(x702*(x703|x704)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int64_t x705 = 1827LL;
	int64_t x706 = 916087089934244LL;
	uint64_t x707 = 3LLU;
	int32_t x708 = INT32_MAX;
	int32_t t143 = -3726;

    t143 = (x705==(x706*(x707|x708)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint64_t x709 = 0LLU;
	int32_t x710 = 12;
	int8_t x711 = INT8_MAX;
	int64_t x712 = 1809981450323LL;

    t144 = (x709==(x710*(x711|x712)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint32_t x713 = UINT32_MAX;
	volatile int8_t x714 = INT8_MIN;
	uint64_t x715 = 210LLU;
	int32_t t145 = -8547910;

    t145 = (x713==(x714*(x715|x716)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x721 = 406LL;
	volatile uint64_t x722 = 12LLU;
	volatile uint64_t x723 = 5784747358714LLU;
	volatile int32_t t146 = -434838;

    t146 = (x721==(x722*(x723|x724)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x725 = -1;
	uint32_t x726 = 1586U;
	int64_t x727 = 506LL;
	int8_t x728 = -1;
	int32_t t147 = -23;

    t147 = (x725==(x726*(x727|x728)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x742 = UINT32_MAX;
	static volatile uint32_t x743 = UINT32_MAX;
	int16_t x744 = INT16_MIN;
	static volatile int32_t t148 = 6913;

    t148 = (x741==(x742*(x743|x744)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x745 = 20U;
	volatile uint32_t x746 = UINT32_MAX;
	static int8_t x747 = -1;

    t149 = (x745==(x746*(x747|x748)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x753 = 2493353LL;
	static int16_t x754 = -1;
	static uint8_t x755 = 3U;
	int64_t x756 = 59502800594617922LL;
	volatile int32_t t150 = -14;

    t150 = (x753==(x754*(x755|x756)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x757 = INT64_MIN;
	volatile int16_t x758 = -1;
	int64_t x759 = -300216036LL;
	int8_t x760 = -1;
	static int32_t t151 = 920067;

    t151 = (x757==(x758*(x759|x760)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint32_t x761 = UINT32_MAX;
	static volatile uint8_t x763 = 1U;
	uint8_t x764 = UINT8_MAX;
	volatile int32_t t152 = 916909;

    t152 = (x761==(x762*(x763|x764)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x770 = -1;
	uint16_t x771 = 720U;
	static uint64_t x772 = 9660416570142LLU;
	volatile int32_t t153 = -518723;

    t153 = (x769==(x770*(x771|x772)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint8_t x773 = UINT8_MAX;
	uint32_t x774 = 5U;
	uint16_t x775 = 241U;
	uint16_t x776 = 429U;
	int32_t t154 = 1420;

    t154 = (x773==(x774*(x775|x776)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x777 = -17;
	int8_t x778 = INT8_MAX;
	int16_t x779 = -1;
	int32_t x780 = 0;
	static int32_t t155 = 10338;

    t155 = (x777==(x778*(x779|x780)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x781 = 63U;
	int8_t x782 = 1;
	uint64_t x783 = 542889749766798LLU;
	uint8_t x784 = UINT8_MAX;

    t156 = (x781==(x782*(x783|x784)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x785 = 1;
	volatile int32_t t157 = 2321273;

    t157 = (x785==(x786*(x787|x788)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x790 = -1;
	uint32_t x791 = 3481629U;
	int8_t x792 = INT8_MAX;
	int32_t t158 = -83058;

    t158 = (x789==(x790*(x791|x792)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x797 = -1;
	static int16_t x798 = 0;
	static int64_t x800 = -1LL;
	static int32_t t159 = 13145;

    t159 = (x797==(x798*(x799|x800)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x802 = -1;
	int64_t x803 = INT64_MIN;
	uint8_t x804 = UINT8_MAX;
	int32_t t160 = -120456;

    t160 = (x801==(x802*(x803|x804)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x805 = INT32_MIN;
	uint8_t x806 = 21U;
	int64_t x807 = INT64_MAX;
	volatile int64_t x808 = INT64_MIN;
	static int32_t t161 = 3882;

    t161 = (x805==(x806*(x807|x808)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x809 = 28U;
	static volatile int32_t x810 = -1;
	uint64_t x811 = 62087582172482956LLU;
	volatile int32_t x812 = -1;
	int32_t t162 = 4207248;

    t162 = (x809==(x810*(x811|x812)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int8_t x813 = INT8_MIN;
	int8_t x816 = 5;
	static volatile int32_t t163 = 182288251;

    t163 = (x813==(x814*(x815|x816)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x817 = -1LL;
	volatile int32_t x818 = INT32_MIN;
	static volatile int64_t x820 = INT64_MIN;

    t164 = (x817==(x818*(x819|x820)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x821 = INT16_MIN;
	int16_t x822 = -388;
	int64_t x823 = INT64_MAX;
	int16_t x824 = -1334;

    t165 = (x821==(x822*(x823|x824)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x826 = -21;
	uint16_t x827 = 222U;
	int32_t t166 = 236873;

    t166 = (x825==(x826*(x827|x828)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x833 = INT64_MIN;
	static int32_t x834 = INT32_MAX;
	volatile uint32_t x835 = UINT32_MAX;
	int64_t x836 = -107LL;
	static volatile int32_t t167 = -643776737;

    t167 = (x833==(x834*(x835|x836)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x837 = 13U;
	uint8_t x838 = UINT8_MAX;
	volatile uint8_t x839 = UINT8_MAX;
	int16_t x840 = INT16_MAX;
	volatile int32_t t168 = -31647242;

    t168 = (x837==(x838*(x839|x840)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int8_t x841 = INT8_MIN;
	volatile uint32_t x842 = 8006044U;
	int32_t x843 = INT32_MIN;
	static uint16_t x844 = 2522U;
	int32_t t169 = 42;

    t169 = (x841==(x842*(x843|x844)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x853 = INT8_MIN;
	int32_t x854 = -1;
	int8_t x855 = 1;
	int32_t t170 = 57347;

    t170 = (x853==(x854*(x855|x856)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x857 = UINT32_MAX;
	int8_t x858 = INT8_MIN;
	uint64_t x859 = 1332054280061883LLU;
	static int8_t x860 = -1;

    t171 = (x857==(x858*(x859|x860)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile uint16_t x861 = 730U;
	int8_t x862 = INT8_MAX;
	static int32_t x863 = INT32_MIN;

    t172 = (x861==(x862*(x863|x864)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x865 = INT8_MIN;
	int8_t x866 = INT8_MAX;
	uint32_t x867 = 2735U;
	uint8_t x868 = 4U;
	static volatile int32_t t173 = 7;

    t173 = (x865==(x866*(x867|x868)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x869 = 53U;
	int32_t x870 = INT32_MAX;
	static volatile int32_t x871 = 26833;
	int8_t x872 = -1;
	volatile int32_t t174 = -120719548;

    t174 = (x869==(x870*(x871|x872)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int16_t x873 = INT16_MAX;
	static int8_t x874 = -1;
	int16_t x875 = 3;
	int8_t x876 = -1;
	int32_t t175 = 11096608;

    t175 = (x873==(x874*(x875|x876)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int8_t x881 = INT8_MIN;
	int16_t x884 = -56;
	static volatile int32_t t176 = -55;

    t176 = (x881==(x882*(x883|x884)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x885 = INT32_MIN;
	int8_t x886 = INT8_MAX;
	uint32_t x887 = 998493U;
	int8_t x888 = -1;
	int32_t t177 = 825;

    t177 = (x885==(x886*(x887|x888)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x889 = INT64_MIN;
	volatile uint16_t x890 = 37U;
	uint8_t x891 = 36U;
	static int64_t x892 = 318774926103LL;
	volatile int32_t t178 = -3;

    t178 = (x889==(x890*(x891|x892)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int8_t x897 = -14;
	static int8_t x898 = 2;
	int32_t x899 = INT32_MIN;
	static int8_t x900 = INT8_MIN;

    t179 = (x897==(x898*(x899|x900)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x901 = 1;
	int16_t x902 = INT16_MIN;
	static int64_t x903 = 50237749LL;
	volatile uint32_t x904 = 6965598U;
	volatile int32_t t180 = 6;

    t180 = (x901==(x902*(x903|x904)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int32_t x905 = -1;
	int64_t x906 = -7696846452363LL;
	int8_t x907 = INT8_MIN;
	uint8_t x908 = 5U;

    t181 = (x905==(x906*(x907|x908)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x913 = UINT8_MAX;
	int32_t x914 = INT32_MIN;
	int64_t x916 = INT64_MIN;
	volatile int32_t t182 = 1085;

    t182 = (x913==(x914*(x915|x916)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile uint64_t x917 = 7673LLU;
	uint16_t x918 = UINT16_MAX;
	int64_t x919 = INT64_MAX;
	int8_t x920 = -1;

    t183 = (x917==(x918*(x919|x920)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x921 = INT32_MIN;
	static int32_t x922 = 1946;
	int32_t x923 = INT32_MIN;
	int64_t x924 = INT64_MIN;
	static volatile int32_t t184 = -3716;

    t184 = (x921==(x922*(x923|x924)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x927 = -1LL;
	static int16_t x928 = -1;
	volatile int32_t t185 = -15;

    t185 = (x925==(x926*(x927|x928)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x929 = 883U;
	volatile uint32_t x930 = UINT32_MAX;
	volatile uint16_t x931 = 2006U;
	static volatile int32_t t186 = 1703608;

    t186 = (x929==(x930*(x931|x932)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int64_t x933 = INT64_MIN;
	int32_t x935 = -249679708;
	int64_t x936 = 2796519872752408LL;
	int32_t t187 = 1071191;

    t187 = (x933==(x934*(x935|x936)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x945 = 399785064328897LLU;
	int32_t x946 = -1;
	uint8_t x947 = UINT8_MAX;
	uint32_t x948 = UINT32_MAX;

    t188 = (x945==(x946*(x947|x948)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x949 = INT16_MIN;
	int16_t x950 = -71;
	static int8_t x951 = -1;
	volatile uint64_t x952 = 50642645732LLU;
	volatile int32_t t189 = -2670085;

    t189 = (x949==(x950*(x951|x952)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x953 = -4;
	uint16_t x954 = UINT16_MAX;
	static int32_t x955 = INT32_MAX;
	int32_t x956 = INT32_MIN;
	static volatile int32_t t190 = 139108758;

    t190 = (x953==(x954*(x955|x956)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint8_t x961 = 7U;
	uint8_t x962 = UINT8_MAX;
	static int32_t x964 = INT32_MIN;

    t191 = (x961==(x962*(x963|x964)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x977 = 2;
	int64_t x978 = INT64_MIN;
	uint64_t x979 = 1470653317816LLU;
	static uint64_t x980 = 3626448040976586697LLU;
	volatile int32_t t192 = 1027570142;

    t192 = (x977==(x978*(x979|x980)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x985 = UINT64_MAX;
	volatile uint32_t x986 = UINT32_MAX;
	static volatile uint64_t x987 = 15497LLU;
	volatile int8_t x988 = INT8_MAX;
	volatile int32_t t193 = 8542;

    t193 = (x985==(x986*(x987|x988)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x989 = 438335;
	int8_t x990 = -1;
	int8_t x991 = 2;
	uint64_t x992 = 39381213838704395LLU;
	volatile int32_t t194 = 8;

    t194 = (x989==(x990*(x991|x992)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x997 = -1029604416LL;
	static uint16_t x998 = 5442U;
	volatile int32_t t195 = -20080790;

    t195 = (x997==(x998*(x999|x1000)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x1001 = INT32_MIN;
	uint32_t x1002 = 10611U;
	int8_t x1003 = -1;
	uint64_t x1004 = UINT64_MAX;
	int32_t t196 = 55;

    t196 = (x1001==(x1002*(x1003|x1004)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x1005 = INT32_MIN;
	uint64_t x1006 = 10867LLU;
	int8_t x1007 = INT8_MIN;
	uint32_t x1008 = UINT32_MAX;

    t197 = (x1005==(x1006*(x1007|x1008)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x1009 = INT16_MIN;
	uint8_t x1010 = 13U;
	volatile int64_t x1011 = 22LL;
	int8_t x1012 = INT8_MIN;
	volatile int32_t t198 = -162755;

    t198 = (x1009==(x1010*(x1011|x1012)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint8_t x1014 = 6U;
	int16_t x1015 = 1;

    t199 = (x1013==(x1014*(x1015|x1016)));

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

