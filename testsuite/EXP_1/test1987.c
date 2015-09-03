#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = INT64_MIN;
uint16_t x3 = 116U;
static int32_t t0 = 2;
int32_t x7 = INT32_MIN;
int8_t x9 = -1;
uint64_t x13 = 5360LLU;
static int8_t x15 = -1;
volatile int32_t t3 = 570607954;
int32_t x27 = -1;
int32_t t6 = -10;
static int32_t x29 = INT32_MAX;
volatile uint8_t x37 = 1U;
static int32_t x38 = INT32_MAX;
int64_t x39 = -1LL;
int16_t x43 = INT16_MIN;
uint32_t x46 = UINT32_MAX;
int16_t x48 = INT16_MIN;
static int64_t x49 = -1LL;
static int32_t x51 = INT32_MIN;
int32_t t15 = -3761;
static volatile int8_t x65 = -1;
int16_t x73 = -1;
uint16_t x78 = 1228U;
volatile uint32_t x82 = 372U;
volatile int32_t t20 = 6122;
volatile int8_t x92 = INT8_MIN;
int8_t x96 = -1;
uint64_t x106 = UINT64_MAX;
static int8_t x111 = -1;
uint16_t x114 = UINT16_MAX;
int64_t x118 = INT64_MIN;
int16_t x123 = -1;
int8_t x124 = INT8_MIN;
uint8_t x127 = 1U;
int64_t x128 = INT64_MIN;
volatile int64_t t31 = -1583641567292LL;
uint64_t x129 = 123602476663715843LLU;
uint16_t x134 = UINT16_MAX;
uint64_t x135 = 1253242435LLU;
int64_t x136 = 0LL;
volatile uint32_t x138 = 3U;
int16_t x146 = INT16_MIN;
volatile int64_t x148 = -1LL;
volatile int8_t x157 = INT8_MIN;
int8_t x162 = INT8_MIN;
int8_t x164 = INT8_MIN;
int16_t x167 = 0;
volatile int64_t x170 = 9550080129394780LL;
uint32_t t43 = 181U;
int16_t x180 = 18;
uint32_t x184 = 29U;
int8_t x186 = INT8_MIN;
volatile uint32_t x194 = UINT32_MAX;
volatile uint32_t x196 = 64060U;
static volatile uint32_t t48 = 6607U;
uint8_t x202 = UINT8_MAX;
volatile int32_t t52 = -266379562;
int64_t x221 = INT64_MIN;
uint32_t x223 = 105884U;
volatile int16_t x225 = 6444;
volatile int32_t t56 = 1532;
volatile int16_t x229 = INT16_MAX;
static uint8_t x230 = UINT8_MAX;
int8_t x234 = -1;
volatile int8_t x237 = -1;
volatile int8_t x238 = 9;
int32_t t59 = 0;
int64_t x246 = INT64_MIN;
int64_t x253 = -1176555064LL;
static volatile int64_t x256 = -1LL;
uint32_t x257 = UINT32_MAX;
static int64_t x270 = INT64_MIN;
int8_t x274 = INT8_MIN;
static int16_t x278 = INT16_MIN;
int32_t x282 = INT32_MAX;
int8_t x292 = 1;
volatile int32_t t72 = -23125;
int32_t x297 = INT32_MIN;
static int16_t x298 = INT16_MIN;
volatile int32_t t74 = -1;
volatile int64_t x305 = INT64_MIN;
static int16_t x311 = 7151;
int16_t x312 = INT16_MIN;
uint8_t x316 = UINT8_MAX;
uint16_t x319 = 246U;
volatile int64_t t79 = 72720LL;
int64_t x329 = INT64_MIN;
int64_t x331 = INT64_MIN;
int16_t x334 = INT16_MIN;
static int64_t t84 = -2002049067582730LL;
volatile uint64_t x350 = 152775878661LLU;
uint16_t x351 = UINT16_MAX;
volatile uint8_t x352 = 53U;
uint8_t x363 = 49U;
uint64_t x373 = UINT64_MAX;
uint64_t x382 = 27504423LLU;
int16_t x384 = INT16_MIN;
static int64_t x386 = INT64_MAX;
int8_t x393 = -3;
uint32_t x394 = UINT32_MAX;
uint64_t x396 = UINT64_MAX;


void f0(void) {
	uint64_t x1 = 263814670441136825LLU;
	uint16_t x4 = 750U;

	t0 = (((x1|x2)<=x3)&x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	int64_t x6 = -3LL;
	static uint64_t x8 = 1559573549LLU;
	volatile uint64_t t1 = 0LLU;

	t1 = (((x5|x6)<=x7)&x8);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x10 = INT32_MAX;
	uint8_t x11 = 104U;
	uint16_t x12 = 14923U;
	static int32_t t2 = 14;

	t2 = (((x9|x10)<=x11)&x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x14 = 0U;
	static int8_t x16 = -7;

	t3 = (((x13|x14)<=x15)&x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = INT8_MAX;
	int64_t x18 = 47917899684LL;
	static int64_t x19 = INT64_MIN;
	volatile uint8_t x20 = 8U;
	int32_t t4 = 3;

	t4 = (((x17|x18)<=x19)&x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 0U;
	static int32_t x22 = -25812;
	uint64_t x23 = 1730642LLU;
	volatile uint8_t x24 = 1U;
	int32_t t5 = 0;

	t5 = (((x21|x22)<=x23)&x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x25 = 15775U;
	int8_t x26 = 3;
	int16_t x28 = -1;

	t6 = (((x25|x26)<=x27)&x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x30 = -8;
	volatile int32_t x31 = 90650596;
	static volatile int16_t x32 = INT16_MAX;
	volatile int32_t t7 = 0;

	t7 = (((x29|x30)<=x31)&x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -34890252790214106LL;
	uint8_t x34 = 3U;
	uint16_t x35 = 236U;
	int64_t x36 = -74432554981292595LL;
	volatile int64_t t8 = 52214442834934LL;

	t8 = (((x33|x34)<=x35)&x36);

	if (t8 != 1LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x40 = -1;
	volatile int32_t t9 = -473028731;

	t9 = (((x37|x38)<=x39)&x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x41 = INT8_MIN;
	volatile int32_t x42 = INT32_MAX;
	static uint8_t x44 = UINT8_MAX;
	int32_t t10 = 63174600;

	t10 = (((x41|x42)<=x43)&x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -4;
	uint16_t x47 = 3U;
	volatile int32_t t11 = -1;

	t11 = (((x45|x46)<=x47)&x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int64_t x50 = -26927033741LL;
	uint8_t x52 = 15U;
	volatile int32_t t12 = -3738950;

	t12 = (((x49|x50)<=x51)&x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MAX;
	int32_t x54 = INT32_MIN;
	uint8_t x55 = 1U;
	int8_t x56 = INT8_MAX;
	static volatile int32_t t13 = -31806541;

	t13 = (((x53|x54)<=x55)&x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 2U;
	static uint32_t x58 = UINT32_MAX;
	volatile uint16_t x59 = 124U;
	int16_t x60 = INT16_MIN;
	int32_t t14 = -19;

	t14 = (((x57|x58)<=x59)&x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x61 = 1296122U;
	volatile int16_t x62 = INT16_MIN;
	static uint16_t x63 = UINT16_MAX;
	volatile int16_t x64 = -1;

	t15 = (((x61|x62)<=x63)&x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x66 = 0U;
	uint64_t x67 = 2803566LLU;
	uint8_t x68 = 127U;
	volatile int32_t t16 = 15841;

	t16 = (((x65|x66)<=x67)&x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -168234437;
	int16_t x70 = 0;
	int64_t x71 = 2493LL;
	uint8_t x72 = 2U;
	int32_t t17 = 138;

	t17 = (((x69|x70)<=x71)&x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x74 = -2;
	int32_t x75 = -1;
	static int8_t x76 = -39;
	static int32_t t18 = -26;

	t18 = (((x73|x74)<=x75)&x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	uint16_t x79 = UINT16_MAX;
	static int32_t x80 = -6593632;
	volatile int32_t t19 = -259762;

	t19 = (((x77|x78)<=x79)&x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -1LL;
	int64_t x83 = INT64_MAX;
	static int16_t x84 = -1;

	t20 = (((x81|x82)<=x83)&x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x85 = 3653098;
	static uint64_t x86 = 374674768183932118LLU;
	int16_t x87 = -1;
	uint8_t x88 = UINT8_MAX;
	int32_t t21 = 8132;

	t21 = (((x85|x86)<=x87)&x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = 3U;
	int64_t x90 = 4855LL;
	int8_t x91 = 60;
	int32_t t22 = 446769866;

	t22 = (((x89|x90)<=x91)&x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MAX;
	static volatile uint64_t x94 = UINT64_MAX;
	volatile int8_t x95 = 26;
	volatile int32_t t23 = 332308;

	t23 = (((x93|x94)<=x95)&x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MIN;
	int64_t x98 = INT64_MIN;
	int16_t x99 = INT16_MIN;
	int8_t x100 = -1;
	volatile int32_t t24 = 163;

	t24 = (((x97|x98)<=x99)&x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = -1LL;
	volatile int64_t x102 = -1250568930407844LL;
	static int32_t x103 = -168060;
	int16_t x104 = INT16_MAX;
	volatile int32_t t25 = 199345466;

	t25 = (((x101|x102)<=x103)&x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x105 = 171U;
	static int8_t x107 = INT8_MIN;
	int8_t x108 = -1;
	static volatile int32_t t26 = -557538;

	t26 = (((x105|x106)<=x107)&x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 71964838975045LLU;
	static int64_t x110 = INT64_MIN;
	volatile int16_t x112 = INT16_MAX;
	static volatile int32_t t27 = 7598;

	t27 = (((x109|x110)<=x111)&x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = 522425;
	int8_t x115 = -1;
	uint8_t x116 = 3U;
	static volatile int32_t t28 = -261194;

	t28 = (((x113|x114)<=x115)&x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = 429643926617LLU;
	uint16_t x119 = 6100U;
	int64_t x120 = -19487612LL;
	int64_t t29 = 1952568273045172028LL;

	t29 = (((x117|x118)<=x119)&x120);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = 17913367055607LLU;
	volatile int16_t x122 = INT16_MAX;
	int32_t t30 = 14572618;

	t30 = (((x121|x122)<=x123)&x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x125 = 1U;
	int16_t x126 = INT16_MAX;

	t31 = (((x125|x126)<=x127)&x128);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x130 = INT8_MIN;
	int32_t x131 = INT32_MIN;
	static int8_t x132 = INT8_MIN;
	int32_t t32 = -1002491;

	t32 = (((x129|x130)<=x131)&x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = -28;
	static int64_t t33 = 922796LL;

	t33 = (((x133|x134)<=x135)&x136);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MIN;
	volatile int32_t x139 = 9710;
	static volatile uint16_t x140 = 4U;
	volatile int32_t t34 = 393;

	t34 = (((x137|x138)<=x139)&x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = 8U;
	int32_t x142 = -1;
	int16_t x143 = INT16_MAX;
	uint64_t x144 = 178209LLU;
	uint64_t t35 = 177658252888LLU;

	t35 = (((x141|x142)<=x143)&x144);

	if (t35 != 1LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x145 = INT32_MAX;
	static int8_t x147 = -15;
	volatile int64_t t36 = -607553554707982LL;

	t36 = (((x145|x146)<=x147)&x148);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MAX;
	static int32_t x150 = INT32_MIN;
	static int32_t x151 = -1;
	volatile uint8_t x152 = UINT8_MAX;
	static int32_t t37 = 1;

	t37 = (((x149|x150)<=x151)&x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = 4U;
	static int32_t x154 = INT32_MIN;
	static uint8_t x155 = UINT8_MAX;
	static uint64_t x156 = UINT64_MAX;
	static volatile uint64_t t38 = 89LLU;

	t38 = (((x153|x154)<=x155)&x156);

	if (t38 != 1LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x158 = INT32_MIN;
	int16_t x159 = -1;
	int16_t x160 = INT16_MIN;
	static int32_t t39 = -7876734;

	t39 = (((x157|x158)<=x159)&x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = -1;
	volatile int8_t x163 = -37;
	volatile int32_t t40 = 1;

	t40 = (((x161|x162)<=x163)&x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x165 = 2;
	static int16_t x166 = -1;
	static int8_t x168 = 31;
	static int32_t t41 = -221004;

	t41 = (((x165|x166)<=x167)&x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MIN;
	volatile int64_t x171 = -1LL;
	int64_t x172 = -1LL;
	int64_t t42 = -1525544LL;

	t42 = (((x169|x170)<=x171)&x172);

	if (t42 != 1LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x173 = 126U;
	int64_t x174 = INT64_MIN;
	int32_t x175 = -1;
	uint32_t x176 = 29357692U;

	t43 = (((x173|x174)<=x175)&x176);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x177 = -1;
	int64_t x178 = 8443647LL;
	volatile int16_t x179 = INT16_MIN;
	volatile int32_t t44 = 3271;

	t44 = (((x177|x178)<=x179)&x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = 10U;
	int64_t x182 = INT64_MIN;
	int64_t x183 = INT64_MIN;
	uint32_t t45 = 0U;

	t45 = (((x181|x182)<=x183)&x184);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MAX;
	int64_t x187 = -551955799LL;
	uint32_t x188 = UINT32_MAX;
	uint32_t t46 = 4806U;

	t46 = (((x185|x186)<=x187)&x188);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MIN;
	uint32_t x190 = 4516923U;
	int8_t x191 = -26;
	int16_t x192 = 4;
	volatile int32_t t47 = 913701725;

	t47 = (((x189|x190)<=x191)&x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MIN;
	volatile int16_t x195 = -1;

	t48 = (((x193|x194)<=x195)&x196);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = -895;
	static uint32_t x198 = 23009462U;
	uint32_t x199 = UINT32_MAX;
	volatile int8_t x200 = INT8_MAX;
	int32_t t49 = -4;

	t49 = (((x197|x198)<=x199)&x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x201 = -302;
	uint8_t x203 = 23U;
	static uint32_t x204 = 121680U;
	uint32_t t50 = 179572743U;

	t50 = (((x201|x202)<=x203)&x204);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = 637137LLU;
	int16_t x206 = -1;
	int64_t x207 = INT64_MAX;
	volatile int32_t x208 = INT32_MIN;
	volatile int32_t t51 = -8895380;

	t51 = (((x205|x206)<=x207)&x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = 1232;
	uint32_t x210 = 6U;
	int8_t x211 = INT8_MIN;
	int16_t x212 = -1;

	t52 = (((x209|x210)<=x211)&x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x213 = UINT32_MAX;
	static uint32_t x214 = 84924406U;
	volatile uint32_t x215 = UINT32_MAX;
	int32_t x216 = INT32_MAX;
	int32_t t53 = 33314622;

	t53 = (((x213|x214)<=x215)&x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = -1LL;
	uint64_t x218 = 108945LLU;
	int64_t x219 = -1LL;
	int64_t x220 = INT64_MAX;
	int64_t t54 = 2401459831LL;

	t54 = (((x217|x218)<=x219)&x220);

	if (t54 != 1LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x222 = INT16_MAX;
	static uint32_t x224 = UINT32_MAX;
	uint32_t t55 = 169U;

	t55 = (((x221|x222)<=x223)&x224);

	if (t55 != 1U) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int32_t x226 = INT32_MAX;
	static int16_t x227 = INT16_MIN;
	int8_t x228 = INT8_MAX;

	t56 = (((x225|x226)<=x227)&x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x231 = UINT64_MAX;
	int8_t x232 = INT8_MIN;
	volatile int32_t t57 = -20946963;

	t57 = (((x229|x230)<=x231)&x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int16_t x233 = -29;
	uint16_t x235 = 297U;
	uint32_t x236 = UINT32_MAX;
	volatile uint32_t t58 = 2U;

	t58 = (((x233|x234)<=x235)&x236);

	if (t58 != 1U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x239 = 0U;
	volatile uint16_t x240 = 40U;

	t59 = (((x237|x238)<=x239)&x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = 1LL;
	int32_t x242 = INT32_MIN;
	uint64_t x243 = 40120LLU;
	int8_t x244 = INT8_MAX;
	int32_t t60 = -433;

	t60 = (((x241|x242)<=x243)&x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = 5;
	int64_t x247 = 834382061959262LL;
	static uint16_t x248 = 4718U;
	static int32_t t61 = -5;

	t61 = (((x245|x246)<=x247)&x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = -7LL;
	int16_t x250 = INT16_MIN;
	static int8_t x251 = INT8_MIN;
	int32_t x252 = -3;
	volatile int32_t t62 = -3;

	t62 = (((x249|x250)<=x251)&x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x254 = 17;
	int8_t x255 = INT8_MAX;
	static int64_t t63 = -1LL;

	t63 = (((x253|x254)<=x255)&x256);

	if (t63 != 1LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x258 = 23U;
	uint32_t x259 = 2592204U;
	int32_t x260 = 0;
	volatile int32_t t64 = 571263585;

	t64 = (((x257|x258)<=x259)&x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x261 = 1075U;
	int64_t x262 = -137517546613704LL;
	int16_t x263 = INT16_MIN;
	int32_t x264 = 0;
	int32_t t65 = -941718;

	t65 = (((x261|x262)<=x263)&x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = UINT64_MAX;
	int64_t x266 = INT64_MAX;
	int8_t x267 = 17;
	int8_t x268 = -1;
	int32_t t66 = 1045;

	t66 = (((x265|x266)<=x267)&x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x269 = INT64_MIN;
	uint16_t x271 = UINT16_MAX;
	static volatile uint8_t x272 = 1U;
	int32_t t67 = 265718;

	t67 = (((x269|x270)<=x271)&x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = -34809058;
	uint32_t x275 = UINT32_MAX;
	uint32_t x276 = 14438U;
	uint32_t t68 = 1U;

	t68 = (((x273|x274)<=x275)&x276);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x277 = INT64_MIN;
	int32_t x279 = -1337;
	int64_t x280 = -1LL;
	static int64_t t69 = 203900LL;

	t69 = (((x277|x278)<=x279)&x280);

	if (t69 != 1LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x281 = INT64_MIN;
	static int8_t x283 = INT8_MIN;
	uint8_t x284 = UINT8_MAX;
	volatile int32_t t70 = 0;

	t70 = (((x281|x282)<=x283)&x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = -12253LL;
	int8_t x286 = INT8_MIN;
	volatile int8_t x287 = -1;
	int64_t x288 = INT64_MAX;
	int64_t t71 = 15332732LL;

	t71 = (((x285|x286)<=x287)&x288);

	if (t71 != 1LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x289 = INT16_MIN;
	int16_t x290 = INT16_MIN;
	static int64_t x291 = 2605232062732494708LL;

	t72 = (((x289|x290)<=x291)&x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x293 = 5780354U;
	int64_t x294 = -1013094071990991LL;
	uint8_t x295 = 0U;
	volatile int64_t x296 = -1LL;
	static volatile int64_t t73 = -3535807577220460LL;

	t73 = (((x293|x294)<=x295)&x296);

	if (t73 != 1LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x299 = 886U;
	int32_t x300 = 245;

	t74 = (((x297|x298)<=x299)&x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = UINT32_MAX;
	int8_t x302 = 0;
	static int8_t x303 = INT8_MAX;
	int16_t x304 = -1;
	static volatile int32_t t75 = -7487158;

	t75 = (((x301|x302)<=x303)&x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x306 = 60262603LLU;
	int8_t x307 = -1;
	int16_t x308 = 428;
	int32_t t76 = 126315;

	t76 = (((x305|x306)<=x307)&x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = -15;
	static volatile int32_t x310 = INT32_MIN;
	volatile int32_t t77 = -382;

	t77 = (((x309|x310)<=x311)&x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = INT16_MIN;
	uint32_t x314 = 5860803U;
	uint8_t x315 = 123U;
	static int32_t t78 = 13578960;

	t78 = (((x313|x314)<=x315)&x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x317 = 317;
	int8_t x318 = INT8_MIN;
	int64_t x320 = INT64_MIN;

	t79 = (((x317|x318)<=x319)&x320);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = INT16_MIN;
	int32_t x322 = INT32_MAX;
	static int16_t x323 = 61;
	int16_t x324 = -1;
	volatile int32_t t80 = -6358390;

	t80 = (((x321|x322)<=x323)&x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint32_t x325 = 227U;
	static uint32_t x326 = 5986U;
	uint32_t x327 = 154718U;
	static volatile uint32_t x328 = UINT32_MAX;
	volatile uint32_t t81 = 30158U;

	t81 = (((x325|x326)<=x327)&x328);

	if (t81 != 1U) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x330 = 14U;
	static int16_t x332 = -1;
	int32_t t82 = 3191;

	t82 = (((x329|x330)<=x331)&x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x333 = 464;
	int16_t x335 = 2861;
	volatile uint16_t x336 = UINT16_MAX;
	int32_t t83 = 1;

	t83 = (((x333|x334)<=x335)&x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = INT8_MAX;
	int8_t x338 = INT8_MIN;
	int16_t x339 = INT16_MAX;
	int64_t x340 = 332054357723420798LL;

	t84 = (((x337|x338)<=x339)&x340);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x341 = 1;
	int32_t x342 = INT32_MIN;
	uint8_t x343 = 0U;
	uint16_t x344 = 6804U;
	volatile int32_t t85 = 173881898;

	t85 = (((x341|x342)<=x343)&x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = UINT8_MAX;
	int16_t x346 = -1;
	volatile uint16_t x347 = 10346U;
	volatile int8_t x348 = INT8_MAX;
	int32_t t86 = -427557;

	t86 = (((x345|x346)<=x347)&x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = 71703LL;
	volatile int32_t t87 = 0;

	t87 = (((x349|x350)<=x351)&x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MAX;
	int32_t x354 = INT32_MIN;
	int16_t x355 = INT16_MAX;
	int16_t x356 = INT16_MIN;
	int32_t t88 = 12000794;

	t88 = (((x353|x354)<=x355)&x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x357 = UINT8_MAX;
	uint16_t x358 = 0U;
	int32_t x359 = INT32_MIN;
	volatile uint8_t x360 = UINT8_MAX;
	volatile int32_t t89 = 593;

	t89 = (((x357|x358)<=x359)&x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x361 = 1LL;
	uint8_t x362 = 1U;
	int16_t x364 = INT16_MIN;
	int32_t t90 = 4;

	t90 = (((x361|x362)<=x363)&x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x365 = 5LLU;
	static int32_t x366 = -1;
	uint64_t x367 = UINT64_MAX;
	uint32_t x368 = UINT32_MAX;
	volatile uint32_t t91 = 12528915U;

	t91 = (((x365|x366)<=x367)&x368);

	if (t91 != 1U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x369 = INT32_MAX;
	uint64_t x370 = UINT64_MAX;
	uint64_t x371 = 1361436007230044LLU;
	uint8_t x372 = 52U;
	int32_t t92 = -54193;

	t92 = (((x369|x370)<=x371)&x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x374 = INT64_MAX;
	uint64_t x375 = UINT64_MAX;
	int64_t x376 = 83566498LL;
	static int64_t t93 = 1235419LL;

	t93 = (((x373|x374)<=x375)&x376);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = -1;
	int32_t x378 = INT32_MIN;
	int32_t x379 = INT32_MIN;
	volatile uint32_t x380 = UINT32_MAX;
	volatile uint32_t t94 = 191997U;

	t94 = (((x377|x378)<=x379)&x380);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x381 = UINT64_MAX;
	volatile uint8_t x383 = UINT8_MAX;
	volatile int32_t t95 = -924685;

	t95 = (((x381|x382)<=x383)&x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = -1LL;
	uint32_t x387 = 653U;
	static uint16_t x388 = 97U;
	volatile int32_t t96 = 16;

	t96 = (((x385|x386)<=x387)&x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x389 = 3U;
	static int16_t x390 = INT16_MIN;
	uint32_t x391 = 5497325U;
	int64_t x392 = INT64_MIN;
	int64_t t97 = 60082347LL;

	t97 = (((x389|x390)<=x391)&x392);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x395 = INT16_MIN;
	volatile uint64_t t98 = 13056931LLU;

	t98 = (((x393|x394)<=x395)&x396);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = -1;
	static int64_t x398 = INT64_MAX;
	int32_t x399 = -1;
	uint8_t x400 = 115U;
	static volatile int32_t t99 = -54497;

	t99 = (((x397|x398)<=x399)&x400);

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

