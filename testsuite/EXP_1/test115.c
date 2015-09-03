#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x3 = UINT64_MAX;
uint16_t x10 = 1774U;
int8_t x13 = INT8_MIN;
int8_t x19 = -1;
volatile int32_t t4 = 12172;
int16_t x37 = INT16_MIN;
static volatile int32_t t9 = -655;
static uint8_t x49 = 1U;
int64_t x50 = -1LL;
uint8_t x51 = 23U;
int8_t x53 = -1;
int8_t x56 = -1;
int64_t x59 = -39259LL;
volatile int32_t x62 = INT32_MIN;
int8_t x67 = INT8_MIN;
int16_t x70 = INT16_MIN;
volatile uint64_t x88 = 4649641980694401LLU;
static int16_t x92 = INT16_MIN;
volatile int32_t t20 = -11529;
int8_t x93 = INT8_MIN;
volatile int64_t x94 = -1LL;
static int32_t x95 = INT32_MAX;
volatile int64_t x97 = INT64_MIN;
uint32_t x118 = 176327U;
volatile int32_t x122 = -6159;
volatile int32_t t27 = -1;
int16_t x134 = -1;
static uint64_t x146 = UINT64_MAX;
int32_t x151 = -1;
uint64_t x153 = UINT64_MAX;
static int16_t x158 = -1;
static uint16_t x170 = UINT16_MAX;
uint16_t x173 = 31U;
int32_t t38 = -1053224537;
int8_t x191 = INT8_MIN;
volatile int32_t t42 = 25714;
static uint32_t t43 = 18745U;
static int32_t x208 = INT32_MIN;
volatile int16_t x211 = 7;
uint32_t x214 = 60U;
volatile int32_t t48 = 9595507;
int64_t x231 = INT64_MAX;
static int32_t x232 = -1;
int32_t t49 = -8796891;
int64_t x234 = 144412718246LL;
uint32_t x236 = 9748U;
int32_t x238 = -169466;
volatile uint8_t x241 = UINT8_MAX;
volatile int8_t x246 = -1;
int8_t x250 = 1;
int16_t x251 = -1;
int16_t x259 = INT16_MIN;
static volatile int32_t t56 = -53;
uint16_t x262 = UINT16_MAX;
int16_t x264 = -234;
static volatile int32_t t57 = 4066952;
uint8_t x266 = 14U;
static int16_t x272 = INT16_MIN;
static uint16_t x274 = UINT16_MAX;
static volatile uint8_t x278 = 8U;
int32_t t63 = 329081330;
static uint32_t t64 = 48U;
static int16_t x298 = 30;
static uint16_t x301 = 362U;
static int16_t x302 = INT16_MIN;
volatile int8_t x303 = -1;
volatile int64_t t68 = 21100953066626LL;
uint8_t x309 = 15U;
int64_t x312 = -204428981LL;
static int64_t t70 = 396879LL;
uint32_t x320 = UINT32_MAX;
volatile int8_t x324 = -1;
int32_t t74 = -447477;
uint64_t x334 = 5087034LLU;
volatile int8_t x336 = -1;
volatile int32_t x345 = -99;
uint64_t x346 = 20536296703LLU;
int32_t x351 = 309115632;
uint8_t x353 = 1U;
int64_t x359 = -1LL;
uint32_t t80 = 902694U;
int8_t x365 = INT8_MIN;
static uint64_t x373 = UINT64_MAX;
uint16_t x374 = UINT16_MAX;
uint64_t x376 = 130LLU;
int32_t x386 = INT32_MIN;
uint64_t x387 = 922938132LLU;
volatile int64_t x397 = 17921393797381416LL;
int32_t x399 = -8020955;
volatile int32_t t90 = -8603704;
int64_t x409 = INT64_MIN;
uint32_t x411 = UINT32_MAX;
int16_t x413 = 374;
static int8_t x416 = INT8_MAX;
int8_t x418 = -1;
static int8_t x419 = INT8_MIN;
int32_t t94 = 6;
int64_t x426 = INT64_MAX;
int32_t t95 = 1374151;
uint16_t x431 = UINT16_MAX;
static uint16_t x432 = 140U;
int32_t t96 = -297005182;
volatile int64_t t97 = 6848LL;
uint32_t t98 = 107U;
int64_t x447 = INT64_MIN;


void f0(void) {
	int16_t x1 = INT16_MAX;
	uint64_t x2 = 0LLU;
	static int16_t x4 = INT16_MAX;
	int32_t t0 = -4305;

	t0 = (((x1+x2)<x3)&x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x5 = 1U;
	static volatile int16_t x6 = INT16_MIN;
	int8_t x7 = INT8_MIN;
	uint64_t x8 = UINT64_MAX;
	static uint64_t t1 = 3846388597LLU;

	t1 = (((x5+x6)<x7)&x8);

	if (t1 != 1LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	volatile int64_t x11 = 14483805443665LL;
	int8_t x12 = -12;
	volatile int32_t t2 = 934236;

	t2 = (((x9+x10)<x11)&x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x14 = UINT16_MAX;
	static uint16_t x15 = 4235U;
	uint64_t x16 = 78678999536308530LLU;
	static volatile uint64_t t3 = 743LLU;

	t3 = (((x13+x14)<x15)&x16);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x17 = 1U;
	int16_t x18 = INT16_MIN;
	int8_t x20 = -31;

	t4 = (((x17+x18)<x19)&x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 7580;
	static volatile int8_t x22 = -1;
	uint32_t x23 = UINT32_MAX;
	int16_t x24 = INT16_MIN;
	volatile int32_t t5 = -204093248;

	t5 = (((x21+x22)<x23)&x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 304U;
	int16_t x26 = 63;
	static int64_t x27 = 16633LL;
	volatile int32_t x28 = -1;
	static volatile int32_t t6 = 85657;

	t6 = (((x25+x26)<x27)&x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = UINT32_MAX;
	uint8_t x30 = UINT8_MAX;
	uint16_t x31 = UINT16_MAX;
	int32_t x32 = 15260;
	int32_t t7 = -23132;

	t7 = (((x29+x30)<x31)&x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x38 = UINT64_MAX;
	int16_t x39 = -137;
	static int32_t x40 = -1;
	int32_t t8 = -9733;

	t8 = (((x37+x38)<x39)&x40);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x41 = 0U;
	int32_t x42 = INT32_MAX;
	int64_t x43 = INT64_MAX;
	static uint16_t x44 = UINT16_MAX;

	t9 = (((x41+x42)<x43)&x44);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x45 = UINT8_MAX;
	int16_t x46 = -1;
	static int16_t x47 = INT16_MAX;
	uint8_t x48 = UINT8_MAX;
	volatile int32_t t10 = 278;

	t10 = (((x45+x46)<x47)&x48);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x52 = UINT64_MAX;
	uint64_t t11 = 37217LLU;

	t11 = (((x49+x50)<x51)&x52);

	if (t11 != 1LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x54 = 92;
	int8_t x55 = -1;
	volatile int32_t t12 = 3227757;

	t12 = (((x53+x54)<x55)&x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = INT16_MIN;
	volatile int8_t x58 = INT8_MAX;
	uint64_t x60 = 172LLU;
	volatile uint64_t t13 = 0LLU;

	t13 = (((x57+x58)<x59)&x60);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x61 = UINT32_MAX;
	int32_t x63 = 28160;
	int32_t x64 = INT32_MIN;
	volatile int32_t t14 = 4648;

	t14 = (((x61+x62)<x63)&x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = INT16_MIN;
	int8_t x66 = INT8_MIN;
	uint64_t x68 = UINT64_MAX;
	uint64_t t15 = 84505068LLU;

	t15 = (((x65+x66)<x67)&x68);

	if (t15 != 1LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int8_t x69 = INT8_MAX;
	int16_t x71 = INT16_MIN;
	int32_t x72 = INT32_MIN;
	int32_t t16 = 20871299;

	t16 = (((x69+x70)<x71)&x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = INT8_MIN;
	int64_t x74 = INT64_MAX;
	uint16_t x75 = 13U;
	volatile uint32_t x76 = 140914U;
	uint32_t t17 = 43U;

	t17 = (((x73+x74)<x75)&x76);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x81 = 0U;
	uint16_t x82 = UINT16_MAX;
	static int32_t x83 = 5;
	int32_t x84 = INT32_MAX;
	volatile int32_t t18 = -9;

	t18 = (((x81+x82)<x83)&x84);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x85 = INT32_MIN;
	uint16_t x86 = 12773U;
	volatile int64_t x87 = INT64_MAX;
	uint64_t t19 = 17LLU;

	t19 = (((x85+x86)<x87)&x88);

	if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x89 = UINT64_MAX;
	volatile int16_t x90 = -131;
	int16_t x91 = INT16_MAX;

	t20 = (((x89+x90)<x91)&x92);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x96 = INT64_MIN;
	int64_t t21 = -8443971691475LL;

	t21 = (((x93+x94)<x95)&x96);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x98 = 1U;
	uint32_t x99 = 21949094U;
	int8_t x100 = -1;
	int32_t t22 = 385207;

	t22 = (((x97+x98)<x99)&x100);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x101 = 217821385244518LLU;
	int32_t x102 = INT32_MIN;
	int32_t x103 = 28622;
	uint32_t x104 = UINT32_MAX;
	static uint32_t t23 = 640147966U;

	t23 = (((x101+x102)<x103)&x104);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x113 = 1253LLU;
	volatile int8_t x114 = -1;
	volatile int8_t x115 = INT8_MIN;
	int16_t x116 = INT16_MAX;
	static int32_t t24 = -14140920;

	t24 = (((x113+x114)<x115)&x116);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int32_t x117 = 81055;
	int16_t x119 = 0;
	uint16_t x120 = 302U;
	static int32_t t25 = -1;

	t25 = (((x117+x118)<x119)&x120);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x121 = 1;
	static int64_t x123 = 62185237604527444LL;
	volatile uint8_t x124 = UINT8_MAX;
	volatile int32_t t26 = 141;

	t26 = (((x121+x122)<x123)&x124);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x125 = 1;
	int32_t x126 = -1;
	int32_t x127 = INT32_MAX;
	static int8_t x128 = -1;

	t27 = (((x125+x126)<x127)&x128);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x129 = INT32_MIN;
	static int16_t x130 = 10;
	volatile int8_t x131 = -15;
	uint32_t x132 = 7351U;
	static volatile uint32_t t28 = 872147502U;

	t28 = (((x129+x130)<x131)&x132);

	if (t28 != 1U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x133 = -1LL;
	int32_t x135 = -38608435;
	volatile int16_t x136 = INT16_MIN;
	volatile int32_t t29 = -2;

	t29 = (((x133+x134)<x135)&x136);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x137 = 1;
	int32_t x138 = -1;
	uint16_t x139 = 2U;
	int8_t x140 = -1;
	volatile int32_t t30 = 61244310;

	t30 = (((x137+x138)<x139)&x140);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x141 = 36;
	int32_t x142 = INT32_MIN;
	int32_t x143 = -13436;
	static int64_t x144 = INT64_MAX;
	volatile int64_t t31 = 44878480196493LL;

	t31 = (((x141+x142)<x143)&x144);

	if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int8_t x145 = -13;
	int32_t x147 = -9;
	volatile int8_t x148 = INT8_MIN;
	int32_t t32 = -6;

	t32 = (((x145+x146)<x147)&x148);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x149 = 0LL;
	uint16_t x150 = 917U;
	volatile int32_t x152 = INT32_MIN;
	volatile int32_t t33 = -131910982;

	t33 = (((x149+x150)<x151)&x152);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x154 = -15261463207LL;
	int8_t x155 = INT8_MIN;
	volatile int16_t x156 = INT16_MIN;
	volatile int32_t t34 = -77;

	t34 = (((x153+x154)<x155)&x156);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x157 = INT64_MAX;
	static uint32_t x159 = UINT32_MAX;
	uint16_t x160 = 1U;
	static int32_t t35 = -1;

	t35 = (((x157+x158)<x159)&x160);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int8_t x165 = INT8_MIN;
	int16_t x166 = -388;
	int16_t x167 = INT16_MIN;
	static int32_t x168 = INT32_MIN;
	volatile int32_t t36 = 1741;

	t36 = (((x165+x166)<x167)&x168);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x169 = INT64_MIN;
	int8_t x171 = INT8_MIN;
	static int8_t x172 = -14;
	static int32_t t37 = 2263157;

	t37 = (((x169+x170)<x171)&x172);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x174 = 798357026;
	int64_t x175 = INT64_MIN;
	int32_t x176 = INT32_MIN;

	t38 = (((x173+x174)<x175)&x176);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x181 = INT8_MAX;
	int32_t x182 = INT32_MIN;
	int64_t x183 = INT64_MIN;
	uint8_t x184 = 0U;
	static int32_t t39 = -68;

	t39 = (((x181+x182)<x183)&x184);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x185 = 24636076U;
	volatile int16_t x186 = 1;
	int16_t x187 = INT16_MIN;
	static int32_t x188 = INT32_MAX;
	volatile int32_t t40 = 7885045;

	t40 = (((x185+x186)<x187)&x188);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x189 = -1;
	int8_t x190 = INT8_MIN;
	int64_t x192 = INT64_MAX;
	int64_t t41 = 2875657LL;

	t41 = (((x189+x190)<x191)&x192);

	if (t41 != 1LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x193 = INT64_MIN;
	volatile int16_t x194 = 5688;
	static int16_t x195 = 1;
	int32_t x196 = -70;

	t42 = (((x193+x194)<x195)&x196);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x201 = 5U;
	static volatile int64_t x202 = 15595833LL;
	uint32_t x203 = UINT32_MAX;
	volatile uint32_t x204 = 458871U;

	t43 = (((x201+x202)<x203)&x204);

	if (t43 != 1U) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x205 = 63U;
	int16_t x206 = 0;
	volatile int16_t x207 = 8;
	volatile int32_t t44 = -22346808;

	t44 = (((x205+x206)<x207)&x208);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int8_t x209 = 54;
	static uint8_t x210 = 43U;
	volatile uint8_t x212 = UINT8_MAX;
	static int32_t t45 = -29005;

	t45 = (((x209+x210)<x211)&x212);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x213 = -1;
	static int64_t x215 = -704714038230987LL;
	uint32_t x216 = 64U;
	static volatile uint32_t t46 = 386U;

	t46 = (((x213+x214)<x215)&x216);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x221 = INT16_MAX;
	volatile int8_t x222 = INT8_MIN;
	int64_t x223 = INT64_MIN;
	static int32_t x224 = INT32_MIN;
	volatile int32_t t47 = 1063;

	t47 = (((x221+x222)<x223)&x224);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x225 = -6025;
	int16_t x226 = -25;
	int16_t x227 = INT16_MAX;
	volatile int32_t x228 = INT32_MIN;

	t48 = (((x225+x226)<x227)&x228);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x229 = 1;
	int8_t x230 = INT8_MIN;

	t49 = (((x229+x230)<x231)&x232);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int16_t x233 = 3546;
	static int32_t x235 = -1;
	uint32_t t50 = 3986161U;

	t50 = (((x233+x234)<x235)&x236);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x237 = 78U;
	int8_t x239 = -1;
	int32_t x240 = INT32_MAX;
	volatile int32_t t51 = 29234237;

	t51 = (((x237+x238)<x239)&x240);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x242 = -16;
	uint32_t x243 = 11U;
	uint32_t x244 = 18U;
	uint32_t t52 = 1253035U;

	t52 = (((x241+x242)<x243)&x244);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x245 = 3U;
	int64_t x247 = -65083LL;
	int64_t x248 = -1LL;
	int64_t t53 = 7774317807056825LL;

	t53 = (((x245+x246)<x247)&x248);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x249 = INT64_MIN;
	volatile int32_t x252 = INT32_MAX;
	static int32_t t54 = -254;

	t54 = (((x249+x250)<x251)&x252);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x253 = 0U;
	int16_t x254 = 1;
	int16_t x255 = INT16_MIN;
	int32_t x256 = -1;
	int32_t t55 = -8137;

	t55 = (((x253+x254)<x255)&x256);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x257 = 925141651821LLU;
	int8_t x258 = -1;
	static int32_t x260 = -1;

	t56 = (((x257+x258)<x259)&x260);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x261 = -1;
	uint32_t x263 = 10421U;

	t57 = (((x261+x262)<x263)&x264);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x265 = UINT32_MAX;
	volatile int8_t x267 = -1;
	int16_t x268 = 7672;
	volatile int32_t t58 = -1270646;

	t58 = (((x265+x266)<x267)&x268);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x269 = 33U;
	uint8_t x270 = 116U;
	uint8_t x271 = 4U;
	int32_t t59 = 512039;

	t59 = (((x269+x270)<x271)&x272);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x273 = INT32_MIN;
	int32_t x275 = INT32_MIN;
	int16_t x276 = -15;
	int32_t t60 = -3177620;

	t60 = (((x273+x274)<x275)&x276);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x277 = INT8_MIN;
	int64_t x279 = 8060809LL;
	int8_t x280 = INT8_MIN;
	volatile int32_t t61 = 295515540;

	t61 = (((x277+x278)<x279)&x280);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x281 = 1;
	static int32_t x282 = -416372;
	int64_t x283 = INT64_MIN;
	static int16_t x284 = INT16_MIN;
	volatile int32_t t62 = -15530914;

	t62 = (((x281+x282)<x283)&x284);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x285 = 2U;
	uint32_t x286 = 1625560U;
	uint16_t x287 = 2724U;
	int32_t x288 = -503;

	t63 = (((x285+x286)<x287)&x288);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x289 = INT32_MIN;
	static uint8_t x290 = 84U;
	int8_t x291 = INT8_MIN;
	volatile uint32_t x292 = 547100U;

	t64 = (((x289+x290)<x291)&x292);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x293 = 1U;
	uint8_t x294 = UINT8_MAX;
	int8_t x295 = INT8_MIN;
	int8_t x296 = INT8_MAX;
	int32_t t65 = -97;

	t65 = (((x293+x294)<x295)&x296);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x297 = UINT8_MAX;
	static int64_t x299 = INT64_MIN;
	volatile uint64_t x300 = 55819156532170351LLU;
	uint64_t t66 = 3052LLU;

	t66 = (((x297+x298)<x299)&x300);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x304 = INT8_MIN;
	int32_t t67 = 239694726;

	t67 = (((x301+x302)<x303)&x304);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x305 = UINT64_MAX;
	volatile int32_t x306 = -1902284;
	int16_t x307 = INT16_MAX;
	int64_t x308 = -2484777443983955LL;

	t68 = (((x305+x306)<x307)&x308);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x310 = 1734767137U;
	uint16_t x311 = 0U;
	volatile int64_t t69 = -2361695538210LL;

	t69 = (((x309+x310)<x311)&x312);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x313 = 1851881LLU;
	int16_t x314 = INT16_MIN;
	static uint32_t x315 = 3726U;
	int64_t x316 = 14191079LL;

	t70 = (((x313+x314)<x315)&x316);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint8_t x317 = 17U;
	volatile int8_t x318 = 0;
	volatile int8_t x319 = INT8_MIN;
	uint32_t t71 = 45501U;

	t71 = (((x317+x318)<x319)&x320);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x321 = 34;
	int16_t x322 = -6322;
	int16_t x323 = INT16_MIN;
	int32_t t72 = 1;

	t72 = (((x321+x322)<x323)&x324);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x325 = UINT8_MAX;
	static int32_t x326 = -9578;
	int16_t x327 = INT16_MIN;
	static int16_t x328 = INT16_MAX;
	static volatile int32_t t73 = 161;

	t73 = (((x325+x326)<x327)&x328);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x329 = -26;
	int8_t x330 = -44;
	static int64_t x331 = INT64_MIN;
	int32_t x332 = INT32_MIN;

	t74 = (((x329+x330)<x331)&x332);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x333 = -38;
	int16_t x335 = INT16_MAX;
	int32_t t75 = 244;

	t75 = (((x333+x334)<x335)&x336);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x341 = 42U;
	int8_t x342 = INT8_MIN;
	static int64_t x343 = -7364386LL;
	static uint32_t x344 = 110U;
	static volatile uint32_t t76 = 402U;

	t76 = (((x341+x342)<x343)&x344);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x347 = 5U;
	int16_t x348 = 21;
	int32_t t77 = 0;

	t77 = (((x345+x346)<x347)&x348);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x349 = 59792146;
	static int8_t x350 = 0;
	static volatile int64_t x352 = 4649934LL;
	int64_t t78 = -245671746807LL;

	t78 = (((x349+x350)<x351)&x352);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x354 = -3929;
	uint64_t x355 = UINT64_MAX;
	volatile uint16_t x356 = 551U;
	volatile int32_t t79 = 3594;

	t79 = (((x353+x354)<x355)&x356);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x357 = INT16_MIN;
	int16_t x358 = 5785;
	uint32_t x360 = UINT32_MAX;

	t80 = (((x357+x358)<x359)&x360);

	if (t80 != 1U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x366 = INT16_MIN;
	static int16_t x367 = -9251;
	volatile uint8_t x368 = 0U;
	volatile int32_t t81 = -5078;

	t81 = (((x365+x366)<x367)&x368);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x369 = 23613981U;
	volatile int8_t x370 = INT8_MAX;
	uint32_t x371 = 356981975U;
	volatile int32_t x372 = INT32_MIN;
	static int32_t t82 = 3656728;

	t82 = (((x369+x370)<x371)&x372);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x375 = UINT8_MAX;
	volatile uint64_t t83 = 4731931556554LLU;

	t83 = (((x373+x374)<x375)&x376);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x377 = 20;
	int32_t x378 = 723112;
	int32_t x379 = 10585379;
	static uint8_t x380 = 7U;
	volatile int32_t t84 = -29;

	t84 = (((x377+x378)<x379)&x380);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x381 = 0;
	static int16_t x382 = -1;
	int16_t x383 = INT16_MIN;
	int32_t x384 = 835947913;
	int32_t t85 = 0;

	t85 = (((x381+x382)<x383)&x384);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x385 = 0;
	static int32_t x388 = -1;
	volatile int32_t t86 = -64978;

	t86 = (((x385+x386)<x387)&x388);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x389 = INT16_MIN;
	uint64_t x390 = 8199917667617LLU;
	volatile uint32_t x391 = UINT32_MAX;
	volatile uint64_t x392 = 954LLU;
	uint64_t t87 = 44167LLU;

	t87 = (((x389+x390)<x391)&x392);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x393 = 2U;
	uint8_t x394 = 112U;
	uint64_t x395 = UINT64_MAX;
	uint64_t x396 = 81336LLU;
	volatile uint64_t t88 = 5278052LLU;

	t88 = (((x393+x394)<x395)&x396);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x398 = INT16_MIN;
	volatile int64_t x400 = -527194LL;
	volatile int64_t t89 = -12663LL;

	t89 = (((x397+x398)<x399)&x400);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x405 = 6433U;
	uint8_t x406 = 9U;
	static int64_t x407 = -1LL;
	volatile int16_t x408 = -1;

	t90 = (((x405+x406)<x407)&x408);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x410 = 44964842U;
	uint64_t x412 = UINT64_MAX;
	uint64_t t91 = 35589303LLU;

	t91 = (((x409+x410)<x411)&x412);

	if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x414 = UINT16_MAX;
	int32_t x415 = -52;
	volatile int32_t t92 = 2;

	t92 = (((x413+x414)<x415)&x416);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x417 = INT16_MIN;
	int16_t x420 = INT16_MIN;
	volatile int32_t t93 = -345497;

	t93 = (((x417+x418)<x419)&x420);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x421 = UINT64_MAX;
	static int8_t x422 = 1;
	uint16_t x423 = 32U;
	uint16_t x424 = 14346U;

	t94 = (((x421+x422)<x423)&x424);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x425 = 11805LLU;
	volatile uint32_t x427 = 12657U;
	volatile int32_t x428 = INT32_MIN;

	t95 = (((x425+x426)<x427)&x428);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x429 = -1;
	volatile int16_t x430 = INT16_MIN;

	t96 = (((x429+x430)<x431)&x432);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x433 = UINT32_MAX;
	int16_t x434 = -11;
	static int64_t x435 = -1LL;
	int64_t x436 = INT64_MAX;

	t97 = (((x433+x434)<x435)&x436);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x437 = INT8_MIN;
	int16_t x438 = -1;
	uint16_t x439 = 233U;
	uint32_t x440 = 31911U;

	t98 = (((x437+x438)<x439)&x440);

	if (t98 != 1U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x445 = INT32_MIN;
	static uint8_t x446 = 40U;
	uint32_t x448 = 110590U;
	volatile uint32_t t99 = 1U;

	t99 = (((x445+x446)<x447)&x448);

	if (t99 != 0U) { NG(); } else { ; }
	
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

