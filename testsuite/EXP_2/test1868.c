#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 1517971;
volatile uint64_t x11 = UINT64_MAX;
int8_t x17 = 3;
static int8_t x19 = INT8_MIN;
int32_t x32 = INT32_MIN;
uint16_t x33 = 291U;
static int32_t x35 = -1;
int32_t t7 = 2992;
static int16_t x48 = 43;
volatile int32_t t9 = -1;
volatile int32_t t10 = -8105;
int8_t x59 = INT8_MIN;
static uint32_t x62 = 105385U;
volatile int16_t x63 = INT16_MAX;
volatile int32_t t12 = 914;
volatile int64_t x68 = INT64_MAX;
uint32_t x75 = 9U;
int8_t x86 = -1;
int8_t x88 = -1;
int8_t x95 = INT8_MAX;
static int32_t t19 = -5923;
volatile int16_t x97 = 372;
int8_t x99 = -1;
volatile int32_t t22 = 7891;
static volatile int8_t x111 = INT8_MAX;
volatile int32_t t23 = -7495;
static volatile int64_t x114 = -1LL;
volatile int64_t x120 = -82484LL;
volatile int32_t t25 = 1;
volatile int32_t t26 = -2420943;
uint8_t x127 = 8U;
static uint16_t x134 = 20820U;
static int8_t x135 = INT8_MIN;
uint16_t x149 = 8945U;
int32_t t33 = -5067511;
int64_t x154 = INT64_MAX;
int32_t x155 = -1;
volatile uint8_t x158 = 47U;
volatile int16_t x163 = -1094;
static uint16_t x170 = UINT16_MAX;
int64_t x171 = INT64_MAX;
static int32_t t38 = 8;
static int32_t x175 = -55;
uint32_t x187 = 724080278U;
uint16_t x201 = 29U;
static volatile int32_t x216 = INT32_MIN;
int8_t x217 = 0;
static int32_t x218 = -1;
uint8_t x219 = UINT8_MAX;
int32_t t47 = 11817;
int32_t x227 = 511532;
int64_t x230 = -778621602694LL;
static int16_t x233 = INT16_MIN;
int32_t t52 = -31;
int8_t x244 = -1;
int16_t x246 = INT16_MIN;
int16_t x247 = -24;
int32_t x248 = -1;
static uint64_t x249 = 110LLU;
static volatile int8_t x255 = 18;
int64_t x260 = 440LL;
static uint16_t x263 = UINT16_MAX;
static volatile int32_t t58 = -63156;
static int8_t x268 = INT8_MIN;
static uint32_t x270 = 128094U;
int8_t x273 = INT8_MAX;
uint32_t x276 = 651066887U;
volatile int8_t x278 = INT8_MAX;
volatile int32_t t62 = -240367309;
volatile int32_t t63 = -36;
int8_t x285 = 20;
volatile int64_t x287 = -1LL;
int16_t x292 = INT16_MIN;
static uint8_t x293 = 57U;
static int64_t x295 = INT64_MIN;
static int32_t x308 = INT32_MIN;
uint8_t x310 = 5U;
uint32_t x314 = UINT32_MAX;
volatile int8_t x316 = -1;
volatile int32_t t70 = -1523;
static int32_t x318 = INT32_MIN;
int64_t x324 = INT64_MIN;
volatile int16_t x335 = INT16_MAX;
static volatile int8_t x338 = -1;
int64_t x346 = -1422265LL;
uint64_t x349 = 1LLU;
int32_t t80 = -214;
uint64_t x361 = UINT64_MAX;
int8_t x364 = INT8_MAX;
static int32_t t83 = 18674;
int64_t x374 = 1LL;
static uint64_t x375 = UINT64_MAX;
int64_t x381 = INT64_MAX;
volatile int32_t t86 = -137;
int32_t x391 = INT32_MIN;
int8_t x397 = INT8_MAX;
int8_t x400 = -1;
int32_t x408 = -1;
uint8_t x416 = UINT8_MAX;
uint32_t x419 = 26458U;
volatile int32_t t92 = -12866;
int64_t x421 = -1817626616951219LL;
int32_t x422 = INT32_MIN;
int64_t x425 = -1LL;
volatile int16_t x427 = INT16_MAX;
int8_t x428 = INT8_MIN;
static int8_t x433 = INT8_MAX;
static int16_t x434 = -336;
volatile int32_t t96 = -115310188;
volatile uint32_t x448 = 44U;
int8_t x452 = -1;


void f0(void) {
	volatile int16_t x5 = INT16_MAX;
	uint16_t x6 = 237U;
	int64_t x7 = -1LL;
	int16_t x8 = -1390;

	t0 = ((x5+(x6|x7))<x8);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = INT8_MIN;
	int8_t x10 = INT8_MAX;
	static volatile int8_t x12 = INT8_MAX;
	static int32_t t1 = -108366916;

	t1 = ((x9+(x10|x11))<x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x13 = INT16_MIN;
	int16_t x14 = 926;
	uint64_t x15 = UINT64_MAX;
	uint64_t x16 = 2354926716LLU;
	int32_t t2 = 2140873;

	t2 = ((x13+(x14|x15))<x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x18 = INT16_MIN;
	uint64_t x20 = UINT64_MAX;
	int32_t t3 = 21;

	t3 = ((x17+(x18|x19))<x20);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x21 = 10670432961LLU;
	uint32_t x22 = UINT32_MAX;
	int32_t x23 = -1013;
	uint32_t x24 = UINT32_MAX;
	volatile int32_t t4 = 7827438;

	t4 = ((x21+(x22|x23))<x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x29 = 547U;
	volatile int64_t x30 = INT64_MIN;
	static volatile int32_t x31 = -16245463;
	volatile int32_t t5 = -112214983;

	t5 = ((x29+(x30|x31))<x32);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x34 = INT8_MIN;
	static int16_t x36 = -1;
	static int32_t t6 = -1;

	t6 = ((x33+(x34|x35))<x36);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = INT16_MIN;
	static uint64_t x38 = UINT64_MAX;
	int32_t x39 = INT32_MIN;
	static int16_t x40 = INT16_MAX;

	t7 = ((x37+(x38|x39))<x40);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x45 = -1;
	static uint8_t x46 = 1U;
	volatile int32_t x47 = INT32_MAX;
	static volatile int32_t t8 = -38412253;

	t8 = ((x45+(x46|x47))<x48);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x49 = 25U;
	uint8_t x50 = 1U;
	volatile uint64_t x51 = UINT64_MAX;
	int8_t x52 = 3;

	t9 = ((x49+(x50|x51))<x52);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x53 = 19281U;
	static int64_t x54 = INT64_MIN;
	uint32_t x55 = 689034U;
	static int8_t x56 = INT8_MIN;

	t10 = ((x53+(x54|x55))<x56);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x57 = INT16_MIN;
	volatile uint8_t x58 = UINT8_MAX;
	static int32_t x60 = INT32_MIN;
	static int32_t t11 = 773010;

	t11 = ((x57+(x58|x59))<x60);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x61 = -132;
	uint32_t x64 = UINT32_MAX;

	t12 = ((x61+(x62|x63))<x64);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x65 = -3094492491LL;
	int16_t x66 = 0;
	int64_t x67 = INT64_MAX;
	int32_t t13 = -1433787;

	t13 = ((x65+(x66|x67))<x68);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x73 = 56;
	static volatile uint8_t x74 = 6U;
	int16_t x76 = -8074;
	volatile int32_t t14 = 246111528;

	t14 = ((x73+(x74|x75))<x76);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x77 = INT16_MIN;
	volatile int16_t x78 = -1;
	int32_t x79 = -1;
	int16_t x80 = INT16_MAX;
	int32_t t15 = 2110564;

	t15 = ((x77+(x78|x79))<x80);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x81 = UINT32_MAX;
	uint16_t x82 = 2U;
	int8_t x83 = -1;
	int64_t x84 = -1LL;
	volatile int32_t t16 = 86693;

	t16 = ((x81+(x82|x83))<x84);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x85 = -9890282448LL;
	int64_t x87 = INT64_MIN;
	volatile int32_t t17 = 221;

	t17 = ((x85+(x86|x87))<x88);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x89 = INT16_MAX;
	static volatile int16_t x90 = INT16_MAX;
	volatile int16_t x91 = INT16_MIN;
	static int16_t x92 = -1;
	int32_t t18 = -7011168;

	t18 = ((x89+(x90|x91))<x92);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x93 = -7414;
	volatile int16_t x94 = 3;
	int8_t x96 = -1;

	t19 = ((x93+(x94|x95))<x96);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x98 = 1U;
	int32_t x100 = INT32_MIN;
	volatile int32_t t20 = 0;

	t20 = ((x97+(x98|x99))<x100);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x101 = INT32_MIN;
	int32_t x102 = -5822666;
	static uint64_t x103 = 8439148591455LLU;
	volatile int32_t x104 = -1;
	int32_t t21 = -4213248;

	t21 = ((x101+(x102|x103))<x104);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x105 = INT32_MIN;
	uint8_t x106 = UINT8_MAX;
	uint8_t x107 = 2U;
	volatile int32_t x108 = INT32_MIN;

	t22 = ((x105+(x106|x107))<x108);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x109 = -219;
	int16_t x110 = -1;
	static int32_t x112 = INT32_MIN;

	t23 = ((x109+(x110|x111))<x112);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x113 = -1;
	uint8_t x115 = 0U;
	uint16_t x116 = 1U;
	static volatile int32_t t24 = -1457;

	t24 = ((x113+(x114|x115))<x116);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x117 = UINT64_MAX;
	int8_t x118 = INT8_MIN;
	uint64_t x119 = 5869436LLU;

	t25 = ((x117+(x118|x119))<x120);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x121 = -1LL;
	int32_t x122 = -1;
	int8_t x123 = 12;
	uint32_t x124 = UINT32_MAX;

	t26 = ((x121+(x122|x123))<x124);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x125 = 15258278298659022LLU;
	uint64_t x126 = 10212LLU;
	int64_t x128 = INT64_MIN;
	volatile int32_t t27 = 984996;

	t27 = ((x125+(x126|x127))<x128);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int64_t x129 = -2265289232LL;
	uint32_t x130 = 22U;
	int64_t x131 = -1LL;
	int16_t x132 = -6;
	int32_t t28 = -106;

	t28 = ((x129+(x130|x131))<x132);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x133 = 1;
	volatile uint16_t x136 = 2463U;
	volatile int32_t t29 = -240;

	t29 = ((x133+(x134|x135))<x136);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x137 = INT16_MIN;
	volatile uint16_t x138 = 1U;
	static volatile uint32_t x139 = 14U;
	uint8_t x140 = 1U;
	volatile int32_t t30 = 92271;

	t30 = ((x137+(x138|x139))<x140);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x141 = -1;
	int16_t x142 = 6723;
	int8_t x143 = -29;
	static uint8_t x144 = 2U;
	int32_t t31 = 151676;

	t31 = ((x141+(x142|x143))<x144);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x145 = INT16_MIN;
	static int8_t x146 = INT8_MIN;
	int16_t x147 = -1874;
	volatile int64_t x148 = -1LL;
	static int32_t t32 = 490873440;

	t32 = ((x145+(x146|x147))<x148);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x150 = 40LL;
	int16_t x151 = INT16_MIN;
	volatile uint16_t x152 = 2U;

	t33 = ((x149+(x150|x151))<x152);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x153 = UINT32_MAX;
	static volatile int8_t x156 = INT8_MIN;
	volatile int32_t t34 = 2003;

	t34 = ((x153+(x154|x155))<x156);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x157 = INT8_MIN;
	int64_t x159 = -1LL;
	int16_t x160 = INT16_MIN;
	int32_t t35 = 1039540533;

	t35 = ((x157+(x158|x159))<x160);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x161 = -19LL;
	int16_t x162 = -359;
	uint32_t x164 = 7139973U;
	int32_t t36 = -663901;

	t36 = ((x161+(x162|x163))<x164);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x165 = 1646U;
	int16_t x166 = INT16_MAX;
	uint32_t x167 = UINT32_MAX;
	volatile int16_t x168 = -6401;
	int32_t t37 = -164921;

	t37 = ((x165+(x166|x167))<x168);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x169 = 5450324817555424875LLU;
	static int16_t x172 = -2;

	t38 = ((x169+(x170|x171))<x172);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x173 = -2;
	volatile uint16_t x174 = 15407U;
	static int64_t x176 = INT64_MIN;
	int32_t t39 = 64649773;

	t39 = ((x173+(x174|x175))<x176);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x177 = -1;
	int32_t x178 = INT32_MIN;
	int64_t x179 = INT64_MAX;
	int32_t x180 = INT32_MAX;
	volatile int32_t t40 = -261601;

	t40 = ((x177+(x178|x179))<x180);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x181 = -1551553049449LL;
	static int64_t x182 = INT64_MIN;
	static volatile uint64_t x183 = 158619607LLU;
	int16_t x184 = INT16_MIN;
	static volatile int32_t t41 = 644294;

	t41 = ((x181+(x182|x183))<x184);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x185 = 0;
	volatile int64_t x186 = INT64_MIN;
	int32_t x188 = -30;
	int32_t t42 = -324390170;

	t42 = ((x185+(x186|x187))<x188);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x193 = 11749335LL;
	static uint16_t x194 = UINT16_MAX;
	int32_t x195 = INT32_MIN;
	int16_t x196 = 3132;
	int32_t t43 = -1;

	t43 = ((x193+(x194|x195))<x196);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x197 = INT64_MAX;
	int8_t x198 = 14;
	static int64_t x199 = INT64_MIN;
	uint16_t x200 = 344U;
	int32_t t44 = 10527022;

	t44 = ((x197+(x198|x199))<x200);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x202 = INT8_MAX;
	int8_t x203 = INT8_MIN;
	int16_t x204 = 105;
	int32_t t45 = 3692;

	t45 = ((x201+(x202|x203))<x204);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x213 = INT32_MAX;
	static int64_t x214 = -3551298132441691LL;
	int32_t x215 = -447649628;
	int32_t t46 = 103;

	t46 = ((x213+(x214|x215))<x216);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x220 = INT8_MIN;

	t47 = ((x217+(x218|x219))<x220);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x221 = INT32_MIN;
	int32_t x222 = INT32_MIN;
	int64_t x223 = INT64_MAX;
	static volatile int64_t x224 = 238481762512979091LL;
	volatile int32_t t48 = -513;

	t48 = ((x221+(x222|x223))<x224);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x225 = INT8_MAX;
	int32_t x226 = -4604;
	uint32_t x228 = UINT32_MAX;
	int32_t t49 = -196;

	t49 = ((x225+(x226|x227))<x228);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint16_t x229 = UINT16_MAX;
	int16_t x231 = INT16_MAX;
	uint32_t x232 = 328004918U;
	int32_t t50 = 14232;

	t50 = ((x229+(x230|x231))<x232);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x234 = UINT32_MAX;
	uint8_t x235 = 0U;
	static uint8_t x236 = 24U;
	int32_t t51 = -40176;

	t51 = ((x233+(x234|x235))<x236);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x237 = 26992U;
	int64_t x238 = -1LL;
	volatile uint32_t x239 = 253U;
	int8_t x240 = INT8_MAX;

	t52 = ((x237+(x238|x239))<x240);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x241 = 303010LL;
	int8_t x242 = -15;
	static volatile int16_t x243 = 53;
	static volatile int32_t t53 = 423100767;

	t53 = ((x241+(x242|x243))<x244);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x245 = -1;
	volatile int32_t t54 = -10618347;

	t54 = ((x245+(x246|x247))<x248);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x250 = INT8_MAX;
	volatile uint32_t x251 = 7009U;
	int8_t x252 = INT8_MAX;
	volatile int32_t t55 = 3128;

	t55 = ((x249+(x250|x251))<x252);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x253 = -1LL;
	static int8_t x254 = INT8_MAX;
	static int8_t x256 = INT8_MIN;
	int32_t t56 = -5;

	t56 = ((x253+(x254|x255))<x256);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x257 = INT8_MAX;
	int64_t x258 = INT64_MIN;
	int32_t x259 = INT32_MIN;
	volatile int32_t t57 = 2017298;

	t57 = ((x257+(x258|x259))<x260);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x261 = -37796;
	uint64_t x262 = 70494453136722LLU;
	int64_t x264 = INT64_MIN;

	t58 = ((x261+(x262|x263))<x264);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x265 = INT64_MIN;
	uint64_t x266 = UINT64_MAX;
	int32_t x267 = INT32_MIN;
	static volatile int32_t t59 = 1;

	t59 = ((x265+(x266|x267))<x268);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x269 = 882405822092643LLU;
	int8_t x271 = 5;
	int32_t x272 = -29821271;
	volatile int32_t t60 = 747;

	t60 = ((x269+(x270|x271))<x272);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x274 = INT8_MAX;
	static int32_t x275 = 1015504135;
	static volatile int32_t t61 = -9;

	t61 = ((x273+(x274|x275))<x276);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x277 = INT8_MIN;
	static volatile int8_t x279 = 1;
	uint32_t x280 = UINT32_MAX;

	t62 = ((x277+(x278|x279))<x280);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x281 = 1U;
	volatile int16_t x282 = INT16_MIN;
	static int8_t x283 = INT8_MIN;
	uint32_t x284 = UINT32_MAX;

	t63 = ((x281+(x282|x283))<x284);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int16_t x286 = -869;
	uint32_t x288 = 277744U;
	volatile int32_t t64 = -29;

	t64 = ((x285+(x286|x287))<x288);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x289 = -15060;
	int16_t x290 = INT16_MIN;
	int8_t x291 = INT8_MIN;
	int32_t t65 = 1691106;

	t65 = ((x289+(x290|x291))<x292);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x294 = INT64_MIN;
	uint8_t x296 = 37U;
	static int32_t t66 = 0;

	t66 = ((x293+(x294|x295))<x296);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x301 = 3591234533LL;
	uint32_t x302 = 29442U;
	int32_t x303 = -1;
	int64_t x304 = -1LL;
	int32_t t67 = 177;

	t67 = ((x301+(x302|x303))<x304);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x305 = 1;
	int64_t x306 = INT64_MAX;
	int8_t x307 = -1;
	int32_t t68 = -987;

	t68 = ((x305+(x306|x307))<x308);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x309 = 7U;
	int16_t x311 = -2690;
	uint64_t x312 = 414324675351LLU;
	volatile int32_t t69 = -3697420;

	t69 = ((x309+(x310|x311))<x312);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x313 = 0U;
	uint8_t x315 = 0U;

	t70 = ((x313+(x314|x315))<x316);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x317 = INT16_MIN;
	int8_t x319 = INT8_MIN;
	volatile int16_t x320 = INT16_MIN;
	static volatile int32_t t71 = -12748;

	t71 = ((x317+(x318|x319))<x320);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x321 = 1;
	int64_t x322 = INT64_MIN;
	int32_t x323 = -14496;
	int32_t t72 = -23608059;

	t72 = ((x321+(x322|x323))<x324);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x329 = 21765U;
	uint16_t x330 = 312U;
	volatile int8_t x331 = INT8_MIN;
	int64_t x332 = -1LL;
	volatile int32_t t73 = -24682;

	t73 = ((x329+(x330|x331))<x332);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x333 = 37119008;
	int32_t x334 = -450109;
	volatile int8_t x336 = -1;
	int32_t t74 = 60887;

	t74 = ((x333+(x334|x335))<x336);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x337 = 20U;
	static volatile int64_t x339 = INT64_MAX;
	int64_t x340 = INT64_MAX;
	int32_t t75 = -10797156;

	t75 = ((x337+(x338|x339))<x340);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x341 = 2;
	uint16_t x342 = UINT16_MAX;
	uint8_t x343 = 26U;
	int8_t x344 = 0;
	volatile int32_t t76 = -6232;

	t76 = ((x341+(x342|x343))<x344);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x345 = 2010542U;
	volatile uint64_t x347 = 2840421216406858911LLU;
	volatile int8_t x348 = INT8_MIN;
	volatile int32_t t77 = -21;

	t77 = ((x345+(x346|x347))<x348);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x350 = 633U;
	int64_t x351 = -1370487LL;
	volatile int64_t x352 = INT64_MIN;
	int32_t t78 = -157003126;

	t78 = ((x349+(x350|x351))<x352);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x353 = 0U;
	int8_t x354 = -1;
	int32_t x355 = -1;
	uint32_t x356 = 61U;
	int32_t t79 = -389;

	t79 = ((x353+(x354|x355))<x356);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x357 = INT8_MIN;
	static volatile int8_t x358 = -1;
	uint16_t x359 = 2662U;
	static int16_t x360 = INT16_MIN;

	t80 = ((x357+(x358|x359))<x360);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int32_t x362 = INT32_MAX;
	static uint8_t x363 = UINT8_MAX;
	volatile int32_t t81 = 0;

	t81 = ((x361+(x362|x363))<x364);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x365 = INT64_MAX;
	int8_t x366 = INT8_MIN;
	int64_t x367 = -1LL;
	volatile uint32_t x368 = 4U;
	int32_t t82 = 33446;

	t82 = ((x365+(x366|x367))<x368);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x369 = -403797;
	uint8_t x370 = UINT8_MAX;
	volatile int16_t x371 = 4;
	volatile uint32_t x372 = 10U;

	t83 = ((x369+(x370|x371))<x372);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x373 = 6;
	static volatile uint16_t x376 = UINT16_MAX;
	int32_t t84 = -731049895;

	t84 = ((x373+(x374|x375))<x376);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x377 = INT32_MAX;
	int32_t x378 = -1;
	static int16_t x379 = INT16_MIN;
	int16_t x380 = 5973;
	static int32_t t85 = -19;

	t85 = ((x377+(x378|x379))<x380);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x382 = 4272920750LLU;
	static uint8_t x383 = 32U;
	uint16_t x384 = UINT16_MAX;

	t86 = ((x381+(x382|x383))<x384);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x389 = -21919628LL;
	int8_t x390 = 0;
	uint8_t x392 = 25U;
	volatile int32_t t87 = 867;

	t87 = ((x389+(x390|x391))<x392);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x398 = 457412927656193986LL;
	uint64_t x399 = UINT64_MAX;
	int32_t t88 = -201658;

	t88 = ((x397+(x398|x399))<x400);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x401 = 157465U;
	uint64_t x402 = 775600331996715LLU;
	static int32_t x403 = INT32_MAX;
	uint8_t x404 = UINT8_MAX;
	volatile int32_t t89 = -3752062;

	t89 = ((x401+(x402|x403))<x404);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x405 = 0U;
	int64_t x406 = 9390830LL;
	int16_t x407 = INT16_MIN;
	static volatile int32_t t90 = -87;

	t90 = ((x405+(x406|x407))<x408);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x413 = -1LL;
	static uint16_t x414 = UINT16_MAX;
	uint16_t x415 = 0U;
	static volatile int32_t t91 = 120840104;

	t91 = ((x413+(x414|x415))<x416);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x417 = 1119516LLU;
	int8_t x418 = -1;
	int64_t x420 = INT64_MAX;

	t92 = ((x417+(x418|x419))<x420);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint32_t x423 = 13286U;
	int32_t x424 = INT32_MAX;
	int32_t t93 = -9005386;

	t93 = ((x421+(x422|x423))<x424);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x426 = UINT64_MAX;
	volatile int32_t t94 = -942;

	t94 = ((x425+(x426|x427))<x428);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x435 = 139U;
	static uint16_t x436 = 0U;
	int32_t t95 = 185782;

	t95 = ((x433+(x434|x435))<x436);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x437 = -557541982885LL;
	int32_t x438 = -245152158;
	static int32_t x439 = INT32_MIN;
	volatile uint32_t x440 = UINT32_MAX;

	t96 = ((x437+(x438|x439))<x440);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x445 = UINT32_MAX;
	int64_t x446 = INT64_MIN;
	int64_t x447 = -1LL;
	volatile int32_t t97 = -17;

	t97 = ((x445+(x446|x447))<x448);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x449 = 963LLU;
	int8_t x450 = -1;
	int16_t x451 = 3;
	int32_t t98 = -174805757;

	t98 = ((x449+(x450|x451))<x452);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x453 = -2197;
	int8_t x454 = 20;
	uint32_t x455 = 337736177U;
	int8_t x456 = -1;
	int32_t t99 = 873342;

	t99 = ((x453+(x454|x455))<x456);

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

