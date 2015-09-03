#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t t1 = 109675536;
int64_t x13 = INT64_MIN;
int16_t x16 = 2;
int64_t x18 = INT64_MIN;
int64_t x28 = -1LL;
volatile int8_t x33 = -1;
int64_t x34 = 183119538LL;
int16_t x35 = INT16_MAX;
static int32_t x36 = INT32_MIN;
static volatile uint8_t x37 = 2U;
uint32_t x39 = 7131992U;
static volatile int32_t t9 = -1493191;
uint16_t x42 = UINT16_MAX;
uint32_t x43 = 23U;
volatile int32_t x44 = -1;
uint8_t x46 = 73U;
static volatile int8_t x51 = 3;
volatile int32_t t12 = -37;
int8_t x56 = 3;
static volatile int16_t x58 = INT16_MIN;
volatile int64_t x65 = INT64_MAX;
int8_t x70 = INT8_MIN;
int8_t x75 = INT8_MIN;
int64_t x86 = 4349320926750711718LL;
int64_t x88 = 1021551406566LL;
uint16_t x89 = 25803U;
static int64_t x91 = INT64_MIN;
volatile uint8_t x99 = 0U;
int64_t x100 = 4143900657170287239LL;
int8_t x101 = -1;
int32_t t25 = -10852;
static int16_t x107 = 2;
volatile int64_t x115 = INT64_MIN;
uint64_t x116 = UINT64_MAX;
uint16_t x118 = 491U;
volatile int8_t x121 = INT8_MIN;
static int8_t x127 = INT8_MIN;
static uint64_t x129 = UINT64_MAX;
int32_t x131 = -1;
int16_t x136 = 5;
static uint32_t x138 = 250247U;
volatile uint32_t x140 = UINT32_MAX;
uint64_t x141 = UINT64_MAX;
static int16_t x151 = INT16_MIN;
int64_t x160 = 5801203771111LL;
volatile uint16_t x161 = 8467U;
volatile int16_t x170 = INT16_MIN;
static uint64_t x172 = 2789842762075229LLU;
int16_t x173 = INT16_MIN;
int16_t x177 = INT16_MIN;
int8_t x192 = -1;
int16_t x196 = INT16_MAX;
int64_t x197 = INT64_MIN;
uint8_t x203 = 2U;
volatile int32_t t51 = -7336807;
int32_t t52 = -126;
int64_t x214 = INT64_MIN;
uint8_t x217 = 45U;
int64_t x222 = INT64_MAX;
static int32_t x228 = INT32_MIN;
int16_t x235 = INT16_MAX;
static uint32_t x239 = UINT32_MAX;
volatile int32_t t59 = -630581694;
static int8_t x245 = INT8_MAX;
uint16_t x249 = UINT16_MAX;
uint8_t x253 = UINT8_MAX;
int32_t t63 = -2;
volatile int32_t t64 = -3126;
int64_t x261 = -5109647852LL;
int16_t x264 = INT16_MIN;
volatile int32_t t65 = -3;
int32_t x265 = INT32_MIN;
volatile uint32_t x267 = 84776842U;
int16_t x272 = INT16_MAX;
static int8_t x280 = INT8_MAX;
int8_t x282 = 14;
static uint32_t x285 = 28U;
int32_t t71 = 48990798;
static volatile int8_t x293 = INT8_MAX;
int32_t x297 = INT32_MAX;
static volatile int8_t x305 = INT8_MAX;
int64_t x306 = -1667251450LL;
int32_t t76 = -46;
uint32_t x309 = 2303744U;
int64_t x314 = -706730609LL;
int8_t x316 = 2;
volatile int32_t t78 = 61;
int64_t x318 = INT64_MAX;
uint32_t x321 = UINT32_MAX;
volatile int32_t t80 = 15427;
static int64_t x335 = 2899820599188LL;
uint64_t x337 = UINT64_MAX;
int32_t x338 = -1;
volatile int32_t t84 = -10886;
int16_t x345 = INT16_MIN;
uint8_t x346 = 57U;
uint32_t x348 = UINT32_MAX;
static int32_t t87 = 3977616;
uint32_t x363 = UINT32_MAX;
int32_t x364 = INT32_MIN;
int32_t t90 = 14103469;
int32_t x366 = INT32_MIN;
volatile int64_t x369 = INT64_MIN;
int16_t x370 = INT16_MIN;
int16_t x379 = 3;
uint8_t x380 = 3U;
volatile int16_t x384 = 1381;
static uint32_t x386 = 194799U;
int16_t x387 = INT16_MAX;
volatile int64_t x388 = -10522206LL;
int32_t t98 = 1;
static volatile int8_t x399 = -1;
int64_t x400 = INT64_MIN;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	uint32_t x2 = 738862U;
	int16_t x3 = 1465;
	static volatile int8_t x4 = 7;
	int32_t t0 = 1;

	t0 = (((x1<=x2)<=x3)<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	static int64_t x6 = 21993304918758LL;
	int16_t x7 = -1;
	static int16_t x8 = INT16_MAX;

	t1 = (((x5<=x6)<=x7)<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 120053722LLU;
	int64_t x10 = INT64_MIN;
	int8_t x11 = -1;
	int16_t x12 = -36;
	static volatile int32_t t2 = 75548;

	t2 = (((x9<=x10)<=x11)<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x14 = UINT64_MAX;
	static volatile uint16_t x15 = 62U;
	int32_t t3 = 63027;

	t3 = (((x13<=x14)<=x15)<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = INT8_MIN;
	volatile int16_t x19 = INT16_MAX;
	volatile int8_t x20 = -1;
	volatile int32_t t4 = 56;

	t4 = (((x17<=x18)<=x19)<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 86948744;
	static int8_t x22 = INT8_MIN;
	uint64_t x23 = UINT64_MAX;
	uint32_t x24 = UINT32_MAX;
	int32_t t5 = -3;

	t5 = (((x21<=x22)<=x23)<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MAX;
	int16_t x26 = INT16_MIN;
	static volatile int64_t x27 = 122103687584LL;
	volatile int32_t t6 = -141088;

	t6 = (((x25<=x26)<=x27)<=x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x29 = 13U;
	uint32_t x30 = UINT32_MAX;
	int64_t x31 = -29LL;
	static uint16_t x32 = UINT16_MAX;
	volatile int32_t t7 = 14;

	t7 = (((x29<=x30)<=x31)<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t t8 = -2022835;

	t8 = (((x33<=x34)<=x35)<=x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x38 = UINT16_MAX;
	int32_t x40 = INT32_MIN;

	t9 = (((x37<=x38)<=x39)<=x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x41 = INT8_MIN;
	int32_t t10 = 77851379;

	t10 = (((x41<=x42)<=x43)<=x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = UINT8_MAX;
	int32_t x47 = 98349180;
	int16_t x48 = -2011;
	int32_t t11 = 537039;

	t11 = (((x45<=x46)<=x47)<=x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x49 = 2237123U;
	uint16_t x50 = 37U;
	uint32_t x52 = 9989674U;

	t12 = (((x49<=x50)<=x51)<=x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = 144228848U;
	int8_t x54 = -57;
	volatile int16_t x55 = -1;
	static volatile int32_t t13 = -1;

	t13 = (((x53<=x54)<=x55)<=x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x57 = INT32_MAX;
	uint8_t x59 = UINT8_MAX;
	uint64_t x60 = UINT64_MAX;
	volatile int32_t t14 = -14;

	t14 = (((x57<=x58)<=x59)<=x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -117514778048LL;
	volatile uint8_t x62 = UINT8_MAX;
	static int32_t x63 = INT32_MAX;
	int64_t x64 = -4174085777426431LL;
	static int32_t t15 = -445;

	t15 = (((x61<=x62)<=x63)<=x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x66 = -121718;
	uint8_t x67 = UINT8_MAX;
	static uint16_t x68 = 1826U;
	volatile int32_t t16 = 12465;

	t16 = (((x65<=x66)<=x67)<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = UINT16_MAX;
	uint32_t x71 = 10463U;
	static volatile uint8_t x72 = UINT8_MAX;
	int32_t t17 = 11786;

	t17 = (((x69<=x70)<=x71)<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x73 = -3;
	volatile uint64_t x74 = 636909LLU;
	int16_t x76 = 58;
	int32_t t18 = -2254742;

	t18 = (((x73<=x74)<=x75)<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = -1;
	volatile uint64_t x78 = 65958362016867LLU;
	int8_t x79 = INT8_MIN;
	int32_t x80 = -1;
	int32_t t19 = 25832;

	t19 = (((x77<=x78)<=x79)<=x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MIN;
	int16_t x82 = 3;
	static int32_t x83 = INT32_MIN;
	int8_t x84 = INT8_MAX;
	int32_t t20 = -33590;

	t20 = (((x81<=x82)<=x83)<=x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = UINT8_MAX;
	uint64_t x87 = 25335524026323340LLU;
	volatile int32_t t21 = 18527;

	t21 = (((x85<=x86)<=x87)<=x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x90 = INT8_MIN;
	int32_t x92 = -1;
	int32_t t22 = 87979;

	t22 = (((x89<=x90)<=x91)<=x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x93 = 1;
	volatile int32_t x94 = 30434292;
	volatile int16_t x95 = 3;
	uint32_t x96 = 804U;
	static int32_t t23 = 14;

	t23 = (((x93<=x94)<=x95)<=x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = 4029600960660824692LLU;
	volatile int16_t x98 = 3177;
	int32_t t24 = -1178;

	t24 = (((x97<=x98)<=x99)<=x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x102 = 2U;
	uint64_t x103 = UINT64_MAX;
	uint64_t x104 = 210010442762656LLU;

	t25 = (((x101<=x102)<=x103)<=x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = 3406U;
	uint16_t x106 = 12179U;
	int32_t x108 = -1;
	volatile int32_t t26 = 81;

	t26 = (((x105<=x106)<=x107)<=x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MAX;
	uint32_t x110 = UINT32_MAX;
	uint8_t x111 = 52U;
	uint32_t x112 = 853U;
	volatile int32_t t27 = -36243;

	t27 = (((x109<=x110)<=x111)<=x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = 37698U;
	int16_t x114 = 67;
	int32_t t28 = 1927;

	t28 = (((x113<=x114)<=x115)<=x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x117 = UINT16_MAX;
	int32_t x119 = -7813;
	static uint64_t x120 = 7124971923273LLU;
	static int32_t t29 = -6515236;

	t29 = (((x117<=x118)<=x119)<=x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x122 = 18;
	static int64_t x123 = 12602323764858LL;
	int32_t x124 = INT32_MIN;
	volatile int32_t t30 = -12;

	t30 = (((x121<=x122)<=x123)<=x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x125 = -1;
	static volatile int64_t x126 = -14046631042828LL;
	volatile int16_t x128 = -1;
	volatile int32_t t31 = 617;

	t31 = (((x125<=x126)<=x127)<=x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x130 = 6U;
	uint16_t x132 = 2618U;
	static volatile int32_t t32 = 452834;

	t32 = (((x129<=x130)<=x131)<=x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = UINT16_MAX;
	int8_t x134 = -29;
	int16_t x135 = 0;
	volatile int32_t t33 = 197252;

	t33 = (((x133<=x134)<=x135)<=x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MIN;
	int8_t x139 = INT8_MIN;
	int32_t t34 = -17142;

	t34 = (((x137<=x138)<=x139)<=x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x142 = -502LL;
	int16_t x143 = INT16_MAX;
	static volatile int64_t x144 = -1LL;
	volatile int32_t t35 = 13;

	t35 = (((x141<=x142)<=x143)<=x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x145 = 2U;
	static volatile uint16_t x146 = 5U;
	int64_t x147 = INT64_MIN;
	int16_t x148 = INT16_MIN;
	static volatile int32_t t36 = 7268;

	t36 = (((x145<=x146)<=x147)<=x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x149 = INT64_MAX;
	int16_t x150 = INT16_MAX;
	uint8_t x152 = 127U;
	volatile int32_t t37 = -12258;

	t37 = (((x149<=x150)<=x151)<=x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x153 = UINT8_MAX;
	uint64_t x154 = 174750802213692720LLU;
	int64_t x155 = -2199459312027852430LL;
	uint8_t x156 = 4U;
	volatile int32_t t38 = 0;

	t38 = (((x153<=x154)<=x155)<=x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = UINT16_MAX;
	int8_t x158 = INT8_MAX;
	int8_t x159 = -1;
	int32_t t39 = -63;

	t39 = (((x157<=x158)<=x159)<=x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x162 = INT64_MIN;
	int8_t x163 = -1;
	static uint64_t x164 = 183LLU;
	int32_t t40 = 3364;

	t40 = (((x161<=x162)<=x163)<=x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = -1LL;
	uint16_t x166 = 21813U;
	uint16_t x167 = 0U;
	int32_t x168 = 230858098;
	static int32_t t41 = 682195;

	t41 = (((x165<=x166)<=x167)<=x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x169 = INT64_MAX;
	int32_t x171 = INT32_MIN;
	int32_t t42 = -30395201;

	t42 = (((x169<=x170)<=x171)<=x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x174 = UINT64_MAX;
	int16_t x175 = INT16_MAX;
	volatile int16_t x176 = INT16_MAX;
	int32_t t43 = 147;

	t43 = (((x173<=x174)<=x175)<=x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x178 = INT64_MIN;
	int8_t x179 = -7;
	static int8_t x180 = 1;
	int32_t t44 = 3346129;

	t44 = (((x177<=x178)<=x179)<=x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x181 = INT16_MIN;
	int16_t x182 = INT16_MIN;
	int32_t x183 = -1;
	uint32_t x184 = UINT32_MAX;
	int32_t t45 = -29232569;

	t45 = (((x181<=x182)<=x183)<=x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = -1LL;
	int64_t x186 = INT64_MIN;
	static uint32_t x187 = UINT32_MAX;
	int16_t x188 = INT16_MIN;
	volatile int32_t t46 = 1;

	t46 = (((x185<=x186)<=x187)<=x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x189 = UINT8_MAX;
	volatile uint8_t x190 = UINT8_MAX;
	static int32_t x191 = INT32_MAX;
	int32_t t47 = -414158315;

	t47 = (((x189<=x190)<=x191)<=x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = -1;
	volatile int16_t x194 = INT16_MAX;
	uint8_t x195 = UINT8_MAX;
	int32_t t48 = -114601;

	t48 = (((x193<=x194)<=x195)<=x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x198 = INT8_MIN;
	int64_t x199 = INT64_MIN;
	int8_t x200 = INT8_MAX;
	int32_t t49 = -844215903;

	t49 = (((x197<=x198)<=x199)<=x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MIN;
	int8_t x202 = -1;
	static uint64_t x204 = UINT64_MAX;
	volatile int32_t t50 = 5139025;

	t50 = (((x201<=x202)<=x203)<=x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = UINT32_MAX;
	int32_t x206 = INT32_MAX;
	int8_t x207 = INT8_MAX;
	uint32_t x208 = UINT32_MAX;

	t51 = (((x205<=x206)<=x207)<=x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x209 = INT64_MIN;
	int32_t x210 = INT32_MAX;
	volatile uint64_t x211 = 569532997LLU;
	int64_t x212 = 28369183442859555LL;

	t52 = (((x209<=x210)<=x211)<=x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = 1;
	uint32_t x215 = UINT32_MAX;
	uint8_t x216 = 6U;
	int32_t t53 = 367;

	t53 = (((x213<=x214)<=x215)<=x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x218 = 94U;
	int16_t x219 = INT16_MIN;
	static uint8_t x220 = UINT8_MAX;
	int32_t t54 = 205;

	t54 = (((x217<=x218)<=x219)<=x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = 1526U;
	volatile int16_t x223 = INT16_MAX;
	int64_t x224 = -26LL;
	volatile int32_t t55 = -889186;

	t55 = (((x221<=x222)<=x223)<=x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x225 = 2U;
	int32_t x226 = -113;
	int32_t x227 = 35;
	volatile int32_t t56 = 65955176;

	t56 = (((x225<=x226)<=x227)<=x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x229 = 474700;
	int32_t x230 = -20435918;
	volatile int64_t x231 = INT64_MIN;
	int16_t x232 = -10;
	int32_t t57 = -7364;

	t57 = (((x229<=x230)<=x231)<=x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x233 = 1U;
	uint8_t x234 = 7U;
	static int16_t x236 = -1;
	volatile int32_t t58 = 26388276;

	t58 = (((x233<=x234)<=x235)<=x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = 83598;
	int32_t x238 = -1;
	static uint64_t x240 = 15142792LLU;

	t59 = (((x237<=x238)<=x239)<=x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = -1;
	int64_t x242 = -1LL;
	volatile int64_t x243 = 187361683676LL;
	volatile int16_t x244 = INT16_MAX;
	volatile int32_t t60 = 2;

	t60 = (((x241<=x242)<=x243)<=x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x246 = 879406987;
	uint32_t x247 = 107216011U;
	int16_t x248 = -5423;
	volatile int32_t t61 = 196015751;

	t61 = (((x245<=x246)<=x247)<=x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x250 = INT16_MIN;
	int64_t x251 = INT64_MIN;
	int16_t x252 = INT16_MAX;
	volatile int32_t t62 = 6717180;

	t62 = (((x249<=x250)<=x251)<=x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x254 = INT16_MIN;
	volatile int16_t x255 = 0;
	int32_t x256 = INT32_MAX;

	t63 = (((x253<=x254)<=x255)<=x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = -1LL;
	int16_t x258 = -1;
	uint64_t x259 = UINT64_MAX;
	int16_t x260 = INT16_MIN;

	t64 = (((x257<=x258)<=x259)<=x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x262 = INT32_MIN;
	int16_t x263 = INT16_MAX;

	t65 = (((x261<=x262)<=x263)<=x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x266 = -60;
	static uint64_t x268 = 6299576523180LLU;
	volatile int32_t t66 = 0;

	t66 = (((x265<=x266)<=x267)<=x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x269 = UINT16_MAX;
	volatile int16_t x270 = INT16_MAX;
	uint16_t x271 = 1020U;
	int32_t t67 = 0;

	t67 = (((x269<=x270)<=x271)<=x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x273 = UINT32_MAX;
	static uint32_t x274 = UINT32_MAX;
	uint32_t x275 = 1756888891U;
	int16_t x276 = -1;
	int32_t t68 = -113;

	t68 = (((x273<=x274)<=x275)<=x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x277 = 6U;
	int16_t x278 = -1;
	int16_t x279 = -49;
	int32_t t69 = -577643;

	t69 = (((x277<=x278)<=x279)<=x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = 0;
	static int32_t x283 = 35439;
	int32_t x284 = 1129;
	volatile int32_t t70 = 8;

	t70 = (((x281<=x282)<=x283)<=x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x286 = UINT32_MAX;
	int8_t x287 = -1;
	volatile int8_t x288 = INT8_MAX;

	t71 = (((x285<=x286)<=x287)<=x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x289 = 5425;
	uint8_t x290 = 59U;
	uint16_t x291 = 44U;
	uint32_t x292 = 404857U;
	int32_t t72 = -309;

	t72 = (((x289<=x290)<=x291)<=x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x294 = 12654U;
	static volatile uint8_t x295 = 9U;
	static uint8_t x296 = 114U;
	int32_t t73 = -2;

	t73 = (((x293<=x294)<=x295)<=x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x298 = -27;
	static int64_t x299 = INT64_MAX;
	uint64_t x300 = 1480002620087947LLU;
	volatile int32_t t74 = -176972;

	t74 = (((x297<=x298)<=x299)<=x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = 235LL;
	volatile int32_t x302 = 4810458;
	volatile int8_t x303 = 0;
	int64_t x304 = INT64_MIN;
	int32_t t75 = -613;

	t75 = (((x301<=x302)<=x303)<=x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x307 = -14138482850LL;
	uint8_t x308 = UINT8_MAX;

	t76 = (((x305<=x306)<=x307)<=x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x310 = 3U;
	int16_t x311 = INT16_MIN;
	uint64_t x312 = UINT64_MAX;
	volatile int32_t t77 = 10238050;

	t77 = (((x309<=x310)<=x311)<=x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = 96U;
	volatile int16_t x315 = -1;

	t78 = (((x313<=x314)<=x315)<=x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x317 = -99;
	volatile int16_t x319 = -1;
	uint16_t x320 = UINT16_MAX;
	volatile int32_t t79 = 325160683;

	t79 = (((x317<=x318)<=x319)<=x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x322 = 992162216;
	int32_t x323 = -1;
	uint8_t x324 = 2U;

	t80 = (((x321<=x322)<=x323)<=x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x325 = 86771454U;
	int64_t x326 = -2321103674294LL;
	uint32_t x327 = 741066717U;
	static int8_t x328 = 2;
	int32_t t81 = -33597;

	t81 = (((x325<=x326)<=x327)<=x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = UINT8_MAX;
	uint64_t x330 = 15633898453512596LLU;
	uint32_t x331 = 137U;
	uint16_t x332 = 50U;
	volatile int32_t t82 = -314;

	t82 = (((x329<=x330)<=x331)<=x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x333 = UINT16_MAX;
	uint32_t x334 = UINT32_MAX;
	int32_t x336 = -1;
	static volatile int32_t t83 = 12;

	t83 = (((x333<=x334)<=x335)<=x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x339 = -405698461LL;
	static int64_t x340 = INT64_MAX;

	t84 = (((x337<=x338)<=x339)<=x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = INT8_MIN;
	volatile uint16_t x342 = UINT16_MAX;
	uint8_t x343 = 114U;
	int16_t x344 = 17;
	static int32_t t85 = 0;

	t85 = (((x341<=x342)<=x343)<=x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x347 = -1061;
	volatile int32_t t86 = 0;

	t86 = (((x345<=x346)<=x347)<=x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = -1;
	int64_t x350 = 23248522545617890LL;
	int32_t x351 = INT32_MAX;
	volatile int8_t x352 = INT8_MIN;

	t87 = (((x349<=x350)<=x351)<=x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x353 = INT16_MIN;
	volatile int32_t x354 = -601754;
	int64_t x355 = -1LL;
	volatile int64_t x356 = -1LL;
	volatile int32_t t88 = 8;

	t88 = (((x353<=x354)<=x355)<=x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = -1;
	static uint64_t x358 = 79406237326091LLU;
	int64_t x359 = -1LL;
	int32_t x360 = INT32_MIN;
	volatile int32_t t89 = -1;

	t89 = (((x357<=x358)<=x359)<=x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MAX;
	int64_t x362 = -84352404098719LL;

	t90 = (((x361<=x362)<=x363)<=x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = -1;
	volatile int16_t x367 = INT16_MIN;
	uint32_t x368 = 6507625U;
	volatile int32_t t91 = 18190586;

	t91 = (((x365<=x366)<=x367)<=x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x371 = INT8_MIN;
	volatile int16_t x372 = -105;
	int32_t t92 = 271632;

	t92 = (((x369<=x370)<=x371)<=x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x373 = 2LLU;
	volatile uint16_t x374 = 12U;
	int64_t x375 = 370598312LL;
	int16_t x376 = -11;
	volatile int32_t t93 = 930;

	t93 = (((x373<=x374)<=x375)<=x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x377 = 34U;
	static int32_t x378 = INT32_MIN;
	volatile int32_t t94 = 5644311;

	t94 = (((x377<=x378)<=x379)<=x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x381 = INT64_MAX;
	static uint32_t x382 = UINT32_MAX;
	int16_t x383 = 15;
	int32_t t95 = 813633;

	t95 = (((x381<=x382)<=x383)<=x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = 0;
	int32_t t96 = -104280840;

	t96 = (((x385<=x386)<=x387)<=x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = 2U;
	int64_t x390 = INT64_MAX;
	int16_t x391 = 0;
	int8_t x392 = -1;
	volatile int32_t t97 = -228575;

	t97 = (((x389<=x390)<=x391)<=x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x393 = 27342648U;
	int16_t x394 = INT16_MIN;
	volatile uint32_t x395 = 12070U;
	int16_t x396 = 39;

	t98 = (((x393<=x394)<=x395)<=x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x397 = 32477705LLU;
	int32_t x398 = 2908;
	static int32_t t99 = 0;

	t99 = (((x397<=x398)<=x399)<=x400);

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

