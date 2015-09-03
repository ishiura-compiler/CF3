#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x2 = 0LLU;
static int8_t x4 = INT8_MAX;
int8_t x5 = INT8_MIN;
uint16_t x13 = UINT16_MAX;
uint32_t x32 = 1321U;
static uint64_t x34 = 333449617LLU;
int16_t x36 = INT16_MAX;
int32_t x38 = INT32_MAX;
volatile uint32_t x41 = UINT32_MAX;
static volatile uint64_t x43 = 298741574369843010LLU;
uint64_t t11 = 658285563845LLU;
int16_t x52 = INT16_MAX;
uint32_t t12 = 2386U;
static int8_t x57 = INT8_MIN;
int64_t x61 = -198643229431647498LL;
uint8_t x63 = UINT8_MAX;
static int16_t x73 = INT16_MAX;
int64_t x87 = -1LL;
int64_t x89 = INT64_MAX;
int16_t x100 = INT16_MIN;
static int8_t x104 = INT8_MAX;
volatile int64_t t23 = -19340214028LL;
uint8_t x108 = 119U;
uint8_t x127 = 1U;
int32_t x136 = -8;
volatile uint64_t t30 = 5842LLU;
uint16_t x146 = 9U;
static uint32_t t32 = 729739641U;
int16_t x170 = 21;
int32_t x179 = -1;
volatile uint8_t x186 = 0U;
volatile uint32_t t38 = 185342832U;
int8_t x193 = INT8_MIN;
int32_t x201 = INT32_MAX;
static int64_t x209 = -1LL;
int64_t x212 = -16678LL;
int32_t x225 = -393270275;
volatile int16_t x235 = INT16_MIN;
static int16_t x239 = -1;
volatile int64_t x243 = -218632085805LL;
int64_t t48 = 24322918808004900LL;
volatile uint32_t x261 = UINT32_MAX;
static volatile int16_t x277 = -1;
volatile uint16_t x281 = UINT16_MAX;
int32_t t57 = 113;
int8_t x286 = INT8_MAX;
volatile uint8_t x287 = UINT8_MAX;
volatile int64_t x300 = INT64_MAX;
static uint16_t x311 = 6U;
static volatile int32_t t65 = INT32_MAX;
static volatile int64_t x335 = -191LL;
volatile int8_t x339 = INT8_MIN;
int64_t x357 = 13684908880LL;
volatile int64_t t70 = 190084190LL;
volatile uint8_t x362 = 2U;
uint16_t x363 = 2U;
int64_t x365 = -2677LL;
static int32_t x375 = 2;
uint32_t x377 = UINT32_MAX;
int32_t x379 = INT32_MIN;
uint16_t x385 = UINT16_MAX;
uint8_t x391 = UINT8_MAX;
static uint8_t x418 = UINT8_MAX;
int64_t x423 = 1029611231749048882LL;
int8_t x427 = 1;
uint64_t x429 = UINT64_MAX;
static uint32_t t86 = 17U;
static volatile int64_t t87 = 379214536206281LL;
volatile uint64_t t88 = 1LLU;
int8_t x460 = INT8_MIN;
volatile int64_t t89 = -749827913717815LL;
volatile uint64_t x469 = 229005505912519LLU;
volatile int64_t x470 = 999971402LL;
int64_t t92 = 8094481603867275LL;
int16_t x483 = INT16_MAX;
static volatile uint32_t t94 = 250180U;
static uint64_t t96 = 181092085881928260LLU;
static uint64_t t98 = 12779LLU;
int64_t t99 = 13LL;


void f0(void) {
	int64_t x1 = INT64_MIN;
	volatile uint8_t x3 = 5U;
	volatile uint64_t t0 = 26LLU;

	t0 = ((x1^x2)|(x3*x4));

	if (t0 != 9223372036854776443LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x6 = 108800277683LLU;
	int16_t x7 = INT16_MIN;
	static int8_t x8 = 1;
	static volatile uint64_t t1 = 4405365116830907818LLU;

	t1 = ((x5^x6)|(x7*x8));

	if (t1 != 18446744073709519667LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint8_t x9 = 4U;
	volatile uint32_t x10 = 91U;
	uint32_t x11 = 0U;
	volatile int8_t x12 = 19;
	static uint32_t t2 = 768659121U;

	t2 = ((x9^x10)|(x11*x12));

	if (t2 != 95U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x14 = -100;
	uint64_t x15 = UINT64_MAX;
	int64_t x16 = INT64_MIN;
	volatile uint64_t t3 = 718570229LLU;

	t3 = ((x13^x14)|(x15*x16));

	if (t3 != 18446744073709486179LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = -2;
	volatile int64_t x18 = INT64_MIN;
	volatile uint64_t x19 = UINT64_MAX;
	static uint32_t x20 = 3319U;
	static uint64_t t4 = UINT64_MAX;

	t4 = ((x17^x18)|(x19*x20));

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = 180;
	static uint16_t x22 = 7316U;
	volatile int16_t x23 = INT16_MIN;
	int16_t x24 = INT16_MAX;
	int32_t t5 = -2449;

	t5 = ((x21^x22)|(x23*x24));

	if (t5 != -1073701856) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	static volatile int16_t x26 = INT16_MAX;
	volatile int16_t x27 = INT16_MIN;
	int8_t x28 = INT8_MIN;
	volatile int32_t t6 = 13155;

	t6 = ((x25^x26)|(x27*x28));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x29 = INT64_MIN;
	int64_t x30 = -11201266846177LL;
	volatile int64_t x31 = -1LL;
	int64_t t7 = 756554LL;

	t7 = ((x29^x30)|(x31*x32));

	if (t7 != -289LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	int8_t x35 = INT8_MIN;
	volatile uint64_t t8 = 80052LLU;

	t8 = ((x33^x34)|(x35*x36));

	if (t8 != 18446744073707456913LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MAX;
	int16_t x39 = INT16_MIN;
	int16_t x40 = INT16_MAX;
	int64_t t9 = -3899015761846483LL;

	t9 = ((x37^x38)|(x39*x40));

	if (t9 != -1073709056LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x42 = 7775865LL;
	int16_t x44 = INT16_MIN;
	volatile uint64_t t10 = 263790147391321439LLU;

	t10 = ((x41^x42)|(x43*x44));

	if (t10 != 6057194190022859142LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x45 = 28210888579LLU;
	uint8_t x46 = 67U;
	int8_t x47 = -1;
	int64_t x48 = 17183412413759984LL;

	t11 = ((x45^x46)|(x47*x48));

	if (t11 != 18429560663719280592LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 1627U;
	static int16_t x50 = 83;
	uint8_t x51 = 4U;

	t12 = ((x49^x50)|(x51*x52));

	if (t12 != 131068U) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x58 = UINT64_MAX;
	int16_t x59 = -6795;
	int8_t x60 = -1;
	volatile uint64_t t13 = 37048007920668476LLU;

	t13 = ((x57^x58)|(x59*x60));

	if (t13 != 6911LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x62 = 21040309082LLU;
	int16_t x64 = INT16_MIN;
	volatile uint64_t t14 = 86285LLU;

	t14 = ((x61^x62)|(x63*x64));

	if (t14 != 18446744073703887276LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x65 = -3;
	uint16_t x66 = 17184U;
	int32_t x67 = 3018;
	int16_t x68 = -1;
	static int32_t t15 = 944351955;

	t15 = ((x65^x66)|(x67*x68));

	if (t15 != -769) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x69 = 10U;
	int8_t x70 = 0;
	volatile uint8_t x71 = 1U;
	int32_t x72 = INT32_MIN;
	int32_t t16 = -5;

	t16 = ((x69^x70)|(x71*x72));

	if (t16 != -2147483638) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x74 = 347U;
	uint16_t x75 = 11168U;
	uint16_t x76 = UINT16_MAX;
	volatile uint32_t t17 = 232760455U;

	t17 = ((x73^x74)|(x75*x76));

	if (t17 != 731905764U) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x77 = 14LLU;
	int32_t x78 = 0;
	static volatile uint16_t x79 = UINT16_MAX;
	static int16_t x80 = INT16_MIN;
	uint64_t t18 = 1341064LLU;

	t18 = ((x77^x78)|(x79*x80));

	if (t18 != 18446744071562100750LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x81 = -6;
	volatile int8_t x82 = 1;
	int16_t x83 = INT16_MIN;
	uint16_t x84 = UINT16_MAX;
	volatile int32_t t19 = 14670;

	t19 = ((x81^x82)|(x83*x84));

	if (t19 != -5) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x85 = UINT8_MAX;
	volatile int8_t x86 = INT8_MAX;
	int8_t x88 = INT8_MIN;
	static volatile int64_t t20 = -522441750101599LL;

	t20 = ((x85^x86)|(x87*x88));

	if (t20 != 128LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x90 = 0;
	uint8_t x91 = 0U;
	int32_t x92 = INT32_MAX;
	volatile int64_t t21 = INT64_MAX;

	t21 = ((x89^x90)|(x91*x92));

	if (t21 != INT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x97 = 18LLU;
	static uint32_t x98 = UINT32_MAX;
	uint32_t x99 = 3U;
	static volatile uint64_t t22 = 243LLU;

	t22 = ((x97^x98)|(x99*x100));

	if (t22 != 4294967277LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x101 = -1LL;
	volatile int64_t x102 = INT64_MAX;
	int16_t x103 = INT16_MIN;

	t23 = ((x101^x102)|(x103*x104));

	if (t23 != -4161536LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x105 = -271;
	static uint32_t x106 = 1406468U;
	uint16_t x107 = 235U;
	volatile uint32_t t24 = 892U;

	t24 = ((x105^x106)|(x107*x108));

	if (t24 != 4293586429U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x113 = UINT16_MAX;
	uint64_t x114 = 154935661783LLU;
	static uint32_t x115 = 2795528U;
	int16_t x116 = INT16_MIN;
	volatile uint64_t t25 = 1966710539076511LLU;

	t25 = ((x113^x114)|(x115*x116));

	if (t25 != 157772835624LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x117 = INT64_MAX;
	static int8_t x118 = -1;
	int64_t x119 = -1LL;
	volatile uint16_t x120 = 7U;
	static int64_t t26 = -3066209116937LL;

	t26 = ((x117^x118)|(x119*x120));

	if (t26 != -7LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x125 = INT64_MAX;
	volatile int8_t x126 = -4;
	volatile int8_t x128 = INT8_MAX;
	volatile int64_t t27 = -5882LL;

	t27 = ((x125^x126)|(x127*x128));

	if (t27 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x129 = INT8_MIN;
	static int64_t x130 = -49490081410LL;
	static int16_t x131 = INT16_MAX;
	volatile uint64_t x132 = UINT64_MAX;
	static volatile uint64_t t28 = 924506893LLU;

	t28 = ((x129^x130)|(x131*x132));

	if (t28 != 18446744073709532927LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x133 = 0U;
	int32_t x134 = INT32_MAX;
	int32_t x135 = 239;
	volatile uint32_t t29 = UINT32_MAX;

	t29 = ((x133^x134)|(x135*x136));

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x137 = 286496483266LLU;
	volatile int16_t x138 = -1;
	static uint32_t x139 = UINT32_MAX;
	int32_t x140 = INT32_MAX;

	t30 = ((x137^x138)|(x139*x140));

	if (t30 != 18446743789360551997LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x141 = INT8_MIN;
	static uint8_t x142 = UINT8_MAX;
	uint64_t x143 = 21478238750541LLU;
	int64_t x144 = 24019792931122LL;
	volatile uint64_t t31 = 179784252466023441LLU;

	t31 = ((x141^x142)|(x143*x144));

	if (t31 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint8_t x145 = 39U;
	int8_t x147 = -2;
	uint32_t x148 = 85651444U;

	t32 = ((x145^x146)|(x147*x148));

	if (t32 != 4123664446U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x153 = INT16_MIN;
	uint16_t x154 = UINT16_MAX;
	int64_t x155 = INT64_MIN;
	uint64_t x156 = 58LLU;
	uint64_t t33 = 1360031508LLU;

	t33 = ((x153^x154)|(x155*x156));

	if (t33 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x157 = INT8_MIN;
	volatile int8_t x158 = -1;
	uint8_t x159 = 18U;
	uint32_t x160 = UINT32_MAX;
	uint32_t t34 = UINT32_MAX;

	t34 = ((x157^x158)|(x159*x160));

	if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x169 = -137536193LL;
	static uint8_t x171 = 96U;
	int16_t x172 = -60;
	volatile int64_t t35 = -4493301279LL;

	t35 = ((x169^x170)|(x171*x172));

	if (t35 != -598LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x173 = 2;
	static volatile int16_t x174 = -1;
	static int64_t x175 = INT64_MIN;
	volatile uint8_t x176 = 1U;
	int64_t t36 = 434LL;

	t36 = ((x173^x174)|(x175*x176));

	if (t36 != -3LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x177 = INT8_MAX;
	int32_t x178 = -1;
	volatile uint32_t x180 = 2618611U;
	uint32_t t37 = 4957087U;

	t37 = ((x177^x178)|(x179*x180));

	if (t37 != 4294967181U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x185 = INT8_MAX;
	uint32_t x187 = 23398U;
	volatile int32_t x188 = -139532;

	t38 = ((x185^x186)|(x187*x188));

	if (t38 != 1030197631U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x194 = INT16_MIN;
	static int32_t x195 = -2241;
	int16_t x196 = INT16_MIN;
	static int32_t t39 = 73673171;

	t39 = ((x193^x194)|(x195*x196));

	if (t39 != 73465728) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x202 = 411LLU;
	volatile int16_t x203 = INT16_MAX;
	int16_t x204 = -1827;
	static volatile uint64_t t40 = 705113356439036LLU;

	t40 = ((x201^x202)|(x203*x204));

	if (t40 != 18446744073709551463LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x210 = INT8_MIN;
	static int8_t x211 = INT8_MAX;
	volatile int64_t t41 = -12112597378LL;

	t41 = ((x209^x210)|(x211*x212));

	if (t41 != -2118017LL) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int32_t x213 = -1;
	static uint8_t x214 = 84U;
	volatile uint32_t x215 = 1926604292U;
	static int16_t x216 = -1;
	static volatile uint32_t t42 = UINT32_MAX;

	t42 = ((x213^x214)|(x215*x216));

	if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x217 = 610284195293LL;
	int32_t x218 = INT32_MIN;
	int8_t x219 = INT8_MIN;
	volatile uint8_t x220 = 1U;
	volatile int64_t t43 = -6392429LL;

	t43 = ((x217^x218)|(x219*x220));

	if (t43 != -35LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x226 = -1LL;
	volatile int16_t x227 = INT16_MIN;
	static int32_t x228 = 19;
	volatile int64_t t44 = 1521LL;

	t44 = ((x225^x226)|(x227*x228));

	if (t44 != -601086LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x229 = 1086039;
	uint8_t x230 = UINT8_MAX;
	static int16_t x231 = -1;
	int8_t x232 = INT8_MIN;
	volatile int32_t t45 = -158176085;

	t45 = ((x229^x230)|(x231*x232));

	if (t45 != 1086120) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x233 = -1;
	int64_t x234 = INT64_MAX;
	int16_t x236 = 6;
	int64_t t46 = -30693846129887376LL;

	t46 = ((x233^x234)|(x235*x236));

	if (t46 != -196608LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x237 = INT32_MAX;
	uint16_t x238 = 339U;
	static uint8_t x240 = 3U;
	static volatile int32_t t47 = -49;

	t47 = ((x237^x238)|(x239*x240));

	if (t47 != -3) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x241 = -63076695594LL;
	static volatile uint32_t x242 = UINT32_MAX;
	int16_t x244 = -1;

	t48 = ((x241^x242)|(x243*x244));

	if (t48 != -51808174291LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x249 = UINT16_MAX;
	volatile uint32_t x250 = 9U;
	int8_t x251 = -4;
	int32_t x252 = -179;
	volatile uint32_t t49 = 105U;

	t49 = ((x249^x250)|(x251*x252));

	if (t49 != 65534U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x253 = INT16_MIN;
	volatile int64_t x254 = -1LL;
	static uint8_t x255 = UINT8_MAX;
	static int32_t x256 = -1;
	int64_t t50 = 1LL;

	t50 = ((x253^x254)|(x255*x256));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint32_t x257 = 7477026U;
	int16_t x258 = 0;
	int8_t x259 = INT8_MIN;
	uint8_t x260 = 22U;
	volatile uint32_t t51 = 438663U;

	t51 = ((x257^x258)|(x259*x260));

	if (t51 != 4294965026U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x262 = INT64_MIN;
	uint8_t x263 = UINT8_MAX;
	int16_t x264 = -134;
	volatile int64_t t52 = -18805681536719283LL;

	t52 = ((x261^x262)|(x263*x264));

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x265 = INT64_MIN;
	volatile int8_t x266 = -1;
	volatile uint64_t x267 = 31035472939232405LLU;
	uint8_t x268 = 3U;
	volatile uint64_t t53 = 760944567507LLU;

	t53 = ((x265^x266)|(x267*x268));

	if (t53 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x269 = 6LLU;
	static uint32_t x270 = 12510749U;
	int8_t x271 = INT8_MIN;
	volatile int32_t x272 = 126664;
	volatile uint64_t t54 = 9848200120188LLU;

	t54 = ((x269^x270)|(x271*x272));

	if (t54 != 18446744073705291291LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x273 = -1LL;
	int64_t x274 = -1LL;
	uint8_t x275 = 1U;
	int64_t x276 = 1011LL;
	volatile int64_t t55 = -1602235156605513944LL;

	t55 = ((x273^x274)|(x275*x276));

	if (t55 != 1011LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x278 = INT16_MAX;
	volatile uint16_t x279 = UINT16_MAX;
	int8_t x280 = 26;
	int32_t t56 = -7022741;

	t56 = ((x277^x278)|(x279*x280));

	if (t56 != -26) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x282 = UINT16_MAX;
	static uint16_t x283 = 8U;
	uint16_t x284 = UINT16_MAX;

	t57 = ((x281^x282)|(x283*x284));

	if (t57 != 524280) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x285 = -54;
	int8_t x288 = -1;
	static volatile int32_t t58 = 218049618;

	t58 = ((x285^x286)|(x287*x288));

	if (t58 != -75) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x297 = 14LLU;
	int16_t x298 = INT16_MAX;
	int8_t x299 = -1;
	volatile uint64_t t59 = 3209LLU;

	t59 = ((x297^x298)|(x299*x300));

	if (t59 != 9223372036854808561LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x301 = INT8_MIN;
	int32_t x302 = -1;
	static volatile int8_t x303 = INT8_MAX;
	int8_t x304 = -1;
	volatile int32_t t60 = 4061;

	t60 = ((x301^x302)|(x303*x304));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x305 = -1;
	uint32_t x306 = UINT32_MAX;
	int64_t x307 = -126LL;
	int64_t x308 = -1LL;
	static volatile int64_t t61 = 54985716734LL;

	t61 = ((x305^x306)|(x307*x308));

	if (t61 != 126LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x309 = INT32_MAX;
	static int64_t x310 = INT64_MIN;
	uint64_t x312 = 417983393725LLU;
	volatile uint64_t t62 = 360066663980526323LLU;

	t62 = ((x309^x310)|(x311*x312));

	if (t62 != 9223374545115676671LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int16_t x313 = INT16_MIN;
	int16_t x314 = INT16_MAX;
	volatile int16_t x315 = INT16_MAX;
	int8_t x316 = INT8_MIN;
	int32_t t63 = 4033374;

	t63 = ((x313^x314)|(x315*x316));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x317 = INT16_MAX;
	int8_t x318 = INT8_MIN;
	uint16_t x319 = UINT16_MAX;
	uint64_t x320 = UINT64_MAX;
	uint64_t t64 = 6935420977228LLU;

	t64 = ((x317^x318)|(x319*x320));

	if (t64 != 18446744073709518975LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x321 = INT32_MIN;
	int32_t x322 = -1;
	volatile uint16_t x323 = UINT16_MAX;
	uint8_t x324 = UINT8_MAX;

	t65 = ((x321^x322)|(x323*x324));

	if (t65 != INT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x329 = INT8_MIN;
	int32_t x330 = -1;
	uint8_t x331 = 2U;
	int16_t x332 = INT16_MIN;
	int32_t t66 = -903;

	t66 = ((x329^x330)|(x331*x332));

	if (t66 != -65409) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x333 = UINT8_MAX;
	int64_t x334 = 52958979646LL;
	uint64_t x336 = 1708414813180852LLU;
	uint64_t t67 = 29265290416145LLU;

	t67 = ((x333^x334)|(x335*x336));

	if (t67 != 18120436844662091509LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x337 = 8;
	uint16_t x338 = 28U;
	uint32_t x340 = 25U;
	uint32_t t68 = 112U;

	t68 = ((x337^x338)|(x339*x340));

	if (t68 != 4294964116U) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x345 = INT16_MAX;
	static int8_t x346 = -2;
	volatile int8_t x347 = INT8_MAX;
	int32_t x348 = -1;
	int32_t t69 = 252841548;

	t69 = ((x345^x346)|(x347*x348));

	if (t69 != -127) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x358 = -1;
	int16_t x359 = -227;
	uint16_t x360 = UINT16_MAX;

	t70 = ((x357^x358)|(x359*x360));

	if (t70 != -10625809LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x361 = -1;
	volatile uint16_t x364 = 541U;
	int32_t t71 = -20653;

	t71 = ((x361^x362)|(x363*x364));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x366 = INT32_MAX;
	volatile uint8_t x367 = 28U;
	int8_t x368 = INT8_MIN;
	static volatile int64_t t72 = 1LL;

	t72 = ((x365^x366)|(x367*x368));

	if (t72 != -1420LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x373 = 2214310;
	uint64_t x374 = 1226248160LLU;
	uint32_t x376 = 12770U;
	static uint64_t t73 = 198LLU;

	t73 = ((x373^x374)|(x375*x376));

	if (t73 != 1228335046LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x378 = INT32_MIN;
	uint8_t x380 = 0U;
	uint32_t t74 = 10091U;

	t74 = ((x377^x378)|(x379*x380));

	if (t74 != 2147483647U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x386 = 258107759466609LL;
	int16_t x387 = INT16_MIN;
	int16_t x388 = INT16_MAX;
	volatile int64_t t75 = -111138603308797644LL;

	t75 = ((x385^x386)|(x387*x388));

	if (t75 != -447617138LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x389 = UINT16_MAX;
	uint64_t x390 = UINT64_MAX;
	static int16_t x392 = INT16_MAX;
	uint64_t t76 = 2780306864539LLU;

	t76 = ((x389^x390)|(x391*x392));

	if (t76 != 18446744073709518593LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x397 = INT32_MIN;
	volatile uint64_t x398 = 7267154180593690563LLU;
	static volatile uint16_t x399 = UINT16_MAX;
	volatile int8_t x400 = INT8_MIN;
	static uint64_t t77 = 3411621184125353LLU;

	t77 = ((x397^x398)|(x399*x400));

	if (t77 != 18446744073705891779LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x401 = INT64_MIN;
	int16_t x402 = -334;
	volatile uint64_t x403 = 881659380LLU;
	uint64_t x404 = 7059155735065057153LLU;
	static volatile uint64_t t78 = 78392705493735LLU;

	t78 = ((x401^x402)|(x403*x404));

	if (t78 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int64_t x405 = -1LL;
	int64_t x406 = -1LL;
	int8_t x407 = -1;
	volatile int64_t x408 = INT64_MAX;
	volatile int64_t t79 = -26969408711727LL;

	t79 = ((x405^x406)|(x407*x408));

	if (t79 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x409 = INT64_MIN;
	int32_t x410 = -1;
	int8_t x411 = INT8_MIN;
	int16_t x412 = -1;
	int64_t t80 = INT64_MAX;

	t80 = ((x409^x410)|(x411*x412));

	if (t80 != INT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x413 = -1;
	int16_t x414 = 13561;
	int16_t x415 = -1;
	uint16_t x416 = UINT16_MAX;
	static volatile int32_t t81 = -1;

	t81 = ((x413^x414)|(x415*x416));

	if (t81 != -13561) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x417 = UINT8_MAX;
	int32_t x419 = INT32_MAX;
	static uint32_t x420 = UINT32_MAX;
	static uint32_t t82 = 1680855165U;

	t82 = ((x417^x418)|(x419*x420));

	if (t82 != 2147483649U) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x421 = -1515117024898522LL;
	static uint32_t x422 = 24628357U;
	uint64_t x424 = 111828269350LLU;
	volatile uint64_t t83 = 186894721626944LLU;

	t83 = ((x421^x422)|(x423*x424));

	if (t83 != 18446427377112186863LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x425 = -14;
	uint32_t x426 = UINT32_MAX;
	int32_t x428 = INT32_MIN;
	uint32_t t84 = 6U;

	t84 = ((x425^x426)|(x427*x428));

	if (t84 != 2147483661U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x430 = INT64_MAX;
	int64_t x431 = INT64_MAX;
	static volatile int16_t x432 = -1;
	static volatile uint64_t t85 = 6026633040139LLU;

	t85 = ((x429^x430)|(x431*x432));

	if (t85 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x437 = 0;
	int8_t x438 = INT8_MIN;
	uint32_t x439 = UINT32_MAX;
	volatile int16_t x440 = 8;

	t86 = ((x437^x438)|(x439*x440));

	if (t86 != 4294967288U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x441 = INT16_MIN;
	int16_t x442 = INT16_MIN;
	int64_t x443 = -16107109846685LL;
	uint16_t x444 = UINT16_MAX;

	t87 = ((x441^x442)|(x443*x444));

	if (t87 != -1055579443802501475LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x445 = -1;
	volatile int16_t x446 = 95;
	uint64_t x447 = UINT64_MAX;
	uint16_t x448 = 85U;

	t88 = ((x445^x446)|(x447*x448));

	if (t88 != 18446744073709551531LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x457 = INT64_MIN;
	static int16_t x458 = INT16_MIN;
	int16_t x459 = 1;

	t89 = ((x457^x458)|(x459*x460));

	if (t89 != -128LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x465 = INT64_MIN;
	uint64_t x466 = UINT64_MAX;
	int16_t x467 = -10940;
	int32_t x468 = 7;
	static volatile uint64_t t90 = UINT64_MAX;

	t90 = ((x465^x466)|(x467*x468));

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x471 = 1U;
	static int8_t x472 = -1;
	uint64_t t91 = UINT64_MAX;

	t91 = ((x469^x470)|(x471*x472));

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x473 = -1;
	static volatile int8_t x474 = INT8_MIN;
	uint8_t x475 = 1U;
	int64_t x476 = INT64_MIN;

	t92 = ((x473^x474)|(x475*x476));

	if (t92 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x477 = -108282018440826LL;
	int16_t x478 = INT16_MIN;
	int8_t x479 = INT8_MIN;
	int8_t x480 = INT8_MIN;
	static int64_t t93 = 644591222LL;

	t93 = ((x477^x478)|(x479*x480));

	if (t93 != 108282018453894LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x481 = 2038396;
	uint32_t x482 = 2U;
	uint8_t x484 = UINT8_MAX;

	t94 = ((x481^x482)|(x483*x484));

	if (t94 != 8355711U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x485 = INT64_MAX;
	static int64_t x486 = INT64_MIN;
	volatile int16_t x487 = -1;
	uint32_t x488 = UINT32_MAX;
	volatile int64_t t95 = 219535LL;

	t95 = ((x485^x486)|(x487*x488));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x489 = 14U;
	static volatile int64_t x490 = INT64_MIN;
	int64_t x491 = -434797399029LL;
	uint64_t x492 = UINT64_MAX;

	t96 = ((x489^x490)|(x491*x492));

	if (t96 != 9223372471652174847LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x493 = 63U;
	volatile int8_t x494 = INT8_MIN;
	int16_t x495 = -4554;
	uint64_t x496 = 3793670332LLU;
	volatile uint64_t t97 = 41808279LLU;

	t97 = ((x493^x494)|(x495*x496));

	if (t97 != 18446744073709551551LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x501 = UINT8_MAX;
	static int32_t x502 = 1549;
	int8_t x503 = 32;
	static uint64_t x504 = 3664767415585LLU;

	t98 = ((x501^x502)|(x503*x504));

	if (t98 != 117272557299442LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x505 = INT32_MAX;
	int16_t x506 = INT16_MIN;
	int64_t x507 = 16381838530675LL;
	int16_t x508 = INT16_MIN;

	t99 = ((x505^x506)|(x507*x508));

	if (t99 != -1278803969LL) { NG(); } else { ; }
	
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

