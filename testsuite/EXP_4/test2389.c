
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

int64_t x2 = INT64_MIN;
volatile int32_t t0 = -4;
int32_t x12 = 0;
volatile int32_t t3 = 52122;
uint16_t x21 = 111U;
int16_t x34 = -1;
volatile uint32_t x42 = 1U;
volatile uint8_t x49 = 4U;
volatile int32_t t11 = -50056243;
uint32_t x55 = 272676179U;
int8_t x56 = 1;
volatile int32_t t12 = 1;
uint32_t x57 = 2U;
int16_t x60 = 101;
static volatile int32_t t13 = 35331;
int8_t x69 = 1;
volatile int16_t x71 = INT16_MAX;
uint32_t x78 = UINT32_MAX;
int32_t x79 = -1;
int8_t x80 = INT8_MAX;
int32_t t18 = -69985;
uint32_t x84 = 20617814U;
int32_t x85 = -1;
static volatile int32_t t20 = -184551;
static int8_t x111 = INT8_MIN;
uint16_t x112 = 27867U;
volatile int16_t x145 = INT16_MIN;
uint64_t x146 = 1769113237966219251LLU;
int8_t x150 = 5;
volatile uint16_t x153 = 6U;
volatile int64_t x160 = -23108158LL;
static int32_t t33 = -319804742;
volatile int8_t x168 = -1;
static volatile int32_t t36 = 42453;
uint32_t x175 = UINT32_MAX;
volatile int32_t t38 = 3249265;
int32_t t39 = 458894386;
int16_t x191 = INT16_MAX;
uint16_t x202 = UINT16_MAX;
int64_t x205 = 60549950827984LL;
volatile uint32_t x206 = 3924027U;
int32_t t43 = -127304;
int16_t x215 = -5;
int32_t t45 = -3679;
volatile uint64_t x241 = UINT64_MAX;
int8_t x258 = -8;
volatile int64_t x265 = 275LL;
volatile uint8_t x271 = UINT8_MAX;
static int8_t x275 = INT8_MIN;
static int8_t x289 = INT8_MAX;
volatile int32_t t56 = 558195;
uint64_t x302 = 2418751090869LLU;
static volatile int32_t t60 = 7257412;
volatile int32_t t61 = -6368;
static uint64_t x321 = 7LLU;
uint16_t x326 = 3212U;
static int16_t x328 = -1;
uint8_t x329 = 1U;
volatile int16_t x341 = -1187;
int16_t x345 = INT16_MAX;
volatile int8_t x346 = 35;
int16_t x348 = INT16_MAX;
uint8_t x349 = 70U;
static volatile int8_t x351 = 1;
uint8_t x355 = 1U;
volatile int32_t t72 = 322334;
int16_t x362 = INT16_MIN;
volatile int32_t t73 = 132702815;
volatile int32_t t74 = 0;
uint64_t x378 = UINT64_MAX;
static uint8_t x387 = 3U;
int32_t t77 = 50043666;
static int16_t x394 = INT16_MAX;
int16_t x423 = INT16_MIN;
volatile int16_t x436 = INT16_MIN;
int32_t t86 = 860;
volatile int32_t t87 = -17;
int16_t x448 = 178;
int16_t x458 = -1;
int32_t t94 = -246161280;
uint16_t x490 = UINT16_MAX;
static int64_t x491 = INT64_MIN;
volatile int32_t t95 = -92;
static int8_t x495 = INT8_MIN;
uint8_t x498 = 74U;
int8_t x499 = INT8_MIN;
uint8_t x501 = UINT8_MAX;
static uint32_t x508 = 760274575U;
int32_t t99 = 556673532;
volatile uint32_t x514 = UINT32_MAX;
volatile int8_t x530 = -1;
uint16_t x538 = 539U;
volatile int32_t t105 = -1324299;
volatile int32_t t108 = 0;
int64_t x569 = 3LL;
uint8_t x586 = 3U;
static int8_t x599 = -17;
int16_t x600 = 33;
static uint32_t x603 = 80471747U;
volatile int8_t x605 = INT8_MAX;
int16_t x620 = 476;
int64_t x621 = INT64_MAX;
volatile uint64_t x623 = 19924983LLU;
uint32_t x629 = 201867U;
int32_t t123 = -23046276;
uint32_t x644 = 24862160U;
int8_t x647 = INT8_MIN;
uint16_t x651 = 523U;
static int16_t x653 = 926;
int16_t x658 = INT16_MIN;
volatile int32_t t130 = 6;
int64_t x665 = INT64_MIN;
uint64_t x668 = 0LLU;
volatile int32_t t131 = 15540528;
static volatile int16_t x669 = INT16_MAX;
static int64_t x675 = INT64_MAX;
int32_t x684 = 323117;
int64_t x695 = INT64_MIN;
int16_t x705 = 25;
uint8_t x708 = 0U;
static volatile int32_t t142 = 24843;
int32_t x722 = -360318;
static volatile uint16_t x732 = UINT16_MAX;
static int8_t x756 = INT8_MIN;
uint16_t x763 = UINT16_MAX;
volatile int32_t t151 = -4;
int8_t x771 = 0;
volatile uint32_t x789 = UINT32_MAX;
int64_t x795 = INT64_MIN;
static int64_t x796 = INT64_MIN;
int32_t x797 = INT32_MAX;
static uint8_t x800 = 6U;
static volatile int32_t x804 = -1502;
volatile int16_t x805 = INT16_MAX;
int64_t x812 = -1LL;
int64_t x826 = INT64_MAX;
int32_t t166 = -3273;
int64_t x841 = INT64_MIN;
int16_t x842 = 1;
static int64_t x844 = INT64_MAX;
uint32_t x853 = 1913167535U;
uint64_t x856 = 13116591368732285LLU;
static int32_t x858 = INT32_MIN;
int64_t x872 = -1LL;
int16_t x875 = -13;
uint64_t x880 = 32784455LLU;
uint32_t x881 = 170U;
volatile int16_t x885 = INT16_MAX;
volatile int8_t x887 = INT8_MIN;
volatile int32_t t178 = -7435;
uint16_t x895 = UINT16_MAX;
int64_t x897 = INT64_MIN;
int16_t x898 = INT16_MAX;
uint8_t x900 = UINT8_MAX;
int32_t t180 = -52051;
int8_t x912 = INT8_MAX;
volatile int16_t x913 = -18;
static int8_t x918 = INT8_MAX;
static int8_t x927 = -13;
volatile int32_t t187 = 411467673;
int8_t x941 = 0;
int64_t x949 = INT64_MIN;
int8_t x958 = -1;
int32_t x959 = INT32_MIN;
int64_t x968 = INT64_MAX;
volatile int32_t t197 = 207345;
uint64_t x993 = 41898442626270LLU;


void f0(void) {
    	uint32_t x1 = UINT32_MAX;
	uint64_t x3 = UINT64_MAX;
	volatile int64_t x4 = -135281LL;

    t0 = (x1>(x2*(x3|x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int16_t x9 = -1;
	volatile int8_t x10 = INT8_MIN;
	volatile int16_t x11 = -16159;
	static int32_t t1 = 0;

    t1 = (x9>(x10*(x11|x12)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x13 = INT16_MIN;
	uint32_t x14 = UINT32_MAX;
	uint16_t x15 = 5U;
	uint8_t x16 = 83U;
	int32_t t2 = -245147176;

    t2 = (x13>(x14*(x15|x16)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x17 = -1;
	static volatile int64_t x18 = -1LL;
	int64_t x19 = -1LL;
	int32_t x20 = -1;

    t3 = (x17>(x18*(x19|x20)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint16_t x22 = 603U;
	volatile int8_t x23 = INT8_MIN;
	uint16_t x24 = 24U;
	int32_t t4 = 166692;

    t4 = (x21>(x22*(x23|x24)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x25 = 12;
	uint8_t x26 = UINT8_MAX;
	int16_t x27 = -1;
	volatile uint8_t x28 = 0U;
	volatile int32_t t5 = -21131660;

    t5 = (x25>(x26*(x27|x28)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint64_t x29 = 6621891373265LLU;
	uint8_t x30 = 61U;
	int8_t x31 = -14;
	int64_t x32 = INT64_MIN;
	volatile int32_t t6 = -7554300;

    t6 = (x29>(x30*(x31|x32)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x33 = INT64_MAX;
	volatile int64_t x35 = -11569050094968LL;
	static uint32_t x36 = UINT32_MAX;
	int32_t t7 = 228512;

    t7 = (x33>(x34*(x35|x36)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x37 = -1LL;
	static uint64_t x38 = UINT64_MAX;
	volatile uint64_t x39 = 63330LLU;
	int32_t x40 = -1;
	static volatile int32_t t8 = 1;

    t8 = (x37>(x38*(x39|x40)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x41 = -1;
	static int32_t x43 = 88323;
	volatile int16_t x44 = -15;
	static volatile int32_t t9 = 315;

    t9 = (x41>(x42*(x43|x44)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x45 = -1;
	uint64_t x46 = UINT64_MAX;
	int32_t x47 = -1162879;
	int16_t x48 = 540;
	int32_t t10 = 77;

    t10 = (x45>(x46*(x47|x48)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x50 = UINT8_MAX;
	static int8_t x51 = INT8_MAX;
	static uint64_t x52 = 20818154447LLU;

    t11 = (x49>(x50*(x51|x52)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint16_t x53 = UINT16_MAX;
	int64_t x54 = 7052LL;

    t12 = (x53>(x54*(x55|x56)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x58 = INT16_MIN;
	uint16_t x59 = 104U;

    t13 = (x57>(x58*(x59|x60)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x61 = UINT16_MAX;
	uint32_t x62 = UINT32_MAX;
	static volatile int8_t x63 = INT8_MIN;
	int32_t x64 = 14403090;
	volatile int32_t t14 = 28718;

    t14 = (x61>(x62*(x63|x64)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x65 = 3806953101121LLU;
	static volatile int64_t x66 = -242103LL;
	int16_t x67 = INT16_MAX;
	int64_t x68 = -1LL;
	int32_t t15 = 27210864;

    t15 = (x65>(x66*(x67|x68)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static int64_t x70 = -1LL;
	int64_t x72 = INT64_MAX;
	int32_t t16 = 3;

    t16 = (x69>(x70*(x71|x72)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x73 = INT32_MIN;
	int16_t x74 = INT16_MAX;
	int8_t x75 = 0;
	uint32_t x76 = UINT32_MAX;
	int32_t t17 = -585117365;

    t17 = (x73>(x74*(x75|x76)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x77 = INT64_MIN;

    t18 = (x77>(x78*(x79|x80)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x81 = 7U;
	static int16_t x82 = -1;
	int32_t x83 = 96255;
	int32_t t19 = -250;

    t19 = (x81>(x82*(x83|x84)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x86 = -1LL;
	int16_t x87 = INT16_MAX;
	uint32_t x88 = UINT32_MAX;

    t20 = (x85>(x86*(x87|x88)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x89 = -1;
	uint8_t x90 = 36U;
	volatile int8_t x91 = -1;
	volatile int8_t x92 = 1;
	int32_t t21 = -9;

    t21 = (x89>(x90*(x91|x92)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x105 = 0;
	volatile int8_t x106 = 1;
	static volatile int8_t x107 = INT8_MAX;
	volatile int8_t x108 = INT8_MAX;
	volatile int32_t t22 = 6;

    t22 = (x105>(x106*(x107|x108)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x109 = INT32_MIN;
	int16_t x110 = INT16_MIN;
	volatile int32_t t23 = -898233344;

    t23 = (x109>(x110*(x111|x112)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x113 = INT32_MIN;
	uint32_t x114 = UINT32_MAX;
	volatile int16_t x115 = INT16_MIN;
	uint8_t x116 = 0U;
	static int32_t t24 = 45039;

    t24 = (x113>(x114*(x115|x116)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x117 = INT32_MIN;
	static uint32_t x118 = 182752U;
	int64_t x119 = 1LL;
	uint8_t x120 = UINT8_MAX;
	static volatile int32_t t25 = 183;

    t25 = (x117>(x118*(x119|x120)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x121 = 3;
	int8_t x122 = -1;
	int32_t x123 = 184271;
	static int64_t x124 = 595379991661328LL;
	volatile int32_t t26 = -3207;

    t26 = (x121>(x122*(x123|x124)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint8_t x125 = 2U;
	int16_t x126 = INT16_MIN;
	uint64_t x127 = UINT64_MAX;
	int8_t x128 = 0;
	int32_t t27 = -6;

    t27 = (x125>(x126*(x127|x128)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int64_t x129 = 4182292404873LL;
	int16_t x130 = 16;
	static uint64_t x131 = 8223107886861610012LLU;
	int16_t x132 = 241;
	volatile int32_t t28 = -22289;

    t28 = (x129>(x130*(x131|x132)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static int64_t x141 = INT64_MAX;
	static int8_t x142 = INT8_MIN;
	volatile uint32_t x143 = 63939U;
	volatile uint8_t x144 = 3U;
	int32_t t29 = -1179572;

    t29 = (x141>(x142*(x143|x144)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x147 = INT8_MIN;
	int8_t x148 = -1;
	int32_t t30 = 76471477;

    t30 = (x145>(x146*(x147|x148)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x149 = INT16_MAX;
	uint32_t x151 = 555205U;
	int32_t x152 = 187;
	volatile int32_t t31 = 8836;

    t31 = (x149>(x150*(x151|x152)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x154 = INT8_MAX;
	static volatile int8_t x155 = -33;
	int8_t x156 = -15;
	static volatile int32_t t32 = -26551437;

    t32 = (x153>(x154*(x155|x156)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x157 = -24LL;
	int16_t x158 = -1;
	static uint8_t x159 = 29U;

    t33 = (x157>(x158*(x159|x160)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x161 = 31U;
	int32_t x162 = -12727;
	volatile uint64_t x163 = 4018627560LLU;
	static int8_t x164 = INT8_MAX;
	int32_t t34 = 597690897;

    t34 = (x161>(x162*(x163|x164)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x165 = -6575;
	static uint32_t x166 = UINT32_MAX;
	uint16_t x167 = UINT16_MAX;
	volatile int32_t t35 = -44;

    t35 = (x165>(x166*(x167|x168)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x169 = 1737486559LL;
	int32_t x170 = 0;
	uint8_t x171 = 8U;
	int8_t x172 = -1;

    t36 = (x169>(x170*(x171|x172)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x173 = INT8_MIN;
	volatile int8_t x174 = INT8_MIN;
	int64_t x176 = 62606LL;
	int32_t t37 = 20146070;

    t37 = (x173>(x174*(x175|x176)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x177 = 123U;
	static int32_t x178 = INT32_MIN;
	int32_t x179 = INT32_MIN;
	int64_t x180 = INT64_MIN;

    t38 = (x177>(x178*(x179|x180)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint8_t x185 = UINT8_MAX;
	volatile int64_t x186 = -431566982LL;
	volatile int8_t x187 = 17;
	int8_t x188 = -4;

    t39 = (x185>(x186*(x187|x188)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint32_t x189 = UINT32_MAX;
	uint64_t x190 = 853193455361LLU;
	int16_t x192 = INT16_MIN;
	static volatile int32_t t40 = 45727;

    t40 = (x189>(x190*(x191|x192)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x201 = 1U;
	volatile int32_t x203 = INT32_MAX;
	static uint32_t x204 = 1U;
	static int32_t t41 = 560;

    t41 = (x201>(x202*(x203|x204)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x207 = -44506511;
	uint32_t x208 = 60176U;
	volatile int32_t t42 = 44;

    t42 = (x205>(x206*(x207|x208)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x209 = INT64_MAX;
	int32_t x210 = -47521;
	static int8_t x211 = 4;
	static int16_t x212 = INT16_MIN;

    t43 = (x209>(x210*(x211|x212)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x213 = INT8_MIN;
	volatile int8_t x214 = -1;
	static int8_t x216 = INT8_MIN;
	int32_t t44 = 49;

    t44 = (x213>(x214*(x215|x216)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x217 = -1;
	int16_t x218 = -132;
	int32_t x219 = INT32_MIN;
	int64_t x220 = 34649355741LL;

    t45 = (x217>(x218*(x219|x220)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x225 = 118U;
	static uint8_t x226 = 14U;
	int32_t x227 = INT32_MIN;
	int32_t x228 = -1;
	volatile int32_t t46 = 18605;

    t46 = (x225>(x226*(x227|x228)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x229 = UINT16_MAX;
	volatile int8_t x230 = -1;
	uint64_t x231 = 6846LLU;
	uint16_t x232 = 0U;
	int32_t t47 = 13393;

    t47 = (x229>(x230*(x231|x232)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x233 = INT32_MAX;
	static uint64_t x234 = 56493104124826LLU;
	static int64_t x235 = INT64_MIN;
	volatile int64_t x236 = 4247212936LL;
	int32_t t48 = -939941;

    t48 = (x233>(x234*(x235|x236)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x242 = 620295786726087LLU;
	uint64_t x243 = UINT64_MAX;
	int64_t x244 = INT64_MIN;
	static volatile int32_t t49 = -654629512;

    t49 = (x241>(x242*(x243|x244)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x245 = INT16_MAX;
	int16_t x246 = INT16_MIN;
	uint64_t x247 = 100LLU;
	uint16_t x248 = 1U;
	int32_t t50 = 2749;

    t50 = (x245>(x246*(x247|x248)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x249 = 375LL;
	volatile int16_t x250 = -1;
	uint64_t x251 = 2210960018937995LLU;
	volatile uint8_t x252 = 62U;
	volatile int32_t t51 = 324924802;

    t51 = (x249>(x250*(x251|x252)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint16_t x257 = UINT16_MAX;
	int16_t x259 = -31;
	int32_t x260 = -1;
	volatile int32_t t52 = 146397445;

    t52 = (x257>(x258*(x259|x260)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x266 = -1;
	uint8_t x267 = UINT8_MAX;
	static volatile int32_t x268 = -1;
	volatile int32_t t53 = 1;

    t53 = (x265>(x266*(x267|x268)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int32_t x269 = 89844;
	int32_t x270 = INT32_MAX;
	int8_t x272 = INT8_MIN;
	static volatile int32_t t54 = 29817;

    t54 = (x269>(x270*(x271|x272)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x273 = UINT16_MAX;
	uint64_t x274 = UINT64_MAX;
	static volatile uint64_t x276 = UINT64_MAX;
	volatile int32_t t55 = 1;

    t55 = (x273>(x274*(x275|x276)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint16_t x290 = 23U;
	static int32_t x291 = INT32_MAX;
	int32_t x292 = -1;

    t56 = (x289>(x290*(x291|x292)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint8_t x293 = 2U;
	int8_t x294 = INT8_MAX;
	uint16_t x295 = UINT16_MAX;
	int8_t x296 = -1;
	volatile int32_t t57 = 6;

    t57 = (x293>(x294*(x295|x296)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x301 = INT32_MIN;
	int8_t x303 = INT8_MAX;
	static int64_t x304 = INT64_MIN;
	int32_t t58 = 2;

    t58 = (x301>(x302*(x303|x304)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x305 = 101U;
	uint64_t x306 = UINT64_MAX;
	static int32_t x307 = INT32_MIN;
	int8_t x308 = INT8_MAX;
	volatile int32_t t59 = -2843;

    t59 = (x305>(x306*(x307|x308)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int8_t x309 = -1;
	static int16_t x310 = 13985;
	static int32_t x311 = -57088773;
	volatile int8_t x312 = -1;

    t60 = (x309>(x310*(x311|x312)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x313 = 0U;
	int8_t x314 = INT8_MAX;
	uint16_t x315 = 424U;
	uint8_t x316 = 12U;

    t61 = (x313>(x314*(x315|x316)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x317 = INT8_MIN;
	static int8_t x318 = -1;
	uint8_t x319 = 3U;
	int32_t x320 = 18324970;
	static volatile int32_t t62 = 29;

    t62 = (x317>(x318*(x319|x320)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint64_t x322 = 15104949LLU;
	int64_t x323 = INT64_MIN;
	int16_t x324 = INT16_MIN;
	static volatile int32_t t63 = 2006416;

    t63 = (x321>(x322*(x323|x324)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x325 = INT32_MAX;
	int32_t x327 = INT32_MAX;
	int32_t t64 = 7;

    t64 = (x325>(x326*(x327|x328)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x330 = 84U;
	int64_t x331 = INT64_MAX;
	uint64_t x332 = 2051755370750753LLU;
	int32_t t65 = -1;

    t65 = (x329>(x330*(x331|x332)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x333 = -1LL;
	int64_t x334 = INT64_MAX;
	int32_t x335 = INT32_MIN;
	int64_t x336 = INT64_MAX;
	static volatile int32_t t66 = 19806;

    t66 = (x333>(x334*(x335|x336)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x337 = 3;
	volatile int32_t x338 = -89626647;
	static volatile int32_t x339 = -252558;
	uint32_t x340 = UINT32_MAX;
	int32_t t67 = 984;

    t67 = (x337>(x338*(x339|x340)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x342 = INT16_MAX;
	uint64_t x343 = UINT64_MAX;
	static int16_t x344 = INT16_MAX;
	int32_t t68 = -393211;

    t68 = (x341>(x342*(x343|x344)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x347 = 50;
	volatile int32_t t69 = 13;

    t69 = (x345>(x346*(x347|x348)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint16_t x350 = 166U;
	uint16_t x352 = 2U;
	volatile int32_t t70 = -35594362;

    t70 = (x349>(x350*(x351|x352)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x353 = 5U;
	uint64_t x354 = 6765387569LLU;
	int16_t x356 = -3;
	int32_t t71 = -1;

    t71 = (x353>(x354*(x355|x356)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x357 = INT64_MAX;
	volatile int16_t x358 = INT16_MAX;
	uint32_t x359 = 1995934667U;
	uint64_t x360 = 3171367830LLU;

    t72 = (x357>(x358*(x359|x360)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile uint16_t x361 = 1430U;
	uint32_t x363 = 262234U;
	uint32_t x364 = UINT32_MAX;

    t73 = (x361>(x362*(x363|x364)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint16_t x369 = 73U;
	int64_t x370 = -1LL;
	int32_t x371 = -1;
	int8_t x372 = -1;

    t74 = (x369>(x370*(x371|x372)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x377 = INT64_MAX;
	int8_t x379 = INT8_MIN;
	int16_t x380 = INT16_MIN;
	volatile int32_t t75 = 5714696;

    t75 = (x377>(x378*(x379|x380)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x381 = INT32_MIN;
	int8_t x382 = -6;
	int8_t x383 = INT8_MIN;
	uint32_t x384 = UINT32_MAX;
	volatile int32_t t76 = 0;

    t76 = (x381>(x382*(x383|x384)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x385 = 8;
	volatile int16_t x386 = -1048;
	uint32_t x388 = 113044U;

    t77 = (x385>(x386*(x387|x388)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x389 = 0U;
	volatile uint32_t x390 = UINT32_MAX;
	volatile int64_t x391 = INT64_MIN;
	static int16_t x392 = INT16_MIN;
	static int32_t t78 = -16654076;

    t78 = (x389>(x390*(x391|x392)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x393 = UINT8_MAX;
	int32_t x395 = 70681;
	static volatile int16_t x396 = INT16_MIN;
	int32_t t79 = 0;

    t79 = (x393>(x394*(x395|x396)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x397 = INT8_MIN;
	uint32_t x398 = 9608U;
	uint64_t x399 = UINT64_MAX;
	int32_t x400 = INT32_MIN;
	int32_t t80 = -1432614;

    t80 = (x397>(x398*(x399|x400)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x401 = INT8_MIN;
	volatile uint16_t x402 = 25892U;
	int16_t x403 = 27;
	int16_t x404 = -4479;
	static volatile int32_t t81 = -417340602;

    t81 = (x401>(x402*(x403|x404)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x405 = 15U;
	uint32_t x406 = 6U;
	int16_t x407 = INT16_MIN;
	static volatile int8_t x408 = INT8_MAX;
	volatile int32_t t82 = -19;

    t82 = (x405>(x406*(x407|x408)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x409 = INT8_MIN;
	static volatile int64_t x410 = -1LL;
	int32_t x411 = INT32_MAX;
	int16_t x412 = INT16_MIN;
	int32_t t83 = 780689283;

    t83 = (x409>(x410*(x411|x412)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x417 = UINT32_MAX;
	uint64_t x418 = 28119LLU;
	uint8_t x419 = 8U;
	static uint32_t x420 = 180770729U;
	volatile int32_t t84 = -470;

    t84 = (x417>(x418*(x419|x420)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x421 = INT16_MAX;
	uint64_t x422 = 4039143LLU;
	volatile uint32_t x424 = UINT32_MAX;
	int32_t t85 = -1;

    t85 = (x421>(x422*(x423|x424)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x433 = 0;
	int64_t x434 = -1LL;
	volatile int32_t x435 = INT32_MAX;

    t86 = (x433>(x434*(x435|x436)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t x437 = INT32_MIN;
	uint8_t x438 = 2U;
	uint32_t x439 = UINT32_MAX;
	int8_t x440 = INT8_MIN;

    t87 = (x437>(x438*(x439|x440)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x441 = INT64_MIN;
	volatile uint32_t x442 = UINT32_MAX;
	int8_t x443 = -1;
	int64_t x444 = -1LL;
	static volatile int32_t t88 = -228605;

    t88 = (x441>(x442*(x443|x444)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x445 = 29;
	static int8_t x446 = INT8_MAX;
	int32_t x447 = -1;
	int32_t t89 = -92;

    t89 = (x445>(x446*(x447|x448)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x453 = INT32_MIN;
	static uint32_t x454 = 2187882U;
	uint32_t x455 = 44038U;
	volatile uint8_t x456 = 1U;
	static int32_t t90 = -208839;

    t90 = (x453>(x454*(x455|x456)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x457 = 57;
	uint8_t x459 = 2U;
	int16_t x460 = -1;
	int32_t t91 = -153511567;

    t91 = (x457>(x458*(x459|x460)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x465 = -42;
	uint8_t x466 = 12U;
	uint8_t x467 = UINT8_MAX;
	static int8_t x468 = INT8_MIN;
	int32_t t92 = -878;

    t92 = (x465>(x466*(x467|x468)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x473 = 6099166939743252406LLU;
	uint16_t x474 = 1621U;
	uint32_t x475 = 1078321703U;
	volatile int16_t x476 = -1008;
	int32_t t93 = 471544;

    t93 = (x473>(x474*(x475|x476)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x477 = INT32_MAX;
	volatile int8_t x478 = -1;
	static int64_t x479 = 1699662991LL;
	static int8_t x480 = -1;

    t94 = (x477>(x478*(x479|x480)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x489 = -1;
	int8_t x492 = INT8_MIN;

    t95 = (x489>(x490*(x491|x492)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x493 = 662230U;
	uint64_t x494 = 28213729622LLU;
	uint64_t x496 = UINT64_MAX;
	int32_t t96 = 97823;

    t96 = (x493>(x494*(x495|x496)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x497 = UINT16_MAX;
	int64_t x500 = 109206LL;
	volatile int32_t t97 = -3;

    t97 = (x497>(x498*(x499|x500)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x502 = UINT8_MAX;
	int16_t x503 = INT16_MAX;
	static int16_t x504 = INT16_MIN;
	int32_t t98 = 260;

    t98 = (x501>(x502*(x503|x504)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x505 = 599758U;
	int16_t x506 = 2;
	int32_t x507 = INT32_MIN;

    t99 = (x505>(x506*(x507|x508)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x513 = 14050128494820355LL;
	uint8_t x515 = 1U;
	int16_t x516 = INT16_MIN;
	static volatile int32_t t100 = 257641801;

    t100 = (x513>(x514*(x515|x516)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x517 = INT8_MIN;
	uint64_t x518 = 43296929823LLU;
	int64_t x519 = INT64_MIN;
	uint32_t x520 = UINT32_MAX;
	int32_t t101 = -28;

    t101 = (x517>(x518*(x519|x520)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x521 = INT32_MIN;
	int8_t x522 = 4;
	static int64_t x523 = -883181917LL;
	volatile int16_t x524 = INT16_MAX;
	int32_t t102 = 56;

    t102 = (x521>(x522*(x523|x524)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint8_t x529 = 0U;
	int32_t x531 = INT32_MAX;
	static int64_t x532 = -1LL;
	volatile int32_t t103 = -6;

    t103 = (x529>(x530*(x531|x532)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint32_t x533 = UINT32_MAX;
	static uint8_t x534 = 48U;
	static int64_t x535 = INT64_MAX;
	int32_t x536 = -49;
	volatile int32_t t104 = -21710;

    t104 = (x533>(x534*(x535|x536)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x537 = INT8_MAX;
	int64_t x539 = 627539903456996450LL;
	static uint64_t x540 = UINT64_MAX;

    t105 = (x537>(x538*(x539|x540)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x549 = 530177131U;
	int16_t x550 = -11;
	volatile uint64_t x551 = UINT64_MAX;
	volatile int16_t x552 = INT16_MIN;
	volatile int32_t t106 = 671587;

    t106 = (x549>(x550*(x551|x552)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static int64_t x553 = -1LL;
	static int32_t x554 = -1;
	volatile uint32_t x555 = 3348622U;
	uint32_t x556 = 729097U;
	volatile int32_t t107 = -348;

    t107 = (x553>(x554*(x555|x556)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int64_t x561 = 1223333577898LL;
	int32_t x562 = -2040;
	volatile int32_t x563 = INT32_MIN;
	volatile int8_t x564 = INT8_MIN;

    t108 = (x561>(x562*(x563|x564)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int64_t x565 = INT64_MIN;
	uint32_t x566 = UINT32_MAX;
	uint16_t x567 = 0U;
	uint16_t x568 = 22U;
	static volatile int32_t t109 = 1008387344;

    t109 = (x565>(x566*(x567|x568)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x570 = -1;
	static int16_t x571 = 0;
	int64_t x572 = 1217708143963534712LL;
	int32_t t110 = 127;

    t110 = (x569>(x570*(x571|x572)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int32_t x573 = INT32_MAX;
	volatile int64_t x574 = -1LL;
	int64_t x575 = INT64_MIN;
	int64_t x576 = 437261321443391LL;
	int32_t t111 = 0;

    t111 = (x573>(x574*(x575|x576)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x581 = -1;
	int16_t x582 = INT16_MIN;
	static uint64_t x583 = 116756816086838543LLU;
	uint8_t x584 = UINT8_MAX;
	volatile int32_t t112 = 0;

    t112 = (x581>(x582*(x583|x584)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int8_t x585 = INT8_MIN;
	int32_t x587 = 35195601;
	int64_t x588 = 8582947403756874LL;
	static int32_t t113 = -109;

    t113 = (x585>(x586*(x587|x588)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x589 = 492972318U;
	int32_t x590 = 127529977;
	int32_t x591 = 15077790;
	uint64_t x592 = 8LLU;
	int32_t t114 = -25;

    t114 = (x589>(x590*(x591|x592)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x593 = INT8_MAX;
	uint8_t x594 = 26U;
	static uint64_t x595 = 137164414840LLU;
	static int8_t x596 = -5;
	volatile int32_t t115 = -73;

    t115 = (x593>(x594*(x595|x596)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x597 = 6LL;
	int16_t x598 = -5619;
	volatile int32_t t116 = 3;

    t116 = (x597>(x598*(x599|x600)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x601 = -11334;
	static uint64_t x602 = 3883513369LLU;
	volatile int32_t x604 = -1;
	int32_t t117 = 5130;

    t117 = (x601>(x602*(x603|x604)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x606 = 493U;
	uint16_t x607 = 299U;
	int32_t x608 = 238;
	int32_t t118 = 7;

    t118 = (x605>(x606*(x607|x608)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x617 = -28209;
	uint64_t x618 = 8210291LLU;
	int16_t x619 = 5887;
	int32_t t119 = 125481;

    t119 = (x617>(x618*(x619|x620)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x622 = -15;
	int32_t x624 = -1;
	int32_t t120 = -442368741;

    t120 = (x621>(x622*(x623|x624)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x625 = 120351787LLU;
	static int8_t x626 = -1;
	static int32_t x627 = -3878227;
	static uint8_t x628 = UINT8_MAX;
	int32_t t121 = 60656;

    t121 = (x625>(x626*(x627|x628)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static int32_t x630 = 258562752;
	int32_t x631 = 47539747;
	volatile int64_t x632 = -1LL;
	volatile int32_t t122 = -56760;

    t122 = (x629>(x630*(x631|x632)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x633 = -1;
	static int64_t x634 = 990523354583700757LL;
	int32_t x635 = -1;
	volatile uint16_t x636 = 83U;

    t123 = (x633>(x634*(x635|x636)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x637 = INT64_MIN;
	int32_t x638 = 3;
	uint64_t x639 = 1585LLU;
	volatile int64_t x640 = INT64_MIN;
	volatile int32_t t124 = 3;

    t124 = (x637>(x638*(x639|x640)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x641 = INT8_MIN;
	volatile uint32_t x642 = UINT32_MAX;
	int16_t x643 = INT16_MIN;
	static volatile int32_t t125 = 93265;

    t125 = (x641>(x642*(x643|x644)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int32_t x645 = -521966;
	uint16_t x646 = UINT16_MAX;
	static int8_t x648 = INT8_MAX;
	int32_t t126 = -203795;

    t126 = (x645>(x646*(x647|x648)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x649 = 46865647;
	volatile uint8_t x650 = 5U;
	volatile int32_t x652 = -1;
	static volatile int32_t t127 = -1187136;

    t127 = (x649>(x650*(x651|x652)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x654 = -184;
	int8_t x655 = INT8_MIN;
	int16_t x656 = -1;
	volatile int32_t t128 = 0;

    t128 = (x653>(x654*(x655|x656)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x657 = INT8_MIN;
	uint16_t x659 = 0U;
	uint32_t x660 = UINT32_MAX;
	volatile int32_t t129 = 46;

    t129 = (x657>(x658*(x659|x660)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint32_t x661 = 57U;
	int8_t x662 = INT8_MIN;
	static volatile int16_t x663 = INT16_MIN;
	static volatile uint8_t x664 = 12U;

    t130 = (x661>(x662*(x663|x664)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile uint64_t x666 = 3409340084582198LLU;
	static int16_t x667 = INT16_MIN;

    t131 = (x665>(x666*(x667|x668)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x670 = -1;
	uint64_t x671 = 31685128977490704LLU;
	int64_t x672 = INT64_MIN;
	int32_t t132 = 159844;

    t132 = (x669>(x670*(x671|x672)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x673 = -2;
	volatile uint16_t x674 = UINT16_MAX;
	int8_t x676 = -1;
	static volatile int32_t t133 = -234;

    t133 = (x673>(x674*(x675|x676)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x677 = UINT16_MAX;
	int16_t x678 = -1;
	int16_t x679 = -1;
	uint16_t x680 = 3U;
	static int32_t t134 = 0;

    t134 = (x677>(x678*(x679|x680)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x681 = 1U;
	int32_t x682 = INT32_MAX;
	static int16_t x683 = -1;
	static volatile int32_t t135 = 3646806;

    t135 = (x681>(x682*(x683|x684)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x689 = INT32_MAX;
	int16_t x690 = INT16_MAX;
	static uint64_t x691 = 95204567544LLU;
	uint64_t x692 = 7443687963LLU;
	volatile int32_t t136 = -1324566;

    t136 = (x689>(x690*(x691|x692)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x693 = 332148;
	uint32_t x694 = UINT32_MAX;
	int8_t x696 = INT8_MIN;
	int32_t t137 = 164616;

    t137 = (x693>(x694*(x695|x696)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static int64_t x697 = INT64_MIN;
	volatile int8_t x698 = INT8_MIN;
	static int16_t x699 = -1;
	uint64_t x700 = UINT64_MAX;
	int32_t t138 = -164019;

    t138 = (x697>(x698*(x699|x700)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x706 = UINT8_MAX;
	uint8_t x707 = 6U;
	volatile int32_t t139 = 50029;

    t139 = (x705>(x706*(x707|x708)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x709 = INT8_MIN;
	int8_t x710 = INT8_MIN;
	static int8_t x711 = INT8_MIN;
	uint16_t x712 = UINT16_MAX;
	int32_t t140 = 9032103;

    t140 = (x709>(x710*(x711|x712)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x713 = INT64_MIN;
	static int32_t x714 = -1;
	static uint8_t x715 = 14U;
	int32_t x716 = INT32_MIN;
	volatile int32_t t141 = 0;

    t141 = (x713>(x714*(x715|x716)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x717 = -1;
	int32_t x718 = -1;
	int8_t x719 = 0;
	int64_t x720 = -1LL;

    t142 = (x717>(x718*(x719|x720)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x721 = 828802135;
	static volatile uint64_t x723 = UINT64_MAX;
	int32_t x724 = -1;
	int32_t t143 = -46015873;

    t143 = (x721>(x722*(x723|x724)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x725 = -1;
	uint32_t x726 = UINT32_MAX;
	int16_t x727 = INT16_MIN;
	int32_t x728 = 3064309;
	static int32_t t144 = 4;

    t144 = (x725>(x726*(x727|x728)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x729 = 3009U;
	static int8_t x730 = INT8_MAX;
	int64_t x731 = -1LL;
	int32_t t145 = -20571;

    t145 = (x729>(x730*(x731|x732)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x733 = 7;
	static volatile int8_t x734 = 1;
	volatile uint64_t x735 = UINT64_MAX;
	uint16_t x736 = 3664U;
	volatile int32_t t146 = 40;

    t146 = (x733>(x734*(x735|x736)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint16_t x741 = UINT16_MAX;
	int8_t x742 = INT8_MAX;
	static uint64_t x743 = 1LLU;
	static int16_t x744 = -5663;
	static volatile int32_t t147 = 768;

    t147 = (x741>(x742*(x743|x744)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x745 = -1567LL;
	uint32_t x746 = 0U;
	volatile uint64_t x747 = UINT64_MAX;
	int8_t x748 = INT8_MIN;
	int32_t t148 = 46406;

    t148 = (x745>(x746*(x747|x748)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int64_t x753 = INT64_MIN;
	int32_t x754 = -1;
	int64_t x755 = INT64_MAX;
	int32_t t149 = -498874582;

    t149 = (x753>(x754*(x755|x756)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x761 = INT8_MIN;
	uint32_t x762 = 14U;
	int8_t x764 = INT8_MIN;
	static volatile int32_t t150 = 287;

    t150 = (x761>(x762*(x763|x764)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x765 = 2U;
	int16_t x766 = -1;
	int16_t x767 = 2146;
	int64_t x768 = INT64_MAX;

    t151 = (x765>(x766*(x767|x768)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x769 = -1;
	int16_t x770 = INT16_MIN;
	uint8_t x772 = 5U;
	volatile int32_t t152 = 6832;

    t152 = (x769>(x770*(x771|x772)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint64_t x773 = 128714647370998042LLU;
	int8_t x774 = -55;
	static uint64_t x775 = 4286800554LLU;
	int16_t x776 = INT16_MIN;
	static int32_t t153 = 13;

    t153 = (x773>(x774*(x775|x776)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x781 = 1U;
	int8_t x782 = INT8_MAX;
	volatile int32_t x783 = 1515;
	uint8_t x784 = 21U;
	int32_t t154 = 740;

    t154 = (x781>(x782*(x783|x784)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint32_t x785 = UINT32_MAX;
	int32_t x786 = INT32_MIN;
	volatile uint8_t x787 = 6U;
	int64_t x788 = 5367LL;
	int32_t t155 = -61099;

    t155 = (x785>(x786*(x787|x788)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x790 = INT32_MIN;
	static uint64_t x791 = 1202890738834510368LLU;
	static int32_t x792 = 57;
	int32_t t156 = -24;

    t156 = (x789>(x790*(x791|x792)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint32_t x793 = 198314U;
	static volatile uint64_t x794 = UINT64_MAX;
	int32_t t157 = -429611380;

    t157 = (x793>(x794*(x795|x796)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x798 = 4U;
	int64_t x799 = -1LL;
	static volatile int32_t t158 = 61135757;

    t158 = (x797>(x798*(x799|x800)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x801 = -1230457;
	volatile uint32_t x802 = 1258228342U;
	int32_t x803 = -1;
	int32_t t159 = -25;

    t159 = (x801>(x802*(x803|x804)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x806 = INT32_MAX;
	uint32_t x807 = UINT32_MAX;
	static int64_t x808 = 1211582LL;
	volatile int32_t t160 = 1;

    t160 = (x805>(x806*(x807|x808)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x809 = -1;
	uint32_t x810 = 166993U;
	volatile int16_t x811 = 2304;
	static int32_t t161 = 495015;

    t161 = (x809>(x810*(x811|x812)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x813 = INT16_MIN;
	int8_t x814 = 13;
	int8_t x815 = -1;
	static volatile int32_t x816 = -23107;
	int32_t t162 = -14349;

    t162 = (x813>(x814*(x815|x816)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x817 = 2U;
	int16_t x818 = INT16_MIN;
	static int16_t x819 = -1;
	volatile int8_t x820 = -1;
	volatile int32_t t163 = -3508689;

    t163 = (x817>(x818*(x819|x820)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x821 = 1695107012U;
	uint16_t x822 = 13U;
	volatile int32_t x823 = INT32_MIN;
	int32_t x824 = -1;
	volatile int32_t t164 = -738;

    t164 = (x821>(x822*(x823|x824)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x825 = 11;
	uint64_t x827 = 94120LLU;
	static int32_t x828 = INT32_MIN;
	int32_t t165 = -346;

    t165 = (x825>(x826*(x827|x828)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int32_t x829 = 52745;
	static int16_t x830 = -1;
	volatile uint8_t x831 = 1U;
	uint64_t x832 = 2133913084955399437LLU;

    t166 = (x829>(x830*(x831|x832)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x833 = INT16_MIN;
	int64_t x834 = -1LL;
	uint8_t x835 = 73U;
	int64_t x836 = 355346660669348LL;
	volatile int32_t t167 = -38583389;

    t167 = (x833>(x834*(x835|x836)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x843 = INT16_MIN;
	volatile int32_t t168 = -4112157;

    t168 = (x841>(x842*(x843|x844)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x845 = INT32_MIN;
	uint16_t x846 = UINT16_MAX;
	int64_t x847 = INT64_MAX;
	int8_t x848 = -12;
	static volatile int32_t t169 = -735940;

    t169 = (x845>(x846*(x847|x848)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x854 = 7742U;
	int16_t x855 = INT16_MIN;
	int32_t t170 = 115;

    t170 = (x853>(x854*(x855|x856)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x857 = 1;
	int16_t x859 = INT16_MIN;
	volatile int64_t x860 = -6004727LL;
	int32_t t171 = 1531;

    t171 = (x857>(x858*(x859|x860)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x861 = 81634679059LLU;
	uint8_t x862 = 2U;
	volatile int64_t x863 = INT64_MIN;
	volatile int32_t x864 = INT32_MIN;
	int32_t t172 = -33738109;

    t172 = (x861>(x862*(x863|x864)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x869 = -3125719;
	volatile int32_t x870 = -1;
	int16_t x871 = INT16_MAX;
	volatile int32_t t173 = -42285;

    t173 = (x869>(x870*(x871|x872)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int32_t x873 = -1;
	int64_t x874 = INT64_MIN;
	uint64_t x876 = 875LLU;
	int32_t t174 = 1013301573;

    t174 = (x873>(x874*(x875|x876)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x877 = UINT16_MAX;
	int64_t x878 = INT64_MAX;
	uint64_t x879 = 1810LLU;
	int32_t t175 = 344853905;

    t175 = (x877>(x878*(x879|x880)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x882 = 2U;
	static int16_t x883 = -1;
	int32_t x884 = 1889;
	int32_t t176 = 1;

    t176 = (x881>(x882*(x883|x884)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x886 = INT16_MAX;
	int8_t x888 = -3;
	volatile int32_t t177 = 2304;

    t177 = (x885>(x886*(x887|x888)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x889 = 0;
	int32_t x890 = 1;
	uint8_t x891 = 2U;
	volatile uint16_t x892 = 0U;

    t178 = (x889>(x890*(x891|x892)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint32_t x893 = 8U;
	uint8_t x894 = 36U;
	uint64_t x896 = 3470000446066614LLU;
	int32_t t179 = 3505216;

    t179 = (x893>(x894*(x895|x896)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint64_t x899 = UINT64_MAX;

    t180 = (x897>(x898*(x899|x900)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x905 = INT32_MIN;
	int16_t x906 = 511;
	static volatile uint32_t x907 = 126976U;
	uint32_t x908 = UINT32_MAX;
	int32_t t181 = 236;

    t181 = (x905>(x906*(x907|x908)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x909 = -1421232505LL;
	volatile uint64_t x910 = UINT64_MAX;
	int8_t x911 = INT8_MAX;
	int32_t t182 = -478;

    t182 = (x909>(x910*(x911|x912)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint8_t x914 = 19U;
	static uint16_t x915 = 2963U;
	uint16_t x916 = 470U;
	int32_t t183 = 2648;

    t183 = (x913>(x914*(x915|x916)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x917 = UINT64_MAX;
	static uint32_t x919 = 3881U;
	static uint8_t x920 = 0U;
	volatile int32_t t184 = -2631635;

    t184 = (x917>(x918*(x919|x920)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int32_t x921 = 1496;
	int64_t x922 = 8356534LL;
	int64_t x923 = INT64_MIN;
	uint64_t x924 = 0LLU;
	volatile int32_t t185 = -180;

    t185 = (x921>(x922*(x923|x924)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x925 = -1;
	volatile uint32_t x926 = 0U;
	int64_t x928 = -1LL;
	volatile int32_t t186 = 588193;

    t186 = (x925>(x926*(x927|x928)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x929 = INT32_MAX;
	static uint8_t x930 = 1U;
	int64_t x931 = 31997LL;
	int8_t x932 = INT8_MIN;

    t187 = (x929>(x930*(x931|x932)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x942 = -799;
	volatile int8_t x943 = INT8_MAX;
	int16_t x944 = INT16_MIN;
	volatile int32_t t188 = -236922847;

    t188 = (x941>(x942*(x943|x944)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x950 = -1;
	volatile uint8_t x951 = UINT8_MAX;
	int32_t x952 = -16208;
	int32_t t189 = 1;

    t189 = (x949>(x950*(x951|x952)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x953 = 64198363U;
	int32_t x954 = 69615;
	int64_t x955 = -3520LL;
	int64_t x956 = INT64_MAX;
	volatile int32_t t190 = -1;

    t190 = (x953>(x954*(x955|x956)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint8_t x957 = UINT8_MAX;
	volatile int8_t x960 = -1;
	static int32_t t191 = -20335723;

    t191 = (x957>(x958*(x959|x960)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x965 = -1;
	volatile uint64_t x966 = 455043805747997LLU;
	static int32_t x967 = 27566797;
	int32_t t192 = -7;

    t192 = (x965>(x966*(x967|x968)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x969 = INT32_MIN;
	volatile int64_t x970 = -5610545355039LL;
	volatile uint64_t x971 = 22432359LLU;
	volatile int8_t x972 = -1;
	int32_t t193 = 135;

    t193 = (x969>(x970*(x971|x972)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x973 = -1;
	uint64_t x974 = 2037LLU;
	int32_t x975 = INT32_MIN;
	int8_t x976 = INT8_MIN;
	volatile int32_t t194 = -1;

    t194 = (x973>(x974*(x975|x976)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x977 = 1499U;
	int64_t x978 = 2230930335464727887LL;
	int32_t x979 = INT32_MAX;
	int16_t x980 = INT16_MIN;
	int32_t t195 = -1391475;

    t195 = (x977>(x978*(x979|x980)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x981 = INT16_MIN;
	int8_t x982 = 2;
	volatile int8_t x983 = -37;
	int32_t x984 = -1;
	volatile int32_t t196 = 218756;

    t196 = (x981>(x982*(x983|x984)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x985 = INT16_MIN;
	int32_t x986 = 411;
	uint8_t x987 = 39U;
	int16_t x988 = -1;

    t197 = (x985>(x986*(x987|x988)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x994 = INT16_MIN;
	uint64_t x995 = 7188049116224LLU;
	int32_t x996 = INT32_MIN;
	volatile int32_t t198 = -96413;

    t198 = (x993>(x994*(x995|x996)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x997 = INT32_MIN;
	static int32_t x998 = INT32_MIN;
	int16_t x999 = 1;
	uint64_t x1000 = UINT64_MAX;
	volatile int32_t t199 = 38801;

    t199 = (x997>(x998*(x999|x1000)));

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

