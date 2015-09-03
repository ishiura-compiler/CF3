#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x3 = 56501953965911LL;
int16_t x5 = INT16_MAX;
volatile uint32_t x12 = UINT32_MAX;
volatile int16_t x13 = -1;
volatile int32_t x19 = INT32_MIN;
static uint16_t x20 = 16U;
uint16_t x28 = 1107U;
volatile int32_t t5 = -7678796;
int32_t x29 = 16740;
uint64_t x30 = UINT64_MAX;
static int8_t x33 = INT8_MIN;
static int16_t x42 = INT16_MIN;
int8_t x43 = 3;
volatile int32_t t9 = -1833;
volatile int32_t x52 = INT32_MAX;
int64_t x56 = -145241254LL;
volatile int64_t t11 = 2725384984615244LL;
static volatile int8_t x57 = -27;
uint64_t x63 = 1360LLU;
static int16_t x67 = -1;
int64_t x72 = -1LL;
static uint8_t x77 = 1U;
int8_t x79 = INT8_MIN;
int64_t x80 = INT64_MIN;
volatile int8_t x88 = INT8_MIN;
static int8_t x91 = INT8_MIN;
int32_t t19 = -12800934;
volatile int64_t x93 = -1LL;
volatile int32_t t20 = 19625;
int16_t x110 = -1;
static int8_t x111 = INT8_MIN;
volatile uint8_t x114 = 6U;
int8_t x116 = INT8_MIN;
volatile int64_t x123 = -1LL;
int64_t t27 = -129657628243777523LL;
int16_t x127 = -7698;
int64_t x131 = -1LL;
uint8_t x153 = 1U;
static volatile int8_t x155 = 58;
volatile int32_t t35 = -642547334;
static uint64_t x161 = 249242614LLU;
int64_t x162 = INT64_MIN;
uint64_t x171 = 161045087647851251LLU;
int8_t x174 = INT8_MIN;
int16_t x175 = -1;
int8_t x177 = -1;
uint8_t x178 = 0U;
int64_t x182 = 10090250LL;
int32_t x202 = INT32_MAX;
static volatile int32_t x206 = -8449;
uint8_t x207 = UINT8_MAX;
volatile uint32_t t45 = 2U;
uint32_t x211 = 3435U;
int32_t x212 = INT32_MIN;
volatile int32_t t46 = INT32_MIN;
static int16_t x217 = INT16_MAX;
uint64_t x218 = UINT64_MAX;
int16_t x219 = INT16_MIN;
static uint32_t x224 = UINT32_MAX;
int8_t x225 = -1;
int8_t x226 = INT8_MIN;
static int32_t x229 = 1461616;
volatile uint64_t t52 = 12525475176LLU;
volatile int16_t x244 = -2029;
static volatile int32_t t54 = 45765318;
volatile uint64_t x250 = 96508189006707LLU;
int64_t x262 = -49141572749538LL;
int16_t x264 = -12;
int8_t x270 = -1;
int8_t x272 = INT8_MIN;
int32_t x277 = -125359928;
uint64_t x279 = 266891255009103LLU;
int16_t x280 = INT16_MIN;
int64_t x281 = INT64_MAX;
static int16_t x283 = 7;
static int32_t t63 = -2697;
static uint32_t t65 = 7U;
uint32_t x306 = 4727411U;
uint32_t x307 = 183374U;
volatile int32_t t66 = 1;
volatile int16_t x309 = INT16_MIN;
static volatile uint16_t x314 = UINT16_MAX;
uint32_t x315 = 746359U;
volatile int32_t t68 = 4310;
int32_t x318 = INT32_MIN;
int16_t x320 = INT16_MIN;
int32_t t69 = 578;
uint16_t x323 = 11638U;
uint32_t x326 = 23850U;
uint16_t x332 = 13U;
int64_t x342 = INT64_MAX;
int16_t x343 = -14105;
int16_t x346 = -433;
volatile int16_t x347 = INT16_MIN;
uint32_t t76 = UINT32_MAX;
uint16_t x352 = 692U;
static int8_t x364 = 0;
int32_t t81 = -8015;
volatile int32_t x385 = -349771498;
volatile int8_t x394 = INT8_MAX;
uint64_t x398 = 62LLU;
volatile int8_t x409 = -1;
volatile int32_t t90 = -541;
int32_t x414 = 182148950;
int16_t x417 = 1802;
int32_t x418 = -1;
int32_t t92 = INT32_MIN;
volatile int8_t x423 = INT8_MIN;
int16_t x432 = INT16_MAX;
int64_t x434 = INT64_MAX;
int8_t x435 = INT8_MIN;
int16_t x449 = INT16_MIN;
volatile int64_t t99 = INT64_MIN;


void f0(void) {
	int8_t x1 = INT8_MAX;
	int64_t x2 = INT64_MIN;
	uint8_t x4 = 15U;
	volatile int32_t t0 = 0;

	t0 = (((x1+x2)<=x3)+x4);

	if (t0 != 16) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x6 = 37U;
	int32_t x7 = INT32_MAX;
	int8_t x8 = INT8_MIN;
	int32_t t1 = 260334;

	t1 = (((x5+x6)<=x7)+x8);

	if (t1 != -127) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 17LLU;
	int32_t x10 = -241372;
	uint8_t x11 = UINT8_MAX;
	uint32_t t2 = UINT32_MAX;

	t2 = (((x9+x10)<=x11)+x12);

	if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x14 = -1;
	volatile int32_t x15 = 0;
	int64_t x16 = 994LL;
	volatile int64_t t3 = 113561390LL;

	t3 = (((x13+x14)<=x15)+x16);

	if (t3 != 995LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	volatile uint8_t x18 = 10U;
	int32_t t4 = -206025878;

	t4 = (((x17+x18)<=x19)+x20);

	if (t4 != 17) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = -53;
	volatile int8_t x26 = 1;
	static uint32_t x27 = 181U;

	t5 = (((x25+x26)<=x27)+x28);

	if (t5 != 1107) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x31 = INT64_MIN;
	int16_t x32 = 11791;
	static volatile int32_t t6 = -8864606;

	t6 = (((x29+x30)<=x31)+x32);

	if (t6 != 11792) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x34 = 314;
	uint8_t x35 = UINT8_MAX;
	volatile int64_t x36 = -34876960826LL;
	volatile int64_t t7 = 6360170868376037LL;

	t7 = (((x33+x34)<=x35)+x36);

	if (t7 != -34876960825LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = INT32_MIN;
	static uint64_t x38 = UINT64_MAX;
	int16_t x39 = -358;
	uint16_t x40 = 31U;
	static volatile int32_t t8 = -53;

	t8 = (((x37+x38)<=x39)+x40);

	if (t8 != 32) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x41 = UINT64_MAX;
	static int16_t x44 = INT16_MIN;

	t9 = (((x41+x42)<=x43)+x44);

	if (t9 != -32768) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x49 = -1LL;
	int64_t x50 = 32506312081LL;
	static uint32_t x51 = 0U;
	static volatile int32_t t10 = INT32_MAX;

	t10 = (((x49+x50)<=x51)+x52);

	if (t10 != INT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x53 = 79729160112LL;
	static uint64_t x54 = UINT64_MAX;
	int32_t x55 = 0;

	t11 = (((x53+x54)<=x55)+x56);

	if (t11 != -145241254LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x58 = 1U;
	uint64_t x59 = UINT64_MAX;
	uint64_t x60 = 192435677LLU;
	volatile uint64_t t12 = 5109590467616831LLU;

	t12 = (((x57+x58)<=x59)+x60);

	if (t12 != 192435678LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int16_t x61 = INT16_MAX;
	static int64_t x62 = 854834LL;
	static volatile uint16_t x64 = 3379U;
	int32_t t13 = 116205908;

	t13 = (((x61+x62)<=x63)+x64);

	if (t13 != 3379) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x65 = 7U;
	uint8_t x66 = UINT8_MAX;
	volatile uint8_t x68 = UINT8_MAX;
	volatile int32_t t14 = -89359;

	t14 = (((x65+x66)<=x67)+x68);

	if (t14 != 255) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x69 = 12U;
	volatile int16_t x70 = INT16_MAX;
	volatile uint32_t x71 = 126574497U;
	int64_t t15 = -1LL;

	t15 = (((x69+x70)<=x71)+x72);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x78 = INT8_MIN;
	int64_t t16 = INT64_MIN;

	t16 = (((x77+x78)<=x79)+x80);

	if (t16 != INT64_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x81 = INT16_MIN;
	volatile int8_t x82 = INT8_MAX;
	volatile uint8_t x83 = UINT8_MAX;
	int8_t x84 = -1;
	static volatile int32_t t17 = -201288834;

	t17 = (((x81+x82)<=x83)+x84);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x85 = 32;
	int8_t x86 = -14;
	int64_t x87 = INT64_MIN;
	volatile int32_t t18 = -361;

	t18 = (((x85+x86)<=x87)+x88);

	if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x89 = -1;
	int32_t x90 = -1;
	volatile int8_t x92 = -1;

	t19 = (((x89+x90)<=x91)+x92);

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x94 = -14352493LL;
	static int16_t x95 = INT16_MIN;
	uint16_t x96 = UINT16_MAX;

	t20 = (((x93+x94)<=x95)+x96);

	if (t20 != 65536) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x97 = INT32_MIN;
	int64_t x98 = INT64_MAX;
	volatile int32_t x99 = INT32_MIN;
	uint8_t x100 = UINT8_MAX;
	static int32_t t21 = 306;

	t21 = (((x97+x98)<=x99)+x100);

	if (t21 != 255) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x101 = 1U;
	uint32_t x102 = UINT32_MAX;
	volatile int64_t x103 = 2758067049926LL;
	int16_t x104 = INT16_MAX;
	int32_t t22 = 417391651;

	t22 = (((x101+x102)<=x103)+x104);

	if (t22 != 32768) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x105 = 10U;
	static uint16_t x106 = 15280U;
	int64_t x107 = 29811290502LL;
	uint8_t x108 = 1U;
	int32_t t23 = 3;

	t23 = (((x105+x106)<=x107)+x108);

	if (t23 != 2) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x109 = 1U;
	static volatile int16_t x112 = INT16_MIN;
	int32_t t24 = -3176;

	t24 = (((x109+x110)<=x111)+x112);

	if (t24 != -32767) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x113 = INT16_MIN;
	uint64_t x115 = UINT64_MAX;
	volatile int32_t t25 = 9617142;

	t25 = (((x113+x114)<=x115)+x116);

	if (t25 != -127) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x117 = INT16_MIN;
	volatile uint32_t x118 = UINT32_MAX;
	int8_t x119 = -1;
	uint8_t x120 = UINT8_MAX;
	int32_t t26 = -14;

	t26 = (((x117+x118)<=x119)+x120);

	if (t26 != 256) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x121 = UINT16_MAX;
	uint16_t x122 = UINT16_MAX;
	int64_t x124 = -2058LL;

	t27 = (((x121+x122)<=x123)+x124);

	if (t27 != -2058LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x125 = INT64_MIN;
	uint64_t x126 = UINT64_MAX;
	uint8_t x128 = 3U;
	int32_t t28 = -504153653;

	t28 = (((x125+x126)<=x127)+x128);

	if (t28 != 4) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x129 = INT8_MIN;
	volatile int64_t x130 = -1LL;
	int8_t x132 = 26;
	volatile int32_t t29 = 34;

	t29 = (((x129+x130)<=x131)+x132);

	if (t29 != 27) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x133 = 13953U;
	int16_t x134 = INT16_MIN;
	uint16_t x135 = 24U;
	static int16_t x136 = INT16_MAX;
	int32_t t30 = -37;

	t30 = (((x133+x134)<=x135)+x136);

	if (t30 != 32768) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x137 = UINT16_MAX;
	static uint8_t x138 = 4U;
	int16_t x139 = INT16_MIN;
	int32_t x140 = -1;
	static volatile int32_t t31 = 28;

	t31 = (((x137+x138)<=x139)+x140);

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x141 = 12;
	uint32_t x142 = 254531U;
	volatile int16_t x143 = 0;
	int64_t x144 = INT64_MAX;
	volatile int64_t t32 = INT64_MAX;

	t32 = (((x141+x142)<=x143)+x144);

	if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x145 = -1LL;
	int32_t x146 = INT32_MAX;
	uint8_t x147 = 7U;
	uint32_t x148 = 2229320U;
	uint32_t t33 = 903U;

	t33 = (((x145+x146)<=x147)+x148);

	if (t33 != 2229320U) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x149 = 710U;
	static int16_t x150 = INT16_MAX;
	static int32_t x151 = INT32_MAX;
	static int8_t x152 = 4;
	volatile int32_t t34 = 3;

	t34 = (((x149+x150)<=x151)+x152);

	if (t34 != 5) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x154 = INT64_MIN;
	int32_t x156 = -161261525;

	t35 = (((x153+x154)<=x155)+x156);

	if (t35 != -161261524) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x157 = 0;
	int8_t x158 = INT8_MIN;
	int32_t x159 = INT32_MIN;
	int8_t x160 = INT8_MIN;
	int32_t t36 = 2861;

	t36 = (((x157+x158)<=x159)+x160);

	if (t36 != -128) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x163 = INT64_MAX;
	uint16_t x164 = UINT16_MAX;
	int32_t t37 = 6221;

	t37 = (((x161+x162)<=x163)+x164);

	if (t37 != 65535) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x169 = -1;
	static int8_t x170 = INT8_MAX;
	int16_t x172 = INT16_MIN;
	int32_t t38 = -283189242;

	t38 = (((x169+x170)<=x171)+x172);

	if (t38 != -32767) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x173 = UINT64_MAX;
	volatile uint64_t x176 = 9305134672166100LLU;
	volatile uint64_t t39 = 25021LLU;

	t39 = (((x173+x174)<=x175)+x176);

	if (t39 != 9305134672166101LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x179 = INT8_MAX;
	volatile uint32_t x180 = UINT32_MAX;
	volatile uint32_t t40 = 86089U;

	t40 = (((x177+x178)<=x179)+x180);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x181 = INT8_MAX;
	int32_t x183 = INT32_MAX;
	int64_t x184 = -230055461994464LL;
	static int64_t t41 = 140LL;

	t41 = (((x181+x182)<=x183)+x184);

	if (t41 != -230055461994463LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x193 = 1U;
	int64_t x194 = INT64_MIN;
	uint16_t x195 = 191U;
	int32_t x196 = 26309;
	volatile int32_t t42 = -741;

	t42 = (((x193+x194)<=x195)+x196);

	if (t42 != 26310) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x197 = -1;
	uint32_t x198 = 0U;
	volatile int16_t x199 = INT16_MIN;
	volatile int8_t x200 = -1;
	int32_t t43 = 1747171;

	t43 = (((x197+x198)<=x199)+x200);

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x201 = 3877553457874435786LLU;
	int64_t x203 = INT64_MIN;
	uint8_t x204 = 5U;
	int32_t t44 = 69;

	t44 = (((x201+x202)<=x203)+x204);

	if (t44 != 6) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x205 = -33112687583LL;
	uint32_t x208 = 64881U;

	t45 = (((x205+x206)<=x207)+x208);

	if (t45 != 64882U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x209 = INT16_MIN;
	uint8_t x210 = UINT8_MAX;

	t46 = (((x209+x210)<=x211)+x212);

	if (t46 != INT32_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x213 = -15;
	volatile int16_t x214 = INT16_MAX;
	int64_t x215 = 88226108438554LL;
	uint32_t x216 = UINT32_MAX;
	volatile uint32_t t47 = 6819U;

	t47 = (((x213+x214)<=x215)+x216);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x220 = 930584LLU;
	uint64_t t48 = 5633093867802LLU;

	t48 = (((x217+x218)<=x219)+x220);

	if (t48 != 930585LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x221 = 694U;
	int64_t x222 = -1LL;
	uint8_t x223 = UINT8_MAX;
	volatile uint32_t t49 = UINT32_MAX;

	t49 = (((x221+x222)<=x223)+x224);

	if (t49 != UINT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x227 = -1;
	uint8_t x228 = UINT8_MAX;
	static volatile int32_t t50 = 32157009;

	t50 = (((x225+x226)<=x227)+x228);

	if (t50 != 256) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x230 = 1685U;
	volatile int8_t x231 = INT8_MAX;
	uint8_t x232 = UINT8_MAX;
	static volatile int32_t t51 = -4358095;

	t51 = (((x229+x230)<=x231)+x232);

	if (t51 != 255) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x233 = 66U;
	int64_t x234 = -20338624904LL;
	volatile uint32_t x235 = 57049337U;
	uint64_t x236 = 7LLU;

	t52 = (((x233+x234)<=x235)+x236);

	if (t52 != 8LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x237 = INT32_MAX;
	volatile int8_t x238 = -1;
	int32_t x239 = -1;
	static uint32_t x240 = 1363090046U;
	volatile uint32_t t53 = 385281283U;

	t53 = (((x237+x238)<=x239)+x240);

	if (t53 != 1363090046U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x241 = -287905;
	int8_t x242 = -1;
	int64_t x243 = INT64_MIN;

	t54 = (((x241+x242)<=x243)+x244);

	if (t54 != -2029) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x249 = 0;
	int8_t x251 = INT8_MIN;
	uint64_t x252 = 446110829477352LLU;
	static volatile uint64_t t55 = 1937214LLU;

	t55 = (((x249+x250)<=x251)+x252);

	if (t55 != 446110829477353LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x253 = -1;
	volatile int8_t x254 = -1;
	uint16_t x255 = 1U;
	static int64_t x256 = INT64_MIN;
	int64_t t56 = 389LL;

	t56 = (((x253+x254)<=x255)+x256);

	if (t56 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x257 = 528912393412248LLU;
	uint64_t x258 = 391222373122935024LLU;
	uint32_t x259 = 534128821U;
	uint16_t x260 = UINT16_MAX;
	volatile int32_t t57 = -4973120;

	t57 = (((x257+x258)<=x259)+x260);

	if (t57 != 65535) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x261 = 104536LL;
	int8_t x263 = INT8_MIN;
	int32_t t58 = 1052791;

	t58 = (((x261+x262)<=x263)+x264);

	if (t58 != -11) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x265 = -1;
	uint64_t x266 = 48925484LLU;
	static int32_t x267 = -7401;
	int16_t x268 = INT16_MIN;
	int32_t t59 = -11286752;

	t59 = (((x265+x266)<=x267)+x268);

	if (t59 != -32767) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x269 = 252;
	static uint16_t x271 = 635U;
	static volatile int32_t t60 = 46;

	t60 = (((x269+x270)<=x271)+x272);

	if (t60 != -127) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x273 = -978;
	uint8_t x274 = UINT8_MAX;
	volatile uint64_t x275 = 3LLU;
	int32_t x276 = INT32_MIN;
	volatile int32_t t61 = INT32_MIN;

	t61 = (((x273+x274)<=x275)+x276);

	if (t61 != INT32_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x278 = INT8_MAX;
	int32_t t62 = 12296;

	t62 = (((x277+x278)<=x279)+x280);

	if (t62 != -32768) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x282 = -62;
	uint8_t x284 = 4U;

	t63 = (((x281+x282)<=x283)+x284);

	if (t63 != 4) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x285 = -8;
	int16_t x286 = -98;
	int32_t x287 = -2;
	uint8_t x288 = 40U;
	int32_t t64 = 946;

	t64 = (((x285+x286)<=x287)+x288);

	if (t64 != 41) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x293 = 162364175LLU;
	volatile uint8_t x294 = 62U;
	static int32_t x295 = -7;
	uint32_t x296 = UINT32_MAX;

	t65 = (((x293+x294)<=x295)+x296);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x305 = INT16_MIN;
	volatile uint8_t x308 = 65U;

	t66 = (((x305+x306)<=x307)+x308);

	if (t66 != 65) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int32_t x310 = -1;
	volatile uint32_t x311 = 5729904U;
	static volatile int32_t x312 = INT32_MIN;
	int32_t t67 = INT32_MIN;

	t67 = (((x309+x310)<=x311)+x312);

	if (t67 != INT32_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x313 = -13;
	static int32_t x316 = -15;

	t68 = (((x313+x314)<=x315)+x316);

	if (t68 != -14) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x317 = UINT64_MAX;
	int8_t x319 = INT8_MIN;

	t69 = (((x317+x318)<=x319)+x320);

	if (t69 != -32767) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x321 = INT64_MIN;
	static int64_t x322 = INT64_MAX;
	volatile uint64_t x324 = UINT64_MAX;
	volatile uint64_t t70 = 15273LLU;

	t70 = (((x321+x322)<=x323)+x324);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x325 = 14U;
	int8_t x327 = 1;
	int8_t x328 = 0;
	volatile int32_t t71 = 104;

	t71 = (((x325+x326)<=x327)+x328);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x329 = 1217U;
	int64_t x330 = 3LL;
	uint64_t x331 = UINT64_MAX;
	volatile int32_t t72 = 531656321;

	t72 = (((x329+x330)<=x331)+x332);

	if (t72 != 14) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x333 = 52U;
	int32_t x334 = INT32_MIN;
	static int32_t x335 = INT32_MIN;
	int64_t x336 = -1LL;
	int64_t t73 = -13664LL;

	t73 = (((x333+x334)<=x335)+x336);

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x337 = INT8_MIN;
	int32_t x338 = -257469808;
	static volatile uint32_t x339 = UINT32_MAX;
	static uint8_t x340 = 3U;
	int32_t t74 = 49046;

	t74 = (((x337+x338)<=x339)+x340);

	if (t74 != 4) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x341 = UINT64_MAX;
	int32_t x344 = -1;
	volatile int32_t t75 = 20481200;

	t75 = (((x341+x342)<=x343)+x344);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x345 = INT8_MAX;
	uint32_t x348 = UINT32_MAX;

	t76 = (((x345+x346)<=x347)+x348);

	if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x349 = 423248LLU;
	static int8_t x350 = INT8_MIN;
	int8_t x351 = -1;
	int32_t t77 = 530;

	t77 = (((x349+x350)<=x351)+x352);

	if (t77 != 693) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x357 = UINT64_MAX;
	static volatile uint8_t x358 = UINT8_MAX;
	int16_t x359 = -44;
	volatile int64_t x360 = INT64_MIN;
	volatile int64_t t78 = -1LL;

	t78 = (((x357+x358)<=x359)+x360);

	if (t78 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x361 = 1U;
	int8_t x362 = -1;
	static int8_t x363 = INT8_MAX;
	static volatile int32_t t79 = 141436;

	t79 = (((x361+x362)<=x363)+x364);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x365 = -1256;
	uint8_t x366 = 63U;
	uint8_t x367 = 60U;
	static int8_t x368 = -4;
	volatile int32_t t80 = -7767;

	t80 = (((x365+x366)<=x367)+x368);

	if (t80 != -3) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x369 = INT16_MIN;
	volatile int16_t x370 = -1;
	int8_t x371 = -6;
	static uint8_t x372 = 3U;

	t81 = (((x369+x370)<=x371)+x372);

	if (t81 != 4) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x373 = UINT8_MAX;
	volatile int8_t x374 = INT8_MIN;
	static int64_t x375 = -1LL;
	int32_t x376 = INT32_MAX;
	int32_t t82 = INT32_MAX;

	t82 = (((x373+x374)<=x375)+x376);

	if (t82 != INT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x377 = -1;
	uint32_t x378 = UINT32_MAX;
	int64_t x379 = INT64_MAX;
	volatile int32_t x380 = -2;
	int32_t t83 = -7418;

	t83 = (((x377+x378)<=x379)+x380);

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x381 = UINT8_MAX;
	static int32_t x382 = 445930;
	static volatile int8_t x383 = -1;
	uint64_t x384 = 2LLU;
	uint64_t t84 = 11775LLU;

	t84 = (((x381+x382)<=x383)+x384);

	if (t84 != 2LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x386 = INT8_MIN;
	int64_t x387 = INT64_MAX;
	int16_t x388 = -1;
	volatile int32_t t85 = -69887;

	t85 = (((x385+x386)<=x387)+x388);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x389 = -1;
	int64_t x390 = INT64_MAX;
	uint32_t x391 = 459U;
	uint16_t x392 = UINT16_MAX;
	volatile int32_t t86 = -34;

	t86 = (((x389+x390)<=x391)+x392);

	if (t86 != 65535) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x393 = -1;
	uint16_t x395 = UINT16_MAX;
	uint32_t x396 = 13887U;
	uint32_t t87 = 3766U;

	t87 = (((x393+x394)<=x395)+x396);

	if (t87 != 13888U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x397 = -556461984LL;
	uint16_t x399 = UINT16_MAX;
	int32_t x400 = INT32_MAX;
	volatile int32_t t88 = INT32_MAX;

	t88 = (((x397+x398)<=x399)+x400);

	if (t88 != INT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x401 = -780;
	static int16_t x402 = 22;
	int8_t x403 = -1;
	int32_t x404 = INT32_MIN;
	volatile int32_t t89 = -1451;

	t89 = (((x401+x402)<=x403)+x404);

	if (t89 != -2147483647) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x410 = 0;
	static int8_t x411 = 1;
	int16_t x412 = 1;

	t90 = (((x409+x410)<=x411)+x412);

	if (t90 != 2) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x413 = 139940032609058763LLU;
	int32_t x415 = INT32_MIN;
	uint32_t x416 = UINT32_MAX;
	uint32_t t91 = 37797579U;

	t91 = (((x413+x414)<=x415)+x416);

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x419 = INT64_MIN;
	int32_t x420 = INT32_MIN;

	t92 = (((x417+x418)<=x419)+x420);

	if (t92 != INT32_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x421 = -1;
	uint8_t x422 = 57U;
	int64_t x424 = INT64_MIN;
	volatile int64_t t93 = INT64_MIN;

	t93 = (((x421+x422)<=x423)+x424);

	if (t93 != INT64_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x425 = 1;
	int64_t x426 = 1286667LL;
	uint64_t x427 = UINT64_MAX;
	uint64_t x428 = 402624838155197928LLU;
	volatile uint64_t t94 = 3663LLU;

	t94 = (((x425+x426)<=x427)+x428);

	if (t94 != 402624838155197929LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x429 = -1LL;
	int32_t x430 = INT32_MIN;
	int8_t x431 = INT8_MIN;
	static int32_t t95 = 199616997;

	t95 = (((x429+x430)<=x431)+x432);

	if (t95 != 32768) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x433 = INT32_MIN;
	uint16_t x436 = 5U;
	volatile int32_t t96 = 202;

	t96 = (((x433+x434)<=x435)+x436);

	if (t96 != 5) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x441 = INT8_MAX;
	int32_t x442 = -5;
	int32_t x443 = -3470696;
	int16_t x444 = INT16_MIN;
	volatile int32_t t97 = 967815;

	t97 = (((x441+x442)<=x443)+x444);

	if (t97 != -32768) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x445 = UINT32_MAX;
	int8_t x446 = 24;
	int32_t x447 = INT32_MAX;
	int16_t x448 = 7401;
	volatile int32_t t98 = 610;

	t98 = (((x445+x446)<=x447)+x448);

	if (t98 != 7402) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x450 = 4431U;
	volatile int32_t x451 = INT32_MAX;
	int64_t x452 = INT64_MIN;

	t99 = (((x449+x450)<=x451)+x452);

	if (t99 != INT64_MIN) { NG(); } else { ; }
	
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

