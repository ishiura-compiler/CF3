#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x6 = 6;
int8_t x7 = INT8_MIN;
static int16_t x8 = INT16_MIN;
int64_t x20 = -1LL;
static volatile int64_t t4 = -920208LL;
volatile int8_t x21 = INT8_MAX;
int64_t x30 = INT64_MIN;
int32_t x36 = INT32_MIN;
uint64_t x37 = 33815722454791LLU;
int16_t x43 = 1;
static uint32_t x54 = UINT32_MAX;
static int64_t x61 = INT64_MIN;
int64_t x69 = INT64_MIN;
volatile int64_t t17 = 6LL;
volatile uint32_t x81 = UINT32_MAX;
volatile uint32_t t22 = 2171859U;
int16_t x105 = INT16_MIN;
static uint16_t x108 = 8U;
int32_t t26 = 6367;
int64_t x111 = INT64_MIN;
static int8_t x114 = 1;
int32_t x119 = INT32_MIN;
static int32_t t30 = 338085629;
int8_t x129 = -31;
uint64_t x133 = 26799088405328798LLU;
uint64_t x136 = 2096233LLU;
volatile uint64_t t33 = 523647925011LLU;
int8_t x144 = INT8_MIN;
uint8_t x149 = 1U;
int8_t x152 = -24;
int32_t t37 = -24027453;
int8_t x154 = -1;
volatile int32_t t41 = 161030;
int16_t x169 = INT16_MIN;
uint32_t x170 = 3691445U;
int64_t x172 = -1LL;
static volatile int64_t t42 = 8718634666LL;
int16_t x173 = INT16_MIN;
int8_t x180 = -11;
volatile int32_t t44 = -484;
static volatile uint32_t x185 = 579167186U;
volatile uint16_t x187 = 1866U;
uint32_t t46 = UINT32_MAX;
int32_t t48 = 563176426;
static uint64_t x199 = UINT64_MAX;
uint16_t x201 = 32261U;
int8_t x202 = -1;
static uint16_t x205 = 1875U;
volatile uint32_t x211 = 0U;
volatile int64_t x212 = 138679714241200LL;
int32_t x221 = INT32_MIN;
int16_t x222 = -1;
volatile int8_t x223 = -1;
static uint8_t x228 = 0U;
int32_t x230 = INT32_MIN;
int32_t x233 = 0;
uint16_t x235 = 6U;
volatile int16_t x239 = -922;
volatile int8_t x240 = INT8_MAX;
int8_t x243 = INT8_MIN;
uint64_t x261 = 35329704761748076LLU;
static int32_t x262 = INT32_MIN;
int16_t x266 = INT16_MIN;
int16_t x269 = 17;
static int32_t x272 = INT32_MIN;
int32_t x277 = 831873979;
int16_t x280 = INT16_MIN;
int32_t t69 = -1;
int8_t x283 = INT8_MAX;
int64_t x286 = INT64_MIN;
volatile int32_t x291 = -1;
uint16_t x294 = 32013U;
volatile int8_t x296 = INT8_MIN;
uint16_t x300 = 4U;
int8_t x308 = INT8_MIN;
static int16_t x314 = INT16_MIN;
int8_t x324 = -1;
int16_t x331 = -5841;
int16_t x332 = -1;
int64_t x335 = INT64_MIN;
int8_t x340 = INT8_MIN;
volatile int32_t t84 = 63197;
int16_t x341 = -216;
volatile int32_t t85 = 1;
int32_t x351 = -575093287;
int16_t x357 = 0;
uint32_t x360 = 375U;
uint32_t t89 = 6169326U;
volatile int8_t x361 = INT8_MIN;
static volatile int64_t x363 = -122136LL;
int32_t t91 = -15;
int16_t x369 = INT16_MIN;
uint64_t x374 = 2671415649LLU;
uint16_t x375 = 23492U;
volatile uint32_t x388 = 3180U;
int32_t t98 = 3;


void f0(void) {
	uint16_t x1 = 1U;
	int64_t x2 = INT64_MAX;
	static uint8_t x3 = UINT8_MAX;
	volatile int8_t x4 = 11;
	volatile int32_t t0 = -883661067;

	t0 = ((x1<=(x2^x3))^x4);

	if (t0 != 10) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = 0;
	volatile int32_t t1 = -199;

	t1 = ((x5<=(x6^x7))^x8);

	if (t1 != -32768) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = 2862038;
	uint64_t x10 = 5898979227667054694LLU;
	int64_t x11 = INT64_MAX;
	volatile int8_t x12 = INT8_MIN;
	volatile int32_t t2 = 22858411;

	t2 = ((x9<=(x10^x11))^x12);

	if (t2 != -127) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -1;
	int16_t x14 = -1;
	volatile int64_t x15 = -1LL;
	static int8_t x16 = -63;
	static int32_t t3 = 37402818;

	t3 = ((x13<=(x14^x15))^x16);

	if (t3 != -64) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	static uint64_t x18 = 3660323125764192LLU;
	int32_t x19 = 325692;

	t4 = ((x17<=(x18^x19))^x20);

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = INT64_MAX;
	uint8_t x23 = UINT8_MAX;
	int64_t x24 = 2901847842982LL;
	int64_t t5 = 43897081LL;

	t5 = ((x21<=(x22^x23))^x24);

	if (t5 != 2901847842983LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = UINT64_MAX;
	static int8_t x26 = INT8_MAX;
	uint8_t x27 = 5U;
	volatile int32_t x28 = INT32_MIN;
	volatile int32_t t6 = INT32_MIN;

	t6 = ((x25<=(x26^x27))^x28);

	if (t6 != INT32_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -2766LL;
	int8_t x31 = INT8_MIN;
	int8_t x32 = INT8_MIN;
	int32_t t7 = -178;

	t7 = ((x29<=(x30^x31))^x32);

	if (t7 != -127) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = -1;
	uint16_t x34 = 0U;
	int16_t x35 = INT16_MIN;
	static int32_t t8 = INT32_MIN;

	t8 = ((x33<=(x34^x35))^x36);

	if (t8 != INT32_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x38 = -2117888597LL;
	volatile int32_t x39 = -8043775;
	static uint64_t x40 = 22465LLU;
	uint64_t t9 = 112863628676203247LLU;

	t9 = ((x37<=(x38^x39))^x40);

	if (t9 != 22465LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int8_t x41 = INT8_MIN;
	int64_t x42 = 1560105935871996879LL;
	int32_t x44 = -122951;
	static int32_t t10 = 323;

	t10 = ((x41<=(x42^x43))^x44);

	if (t10 != -122952) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	volatile int32_t x46 = -582612;
	uint16_t x47 = UINT16_MAX;
	static int32_t x48 = 242034;
	volatile int32_t t11 = 20121;

	t11 = ((x45<=(x46^x47))^x48);

	if (t11 != 242034) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	int16_t x50 = -1;
	volatile int16_t x51 = -1;
	int64_t x52 = -1LL;
	int64_t t12 = 151117LL;

	t12 = ((x49<=(x50^x51))^x52);

	if (t12 != -2LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = 249687U;
	int8_t x55 = INT8_MAX;
	int16_t x56 = INT16_MIN;
	static int32_t t13 = 2035;

	t13 = ((x53<=(x54^x55))^x56);

	if (t13 != -32767) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x57 = INT16_MIN;
	uint64_t x58 = 3898833421237462522LLU;
	int16_t x59 = -4;
	uint64_t x60 = 42LLU;
	volatile uint64_t t14 = 17373328503761131LLU;

	t14 = ((x57<=(x58^x59))^x60);

	if (t14 != 42LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x62 = -1;
	int8_t x63 = -1;
	uint8_t x64 = 38U;
	volatile int32_t t15 = 0;

	t15 = ((x61<=(x62^x63))^x64);

	if (t15 != 39) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = UINT8_MAX;
	uint32_t x66 = 6830128U;
	volatile int16_t x67 = 12;
	static volatile uint64_t x68 = 3LLU;
	volatile uint64_t t16 = 47000645LLU;

	t16 = ((x65<=(x66^x67))^x68);

	if (t16 != 2LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x70 = 15206454LLU;
	int8_t x71 = INT8_MAX;
	int64_t x72 = 118LL;

	t17 = ((x69<=(x70^x71))^x72);

	if (t17 != 118LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x73 = 7264612U;
	uint8_t x74 = 15U;
	int32_t x75 = INT32_MAX;
	volatile int16_t x76 = -1;
	int32_t t18 = 14895;

	t18 = ((x73<=(x74^x75))^x76);

	if (t18 != -2) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = 0;
	uint64_t x78 = 5LLU;
	volatile int16_t x79 = 15474;
	uint16_t x80 = 26530U;
	volatile int32_t t19 = 0;

	t19 = ((x77<=(x78^x79))^x80);

	if (t19 != 26531) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x82 = 13956348307LLU;
	volatile int32_t x83 = -1;
	int64_t x84 = -2948LL;
	int64_t t20 = -36877LL;

	t20 = ((x81<=(x82^x83))^x84);

	if (t20 != -2947LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MAX;
	uint64_t x86 = 8155LLU;
	int32_t x87 = 1;
	volatile int32_t x88 = -90732;
	int32_t t21 = 255;

	t21 = ((x85<=(x86^x87))^x88);

	if (t21 != -90731) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = 64163U;
	volatile uint64_t x90 = 2LLU;
	volatile int32_t x91 = 5;
	uint32_t x92 = 49U;

	t22 = ((x89<=(x90^x91))^x92);

	if (t22 != 49U) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = -1;
	volatile int64_t x94 = -6436279124550LL;
	int16_t x95 = INT16_MIN;
	uint64_t x96 = 484432848327352LLU;
	volatile uint64_t t23 = 5093765270LLU;

	t23 = ((x93<=(x94^x95))^x96);

	if (t23 != 484432848327353LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = -14;
	int16_t x98 = INT16_MAX;
	int64_t x99 = INT64_MIN;
	int32_t x100 = INT32_MIN;
	volatile int32_t t24 = INT32_MIN;

	t24 = ((x97<=(x98^x99))^x100);

	if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MIN;
	int16_t x102 = -1;
	int16_t x103 = -1;
	static volatile int16_t x104 = INT16_MIN;
	int32_t t25 = 1;

	t25 = ((x101<=(x102^x103))^x104);

	if (t25 != -32767) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x106 = INT32_MAX;
	int8_t x107 = 7;

	t26 = ((x105<=(x106^x107))^x108);

	if (t26 != 9) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = 2U;
	int16_t x110 = INT16_MAX;
	int16_t x112 = 14;
	int32_t t27 = -283989527;

	t27 = ((x109<=(x110^x111))^x112);

	if (t27 != 14) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = -164019LL;
	uint32_t x115 = 8170U;
	static int8_t x116 = 8;
	volatile int32_t t28 = -95632;

	t28 = ((x113<=(x114^x115))^x116);

	if (t28 != 9) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = 1;
	uint64_t x118 = 280223982246460LLU;
	static uint32_t x120 = UINT32_MAX;
	static volatile uint32_t t29 = 502U;

	t29 = ((x117<=(x118^x119))^x120);

	if (t29 != 4294967294U) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = UINT16_MAX;
	volatile int16_t x122 = INT16_MIN;
	volatile int8_t x123 = INT8_MAX;
	volatile int8_t x124 = -36;

	t30 = ((x121<=(x122^x123))^x124);

	if (t30 != -36) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = 45483947U;
	static volatile int16_t x126 = INT16_MIN;
	int64_t x127 = INT64_MIN;
	uint64_t x128 = 440712381116LLU;
	static uint64_t t31 = 4825LLU;

	t31 = ((x125<=(x126^x127))^x128);

	if (t31 != 440712381117LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x130 = -1LL;
	int8_t x131 = INT8_MAX;
	int64_t x132 = INT64_MAX;
	static int64_t t32 = INT64_MAX;

	t32 = ((x129<=(x130^x131))^x132);

	if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x134 = UINT8_MAX;
	uint16_t x135 = UINT16_MAX;

	t33 = ((x133<=(x134^x135))^x136);

	if (t33 != 2096233LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x137 = -10381;
	int32_t x138 = INT32_MAX;
	int16_t x139 = INT16_MAX;
	int64_t x140 = INT64_MAX;
	static int64_t t34 = 31462LL;

	t34 = ((x137<=(x138^x139))^x140);

	if (t34 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MIN;
	static uint64_t x142 = 23206269908LLU;
	int8_t x143 = -1;
	int32_t t35 = 163354;

	t35 = ((x141<=(x142^x143))^x144);

	if (t35 != -128) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = -1;
	volatile int16_t x146 = -1;
	uint32_t x147 = UINT32_MAX;
	int16_t x148 = INT16_MIN;
	volatile int32_t t36 = 1;

	t36 = ((x145<=(x146^x147))^x148);

	if (t36 != -32768) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x150 = 314121927LL;
	volatile int64_t x151 = -1LL;

	t37 = ((x149<=(x150^x151))^x152);

	if (t37 != -24) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x153 = 2791U;
	int32_t x155 = -110;
	uint8_t x156 = 1U;
	static volatile int32_t t38 = 121;

	t38 = ((x153<=(x154^x155))^x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = INT64_MIN;
	volatile int64_t x158 = INT64_MAX;
	uint64_t x159 = 3LLU;
	int32_t x160 = -1;
	int32_t t39 = -3;

	t39 = ((x157<=(x158^x159))^x160);

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x161 = 14U;
	int64_t x162 = -1LL;
	int32_t x163 = -1;
	int16_t x164 = 86;
	int32_t t40 = 119139;

	t40 = ((x161<=(x162^x163))^x164);

	if (t40 != 86) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = INT8_MAX;
	static volatile int32_t x166 = 74364369;
	uint8_t x167 = 1U;
	volatile int16_t x168 = INT16_MIN;

	t41 = ((x165<=(x166^x167))^x168);

	if (t41 != -32767) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x171 = 1065U;

	t42 = ((x169<=(x170^x171))^x172);

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x174 = INT16_MAX;
	static volatile int8_t x175 = -1;
	int16_t x176 = INT16_MAX;
	volatile int32_t t43 = -4005;

	t43 = ((x173<=(x174^x175))^x176);

	if (t43 != 32766) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x177 = 6U;
	int8_t x178 = INT8_MAX;
	int16_t x179 = INT16_MIN;

	t44 = ((x177<=(x178^x179))^x180);

	if (t44 != -11) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x181 = 105813U;
	int64_t x182 = INT64_MIN;
	static int64_t x183 = INT64_MAX;
	uint8_t x184 = UINT8_MAX;
	static int32_t t45 = -71135;

	t45 = ((x181<=(x182^x183))^x184);

	if (t45 != 255) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x186 = INT8_MAX;
	uint32_t x188 = UINT32_MAX;

	t46 = ((x185<=(x186^x187))^x188);

	if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x189 = -61;
	int16_t x190 = INT16_MAX;
	int16_t x191 = INT16_MIN;
	int16_t x192 = -1;
	int32_t t47 = -26308;

	t47 = ((x189<=(x190^x191))^x192);

	if (t47 != -2) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MIN;
	int16_t x194 = INT16_MIN;
	int16_t x195 = INT16_MAX;
	uint16_t x196 = 3883U;

	t48 = ((x193<=(x194^x195))^x196);

	if (t48 != 3882) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x197 = -1LL;
	int16_t x198 = -1;
	static int16_t x200 = -1;
	static int32_t t49 = 129200;

	t49 = ((x197<=(x198^x199))^x200);

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int16_t x203 = INT16_MAX;
	static int8_t x204 = INT8_MAX;
	int32_t t50 = -3461;

	t50 = ((x201<=(x202^x203))^x204);

	if (t50 != 127) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x206 = 3;
	int32_t x207 = -1;
	int16_t x208 = INT16_MIN;
	volatile int32_t t51 = 48010193;

	t51 = ((x205<=(x206^x207))^x208);

	if (t51 != -32768) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x209 = INT16_MAX;
	static int8_t x210 = INT8_MIN;
	volatile int64_t t52 = -3670505772752953700LL;

	t52 = ((x209<=(x210^x211))^x212);

	if (t52 != 138679714241201LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x213 = INT16_MIN;
	int64_t x214 = INT64_MIN;
	int32_t x215 = INT32_MAX;
	static volatile int64_t x216 = 168465496753348LL;
	int64_t t53 = 217374907961575901LL;

	t53 = ((x213<=(x214^x215))^x216);

	if (t53 != 168465496753348LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MIN;
	int32_t x218 = INT32_MAX;
	int64_t x219 = INT64_MIN;
	uint64_t x220 = 2170LLU;
	uint64_t t54 = 164LLU;

	t54 = ((x217<=(x218^x219))^x220);

	if (t54 != 2171LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint64_t x224 = UINT64_MAX;
	volatile uint64_t t55 = 54673158LLU;

	t55 = ((x221<=(x222^x223))^x224);

	if (t55 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x225 = 15U;
	int16_t x226 = 35;
	int64_t x227 = -1LL;
	volatile int32_t t56 = -22708;

	t56 = ((x225<=(x226^x227))^x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x229 = 98316U;
	volatile uint64_t x231 = 12342655LLU;
	static int64_t x232 = INT64_MIN;
	int64_t t57 = -223590LL;

	t57 = ((x229<=(x230^x231))^x232);

	if (t57 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x234 = 3439;
	int32_t x236 = -16;
	volatile int32_t t58 = 408;

	t58 = ((x233<=(x234^x235))^x236);

	if (t58 != -15) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = -1;
	volatile uint64_t x238 = UINT64_MAX;
	static volatile int32_t t59 = 59394972;

	t59 = ((x237<=(x238^x239))^x240);

	if (t59 != 127) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x241 = INT64_MAX;
	int8_t x242 = -1;
	int16_t x244 = -1;
	volatile int32_t t60 = -126031;

	t60 = ((x241<=(x242^x243))^x244);

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int32_t x245 = INT32_MIN;
	volatile int8_t x246 = INT8_MIN;
	uint32_t x247 = 6465634U;
	uint64_t x248 = 769799910557107896LLU;
	uint64_t t61 = 14442840238010926LLU;

	t61 = ((x245<=(x246^x247))^x248);

	if (t61 != 769799910557107897LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int16_t x249 = 202;
	int16_t x250 = INT16_MIN;
	int32_t x251 = INT32_MIN;
	int8_t x252 = INT8_MAX;
	int32_t t62 = 3;

	t62 = ((x249<=(x250^x251))^x252);

	if (t62 != 126) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x253 = UINT16_MAX;
	int8_t x254 = INT8_MIN;
	static int16_t x255 = INT16_MIN;
	static int32_t x256 = INT32_MIN;
	int32_t t63 = INT32_MIN;

	t63 = ((x253<=(x254^x255))^x256);

	if (t63 != INT32_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = 51;
	uint16_t x258 = 13287U;
	int16_t x259 = INT16_MAX;
	uint32_t x260 = 23844135U;
	volatile uint32_t t64 = 50214680U;

	t64 = ((x257<=(x258^x259))^x260);

	if (t64 != 23844134U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x263 = INT16_MAX;
	volatile int8_t x264 = -1;
	volatile int32_t t65 = -187951;

	t65 = ((x261<=(x262^x263))^x264);

	if (t65 != -2) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x265 = -1795LL;
	int64_t x267 = -3LL;
	uint16_t x268 = 4735U;
	volatile int32_t t66 = 18929086;

	t66 = ((x265<=(x266^x267))^x268);

	if (t66 != 4734) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x270 = UINT16_MAX;
	static volatile int8_t x271 = 5;
	static int32_t t67 = -6;

	t67 = ((x269<=(x270^x271))^x272);

	if (t67 != -2147483647) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = INT32_MAX;
	int64_t x274 = 2458769LL;
	uint8_t x275 = 1U;
	volatile uint16_t x276 = 57U;
	static int32_t t68 = 0;

	t68 = ((x273<=(x274^x275))^x276);

	if (t68 != 57) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x278 = 7277U;
	int8_t x279 = -7;

	t69 = ((x277<=(x278^x279))^x280);

	if (t69 != -32768) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x281 = -6;
	static int8_t x282 = INT8_MAX;
	uint16_t x284 = 132U;
	volatile int32_t t70 = 209;

	t70 = ((x281<=(x282^x283))^x284);

	if (t70 != 133) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x285 = UINT8_MAX;
	int64_t x287 = INT64_MAX;
	static volatile uint8_t x288 = 0U;
	static volatile int32_t t71 = -2;

	t71 = ((x285<=(x286^x287))^x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MIN;
	static int32_t x290 = 865242462;
	int32_t x292 = INT32_MIN;
	int32_t t72 = INT32_MIN;

	t72 = ((x289<=(x290^x291))^x292);

	if (t72 != INT32_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x293 = INT64_MIN;
	uint32_t x295 = 753500U;
	int32_t t73 = 1;

	t73 = ((x293<=(x294^x295))^x296);

	if (t73 != -127) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x297 = 251827441U;
	int32_t x298 = INT32_MAX;
	uint8_t x299 = 74U;
	volatile int32_t t74 = -50;

	t74 = ((x297<=(x298^x299))^x300);

	if (t74 != 5) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x301 = 4;
	int16_t x302 = INT16_MAX;
	volatile int16_t x303 = -1;
	int16_t x304 = 33;
	volatile int32_t t75 = 3142;

	t75 = ((x301<=(x302^x303))^x304);

	if (t75 != 33) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = INT32_MIN;
	int8_t x306 = -29;
	int16_t x307 = -1;
	int32_t t76 = 153055;

	t76 = ((x305<=(x306^x307))^x308);

	if (t76 != -127) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = 0;
	volatile int8_t x310 = INT8_MIN;
	int32_t x311 = INT32_MIN;
	int64_t x312 = -46155100943LL;
	volatile int64_t t77 = 4363640031365LL;

	t77 = ((x309<=(x310^x311))^x312);

	if (t77 != -46155100944LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = 33LL;
	int64_t x315 = INT64_MIN;
	volatile int32_t x316 = -1;
	volatile int32_t t78 = -334960929;

	t78 = ((x313<=(x314^x315))^x316);

	if (t78 != -2) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = UINT64_MAX;
	uint32_t x318 = 6U;
	uint32_t x319 = UINT32_MAX;
	uint8_t x320 = 31U;
	volatile int32_t t79 = -415;

	t79 = ((x317<=(x318^x319))^x320);

	if (t79 != 31) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x321 = INT32_MIN;
	volatile int64_t x322 = INT64_MIN;
	int8_t x323 = INT8_MIN;
	static int32_t t80 = 20768;

	t80 = ((x321<=(x322^x323))^x324);

	if (t80 != -2) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = INT16_MAX;
	static int8_t x326 = INT8_MIN;
	uint64_t x327 = 58161356916LLU;
	int8_t x328 = INT8_MAX;
	volatile int32_t t81 = -60;

	t81 = ((x325<=(x326^x327))^x328);

	if (t81 != 126) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = INT8_MIN;
	int64_t x330 = INT64_MAX;
	static int32_t t82 = 739;

	t82 = ((x329<=(x330^x331))^x332);

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x333 = UINT16_MAX;
	uint16_t x334 = 1U;
	static int32_t x336 = INT32_MAX;
	int32_t t83 = INT32_MAX;

	t83 = ((x333<=(x334^x335))^x336);

	if (t83 != INT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = UINT16_MAX;
	int8_t x338 = -1;
	static uint32_t x339 = UINT32_MAX;

	t84 = ((x337<=(x338^x339))^x340);

	if (t84 != -128) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x342 = UINT64_MAX;
	uint8_t x343 = 41U;
	int8_t x344 = INT8_MAX;

	t85 = ((x341<=(x342^x343))^x344);

	if (t85 != 126) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = -1LL;
	uint8_t x346 = UINT8_MAX;
	static uint16_t x347 = 12471U;
	static volatile int8_t x348 = INT8_MIN;
	static int32_t t86 = 1;

	t86 = ((x345<=(x346^x347))^x348);

	if (t86 != -127) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x349 = 1U;
	uint8_t x350 = 99U;
	int64_t x352 = INT64_MIN;
	int64_t t87 = INT64_MIN;

	t87 = ((x349<=(x350^x351))^x352);

	if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x353 = INT8_MIN;
	int32_t x354 = INT32_MAX;
	int64_t x355 = -13813LL;
	uint16_t x356 = 885U;
	static int32_t t88 = -474963;

	t88 = ((x353<=(x354^x355))^x356);

	if (t88 != 885) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x358 = INT64_MAX;
	volatile uint8_t x359 = 1U;

	t89 = ((x357<=(x358^x359))^x360);

	if (t89 != 374U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x362 = -8;
	volatile uint16_t x364 = 0U;
	volatile int32_t t90 = 7107;

	t90 = ((x361<=(x362^x363))^x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = -1;
	int16_t x366 = 8;
	static uint32_t x367 = 110U;
	int16_t x368 = INT16_MAX;

	t91 = ((x365<=(x366^x367))^x368);

	if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x370 = UINT64_MAX;
	int32_t x371 = INT32_MIN;
	static int64_t x372 = INT64_MAX;
	volatile int64_t t92 = INT64_MAX;

	t92 = ((x369<=(x370^x371))^x372);

	if (t92 != INT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x373 = INT64_MAX;
	int32_t x376 = -199357;
	volatile int32_t t93 = 4;

	t93 = ((x373<=(x374^x375))^x376);

	if (t93 != -199357) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x377 = -1;
	int32_t x378 = -14;
	static uint16_t x379 = 0U;
	uint32_t x380 = 973324U;
	static volatile uint32_t t94 = 230968662U;

	t94 = ((x377<=(x378^x379))^x380);

	if (t94 != 973324U) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x381 = INT16_MIN;
	volatile uint64_t x382 = UINT64_MAX;
	uint8_t x383 = 9U;
	static volatile uint16_t x384 = UINT16_MAX;
	volatile int32_t t95 = -92133295;

	t95 = ((x381<=(x382^x383))^x384);

	if (t95 != 65534) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x385 = UINT32_MAX;
	static int8_t x386 = 1;
	volatile uint16_t x387 = UINT16_MAX;
	uint32_t t96 = 10138U;

	t96 = ((x385<=(x386^x387))^x388);

	if (t96 != 3180U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = INT8_MIN;
	int32_t x390 = 2242452;
	int64_t x391 = INT64_MAX;
	volatile uint16_t x392 = 30U;
	int32_t t97 = 3058995;

	t97 = ((x389<=(x390^x391))^x392);

	if (t97 != 31) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x393 = INT16_MIN;
	uint64_t x394 = 1880724029841LLU;
	int32_t x395 = INT32_MIN;
	static int8_t x396 = -1;

	t98 = ((x393<=(x394^x395))^x396);

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x397 = 1247013U;
	int32_t x398 = INT32_MIN;
	int64_t x399 = INT64_MAX;
	int64_t x400 = INT64_MIN;
	static int64_t t99 = INT64_MIN;

	t99 = ((x397<=(x398^x399))^x400);

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

