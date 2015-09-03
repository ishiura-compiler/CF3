#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x7 = INT8_MIN;
int64_t x16 = INT64_MIN;
uint16_t x18 = 2969U;
static uint64_t x28 = 387818671021LLU;
static volatile uint32_t x31 = UINT32_MAX;
static int32_t x34 = INT32_MIN;
int32_t t7 = -88463923;
uint32_t x38 = 325322U;
int32_t x40 = INT32_MIN;
static volatile int64_t x43 = -1LL;
volatile int8_t x45 = INT8_MAX;
static uint64_t x46 = UINT64_MAX;
int16_t x47 = INT16_MAX;
int64_t x53 = -1379681LL;
int8_t x58 = -1;
int32_t t14 = -119404861;
int16_t x70 = INT16_MAX;
uint16_t x71 = 2961U;
volatile uint64_t x75 = 3496755628580LLU;
int8_t x77 = INT8_MIN;
volatile uint64_t x91 = 197604893542LLU;
static volatile int32_t t21 = -5352;
static volatile uint8_t x93 = 7U;
static int8_t x97 = INT8_MIN;
volatile uint32_t x100 = 15845721U;
volatile uint16_t x109 = 810U;
int16_t x111 = INT16_MIN;
uint8_t x112 = 1U;
int32_t t25 = 72402;
static uint64_t x115 = UINT64_MAX;
uint64_t x122 = 35063956LLU;
static uint8_t x123 = UINT8_MAX;
static uint16_t x127 = UINT16_MAX;
static int32_t t30 = 1;
uint32_t x141 = 4324498U;
volatile uint8_t x143 = 17U;
uint64_t x146 = UINT64_MAX;
uint16_t x150 = UINT16_MAX;
int32_t x152 = INT32_MAX;
volatile int32_t x166 = -3318027;
static int64_t x169 = -1LL;
static volatile int32_t t46 = -6584587;
uint32_t x203 = 955889U;
static uint64_t x206 = 520967LLU;
int64_t x207 = 120007773854LL;
uint8_t x208 = 0U;
int8_t x209 = INT8_MAX;
static uint64_t x212 = UINT64_MAX;
static volatile int32_t t49 = 143112343;
uint16_t x215 = UINT16_MAX;
int8_t x216 = -2;
volatile uint16_t x219 = UINT16_MAX;
int64_t x220 = INT64_MAX;
static int32_t x230 = -53;
static int64_t x231 = -1LL;
int8_t x237 = 7;
int32_t x239 = INT32_MIN;
int16_t x251 = 2081;
int32_t t59 = -44;
int64_t x258 = INT64_MIN;
volatile uint16_t x263 = UINT16_MAX;
static volatile int16_t x265 = -49;
int8_t x267 = INT8_MIN;
int32_t x270 = -1;
int8_t x272 = INT8_MAX;
volatile int64_t x274 = INT64_MIN;
volatile int32_t t64 = 84065029;
volatile int32_t t65 = 146021793;
volatile int32_t t66 = 3984;
uint64_t x286 = 2037LLU;
uint64_t x288 = 5978091531457227LLU;
int16_t x297 = INT16_MIN;
uint16_t x298 = UINT16_MAX;
uint64_t x301 = 43049LLU;
volatile int16_t x316 = INT16_MAX;
static int8_t x317 = INT8_MAX;
int16_t x320 = INT16_MIN;
static volatile int32_t t74 = 5;
volatile int16_t x324 = INT16_MIN;
volatile uint32_t x330 = UINT32_MAX;
uint32_t x340 = UINT32_MAX;
int8_t x358 = INT8_MIN;
int16_t x363 = 1902;
int64_t x364 = INT64_MIN;
volatile uint32_t x369 = UINT32_MAX;
int8_t x371 = INT8_MIN;
static int64_t x372 = -1LL;
int32_t t86 = 13240;
static int64_t x373 = INT64_MAX;
int8_t x377 = -1;
static int64_t x384 = -1LL;
int32_t t90 = 388507513;
static uint16_t x389 = 402U;
int32_t t92 = -261643;
static int64_t x397 = 5763LL;
static uint32_t x398 = 418U;
int32_t x399 = INT32_MIN;
volatile int32_t x400 = -1;
volatile int32_t t93 = -85452017;
int8_t x401 = INT8_MIN;
int16_t x403 = INT16_MIN;
static int8_t x408 = INT8_MIN;
int32_t x409 = 2783;
int16_t x410 = INT16_MIN;
int8_t x413 = INT8_MAX;
static uint16_t x417 = UINT16_MAX;
static int64_t x418 = INT64_MIN;


void f0(void) {
	volatile int64_t x1 = INT64_MAX;
	int32_t x2 = INT32_MIN;
	uint16_t x3 = 971U;
	uint8_t x4 = UINT8_MAX;
	volatile int32_t t0 = 7038;

	t0 = (x1<((x2/x3)^x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 106U;
	volatile int64_t x6 = -1LL;
	uint32_t x8 = 443U;
	volatile int32_t t1 = 60105693;

	t1 = (x5<((x6/x7)^x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x13 = 46U;
	uint8_t x14 = 1U;
	volatile int16_t x15 = 8393;
	int32_t t2 = -23;

	t2 = (x13<((x14/x15)^x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = 52955135;
	uint64_t x19 = 65029833335465LLU;
	int16_t x20 = 1;
	volatile int32_t t3 = -4530529;

	t3 = (x17<((x18/x19)^x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = -1LL;
	int64_t x22 = INT64_MAX;
	int64_t x23 = -1LL;
	uint8_t x24 = 6U;
	int32_t t4 = 24;

	t4 = (x21<((x22/x23)^x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x25 = 15;
	int32_t x26 = -12208343;
	int32_t x27 = INT32_MAX;
	int32_t t5 = 12;

	t5 = (x25<((x26/x27)^x28));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x29 = 1U;
	uint8_t x30 = 4U;
	static int16_t x32 = -1;
	volatile int32_t t6 = 1;

	t6 = (x29<((x30/x31)^x32));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = INT32_MIN;
	int64_t x35 = 731938049992140807LL;
	uint64_t x36 = 1444599761305599825LLU;

	t7 = (x33<((x34/x35)^x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x37 = 3U;
	volatile int64_t x39 = -1LL;
	static int32_t t8 = 0;

	t8 = (x37<((x38/x39)^x40));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = INT32_MIN;
	static int64_t x42 = INT64_MAX;
	int8_t x44 = -31;
	volatile int32_t t9 = 86139630;

	t9 = (x41<((x42/x43)^x44));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x48 = -1;
	int32_t t10 = 0;

	t10 = (x45<((x46/x47)^x48));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x49 = INT16_MIN;
	uint64_t x50 = 0LLU;
	uint8_t x51 = 3U;
	int32_t x52 = INT32_MAX;
	static int32_t t11 = -30376;

	t11 = (x49<((x50/x51)^x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x54 = INT64_MAX;
	uint8_t x55 = 37U;
	int64_t x56 = INT64_MAX;
	volatile int32_t t12 = -6;

	t12 = (x53<((x54/x55)^x56));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x57 = -1LL;
	int32_t x59 = 69200601;
	int32_t x60 = INT32_MIN;
	int32_t t13 = 29681;

	t13 = (x57<((x58/x59)^x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x61 = 13205291872LLU;
	uint64_t x62 = UINT64_MAX;
	static int8_t x63 = INT8_MIN;
	uint32_t x64 = UINT32_MAX;

	t14 = (x61<((x62/x63)^x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x65 = UINT64_MAX;
	int64_t x66 = -1499227LL;
	int32_t x67 = INT32_MAX;
	int32_t x68 = INT32_MIN;
	volatile int32_t t15 = 76776776;

	t15 = (x65<((x66/x67)^x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = INT8_MIN;
	int8_t x72 = INT8_MIN;
	volatile int32_t t16 = 217259229;

	t16 = (x69<((x70/x71)^x72));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x73 = 5979034183LLU;
	int8_t x74 = -11;
	uint8_t x76 = 5U;
	int32_t t17 = -179179583;

	t17 = (x73<((x74/x75)^x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x78 = -1375065471LL;
	int8_t x79 = -53;
	volatile int8_t x80 = -1;
	volatile int32_t t18 = 736033042;

	t18 = (x77<((x78/x79)^x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x81 = UINT16_MAX;
	uint8_t x82 = 25U;
	volatile uint64_t x83 = 8467263397620544618LLU;
	volatile int16_t x84 = 854;
	volatile int32_t t19 = 511;

	t19 = (x81<((x82/x83)^x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x85 = 0;
	int32_t x86 = 39502967;
	int8_t x87 = INT8_MAX;
	static uint32_t x88 = 17845089U;
	int32_t t20 = 1;

	t20 = (x85<((x86/x87)^x88));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x89 = -10;
	uint64_t x90 = 2775355957113819920LLU;
	volatile int16_t x92 = 1;

	t21 = (x89<((x90/x91)^x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x94 = 0;
	int32_t x95 = -1;
	int8_t x96 = INT8_MAX;
	volatile int32_t t22 = -14;

	t22 = (x93<((x94/x95)^x96));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x98 = 55U;
	volatile int32_t x99 = INT32_MAX;
	volatile int32_t t23 = -854;

	t23 = (x97<((x98/x99)^x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x101 = -1199095865825230318LL;
	int16_t x102 = INT16_MIN;
	uint16_t x103 = 89U;
	int16_t x104 = -82;
	static int32_t t24 = 8327961;

	t24 = (x101<((x102/x103)^x104));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x110 = -1;

	t25 = (x109<((x110/x111)^x112));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x113 = UINT8_MAX;
	static int16_t x114 = INT16_MIN;
	static uint64_t x116 = 165466LLU;
	int32_t t26 = -2188650;

	t26 = (x113<((x114/x115)^x116));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x117 = INT8_MIN;
	int16_t x118 = INT16_MAX;
	int32_t x119 = INT32_MIN;
	int64_t x120 = 389LL;
	volatile int32_t t27 = -13;

	t27 = (x117<((x118/x119)^x120));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x121 = -2;
	int8_t x124 = INT8_MIN;
	int32_t t28 = 851174;

	t28 = (x121<((x122/x123)^x124));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x125 = 5013149LLU;
	static uint32_t x126 = 186U;
	volatile int16_t x128 = INT16_MIN;
	volatile int32_t t29 = 2;

	t29 = (x125<((x126/x127)^x128));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x129 = 18613779U;
	int16_t x130 = -63;
	volatile int16_t x131 = 1019;
	int8_t x132 = INT8_MIN;

	t30 = (x129<((x130/x131)^x132));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x137 = -1;
	uint64_t x138 = UINT64_MAX;
	static volatile uint64_t x139 = 2914995LLU;
	uint16_t x140 = 2177U;
	int32_t t31 = -5;

	t31 = (x137<((x138/x139)^x140));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x142 = 5U;
	uint32_t x144 = 41136U;
	int32_t t32 = -1;

	t32 = (x141<((x142/x143)^x144));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x145 = INT16_MIN;
	int32_t x147 = 87765852;
	int8_t x148 = -1;
	volatile int32_t t33 = 44660;

	t33 = (x145<((x146/x147)^x148));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x149 = 1U;
	volatile int64_t x151 = 2705126627LL;
	static volatile int32_t t34 = -5618794;

	t34 = (x149<((x150/x151)^x152));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x153 = -1LL;
	int64_t x154 = 252LL;
	int64_t x155 = INT64_MIN;
	static int32_t x156 = INT32_MIN;
	int32_t t35 = -209054947;

	t35 = (x153<((x154/x155)^x156));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x157 = 13614U;
	int16_t x158 = -1;
	int16_t x159 = INT16_MIN;
	int32_t x160 = 55;
	int32_t t36 = 12661140;

	t36 = (x157<((x158/x159)^x160));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x161 = UINT16_MAX;
	int32_t x162 = INT32_MAX;
	static uint16_t x163 = 11U;
	int64_t x164 = -1LL;
	int32_t t37 = -37;

	t37 = (x161<((x162/x163)^x164));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x165 = 22U;
	static uint64_t x167 = 30264769007LLU;
	int64_t x168 = INT64_MIN;
	static volatile int32_t t38 = -6718;

	t38 = (x165<((x166/x167)^x168));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x170 = 7164U;
	int16_t x171 = INT16_MIN;
	static int16_t x172 = INT16_MIN;
	volatile int32_t t39 = 14;

	t39 = (x169<((x170/x171)^x172));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x173 = 1U;
	static volatile int8_t x174 = INT8_MIN;
	int32_t x175 = -9;
	int16_t x176 = -50;
	volatile int32_t t40 = -227130;

	t40 = (x173<((x174/x175)^x176));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x177 = -1;
	int16_t x178 = -1;
	int8_t x179 = INT8_MAX;
	int16_t x180 = 1;
	int32_t t41 = 2756872;

	t41 = (x177<((x178/x179)^x180));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x181 = 3619039788LLU;
	volatile int8_t x182 = -1;
	int64_t x183 = -1LL;
	int16_t x184 = -1;
	int32_t t42 = -39;

	t42 = (x181<((x182/x183)^x184));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x185 = 16519932LL;
	volatile int64_t x186 = -1LL;
	int16_t x187 = INT16_MAX;
	volatile int64_t x188 = -1LL;
	int32_t t43 = -41;

	t43 = (x185<((x186/x187)^x188));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x189 = INT64_MAX;
	static int8_t x190 = -1;
	int64_t x191 = 8591705578934LL;
	int64_t x192 = -9LL;
	int32_t t44 = -14;

	t44 = (x189<((x190/x191)^x192));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x193 = INT16_MIN;
	int8_t x194 = -1;
	volatile int8_t x195 = INT8_MAX;
	int16_t x196 = INT16_MIN;
	int32_t t45 = -122;

	t45 = (x193<((x194/x195)^x196));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x197 = -1;
	static int32_t x198 = 35135;
	int8_t x199 = 12;
	volatile uint8_t x200 = UINT8_MAX;

	t46 = (x197<((x198/x199)^x200));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x201 = INT32_MAX;
	int64_t x202 = -1LL;
	int16_t x204 = 51;
	volatile int32_t t47 = -446;

	t47 = (x201<((x202/x203)^x204));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x205 = -1LL;
	int32_t t48 = -296812;

	t48 = (x205<((x206/x207)^x208));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x210 = 15368;
	volatile int8_t x211 = -1;

	t49 = (x209<((x210/x211)^x212));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x213 = INT16_MIN;
	uint16_t x214 = UINT16_MAX;
	volatile int32_t t50 = -116830;

	t50 = (x213<((x214/x215)^x216));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x217 = 8347U;
	int8_t x218 = 4;
	int32_t t51 = 1;

	t51 = (x217<((x218/x219)^x220));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x221 = INT32_MIN;
	volatile uint32_t x222 = 8634951U;
	volatile uint16_t x223 = 1U;
	static uint64_t x224 = 25817LLU;
	volatile int32_t t52 = 38101529;

	t52 = (x221<((x222/x223)^x224));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x225 = 1007669717989992441LL;
	volatile int8_t x226 = INT8_MIN;
	static uint16_t x227 = 6913U;
	static uint8_t x228 = UINT8_MAX;
	volatile int32_t t53 = -14;

	t53 = (x225<((x226/x227)^x228));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x229 = INT32_MIN;
	int32_t x232 = 700188;
	volatile int32_t t54 = -134;

	t54 = (x229<((x230/x231)^x232));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x238 = INT32_MIN;
	int32_t x240 = INT32_MIN;
	volatile int32_t t55 = 6;

	t55 = (x237<((x238/x239)^x240));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x241 = 1290LL;
	uint32_t x242 = 1066966U;
	static uint32_t x243 = 851856052U;
	static uint8_t x244 = 5U;
	int32_t t56 = 115583;

	t56 = (x241<((x242/x243)^x244));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x245 = INT64_MIN;
	int32_t x246 = 242517151;
	int16_t x247 = INT16_MAX;
	volatile uint16_t x248 = UINT16_MAX;
	int32_t t57 = -1;

	t57 = (x245<((x246/x247)^x248));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x249 = -8074333;
	static int16_t x250 = INT16_MIN;
	volatile int32_t x252 = -1860547;
	static volatile int32_t t58 = -17972;

	t58 = (x249<((x250/x251)^x252));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x253 = 85867;
	static int32_t x254 = INT32_MIN;
	int64_t x255 = INT64_MAX;
	uint16_t x256 = UINT16_MAX;

	t59 = (x253<((x254/x255)^x256));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x257 = -1;
	int16_t x259 = INT16_MIN;
	static int32_t x260 = 7858372;
	static volatile int32_t t60 = 0;

	t60 = (x257<((x258/x259)^x260));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x261 = -1;
	static volatile int64_t x262 = 27229256261552876LL;
	volatile int64_t x264 = INT64_MAX;
	volatile int32_t t61 = 0;

	t61 = (x261<((x262/x263)^x264));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x266 = INT8_MIN;
	uint32_t x268 = UINT32_MAX;
	int32_t t62 = 545;

	t62 = (x265<((x266/x267)^x268));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x269 = -9;
	uint8_t x271 = 92U;
	volatile int32_t t63 = -5;

	t63 = (x269<((x270/x271)^x272));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x273 = 0;
	int32_t x275 = INT32_MAX;
	int8_t x276 = INT8_MIN;

	t64 = (x273<((x274/x275)^x276));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int32_t x277 = 2;
	int16_t x278 = INT16_MAX;
	static uint64_t x279 = UINT64_MAX;
	int16_t x280 = INT16_MAX;

	t65 = (x277<((x278/x279)^x280));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x281 = UINT32_MAX;
	uint32_t x282 = 474744558U;
	int64_t x283 = 2465321312268LL;
	uint64_t x284 = UINT64_MAX;

	t66 = (x281<((x282/x283)^x284));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x285 = -66770473084226805LL;
	static int8_t x287 = INT8_MIN;
	static int32_t t67 = 105982715;

	t67 = (x285<((x286/x287)^x288));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x293 = -1LL;
	int64_t x294 = INT64_MIN;
	uint8_t x295 = 64U;
	uint64_t x296 = 9346148281080LLU;
	volatile int32_t t68 = -1;

	t68 = (x293<((x294/x295)^x296));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x299 = UINT32_MAX;
	static uint32_t x300 = UINT32_MAX;
	volatile int32_t t69 = -1;

	t69 = (x297<((x298/x299)^x300));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x302 = UINT8_MAX;
	int16_t x303 = -679;
	static int32_t x304 = INT32_MAX;
	int32_t t70 = -6;

	t70 = (x301<((x302/x303)^x304));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x305 = 13767133U;
	int8_t x306 = 2;
	uint32_t x307 = UINT32_MAX;
	uint64_t x308 = UINT64_MAX;
	int32_t t71 = 8133;

	t71 = (x305<((x306/x307)^x308));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x309 = INT16_MAX;
	int64_t x310 = -1LL;
	static volatile int8_t x311 = 1;
	volatile int32_t x312 = 488779;
	int32_t t72 = 15904266;

	t72 = (x309<((x310/x311)^x312));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x313 = 0U;
	uint64_t x314 = 12355LLU;
	int32_t x315 = 168846;
	int32_t t73 = 265;

	t73 = (x313<((x314/x315)^x316));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x318 = INT16_MIN;
	volatile int16_t x319 = INT16_MIN;

	t74 = (x317<((x318/x319)^x320));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x321 = -6328;
	int64_t x322 = -275450463LL;
	volatile int64_t x323 = 3775532613586946499LL;
	int32_t t75 = -75915;

	t75 = (x321<((x322/x323)^x324));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x325 = 2265U;
	static int64_t x326 = -9504LL;
	int8_t x327 = -1;
	uint16_t x328 = 2U;
	int32_t t76 = -36;

	t76 = (x325<((x326/x327)^x328));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x329 = INT8_MIN;
	int64_t x331 = -829689LL;
	volatile int32_t x332 = INT32_MIN;
	int32_t t77 = -21457329;

	t77 = (x329<((x330/x331)^x332));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x333 = 8277811655040LLU;
	uint8_t x334 = 18U;
	int64_t x335 = INT64_MAX;
	static int16_t x336 = -1;
	volatile int32_t t78 = 1056135757;

	t78 = (x333<((x334/x335)^x336));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x337 = 88U;
	int32_t x338 = -1;
	static int32_t x339 = 16778957;
	volatile int32_t t79 = 66067121;

	t79 = (x337<((x338/x339)^x340));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x341 = INT32_MIN;
	int64_t x342 = INT64_MAX;
	int16_t x343 = INT16_MIN;
	int64_t x344 = INT64_MAX;
	volatile int32_t t80 = 1;

	t80 = (x341<((x342/x343)^x344));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x345 = 86816U;
	int16_t x346 = INT16_MAX;
	volatile uint16_t x347 = 12U;
	int8_t x348 = -1;
	volatile int32_t t81 = -1;

	t81 = (x345<((x346/x347)^x348));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x353 = INT8_MIN;
	static uint8_t x354 = UINT8_MAX;
	int32_t x355 = -144733144;
	static int32_t x356 = -1;
	volatile int32_t t82 = -948673;

	t82 = (x353<((x354/x355)^x356));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x357 = INT16_MIN;
	static int8_t x359 = INT8_MIN;
	int16_t x360 = INT16_MIN;
	static volatile int32_t t83 = -684103287;

	t83 = (x357<((x358/x359)^x360));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x361 = 2909;
	int8_t x362 = INT8_MAX;
	static int32_t t84 = 117;

	t84 = (x361<((x362/x363)^x364));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x365 = 2288U;
	volatile int32_t x366 = INT32_MIN;
	int64_t x367 = -1LL;
	static int64_t x368 = 1949621953975620LL;
	int32_t t85 = -51780487;

	t85 = (x365<((x366/x367)^x368));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x370 = -12;

	t86 = (x369<((x370/x371)^x372));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x374 = 3U;
	int16_t x375 = INT16_MIN;
	uint16_t x376 = 3U;
	static int32_t t87 = -3376;

	t87 = (x373<((x374/x375)^x376));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x378 = INT16_MIN;
	int32_t x379 = -1;
	static volatile int32_t x380 = INT32_MIN;
	static volatile int32_t t88 = -3588;

	t88 = (x377<((x378/x379)^x380));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x381 = INT64_MIN;
	static int32_t x382 = -1;
	int64_t x383 = -1LL;
	volatile int32_t t89 = 0;

	t89 = (x381<((x382/x383)^x384));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x385 = INT64_MIN;
	int32_t x386 = -91712;
	volatile int16_t x387 = INT16_MIN;
	static int16_t x388 = -5;

	t90 = (x385<((x386/x387)^x388));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x390 = UINT32_MAX;
	uint32_t x391 = UINT32_MAX;
	int16_t x392 = INT16_MIN;
	volatile int32_t t91 = 41398;

	t91 = (x389<((x390/x391)^x392));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x393 = INT16_MAX;
	int64_t x394 = INT64_MIN;
	int32_t x395 = 1;
	static uint32_t x396 = UINT32_MAX;

	t92 = (x393<((x394/x395)^x396));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {


	t93 = (x397<((x398/x399)^x400));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x402 = -1;
	int8_t x404 = INT8_MIN;
	volatile int32_t t94 = 16;

	t94 = (x401<((x402/x403)^x404));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x405 = 5057U;
	volatile int64_t x406 = INT64_MIN;
	volatile uint8_t x407 = 14U;
	int32_t t95 = 17129;

	t95 = (x405<((x406/x407)^x408));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x411 = INT32_MIN;
	int16_t x412 = -57;
	volatile int32_t t96 = 485747;

	t96 = (x409<((x410/x411)^x412));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x414 = 30;
	int8_t x415 = INT8_MIN;
	int32_t x416 = -45796;
	int32_t t97 = 357826966;

	t97 = (x413<((x414/x415)^x416));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x419 = INT64_MIN;
	int64_t x420 = INT64_MAX;
	int32_t t98 = -314802;

	t98 = (x417<((x418/x419)^x420));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x421 = 0;
	volatile uint8_t x422 = 8U;
	volatile int64_t x423 = INT64_MIN;
	static volatile uint8_t x424 = 1U;
	int32_t t99 = -5209;

	t99 = (x421<((x422/x423)^x424));

	if (t99 != 1) { NG(); } else { ; }
	
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

