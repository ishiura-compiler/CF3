#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x1 = 950940126U;
int32_t x11 = INT32_MIN;
int32_t x18 = INT32_MIN;
volatile uint32_t t4 = 14923010U;
static int16_t x38 = INT16_MIN;
volatile int8_t x46 = 28;
int64_t t9 = -431LL;
uint64_t x50 = UINT64_MAX;
static int32_t x52 = INT32_MIN;
int64_t x57 = INT64_MIN;
volatile uint32_t t13 = 212894343U;
static volatile int16_t x72 = -1;
volatile int32_t t14 = -101;
int16_t x73 = INT16_MAX;
int16_t x75 = INT16_MIN;
static int16_t x76 = -4103;
uint8_t x86 = 68U;
int8_t x94 = INT8_MIN;
int32_t t18 = 28096;
uint8_t x97 = 9U;
volatile int16_t x108 = INT16_MAX;
volatile uint16_t x110 = 1U;
volatile int64_t t23 = 2158132697600809146LL;
int16_t x126 = -1877;
volatile uint8_t x131 = UINT8_MAX;
static int32_t x133 = -1;
uint32_t x135 = 4705605U;
volatile uint64_t t26 = 2207110594223552LLU;
uint64_t x137 = 12685418601804LLU;
uint64_t x138 = 751999119491260LLU;
int8_t x139 = 9;
volatile uint64_t t27 = 1LLU;
static int8_t x144 = INT8_MIN;
static volatile int32_t t28 = -3102710;
int8_t x149 = INT8_MAX;
int32_t x152 = -1;
int16_t x154 = INT16_MIN;
uint16_t x155 = 0U;
int32_t x160 = INT32_MIN;
volatile int64_t t32 = -2002LL;
uint8_t x161 = 19U;
int16_t x162 = INT16_MIN;
int8_t x174 = INT8_MIN;
uint32_t x180 = UINT32_MAX;
uint64_t x190 = 186789172LLU;
volatile int64_t x199 = 1LL;
uint64_t t42 = 987266237532420LLU;
int16_t x203 = INT16_MAX;
uint16_t x209 = UINT16_MAX;
uint64_t x210 = 7951898357299LLU;
int16_t x211 = -15;
int32_t x215 = 6418;
static int8_t x216 = -25;
uint32_t t46 = 423U;
uint16_t x219 = UINT16_MAX;
uint16_t x234 = UINT16_MAX;
static int64_t t51 = 223942481801LL;
int8_t x239 = -2;
static uint32_t x240 = UINT32_MAX;
volatile int32_t x259 = INT32_MIN;
int64_t x266 = INT64_MAX;
volatile int64_t t56 = -3218825708130367874LL;
volatile int16_t x282 = INT16_MIN;
uint64_t x286 = 11277LLU;
int16_t x296 = INT16_MIN;
static int16_t x298 = INT16_MIN;
int64_t x299 = -5433968027LL;
volatile int64_t t63 = 3819LL;
volatile int16_t x311 = -8654;
volatile uint32_t t67 = 76644U;
volatile uint8_t x326 = UINT8_MAX;
volatile int16_t x328 = 165;
uint64_t t69 = 11LLU;
uint8_t x344 = 1U;
int16_t x346 = INT16_MIN;
uint64_t x347 = UINT64_MAX;
static int64_t x356 = INT64_MIN;
volatile uint32_t x363 = UINT32_MAX;
volatile int32_t t77 = 46360014;
volatile uint64_t t78 = 566236400471799378LLU;
int64_t x373 = INT64_MIN;
int32_t x377 = -1;
uint16_t x380 = 536U;
int32_t t80 = 2403;
int64_t x381 = INT64_MAX;
volatile uint16_t x391 = 85U;
volatile int32_t t86 = 233;
int32_t x415 = INT32_MAX;
uint32_t t87 = 109U;
int64_t x418 = 463625474263LL;
static int64_t x421 = INT64_MIN;
int64_t t89 = -17069893404LL;
static int8_t x426 = INT8_MAX;
int16_t x430 = INT16_MIN;
uint32_t t94 = 510U;
int16_t x445 = -1;
int32_t x451 = INT32_MIN;
static int32_t t97 = 451632543;
int64_t x461 = 2690422015522LL;


void f0(void) {
	int8_t x2 = -1;
	uint64_t x3 = UINT64_MAX;
	uint32_t x4 = 6869676U;
	static volatile uint32_t t0 = 1U;

	t0 = (x1%(x2+(x3<x4)));

	if (t0 != 950940126U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = INT64_MIN;
	int64_t x10 = -2177646699826LL;
	static int32_t x12 = -1;
	int64_t t1 = -869763294LL;

	t1 = (x9%(x10+(x11<x12)));

	if (t1 != -1703266784108LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x13 = 15U;
	static volatile int16_t x14 = -33;
	volatile int16_t x15 = 48;
	int64_t x16 = -1LL;
	volatile int32_t t2 = 1824;

	t2 = (x13%(x14+(x15<x16)));

	if (t2 != 15) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x17 = 6;
	uint16_t x19 = 457U;
	int16_t x20 = -1557;
	volatile int32_t t3 = -29224;

	t3 = (x17%(x18+(x19<x20)));

	if (t3 != 6) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x25 = 9U;
	uint32_t x26 = 89U;
	uint8_t x27 = 92U;
	volatile uint32_t x28 = 0U;

	t4 = (x25%(x26+(x27<x28)));

	if (t4 != 9U) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x29 = 2U;
	int16_t x30 = INT16_MAX;
	int8_t x31 = INT8_MIN;
	int64_t x32 = INT64_MIN;
	int32_t t5 = -35035658;

	t5 = (x29%(x30+(x31<x32)));

	if (t5 != 2) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x33 = INT64_MIN;
	uint16_t x34 = 3353U;
	uint32_t x35 = 9041U;
	uint32_t x36 = UINT32_MAX;
	int64_t t6 = 333574919794440LL;

	t6 = (x33%(x34+(x35<x36)));

	if (t6 != -2192LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x37 = 15;
	volatile int8_t x39 = INT8_MIN;
	static uint16_t x40 = 0U;
	volatile int32_t t7 = 28;

	t7 = (x37%(x38+(x39<x40)));

	if (t7 != 15) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x41 = -1LL;
	int64_t x42 = INT64_MIN;
	int16_t x43 = INT16_MAX;
	int8_t x44 = INT8_MAX;
	volatile int64_t t8 = 2940LL;

	t8 = (x41%(x42+(x43<x44)));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x45 = INT64_MIN;
	int8_t x47 = -1;
	int32_t x48 = INT32_MIN;

	t9 = (x45%(x46+(x47<x48)));

	if (t9 != -8LL) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int64_t x49 = INT64_MAX;
	uint16_t x51 = 3U;
	volatile uint64_t t10 = 6744075699022LLU;

	t10 = (x49%(x50+(x51<x52)));

	if (t10 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x53 = -1;
	volatile uint8_t x54 = 1U;
	int32_t x55 = -2027;
	volatile int64_t x56 = INT64_MIN;
	int32_t t11 = -3780487;

	t11 = (x53%(x54+(x55<x56)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x58 = 4;
	int64_t x59 = 1LL;
	int32_t x60 = INT32_MIN;
	int64_t t12 = -36190765642LL;

	t12 = (x57%(x58+(x59<x60)));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x61 = -1;
	static uint32_t x62 = 34U;
	int64_t x63 = -21190LL;
	uint64_t x64 = 1015008685483LLU;

	t13 = (x61%(x62+(x63<x64)));

	if (t13 != 17U) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x69 = UINT8_MAX;
	volatile uint16_t x70 = 41U;
	uint8_t x71 = 4U;

	t14 = (x69%(x70+(x71<x72)));

	if (t14 != 9) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x74 = -18;
	int32_t t15 = -5636;

	t15 = (x73%(x74+(x75<x76)));

	if (t15 != 8) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x85 = 0U;
	int8_t x87 = 5;
	int8_t x88 = -1;
	int32_t t16 = -2267961;

	t16 = (x85%(x86+(x87<x88)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x89 = INT64_MIN;
	static int16_t x90 = INT16_MIN;
	volatile int16_t x91 = 3185;
	int32_t x92 = INT32_MIN;
	volatile int64_t t17 = 2117401702018930LL;

	t17 = (x89%(x90+(x91<x92)));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int32_t x93 = INT32_MIN;
	int64_t x95 = INT64_MAX;
	static int8_t x96 = INT8_MIN;

	t18 = (x93%(x94+(x95<x96)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x98 = INT8_MAX;
	uint32_t x99 = UINT32_MAX;
	static uint8_t x100 = UINT8_MAX;
	volatile int32_t t19 = 12;

	t19 = (x97%(x98+(x99<x100)));

	if (t19 != 9) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x101 = -1LL;
	uint32_t x102 = 16794998U;
	static uint64_t x103 = 7945451919LLU;
	static int32_t x104 = -3554005;
	int64_t t20 = -4773300LL;

	t20 = (x101%(x102+(x103<x104)));

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x105 = 0;
	uint8_t x106 = 61U;
	volatile uint8_t x107 = UINT8_MAX;
	volatile int32_t t21 = 48823859;

	t21 = (x105%(x106+(x107<x108)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x109 = 113968U;
	uint32_t x111 = 3719691U;
	static uint8_t x112 = 1U;
	uint32_t t22 = 257492U;

	t22 = (x109%(x110+(x111<x112)));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x121 = INT64_MIN;
	int64_t x122 = -1LL;
	int64_t x123 = 82691LL;
	static int32_t x124 = INT32_MIN;

	t23 = (x121%(x122+(x123<x124)));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x125 = INT8_MIN;
	volatile uint16_t x127 = 3U;
	int64_t x128 = INT64_MAX;
	int32_t t24 = 1;

	t24 = (x125%(x126+(x127<x128)));

	if (t24 != -128) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x129 = UINT8_MAX;
	uint8_t x130 = 5U;
	volatile int8_t x132 = -1;
	volatile int32_t t25 = 23001932;

	t25 = (x129%(x130+(x131<x132)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x134 = UINT64_MAX;
	uint8_t x136 = 5U;

	t26 = (x133%(x134+(x135<x136)));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x140 = 2044107386689472333LLU;

	t27 = (x137%(x138+(x139<x140)));

	if (t27 != 12685418601804LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x141 = 2;
	int16_t x142 = INT16_MAX;
	int16_t x143 = INT16_MIN;

	t28 = (x141%(x142+(x143<x144)));

	if (t28 != 2) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x145 = INT8_MIN;
	int8_t x146 = -1;
	static uint16_t x147 = UINT16_MAX;
	volatile int32_t x148 = INT32_MIN;
	static volatile int32_t t29 = 1000;

	t29 = (x145%(x146+(x147<x148)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x150 = INT8_MIN;
	uint8_t x151 = 53U;
	int32_t t30 = 9003;

	t30 = (x149%(x150+(x151<x152)));

	if (t30 != 127) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x153 = 125U;
	uint32_t x156 = UINT32_MAX;
	volatile int32_t t31 = 118002725;

	t31 = (x153%(x154+(x155<x156)));

	if (t31 != 125) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x157 = UINT32_MAX;
	static volatile int64_t x158 = 8449432390701LL;
	int32_t x159 = INT32_MIN;

	t32 = (x157%(x158+(x159<x160)));

	if (t32 != 4294967295LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x163 = 31;
	volatile int64_t x164 = -3LL;
	volatile int32_t t33 = -19985;

	t33 = (x161%(x162+(x163<x164)));

	if (t33 != 19) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x165 = INT16_MIN;
	uint32_t x166 = 4893237U;
	uint32_t x167 = UINT32_MAX;
	static uint8_t x168 = UINT8_MAX;
	uint32_t t34 = 13459380U;

	t34 = (x165%(x166+(x167<x168)));

	if (t34 != 3565679U) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x169 = 3591U;
	uint8_t x170 = 0U;
	static uint32_t x171 = 1225332U;
	uint32_t x172 = 28772697U;
	int32_t t35 = 639870;

	t35 = (x169%(x170+(x171<x172)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x173 = INT64_MIN;
	uint16_t x175 = UINT16_MAX;
	volatile int64_t x176 = INT64_MIN;
	static volatile int64_t t36 = 31661047142576869LL;

	t36 = (x173%(x174+(x175<x176)));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x177 = INT16_MAX;
	uint32_t x178 = 22U;
	int32_t x179 = INT32_MIN;
	volatile uint32_t t37 = 39960U;

	t37 = (x177%(x178+(x179<x180)));

	if (t37 != 15U) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x181 = 5919386286671857LLU;
	int32_t x182 = 355;
	volatile int64_t x183 = 6LL;
	volatile int32_t x184 = 81;
	volatile uint64_t t38 = 123986714189809LLU;

	t38 = (x181%(x182+(x183<x184)));

	if (t38 != 345LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x185 = 436976U;
	static int16_t x186 = INT16_MIN;
	int64_t x187 = INT64_MAX;
	uint8_t x188 = UINT8_MAX;
	static volatile uint32_t t39 = 7U;

	t39 = (x185%(x186+(x187<x188)));

	if (t39 != 436976U) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x189 = 101LLU;
	int32_t x191 = INT32_MIN;
	int32_t x192 = INT32_MAX;
	uint64_t t40 = 0LLU;

	t40 = (x189%(x190+(x191<x192)));

	if (t40 != 101LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x193 = UINT8_MAX;
	volatile int32_t x194 = -1461;
	volatile uint32_t x195 = 15297U;
	int16_t x196 = -665;
	volatile int32_t t41 = -704314;

	t41 = (x193%(x194+(x195<x196)));

	if (t41 != 255) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x197 = 1048353431075046438LLU;
	static int8_t x198 = INT8_MAX;
	int8_t x200 = INT8_MAX;

	t42 = (x197%(x198+(x199<x200)));

	if (t42 != 38LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x201 = -7;
	uint8_t x202 = 1U;
	uint8_t x204 = 1U;
	static volatile int32_t t43 = 0;

	t43 = (x201%(x202+(x203<x204)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x205 = 13LLU;
	uint16_t x206 = 1800U;
	int64_t x207 = 14200564305072417LL;
	uint8_t x208 = 62U;
	volatile uint64_t t44 = 1648LLU;

	t44 = (x205%(x206+(x207<x208)));

	if (t44 != 13LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x212 = 208U;
	uint64_t t45 = 0LLU;

	t45 = (x209%(x210+(x211<x212)));

	if (t45 != 65535LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x213 = 23651U;
	uint16_t x214 = UINT16_MAX;

	t46 = (x213%(x214+(x215<x216)));

	if (t46 != 23651U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x217 = INT32_MIN;
	volatile int8_t x218 = 1;
	int64_t x220 = INT64_MIN;
	static volatile int32_t t47 = 0;

	t47 = (x217%(x218+(x219<x220)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x221 = INT8_MIN;
	int8_t x222 = INT8_MIN;
	uint8_t x223 = UINT8_MAX;
	int8_t x224 = -14;
	volatile int32_t t48 = -2;

	t48 = (x221%(x222+(x223<x224)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x225 = 103U;
	uint32_t x226 = 2011U;
	int32_t x227 = -146;
	static volatile int64_t x228 = INT64_MIN;
	uint32_t t49 = 270268U;

	t49 = (x225%(x226+(x227<x228)));

	if (t49 != 103U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x229 = -1;
	uint16_t x230 = 721U;
	volatile int8_t x231 = INT8_MIN;
	volatile int16_t x232 = -750;
	int32_t t50 = 223;

	t50 = (x229%(x230+(x231<x232)));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x233 = 182733087LL;
	volatile int64_t x235 = 1LL;
	int32_t x236 = 58;

	t51 = (x233%(x234+(x235<x236)));

	if (t51 != 18719LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x237 = INT32_MIN;
	int16_t x238 = INT16_MIN;
	volatile int32_t t52 = -15;

	t52 = (x237%(x238+(x239<x240)));

	if (t52 != -2) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x249 = INT16_MIN;
	volatile uint8_t x250 = 1U;
	uint32_t x251 = 31U;
	uint64_t x252 = UINT64_MAX;
	volatile int32_t t53 = 85001853;

	t53 = (x249%(x250+(x251<x252)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x253 = UINT8_MAX;
	int64_t x254 = INT64_MAX;
	static volatile int64_t x255 = INT64_MAX;
	uint16_t x256 = 1U;
	int64_t t54 = -11999557080LL;

	t54 = (x253%(x254+(x255<x256)));

	if (t54 != 255LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x257 = -1;
	uint32_t x258 = 3448622U;
	static int16_t x260 = -758;
	volatile uint32_t t55 = 3U;

	t55 = (x257%(x258+(x259<x260)));

	if (t55 != 1431660U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x265 = 17817U;
	uint8_t x267 = 1U;
	volatile int16_t x268 = INT16_MIN;

	t56 = (x265%(x266+(x267<x268)));

	if (t56 != 17817LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x269 = INT64_MIN;
	int64_t x270 = INT64_MIN;
	int32_t x271 = -1;
	uint32_t x272 = 354U;
	int64_t t57 = -440938468314636LL;

	t57 = (x269%(x270+(x271<x272)));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x273 = -1;
	uint32_t x274 = UINT32_MAX;
	static uint32_t x275 = 1622982902U;
	int64_t x276 = -1LL;
	volatile uint32_t t58 = 64887U;

	t58 = (x273%(x274+(x275<x276)));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x281 = UINT64_MAX;
	uint64_t x283 = 29726096628245393LLU;
	int8_t x284 = INT8_MAX;
	uint64_t t59 = 244096671119108027LLU;

	t59 = (x281%(x282+(x283<x284)));

	if (t59 != 32767LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x285 = INT8_MAX;
	volatile int8_t x287 = -1;
	volatile int32_t x288 = 23621948;
	volatile uint64_t t60 = 535952685545275890LLU;

	t60 = (x285%(x286+(x287<x288)));

	if (t60 != 127LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x289 = 1U;
	uint32_t x290 = 28U;
	static int64_t x291 = -5199144624LL;
	uint8_t x292 = 1U;
	volatile uint32_t t61 = 21U;

	t61 = (x289%(x290+(x291<x292)));

	if (t61 != 1U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x293 = 5924;
	volatile uint32_t x294 = 1816940294U;
	static volatile int64_t x295 = INT64_MAX;
	uint32_t t62 = 9058U;

	t62 = (x293%(x294+(x295<x296)));

	if (t62 != 5924U) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x297 = -1LL;
	uint16_t x300 = 1622U;

	t63 = (x297%(x298+(x299<x300)));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x309 = INT16_MIN;
	static uint8_t x310 = 0U;
	int64_t x312 = 3189822363740726LL;
	volatile int32_t t64 = 396965;

	t64 = (x309%(x310+(x311<x312)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x313 = UINT32_MAX;
	uint32_t x314 = 116565002U;
	volatile uint32_t x315 = 274677133U;
	int16_t x316 = -5319;
	volatile uint32_t t65 = 203805U;

	t65 = (x313%(x314+(x315<x316)));

	if (t65 != 98627187U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x317 = INT64_MIN;
	static volatile int8_t x318 = 26;
	int8_t x319 = INT8_MIN;
	int8_t x320 = -1;
	int64_t t66 = -3923286LL;

	t66 = (x317%(x318+(x319<x320)));

	if (t66 != -26LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x321 = -1;
	static uint32_t x322 = 430743U;
	int16_t x323 = INT16_MIN;
	int8_t x324 = INT8_MAX;

	t67 = (x321%(x322+(x323<x324)));

	if (t67 != 18871U) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x325 = 416311021U;
	int8_t x327 = INT8_MIN;
	uint32_t t68 = 2075U;

	t68 = (x325%(x326+(x327<x328)));

	if (t68 != 237U) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x329 = 2U;
	uint64_t x330 = 37969178507643LLU;
	uint16_t x331 = 4U;
	uint64_t x332 = 850691831LLU;

	t69 = (x329%(x330+(x331<x332)));

	if (t69 != 2LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x333 = 26U;
	volatile uint32_t x334 = 50U;
	static uint16_t x335 = UINT16_MAX;
	uint32_t x336 = 220670868U;
	volatile uint32_t t70 = 311264U;

	t70 = (x333%(x334+(x335<x336)));

	if (t70 != 26U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x341 = INT32_MIN;
	uint32_t x342 = 1202U;
	static int8_t x343 = -33;
	static uint32_t t71 = 6U;

	t71 = (x341%(x342+(x343<x344)));

	if (t71 != 1130U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x345 = -92;
	int64_t x348 = INT64_MIN;
	volatile int32_t t72 = -710216;

	t72 = (x345%(x346+(x347<x348)));

	if (t72 != -92) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x349 = 1982U;
	int8_t x350 = 9;
	int32_t x351 = -1;
	static int32_t x352 = INT32_MAX;
	static uint32_t t73 = 3U;

	t73 = (x349%(x350+(x351<x352)));

	if (t73 != 2U) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x353 = 5215LLU;
	static uint8_t x354 = 35U;
	int32_t x355 = INT32_MIN;
	uint64_t t74 = 1093443898983599545LLU;

	t74 = (x353%(x354+(x355<x356)));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x357 = -1;
	int16_t x358 = INT16_MAX;
	static int8_t x359 = 1;
	int16_t x360 = -6;
	int32_t t75 = -381532725;

	t75 = (x357%(x358+(x359<x360)));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x361 = INT16_MIN;
	int16_t x362 = INT16_MIN;
	uint8_t x364 = 44U;
	volatile int32_t t76 = -863639591;

	t76 = (x361%(x362+(x363<x364)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x365 = 30;
	int32_t x366 = -7676848;
	static uint16_t x367 = UINT16_MAX;
	static int64_t x368 = INT64_MIN;

	t77 = (x365%(x366+(x367<x368)));

	if (t77 != 30) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x369 = 3;
	uint64_t x370 = 97LLU;
	int16_t x371 = INT16_MIN;
	uint64_t x372 = 21822LLU;

	t78 = (x369%(x370+(x371<x372)));

	if (t78 != 3LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x374 = 35U;
	uint16_t x375 = 97U;
	volatile int32_t x376 = INT32_MIN;
	int64_t t79 = -5201867LL;

	t79 = (x373%(x374+(x375<x376)));

	if (t79 != -8LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x378 = 1U;
	int16_t x379 = INT16_MAX;

	t80 = (x377%(x378+(x379<x380)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x382 = 240315354LLU;
	static int32_t x383 = INT32_MIN;
	volatile uint64_t x384 = UINT64_MAX;
	volatile uint64_t t81 = 1LLU;

	t81 = (x381%(x382+(x383<x384)));

	if (t81 != 27212787LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x385 = UINT32_MAX;
	int16_t x386 = INT16_MIN;
	volatile uint8_t x387 = 0U;
	uint16_t x388 = 22U;
	uint32_t t82 = 463252646U;

	t82 = (x385%(x386+(x387<x388)));

	if (t82 != 32766U) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x389 = 14U;
	int8_t x390 = INT8_MIN;
	static uint64_t x392 = UINT64_MAX;
	volatile int32_t t83 = -10817;

	t83 = (x389%(x390+(x391<x392)));

	if (t83 != 14) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x393 = INT16_MIN;
	static volatile int32_t x394 = 23763;
	volatile int32_t x395 = -65255;
	int16_t x396 = INT16_MAX;
	int32_t t84 = -27;

	t84 = (x393%(x394+(x395<x396)));

	if (t84 != -9004) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x401 = INT8_MIN;
	volatile uint8_t x402 = UINT8_MAX;
	static int8_t x403 = INT8_MIN;
	volatile uint16_t x404 = UINT16_MAX;
	int32_t t85 = -160030833;

	t85 = (x401%(x402+(x403<x404)));

	if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x405 = INT32_MAX;
	int16_t x406 = INT16_MIN;
	int8_t x407 = INT8_MAX;
	volatile uint32_t x408 = 3983983U;

	t86 = (x405%(x406+(x407<x408)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x413 = 0U;
	static volatile int32_t x414 = 11;
	static uint32_t x416 = UINT32_MAX;

	t87 = (x413%(x414+(x415<x416)));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x417 = INT64_MAX;
	static int8_t x419 = -1;
	uint16_t x420 = 19U;
	int64_t t88 = -2390256235168166LL;

	t88 = (x417%(x418+(x419<x420)));

	if (t88 != 361090120111LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x422 = INT32_MAX;
	static int8_t x423 = INT8_MIN;
	static uint64_t x424 = 191996348455448LLU;

	t89 = (x421%(x422+(x423<x424)));

	if (t89 != -2LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x425 = 245175539009461LLU;
	int64_t x427 = 3663460493774028LL;
	static uint32_t x428 = 832290U;
	volatile uint64_t t90 = 164589LLU;

	t90 = (x425%(x426+(x427<x428)));

	if (t90 != 77LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x429 = -1;
	static int32_t x431 = 7;
	volatile int16_t x432 = -1;
	static int32_t t91 = -6979479;

	t91 = (x429%(x430+(x431<x432)));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x433 = 11;
	int16_t x434 = INT16_MIN;
	int8_t x435 = INT8_MIN;
	volatile uint16_t x436 = 13U;
	volatile int32_t t92 = 88;

	t92 = (x433%(x434+(x435<x436)));

	if (t92 != 11) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x437 = INT8_MIN;
	static uint8_t x438 = 2U;
	uint64_t x439 = UINT64_MAX;
	static uint64_t x440 = 627171813478LLU;
	static volatile int32_t t93 = -1639;

	t93 = (x437%(x438+(x439<x440)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x441 = 95U;
	uint32_t x442 = 32764701U;
	int16_t x443 = INT16_MIN;
	int16_t x444 = INT16_MAX;

	t94 = (x441%(x442+(x443<x444)));

	if (t94 != 95U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x446 = 7617008280773LL;
	static int8_t x447 = -1;
	int64_t x448 = INT64_MIN;
	int64_t t95 = 311323900570LL;

	t95 = (x445%(x446+(x447<x448)));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x449 = 0;
	int64_t x450 = INT64_MIN;
	volatile uint32_t x452 = 6076050U;
	int64_t t96 = -41LL;

	t96 = (x449%(x450+(x451<x452)));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x453 = UINT8_MAX;
	static int16_t x454 = 1182;
	static int32_t x455 = INT32_MIN;
	int8_t x456 = -1;

	t97 = (x453%(x454+(x455<x456)));

	if (t97 != 255) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x457 = 144926140LLU;
	int64_t x458 = 4579658LL;
	static volatile uint16_t x459 = 49U;
	int32_t x460 = -1;
	volatile uint64_t t98 = 380840075LLU;

	t98 = (x457%(x458+(x459<x460)));

	if (t98 != 2956742LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x462 = 91U;
	volatile uint8_t x463 = UINT8_MAX;
	volatile uint64_t x464 = 1003296412963047LLU;
	volatile int64_t t99 = 25LL;

	t99 = (x461%(x462+(x463<x464)));

	if (t99 != 2LL) { NG(); } else { ; }
	
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

