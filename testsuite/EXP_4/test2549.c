
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

static int8_t x1 = -1;
int32_t x4 = INT32_MIN;
volatile int32_t t1 = -428;
volatile uint64_t x12 = UINT64_MAX;
int8_t x21 = INT8_MAX;
uint64_t x22 = 11908915627LLU;
int16_t x29 = -1;
uint32_t x43 = 557358197U;
int8_t x44 = INT8_MIN;
static volatile int8_t x48 = 1;
volatile uint64_t t10 = 295001130105980LLU;
int16_t x49 = -1059;
int64_t x63 = -1LL;
static volatile int8_t x64 = INT8_MIN;
int32_t x73 = -722517;
uint64_t x80 = UINT64_MAX;
uint64_t x91 = 2045112LLU;
volatile uint64_t t20 = 1LLU;
static volatile uint32_t x100 = 1395382357U;
uint32_t t21 = 56U;
int64_t x102 = 7040030256LL;
static volatile int8_t x105 = INT8_MIN;
int16_t x106 = -1;
int16_t x108 = INT16_MIN;
volatile int32_t t23 = 206328;
int32_t x110 = 49;
static uint64_t x111 = 813LLU;
int16_t x112 = -1;
static uint64_t t24 = 45LLU;
int8_t x116 = -1;
int16_t x117 = INT16_MIN;
static uint32_t x120 = UINT32_MAX;
uint16_t x124 = UINT16_MAX;
int64_t t31 = -150822138889828LL;
static int64_t x153 = INT64_MIN;
static uint16_t x158 = 3U;
volatile uint64_t t34 = 7993LLU;
volatile uint64_t x162 = 23687697LLU;
volatile uint64_t t35 = 95241120943LLU;
int16_t x168 = INT16_MAX;
static uint64_t t36 = 18198025882745336LLU;
volatile int64_t x173 = -1LL;
volatile uint8_t x182 = 3U;
int64_t x188 = -1LL;
int16_t x192 = -1;
volatile uint64_t t44 = 2LLU;
static int64_t x207 = 65210679766362LL;
int64_t x212 = INT64_MIN;
int32_t x222 = INT32_MIN;
volatile int16_t x228 = -385;
int8_t x236 = INT8_MIN;
volatile int32_t t51 = -103551093;
uint64_t x275 = 517069624LLU;
volatile int64_t t58 = -36091595LL;
volatile uint32_t t59 = 450081U;
volatile int32_t x291 = INT32_MIN;
static volatile int32_t x305 = INT32_MIN;
uint64_t x307 = 66417646330058LLU;
uint64_t t62 = 2089200LLU;
uint16_t x315 = 42U;
uint16_t x316 = 6U;
static volatile int8_t x346 = INT8_MAX;
volatile int8_t x349 = INT8_MIN;
uint8_t x353 = 17U;
uint8_t x354 = 2U;
int32_t t72 = -77856;
int64_t x366 = -12385LL;
volatile int16_t x367 = -1;
volatile int64_t t73 = -3LL;
volatile uint64_t x377 = 1522LLU;
uint64_t t75 = 45775LLU;
volatile int16_t x381 = 274;
volatile uint32_t t76 = 0U;
volatile uint64_t t79 = 10LLU;
static volatile uint32_t t82 = 24981U;
volatile uint32_t t83 = 2866522U;
int8_t x419 = -1;
uint8_t x423 = 3U;
int16_t x428 = 10;
uint8_t x430 = UINT8_MAX;
static volatile uint8_t x432 = UINT8_MAX;
uint32_t x435 = 53845581U;
static volatile uint64_t t88 = 108781609LLU;
uint16_t x455 = 11686U;
int16_t x456 = -1;
static uint16_t x459 = UINT16_MAX;
int8_t x460 = -1;
int32_t t92 = 268;
int32_t x462 = 404338;
int64_t t94 = -114LL;
int16_t x470 = INT16_MIN;
int8_t x472 = INT8_MIN;
uint8_t x479 = UINT8_MAX;
int32_t t97 = 63097;
volatile int32_t x485 = -1;
int16_t x494 = -290;
uint16_t x499 = 1885U;
uint8_t x515 = 0U;
int64_t x546 = INT64_MIN;
static volatile uint8_t x547 = 45U;
volatile uint8_t x548 = 0U;
int8_t x554 = -1;
volatile int8_t x556 = INT8_MIN;
uint32_t t109 = 13U;
volatile int64_t t110 = 24106626391LL;
volatile int8_t x566 = INT8_MAX;
volatile int64_t x568 = INT64_MIN;
uint16_t x577 = 13911U;
volatile int16_t x579 = 5;
uint8_t x585 = UINT8_MAX;
int64_t x587 = INT64_MAX;
static uint64_t t117 = 795823LLU;
int8_t x590 = INT8_MIN;
uint64_t t118 = 42573781009820LLU;
int64_t x614 = -1304644146542093847LL;
static uint8_t x616 = 31U;
static uint32_t x624 = 1U;
volatile uint16_t x625 = 6U;
int64_t x631 = -1LL;
static uint64_t x644 = UINT64_MAX;
static volatile uint64_t t127 = 66183958182543298LLU;
int32_t x652 = 0;
uint16_t x659 = UINT16_MAX;
volatile uint32_t x662 = 16445460U;
int32_t x665 = -1;
static int16_t x679 = INT16_MIN;
volatile int8_t x693 = INT8_MIN;
volatile int16_t x695 = 3716;
int8_t x696 = INT8_MIN;
int8_t x700 = -2;
int64_t t142 = -8204523LL;
static int16_t x717 = -1;
int8_t x718 = INT8_MIN;
int64_t x719 = -9LL;
uint32_t x731 = 13428066U;
uint32_t x736 = UINT32_MAX;
static int8_t x740 = -57;
int32_t t146 = -33445941;
uint64_t x750 = UINT64_MAX;
static volatile int64_t x756 = INT64_MIN;
int8_t x757 = 1;
int16_t x761 = INT16_MIN;
int64_t x764 = INT64_MAX;
uint32_t t153 = 0U;
int32_t x776 = 1306;
uint64_t t156 = 94LLU;
int8_t x782 = -1;
volatile int32_t t157 = 3515566;
uint16_t x790 = UINT16_MAX;
int32_t x792 = -1;
volatile int32_t t158 = 0;
int64_t x795 = -3486LL;
uint64_t t161 = 4540496530681277310LLU;
uint64_t x806 = 3LLU;
uint64_t t162 = 1237LLU;
int8_t x814 = -48;
volatile uint32_t t163 = 17U;
int64_t x821 = 1746708LL;
static volatile int64_t t165 = 56LL;
volatile uint32_t x825 = UINT32_MAX;
int64_t x827 = -1LL;
volatile int32_t t167 = -7732954;
int32_t x833 = 334;
volatile int64_t t168 = 458382192492LL;
static int8_t x837 = -12;
int8_t x839 = INT8_MAX;
uint64_t t169 = 4081LLU;
volatile int8_t x847 = 0;
int16_t x855 = INT16_MIN;
static int32_t x856 = -1;
static int64_t t174 = 1LL;
uint8_t x861 = 1U;
int8_t x862 = INT8_MAX;
static volatile int64_t x868 = -8986021500706LL;
int16_t x875 = 11313;
volatile int8_t x878 = -1;
int8_t x887 = INT8_MIN;
int32_t x889 = 234126;
uint64_t x892 = 7980459688401695LLU;
int8_t x893 = INT8_MIN;
volatile int64_t x902 = -1LL;
uint16_t x904 = UINT16_MAX;
uint8_t x909 = 5U;
static uint8_t x917 = 1U;
uint16_t x918 = 69U;
static int64_t x922 = -1LL;
volatile int32_t x923 = -1;
int64_t t188 = -8457549999353604LL;
uint16_t x929 = 263U;
int32_t x931 = -1;
volatile int16_t x938 = INT16_MIN;
uint16_t x944 = 1U;
int16_t x951 = INT16_MAX;
volatile int32_t t195 = -3278;
int8_t x953 = -46;
uint32_t t197 = 86530077U;
int64_t x961 = INT64_MIN;
int32_t x964 = -1;


void f0(void) {
    	uint8_t x2 = 58U;
	int16_t x3 = INT16_MAX;
	int32_t t0 = -978484;

    t0 = (x1+(x2+(x3^x4)));

    if (t0 != -2147450824) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x5 = -67;
	int8_t x6 = INT8_MAX;
	static uint8_t x7 = 1U;
	uint8_t x8 = UINT8_MAX;

    t1 = (x5+(x6+(x7^x8)));

    if (t1 != 314) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x9 = -1;
	volatile uint32_t x10 = 36U;
	int32_t x11 = INT32_MIN;
	uint64_t t2 = 7026488075458225430LLU;

    t2 = (x9+(x10+(x11^x12)));

    if (t2 != 2147483682LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MIN;
	uint8_t x14 = 1U;
	static uint64_t x15 = 0LLU;
	static int64_t x16 = INT64_MIN;
	volatile uint64_t t3 = 1LLU;

    t3 = (x13+(x14+(x15^x16)));

    if (t3 != 9223372036854775681LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x17 = 0;
	volatile int64_t x18 = -1LL;
	static int8_t x19 = INT8_MIN;
	int16_t x20 = -1;
	volatile int64_t t4 = 0LL;

    t4 = (x17+(x18+(x19^x20)));

    if (t4 != 126LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x23 = INT16_MIN;
	int16_t x24 = 1;
	static volatile uint64_t t5 = 0LLU;

    t5 = (x21+(x22+(x23^x24)));

    if (t5 != 11908882987LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x25 = 12438U;
	uint8_t x26 = 2U;
	uint32_t x27 = 43U;
	uint16_t x28 = 36U;
	uint32_t t6 = 841947274U;

    t6 = (x25+(x26+(x27^x28)));

    if (t6 != 12455U) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x30 = 15829426U;
	volatile uint64_t x31 = 1694959012935798LLU;
	int64_t x32 = INT64_MAX;
	volatile uint64_t t7 = 100881045138LLU;

    t7 = (x29+(x30+(x31^x32)));

    if (t7 != 9221677077857669434LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = -6031;
	int32_t x34 = INT32_MIN;
	uint32_t x35 = 15U;
	volatile uint8_t x36 = UINT8_MAX;
	volatile uint32_t t8 = 46U;

    t8 = (x33+(x34+(x35^x36)));

    if (t8 != 2147477857U) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x41 = -1;
	int64_t x42 = INT64_MIN;
	static int64_t t9 = -31780270LL;

    t9 = (x41+(x42+(x43^x44)));

    if (t9 != -9223372033117166604LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x45 = -1;
	volatile int16_t x46 = 8046;
	uint64_t x47 = 2LLU;

    t10 = (x45+(x46+(x47^x48)));

    if (t10 != 8048LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x50 = INT16_MAX;
	static volatile int32_t x51 = 1430;
	int8_t x52 = INT8_MIN;
	int32_t t11 = 3696;

    t11 = (x49+(x50+(x51^x52)));

    if (t11 != 30194) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x53 = -155;
	uint16_t x54 = 22U;
	int16_t x55 = INT16_MIN;
	int64_t x56 = INT64_MIN;
	static volatile int64_t t12 = -3388865LL;

    t12 = (x53+(x54+(x55^x56)));

    if (t12 != 9223372036854742907LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x57 = 103;
	int32_t x58 = INT32_MIN;
	static uint32_t x59 = 15703U;
	volatile int16_t x60 = INT16_MIN;
	volatile uint32_t t13 = 2U;

    t13 = (x57+(x58+(x59^x60)));

    if (t13 != 2147466686U) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x61 = 1305;
	volatile int8_t x62 = INT8_MIN;
	volatile int64_t t14 = -30878498175776LL;

    t14 = (x61+(x62+(x63^x64)));

    if (t14 != 1304LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x69 = INT16_MIN;
	volatile int16_t x70 = -1076;
	volatile int8_t x71 = INT8_MIN;
	uint64_t x72 = 1965857774447LLU;
	uint64_t t15 = 123631233859323574LLU;

    t15 = (x69+(x70+(x71^x72)));

    if (t15 != 18446742107851743419LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint64_t x74 = UINT64_MAX;
	int16_t x75 = 45;
	volatile uint32_t x76 = 1020689U;
	static volatile uint64_t t16 = 4646LLU;

    t16 = (x73+(x74+(x75^x76)));

    if (t16 != 298214LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x77 = 146219;
	uint16_t x78 = 12U;
	uint32_t x79 = UINT32_MAX;
	static uint64_t t17 = 2099666349880LLU;

    t17 = (x77+(x78+(x79^x80)));

    if (t17 != 18446744069414730551LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x81 = 317;
	int8_t x82 = INT8_MAX;
	static int64_t x83 = 0LL;
	int16_t x84 = INT16_MIN;
	int64_t t18 = -17585765116966693LL;

    t18 = (x81+(x82+(x83^x84)));

    if (t18 != -32324LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile int8_t x85 = -1;
	int8_t x86 = INT8_MAX;
	static int64_t x87 = -40LL;
	static int64_t x88 = -1194907248065037814LL;
	static int64_t t19 = 4441LL;

    t19 = (x85+(x86+(x87^x88)));

    if (t19 != 1194907248065037904LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint64_t x89 = UINT64_MAX;
	int8_t x90 = -47;
	volatile int32_t x92 = INT32_MAX;

    t20 = (x89+(x90+(x91^x92)));

    if (t20 != 2145438487LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x97 = INT16_MAX;
	int8_t x98 = INT8_MIN;
	uint8_t x99 = UINT8_MAX;

    t21 = (x97+(x98+(x99^x100)));

    if (t21 != 1395415081U) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x101 = INT64_MIN;
	int32_t x103 = INT32_MIN;
	int64_t x104 = -238400150293LL;
	int64_t t22 = -142502588652387LL;

    t22 = (x101+(x102+(x103^x104)));

    if (t22 != -9223371789326042341LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x107 = INT8_MAX;

    t23 = (x105+(x106+(x107^x108)));

    if (t23 != -32770) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x109 = UINT8_MAX;

    t24 = (x109+(x110+(x111^x112)));

    if (t24 != 18446744073709551106LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x113 = -1LL;
	int8_t x114 = INT8_MAX;
	uint8_t x115 = UINT8_MAX;
	int64_t t25 = 213204291477LL;

    t25 = (x113+(x114+(x115^x116)));

    if (t25 != -130LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x118 = INT16_MIN;
	uint64_t x119 = 2173062868496LLU;
	uint64_t t26 = 8170575393496LLU;

    t26 = (x117+(x118+(x119^x120)));

    if (t26 != 2169149002223LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint8_t x121 = UINT8_MAX;
	uint8_t x122 = 1U;
	int16_t x123 = INT16_MIN;
	volatile int32_t t27 = -642329038;

    t27 = (x121+(x122+(x123^x124)));

    if (t27 != -32513) { NG(); } else { ; }
	
}

void f28(void) {
    	static int64_t x125 = INT64_MIN;
	uint32_t x126 = 97U;
	volatile int64_t x127 = 164LL;
	int8_t x128 = INT8_MAX;
	int64_t t28 = -148458755390LL;

    t28 = (x125+(x126+(x127^x128)));

    if (t28 != -9223372036854775492LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x129 = -204379LL;
	uint16_t x130 = 13425U;
	int32_t x131 = INT32_MIN;
	int32_t x132 = INT32_MAX;
	volatile int64_t t29 = -358LL;

    t29 = (x129+(x130+(x131^x132)));

    if (t29 != -190955LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x133 = 688353502U;
	uint8_t x134 = 6U;
	volatile int8_t x135 = INT8_MIN;
	uint8_t x136 = 40U;
	volatile uint32_t t30 = 0U;

    t30 = (x133+(x134+(x135^x136)));

    if (t30 != 688353420U) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x137 = INT16_MIN;
	static int8_t x138 = -1;
	volatile uint32_t x139 = 1699U;
	int64_t x140 = INT64_MAX;

    t31 = (x137+(x138+(x139^x140)));

    if (t31 != 9223372036854741339LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x149 = -1;
	static int32_t x150 = -1;
	uint16_t x151 = 761U;
	int64_t x152 = -1LL;
	int64_t t32 = -4270395312642LL;

    t32 = (x149+(x150+(x151^x152)));

    if (t32 != -764LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x154 = UINT64_MAX;
	uint64_t x155 = 15914434867LLU;
	uint8_t x156 = 4U;
	uint64_t t33 = 3014891124042442LLU;

    t33 = (x153+(x154+(x155^x156)));

    if (t33 != 9223372052769210678LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint32_t x157 = UINT32_MAX;
	uint64_t x159 = UINT64_MAX;
	static uint64_t x160 = 59568720535753855LLU;

    t34 = (x157+(x158+(x159^x160)));

    if (t34 != 18387175357468765058LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint8_t x161 = 55U;
	static int8_t x163 = -4;
	int32_t x164 = 227936;

    t35 = (x161+(x162+(x163^x164)));

    if (t35 != 23459812LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x165 = UINT64_MAX;
	volatile int32_t x166 = INT32_MIN;
	uint32_t x167 = UINT32_MAX;

    t36 = (x165+(x166+(x167^x168)));

    if (t36 != 2147450879LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint8_t x169 = UINT8_MAX;
	volatile int32_t x170 = INT32_MAX;
	uint64_t x171 = UINT64_MAX;
	static uint64_t x172 = 948975LLU;
	uint64_t t37 = 5740LLU;

    t37 = (x169+(x170+(x171^x172)));

    if (t37 != 2146534926LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x174 = 27U;
	volatile int32_t x175 = INT32_MAX;
	volatile int64_t x176 = -105925971206064774LL;
	int64_t t38 = -8LL;

    t38 = (x173+(x174+(x175^x176)));

    if (t38 != -105925972876211553LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x177 = -34;
	static int32_t x178 = INT32_MIN;
	static volatile int32_t x179 = INT32_MAX;
	volatile int32_t x180 = 677;
	volatile int32_t t39 = -10009116;

    t39 = (x177+(x178+(x179^x180)));

    if (t39 != -712) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x181 = -1;
	uint32_t x183 = UINT32_MAX;
	uint32_t x184 = 13897U;
	uint32_t t40 = 26961124U;

    t40 = (x181+(x182+(x183^x184)));

    if (t40 != 4294953400U) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x185 = INT16_MIN;
	uint32_t x186 = 9437U;
	int8_t x187 = 49;
	int64_t t41 = 46058LL;

    t41 = (x185+(x186+(x187^x188)));

    if (t41 != -23381LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x189 = 3U;
	uint64_t x190 = 3099079036LLU;
	volatile int8_t x191 = INT8_MIN;
	volatile uint64_t t42 = 974914LLU;

    t42 = (x189+(x190+(x191^x192)));

    if (t42 != 3099079166LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x193 = -1;
	int8_t x194 = 1;
	int64_t x195 = INT64_MAX;
	uint16_t x196 = 3U;
	volatile int64_t t43 = -1006420593650LL;

    t43 = (x193+(x194+(x195^x196)));

    if (t43 != 9223372036854775804LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x201 = 15147189883LLU;
	static int16_t x202 = INT16_MIN;
	uint32_t x203 = UINT32_MAX;
	static int64_t x204 = INT64_MAX;

    t44 = (x201+(x202+(x203^x204)));

    if (t44 != 9223372047706965627LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x205 = 1673;
	static int64_t x206 = 17016406124474LL;
	static int32_t x208 = INT32_MIN;
	int64_t t45 = 289308LL;

    t45 = (x205+(x206+(x207^x208)));

    if (t45 != -48196038501475LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static int64_t x209 = INT64_MIN;
	static int64_t x210 = INT64_MIN;
	uint64_t x211 = 693806251055468LLU;
	volatile uint64_t t46 = 6LLU;

    t46 = (x209+(x210+(x211^x212)));

    if (t46 != 9224065843105831276LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x217 = INT32_MIN;
	uint16_t x218 = 476U;
	uint8_t x219 = UINT8_MAX;
	int64_t x220 = 13417045278LL;
	volatile int64_t t47 = 108262LL;

    t47 = (x217+(x218+(x219^x220)));

    if (t47 != 11269562301LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x221 = INT8_MIN;
	volatile int16_t x223 = -1;
	uint64_t x224 = 6282623978004709LLU;
	uint64_t t48 = 4578950018LLU;

    t48 = (x221+(x222+(x223^x224)));

    if (t48 != 18440461447584063130LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x225 = -1LL;
	uint16_t x226 = 6218U;
	static uint32_t x227 = UINT32_MAX;
	static int64_t t49 = 6849LL;

    t49 = (x225+(x226+(x227^x228)));

    if (t49 != 6601LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x229 = 0U;
	volatile int16_t x230 = -2683;
	uint8_t x231 = 48U;
	static int16_t x232 = -55;
	volatile int32_t t50 = 1350;

    t50 = (x229+(x230+(x231^x232)));

    if (t50 != -2690) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x233 = UINT8_MAX;
	int8_t x234 = -1;
	int16_t x235 = 8346;

    t51 = (x233+(x234+(x235^x236)));

    if (t51 != -8168) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint16_t x245 = 1U;
	int16_t x246 = -55;
	static int8_t x247 = INT8_MAX;
	int16_t x248 = INT16_MAX;
	volatile int32_t t52 = -552705;

    t52 = (x245+(x246+(x247^x248)));

    if (t52 != 32586) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x253 = 5453;
	uint32_t x254 = UINT32_MAX;
	int16_t x255 = INT16_MIN;
	int8_t x256 = -1;
	static volatile uint32_t t53 = 19884U;

    t53 = (x253+(x254+(x255^x256)));

    if (t53 != 38219U) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int32_t x257 = -1;
	uint32_t x258 = 306U;
	uint64_t x259 = 107399499LLU;
	volatile int8_t x260 = -1;
	uint64_t t54 = 217532812853699LLU;

    t54 = (x257+(x258+(x259^x260)));

    if (t54 != 18446744073602152421LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x265 = -21;
	uint32_t x266 = 324361154U;
	int8_t x267 = -1;
	int64_t x268 = 6LL;
	int64_t t55 = -1LL;

    t55 = (x265+(x266+(x267^x268)));

    if (t55 != 324361126LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint32_t x269 = UINT32_MAX;
	int64_t x270 = -683042LL;
	int16_t x271 = INT16_MIN;
	static int64_t x272 = -1LL;
	static volatile int64_t t56 = -7LL;

    t56 = (x269+(x270+(x271^x272)));

    if (t56 != 4294317020LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x273 = INT8_MIN;
	uint64_t x274 = 640LLU;
	int32_t x276 = -1;
	uint64_t t57 = 2047573LLU;

    t57 = (x273+(x274+(x275^x276)));

    if (t57 != 18446744073192482503LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x277 = INT64_MAX;
	static volatile int64_t x278 = INT64_MIN;
	uint16_t x279 = UINT16_MAX;
	int64_t x280 = INT64_MAX;

    t58 = (x277+(x278+(x279^x280)));

    if (t58 != 9223372036854710271LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x285 = INT32_MAX;
	uint8_t x286 = 107U;
	static volatile uint32_t x287 = UINT32_MAX;
	int32_t x288 = INT32_MIN;

    t59 = (x285+(x286+(x287^x288)));

    if (t59 != 105U) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint8_t x289 = 14U;
	int64_t x290 = -1267LL;
	static int32_t x292 = INT32_MIN;
	volatile int64_t t60 = -13482455369LL;

    t60 = (x289+(x290+(x291^x292)));

    if (t60 != -1253LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x293 = -1LL;
	volatile uint16_t x294 = 11U;
	int8_t x295 = INT8_MIN;
	int16_t x296 = -1;
	static int64_t t61 = 1600914498912LL;

    t61 = (x293+(x294+(x295^x296)));

    if (t61 != 137LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x306 = -1LL;
	int32_t x308 = -61348;

    t62 = (x305+(x306+(x307^x308)));

    if (t62 != 18446677653915725973LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint64_t x309 = UINT64_MAX;
	int64_t x310 = INT64_MIN;
	static volatile uint64_t x311 = UINT64_MAX;
	uint32_t x312 = UINT32_MAX;
	uint64_t t63 = 1047730454146LLU;

    t63 = (x309+(x310+(x311^x312)));

    if (t63 != 9223372032559808511LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x313 = INT32_MIN;
	int8_t x314 = -1;
	volatile int32_t t64 = 128652;

    t64 = (x313+(x314+(x315^x316)));

    if (t64 != -2147483605) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x325 = 6U;
	int32_t x326 = 1;
	uint16_t x327 = UINT16_MAX;
	uint16_t x328 = 0U;
	int32_t t65 = 440;

    t65 = (x325+(x326+(x327^x328)));

    if (t65 != 65542) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x333 = INT8_MIN;
	static volatile int8_t x334 = INT8_MIN;
	static int16_t x335 = INT16_MAX;
	static int16_t x336 = INT16_MIN;
	int32_t t66 = 99520332;

    t66 = (x333+(x334+(x335^x336)));

    if (t66 != -257) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x341 = UINT32_MAX;
	int8_t x342 = -1;
	int32_t x343 = INT32_MIN;
	int64_t x344 = -132308LL;
	volatile int64_t t67 = -12409719LL;

    t67 = (x341+(x342+(x343^x344)));

    if (t67 != 6442318634LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x345 = UINT16_MAX;
	volatile int16_t x347 = 999;
	volatile int16_t x348 = -5054;
	volatile int32_t t68 = 13;

    t68 = (x345+(x346+(x347^x348)));

    if (t68 != 61475) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x350 = -1LL;
	volatile uint64_t x351 = 138LLU;
	uint32_t x352 = 0U;
	volatile uint64_t t69 = 436891LLU;

    t69 = (x349+(x350+(x351^x352)));

    if (t69 != 9LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x355 = 45487U;
	volatile int32_t x356 = -45;
	volatile uint32_t t70 = 1662U;

    t70 = (x353+(x354+(x355^x356)));

    if (t70 != 4294921871U) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x357 = -1;
	static volatile uint8_t x358 = 0U;
	int8_t x359 = -1;
	int32_t x360 = INT32_MIN;
	volatile int32_t t71 = 15;

    t71 = (x357+(x358+(x359^x360)));

    if (t71 != 2147483646) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x361 = UINT16_MAX;
	volatile int8_t x362 = -1;
	static int16_t x363 = INT16_MIN;
	int32_t x364 = -1;

    t72 = (x361+(x362+(x363^x364)));

    if (t72 != 98301) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x365 = 5;
	static int8_t x368 = INT8_MIN;

    t73 = (x365+(x366+(x367^x368)));

    if (t73 != -12253LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x369 = 8;
	static int16_t x370 = -1;
	uint8_t x371 = 1U;
	static volatile uint64_t x372 = 681766LLU;
	uint64_t t74 = 5929007131014454841LLU;

    t74 = (x369+(x370+(x371^x372)));

    if (t74 != 681774LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint64_t x378 = UINT64_MAX;
	static int8_t x379 = -1;
	static int8_t x380 = INT8_MAX;

    t75 = (x377+(x378+(x379^x380)));

    if (t75 != 1393LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x382 = 318U;
	int32_t x383 = INT32_MIN;
	uint8_t x384 = 1U;

    t76 = (x381+(x382+(x383^x384)));

    if (t76 != 2147484241U) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x385 = INT64_MIN;
	int8_t x386 = -4;
	volatile uint64_t x387 = 1170724236339356403LLU;
	volatile uint32_t x388 = 1U;
	volatile uint64_t t77 = 1392LLU;

    t77 = (x385+(x386+(x387^x388)));

    if (t77 != 10394096273194132206LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x393 = UINT8_MAX;
	static uint16_t x394 = UINT16_MAX;
	volatile int16_t x395 = -2;
	int8_t x396 = -1;
	int32_t t78 = 3;

    t78 = (x393+(x394+(x395^x396)));

    if (t78 != 65791) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x397 = 58636729U;
	int16_t x398 = -15256;
	int64_t x399 = INT64_MIN;
	uint64_t x400 = 49432938032LLU;

    t79 = (x397+(x398+(x399^x400)));

    if (t79 != 9223372086346335313LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint64_t x401 = 59480LLU;
	int16_t x402 = INT16_MAX;
	uint8_t x403 = 1U;
	int64_t x404 = INT64_MIN;
	uint64_t t80 = 81667199615492979LLU;

    t80 = (x401+(x402+(x403^x404)));

    if (t80 != 9223372036854868056LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x405 = -1LL;
	static uint16_t x406 = UINT16_MAX;
	static int64_t x407 = INT64_MIN;
	static int64_t x408 = 115298LL;
	volatile int64_t t81 = -615000LL;

    t81 = (x405+(x406+(x407^x408)));

    if (t81 != -9223372036854594976LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint32_t x409 = UINT32_MAX;
	int16_t x410 = -501;
	volatile int16_t x411 = INT16_MIN;
	int16_t x412 = -1;

    t82 = (x409+(x410+(x411^x412)));

    if (t82 != 32265U) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x413 = 6208;
	uint32_t x414 = UINT32_MAX;
	int32_t x415 = INT32_MIN;
	uint32_t x416 = 0U;

    t83 = (x413+(x414+(x415^x416)));

    if (t83 != 2147489855U) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x417 = -1LL;
	int8_t x418 = -1;
	int64_t x420 = INT64_MIN;
	int64_t t84 = 410061431LL;

    t84 = (x417+(x418+(x419^x420)));

    if (t84 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int64_t x421 = INT64_MIN;
	int32_t x422 = 339273;
	int16_t x424 = INT16_MAX;
	volatile int64_t t85 = 603262812638201424LL;

    t85 = (x421+(x422+(x423^x424)));

    if (t85 != -9223372036854403771LL) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint8_t x425 = UINT8_MAX;
	uint8_t x426 = 18U;
	static int32_t x427 = 1;
	static int32_t t86 = 42048;

    t86 = (x425+(x426+(x427^x428)));

    if (t86 != 284) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x429 = INT16_MIN;
	uint16_t x431 = UINT16_MAX;
	volatile int32_t t87 = -32;

    t87 = (x429+(x430+(x431^x432)));

    if (t87 != 32767) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x433 = 0;
	uint64_t x434 = 13821166182142LLU;
	volatile uint16_t x436 = UINT16_MAX;

    t88 = (x433+(x434+(x435^x436)));

    if (t88 != 13821220012208LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile int8_t x437 = INT8_MAX;
	uint32_t x438 = 1793U;
	volatile int64_t x439 = -1LL;
	uint64_t x440 = UINT64_MAX;
	uint64_t t89 = 897530LLU;

    t89 = (x437+(x438+(x439^x440)));

    if (t89 != 1920LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x449 = INT8_MIN;
	volatile int16_t x450 = 1;
	int8_t x451 = INT8_MIN;
	static int32_t x452 = 2013095;
	static volatile int32_t t90 = -48271093;

    t90 = (x449+(x450+(x451^x452)));

    if (t90 != -2013272) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x453 = -1;
	int16_t x454 = INT16_MIN;
	int32_t t91 = -327;

    t91 = (x453+(x454+(x455^x456)));

    if (t91 != -44456) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x457 = -12039360;
	volatile int16_t x458 = -1;

    t92 = (x457+(x458+(x459^x460)));

    if (t92 != -12104897) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x461 = UINT8_MAX;
	uint8_t x463 = UINT8_MAX;
	static uint16_t x464 = UINT16_MAX;
	volatile int32_t t93 = 121135435;

    t93 = (x461+(x462+(x463^x464)));

    if (t93 != 469873) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x465 = 220973064LL;
	volatile int64_t x466 = INT64_MAX;
	uint8_t x467 = 1U;
	static int32_t x468 = INT32_MIN;

    t94 = (x465+(x466+(x467^x468)));

    if (t94 != 9223372034928265224LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x469 = 11441626311650804LLU;
	static int32_t x471 = -1;
	uint64_t t95 = 102LLU;

    t95 = (x469+(x470+(x471^x472)));

    if (t95 != 11441626311618163LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint32_t x473 = UINT32_MAX;
	uint16_t x474 = UINT16_MAX;
	volatile int64_t x475 = 4569263156771679077LL;
	uint16_t x476 = 20766U;
	int64_t t96 = -156291273LL;

    t96 = (x473+(x474+(x475^x476)));

    if (t96 != 4569263161066699385LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x477 = -1;
	uint8_t x478 = UINT8_MAX;
	uint16_t x480 = UINT16_MAX;

    t97 = (x477+(x478+(x479^x480)));

    if (t97 != 65534) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint64_t x481 = UINT64_MAX;
	static int16_t x482 = INT16_MIN;
	uint64_t x483 = UINT64_MAX;
	int16_t x484 = -1;
	static uint64_t t98 = 303687479095137050LLU;

    t98 = (x481+(x482+(x483^x484)));

    if (t98 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x486 = 0;
	static volatile uint64_t x487 = 6911508865458241795LLU;
	volatile int32_t x488 = 241829;
	uint64_t t99 = 3319778959153356724LLU;

    t99 = (x485+(x486+(x487^x488)));

    if (t99 != 6911508865458221477LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile uint32_t x489 = 59381U;
	int16_t x490 = INT16_MIN;
	uint8_t x491 = UINT8_MAX;
	uint64_t x492 = UINT64_MAX;
	volatile uint64_t t100 = 6LLU;

    t100 = (x489+(x490+(x491^x492)));

    if (t100 != 26357LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x493 = -299373378LL;
	int32_t x495 = -1;
	uint8_t x496 = 6U;
	static volatile int64_t t101 = 2254166679019603631LL;

    t101 = (x493+(x494+(x495^x496)));

    if (t101 != -299373675LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x497 = INT16_MAX;
	uint8_t x498 = 0U;
	static int32_t x500 = 0;
	int32_t t102 = 31217;

    t102 = (x497+(x498+(x499^x500)));

    if (t102 != 34652) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x501 = INT16_MIN;
	int64_t x502 = INT64_MAX;
	int64_t x503 = INT64_MAX;
	static int32_t x504 = INT32_MIN;
	int64_t t103 = 100LL;

    t103 = (x501+(x502+(x503^x504)));

    if (t103 != 2147450878LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x513 = -1;
	static int64_t x514 = 0LL;
	int64_t x516 = 11733522407675LL;
	int64_t t104 = -1LL;

    t104 = (x513+(x514+(x515^x516)));

    if (t104 != 11733522407674LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x521 = INT16_MIN;
	uint32_t x522 = UINT32_MAX;
	int64_t x523 = 10900280410LL;
	uint64_t x524 = UINT64_MAX;
	uint64_t t105 = 1907478178LLU;

    t105 = (x521+(x522+(x523^x524)));

    if (t105 != 18446744067104205732LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x529 = UINT64_MAX;
	int16_t x530 = INT16_MIN;
	static int32_t x531 = -1;
	int8_t x532 = -1;
	static volatile uint64_t t106 = 3514308230057985LLU;

    t106 = (x529+(x530+(x531^x532)));

    if (t106 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x545 = 4904U;
	int64_t t107 = 8029LL;

    t107 = (x545+(x546+(x547^x548)));

    if (t107 != -9223372036854770859LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x549 = 4741492762767228235LLU;
	volatile int32_t x550 = INT32_MAX;
	static int16_t x551 = INT16_MIN;
	uint32_t x552 = UINT32_MAX;
	volatile uint64_t t108 = 5166027464LLU;

    t108 = (x549+(x550+(x551^x552)));

    if (t108 != 4741492764914744649LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x553 = INT16_MIN;
	uint32_t x555 = 22529558U;

    t109 = (x553+(x554+(x555^x556)));

    if (t109 != 4272404885U) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x557 = INT64_MIN;
	int8_t x558 = INT8_MIN;
	static int32_t x559 = INT32_MIN;
	int16_t x560 = INT16_MIN;

    t110 = (x557+(x558+(x559^x560)));

    if (t110 != -9223372034707325056LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x561 = 14;
	volatile int8_t x562 = 15;
	int64_t x563 = 108LL;
	int16_t x564 = -239;
	int64_t t111 = 61LL;

    t111 = (x561+(x562+(x563^x564)));

    if (t111 != -102LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x565 = -248048;
	int16_t x567 = INT16_MIN;
	int64_t t112 = 1LL;

    t112 = (x565+(x566+(x567^x568)));

    if (t112 != 9223372036854495119LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x569 = -46;
	uint32_t x570 = 38405631U;
	int16_t x571 = INT16_MAX;
	int32_t x572 = -236;
	volatile uint32_t t113 = 95982531U;

    t113 = (x569+(x570+(x571^x572)));

    if (t113 != 38373052U) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x573 = INT64_MIN;
	uint16_t x574 = 7602U;
	uint32_t x575 = UINT32_MAX;
	int32_t x576 = 536089;
	volatile int64_t t114 = -1240397LL;

    t114 = (x573+(x574+(x575^x576)));

    if (t114 != -9223372032560337000LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x578 = 13;
	int8_t x580 = INT8_MIN;
	int32_t t115 = 117;

    t115 = (x577+(x578+(x579^x580)));

    if (t115 != 13801) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint32_t x581 = UINT32_MAX;
	uint64_t x582 = 106295814414143LLU;
	int64_t x583 = INT64_MAX;
	volatile int16_t x584 = INT16_MIN;
	uint64_t t116 = 2361826151848LLU;

    t116 = (x581+(x582+(x583^x584)));

    if (t116 != 9223478336964190013LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x586 = -4645;
	uint64_t x588 = UINT64_MAX;

    t117 = (x585+(x586+(x587^x588)));

    if (t117 != 9223372036854771418LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint64_t x589 = 54192LLU;
	int64_t x591 = 30050650742228LL;
	volatile int8_t x592 = INT8_MAX;

    t118 = (x589+(x590+(x591^x592)));

    if (t118 != 30050650796251LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x597 = -1;
	static int32_t x598 = -860;
	static volatile int32_t x599 = INT32_MIN;
	int8_t x600 = INT8_MIN;
	volatile int32_t t119 = 2;

    t119 = (x597+(x598+(x599^x600)));

    if (t119 != 2147482659) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint64_t x601 = UINT64_MAX;
	static int32_t x602 = 8795;
	static volatile uint32_t x603 = 182944U;
	uint64_t x604 = UINT64_MAX;
	volatile uint64_t t120 = 344938931647731LLU;

    t120 = (x601+(x602+(x603^x604)));

    if (t120 != 18446744073709377465LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static int16_t x609 = 0;
	volatile int64_t x610 = 13LL;
	int8_t x611 = INT8_MIN;
	int16_t x612 = 1407;
	int64_t t121 = 84474543445140LL;

    t121 = (x609+(x610+(x611^x612)));

    if (t121 != -1268LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x613 = INT32_MAX;
	int32_t x615 = 0;
	volatile int64_t t122 = -44618LL;

    t122 = (x613+(x614+(x615^x616)));

    if (t122 != -1304644144394610169LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x621 = 3389U;
	uint16_t x622 = UINT16_MAX;
	static uint64_t x623 = UINT64_MAX;
	uint64_t t123 = 1LLU;

    t123 = (x621+(x622+(x623^x624)));

    if (t123 != 68922LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x626 = INT64_MAX;
	volatile int16_t x627 = 46;
	int64_t x628 = -1LL;
	volatile int64_t t124 = 35863307201234915LL;

    t124 = (x625+(x626+(x627^x628)));

    if (t124 != 9223372036854775766LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x629 = 460157473;
	int32_t x630 = INT32_MIN;
	uint64_t x632 = 3LLU;
	volatile uint64_t t125 = 371628LLU;

    t125 = (x629+(x630+(x631^x632)));

    if (t125 != 18446744072022225437LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x633 = UINT32_MAX;
	volatile uint8_t x634 = 8U;
	int8_t x635 = INT8_MAX;
	uint64_t x636 = UINT64_MAX;
	uint64_t t126 = 102823630LLU;

    t126 = (x633+(x634+(x635^x636)));

    if (t126 != 4294967175LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x641 = 1471;
	static uint64_t x642 = 30671LLU;
	uint16_t x643 = UINT16_MAX;

    t127 = (x641+(x642+(x643^x644)));

    if (t127 != 18446744073709518222LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x645 = 1311397023U;
	int8_t x646 = INT8_MAX;
	volatile uint16_t x647 = 604U;
	uint32_t x648 = 220U;
	volatile uint32_t t128 = 1453875543U;

    t128 = (x645+(x646+(x647^x648)));

    if (t128 != 1311397790U) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x649 = 3;
	int64_t x650 = INT64_MIN;
	int32_t x651 = 10;
	volatile int64_t t129 = -137LL;

    t129 = (x649+(x650+(x651^x652)));

    if (t129 != -9223372036854775795LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x657 = 2U;
	volatile uint8_t x658 = UINT8_MAX;
	uint8_t x660 = UINT8_MAX;
	volatile int32_t t130 = -160218;

    t130 = (x657+(x658+(x659^x660)));

    if (t130 != 65537) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x661 = 934339874U;
	volatile uint8_t x663 = UINT8_MAX;
	static int16_t x664 = INT16_MIN;
	volatile uint32_t t131 = 972400U;

    t131 = (x661+(x662+(x663^x664)));

    if (t131 != 950752821U) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x666 = -11;
	int16_t x667 = INT16_MIN;
	volatile uint64_t x668 = UINT64_MAX;
	static uint64_t t132 = 142270886893LLU;

    t132 = (x665+(x666+(x667^x668)));

    if (t132 != 32755LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x669 = INT16_MIN;
	uint32_t x670 = UINT32_MAX;
	uint32_t x671 = UINT32_MAX;
	int64_t x672 = INT64_MAX;
	volatile int64_t t133 = 68753LL;

    t133 = (x669+(x670+(x671^x672)));

    if (t133 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x677 = INT8_MAX;
	int64_t x678 = INT64_MIN;
	volatile int16_t x680 = INT16_MIN;
	int64_t t134 = 811406186655LL;

    t134 = (x677+(x678+(x679^x680)));

    if (t134 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x681 = INT8_MAX;
	volatile uint32_t x682 = 0U;
	uint32_t x683 = 6176U;
	volatile uint16_t x684 = UINT16_MAX;
	static volatile uint32_t t135 = 80309U;

    t135 = (x681+(x682+(x683^x684)));

    if (t135 != 59486U) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x685 = -1LL;
	static int64_t x686 = 4216LL;
	volatile int64_t x687 = 14LL;
	int64_t x688 = -1LL;
	int64_t t136 = 8733793472504744LL;

    t136 = (x685+(x686+(x687^x688)));

    if (t136 != 4200LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x689 = INT8_MIN;
	volatile uint32_t x690 = 19864071U;
	volatile uint32_t x691 = 15U;
	int16_t x692 = -1;
	volatile uint32_t t137 = 6085685U;

    t137 = (x689+(x690+(x691^x692)));

    if (t137 != 19863927U) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x694 = 10U;
	int32_t t138 = -156;

    t138 = (x693+(x694+(x695^x696)));

    if (t138 != -3954) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x697 = 55U;
	static volatile uint8_t x698 = UINT8_MAX;
	uint64_t x699 = UINT64_MAX;
	uint64_t t139 = 1942695333375374403LLU;

    t139 = (x697+(x698+(x699^x700)));

    if (t139 != 311LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x701 = INT32_MIN;
	static int64_t x702 = -1LL;
	static uint8_t x703 = UINT8_MAX;
	int8_t x704 = -3;
	static volatile int64_t t140 = -855502LL;

    t140 = (x701+(x702+(x703^x704)));

    if (t140 != -2147483903LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x709 = UINT16_MAX;
	static int64_t x710 = -7800966057LL;
	int64_t x711 = -3647883153349LL;
	uint16_t x712 = 29420U;
	volatile int64_t t141 = -455017388234996LL;

    t141 = (x709+(x710+(x711^x712)));

    if (t141 != -3655684081875LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x713 = INT8_MIN;
	static int64_t x714 = -727874693686LL;
	int64_t x715 = -1LL;
	static int16_t x716 = 1976;

    t142 = (x713+(x714+(x715^x716)));

    if (t142 != -727874695791LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x720 = 497491804820402155LLU;
	volatile uint64_t t143 = 141972440095720LLU;

    t143 = (x717+(x718+(x719^x720)));

    if (t143 != 17949252268889149339LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x729 = INT64_MIN;
	static int64_t x730 = 242380089LL;
	static int16_t x732 = INT16_MAX;
	volatile int64_t t144 = 433779439469455LL;

    t144 = (x729+(x730+(x731^x732)));

    if (t144 != -9223372036598986794LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x733 = -1044LL;
	static int64_t x734 = INT64_MIN;
	int64_t x735 = INT64_MAX;
	int64_t t145 = -112754841116041LL;

    t145 = (x733+(x734+(x735^x736)));

    if (t145 != -4294968340LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x737 = -7;
	uint8_t x738 = UINT8_MAX;
	static int16_t x739 = INT16_MIN;

    t146 = (x737+(x738+(x739^x740)));

    if (t146 != 32959) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x741 = INT32_MAX;
	volatile int16_t x742 = 11;
	volatile uint64_t x743 = UINT64_MAX;
	static uint8_t x744 = 63U;
	uint64_t t147 = 414436351LLU;

    t147 = (x741+(x742+(x743^x744)));

    if (t147 != 2147483594LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x745 = -1;
	int64_t x746 = -1LL;
	volatile int32_t x747 = INT32_MIN;
	int8_t x748 = -31;
	volatile int64_t t148 = 3LL;

    t148 = (x745+(x746+(x747^x748)));

    if (t148 != 2147483615LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static int16_t x749 = INT16_MIN;
	uint64_t x751 = 70616840078854417LLU;
	int16_t x752 = INT16_MIN;
	uint64_t t149 = 1879869549728LLU;

    t149 = (x749+(x750+(x751^x752)));

    if (t149 != 18376127233630636304LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x753 = 1;
	int16_t x754 = INT16_MIN;
	int32_t x755 = -141608;
	int64_t t150 = -27850919066870374LL;

    t150 = (x753+(x754+(x755^x756)));

    if (t150 != 9223372036854601433LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x758 = 39442275739LLU;
	volatile uint64_t x759 = UINT64_MAX;
	volatile int64_t x760 = -1LL;
	static uint64_t t151 = 5708387192LLU;

    t151 = (x757+(x758+(x759^x760)));

    if (t151 != 39442275740LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x762 = -1089082LL;
	uint64_t x763 = 1678749996000787310LLU;
	static volatile uint64_t t152 = 23LLU;

    t152 = (x761+(x762+(x763^x764)));

    if (t152 != 7544622040852866647LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x765 = 790593113U;
	int16_t x766 = INT16_MIN;
	uint32_t x767 = UINT32_MAX;
	static volatile uint8_t x768 = UINT8_MAX;

    t153 = (x765+(x766+(x767^x768)));

    if (t153 != 790560089U) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x769 = INT16_MIN;
	uint16_t x770 = 6U;
	int8_t x771 = INT8_MIN;
	int32_t x772 = -1;
	volatile int32_t t154 = -6560;

    t154 = (x769+(x770+(x771^x772)));

    if (t154 != -32635) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint32_t x773 = 46374U;
	volatile uint64_t x774 = 26962642930766LLU;
	uint16_t x775 = UINT16_MAX;
	uint64_t t155 = 34010218932751348LLU;

    t155 = (x773+(x774+(x775^x776)));

    if (t155 != 26962643041369LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x777 = INT64_MIN;
	uint64_t x778 = 1674015999LLU;
	uint16_t x779 = UINT16_MAX;
	volatile int32_t x780 = -1;

    t156 = (x777+(x778+(x779^x780)));

    if (t156 != 9223372038528726271LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int8_t x781 = INT8_MIN;
	int16_t x783 = INT16_MAX;
	int32_t x784 = INT32_MAX;

    t157 = (x781+(x782+(x783^x784)));

    if (t157 != 2147450751) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x789 = INT16_MAX;
	uint16_t x791 = 7385U;

    t158 = (x789+(x790+(x791^x792)));

    if (t158 != 90916) { NG(); } else { ; }
	
}

void f159(void) {
    	static int32_t x793 = 43536737;
	int32_t x794 = INT32_MAX;
	volatile uint64_t x796 = 4030576060332086609LLU;
	static volatile uint64_t t159 = 4817906349921645LLU;

    t159 = (x793+(x794+(x795^x796)));

    if (t159 != 14416168015568484499LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x797 = -961;
	int16_t x798 = -1;
	volatile uint8_t x799 = UINT8_MAX;
	int8_t x800 = -1;
	volatile int32_t t160 = -4980530;

    t160 = (x797+(x798+(x799^x800)));

    if (t160 != -1218) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x801 = -1;
	int16_t x802 = INT16_MAX;
	uint64_t x803 = UINT64_MAX;
	int64_t x804 = 31LL;

    t161 = (x801+(x802+(x803^x804)));

    if (t161 != 32734LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int8_t x805 = INT8_MIN;
	int8_t x807 = 2;
	static int32_t x808 = -1;

    t162 = (x805+(x806+(x807^x808)));

    if (t162 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x813 = INT8_MAX;
	volatile uint32_t x815 = 0U;
	int16_t x816 = -160;

    t163 = (x813+(x814+(x815^x816)));

    if (t163 != 4294967215U) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x817 = INT64_MIN;
	static uint32_t x818 = UINT32_MAX;
	static uint8_t x819 = UINT8_MAX;
	int32_t x820 = INT32_MAX;
	volatile int64_t t164 = -29LL;

    t164 = (x817+(x818+(x819^x820)));

    if (t164 != -9223372034707292417LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static int16_t x822 = -1;
	int16_t x823 = 959;
	uint8_t x824 = 0U;

    t165 = (x821+(x822+(x823^x824)));

    if (t165 != 1747666LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x826 = INT32_MIN;
	int8_t x828 = INT8_MIN;
	int64_t t166 = 6053720440149LL;

    t166 = (x825+(x826+(x827^x828)));

    if (t166 != 2147483774LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x829 = UINT8_MAX;
	static int16_t x830 = INT16_MIN;
	uint16_t x831 = 79U;
	uint8_t x832 = 29U;

    t167 = (x829+(x830+(x831^x832)));

    if (t167 != -32431) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x834 = 1924U;
	int64_t x835 = 3210536358467LL;
	int64_t x836 = INT64_MIN;

    t168 = (x833+(x834+(x835^x836)));

    if (t168 != -9223368826318415083LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x838 = UINT64_MAX;
	static volatile int8_t x840 = -1;

    t169 = (x837+(x838+(x839^x840)));

    if (t169 != 18446744073709551475LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint64_t x841 = 4010156752291885LLU;
	uint32_t x842 = 273843441U;
	uint32_t x843 = 165U;
	static int32_t x844 = 9055;
	volatile uint64_t t170 = 5444981118049LLU;

    t170 = (x841+(x842+(x843^x844)));

    if (t170 != 4010157026144536LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x845 = -4;
	int32_t x846 = INT32_MIN;
	uint16_t x848 = 1961U;
	int32_t t171 = 478941640;

    t171 = (x845+(x846+(x847^x848)));

    if (t171 != -2147481691) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x849 = INT16_MAX;
	uint16_t x850 = 268U;
	int8_t x851 = INT8_MAX;
	int32_t x852 = INT32_MIN;
	static int32_t t172 = -78736506;

    t172 = (x849+(x850+(x851^x852)));

    if (t172 != -2147450486) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x853 = INT32_MIN;
	volatile uint16_t x854 = 18U;
	volatile int32_t t173 = 417977188;

    t173 = (x853+(x854+(x855^x856)));

    if (t173 != -2147450863) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x857 = INT64_MIN;
	uint16_t x858 = UINT16_MAX;
	int16_t x859 = INT16_MAX;
	volatile int8_t x860 = -1;

    t174 = (x857+(x858+(x859^x860)));

    if (t174 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile int32_t x863 = -1;
	int16_t x864 = INT16_MIN;
	static volatile int32_t t175 = -6;

    t175 = (x861+(x862+(x863^x864)));

    if (t175 != 32895) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x865 = UINT8_MAX;
	int32_t x866 = 11803;
	uint64_t x867 = 3888560308258143LLU;
	volatile uint64_t t176 = 777262406357LLU;

    t176 = (x865+(x866+(x867^x868)));

    if (t176 != 18442846632358583451LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x873 = 17455;
	int32_t x874 = -2;
	static int8_t x876 = INT8_MAX;
	static volatile int32_t t177 = -1146;

    t177 = (x873+(x874+(x875^x876)));

    if (t177 != 28795) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint64_t x877 = UINT64_MAX;
	int16_t x879 = INT16_MIN;
	volatile int16_t x880 = INT16_MIN;
	volatile uint64_t t178 = 9177537451087817060LLU;

    t178 = (x877+(x878+(x879^x880)));

    if (t178 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x881 = UINT32_MAX;
	int8_t x882 = INT8_MIN;
	uint8_t x883 = 0U;
	uint32_t x884 = UINT32_MAX;
	static volatile uint32_t t179 = 4U;

    t179 = (x881+(x882+(x883^x884)));

    if (t179 != 4294967166U) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint16_t x885 = 25191U;
	int16_t x886 = INT16_MAX;
	int32_t x888 = -11;
	static volatile int32_t t180 = 6320813;

    t180 = (x885+(x886+(x887^x888)));

    if (t180 != 58075) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x890 = 1;
	int64_t x891 = 864127LL;
	uint64_t t181 = 2337661LLU;

    t181 = (x889+(x890+(x891^x892)));

    if (t181 != 7980459687790319LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x894 = UINT32_MAX;
	int64_t x895 = -167010442678LL;
	uint16_t x896 = 330U;
	volatile int64_t t182 = -233LL;

    t182 = (x893+(x894+(x895^x896)));

    if (t182 != -162715475329LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x897 = INT32_MIN;
	volatile int8_t x898 = INT8_MAX;
	volatile int16_t x899 = INT16_MIN;
	int64_t x900 = INT64_MIN;
	int64_t t183 = -2569323673LL;

    t183 = (x897+(x898+(x899^x900)));

    if (t183 != 9223372034707259519LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x901 = 3719U;
	volatile int8_t x903 = 3;
	int64_t t184 = 166LL;

    t184 = (x901+(x902+(x903^x904)));

    if (t184 != 69250LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x910 = INT32_MAX;
	uint64_t x911 = UINT64_MAX;
	volatile int32_t x912 = -50164184;
	uint64_t t185 = 15432964219998LLU;

    t185 = (x909+(x910+(x911^x912)));

    if (t185 != 2197647835LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x913 = 932U;
	volatile uint64_t x914 = UINT64_MAX;
	int64_t x915 = -1LL;
	volatile int32_t x916 = -1;
	static volatile uint64_t t186 = 2658LLU;

    t186 = (x913+(x914+(x915^x916)));

    if (t186 != 931LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x919 = 61;
	static uint32_t x920 = 8U;
	uint32_t t187 = 403859U;

    t187 = (x917+(x918+(x919^x920)));

    if (t187 != 123U) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x921 = 10905;
	static int16_t x924 = -1;

    t188 = (x921+(x922+(x923^x924)));

    if (t188 != 10904LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x925 = 0LLU;
	uint64_t x926 = 25LLU;
	volatile int16_t x927 = -1;
	static int64_t x928 = -340489LL;
	uint64_t t189 = 250LLU;

    t189 = (x925+(x926+(x927^x928)));

    if (t189 != 340513LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x930 = INT16_MIN;
	uint64_t x932 = UINT64_MAX;
	static uint64_t t190 = 26LLU;

    t190 = (x929+(x930+(x931^x932)));

    if (t190 != 18446744073709519111LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x933 = 5866991079729127LLU;
	int64_t x934 = 1LL;
	int32_t x935 = INT32_MIN;
	static int8_t x936 = 4;
	volatile uint64_t t191 = 1LLU;

    t191 = (x933+(x934+(x935^x936)));

    if (t191 != 5866988932245484LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int32_t x937 = INT32_MAX;
	volatile int64_t x939 = INT64_MAX;
	int64_t x940 = 722149468002546LL;
	int64_t t192 = 63537973LL;

    t192 = (x937+(x938+(x939^x940)));

    if (t192 != 9222649889534224140LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x941 = INT16_MIN;
	static int16_t x942 = INT16_MIN;
	static uint16_t x943 = UINT16_MAX;
	int32_t t193 = 18931;

    t193 = (x941+(x942+(x943^x944)));

    if (t193 != -2) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint32_t x945 = UINT32_MAX;
	static uint32_t x946 = 247473U;
	int32_t x947 = 447;
	int64_t x948 = -1LL;
	volatile int64_t t194 = 5759565040LL;

    t194 = (x945+(x946+(x947^x948)));

    if (t194 != 4295214320LL) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int32_t x949 = 29712;
	int16_t x950 = INT16_MAX;
	uint16_t x952 = UINT16_MAX;

    t195 = (x949+(x950+(x951^x952)));

    if (t195 != 95247) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x954 = 1;
	int8_t x955 = INT8_MAX;
	uint16_t x956 = 16296U;
	static int32_t t196 = -1037959;

    t196 = (x953+(x954+(x955^x956)));

    if (t196 != 16298) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint32_t x957 = 1345045U;
	uint32_t x958 = 91433U;
	volatile uint32_t x959 = UINT32_MAX;
	int8_t x960 = 2;

    t197 = (x957+(x958+(x959^x960)));

    if (t197 != 1436475U) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x962 = -1LL;
	static uint64_t x963 = UINT64_MAX;
	uint64_t t198 = 18206275154011LLU;

    t198 = (x961+(x962+(x963^x964)));

    if (t198 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x965 = 0;
	uint64_t x966 = 514LLU;
	static int16_t x967 = INT16_MIN;
	int64_t x968 = INT64_MIN;
	volatile uint64_t t199 = 3655212011582029100LLU;

    t199 = (x965+(x966+(x967^x968)));

    if (t199 != 9223372036854743554LLU) { NG(); } else { ; }
	
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

