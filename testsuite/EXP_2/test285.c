#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint32_t x6 = UINT32_MAX;
volatile int32_t x24 = -1;
static volatile int32_t t2 = 284094;
volatile int32_t t3 = -126570;
static uint64_t t4 = UINT64_MAX;
int64_t x36 = -1LL;
static int64_t x38 = INT64_MAX;
volatile uint32_t x42 = 17372U;
int8_t x45 = 1;
int16_t x46 = INT16_MIN;
int8_t x51 = -1;
int8_t x54 = INT8_MIN;
static int32_t t10 = 5;
int64_t t11 = 5701687329782LL;
int32_t x75 = INT32_MAX;
int32_t t15 = -26;
int16_t x81 = INT16_MIN;
int16_t x82 = -42;
volatile int32_t x98 = INT32_MIN;
int16_t x105 = -2443;
int64_t x109 = INT64_MIN;
uint8_t x112 = 86U;
int64_t x117 = 10214308073LL;
static int64_t x120 = -63LL;
volatile int32_t x122 = INT32_MAX;
int8_t x140 = 0;
int16_t x149 = INT16_MAX;
uint64_t x151 = 378419536314379LLU;
int64_t x156 = -1302550LL;
int8_t x160 = 0;
int8_t x161 = INT8_MAX;
static int32_t x188 = INT32_MIN;
static uint16_t x192 = UINT16_MAX;
volatile int8_t x196 = INT8_MAX;
int64_t x197 = 32144316768LL;
static uint64_t x201 = 929473476750LLU;
volatile int32_t t42 = 740;
volatile uint8_t x206 = 5U;
int32_t t43 = 37055;
static uint8_t x211 = UINT8_MAX;
static uint64_t x217 = 38LLU;
uint64_t x218 = 29LLU;
uint16_t x219 = 1U;
int8_t x221 = 4;
int64_t x222 = -907625263983LL;
int16_t x224 = -1;
volatile int64_t t49 = 888983LL;
int64_t x238 = INT64_MIN;
int64_t x246 = -2LL;
static uint32_t x247 = UINT32_MAX;
int32_t x251 = 59704352;
static uint32_t x252 = 17U;
static int32_t x265 = -15;
volatile uint16_t x267 = 13U;
static uint32_t x270 = 432651783U;
volatile uint32_t t59 = 24U;
int8_t x277 = INT8_MIN;
volatile int32_t t60 = 0;
volatile uint16_t x289 = 31U;
int32_t x291 = INT32_MIN;
int8_t x294 = -11;
int8_t x303 = -43;
int32_t x314 = 853944628;
int64_t t68 = 406LL;
int64_t x317 = 129071359LL;
static volatile uint64_t x324 = UINT64_MAX;
uint16_t x331 = 0U;
uint32_t x332 = UINT32_MAX;
int8_t x333 = -1;
volatile int32_t t73 = 1;
int32_t x343 = -1;
int16_t x352 = -1401;
int8_t x357 = 0;
uint8_t x364 = 8U;
static volatile uint16_t x374 = 3U;
volatile int32_t t83 = -191645595;
uint64_t x392 = UINT64_MAX;
volatile int8_t x399 = -1;
static int64_t t88 = -1334836487367LL;
int16_t x412 = INT16_MIN;
volatile int32_t t90 = -378;
int8_t x417 = INT8_MIN;
volatile int64_t x420 = INT64_MIN;
int16_t x424 = INT16_MAX;
int64_t x425 = INT64_MIN;
uint16_t x447 = 0U;
volatile int64_t x448 = -1462896697872LL;
volatile uint32_t x451 = UINT32_MAX;
int32_t t98 = -18350;
uint32_t x453 = 10584U;


void f0(void) {
	int16_t x5 = INT16_MAX;
	int16_t x7 = 0;
	int16_t x8 = -11412;
	volatile int32_t t0 = 1;

	t0 = ((x5<(x6-x7))|x8);

	if (t0 != -11411) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x13 = INT32_MIN;
	static int16_t x14 = -1;
	static volatile int16_t x15 = -1;
	int16_t x16 = INT16_MIN;
	int32_t t1 = 7485538;

	t1 = ((x13<(x14-x15))|x16);

	if (t1 != -32767) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x21 = INT16_MAX;
	int16_t x22 = -1;
	int8_t x23 = INT8_MAX;

	t2 = ((x21<(x22-x23))|x24);

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x25 = INT64_MIN;
	volatile int16_t x26 = -1;
	uint8_t x27 = 20U;
	static volatile uint16_t x28 = UINT16_MAX;

	t3 = ((x25<(x26-x27))|x28);

	if (t3 != 65535) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x29 = 11U;
	int16_t x30 = INT16_MIN;
	uint32_t x31 = 1719261U;
	volatile uint64_t x32 = UINT64_MAX;

	t4 = ((x29<(x30-x31))|x32);

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x33 = UINT16_MAX;
	int32_t x34 = 350133466;
	volatile uint64_t x35 = 56121LLU;
	int64_t t5 = -533570133179710LL;

	t5 = ((x33<(x34-x35))|x36);

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x37 = INT16_MIN;
	volatile uint64_t x39 = 1059828522954LLU;
	int64_t x40 = INT64_MIN;
	volatile int64_t t6 = INT64_MIN;

	t6 = ((x37<(x38-x39))|x40);

	if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x41 = INT8_MIN;
	int64_t x43 = 29573LL;
	volatile int8_t x44 = INT8_MIN;
	volatile int32_t t7 = 31;

	t7 = ((x41<(x42-x43))|x44);

	if (t7 != -128) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x47 = 1U;
	volatile uint16_t x48 = UINT16_MAX;
	int32_t t8 = 9;

	t8 = ((x45<(x46-x47))|x48);

	if (t8 != 65535) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x49 = 8;
	static volatile int32_t x50 = INT32_MIN;
	int8_t x52 = INT8_MIN;
	volatile int32_t t9 = -362633547;

	t9 = ((x49<(x50-x51))|x52);

	if (t9 != -128) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x53 = -8296LL;
	int32_t x55 = -145397;
	static int16_t x56 = -1;

	t10 = ((x53<(x54-x55))|x56);

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x57 = 1U;
	int16_t x58 = INT16_MAX;
	int16_t x59 = INT16_MIN;
	static int64_t x60 = -1LL;

	t11 = ((x57<(x58-x59))|x60);

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x61 = INT64_MIN;
	volatile int32_t x62 = -327882;
	int32_t x63 = INT32_MIN;
	int16_t x64 = INT16_MIN;
	static volatile int32_t t12 = 3031961;

	t12 = ((x61<(x62-x63))|x64);

	if (t12 != -32767) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x65 = 518716259U;
	int32_t x66 = INT32_MAX;
	volatile uint16_t x67 = UINT16_MAX;
	uint32_t x68 = 1764U;
	uint32_t t13 = 1120594844U;

	t13 = ((x65<(x66-x67))|x68);

	if (t13 != 1765U) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x69 = UINT8_MAX;
	volatile int32_t x70 = INT32_MIN;
	uint32_t x71 = 1506U;
	uint8_t x72 = 0U;
	int32_t t14 = -1037;

	t14 = ((x69<(x70-x71))|x72);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x73 = 23402U;
	volatile uint16_t x74 = 3U;
	uint16_t x76 = 6U;

	t15 = ((x73<(x74-x75))|x76);

	if (t15 != 6) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x77 = UINT16_MAX;
	volatile uint8_t x78 = 7U;
	volatile int16_t x79 = 0;
	volatile int64_t x80 = INT64_MIN;
	volatile int64_t t16 = INT64_MIN;

	t16 = ((x77<(x78-x79))|x80);

	if (t16 != INT64_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x83 = 0;
	uint32_t x84 = 424463U;
	uint32_t t17 = 1473147933U;

	t17 = ((x81<(x82-x83))|x84);

	if (t17 != 424463U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x85 = -53;
	int8_t x86 = INT8_MAX;
	int8_t x87 = -1;
	static volatile int32_t x88 = -1;
	volatile int32_t t18 = 1145919;

	t18 = ((x85<(x86-x87))|x88);

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x89 = UINT8_MAX;
	int8_t x90 = INT8_MIN;
	int8_t x91 = -1;
	int16_t x92 = INT16_MIN;
	volatile int32_t t19 = 1;

	t19 = ((x89<(x90-x91))|x92);

	if (t19 != -32768) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x97 = INT64_MIN;
	static int16_t x99 = INT16_MIN;
	uint16_t x100 = 98U;
	static int32_t t20 = 6945;

	t20 = ((x97<(x98-x99))|x100);

	if (t20 != 99) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x101 = INT32_MAX;
	volatile int64_t x102 = INT64_MIN;
	volatile uint64_t x103 = UINT64_MAX;
	int16_t x104 = 0;
	int32_t t21 = 790383908;

	t21 = ((x101<(x102-x103))|x104);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x106 = -19504LL;
	int8_t x107 = 0;
	static int64_t x108 = INT64_MAX;
	int64_t t22 = INT64_MAX;

	t22 = ((x105<(x106-x107))|x108);

	if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x110 = 66U;
	volatile uint32_t x111 = 1626760000U;
	int32_t t23 = -1608;

	t23 = ((x109<(x110-x111))|x112);

	if (t23 != 87) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x113 = 179660LL;
	static int8_t x114 = INT8_MAX;
	uint64_t x115 = UINT64_MAX;
	int8_t x116 = 19;
	volatile int32_t t24 = -1;

	t24 = ((x113<(x114-x115))|x116);

	if (t24 != 19) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x118 = INT32_MAX;
	static uint16_t x119 = UINT16_MAX;
	volatile int64_t t25 = -2LL;

	t25 = ((x117<(x118-x119))|x120);

	if (t25 != -63LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x121 = INT8_MIN;
	int8_t x123 = INT8_MAX;
	int8_t x124 = 4;
	volatile int32_t t26 = 1617272;

	t26 = ((x121<(x122-x123))|x124);

	if (t26 != 5) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x125 = INT8_MIN;
	int64_t x126 = -1LL;
	volatile int8_t x127 = -1;
	int64_t x128 = 89335112957019357LL;
	volatile int64_t t27 = 265262LL;

	t27 = ((x125<(x126-x127))|x128);

	if (t27 != 89335112957019357LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x129 = INT64_MIN;
	static uint32_t x130 = 29U;
	volatile int16_t x131 = -147;
	int32_t x132 = INT32_MAX;
	static volatile int32_t t28 = INT32_MAX;

	t28 = ((x129<(x130-x131))|x132);

	if (t28 != INT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x137 = UINT16_MAX;
	int32_t x138 = -116579;
	static int64_t x139 = 2075373007038718235LL;
	int32_t t29 = -3589634;

	t29 = ((x137<(x138-x139))|x140);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x141 = UINT8_MAX;
	static volatile uint64_t x142 = 16673937LLU;
	int32_t x143 = INT32_MIN;
	static int64_t x144 = INT64_MIN;
	volatile int64_t t30 = -33011LL;

	t30 = ((x141<(x142-x143))|x144);

	if (t30 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x150 = 0;
	uint32_t x152 = 36U;
	volatile uint32_t t31 = 367317782U;

	t31 = ((x149<(x150-x151))|x152);

	if (t31 != 37U) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x153 = -817LL;
	int64_t x154 = -13572193LL;
	uint64_t x155 = 32578LLU;
	volatile int64_t t32 = 1LL;

	t32 = ((x153<(x154-x155))|x156);

	if (t32 != -1302550LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x157 = 572538595306LLU;
	static volatile int8_t x158 = -1;
	uint16_t x159 = 968U;
	static int32_t t33 = 147827;

	t33 = ((x157<(x158-x159))|x160);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x162 = INT16_MIN;
	uint32_t x163 = 28535590U;
	uint16_t x164 = 14U;
	static int32_t t34 = -524;

	t34 = ((x161<(x162-x163))|x164);

	if (t34 != 15) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x165 = INT32_MIN;
	uint16_t x166 = UINT16_MAX;
	int16_t x167 = INT16_MIN;
	uint8_t x168 = 2U;
	volatile int32_t t35 = 2;

	t35 = ((x165<(x166-x167))|x168);

	if (t35 != 3) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x177 = INT16_MIN;
	int32_t x178 = INT32_MIN;
	int16_t x179 = -18;
	static uint8_t x180 = 54U;
	static int32_t t36 = 578152;

	t36 = ((x177<(x178-x179))|x180);

	if (t36 != 54) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x181 = 19;
	uint32_t x182 = 85997U;
	int16_t x183 = -1;
	int16_t x184 = INT16_MIN;
	int32_t t37 = -227;

	t37 = ((x181<(x182-x183))|x184);

	if (t37 != -32767) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x185 = -1;
	uint64_t x186 = UINT64_MAX;
	int32_t x187 = -1;
	static volatile int32_t t38 = INT32_MIN;

	t38 = ((x185<(x186-x187))|x188);

	if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int8_t x189 = 63;
	int64_t x190 = -1LL;
	int8_t x191 = INT8_MIN;
	volatile int32_t t39 = -20;

	t39 = ((x189<(x190-x191))|x192);

	if (t39 != 65535) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x193 = INT32_MIN;
	static volatile int64_t x194 = -130278041LL;
	uint16_t x195 = UINT16_MAX;
	static int32_t t40 = -3780498;

	t40 = ((x193<(x194-x195))|x196);

	if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x198 = INT8_MIN;
	uint16_t x199 = 4U;
	int16_t x200 = -659;
	volatile int32_t t41 = 537962606;

	t41 = ((x197<(x198-x199))|x200);

	if (t41 != -659) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x202 = INT16_MIN;
	static int64_t x203 = -8133422LL;
	uint16_t x204 = 3211U;

	t42 = ((x201<(x202-x203))|x204);

	if (t42 != 3211) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x205 = INT8_MAX;
	int16_t x207 = 170;
	volatile int32_t x208 = -39513;

	t43 = ((x205<(x206-x207))|x208);

	if (t43 != -39513) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint8_t x209 = UINT8_MAX;
	static int16_t x210 = INT16_MIN;
	int64_t x212 = -1LL;
	static int64_t t44 = 262740702353455LL;

	t44 = ((x209<(x210-x211))|x212);

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x213 = UINT32_MAX;
	uint8_t x214 = UINT8_MAX;
	int64_t x215 = -1LL;
	static uint8_t x216 = UINT8_MAX;
	int32_t t45 = -2313;

	t45 = ((x213<(x214-x215))|x216);

	if (t45 != 255) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x220 = 13;
	static volatile int32_t t46 = 37;

	t46 = ((x217<(x218-x219))|x220);

	if (t46 != 13) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x223 = -1;
	int32_t t47 = -59;

	t47 = ((x221<(x222-x223))|x224);

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x225 = -1;
	int32_t x226 = -12923406;
	static uint64_t x227 = 259124460302122247LLU;
	static uint8_t x228 = 2U;
	static volatile int32_t t48 = -1005;

	t48 = ((x225<(x226-x227))|x228);

	if (t48 != 2) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x229 = INT32_MAX;
	static int32_t x230 = -232595982;
	int16_t x231 = INT16_MIN;
	volatile int64_t x232 = -598459122LL;

	t49 = ((x229<(x230-x231))|x232);

	if (t49 != -598459122LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x233 = -1LL;
	static uint32_t x234 = 7U;
	uint32_t x235 = UINT32_MAX;
	int64_t x236 = 3113084345508966LL;
	int64_t t50 = 2723219649005396504LL;

	t50 = ((x233<(x234-x235))|x236);

	if (t50 != 3113084345508967LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x237 = -1LL;
	int64_t x239 = INT64_MIN;
	static volatile uint8_t x240 = 76U;
	volatile int32_t t51 = -26970;

	t51 = ((x237<(x238-x239))|x240);

	if (t51 != 77) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x241 = 32650;
	uint16_t x242 = 5U;
	int16_t x243 = -8300;
	volatile int16_t x244 = 1241;
	static int32_t t52 = 11186725;

	t52 = ((x241<(x242-x243))|x244);

	if (t52 != 1241) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x245 = 4167;
	volatile int16_t x248 = INT16_MAX;
	int32_t t53 = 10;

	t53 = ((x245<(x246-x247))|x248);

	if (t53 != 32767) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint16_t x249 = 19073U;
	uint16_t x250 = 288U;
	volatile uint32_t t54 = 368U;

	t54 = ((x249<(x250-x251))|x252);

	if (t54 != 17U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x257 = -1;
	static volatile int8_t x258 = -58;
	volatile int8_t x259 = INT8_MIN;
	static volatile int16_t x260 = INT16_MAX;
	int32_t t55 = 226183;

	t55 = ((x257<(x258-x259))|x260);

	if (t55 != 32767) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x261 = 30483595LL;
	uint32_t x262 = UINT32_MAX;
	volatile uint8_t x263 = 9U;
	int8_t x264 = INT8_MAX;
	int32_t t56 = -1;

	t56 = ((x261<(x262-x263))|x264);

	if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x266 = -1;
	uint64_t x268 = UINT64_MAX;
	uint64_t t57 = UINT64_MAX;

	t57 = ((x265<(x266-x267))|x268);

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x269 = UINT8_MAX;
	uint16_t x271 = 24U;
	int16_t x272 = 147;
	volatile int32_t t58 = 728285;

	t58 = ((x269<(x270-x271))|x272);

	if (t58 != 147) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x273 = -1;
	int8_t x274 = -1;
	int32_t x275 = -1;
	uint32_t x276 = 5925895U;

	t59 = ((x273<(x274-x275))|x276);

	if (t59 != 5925895U) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint8_t x278 = UINT8_MAX;
	int32_t x279 = INT32_MAX;
	volatile uint8_t x280 = 18U;

	t60 = ((x277<(x278-x279))|x280);

	if (t60 != 18) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x281 = INT16_MIN;
	int64_t x282 = 2597422LL;
	static volatile int16_t x283 = 3;
	static volatile int16_t x284 = -1;
	int32_t t61 = 17032;

	t61 = ((x281<(x282-x283))|x284);

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x285 = 2U;
	uint64_t x286 = 62900394147072LLU;
	int64_t x287 = INT64_MIN;
	int16_t x288 = INT16_MAX;
	int32_t t62 = -481179610;

	t62 = ((x285<(x286-x287))|x288);

	if (t62 != 32767) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x290 = UINT64_MAX;
	static int32_t x292 = 14279912;
	static volatile int32_t t63 = -30940387;

	t63 = ((x289<(x290-x291))|x292);

	if (t63 != 14279913) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x293 = UINT16_MAX;
	uint32_t x295 = UINT32_MAX;
	static int32_t x296 = INT32_MIN;
	static int32_t t64 = -562764;

	t64 = ((x293<(x294-x295))|x296);

	if (t64 != -2147483647) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x297 = 1;
	int8_t x298 = INT8_MAX;
	int16_t x299 = 0;
	static volatile int8_t x300 = INT8_MAX;
	int32_t t65 = 13;

	t65 = ((x297<(x298-x299))|x300);

	if (t65 != 127) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x301 = 0;
	int16_t x302 = -1;
	uint32_t x304 = 35U;
	volatile uint32_t t66 = 89834U;

	t66 = ((x301<(x302-x303))|x304);

	if (t66 != 35U) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x309 = -1LL;
	volatile int64_t x310 = INT64_MIN;
	volatile int64_t x311 = INT64_MIN;
	int8_t x312 = INT8_MAX;
	volatile int32_t t67 = 252656710;

	t67 = ((x309<(x310-x311))|x312);

	if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x313 = INT32_MIN;
	uint16_t x315 = 2877U;
	int64_t x316 = INT64_MIN;

	t68 = ((x313<(x314-x315))|x316);

	if (t68 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x318 = 6273LLU;
	int16_t x319 = INT16_MAX;
	uint64_t x320 = UINT64_MAX;
	volatile uint64_t t69 = UINT64_MAX;

	t69 = ((x317<(x318-x319))|x320);

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x321 = INT16_MIN;
	int8_t x322 = INT8_MIN;
	uint32_t x323 = 345U;
	volatile uint64_t t70 = UINT64_MAX;

	t70 = ((x321<(x322-x323))|x324);

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x325 = 968U;
	static int8_t x326 = INT8_MIN;
	static volatile int8_t x327 = -1;
	static int32_t x328 = INT32_MIN;
	static int32_t t71 = INT32_MIN;

	t71 = ((x325<(x326-x327))|x328);

	if (t71 != INT32_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x329 = 13U;
	uint16_t x330 = UINT16_MAX;
	volatile uint32_t t72 = UINT32_MAX;

	t72 = ((x329<(x330-x331))|x332);

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x334 = 4U;
	int8_t x335 = -7;
	uint16_t x336 = UINT16_MAX;

	t73 = ((x333<(x334-x335))|x336);

	if (t73 != 65535) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x337 = 2U;
	int16_t x338 = -54;
	static int32_t x339 = INT32_MIN;
	int64_t x340 = -1LL;
	int64_t t74 = -337397063941872LL;

	t74 = ((x337<(x338-x339))|x340);

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x341 = 3U;
	uint64_t x342 = 55661884LLU;
	volatile uint8_t x344 = 4U;
	static volatile int32_t t75 = 45127211;

	t75 = ((x341<(x342-x343))|x344);

	if (t75 != 5) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x345 = -6257;
	int8_t x346 = -1;
	int8_t x347 = INT8_MIN;
	static volatile int32_t x348 = -3;
	int32_t t76 = 365729;

	t76 = ((x345<(x346-x347))|x348);

	if (t76 != -3) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x349 = -1;
	int16_t x350 = INT16_MAX;
	volatile uint8_t x351 = 20U;
	static volatile int32_t t77 = -783346;

	t77 = ((x349<(x350-x351))|x352);

	if (t77 != -1401) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x353 = 60U;
	int16_t x354 = INT16_MIN;
	int16_t x355 = 1;
	uint32_t x356 = 3503U;
	uint32_t t78 = 180973261U;

	t78 = ((x353<(x354-x355))|x356);

	if (t78 != 3503U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x358 = -1;
	int64_t x359 = 2501222LL;
	int16_t x360 = INT16_MIN;
	static int32_t t79 = -10935;

	t79 = ((x357<(x358-x359))|x360);

	if (t79 != -32768) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x361 = INT64_MIN;
	int64_t x362 = -53140LL;
	volatile int8_t x363 = INT8_MIN;
	int32_t t80 = 20;

	t80 = ((x361<(x362-x363))|x364);

	if (t80 != 9) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x369 = INT8_MIN;
	int8_t x370 = -7;
	int16_t x371 = -1;
	static volatile int16_t x372 = INT16_MIN;
	volatile int32_t t81 = 82;

	t81 = ((x369<(x370-x371))|x372);

	if (t81 != -32767) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x373 = INT64_MIN;
	static int16_t x375 = 247;
	volatile int8_t x376 = INT8_MAX;
	int32_t t82 = -205065;

	t82 = ((x373<(x374-x375))|x376);

	if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x377 = -871;
	int32_t x378 = 515205;
	int32_t x379 = 0;
	int8_t x380 = -30;

	t83 = ((x377<(x378-x379))|x380);

	if (t83 != -29) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x381 = 227802493656684484LLU;
	static uint32_t x382 = UINT32_MAX;
	volatile int64_t x383 = -1LL;
	volatile uint32_t x384 = UINT32_MAX;
	uint32_t t84 = UINT32_MAX;

	t84 = ((x381<(x382-x383))|x384);

	if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x385 = INT16_MAX;
	uint64_t x386 = 3550488287895LLU;
	uint32_t x387 = 12U;
	uint64_t x388 = 39337244LLU;
	static uint64_t t85 = 9LLU;

	t85 = ((x385<(x386-x387))|x388);

	if (t85 != 39337245LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x389 = 4470435819116039445LLU;
	static uint16_t x390 = 71U;
	static uint32_t x391 = 306U;
	uint64_t t86 = UINT64_MAX;

	t86 = ((x389<(x390-x391))|x392);

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint32_t x393 = 3U;
	int64_t x394 = -1LL;
	int8_t x395 = -1;
	int64_t x396 = 1480803470002990401LL;
	int64_t t87 = 29LL;

	t87 = ((x393<(x394-x395))|x396);

	if (t87 != 1480803470002990401LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x397 = 7;
	static uint16_t x398 = 266U;
	int64_t x400 = INT64_MIN;

	t88 = ((x397<(x398-x399))|x400);

	if (t88 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x401 = UINT8_MAX;
	int64_t x402 = INT64_MIN;
	volatile int8_t x403 = 0;
	uint8_t x404 = 6U;
	volatile int32_t t89 = 2059958;

	t89 = ((x401<(x402-x403))|x404);

	if (t89 != 6) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x409 = 875193843998223LL;
	uint8_t x410 = UINT8_MAX;
	static int32_t x411 = -1;

	t90 = ((x409<(x410-x411))|x412);

	if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x413 = INT64_MIN;
	static uint32_t x414 = 222273602U;
	int16_t x415 = -19;
	volatile uint16_t x416 = 7U;
	volatile int32_t t91 = 443175806;

	t91 = ((x413<(x414-x415))|x416);

	if (t91 != 7) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x418 = -5;
	int16_t x419 = 1;
	volatile int64_t t92 = 1955252144466813505LL;

	t92 = ((x417<(x418-x419))|x420);

	if (t92 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x421 = UINT16_MAX;
	volatile int16_t x422 = -1;
	int32_t x423 = INT32_MIN;
	volatile int32_t t93 = -13048527;

	t93 = ((x421<(x422-x423))|x424);

	if (t93 != 32767) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x426 = INT16_MAX;
	int8_t x427 = -1;
	int16_t x428 = -694;
	int32_t t94 = -2;

	t94 = ((x425<(x426-x427))|x428);

	if (t94 != -693) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x433 = -1;
	uint32_t x434 = UINT32_MAX;
	uint16_t x435 = 521U;
	static volatile int16_t x436 = -1;
	static volatile int32_t t95 = 1;

	t95 = ((x433<(x434-x435))|x436);

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x437 = -5195154554987655LL;
	uint32_t x438 = UINT32_MAX;
	static uint32_t x439 = UINT32_MAX;
	static volatile int16_t x440 = 2432;
	static int32_t t96 = 16577975;

	t96 = ((x437<(x438-x439))|x440);

	if (t96 != 2433) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x445 = 0U;
	int16_t x446 = -1;
	volatile int64_t t97 = -285267196062267622LL;

	t97 = ((x445<(x446-x447))|x448);

	if (t97 != -1462896697872LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x449 = 0;
	uint64_t x450 = UINT64_MAX;
	uint8_t x452 = 0U;

	t98 = ((x449<(x450-x451))|x452);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x454 = 6771224229070LLU;
	int8_t x455 = INT8_MAX;
	static int8_t x456 = INT8_MAX;
	volatile int32_t t99 = 290476;

	t99 = ((x453<(x454-x455))|x456);

	if (t99 != 127) { NG(); } else { ; }
	
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

