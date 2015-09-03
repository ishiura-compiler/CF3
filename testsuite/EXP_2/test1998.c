#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t1 = -2;
int16_t x10 = INT16_MIN;
int32_t x21 = INT32_MIN;
int8_t x27 = -27;
volatile int32_t x30 = INT32_MAX;
volatile int64_t x35 = 415216879247LL;
volatile int32_t t9 = -130;
int16_t x47 = 6049;
volatile int32_t t11 = -41603736;
int16_t x50 = -1;
int16_t x52 = 73;
int8_t x60 = INT8_MIN;
int32_t t14 = -9;
int16_t x61 = -1;
uint16_t x62 = 4U;
int64_t x63 = -1LL;
volatile int32_t t15 = 89511;
static volatile int32_t t16 = -52749;
static volatile int32_t t21 = -14955600;
int32_t t22 = -3;
int32_t t23 = 63;
static int64_t x105 = INT64_MIN;
int8_t x109 = -1;
uint32_t x114 = 1U;
uint32_t x118 = 2U;
uint32_t x127 = 25530U;
int16_t x130 = INT16_MAX;
volatile int32_t x132 = INT32_MIN;
volatile int64_t x140 = 28282146744595721LL;
int32_t t34 = 21423;
uint8_t x144 = 1U;
uint16_t x149 = 0U;
static volatile int16_t x150 = 3744;
uint32_t x153 = UINT32_MAX;
int32_t x154 = INT32_MAX;
static int32_t x155 = INT32_MIN;
int64_t x157 = INT64_MAX;
int16_t x159 = INT16_MIN;
int32_t x163 = INT32_MAX;
uint16_t x166 = UINT16_MAX;
volatile int16_t x168 = INT16_MIN;
volatile int64_t x169 = INT64_MIN;
static uint16_t x175 = 0U;
uint16_t x179 = 3U;
uint64_t x181 = 132417799LLU;
volatile uint64_t x185 = 786658190774711793LLU;
volatile uint16_t x187 = 985U;
int32_t x191 = -43;
int32_t t47 = -2618382;
volatile int32_t t49 = 491749;
static volatile uint8_t x202 = 13U;
volatile int16_t x211 = INT16_MIN;
static uint8_t x216 = 23U;
static int32_t t53 = -25857;
int16_t x217 = INT16_MIN;
static int8_t x229 = 44;
uint64_t x231 = UINT64_MAX;
uint8_t x234 = 0U;
uint64_t x238 = UINT64_MAX;
int16_t x239 = 1567;
int32_t t61 = 44810357;
int64_t x273 = INT64_MAX;
volatile int32_t t68 = 22;
int16_t x280 = -1;
volatile int32_t x283 = -1664;
volatile int32_t t71 = -2716957;
int32_t x291 = INT32_MIN;
static uint8_t x292 = UINT8_MAX;
volatile int32_t x301 = -1;
volatile int32_t t75 = -954221;
uint32_t x306 = UINT32_MAX;
static volatile int32_t t76 = 775427;
int8_t x310 = INT8_MAX;
volatile int64_t x325 = INT64_MIN;
int16_t x326 = INT16_MIN;
uint64_t x327 = 45937666979520211LLU;
int32_t t81 = -471546;
static uint8_t x330 = UINT8_MAX;
volatile int32_t t82 = -3509;
int64_t x334 = INT64_MAX;
uint64_t x337 = UINT64_MAX;
volatile int32_t t85 = -77191459;
uint32_t x348 = 27935250U;
int32_t t87 = -4;
volatile int8_t x354 = INT8_MIN;
static int32_t t88 = -225316;
static uint32_t x365 = 855481413U;
static int32_t x367 = 7441;
volatile int32_t t92 = -772;
int64_t x376 = INT64_MAX;
volatile int32_t x382 = INT32_MIN;
uint32_t x389 = 136829U;
volatile int32_t t99 = 38613022;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	static volatile int64_t x2 = -1LL;
	int32_t x3 = 849;
	int64_t x4 = 99810LL;
	int32_t t0 = 504;

	t0 = ((x1&(x2|x3))<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	int64_t x6 = INT64_MAX;
	int16_t x7 = INT16_MAX;
	static uint8_t x8 = UINT8_MAX;

	t1 = ((x5&(x6|x7))<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x9 = 20U;
	int32_t x11 = INT32_MIN;
	static volatile int8_t x12 = -2;
	static int32_t t2 = 151;

	t2 = ((x9&(x10|x11))<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 236831447721706857LLU;
	int32_t x14 = INT32_MIN;
	int8_t x15 = -1;
	int16_t x16 = INT16_MAX;
	int32_t t3 = -1;

	t3 = ((x13&(x14|x15))<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x17 = 21U;
	static volatile uint8_t x18 = UINT8_MAX;
	uint32_t x19 = UINT32_MAX;
	int64_t x20 = INT64_MIN;
	static volatile int32_t t4 = -494;

	t4 = ((x17&(x18|x19))<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x22 = INT8_MAX;
	int16_t x23 = INT16_MIN;
	int8_t x24 = INT8_MAX;
	volatile int32_t t5 = 6978186;

	t5 = ((x21&(x22|x23))<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int16_t x25 = -1;
	static uint8_t x26 = 109U;
	uint8_t x28 = 21U;
	volatile int32_t t6 = -7828606;

	t6 = ((x25&(x26|x27))<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = UINT16_MAX;
	volatile int64_t x31 = INT64_MAX;
	int64_t x32 = INT64_MAX;
	volatile int32_t t7 = -301311;

	t7 = ((x29&(x30|x31))<x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = -1;
	int32_t x34 = INT32_MIN;
	int64_t x36 = INT64_MIN;
	static volatile int32_t t8 = 13;

	t8 = ((x33&(x34|x35))<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = UINT16_MAX;
	int32_t x38 = -2;
	uint8_t x39 = UINT8_MAX;
	static int64_t x40 = -1LL;

	t9 = ((x37&(x38|x39))<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -1;
	uint16_t x42 = UINT16_MAX;
	volatile int32_t x43 = INT32_MAX;
	int16_t x44 = INT16_MIN;
	int32_t t10 = -14473;

	t10 = ((x41&(x42|x43))<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	volatile uint64_t x46 = 499248672874381LLU;
	uint32_t x48 = 16317U;

	t11 = ((x45&(x46|x47))<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = UINT32_MAX;
	uint32_t x51 = UINT32_MAX;
	static int32_t t12 = -378967;

	t12 = ((x49&(x50|x51))<x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	static int32_t x54 = INT32_MIN;
	volatile int64_t x55 = 22994210643LL;
	int64_t x56 = INT64_MIN;
	static int32_t t13 = 0;

	t13 = ((x53&(x54|x55))<x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MIN;
	volatile int64_t x58 = INT64_MIN;
	int8_t x59 = INT8_MAX;

	t14 = ((x57&(x58|x59))<x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x64 = 298795U;

	t15 = ((x61&(x62|x63))<x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x65 = UINT32_MAX;
	static int8_t x66 = 1;
	uint32_t x67 = UINT32_MAX;
	int32_t x68 = -1;

	t16 = ((x65&(x66|x67))<x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x69 = -1927;
	static int16_t x70 = INT16_MIN;
	static int16_t x71 = -1;
	static int16_t x72 = -1;
	volatile int32_t t17 = -43811;

	t17 = ((x69&(x70|x71))<x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 882285LLU;
	uint16_t x74 = 7400U;
	static int64_t x75 = INT64_MAX;
	int32_t x76 = INT32_MIN;
	static volatile int32_t t18 = -214010473;

	t18 = ((x73&(x74|x75))<x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = 17957392U;
	static int64_t x78 = INT64_MIN;
	volatile uint8_t x79 = UINT8_MAX;
	int16_t x80 = 0;
	int32_t t19 = 3079235;

	t19 = ((x77&(x78|x79))<x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x81 = 2958LLU;
	uint64_t x82 = 2833482LLU;
	int32_t x83 = -1;
	uint64_t x84 = 12438832418682746LLU;
	static volatile int32_t t20 = -5;

	t20 = ((x81&(x82|x83))<x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x85 = UINT64_MAX;
	int16_t x86 = 0;
	int16_t x87 = INT16_MIN;
	static int32_t x88 = -378;

	t21 = ((x85&(x86|x87))<x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int8_t x89 = INT8_MAX;
	int8_t x90 = INT8_MIN;
	static volatile uint64_t x91 = UINT64_MAX;
	int8_t x92 = INT8_MAX;

	t22 = ((x89&(x90|x91))<x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x93 = -1LL;
	int8_t x94 = -14;
	int16_t x95 = 2872;
	static int64_t x96 = INT64_MIN;

	t23 = ((x93&(x94|x95))<x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = UINT32_MAX;
	uint16_t x98 = 101U;
	uint16_t x99 = 7U;
	static volatile int64_t x100 = INT64_MIN;
	int32_t t24 = -1404411;

	t24 = ((x97&(x98|x99))<x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MIN;
	int64_t x102 = -1LL;
	uint32_t x103 = 1262247U;
	int64_t x104 = INT64_MIN;
	volatile int32_t t25 = -16;

	t25 = ((x101&(x102|x103))<x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x106 = INT8_MIN;
	uint8_t x107 = 1U;
	int64_t x108 = INT64_MIN;
	volatile int32_t t26 = -17;

	t26 = ((x105&(x106|x107))<x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x110 = UINT32_MAX;
	int32_t x111 = INT32_MAX;
	static int16_t x112 = INT16_MIN;
	int32_t t27 = -11;

	t27 = ((x109&(x110|x111))<x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = -1;
	int64_t x115 = -1LL;
	int64_t x116 = INT64_MIN;
	int32_t t28 = -1025648;

	t28 = ((x113&(x114|x115))<x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x117 = -1;
	volatile int16_t x119 = INT16_MIN;
	volatile int8_t x120 = INT8_MIN;
	volatile int32_t t29 = -1805;

	t29 = ((x117&(x118|x119))<x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x121 = UINT8_MAX;
	volatile int64_t x122 = 12372986LL;
	volatile int8_t x123 = INT8_MIN;
	static uint16_t x124 = 4U;
	volatile int32_t t30 = -4;

	t30 = ((x121&(x122|x123))<x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = 71;
	static int32_t x126 = -201;
	int16_t x128 = INT16_MIN;
	int32_t t31 = -209347842;

	t31 = ((x125&(x126|x127))<x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = 2U;
	int16_t x131 = -1562;
	volatile int32_t t32 = -1765379;

	t32 = ((x129&(x130|x131))<x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x133 = UINT32_MAX;
	volatile uint32_t x134 = 81119U;
	int16_t x135 = INT16_MAX;
	int64_t x136 = INT64_MIN;
	int32_t t33 = 1065551196;

	t33 = ((x133&(x134|x135))<x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x137 = INT64_MIN;
	uint32_t x138 = 768452U;
	int16_t x139 = -1;

	t34 = ((x137&(x138|x139))<x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = 291LLU;
	int8_t x142 = INT8_MIN;
	static volatile int8_t x143 = INT8_MIN;
	static volatile int32_t t35 = -6;

	t35 = ((x141&(x142|x143))<x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MAX;
	static uint64_t x146 = 1453729LLU;
	uint16_t x147 = 2070U;
	int8_t x148 = INT8_MAX;
	static int32_t t36 = 699;

	t36 = ((x145&(x146|x147))<x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x151 = 2653U;
	uint64_t x152 = 26453229685LLU;
	volatile int32_t t37 = 2685416;

	t37 = ((x149&(x150|x151))<x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x156 = INT8_MIN;
	int32_t t38 = 5302;

	t38 = ((x153&(x154|x155))<x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x158 = INT8_MIN;
	int16_t x160 = INT16_MIN;
	static int32_t t39 = 1;

	t39 = ((x157&(x158|x159))<x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = INT64_MIN;
	int16_t x162 = INT16_MAX;
	static volatile uint8_t x164 = 5U;
	volatile int32_t t40 = 0;

	t40 = ((x161&(x162|x163))<x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MAX;
	int32_t x167 = -1;
	volatile int32_t t41 = 26;

	t41 = ((x165&(x166|x167))<x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x170 = 6U;
	static int32_t x171 = INT32_MIN;
	static uint8_t x172 = UINT8_MAX;
	volatile int32_t t42 = -1613;

	t42 = ((x169&(x170|x171))<x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MAX;
	int16_t x174 = -6;
	int16_t x176 = INT16_MIN;
	static volatile int32_t t43 = -7902;

	t43 = ((x173&(x174|x175))<x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x177 = 62506460;
	int8_t x178 = -5;
	uint16_t x180 = UINT16_MAX;
	volatile int32_t t44 = 499823;

	t44 = ((x177&(x178|x179))<x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x182 = INT64_MIN;
	int64_t x183 = -38385031LL;
	uint32_t x184 = 167436520U;
	int32_t t45 = 0;

	t45 = ((x181&(x182|x183))<x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x186 = INT8_MIN;
	int8_t x188 = -1;
	int32_t t46 = -58520367;

	t46 = ((x185&(x186|x187))<x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int8_t x189 = -4;
	static int8_t x190 = 1;
	int64_t x192 = INT64_MIN;

	t47 = ((x189&(x190|x191))<x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x193 = 1278;
	uint8_t x194 = UINT8_MAX;
	uint16_t x195 = 1543U;
	static int16_t x196 = INT16_MIN;
	int32_t t48 = 29764;

	t48 = ((x193&(x194|x195))<x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = 325U;
	int64_t x198 = INT64_MIN;
	uint8_t x199 = 2U;
	uint64_t x200 = 296910710703171LLU;

	t49 = ((x197&(x198|x199))<x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = -1LL;
	uint8_t x203 = 3U;
	volatile uint32_t x204 = 115724U;
	int32_t t50 = 23;

	t50 = ((x201&(x202|x203))<x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x205 = -1LL;
	volatile int32_t x206 = INT32_MAX;
	volatile int16_t x207 = INT16_MIN;
	static uint32_t x208 = 4205U;
	static int32_t t51 = -1;

	t51 = ((x205&(x206|x207))<x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x209 = -1;
	int32_t x210 = INT32_MIN;
	uint16_t x212 = 2264U;
	volatile int32_t t52 = 6613825;

	t52 = ((x209&(x210|x211))<x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x213 = INT64_MAX;
	volatile int16_t x214 = INT16_MIN;
	uint32_t x215 = 66082377U;

	t53 = ((x213&(x214|x215))<x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x218 = -3;
	volatile int8_t x219 = -19;
	static volatile uint32_t x220 = 5329087U;
	int32_t t54 = 12111;

	t54 = ((x217&(x218|x219))<x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x221 = INT64_MIN;
	uint32_t x222 = 4U;
	int8_t x223 = INT8_MAX;
	int32_t x224 = INT32_MIN;
	volatile int32_t t55 = 3325092;

	t55 = ((x221&(x222|x223))<x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = 28;
	uint64_t x226 = UINT64_MAX;
	static volatile int32_t x227 = -58093;
	int8_t x228 = INT8_MIN;
	static int32_t t56 = -5;

	t56 = ((x225&(x226|x227))<x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x230 = INT32_MIN;
	volatile int32_t x232 = -1;
	int32_t t57 = 12082312;

	t57 = ((x229&(x230|x231))<x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = 624598724;
	int16_t x235 = -42;
	static int8_t x236 = 0;
	volatile int32_t t58 = -739930;

	t58 = ((x233&(x234|x235))<x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x237 = 8500U;
	volatile int8_t x240 = INT8_MIN;
	volatile int32_t t59 = 40;

	t59 = ((x237&(x238|x239))<x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x241 = 8291U;
	volatile int8_t x242 = INT8_MIN;
	int8_t x243 = -1;
	int16_t x244 = INT16_MIN;
	volatile int32_t t60 = 182841272;

	t60 = ((x241&(x242|x243))<x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = -1;
	volatile int16_t x246 = -1;
	static uint64_t x247 = 105724046174337LLU;
	uint16_t x248 = 51U;

	t61 = ((x245&(x246|x247))<x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = INT16_MIN;
	int8_t x250 = -1;
	uint16_t x251 = UINT16_MAX;
	volatile uint64_t x252 = 1LLU;
	int32_t t62 = -8018003;

	t62 = ((x249&(x250|x251))<x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x253 = 22U;
	volatile int8_t x254 = INT8_MAX;
	int64_t x255 = -1LL;
	int64_t x256 = -1172330890475LL;
	int32_t t63 = -827965926;

	t63 = ((x253&(x254|x255))<x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x257 = 1383535U;
	static int32_t x258 = -58827;
	static uint16_t x259 = 1U;
	volatile uint32_t x260 = 4824U;
	volatile int32_t t64 = -15;

	t64 = ((x257&(x258|x259))<x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = -1;
	uint16_t x262 = UINT16_MAX;
	uint8_t x263 = 15U;
	uint8_t x264 = UINT8_MAX;
	int32_t t65 = -862402774;

	t65 = ((x261&(x262|x263))<x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = 14184957;
	static uint8_t x266 = UINT8_MAX;
	static int8_t x267 = -11;
	static int16_t x268 = -1;
	volatile int32_t t66 = 1039;

	t66 = ((x265&(x266|x267))<x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int8_t x269 = 3;
	int64_t x270 = -30618954LL;
	volatile int16_t x271 = INT16_MIN;
	uint8_t x272 = 55U;
	int32_t t67 = 298;

	t67 = ((x269&(x270|x271))<x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x274 = INT64_MIN;
	uint64_t x275 = 205LLU;
	volatile uint16_t x276 = 2U;

	t68 = ((x273&(x274|x275))<x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MIN;
	static int16_t x278 = INT16_MAX;
	int32_t x279 = 265732497;
	int32_t t69 = -182843;

	t69 = ((x277&(x278|x279))<x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x281 = -12;
	int8_t x282 = INT8_MIN;
	int16_t x284 = INT16_MAX;
	static int32_t t70 = 3;

	t70 = ((x281&(x282|x283))<x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = 7068892562493426LLU;
	int16_t x286 = INT16_MIN;
	uint8_t x287 = UINT8_MAX;
	int64_t x288 = -208208LL;

	t71 = ((x285&(x286|x287))<x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x289 = INT64_MIN;
	volatile int8_t x290 = -1;
	volatile int32_t t72 = 4789814;

	t72 = ((x289&(x290|x291))<x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = INT16_MIN;
	int8_t x294 = INT8_MIN;
	volatile int8_t x295 = INT8_MAX;
	static int16_t x296 = INT16_MAX;
	int32_t t73 = 1944921;

	t73 = ((x293&(x294|x295))<x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x297 = UINT32_MAX;
	volatile int64_t x298 = INT64_MIN;
	uint8_t x299 = UINT8_MAX;
	uint64_t x300 = 1079817055LLU;
	volatile int32_t t74 = 1328;

	t74 = ((x297&(x298|x299))<x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x302 = -31;
	volatile int8_t x303 = INT8_MIN;
	static volatile uint32_t x304 = 118635U;

	t75 = ((x301&(x302|x303))<x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x305 = 4U;
	int32_t x307 = -1;
	int32_t x308 = INT32_MIN;

	t76 = ((x305&(x306|x307))<x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x309 = -1;
	uint64_t x311 = 16997LLU;
	volatile uint8_t x312 = 24U;
	static int32_t t77 = -22319218;

	t77 = ((x309&(x310|x311))<x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = INT32_MIN;
	uint32_t x314 = 111U;
	int64_t x315 = INT64_MIN;
	static int16_t x316 = -1;
	static volatile int32_t t78 = 1504;

	t78 = ((x313&(x314|x315))<x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = UINT32_MAX;
	int16_t x318 = -1;
	volatile int64_t x319 = INT64_MIN;
	static int32_t x320 = -692477086;
	volatile int32_t t79 = -1;

	t79 = ((x317&(x318|x319))<x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = INT16_MIN;
	int16_t x322 = -1;
	static int64_t x323 = 421454LL;
	volatile uint32_t x324 = UINT32_MAX;
	static int32_t t80 = -27579635;

	t80 = ((x321&(x322|x323))<x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x328 = INT16_MIN;

	t81 = ((x325&(x326|x327))<x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = INT8_MIN;
	int32_t x331 = 216088;
	int32_t x332 = INT32_MIN;

	t82 = ((x329&(x330|x331))<x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int32_t x333 = INT32_MIN;
	uint32_t x335 = 976515644U;
	volatile int32_t x336 = INT32_MAX;
	volatile int32_t t83 = 108560;

	t83 = ((x333&(x334|x335))<x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x338 = 7U;
	static volatile int8_t x339 = INT8_MAX;
	static int64_t x340 = -1LL;
	int32_t t84 = 1848650;

	t84 = ((x337&(x338|x339))<x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x341 = INT16_MIN;
	uint32_t x342 = 51510015U;
	volatile int64_t x343 = 70513LL;
	static volatile int64_t x344 = INT64_MAX;

	t85 = ((x341&(x342|x343))<x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = INT64_MIN;
	uint32_t x346 = UINT32_MAX;
	int16_t x347 = -1;
	volatile int32_t t86 = -36897;

	t86 = ((x345&(x346|x347))<x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = -1;
	int16_t x350 = INT16_MIN;
	uint16_t x351 = UINT16_MAX;
	int8_t x352 = INT8_MIN;

	t87 = ((x349&(x350|x351))<x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x353 = -156;
	int32_t x355 = -1;
	int64_t x356 = INT64_MAX;

	t88 = ((x353&(x354|x355))<x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x357 = -1LL;
	uint32_t x358 = 500400U;
	static int64_t x359 = INT64_MIN;
	int64_t x360 = INT64_MAX;
	volatile int32_t t89 = -99328;

	t89 = ((x357&(x358|x359))<x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x361 = INT32_MIN;
	volatile uint32_t x362 = 35650U;
	int32_t x363 = -1470856;
	static int64_t x364 = -106357233LL;
	volatile int32_t t90 = -2537130;

	t90 = ((x361&(x362|x363))<x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x366 = -1;
	volatile int64_t x368 = -8823603258065053LL;
	int32_t t91 = 26393;

	t91 = ((x365&(x366|x367))<x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = INT64_MIN;
	static int32_t x370 = INT32_MIN;
	uint64_t x371 = 215804678439815LLU;
	int8_t x372 = -54;

	t92 = ((x369&(x370|x371))<x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x373 = -1;
	int64_t x374 = INT64_MAX;
	int8_t x375 = -1;
	volatile int32_t t93 = 1;

	t93 = ((x373&(x374|x375))<x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x377 = -1;
	volatile int8_t x378 = INT8_MIN;
	uint8_t x379 = 13U;
	int16_t x380 = INT16_MIN;
	volatile int32_t t94 = -56474046;

	t94 = ((x377&(x378|x379))<x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = 8157LL;
	int8_t x383 = 10;
	int64_t x384 = -1LL;
	int32_t t95 = -3501;

	t95 = ((x381&(x382|x383))<x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = INT64_MIN;
	static volatile int32_t x386 = -1;
	uint32_t x387 = 336590075U;
	static uint64_t x388 = 158514LLU;
	int32_t t96 = 23336;

	t96 = ((x385&(x386|x387))<x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x390 = UINT64_MAX;
	int16_t x391 = INT16_MIN;
	static uint8_t x392 = 1U;
	volatile int32_t t97 = -9254542;

	t97 = ((x389&(x390|x391))<x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = INT32_MAX;
	volatile int16_t x394 = -73;
	int64_t x395 = -27384772LL;
	int8_t x396 = -1;
	volatile int32_t t98 = -1;

	t98 = ((x393&(x394|x395))<x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x397 = INT64_MIN;
	uint8_t x398 = 31U;
	uint16_t x399 = 20620U;
	int32_t x400 = INT32_MIN;

	t99 = ((x397&(x398|x399))<x400);

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

