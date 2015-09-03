#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = 2U;
static volatile int32_t x5 = INT32_MAX;
int16_t x6 = 7;
static int64_t t3 = -8779378782097926LL;
volatile uint64_t t4 = 6720LLU;
volatile uint32_t x29 = 10U;
int32_t t7 = 0;
int16_t x52 = INT16_MIN;
static uint32_t x54 = 131091070U;
int8_t x56 = -2;
int64_t x65 = INT64_MAX;
int64_t t14 = 1LL;
static int16_t x88 = -510;
static volatile int64_t t16 = -20910822606LL;
int16_t x90 = INT16_MAX;
int32_t x92 = 72332;
static int64_t x94 = -9143951263LL;
int8_t x102 = 0;
int64_t x107 = -222572683940175LL;
static uint8_t x109 = UINT8_MAX;
int64_t t21 = 1LL;
int32_t x113 = 1;
uint32_t x115 = UINT32_MAX;
volatile uint64_t x116 = 1045517612LLU;
int16_t x118 = INT16_MIN;
uint16_t x119 = 25U;
volatile uint16_t x129 = 3U;
int8_t x132 = 58;
uint8_t x138 = 1U;
volatile uint64_t t26 = 5LLU;
uint16_t x142 = UINT16_MAX;
static volatile int16_t x143 = INT16_MIN;
volatile uint32_t x152 = 370U;
volatile uint32_t t29 = 582226548U;
uint16_t x174 = 2722U;
int16_t x176 = INT16_MAX;
uint16_t x177 = 11898U;
int8_t x178 = 4;
static int16_t x181 = INT16_MAX;
uint32_t x183 = 745U;
uint32_t t34 = 61U;
int8_t x185 = INT8_MAX;
static int8_t x187 = INT8_MIN;
volatile int32_t t35 = -193213557;
volatile int64_t t36 = -838866533610447LL;
static uint64_t x224 = 48355469LLU;
static uint64_t t40 = 1091373341673953LLU;
int8_t x228 = -31;
static volatile uint64_t t43 = 154717LLU;
int8_t x254 = -1;
static uint64_t x255 = 24344106097180LLU;
int64_t t45 = -47707668LL;
int8_t x262 = INT8_MIN;
int8_t x264 = -1;
static uint8_t x267 = 77U;
int32_t x285 = INT32_MIN;
volatile int32_t x289 = INT32_MIN;
volatile int64_t t50 = 13036LL;
volatile int64_t x299 = INT64_MAX;
int64_t x300 = 709306371LL;
static int8_t x304 = INT8_MIN;
int16_t x306 = INT16_MIN;
uint64_t t53 = 146605624472LLU;
uint32_t x310 = 6247U;
int8_t x312 = INT8_MIN;
int8_t x320 = -1;
uint64_t t55 = 1LLU;
uint64_t x322 = 34337LLU;
uint64_t t56 = 2945541754850962711LLU;
static int64_t x325 = -1LL;
uint8_t x326 = UINT8_MAX;
int32_t x327 = INT32_MIN;
int8_t x335 = INT8_MIN;
int16_t x339 = -1;
static uint8_t x343 = 3U;
static uint64_t t61 = 26690932729674LLU;
int32_t x349 = 1;
volatile uint32_t x351 = UINT32_MAX;
uint32_t t63 = 146U;
uint64_t x377 = UINT64_MAX;
static volatile uint16_t x378 = 4U;
uint8_t x380 = 101U;
int32_t x387 = -1;
int8_t x388 = -1;
int64_t x392 = -4634852443564LL;
static int8_t x398 = INT8_MIN;
int64_t x403 = -58931492878LL;
uint8_t x408 = UINT8_MAX;
int64_t x413 = -1LL;
uint32_t x419 = UINT32_MAX;
static volatile uint64_t t73 = 3423110LLU;
int16_t x423 = 1;
uint32_t x427 = UINT32_MAX;
uint64_t x436 = 62551LLU;
int32_t x438 = -1;
volatile int64_t t78 = 176610952LL;
int32_t x456 = INT32_MAX;
int8_t x457 = 1;
int8_t x458 = INT8_MAX;
uint16_t x461 = UINT16_MAX;
uint8_t x475 = UINT8_MAX;
int8_t x478 = 57;
volatile int32_t t86 = 374848;
int64_t x482 = -1LL;
int16_t x486 = -4;
int32_t x487 = -81;
static int32_t t89 = 4495564;
uint64_t x511 = 596157583421769303LLU;
volatile int16_t x518 = 23;
int64_t x519 = INT64_MIN;
static uint64_t t93 = 695073144301878917LLU;
uint8_t x527 = 24U;
volatile uint32_t x529 = UINT32_MAX;
int16_t x543 = 3087;


void f0(void) {
	uint32_t x2 = 59562485U;
	int32_t x3 = 54950;
	int8_t x4 = INT8_MIN;
	static volatile uint32_t t0 = 22U;

	t0 = ((x1/(x2+x3))%x4);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x7 = INT8_MIN;
	volatile int64_t x8 = -1LL;
	static int64_t t1 = -6LL;

	t1 = ((x5/(x6+x7))%x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = INT64_MAX;
	int32_t x14 = -1;
	static uint8_t x15 = UINT8_MAX;
	volatile int8_t x16 = INT8_MAX;
	int64_t t2 = 351418778LL;

	t2 = ((x13/(x14+x15))%x16);

	if (t2 != 4LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x21 = INT64_MAX;
	int16_t x22 = -1504;
	int64_t x23 = INT64_MAX;
	static volatile int8_t x24 = -1;

	t3 = ((x21/(x22+x23))%x24);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x25 = 2135401332184601LLU;
	int64_t x26 = 2LL;
	static uint64_t x27 = UINT64_MAX;
	volatile int16_t x28 = INT16_MIN;

	t4 = ((x25/(x26+x27))%x28);

	if (t4 != 2135401332184601LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x30 = INT16_MIN;
	static int64_t x31 = -38475919110LL;
	int16_t x32 = -330;
	static int64_t t5 = -11884LL;

	t5 = ((x29/(x30+x31))%x32);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x33 = -1932281468LL;
	static int8_t x34 = -1;
	uint32_t x35 = UINT32_MAX;
	int64_t x36 = 5428LL;
	int64_t t6 = 18123379361425LL;

	t6 = ((x33/(x34+x35))%x36);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x41 = -1;
	uint16_t x42 = 5743U;
	volatile int16_t x43 = 207;
	static int32_t x44 = INT32_MIN;

	t7 = ((x41/(x42+x43))%x44);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x49 = INT8_MIN;
	static int8_t x50 = INT8_MIN;
	int32_t x51 = 901063;
	int32_t t8 = 7018;

	t8 = ((x49/(x50+x51))%x52);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x53 = INT32_MIN;
	int64_t x55 = -1LL;
	static int64_t t9 = 131LL;

	t9 = ((x53/(x54+x55))%x56);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x57 = 4U;
	static volatile uint16_t x58 = 253U;
	volatile uint8_t x59 = 11U;
	uint16_t x60 = 86U;
	volatile int32_t t10 = -152955140;

	t10 = ((x57/(x58+x59))%x60);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x61 = INT64_MIN;
	static uint32_t x62 = 698123U;
	volatile int16_t x63 = INT16_MIN;
	int8_t x64 = -1;
	int64_t t11 = -3LL;

	t11 = ((x61/(x62+x63))%x64);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x66 = INT64_MIN;
	int32_t x67 = INT32_MAX;
	static int64_t x68 = -834362281520864262LL;
	int64_t t12 = 1332255LL;

	t12 = ((x65/(x66+x67))%x68);

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x69 = -355650617668956LL;
	int8_t x70 = INT8_MIN;
	static uint64_t x71 = 12235630844415533LLU;
	int32_t x72 = -2008012;
	volatile uint64_t t13 = 20824142554625LLU;

	t13 = ((x69/(x70+x71))%x72);

	if (t13 != 1507LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x73 = -3;
	int32_t x74 = INT32_MIN;
	volatile int64_t x75 = INT64_MAX;
	int32_t x76 = -223967;

	t14 = ((x73/(x74+x75))%x76);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x81 = -66;
	volatile int16_t x82 = 6;
	volatile int32_t x83 = -457;
	uint32_t x84 = UINT32_MAX;
	volatile uint32_t t15 = 476988821U;

	t15 = ((x81/(x82+x83))%x84);

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x85 = 36200LL;
	static uint8_t x86 = 2U;
	uint16_t x87 = UINT16_MAX;

	t16 = ((x85/(x86+x87))%x88);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x89 = INT8_MAX;
	static int32_t x91 = INT32_MIN;
	int32_t t17 = -512199757;

	t17 = ((x89/(x90+x91))%x92);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x93 = INT32_MIN;
	int64_t x95 = -410229113594LL;
	uint32_t x96 = UINT32_MAX;
	volatile int64_t t18 = -54258865LL;

	t18 = ((x93/(x94+x95))%x96);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x101 = 28;
	int64_t x103 = -3802857416LL;
	int16_t x104 = -1;
	int64_t t19 = -9727092139LL;

	t19 = ((x101/(x102+x103))%x104);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x105 = 22068U;
	static int8_t x106 = INT8_MAX;
	uint16_t x108 = UINT16_MAX;
	volatile int64_t t20 = 13966611LL;

	t20 = ((x105/(x106+x107))%x108);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x110 = -190524978LL;
	uint32_t x111 = UINT32_MAX;
	int32_t x112 = -1;

	t21 = ((x109/(x110+x111))%x112);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x114 = INT32_MAX;
	volatile uint64_t t22 = 10342LLU;

	t22 = ((x113/(x114+x115))%x116);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x117 = 282U;
	uint32_t x120 = 3U;
	volatile uint32_t t23 = 11U;

	t23 = ((x117/(x118+x119))%x120);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x125 = 131969785U;
	uint32_t x126 = 69135938U;
	int64_t x127 = -12LL;
	int16_t x128 = INT16_MIN;
	static int64_t t24 = 55336196LL;

	t24 = ((x125/(x126+x127))%x128);

	if (t24 != 1LL) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int64_t x130 = -1LL;
	static int32_t x131 = INT32_MIN;
	int64_t t25 = 13248970LL;

	t25 = ((x129/(x130+x131))%x132);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x137 = -1;
	uint64_t x139 = 9829932217LLU;
	volatile uint8_t x140 = 23U;

	t26 = ((x137/(x138+x139))%x140);

	if (t26 != 6LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x141 = 707434097768526442LLU;
	static uint64_t x144 = 510LLU;
	static uint64_t t27 = 126046426LLU;

	t27 = ((x141/(x142+x143))%x144);

	if (t27 != 222LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x145 = 0U;
	static volatile uint8_t x146 = UINT8_MAX;
	int8_t x147 = INT8_MIN;
	int32_t x148 = INT32_MIN;
	volatile int32_t t28 = 580527569;

	t28 = ((x145/(x146+x147))%x148);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x149 = -176273;
	uint16_t x150 = UINT16_MAX;
	int16_t x151 = INT16_MAX;

	t29 = ((x149/(x150+x151))%x152);

	if (t29 != 265U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x157 = INT8_MIN;
	static uint8_t x158 = 3U;
	static uint16_t x159 = 5U;
	int64_t x160 = -3547982LL;
	volatile int64_t t30 = 3233317LL;

	t30 = ((x157/(x158+x159))%x160);

	if (t30 != -16LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x161 = INT16_MAX;
	int8_t x162 = INT8_MIN;
	int8_t x163 = -15;
	static uint64_t x164 = 19815804462940LLU;
	volatile uint64_t t31 = 33133349287LLU;

	t31 = ((x161/(x162+x163))%x164);

	if (t31 != 13541114075987LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x173 = INT32_MIN;
	int8_t x175 = 1;
	static volatile int32_t t32 = -24;

	t32 = ((x173/(x174+x175))%x176);

	if (t32 != -2238) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x179 = INT16_MAX;
	int64_t x180 = -1LL;
	int64_t t33 = 80LL;

	t33 = ((x177/(x178+x179))%x180);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x182 = -1;
	int8_t x184 = 5;

	t34 = ((x181/(x182+x183))%x184);

	if (t34 != 4U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x186 = -1;
	uint16_t x188 = 387U;

	t35 = ((x185/(x186+x187))%x188);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x193 = UINT16_MAX;
	static int64_t x194 = -1LL;
	int8_t x195 = 0;
	int32_t x196 = -1;

	t36 = ((x193/(x194+x195))%x196);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x205 = INT64_MIN;
	volatile int8_t x206 = INT8_MIN;
	int16_t x207 = 0;
	static uint32_t x208 = 60U;
	volatile int64_t t37 = 2214017611716488LL;

	t37 = ((x205/(x206+x207))%x208);

	if (t37 != 16LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x209 = -4;
	volatile uint16_t x210 = UINT16_MAX;
	uint8_t x211 = UINT8_MAX;
	volatile uint32_t x212 = 1U;
	uint32_t t38 = 924U;

	t38 = ((x209/(x210+x211))%x212);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x213 = INT64_MIN;
	int8_t x214 = INT8_MAX;
	int32_t x215 = INT32_MIN;
	int8_t x216 = INT8_MAX;
	volatile int64_t t39 = -31LL;

	t39 = ((x213/(x214+x215))%x216);

	if (t39 != 16LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x221 = 164182212;
	int16_t x222 = -1;
	volatile int16_t x223 = -1;

	t40 = ((x221/(x222+x223))%x224);

	if (t40 != 47272874LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x225 = 1964U;
	int32_t x226 = -1;
	int16_t x227 = -1;
	volatile uint32_t t41 = 40833U;

	t41 = ((x225/(x226+x227))%x228);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x237 = INT32_MAX;
	uint16_t x238 = UINT16_MAX;
	uint8_t x239 = UINT8_MAX;
	uint64_t x240 = 122LLU;
	volatile uint64_t t42 = 409177LLU;

	t42 = ((x237/(x238+x239))%x240);

	if (t42 != 67LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x241 = -14118325LL;
	int16_t x242 = INT16_MIN;
	uint16_t x243 = 5U;
	uint64_t x244 = 118552052LLU;

	t43 = ((x241/(x242+x243))%x244);

	if (t43 != 430LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x253 = 153850;
	static volatile int32_t x256 = INT32_MAX;
	static volatile uint64_t t44 = 119845372LLU;

	t44 = ((x253/(x254+x255))%x256);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x257 = INT64_MIN;
	int8_t x258 = INT8_MAX;
	uint32_t x259 = UINT32_MAX;
	int64_t x260 = INT64_MIN;

	t45 = ((x257/(x258+x259))%x260);

	if (t45 != -73201365371863300LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x261 = UINT8_MAX;
	static int32_t x263 = INT32_MAX;
	volatile int32_t t46 = 41832;

	t46 = ((x261/(x262+x263))%x264);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x265 = 1371LL;
	volatile int32_t x266 = INT32_MIN;
	int64_t x268 = INT64_MIN;
	int64_t t47 = 1946159561LL;

	t47 = ((x265/(x266+x267))%x268);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x281 = -1;
	static int32_t x282 = INT32_MIN;
	static uint32_t x283 = UINT32_MAX;
	int32_t x284 = INT32_MAX;
	volatile uint32_t t48 = 708171U;

	t48 = ((x281/(x282+x283))%x284);

	if (t48 != 2U) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x286 = 9U;
	int32_t x287 = 1;
	int32_t x288 = INT32_MAX;
	volatile int32_t t49 = 417832635;

	t49 = ((x285/(x286+x287))%x288);

	if (t49 != -214748364) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int8_t x290 = 57;
	uint8_t x291 = UINT8_MAX;
	int64_t x292 = -79203459543LL;

	t50 = ((x289/(x290+x291))%x292);

	if (t50 != -6882960LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x297 = 56U;
	int32_t x298 = -1;
	int64_t t51 = 4094645094LL;

	t51 = ((x297/(x298+x299))%x300);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x301 = -1;
	uint32_t x302 = 1168778U;
	int8_t x303 = INT8_MAX;
	volatile uint32_t t52 = 11U;

	t52 = ((x301/(x302+x303))%x304);

	if (t52 != 3674U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x305 = INT64_MAX;
	uint64_t x307 = 6041503LLU;
	static int8_t x308 = -63;

	t53 = ((x305/(x306+x307))%x308);

	if (t53 != 1534993977410LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x309 = INT32_MAX;
	uint16_t x311 = UINT16_MAX;
	static volatile uint32_t t54 = 931U;

	t54 = ((x309/(x310+x311))%x312);

	if (t54 != 29916U) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x317 = UINT64_MAX;
	int16_t x318 = 5778;
	uint32_t x319 = 15U;

	t55 = ((x317/(x318+x319))%x320);

	if (t55 != 3184316256466347LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x321 = INT64_MIN;
	int32_t x323 = INT32_MIN;
	volatile int64_t x324 = -2201405240LL;

	t56 = ((x321/(x322+x323))%x324);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x328 = 3U;
	int64_t t57 = -1853818706345870933LL;

	t57 = ((x325/(x326+x327))%x328);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x329 = -25;
	int32_t x330 = INT32_MIN;
	static uint64_t x331 = 86939LLU;
	uint32_t x332 = 15600194U;
	static volatile uint64_t t58 = 59318740999814142LLU;

	t58 = ((x329/(x330+x331))%x332);

	if (t58 != 1LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x333 = UINT16_MAX;
	int8_t x334 = -1;
	int8_t x336 = INT8_MIN;
	volatile int32_t t59 = 51;

	t59 = ((x333/(x334+x335))%x336);

	if (t59 != -124) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x337 = INT64_MAX;
	int32_t x338 = 2192842;
	uint64_t x340 = 3520230377574335595LLU;
	uint64_t t60 = 274681196910509LLU;

	t60 = ((x337/(x338+x339))%x340);

	if (t60 != 4206128960948LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x341 = 0LLU;
	uint8_t x342 = UINT8_MAX;
	int64_t x344 = INT64_MIN;

	t61 = ((x341/(x342+x343))%x344);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x345 = UINT16_MAX;
	uint8_t x346 = UINT8_MAX;
	static volatile int16_t x347 = 1;
	uint16_t x348 = 412U;
	int32_t t62 = -855854395;

	t62 = ((x345/(x346+x347))%x348);

	if (t62 != 255) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x350 = INT16_MAX;
	int32_t x352 = -158894;

	t63 = ((x349/(x350+x351))%x352);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x357 = -25830502005547LL;
	int32_t x358 = 611;
	uint64_t x359 = 4253039186LLU;
	static int64_t x360 = INT64_MIN;
	static volatile uint64_t t64 = 1709LLU;

	t64 = ((x357/(x358+x359))%x360);

	if (t64 != 4337302053LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x369 = INT64_MAX;
	uint32_t x370 = 14U;
	int8_t x371 = 1;
	volatile int16_t x372 = 423;
	int64_t t65 = 45297LL;

	t65 = ((x369/(x370+x371))%x372);

	if (t65 != 381LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x379 = 4U;
	uint64_t t66 = 285402332220LLU;

	t66 = ((x377/(x378+x379))%x380);

	if (t66 != 72LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x385 = -55;
	int16_t x386 = INT16_MIN;
	int32_t t67 = 0;

	t67 = ((x385/(x386+x387))%x388);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x389 = UINT8_MAX;
	int32_t x390 = -1;
	volatile uint16_t x391 = 20U;
	volatile int64_t t68 = -28LL;

	t68 = ((x389/(x390+x391))%x392);

	if (t68 != 13LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x397 = INT32_MIN;
	int32_t x399 = INT32_MAX;
	int64_t x400 = 993521412LL;
	static int64_t t69 = 3LL;

	t69 = ((x397/(x398+x399))%x400);

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x401 = INT16_MIN;
	volatile int32_t x402 = INT32_MIN;
	int8_t x404 = -1;
	volatile int64_t t70 = -367282LL;

	t70 = ((x401/(x402+x403))%x404);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x405 = INT64_MIN;
	volatile int32_t x406 = -1;
	volatile uint32_t x407 = 0U;
	volatile int64_t t71 = 2063142646996LL;

	t71 = ((x405/(x406+x407))%x408);

	if (t71 != -128LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x414 = -33848940928973884LL;
	int8_t x415 = -5;
	volatile int16_t x416 = INT16_MAX;
	volatile int64_t t72 = 967010018083147715LL;

	t72 = ((x413/(x414+x415))%x416);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x417 = 106531LLU;
	static int64_t x418 = -1LL;
	int64_t x420 = -1LL;

	t73 = ((x417/(x418+x419))%x420);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x421 = 30U;
	int8_t x422 = INT8_MAX;
	uint16_t x424 = 114U;
	volatile int32_t t74 = 10;

	t74 = ((x421/(x422+x423))%x424);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x425 = INT32_MIN;
	static uint64_t x426 = 6014LLU;
	volatile int16_t x428 = -1;
	static uint64_t t75 = 2271966897067988754LLU;

	t75 = ((x425/(x426+x427))%x428);

	if (t75 != 4294961282LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x429 = 9U;
	static uint8_t x430 = 54U;
	static int32_t x431 = INT32_MIN;
	uint8_t x432 = UINT8_MAX;
	int32_t t76 = -90;

	t76 = ((x429/(x430+x431))%x432);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x433 = INT64_MIN;
	static volatile int64_t x434 = 258369LL;
	uint32_t x435 = UINT32_MAX;
	static uint64_t t77 = 2476LLU;

	t77 = ((x433/(x434+x435))%x436);

	if (t77 != 56230LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x437 = 28256015U;
	volatile int64_t x439 = 4219796LL;
	uint8_t x440 = UINT8_MAX;

	t78 = ((x437/(x438+x439))%x440);

	if (t78 != 6LL) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint8_t x441 = UINT8_MAX;
	static volatile uint32_t x442 = UINT32_MAX;
	uint64_t x443 = 1303825097LLU;
	int64_t x444 = INT64_MAX;
	volatile uint64_t t79 = 21869872010570LLU;

	t79 = ((x441/(x442+x443))%x444);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x445 = INT16_MIN;
	static int64_t x446 = -3191672LL;
	uint32_t x447 = 1464767U;
	static int8_t x448 = INT8_MAX;
	volatile int64_t t80 = 229663877LL;

	t80 = ((x445/(x446+x447))%x448);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x453 = 1;
	int8_t x454 = -1;
	int8_t x455 = INT8_MIN;
	volatile int32_t t81 = -1046325031;

	t81 = ((x453/(x454+x455))%x456);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x459 = 1;
	uint64_t x460 = UINT64_MAX;
	volatile uint64_t t82 = 3524LLU;

	t82 = ((x457/(x458+x459))%x460);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x462 = INT8_MIN;
	int8_t x463 = -3;
	uint16_t x464 = UINT16_MAX;
	volatile int32_t t83 = -1;

	t83 = ((x461/(x462+x463))%x464);

	if (t83 != -500) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x465 = UINT32_MAX;
	volatile int16_t x466 = INT16_MAX;
	int8_t x467 = INT8_MIN;
	volatile int16_t x468 = 928;
	static volatile uint32_t t84 = 512U;

	t84 = ((x465/(x466+x467))%x468);

	if (t84 != 742U) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x473 = 53U;
	static uint8_t x474 = 10U;
	static volatile uint16_t x476 = 149U;
	static volatile int32_t t85 = -98;

	t85 = ((x473/(x474+x475))%x476);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x477 = INT8_MIN;
	volatile int16_t x479 = INT16_MIN;
	int16_t x480 = -1;

	t86 = ((x477/(x478+x479))%x480);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x481 = 52852116605397770LL;
	int32_t x483 = -1;
	static uint64_t x484 = UINT64_MAX;
	uint64_t t87 = 13660LLU;

	t87 = ((x481/(x482+x483))%x484);

	if (t87 != 18420318015406852731LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x485 = 3565463788314496242LL;
	uint8_t x488 = UINT8_MAX;
	int64_t t88 = -2784340733394LL;

	t88 = ((x485/(x486+x487))%x488);

	if (t88 != -230LL) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x489 = UINT8_MAX;
	volatile int8_t x490 = INT8_MIN;
	int8_t x491 = -1;
	int8_t x492 = INT8_MIN;

	t89 = ((x489/(x490+x491))%x492);

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x505 = 53U;
	static int16_t x506 = INT16_MAX;
	static volatile int16_t x507 = 114;
	static volatile int8_t x508 = INT8_MAX;
	volatile int32_t t90 = 1;

	t90 = ((x505/(x506+x507))%x508);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x509 = 1;
	volatile int16_t x510 = INT16_MIN;
	int8_t x512 = -1;
	static volatile uint64_t t91 = 15347385265298635LLU;

	t91 = ((x509/(x510+x511))%x512);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x517 = INT8_MAX;
	volatile uint64_t x520 = UINT64_MAX;
	static volatile uint64_t t92 = 115215897497LLU;

	t92 = ((x517/(x518+x519))%x520);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x521 = -1LL;
	volatile uint64_t x522 = 2302789212594127LLU;
	volatile int16_t x523 = INT16_MIN;
	uint32_t x524 = UINT32_MAX;

	t93 = ((x521/(x522+x523))%x524);

	if (t93 != 8010LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x525 = -1LL;
	volatile int8_t x526 = 0;
	int16_t x528 = INT16_MIN;
	volatile int64_t t94 = 1193887774753442223LL;

	t94 = ((x525/(x526+x527))%x528);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x530 = 16833U;
	int64_t x531 = INT64_MIN;
	int32_t x532 = -51270190;
	int64_t t95 = -5LL;

	t95 = ((x529/(x530+x531))%x532);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x533 = 7U;
	int16_t x534 = 1;
	int64_t x535 = 8323233091659LL;
	uint8_t x536 = UINT8_MAX;
	static volatile int64_t t96 = 575LL;

	t96 = ((x533/(x534+x535))%x536);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x537 = INT16_MAX;
	int16_t x538 = -1;
	static uint32_t x539 = 1797736U;
	int32_t x540 = -367;
	uint32_t t97 = 80799327U;

	t97 = ((x537/(x538+x539))%x540);

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x541 = 63LLU;
	uint32_t x542 = 5693427U;
	int8_t x544 = -3;
	uint64_t t98 = 29286747LLU;

	t98 = ((x541/(x542+x543))%x544);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x549 = UINT16_MAX;
	uint32_t x550 = 5706U;
	int8_t x551 = INT8_MIN;
	int8_t x552 = INT8_MAX;
	volatile uint32_t t99 = 1062711123U;

	t99 = ((x549/(x550+x551))%x552);

	if (t99 != 11U) { NG(); } else { ; }
	
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

