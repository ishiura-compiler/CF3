
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

int8_t x5 = INT8_MIN;
volatile int32_t x9 = INT32_MIN;
int16_t x10 = 3;
volatile int8_t x13 = 0;
int8_t x22 = INT8_MIN;
volatile uint16_t x24 = UINT16_MAX;
volatile int32_t t3 = -134832805;
int32_t x25 = INT32_MIN;
static int16_t x26 = INT16_MAX;
int16_t x32 = -9705;
int32_t x46 = -89;
int16_t x47 = 493;
volatile int32_t t8 = -213287;
volatile int64_t x50 = INT64_MAX;
uint32_t x53 = 10U;
static int32_t x56 = -142139;
volatile uint8_t x59 = 103U;
static int16_t x60 = 324;
int32_t t11 = 219697048;
volatile int16_t x62 = INT16_MAX;
uint16_t x64 = 76U;
static int16_t x66 = INT16_MIN;
static int32_t t14 = -1;
static uint16_t x73 = 3U;
int64_t x76 = INT64_MIN;
volatile int64_t x87 = 47341631114LL;
static uint64_t x97 = 1593672LLU;
int32_t x102 = INT32_MIN;
volatile uint16_t x107 = 26655U;
int32_t x108 = -79684;
int32_t x109 = INT32_MIN;
uint8_t x112 = 127U;
int32_t t24 = -2;
volatile int8_t x113 = 2;
static uint8_t x115 = UINT8_MAX;
int16_t x116 = INT16_MIN;
static int32_t x118 = 331;
int64_t x120 = 65452045LL;
int32_t x124 = INT32_MIN;
int8_t x137 = INT8_MIN;
int16_t x138 = INT16_MIN;
static volatile int32_t t31 = 3021373;
int32_t t32 = -473052;
int64_t x147 = -1386063279994LL;
int32_t t35 = 44937158;
volatile int32_t t36 = -813658427;
uint64_t x164 = UINT64_MAX;
volatile uint64_t x168 = 2530367165735LLU;
int32_t x172 = 179;
int32_t x176 = INT32_MAX;
int8_t x178 = INT8_MAX;
volatile int16_t x181 = -1;
int16_t x191 = INT16_MIN;
volatile int32_t t44 = -71;
int8_t x196 = INT8_MIN;
int64_t x197 = INT64_MIN;
int64_t x200 = 643546LL;
int64_t x202 = INT64_MIN;
volatile uint64_t x203 = 11363779235772817LLU;
volatile int32_t t47 = 516;
volatile uint32_t x205 = UINT32_MAX;
volatile uint64_t x209 = 1568LLU;
volatile int64_t x217 = INT64_MIN;
int32_t x218 = 54;
int8_t x220 = INT8_MIN;
uint32_t x221 = 2120898629U;
static uint16_t x230 = UINT16_MAX;
uint16_t x231 = 1U;
uint32_t x234 = UINT32_MAX;
volatile int32_t t56 = 195612875;
uint32_t x241 = 10U;
int8_t x242 = 0;
uint64_t x244 = 366LLU;
int64_t x245 = 20925787166914555LL;
int8_t x246 = -2;
int32_t x256 = -1;
volatile int32_t x265 = -1;
uint8_t x267 = 2U;
uint8_t x268 = UINT8_MAX;
static int32_t t64 = -32116;
int8_t x277 = -24;
uint64_t x289 = 25875LLU;
uint32_t x304 = 186959U;
uint16_t x309 = 63U;
static volatile int32_t x310 = -1;
int64_t x317 = 1LL;
int32_t x320 = 6646;
int16_t x321 = -1;
int64_t x323 = INT64_MAX;
volatile int32_t t76 = 28820843;
int32_t x325 = 9435049;
int32_t t77 = 39102;
volatile int16_t x337 = INT16_MIN;
int32_t t80 = -250905242;
int16_t x350 = -7;
uint64_t x353 = 237838LLU;
static volatile int32_t t83 = -474;
volatile int64_t x370 = INT64_MAX;
volatile int32_t t89 = 76241;
int64_t x393 = INT64_MIN;
volatile int32_t t90 = -9;
int64_t x400 = INT64_MAX;
volatile int32_t t91 = 77;
uint32_t x402 = 63188045U;
int8_t x403 = INT8_MIN;
volatile int64_t x408 = -1LL;
volatile int32_t t93 = -3624704;
uint64_t x409 = 2633174870420LLU;
volatile int64_t x411 = 2749040LL;
volatile int16_t x416 = INT16_MIN;
int64_t x422 = INT64_MIN;
int32_t t97 = 9441;
int64_t x425 = INT64_MAX;
int8_t x426 = INT8_MIN;
static int16_t x432 = INT16_MAX;
volatile int32_t t99 = 867;
uint32_t x435 = 32747U;
int8_t x442 = 18;
volatile uint64_t x444 = 153639052LLU;
static int32_t t102 = -1255111;
volatile int16_t x448 = INT16_MAX;
uint8_t x449 = UINT8_MAX;
volatile int32_t x453 = 2423771;
int16_t x455 = INT16_MIN;
volatile int32_t t106 = -21;
static uint32_t x467 = UINT32_MAX;
int64_t x468 = INT64_MIN;
volatile int64_t x469 = 388254401LL;
static int64_t x473 = INT64_MIN;
int16_t x476 = 3367;
uint64_t x480 = 744255722348LLU;
volatile int32_t t110 = 107282503;
static int16_t x481 = 73;
uint64_t x490 = 2LLU;
int32_t t115 = 1;
int64_t x504 = -7LL;
int8_t x508 = -36;
volatile int32_t t118 = 46949147;
int16_t x513 = INT16_MIN;
static int64_t x515 = INT64_MAX;
static int64_t x522 = -23LL;
uint16_t x535 = 1U;
static volatile uint32_t x536 = 503192351U;
int32_t t123 = 3982;
uint32_t x537 = UINT32_MAX;
int32_t t125 = 1;
int8_t x547 = -1;
uint64_t x548 = 452191763LLU;
volatile int8_t x553 = 1;
static int32_t t128 = -437885313;
volatile int8_t x557 = -1;
static uint16_t x571 = 2U;
uint32_t x576 = UINT32_MAX;
volatile int8_t x579 = 0;
uint8_t x581 = UINT8_MAX;
int64_t x582 = 4674918034411LL;
volatile uint32_t x588 = 114U;
static volatile int32_t t137 = 437427469;
int64_t x595 = INT64_MIN;
int64_t x600 = 20605665409928175LL;
uint8_t x603 = 29U;
uint16_t x604 = 0U;
uint16_t x608 = 1268U;
int8_t x609 = -1;
static int16_t x611 = -1;
static int32_t x617 = -12032607;
int8_t x618 = INT8_MAX;
volatile uint8_t x619 = 96U;
volatile int32_t t145 = 29966;
static volatile uint32_t x633 = 100U;
int32_t x636 = 4;
static int32_t x640 = -1;
uint64_t x641 = 1596420182739988LLU;
int16_t x647 = 1133;
int64_t x651 = INT64_MAX;
static int32_t x652 = -6507630;
volatile int64_t x655 = -2173913062LL;
static int64_t x656 = -86445071110923LL;
static int64_t x658 = INT64_MIN;
int32_t x663 = 0;
volatile uint8_t x668 = 12U;
int32_t t156 = 30347;
int64_t x676 = INT64_MAX;
int32_t t158 = 15459327;
volatile uint8_t x678 = 22U;
int8_t x685 = INT8_MIN;
int8_t x701 = 5;
int32_t t165 = 534;
static int64_t x716 = INT64_MIN;
int32_t t167 = 637562807;
int64_t x722 = INT64_MIN;
uint16_t x726 = UINT16_MAX;
int64_t x732 = -1LL;
int32_t t171 = 122744442;
static int16_t x739 = -1517;
volatile int64_t x741 = INT64_MAX;
static int64_t x746 = -1LL;
int32_t t174 = -648;
int8_t x760 = INT8_MAX;
uint64_t x766 = UINT64_MAX;
volatile int64_t x767 = -1LL;
uint8_t x770 = 18U;
int8_t x772 = -34;
volatile int16_t x773 = 0;
int32_t t180 = 2;
int32_t x777 = INT32_MAX;
volatile uint64_t x778 = 211957719361LLU;
int8_t x782 = INT8_MIN;
volatile int32_t t182 = -15521949;
int16_t x804 = INT16_MAX;
volatile int16_t x807 = -1;
int8_t x815 = INT8_MIN;
static int8_t x816 = 1;
int8_t x818 = INT8_MAX;
int32_t x819 = -39;
uint16_t x821 = 543U;
int32_t x827 = INT32_MAX;
uint32_t x829 = UINT32_MAX;
uint16_t x836 = 151U;
int64_t x837 = 19LL;
volatile int32_t t195 = 54577;
uint32_t x845 = 833U;
int32_t t197 = -692735504;
static int64_t x850 = INT64_MIN;
int8_t x853 = -56;


void f0(void) {
    	int8_t x6 = INT8_MAX;
	uint16_t x7 = UINT16_MAX;
	int32_t x8 = -1;
	static volatile int32_t t0 = 1157;

    t0 = (x5<=(x6%(x7!=x8)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x11 = -5;
	int32_t x12 = -1;
	volatile int32_t t1 = 1787;

    t1 = (x9<=(x10%(x11!=x12)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static int64_t x14 = INT64_MAX;
	int8_t x15 = -1;
	uint8_t x16 = 116U;
	volatile int32_t t2 = -42716645;

    t2 = (x13<=(x14%(x15!=x16)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile uint8_t x21 = 3U;
	static int16_t x23 = -1;

    t3 = (x21<=(x22%(x23!=x24)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint32_t x27 = 1364367U;
	int64_t x28 = -1LL;
	int32_t t4 = 1;

    t4 = (x25<=(x26%(x27!=x28)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x29 = INT16_MAX;
	int8_t x30 = -1;
	volatile int64_t x31 = INT64_MIN;
	volatile int32_t t5 = -491903;

    t5 = (x29<=(x30%(x31!=x32)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x37 = INT16_MAX;
	int16_t x38 = 3;
	static int32_t x39 = INT32_MAX;
	static int32_t x40 = -1;
	volatile int32_t t6 = 49635;

    t6 = (x37<=(x38%(x39!=x40)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x41 = INT32_MAX;
	volatile int64_t x42 = INT64_MIN;
	static int8_t x43 = 0;
	uint32_t x44 = UINT32_MAX;
	static volatile int32_t t7 = -1;

    t7 = (x41<=(x42%(x43!=x44)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x45 = INT16_MIN;
	uint32_t x48 = UINT32_MAX;

    t8 = (x45<=(x46%(x47!=x48)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint8_t x49 = UINT8_MAX;
	uint8_t x51 = 112U;
	volatile uint32_t x52 = UINT32_MAX;
	static volatile int32_t t9 = -187013490;

    t9 = (x49<=(x50%(x51!=x52)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x54 = 52392U;
	static volatile int8_t x55 = 1;
	static int32_t t10 = -1;

    t10 = (x53<=(x54%(x55!=x56)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x57 = 28494U;
	static int64_t x58 = INT64_MIN;

    t11 = (x57<=(x58%(x59!=x60)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x61 = -650439LL;
	static int64_t x63 = 12128827662LL;
	int32_t t12 = -4;

    t12 = (x61<=(x62%(x63!=x64)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int16_t x65 = INT16_MIN;
	int64_t x67 = INT64_MAX;
	int32_t x68 = -48;
	volatile int32_t t13 = 1668;

    t13 = (x65<=(x66%(x67!=x68)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x69 = 7162U;
	static int16_t x70 = INT16_MAX;
	uint8_t x71 = 0U;
	static int8_t x72 = INT8_MAX;

    t14 = (x69<=(x70%(x71!=x72)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x74 = 30927U;
	uint64_t x75 = 253623684274613216LLU;
	int32_t t15 = 2;

    t15 = (x73<=(x74%(x75!=x76)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x77 = UINT32_MAX;
	uint64_t x78 = 60367100632166LLU;
	uint32_t x79 = 3195970U;
	volatile int8_t x80 = 30;
	volatile int32_t t16 = 1126;

    t16 = (x77<=(x78%(x79!=x80)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x81 = UINT16_MAX;
	uint8_t x82 = 3U;
	uint32_t x83 = UINT32_MAX;
	uint16_t x84 = 1678U;
	volatile int32_t t17 = -224203135;

    t17 = (x81<=(x82%(x83!=x84)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint32_t x85 = 571426498U;
	int8_t x86 = -1;
	int16_t x88 = 1;
	static volatile int32_t t18 = 20360;

    t18 = (x85<=(x86%(x87!=x88)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x89 = INT8_MIN;
	uint32_t x90 = 13U;
	int8_t x91 = -42;
	volatile int64_t x92 = -52015063LL;
	int32_t t19 = -498725;

    t19 = (x89<=(x90%(x91!=x92)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x93 = INT32_MAX;
	int8_t x94 = INT8_MAX;
	uint8_t x95 = 3U;
	int64_t x96 = INT64_MIN;
	int32_t t20 = 445917;

    t20 = (x93<=(x94%(x95!=x96)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int32_t x98 = -1;
	int64_t x99 = 747009360715LL;
	static volatile uint64_t x100 = UINT64_MAX;
	int32_t t21 = 21651;

    t21 = (x97<=(x98%(x99!=x100)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x101 = INT16_MIN;
	volatile uint64_t x103 = 593697LLU;
	volatile int16_t x104 = -1;
	int32_t t22 = 451793359;

    t22 = (x101<=(x102%(x103!=x104)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x105 = 97923003;
	uint32_t x106 = UINT32_MAX;
	int32_t t23 = -1;

    t23 = (x105<=(x106%(x107!=x108)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x110 = -1;
	volatile int16_t x111 = INT16_MIN;

    t24 = (x109<=(x110%(x111!=x112)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x114 = INT8_MIN;
	volatile int32_t t25 = 0;

    t25 = (x113<=(x114%(x115!=x116)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x117 = 13U;
	uint8_t x119 = 111U;
	static int32_t t26 = -34022996;

    t26 = (x117<=(x118%(x119!=x120)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int8_t x121 = -1;
	int8_t x122 = INT8_MIN;
	int64_t x123 = -1LL;
	volatile int32_t t27 = 69327;

    t27 = (x121<=(x122%(x123!=x124)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x125 = -1LL;
	int8_t x126 = INT8_MIN;
	int64_t x127 = 23LL;
	volatile uint8_t x128 = 0U;
	static int32_t t28 = -3;

    t28 = (x125<=(x126%(x127!=x128)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x129 = INT16_MIN;
	volatile uint16_t x130 = UINT16_MAX;
	int64_t x131 = -1LL;
	static int16_t x132 = INT16_MAX;
	int32_t t29 = 1215;

    t29 = (x129<=(x130%(x131!=x132)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x133 = -1124574LL;
	int8_t x134 = INT8_MAX;
	static uint32_t x135 = 134U;
	static uint16_t x136 = 50U;
	int32_t t30 = -132;

    t30 = (x133<=(x134%(x135!=x136)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x139 = INT16_MIN;
	volatile int16_t x140 = 65;

    t31 = (x137<=(x138%(x139!=x140)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x141 = 2U;
	volatile int8_t x142 = 0;
	int16_t x143 = INT16_MIN;
	volatile int8_t x144 = INT8_MIN;

    t32 = (x141<=(x142%(x143!=x144)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x145 = INT32_MIN;
	uint8_t x146 = 119U;
	uint64_t x148 = UINT64_MAX;
	int32_t t33 = 2;

    t33 = (x145<=(x146%(x147!=x148)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x149 = 14U;
	static volatile uint8_t x150 = 1U;
	int64_t x151 = -3139673810439421LL;
	int16_t x152 = INT16_MIN;
	int32_t t34 = 64947828;

    t34 = (x149<=(x150%(x151!=x152)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x153 = INT16_MAX;
	int8_t x154 = -1;
	int16_t x155 = INT16_MAX;
	int32_t x156 = -6064;

    t35 = (x153<=(x154%(x155!=x156)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x157 = -1LL;
	uint8_t x158 = UINT8_MAX;
	int32_t x159 = 280163804;
	volatile int16_t x160 = INT16_MIN;

    t36 = (x157<=(x158%(x159!=x160)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x161 = 1;
	int8_t x162 = -18;
	uint64_t x163 = 196943332757636LLU;
	volatile int32_t t37 = 145;

    t37 = (x161<=(x162%(x163!=x164)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x165 = UINT32_MAX;
	uint16_t x166 = 20U;
	uint16_t x167 = UINT16_MAX;
	volatile int32_t t38 = 0;

    t38 = (x165<=(x166%(x167!=x168)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x169 = 383;
	volatile int32_t x170 = INT32_MAX;
	volatile int32_t x171 = -1;
	int32_t t39 = 318099161;

    t39 = (x169<=(x170%(x171!=x172)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x173 = INT64_MAX;
	int64_t x174 = INT64_MIN;
	int8_t x175 = INT8_MAX;
	volatile int32_t t40 = 5760541;

    t40 = (x173<=(x174%(x175!=x176)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x177 = INT16_MAX;
	int8_t x179 = -1;
	static int16_t x180 = INT16_MAX;
	static volatile int32_t t41 = 1;

    t41 = (x177<=(x178%(x179!=x180)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x182 = -1;
	volatile uint8_t x183 = 7U;
	static int32_t x184 = 89317207;
	volatile int32_t t42 = -1;

    t42 = (x181<=(x182%(x183!=x184)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x185 = INT64_MAX;
	int8_t x186 = 43;
	int64_t x187 = 217457739301614LL;
	int8_t x188 = -1;
	volatile int32_t t43 = 30376390;

    t43 = (x185<=(x186%(x187!=x188)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x189 = -131;
	int16_t x190 = INT16_MIN;
	uint64_t x192 = UINT64_MAX;

    t44 = (x189<=(x190%(x191!=x192)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x193 = -41;
	int32_t x194 = -1;
	static int64_t x195 = INT64_MAX;
	int32_t t45 = -14094;

    t45 = (x193<=(x194%(x195!=x196)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x198 = INT16_MIN;
	int64_t x199 = INT64_MAX;
	volatile int32_t t46 = -18252;

    t46 = (x197<=(x198%(x199!=x200)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint64_t x201 = UINT64_MAX;
	static volatile int32_t x204 = -801;

    t47 = (x201<=(x202%(x203!=x204)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x206 = INT16_MIN;
	int8_t x207 = 0;
	static int8_t x208 = INT8_MIN;
	int32_t t48 = 2431;

    t48 = (x205<=(x206%(x207!=x208)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x210 = 1776U;
	int64_t x211 = -249649095599480LL;
	int8_t x212 = -1;
	int32_t t49 = 6897223;

    t49 = (x209<=(x210%(x211!=x212)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x213 = -1;
	int8_t x214 = 0;
	int8_t x215 = INT8_MIN;
	int32_t x216 = INT32_MAX;
	volatile int32_t t50 = 6387;

    t50 = (x213<=(x214%(x215!=x216)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x219 = 0;
	volatile int32_t t51 = 1;

    t51 = (x217<=(x218%(x219!=x220)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x222 = 275;
	uint8_t x223 = 10U;
	int16_t x224 = INT16_MIN;
	volatile int32_t t52 = -1270;

    t52 = (x221<=(x222%(x223!=x224)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint8_t x225 = 47U;
	volatile uint16_t x226 = 1720U;
	int32_t x227 = INT32_MIN;
	volatile uint32_t x228 = 21535U;
	volatile int32_t t53 = -2;

    t53 = (x225<=(x226%(x227!=x228)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x229 = UINT16_MAX;
	static int8_t x232 = 27;
	int32_t t54 = -149;

    t54 = (x229<=(x230%(x231!=x232)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x233 = INT32_MIN;
	volatile int8_t x235 = INT8_MAX;
	int16_t x236 = INT16_MAX;
	volatile int32_t t55 = -5035690;

    t55 = (x233<=(x234%(x235!=x236)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x237 = 20229507;
	volatile int8_t x238 = INT8_MAX;
	int64_t x239 = 7LL;
	int16_t x240 = -1;

    t56 = (x237<=(x238%(x239!=x240)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x243 = UINT64_MAX;
	static volatile int32_t t57 = 4305;

    t57 = (x241<=(x242%(x243!=x244)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x247 = -12054831LL;
	static int8_t x248 = 0;
	static int32_t t58 = 0;

    t58 = (x245<=(x246%(x247!=x248)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x249 = UINT8_MAX;
	uint64_t x250 = 963063387599185LLU;
	volatile int64_t x251 = -1LL;
	volatile uint32_t x252 = 2703967U;
	volatile int32_t t59 = -271;

    t59 = (x249<=(x250%(x251!=x252)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x253 = INT8_MIN;
	static uint16_t x254 = UINT16_MAX;
	volatile uint16_t x255 = 6995U;
	int32_t t60 = 4483;

    t60 = (x253<=(x254%(x255!=x256)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x257 = INT8_MIN;
	static int64_t x258 = -33LL;
	int32_t x259 = 11937000;
	int16_t x260 = -8503;
	int32_t t61 = -20185;

    t61 = (x257<=(x258%(x259!=x260)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x261 = INT16_MAX;
	int16_t x262 = INT16_MAX;
	int32_t x263 = -149825;
	static int32_t x264 = 0;
	int32_t t62 = 112863910;

    t62 = (x261<=(x262%(x263!=x264)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x266 = INT32_MIN;
	volatile int32_t t63 = 30;

    t63 = (x265<=(x266%(x267!=x268)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x269 = -7501;
	volatile int8_t x270 = -2;
	uint16_t x271 = 133U;
	int32_t x272 = -1;

    t64 = (x269<=(x270%(x271!=x272)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x273 = -1;
	int32_t x274 = -1;
	volatile int64_t x275 = INT64_MIN;
	uint8_t x276 = 7U;
	volatile int32_t t65 = -473;

    t65 = (x273<=(x274%(x275!=x276)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x278 = 1467921547LLU;
	static uint64_t x279 = UINT64_MAX;
	int32_t x280 = 2048207;
	int32_t t66 = 78701312;

    t66 = (x277<=(x278%(x279!=x280)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x281 = 53161743U;
	static int32_t x282 = -1;
	int16_t x283 = INT16_MIN;
	int16_t x284 = INT16_MAX;
	int32_t t67 = 367;

    t67 = (x281<=(x282%(x283!=x284)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x285 = -8;
	uint32_t x286 = 2U;
	int64_t x287 = INT64_MIN;
	int16_t x288 = -1;
	volatile int32_t t68 = -841924817;

    t68 = (x285<=(x286%(x287!=x288)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x290 = 181;
	static int32_t x291 = -1;
	volatile uint32_t x292 = 3U;
	int32_t t69 = -188030;

    t69 = (x289<=(x290%(x291!=x292)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x293 = INT32_MAX;
	int32_t x294 = INT32_MAX;
	static volatile int32_t x295 = INT32_MIN;
	int64_t x296 = INT64_MAX;
	static int32_t t70 = -361;

    t70 = (x293<=(x294%(x295!=x296)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x301 = INT16_MIN;
	volatile int8_t x302 = -7;
	static int16_t x303 = -92;
	static int32_t t71 = -7600667;

    t71 = (x301<=(x302%(x303!=x304)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x305 = 114226525LLU;
	int8_t x306 = -1;
	uint16_t x307 = UINT16_MAX;
	static uint32_t x308 = 959U;
	int32_t t72 = 12;

    t72 = (x305<=(x306%(x307!=x308)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x311 = UINT16_MAX;
	int16_t x312 = -1;
	volatile int32_t t73 = 42123645;

    t73 = (x309<=(x310%(x311!=x312)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x313 = UINT32_MAX;
	int16_t x314 = -1;
	static int16_t x315 = -23;
	volatile uint8_t x316 = UINT8_MAX;
	static int32_t t74 = 49343;

    t74 = (x313<=(x314%(x315!=x316)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x318 = -42;
	int32_t x319 = -567;
	static int32_t t75 = 5005;

    t75 = (x317<=(x318%(x319!=x320)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x322 = INT8_MAX;
	int8_t x324 = -43;

    t76 = (x321<=(x322%(x323!=x324)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x326 = 12;
	uint32_t x327 = 15U;
	static int8_t x328 = INT8_MIN;

    t77 = (x325<=(x326%(x327!=x328)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x329 = -45628117611011679LL;
	int8_t x330 = 18;
	static int16_t x331 = INT16_MIN;
	uint16_t x332 = UINT16_MAX;
	volatile int32_t t78 = 359178471;

    t78 = (x329<=(x330%(x331!=x332)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x333 = 1;
	static uint16_t x334 = 4446U;
	volatile int8_t x335 = 6;
	static uint16_t x336 = UINT16_MAX;
	int32_t t79 = -35029158;

    t79 = (x333<=(x334%(x335!=x336)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint32_t x338 = 16U;
	int64_t x339 = INT64_MIN;
	volatile int32_t x340 = -195260296;

    t80 = (x337<=(x338%(x339!=x340)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint8_t x349 = UINT8_MAX;
	int64_t x351 = INT64_MIN;
	uint32_t x352 = 413629891U;
	volatile int32_t t81 = 56739;

    t81 = (x349<=(x350%(x351!=x352)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x354 = INT16_MIN;
	int64_t x355 = 279801875310673LL;
	int8_t x356 = INT8_MIN;
	static volatile int32_t t82 = -13;

    t82 = (x353<=(x354%(x355!=x356)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x357 = INT32_MIN;
	int8_t x358 = 6;
	int8_t x359 = -1;
	int64_t x360 = 1LL;

    t83 = (x357<=(x358%(x359!=x360)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int8_t x361 = 0;
	uint32_t x362 = UINT32_MAX;
	int8_t x363 = -1;
	int16_t x364 = 2;
	int32_t t84 = -46931315;

    t84 = (x361<=(x362%(x363!=x364)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x365 = -1065;
	static uint32_t x366 = 1012U;
	int64_t x367 = INT64_MAX;
	uint32_t x368 = UINT32_MAX;
	volatile int32_t t85 = 1542;

    t85 = (x365<=(x366%(x367!=x368)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x369 = 3301724310LL;
	static int8_t x371 = -1;
	int8_t x372 = -5;
	int32_t t86 = -9087378;

    t86 = (x369<=(x370%(x371!=x372)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint8_t x381 = UINT8_MAX;
	int16_t x382 = INT16_MAX;
	int64_t x383 = INT64_MAX;
	uint16_t x384 = UINT16_MAX;
	volatile int32_t t87 = -860319;

    t87 = (x381<=(x382%(x383!=x384)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int32_t x385 = -1;
	volatile int64_t x386 = -249LL;
	static uint8_t x387 = 12U;
	int64_t x388 = INT64_MIN;
	volatile int32_t t88 = -38700286;

    t88 = (x385<=(x386%(x387!=x388)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x389 = INT32_MIN;
	int32_t x390 = INT32_MIN;
	int64_t x391 = 5482818002LL;
	int16_t x392 = INT16_MIN;

    t89 = (x389<=(x390%(x391!=x392)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x394 = INT8_MIN;
	uint64_t x395 = 1466LLU;
	static int16_t x396 = INT16_MIN;

    t90 = (x393<=(x394%(x395!=x396)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x397 = 18U;
	volatile int32_t x398 = 122758;
	int8_t x399 = -1;

    t91 = (x397<=(x398%(x399!=x400)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x401 = 31U;
	volatile int64_t x404 = -165LL;
	static volatile int32_t t92 = 322891;

    t92 = (x401<=(x402%(x403!=x404)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x405 = -26060324765689LL;
	int32_t x406 = -1333;
	static int8_t x407 = INT8_MIN;

    t93 = (x405<=(x406%(x407!=x408)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x410 = INT8_MIN;
	int64_t x412 = 26926LL;
	volatile int32_t t94 = -13;

    t94 = (x409<=(x410%(x411!=x412)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int16_t x413 = INT16_MIN;
	uint16_t x414 = 286U;
	static volatile int32_t x415 = -1;
	static volatile int32_t t95 = 1633;

    t95 = (x413<=(x414%(x415!=x416)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x417 = -454LL;
	int8_t x418 = INT8_MIN;
	volatile int16_t x419 = INT16_MAX;
	int64_t x420 = -1LL;
	volatile int32_t t96 = -90402;

    t96 = (x417<=(x418%(x419!=x420)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x421 = INT16_MAX;
	uint8_t x423 = 3U;
	uint16_t x424 = UINT16_MAX;

    t97 = (x421<=(x422%(x423!=x424)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x427 = 3U;
	int32_t x428 = -1;
	static volatile int32_t t98 = -387865;

    t98 = (x425<=(x426%(x427!=x428)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x429 = -175205LL;
	int8_t x430 = INT8_MAX;
	volatile uint16_t x431 = 103U;

    t99 = (x429<=(x430%(x431!=x432)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x433 = 9544370974786280LL;
	int32_t x434 = -1;
	uint64_t x436 = UINT64_MAX;
	int32_t t100 = 2109871;

    t100 = (x433<=(x434%(x435!=x436)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x437 = 9144915244008927353LLU;
	int16_t x438 = 59;
	uint8_t x439 = 0U;
	volatile uint8_t x440 = 110U;
	volatile int32_t t101 = -859;

    t101 = (x437<=(x438%(x439!=x440)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x441 = -1;
	uint8_t x443 = UINT8_MAX;

    t102 = (x441<=(x442%(x443!=x444)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x445 = INT16_MAX;
	static int64_t x446 = INT64_MIN;
	int64_t x447 = -1LL;
	volatile int32_t t103 = -1;

    t103 = (x445<=(x446%(x447!=x448)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint16_t x450 = 25472U;
	uint32_t x451 = 7938023U;
	volatile int32_t x452 = INT32_MIN;
	volatile int32_t t104 = 5;

    t104 = (x449<=(x450%(x451!=x452)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint32_t x454 = 802043U;
	int64_t x456 = -22680LL;
	volatile int32_t t105 = -56;

    t105 = (x453<=(x454%(x455!=x456)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x457 = -1LL;
	uint32_t x458 = UINT32_MAX;
	volatile uint16_t x459 = 26U;
	static uint64_t x460 = 18511LLU;

    t106 = (x457<=(x458%(x459!=x460)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x465 = -5;
	volatile uint16_t x466 = 7U;
	static int32_t t107 = -83101;

    t107 = (x465<=(x466%(x467!=x468)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int64_t x470 = INT64_MAX;
	volatile int64_t x471 = 1390407238204LL;
	uint16_t x472 = 1248U;
	int32_t t108 = -12774;

    t108 = (x469<=(x470%(x471!=x472)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x474 = 2U;
	static uint64_t x475 = UINT64_MAX;
	int32_t t109 = 4010;

    t109 = (x473<=(x474%(x475!=x476)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint32_t x477 = 3440125U;
	int64_t x478 = INT64_MIN;
	uint64_t x479 = 1163276285872751LLU;

    t110 = (x477<=(x478%(x479!=x480)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x482 = -1;
	int32_t x483 = 13;
	static volatile uint16_t x484 = UINT16_MAX;
	int32_t t111 = 1307;

    t111 = (x481<=(x482%(x483!=x484)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x485 = 12736U;
	int8_t x486 = INT8_MAX;
	static int32_t x487 = INT32_MIN;
	static int64_t x488 = INT64_MIN;
	static volatile int32_t t112 = -1;

    t112 = (x485<=(x486%(x487!=x488)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int64_t x489 = 14764706461793378LL;
	uint16_t x491 = 703U;
	uint8_t x492 = 124U;
	volatile int32_t t113 = -15978822;

    t113 = (x489<=(x490%(x491!=x492)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x493 = INT32_MIN;
	volatile int64_t x494 = INT64_MAX;
	volatile uint32_t x495 = UINT32_MAX;
	int8_t x496 = INT8_MIN;
	int32_t t114 = 158339793;

    t114 = (x493<=(x494%(x495!=x496)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int8_t x497 = -1;
	static uint16_t x498 = 22U;
	volatile int8_t x499 = 0;
	int32_t x500 = -325;

    t115 = (x497<=(x498%(x499!=x500)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x501 = -1LL;
	volatile int16_t x502 = -2805;
	int16_t x503 = -83;
	int32_t t116 = 1;

    t116 = (x501<=(x502%(x503!=x504)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile int64_t x505 = INT64_MAX;
	int32_t x506 = INT32_MAX;
	uint8_t x507 = 73U;
	volatile int32_t t117 = 1140;

    t117 = (x505<=(x506%(x507!=x508)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int8_t x509 = INT8_MIN;
	uint16_t x510 = 7U;
	static uint16_t x511 = 1991U;
	volatile int64_t x512 = INT64_MIN;

    t118 = (x509<=(x510%(x511!=x512)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x514 = -1;
	uint32_t x516 = UINT32_MAX;
	static int32_t t119 = 1698455;

    t119 = (x513<=(x514%(x515!=x516)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x517 = -339020;
	static int64_t x518 = -1LL;
	uint8_t x519 = 65U;
	volatile int64_t x520 = INT64_MAX;
	int32_t t120 = -9562;

    t120 = (x517<=(x518%(x519!=x520)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x521 = UINT64_MAX;
	int16_t x523 = 29;
	static int64_t x524 = -72244037464895959LL;
	int32_t t121 = -3548789;

    t121 = (x521<=(x522%(x523!=x524)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x525 = 134;
	volatile int32_t x526 = INT32_MIN;
	int32_t x527 = 169975139;
	int64_t x528 = -1LL;
	static volatile int32_t t122 = -5408;

    t122 = (x525<=(x526%(x527!=x528)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x533 = INT32_MIN;
	static uint64_t x534 = 0LLU;

    t123 = (x533<=(x534%(x535!=x536)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint64_t x538 = 53LLU;
	volatile int64_t x539 = 805616145172528133LL;
	static uint8_t x540 = UINT8_MAX;
	int32_t t124 = -402630799;

    t124 = (x537<=(x538%(x539!=x540)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x541 = INT8_MIN;
	static int64_t x542 = -1LL;
	uint32_t x543 = UINT32_MAX;
	static int16_t x544 = INT16_MIN;

    t125 = (x541<=(x542%(x543!=x544)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x545 = INT16_MIN;
	uint32_t x546 = 2686055U;
	static int32_t t126 = 1;

    t126 = (x545<=(x546%(x547!=x548)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x549 = INT64_MIN;
	int32_t x550 = 981;
	volatile uint16_t x551 = UINT16_MAX;
	static volatile uint8_t x552 = 35U;
	int32_t t127 = -1;

    t127 = (x549<=(x550%(x551!=x552)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x554 = 497265062U;
	int64_t x555 = INT64_MAX;
	static uint8_t x556 = 90U;

    t128 = (x553<=(x554%(x555!=x556)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int64_t x558 = -1LL;
	static int16_t x559 = -3147;
	volatile int32_t x560 = INT32_MIN;
	volatile int32_t t129 = -12257;

    t129 = (x557<=(x558%(x559!=x560)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x561 = 321U;
	int64_t x562 = -1LL;
	static uint32_t x563 = 173U;
	uint32_t x564 = 149699U;
	static int32_t t130 = 5542;

    t130 = (x561<=(x562%(x563!=x564)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x565 = -1;
	uint16_t x566 = 1594U;
	uint16_t x567 = UINT16_MAX;
	uint8_t x568 = 29U;
	int32_t t131 = 1385;

    t131 = (x565<=(x566%(x567!=x568)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x569 = -1;
	static volatile int64_t x570 = INT64_MIN;
	uint32_t x572 = 322084U;
	volatile int32_t t132 = -15133;

    t132 = (x569<=(x570%(x571!=x572)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x573 = INT16_MIN;
	uint8_t x574 = 15U;
	volatile int8_t x575 = 9;
	static int32_t t133 = 199;

    t133 = (x573<=(x574%(x575!=x576)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x577 = -16;
	uint16_t x578 = 107U;
	volatile uint16_t x580 = 488U;
	int32_t t134 = 1;

    t134 = (x577<=(x578%(x579!=x580)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x583 = 1;
	volatile int64_t x584 = -12347512LL;
	int32_t t135 = -30553903;

    t135 = (x581<=(x582%(x583!=x584)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x585 = INT16_MIN;
	int64_t x586 = INT64_MIN;
	uint32_t x587 = 3U;
	int32_t t136 = -4038114;

    t136 = (x585<=(x586%(x587!=x588)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint32_t x589 = UINT32_MAX;
	int8_t x590 = INT8_MAX;
	int8_t x591 = 0;
	static int64_t x592 = 10LL;

    t137 = (x589<=(x590%(x591!=x592)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x593 = 2681;
	uint16_t x594 = UINT16_MAX;
	int32_t x596 = INT32_MIN;
	volatile int32_t t138 = -2663;

    t138 = (x593<=(x594%(x595!=x596)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x597 = UINT16_MAX;
	int16_t x598 = INT16_MIN;
	int8_t x599 = INT8_MIN;
	int32_t t139 = -201;

    t139 = (x597<=(x598%(x599!=x600)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x601 = UINT32_MAX;
	uint16_t x602 = 370U;
	volatile int32_t t140 = 54320;

    t140 = (x601<=(x602%(x603!=x604)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x605 = -1LL;
	static uint32_t x606 = UINT32_MAX;
	static int64_t x607 = INT64_MIN;
	volatile int32_t t141 = 1549;

    t141 = (x605<=(x606%(x607!=x608)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint16_t x610 = 32500U;
	int64_t x612 = INT64_MIN;
	int32_t t142 = 4997;

    t142 = (x609<=(x610%(x611!=x612)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static int8_t x613 = INT8_MIN;
	volatile uint8_t x614 = 4U;
	uint8_t x615 = 0U;
	volatile int8_t x616 = INT8_MIN;
	volatile int32_t t143 = 1;

    t143 = (x613<=(x614%(x615!=x616)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x620 = INT8_MAX;
	volatile int32_t t144 = 132037744;

    t144 = (x617<=(x618%(x619!=x620)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x621 = 351LLU;
	uint8_t x622 = UINT8_MAX;
	static int8_t x623 = INT8_MAX;
	int64_t x624 = 3LL;

    t145 = (x621<=(x622%(x623!=x624)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x625 = INT64_MAX;
	static volatile int32_t x626 = -1;
	int32_t x627 = -1;
	int32_t x628 = INT32_MAX;
	static int32_t t146 = 72158;

    t146 = (x625<=(x626%(x627!=x628)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x629 = INT8_MAX;
	static volatile int32_t x630 = INT32_MIN;
	uint64_t x631 = 17666LLU;
	volatile uint16_t x632 = 32U;
	volatile int32_t t147 = 1;

    t147 = (x629<=(x630%(x631!=x632)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x634 = INT64_MIN;
	static int8_t x635 = INT8_MIN;
	static volatile int32_t t148 = -7891450;

    t148 = (x633<=(x634%(x635!=x636)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x637 = INT8_MIN;
	volatile uint64_t x638 = 618549999950521LLU;
	int16_t x639 = INT16_MIN;
	volatile int32_t t149 = -719177;

    t149 = (x637<=(x638%(x639!=x640)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x642 = -1;
	uint8_t x643 = 0U;
	int64_t x644 = 50551151LL;
	static int32_t t150 = -48308105;

    t150 = (x641<=(x642%(x643!=x644)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int8_t x645 = -2;
	static uint8_t x646 = UINT8_MAX;
	uint32_t x648 = UINT32_MAX;
	int32_t t151 = 9246;

    t151 = (x645<=(x646%(x647!=x648)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint64_t x649 = 265341LLU;
	int64_t x650 = -38790329038868519LL;
	volatile int32_t t152 = -499;

    t152 = (x649<=(x650%(x651!=x652)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x653 = INT8_MAX;
	int16_t x654 = -9941;
	int32_t t153 = -8075224;

    t153 = (x653<=(x654%(x655!=x656)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint64_t x657 = 4561675721685012LLU;
	static int8_t x659 = 0;
	uint16_t x660 = UINT16_MAX;
	volatile int32_t t154 = 127984578;

    t154 = (x657<=(x658%(x659!=x660)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int32_t x661 = INT32_MAX;
	uint8_t x662 = 4U;
	uint8_t x664 = 7U;
	int32_t t155 = -6;

    t155 = (x661<=(x662%(x663!=x664)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint16_t x665 = 57U;
	volatile int32_t x666 = INT32_MIN;
	static int64_t x667 = INT64_MIN;

    t156 = (x665<=(x666%(x667!=x668)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x669 = -1;
	volatile int32_t x670 = 74175;
	int32_t x671 = INT32_MIN;
	int64_t x672 = INT64_MIN;
	volatile int32_t t157 = 5;

    t157 = (x669<=(x670%(x671!=x672)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x673 = -1;
	volatile int16_t x674 = INT16_MAX;
	volatile uint64_t x675 = 16LLU;

    t158 = (x673<=(x674%(x675!=x676)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static int8_t x677 = INT8_MIN;
	int8_t x679 = 0;
	int64_t x680 = INT64_MAX;
	static int32_t t159 = -104625;

    t159 = (x677<=(x678%(x679!=x680)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x681 = -1;
	volatile uint16_t x682 = 10U;
	int64_t x683 = -1LL;
	int16_t x684 = 4981;
	volatile int32_t t160 = 128603;

    t160 = (x681<=(x682%(x683!=x684)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x686 = -1;
	static uint32_t x687 = 128261692U;
	int32_t x688 = -110500;
	volatile int32_t t161 = 1;

    t161 = (x685<=(x686%(x687!=x688)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int8_t x693 = -1;
	int16_t x694 = 578;
	int32_t x695 = -1;
	int8_t x696 = 3;
	static volatile int32_t t162 = -1;

    t162 = (x693<=(x694%(x695!=x696)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x697 = 145U;
	int32_t x698 = 0;
	volatile int32_t x699 = INT32_MIN;
	volatile uint64_t x700 = 7484686490308306712LLU;
	int32_t t163 = 1;

    t163 = (x697<=(x698%(x699!=x700)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x702 = INT64_MIN;
	static int64_t x703 = INT64_MIN;
	static int32_t x704 = -1;
	int32_t t164 = -265;

    t164 = (x701<=(x702%(x703!=x704)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x709 = 35;
	uint64_t x710 = 6776881350122LLU;
	static volatile int8_t x711 = -13;
	volatile int32_t x712 = 1588715;

    t165 = (x709<=(x710%(x711!=x712)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x713 = INT16_MIN;
	int64_t x714 = -2800480867LL;
	uint8_t x715 = UINT8_MAX;
	volatile int32_t t166 = -232449409;

    t166 = (x713<=(x714%(x715!=x716)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x717 = INT32_MIN;
	static volatile int32_t x718 = INT32_MAX;
	uint16_t x719 = UINT16_MAX;
	static uint64_t x720 = 274246250816LLU;

    t167 = (x717<=(x718%(x719!=x720)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint8_t x721 = UINT8_MAX;
	static int32_t x723 = INT32_MAX;
	uint16_t x724 = UINT16_MAX;
	volatile int32_t t168 = 4251;

    t168 = (x721<=(x722%(x723!=x724)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x725 = UINT64_MAX;
	uint16_t x727 = UINT16_MAX;
	static volatile uint16_t x728 = 4353U;
	volatile int32_t t169 = -55;

    t169 = (x725<=(x726%(x727!=x728)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x729 = 3850269416LLU;
	int64_t x730 = -29227194474427368LL;
	volatile int32_t x731 = INT32_MIN;
	static int32_t t170 = 4679;

    t170 = (x729<=(x730%(x731!=x732)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x733 = 1U;
	int8_t x734 = 1;
	int64_t x735 = INT64_MAX;
	int8_t x736 = 0;

    t171 = (x733<=(x734%(x735!=x736)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x737 = -67;
	int64_t x738 = 1LL;
	int8_t x740 = 0;
	volatile int32_t t172 = -44943;

    t172 = (x737<=(x738%(x739!=x740)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile uint8_t x742 = UINT8_MAX;
	static uint32_t x743 = 602400954U;
	int16_t x744 = INT16_MIN;
	volatile int32_t t173 = 328;

    t173 = (x741<=(x742%(x743!=x744)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x745 = INT32_MAX;
	volatile uint8_t x747 = UINT8_MAX;
	static volatile uint16_t x748 = UINT16_MAX;

    t174 = (x745<=(x746%(x747!=x748)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x753 = 60;
	static uint8_t x754 = 16U;
	int64_t x755 = -33114809253LL;
	int32_t x756 = INT32_MAX;
	volatile int32_t t175 = 7838;

    t175 = (x753<=(x754%(x755!=x756)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x757 = UINT16_MAX;
	uint8_t x758 = 2U;
	static volatile uint16_t x759 = UINT16_MAX;
	int32_t t176 = -644589;

    t176 = (x757<=(x758%(x759!=x760)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x761 = INT32_MIN;
	static int32_t x762 = 8878482;
	int8_t x763 = -1;
	int8_t x764 = INT8_MIN;
	static volatile int32_t t177 = -560066;

    t177 = (x761<=(x762%(x763!=x764)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x765 = INT8_MAX;
	int32_t x768 = -59697;
	int32_t t178 = -416242519;

    t178 = (x765<=(x766%(x767!=x768)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x769 = INT64_MIN;
	int32_t x771 = -1;
	static int32_t t179 = 241013;

    t179 = (x769<=(x770%(x771!=x772)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x774 = 14876LLU;
	volatile int8_t x775 = INT8_MIN;
	int32_t x776 = INT32_MIN;

    t180 = (x773<=(x774%(x775!=x776)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x779 = UINT32_MAX;
	uint8_t x780 = 64U;
	static volatile int32_t t181 = -1934;

    t181 = (x777<=(x778%(x779!=x780)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint16_t x781 = 527U;
	int16_t x783 = INT16_MIN;
	int16_t x784 = -42;

    t182 = (x781<=(x782%(x783!=x784)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int64_t x789 = INT64_MIN;
	uint16_t x790 = 69U;
	int32_t x791 = -11642;
	int64_t x792 = 890274827LL;
	int32_t t183 = 0;

    t183 = (x789<=(x790%(x791!=x792)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x793 = -119;
	uint32_t x794 = 20U;
	volatile uint8_t x795 = 15U;
	volatile int16_t x796 = INT16_MIN;
	int32_t t184 = -10510626;

    t184 = (x793<=(x794%(x795!=x796)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x797 = INT32_MAX;
	uint8_t x798 = 18U;
	uint8_t x799 = 3U;
	int16_t x800 = -216;
	volatile int32_t t185 = 386;

    t185 = (x797<=(x798%(x799!=x800)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x801 = INT8_MIN;
	int64_t x802 = INT64_MAX;
	volatile int64_t x803 = INT64_MIN;
	static int32_t t186 = 41296;

    t186 = (x801<=(x802%(x803!=x804)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x805 = -1;
	int16_t x806 = INT16_MIN;
	volatile int8_t x808 = INT8_MAX;
	int32_t t187 = 7527857;

    t187 = (x805<=(x806%(x807!=x808)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x809 = 2U;
	uint8_t x810 = UINT8_MAX;
	static int8_t x811 = 2;
	int64_t x812 = INT64_MAX;
	int32_t t188 = -1;

    t188 = (x809<=(x810%(x811!=x812)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x813 = -1334;
	uint32_t x814 = 9269172U;
	int32_t t189 = 0;

    t189 = (x813<=(x814%(x815!=x816)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint16_t x817 = 30U;
	int8_t x820 = -1;
	volatile int32_t t190 = -436;

    t190 = (x817<=(x818%(x819!=x820)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile uint8_t x822 = 81U;
	int16_t x823 = -1;
	volatile int16_t x824 = INT16_MAX;
	volatile int32_t t191 = -62;

    t191 = (x821<=(x822%(x823!=x824)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x825 = 2022U;
	int64_t x826 = -5923242LL;
	uint8_t x828 = UINT8_MAX;
	int32_t t192 = 206;

    t192 = (x825<=(x826%(x827!=x828)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x830 = INT16_MIN;
	volatile int32_t x831 = -1;
	volatile int64_t x832 = INT64_MIN;
	static int32_t t193 = -17275;

    t193 = (x829<=(x830%(x831!=x832)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x833 = 27U;
	int16_t x834 = INT16_MIN;
	int32_t x835 = INT32_MAX;
	volatile int32_t t194 = 19750456;

    t194 = (x833<=(x834%(x835!=x836)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int64_t x838 = -1LL;
	uint32_t x839 = 160228U;
	int16_t x840 = 328;

    t195 = (x837<=(x838%(x839!=x840)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x841 = INT32_MIN;
	volatile uint32_t x842 = 5U;
	int32_t x843 = INT32_MIN;
	int16_t x844 = -1;
	int32_t t196 = 29;

    t196 = (x841<=(x842%(x843!=x844)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x846 = INT16_MIN;
	int64_t x847 = -3974466547355LL;
	int16_t x848 = INT16_MIN;

    t197 = (x845<=(x846%(x847!=x848)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x849 = 78U;
	volatile uint32_t x851 = 789827U;
	int16_t x852 = INT16_MIN;
	volatile int32_t t198 = 495515696;

    t198 = (x849<=(x850%(x851!=x852)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x854 = INT8_MAX;
	int64_t x855 = 1271417LL;
	int64_t x856 = -34601255319519LL;
	int32_t t199 = 1249738;

    t199 = (x853<=(x854%(x855!=x856)));

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

