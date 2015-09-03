#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x9 = -1;
volatile uint32_t t2 = 3383309U;
uint32_t x14 = 16723599U;
volatile int32_t t6 = -23920084;
volatile int8_t x34 = INT8_MIN;
int64_t x41 = -680183752LL;
uint16_t x42 = UINT16_MAX;
int8_t x44 = INT8_MIN;
int16_t x47 = 138;
uint64_t t13 = 3593715773LLU;
uint16_t x57 = 9224U;
int16_t x65 = INT16_MIN;
static uint64_t x68 = 73052336LLU;
int64_t x69 = 3743089LL;
volatile int8_t x74 = INT8_MIN;
uint8_t x76 = 0U;
static int8_t x77 = INT8_MIN;
int64_t x80 = INT64_MAX;
int16_t x90 = INT16_MAX;
int32_t x113 = 501;
uint16_t x115 = 2898U;
volatile int32_t t28 = -1;
int16_t x127 = -1;
int64_t x128 = -3276LL;
int64_t t34 = 931174350211780LL;
int32_t x145 = INT32_MAX;
int8_t x148 = -1;
volatile uint8_t x154 = 94U;
volatile int32_t x157 = 30;
int8_t x159 = INT8_MAX;
int8_t x160 = INT8_MIN;
volatile uint64_t t42 = 45495200491LLU;
uint64_t t44 = 5865510295797052645LLU;
volatile int64_t x181 = INT64_MIN;
int64_t x183 = INT64_MAX;
int8_t x184 = 1;
volatile int32_t t46 = -2;
int32_t t47 = 59516;
volatile int16_t x193 = -6699;
static int8_t x197 = INT8_MIN;
volatile uint64_t x202 = 768604LLU;
uint32_t t51 = 19704953U;
int8_t x216 = -3;
int32_t x218 = -1;
int8_t x222 = INT8_MAX;
uint16_t x230 = 103U;
int32_t x231 = INT32_MIN;
uint64_t x232 = 17282471903LLU;
volatile uint64_t t56 = 24LLU;
static int8_t x234 = INT8_MIN;
uint32_t t57 = 2U;
int64_t x237 = INT64_MIN;
int64_t x238 = INT64_MAX;
volatile int32_t t60 = -1;
static int64_t x249 = -122554622086LL;
int32_t x254 = -69;
volatile uint32_t x256 = 3935916U;
volatile uint32_t t62 = 595U;
volatile uint64_t t66 = 64502LLU;
static int8_t x276 = INT8_MIN;
int64_t x279 = -1LL;
int8_t x286 = INT8_MIN;
static uint32_t x291 = 1522687U;
int32_t x295 = INT32_MIN;
int32_t x297 = INT32_MAX;
uint32_t t72 = 432U;
uint32_t x310 = UINT32_MAX;
volatile int8_t x313 = 5;
uint32_t x314 = 3U;
uint64_t t76 = 2813277221981251LLU;
int8_t x325 = 1;
uint16_t x327 = 112U;
int16_t x330 = -4;
int64_t x333 = -1LL;
static int32_t x336 = INT32_MIN;
static volatile uint64_t x337 = UINT64_MAX;
int64_t x347 = -1440259342998251LL;
int16_t x351 = INT16_MIN;
int64_t x355 = INT64_MAX;
static volatile int64_t t86 = -22297223LL;
static int64_t x368 = 340LL;
int16_t x372 = INT16_MAX;
int16_t x378 = -20;
uint16_t x385 = UINT16_MAX;
volatile uint64_t x387 = 4054789LLU;
volatile uint32_t x392 = UINT32_MAX;
volatile int16_t x401 = INT16_MIN;
volatile int8_t x411 = INT8_MIN;
int8_t x412 = -1;
uint8_t x413 = 8U;


void f0(void) {
	int32_t x1 = -1;
	uint8_t x2 = 7U;
	int32_t x3 = INT32_MAX;
	int32_t x4 = 736416334;
	volatile int32_t t0 = 297018045;

	t0 = (x1&(x2-(x3&x4)));

	if (t0 != -736416327) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	uint32_t x6 = 0U;
	int16_t x7 = INT16_MIN;
	volatile int8_t x8 = -16;
	volatile uint64_t t1 = 7372915232703LLU;

	t1 = (x5&(x6-(x7&x8)));

	if (t1 != 32768LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = -1;
	uint16_t x11 = 1U;
	uint32_t x12 = 72255U;

	t2 = (x9&(x10-(x11&x12)));

	if (t2 != 4294967294U) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = UINT32_MAX;
	int32_t x15 = -715400;
	int8_t x16 = -1;
	uint32_t t3 = 11568186U;

	t3 = (x13&(x14-(x15&x16)));

	if (t3 != 17438999U) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 95U;
	static volatile int64_t x18 = -19708LL;
	uint8_t x19 = UINT8_MAX;
	uint16_t x20 = UINT16_MAX;
	volatile int64_t t4 = -8322148371LL;

	t4 = (x17&(x18-(x19&x20)));

	if (t4 != 5LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 308U;
	int16_t x22 = INT16_MAX;
	uint8_t x23 = UINT8_MAX;
	int8_t x24 = INT8_MIN;
	volatile uint32_t t5 = 1575U;

	t5 = (x21&(x22-(x23&x24)));

	if (t5 != 308U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = -149203329;
	uint8_t x26 = 63U;
	uint16_t x27 = UINT16_MAX;
	volatile int8_t x28 = INT8_MAX;

	t6 = (x25&(x26-(x27&x28)));

	if (t6 != -149203392) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 2245U;
	static volatile int8_t x30 = INT8_MIN;
	static volatile int8_t x31 = 0;
	uint8_t x32 = 85U;
	volatile int32_t t7 = 1323;

	t7 = (x29&(x30-(x31&x32)));

	if (t7 != 2176) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MAX;
	volatile int16_t x35 = -1;
	int64_t x36 = -1263436723093398LL;
	int64_t t8 = 62551567LL;

	t8 = (x33&(x34-(x35&x36)));

	if (t8 != 22LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x37 = INT16_MAX;
	int8_t x38 = 0;
	int16_t x39 = INT16_MAX;
	int32_t x40 = INT32_MIN;
	volatile int32_t t9 = 7;

	t9 = (x37&(x38-(x39&x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x43 = INT16_MIN;
	int64_t t10 = 3503559319392340LL;

	t10 = (x41&(x42-(x43&x44)));

	if (t10 != 79928LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x45 = INT16_MIN;
	volatile int8_t x46 = -1;
	uint32_t x48 = UINT32_MAX;
	volatile uint32_t t11 = 10U;

	t11 = (x45&(x46-(x47&x48)));

	if (t11 != 4294934528U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = 13218982;
	volatile int32_t x50 = 493;
	int32_t x51 = INT32_MAX;
	int64_t x52 = 76430595683LL;
	int64_t t12 = 116321982877919986LL;

	t12 = (x49&(x50-(x51&x52)));

	if (t12 != 4300930LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 68U;
	volatile uint64_t x54 = UINT64_MAX;
	uint8_t x55 = 1U;
	uint32_t x56 = 28663U;

	t13 = (x53&(x54-(x55&x56)));

	if (t13 != 68LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x58 = 4;
	int32_t x59 = INT32_MAX;
	uint32_t x60 = 54464U;
	volatile uint32_t t14 = 1599U;

	t14 = (x57&(x58-(x59&x60)));

	if (t14 != 8192U) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x61 = 1;
	int32_t x62 = -885595813;
	volatile int16_t x63 = -1;
	uint8_t x64 = UINT8_MAX;
	int32_t t15 = 683;

	t15 = (x61&(x62-(x63&x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x66 = INT32_MIN;
	int8_t x67 = INT8_MIN;
	volatile uint64_t t16 = 3962682110LLU;

	t16 = (x65&(x66-(x67&x68)));

	if (t16 != 18446744071488995328LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x70 = INT16_MAX;
	int64_t x71 = INT64_MAX;
	uint8_t x72 = UINT8_MAX;
	volatile int64_t t17 = -1996192537943578476LL;

	t17 = (x69&(x70-(x71&x72)));

	if (t17 != 7424LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 883U;
	int32_t x75 = INT32_MIN;
	volatile int32_t t18 = 118689917;

	t18 = (x73&(x74-(x75&x76)));

	if (t18 != 768) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x78 = -1;
	int16_t x79 = INT16_MIN;
	volatile int64_t t19 = 66LL;

	t19 = (x77&(x78-(x79&x80)));

	if (t19 != -9223372036854743168LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = 7177690423244863LLU;
	volatile uint8_t x82 = 1U;
	volatile int16_t x83 = 1031;
	volatile uint64_t x84 = UINT64_MAX;
	uint64_t t20 = 7942145158421670211LLU;

	t20 = (x81&(x82-(x83&x84)));

	if (t20 != 7177690423244858LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x85 = INT64_MAX;
	static volatile int16_t x86 = INT16_MIN;
	int32_t x87 = INT32_MIN;
	int32_t x88 = INT32_MIN;
	int64_t t21 = 16861901120997LL;

	t21 = (x85&(x86-(x87&x88)));

	if (t21 != 2147450880LL) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int16_t x89 = INT16_MIN;
	int8_t x91 = -22;
	int8_t x92 = -1;
	volatile int32_t t22 = 59;

	t22 = (x89&(x90-(x91&x92)));

	if (t22 != 32768) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = UINT64_MAX;
	int16_t x94 = -1;
	static int64_t x95 = -1LL;
	int32_t x96 = 142548;
	volatile uint64_t t23 = 48626957320317150LLU;

	t23 = (x93&(x94-(x95&x96)));

	if (t23 != 18446744073709409067LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int64_t x97 = INT64_MAX;
	static uint32_t x98 = UINT32_MAX;
	int16_t x99 = INT16_MIN;
	volatile int64_t x100 = -10108582LL;
	volatile int64_t t24 = 1491LL;

	t24 = (x97&(x98-(x99&x100)));

	if (t24 != 4305092607LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = UINT32_MAX;
	uint16_t x102 = UINT16_MAX;
	int64_t x103 = 93LL;
	int32_t x104 = 2500;
	volatile int64_t t25 = 438888582575567LL;

	t25 = (x101&(x102-(x103&x104)));

	if (t25 != 65467LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = -1689;
	uint32_t x106 = UINT32_MAX;
	static int32_t x107 = 49313;
	int8_t x108 = INT8_MAX;
	static volatile uint32_t t26 = 63U;

	t26 = (x105&(x106-(x107&x108)));

	if (t26 != 4294965574U) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x109 = -6;
	uint8_t x110 = UINT8_MAX;
	uint8_t x111 = UINT8_MAX;
	volatile uint64_t x112 = UINT64_MAX;
	volatile uint64_t t27 = 6846LLU;

	t27 = (x109&(x110-(x111&x112)));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x114 = INT32_MAX;
	int16_t x116 = INT16_MAX;

	t28 = (x113&(x114-(x115&x116)));

	if (t28 != 165) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x117 = 1U;
	int64_t x118 = INT64_MAX;
	static int16_t x119 = INT16_MIN;
	static int64_t x120 = INT64_MAX;
	volatile int64_t t29 = 1LL;

	t29 = (x117&(x118-(x119&x120)));

	if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = UINT8_MAX;
	int64_t x122 = 1026323143861LL;
	uint8_t x123 = UINT8_MAX;
	int64_t x124 = -1LL;
	int64_t t30 = 119417242845897LL;

	t30 = (x121&(x122-(x123&x124)));

	if (t30 != 182LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x125 = -1;
	static int32_t x126 = INT32_MAX;
	static int64_t t31 = 3807608855LL;

	t31 = (x125&(x126-(x127&x128)));

	if (t31 != 2147486923LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MIN;
	int32_t x130 = -1;
	int8_t x131 = -1;
	static volatile int64_t x132 = INT64_MIN;
	volatile int64_t t32 = 10709542LL;

	t32 = (x129&(x130-(x131&x132)));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x133 = 8LL;
	volatile int8_t x134 = -21;
	static int16_t x135 = -1;
	int16_t x136 = INT16_MIN;
	volatile int64_t t33 = -23LL;

	t33 = (x133&(x134-(x135&x136)));

	if (t33 != 8LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = INT16_MAX;
	int64_t x138 = INT64_MAX;
	volatile uint16_t x139 = 2511U;
	int32_t x140 = -695;

	t34 = (x137&(x138-(x139&x140)));

	if (t34 != 30390LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x141 = -1;
	int8_t x142 = INT8_MIN;
	int8_t x143 = INT8_MIN;
	volatile int32_t x144 = INT32_MIN;
	int32_t t35 = 747532;

	t35 = (x141&(x142-(x143&x144)));

	if (t35 != 2147483520) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x146 = 1;
	uint8_t x147 = UINT8_MAX;
	volatile int32_t t36 = -50174238;

	t36 = (x145&(x146-(x147&x148)));

	if (t36 != 2147483394) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = UINT8_MAX;
	static int8_t x150 = -1;
	int64_t x151 = -87547695525436898LL;
	int64_t x152 = INT64_MIN;
	volatile int64_t t37 = -7714900LL;

	t37 = (x149&(x150-(x151&x152)));

	if (t37 != 255LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = INT64_MIN;
	static uint32_t x155 = UINT32_MAX;
	int16_t x156 = -1;
	int64_t t38 = 1LL;

	t38 = (x153&(x154-(x155&x156)));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x158 = -1;
	int32_t t39 = 0;

	t39 = (x157&(x158-(x159&x160)));

	if (t39 != 30) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = UINT16_MAX;
	uint32_t x162 = UINT32_MAX;
	static uint8_t x163 = UINT8_MAX;
	uint64_t x164 = 96LLU;
	uint64_t t40 = 437215520185LLU;

	t40 = (x161&(x162-(x163&x164)));

	if (t40 != 65439LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MIN;
	int32_t x166 = 128163313;
	int16_t x167 = INT16_MAX;
	int16_t x168 = 565;
	int32_t t41 = -67;

	t41 = (x165&(x166-(x167&x168)));

	if (t41 != 128155648) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = UINT32_MAX;
	uint32_t x170 = UINT32_MAX;
	int32_t x171 = -1;
	uint64_t x172 = 17468LLU;

	t42 = (x169&(x170-(x171&x172)));

	if (t42 != 4294949827LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x173 = 3U;
	uint16_t x174 = UINT16_MAX;
	uint16_t x175 = 0U;
	int8_t x176 = INT8_MIN;
	static int32_t t43 = 5842;

	t43 = (x173&(x174-(x175&x176)));

	if (t43 != 3) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = 1341268808947672888LLU;
	uint16_t x178 = 9U;
	static uint32_t x179 = UINT32_MAX;
	uint32_t x180 = 88U;

	t44 = (x177&(x178-(x179&x180)));

	if (t44 != 430122800LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x182 = UINT64_MAX;
	volatile uint64_t t45 = 11163175981LLU;

	t45 = (x181&(x182-(x183&x184)));

	if (t45 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = -31;
	volatile uint16_t x186 = 2154U;
	uint16_t x187 = 519U;
	volatile int32_t x188 = INT32_MIN;

	t46 = (x185&(x186-(x187&x188)));

	if (t46 != 2144) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MAX;
	static int8_t x190 = INT8_MIN;
	static uint16_t x191 = 1990U;
	static int32_t x192 = INT32_MAX;

	t47 = (x189&(x190-(x191&x192)));

	if (t47 != 30650) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x194 = UINT32_MAX;
	static int8_t x195 = INT8_MIN;
	int16_t x196 = INT16_MIN;
	uint32_t t48 = 203122U;

	t48 = (x193&(x194-(x195&x196)));

	if (t48 != 26069U) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int16_t x198 = INT16_MIN;
	uint8_t x199 = 103U;
	uint32_t x200 = 17U;
	static volatile uint32_t t49 = 479052009U;

	t49 = (x197&(x198-(x199&x200)));

	if (t49 != 4294934400U) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = 2U;
	volatile uint64_t x203 = UINT64_MAX;
	int8_t x204 = INT8_MIN;
	static uint64_t t50 = 1LLU;

	t50 = (x201&(x202-(x203&x204)));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x209 = INT16_MIN;
	uint16_t x210 = 873U;
	static int16_t x211 = INT16_MAX;
	static volatile uint32_t x212 = 102U;

	t51 = (x209&(x210-(x211&x212)));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x213 = 0;
	int64_t x214 = -1LL;
	int64_t x215 = INT64_MIN;
	static volatile int64_t t52 = -33688137806117LL;

	t52 = (x213&(x214-(x215&x216)));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x217 = UINT32_MAX;
	int64_t x219 = INT64_MAX;
	volatile int64_t x220 = -177486104LL;
	volatile int64_t t53 = 774LL;

	t53 = (x217&(x218-(x219&x220)));

	if (t53 != 177486103LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x221 = -1;
	int32_t x223 = -1;
	volatile uint64_t x224 = 25700713LLU;
	static volatile uint64_t t54 = 7966587LLU;

	t54 = (x221&(x222-(x223&x224)));

	if (t54 != 18446744073683851030LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x225 = 0U;
	static int16_t x226 = -1;
	int16_t x227 = INT16_MIN;
	int32_t x228 = INT32_MIN;
	int32_t t55 = 1;

	t55 = (x225&(x226-(x227&x228)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint64_t x229 = UINT64_MAX;

	t56 = (x229&(x230-(x231&x232)));

	if (t56 != 18446744056529682535LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x233 = INT32_MIN;
	static int8_t x235 = -6;
	uint32_t x236 = 43U;

	t57 = (x233&(x234-(x235&x236)));

	if (t57 != 2147483648U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x239 = 34U;
	int16_t x240 = INT16_MIN;
	static volatile int64_t t58 = 173324351LL;

	t58 = (x237&(x238-(x239&x240)));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x241 = UINT16_MAX;
	static volatile uint8_t x242 = UINT8_MAX;
	int32_t x243 = INT32_MIN;
	static uint32_t x244 = 32U;
	volatile uint32_t t59 = 3U;

	t59 = (x241&(x242-(x243&x244)));

	if (t59 != 255U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x245 = 6U;
	uint16_t x246 = 26030U;
	int16_t x247 = INT16_MIN;
	int16_t x248 = INT16_MAX;

	t60 = (x245&(x246-(x247&x248)));

	if (t60 != 6) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x250 = 14U;
	int32_t x251 = -118333498;
	int8_t x252 = -42;
	static int64_t t61 = -23371300120016125LL;

	t61 = (x249&(x250-(x251&x252)));

	if (t61 != 118259784LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x253 = -1;
	uint8_t x255 = 3U;

	t62 = (x253&(x254-(x255&x256)));

	if (t62 != 4294967227U) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x257 = 9391U;
	uint16_t x258 = 2125U;
	volatile int16_t x259 = INT16_MIN;
	uint16_t x260 = 42U;
	int32_t t63 = 74816785;

	t63 = (x257&(x258-(x259&x260)));

	if (t63 != 13) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x261 = 459431169U;
	int64_t x262 = -16039938473LL;
	int16_t x263 = INT16_MIN;
	int64_t x264 = INT64_MIN;
	volatile int64_t t64 = 44980783599LL;

	t64 = (x261&(x262-(x263&x264)));

	if (t64 != 56644609LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x265 = INT32_MIN;
	uint8_t x266 = 14U;
	static int16_t x267 = -1;
	int16_t x268 = -244;
	static int32_t t65 = 12;

	t65 = (x265&(x266-(x267&x268)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x269 = UINT8_MAX;
	static uint32_t x270 = 11970U;
	volatile int64_t x271 = INT64_MAX;
	volatile uint64_t x272 = 5LLU;

	t66 = (x269&(x270-(x271&x272)));

	if (t66 != 189LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x273 = INT16_MIN;
	static uint32_t x274 = 4116U;
	int64_t x275 = -3696847143624020883LL;
	static int64_t t67 = 1454LL;

	t67 = (x273&(x274-(x275&x276)));

	if (t67 != 3696847143624015872LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x277 = -1;
	int8_t x278 = -3;
	int64_t x280 = -1LL;
	int64_t t68 = 13821671523428356LL;

	t68 = (x277&(x278-(x279&x280)));

	if (t68 != -2LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int16_t x285 = INT16_MIN;
	uint64_t x287 = UINT64_MAX;
	volatile uint32_t x288 = UINT32_MAX;
	volatile uint64_t t69 = 28455568564494658LLU;

	t69 = (x285&(x286-(x287&x288)));

	if (t69 != 18446744069414551552LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x289 = 1740;
	uint16_t x290 = 3U;
	int8_t x292 = INT8_MIN;
	uint32_t t70 = 785U;

	t70 = (x289&(x290-(x291&x292)));

	if (t70 != 1152U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x293 = -1;
	int16_t x294 = 10;
	uint8_t x296 = 4U;
	static int32_t t71 = 224934;

	t71 = (x293&(x294-(x295&x296)));

	if (t71 != 10) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x298 = 5335694U;
	int8_t x299 = INT8_MIN;
	int32_t x300 = -28626;

	t72 = (x297&(x298-(x299&x300)));

	if (t72 != 5364366U) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x305 = 181323566U;
	int16_t x306 = INT16_MIN;
	uint32_t x307 = 0U;
	int64_t x308 = 2345LL;
	static volatile int64_t t73 = -71988907582201LL;

	t73 = (x305&(x306-(x307&x308)));

	if (t73 != 181305344LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x309 = 10U;
	int16_t x311 = INT16_MIN;
	int8_t x312 = INT8_MAX;
	uint32_t t74 = 21U;

	t74 = (x309&(x310-(x311&x312)));

	if (t74 != 10U) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x315 = 43U;
	int16_t x316 = INT16_MIN;
	uint32_t t75 = 389829U;

	t75 = (x313&(x314-(x315&x316)));

	if (t75 != 1U) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x317 = -1;
	int64_t x318 = INT64_MAX;
	volatile uint64_t x319 = 33417842463943497LLU;
	static int32_t x320 = INT32_MIN;

	t76 = (x317&(x318-(x319&x320)));

	if (t76 != 9189954195552206847LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x321 = INT16_MAX;
	volatile uint64_t x322 = 901010282750920170LLU;
	int64_t x323 = 47606157997LL;
	int8_t x324 = -6;
	volatile uint64_t t77 = 274915596288400LLU;

	t77 = (x321&(x322-(x323&x324)));

	if (t77 != 29506LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x326 = UINT8_MAX;
	int32_t x328 = -24588778;
	volatile int32_t t78 = -14;

	t78 = (x325&(x326-(x327&x328)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int32_t x329 = INT32_MAX;
	uint32_t x331 = 128961U;
	int8_t x332 = -2;
	uint32_t t79 = 433554235U;

	t79 = (x329&(x330-(x331&x332)));

	if (t79 != 2147354684U) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x334 = 281U;
	static int16_t x335 = INT16_MIN;
	volatile int64_t t80 = 30765139642LL;

	t80 = (x333&(x334-(x335&x336)));

	if (t80 != 2147483929LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x338 = 236892354894LLU;
	uint32_t x339 = 6U;
	int16_t x340 = 24;
	uint64_t t81 = 2376LLU;

	t81 = (x337&(x338-(x339&x340)));

	if (t81 != 236892354894LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int16_t x345 = INT16_MIN;
	int16_t x346 = INT16_MIN;
	static uint32_t x348 = 2044339U;
	int64_t t82 = 18298LL;

	t82 = (x345&(x346-(x347&x348)));

	if (t82 != -1703936LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x349 = INT32_MIN;
	static int8_t x350 = INT8_MIN;
	volatile int32_t x352 = -7629099;
	volatile int32_t t83 = -239842;

	t83 = (x349&(x350-(x351&x352)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x353 = INT16_MIN;
	static volatile int16_t x354 = -1;
	uint64_t x356 = 3592280831685662912LLU;
	uint64_t t84 = 5LLU;

	t84 = (x353&(x354-(x355&x356)));

	if (t84 != 14854463242023862272LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x357 = -4206223305956LL;
	volatile uint64_t x358 = UINT64_MAX;
	int8_t x359 = 4;
	volatile uint16_t x360 = 3370U;
	static uint64_t t85 = 16707801362703689LLU;

	t85 = (x357&(x358-(x359&x360)));

	if (t85 != 18446739867486245660LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x361 = -1LL;
	int64_t x362 = -361072LL;
	int16_t x363 = -1;
	static volatile int16_t x364 = INT16_MIN;

	t86 = (x361&(x362-(x363&x364)));

	if (t86 != -328304LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x365 = INT32_MAX;
	uint16_t x366 = 7638U;
	int8_t x367 = INT8_MIN;
	static int64_t t87 = 66137345964LL;

	t87 = (x365&(x366-(x367&x368)));

	if (t87 != 7382LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x369 = UINT32_MAX;
	static volatile int32_t x370 = -194414888;
	volatile int16_t x371 = 1;
	volatile uint32_t t88 = 35903U;

	t88 = (x369&(x370-(x371&x372)));

	if (t88 != 4100552407U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x373 = 4;
	int32_t x374 = -1;
	int8_t x375 = INT8_MAX;
	int8_t x376 = INT8_MIN;
	static volatile int32_t t89 = 10464;

	t89 = (x373&(x374-(x375&x376)));

	if (t89 != 4) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x377 = 1;
	uint16_t x379 = 14U;
	uint32_t x380 = UINT32_MAX;
	volatile uint32_t t90 = 16375U;

	t90 = (x377&(x378-(x379&x380)));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x381 = UINT64_MAX;
	int32_t x382 = INT32_MIN;
	int64_t x383 = INT64_MIN;
	int64_t x384 = 2706621073018LL;
	uint64_t t91 = 10842244LLU;

	t91 = (x381&(x382-(x383&x384)));

	if (t91 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x386 = -1;
	uint32_t x388 = 21U;
	volatile uint64_t t92 = 1LLU;

	t92 = (x385&(x386-(x387&x388)));

	if (t92 != 65530LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x389 = -1;
	static int8_t x390 = -27;
	uint8_t x391 = 10U;
	uint32_t t93 = 0U;

	t93 = (x389&(x390-(x391&x392)));

	if (t93 != 4294967259U) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x393 = UINT8_MAX;
	static int32_t x394 = 463;
	static volatile uint32_t x395 = UINT32_MAX;
	int16_t x396 = INT16_MAX;
	volatile uint32_t t94 = 1261851620U;

	t94 = (x393&(x394-(x395&x396)));

	if (t94 != 208U) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int16_t x397 = INT16_MIN;
	static uint64_t x398 = UINT64_MAX;
	int16_t x399 = 87;
	static int8_t x400 = -6;
	static uint64_t t95 = 1303904LLU;

	t95 = (x397&(x398-(x399&x400)));

	if (t95 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x402 = 0;
	int32_t x403 = INT32_MIN;
	static int32_t x404 = INT32_MAX;
	static int32_t t96 = 5395;

	t96 = (x401&(x402-(x403&x404)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x405 = UINT32_MAX;
	int8_t x406 = INT8_MIN;
	int8_t x407 = -1;
	volatile int16_t x408 = INT16_MAX;
	volatile uint32_t t97 = 8809145U;

	t97 = (x405&(x406-(x407&x408)));

	if (t97 != 4294934401U) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int8_t x409 = -1;
	volatile int32_t x410 = INT32_MIN;
	volatile int32_t t98 = 21366873;

	t98 = (x409&(x410-(x411&x412)));

	if (t98 != -2147483520) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x414 = INT8_MIN;
	int64_t x415 = 5826993LL;
	static int16_t x416 = -28;
	int64_t t99 = -1131020822473273850LL;

	t99 = (x413&(x414-(x415&x416)));

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

