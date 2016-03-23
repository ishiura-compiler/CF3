
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

static volatile int8_t x5 = 1;
int64_t x16 = -1LL;
volatile int64_t x30 = -53724630LL;
int64_t x35 = -1LL;
volatile int8_t x37 = INT8_MAX;
int8_t x41 = 2;
static int64_t x43 = INT64_MAX;
int16_t x45 = INT16_MIN;
int32_t x48 = -1;
static uint8_t x53 = 3U;
volatile uint8_t x56 = 31U;
uint64_t x73 = 613011LLU;
static uint32_t x74 = 8056U;
volatile uint32_t x79 = 54816178U;
int32_t x83 = INT32_MAX;
int64_t x85 = INT64_MAX;
volatile int32_t x86 = INT32_MAX;
int32_t x88 = -1;
int64_t x98 = INT64_MAX;
int8_t x105 = INT8_MAX;
int8_t x112 = -10;
uint64_t t27 = 418221906380LLU;
int32_t x143 = 78589;
int64_t x144 = INT64_MIN;
static int64_t x150 = -1LL;
volatile int32_t t30 = 2020410;
int32_t x157 = -1;
volatile uint32_t x160 = UINT32_MAX;
int64_t x170 = INT64_MAX;
volatile int32_t x173 = 14452516;
static int8_t x177 = INT8_MAX;
int32_t t35 = 66746;
int32_t x199 = -1;
int8_t x204 = 1;
int32_t t39 = 3;
int64_t x206 = -1LL;
int64_t x209 = 191LL;
uint16_t x220 = 15635U;
volatile uint32_t x237 = 125U;
static uint8_t x238 = 2U;
int32_t x240 = -1;
int16_t x271 = 0;
int64_t x272 = -703557605033LL;
volatile int16_t x285 = INT16_MIN;
int8_t x286 = INT8_MIN;
int32_t t55 = 0;
static volatile uint32_t t56 = 46196U;
static volatile uint32_t t59 = 10U;
uint16_t x316 = 9U;
volatile int64_t x317 = INT64_MIN;
int16_t x318 = INT16_MIN;
uint64_t x319 = 97452413751831LLU;
int64_t x332 = INT64_MIN;
int16_t x346 = INT16_MIN;
static volatile int8_t x366 = -1;
int32_t x369 = 3426;
volatile int16_t x371 = 2418;
volatile int32_t t71 = 5;
volatile uint32_t t72 = 4180U;
uint8_t x380 = 2U;
static int64_t x389 = -1LL;
uint16_t x407 = 1819U;
volatile uint64_t x418 = 7LLU;
int64_t x419 = -109053890310903LL;
static volatile int64_t x427 = -1LL;
int32_t x439 = 124;
static volatile int32_t t85 = 30595498;
int8_t x445 = -1;
uint32_t x447 = UINT32_MAX;
uint8_t x453 = UINT8_MAX;
volatile int32_t t88 = -439;
static int32_t x465 = -1;
int64_t x466 = INT64_MAX;
static int32_t x468 = -986469;
volatile int64_t t90 = -461005179812202LL;
int8_t x479 = INT8_MAX;
volatile uint64_t t93 = 1967947556183114454LLU;
volatile int32_t x484 = INT32_MIN;
volatile int16_t x485 = -1;
uint32_t x488 = UINT32_MAX;
volatile uint32_t x498 = 487U;
volatile int64_t t99 = 2237265969311750LL;
volatile uint8_t x509 = 1U;
uint32_t x512 = 13666803U;
uint64_t t102 = 10488LLU;
int16_t x519 = INT16_MIN;
int16_t x526 = INT16_MIN;
volatile int32_t t106 = -87;
volatile int64_t t107 = -94910007530LL;
int64_t x542 = -1LL;
static uint64_t x543 = 15214312495634481LLU;
volatile uint32_t t110 = 48935575U;
static int64_t x550 = -1LL;
int32_t x553 = INT32_MIN;
int8_t x554 = INT8_MIN;
uint16_t x555 = UINT16_MAX;
static volatile int32_t t112 = 491;
static int8_t x559 = INT8_MAX;
static int64_t x561 = INT64_MAX;
int64_t x573 = INT64_MAX;
volatile int64_t x575 = INT64_MIN;
static int32_t x576 = INT32_MAX;
static int8_t x577 = -2;
int8_t x585 = -7;
static int64_t x591 = 13111LL;
uint16_t x592 = 0U;
volatile int32_t x593 = INT32_MIN;
int16_t x601 = 9536;
static int16_t x605 = -1;
volatile int8_t x607 = 57;
int16_t x613 = INT16_MAX;
volatile int8_t x614 = INT8_MIN;
static int32_t t124 = -9347;
static int64_t x626 = -97401948461687256LL;
volatile int64_t t127 = -114876283949LL;
int8_t x629 = INT8_MIN;
int64_t x642 = 4736142686LL;
uint64_t t130 = 862283850467957508LLU;
int16_t x645 = INT16_MAX;
int32_t x646 = 0;
volatile int64_t x647 = INT64_MIN;
int16_t x648 = INT16_MIN;
uint8_t x649 = 1U;
uint16_t x651 = 298U;
volatile int8_t x655 = INT8_MAX;
int16_t x657 = INT16_MAX;
static volatile int32_t t138 = -2643844;
int64_t x683 = INT64_MIN;
uint64_t x684 = 103492025075560LLU;
static int32_t x700 = INT32_MAX;
int8_t x703 = INT8_MIN;
static int64_t t145 = -10055672LL;
int8_t x716 = INT8_MIN;
int32_t x724 = -1;
int16_t x729 = -1;
uint32_t x730 = 28062U;
uint16_t x731 = 660U;
int64_t x733 = INT64_MIN;
volatile int64_t t151 = 1065189452LL;
int64_t t152 = -3571779LL;
int64_t x746 = INT64_MIN;
int8_t x750 = 3;
int8_t x752 = INT8_MIN;
static uint32_t x760 = 46443U;
int8_t x762 = INT8_MIN;
static uint8_t x764 = UINT8_MAX;
uint8_t x767 = 0U;
volatile int32_t t158 = 47;
int16_t x771 = INT16_MIN;
int32_t t159 = -1538;
volatile uint32_t x776 = 7039771U;
static volatile int64_t t162 = 0LL;
int16_t x793 = INT16_MIN;
volatile uint64_t t165 = 1037816145LLU;
int64_t x799 = -3015178LL;
uint64_t x809 = UINT64_MAX;
uint64_t t169 = 7215LLU;
int32_t x813 = -1;
int8_t x814 = 46;
int32_t x816 = -39345;
uint16_t x819 = 3196U;
int32_t x821 = 424316;
int16_t x822 = INT16_MAX;
uint64_t x823 = 648074012913220LLU;
uint64_t x828 = 66250147465LLU;
int64_t t173 = -71615267LL;
uint64_t x829 = 555229998163LLU;
int16_t x837 = INT16_MAX;
uint32_t t177 = 9344783U;
uint32_t x846 = 60911051U;
static volatile int8_t x851 = INT8_MIN;
volatile uint64_t x852 = 1471LLU;
volatile int64_t x854 = INT64_MAX;
volatile int64_t t180 = 94216LL;
uint64_t x859 = 120789261269LLU;
static int8_t x865 = -18;
static uint8_t x874 = 30U;
static int32_t x875 = INT32_MAX;
volatile int32_t t184 = 190407685;
uint16_t x883 = 26182U;
int16_t x891 = 21;
int32_t t187 = 800272;
int64_t x899 = -13141063635837LL;
static int16_t x906 = -1;
uint8_t x907 = 2U;
int16_t x916 = 129;
volatile int32_t t192 = -4259778;
static volatile int64_t x920 = 50889991041LL;
int64_t x922 = INT64_MAX;
int64_t t194 = 33784516770002486LL;
static int16_t x936 = INT16_MAX;
int16_t x940 = INT16_MIN;
int16_t x941 = 1;
static volatile int32_t t198 = 925745;


void f0(void) {
    	int8_t x6 = INT8_MIN;
	int16_t x7 = -1;
	int32_t x8 = -1;
	int32_t t0 = 18589;

    t0 = ((x5-x6)|(x7<=x8));

    if (t0 != 129) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x9 = -1;
	int8_t x10 = INT8_MAX;
	static int64_t x11 = INT64_MIN;
	int16_t x12 = 6605;
	static int32_t t1 = 40876;

    t1 = ((x9-x10)|(x11<=x12));

    if (t1 != -127) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x13 = INT16_MIN;
	uint64_t x14 = UINT64_MAX;
	volatile uint8_t x15 = 48U;
	volatile uint64_t t2 = 1125496998779535LLU;

    t2 = ((x13-x14)|(x15<=x16));

    if (t2 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x21 = -12;
	uint16_t x22 = 59U;
	int16_t x23 = INT16_MIN;
	static int64_t x24 = -509279LL;
	volatile int32_t t3 = -6728;

    t3 = ((x21-x22)|(x23<=x24));

    if (t3 != -71) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x25 = 80U;
	uint32_t x26 = 2618U;
	volatile int16_t x27 = -1;
	int32_t x28 = 283;
	static volatile uint32_t t4 = 747450488U;

    t4 = ((x25-x26)|(x27<=x28));

    if (t4 != 4294964759U) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x29 = -654098LL;
	int8_t x31 = INT8_MIN;
	uint32_t x32 = 3U;
	static volatile int64_t t5 = 154611319LL;

    t5 = ((x29-x30)|(x31<=x32));

    if (t5 != 53070532LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint64_t x33 = 3056056LLU;
	volatile int32_t x34 = -1;
	static int16_t x36 = -1;
	volatile uint64_t t6 = 7428021830962938694LLU;

    t6 = ((x33-x34)|(x35<=x36));

    if (t6 != 3056057LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x38 = -6;
	int32_t x39 = -1;
	uint64_t x40 = 776128LLU;
	static int32_t t7 = 75137;

    t7 = ((x37-x38)|(x39<=x40));

    if (t7 != 133) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x42 = 20;
	uint8_t x44 = 1U;
	static int32_t t8 = -611301037;

    t8 = ((x41-x42)|(x43<=x44));

    if (t8 != -18) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x46 = UINT64_MAX;
	int16_t x47 = -1857;
	volatile uint64_t t9 = 35780407874180251LLU;

    t9 = ((x45-x46)|(x47<=x48));

    if (t9 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint16_t x49 = UINT16_MAX;
	volatile uint64_t x50 = 11894267610516LLU;
	int16_t x51 = -1;
	static int16_t x52 = INT16_MAX;
	uint64_t t10 = 42243396640727LLU;

    t10 = ((x49-x50)|(x51<=x52));

    if (t10 != 18446732179442006635LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int64_t x54 = INT64_MAX;
	uint64_t x55 = UINT64_MAX;
	volatile int64_t t11 = 1016002711420LL;

    t11 = ((x53-x54)|(x55<=x56));

    if (t11 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int8_t x57 = INT8_MIN;
	int32_t x58 = INT32_MIN;
	uint64_t x59 = 333428419595387423LLU;
	uint8_t x60 = UINT8_MAX;
	int32_t t12 = -7784315;

    t12 = ((x57-x58)|(x59<=x60));

    if (t12 != 2147483520) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x65 = -2;
	static int32_t x66 = INT32_MIN;
	int16_t x67 = -337;
	static uint16_t x68 = UINT16_MAX;
	int32_t t13 = INT32_MAX;

    t13 = ((x65-x66)|(x67<=x68));

    if (t13 != INT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x69 = -1;
	int64_t x70 = -1LL;
	static uint32_t x71 = 449451441U;
	static volatile uint8_t x72 = 88U;
	static int64_t t14 = -22174930LL;

    t14 = ((x69-x70)|(x71<=x72));

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x75 = INT64_MIN;
	int8_t x76 = INT8_MAX;
	uint64_t t15 = 357371162850755820LLU;

    t15 = ((x73-x74)|(x75<=x76));

    if (t15 != 604955LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x77 = -46692LL;
	int16_t x78 = 0;
	uint64_t x80 = 1893859587617075LLU;
	volatile int64_t t16 = -1812367894381630LL;

    t16 = ((x77-x78)|(x79<=x80));

    if (t16 != -46691LL) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint16_t x81 = 12U;
	int16_t x82 = -5;
	int32_t x84 = -3133;
	static volatile int32_t t17 = 569021;

    t17 = ((x81-x82)|(x83<=x84));

    if (t17 != 17) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x87 = 13345599334LLU;
	volatile int64_t t18 = -2149682699596782079LL;

    t18 = ((x85-x86)|(x87<=x88));

    if (t18 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x93 = INT16_MIN;
	uint16_t x94 = UINT16_MAX;
	static int64_t x95 = INT64_MIN;
	int8_t x96 = -6;
	int32_t t19 = 98161307;

    t19 = ((x93-x94)|(x95<=x96));

    if (t19 != -98303) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x97 = INT64_MAX;
	int16_t x99 = INT16_MIN;
	uint64_t x100 = 3LLU;
	volatile int64_t t20 = 31389373LL;

    t20 = ((x97-x98)|(x99<=x100));

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x101 = INT8_MAX;
	uint32_t x102 = UINT32_MAX;
	int16_t x103 = 747;
	uint32_t x104 = 708671U;
	uint32_t t21 = 2302702U;

    t21 = ((x101-x102)|(x103<=x104));

    if (t21 != 129U) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint16_t x106 = UINT16_MAX;
	uint8_t x107 = 0U;
	int8_t x108 = -14;
	int32_t t22 = 41361628;

    t22 = ((x105-x106)|(x107<=x108));

    if (t22 != -65408) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x109 = 33865077845745410LL;
	uint32_t x110 = UINT32_MAX;
	volatile int64_t x111 = INT64_MIN;
	int64_t t23 = 1LL;

    t23 = ((x109-x110)|(x111<=x112));

    if (t23 != 33865073550778115LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x113 = -1;
	static int16_t x114 = -1;
	int8_t x115 = 0;
	int64_t x116 = INT64_MAX;
	int32_t t24 = 274;

    t24 = ((x113-x114)|(x115<=x116));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x117 = -1LL;
	uint32_t x118 = 182828557U;
	volatile int64_t x119 = 566455030446LL;
	int16_t x120 = 4041;
	volatile int64_t t25 = 630LL;

    t25 = ((x117-x118)|(x119<=x120));

    if (t25 != -182828558LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x129 = UINT32_MAX;
	int64_t x130 = INT64_MAX;
	static int64_t x131 = INT64_MAX;
	volatile int16_t x132 = INT16_MIN;
	volatile int64_t t26 = -803433932LL;

    t26 = ((x129-x130)|(x131<=x132));

    if (t26 != -9223372032559808512LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x137 = UINT32_MAX;
	uint64_t x138 = 76751572LLU;
	uint64_t x139 = UINT64_MAX;
	uint8_t x140 = 125U;

    t27 = ((x137-x138)|(x139<=x140));

    if (t27 != 4218215723LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x141 = 0U;
	static int64_t x142 = INT64_MAX;
	static int64_t t28 = -237203075163823006LL;

    t28 = ((x141-x142)|(x143<=x144));

    if (t28 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint32_t x149 = 129U;
	int64_t x151 = -1LL;
	int8_t x152 = -14;
	static volatile int64_t t29 = 278715598LL;

    t29 = ((x149-x150)|(x151<=x152));

    if (t29 != 130LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x153 = INT32_MIN;
	static int32_t x154 = -1;
	int16_t x155 = -1;
	uint64_t x156 = 5809023134287LLU;

    t30 = ((x153-x154)|(x155<=x156));

    if (t30 != -2147483647) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile int64_t x158 = 964633029771168750LL;
	volatile int32_t x159 = INT32_MAX;
	int64_t t31 = -12530604LL;

    t31 = ((x157-x158)|(x159<=x160));

    if (t31 != -964633029771168751LL) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint16_t x165 = 12U;
	static int32_t x166 = 56345956;
	int32_t x167 = INT32_MIN;
	static volatile uint32_t x168 = 730551U;
	int32_t t32 = -194950;

    t32 = ((x165-x166)|(x167<=x168));

    if (t32 != -56345944) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x169 = UINT8_MAX;
	static volatile int64_t x171 = INT64_MIN;
	int32_t x172 = -244889139;
	static volatile int64_t t33 = 918601147LL;

    t33 = ((x169-x170)|(x171<=x172));

    if (t33 != -9223372036854775551LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x174 = UINT32_MAX;
	static int8_t x175 = INT8_MAX;
	volatile int32_t x176 = 2735;
	volatile uint32_t t34 = 55239082U;

    t34 = ((x173-x174)|(x175<=x176));

    if (t34 != 14452517U) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x178 = 4;
	volatile int32_t x179 = -143826287;
	static uint16_t x180 = 119U;

    t35 = ((x177-x178)|(x179<=x180));

    if (t35 != 123) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x185 = 2LL;
	uint64_t x186 = 11954LLU;
	int16_t x187 = INT16_MIN;
	uint32_t x188 = 269U;
	static uint64_t t36 = 135858700LLU;

    t36 = ((x185-x186)|(x187<=x188));

    if (t36 != 18446744073709539664LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x189 = 53U;
	volatile uint8_t x190 = 1U;
	static uint8_t x191 = 0U;
	uint16_t x192 = 0U;
	int32_t t37 = -7435006;

    t37 = ((x189-x190)|(x191<=x192));

    if (t37 != 53) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint16_t x197 = 2U;
	int16_t x198 = -1;
	int32_t x200 = INT32_MAX;
	int32_t t38 = -1;

    t38 = ((x197-x198)|(x199<=x200));

    if (t38 != 3) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile uint16_t x201 = UINT16_MAX;
	int32_t x202 = INT32_MAX;
	static int16_t x203 = 1653;

    t39 = ((x201-x202)|(x203<=x204));

    if (t39 != -2147418112) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x205 = INT64_MIN;
	uint8_t x207 = UINT8_MAX;
	uint64_t x208 = 135000118035764468LLU;
	volatile int64_t t40 = 537123362886LL;

    t40 = ((x205-x206)|(x207<=x208));

    if (t40 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint32_t x210 = UINT32_MAX;
	int8_t x211 = INT8_MIN;
	static uint64_t x212 = 66372818135491924LLU;
	static int64_t t41 = 344393LL;

    t41 = ((x209-x210)|(x211<=x212));

    if (t41 != -4294967104LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x217 = -1LL;
	volatile uint8_t x218 = 4U;
	int16_t x219 = -1;
	int64_t t42 = 1464068171918LL;

    t42 = ((x217-x218)|(x219<=x220));

    if (t42 != -5LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x225 = INT8_MAX;
	static volatile int32_t x226 = -3059;
	uint64_t x227 = UINT64_MAX;
	volatile uint8_t x228 = 12U;
	int32_t t43 = 255;

    t43 = ((x225-x226)|(x227<=x228));

    if (t43 != 3186) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x229 = INT64_MAX;
	uint32_t x230 = 14U;
	volatile uint16_t x231 = 3U;
	uint32_t x232 = 28130921U;
	volatile int64_t t44 = -195536528LL;

    t44 = ((x229-x230)|(x231<=x232));

    if (t44 != 9223372036854775793LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int16_t x233 = INT16_MAX;
	uint8_t x234 = 10U;
	volatile int64_t x235 = INT64_MAX;
	uint32_t x236 = UINT32_MAX;
	volatile int32_t t45 = -149514423;

    t45 = ((x233-x234)|(x235<=x236));

    if (t45 != 32757) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x239 = -97;
	volatile uint32_t t46 = 683646U;

    t46 = ((x237-x238)|(x239<=x240));

    if (t46 != 123U) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x241 = -40;
	int16_t x242 = -8925;
	volatile int8_t x243 = INT8_MIN;
	volatile int32_t x244 = INT32_MIN;
	int32_t t47 = 976;

    t47 = ((x241-x242)|(x243<=x244));

    if (t47 != 8885) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x245 = -13116LL;
	uint8_t x246 = 11U;
	uint8_t x247 = 5U;
	int16_t x248 = -9;
	int64_t t48 = 6LL;

    t48 = ((x245-x246)|(x247<=x248));

    if (t48 != -13127LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x249 = 27995014U;
	uint64_t x250 = 96398989LLU;
	int32_t x251 = 2;
	int8_t x252 = INT8_MIN;
	volatile uint64_t t49 = 16528434879656LLU;

    t49 = ((x249-x250)|(x251<=x252));

    if (t49 != 18446744073641147641LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x253 = 5746913470LLU;
	int8_t x254 = INT8_MAX;
	int8_t x255 = INT8_MAX;
	static int32_t x256 = INT32_MIN;
	volatile uint64_t t50 = 97530LLU;

    t50 = ((x253-x254)|(x255<=x256));

    if (t50 != 5746913343LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x269 = INT32_MIN;
	int8_t x270 = INT8_MIN;
	volatile int32_t t51 = 17886;

    t51 = ((x269-x270)|(x271<=x272));

    if (t51 != -2147483520) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint32_t x273 = 4237U;
	int16_t x274 = INT16_MAX;
	uint16_t x275 = UINT16_MAX;
	int16_t x276 = INT16_MIN;
	volatile uint32_t t52 = 41117219U;

    t52 = ((x273-x274)|(x275<=x276));

    if (t52 != 4294938766U) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x277 = 5383U;
	volatile int64_t x278 = -1LL;
	volatile uint32_t x279 = 646U;
	uint8_t x280 = 18U;
	static volatile int64_t t53 = -3LL;

    t53 = ((x277-x278)|(x279<=x280));

    if (t53 != 5384LL) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x281 = -234;
	uint64_t x282 = UINT64_MAX;
	int16_t x283 = -918;
	static uint16_t x284 = 668U;
	volatile uint64_t t54 = 606793912977267LLU;

    t54 = ((x281-x282)|(x283<=x284));

    if (t54 != 18446744073709551383LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x287 = 3401602313LLU;
	int16_t x288 = INT16_MAX;

    t55 = ((x285-x286)|(x287<=x288));

    if (t55 != -32640) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x289 = 5;
	static uint32_t x290 = UINT32_MAX;
	int64_t x291 = INT64_MAX;
	uint32_t x292 = UINT32_MAX;

    t56 = ((x289-x290)|(x291<=x292));

    if (t56 != 6U) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint32_t x293 = 78767129U;
	int64_t x294 = 139451054LL;
	int16_t x295 = -1;
	int16_t x296 = INT16_MIN;
	int64_t t57 = 3616LL;

    t57 = ((x293-x294)|(x295<=x296));

    if (t57 != -60683925LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint8_t x301 = 64U;
	static int16_t x302 = INT16_MIN;
	static uint32_t x303 = UINT32_MAX;
	static uint8_t x304 = 3U;
	volatile int32_t t58 = -2960;

    t58 = ((x301-x302)|(x303<=x304));

    if (t58 != 32832) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x305 = 40114482U;
	volatile uint32_t x306 = 422U;
	int8_t x307 = 15;
	uint8_t x308 = UINT8_MAX;

    t59 = ((x305-x306)|(x307<=x308));

    if (t59 != 40114061U) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x309 = INT16_MIN;
	volatile int32_t x310 = 23553361;
	int8_t x311 = -6;
	int64_t x312 = INT64_MAX;
	volatile int32_t t60 = -1;

    t60 = ((x309-x310)|(x311<=x312));

    if (t60 != -23586129) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x313 = -1;
	uint64_t x314 = 64936447221791974LLU;
	uint64_t x315 = UINT64_MAX;
	static volatile uint64_t t61 = 2943LLU;

    t61 = ((x313-x314)|(x315<=x316));

    if (t61 != 18381807626487759641LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x320 = INT8_MIN;
	volatile int64_t t62 = 21468616LL;

    t62 = ((x317-x318)|(x319<=x320));

    if (t62 != -9223372036854743039LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x321 = -159;
	volatile uint8_t x322 = 102U;
	uint64_t x323 = 628LLU;
	volatile int8_t x324 = INT8_MIN;
	static volatile int32_t t63 = -22;

    t63 = ((x321-x322)|(x323<=x324));

    if (t63 != -261) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x329 = INT32_MAX;
	uint16_t x330 = 1U;
	int8_t x331 = INT8_MIN;
	int32_t t64 = -225;

    t64 = ((x329-x330)|(x331<=x332));

    if (t64 != 2147483646) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x333 = 13;
	int32_t x334 = INT32_MAX;
	volatile uint8_t x335 = UINT8_MAX;
	int8_t x336 = -1;
	volatile int32_t t65 = -3432;

    t65 = ((x333-x334)|(x335<=x336));

    if (t65 != -2147483634) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x337 = 14032U;
	int64_t x338 = -14LL;
	uint64_t x339 = 339975998571387LLU;
	uint8_t x340 = 81U;
	int64_t t66 = -10591194566132LL;

    t66 = ((x337-x338)|(x339<=x340));

    if (t66 != 14046LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x341 = 2;
	uint8_t x342 = UINT8_MAX;
	uint8_t x343 = 11U;
	static uint64_t x344 = 12205962LLU;
	int32_t t67 = -385;

    t67 = ((x341-x342)|(x343<=x344));

    if (t67 != -253) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x345 = 60126921080388720LL;
	int8_t x347 = -5;
	int64_t x348 = INT64_MIN;
	static int64_t t68 = 1LL;

    t68 = ((x345-x346)|(x347<=x348));

    if (t68 != 60126921080421488LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x357 = INT16_MIN;
	uint32_t x358 = UINT32_MAX;
	int32_t x359 = INT32_MIN;
	uint16_t x360 = UINT16_MAX;
	uint32_t t69 = 97575U;

    t69 = ((x357-x358)|(x359<=x360));

    if (t69 != 4294934529U) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile int32_t x365 = INT32_MIN;
	volatile uint8_t x367 = UINT8_MAX;
	int32_t x368 = INT32_MIN;
	int32_t t70 = -2006;

    t70 = ((x365-x366)|(x367<=x368));

    if (t70 != -2147483647) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint16_t x370 = 11U;
	uint8_t x372 = 92U;

    t71 = ((x369-x370)|(x371<=x372));

    if (t71 != 3415) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x373 = INT8_MIN;
	static uint32_t x374 = 11951519U;
	uint32_t x375 = 0U;
	uint64_t x376 = UINT64_MAX;

    t72 = ((x373-x374)|(x375<=x376));

    if (t72 != 4283015649U) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x377 = INT16_MIN;
	int16_t x378 = 2;
	uint8_t x379 = 0U;
	int32_t t73 = 190368;

    t73 = ((x377-x378)|(x379<=x380));

    if (t73 != -32769) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x390 = 983U;
	int16_t x391 = INT16_MAX;
	uint8_t x392 = 3U;
	int64_t t74 = 10354LL;

    t74 = ((x389-x390)|(x391<=x392));

    if (t74 != -984LL) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x393 = INT64_MIN;
	static uint64_t x394 = UINT64_MAX;
	static uint8_t x395 = 1U;
	static int64_t x396 = -1LL;
	static uint64_t t75 = 1739730145769LLU;

    t75 = ((x393-x394)|(x395<=x396));

    if (t75 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint32_t x397 = 24U;
	int32_t x398 = INT32_MIN;
	int32_t x399 = -1;
	int32_t x400 = INT32_MIN;
	uint32_t t76 = 0U;

    t76 = ((x397-x398)|(x399<=x400));

    if (t76 != 2147483672U) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x405 = -1;
	int8_t x406 = INT8_MIN;
	volatile int8_t x408 = -7;
	int32_t t77 = 555809;

    t77 = ((x405-x406)|(x407<=x408));

    if (t77 != 127) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x409 = UINT8_MAX;
	static int64_t x410 = 122678420216LL;
	volatile int32_t x411 = -494650170;
	static volatile uint32_t x412 = 141053U;
	int64_t t78 = -112969LL;

    t78 = ((x409-x410)|(x411<=x412));

    if (t78 != -122678419961LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x413 = 368LLU;
	static uint8_t x414 = 39U;
	int64_t x415 = INT64_MAX;
	int16_t x416 = INT16_MIN;
	uint64_t t79 = 878264297110LLU;

    t79 = ((x413-x414)|(x415<=x416));

    if (t79 != 329LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x417 = INT16_MIN;
	volatile int8_t x420 = INT8_MIN;
	volatile uint64_t t80 = 4143093140874855LLU;

    t80 = ((x417-x418)|(x419<=x420));

    if (t80 != 18446744073709518841LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x425 = INT16_MIN;
	static uint32_t x426 = UINT32_MAX;
	uint64_t x428 = UINT64_MAX;
	volatile uint32_t t81 = 36207U;

    t81 = ((x425-x426)|(x427<=x428));

    if (t81 != 4294934529U) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x429 = 5LLU;
	static int16_t x430 = INT16_MAX;
	int32_t x431 = INT32_MIN;
	static int64_t x432 = -374045289583080LL;
	volatile uint64_t t82 = 31391689678164774LLU;

    t82 = ((x429-x430)|(x431<=x432));

    if (t82 != 18446744073709518854LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x433 = INT8_MIN;
	uint16_t x434 = UINT16_MAX;
	volatile int16_t x435 = 11;
	volatile int32_t x436 = 6;
	int32_t t83 = -1;

    t83 = ((x433-x434)|(x435<=x436));

    if (t83 != -65663) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x437 = -1;
	uint32_t x438 = 32183938U;
	int32_t x440 = INT32_MAX;
	static volatile uint32_t t84 = 6U;

    t84 = ((x437-x438)|(x439<=x440));

    if (t84 != 4262783357U) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x441 = -1;
	volatile int32_t x442 = -3974;
	uint32_t x443 = UINT32_MAX;
	int16_t x444 = INT16_MIN;

    t85 = ((x441-x442)|(x443<=x444));

    if (t85 != 3973) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x446 = UINT64_MAX;
	static uint8_t x448 = UINT8_MAX;
	uint64_t t86 = 1LLU;

    t86 = ((x445-x446)|(x447<=x448));

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x449 = INT32_MAX;
	uint16_t x450 = 5749U;
	static int8_t x451 = INT8_MIN;
	int8_t x452 = INT8_MIN;
	int32_t t87 = -701304;

    t87 = ((x449-x450)|(x451<=x452));

    if (t87 != 2147477899) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x454 = 57U;
	int16_t x455 = -1;
	int32_t x456 = 6704222;

    t88 = ((x453-x454)|(x455<=x456));

    if (t88 != 199) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x461 = UINT16_MAX;
	volatile int64_t x462 = -1825101863535450LL;
	static int8_t x463 = INT8_MAX;
	int16_t x464 = INT16_MIN;
	volatile int64_t t89 = 1028274016LL;

    t89 = ((x461-x462)|(x463<=x464));

    if (t89 != 1825101863600985LL) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x467 = INT64_MIN;

    t90 = ((x465-x466)|(x467<=x468));

    if (t90 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint8_t x469 = 24U;
	int32_t x470 = INT32_MAX;
	int64_t x471 = INT64_MIN;
	int32_t x472 = -1;
	volatile int32_t t91 = 85410;

    t91 = ((x469-x470)|(x471<=x472));

    if (t91 != -2147483623) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x473 = 14467435LLU;
	int32_t x474 = -1;
	volatile int8_t x475 = 1;
	volatile int64_t x476 = 383474514881306LL;
	uint64_t t92 = 70311477863739LLU;

    t92 = ((x473-x474)|(x475<=x476));

    if (t92 != 14467437LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x477 = INT64_MIN;
	uint64_t x478 = UINT64_MAX;
	uint16_t x480 = 24726U;

    t93 = ((x477-x478)|(x479<=x480));

    if (t93 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t x481 = INT64_MIN;
	int16_t x482 = INT16_MIN;
	volatile int8_t x483 = INT8_MIN;
	int64_t t94 = 11368LL;

    t94 = ((x481-x482)|(x483<=x484));

    if (t94 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x486 = INT64_MAX;
	int32_t x487 = -1;
	volatile int64_t t95 = -38851360510LL;

    t95 = ((x485-x486)|(x487<=x488));

    if (t95 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x489 = INT16_MIN;
	static int8_t x490 = 0;
	uint8_t x491 = 1U;
	uint64_t x492 = 498454LLU;
	volatile int32_t t96 = -8031434;

    t96 = ((x489-x490)|(x491<=x492));

    if (t96 != -32767) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x493 = -91;
	int8_t x494 = -1;
	int64_t x495 = 2LL;
	int8_t x496 = 1;
	volatile int32_t t97 = -5;

    t97 = ((x493-x494)|(x495<=x496));

    if (t97 != -90) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint8_t x497 = 15U;
	int32_t x499 = INT32_MAX;
	static int8_t x500 = INT8_MAX;
	uint32_t t98 = 61854U;

    t98 = ((x497-x498)|(x499<=x500));

    if (t98 != 4294966824U) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x501 = -1LL;
	uint8_t x502 = UINT8_MAX;
	int64_t x503 = INT64_MIN;
	int16_t x504 = INT16_MIN;

    t99 = ((x501-x502)|(x503<=x504));

    if (t99 != -255LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x505 = INT32_MIN;
	int32_t x506 = -54924;
	uint16_t x507 = 358U;
	static int8_t x508 = INT8_MAX;
	int32_t t100 = 34812228;

    t100 = ((x505-x506)|(x507<=x508));

    if (t100 != -2147428724) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x510 = INT64_MAX;
	int16_t x511 = 1;
	volatile int64_t t101 = -100691171752605886LL;

    t101 = ((x509-x510)|(x511<=x512));

    if (t101 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint16_t x513 = 102U;
	uint64_t x514 = 295253264664564547LLU;
	uint8_t x515 = 29U;
	uint16_t x516 = 3791U;

    t102 = ((x513-x514)|(x515<=x516));

    if (t102 != 18151490809044987171LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x517 = INT8_MIN;
	uint64_t x518 = 985820185104LLU;
	static int8_t x520 = INT8_MIN;
	uint64_t t103 = 90869427424592898LLU;

    t103 = ((x517-x518)|(x519<=x520));

    if (t103 != 18446743087889366385LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x521 = -1;
	uint8_t x522 = 0U;
	volatile int64_t x523 = 137107515010965520LL;
	int64_t x524 = INT64_MIN;
	int32_t t104 = -7478;

    t104 = ((x521-x522)|(x523<=x524));

    if (t104 != -1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint32_t x525 = UINT32_MAX;
	volatile int64_t x527 = INT64_MIN;
	int16_t x528 = INT16_MIN;
	volatile uint32_t t105 = 749047U;

    t105 = ((x525-x526)|(x527<=x528));

    if (t105 != 32767U) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x529 = UINT8_MAX;
	uint16_t x530 = 17492U;
	int64_t x531 = -1LL;
	volatile int64_t x532 = 8063749722816860LL;

    t106 = ((x529-x530)|(x531<=x532));

    if (t106 != -17237) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x533 = -1LL;
	int32_t x534 = -1;
	int64_t x535 = INT64_MIN;
	uint64_t x536 = 1LLU;

    t107 = ((x533-x534)|(x535<=x536));

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x537 = INT32_MIN;
	static int16_t x538 = -1;
	uint32_t x539 = 31364619U;
	int16_t x540 = INT16_MIN;
	volatile int32_t t108 = 53;

    t108 = ((x537-x538)|(x539<=x540));

    if (t108 != -2147483647) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x541 = -1;
	static int64_t x544 = INT64_MIN;
	int64_t t109 = -14LL;

    t109 = ((x541-x542)|(x543<=x544));

    if (t109 != 1LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x545 = 2U;
	int32_t x546 = -1060422122;
	int64_t x547 = -1LL;
	int16_t x548 = 26;

    t110 = ((x545-x546)|(x547<=x548));

    if (t110 != 1060422125U) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x549 = UINT32_MAX;
	static uint32_t x551 = 11540245U;
	static int32_t x552 = INT32_MIN;
	static volatile int64_t t111 = 0LL;

    t111 = ((x549-x550)|(x551<=x552));

    if (t111 != 4294967297LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static int64_t x556 = INT64_MIN;

    t112 = ((x553-x554)|(x555<=x556));

    if (t112 != -2147483520) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x557 = 28U;
	uint16_t x558 = 0U;
	volatile int16_t x560 = INT16_MIN;
	static volatile int32_t t113 = 75359;

    t113 = ((x557-x558)|(x559<=x560));

    if (t113 != 28) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint32_t x562 = 347U;
	static int16_t x563 = INT16_MIN;
	static volatile uint64_t x564 = UINT64_MAX;
	int64_t t114 = -218LL;

    t114 = ((x561-x562)|(x563<=x564));

    if (t114 != 9223372036854775461LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x565 = INT8_MIN;
	uint32_t x566 = UINT32_MAX;
	int64_t x567 = -1LL;
	uint8_t x568 = UINT8_MAX;
	uint32_t t115 = 372478425U;

    t115 = ((x565-x566)|(x567<=x568));

    if (t115 != 4294967169U) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x569 = -20;
	int64_t x570 = INT64_MIN;
	int16_t x571 = -55;
	static int32_t x572 = -1;
	volatile int64_t t116 = -1866347777018428787LL;

    t116 = ((x569-x570)|(x571<=x572));

    if (t116 != 9223372036854775789LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x574 = 15;
	static int64_t t117 = -2251258436650513LL;

    t117 = ((x573-x574)|(x575<=x576));

    if (t117 != 9223372036854775793LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x578 = 131U;
	uint16_t x579 = 55U;
	int32_t x580 = INT32_MIN;
	int32_t t118 = -8;

    t118 = ((x577-x578)|(x579<=x580));

    if (t118 != -133) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x586 = 67U;
	volatile uint16_t x587 = 6U;
	int16_t x588 = INT16_MIN;
	volatile int32_t t119 = -261378441;

    t119 = ((x585-x586)|(x587<=x588));

    if (t119 != -74) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x589 = -1LL;
	static int64_t x590 = INT64_MIN;
	volatile int64_t t120 = INT64_MAX;

    t120 = ((x589-x590)|(x591<=x592));

    if (t120 != INT64_MAX) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x594 = -1;
	uint8_t x595 = 5U;
	static int64_t x596 = -3473403LL;
	volatile int32_t t121 = -3;

    t121 = ((x593-x594)|(x595<=x596));

    if (t121 != -2147483647) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x602 = -1;
	static int64_t x603 = INT64_MIN;
	uint64_t x604 = 1051654882477252030LLU;
	volatile int32_t t122 = 14;

    t122 = ((x601-x602)|(x603<=x604));

    if (t122 != 9537) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint64_t x606 = 40925104361LLU;
	int64_t x608 = INT64_MAX;
	volatile uint64_t t123 = 1LLU;

    t123 = ((x605-x606)|(x607<=x608));

    if (t123 != 18446744032784447255LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x615 = 56;
	static uint16_t x616 = UINT16_MAX;

    t124 = ((x613-x614)|(x615<=x616));

    if (t124 != 32895) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x617 = 443;
	volatile int16_t x618 = INT16_MAX;
	static uint8_t x619 = 1U;
	uint64_t x620 = UINT64_MAX;
	int32_t t125 = 56389335;

    t125 = ((x617-x618)|(x619<=x620));

    if (t125 != -32323) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x621 = 47;
	int8_t x622 = INT8_MIN;
	volatile uint64_t x623 = 2220591653597631LLU;
	volatile int32_t x624 = INT32_MIN;
	int32_t t126 = 497430007;

    t126 = ((x621-x622)|(x623<=x624));

    if (t126 != 175) { NG(); } else { ; }
	
}

void f127(void) {
    	static int16_t x625 = INT16_MAX;
	static int16_t x627 = 933;
	uint64_t x628 = 1035LLU;

    t127 = ((x625-x626)|(x627<=x628));

    if (t127 != 97401948461720023LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x630 = INT64_MIN;
	int32_t x631 = -1;
	uint8_t x632 = 0U;
	static int64_t t128 = -47328750588654LL;

    t128 = ((x629-x630)|(x631<=x632));

    if (t128 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x637 = INT32_MAX;
	volatile uint64_t x638 = 1506LLU;
	int16_t x639 = -66;
	uint32_t x640 = 3845702U;
	static uint64_t t129 = 78473LLU;

    t129 = ((x637-x638)|(x639<=x640));

    if (t129 != 2147482141LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x641 = UINT64_MAX;
	volatile uint8_t x643 = UINT8_MAX;
	uint16_t x644 = UINT16_MAX;

    t130 = ((x641-x642)|(x643<=x644));

    if (t130 != 18446744068973408929LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t t131 = -280308;

    t131 = ((x645-x646)|(x647<=x648));

    if (t131 != 32767) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x650 = 7U;
	int16_t x652 = INT16_MIN;
	static int32_t t132 = -3440;

    t132 = ((x649-x650)|(x651<=x652));

    if (t132 != -6) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x653 = UINT32_MAX;
	volatile int16_t x654 = -1;
	int32_t x656 = -1;
	uint32_t t133 = 247U;

    t133 = ((x653-x654)|(x655<=x656));

    if (t133 != 0U) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x658 = INT64_MAX;
	int64_t x659 = -1LL;
	int8_t x660 = -1;
	int64_t t134 = -223LL;

    t134 = ((x657-x658)|(x659<=x660));

    if (t134 != -9223372036854743039LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x665 = INT32_MAX;
	uint16_t x666 = 496U;
	static uint16_t x667 = 574U;
	volatile int64_t x668 = INT64_MIN;
	static int32_t t135 = -546;

    t135 = ((x665-x666)|(x667<=x668));

    if (t135 != 2147483151) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x669 = INT64_MAX;
	uint16_t x670 = 1989U;
	volatile int8_t x671 = INT8_MIN;
	int32_t x672 = 0;
	int64_t t136 = -6365002091673740LL;

    t136 = ((x669-x670)|(x671<=x672));

    if (t136 != 9223372036854773819LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x673 = 1;
	int16_t x674 = -1;
	static uint8_t x675 = 74U;
	static volatile int16_t x676 = 2605;
	int32_t t137 = -151;

    t137 = ((x673-x674)|(x675<=x676));

    if (t137 != 3) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x677 = INT8_MAX;
	static int32_t x678 = INT32_MAX;
	volatile uint32_t x679 = 2917U;
	uint64_t x680 = 311769081LLU;

    t138 = ((x677-x678)|(x679<=x680));

    if (t138 != -2147483519) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x681 = 2U;
	uint32_t x682 = 787549U;
	static volatile uint32_t t139 = 1U;

    t139 = ((x681-x682)|(x683<=x684));

    if (t139 != 4294179749U) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x685 = UINT64_MAX;
	int8_t x686 = INT8_MIN;
	static uint8_t x687 = 3U;
	int8_t x688 = INT8_MIN;
	uint64_t t140 = 2491945LLU;

    t140 = ((x685-x686)|(x687<=x688));

    if (t140 != 127LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x689 = INT16_MIN;
	int16_t x690 = INT16_MAX;
	int8_t x691 = INT8_MIN;
	uint64_t x692 = UINT64_MAX;
	static int32_t t141 = 1399885;

    t141 = ((x689-x690)|(x691<=x692));

    if (t141 != -65535) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x693 = INT16_MIN;
	int8_t x694 = INT8_MIN;
	uint64_t x695 = UINT64_MAX;
	int8_t x696 = -1;
	static volatile int32_t t142 = -60;

    t142 = ((x693-x694)|(x695<=x696));

    if (t142 != -32639) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x697 = INT64_MIN;
	volatile int16_t x698 = -550;
	volatile int16_t x699 = INT16_MIN;
	volatile int64_t t143 = -23359806585300165LL;

    t143 = ((x697-x698)|(x699<=x700));

    if (t143 != -9223372036854775257LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x701 = 48U;
	static uint16_t x702 = UINT16_MAX;
	int16_t x704 = INT16_MIN;
	volatile int32_t t144 = -14413;

    t144 = ((x701-x702)|(x703<=x704));

    if (t144 != -65487) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x705 = INT64_MAX;
	volatile int64_t x706 = 1655LL;
	int16_t x707 = -1;
	uint64_t x708 = 667LLU;

    t145 = ((x705-x706)|(x707<=x708));

    if (t145 != 9223372036854774152LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x709 = 3U;
	int64_t x710 = -8244832505LL;
	int64_t x711 = INT64_MIN;
	static int32_t x712 = INT32_MIN;
	static volatile int64_t t146 = 9254LL;

    t146 = ((x709-x710)|(x711<=x712));

    if (t146 != 8244832509LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint16_t x713 = UINT16_MAX;
	static int8_t x714 = -1;
	int16_t x715 = INT16_MAX;
	int32_t t147 = 0;

    t147 = ((x713-x714)|(x715<=x716));

    if (t147 != 65536) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x717 = 1454U;
	int16_t x718 = INT16_MAX;
	int8_t x719 = -1;
	int32_t x720 = INT32_MAX;
	int32_t t148 = 8044;

    t148 = ((x717-x718)|(x719<=x720));

    if (t148 != -31313) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x721 = -129;
	int32_t x722 = INT32_MIN;
	int8_t x723 = -1;
	static volatile int32_t t149 = 80638223;

    t149 = ((x721-x722)|(x723<=x724));

    if (t149 != 2147483519) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x732 = 5955U;
	volatile uint32_t t150 = 4439154U;

    t150 = ((x729-x730)|(x731<=x732));

    if (t150 != 4294939233U) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x734 = -16546079194227LL;
	volatile int32_t x735 = 13;
	int64_t x736 = -1LL;

    t151 = ((x733-x734)|(x735<=x736));

    if (t151 != -9223355490775581581LL) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x741 = -4LL;
	int32_t x742 = INT32_MAX;
	static uint64_t x743 = 251074257LLU;
	int8_t x744 = INT8_MIN;

    t152 = ((x741-x742)|(x743<=x744));

    if (t152 != -2147483651LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x745 = -1;
	uint8_t x747 = 0U;
	int8_t x748 = INT8_MAX;
	int64_t t153 = INT64_MAX;

    t153 = ((x745-x746)|(x747<=x748));

    if (t153 != INT64_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x749 = 8941481U;
	uint64_t x751 = 3822837LLU;
	uint32_t t154 = 369U;

    t154 = ((x749-x750)|(x751<=x752));

    if (t154 != 8941479U) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x753 = INT64_MAX;
	int32_t x754 = INT32_MAX;
	uint8_t x755 = UINT8_MAX;
	static volatile int32_t x756 = INT32_MAX;
	int64_t t155 = -13829228231LL;

    t155 = ((x753-x754)|(x755<=x756));

    if (t155 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x757 = INT8_MIN;
	static int8_t x758 = 0;
	volatile int32_t x759 = -1;
	int32_t t156 = 28;

    t156 = ((x757-x758)|(x759<=x760));

    if (t156 != -128) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x761 = 33401834599444558LLU;
	int8_t x763 = 12;
	volatile uint64_t t157 = 53162209377LLU;

    t157 = ((x761-x762)|(x763<=x764));

    if (t157 != 33401834599444687LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static int16_t x765 = 1692;
	uint16_t x766 = 3U;
	uint8_t x768 = 0U;

    t158 = ((x765-x766)|(x767<=x768));

    if (t158 != 1689) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x769 = -1;
	uint8_t x770 = 0U;
	int16_t x772 = -1;

    t159 = ((x769-x770)|(x771<=x772));

    if (t159 != -1) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x773 = INT16_MIN;
	int32_t x774 = -1;
	uint32_t x775 = UINT32_MAX;
	static int32_t t160 = -10437;

    t160 = ((x773-x774)|(x775<=x776));

    if (t160 != -32767) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x777 = 0;
	int32_t x778 = 21801941;
	static int8_t x779 = INT8_MIN;
	int64_t x780 = INT64_MIN;
	volatile int32_t t161 = 7273903;

    t161 = ((x777-x778)|(x779<=x780));

    if (t161 != -21801941) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x781 = UINT32_MAX;
	int64_t x782 = -91495257094LL;
	static volatile int64_t x783 = -15646LL;
	uint16_t x784 = 7786U;

    t162 = ((x781-x782)|(x783<=x784));

    if (t162 != 95790224389LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x785 = UINT16_MAX;
	int64_t x786 = 9109222906875LL;
	uint16_t x787 = 2308U;
	static int8_t x788 = INT8_MIN;
	int64_t t163 = 14511520LL;

    t163 = ((x785-x786)|(x787<=x788));

    if (t163 != -9109222841340LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x789 = INT16_MAX;
	int32_t x790 = 300;
	uint8_t x791 = UINT8_MAX;
	volatile int8_t x792 = INT8_MAX;
	volatile int32_t t164 = -3323214;

    t164 = ((x789-x790)|(x791<=x792));

    if (t164 != 32467) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint64_t x794 = 3347097724LLU;
	int32_t x795 = INT32_MIN;
	int32_t x796 = 15;

    t165 = ((x793-x794)|(x795<=x796));

    if (t165 != 18446744070362421125LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x797 = 0U;
	int64_t x798 = -64312679834569LL;
	uint8_t x800 = 25U;
	static volatile int64_t t166 = 1374803642LL;

    t166 = ((x797-x798)|(x799<=x800));

    if (t166 != 64312679834569LL) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint8_t x801 = UINT8_MAX;
	volatile int32_t x802 = -1;
	uint8_t x803 = 30U;
	int32_t x804 = -1920598;
	int32_t t167 = 348932;

    t167 = ((x801-x802)|(x803<=x804));

    if (t167 != 256) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x805 = -1LL;
	uint16_t x806 = UINT16_MAX;
	uint16_t x807 = 0U;
	static volatile int8_t x808 = INT8_MIN;
	static volatile int64_t t168 = -1738428524675226203LL;

    t168 = ((x805-x806)|(x807<=x808));

    if (t168 != -65536LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x810 = INT32_MIN;
	int16_t x811 = -1;
	int8_t x812 = 59;

    t169 = ((x809-x810)|(x811<=x812));

    if (t169 != 2147483647LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x815 = INT64_MIN;
	int32_t t170 = 1;

    t170 = ((x813-x814)|(x815<=x816));

    if (t170 != -47) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int8_t x817 = INT8_MIN;
	uint32_t x818 = 496U;
	uint16_t x820 = UINT16_MAX;
	uint32_t t171 = 1839631805U;

    t171 = ((x817-x818)|(x819<=x820));

    if (t171 != 4294966673U) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x824 = 476185LL;
	int32_t t172 = -3319;

    t172 = ((x821-x822)|(x823<=x824));

    if (t172 != 391549) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x825 = INT64_MIN;
	static int8_t x826 = INT8_MIN;
	static int32_t x827 = 149760;

    t173 = ((x825-x826)|(x827<=x828));

    if (t173 != -9223372036854775679LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x830 = INT16_MAX;
	int8_t x831 = -1;
	int16_t x832 = INT16_MIN;
	uint64_t t174 = 15284960080LLU;

    t174 = ((x829-x830)|(x831<=x832));

    if (t174 != 555229965396LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x833 = INT8_MAX;
	int16_t x834 = INT16_MAX;
	static volatile int64_t x835 = -1LL;
	int32_t x836 = -24715;
	static volatile int32_t t175 = -305875;

    t175 = ((x833-x834)|(x835<=x836));

    if (t175 != -32640) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x838 = UINT64_MAX;
	volatile int8_t x839 = -2;
	static int8_t x840 = INT8_MIN;
	uint64_t t176 = 24LLU;

    t176 = ((x837-x838)|(x839<=x840));

    if (t176 != 32768LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint32_t x841 = 201362328U;
	int32_t x842 = INT32_MIN;
	int32_t x843 = INT32_MAX;
	int64_t x844 = -1LL;

    t177 = ((x841-x842)|(x843<=x844));

    if (t177 != 2348845976U) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x845 = -6824;
	int32_t x847 = INT32_MIN;
	int8_t x848 = INT8_MIN;
	volatile uint32_t t178 = 7134U;

    t178 = ((x845-x846)|(x847<=x848));

    if (t178 != 4234049421U) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x849 = -1;
	int16_t x850 = -1;
	static int32_t t179 = -36706;

    t179 = ((x849-x850)|(x851<=x852));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x853 = INT16_MAX;
	uint64_t x855 = 50971348825838LLU;
	int16_t x856 = -1;

    t180 = ((x853-x854)|(x855<=x856));

    if (t180 != -9223372036854743039LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x857 = INT8_MAX;
	volatile int16_t x858 = INT16_MIN;
	volatile int16_t x860 = INT16_MIN;
	int32_t t181 = 73;

    t181 = ((x857-x858)|(x859<=x860));

    if (t181 != 32895) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x866 = 274530526334905567LL;
	int8_t x867 = 0;
	int8_t x868 = INT8_MAX;
	static int64_t t182 = -15735LL;

    t182 = ((x865-x866)|(x867<=x868));

    if (t182 != -274530526334905585LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x869 = INT32_MAX;
	static uint64_t x870 = UINT64_MAX;
	int32_t x871 = -291699;
	int64_t x872 = INT64_MAX;
	volatile uint64_t t183 = 6779LLU;

    t183 = ((x869-x870)|(x871<=x872));

    if (t183 != 2147483649LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint16_t x873 = 3705U;
	int16_t x876 = INT16_MAX;

    t184 = ((x873-x874)|(x875<=x876));

    if (t184 != 3675) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x881 = -123;
	int8_t x882 = INT8_MIN;
	int8_t x884 = -5;
	int32_t t185 = -8764376;

    t185 = ((x881-x882)|(x883<=x884));

    if (t185 != 5) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x889 = UINT8_MAX;
	uint8_t x890 = 5U;
	int32_t x892 = 0;
	int32_t t186 = -104;

    t186 = ((x889-x890)|(x891<=x892));

    if (t186 != 250) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x893 = UINT8_MAX;
	int32_t x894 = INT32_MAX;
	int16_t x895 = -4449;
	int8_t x896 = 1;

    t187 = ((x893-x894)|(x895<=x896));

    if (t187 != -2147483391) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint16_t x897 = 15U;
	uint8_t x898 = 7U;
	int16_t x900 = INT16_MAX;
	volatile int32_t t188 = -700;

    t188 = ((x897-x898)|(x899<=x900));

    if (t188 != 9) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x901 = 10866LLU;
	volatile uint64_t x902 = UINT64_MAX;
	int16_t x903 = INT16_MIN;
	int32_t x904 = -623337;
	uint64_t t189 = 5537351317LLU;

    t189 = ((x901-x902)|(x903<=x904));

    if (t189 != 10867LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x905 = INT8_MIN;
	volatile int32_t x908 = INT32_MIN;
	static volatile int32_t t190 = -44761;

    t190 = ((x905-x906)|(x907<=x908));

    if (t190 != -127) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x909 = 2U;
	volatile uint64_t x910 = 64416LLU;
	int16_t x911 = INT16_MIN;
	static uint8_t x912 = 110U;
	uint64_t t191 = 311294206405265805LLU;

    t191 = ((x909-x910)|(x911<=x912));

    if (t191 != 18446744073709487203LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x913 = INT32_MAX;
	static uint8_t x914 = UINT8_MAX;
	static int64_t x915 = INT64_MIN;

    t192 = ((x913-x914)|(x915<=x916));

    if (t192 != 2147483393) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x917 = INT16_MIN;
	static volatile int16_t x918 = -144;
	volatile int64_t x919 = INT64_MIN;
	int32_t t193 = 1787953;

    t193 = ((x917-x918)|(x919<=x920));

    if (t193 != -32623) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x921 = -1;
	int32_t x923 = -1;
	int32_t x924 = INT32_MAX;

    t194 = ((x921-x922)|(x923<=x924));

    if (t194 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x929 = -1;
	uint16_t x930 = UINT16_MAX;
	int16_t x931 = -489;
	int64_t x932 = 3537LL;
	volatile int32_t t195 = 323;

    t195 = ((x929-x930)|(x931<=x932));

    if (t195 != -65535) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x933 = -1;
	static int64_t x934 = -3970330644995442036LL;
	int8_t x935 = INT8_MIN;
	volatile int64_t t196 = -31467831LL;

    t196 = ((x933-x934)|(x935<=x936));

    if (t196 != 3970330644995442035LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x937 = INT64_MAX;
	uint32_t x938 = 17798058U;
	int32_t x939 = INT32_MIN;
	volatile int64_t t197 = -13405250084898033LL;

    t197 = ((x937-x938)|(x939<=x940));

    if (t197 != 9223372036836977749LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x942 = -1;
	int32_t x943 = INT32_MAX;
	static int32_t x944 = -355;

    t198 = ((x941-x942)|(x943<=x944));

    if (t198 != 2) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x945 = INT32_MAX;
	int8_t x946 = INT8_MAX;
	uint16_t x947 = UINT16_MAX;
	static int8_t x948 = INT8_MAX;
	volatile int32_t t199 = -9769857;

    t199 = ((x945-x946)|(x947<=x948));

    if (t199 != 2147483520) { NG(); } else { ; }
	
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

