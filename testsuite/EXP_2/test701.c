#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = 24;
int8_t x8 = -1;
int16_t x10 = 2;
int64_t x19 = INT64_MIN;
volatile uint64_t t3 = UINT64_MAX;
int16_t x22 = -1;
volatile int32_t t4 = 428;
static volatile int8_t x26 = INT8_MIN;
int16_t x36 = INT16_MIN;
int32_t x39 = -1640565;
int16_t x46 = 1;
volatile uint64_t t10 = 78305091133LLU;
volatile int64_t x57 = -723096889428LL;
int16_t x62 = -1;
volatile uint8_t x69 = UINT8_MAX;
int32_t x73 = INT32_MIN;
volatile int32_t x76 = INT32_MIN;
volatile uint32_t x85 = UINT32_MAX;
volatile int16_t x86 = INT16_MAX;
static int64_t x91 = 135972909279436LL;
int8_t x93 = 1;
static int32_t x99 = INT32_MIN;
int32_t x104 = -137647976;
int64_t x122 = -8083064453LL;
static int8_t x132 = INT8_MAX;
int32_t t30 = -649231;
static uint64_t x138 = UINT64_MAX;
static int16_t x144 = INT16_MIN;
int16_t x145 = INT16_MAX;
volatile int64_t x147 = -1LL;
static int16_t x156 = -1;
int32_t x158 = 54;
volatile int32_t x169 = 8905;
static int8_t x170 = INT8_MIN;
int16_t x176 = 40;
int16_t x178 = INT16_MIN;
int16_t x180 = 0;
int8_t x181 = 4;
int16_t x182 = INT16_MIN;
int64_t x185 = -1LL;
int32_t x186 = INT32_MAX;
static volatile int16_t x187 = INT16_MIN;
int32_t t44 = -27;
uint16_t x194 = UINT16_MAX;
uint16_t x197 = UINT16_MAX;
int8_t x198 = 0;
int16_t x204 = INT16_MIN;
int32_t x205 = INT32_MAX;
int8_t x207 = INT8_MIN;
volatile uint64_t x208 = 6796957917886LLU;
volatile uint64_t t49 = 5LLU;
volatile int64_t x222 = 8473LL;
volatile int8_t x223 = INT8_MIN;
volatile int64_t x224 = -174035375201LL;
static volatile int64_t t53 = -923741LL;
static uint8_t x229 = 2U;
uint8_t x241 = 11U;
uint64_t x248 = 12459717076LLU;
int16_t x252 = 1602;
volatile int16_t x254 = INT16_MIN;
int64_t x255 = INT64_MIN;
int16_t x256 = INT16_MIN;
uint8_t x270 = 0U;
static int8_t x285 = -1;
int32_t x296 = INT32_MAX;
volatile uint32_t t70 = 850U;
int32_t x301 = INT32_MIN;
volatile int8_t x304 = INT8_MIN;
static int16_t x312 = INT16_MIN;
int32_t x314 = INT32_MIN;
int64_t x315 = -1LL;
volatile uint64_t x320 = UINT64_MAX;
volatile int64_t x327 = INT64_MIN;
volatile int64_t t77 = 15872321196951039LL;
uint64_t x341 = UINT64_MAX;
int8_t x342 = INT8_MIN;
volatile uint32_t x344 = 113290U;
int8_t x348 = INT8_MIN;
uint64_t x352 = 23216LLU;
static volatile uint64_t t82 = 5LLU;
int8_t x355 = -15;
uint64_t t85 = UINT64_MAX;
static int64_t x386 = INT64_MIN;
static uint8_t x389 = UINT8_MAX;
static int16_t x393 = 16;
uint16_t x395 = UINT16_MAX;
int16_t x400 = -12;
int16_t x401 = INT16_MIN;
volatile int64_t t93 = -100LL;
uint8_t x418 = 8U;
volatile int64_t x420 = INT64_MAX;
volatile int64_t t95 = INT64_MAX;
uint16_t x435 = 14675U;


void f0(void) {
	volatile uint64_t x1 = 1094LLU;
	static int8_t x2 = 1;
	int32_t x3 = -70936;
	static volatile uint64_t t0 = 206670162176320LLU;

	t0 = ((x1-(x2%x3))|x4);

	if (t0 != 1117LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	uint64_t x6 = 3611531878887806LLU;
	static uint8_t x7 = UINT8_MAX;
	uint64_t t1 = UINT64_MAX;

	t1 = ((x5-(x6%x7))|x8);

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 1;
	int64_t x11 = 949923821216443LL;
	int16_t x12 = -217;
	int64_t t2 = 1287LL;

	t2 = ((x9-(x10%x11))|x12);

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x17 = UINT64_MAX;
	volatile uint8_t x18 = UINT8_MAX;
	int16_t x20 = -1;

	t3 = ((x17-(x18%x19))|x20);

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = INT16_MIN;
	static int32_t x23 = 5750271;
	static int8_t x24 = -1;

	t4 = ((x21-(x22%x23))|x24);

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = INT64_MIN;
	int16_t x27 = INT16_MIN;
	volatile int8_t x28 = INT8_MAX;
	volatile int64_t t5 = -683556186139651828LL;

	t5 = ((x25-(x26%x27))|x28);

	if (t5 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x29 = 7028044426251566227LLU;
	volatile int16_t x30 = 9;
	int32_t x31 = -1;
	volatile uint16_t x32 = UINT16_MAX;
	uint64_t t6 = 1974LLU;

	t6 = ((x29-(x30%x31))|x32);

	if (t6 != 7028044426251599871LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = INT8_MIN;
	int8_t x34 = 0;
	static int16_t x35 = -1;
	volatile int32_t t7 = 206044307;

	t7 = ((x33-(x34%x35))|x36);

	if (t7 != -128) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x37 = UINT32_MAX;
	int16_t x38 = INT16_MAX;
	int64_t x40 = INT64_MIN;
	volatile int64_t t8 = -511083877LL;

	t8 = ((x37-(x38%x39))|x40);

	if (t8 != -9223372032559841280LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = INT16_MAX;
	int16_t x42 = 10088;
	static int32_t x43 = INT32_MIN;
	static int16_t x44 = INT16_MIN;
	static volatile int32_t t9 = 262936;

	t9 = ((x41-(x42%x43))|x44);

	if (t9 != -10089) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x45 = 181LLU;
	int32_t x47 = INT32_MIN;
	int64_t x48 = 0LL;

	t10 = ((x45-(x46%x47))|x48);

	if (t10 != 180LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x49 = 3U;
	static uint64_t x50 = UINT64_MAX;
	static volatile int32_t x51 = INT32_MAX;
	int32_t x52 = -23;
	uint64_t t11 = 3202583078947LLU;

	t11 = ((x49-(x50%x51))|x52);

	if (t11 != 18446744073709551593LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x53 = 516U;
	int16_t x54 = -32;
	uint64_t x55 = 465790125095LLU;
	uint64_t x56 = UINT64_MAX;
	uint64_t t12 = UINT64_MAX;

	t12 = ((x53-(x54%x55))|x56);

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x58 = INT64_MIN;
	uint64_t x59 = 33457LLU;
	int32_t x60 = INT32_MIN;
	uint64_t t13 = 6334313136352066457LLU;

	t13 = ((x57-(x58%x59))|x60);

	if (t13 != 18446744072167140747LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x61 = INT8_MIN;
	int16_t x63 = 1;
	static int16_t x64 = 2219;
	volatile int32_t t14 = 0;

	t14 = ((x61-(x62%x63))|x64);

	if (t14 != -85) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x65 = 61U;
	uint32_t x66 = 49U;
	int8_t x67 = INT8_MIN;
	uint32_t x68 = 12220848U;
	volatile uint32_t t15 = 6U;

	t15 = ((x65-(x66%x67))|x68);

	if (t15 != 12220860U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x70 = 29940U;
	int16_t x71 = -12;
	volatile uint8_t x72 = UINT8_MAX;
	volatile int32_t t16 = -253;

	t16 = ((x69-(x70%x71))|x72);

	if (t16 != 255) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x74 = INT32_MIN;
	uint32_t x75 = 3282135U;
	uint32_t t17 = 105335036U;

	t17 = ((x73-(x74%x75))|x76);

	if (t17 != 4293999938U) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x77 = 5339406U;
	int64_t x78 = 219565311286914LL;
	volatile uint16_t x79 = 1010U;
	int8_t x80 = -7;
	volatile int64_t t18 = -511342579098LL;

	t18 = ((x77-(x78%x79))|x80);

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = INT16_MIN;
	volatile int16_t x82 = 52;
	int8_t x83 = INT8_MAX;
	int16_t x84 = INT16_MIN;
	volatile int32_t t19 = -11238985;

	t19 = ((x81-(x82%x83))|x84);

	if (t19 != -52) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x87 = INT8_MIN;
	uint16_t x88 = 0U;
	volatile uint32_t t20 = 40U;

	t20 = ((x85-(x86%x87))|x88);

	if (t20 != 4294967168U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x89 = -1LL;
	volatile int64_t x90 = 30060132502364LL;
	volatile int64_t x92 = INT64_MIN;
	int64_t t21 = -5221752463674LL;

	t21 = ((x89-(x90%x91))|x92);

	if (t21 != -30060132502365LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x94 = 32409U;
	static int8_t x95 = INT8_MIN;
	int32_t x96 = -1;
	uint32_t t22 = UINT32_MAX;

	t22 = ((x93-(x94%x95))|x96);

	if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x97 = -7;
	int16_t x98 = 0;
	int64_t x100 = 4198404414718119LL;
	volatile int64_t t23 = 1LL;

	t23 = ((x97-(x98%x99))|x100);

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x101 = 1;
	volatile uint8_t x102 = UINT8_MAX;
	volatile int16_t x103 = INT16_MIN;
	volatile int32_t t24 = 1;

	t24 = ((x101-(x102%x103))|x104);

	if (t24 != -102) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x105 = INT64_MIN;
	int8_t x106 = -1;
	int16_t x107 = INT16_MAX;
	static int8_t x108 = INT8_MIN;
	volatile int64_t t25 = 1LL;

	t25 = ((x105-(x106%x107))|x108);

	if (t25 != -127LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x109 = 28;
	int64_t x110 = -57502LL;
	int64_t x111 = INT64_MIN;
	uint64_t x112 = 14092082905911LLU;
	uint64_t t26 = 11492586428357LLU;

	t26 = ((x109-(x110%x111))|x112);

	if (t26 != 14092082930623LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int32_t x113 = INT32_MAX;
	int64_t x114 = INT64_MIN;
	static int8_t x115 = INT8_MIN;
	static volatile int32_t x116 = -6425253;
	volatile int64_t t27 = -51801845693LL;

	t27 = ((x113-(x114%x115))|x116);

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x121 = -1;
	uint32_t x123 = UINT32_MAX;
	uint64_t x124 = UINT64_MAX;
	volatile uint64_t t28 = UINT64_MAX;

	t28 = ((x121-(x122%x123))|x124);

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x125 = -212LL;
	int16_t x126 = INT16_MIN;
	int64_t x127 = INT64_MIN;
	static int32_t x128 = 64381437;
	int64_t t29 = -40620LL;

	t29 = ((x125-(x126%x127))|x128);

	if (t29 != 64389117LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x129 = INT32_MIN;
	uint16_t x130 = 6473U;
	int32_t x131 = -1;

	t30 = ((x129-(x130%x131))|x132);

	if (t30 != -2147483521) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x133 = INT8_MAX;
	volatile int32_t x134 = INT32_MIN;
	uint8_t x135 = 4U;
	uint16_t x136 = UINT16_MAX;
	int32_t t31 = -45020608;

	t31 = ((x133-(x134%x135))|x136);

	if (t31 != 65535) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x137 = 909615LL;
	static int16_t x139 = INT16_MIN;
	int64_t x140 = INT64_MAX;
	uint64_t t32 = 20996857700LLU;

	t32 = ((x137-(x138%x139))|x140);

	if (t32 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x141 = -1;
	static int16_t x142 = INT16_MIN;
	int16_t x143 = INT16_MIN;
	volatile int32_t t33 = 3;

	t33 = ((x141-(x142%x143))|x144);

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x146 = INT8_MAX;
	volatile uint16_t x148 = UINT16_MAX;
	int64_t t34 = -14106089211520226LL;

	t34 = ((x145-(x146%x147))|x148);

	if (t34 != 65535LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x153 = UINT32_MAX;
	uint16_t x154 = UINT16_MAX;
	volatile uint8_t x155 = UINT8_MAX;
	uint32_t t35 = UINT32_MAX;

	t35 = ((x153-(x154%x155))|x156);

	if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x157 = INT32_MIN;
	static int8_t x159 = -1;
	int64_t x160 = INT64_MIN;
	volatile int64_t t36 = -110501LL;

	t36 = ((x157-(x158%x159))|x160);

	if (t36 != -2147483648LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x161 = 674870U;
	static uint8_t x162 = 0U;
	uint32_t x163 = UINT32_MAX;
	int64_t x164 = INT64_MAX;
	int64_t t37 = INT64_MAX;

	t37 = ((x161-(x162%x163))|x164);

	if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x165 = UINT64_MAX;
	static int32_t x166 = -1;
	uint64_t x167 = 5LLU;
	static int64_t x168 = -1LL;
	volatile uint64_t t38 = UINT64_MAX;

	t38 = ((x165-(x166%x167))|x168);

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int32_t x171 = INT32_MIN;
	volatile int64_t x172 = INT64_MIN;
	volatile int64_t t39 = 15LL;

	t39 = ((x169-(x170%x171))|x172);

	if (t39 != -9223372036854766775LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x173 = INT32_MAX;
	volatile int16_t x174 = 1;
	int8_t x175 = INT8_MAX;
	static int32_t t40 = 7984789;

	t40 = ((x173-(x174%x175))|x176);

	if (t40 != 2147483646) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x177 = 3;
	uint64_t x179 = 9176816341910413LLU;
	volatile uint64_t t41 = 215080738816625094LLU;

	t41 = ((x177-(x178%x179))|x180);

	if (t41 != 18445400847239962901LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x183 = INT16_MIN;
	uint64_t x184 = UINT64_MAX;
	static volatile uint64_t t42 = UINT64_MAX;

	t42 = ((x181-(x182%x183))|x184);

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x188 = -1;
	static int64_t t43 = 7LL;

	t43 = ((x185-(x186%x187))|x188);

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x189 = INT16_MAX;
	int16_t x190 = INT16_MIN;
	int16_t x191 = 4;
	int16_t x192 = INT16_MIN;

	t44 = ((x189-(x190%x191))|x192);

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x193 = UINT32_MAX;
	int8_t x195 = INT8_MAX;
	static int8_t x196 = 1;
	static volatile uint32_t t45 = 122U;

	t45 = ((x193-(x194%x195))|x196);

	if (t45 != 4294967293U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x199 = INT64_MIN;
	uint32_t x200 = 2018490195U;
	volatile int64_t t46 = 2LL;

	t46 = ((x197-(x198%x199))|x200);

	if (t46 != 2018508799LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x201 = 0;
	volatile uint32_t x202 = 44889625U;
	static volatile uint32_t x203 = 367195005U;
	uint32_t t47 = 3U;

	t47 = ((x201-(x202%x203))|x204);

	if (t47 != 4294937063U) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x206 = UINT64_MAX;
	uint64_t t48 = 205020275328LLU;

	t48 = ((x205-(x206%x207))|x208);

	if (t48 != 6798933229502LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x209 = 29U;
	uint64_t x210 = 270361020196444210LLU;
	int32_t x211 = INT32_MIN;
	volatile uint8_t x212 = 3U;

	t49 = ((x209-(x210%x211))|x212);

	if (t49 != 18176383053513107435LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int32_t x213 = -1;
	uint64_t x214 = 4028457LLU;
	int64_t x215 = INT64_MIN;
	uint8_t x216 = 1U;
	uint64_t t50 = 8315908LLU;

	t50 = ((x213-(x214%x215))|x216);

	if (t50 != 18446744073705523159LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x217 = -3;
	uint8_t x218 = UINT8_MAX;
	static uint16_t x219 = 1319U;
	uint32_t x220 = 3482249U;
	static uint32_t t51 = 105652U;

	t51 = ((x217-(x218%x219))|x220);

	if (t51 != 4294967039U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x221 = -1LL;
	static int64_t t52 = -946507346134LL;

	t52 = ((x221-(x222%x223))|x224);

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x225 = -1LL;
	int8_t x226 = INT8_MIN;
	static int8_t x227 = INT8_MIN;
	int8_t x228 = INT8_MAX;

	t53 = ((x225-(x226%x227))|x228);

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x230 = -29;
	uint64_t x231 = UINT64_MAX;
	int64_t x232 = -1LL;
	uint64_t t54 = UINT64_MAX;

	t54 = ((x229-(x230%x231))|x232);

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x233 = -1;
	volatile uint16_t x234 = 14875U;
	int64_t x235 = INT64_MIN;
	volatile int8_t x236 = -1;
	int64_t t55 = 44581051084226LL;

	t55 = ((x233-(x234%x235))|x236);

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x242 = 16310965772953LLU;
	static int32_t x243 = INT32_MAX;
	int8_t x244 = -5;
	static volatile uint64_t t56 = UINT64_MAX;

	t56 = ((x241-(x242%x243))|x244);

	if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x245 = 2921291U;
	static uint8_t x246 = UINT8_MAX;
	int64_t x247 = 169LL;
	uint64_t t57 = 6210933693675657LLU;

	t57 = ((x245-(x246%x247))|x248);

	if (t57 != 12460012533LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x249 = -1;
	int16_t x250 = -30;
	static int16_t x251 = 2998;
	int32_t t58 = -24;

	t58 = ((x249-(x250%x251))|x252);

	if (t58 != 1631) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x253 = 0;
	volatile int64_t t59 = -1940312LL;

	t59 = ((x253-(x254%x255))|x256);

	if (t59 != -32768LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x257 = -1;
	static int16_t x258 = -6851;
	volatile int16_t x259 = 15082;
	uint16_t x260 = 77U;
	volatile int32_t t60 = 896547685;

	t60 = ((x257-(x258%x259))|x260);

	if (t60 != 6863) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x261 = UINT32_MAX;
	uint64_t x262 = UINT64_MAX;
	volatile int8_t x263 = INT8_MIN;
	int8_t x264 = INT8_MAX;
	uint64_t t61 = 5387486498LLU;

	t61 = ((x261-(x262%x263))|x264);

	if (t61 != 4294967295LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x265 = 1;
	static int8_t x266 = -18;
	int16_t x267 = INT16_MIN;
	volatile int8_t x268 = 0;
	static volatile int32_t t62 = -117800;

	t62 = ((x265-(x266%x267))|x268);

	if (t62 != 19) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x269 = 13;
	int32_t x271 = INT32_MAX;
	static uint32_t x272 = 6775U;
	volatile uint32_t t63 = 5390U;

	t63 = ((x269-(x270%x271))|x272);

	if (t63 != 6783U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x273 = -1LL;
	uint16_t x274 = 4U;
	int16_t x275 = 1242;
	int32_t x276 = INT32_MAX;
	int64_t t64 = -166170688412LL;

	t64 = ((x273-(x274%x275))|x276);

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x277 = INT16_MIN;
	int16_t x278 = INT16_MIN;
	int64_t x279 = INT64_MIN;
	int16_t x280 = -877;
	int64_t t65 = 212LL;

	t65 = ((x277-(x278%x279))|x280);

	if (t65 != -877LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x281 = -12116163LL;
	uint32_t x282 = UINT32_MAX;
	int32_t x283 = INT32_MIN;
	static int64_t x284 = INT64_MAX;
	volatile int64_t t66 = 4451924276592194527LL;

	t66 = ((x281-(x282%x283))|x284);

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x286 = -1;
	int32_t x287 = INT32_MIN;
	uint32_t x288 = 4036732U;
	static uint32_t t67 = 1955847U;

	t67 = ((x285-(x286%x287))|x288);

	if (t67 != 4036732U) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x289 = INT32_MIN;
	static int32_t x290 = INT32_MAX;
	int64_t x291 = INT64_MAX;
	static int8_t x292 = -1;
	static volatile int64_t t68 = -159646LL;

	t68 = ((x289-(x290%x291))|x292);

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x293 = UINT8_MAX;
	int32_t x294 = -10;
	int32_t x295 = INT32_MIN;
	volatile int32_t t69 = INT32_MAX;

	t69 = ((x293-(x294%x295))|x296);

	if (t69 != INT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x297 = INT32_MIN;
	int8_t x298 = 60;
	uint32_t x299 = UINT32_MAX;
	volatile int8_t x300 = -6;

	t70 = ((x297-(x298%x299))|x300);

	if (t70 != 4294967294U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x302 = UINT64_MAX;
	int32_t x303 = -1;
	uint64_t t71 = 560930LLU;

	t71 = ((x301-(x302%x303))|x304);

	if (t71 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x309 = 241U;
	int16_t x310 = INT16_MAX;
	static int32_t x311 = INT32_MIN;
	int32_t t72 = 12933;

	t72 = ((x309-(x310%x311))|x312);

	if (t72 != -32526) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x313 = -44;
	int32_t x316 = -1;
	static int64_t t73 = 1833692848796511LL;

	t73 = ((x313-(x314%x315))|x316);

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint16_t x317 = 7U;
	volatile uint64_t x318 = 16108LLU;
	uint32_t x319 = UINT32_MAX;
	static uint64_t t74 = UINT64_MAX;

	t74 = ((x317-(x318%x319))|x320);

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x321 = INT16_MIN;
	int8_t x322 = INT8_MIN;
	int16_t x323 = INT16_MIN;
	static int8_t x324 = INT8_MIN;
	int32_t t75 = -7;

	t75 = ((x321-(x322%x323))|x324);

	if (t75 != -128) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x325 = 10;
	uint8_t x326 = UINT8_MAX;
	int16_t x328 = -1;
	volatile int64_t t76 = -459LL;

	t76 = ((x325-(x326%x327))|x328);

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x329 = UINT8_MAX;
	static int8_t x330 = -1;
	int64_t x331 = INT64_MAX;
	int64_t x332 = 954195LL;

	t77 = ((x329-(x330%x331))|x332);

	if (t77 != 954195LL) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int16_t x333 = INT16_MAX;
	uint16_t x334 = 570U;
	uint64_t x335 = UINT64_MAX;
	static uint16_t x336 = 376U;
	volatile uint64_t t78 = 49LLU;

	t78 = ((x333-(x334%x335))|x336);

	if (t78 != 32253LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x337 = -453701;
	int32_t x338 = INT32_MAX;
	int16_t x339 = INT16_MAX;
	int64_t x340 = -1LL;
	volatile int64_t t79 = -197825222LL;

	t79 = ((x337-(x338%x339))|x340);

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x343 = -1LL;
	volatile uint64_t t80 = UINT64_MAX;

	t80 = ((x341-(x342%x343))|x344);

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x345 = -1LL;
	static volatile int8_t x346 = -1;
	static int64_t x347 = INT64_MIN;
	volatile int64_t t81 = -3504577LL;

	t81 = ((x345-(x346%x347))|x348);

	if (t81 != -128LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x349 = 238361256012709634LLU;
	volatile uint32_t x350 = UINT32_MAX;
	int64_t x351 = INT64_MAX;

	t82 = ((x349-(x350%x351))|x352);

	if (t82 != 238361251717742515LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x353 = 10546469;
	volatile int32_t x354 = -12170;
	static volatile uint8_t x356 = UINT8_MAX;
	static volatile int32_t t83 = 3;

	t83 = ((x353-(x354%x355))|x356);

	if (t83 != 10546687) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x357 = INT64_MIN;
	static int8_t x358 = -1;
	static uint16_t x359 = 49U;
	uint8_t x360 = 0U;
	static int64_t t84 = -3387018LL;

	t84 = ((x357-(x358%x359))|x360);

	if (t84 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x377 = 54753339539623LLU;
	int32_t x378 = -1;
	static int32_t x379 = INT32_MAX;
	uint64_t x380 = UINT64_MAX;

	t85 = ((x377-(x378%x379))|x380);

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x381 = UINT8_MAX;
	int64_t x382 = INT64_MIN;
	volatile int16_t x383 = INT16_MIN;
	int16_t x384 = INT16_MAX;
	int64_t t86 = -61884305749515LL;

	t86 = ((x381-(x382%x383))|x384);

	if (t86 != 32767LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x385 = -32585LL;
	int64_t x387 = 3264464LL;
	int32_t x388 = -395611;
	int64_t t87 = 1LL;

	t87 = ((x385-(x386%x387))|x388);

	if (t87 != -2329LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x390 = INT8_MIN;
	int16_t x391 = -1;
	volatile int64_t x392 = INT64_MIN;
	static volatile int64_t t88 = -779173277735760944LL;

	t88 = ((x389-(x390%x391))|x392);

	if (t88 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x394 = 2;
	uint8_t x396 = UINT8_MAX;
	volatile int32_t t89 = -4279;

	t89 = ((x393-(x394%x395))|x396);

	if (t89 != 255) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x397 = 33LL;
	uint32_t x398 = 2659U;
	static int16_t x399 = INT16_MIN;
	volatile int64_t t90 = -441783637626LL;

	t90 = ((x397-(x398%x399))|x400);

	if (t90 != -2LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x402 = -5;
	int16_t x403 = INT16_MIN;
	volatile uint32_t x404 = 15382U;
	uint32_t t91 = 220U;

	t91 = ((x401-(x402%x403))|x404);

	if (t91 != 4294949911U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x405 = 10018LL;
	int8_t x406 = INT8_MIN;
	int64_t x407 = INT64_MAX;
	uint16_t x408 = 6928U;
	int64_t t92 = 16267270LL;

	t92 = ((x405-(x406%x407))|x408);

	if (t92 != 16306LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x409 = 94554544;
	static int32_t x410 = 46503;
	int64_t x411 = -7617408LL;
	int16_t x412 = INT16_MAX;

	t93 = ((x409-(x410%x411))|x412);

	if (t93 != 94535679LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x413 = 105;
	uint8_t x414 = 36U;
	int64_t x415 = 55LL;
	int64_t x416 = -172393LL;
	static int64_t t94 = -135724LL;

	t94 = ((x413-(x414%x415))|x416);

	if (t94 != -172329LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x417 = INT32_MAX;
	int64_t x419 = INT64_MIN;

	t95 = ((x417-(x418%x419))|x420);

	if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x421 = -2;
	int8_t x422 = 1;
	int64_t x423 = INT64_MAX;
	static volatile int32_t x424 = INT32_MIN;
	static int64_t t96 = -4116335881037LL;

	t96 = ((x421-(x422%x423))|x424);

	if (t96 != -3LL) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int8_t x429 = INT8_MIN;
	int16_t x430 = -1;
	volatile int16_t x431 = INT16_MAX;
	int8_t x432 = -2;
	int32_t t97 = 684682;

	t97 = ((x429-(x430%x431))|x432);

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x433 = 10191539262044LL;
	static int64_t x434 = -1010104045552LL;
	int16_t x436 = INT16_MAX;
	int64_t t98 = 32212938643711269LL;

	t98 = ((x433-(x434%x435))|x436);

	if (t98 != 10191539273727LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x437 = INT64_MIN;
	int64_t x438 = INT64_MIN;
	int64_t x439 = INT64_MIN;
	static int8_t x440 = INT8_MIN;
	static volatile int64_t t99 = 1335595160391831LL;

	t99 = ((x437-(x438%x439))|x440);

	if (t99 != -128LL) { NG(); } else { ; }
	
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

