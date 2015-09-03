#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x3 = INT32_MIN;
volatile int32_t t1 = -1450;
int32_t x10 = 336;
uint64_t x20 = 3707494375296127438LLU;
uint64_t t4 = UINT64_MAX;
volatile uint64_t t5 = 111459824LLU;
static int32_t x26 = INT32_MIN;
uint8_t x27 = 8U;
int32_t x32 = 15;
int64_t t8 = 1118309858400659LL;
volatile int64_t t11 = 3747850040431453738LL;
int16_t x52 = 1056;
uint64_t t12 = 2747017219268940LLU;
uint64_t x56 = UINT64_MAX;
int16_t x58 = INT16_MAX;
uint32_t x64 = UINT32_MAX;
static volatile uint32_t t15 = 112543429U;
static int64_t x68 = 2380226LL;
volatile uint64_t t17 = 6352998LLU;
int8_t x73 = INT8_MAX;
int8_t x74 = -2;
static int32_t x75 = 29012532;
int64_t x77 = 857LL;
static uint64_t x87 = 195537468819562857LLU;
static volatile uint64_t t21 = 109493940797984164LLU;
static int8_t x99 = 15;
int8_t x106 = -1;
int64_t t26 = 143853LL;
volatile int16_t x112 = -1;
int32_t x125 = INT32_MAX;
static int16_t x135 = INT16_MIN;
int8_t x148 = INT8_MIN;
volatile uint16_t x162 = 0U;
static int16_t x163 = INT16_MAX;
volatile int64_t t40 = 3LL;
int64_t x165 = INT64_MIN;
int64_t x171 = INT64_MIN;
int64_t t42 = 1260497517LL;
int64_t x177 = INT64_MIN;
static volatile int8_t x184 = INT8_MIN;
volatile int64_t t45 = 1570491806398LL;
static volatile int32_t t46 = 0;
static int64_t x193 = -1LL;
int16_t x198 = 564;
static int32_t x201 = -1;
static uint64_t x211 = UINT64_MAX;
volatile int32_t t54 = 113855;
uint8_t x225 = 0U;
uint64_t x226 = UINT64_MAX;
uint64_t x227 = UINT64_MAX;
uint64_t t56 = 6525419159738780476LLU;
uint32_t x229 = 299U;
volatile int64_t x234 = 3188841818224843752LL;
volatile int64_t t60 = 79LL;
int8_t x245 = -1;
uint64_t x251 = 252LLU;
int16_t x253 = 3793;
uint16_t x255 = UINT16_MAX;
volatile int32_t t63 = 56;
int64_t x257 = INT64_MIN;
int16_t x258 = INT16_MIN;
int64_t x260 = -266255420361727LL;
volatile int64_t x263 = INT64_MIN;
uint64_t x267 = UINT64_MAX;
int32_t x275 = -148509;
static uint64_t x276 = 6794576772591LLU;
static int32_t x278 = -6329;
volatile int8_t x280 = INT8_MIN;
int64_t x298 = -330677LL;
int8_t x299 = -10;
volatile int64_t t74 = 215900LL;
static int32_t x302 = -1;
int32_t x306 = INT32_MIN;
uint16_t x308 = 8748U;
volatile uint64_t x309 = UINT64_MAX;
int64_t x310 = -2789876775LL;
int8_t x313 = 0;
volatile int32_t x323 = INT32_MIN;
uint8_t x324 = 7U;
uint16_t x328 = UINT16_MAX;
uint32_t t81 = 30U;
static int32_t x329 = INT32_MAX;
int32_t x334 = INT32_MIN;
int32_t x336 = INT32_MIN;
static int8_t x338 = INT8_MIN;
int64_t t85 = INT64_MAX;
uint8_t x347 = UINT8_MAX;
int32_t x348 = INT32_MAX;
volatile uint32_t t86 = 10754630U;
static int16_t x350 = 15694;
int8_t x353 = INT8_MAX;
volatile int16_t x359 = 189;
volatile int32_t x369 = 0;
volatile int32_t x370 = INT32_MIN;
uint64_t x374 = 44623651470LLU;
uint16_t x375 = 1524U;
static int8_t x376 = -1;
static int32_t x383 = -1;
volatile uint32_t t96 = UINT32_MAX;
static int16_t x391 = INT16_MAX;
volatile uint64_t t97 = UINT64_MAX;
static int16_t x398 = INT16_MIN;


void f0(void) {
	volatile int64_t x1 = -84885LL;
	uint64_t x2 = 7127202798645859216LLU;
	static uint8_t x4 = 0U;
	static volatile uint64_t t0 = 23LLU;

	t0 = (x1|((x2&x3)^x4));

	if (t0 != 18446744073709466731LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = INT8_MIN;
	int32_t x6 = -1;
	static int16_t x7 = INT16_MIN;
	int16_t x8 = -1;

	t1 = (x5|((x6&x7)^x8));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x9 = UINT16_MAX;
	int64_t x11 = -1LL;
	int16_t x12 = INT16_MIN;
	int64_t t2 = 1233297831LL;

	t2 = (x9|((x10&x11)^x12));

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MAX;
	int8_t x14 = 5;
	static uint32_t x15 = 2U;
	volatile int64_t x16 = INT64_MIN;
	int64_t t3 = -13256201LL;

	t3 = (x13|((x14&x15)^x16));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = UINT64_MAX;
	int16_t x18 = 4;
	uint16_t x19 = 2U;

	t4 = (x17|((x18&x19)^x20));

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x21 = UINT8_MAX;
	uint64_t x22 = UINT64_MAX;
	static int32_t x23 = -721;
	int8_t x24 = INT8_MAX;

	t5 = (x21|((x22&x23)^x24));

	if (t5 != 18446744073709551103LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = -1LL;
	int8_t x28 = INT8_MIN;
	volatile int64_t t6 = -6948775LL;

	t6 = (x25|((x26&x27)^x28));

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = INT32_MIN;
	int32_t x30 = INT32_MIN;
	uint64_t x31 = 3307763LLU;
	static uint64_t t7 = 1428297717LLU;

	t7 = (x29|((x30&x31)^x32));

	if (t7 != 18446744071562067983LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = INT64_MIN;
	int16_t x34 = -1;
	int32_t x35 = INT32_MIN;
	int16_t x36 = INT16_MIN;

	t8 = (x33|((x34&x35)^x36));

	if (t8 != -9223372034707324928LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = -247308424;
	uint16_t x38 = 0U;
	static int16_t x39 = INT16_MIN;
	int8_t x40 = INT8_MIN;
	volatile int32_t t9 = -12;

	t9 = (x37|((x38&x39)^x40));

	if (t9 != -8) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = 627LL;
	uint32_t x42 = 0U;
	static uint16_t x43 = 24U;
	int64_t x44 = -6709223500974242LL;
	int64_t t10 = 881283987532LL;

	t10 = (x41|((x42&x43)^x44));

	if (t10 != -6709223500974209LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	int64_t x46 = INT64_MIN;
	int16_t x47 = 7634;
	static volatile uint32_t x48 = 4U;

	t11 = (x45|((x46&x47)^x48));

	if (t11 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x49 = 100U;
	int32_t x50 = INT32_MIN;
	uint64_t x51 = 22610172978494LLU;

	t12 = (x49|((x50&x51)^x52));

	if (t12 != 22608707847268LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 1211153294750450LLU;
	uint16_t x54 = UINT16_MAX;
	static int64_t x55 = -1LL;
	static volatile uint64_t t13 = 7632539957336715996LLU;

	t13 = (x53|((x54&x55)^x56));

	if (t13 != 18446744073709548274LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = UINT32_MAX;
	uint16_t x59 = 14807U;
	int64_t x60 = -564623588423211828LL;
	volatile int64_t t14 = 223LL;

	t14 = (x57|((x58&x59)^x60));

	if (t14 != -564623586212446209LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MAX;
	static int8_t x62 = INT8_MIN;
	uint32_t x63 = UINT32_MAX;

	t15 = (x61|((x62&x63)^x64));

	if (t15 != 127U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = 0;
	static int64_t x66 = -1116656980032627601LL;
	volatile int32_t x67 = -147260999;
	int64_t t16 = 8388264680LL;

	t16 = (x65|((x66&x67)^x68));

	if (t16 != -1116656980168766997LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x69 = 58U;
	volatile int32_t x70 = INT32_MIN;
	uint64_t x71 = UINT64_MAX;
	volatile int64_t x72 = -1LL;

	t17 = (x69|((x70&x71)^x72));

	if (t17 != 2147483647LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x76 = 2187U;
	static int32_t t18 = -45758074;

	t18 = (x73|((x74&x75)^x76));

	if (t18 != 29014783) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x78 = INT8_MIN;
	static int16_t x79 = INT16_MIN;
	uint64_t x80 = 53809513892LLU;
	volatile uint64_t t19 = 236498129773LLU;

	t19 = (x77|((x78&x79)^x80));

	if (t19 != 18446744019900008445LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = UINT16_MAX;
	volatile int32_t x82 = INT32_MIN;
	static int32_t x83 = 5;
	int8_t x84 = 10;
	volatile int32_t t20 = 322305398;

	t20 = (x81|((x82&x83)^x84));

	if (t20 != 65535) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = 2495U;
	int8_t x86 = -1;
	volatile uint32_t x88 = UINT32_MAX;

	t21 = (x85|((x86&x87)^x88));

	if (t21 != 195537466897932223LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = -96LL;
	uint8_t x90 = 53U;
	int16_t x91 = INT16_MIN;
	int64_t x92 = INT64_MAX;
	int64_t t22 = -3863696238786087817LL;

	t22 = (x89|((x90&x91)^x92));

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = 13373439LLU;
	int32_t x94 = INT32_MIN;
	uint32_t x95 = 101578U;
	int8_t x96 = -1;
	static volatile uint64_t t23 = 178448158130302LLU;

	t23 = (x93|((x94&x95)^x96));

	if (t23 != 4294967295LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = 2;
	int8_t x98 = -1;
	uint32_t x100 = 124U;
	static uint32_t t24 = 994U;

	t24 = (x97|((x98&x99)^x100));

	if (t24 != 115U) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = 389U;
	uint16_t x102 = 5602U;
	int64_t x103 = INT64_MAX;
	int64_t x104 = INT64_MAX;
	int64_t t25 = -3606694LL;

	t25 = (x101|((x102&x103)^x104));

	if (t25 != 9223372036854770589LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = 7058642U;
	int8_t x107 = -1;
	int64_t x108 = -1LL;

	t26 = (x105|((x106&x107)^x108));

	if (t26 != 7058642LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MIN;
	int16_t x110 = -9298;
	uint64_t x111 = UINT64_MAX;
	uint64_t t27 = 1266856661759902LLU;

	t27 = (x109|((x110&x111)^x112));

	if (t27 != 18446744071562077265LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MIN;
	static uint8_t x114 = UINT8_MAX;
	int32_t x115 = -8790819;
	uint8_t x116 = 10U;
	volatile int32_t t28 = -31757;

	t28 = (x113|((x114&x115)^x116));

	if (t28 != -32553) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -50;
	int8_t x118 = -1;
	int32_t x119 = -1;
	uint32_t x120 = 66U;
	uint32_t t29 = UINT32_MAX;

	t29 = (x117|((x118&x119)^x120));

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int64_t x121 = -90208540982LL;
	volatile uint8_t x122 = 43U;
	static int32_t x123 = -2491;
	uint16_t x124 = 6833U;
	volatile int64_t t30 = -1LL;

	t30 = (x121|((x122&x123)^x124));

	if (t30 != -90208534790LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x126 = UINT64_MAX;
	int64_t x127 = -21034792959312140LL;
	int8_t x128 = -1;
	static volatile uint64_t t31 = 24858155932LLU;

	t31 = (x125|((x126&x127)^x128));

	if (t31 != 21034793458204671LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x129 = 48;
	int32_t x130 = -1;
	uint32_t x131 = UINT32_MAX;
	static int8_t x132 = INT8_MAX;
	uint32_t t32 = 473U;

	t32 = (x129|((x130&x131)^x132));

	if (t32 != 4294967216U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MIN;
	int16_t x134 = INT16_MIN;
	int8_t x136 = 2;
	int32_t t33 = -766446;

	t33 = (x133|((x134&x135)^x136));

	if (t33 != -126) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x137 = -17769;
	int8_t x138 = INT8_MAX;
	uint64_t x139 = UINT64_MAX;
	volatile uint16_t x140 = 24333U;
	static volatile uint64_t t34 = 16458121143816872LLU;

	t34 = (x137|((x138&x139)^x140));

	if (t34 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x141 = 2U;
	int8_t x142 = -1;
	int16_t x143 = INT16_MIN;
	uint32_t x144 = 3U;
	uint32_t t35 = 7645908U;

	t35 = (x141|((x142&x143)^x144));

	if (t35 != 4294934531U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x145 = UINT16_MAX;
	uint16_t x146 = 7U;
	int8_t x147 = -19;
	int32_t t36 = -3676096;

	t36 = (x145|((x146&x147)^x148));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = 11857957421816LLU;
	static int8_t x150 = -24;
	uint32_t x151 = 187U;
	uint8_t x152 = 13U;
	static volatile uint64_t t37 = 1255250470207LLU;

	t37 = (x149|((x150&x151)^x152));

	if (t37 != 11857957421821LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = 5LL;
	int8_t x154 = 30;
	int32_t x155 = -1;
	uint16_t x156 = UINT16_MAX;
	int64_t t38 = -8581174003789LL;

	t38 = (x153|((x154&x155)^x156));

	if (t38 != 65509LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MAX;
	static volatile int32_t x158 = -191641;
	static volatile uint32_t x159 = 429480U;
	static int16_t x160 = INT16_MAX;
	volatile uint32_t t39 = 96147U;

	t39 = (x157|((x158&x159)^x160));

	if (t39 != 294911U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MIN;
	static int64_t x164 = -1LL;

	t40 = (x161|((x162&x163)^x164));

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x166 = 116U;
	int16_t x167 = INT16_MAX;
	int32_t x168 = INT32_MAX;
	static int64_t t41 = 16732LL;

	t41 = (x165|((x166&x167)^x168));

	if (t41 != -9223372034707292277LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MAX;
	volatile int32_t x170 = INT32_MIN;
	uint32_t x172 = 15133U;

	t42 = (x169|((x170&x171)^x172));

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x173 = 2112U;
	volatile uint64_t x174 = 22129980796LLU;
	uint8_t x175 = 12U;
	uint32_t x176 = 22815U;
	uint64_t t43 = 10401LLU;

	t43 = (x173|((x174&x175)^x176));

	if (t43 != 22867LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x178 = INT32_MIN;
	int64_t x179 = -2390450685514251LL;
	uint32_t x180 = 286022U;
	static int64_t t44 = -124012020219LL;

	t44 = (x177|((x178&x179)^x180));

	if (t44 != -2390452095132346LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = UINT8_MAX;
	static uint8_t x182 = 4U;
	volatile int64_t x183 = INT64_MAX;

	t45 = (x181|((x182&x183)^x184));

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x185 = 5809;
	int16_t x186 = INT16_MAX;
	int16_t x187 = -1;
	static int8_t x188 = 14;

	t46 = (x185|((x186&x187)^x188));

	if (t46 != 32753) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = UINT16_MAX;
	uint32_t x190 = 10411740U;
	volatile int64_t x191 = -23187154980LL;
	static uint64_t x192 = UINT64_MAX;
	uint64_t t47 = 100973378148297099LLU;

	t47 = (x189|((x190&x191)^x192));

	if (t47 != 18446744073700114431LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x194 = INT64_MAX;
	int64_t x195 = INT64_MAX;
	volatile int32_t x196 = INT32_MIN;
	volatile int64_t t48 = -1116810831887809LL;

	t48 = (x193|((x194&x195)^x196));

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MIN;
	static int16_t x199 = 0;
	int8_t x200 = -1;
	int64_t t49 = 20386508544898LL;

	t49 = (x197|((x198&x199)^x200));

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x202 = -150;
	int16_t x203 = -2280;
	uint32_t x204 = 4056806U;
	volatile uint32_t t50 = UINT32_MAX;

	t50 = (x201|((x202&x203)^x204));

	if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = UINT32_MAX;
	int16_t x206 = 203;
	int8_t x207 = 14;
	volatile int64_t x208 = -1LL;
	int64_t t51 = 21LL;

	t51 = (x205|((x206&x207)^x208));

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x209 = 0U;
	volatile uint16_t x210 = 7U;
	static int8_t x212 = INT8_MIN;
	volatile uint64_t t52 = 283LLU;

	t52 = (x209|((x210&x211)^x212));

	if (t52 != 18446744073709551495LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = INT8_MIN;
	static volatile int8_t x214 = INT8_MIN;
	uint32_t x215 = 277459970U;
	int16_t x216 = INT16_MIN;
	uint32_t t53 = 249334U;

	t53 = (x213|((x214&x215)^x216));

	if (t53 != 4294967168U) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = -1;
	static uint16_t x218 = 1575U;
	int32_t x219 = -638;
	int16_t x220 = INT16_MAX;

	t54 = (x217|((x218&x219)^x220));

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = INT32_MIN;
	int64_t x222 = INT64_MAX;
	int16_t x223 = -4;
	int8_t x224 = 1;
	int64_t t55 = -6488LL;

	t55 = (x221|((x222&x223)^x224));

	if (t55 != -3LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x228 = -1;

	t56 = (x225|((x226&x227)^x228));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x230 = -14;
	volatile int8_t x231 = INT8_MIN;
	int64_t x232 = INT64_MAX;
	int64_t t57 = 20LL;

	t57 = (x229|((x230&x231)^x232));

	if (t57 != -9223372036854775425LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x233 = UINT8_MAX;
	uint64_t x235 = UINT64_MAX;
	uint64_t x236 = 171710LLU;
	static uint64_t t58 = 216704822LLU;

	t58 = (x233|((x234&x235)^x236));

	if (t58 != 3188841818224674303LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = 2U;
	int32_t x238 = -1;
	static int32_t x239 = -1;
	int16_t x240 = INT16_MAX;
	int32_t t59 = -36215;

	t59 = (x237|((x238&x239)^x240));

	if (t59 != -32766) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x241 = INT32_MIN;
	static int64_t x242 = INT64_MIN;
	static int32_t x243 = INT32_MAX;
	int16_t x244 = INT16_MIN;

	t60 = (x241|((x242&x243)^x244));

	if (t60 != -32768LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x246 = 1736741826055291762LL;
	int64_t x247 = INT64_MIN;
	static int16_t x248 = -1;
	static int64_t t61 = -19600033680525LL;

	t61 = (x245|((x246&x247)^x248));

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x249 = 361LL;
	static int8_t x250 = INT8_MIN;
	volatile int8_t x252 = 0;
	volatile uint64_t t62 = 243LLU;

	t62 = (x249|((x250&x251)^x252));

	if (t62 != 489LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x254 = INT16_MIN;
	int32_t x256 = -1;

	t63 = (x253|((x254&x255)^x256));

	if (t63 != -32769) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x259 = INT16_MAX;
	volatile int64_t t64 = -30815018076282LL;

	t64 = (x257|((x258&x259)^x260));

	if (t64 != -266255420361727LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = -4665LL;
	static uint16_t x262 = UINT16_MAX;
	static volatile uint32_t x264 = 1U;
	int64_t t65 = -107092924853566330LL;

	t65 = (x261|((x262&x263)^x264));

	if (t65 != -4665LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x265 = UINT16_MAX;
	int32_t x266 = INT32_MIN;
	int16_t x268 = 1661;
	static volatile uint64_t t66 = 205140185188694188LLU;

	t66 = (x265|((x266&x267)^x268));

	if (t66 != 18446744071562133503LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x269 = 445U;
	int32_t x270 = INT32_MAX;
	int32_t x271 = INT32_MAX;
	volatile uint64_t x272 = UINT64_MAX;
	volatile uint64_t t67 = 221421886405893LLU;

	t67 = (x269|((x270&x271)^x272));

	if (t67 != 18446744071562068413LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int64_t x273 = INT64_MIN;
	int16_t x274 = INT16_MIN;
	volatile uint64_t t68 = 559158502184416252LLU;

	t68 = (x273|((x274&x275)^x276));

	if (t68 != 18446737279132646895LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x277 = 5931LLU;
	uint16_t x279 = UINT16_MAX;
	static uint64_t t69 = 239538004435LLU;

	t69 = (x277|((x278&x279)^x280));

	if (t69 != 18446744073709494255LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x281 = INT64_MIN;
	int64_t x282 = 129069530069838LL;
	uint16_t x283 = 2U;
	static uint64_t x284 = 776756603402993LLU;
	uint64_t t70 = 358325LLU;

	t70 = (x281|((x282&x283)^x284));

	if (t70 != 9224148793458178803LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = -1;
	static int16_t x286 = -1;
	static uint64_t x287 = 81128238LLU;
	int8_t x288 = -1;
	volatile uint64_t t71 = UINT64_MAX;

	t71 = (x285|((x286&x287)^x288));

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = 3;
	static volatile uint32_t x290 = 71027090U;
	int64_t x291 = -64608326699431LL;
	uint8_t x292 = UINT8_MAX;
	static volatile int64_t t72 = 247LL;

	t72 = (x289|((x290&x291)^x292));

	if (t72 != 2293999LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = INT8_MIN;
	int8_t x294 = -1;
	int16_t x295 = -1;
	int64_t x296 = INT64_MAX;
	volatile int64_t t73 = 13948776LL;

	t73 = (x293|((x294&x295)^x296));

	if (t73 != -128LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = -307;
	static volatile uint8_t x300 = 106U;

	t74 = (x297|((x298&x299)^x300));

	if (t74 != -275LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x301 = -16;
	uint64_t x303 = 3847024940407LLU;
	int32_t x304 = INT32_MAX;
	uint64_t t75 = 260185659563030954LLU;

	t75 = (x301|((x302&x303)^x304));

	if (t75 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x305 = 17518U;
	int32_t x307 = 0;
	int32_t t76 = -1339137;

	t76 = (x305|((x306&x307)^x308));

	if (t76 != 26222) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint16_t x311 = UINT16_MAX;
	uint32_t x312 = UINT32_MAX;
	uint64_t t77 = UINT64_MAX;

	t77 = (x309|((x310&x311)^x312));

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x314 = 3;
	int64_t x315 = -1LL;
	static int32_t x316 = INT32_MIN;
	int64_t t78 = 68983285931915LL;

	t78 = (x313|((x314&x315)^x316));

	if (t78 != -2147483645LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = INT64_MIN;
	static uint8_t x318 = 14U;
	volatile int8_t x319 = INT8_MIN;
	int32_t x320 = INT32_MIN;
	static volatile int64_t t79 = 180LL;

	t79 = (x317|((x318&x319)^x320));

	if (t79 != -2147483648LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x321 = -1;
	uint32_t x322 = UINT32_MAX;
	uint32_t t80 = UINT32_MAX;

	t80 = (x321|((x322&x323)^x324));

	if (t80 != UINT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = 1;
	uint32_t x326 = UINT32_MAX;
	static uint32_t x327 = 2U;

	t81 = (x325|((x326&x327)^x328));

	if (t81 != 65533U) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x330 = INT32_MAX;
	static int16_t x331 = INT16_MAX;
	static int8_t x332 = -7;
	static int32_t t82 = 14;

	t82 = (x329|((x330&x331)^x332));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x333 = 2475653119LLU;
	uint32_t x335 = 2133301426U;
	static uint64_t t83 = 15610571178176834LLU;

	t83 = (x333|((x334&x335)^x336));

	if (t83 != 2475653119LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x337 = INT64_MIN;
	int64_t x339 = -66878031001771743LL;
	int64_t x340 = 1422085025637LL;
	volatile int64_t t84 = 9LL;

	t84 = (x337|((x338&x339)^x340));

	if (t84 != -66877228293304731LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = INT64_MAX;
	uint32_t x342 = 14631U;
	int8_t x343 = 0;
	uint32_t x344 = 119U;

	t85 = (x341|((x342&x343)^x344));

	if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x345 = 709U;
	volatile int16_t x346 = INT16_MIN;

	t86 = (x345|((x346&x347)^x348));

	if (t86 != 2147483647U) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x349 = UINT16_MAX;
	int16_t x351 = INT16_MAX;
	int8_t x352 = 1;
	volatile int32_t t87 = 188;

	t87 = (x349|((x350&x351)^x352));

	if (t87 != 65535) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x354 = INT16_MAX;
	int8_t x355 = -1;
	uint32_t x356 = 109553544U;
	volatile uint32_t t88 = 67662U;

	t88 = (x353|((x354&x355)^x356));

	if (t88 != 109566079U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x357 = -796;
	int32_t x358 = -78358298;
	static int64_t x360 = INT64_MAX;
	static int64_t t89 = -3207839822270729LL;

	t89 = (x357|((x358&x359)^x360));

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = 135440837177313128LL;
	static volatile int8_t x362 = 0;
	uint32_t x363 = 787U;
	volatile int16_t x364 = -1;
	volatile int64_t t90 = -2714504560525085555LL;

	t90 = (x361|((x362&x363)^x364));

	if (t90 != 135440840196620287LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x365 = 8609353722LLU;
	uint16_t x366 = UINT16_MAX;
	int64_t x367 = INT64_MAX;
	int64_t x368 = -1LL;
	volatile uint64_t t91 = 37424234LLU;

	t91 = (x365|((x366&x367)^x368));

	if (t91 != 18446744073709506554LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x371 = INT64_MAX;
	int64_t x372 = -1LL;
	volatile int64_t t92 = 4098905101535705LL;

	t92 = (x369|((x370&x371)^x372));

	if (t92 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x373 = UINT64_MAX;
	volatile uint64_t t93 = UINT64_MAX;

	t93 = (x373|((x374&x375)^x376));

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = INT32_MIN;
	uint32_t x378 = 285820U;
	uint8_t x379 = UINT8_MAX;
	int16_t x380 = -1;
	volatile uint32_t t94 = 61425772U;

	t94 = (x377|((x378&x379)^x380));

	if (t94 != 4294967171U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x381 = 90U;
	uint8_t x382 = 62U;
	static uint16_t x384 = 312U;
	int32_t t95 = 142;

	t95 = (x381|((x382&x383)^x384));

	if (t95 != 350) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x385 = UINT32_MAX;
	uint32_t x386 = 145U;
	uint32_t x387 = UINT32_MAX;
	uint32_t x388 = UINT32_MAX;

	t96 = (x385|((x386&x387)^x388));

	if (t96 != UINT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x389 = 945U;
	volatile int32_t x390 = INT32_MIN;
	uint64_t x392 = UINT64_MAX;

	t97 = (x389|((x390&x391)^x392));

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x393 = INT32_MIN;
	int64_t x394 = INT64_MAX;
	volatile uint8_t x395 = 13U;
	static int16_t x396 = INT16_MIN;
	int64_t t98 = -82767408702LL;

	t98 = (x393|((x394&x395)^x396));

	if (t98 != -32755LL) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int16_t x397 = 1;
	volatile int32_t x399 = INT32_MIN;
	volatile uint16_t x400 = 1U;
	static volatile int32_t t99 = 285;

	t99 = (x397|((x398&x399)^x400));

	if (t99 != -2147483647) { NG(); } else { ; }
	
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

