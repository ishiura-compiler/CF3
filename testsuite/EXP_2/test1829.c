#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x1 = 543251962585LLU;
int32_t t0 = 105;
static int8_t x8 = INT8_MIN;
static uint64_t x9 = UINT64_MAX;
int8_t x12 = 13;
int32_t t2 = -100;
int8_t x13 = INT8_MIN;
static volatile int16_t x14 = INT16_MIN;
static int8_t x15 = INT8_MIN;
int32_t x21 = -1;
int64_t x25 = INT64_MIN;
int8_t x28 = INT8_MIN;
int32_t t8 = 2133566;
uint32_t x48 = 0U;
volatile uint32_t x49 = 2719300U;
static int32_t t13 = -26;
volatile int8_t x64 = INT8_MAX;
int64_t x72 = INT64_MAX;
int32_t t19 = -68370;
int32_t t20 = -97660123;
volatile int8_t x88 = -1;
volatile int8_t x89 = -1;
static int8_t x98 = 4;
int8_t x102 = -7;
int8_t x107 = -1;
int64_t x110 = INT64_MAX;
volatile int64_t x112 = -6670226004018379LL;
int64_t x113 = INT64_MIN;
int32_t x115 = -1717388;
int32_t t28 = -52;
static uint8_t x119 = 20U;
int32_t x126 = INT32_MIN;
volatile int32_t t32 = -1935;
int8_t x136 = 1;
volatile int32_t t33 = 1;
volatile int16_t x139 = 23;
int8_t x146 = INT8_MIN;
static uint32_t x148 = 1U;
int8_t x154 = INT8_MIN;
static uint16_t x157 = 281U;
int32_t x158 = -51154;
int16_t x159 = INT16_MAX;
volatile int32_t t40 = 2;
int32_t t41 = 52655338;
static int32_t x169 = 13;
static int8_t x191 = INT8_MIN;
uint32_t x192 = UINT32_MAX;
volatile int32_t t48 = -25963;
int16_t x199 = 14525;
int32_t x200 = INT32_MIN;
uint64_t x202 = UINT64_MAX;
uint16_t x210 = UINT16_MAX;
int32_t x211 = 201580740;
int32_t x222 = -115942521;
int64_t x228 = 0LL;
int8_t x230 = 31;
int8_t x237 = 1;
uint64_t x241 = 1668939027LLU;
volatile uint16_t x243 = 1980U;
uint32_t x250 = 800676514U;
uint32_t x251 = 1540126U;
int8_t x255 = -1;
uint16_t x257 = 4U;
int64_t x265 = INT64_MAX;
volatile int64_t x266 = -1LL;
uint8_t x268 = 0U;
int16_t x270 = INT16_MIN;
volatile int32_t t67 = -524206;
static uint8_t x276 = 1U;
uint8_t x277 = 0U;
volatile int32_t x281 = 1;
int32_t t70 = -189733;
volatile int8_t x290 = INT8_MIN;
volatile int16_t x308 = INT16_MIN;
volatile uint32_t x311 = UINT32_MAX;
uint16_t x319 = UINT16_MAX;
int64_t x322 = INT64_MIN;
int16_t x328 = -1;
volatile uint16_t x330 = 246U;
static int32_t x337 = INT32_MAX;
uint64_t x340 = 91926356840687426LLU;
int64_t x342 = INT64_MIN;
static int32_t t85 = 130214;
static uint8_t x348 = 3U;
int32_t t87 = 234;
volatile int64_t x353 = 14327526LL;
volatile int8_t x355 = 0;
static volatile int64_t x363 = INT64_MIN;
static uint32_t x368 = 8U;
uint32_t x369 = UINT32_MAX;
static uint64_t x372 = 7515287538906160138LLU;
static int32_t t92 = -741396;
uint64_t x378 = 15031993834609863LLU;
volatile int8_t x381 = -1;
volatile int32_t t96 = -4171880;
int64_t x393 = 959817943LL;
volatile int32_t x396 = -4079352;
uint64_t x400 = 3757LLU;


void f0(void) {
	static int32_t x2 = -29;
	static uint64_t x3 = 419569335LLU;
	int32_t x4 = INT32_MAX;

	t0 = ((x1&(x2&x3))<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	static int64_t x6 = INT64_MIN;
	int8_t x7 = INT8_MIN;
	volatile int32_t t1 = -1;

	t1 = ((x5&(x6&x7))<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x10 = 3698197LLU;
	int16_t x11 = -112;

	t2 = ((x9&(x10&x11))<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x16 = UINT64_MAX;
	static volatile int32_t t3 = -26243;

	t3 = ((x13&(x14&x15))<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = INT8_MIN;
	int16_t x18 = -1;
	static uint8_t x19 = 2U;
	static volatile uint16_t x20 = 0U;
	volatile int32_t t4 = -2820;

	t4 = ((x17&(x18&x19))<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x22 = 1U;
	int32_t x23 = -103;
	int64_t x24 = 455354143192798297LL;
	volatile int32_t t5 = 1;

	t5 = ((x21&(x22&x23))<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int64_t x26 = INT64_MAX;
	int64_t x27 = INT64_MAX;
	int32_t t6 = -14;

	t6 = ((x25&(x26&x27))<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int8_t x29 = INT8_MAX;
	volatile int32_t x30 = -187551074;
	static uint16_t x31 = UINT16_MAX;
	int64_t x32 = INT64_MIN;
	int32_t t7 = -41772958;

	t7 = ((x29&(x30&x31))<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int16_t x33 = INT16_MIN;
	volatile int8_t x34 = INT8_MIN;
	static uint32_t x35 = UINT32_MAX;
	volatile int64_t x36 = INT64_MIN;

	t8 = ((x33&(x34&x35))<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = 0;
	volatile uint8_t x38 = UINT8_MAX;
	int32_t x39 = INT32_MAX;
	uint64_t x40 = 123332750328963217LLU;
	int32_t t9 = 2695686;

	t9 = ((x37&(x38&x39))<x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int8_t x41 = -38;
	static int16_t x42 = INT16_MIN;
	int8_t x43 = 1;
	int8_t x44 = INT8_MIN;
	volatile int32_t t10 = 0;

	t10 = ((x41&(x42&x43))<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = -5685;
	uint8_t x46 = UINT8_MAX;
	int64_t x47 = -325280LL;
	static volatile int32_t t11 = -488260;

	t11 = ((x45&(x46&x47))<x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x50 = INT32_MIN;
	int8_t x51 = -1;
	volatile uint32_t x52 = UINT32_MAX;
	int32_t t12 = -1;

	t12 = ((x49&(x50&x51))<x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int64_t x53 = -2LL;
	static int16_t x54 = -1;
	int32_t x55 = INT32_MAX;
	uint16_t x56 = 483U;

	t13 = ((x53&(x54&x55))<x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x57 = 50U;
	int32_t x58 = INT32_MAX;
	int32_t x59 = 5186067;
	volatile int32_t x60 = -51;
	int32_t t14 = -116150;

	t14 = ((x57&(x58&x59))<x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MIN;
	int8_t x62 = -1;
	static uint16_t x63 = UINT16_MAX;
	volatile int32_t t15 = -2;

	t15 = ((x61&(x62&x63))<x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = 92704366868203128LLU;
	int32_t x66 = INT32_MIN;
	int8_t x67 = INT8_MIN;
	volatile int8_t x68 = INT8_MIN;
	volatile int32_t t16 = 3987;

	t16 = ((x65&(x66&x67))<x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 249024638LLU;
	static volatile uint64_t x70 = UINT64_MAX;
	volatile uint8_t x71 = 91U;
	volatile int32_t t17 = -6130;

	t17 = ((x69&(x70&x71))<x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = -1108;
	static int8_t x74 = INT8_MIN;
	int16_t x75 = 1;
	static volatile int16_t x76 = -28;
	int32_t t18 = 43050700;

	t18 = ((x73&(x74&x75))<x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x77 = -1;
	int64_t x78 = INT64_MIN;
	int32_t x79 = INT32_MAX;
	uint64_t x80 = 13328095568619933LLU;

	t19 = ((x77&(x78&x79))<x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	int32_t x82 = -1;
	volatile uint64_t x83 = 1074LLU;
	volatile int8_t x84 = 1;

	t20 = ((x81&(x82&x83))<x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = 22638U;
	int16_t x86 = -17;
	int16_t x87 = -21;
	volatile int32_t t21 = -186716183;

	t21 = ((x85&(x86&x87))<x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x90 = 24;
	int16_t x91 = INT16_MAX;
	static int64_t x92 = -16260600927334890LL;
	volatile int32_t t22 = 114;

	t22 = ((x89&(x90&x91))<x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = 23;
	int8_t x94 = INT8_MAX;
	static int8_t x95 = INT8_MIN;
	volatile uint32_t x96 = 7748U;
	static volatile int32_t t23 = -305064;

	t23 = ((x93&(x94&x95))<x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x97 = -355106;
	int64_t x99 = INT64_MAX;
	volatile int8_t x100 = INT8_MIN;
	volatile int32_t t24 = 5382427;

	t24 = ((x97&(x98&x99))<x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x101 = -121;
	int16_t x103 = -1;
	int8_t x104 = 14;
	int32_t t25 = -100048802;

	t25 = ((x101&(x102&x103))<x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int8_t x105 = 0;
	int32_t x106 = 1;
	uint8_t x108 = 0U;
	int32_t t26 = -213208;

	t26 = ((x105&(x106&x107))<x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MIN;
	volatile uint64_t x111 = UINT64_MAX;
	volatile int32_t t27 = 1;

	t27 = ((x109&(x110&x111))<x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x114 = 1185939549884LLU;
	int8_t x116 = 4;

	t28 = ((x113&(x114&x115))<x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = 23;
	volatile uint64_t x118 = UINT64_MAX;
	static uint16_t x120 = UINT16_MAX;
	int32_t t29 = -108;

	t29 = ((x117&(x118&x119))<x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MAX;
	static uint32_t x122 = 892134U;
	uint32_t x123 = 5U;
	int16_t x124 = INT16_MIN;
	int32_t t30 = -116664;

	t30 = ((x121&(x122&x123))<x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = 3161429U;
	static int64_t x127 = -1LL;
	static uint64_t x128 = UINT64_MAX;
	int32_t t31 = 8732;

	t31 = ((x125&(x126&x127))<x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x129 = 1617134061103542396LL;
	static uint16_t x130 = 8229U;
	int32_t x131 = -1;
	int16_t x132 = -1;

	t32 = ((x129&(x130&x131))<x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = -15;
	int64_t x134 = -30830772LL;
	int64_t x135 = 246958035737323LL;

	t33 = ((x133&(x134&x135))<x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MIN;
	int32_t x138 = 1;
	static int8_t x140 = INT8_MIN;
	volatile int32_t t34 = -1;

	t34 = ((x137&(x138&x139))<x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MIN;
	int8_t x142 = INT8_MAX;
	uint64_t x143 = 12525858242941LLU;
	int16_t x144 = INT16_MAX;
	int32_t t35 = 1;

	t35 = ((x141&(x142&x143))<x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MIN;
	int8_t x147 = -1;
	volatile int32_t t36 = 903;

	t36 = ((x145&(x146&x147))<x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = -172189728;
	int16_t x150 = INT16_MAX;
	static uint32_t x151 = 9310U;
	volatile int64_t x152 = INT64_MAX;
	static int32_t t37 = 735;

	t37 = ((x149&(x150&x151))<x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int32_t x153 = 4069;
	int8_t x155 = INT8_MIN;
	volatile uint8_t x156 = 8U;
	volatile int32_t t38 = -2241;

	t38 = ((x153&(x154&x155))<x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x160 = 911605892211831571LL;
	volatile int32_t t39 = 1;

	t39 = ((x157&(x158&x159))<x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = 116U;
	int8_t x162 = INT8_MAX;
	int8_t x163 = INT8_MAX;
	static int64_t x164 = INT64_MIN;

	t40 = ((x161&(x162&x163))<x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = UINT8_MAX;
	int64_t x166 = -1LL;
	int64_t x167 = INT64_MIN;
	volatile uint8_t x168 = 1U;

	t41 = ((x165&(x166&x167))<x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x170 = INT32_MIN;
	int64_t x171 = 50119047001LL;
	static int16_t x172 = INT16_MIN;
	int32_t t42 = -242676;

	t42 = ((x169&(x170&x171))<x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x173 = INT32_MIN;
	volatile int32_t x174 = INT32_MIN;
	int32_t x175 = -25741547;
	uint64_t x176 = 15650LLU;
	volatile int32_t t43 = -9700;

	t43 = ((x173&(x174&x175))<x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = 3642992380LL;
	uint64_t x178 = UINT64_MAX;
	int64_t x179 = 16354348941731LL;
	uint32_t x180 = 58U;
	volatile int32_t t44 = -7;

	t44 = ((x177&(x178&x179))<x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = UINT16_MAX;
	int32_t x182 = INT32_MIN;
	int64_t x183 = 323134691624646LL;
	int32_t x184 = -8;
	int32_t t45 = 8;

	t45 = ((x181&(x182&x183))<x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x185 = 4U;
	uint8_t x186 = 6U;
	uint8_t x187 = 26U;
	int64_t x188 = -1338302224348LL;
	int32_t t46 = 10;

	t46 = ((x185&(x186&x187))<x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x189 = -5827;
	int16_t x190 = INT16_MIN;
	volatile int32_t t47 = -2;

	t47 = ((x189&(x190&x191))<x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x193 = 63U;
	int8_t x194 = INT8_MAX;
	uint16_t x195 = 0U;
	uint16_t x196 = 7U;

	t48 = ((x193&(x194&x195))<x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x197 = 12427245;
	static int16_t x198 = INT16_MIN;
	volatile int32_t t49 = 5473;

	t49 = ((x197&(x198&x199))<x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x201 = INT16_MIN;
	int16_t x203 = -371;
	static int64_t x204 = 323583789LL;
	volatile int32_t t50 = 7106844;

	t50 = ((x201&(x202&x203))<x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x205 = UINT64_MAX;
	int32_t x206 = INT32_MIN;
	static int16_t x207 = INT16_MIN;
	static int32_t x208 = INT32_MAX;
	static volatile int32_t t51 = -372678;

	t51 = ((x205&(x206&x207))<x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = INT16_MIN;
	static volatile uint64_t x212 = 2383679859178107LLU;
	int32_t t52 = -110;

	t52 = ((x209&(x210&x211))<x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x213 = INT64_MAX;
	static volatile int64_t x214 = 258489667801LL;
	int16_t x215 = -1;
	static uint64_t x216 = 516396071647LLU;
	int32_t t53 = 444;

	t53 = ((x213&(x214&x215))<x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x217 = 6U;
	static uint16_t x218 = 1U;
	int8_t x219 = INT8_MIN;
	int64_t x220 = INT64_MIN;
	int32_t t54 = -158693;

	t54 = ((x217&(x218&x219))<x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x221 = -1;
	static int32_t x223 = INT32_MIN;
	volatile uint32_t x224 = UINT32_MAX;
	volatile int32_t t55 = 44022;

	t55 = ((x221&(x222&x223))<x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int32_t x225 = INT32_MIN;
	static volatile uint64_t x226 = UINT64_MAX;
	int16_t x227 = INT16_MIN;
	volatile int32_t t56 = 528809;

	t56 = ((x225&(x226&x227))<x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x229 = UINT32_MAX;
	volatile int16_t x231 = 26;
	volatile uint16_t x232 = UINT16_MAX;
	volatile int32_t t57 = -22621699;

	t57 = ((x229&(x230&x231))<x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x233 = UINT16_MAX;
	uint16_t x234 = 4U;
	int64_t x235 = INT64_MIN;
	int8_t x236 = -1;
	int32_t t58 = -2;

	t58 = ((x233&(x234&x235))<x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x238 = 16U;
	static int8_t x239 = INT8_MIN;
	static volatile int8_t x240 = INT8_MIN;
	volatile int32_t t59 = -513158;

	t59 = ((x237&(x238&x239))<x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x242 = 1U;
	int32_t x244 = INT32_MIN;
	int32_t t60 = -1;

	t60 = ((x241&(x242&x243))<x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = INT32_MIN;
	int8_t x246 = -1;
	uint16_t x247 = 53U;
	int32_t x248 = 11524;
	static volatile int32_t t61 = 8338818;

	t61 = ((x245&(x246&x247))<x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = UINT8_MAX;
	int32_t x252 = -1;
	volatile int32_t t62 = -11712542;

	t62 = ((x249&(x250&x251))<x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x253 = UINT32_MAX;
	uint16_t x254 = UINT16_MAX;
	int32_t x256 = 139;
	volatile int32_t t63 = -21;

	t63 = ((x253&(x254&x255))<x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x258 = INT8_MAX;
	int16_t x259 = 1;
	int8_t x260 = -20;
	volatile int32_t t64 = -524838433;

	t64 = ((x257&(x258&x259))<x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = 453;
	int32_t x262 = INT32_MIN;
	uint64_t x263 = 2397569122234951639LLU;
	volatile uint16_t x264 = 1U;
	volatile int32_t t65 = -1;

	t65 = ((x261&(x262&x263))<x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x267 = INT64_MIN;
	int32_t t66 = -1;

	t66 = ((x265&(x266&x267))<x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = -63;
	int32_t x271 = INT32_MIN;
	static int32_t x272 = INT32_MIN;

	t67 = ((x269&(x270&x271))<x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x273 = INT64_MIN;
	int8_t x274 = INT8_MAX;
	volatile int8_t x275 = INT8_MIN;
	static int32_t t68 = -340094059;

	t68 = ((x273&(x274&x275))<x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x278 = 78U;
	int64_t x279 = -1LL;
	int8_t x280 = INT8_MAX;
	int32_t t69 = 20416977;

	t69 = ((x277&(x278&x279))<x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x282 = -4;
	uint16_t x283 = 3U;
	int8_t x284 = -1;

	t70 = ((x281&(x282&x283))<x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x285 = INT64_MIN;
	int8_t x286 = INT8_MAX;
	uint64_t x287 = UINT64_MAX;
	static int32_t x288 = -1;
	volatile int32_t t71 = -432;

	t71 = ((x285&(x286&x287))<x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = 23;
	int8_t x291 = 21;
	uint16_t x292 = UINT16_MAX;
	volatile int32_t t72 = -123;

	t72 = ((x289&(x290&x291))<x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = -3384;
	int8_t x294 = -1;
	uint32_t x295 = 123101U;
	volatile uint16_t x296 = 28020U;
	volatile int32_t t73 = -924082;

	t73 = ((x293&(x294&x295))<x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = INT32_MIN;
	static int8_t x298 = INT8_MIN;
	int64_t x299 = 278658658282105LL;
	static uint64_t x300 = 3944952460224LLU;
	static int32_t t74 = -501;

	t74 = ((x297&(x298&x299))<x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MIN;
	int64_t x302 = -1LL;
	uint8_t x303 = 8U;
	int64_t x304 = INT64_MAX;
	int32_t t75 = 9;

	t75 = ((x301&(x302&x303))<x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = 508LL;
	int16_t x306 = INT16_MAX;
	static int16_t x307 = -284;
	int32_t t76 = 324;

	t76 = ((x305&(x306&x307))<x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = -1LL;
	uint8_t x310 = 1U;
	int64_t x312 = -1LL;
	volatile int32_t t77 = 2;

	t77 = ((x309&(x310&x311))<x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint8_t x313 = 22U;
	volatile uint8_t x314 = 0U;
	int16_t x315 = INT16_MIN;
	volatile int64_t x316 = 5LL;
	int32_t t78 = -133620;

	t78 = ((x313&(x314&x315))<x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint16_t x317 = UINT16_MAX;
	uint8_t x318 = 30U;
	volatile int16_t x320 = INT16_MIN;
	int32_t t79 = 0;

	t79 = ((x317&(x318&x319))<x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = UINT16_MAX;
	volatile int16_t x323 = -1;
	int32_t x324 = INT32_MIN;
	volatile int32_t t80 = -4;

	t80 = ((x321&(x322&x323))<x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = 502674074635862LL;
	volatile uint32_t x326 = UINT32_MAX;
	static int64_t x327 = 3663052110500492998LL;
	int32_t t81 = 2580907;

	t81 = ((x325&(x326&x327))<x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = 2U;
	uint16_t x331 = UINT16_MAX;
	static int64_t x332 = -1LL;
	int32_t t82 = -3387339;

	t82 = ((x329&(x330&x331))<x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = INT32_MAX;
	static int32_t x334 = -770652;
	volatile int32_t x335 = -1;
	uint32_t x336 = UINT32_MAX;
	int32_t t83 = 982;

	t83 = ((x333&(x334&x335))<x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x338 = -1;
	int64_t x339 = 78252017048679LL;
	volatile int32_t t84 = 11215537;

	t84 = ((x337&(x338&x339))<x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x341 = UINT32_MAX;
	int32_t x343 = -65195;
	int64_t x344 = -1LL;

	t85 = ((x341&(x342&x343))<x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x345 = UINT8_MAX;
	int32_t x346 = INT32_MIN;
	uint32_t x347 = UINT32_MAX;
	volatile int32_t t86 = 1;

	t86 = ((x345&(x346&x347))<x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x349 = 3U;
	uint32_t x350 = UINT32_MAX;
	uint64_t x351 = 270214054102676LLU;
	volatile int16_t x352 = 3260;

	t87 = ((x349&(x350&x351))<x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x354 = 15004;
	static int16_t x356 = -1;
	volatile int32_t t88 = 1;

	t88 = ((x353&(x354&x355))<x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = -218786276;
	int8_t x358 = INT8_MIN;
	uint32_t x359 = 162736U;
	int32_t x360 = INT32_MAX;
	volatile int32_t t89 = -5;

	t89 = ((x357&(x358&x359))<x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = -1;
	volatile uint8_t x362 = 3U;
	int8_t x364 = 31;
	static volatile int32_t t90 = 6;

	t90 = ((x361&(x362&x363))<x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = INT16_MAX;
	uint32_t x366 = 24U;
	int8_t x367 = 3;
	volatile int32_t t91 = 132;

	t91 = ((x365&(x366&x367))<x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x370 = INT64_MIN;
	volatile int64_t x371 = -11LL;

	t92 = ((x369&(x370&x371))<x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = INT8_MIN;
	volatile int8_t x374 = 1;
	int16_t x375 = -1;
	int16_t x376 = INT16_MIN;
	volatile int32_t t93 = 1;

	t93 = ((x373&(x374&x375))<x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = 0;
	static volatile int64_t x379 = -1303LL;
	uint16_t x380 = 97U;
	static volatile int32_t t94 = 0;

	t94 = ((x377&(x378&x379))<x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x382 = INT8_MIN;
	int8_t x383 = -1;
	volatile uint32_t x384 = 17U;
	int32_t t95 = -241;

	t95 = ((x381&(x382&x383))<x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = -1;
	uint64_t x386 = 5647LLU;
	volatile uint32_t x387 = UINT32_MAX;
	uint32_t x388 = 821874U;

	t96 = ((x385&(x386&x387))<x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = INT8_MIN;
	int32_t x390 = INT32_MIN;
	int64_t x391 = INT64_MIN;
	int64_t x392 = INT64_MIN;
	int32_t t97 = 21900219;

	t97 = ((x389&(x390&x391))<x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x394 = -2;
	int16_t x395 = 12;
	volatile int32_t t98 = -3;

	t98 = ((x393&(x394&x395))<x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x397 = INT32_MIN;
	int64_t x398 = INT64_MIN;
	int16_t x399 = INT16_MIN;
	volatile int32_t t99 = -152;

	t99 = ((x397&(x398&x399))<x400);

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

