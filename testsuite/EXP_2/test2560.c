
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

volatile int32_t x1 = -1;
volatile int32_t x2 = 0;
int16_t x5 = INT16_MAX;
int32_t t1 = -6;
volatile int32_t t2 = -110071805;
int32_t x16 = -1;
int32_t x18 = -1;
static volatile int64_t t4 = -26622391881491012LL;
int16_t x21 = -1;
uint32_t x31 = 20494896U;
volatile int64_t t7 = -1525LL;
uint16_t x37 = 349U;
static volatile uint32_t t9 = 19U;
uint64_t x42 = 1901120413LLU;
uint64_t t10 = 958181253091675LLU;
uint16_t x45 = UINT16_MAX;
int8_t x46 = INT8_MAX;
static uint16_t x48 = UINT16_MAX;
int16_t x49 = INT16_MAX;
int64_t x50 = -1LL;
int8_t x55 = INT8_MIN;
static int32_t t19 = 1278;
uint32_t x86 = 5U;
static int64_t t20 = 1117LL;
int8_t x100 = -1;
uint16_t x105 = 2028U;
volatile uint64_t t25 = 465LLU;
int32_t x118 = 0;
uint32_t t28 = 1593U;
int32_t x121 = -2677;
static int32_t x122 = INT32_MIN;
volatile int64_t t32 = -6226016LL;
volatile uint16_t x137 = 6538U;
int16_t x138 = -1;
static int16_t x140 = INT16_MIN;
int64_t t35 = 1LL;
int32_t x150 = 57;
int16_t x152 = -2;
int16_t x154 = INT16_MAX;
uint32_t x163 = 15225U;
uint8_t x176 = 6U;
volatile int64_t x177 = -1LL;
uint16_t x185 = 13U;
int32_t t44 = 52;
int64_t x200 = INT64_MAX;
int8_t x204 = 12;
uint8_t x206 = 15U;
static int64_t x207 = INT64_MIN;
volatile int64_t t50 = INT64_MIN;
int16_t x214 = 660;
static int16_t x216 = INT16_MIN;
int64_t t51 = INT64_MIN;
int8_t x221 = INT8_MIN;
uint32_t x222 = 3363206U;
static volatile uint64_t t53 = 9645190778484LLU;
int16_t x226 = 1;
int32_t t55 = -483727559;
uint32_t x235 = 128968U;
volatile uint64_t t57 = 107LLU;
volatile int64_t x242 = -1LL;
volatile int16_t x244 = INT16_MIN;
static int64_t x245 = -37315LL;
uint64_t x247 = 21006LLU;
static volatile int16_t x252 = -1;
static int8_t x255 = INT8_MAX;
volatile uint64_t x257 = UINT64_MAX;
volatile int8_t x278 = INT8_MIN;
int8_t x284 = -1;
int16_t x292 = -11261;
volatile int32_t x294 = INT32_MIN;
static int64_t t70 = INT64_MIN;
int16_t x297 = -15;
uint32_t x298 = 482944U;
static int64_t x299 = INT64_MAX;
int16_t x309 = 1;
static int8_t x320 = 1;
int64_t x322 = INT64_MIN;
static int32_t x323 = INT32_MIN;
int64_t x326 = INT64_MAX;
static uint8_t x330 = 36U;
uint8_t x331 = UINT8_MAX;
uint8_t x333 = 0U;
int8_t x345 = INT8_MIN;
int32_t t82 = -26519858;
volatile uint64_t x349 = 1559231041LLU;
static volatile uint16_t x352 = UINT16_MAX;
uint64_t t83 = 1803493022LLU;
int64_t t84 = -3097297013LL;
uint16_t x364 = UINT16_MAX;
volatile int64_t x375 = -1LL;
int8_t x377 = 49;
uint8_t x379 = UINT8_MAX;
int8_t x385 = 1;
volatile int32_t x386 = INT32_MAX;
static volatile int32_t x388 = INT32_MIN;
static volatile uint64_t x396 = UINT64_MAX;
volatile uint64_t t90 = 3163760930916523LLU;
static uint32_t x397 = 482556U;
int16_t x401 = INT16_MIN;
volatile uint64_t x404 = UINT64_MAX;
uint64_t t92 = 29224019272451851LLU;
int32_t x407 = 50;
static volatile int64_t t94 = -61763361429457991LL;
int8_t x414 = -2;
int32_t x416 = INT32_MIN;
uint32_t x424 = 1U;
int8_t x426 = INT8_MIN;
static int16_t x427 = INT16_MIN;
static uint64_t t99 = 5846052537LLU;
int16_t x436 = -10077;
static int16_t x441 = -172;
uint64_t x444 = 110641056513LLU;
int64_t x460 = -1LL;
int64_t t107 = 6511772137705LL;
static volatile int32_t t108 = 1;
int32_t x473 = -374;
int64_t x474 = INT64_MIN;
int16_t x479 = INT16_MAX;
int64_t x482 = INT64_MIN;
volatile uint64_t x486 = 199571LLU;
volatile uint64_t x489 = 30932748189532LLU;
uint32_t t115 = 1U;
uint16_t x516 = 0U;
volatile int64_t x518 = -1LL;
int8_t x523 = INT8_MIN;
volatile int64_t x529 = -223630005896626914LL;
int32_t t123 = -3504;
uint16_t x541 = UINT16_MAX;
int32_t x549 = INT32_MIN;
volatile uint64_t t129 = 1LLU;
uint16_t x573 = UINT16_MAX;
static volatile int8_t x577 = -1;
uint16_t x593 = UINT16_MAX;
static int64_t t134 = 381127LL;
static int8_t x597 = 10;
uint32_t x604 = UINT32_MAX;
volatile int64_t t138 = -2844795927824300LL;
int64_t x620 = INT64_MIN;
static volatile int64_t t140 = INT64_MIN;
volatile int64_t x625 = 355656LL;
uint64_t x626 = 122490301LLU;
int64_t x629 = INT64_MIN;
volatile int16_t x637 = INT16_MIN;
int32_t x638 = INT32_MAX;
int32_t t145 = 3136;
int64_t x646 = INT64_MIN;
volatile int64_t t146 = INT64_MIN;
static uint8_t x654 = UINT8_MAX;
int64_t x655 = INT64_MAX;
volatile uint64_t t148 = 247LLU;
int64_t x662 = INT64_MIN;
volatile uint64_t x663 = UINT64_MAX;
static uint64_t t149 = 7318813942110383425LLU;
int32_t x666 = INT32_MAX;
uint64_t x670 = 8026LLU;
volatile uint64_t x672 = UINT64_MAX;
static volatile int32_t x673 = -277334119;
int8_t x675 = INT8_MIN;
uint32_t t152 = 95296766U;
static uint8_t x677 = 109U;
uint16_t x678 = 0U;
int32_t x686 = 1768;
static volatile int32_t x689 = -39291092;
volatile uint64_t t157 = 112LLU;
int32_t x697 = 1530;
int8_t x700 = INT8_MIN;
static int32_t t158 = 2378563;
volatile int64_t t161 = 0LL;
volatile uint16_t x717 = 15958U;
int32_t x718 = 1;
uint16_t x727 = 15092U;
volatile uint32_t t163 = 69989942U;
int32_t x731 = INT32_MIN;
uint32_t t164 = 117U;
int16_t x733 = INT16_MAX;
uint64_t x736 = UINT64_MAX;
uint32_t t166 = 704994U;
volatile int32_t x747 = 32;
volatile int32_t t167 = 0;
int32_t x752 = INT32_MIN;
uint16_t x754 = 15U;
int16_t x755 = -1;
int16_t x775 = 9;
int8_t x777 = INT8_MIN;
static uint32_t x778 = 9U;
static int64_t x780 = INT64_MIN;
int16_t x781 = 29;
int32_t x782 = INT32_MAX;
int32_t t174 = -3516999;
uint32_t x786 = 253U;
static uint8_t x789 = 64U;
static int64_t x792 = INT64_MIN;
int16_t x793 = -1;
uint64_t x798 = 2LLU;
volatile int16_t x799 = -16;
volatile uint32_t x800 = UINT32_MAX;
uint32_t x802 = 124407U;
static int64_t t180 = -478617449LL;
int64_t x810 = 86562802112190832LL;
int16_t x811 = INT16_MIN;
static volatile int64_t t181 = 10858619507LL;
uint32_t x814 = UINT32_MAX;
int16_t x815 = INT16_MIN;
uint16_t x820 = 2U;
int32_t x824 = INT32_MIN;
static int64_t x836 = INT64_MAX;
volatile int64_t t186 = 0LL;
static volatile int8_t x838 = INT8_MIN;
static int32_t x840 = -248110071;
volatile int64_t x852 = INT64_MIN;
uint32_t x853 = 87U;
static volatile int8_t x856 = INT8_MAX;
volatile uint64_t t191 = 102494785LLU;
uint8_t x860 = UINT8_MAX;
int8_t x861 = -14;
uint8_t x863 = UINT8_MAX;
uint64_t x866 = UINT64_MAX;
volatile uint16_t x871 = 407U;
uint32_t x872 = 947U;
volatile uint64_t t196 = 11250897572887978LLU;
volatile int8_t x878 = -1;
volatile uint32_t t197 = UINT32_MAX;
int8_t x883 = INT8_MAX;
int16_t x884 = -161;
int64_t x887 = -1LL;


void f0(void) {
    	volatile int16_t x3 = INT16_MIN;
	volatile int16_t x4 = 56;
	volatile int32_t t0 = 24;

    t0 = ((x1+(x2^x3))&x4);

    if (t0 != 56) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int8_t x6 = -15;
	uint16_t x7 = 5612U;
	uint8_t x8 = 34U;

    t1 = ((x5+(x6^x7))&x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint16_t x9 = 3U;
	int32_t x10 = 91069;
	static int16_t x11 = INT16_MIN;
	volatile int16_t x12 = INT16_MAX;

    t2 = ((x9+(x10^x11))&x12);

    if (t2 != 25536) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint32_t x13 = 558393431U;
	uint64_t x14 = UINT64_MAX;
	int32_t x15 = 65;
	uint64_t t3 = 148331LLU;

    t3 = ((x13+(x14^x15))&x16);

    if (t3 != 558393365LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = -1;
	int64_t x19 = 14872598067131062LL;
	uint16_t x20 = 5U;

    t4 = ((x17+(x18^x19))&x20);

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x22 = -1LL;
	volatile int64_t x23 = -1LL;
	uint64_t x24 = 23996935328206303LLU;
	static volatile uint64_t t5 = 37026580LLU;

    t5 = ((x21+(x22^x23))&x24);

    if (t5 != 23996935328206303LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int8_t x25 = -37;
	volatile uint64_t x26 = 113685709110LLU;
	int32_t x27 = -1;
	int8_t x28 = INT8_MIN;
	volatile uint64_t t6 = 14LLU;

    t6 = ((x25+(x26^x27))&x28);

    if (t6 != 18446743960023842432LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x29 = -2988920234508953LL;
	int8_t x30 = INT8_MAX;
	static volatile int64_t x32 = -124118864LL;

    t7 = ((x29+(x30^x31))&x32);

    if (t7 != -2988920220413776LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = -1;
	int64_t x34 = INT64_MIN;
	uint8_t x35 = UINT8_MAX;
	static int8_t x36 = -11;
	int64_t t8 = 260178533133639LL;

    t8 = ((x33+(x34^x35))&x36);

    if (t8 != -9223372036854775564LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x38 = 14U;
	int32_t x39 = -10190;
	uint32_t x40 = 2263750U;

    t9 = ((x37+(x38^x39))&x40);

    if (t9 != 2263168U) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = 198034128682204LL;
	uint16_t x43 = 2U;
	int64_t x44 = -1804092660LL;

    t10 = ((x41+(x42^x43))&x44);

    if (t10 != 198034771511304LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x47 = -1LL;
	int64_t t11 = -1187929LL;

    t11 = ((x45+(x46^x47))&x48);

    if (t11 != 65407LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x51 = INT8_MIN;
	int32_t x52 = INT32_MAX;
	int64_t t12 = -44569LL;

    t12 = ((x49+(x50^x51))&x52);

    if (t12 != 32894LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x53 = 0U;
	int8_t x54 = 20;
	int64_t x56 = -31045174517084838LL;
	volatile int64_t t13 = -1742LL;

    t13 = ((x53+(x54^x55))&x56);

    if (t13 != -31045174517084912LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = -1;
	int64_t x58 = INT64_MAX;
	volatile int64_t x59 = INT64_MIN;
	int8_t x60 = INT8_MAX;
	volatile int64_t t14 = -533435823416LL;

    t14 = ((x57+(x58^x59))&x60);

    if (t14 != 126LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x61 = INT8_MAX;
	int32_t x62 = 7444;
	int64_t x63 = INT64_MIN;
	int16_t x64 = INT16_MIN;
	int64_t t15 = INT64_MIN;

    t15 = ((x61+(x62^x63))&x64);

    if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x65 = -1LL;
	volatile uint32_t x66 = 1740471957U;
	volatile int64_t x67 = INT64_MIN;
	static volatile int8_t x68 = 0;
	volatile int64_t t16 = -37LL;

    t16 = ((x65+(x66^x67))&x68);

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x69 = 6U;
	volatile int8_t x70 = INT8_MAX;
	int8_t x71 = INT8_MIN;
	uint16_t x72 = 91U;
	static volatile int32_t t17 = 2881597;

    t17 = ((x69+(x70^x71))&x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = INT64_MAX;
	int32_t x74 = -1;
	int8_t x75 = INT8_MAX;
	int64_t x76 = INT64_MAX;
	volatile int64_t t18 = -173529LL;

    t18 = ((x73+(x74^x75))&x76);

    if (t18 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = INT32_MAX;
	uint16_t x78 = UINT16_MAX;
	static volatile int8_t x79 = INT8_MIN;
	volatile int16_t x80 = 13807;

    t19 = ((x77+(x78^x79))&x80);

    if (t19 != 110) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x85 = -4698039472135178LL;
	int16_t x87 = -16260;
	volatile uint8_t x88 = UINT8_MAX;

    t20 = ((x85+(x86^x87))&x88);

    if (t20 != 111LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x89 = -80335673801LL;
	int64_t x90 = -436257992053281LL;
	int8_t x91 = INT8_MIN;
	static int64_t x92 = INT64_MIN;
	int64_t t21 = 235LL;

    t21 = ((x89+(x90^x91))&x92);

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint8_t x93 = 0U;
	static int64_t x94 = -10792034092103202LL;
	int8_t x95 = 3;
	int8_t x96 = INT8_MIN;
	int64_t t22 = 37158LL;

    t22 = ((x93+(x94^x95))&x96);

    if (t22 != -10792034092103296LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x97 = 13U;
	volatile uint16_t x98 = UINT16_MAX;
	int64_t x99 = INT64_MAX;
	int64_t t23 = -23085488014426778LL;

    t23 = ((x97+(x98^x99))&x100);

    if (t23 != 9223372036854710285LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x101 = 0;
	int64_t x102 = INT64_MIN;
	static int16_t x103 = -39;
	int64_t x104 = INT64_MIN;
	static int64_t t24 = -3400788223183LL;

    t24 = ((x101+(x102^x103))&x104);

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x106 = UINT64_MAX;
	int16_t x107 = -502;
	static int64_t x108 = -20004518LL;

    t25 = ((x105+(x106^x107))&x108);

    if (t25 != 320LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint8_t x109 = 5U;
	int32_t x110 = INT32_MAX;
	volatile int64_t x111 = -1LL;
	static volatile int16_t x112 = INT16_MIN;
	static int64_t t26 = 250002561424408LL;

    t26 = ((x109+(x110^x111))&x112);

    if (t26 != -2147483648LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x113 = -1;
	static volatile int16_t x114 = -579;
	volatile uint8_t x115 = UINT8_MAX;
	int32_t x116 = -1;
	static volatile int32_t t27 = 391;

    t27 = ((x113+(x114^x115))&x116);

    if (t27 != -703) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x117 = INT8_MIN;
	uint32_t x119 = 2356628U;
	int16_t x120 = INT16_MIN;

    t28 = ((x117+(x118^x119))&x120);

    if (t28 != 2326528U) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x123 = 431050834935727LL;
	uint32_t x124 = 27214U;
	int64_t t29 = 1LL;

    t29 = ((x121+(x122^x123))&x124);

    if (t29 != 24586LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x125 = -29;
	static volatile int8_t x126 = INT8_MIN;
	int16_t x127 = INT16_MIN;
	int32_t x128 = INT32_MAX;
	int32_t t30 = -2316388;

    t30 = ((x125+(x126^x127))&x128);

    if (t30 != 32611) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x129 = 2U;
	static uint64_t x130 = UINT64_MAX;
	int8_t x131 = INT8_MIN;
	volatile int8_t x132 = 1;
	uint64_t t31 = 29828515496LLU;

    t31 = ((x129+(x130^x131))&x132);

    if (t31 != 1LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x133 = -2;
	int8_t x134 = INT8_MIN;
	int8_t x135 = INT8_MAX;
	int64_t x136 = -1LL;

    t32 = ((x133+(x134^x135))&x136);

    if (t32 != -3LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x139 = 255893LL;
	int64_t t33 = 357811295LL;

    t33 = ((x137+(x138^x139))&x140);

    if (t33 != -262144LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x141 = 7490269846132692LLU;
	volatile uint64_t x142 = UINT64_MAX;
	uint8_t x143 = 0U;
	int64_t x144 = INT64_MAX;
	volatile uint64_t t34 = 1237321LLU;

    t34 = ((x141+(x142^x143))&x144);

    if (t34 != 7490269846132691LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x145 = -62;
	int64_t x146 = INT64_MIN;
	static int16_t x147 = -6;
	int8_t x148 = INT8_MIN;

    t35 = ((x145+(x146^x147))&x148);

    if (t35 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x149 = -1;
	static volatile int64_t x151 = INT64_MAX;
	static int64_t t36 = 1593397378LL;

    t36 = ((x149+(x150^x151))&x152);

    if (t36 != 9223372036854775748LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x153 = -1;
	volatile uint16_t x155 = UINT16_MAX;
	int8_t x156 = -1;
	volatile int32_t t37 = -139264889;

    t37 = ((x153+(x154^x155))&x156);

    if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x157 = 291U;
	uint8_t x158 = 13U;
	static uint8_t x159 = 0U;
	uint64_t x160 = 67000154LLU;
	static uint64_t t38 = 7533685687434LLU;

    t38 = ((x157+(x158^x159))&x160);

    if (t38 != 272LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x161 = INT64_MIN;
	static int16_t x162 = 800;
	int16_t x164 = INT16_MAX;
	int64_t t39 = -1593323060960203103LL;

    t39 = ((x161+(x162^x163))&x164);

    if (t39 != 14425LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x169 = INT64_MIN;
	uint8_t x170 = 3U;
	int32_t x171 = INT32_MAX;
	int32_t x172 = INT32_MIN;
	volatile int64_t t40 = INT64_MIN;

    t40 = ((x169+(x170^x171))&x172);

    if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x173 = -1LL;
	int64_t x174 = INT64_MIN;
	uint16_t x175 = 1U;
	int64_t t41 = 10621069027LL;

    t41 = ((x173+(x174^x175))&x176);

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile int64_t x178 = -630LL;
	int8_t x179 = -1;
	int64_t x180 = 701864LL;
	int64_t t42 = 489411088568346007LL;

    t42 = ((x177+(x178^x179))&x180);

    if (t42 != 32LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x181 = INT16_MIN;
	static int32_t x182 = -15602250;
	uint64_t x183 = 23388832216142752LLU;
	int64_t x184 = INT64_MAX;
	volatile uint64_t t43 = 1533198792940LLU;

    t43 = ((x181+(x182^x183))&x184);

    if (t43 != 9199983204652891670LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int8_t x186 = INT8_MIN;
	uint16_t x187 = 12U;
	int8_t x188 = -1;

    t44 = ((x185+(x186^x187))&x188);

    if (t44 != -103) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x189 = INT8_MAX;
	volatile int8_t x190 = INT8_MIN;
	int64_t x191 = 2126534808778LL;
	int32_t x192 = INT32_MIN;
	static volatile int64_t t45 = 486119237255253LL;

    t45 = ((x189+(x190^x191))&x192);

    if (t45 != -2128156295168LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x193 = INT32_MIN;
	int8_t x194 = -36;
	static volatile int8_t x195 = -1;
	uint8_t x196 = 2U;
	int32_t t46 = -5984478;

    t46 = ((x193+(x194^x195))&x196);

    if (t46 != 2) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x197 = -1;
	static uint8_t x198 = UINT8_MAX;
	int32_t x199 = -1;
	volatile int64_t t47 = -9774103LL;

    t47 = ((x197+(x198^x199))&x200);

    if (t47 != 9223372036854775551LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint32_t x201 = 1U;
	int8_t x202 = -1;
	int64_t x203 = INT64_MAX;
	volatile int64_t t48 = 222653381193LL;

    t48 = ((x201+(x202^x203))&x204);

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static int8_t x205 = 0;
	static uint32_t x208 = 1364U;
	volatile int64_t t49 = -132LL;

    t49 = ((x205+(x206^x207))&x208);

    if (t49 != 4LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x209 = 1491U;
	int64_t x210 = -1LL;
	uint16_t x211 = 14389U;
	int64_t x212 = INT64_MIN;

    t50 = ((x209+(x210^x211))&x212);

    if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x213 = -7;
	int64_t x215 = INT64_MIN;

    t51 = ((x213+(x214^x215))&x216);

    if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x217 = UINT32_MAX;
	int16_t x218 = -1;
	int8_t x219 = 20;
	static int8_t x220 = -35;
	uint32_t t52 = 477884U;

    t52 = ((x217+(x218^x219))&x220);

    if (t52 != 4294967240U) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint64_t x223 = 377000113286014079LLU;
	int8_t x224 = INT8_MIN;

    t53 = ((x221+(x222^x223))&x224);

    if (t53 != 377000113282921728LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int32_t x225 = -507530;
	int8_t x227 = INT8_MIN;
	static int64_t x228 = INT64_MIN;
	static int64_t t54 = INT64_MIN;

    t54 = ((x225+(x226^x227))&x228);

    if (t54 != INT64_MIN) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x229 = -11;
	int16_t x230 = -8065;
	int16_t x231 = 117;
	static uint16_t x232 = UINT16_MAX;

    t55 = ((x229+(x230^x231))&x232);

    if (t55 != 57343) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint8_t x233 = 1U;
	volatile uint32_t x234 = UINT32_MAX;
	int8_t x236 = 3;
	uint32_t t56 = 243316720U;

    t56 = ((x233+(x234^x235))&x236);

    if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x237 = 1U;
	static volatile uint64_t x238 = 11209675012850LLU;
	int64_t x239 = INT64_MIN;
	static int32_t x240 = INT32_MAX;

    t57 = ((x237+(x238^x239))&x240);

    if (t57 != 1957853939LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint8_t x241 = UINT8_MAX;
	uint16_t x243 = 15596U;
	static volatile int64_t t58 = -20418LL;

    t58 = ((x241+(x242^x243))&x244);

    if (t58 != -32768LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x246 = INT32_MAX;
	static int16_t x248 = INT16_MIN;
	uint64_t t59 = 339779170604LLU;

    t59 = ((x245+(x246^x247))&x248);

    if (t59 != 2147418112LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x249 = 3073;
	int64_t x250 = INT64_MIN;
	int8_t x251 = 0;
	int64_t t60 = -4794230077556LL;

    t60 = ((x249+(x250^x251))&x252);

    if (t60 != -9223372036854772735LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x253 = 0U;
	int64_t x254 = -1LL;
	static volatile int32_t x256 = -1;
	volatile int64_t t61 = -198161064436126LL;

    t61 = ((x253+(x254^x255))&x256);

    if (t61 != -128LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x258 = UINT64_MAX;
	int16_t x259 = INT16_MIN;
	static int8_t x260 = 8;
	static uint64_t t62 = 77094868869713912LLU;

    t62 = ((x257+(x258^x259))&x260);

    if (t62 != 8LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x261 = UINT8_MAX;
	volatile uint16_t x262 = 5U;
	int16_t x263 = INT16_MIN;
	int8_t x264 = INT8_MAX;
	int32_t t63 = 24060289;

    t63 = ((x261+(x262^x263))&x264);

    if (t63 != 4) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x265 = INT8_MAX;
	int64_t x266 = 285273636237377LL;
	static uint32_t x267 = 7199U;
	int64_t x268 = INT64_MIN;
	int64_t t64 = 27809209616623LL;

    t64 = ((x265+(x266^x267))&x268);

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int8_t x273 = INT8_MIN;
	int16_t x274 = -241;
	volatile uint32_t x275 = UINT32_MAX;
	static volatile int32_t x276 = INT32_MAX;
	volatile uint32_t t65 = 0U;

    t65 = ((x273+(x274^x275))&x276);

    if (t65 != 112U) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x277 = INT8_MIN;
	static int64_t x279 = 201573LL;
	static volatile int32_t x280 = INT32_MIN;
	int64_t t66 = -26255703403030LL;

    t66 = ((x277+(x278^x279))&x280);

    if (t66 != -2147483648LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint16_t x281 = 4U;
	uint32_t x282 = UINT32_MAX;
	int16_t x283 = INT16_MIN;
	static volatile uint32_t t67 = 617U;

    t67 = ((x281+(x282^x283))&x284);

    if (t67 != 32771U) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x285 = INT8_MIN;
	int64_t x286 = -1LL;
	int32_t x287 = INT32_MIN;
	uint32_t x288 = UINT32_MAX;
	int64_t t68 = -3653083038355389LL;

    t68 = ((x285+(x286^x287))&x288);

    if (t68 != 2147483519LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x289 = INT16_MAX;
	static volatile uint16_t x290 = 1671U;
	int8_t x291 = INT8_MAX;
	int32_t t69 = 25360;

    t69 = ((x289+(x290^x291))&x292);

    if (t69 != 33795) { NG(); } else { ; }
	
}

void f70(void) {
    	static int8_t x293 = INT8_MAX;
	int8_t x295 = 0;
	int64_t x296 = INT64_MIN;

    t70 = ((x293+(x294^x295))&x296);

    if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x300 = -1LL;
	volatile int64_t t71 = 21LL;

    t71 = ((x297+(x298^x299))&x300);

    if (t71 != 9223372036854292848LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x301 = -23;
	static int8_t x302 = INT8_MIN;
	static uint8_t x303 = 32U;
	int8_t x304 = INT8_MIN;
	int32_t t72 = -55;

    t72 = ((x301+(x302^x303))&x304);

    if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint8_t x305 = 15U;
	int8_t x306 = -1;
	int16_t x307 = INT16_MAX;
	uint8_t x308 = UINT8_MAX;
	int32_t t73 = 128119;

    t73 = ((x305+(x306^x307))&x308);

    if (t73 != 15) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x310 = -243;
	int32_t x311 = 3504;
	volatile int16_t x312 = INT16_MIN;
	volatile int32_t t74 = -489;

    t74 = ((x309+(x310^x311))&x312);

    if (t74 != -32768) { NG(); } else { ; }
	
}

void f75(void) {
    	static int16_t x313 = INT16_MIN;
	int8_t x314 = INT8_MAX;
	static int64_t x315 = -1LL;
	int8_t x316 = 0;
	static int64_t t75 = 1281544LL;

    t75 = ((x313+(x314^x315))&x316);

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x317 = 0;
	static uint64_t x318 = 1406LLU;
	uint64_t x319 = UINT64_MAX;
	volatile uint64_t t76 = 20700LLU;

    t76 = ((x317+(x318^x319))&x320);

    if (t76 != 1LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x321 = INT16_MAX;
	int32_t x324 = INT32_MIN;
	int64_t t77 = 3354513487LL;

    t77 = ((x321+(x322^x323))&x324);

    if (t77 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile uint8_t x325 = 3U;
	volatile int8_t x327 = -1;
	static int64_t x328 = -1799970LL;
	volatile int64_t t78 = -58LL;

    t78 = ((x325+(x326^x327))&x328);

    if (t78 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static int64_t x329 = INT64_MIN;
	int32_t x332 = INT32_MAX;
	volatile int64_t t79 = -1245159286380LL;

    t79 = ((x329+(x330^x331))&x332);

    if (t79 != 219LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x334 = 7U;
	static int16_t x335 = INT16_MIN;
	int32_t x336 = -50;
	static int32_t t80 = 3431;

    t80 = ((x333+(x334^x335))&x336);

    if (t80 != -32762) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint32_t x337 = UINT32_MAX;
	uint64_t x338 = 8673618084252LLU;
	int16_t x339 = INT16_MAX;
	int8_t x340 = -1;
	volatile uint64_t t81 = 399707864946629LLU;

    t81 = ((x337+(x338^x339))&x340);

    if (t81 != 8677913050722LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int32_t x346 = -1;
	int16_t x347 = INT16_MIN;
	int8_t x348 = -1;

    t82 = ((x345+(x346^x347))&x348);

    if (t82 != 32639) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x350 = -42;
	int64_t x351 = INT64_MAX;

    t83 = ((x349+(x350^x351))&x352);

    if (t83 != 64106LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x357 = INT64_MIN;
	int64_t x358 = -1LL;
	volatile int64_t x359 = -1LL;
	volatile int8_t x360 = INT8_MAX;

    t84 = ((x357+(x358^x359))&x360);

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int8_t x361 = 1;
	int64_t x362 = 4285418362LL;
	static uint8_t x363 = UINT8_MAX;
	int64_t t85 = 179712637245LL;

    t85 = ((x361+(x362^x363))&x364);

    if (t85 != 19334LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x373 = -1;
	int64_t x374 = INT64_MIN;
	volatile int32_t x376 = INT32_MAX;
	static volatile int64_t t86 = -508LL;

    t86 = ((x373+(x374^x375))&x376);

    if (t86 != 2147483646LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x378 = -1265820084LL;
	uint16_t x380 = 701U;
	static volatile int64_t t87 = -299246624LL;

    t87 = ((x377+(x378^x379))&x380);

    if (t87 != 676LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint32_t x387 = 507U;
	uint32_t t88 = 17611001U;

    t88 = ((x385+(x386^x387))&x388);

    if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x389 = 192086889007044530LLU;
	int8_t x390 = INT8_MIN;
	int64_t x391 = -1LL;
	int64_t x392 = INT64_MAX;
	volatile uint64_t t89 = 1322933464427140615LLU;

    t89 = ((x389+(x390^x391))&x392);

    if (t89 != 192086889007044657LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x393 = INT32_MAX;
	int8_t x394 = INT8_MIN;
	volatile int8_t x395 = 3;

    t90 = ((x393+(x394^x395))&x396);

    if (t90 != 2147483522LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint64_t x398 = UINT64_MAX;
	uint32_t x399 = 14346U;
	int32_t x400 = INT32_MAX;
	uint64_t t91 = 241113LLU;

    t91 = ((x397+(x398^x399))&x400);

    if (t91 != 468209LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x402 = INT8_MIN;
	uint8_t x403 = 4U;

    t92 = ((x401+(x402^x403))&x404);

    if (t92 != 18446744073709518724LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x405 = -12;
	int64_t x406 = INT64_MAX;
	int64_t x408 = INT64_MIN;
	static int64_t t93 = 47331LL;

    t93 = ((x405+(x406^x407))&x408);

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x409 = INT8_MAX;
	int8_t x410 = INT8_MAX;
	int64_t x411 = -1LL;
	uint16_t x412 = 1U;

    t94 = ((x409+(x410^x411))&x412);

    if (t94 != 1LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x413 = -1;
	static int64_t x415 = INT64_MIN;
	static volatile int64_t t95 = -1LL;

    t95 = ((x413+(x414^x415))&x416);

    if (t95 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x417 = INT16_MAX;
	uint32_t x418 = 14262064U;
	volatile int32_t x419 = INT32_MIN;
	volatile int8_t x420 = -1;
	uint32_t t96 = 42U;

    t96 = ((x417+(x418^x419))&x420);

    if (t96 != 2161778479U) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x421 = -1;
	int16_t x422 = 1112;
	volatile int16_t x423 = INT16_MAX;
	uint32_t t97 = 45769U;

    t97 = ((x421+(x422^x423))&x424);

    if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x425 = 1975287U;
	uint32_t x428 = UINT32_MAX;
	uint32_t t98 = 27471255U;

    t98 = ((x425+(x426^x427))&x428);

    if (t98 != 2007927U) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x429 = UINT64_MAX;
	static int8_t x430 = INT8_MIN;
	static int32_t x431 = INT32_MIN;
	uint16_t x432 = 0U;

    t99 = ((x429+(x430^x431))&x432);

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x433 = 48999224LL;
	int8_t x434 = INT8_MIN;
	int8_t x435 = -2;
	volatile int64_t t100 = -175346615794LL;

    t100 = ((x433+(x434^x435))&x436);

    if (t100 != 48990370LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint16_t x437 = 643U;
	int32_t x438 = 159;
	int8_t x439 = INT8_MIN;
	volatile int8_t x440 = INT8_MIN;
	static volatile int32_t t101 = 3078;

    t101 = ((x437+(x438^x439))&x440);

    if (t101 != 384) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint32_t x442 = 3U;
	uint8_t x443 = UINT8_MAX;
	uint64_t t102 = 3063930077040536684LLU;

    t102 = ((x441+(x442^x443))&x444);

    if (t102 != 0LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x449 = 31U;
	volatile uint64_t x450 = 3729883250763660LLU;
	volatile int16_t x451 = INT16_MAX;
	int32_t x452 = INT32_MIN;
	volatile uint64_t t103 = 241493652314722LLU;

    t103 = ((x449+(x450^x451))&x452);

    if (t103 != 3729882743832576LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x453 = INT8_MAX;
	static volatile uint64_t x454 = UINT64_MAX;
	volatile int16_t x455 = 91;
	volatile uint32_t x456 = 304704467U;
	uint64_t t104 = 1060378691539LLU;

    t104 = ((x453+(x454^x455))&x456);

    if (t104 != 3LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x457 = 30U;
	int64_t x458 = 503742492614059LL;
	volatile int32_t x459 = -1;
	volatile int64_t t105 = 12099215668LL;

    t105 = ((x457+(x458^x459))&x460);

    if (t105 != -503742492614030LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int64_t x461 = INT64_MIN;
	int64_t x462 = -1LL;
	int64_t x463 = -3380605462160142LL;
	int32_t x464 = INT32_MIN;
	volatile int64_t t106 = -68236259LL;

    t106 = ((x461+(x462^x463))&x464);

    if (t106 != -9219991431588872192LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x465 = -1;
	int16_t x466 = 2;
	int64_t x467 = 35LL;
	int8_t x468 = INT8_MIN;

    t107 = ((x465+(x466^x467))&x468);

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x469 = -8262;
	static int16_t x470 = INT16_MIN;
	volatile uint16_t x471 = UINT16_MAX;
	volatile int8_t x472 = INT8_MIN;

    t108 = ((x469+(x470^x471))&x472);

    if (t108 != -41088) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x475 = INT32_MAX;
	static int64_t x476 = -1LL;
	int64_t t109 = -1625788582441217LL;

    t109 = ((x473+(x474^x475))&x476);

    if (t109 != -9223372034707292535LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x477 = -1;
	static int8_t x478 = -4;
	static int8_t x480 = INT8_MAX;
	int32_t t110 = -7568;

    t110 = ((x477+(x478^x479))&x480);

    if (t110 != 2) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x481 = INT8_MAX;
	volatile uint8_t x483 = 98U;
	uint64_t x484 = 253841209960158633LLU;
	uint64_t t111 = 228743627LLU;

    t111 = ((x481+(x482^x483))&x484);

    if (t111 != 161LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x485 = UINT8_MAX;
	static uint16_t x487 = UINT16_MAX;
	int32_t x488 = -1;
	uint64_t t112 = 25705169446LLU;

    t112 = ((x485+(x486^x487))&x488);

    if (t112 != 259435LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x490 = -1;
	volatile int64_t x491 = -89543282LL;
	static uint32_t x492 = 10U;
	volatile uint64_t t113 = 405678007LLU;

    t113 = ((x489+(x490^x491))&x492);

    if (t113 != 8LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint8_t x493 = 10U;
	int64_t x494 = INT64_MAX;
	volatile uint16_t x495 = 572U;
	static uint64_t x496 = UINT64_MAX;
	uint64_t t114 = 20206150332785LLU;

    t114 = ((x493+(x494^x495))&x496);

    if (t114 != 9223372036854775245LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile uint8_t x501 = UINT8_MAX;
	int16_t x502 = -1;
	uint8_t x503 = 116U;
	uint32_t x504 = 456U;

    t115 = ((x501+(x502^x503))&x504);

    if (t115 != 136U) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x509 = INT16_MAX;
	volatile int32_t x510 = INT32_MIN;
	int16_t x511 = 1;
	volatile uint16_t x512 = 8U;
	int32_t t116 = -3150;

    t116 = ((x509+(x510^x511))&x512);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x513 = UINT64_MAX;
	int16_t x514 = -123;
	int16_t x515 = INT16_MIN;
	uint64_t t117 = 0LLU;

    t117 = ((x513+(x514^x515))&x516);

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x517 = 4411078U;
	static int32_t x519 = INT32_MIN;
	static volatile uint64_t x520 = 337807715LLU;
	volatile uint64_t t118 = 3303580LLU;

    t118 = ((x517+(x518^x519))&x520);

    if (t118 != 133185LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x521 = INT64_MIN;
	uint64_t x522 = 1937LLU;
	int64_t x524 = -1LL;
	uint64_t t119 = 2940382943602164338LLU;

    t119 = ((x521+(x522^x523))&x524);

    if (t119 != 9223372036854773777LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x525 = -1;
	static int32_t x526 = 5348748;
	int8_t x527 = 0;
	uint32_t x528 = 0U;
	uint32_t t120 = 2368428U;

    t120 = ((x525+(x526^x527))&x528);

    if (t120 != 0U) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile uint8_t x530 = 9U;
	uint64_t x531 = 473501665227067LLU;
	int16_t x532 = -1;
	uint64_t t121 = 337240204LLU;

    t121 = ((x529+(x530^x531))&x532);

    if (t121 != 18223587569478151760LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x533 = -1;
	volatile int16_t x534 = -1;
	volatile int64_t x535 = -1LL;
	int32_t x536 = INT32_MAX;
	int64_t t122 = 1059396989299LL;

    t122 = ((x533+(x534^x535))&x536);

    if (t122 != 2147483647LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint16_t x537 = 9859U;
	int8_t x538 = INT8_MIN;
	int16_t x539 = INT16_MIN;
	static volatile int16_t x540 = 8633;

    t123 = ((x537+(x538^x539))&x540);

    if (t123 != 8193) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x542 = UINT16_MAX;
	int16_t x543 = -1;
	static volatile int8_t x544 = -1;
	static volatile int32_t t124 = -78;

    t124 = ((x541+(x542^x543))&x544);

    if (t124 != -1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint64_t x550 = 248278822024469710LLU;
	int32_t x551 = INT32_MIN;
	int16_t x552 = INT16_MIN;
	volatile uint64_t t125 = 43778892357999LLU;

    t125 = ((x549+(x550^x551))&x552);

    if (t125 != 18198465251148890112LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int16_t x553 = INT16_MIN;
	int8_t x554 = 0;
	static uint64_t x555 = 66669570704001LLU;
	uint64_t x556 = UINT64_MAX;
	uint64_t t126 = 0LLU;

    t126 = ((x553+(x554^x555))&x556);

    if (t126 != 66669570671233LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x557 = INT16_MIN;
	int16_t x558 = -1;
	uint8_t x559 = 101U;
	int16_t x560 = INT16_MIN;
	volatile int32_t t127 = -10056;

    t127 = ((x557+(x558^x559))&x560);

    if (t127 != -65536) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint16_t x561 = UINT16_MAX;
	uint64_t x562 = 552103356816557365LLU;
	uint64_t x563 = 4857577438486766595LLU;
	int8_t x564 = INT8_MIN;
	static uint64_t t128 = 22LLU;

    t128 = ((x561+(x562^x563))&x564);

    if (t128 != 4954210151917658368LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x565 = INT64_MAX;
	static uint64_t x566 = 1015735934477505464LLU;
	int16_t x567 = INT16_MAX;
	int64_t x568 = INT64_MIN;

    t129 = ((x565+(x566^x567))&x568);

    if (t129 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x569 = 46103U;
	volatile int16_t x570 = 0;
	volatile int32_t x571 = 0;
	uint64_t x572 = 4594850762475101876LLU;
	uint64_t t130 = 0LLU;

    t130 = ((x569+(x570^x571))&x572);

    if (t130 != 37908LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x574 = -1;
	int64_t x575 = 759966386LL;
	volatile int8_t x576 = INT8_MIN;
	volatile int64_t t131 = 1190727724LL;

    t131 = ((x573+(x574^x575))&x576);

    if (t131 != -759900928LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x578 = 1;
	int64_t x579 = -1122848674LL;
	static uint32_t x580 = 287636293U;
	volatile int64_t t132 = -1755LL;

    t132 = ((x577+(x578^x579))&x580);

    if (t132 != 285257796LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x589 = INT32_MAX;
	int8_t x590 = 1;
	int32_t x591 = -1;
	uint32_t x592 = 2492U;
	static uint32_t t133 = 21752057U;

    t133 = ((x589+(x590^x591))&x592);

    if (t133 != 2492U) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x594 = INT32_MIN;
	int64_t x595 = INT64_MIN;
	volatile int8_t x596 = -14;

    t134 = ((x593+(x594^x595))&x596);

    if (t134 != 9223372034707357682LL) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t x598 = INT32_MIN;
	uint32_t x599 = 2U;
	volatile int8_t x600 = -1;
	volatile uint32_t t135 = 85516624U;

    t135 = ((x597+(x598^x599))&x600);

    if (t135 != 2147483660U) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x601 = INT32_MIN;
	int8_t x602 = 0;
	static uint64_t x603 = 1803924LLU;
	uint64_t t136 = 2443790199931045LLU;

    t136 = ((x601+(x602^x603))&x604);

    if (t136 != 2149287572LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint8_t x605 = 40U;
	volatile int32_t x606 = INT32_MAX;
	uint8_t x607 = UINT8_MAX;
	uint64_t x608 = 8427241767LLU;
	static uint64_t t137 = 134416849005LLU;

    t137 = ((x605+(x606^x607))&x608);

    if (t137 != 1984790816LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	static int64_t x609 = INT64_MIN;
	int64_t x610 = -1LL;
	static int64_t x611 = -991205676511762LL;
	int64_t x612 = INT64_MAX;

    t138 = ((x609+(x610^x611))&x612);

    if (t138 != 991205676511761LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x613 = INT8_MIN;
	volatile int64_t x614 = INT64_MIN;
	int32_t x615 = -1159151;
	int64_t x616 = INT64_MAX;
	static volatile int64_t t139 = -68851589LL;

    t139 = ((x613+(x614^x615))&x616);

    if (t139 != 9223372036853616529LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x617 = -1;
	int8_t x618 = INT8_MIN;
	volatile uint16_t x619 = 180U;

    t140 = ((x617+(x618^x619))&x620);

    if (t140 != INT64_MIN) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile int8_t x621 = -60;
	uint16_t x622 = 1846U;
	int16_t x623 = -232;
	uint16_t x624 = 1473U;
	static int32_t t141 = -17175;

    t141 = ((x621+(x622^x623))&x624);

    if (t141 != 1472) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x627 = 0LLU;
	uint8_t x628 = 1U;
	uint64_t t142 = 6811761LLU;

    t142 = ((x625+(x626^x627))&x628);

    if (t142 != 1LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x630 = 5;
	static int32_t x631 = INT32_MAX;
	int8_t x632 = 1;
	static int64_t t143 = -14261LL;

    t143 = ((x629+(x630^x631))&x632);

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x633 = INT16_MAX;
	uint32_t x634 = 1U;
	uint32_t x635 = 134059U;
	static int64_t x636 = INT64_MAX;
	static int64_t t144 = -5720556657131542LL;

    t144 = ((x633+(x634^x635))&x636);

    if (t144 != 166825LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x639 = 9;
	uint16_t x640 = 2038U;

    t145 = ((x637+(x638^x639))&x640);

    if (t145 != 2038) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint32_t x645 = UINT32_MAX;
	uint16_t x647 = 22164U;
	int64_t x648 = INT64_MIN;

    t146 = ((x645+(x646^x647))&x648);

    if (t146 != INT64_MIN) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x653 = 0;
	volatile int16_t x656 = -1;
	volatile int64_t t147 = 231LL;

    t147 = ((x653+(x654^x655))&x656);

    if (t147 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x657 = 0;
	uint32_t x658 = 5177368U;
	int8_t x659 = INT8_MIN;
	static uint64_t x660 = 5LLU;

    t148 = ((x657+(x658^x659))&x660);

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x661 = -1;
	uint64_t x664 = 113169708LLU;

    t149 = ((x661+(x662^x663))&x664);

    if (t149 != 113169708LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x665 = -1268779LL;
	volatile int32_t x667 = -1;
	uint16_t x668 = UINT16_MAX;
	volatile int64_t t150 = 0LL;

    t150 = ((x665+(x666^x667))&x668);

    if (t150 != 41941LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x669 = -55;
	volatile uint64_t x671 = 5610904LLU;
	static uint64_t t151 = 732434874LLU;

    t151 = ((x669+(x670^x671))&x672);

    if (t151 != 5603979LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x674 = 8631;
	uint32_t x676 = 113734327U;

    t152 = ((x673+(x674^x675))&x676);

    if (t152 != 104861840U) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x679 = -1LL;
	volatile int32_t x680 = INT32_MIN;
	volatile int64_t t153 = -121205226957179481LL;

    t153 = ((x677+(x678^x679))&x680);

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x681 = INT16_MIN;
	volatile uint16_t x682 = 3811U;
	uint64_t x683 = UINT64_MAX;
	uint32_t x684 = UINT32_MAX;
	static volatile uint64_t t154 = 545446174489LLU;

    t154 = ((x681+(x682^x683))&x684);

    if (t154 != 4294930716LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x685 = 1087U;
	int16_t x687 = -1;
	uint64_t x688 = UINT64_MAX;
	volatile uint64_t t155 = 6086LLU;

    t155 = ((x685+(x686^x687))&x688);

    if (t155 != 4294966614LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x690 = INT64_MIN;
	uint64_t x691 = UINT64_MAX;
	uint8_t x692 = 5U;
	static volatile uint64_t t156 = 2183382090890LLU;

    t156 = ((x689+(x690^x691))&x692);

    if (t156 != 1LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x693 = INT32_MAX;
	volatile uint8_t x694 = 3U;
	volatile uint64_t x695 = UINT64_MAX;
	static int32_t x696 = INT32_MIN;

    t157 = ((x693+(x694^x695))&x696);

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x698 = 5229;
	uint8_t x699 = 2U;

    t158 = ((x697+(x698^x699))&x700);

    if (t158 != 6656) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint64_t x705 = 12126895273307LLU;
	int16_t x706 = INT16_MIN;
	int32_t x707 = INT32_MIN;
	uint64_t x708 = 341862332345LLU;
	uint64_t t159 = 55637029472LLU;

    t159 = ((x705+(x706^x707))&x708);

    if (t159 != 34359751961LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x709 = INT16_MIN;
	uint32_t x710 = 347496U;
	static int64_t x711 = INT64_MIN;
	int16_t x712 = -1;
	volatile int64_t t160 = -1002168906438LL;

    t160 = ((x709+(x710^x711))&x712);

    if (t160 != -9223372036854461080LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x713 = 194U;
	int64_t x714 = 470LL;
	int64_t x715 = INT64_MIN;
	volatile uint16_t x716 = UINT16_MAX;

    t161 = ((x713+(x714^x715))&x716);

    if (t161 != 664LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x719 = -1;
	static int8_t x720 = INT8_MIN;
	volatile int32_t t162 = 20714393;

    t162 = ((x717+(x718^x719))&x720);

    if (t162 != 15872) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int8_t x725 = -1;
	uint32_t x726 = 29081082U;
	uint8_t x728 = 0U;

    t163 = ((x725+(x726^x727))&x728);

    if (t163 != 0U) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x729 = -1779738;
	static uint32_t x730 = UINT32_MAX;
	static volatile int8_t x732 = INT8_MIN;

    t164 = ((x729+(x730^x731))&x732);

    if (t164 != 2145703808U) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x734 = UINT16_MAX;
	int8_t x735 = INT8_MAX;
	uint64_t t165 = 271720785249201970LLU;

    t165 = ((x733+(x734^x735))&x736);

    if (t165 != 98175LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint32_t x737 = 157U;
	int8_t x738 = 1;
	static int8_t x739 = INT8_MIN;
	int16_t x740 = 165;

    t166 = ((x737+(x738^x739))&x740);

    if (t166 != 4U) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x745 = INT16_MAX;
	int8_t x746 = -2;
	int8_t x748 = -1;

    t167 = ((x745+(x746^x747))&x748);

    if (t167 != 32733) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x749 = 0U;
	int8_t x750 = -1;
	uint64_t x751 = 11174207LLU;
	static uint64_t t168 = 180169LLU;

    t168 = ((x749+(x750^x751))&x752);

    if (t168 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x753 = INT16_MIN;
	static int16_t x756 = INT16_MIN;
	volatile int32_t t169 = -49155;

    t169 = ((x753+(x754^x755))&x756);

    if (t169 != -65536) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int32_t x757 = 3;
	static uint16_t x758 = 3645U;
	uint16_t x759 = 7U;
	int16_t x760 = INT16_MIN;
	volatile int32_t t170 = -17049;

    t170 = ((x757+(x758^x759))&x760);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x761 = 14977LL;
	uint64_t x762 = 52580591225LLU;
	static volatile uint8_t x763 = 22U;
	int32_t x764 = -57;
	volatile uint64_t t171 = 3092LLU;

    t171 = ((x761+(x762^x763))&x764);

    if (t171 != 52580606144LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x773 = INT64_MAX;
	int64_t x774 = -105754280557LL;
	uint8_t x776 = UINT8_MAX;
	int64_t t172 = 15250490LL;

    t172 = ((x773+(x774^x775))&x776);

    if (t172 != 153LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x779 = UINT32_MAX;
	volatile int64_t t173 = 573197739LL;

    t173 = ((x777+(x778^x779))&x780);

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x783 = 108U;
	volatile int8_t x784 = -1;

    t174 = ((x781+(x782^x783))&x784);

    if (t174 != 2147483568) { NG(); } else { ; }
	
}

void f175(void) {
    	static int64_t x785 = -106042927664445LL;
	uint16_t x787 = 0U;
	static volatile uint16_t x788 = 2005U;
	static int64_t t175 = -55LL;

    t175 = ((x785+(x786^x787))&x788);

    if (t175 != 960LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile int64_t x790 = -21813414920911656LL;
	static uint16_t x791 = 142U;
	static int64_t t176 = INT64_MIN;

    t176 = ((x789+(x790^x791))&x792);

    if (t176 != INT64_MIN) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int64_t x794 = 9801LL;
	volatile int64_t x795 = -1LL;
	volatile uint8_t x796 = 2U;
	static int64_t t177 = -3467529719076122LL;

    t177 = ((x793+(x794^x795))&x796);

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x797 = INT32_MAX;
	volatile uint64_t t178 = 288LLU;

    t178 = ((x797+(x798^x799))&x800);

    if (t178 != 2147483633LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x801 = INT16_MAX;
	static int32_t x803 = -1;
	int8_t x804 = -3;
	volatile uint32_t t179 = 1710U;

    t179 = ((x801+(x802^x803))&x804);

    if (t179 != 4294875653U) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x805 = 1593LL;
	static int64_t x806 = -228170455LL;
	static int64_t x807 = -1LL;
	int8_t x808 = -1;

    t180 = ((x805+(x806^x807))&x808);

    if (t180 != 228172047LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x809 = INT32_MIN;
	int16_t x812 = -1;

    t181 = ((x809+(x810^x811))&x812);

    if (t181 != -86562804259661456LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x813 = INT16_MIN;
	static int8_t x816 = INT8_MIN;
	volatile uint32_t t182 = 6088U;

    t182 = ((x813+(x814^x815))&x816);

    if (t182 != 4294967168U) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x817 = 28;
	int64_t x818 = -153502199LL;
	volatile int16_t x819 = INT16_MIN;
	int64_t t183 = -105LL;

    t183 = ((x817+(x818^x819))&x820);

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint64_t x821 = 3454805773217983LLU;
	int32_t x822 = -1;
	volatile uint64_t x823 = UINT64_MAX;
	volatile uint64_t t184 = 817011567907LLU;

    t184 = ((x821+(x822^x823))&x824);

    if (t184 != 3454805120909312LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x825 = 5LL;
	int16_t x826 = INT16_MIN;
	int32_t x827 = INT32_MIN;
	int16_t x828 = INT16_MIN;
	int64_t t185 = -18256432LL;

    t185 = ((x825+(x826^x827))&x828);

    if (t185 != 2147450880LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int8_t x833 = INT8_MIN;
	int32_t x834 = INT32_MIN;
	uint32_t x835 = 1662U;

    t186 = ((x833+(x834^x835))&x836);

    if (t186 != 2147485182LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint8_t x837 = 84U;
	int8_t x839 = 2;
	int32_t t187 = -8195;

    t187 = ((x837+(x838^x839))&x840);

    if (t187 != -248110080) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x841 = INT16_MIN;
	volatile int64_t x842 = 159LL;
	int8_t x843 = INT8_MAX;
	int32_t x844 = INT32_MIN;
	static volatile int64_t t188 = 22291954512135LL;

    t188 = ((x841+(x842^x843))&x844);

    if (t188 != -2147483648LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x845 = 359LLU;
	int32_t x846 = 42865;
	int8_t x847 = INT8_MAX;
	int32_t x848 = INT32_MIN;
	volatile uint64_t t189 = 28981LLU;

    t189 = ((x845+(x846^x847))&x848);

    if (t189 != 0LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x849 = -136;
	static volatile int16_t x850 = INT16_MAX;
	static int8_t x851 = INT8_MIN;
	static int64_t t190 = INT64_MIN;

    t190 = ((x849+(x850^x851))&x852);

    if (t190 != INT64_MIN) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x854 = -26205LL;
	uint64_t x855 = 132LLU;

    t191 = ((x853+(x854^x855))&x856);

    if (t191 != 126LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int16_t x857 = INT16_MIN;
	int16_t x858 = 15552;
	volatile int8_t x859 = -47;
	static volatile int32_t t192 = 23;

    t192 = ((x857+(x858^x859))&x860);

    if (t192 != 17) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x862 = -1;
	static uint64_t x864 = 70869353LLU;
	volatile uint64_t t193 = 134897962382217LLU;

    t193 = ((x861+(x862^x863))&x864);

    if (t193 != 70869088LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x865 = INT32_MIN;
	static volatile int32_t x867 = INT32_MAX;
	int8_t x868 = -2;
	uint64_t t194 = 10LLU;

    t194 = ((x865+(x866^x867))&x868);

    if (t194 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int32_t x869 = INT32_MAX;
	int64_t x870 = -58136440190303934LL;
	int64_t t195 = -1173610093LL;

    t195 = ((x869+(x870^x871))&x872);

    if (t195 != 144LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x873 = 0;
	int16_t x874 = -1;
	static int8_t x875 = INT8_MIN;
	uint64_t x876 = 57263400327892822LLU;

    t196 = ((x873+(x874^x875))&x876);

    if (t196 != 86LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x877 = -1;
	volatile uint32_t x879 = UINT32_MAX;
	int8_t x880 = -1;

    t197 = ((x877+(x878^x879))&x880);

    if (t197 != UINT32_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile uint8_t x881 = 6U;
	uint16_t x882 = UINT16_MAX;
	volatile int32_t t198 = 3965;

    t198 = ((x881+(x882^x883))&x884);

    if (t198 != 65286) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint16_t x885 = 68U;
	volatile int8_t x886 = INT8_MAX;
	int16_t x888 = -1;
	int64_t t199 = 2728201847064832855LL;

    t199 = ((x885+(x886^x887))&x888);

    if (t199 != -60LL) { NG(); } else { ; }
	
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

