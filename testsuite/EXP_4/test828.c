
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

volatile int32_t x3 = INT32_MIN;
static int64_t x4 = INT64_MAX;
int8_t x5 = -19;
static int16_t x10 = INT16_MAX;
volatile uint64_t t3 = 241LLU;
volatile int32_t t9 = -413867;
volatile uint8_t x54 = 3U;
volatile uint32_t x55 = 542762U;
int32_t x60 = INT32_MAX;
volatile int64_t t13 = -11130LL;
uint16_t x69 = 120U;
static int8_t x73 = INT8_MAX;
uint32_t x74 = UINT32_MAX;
int32_t t16 = -2;
int16_t x88 = INT16_MAX;
volatile int64_t x97 = INT64_MIN;
uint8_t x101 = 52U;
volatile int8_t x103 = INT8_MIN;
uint64_t t20 = 1520667587543311LLU;
int64_t t21 = -21372661554LL;
int64_t x120 = 888512795979881400LL;
int8_t x125 = INT8_MIN;
int64_t x133 = -1933147035996628LL;
static uint64_t x140 = UINT64_MAX;
static volatile uint64_t t26 = 513876730900399LLU;
volatile uint64_t x145 = 3248320LLU;
uint32_t x147 = 50325U;
int16_t x151 = INT16_MAX;
volatile uint64_t t28 = 300607628090LLU;
volatile uint64_t x155 = 1230LLU;
static uint32_t x167 = 27389U;
uint16_t x169 = 14U;
volatile int64_t x171 = -331181199LL;
static int64_t x192 = INT64_MAX;
volatile int16_t x195 = 274;
int64_t t37 = 1923042057151LL;
volatile uint64_t t38 = 138134197071620915LLU;
uint64_t x213 = 59836251LLU;
static int64_t x214 = INT64_MIN;
uint8_t x218 = 3U;
uint64_t t43 = 10898LLU;
uint64_t x245 = 7698665023859175LLU;
static volatile int8_t x247 = INT8_MIN;
int64_t x254 = INT64_MIN;
volatile int8_t x258 = -1;
static int32_t t50 = -195235;
static volatile uint64_t x281 = 11057815597LLU;
static int32_t x293 = -363097;
static int64_t x296 = INT64_MAX;
volatile uint64_t t55 = 7791535441428709LLU;
volatile int32_t x312 = 11433;
uint16_t x324 = UINT16_MAX;
uint64_t x332 = 54183LLU;
volatile int64_t t62 = -547286517LL;
int16_t x341 = INT16_MAX;
static int16_t x351 = INT16_MIN;
volatile int64_t t65 = 2LL;
uint64_t x366 = 164138LLU;
volatile int32_t x373 = INT32_MIN;
volatile int16_t x374 = INT16_MAX;
int16_t x375 = INT16_MIN;
volatile uint8_t x382 = 3U;
static uint64_t t69 = UINT64_MAX;
static volatile int64_t t70 = 35728112246156886LL;
uint16_t x394 = UINT16_MAX;
volatile int32_t x407 = -1;
volatile uint16_t x408 = 238U;
int32_t t73 = 59131144;
uint64_t x412 = 6867LLU;
static volatile int32_t x413 = -1;
int32_t t75 = -275238385;
int32_t x418 = 711414833;
uint16_t x419 = 1U;
uint8_t x421 = UINT8_MAX;
int32_t t77 = 4053339;
int8_t x428 = -2;
uint64_t x438 = UINT64_MAX;
volatile uint64_t t80 = 5005704695685390930LLU;
uint32_t x453 = 110U;
static uint8_t x462 = 2U;
uint8_t x464 = 6U;
uint8_t x472 = UINT8_MAX;
volatile int64_t t90 = -134476007LL;
volatile int32_t x509 = 4730701;
int8_t x511 = INT8_MAX;
uint16_t x516 = 574U;
static int32_t x531 = -1;
volatile int32_t x534 = -107856751;
int8_t x541 = INT8_MAX;
uint8_t x542 = UINT8_MAX;
uint64_t x553 = UINT64_MAX;
int8_t x557 = 1;
int32_t x576 = INT32_MIN;
uint64_t x580 = 3081082LLU;
int32_t x585 = INT32_MAX;
uint8_t x587 = UINT8_MAX;
volatile int8_t x590 = 1;
int64_t t112 = -1927035251324349LL;
int32_t x623 = INT32_MAX;
static int64_t t116 = 1420818246681LL;
static uint64_t t118 = 0LLU;
int16_t x640 = -3;
uint8_t x643 = 8U;
volatile int64_t t120 = 8LL;
int16_t x650 = 7;
static volatile int8_t x652 = INT8_MIN;
volatile int64_t t122 = 3882712120692301LL;
int16_t x658 = INT16_MAX;
int16_t x669 = 1;
volatile int32_t x671 = INT32_MIN;
static uint16_t x680 = UINT16_MAX;
uint64_t t127 = 103826406052LLU;
static int32_t x690 = -1;
static uint64_t x691 = UINT64_MAX;
uint16_t x692 = 12U;
int64_t t130 = 33122264LL;
uint64_t x706 = UINT64_MAX;
static volatile int64_t t132 = 13628LL;
int16_t x721 = 4;
int16_t x733 = INT16_MIN;
volatile int8_t x735 = INT8_MIN;
int64_t x736 = 167879575375LL;
uint16_t x762 = 296U;
uint16_t x773 = 0U;
static int16_t x774 = 37;
int32_t x775 = INT32_MIN;
volatile uint64_t x786 = 244LLU;
int8_t x787 = INT8_MIN;
static volatile int16_t x798 = INT16_MIN;
volatile int32_t t142 = -1;
int64_t x802 = INT64_MIN;
volatile int64_t x810 = 2150838522462313LL;
volatile uint16_t x813 = 1U;
int8_t x842 = -39;
static int16_t x845 = INT16_MIN;
static int16_t x857 = -1;
int32_t x860 = INT32_MIN;
int8_t x870 = 1;
int64_t x871 = INT64_MIN;
uint16_t x872 = 27754U;
volatile int16_t x878 = -1;
uint64_t x901 = 6034632318733LLU;
int64_t x902 = -1LL;
uint64_t t160 = 927518LLU;
int16_t x905 = -919;
static int8_t x920 = INT8_MIN;
uint32_t t163 = 10730U;
int8_t x925 = -11;
static int16_t x926 = 238;
int16_t x928 = INT16_MAX;
int64_t x929 = INT64_MIN;
int64_t t166 = INT64_MIN;
int16_t x943 = INT16_MAX;
int8_t x949 = 25;
uint64_t x950 = 165112444LLU;
uint64_t t169 = 3LLU;
static int8_t x966 = INT8_MIN;
volatile uint64_t t173 = 2840425170LLU;
uint16_t x974 = 3637U;
uint16_t x975 = 709U;
uint16_t x986 = 121U;
uint32_t x988 = UINT32_MAX;
volatile uint32_t t177 = 7628U;
volatile int64_t x994 = -1LL;
uint32_t x999 = 37U;
uint32_t t179 = 43U;
volatile int64_t x1027 = 22236674350642LL;
volatile uint32_t t186 = 0U;
static volatile uint8_t x1043 = UINT8_MAX;
static uint32_t t187 = 3247168U;
uint64_t t188 = 2274484603450LLU;
static uint64_t t189 = UINT64_MAX;
static uint32_t x1067 = 9U;
static volatile int64_t t193 = 389398145701935782LL;
int16_t x1079 = INT16_MIN;
int16_t x1081 = INT16_MIN;
uint8_t x1085 = UINT8_MAX;
int16_t x1086 = INT16_MIN;
int32_t x1087 = INT32_MIN;
static volatile uint32_t t198 = 163U;
int64_t x1093 = -1LL;
int64_t x1094 = INT64_MIN;
uint8_t x1096 = 21U;


void f0(void) {
    	int32_t x1 = INT32_MIN;
	int8_t x2 = -1;
	volatile int64_t t0 = -204193156333976LL;

    t0 = (x1-(x2/(x3%x4)));

    if (t0 != -2147483648LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x6 = 15U;
	uint8_t x7 = 124U;
	int64_t x8 = INT64_MIN;
	int64_t t1 = 4LL;

    t1 = (x5-(x6/(x7%x8)));

    if (t1 != -19LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = 0U;
	uint16_t x11 = 1008U;
	int16_t x12 = INT16_MIN;
	static int32_t t2 = 3;

    t2 = (x9-(x10/(x11%x12)));

    if (t2 != -32) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint16_t x17 = 38U;
	uint64_t x18 = 10499LLU;
	int64_t x19 = INT64_MIN;
	static int16_t x20 = -209;

    t3 = (x17-(x18/(x19%x20)));

    if (t3 != 38LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x21 = -7;
	uint16_t x22 = 953U;
	uint16_t x23 = UINT16_MAX;
	int8_t x24 = 7;
	volatile int32_t t4 = -6474;

    t4 = (x21-(x22/(x23%x24)));

    if (t4 != -960) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x25 = INT16_MAX;
	int32_t x26 = -1;
	int16_t x27 = 14;
	uint8_t x28 = UINT8_MAX;
	int32_t t5 = -9282;

    t5 = (x25-(x26/(x27%x28)));

    if (t5 != 32767) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x33 = INT16_MIN;
	uint32_t x34 = 2113U;
	uint32_t x35 = UINT32_MAX;
	int16_t x36 = INT16_MIN;
	uint32_t t6 = 27U;

    t6 = (x33-(x34/(x35%x36)));

    if (t6 != 4294934528U) { NG(); } else { ; }
	
}

void f7(void) {
    	static int64_t x37 = 169216791937LL;
	int8_t x38 = 62;
	int64_t x39 = -1LL;
	static int64_t x40 = INT64_MAX;
	static int64_t t7 = 120LL;

    t7 = (x37-(x38/(x39%x40)));

    if (t7 != 169216791999LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x45 = -1;
	static uint32_t x46 = 1003233U;
	int32_t x47 = INT32_MIN;
	static uint16_t x48 = 44U;
	volatile uint32_t t8 = UINT32_MAX;

    t8 = (x45-(x46/(x47%x48)));

    if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x49 = INT16_MAX;
	uint8_t x50 = UINT8_MAX;
	int16_t x51 = INT16_MIN;
	volatile int16_t x52 = -23;

    t9 = (x49-(x50/(x51%x52)));

    if (t9 != 32782) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x53 = 0U;
	static uint32_t x56 = UINT32_MAX;
	uint32_t t10 = 1011749103U;

    t10 = (x53-(x54/(x55%x56)));

    if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
    	static int8_t x57 = -1;
	int16_t x58 = 97;
	int64_t x59 = 31193LL;
	static int64_t t11 = 104419285LL;

    t11 = (x57-(x58/(x59%x60)));

    if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x61 = INT16_MIN;
	uint64_t x62 = 21283965082LLU;
	uint8_t x63 = 1U;
	int32_t x64 = -1846913;
	static volatile uint64_t t12 = 1040282036188694LLU;

    t12 = (x61-(x62/(x63%x64)));

    if (t12 != 18446744052425553766LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile uint16_t x65 = UINT16_MAX;
	int32_t x66 = INT32_MIN;
	int16_t x67 = INT16_MIN;
	int64_t x68 = 15951LL;

    t13 = (x65-(x66/(x67%x68)));

    if (t13 != -2414238LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x70 = INT16_MAX;
	int16_t x71 = 102;
	static int16_t x72 = -6859;
	volatile int32_t t14 = -5514591;

    t14 = (x69-(x70/(x71%x72)));

    if (t14 != -201) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x75 = -13539123997LL;
	uint64_t x76 = 32942617315LLU;
	uint64_t t15 = 1LLU;

    t15 = (x73-(x74/(x75%x76)));

    if (t15 != 127LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x81 = 0U;
	static uint8_t x82 = 25U;
	static int8_t x83 = -1;
	uint8_t x84 = UINT8_MAX;

    t16 = (x81-(x82/(x83%x84)));

    if (t16 != 25) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x85 = 273538111LLU;
	int64_t x86 = -1LL;
	uint32_t x87 = 231252U;
	uint64_t t17 = 23046174915740579LLU;

    t17 = (x85-(x86/(x87%x88)));

    if (t17 != 273538111LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x89 = 26U;
	static volatile int16_t x90 = 3;
	volatile int64_t x91 = 14LL;
	static int16_t x92 = INT16_MAX;
	volatile int64_t t18 = 1899043LL;

    t18 = (x89-(x90/(x91%x92)));

    if (t18 != 26LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x98 = -1;
	static int16_t x99 = INT16_MIN;
	volatile int64_t x100 = INT64_MAX;
	int64_t t19 = INT64_MIN;

    t19 = (x97-(x98/(x99%x100)));

    if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint16_t x102 = 1687U;
	uint64_t x104 = UINT64_MAX;

    t20 = (x101-(x102/(x103%x104)));

    if (t20 != 52LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x109 = INT16_MIN;
	volatile int16_t x110 = -1;
	static int64_t x111 = -1LL;
	volatile uint16_t x112 = 28113U;

    t21 = (x109-(x110/(x111%x112)));

    if (t21 != -32769LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x113 = INT16_MIN;
	int32_t x114 = INT32_MIN;
	int16_t x115 = 8097;
	uint32_t x116 = UINT32_MAX;
	volatile uint32_t t22 = 1U;

    t22 = (x113-(x114/(x115%x116)));

    if (t22 != 4294669309U) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint16_t x117 = 397U;
	int32_t x118 = INT32_MIN;
	int64_t x119 = INT64_MIN;
	int64_t t23 = -47238LL;

    t23 = (x117-(x118/(x119%x120)));

    if (t23 != 397LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile uint32_t x126 = UINT32_MAX;
	int32_t x127 = INT32_MIN;
	static uint16_t x128 = 30U;
	uint32_t t24 = 2177285U;

    t24 = (x125-(x126/(x127%x128)));

    if (t24 != 4294967167U) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x134 = 147;
	int8_t x135 = INT8_MIN;
	static volatile uint64_t x136 = UINT64_MAX;
	volatile uint64_t t25 = 46127661273495LLU;

    t25 = (x133-(x134/(x135%x136)));

    if (t25 != 18444810926673554988LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x137 = INT64_MIN;
	int32_t x138 = INT32_MAX;
	volatile int64_t x139 = 31926122727LL;

    t26 = (x137-(x138/(x139%x140)));

    if (t26 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x146 = -6269277069LL;
	int8_t x148 = INT8_MIN;
	volatile uint64_t t27 = 2157691036193727587LLU;

    t27 = (x145-(x146/(x147%x148)));

    if (t27 != 3372895LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x149 = -1;
	int32_t x150 = -97;
	uint64_t x152 = 1680434570LLU;

    t28 = (x149-(x150/(x151%x152)));

    if (t28 != 18446181106575736816LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int32_t x153 = INT32_MIN;
	volatile int32_t x154 = -1627;
	volatile int64_t x156 = INT64_MAX;
	uint64_t t29 = 38243LLU;

    t29 = (x153-(x154/(x155%x156)));

    if (t29 != 18431746718656613050LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x157 = -1;
	uint16_t x158 = 549U;
	volatile int16_t x159 = 79;
	uint8_t x160 = UINT8_MAX;
	volatile int32_t t30 = -108651412;

    t30 = (x157-(x158/(x159%x160)));

    if (t30 != -7) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x161 = 570778229U;
	int8_t x162 = -1;
	int64_t x163 = INT64_MAX;
	uint8_t x164 = 105U;
	int64_t t31 = -19009699316896LL;

    t31 = (x161-(x162/(x163%x164)));

    if (t31 != 570778229LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x165 = INT16_MIN;
	static int32_t x166 = -1;
	int64_t x168 = INT64_MIN;
	static int64_t t32 = 7800415469678LL;

    t32 = (x165-(x166/(x167%x168)));

    if (t32 != -32768LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x170 = INT8_MAX;
	int8_t x172 = -13;
	volatile int64_t t33 = -40613LL;

    t33 = (x169-(x170/(x171%x172)));

    if (t33 != 25LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x177 = 44;
	int16_t x178 = -1;
	volatile uint64_t x179 = 56LLU;
	static int16_t x180 = INT16_MIN;
	uint64_t t34 = 3092180LLU;

    t34 = (x177-(x178/(x179%x180)));

    if (t34 != 18117337929536166810LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x185 = -732065859;
	uint16_t x186 = UINT16_MAX;
	volatile int8_t x187 = INT8_MIN;
	int64_t x188 = 352465LL;
	volatile int64_t t35 = 1924155571851087854LL;

    t35 = (x185-(x186/(x187%x188)));

    if (t35 != -732065348LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x189 = 11U;
	uint8_t x190 = 20U;
	volatile int16_t x191 = INT16_MAX;
	static int64_t t36 = -5456684974952LL;

    t36 = (x189-(x190/(x191%x192)));

    if (t36 != 11LL) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x193 = 4;
	volatile int64_t x194 = INT64_MIN;
	int8_t x196 = INT8_MIN;

    t37 = (x193-(x194/(x195%x196)));

    if (t37 != 512409557603043104LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint8_t x197 = 0U;
	uint16_t x198 = UINT16_MAX;
	static volatile uint64_t x199 = UINT64_MAX;
	volatile int32_t x200 = INT32_MIN;

    t38 = (x197-(x198/(x199%x200)));

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x201 = 21616U;
	static volatile int8_t x202 = 6;
	int32_t x203 = INT32_MIN;
	int64_t x204 = INT64_MAX;
	volatile int64_t t39 = -3LL;

    t39 = (x201-(x202/(x203%x204)));

    if (t39 != 21616LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x209 = 1686907089LL;
	volatile uint32_t x210 = 1495U;
	uint32_t x211 = 158353692U;
	static volatile uint16_t x212 = 122U;
	volatile int64_t t40 = 1LL;

    t40 = (x209-(x210/(x211%x212)));

    if (t40 != 1686906940LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x215 = INT32_MIN;
	static int8_t x216 = INT8_MAX;
	static uint64_t t41 = 9488LLU;

    t41 = (x213-(x214/(x215%x216)));

    if (t41 != 17293822569162540891LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x217 = -1;
	int32_t x219 = INT32_MIN;
	int64_t x220 = INT64_MIN;
	int64_t t42 = -587028130763213007LL;

    t42 = (x217-(x218/(x219%x220)));

    if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x225 = INT16_MIN;
	int32_t x226 = -25269318;
	uint64_t x227 = 45735717721LLU;
	uint8_t x228 = UINT8_MAX;

    t43 = (x225-(x226/(x227%x228)));

    if (t43 != 18352628032517252102LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x229 = UINT16_MAX;
	int16_t x230 = -3;
	int16_t x231 = 3;
	int16_t x232 = INT16_MIN;
	static volatile int32_t t44 = -6635;

    t44 = (x229-(x230/(x231%x232)));

    if (t44 != 65536) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x241 = 1;
	static int64_t x242 = INT64_MIN;
	volatile uint32_t x243 = 1891817937U;
	uint64_t x244 = 1013LLU;
	volatile uint64_t t45 = 27956LLU;

    t45 = (x241-(x242/(x243%x244)));

    if (t45 != 18436826469368847557LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int64_t x246 = INT64_MIN;
	uint32_t x248 = 17586U;
	static uint64_t t46 = 14612LLU;

    t46 = (x245-(x246/(x247%x248)));

    if (t46 != 8754937588776121LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int32_t x253 = INT32_MAX;
	uint16_t x255 = UINT16_MAX;
	uint64_t x256 = 61530721727945564LLU;
	volatile uint64_t t47 = 50026415882899803LLU;

    t47 = (x253-(x254/(x255%x256)));

    if (t47 != 18446603336221163519LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x257 = 7;
	volatile int16_t x259 = -1;
	volatile int16_t x260 = INT16_MAX;
	static int32_t t48 = 555736;

    t48 = (x257-(x258/(x259%x260)));

    if (t48 != 6) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x261 = INT8_MIN;
	uint64_t x262 = 201220194301344373LLU;
	int32_t x263 = 750233;
	uint64_t x264 = UINT64_MAX;
	volatile uint64_t t49 = 1569127102002351834LLU;

    t49 = (x261-(x262/(x263%x264)));

    if (t49 != 18446743805499283077LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint8_t x265 = 54U;
	int32_t x266 = INT32_MIN;
	uint8_t x267 = 60U;
	int16_t x268 = 1018;

    t50 = (x265-(x266/(x267%x268)));

    if (t50 != 35791448) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint64_t x277 = 434444LLU;
	volatile uint32_t x278 = UINT32_MAX;
	volatile int64_t x279 = 3LL;
	volatile int64_t x280 = INT64_MIN;
	static volatile uint64_t t51 = 53066339273LLU;

    t51 = (x277-(x278/(x279%x280)));

    if (t51 != 18446744072278330295LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x282 = 72630U;
	int64_t x283 = -3827433349426732639LL;
	static volatile int64_t x284 = INT64_MIN;
	static uint64_t t52 = 5764425170LLU;

    t52 = (x281-(x282/(x283%x284)));

    if (t52 != 11057815597LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x285 = 1859118381U;
	int8_t x286 = INT8_MAX;
	int8_t x287 = INT8_MAX;
	int8_t x288 = INT8_MIN;
	uint32_t t53 = 1388418102U;

    t53 = (x285-(x286/(x287%x288)));

    if (t53 != 1859118380U) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint8_t x289 = 71U;
	static int16_t x290 = -1;
	uint32_t x291 = UINT32_MAX;
	static int32_t x292 = INT32_MIN;
	uint32_t t54 = 516U;

    t54 = (x289-(x290/(x291%x292)));

    if (t54 != 69U) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x294 = 4005557936368LLU;
	int64_t x295 = INT64_MIN;

    t55 = (x293-(x294/(x295%x296)));

    if (t55 != 18446744073709188519LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x297 = -32453;
	int16_t x298 = INT16_MIN;
	static volatile uint16_t x299 = 6U;
	int8_t x300 = INT8_MIN;
	int32_t t56 = -3;

    t56 = (x297-(x298/(x299%x300)));

    if (t56 != -26992) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x301 = 25U;
	static volatile int64_t x302 = INT64_MIN;
	uint16_t x303 = 7264U;
	uint16_t x304 = UINT16_MAX;
	int64_t t57 = 144LL;

    t57 = (x301-(x302/(x303%x304)));

    if (t57 != 1269737339875407LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x309 = -2;
	int8_t x310 = 0;
	static int16_t x311 = INT16_MIN;
	int32_t t58 = 428543;

    t58 = (x309-(x310/(x311%x312)));

    if (t58 != -2) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x321 = UINT64_MAX;
	int32_t x322 = 4324;
	int16_t x323 = INT16_MAX;
	volatile uint64_t t59 = UINT64_MAX;

    t59 = (x321-(x322/(x323%x324)));

    if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int32_t x325 = 10540;
	int64_t x326 = INT64_MAX;
	volatile int16_t x327 = -60;
	static int16_t x328 = INT16_MIN;
	int64_t t60 = -113173521992227LL;

    t60 = (x325-(x326/(x327%x328)));

    if (t60 != 153722867280923470LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x329 = 116U;
	uint32_t x330 = 30805324U;
	static uint16_t x331 = 69U;
	static uint64_t t61 = 8741LLU;

    t61 = (x329-(x330/(x331%x332)));

    if (t61 != 18446744073709105279LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x337 = INT32_MAX;
	uint32_t x338 = 36324U;
	uint8_t x339 = 73U;
	int64_t x340 = INT64_MIN;

    t62 = (x337-(x338/(x339%x340)));

    if (t62 != 2147483150LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x342 = -1;
	int16_t x343 = -1347;
	int64_t x344 = 6115LL;
	static volatile int64_t t63 = 38507412LL;

    t63 = (x341-(x342/(x343%x344)));

    if (t63 != 32767LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x349 = 90U;
	int8_t x350 = -61;
	uint64_t x352 = UINT64_MAX;
	static volatile uint64_t t64 = 6LLU;

    t64 = (x349-(x350/(x351%x352)));

    if (t64 != 89LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int64_t x357 = INT64_MIN;
	volatile int32_t x358 = INT32_MAX;
	int32_t x359 = -1;
	int32_t x360 = INT32_MIN;

    t65 = (x357-(x358/(x359%x360)));

    if (t65 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x365 = 60U;
	uint32_t x367 = 556U;
	int32_t x368 = -1382363;
	uint64_t t66 = 52LLU;

    t66 = (x365-(x366/(x367%x368)));

    if (t66 != 18446744073709551381LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile uint16_t x369 = UINT16_MAX;
	int32_t x370 = -15;
	int16_t x371 = -1;
	static int64_t x372 = INT64_MIN;
	int64_t t67 = -529609664322340LL;

    t67 = (x369-(x370/(x371%x372)));

    if (t67 != 65520LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x376 = 113803455LL;
	volatile int64_t t68 = -48856544716833LL;

    t68 = (x373-(x374/(x375%x376)));

    if (t68 != -2147483648LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x381 = UINT64_MAX;
	volatile int8_t x383 = INT8_MIN;
	uint64_t x384 = 1428438211LLU;

    t69 = (x381-(x382/(x383%x384)));

    if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x389 = -1;
	uint16_t x390 = 409U;
	static int64_t x391 = 1027785754661711LL;
	uint32_t x392 = 1120U;

    t70 = (x389-(x390/(x391%x392)));

    if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x393 = 8U;
	uint16_t x395 = 1053U;
	uint32_t x396 = UINT32_MAX;
	static volatile uint32_t t71 = 1755U;

    t71 = (x393-(x394/(x395%x396)));

    if (t71 != 4294967242U) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x401 = INT16_MIN;
	static uint32_t x402 = 1849U;
	int64_t x403 = -1LL;
	int64_t x404 = 110441LL;
	int64_t t72 = 0LL;

    t72 = (x401-(x402/(x403%x404)));

    if (t72 != -30919LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static int16_t x405 = -3;
	int32_t x406 = 1720;

    t73 = (x405-(x406/(x407%x408)));

    if (t73 != 1717) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x409 = INT8_MIN;
	volatile uint32_t x410 = 2U;
	int8_t x411 = INT8_MIN;
	uint64_t t74 = 1184LLU;

    t74 = (x409-(x410/(x411%x412)));

    if (t74 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x414 = -1;
	int8_t x415 = INT8_MIN;
	int8_t x416 = INT8_MAX;

    t75 = (x413-(x414/(x415%x416)));

    if (t75 != -2) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x417 = -130966170520LL;
	static int16_t x420 = INT16_MIN;
	static volatile int64_t t76 = -706LL;

    t76 = (x417-(x418/(x419%x420)));

    if (t76 != -131677585353LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x422 = -1;
	static int8_t x423 = -1;
	int16_t x424 = -48;

    t77 = (x421-(x422/(x423%x424)));

    if (t77 != 254) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x425 = 2223677594047585LL;
	uint64_t x426 = 595271369826478440LLU;
	int16_t x427 = -1;
	volatile uint64_t t78 = 5110294914LLU;

    t78 = (x425-(x426/(x427%x428)));

    if (t78 != 2223677594047585LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int8_t x433 = INT8_MIN;
	int16_t x434 = -1;
	volatile int8_t x435 = INT8_MAX;
	volatile uint8_t x436 = 7U;
	static int32_t t79 = 101216274;

    t79 = (x433-(x434/(x435%x436)));

    if (t79 != -127) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x437 = INT32_MIN;
	volatile int8_t x439 = INT8_MIN;
	int64_t x440 = INT64_MIN;

    t80 = (x437-(x438/(x439%x440)));

    if (t80 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x445 = -1;
	int16_t x446 = -1;
	volatile uint64_t x447 = 23371165804LLU;
	uint32_t x448 = UINT32_MAX;
	uint64_t t81 = 12765711836242LLU;

    t81 = (x445-(x446/(x447%x448)));

    if (t81 != 18446744063981945871LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x449 = 116715195678LL;
	int32_t x450 = -934;
	static volatile uint8_t x451 = UINT8_MAX;
	uint32_t x452 = 92002785U;
	static int64_t t82 = -407203812LL;

    t82 = (x449-(x450/(x451%x452)));

    if (t82 != 116698352673LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int16_t x454 = 5;
	int16_t x455 = -1;
	int64_t x456 = INT64_MAX;
	int64_t t83 = 32713717745028LL;

    t83 = (x453-(x454/(x455%x456)));

    if (t83 != 115LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x457 = -1204;
	int8_t x458 = INT8_MIN;
	int32_t x459 = -1;
	static volatile int16_t x460 = 12;
	static volatile int32_t t84 = -106278;

    t84 = (x457-(x458/(x459%x460)));

    if (t84 != -1332) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x461 = 27U;
	uint8_t x463 = 2U;
	static volatile int32_t t85 = -32727198;

    t85 = (x461-(x462/(x463%x464)));

    if (t85 != 26) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x465 = 1;
	static int64_t x466 = INT64_MIN;
	int16_t x467 = 830;
	int16_t x468 = INT16_MAX;
	static int64_t t86 = 10016LL;

    t86 = (x465-(x466/(x467%x468)));

    if (t86 != 11112496429945514LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x469 = INT32_MAX;
	int16_t x470 = INT16_MIN;
	int64_t x471 = -1LL;
	int64_t t87 = 66485LL;

    t87 = (x469-(x470/(x471%x472)));

    if (t87 != 2147450879LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x473 = 260960U;
	static volatile int32_t x474 = -1679;
	static volatile int16_t x475 = -1;
	int16_t x476 = 3468;
	volatile uint32_t t88 = 94818U;

    t88 = (x473-(x474/(x475%x476)));

    if (t88 != 259281U) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x477 = 440505LL;
	volatile int8_t x478 = -1;
	int32_t x479 = INT32_MAX;
	volatile int32_t x480 = -2;
	volatile int64_t t89 = 3747737331LL;

    t89 = (x477-(x478/(x479%x480)));

    if (t89 != 440506LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint32_t x485 = 943U;
	volatile uint8_t x486 = 90U;
	int32_t x487 = INT32_MIN;
	int64_t x488 = INT64_MIN;

    t90 = (x485-(x486/(x487%x488)));

    if (t90 != 943LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x489 = -4167211;
	uint16_t x490 = UINT16_MAX;
	static uint64_t x491 = UINT64_MAX;
	volatile uint16_t x492 = 228U;
	uint64_t t91 = 6361LLU;

    t91 = (x489-(x490/(x491%x492)));

    if (t91 != 18446744073705383815LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x493 = INT32_MIN;
	volatile uint32_t x494 = UINT32_MAX;
	uint32_t x495 = 1865994U;
	uint16_t x496 = UINT16_MAX;
	volatile uint32_t t92 = 372356385U;

    t92 = (x493-(x494/(x495%x496)));

    if (t92 != 2147345164U) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x497 = 35229176317744LLU;
	int32_t x498 = -1;
	static int64_t x499 = -60405268090LL;
	int32_t x500 = -687678410;
	uint64_t t93 = 1250190LLU;

    t93 = (x497-(x498/(x499%x500)));

    if (t93 != 35229176317744LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int32_t x505 = INT32_MIN;
	static int64_t x506 = INT64_MIN;
	int32_t x507 = INT32_MIN;
	static uint64_t x508 = UINT64_MAX;
	volatile uint64_t t94 = 4491357LLU;

    t94 = (x505-(x506/(x507%x508)));

    if (t94 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint32_t x510 = 138525227U;
	int64_t x512 = INT64_MIN;
	static int64_t t95 = 42913LL;

    t95 = (x509-(x510/(x511%x512)));

    if (t95 != 3639952LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x513 = 62;
	static volatile int32_t x514 = -889;
	int16_t x515 = -1;
	volatile int32_t t96 = 2931667;

    t96 = (x513-(x514/(x515%x516)));

    if (t96 != -827) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x517 = -1;
	volatile int64_t x518 = -1LL;
	static uint32_t x519 = 23078432U;
	volatile int8_t x520 = 45;
	int64_t t97 = 23156307LL;

    t97 = (x517-(x518/(x519%x520)));

    if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x521 = 1741840U;
	static int8_t x522 = 1;
	int16_t x523 = 22;
	uint16_t x524 = 26U;
	volatile uint32_t t98 = 15854U;

    t98 = (x521-(x522/(x523%x524)));

    if (t98 != 1741840U) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x525 = -1LL;
	volatile int32_t x526 = INT32_MIN;
	static int8_t x527 = -1;
	volatile int64_t x528 = INT64_MIN;
	int64_t t99 = 17819791516762226LL;

    t99 = (x525-(x526/(x527%x528)));

    if (t99 != -2147483649LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x529 = -1;
	static int32_t x530 = INT32_MAX;
	volatile uint8_t x532 = 60U;
	static int32_t t100 = 13;

    t100 = (x529-(x530/(x531%x532)));

    if (t100 != 2147483646) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x533 = INT8_MIN;
	uint64_t x535 = UINT64_MAX;
	int32_t x536 = INT32_MIN;
	static volatile uint64_t t101 = 21365531874LLU;

    t101 = (x533-(x534/(x535%x536)));

    if (t101 != 18446744065119616893LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x543 = INT32_MAX;
	static volatile uint16_t x544 = UINT16_MAX;
	volatile int32_t t102 = 36;

    t102 = (x541-(x542/(x543%x544)));

    if (t102 != 127) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x545 = INT16_MIN;
	int64_t x546 = -1431832443249LL;
	uint16_t x547 = 3U;
	volatile uint8_t x548 = UINT8_MAX;
	volatile int64_t t103 = -3221LL;

    t103 = (x545-(x546/(x547%x548)));

    if (t103 != 477277448315LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x554 = -1;
	int64_t x555 = -1LL;
	static volatile int8_t x556 = 9;
	volatile uint64_t t104 = 2753932LLU;

    t104 = (x553-(x554/(x555%x556)));

    if (t104 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x558 = INT8_MIN;
	int64_t x559 = INT64_MAX;
	uint32_t x560 = 310037U;
	static int64_t t105 = -47494359580865LL;

    t105 = (x557-(x558/(x559%x560)));

    if (t105 != 1LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint8_t x565 = UINT8_MAX;
	int8_t x566 = -1;
	int16_t x567 = INT16_MAX;
	int8_t x568 = INT8_MAX;
	volatile int32_t t106 = 53;

    t106 = (x565-(x566/(x567%x568)));

    if (t106 != 256) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x573 = INT16_MIN;
	volatile uint8_t x574 = UINT8_MAX;
	static int64_t x575 = -3653589234305LL;
	volatile int64_t t107 = 478LL;

    t107 = (x573-(x574/(x575%x576)));

    if (t107 != -32768LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x577 = 4;
	int32_t x578 = 360;
	static int32_t x579 = INT32_MIN;
	uint64_t t108 = 156637684021118388LLU;

    t108 = (x577-(x578/(x579%x580)));

    if (t108 != 4LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x581 = -1LL;
	int8_t x582 = -1;
	static volatile int32_t x583 = -255947189;
	static int8_t x584 = INT8_MAX;
	static int64_t t109 = -113LL;

    t109 = (x581-(x582/(x583%x584)));

    if (t109 != -1LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint32_t x586 = 226308U;
	int64_t x588 = INT64_MAX;
	volatile int64_t t110 = -24LL;

    t110 = (x585-(x586/(x587%x588)));

    if (t110 != 2147482760LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x589 = INT32_MAX;
	int8_t x591 = -3;
	uint16_t x592 = UINT16_MAX;
	int32_t t111 = INT32_MAX;

    t111 = (x589-(x590/(x591%x592)));

    if (t111 != INT32_MAX) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x593 = 1992;
	int8_t x594 = -26;
	int64_t x595 = 4429370184LL;
	static int64_t x596 = INT64_MAX;

    t112 = (x593-(x594/(x595%x596)));

    if (t112 != 1992LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int32_t x609 = -2884;
	static int64_t x610 = -1472712LL;
	uint32_t x611 = 6U;
	int8_t x612 = -1;
	int64_t t113 = 953126LL;

    t113 = (x609-(x610/(x611%x612)));

    if (t113 != 242568LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x613 = INT64_MAX;
	int16_t x614 = -1;
	uint32_t x615 = 1141860538U;
	uint8_t x616 = 40U;
	volatile int64_t t114 = 21014078108007697LL;

    t114 = (x613-(x614/(x615%x616)));

    if (t114 != 9223372036616166513LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile uint8_t x617 = UINT8_MAX;
	int64_t x618 = 1514603073LL;
	uint16_t x619 = 29U;
	int16_t x620 = INT16_MAX;
	int64_t t115 = -1245LL;

    t115 = (x617-(x618/(x619%x620)));

    if (t115 != -52227437LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x621 = -1;
	int32_t x622 = INT32_MAX;
	int64_t x624 = INT64_MIN;

    t116 = (x621-(x622/(x623%x624)));

    if (t116 != -2LL) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x625 = INT32_MIN;
	uint64_t x626 = 676004479128298865LLU;
	uint8_t x627 = 7U;
	uint16_t x628 = 8846U;
	uint64_t t117 = 1485877433LLU;

    t117 = (x625-(x626/(x627%x628)));

    if (t117 != 18350172003115168131LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x633 = 0U;
	uint64_t x634 = 42317035357LLU;
	static int32_t x635 = -1;
	int8_t x636 = INT8_MIN;

    t118 = (x633-(x634/(x635%x636)));

    if (t118 != 0LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x637 = INT8_MIN;
	static volatile int16_t x638 = -1;
	static int32_t x639 = INT32_MIN;
	volatile int32_t t119 = 0;

    t119 = (x637-(x638/(x639%x640)));

    if (t119 != -128) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x641 = -826102270;
	int64_t x642 = 71563175LL;
	int16_t x644 = INT16_MIN;

    t120 = (x641-(x642/(x643%x644)));

    if (t120 != -835047666LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint64_t x649 = 139450918825LLU;
	uint16_t x651 = 25U;
	volatile uint64_t t121 = 56120920426057913LLU;

    t121 = (x649-(x650/(x651%x652)));

    if (t121 != 139450918825LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x653 = -68;
	uint16_t x654 = UINT16_MAX;
	static int64_t x655 = 1LL;
	int8_t x656 = 35;

    t122 = (x653-(x654/(x655%x656)));

    if (t122 != -65603LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint32_t x657 = UINT32_MAX;
	static int8_t x659 = INT8_MIN;
	int32_t x660 = -10;
	volatile uint32_t t123 = 53U;

    t123 = (x657-(x658/(x659%x660)));

    if (t123 != 4094U) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x665 = INT8_MIN;
	static uint8_t x666 = UINT8_MAX;
	uint16_t x667 = 241U;
	static int8_t x668 = INT8_MAX;
	volatile int32_t t124 = 41;

    t124 = (x665-(x666/(x667%x668)));

    if (t124 != -130) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int64_t x670 = -1LL;
	uint8_t x672 = 10U;
	int64_t t125 = -15022140724563LL;

    t125 = (x669-(x670/(x671%x672)));

    if (t125 != 1LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x677 = INT32_MIN;
	uint16_t x678 = 334U;
	int16_t x679 = INT16_MAX;
	int32_t t126 = INT32_MIN;

    t126 = (x677-(x678/(x679%x680)));

    if (t126 != INT32_MIN) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x681 = -72;
	int16_t x682 = -1;
	static uint64_t x683 = 116569442884982408LLU;
	static int32_t x684 = -1;

    t127 = (x681-(x682/(x683%x684)));

    if (t127 != 18446744073709551386LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint8_t x685 = UINT8_MAX;
	volatile int32_t x686 = -1;
	int64_t x687 = INT64_MIN;
	int16_t x688 = -101;
	static volatile int64_t t128 = 170320074301762938LL;

    t128 = (x685-(x686/(x687%x688)));

    if (t128 != 255LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x689 = 6U;
	uint64_t t129 = 38593911329LLU;

    t129 = (x689-(x690/(x691%x692)));

    if (t129 != 12297829382473034417LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static int64_t x697 = INT64_MIN;
	int64_t x698 = INT64_MIN;
	uint8_t x699 = UINT8_MAX;
	int64_t x700 = INT64_MIN;

    t130 = (x697-(x698/(x699%x700)));

    if (t130 != -9187201950435737472LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x705 = INT32_MIN;
	uint32_t x707 = UINT32_MAX;
	int32_t x708 = 67;
	volatile uint64_t t131 = 486955162079750208LLU;

    t131 = (x705-(x706/(x707%x708)));

    if (t131 != 17870283319258644481LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x709 = INT16_MIN;
	int16_t x710 = INT16_MIN;
	volatile int64_t x711 = INT64_MIN;
	uint16_t x712 = 2521U;

    t132 = (x709-(x710/(x711%x712)));

    if (t132 != -32781LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x713 = -5;
	int32_t x714 = -41;
	int64_t x715 = -1LL;
	volatile int8_t x716 = INT8_MIN;
	static int64_t t133 = 12LL;

    t133 = (x713-(x714/(x715%x716)));

    if (t133 != -46LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x717 = -2078;
	volatile int32_t x718 = INT32_MIN;
	int64_t x719 = -14157922038LL;
	volatile uint32_t x720 = UINT32_MAX;
	volatile int64_t t134 = 7045008771LL;

    t134 = (x717-(x718/(x719%x720)));

    if (t134 != -2079LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x722 = INT8_MIN;
	uint32_t x723 = 4878U;
	volatile int64_t x724 = INT64_MAX;
	int64_t t135 = 8332246LL;

    t135 = (x721-(x722/(x723%x724)));

    if (t135 != 4LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x734 = INT8_MAX;
	volatile int64_t t136 = 7900LL;

    t136 = (x733-(x734/(x735%x736)));

    if (t136 != -32768LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x745 = 205414532U;
	uint8_t x746 = 2U;
	static uint32_t x747 = 24U;
	volatile uint16_t x748 = 28U;
	uint32_t t137 = 968U;

    t137 = (x745-(x746/(x747%x748)));

    if (t137 != 205414532U) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x761 = -1;
	static volatile int32_t x763 = INT32_MIN;
	int64_t x764 = INT64_MAX;
	static volatile int64_t t138 = -11784612035820921LL;

    t138 = (x761-(x762/(x763%x764)));

    if (t138 != -1LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x769 = INT16_MIN;
	int32_t x770 = -1;
	int16_t x771 = INT16_MIN;
	static int32_t x772 = 4216673;
	static int32_t t139 = -482908369;

    t139 = (x769-(x770/(x771%x772)));

    if (t139 != -32768) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x776 = INT32_MAX;
	int32_t t140 = -1;

    t140 = (x773-(x774/(x775%x776)));

    if (t140 != 37) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x785 = INT8_MIN;
	uint64_t x788 = 7414375030LLU;
	uint64_t t141 = 34114889017LLU;

    t141 = (x785-(x786/(x787%x788)));

    if (t141 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x797 = 0;
	static volatile int8_t x799 = INT8_MAX;
	int32_t x800 = INT32_MIN;

    t142 = (x797-(x798/(x799%x800)));

    if (t142 != 258) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x801 = 120935U;
	volatile int16_t x803 = -421;
	int32_t x804 = INT32_MIN;
	int64_t t143 = 24177493569LL;

    t143 = (x801-(x802/(x803%x804)));

    if (t143 != -21908247118298960LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint32_t x805 = 58793U;
	uint8_t x806 = 111U;
	volatile uint16_t x807 = UINT16_MAX;
	static int16_t x808 = INT16_MIN;
	uint32_t t144 = 738U;

    t144 = (x805-(x806/(x807%x808)));

    if (t144 != 58793U) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x809 = UINT16_MAX;
	volatile int64_t x811 = INT64_MAX;
	uint64_t x812 = 3LLU;
	uint64_t t145 = 1595LLU;

    t145 = (x809-(x810/(x811%x812)));

    if (t145 != 18444593235187154838LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x814 = -1;
	int64_t x815 = -1LL;
	int8_t x816 = -30;
	static volatile int64_t t146 = -3264734799193217LL;

    t146 = (x813-(x814/(x815%x816)));

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static int64_t x821 = -1LL;
	int8_t x822 = INT8_MAX;
	uint8_t x823 = 22U;
	int8_t x824 = INT8_MIN;
	int64_t t147 = -131446380578LL;

    t147 = (x821-(x822/(x823%x824)));

    if (t147 != -6LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x833 = -1LL;
	int16_t x834 = 231;
	int64_t x835 = INT64_MIN;
	int16_t x836 = INT16_MAX;
	volatile int64_t t148 = -167494LL;

    t148 = (x833-(x834/(x835%x836)));

    if (t148 != 27LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint8_t x837 = UINT8_MAX;
	static int32_t x838 = -120420;
	int8_t x839 = INT8_MIN;
	volatile uint8_t x840 = 63U;
	volatile int32_t t149 = 1864;

    t149 = (x837-(x838/(x839%x840)));

    if (t149 != -59955) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x841 = -19500457440490422LL;
	uint32_t x843 = 32692414U;
	int32_t x844 = INT32_MIN;
	volatile int64_t t150 = -3874486223LL;

    t150 = (x841-(x842/(x843%x844)));

    if (t150 != -19500457440490553LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x846 = 48LL;
	static int8_t x847 = -1;
	int64_t x848 = INT64_MIN;
	volatile int64_t t151 = 52LL;

    t151 = (x845-(x846/(x847%x848)));

    if (t151 != -32720LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int8_t x849 = -44;
	int16_t x850 = 123;
	int8_t x851 = INT8_MIN;
	volatile uint64_t x852 = 346807LLU;
	static uint64_t t152 = 6678458609018126652LLU;

    t152 = (x849-(x850/(x851%x852)));

    if (t152 != 18446744073709551572LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x858 = -1LL;
	int8_t x859 = -1;
	int64_t t153 = -10160LL;

    t153 = (x857-(x858/(x859%x860)));

    if (t153 != -2LL) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile uint16_t x861 = 4U;
	static int32_t x862 = -1;
	uint64_t x863 = UINT64_MAX;
	static int64_t x864 = INT64_MAX;
	uint64_t t154 = 2988248371400LLU;

    t154 = (x861-(x862/(x863%x864)));

    if (t154 != 5LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x865 = INT32_MAX;
	int64_t x866 = 2021321LL;
	volatile int64_t x867 = INT64_MIN;
	int64_t x868 = -2646LL;
	volatile int64_t t155 = 1843005583710732124LL;

    t155 = (x865-(x866/(x867%x868)));

    if (t155 != 2147484488LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint32_t x869 = 245770U;
	volatile int64_t t156 = 1LL;

    t156 = (x869-(x870/(x871%x872)));

    if (t156 != 245770LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x877 = INT16_MAX;
	int32_t x879 = 2574;
	int64_t x880 = INT64_MAX;
	volatile int64_t t157 = 15718304326767106LL;

    t157 = (x877-(x878/(x879%x880)));

    if (t157 != 32767LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static int64_t x881 = INT64_MIN;
	uint64_t x882 = UINT64_MAX;
	uint16_t x883 = 1U;
	int64_t x884 = -3739764LL;
	volatile uint64_t t158 = 2206856254952169321LLU;

    t158 = (x881-(x882/(x883%x884)));

    if (t158 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x885 = INT32_MIN;
	uint32_t x886 = 1715362U;
	int64_t x887 = 540403999694LL;
	uint8_t x888 = UINT8_MAX;
	static volatile int64_t t159 = 22LL;

    t159 = (x885-(x886/(x887%x888)));

    if (t159 != -2147502921LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x903 = INT8_MIN;
	static int32_t x904 = 972;

    t160 = (x901-(x902/(x903%x904)));

    if (t160 != 6034632318733LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x906 = INT16_MIN;
	int16_t x907 = INT16_MIN;
	static int32_t x908 = INT32_MAX;
	volatile int32_t t161 = -842546170;

    t161 = (x905-(x906/(x907%x908)));

    if (t161 != -920) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x909 = -1;
	int64_t x910 = -1LL;
	uint16_t x911 = 60U;
	int32_t x912 = INT32_MAX;
	int64_t t162 = -3536378709358LL;

    t162 = (x909-(x910/(x911%x912)));

    if (t162 != -1LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x917 = 117119U;
	int16_t x918 = INT16_MAX;
	volatile uint8_t x919 = 3U;

    t163 = (x917-(x918/(x919%x920)));

    if (t163 != 106197U) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x921 = INT16_MIN;
	static uint8_t x922 = 81U;
	int64_t x923 = -4773142957LL;
	int64_t x924 = INT64_MAX;
	int64_t t164 = 2055305987711LL;

    t164 = (x921-(x922/(x923%x924)));

    if (t164 != -32768LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x927 = INT16_MIN;
	static volatile int32_t t165 = -25;

    t165 = (x925-(x926/(x927%x928)));

    if (t165 != 227) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint16_t x930 = 19U;
	uint16_t x931 = 38U;
	int8_t x932 = INT8_MAX;

    t166 = (x929-(x930/(x931%x932)));

    if (t166 != INT64_MIN) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x933 = -1;
	uint64_t x934 = 117352914990LLU;
	uint16_t x935 = UINT16_MAX;
	volatile uint32_t x936 = 3326068U;
	static uint64_t t167 = 131924203231LLU;

    t167 = (x933-(x934/(x935%x936)));

    if (t167 != 18446744073707760925LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x941 = INT16_MIN;
	int32_t x942 = -1;
	int64_t x944 = INT64_MAX;
	int64_t t168 = -182515787291LL;

    t168 = (x941-(x942/(x943%x944)));

    if (t168 != -32768LL) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x951 = 4;
	static int8_t x952 = INT8_MIN;

    t169 = (x949-(x950/(x951%x952)));

    if (t169 != 18446744073668273530LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x953 = UINT32_MAX;
	static uint8_t x954 = UINT8_MAX;
	int8_t x955 = INT8_MIN;
	int64_t x956 = INT64_MAX;
	int64_t t170 = 11374LL;

    t170 = (x953-(x954/(x955%x956)));

    if (t170 != 4294967296LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int32_t x957 = -1;
	int64_t x958 = INT64_MIN;
	uint32_t x959 = 2684U;
	int8_t x960 = -3;
	int64_t t171 = -1031254465722009LL;

    t171 = (x957-(x958/(x959%x960)));

    if (t171 != 3436427733552449LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x961 = 2338160933320LLU;
	uint16_t x962 = UINT16_MAX;
	int16_t x963 = INT16_MIN;
	int32_t x964 = INT32_MIN;
	volatile uint64_t t172 = 26336866451LLU;

    t172 = (x961-(x962/(x963%x964)));

    if (t172 != 2338160933321LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint64_t x965 = 15683588283404LLU;
	int32_t x967 = 13;
	int32_t x968 = INT32_MIN;

    t173 = (x965-(x966/(x967%x968)));

    if (t173 != 15683588283413LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int16_t x969 = INT16_MAX;
	static int32_t x970 = -1;
	volatile uint64_t x971 = 14LLU;
	int32_t x972 = -1;
	volatile uint64_t t174 = 5680LLU;

    t174 = (x969-(x970/(x971%x972)));

    if (t174 != 17129119497016044982LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint32_t x973 = UINT32_MAX;
	static uint32_t x976 = UINT32_MAX;
	volatile uint32_t t175 = 278U;

    t175 = (x973-(x974/(x975%x976)));

    if (t175 != 4294967290U) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x977 = 3;
	int8_t x978 = -1;
	int16_t x979 = -54;
	int32_t x980 = -898541;
	int32_t t176 = 3311;

    t176 = (x977-(x978/(x979%x980)));

    if (t176 != 3) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x985 = UINT32_MAX;
	uint16_t x987 = 20U;

    t177 = (x985-(x986/(x987%x988)));

    if (t177 != 4294967289U) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x993 = 4U;
	static int16_t x995 = INT16_MIN;
	uint32_t x996 = 51720965U;
	volatile int64_t t178 = -293684945544687LL;

    t178 = (x993-(x994/(x995%x996)));

    if (t178 != 4LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint32_t x997 = 106U;
	int32_t x998 = INT32_MIN;
	uint32_t x1000 = 149U;

    t179 = (x997-(x998/(x999%x1000)));

    if (t179 != 4236927304U) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x1001 = -1;
	uint8_t x1002 = UINT8_MAX;
	static uint16_t x1003 = UINT16_MAX;
	uint16_t x1004 = 107U;
	int32_t t180 = -149611473;

    t180 = (x1001-(x1002/(x1003%x1004)));

    if (t180 != -6) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x1005 = -1;
	int32_t x1006 = -1;
	int64_t x1007 = 1642264182535794383LL;
	volatile int64_t x1008 = INT64_MIN;
	volatile int64_t t181 = -423914420181209LL;

    t181 = (x1005-(x1006/(x1007%x1008)));

    if (t181 != -1LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x1009 = UINT32_MAX;
	uint32_t x1010 = 0U;
	volatile uint16_t x1011 = 29U;
	volatile int64_t x1012 = INT64_MIN;
	static volatile int64_t t182 = -3596145626LL;

    t182 = (x1009-(x1010/(x1011%x1012)));

    if (t182 != 4294967295LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int32_t x1017 = -1;
	int8_t x1018 = 0;
	int16_t x1019 = INT16_MAX;
	static int64_t x1020 = INT64_MIN;
	volatile int64_t t183 = -3780890939789396LL;

    t183 = (x1017-(x1018/(x1019%x1020)));

    if (t183 != -1LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x1021 = UINT32_MAX;
	int8_t x1022 = INT8_MIN;
	int16_t x1023 = INT16_MIN;
	int64_t x1024 = INT64_MAX;
	static int64_t t184 = 3425010331227LL;

    t184 = (x1021-(x1022/(x1023%x1024)));

    if (t184 != 4294967295LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x1025 = 64889089;
	static volatile uint32_t x1026 = 56U;
	uint16_t x1028 = UINT16_MAX;
	volatile int64_t t185 = 651645029LL;

    t185 = (x1025-(x1026/(x1027%x1028)));

    if (t185 != 64889089LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x1033 = INT8_MIN;
	volatile uint32_t x1034 = 450U;
	static volatile int32_t x1035 = INT32_MAX;
	static int8_t x1036 = INT8_MAX;

    t186 = (x1033-(x1034/(x1035%x1036)));

    if (t186 != 4294967104U) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x1041 = 110652702U;
	uint16_t x1042 = 61U;
	static volatile int8_t x1044 = 24;

    t187 = (x1041-(x1042/(x1043%x1044)));

    if (t187 != 110652698U) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x1045 = UINT64_MAX;
	int16_t x1046 = INT16_MIN;
	volatile int32_t x1047 = -1;
	int32_t x1048 = INT32_MIN;

    t188 = (x1045-(x1046/(x1047%x1048)));

    if (t188 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int8_t x1049 = -1;
	int32_t x1050 = INT32_MAX;
	int32_t x1051 = -1;
	uint64_t x1052 = 9535739669972421LLU;

    t189 = (x1049-(x1050/(x1051%x1052)));

    if (t189 != UINT64_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x1053 = -1;
	static int16_t x1054 = -1;
	int8_t x1055 = 23;
	static int64_t x1056 = 955865815774039987LL;
	static int64_t t190 = 678722997297371585LL;

    t190 = (x1053-(x1054/(x1055%x1056)));

    if (t190 != -1LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint32_t x1057 = UINT32_MAX;
	int32_t x1058 = 41360348;
	uint8_t x1059 = 16U;
	volatile uint32_t x1060 = 1457U;
	volatile uint32_t t191 = 3019U;

    t191 = (x1057-(x1058/(x1059%x1060)));

    if (t191 != 4292382274U) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint16_t x1061 = UINT16_MAX;
	int16_t x1062 = -1;
	int8_t x1063 = 1;
	volatile int32_t x1064 = INT32_MIN;
	volatile int32_t t192 = 31;

    t192 = (x1061-(x1062/(x1063%x1064)));

    if (t192 != 65536) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x1065 = 1U;
	volatile uint8_t x1066 = 1U;
	static int64_t x1068 = INT64_MAX;

    t193 = (x1065-(x1066/(x1067%x1068)));

    if (t193 != 1LL) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int64_t x1069 = INT64_MAX;
	uint16_t x1070 = 7296U;
	int8_t x1071 = 7;
	int16_t x1072 = 16;
	int64_t t194 = -1955647557071590LL;

    t194 = (x1069-(x1070/(x1071%x1072)));

    if (t194 != 9223372036854774765LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x1077 = -213515189912543248LL;
	volatile int64_t x1078 = INT64_MIN;
	static int64_t x1080 = -999068LL;
	volatile int64_t t195 = 16685903815LL;

    t195 = (x1077-(x1078/(x1079%x1080)));

    if (t195 != -213796664889253904LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint8_t x1082 = 68U;
	volatile uint64_t x1083 = 394207579LLU;
	uint32_t x1084 = UINT32_MAX;
	uint64_t t196 = 1801577254655938LLU;

    t196 = (x1081-(x1082/(x1083%x1084)));

    if (t196 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x1088 = -493;
	int32_t t197 = 3;

    t197 = (x1085-(x1086/(x1087%x1088)));

    if (t197 != 146) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x1089 = UINT32_MAX;
	volatile uint32_t x1090 = UINT32_MAX;
	volatile int32_t x1091 = INT32_MAX;
	uint8_t x1092 = 61U;

    t198 = (x1089-(x1090/(x1091%x1092)));

    if (t198 != 4220916135U) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x1095 = INT8_MAX;
	int64_t t199 = INT64_MAX;

    t199 = (x1093-(x1094/(x1095%x1096)));

    if (t199 != INT64_MAX) { NG(); } else { ; }
	
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

