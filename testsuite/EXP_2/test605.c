
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

static int32_t x5 = -1;
volatile int32_t x9 = INT32_MIN;
static uint8_t x12 = UINT8_MAX;
static int64_t x14 = -260906LL;
int64_t t3 = -1715681LL;
int16_t x21 = INT16_MIN;
static volatile int64_t x23 = INT64_MIN;
int8_t x31 = INT8_MIN;
volatile int64_t t6 = 297793LL;
int8_t x41 = 0;
static volatile uint32_t x46 = 6U;
volatile int64_t t10 = 3979652704LL;
uint32_t x58 = 207U;
static uint8_t x59 = 12U;
int64_t x63 = INT64_MIN;
volatile int32_t x66 = INT32_MAX;
volatile uint16_t x69 = 6970U;
int16_t x78 = -59;
static uint64_t x81 = 47350076LLU;
int8_t x85 = INT8_MIN;
int32_t x87 = INT32_MIN;
volatile int32_t t18 = 98210;
static uint32_t x90 = 459049U;
uint32_t t19 = 1U;
volatile uint8_t x94 = UINT8_MAX;
int16_t x97 = -1221;
uint32_t x105 = UINT32_MAX;
uint32_t t23 = 30937345U;
int16_t x113 = INT16_MIN;
volatile int16_t x114 = 7;
uint32_t x116 = 77444362U;
uint64_t x124 = UINT64_MAX;
int64_t x138 = INT64_MIN;
uint32_t x139 = 15U;
int32_t x145 = INT32_MAX;
int32_t t31 = -22;
int32_t t32 = -247;
static int32_t x160 = -1;
volatile int64_t t33 = 11157LL;
uint64_t t34 = 9220278531168060014LLU;
int32_t x166 = -1;
volatile uint64_t t36 = 9LLU;
int64_t x178 = -1LL;
uint16_t x188 = UINT16_MAX;
uint64_t x198 = UINT64_MAX;
volatile int16_t x199 = INT16_MIN;
volatile int8_t x200 = INT8_MIN;
static uint64_t t42 = 38LLU;
int8_t x205 = INT8_MAX;
uint64_t x212 = 7853LLU;
static int32_t x217 = -948;
volatile uint32_t x218 = 6U;
uint16_t x221 = 15U;
uint64_t t49 = 50LLU;
uint64_t x238 = 224LLU;
uint64_t t51 = 64128255100879869LLU;
static uint16_t x241 = 514U;
int64_t t53 = 549LL;
static int16_t x249 = INT16_MIN;
static uint64_t x251 = 21887044LLU;
int16_t x262 = 11680;
static int8_t x269 = INT8_MIN;
uint64_t x275 = 815761552570613LLU;
uint64_t x284 = UINT64_MAX;
volatile uint64_t t59 = 8193242650031702456LLU;
uint8_t x300 = UINT8_MAX;
volatile uint64_t x312 = 39064LLU;
volatile uint64_t t63 = 23430918018416814LLU;
int64_t x313 = -1LL;
static uint8_t x315 = 98U;
uint32_t x328 = 19373U;
volatile int8_t x340 = INT8_MAX;
int32_t x351 = INT32_MAX;
static uint16_t x353 = UINT16_MAX;
int8_t x358 = -1;
volatile int8_t x368 = -18;
int16_t x377 = 1;
int32_t x387 = INT32_MAX;
static volatile uint32_t x388 = 1048019986U;
volatile int64_t t80 = 1LL;
static volatile int32_t x398 = INT32_MAX;
volatile uint32_t x401 = 4U;
int16_t x404 = INT16_MIN;
uint16_t x411 = 5312U;
uint64_t x413 = 30698963865843LLU;
static int8_t x414 = -32;
int64_t x418 = -1814818LL;
volatile int32_t x428 = -1;
uint8_t x429 = UINT8_MAX;
int32_t x432 = -103907931;
uint32_t x435 = 1530U;
int32_t t90 = -514950754;
uint8_t x446 = 127U;
int16_t x454 = INT16_MIN;
int16_t x455 = INT16_MAX;
int16_t x460 = INT16_MIN;
static uint32_t x476 = 35U;
static uint64_t x485 = UINT64_MAX;
uint8_t x486 = 21U;
uint8_t x487 = 101U;
uint64_t t97 = 2880967LLU;
volatile uint16_t x511 = UINT16_MAX;
uint32_t x513 = 57231U;
int64_t x515 = INT64_MIN;
uint32_t x523 = 26909U;
static uint8_t x524 = 55U;
volatile int64_t t104 = -174667566135893LL;
int32_t x526 = INT32_MIN;
int8_t x534 = INT8_MIN;
static volatile int64_t t106 = -18463012472472330LL;
static uint64_t t107 = 214913249LLU;
static int64_t x552 = INT64_MAX;
static volatile uint64_t x555 = 1010449LLU;
int32_t x568 = -1;
uint64_t x570 = UINT64_MAX;
volatile uint16_t x571 = UINT16_MAX;
static volatile uint16_t x572 = UINT16_MAX;
uint32_t x576 = 2U;
volatile uint8_t x577 = UINT8_MAX;
uint64_t t117 = 1989625157100478116LLU;
uint8_t x592 = 0U;
static uint64_t x594 = 102545608285916730LLU;
static int8_t x595 = INT8_MAX;
uint64_t t119 = 65228436128312420LLU;
static int16_t x599 = INT16_MIN;
int8_t x604 = -1;
int32_t x626 = INT32_MAX;
volatile uint8_t x630 = 14U;
static int64_t x631 = -1607180840LL;
int64_t t125 = -1LL;
static volatile int64_t t126 = -5LL;
static int8_t x662 = 60;
int16_t x671 = -12;
uint8_t x675 = 3U;
volatile int64_t x680 = INT64_MIN;
int64_t x693 = INT64_MIN;
static int8_t x696 = 27;
int8_t x699 = 7;
uint8_t x700 = UINT8_MAX;
uint64_t x707 = UINT64_MAX;
static int16_t x712 = -231;
int32_t t143 = -6307;
int64_t x722 = INT64_MIN;
uint64_t t145 = 259214799188231LLU;
uint16_t x730 = 2U;
int64_t x732 = INT64_MIN;
volatile int32_t x743 = -1197;
int64_t x746 = INT64_MIN;
static volatile uint64_t t149 = 943451LLU;
int8_t x750 = INT8_MIN;
int8_t x751 = INT8_MIN;
uint32_t x755 = 95U;
int8_t x757 = 28;
volatile uint8_t x763 = 10U;
int32_t x764 = -182;
volatile int32_t t153 = -33;
uint8_t x766 = 0U;
int64_t x768 = -964968296186107LL;
static uint32_t x781 = 879U;
static volatile uint8_t x783 = UINT8_MAX;
uint64_t x784 = UINT64_MAX;
uint16_t x788 = 218U;
uint64_t t157 = 34LLU;
volatile uint32_t x790 = 25U;
int16_t x793 = 29;
static int64_t x795 = 63286212947336LL;
volatile uint32_t x809 = 7638U;
int16_t x814 = INT16_MIN;
int8_t x816 = INT8_MAX;
static volatile int64_t t163 = -1626160LL;
uint64_t x825 = UINT64_MAX;
int8_t x835 = INT8_MIN;
uint16_t x844 = 711U;
volatile uint32_t x848 = 1918948U;
uint64_t x850 = UINT64_MAX;
uint64_t t168 = 16742864824179350LLU;
static int16_t x855 = -1;
static int8_t x858 = 1;
int32_t x859 = 2066460;
volatile uint32_t t170 = UINT32_MAX;
int16_t x862 = -1;
int32_t t171 = 47257;
int64_t x867 = INT64_MIN;
int64_t t172 = 2LL;
int8_t x869 = INT8_MIN;
volatile int32_t t173 = 71;
int8_t x880 = -7;
static int16_t x882 = INT16_MAX;
uint8_t x904 = UINT8_MAX;
volatile uint8_t x905 = 38U;
uint64_t x906 = UINT64_MAX;
int8_t x924 = INT8_MIN;
volatile uint8_t x930 = 20U;
static volatile uint64_t x932 = UINT64_MAX;
int8_t x934 = 11;
volatile int32_t t185 = -312204498;
static uint8_t x944 = UINT8_MAX;
int32_t x946 = -1;
int64_t x947 = -1LL;
static int64_t t187 = 7LL;
volatile uint32_t x952 = UINT32_MAX;
int16_t x962 = INT16_MAX;
int64_t x964 = 6772603200LL;
static volatile int64_t t189 = -133014786476156LL;
volatile int64_t t190 = 3610026LL;
int8_t x973 = INT8_MIN;
int64_t x978 = INT64_MIN;
volatile uint64_t t197 = 2071130180504575LLU;
uint32_t x1027 = UINT32_MAX;


void f0(void) {
    	static int64_t x1 = 2LL;
	volatile int32_t x2 = -1;
	int8_t x3 = INT8_MIN;
	uint64_t x4 = UINT64_MAX;
	uint64_t t0 = 141119907657670199LLU;

    t0 = ((x1-(x2/x3))*x4);

    if (t0 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x6 = 0U;
	uint64_t x7 = UINT64_MAX;
	int16_t x8 = INT16_MAX;
	volatile uint64_t t1 = 229827558467LLU;

    t1 = ((x5-(x6/x7))*x8);

    if (t1 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x10 = UINT32_MAX;
	volatile uint8_t x11 = 12U;
	volatile uint32_t t2 = 146435U;

    t2 = ((x9-(x10/x11))*x12);

    if (t2 != 1073741909U) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MIN;
	int16_t x15 = INT16_MAX;
	uint16_t x16 = UINT16_MAX;

    t3 = ((x13-(x14/x15))*x16);

    if (t3 != -140735340412935LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x22 = 119U;
	uint8_t x24 = UINT8_MAX;
	volatile int64_t t4 = -23701LL;

    t4 = ((x21-(x22/x23))*x24);

    if (t4 != -8355840LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x29 = INT32_MAX;
	int32_t x30 = 1;
	volatile uint64_t x32 = 63212167730439LLU;
	uint64_t t5 = 2174242618418LLU;

    t5 = ((x29-(x30/x31))*x32);

    if (t5 != 15953598183975840505LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x33 = 1;
	int16_t x34 = INT16_MIN;
	static volatile int64_t x35 = -1LL;
	uint8_t x36 = 3U;

    t6 = ((x33-(x34/x35))*x36);

    if (t6 != -98301LL) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x37 = 28;
	int32_t x38 = INT32_MIN;
	volatile int16_t x39 = 7228;
	uint32_t x40 = 1U;
	uint32_t t7 = 59516628U;

    t7 = ((x37-(x38/x39))*x40);

    if (t7 != 297134U) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x42 = UINT32_MAX;
	int16_t x43 = -1;
	uint64_t x44 = 49429LLU;
	uint64_t t8 = 61494504336819LLU;

    t8 = ((x41-(x42/x43))*x44);

    if (t8 != 212295938424555LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x45 = UINT8_MAX;
	int16_t x47 = INT16_MAX;
	uint16_t x48 = UINT16_MAX;
	static volatile uint32_t t9 = 107117U;

    t9 = ((x45-(x46/x47))*x48);

    if (t9 != 16711425U) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x49 = UINT8_MAX;
	int16_t x50 = INT16_MIN;
	int64_t x51 = -142284383737863456LL;
	uint32_t x52 = 32554U;

    t10 = ((x49-(x50/x51))*x52);

    if (t10 != 8301270LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x53 = 23739U;
	int8_t x54 = INT8_MIN;
	int16_t x55 = INT16_MIN;
	int16_t x56 = INT16_MAX;
	static int32_t t11 = 220344073;

    t11 = ((x53-(x54/x55))*x56);

    if (t11 != 777855813) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int8_t x57 = 18;
	int32_t x60 = -65955961;
	volatile uint32_t t12 = 4597842U;

    t12 = ((x57-(x58/x59))*x60);

    if (t12 != 4229011335U) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x61 = UINT32_MAX;
	uint32_t x62 = UINT32_MAX;
	int16_t x64 = INT16_MIN;
	volatile int64_t t13 = -517790LL;

    t13 = ((x61-(x62/x63))*x64);

    if (t13 != -140737488322560LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x65 = INT32_MIN;
	int16_t x67 = -1;
	uint32_t x68 = 84U;
	uint32_t t14 = 46819686U;

    t14 = ((x65-(x66/x67))*x68);

    if (t14 != 4294967212U) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x70 = INT8_MIN;
	int32_t x71 = -1;
	static volatile uint8_t x72 = 0U;
	volatile int32_t t15 = 62027;

    t15 = ((x69-(x70/x71))*x72);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint64_t x77 = 1769424845204187789LLU;
	int8_t x79 = -1;
	int8_t x80 = INT8_MIN;
	volatile uint64_t t16 = 55162754225393671LLU;

    t16 = ((x77-(x78/x79))*x80);

    if (t16 != 13321292772088141568LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x82 = 4063975547916LL;
	uint16_t x83 = 683U;
	int32_t x84 = INT32_MIN;
	uint64_t t17 = 253LLU;

    t17 = ((x81-(x82/x83))*x84);

    if (t17 != 12676238937807650816LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint8_t x86 = 2U;
	int8_t x88 = 3;

    t18 = ((x85-(x86/x87))*x88);

    if (t18 != -384) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint8_t x89 = 28U;
	int8_t x91 = INT8_MAX;
	volatile int8_t x92 = 6;

    t19 = ((x89-(x90/x91))*x92);

    if (t19 != 4294945780U) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x93 = -1LL;
	int32_t x95 = INT32_MAX;
	volatile int8_t x96 = INT8_MIN;
	int64_t t20 = 1414149629823842383LL;

    t20 = ((x93-(x94/x95))*x96);

    if (t20 != 128LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x98 = UINT64_MAX;
	volatile uint64_t x99 = UINT64_MAX;
	int8_t x100 = 1;
	volatile uint64_t t21 = 288799190LLU;

    t21 = ((x97-(x98/x99))*x100);

    if (t21 != 18446744073709550394LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x101 = 150645789001LLU;
	int64_t x102 = INT64_MAX;
	int8_t x103 = -2;
	uint32_t x104 = 13543975U;
	uint64_t t22 = 3065515051LLU;

    t22 = ((x101-(x102/x103))*x104);

    if (t22 != 15875400855353438712LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x106 = INT32_MIN;
	static volatile int8_t x107 = INT8_MIN;
	static uint16_t x108 = 369U;

    t23 = ((x105-(x106/x107))*x108);

    if (t23 != 2399141519U) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint64_t x115 = 50155LLU;
	uint64_t t24 = 3502371558169267LLU;

    t24 = ((x113-(x114/x115))*x116);

    if (t24 != 18446741536012697600LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x117 = 2612962638697LL;
	uint16_t x118 = 457U;
	static uint64_t x119 = 74226040738759050LLU;
	int16_t x120 = INT16_MIN;
	uint64_t t25 = 6LLU;

    t25 = ((x117-(x118/x119))*x120);

    if (t25 != 18361122513964728320LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x121 = INT64_MIN;
	int16_t x122 = -1;
	uint64_t x123 = 3700578095891LLU;
	volatile uint64_t t26 = 2212LLU;

    t26 = ((x121-(x122/x123))*x124);

    if (t26 != 9223372036859760635LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x129 = -14194793;
	int16_t x130 = INT16_MIN;
	volatile int64_t x131 = INT64_MAX;
	static uint8_t x132 = UINT8_MAX;
	int64_t t27 = 1219374LL;

    t27 = ((x129-(x130/x131))*x132);

    if (t27 != -3619672215LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x133 = -321;
	int8_t x134 = INT8_MIN;
	volatile int64_t x135 = INT64_MIN;
	static volatile int8_t x136 = 0;
	static int64_t t28 = 16676564466467LL;

    t28 = ((x133-(x134/x135))*x136);

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x137 = 12257927;
	static uint8_t x140 = 0U;
	volatile int64_t t29 = -1LL;

    t29 = ((x137-(x138/x139))*x140);

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x141 = -8129;
	uint32_t x142 = 0U;
	volatile int64_t x143 = -1LL;
	uint16_t x144 = 8272U;
	volatile int64_t t30 = -12893LL;

    t30 = ((x141-(x142/x143))*x144);

    if (t30 != -67243088LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x146 = 11;
	uint8_t x147 = 1U;
	int8_t x148 = -1;

    t31 = ((x145-(x146/x147))*x148);

    if (t31 != -2147483636) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x149 = UINT8_MAX;
	int8_t x150 = -1;
	int16_t x151 = INT16_MAX;
	uint16_t x152 = 31U;

    t32 = ((x149-(x150/x151))*x152);

    if (t32 != 7905) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x157 = INT16_MIN;
	volatile uint32_t x158 = UINT32_MAX;
	int64_t x159 = -12LL;

    t33 = ((x157-(x158/x159))*x160);

    if (t33 != -357881173LL) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x161 = 111792634;
	static uint64_t x162 = UINT64_MAX;
	int16_t x163 = INT16_MIN;
	static volatile int8_t x164 = -1;

    t34 = ((x161-(x162/x163))*x164);

    if (t34 != 18446744073597758983LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x165 = 18611U;
	volatile uint64_t x167 = 263346684LLU;
	uint16_t x168 = UINT16_MAX;
	static volatile uint64_t t35 = 25LLU;

    t35 = ((x165-(x166/x167))*x168);

    if (t35 != 18442153520172685321LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x173 = UINT64_MAX;
	uint32_t x174 = 1788728892U;
	uint8_t x175 = UINT8_MAX;
	int16_t x176 = INT16_MIN;

    t36 = ((x173-(x174/x175))*x176);

    if (t36 != 229855199232LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x177 = 1U;
	uint16_t x179 = 1414U;
	volatile int8_t x180 = INT8_MIN;
	int64_t t37 = 123248LL;

    t37 = ((x177-(x178/x179))*x180);

    if (t37 != -128LL) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x181 = -1;
	int16_t x182 = -1;
	int16_t x183 = INT16_MIN;
	int8_t x184 = INT8_MAX;
	volatile int32_t t38 = -22430867;

    t38 = ((x181-(x182/x183))*x184);

    if (t38 != -127) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x185 = INT8_MIN;
	int16_t x186 = -3326;
	int8_t x187 = INT8_MIN;
	int32_t t39 = -360205112;

    t39 = ((x185-(x186/x187))*x188);

    if (t39 != -10026855) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int16_t x189 = -439;
	int32_t x190 = -148076;
	volatile int16_t x191 = -1;
	int8_t x192 = -1;
	volatile int32_t t40 = -1711559;

    t40 = ((x189-(x190/x191))*x192);

    if (t40 != 148515) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x193 = UINT8_MAX;
	uint8_t x194 = UINT8_MAX;
	int16_t x195 = -1;
	int64_t x196 = 78523784589LL;
	int64_t t41 = -2244LL;

    t41 = ((x193-(x194/x195))*x196);

    if (t41 != 40047130140390LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x197 = 665001520524566175LLU;

    t42 = ((x197-(x198/x199))*x200);

    if (t42 != 7113525741403287808LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int8_t x206 = INT8_MAX;
	int32_t x207 = -54734421;
	volatile uint16_t x208 = 115U;
	volatile int32_t t43 = 3935;

    t43 = ((x205-(x206/x207))*x208);

    if (t43 != 14605) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x209 = 57967022;
	static int64_t x210 = INT64_MIN;
	volatile uint64_t x211 = UINT64_MAX;
	volatile uint64_t t44 = 2026LLU;

    t44 = ((x209-(x210/x211))*x212);

    if (t44 != 455215023766LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x213 = -1LL;
	static uint16_t x214 = UINT16_MAX;
	int16_t x215 = INT16_MAX;
	static int32_t x216 = 279799433;
	static int64_t t45 = -1LL;

    t45 = ((x213-(x214/x215))*x216);

    if (t45 != -839398299LL) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int32_t x219 = -188131031;
	int64_t x220 = -1LL;
	int64_t t46 = 1936544403424499634LL;

    t46 = ((x217-(x218/x219))*x220);

    if (t46 != -4294966348LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x222 = -60;
	uint16_t x223 = UINT16_MAX;
	uint32_t x224 = 752852177U;
	uint32_t t47 = 7U;

    t47 = ((x221-(x222/x223))*x224);

    if (t47 != 2702848063U) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x225 = 14;
	int64_t x226 = -1LL;
	uint8_t x227 = 28U;
	uint8_t x228 = UINT8_MAX;
	volatile int64_t t48 = -19LL;

    t48 = ((x225-(x226/x227))*x228);

    if (t48 != 3570LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x229 = 238071749079044993LLU;
	volatile int64_t x230 = 312308465811630303LL;
	int64_t x231 = INT64_MIN;
	static volatile int16_t x232 = 69;

    t49 = ((x229-(x230/x231))*x232);

    if (t49 != 16426950686454104517LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x233 = 10171;
	volatile int8_t x234 = INT8_MIN;
	volatile uint16_t x235 = 7U;
	int8_t x236 = 0;
	int32_t t50 = -113870017;

    t50 = ((x233-(x234/x235))*x236);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x237 = 1U;
	int32_t x239 = -1549;
	int8_t x240 = INT8_MIN;

    t51 = ((x237-(x238/x239))*x240);

    if (t51 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x242 = UINT32_MAX;
	uint8_t x243 = 39U;
	static uint8_t x244 = 0U;
	volatile uint32_t t52 = 14042248U;

    t52 = ((x241-(x242/x243))*x244);

    if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x245 = -22LL;
	uint32_t x246 = 1U;
	int16_t x247 = INT16_MIN;
	int32_t x248 = INT32_MAX;

    t53 = ((x245-(x246/x247))*x248);

    if (t53 != -47244640234LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x250 = -1;
	uint64_t x252 = 8953495113854LLU;
	uint64_t t54 = 6LLU;

    t54 = ((x249-(x250/x251))*x252);

    if (t54 != 10723548741150545274LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x261 = 5;
	int16_t x263 = -1;
	int8_t x264 = -1;
	int32_t t55 = 3;

    t55 = ((x261-(x262/x263))*x264);

    if (t55 != -11685) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x265 = INT8_MIN;
	static volatile int64_t x266 = INT64_MIN;
	static uint8_t x267 = UINT8_MAX;
	int8_t x268 = 1;
	int64_t t56 = 6841678476913LL;

    t56 = ((x265-(x266/x267))*x268);

    if (t56 != 36170086419038208LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x270 = -1LL;
	int8_t x271 = -1;
	uint64_t x272 = 18220760088916LLU;
	volatile uint64_t t57 = 122644036744167161LLU;

    t57 = ((x269-(x270/x271))*x272);

    if (t57 != 18444393595658081452LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x273 = INT64_MIN;
	int16_t x274 = INT16_MAX;
	static uint32_t x276 = 42929U;
	volatile uint64_t t58 = 2919558694575819LLU;

    t58 = ((x273-(x274/x275))*x276);

    if (t58 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x281 = 0U;
	int8_t x282 = 1;
	static uint8_t x283 = 1U;

    t59 = ((x281-(x282/x283))*x284);

    if (t59 != 1LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint16_t x293 = 392U;
	int16_t x294 = INT16_MAX;
	int64_t x295 = INT64_MIN;
	int32_t x296 = INT32_MIN;
	int64_t t60 = -5289104026LL;

    t60 = ((x293-(x294/x295))*x296);

    if (t60 != -841813590016LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x297 = UINT64_MAX;
	uint64_t x298 = 0LLU;
	static int16_t x299 = INT16_MIN;
	volatile uint64_t t61 = 4049997635102793772LLU;

    t61 = ((x297-(x298/x299))*x300);

    if (t61 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x301 = 134181LLU;
	static volatile int8_t x302 = INT8_MIN;
	static uint32_t x303 = 5U;
	int64_t x304 = INT64_MIN;
	uint64_t t62 = 19884797240291LLU;

    t62 = ((x301-(x302/x303))*x304);

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x309 = INT16_MAX;
	volatile uint8_t x310 = UINT8_MAX;
	int8_t x311 = INT8_MAX;

    t63 = ((x309-(x310/x311))*x312);

    if (t63 != 1279931960LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x314 = 7U;
	static volatile int64_t x316 = INT64_MAX;
	int64_t t64 = -3164396622265988LL;

    t64 = ((x313-(x314/x315))*x316);

    if (t64 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x317 = 2U;
	static int16_t x318 = 1;
	volatile uint16_t x319 = UINT16_MAX;
	uint32_t x320 = 10U;
	volatile uint32_t t65 = 19344772U;

    t65 = ((x317-(x318/x319))*x320);

    if (t65 != 20U) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x321 = INT8_MIN;
	int8_t x322 = INT8_MAX;
	uint64_t x323 = UINT64_MAX;
	int32_t x324 = -1;
	uint64_t t66 = 229882270LLU;

    t66 = ((x321-(x322/x323))*x324);

    if (t66 != 128LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint64_t x325 = 17097822491LLU;
	uint16_t x326 = 16497U;
	int32_t x327 = INT32_MAX;
	volatile uint64_t t67 = 99LLU;

    t67 = ((x325-(x326/x327))*x328);

    if (t67 != 331236115118143LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x333 = INT16_MAX;
	uint64_t x334 = UINT64_MAX;
	int32_t x335 = -10662891;
	int16_t x336 = 6070;
	uint64_t t68 = 4LLU;

    t68 = ((x333-(x334/x335))*x336);

    if (t68 != 198889620LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x337 = INT16_MIN;
	int8_t x338 = -1;
	volatile int32_t x339 = 43;
	int32_t t69 = 53;

    t69 = ((x337-(x338/x339))*x340);

    if (t69 != -4161536) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x345 = 6996741;
	int16_t x346 = INT16_MIN;
	uint32_t x347 = 227722424U;
	int8_t x348 = INT8_MAX;
	uint32_t t70 = 528U;

    t70 = ((x345-(x346/x347))*x348);

    if (t70 != 888583821U) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x349 = -877;
	int16_t x350 = -1;
	uint32_t x352 = 102U;
	uint32_t t71 = 1715201U;

    t71 = ((x349-(x350/x351))*x352);

    if (t71 != 4294877842U) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x354 = -240687850LL;
	static uint64_t x355 = 15192LLU;
	int64_t x356 = INT64_MIN;
	volatile uint64_t t72 = 3771LLU;

    t72 = ((x353-(x354/x355))*x356);

    if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x357 = INT32_MIN;
	static int64_t x359 = 8260798990207673LL;
	static int16_t x360 = INT16_MAX;
	int64_t t73 = 428899884499081LL;

    t73 = ((x357-(x358/x359))*x360);

    if (t73 != -70366596694016LL) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x361 = -1;
	uint32_t x362 = 88768554U;
	int8_t x363 = INT8_MAX;
	static int32_t x364 = INT32_MAX;
	uint32_t t74 = 205U;

    t74 = ((x361-(x362/x363))*x364);

    if (t74 != 2148182613U) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x365 = 311U;
	int32_t x366 = -1;
	uint64_t x367 = UINT64_MAX;
	volatile uint64_t t75 = 74834542828461451LLU;

    t75 = ((x365-(x366/x367))*x368);

    if (t75 != 18446744073709546036LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x369 = 2357U;
	static uint16_t x370 = 1340U;
	int8_t x371 = 3;
	uint64_t x372 = 2412988LLU;
	static volatile uint64_t t76 = 16222977952LLU;

    t76 = ((x369-(x370/x371))*x372);

    if (t76 != 4611220068LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x378 = 5964U;
	volatile uint16_t x379 = UINT16_MAX;
	int16_t x380 = INT16_MAX;
	volatile uint32_t t77 = 46U;

    t77 = ((x377-(x378/x379))*x380);

    if (t77 != 32767U) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint32_t x381 = 65037U;
	volatile uint64_t x382 = 10689559LLU;
	volatile int64_t x383 = INT64_MIN;
	uint8_t x384 = UINT8_MAX;
	uint64_t t78 = 84713608LLU;

    t78 = ((x381-(x382/x383))*x384);

    if (t78 != 16584435LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x385 = INT32_MIN;
	int8_t x386 = -1;
	volatile uint32_t t79 = 3836U;

    t79 = ((x385-(x386/x387))*x388);

    if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x389 = -1LL;
	int64_t x390 = -1LL;
	static volatile int16_t x391 = -1;
	volatile int8_t x392 = INT8_MIN;

    t80 = ((x389-(x390/x391))*x392);

    if (t80 != 256LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x393 = 214;
	volatile int16_t x394 = -406;
	uint64_t x395 = 30919LLU;
	int32_t x396 = INT32_MAX;
	volatile uint64_t t81 = 74204134LLU;

    t81 = ((x393-(x394/x395))*x396);

    if (t81 != 15760783091965174733LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x397 = -1;
	int64_t x399 = -229979LL;
	int32_t x400 = -1;
	volatile int64_t t82 = 1651149935287163613LL;

    t82 = ((x397-(x398/x399))*x400);

    if (t82 != -9336LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x402 = -1LL;
	int16_t x403 = -1;
	int64_t t83 = -11LL;

    t83 = ((x401-(x402/x403))*x404);

    if (t83 != -98304LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x409 = 116883495LLU;
	int64_t x410 = 234LL;
	int8_t x412 = -8;
	uint64_t t84 = 2LLU;

    t84 = ((x409-(x410/x411))*x412);

    if (t84 != 18446744072774483656LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x415 = INT64_MAX;
	uint32_t x416 = 11U;
	volatile uint64_t t85 = 3LLU;

    t85 = ((x413-(x414/x415))*x416);

    if (t85 != 337688602524273LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x417 = INT32_MIN;
	uint16_t x419 = 12U;
	static volatile int8_t x420 = -15;
	volatile int64_t t86 = 15647372059446LL;

    t86 = ((x417-(x418/x419))*x420);

    if (t86 != 32209986210LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x425 = 0U;
	int32_t x426 = INT32_MAX;
	static uint64_t x427 = 54733659138LLU;
	volatile uint64_t t87 = 106122039LLU;

    t87 = ((x425-(x426/x427))*x428);

    if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x430 = INT16_MIN;
	static int64_t x431 = 66264514411574276LL;
	volatile int64_t t88 = -4890729560689661LL;

    t88 = ((x429-(x430/x431))*x432);

    if (t88 != -26496522405LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x433 = INT32_MIN;
	int64_t x434 = -1LL;
	static int64_t x436 = 21044409LL;
	volatile int64_t t89 = -2532LL;

    t89 = ((x433-(x434/x435))*x436);

    if (t89 != -45192524209324032LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x437 = INT16_MIN;
	int16_t x438 = INT16_MIN;
	int32_t x439 = 4390927;
	static int8_t x440 = 3;

    t90 = ((x437-(x438/x439))*x440);

    if (t90 != -98304) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x445 = UINT16_MAX;
	volatile int8_t x447 = INT8_MAX;
	volatile int64_t x448 = -931021LL;
	static int64_t t91 = -1LL;

    t91 = ((x445-(x446/x447))*x448);

    if (t91 != -61013530214LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x453 = INT8_MIN;
	static int16_t x456 = 1;
	volatile int32_t t92 = 293297146;

    t92 = ((x453-(x454/x455))*x456);

    if (t92 != -127) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x457 = INT64_MAX;
	uint64_t x458 = 1108967064203092117LLU;
	int32_t x459 = INT32_MIN;
	static uint64_t t93 = 1LLU;

    t93 = ((x457-(x458/x459))*x460);

    if (t93 != 32768LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x469 = 21238101U;
	uint32_t x470 = 5880190U;
	int64_t x471 = 42LL;
	static uint8_t x472 = UINT8_MAX;
	int64_t t94 = 673LL;

    t94 = ((x469-(x470/x471))*x472);

    if (t94 != 5380014735LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x473 = -5;
	uint64_t x474 = 1590970670993LLU;
	int32_t x475 = 63;
	volatile uint64_t t95 = 119149LLU;

    t95 = ((x473-(x474/x475))*x476);

    if (t95 != 18446743189836956451LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x477 = 191348937895781976LLU;
	volatile int32_t x478 = INT32_MIN;
	int64_t x479 = INT64_MIN;
	int32_t x480 = 637437;
	volatile uint64_t t96 = 10840025LLU;

    t96 = ((x477-(x478/x479))*x480);

    if (t96 != 3021110106020150520LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x488 = INT32_MIN;

    t97 = ((x485-(x486/x487))*x488);

    if (t97 != 2147483648LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x489 = 2;
	volatile int32_t x490 = -1;
	static int8_t x491 = INT8_MIN;
	int16_t x492 = 385;
	volatile int32_t t98 = -71133293;

    t98 = ((x489-(x490/x491))*x492);

    if (t98 != 770) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint8_t x493 = UINT8_MAX;
	uint32_t x494 = UINT32_MAX;
	int32_t x495 = INT32_MAX;
	volatile int8_t x496 = INT8_MIN;
	uint32_t t99 = 3790729U;

    t99 = ((x493-(x494/x495))*x496);

    if (t99 != 4294934912U) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x497 = 6U;
	int64_t x498 = INT64_MIN;
	volatile int64_t x499 = 32LL;
	uint8_t x500 = 0U;
	int64_t t100 = -7495716LL;

    t100 = ((x497-(x498/x499))*x500);

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int32_t x509 = 1;
	int8_t x510 = 0;
	uint8_t x512 = UINT8_MAX;
	volatile int32_t t101 = 793;

    t101 = ((x509-(x510/x511))*x512);

    if (t101 != 255) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x514 = 114990LLU;
	uint64_t x516 = UINT64_MAX;
	uint64_t t102 = 23837407989LLU;

    t102 = ((x513-(x514/x515))*x516);

    if (t102 != 18446744073709494385LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x517 = INT8_MIN;
	int16_t x518 = INT16_MAX;
	static int32_t x519 = -219484;
	uint8_t x520 = 45U;
	volatile int32_t t103 = 2222280;

    t103 = ((x517-(x518/x519))*x520);

    if (t103 != -5760) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x521 = 32111U;
	int64_t x522 = INT64_MAX;

    t104 = ((x521-(x522/x523))*x524);

    if (t104 != -18851888289400870LL) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint16_t x525 = UINT16_MAX;
	volatile int32_t x527 = -71;
	volatile uint32_t x528 = 32402U;
	volatile uint32_t t105 = 707U;

    t105 = ((x525-(x526/x527))*x528);

    if (t105 != 1337080862U) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x533 = -145LL;
	volatile int32_t x535 = INT32_MAX;
	volatile int32_t x536 = -1;

    t106 = ((x533-(x534/x535))*x536);

    if (t106 != 145LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x537 = UINT32_MAX;
	int32_t x538 = INT32_MIN;
	uint64_t x539 = UINT64_MAX;
	static int16_t x540 = INT16_MAX;

    t107 = ((x537-(x538/x539))*x540);

    if (t107 != 140733193355265LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x549 = 3494831790626601LLU;
	volatile int64_t x550 = INT64_MIN;
	int8_t x551 = INT8_MIN;
	volatile uint64_t t108 = 3495520LLU;

    t108 = ((x549-(x550/x551))*x552);

    if (t108 != 9291934799102077143LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x553 = -864;
	uint32_t x554 = 6584U;
	int16_t x556 = INT16_MIN;
	uint64_t t109 = 19943LLU;

    t109 = ((x553-(x554/x555))*x556);

    if (t109 != 28311552LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint32_t x557 = UINT32_MAX;
	int8_t x558 = 1;
	volatile uint8_t x559 = UINT8_MAX;
	static volatile int8_t x560 = 2;
	volatile uint32_t t110 = 10896U;

    t110 = ((x557-(x558/x559))*x560);

    if (t110 != 4294967294U) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x561 = 5U;
	static int32_t x562 = 31;
	volatile uint16_t x563 = 3032U;
	volatile int64_t x564 = -1LL;
	volatile int64_t t111 = 1275219LL;

    t111 = ((x561-(x562/x563))*x564);

    if (t111 != -5LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x565 = 3U;
	volatile uint8_t x566 = 2U;
	uint8_t x567 = UINT8_MAX;
	static int32_t t112 = -1;

    t112 = ((x565-(x566/x567))*x568);

    if (t112 != -3) { NG(); } else { ; }
	
}

void f113(void) {
    	static int32_t x569 = -68555;
	uint64_t t113 = 13034398LLU;

    t113 = ((x569-(x570/x571))*x572);

    if (t113 != 18446744069216799692LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x573 = INT8_MAX;
	int64_t x574 = INT64_MIN;
	volatile int8_t x575 = INT8_MIN;
	volatile int64_t t114 = 650912LL;

    t114 = ((x573-(x574/x575))*x576);

    if (t114 != -144115188075855618LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x578 = -13330LL;
	uint32_t x579 = 5U;
	static volatile uint64_t x580 = 435716824319675313LLU;
	uint64_t t115 = 2897087424530LLU;

    t115 = ((x577-(x578/x579))*x580);

    if (t115 != 18350246825522079385LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x581 = -2247;
	int8_t x582 = INT8_MIN;
	static int32_t x583 = INT32_MAX;
	uint16_t x584 = UINT16_MAX;
	int32_t t116 = 2;

    t116 = ((x581-(x582/x583))*x584);

    if (t116 != -147257145) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x585 = 1990U;
	static int64_t x586 = -1LL;
	uint64_t x587 = UINT64_MAX;
	int32_t x588 = 692910708;

    t117 = ((x585-(x586/x587))*x588);

    if (t117 != 1378199398212LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x589 = INT8_MIN;
	volatile uint8_t x590 = 55U;
	int64_t x591 = INT64_MIN;
	static int64_t t118 = -26805468997303466LL;

    t118 = ((x589-(x590/x591))*x592);

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x593 = -2;
	volatile int32_t x596 = 4468455;

    t119 = ((x593-(x594/x595))*x596);

    if (t119 != 7526908736466220291LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x597 = 29;
	static int16_t x598 = INT16_MIN;
	int16_t x600 = INT16_MIN;
	int32_t t120 = -431065321;

    t120 = ((x597-(x598/x599))*x600);

    if (t120 != -917504) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x601 = 7841U;
	int64_t x602 = INT64_MAX;
	int8_t x603 = INT8_MIN;
	int64_t t121 = 1854LL;

    t121 = ((x601-(x602/x603))*x604);

    if (t121 != -72057594037935776LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x617 = 898U;
	static uint64_t x618 = UINT64_MAX;
	int64_t x619 = INT64_MIN;
	int8_t x620 = 1;
	volatile uint64_t t122 = 34094484113410LLU;

    t122 = ((x617-(x618/x619))*x620);

    if (t122 != 897LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x621 = -1;
	static int32_t x622 = 1;
	int8_t x623 = -31;
	int32_t x624 = -1;
	int32_t t123 = -63;

    t123 = ((x621-(x622/x623))*x624);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int16_t x625 = INT16_MIN;
	int32_t x627 = -1;
	static volatile uint32_t x628 = 25U;
	uint32_t t124 = 2239972U;

    t124 = ((x625-(x626/x627))*x628);

    if (t124 != 2146664423U) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x629 = INT16_MAX;
	int8_t x632 = INT8_MAX;

    t125 = ((x629-(x630/x631))*x632);

    if (t125 != 4161409LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int64_t x633 = -1LL;
	int32_t x634 = 15;
	static int32_t x635 = 1787498;
	static uint32_t x636 = 19243U;

    t126 = ((x633-(x634/x635))*x636);

    if (t126 != -19243LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x637 = INT8_MIN;
	uint8_t x638 = 80U;
	int32_t x639 = INT32_MAX;
	static volatile uint32_t x640 = 1055927675U;
	volatile uint32_t t127 = 4U;

    t127 = ((x637-(x638/x639))*x640);

    if (t127 != 2280211072U) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint64_t x641 = 11921LLU;
	static volatile uint16_t x642 = UINT16_MAX;
	int32_t x643 = -8530137;
	int64_t x644 = 52795LL;
	uint64_t t128 = 25LLU;

    t128 = ((x641-(x642/x643))*x644);

    if (t128 != 629369195LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x645 = -1;
	uint16_t x646 = 73U;
	uint16_t x647 = 26793U;
	static volatile int16_t x648 = INT16_MIN;
	static volatile int32_t t129 = -3562;

    t129 = ((x645-(x646/x647))*x648);

    if (t129 != 32768) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x649 = 1;
	int32_t x650 = -177739;
	static int64_t x651 = 1672478353LL;
	uint8_t x652 = 14U;
	volatile int64_t t130 = 1086689276965268767LL;

    t130 = ((x649-(x650/x651))*x652);

    if (t130 != 14LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x657 = 2557LLU;
	int16_t x658 = INT16_MAX;
	int32_t x659 = -1;
	static uint32_t x660 = 353U;
	static volatile uint64_t t131 = 692919207LLU;

    t131 = ((x657-(x658/x659))*x660);

    if (t131 != 12469372LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x661 = 0;
	int8_t x663 = INT8_MIN;
	static volatile int8_t x664 = INT8_MAX;
	volatile int32_t t132 = -90222;

    t132 = ((x661-(x662/x663))*x664);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x665 = -7;
	int64_t x666 = INT64_MIN;
	static int32_t x667 = 115742697;
	uint64_t x668 = 140414814548426509LLU;
	uint64_t t133 = 32101LLU;

    t133 = ((x665-(x666/x667))*x668);

    if (t133 != 5507688559074517856LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int16_t x669 = -1654;
	int16_t x670 = 0;
	int16_t x672 = -1;
	volatile int32_t t134 = -52;

    t134 = ((x669-(x670/x671))*x672);

    if (t134 != 1654) { NG(); } else { ; }
	
}

void f135(void) {
    	static int16_t x673 = -6;
	volatile uint16_t x674 = 30U;
	volatile int32_t x676 = -1;
	volatile int32_t t135 = 18661;

    t135 = ((x673-(x674/x675))*x676);

    if (t135 != 16) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x677 = 278530297249785LL;
	volatile uint64_t x678 = UINT64_MAX;
	static int32_t x679 = INT32_MIN;
	static uint64_t t136 = 3366706684LLU;

    t136 = ((x677-(x678/x679))*x680);

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x681 = INT8_MIN;
	int64_t x682 = 8285LL;
	static int16_t x683 = -7086;
	volatile int64_t x684 = -13250383165LL;
	volatile int64_t t137 = 201LL;

    t137 = ((x681-(x682/x683))*x684);

    if (t137 != 1682798661955LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x685 = 2471U;
	int8_t x686 = INT8_MIN;
	uint8_t x687 = 74U;
	int16_t x688 = -1;
	static volatile int32_t t138 = -14940;

    t138 = ((x685-(x686/x687))*x688);

    if (t138 != -2472) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x694 = INT32_MAX;
	volatile uint64_t x695 = 126152818LLU;
	volatile uint64_t t139 = 1882569LLU;

    t139 = ((x693-(x694/x695))*x696);

    if (t139 != 9223372036854775349LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x697 = 221208241362461LLU;
	uint8_t x698 = 84U;
	uint64_t t140 = 304369LLU;

    t140 = ((x697-(x698/x699))*x700);

    if (t140 != 56408101547424495LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x701 = 893U;
	volatile int64_t x702 = -1LL;
	int32_t x703 = -118245230;
	int8_t x704 = INT8_MAX;
	int64_t t141 = 23022983LL;

    t141 = ((x701-(x702/x703))*x704);

    if (t141 != 113411LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x705 = INT16_MAX;
	static int32_t x706 = 38612;
	int8_t x708 = INT8_MAX;
	volatile uint64_t t142 = 16225034409LLU;

    t142 = ((x705-(x706/x707))*x708);

    if (t142 != 4161409LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x709 = -1;
	int32_t x710 = -1;
	volatile int32_t x711 = -1;

    t143 = ((x709-(x710/x711))*x712);

    if (t143 != 462) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int16_t x713 = INT16_MIN;
	int8_t x714 = 47;
	volatile int64_t x715 = INT64_MIN;
	volatile int16_t x716 = -89;
	volatile int64_t t144 = 24400518466168LL;

    t144 = ((x713-(x714/x715))*x716);

    if (t144 != 2916352LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x721 = 0U;
	uint64_t x723 = 6070852242283LLU;
	static uint16_t x724 = 1U;

    t145 = ((x721-(x722/x723))*x724);

    if (t145 != 18446744073708032329LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x725 = INT8_MAX;
	int64_t x726 = -1LL;
	uint64_t x727 = UINT64_MAX;
	int16_t x728 = 63;
	volatile uint64_t t146 = 27388447117LLU;

    t146 = ((x725-(x726/x727))*x728);

    if (t146 != 7938LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x729 = 867954676348715718LLU;
	int32_t x731 = -1;
	volatile uint64_t t147 = 233LLU;

    t147 = ((x729-(x730/x731))*x732);

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint32_t x741 = UINT32_MAX;
	uint32_t x742 = 1U;
	int8_t x744 = INT8_MIN;
	volatile uint32_t t148 = 3798U;

    t148 = ((x741-(x742/x743))*x744);

    if (t148 != 128U) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x745 = 11987213LLU;
	volatile uint64_t x747 = 9084LLU;
	static int16_t x748 = 43;

    t149 = ((x745-(x746/x747))*x748);

    if (t149 != 18403084343095019906LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile uint32_t x749 = 6312U;
	static uint64_t x752 = UINT64_MAX;
	volatile uint64_t t150 = 221376562LLU;

    t150 = ((x749-(x750/x751))*x752);

    if (t150 != 18446744073709545305LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x753 = 104U;
	int16_t x754 = INT16_MIN;
	static uint8_t x756 = UINT8_MAX;
	static volatile uint32_t t151 = 390415U;

    t151 = ((x753-(x754/x755))*x756);

    if (t151 != 1356419973U) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int8_t x758 = -1;
	volatile int16_t x759 = INT16_MIN;
	int16_t x760 = -1;
	volatile int32_t t152 = 8384341;

    t152 = ((x757-(x758/x759))*x760);

    if (t152 != -28) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x761 = -1;
	int16_t x762 = INT16_MIN;

    t153 = ((x761-(x762/x763))*x764);

    if (t153 != -596050) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x765 = 9721121130307735LLU;
	static volatile int8_t x767 = INT8_MIN;
	static uint64_t t154 = 1671579703512LLU;

    t154 = ((x765-(x766/x767))*x768);

    if (t154 != 1761189512236682227LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x777 = 55;
	uint32_t x778 = UINT32_MAX;
	uint16_t x779 = 437U;
	int32_t x780 = -802888718;
	uint32_t t155 = 2145187U;

    t155 = ((x777-(x778/x779))*x780);

    if (t155 != 2529089062U) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint32_t x782 = 11234647U;
	static uint64_t t156 = 20857994LLU;

    t156 = ((x781-(x782/x783))*x784);

    if (t156 != 18446744069414627498LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x785 = INT64_MAX;
	int32_t x786 = 9;
	uint64_t x787 = UINT64_MAX;

    t157 = ((x785-(x786/x787))*x788);

    if (t157 != 18446744073709551398LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x789 = INT8_MIN;
	static int8_t x791 = -1;
	uint32_t x792 = 9U;
	static uint32_t t158 = 65402U;

    t158 = ((x789-(x790/x791))*x792);

    if (t158 != 4294966144U) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x794 = 2U;
	volatile uint32_t x796 = UINT32_MAX;
	static volatile int64_t t159 = 393012962522LL;

    t159 = ((x793-(x794/x795))*x796);

    if (t159 != 124554051555LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static int64_t x797 = 251LL;
	volatile int8_t x798 = -5;
	volatile int8_t x799 = INT8_MAX;
	int32_t x800 = 26;
	int64_t t160 = -238LL;

    t160 = ((x797-(x798/x799))*x800);

    if (t160 != 6526LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x805 = 35U;
	static uint8_t x806 = 12U;
	int8_t x807 = 1;
	int32_t x808 = INT32_MAX;
	static uint32_t t161 = 1781470618U;

    t161 = ((x805-(x806/x807))*x808);

    if (t161 != 2147483625U) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x810 = 0U;
	uint64_t x811 = 30397412340LLU;
	volatile int8_t x812 = 54;
	volatile uint64_t t162 = 1LLU;

    t162 = ((x809-(x810/x811))*x812);

    if (t162 != 412452LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x813 = 0;
	int64_t x815 = INT64_MIN;

    t163 = ((x813-(x814/x815))*x816);

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x826 = INT8_MIN;
	int8_t x827 = -2;
	static int16_t x828 = INT16_MAX;
	volatile uint64_t t164 = 10637894381LLU;

    t164 = ((x825-(x826/x827))*x828);

    if (t164 != 18446744073707421761LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x833 = INT64_MIN;
	static volatile uint64_t x834 = UINT64_MAX;
	int16_t x836 = INT16_MIN;
	uint64_t t165 = 25133841LLU;

    t165 = ((x833-(x834/x835))*x836);

    if (t165 != 32768LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x841 = 6U;
	int16_t x842 = INT16_MIN;
	volatile int16_t x843 = 1;
	volatile uint32_t t166 = 1671337U;

    t166 = ((x841-(x842/x843))*x844);

    if (t166 != 23302314U) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x845 = UINT64_MAX;
	int64_t x846 = INT64_MAX;
	int8_t x847 = INT8_MIN;
	static uint64_t t167 = 7387152LLU;

    t167 = ((x845-(x846/x847))*x848);

    if (t167 != 16429131440643731512LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x849 = 33U;
	int32_t x851 = INT32_MAX;
	int16_t x852 = -352;

    t168 = ((x849-(x850/x851))*x852);

    if (t168 != 3023656966176LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x853 = INT32_MIN;
	uint32_t x854 = 207058387U;
	uint8_t x856 = 60U;
	volatile uint32_t t169 = 3959932U;

    t169 = ((x853-(x854/x855))*x856);

    if (t169 != 0U) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x857 = UINT32_MAX;
	static volatile uint8_t x860 = 1U;

    t170 = ((x857-(x858/x859))*x860);

    if (t170 != UINT32_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x861 = INT8_MIN;
	int8_t x863 = -3;
	int16_t x864 = -1;

    t171 = ((x861-(x862/x863))*x864);

    if (t171 != 128) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x865 = 0;
	int16_t x866 = -62;
	uint16_t x868 = 42U;

    t172 = ((x865-(x866/x867))*x868);

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static int16_t x870 = INT16_MAX;
	volatile int32_t x871 = 27;
	int16_t x872 = INT16_MIN;

    t173 = ((x869-(x870/x871))*x872);

    if (t173 != 43941888) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint64_t x873 = 4449639611056LLU;
	volatile uint64_t x874 = 6477LLU;
	volatile int8_t x875 = -1;
	int16_t x876 = INT16_MIN;
	volatile uint64_t t174 = 12542493990802LLU;

    t174 = ((x873-(x874/x875))*x876);

    if (t174 != 18300938282934468608LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x877 = 3356868164LL;
	uint8_t x878 = UINT8_MAX;
	int32_t x879 = -1;
	volatile int64_t t175 = -97726417454335152LL;

    t175 = ((x877-(x878/x879))*x880);

    if (t175 != -23498078933LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x881 = -1;
	uint32_t x883 = 10741763U;
	int8_t x884 = INT8_MIN;
	static volatile uint32_t t176 = 63U;

    t176 = ((x881-(x882/x883))*x884);

    if (t176 != 128U) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x885 = 322246LLU;
	uint64_t x886 = 64872610LLU;
	int8_t x887 = INT8_MAX;
	static int32_t x888 = -22;
	uint64_t t177 = 16906839598LLU;

    t177 = ((x885-(x886/x887))*x888);

    if (t177 != 4148342LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x889 = -1LL;
	static int8_t x890 = INT8_MAX;
	uint64_t x891 = 20685275837117116LLU;
	int32_t x892 = -3;
	static volatile uint64_t t178 = 539568LLU;

    t178 = ((x889-(x890/x891))*x892);

    if (t178 != 3LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int64_t x897 = INT64_MAX;
	int8_t x898 = INT8_MIN;
	uint64_t x899 = UINT64_MAX;
	int16_t x900 = INT16_MAX;
	uint64_t t179 = 953538051LLU;

    t179 = ((x897-(x898/x899))*x900);

    if (t179 != 9223372036854743041LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint64_t x901 = UINT64_MAX;
	uint16_t x902 = 0U;
	int32_t x903 = INT32_MIN;
	volatile uint64_t t180 = 4607257987LLU;

    t180 = ((x901-(x902/x903))*x904);

    if (t180 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x907 = -1LL;
	int8_t x908 = INT8_MIN;
	volatile uint64_t t181 = 15LLU;

    t181 = ((x905-(x906/x907))*x908);

    if (t181 != 18446744073709546880LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x909 = 159U;
	volatile int64_t x910 = INT64_MIN;
	volatile uint64_t x911 = 359052080854322LLU;
	int32_t x912 = 170702024;
	volatile uint64_t t182 = 3745971798LLU;

    t182 = ((x909-(x910/x911))*x912);

    if (t182 != 18446739715857580920LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x921 = 73;
	uint16_t x922 = 1492U;
	int64_t x923 = INT64_MIN;
	volatile int64_t t183 = 7380LL;

    t183 = ((x921-(x922/x923))*x924);

    if (t183 != -9344LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x929 = INT16_MAX;
	int32_t x931 = INT32_MAX;
	uint64_t t184 = 652LLU;

    t184 = ((x929-(x930/x931))*x932);

    if (t184 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x933 = UINT16_MAX;
	int32_t x935 = INT32_MIN;
	volatile int8_t x936 = 0;

    t185 = ((x933-(x934/x935))*x936);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x941 = UINT32_MAX;
	int16_t x942 = -1;
	int16_t x943 = -58;
	volatile uint32_t t186 = 952U;

    t186 = ((x941-(x942/x943))*x944);

    if (t186 != 4294967041U) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x945 = -1;
	static int8_t x948 = -1;

    t187 = ((x945-(x946/x947))*x948);

    if (t187 != 2LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x949 = INT8_MAX;
	int16_t x950 = -1;
	volatile int16_t x951 = -3;
	static uint32_t t188 = 1U;

    t188 = ((x949-(x950/x951))*x952);

    if (t188 != 4294967169U) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x961 = -1;
	int64_t x963 = 161951956389863401LL;

    t189 = ((x961-(x962/x963))*x964);

    if (t189 != -6772603200LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x969 = -1LL;
	int8_t x970 = INT8_MAX;
	static int32_t x971 = -1;
	int32_t x972 = -1;

    t190 = ((x969-(x970/x971))*x972);

    if (t190 != -126LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x974 = INT16_MIN;
	int64_t x975 = -1LL;
	uint64_t x976 = UINT64_MAX;
	uint64_t t191 = 8809094563LLU;

    t191 = ((x973-(x974/x975))*x976);

    if (t191 != 32896LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x977 = INT16_MIN;
	int64_t x979 = INT64_MIN;
	int64_t x980 = 110573LL;
	int64_t t192 = -140781104LL;

    t192 = ((x977-(x978/x979))*x980);

    if (t192 != -3623366637LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x993 = INT16_MIN;
	int8_t x994 = -12;
	volatile uint64_t x995 = 308095LLU;
	uint32_t x996 = 25118U;
	static uint64_t t193 = 41584LLU;

    t193 = ((x993-(x994/x995))*x996);

    if (t193 != 16942840024968049434LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x1001 = INT8_MIN;
	uint32_t x1002 = UINT32_MAX;
	static uint16_t x1003 = UINT16_MAX;
	int32_t x1004 = INT32_MAX;
	static volatile uint32_t t194 = 741013U;

    t194 = ((x1001-(x1002/x1003))*x1004);

    if (t194 != 2147549313U) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x1005 = -48;
	uint64_t x1006 = 13315LLU;
	int64_t x1007 = INT64_MIN;
	int64_t x1008 = INT64_MIN;
	uint64_t t195 = 447360LLU;

    t195 = ((x1005-(x1006/x1007))*x1008);

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x1013 = INT16_MIN;
	volatile uint8_t x1014 = 29U;
	uint32_t x1015 = 36080762U;
	int16_t x1016 = INT16_MIN;
	volatile uint32_t t196 = 9U;

    t196 = ((x1013-(x1014/x1015))*x1016);

    if (t196 != 1073741824U) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x1021 = INT64_MIN;
	int8_t x1022 = 4;
	volatile uint16_t x1023 = 5026U;
	uint64_t x1024 = 121990939LLU;

    t197 = ((x1021-(x1022/x1023))*x1024);

    if (t197 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x1025 = INT8_MIN;
	volatile uint16_t x1026 = UINT16_MAX;
	static int8_t x1028 = 12;
	volatile uint32_t t198 = 57430809U;

    t198 = ((x1025-(x1026/x1027))*x1028);

    if (t198 != 4294965760U) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x1041 = INT8_MAX;
	static int16_t x1042 = -1835;
	int8_t x1043 = INT8_MAX;
	uint32_t x1044 = UINT32_MAX;
	static uint32_t t199 = 66027U;

    t199 = ((x1041-(x1042/x1043))*x1044);

    if (t199 != 4294967155U) { NG(); } else { ; }
	
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

