#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x4 = INT64_MIN;
int32_t x5 = -200916;
static int16_t x14 = -3681;
int32_t x19 = INT32_MIN;
volatile int64_t x24 = INT64_MAX;
uint32_t x31 = 511924U;
int64_t t6 = 5LL;
int8_t x45 = 1;
uint8_t x46 = 0U;
int32_t x52 = -1;
static uint32_t t12 = 0U;
int16_t x62 = INT16_MIN;
volatile uint64_t t14 = 3264610LLU;
int32_t x68 = INT32_MIN;
int8_t x89 = INT8_MIN;
volatile int32_t x93 = INT32_MAX;
int64_t x105 = -25104648LL;
int32_t t25 = INT32_MIN;
int8_t x119 = INT8_MIN;
static int8_t x120 = INT8_MIN;
int16_t x124 = -13;
int32_t t27 = -6459481;
int16_t x128 = 4738;
volatile int32_t t29 = -35;
int64_t x134 = -32LL;
static int8_t x135 = INT8_MIN;
int64_t t30 = 16860916249582239LL;
static volatile uint64_t x139 = 18LLU;
static int16_t x141 = -22;
int16_t x143 = -1;
volatile int64_t t33 = 2LL;
int32_t x151 = INT32_MAX;
uint32_t x162 = 3U;
static int32_t x170 = 482;
static int32_t x171 = INT32_MIN;
static volatile uint16_t x174 = UINT16_MAX;
uint8_t x175 = 62U;
uint64_t t41 = 1472443LLU;
int32_t x195 = -1;
volatile int32_t t46 = 749692;
volatile int64_t t48 = 60239655LL;
volatile int64_t t49 = 2929736753LL;
static uint32_t x214 = 383486U;
static volatile uint32_t t50 = 1U;
uint64_t x218 = 8825024916LLU;
int16_t x220 = 11;
static int32_t x222 = INT32_MIN;
static volatile int8_t x226 = INT8_MIN;
uint32_t x228 = 18U;
uint32_t t53 = 607892893U;
int8_t x229 = INT8_MAX;
int64_t t54 = 2406738952023385736LL;
static uint32_t x236 = UINT32_MAX;
volatile uint8_t x238 = 100U;
uint32_t x239 = UINT32_MAX;
volatile int8_t x241 = 0;
volatile uint8_t x243 = 86U;
int16_t x246 = -5132;
static int16_t x258 = -1;
static int64_t x259 = INT64_MIN;
static uint16_t x265 = 20U;
volatile int16_t x266 = -3168;
volatile int64_t x267 = INT64_MIN;
volatile uint8_t x268 = 3U;
volatile int32_t x269 = INT32_MIN;
volatile uint8_t x274 = 3U;
uint8_t x277 = 1U;
int16_t x278 = INT16_MIN;
static volatile int64_t t65 = -260465821852LL;
static int64_t x283 = INT64_MAX;
static uint32_t x284 = 118483278U;
int8_t x293 = -20;
int8_t x298 = 0;
static int8_t x300 = INT8_MIN;
int32_t x301 = -1;
uint8_t x304 = UINT8_MAX;
uint8_t x325 = 103U;
int64_t x331 = -1LL;
int32_t x337 = INT32_MIN;
int64_t x346 = INT64_MAX;
static int32_t x354 = INT32_MIN;
uint8_t x360 = UINT8_MAX;
volatile int16_t x363 = INT16_MAX;
static uint32_t x364 = UINT32_MAX;
int32_t x366 = 5214;
static volatile int64_t t85 = -410662939337841LL;
static volatile int8_t x369 = 11;
int32_t x371 = INT32_MIN;
static uint64_t x375 = 3LLU;
static volatile uint64_t t87 = 4024098385LLU;
int32_t x377 = 199689;
int8_t x394 = 63;
uint32_t x397 = 8946U;
static volatile uint64_t t93 = 177736LLU;
uint32_t x401 = 242164305U;
volatile int8_t x402 = INT8_MIN;
static volatile uint16_t x408 = 2866U;
int32_t t95 = INT32_MAX;
int8_t x409 = -27;
int8_t x410 = -36;
volatile int32_t x412 = INT32_MAX;
int32_t t96 = 0;
int32_t x416 = INT32_MIN;
static int16_t x423 = 1641;


void f0(void) {
	static int8_t x1 = -1;
	static int32_t x2 = -1;
	uint8_t x3 = 39U;
	int64_t t0 = 1764733230121933371LL;

	t0 = (x1&(x2+(x3/x4)));

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = -1;
	volatile int64_t x7 = -1LL;
	uint32_t x8 = 61439222U;
	static int64_t t1 = 29LL;

	t1 = (x5&(x6+(x7/x8)));

	if (t1 != -200916LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 60806338282289LLU;
	int16_t x10 = -574;
	static int32_t x11 = 237;
	static int16_t x12 = -1;
	uint64_t t2 = 18LLU;

	t2 = (x9&(x10+(x11/x12)));

	if (t2 != 60806338281489LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x13 = UINT64_MAX;
	static uint32_t x15 = 22739116U;
	int16_t x16 = INT16_MIN;
	static volatile uint64_t t3 = 1593956748LLU;

	t3 = (x13&(x14+(x15/x16)));

	if (t3 != 4294963615LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = UINT8_MAX;
	int8_t x18 = -49;
	int64_t x20 = 1507LL;
	volatile int64_t t4 = 539902563734299718LL;

	t4 = (x17&(x18+(x19/x20)));

	if (t4 != 98LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 3U;
	int64_t x22 = -1LL;
	static uint32_t x23 = 7U;
	int64_t t5 = -18LL;

	t5 = (x21&(x22+(x23/x24)));

	if (t5 != 3LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x29 = INT16_MIN;
	volatile int8_t x30 = INT8_MIN;
	int64_t x32 = INT64_MIN;

	t6 = (x29&(x30+(x31/x32)));

	if (t6 != -32768LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x33 = 99326U;
	uint32_t x34 = 38261859U;
	int32_t x35 = -6;
	volatile int16_t x36 = 2;
	static uint32_t t7 = 1945600810U;

	t7 = (x33&(x34+(x35/x36)));

	if (t7 != 98400U) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x37 = UINT64_MAX;
	volatile uint8_t x38 = 2U;
	volatile uint32_t x39 = UINT32_MAX;
	volatile int16_t x40 = -1;
	uint64_t t8 = 4LLU;

	t8 = (x37&(x38+(x39/x40)));

	if (t8 != 3LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x41 = 77U;
	uint32_t x42 = UINT32_MAX;
	int16_t x43 = 2;
	volatile int16_t x44 = 2;
	volatile uint32_t t9 = 128277848U;

	t9 = (x41&(x42+(x43/x44)));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x47 = -1;
	int64_t x48 = 3176754982806068297LL;
	volatile int64_t t10 = -95507LL;

	t10 = (x45&(x46+(x47/x48)));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = 1LL;
	int64_t x50 = INT64_MIN;
	uint32_t x51 = 30U;
	volatile int64_t t11 = 21984954LL;

	t11 = (x49&(x50+(x51/x52)));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x53 = 15U;
	int32_t x54 = 4;
	volatile int32_t x55 = INT32_MAX;
	uint32_t x56 = UINT32_MAX;

	t12 = (x53&(x54+(x55/x56)));

	if (t12 != 4U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = INT32_MAX;
	static int8_t x58 = INT8_MAX;
	uint32_t x59 = 189U;
	int16_t x60 = INT16_MAX;
	uint32_t t13 = 142425U;

	t13 = (x57&(x58+(x59/x60)));

	if (t13 != 127U) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = 7865416;
	uint64_t x63 = UINT64_MAX;
	uint8_t x64 = 1U;

	t14 = (x61&(x62+(x63/x64)));

	if (t14 != 7865416LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = INT16_MIN;
	uint64_t x66 = 794081LLU;
	int16_t x67 = INT16_MIN;
	volatile uint64_t t15 = 125758117239959196LLU;

	t15 = (x65&(x66+(x67/x68)));

	if (t15 != 786432LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x73 = 0;
	int8_t x74 = -1;
	uint8_t x75 = UINT8_MAX;
	int8_t x76 = -1;
	volatile int32_t t16 = -22013065;

	t16 = (x73&(x74+(x75/x76)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x77 = 0U;
	volatile uint8_t x78 = 6U;
	volatile uint16_t x79 = 32274U;
	int64_t x80 = -1LL;
	volatile int64_t t17 = -6LL;

	t17 = (x77&(x78+(x79/x80)));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = INT8_MIN;
	uint16_t x82 = UINT16_MAX;
	static int16_t x83 = -1;
	volatile int16_t x84 = INT16_MAX;
	int32_t t18 = 5916;

	t18 = (x81&(x82+(x83/x84)));

	if (t18 != 65408) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x85 = INT64_MAX;
	int8_t x86 = INT8_MIN;
	int32_t x87 = -341194;
	int64_t x88 = -49LL;
	int64_t t19 = 1160643LL;

	t19 = (x85&(x86+(x87/x88)));

	if (t19 != 6835LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x90 = 443205430641LLU;
	uint64_t x91 = 6166689024521405LLU;
	int64_t x92 = INT64_MIN;
	volatile uint64_t t20 = 504323095833LLU;

	t20 = (x89&(x90+(x91/x92)));

	if (t20 != 443205430528LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x94 = UINT16_MAX;
	int16_t x95 = INT16_MAX;
	static int8_t x96 = INT8_MIN;
	static volatile int32_t t21 = 0;

	t21 = (x93&(x94+(x95/x96)));

	if (t21 != 65280) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x97 = INT8_MIN;
	volatile uint16_t x98 = UINT16_MAX;
	int8_t x99 = -1;
	int64_t x100 = -1LL;
	int64_t t22 = -2924LL;

	t22 = (x97&(x98+(x99/x100)));

	if (t22 != 65536LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x101 = UINT64_MAX;
	int64_t x102 = -421378398228277LL;
	static int64_t x103 = INT64_MAX;
	int8_t x104 = INT8_MIN;
	uint64_t t23 = 9306924245604367LLU;

	t23 = (x101&(x102+(x103/x104)));

	if (t23 != 18374265101273395404LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x106 = UINT32_MAX;
	static int16_t x107 = INT16_MIN;
	uint32_t x108 = UINT32_MAX;
	int64_t t24 = -4276315437875786LL;

	t24 = (x105&(x106+(x107/x108)));

	if (t24 != 4269862648LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x113 = INT32_MIN;
	int32_t x114 = -264;
	uint16_t x115 = 21U;
	static volatile int32_t x116 = INT32_MIN;

	t25 = (x113&(x114+(x115/x116)));

	if (t25 != INT32_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x117 = INT16_MAX;
	uint32_t x118 = 9879U;
	uint32_t t26 = 1820U;

	t26 = (x117&(x118+(x119/x120)));

	if (t26 != 9880U) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x121 = 0;
	uint16_t x122 = 6336U;
	uint8_t x123 = 0U;

	t27 = (x121&(x122+(x123/x124)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x125 = UINT32_MAX;
	static volatile int64_t x126 = INT64_MIN;
	uint16_t x127 = 972U;
	int64_t t28 = 14LL;

	t28 = (x125&(x126+(x127/x128)));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x129 = -63;
	volatile uint16_t x130 = UINT16_MAX;
	static uint16_t x131 = 4838U;
	int8_t x132 = INT8_MAX;

	t29 = (x129&(x130+(x131/x132)));

	if (t29 != 65537) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x133 = INT16_MIN;
	static int64_t x136 = INT64_MIN;

	t30 = (x133&(x134+(x135/x136)));

	if (t30 != -32768LL) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int16_t x137 = INT16_MAX;
	static uint32_t x138 = 12U;
	int16_t x140 = -1;
	volatile uint64_t t31 = 170105062LLU;

	t31 = (x137&(x138+(x139/x140)));

	if (t31 != 12LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x142 = 6151432;
	int8_t x144 = INT8_MAX;
	static volatile int32_t t32 = -25421;

	t32 = (x141&(x142+(x143/x144)));

	if (t32 != 6151432) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x145 = INT16_MIN;
	int32_t x146 = INT32_MIN;
	volatile uint8_t x147 = 1U;
	int64_t x148 = 15033433065200LL;

	t33 = (x145&(x146+(x147/x148)));

	if (t33 != -2147483648LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x149 = -1;
	uint8_t x150 = 71U;
	static int32_t x152 = INT32_MAX;
	volatile int32_t t34 = -12654754;

	t34 = (x149&(x150+(x151/x152)));

	if (t34 != 72) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x153 = INT64_MIN;
	volatile int64_t x154 = 473005682954LL;
	int8_t x155 = -1;
	int16_t x156 = INT16_MIN;
	int64_t t35 = -431510489878540505LL;

	t35 = (x153&(x154+(x155/x156)));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x157 = INT16_MIN;
	int16_t x158 = INT16_MAX;
	int64_t x159 = 138232885113209LL;
	uint16_t x160 = 338U;
	volatile int64_t t36 = -1560753997090288LL;

	t36 = (x157&(x158+(x159/x160)));

	if (t36 != 408973049856LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x161 = INT8_MIN;
	int8_t x163 = -1;
	int16_t x164 = -1;
	static volatile uint32_t t37 = 6451621U;

	t37 = (x161&(x162+(x163/x164)));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x165 = -1774449LL;
	int32_t x166 = 656160896;
	volatile uint8_t x167 = 23U;
	int32_t x168 = -1;
	int64_t t38 = -12616909LL;

	t38 = (x165&(x166+(x167/x168)));

	if (t38 != 654583817LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x169 = INT8_MAX;
	int32_t x172 = 549;
	static int32_t t39 = 0;

	t39 = (x169&(x170+(x171/x172)));

	if (t39 != 23) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x173 = UINT64_MAX;
	volatile int16_t x176 = -1;
	volatile uint64_t t40 = 25118562949062203LLU;

	t40 = (x173&(x174+(x175/x176)));

	if (t40 != 65473LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x177 = 163;
	uint64_t x178 = UINT64_MAX;
	uint64_t x179 = UINT64_MAX;
	int8_t x180 = INT8_MAX;

	t41 = (x177&(x178+(x179/x180)));

	if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x181 = 568U;
	int32_t x182 = -1;
	int64_t x183 = INT64_MIN;
	volatile int16_t x184 = INT16_MAX;
	static volatile int64_t t42 = -30895242868673LL;

	t42 = (x181&(x182+(x183/x184)));

	if (t42 != 560LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x185 = -121059;
	int8_t x186 = INT8_MIN;
	int32_t x187 = 168374094;
	int16_t x188 = -79;
	volatile int32_t t43 = 157997266;

	t43 = (x185&(x186+(x187/x188)));

	if (t43 != -2219511) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x189 = -5;
	int8_t x190 = -1;
	int8_t x191 = INT8_MIN;
	int8_t x192 = INT8_MAX;
	int32_t t44 = 12026279;

	t44 = (x189&(x190+(x191/x192)));

	if (t44 != -6) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x193 = 11480851;
	uint32_t x194 = 1005800U;
	int8_t x196 = 59;
	volatile uint32_t t45 = 252U;

	t45 = (x193&(x194+(x195/x196)));

	if (t45 != 985088U) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x197 = 31451222;
	int32_t x198 = INT32_MIN;
	volatile int32_t x199 = -45;
	int8_t x200 = INT8_MAX;

	t46 = (x197&(x198+(x199/x200)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x201 = 234U;
	uint64_t x202 = UINT64_MAX;
	static uint16_t x203 = 526U;
	uint8_t x204 = UINT8_MAX;
	volatile uint64_t t47 = 107226767773843LLU;

	t47 = (x201&(x202+(x203/x204)));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x205 = INT8_MIN;
	int16_t x206 = -1;
	static volatile int64_t x207 = -1LL;
	int32_t x208 = -1;

	t48 = (x205&(x206+(x207/x208)));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x209 = INT64_MIN;
	int8_t x210 = -1;
	static uint32_t x211 = UINT32_MAX;
	uint8_t x212 = 5U;

	t49 = (x209&(x210+(x211/x212)));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x213 = -1;
	volatile int8_t x215 = INT8_MIN;
	int16_t x216 = 2;

	t50 = (x213&(x214+(x215/x216)));

	if (t50 != 383422U) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x217 = UINT8_MAX;
	int8_t x219 = INT8_MAX;
	uint64_t t51 = 0LLU;

	t51 = (x217&(x218+(x219/x220)));

	if (t51 != 159LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x221 = UINT16_MAX;
	static volatile int64_t x223 = INT64_MIN;
	static uint64_t x224 = UINT64_MAX;
	uint64_t t52 = 254691693818LLU;

	t52 = (x221&(x222+(x223/x224)));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x225 = INT16_MIN;
	volatile int32_t x227 = INT32_MIN;

	t53 = (x225&(x226+(x227/x228)));

	if (t53 != 119275520U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x230 = INT32_MIN;
	volatile uint8_t x231 = 4U;
	int64_t x232 = 1257LL;

	t54 = (x229&(x230+(x231/x232)));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x233 = INT64_MIN;
	int32_t x234 = -1;
	uint8_t x235 = 43U;
	volatile int64_t t55 = 6405LL;

	t55 = (x233&(x234+(x235/x236)));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x237 = INT16_MAX;
	volatile int16_t x240 = -1;
	volatile uint32_t t56 = 1762047241U;

	t56 = (x237&(x238+(x239/x240)));

	if (t56 != 101U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x242 = UINT64_MAX;
	static uint16_t x244 = UINT16_MAX;
	volatile uint64_t t57 = 1614585200231291544LLU;

	t57 = (x241&(x242+(x243/x244)));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x245 = 114LLU;
	int8_t x247 = INT8_MIN;
	uint64_t x248 = UINT64_MAX;
	static volatile uint64_t t58 = 147167321899LLU;

	t58 = (x245&(x246+(x247/x248)));

	if (t58 != 112LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x249 = 11U;
	static int8_t x250 = INT8_MIN;
	static int16_t x251 = INT16_MIN;
	int8_t x252 = INT8_MAX;
	uint32_t t59 = 366907U;

	t59 = (x249&(x250+(x251/x252)));

	if (t59 != 10U) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x253 = INT64_MIN;
	int32_t x254 = 988618;
	int64_t x255 = -1LL;
	uint32_t x256 = UINT32_MAX;
	volatile int64_t t60 = 2LL;

	t60 = (x253&(x254+(x255/x256)));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x257 = UINT64_MAX;
	uint8_t x260 = UINT8_MAX;
	uint64_t t61 = 2031492934LLU;

	t61 = (x257&(x258+(x259/x260)));

	if (t61 != 18410573987290513279LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t t62 = 2006998374607LL;

	t62 = (x265&(x266+(x267/x268)));

	if (t62 != 20LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x270 = 46632087U;
	uint64_t x271 = 412345LLU;
	static uint8_t x272 = UINT8_MAX;
	uint64_t t63 = 119462520519762LLU;

	t63 = (x269&(x270+(x271/x272)));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x273 = 9;
	volatile int8_t x275 = INT8_MIN;
	int64_t x276 = INT64_MAX;
	static volatile int64_t t64 = -1135LL;

	t64 = (x273&(x274+(x275/x276)));

	if (t64 != 1LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x279 = INT64_MAX;
	static int8_t x280 = 62;

	t65 = (x277&(x278+(x279/x280)));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x281 = 1U;
	uint32_t x282 = 11U;
	int64_t t66 = -11543628LL;

	t66 = (x281&(x282+(x283/x284)));

	if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x285 = -1LL;
	int16_t x286 = INT16_MAX;
	volatile int32_t x287 = INT32_MIN;
	uint8_t x288 = UINT8_MAX;
	int64_t t67 = -1LL;

	t67 = (x285&(x286+(x287/x288)));

	if (t67 != -8388737LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x289 = INT16_MIN;
	static int8_t x290 = INT8_MIN;
	int64_t x291 = INT64_MIN;
	static int16_t x292 = 23;
	int64_t t68 = -310LL;

	t68 = (x289&(x290+(x291/x292)));

	if (t68 != -401016175515435008LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x294 = -1LL;
	volatile uint8_t x295 = UINT8_MAX;
	static uint8_t x296 = 103U;
	volatile int64_t t69 = -2523403LL;

	t69 = (x293&(x294+(x295/x296)));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x297 = 6;
	uint32_t x299 = 36316578U;
	volatile uint32_t t70 = 119774443U;

	t70 = (x297&(x298+(x299/x300)));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x302 = 9U;
	uint32_t x303 = 87U;
	uint32_t t71 = 1704566353U;

	t71 = (x301&(x302+(x303/x304)));

	if (t71 != 9U) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x309 = 16094U;
	uint16_t x310 = 6951U;
	uint8_t x311 = 15U;
	static uint32_t x312 = 796883954U;
	static volatile uint32_t t72 = 109606827U;

	t72 = (x309&(x310+(x311/x312)));

	if (t72 != 6662U) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x313 = -22;
	int64_t x314 = 4391203514481LL;
	static uint16_t x315 = 0U;
	int16_t x316 = -1;
	static volatile int64_t t73 = -92135314827886LL;

	t73 = (x313&(x314+(x315/x316)));

	if (t73 != 4391203514464LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x317 = 65U;
	int16_t x318 = INT16_MIN;
	static int8_t x319 = 3;
	int32_t x320 = 11;
	volatile int32_t t74 = -5934558;

	t74 = (x317&(x318+(x319/x320)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x321 = 0;
	int32_t x322 = INT32_MIN;
	int32_t x323 = -1;
	int8_t x324 = INT8_MAX;
	volatile int32_t t75 = 361117442;

	t75 = (x321&(x322+(x323/x324)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x326 = -2195;
	static volatile int16_t x327 = INT16_MIN;
	int32_t x328 = 5;
	static volatile int32_t t76 = -4333;

	t76 = (x325&(x326+(x327/x328)));

	if (t76 != 68) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x329 = -1;
	int8_t x330 = INT8_MAX;
	volatile uint64_t x332 = UINT64_MAX;
	uint64_t t77 = 7918LLU;

	t77 = (x329&(x330+(x331/x332)));

	if (t77 != 128LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x333 = 328666U;
	volatile int16_t x334 = INT16_MAX;
	volatile int64_t x335 = INT64_MIN;
	int8_t x336 = INT8_MIN;
	int64_t t78 = 1211LL;

	t78 = (x333&(x334+(x335/x336)));

	if (t78 != 986LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x338 = 1569022LLU;
	int16_t x339 = 5703;
	int32_t x340 = 9479177;
	uint64_t t79 = 5469854863LLU;

	t79 = (x337&(x338+(x339/x340)));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x341 = -469;
	int8_t x342 = INT8_MIN;
	int8_t x343 = -1;
	uint32_t x344 = 146544563U;
	static volatile uint32_t t80 = 49315U;

	t80 = (x341&(x342+(x343/x344)));

	if (t80 != 4294966793U) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x345 = INT64_MIN;
	int32_t x347 = 1741;
	static int8_t x348 = -1;
	static int64_t t81 = -351LL;

	t81 = (x345&(x346+(x347/x348)));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x353 = 56LL;
	static int8_t x355 = -1;
	static uint64_t x356 = 17065LLU;
	uint64_t t82 = 587093588111369LLU;

	t82 = (x353&(x354+(x355/x356)));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x357 = 219281LL;
	volatile int32_t x358 = -1;
	uint32_t x359 = UINT32_MAX;
	static int64_t t83 = 3266195169604919435LL;

	t83 = (x357&(x358+(x359/x360)));

	if (t83 != 65536LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x361 = INT32_MIN;
	volatile int64_t x362 = 9595LL;
	volatile int64_t t84 = 15953LL;

	t84 = (x361&(x362+(x363/x364)));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x365 = INT32_MIN;
	int32_t x367 = -1;
	int64_t x368 = -4072417893149LL;

	t85 = (x365&(x366+(x367/x368)));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x370 = INT32_MAX;
	int8_t x372 = 60;
	int32_t t86 = -9373776;

	t86 = (x369&(x370+(x371/x372)));

	if (t86 != 9) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x373 = UINT32_MAX;
	int8_t x374 = INT8_MIN;
	static int16_t x376 = INT16_MAX;

	t87 = (x373&(x374+(x375/x376)));

	if (t87 != 4294967168LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x378 = -196031902762416LL;
	static uint64_t x379 = 2367234885010431061LLU;
	int16_t x380 = INT16_MAX;
	uint64_t t88 = 89129756LLU;

	t88 = (x377&(x378+(x379/x380)));

	if (t88 != 198657LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x381 = INT64_MIN;
	int64_t x382 = 882317043698734LL;
	uint64_t x383 = 1853315LLU;
	int32_t x384 = INT32_MAX;
	static uint64_t t89 = 4LLU;

	t89 = (x381&(x382+(x383/x384)));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x385 = 0LLU;
	uint32_t x386 = 893613U;
	int64_t x387 = INT64_MIN;
	int16_t x388 = -501;
	volatile uint64_t t90 = 1826408196447433LLU;

	t90 = (x385&(x386+(x387/x388)));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x389 = -1;
	int16_t x390 = INT16_MAX;
	static volatile uint64_t x391 = UINT64_MAX;
	int8_t x392 = INT8_MIN;
	volatile uint64_t t91 = 1056816245007LLU;

	t91 = (x389&(x390+(x391/x392)));

	if (t91 != 32768LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x393 = UINT16_MAX;
	uint16_t x395 = 609U;
	volatile int64_t x396 = INT64_MIN;
	int64_t t92 = -102065688LL;

	t92 = (x393&(x394+(x395/x396)));

	if (t92 != 63LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x398 = -1;
	int64_t x399 = INT64_MAX;
	uint64_t x400 = 27398859825792120LLU;

	t93 = (x397&(x398+(x399/x400)));

	if (t93 != 66LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x403 = INT64_MAX;
	uint32_t x404 = 115684U;
	volatile int64_t t94 = -68130927775LL;

	t94 = (x401&(x402+(x403/x404)));

	if (t94 != 174391825LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x405 = INT32_MAX;
	int8_t x406 = -1;
	int8_t x407 = INT8_MIN;

	t95 = (x405&(x406+(x407/x408)));

	if (t95 != INT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x411 = INT8_MAX;

	t96 = (x409&(x410+(x411/x412)));

	if (t96 != -60) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x413 = INT8_MIN;
	uint16_t x414 = 24338U;
	int16_t x415 = -1863;
	int32_t t97 = -4;

	t97 = (x413&(x414+(x415/x416)));

	if (t97 != 24320) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int8_t x417 = -1;
	static int32_t x418 = -1;
	int32_t x419 = -1020141;
	uint8_t x420 = 49U;
	static volatile int32_t t98 = 187;

	t98 = (x417&(x418+(x419/x420)));

	if (t98 != -20820) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x421 = -1465268;
	uint64_t x422 = UINT64_MAX;
	int16_t x424 = INT16_MIN;
	volatile uint64_t t99 = 541302972334LLU;

	t99 = (x421&(x422+(x423/x424)));

	if (t99 != 18446744073708086348LLU) { NG(); } else { ; }
	
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

