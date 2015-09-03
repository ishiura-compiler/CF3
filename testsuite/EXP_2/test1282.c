#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x5 = -1;
volatile uint16_t x6 = 246U;
uint32_t x11 = UINT32_MAX;
volatile int8_t x18 = INT8_MIN;
volatile int8_t x23 = -1;
volatile int16_t x32 = -1;
volatile int32_t t8 = -285958;
int8_t x37 = INT8_MIN;
int8_t x38 = -1;
static int32_t t9 = 24762;
int8_t x42 = INT8_MAX;
int32_t x44 = -1061115230;
static volatile int32_t t10 = -172;
int64_t x45 = INT64_MIN;
volatile int64_t x47 = -47957784969710298LL;
uint64_t x50 = 280340LLU;
static int8_t x56 = -1;
static int32_t x69 = INT32_MIN;
static int32_t x73 = INT32_MIN;
volatile uint16_t x84 = UINT16_MAX;
static uint64_t x85 = UINT64_MAX;
int64_t x86 = INT64_MIN;
int16_t x90 = INT16_MAX;
int16_t x99 = INT16_MAX;
volatile int64_t x100 = INT64_MIN;
static volatile int32_t t24 = 0;
int16_t x104 = -1;
int8_t x105 = INT8_MAX;
int32_t x107 = 1;
uint16_t x110 = UINT16_MAX;
volatile uint64_t x111 = 21LLU;
uint32_t x115 = UINT32_MAX;
static volatile uint32_t x116 = UINT32_MAX;
uint64_t x117 = UINT64_MAX;
volatile int32_t t29 = 344652643;
int64_t x129 = -1LL;
volatile int64_t x135 = -98073326054258549LL;
int32_t x137 = INT32_MAX;
int64_t x140 = INT64_MIN;
uint16_t x146 = 10587U;
int8_t x148 = INT8_MAX;
int16_t x155 = -1;
uint8_t x162 = 6U;
volatile int32_t t40 = -7268689;
static int64_t x169 = 108123422246500776LL;
int16_t x172 = INT16_MIN;
int32_t t42 = -605512727;
volatile int32_t t43 = -521;
uint64_t x180 = 54415239668422782LLU;
static uint32_t x182 = 20U;
int32_t x188 = INT32_MIN;
int16_t x189 = 2;
int8_t x197 = INT8_MAX;
volatile int64_t x199 = INT64_MIN;
static volatile int32_t t49 = -4;
uint64_t x204 = 24449620LLU;
static volatile int32_t t52 = -242830;
uint32_t x213 = 1278U;
uint8_t x216 = 10U;
static int32_t t53 = -142;
static uint32_t x217 = 1U;
volatile int16_t x221 = INT16_MAX;
uint64_t x224 = UINT64_MAX;
int16_t x226 = 166;
int32_t x237 = -1;
uint8_t x245 = 56U;
volatile int16_t x246 = -1;
int32_t x248 = -1;
int16_t x253 = 1959;
int16_t x262 = INT16_MIN;
int64_t x266 = -1LL;
volatile uint64_t x268 = 3430345LLU;
volatile int32_t t67 = -238;
static int64_t x273 = 1506373272913LL;
volatile int32_t t68 = -58022;
int32_t x284 = INT32_MIN;
uint16_t x292 = 2828U;
int32_t t73 = -128830;
int8_t x297 = -1;
uint64_t x298 = UINT64_MAX;
int32_t x299 = 89608369;
int8_t x308 = INT8_MIN;
volatile int32_t t80 = -27276933;
static int64_t x327 = -261561612338332275LL;
static int32_t x330 = 21333;
uint64_t x336 = 0LLU;
int8_t x338 = INT8_MIN;
int16_t x341 = 7614;
volatile int8_t x345 = INT8_MIN;
int64_t x355 = -818133979061539783LL;
static int16_t x360 = INT16_MAX;
volatile int8_t x366 = 0;
static uint16_t x368 = 78U;
static int32_t t91 = 316457660;
uint32_t x376 = 2470U;
static int32_t x377 = 130;
int8_t x379 = -36;
uint64_t x395 = 135435LLU;
int32_t t98 = 1;
uint64_t x400 = 16482051LLU;
volatile int32_t t99 = 1;


void f0(void) {
	volatile uint16_t x1 = 0U;
	int32_t x2 = -2;
	int16_t x3 = INT16_MIN;
	uint16_t x4 = 3935U;
	int32_t t0 = -2;

	t0 = ((x1==(x2==x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x7 = 8406913LL;
	static int16_t x8 = -185;
	volatile int32_t t1 = -125;

	t1 = ((x5==(x6==x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	int64_t x10 = 234LL;
	int16_t x12 = -2967;
	volatile int32_t t2 = 5;

	t2 = ((x9==(x10==x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	int64_t x14 = INT64_MAX;
	int8_t x15 = INT8_MIN;
	volatile uint8_t x16 = UINT8_MAX;
	static int32_t t3 = -15;

	t3 = ((x13==(x14==x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 4U;
	uint64_t x19 = 16390LLU;
	static int64_t x20 = -104292739151014LL;
	int32_t t4 = -434584;

	t4 = ((x17==(x18==x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MAX;
	int16_t x22 = INT16_MIN;
	int8_t x24 = INT8_MIN;
	volatile int32_t t5 = 657738681;

	t5 = ((x21==(x22==x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint8_t x25 = 0U;
	static volatile uint64_t x26 = 89952LLU;
	volatile uint32_t x27 = 661U;
	int32_t x28 = -4016865;
	int32_t t6 = -25;

	t6 = ((x25==(x26==x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x29 = 1U;
	int64_t x30 = INT64_MAX;
	int16_t x31 = -1;
	int32_t t7 = 225;

	t7 = ((x29==(x30==x31))==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MAX;
	uint64_t x34 = 2554LLU;
	uint16_t x35 = UINT16_MAX;
	int8_t x36 = -1;

	t8 = ((x33==(x34==x35))==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x39 = INT64_MIN;
	int16_t x40 = -13462;

	t9 = ((x37==(x38==x39))==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = -1LL;
	uint32_t x43 = 494992675U;

	t10 = ((x41==(x42==x43))==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x46 = 227496U;
	volatile uint8_t x48 = UINT8_MAX;
	static int32_t t11 = 45;

	t11 = ((x45==(x46==x47))==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x49 = INT16_MIN;
	volatile int64_t x51 = -533884410321657LL;
	uint16_t x52 = 284U;
	volatile int32_t t12 = 35282;

	t12 = ((x49==(x50==x51))==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MAX;
	int8_t x54 = INT8_MIN;
	uint16_t x55 = 4327U;
	int32_t t13 = -27536773;

	t13 = ((x53==(x54==x55))==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MAX;
	int32_t x58 = INT32_MIN;
	int64_t x59 = -236979LL;
	int64_t x60 = INT64_MIN;
	volatile int32_t t14 = 0;

	t14 = ((x57==(x58==x59))==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -1LL;
	int8_t x62 = -1;
	static int32_t x63 = INT32_MIN;
	static int8_t x64 = -7;
	volatile int32_t t15 = 0;

	t15 = ((x61==(x62==x63))==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x65 = 18;
	uint64_t x66 = 8885242129663472LLU;
	int8_t x67 = INT8_MIN;
	int16_t x68 = INT16_MAX;
	volatile int32_t t16 = -405;

	t16 = ((x65==(x66==x67))==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x70 = INT8_MAX;
	int32_t x71 = -1;
	int16_t x72 = -1;
	volatile int32_t t17 = 188076856;

	t17 = ((x69==(x70==x71))==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x74 = -1;
	int32_t x75 = INT32_MIN;
	int64_t x76 = 783098573LL;
	int32_t t18 = -1;

	t18 = ((x73==(x74==x75))==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = -3;
	int32_t x78 = INT32_MAX;
	int8_t x79 = INT8_MIN;
	uint16_t x80 = 103U;
	volatile int32_t t19 = -82734;

	t19 = ((x77==(x78==x79))==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MAX;
	volatile uint32_t x82 = 117U;
	static int8_t x83 = INT8_MIN;
	static int32_t t20 = 216;

	t20 = ((x81==(x82==x83))==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x87 = 54462189U;
	static int32_t x88 = -91;
	int32_t t21 = 51813521;

	t21 = ((x85==(x86==x87))==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x89 = UINT32_MAX;
	int16_t x91 = INT16_MIN;
	uint8_t x92 = 21U;
	volatile int32_t t22 = 1;

	t22 = ((x89==(x90==x91))==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x93 = INT32_MIN;
	int64_t x94 = INT64_MAX;
	static volatile uint64_t x95 = 4LLU;
	int8_t x96 = INT8_MIN;
	volatile int32_t t23 = -409840136;

	t23 = ((x93==(x94==x95))==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = UINT64_MAX;
	int32_t x98 = -120;

	t24 = ((x97==(x98==x99))==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MIN;
	uint32_t x102 = UINT32_MAX;
	static uint64_t x103 = 6145237955LLU;
	volatile int32_t t25 = 5666;

	t25 = ((x101==(x102==x103))==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x106 = UINT8_MAX;
	int8_t x108 = INT8_MIN;
	static volatile int32_t t26 = -1;

	t26 = ((x105==(x106==x107))==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int32_t x109 = INT32_MIN;
	static volatile int64_t x112 = INT64_MAX;
	volatile int32_t t27 = 487;

	t27 = ((x109==(x110==x111))==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = -31;
	uint8_t x114 = 0U;
	static int32_t t28 = -330322313;

	t28 = ((x113==(x114==x115))==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x118 = -1;
	uint32_t x119 = UINT32_MAX;
	uint32_t x120 = 212U;

	t29 = ((x117==(x118==x119))==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x121 = 1U;
	volatile int32_t x122 = INT32_MIN;
	int16_t x123 = INT16_MIN;
	uint64_t x124 = UINT64_MAX;
	int32_t t30 = -1;

	t30 = ((x121==(x122==x123))==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MIN;
	static uint64_t x126 = 3203485896LLU;
	uint8_t x127 = 0U;
	int8_t x128 = -1;
	volatile int32_t t31 = 26768324;

	t31 = ((x125==(x126==x127))==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x130 = UINT32_MAX;
	static uint16_t x131 = 38U;
	static int32_t x132 = INT32_MAX;
	static volatile int32_t t32 = 15228;

	t32 = ((x129==(x130==x131))==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x133 = 3634179019LLU;
	static int8_t x134 = INT8_MIN;
	uint32_t x136 = UINT32_MAX;
	volatile int32_t t33 = 0;

	t33 = ((x133==(x134==x135))==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x138 = UINT16_MAX;
	int16_t x139 = INT16_MIN;
	int32_t t34 = 6426627;

	t34 = ((x137==(x138==x139))==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x141 = 51093;
	volatile int64_t x142 = -44873070911LL;
	static volatile int16_t x143 = INT16_MIN;
	volatile int32_t x144 = 0;
	static volatile int32_t t35 = -42;

	t35 = ((x141==(x142==x143))==x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MIN;
	uint8_t x147 = 0U;
	volatile int32_t t36 = 428141266;

	t36 = ((x145==(x146==x147))==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = 0;
	uint16_t x150 = 3277U;
	static int16_t x151 = INT16_MAX;
	volatile int8_t x152 = -2;
	volatile int32_t t37 = 3;

	t37 = ((x149==(x150==x151))==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = -7;
	uint64_t x154 = 8065982199LLU;
	uint32_t x156 = 114793U;
	volatile int32_t t38 = -29287292;

	t38 = ((x153==(x154==x155))==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = -1LL;
	uint16_t x158 = 3U;
	int32_t x159 = INT32_MIN;
	int64_t x160 = -4990938042110065LL;
	volatile int32_t t39 = -2059475;

	t39 = ((x157==(x158==x159))==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x161 = UINT32_MAX;
	static int32_t x163 = INT32_MAX;
	int8_t x164 = -1;

	t40 = ((x161==(x162==x163))==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = 55U;
	int16_t x166 = -401;
	int64_t x167 = -1LL;
	int64_t x168 = INT64_MIN;
	volatile int32_t t41 = 222838;

	t41 = ((x165==(x166==x167))==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x170 = 13U;
	static int32_t x171 = INT32_MIN;

	t42 = ((x169==(x170==x171))==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = UINT64_MAX;
	int8_t x174 = INT8_MIN;
	int32_t x175 = 13631587;
	static uint64_t x176 = 41885978LLU;

	t43 = ((x173==(x174==x175))==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = -101429033LL;
	int16_t x178 = -28;
	int64_t x179 = INT64_MAX;
	int32_t t44 = -4;

	t44 = ((x177==(x178==x179))==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x181 = INT16_MAX;
	static volatile int64_t x183 = INT64_MIN;
	static int8_t x184 = -1;
	volatile int32_t t45 = -284923;

	t45 = ((x181==(x182==x183))==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = 7639LLU;
	int32_t x186 = INT32_MIN;
	static int64_t x187 = -179838124070LL;
	volatile int32_t t46 = -1;

	t46 = ((x185==(x186==x187))==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x190 = INT64_MAX;
	static int8_t x191 = -1;
	uint32_t x192 = 2U;
	int32_t t47 = -66328047;

	t47 = ((x189==(x190==x191))==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = 5174U;
	int32_t x194 = 3;
	volatile int64_t x195 = -1LL;
	static int64_t x196 = -1LL;
	volatile int32_t t48 = -6;

	t48 = ((x193==(x194==x195))==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x198 = UINT64_MAX;
	static uint32_t x200 = UINT32_MAX;

	t49 = ((x197==(x198==x199))==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x201 = 1U;
	volatile int32_t x202 = INT32_MAX;
	volatile uint32_t x203 = 2157461U;
	volatile int32_t t50 = -8079895;

	t50 = ((x201==(x202==x203))==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x205 = UINT8_MAX;
	static uint64_t x206 = 255966LLU;
	volatile uint8_t x207 = 2U;
	int64_t x208 = INT64_MIN;
	static int32_t t51 = 12419603;

	t51 = ((x205==(x206==x207))==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int8_t x209 = 62;
	int16_t x210 = -1;
	int32_t x211 = INT32_MAX;
	uint64_t x212 = 510973LLU;

	t52 = ((x209==(x210==x211))==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x214 = -1;
	int16_t x215 = INT16_MIN;

	t53 = ((x213==(x214==x215))==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x218 = INT8_MIN;
	int32_t x219 = 0;
	int64_t x220 = 1673606753LL;
	static int32_t t54 = -1300;

	t54 = ((x217==(x218==x219))==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x222 = -1LL;
	uint16_t x223 = 23U;
	volatile int32_t t55 = -1371;

	t55 = ((x221==(x222==x223))==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x225 = INT16_MAX;
	int16_t x227 = INT16_MIN;
	uint32_t x228 = UINT32_MAX;
	int32_t t56 = 1;

	t56 = ((x225==(x226==x227))==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = -40;
	volatile uint8_t x230 = 0U;
	volatile int16_t x231 = -1;
	int32_t x232 = INT32_MAX;
	int32_t t57 = 21;

	t57 = ((x229==(x230==x231))==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x233 = UINT16_MAX;
	volatile int64_t x234 = INT64_MAX;
	int32_t x235 = INT32_MIN;
	int16_t x236 = INT16_MAX;
	int32_t t58 = 180265780;

	t58 = ((x233==(x234==x235))==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x238 = INT64_MIN;
	static int32_t x239 = INT32_MIN;
	volatile int16_t x240 = 1;
	volatile int32_t t59 = -74694;

	t59 = ((x237==(x238==x239))==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x241 = UINT16_MAX;
	static int32_t x242 = -8;
	uint64_t x243 = 622785284LLU;
	int16_t x244 = INT16_MIN;
	volatile int32_t t60 = 71;

	t60 = ((x241==(x242==x243))==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x247 = UINT8_MAX;
	int32_t t61 = -1969;

	t61 = ((x245==(x246==x247))==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x249 = INT32_MIN;
	volatile uint8_t x250 = 48U;
	static uint16_t x251 = 253U;
	volatile uint32_t x252 = UINT32_MAX;
	int32_t t62 = 10820;

	t62 = ((x249==(x250==x251))==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x254 = INT32_MIN;
	int32_t x255 = INT32_MAX;
	int8_t x256 = INT8_MAX;
	volatile int32_t t63 = -146239885;

	t63 = ((x253==(x254==x255))==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MIN;
	uint64_t x258 = 3311567245LLU;
	volatile uint32_t x259 = 14U;
	int32_t x260 = -998588062;
	static int32_t t64 = 6074;

	t64 = ((x257==(x258==x259))==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x261 = UINT16_MAX;
	int16_t x263 = -1;
	volatile uint8_t x264 = 27U;
	int32_t t65 = -201284;

	t65 = ((x261==(x262==x263))==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = INT16_MIN;
	int64_t x267 = INT64_MIN;
	static volatile int32_t t66 = -18659;

	t66 = ((x265==(x266==x267))==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = 3;
	uint16_t x270 = 7219U;
	static int8_t x271 = INT8_MIN;
	uint8_t x272 = UINT8_MAX;

	t67 = ((x269==(x270==x271))==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x274 = -1;
	static volatile int16_t x275 = INT16_MIN;
	uint16_t x276 = 89U;

	t68 = ((x273==(x274==x275))==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x277 = -29521904973LL;
	uint32_t x278 = UINT32_MAX;
	uint64_t x279 = 2LLU;
	int64_t x280 = 49885339721147452LL;
	int32_t t69 = -3731;

	t69 = ((x277==(x278==x279))==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = 59934069659028LL;
	static uint64_t x282 = 31LLU;
	int8_t x283 = -1;
	int32_t t70 = 26;

	t70 = ((x281==(x282==x283))==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x285 = 5686U;
	uint16_t x286 = 357U;
	static uint64_t x287 = UINT64_MAX;
	static volatile int16_t x288 = INT16_MIN;
	volatile int32_t t71 = -1668;

	t71 = ((x285==(x286==x287))==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = INT64_MAX;
	static volatile uint8_t x290 = 16U;
	int8_t x291 = -1;
	static volatile int32_t t72 = 2982;

	t72 = ((x289==(x290==x291))==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = -1;
	uint16_t x294 = UINT16_MAX;
	int64_t x295 = 1202740488689040LL;
	int16_t x296 = INT16_MAX;

	t73 = ((x293==(x294==x295))==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x300 = 302LL;
	int32_t t74 = 3415;

	t74 = ((x297==(x298==x299))==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = INT64_MAX;
	int64_t x302 = INT64_MAX;
	int16_t x303 = -1;
	int64_t x304 = -1LL;
	volatile int32_t t75 = 231731;

	t75 = ((x301==(x302==x303))==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = INT32_MIN;
	int64_t x306 = -552831958LL;
	int32_t x307 = -1;
	volatile int32_t t76 = 3880;

	t76 = ((x305==(x306==x307))==x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x309 = INT8_MIN;
	uint64_t x310 = 1363810819710LLU;
	uint32_t x311 = UINT32_MAX;
	int8_t x312 = INT8_MAX;
	int32_t t77 = 24;

	t77 = ((x309==(x310==x311))==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x313 = 6959243LLU;
	static uint16_t x314 = 0U;
	int16_t x315 = INT16_MIN;
	int32_t x316 = INT32_MIN;
	volatile int32_t t78 = -12;

	t78 = ((x313==(x314==x315))==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = UINT64_MAX;
	int8_t x318 = 1;
	volatile int64_t x319 = INT64_MAX;
	volatile uint8_t x320 = UINT8_MAX;
	static volatile int32_t t79 = 0;

	t79 = ((x317==(x318==x319))==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = 23;
	int16_t x322 = -403;
	uint64_t x323 = 195159517LLU;
	int64_t x324 = INT64_MAX;

	t80 = ((x321==(x322==x323))==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = INT32_MIN;
	uint16_t x326 = 5U;
	volatile uint16_t x328 = 2U;
	volatile int32_t t81 = 30343;

	t81 = ((x325==(x326==x327))==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x329 = INT8_MIN;
	static int8_t x331 = 2;
	int32_t x332 = INT32_MAX;
	static int32_t t82 = -1;

	t82 = ((x329==(x330==x331))==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = 1829;
	static int32_t x334 = INT32_MIN;
	int16_t x335 = -1;
	volatile int32_t t83 = 1;

	t83 = ((x333==(x334==x335))==x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = -1;
	volatile int64_t x339 = INT64_MIN;
	int16_t x340 = INT16_MIN;
	volatile int32_t t84 = 124030;

	t84 = ((x337==(x338==x339))==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int32_t x342 = -1;
	int64_t x343 = 678011044LL;
	int8_t x344 = INT8_MIN;
	volatile int32_t t85 = 199641192;

	t85 = ((x341==(x342==x343))==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x346 = 3903956019419996LLU;
	int32_t x347 = 312;
	int16_t x348 = -13;
	volatile int32_t t86 = -1;

	t86 = ((x345==(x346==x347))==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x349 = INT16_MIN;
	int64_t x350 = -1LL;
	int8_t x351 = -50;
	static int16_t x352 = -3439;
	static int32_t t87 = 465882;

	t87 = ((x349==(x350==x351))==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x353 = INT64_MAX;
	int64_t x354 = INT64_MIN;
	uint16_t x356 = 1020U;
	static volatile int32_t t88 = -145843;

	t88 = ((x353==(x354==x355))==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = -1;
	int16_t x358 = 645;
	uint8_t x359 = UINT8_MAX;
	int32_t t89 = -668;

	t89 = ((x357==(x358==x359))==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = -6051177162LL;
	static int8_t x362 = INT8_MIN;
	int64_t x363 = -1LL;
	int16_t x364 = 1;
	int32_t t90 = 7;

	t90 = ((x361==(x362==x363))==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = INT32_MAX;
	static int8_t x367 = -28;

	t91 = ((x365==(x366==x367))==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = -1LL;
	uint16_t x370 = 26990U;
	volatile int64_t x371 = INT64_MAX;
	uint32_t x372 = 22283U;
	volatile int32_t t92 = 266896854;

	t92 = ((x369==(x370==x371))==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = 10257U;
	uint16_t x374 = 7U;
	int8_t x375 = 14;
	int32_t t93 = -1143449;

	t93 = ((x373==(x374==x375))==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x378 = INT32_MAX;
	static int16_t x380 = 4391;
	int32_t t94 = 1987603;

	t94 = ((x377==(x378==x379))==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = INT64_MIN;
	int64_t x382 = 109049085146520979LL;
	volatile uint32_t x383 = 0U;
	int32_t x384 = -1;
	int32_t t95 = 672;

	t95 = ((x381==(x382==x383))==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x385 = 4U;
	int8_t x386 = -1;
	int32_t x387 = INT32_MIN;
	uint64_t x388 = UINT64_MAX;
	int32_t t96 = 23147969;

	t96 = ((x385==(x386==x387))==x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = INT32_MIN;
	int16_t x390 = -1;
	static uint64_t x391 = 474196430138679LLU;
	int64_t x392 = INT64_MAX;
	volatile int32_t t97 = 100862487;

	t97 = ((x389==(x390==x391))==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x393 = INT16_MIN;
	volatile int8_t x394 = INT8_MIN;
	int64_t x396 = INT64_MIN;

	t98 = ((x393==(x394==x395))==x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = INT32_MIN;
	uint16_t x398 = UINT16_MAX;
	int32_t x399 = -1;

	t99 = ((x397==(x398==x399))==x400);

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

