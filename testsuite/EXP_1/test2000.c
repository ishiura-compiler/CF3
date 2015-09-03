#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = INT32_MAX;
volatile int64_t t0 = -333484352949844LL;
volatile int8_t x7 = -1;
int8_t x10 = -1;
int64_t x11 = INT64_MIN;
uint32_t t4 = 253669415U;
uint32_t x21 = UINT32_MAX;
uint64_t x22 = 172426593761LLU;
uint64_t t5 = 4878LLU;
int32_t x27 = INT32_MIN;
static uint32_t x29 = 2U;
static uint32_t x32 = UINT32_MAX;
uint64_t x38 = 8534LLU;
volatile int32_t x43 = -1;
volatile int64_t t13 = 255554040221LL;
int64_t x57 = 2923189140LL;
volatile uint16_t x59 = UINT16_MAX;
int32_t x67 = 57695;
volatile int32_t t16 = -1;
uint64_t x70 = 2941634166189296LLU;
int64_t t18 = 49876793374379371LL;
int32_t x78 = -677521;
uint32_t x83 = 1689185199U;
uint32_t x84 = 149032U;
uint8_t x86 = 3U;
static uint32_t x95 = UINT32_MAX;
uint64_t x100 = 27484589816096235LLU;
uint64_t t24 = 4040267299292451384LLU;
int64_t x104 = INT64_MAX;
int32_t x105 = 857198;
int16_t x111 = -1;
static volatile int8_t x113 = -1;
volatile int8_t x120 = INT8_MAX;
int64_t t30 = 4007970748717595LL;
static uint64_t x125 = 0LLU;
uint64_t t31 = 435985005580LLU;
volatile int64_t t32 = 84435483802716LL;
volatile uint32_t x136 = 7U;
int8_t x140 = 14;
static int16_t x142 = INT16_MAX;
int16_t x148 = INT16_MIN;
int16_t x151 = -107;
uint8_t x153 = 101U;
static uint16_t x171 = 1U;
int8_t x173 = -1;
static int32_t x175 = INT32_MIN;
volatile uint32_t t43 = 2U;
uint64_t t44 = 0LLU;
volatile uint64_t x183 = 130813849912834LLU;
volatile uint64_t t45 = 46378588LLU;
int32_t x187 = -1;
int32_t x194 = 313081;
int64_t t48 = 7446LL;
int16_t x199 = -1;
uint16_t x202 = 837U;
int16_t x204 = -5214;
static int64_t x206 = -1LL;
volatile int16_t x218 = -1;
uint8_t x220 = 106U;
uint32_t x225 = UINT32_MAX;
volatile uint32_t t56 = 171521824U;
uint16_t x231 = UINT16_MAX;
int16_t x240 = INT16_MIN;
int64_t x245 = -1LL;
int64_t x248 = -1LL;
int16_t x259 = -1;
int64_t x264 = -286170502828811LL;
static uint64_t x266 = UINT64_MAX;
int32_t x267 = 176;
int16_t x269 = INT16_MIN;
int64_t t68 = -755600LL;
static int64_t x277 = INT64_MIN;
int8_t x284 = INT8_MIN;
static int8_t x286 = -1;
int8_t x292 = 0;
static volatile uint16_t x293 = 0U;
int64_t x299 = -24930652977019423LL;
int8_t x310 = INT8_MAX;
uint64_t x311 = 7715LLU;
int8_t x313 = -1;
static int64_t t80 = -258081104LL;
int32_t x330 = INT32_MIN;
static uint64_t t83 = 7612174138680843LLU;
volatile int8_t x344 = INT8_MIN;
static volatile int64_t x352 = INT64_MAX;
static int16_t x356 = INT16_MIN;
uint64_t x358 = 2741LLU;
volatile uint8_t x360 = 0U;
uint32_t x362 = 232534U;
static uint32_t x380 = UINT32_MAX;
static uint64_t x383 = 1518734LLU;
volatile int32_t x392 = INT32_MAX;
int64_t x393 = INT64_MIN;
static int64_t x395 = -1491LL;


void f0(void) {
	int64_t x2 = INT64_MAX;
	int32_t x3 = -1;
	int32_t x4 = INT32_MIN;

	t0 = (((x1|x2)&x3)&x4);

	if (t0 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	int64_t x6 = -1LL;
	volatile int32_t x8 = 114825;
	volatile int64_t t1 = -1843695513875223530LL;

	t1 = (((x5|x6)&x7)&x8);

	if (t1 != 114825LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = INT64_MIN;
	int64_t x12 = 8107LL;
	volatile int64_t t2 = 158LL;

	t2 = (((x9|x10)&x11)&x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MAX;
	uint32_t x14 = UINT32_MAX;
	static volatile int8_t x15 = INT8_MAX;
	uint8_t x16 = 12U;
	volatile uint32_t t3 = 8008829U;

	t3 = (((x13|x14)&x15)&x16);

	if (t3 != 12U) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 99062999U;
	int8_t x18 = INT8_MIN;
	uint8_t x19 = 5U;
	int32_t x20 = INT32_MIN;

	t4 = (((x17|x18)&x19)&x20);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x23 = INT64_MIN;
	volatile int64_t x24 = -1LL;

	t5 = (((x21|x22)&x23)&x24);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MAX;
	uint16_t x26 = 377U;
	volatile int64_t x28 = -51LL;
	int64_t t6 = -196266981LL;

	t6 = (((x25|x26)&x27)&x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x30 = UINT8_MAX;
	volatile int16_t x31 = INT16_MAX;
	volatile uint32_t t7 = 382542154U;

	t7 = (((x29|x30)&x31)&x32);

	if (t7 != 255U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MAX;
	int32_t x34 = -1;
	volatile int8_t x35 = INT8_MAX;
	uint64_t x36 = 567724382953LLU;
	volatile uint64_t t8 = 184LLU;

	t8 = (((x33|x34)&x35)&x36);

	if (t8 != 105LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -3;
	static int64_t x39 = INT64_MIN;
	int8_t x40 = INT8_MAX;
	volatile uint64_t t9 = 5400155935LLU;

	t9 = (((x37|x38)&x39)&x40);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int8_t x41 = INT8_MAX;
	static int16_t x42 = INT16_MIN;
	static int16_t x44 = INT16_MIN;
	int32_t t10 = -17476546;

	t10 = (((x41|x42)&x43)&x44);

	if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	static int32_t x46 = -1;
	static uint64_t x47 = 12308134584LLU;
	volatile int64_t x48 = INT64_MIN;
	static uint64_t t11 = 155991972452700LLU;

	t11 = (((x45|x46)&x47)&x48);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -28;
	int64_t x50 = -25971446501LL;
	static int32_t x51 = INT32_MAX;
	static int64_t x52 = INT64_MIN;
	int64_t t12 = -973LL;

	t12 = (((x49|x50)&x51)&x52);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = 13;
	int16_t x54 = -1;
	uint8_t x55 = 32U;
	static int64_t x56 = INT64_MIN;

	t13 = (((x53|x54)&x55)&x56);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x58 = 125472283962661785LL;
	volatile int16_t x60 = INT16_MIN;
	volatile int64_t t14 = 33583905231447LL;

	t14 = (((x57|x58)&x59)&x60);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -9;
	static uint8_t x62 = 14U;
	int8_t x63 = INT8_MAX;
	int16_t x64 = 495;
	static int32_t t15 = 116;

	t15 = (((x61|x62)&x63)&x64);

	if (t15 != 111) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MIN;
	int16_t x66 = 1;
	int8_t x68 = INT8_MIN;

	t16 = (((x65|x66)&x67)&x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	int16_t x71 = INT16_MIN;
	static int16_t x72 = INT16_MIN;
	volatile uint64_t t17 = 2223LLU;

	t17 = (((x69|x70)&x71)&x72);

	if (t17 != 18446744071889780736LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = 1023600LL;
	volatile uint8_t x74 = 56U;
	int32_t x75 = INT32_MAX;
	uint8_t x76 = UINT8_MAX;

	t18 = (((x73|x74)&x75)&x76);

	if (t18 != 120LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MIN;
	uint16_t x79 = 1528U;
	volatile int8_t x80 = -22;
	volatile int32_t t19 = 11;

	t19 = (((x77|x78)&x79)&x80);

	if (t19 != 360) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x81 = 273190914U;
	static uint64_t x82 = UINT64_MAX;
	volatile uint64_t t20 = 747899LLU;

	t20 = (((x81|x82)&x83)&x84);

	if (t20 != 148008LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MAX;
	int32_t x87 = INT32_MIN;
	static uint16_t x88 = UINT16_MAX;
	volatile int32_t t21 = -95;

	t21 = (((x85|x86)&x87)&x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x89 = INT64_MAX;
	volatile int8_t x90 = -1;
	static int64_t x91 = INT64_MIN;
	int16_t x92 = -1;
	int64_t t22 = INT64_MIN;

	t22 = (((x89|x90)&x91)&x92);

	if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = -5060781956LL;
	volatile int64_t x94 = -1LL;
	static int8_t x96 = INT8_MIN;
	volatile int64_t t23 = -3454502LL;

	t23 = (((x93|x94)&x95)&x96);

	if (t23 != 4294967168LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x97 = 16U;
	int16_t x98 = INT16_MAX;
	uint32_t x99 = 22848U;

	t24 = (((x97|x98)&x99)&x100);

	if (t24 != 320LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x101 = INT8_MIN;
	int32_t x102 = INT32_MAX;
	uint64_t x103 = UINT64_MAX;
	uint64_t t25 = 764641437870782343LLU;

	t25 = (((x101|x102)&x103)&x104);

	if (t25 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x106 = 408U;
	volatile int32_t x107 = INT32_MAX;
	uint16_t x108 = 20U;
	int32_t t26 = -4485;

	t26 = (((x105|x106)&x107)&x108);

	if (t26 != 20) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = -24705677204LL;
	int8_t x110 = -30;
	uint16_t x112 = 44U;
	volatile int64_t t27 = 1048764LL;

	t27 = (((x109|x110)&x111)&x112);

	if (t27 != 44LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x114 = -11;
	volatile uint64_t x115 = 8418001485942600LLU;
	int16_t x116 = INT16_MAX;
	uint64_t t28 = 57034138LLU;

	t28 = (((x113|x114)&x115)&x116);

	if (t28 != 20296LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MIN;
	volatile int64_t x118 = INT64_MIN;
	int32_t x119 = INT32_MIN;
	volatile int64_t t29 = 1217284166038LL;

	t29 = (((x117|x118)&x119)&x120);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MIN;
	static int64_t x122 = INT64_MIN;
	int8_t x123 = INT8_MIN;
	uint32_t x124 = UINT32_MAX;

	t30 = (((x121|x122)&x123)&x124);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x126 = UINT16_MAX;
	int32_t x127 = INT32_MIN;
	volatile uint32_t x128 = 67785U;

	t31 = (((x125|x126)&x127)&x128);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x129 = INT32_MIN;
	uint8_t x130 = UINT8_MAX;
	int64_t x131 = -124645203750LL;
	int16_t x132 = INT16_MIN;

	t32 = (((x129|x130)&x131)&x132);

	if (t32 != -126701535232LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x133 = 1;
	int8_t x134 = 1;
	uint32_t x135 = 1981759U;
	volatile uint32_t t33 = 502U;

	t33 = (((x133|x134)&x135)&x136);

	if (t33 != 1U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = 1102;
	uint64_t x138 = 414LLU;
	int16_t x139 = -1;
	volatile uint64_t t34 = 239493LLU;

	t34 = (((x137|x138)&x139)&x140);

	if (t34 != 14LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = -674582221;
	volatile int8_t x143 = INT8_MAX;
	uint16_t x144 = 8U;
	int32_t t35 = 10226;

	t35 = (((x141|x142)&x143)&x144);

	if (t35 != 8) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint32_t x145 = UINT32_MAX;
	int16_t x146 = 13193;
	uint64_t x147 = 21LLU;
	uint64_t t36 = 221656LLU;

	t36 = (((x145|x146)&x147)&x148);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = 0U;
	static int32_t x150 = 12;
	int8_t x152 = -1;
	volatile int32_t t37 = 6;

	t37 = (((x149|x150)&x151)&x152);

	if (t37 != 4) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x154 = -1;
	int64_t x155 = INT64_MIN;
	static int64_t x156 = -1LL;
	static volatile int64_t t38 = INT64_MIN;

	t38 = (((x153|x154)&x155)&x156);

	if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = 111738162LLU;
	int64_t x158 = INT64_MAX;
	volatile int64_t x159 = 625198LL;
	int8_t x160 = 10;
	uint64_t t39 = 618174800777LLU;

	t39 = (((x157|x158)&x159)&x160);

	if (t39 != 10LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = -1;
	static int64_t x162 = INT64_MIN;
	uint64_t x163 = UINT64_MAX;
	volatile uint64_t x164 = 3LLU;
	volatile uint64_t t40 = 3972258224061117LLU;

	t40 = (((x161|x162)&x163)&x164);

	if (t40 != 3LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = 55U;
	uint32_t x166 = 3031881U;
	uint16_t x167 = UINT16_MAX;
	uint16_t x168 = 5U;
	static volatile uint32_t t41 = 72351U;

	t41 = (((x165|x166)&x167)&x168);

	if (t41 != 5U) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x169 = INT64_MIN;
	int16_t x170 = -826;
	int16_t x172 = INT16_MIN;
	int64_t t42 = 13LL;

	t42 = (((x169|x170)&x171)&x172);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x174 = 1296533U;
	uint32_t x176 = 535259610U;

	t43 = (((x173|x174)&x175)&x176);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MIN;
	static int8_t x178 = -1;
	uint64_t x179 = 179LLU;
	uint8_t x180 = 1U;

	t44 = (((x177|x178)&x179)&x180);

	if (t44 != 1LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = -1;
	int8_t x182 = 39;
	int8_t x184 = INT8_MAX;

	t45 = (((x181|x182)&x183)&x184);

	if (t45 != 2LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x185 = INT16_MAX;
	volatile uint64_t x186 = 17424503165624LLU;
	volatile uint8_t x188 = 18U;
	static volatile uint64_t t46 = 5LLU;

	t46 = (((x185|x186)&x187)&x188);

	if (t46 != 18LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x189 = UINT32_MAX;
	volatile int16_t x190 = INT16_MIN;
	static int32_t x191 = INT32_MIN;
	uint8_t x192 = 25U;
	static uint32_t t47 = 58U;

	t47 = (((x189|x190)&x191)&x192);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x193 = INT64_MIN;
	int16_t x195 = -151;
	uint32_t x196 = 88U;

	t48 = (((x193|x194)&x195)&x196);

	if (t48 != 72LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MIN;
	int8_t x198 = INT8_MIN;
	int16_t x200 = 12;
	int64_t t49 = 317676593933LL;

	t49 = (((x197|x198)&x199)&x200);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x201 = -1;
	volatile uint64_t x203 = 52768829726608745LLU;
	volatile uint64_t t50 = 7390891129052757625LLU;

	t50 = (((x201|x202)&x203)&x204);

	if (t50 != 52768829726607648LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x205 = 3300;
	int16_t x207 = INT16_MAX;
	static int64_t x208 = INT64_MIN;
	volatile int64_t t51 = 963LL;

	t51 = (((x205|x206)&x207)&x208);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = INT32_MIN;
	int64_t x210 = INT64_MAX;
	int8_t x211 = INT8_MAX;
	volatile int64_t x212 = INT64_MIN;
	volatile int64_t t52 = 1738635LL;

	t52 = (((x209|x210)&x211)&x212);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = UINT8_MAX;
	int32_t x214 = INT32_MIN;
	static volatile int16_t x215 = INT16_MIN;
	volatile int32_t x216 = -74;
	int32_t t53 = INT32_MIN;

	t53 = (((x213|x214)&x215)&x216);

	if (t53 != INT32_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MIN;
	uint8_t x219 = 2U;
	volatile int64_t t54 = -1LL;

	t54 = (((x217|x218)&x219)&x220);

	if (t54 != 2LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = 124LL;
	volatile int64_t x222 = -348734273LL;
	int16_t x223 = INT16_MAX;
	uint8_t x224 = UINT8_MAX;
	int64_t t55 = 30342070945258684LL;

	t55 = (((x221|x222)&x223)&x224);

	if (t55 != 255LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x226 = INT8_MIN;
	static volatile int32_t x227 = INT32_MIN;
	uint16_t x228 = UINT16_MAX;

	t56 = (((x225|x226)&x227)&x228);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = -62579;
	uint64_t x230 = 417252084900587LLU;
	uint32_t x232 = UINT32_MAX;
	volatile uint64_t t57 = 1113099886688435856LLU;

	t57 = (((x229|x230)&x231)&x232);

	if (t57 != 27631LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x233 = 934032U;
	volatile uint64_t x234 = 65279647835824LLU;
	static int8_t x235 = 7;
	static int64_t x236 = -788537391455985898LL;
	uint64_t t58 = 633101529375411LLU;

	t58 = (((x233|x234)&x235)&x236);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = INT8_MIN;
	static volatile int32_t x238 = -1;
	static uint32_t x239 = UINT32_MAX;
	uint32_t t59 = 233U;

	t59 = (((x237|x238)&x239)&x240);

	if (t59 != 4294934528U) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x241 = 7LLU;
	uint64_t x242 = UINT64_MAX;
	int16_t x243 = -10757;
	static int64_t x244 = 14115053431LL;
	volatile uint64_t t60 = 1865624379738567645LLU;

	t60 = (((x241|x242)&x243)&x244);

	if (t60 != 14115050867LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x246 = INT64_MIN;
	static int8_t x247 = INT8_MAX;
	static int64_t t61 = -3146963LL;

	t61 = (((x245|x246)&x247)&x248);

	if (t61 != 127LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x249 = 107U;
	volatile int64_t x250 = 1009359296623253LL;
	static int32_t x251 = INT32_MIN;
	uint8_t x252 = UINT8_MAX;
	volatile int64_t t62 = -14030201439LL;

	t62 = (((x249|x250)&x251)&x252);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MIN;
	uint64_t x254 = 35052944847958971LLU;
	static volatile int64_t x255 = INT64_MIN;
	static int64_t x256 = INT64_MIN;
	volatile uint64_t t63 = 3746422304673575LLU;

	t63 = (((x253|x254)&x255)&x256);

	if (t63 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = -1;
	uint32_t x258 = 850U;
	int64_t x260 = INT64_MAX;
	static volatile int64_t t64 = 570624539143LL;

	t64 = (((x257|x258)&x259)&x260);

	if (t64 != 4294967295LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x261 = 29849U;
	uint64_t x262 = UINT64_MAX;
	int32_t x263 = INT32_MIN;
	uint64_t t65 = 1676948LLU;

	t65 = (((x261|x262)&x263)&x264);

	if (t65 != 18446457902186102784LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x265 = INT8_MIN;
	int64_t x268 = -1LL;
	uint64_t t66 = 1896042935380170112LLU;

	t66 = (((x265|x266)&x267)&x268);

	if (t66 != 176LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x270 = 4U;
	int32_t x271 = -898249357;
	int8_t x272 = INT8_MIN;
	static uint32_t t67 = 61478105U;

	t67 = (((x269|x270)&x271)&x272);

	if (t67 != 3396698112U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x273 = INT8_MAX;
	int64_t x274 = -1LL;
	volatile int32_t x275 = INT32_MIN;
	uint32_t x276 = 52711U;

	t68 = (((x273|x274)&x275)&x276);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x278 = INT32_MIN;
	int64_t x279 = 778331079444LL;
	int32_t x280 = 6;
	static volatile int64_t t69 = 53445131971044510LL;

	t69 = (((x277|x278)&x279)&x280);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = -484;
	int16_t x282 = INT16_MAX;
	volatile uint16_t x283 = 23301U;
	volatile int32_t t70 = 65;

	t70 = (((x281|x282)&x283)&x284);

	if (t70 != 23296) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x285 = INT8_MAX;
	uint64_t x287 = 30728545350753710LLU;
	int64_t x288 = 2725LL;
	static volatile uint64_t t71 = 1LLU;

	t71 = (((x285|x286)&x287)&x288);

	if (t71 != 2212LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x289 = 2352885LLU;
	uint64_t x290 = 4027669317LLU;
	uint16_t x291 = UINT16_MAX;
	volatile uint64_t t72 = 69LLU;

	t72 = (((x289|x290)&x291)&x292);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x294 = -6;
	uint64_t x295 = UINT64_MAX;
	static uint32_t x296 = 582U;
	volatile uint64_t t73 = 4882540458115084LLU;

	t73 = (((x293|x294)&x295)&x296);

	if (t73 != 578LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x297 = 32;
	int16_t x298 = INT16_MIN;
	volatile int32_t x300 = 91963;
	volatile int64_t t74 = 17309994037100LL;

	t74 = (((x297|x298)&x299)&x300);

	if (t74 != 65568LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x301 = 136048899468891LLU;
	int16_t x302 = -1;
	int64_t x303 = 0LL;
	uint32_t x304 = 2914U;
	uint64_t t75 = 1LLU;

	t75 = (((x301|x302)&x303)&x304);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x305 = 5992039LL;
	int32_t x306 = 32376607;
	static volatile int64_t x307 = -1LL;
	static volatile int8_t x308 = -1;
	volatile int64_t t76 = -9LL;

	t76 = (((x305|x306)&x307)&x308);

	if (t76 != 33517439LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = INT16_MIN;
	int16_t x312 = INT16_MIN;
	uint64_t t77 = 2052401055937162700LLU;

	t77 = (((x309|x310)&x311)&x312);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x314 = 6753U;
	static volatile uint64_t x315 = 7LLU;
	uint64_t x316 = UINT64_MAX;
	volatile uint64_t t78 = 25625LLU;

	t78 = (((x313|x314)&x315)&x316);

	if (t78 != 7LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint64_t x317 = 17873739LLU;
	uint8_t x318 = 49U;
	uint8_t x319 = UINT8_MAX;
	int16_t x320 = INT16_MAX;
	static volatile uint64_t t79 = 43143197LLU;

	t79 = (((x317|x318)&x319)&x320);

	if (t79 != 123LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = INT8_MAX;
	int32_t x322 = 2;
	uint16_t x323 = 699U;
	int64_t x324 = -1LL;

	t80 = (((x321|x322)&x323)&x324);

	if (t80 != 59LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x325 = -2;
	int64_t x326 = INT64_MIN;
	static uint8_t x327 = 1U;
	int32_t x328 = INT32_MAX;
	static volatile int64_t t81 = -385989LL;

	t81 = (((x325|x326)&x327)&x328);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x329 = INT64_MIN;
	int16_t x331 = 1;
	int32_t x332 = -894;
	static volatile int64_t t82 = -6633136LL;

	t82 = (((x329|x330)&x331)&x332);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = 9;
	static uint64_t x334 = 47755092482LLU;
	int32_t x335 = -1;
	uint8_t x336 = UINT8_MAX;

	t83 = (((x333|x334)&x335)&x336);

	if (t83 != 11LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = 85U;
	static int8_t x338 = INT8_MIN;
	static uint32_t x339 = 186561U;
	int64_t x340 = -1LL;
	volatile int64_t t84 = -7305549453330LL;

	t84 = (((x337|x338)&x339)&x340);

	if (t84 != 186561LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = 31LL;
	int16_t x342 = 223;
	int16_t x343 = 0;
	volatile int64_t t85 = 3108380107367959307LL;

	t85 = (((x341|x342)&x343)&x344);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = 6221294733274054991LLU;
	int8_t x346 = -1;
	int16_t x347 = INT16_MIN;
	int32_t x348 = -223386947;
	uint64_t t86 = 450748890LLU;

	t86 = (((x345|x346)&x347)&x348);

	if (t86 != 18446744073486139392LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = INT32_MIN;
	volatile int32_t x350 = INT32_MIN;
	int8_t x351 = INT8_MIN;
	int64_t t87 = 795LL;

	t87 = (((x349|x350)&x351)&x352);

	if (t87 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x353 = 4660216LLU;
	static volatile int32_t x354 = -688;
	int16_t x355 = -8591;
	volatile uint64_t t88 = 3804028438930LLU;

	t88 = (((x353|x354)&x355)&x356);

	if (t88 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = INT8_MIN;
	uint64_t x359 = 49266767LLU;
	uint64_t t89 = 5LLU;

	t89 = (((x357|x358)&x359)&x360);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x361 = INT32_MAX;
	uint8_t x363 = UINT8_MAX;
	volatile int64_t x364 = INT64_MIN;
	volatile int64_t t90 = -513490LL;

	t90 = (((x361|x362)&x363)&x364);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = INT16_MIN;
	volatile uint8_t x366 = UINT8_MAX;
	static int16_t x367 = INT16_MIN;
	int64_t x368 = 0LL;
	static int64_t t91 = -50579726LL;

	t91 = (((x365|x366)&x367)&x368);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x369 = INT64_MIN;
	int64_t x370 = -9846721755206LL;
	volatile uint64_t x371 = 6964723934LLU;
	int64_t x372 = INT64_MIN;
	volatile uint64_t t92 = 4313707541LLU;

	t92 = (((x369|x370)&x371)&x372);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = INT64_MAX;
	int64_t x374 = INT64_MIN;
	int8_t x375 = 0;
	int64_t x376 = 41919168639LL;
	static volatile int64_t t93 = 1601LL;

	t93 = (((x373|x374)&x375)&x376);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x377 = UINT64_MAX;
	int16_t x378 = INT16_MIN;
	static int16_t x379 = INT16_MIN;
	volatile uint64_t t94 = 189741738428184422LLU;

	t94 = (((x377|x378)&x379)&x380);

	if (t94 != 4294934528LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = 16U;
	volatile int64_t x382 = INT64_MIN;
	static uint32_t x384 = UINT32_MAX;
	volatile uint64_t t95 = 27880834LLU;

	t95 = (((x381|x382)&x383)&x384);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x385 = 9286;
	uint32_t x386 = 167U;
	uint8_t x387 = UINT8_MAX;
	uint16_t x388 = 6U;
	volatile uint32_t t96 = 151098013U;

	t96 = (((x385|x386)&x387)&x388);

	if (t96 != 6U) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = 2518U;
	int16_t x390 = 213;
	int8_t x391 = INT8_MIN;
	volatile int32_t t97 = 0;

	t97 = (((x389|x390)&x391)&x392);

	if (t97 != 2432) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x394 = -491846LL;
	int32_t x396 = INT32_MIN;
	volatile int64_t t98 = -32676144614506788LL;

	t98 = (((x393|x394)&x395)&x396);

	if (t98 != -2147483648LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = -8607171;
	int16_t x398 = INT16_MIN;
	int16_t x399 = INT16_MIN;
	static volatile int64_t x400 = INT64_MIN;
	static int64_t t99 = INT64_MIN;

	t99 = (((x397|x398)&x399)&x400);

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

