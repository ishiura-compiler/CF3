
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

uint32_t x1 = 24637U;
volatile int64_t x7 = INT64_MIN;
int64_t x11 = -1LL;
int8_t x17 = -8;
static volatile int64_t t5 = -142655641259689484LL;
int32_t t6 = -19905763;
uint8_t x34 = 30U;
static volatile uint32_t x36 = UINT32_MAX;
uint8_t x41 = 25U;
volatile int32_t t9 = 1411;
volatile int64_t t12 = -58250LL;
int64_t x62 = INT64_MIN;
volatile uint64_t t14 = 5243078216661LLU;
int8_t x72 = INT8_MIN;
volatile int16_t x74 = INT16_MIN;
volatile int32_t x77 = -84;
static volatile uint32_t t20 = 6730295U;
int64_t x95 = INT64_MIN;
uint8_t x96 = UINT8_MAX;
volatile int64_t t22 = 1382LL;
int64_t x100 = -4265LL;
int64_t t23 = -361019709066340LL;
volatile int8_t x103 = INT8_MIN;
static int16_t x107 = INT16_MIN;
static int32_t x108 = -1;
int64_t x110 = 62510901524LL;
volatile uint8_t x114 = 0U;
uint8_t x121 = 10U;
volatile int16_t x125 = 150;
static volatile int32_t t29 = 116958;
volatile int8_t x136 = INT8_MAX;
volatile int64_t x137 = -1LL;
volatile int16_t x138 = -2631;
volatile uint8_t x141 = UINT8_MAX;
uint8_t x147 = 35U;
static volatile uint64_t t35 = 105458061552LLU;
int64_t x155 = INT64_MAX;
int16_t x156 = INT16_MAX;
int64_t x158 = -2200954342416935240LL;
int32_t x162 = -1665;
int64_t t38 = 31680333994671LL;
volatile int16_t x183 = INT16_MAX;
volatile uint64_t x184 = UINT64_MAX;
uint64_t t41 = 88510300LLU;
uint64_t x187 = 1014628438506LLU;
uint64_t t42 = 77287LLU;
static int8_t x193 = 42;
volatile int64_t t44 = -68708465989LL;
volatile int16_t x198 = INT16_MIN;
static uint64_t x199 = 281LLU;
volatile uint64_t t45 = 16237LLU;
int16_t x213 = 2337;
volatile int64_t x217 = INT64_MIN;
uint64_t x219 = 158078819984628166LLU;
volatile int16_t x231 = INT16_MIN;
int16_t x239 = -362;
int16_t x240 = 2;
int32_t x248 = -13242733;
uint64_t x253 = UINT64_MAX;
int8_t x271 = INT8_MAX;
int32_t x272 = INT32_MAX;
int64_t x275 = -1875LL;
int64_t x278 = INT64_MIN;
static volatile int64_t t62 = 1279LL;
uint16_t x281 = UINT16_MAX;
volatile int8_t x283 = -32;
int64_t x284 = -1LL;
volatile int64_t x290 = 2007560LL;
volatile int64_t t65 = -4LL;
int16_t x302 = INT16_MAX;
int8_t x305 = -1;
static uint32_t x308 = 1603094773U;
int16_t x310 = INT16_MAX;
int64_t x312 = INT64_MAX;
uint64_t x336 = UINT64_MAX;
uint64_t t74 = 514284LLU;
int64_t x340 = INT64_MIN;
static uint64_t x341 = UINT64_MAX;
uint64_t x342 = 8309696717LLU;
int32_t x344 = 2;
static volatile uint64_t t77 = 44269006761856LLU;
int8_t x350 = -1;
int64_t x357 = -1LL;
int16_t x366 = INT16_MIN;
int64_t t82 = -139940LL;
uint64_t t83 = 1LLU;
int16_t x379 = INT16_MIN;
int64_t x386 = INT64_MIN;
int32_t x389 = -1;
volatile int64_t t87 = 0LL;
int64_t t88 = 1646509826LL;
uint32_t x397 = 88U;
int8_t x406 = 59;
volatile int16_t x408 = 74;
static uint8_t x413 = UINT8_MAX;
int32_t t93 = -16405741;
int8_t x431 = INT8_MAX;
uint64_t x432 = 13768926680LLU;
int16_t x434 = INT16_MAX;
uint8_t x435 = 66U;
static int8_t x436 = -1;
uint64_t t98 = 38718761153816LLU;
int8_t x446 = INT8_MIN;
int8_t x449 = 1;
volatile int8_t x459 = -1;
uint32_t x464 = 23305U;
static int32_t x477 = -1;
int64_t x480 = INT64_MIN;
volatile int64_t t106 = 8582124LL;
int32_t x483 = -1719663;
int32_t x484 = INT32_MAX;
int32_t t107 = 64200419;
volatile int64_t x495 = INT64_MIN;
int32_t x496 = -27;
int8_t x501 = -1;
int8_t x506 = 26;
int32_t x510 = INT32_MIN;
int64_t t113 = 275163046276270LL;
volatile int32_t x514 = -1;
static int16_t x520 = -1;
volatile int8_t x521 = 3;
static int64_t x524 = 573413513937110217LL;
static volatile int64_t t117 = -12316838848443LL;
static volatile int64_t x530 = -1LL;
volatile int16_t x536 = -119;
static uint16_t x539 = 1U;
static uint32_t x549 = UINT32_MAX;
int16_t x552 = 19;
int32_t x554 = 236938688;
volatile int64_t t124 = 2679131399495262187LL;
volatile int32_t x559 = -1;
static uint64_t x562 = 355896950833947819LLU;
volatile int64_t x563 = INT64_MAX;
uint8_t x564 = 3U;
volatile uint64_t t126 = 67424106076013871LLU;
static int32_t x580 = INT32_MIN;
uint64_t t130 = 46081LLU;
static uint32_t x588 = UINT32_MAX;
int64_t t131 = 3LL;
int8_t x594 = -1;
int16_t x604 = INT16_MAX;
int32_t t135 = 2291331;
int64_t x607 = 3124LL;
static uint64_t t136 = 29060819231357405LLU;
volatile int64_t x612 = INT64_MIN;
volatile uint64_t x614 = 6740417LLU;
int16_t x619 = -7;
volatile int16_t x620 = 218;
int32_t t139 = -130126302;
uint16_t x622 = 6U;
static int32_t x624 = 1449603;
volatile int64_t t140 = -807LL;
static int8_t x625 = -1;
int32_t t142 = -3329593;
int64_t x640 = INT64_MAX;
uint8_t x642 = 31U;
int32_t x643 = -1;
static uint64_t t145 = 26239896958630LLU;
int16_t x657 = -2933;
uint64_t x658 = 33943415855894494LLU;
uint64_t t147 = 845050285635LLU;
uint8_t x663 = 8U;
int8_t x666 = -1;
int8_t x669 = INT8_MIN;
int8_t x670 = INT8_MIN;
int8_t x682 = INT8_MIN;
int16_t x694 = INT16_MIN;
uint16_t x695 = 7062U;
int32_t x696 = 1965352;
volatile int64_t t156 = -4593546803779803LL;
volatile int64_t t158 = -66523894LL;
static volatile int8_t x714 = INT8_MIN;
static int32_t x716 = INT32_MIN;
volatile uint64_t t160 = 726742162659527362LLU;
static int16_t x718 = INT16_MAX;
uint64_t x720 = 38053121949LLU;
volatile int64_t t162 = -151865LL;
int64_t x728 = INT64_MAX;
volatile int8_t x729 = -1;
int64_t t165 = -54744162LL;
int32_t x745 = -1;
int16_t x763 = 1;
int32_t t169 = -34761677;
int8_t x767 = -1;
volatile int64_t t171 = 6746LL;
uint32_t x774 = UINT32_MAX;
int16_t x779 = -8564;
uint64_t x780 = UINT64_MAX;
volatile int16_t x785 = INT16_MIN;
int32_t x797 = INT32_MIN;
volatile int64_t t178 = -5LL;
volatile uint32_t x816 = 403488U;
int16_t x826 = 52;
volatile int32_t t181 = 232;
uint16_t x834 = UINT16_MAX;
static volatile uint32_t t183 = 5295U;
uint64_t x837 = 700508324211014701LLU;
static int8_t x842 = INT8_MIN;
static int64_t x856 = INT64_MAX;
uint64_t t187 = 2092LLU;
volatile int8_t x860 = INT8_MAX;
static int16_t x861 = -1;
uint64_t x864 = UINT64_MAX;
int16_t x871 = INT16_MIN;
int64_t x875 = -2943648588LL;
uint16_t x878 = 12222U;
uint32_t x880 = 34U;
int16_t x883 = INT16_MIN;
int64_t t194 = -10610144990874140LL;
volatile int8_t x887 = -56;
int32_t t195 = -22350;
uint16_t x889 = 2236U;
static volatile int16_t x906 = -3;
int8_t x908 = 7;


void f0(void) {
    	uint64_t x2 = 445558583359082LLU;
	uint8_t x3 = UINT8_MAX;
	volatile uint64_t x4 = UINT64_MAX;
	uint64_t t0 = 718LLU;

    t0 = (x1-(x2%(x3^x4)));

    if (t0 != 18446298515126217171LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MIN;
	volatile int64_t x6 = -593965786LL;
	int32_t x8 = INT32_MIN;
	int64_t t1 = 38603704701894765LL;

    t1 = (x5-(x6%(x7^x8)));

    if (t1 != -9223372036260810022LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = 3484256U;
	static uint64_t x10 = 4122LLU;
	volatile int8_t x12 = INT8_MAX;
	volatile uint64_t t2 = 123LLU;

    t2 = (x9-(x10%(x11^x12)));

    if (t2 != 3480134LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint16_t x13 = 9U;
	int8_t x14 = INT8_MAX;
	uint64_t x15 = 34777670270093587LLU;
	int64_t x16 = INT64_MIN;
	volatile uint64_t t3 = 1207571906897LLU;

    t3 = (x13-(x14%(x15^x16)));

    if (t3 != 18446744073709551498LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint64_t x18 = 20273365642314744LLU;
	uint64_t x19 = 2017913LLU;
	int64_t x20 = INT64_MAX;
	uint64_t t4 = 463835403LLU;

    t4 = (x17-(x18%(x19^x20)));

    if (t4 != 18426470708067236864LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x25 = 6U;
	int64_t x26 = INT64_MIN;
	static int64_t x27 = -171877987089462352LL;
	volatile uint16_t x28 = 84U;

    t5 = (x25-(x26%(x27^x28)));

    if (t5 != 113838721113273914LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x29 = -422;
	int8_t x30 = 4;
	uint16_t x31 = 127U;
	int32_t x32 = 2836985;

    t6 = (x29-(x30%(x31^x32)));

    if (t6 != -426) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x33 = 0;
	int32_t x35 = INT32_MIN;
	static volatile uint32_t t7 = 12276020U;

    t7 = (x33-(x34%(x35^x36)));

    if (t7 != 4294967266U) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x37 = -1;
	uint8_t x38 = 0U;
	int16_t x39 = -3;
	static int16_t x40 = INT16_MAX;
	volatile int32_t t8 = -4;

    t8 = (x37-(x38%(x39^x40)));

    if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x42 = 1;
	volatile int32_t x43 = INT32_MIN;
	int16_t x44 = INT16_MAX;

    t9 = (x41-(x42%(x43^x44)));

    if (t9 != 24) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x45 = INT16_MIN;
	static volatile uint8_t x46 = 8U;
	volatile int64_t x47 = -452562533032LL;
	int16_t x48 = -1;
	static volatile int64_t t10 = -1242050245LL;

    t10 = (x45-(x46%(x47^x48)));

    if (t10 != -32776LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x49 = INT64_MIN;
	int8_t x50 = -1;
	uint32_t x51 = UINT32_MAX;
	volatile int8_t x52 = -16;
	volatile int64_t t11 = INT64_MIN;

    t11 = (x49-(x50%(x51^x52)));

    if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x53 = 0;
	int64_t x54 = INT64_MAX;
	volatile int8_t x55 = INT8_MIN;
	static uint8_t x56 = UINT8_MAX;

    t12 = (x53-(x54%(x55^x56)));

    if (t12 != -127LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint32_t x57 = UINT32_MAX;
	volatile int8_t x58 = INT8_MIN;
	int16_t x59 = INT16_MIN;
	int8_t x60 = INT8_MIN;
	volatile uint32_t t13 = 123590U;

    t13 = (x57-(x58%(x59^x60)));

    if (t13 != 127U) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x61 = UINT64_MAX;
	static int8_t x63 = 1;
	int16_t x64 = 53;

    t14 = (x61-(x62%(x63^x64)));

    if (t14 != 7LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x65 = 4U;
	uint8_t x66 = 19U;
	int32_t x67 = -1;
	static volatile uint8_t x68 = UINT8_MAX;
	int32_t t15 = 16381397;

    t15 = (x65-(x66%(x67^x68)));

    if (t15 != -15) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x69 = INT64_MAX;
	static volatile uint32_t x70 = 1400U;
	int8_t x71 = INT8_MAX;
	volatile int64_t t16 = -179373826269LL;

    t16 = (x69-(x70%(x71^x72)));

    if (t16 != 9223372036854774407LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x73 = -1948775;
	static int8_t x75 = 9;
	int16_t x76 = -8;
	volatile int32_t t17 = 1;

    t17 = (x73-(x74%(x75^x76)));

    if (t17 != -1948767) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x78 = -1LL;
	static uint32_t x79 = 3095U;
	static int16_t x80 = INT16_MAX;
	volatile int64_t t18 = 10499701591214LL;

    t18 = (x77-(x78%(x79^x80)));

    if (t18 != -83LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x81 = INT8_MAX;
	int32_t x82 = -10672;
	volatile int16_t x83 = -1;
	int8_t x84 = 13;
	static volatile int32_t t19 = 30325778;

    t19 = (x81-(x82%(x83^x84)));

    if (t19 != 131) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x85 = -1;
	volatile uint32_t x86 = UINT32_MAX;
	int16_t x87 = INT16_MIN;
	uint16_t x88 = UINT16_MAX;

    t20 = (x85-(x86%(x87^x88)));

    if (t20 != 4294934527U) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x89 = INT64_MAX;
	uint8_t x90 = 1U;
	int32_t x91 = INT32_MIN;
	int16_t x92 = INT16_MIN;
	int64_t t21 = -1263343269LL;

    t21 = (x89-(x90%(x91^x92)));

    if (t21 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int8_t x93 = -9;
	uint8_t x94 = 57U;

    t22 = (x93-(x94%(x95^x96)));

    if (t22 != -66LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x97 = UINT32_MAX;
	static uint32_t x98 = UINT32_MAX;
	static int16_t x99 = INT16_MIN;

    t23 = (x97-(x98%(x99^x100)));

    if (t23 != 4294946052LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x101 = INT8_MIN;
	static volatile int16_t x102 = -1;
	int32_t x104 = 24720;
	volatile int32_t t24 = -857429956;

    t24 = (x101-(x102%(x103^x104)));

    if (t24 != -127) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x105 = UINT8_MAX;
	uint64_t x106 = UINT64_MAX;
	static volatile uint64_t t25 = 1174986163556LLU;

    t25 = (x105-(x106%(x107^x108)));

    if (t25 != 240LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x109 = INT16_MAX;
	int64_t x111 = -1LL;
	volatile int16_t x112 = INT16_MIN;
	int64_t t26 = 17273175886083LL;

    t26 = (x109-(x110%(x111^x112)));

    if (t26 != 15056LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x113 = INT16_MAX;
	int64_t x115 = INT64_MAX;
	volatile int8_t x116 = 55;
	int64_t t27 = -12LL;

    t27 = (x113-(x114%(x115^x116)));

    if (t27 != 32767LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x122 = INT16_MIN;
	volatile uint16_t x123 = 18705U;
	static uint8_t x124 = 57U;
	int32_t t28 = 0;

    t28 = (x121-(x122%(x123^x124)));

    if (t28 != 14050) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x126 = INT32_MIN;
	int32_t x127 = -362531;
	int8_t x128 = -1;

    t29 = (x125-(x126%(x127^x128)));

    if (t29 != 218608) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x129 = -1;
	uint16_t x130 = 7572U;
	uint64_t x131 = UINT64_MAX;
	static volatile int8_t x132 = INT8_MIN;
	volatile uint64_t t30 = 245LLU;

    t30 = (x129-(x130%(x131^x132)));

    if (t30 != 18446744073709551536LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x133 = INT64_MIN;
	int16_t x134 = INT16_MIN;
	int16_t x135 = -1;
	int64_t t31 = INT64_MIN;

    t31 = (x133-(x134%(x135^x136)));

    if (t31 != INT64_MIN) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x139 = INT16_MIN;
	int16_t x140 = -50;
	int64_t t32 = -208174378389557960LL;

    t32 = (x137-(x138%(x139^x140)));

    if (t32 != 2630LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x142 = INT64_MIN;
	volatile int32_t x143 = INT32_MIN;
	volatile uint32_t x144 = 320071788U;
	static volatile int64_t t33 = -10365LL;

    t33 = (x141-(x142%(x143^x144)));

    if (t33 != 216476003LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x145 = INT64_MAX;
	int8_t x146 = INT8_MAX;
	volatile uint32_t x148 = UINT32_MAX;
	volatile int64_t t34 = 3LL;

    t34 = (x145-(x146%(x147^x148)));

    if (t34 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint32_t x149 = 23671848U;
	volatile int32_t x150 = 21177654;
	uint64_t x151 = 1152943874781LLU;
	int64_t x152 = -26428687LL;

    t35 = (x149-(x150%(x151^x152)));

    if (t35 != 2494194LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x153 = 20;
	uint32_t x154 = 224822U;
	volatile int64_t t36 = 32791307LL;

    t36 = (x153-(x154%(x155^x156)));

    if (t36 != -224802LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static int32_t x157 = -1;
	int64_t x159 = 1717529669439LL;
	static uint32_t x160 = UINT32_MAX;
	volatile int64_t t37 = 2238LL;

    t37 = (x157-(x158%(x159^x160)));

    if (t37 != 482728359751LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x161 = -7;
	int64_t x163 = -2LL;
	static volatile int32_t x164 = -1;

    t38 = (x161-(x162%(x163^x164)));

    if (t38 != -7LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x169 = INT8_MAX;
	static int64_t x170 = INT64_MIN;
	uint32_t x171 = UINT32_MAX;
	int16_t x172 = INT16_MIN;
	static int64_t t39 = 77LL;

    t39 = (x169-(x170%(x171^x172)));

    if (t39 != 135LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x177 = 4152;
	int16_t x178 = INT16_MAX;
	uint8_t x179 = 0U;
	uint64_t x180 = 64671LLU;
	uint64_t t40 = 407LLU;

    t40 = (x177-(x178%(x179^x180)));

    if (t40 != 18446744073709523001LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint32_t x181 = 319U;
	static int16_t x182 = -1;

    t41 = (x181-(x182%(x183^x184)));

    if (t41 != 18446744073709519168LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x185 = INT16_MIN;
	int32_t x186 = INT32_MAX;
	int8_t x188 = INT8_MAX;

    t42 = (x185-(x186%(x187^x188)));

    if (t42 != 18446744071562035201LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x189 = -2;
	int8_t x190 = -27;
	static int32_t x191 = INT32_MAX;
	static int64_t x192 = 47188910LL;
	int64_t t43 = -4851315638LL;

    t43 = (x189-(x190%(x191^x192)));

    if (t43 != 25LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x194 = -1;
	int64_t x195 = INT64_MAX;
	int8_t x196 = INT8_MIN;

    t44 = (x193-(x194%(x195^x196)));

    if (t44 != 43LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint64_t x197 = 7288LLU;
	static int32_t x200 = INT32_MAX;

    t45 = (x197-(x198%(x199^x200)));

    if (t45 != 18446744073709273576LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x201 = INT8_MIN;
	volatile uint32_t x202 = 0U;
	uint8_t x203 = 34U;
	volatile uint64_t x204 = 410751LLU;
	uint64_t t46 = 3515LLU;

    t46 = (x201-(x202%(x203^x204)));

    if (t46 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x209 = INT8_MIN;
	static volatile int32_t x210 = -106;
	int8_t x211 = INT8_MIN;
	int32_t x212 = INT32_MIN;
	volatile int32_t t47 = -1;

    t47 = (x209-(x210%(x211^x212)));

    if (t47 != -22) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int64_t x214 = -277LL;
	int16_t x215 = 18;
	volatile int8_t x216 = INT8_MIN;
	static volatile int64_t t48 = 14LL;

    t48 = (x213-(x214%(x215^x216)));

    if (t48 != 2394LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x218 = INT64_MAX;
	volatile uint64_t x220 = 29441689LLU;
	uint64_t t49 = 121LLU;

    t49 = (x217-(x218%(x219^x220)));

    if (t49 != 9168571557896088455LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x221 = 17320U;
	uint8_t x222 = UINT8_MAX;
	int16_t x223 = -18;
	int64_t x224 = INT64_MIN;
	static volatile int64_t t50 = 10LL;

    t50 = (x221-(x222%(x223^x224)));

    if (t50 != 17065LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x229 = 1751339325690843905LLU;
	int16_t x230 = -1;
	uint64_t x232 = 15442749051LLU;
	volatile uint64_t t51 = 927LLU;

    t51 = (x229-(x230%(x231^x232)));

    if (t51 != 1751339310248081789LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x233 = UINT64_MAX;
	int8_t x234 = INT8_MIN;
	int64_t x235 = INT64_MIN;
	static int16_t x236 = -46;
	volatile uint64_t t52 = 23LLU;

    t52 = (x233-(x234%(x235^x236)));

    if (t52 != 127LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x237 = UINT64_MAX;
	static int64_t x238 = INT64_MIN;
	volatile uint64_t t53 = 75851LLU;

    t53 = (x237-(x238%(x239^x240)));

    if (t53 != 7LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x241 = 51069885395LL;
	int16_t x242 = -1;
	uint32_t x243 = UINT32_MAX;
	volatile int8_t x244 = INT8_MAX;
	static int64_t t54 = -1060775632LL;

    t54 = (x241-(x242%(x243^x244)));

    if (t54 != 51069885268LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x245 = -18;
	int8_t x246 = -1;
	uint8_t x247 = UINT8_MAX;
	int32_t t55 = 536759;

    t55 = (x245-(x246%(x247^x248)));

    if (t55 != -17) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x249 = 12041695;
	static int32_t x250 = INT32_MIN;
	uint8_t x251 = UINT8_MAX;
	static int16_t x252 = INT16_MIN;
	volatile int32_t t56 = -1232;

    t56 = (x249-(x250%(x251^x252)));

    if (t56 != 12074206) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint64_t x254 = 11170368024LLU;
	int8_t x255 = INT8_MAX;
	static volatile uint16_t x256 = 4U;
	uint64_t t57 = 3651LLU;

    t57 = (x253-(x254%(x255^x256)));

    if (t57 != 18446744073709551591LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x261 = INT16_MIN;
	uint16_t x262 = UINT16_MAX;
	int64_t x263 = INT64_MIN;
	int16_t x264 = 290;
	static int64_t t58 = 31497984623LL;

    t58 = (x261-(x262%(x263^x264)));

    if (t58 != -98303LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x265 = 3;
	uint16_t x266 = 2U;
	int32_t x267 = INT32_MIN;
	int16_t x268 = INT16_MAX;
	int32_t t59 = 3737774;

    t59 = (x265-(x266%(x267^x268)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x269 = 21;
	uint8_t x270 = 123U;
	int32_t t60 = 345401820;

    t60 = (x269-(x270%(x271^x272)));

    if (t60 != -102) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x273 = -1;
	int8_t x274 = INT8_MIN;
	int8_t x276 = INT8_MAX;
	volatile int64_t t61 = -276809LL;

    t61 = (x273-(x274%(x275^x276)));

    if (t61 != 127LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int8_t x277 = 1;
	int8_t x279 = -1;
	uint8_t x280 = 7U;

    t62 = (x277-(x278%(x279^x280)));

    if (t62 != 1LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x282 = -1;
	int64_t t63 = 1LL;

    t63 = (x281-(x282%(x283^x284)));

    if (t63 != 65536LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x285 = 101U;
	static volatile int8_t x286 = -9;
	int8_t x287 = INT8_MIN;
	uint8_t x288 = UINT8_MAX;
	static int32_t t64 = 33;

    t64 = (x285-(x286%(x287^x288)));

    if (t64 != 110) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x289 = INT8_MIN;
	int16_t x291 = 16;
	int16_t x292 = INT16_MIN;

    t65 = (x289-(x290%(x291^x292)));

    if (t65 != -9816LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x293 = 16105449LLU;
	volatile uint64_t x294 = 1772414487LLU;
	int32_t x295 = 848594169;
	volatile int64_t x296 = -1LL;
	static volatile uint64_t t66 = 122284562LLU;

    t66 = (x293-(x294%(x295^x296)));

    if (t66 != 18446744071953242578LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x301 = INT8_MIN;
	uint32_t x303 = 5677U;
	int32_t x304 = -2;
	volatile uint32_t t67 = 173750956U;

    t67 = (x301-(x302%(x303^x304)));

    if (t67 != 4294934401U) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x306 = UINT32_MAX;
	int16_t x307 = INT16_MAX;
	static volatile uint32_t t68 = 860755U;

    t68 = (x305-(x306%(x307^x308)));

    if (t68 != 3206180372U) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x309 = -1;
	static int64_t x311 = INT64_MIN;
	volatile int64_t t69 = 328LL;

    t69 = (x309-(x310%(x311^x312)));

    if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint64_t x313 = UINT64_MAX;
	int32_t x314 = INT32_MAX;
	int16_t x315 = 7290;
	volatile int32_t x316 = -1;
	uint64_t t70 = 6LLU;

    t70 = (x313-(x314%(x315^x316)));

    if (t70 != 18446744073709544526LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint64_t x317 = UINT64_MAX;
	volatile uint8_t x318 = 14U;
	volatile int16_t x319 = INT16_MAX;
	int8_t x320 = 2;
	volatile uint64_t t71 = 458167097093172LLU;

    t71 = (x317-(x318%(x319^x320)));

    if (t71 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x325 = 22;
	int32_t x326 = -1;
	uint16_t x327 = UINT16_MAX;
	static uint64_t x328 = 417573853526600219LLU;
	static volatile uint64_t t72 = 229LLU;

    t72 = (x325-(x326%(x327^x328)));

    if (t72 != 18373249555169461063LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x329 = INT32_MIN;
	int32_t x330 = INT32_MIN;
	int16_t x331 = 204;
	int32_t x332 = 32;
	volatile int32_t t73 = -5726911;

    t73 = (x329-(x330%(x331^x332)));

    if (t73 != -2147483416) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x333 = -309112646165LL;
	uint32_t x334 = 58157U;
	volatile uint16_t x335 = UINT16_MAX;

    t74 = (x333-(x334%(x335^x336)));

    if (t74 != 18446743764596847294LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x337 = INT16_MIN;
	uint8_t x338 = 46U;
	uint16_t x339 = 5108U;
	static int64_t t75 = -28276475916900528LL;

    t75 = (x337-(x338%(x339^x340)));

    if (t75 != -32814LL) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint16_t x343 = 97U;
	volatile uint64_t t76 = 1142LLU;

    t76 = (x341-(x342%(x343^x344)));

    if (t76 != 18446744073709551568LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x345 = UINT8_MAX;
	uint64_t x346 = UINT64_MAX;
	volatile int8_t x347 = 14;
	int64_t x348 = -1LL;

    t77 = (x345-(x346%(x347^x348)));

    if (t77 != 241LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x349 = INT16_MIN;
	uint64_t x351 = 8400633216LLU;
	uint8_t x352 = 0U;
	volatile uint64_t t78 = 123LLU;

    t78 = (x349-(x350%(x351^x352)));

    if (t78 != 18446744067055616897LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x358 = INT8_MIN;
	int32_t x359 = -1;
	uint32_t x360 = 7278U;
	int64_t t79 = -1LL;

    t79 = (x357-(x358%(x359^x360)));

    if (t79 != -7152LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint16_t x361 = 54U;
	int8_t x362 = INT8_MIN;
	volatile int32_t x363 = -1;
	int8_t x364 = INT8_MAX;
	static int32_t t80 = -253;

    t80 = (x361-(x362%(x363^x364)));

    if (t80 != 54) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint32_t x365 = 190346482U;
	volatile uint8_t x367 = UINT8_MAX;
	int8_t x368 = 31;
	static uint32_t t81 = 8U;

    t81 = (x365-(x366%(x367^x368)));

    if (t81 != 190346546U) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x369 = -1;
	uint8_t x370 = 2U;
	int16_t x371 = INT16_MIN;
	int64_t x372 = -243849547LL;

    t82 = (x369-(x370%(x371^x372)));

    if (t82 != -3LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x373 = 5421U;
	uint64_t x374 = 24682885581220LLU;
	static int8_t x375 = 25;
	uint16_t x376 = UINT16_MAX;

    t83 = (x373-(x374%(x375^x376)));

    if (t83 != 441LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x377 = -8410;
	uint8_t x378 = 19U;
	int16_t x380 = INT16_MAX;
	int32_t t84 = -15;

    t84 = (x377-(x378%(x379^x380)));

    if (t84 != -8410) { NG(); } else { ; }
	
}

void f85(void) {
    	static int32_t x381 = -1;
	volatile int64_t x382 = INT64_MIN;
	int64_t x383 = -15LL;
	int64_t x384 = INT64_MAX;
	int64_t t85 = -1376LL;

    t85 = (x381-(x382%(x383^x384)));

    if (t85 != 13LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x385 = 27892;
	static uint8_t x387 = UINT8_MAX;
	int8_t x388 = INT8_MAX;
	static volatile int64_t t86 = -3279574283400LL;

    t86 = (x385-(x386%(x387^x388)));

    if (t86 != 27892LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int64_t x390 = -371845137166048LL;
	int64_t x391 = -755960010LL;
	int64_t x392 = 1LL;

    t87 = (x389-(x390%(x391^x392)));

    if (t87 != 504099091LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x393 = INT8_MIN;
	int8_t x394 = INT8_MAX;
	int8_t x395 = 1;
	int64_t x396 = 7227206360LL;

    t88 = (x393-(x394%(x395^x396)));

    if (t88 != -255LL) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint8_t x398 = 65U;
	volatile int64_t x399 = INT64_MAX;
	volatile int16_t x400 = -426;
	volatile int64_t t89 = -7605LL;

    t89 = (x397-(x398%(x399^x400)));

    if (t89 != 23LL) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x405 = INT16_MAX;
	static uint64_t x407 = 1006489LLU;
	uint64_t t90 = 234717885001LLU;

    t90 = (x405-(x406%(x407^x408)));

    if (t90 != 32708LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x409 = INT64_MIN;
	int32_t x410 = -221;
	static int8_t x411 = INT8_MIN;
	int32_t x412 = INT32_MIN;
	int64_t t91 = 2LL;

    t91 = (x409-(x410%(x411^x412)));

    if (t91 != -9223372036854775587LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x414 = 1874990;
	volatile int64_t x415 = -1LL;
	int8_t x416 = INT8_MIN;
	int64_t t92 = 67904301798150708LL;

    t92 = (x413-(x414%(x415^x416)));

    if (t92 != 166LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x417 = 16U;
	static volatile int32_t x418 = INT32_MIN;
	volatile int32_t x419 = INT32_MAX;
	static volatile int32_t x420 = -2947944;

    t93 = (x417-(x418%(x419^x420)));

    if (t93 != 2947959) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x421 = 697560827U;
	static int8_t x422 = INT8_MIN;
	static uint32_t x423 = UINT32_MAX;
	int8_t x424 = INT8_MIN;
	uint32_t t94 = 40556U;

    t94 = (x421-(x422%(x423^x424)));

    if (t94 != 697560812U) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x429 = -1;
	volatile int8_t x430 = -1;
	volatile uint64_t t95 = 232746859LLU;

    t95 = (x429-(x430%(x431^x432)));

    if (t95 != 18446744065294824322LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x433 = -1;
	int32_t t96 = 146;

    t96 = (x433-(x434%(x435^x436)));

    if (t96 != -5) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint32_t x437 = 265418616U;
	int16_t x438 = -589;
	volatile int8_t x439 = INT8_MIN;
	uint8_t x440 = 1U;
	uint32_t t97 = 408384853U;

    t97 = (x437-(x438%(x439^x440)));

    if (t97 != 265418697U) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x441 = -2020;
	int16_t x442 = -1;
	int16_t x443 = INT16_MAX;
	uint64_t x444 = 66029395112LLU;

    t98 = (x441-(x442%(x443^x444)));

    if (t98 != 18446744069259570114LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x445 = UINT32_MAX;
	int64_t x447 = INT64_MIN;
	static int32_t x448 = INT32_MIN;
	static volatile int64_t t99 = 7982367456LL;

    t99 = (x445-(x446%(x447^x448)));

    if (t99 != 4294967423LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint32_t x450 = 10608939U;
	volatile uint64_t x451 = UINT64_MAX;
	int32_t x452 = INT32_MAX;
	volatile uint64_t t100 = 44026610068LLU;

    t100 = (x449-(x450%(x451^x452)));

    if (t100 != 18446744073698942678LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x457 = INT8_MIN;
	int16_t x458 = -763;
	int8_t x460 = 1;
	volatile int32_t t101 = 727;

    t101 = (x457-(x458%(x459^x460)));

    if (t101 != -127) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint16_t x461 = UINT16_MAX;
	static int16_t x462 = 23;
	static volatile int16_t x463 = 65;
	static uint32_t t102 = 1665625U;

    t102 = (x461-(x462%(x463^x464)));

    if (t102 != 65512U) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x465 = INT8_MIN;
	int16_t x466 = INT16_MAX;
	static int8_t x467 = INT8_MIN;
	static int64_t x468 = -105530420LL;
	int64_t t103 = -2456834131LL;

    t103 = (x465-(x466%(x467^x468)));

    if (t103 != -32895LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint8_t x469 = UINT8_MAX;
	volatile int64_t x470 = 1572545009999511LL;
	static volatile uint64_t x471 = 8611LLU;
	static uint64_t x472 = 589LLU;
	volatile uint64_t t104 = 161954161107789210LLU;

    t104 = (x469-(x470%(x471^x472)));

    if (t104 != 18446744073709548460LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x473 = -26;
	uint32_t x474 = 743877347U;
	int8_t x475 = INT8_MIN;
	uint32_t x476 = 94U;
	volatile uint32_t t105 = 4U;

    t105 = (x473-(x474%(x475^x476)));

    if (t105 != 3551089923U) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x478 = -33;
	int16_t x479 = INT16_MAX;

    t106 = (x477-(x478%(x479^x480)));

    if (t106 != 32LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x481 = INT32_MIN;
	volatile int32_t x482 = INT32_MIN;

    t107 = (x481-(x482%(x483^x484)));

    if (t107 != -2145763986) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x485 = 2;
	int64_t x486 = INT64_MIN;
	int32_t x487 = -1;
	uint16_t x488 = 37U;
	volatile int64_t t108 = -154103587LL;

    t108 = (x485-(x486%(x487^x488)));

    if (t108 != 20LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint8_t x489 = UINT8_MAX;
	int32_t x490 = 1041012;
	volatile uint32_t x491 = 59480783U;
	int64_t x492 = INT64_MIN;
	volatile int64_t t109 = 13723603663904LL;

    t109 = (x489-(x490%(x491^x492)));

    if (t109 != -1040757LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x493 = 3476678U;
	uint8_t x494 = UINT8_MAX;
	volatile int64_t t110 = 31286LL;

    t110 = (x493-(x494%(x495^x496)));

    if (t110 != 3476423LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint64_t x502 = UINT64_MAX;
	uint32_t x503 = UINT32_MAX;
	volatile uint16_t x504 = UINT16_MAX;
	volatile uint64_t t111 = 1409135627LLU;

    t111 = (x501-(x502%(x503^x504)));

    if (t111 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x505 = INT32_MAX;
	int32_t x507 = INT32_MIN;
	volatile uint16_t x508 = UINT16_MAX;
	volatile int32_t t112 = -4;

    t112 = (x505-(x506%(x507^x508)));

    if (t112 != 2147483621) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x509 = INT32_MIN;
	int32_t x511 = INT32_MIN;
	int64_t x512 = -1LL;

    t113 = (x509-(x510%(x511^x512)));

    if (t113 != -2147483647LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x513 = INT32_MIN;
	int8_t x515 = 10;
	int8_t x516 = INT8_MIN;
	volatile int32_t t114 = 27;

    t114 = (x513-(x514%(x515^x516)));

    if (t114 != -2147483647) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x517 = 3U;
	uint8_t x518 = 1U;
	uint16_t x519 = 24U;
	volatile int32_t t115 = -213566;

    t115 = (x517-(x518%(x519^x520)));

    if (t115 != 2) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile uint64_t x522 = UINT64_MAX;
	uint16_t x523 = 943U;
	uint64_t t116 = 221801LLU;

    t116 = (x521-(x522%(x523^x524)));

    if (t116 != 18349232445987548356LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x525 = INT64_MAX;
	int16_t x526 = 2;
	int32_t x527 = 62953;
	static int64_t x528 = INT64_MAX;

    t117 = (x525-(x526%(x527^x528)));

    if (t117 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x529 = 0;
	int16_t x531 = INT16_MIN;
	volatile int64_t x532 = -4073769749582LL;
	volatile int64_t t118 = -1713580983128LL;

    t118 = (x529-(x530%(x531^x532)));

    if (t118 != 1LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x533 = -1;
	int64_t x534 = -140537149048989LL;
	int64_t x535 = INT64_MIN;
	static volatile int64_t t119 = 896757824210504641LL;

    t119 = (x533-(x534%(x535^x536)));

    if (t119 != 140537149048988LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x537 = INT8_MAX;
	int32_t x538 = INT32_MIN;
	static int32_t x540 = INT32_MAX;
	volatile int32_t t120 = -914;

    t120 = (x537-(x538%(x539^x540)));

    if (t120 != 129) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint16_t x541 = UINT16_MAX;
	volatile uint64_t x542 = 2307761815497071178LLU;
	volatile uint32_t x543 = UINT32_MAX;
	uint32_t x544 = 249815U;
	uint64_t t121 = 19637279409203LLU;

    t121 = (x541-(x542%(x543^x544)));

    if (t121 != 18446744070679820013LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint32_t x545 = 3425234U;
	volatile int64_t x546 = INT64_MIN;
	uint8_t x547 = 7U;
	int16_t x548 = -1;
	int64_t t122 = 26947072238LL;

    t122 = (x545-(x546%(x547^x548)));

    if (t122 != 3425234LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x550 = 1U;
	volatile int32_t x551 = -141868218;
	uint32_t t123 = 3693U;

    t123 = (x549-(x550%(x551^x552)));

    if (t123 != 4294967294U) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x553 = 82LL;
	volatile uint16_t x555 = 247U;
	volatile int8_t x556 = 0;

    t124 = (x553-(x554%(x555^x556)));

    if (t124 != -151LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x557 = 1;
	uint16_t x558 = UINT16_MAX;
	uint32_t x560 = 62840U;
	uint32_t t125 = 0U;

    t125 = (x557-(x558%(x559^x560)));

    if (t125 != 4294901762U) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x561 = INT32_MAX;

    t126 = (x561-(x562%(x563^x564)));

    if (t126 != 18090847125023087444LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int8_t x565 = -19;
	int32_t x566 = INT32_MIN;
	static int32_t x567 = INT32_MAX;
	int8_t x568 = INT8_MIN;
	volatile int32_t t127 = -194801;

    t127 = (x565-(x566%(x567^x568)));

    if (t127 != 108) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x573 = 14;
	uint8_t x574 = 53U;
	volatile uint16_t x575 = 6172U;
	static uint8_t x576 = 49U;
	static volatile int32_t t128 = -49164;

    t128 = (x573-(x574%(x575^x576)));

    if (t128 != -39) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x577 = 1;
	static int16_t x578 = INT16_MAX;
	uint32_t x579 = UINT32_MAX;
	volatile uint32_t t129 = 132101U;

    t129 = (x577-(x578%(x579^x580)));

    if (t129 != 4294934530U) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x581 = -1;
	int16_t x582 = -1;
	uint64_t x583 = UINT64_MAX;
	int64_t x584 = -821827853444529200LL;

    t130 = (x581-(x582%(x583^x584)));

    if (t130 != 18080212775779642378LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x585 = -1;
	int64_t x586 = -1LL;
	static int32_t x587 = 15686;

    t131 = (x585-(x586%(x587^x588)));

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x589 = INT8_MIN;
	int32_t x590 = INT32_MIN;
	int32_t x591 = 295263;
	uint8_t x592 = UINT8_MAX;
	volatile int32_t t132 = -1128552;

    t132 = (x589-(x590%(x591^x592)));

    if (t132 != 153632) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x593 = -2227;
	int8_t x595 = INT8_MAX;
	volatile uint8_t x596 = 42U;
	volatile int32_t t133 = -252938;

    t133 = (x593-(x594%(x595^x596)));

    if (t133 != -2226) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x597 = UINT8_MAX;
	uint8_t x598 = 5U;
	uint64_t x599 = 3LLU;
	volatile int32_t x600 = -187282;
	static uint64_t t134 = 2839828777920LLU;

    t134 = (x597-(x598%(x599^x600)));

    if (t134 != 250LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x601 = 327336;
	static uint8_t x602 = 93U;
	volatile int32_t x603 = INT32_MAX;

    t135 = (x601-(x602%(x603^x604)));

    if (t135 != 327243) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x605 = 292LL;
	volatile int32_t x606 = -1;
	static uint64_t x608 = UINT64_MAX;

    t136 = (x605-(x606%(x607^x608)));

    if (t136 != 18446744073709548784LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static int64_t x609 = INT64_MIN;
	int16_t x610 = -1;
	static uint8_t x611 = 2U;
	volatile int64_t t137 = -1044239LL;

    t137 = (x609-(x610%(x611^x612)));

    if (t137 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint8_t x613 = UINT8_MAX;
	uint16_t x615 = 23U;
	uint32_t x616 = UINT32_MAX;
	volatile uint64_t t138 = 2576252767364598984LLU;

    t138 = (x613-(x614%(x615^x616)));

    if (t138 != 18446744073702811454LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x617 = 4U;
	volatile int32_t x618 = INT32_MIN;

    t139 = (x617-(x618%(x619^x620)));

    if (t139 != 132) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x621 = -1;
	static int64_t x623 = 15492345962092556LL;

    t140 = (x621-(x622%(x623^x624)));

    if (t140 != -7LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x626 = INT8_MIN;
	int32_t x627 = -1;
	int64_t x628 = -9784LL;
	volatile int64_t t141 = 1759494289640LL;

    t141 = (x625-(x626%(x627^x628)));

    if (t141 != 127LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int16_t x629 = INT16_MIN;
	volatile int32_t x630 = INT32_MIN;
	uint16_t x631 = 7U;
	int16_t x632 = 1302;

    t142 = (x629-(x630%(x631^x632)));

    if (t142 != -32227) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x637 = -1;
	int32_t x638 = INT32_MAX;
	uint32_t x639 = 107063517U;
	volatile int64_t t143 = 94271181LL;

    t143 = (x637-(x638%(x639^x640)));

    if (t143 != -2147483648LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x641 = UINT8_MAX;
	volatile int16_t x644 = -232;
	int32_t t144 = -4997336;

    t144 = (x641-(x642%(x643^x644)));

    if (t144 != 224) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint16_t x649 = 16U;
	static int32_t x650 = 1892009;
	volatile uint64_t x651 = UINT64_MAX;
	int16_t x652 = 22;

    t145 = (x649-(x650%(x651^x652)));

    if (t145 != 18446744073707659623LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint32_t x653 = 1905U;
	int16_t x654 = -1;
	static uint8_t x655 = 64U;
	static int8_t x656 = INT8_MIN;
	volatile uint32_t t146 = 9U;

    t146 = (x653-(x654%(x655^x656)));

    if (t146 != 1906U) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x659 = INT64_MIN;
	int8_t x660 = 8;

    t147 = (x657-(x658%(x659^x660)));

    if (t147 != 18412800657853654189LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x661 = 1U;
	volatile uint16_t x662 = 772U;
	static int8_t x664 = -1;
	volatile int32_t t148 = -6726586;

    t148 = (x661-(x662%(x663^x664)));

    if (t148 != -6) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x665 = -1;
	static int8_t x667 = -1;
	int32_t x668 = -390020;
	static volatile int32_t t149 = 8;

    t149 = (x665-(x666%(x667^x668)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static int64_t x671 = -105LL;
	static uint64_t x672 = UINT64_MAX;
	volatile uint64_t t150 = 718555980LLU;

    t150 = (x669-(x670%(x671^x672)));

    if (t150 != 18446744073709551392LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x673 = 33;
	uint8_t x674 = 49U;
	int8_t x675 = INT8_MIN;
	uint64_t x676 = UINT64_MAX;
	uint64_t t151 = 5428LLU;

    t151 = (x673-(x674%(x675^x676)));

    if (t151 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x677 = UINT16_MAX;
	int16_t x678 = INT16_MAX;
	volatile int8_t x679 = INT8_MIN;
	int32_t x680 = INT32_MIN;
	volatile int32_t t152 = 2718;

    t152 = (x677-(x678%(x679^x680)));

    if (t152 != 32768) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x681 = INT8_MAX;
	int64_t x683 = 63LL;
	int8_t x684 = INT8_MIN;
	int64_t t153 = -13LL;

    t153 = (x681-(x682%(x683^x684)));

    if (t153 != 190LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x685 = 3U;
	static volatile int32_t x686 = -1;
	int8_t x687 = INT8_MAX;
	int16_t x688 = INT16_MIN;
	int32_t t154 = -14063;

    t154 = (x685-(x686%(x687^x688)));

    if (t154 != 4) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint64_t x689 = UINT64_MAX;
	volatile int16_t x690 = 1;
	static int32_t x691 = -1;
	static uint8_t x692 = 48U;
	uint64_t t155 = 1878685949LLU;

    t155 = (x689-(x690%(x691^x692)));

    if (t155 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x693 = -1LL;

    t156 = (x693-(x694%(x695^x696)));

    if (t156 != 32767LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static int64_t x697 = INT64_MAX;
	int32_t x698 = INT32_MAX;
	int16_t x699 = INT16_MIN;
	volatile uint32_t x700 = 27988U;
	volatile int64_t t157 = 234023507564260LL;

    t157 = (x697-(x698%(x699^x700)));

    if (t157 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x701 = 1U;
	volatile int64_t x702 = INT64_MIN;
	static int32_t x703 = INT32_MIN;
	int64_t x704 = -8556893177265059LL;

    t158 = (x701-(x702%(x703^x704)));

    if (t158 != 7599899502240960LL) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x705 = -1;
	uint64_t x706 = UINT64_MAX;
	uint16_t x707 = UINT16_MAX;
	int8_t x708 = INT8_MAX;
	static uint64_t t159 = 4013107356622LLU;

    t159 = (x705-(x706%(x707^x708)));

    if (t159 != 18446744073709550592LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x713 = 8975;
	uint64_t x715 = 8962418LLU;

    t160 = (x713-(x714%(x715^x716)));

    if (t160 != 18446744071571039489LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int32_t x717 = -1;
	int16_t x719 = INT16_MIN;
	uint64_t t161 = 12067965844LLU;

    t161 = (x717-(x718%(x719^x720)));

    if (t161 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x721 = INT64_MAX;
	uint8_t x722 = 55U;
	static uint16_t x723 = 77U;
	int64_t x724 = INT64_MAX;

    t162 = (x721-(x722%(x723^x724)));

    if (t162 != 9223372036854775752LL) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint16_t x725 = 15778U;
	volatile int8_t x726 = -1;
	static int32_t x727 = INT32_MIN;
	int64_t t163 = -1452LL;

    t163 = (x725-(x726%(x727^x728)));

    if (t163 != 15779LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x730 = -2227LL;
	int64_t x731 = INT64_MAX;
	uint8_t x732 = 6U;
	static int64_t t164 = -21727309LL;

    t164 = (x729-(x730%(x731^x732)));

    if (t164 != 2226LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x733 = INT64_MAX;
	int32_t x734 = INT32_MAX;
	int16_t x735 = INT16_MIN;
	int32_t x736 = INT32_MAX;

    t165 = (x733-(x734%(x735^x736)));

    if (t165 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x737 = INT32_MAX;
	volatile uint8_t x738 = 3U;
	static int32_t x739 = INT32_MIN;
	uint32_t x740 = 420U;
	uint32_t t166 = 3300380U;

    t166 = (x737-(x738%(x739^x740)));

    if (t166 != 2147483644U) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint64_t x746 = UINT64_MAX;
	volatile int32_t x747 = -1;
	int64_t x748 = 1493569412LL;
	static volatile uint64_t t167 = 18249443689969LLU;

    t167 = (x745-(x746%(x747^x748)));

    if (t167 != 18446744072215982203LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x749 = INT16_MIN;
	int64_t x750 = -87818LL;
	static volatile uint64_t x751 = UINT64_MAX;
	int64_t x752 = INT64_MAX;
	volatile uint64_t t168 = 778163255750LLU;

    t168 = (x749-(x750%(x751^x752)));

    if (t168 != 9223372036854830858LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x761 = INT16_MIN;
	int16_t x762 = INT16_MIN;
	static int32_t x764 = INT32_MIN;

    t169 = (x761-(x762%(x763^x764)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x765 = INT8_MIN;
	int64_t x766 = -991966021LL;
	uint32_t x768 = 704868U;
	volatile int64_t t170 = -8LL;

    t170 = (x765-(x766%(x767^x768)));

    if (t170 != 991965893LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint32_t x769 = UINT32_MAX;
	int64_t x770 = -1LL;
	static int16_t x771 = INT16_MIN;
	uint16_t x772 = 25U;

    t171 = (x769-(x770%(x771^x772)));

    if (t171 != 4294967296LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x773 = 150U;
	uint32_t x775 = 2153U;
	int8_t x776 = 30;
	uint32_t t172 = 1341122736U;

    t172 = (x773-(x774%(x775^x776)));

    if (t172 != 4294965980U) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint16_t x777 = 246U;
	static int16_t x778 = INT16_MAX;
	uint64_t t173 = 267891735168091LLU;

    t173 = (x777-(x778%(x779^x780)));

    if (t173 != 18446744073709544784LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x786 = INT32_MIN;
	int8_t x787 = INT8_MAX;
	int8_t x788 = -3;
	int32_t t174 = 73412389;

    t174 = (x785-(x786%(x787^x788)));

    if (t174 != -32766) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x798 = 156;
	int64_t x799 = 206815LL;
	uint64_t x800 = 32926003LLU;
	volatile uint64_t t175 = 119844606834LLU;

    t175 = (x797-(x798%(x799^x800)));

    if (t175 != 18446744071562067812LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x801 = INT32_MIN;
	static int32_t x802 = INT32_MIN;
	uint8_t x803 = 7U;
	volatile int32_t x804 = -1;
	int32_t t176 = INT32_MIN;

    t176 = (x801-(x802%(x803^x804)));

    if (t176 != INT32_MIN) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x805 = INT32_MIN;
	volatile uint64_t x806 = UINT64_MAX;
	int8_t x807 = 1;
	int8_t x808 = INT8_MIN;
	uint64_t t177 = 674359434698LLU;

    t177 = (x805-(x806%(x807^x808)));

    if (t177 != 18446744071562067842LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x809 = -1;
	int64_t x810 = INT64_MAX;
	volatile uint8_t x811 = 6U;
	volatile int16_t x812 = -1;

    t178 = (x809-(x810%(x811^x812)));

    if (t178 != -1LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x813 = INT8_MIN;
	volatile int8_t x814 = INT8_MAX;
	int32_t x815 = INT32_MIN;
	static volatile uint32_t t179 = 27953U;

    t179 = (x813-(x814%(x815^x816)));

    if (t179 != 4294967041U) { NG(); } else { ; }
	
}

void f180(void) {
    	static int64_t x821 = INT64_MAX;
	uint8_t x822 = 1U;
	int8_t x823 = 1;
	int16_t x824 = INT16_MAX;
	static volatile int64_t t180 = -6LL;

    t180 = (x821-(x822%(x823^x824)));

    if (t180 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static int16_t x825 = INT16_MIN;
	static int32_t x827 = INT32_MAX;
	int16_t x828 = -1;

    t181 = (x825-(x826%(x827^x828)));

    if (t181 != -32820) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint8_t x829 = UINT8_MAX;
	static int16_t x830 = INT16_MIN;
	uint64_t x831 = 5721LLU;
	int16_t x832 = INT16_MIN;
	static volatile uint64_t t182 = 427LLU;

    t182 = (x829-(x830%(x831^x832)));

    if (t182 != 33023LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x833 = UINT32_MAX;
	int32_t x835 = INT32_MIN;
	uint16_t x836 = UINT16_MAX;

    t183 = (x833-(x834%(x835^x836)));

    if (t183 != 4294901760U) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x838 = INT16_MIN;
	int64_t x839 = -1LL;
	static volatile int64_t x840 = 2325342607581273LL;
	uint64_t t184 = 3505643LLU;

    t184 = (x837-(x838%(x839^x840)));

    if (t184 != 700508324211047469LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x841 = INT8_MAX;
	static uint32_t x843 = 62U;
	volatile int32_t x844 = -1;
	volatile uint32_t t185 = 2U;

    t185 = (x841-(x842%(x843^x844)));

    if (t185 != 255U) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x845 = INT64_MIN;
	int8_t x846 = INT8_MIN;
	static int64_t x847 = 1LL;
	static int64_t x848 = 3LL;
	static int64_t t186 = INT64_MIN;

    t186 = (x845-(x846%(x847^x848)));

    if (t186 != INT64_MIN) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x853 = INT64_MIN;
	static int64_t x854 = -1126385898850727LL;
	static uint64_t x855 = 7803LLU;

    t187 = (x853-(x854%(x855^x856)));

    if (t187 != 1126385898842923LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x857 = -1577725157721233542LL;
	int8_t x858 = INT8_MIN;
	int8_t x859 = 1;
	static int64_t t188 = 98838510579LL;

    t188 = (x857-(x858%(x859^x860)));

    if (t188 != -1577725157721233540LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile int8_t x862 = INT8_MIN;
	int8_t x863 = -29;
	static volatile uint64_t t189 = UINT64_MAX;

    t189 = (x861-(x862%(x863^x864)));

    if (t189 != UINT64_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint32_t x865 = 3U;
	static int16_t x866 = -14297;
	uint16_t x867 = 6811U;
	uint32_t x868 = UINT32_MAX;
	volatile uint32_t t190 = 7909620U;

    t190 = (x865-(x866%(x867^x868)));

    if (t190 != 14300U) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x869 = INT64_MAX;
	volatile int8_t x870 = 1;
	int32_t x872 = -7313;
	int64_t t191 = -2271LL;

    t191 = (x869-(x870%(x871^x872)));

    if (t191 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x873 = INT32_MAX;
	int32_t x874 = INT32_MIN;
	static int64_t x876 = -1LL;
	static volatile int64_t t192 = -46512955288476LL;

    t192 = (x873-(x874%(x875^x876)));

    if (t192 != 4294967295LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x877 = INT64_MIN;
	int16_t x879 = 8;
	volatile int64_t t193 = INT64_MIN;

    t193 = (x877-(x878%(x879^x880)));

    if (t193 != INT64_MIN) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x881 = 0U;
	int64_t x882 = -3324990322127038LL;
	int32_t x884 = INT32_MAX;

    t194 = (x881-(x882%(x883^x884)));

    if (t194 != 1930137736LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x885 = INT8_MIN;
	volatile int32_t x886 = INT32_MIN;
	int32_t x888 = -836;

    t195 = (x885-(x886%(x887^x888)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x890 = 18635U;
	int16_t x891 = INT16_MIN;
	uint16_t x892 = UINT16_MAX;
	int32_t t196 = 432504591;

    t196 = (x889-(x890%(x891^x892)));

    if (t196 != -16399) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x893 = INT16_MAX;
	int8_t x894 = INT8_MIN;
	volatile int8_t x895 = -1;
	volatile uint32_t x896 = 798701551U;
	volatile uint32_t t197 = 41213528U;

    t197 = (x893-(x894%(x895^x896)));

    if (t197 != 3496298639U) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x897 = 3737966590LLU;
	int16_t x898 = INT16_MIN;
	volatile int64_t x899 = -2093021789901480076LL;
	int64_t x900 = -1LL;
	static uint64_t t198 = 5935885978335LLU;

    t198 = (x897-(x898%(x899^x900)));

    if (t198 != 3737999358LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint16_t x905 = UINT16_MAX;
	int16_t x907 = -1;
	int32_t t199 = 3526;

    t199 = (x905-(x906%(x907^x908)));

    if (t199 != 65538) { NG(); } else { ; }
	
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

