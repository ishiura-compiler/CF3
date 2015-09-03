#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x29 = 11089U;
int32_t t6 = -169;
volatile int32_t t7 = 4;
uint32_t x42 = UINT32_MAX;
uint64_t x47 = 463846571LLU;
uint32_t x48 = 7701U;
int8_t x52 = INT8_MIN;
volatile int32_t t10 = -150;
static int32_t x55 = -1;
int64_t t11 = 6LL;
uint16_t x61 = 131U;
int32_t t13 = -28110;
static int32_t x65 = INT32_MIN;
static uint32_t x67 = 7U;
static int16_t x68 = -16;
int8_t x70 = INT8_MAX;
uint32_t x77 = 629U;
volatile int64_t t17 = 32167773LL;
int64_t x81 = -1LL;
volatile int32_t x86 = INT32_MAX;
volatile int32_t t19 = -2744689;
int32_t t20 = 3;
int16_t x107 = 187;
int8_t x110 = -1;
static int32_t x113 = INT32_MIN;
uint8_t x116 = 54U;
int16_t x117 = -3802;
static volatile int64_t x125 = -9490888338585LL;
uint64_t x126 = 1952LLU;
static volatile int16_t x128 = INT16_MIN;
volatile uint64_t t28 = 81168689085067LLU;
int64_t t30 = 65924190973016LL;
int32_t x140 = -24562;
int64_t x142 = -608858119955832LL;
volatile int64_t t32 = 3505807299LL;
int64_t t34 = 2125246117160380645LL;
int64_t x154 = INT64_MAX;
int64_t x162 = INT64_MAX;
int16_t x173 = INT16_MIN;
int16_t x183 = -1;
int32_t x191 = 402252;
int8_t x194 = INT8_MIN;
uint16_t x202 = 1U;
uint8_t x208 = 125U;
uint64_t t47 = 5228LLU;
volatile uint64_t t48 = 272728LLU;
volatile uint8_t x214 = UINT8_MAX;
int32_t t49 = 327112818;
uint16_t x217 = UINT16_MAX;
static int16_t x224 = INT16_MAX;
static volatile int64_t x227 = -1LL;
int64_t x230 = -1LL;
volatile uint32_t x238 = UINT32_MAX;
int8_t x242 = INT8_MIN;
volatile int8_t x250 = INT8_MIN;
uint64_t x253 = 46071349883690332LLU;
static uint16_t x255 = 26066U;
uint16_t x258 = 1653U;
int8_t x260 = INT8_MIN;
volatile int32_t t59 = 44;
volatile int32_t x263 = 5771899;
volatile int32_t x265 = INT32_MIN;
static int32_t x268 = INT32_MIN;
static volatile uint64_t t62 = 4815415224LLU;
int32_t x281 = INT32_MIN;
int32_t x283 = INT32_MIN;
int16_t x285 = -1;
int16_t x286 = -94;
volatile int16_t x289 = -1;
static int64_t x290 = -1LL;
int8_t x291 = INT8_MAX;
int16_t x292 = 5717;
uint16_t x298 = 5U;
uint64_t x302 = 9587889063144LLU;
volatile int32_t x304 = INT32_MIN;
int8_t x310 = -2;
static int8_t x313 = 1;
int64_t x316 = 80899755666474438LL;
int32_t t70 = -2746;
int32_t x317 = -7979;
static int8_t x323 = INT8_MIN;
static volatile int64_t x325 = INT64_MIN;
volatile uint16_t x326 = 1U;
int32_t x330 = -1;
static volatile int16_t x335 = -1;
int16_t x342 = -1;
int64_t x347 = -557126198536728482LL;
int32_t x353 = -10990;
int64_t x356 = -110345LL;
int32_t x363 = 5127913;
int64_t t86 = -3159609339LL;
int16_t x385 = INT16_MAX;
uint8_t x389 = 19U;
int64_t x391 = INT64_MAX;
uint16_t x395 = 903U;
uint64_t x397 = 22118086525LLU;
volatile int16_t x401 = INT16_MAX;
int64_t x405 = INT64_MIN;
int32_t x414 = INT32_MAX;
uint16_t x419 = 41U;
volatile int16_t x422 = INT16_MIN;
volatile int64_t t97 = -203335505440757458LL;
uint64_t x433 = 11699011954LLU;


void f0(void) {
	int16_t x9 = INT16_MAX;
	int32_t x10 = -1;
	static uint32_t x11 = 654U;
	int16_t x12 = 195;
	volatile int32_t t0 = -1;

	t0 = (x9/(x10-(x11==x12)));

	if (t0 != -32767) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x13 = 3;
	uint64_t x14 = UINT64_MAX;
	int16_t x15 = INT16_MAX;
	int64_t x16 = 130127LL;
	volatile uint64_t t1 = 48604LLU;

	t1 = (x13/(x14-(x15==x16)));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x17 = UINT64_MAX;
	int64_t x18 = 278385728023848LL;
	int8_t x19 = 1;
	uint8_t x20 = 20U;
	uint64_t t2 = 29852LLU;

	t2 = (x17/(x18-(x19==x20)));

	if (t2 != 66263LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x21 = 0;
	uint8_t x22 = 10U;
	volatile int64_t x23 = INT64_MIN;
	int16_t x24 = INT16_MIN;
	volatile int32_t t3 = -50381210;

	t3 = (x21/(x22-(x23==x24)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x25 = 0;
	int8_t x26 = -1;
	int8_t x27 = 1;
	static int64_t x28 = -1LL;
	volatile int32_t t4 = 0;

	t4 = (x25/(x26-(x27==x28)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x30 = INT64_MAX;
	int8_t x31 = INT8_MIN;
	static int16_t x32 = 130;
	int64_t t5 = 63477300LL;

	t5 = (x29/(x30-(x31==x32)));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x33 = -1;
	int8_t x34 = INT8_MIN;
	int32_t x35 = -33575328;
	int8_t x36 = INT8_MIN;

	t6 = (x33/(x34-(x35==x36)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x37 = INT8_MAX;
	static uint8_t x38 = 8U;
	static volatile int8_t x39 = -1;
	int8_t x40 = INT8_MAX;

	t7 = (x37/(x38-(x39==x40)));

	if (t7 != 15) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x41 = 0U;
	int64_t x43 = 7LL;
	static int16_t x44 = -146;
	uint32_t t8 = 22465361U;

	t8 = (x41/(x42-(x43==x44)));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x45 = INT64_MIN;
	int64_t x46 = 787LL;
	static int64_t t9 = -15LL;

	t9 = (x45/(x46-(x47==x48)));

	if (t9 != -11719659513157275LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x49 = INT16_MIN;
	int8_t x50 = -1;
	volatile int16_t x51 = -16339;

	t10 = (x49/(x50-(x51==x52)));

	if (t10 != 32768) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x53 = INT64_MAX;
	int8_t x54 = INT8_MIN;
	static int8_t x56 = INT8_MAX;

	t11 = (x53/(x54-(x55==x56)));

	if (t11 != -72057594037927935LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x57 = 0U;
	volatile int32_t x58 = INT32_MIN;
	uint32_t x59 = 19372U;
	int16_t x60 = -1;
	static int32_t t12 = -653850740;

	t12 = (x57/(x58-(x59==x60)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x62 = INT32_MIN;
	int8_t x63 = -7;
	int64_t x64 = -1LL;

	t13 = (x61/(x62-(x63==x64)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x66 = INT64_MIN;
	static int64_t t14 = 105537LL;

	t14 = (x65/(x66-(x67==x68)));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x69 = UINT32_MAX;
	uint64_t x71 = 2LLU;
	volatile int64_t x72 = -1LL;
	uint32_t t15 = 58U;

	t15 = (x69/(x70-(x71==x72)));

	if (t15 != 33818640U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x73 = INT64_MIN;
	volatile uint16_t x74 = 1606U;
	static uint8_t x75 = UINT8_MAX;
	int16_t x76 = -1;
	int64_t t16 = 1LL;

	t16 = (x73/(x74-(x75==x76)));

	if (t16 != -5743071006758889LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x78 = -1LL;
	volatile int32_t x79 = INT32_MIN;
	int8_t x80 = INT8_MIN;

	t17 = (x77/(x78-(x79==x80)));

	if (t17 != -629LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x82 = UINT16_MAX;
	int64_t x83 = -1LL;
	uint8_t x84 = UINT8_MAX;
	volatile int64_t t18 = 1284175873551585310LL;

	t18 = (x81/(x82-(x83==x84)));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x85 = -1;
	volatile uint32_t x87 = UINT32_MAX;
	uint64_t x88 = UINT64_MAX;

	t19 = (x85/(x86-(x87==x88)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x93 = -158;
	int8_t x94 = INT8_MAX;
	uint64_t x95 = 4236863029655LLU;
	volatile int64_t x96 = INT64_MIN;

	t20 = (x93/(x94-(x95==x96)));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x97 = INT64_MAX;
	int32_t x98 = INT32_MIN;
	uint32_t x99 = 57112725U;
	uint32_t x100 = 2403173U;
	int64_t t21 = -1576646165719839LL;

	t21 = (x97/(x98-(x99==x100)));

	if (t21 != -4294967295LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x101 = INT8_MAX;
	int16_t x102 = 90;
	uint32_t x103 = 515340U;
	uint64_t x104 = 35288735780LLU;
	volatile int32_t t22 = 258201667;

	t22 = (x101/(x102-(x103==x104)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x105 = INT8_MIN;
	uint16_t x106 = UINT16_MAX;
	uint64_t x108 = UINT64_MAX;
	volatile int32_t t23 = 43;

	t23 = (x105/(x106-(x107==x108)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x109 = -1LL;
	int16_t x111 = INT16_MIN;
	int8_t x112 = -1;
	static volatile int64_t t24 = -3468606977304786202LL;

	t24 = (x109/(x110-(x111==x112)));

	if (t24 != 1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x114 = 10232;
	int32_t x115 = -1;
	volatile int32_t t25 = 3;

	t25 = (x113/(x114-(x115==x116)));

	if (t25 != -209879) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x118 = INT64_MIN;
	volatile int16_t x119 = INT16_MIN;
	int8_t x120 = INT8_MIN;
	int64_t t26 = 3LL;

	t26 = (x117/(x118-(x119==x120)));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x121 = -1;
	static int16_t x122 = -1;
	static int8_t x123 = -1;
	volatile int16_t x124 = INT16_MIN;
	int32_t t27 = 0;

	t27 = (x121/(x122-(x123==x124)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x127 = INT16_MIN;

	t28 = (x125/(x126-(x127==x128)));

	if (t28 != 9455015162901698LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x129 = INT64_MIN;
	uint32_t x130 = 4225590U;
	uint8_t x131 = UINT8_MAX;
	volatile uint64_t x132 = UINT64_MAX;
	int64_t t29 = 4431479095939LL;

	t29 = (x129/(x130-(x131==x132)));

	if (t29 != -2182741827024LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x133 = 60LL;
	static int64_t x134 = INT64_MIN;
	volatile uint32_t x135 = 26U;
	uint16_t x136 = 8U;

	t30 = (x133/(x134-(x135==x136)));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x137 = INT16_MIN;
	int8_t x138 = INT8_MIN;
	uint32_t x139 = 693U;
	int32_t t31 = 2;

	t31 = (x137/(x138-(x139==x140)));

	if (t31 != 256) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int16_t x141 = INT16_MIN;
	volatile int16_t x143 = INT16_MIN;
	static int16_t x144 = INT16_MIN;

	t32 = (x141/(x142-(x143==x144)));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x145 = INT32_MIN;
	int16_t x146 = INT16_MIN;
	uint8_t x147 = 0U;
	int64_t x148 = INT64_MAX;
	volatile int32_t t33 = 8579047;

	t33 = (x145/(x146-(x147==x148)));

	if (t33 != 65536) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x149 = 31137U;
	int64_t x150 = -1LL;
	int32_t x151 = -190245;
	int32_t x152 = INT32_MIN;

	t34 = (x149/(x150-(x151==x152)));

	if (t34 != -31137LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x153 = INT64_MAX;
	int8_t x155 = INT8_MIN;
	volatile uint8_t x156 = 1U;
	int64_t t35 = 145LL;

	t35 = (x153/(x154-(x155==x156)));

	if (t35 != 1LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x157 = -1;
	volatile uint64_t x158 = UINT64_MAX;
	static int16_t x159 = INT16_MIN;
	volatile uint16_t x160 = UINT16_MAX;
	volatile uint64_t t36 = 741LLU;

	t36 = (x157/(x158-(x159==x160)));

	if (t36 != 1LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x161 = 68U;
	int32_t x163 = -1;
	volatile uint64_t x164 = 160290005468617LLU;
	volatile int64_t t37 = 3539006888304921026LL;

	t37 = (x161/(x162-(x163==x164)));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x165 = -1;
	uint8_t x166 = 23U;
	volatile uint32_t x167 = 14188U;
	volatile int8_t x168 = -1;
	volatile int32_t t38 = -688638721;

	t38 = (x165/(x166-(x167==x168)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x174 = INT32_MAX;
	int16_t x175 = -22;
	uint32_t x176 = UINT32_MAX;
	int32_t t39 = -495;

	t39 = (x173/(x174-(x175==x176)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x177 = UINT16_MAX;
	int64_t x178 = -1LL;
	int16_t x179 = INT16_MIN;
	uint32_t x180 = 209913U;
	volatile int64_t t40 = -2015551414LL;

	t40 = (x177/(x178-(x179==x180)));

	if (t40 != -65535LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x181 = -1022;
	static int8_t x182 = INT8_MIN;
	int16_t x184 = INT16_MAX;
	static volatile int32_t t41 = -468;

	t41 = (x181/(x182-(x183==x184)));

	if (t41 != 7) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x185 = INT32_MAX;
	int64_t x186 = 129LL;
	int8_t x187 = -1;
	int8_t x188 = INT8_MIN;
	volatile int64_t t42 = -33439485LL;

	t42 = (x185/(x186-(x187==x188)));

	if (t42 != 16647160LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x189 = INT32_MIN;
	uint8_t x190 = 17U;
	int16_t x192 = INT16_MAX;
	volatile int32_t t43 = 512545413;

	t43 = (x189/(x190-(x191==x192)));

	if (t43 != -126322567) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x193 = -1;
	volatile int64_t x195 = 29652865955683453LL;
	static int8_t x196 = INT8_MIN;
	volatile int32_t t44 = 5891;

	t44 = (x193/(x194-(x195==x196)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x197 = 1;
	int64_t x198 = INT64_MAX;
	static volatile uint64_t x199 = UINT64_MAX;
	int16_t x200 = -731;
	static volatile int64_t t45 = 58563103688050079LL;

	t45 = (x197/(x198-(x199==x200)));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x201 = INT8_MIN;
	int16_t x203 = 5144;
	uint16_t x204 = UINT16_MAX;
	volatile int32_t t46 = 17;

	t46 = (x201/(x202-(x203==x204)));

	if (t46 != -128) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x205 = INT8_MIN;
	uint64_t x206 = 840884057381939LLU;
	static volatile int8_t x207 = 1;

	t47 = (x205/(x206-(x207==x208)));

	if (t47 != 21937LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x209 = INT16_MIN;
	static volatile uint64_t x210 = 8977414201511862160LLU;
	int32_t x211 = INT32_MIN;
	int16_t x212 = -1;

	t48 = (x209/(x210-(x211==x212)));

	if (t48 != 2LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x213 = 0U;
	int16_t x215 = INT16_MAX;
	uint8_t x216 = UINT8_MAX;

	t49 = (x213/(x214-(x215==x216)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x218 = 43411959817LLU;
	static volatile uint8_t x219 = 0U;
	uint8_t x220 = 4U;
	volatile uint64_t t50 = 332334LLU;

	t50 = (x217/(x218-(x219==x220)));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x221 = INT8_MIN;
	static int32_t x222 = 103;
	uint16_t x223 = 583U;
	int32_t t51 = -280;

	t51 = (x221/(x222-(x223==x224)));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x225 = -358746015455LL;
	int32_t x226 = -352;
	int8_t x228 = INT8_MIN;
	volatile int64_t t52 = -297879595LL;

	t52 = (x225/(x226-(x227==x228)));

	if (t52 != 1019164816LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x229 = 60;
	volatile int32_t x231 = INT32_MIN;
	int16_t x232 = INT16_MIN;
	int64_t t53 = 258LL;

	t53 = (x229/(x230-(x231==x232)));

	if (t53 != -60LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x237 = 146;
	int16_t x239 = 0;
	static int8_t x240 = INT8_MAX;
	uint32_t t54 = 13U;

	t54 = (x237/(x238-(x239==x240)));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x241 = -1;
	uint8_t x243 = 1U;
	int64_t x244 = INT64_MIN;
	int32_t t55 = 81;

	t55 = (x241/(x242-(x243==x244)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x245 = UINT64_MAX;
	int16_t x246 = INT16_MIN;
	volatile int8_t x247 = INT8_MIN;
	static uint8_t x248 = UINT8_MAX;
	static volatile uint64_t t56 = 90LLU;

	t56 = (x245/(x246-(x247==x248)));

	if (t56 != 1LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x249 = 17U;
	int16_t x251 = -9776;
	static volatile int32_t x252 = INT32_MIN;
	int32_t t57 = 28295900;

	t57 = (x249/(x250-(x251==x252)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x254 = -1;
	int32_t x256 = INT32_MIN;
	static volatile uint64_t t58 = 820456979466LLU;

	t58 = (x253/(x254-(x255==x256)));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x257 = 0;
	volatile uint32_t x259 = UINT32_MAX;

	t59 = (x257/(x258-(x259==x260)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x261 = INT16_MIN;
	int64_t x262 = INT64_MIN;
	int8_t x264 = -1;
	int64_t t60 = -2090517625LL;

	t60 = (x261/(x262-(x263==x264)));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x266 = 214;
	volatile int8_t x267 = 3;
	volatile int32_t t61 = -230;

	t61 = (x265/(x266-(x267==x268)));

	if (t61 != -10034970) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x273 = 42612848LLU;
	uint16_t x274 = UINT16_MAX;
	volatile int32_t x275 = 1;
	static uint8_t x276 = UINT8_MAX;

	t62 = (x273/(x274-(x275==x276)));

	if (t62 != 650LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x282 = INT16_MIN;
	int16_t x284 = INT16_MIN;
	int32_t t63 = 1305;

	t63 = (x281/(x282-(x283==x284)));

	if (t63 != 65536) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x287 = -1;
	int8_t x288 = -5;
	volatile int32_t t64 = -57642998;

	t64 = (x285/(x286-(x287==x288)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t t65 = 134649670640414107LL;

	t65 = (x289/(x290-(x291==x292)));

	if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x293 = INT32_MIN;
	volatile int64_t x294 = INT64_MIN;
	int8_t x295 = INT8_MAX;
	static uint64_t x296 = UINT64_MAX;
	int64_t t66 = 56687140LL;

	t66 = (x293/(x294-(x295==x296)));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x297 = 10539725961852895LL;
	int32_t x299 = -3874329;
	static int64_t x300 = INT64_MIN;
	int64_t t67 = 10603489554LL;

	t67 = (x297/(x298-(x299==x300)));

	if (t67 != 2107945192370579LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x301 = -19;
	int16_t x303 = INT16_MIN;
	uint64_t t68 = 55220345235777LLU;

	t68 = (x301/(x302-(x303==x304)));

	if (t68 != 1923963LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x309 = 202U;
	uint16_t x311 = UINT16_MAX;
	int16_t x312 = -7556;
	static int32_t t69 = 2;

	t69 = (x309/(x310-(x311==x312)));

	if (t69 != -101) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x314 = INT32_MIN;
	static uint16_t x315 = 9U;

	t70 = (x313/(x314-(x315==x316)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x318 = -19;
	volatile int64_t x319 = -1895429LL;
	static int16_t x320 = INT16_MAX;
	int32_t t71 = 207124;

	t71 = (x317/(x318-(x319==x320)));

	if (t71 != 419) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x321 = INT64_MIN;
	volatile uint32_t x322 = 828739844U;
	volatile int8_t x324 = 15;
	volatile int64_t t72 = 7477594833739LL;

	t72 = (x321/(x322-(x323==x324)));

	if (t72 != -11129393745LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x327 = 1U;
	uint8_t x328 = 13U;
	volatile int64_t t73 = INT64_MIN;

	t73 = (x325/(x326-(x327==x328)));

	if (t73 != INT64_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x329 = 25;
	uint64_t x331 = 7LLU;
	volatile int8_t x332 = -1;
	int32_t t74 = 31;

	t74 = (x329/(x330-(x331==x332)));

	if (t74 != -25) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x333 = INT8_MIN;
	int64_t x334 = INT64_MIN;
	uint64_t x336 = 112964019862688LLU;
	int64_t t75 = 252545978184LL;

	t75 = (x333/(x334-(x335==x336)));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x341 = 9U;
	uint8_t x343 = 5U;
	int64_t x344 = -1LL;
	volatile uint32_t t76 = 75192U;

	t76 = (x341/(x342-(x343==x344)));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x345 = INT32_MIN;
	uint16_t x346 = 7574U;
	uint16_t x348 = UINT16_MAX;
	int32_t t77 = -6686799;

	t77 = (x345/(x346-(x347==x348)));

	if (t77 != -283533) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x349 = INT8_MIN;
	int32_t x350 = INT32_MIN;
	static volatile int32_t x351 = 477873256;
	static uint32_t x352 = 28242U;
	volatile int32_t t78 = 1488295;

	t78 = (x349/(x350-(x351==x352)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x354 = UINT8_MAX;
	int64_t x355 = -1LL;
	static int32_t t79 = 5818345;

	t79 = (x353/(x354-(x355==x356)));

	if (t79 != -43) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x357 = 32;
	int16_t x358 = INT16_MIN;
	uint64_t x359 = 6950305958LLU;
	volatile int64_t x360 = -1LL;
	static int32_t t80 = -27309539;

	t80 = (x357/(x358-(x359==x360)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x361 = UINT64_MAX;
	int32_t x362 = INT32_MIN;
	uint32_t x364 = 19652U;
	volatile uint64_t t81 = 33215758234LLU;

	t81 = (x361/(x362-(x363==x364)));

	if (t81 != 1LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x365 = INT8_MIN;
	int8_t x366 = INT8_MAX;
	int32_t x367 = INT32_MIN;
	int64_t x368 = INT64_MIN;
	volatile int32_t t82 = -4052750;

	t82 = (x365/(x366-(x367==x368)));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x369 = UINT32_MAX;
	static uint64_t x370 = 33874456166LLU;
	int8_t x371 = -1;
	uint64_t x372 = UINT64_MAX;
	volatile uint64_t t83 = 77898921442774LLU;

	t83 = (x369/(x370-(x371==x372)));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x373 = UINT64_MAX;
	int64_t x374 = INT64_MIN;
	int64_t x375 = 69LL;
	uint16_t x376 = 3092U;
	uint64_t t84 = 1962337LLU;

	t84 = (x373/(x374-(x375==x376)));

	if (t84 != 1LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x377 = 6105388LLU;
	uint32_t x378 = UINT32_MAX;
	static int64_t x379 = INT64_MAX;
	volatile uint16_t x380 = 4466U;
	uint64_t t85 = 1473685LLU;

	t85 = (x377/(x378-(x379==x380)));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x381 = -1;
	static int64_t x382 = 2690632566775LL;
	uint16_t x383 = UINT16_MAX;
	int64_t x384 = INT64_MAX;

	t86 = (x381/(x382-(x383==x384)));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x386 = INT16_MAX;
	static int8_t x387 = INT8_MIN;
	int8_t x388 = INT8_MIN;
	volatile int32_t t87 = 114864;

	t87 = (x385/(x386-(x387==x388)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x390 = INT8_MIN;
	static uint16_t x392 = 414U;
	volatile int32_t t88 = -1646666;

	t88 = (x389/(x390-(x391==x392)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x393 = -1;
	int32_t x394 = -8847693;
	int16_t x396 = INT16_MIN;
	volatile int32_t t89 = -200675860;

	t89 = (x393/(x394-(x395==x396)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x398 = INT16_MAX;
	int64_t x399 = INT64_MIN;
	int8_t x400 = INT8_MIN;
	uint64_t t90 = 7752813047LLU;

	t90 = (x397/(x398-(x399==x400)));

	if (t90 != 675011LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x402 = 2;
	static uint8_t x403 = UINT8_MAX;
	static uint32_t x404 = UINT32_MAX;
	volatile int32_t t91 = -14565;

	t91 = (x401/(x402-(x403==x404)));

	if (t91 != 16383) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x406 = 15;
	int8_t x407 = -1;
	int32_t x408 = -1;
	int64_t t92 = 7527LL;

	t92 = (x405/(x406-(x407==x408)));

	if (t92 != -658812288346769700LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x409 = 7968U;
	int64_t x410 = 3743LL;
	int64_t x411 = INT64_MAX;
	volatile int64_t x412 = INT64_MIN;
	static volatile int64_t t93 = -86397716387LL;

	t93 = (x409/(x410-(x411==x412)));

	if (t93 != 2LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x413 = -1343;
	uint32_t x415 = 776387441U;
	volatile uint32_t x416 = 3U;
	int32_t t94 = 1;

	t94 = (x413/(x414-(x415==x416)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x417 = 7LLU;
	uint16_t x418 = UINT16_MAX;
	int8_t x420 = INT8_MAX;
	volatile uint64_t t95 = 33762759752832452LLU;

	t95 = (x417/(x418-(x419==x420)));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x421 = 474643733940204LLU;
	volatile int32_t x423 = 20;
	uint16_t x424 = 27592U;
	uint64_t t96 = 502135587LLU;

	t96 = (x421/(x422-(x423==x424)));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x425 = -1;
	int64_t x426 = -21766LL;
	uint64_t x427 = 6102509LLU;
	uint32_t x428 = UINT32_MAX;

	t97 = (x425/(x426-(x427==x428)));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x429 = INT16_MIN;
	static volatile int64_t x430 = INT64_MAX;
	uint8_t x431 = 1U;
	int64_t x432 = -1LL;
	static int64_t t98 = -1955954LL;

	t98 = (x429/(x430-(x431==x432)));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x434 = -5265344;
	volatile int32_t x435 = 1;
	int32_t x436 = INT32_MIN;
	uint64_t t99 = 66517243269141LLU;

	t99 = (x433/(x434-(x435==x436)));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

