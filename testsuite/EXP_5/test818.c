#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = INT32_MAX;
uint8_t x4 = 1U;
int64_t t1 = 4685922079013657LL;
static int32_t x10 = INT32_MAX;
uint64_t x11 = UINT64_MAX;
int32_t x13 = -208798740;
volatile int64_t t4 = 1959655271541LL;
uint64_t x28 = 916429629LLU;
uint64_t t6 = 410383198963899LLU;
int16_t x44 = INT16_MIN;
int64_t x47 = -1795LL;
int16_t x50 = -1;
volatile int8_t x53 = INT8_MIN;
volatile int16_t x55 = -6372;
int8_t x56 = 8;
uint8_t x60 = 7U;
uint64_t t15 = 63005211LLU;
uint64_t t16 = 1884393LLU;
int32_t x71 = -81909;
int64_t x73 = -308811LL;
int8_t x75 = INT8_MIN;
static volatile int16_t x76 = -1;
static volatile int8_t x79 = -1;
static volatile int32_t t19 = -76;
int16_t x84 = INT16_MIN;
volatile int32_t t20 = -25;
int16_t x86 = -1;
uint16_t x87 = 31560U;
uint32_t t21 = UINT32_MAX;
int16_t x91 = INT16_MAX;
volatile int32_t x93 = -1;
int16_t x96 = INT16_MIN;
static uint64_t t24 = UINT64_MAX;
static volatile int8_t x109 = -20;
int8_t x111 = -9;
uint64_t t28 = 379715824LLU;
int16_t x137 = INT16_MIN;
uint64_t x144 = 36116324781LLU;
int64_t x147 = -96828758LL;
volatile int32_t t37 = -1027871373;
int64_t x154 = -1LL;
uint16_t x157 = UINT16_MAX;
uint8_t x159 = 2U;
int16_t x164 = INT16_MAX;
volatile int64_t t40 = 25679222466LL;
static int32_t x167 = INT32_MAX;
volatile int8_t x175 = INT8_MIN;
uint64_t t43 = 413995464804465LLU;
int64_t x180 = -61486761228LL;
static uint64_t t44 = UINT64_MAX;
int32_t x181 = INT32_MIN;
volatile int8_t x182 = -1;
int16_t x188 = INT16_MIN;
static volatile int64_t t48 = INT64_MAX;
int64_t t49 = 510711230222LL;
int32_t x202 = -126691;
uint8_t x205 = 10U;
volatile uint64_t t53 = 19460608769LLU;
uint32_t x218 = 911U;
int16_t x225 = INT16_MIN;
uint32_t x227 = UINT32_MAX;
uint32_t t57 = 11471U;
volatile int64_t x237 = INT64_MAX;
volatile int64_t x240 = INT64_MIN;
static int64_t x259 = INT64_MIN;
uint16_t x260 = UINT16_MAX;
static int8_t x262 = -3;
int64_t t63 = 0LL;
uint16_t x265 = 25U;
int8_t x267 = -5;
volatile int32_t t64 = 720105300;
int16_t x273 = -1;
uint32_t x276 = 233U;
volatile uint32_t t66 = UINT32_MAX;
volatile int64_t x278 = -12815104608LL;
static int64_t t69 = 88299865798840LL;
int8_t x291 = 52;
int32_t x292 = -1;
uint64_t x314 = 4300662980148271109LLU;
int16_t x319 = INT16_MAX;
static int64_t t78 = -25LL;
static volatile int8_t x333 = INT8_MIN;
uint16_t x334 = UINT16_MAX;
uint8_t x339 = 119U;
uint64_t t86 = 6938975491LLU;
static uint16_t x358 = 4359U;
static int32_t x360 = 187260123;
int64_t t87 = 1992535202856763333LL;
static volatile int64_t t88 = INT64_MIN;
int8_t x369 = 1;
int8_t x371 = -1;
int64_t t91 = 272LL;
uint16_t x377 = 195U;
uint8_t x379 = UINT8_MAX;
int8_t x381 = -59;
static volatile uint16_t x382 = 27407U;
uint64_t t94 = 395138579459LLU;
int16_t x391 = INT16_MIN;
int8_t x395 = INT8_MAX;
uint32_t x396 = 128676901U;
int8_t x398 = 51;
int64_t x399 = -1LL;
volatile int8_t x408 = INT8_MIN;
int32_t t99 = -1824503;


void f0(void) {
	int16_t x1 = INT16_MIN;
	uint8_t x2 = UINT8_MAX;
	volatile int32_t t0 = 7;

	t0 = (x1|((x2%x3)&x4));

	if (t0 != -32767) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = -1;
	int64_t x6 = INT64_MAX;
	static int8_t x7 = -1;
	volatile int32_t x8 = 163390;

	t1 = (x5|((x6%x7)&x8));

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	int16_t x12 = 22;
	uint64_t t2 = 1790100528404LLU;

	t2 = (x9|((x10%x11)&x12));

	if (t2 != 255LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = -2;
	int8_t x15 = -1;
	volatile int32_t x16 = 8025;
	volatile int32_t t3 = 221;

	t3 = (x13|((x14%x15)&x16));

	if (t3 != -208798740) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x17 = 4U;
	volatile int64_t x18 = -464923635LL;
	static int64_t x19 = 22164068785LL;
	uint32_t x20 = 32637359U;

	t4 = (x17|((x18%x19)&x20));

	if (t4 != 4194317LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -10532LL;
	volatile int16_t x22 = -1;
	int16_t x23 = 14122;
	int16_t x24 = 453;
	int64_t t5 = 226534644866346LL;

	t5 = (x21|((x22%x23)&x24));

	if (t5 != -10275LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -6;
	static int8_t x26 = INT8_MIN;
	int32_t x27 = INT32_MAX;

	t6 = (x25|((x26%x27)&x28));

	if (t6 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x29 = INT16_MIN;
	uint16_t x30 = 1474U;
	int64_t x31 = -1LL;
	int64_t x32 = -49336510037724LL;
	int64_t t7 = 27679LL;

	t7 = (x29|((x30%x31)&x32));

	if (t7 != -32768LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -25443;
	uint32_t x34 = 0U;
	int16_t x35 = -1;
	uint8_t x36 = 121U;
	static uint32_t t8 = 1638368U;

	t8 = (x33|((x34%x35)&x36));

	if (t8 != 4294941853U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	uint8_t x38 = 1U;
	uint8_t x39 = UINT8_MAX;
	static int32_t x40 = INT32_MIN;
	int32_t t9 = -8372943;

	t9 = (x37|((x38%x39)&x40));

	if (t9 != -128) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	static volatile uint64_t x42 = 105809638547863128LLU;
	static volatile int32_t x43 = INT32_MIN;
	uint64_t t10 = 765737479302LLU;

	t10 = (x41|((x42%x43)&x44));

	if (t10 != 18446744072626700288LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = 11;
	int16_t x46 = 171;
	int32_t x48 = 25718364;
	static volatile int64_t t11 = 64848576LL;

	t11 = (x45|((x46%x47)&x48));

	if (t11 != 11LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MAX;
	int64_t x51 = INT64_MIN;
	volatile uint8_t x52 = 3U;
	int64_t t12 = -52LL;

	t12 = (x49|((x50%x51)&x52));

	if (t12 != 127LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x54 = INT32_MAX;
	volatile int32_t t13 = 547772738;

	t13 = (x53|((x54%x55)&x56));

	if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x57 = 3U;
	int32_t x58 = INT32_MAX;
	volatile uint64_t x59 = 282458017174LLU;
	uint64_t t14 = 758989704313921263LLU;

	t14 = (x57|((x58%x59)&x60));

	if (t14 != 7LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	int32_t x62 = INT32_MIN;
	volatile uint64_t x63 = UINT64_MAX;
	int16_t x64 = INT16_MIN;

	t15 = (x61|((x62%x63)&x64));

	if (t15 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x65 = 116824992507191125LLU;
	uint32_t x66 = 7U;
	uint16_t x67 = 2U;
	uint64_t x68 = 166340483461855LLU;

	t16 = (x65|((x66%x67)&x68));

	if (t16 != 116824992507191125LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	static volatile uint64_t x70 = 17441LLU;
	uint8_t x72 = 39U;
	uint64_t t17 = 1424038LLU;

	t17 = (x69|((x70%x71)&x72));

	if (t17 != 18446744071562068001LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x74 = 2776U;
	volatile int64_t t18 = -28421047319818LL;

	t18 = (x73|((x74%x75)&x76));

	if (t18 != -308739LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x77 = 2;
	static int16_t x78 = -883;
	int16_t x80 = INT16_MAX;

	t19 = (x77|((x78%x79)&x80));

	if (t19 != 2) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	int32_t x82 = -1;
	volatile int16_t x83 = 18;

	t20 = (x81|((x82%x83)&x84));

	if (t20 != -32768) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = -1;
	volatile uint32_t x88 = 126U;

	t21 = (x85|((x86%x87)&x88));

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x89 = INT8_MAX;
	int16_t x90 = INT16_MIN;
	int8_t x92 = -1;
	int32_t t22 = -101844;

	t22 = (x89|((x90%x91)&x92));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x94 = UINT64_MAX;
	static int8_t x95 = INT8_MAX;
	volatile uint64_t t23 = UINT64_MAX;

	t23 = (x93|((x94%x95)&x96));

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = UINT64_MAX;
	volatile int64_t x98 = -3156806747833298LL;
	int8_t x99 = INT8_MIN;
	int32_t x100 = INT32_MAX;

	t24 = (x97|((x98%x99)&x100));

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = INT32_MIN;
	int8_t x102 = 1;
	int64_t x103 = INT64_MIN;
	volatile uint16_t x104 = 0U;
	volatile int64_t t25 = -652LL;

	t25 = (x101|((x102%x103)&x104));

	if (t25 != -2147483648LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = 51666U;
	uint32_t x106 = 231U;
	uint8_t x107 = UINT8_MAX;
	uint16_t x108 = UINT16_MAX;
	static volatile uint32_t t26 = 0U;

	t26 = (x105|((x106%x107)&x108));

	if (t26 != 51703U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x110 = INT16_MIN;
	static uint64_t x112 = UINT64_MAX;
	volatile uint64_t t27 = 1692101252916078LLU;

	t27 = (x109|((x110%x111)&x112));

	if (t27 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MIN;
	static uint64_t x114 = UINT64_MAX;
	static int64_t x115 = INT64_MIN;
	uint32_t x116 = 284346U;

	t28 = (x113|((x114%x115)&x116));

	if (t28 != 18446744073709551546LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MAX;
	static volatile int64_t x118 = -1LL;
	int32_t x119 = -92545860;
	static uint8_t x120 = 15U;
	int64_t t29 = -59436243483852089LL;

	t29 = (x117|((x118%x119)&x120));

	if (t29 != 2147483647LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MAX;
	int8_t x122 = INT8_MAX;
	static int32_t x123 = -1;
	int8_t x124 = -1;
	volatile int64_t t30 = INT64_MAX;

	t30 = (x121|((x122%x123)&x124));

	if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x125 = -67154;
	static volatile int32_t x126 = INT32_MAX;
	static volatile int16_t x127 = INT16_MIN;
	int32_t x128 = 507822;
	static volatile int32_t t31 = -3079644;

	t31 = (x125|((x126%x127)&x128));

	if (t31 != -65618) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MIN;
	static int64_t x130 = INT64_MAX;
	volatile int64_t x131 = -1LL;
	uint64_t x132 = 3LLU;
	volatile uint64_t t32 = 14LLU;

	t32 = (x129|((x130%x131)&x132));

	if (t32 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x133 = INT8_MIN;
	int32_t x134 = -1;
	int8_t x135 = -1;
	volatile int32_t x136 = INT32_MIN;
	volatile int32_t t33 = -1050883;

	t33 = (x133|((x134%x135)&x136));

	if (t33 != -128) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x138 = UINT64_MAX;
	static volatile uint64_t x139 = 29197LLU;
	static int8_t x140 = INT8_MIN;
	volatile uint64_t t34 = 261093109LLU;

	t34 = (x137|((x138%x139)&x140));

	if (t34 != 18446744073709536128LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x141 = 714663104U;
	static volatile int64_t x142 = -1LL;
	uint32_t x143 = 430U;
	volatile uint64_t t35 = 3LLU;

	t35 = (x141|((x142%x143)&x144));

	if (t35 != 36150437357LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MIN;
	static int32_t x146 = -783265596;
	volatile uint8_t x148 = UINT8_MAX;
	static int64_t t36 = 99055LL;

	t36 = (x145|((x146%x147)&x148));

	if (t36 != -2147483532LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x149 = -1;
	int8_t x150 = INT8_MAX;
	uint16_t x151 = UINT16_MAX;
	int16_t x152 = INT16_MAX;

	t37 = (x149|((x150%x151)&x152));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = -1;
	uint16_t x155 = 14962U;
	int32_t x156 = INT32_MIN;
	volatile int64_t t38 = 32464632258LL;

	t38 = (x153|((x154%x155)&x156));

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x158 = UINT16_MAX;
	uint64_t x160 = UINT64_MAX;
	uint64_t t39 = 188455731304LLU;

	t39 = (x157|((x158%x159)&x160));

	if (t39 != 65535LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = INT64_MIN;
	int8_t x162 = INT8_MIN;
	uint32_t x163 = 759U;

	t40 = (x161|((x162%x163)&x164));

	if (t40 != -9223372036854775602LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = 3U;
	volatile uint32_t x166 = 13652U;
	int16_t x168 = INT16_MIN;
	static uint32_t t41 = 961993U;

	t41 = (x165|((x166%x167)&x168));

	if (t41 != 3U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = INT16_MIN;
	uint8_t x170 = 52U;
	int16_t x171 = INT16_MIN;
	int64_t x172 = INT64_MIN;
	volatile int64_t t42 = -4594808034999962LL;

	t42 = (x169|((x170%x171)&x172));

	if (t42 != -32768LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MIN;
	uint32_t x174 = 7U;
	uint64_t x176 = 8808523790LLU;

	t43 = (x173|((x174%x175)&x176));

	if (t43 != 18446744073709551494LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int64_t x177 = -1LL;
	uint8_t x178 = 14U;
	uint64_t x179 = 192LLU;

	t44 = (x177|((x178%x179)&x180));

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint8_t x183 = 1U;
	static int8_t x184 = 4;
	static int32_t t45 = INT32_MIN;

	t45 = (x181|((x182%x183)&x184));

	if (t45 != INT32_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MIN;
	volatile int64_t x186 = -1LL;
	static int16_t x187 = 9;
	volatile int64_t t46 = -140809075180567311LL;

	t46 = (x185|((x186%x187)&x188));

	if (t46 != -32768LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MIN;
	static int16_t x190 = INT16_MAX;
	uint16_t x191 = 22U;
	uint8_t x192 = UINT8_MAX;
	volatile int64_t t47 = 771LL;

	t47 = (x189|((x190%x191)&x192));

	if (t47 != -9223372036854775799LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MAX;
	volatile int16_t x194 = INT16_MAX;
	static volatile int8_t x195 = INT8_MAX;
	int64_t x196 = INT64_MIN;

	t48 = (x193|((x194%x195)&x196));

	if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = 6;
	static uint16_t x198 = 15U;
	int64_t x199 = INT64_MIN;
	static uint8_t x200 = 7U;

	t49 = (x197|((x198%x199)&x200));

	if (t49 != 7LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x201 = 11880U;
	volatile uint16_t x203 = 17U;
	uint64_t x204 = 4735908400718LLU;
	volatile uint64_t t50 = 92955077226LLU;

	t50 = (x201|((x202%x203)&x204));

	if (t50 != 4735908408936LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int64_t x206 = INT64_MIN;
	int64_t x207 = -821592106757008LL;
	static int32_t x208 = INT32_MIN;
	volatile int64_t t51 = -489LL;

	t51 = (x205|((x206%x207)&x208));

	if (t51 != -179046449151990LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = INT16_MAX;
	uint8_t x210 = UINT8_MAX;
	static int32_t x211 = INT32_MAX;
	volatile uint64_t x212 = 24924842LLU;
	uint64_t t52 = 60440LLU;

	t52 = (x209|((x210%x211)&x212));

	if (t52 != 32767LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = 16U;
	uint64_t x214 = 588LLU;
	uint32_t x215 = UINT32_MAX;
	int32_t x216 = 1;

	t53 = (x213|((x214%x215)&x216));

	if (t53 != 16LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MIN;
	int16_t x219 = 344;
	uint32_t x220 = UINT32_MAX;
	static int64_t t54 = 4230017073348796600LL;

	t54 = (x217|((x218%x219)&x220));

	if (t54 != -9223372036854775585LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x221 = UINT64_MAX;
	static int16_t x222 = 58;
	int16_t x223 = INT16_MIN;
	volatile int16_t x224 = INT16_MAX;
	volatile uint64_t t55 = UINT64_MAX;

	t55 = (x221|((x222%x223)&x224));

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x226 = 477093LLU;
	uint64_t x228 = 142088465LLU;
	uint64_t t56 = 9080728LLU;

	t56 = (x225|((x226%x227)&x228));

	if (t56 != 18446744073709519105LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x233 = 15733736U;
	int16_t x234 = -1;
	int8_t x235 = -1;
	uint8_t x236 = UINT8_MAX;

	t57 = (x233|((x234%x235)&x236));

	if (t57 != 15733736U) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x238 = 28351LLU;
	int8_t x239 = 7;
	volatile uint64_t t58 = 44828457621LLU;

	t58 = (x237|((x238%x239)&x240));

	if (t58 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x241 = INT32_MAX;
	static volatile int8_t x242 = INT8_MAX;
	int64_t x243 = -3147886081988484LL;
	static int8_t x244 = 1;
	volatile int64_t t59 = 10553074712458LL;

	t59 = (x241|((x242%x243)&x244));

	if (t59 != 2147483647LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x245 = -1LL;
	volatile int64_t x246 = INT64_MIN;
	int64_t x247 = INT64_MIN;
	uint32_t x248 = UINT32_MAX;
	volatile int64_t t60 = -192785887681LL;

	t60 = (x245|((x246%x247)&x248));

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int16_t x249 = -1;
	int16_t x250 = -1;
	static uint8_t x251 = 79U;
	uint16_t x252 = 3737U;
	volatile int32_t t61 = -13;

	t61 = (x249|((x250%x251)&x252));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x257 = 2877353U;
	uint16_t x258 = 3799U;
	int64_t t62 = 5013902LL;

	t62 = (x257|((x258%x259)&x260));

	if (t62 != 2879487LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x261 = INT16_MIN;
	int8_t x263 = -1;
	volatile int64_t x264 = INT64_MIN;

	t63 = (x261|((x262%x263)&x264));

	if (t63 != -32768LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x266 = -8462;
	int8_t x268 = 10;

	t64 = (x265|((x266%x267)&x268));

	if (t64 != 27) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x269 = INT32_MIN;
	uint16_t x270 = UINT16_MAX;
	uint32_t x271 = UINT32_MAX;
	uint32_t x272 = 3U;
	volatile uint32_t t65 = 1293750U;

	t65 = (x269|((x270%x271)&x272));

	if (t65 != 2147483651U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x274 = INT16_MAX;
	int16_t x275 = -11;

	t66 = (x273|((x274%x275)&x276));

	if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x277 = -1;
	int16_t x279 = INT16_MAX;
	volatile int32_t x280 = 273;
	static int64_t t67 = 11816100113LL;

	t67 = (x277|((x278%x279)&x280));

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x281 = -42;
	uint64_t x282 = 2707198857331623875LLU;
	static int64_t x283 = -7055001251861480LL;
	int8_t x284 = -1;
	uint64_t t68 = 3757LLU;

	t68 = (x281|((x282%x283)&x284));

	if (t68 != 18446744073709551575LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x285 = INT64_MIN;
	static uint16_t x286 = 22U;
	uint32_t x287 = 1822507U;
	static int8_t x288 = -3;

	t69 = (x285|((x286%x287)&x288));

	if (t69 != -9223372036854775788LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x289 = INT32_MIN;
	static int32_t x290 = INT32_MAX;
	static int32_t t70 = 1;

	t70 = (x289|((x290%x291)&x292));

	if (t70 != -2147483625) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x293 = INT8_MIN;
	int32_t x294 = 44957;
	static int64_t x295 = 26549435781LL;
	int64_t x296 = INT64_MAX;
	volatile int64_t t71 = -13405511484625LL;

	t71 = (x293|((x294%x295)&x296));

	if (t71 != -99LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x297 = UINT8_MAX;
	int16_t x298 = INT16_MIN;
	int32_t x299 = INT32_MIN;
	uint16_t x300 = 1226U;
	volatile int32_t t72 = 82492;

	t72 = (x297|((x298%x299)&x300));

	if (t72 != 255) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x301 = INT64_MAX;
	int32_t x302 = -2;
	int16_t x303 = INT16_MAX;
	static int32_t x304 = INT32_MAX;
	volatile int64_t t73 = INT64_MAX;

	t73 = (x301|((x302%x303)&x304));

	if (t73 != INT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x305 = 883400845U;
	int16_t x306 = -424;
	static volatile uint16_t x307 = 8U;
	uint8_t x308 = 3U;
	static volatile uint32_t t74 = 208U;

	t74 = (x305|((x306%x307)&x308));

	if (t74 != 883400845U) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x309 = 62;
	int64_t x310 = INT64_MAX;
	int32_t x311 = -1;
	volatile int64_t x312 = INT64_MAX;
	int64_t t75 = 1415936LL;

	t75 = (x309|((x310%x311)&x312));

	if (t75 != 62LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x313 = 686378702808999075LLU;
	volatile uint8_t x315 = 3U;
	static int8_t x316 = INT8_MAX;
	uint64_t t76 = 1809615169422LLU;

	t76 = (x313|((x314%x315)&x316));

	if (t76 != 686378702808999075LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x317 = INT8_MIN;
	static volatile int64_t x318 = INT64_MAX;
	static int64_t x320 = INT64_MAX;
	volatile int64_t t77 = 277998213584698886LL;

	t77 = (x317|((x318%x319)&x320));

	if (t77 != -121LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x321 = INT64_MIN;
	int32_t x322 = 351888573;
	int64_t x323 = INT64_MIN;
	volatile int16_t x324 = -23;

	t78 = (x321|((x322%x323)&x324));

	if (t78 != -9223372036502887255LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x325 = UINT64_MAX;
	uint32_t x326 = 4996U;
	int16_t x327 = INT16_MIN;
	int16_t x328 = INT16_MIN;
	uint64_t t79 = UINT64_MAX;

	t79 = (x325|((x326%x327)&x328));

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint64_t x329 = UINT64_MAX;
	int32_t x330 = 872662;
	int8_t x331 = INT8_MIN;
	volatile int16_t x332 = INT16_MIN;
	uint64_t t80 = UINT64_MAX;

	t80 = (x329|((x330%x331)&x332));

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x335 = -1;
	int8_t x336 = 3;
	volatile int32_t t81 = 1548591;

	t81 = (x333|((x334%x335)&x336));

	if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x337 = -7;
	int32_t x338 = INT32_MAX;
	volatile uint32_t x340 = 14U;
	volatile uint32_t t82 = 19870U;

	t82 = (x337|((x338%x339)&x340));

	if (t82 != 4294967289U) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x341 = UINT64_MAX;
	int8_t x342 = -1;
	uint32_t x343 = 3U;
	static int64_t x344 = INT64_MAX;
	uint64_t t83 = UINT64_MAX;

	t83 = (x341|((x342%x343)&x344));

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x345 = -1;
	int16_t x346 = 1;
	static int32_t x347 = -1;
	static int32_t x348 = -1;
	int32_t t84 = 1686319;

	t84 = (x345|((x346%x347)&x348));

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x349 = -1350069373221LL;
	int32_t x350 = INT32_MIN;
	static int16_t x351 = INT16_MAX;
	int8_t x352 = INT8_MIN;
	int64_t t85 = -37459939954LL;

	t85 = (x349|((x350%x351)&x352));

	if (t85 != -37LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x353 = 869700LLU;
	static int32_t x354 = INT32_MIN;
	int64_t x355 = 32199LL;
	static volatile int16_t x356 = -1;

	t86 = (x353|((x354%x355)&x356));

	if (t86 != 18446744073709549422LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x357 = 59LL;
	uint16_t x359 = 7U;

	t87 = (x357|((x358%x359)&x360));

	if (t87 != 59LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x361 = INT64_MIN;
	uint16_t x362 = UINT16_MAX;
	int32_t x363 = INT32_MIN;
	int64_t x364 = INT64_MIN;

	t88 = (x361|((x362%x363)&x364));

	if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x365 = INT8_MAX;
	uint8_t x366 = UINT8_MAX;
	int8_t x367 = 4;
	int16_t x368 = -1;
	static volatile int32_t t89 = 8912;

	t89 = (x365|((x366%x367)&x368));

	if (t89 != 127) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x370 = 108412034;
	static int32_t x372 = -252964466;
	static int32_t t90 = 469496;

	t90 = (x369|((x370%x371)&x372));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x373 = -16745956470LL;
	int16_t x374 = INT16_MIN;
	uint32_t x375 = 1U;
	int8_t x376 = -1;

	t91 = (x373|((x374%x375)&x376));

	if (t91 != -16745956470LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x378 = 3U;
	int32_t x380 = INT32_MIN;
	volatile uint32_t t92 = 32669467U;

	t92 = (x377|((x378%x379)&x380));

	if (t92 != 195U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x383 = 13793U;
	uint32_t x384 = UINT32_MAX;
	uint32_t t93 = 443295800U;

	t93 = (x381|((x382%x383)&x384));

	if (t93 != 4294967279U) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x385 = INT16_MAX;
	static uint16_t x386 = 26835U;
	volatile uint32_t x387 = 3503U;
	volatile uint64_t x388 = 16583LLU;

	t94 = (x385|((x386%x387)&x388));

	if (t94 != 32767LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x389 = -1;
	int16_t x390 = -200;
	volatile int32_t x392 = -1;
	int32_t t95 = -76229;

	t95 = (x389|((x390%x391)&x392));

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x393 = INT64_MAX;
	static uint32_t x394 = UINT32_MAX;
	volatile int64_t t96 = INT64_MAX;

	t96 = (x393|((x394%x395)&x396));

	if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x397 = INT16_MAX;
	static int64_t x400 = INT64_MIN;
	int64_t t97 = -7242LL;

	t97 = (x397|((x398%x399)&x400));

	if (t97 != 32767LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x401 = 29;
	uint8_t x402 = 14U;
	static uint16_t x403 = 3U;
	int16_t x404 = -1;
	volatile int32_t t98 = -3;

	t98 = (x401|((x402%x403)&x404));

	if (t98 != 31) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x405 = INT32_MIN;
	volatile int16_t x406 = INT16_MAX;
	int32_t x407 = INT32_MIN;

	t99 = (x405|((x406%x407)&x408));

	if (t99 != -2147451008) { NG(); } else { ; }
	
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

