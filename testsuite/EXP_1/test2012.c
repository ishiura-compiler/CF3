#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 3905531;
int32_t x11 = -90846983;
int64_t x14 = INT64_MAX;
int16_t x17 = INT16_MAX;
uint8_t x19 = 93U;
uint64_t x20 = UINT64_MAX;
static volatile int32_t t6 = 56;
int64_t x31 = 119LL;
volatile int64_t x40 = INT64_MAX;
volatile int32_t t9 = -74421;
static int32_t t11 = 0;
static int64_t x49 = INT64_MIN;
uint32_t x55 = 1038U;
static volatile int16_t x71 = INT16_MAX;
volatile int32_t t17 = 973937;
uint16_t x76 = 4U;
static int16_t x78 = INT16_MAX;
uint64_t x82 = UINT64_MAX;
uint64_t x85 = 119319LLU;
int16_t x86 = INT16_MIN;
int32_t t21 = 601458558;
int8_t x91 = INT8_MAX;
volatile int64_t x103 = 18003330685294823LL;
int64_t x105 = 59049748LL;
static volatile int64_t x106 = INT64_MIN;
uint32_t x108 = UINT32_MAX;
uint8_t x117 = UINT8_MAX;
int16_t x122 = -1;
static volatile uint16_t x125 = UINT16_MAX;
int64_t x126 = 0LL;
int16_t x138 = 17;
uint32_t x140 = 3U;
volatile int32_t t34 = 3;
int8_t x146 = -2;
uint8_t x150 = 2U;
static uint64_t x151 = 95LLU;
static int8_t x153 = INT8_MIN;
int8_t x155 = INT8_MIN;
volatile int32_t t38 = -1;
int32_t x160 = 13648;
int16_t x173 = INT16_MIN;
int64_t x183 = INT64_MIN;
volatile uint32_t x187 = 1312537U;
int64_t x190 = INT64_MIN;
static int16_t x191 = INT16_MIN;
int32_t t47 = 54183;
static int64_t x203 = -393153982LL;
uint32_t x206 = 92712424U;
static int64_t x220 = -1LL;
int64_t x223 = -1LL;
uint16_t x227 = 1585U;
static volatile int32_t t56 = 1010;
volatile int32_t t57 = -176084;
int64_t x233 = INT64_MIN;
int32_t x236 = INT32_MIN;
int32_t t58 = -8;
volatile int8_t x251 = 1;
static int16_t x258 = -1;
static int32_t x261 = INT32_MIN;
int32_t x262 = 510459;
static volatile uint8_t x265 = 105U;
int8_t x266 = -1;
int32_t t68 = 414218;
static int32_t x286 = INT32_MAX;
int64_t x292 = INT64_MIN;
int64_t x297 = INT64_MIN;
volatile int32_t x298 = INT32_MIN;
uint32_t x300 = 527014167U;
static volatile int32_t t75 = -2;
uint8_t x308 = 88U;
uint32_t x311 = UINT32_MAX;
int32_t t77 = -10496;
int64_t x314 = -1LL;
int8_t x324 = INT8_MIN;
uint16_t x326 = 1U;
int32_t t81 = 316702;
int16_t x329 = 1;
int8_t x335 = -2;
volatile int32_t t83 = 46576190;
uint64_t x338 = UINT64_MAX;
int8_t x339 = -1;
int64_t x340 = INT64_MIN;
volatile int32_t t84 = 200366;
int16_t x352 = -628;
volatile int8_t x353 = 10;
int8_t x355 = -15;
int32_t t92 = 50713;
int32_t t93 = 0;
uint32_t x391 = 2808U;
static int16_t x392 = -1;
static uint16_t x395 = 14933U;


void f0(void) {
	int32_t x1 = INT32_MAX;
	int8_t x2 = INT8_MIN;
	uint32_t x3 = 5U;
	uint32_t x4 = 27530U;

	t0 = (((x1|x2)|x3)<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 3;
	int8_t x6 = INT8_MIN;
	uint8_t x7 = 13U;
	volatile int32_t x8 = 213096286;
	static volatile int32_t t1 = -494279277;

	t1 = (((x5|x6)|x7)<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	int16_t x10 = INT16_MIN;
	uint64_t x12 = 17151LLU;
	volatile int32_t t2 = -211153;

	t2 = (((x9|x10)|x11)<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = -742694359123150990LL;
	int64_t x15 = -1LL;
	static volatile int8_t x16 = 0;
	static int32_t t3 = -2;

	t3 = (((x13|x14)|x15)<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x18 = UINT64_MAX;
	static int32_t t4 = -6675274;

	t4 = (((x17|x18)|x19)<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	int16_t x22 = -1;
	uint8_t x23 = 28U;
	int32_t x24 = INT32_MIN;
	int32_t t5 = -51;

	t5 = (((x21|x22)|x23)<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = INT8_MIN;
	int8_t x26 = 13;
	static int64_t x27 = -58266639LL;
	static uint16_t x28 = 3818U;

	t6 = (((x25|x26)|x27)<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	int32_t x30 = -32728980;
	int16_t x32 = 60;
	int32_t t7 = -972;

	t7 = (((x29|x30)|x31)<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	static volatile int32_t x34 = -910;
	static int8_t x35 = -1;
	volatile int32_t x36 = INT32_MAX;
	int32_t t8 = 0;

	t8 = (((x33|x34)|x35)<=x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	int16_t x38 = INT16_MIN;
	static volatile int16_t x39 = 3239;

	t9 = (((x37|x38)|x39)<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = 6;
	int8_t x42 = 0;
	static int32_t x43 = -1;
	static int16_t x44 = 4189;
	volatile int32_t t10 = -773540;

	t10 = (((x41|x42)|x43)<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x45 = INT64_MAX;
	uint16_t x46 = 129U;
	int16_t x47 = INT16_MAX;
	static uint64_t x48 = UINT64_MAX;

	t11 = (((x45|x46)|x47)<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x50 = 20U;
	uint16_t x51 = UINT16_MAX;
	int32_t x52 = 1;
	volatile int32_t t12 = -2192933;

	t12 = (((x49|x50)|x51)<=x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = -1;
	volatile int16_t x54 = -1;
	uint16_t x56 = 1680U;
	int32_t t13 = 113;

	t13 = (((x53|x54)|x55)<=x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = UINT16_MAX;
	uint8_t x58 = 11U;
	int32_t x59 = -165417275;
	volatile int16_t x60 = INT16_MIN;
	int32_t t14 = 15;

	t14 = (((x57|x58)|x59)<=x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -14;
	int32_t x62 = 1;
	int16_t x63 = -1;
	volatile int16_t x64 = INT16_MIN;
	static int32_t t15 = -1;

	t15 = (((x61|x62)|x63)<=x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = UINT32_MAX;
	volatile int8_t x66 = -28;
	uint8_t x67 = 12U;
	volatile int16_t x68 = 15387;
	volatile int32_t t16 = 118449;

	t16 = (((x65|x66)|x67)<=x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x69 = 431305393U;
	int64_t x70 = -1LL;
	int16_t x72 = INT16_MAX;

	t17 = (((x69|x70)|x71)<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MIN;
	int64_t x74 = INT64_MAX;
	uint32_t x75 = 8425U;
	int32_t t18 = -19;

	t18 = (((x73|x74)|x75)<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = UINT32_MAX;
	int64_t x79 = 67491411301843692LL;
	uint8_t x80 = 13U;
	volatile int32_t t19 = 774;

	t19 = (((x77|x78)|x79)<=x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = UINT8_MAX;
	int64_t x83 = -1LL;
	int64_t x84 = INT64_MIN;
	int32_t t20 = -930;

	t20 = (((x81|x82)|x83)<=x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x87 = -2;
	uint32_t x88 = 386789U;

	t21 = (((x85|x86)|x87)<=x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = -1;
	static int32_t x90 = -65;
	int32_t x92 = 6977;
	volatile int32_t t22 = -919;

	t22 = (((x89|x90)|x91)<=x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = 32831448LLU;
	volatile uint8_t x94 = 13U;
	int8_t x95 = INT8_MIN;
	uint16_t x96 = 2U;
	volatile int32_t t23 = -1650;

	t23 = (((x93|x94)|x95)<=x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = 7;
	volatile int16_t x98 = 9;
	int64_t x99 = -1LL;
	volatile uint32_t x100 = UINT32_MAX;
	volatile int32_t t24 = -122039;

	t24 = (((x97|x98)|x99)<=x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = 43;
	static int32_t x102 = 34952;
	int16_t x104 = INT16_MIN;
	static int32_t t25 = 0;

	t25 = (((x101|x102)|x103)<=x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x107 = -1;
	int32_t t26 = 36;

	t26 = (((x105|x106)|x107)<=x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x109 = 1626155860286LL;
	volatile uint16_t x110 = 387U;
	int8_t x111 = -1;
	volatile uint8_t x112 = 4U;
	int32_t t27 = -818;

	t27 = (((x109|x110)|x111)<=x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x113 = INT16_MIN;
	uint64_t x114 = 29257670075137LLU;
	int8_t x115 = -1;
	uint8_t x116 = 12U;
	int32_t t28 = -365787445;

	t28 = (((x113|x114)|x115)<=x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x118 = INT8_MAX;
	int16_t x119 = INT16_MAX;
	uint8_t x120 = UINT8_MAX;
	int32_t t29 = 95318867;

	t29 = (((x117|x118)|x119)<=x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MIN;
	static uint32_t x123 = 11U;
	int8_t x124 = 1;
	volatile int32_t t30 = -7;

	t30 = (((x121|x122)|x123)<=x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x127 = -1;
	int32_t x128 = INT32_MIN;
	volatile int32_t t31 = 79333;

	t31 = (((x125|x126)|x127)<=x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = INT16_MIN;
	int16_t x130 = INT16_MIN;
	static volatile uint16_t x131 = 8U;
	int8_t x132 = -22;
	volatile int32_t t32 = -1358;

	t32 = (((x129|x130)|x131)<=x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MIN;
	int64_t x134 = INT64_MIN;
	static uint64_t x135 = UINT64_MAX;
	int64_t x136 = -59423LL;
	int32_t t33 = 669816994;

	t33 = (((x133|x134)|x135)<=x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = -1;
	int64_t x139 = INT64_MIN;

	t34 = (((x137|x138)|x139)<=x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = 3452431LLU;
	int32_t x142 = INT32_MIN;
	int8_t x143 = -1;
	volatile int16_t x144 = -1;
	static int32_t t35 = 1;

	t35 = (((x141|x142)|x143)<=x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = -1;
	int64_t x147 = INT64_MIN;
	static volatile int16_t x148 = INT16_MIN;
	int32_t t36 = -118900;

	t36 = (((x145|x146)|x147)<=x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x149 = 41U;
	int32_t x152 = -1;
	int32_t t37 = 26423259;

	t37 = (((x149|x150)|x151)<=x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x154 = INT16_MIN;
	uint8_t x156 = UINT8_MAX;

	t38 = (((x153|x154)|x155)<=x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MAX;
	volatile uint32_t x158 = UINT32_MAX;
	uint32_t x159 = UINT32_MAX;
	int32_t t39 = -840957706;

	t39 = (((x157|x158)|x159)<=x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = 8033217U;
	static uint16_t x162 = 12U;
	int64_t x163 = -1LL;
	int32_t x164 = -221;
	static volatile int32_t t40 = -1016903;

	t40 = (((x161|x162)|x163)<=x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = -1;
	volatile int64_t x166 = INT64_MAX;
	int8_t x167 = 30;
	uint64_t x168 = 8951023LLU;
	int32_t t41 = 2484;

	t41 = (((x165|x166)|x167)<=x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x169 = INT8_MIN;
	uint32_t x170 = UINT32_MAX;
	static int8_t x171 = INT8_MIN;
	uint16_t x172 = 32U;
	volatile int32_t t42 = -1473;

	t42 = (((x169|x170)|x171)<=x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x174 = INT16_MAX;
	int64_t x175 = INT64_MIN;
	int64_t x176 = INT64_MIN;
	static int32_t t43 = 10;

	t43 = (((x173|x174)|x175)<=x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x177 = INT8_MIN;
	int32_t x178 = INT32_MIN;
	static uint16_t x179 = UINT16_MAX;
	int16_t x180 = 0;
	int32_t t44 = -36349;

	t44 = (((x177|x178)|x179)<=x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = 4986713LLU;
	volatile int32_t x182 = -1791;
	uint16_t x184 = 15355U;
	int32_t t45 = 0;

	t45 = (((x181|x182)|x183)<=x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = -1;
	static uint8_t x186 = 2U;
	int32_t x188 = 7;
	volatile int32_t t46 = -1;

	t46 = (((x185|x186)|x187)<=x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = -7;
	int8_t x192 = INT8_MAX;

	t47 = (((x189|x190)|x191)<=x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = 1217U;
	volatile int8_t x194 = -1;
	uint64_t x195 = 16650259113LLU;
	int64_t x196 = INT64_MIN;
	int32_t t48 = -9547;

	t48 = (((x193|x194)|x195)<=x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x197 = 47U;
	static uint64_t x198 = UINT64_MAX;
	volatile int32_t x199 = INT32_MAX;
	int16_t x200 = INT16_MIN;
	static int32_t t49 = 165172;

	t49 = (((x197|x198)|x199)<=x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x201 = 15711U;
	uint8_t x202 = UINT8_MAX;
	uint16_t x204 = UINT16_MAX;
	volatile int32_t t50 = 1;

	t50 = (((x201|x202)|x203)<=x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = INT8_MIN;
	static volatile int16_t x207 = -13;
	int8_t x208 = -1;
	static volatile int32_t t51 = -2;

	t51 = (((x205|x206)|x207)<=x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x209 = -59LL;
	uint32_t x210 = UINT32_MAX;
	int32_t x211 = -1;
	volatile int16_t x212 = -1;
	volatile int32_t t52 = 3998;

	t52 = (((x209|x210)|x211)<=x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = INT64_MAX;
	int32_t x214 = INT32_MIN;
	uint32_t x215 = 3626905U;
	int16_t x216 = INT16_MIN;
	int32_t t53 = 25;

	t53 = (((x213|x214)|x215)<=x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MIN;
	int16_t x218 = INT16_MIN;
	static uint32_t x219 = UINT32_MAX;
	int32_t t54 = -41;

	t54 = (((x217|x218)|x219)<=x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int8_t x221 = INT8_MAX;
	int32_t x222 = INT32_MAX;
	int16_t x224 = -1;
	static int32_t t55 = 309;

	t55 = (((x221|x222)|x223)<=x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int64_t x225 = 680096022845539533LL;
	int64_t x226 = INT64_MAX;
	int32_t x228 = 5;

	t56 = (((x225|x226)|x227)<=x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x229 = 1;
	int64_t x230 = INT64_MIN;
	static int64_t x231 = INT64_MIN;
	volatile int64_t x232 = INT64_MIN;

	t57 = (((x229|x230)|x231)<=x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int8_t x234 = INT8_MIN;
	int8_t x235 = 0;

	t58 = (((x233|x234)|x235)<=x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x237 = UINT32_MAX;
	int8_t x238 = -3;
	static int32_t x239 = INT32_MIN;
	uint16_t x240 = 78U;
	volatile int32_t t59 = 0;

	t59 = (((x237|x238)|x239)<=x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = INT64_MIN;
	volatile uint16_t x242 = 2760U;
	int16_t x243 = 59;
	int32_t x244 = INT32_MIN;
	volatile int32_t t60 = 75352;

	t60 = (((x241|x242)|x243)<=x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = 0;
	int32_t x246 = INT32_MIN;
	volatile uint16_t x247 = 3U;
	volatile int8_t x248 = 5;
	volatile int32_t t61 = 4263;

	t61 = (((x245|x246)|x247)<=x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = 96;
	static int16_t x250 = 12583;
	volatile uint32_t x252 = UINT32_MAX;
	int32_t t62 = -17842303;

	t62 = (((x249|x250)|x251)<=x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = 23087LL;
	int32_t x254 = 3444;
	int32_t x255 = INT32_MIN;
	volatile uint64_t x256 = 513499959774LLU;
	volatile int32_t t63 = 116;

	t63 = (((x253|x254)|x255)<=x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x257 = 15219243163557LL;
	static volatile int64_t x259 = INT64_MIN;
	int16_t x260 = 177;
	volatile int32_t t64 = 40;

	t64 = (((x257|x258)|x259)<=x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x263 = INT32_MAX;
	int8_t x264 = INT8_MIN;
	volatile int32_t t65 = -168227416;

	t65 = (((x261|x262)|x263)<=x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x267 = INT64_MAX;
	int32_t x268 = -1;
	int32_t t66 = 5755619;

	t66 = (((x265|x266)|x267)<=x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = 0LL;
	uint16_t x270 = UINT16_MAX;
	int8_t x271 = -1;
	volatile int64_t x272 = INT64_MAX;
	volatile int32_t t67 = -2;

	t67 = (((x269|x270)|x271)<=x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MIN;
	uint8_t x274 = UINT8_MAX;
	uint32_t x275 = 126682U;
	int8_t x276 = INT8_MAX;

	t68 = (((x273|x274)|x275)<=x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x277 = 107U;
	static int32_t x278 = -1;
	uint64_t x279 = 128495844789715LLU;
	static int32_t x280 = -1;
	volatile int32_t t69 = 484008;

	t69 = (((x277|x278)|x279)<=x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x281 = UINT32_MAX;
	volatile int64_t x282 = INT64_MIN;
	uint8_t x283 = 0U;
	int16_t x284 = INT16_MAX;
	volatile int32_t t70 = -107;

	t70 = (((x281|x282)|x283)<=x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = UINT64_MAX;
	int32_t x287 = INT32_MIN;
	volatile uint32_t x288 = 342U;
	volatile int32_t t71 = 15;

	t71 = (((x285|x286)|x287)<=x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x289 = INT8_MIN;
	int8_t x290 = INT8_MIN;
	volatile int8_t x291 = INT8_MIN;
	static int32_t t72 = 6745464;

	t72 = (((x289|x290)|x291)<=x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = -1;
	int64_t x294 = INT64_MIN;
	int8_t x295 = 26;
	uint16_t x296 = 4678U;
	int32_t t73 = 856;

	t73 = (((x293|x294)|x295)<=x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x299 = -1;
	static int32_t t74 = -2358749;

	t74 = (((x297|x298)|x299)<=x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = -1LL;
	int64_t x302 = INT64_MIN;
	static int32_t x303 = INT32_MIN;
	volatile uint16_t x304 = UINT16_MAX;

	t75 = (((x301|x302)|x303)<=x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = -1LL;
	int64_t x306 = INT64_MIN;
	uint64_t x307 = 6430319LLU;
	volatile int32_t t76 = -3590681;

	t76 = (((x305|x306)|x307)<=x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MIN;
	volatile uint32_t x310 = 31U;
	int8_t x312 = INT8_MIN;

	t77 = (((x309|x310)|x311)<=x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = UINT16_MAX;
	int16_t x315 = INT16_MIN;
	static int8_t x316 = -1;
	volatile int32_t t78 = -1;

	t78 = (((x313|x314)|x315)<=x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x317 = -1LL;
	int32_t x318 = -81725;
	int64_t x319 = INT64_MAX;
	int64_t x320 = INT64_MIN;
	volatile int32_t t79 = -860;

	t79 = (((x317|x318)|x319)<=x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x321 = UINT32_MAX;
	static uint64_t x322 = 51766794793LLU;
	uint8_t x323 = 32U;
	static volatile int32_t t80 = 173546;

	t80 = (((x321|x322)|x323)<=x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x325 = -60;
	uint64_t x327 = 3LLU;
	volatile int16_t x328 = -1;

	t81 = (((x325|x326)|x327)<=x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x330 = 66LLU;
	int8_t x331 = INT8_MIN;
	int32_t x332 = INT32_MIN;
	static int32_t t82 = 1410;

	t82 = (((x329|x330)|x331)<=x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = INT64_MAX;
	static uint8_t x334 = 5U;
	int8_t x336 = -1;

	t83 = (((x333|x334)|x335)<=x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x337 = 143631278980LLU;

	t84 = (((x337|x338)|x339)<=x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x341 = -1;
	uint8_t x342 = 17U;
	int32_t x343 = INT32_MIN;
	int64_t x344 = INT64_MAX;
	volatile int32_t t85 = -496974602;

	t85 = (((x341|x342)|x343)<=x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = -1LL;
	static int64_t x346 = -1LL;
	int16_t x347 = INT16_MAX;
	uint16_t x348 = 1582U;
	static volatile int32_t t86 = 6936859;

	t86 = (((x345|x346)|x347)<=x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = INT32_MIN;
	volatile int8_t x350 = -44;
	int64_t x351 = -1LL;
	int32_t t87 = 11;

	t87 = (((x349|x350)|x351)<=x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x354 = 16946466049285LLU;
	int8_t x356 = INT8_MIN;
	int32_t t88 = -442863227;

	t88 = (((x353|x354)|x355)<=x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x357 = INT64_MIN;
	int16_t x358 = -1;
	volatile int32_t x359 = 18890;
	uint32_t x360 = 1629055U;
	int32_t t89 = 0;

	t89 = (((x357|x358)|x359)<=x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = 154U;
	int64_t x362 = INT64_MIN;
	uint16_t x363 = 28U;
	uint8_t x364 = 26U;
	static int32_t t90 = -4830;

	t90 = (((x361|x362)|x363)<=x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x365 = -1;
	static int8_t x366 = INT8_MAX;
	uint32_t x367 = 7744U;
	volatile int32_t x368 = INT32_MIN;
	int32_t t91 = 163706;

	t91 = (((x365|x366)|x367)<=x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x369 = UINT8_MAX;
	static int16_t x370 = INT16_MIN;
	volatile int32_t x371 = INT32_MAX;
	static int16_t x372 = -1;

	t92 = (((x369|x370)|x371)<=x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = INT8_MIN;
	static int16_t x374 = 2884;
	uint16_t x375 = 159U;
	uint16_t x376 = 21864U;

	t93 = (((x373|x374)|x375)<=x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x377 = 10;
	uint64_t x378 = UINT64_MAX;
	int8_t x379 = 1;
	uint8_t x380 = 9U;
	int32_t t94 = -1039403862;

	t94 = (((x377|x378)|x379)<=x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = INT16_MAX;
	static volatile int32_t x382 = -5;
	uint32_t x383 = 130762511U;
	uint16_t x384 = 27U;
	volatile int32_t t95 = 3;

	t95 = (((x381|x382)|x383)<=x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x385 = 260021137U;
	volatile uint8_t x386 = UINT8_MAX;
	uint8_t x387 = 0U;
	int8_t x388 = INT8_MAX;
	static int32_t t96 = -341091896;

	t96 = (((x385|x386)|x387)<=x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = -31;
	static int8_t x390 = -1;
	volatile int32_t t97 = -4037522;

	t97 = (((x389|x390)|x391)<=x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x393 = INT8_MIN;
	volatile uint16_t x394 = 6578U;
	volatile int8_t x396 = -4;
	static int32_t t98 = 777744;

	t98 = (((x393|x394)|x395)<=x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = 1U;
	int64_t x398 = INT64_MIN;
	int16_t x399 = 0;
	uint16_t x400 = 0U;
	volatile int32_t t99 = -145150462;

	t99 = (((x397|x398)|x399)<=x400);

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

