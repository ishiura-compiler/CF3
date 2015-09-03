#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t t1 = 64245406U;
int32_t x9 = -106;
uint16_t x27 = 95U;
uint16_t x30 = 4397U;
int64_t x34 = INT64_MIN;
uint64_t x41 = 5324393143374527708LLU;
static int16_t x42 = 15;
uint8_t x50 = 1U;
volatile int32_t t14 = -101685663;
uint8_t x61 = 8U;
int64_t x62 = INT64_MIN;
int32_t t15 = -2889001;
volatile int32_t t16 = 42716;
volatile int32_t t17 = -77369904;
int64_t x73 = INT64_MIN;
volatile int16_t x77 = -1;
static int32_t t19 = INT32_MAX;
volatile uint64_t x82 = 11505409LLU;
volatile int32_t t21 = -1;
int8_t x91 = -1;
static int64_t x96 = 7LL;
static uint8_t x98 = 6U;
int32_t x100 = INT32_MIN;
volatile int32_t x102 = INT32_MIN;
static int32_t x104 = INT32_MIN;
int8_t x109 = -4;
uint64_t x111 = 42366700346LLU;
uint16_t x118 = UINT16_MAX;
static volatile uint8_t x128 = 1U;
volatile int32_t t32 = -210;
volatile uint16_t x135 = 15U;
static volatile int32_t t33 = 9431638;
uint32_t x142 = 854430U;
int8_t x143 = INT8_MIN;
uint32_t x145 = 14U;
int64_t x147 = INT64_MAX;
volatile uint32_t x148 = 602857U;
volatile int32_t t40 = -496990;
uint32_t x165 = UINT32_MAX;
int64_t x166 = -1LL;
int64_t t41 = -492LL;
static uint32_t x171 = 3657881U;
volatile int32_t t42 = -21425234;
int32_t x173 = INT32_MIN;
int64_t t44 = INT64_MIN;
uint64_t x188 = 1782510567553LLU;
uint16_t x193 = 216U;
int8_t x194 = INT8_MAX;
int8_t x200 = INT8_MAX;
int8_t x203 = 24;
uint32_t x205 = UINT32_MAX;
static uint8_t x206 = 18U;
volatile int32_t x209 = INT32_MAX;
uint16_t x210 = 764U;
int32_t x211 = INT32_MIN;
volatile int64_t t52 = 671316234599754912LL;
uint64_t x215 = 889833452655387645LLU;
int64_t t53 = -1318LL;
int8_t x218 = INT8_MIN;
uint16_t x223 = 3U;
volatile int32_t t55 = -61;
uint16_t x229 = 6U;
static uint64_t x232 = UINT64_MAX;
uint16_t x237 = UINT16_MAX;
int8_t x241 = -1;
int64_t x244 = 6012818811LL;
uint16_t x247 = 11U;
static int16_t x256 = 2;
volatile int32_t t63 = 3948;
uint64_t x260 = 6223746617234497LLU;
uint64_t t64 = 2328383057741522040LLU;
volatile int16_t x265 = -3478;
uint32_t x266 = 2U;
int8_t x268 = -1;
int16_t x269 = INT16_MIN;
uint16_t x274 = UINT16_MAX;
int16_t x276 = INT16_MIN;
int32_t x278 = INT32_MAX;
static uint32_t x280 = 0U;
static volatile uint16_t x281 = 0U;
volatile uint64_t t70 = UINT64_MAX;
int8_t x285 = INT8_MAX;
uint32_t x294 = 279296U;
static int8_t x302 = INT8_MIN;
int8_t x310 = -3;
int16_t x312 = INT16_MIN;
int64_t x328 = INT64_MIN;
int8_t x331 = INT8_MIN;
static int64_t t84 = 19421LL;
uint16_t x341 = 107U;
int64_t x343 = INT64_MIN;
uint32_t x353 = UINT32_MAX;
static int8_t x355 = INT8_MIN;
int32_t t88 = 2;
volatile uint32_t x357 = 454U;
static int8_t x359 = INT8_MIN;
int64_t t90 = -105342719263LL;
int32_t x369 = INT32_MIN;
int32_t x370 = INT32_MIN;
static volatile uint32_t x371 = 14U;
volatile int32_t x384 = INT32_MIN;
volatile int32_t t95 = -318893879;
uint8_t x389 = 59U;
int16_t x390 = INT16_MIN;
int64_t x393 = 3757489423688230LL;
uint8_t x396 = 1U;
uint32_t x400 = UINT32_MAX;


void f0(void) {
	uint8_t x1 = 59U;
	uint8_t x2 = UINT8_MAX;
	int64_t x3 = INT64_MIN;
	uint64_t x4 = 31327510LLU;
	uint64_t t0 = 80262490LLU;

	t0 = (((x1<=x2)<=x3)|x4);

	if (t0 != 31327510LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = INT32_MIN;
	static int16_t x6 = INT16_MIN;
	int16_t x7 = INT16_MAX;
	uint32_t x8 = 2U;

	t1 = (((x5<=x6)<=x7)|x8);

	if (t1 != 3U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = -3;
	uint16_t x11 = 71U;
	static int16_t x12 = INT16_MIN;
	static volatile int32_t t2 = 2185770;

	t2 = (((x9<=x10)<=x11)|x12);

	if (t2 != -32767) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = UINT64_MAX;
	uint64_t x14 = 17323050814591LLU;
	int64_t x15 = 2799190130LL;
	static uint8_t x16 = UINT8_MAX;
	int32_t t3 = 225846;

	t3 = (((x13<=x14)<=x15)|x16);

	if (t3 != 255) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MAX;
	volatile uint32_t x18 = UINT32_MAX;
	volatile uint64_t x19 = 571178253199903894LLU;
	volatile uint8_t x20 = 2U;
	volatile int32_t t4 = -5861;

	t4 = (((x17<=x18)<=x19)|x20);

	if (t4 != 3) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x21 = UINT32_MAX;
	volatile int64_t x22 = -1LL;
	int16_t x23 = INT16_MAX;
	volatile int64_t x24 = INT64_MIN;
	int64_t t5 = 403LL;

	t5 = (((x21<=x22)<=x23)|x24);

	if (t5 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -1;
	static int64_t x26 = INT64_MAX;
	volatile int64_t x28 = -165313118282619379LL;
	int64_t t6 = 3754024115071012820LL;

	t6 = (((x25<=x26)<=x27)|x28);

	if (t6 != -165313118282619379LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -1;
	int16_t x31 = INT16_MIN;
	uint32_t x32 = 3244U;
	volatile uint32_t t7 = 14667148U;

	t7 = (((x29<=x30)<=x31)|x32);

	if (t7 != 3244U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = 3;
	int16_t x35 = -9;
	uint64_t x36 = 29LLU;
	uint64_t t8 = 25651420LLU;

	t8 = (((x33<=x34)<=x35)|x36);

	if (t8 != 29LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = -1231;
	int8_t x38 = INT8_MIN;
	uint64_t x39 = 2920874656LLU;
	int32_t x40 = -1;
	int32_t t9 = 1051539095;

	t9 = (((x37<=x38)<=x39)|x40);

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x43 = -1;
	int16_t x44 = INT16_MIN;
	volatile int32_t t10 = 85251962;

	t10 = (((x41<=x42)<=x43)|x44);

	if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -1;
	int8_t x46 = -36;
	int8_t x47 = INT8_MIN;
	uint64_t x48 = 1284494LLU;
	uint64_t t11 = 1868934080518LLU;

	t11 = (((x45<=x46)<=x47)|x48);

	if (t11 != 1284494LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -107696260995LL;
	static uint16_t x51 = 92U;
	uint8_t x52 = UINT8_MAX;
	static volatile int32_t t12 = -1;

	t12 = (((x49<=x50)<=x51)|x52);

	if (t12 != 255) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	int64_t x54 = INT64_MIN;
	uint8_t x55 = 25U;
	int32_t x56 = 10680;
	int32_t t13 = 570533845;

	t13 = (((x53<=x54)<=x55)|x56);

	if (t13 != 10681) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MIN;
	int32_t x58 = 185301;
	int8_t x59 = -31;
	int16_t x60 = 14706;

	t14 = (((x57<=x58)<=x59)|x60);

	if (t14 != 14706) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x63 = INT32_MAX;
	volatile int32_t x64 = INT32_MIN;

	t15 = (((x61<=x62)<=x63)|x64);

	if (t15 != -2147483647) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MIN;
	int32_t x66 = -662319984;
	int64_t x67 = INT64_MIN;
	volatile int8_t x68 = 5;

	t16 = (((x65<=x66)<=x67)|x68);

	if (t16 != 5) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x69 = INT64_MIN;
	uint8_t x70 = 5U;
	static int8_t x71 = -6;
	uint8_t x72 = 1U;

	t17 = (((x69<=x70)<=x71)|x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x74 = 4;
	volatile uint16_t x75 = 1U;
	int32_t x76 = -1;
	volatile int32_t t18 = -198603;

	t18 = (((x73<=x74)<=x75)|x76);

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x78 = 3388U;
	int32_t x79 = INT32_MIN;
	static int32_t x80 = INT32_MAX;

	t19 = (((x77<=x78)<=x79)|x80);

	if (t19 != INT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MAX;
	uint64_t x83 = 162LLU;
	int8_t x84 = 0;
	int32_t t20 = 21;

	t20 = (((x81<=x82)<=x83)|x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x85 = INT8_MIN;
	uint32_t x86 = 9515U;
	uint16_t x87 = UINT16_MAX;
	int16_t x88 = -1;

	t21 = (((x85<=x86)<=x87)|x88);

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MIN;
	uint16_t x90 = UINT16_MAX;
	volatile int16_t x92 = -1;
	int32_t t22 = 2226863;

	t22 = (((x89<=x90)<=x91)|x92);

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = -1;
	int8_t x94 = -1;
	int32_t x95 = -102677;
	int64_t t23 = -67197486LL;

	t23 = (((x93<=x94)<=x95)|x96);

	if (t23 != 7LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = 93944115LL;
	uint8_t x99 = UINT8_MAX;
	volatile int32_t t24 = -146270938;

	t24 = (((x97<=x98)<=x99)|x100);

	if (t24 != -2147483647) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = -1;
	int8_t x103 = 1;
	static volatile int32_t t25 = 800;

	t25 = (((x101<=x102)<=x103)|x104);

	if (t25 != -2147483647) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = 8U;
	uint32_t x106 = 1230543U;
	static int16_t x107 = -1;
	int16_t x108 = INT16_MAX;
	static volatile int32_t t26 = 4284321;

	t26 = (((x105<=x106)<=x107)|x108);

	if (t26 != 32767) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x110 = 11U;
	int16_t x112 = 1;
	static volatile int32_t t27 = 0;

	t27 = (((x109<=x110)<=x111)|x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int64_t x113 = -1LL;
	int8_t x114 = INT8_MIN;
	static uint8_t x115 = UINT8_MAX;
	static volatile int32_t x116 = INT32_MIN;
	int32_t t28 = -1;

	t28 = (((x113<=x114)<=x115)|x116);

	if (t28 != -2147483647) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x117 = -11;
	volatile int16_t x119 = 184;
	uint8_t x120 = 9U;
	int32_t t29 = 5026419;

	t29 = (((x117<=x118)<=x119)|x120);

	if (t29 != 9) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = -43;
	int16_t x122 = 515;
	uint16_t x123 = 57U;
	uint16_t x124 = UINT16_MAX;
	int32_t t30 = -63962191;

	t30 = (((x121<=x122)<=x123)|x124);

	if (t30 != 65535) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MIN;
	int16_t x126 = INT16_MIN;
	int16_t x127 = INT16_MAX;
	int32_t t31 = -10;

	t31 = (((x125<=x126)<=x127)|x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = 1410U;
	uint8_t x130 = UINT8_MAX;
	static volatile uint64_t x131 = 5930950680815997375LLU;
	static int8_t x132 = -2;

	t32 = (((x129<=x130)<=x131)|x132);

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = -1;
	int16_t x134 = -1;
	volatile int16_t x136 = -1;

	t33 = (((x133<=x134)<=x135)|x136);

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = -1;
	volatile int64_t x138 = INT64_MIN;
	uint32_t x139 = 2041U;
	int8_t x140 = 0;
	static int32_t t34 = -1;

	t34 = (((x137<=x138)<=x139)|x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = -222LL;
	int8_t x144 = INT8_MIN;
	int32_t t35 = -2020;

	t35 = (((x141<=x142)<=x143)|x144);

	if (t35 != -128) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x146 = 92U;
	volatile uint32_t t36 = 2823826U;

	t36 = (((x145<=x146)<=x147)|x148);

	if (t36 != 602857U) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = 3U;
	int16_t x150 = INT16_MAX;
	volatile uint16_t x151 = 367U;
	uint8_t x152 = 89U;
	int32_t t37 = -27;

	t37 = (((x149<=x150)<=x151)|x152);

	if (t37 != 89) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = 43LLU;
	static uint16_t x154 = 3468U;
	int32_t x155 = 182;
	uint8_t x156 = 3U;
	volatile int32_t t38 = -30087;

	t38 = (((x153<=x154)<=x155)|x156);

	if (t38 != 3) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x157 = INT32_MIN;
	volatile int8_t x158 = -1;
	static uint32_t x159 = 17U;
	volatile int16_t x160 = 4592;
	int32_t t39 = 497;

	t39 = (((x157<=x158)<=x159)|x160);

	if (t39 != 4593) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x161 = UINT64_MAX;
	int32_t x162 = INT32_MIN;
	uint16_t x163 = 11144U;
	uint16_t x164 = UINT16_MAX;

	t40 = (((x161<=x162)<=x163)|x164);

	if (t40 != 65535) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x167 = 754U;
	int64_t x168 = -207LL;

	t41 = (((x165<=x166)<=x167)|x168);

	if (t41 != -207LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MIN;
	static int8_t x170 = 5;
	int8_t x172 = -28;

	t42 = (((x169<=x170)<=x171)|x172);

	if (t42 != -27) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x174 = -1;
	int8_t x175 = INT8_MAX;
	int32_t x176 = INT32_MAX;
	int32_t t43 = INT32_MAX;

	t43 = (((x173<=x174)<=x175)|x176);

	if (t43 != INT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = -10775;
	volatile int32_t x178 = INT32_MIN;
	volatile int64_t x179 = INT64_MIN;
	int64_t x180 = INT64_MIN;

	t44 = (((x177<=x178)<=x179)|x180);

	if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x181 = -23;
	volatile int64_t x182 = INT64_MIN;
	volatile int64_t x183 = -2084057046077050LL;
	int64_t x184 = -1LL;
	volatile int64_t t45 = -41655LL;

	t45 = (((x181<=x182)<=x183)|x184);

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MIN;
	static int64_t x186 = 6697112LL;
	int8_t x187 = 32;
	volatile uint64_t t46 = 2LLU;

	t46 = (((x185<=x186)<=x187)|x188);

	if (t46 != 1782510567553LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = -210298765253LL;
	volatile int8_t x190 = INT8_MIN;
	uint64_t x191 = 188355876936412031LLU;
	int8_t x192 = 0;
	static volatile int32_t t47 = 27697167;

	t47 = (((x189<=x190)<=x191)|x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x195 = -27847270;
	int64_t x196 = -1LL;
	volatile int64_t t48 = -63575396LL;

	t48 = (((x193<=x194)<=x195)|x196);

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x197 = UINT16_MAX;
	static uint64_t x198 = 136082602416195611LLU;
	volatile int64_t x199 = INT64_MAX;
	int32_t t49 = -5297;

	t49 = (((x197<=x198)<=x199)|x200);

	if (t49 != 127) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = 25U;
	volatile int16_t x202 = INT16_MIN;
	uint32_t x204 = 63U;
	static volatile uint32_t t50 = 63428U;

	t50 = (((x201<=x202)<=x203)|x204);

	if (t50 != 63U) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x207 = -1;
	int8_t x208 = 14;
	volatile int32_t t51 = -2;

	t51 = (((x205<=x206)<=x207)|x208);

	if (t51 != 14) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x212 = -32312372541LL;

	t52 = (((x209<=x210)<=x211)|x212);

	if (t52 != -32312372541LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = INT32_MAX;
	volatile uint64_t x214 = 2899990042314482LLU;
	volatile int64_t x216 = -1LL;

	t53 = (((x213<=x214)<=x215)|x216);

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MIN;
	uint8_t x219 = 20U;
	uint32_t x220 = UINT32_MAX;
	static uint32_t t54 = UINT32_MAX;

	t54 = (((x217<=x218)<=x219)|x220);

	if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x221 = -1;
	static volatile int64_t x222 = INT64_MAX;
	int8_t x224 = -1;

	t55 = (((x221<=x222)<=x223)|x224);

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x225 = 881983288500LLU;
	int8_t x226 = 25;
	int16_t x227 = 4087;
	uint64_t x228 = 24318587303LLU;
	uint64_t t56 = 3706LLU;

	t56 = (((x225<=x226)<=x227)|x228);

	if (t56 != 24318587303LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x230 = 126;
	volatile int16_t x231 = INT16_MIN;
	uint64_t t57 = UINT64_MAX;

	t57 = (((x229<=x230)<=x231)|x232);

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MAX;
	int16_t x234 = INT16_MAX;
	int64_t x235 = -1LL;
	int64_t x236 = INT64_MIN;
	int64_t t58 = INT64_MIN;

	t58 = (((x233<=x234)<=x235)|x236);

	if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x238 = UINT8_MAX;
	int32_t x239 = -2484;
	volatile int16_t x240 = INT16_MAX;
	volatile int32_t t59 = 644;

	t59 = (((x237<=x238)<=x239)|x240);

	if (t59 != 32767) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x242 = UINT64_MAX;
	static int32_t x243 = INT32_MIN;
	volatile int64_t t60 = -78448593819LL;

	t60 = (((x241<=x242)<=x243)|x244);

	if (t60 != 6012818811LL) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int64_t x245 = 2694LL;
	int16_t x246 = INT16_MIN;
	uint64_t x248 = UINT64_MAX;
	uint64_t t61 = UINT64_MAX;

	t61 = (((x245<=x246)<=x247)|x248);

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = 14U;
	int8_t x250 = -1;
	uint32_t x251 = 23667374U;
	int32_t x252 = -1;
	volatile int32_t t62 = -535423003;

	t62 = (((x249<=x250)<=x251)|x252);

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x253 = 88U;
	uint32_t x254 = 46164503U;
	static int64_t x255 = 799LL;

	t63 = (((x253<=x254)<=x255)|x256);

	if (t63 != 3) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x257 = 6U;
	volatile int64_t x258 = -2135841853705601563LL;
	static int64_t x259 = 81568469605LL;

	t64 = (((x257<=x258)<=x259)|x260);

	if (t64 != 6223746617234497LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x261 = 9U;
	int32_t x262 = INT32_MAX;
	static volatile int8_t x263 = -20;
	int64_t x264 = -1LL;
	volatile int64_t t65 = 2351LL;

	t65 = (((x261<=x262)<=x263)|x264);

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x267 = INT8_MIN;
	volatile int32_t t66 = -9369;

	t66 = (((x265<=x266)<=x267)|x268);

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x270 = 18U;
	static int8_t x271 = INT8_MAX;
	static int32_t x272 = 14619456;
	int32_t t67 = 0;

	t67 = (((x269<=x270)<=x271)|x272);

	if (t67 != 14619457) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x273 = 1235180691341303LLU;
	static uint32_t x275 = UINT32_MAX;
	int32_t t68 = 199;

	t68 = (((x273<=x274)<=x275)|x276);

	if (t68 != -32767) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = INT64_MIN;
	static int32_t x279 = INT32_MIN;
	uint32_t t69 = 226U;

	t69 = (((x277<=x278)<=x279)|x280);

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x282 = UINT64_MAX;
	static uint8_t x283 = UINT8_MAX;
	uint64_t x284 = UINT64_MAX;

	t70 = (((x281<=x282)<=x283)|x284);

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x286 = -1;
	uint32_t x287 = 1046U;
	int8_t x288 = -1;
	static int32_t t71 = -1;

	t71 = (((x285<=x286)<=x287)|x288);

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MIN;
	static int64_t x290 = INT64_MIN;
	int8_t x291 = INT8_MIN;
	int32_t x292 = INT32_MIN;
	static int32_t t72 = INT32_MIN;

	t72 = (((x289<=x290)<=x291)|x292);

	if (t72 != INT32_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = INT16_MAX;
	static int32_t x295 = -1;
	volatile uint8_t x296 = UINT8_MAX;
	int32_t t73 = 30;

	t73 = (((x293<=x294)<=x295)|x296);

	if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = -1LL;
	int16_t x298 = INT16_MIN;
	uint8_t x299 = UINT8_MAX;
	static uint64_t x300 = UINT64_MAX;
	volatile uint64_t t74 = UINT64_MAX;

	t74 = (((x297<=x298)<=x299)|x300);

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x301 = -1;
	int16_t x303 = -1;
	int64_t x304 = 9731885181059LL;
	static int64_t t75 = -1199330755760LL;

	t75 = (((x301<=x302)<=x303)|x304);

	if (t75 != 9731885181059LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = 1U;
	volatile int8_t x306 = INT8_MIN;
	int64_t x307 = INT64_MIN;
	volatile int16_t x308 = INT16_MIN;
	static int32_t t76 = -6506913;

	t76 = (((x305<=x306)<=x307)|x308);

	if (t76 != -32768) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x309 = -1LL;
	static int8_t x311 = -1;
	volatile int32_t t77 = -524123;

	t77 = (((x309<=x310)<=x311)|x312);

	if (t77 != -32768) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x313 = UINT64_MAX;
	uint32_t x314 = 8009U;
	int64_t x315 = INT64_MIN;
	static int64_t x316 = 3LL;
	int64_t t78 = 231665291515LL;

	t78 = (((x313<=x314)<=x315)|x316);

	if (t78 != 3LL) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint32_t x317 = UINT32_MAX;
	uint16_t x318 = 184U;
	uint8_t x319 = 58U;
	uint32_t x320 = 7U;
	uint32_t t79 = 1154U;

	t79 = (((x317<=x318)<=x319)|x320);

	if (t79 != 7U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MAX;
	int32_t x322 = 7012;
	volatile int32_t x323 = -41;
	uint16_t x324 = UINT16_MAX;
	int32_t t80 = 2359543;

	t80 = (((x321<=x322)<=x323)|x324);

	if (t80 != 65535) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x325 = UINT32_MAX;
	int16_t x326 = INT16_MIN;
	int8_t x327 = 10;
	int64_t t81 = -33576LL;

	t81 = (((x325<=x326)<=x327)|x328);

	if (t81 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = INT16_MIN;
	int8_t x330 = -1;
	int8_t x332 = INT8_MAX;
	static volatile int32_t t82 = -8;

	t82 = (((x329<=x330)<=x331)|x332);

	if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint64_t x333 = 235LLU;
	int8_t x334 = INT8_MIN;
	int16_t x335 = INT16_MAX;
	static volatile int32_t x336 = -11632;
	volatile int32_t t83 = 67133392;

	t83 = (((x333<=x334)<=x335)|x336);

	if (t83 != -11631) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = -15925;
	int16_t x338 = INT16_MIN;
	int32_t x339 = INT32_MIN;
	int64_t x340 = -3LL;

	t84 = (((x337<=x338)<=x339)|x340);

	if (t84 != -3LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x342 = 108961198U;
	int32_t x344 = -1;
	int32_t t85 = 1;

	t85 = (((x341<=x342)<=x343)|x344);

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x345 = 31U;
	uint32_t x346 = 1272507U;
	uint32_t x347 = 2423U;
	int16_t x348 = -1;
	volatile int32_t t86 = 1072;

	t86 = (((x345<=x346)<=x347)|x348);

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x349 = 153462U;
	uint32_t x350 = 1381600446U;
	int32_t x351 = INT32_MAX;
	int64_t x352 = 436311LL;
	volatile int64_t t87 = -13737624499084LL;

	t87 = (((x349<=x350)<=x351)|x352);

	if (t87 != 436311LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x354 = -7;
	static uint16_t x356 = 251U;

	t88 = (((x353<=x354)<=x355)|x356);

	if (t88 != 251) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x358 = 66711257766LLU;
	static uint8_t x360 = UINT8_MAX;
	int32_t t89 = 96;

	t89 = (((x357<=x358)<=x359)|x360);

	if (t89 != 255) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x361 = 2U;
	volatile uint32_t x362 = 56981684U;
	int8_t x363 = 1;
	static volatile int64_t x364 = INT64_MIN;

	t90 = (((x361<=x362)<=x363)|x364);

	if (t90 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x365 = UINT32_MAX;
	static int8_t x366 = INT8_MIN;
	static volatile int32_t x367 = 2824275;
	static int8_t x368 = INT8_MIN;
	static int32_t t91 = -155017459;

	t91 = (((x365<=x366)<=x367)|x368);

	if (t91 != -127) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x372 = INT64_MAX;
	int64_t t92 = INT64_MAX;

	t92 = (((x369<=x370)<=x371)|x372);

	if (t92 != INT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x373 = 2U;
	static uint32_t x374 = UINT32_MAX;
	static int64_t x375 = 176064958348LL;
	uint8_t x376 = 0U;
	volatile int32_t t93 = -10042928;

	t93 = (((x373<=x374)<=x375)|x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x377 = UINT8_MAX;
	int16_t x378 = INT16_MAX;
	int16_t x379 = 12065;
	static int16_t x380 = 0;
	int32_t t94 = -426250;

	t94 = (((x377<=x378)<=x379)|x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x381 = 37U;
	volatile int64_t x382 = -1LL;
	int32_t x383 = INT32_MAX;

	t95 = (((x381<=x382)<=x383)|x384);

	if (t95 != -2147483647) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = INT32_MIN;
	volatile int16_t x386 = INT16_MIN;
	int32_t x387 = INT32_MIN;
	static int32_t x388 = INT32_MAX;
	volatile int32_t t96 = INT32_MAX;

	t96 = (((x385<=x386)<=x387)|x388);

	if (t96 != INT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x391 = 3U;
	int32_t x392 = -44;
	int32_t t97 = 954;

	t97 = (((x389<=x390)<=x391)|x392);

	if (t97 != -43) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x394 = INT32_MIN;
	int16_t x395 = INT16_MAX;
	int32_t t98 = 1154923;

	t98 = (((x393<=x394)<=x395)|x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = INT64_MIN;
	int8_t x398 = -1;
	uint64_t x399 = UINT64_MAX;
	uint32_t t99 = UINT32_MAX;

	t99 = (((x397<=x398)<=x399)|x400);

	if (t99 != UINT32_MAX) { NG(); } else { ; }
	
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

