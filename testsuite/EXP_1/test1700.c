#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x5 = 5U;
int32_t t1 = 31627;
volatile int32_t t4 = -572626;
uint16_t x23 = 230U;
uint64_t x25 = 326LLU;
static volatile uint32_t x28 = UINT32_MAX;
int8_t x31 = INT8_MIN;
static int8_t x36 = INT8_MIN;
int8_t x37 = INT8_MIN;
int16_t x45 = -189;
volatile int16_t x46 = -1;
int64_t x52 = INT64_MAX;
volatile int32_t t12 = 4699143;
int32_t x55 = 1786;
int8_t x70 = INT8_MIN;
uint8_t x71 = UINT8_MAX;
int8_t x82 = 1;
int32_t t20 = 406096326;
volatile int64_t x91 = 289880LL;
int64_t x105 = INT64_MIN;
uint64_t x111 = 6549LLU;
volatile uint32_t x117 = 2823U;
uint16_t x127 = UINT16_MAX;
uint64_t x132 = 2348379686020698LLU;
uint32_t x135 = 0U;
int16_t x147 = INT16_MAX;
int32_t x156 = 3;
int16_t x160 = INT16_MAX;
int32_t t36 = -720;
volatile int32_t t37 = -4;
static volatile int32_t x174 = -2314;
int16_t x175 = -1;
uint32_t x182 = 5711644U;
static volatile int16_t x186 = INT16_MAX;
volatile int32_t t44 = 1804;
static int64_t x193 = INT64_MIN;
volatile uint16_t x209 = UINT16_MAX;
int8_t x212 = -7;
int16_t x215 = INT16_MIN;
int16_t x218 = INT16_MIN;
volatile int8_t x220 = INT8_MIN;
uint16_t x221 = 5U;
int16_t x223 = 10;
volatile int32_t t51 = 351029;
int64_t x226 = INT64_MIN;
int32_t t52 = -185369;
int8_t x229 = -1;
static uint8_t x233 = UINT8_MAX;
int32_t t54 = -57835;
static uint32_t x241 = UINT32_MAX;
int16_t x243 = -1;
volatile int16_t x245 = -1;
static int64_t x249 = -1LL;
volatile int8_t x252 = INT8_MIN;
uint16_t x261 = UINT16_MAX;
static int8_t x273 = INT8_MIN;
uint16_t x282 = UINT16_MAX;
volatile uint16_t x286 = 0U;
int16_t x287 = INT16_MIN;
int64_t x290 = INT64_MIN;
int32_t t67 = 2;
uint16_t x298 = UINT16_MAX;
int16_t x299 = -1;
int32_t t68 = 539;
static int8_t x309 = -1;
int8_t x317 = -29;
int16_t x323 = -1;
int32_t t74 = -402888360;
uint32_t x325 = UINT32_MAX;
int32_t x328 = INT32_MIN;
uint64_t x331 = 585428396LLU;
volatile uint64_t x334 = UINT64_MAX;
uint64_t x336 = 80425299LLU;
uint32_t x341 = UINT32_MAX;
int64_t x342 = 3188837696508LL;
static int64_t x343 = -1LL;
static volatile int32_t t79 = 48227;
int32_t x362 = -56228674;
volatile int32_t t83 = -10824;
uint16_t x367 = UINT16_MAX;
volatile int64_t x370 = INT64_MIN;
uint64_t x371 = UINT64_MAX;
volatile int8_t x372 = 0;
static volatile int64_t x378 = -974LL;
uint32_t x380 = 185U;
volatile int32_t t86 = -685896125;
uint16_t x382 = 48U;
static int32_t t87 = -981610;
volatile int8_t x393 = INT8_MAX;
uint8_t x396 = 0U;
static int32_t t90 = 37;
int64_t x397 = 708864265058LL;
int8_t x404 = INT8_MAX;
uint32_t x406 = 785987491U;
int16_t x415 = INT16_MIN;
volatile int64_t x423 = INT64_MIN;
int32_t x430 = -1;


void f0(void) {
	volatile uint16_t x1 = 22U;
	int32_t x2 = INT32_MIN;
	static int32_t x3 = 11;
	uint32_t x4 = 242319163U;
	volatile int32_t t0 = 1;

	t0 = (((x1&x2)+x3)<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x6 = INT16_MIN;
	uint64_t x7 = 499353LLU;
	int64_t x8 = 5309912512615644LL;

	t1 = (((x5&x6)+x7)<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	volatile uint16_t x10 = 68U;
	int32_t x11 = INT32_MIN;
	int32_t x12 = 49127422;
	volatile int32_t t2 = 12;

	t2 = (((x9&x10)+x11)<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	volatile int8_t x14 = -1;
	int16_t x15 = INT16_MIN;
	volatile int16_t x16 = INT16_MIN;
	volatile int32_t t3 = 1125104;

	t3 = (((x13&x14)+x15)<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = 8032;
	volatile int8_t x18 = -1;
	int64_t x19 = INT64_MIN;
	volatile uint16_t x20 = 1147U;

	t4 = (((x17&x18)+x19)<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = -1LL;
	volatile int8_t x22 = INT8_MIN;
	static int64_t x24 = INT64_MIN;
	static int32_t t5 = -14;

	t5 = (((x21&x22)+x23)<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x26 = 17U;
	static int8_t x27 = INT8_MAX;
	volatile int32_t t6 = 556;

	t6 = (((x25&x26)+x27)<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	static uint32_t x30 = UINT32_MAX;
	volatile int64_t x32 = 4039167717470324270LL;
	int32_t t7 = -1;

	t7 = (((x29&x30)+x31)<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x33 = 117U;
	int8_t x34 = -5;
	uint16_t x35 = 62U;
	int32_t t8 = -2978801;

	t8 = (((x33&x34)+x35)<=x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x38 = -1;
	static uint32_t x39 = 1471327053U;
	volatile int64_t x40 = INT64_MIN;
	int32_t t9 = 70749;

	t9 = (((x37&x38)+x39)<=x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x41 = -1;
	int8_t x42 = 0;
	uint16_t x43 = UINT16_MAX;
	int8_t x44 = INT8_MIN;
	volatile int32_t t10 = -1;

	t10 = (((x41&x42)+x43)<=x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x47 = INT8_MAX;
	int16_t x48 = -1;
	int32_t t11 = 2403;

	t11 = (((x45&x46)+x47)<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 103U;
	static volatile int16_t x50 = INT16_MIN;
	static volatile uint64_t x51 = 6274781500675176LLU;

	t12 = (((x49&x50)+x51)<=x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = -46;
	int16_t x54 = INT16_MAX;
	static uint8_t x56 = UINT8_MAX;
	int32_t t13 = 2584868;

	t13 = (((x53&x54)+x55)<=x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -66874158LL;
	int64_t x58 = -10409833LL;
	volatile int64_t x59 = -1LL;
	volatile int64_t x60 = -1LL;
	static int32_t t14 = 5;

	t14 = (((x57&x58)+x59)<=x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -1;
	static volatile uint64_t x62 = 3355159829LLU;
	int64_t x63 = -1LL;
	uint64_t x64 = UINT64_MAX;
	volatile int32_t t15 = 1299;

	t15 = (((x61&x62)+x63)<=x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 45895U;
	uint8_t x66 = UINT8_MAX;
	volatile int64_t x67 = INT64_MIN;
	volatile uint8_t x68 = 0U;
	volatile int32_t t16 = -5859942;

	t16 = (((x65&x66)+x67)<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x69 = -1;
	int8_t x72 = -1;
	int32_t t17 = -606630;

	t17 = (((x69&x70)+x71)<=x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x73 = 6;
	uint16_t x74 = UINT16_MAX;
	int16_t x75 = INT16_MIN;
	int8_t x76 = 1;
	int32_t t18 = -519662786;

	t18 = (((x73&x74)+x75)<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x81 = -2504933192482038LL;
	volatile int16_t x83 = INT16_MIN;
	uint32_t x84 = 33909U;
	volatile int32_t t19 = 820428654;

	t19 = (((x81&x82)+x83)<=x84);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = 3;
	int8_t x86 = INT8_MIN;
	int8_t x87 = INT8_MAX;
	static int8_t x88 = -29;

	t20 = (((x85&x86)+x87)<=x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = INT8_MIN;
	uint16_t x90 = UINT16_MAX;
	volatile int32_t x92 = 8234911;
	int32_t t21 = 128940;

	t21 = (((x89&x90)+x91)<=x92);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x93 = 14U;
	static int16_t x94 = INT16_MIN;
	static uint8_t x95 = 0U;
	uint16_t x96 = 167U;
	volatile int32_t t22 = -29798978;

	t22 = (((x93&x94)+x95)<=x96);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x97 = 1U;
	int8_t x98 = INT8_MIN;
	int16_t x99 = -1;
	int8_t x100 = INT8_MAX;
	static int32_t t23 = 1760737;

	t23 = (((x97&x98)+x99)<=x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x106 = INT32_MIN;
	int16_t x107 = INT16_MAX;
	int32_t x108 = INT32_MAX;
	volatile int32_t t24 = -7449970;

	t24 = (((x105&x106)+x107)<=x108);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x109 = 0;
	int32_t x110 = INT32_MAX;
	int32_t x112 = INT32_MAX;
	int32_t t25 = -1;

	t25 = (((x109&x110)+x111)<=x112);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x118 = 18U;
	static volatile int16_t x119 = 13;
	uint16_t x120 = 4821U;
	int32_t t26 = 4924;

	t26 = (((x117&x118)+x119)<=x120);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x121 = 109U;
	uint16_t x122 = 11545U;
	int16_t x123 = INT16_MAX;
	int32_t x124 = -519317617;
	static int32_t t27 = 0;

	t27 = (((x121&x122)+x123)<=x124);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x125 = 7;
	volatile int32_t x126 = INT32_MIN;
	static volatile uint64_t x128 = 1LLU;
	volatile int32_t t28 = -2643449;

	t28 = (((x125&x126)+x127)<=x128);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x129 = 128359554U;
	static int32_t x130 = -1;
	int64_t x131 = -1451LL;
	volatile int32_t t29 = 15494022;

	t29 = (((x129&x130)+x131)<=x132);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x133 = -1084695LL;
	int16_t x134 = -1;
	int64_t x136 = INT64_MAX;
	volatile int32_t t30 = -23707831;

	t30 = (((x133&x134)+x135)<=x136);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint32_t x137 = UINT32_MAX;
	int8_t x138 = INT8_MAX;
	int32_t x139 = 20437926;
	int8_t x140 = -7;
	volatile int32_t t31 = 423534;

	t31 = (((x137&x138)+x139)<=x140);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x141 = INT16_MAX;
	static int8_t x142 = -1;
	static volatile int8_t x143 = -10;
	volatile int32_t x144 = INT32_MAX;
	int32_t t32 = -236;

	t32 = (((x141&x142)+x143)<=x144);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x145 = -753219608;
	volatile uint64_t x146 = 5626746653022LLU;
	static volatile int64_t x148 = INT64_MIN;
	volatile int32_t t33 = -358344348;

	t33 = (((x145&x146)+x147)<=x148);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x149 = 1U;
	int8_t x150 = INT8_MAX;
	uint16_t x151 = UINT16_MAX;
	volatile int8_t x152 = INT8_MIN;
	static volatile int32_t t34 = -4;

	t34 = (((x149&x150)+x151)<=x152);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x153 = INT64_MIN;
	uint64_t x154 = UINT64_MAX;
	int8_t x155 = 2;
	volatile int32_t t35 = 34978;

	t35 = (((x153&x154)+x155)<=x156);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x157 = INT16_MAX;
	int8_t x158 = INT8_MAX;
	uint64_t x159 = UINT64_MAX;

	t36 = (((x157&x158)+x159)<=x160);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x161 = 91U;
	int64_t x162 = INT64_MIN;
	uint32_t x163 = 91U;
	int32_t x164 = -1;

	t37 = (((x161&x162)+x163)<=x164);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x165 = -1;
	uint8_t x166 = 6U;
	int16_t x167 = INT16_MIN;
	uint32_t x168 = 263021U;
	static int32_t t38 = 2102;

	t38 = (((x165&x166)+x167)<=x168);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x169 = -3;
	uint64_t x170 = 15532LLU;
	int16_t x171 = -1;
	uint32_t x172 = 100U;
	int32_t t39 = 14;

	t39 = (((x169&x170)+x171)<=x172);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x173 = INT16_MAX;
	uint8_t x176 = 0U;
	volatile int32_t t40 = -143;

	t40 = (((x173&x174)+x175)<=x176);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int16_t x177 = 1;
	static volatile int64_t x178 = -1LL;
	int8_t x179 = -23;
	static int64_t x180 = -18LL;
	static volatile int32_t t41 = -292881;

	t41 = (((x177&x178)+x179)<=x180);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x181 = 39788473U;
	int32_t x183 = -1;
	int64_t x184 = INT64_MIN;
	volatile int32_t t42 = 7;

	t42 = (((x181&x182)+x183)<=x184);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x185 = UINT32_MAX;
	int32_t x187 = 0;
	int64_t x188 = INT64_MIN;
	volatile int32_t t43 = 3;

	t43 = (((x185&x186)+x187)<=x188);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x189 = 367U;
	volatile uint32_t x190 = 3U;
	int8_t x191 = -1;
	int64_t x192 = -1917936434581351LL;

	t44 = (((x189&x190)+x191)<=x192);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x194 = 13U;
	static volatile uint32_t x195 = UINT32_MAX;
	volatile uint32_t x196 = UINT32_MAX;
	static int32_t t45 = 13402562;

	t45 = (((x193&x194)+x195)<=x196);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x197 = INT64_MAX;
	int32_t x198 = INT32_MIN;
	int8_t x199 = INT8_MIN;
	int8_t x200 = -1;
	int32_t t46 = -12705785;

	t46 = (((x197&x198)+x199)<=x200);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x205 = INT16_MAX;
	static volatile uint64_t x206 = UINT64_MAX;
	int64_t x207 = INT64_MIN;
	static int16_t x208 = INT16_MIN;
	volatile int32_t t47 = -10040536;

	t47 = (((x205&x206)+x207)<=x208);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x210 = -1;
	int16_t x211 = INT16_MIN;
	volatile int32_t t48 = -5541;

	t48 = (((x209&x210)+x211)<=x212);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x213 = 147U;
	int64_t x214 = INT64_MAX;
	int64_t x216 = 47LL;
	static volatile int32_t t49 = -1769;

	t49 = (((x213&x214)+x215)<=x216);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x217 = 0U;
	uint16_t x219 = 4440U;
	int32_t t50 = -6;

	t50 = (((x217&x218)+x219)<=x220);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x222 = 1979;
	int8_t x224 = 0;

	t51 = (((x221&x222)+x223)<=x224);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint64_t x225 = 235LLU;
	volatile int64_t x227 = -1LL;
	int16_t x228 = INT16_MAX;

	t52 = (((x225&x226)+x227)<=x228);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x230 = -16307;
	static volatile int16_t x231 = -1;
	volatile uint32_t x232 = 276233U;
	int32_t t53 = -14;

	t53 = (((x229&x230)+x231)<=x232);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x234 = INT64_MIN;
	volatile uint16_t x235 = 26929U;
	uint8_t x236 = 2U;

	t54 = (((x233&x234)+x235)<=x236);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x242 = 1;
	int8_t x244 = INT8_MAX;
	int32_t t55 = 25411;

	t55 = (((x241&x242)+x243)<=x244);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int64_t x246 = INT64_MIN;
	uint64_t x247 = UINT64_MAX;
	static int16_t x248 = 17;
	int32_t t56 = 3;

	t56 = (((x245&x246)+x247)<=x248);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x250 = INT64_MIN;
	uint32_t x251 = UINT32_MAX;
	volatile int32_t t57 = -4039850;

	t57 = (((x249&x250)+x251)<=x252);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x257 = INT8_MAX;
	uint8_t x258 = 79U;
	uint8_t x259 = 1U;
	int8_t x260 = -2;
	volatile int32_t t58 = -56261695;

	t58 = (((x257&x258)+x259)<=x260);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x262 = -2;
	static int32_t x263 = 36128810;
	int32_t x264 = INT32_MIN;
	int32_t t59 = 81;

	t59 = (((x261&x262)+x263)<=x264);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x265 = INT16_MIN;
	int64_t x266 = 90469744407136936LL;
	volatile uint16_t x267 = 2248U;
	int32_t x268 = INT32_MAX;
	int32_t t60 = 1;

	t60 = (((x265&x266)+x267)<=x268);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x269 = 30053;
	int32_t x270 = INT32_MIN;
	int8_t x271 = INT8_MIN;
	static uint64_t x272 = UINT64_MAX;
	int32_t t61 = 394447081;

	t61 = (((x269&x270)+x271)<=x272);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x274 = -1;
	uint16_t x275 = 3202U;
	int8_t x276 = INT8_MIN;
	int32_t t62 = -1790;

	t62 = (((x273&x274)+x275)<=x276);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x277 = UINT32_MAX;
	volatile int32_t x278 = INT32_MAX;
	uint32_t x279 = 151793U;
	uint32_t x280 = 1208623145U;
	volatile int32_t t63 = -7645;

	t63 = (((x277&x278)+x279)<=x280);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x281 = -1;
	volatile int32_t x283 = -1;
	int32_t x284 = INT32_MAX;
	static volatile int32_t t64 = -1006136;

	t64 = (((x281&x282)+x283)<=x284);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x285 = 194;
	volatile uint8_t x288 = UINT8_MAX;
	volatile int32_t t65 = 4475;

	t65 = (((x285&x286)+x287)<=x288);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x289 = UINT8_MAX;
	int8_t x291 = INT8_MIN;
	uint16_t x292 = 81U;
	volatile int32_t t66 = 1633017;

	t66 = (((x289&x290)+x291)<=x292);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x293 = -1;
	uint8_t x294 = UINT8_MAX;
	volatile int8_t x295 = INT8_MIN;
	volatile int16_t x296 = INT16_MIN;

	t67 = (((x293&x294)+x295)<=x296);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x297 = -1LL;
	uint8_t x300 = UINT8_MAX;

	t68 = (((x297&x298)+x299)<=x300);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x301 = -1;
	volatile uint16_t x302 = 297U;
	int32_t x303 = INT32_MIN;
	int8_t x304 = INT8_MIN;
	int32_t t69 = -291172314;

	t69 = (((x301&x302)+x303)<=x304);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x305 = 15352U;
	static int32_t x306 = INT32_MAX;
	int32_t x307 = -1;
	int16_t x308 = -1;
	static int32_t t70 = -5488998;

	t70 = (((x305&x306)+x307)<=x308);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x310 = -59901113;
	volatile uint16_t x311 = 6373U;
	int32_t x312 = -1;
	volatile int32_t t71 = -1;

	t71 = (((x309&x310)+x311)<=x312);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int8_t x313 = INT8_MIN;
	static uint32_t x314 = UINT32_MAX;
	static volatile int32_t x315 = INT32_MAX;
	static int8_t x316 = INT8_MAX;
	static volatile int32_t t72 = -1856;

	t72 = (((x313&x314)+x315)<=x316);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x318 = 7011016451LL;
	uint32_t x319 = 275876331U;
	int8_t x320 = -1;
	int32_t t73 = -66985;

	t73 = (((x317&x318)+x319)<=x320);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x321 = 3339519777LLU;
	int64_t x322 = -7222880LL;
	static volatile uint16_t x324 = UINT16_MAX;

	t74 = (((x321&x322)+x323)<=x324);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x326 = 0;
	int8_t x327 = INT8_MIN;
	volatile int32_t t75 = -208010;

	t75 = (((x325&x326)+x327)<=x328);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x329 = -15;
	volatile int32_t x330 = -1;
	uint64_t x332 = UINT64_MAX;
	volatile int32_t t76 = -56;

	t76 = (((x329&x330)+x331)<=x332);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x333 = 1;
	int32_t x335 = 59;
	int32_t t77 = 0;

	t77 = (((x333&x334)+x335)<=x336);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x337 = 7846U;
	int32_t x338 = -60;
	uint16_t x339 = 15629U;
	static int64_t x340 = INT64_MIN;
	volatile int32_t t78 = -1236165;

	t78 = (((x337&x338)+x339)<=x340);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x344 = -1;

	t79 = (((x341&x342)+x343)<=x344);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x345 = 9;
	int8_t x346 = INT8_MIN;
	int32_t x347 = -18703453;
	static volatile int64_t x348 = INT64_MIN;
	static volatile int32_t t80 = -1337467;

	t80 = (((x345&x346)+x347)<=x348);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x349 = -1LL;
	uint64_t x350 = 1599333LLU;
	int32_t x351 = INT32_MIN;
	uint16_t x352 = 1092U;
	int32_t t81 = -316297790;

	t81 = (((x349&x350)+x351)<=x352);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x357 = INT64_MAX;
	int64_t x358 = INT64_MAX;
	int32_t x359 = INT32_MIN;
	volatile uint32_t x360 = 23U;
	volatile int32_t t82 = 943;

	t82 = (((x357&x358)+x359)<=x360);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x361 = -1;
	static int32_t x363 = -47;
	volatile int64_t x364 = INT64_MIN;

	t83 = (((x361&x362)+x363)<=x364);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x365 = 1U;
	static uint32_t x366 = 451376237U;
	volatile int32_t x368 = INT32_MIN;
	int32_t t84 = -1594795;

	t84 = (((x365&x366)+x367)<=x368);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x369 = INT64_MIN;
	int32_t t85 = -427;

	t85 = (((x369&x370)+x371)<=x372);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x377 = INT32_MAX;
	volatile int16_t x379 = INT16_MIN;

	t86 = (((x377&x378)+x379)<=x380);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x381 = INT64_MAX;
	static int16_t x383 = INT16_MIN;
	volatile int64_t x384 = 68092LL;

	t87 = (((x381&x382)+x383)<=x384);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x385 = 31U;
	static volatile int16_t x386 = 413;
	uint16_t x387 = UINT16_MAX;
	int16_t x388 = INT16_MAX;
	volatile int32_t t88 = -2;

	t88 = (((x385&x386)+x387)<=x388);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x389 = -10;
	static int64_t x390 = INT64_MAX;
	static int16_t x391 = INT16_MIN;
	int32_t x392 = INT32_MIN;
	int32_t t89 = 3571752;

	t89 = (((x389&x390)+x391)<=x392);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x394 = -1;
	int8_t x395 = INT8_MIN;

	t90 = (((x393&x394)+x395)<=x396);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x398 = 9U;
	int64_t x399 = INT64_MIN;
	volatile uint64_t x400 = UINT64_MAX;
	int32_t t91 = -89664556;

	t91 = (((x397&x398)+x399)<=x400);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x401 = UINT16_MAX;
	int8_t x402 = INT8_MIN;
	volatile int8_t x403 = 34;
	volatile int32_t t92 = -546;

	t92 = (((x401&x402)+x403)<=x404);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x405 = -1;
	static uint64_t x407 = 209759LLU;
	int64_t x408 = INT64_MIN;
	static volatile int32_t t93 = -22863;

	t93 = (((x405&x406)+x407)<=x408);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x409 = INT64_MIN;
	volatile int8_t x410 = -4;
	static int32_t x411 = 11796;
	uint32_t x412 = UINT32_MAX;
	int32_t t94 = -2046004;

	t94 = (((x409&x410)+x411)<=x412);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x413 = INT8_MIN;
	int8_t x414 = -5;
	int16_t x416 = INT16_MAX;
	int32_t t95 = 4;

	t95 = (((x413&x414)+x415)<=x416);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x417 = INT64_MAX;
	int8_t x418 = 54;
	volatile uint64_t x419 = 81559269455066LLU;
	int8_t x420 = INT8_MAX;
	int32_t t96 = -31448252;

	t96 = (((x417&x418)+x419)<=x420);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x421 = INT32_MAX;
	volatile int64_t x422 = INT64_MIN;
	static uint32_t x424 = UINT32_MAX;
	int32_t t97 = 516704;

	t97 = (((x421&x422)+x423)<=x424);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x425 = INT8_MIN;
	volatile int16_t x426 = 4036;
	uint16_t x427 = 1191U;
	static int16_t x428 = INT16_MIN;
	int32_t t98 = -15055258;

	t98 = (((x425&x426)+x427)<=x428);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x429 = 231818;
	static int64_t x431 = 3095454714LL;
	int16_t x432 = -6;
	int32_t t99 = 106097304;

	t99 = (((x429&x430)+x431)<=x432);

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

