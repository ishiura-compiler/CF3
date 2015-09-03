#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x1 = INT16_MAX;
volatile uint8_t x4 = 1U;
int32_t x6 = -1;
uint8_t x12 = UINT8_MAX;
static int32_t x18 = INT32_MAX;
int8_t x20 = INT8_MAX;
volatile int64_t t5 = -510465106184634917LL;
int32_t t6 = 19479641;
static int32_t x34 = INT32_MIN;
volatile int8_t x35 = -1;
int32_t x39 = -1010;
int32_t x46 = INT32_MIN;
int32_t t11 = -1;
int16_t x51 = INT16_MAX;
int64_t t12 = 209797077LL;
static uint32_t t15 = 7415740U;
int64_t x69 = 0LL;
static volatile int32_t t17 = -46363270;
static uint16_t x77 = UINT16_MAX;
int64_t x78 = -1430LL;
volatile int32_t x81 = -1;
static int32_t t21 = 1;
int16_t x93 = INT16_MIN;
static int16_t x95 = -115;
static uint64_t x99 = 4191904LLU;
int16_t x100 = INT16_MIN;
uint32_t x105 = UINT32_MAX;
uint64_t x107 = 42LLU;
volatile uint32_t x114 = 113U;
int32_t x123 = INT32_MIN;
int32_t x124 = INT32_MAX;
int32_t t30 = 506090086;
uint8_t x129 = UINT8_MAX;
int32_t x132 = INT32_MIN;
volatile uint64_t x134 = 3440853416775788148LLU;
int32_t t33 = -55;
int64_t x139 = -2084LL;
int16_t x146 = INT16_MAX;
uint32_t x148 = UINT32_MAX;
int32_t t37 = -2794;
static uint16_t x154 = 2U;
int8_t x159 = -3;
int64_t t40 = 376LL;
uint16_t x174 = UINT16_MAX;
volatile uint16_t x183 = 113U;
int64_t x186 = 227306669757274LL;
int32_t x187 = -1;
int8_t x191 = 7;
int8_t x193 = -1;
int32_t x194 = -45564;
int64_t x195 = 502154013607223LL;
int64_t t48 = -344699LL;
uint32_t x198 = 3339U;
uint64_t x206 = UINT64_MAX;
volatile uint64_t x207 = 2760172878LLU;
volatile int64_t x210 = INT64_MIN;
uint64_t x213 = 536192LLU;
static uint8_t x218 = UINT8_MAX;
int8_t x219 = 26;
static int64_t x224 = INT64_MIN;
volatile int64_t t55 = -2043788906080697LL;
int16_t x227 = INT16_MIN;
int16_t x228 = INT16_MIN;
static int64_t x230 = INT64_MIN;
int16_t x233 = INT16_MAX;
static int8_t x236 = -1;
static int64_t t60 = 0LL;
int8_t x245 = 22;
int8_t x246 = INT8_MIN;
volatile int8_t x252 = INT8_MIN;
static int32_t x253 = INT32_MIN;
int32_t x255 = INT32_MIN;
int32_t t63 = -34482;
static int64_t x263 = -247626562458043254LL;
static int8_t x265 = INT8_MIN;
int32_t x267 = INT32_MIN;
volatile int32_t x269 = -11;
volatile int32_t x270 = INT32_MAX;
static int8_t x271 = -1;
volatile int32_t t67 = 61312018;
int8_t x280 = INT8_MAX;
volatile int16_t x286 = INT16_MIN;
int16_t x288 = 460;
int32_t x295 = INT32_MIN;
int32_t t77 = 300035863;
int64_t x315 = -253866624940644LL;
int32_t x316 = INT32_MIN;
int8_t x323 = INT8_MIN;
volatile uint64_t t80 = 6307512739624LLU;
volatile int8_t x325 = -2;
uint64_t t84 = 411LLU;
int64_t x341 = INT64_MIN;
int64_t x346 = -17819LL;
int32_t x347 = 7443;
int32_t x349 = INT32_MIN;
uint16_t x350 = 0U;
int64_t x352 = -1LL;
int64_t x354 = INT64_MIN;
int16_t x356 = INT16_MIN;
uint32_t x358 = UINT32_MAX;
volatile int32_t x366 = -27851;
uint16_t x368 = UINT16_MAX;
static volatile int32_t t91 = 1153465;
uint32_t x375 = 412U;
static uint8_t x383 = UINT8_MAX;
volatile int32_t t95 = -5623;
int16_t x388 = INT16_MIN;
static volatile int8_t x389 = INT8_MIN;
volatile int16_t x391 = INT16_MIN;
int16_t x394 = -1;
int64_t x396 = INT64_MAX;
int64_t t99 = 3937851697LL;


void f0(void) {
	volatile int16_t x2 = 3;
	static int8_t x3 = INT8_MIN;
	static volatile int32_t t0 = 275781724;

	t0 = ((x1==x2)&(x3^x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x5 = UINT64_MAX;
	int32_t x7 = INT32_MAX;
	static volatile uint32_t x8 = 657197U;
	static uint32_t t1 = 63U;

	t1 = ((x5==x6)&(x7^x8));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	uint64_t x10 = 1072935162LLU;
	int8_t x11 = 46;
	int32_t t2 = 65076;

	t2 = ((x9==x10)&(x11^x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x13 = 475U;
	int64_t x14 = -3567074056LL;
	int32_t x15 = -1;
	volatile uint64_t x16 = UINT64_MAX;
	volatile uint64_t t3 = 15617LLU;

	t3 = ((x13==x14)&(x15^x16));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 124848091786179520LLU;
	int64_t x19 = INT64_MIN;
	static int64_t t4 = -237LL;

	t4 = ((x17==x18)&(x19^x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	int64_t x22 = -1LL;
	int16_t x23 = INT16_MAX;
	volatile int64_t x24 = INT64_MIN;

	t5 = ((x21==x22)&(x23^x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = UINT64_MAX;
	volatile int8_t x26 = 18;
	int16_t x27 = -677;
	uint16_t x28 = 42U;

	t6 = ((x25==x26)&(x27^x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -580;
	int8_t x30 = 2;
	int64_t x31 = -441048499822176826LL;
	static uint16_t x32 = 1U;
	volatile int64_t t7 = 199019219568950072LL;

	t7 = ((x29==x30)&(x31^x32));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -1;
	int8_t x36 = INT8_MIN;
	int32_t t8 = -214154794;

	t8 = ((x33==x34)&(x35^x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x37 = INT8_MAX;
	uint16_t x38 = 217U;
	static int16_t x40 = 242;
	int32_t t9 = 1549736;

	t9 = ((x37==x38)&(x39^x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	int32_t x42 = INT32_MIN;
	uint16_t x43 = UINT16_MAX;
	int64_t x44 = 6995664925828640LL;
	int64_t t10 = 5843580903814337LL;

	t10 = ((x41==x42)&(x43^x44));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -1;
	int32_t x47 = -31578420;
	volatile uint8_t x48 = 29U;

	t11 = ((x45==x46)&(x47^x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = UINT16_MAX;
	static uint16_t x50 = 0U;
	int64_t x52 = -1LL;

	t12 = ((x49==x50)&(x51^x52));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = 670586667U;
	int32_t x54 = -61;
	uint32_t x55 = UINT32_MAX;
	int16_t x56 = INT16_MAX;
	uint32_t t13 = 40U;

	t13 = ((x53==x54)&(x55^x56));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 66U;
	static int32_t x58 = INT32_MIN;
	static int8_t x59 = INT8_MIN;
	int16_t x60 = INT16_MIN;
	static int32_t t14 = -248826286;

	t14 = ((x57==x58)&(x59^x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = 20;
	volatile uint64_t x62 = 2153LLU;
	volatile int32_t x63 = INT32_MIN;
	static uint32_t x64 = 25897U;

	t15 = ((x61==x62)&(x63^x64));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = 1330701778353129LLU;
	uint64_t x66 = UINT64_MAX;
	volatile int8_t x67 = -1;
	uint64_t x68 = 26415534048LLU;
	uint64_t t16 = 30343746159562695LLU;

	t16 = ((x65==x66)&(x67^x68));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x70 = -1;
	static int8_t x71 = -15;
	int16_t x72 = INT16_MAX;

	t17 = ((x69==x70)&(x71^x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x73 = INT32_MAX;
	int64_t x74 = -30491527LL;
	uint64_t x75 = 7673581LLU;
	static int16_t x76 = INT16_MIN;
	volatile uint64_t t18 = 4419261277074374970LLU;

	t18 = ((x73==x74)&(x75^x76));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x79 = 0;
	int8_t x80 = INT8_MIN;
	volatile int32_t t19 = 5136;

	t19 = ((x77==x78)&(x79^x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x82 = 3U;
	int8_t x83 = 5;
	static volatile int8_t x84 = -7;
	static volatile int32_t t20 = -6059;

	t20 = ((x81==x82)&(x83^x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = 237;
	int16_t x86 = INT16_MIN;
	int16_t x87 = 519;
	static volatile int32_t x88 = 984637304;

	t21 = ((x85==x86)&(x87^x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = UINT16_MAX;
	volatile int8_t x90 = INT8_MIN;
	uint16_t x91 = 11224U;
	uint16_t x92 = 11U;
	volatile int32_t t22 = 432;

	t22 = ((x89==x90)&(x91^x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x94 = 2LL;
	uint8_t x96 = 4U;
	static volatile int32_t t23 = -3735219;

	t23 = ((x93==x94)&(x95^x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = 243335029397038LLU;
	volatile int8_t x98 = -1;
	volatile uint64_t t24 = 620297LLU;

	t24 = ((x97==x98)&(x99^x100));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = 3;
	volatile uint32_t x102 = 93382U;
	int16_t x103 = INT16_MIN;
	volatile uint32_t x104 = UINT32_MAX;
	volatile uint32_t t25 = 4388747U;

	t25 = ((x101==x102)&(x103^x104));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x106 = 2U;
	static volatile uint32_t x108 = UINT32_MAX;
	static uint64_t t26 = 2937816318304493646LLU;

	t26 = ((x105==x106)&(x107^x108));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x109 = 8953006411754742LL;
	static int8_t x110 = INT8_MIN;
	volatile uint64_t x111 = 2262101859555691144LLU;
	int32_t x112 = -688178;
	static uint64_t t27 = 5LLU;

	t27 = ((x109==x110)&(x111^x112));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = -23;
	int32_t x115 = INT32_MIN;
	int32_t x116 = INT32_MIN;
	volatile int32_t t28 = -57333;

	t28 = ((x113==x114)&(x115^x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = 57U;
	static volatile uint8_t x118 = 0U;
	uint64_t x119 = 168940634230020539LLU;
	static uint32_t x120 = 2704U;
	uint64_t t29 = 9LLU;

	t29 = ((x117==x118)&(x119^x120));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = -1;
	int32_t x122 = INT32_MIN;

	t30 = ((x121==x122)&(x123^x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x125 = INT16_MIN;
	int8_t x126 = -1;
	static int8_t x127 = INT8_MAX;
	int8_t x128 = INT8_MIN;
	static volatile int32_t t31 = 41480;

	t31 = ((x125==x126)&(x127^x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x130 = UINT8_MAX;
	int32_t x131 = INT32_MAX;
	volatile int32_t t32 = -424052;

	t32 = ((x129==x130)&(x131^x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x133 = UINT64_MAX;
	uint8_t x135 = UINT8_MAX;
	volatile int8_t x136 = -1;

	t33 = ((x133==x134)&(x135^x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x137 = -1;
	uint16_t x138 = 120U;
	static int64_t x140 = INT64_MIN;
	volatile int64_t t34 = 1314814226927274396LL;

	t34 = ((x137==x138)&(x139^x140));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x141 = 39LLU;
	volatile uint32_t x142 = UINT32_MAX;
	int16_t x143 = INT16_MIN;
	uint64_t x144 = 56360352100412941LLU;
	volatile uint64_t t35 = 57324951076986797LLU;

	t35 = ((x141==x142)&(x143^x144));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MIN;
	static uint64_t x147 = 7560533783LLU;
	static volatile uint64_t t36 = 214339813LLU;

	t36 = ((x145==x146)&(x147^x148));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MIN;
	int8_t x150 = INT8_MIN;
	uint8_t x151 = 31U;
	int32_t x152 = INT32_MIN;

	t37 = ((x149==x150)&(x151^x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MIN;
	volatile int32_t x155 = 3;
	int8_t x156 = INT8_MAX;
	volatile int32_t t38 = -324462;

	t38 = ((x153==x154)&(x155^x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x157 = INT8_MAX;
	volatile int64_t x158 = INT64_MIN;
	int64_t x160 = INT64_MAX;
	int64_t t39 = 9447271050899070LL;

	t39 = ((x157==x158)&(x159^x160));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = 7U;
	volatile int8_t x162 = INT8_MIN;
	int64_t x163 = INT64_MAX;
	volatile int16_t x164 = -121;

	t40 = ((x161==x162)&(x163^x164));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = INT8_MIN;
	int32_t x166 = INT32_MIN;
	static int32_t x167 = INT32_MAX;
	int16_t x168 = INT16_MIN;
	int32_t t41 = -582;

	t41 = ((x165==x166)&(x167^x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MIN;
	int32_t x170 = 22284;
	int8_t x171 = INT8_MIN;
	int64_t x172 = INT64_MIN;
	volatile int64_t t42 = -18521LL;

	t42 = ((x169==x170)&(x171^x172));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = -488004215088LL;
	int16_t x175 = -1;
	uint32_t x176 = 602U;
	volatile uint32_t t43 = 17632U;

	t43 = ((x173==x174)&(x175^x176));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = 528496171LLU;
	int64_t x178 = INT64_MIN;
	volatile int8_t x179 = -1;
	uint64_t x180 = 61456LLU;
	volatile uint64_t t44 = 13438886655527460LLU;

	t44 = ((x177==x178)&(x179^x180));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x181 = -521331382941992LL;
	uint32_t x182 = UINT32_MAX;
	static int8_t x184 = INT8_MAX;
	volatile int32_t t45 = -2673;

	t45 = ((x181==x182)&(x183^x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MIN;
	uint16_t x188 = 64U;
	int32_t t46 = 716;

	t46 = ((x185==x186)&(x187^x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x189 = INT16_MIN;
	static int16_t x190 = INT16_MAX;
	uint64_t x192 = UINT64_MAX;
	volatile uint64_t t47 = 6782787256788359858LLU;

	t47 = ((x189==x190)&(x191^x192));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x196 = INT16_MIN;

	t48 = ((x193==x194)&(x195^x196));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x197 = 26U;
	int8_t x199 = 7;
	uint8_t x200 = UINT8_MAX;
	int32_t t49 = -3;

	t49 = ((x197==x198)&(x199^x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x201 = INT16_MIN;
	static uint64_t x202 = 19072160098LLU;
	static volatile uint8_t x203 = 5U;
	int32_t x204 = -1245812;
	int32_t t50 = 5;

	t50 = ((x201==x202)&(x203^x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x205 = 59;
	int16_t x208 = INT16_MAX;
	volatile uint64_t t51 = 99643504LLU;

	t51 = ((x205==x206)&(x207^x208));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = INT16_MIN;
	volatile uint64_t x211 = UINT64_MAX;
	int64_t x212 = INT64_MAX;
	static uint64_t t52 = 8527083595125555349LLU;

	t52 = ((x209==x210)&(x211^x212));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x214 = 1;
	static uint16_t x215 = 14U;
	int32_t x216 = 1013;
	int32_t t53 = 0;

	t53 = ((x213==x214)&(x215^x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = -11;
	volatile int64_t x220 = INT64_MIN;
	volatile int64_t t54 = 22484550210125LL;

	t54 = ((x217==x218)&(x219^x220));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x221 = UINT8_MAX;
	uint8_t x222 = UINT8_MAX;
	int8_t x223 = INT8_MAX;

	t55 = ((x221==x222)&(x223^x224));

	if (t55 != 1LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x225 = INT16_MAX;
	uint32_t x226 = 10347U;
	volatile int32_t t56 = 12147131;

	t56 = ((x225==x226)&(x227^x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x229 = UINT16_MAX;
	int64_t x231 = -4439603LL;
	volatile int32_t x232 = -1;
	int64_t t57 = -19790424LL;

	t57 = ((x229==x230)&(x231^x232));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x234 = 648;
	uint64_t x235 = 439LLU;
	uint64_t t58 = 44LLU;

	t58 = ((x233==x234)&(x235^x236));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MIN;
	uint32_t x238 = 45424U;
	uint32_t x239 = UINT32_MAX;
	int16_t x240 = 3;
	volatile uint32_t t59 = 1674337483U;

	t59 = ((x237==x238)&(x239^x240));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x241 = 14174U;
	uint64_t x242 = 322551606068353LLU;
	int64_t x243 = -9268LL;
	int8_t x244 = INT8_MIN;

	t60 = ((x241==x242)&(x243^x244));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x247 = -509984429858270LL;
	uint64_t x248 = 470839797LLU;
	uint64_t t61 = 843633025168653532LLU;

	t61 = ((x245==x246)&(x247^x248));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x249 = UINT64_MAX;
	int64_t x250 = 49888LL;
	int16_t x251 = -1721;
	int32_t t62 = 59689;

	t62 = ((x249==x250)&(x251^x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x254 = UINT64_MAX;
	uint16_t x256 = 1U;

	t63 = ((x253==x254)&(x255^x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x257 = 24U;
	int32_t x258 = -1;
	int8_t x259 = -1;
	uint8_t x260 = 19U;
	int32_t t64 = -213490783;

	t64 = ((x257==x258)&(x259^x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x261 = 116U;
	volatile int32_t x262 = -1;
	int64_t x264 = INT64_MAX;
	volatile int64_t t65 = -767721443386440LL;

	t65 = ((x261==x262)&(x263^x264));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x266 = -23;
	static volatile uint8_t x268 = 54U;
	volatile int32_t t66 = 1918;

	t66 = ((x265==x266)&(x267^x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x272 = -1;

	t67 = ((x269==x270)&(x271^x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int32_t x273 = INT32_MIN;
	volatile int64_t x274 = INT64_MIN;
	int64_t x275 = -184186121872273LL;
	volatile uint16_t x276 = 3133U;
	volatile int64_t t68 = -330344003604LL;

	t68 = ((x273==x274)&(x275^x276));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x277 = 6143U;
	uint32_t x278 = 691902766U;
	uint16_t x279 = 6U;
	int32_t t69 = -54079534;

	t69 = ((x277==x278)&(x279^x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x281 = 3U;
	int32_t x282 = INT32_MAX;
	static uint64_t x283 = UINT64_MAX;
	int64_t x284 = -1LL;
	static volatile uint64_t t70 = 19LLU;

	t70 = ((x281==x282)&(x283^x284));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MAX;
	int8_t x287 = 4;
	static int32_t t71 = -2719770;

	t71 = ((x285==x286)&(x287^x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = 889;
	static uint32_t x290 = 7U;
	int32_t x291 = -764;
	uint64_t x292 = 2409LLU;
	uint64_t t72 = 58020718LLU;

	t72 = ((x289==x290)&(x291^x292));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = -1;
	int16_t x294 = INT16_MIN;
	int32_t x296 = INT32_MIN;
	static int32_t t73 = 34353;

	t73 = ((x293==x294)&(x295^x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x297 = 262;
	int64_t x298 = INT64_MAX;
	int64_t x299 = INT64_MAX;
	int16_t x300 = INT16_MIN;
	volatile int64_t t74 = 1196787LL;

	t74 = ((x297==x298)&(x299^x300));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MAX;
	int64_t x302 = INT64_MIN;
	static volatile int32_t x303 = -13692;
	volatile uint64_t x304 = UINT64_MAX;
	uint64_t t75 = 350601LLU;

	t75 = ((x301==x302)&(x303^x304));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = -1;
	int64_t x306 = INT64_MIN;
	int16_t x307 = 0;
	static uint8_t x308 = UINT8_MAX;
	static volatile int32_t t76 = 678;

	t76 = ((x305==x306)&(x307^x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = -2LL;
	static int64_t x310 = INT64_MIN;
	int32_t x311 = -164379644;
	volatile int32_t x312 = INT32_MIN;

	t77 = ((x309==x310)&(x311^x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x313 = -157;
	static int64_t x314 = 43LL;
	volatile int64_t t78 = 0LL;

	t78 = ((x313==x314)&(x315^x316));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = INT32_MIN;
	volatile uint8_t x318 = 49U;
	static int64_t x319 = INT64_MIN;
	int64_t x320 = INT64_MIN;
	volatile int64_t t79 = 617856295894429LL;

	t79 = ((x317==x318)&(x319^x320));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = -1;
	int16_t x322 = INT16_MAX;
	uint64_t x324 = 3691748596351LLU;

	t80 = ((x321==x322)&(x323^x324));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint16_t x326 = 620U;
	int16_t x327 = INT16_MIN;
	uint32_t x328 = UINT32_MAX;
	uint32_t t81 = 36229U;

	t81 = ((x325==x326)&(x327^x328));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = -1;
	volatile int16_t x330 = INT16_MAX;
	static int16_t x331 = INT16_MIN;
	volatile uint8_t x332 = 22U;
	volatile int32_t t82 = 1;

	t82 = ((x329==x330)&(x331^x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x333 = UINT16_MAX;
	uint8_t x334 = 0U;
	volatile uint8_t x335 = 1U;
	uint8_t x336 = 2U;
	static volatile int32_t t83 = 938807;

	t83 = ((x333==x334)&(x335^x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x337 = UINT8_MAX;
	int32_t x338 = INT32_MAX;
	uint64_t x339 = 38LLU;
	uint8_t x340 = 10U;

	t84 = ((x337==x338)&(x339^x340));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x342 = 1;
	volatile int32_t x343 = INT32_MAX;
	int8_t x344 = INT8_MIN;
	int32_t t85 = -23426129;

	t85 = ((x341==x342)&(x343^x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = INT8_MAX;
	int64_t x348 = 1LL;
	volatile int64_t t86 = 312882031LL;

	t86 = ((x345==x346)&(x347^x348));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x351 = -368167878;
	volatile int64_t t87 = -49631049LL;

	t87 = ((x349==x350)&(x351^x352));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint8_t x353 = 38U;
	uint8_t x355 = 11U;
	int32_t t88 = 18533754;

	t88 = ((x353==x354)&(x355^x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x357 = UINT16_MAX;
	uint8_t x359 = 12U;
	int32_t x360 = -1;
	int32_t t89 = 118502;

	t89 = ((x357==x358)&(x359^x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x361 = -1;
	int32_t x362 = -1;
	static uint32_t x363 = 12990692U;
	static int64_t x364 = 728712476LL;
	static volatile int64_t t90 = -82140715647LL;

	t90 = ((x361==x362)&(x363^x364));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = -3;
	int16_t x367 = INT16_MIN;

	t91 = ((x365==x366)&(x367^x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x369 = INT8_MAX;
	volatile int8_t x370 = -1;
	static int8_t x371 = INT8_MAX;
	volatile uint16_t x372 = 316U;
	volatile int32_t t92 = -415000;

	t92 = ((x369==x370)&(x371^x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x373 = 1147LLU;
	int64_t x374 = INT64_MAX;
	int16_t x376 = -1;
	volatile uint32_t t93 = 5412899U;

	t93 = ((x373==x374)&(x375^x376));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x377 = 0U;
	static volatile uint64_t x378 = UINT64_MAX;
	int32_t x379 = INT32_MIN;
	static volatile uint32_t x380 = 94501U;
	static volatile uint32_t t94 = 420028U;

	t94 = ((x377==x378)&(x379^x380));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = -1;
	static volatile int64_t x382 = -4381705282731LL;
	int32_t x384 = -1;

	t95 = ((x381==x382)&(x383^x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = INT8_MIN;
	int8_t x386 = INT8_MIN;
	volatile uint16_t x387 = 810U;
	volatile int32_t t96 = -3;

	t96 = ((x385==x386)&(x387^x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x390 = -1LL;
	int32_t x392 = -30765;
	int32_t t97 = 36;

	t97 = ((x389==x390)&(x391^x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = INT32_MIN;
	int16_t x395 = INT16_MIN;
	volatile int64_t t98 = -2124570554084248LL;

	t98 = ((x393==x394)&(x395^x396));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = 0U;
	uint64_t x398 = 3833392LLU;
	static uint16_t x399 = 126U;
	int64_t x400 = INT64_MIN;

	t99 = ((x397==x398)&(x399^x400));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

