
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

int32_t x2 = INT32_MIN;
uint8_t x4 = UINT8_MAX;
int64_t t0 = 1814231513LL;
int32_t x8 = 5081;
volatile uint64_t x11 = 1047974056514053323LLU;
static int64_t x14 = INT64_MIN;
static int16_t x15 = -16348;
int8_t x16 = -1;
static int32_t x18 = INT32_MAX;
uint64_t x23 = UINT64_MAX;
int8_t x25 = 1;
uint32_t x26 = 1169958U;
int32_t x34 = INT32_MAX;
uint64_t t8 = 447371400707LLU;
volatile int16_t x37 = INT16_MAX;
int64_t x41 = -339491LL;
volatile uint16_t x43 = 7U;
int16_t x44 = INT16_MAX;
volatile int32_t t11 = -589991;
int64_t x49 = -1LL;
int8_t x53 = INT8_MIN;
static int8_t x54 = 4;
static int32_t x57 = INT32_MAX;
int16_t x60 = -32;
int32_t x61 = -1;
int64_t x62 = INT64_MIN;
int64_t x69 = INT64_MIN;
static int64_t x73 = 0LL;
volatile int64_t t18 = 16LL;
uint64_t x77 = 805LLU;
volatile int16_t x81 = INT16_MIN;
volatile int64_t t21 = 4516694910348LL;
static uint32_t t22 = 13U;
int8_t x99 = INT8_MIN;
uint16_t x100 = UINT16_MAX;
static int8_t x111 = INT8_MIN;
static uint16_t x113 = 592U;
uint64_t x114 = UINT64_MAX;
static int8_t x118 = INT8_MAX;
int32_t x120 = INT32_MIN;
volatile uint64_t t29 = 1772605409LLU;
volatile uint8_t x125 = UINT8_MAX;
int8_t x134 = INT8_MIN;
int64_t x135 = 171650459LL;
int16_t x144 = -1;
uint16_t x146 = 4536U;
int64_t x150 = INT64_MAX;
uint64_t t35 = 3399LLU;
uint32_t t38 = 3417U;
uint64_t t39 = 16286708673523025LLU;
int16_t x174 = INT16_MIN;
static int16_t x182 = INT16_MAX;
static int8_t x184 = INT8_MAX;
uint32_t x191 = 12U;
int16_t x194 = INT16_MAX;
static int32_t x202 = 1;
int32_t x204 = INT32_MIN;
int8_t x205 = -1;
int8_t x208 = INT8_MIN;
volatile uint32_t t51 = 6U;
int64_t x221 = -14061427LL;
int64_t t53 = 3993763494114LL;
uint8_t x229 = 0U;
static volatile int8_t x232 = INT8_MIN;
uint16_t x233 = 760U;
static int32_t t56 = -28;
int16_t x242 = INT16_MIN;
static int16_t x243 = INT16_MAX;
int32_t t58 = -4376744;
uint16_t x260 = UINT16_MAX;
int64_t t62 = 0LL;
volatile int64_t x261 = INT64_MAX;
uint32_t x262 = 7U;
static volatile uint32_t x263 = UINT32_MAX;
volatile int8_t x265 = INT8_MIN;
int64_t x267 = -1LL;
int8_t x268 = 1;
int8_t x270 = INT8_MIN;
int16_t x276 = INT16_MAX;
int8_t x278 = INT8_MIN;
int8_t x281 = INT8_MAX;
int64_t t68 = 1111LL;
volatile int8_t x288 = -1;
uint8_t x303 = UINT8_MAX;
volatile uint32_t t72 = 120U;
volatile int64_t t73 = 1656698511785899619LL;
uint64_t t74 = 402165602267LLU;
int8_t x336 = -1;
int64_t x340 = INT64_MIN;
volatile uint32_t t84 = 86924895U;
static volatile uint64_t t86 = 0LLU;
volatile int64_t x369 = -265644185889LL;
static int64_t t89 = 240LL;
int32_t x383 = -1;
volatile uint8_t x390 = 5U;
int8_t x408 = -54;
int8_t x414 = -1;
uint32_t t99 = 1543712369U;
int8_t x423 = INT8_MIN;
int8_t x424 = INT8_MIN;
volatile int16_t x425 = -1;
int16_t x433 = INT16_MAX;
static uint8_t x438 = 20U;
int8_t x440 = -1;
uint8_t x457 = 3U;
int8_t x461 = INT8_MAX;
volatile int64_t t109 = -151LL;
uint64_t x475 = 187045780142722LLU;
volatile uint64_t t112 = 4450675044500496183LLU;
static int32_t x480 = INT32_MIN;
static int16_t x483 = INT16_MIN;
int64_t x487 = INT64_MAX;
int64_t x488 = -54199300LL;
int64_t t115 = -9663165879829LL;
volatile int64_t x490 = INT64_MIN;
int32_t x495 = -1;
int8_t x503 = INT8_MIN;
int8_t x506 = INT8_MIN;
static volatile uint32_t t120 = 14U;
int8_t x510 = INT8_MAX;
uint32_t x513 = 838001U;
uint8_t x516 = UINT8_MAX;
uint32_t t122 = 1592153345U;
int8_t x528 = INT8_MIN;
volatile int32_t t123 = -24477;
uint16_t x529 = UINT16_MAX;
volatile int64_t t125 = -50LL;
uint8_t x545 = 2U;
uint32_t x547 = 1020U;
volatile int8_t x555 = INT8_MAX;
static int8_t x558 = -1;
int64_t t129 = 75LL;
volatile int64_t t131 = 1030LL;
int8_t x571 = 1;
int16_t x574 = INT16_MIN;
int32_t t133 = -23662;
uint32_t x581 = 109198025U;
volatile int16_t x588 = 0;
int16_t x591 = -1;
volatile int64_t t139 = 32633066LL;
uint64_t x607 = 80808963451043833LLU;
volatile int32_t t143 = -242453551;
static int8_t x621 = INT8_MIN;
int8_t x629 = INT8_MIN;
static int64_t x632 = -66887055LL;
int8_t x633 = 3;
uint32_t t148 = 3U;
static int8_t x645 = INT8_MIN;
volatile int64_t x649 = INT64_MIN;
static volatile int16_t x651 = INT16_MIN;
static int16_t x662 = -62;
static int64_t t154 = -1115LL;
static volatile int64_t t155 = 6525528430173878LL;
static int16_t x672 = -1;
uint64_t x676 = 1520161844716LLU;
int32_t x679 = INT32_MIN;
uint64_t x682 = UINT64_MAX;
int8_t x686 = -1;
int16_t x687 = -1;
int8_t x688 = INT8_MIN;
uint8_t x694 = 3U;
int16_t x722 = INT16_MAX;
static int64_t x723 = -1LL;
static int32_t x726 = INT32_MIN;
int32_t x729 = INT32_MIN;
uint32_t t171 = 32579U;
volatile int64_t t172 = INT64_MIN;
uint32_t t173 = 58063015U;
int64_t x751 = INT64_MIN;
uint64_t t174 = 430213LLU;
volatile uint8_t x761 = UINT8_MAX;
int8_t x772 = INT8_MIN;
static int32_t x774 = INT32_MIN;
static volatile int8_t x777 = INT8_MAX;
int16_t x780 = 1;
int8_t x782 = -1;
static volatile uint64_t t184 = 13LLU;
volatile int16_t x795 = 269;
uint32_t x797 = UINT32_MAX;
int8_t x798 = 3;
int64_t x803 = -1LL;
uint64_t x806 = UINT64_MAX;
uint64_t x821 = UINT64_MAX;
volatile uint16_t x826 = 190U;
volatile uint32_t x829 = 120U;
volatile int16_t x837 = -1;
int8_t x839 = -1;
uint8_t x846 = 0U;
uint64_t t196 = 5758937LLU;
int32_t t199 = -1829949;


void f0(void) {
    	uint32_t x1 = 708U;
	int64_t x3 = 546LL;

    t0 = (((x1&x2)/x3)*x4);

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MIN;
	volatile uint16_t x6 = 203U;
	uint8_t x7 = UINT8_MAX;
	int64_t t1 = 3152282361408LL;

    t1 = (((x5&x6)/x7)*x8);

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static int64_t x9 = -1LL;
	int16_t x10 = INT16_MIN;
	static uint32_t x12 = 61025510U;
	uint64_t t2 = 515020617LLU;

    t2 = (((x9&x10)/x11)*x12);

    if (t2 != 1037433670LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x13 = -1;
	volatile int64_t t3 = 1LL;

    t3 = (((x13&x14)/x15)*x16);

    if (t3 != -564189627896670LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MIN;
	int64_t x19 = INT64_MAX;
	uint16_t x20 = UINT16_MAX;
	volatile int64_t t4 = 13LL;

    t4 = (((x17&x18)/x19)*x20);

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = INT64_MIN;
	volatile int32_t x22 = -981970;
	int64_t x24 = INT64_MAX;
	static volatile uint64_t t5 = 21914357775591LLU;

    t5 = (((x21&x22)/x23)*x24);

    if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x27 = INT8_MIN;
	uint64_t x28 = 88LLU;
	volatile uint64_t t6 = 159517222414LLU;

    t6 = (((x25&x26)/x27)*x28);

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = INT16_MIN;
	uint64_t x30 = 2143914805053952LLU;
	uint64_t x31 = 11200080LLU;
	int16_t x32 = -8;
	uint64_t t7 = 112LLU;

    t7 = (((x29&x30)/x31)*x32);

    if (t7 != 18446744072178194840LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint16_t x33 = 11784U;
	volatile uint64_t x35 = 1228LLU;
	uint8_t x36 = 0U;

    t8 = (((x33&x34)/x35)*x36);

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x38 = UINT8_MAX;
	int8_t x39 = -1;
	volatile uint16_t x40 = UINT16_MAX;
	static int32_t t9 = -397083;

    t9 = (((x37&x38)/x39)*x40);

    if (t9 != -16711425) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x42 = 1;
	static volatile int64_t t10 = 3036647152887803LL;

    t10 = (((x41&x42)/x43)*x44);

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x45 = 96U;
	static int8_t x46 = INT8_MAX;
	uint16_t x47 = UINT16_MAX;
	int8_t x48 = -44;

    t11 = (((x45&x46)/x47)*x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x50 = 273823524;
	static int16_t x51 = INT16_MAX;
	uint8_t x52 = 119U;
	volatile int64_t t12 = -187498721224610198LL;

    t12 = (((x49&x50)/x51)*x52);

    if (t12 != 994364LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x55 = UINT32_MAX;
	uint8_t x56 = 7U;
	static volatile uint32_t t13 = 353377243U;

    t13 = (((x53&x54)/x55)*x56);

    if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x58 = INT32_MAX;
	int16_t x59 = INT16_MAX;
	volatile int32_t t14 = -5773734;

    t14 = (((x57&x58)/x59)*x60);

    if (t14 != -2097216) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x63 = INT16_MIN;
	uint8_t x64 = 7U;
	int64_t t15 = -8641347876LL;

    t15 = (((x61&x62)/x63)*x64);

    if (t15 != 1970324836974592LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x65 = UINT64_MAX;
	uint32_t x66 = 1388U;
	int8_t x67 = 1;
	uint16_t x68 = 888U;
	volatile uint64_t t16 = 507893379168LLU;

    t16 = (((x65&x66)/x67)*x68);

    if (t16 != 1232544LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x70 = INT16_MAX;
	int16_t x71 = -1;
	uint8_t x72 = 18U;
	int64_t t17 = 27248009641981525LL;

    t17 = (((x69&x70)/x71)*x72);

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x74 = INT64_MIN;
	static int16_t x75 = -3640;
	static volatile int8_t x76 = INT8_MIN;

    t18 = (((x73&x74)/x75)*x76);

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x78 = -2236981;
	static uint16_t x79 = 42U;
	int32_t x80 = 1;
	uint64_t t19 = 97498444LLU;

    t19 = (((x77&x78)/x79)*x80);

    if (t19 != 6LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x82 = 21179678LLU;
	uint32_t x83 = 14980478U;
	static int16_t x84 = -1;
	uint64_t t20 = UINT64_MAX;

    t20 = (((x81&x82)/x83)*x84);

    if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile int64_t x85 = -3586002007757LL;
	uint32_t x86 = 0U;
	int32_t x87 = 191415;
	static int16_t x88 = -1;

    t21 = (((x85&x86)/x87)*x88);

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x89 = -14208;
	static int32_t x90 = -256319749;
	uint32_t x91 = 2074938736U;
	uint16_t x92 = 2426U;

    t22 = (((x89&x90)/x91)*x92);

    if (t22 != 2426U) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint32_t x93 = 87U;
	int32_t x94 = INT32_MIN;
	volatile int32_t x95 = -10;
	uint32_t x96 = 8226271U;
	static volatile uint32_t t23 = 5591157U;

    t23 = (((x93&x94)/x95)*x96);

    if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x97 = 572U;
	volatile int16_t x98 = 3636;
	int32_t t24 = 63224486;

    t24 = (((x97&x98)/x99)*x100);

    if (t24 != -262140) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int8_t x101 = INT8_MIN;
	static volatile uint16_t x102 = 2U;
	static int32_t x103 = INT32_MAX;
	int32_t x104 = INT32_MAX;
	int32_t t25 = 418;

    t25 = (((x101&x102)/x103)*x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = INT16_MAX;
	int16_t x106 = -1;
	int64_t x107 = INT64_MIN;
	volatile int16_t x108 = INT16_MAX;
	int64_t t26 = 56997948814483958LL;

    t26 = (((x105&x106)/x107)*x108);

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x109 = 187U;
	static int32_t x110 = 136;
	int8_t x112 = INT8_MAX;
	volatile uint32_t t27 = 23839U;

    t27 = (((x109&x110)/x111)*x112);

    if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x115 = 6647077188762039248LLU;
	uint64_t x116 = 14LLU;
	volatile uint64_t t28 = 480343LLU;

    t28 = (((x113&x114)/x115)*x116);

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = -1;
	static uint64_t x119 = 514410LLU;

    t29 = (((x117&x118)/x119)*x120);

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int32_t x126 = -1;
	int16_t x127 = INT16_MAX;
	static int16_t x128 = -4408;
	static int32_t t30 = -10993;

    t30 = (((x125&x126)/x127)*x128);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x133 = 6;
	int64_t x136 = INT64_MIN;
	int64_t t31 = -997874443823866LL;

    t31 = (((x133&x134)/x135)*x136);

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x137 = 90U;
	uint32_t x138 = UINT32_MAX;
	int16_t x139 = INT16_MIN;
	static uint8_t x140 = 25U;
	volatile uint32_t t32 = 68199U;

    t32 = (((x137&x138)/x139)*x140);

    if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint8_t x141 = 43U;
	static int32_t x142 = INT32_MIN;
	static int32_t x143 = INT32_MIN;
	static int32_t t33 = 82025;

    t33 = (((x141&x142)/x143)*x144);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x145 = INT32_MIN;
	static volatile uint8_t x147 = UINT8_MAX;
	uint64_t x148 = 875386981929LLU;
	uint64_t t34 = 29949275810777249LLU;

    t34 = (((x145&x146)/x147)*x148);

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x149 = INT32_MIN;
	uint64_t x151 = 31833098LLU;
	int8_t x152 = -1;

    t35 = (((x149&x150)/x151)*x152);

    if (t35 != 18446743783967974007LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x153 = INT8_MAX;
	uint32_t x154 = 22026U;
	uint64_t x155 = 344670617023378LLU;
	static uint16_t x156 = UINT16_MAX;
	uint64_t t36 = 6364LLU;

    t36 = (((x153&x154)/x155)*x156);

    if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x157 = 0;
	int8_t x158 = -1;
	static int8_t x159 = -1;
	int32_t x160 = INT32_MIN;
	volatile int32_t t37 = -3;

    t37 = (((x157&x158)/x159)*x160);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x161 = -83;
	int8_t x162 = INT8_MAX;
	int32_t x163 = INT32_MIN;
	volatile uint32_t x164 = 1232202481U;

    t38 = (((x161&x162)/x163)*x164);

    if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x165 = 1;
	uint32_t x166 = 2105351U;
	uint64_t x167 = 3936382150529LLU;
	uint16_t x168 = 24U;

    t39 = (((x165&x166)/x167)*x168);

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x169 = INT64_MAX;
	static volatile uint16_t x170 = 1102U;
	static int32_t x171 = INT32_MIN;
	uint32_t x172 = 1771282U;
	volatile int64_t t40 = 823612760406LL;

    t40 = (((x169&x170)/x171)*x172);

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x173 = -26996;
	volatile int32_t x175 = 2;
	uint32_t x176 = UINT32_MAX;
	uint32_t t41 = 56758U;

    t41 = (((x173&x174)/x175)*x176);

    if (t41 != 16384U) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x177 = INT16_MAX;
	uint16_t x178 = UINT16_MAX;
	int64_t x179 = INT64_MIN;
	volatile int32_t x180 = INT32_MIN;
	volatile int64_t t42 = 1946LL;

    t42 = (((x177&x178)/x179)*x180);

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x181 = -1;
	volatile int32_t x183 = INT32_MIN;
	int32_t t43 = 648150;

    t43 = (((x181&x182)/x183)*x184);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint8_t x185 = UINT8_MAX;
	int64_t x186 = -41245080LL;
	volatile uint64_t x187 = 940194986813822721LLU;
	static uint16_t x188 = 3U;
	volatile uint64_t t44 = 862LLU;

    t44 = (((x185&x186)/x187)*x188);

    if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int32_t x189 = -600408;
	uint8_t x190 = 11U;
	int32_t x192 = 1;
	static volatile uint32_t t45 = 99986U;

    t45 = (((x189&x190)/x191)*x192);

    if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint8_t x193 = UINT8_MAX;
	uint64_t x195 = UINT64_MAX;
	uint32_t x196 = UINT32_MAX;
	uint64_t t46 = 1661828811828LLU;

    t46 = (((x193&x194)/x195)*x196);

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile uint16_t x197 = 29067U;
	int8_t x198 = 0;
	int32_t x199 = INT32_MIN;
	static int16_t x200 = 1;
	int32_t t47 = 941;

    t47 = (((x197&x198)/x199)*x200);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x201 = UINT8_MAX;
	uint32_t x203 = 694U;
	volatile uint32_t t48 = 931U;

    t48 = (((x201&x202)/x203)*x204);

    if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x206 = INT64_MIN;
	volatile uint16_t x207 = 31546U;
	volatile int64_t t49 = -3533671049733538069LL;

    t49 = (((x205&x206)/x207)*x208);

    if (t49 != 37424447496272384LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x209 = 112U;
	static uint16_t x210 = 21428U;
	int64_t x211 = -1LL;
	int32_t x212 = INT32_MIN;
	int64_t t50 = -512236LL;

    t50 = (((x209&x210)/x211)*x212);

    if (t50 != 103079215104LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x213 = -1;
	volatile int8_t x214 = INT8_MIN;
	int16_t x215 = INT16_MIN;
	uint32_t x216 = UINT32_MAX;

    t51 = (((x213&x214)/x215)*x216);

    if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x217 = -130;
	volatile int64_t x218 = -1LL;
	static int16_t x219 = INT16_MIN;
	volatile int16_t x220 = INT16_MIN;
	int64_t t52 = -1LL;

    t52 = (((x217&x218)/x219)*x220);

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static int64_t x222 = INT64_MIN;
	int8_t x223 = INT8_MIN;
	volatile int8_t x224 = INT8_MAX;

    t53 = (((x221&x222)/x223)*x224);

    if (t53 != 9151314442816847872LL) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint16_t x225 = 1767U;
	int8_t x226 = -11;
	int8_t x227 = INT8_MIN;
	uint8_t x228 = UINT8_MAX;
	int32_t t54 = -249004;

    t54 = (((x225&x226)/x227)*x228);

    if (t54 != -3315) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x230 = UINT16_MAX;
	uint8_t x231 = 6U;
	volatile int32_t t55 = -2728;

    t55 = (((x229&x230)/x231)*x232);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x234 = INT8_MAX;
	int8_t x235 = -2;
	static volatile uint16_t x236 = 0U;

    t56 = (((x233&x234)/x235)*x236);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint64_t x237 = UINT64_MAX;
	uint64_t x238 = 17211379LLU;
	int64_t x239 = INT64_MAX;
	volatile int64_t x240 = INT64_MIN;
	volatile uint64_t t57 = 232946386627265LLU;

    t57 = (((x237&x238)/x239)*x240);

    if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x241 = -1;
	int32_t x244 = -3;

    t58 = (((x241&x242)/x243)*x244);

    if (t58 != 3) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint16_t x245 = 509U;
	int32_t x246 = 7;
	static volatile uint64_t x247 = 29099145605644LLU;
	volatile uint64_t x248 = 124740LLU;
	volatile uint64_t t59 = 1996527478705LLU;

    t59 = (((x245&x246)/x247)*x248);

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint64_t x249 = 8275289641LLU;
	int16_t x250 = -1;
	static int64_t x251 = INT64_MAX;
	int32_t x252 = INT32_MAX;
	uint64_t t60 = 2776688001LLU;

    t60 = (((x249&x250)/x251)*x252);

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x253 = -16736692331099446LL;
	uint64_t x254 = 166LLU;
	uint8_t x255 = UINT8_MAX;
	static uint32_t x256 = 1U;
	uint64_t t61 = 16152932520310924LLU;

    t61 = (((x253&x254)/x255)*x256);

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x257 = INT8_MIN;
	volatile uint16_t x258 = UINT16_MAX;
	int64_t x259 = -1LL;

    t62 = (((x257&x258)/x259)*x260);

    if (t62 != -4286513280LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x264 = INT32_MIN;
	int64_t t63 = -14LL;

    t63 = (((x261&x262)/x263)*x264);

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x266 = INT8_MAX;
	volatile int64_t t64 = -87388180LL;

    t64 = (((x265&x266)/x267)*x268);

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int16_t x269 = -8099;
	int64_t x271 = -1LL;
	uint16_t x272 = 7719U;
	static volatile int64_t t65 = -8422LL;

    t65 = (((x269&x270)/x271)*x272);

    if (t65 != 63234048LL) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x273 = 1;
	int16_t x274 = INT16_MAX;
	uint64_t x275 = UINT64_MAX;
	volatile uint64_t t66 = 1311399649722301674LLU;

    t66 = (((x273&x274)/x275)*x276);

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x277 = 108U;
	int16_t x279 = INT16_MAX;
	int32_t x280 = -1842;
	volatile int32_t t67 = -536;

    t67 = (((x277&x278)/x279)*x280);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x282 = INT64_MIN;
	uint16_t x283 = 3U;
	int8_t x284 = 22;

    t68 = (((x281&x282)/x283)*x284);

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int64_t x285 = -92426514LL;
	int32_t x286 = -740346;
	int64_t x287 = INT64_MAX;
	volatile int64_t t69 = -429868LL;

    t69 = (((x285&x286)/x287)*x288);

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int8_t x293 = -6;
	volatile int16_t x294 = INT16_MAX;
	static uint64_t x295 = 5LLU;
	static uint32_t x296 = 2731U;
	uint64_t t70 = 31651634LLU;

    t70 = (((x293&x294)/x295)*x296);

    if (t70 != 17893512LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x297 = -1;
	int16_t x298 = INT16_MAX;
	static uint8_t x299 = 125U;
	int16_t x300 = INT16_MAX;
	static int32_t t71 = 3244857;

    t71 = (((x297&x298)/x299)*x300);

    if (t71 != 8584954) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x301 = 201076844U;
	int32_t x302 = 9374775;
	int32_t x304 = -131310804;

    t72 = (((x301&x302)/x303)*x304);

    if (t72 != 4196264976U) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x305 = 30975949;
	volatile int64_t x306 = INT64_MIN;
	volatile uint8_t x307 = 27U;
	int8_t x308 = 3;

    t73 = (((x305&x306)/x307)*x308);

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x309 = -1170LL;
	volatile int16_t x310 = 15284;
	volatile uint64_t x311 = UINT64_MAX;
	static int64_t x312 = 10386LL;

    t74 = (((x309&x310)/x311)*x312);

    if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x317 = 3665;
	uint32_t x318 = 9U;
	volatile int8_t x319 = INT8_MIN;
	uint8_t x320 = 11U;
	uint32_t t75 = 2424405U;

    t75 = (((x317&x318)/x319)*x320);

    if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x321 = -193300407;
	uint8_t x322 = UINT8_MAX;
	int32_t x323 = INT32_MIN;
	int32_t x324 = INT32_MAX;
	static volatile int32_t t76 = -937833;

    t76 = (((x321&x322)/x323)*x324);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x325 = -6;
	uint8_t x326 = 37U;
	volatile int64_t x327 = -43LL;
	int8_t x328 = -1;
	int64_t t77 = 0LL;

    t77 = (((x325&x326)/x327)*x328);

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x329 = INT16_MIN;
	int16_t x330 = 206;
	volatile int64_t x331 = INT64_MIN;
	static int8_t x332 = INT8_MIN;
	volatile int64_t t78 = 3988641LL;

    t78 = (((x329&x330)/x331)*x332);

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint32_t x333 = 895U;
	volatile int16_t x334 = -5;
	int16_t x335 = INT16_MAX;
	uint32_t t79 = 963592U;

    t79 = (((x333&x334)/x335)*x336);

    if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x337 = INT8_MAX;
	static volatile int8_t x338 = INT8_MIN;
	static int32_t x339 = -1;
	int64_t t80 = -138063LL;

    t80 = (((x337&x338)/x339)*x340);

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint16_t x341 = 13543U;
	int64_t x342 = -1LL;
	volatile int32_t x343 = INT32_MAX;
	int8_t x344 = INT8_MIN;
	volatile int64_t t81 = 6LL;

    t81 = (((x341&x342)/x343)*x344);

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x345 = 265639477U;
	static uint16_t x346 = 17U;
	volatile uint16_t x347 = 1861U;
	int32_t x348 = -55869377;
	uint32_t t82 = 8489305U;

    t82 = (((x345&x346)/x347)*x348);

    if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x349 = INT32_MIN;
	int64_t x350 = INT64_MIN;
	static volatile uint16_t x351 = 87U;
	int64_t x352 = -1LL;
	static int64_t t83 = 413052971LL;

    t83 = (((x349&x350)/x351)*x352);

    if (t83 != 106015770538560641LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x353 = INT32_MIN;
	uint32_t x354 = 1823841590U;
	uint32_t x355 = 91U;
	int16_t x356 = INT16_MIN;

    t84 = (((x353&x354)/x355)*x356);

    if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint16_t x357 = 14814U;
	static int32_t x358 = -122;
	static int8_t x359 = 4;
	volatile int8_t x360 = INT8_MIN;
	int32_t t85 = 402340;

    t85 = (((x357&x358)/x359)*x360);

    if (t85 != -471168) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x361 = UINT64_MAX;
	int16_t x362 = 12966;
	int16_t x363 = INT16_MIN;
	uint8_t x364 = UINT8_MAX;

    t86 = (((x361&x362)/x363)*x364);

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x365 = UINT16_MAX;
	int32_t x366 = INT32_MAX;
	int64_t x367 = INT64_MIN;
	int64_t x368 = INT64_MAX;
	volatile int64_t t87 = 14562727559989LL;

    t87 = (((x365&x366)/x367)*x368);

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x370 = 332460224812LL;
	int64_t x371 = INT64_MIN;
	uint32_t x372 = UINT32_MAX;
	volatile int64_t t88 = 257576698805015450LL;

    t88 = (((x369&x370)/x371)*x372);

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x373 = INT64_MIN;
	int8_t x374 = INT8_MIN;
	static volatile int16_t x375 = -517;
	int32_t x376 = -1;

    t89 = (((x373&x374)/x375)*x376);

    if (t89 != -17840178020995697LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x377 = -4;
	int8_t x378 = -18;
	int8_t x379 = 6;
	uint8_t x380 = UINT8_MAX;
	volatile int32_t t90 = 118;

    t90 = (((x377&x378)/x379)*x380);

    if (t90 != -765) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x381 = 11;
	static uint8_t x382 = 1U;
	static int32_t x384 = INT32_MAX;
	volatile int32_t t91 = 77255633;

    t91 = (((x381&x382)/x383)*x384);

    if (t91 != -2147483647) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x389 = INT8_MIN;
	int16_t x391 = INT16_MIN;
	int64_t x392 = INT64_MIN;
	int64_t t92 = 0LL;

    t92 = (((x389&x390)/x391)*x392);

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x393 = 6U;
	int16_t x394 = -1;
	static volatile uint64_t x395 = 6280049157563LLU;
	uint32_t x396 = UINT32_MAX;
	uint64_t t93 = 72405698724845LLU;

    t93 = (((x393&x394)/x395)*x396);

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x397 = 11U;
	uint64_t x398 = UINT64_MAX;
	static int16_t x399 = INT16_MIN;
	volatile uint64_t x400 = 194474125LLU;
	volatile uint64_t t94 = 134390997191354519LLU;

    t94 = (((x397&x398)/x399)*x400);

    if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int64_t x401 = INT64_MIN;
	volatile uint16_t x402 = 18002U;
	int16_t x403 = INT16_MIN;
	int16_t x404 = INT16_MAX;
	volatile int64_t t95 = 170LL;

    t95 = (((x401&x402)/x403)*x404);

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x405 = -1LL;
	static int64_t x406 = -610060925LL;
	uint16_t x407 = UINT16_MAX;
	int64_t t96 = 15235592976117LL;

    t96 = (((x405&x406)/x407)*x408);

    if (t96 != 502632LL) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x409 = -1LL;
	static volatile uint32_t x410 = 389308133U;
	uint16_t x411 = 6357U;
	static uint8_t x412 = 0U;
	volatile int64_t t97 = 3594235427LL;

    t97 = (((x409&x410)/x411)*x412);

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x413 = -114736LL;
	volatile uint8_t x415 = 40U;
	static uint64_t x416 = 19917LLU;
	uint64_t t98 = 82LLU;

    t98 = (((x413&x414)/x415)*x416);

    if (t98 != 18446744073652429660LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile uint32_t x417 = UINT32_MAX;
	static int32_t x418 = -2848;
	int16_t x419 = INT16_MAX;
	volatile uint16_t x420 = 6U;

    t99 = (((x417&x418)/x419)*x420);

    if (t99 != 786450U) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x421 = -1;
	volatile int8_t x422 = INT8_MAX;
	int32_t t100 = -20130;

    t100 = (((x421&x422)/x423)*x424);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x426 = UINT32_MAX;
	int64_t x427 = INT64_MIN;
	volatile uint32_t x428 = UINT32_MAX;
	static volatile int64_t t101 = -30LL;

    t101 = (((x425&x426)/x427)*x428);

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x429 = INT64_MIN;
	static int8_t x430 = -2;
	volatile int8_t x431 = INT8_MIN;
	int16_t x432 = -1;
	int64_t t102 = 4124224706019920LL;

    t102 = (((x429&x430)/x431)*x432);

    if (t102 != -72057594037927936LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x434 = 0U;
	int64_t x435 = -846940689646296838LL;
	uint64_t x436 = 401LLU;
	volatile uint64_t t103 = 109112891483979LLU;

    t103 = (((x433&x434)/x435)*x436);

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x437 = 6;
	int32_t x439 = INT32_MIN;
	int32_t t104 = -2093;

    t104 = (((x437&x438)/x439)*x440);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x441 = 6U;
	int8_t x442 = INT8_MIN;
	int64_t x443 = -25LL;
	int8_t x444 = 22;
	volatile int64_t t105 = -1LL;

    t105 = (((x441&x442)/x443)*x444);

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint32_t x449 = UINT32_MAX;
	uint16_t x450 = UINT16_MAX;
	static int32_t x451 = INT32_MAX;
	int8_t x452 = 3;
	uint32_t t106 = 1882641594U;

    t106 = (((x449&x450)/x451)*x452);

    if (t106 != 0U) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint64_t x453 = 3327551154LLU;
	uint64_t x454 = 7188355229981LLU;
	int64_t x455 = -16083918231LL;
	static int8_t x456 = INT8_MIN;
	volatile uint64_t t107 = 1251428287LLU;

    t107 = (((x453&x454)/x455)*x456);

    if (t107 != 0LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x458 = INT64_MAX;
	int32_t x459 = INT32_MIN;
	int16_t x460 = -1;
	static volatile int64_t t108 = -50589059LL;

    t108 = (((x457&x458)/x459)*x460);

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x462 = INT64_MIN;
	volatile int64_t x463 = 9214100260LL;
	static int16_t x464 = INT16_MAX;

    t109 = (((x461&x462)/x463)*x464);

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x465 = -1886;
	volatile int8_t x466 = 1;
	static uint32_t x467 = 34645578U;
	int32_t x468 = INT32_MIN;
	uint32_t t110 = 3293670U;

    t110 = (((x465&x466)/x467)*x468);

    if (t110 != 0U) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x469 = INT8_MIN;
	int32_t x470 = -1;
	volatile int32_t x471 = 7867;
	uint32_t x472 = 19062U;
	static volatile uint32_t t111 = 5095101U;

    t111 = (((x469&x470)/x471)*x472);

    if (t111 != 0U) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int16_t x473 = -822;
	int16_t x474 = INT16_MAX;
	int16_t x476 = INT16_MIN;

    t112 = (((x473&x474)/x475)*x476);

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x477 = 0U;
	uint32_t x478 = UINT32_MAX;
	volatile int64_t x479 = -1LL;
	int64_t t113 = -10747108966LL;

    t113 = (((x477&x478)/x479)*x480);

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile int32_t x481 = -1;
	volatile int32_t x482 = INT32_MIN;
	int16_t x484 = INT16_MAX;
	volatile int32_t t114 = 614255883;

    t114 = (((x481&x482)/x483)*x484);

    if (t114 != 2147418112) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x485 = UINT16_MAX;
	uint8_t x486 = 0U;

    t115 = (((x485&x486)/x487)*x488);

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x489 = 39585LLU;
	int32_t x491 = 375727844;
	static int16_t x492 = 983;
	volatile uint64_t t116 = 3LLU;

    t116 = (((x489&x490)/x491)*x492);

    if (t116 != 0LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x493 = 762124452LLU;
	int8_t x494 = INT8_MAX;
	int16_t x496 = -1;
	volatile uint64_t t117 = 270149262929LLU;

    t117 = (((x493&x494)/x495)*x496);

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x497 = INT8_MIN;
	uint32_t x498 = 145115U;
	static volatile int32_t x499 = 44;
	static int32_t x500 = INT32_MAX;
	uint32_t t118 = 25136571U;

    t118 = (((x497&x498)/x499)*x500);

    if (t118 != 4294964000U) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x501 = -4;
	int8_t x502 = INT8_MIN;
	int32_t x504 = -1;
	static volatile int32_t t119 = 62912337;

    t119 = (((x501&x502)/x503)*x504);

    if (t119 != -1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x505 = UINT16_MAX;
	static int8_t x507 = 7;
	uint32_t x508 = 3543U;

    t120 = (((x505&x506)/x507)*x508);

    if (t120 != 33105792U) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x509 = INT32_MAX;
	volatile int64_t x511 = -1LL;
	int32_t x512 = INT32_MIN;
	volatile int64_t t121 = 1433041501652947669LL;

    t121 = (((x509&x510)/x511)*x512);

    if (t121 != 272730423296LL) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint8_t x514 = 65U;
	int32_t x515 = 672534163;

    t122 = (((x513&x514)/x515)*x516);

    if (t122 != 0U) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t x525 = INT32_MIN;
	volatile int8_t x526 = INT8_MAX;
	int16_t x527 = 6;

    t123 = (((x525&x526)/x527)*x528);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int8_t x530 = INT8_MIN;
	volatile uint8_t x531 = 2U;
	uint8_t x532 = 5U;
	volatile int32_t t124 = -48270845;

    t124 = (((x529&x530)/x531)*x532);

    if (t124 != 163520) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x537 = INT16_MIN;
	static uint8_t x538 = 0U;
	int64_t x539 = 2624973181306802LL;
	volatile int32_t x540 = INT32_MIN;

    t125 = (((x537&x538)/x539)*x540);

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x546 = INT8_MAX;
	volatile int16_t x548 = INT16_MIN;
	volatile uint32_t t126 = 55591U;

    t126 = (((x545&x546)/x547)*x548);

    if (t126 != 0U) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x549 = -1;
	static int32_t x550 = 1;
	uint32_t x551 = 200805427U;
	int32_t x552 = INT32_MAX;
	static uint32_t t127 = 13383427U;

    t127 = (((x549&x550)/x551)*x552);

    if (t127 != 0U) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x553 = INT16_MIN;
	uint64_t x554 = 3037827LLU;
	uint32_t x556 = 3051U;
	volatile uint64_t t128 = 163175336LLU;

    t128 = (((x553&x554)/x555)*x556);

    if (t128 != 72421587LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x557 = UINT32_MAX;
	int16_t x559 = -1;
	volatile int64_t x560 = 702342552377923LL;

    t129 = (((x557&x558)/x559)*x560);

    if (t129 != 702342552377923LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint32_t x561 = 894926901U;
	volatile int64_t x562 = 52569LL;
	volatile uint16_t x563 = 473U;
	uint32_t x564 = 1609780U;
	int64_t t130 = 186703765926378321LL;

    t130 = (((x561&x562)/x563)*x564);

    if (t130 != 111074820LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x565 = -1;
	int8_t x566 = -1;
	static volatile int64_t x567 = INT64_MIN;
	int64_t x568 = INT64_MIN;

    t131 = (((x565&x566)/x567)*x568);

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint32_t x569 = 36383648U;
	int64_t x570 = -1LL;
	uint32_t x572 = 10697042U;
	int64_t t132 = -28088300LL;

    t132 = (((x569&x570)/x571)*x572);

    if (t132 != 389197410769216LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x573 = 1;
	int32_t x575 = -1;
	int32_t x576 = INT32_MIN;

    t133 = (((x573&x574)/x575)*x576);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x577 = UINT32_MAX;
	static uint16_t x578 = 0U;
	uint8_t x579 = 12U;
	static int64_t x580 = 6023324756LL;
	int64_t t134 = -343052060LL;

    t134 = (((x577&x578)/x579)*x580);

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x582 = 1U;
	volatile int16_t x583 = 783;
	uint8_t x584 = 0U;
	static uint32_t t135 = 152296284U;

    t135 = (((x581&x582)/x583)*x584);

    if (t135 != 0U) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x585 = 2236167945902030LLU;
	int16_t x586 = 886;
	volatile int64_t x587 = -1LL;
	volatile uint64_t t136 = 28306420651492LLU;

    t136 = (((x585&x586)/x587)*x588);

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x589 = 1340162U;
	uint8_t x590 = 28U;
	int64_t x592 = INT64_MAX;
	static volatile int64_t t137 = -41608LL;

    t137 = (((x589&x590)/x591)*x592);

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x593 = INT16_MAX;
	int16_t x594 = -66;
	uint8_t x595 = UINT8_MAX;
	int64_t x596 = 32771131LL;
	static int64_t t138 = 372762435064LL;

    t138 = (((x593&x594)/x595)*x596);

    if (t138 != 4194704768LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x597 = 1170U;
	int64_t x598 = -1LL;
	uint8_t x599 = 3U;
	uint16_t x600 = 83U;

    t139 = (((x597&x598)/x599)*x600);

    if (t139 != 32370LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x601 = 9911;
	uint32_t x602 = UINT32_MAX;
	static uint16_t x603 = 6U;
	uint8_t x604 = 8U;
	uint32_t t140 = 508912157U;

    t140 = (((x601&x602)/x603)*x604);

    if (t140 != 13208U) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x605 = -13;
	int64_t x606 = 101LL;
	static int32_t x608 = -1;
	uint64_t t141 = 19485148032LLU;

    t141 = (((x605&x606)/x607)*x608);

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x609 = 0;
	uint32_t x610 = 905U;
	int64_t x611 = INT64_MIN;
	static int8_t x612 = -18;
	volatile int64_t t142 = 3458825544LL;

    t142 = (((x609&x610)/x611)*x612);

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x613 = UINT16_MAX;
	uint8_t x614 = 1U;
	int8_t x615 = INT8_MIN;
	int32_t x616 = -1;

    t143 = (((x613&x614)/x615)*x616);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x617 = UINT8_MAX;
	int8_t x618 = INT8_MIN;
	static uint64_t x619 = 2064154581052LLU;
	volatile int8_t x620 = INT8_MIN;
	uint64_t t144 = 112284478429164663LLU;

    t144 = (((x617&x618)/x619)*x620);

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x622 = INT64_MAX;
	int64_t x623 = INT64_MAX;
	int8_t x624 = -6;
	volatile int64_t t145 = 577095463554372073LL;

    t145 = (((x621&x622)/x623)*x624);

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint32_t x625 = 2538205U;
	static volatile int16_t x626 = -1;
	volatile uint8_t x627 = 103U;
	int8_t x628 = INT8_MAX;
	volatile uint32_t t146 = 266723U;

    t146 = (((x625&x626)/x627)*x628);

    if (t146 != 3129534U) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x630 = 22U;
	int32_t x631 = -1;
	volatile int64_t t147 = -984559236082062749LL;

    t147 = (((x629&x630)/x631)*x632);

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x634 = 308453152;
	static uint32_t x635 = 1U;
	static int16_t x636 = -1;

    t148 = (((x633&x634)/x635)*x636);

    if (t148 != 0U) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x641 = 4U;
	int16_t x642 = 170;
	static int64_t x643 = -1LL;
	uint8_t x644 = UINT8_MAX;
	static volatile int64_t t149 = 33LL;

    t149 = (((x641&x642)/x643)*x644);

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x646 = INT32_MIN;
	uint64_t x647 = 4019247440533875572LLU;
	int8_t x648 = INT8_MIN;
	volatile uint64_t t150 = 8581600128922809LLU;

    t150 = (((x645&x646)/x647)*x648);

    if (t150 != 18446744073709551104LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x650 = INT8_MAX;
	volatile uint16_t x652 = UINT16_MAX;
	volatile int64_t t151 = 4879011642456323LL;

    t151 = (((x649&x650)/x651)*x652);

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x653 = 0LL;
	static volatile int8_t x654 = -11;
	int32_t x655 = INT32_MIN;
	int16_t x656 = 687;
	static int64_t t152 = -208LL;

    t152 = (((x653&x654)/x655)*x656);

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x657 = 4;
	int8_t x658 = -29;
	volatile int64_t x659 = 44190418506173LL;
	static int32_t x660 = -1;
	int64_t t153 = 214340570802910LL;

    t153 = (((x657&x658)/x659)*x660);

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x661 = 0U;
	int32_t x663 = INT32_MAX;
	int64_t x664 = INT64_MIN;

    t154 = (((x661&x662)/x663)*x664);

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x665 = -1;
	int16_t x666 = -1;
	int64_t x667 = -1LL;
	volatile uint8_t x668 = 121U;

    t155 = (((x665&x666)/x667)*x668);

    if (t155 != 121LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x669 = 49;
	volatile int32_t x670 = 81998734;
	int32_t x671 = 820997462;
	volatile int32_t t156 = -387;

    t156 = (((x669&x670)/x671)*x672);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint32_t x673 = 921520080U;
	int64_t x674 = -1LL;
	int32_t x675 = INT32_MIN;
	volatile uint64_t t157 = 79035103LLU;

    t157 = (((x673&x674)/x675)*x676);

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int8_t x677 = INT8_MIN;
	volatile int8_t x678 = INT8_MAX;
	static int8_t x680 = -60;
	static int32_t t158 = 1023;

    t158 = (((x677&x678)/x679)*x680);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x681 = UINT64_MAX;
	uint16_t x683 = UINT16_MAX;
	int8_t x684 = INT8_MAX;
	volatile uint64_t t159 = 1705333824282LLU;

    t159 = (((x681&x682)/x683)*x684);

    if (t159 != 35747867511423103LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile uint64_t x685 = 437631887179285LLU;
	volatile uint64_t t160 = 2013906LLU;

    t160 = (((x685&x686)/x687)*x688);

    if (t160 != 0LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x693 = INT16_MAX;
	uint32_t x695 = UINT32_MAX;
	int8_t x696 = INT8_MIN;
	uint32_t t161 = 177698U;

    t161 = (((x693&x694)/x695)*x696);

    if (t161 != 0U) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x697 = INT8_MAX;
	uint8_t x698 = 5U;
	uint8_t x699 = 27U;
	static volatile int64_t x700 = INT64_MIN;
	volatile int64_t t162 = 123546852618LL;

    t162 = (((x697&x698)/x699)*x700);

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x701 = 413285965631666LL;
	uint32_t x702 = UINT32_MAX;
	int32_t x703 = INT32_MIN;
	static uint64_t x704 = UINT64_MAX;
	static uint64_t t163 = 27LLU;

    t163 = (((x701&x702)/x703)*x704);

    if (t163 != 1LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x705 = 30U;
	volatile int8_t x706 = INT8_MAX;
	int64_t x707 = 2256679918547289361LL;
	static volatile int32_t x708 = -1;
	int64_t t164 = 351097544LL;

    t164 = (((x705&x706)/x707)*x708);

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x709 = INT8_MIN;
	int64_t x710 = -1LL;
	uint16_t x711 = 1U;
	volatile uint8_t x712 = 101U;
	volatile int64_t t165 = 0LL;

    t165 = (((x709&x710)/x711)*x712);

    if (t165 != -12928LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x713 = INT32_MIN;
	volatile uint8_t x714 = UINT8_MAX;
	volatile int32_t x715 = INT32_MIN;
	int16_t x716 = INT16_MIN;
	int32_t t166 = -54280;

    t166 = (((x713&x714)/x715)*x716);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile int64_t x721 = INT64_MIN;
	int64_t x724 = INT64_MAX;
	int64_t t167 = 1LL;

    t167 = (((x721&x722)/x723)*x724);

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x725 = UINT32_MAX;
	static uint8_t x727 = UINT8_MAX;
	int8_t x728 = -4;
	uint32_t t168 = 2U;

    t168 = (((x725&x726)/x727)*x728);

    if (t168 != 4261281280U) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x730 = 261LLU;
	volatile uint64_t x731 = UINT64_MAX;
	volatile int16_t x732 = -37;
	volatile uint64_t t169 = 40LLU;

    t169 = (((x729&x730)/x731)*x732);

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static int64_t x733 = INT64_MAX;
	static volatile uint16_t x734 = 291U;
	static int8_t x735 = -1;
	uint32_t x736 = 3573U;
	volatile int64_t t170 = 110086808730LL;

    t170 = (((x733&x734)/x735)*x736);

    if (t170 != -1039743LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x737 = 157692U;
	int8_t x738 = INT8_MAX;
	static int8_t x739 = INT8_MAX;
	int32_t x740 = INT32_MIN;

    t171 = (((x737&x738)/x739)*x740);

    if (t171 != 0U) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x741 = INT64_MIN;
	int64_t x742 = INT64_MIN;
	static uint32_t x743 = 1U;
	int16_t x744 = 1;

    t172 = (((x741&x742)/x743)*x744);

    if (t172 != INT64_MIN) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint32_t x745 = UINT32_MAX;
	static int32_t x746 = INT32_MIN;
	static int32_t x747 = INT32_MAX;
	int16_t x748 = -9;

    t173 = (((x745&x746)/x747)*x748);

    if (t173 != 4294967287U) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint64_t x749 = 1052052010LLU;
	int32_t x750 = -135987;
	volatile int8_t x752 = 12;

    t174 = (((x749&x750)/x751)*x752);

    if (t174 != 0LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x753 = UINT8_MAX;
	int64_t x754 = 251882351LL;
	static volatile int32_t x755 = INT32_MAX;
	static int16_t x756 = INT16_MIN;
	int64_t t175 = -1505015LL;

    t175 = (((x753&x754)/x755)*x756);

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x757 = UINT64_MAX;
	int16_t x758 = -4405;
	static uint8_t x759 = 49U;
	static volatile int16_t x760 = -1;
	static volatile uint64_t t176 = 222676325LLU;

    t176 = (((x757&x758)/x759)*x760);

    if (t176 != 18070279908939969020LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x762 = -1986261640684LL;
	int8_t x763 = INT8_MIN;
	static uint16_t x764 = 8017U;
	int64_t t177 = 24543560LL;

    t177 = (((x761&x762)/x763)*x764);

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint16_t x765 = UINT16_MAX;
	int64_t x766 = INT64_MIN;
	static volatile int16_t x767 = 3857;
	int64_t x768 = INT64_MIN;
	volatile int64_t t178 = 0LL;

    t178 = (((x765&x766)/x767)*x768);

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint8_t x769 = 62U;
	volatile int16_t x770 = INT16_MAX;
	uint8_t x771 = 12U;
	volatile int32_t t179 = 284825;

    t179 = (((x769&x770)/x771)*x772);

    if (t179 != -640) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x773 = INT64_MIN;
	int8_t x775 = INT8_MIN;
	int8_t x776 = INT8_MIN;
	volatile int64_t t180 = INT64_MIN;

    t180 = (((x773&x774)/x775)*x776);

    if (t180 != INT64_MIN) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x778 = -15852;
	uint8_t x779 = 17U;
	volatile int32_t t181 = -865967;

    t181 = (((x777&x778)/x779)*x780);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x781 = 217LLU;
	int32_t x783 = INT32_MIN;
	int8_t x784 = INT8_MAX;
	static volatile uint64_t t182 = 48731921870LLU;

    t182 = (((x781&x782)/x783)*x784);

    if (t182 != 0LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int8_t x785 = -1;
	static volatile uint8_t x786 = 90U;
	volatile int32_t x787 = -12;
	uint8_t x788 = 98U;
	volatile int32_t t183 = -65541921;

    t183 = (((x785&x786)/x787)*x788);

    if (t183 != -686) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x789 = UINT64_MAX;
	int32_t x790 = 72681;
	volatile int8_t x791 = 3;
	int32_t x792 = -1;

    t184 = (((x789&x790)/x791)*x792);

    if (t184 != 18446744073709527389LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint16_t x793 = 12090U;
	uint64_t x794 = 1047LLU;
	volatile int64_t x796 = INT64_MAX;
	volatile uint64_t t185 = 1878711LLU;

    t185 = (((x793&x794)/x795)*x796);

    if (t185 != 9223372036854775805LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint64_t x799 = 99LLU;
	int16_t x800 = -1;
	volatile uint64_t t186 = 3317998674663549798LLU;

    t186 = (((x797&x798)/x799)*x800);

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x801 = UINT16_MAX;
	static uint32_t x802 = UINT32_MAX;
	volatile int8_t x804 = 17;
	volatile int64_t t187 = -4608763685715030422LL;

    t187 = (((x801&x802)/x803)*x804);

    if (t187 != -1114095LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x805 = 2;
	static uint64_t x807 = 34236301896898452LLU;
	int64_t x808 = -1LL;
	uint64_t t188 = 161472563261589218LLU;

    t188 = (((x805&x806)/x807)*x808);

    if (t188 != 0LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x809 = -1305;
	uint64_t x810 = 26559554532LLU;
	int8_t x811 = -3;
	static int64_t x812 = -1LL;
	uint64_t t189 = 8092484459LLU;

    t189 = (((x809&x810)/x811)*x812);

    if (t189 != 0LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x813 = -12LL;
	uint64_t x814 = UINT64_MAX;
	volatile uint8_t x815 = UINT8_MAX;
	uint32_t x816 = UINT32_MAX;
	volatile uint64_t t190 = 4LLU;

    t190 = (((x813&x814)/x815)*x816);

    if (t190 != 18446744069397741312LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x817 = INT8_MAX;
	int16_t x818 = INT16_MAX;
	uint16_t x819 = 2106U;
	int64_t x820 = -1LL;
	volatile int64_t t191 = 17261340377555LL;

    t191 = (((x817&x818)/x819)*x820);

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x822 = INT16_MIN;
	volatile int32_t x823 = -1;
	int64_t x824 = -434LL;
	static volatile uint64_t t192 = 8346414LLU;

    t192 = (((x821&x822)/x823)*x824);

    if (t192 != 0LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x825 = INT32_MAX;
	int8_t x827 = INT8_MIN;
	int32_t x828 = 573187023;
	int32_t t193 = -6893913;

    t193 = (((x825&x826)/x827)*x828);

    if (t193 != -573187023) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x830 = -497;
	static uint8_t x831 = 104U;
	uint64_t x832 = 1227562LLU;
	uint64_t t194 = 2055631565206446306LLU;

    t194 = (((x829&x830)/x831)*x832);

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x838 = INT16_MIN;
	uint64_t x840 = UINT64_MAX;
	static uint64_t t195 = 0LLU;

    t195 = (((x837&x838)/x839)*x840);

    if (t195 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x845 = INT8_MIN;
	int32_t x847 = INT32_MIN;
	static uint64_t x848 = 28806542268052LLU;

    t196 = (((x845&x846)/x847)*x848);

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x853 = -16;
	static int32_t x854 = 0;
	int8_t x855 = INT8_MIN;
	int8_t x856 = INT8_MIN;
	volatile int32_t t197 = 4;

    t197 = (((x853&x854)/x855)*x856);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint8_t x857 = 29U;
	static uint64_t x858 = 268454428963LLU;
	int32_t x859 = 30558;
	int8_t x860 = -2;
	volatile uint64_t t198 = 48951LLU;

    t198 = (((x857&x858)/x859)*x860);

    if (t198 != 0LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x861 = 24U;
	int8_t x862 = 1;
	volatile int32_t x863 = INT32_MIN;
	int8_t x864 = INT8_MIN;

    t199 = (((x861&x862)/x863)*x864);

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

