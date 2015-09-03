#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = 1;
uint64_t t1 = 232LLU;
volatile int16_t x29 = -1;
int32_t x31 = INT32_MAX;
int8_t x32 = INT8_MAX;
static volatile int32_t t6 = -100752448;
volatile int8_t x35 = INT8_MAX;
int8_t x39 = INT8_MAX;
volatile int64_t t8 = -1514789585582835586LL;
int64_t x42 = -6122466LL;
static int64_t x45 = INT64_MIN;
int32_t x55 = 288058702;
static uint8_t x57 = UINT8_MAX;
static uint64_t x60 = 213297964004LLU;
uint64_t t14 = 403LLU;
int8_t x71 = INT8_MAX;
static volatile int32_t t16 = 3;
int16_t x75 = 661;
int32_t x80 = INT32_MIN;
static volatile int16_t x86 = -1;
volatile int16_t x87 = 0;
static int64_t t20 = -433593145095341132LL;
uint64_t t22 = 109270337743LLU;
uint8_t x107 = UINT8_MAX;
volatile int64_t x121 = -1943931616457327LL;
volatile int32_t x127 = INT32_MAX;
volatile int32_t t31 = -9961;
static int16_t x139 = INT16_MIN;
uint32_t x143 = 137902806U;
uint16_t x145 = UINT16_MAX;
int64_t x146 = -1LL;
int64_t t36 = 8670LL;
int16_t x155 = -1;
int32_t x159 = -1;
uint8_t x167 = UINT8_MAX;
static uint8_t x172 = 4U;
uint64_t t41 = 13739957743LLU;
int8_t x177 = INT8_MIN;
static int64_t t42 = 1758187567621179LL;
volatile int8_t x186 = INT8_MAX;
static volatile int64_t x196 = INT64_MIN;
uint8_t x201 = 77U;
uint64_t x202 = 92LLU;
int16_t x203 = 6;
uint64_t t48 = 94852664LLU;
uint32_t x206 = 22764U;
int64_t t49 = 19273LL;
static uint16_t x209 = UINT16_MAX;
static volatile int32_t x214 = INT32_MAX;
static int32_t x219 = 0;
uint16_t x220 = 70U;
volatile int32_t t52 = -31210650;
int64_t t53 = 470LL;
volatile int16_t x229 = -110;
int64_t t57 = 7872015159LL;
volatile int32_t x245 = INT32_MIN;
uint16_t x256 = 353U;
uint64_t x264 = 59LLU;
int64_t x265 = -1LL;
uint32_t x268 = 4020U;
int16_t x274 = -1;
uint64_t t66 = 462145587181079LLU;
int8_t x281 = -1;
uint16_t x282 = 6U;
int32_t x286 = 3;
uint32_t x287 = 12465U;
volatile int64_t x288 = INT64_MIN;
volatile int32_t x300 = 122413;
uint16_t x305 = 1U;
volatile int32_t x316 = -1;
volatile int64_t t75 = -6625117575519LL;
uint8_t x320 = UINT8_MAX;
uint8_t x322 = 3U;
volatile int32_t x323 = INT32_MIN;
uint64_t x324 = 1LLU;
int64_t x327 = INT64_MIN;
volatile int64_t t79 = -1666LL;
static int64_t x334 = -1LL;
int64_t t80 = 55168893130430LL;
int64_t x344 = -1LL;
static int16_t x346 = -1;
volatile uint16_t x347 = UINT16_MAX;
int8_t x348 = -1;
int32_t x354 = -1;
static volatile int64_t t85 = -1LL;
static int8_t x359 = 29;
int32_t t86 = 30781504;
uint64_t t87 = 2389963493LLU;
int8_t x365 = 0;
int64_t x367 = -343441215357473LL;
uint8_t x372 = UINT8_MAX;
static volatile int64_t t89 = -104393795200816LL;
int16_t x373 = INT16_MAX;
volatile uint32_t x386 = 55928U;
static volatile int8_t x388 = INT8_MAX;
static volatile uint8_t x392 = UINT8_MAX;
int64_t x398 = INT64_MAX;
volatile int64_t t96 = -83727288056737297LL;
static int32_t x405 = INT32_MIN;
int32_t x407 = INT32_MAX;
uint16_t x408 = 19U;
volatile int8_t x412 = INT8_MIN;
static int64_t x416 = 1LL;


void f0(void) {
	volatile int8_t x1 = INT8_MIN;
	static int64_t x2 = INT64_MAX;
	uint32_t x3 = UINT32_MAX;
	int64_t x4 = 1LL;
	static int64_t t0 = 2919454LL;

	t0 = ((x1/x2)^(x3%x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x6 = 1U;
	uint64_t x7 = 993534LLU;
	static uint8_t x8 = 27U;

	t1 = ((x5/x6)^(x7%x8));

	if (t1 != 14LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = -96;
	volatile int8_t x10 = INT8_MAX;
	uint16_t x11 = UINT16_MAX;
	uint64_t x12 = UINT64_MAX;
	volatile uint64_t t2 = 399140572411LLU;

	t2 = ((x9/x10)^(x11%x12));

	if (t2 != 65535LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	volatile int8_t x14 = 32;
	static int64_t x15 = INT64_MIN;
	int16_t x16 = -43;
	static volatile int64_t t3 = -15648687314LL;

	t3 = ((x13/x14)^(x15%x16));

	if (t3 != 982LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MAX;
	int64_t x18 = INT64_MAX;
	uint64_t x19 = UINT64_MAX;
	volatile int64_t x20 = INT64_MAX;
	uint64_t t4 = 1256961859294572LLU;

	t4 = ((x17/x18)^(x19%x20));

	if (t4 != 1LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MAX;
	static int8_t x22 = -1;
	static int16_t x23 = -131;
	uint8_t x24 = 2U;
	static volatile int32_t t5 = 427521;

	t5 = ((x21/x22)^(x23%x24));

	if (t5 != 2147483646) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int16_t x30 = -7;

	t6 = ((x29/x30)^(x31%x32));

	if (t6 != 7) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x33 = INT8_MIN;
	int64_t x34 = -15967707558421LL;
	int64_t x36 = INT64_MIN;
	int64_t t7 = 155468892903073449LL;

	t7 = ((x33/x34)^(x35%x36));

	if (t7 != 127LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = 44;
	static int64_t x38 = INT64_MIN;
	int64_t x40 = INT64_MAX;

	t8 = ((x37/x38)^(x39%x40));

	if (t8 != 127LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x41 = 0;
	uint64_t x43 = UINT64_MAX;
	int64_t x44 = -1LL;
	volatile uint64_t t9 = 388LLU;

	t9 = ((x41/x42)^(x43%x44));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x46 = 2335U;
	static int8_t x47 = -1;
	int8_t x48 = -1;
	volatile int64_t t10 = -918579146303LL;

	t10 = ((x45/x46)^(x47%x48));

	if (t10 != -3950052264177634LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = INT8_MAX;
	static int64_t x50 = -1LL;
	int64_t x51 = INT64_MIN;
	uint64_t x52 = UINT64_MAX;
	volatile uint64_t t11 = 2043210103507192LLU;

	t11 = ((x49/x50)^(x51%x52));

	if (t11 != 9223372036854775681LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = -51;
	int16_t x54 = -7;
	int8_t x56 = INT8_MAX;
	volatile int32_t t12 = -4962729;

	t12 = ((x53/x54)^(x55%x56));

	if (t12 != 103) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x58 = INT64_MIN;
	int64_t x59 = INT64_MAX;
	static uint64_t t13 = 43088586581739LLU;

	t13 = ((x57/x58)^(x59%x60));

	if (t13 != 134333908907LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x61 = -1;
	uint64_t x62 = 144824054LLU;
	uint8_t x63 = 0U;
	int32_t x64 = INT32_MIN;

	t14 = ((x61/x62)^(x63%x64));

	if (t14 != 127373482264LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint64_t x65 = 54171497395724610LLU;
	int32_t x66 = 2202;
	static uint8_t x67 = UINT8_MAX;
	int16_t x68 = INT16_MIN;
	volatile uint64_t t15 = 73590212021730485LLU;

	t15 = ((x65/x66)^(x67%x68));

	if (t15 != 24601043322170LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = 1;
	int8_t x70 = INT8_MIN;
	int32_t x72 = -290501;

	t16 = ((x69/x70)^(x71%x72));

	if (t16 != 127) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = INT32_MAX;
	volatile int64_t x74 = -1LL;
	uint64_t x76 = 3853LLU;
	volatile uint64_t t17 = 35664147LLU;

	t17 = ((x73/x74)^(x75%x76));

	if (t17 != 18446744071562068628LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = INT32_MIN;
	int16_t x78 = 2022;
	int16_t x79 = -1;
	volatile int32_t t18 = -3;

	t18 = ((x77/x78)^(x79%x80));

	if (t18 != 1062058) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x81 = 286671869LLU;
	int64_t x82 = INT64_MAX;
	uint64_t x83 = 61173927024465LLU;
	int8_t x84 = 11;
	uint64_t t19 = 21490193LLU;

	t19 = ((x81/x82)^(x83%x84));

	if (t19 != 2LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x85 = INT8_MIN;
	int64_t x88 = 1636043464LL;

	t20 = ((x85/x86)^(x87%x88));

	if (t20 != 128LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x89 = 27U;
	uint32_t x90 = 32540052U;
	int64_t x91 = -107162366583063400LL;
	uint64_t x92 = UINT64_MAX;
	volatile uint64_t t21 = 32678302748057308LLU;

	t21 = ((x89/x90)^(x91%x92));

	if (t21 != 18339581707126488216LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x93 = UINT64_MAX;
	int64_t x94 = INT64_MAX;
	uint8_t x95 = UINT8_MAX;
	volatile uint8_t x96 = 1U;

	t22 = ((x93/x94)^(x95%x96));

	if (t22 != 2LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int16_t x97 = INT16_MIN;
	uint64_t x98 = 4LLU;
	int64_t x99 = -1LL;
	int8_t x100 = 2;
	volatile uint64_t t23 = 2704LLU;

	t23 = ((x97/x98)^(x99%x100));

	if (t23 != 13835058055282171903LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x101 = UINT8_MAX;
	int16_t x102 = -6723;
	int16_t x103 = INT16_MAX;
	int16_t x104 = -297;
	volatile int32_t t24 = -6993;

	t24 = ((x101/x102)^(x103%x104));

	if (t24 != 97) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x105 = UINT32_MAX;
	uint16_t x106 = 234U;
	volatile int32_t x108 = -1;
	uint32_t t25 = 750707U;

	t25 = ((x105/x106)^(x107%x108));

	if (t25 != 18354561U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x109 = INT8_MIN;
	static int16_t x110 = 3787;
	int32_t x111 = -1;
	static int64_t x112 = INT64_MIN;
	int64_t t26 = 409486762195LL;

	t26 = ((x109/x110)^(x111%x112));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x113 = 1U;
	static int32_t x114 = -3919093;
	int8_t x115 = -47;
	int64_t x116 = INT64_MIN;
	volatile int64_t t27 = 753762571LL;

	t27 = ((x113/x114)^(x115%x116));

	if (t27 != -47LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x117 = 8315U;
	static volatile uint64_t x118 = UINT64_MAX;
	uint64_t x119 = 4644028303847LLU;
	volatile uint16_t x120 = 3U;
	volatile uint64_t t28 = 13865635013LLU;

	t28 = ((x117/x118)^(x119%x120));

	if (t28 != 2LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x122 = 18952U;
	int32_t x123 = INT32_MAX;
	int8_t x124 = INT8_MAX;
	int64_t t29 = 81390544477975383LL;

	t29 = ((x121/x122)^(x123%x124));

	if (t29 != -102571317874LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x125 = 0U;
	static volatile int8_t x126 = -1;
	int8_t x128 = INT8_MAX;
	volatile uint32_t t30 = 983911967U;

	t30 = ((x125/x126)^(x127%x128));

	if (t30 != 7U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x129 = INT8_MAX;
	int16_t x130 = INT16_MAX;
	static int32_t x131 = INT32_MAX;
	volatile int8_t x132 = INT8_MIN;

	t31 = ((x129/x130)^(x131%x132));

	if (t31 != 127) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x133 = -1;
	int64_t x134 = -1LL;
	int32_t x135 = INT32_MAX;
	int32_t x136 = INT32_MAX;
	int64_t t32 = -2LL;

	t32 = ((x133/x134)^(x135%x136));

	if (t32 != 1LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x137 = INT32_MIN;
	static int64_t x138 = -32683LL;
	uint32_t x140 = UINT32_MAX;
	volatile int64_t t33 = -161752483667404217LL;

	t33 = ((x137/x138)^(x139%x140));

	if (t33 != 4294869162LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = INT32_MAX;
	static int16_t x142 = 23;
	int16_t x144 = -2201;
	uint32_t t34 = 783570U;

	t34 = ((x141/x142)^(x143%x144));

	if (t34 != 229148864U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x147 = INT8_MIN;
	int16_t x148 = -78;
	static int64_t t35 = 3016232743LL;

	t35 = ((x145/x146)^(x147%x148));

	if (t35 != 65487LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x149 = INT64_MAX;
	int8_t x150 = -1;
	int8_t x151 = 3;
	static uint16_t x152 = UINT16_MAX;

	t36 = ((x149/x150)^(x151%x152));

	if (t36 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x153 = 427692;
	static uint64_t x154 = UINT64_MAX;
	static int64_t x156 = INT64_MIN;
	uint64_t t37 = UINT64_MAX;

	t37 = ((x153/x154)^(x155%x156));

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x157 = INT64_MIN;
	int8_t x158 = -15;
	uint16_t x160 = 14U;
	volatile int64_t t38 = 95216130741LL;

	t38 = ((x157/x158)^(x159%x160));

	if (t38 != -614891469123651721LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x165 = 1040;
	int8_t x166 = -1;
	static uint64_t x168 = UINT64_MAX;
	volatile uint64_t t39 = 45010667587806146LLU;

	t39 = ((x165/x166)^(x167%x168));

	if (t39 != 18446744073709550351LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x169 = -1LL;
	int8_t x170 = -29;
	int16_t x171 = INT16_MAX;
	static int64_t t40 = -198550830045693648LL;

	t40 = ((x169/x170)^(x171%x172));

	if (t40 != 3LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x173 = INT8_MIN;
	int8_t x174 = INT8_MIN;
	volatile uint64_t x175 = UINT64_MAX;
	volatile int64_t x176 = -1LL;

	t41 = ((x173/x174)^(x175%x176));

	if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x178 = INT64_MIN;
	int16_t x179 = INT16_MAX;
	int32_t x180 = -1;

	t42 = ((x177/x178)^(x179%x180));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x181 = 0;
	int8_t x182 = INT8_MAX;
	volatile int16_t x183 = 189;
	int8_t x184 = -1;
	volatile int32_t t43 = 133746;

	t43 = ((x181/x182)^(x183%x184));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x185 = 5U;
	int32_t x187 = -1;
	static int8_t x188 = INT8_MIN;
	volatile uint32_t t44 = UINT32_MAX;

	t44 = ((x185/x186)^(x187%x188));

	if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x189 = -1;
	static int64_t x190 = INT64_MIN;
	int32_t x191 = INT32_MIN;
	int32_t x192 = INT32_MIN;
	static int64_t t45 = 1718438LL;

	t45 = ((x189/x190)^(x191%x192));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x193 = -1;
	static volatile int32_t x194 = INT32_MAX;
	static int16_t x195 = INT16_MIN;
	static int64_t t46 = 6025384447127834LL;

	t46 = ((x193/x194)^(x195%x196));

	if (t46 != -32768LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x197 = -1;
	volatile int64_t x198 = INT64_MIN;
	int8_t x199 = INT8_MIN;
	uint16_t x200 = 194U;
	int64_t t47 = 42900632712LL;

	t47 = ((x197/x198)^(x199%x200));

	if (t47 != -128LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x204 = -1;

	t48 = ((x201/x202)^(x203%x204));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int64_t x205 = 56LL;
	int32_t x207 = -14;
	volatile int64_t x208 = -1LL;

	t49 = ((x205/x206)^(x207%x208));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x210 = INT32_MIN;
	static int8_t x211 = INT8_MIN;
	int32_t x212 = INT32_MAX;
	volatile int32_t t50 = -1840;

	t50 = ((x209/x210)^(x211%x212));

	if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x213 = 16303U;
	uint32_t x215 = UINT32_MAX;
	uint64_t x216 = 225LLU;
	uint64_t t51 = 14592459LLU;

	t51 = ((x213/x214)^(x215%x216));

	if (t51 != 120LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x217 = -532;
	int16_t x218 = INT16_MIN;

	t52 = ((x217/x218)^(x219%x220));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x221 = UINT32_MAX;
	int64_t x222 = INT64_MIN;
	int8_t x223 = -1;
	uint32_t x224 = UINT32_MAX;

	t53 = ((x221/x222)^(x223%x224));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x225 = INT16_MIN;
	int32_t x226 = INT32_MIN;
	int16_t x227 = INT16_MAX;
	int64_t x228 = 47837354787103204LL;
	int64_t t54 = -8216801056412914LL;

	t54 = ((x225/x226)^(x227%x228));

	if (t54 != 32767LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x230 = 105046133047723LLU;
	volatile int16_t x231 = INT16_MIN;
	int64_t x232 = 18848431981528866LL;
	uint64_t t55 = 75216620946LLU;

	t55 = ((x229/x230)^(x231%x232));

	if (t55 != 18446744073709366774LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x233 = INT16_MIN;
	uint64_t x234 = UINT64_MAX;
	uint8_t x235 = UINT8_MAX;
	int64_t x236 = -78510956006416196LL;
	static uint64_t t56 = 994898987560808535LLU;

	t56 = ((x233/x234)^(x235%x236));

	if (t56 != 255LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x237 = 138280580U;
	uint8_t x238 = UINT8_MAX;
	int32_t x239 = INT32_MAX;
	volatile int64_t x240 = INT64_MIN;

	t57 = ((x237/x238)^(x239%x240));

	if (t57 != 2146941371LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x241 = INT32_MIN;
	uint16_t x242 = 3U;
	volatile int32_t x243 = INT32_MIN;
	uint8_t x244 = UINT8_MAX;
	volatile int32_t t58 = 189;

	t58 = ((x241/x242)^(x243%x244));

	if (t58 != 715827926) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x246 = INT64_MIN;
	volatile int32_t x247 = INT32_MIN;
	static volatile int32_t x248 = 209935;
	int64_t t59 = 1LL;

	t59 = ((x245/x246)^(x247%x248));

	if (t59 != -58533LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x249 = INT8_MIN;
	uint32_t x250 = 20325455U;
	uint32_t x251 = UINT32_MAX;
	int64_t x252 = 115072156884524LL;
	static volatile int64_t t60 = -61492LL;

	t60 = ((x249/x250)^(x251%x252));

	if (t60 != 4294967084LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x253 = UINT32_MAX;
	uint32_t x254 = 467456U;
	int8_t x255 = INT8_MIN;
	uint32_t t61 = 403167846U;

	t61 = ((x253/x254)^(x255%x256));

	if (t61 != 4294958179U) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int64_t x257 = -1LL;
	uint64_t x258 = 897648991694LLU;
	int64_t x259 = INT64_MIN;
	int32_t x260 = INT32_MAX;
	volatile uint64_t t62 = 9763953LLU;

	t62 = ((x257/x258)^(x259%x260));

	if (t62 != 18446744073689001553LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x261 = INT8_MAX;
	uint8_t x262 = UINT8_MAX;
	uint8_t x263 = UINT8_MAX;
	static uint64_t t63 = 15542491LLU;

	t63 = ((x261/x262)^(x263%x264));

	if (t63 != 19LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x266 = INT16_MIN;
	int32_t x267 = -10;
	volatile int64_t t64 = -554909194196743LL;

	t64 = ((x265/x266)^(x267%x268));

	if (t64 != 3306LL) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint16_t x269 = 2U;
	uint16_t x270 = 1172U;
	int8_t x271 = INT8_MIN;
	int16_t x272 = -6;
	int32_t t65 = -6200;

	t65 = ((x269/x270)^(x271%x272));

	if (t65 != -2) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x273 = 27825203LLU;
	int64_t x275 = -1LL;
	uint64_t x276 = UINT64_MAX;

	t66 = ((x273/x274)^(x275%x276));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x277 = INT64_MIN;
	volatile int8_t x278 = INT8_MAX;
	int32_t x279 = INT32_MIN;
	volatile int64_t x280 = -1LL;
	int64_t t67 = -375209660336034LL;

	t67 = ((x277/x278)^(x279%x280));

	if (t67 != -72624976668147841LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x283 = 1106U;
	int32_t x284 = INT32_MAX;
	volatile uint32_t t68 = 25807U;

	t68 = ((x281/x282)^(x283%x284));

	if (t68 != 1106U) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x285 = 6U;
	int64_t t69 = 5867377058100011LL;

	t69 = ((x285/x286)^(x287%x288));

	if (t69 != 12467LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x289 = 6522833655751212122LLU;
	uint64_t x290 = UINT64_MAX;
	int16_t x291 = -1;
	uint16_t x292 = UINT16_MAX;
	uint64_t t70 = UINT64_MAX;

	t70 = ((x289/x290)^(x291%x292));

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x293 = 1251053042991LL;
	volatile uint32_t x294 = 284370U;
	static volatile int32_t x295 = -1;
	int8_t x296 = -7;
	int64_t t71 = 7244425829LL;

	t71 = ((x293/x294)^(x295%x296));

	if (t71 != -4399385LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x297 = 1961U;
	static uint8_t x298 = UINT8_MAX;
	int16_t x299 = INT16_MIN;
	int32_t t72 = 246;

	t72 = ((x297/x298)^(x299%x300));

	if (t72 != -32761) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x301 = INT64_MIN;
	int16_t x302 = 5;
	static volatile int32_t x303 = INT32_MAX;
	int64_t x304 = -1LL;
	int64_t t73 = -62574310LL;

	t73 = ((x301/x302)^(x303%x304));

	if (t73 != -1844674407370955161LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x306 = INT32_MIN;
	volatile uint16_t x307 = UINT16_MAX;
	int16_t x308 = INT16_MIN;
	int32_t t74 = -5685;

	t74 = ((x305/x306)^(x307%x308));

	if (t74 != 32767) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x313 = -2026549;
	uint8_t x314 = 13U;
	static int64_t x315 = -1LL;

	t75 = ((x313/x314)^(x315%x316));

	if (t75 != -155888LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x317 = INT64_MIN;
	uint32_t x318 = 1U;
	int16_t x319 = INT16_MIN;
	int64_t t76 = 1250084899670LL;

	t76 = ((x317/x318)^(x319%x320));

	if (t76 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x321 = -1;
	volatile uint64_t t77 = 7LLU;

	t77 = ((x321/x322)^(x323%x324));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x325 = 21469663647461LLU;
	int32_t x326 = INT32_MAX;
	static uint64_t x328 = 64073619LLU;
	uint64_t t78 = 1577784063668370LLU;

	t78 = ((x325/x326)^(x327%x328));

	if (t78 != 1645504LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x329 = INT32_MIN;
	volatile int64_t x330 = -7769628870LL;
	uint8_t x331 = UINT8_MAX;
	static int32_t x332 = INT32_MIN;

	t79 = ((x329/x330)^(x331%x332));

	if (t79 != 255LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x333 = 52917504U;
	static int64_t x335 = INT64_MIN;
	volatile uint16_t x336 = 3027U;

	t80 = ((x333/x334)^(x335%x336));

	if (t80 != 52919390LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x337 = INT8_MAX;
	int64_t x338 = 4010375610842LL;
	static volatile uint8_t x339 = 122U;
	uint8_t x340 = 14U;
	volatile int64_t t81 = 263088889767774LL;

	t81 = ((x337/x338)^(x339%x340));

	if (t81 != 10LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x341 = -2875;
	int8_t x342 = INT8_MAX;
	static int32_t x343 = INT32_MIN;
	int64_t t82 = 3010948935538897211LL;

	t82 = ((x341/x342)^(x343%x344));

	if (t82 != -22LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x345 = 1;
	int32_t t83 = 3392;

	t83 = ((x345/x346)^(x347%x348));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x349 = INT16_MIN;
	int16_t x350 = INT16_MAX;
	int8_t x351 = INT8_MIN;
	int64_t x352 = INT64_MIN;
	int64_t t84 = 3957LL;

	t84 = ((x349/x350)^(x351%x352));

	if (t84 != 127LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x353 = 14U;
	volatile uint8_t x355 = UINT8_MAX;
	int64_t x356 = -44393877949720038LL;

	t85 = ((x353/x354)^(x355%x356));

	if (t85 != -243LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x357 = INT16_MAX;
	volatile int16_t x358 = -1;
	volatile int8_t x360 = INT8_MIN;

	t86 = ((x357/x358)^(x359%x360));

	if (t86 != -32740) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x361 = INT16_MAX;
	static int32_t x362 = -5;
	volatile uint64_t x363 = UINT64_MAX;
	int64_t x364 = 264238452227LL;

	t87 = ((x361/x362)^(x363%x364));

	if (t87 != 18446743982457797317LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x366 = -33;
	int8_t x368 = -1;
	volatile int64_t t88 = -259LL;

	t88 = ((x365/x366)^(x367%x368));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x369 = INT64_MIN;
	int32_t x370 = -255966;
	int8_t x371 = INT8_MAX;

	t89 = ((x369/x370)^(x371%x372));

	if (t89 != 36033582729133LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x374 = INT32_MAX;
	int32_t x375 = INT32_MIN;
	volatile int16_t x376 = -3627;
	int32_t t90 = -61201;

	t90 = ((x373/x374)^(x375%x376));

	if (t90 != -2234) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x377 = UINT32_MAX;
	volatile int8_t x378 = INT8_MIN;
	static uint8_t x379 = 2U;
	int16_t x380 = -3212;
	uint32_t t91 = 76790806U;

	t91 = ((x377/x378)^(x379%x380));

	if (t91 != 3U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x381 = -5754;
	uint8_t x382 = 7U;
	int64_t x383 = INT64_MIN;
	static uint8_t x384 = UINT8_MAX;
	int64_t t92 = 0LL;

	t92 = ((x381/x382)^(x383%x384));

	if (t92 != 842LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x385 = 31U;
	int32_t x387 = INT32_MAX;
	volatile uint32_t t93 = 15755U;

	t93 = ((x385/x386)^(x387%x388));

	if (t93 != 7U) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x389 = -28;
	volatile int8_t x390 = -5;
	int8_t x391 = -14;
	int32_t t94 = 3;

	t94 = ((x389/x390)^(x391%x392));

	if (t94 != -9) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x397 = INT16_MAX;
	int32_t x399 = -1;
	static uint32_t x400 = UINT32_MAX;
	volatile int64_t t95 = 40431LL;

	t95 = ((x397/x398)^(x399%x400));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x401 = UINT16_MAX;
	volatile int32_t x402 = INT32_MAX;
	static volatile int64_t x403 = INT64_MIN;
	int32_t x404 = -498631137;

	t96 = ((x401/x402)^(x403%x404));

	if (t96 != -65857043LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x406 = 3;
	volatile int32_t t97 = 204069532;

	t97 = ((x405/x406)^(x407%x408));

	if (t97 != -715827884) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x409 = INT16_MAX;
	int64_t x410 = 871442759507101LL;
	static uint16_t x411 = 13233U;
	volatile int64_t t98 = 16095091416LL;

	t98 = ((x409/x410)^(x411%x412));

	if (t98 != 49LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x413 = 4U;
	static uint16_t x414 = UINT16_MAX;
	volatile uint32_t x415 = 1110924U;
	static volatile int64_t t99 = 9067LL;

	t99 = ((x413/x414)^(x415%x416));

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

