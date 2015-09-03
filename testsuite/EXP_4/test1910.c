#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x5 = 26U;
int64_t x6 = 239LL;
volatile int16_t x11 = -1;
int64_t t3 = 97LL;
static int8_t x20 = -1;
uint8_t x31 = UINT8_MAX;
int64_t x32 = -24LL;
volatile int64_t x37 = INT64_MIN;
int64_t t9 = 2493LL;
int32_t x42 = -20;
volatile int8_t x43 = -1;
int16_t x47 = INT16_MIN;
int32_t x53 = INT32_MAX;
int32_t x65 = 1250;
volatile int16_t x68 = INT16_MIN;
int32_t t16 = -1720;
int8_t x71 = -1;
uint8_t x72 = 47U;
static volatile int32_t t17 = 76411978;
int8_t x80 = -1;
int64_t x86 = -9061LL;
uint64_t x91 = 35185630214886LLU;
volatile int64_t x93 = 2034525239LL;
volatile uint64_t x95 = 2LLU;
int16_t x96 = 0;
static int32_t x97 = INT32_MIN;
volatile int16_t x99 = -1;
volatile uint32_t x102 = 60597211U;
int64_t t26 = -4693495141928LL;
uint8_t x109 = UINT8_MAX;
int64_t x112 = -48172774708475LL;
int16_t x118 = INT16_MAX;
static int16_t x122 = INT16_MAX;
static int32_t x128 = 794616496;
uint64_t t32 = 92LLU;
volatile int64_t x136 = INT64_MIN;
int64_t t33 = 421706LL;
int16_t x140 = INT16_MIN;
int8_t x146 = INT8_MIN;
static int32_t x148 = INT32_MAX;
uint64_t t36 = 20225LLU;
int8_t x152 = INT8_MAX;
int32_t t37 = 186529526;
int64_t x153 = INT64_MIN;
int8_t x163 = 1;
int8_t x168 = -1;
static int8_t x171 = -1;
volatile int64_t t42 = -1437349947501LL;
uint32_t x175 = 53496260U;
int32_t x183 = INT32_MIN;
volatile int16_t x192 = -1;
static volatile int64_t t49 = INT64_MIN;
int16_t x204 = INT16_MIN;
uint16_t x206 = UINT16_MAX;
uint16_t x213 = UINT16_MAX;
int64_t x217 = -1LL;
uint64_t x219 = UINT64_MAX;
volatile uint64_t t54 = UINT64_MAX;
volatile uint32_t t56 = 1418638U;
uint8_t x232 = 15U;
int32_t x237 = INT32_MAX;
uint32_t x241 = 3824U;
int16_t x242 = INT16_MAX;
volatile int64_t t60 = 132811LL;
int16_t x250 = INT16_MAX;
int8_t x252 = 50;
uint32_t t62 = 291845086U;
int64_t x253 = INT64_MAX;
uint64_t x254 = UINT64_MAX;
int32_t x256 = -214794638;
uint64_t x259 = 105068269941949LLU;
static int64_t x269 = INT64_MIN;
int32_t x274 = -774762713;
uint8_t x275 = 10U;
static uint8_t x276 = 48U;
static int8_t x278 = -1;
int32_t t69 = -38990;
static int64_t t70 = 24LL;
static uint8_t x290 = 42U;
int16_t x291 = INT16_MAX;
int64_t x298 = INT64_MIN;
int64_t x299 = -1459LL;
volatile int8_t x300 = INT8_MAX;
volatile int8_t x302 = INT8_MIN;
int64_t t75 = 1577596LL;
int16_t x305 = -6;
static volatile int64_t t76 = -10899544449621LL;
static uint8_t x310 = UINT8_MAX;
volatile uint8_t x312 = UINT8_MAX;
uint32_t t80 = 4035424U;
uint16_t x325 = 0U;
volatile uint8_t x326 = 59U;
int64_t x333 = 56829103LL;
uint16_t x334 = 339U;
int16_t x338 = INT16_MIN;
static int64_t x340 = INT64_MIN;
int64_t x342 = -9103520904115LL;
int8_t x344 = 1;
static int64_t t85 = -497103862228LL;
int64_t x347 = -124LL;
volatile uint64_t x357 = UINT64_MAX;
int16_t x358 = INT16_MAX;
volatile uint64_t t89 = 366638613963211318LLU;
static int16_t x366 = 450;
int8_t x371 = 11;
int32_t x375 = -53535781;
static volatile int32_t x376 = INT32_MIN;
uint32_t x377 = 332415U;
uint32_t x391 = 21U;
static volatile int32_t x393 = 42905;
static uint32_t x396 = 104994U;
volatile int64_t x404 = INT64_MIN;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	static volatile uint16_t x2 = 5U;
	uint16_t x3 = UINT16_MAX;
	int8_t x4 = -1;
	static uint64_t t0 = UINT64_MAX;

	t0 = (x1|(x2/(x3|x4)));

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x7 = 879820U;
	uint8_t x8 = 74U;
	static volatile int64_t t1 = -234294880002097LL;

	t1 = (x5|(x6/(x7|x8)));

	if (t1 != 26LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	int16_t x10 = INT16_MIN;
	int8_t x12 = INT8_MIN;
	int32_t t2 = 246504;

	t2 = (x9|(x10/(x11|x12)));

	if (t2 != -32768) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -16260LL;
	static int16_t x14 = INT16_MIN;
	static int32_t x15 = -4;
	volatile uint32_t x16 = UINT32_MAX;

	t3 = (x13|(x14/(x15|x16)));

	if (t3 != -16260LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x17 = UINT16_MAX;
	static int32_t x18 = INT32_MAX;
	int64_t x19 = -5975814878584192LL;
	volatile int64_t t4 = 18607029106969LL;

	t4 = (x17|(x18/(x19|x20)));

	if (t4 != -2147418113LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = -103;
	uint16_t x22 = 10U;
	uint8_t x23 = UINT8_MAX;
	uint64_t x24 = 1LLU;
	uint64_t t5 = 803802609239359444LLU;

	t5 = (x21|(x22/(x23|x24)));

	if (t5 != 18446744073709551513LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	int32_t x26 = 651;
	int64_t x27 = -1LL;
	int32_t x28 = INT32_MIN;
	static int64_t t6 = 298348041547838LL;

	t6 = (x25|(x26/(x27|x28)));

	if (t6 != -651LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -10734;
	static volatile uint16_t x30 = 1U;
	volatile int64_t t7 = 104836LL;

	t7 = (x29|(x30/(x31|x32)));

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = INT8_MIN;
	int16_t x34 = -1398;
	volatile int64_t x35 = 1366785951051LL;
	static int32_t x36 = 169;
	static volatile int64_t t8 = -50109967LL;

	t8 = (x33|(x34/(x35|x36)));

	if (t8 != -128LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x38 = INT64_MAX;
	int16_t x39 = INT16_MIN;
	int8_t x40 = INT8_MIN;

	t9 = (x37|(x38/(x39|x40)));

	if (t9 != -72057594037927935LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x41 = 394750U;
	static uint64_t x44 = UINT64_MAX;
	uint64_t t10 = 1356143135908147819LLU;

	t10 = (x41|(x42/(x43|x44)));

	if (t10 != 394750LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x45 = -1LL;
	uint8_t x46 = 113U;
	uint32_t x48 = UINT32_MAX;
	static volatile int64_t t11 = -7779536182LL;

	t11 = (x45|(x46/(x47|x48)));

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	int16_t x50 = INT16_MIN;
	uint16_t x51 = 0U;
	int32_t x52 = -82;
	int32_t t12 = 10;

	t12 = (x49|(x50/(x51|x52)));

	if (t12 != -32369) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x54 = 8815077927997626999LLU;
	int32_t x55 = INT32_MIN;
	volatile uint16_t x56 = 88U;
	static volatile uint64_t t13 = 3495817LLU;

	t13 = (x53|(x54/(x55|x56)));

	if (t13 != 2147483647LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x57 = INT16_MIN;
	static int16_t x58 = -1;
	static int8_t x59 = INT8_MIN;
	static uint16_t x60 = UINT16_MAX;
	int32_t t14 = 1025113;

	t14 = (x57|(x58/(x59|x60)));

	if (t14 != -32767) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -308;
	uint64_t x62 = UINT64_MAX;
	static uint8_t x63 = 11U;
	int16_t x64 = INT16_MIN;
	uint64_t t15 = 161LLU;

	t15 = (x61|(x62/(x63|x64)));

	if (t15 != 18446744073709551309LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x66 = 1;
	uint8_t x67 = UINT8_MAX;

	t16 = (x65|(x66/(x67|x68)));

	if (t16 != 1250) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = UINT8_MAX;
	int16_t x70 = INT16_MIN;

	t17 = (x69|(x70/(x71|x72)));

	if (t17 != 33023) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x73 = UINT64_MAX;
	static uint8_t x74 = UINT8_MAX;
	static volatile int32_t x75 = -1;
	int8_t x76 = -3;
	static uint64_t t18 = UINT64_MAX;

	t18 = (x73|(x74/(x75|x76)));

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x77 = INT8_MIN;
	int8_t x78 = INT8_MIN;
	int32_t x79 = -1;
	volatile int32_t t19 = 1;

	t19 = (x77|(x78/(x79|x80)));

	if (t19 != -128) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MIN;
	volatile uint16_t x82 = 64U;
	uint16_t x83 = 317U;
	int8_t x84 = -2;
	volatile int32_t t20 = -7363;

	t20 = (x81|(x82/(x83|x84)));

	if (t20 != -64) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int64_t x85 = -1LL;
	int16_t x87 = -1;
	static int64_t x88 = INT64_MIN;
	volatile int64_t t21 = -20447182272LL;

	t21 = (x85|(x86/(x87|x88)));

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = -105;
	static uint16_t x90 = 491U;
	static uint32_t x92 = 168U;
	volatile uint64_t t22 = 307562613995741LLU;

	t22 = (x89|(x90/(x91|x92)));

	if (t22 != 18446744073709551511LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x94 = INT8_MAX;
	static uint64_t t23 = 231300LLU;

	t23 = (x93|(x94/(x95|x96)));

	if (t23 != 2034525247LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x98 = 2U;
	int16_t x100 = INT16_MIN;
	volatile uint32_t t24 = 242656455U;

	t24 = (x97|(x98/(x99|x100)));

	if (t24 != 2147483648U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MAX;
	static int8_t x103 = -1;
	volatile uint32_t x104 = UINT32_MAX;
	static volatile uint32_t t25 = 2889710U;

	t25 = (x101|(x102/(x103|x104)));

	if (t25 != 127U) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = 557LL;
	static int64_t x106 = 6LL;
	volatile uint16_t x107 = UINT16_MAX;
	int8_t x108 = 1;

	t26 = (x105|(x106/(x107|x108)));

	if (t26 != 557LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x110 = UINT8_MAX;
	static volatile uint64_t x111 = 49926684LLU;
	volatile uint64_t t27 = 2198916060666008598LLU;

	t27 = (x109|(x110/(x111|x112)));

	if (t27 != 255LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 39U;
	int8_t x114 = 30;
	int64_t x115 = 333LL;
	int64_t x116 = -516378897LL;
	int64_t t28 = -1826506491847981331LL;

	t28 = (x113|(x114/(x115|x116)));

	if (t28 != 39LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x117 = UINT16_MAX;
	static int64_t x119 = INT64_MIN;
	static uint64_t x120 = 9827LLU;
	volatile uint64_t t29 = 10417LLU;

	t29 = (x117|(x118/(x119|x120)));

	if (t29 != 65535LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MAX;
	volatile int32_t x123 = 195891085;
	int16_t x124 = INT16_MIN;
	volatile int32_t t30 = 20193;

	t30 = (x121|(x122/(x123|x124)));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = 0U;
	int32_t x126 = -1;
	static uint8_t x127 = 1U;
	int32_t t31 = 0;

	t31 = (x125|(x126/(x127|x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MAX;
	static volatile uint64_t x130 = 26322LLU;
	int64_t x131 = -2392675078636LL;
	int32_t x132 = INT32_MIN;

	t32 = (x129|(x130/(x131|x132)));

	if (t32 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = 96LL;
	static int32_t x134 = INT32_MIN;
	int8_t x135 = INT8_MAX;

	t33 = (x133|(x134/(x135|x136)));

	if (t33 != 96LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = INT16_MAX;
	uint64_t x138 = UINT64_MAX;
	static uint16_t x139 = 23776U;
	volatile uint64_t t34 = 15556LLU;

	t34 = (x137|(x138/(x139|x140)));

	if (t34 != 32767LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int32_t x141 = INT32_MAX;
	uint16_t x142 = UINT16_MAX;
	uint8_t x143 = UINT8_MAX;
	static volatile uint64_t x144 = 833996170290832463LLU;
	volatile uint64_t t35 = 2819LLU;

	t35 = (x141|(x142/(x143|x144)));

	if (t35 != 2147483647LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = 2756932LLU;
	static volatile int16_t x147 = 15816;

	t36 = (x145|(x146/(x147|x148)));

	if (t36 != 2756932LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x149 = INT16_MAX;
	static int32_t x150 = INT32_MIN;
	int16_t x151 = INT16_MAX;

	t37 = (x149|(x150/(x151|x152)));

	if (t37 != -65537) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x154 = 1U;
	volatile int64_t x155 = INT64_MAX;
	static int64_t x156 = 200708804106LL;
	int64_t t38 = INT64_MIN;

	t38 = (x153|(x154/(x155|x156)));

	if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x157 = INT64_MIN;
	uint64_t x158 = 8285248LLU;
	uint64_t x159 = 121354312037LLU;
	int8_t x160 = -1;
	volatile uint64_t t39 = 1005589158119LLU;

	t39 = (x157|(x158/(x159|x160)));

	if (t39 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x161 = UINT8_MAX;
	static int16_t x162 = -1;
	int32_t x164 = -1;
	static volatile int32_t t40 = -207;

	t40 = (x161|(x162/(x163|x164)));

	if (t40 != 255) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = 6U;
	int64_t x166 = 1330241186240626LL;
	volatile int16_t x167 = INT16_MIN;
	int64_t t41 = 150LL;

	t41 = (x165|(x166/(x167|x168)));

	if (t41 != -1330241186240626LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = -1;
	int8_t x170 = INT8_MAX;
	int64_t x172 = -589LL;

	t42 = (x169|(x170/(x171|x172)));

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = INT32_MAX;
	volatile int8_t x174 = 10;
	int16_t x176 = INT16_MIN;
	uint32_t t43 = 1749423466U;

	t43 = (x173|(x174/(x175|x176)));

	if (t43 != 2147483647U) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int8_t x177 = INT8_MIN;
	int16_t x178 = -1;
	volatile uint32_t x179 = 780006U;
	uint16_t x180 = UINT16_MAX;
	volatile uint32_t t44 = 1042257466U;

	t44 = (x177|(x178/(x179|x180)));

	if (t44 != 4294967253U) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x181 = -1;
	static uint64_t x182 = 5009LLU;
	int64_t x184 = -41955443210302LL;
	uint64_t t45 = UINT64_MAX;

	t45 = (x181|(x182/(x183|x184)));

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = 754U;
	int32_t x186 = -27246660;
	int32_t x187 = 52219;
	static int64_t x188 = INT64_MIN;
	volatile int64_t t46 = 8271849017401328LL;

	t46 = (x185|(x186/(x187|x188)));

	if (t46 != 754LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = 621U;
	uint32_t x190 = UINT32_MAX;
	uint8_t x191 = 11U;
	volatile uint32_t t47 = 297U;

	t47 = (x189|(x190/(x191|x192)));

	if (t47 != 621U) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = 100U;
	int64_t x194 = INT64_MIN;
	static int8_t x195 = -1;
	uint64_t x196 = 13468357017462LLU;
	uint64_t t48 = 462984545473LLU;

	t48 = (x193|(x194/(x195|x196)));

	if (t48 != 100LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x197 = INT64_MIN;
	int8_t x198 = INT8_MIN;
	volatile int64_t x199 = INT64_MIN;
	uint8_t x200 = 19U;

	t49 = (x197|(x198/(x199|x200)));

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x201 = INT16_MIN;
	volatile uint16_t x202 = 911U;
	volatile int8_t x203 = INT8_MAX;
	volatile int32_t t50 = -4047293;

	t50 = (x201|(x202/(x203|x204)));

	if (t50 != -32768) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = UINT16_MAX;
	int8_t x207 = INT8_MAX;
	uint8_t x208 = 60U;
	static volatile int32_t t51 = -21646435;

	t51 = (x205|(x206/(x207|x208)));

	if (t51 != 65535) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x209 = INT64_MIN;
	uint32_t x210 = 385080754U;
	volatile uint32_t x211 = 3432210U;
	static volatile uint32_t x212 = UINT32_MAX;
	int64_t t52 = INT64_MIN;

	t52 = (x209|(x210/(x211|x212)));

	if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x214 = INT16_MAX;
	int64_t x215 = -17512LL;
	static volatile int16_t x216 = 1;
	int64_t t53 = 21406441LL;

	t53 = (x213|(x214/(x215|x216)));

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x218 = INT8_MIN;
	int32_t x220 = INT32_MIN;

	t54 = (x217|(x218/(x219|x220)));

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x221 = -1;
	volatile int16_t x222 = INT16_MIN;
	int64_t x223 = -169242LL;
	int16_t x224 = INT16_MAX;
	static int64_t t55 = 307749804LL;

	t55 = (x221|(x222/(x223|x224)));

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x225 = 2017U;
	static int16_t x226 = INT16_MAX;
	int8_t x227 = -1;
	static volatile int32_t x228 = INT32_MAX;

	t56 = (x225|(x226/(x227|x228)));

	if (t56 != 4294936545U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = INT8_MAX;
	static uint64_t x230 = UINT64_MAX;
	static int32_t x231 = 25;
	volatile uint64_t t57 = 1147670LLU;

	t57 = (x229|(x230/(x231|x232)));

	if (t57 != 595056260442243711LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x233 = -1LL;
	int64_t x234 = INT64_MAX;
	int32_t x235 = -1;
	static uint16_t x236 = 21016U;
	int64_t t58 = -8886497117649689LL;

	t58 = (x233|(x234/(x235|x236)));

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x238 = INT8_MIN;
	volatile uint8_t x239 = 5U;
	int64_t x240 = -1LL;
	int64_t t59 = -253954LL;

	t59 = (x237|(x238/(x239|x240)));

	if (t59 != 2147483647LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x243 = -1LL;
	volatile int32_t x244 = INT32_MAX;

	t60 = (x241|(x242/(x243|x244)));

	if (t60 != -28943LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x245 = 713U;
	uint16_t x246 = 35U;
	int32_t x247 = INT32_MIN;
	static uint8_t x248 = UINT8_MAX;
	uint32_t t61 = 137325U;

	t61 = (x245|(x246/(x247|x248)));

	if (t61 != 713U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = INT16_MAX;
	uint32_t x251 = 0U;

	t62 = (x249|(x250/(x251|x252)));

	if (t62 != 32767U) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x255 = 23455U;
	uint64_t t63 = 188LLU;

	t63 = (x253|(x254/(x255|x256)));

	if (t63 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x257 = INT32_MIN;
	volatile int64_t x258 = INT64_MAX;
	static volatile int64_t x260 = INT64_MIN;
	volatile uint64_t t64 = 52550696952595120LLU;

	t64 = (x257|(x258/(x259|x260)));

	if (t64 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = INT8_MIN;
	uint64_t x262 = UINT64_MAX;
	int8_t x263 = -1;
	int64_t x264 = 22561052174LL;
	uint64_t t65 = 53620486LLU;

	t65 = (x261|(x262/(x263|x264)));

	if (t65 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = 68520749463271LLU;
	int64_t x266 = -1LL;
	static int8_t x267 = INT8_MAX;
	int32_t x268 = INT32_MAX;
	static uint64_t t66 = 7839056LLU;

	t66 = (x265|(x266/(x267|x268)));

	if (t66 != 68520749463271LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x270 = INT32_MAX;
	volatile int8_t x271 = 0;
	int64_t x272 = -1LL;
	int64_t t67 = -355010LL;

	t67 = (x269|(x270/(x271|x272)));

	if (t67 != -2147483647LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = 47U;
	static int32_t t68 = -5;

	t68 = (x273|(x274/(x275|x276)));

	if (t68 != -13357969) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x277 = 188U;
	int32_t x279 = INT32_MAX;
	uint8_t x280 = 15U;

	t69 = (x277|(x278/(x279|x280)));

	if (t69 != 188) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x281 = UINT32_MAX;
	int64_t x282 = -1LL;
	int32_t x283 = INT32_MIN;
	static int64_t x284 = -351180745686359LL;

	t70 = (x281|(x282/(x283|x284)));

	if (t70 != 4294967295LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x285 = UINT8_MAX;
	int16_t x286 = 1165;
	volatile uint32_t x287 = UINT32_MAX;
	int8_t x288 = INT8_MIN;
	volatile uint32_t t71 = 62U;

	t71 = (x285|(x286/(x287|x288)));

	if (t71 != 255U) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x289 = 7477970821LLU;
	int64_t x292 = -3619478LL;
	volatile uint64_t t72 = 39193562376LLU;

	t72 = (x289|(x290/(x291|x292)));

	if (t72 != 7477970821LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = 476329792823LLU;
	int64_t x294 = -1LL;
	volatile int8_t x295 = INT8_MIN;
	int32_t x296 = INT32_MAX;
	uint64_t t73 = 26LLU;

	t73 = (x293|(x294/(x295|x296)));

	if (t73 != 476329792823LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = -1;
	volatile int64_t t74 = -112025202584LL;

	t74 = (x297|(x298/(x299|x300)));

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = -1;
	static int64_t x303 = INT64_MIN;
	uint8_t x304 = 17U;

	t75 = (x301|(x302/(x303|x304)));

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x306 = INT16_MIN;
	int32_t x307 = 0;
	static int64_t x308 = -1LL;

	t76 = (x305|(x306/(x307|x308)));

	if (t76 != -6LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = INT64_MIN;
	int32_t x311 = INT32_MAX;
	volatile int64_t t77 = INT64_MIN;

	t77 = (x309|(x310/(x311|x312)));

	if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x313 = INT8_MAX;
	static volatile int16_t x314 = -13;
	int16_t x315 = INT16_MIN;
	static int64_t x316 = -80893LL;
	volatile int64_t t78 = 57469576643LL;

	t78 = (x313|(x314/(x315|x316)));

	if (t78 != 127LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = INT64_MAX;
	int32_t x318 = 1088513;
	volatile int32_t x319 = INT32_MIN;
	uint32_t x320 = 1854670U;
	static volatile int64_t t79 = INT64_MAX;

	t79 = (x317|(x318/(x319|x320)));

	if (t79 != INT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = INT8_MIN;
	uint32_t x322 = 255U;
	uint32_t x323 = 359459U;
	static int16_t x324 = INT16_MAX;

	t80 = (x321|(x322/(x323|x324)));

	if (t80 != 4294967168U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x327 = INT8_MIN;
	volatile uint32_t x328 = 1312484103U;
	uint32_t t81 = 2229U;

	t81 = (x325|(x326/(x327|x328)));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int64_t x329 = INT64_MIN;
	static uint16_t x330 = 1U;
	uint16_t x331 = 27U;
	volatile int16_t x332 = INT16_MIN;
	volatile int64_t t82 = INT64_MIN;

	t82 = (x329|(x330/(x331|x332)));

	if (t82 != INT64_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x335 = UINT8_MAX;
	uint32_t x336 = UINT32_MAX;
	volatile int64_t t83 = -1328093257003096LL;

	t83 = (x333|(x334/(x335|x336)));

	if (t83 != 56829103LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = -54;
	uint16_t x339 = UINT16_MAX;
	volatile int64_t t84 = 8235876580503179LL;

	t84 = (x337|(x338/(x339|x340)));

	if (t84 != -54LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = -1;
	int8_t x343 = INT8_MIN;

	t85 = (x341|(x342/(x343|x344)));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = 20U;
	volatile uint8_t x346 = UINT8_MAX;
	int32_t x348 = INT32_MIN;
	static int64_t t86 = -9021320374016LL;

	t86 = (x345|(x346/(x347|x348)));

	if (t86 != -2LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = INT32_MIN;
	int16_t x350 = -4218;
	int64_t x351 = -1LL;
	uint16_t x352 = 20U;
	int64_t t87 = 11747847LL;

	t87 = (x349|(x350/(x351|x352)));

	if (t87 != -2147479430LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x359 = INT32_MIN;
	static int8_t x360 = -1;
	volatile uint64_t t88 = UINT64_MAX;

	t88 = (x357|(x358/(x359|x360)));

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x361 = INT8_MIN;
	static uint64_t x362 = UINT64_MAX;
	int8_t x363 = 0;
	int64_t x364 = -1LL;

	t89 = (x361|(x362/(x363|x364)));

	if (t89 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x365 = -1;
	int64_t x367 = INT64_MAX;
	uint64_t x368 = 30159969145686LLU;
	volatile uint64_t t90 = UINT64_MAX;

	t90 = (x365|(x366/(x367|x368)));

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x369 = 12969618U;
	int8_t x370 = -31;
	uint64_t x372 = UINT64_MAX;
	static volatile uint64_t t91 = 286LLU;

	t91 = (x369|(x370/(x371|x372)));

	if (t91 != 12969618LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x373 = INT64_MIN;
	static int32_t x374 = 102842844;
	static int64_t t92 = 34929968963547LL;

	t92 = (x373|(x374/(x375|x376)));

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x378 = 192957LLU;
	int32_t x379 = INT32_MAX;
	uint8_t x380 = 18U;
	volatile uint64_t t93 = 11368016863433584LLU;

	t93 = (x377|(x378/(x379|x380)));

	if (t93 != 332415LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x381 = INT64_MIN;
	int8_t x382 = 1;
	volatile uint32_t x383 = 4U;
	uint8_t x384 = 0U;
	static volatile int64_t t94 = INT64_MIN;

	t94 = (x381|(x382/(x383|x384)));

	if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x385 = INT16_MAX;
	int32_t x386 = INT32_MIN;
	static uint64_t x387 = 1504573LLU;
	volatile int64_t x388 = -177LL;
	uint64_t t95 = 6384036456935653LLU;

	t95 = (x385|(x386/(x387|x388)));

	if (t95 != 32767LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x389 = -12;
	volatile uint64_t x390 = UINT64_MAX;
	int8_t x392 = INT8_MIN;
	uint64_t t96 = UINT64_MAX;

	t96 = (x389|(x390/(x391|x392)));

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x394 = INT16_MIN;
	uint64_t x395 = UINT64_MAX;
	volatile uint64_t t97 = 1LLU;

	t97 = (x393|(x394/(x395|x396)));

	if (t97 != 42905LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x397 = INT64_MAX;
	volatile int16_t x398 = 1386;
	uint16_t x399 = 40U;
	static int64_t x400 = 1LL;
	int64_t t98 = INT64_MAX;

	t98 = (x397|(x398/(x399|x400)));

	if (t98 != INT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x401 = 213;
	uint8_t x402 = 26U;
	static int16_t x403 = INT16_MIN;
	static volatile int64_t t99 = -6LL;

	t99 = (x401|(x402/(x403|x404)));

	if (t99 != 213LL) { NG(); } else { ; }
	
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

