
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

int16_t x3 = INT16_MIN;
uint64_t x10 = UINT64_MAX;
int16_t x12 = -1;
uint32_t x19 = 2094026519U;
uint64_t x20 = UINT64_MAX;
int64_t x32 = -1LL;
static volatile int8_t x41 = INT8_MIN;
int32_t x44 = 798;
uint32_t x54 = 388267525U;
int64_t x68 = INT64_MIN;
static int8_t x80 = 8;
int8_t x97 = INT8_MIN;
static int64_t x99 = INT64_MAX;
int16_t x102 = INT16_MIN;
int32_t x103 = 81906;
int32_t x104 = -1;
static int32_t t18 = -1;
uint64_t x115 = 80561LLU;
volatile uint8_t x129 = UINT8_MAX;
int32_t x132 = INT32_MIN;
uint64_t t22 = 1707062173697LLU;
int8_t x143 = INT8_MIN;
volatile int32_t x144 = 3682480;
static volatile int8_t x151 = 32;
static volatile int64_t t25 = 109541581LL;
int64_t x154 = INT64_MIN;
uint64_t t26 = 166233LLU;
static uint8_t x168 = 2U;
int8_t x169 = -1;
int8_t x171 = INT8_MIN;
volatile uint32_t x179 = 98857152U;
volatile int8_t x180 = INT8_MAX;
uint32_t x185 = 2U;
uint16_t x188 = 114U;
static int8_t x196 = -1;
uint8_t x200 = 0U;
uint32_t x222 = UINT32_MAX;
uint64_t x224 = 1844LLU;
volatile int64_t x229 = INT64_MAX;
static uint64_t x231 = UINT64_MAX;
static int8_t x234 = INT8_MIN;
uint32_t x235 = UINT32_MAX;
volatile uint32_t t41 = 221U;
int16_t x261 = INT16_MIN;
volatile int8_t x282 = INT8_MIN;
uint64_t x285 = 1737LLU;
uint16_t x287 = UINT16_MAX;
volatile uint64_t t48 = 661033LLU;
int8_t x292 = 0;
int64_t x296 = -1LL;
uint64_t x297 = 633249435469LLU;
uint64_t x303 = 1LLU;
uint64_t t52 = 434579123620972LLU;
uint32_t x309 = UINT32_MAX;
int16_t x327 = INT16_MIN;
static volatile int32_t x335 = -1;
static int32_t t59 = 0;
int32_t x344 = 7370;
int16_t x353 = -5;
static uint64_t t65 = 32LLU;
int16_t x378 = INT16_MIN;
uint64_t x385 = UINT64_MAX;
static uint16_t x388 = UINT16_MAX;
static uint64_t x401 = 305LLU;
int8_t x404 = INT8_MIN;
int64_t x408 = INT64_MIN;
static int32_t x424 = -31801;
int8_t x462 = -2;
int16_t x474 = -1;
int64_t t82 = 3189965LL;
int32_t x489 = -14;
volatile uint64_t t83 = 6385726158LLU;
static uint64_t t84 = 48722747LLU;
uint32_t x502 = UINT32_MAX;
static uint8_t x504 = UINT8_MAX;
static uint8_t x508 = UINT8_MAX;
volatile int8_t x510 = 15;
int64_t x511 = -1LL;
int64_t t87 = -138710536286306LL;
static int32_t x522 = INT32_MAX;
uint8_t x532 = 14U;
volatile uint64_t t92 = 14751954148580903LLU;
int64_t x544 = -6LL;
int16_t x545 = -1;
uint32_t x566 = 5U;
volatile uint64_t t97 = 2940306LLU;
volatile int32_t t98 = 695388;
int8_t x584 = -43;
static int16_t x593 = 22;
static uint8_t x605 = 1U;
int64_t x607 = 2554112LL;
uint8_t x611 = 5U;
int64_t t103 = 17538444051187LL;
int8_t x618 = -1;
int16_t x632 = -1;
static volatile uint8_t x638 = 1U;
int32_t t106 = 13882;
static volatile uint8_t x651 = 95U;
uint64_t x652 = 26LLU;
static int64_t x658 = 220822795913720949LL;
int16_t x664 = INT16_MIN;
static int64_t t112 = 890484843002LL;
uint64_t t116 = 3LLU;
int64_t x692 = -5633LL;
int64_t x695 = -59512766530LL;
uint32_t x703 = UINT32_MAX;
volatile int64_t x708 = 6228026868186LL;
int16_t x717 = -1935;
volatile uint64_t x719 = 16833983LLU;
int16_t x722 = INT16_MAX;
uint64_t t123 = 393LLU;
static uint32_t x743 = UINT32_MAX;
static int32_t x744 = -1;
uint8_t x749 = UINT8_MAX;
int32_t x756 = INT32_MIN;
static volatile int32_t x766 = -633;
int16_t x777 = -1;
uint16_t x791 = UINT16_MAX;
int64_t t137 = -26565763298LL;
uint64_t x801 = 38295LLU;
int64_t x803 = INT64_MIN;
static uint64_t t138 = 25466028624320LLU;
volatile int32_t x810 = -1;
volatile int16_t x811 = -3;
static int64_t x816 = 9876259LL;
int8_t x820 = -1;
uint64_t x824 = 17343LLU;
int16_t x827 = 1585;
uint64_t x832 = 1976767552935640538LLU;
int8_t x838 = -1;
int16_t x849 = INT16_MAX;
int16_t x870 = INT16_MAX;
static int32_t t150 = -2081;
uint16_t x893 = 1531U;
static int16_t x909 = INT16_MIN;
uint8_t x912 = 8U;
int32_t x922 = -1;
volatile int64_t x948 = -263262LL;
volatile int64_t t160 = -688218365545969872LL;
volatile int8_t x949 = INT8_MAX;
static uint32_t x950 = 7408U;
int8_t x993 = -23;
int32_t x995 = -1;
uint16_t x997 = 236U;
volatile int32_t t166 = 1;
volatile uint16_t x1005 = UINT16_MAX;
static int32_t x1007 = INT32_MAX;
uint64_t x1040 = 52872816049392LLU;
uint16_t x1049 = UINT16_MAX;
static uint64_t t171 = 3118249218410789LLU;
static volatile uint32_t t172 = 17U;
static int32_t x1066 = INT32_MAX;
static uint64_t t175 = 9179137884939286LLU;
static int32_t x1089 = -17;
int16_t x1090 = INT16_MIN;
int32_t x1093 = -2335610;
uint16_t x1101 = 7693U;
int8_t x1106 = INT8_MIN;
volatile uint64_t x1107 = 87966LLU;
volatile uint64_t x1109 = UINT64_MAX;
int32_t x1132 = 285;
uint32_t x1137 = 0U;
uint8_t x1139 = UINT8_MAX;
int8_t x1140 = INT8_MIN;
int32_t x1157 = INT32_MAX;
uint64_t x1160 = 40LLU;
static int16_t x1161 = INT16_MIN;
uint64_t x1164 = 1325259061056161418LLU;
static uint64_t t190 = 18355159693287617LLU;
static uint16_t x1174 = 1106U;
uint8_t x1175 = UINT8_MAX;
int64_t x1187 = 8824LL;
uint8_t x1192 = 2U;
uint64_t t197 = 2106402696LLU;
int64_t x1218 = INT64_MIN;
static int64_t x1219 = 41005653173795745LL;
uint16_t x1221 = 38U;


void f0(void) {
    	uint16_t x1 = 930U;
	int64_t x2 = 1LL;
	int32_t x4 = -3090;
	volatile int64_t t0 = 18676794LL;

    t0 = (x1*(x2+(x3-x4)));

    if (t0 != -27599610LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = -6452710;
	uint32_t x6 = UINT32_MAX;
	uint16_t x7 = 1U;
	volatile uint32_t x8 = 8048U;
	uint32_t t1 = 48U;

    t1 = (x5*(x6+(x7-x8)));

    if (t1 != 391802528U) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int16_t x9 = INT16_MAX;
	int16_t x11 = INT16_MIN;
	volatile uint64_t t2 = 2059646241LLU;

    t2 = (x9*(x10+(x11-x12)));

    if (t2 != 18446744072635842560LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x17 = INT64_MIN;
	int8_t x18 = INT8_MAX;
	uint64_t t3 = 268938541098931626LLU;

    t3 = (x17*(x18+(x19-x20)));

    if (t3 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x21 = -7321983;
	volatile int8_t x22 = -61;
	static int16_t x23 = -5;
	int16_t x24 = -14;
	volatile int32_t t4 = -6737250;

    t4 = (x21*(x22+(x23-x24)));

    if (t4 != 380743116) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x25 = 8462656505LL;
	int32_t x26 = 507874881;
	static int16_t x27 = INT16_MIN;
	uint32_t x28 = 3U;
	static volatile int64_t t5 = 7096LL;

    t5 = (x25*(x26+(x27-x28)));

    if (t5 != 4297693335704425550LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x29 = INT32_MAX;
	volatile uint8_t x30 = 7U;
	int64_t x31 = 2631LL;
	volatile int64_t t6 = 11048826706569LL;

    t6 = (x29*(x30+(x31-x32)));

    if (t6 != 5667209344433LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint8_t x37 = 7U;
	int16_t x38 = INT16_MAX;
	int8_t x39 = INT8_MIN;
	int8_t x40 = 0;
	int32_t t7 = 54203;

    t7 = (x37*(x38+(x39-x40)));

    if (t7 != 228473) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x42 = 1957;
	int8_t x43 = 0;
	static int32_t t8 = -843;

    t8 = (x41*(x42+(x43-x44)));

    if (t8 != -148352) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x45 = INT32_MIN;
	volatile uint32_t x46 = UINT32_MAX;
	uint32_t x47 = 1100U;
	uint32_t x48 = 3856827U;
	volatile uint32_t t9 = 50673U;

    t9 = (x45*(x46+(x47-x48)));

    if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x53 = 0;
	int32_t x55 = -5810299;
	static int32_t x56 = -1;
	static volatile uint32_t t10 = 4765U;

    t10 = (x53*(x54+(x55-x56)));

    if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x65 = -1;
	int64_t x66 = 65940598LL;
	int64_t x67 = INT64_MIN;
	static volatile int64_t t11 = -1330773467502LL;

    t11 = (x65*(x66+(x67-x68)));

    if (t11 != -65940598LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x77 = UINT8_MAX;
	int16_t x78 = -6;
	static volatile uint64_t x79 = UINT64_MAX;
	volatile uint64_t t12 = 5LLU;

    t12 = (x77*(x78+(x79-x80)));

    if (t12 != 18446744073709547791LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x81 = 30U;
	int8_t x82 = -6;
	static int16_t x83 = INT16_MAX;
	int8_t x84 = INT8_MIN;
	int32_t t13 = 16714344;

    t13 = (x81*(x82+(x83-x84)));

    if (t13 != 986670) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int16_t x85 = INT16_MAX;
	int16_t x86 = INT16_MIN;
	int64_t x87 = -166702866487LL;
	uint32_t x88 = UINT32_MAX;
	static volatile int64_t t14 = -1LL;

    t14 = (x85*(x86+(x87-x88)));

    if (t14 != -5603087093243850LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int16_t x98 = -23;
	volatile uint64_t x100 = 13235LLU;
	uint64_t t15 = 427417917981LLU;

    t15 = (x97*(x98+(x99-x100)));

    if (t15 != 1697152LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x101 = INT16_MIN;
	static volatile int32_t t16 = -34;

    t16 = (x101*(x102+(x103-x104)));

    if (t16 != -1610186752) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x105 = 3713;
	uint32_t x106 = 13318U;
	int16_t x107 = INT16_MIN;
	int8_t x108 = 1;
	uint32_t t17 = 793520271U;

    t17 = (x105*(x106+(x107-x108)));

    if (t17 != 4222745733U) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x109 = -1;
	int16_t x110 = INT16_MIN;
	static uint8_t x111 = UINT8_MAX;
	static int8_t x112 = INT8_MIN;

    t18 = (x109*(x110+(x111-x112)));

    if (t18 != 32385) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x113 = INT16_MAX;
	int16_t x114 = INT16_MIN;
	uint16_t x116 = 169U;
	volatile uint64_t t19 = 1713667787002381039LLU;

    t19 = (x113*(x114+(x115-x116)));

    if (t19 != 1560495608LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x117 = 14;
	int32_t x118 = -56359631;
	int16_t x119 = INT16_MIN;
	uint16_t x120 = 22816U;
	int32_t t20 = -478589;

    t20 = (x117*(x118+(x119-x120)));

    if (t20 != -789813010) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x125 = 1U;
	volatile int16_t x126 = INT16_MIN;
	int8_t x127 = -1;
	int8_t x128 = 6;
	volatile int32_t t21 = 0;

    t21 = (x125*(x126+(x127-x128)));

    if (t21 != -32775) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint8_t x130 = UINT8_MAX;
	uint64_t x131 = 1818646867310675LLU;

    t22 = (x129*(x130+(x131-x132)));

    if (t22 != 463755498772617390LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x133 = UINT32_MAX;
	static uint16_t x134 = 1627U;
	uint64_t x135 = 103LLU;
	uint64_t x136 = 24780LLU;
	volatile uint64_t t23 = 186207LLU;

    t23 = (x133*(x134+(x135-x136)));

    if (t23 != 18446645074713401866LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x141 = 1U;
	int16_t x142 = INT16_MIN;
	uint32_t t24 = 52U;

    t24 = (x141*(x142+(x143-x144)));

    if (t24 != 4291251920U) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x149 = INT16_MIN;
	static int64_t x150 = -682994LL;
	int32_t x152 = INT32_MAX;

    t25 = (x149*(x150+(x151-x152)));

    if (t25 != 70391123443712LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x153 = UINT8_MAX;
	uint64_t x155 = 103198922471897LLU;
	uint8_t x156 = 0U;

    t26 = (x153*(x154+(x155-x156)));

    if (t26 != 9249687762085109543LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x157 = -1LL;
	int8_t x158 = -1;
	volatile int64_t x159 = -5478LL;
	int16_t x160 = -222;
	int64_t t27 = 1LL;

    t27 = (x157*(x158+(x159-x160)));

    if (t27 != 5257LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x165 = INT8_MAX;
	static int16_t x166 = -1;
	static uint8_t x167 = UINT8_MAX;
	static int32_t t28 = -955;

    t28 = (x165*(x166+(x167-x168)));

    if (t28 != 32004) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x170 = UINT16_MAX;
	int8_t x172 = INT8_MIN;
	volatile int32_t t29 = 897498;

    t29 = (x169*(x170+(x171-x172)));

    if (t29 != -65535) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x173 = INT16_MIN;
	uint32_t x174 = UINT32_MAX;
	int64_t x175 = -23037186699324LL;
	uint64_t x176 = UINT64_MAX;
	uint64_t t30 = 61LLU;

    t30 = (x173*(x174+(x175-x176)));

    if (t30 != 754741796275093504LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x177 = INT64_MIN;
	static uint64_t x178 = 91032860944161730LLU;
	volatile uint64_t t31 = 4377850884281624338LLU;

    t31 = (x177*(x178+(x179-x180)));

    if (t31 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint64_t x186 = 90249LLU;
	static int16_t x187 = INT16_MIN;
	uint64_t t32 = 46559851819046996LLU;

    t32 = (x185*(x186+(x187-x188)));

    if (t32 != 114734LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x193 = 21U;
	uint16_t x194 = 597U;
	volatile int8_t x195 = -28;
	int32_t t33 = -2573;

    t33 = (x193*(x194+(x195-x196)));

    if (t33 != 11970) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x197 = 198;
	static int8_t x198 = -1;
	uint8_t x199 = UINT8_MAX;
	static volatile int32_t t34 = -391650;

    t34 = (x197*(x198+(x199-x200)));

    if (t34 != 50292) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x201 = 3;
	int64_t x202 = 6011408535LL;
	volatile uint8_t x203 = 20U;
	uint32_t x204 = UINT32_MAX;
	int64_t t35 = 282999938973342625LL;

    t35 = (x201*(x202+(x203-x204)));

    if (t35 != 18034225668LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x205 = INT8_MAX;
	uint64_t x206 = 51203300726LLU;
	int16_t x207 = INT16_MIN;
	uint32_t x208 = 1902U;
	static uint64_t t36 = 6907173219LLU;

    t36 = (x205*(x206+(x207-x208)));

    if (t36 != 7048275635704LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x209 = -68;
	int16_t x210 = -2827;
	uint32_t x211 = UINT32_MAX;
	volatile int8_t x212 = -20;
	volatile uint32_t t37 = 123266U;

    t37 = (x209*(x210+(x211-x212)));

    if (t37 != 190944U) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x221 = 1784495366648174LLU;
	int8_t x223 = INT8_MIN;
	uint64_t t38 = 108473LLU;

    t38 = (x221*(x222+(x223-x224)));

    if (t38 != 257342865018096442LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x225 = -1;
	volatile int16_t x226 = INT16_MIN;
	static volatile int32_t x227 = 65710966;
	int8_t x228 = INT8_MIN;
	int32_t t39 = -2106011;

    t39 = (x225*(x226+(x227-x228)));

    if (t39 != -65678326) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint32_t x230 = 2454U;
	uint8_t x232 = 23U;
	uint64_t t40 = 1027077938140854795LLU;

    t40 = (x229*(x230+(x231-x232)));

    if (t40 != 18446744073709549186LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x233 = 15;
	uint16_t x236 = UINT16_MAX;

    t41 = (x233*(x234+(x235-x236)));

    if (t41 != 4293982336U) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x237 = 29U;
	int8_t x238 = 11;
	int16_t x239 = -1;
	int16_t x240 = INT16_MIN;
	int32_t t42 = 12401325;

    t42 = (x237*(x238+(x239-x240)));

    if (t42 != 950562) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x262 = UINT32_MAX;
	static int64_t x263 = 1509085175LL;
	int8_t x264 = -59;
	volatile int64_t t43 = -6713925535168LL;

    t43 = (x261*(x262+(x263-x264)));

    if (t43 != -190187193270272LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x265 = INT64_MAX;
	int16_t x266 = 0;
	static volatile int16_t x267 = INT16_MAX;
	static uint64_t x268 = UINT64_MAX;
	static uint64_t t44 = 20LLU;

    t44 = (x265*(x266+(x267-x268)));

    if (t44 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x269 = INT32_MIN;
	int8_t x270 = -30;
	uint32_t x271 = 976193550U;
	uint8_t x272 = 1U;
	volatile uint32_t t45 = 9260U;

    t45 = (x269*(x270+(x271-x272)));

    if (t45 != 2147483648U) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x277 = -2;
	static int16_t x278 = 15399;
	volatile int32_t x279 = INT32_MIN;
	volatile int32_t x280 = INT32_MIN;
	int32_t t46 = 4081157;

    t46 = (x277*(x278+(x279-x280)));

    if (t46 != -30798) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x281 = INT16_MIN;
	int8_t x283 = -33;
	int8_t x284 = -1;
	volatile int32_t t47 = 7035;

    t47 = (x281*(x282+(x283-x284)));

    if (t47 != 5242880) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x286 = 3U;
	static int8_t x288 = INT8_MIN;

    t48 = (x285*(x286+(x287-x288)));

    if (t48 != 114061842LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x289 = 15057495976745601LLU;
	static int32_t x290 = -126715575;
	int64_t x291 = 19LL;
	static volatile uint64_t t49 = 265172586135247182LLU;

    t49 = (x289*(x290+(x291-x292)));

    if (t49 != 1551858991860580188LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x293 = INT32_MIN;
	static int8_t x294 = 13;
	int8_t x295 = INT8_MAX;
	static volatile int64_t t50 = -246036913312172LL;

    t50 = (x293*(x294+(x295-x296)));

    if (t50 != -302795194368LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x298 = 24U;
	volatile int64_t x299 = 528399LL;
	int16_t x300 = INT16_MAX;
	volatile uint64_t t51 = 33780303723114LLU;

    t51 = (x297*(x298+(x299-x300)));

    if (t51 != 313873882186822664LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x301 = INT32_MAX;
	int8_t x302 = 1;
	volatile int64_t x304 = INT64_MIN;

    t52 = (x301*(x302+(x303-x304)));

    if (t52 != 9223372041149743102LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint16_t x305 = 21448U;
	uint64_t x306 = 54583LLU;
	static volatile int8_t x307 = -1;
	uint64_t x308 = 1659202LLU;
	uint64_t t53 = 49LLU;

    t53 = (x305*(x306+(x307-x308)));

    if (t53 != 18446744039293661856LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x310 = UINT16_MAX;
	volatile uint64_t x311 = 7LLU;
	uint64_t x312 = 6906142474LLU;
	volatile uint64_t t54 = 730594LLU;

    t54 = (x309*(x310+(x311-x312)));

    if (t54 != 7232113587725164292LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x313 = INT16_MIN;
	volatile int16_t x314 = INT16_MAX;
	volatile int8_t x315 = 0;
	int16_t x316 = -1;
	static volatile int32_t t55 = -1743121;

    t55 = (x313*(x314+(x315-x316)));

    if (t55 != -1073741824) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile int32_t x321 = -4;
	volatile int8_t x322 = -1;
	int64_t x323 = -1LL;
	int16_t x324 = 3;
	int64_t t56 = 406726803077670LL;

    t56 = (x321*(x322+(x323-x324)));

    if (t56 != 20LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x325 = 14U;
	int64_t x326 = -1LL;
	uint16_t x328 = UINT16_MAX;
	int64_t t57 = -1849193854397408LL;

    t57 = (x325*(x326+(x327-x328)));

    if (t57 != -1376256LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x329 = 249U;
	uint64_t x330 = 941LLU;
	static volatile int32_t x331 = -1;
	int16_t x332 = INT16_MIN;
	uint64_t t58 = 66716111642847LLU;

    t58 = (x329*(x330+(x331-x332)));

    if (t58 != 8393292LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x333 = 1;
	static int16_t x334 = -113;
	int16_t x336 = 1082;

    t59 = (x333*(x334+(x335-x336)));

    if (t59 != -1196) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x337 = 11U;
	volatile int16_t x338 = -1;
	int32_t x339 = -1;
	int32_t x340 = 502;
	volatile int32_t t60 = -12968000;

    t60 = (x337*(x338+(x339-x340)));

    if (t60 != -5544) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x341 = 4978059062479LLU;
	volatile uint64_t x342 = 2951606597715LLU;
	volatile int16_t x343 = INT16_MIN;
	volatile uint64_t t61 = 2508070LLU;

    t61 = (x341*(x342+(x343-x344)));

    if (t61 != 15842995275972022215LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x345 = INT8_MIN;
	int32_t x346 = INT32_MAX;
	uint64_t x347 = 1566429044324799063LLU;
	static int8_t x348 = INT8_MAX;
	static volatile uint64_t t62 = 43LLU;

    t62 = (x345*(x346+(x347-x348)));

    if (t62 != 2411266862352897152LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x354 = -253;
	uint32_t x355 = 1517022U;
	int64_t x356 = 969LL;
	int64_t t63 = 1414653250303LL;

    t63 = (x353*(x354+(x355-x356)));

    if (t63 != -7579000LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x361 = INT8_MIN;
	uint64_t x362 = 101650332488LLU;
	volatile uint32_t x363 = UINT32_MAX;
	int16_t x364 = INT16_MAX;
	uint64_t t64 = 26378831LLU;

    t64 = (x361*(x362+(x363-x364)));

    if (t64 != 18446730512715373568LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint8_t x369 = 113U;
	uint64_t x370 = 1LLU;
	int32_t x371 = INT32_MIN;
	int8_t x372 = INT8_MIN;

    t65 = (x369*(x370+(x371-x372)));

    if (t65 != 18446743831043913969LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x373 = INT32_MIN;
	static int8_t x374 = -3;
	static uint64_t x375 = 516579815499914LLU;
	static int32_t x376 = 1044524;
	uint64_t t66 = 4929077925256353801LLU;

    t66 = (x373*(x374+(x375-x376)));

    if (t66 != 3590674927407071232LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x377 = INT16_MAX;
	volatile int16_t x379 = 8;
	static uint32_t x380 = 236112915U;
	uint32_t t67 = 59082841U;

    t67 = (x377*(x378+(x379-x380)));

    if (t67 != 1745734667U) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x386 = -1;
	uint32_t x387 = 6U;
	volatile uint64_t t68 = 1009809615583461190LLU;

    t68 = (x385*(x386+(x387-x388)));

    if (t68 != 18446744069414649850LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x389 = INT64_MIN;
	volatile int32_t x390 = -7;
	volatile uint64_t x391 = 11923LLU;
	int8_t x392 = INT8_MIN;
	static volatile uint64_t t69 = 31240LLU;

    t69 = (x389*(x390+(x391-x392)));

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static int8_t x397 = INT8_MIN;
	static int8_t x398 = 0;
	volatile int32_t x399 = 3303;
	uint32_t x400 = 103917692U;
	uint32_t t70 = 71U;

    t70 = (x397*(x398+(x399-x400)));

    if (t70 != 416139904U) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x402 = INT8_MIN;
	static uint32_t x403 = UINT32_MAX;
	volatile uint64_t t71 = 3711LLU;

    t71 = (x401*(x402+(x403-x404)));

    if (t71 != 1309965024975LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x405 = -3199270;
	int16_t x406 = -1;
	static uint64_t x407 = UINT64_MAX;
	volatile uint64_t t72 = 2061102659882553LLU;

    t72 = (x405*(x406+(x407-x408)));

    if (t72 != 6398540LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x409 = INT32_MAX;
	volatile uint64_t x410 = 3LLU;
	uint16_t x411 = UINT16_MAX;
	int16_t x412 = -1;
	uint64_t t73 = 15504691119LLU;

    t73 = (x409*(x410+(x411-x412)));

    if (t73 != 140743930740733LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint64_t x421 = UINT64_MAX;
	uint8_t x422 = 53U;
	static int16_t x423 = INT16_MAX;
	uint64_t t74 = 1LLU;

    t74 = (x421*(x422+(x423-x424)));

    if (t74 != 18446744073709486995LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x429 = INT32_MIN;
	static uint16_t x430 = UINT16_MAX;
	uint64_t x431 = 99220LLU;
	int32_t x432 = -76364471;
	volatile uint64_t t75 = 10780LLU;

    t75 = (x429*(x430+(x431-x432)));

    if (t75 != 18282398812280455168LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile uint64_t x437 = 50837LLU;
	int16_t x438 = INT16_MAX;
	uint32_t x439 = 4456U;
	uint32_t x440 = 15764U;
	uint64_t t76 = 41874077125016LLU;

    t76 = (x437*(x438+(x439-x440)));

    if (t76 != 1090911183LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x445 = INT8_MIN;
	static volatile uint64_t x446 = 380348LLU;
	int64_t x447 = INT64_MIN;
	volatile int8_t x448 = INT8_MIN;
	static volatile uint64_t t77 = 53068425073LLU;

    t77 = (x445*(x446+(x447-x448)));

    if (t77 != 18446744073660850688LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x461 = 288LLU;
	int16_t x463 = INT16_MIN;
	int64_t x464 = -5302LL;
	volatile uint64_t t78 = 502254190722LLU;

    t78 = (x461*(x462+(x463-x464)));

    if (t78 != 18446744073701640832LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x465 = 13U;
	uint32_t x466 = 4549U;
	int8_t x467 = INT8_MIN;
	static volatile uint64_t x468 = 0LLU;
	static uint64_t t79 = 3215LLU;

    t79 = (x465*(x466+(x467-x468)));

    if (t79 != 57473LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x469 = -1;
	volatile uint8_t x470 = 33U;
	uint32_t x471 = 582U;
	int32_t x472 = INT32_MIN;
	volatile uint32_t t80 = 1U;

    t80 = (x469*(x470+(x471-x472)));

    if (t80 != 2147483033U) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x473 = 2356994LLU;
	uint64_t x475 = 51965LLU;
	int32_t x476 = 159678;
	volatile uint64_t t81 = 6543944716202739LLU;

    t81 = (x473*(x474+(x475-x476)));

    if (t81 != 18446743819828299900LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x477 = INT16_MIN;
	static int32_t x478 = -19514831;
	int64_t x479 = -91668742267LL;
	volatile int16_t x480 = 56;

    t82 = (x477*(x478+(x479-x480)));

    if (t82 != 3004440810422272LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x490 = 21334374171868LLU;
	uint16_t x491 = 258U;
	static int8_t x492 = INT8_MIN;

    t83 = (x489*(x490+(x491-x492)));

    if (t83 != 18446445392471140060LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x493 = INT64_MIN;
	uint64_t x494 = 707430LLU;
	uint32_t x495 = 129936066U;
	static int32_t x496 = INT32_MAX;

    t84 = (x493*(x494+(x495-x496)));

    if (t84 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x501 = -1;
	uint64_t x503 = 2089058090324100LLU;
	uint64_t t85 = 347479903405LLU;

    t85 = (x501*(x502+(x503-x504)));

    if (t85 != 18444655011324260476LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint32_t x505 = 19275U;
	volatile int8_t x506 = 21;
	volatile uint64_t x507 = UINT64_MAX;
	volatile uint64_t t86 = 7177308920099097013LLU;

    t86 = (x505*(x506+(x507-x508)));

    if (t86 != 18446744073705021991LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x509 = 0U;
	uint8_t x512 = UINT8_MAX;

    t87 = (x509*(x510+(x511-x512)));

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint8_t x513 = 0U;
	static volatile uint32_t x514 = UINT32_MAX;
	int8_t x515 = INT8_MAX;
	uint16_t x516 = UINT16_MAX;
	uint32_t t88 = 83U;

    t88 = (x513*(x514+(x515-x516)));

    if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint16_t x517 = UINT16_MAX;
	int16_t x518 = 16;
	volatile int64_t x519 = 617217316255LL;
	uint64_t x520 = 6921LLU;
	static uint64_t t89 = 3811455304700021LLU;

    t89 = (x517*(x518+(x519-x520)));

    if (t89 != 40449336368252250LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x521 = INT64_MIN;
	int64_t x523 = INT64_MIN;
	static uint64_t x524 = UINT64_MAX;
	static volatile uint64_t t90 = 29LLU;

    t90 = (x521*(x522+(x523-x524)));

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x525 = 400LLU;
	uint32_t x526 = UINT32_MAX;
	uint64_t x527 = 1786LLU;
	int32_t x528 = INT32_MAX;
	volatile uint64_t t91 = 33527522718LLU;

    t91 = (x525*(x526+(x527-x528)));

    if (t91 != 858994173600LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x529 = INT8_MIN;
	uint64_t x530 = UINT64_MAX;
	static int64_t x531 = -1LL;

    t92 = (x529*(x530+(x531-x532)));

    if (t92 != 2048LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x541 = INT8_MIN;
	uint16_t x542 = 13U;
	int8_t x543 = INT8_MIN;
	volatile int64_t t93 = 7144380LL;

    t93 = (x541*(x542+(x543-x544)));

    if (t93 != 13952LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x546 = 41133LLU;
	volatile int16_t x547 = -1926;
	uint32_t x548 = 87201756U;
	static volatile uint64_t t94 = 718089960800220LLU;

    t94 = (x545*(x546+(x547-x548)));

    if (t94 != 18446744069501746869LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x553 = INT8_MIN;
	uint64_t x554 = 24640884530079532LLU;
	int64_t x555 = -1LL;
	int64_t x556 = INT64_MIN;
	volatile uint64_t t95 = 1639651874321LLU;

    t95 = (x553*(x554+(x555-x556)));

    if (t95 != 15292710853859371648LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x565 = -1;
	int8_t x567 = INT8_MAX;
	uint8_t x568 = 0U;
	static uint32_t t96 = 15706899U;

    t96 = (x565*(x566+(x567-x568)));

    if (t96 != 4294967164U) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x569 = 26U;
	static uint64_t x570 = 4397575264695407LLU;
	uint16_t x571 = 11U;
	volatile uint64_t x572 = 29LLU;

    t97 = (x569*(x570+(x571-x572)));

    if (t97 != 114336956882080114LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x573 = INT8_MAX;
	int16_t x574 = -1;
	static int16_t x575 = INT16_MIN;
	uint16_t x576 = UINT16_MAX;

    t98 = (x573*(x574+(x575-x576)));

    if (t98 != -12484608) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x581 = INT8_MIN;
	uint8_t x582 = 0U;
	volatile int8_t x583 = INT8_MAX;
	volatile int32_t t99 = -231255774;

    t99 = (x581*(x582+(x583-x584)));

    if (t99 != -21760) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x585 = UINT8_MAX;
	int32_t x586 = 854507;
	uint64_t x587 = UINT64_MAX;
	static int32_t x588 = 1622987;
	volatile uint64_t t100 = 3LLU;

    t100 = (x585*(x586+(x587-x588)));

    if (t100 != 18446744073513588961LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x594 = 6U;
	static int32_t x595 = INT32_MAX;
	uint8_t x596 = 19U;
	volatile uint32_t t101 = 11812074U;

    t101 = (x593*(x594+(x595-x596)));

    if (t101 != 4294966988U) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x606 = INT32_MIN;
	static volatile int16_t x608 = -1;
	int64_t t102 = -1450902361272LL;

    t102 = (x605*(x606+(x607-x608)));

    if (t102 != -2144929535LL) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x609 = INT8_MIN;
	uint16_t x610 = 9734U;
	static int64_t x612 = -1LL;

    t103 = (x609*(x610+(x611-x612)));

    if (t103 != -1246720LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint8_t x617 = 27U;
	int64_t x619 = -1LL;
	int8_t x620 = INT8_MIN;
	int64_t t104 = -20200012462775LL;

    t104 = (x617*(x618+(x619-x620)));

    if (t104 != 3402LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x629 = 1;
	volatile uint64_t x630 = 8694195025863746541LLU;
	volatile int8_t x631 = INT8_MIN;
	static uint64_t t105 = 32819LLU;

    t105 = (x629*(x630+(x631-x632)));

    if (t105 != 8694195025863746414LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x637 = INT8_MIN;
	volatile int8_t x639 = INT8_MIN;
	int32_t x640 = -1;

    t106 = (x637*(x638+(x639-x640)));

    if (t106 != 16128) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x641 = -1;
	volatile int8_t x642 = -1;
	static volatile int8_t x643 = -1;
	int8_t x644 = INT8_MIN;
	int32_t t107 = 262272075;

    t107 = (x641*(x642+(x643-x644)));

    if (t107 != -126) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x645 = -48;
	int16_t x646 = 3;
	uint64_t x647 = 5337771LLU;
	int8_t x648 = 5;
	static uint64_t t108 = 157027435792516LLU;

    t108 = (x645*(x646+(x647-x648)));

    if (t108 != 18446744073453338704LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x649 = INT16_MAX;
	uint16_t x650 = 36U;
	uint64_t t109 = 712223286LLU;

    t109 = (x649*(x650+(x651-x652)));

    if (t109 != 3440535LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x653 = UINT8_MAX;
	static int8_t x654 = -10;
	uint64_t x655 = UINT64_MAX;
	uint16_t x656 = UINT16_MAX;
	volatile uint64_t t110 = 26503LLU;

    t110 = (x653*(x654+(x655-x656)));

    if (t110 != 18446744073692837386LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint8_t x657 = 3U;
	uint16_t x659 = 15U;
	int16_t x660 = INT16_MIN;
	static int64_t t111 = -337865988318897LL;

    t111 = (x657*(x658+(x659-x660)));

    if (t111 != 662468387741261196LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x661 = 1;
	static uint8_t x662 = 28U;
	int64_t x663 = INT64_MIN;

    t112 = (x661*(x662+(x663-x664)));

    if (t112 != -9223372036854743012LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x665 = INT8_MAX;
	int8_t x666 = -1;
	int16_t x667 = INT16_MIN;
	volatile int16_t x668 = 30;
	volatile int32_t t113 = -2619884;

    t113 = (x665*(x666+(x667-x668)));

    if (t113 != -4165473) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x669 = INT32_MIN;
	volatile int16_t x670 = -98;
	uint32_t x671 = 2602896U;
	int32_t x672 = INT32_MAX;
	uint32_t t114 = 15320U;

    t114 = (x669*(x670+(x671-x672)));

    if (t114 != 2147483648U) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x677 = INT16_MAX;
	int32_t x678 = INT32_MIN;
	static int16_t x679 = -1;
	int32_t x680 = INT32_MIN;
	volatile int32_t t115 = 928620;

    t115 = (x677*(x678+(x679-x680)));

    if (t115 != -32767) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x681 = 41619222805043553LLU;
	int64_t x682 = -1LL;
	int64_t x683 = 0LL;
	int8_t x684 = INT8_MIN;

    t116 = (x681*(x682+(x683-x684)));

    if (t116 != 5285641296240531231LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x685 = UINT64_MAX;
	volatile int32_t x686 = -195;
	uint16_t x687 = UINT16_MAX;
	int16_t x688 = 1964;
	volatile uint64_t t117 = 0LLU;

    t117 = (x685*(x686+(x687-x688)));

    if (t117 != 18446744073709488240LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x689 = INT16_MIN;
	static uint32_t x690 = 983U;
	volatile uint16_t x691 = 0U;
	int64_t t118 = 65481LL;

    t118 = (x689*(x690+(x691-x692)));

    if (t118 != -216793088LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x693 = UINT64_MAX;
	int8_t x694 = -1;
	volatile int16_t x696 = -1;
	uint64_t t119 = 141249809275LLU;

    t119 = (x693*(x694+(x695-x696)));

    if (t119 != 59512766530LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x701 = INT8_MAX;
	volatile uint16_t x702 = 706U;
	volatile uint16_t x704 = UINT16_MAX;
	volatile uint32_t t120 = 14452U;

    t120 = (x701*(x702+(x703-x704)));

    if (t120 != 4286733886U) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x705 = -1;
	int8_t x706 = 0;
	int32_t x707 = 199690351;
	static int64_t t121 = -3725450632734686112LL;

    t121 = (x705*(x706+(x707-x708)));

    if (t121 != 6227827177835LL) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int8_t x718 = 18;
	int32_t x720 = 47;
	uint64_t t122 = 456405197LLU;

    t122 = (x717*(x718+(x719-x720)));

    if (t122 != 18446744041135850626LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t x721 = INT32_MAX;
	uint16_t x723 = 3629U;
	volatile uint64_t x724 = 1658865LLU;

    t123 = (x721*(x722+(x723-x724)));

    if (t123 != 18443259848064287173LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x725 = INT8_MIN;
	int8_t x726 = INT8_MIN;
	int64_t x727 = -18673LL;
	static int64_t x728 = 3206LL;
	static int64_t t124 = 4841087044643492LL;

    t124 = (x725*(x726+(x727-x728)));

    if (t124 != 2816896LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x733 = INT16_MIN;
	static volatile uint8_t x734 = 0U;
	uint32_t x735 = 221092U;
	int16_t x736 = -16;
	uint32_t t125 = 740016U;

    t125 = (x733*(x734+(x735-x736)));

    if (t125 != 1344667648U) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x737 = 12161029LL;
	uint32_t x738 = 17U;
	volatile int16_t x739 = 0;
	static volatile uint64_t x740 = 2227166012420017243LLU;
	uint64_t t126 = 632LLU;

    t126 = (x737*(x738+(x739-x740)));

    if (t126 != 4435554670299374222LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x741 = INT16_MIN;
	uint8_t x742 = UINT8_MAX;
	volatile uint32_t t127 = 102U;

    t127 = (x741*(x742+(x743-x744)));

    if (t127 != 4286611456U) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x750 = INT64_MIN;
	uint64_t x751 = UINT64_MAX;
	int64_t x752 = -271177LL;
	volatile uint64_t t128 = 126136867114631301LLU;

    t128 = (x749*(x750+(x751-x752)));

    if (t128 != 9223372036923925688LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x753 = UINT64_MAX;
	int64_t x754 = -5LL;
	volatile int8_t x755 = INT8_MIN;
	uint64_t t129 = 0LLU;

    t129 = (x753*(x754+(x755-x756)));

    if (t129 != 18446744071562068101LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x757 = 12496795U;
	int16_t x758 = -13982;
	int32_t x759 = 20772;
	int16_t x760 = -1;
	uint32_t t130 = 8U;

    t130 = (x757*(x758+(x759-x760)));

    if (t130 != 3261356221U) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x765 = -1;
	int64_t x767 = 123721LL;
	int8_t x768 = INT8_MIN;
	volatile int64_t t131 = -8LL;

    t131 = (x765*(x766+(x767-x768)));

    if (t131 != -123216LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x769 = UINT8_MAX;
	int8_t x770 = INT8_MAX;
	int64_t x771 = -722357410062187LL;
	volatile uint8_t x772 = 8U;
	volatile int64_t t132 = 1561754435LL;

    t132 = (x769*(x770+(x771-x772)));

    if (t132 != -184201139565827340LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x773 = 398385645U;
	int16_t x774 = INT16_MIN;
	static int8_t x775 = INT8_MAX;
	volatile int8_t x776 = INT8_MIN;
	volatile uint32_t t133 = 217U;

    t133 = (x773*(x774+(x775-x776)));

    if (t133 != 908888851U) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x778 = -1LL;
	int8_t x779 = -61;
	uint16_t x780 = 11808U;
	volatile int64_t t134 = 795933397LL;

    t134 = (x777*(x778+(x779-x780)));

    if (t134 != 11870LL) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x789 = INT16_MIN;
	int8_t x790 = -1;
	volatile uint32_t x792 = 311U;
	uint32_t t135 = 133179512U;

    t135 = (x789*(x790+(x791-x792)));

    if (t135 != 2157740032U) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x793 = 57U;
	int16_t x794 = -1;
	static uint8_t x795 = 0U;
	static volatile uint32_t x796 = 959830U;
	uint32_t t136 = 253616U;

    t136 = (x793*(x794+(x795-x796)));

    if (t136 != 4240256929U) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int8_t x797 = -17;
	int64_t x798 = -11LL;
	static int8_t x799 = 58;
	static uint16_t x800 = 8925U;

    t137 = (x797*(x798+(x799-x800)));

    if (t137 != 150926LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile int8_t x802 = 0;
	uint64_t x804 = UINT64_MAX;

    t138 = (x801*(x802+(x803-x804)));

    if (t138 != 9223372036854814103LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x805 = -1;
	static uint8_t x806 = UINT8_MAX;
	uint8_t x807 = 3U;
	static uint8_t x808 = 1U;
	int32_t t139 = 62;

    t139 = (x805*(x806+(x807-x808)));

    if (t139 != -257) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x809 = UINT8_MAX;
	int16_t x812 = -2151;
	volatile int32_t t140 = 13;

    t140 = (x809*(x810+(x811-x812)));

    if (t140 != 547485) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x813 = -954130;
	uint16_t x814 = 5379U;
	uint64_t x815 = 0LLU;
	volatile uint64_t t141 = 325308852LLU;

    t141 = (x813*(x814+(x815-x816)));

    if (t141 != 9418102734400LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x817 = 9U;
	volatile uint64_t x818 = 1LLU;
	int16_t x819 = INT16_MAX;
	volatile uint64_t t142 = 52252733407LLU;

    t142 = (x817*(x818+(x819-x820)));

    if (t142 != 294921LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x821 = 208U;
	uint32_t x822 = 210536029U;
	int32_t x823 = INT32_MIN;
	uint64_t t143 = 34721LLU;

    t143 = (x821*(x822+(x823-x824)));

    if (t143 != 18446743670820839520LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x825 = -1LL;
	int8_t x826 = INT8_MAX;
	int8_t x828 = INT8_MAX;
	int64_t t144 = -3860957435774LL;

    t144 = (x825*(x826+(x827-x828)));

    if (t144 != -1585LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x829 = 1142U;
	int64_t x830 = -1LL;
	static uint8_t x831 = 5U;
	volatile uint64_t t145 = 19963187816LLU;

    t145 = (x829*(x830+(x831-x832)));

    if (t145 != 11480975613773358940LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x837 = -1LL;
	static int32_t x839 = -271995;
	int32_t x840 = -159;
	static volatile int64_t t146 = 2356048843LL;

    t146 = (x837*(x838+(x839-x840)));

    if (t146 != 271837LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static int64_t x850 = -1LL;
	volatile int8_t x851 = -1;
	volatile int16_t x852 = INT16_MAX;
	volatile int64_t t147 = -16056576LL;

    t147 = (x849*(x850+(x851-x852)));

    if (t147 != -1073741823LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x865 = 1;
	int16_t x866 = 76;
	volatile uint32_t x867 = UINT32_MAX;
	int32_t x868 = -1;
	uint32_t t148 = 143U;

    t148 = (x865*(x866+(x867-x868)));

    if (t148 != 76U) { NG(); } else { ; }
	
}

void f149(void) {
    	static int16_t x869 = -3418;
	volatile int8_t x871 = INT8_MIN;
	int8_t x872 = 7;
	int32_t t149 = -2693319;

    t149 = (x869*(x870+(x871-x872)));

    if (t149 != -111536176) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint8_t x873 = 2U;
	int16_t x874 = 97;
	volatile int8_t x875 = INT8_MIN;
	int16_t x876 = -1;

    t150 = (x873*(x874+(x875-x876)));

    if (t150 != -60) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int32_t x881 = INT32_MIN;
	uint32_t x882 = 6U;
	int64_t x883 = 6851180LL;
	uint16_t x884 = UINT16_MAX;
	volatile int64_t t151 = -15305129LL;

    t151 = (x881*(x882+(x883-x884)));

    if (t151 != -14572074563534848LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x885 = -1;
	int32_t x886 = INT32_MIN;
	uint32_t x887 = 249822696U;
	int16_t x888 = INT16_MIN;
	uint32_t t152 = 15124466U;

    t152 = (x885*(x886+(x887-x888)));

    if (t152 != 1897628184U) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x889 = -19;
	int32_t x890 = 693;
	int8_t x891 = -1;
	uint64_t x892 = 402845557536LLU;
	static volatile uint64_t t153 = 458LLU;

    t153 = (x889*(x890+(x891-x892)));

    if (t153 != 7654065580036LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint32_t x894 = UINT32_MAX;
	uint8_t x895 = 84U;
	int8_t x896 = INT8_MIN;
	uint32_t t154 = 42U;

    t154 = (x893*(x894+(x895-x896)));

    if (t154 != 323041U) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x901 = 22549U;
	static int16_t x902 = -3;
	static int8_t x903 = INT8_MAX;
	uint32_t x904 = 2025U;
	uint32_t t155 = 161517044U;

    t155 = (x901*(x902+(x903-x904)));

    if (t155 != 4252101647U) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x905 = UINT64_MAX;
	int8_t x906 = INT8_MAX;
	uint64_t x907 = 498629875024012LLU;
	int16_t x908 = 454;
	uint64_t t156 = 183537791521LLU;

    t156 = (x905*(x906+(x907-x908)));

    if (t156 != 18446245443834527931LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x910 = -1;
	static uint32_t x911 = 2068U;
	static uint32_t t157 = 13152072U;

    t157 = (x909*(x910+(x911-x912)));

    if (t157 != 4227497984U) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x921 = 7898U;
	int32_t x923 = INT32_MIN;
	int64_t x924 = 93235LL;
	volatile int64_t t158 = 15867801364LL;

    t158 = (x921*(x922+(x923-x924)));

    if (t158 != -16961562229832LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x937 = INT16_MIN;
	volatile uint16_t x938 = 0U;
	uint16_t x939 = 43U;
	volatile int16_t x940 = 818;
	int32_t t159 = -2772;

    t159 = (x937*(x938+(x939-x940)));

    if (t159 != 25395200) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x945 = UINT32_MAX;
	uint16_t x946 = 23652U;
	int8_t x947 = INT8_MAX;

    t160 = (x945*(x946+(x947-x948)));

    if (t160 != 1232831707324095LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x951 = INT16_MAX;
	volatile uint8_t x952 = 2U;
	uint32_t t161 = 1U;

    t161 = (x949*(x950+(x951-x952)));

    if (t161 != 5101971U) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x953 = -1;
	int64_t x954 = 2LL;
	static int32_t x955 = INT32_MAX;
	volatile uint64_t x956 = 5970223LLU;
	volatile uint64_t t162 = 6148920817833823LLU;

    t162 = (x953*(x954+(x955-x956)));

    if (t162 != 18446744071568038190LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x957 = INT16_MIN;
	int8_t x958 = -4;
	static uint16_t x959 = 0U;
	volatile int32_t x960 = 9;
	volatile int32_t t163 = 1219;

    t163 = (x957*(x958+(x959-x960)));

    if (t163 != 425984) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x961 = INT16_MAX;
	int16_t x962 = INT16_MIN;
	static volatile uint64_t x963 = 66782070206481040LLU;
	int64_t x964 = INT64_MAX;
	uint64_t t164 = 1172492180790830LLU;

    t164 = (x961*(x962+(x963-x964)));

    if (t164 != 2308921720108694895LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x994 = 2U;
	uint16_t x996 = 1U;
	int32_t t165 = 33989673;

    t165 = (x993*(x994+(x995-x996)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint16_t x998 = 2669U;
	volatile uint16_t x999 = 7051U;
	int8_t x1000 = -1;

    t166 = (x997*(x998+(x999-x1000)));

    if (t166 != 2294156) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x1006 = INT32_MIN;
	volatile uint16_t x1008 = 3U;
	int32_t t167 = 9867133;

    t167 = (x1005*(x1006+(x1007-x1008)));

    if (t167 != -262140) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x1009 = 245U;
	volatile uint32_t x1010 = 79U;
	int8_t x1011 = 15;
	static volatile int16_t x1012 = -2706;
	volatile uint32_t t168 = 290785910U;

    t168 = (x1009*(x1010+(x1011-x1012)));

    if (t168 != 686000U) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x1037 = INT8_MIN;
	int64_t x1038 = INT64_MAX;
	static volatile uint32_t x1039 = UINT32_MAX;
	uint64_t t169 = 28992397534986LLU;

    t169 = (x1037*(x1038+(x1039-x1040)));

    if (t169 != 6767170698508544LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x1045 = UINT8_MAX;
	uint16_t x1046 = 6123U;
	uint32_t x1047 = UINT32_MAX;
	int8_t x1048 = -1;
	volatile uint32_t t170 = 218U;

    t170 = (x1045*(x1046+(x1047-x1048)));

    if (t170 != 1561365U) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x1050 = -4426175;
	volatile uint64_t x1051 = UINT64_MAX;
	int64_t x1052 = INT64_MIN;

    t171 = (x1049*(x1050+(x1051-x1052)));

    if (t171 != 9223371746785331648LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x1057 = -1;
	static uint16_t x1058 = 3U;
	volatile int16_t x1059 = -1;
	volatile uint32_t x1060 = UINT32_MAX;

    t172 = (x1057*(x1058+(x1059-x1060)));

    if (t172 != 4294967293U) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x1065 = 184U;
	volatile int64_t x1067 = -1LL;
	int64_t x1068 = -1LL;
	int64_t t173 = 4054LL;

    t173 = (x1065*(x1066+(x1067-x1068)));

    if (t173 != 395136991048LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x1073 = UINT32_MAX;
	int32_t x1074 = -1;
	int64_t x1075 = -34378077LL;
	int16_t x1076 = 3;
	volatile int64_t t174 = -2807LL;

    t174 = (x1073*(x1074+(x1075-x1076)));

    if (t174 != -147652733559860895LL) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint64_t x1077 = 133878LLU;
	uint64_t x1078 = UINT64_MAX;
	static uint16_t x1079 = 1413U;
	uint32_t x1080 = 84U;

    t175 = (x1077*(x1078+(x1079-x1080)));

    if (t175 != 177789984LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x1085 = INT16_MIN;
	static int8_t x1086 = INT8_MIN;
	volatile int32_t x1087 = -4576826;
	volatile uint64_t x1088 = 22358632678024LLU;
	static volatile uint64_t t176 = 2240370633795312LLU;

    t176 = (x1085*(x1086+(x1087-x1088)));

    if (t176 != 732647825571119104LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x1091 = 0;
	uint16_t x1092 = 50U;
	volatile int32_t t177 = 4164430;

    t177 = (x1089*(x1090+(x1091-x1092)));

    if (t177 != 557906) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x1094 = 0U;
	uint64_t x1095 = 25079988717959846LLU;
	uint16_t x1096 = 91U;
	uint64_t t178 = 170702848LLU;

    t178 = (x1093*(x1094+(x1095-x1096)));

    if (t178 != 9786728547552556866LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x1102 = 487837001130LLU;
	int16_t x1103 = INT16_MIN;
	volatile int64_t x1104 = -1LL;
	uint64_t t179 = 362LLU;

    t179 = (x1101*(x1102+(x1103-x1104)));

    if (t179 != 3752929797616559LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x1105 = 32118LL;
	static int64_t x1108 = 208382989091075LL;
	uint64_t t180 = 19685LLU;

    t180 = (x1105*(x1106+(x1107-x1108)));

    if (t180 != 11753899232903585650LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x1110 = -1;
	volatile int8_t x1111 = -1;
	int64_t x1112 = -1LL;
	volatile uint64_t t181 = 0LLU;

    t181 = (x1109*(x1110+(x1111-x1112)));

    if (t181 != 1LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint16_t x1117 = 3U;
	int8_t x1118 = INT8_MIN;
	int8_t x1119 = 0;
	int64_t x1120 = -3LL;
	volatile int64_t t182 = 3265LL;

    t182 = (x1117*(x1118+(x1119-x1120)));

    if (t182 != -375LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint32_t x1121 = 28859U;
	int16_t x1122 = -1;
	int32_t x1123 = -1;
	static volatile int8_t x1124 = INT8_MIN;
	volatile uint32_t t183 = 60U;

    t183 = (x1121*(x1122+(x1123-x1124)));

    if (t183 != 3636234U) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x1125 = 101LL;
	int8_t x1126 = 1;
	int32_t x1127 = 1;
	uint16_t x1128 = UINT16_MAX;
	volatile int64_t t184 = -285283754520LL;

    t184 = (x1125*(x1126+(x1127-x1128)));

    if (t184 != -6618833LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x1129 = -507;
	static uint64_t x1130 = 48337LLU;
	uint32_t x1131 = 5007420U;
	uint64_t t185 = 874130115897090914LLU;

    t185 = (x1129*(x1130+(x1131-x1132)));

    if (t185 != 18446744071146427312LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x1138 = -1;
	uint32_t t186 = 22423U;

    t186 = (x1137*(x1138+(x1139-x1140)));

    if (t186 != 0U) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x1149 = INT8_MAX;
	static int16_t x1150 = INT16_MIN;
	uint32_t x1151 = 3961U;
	uint8_t x1152 = 2U;
	volatile uint32_t t187 = 6585U;

    t187 = (x1149*(x1150+(x1151-x1152)));

    if (t187 != 4291308553U) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x1153 = 223034U;
	static volatile int8_t x1154 = 16;
	int32_t x1155 = INT32_MIN;
	volatile int8_t x1156 = INT8_MIN;
	uint32_t t188 = 2U;

    t188 = (x1153*(x1154+(x1155-x1156)));

    if (t188 != 32116896U) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x1158 = INT8_MIN;
	uint64_t x1159 = 2234835259009951LLU;
	volatile uint64_t t189 = 14LLU;

    t189 = (x1157*(x1158+(x1159-x1160)));

    if (t189 != 1213549578071135497LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x1162 = INT16_MIN;
	int64_t x1163 = INT64_MAX;

    t190 = (x1161*(x1162+(x1163-x1164)));

    if (t190 != 2453363177086615552LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x1165 = INT16_MIN;
	static int32_t x1166 = -1;
	int8_t x1167 = 0;
	int16_t x1168 = -161;
	static int32_t t191 = -243968;

    t191 = (x1165*(x1166+(x1167-x1168)));

    if (t191 != -5242880) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x1173 = -1;
	int16_t x1176 = INT16_MIN;
	int32_t t192 = -514642274;

    t192 = (x1173*(x1174+(x1175-x1176)));

    if (t192 != -34129) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x1185 = UINT64_MAX;
	static uint64_t x1186 = 1026163717360380362LLU;
	int16_t x1188 = -1;
	volatile uint64_t t193 = 129028LLU;

    t193 = (x1185*(x1186+(x1187-x1188)));

    if (t193 != 17420580356349162429LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x1189 = 59U;
	uint16_t x1190 = 3756U;
	int16_t x1191 = INT16_MIN;
	int32_t t194 = -49711;

    t194 = (x1189*(x1190+(x1191-x1192)));

    if (t194 != -1711826) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint8_t x1205 = 5U;
	static uint8_t x1206 = 123U;
	int64_t x1207 = 394098786836130228LL;
	volatile uint8_t x1208 = 3U;
	static int64_t t195 = 775152098688422LL;

    t195 = (x1205*(x1206+(x1207-x1208)));

    if (t195 != 1970493934180651740LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x1209 = 6642;
	int32_t x1210 = INT32_MAX;
	uint32_t x1211 = UINT32_MAX;
	static int16_t x1212 = -7;
	volatile uint32_t t196 = 18073414U;

    t196 = (x1209*(x1210+(x1211-x1212)));

    if (t196 != 33210U) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x1213 = -1;
	int16_t x1214 = INT16_MIN;
	volatile uint64_t x1215 = 60900945LLU;
	int32_t x1216 = -1757662;

    t197 = (x1213*(x1214+(x1215-x1216)));

    if (t197 != 18446744073646925777LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x1217 = -1LL;
	static int32_t x1220 = -8146;
	volatile int64_t t198 = -8445876780LL;

    t198 = (x1217*(x1218+(x1219-x1220)));

    if (t198 != 9182366383680971917LL) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x1222 = 62;
	static int8_t x1223 = INT8_MAX;
	uint64_t x1224 = 731451471063075260LLU;
	volatile uint64_t t199 = 221973LLU;

    t199 = (x1221*(x1222+(x1223-x1224)));

    if (t199 != 9098332247022250534LLU) { NG(); } else { ; }
	
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

