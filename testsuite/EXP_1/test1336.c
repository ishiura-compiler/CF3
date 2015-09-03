#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x2 = UINT64_MAX;
int64_t x16 = INT64_MAX;
uint64_t x19 = 79673LLU;
volatile uint16_t x25 = 71U;
int32_t t6 = -83700;
int32_t x33 = 397;
static volatile int32_t t9 = -4645373;
int16_t x41 = -1;
static uint64_t x44 = UINT64_MAX;
static volatile uint64_t x47 = 3438902672136356LLU;
int16_t x51 = INT16_MAX;
static int32_t x52 = INT32_MIN;
static int8_t x64 = -5;
int8_t x68 = 16;
volatile int16_t x71 = INT16_MIN;
static int32_t t17 = 2130;
static volatile uint32_t x73 = UINT32_MAX;
volatile int8_t x75 = -1;
int32_t x76 = INT32_MIN;
int32_t t18 = 8;
volatile int64_t x79 = -923101827LL;
int32_t x80 = INT32_MIN;
static uint32_t x81 = 170685U;
volatile int32_t t20 = -63351;
int8_t x85 = INT8_MIN;
uint8_t x87 = 3U;
int16_t x96 = 119;
static volatile int32_t t26 = 30282;
int64_t x109 = INT64_MIN;
static volatile int8_t x116 = 0;
int32_t t28 = -22908;
static int8_t x117 = INT8_MIN;
int64_t x118 = INT64_MIN;
int32_t x119 = 14577318;
uint8_t x137 = UINT8_MAX;
static int8_t x140 = -6;
uint64_t x142 = 8352655845781LLU;
uint32_t x148 = 29084U;
int32_t x160 = INT32_MIN;
uint8_t x166 = UINT8_MAX;
int16_t x171 = 108;
uint32_t x186 = 183279147U;
volatile uint64_t x190 = 95LLU;
int32_t t48 = -1;
int32_t x198 = 114301962;
static int32_t t49 = -3276939;
int32_t x201 = INT32_MIN;
volatile uint64_t x203 = 375406447226909LLU;
int32_t x214 = INT32_MIN;
uint32_t x216 = UINT32_MAX;
volatile int64_t x217 = INT64_MAX;
uint32_t x227 = UINT32_MAX;
int8_t x228 = INT8_MAX;
static volatile int32_t t56 = -38426;
int64_t x232 = INT64_MIN;
uint8_t x245 = 0U;
uint32_t x246 = 39448U;
uint64_t x248 = 59LLU;
int32_t x249 = INT32_MAX;
int64_t x252 = INT64_MIN;
static int64_t x257 = -283709461947737LL;
int64_t x264 = INT64_MIN;
int16_t x266 = 1790;
int32_t t67 = -501656081;
int16_t x278 = INT16_MAX;
uint16_t x279 = UINT16_MAX;
int32_t t69 = -68;
uint64_t x289 = 161752074900565LLU;
uint8_t x307 = 26U;
int16_t x309 = -1794;
uint64_t x317 = UINT64_MAX;
int16_t x318 = -1;
int32_t t79 = 139340134;
volatile int32_t t82 = 2558;
static uint8_t x339 = UINT8_MAX;
static volatile int32_t x346 = -118;
volatile int8_t x347 = -1;
int32_t x350 = 76565586;
int64_t x351 = INT64_MAX;
uint64_t x363 = 20LLU;
int8_t x365 = 9;
static volatile uint16_t x366 = 640U;
uint64_t x367 = 124998712802999LLU;
volatile int64_t x372 = -1LL;
int32_t t92 = -610064447;
int8_t x379 = INT8_MAX;
int8_t x383 = -3;
volatile int32_t t95 = 912;
int32_t t97 = -9567;
static volatile int16_t x397 = 92;


void f0(void) {
	uint64_t x1 = 37287069805LLU;
	uint32_t x3 = 13U;
	uint16_t x4 = 5U;
	volatile int32_t t0 = -262032926;

	t0 = (((x1==x2)|x3)<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = INT16_MIN;
	int64_t x6 = INT64_MIN;
	int16_t x7 = 478;
	volatile uint8_t x8 = 77U;
	int32_t t1 = 1429407;

	t1 = (((x5==x6)|x7)<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -10688663;
	int32_t x10 = -9765;
	int32_t x11 = INT32_MAX;
	static int32_t x12 = INT32_MIN;
	volatile int32_t t2 = -1;

	t2 = (((x9==x10)|x11)<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = 15LL;
	volatile uint64_t x14 = 2970870396582638008LLU;
	uint8_t x15 = 76U;
	static int32_t t3 = 3704;

	t3 = (((x13==x14)|x15)<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = 1120;
	int32_t x18 = -3944394;
	static uint16_t x20 = 2U;
	int32_t t4 = 2930;

	t4 = (((x17==x18)|x19)<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	uint32_t x22 = UINT32_MAX;
	static int16_t x23 = 1226;
	int8_t x24 = INT8_MIN;
	volatile int32_t t5 = 2545;

	t5 = (((x21==x22)|x23)<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x26 = UINT16_MAX;
	static uint8_t x27 = 30U;
	int64_t x28 = -1LL;

	t6 = (((x25==x26)|x27)<=x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 30238870067LLU;
	uint8_t x30 = 40U;
	uint64_t x31 = 15166LLU;
	int16_t x32 = INT16_MIN;
	int32_t t7 = 209;

	t7 = (((x29==x30)|x31)<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x34 = -17858359787319530LL;
	volatile int64_t x35 = INT64_MIN;
	int16_t x36 = 102;
	static volatile int32_t t8 = 49573051;

	t8 = (((x33==x34)|x35)<=x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	int32_t x38 = 253709;
	int32_t x39 = 0;
	uint32_t x40 = 351570105U;

	t9 = (((x37==x38)|x39)<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x42 = INT8_MIN;
	uint64_t x43 = UINT64_MAX;
	int32_t t10 = -12;

	t10 = (((x41==x42)|x43)<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -1;
	volatile int32_t x46 = -7240;
	int32_t x48 = INT32_MIN;
	volatile int32_t t11 = 93;

	t11 = (((x45==x46)|x47)<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	int16_t x50 = INT16_MAX;
	volatile int32_t t12 = -3184649;

	t12 = (((x49==x50)|x51)<=x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = -3;
	uint8_t x54 = 2U;
	uint64_t x55 = 4884347221721233LLU;
	int8_t x56 = -2;
	volatile int32_t t13 = -47185;

	t13 = (((x53==x54)|x55)<=x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	volatile uint8_t x58 = UINT8_MAX;
	static uint16_t x59 = 100U;
	uint32_t x60 = 2946134U;
	int32_t t14 = -69094516;

	t14 = (((x57==x58)|x59)<=x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x61 = INT16_MIN;
	int32_t x62 = INT32_MIN;
	uint64_t x63 = UINT64_MAX;
	volatile int32_t t15 = -231549683;

	t15 = (((x61==x62)|x63)<=x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x65 = INT32_MIN;
	uint16_t x66 = 128U;
	static volatile int64_t x67 = INT64_MAX;
	static volatile int32_t t16 = -21800;

	t16 = (((x65==x66)|x67)<=x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 237943932523LLU;
	int16_t x70 = 62;
	int64_t x72 = 6930976514LL;

	t17 = (((x69==x70)|x71)<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x74 = INT64_MIN;

	t18 = (((x73==x74)|x75)<=x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = 0;
	int16_t x78 = -1;
	volatile int32_t t19 = 651;

	t19 = (((x77==x78)|x79)<=x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x82 = 57U;
	static int8_t x83 = INT8_MIN;
	int32_t x84 = INT32_MIN;

	t20 = (((x81==x82)|x83)<=x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x86 = 6U;
	int64_t x88 = INT64_MIN;
	volatile int32_t t21 = 0;

	t21 = (((x85==x86)|x87)<=x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x89 = INT8_MAX;
	int32_t x90 = INT32_MIN;
	int32_t x91 = INT32_MIN;
	int32_t x92 = 114229475;
	volatile int32_t t22 = 184497954;

	t22 = (((x89==x90)|x91)<=x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MIN;
	static volatile uint8_t x94 = 55U;
	int64_t x95 = INT64_MIN;
	int32_t t23 = 105;

	t23 = (((x93==x94)|x95)<=x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x97 = -1;
	int8_t x98 = INT8_MIN;
	int64_t x99 = -1LL;
	static int16_t x100 = INT16_MIN;
	volatile int32_t t24 = -6600;

	t24 = (((x97==x98)|x99)<=x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x101 = UINT32_MAX;
	volatile int8_t x102 = -16;
	volatile uint8_t x103 = 9U;
	int32_t x104 = 0;
	volatile int32_t t25 = -38921883;

	t25 = (((x101==x102)|x103)<=x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MIN;
	int32_t x106 = -1;
	static int16_t x107 = 5;
	uint64_t x108 = 45425977639LLU;

	t26 = (((x105==x106)|x107)<=x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x110 = 256215234LLU;
	uint32_t x111 = 2U;
	static volatile uint64_t x112 = 71552LLU;
	static int32_t t27 = -265863752;

	t27 = (((x109==x110)|x111)<=x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = -3227758746LL;
	volatile uint64_t x114 = 4337238394573139LLU;
	static uint64_t x115 = 4888142104563782081LLU;

	t28 = (((x113==x114)|x115)<=x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x120 = -1;
	volatile int32_t t29 = -31230;

	t29 = (((x117==x118)|x119)<=x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MIN;
	int16_t x122 = INT16_MIN;
	int64_t x123 = 1035125675282230672LL;
	uint8_t x124 = UINT8_MAX;
	volatile int32_t t30 = 450;

	t30 = (((x121==x122)|x123)<=x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = 1;
	int8_t x126 = 23;
	int32_t x127 = INT32_MAX;
	uint32_t x128 = 290824382U;
	static int32_t t31 = 1134299;

	t31 = (((x125==x126)|x127)<=x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = UINT8_MAX;
	uint64_t x130 = 128LLU;
	volatile int8_t x131 = -1;
	uint16_t x132 = 520U;
	int32_t t32 = 1;

	t32 = (((x129==x130)|x131)<=x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x133 = INT64_MAX;
	uint16_t x134 = UINT16_MAX;
	int8_t x135 = INT8_MAX;
	int64_t x136 = INT64_MIN;
	volatile int32_t t33 = -35;

	t33 = (((x133==x134)|x135)<=x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x138 = INT16_MIN;
	int64_t x139 = -1LL;
	int32_t t34 = 354;

	t34 = (((x137==x138)|x139)<=x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x141 = UINT8_MAX;
	int8_t x143 = INT8_MIN;
	uint64_t x144 = UINT64_MAX;
	volatile int32_t t35 = -3819;

	t35 = (((x141==x142)|x143)<=x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x145 = 23U;
	volatile uint64_t x146 = 21248LLU;
	int8_t x147 = INT8_MIN;
	static int32_t t36 = 13;

	t36 = (((x145==x146)|x147)<=x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x149 = 1514U;
	volatile int32_t x150 = -1;
	int64_t x151 = -1LL;
	int8_t x152 = INT8_MIN;
	int32_t t37 = 751;

	t37 = (((x149==x150)|x151)<=x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x153 = INT32_MAX;
	uint16_t x154 = 0U;
	int8_t x155 = INT8_MAX;
	static int64_t x156 = INT64_MIN;
	volatile int32_t t38 = 0;

	t38 = (((x153==x154)|x155)<=x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = -1915388488539176LL;
	int8_t x158 = INT8_MIN;
	static int16_t x159 = INT16_MIN;
	static int32_t t39 = -163;

	t39 = (((x157==x158)|x159)<=x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = -1;
	int64_t x162 = -1LL;
	uint8_t x163 = 1U;
	int8_t x164 = INT8_MAX;
	volatile int32_t t40 = -384482;

	t40 = (((x161==x162)|x163)<=x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x165 = 1LL;
	int32_t x167 = INT32_MIN;
	int64_t x168 = INT64_MIN;
	int32_t t41 = 2573;

	t41 = (((x165==x166)|x167)<=x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = 7158118148736LL;
	volatile int8_t x170 = INT8_MAX;
	uint32_t x172 = 13U;
	int32_t t42 = -135;

	t42 = (((x169==x170)|x171)<=x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x173 = UINT8_MAX;
	uint16_t x174 = 215U;
	int16_t x175 = -1;
	uint8_t x176 = 58U;
	int32_t t43 = -6119867;

	t43 = (((x173==x174)|x175)<=x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x177 = 4257;
	int32_t x178 = INT32_MIN;
	int8_t x179 = INT8_MIN;
	uint32_t x180 = 3115122U;
	volatile int32_t t44 = 48812462;

	t44 = (((x177==x178)|x179)<=x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = -1;
	int8_t x182 = INT8_MIN;
	int64_t x183 = -6645245572154631LL;
	int8_t x184 = INT8_MAX;
	static int32_t t45 = -3456496;

	t45 = (((x181==x182)|x183)<=x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = -13;
	int64_t x187 = -685426392100LL;
	int64_t x188 = 5396413509LL;
	static volatile int32_t t46 = 5053307;

	t46 = (((x185==x186)|x187)<=x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MIN;
	int16_t x191 = -1;
	volatile int8_t x192 = 6;
	volatile int32_t t47 = -134392712;

	t47 = (((x189==x190)|x191)<=x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = -1;
	uint32_t x194 = UINT32_MAX;
	int8_t x195 = -1;
	uint16_t x196 = UINT16_MAX;

	t48 = (((x193==x194)|x195)<=x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MAX;
	uint8_t x199 = UINT8_MAX;
	int16_t x200 = INT16_MIN;

	t49 = (((x197==x198)|x199)<=x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x202 = -1;
	int64_t x204 = INT64_MAX;
	volatile int32_t t50 = 1;

	t50 = (((x201==x202)|x203)<=x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x205 = INT16_MIN;
	static uint32_t x206 = UINT32_MAX;
	int16_t x207 = 0;
	static uint16_t x208 = 29U;
	static volatile int32_t t51 = 1389;

	t51 = (((x205==x206)|x207)<=x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = INT32_MAX;
	uint8_t x210 = UINT8_MAX;
	int8_t x211 = INT8_MIN;
	volatile int64_t x212 = 37481428491LL;
	int32_t t52 = -14873384;

	t52 = (((x209==x210)|x211)<=x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = 254343LLU;
	int8_t x215 = INT8_MAX;
	int32_t t53 = -2245;

	t53 = (((x213==x214)|x215)<=x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x218 = 1277U;
	int64_t x219 = INT64_MIN;
	int16_t x220 = -1;
	int32_t t54 = -1504;

	t54 = (((x217==x218)|x219)<=x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x221 = UINT8_MAX;
	int64_t x222 = -13262393672741LL;
	uint16_t x223 = 61U;
	volatile int32_t x224 = INT32_MIN;
	int32_t t55 = -975342;

	t55 = (((x221==x222)|x223)<=x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x225 = -1188;
	volatile int32_t x226 = 1;

	t56 = (((x225==x226)|x227)<=x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = 12U;
	int64_t x230 = INT64_MIN;
	int8_t x231 = 0;
	volatile int32_t t57 = 976;

	t57 = (((x229==x230)|x231)<=x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = -18;
	int32_t x234 = INT32_MIN;
	int32_t x235 = 3;
	volatile int8_t x236 = -61;
	volatile int32_t t58 = -1066;

	t58 = (((x233==x234)|x235)<=x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x237 = INT8_MAX;
	static int8_t x238 = 15;
	int32_t x239 = 40447565;
	int16_t x240 = 3;
	volatile int32_t t59 = -43;

	t59 = (((x237==x238)|x239)<=x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = 6;
	int16_t x242 = 303;
	int16_t x243 = INT16_MIN;
	uint16_t x244 = 8034U;
	static volatile int32_t t60 = -389;

	t60 = (((x241==x242)|x243)<=x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x247 = -393815774854395LL;
	static int32_t t61 = 159985;

	t61 = (((x245==x246)|x247)<=x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x250 = -13341573267LL;
	int32_t x251 = INT32_MAX;
	static volatile int32_t t62 = 6294237;

	t62 = (((x249==x250)|x251)<=x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x253 = 132021911605187LLU;
	static int8_t x254 = 10;
	int16_t x255 = INT16_MIN;
	volatile int32_t x256 = 70527051;
	int32_t t63 = -1063;

	t63 = (((x253==x254)|x255)<=x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x258 = INT32_MIN;
	int64_t x259 = -1LL;
	volatile int8_t x260 = INT8_MAX;
	volatile int32_t t64 = -3;

	t64 = (((x257==x258)|x259)<=x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x261 = INT32_MIN;
	volatile int32_t x262 = INT32_MIN;
	int32_t x263 = INT32_MIN;
	static int32_t t65 = 2305;

	t65 = (((x261==x262)|x263)<=x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = 1389509;
	int8_t x267 = INT8_MIN;
	int64_t x268 = INT64_MIN;
	static volatile int32_t t66 = 8315;

	t66 = (((x265==x266)|x267)<=x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = 2U;
	static volatile uint16_t x270 = 68U;
	uint16_t x271 = 3891U;
	int64_t x272 = INT64_MIN;

	t67 = (((x269==x270)|x271)<=x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = 24973;
	int32_t x274 = INT32_MIN;
	int32_t x275 = INT32_MAX;
	int64_t x276 = INT64_MIN;
	static int32_t t68 = 10332293;

	t68 = (((x273==x274)|x275)<=x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x277 = INT64_MIN;
	int64_t x280 = INT64_MIN;

	t69 = (((x277==x278)|x279)<=x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint64_t x281 = UINT64_MAX;
	uint16_t x282 = 3471U;
	uint16_t x283 = 15921U;
	volatile int16_t x284 = 810;
	int32_t t70 = 54030963;

	t70 = (((x281==x282)|x283)<=x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = 134230;
	int64_t x286 = INT64_MIN;
	int8_t x287 = INT8_MIN;
	int16_t x288 = INT16_MAX;
	int32_t t71 = 0;

	t71 = (((x285==x286)|x287)<=x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x290 = -1;
	uint64_t x291 = UINT64_MAX;
	static int32_t x292 = INT32_MIN;
	volatile int32_t t72 = 45;

	t72 = (((x289==x290)|x291)<=x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x293 = UINT8_MAX;
	int8_t x294 = INT8_MIN;
	static volatile uint8_t x295 = UINT8_MAX;
	int64_t x296 = -1LL;
	int32_t t73 = -41424031;

	t73 = (((x293==x294)|x295)<=x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = 1U;
	int8_t x298 = INT8_MAX;
	int16_t x299 = 0;
	static uint16_t x300 = UINT16_MAX;
	volatile int32_t t74 = -16455861;

	t74 = (((x297==x298)|x299)<=x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int16_t x301 = -1;
	int16_t x302 = INT16_MIN;
	uint32_t x303 = 4463588U;
	volatile int64_t x304 = INT64_MAX;
	int32_t t75 = -44310;

	t75 = (((x301==x302)|x303)<=x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = 315;
	volatile uint32_t x306 = UINT32_MAX;
	static int64_t x308 = -11783723653124326LL;
	int32_t t76 = -1;

	t76 = (((x305==x306)|x307)<=x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x310 = 2697194326LLU;
	uint64_t x311 = 3057777553331472779LLU;
	volatile uint64_t x312 = UINT64_MAX;
	volatile int32_t t77 = 2898;

	t77 = (((x309==x310)|x311)<=x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x313 = -1LL;
	volatile int64_t x314 = -1LL;
	int32_t x315 = INT32_MIN;
	uint64_t x316 = 35LLU;
	int32_t t78 = 485;

	t78 = (((x313==x314)|x315)<=x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int32_t x319 = INT32_MIN;
	volatile uint16_t x320 = 19U;

	t79 = (((x317==x318)|x319)<=x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MIN;
	int64_t x322 = 5647691LL;
	uint16_t x323 = UINT16_MAX;
	static int32_t x324 = -28304167;
	int32_t t80 = -8851327;

	t80 = (((x321==x322)|x323)<=x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x325 = -131;
	int8_t x326 = -13;
	uint16_t x327 = 67U;
	static volatile int64_t x328 = INT64_MAX;
	volatile int32_t t81 = -670285066;

	t81 = (((x325==x326)|x327)<=x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = INT8_MAX;
	int64_t x330 = INT64_MIN;
	static uint64_t x331 = 5LLU;
	int8_t x332 = -1;

	t82 = (((x329==x330)|x331)<=x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x333 = -1LL;
	int16_t x334 = 4469;
	int32_t x335 = -1;
	int8_t x336 = INT8_MIN;
	int32_t t83 = 43;

	t83 = (((x333==x334)|x335)<=x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = -105305597LL;
	int8_t x338 = INT8_MIN;
	int64_t x340 = INT64_MAX;
	int32_t t84 = -519362110;

	t84 = (((x337==x338)|x339)<=x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x341 = 735822U;
	uint64_t x342 = 15LLU;
	int8_t x343 = -2;
	uint16_t x344 = 1U;
	volatile int32_t t85 = -25;

	t85 = (((x341==x342)|x343)<=x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = INT32_MIN;
	volatile int8_t x348 = INT8_MAX;
	volatile int32_t t86 = 63;

	t86 = (((x345==x346)|x347)<=x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x349 = UINT16_MAX;
	static int32_t x352 = 36181;
	int32_t t87 = -160593006;

	t87 = (((x349==x350)|x351)<=x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = 0LL;
	static int16_t x354 = INT16_MIN;
	int16_t x355 = INT16_MAX;
	int16_t x356 = INT16_MIN;
	static volatile int32_t t88 = -416739;

	t88 = (((x353==x354)|x355)<=x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MIN;
	int8_t x358 = INT8_MAX;
	static uint8_t x359 = UINT8_MAX;
	volatile int64_t x360 = INT64_MIN;
	int32_t t89 = -1;

	t89 = (((x357==x358)|x359)<=x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x361 = -1LL;
	volatile int8_t x362 = INT8_MIN;
	uint8_t x364 = 78U;
	int32_t t90 = -9;

	t90 = (((x361==x362)|x363)<=x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x368 = 2U;
	volatile int32_t t91 = -14517;

	t91 = (((x365==x366)|x367)<=x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = INT16_MAX;
	static int64_t x370 = INT64_MIN;
	uint16_t x371 = UINT16_MAX;

	t92 = (((x369==x370)|x371)<=x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = 6;
	int16_t x374 = INT16_MIN;
	uint8_t x375 = 71U;
	static int64_t x376 = INT64_MAX;
	static volatile int32_t t93 = -5577142;

	t93 = (((x373==x374)|x375)<=x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = INT64_MIN;
	static volatile int32_t x378 = INT32_MIN;
	uint8_t x380 = UINT8_MAX;
	int32_t t94 = -3565822;

	t94 = (((x377==x378)|x379)<=x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x381 = 227048962229251683LLU;
	int32_t x382 = INT32_MAX;
	volatile int32_t x384 = -1;

	t95 = (((x381==x382)|x383)<=x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MIN;
	volatile int16_t x386 = -1;
	uint8_t x387 = 1U;
	int8_t x388 = 33;
	volatile int32_t t96 = -944786;

	t96 = (((x385==x386)|x387)<=x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = 3U;
	int32_t x390 = INT32_MIN;
	int8_t x391 = 12;
	int32_t x392 = INT32_MIN;

	t97 = (((x389==x390)|x391)<=x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = INT64_MAX;
	volatile int32_t x394 = -1;
	volatile int8_t x395 = INT8_MIN;
	int32_t x396 = INT32_MAX;
	int32_t t98 = -82271672;

	t98 = (((x393==x394)|x395)<=x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x398 = 246U;
	uint8_t x399 = UINT8_MAX;
	volatile int8_t x400 = 7;
	int32_t t99 = -113;

	t99 = (((x397==x398)|x399)<=x400);

	if (t99 != 0) { NG(); } else { ; }
	
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

