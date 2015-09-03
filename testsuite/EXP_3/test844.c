#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t1 = 121LLU;
uint16_t x15 = UINT16_MAX;
static int32_t x16 = INT32_MIN;
uint64_t t6 = 3LLU;
static int64_t t7 = 46403965LL;
uint64_t x42 = 7379645471103915LLU;
int16_t x46 = 6;
static int64_t x48 = INT64_MIN;
int64_t x49 = -1LL;
volatile int64_t x50 = INT64_MIN;
int64_t x55 = INT64_MIN;
uint64_t x56 = 1LLU;
volatile uint64_t t13 = 2932096LLU;
volatile int64_t x67 = INT64_MIN;
uint64_t x73 = UINT64_MAX;
int64_t x76 = INT64_MIN;
volatile int32_t x82 = INT32_MIN;
int16_t x84 = 142;
uint8_t x88 = 10U;
int64_t x90 = INT64_MAX;
int64_t x94 = INT64_MAX;
static int16_t x101 = INT16_MIN;
static int16_t x116 = INT16_MIN;
int64_t x117 = 23546179LL;
volatile uint32_t x120 = 14133086U;
static volatile uint16_t x122 = 5U;
int8_t x123 = INT8_MIN;
int64_t x125 = -1LL;
static volatile uint8_t x126 = 0U;
int16_t x127 = INT16_MIN;
volatile int32_t t31 = 797;
int64_t x136 = INT64_MAX;
int64_t x137 = INT64_MIN;
uint64_t x140 = 93LLU;
volatile int8_t x141 = INT8_MIN;
uint64_t x142 = 722101979409552LLU;
uint8_t x150 = UINT8_MAX;
static int32_t x151 = -6132662;
int32_t x156 = INT32_MAX;
volatile uint32_t x158 = 403U;
volatile int64_t x160 = INT64_MIN;
volatile int16_t x162 = INT16_MIN;
uint64_t x164 = 919LLU;
int64_t x170 = -1LL;
int8_t x174 = 1;
uint16_t x180 = UINT16_MAX;
static volatile int64_t t43 = -10592784071LL;
static int8_t x185 = 0;
static int8_t x188 = -1;
int8_t x190 = 0;
static volatile int32_t t46 = 56857570;
int32_t x193 = INT32_MIN;
int16_t x202 = 674;
uint16_t x203 = 188U;
static volatile uint64_t x204 = UINT64_MAX;
uint64_t t49 = 7LLU;
volatile int8_t x206 = INT8_MAX;
static int8_t x212 = 1;
int16_t x217 = INT16_MIN;
uint32_t x227 = 326820U;
volatile int16_t x228 = INT16_MAX;
int64_t x234 = INT64_MIN;
uint32_t x235 = 47727U;
static volatile int64_t t57 = -4348286431400867874LL;
int8_t x240 = INT8_MIN;
static volatile int32_t x241 = INT32_MIN;
uint32_t x243 = UINT32_MAX;
volatile int32_t t61 = 149298567;
volatile uint8_t x255 = 16U;
volatile uint16_t x267 = UINT16_MAX;
int64_t t67 = -12112751437LL;
static int32_t t70 = -2665;
int32_t x289 = -252999;
volatile uint32_t x290 = 1387456U;
int64_t x292 = -252000752904LL;
volatile int64_t t71 = 9579478716620LL;
static uint8_t x294 = 6U;
int64_t x305 = -311539917LL;
static int64_t x311 = -1LL;
int64_t t76 = -66755559LL;
int32_t x321 = -1;
int64_t x325 = INT64_MIN;
uint16_t x328 = 1U;
volatile int64_t x330 = -1LL;
volatile int8_t x337 = -1;
uint64_t x339 = 2027749LLU;
static volatile int8_t x343 = INT8_MIN;
static uint32_t x346 = UINT32_MAX;
static volatile int16_t x347 = INT16_MAX;
volatile uint32_t t86 = UINT32_MAX;
uint16_t x355 = UINT16_MAX;
static uint32_t t88 = 57U;
uint64_t x367 = 17016122546836331LLU;
int32_t x368 = INT32_MIN;
static uint64_t t90 = 18074963298006795LLU;
static int16_t x369 = -1;
volatile int32_t t91 = -9743764;
int64_t x376 = INT64_MIN;
int64_t t92 = -29223LL;
volatile int64_t t95 = INT64_MAX;
int8_t x392 = INT8_MIN;
volatile int64_t t96 = -112946933LL;
volatile int64_t x395 = 1918907369047207LL;
static uint64_t x404 = 12323LLU;


void f0(void) {
	static int8_t x1 = INT8_MIN;
	uint32_t x2 = 2U;
	static volatile uint64_t x3 = 4004409881LLU;
	int16_t x4 = -1;
	volatile uint64_t t0 = 2675LLU;

	t0 = ((x1^x2)|(x3%x4));

	if (t0 != 4294967195LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	uint64_t x6 = 862LLU;
	int32_t x7 = 9554;
	int16_t x8 = INT16_MAX;

	t1 = ((x5^x6)|(x7%x8));

	if (t1 != 9223372036854785886LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = INT8_MAX;
	int32_t x10 = INT32_MIN;
	static int8_t x11 = INT8_MAX;
	int8_t x12 = -1;
	volatile int32_t t2 = 1;

	t2 = ((x9^x10)|(x11%x12));

	if (t2 != -2147483521) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = -1;
	uint8_t x14 = 13U;
	static int32_t t3 = -10;

	t3 = ((x13^x14)|(x15%x16));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	int16_t x18 = -6977;
	static volatile int8_t x19 = -1;
	int32_t x20 = INT32_MIN;
	volatile int64_t t4 = -5334LL;

	t4 = ((x17^x18)|(x19%x20));

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = 100;
	int64_t x22 = 9246893427379LL;
	int8_t x23 = INT8_MIN;
	uint16_t x24 = 20715U;
	int64_t t5 = 516836330127307858LL;

	t5 = ((x21^x22)|(x23%x24));

	if (t5 != -41LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 663880325LLU;
	int8_t x26 = INT8_MIN;
	int16_t x27 = -400;
	int16_t x28 = INT16_MIN;

	t6 = ((x25^x26)|(x27%x28));

	if (t6 != 18446744073709551477LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x29 = UINT32_MAX;
	int64_t x30 = INT64_MIN;
	static volatile int32_t x31 = INT32_MIN;
	volatile int64_t x32 = 547389980752102501LL;

	t7 = ((x29^x30)|(x31%x32));

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = UINT32_MAX;
	static volatile int32_t x34 = 0;
	uint8_t x35 = 110U;
	static uint32_t x36 = UINT32_MAX;
	static uint32_t t8 = UINT32_MAX;

	t8 = ((x33^x34)|(x35%x36));

	if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = UINT8_MAX;
	volatile uint16_t x38 = UINT16_MAX;
	static int64_t x39 = -2848246166LL;
	volatile int32_t x40 = INT32_MIN;
	volatile int64_t t9 = 361774LL;

	t9 = ((x37^x38)|(x39%x40));

	if (t9 != -700711062LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = INT32_MAX;
	volatile int16_t x43 = INT16_MAX;
	int64_t x44 = INT64_MAX;
	uint64_t t10 = 32818862509LLU;

	t10 = ((x41^x42)|(x43%x44));

	if (t10 != 7379646716870655LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MAX;
	uint8_t x47 = UINT8_MAX;
	int64_t t11 = -23969704123203145LL;

	t11 = ((x45^x46)|(x47%x48));

	if (t11 != 32767LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x51 = 14144886;
	int16_t x52 = INT16_MIN;
	int64_t t12 = INT64_MAX;

	t12 = ((x49^x50)|(x51%x52));

	if (t12 != INT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = INT16_MIN;
	static uint64_t x54 = UINT64_MAX;

	t13 = ((x53^x54)|(x55%x56));

	if (t13 != 32767LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x57 = INT16_MIN;
	uint64_t x58 = UINT64_MAX;
	int64_t x59 = 55346185765537LL;
	static volatile int8_t x60 = INT8_MIN;
	uint64_t t14 = 236857852718399LLU;

	t14 = ((x57^x58)|(x59%x60));

	if (t14 != 32767LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -4;
	uint64_t x62 = 111LLU;
	volatile int8_t x63 = INT8_MIN;
	static uint8_t x64 = 4U;
	uint64_t t15 = 41316LLU;

	t15 = ((x61^x62)|(x63%x64));

	if (t15 != 18446744073709551507LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x65 = INT16_MIN;
	int16_t x66 = 1;
	static int16_t x68 = 6;
	int64_t t16 = -88005767756944100LL;

	t16 = ((x65^x66)|(x67%x68));

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = UINT32_MAX;
	int16_t x70 = 3838;
	uint8_t x71 = UINT8_MAX;
	uint16_t x72 = UINT16_MAX;
	static uint32_t t17 = 3299019U;

	t17 = ((x69^x70)|(x71%x72));

	if (t17 != 4294963711U) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x74 = 1;
	static volatile int8_t x75 = INT8_MAX;
	volatile uint64_t t18 = UINT64_MAX;

	t18 = ((x73^x74)|(x75%x76));

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x77 = 1;
	int8_t x78 = INT8_MIN;
	uint32_t x79 = UINT32_MAX;
	int32_t x80 = INT32_MAX;
	static volatile uint32_t t19 = 2304130U;

	t19 = ((x77^x78)|(x79%x80));

	if (t19 != 4294967169U) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MAX;
	int16_t x83 = -1;
	int32_t t20 = 5848;

	t20 = ((x81^x82)|(x83%x84));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x85 = 9U;
	volatile int64_t x86 = INT64_MIN;
	int32_t x87 = -1;
	volatile int64_t t21 = -380LL;

	t21 = ((x85^x86)|(x87%x88));

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = -1135;
	static int64_t x91 = INT64_MIN;
	static int16_t x92 = -1299;
	volatile int64_t t22 = -1191332203484703342LL;

	t22 = ((x89^x90)|(x91%x92));

	if (t22 != -513LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int8_t x93 = -19;
	uint32_t x95 = UINT32_MAX;
	int32_t x96 = INT32_MIN;
	static volatile int64_t t23 = 1551LL;

	t23 = ((x93^x94)|(x95%x96));

	if (t23 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x102 = UINT32_MAX;
	volatile int32_t x103 = 66603848;
	int16_t x104 = 239;
	uint32_t t24 = 0U;

	t24 = ((x101^x102)|(x103%x104));

	if (t24 != 32767U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x105 = INT32_MIN;
	int32_t x106 = -1;
	int64_t x107 = -1LL;
	static int32_t x108 = 4433960;
	static volatile int64_t t25 = -292LL;

	t25 = ((x105^x106)|(x107%x108));

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x109 = 7U;
	volatile uint32_t x110 = 782340405U;
	int16_t x111 = INT16_MAX;
	static uint32_t x112 = 90U;
	uint32_t t26 = 29421976U;

	t26 = ((x109^x110)|(x111%x112));

	if (t26 != 782340407U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = INT64_MIN;
	uint16_t x114 = 413U;
	int8_t x115 = INT8_MIN;
	int64_t t27 = 339195937829553159LL;

	t27 = ((x113^x114)|(x115%x116));

	if (t27 != -99LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x118 = 65LL;
	int64_t x119 = -7073284972LL;
	volatile int64_t t28 = 11555512LL;

	t28 = ((x117^x118)|(x119%x120));

	if (t28 != -38610LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x121 = 1153691420U;
	int8_t x124 = INT8_MIN;
	volatile uint32_t t29 = 256647U;

	t29 = ((x121^x122)|(x123%x124));

	if (t29 != 1153691417U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x128 = 9131;
	volatile int64_t t30 = -1LL;

	t30 = ((x125^x126)|(x127%x128));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x129 = 31;
	int16_t x130 = -193;
	static int8_t x131 = INT8_MAX;
	int8_t x132 = -9;

	t31 = ((x129^x130)|(x131%x132));

	if (t31 != -223) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x133 = 4;
	int8_t x134 = INT8_MIN;
	volatile uint32_t x135 = UINT32_MAX;
	int64_t t32 = 351239LL;

	t32 = ((x133^x134)|(x135%x136));

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x138 = -1;
	volatile int32_t x139 = 1631068;
	uint64_t t33 = 32899980066LLU;

	t33 = ((x137^x138)|(x139%x140));

	if (t33 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x143 = -154;
	static int16_t x144 = 1;
	uint64_t t34 = 1794723843490219167LLU;

	t34 = ((x141^x142)|(x143%x144));

	if (t34 != 18446021971730141968LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x145 = -1245;
	static int32_t x146 = -1;
	int32_t x147 = 16943;
	int8_t x148 = 9;
	volatile int32_t t35 = 15269;

	t35 = ((x145^x146)|(x147%x148));

	if (t35 != 1245) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x149 = 55U;
	int64_t x152 = -555728332942425586LL;
	static int64_t t36 = 1265195497732653LL;

	t36 = ((x149^x150)|(x151%x152));

	if (t36 != -6132534LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x153 = -1;
	int8_t x154 = INT8_MAX;
	static int8_t x155 = INT8_MIN;
	volatile int32_t t37 = -13;

	t37 = ((x153^x154)|(x155%x156));

	if (t37 != -128) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x157 = -1;
	int16_t x159 = INT16_MIN;
	volatile int64_t t38 = -1438488192831211481LL;

	t38 = ((x157^x158)|(x159%x160));

	if (t38 != -404LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x161 = 14798U;
	static volatile uint64_t x163 = 1166576340609827LLU;
	uint64_t t39 = 7537241715LLU;

	t39 = ((x161^x162)|(x163%x164));

	if (t39 != 18446744073709534175LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x165 = INT8_MIN;
	uint32_t x166 = 945942U;
	int16_t x167 = 0;
	static uint16_t x168 = 1565U;
	volatile uint32_t t40 = 4503U;

	t40 = ((x165^x166)|(x167%x168));

	if (t40 != 4294021270U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x169 = INT32_MIN;
	static uint32_t x171 = 1U;
	int16_t x172 = 10357;
	volatile int64_t t41 = 74443517683LL;

	t41 = ((x169^x170)|(x171%x172));

	if (t41 != 2147483647LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x173 = INT64_MIN;
	volatile int8_t x175 = -1;
	int32_t x176 = -474;
	static volatile int64_t t42 = -69859005252058494LL;

	t42 = ((x173^x174)|(x175%x176));

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x177 = -1;
	uint32_t x178 = 3652602U;
	int64_t x179 = INT64_MAX;

	t43 = ((x177^x178)|(x179%x180));

	if (t43 != 4291330047LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x181 = INT32_MIN;
	volatile int32_t x182 = INT32_MIN;
	int16_t x183 = INT16_MIN;
	static int8_t x184 = INT8_MIN;
	int32_t t44 = -231;

	t44 = ((x181^x182)|(x183%x184));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x186 = -3456636803257426044LL;
	static uint64_t x187 = 9021LLU;
	uint64_t t45 = 192LLU;

	t45 = ((x185^x186)|(x187%x188));

	if (t45 != 14990107270452133821LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x189 = -1;
	static uint8_t x191 = 33U;
	int16_t x192 = INT16_MAX;

	t46 = ((x189^x190)|(x191%x192));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x194 = INT32_MIN;
	int8_t x195 = INT8_MAX;
	int64_t x196 = INT64_MIN;
	int64_t t47 = 2891101257162218LL;

	t47 = ((x193^x194)|(x195%x196));

	if (t47 != 127LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x197 = INT16_MAX;
	static int8_t x198 = -1;
	int64_t x199 = -1LL;
	int32_t x200 = -2710;
	int64_t t48 = 2076421856256513387LL;

	t48 = ((x197^x198)|(x199%x200));

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x201 = UINT64_MAX;

	t49 = ((x201^x202)|(x203%x204));

	if (t49 != 18446744073709551101LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x205 = INT16_MIN;
	volatile int16_t x207 = INT16_MAX;
	int8_t x208 = INT8_MIN;
	volatile int32_t t50 = 42499;

	t50 = ((x205^x206)|(x207%x208));

	if (t50 != -32641) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x209 = UINT64_MAX;
	volatile uint8_t x210 = 0U;
	static int32_t x211 = INT32_MAX;
	uint64_t t51 = UINT64_MAX;

	t51 = ((x209^x210)|(x211%x212));

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int8_t x213 = INT8_MAX;
	int8_t x214 = -1;
	int16_t x215 = INT16_MAX;
	int16_t x216 = -1;
	volatile int32_t t52 = 101545312;

	t52 = ((x213^x214)|(x215%x216));

	if (t52 != -128) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint16_t x218 = 1U;
	uint64_t x219 = 7553466116261LLU;
	static int64_t x220 = INT64_MIN;
	uint64_t t53 = 18173888368LLU;

	t53 = ((x217^x218)|(x219%x220));

	if (t53 != 18446744073709529253LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x221 = 33002LLU;
	int8_t x222 = INT8_MAX;
	int8_t x223 = INT8_MAX;
	int8_t x224 = -1;
	volatile uint64_t t54 = 2LLU;

	t54 = ((x221^x222)|(x223%x224));

	if (t54 != 32917LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x225 = 949614551675376908LL;
	static int16_t x226 = INT16_MIN;
	int64_t t55 = -525LL;

	t55 = ((x225^x226)|(x227%x228));

	if (t55 != -949614551675372115LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x229 = 3610U;
	uint16_t x230 = UINT16_MAX;
	static int16_t x231 = INT16_MIN;
	static int8_t x232 = INT8_MIN;
	volatile int32_t t56 = 1538;

	t56 = ((x229^x230)|(x231%x232));

	if (t56 != 61925) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x233 = 6U;
	volatile int16_t x236 = -1;

	t57 = ((x233^x234)|(x235%x236));

	if (t57 != -9223372036854728081LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x237 = INT8_MIN;
	volatile int16_t x238 = INT16_MIN;
	int32_t x239 = -434;
	static volatile int32_t t58 = 11;

	t58 = ((x237^x238)|(x239%x240));

	if (t58 != -50) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x242 = -8484;
	uint32_t x244 = UINT32_MAX;
	static volatile uint32_t t59 = 781U;

	t59 = ((x241^x242)|(x243%x244));

	if (t59 != 2147475164U) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x245 = UINT64_MAX;
	int64_t x246 = -1LL;
	uint64_t x247 = 8757729536821LLU;
	int16_t x248 = -1;
	volatile uint64_t t60 = 273590606973923LLU;

	t60 = ((x245^x246)|(x247%x248));

	if (t60 != 8757729536821LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x249 = INT16_MIN;
	int8_t x250 = INT8_MAX;
	int8_t x251 = INT8_MIN;
	static volatile int16_t x252 = INT16_MIN;

	t61 = ((x249^x250)|(x251%x252));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x253 = UINT64_MAX;
	static volatile int32_t x254 = 274931;
	static int16_t x256 = 109;
	uint64_t t62 = 4036445389739074LLU;

	t62 = ((x253^x254)|(x255%x256));

	if (t62 != 18446744073709276700LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x257 = -4958;
	uint16_t x258 = UINT16_MAX;
	int32_t x259 = 53;
	int8_t x260 = INT8_MIN;
	int32_t t63 = -2155;

	t63 = ((x257^x258)|(x259%x260));

	if (t63 != -60547) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x261 = INT8_MAX;
	int64_t x262 = -1LL;
	int8_t x263 = INT8_MIN;
	uint16_t x264 = 56U;
	volatile int64_t t64 = 37738993LL;

	t64 = ((x261^x262)|(x263%x264));

	if (t64 != -16LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x265 = 78800932LLU;
	int64_t x266 = -11436588411LL;
	static uint32_t x268 = 26U;
	static volatile uint64_t t65 = 46182608724168048LLU;

	t65 = ((x265^x266)|(x267%x268));

	if (t65 != 18446744062215187119LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x269 = -1;
	volatile int8_t x270 = INT8_MAX;
	int32_t x271 = -179;
	uint32_t x272 = 28458225U;
	volatile uint32_t t66 = 9938944U;

	t66 = ((x269^x270)|(x271%x272));

	if (t66 != 4294967191U) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x273 = UINT8_MAX;
	int16_t x274 = INT16_MIN;
	int64_t x275 = INT64_MIN;
	int32_t x276 = -1;

	t67 = ((x273^x274)|(x275%x276));

	if (t67 != -32513LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x277 = INT32_MIN;
	int16_t x278 = INT16_MIN;
	uint64_t x279 = 57693453454862718LLU;
	int64_t x280 = 1415246214227LL;
	uint64_t t68 = 4441368725080875729LLU;

	t68 = ((x277^x278)|(x279%x280));

	if (t68 != 942745298103LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x281 = INT64_MIN;
	int8_t x282 = INT8_MIN;
	volatile uint8_t x283 = 1U;
	int8_t x284 = INT8_MIN;
	int64_t t69 = 827677287311LL;

	t69 = ((x281^x282)|(x283%x284));

	if (t69 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x285 = -1;
	int16_t x286 = INT16_MIN;
	static int8_t x287 = -1;
	int32_t x288 = -57;

	t70 = ((x285^x286)|(x287%x288));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x291 = -1822LL;

	t71 = ((x289^x290)|(x291%x292));

	if (t71 != -1797LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x293 = -19905245;
	uint16_t x295 = 5607U;
	volatile int32_t x296 = INT32_MIN;
	int32_t t72 = 28;

	t72 = ((x293^x294)|(x295%x296));

	if (t72 != -19900953) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x297 = -1;
	uint16_t x298 = 3U;
	volatile int8_t x299 = -1;
	int32_t x300 = 350;
	volatile int32_t t73 = -2005;

	t73 = ((x297^x298)|(x299%x300));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x301 = INT64_MAX;
	static int64_t x302 = INT64_MIN;
	uint16_t x303 = 1U;
	volatile uint32_t x304 = UINT32_MAX;
	int64_t t74 = 148102LL;

	t74 = ((x301^x302)|(x303%x304));

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x306 = INT8_MAX;
	static uint64_t x307 = UINT64_MAX;
	int64_t x308 = INT64_MIN;
	volatile uint64_t t75 = UINT64_MAX;

	t75 = ((x305^x306)|(x307%x308));

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x309 = INT32_MIN;
	volatile int64_t x310 = INT64_MIN;
	uint32_t x312 = UINT32_MAX;

	t76 = ((x309^x310)|(x311%x312));

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x313 = INT8_MAX;
	static int8_t x314 = INT8_MIN;
	uint64_t x315 = UINT64_MAX;
	static int8_t x316 = INT8_MAX;
	static volatile uint64_t t77 = UINT64_MAX;

	t77 = ((x313^x314)|(x315%x316));

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x317 = 17215496838937LLU;
	volatile uint32_t x318 = 952439597U;
	int64_t x319 = INT64_MAX;
	uint16_t x320 = UINT16_MAX;
	uint64_t t78 = 7978276365LLU;

	t78 = ((x317^x318)|(x319%x320));

	if (t78 != 17216164069375LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int64_t x322 = INT64_MAX;
	int64_t x323 = -6339975LL;
	int64_t x324 = INT64_MAX;
	int64_t t79 = -5823455LL;

	t79 = ((x321^x322)|(x323%x324));

	if (t79 != -6339975LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x326 = -1;
	static int8_t x327 = INT8_MIN;
	int64_t t80 = INT64_MAX;

	t80 = ((x325^x326)|(x327%x328));

	if (t80 != INT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x329 = 73U;
	uint8_t x331 = UINT8_MAX;
	int16_t x332 = -1;
	static volatile int64_t t81 = -742200087453131530LL;

	t81 = ((x329^x330)|(x331%x332));

	if (t81 != -74LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x333 = INT64_MAX;
	int16_t x334 = INT16_MIN;
	int64_t x335 = 10591689179433193LL;
	int16_t x336 = -2031;
	int64_t t82 = -1554731346508759LL;

	t82 = ((x333^x334)|(x335%x336));

	if (t82 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x338 = UINT32_MAX;
	uint32_t x340 = UINT32_MAX;
	uint64_t t83 = 3205LLU;

	t83 = ((x337^x338)|(x339%x340));

	if (t83 != 2027749LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x341 = -1;
	int64_t x342 = INT64_MIN;
	static int64_t x344 = -1LL;
	volatile int64_t t84 = INT64_MAX;

	t84 = ((x341^x342)|(x343%x344));

	if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x345 = UINT8_MAX;
	int64_t x348 = -135150139514LL;
	int64_t t85 = -456490023LL;

	t85 = ((x345^x346)|(x347%x348));

	if (t85 != 4294967295LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x349 = UINT32_MAX;
	uint32_t x350 = UINT32_MAX;
	int8_t x351 = -1;
	int16_t x352 = INT16_MAX;

	t86 = ((x349^x350)|(x351%x352));

	if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x353 = -1;
	uint32_t x354 = 553704363U;
	volatile int8_t x356 = INT8_MIN;
	volatile uint32_t t87 = 8953278U;

	t87 = ((x353^x354)|(x355%x356));

	if (t87 != 3741262975U) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x357 = INT32_MAX;
	uint32_t x358 = UINT32_MAX;
	int32_t x359 = -916150;
	int16_t x360 = -1;

	t88 = ((x357^x358)|(x359%x360));

	if (t88 != 2147483648U) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x361 = 30U;
	volatile uint8_t x362 = 0U;
	volatile int64_t x363 = INT64_MIN;
	int16_t x364 = 1;
	volatile int64_t t89 = 27918164766699367LL;

	t89 = ((x361^x362)|(x363%x364));

	if (t89 != 30LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x365 = 1225U;
	static uint16_t x366 = UINT16_MAX;

	t90 = ((x365^x366)|(x367%x368));

	if (t90 != 17016122546846591LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x370 = 450U;
	int16_t x371 = -9;
	volatile uint16_t x372 = 4U;

	t91 = ((x369^x370)|(x371%x372));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x373 = INT32_MIN;
	int32_t x374 = INT32_MIN;
	int16_t x375 = INT16_MIN;

	t92 = ((x373^x374)|(x375%x376));

	if (t92 != -32768LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x377 = 936;
	uint8_t x378 = 11U;
	int8_t x379 = -1;
	volatile uint64_t x380 = 742384720LLU;
	uint64_t t93 = 11454575251783LLU;

	t93 = ((x377^x378)|(x379%x380));

	if (t93 != 51060671LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x381 = -1LL;
	static int64_t x382 = -1LL;
	uint16_t x383 = 2U;
	int32_t x384 = -1;
	int64_t t94 = -110954770562712LL;

	t94 = ((x381^x382)|(x383%x384));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x385 = INT64_MIN;
	static volatile int8_t x386 = -1;
	int32_t x387 = 411675453;
	volatile uint8_t x388 = 26U;

	t95 = ((x385^x386)|(x387%x388));

	if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x389 = INT64_MIN;
	static uint16_t x390 = 15U;
	int32_t x391 = INT32_MAX;

	t96 = ((x389^x390)|(x391%x392));

	if (t96 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int64_t x393 = INT64_MAX;
	static int64_t x394 = INT64_MIN;
	static uint16_t x396 = 2U;
	int64_t t97 = 0LL;

	t97 = ((x393^x394)|(x395%x396));

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x397 = -1;
	volatile int8_t x398 = -28;
	int16_t x399 = 13;
	int32_t x400 = -10567;
	volatile int32_t t98 = -52;

	t98 = ((x397^x398)|(x399%x400));

	if (t98 != 31) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x401 = INT32_MIN;
	uint64_t x402 = UINT64_MAX;
	uint32_t x403 = 237U;
	uint64_t t99 = 914536LLU;

	t99 = ((x401^x402)|(x403%x404));

	if (t99 != 2147483647LLU) { NG(); } else { ; }
	
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


    return 0;
}

