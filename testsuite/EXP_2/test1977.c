#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x4 = 8;
volatile int32_t t0 = -378480964;
static uint16_t x6 = UINT16_MAX;
volatile int8_t x7 = INT8_MAX;
int8_t x10 = 0;
static volatile int64_t t3 = -17189624473146LL;
int64_t x17 = -1LL;
volatile uint16_t x18 = 3765U;
int32_t t4 = -5;
static uint16_t x22 = 362U;
static int16_t x24 = -1950;
static int32_t x29 = INT32_MAX;
static int64_t x32 = -15679335LL;
volatile int64_t t7 = -7635LL;
int32_t x38 = INT32_MIN;
volatile uint64_t x39 = 26000707440718335LLU;
static volatile int16_t x40 = INT16_MIN;
volatile int32_t t9 = 102449;
static int64_t x59 = INT64_MIN;
int32_t t15 = -164;
int64_t x71 = INT64_MIN;
int64_t x75 = -1LL;
int16_t x77 = INT16_MIN;
volatile int32_t t20 = -4;
int64_t x98 = -34059LL;
uint64_t x99 = 2379511780LLU;
static int8_t x113 = 2;
int32_t x114 = INT32_MAX;
static int8_t x115 = INT8_MAX;
int8_t x122 = -1;
static int32_t t29 = -854524379;
int64_t x132 = -10735LL;
volatile int64_t t30 = -1157687LL;
uint32_t t31 = 11262U;
volatile uint32_t x137 = 72U;
static volatile uint32_t x144 = 1813360737U;
uint32_t t33 = 48U;
static int32_t x146 = INT32_MAX;
int8_t x150 = 58;
volatile int32_t t36 = -504;
static int16_t x166 = -1;
int8_t x173 = 1;
static int8_t x176 = 27;
volatile int16_t x179 = INT16_MIN;
static volatile int32_t x182 = INT32_MIN;
volatile int32_t t43 = 0;
volatile int32_t t44 = 0;
uint16_t x190 = UINT16_MAX;
static volatile int64_t x191 = -2569291676547LL;
uint16_t x194 = 8U;
static int8_t x199 = -18;
uint8_t x203 = 7U;
static int16_t x207 = -1;
static volatile uint64_t x209 = UINT64_MAX;
int32_t x212 = -1;
int8_t x213 = -1;
int64_t x216 = INT64_MAX;
uint16_t x217 = 80U;
volatile int32_t t53 = 1;
static uint16_t x238 = 7U;
int64_t t57 = 151732691LL;
volatile int16_t x249 = -1;
uint16_t x256 = 1U;
volatile int8_t x262 = -1;
uint16_t x268 = 481U;
static int32_t x272 = INT32_MIN;
int8_t x274 = INT8_MIN;
volatile int32_t t66 = 890179;
static volatile int16_t x292 = INT16_MIN;
int32_t t69 = 59906;
uint8_t x304 = UINT8_MAX;
uint16_t x310 = UINT16_MAX;
int32_t x312 = -1;
uint32_t x315 = 505998777U;
uint16_t x317 = 255U;
volatile int8_t x327 = -1;
int64_t t78 = -59840391LL;
int8_t x330 = INT8_MIN;
int16_t x336 = INT16_MIN;
int32_t t81 = 407494;
int64_t x342 = 0LL;
int32_t t82 = 26424;
int8_t x348 = -1;
volatile int32_t t83 = -5;
volatile uint32_t x355 = 2U;
volatile int32_t t85 = -84634;
uint8_t x362 = 61U;
int8_t x367 = INT8_MIN;
volatile int32_t t88 = INT32_MAX;
static int32_t x369 = INT32_MIN;
static uint16_t x375 = 6U;
int64_t x376 = 3599LL;
int16_t x380 = INT16_MIN;
static int8_t x384 = -15;
static volatile uint16_t x386 = UINT16_MAX;
int64_t x388 = 15697LL;
int64_t t93 = -1228777781808455695LL;
int32_t x390 = INT32_MAX;
int8_t x403 = INT8_MIN;
int64_t x406 = -92466131153034651LL;
int16_t x412 = INT16_MAX;
int32_t t99 = 118763152;


void f0(void) {
	static int32_t x1 = -1;
	static uint16_t x2 = 2U;
	static int64_t x3 = -1LL;

	t0 = ((x1<=(x2|x3))+x4);

	if (t0 != 9) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = -3338280LL;
	int64_t x8 = -104226636748LL;
	int64_t t1 = -1LL;

	t1 = ((x5<=(x6|x7))+x8);

	if (t1 != -104226636747LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	static volatile int64_t x11 = -1LL;
	int64_t x12 = 1LL;
	int64_t t2 = 24385738945960LL;

	t2 = ((x9<=(x10|x11))+x12);

	if (t2 != 1LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	volatile int64_t x14 = INT64_MAX;
	volatile int8_t x15 = 0;
	int64_t x16 = -1LL;

	t3 = ((x13<=(x14|x15))+x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x19 = UINT16_MAX;
	static uint8_t x20 = UINT8_MAX;

	t4 = ((x17<=(x18|x19))+x20);

	if (t4 != 256) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 74U;
	volatile uint8_t x23 = 1U;
	int32_t t5 = 7230934;

	t5 = ((x21<=(x22|x23))+x24);

	if (t5 != -1949) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x25 = UINT8_MAX;
	int64_t x26 = 425301717412411LL;
	int16_t x27 = -1;
	static int64_t x28 = INT64_MIN;
	volatile int64_t t6 = INT64_MIN;

	t6 = ((x25<=(x26|x27))+x28);

	if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int8_t x30 = INT8_MIN;
	uint32_t x31 = UINT32_MAX;

	t7 = ((x29<=(x30|x31))+x32);

	if (t7 != -15679334LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	uint16_t x34 = 1U;
	static int32_t x35 = -1;
	static uint16_t x36 = UINT16_MAX;
	int32_t t8 = 51319616;

	t8 = ((x33<=(x34|x35))+x36);

	if (t8 != 65536) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = UINT8_MAX;

	t9 = ((x37<=(x38|x39))+x40);

	if (t9 != -32767) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -2195;
	int8_t x42 = INT8_MIN;
	static int64_t x43 = INT64_MIN;
	static uint32_t x44 = 2034989U;
	volatile uint32_t t10 = 74744U;

	t10 = ((x41<=(x42|x43))+x44);

	if (t10 != 2034990U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x45 = -1;
	static uint32_t x46 = 1449332U;
	volatile uint32_t x47 = 3301U;
	volatile int64_t x48 = INT64_MIN;
	volatile int64_t t11 = INT64_MIN;

	t11 = ((x45<=(x46|x47))+x48);

	if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -1;
	int32_t x50 = INT32_MIN;
	int64_t x51 = -1LL;
	uint64_t x52 = 24769585114224LLU;
	uint64_t t12 = 6LLU;

	t12 = ((x49<=(x50|x51))+x52);

	if (t12 != 24769585114225LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	int8_t x54 = -1;
	static int8_t x55 = -1;
	int16_t x56 = -3531;
	int32_t t13 = 2069;

	t13 = ((x53<=(x54|x55))+x56);

	if (t13 != -3530) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 0U;
	volatile uint8_t x58 = 2U;
	static int16_t x60 = INT16_MIN;
	volatile int32_t t14 = -956204995;

	t14 = ((x57<=(x58|x59))+x60);

	if (t14 != -32768) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = 240995LLU;
	volatile uint32_t x62 = UINT32_MAX;
	volatile uint32_t x63 = 174U;
	volatile int16_t x64 = INT16_MAX;

	t15 = ((x61<=(x62|x63))+x64);

	if (t15 != 32768) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x69 = 9127U;
	uint16_t x70 = 4U;
	uint8_t x72 = 0U;
	int32_t t16 = -308813;

	t16 = ((x69<=(x70|x71))+x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x73 = 2307LLU;
	int64_t x74 = 967569506LL;
	uint16_t x76 = 7469U;
	volatile int32_t t17 = 58;

	t17 = ((x73<=(x74|x75))+x76);

	if (t17 != 7470) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x78 = 2600U;
	int64_t x79 = -1LL;
	uint16_t x80 = 1793U;
	static int32_t t18 = -18123767;

	t18 = ((x77<=(x78|x79))+x80);

	if (t18 != 1794) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = 1896270861331LL;
	static int64_t x82 = INT64_MIN;
	volatile uint16_t x83 = 2U;
	volatile uint32_t x84 = UINT32_MAX;
	static uint32_t t19 = UINT32_MAX;

	t19 = ((x81<=(x82|x83))+x84);

	if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x85 = 14586321U;
	int32_t x86 = 725;
	int16_t x87 = 14257;
	int8_t x88 = INT8_MIN;

	t20 = ((x85<=(x86|x87))+x88);

	if (t20 != -128) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = -22;
	int64_t x90 = 6LL;
	int8_t x91 = INT8_MAX;
	static uint8_t x92 = UINT8_MAX;
	int32_t t21 = 43422;

	t21 = ((x89<=(x90|x91))+x92);

	if (t21 != 256) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x93 = 3116205;
	int32_t x94 = INT32_MIN;
	int8_t x95 = -1;
	int16_t x96 = INT16_MAX;
	int32_t t22 = 2887558;

	t22 = ((x93<=(x94|x95))+x96);

	if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x97 = 2LL;
	int16_t x100 = -1;
	volatile int32_t t23 = -3194718;

	t23 = ((x97<=(x98|x99))+x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x101 = INT32_MIN;
	static uint16_t x102 = UINT16_MAX;
	static int8_t x103 = 19;
	int32_t x104 = 2822286;
	int32_t t24 = -56032662;

	t24 = ((x101<=(x102|x103))+x104);

	if (t24 != 2822287) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x105 = 6081180;
	int8_t x106 = INT8_MIN;
	int16_t x107 = 28;
	static int32_t x108 = 65424;
	int32_t t25 = -18603;

	t25 = ((x105<=(x106|x107))+x108);

	if (t25 != 65424) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x109 = -1;
	volatile uint16_t x110 = 1U;
	uint8_t x111 = 0U;
	int8_t x112 = 2;
	volatile int32_t t26 = 0;

	t26 = ((x109<=(x110|x111))+x112);

	if (t26 != 3) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x116 = -1723580810386535LL;
	int64_t t27 = -959LL;

	t27 = ((x113<=(x114|x115))+x116);

	if (t27 != -1723580810386534LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x117 = INT64_MIN;
	volatile int64_t x118 = INT64_MAX;
	int32_t x119 = -1164002;
	int64_t x120 = INT64_MIN;
	int64_t t28 = 32742994LL;

	t28 = ((x117<=(x118|x119))+x120);

	if (t28 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x121 = INT16_MIN;
	int64_t x123 = 1777362LL;
	volatile int8_t x124 = INT8_MIN;

	t29 = ((x121<=(x122|x123))+x124);

	if (t29 != -127) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x129 = INT64_MIN;
	int16_t x130 = INT16_MIN;
	int32_t x131 = -1;

	t30 = ((x129<=(x130|x131))+x132);

	if (t30 != -10734LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x133 = 1849480668LL;
	uint8_t x134 = UINT8_MAX;
	int16_t x135 = -1;
	volatile uint32_t x136 = 0U;

	t31 = ((x133<=(x134|x135))+x136);

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x138 = 4443LL;
	int32_t x139 = INT32_MIN;
	static int64_t x140 = -3566528LL;
	volatile int64_t t32 = 2756127LL;

	t32 = ((x137<=(x138|x139))+x140);

	if (t32 != -3566528LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x141 = INT8_MAX;
	static volatile int8_t x142 = INT8_MAX;
	uint64_t x143 = 8563937415061LLU;

	t33 = ((x141<=(x142|x143))+x144);

	if (t33 != 1813360738U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x145 = 2693916069600LL;
	static int16_t x147 = -1;
	int16_t x148 = INT16_MAX;
	int32_t t34 = 3238399;

	t34 = ((x145<=(x146|x147))+x148);

	if (t34 != 32767) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x149 = 0;
	uint64_t x151 = 8785075897660992LLU;
	uint8_t x152 = UINT8_MAX;
	volatile int32_t t35 = 2547168;

	t35 = ((x149<=(x150|x151))+x152);

	if (t35 != 256) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x153 = 2011826764848851LLU;
	int8_t x154 = -1;
	int32_t x155 = INT32_MAX;
	volatile int16_t x156 = INT16_MIN;

	t36 = ((x153<=(x154|x155))+x156);

	if (t36 != -32767) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x157 = -2;
	uint32_t x158 = UINT32_MAX;
	volatile int64_t x159 = INT64_MAX;
	volatile uint8_t x160 = 2U;
	static int32_t t37 = 1095;

	t37 = ((x157<=(x158|x159))+x160);

	if (t37 != 3) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x161 = 30LL;
	uint32_t x162 = UINT32_MAX;
	int16_t x163 = INT16_MIN;
	volatile uint32_t x164 = UINT32_MAX;
	volatile uint32_t t38 = 27302U;

	t38 = ((x161<=(x162|x163))+x164);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x165 = INT16_MIN;
	volatile int32_t x167 = INT32_MIN;
	int16_t x168 = 4;
	static volatile int32_t t39 = 37792377;

	t39 = ((x165<=(x166|x167))+x168);

	if (t39 != 5) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x169 = -1;
	volatile uint16_t x170 = UINT16_MAX;
	int64_t x171 = -1LL;
	int8_t x172 = INT8_MAX;
	volatile int32_t t40 = -29757;

	t40 = ((x169<=(x170|x171))+x172);

	if (t40 != 128) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x174 = INT64_MIN;
	int64_t x175 = INT64_MIN;
	static int32_t t41 = -14909705;

	t41 = ((x173<=(x174|x175))+x176);

	if (t41 != 27) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x177 = -1LL;
	int32_t x178 = 267;
	int64_t x180 = -1LL;
	volatile int64_t t42 = -12655279LL;

	t42 = ((x177<=(x178|x179))+x180);

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x181 = -1;
	int64_t x183 = INT64_MAX;
	int32_t x184 = INT32_MIN;

	t43 = ((x181<=(x182|x183))+x184);

	if (t43 != -2147483647) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x185 = 45;
	static int64_t x186 = INT64_MAX;
	int8_t x187 = INT8_MIN;
	int16_t x188 = INT16_MIN;

	t44 = ((x185<=(x186|x187))+x188);

	if (t44 != -32768) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x189 = UINT8_MAX;
	int64_t x192 = -1LL;
	volatile int64_t t45 = -260657809565061458LL;

	t45 = ((x189<=(x190|x191))+x192);

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x193 = INT32_MAX;
	uint16_t x195 = 2U;
	volatile int32_t x196 = INT32_MAX;
	volatile int32_t t46 = INT32_MAX;

	t46 = ((x193<=(x194|x195))+x196);

	if (t46 != INT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x197 = 1978263LL;
	int64_t x198 = -2129330LL;
	int32_t x200 = -1;
	volatile int32_t t47 = 17896354;

	t47 = ((x197<=(x198|x199))+x200);

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x201 = INT64_MIN;
	int8_t x202 = INT8_MIN;
	int8_t x204 = INT8_MIN;
	volatile int32_t t48 = -674534970;

	t48 = ((x201<=(x202|x203))+x204);

	if (t48 != -127) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x205 = UINT16_MAX;
	volatile int64_t x206 = INT64_MIN;
	int64_t x208 = -1LL;
	int64_t t49 = 0LL;

	t49 = ((x205<=(x206|x207))+x208);

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x210 = 364LLU;
	int64_t x211 = -19LL;
	static int32_t t50 = 26;

	t50 = ((x209<=(x210|x211))+x212);

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x214 = 7;
	static int8_t x215 = -48;
	int64_t t51 = INT64_MAX;

	t51 = ((x213<=(x214|x215))+x216);

	if (t51 != INT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x218 = UINT16_MAX;
	int16_t x219 = 1;
	static uint16_t x220 = 5U;
	volatile int32_t t52 = -6642;

	t52 = ((x217<=(x218|x219))+x220);

	if (t52 != 6) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x221 = 3U;
	int8_t x222 = INT8_MAX;
	int32_t x223 = INT32_MIN;
	uint16_t x224 = UINT16_MAX;

	t53 = ((x221<=(x222|x223))+x224);

	if (t53 != 65535) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x225 = 1LL;
	int16_t x226 = -3267;
	static int16_t x227 = -1;
	uint8_t x228 = UINT8_MAX;
	static volatile int32_t t54 = 57992;

	t54 = ((x225<=(x226|x227))+x228);

	if (t54 != 255) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x229 = -32481;
	int8_t x230 = INT8_MAX;
	static int64_t x231 = INT64_MAX;
	static volatile uint32_t x232 = 146U;
	volatile uint32_t t55 = 78330U;

	t55 = ((x229<=(x230|x231))+x232);

	if (t55 != 147U) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x233 = UINT16_MAX;
	static uint8_t x234 = 3U;
	volatile int8_t x235 = -1;
	int16_t x236 = INT16_MAX;
	static int32_t t56 = 4;

	t56 = ((x233<=(x234|x235))+x236);

	if (t56 != 32767) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x237 = UINT16_MAX;
	volatile int32_t x239 = INT32_MAX;
	volatile int64_t x240 = INT64_MIN;

	t57 = ((x237<=(x238|x239))+x240);

	if (t57 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x241 = -25495367454815459LL;
	static volatile int16_t x242 = INT16_MIN;
	uint32_t x243 = 2517U;
	volatile uint16_t x244 = 11198U;
	volatile int32_t t58 = -157;

	t58 = ((x241<=(x242|x243))+x244);

	if (t58 != 11199) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x245 = -1;
	int64_t x246 = -1LL;
	uint8_t x247 = 4U;
	int8_t x248 = INT8_MIN;
	static volatile int32_t t59 = 51506;

	t59 = ((x245<=(x246|x247))+x248);

	if (t59 != -127) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x250 = 46U;
	int32_t x251 = INT32_MIN;
	int32_t x252 = INT32_MAX;
	int32_t t60 = INT32_MAX;

	t60 = ((x249<=(x250|x251))+x252);

	if (t60 != INT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x253 = INT16_MIN;
	static uint64_t x254 = UINT64_MAX;
	int32_t x255 = INT32_MIN;
	int32_t t61 = 908074998;

	t61 = ((x253<=(x254|x255))+x256);

	if (t61 != 2) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x257 = INT64_MIN;
	static uint8_t x258 = UINT8_MAX;
	int16_t x259 = 32;
	volatile uint8_t x260 = UINT8_MAX;
	int32_t t62 = 100;

	t62 = ((x257<=(x258|x259))+x260);

	if (t62 != 256) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x261 = INT8_MIN;
	static uint32_t x263 = 132565U;
	int64_t x264 = 33569312827851830LL;
	int64_t t63 = -13462346495211785LL;

	t63 = ((x261<=(x262|x263))+x264);

	if (t63 != 33569312827851831LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x265 = -1;
	uint16_t x266 = 3U;
	uint32_t x267 = 1U;
	volatile int32_t t64 = -39778326;

	t64 = ((x265<=(x266|x267))+x268);

	if (t64 != 481) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x269 = INT64_MIN;
	uint8_t x270 = 5U;
	static int64_t x271 = 7LL;
	int32_t t65 = 50087;

	t65 = ((x269<=(x270|x271))+x272);

	if (t65 != -2147483647) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x273 = 16;
	static int8_t x275 = -1;
	int16_t x276 = INT16_MIN;

	t66 = ((x273<=(x274|x275))+x276);

	if (t66 != -32768) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int64_t x277 = INT64_MIN;
	uint32_t x278 = 1368732004U;
	uint8_t x279 = 4U;
	uint32_t x280 = 745U;
	uint32_t t67 = 223032057U;

	t67 = ((x277<=(x278|x279))+x280);

	if (t67 != 746U) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x285 = 215222399U;
	static volatile uint32_t x286 = 7U;
	int32_t x287 = INT32_MIN;
	static int8_t x288 = -1;
	int32_t t68 = 120;

	t68 = ((x285<=(x286|x287))+x288);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x289 = INT16_MIN;
	uint32_t x290 = 7013U;
	uint16_t x291 = 149U;

	t69 = ((x289<=(x290|x291))+x292);

	if (t69 != -32768) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x293 = 46;
	int64_t x294 = 95449435927LL;
	static int64_t x295 = INT64_MIN;
	int32_t x296 = INT32_MIN;
	int32_t t70 = INT32_MIN;

	t70 = ((x293<=(x294|x295))+x296);

	if (t70 != INT32_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x297 = -1LL;
	uint16_t x298 = 14U;
	volatile uint64_t x299 = UINT64_MAX;
	volatile int64_t x300 = INT64_MIN;
	volatile int64_t t71 = -827669594LL;

	t71 = ((x297<=(x298|x299))+x300);

	if (t71 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x301 = UINT8_MAX;
	volatile int64_t x302 = INT64_MIN;
	static volatile int32_t x303 = INT32_MAX;
	int32_t t72 = 3218021;

	t72 = ((x301<=(x302|x303))+x304);

	if (t72 != 255) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x305 = INT8_MAX;
	static uint8_t x306 = 2U;
	uint64_t x307 = 2558137392259LLU;
	static volatile uint8_t x308 = 0U;
	int32_t t73 = 362022287;

	t73 = ((x305<=(x306|x307))+x308);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x309 = -1;
	volatile int64_t x311 = 163290LL;
	int32_t t74 = 187;

	t74 = ((x309<=(x310|x311))+x312);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x313 = -1;
	volatile uint16_t x314 = 235U;
	int64_t x316 = INT64_MIN;
	volatile int64_t t75 = INT64_MIN;

	t75 = ((x313<=(x314|x315))+x316);

	if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x318 = INT16_MIN;
	int8_t x319 = INT8_MAX;
	int64_t x320 = INT64_MIN;
	volatile int64_t t76 = INT64_MIN;

	t76 = ((x317<=(x318|x319))+x320);

	if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x321 = 25580U;
	static int64_t x322 = INT64_MIN;
	uint32_t x323 = 635U;
	int16_t x324 = -2;
	int32_t t77 = -1;

	t77 = ((x321<=(x322|x323))+x324);

	if (t77 != -2) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x325 = -8;
	uint32_t x326 = 3354682U;
	int64_t x328 = 0LL;

	t78 = ((x325<=(x326|x327))+x328);

	if (t78 != 1LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x329 = 2U;
	uint16_t x331 = 3U;
	volatile int32_t x332 = INT32_MIN;
	static int32_t t79 = INT32_MIN;

	t79 = ((x329<=(x330|x331))+x332);

	if (t79 != INT32_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x333 = -13;
	int16_t x334 = -136;
	int16_t x335 = -1;
	static volatile int32_t t80 = -1778;

	t80 = ((x333<=(x334|x335))+x336);

	if (t80 != -32767) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x337 = UINT16_MAX;
	static int64_t x338 = -1LL;
	int64_t x339 = -1LL;
	int16_t x340 = INT16_MAX;

	t81 = ((x337<=(x338|x339))+x340);

	if (t81 != 32767) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x341 = -1;
	volatile int32_t x343 = INT32_MIN;
	int32_t x344 = 50828665;

	t82 = ((x341<=(x342|x343))+x344);

	if (t82 != 50828665) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x345 = -1LL;
	int64_t x346 = -13534LL;
	static uint32_t x347 = 4871U;

	t83 = ((x345<=(x346|x347))+x348);

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x349 = INT8_MIN;
	int32_t x350 = 382;
	static int8_t x351 = INT8_MIN;
	static uint16_t x352 = 38U;
	int32_t t84 = -1;

	t84 = ((x349<=(x350|x351))+x352);

	if (t84 != 39) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x353 = INT16_MAX;
	int8_t x354 = -51;
	int16_t x356 = 18;

	t85 = ((x353<=(x354|x355))+x356);

	if (t85 != 19) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x357 = 9;
	static int16_t x358 = INT16_MIN;
	int16_t x359 = 1501;
	volatile uint64_t x360 = UINT64_MAX;
	volatile uint64_t t86 = UINT64_MAX;

	t86 = ((x357<=(x358|x359))+x360);

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x361 = 902690LL;
	int32_t x363 = -2384337;
	static int8_t x364 = 6;
	int32_t t87 = -486125;

	t87 = ((x361<=(x362|x363))+x364);

	if (t87 != 6) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x365 = 9619206;
	int8_t x366 = INT8_MIN;
	int32_t x368 = INT32_MAX;

	t88 = ((x365<=(x366|x367))+x368);

	if (t88 != INT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x370 = 26235795053608299LL;
	uint16_t x371 = UINT16_MAX;
	int32_t x372 = INT32_MIN;
	volatile int32_t t89 = -32960;

	t89 = ((x369<=(x370|x371))+x372);

	if (t89 != -2147483647) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x373 = 14390U;
	int16_t x374 = INT16_MIN;
	volatile int64_t t90 = -77980LL;

	t90 = ((x373<=(x374|x375))+x376);

	if (t90 != 3599LL) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int64_t x377 = -1LL;
	static int16_t x378 = INT16_MIN;
	static int32_t x379 = -1;
	volatile int32_t t91 = -1693184;

	t91 = ((x377<=(x378|x379))+x380);

	if (t91 != -32767) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x381 = INT64_MAX;
	uint32_t x382 = 313165801U;
	uint8_t x383 = 3U;
	volatile int32_t t92 = 233635450;

	t92 = ((x381<=(x382|x383))+x384);

	if (t92 != -15) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x385 = INT16_MIN;
	uint64_t x387 = 59784735050683750LLU;

	t93 = ((x385<=(x386|x387))+x388);

	if (t93 != 15697LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x389 = -6480425;
	int64_t x391 = 26LL;
	static volatile uint8_t x392 = UINT8_MAX;
	volatile int32_t t94 = -5106411;

	t94 = ((x389<=(x390|x391))+x392);

	if (t94 != 256) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x393 = -1;
	uint64_t x394 = 30436667667986LLU;
	static uint16_t x395 = UINT16_MAX;
	volatile int8_t x396 = INT8_MIN;
	static volatile int32_t t95 = -72;

	t95 = ((x393<=(x394|x395))+x396);

	if (t95 != -128) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x397 = UINT16_MAX;
	int8_t x398 = 1;
	int64_t x399 = -1038510923583613514LL;
	static uint32_t x400 = 653U;
	uint32_t t96 = 36926U;

	t96 = ((x397<=(x398|x399))+x400);

	if (t96 != 653U) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x401 = 1U;
	int64_t x402 = -1LL;
	static uint32_t x404 = 1509523444U;
	uint32_t t97 = 2833662U;

	t97 = ((x401<=(x402|x403))+x404);

	if (t97 != 1509523444U) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x405 = 12522298910040LL;
	int32_t x407 = INT32_MIN;
	uint8_t x408 = 18U;
	volatile int32_t t98 = -799;

	t98 = ((x405<=(x406|x407))+x408);

	if (t98 != 18) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x409 = INT32_MIN;
	int32_t x410 = INT32_MIN;
	int64_t x411 = INT64_MAX;

	t99 = ((x409<=(x410|x411))+x412);

	if (t99 != 32768) { NG(); } else { ; }
	
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

