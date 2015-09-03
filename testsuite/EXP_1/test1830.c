#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x3 = 8U;
int32_t t1 = 0;
int32_t t3 = 29;
int8_t x32 = INT8_MIN;
int64_t x35 = INT64_MAX;
uint64_t x37 = 135832353479211LLU;
static int32_t t10 = -7006788;
int64_t x45 = 22339823952LL;
int64_t x51 = -857LL;
volatile int32_t t12 = 1;
int8_t x53 = INT8_MIN;
int8_t x54 = -14;
uint64_t x64 = UINT64_MAX;
int8_t x68 = INT8_MAX;
int32_t t16 = 1373698;
static int32_t t19 = 364;
int16_t x82 = INT16_MIN;
static int32_t x94 = INT32_MIN;
volatile int64_t x103 = INT64_MIN;
volatile int16_t x106 = -1;
uint64_t x107 = 535792934857LLU;
static uint16_t x112 = 299U;
volatile int32_t t28 = 11129;
int32_t x117 = -217;
int64_t x120 = 59630LL;
static int8_t x137 = 6;
uint8_t x140 = 50U;
int16_t x143 = 6270;
volatile int32_t t35 = 1;
static int64_t x148 = -431198932805926583LL;
static uint16_t x151 = 1U;
int16_t x153 = INT16_MAX;
uint16_t x173 = 2694U;
uint16_t x182 = 1U;
int32_t x183 = INT32_MIN;
static int64_t x190 = INT64_MIN;
volatile int32_t t52 = -235317881;
volatile int32_t t53 = -459158906;
int64_t x218 = 183911301LL;
volatile uint64_t x225 = 494LLU;
int8_t x231 = 49;
uint32_t x233 = 341541U;
volatile int64_t x234 = INT64_MIN;
int16_t x246 = INT16_MIN;
int64_t x254 = 5635948329371LL;
int32_t t63 = 362384;
int64_t x257 = -19740570612766397LL;
int32_t t64 = 289;
int8_t x262 = INT8_MAX;
volatile int8_t x269 = INT8_MIN;
int16_t x273 = INT16_MIN;
int64_t x276 = -1540482456407913LL;
int32_t x284 = 67394;
int16_t x295 = -445;
static int16_t x301 = INT16_MIN;
int32_t x303 = INT32_MIN;
volatile int8_t x305 = -1;
int32_t t76 = 2832;
int32_t x310 = INT32_MIN;
volatile int32_t t77 = -58186520;
uint16_t x313 = 9855U;
static int16_t x316 = INT16_MIN;
int8_t x318 = INT8_MIN;
int32_t t79 = -468993430;
static int64_t x326 = INT64_MIN;
int16_t x327 = INT16_MAX;
volatile int32_t t82 = 37;
static int64_t x334 = INT64_MAX;
static volatile int32_t t83 = 19998605;
static uint8_t x339 = UINT8_MAX;
int32_t x347 = -1;
int8_t x351 = INT8_MAX;
uint16_t x363 = UINT16_MAX;
int64_t x365 = INT64_MIN;
uint32_t x368 = 437832U;
int64_t x373 = INT64_MIN;
static volatile int32_t x374 = 996376;
int32_t t96 = -974302;
int16_t x393 = -1;
uint16_t x397 = UINT16_MAX;


void f0(void) {
	int8_t x1 = -1;
	int8_t x2 = INT8_MIN;
	int8_t x4 = -1;
	volatile int32_t t0 = 1319;

	t0 = (((x1&x2)&x3)<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 303330784U;
	static volatile int32_t x6 = 1720344;
	int8_t x7 = INT8_MIN;
	int16_t x8 = INT16_MIN;

	t1 = (((x5&x6)&x7)<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	uint8_t x10 = 8U;
	uint32_t x11 = 24947403U;
	static int64_t x12 = -1LL;
	int32_t t2 = 43;

	t2 = (((x9&x10)&x11)<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 12936U;
	uint8_t x14 = 1U;
	uint16_t x15 = 7U;
	uint8_t x16 = 3U;

	t3 = (((x13&x14)&x15)<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	volatile int32_t x18 = INT32_MAX;
	int64_t x19 = INT64_MAX;
	volatile int32_t x20 = 69;
	static volatile int32_t t4 = 581467;

	t4 = (((x17&x18)&x19)<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 22316U;
	static int64_t x22 = -98997049LL;
	volatile uint8_t x23 = UINT8_MAX;
	volatile uint64_t x24 = UINT64_MAX;
	int32_t t5 = -1786;

	t5 = (((x21&x22)&x23)<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = INT8_MIN;
	volatile uint8_t x26 = 0U;
	volatile int8_t x27 = INT8_MAX;
	int8_t x28 = INT8_MAX;
	static int32_t t6 = 43;

	t6 = (((x25&x26)&x27)<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -3;
	volatile uint64_t x30 = 473257238LLU;
	uint16_t x31 = 651U;
	volatile int32_t t7 = 3;

	t7 = (((x29&x30)&x31)<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = 94843727;
	static int8_t x34 = 34;
	int16_t x36 = 267;
	volatile int32_t t8 = -129388427;

	t8 = (((x33&x34)&x35)<=x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x38 = INT16_MIN;
	uint8_t x39 = 5U;
	int8_t x40 = -1;
	int32_t t9 = -1;

	t9 = (((x37&x38)&x39)<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -1;
	volatile int16_t x42 = -1;
	uint8_t x43 = 0U;
	int32_t x44 = INT32_MIN;

	t10 = (((x41&x42)&x43)<=x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x46 = 39932;
	static int16_t x47 = INT16_MAX;
	static int32_t x48 = -1;
	static int32_t t11 = 0;

	t11 = (((x45&x46)&x47)<=x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint16_t x49 = 21U;
	int64_t x50 = -2183230824541123LL;
	int32_t x52 = -36214;

	t12 = (((x49&x50)&x51)<=x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x55 = INT16_MIN;
	volatile int8_t x56 = 16;
	volatile int32_t t13 = 1;

	t13 = (((x53&x54)&x55)<=x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MIN;
	volatile uint8_t x58 = 5U;
	uint16_t x59 = 3739U;
	static uint64_t x60 = 4LLU;
	volatile int32_t t14 = -1;

	t14 = (((x57&x58)&x59)<=x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	int32_t x62 = -1;
	uint64_t x63 = 946457229499298063LLU;
	static int32_t t15 = 5526;

	t15 = (((x61&x62)&x63)<=x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MIN;
	volatile int16_t x66 = INT16_MAX;
	volatile int16_t x67 = -2;

	t16 = (((x65&x66)&x67)<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x69 = 732U;
	int64_t x70 = INT64_MIN;
	uint16_t x71 = 2U;
	static int64_t x72 = -1LL;
	volatile int32_t t17 = -785505;

	t17 = (((x69&x70)&x71)<=x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x73 = -1675;
	int16_t x74 = -1;
	uint8_t x75 = 64U;
	uint16_t x76 = 160U;
	int32_t t18 = 248436;

	t18 = (((x73&x74)&x75)<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MAX;
	static int16_t x78 = 75;
	volatile uint32_t x79 = 3826U;
	int16_t x80 = INT16_MIN;

	t19 = (((x77&x78)&x79)<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x81 = 3U;
	static int64_t x83 = INT64_MAX;
	int64_t x84 = INT64_MIN;
	static int32_t t20 = 5349426;

	t20 = (((x81&x82)&x83)<=x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MAX;
	static int64_t x86 = -6LL;
	static int8_t x87 = 0;
	int8_t x88 = 0;
	volatile int32_t t21 = 22334220;

	t21 = (((x85&x86)&x87)<=x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = 23293U;
	static volatile uint32_t x90 = 2041272U;
	int64_t x91 = INT64_MIN;
	static volatile int64_t x92 = INT64_MAX;
	int32_t t22 = -1;

	t22 = (((x89&x90)&x91)<=x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = 27985813U;
	int16_t x95 = -1356;
	volatile uint64_t x96 = 112LLU;
	volatile int32_t t23 = 707;

	t23 = (((x93&x94)&x95)<=x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x97 = 2836U;
	int32_t x98 = INT32_MIN;
	uint8_t x99 = 25U;
	int64_t x100 = -295388801333LL;
	volatile int32_t t24 = -7381;

	t24 = (((x97&x98)&x99)<=x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = 2;
	int16_t x102 = 234;
	int32_t x104 = INT32_MIN;
	static int32_t t25 = -93;

	t25 = (((x101&x102)&x103)<=x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	int8_t x108 = INT8_MIN;
	int32_t t26 = -3516072;

	t26 = (((x105&x106)&x107)<=x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x109 = -1LL;
	volatile int32_t x110 = INT32_MIN;
	volatile int64_t x111 = -4862LL;
	int32_t t27 = -526392210;

	t27 = (((x109&x110)&x111)<=x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MAX;
	int64_t x114 = -13224233438370LL;
	uint64_t x115 = 4418825196189676LLU;
	int64_t x116 = INT64_MAX;

	t28 = (((x113&x114)&x115)<=x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x118 = 0;
	uint32_t x119 = UINT32_MAX;
	volatile int32_t t29 = 74;

	t29 = (((x117&x118)&x119)<=x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x121 = INT16_MIN;
	volatile int16_t x122 = -1;
	int8_t x123 = INT8_MIN;
	int8_t x124 = INT8_MIN;
	volatile int32_t t30 = 189879803;

	t30 = (((x121&x122)&x123)<=x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = 1;
	volatile uint32_t x126 = UINT32_MAX;
	volatile uint16_t x127 = UINT16_MAX;
	int64_t x128 = 139867953306263LL;
	volatile int32_t t31 = -6;

	t31 = (((x125&x126)&x127)<=x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x129 = INT32_MIN;
	static int32_t x130 = INT32_MIN;
	int8_t x131 = INT8_MIN;
	uint64_t x132 = 227LLU;
	volatile int32_t t32 = 501672;

	t32 = (((x129&x130)&x131)<=x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = 8723;
	static int64_t x134 = 4766LL;
	static int8_t x135 = INT8_MIN;
	int32_t x136 = INT32_MIN;
	int32_t t33 = -53;

	t33 = (((x133&x134)&x135)<=x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x138 = 18709738;
	int8_t x139 = INT8_MIN;
	volatile int32_t t34 = -6;

	t34 = (((x137&x138)&x139)<=x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x141 = 964232910;
	static uint32_t x142 = UINT32_MAX;
	uint8_t x144 = 0U;

	t35 = (((x141&x142)&x143)<=x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x145 = UINT8_MAX;
	int64_t x146 = INT64_MIN;
	int32_t x147 = INT32_MAX;
	volatile int32_t t36 = 121;

	t36 = (((x145&x146)&x147)<=x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = -1;
	uint8_t x150 = UINT8_MAX;
	static volatile uint8_t x152 = 14U;
	volatile int32_t t37 = 20322348;

	t37 = (((x149&x150)&x151)<=x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x154 = INT64_MAX;
	int64_t x155 = INT64_MAX;
	static int64_t x156 = -1LL;
	volatile int32_t t38 = -526595;

	t38 = (((x153&x154)&x155)<=x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x157 = -1;
	uint64_t x158 = 675287144280205318LLU;
	static volatile int64_t x159 = INT64_MIN;
	int32_t x160 = INT32_MAX;
	static int32_t t39 = -32677559;

	t39 = (((x157&x158)&x159)<=x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x161 = -5579992981636LL;
	uint8_t x162 = UINT8_MAX;
	int8_t x163 = -1;
	static int64_t x164 = -5814LL;
	int32_t t40 = 548;

	t40 = (((x161&x162)&x163)<=x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = -102707LL;
	static int32_t x166 = INT32_MIN;
	int16_t x167 = 2578;
	int64_t x168 = INT64_MIN;
	volatile int32_t t41 = 1611;

	t41 = (((x165&x166)&x167)<=x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x169 = INT8_MAX;
	volatile uint16_t x170 = 1375U;
	static volatile int16_t x171 = -1;
	static uint32_t x172 = 6U;
	int32_t t42 = 158914858;

	t42 = (((x169&x170)&x171)<=x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x174 = UINT8_MAX;
	int16_t x175 = 1;
	int64_t x176 = INT64_MAX;
	static int32_t t43 = -12704765;

	t43 = (((x173&x174)&x175)<=x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = -1;
	int32_t x178 = INT32_MIN;
	static int16_t x179 = INT16_MIN;
	volatile int16_t x180 = INT16_MAX;
	int32_t t44 = 1;

	t44 = (((x177&x178)&x179)<=x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x181 = INT8_MIN;
	static uint16_t x184 = 15U;
	static volatile int32_t t45 = -15690;

	t45 = (((x181&x182)&x183)<=x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MIN;
	int64_t x186 = INT64_MIN;
	int8_t x187 = INT8_MAX;
	int32_t x188 = INT32_MIN;
	static volatile int32_t t46 = 7;

	t46 = (((x185&x186)&x187)<=x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = 154578118LLU;
	uint64_t x191 = 2276LLU;
	volatile int16_t x192 = INT16_MIN;
	int32_t t47 = 1;

	t47 = (((x189&x190)&x191)<=x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x193 = INT8_MIN;
	int16_t x194 = -122;
	volatile int16_t x195 = INT16_MIN;
	static volatile int32_t x196 = -1;
	static int32_t t48 = 125;

	t48 = (((x193&x194)&x195)<=x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x197 = -1;
	uint64_t x198 = 184270784357503LLU;
	volatile uint32_t x199 = UINT32_MAX;
	volatile int8_t x200 = -11;
	volatile int32_t t49 = -118;

	t49 = (((x197&x198)&x199)<=x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = -1;
	uint64_t x202 = 3302031LLU;
	uint16_t x203 = 8532U;
	int64_t x204 = 125373573814LL;
	volatile int32_t t50 = 13842;

	t50 = (((x201&x202)&x203)<=x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = 1348452400U;
	volatile int16_t x206 = INT16_MIN;
	int16_t x207 = -1;
	volatile int16_t x208 = -118;
	int32_t t51 = 63825;

	t51 = (((x205&x206)&x207)<=x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x209 = INT16_MIN;
	static uint8_t x210 = 12U;
	volatile int8_t x211 = 12;
	static int8_t x212 = INT8_MAX;

	t52 = (((x209&x210)&x211)<=x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = -136;
	volatile uint32_t x214 = 458U;
	static int16_t x215 = 7133;
	static uint8_t x216 = 1U;

	t53 = (((x213&x214)&x215)<=x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MIN;
	static uint16_t x219 = UINT16_MAX;
	int8_t x220 = INT8_MIN;
	volatile int32_t t54 = 5678;

	t54 = (((x217&x218)&x219)<=x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x221 = 10;
	int64_t x222 = 76120928827648LL;
	int8_t x223 = 3;
	uint64_t x224 = 1054905716697LLU;
	volatile int32_t t55 = -411064330;

	t55 = (((x221&x222)&x223)<=x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x226 = INT8_MIN;
	int64_t x227 = -253363741473538LL;
	uint32_t x228 = 1575U;
	volatile int32_t t56 = 2;

	t56 = (((x225&x226)&x227)<=x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x229 = INT64_MIN;
	int64_t x230 = -1LL;
	uint16_t x232 = 0U;
	int32_t t57 = 24;

	t57 = (((x229&x230)&x231)<=x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x235 = 5U;
	int16_t x236 = INT16_MIN;
	int32_t t58 = 5;

	t58 = (((x233&x234)&x235)<=x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = INT8_MIN;
	int16_t x238 = INT16_MIN;
	int32_t x239 = 1458;
	int32_t x240 = INT32_MIN;
	int32_t t59 = -4889187;

	t59 = (((x237&x238)&x239)<=x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x241 = 0U;
	int8_t x242 = -1;
	int64_t x243 = INT64_MIN;
	int32_t x244 = INT32_MIN;
	int32_t t60 = -88575;

	t60 = (((x241&x242)&x243)<=x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = INT16_MAX;
	volatile int32_t x247 = 1222313;
	uint16_t x248 = 870U;
	volatile int32_t t61 = 11829000;

	t61 = (((x245&x246)&x247)<=x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x249 = INT64_MAX;
	int64_t x250 = INT64_MIN;
	uint32_t x251 = 1927573U;
	int64_t x252 = -3507LL;
	volatile int32_t t62 = 1366;

	t62 = (((x249&x250)&x251)<=x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x253 = 15560;
	uint8_t x255 = 58U;
	int16_t x256 = INT16_MAX;

	t63 = (((x253&x254)&x255)<=x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x258 = INT64_MIN;
	static volatile int8_t x259 = -1;
	int8_t x260 = -1;

	t64 = (((x257&x258)&x259)<=x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = -1;
	int32_t x263 = INT32_MAX;
	volatile uint64_t x264 = UINT64_MAX;
	int32_t t65 = 73608;

	t65 = (((x261&x262)&x263)<=x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = 7;
	int16_t x266 = -1;
	uint8_t x267 = 57U;
	int64_t x268 = -1LL;
	static int32_t t66 = -963702383;

	t66 = (((x265&x266)&x267)<=x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x270 = 0U;
	int16_t x271 = 40;
	volatile int16_t x272 = -1;
	static int32_t t67 = 291;

	t67 = (((x269&x270)&x271)<=x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int16_t x274 = -1;
	uint64_t x275 = 362679LLU;
	static int32_t t68 = 1;

	t68 = (((x273&x274)&x275)<=x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = INT8_MIN;
	int64_t x278 = 276302657695867987LL;
	int32_t x279 = -1;
	static volatile int32_t x280 = 529707;
	volatile int32_t t69 = -8947;

	t69 = (((x277&x278)&x279)<=x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x281 = INT64_MIN;
	uint64_t x282 = 21251554612996464LLU;
	uint16_t x283 = UINT16_MAX;
	volatile int32_t t70 = 1;

	t70 = (((x281&x282)&x283)<=x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MIN;
	volatile uint8_t x286 = 1U;
	int64_t x287 = INT64_MIN;
	int64_t x288 = -12087480274270144LL;
	static volatile int32_t t71 = -245;

	t71 = (((x285&x286)&x287)<=x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = -54242LL;
	int32_t x290 = 260;
	int32_t x291 = INT32_MAX;
	int16_t x292 = INT16_MIN;
	static int32_t t72 = -4;

	t72 = (((x289&x290)&x291)<=x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x293 = -56784LL;
	int64_t x294 = INT64_MIN;
	static int8_t x296 = 1;
	static volatile int32_t t73 = -5;

	t73 = (((x293&x294)&x295)<=x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = -29385LL;
	int32_t x298 = INT32_MAX;
	static uint32_t x299 = UINT32_MAX;
	volatile uint32_t x300 = 131307U;
	static int32_t t74 = -804199;

	t74 = (((x297&x298)&x299)<=x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x302 = 1629U;
	int16_t x304 = -1;
	int32_t t75 = -1921948;

	t75 = (((x301&x302)&x303)<=x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x306 = 844U;
	uint8_t x307 = 0U;
	int64_t x308 = -1LL;

	t76 = (((x305&x306)&x307)<=x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = 10400;
	static uint32_t x311 = 1591244684U;
	volatile uint16_t x312 = 15U;

	t77 = (((x309&x310)&x311)<=x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x314 = UINT32_MAX;
	static int16_t x315 = INT16_MIN;
	volatile int32_t t78 = 92328010;

	t78 = (((x313&x314)&x315)<=x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = -1;
	int16_t x319 = INT16_MIN;
	int8_t x320 = INT8_MIN;

	t79 = (((x317&x318)&x319)<=x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x321 = -1;
	int8_t x322 = INT8_MIN;
	int8_t x323 = INT8_MIN;
	int32_t x324 = 329660497;
	volatile int32_t t80 = -198090;

	t80 = (((x321&x322)&x323)<=x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x325 = 16U;
	uint64_t x328 = 305LLU;
	int32_t t81 = -92061;

	t81 = (((x325&x326)&x327)<=x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x329 = INT32_MIN;
	volatile int8_t x330 = INT8_MIN;
	int8_t x331 = INT8_MAX;
	uint16_t x332 = 5U;

	t82 = (((x329&x330)&x331)<=x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x333 = 91848U;
	int16_t x335 = -1;
	static int8_t x336 = INT8_MIN;

	t83 = (((x333&x334)&x335)<=x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x337 = 7815LLU;
	static volatile int64_t x338 = -7239920487756LL;
	uint64_t x340 = 1LLU;
	volatile int32_t t84 = 0;

	t84 = (((x337&x338)&x339)<=x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = -1;
	static int64_t x342 = -2188560344256LL;
	int16_t x343 = -1;
	static int64_t x344 = 988603956066504998LL;
	int32_t t85 = 0;

	t85 = (((x341&x342)&x343)<=x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x345 = -1LL;
	int8_t x346 = INT8_MIN;
	int8_t x348 = -11;
	static volatile int32_t t86 = 15887;

	t86 = (((x345&x346)&x347)<=x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MIN;
	uint16_t x350 = 1925U;
	uint16_t x352 = 24097U;
	int32_t t87 = 194032;

	t87 = (((x349&x350)&x351)<=x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x353 = 1LLU;
	int64_t x354 = -1LL;
	volatile int64_t x355 = -1LL;
	uint16_t x356 = UINT16_MAX;
	int32_t t88 = -39;

	t88 = (((x353&x354)&x355)<=x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = INT16_MIN;
	static uint64_t x358 = UINT64_MAX;
	int8_t x359 = INT8_MIN;
	volatile int8_t x360 = INT8_MAX;
	int32_t t89 = 109237460;

	t89 = (((x357&x358)&x359)<=x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x361 = 185156743081LL;
	static int8_t x362 = INT8_MIN;
	uint16_t x364 = 94U;
	volatile int32_t t90 = 6869893;

	t90 = (((x361&x362)&x363)<=x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x366 = INT32_MIN;
	int8_t x367 = 0;
	volatile int32_t t91 = 0;

	t91 = (((x365&x366)&x367)<=x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = INT64_MAX;
	int8_t x370 = 32;
	int64_t x371 = -1LL;
	int16_t x372 = INT16_MIN;
	int32_t t92 = 4513;

	t92 = (((x369&x370)&x371)<=x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x375 = 1108294449984308298LLU;
	uint8_t x376 = 2U;
	int32_t t93 = 601431313;

	t93 = (((x373&x374)&x375)<=x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint32_t x377 = UINT32_MAX;
	int64_t x378 = 296LL;
	int16_t x379 = INT16_MIN;
	volatile int64_t x380 = INT64_MIN;
	int32_t t94 = 375117921;

	t94 = (((x377&x378)&x379)<=x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = 0;
	volatile int16_t x382 = INT16_MAX;
	volatile uint16_t x383 = 115U;
	int16_t x384 = -1;
	int32_t t95 = -2412166;

	t95 = (((x381&x382)&x383)<=x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x385 = 1;
	int32_t x386 = INT32_MIN;
	volatile uint16_t x387 = 20904U;
	int8_t x388 = 1;

	t96 = (((x385&x386)&x387)<=x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = INT8_MIN;
	int16_t x390 = -328;
	uint8_t x391 = 1U;
	uint32_t x392 = 353766204U;
	static volatile int32_t t97 = 33;

	t97 = (((x389&x390)&x391)<=x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x394 = 98U;
	int8_t x395 = 5;
	volatile int8_t x396 = INT8_MIN;
	volatile int32_t t98 = -28969361;

	t98 = (((x393&x394)&x395)<=x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x398 = INT32_MIN;
	volatile int64_t x399 = -36769177795466LL;
	volatile int64_t x400 = INT64_MAX;
	volatile int32_t t99 = -242;

	t99 = (((x397&x398)&x399)<=x400);

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

