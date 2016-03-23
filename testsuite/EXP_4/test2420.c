
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

int8_t x3 = INT8_MIN;
uint32_t t1 = 30U;
int16_t x10 = -1;
static uint32_t x15 = 205615U;
volatile int16_t x16 = -1;
static volatile uint32_t t3 = 1U;
static volatile int32_t x23 = INT32_MAX;
volatile int32_t t5 = 82;
int16_t x25 = -305;
volatile int16_t x29 = -1;
int32_t x31 = -1;
static volatile int32_t t7 = 0;
uint8_t x33 = UINT8_MAX;
int16_t x38 = INT16_MIN;
volatile int16_t x41 = INT16_MAX;
static int8_t x42 = 30;
uint32_t x61 = 112783U;
volatile int64_t x63 = -1529908602LL;
static uint8_t x66 = 103U;
int64_t x75 = INT64_MIN;
int16_t x85 = 0;
int8_t x88 = 1;
volatile int64_t x90 = INT64_MIN;
static int32_t t23 = -320483;
int32_t x100 = 749297;
volatile int64_t t24 = -288LL;
static uint64_t x102 = UINT64_MAX;
uint32_t x110 = 155704839U;
static int64_t x111 = 20441204LL;
static uint64_t t29 = 6660727LLU;
int64_t x123 = INT64_MAX;
int64_t t30 = -11754LL;
uint8_t x128 = 22U;
int64_t x132 = INT64_MIN;
uint32_t x143 = UINT32_MAX;
volatile uint64_t t35 = 54190908028647LLU;
volatile uint64_t x147 = 3277113489LLU;
int64_t t37 = -93432LL;
uint32_t x156 = 3U;
static int64_t x158 = INT64_MIN;
static int64_t t39 = -20496668147LL;
int32_t x161 = INT32_MIN;
volatile int8_t x164 = 0;
volatile int32_t x165 = INT32_MAX;
int16_t x166 = -1;
static int64_t x167 = INT64_MAX;
int64_t t41 = -100271588LL;
static uint64_t t43 = 1633LLU;
int32_t x179 = 121485;
int64_t x189 = -1LL;
int64_t x203 = -29009772919LL;
int32_t x204 = -1;
int32_t x208 = -118202;
volatile uint64_t t51 = 30LLU;
static int8_t x209 = -1;
uint64_t x213 = UINT64_MAX;
uint8_t x217 = 9U;
static int64_t x231 = -1LL;
static uint16_t x232 = 2209U;
volatile int32_t x235 = INT32_MIN;
volatile int8_t x243 = 12;
uint8_t x245 = 4U;
volatile int8_t x252 = -22;
int32_t x253 = INT32_MAX;
int16_t x260 = 3;
int64_t t64 = -247LL;
static int64_t x263 = 2LL;
uint16_t x266 = UINT16_MAX;
volatile int32_t t67 = 121;
int32_t x279 = -61220025;
int64_t x280 = -260738LL;
int32_t t70 = -6086;
int64_t x289 = INT64_MAX;
int64_t t72 = INT64_MAX;
static int32_t x293 = -30;
int32_t x294 = INT32_MAX;
int64_t x299 = INT64_MIN;
int64_t x300 = INT64_MAX;
volatile int8_t x301 = INT8_MIN;
static uint8_t x306 = 0U;
uint64_t x309 = 20059LLU;
int16_t x318 = -204;
static int32_t x323 = INT32_MIN;
int64_t x324 = -1LL;
volatile int64_t t80 = 1LL;
int16_t x325 = INT16_MIN;
int64_t x330 = INT64_MIN;
static int64_t x333 = INT64_MAX;
volatile int32_t x335 = INT32_MAX;
volatile int32_t x336 = -1;
int64_t t83 = 52079LL;
int16_t x340 = -1120;
int64_t x341 = -1LL;
static int32_t x352 = 97671279;
volatile int64_t t87 = 996524121181LL;
volatile int16_t x353 = INT16_MAX;
volatile uint64_t t88 = 11195005193483053LLU;
int32_t x361 = INT32_MAX;
int8_t x362 = INT8_MAX;
volatile int8_t x367 = INT8_MAX;
int16_t x371 = INT16_MAX;
static volatile uint16_t x372 = UINT16_MAX;
int32_t t92 = 2277;
uint64_t x381 = 49603416780651LLU;
volatile int32_t x382 = 7358374;
volatile int8_t x392 = INT8_MAX;
static volatile uint32_t t98 = 449057891U;
uint8_t x399 = 2U;
int64_t t100 = -15LL;
int64_t x412 = 21611024715571648LL;
volatile uint64_t t102 = 18LLU;
volatile uint64_t t103 = 87623155218696949LLU;
int64_t x422 = INT64_MIN;
volatile int64_t t105 = -457LL;
volatile int64_t x429 = -3LL;
int64_t x431 = INT64_MIN;
volatile int64_t x433 = INT64_MAX;
volatile uint64_t t110 = 91423445521388LLU;
int32_t x445 = INT32_MIN;
int8_t x458 = INT8_MAX;
int16_t x465 = 0;
int16_t x467 = INT16_MIN;
int16_t x469 = INT16_MAX;
int16_t x473 = INT16_MIN;
int64_t x476 = INT64_MAX;
int32_t x483 = INT32_MIN;
volatile int32_t t120 = -783841590;
int32_t x492 = 254771;
int32_t x493 = INT32_MAX;
int8_t x496 = INT8_MAX;
int16_t x506 = INT16_MIN;
int8_t x511 = -1;
int64_t x518 = INT64_MIN;
uint32_t x522 = 118206178U;
volatile uint8_t x536 = 0U;
static int16_t x541 = -1;
static int64_t t135 = -166699575111597LL;
static int16_t x545 = INT16_MAX;
static int8_t x548 = INT8_MIN;
volatile int32_t t137 = 3244;
static volatile int64_t t138 = -499273685877073189LL;
int16_t x564 = 100;
static volatile uint32_t x565 = UINT32_MAX;
volatile uint32_t t141 = 478384796U;
uint64_t t143 = 61512845969419532LLU;
int32_t x577 = INT32_MAX;
int8_t x584 = INT8_MIN;
int8_t x585 = -6;
int32_t x587 = INT32_MAX;
uint16_t x597 = 12035U;
int64_t x599 = INT64_MIN;
int16_t x600 = INT16_MAX;
int16_t x601 = INT16_MIN;
static int16_t x604 = INT16_MIN;
uint64_t x610 = 102273906440LLU;
uint32_t x615 = 1503U;
static int16_t x622 = -8;
volatile int64_t t156 = -1LL;
int64_t x633 = -1LL;
int32_t x635 = INT32_MIN;
volatile int64_t x640 = INT64_MIN;
volatile int16_t x641 = -1;
uint16_t x642 = UINT16_MAX;
static volatile int64_t t160 = 29702666319120LL;
volatile int16_t x646 = -9856;
volatile uint64_t t161 = 459886490551216LLU;
int64_t x659 = -1LL;
volatile uint64_t t164 = 117802LLU;
uint64_t x663 = 3134148LLU;
volatile uint64_t t165 = 26339193731218LLU;
static int64_t x666 = INT64_MAX;
uint64_t t167 = 808LLU;
int64_t x682 = INT64_MIN;
int64_t x683 = INT64_MAX;
uint8_t x687 = 93U;
int8_t x689 = INT8_MAX;
uint64_t t172 = 101LLU;
static int8_t x697 = -1;
static int64_t x699 = -1LL;
uint64_t x703 = 8107059522708611598LLU;
int32_t x716 = INT32_MAX;
int8_t x719 = INT8_MAX;
int64_t x729 = INT64_MIN;
int8_t x732 = INT8_MAX;
int8_t x737 = 7;
int64_t x738 = INT64_MIN;
volatile int64_t t184 = -1118634LL;
volatile uint16_t x741 = 6U;
volatile int32_t x743 = 1228;
int64_t t185 = -527248738LL;
int32_t x750 = -1;
int8_t x757 = -1;
uint8_t x760 = 17U;
uint16_t x764 = UINT16_MAX;
int64_t x766 = -1LL;
int8_t x768 = -1;
int64_t x777 = -782995LL;
uint32_t x778 = UINT32_MAX;
volatile uint64_t x787 = 51808466849310LLU;
uint64_t x792 = UINT64_MAX;
int64_t x794 = -503231720294542000LL;
int8_t x795 = INT8_MAX;
int8_t x798 = -1;


void f0(void) {
    	int16_t x1 = 0;
	static uint32_t x2 = 228359165U;
	int8_t x4 = -1;
	volatile uint32_t t0 = 2U;

    t0 = (x1&(x2%(x3|x4)));

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 16166159U;
	int16_t x6 = INT16_MAX;
	uint32_t x7 = UINT32_MAX;
	uint8_t x8 = 24U;

    t1 = (x5&(x6%(x7|x8)));

    if (t1 != 11535U) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = 118;
	int64_t x11 = 10894LL;
	static volatile int16_t x12 = -1;
	int64_t t2 = 0LL;

    t2 = (x9&(x10%(x11|x12)));

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MAX;
	uint16_t x14 = 6U;

    t3 = (x13&(x14%(x15|x16)));

    if (t3 != 6U) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MIN;
	int64_t x18 = -166118LL;
	int64_t x19 = INT64_MIN;
	int64_t x20 = -1659426439649518958LL;
	int64_t t4 = -488395165959LL;

    t4 = (x17&(x18%(x19|x20)));

    if (t4 != -196608LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x21 = -1;
	int16_t x22 = INT16_MIN;
	static int16_t x24 = -10;

    t5 = (x21&(x22%(x23|x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x26 = INT64_MAX;
	static uint16_t x27 = UINT16_MAX;
	volatile int32_t x28 = INT32_MIN;
	volatile int64_t t6 = -79576258384926023LL;

    t6 = (x25&(x26%(x27|x28)));

    if (t6 != 2147417806LL) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x30 = INT32_MAX;
	static volatile int16_t x32 = INT16_MIN;

    t7 = (x29&(x30%(x31|x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x34 = 33065842730337388LLU;
	volatile int8_t x35 = -2;
	volatile uint64_t x36 = 2152601050375LLU;
	static volatile uint64_t t8 = 1LLU;

    t8 = (x33&(x34%(x35|x36)));

    if (t8 != 108LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x37 = 1;
	int16_t x39 = 6;
	static uint64_t x40 = 761LLU;
	uint64_t t9 = 747782206818005184LLU;

    t9 = (x37&(x38%(x39|x40)));

    if (t9 != 1LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x43 = INT32_MIN;
	static int16_t x44 = -1;
	int32_t t10 = -2664171;

    t10 = (x41&(x42%(x43|x44)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x45 = 1;
	static uint64_t x46 = 830209722699121LLU;
	uint8_t x47 = 0U;
	int64_t x48 = -1LL;
	uint64_t t11 = 24665780713100LLU;

    t11 = (x45&(x46%(x47|x48)));

    if (t11 != 1LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = INT64_MAX;
	volatile uint16_t x50 = 169U;
	static uint8_t x51 = UINT8_MAX;
	int8_t x52 = -1;
	volatile int64_t t12 = -480060095994442LL;

    t12 = (x49&(x50%(x51|x52)));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = INT16_MIN;
	volatile int8_t x54 = INT8_MIN;
	int32_t x55 = INT32_MIN;
	int64_t x56 = -359LL;
	int64_t t13 = -51917LL;

    t13 = (x53&(x54%(x55|x56)));

    if (t13 != -32768LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int32_t x57 = -2940;
	int8_t x58 = -59;
	uint16_t x59 = 0U;
	int64_t x60 = INT64_MIN;
	int64_t t14 = 61943463LL;

    t14 = (x57&(x58%(x59|x60)));

    if (t14 != -2940LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x62 = 110848748412LL;
	uint8_t x64 = UINT8_MAX;
	int64_t t15 = 1311757632LL;

    t15 = (x61&(x62%(x63|x64)));

    if (t15 != 4LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = INT32_MAX;
	volatile int64_t x67 = INT64_MIN;
	volatile int16_t x68 = -1;
	volatile int64_t t16 = -35986150356946713LL;

    t16 = (x65&(x66%(x67|x68)));

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = -902;
	uint32_t x70 = 1297U;
	uint64_t x71 = UINT64_MAX;
	uint16_t x72 = 8U;
	volatile uint64_t t17 = 3764999022901LLU;

    t17 = (x69&(x70%(x71|x72)));

    if (t17 != 1040LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = INT8_MIN;
	uint8_t x74 = 12U;
	int16_t x76 = INT16_MIN;
	volatile int64_t t18 = -3LL;

    t18 = (x73&(x74%(x75|x76)));

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x77 = 47357U;
	static volatile uint32_t x78 = 3U;
	uint32_t x79 = 179U;
	volatile int64_t x80 = 73600008234840067LL;
	static volatile int64_t t19 = -66570800906LL;

    t19 = (x77&(x78%(x79|x80)));

    if (t19 != 1LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = INT64_MIN;
	static int32_t x82 = -1;
	int32_t x83 = -1;
	uint8_t x84 = 43U;
	static int64_t t20 = 103704366393720LL;

    t20 = (x81&(x82%(x83|x84)));

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x86 = INT64_MIN;
	uint32_t x87 = 1620895322U;
	volatile int64_t t21 = 4145023278023LL;

    t21 = (x85&(x86%(x87|x88)));

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = -1LL;
	int8_t x91 = INT8_MIN;
	uint8_t x92 = UINT8_MAX;
	int64_t t22 = 332829LL;

    t22 = (x89&(x90%(x91|x92)));

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x93 = INT8_MAX;
	static int32_t x94 = -2;
	static int8_t x95 = -1;
	volatile int32_t x96 = -1;

    t23 = (x93&(x94%(x95|x96)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x97 = UINT16_MAX;
	int64_t x98 = INT64_MAX;
	int16_t x99 = 1;

    t24 = (x97&(x98%(x99|x100)));

    if (t24 != 6369LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x101 = -1;
	static uint16_t x103 = 4459U;
	int16_t x104 = -1;
	volatile uint64_t t25 = 477121605LLU;

    t25 = (x101&(x102%(x103|x104)));

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = INT16_MAX;
	uint64_t x106 = 229422512115584053LLU;
	uint64_t x107 = 264466015884358LLU;
	static uint64_t x108 = 1008978516086926163LLU;
	uint64_t t26 = 10686459340LLU;

    t26 = (x105&(x106%(x107|x108)));

    if (t26 != 3125LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint64_t x109 = UINT64_MAX;
	int32_t x112 = -97;
	volatile uint64_t t27 = 40692LLU;

    t27 = (x109&(x110%(x111|x112)));

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x113 = 28858615U;
	uint8_t x114 = 12U;
	int8_t x115 = -1;
	uint64_t x116 = 4117470742LLU;
	uint64_t t28 = 628427878279604934LLU;

    t28 = (x113&(x114%(x115|x116)));

    if (t28 != 4LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint64_t x117 = 274443575316LLU;
	uint16_t x118 = 620U;
	int32_t x119 = 1;
	static volatile int64_t x120 = -130602806631646LL;

    t29 = (x117&(x118%(x119|x120)));

    if (t29 != 4LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x121 = -1;
	volatile int8_t x122 = -1;
	int16_t x124 = INT16_MIN;

    t30 = (x121&(x122%(x123|x124)));

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x125 = 27LL;
	int32_t x126 = INT32_MIN;
	volatile int16_t x127 = INT16_MIN;
	int64_t t31 = -1323554247001645698LL;

    t31 = (x125&(x126%(x127|x128)));

    if (t31 != 24LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = INT8_MAX;
	uint32_t x130 = 3507345U;
	int64_t x131 = 0LL;
	volatile int64_t t32 = -2599991537263LL;

    t32 = (x129&(x130%(x131|x132)));

    if (t32 != 17LL) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x133 = INT64_MAX;
	uint64_t x134 = 601677376825853601LLU;
	volatile int32_t x135 = -1;
	static int8_t x136 = -34;
	volatile uint64_t t33 = 34409678297LLU;

    t33 = (x133&(x134%(x135|x136)));

    if (t33 != 601677376825853601LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x137 = INT16_MIN;
	uint32_t x138 = UINT32_MAX;
	int8_t x139 = INT8_MIN;
	int8_t x140 = INT8_MAX;
	static volatile uint32_t t34 = 223774U;

    t34 = (x137&(x138%(x139|x140)));

    if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x141 = UINT64_MAX;
	int8_t x142 = 0;
	uint64_t x144 = 423175LLU;

    t35 = (x141&(x142%(x143|x144)));

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x145 = -1LL;
	volatile uint16_t x146 = UINT16_MAX;
	int8_t x148 = -1;
	uint64_t t36 = 11617169630413LLU;

    t36 = (x145&(x146%(x147|x148)));

    if (t36 != 65535LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = -1LL;
	static int64_t x150 = -41881401212859916LL;
	int8_t x151 = INT8_MIN;
	int64_t x152 = 57668LL;

    t37 = (x149&(x150%(x151|x152)));

    if (t37 != -16LL) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x153 = 245631266;
	static int64_t x154 = -2057558579918LL;
	uint16_t x155 = 1751U;
	static volatile int64_t t38 = -591LL;

    t38 = (x153&(x154%(x155|x156)));

    if (t38 != 245630978LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile uint32_t x157 = 10U;
	int32_t x159 = INT32_MIN;
	volatile uint8_t x160 = 31U;

    t39 = (x157&(x158%(x159|x160)));

    if (t39 != 10LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x162 = -1;
	volatile uint32_t x163 = 301620U;
	uint32_t t40 = 1909U;

    t40 = (x161&(x162%(x163|x164)));

    if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x168 = 112U;

    t41 = (x165&(x166%(x167|x168)));

    if (t41 != 2147483647LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x169 = -1;
	int8_t x170 = INT8_MIN;
	volatile int64_t x171 = 12715412LL;
	static uint64_t x172 = UINT64_MAX;
	static uint64_t t42 = 242220917577LLU;

    t42 = (x169&(x170%(x171|x172)));

    if (t42 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x173 = 3;
	uint64_t x174 = 12LLU;
	volatile int64_t x175 = INT64_MAX;
	volatile uint64_t x176 = UINT64_MAX;

    t43 = (x173&(x174%(x175|x176)));

    if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x177 = 17;
	static uint32_t x178 = 1397U;
	int8_t x180 = -24;
	volatile uint32_t t44 = 11327U;

    t44 = (x177&(x178%(x179|x180)));

    if (t44 != 17U) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = -1138068575580201944LL;
	static int32_t x182 = INT32_MIN;
	static int16_t x183 = -1;
	int64_t x184 = 1321LL;
	volatile int64_t t45 = -220LL;

    t45 = (x181&(x182%(x183|x184)));

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static int64_t x185 = 33670328692LL;
	uint16_t x186 = 2U;
	int64_t x187 = INT64_MIN;
	int64_t x188 = INT64_MAX;
	int64_t t46 = -436812LL;

    t46 = (x185&(x186%(x187|x188)));

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	static int16_t x190 = -1;
	volatile uint8_t x191 = 114U;
	static uint32_t x192 = 18U;
	int64_t t47 = 503LL;

    t47 = (x189&(x190%(x191|x192)));

    if (t47 != 81LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x193 = -31702959559831LL;
	uint16_t x194 = 0U;
	uint32_t x195 = 2892818U;
	uint8_t x196 = 0U;
	static int64_t t48 = 56455LL;

    t48 = (x193&(x194%(x195|x196)));

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = -1;
	int8_t x198 = INT8_MIN;
	int64_t x199 = -16570LL;
	int16_t x200 = -6;
	volatile int64_t t49 = 43680287726LL;

    t49 = (x197&(x198%(x199|x200)));

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x201 = -1;
	int32_t x202 = -54630492;
	static int64_t t50 = -552610894817951LL;

    t50 = (x201&(x202%(x203|x204)));

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x205 = INT16_MIN;
	uint64_t x206 = 1114698603LLU;
	uint64_t x207 = UINT64_MAX;

    t51 = (x205&(x206%(x207|x208)));

    if (t51 != 1114669056LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x210 = -1;
	uint64_t x211 = 25089324452LLU;
	volatile uint16_t x212 = 6U;
	uint64_t t52 = 1056776320953LLU;

    t52 = (x209&(x210%(x211|x212)));

    if (t52 != 15972396391LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x214 = 6U;
	static volatile int32_t x215 = INT32_MIN;
	int16_t x216 = INT16_MIN;
	volatile uint64_t t53 = 1358304LLU;

    t53 = (x213&(x214%(x215|x216)));

    if (t53 != 6LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint16_t x218 = 20416U;
	static uint8_t x219 = 5U;
	int16_t x220 = -15;
	static volatile int32_t t54 = 676919;

    t54 = (x217&(x218%(x219|x220)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x221 = UINT8_MAX;
	static uint32_t x222 = 45U;
	int8_t x223 = INT8_MAX;
	volatile uint8_t x224 = 1U;
	volatile uint32_t t55 = 1141066022U;

    t55 = (x221&(x222%(x223|x224)));

    if (t55 != 45U) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x225 = 0;
	int16_t x226 = -5;
	int8_t x227 = INT8_MIN;
	int32_t x228 = 0;
	static int32_t t56 = -7;

    t56 = (x225&(x226%(x227|x228)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x229 = -1;
	int64_t x230 = INT64_MAX;
	int64_t t57 = 3163256508618LL;

    t57 = (x229&(x230%(x231|x232)));

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = -1LL;
	volatile int32_t x234 = INT32_MIN;
	uint32_t x236 = UINT32_MAX;
	volatile int64_t t58 = -5LL;

    t58 = (x233&(x234%(x235|x236)));

    if (t58 != 2147483648LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x237 = 25518871LLU;
	int32_t x238 = INT32_MIN;
	uint8_t x239 = 0U;
	int64_t x240 = -496LL;
	uint64_t t59 = 6434261800320051602LLU;

    t59 = (x237&(x238%(x239|x240)));

    if (t59 != 25518848LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x241 = UINT64_MAX;
	static volatile int64_t x242 = INT64_MAX;
	int32_t x244 = -7;
	volatile uint64_t t60 = 766736271LLU;

    t60 = (x241&(x242%(x243|x244)));

    if (t60 != 1LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint16_t x246 = UINT16_MAX;
	static int64_t x247 = 346158LL;
	volatile int32_t x248 = -1;
	static int64_t t61 = 30653183995137LL;

    t61 = (x245&(x246%(x247|x248)));

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint8_t x249 = UINT8_MAX;
	uint16_t x250 = 36U;
	static int32_t x251 = -46306673;
	volatile int32_t t62 = 285469261;

    t62 = (x249&(x250%(x251|x252)));

    if (t62 != 2) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x254 = INT32_MAX;
	uint64_t x255 = 2412422LLU;
	static int32_t x256 = -102097470;
	uint64_t t63 = 395474472756387LLU;

    t63 = (x253&(x254%(x255|x256)));

    if (t63 != 2147483647LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x257 = INT64_MIN;
	volatile int32_t x258 = 3369;
	int64_t x259 = INT64_MAX;

    t64 = (x257&(x258%(x259|x260)));

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x261 = INT8_MAX;
	int64_t x262 = INT64_MAX;
	int16_t x264 = INT16_MIN;
	int64_t t65 = 7819310LL;

    t65 = (x261&(x262%(x263|x264)));

    if (t65 != 127LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x265 = 4LLU;
	uint32_t x267 = UINT32_MAX;
	volatile int16_t x268 = 1256;
	static volatile uint64_t t66 = 16454684LLU;

    t66 = (x265&(x266%(x267|x268)));

    if (t66 != 4LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x269 = INT32_MIN;
	static uint16_t x270 = UINT16_MAX;
	static int8_t x271 = INT8_MAX;
	int16_t x272 = 3;

    t67 = (x269&(x270%(x271|x272)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x273 = UINT64_MAX;
	static int8_t x274 = -1;
	volatile uint64_t x275 = 63007372LLU;
	int8_t x276 = INT8_MIN;
	volatile uint64_t t68 = 91414746623598994LLU;

    t68 = (x273&(x274%(x275|x276)));

    if (t68 != 115LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x277 = UINT64_MAX;
	int16_t x278 = 46;
	uint64_t t69 = 3131443372198LLU;

    t69 = (x277&(x278%(x279|x280)));

    if (t69 != 46LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = -1;
	int32_t x282 = -1;
	static int32_t x283 = -1;
	volatile uint8_t x284 = 27U;

    t70 = (x281&(x282%(x283|x284)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = 441;
	int32_t x286 = -147713867;
	int8_t x287 = INT8_MAX;
	int64_t x288 = INT64_MIN;
	volatile int64_t t71 = 557580469499720706LL;

    t71 = (x285&(x286%(x287|x288)));

    if (t71 != 177LL) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x290 = -1;
	uint16_t x291 = 1749U;
	static uint16_t x292 = UINT16_MAX;

    t72 = (x289&(x290%(x291|x292)));

    if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x295 = INT16_MIN;
	int64_t x296 = INT64_MAX;
	int64_t t73 = -89LL;

    t73 = (x293&(x294%(x295|x296)));

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x297 = INT64_MIN;
	int32_t x298 = INT32_MIN;
	volatile int64_t t74 = -449397LL;

    t74 = (x297&(x298%(x299|x300)));

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x302 = -1LL;
	int8_t x303 = -1;
	volatile uint8_t x304 = 22U;
	int64_t t75 = -57165497006318LL;

    t75 = (x301&(x302%(x303|x304)));

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x305 = 6711LLU;
	int8_t x307 = -1;
	volatile uint32_t x308 = 78160124U;
	uint64_t t76 = 6910661LLU;

    t76 = (x305&(x306%(x307|x308)));

    if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x310 = -1;
	int16_t x311 = INT16_MAX;
	int64_t x312 = INT64_MIN;
	volatile uint64_t t77 = 8927228698829480LLU;

    t77 = (x309&(x310%(x311|x312)));

    if (t77 != 20059LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int64_t x313 = -2093980736769616639LL;
	int32_t x314 = INT32_MAX;
	uint32_t x315 = 2U;
	int64_t x316 = 64479LL;
	volatile int64_t t78 = 415367LL;

    t78 = (x313&(x314%(x315|x316)));

    if (t78 != 256LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = INT8_MAX;
	int32_t x319 = -1;
	uint64_t x320 = 128041170113393900LLU;
	volatile uint64_t t79 = 33020LLU;

    t79 = (x317&(x318%(x319|x320)));

    if (t79 != 52LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x321 = INT8_MAX;
	uint8_t x322 = 20U;

    t80 = (x321&(x322%(x323|x324)));

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile uint8_t x326 = 10U;
	int32_t x327 = INT32_MIN;
	int16_t x328 = -10852;
	int32_t t81 = -116;

    t81 = (x325&(x326%(x327|x328)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint8_t x329 = UINT8_MAX;
	volatile uint64_t x331 = 3414172LLU;
	uint64_t x332 = 12999707199877854LLU;
	volatile uint64_t t82 = 9057472601210LLU;

    t82 = (x329&(x330%(x331|x332)));

    if (t82 != 42LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile uint8_t x334 = 14U;

    t83 = (x333&(x334%(x335|x336)));

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x337 = INT8_MIN;
	int32_t x338 = INT32_MAX;
	int8_t x339 = 5;
	int32_t t84 = -919;

    t84 = (x337&(x338%(x339|x340)));

    if (t84 != 256) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x342 = INT64_MAX;
	int8_t x343 = INT8_MIN;
	int8_t x344 = INT8_MAX;
	static int64_t t85 = 113535577967105865LL;

    t85 = (x341&(x342%(x343|x344)));

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x345 = INT8_MIN;
	int16_t x346 = INT16_MAX;
	int8_t x347 = INT8_MIN;
	int16_t x348 = INT16_MIN;
	static int32_t t86 = 88326;

    t86 = (x345&(x346%(x347|x348)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile int8_t x349 = INT8_MIN;
	static volatile int64_t x350 = -1LL;
	volatile uint8_t x351 = UINT8_MAX;

    t87 = (x349&(x350%(x351|x352)));

    if (t87 != -128LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x354 = 136U;
	volatile uint64_t x355 = 646867385LLU;
	int32_t x356 = INT32_MIN;

    t88 = (x353&(x354%(x355|x356)));

    if (t88 != 136LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = INT8_MIN;
	uint64_t x358 = UINT64_MAX;
	static int16_t x359 = -1;
	uint64_t x360 = UINT64_MAX;
	uint64_t t89 = 15LLU;

    t89 = (x357&(x358%(x359|x360)));

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x363 = INT32_MIN;
	volatile int64_t x364 = INT64_MIN;
	static int64_t t90 = -224339970341129LL;

    t90 = (x361&(x362%(x363|x364)));

    if (t90 != 127LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x365 = INT16_MIN;
	uint32_t x366 = 2374U;
	int16_t x368 = INT16_MIN;
	volatile uint32_t t91 = 162U;

    t91 = (x365&(x366%(x367|x368)));

    if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x369 = INT8_MAX;
	uint8_t x370 = 0U;

    t92 = (x369&(x370%(x371|x372)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x373 = -52;
	static uint32_t x374 = UINT32_MAX;
	uint32_t x375 = 1016U;
	int64_t x376 = INT64_MIN;
	static int64_t t93 = -862747296032442993LL;

    t93 = (x373&(x374%(x375|x376)));

    if (t93 != 4294967244LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int64_t x377 = 73632329243681738LL;
	int32_t x378 = 37324558;
	int16_t x379 = INT16_MIN;
	volatile int32_t x380 = -1;
	int64_t t94 = 670102LL;

    t94 = (x377&(x378%(x379|x380)));

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x383 = UINT16_MAX;
	static uint32_t x384 = UINT32_MAX;
	uint64_t t95 = 35LLU;

    t95 = (x381&(x382%(x383|x384)));

    if (t95 != 18210LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x385 = -1;
	int8_t x386 = INT8_MIN;
	int32_t x387 = -1;
	static uint8_t x388 = UINT8_MAX;
	volatile int32_t t96 = 7;

    t96 = (x385&(x386%(x387|x388)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x389 = -8;
	uint64_t x390 = UINT64_MAX;
	static int8_t x391 = 0;
	volatile uint64_t t97 = 12LLU;

    t97 = (x389&(x390%(x391|x392)));

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x393 = INT16_MIN;
	uint16_t x394 = 1965U;
	static uint32_t x395 = 2U;
	int16_t x396 = INT16_MIN;

    t98 = (x393&(x394%(x395|x396)));

    if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x397 = 61U;
	static uint16_t x398 = 0U;
	int64_t x400 = 6070644383148LL;
	volatile int64_t t99 = -329717566LL;

    t99 = (x397&(x398%(x399|x400)));

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x401 = 10U;
	int64_t x402 = -3530LL;
	static int64_t x403 = INT64_MIN;
	uint32_t x404 = 92789U;

    t100 = (x401&(x402%(x403|x404)));

    if (t100 != 2LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x405 = -4844447LL;
	volatile int32_t x406 = -16;
	int8_t x407 = -1;
	int16_t x408 = -13;
	int64_t t101 = 27200683902988LL;

    t101 = (x405&(x406%(x407|x408)));

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile uint32_t x409 = UINT32_MAX;
	uint16_t x410 = 27410U;
	volatile uint64_t x411 = 9LLU;

    t102 = (x409&(x410%(x411|x412)));

    if (t102 != 27410LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x413 = 1;
	uint8_t x414 = 12U;
	uint64_t x415 = UINT64_MAX;
	volatile uint16_t x416 = 17076U;

    t103 = (x413&(x414%(x415|x416)));

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x417 = 1310U;
	static volatile int8_t x418 = 6;
	int32_t x419 = INT32_MIN;
	int64_t x420 = INT64_MIN;
	volatile int64_t t104 = 0LL;

    t104 = (x417&(x418%(x419|x420)));

    if (t104 != 6LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x421 = 132U;
	int8_t x423 = 33;
	int32_t x424 = INT32_MIN;

    t105 = (x421&(x422%(x423|x424)));

    if (t105 != 4LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x425 = UINT16_MAX;
	uint8_t x426 = UINT8_MAX;
	static volatile int64_t x427 = INT64_MAX;
	int32_t x428 = INT32_MIN;
	volatile int64_t t106 = -925169862763LL;

    t106 = (x425&(x426%(x427|x428)));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x430 = INT16_MIN;
	static volatile int64_t x432 = 32997132LL;
	volatile int64_t t107 = -1794601591942LL;

    t107 = (x429&(x430%(x431|x432)));

    if (t107 != -32768LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x434 = INT64_MIN;
	int32_t x435 = INT32_MIN;
	uint8_t x436 = 68U;
	int64_t t108 = 0LL;

    t108 = (x433&(x434%(x435|x436)));

    if (t108 != 9223372036854766560LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x437 = UINT16_MAX;
	uint16_t x438 = 13629U;
	int64_t x439 = -204LL;
	static volatile int8_t x440 = INT8_MIN;
	volatile int64_t t109 = 1442793040LL;

    t109 = (x437&(x438%(x439|x440)));

    if (t109 != 25LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x441 = -4129;
	uint64_t x442 = 2811642861LLU;
	volatile int8_t x443 = 45;
	uint32_t x444 = 6647176U;

    t110 = (x441&(x442%(x443|x444)));

    if (t110 != 6514847LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint64_t x446 = 61239675426955011LLU;
	uint16_t x447 = UINT16_MAX;
	int64_t x448 = -1417673438LL;
	volatile uint64_t t111 = 176364230463191315LLU;

    t111 = (x445&(x446%(x447|x448)));

    if (t111 != 61239675225899008LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint8_t x449 = 0U;
	volatile int16_t x450 = 1;
	int32_t x451 = -39166539;
	uint32_t x452 = 4527347U;
	uint32_t t112 = 25U;

    t112 = (x449&(x450%(x451|x452)));

    if (t112 != 0U) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x453 = INT16_MAX;
	int64_t x454 = -657206356LL;
	int8_t x455 = -1;
	uint16_t x456 = 2194U;
	static volatile int64_t t113 = 4189807585LL;

    t113 = (x453&(x454%(x455|x456)));

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x457 = INT8_MAX;
	int16_t x459 = INT16_MAX;
	volatile int8_t x460 = INT8_MAX;
	static volatile int32_t t114 = -18;

    t114 = (x457&(x458%(x459|x460)));

    if (t114 != 127) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint64_t x461 = UINT64_MAX;
	int8_t x462 = INT8_MIN;
	uint32_t x463 = 670U;
	static uint8_t x464 = 17U;
	volatile uint64_t t115 = 3382476633LLU;

    t115 = (x461&(x462%(x463|x464)));

    if (t115 != 173LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint16_t x466 = UINT16_MAX;
	uint64_t x468 = 4001878932LLU;
	static volatile uint64_t t116 = 742487LLU;

    t116 = (x465&(x466%(x467|x468)));

    if (t116 != 0LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x470 = UINT8_MAX;
	static int8_t x471 = 0;
	uint32_t x472 = 2539244U;
	uint32_t t117 = 6258U;

    t117 = (x469&(x470%(x471|x472)));

    if (t117 != 255U) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x474 = 9787;
	uint16_t x475 = UINT16_MAX;
	int64_t t118 = 0LL;

    t118 = (x473&(x474%(x475|x476)));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int16_t x477 = INT16_MIN;
	uint16_t x478 = 13104U;
	uint8_t x479 = UINT8_MAX;
	uint64_t x480 = 10985164LLU;
	uint64_t t119 = 19896203988276LLU;

    t119 = (x477&(x478%(x479|x480)));

    if (t119 != 0LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x481 = -1;
	volatile int32_t x482 = 978;
	int8_t x484 = -27;

    t120 = (x481&(x482%(x483|x484)));

    if (t120 != 6) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x485 = -1LL;
	uint64_t x486 = 3046080431108833576LLU;
	int64_t x487 = INT64_MIN;
	int8_t x488 = INT8_MAX;
	volatile uint64_t t121 = 365443074426856LLU;

    t121 = (x485&(x486%(x487|x488)));

    if (t121 != 3046080431108833576LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x489 = INT16_MAX;
	volatile int64_t x490 = -1LL;
	static int64_t x491 = -260551530556LL;
	int64_t t122 = 2LL;

    t122 = (x489&(x490%(x491|x492)));

    if (t122 != 32767LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint32_t x494 = 5U;
	int8_t x495 = INT8_MAX;
	uint32_t t123 = 1633988137U;

    t123 = (x493&(x494%(x495|x496)));

    if (t123 != 5U) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int64_t x497 = INT64_MIN;
	uint8_t x498 = 24U;
	int8_t x499 = -1;
	static volatile uint32_t x500 = 1U;
	volatile int64_t t124 = 16709982256549LL;

    t124 = (x497&(x498%(x499|x500)));

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x501 = INT16_MIN;
	int16_t x502 = INT16_MAX;
	int64_t x503 = 8529LL;
	int8_t x504 = 1;
	int64_t t125 = -1LL;

    t125 = (x501&(x502%(x503|x504)));

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x505 = UINT16_MAX;
	static uint16_t x507 = 29U;
	int16_t x508 = INT16_MAX;
	int32_t t126 = 332471585;

    t126 = (x505&(x506%(x507|x508)));

    if (t126 != 65535) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x509 = UINT16_MAX;
	uint64_t x510 = UINT64_MAX;
	uint16_t x512 = 4U;
	volatile uint64_t t127 = 60936239702LLU;

    t127 = (x509&(x510%(x511|x512)));

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int8_t x513 = INT8_MIN;
	static int32_t x514 = -1;
	int64_t x515 = INT64_MIN;
	int32_t x516 = -1;
	volatile int64_t t128 = -3711098LL;

    t128 = (x513&(x514%(x515|x516)));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile uint32_t x517 = 15065272U;
	static int8_t x519 = INT8_MIN;
	volatile int32_t x520 = INT32_MIN;
	static int64_t t129 = -1LL;

    t129 = (x517&(x518%(x519|x520)));

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x521 = INT64_MIN;
	uint32_t x523 = 74U;
	volatile int8_t x524 = INT8_MIN;
	volatile int64_t t130 = 3084564536LL;

    t130 = (x521&(x522%(x523|x524)));

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x525 = INT16_MAX;
	int8_t x526 = INT8_MAX;
	int16_t x527 = -1;
	uint64_t x528 = 228677933127807059LLU;
	uint64_t t131 = 1487429571866732269LLU;

    t131 = (x525&(x526%(x527|x528)));

    if (t131 != 127LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x529 = INT8_MIN;
	int64_t x530 = INT64_MAX;
	volatile uint16_t x531 = 7U;
	int16_t x532 = INT16_MIN;
	volatile int64_t t132 = -1LL;

    t132 = (x529&(x530%(x531|x532)));

    if (t132 != 19200LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x533 = INT64_MAX;
	static int32_t x534 = -1;
	uint16_t x535 = 11010U;
	int64_t t133 = INT64_MAX;

    t133 = (x533&(x534%(x535|x536)));

    if (t133 != INT64_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x537 = 760978LL;
	static int16_t x538 = INT16_MIN;
	int8_t x539 = INT8_MAX;
	int64_t x540 = INT64_MAX;
	int64_t t134 = -50105449855032150LL;

    t134 = (x537&(x538%(x539|x540)));

    if (t134 != 753664LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x542 = -984708;
	volatile uint8_t x543 = 0U;
	static int64_t x544 = -22883LL;

    t135 = (x541&(x542%(x543|x544)));

    if (t135 != -739LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint64_t x546 = UINT64_MAX;
	int8_t x547 = INT8_MAX;
	uint64_t t136 = 5585738977468LLU;

    t136 = (x545&(x546%(x547|x548)));

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x549 = INT16_MIN;
	int8_t x550 = -1;
	int8_t x551 = INT8_MAX;
	static int16_t x552 = 19;

    t137 = (x549&(x550%(x551|x552)));

    if (t137 != -32768) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x553 = INT64_MIN;
	int64_t x554 = INT64_MAX;
	uint16_t x555 = 299U;
	volatile int16_t x556 = 42;

    t138 = (x553&(x554%(x555|x556)));

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x557 = UINT32_MAX;
	int32_t x558 = -1;
	static int8_t x559 = INT8_MIN;
	uint8_t x560 = 16U;
	volatile uint32_t t139 = UINT32_MAX;

    t139 = (x557&(x558%(x559|x560)));

    if (t139 != UINT32_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	static int64_t x561 = -1LL;
	int8_t x562 = 4;
	volatile int32_t x563 = 155;
	static volatile int64_t t140 = -1272049512334068LL;

    t140 = (x561&(x562%(x563|x564)));

    if (t140 != 4LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x566 = INT16_MAX;
	uint32_t x567 = 47U;
	uint8_t x568 = UINT8_MAX;

    t141 = (x565&(x566%(x567|x568)));

    if (t141 != 127U) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint32_t x569 = 157969U;
	int32_t x570 = INT32_MIN;
	uint8_t x571 = 3U;
	static int32_t x572 = 1;
	uint32_t t142 = 19U;

    t142 = (x569&(x570%(x571|x572)));

    if (t142 != 157968U) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x573 = -25436;
	volatile int32_t x574 = 0;
	int8_t x575 = -1;
	static uint64_t x576 = UINT64_MAX;

    t143 = (x573&(x574%(x575|x576)));

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x578 = 24974024U;
	int64_t x579 = -32319393LL;
	volatile int32_t x580 = -135;
	int64_t t144 = 11304332272LL;

    t144 = (x577&(x578%(x579|x580)));

    if (t144 != 11LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x581 = INT16_MAX;
	volatile int64_t x582 = INT64_MIN;
	int64_t x583 = -30664LL;
	static int64_t t145 = -37012802937681382LL;

    t145 = (x581&(x582%(x583|x584)));

    if (t145 != 32760LL) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x586 = INT8_MIN;
	int32_t x588 = INT32_MAX;
	volatile int32_t t146 = 12941486;

    t146 = (x585&(x586%(x587|x588)));

    if (t146 != -128) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x589 = -64703;
	int16_t x590 = INT16_MAX;
	int32_t x591 = INT32_MAX;
	volatile uint16_t x592 = 0U;
	volatile int32_t t147 = -5598587;

    t147 = (x589&(x590%(x591|x592)));

    if (t147 != 833) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x593 = 239979U;
	volatile uint64_t x594 = 38127533703680406LLU;
	uint16_t x595 = 0U;
	int64_t x596 = INT64_MAX;
	volatile uint64_t t148 = 3276467LLU;

    t148 = (x593&(x594%(x595|x596)));

    if (t148 != 98562LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x598 = 1U;
	volatile int64_t t149 = -1649165679741317569LL;

    t149 = (x597&(x598%(x599|x600)));

    if (t149 != 1LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x602 = INT16_MIN;
	static volatile int16_t x603 = INT16_MAX;
	volatile int32_t t150 = 29;

    t150 = (x601&(x602%(x603|x604)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x605 = INT32_MAX;
	int8_t x606 = 5;
	uint8_t x607 = 99U;
	int8_t x608 = INT8_MIN;
	int32_t t151 = -540;

    t151 = (x605&(x606%(x607|x608)));

    if (t151 != 5) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x609 = INT8_MIN;
	static uint32_t x611 = 1U;
	int16_t x612 = INT16_MAX;
	volatile uint64_t t152 = 8015720157582600056LLU;

    t152 = (x609&(x610%(x611|x612)));

    if (t152 != 5888LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x613 = UINT64_MAX;
	int64_t x614 = INT64_MAX;
	uint8_t x616 = 3U;
	static uint64_t t153 = 1505510441334914LLU;

    t153 = (x613&(x614%(x615|x616)));

    if (t153 != 1276LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x617 = INT8_MAX;
	static volatile uint8_t x618 = 75U;
	int8_t x619 = INT8_MIN;
	uint32_t x620 = 312552U;
	uint32_t t154 = 28925973U;

    t154 = (x617&(x618%(x619|x620)));

    if (t154 != 75U) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x621 = -50;
	volatile int8_t x623 = INT8_MIN;
	int64_t x624 = -1LL;
	static volatile int64_t t155 = -21378993326081926LL;

    t155 = (x621&(x622%(x623|x624)));

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x625 = -1LL;
	int8_t x626 = INT8_MIN;
	static uint16_t x627 = 0U;
	volatile uint32_t x628 = UINT32_MAX;

    t156 = (x625&(x626%(x627|x628)));

    if (t156 != 4294967168LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint64_t x629 = 15LLU;
	volatile int16_t x630 = INT16_MIN;
	volatile uint64_t x631 = 6669856978804810034LLU;
	uint16_t x632 = 2U;
	volatile uint64_t t157 = 1582124351309LLU;

    t157 = (x629&(x630%(x631|x632)));

    if (t157 != 12LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x634 = 575U;
	int64_t x636 = INT64_MAX;
	static volatile int64_t t158 = -138302277266315324LL;

    t158 = (x633&(x634%(x635|x636)));

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x637 = INT8_MIN;
	int8_t x638 = 0;
	static int16_t x639 = INT16_MAX;
	int64_t t159 = 748LL;

    t159 = (x637&(x638%(x639|x640)));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x643 = -36;
	int64_t x644 = INT64_MAX;

    t160 = (x641&(x642%(x643|x644)));

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x645 = -1;
	uint64_t x647 = UINT64_MAX;
	uint16_t x648 = 2U;

    t161 = (x645&(x646%(x647|x648)));

    if (t161 != 18446744073709541760LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static int8_t x649 = INT8_MAX;
	volatile uint16_t x650 = UINT16_MAX;
	int16_t x651 = 11;
	int32_t x652 = INT32_MAX;
	volatile int32_t t162 = -1704;

    t162 = (x649&(x650%(x651|x652)));

    if (t162 != 127) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint64_t x653 = 122LLU;
	int16_t x654 = INT16_MIN;
	uint8_t x655 = 22U;
	static int16_t x656 = -19;
	static uint64_t t163 = 136739090049LLU;

    t163 = (x653&(x654%(x655|x656)));

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x657 = 13988917851158064LLU;
	static uint8_t x658 = UINT8_MAX;
	volatile int8_t x660 = INT8_MIN;

    t164 = (x657&(x658%(x659|x660)));

    if (t164 != 0LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x661 = INT32_MAX;
	int64_t x662 = INT64_MIN;
	static int16_t x664 = -123;

    t165 = (x661&(x662%(x663|x664)));

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x665 = INT8_MIN;
	int16_t x667 = INT16_MIN;
	int16_t x668 = INT16_MIN;
	volatile int64_t t166 = -566559LL;

    t166 = (x665&(x666%(x667|x668)));

    if (t166 != 32640LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x669 = 45302U;
	int16_t x670 = INT16_MIN;
	static int32_t x671 = -1;
	uint64_t x672 = 21015372697199992LLU;

    t167 = (x669&(x670%(x671|x672)));

    if (t167 != 32768LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x673 = UINT16_MAX;
	uint8_t x674 = UINT8_MAX;
	int64_t x675 = -1LL;
	uint32_t x676 = 5U;
	int64_t t168 = -1135881643027LL;

    t168 = (x673&(x674%(x675|x676)));

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t x677 = INT32_MAX;
	uint64_t x678 = 60531LLU;
	uint64_t x679 = 2041677215053914355LLU;
	static volatile uint8_t x680 = 29U;
	uint64_t t169 = 5530LLU;

    t169 = (x677&(x678%(x679|x680)));

    if (t169 != 60531LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint64_t x681 = 9955LLU;
	static int8_t x684 = -1;
	volatile uint64_t t170 = 8LLU;

    t170 = (x681&(x682%(x683|x684)));

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x685 = 9626670591996540LLU;
	int8_t x686 = INT8_MIN;
	static volatile int8_t x688 = INT8_MIN;
	uint64_t t171 = 55389244922LLU;

    t171 = (x685&(x686%(x687|x688)));

    if (t171 != 9626670591996520LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x690 = 0U;
	static volatile int64_t x691 = -1LL;
	uint64_t x692 = UINT64_MAX;

    t172 = (x689&(x690%(x691|x692)));

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x693 = 62;
	int16_t x694 = -1;
	uint64_t x695 = 3697836972265289419LLU;
	int32_t x696 = INT32_MIN;
	static volatile uint64_t t173 = 15295984LLU;

    t173 = (x693&(x694%(x695|x696)));

    if (t173 != 52LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static int32_t x698 = INT32_MIN;
	int32_t x700 = 1;
	int64_t t174 = 12083667043903471LL;

    t174 = (x697&(x698%(x699|x700)));

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x701 = 69U;
	uint64_t x702 = UINT64_MAX;
	int64_t x704 = -1LL;
	volatile uint64_t t175 = 31491LLU;

    t175 = (x701&(x702%(x703|x704)));

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static int32_t x705 = 101;
	int32_t x706 = INT32_MIN;
	int64_t x707 = INT64_MAX;
	int16_t x708 = INT16_MIN;
	volatile int64_t t176 = 11056869885LL;

    t176 = (x705&(x706%(x707|x708)));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile uint32_t x709 = 29552U;
	uint16_t x710 = UINT16_MAX;
	static int8_t x711 = INT8_MIN;
	int32_t x712 = -1;
	static volatile uint32_t t177 = 25U;

    t177 = (x709&(x710%(x711|x712)));

    if (t177 != 0U) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x713 = -65553730;
	uint8_t x714 = 2U;
	static int64_t x715 = 0LL;
	int64_t t178 = -51018066523834548LL;

    t178 = (x713&(x714%(x715|x716)));

    if (t178 != 2LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x717 = -7;
	volatile uint32_t x718 = 32U;
	int8_t x720 = 59;
	uint32_t t179 = 2U;

    t179 = (x717&(x718%(x719|x720)));

    if (t179 != 32U) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint16_t x721 = 8U;
	int64_t x722 = 1LL;
	int32_t x723 = INT32_MIN;
	uint16_t x724 = UINT16_MAX;
	int64_t t180 = -2934241LL;

    t180 = (x721&(x722%(x723|x724)));

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x725 = INT16_MIN;
	int16_t x726 = INT16_MAX;
	static uint16_t x727 = 55U;
	int8_t x728 = INT8_MIN;
	int32_t t181 = -50806;

    t181 = (x725&(x726%(x727|x728)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x730 = INT8_MIN;
	volatile int8_t x731 = INT8_MAX;
	int64_t t182 = INT64_MIN;

    t182 = (x729&(x730%(x731|x732)));

    if (t182 != INT64_MIN) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x733 = 138779664051983127LL;
	volatile uint32_t x734 = 879U;
	int16_t x735 = INT16_MIN;
	static volatile int8_t x736 = -7;
	static int64_t t183 = 259692538162081495LL;

    t183 = (x733&(x734%(x735|x736)));

    if (t183 != 775LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x739 = INT16_MAX;
	static uint8_t x740 = 41U;

    t184 = (x737&(x738%(x739|x740)));

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x742 = INT8_MIN;
	static int64_t x744 = INT64_MAX;

    t185 = (x741&(x742%(x743|x744)));

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x745 = 42568927723768LL;
	int32_t x746 = 588957517;
	volatile uint16_t x747 = UINT16_MAX;
	uint8_t x748 = 0U;
	volatile int64_t t186 = 735822476451300252LL;

    t186 = (x745&(x746%(x747|x748)));

    if (t186 != 49248LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x749 = UINT8_MAX;
	uint32_t x751 = 92328U;
	int32_t x752 = 5792;
	uint32_t t187 = 788U;

    t187 = (x749&(x750%(x751|x752)));

    if (t187 != 95U) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x753 = 65U;
	uint32_t x754 = UINT32_MAX;
	int64_t x755 = 255871802LL;
	volatile uint32_t x756 = 62U;
	volatile int64_t t188 = 0LL;

    t188 = (x753&(x754%(x755|x756)));

    if (t188 != 1LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x758 = INT8_MIN;
	uint32_t x759 = 12055734U;
	volatile uint32_t t189 = 290110082U;

    t189 = (x757&(x758%(x759|x760)));

    if (t189 != 3125508U) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x761 = INT32_MIN;
	int64_t x762 = INT64_MAX;
	static int8_t x763 = INT8_MIN;
	static int64_t t190 = -4LL;

    t190 = (x761&(x762%(x763|x764)));

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint16_t x765 = 864U;
	uint32_t x767 = 31U;
	volatile int64_t t191 = 234793904098LL;

    t191 = (x765&(x766%(x767|x768)));

    if (t191 != 864LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x769 = -6;
	int64_t x770 = -1LL;
	uint64_t x771 = 37952021129LLU;
	uint64_t x772 = 2856176048LLU;
	uint64_t t192 = 360894257000227LLU;

    t192 = (x769&(x770%(x771|x772)));

    if (t192 != 19603416424LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x773 = INT8_MAX;
	volatile int64_t x774 = INT64_MIN;
	int64_t x775 = INT64_MIN;
	int16_t x776 = INT16_MAX;
	static volatile int64_t t193 = 62762332697042LL;

    t193 = (x773&(x774%(x775|x776)));

    if (t193 != 1LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x779 = INT8_MIN;
	static int32_t x780 = -1;
	int64_t t194 = -5LL;

    t194 = (x777&(x778%(x779|x780)));

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x781 = INT16_MAX;
	volatile int64_t x782 = -1LL;
	static int8_t x783 = 33;
	uint64_t x784 = UINT64_MAX;
	volatile uint64_t t195 = 43778622547015353LLU;

    t195 = (x781&(x782%(x783|x784)));

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x785 = 1964088;
	uint64_t x786 = 2111LLU;
	int64_t x788 = -6362347748860502LL;
	static uint64_t t196 = 10LLU;

    t196 = (x785&(x786%(x787|x788)));

    if (t196 != 2104LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x789 = 548147422LLU;
	int16_t x790 = INT16_MAX;
	volatile int8_t x791 = INT8_MAX;
	volatile uint64_t t197 = 365859054685258058LLU;

    t197 = (x789&(x790%(x791|x792)));

    if (t197 != 4318LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x793 = -1;
	volatile int64_t x796 = INT64_MIN;
	volatile int64_t t198 = 54220138816LL;

    t198 = (x793&(x794%(x795|x796)));

    if (t198 != -503231720294542000LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x797 = 1;
	uint8_t x799 = 1U;
	volatile int8_t x800 = 30;
	int32_t t199 = 149;

    t199 = (x797&(x798%(x799|x800)));

    if (t199 != 1) { NG(); } else { ; }
	
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

