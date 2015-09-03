#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x19 = UINT32_MAX;
uint32_t t3 = 123U;
int16_t x24 = INT16_MIN;
volatile int8_t x34 = INT8_MIN;
int32_t x40 = INT32_MIN;
int16_t x43 = -1;
volatile int64_t x46 = -1LL;
static uint8_t x56 = 47U;
int8_t x59 = 4;
int8_t x62 = INT8_MAX;
int16_t x67 = INT16_MAX;
static uint16_t x68 = 298U;
static volatile int16_t x73 = 107;
int32_t x74 = 4260951;
int32_t t17 = -18112232;
int64_t x87 = -680136407134375LL;
int8_t x89 = INT8_MIN;
uint32_t x97 = 1156695U;
static int8_t x99 = 2;
static volatile int64_t t21 = -4LL;
volatile int64_t x116 = 2215248750691247LL;
int32_t x118 = INT32_MAX;
uint8_t x133 = 109U;
static int8_t x143 = INT8_MIN;
int8_t x145 = 27;
int16_t x153 = INT16_MAX;
int16_t x154 = INT16_MAX;
uint16_t x166 = UINT16_MAX;
static int16_t x167 = INT16_MAX;
static int64_t x170 = -1049199571798LL;
static uint8_t x179 = UINT8_MAX;
uint8_t x180 = 0U;
uint8_t x182 = UINT8_MAX;
int8_t x184 = 35;
static volatile int32_t t38 = -13614287;
volatile uint64_t x189 = 75216845330990LLU;
static uint32_t x192 = 8317U;
int32_t x200 = -1;
uint64_t t41 = 52884LLU;
volatile int16_t x203 = INT16_MIN;
int16_t x204 = INT16_MAX;
volatile int16_t x209 = -1;
int64_t x212 = -1LL;
uint16_t x215 = 9U;
uint64_t x218 = 24736893562LLU;
uint8_t x221 = UINT8_MAX;
uint8_t x223 = UINT8_MAX;
uint64_t t48 = 334102LLU;
uint64_t x230 = 3395720732659LLU;
uint16_t x231 = 20092U;
int8_t x239 = INT8_MAX;
static volatile uint32_t x241 = 138293U;
static uint64_t t52 = 630980225090LLU;
uint64_t x248 = 1055624389LLU;
int8_t x250 = 31;
uint32_t x253 = 53U;
int64_t x260 = INT64_MAX;
static volatile int32_t t57 = 328;
uint8_t x273 = 11U;
int8_t x279 = -1;
uint16_t x284 = 13U;
int64_t x292 = 4575770942393783LL;
volatile uint32_t t65 = 6881U;
static uint32_t x299 = 573565671U;
uint64_t t66 = 7616694354844000213LLU;
volatile uint16_t x306 = 11U;
int8_t x309 = INT8_MIN;
int32_t t71 = 40450;
volatile int32_t t73 = 2168211;
int32_t t77 = 609239;
int8_t x346 = -1;
uint16_t x350 = 22U;
uint32_t x354 = UINT32_MAX;
int32_t x356 = -4;
uint32_t x357 = UINT32_MAX;
int8_t x358 = INT8_MIN;
int8_t x361 = -1;
uint32_t x365 = UINT32_MAX;
int16_t x370 = -2;
uint8_t x377 = 34U;
static int32_t x379 = INT32_MIN;
int8_t x381 = INT8_MIN;
int32_t x382 = -1;
static uint64_t x394 = UINT64_MAX;
static uint16_t x399 = 7142U;
uint32_t t92 = 1799320U;
int32_t x408 = INT32_MAX;
volatile int64_t t94 = INT64_MIN;
volatile int32_t t99 = -115;


void f0(void) {
	static uint32_t x1 = 3670U;
	uint16_t x2 = 369U;
	int16_t x3 = INT16_MAX;
	uint32_t x4 = UINT32_MAX;
	volatile uint32_t t0 = 1345119739U;

	t0 = (((x1+x2)/x3)&x4);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	static int64_t x6 = 8577779092LL;
	uint8_t x7 = 1U;
	static volatile int16_t x8 = -491;
	static volatile int64_t t1 = 1890543881LL;

	t1 = (((x5+x6)/x7)&x8);

	if (t1 != -9223372028276997100LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x9 = 53U;
	uint32_t x10 = UINT32_MAX;
	int32_t x11 = INT32_MIN;
	volatile int8_t x12 = INT8_MAX;
	uint32_t t2 = 54980306U;

	t2 = (((x9+x10)/x11)&x12);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = INT32_MIN;
	static int16_t x18 = 808;
	uint16_t x20 = UINT16_MAX;

	t3 = (((x17+x18)/x19)&x20);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = INT64_MAX;
	int16_t x22 = INT16_MIN;
	static int32_t x23 = -3;
	int64_t t4 = 1157298319LL;

	t4 = (((x21+x22)/x23)&x24);

	if (t4 != -3074457345618247680LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x29 = UINT16_MAX;
	int64_t x30 = INT64_MIN;
	int8_t x31 = INT8_MAX;
	int8_t x32 = -1;
	int64_t t5 = -9065883793000295LL;

	t5 = (((x29+x30)/x31)&x32);

	if (t5 != -72624976668147324LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x33 = INT64_MAX;
	volatile uint32_t x35 = UINT32_MAX;
	volatile int64_t x36 = INT64_MAX;
	volatile int64_t t6 = -63003LL;

	t6 = (((x33+x34)/x35)&x36);

	if (t6 != 2147483648LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x37 = 37096U;
	volatile int8_t x38 = INT8_MAX;
	int32_t x39 = INT32_MIN;
	static volatile uint32_t t7 = 182U;

	t7 = (((x37+x38)/x39)&x40);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = -13;
	uint8_t x42 = UINT8_MAX;
	uint64_t x44 = UINT64_MAX;
	static volatile uint64_t t8 = 513824LLU;

	t8 = (((x41+x42)/x43)&x44);

	if (t8 != 18446744073709551374LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x45 = -1LL;
	uint32_t x47 = UINT32_MAX;
	uint32_t x48 = UINT32_MAX;
	static int64_t t9 = -46087336112LL;

	t9 = (((x45+x46)/x47)&x48);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x49 = -7777345;
	int32_t x50 = -3788;
	int16_t x51 = -4;
	uint8_t x52 = 5U;
	int32_t t10 = 123;

	t10 = (((x49+x50)/x51)&x52);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int8_t x53 = -1;
	volatile int16_t x54 = INT16_MIN;
	uint64_t x55 = 400708LLU;
	volatile uint64_t t11 = 951300LLU;

	t11 = (((x53+x54)/x55)&x56);

	if (t11 != 14LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = 52;
	static int64_t x58 = INT64_MIN;
	int8_t x60 = INT8_MIN;
	int64_t t12 = -26760670581902LL;

	t12 = (((x57+x58)/x59)&x60);

	if (t12 != -2305843009213693952LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x61 = INT16_MIN;
	uint16_t x63 = 2U;
	uint16_t x64 = UINT16_MAX;
	volatile int32_t t13 = -6950314;

	t13 = (((x61+x62)/x63)&x64);

	if (t13 != 49216) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x65 = 88U;
	uint64_t x66 = 19LLU;
	uint64_t t14 = 12301LLU;

	t14 = (((x65+x66)/x67)&x68);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = INT64_MIN;
	uint32_t x70 = 325419711U;
	uint64_t x71 = UINT64_MAX;
	uint64_t x72 = 1987339LLU;
	uint64_t t15 = 134443186294564LLU;

	t15 = (((x69+x70)/x71)&x72);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x75 = INT8_MIN;
	int64_t x76 = -1LL;
	int64_t t16 = 140905402332LL;

	t16 = (((x73+x74)/x75)&x76);

	if (t16 != -33289LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x77 = INT32_MIN;
	int8_t x78 = INT8_MAX;
	volatile int16_t x79 = INT16_MIN;
	int32_t x80 = -32860787;

	t17 = (((x77+x78)/x79)&x80);

	if (t17 != 38285) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x85 = INT64_MIN;
	uint32_t x86 = 205864155U;
	uint16_t x88 = 89U;
	int64_t t18 = -25793991676147LL;

	t18 = (((x85+x86)/x87)&x88);

	if (t18 != 89LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x90 = INT16_MIN;
	int64_t x91 = INT64_MIN;
	static int32_t x92 = -1;
	static volatile int64_t t19 = 11902831974982478LL;

	t19 = (((x89+x90)/x91)&x92);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x98 = 5;
	static int32_t x100 = INT32_MAX;
	static uint32_t t20 = 3U;

	t20 = (((x97+x98)/x99)&x100);

	if (t20 != 578350U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x101 = -2570807LL;
	uint8_t x102 = 5U;
	int64_t x103 = 4942216LL;
	static int8_t x104 = 43;

	t21 = (((x101+x102)/x103)&x104);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x105 = 100098532477183435LL;
	int8_t x106 = -1;
	int64_t x107 = INT64_MIN;
	int16_t x108 = -1;
	static int64_t t22 = 9LL;

	t22 = (((x105+x106)/x107)&x108);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x109 = 0U;
	int32_t x110 = 12746483;
	int64_t x111 = -1LL;
	int64_t x112 = -28461LL;
	volatile int64_t t23 = 1044032LL;

	t23 = (((x109+x110)/x111)&x112);

	if (t23 != -12746751LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x113 = 1959U;
	int64_t x114 = -1LL;
	int8_t x115 = INT8_MAX;
	int64_t t24 = -3168LL;

	t24 = (((x113+x114)/x115)&x116);

	if (t24 != 15LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x117 = UINT32_MAX;
	int8_t x119 = INT8_MIN;
	int64_t x120 = -6524744LL;
	int64_t t25 = 20570207319852LL;

	t25 = (((x117+x118)/x119)&x120);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x125 = -14;
	static int8_t x126 = -56;
	int8_t x127 = INT8_MIN;
	int8_t x128 = -27;
	int32_t t26 = -2;

	t26 = (((x125+x126)/x127)&x128);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x134 = 1;
	int8_t x135 = -60;
	int64_t x136 = -1LL;
	static int64_t t27 = -48986795075LL;

	t27 = (((x133+x134)/x135)&x136);

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x137 = INT8_MIN;
	static volatile int64_t x138 = -1LL;
	static int16_t x139 = INT16_MIN;
	int8_t x140 = -1;
	volatile int64_t t28 = 1646LL;

	t28 = (((x137+x138)/x139)&x140);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x141 = 2LL;
	int16_t x142 = INT16_MIN;
	volatile int32_t x144 = 15595;
	int64_t t29 = -1450288117863LL;

	t29 = (((x141+x142)/x143)&x144);

	if (t29 != 235LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x146 = -1LL;
	static int32_t x147 = INT32_MIN;
	int8_t x148 = INT8_MAX;
	volatile int64_t t30 = -26270LL;

	t30 = (((x145+x146)/x147)&x148);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x149 = -1;
	volatile uint8_t x150 = 69U;
	static int32_t x151 = -1;
	static uint64_t x152 = 588977100LLU;
	static volatile uint64_t t31 = 6896105732LLU;

	t31 = (((x149+x150)/x151)&x152);

	if (t31 != 588977036LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x155 = 4719814783293797335LLU;
	int8_t x156 = INT8_MAX;
	uint64_t t32 = 148LLU;

	t32 = (((x153+x154)/x155)&x156);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x161 = -21;
	int64_t x162 = 5146LL;
	static uint16_t x163 = 78U;
	volatile int8_t x164 = INT8_MIN;
	int64_t t33 = 584574602146LL;

	t33 = (((x161+x162)/x163)&x164);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x165 = -15;
	static uint8_t x168 = UINT8_MAX;
	volatile int32_t t34 = 1371443;

	t34 = (((x165+x166)/x167)&x168);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x169 = 315520;
	volatile int16_t x171 = -1;
	int64_t x172 = -1LL;
	int64_t t35 = -415955LL;

	t35 = (((x169+x170)/x171)&x172);

	if (t35 != 1049199256278LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x177 = INT16_MIN;
	static int64_t x178 = -69670570LL;
	int64_t t36 = 2017996619LL;

	t36 = (((x177+x178)/x179)&x180);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x181 = 0;
	static volatile int8_t x183 = -1;
	volatile int32_t t37 = 76950;

	t37 = (((x181+x182)/x183)&x184);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x185 = 6U;
	uint8_t x186 = UINT8_MAX;
	static int32_t x187 = INT32_MIN;
	int32_t x188 = INT32_MAX;

	t38 = (((x185+x186)/x187)&x188);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x190 = 45;
	volatile uint8_t x191 = UINT8_MAX;
	uint64_t t39 = 584101LLU;

	t39 = (((x189+x190)/x191)&x192);

	if (t39 != 40LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x193 = INT32_MIN;
	uint32_t x194 = UINT32_MAX;
	static uint16_t x195 = 124U;
	volatile uint8_t x196 = 2U;
	uint32_t t40 = 715959U;

	t40 = (((x193+x194)/x195)&x196);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x197 = UINT16_MAX;
	uint64_t x198 = UINT64_MAX;
	int64_t x199 = INT64_MIN;

	t41 = (((x197+x198)/x199)&x200);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x201 = -18;
	int64_t x202 = INT64_MAX;
	volatile int64_t t42 = -25839268LL;

	t42 = (((x201+x202)/x203)&x204);

	if (t42 != 1LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x205 = UINT16_MAX;
	int32_t x206 = -1;
	volatile uint8_t x207 = 1U;
	int16_t x208 = 155;
	volatile int32_t t43 = -427382;

	t43 = (((x205+x206)/x207)&x208);

	if (t43 != 154) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x210 = INT16_MIN;
	int32_t x211 = 11937;
	static int64_t t44 = -39LL;

	t44 = (((x209+x210)/x211)&x212);

	if (t44 != -2LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x213 = 10U;
	volatile uint16_t x214 = 3U;
	static volatile int64_t x216 = INT64_MIN;
	volatile int64_t t45 = 8140LL;

	t45 = (((x213+x214)/x215)&x216);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x217 = 72269593U;
	static uint16_t x219 = 201U;
	int8_t x220 = -1;
	uint64_t t46 = 30303538LLU;

	t46 = (((x217+x218)/x219)&x220);

	if (t46 != 123428672LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x222 = UINT8_MAX;
	int16_t x224 = -3;
	volatile int32_t t47 = -47;

	t47 = (((x221+x222)/x223)&x224);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x225 = 0U;
	volatile uint64_t x226 = 107756358048618LLU;
	int8_t x227 = 4;
	uint8_t x228 = 0U;

	t48 = (((x225+x226)/x227)&x228);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x229 = INT32_MIN;
	uint32_t x232 = 96698U;
	volatile uint64_t t49 = 1442511354LLU;

	t49 = (((x229+x230)/x231)&x232);

	if (t49 != 79890LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x233 = INT32_MIN;
	uint64_t x234 = 155124377454159006LLU;
	int8_t x235 = INT8_MIN;
	int8_t x236 = INT8_MAX;
	volatile uint64_t t50 = 996097635113836414LLU;

	t50 = (((x233+x234)/x235)&x236);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x237 = 126U;
	int64_t x238 = 1LL;
	int32_t x240 = -1;
	volatile int64_t t51 = -4226903090277687102LL;

	t51 = (((x237+x238)/x239)&x240);

	if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x242 = UINT64_MAX;
	volatile int64_t x243 = INT64_MIN;
	uint32_t x244 = UINT32_MAX;

	t52 = (((x241+x242)/x243)&x244);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x245 = -1;
	int32_t x246 = 3925;
	uint8_t x247 = UINT8_MAX;
	static volatile uint64_t t53 = 514994444LLU;

	t53 = (((x245+x246)/x247)&x248);

	if (t53 != 5LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x249 = 1038;
	static int32_t x251 = INT32_MIN;
	int16_t x252 = -1;
	volatile int32_t t54 = 1;

	t54 = (((x249+x250)/x251)&x252);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x254 = INT16_MIN;
	int8_t x255 = -2;
	int8_t x256 = INT8_MIN;
	uint32_t t55 = 11U;

	t55 = (((x253+x254)/x255)&x256);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x257 = INT64_MIN;
	static volatile uint16_t x258 = 2U;
	volatile int8_t x259 = INT8_MIN;
	static int64_t t56 = 757052364561494542LL;

	t56 = (((x257+x258)/x259)&x260);

	if (t56 != 72057594037927935LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x261 = INT16_MAX;
	volatile int32_t x262 = -1;
	int32_t x263 = INT32_MAX;
	uint8_t x264 = 7U;

	t57 = (((x261+x262)/x263)&x264);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x265 = UINT8_MAX;
	static volatile int64_t x266 = -1LL;
	volatile int16_t x267 = -1;
	static int8_t x268 = 32;
	int64_t t58 = -179323366904607LL;

	t58 = (((x265+x266)/x267)&x268);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x269 = -78;
	static int32_t x270 = INT32_MAX;
	volatile int64_t x271 = -1LL;
	uint64_t x272 = UINT64_MAX;
	uint64_t t59 = 214252762968LLU;

	t59 = (((x269+x270)/x271)&x272);

	if (t59 != 18446744071562068047LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x274 = 127U;
	int16_t x275 = INT16_MIN;
	int64_t x276 = 7645724LL;
	volatile int64_t t60 = 3266LL;

	t60 = (((x273+x274)/x275)&x276);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x277 = 12U;
	int64_t x278 = -627281033254465938LL;
	uint8_t x280 = 89U;
	volatile int64_t t61 = 121LL;

	t61 = (((x277+x278)/x279)&x280);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x281 = INT16_MIN;
	static uint32_t x282 = UINT32_MAX;
	int64_t x283 = INT64_MIN;
	volatile int64_t t62 = 632828304534261LL;

	t62 = (((x281+x282)/x283)&x284);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x285 = INT16_MIN;
	static int8_t x286 = INT8_MIN;
	int16_t x287 = INT16_MAX;
	static volatile int8_t x288 = INT8_MIN;
	volatile int32_t t63 = 620;

	t63 = (((x285+x286)/x287)&x288);

	if (t63 != -128) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x289 = INT16_MIN;
	int32_t x290 = -61060647;
	int8_t x291 = INT8_MIN;
	volatile int64_t t64 = -687412399107LL;

	t64 = (((x289+x290)/x291)&x292);

	if (t64 != 18468LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x293 = 109924431U;
	static int32_t x294 = -1;
	int8_t x295 = INT8_MIN;
	int8_t x296 = INT8_MAX;

	t65 = (((x293+x294)/x295)&x296);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x297 = -1;
	static uint64_t x298 = UINT64_MAX;
	int16_t x300 = -1;

	t66 = (((x297+x298)/x299)&x300);

	if (t66 != 32161520478LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x301 = INT16_MIN;
	static int8_t x302 = -1;
	static uint32_t x303 = 14986U;
	int8_t x304 = INT8_MIN;
	uint32_t t67 = 8511287U;

	t67 = (((x301+x302)/x303)&x304);

	if (t67 != 286592U) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x305 = -1;
	int64_t x307 = INT64_MIN;
	int64_t x308 = -15707LL;
	volatile int64_t t68 = -82078433254144187LL;

	t68 = (((x305+x306)/x307)&x308);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x310 = INT16_MAX;
	static uint16_t x311 = 1152U;
	int32_t x312 = 4013030;
	int32_t t69 = -5891;

	t69 = (((x309+x310)/x311)&x312);

	if (t69 != 4) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x313 = 3764;
	static uint32_t x314 = UINT32_MAX;
	int64_t x315 = INT64_MIN;
	uint32_t x316 = 3742U;
	static volatile int64_t t70 = 94060793556999LL;

	t70 = (((x313+x314)/x315)&x316);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x317 = INT32_MIN;
	static volatile int16_t x318 = INT16_MAX;
	int32_t x319 = INT32_MIN;
	int16_t x320 = INT16_MIN;

	t71 = (((x317+x318)/x319)&x320);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x321 = INT8_MIN;
	uint8_t x322 = 28U;
	int8_t x323 = INT8_MAX;
	volatile int64_t x324 = -1LL;
	int64_t t72 = -117815336LL;

	t72 = (((x321+x322)/x323)&x324);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x325 = 4562U;
	int16_t x326 = INT16_MAX;
	int32_t x327 = INT32_MIN;
	int8_t x328 = -1;

	t73 = (((x325+x326)/x327)&x328);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x329 = INT64_MIN;
	int16_t x330 = INT16_MAX;
	static int8_t x331 = -5;
	volatile int32_t x332 = -11650027;
	volatile int64_t t74 = 1LL;

	t74 = (((x329+x330)/x331)&x332);

	if (t74 != 1844674407361413120LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x333 = UINT16_MAX;
	int16_t x334 = -435;
	int64_t x335 = -1780359153LL;
	uint16_t x336 = UINT16_MAX;
	int64_t t75 = 2850578LL;

	t75 = (((x333+x334)/x335)&x336);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x337 = INT32_MIN;
	static int64_t x338 = -1LL;
	volatile uint8_t x339 = UINT8_MAX;
	uint16_t x340 = 1U;
	volatile int64_t t76 = -698LL;

	t76 = (((x337+x338)/x339)&x340);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x341 = INT8_MAX;
	int32_t x342 = -1;
	int32_t x343 = -1;
	uint8_t x344 = UINT8_MAX;

	t77 = (((x341+x342)/x343)&x344);

	if (t77 != 130) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x345 = 8013047;
	int32_t x347 = INT32_MAX;
	uint32_t x348 = 0U;
	uint32_t t78 = 1666724U;

	t78 = (((x345+x346)/x347)&x348);

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x349 = -1;
	static uint8_t x351 = 66U;
	volatile int8_t x352 = INT8_MIN;
	int32_t t79 = 1025499393;

	t79 = (((x349+x350)/x351)&x352);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x353 = 505259226498LLU;
	uint8_t x355 = UINT8_MAX;
	volatile uint64_t t80 = 116991554993967524LLU;

	t80 = (((x353+x354)/x355)&x356);

	if (t80 != 1998251740LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x359 = 66654285418LLU;
	volatile uint8_t x360 = UINT8_MAX;
	static volatile uint64_t t81 = 11608897212471349LLU;

	t81 = (((x357+x358)/x359)&x360);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x362 = 203046U;
	int32_t x363 = INT32_MAX;
	uint8_t x364 = 0U;
	uint32_t t82 = 30U;

	t82 = (((x361+x362)/x363)&x364);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x366 = -1LL;
	uint8_t x367 = 91U;
	int8_t x368 = -2;
	volatile int64_t t83 = -14835877LL;

	t83 = (((x365+x366)/x367)&x368);

	if (t83 != 47197442LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x369 = -1LL;
	int16_t x371 = -1;
	uint8_t x372 = 14U;
	int64_t t84 = 1LL;

	t84 = (((x369+x370)/x371)&x372);

	if (t84 != 2LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x373 = INT64_MIN;
	volatile int16_t x374 = INT16_MAX;
	static int8_t x375 = INT8_MIN;
	int64_t x376 = -1LL;
	volatile int64_t t85 = 964716805975533LL;

	t85 = (((x373+x374)/x375)&x376);

	if (t85 != 72057594037927680LL) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint16_t x378 = 4868U;
	int64_t x380 = INT64_MIN;
	int64_t t86 = -22405265589393157LL;

	t86 = (((x377+x378)/x379)&x380);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x383 = -23771;
	int16_t x384 = 8;
	volatile int32_t t87 = 15346201;

	t87 = (((x381+x382)/x383)&x384);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x385 = INT16_MAX;
	static int8_t x386 = INT8_MIN;
	volatile int32_t x387 = INT32_MAX;
	uint64_t x388 = UINT64_MAX;
	volatile uint64_t t88 = 63837LLU;

	t88 = (((x385+x386)/x387)&x388);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x389 = INT8_MIN;
	static int64_t x390 = -7673944760246852LL;
	volatile int8_t x391 = 1;
	volatile int32_t x392 = INT32_MAX;
	static volatile int64_t t89 = 3427LL;

	t89 = (((x389+x390)/x391)&x392);

	if (t89 != 9051452LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x393 = 41LL;
	int64_t x395 = INT64_MIN;
	int64_t x396 = INT64_MAX;
	uint64_t t90 = 90147633641LLU;

	t90 = (((x393+x394)/x395)&x396);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x397 = INT8_MIN;
	int16_t x398 = INT16_MIN;
	volatile int32_t x400 = -1;
	int32_t t91 = 14600747;

	t91 = (((x397+x398)/x399)&x400);

	if (t91 != -4) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x401 = -1;
	uint16_t x402 = 0U;
	static uint32_t x403 = 5490178U;
	int16_t x404 = 9;

	t92 = (((x401+x402)/x403)&x404);

	if (t92 != 8U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x405 = -1LL;
	static int32_t x406 = -1;
	int32_t x407 = 4;
	volatile int64_t t93 = -73795552192790059LL;

	t93 = (((x405+x406)/x407)&x408);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x409 = -6312134527985747LL;
	uint8_t x410 = 84U;
	uint32_t x411 = 1314000U;
	int64_t x412 = INT64_MIN;

	t94 = (((x409+x410)/x411)&x412);

	if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x413 = 415640575U;
	static int32_t x414 = INT32_MIN;
	int8_t x415 = INT8_MIN;
	static uint64_t x416 = UINT64_MAX;
	volatile uint64_t t95 = 267293504690053LLU;

	t95 = (((x413+x414)/x415)&x416);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x417 = 0;
	int16_t x418 = -1;
	volatile uint64_t x419 = UINT64_MAX;
	int64_t x420 = 1856662866LL;
	uint64_t t96 = 50287LLU;

	t96 = (((x417+x418)/x419)&x420);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x421 = 87U;
	uint8_t x422 = UINT8_MAX;
	uint16_t x423 = UINT16_MAX;
	static volatile uint64_t x424 = 378LLU;
	volatile uint64_t t97 = 17989LLU;

	t97 = (((x421+x422)/x423)&x424);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x425 = INT8_MIN;
	uint16_t x426 = 1621U;
	int64_t x427 = INT64_MAX;
	int64_t x428 = -1LL;
	static volatile int64_t t98 = -3LL;

	t98 = (((x425+x426)/x427)&x428);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x429 = 2841U;
	int16_t x430 = INT16_MIN;
	int32_t x431 = -1;
	static uint16_t x432 = 4149U;

	t99 = (((x429+x430)/x431)&x432);

	if (t99 != 4133) { NG(); } else { ; }
	
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

