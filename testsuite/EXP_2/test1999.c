#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = -23;
volatile int16_t x12 = 0;
static volatile int32_t t2 = 29;
uint16_t x13 = UINT16_MAX;
int32_t x14 = INT32_MAX;
int8_t x21 = -1;
static volatile int32_t t5 = -22;
volatile int16_t x29 = -10273;
int32_t x31 = INT32_MIN;
int32_t t8 = 1;
static int32_t x39 = -1;
int32_t t9 = 24869006;
int64_t x42 = INT64_MIN;
int32_t t10 = 0;
int16_t x45 = INT16_MAX;
volatile uint32_t x51 = UINT32_MAX;
volatile int32_t t13 = 1922602;
volatile int64_t x58 = -837607LL;
uint64_t x59 = 6760894878LLU;
static int32_t x66 = INT32_MIN;
int64_t x67 = INT64_MIN;
static volatile int32_t x69 = INT32_MIN;
static volatile int32_t t18 = 15;
uint8_t x79 = 64U;
int8_t x80 = INT8_MAX;
uint16_t x81 = 29914U;
volatile uint64_t x93 = UINT64_MAX;
static uint32_t x98 = 7753U;
int16_t x101 = -1;
uint8_t x104 = 1U;
int32_t t26 = 2407;
uint32_t x109 = 1155U;
static int32_t t27 = 2207864;
int32_t x114 = INT32_MIN;
volatile uint16_t x117 = 1U;
int64_t x120 = INT64_MAX;
static volatile int32_t t32 = 4933481;
int8_t x135 = -1;
int32_t x138 = -72;
int8_t x140 = -1;
int32_t t37 = 27238750;
volatile int32_t t38 = -5077906;
uint32_t x159 = 10U;
static int8_t x162 = -1;
static int8_t x163 = 1;
volatile int16_t x165 = 5664;
volatile int16_t x166 = INT16_MIN;
static int32_t x180 = INT32_MIN;
int16_t x186 = INT16_MIN;
int32_t t46 = 3;
int64_t x199 = INT64_MIN;
int64_t x202 = INT64_MAX;
static int32_t x205 = INT32_MIN;
volatile int32_t t51 = -243;
int32_t x210 = INT32_MIN;
int32_t x223 = 426027;
volatile uint64_t x224 = UINT64_MAX;
int32_t x229 = INT32_MAX;
volatile int32_t x230 = 1578192;
uint32_t x234 = 3269U;
int8_t x237 = 56;
volatile int16_t x243 = -1;
static uint64_t x245 = 1LLU;
int8_t x247 = INT8_MIN;
static int16_t x248 = -14953;
volatile uint8_t x249 = 19U;
static volatile int32_t t62 = -105952;
uint64_t x254 = 2LLU;
static int8_t x257 = 4;
int32_t t66 = 2;
volatile uint8_t x269 = 1U;
uint16_t x277 = UINT16_MAX;
int16_t x278 = INT16_MIN;
int32_t t70 = -25971;
uint64_t x288 = UINT64_MAX;
static int32_t t71 = 921;
int16_t x290 = 164;
int32_t t72 = 152934821;
int64_t x304 = INT64_MIN;
volatile int32_t x309 = INT32_MIN;
static int32_t x322 = INT32_MIN;
uint8_t x323 = UINT8_MAX;
int32_t x327 = INT32_MAX;
static uint32_t x330 = UINT32_MAX;
static volatile int8_t x334 = INT8_MIN;
int8_t x343 = 26;
uint32_t x345 = UINT32_MAX;
volatile int32_t x346 = INT32_MIN;
int16_t x351 = -1;
static volatile int32_t t87 = 2436;
static uint64_t x354 = UINT64_MAX;
int32_t t90 = 354924;
int8_t x370 = -1;
int8_t x388 = 1;
int16_t x392 = -13;
volatile int32_t t97 = 28292426;
int64_t x394 = -1LL;
static volatile int32_t t98 = -3;
volatile int8_t x399 = INT8_MIN;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	uint16_t x2 = 6U;
	static int32_t x3 = INT32_MIN;
	static volatile int32_t t0 = 81009;

	t0 = ((x1&(x2|x3))<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = -5242;
	int32_t x6 = INT32_MIN;
	static uint8_t x7 = UINT8_MAX;
	static int8_t x8 = INT8_MAX;
	static int32_t t1 = 378;

	t1 = ((x5&(x6|x7))<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1LL;
	volatile uint32_t x10 = UINT32_MAX;
	volatile int16_t x11 = INT16_MIN;

	t2 = ((x9&(x10|x11))<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x15 = -1;
	int32_t x16 = -558204864;
	volatile int32_t t3 = 567618;

	t3 = ((x13&(x14|x15))<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 12494920LLU;
	volatile int32_t x18 = INT32_MAX;
	int8_t x19 = -1;
	int16_t x20 = 6708;
	volatile int32_t t4 = 3;

	t4 = ((x17&(x18|x19))<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x22 = 48426537143LLU;
	int8_t x23 = 2;
	static int8_t x24 = 62;

	t5 = ((x21&(x22|x23))<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = INT16_MAX;
	uint8_t x26 = 5U;
	uint32_t x27 = 469092U;
	int32_t x28 = -1864864;
	volatile int32_t t6 = 9;

	t6 = ((x25&(x26|x27))<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x30 = INT32_MAX;
	static volatile int8_t x32 = -1;
	int32_t t7 = -41;

	t7 = ((x29&(x30|x31))<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x33 = INT16_MAX;
	int8_t x34 = INT8_MIN;
	volatile int32_t x35 = INT32_MIN;
	int64_t x36 = INT64_MAX;

	t8 = ((x33&(x34|x35))<=x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = UINT8_MAX;
	static int8_t x38 = -57;
	int8_t x40 = 0;

	t9 = ((x37&(x38|x39))<=x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x41 = 10U;
	static uint64_t x43 = 6749457920LLU;
	uint16_t x44 = UINT16_MAX;

	t10 = ((x41&(x42|x43))<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x46 = UINT64_MAX;
	static uint32_t x47 = 0U;
	int32_t x48 = -1;
	int32_t t11 = -461;

	t11 = ((x45&(x46|x47))<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x49 = 18286620U;
	volatile int32_t x50 = INT32_MAX;
	static volatile uint64_t x52 = 3125632631746LLU;
	static int32_t t12 = 320701549;

	t12 = ((x49&(x50|x51))<=x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MAX;
	int16_t x54 = -1;
	int64_t x55 = -7036354516LL;
	uint16_t x56 = 1U;

	t13 = ((x53&(x54|x55))<=x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MIN;
	volatile uint64_t x60 = 1138002276978524584LLU;
	volatile int32_t t14 = -25;

	t14 = ((x57&(x58|x59))<=x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = 22613310U;
	int8_t x62 = INT8_MAX;
	volatile uint64_t x63 = UINT64_MAX;
	int8_t x64 = INT8_MAX;
	int32_t t15 = 51;

	t15 = ((x61&(x62|x63))<=x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x65 = INT16_MIN;
	uint16_t x68 = UINT16_MAX;
	volatile int32_t t16 = -81387112;

	t16 = ((x65&(x66|x67))<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x70 = INT8_MAX;
	static uint8_t x71 = UINT8_MAX;
	uint8_t x72 = 19U;
	static int32_t t17 = -49;

	t17 = ((x69&(x70|x71))<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = -13;
	static int16_t x74 = -19;
	int8_t x75 = INT8_MAX;
	volatile int8_t x76 = INT8_MIN;

	t18 = ((x73&(x74|x75))<=x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MAX;
	int8_t x78 = INT8_MIN;
	int32_t t19 = 1072729404;

	t19 = ((x77&(x78|x79))<=x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x82 = 12LLU;
	static uint16_t x83 = UINT16_MAX;
	uint64_t x84 = 59341586150786384LLU;
	static volatile int32_t t20 = 3532924;

	t20 = ((x81&(x82|x83))<=x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x85 = 28U;
	int32_t x86 = INT32_MAX;
	uint32_t x87 = 1694113U;
	volatile int8_t x88 = INT8_MAX;
	int32_t t21 = 90;

	t21 = ((x85&(x86|x87))<=x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MIN;
	static volatile uint8_t x90 = 0U;
	uint64_t x91 = 6879584139528LLU;
	static uint64_t x92 = 451686042155LLU;
	int32_t t22 = 1;

	t22 = ((x89&(x90|x91))<=x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x94 = 2011LL;
	volatile uint16_t x95 = 3U;
	int16_t x96 = -3;
	volatile int32_t t23 = 1007370666;

	t23 = ((x93&(x94|x95))<=x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x97 = UINT32_MAX;
	volatile uint8_t x99 = 34U;
	static int64_t x100 = INT64_MIN;
	volatile int32_t t24 = 31576303;

	t24 = ((x97&(x98|x99))<=x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x102 = INT32_MIN;
	static int8_t x103 = INT8_MIN;
	volatile int32_t t25 = 4;

	t25 = ((x101&(x102|x103))<=x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MAX;
	int32_t x106 = -5519907;
	int16_t x107 = INT16_MIN;
	int8_t x108 = INT8_MIN;

	t26 = ((x105&(x106|x107))<=x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x110 = 854260276450424534LLU;
	int32_t x111 = -119;
	int8_t x112 = INT8_MAX;

	t27 = ((x109&(x110|x111))<=x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MIN;
	uint16_t x115 = 83U;
	uint32_t x116 = 72296838U;
	volatile int32_t t28 = -57104301;

	t28 = ((x113&(x114|x115))<=x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x118 = -1;
	int32_t x119 = 14;
	int32_t t29 = -37299450;

	t29 = ((x117&(x118|x119))<=x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x121 = 116794LLU;
	uint16_t x122 = 4939U;
	static int32_t x123 = INT32_MIN;
	int16_t x124 = INT16_MAX;
	int32_t t30 = -885881197;

	t30 = ((x121&(x122|x123))<=x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MIN;
	int64_t x126 = INT64_MIN;
	int16_t x127 = INT16_MIN;
	int8_t x128 = INT8_MAX;
	volatile int32_t t31 = -13;

	t31 = ((x125&(x126|x127))<=x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MAX;
	int16_t x130 = INT16_MIN;
	int32_t x131 = INT32_MIN;
	int32_t x132 = -1;

	t32 = ((x129&(x130|x131))<=x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint8_t x133 = 5U;
	uint16_t x134 = 310U;
	uint32_t x136 = 54609U;
	int32_t t33 = 332;

	t33 = ((x133&(x134|x135))<=x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = 3241167283310LL;
	volatile uint64_t x139 = UINT64_MAX;
	static volatile int32_t t34 = 189765;

	t34 = ((x137&(x138|x139))<=x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x141 = 3614020902097976LLU;
	int32_t x142 = -1278146;
	int32_t x143 = -24;
	int32_t x144 = -1928;
	int32_t t35 = -16;

	t35 = ((x141&(x142|x143))<=x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = 3U;
	volatile int16_t x146 = INT16_MAX;
	uint64_t x147 = UINT64_MAX;
	int64_t x148 = INT64_MAX;
	volatile int32_t t36 = -11;

	t36 = ((x145&(x146|x147))<=x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x149 = -1;
	volatile int16_t x150 = 111;
	volatile int16_t x151 = INT16_MIN;
	int32_t x152 = -1;

	t37 = ((x149&(x150|x151))<=x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x153 = -1;
	static volatile int16_t x154 = 59;
	volatile int32_t x155 = 1;
	static int64_t x156 = -1344581928642LL;

	t38 = ((x153&(x154|x155))<=x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = 31U;
	int64_t x158 = -181LL;
	volatile int32_t x160 = INT32_MIN;
	int32_t t39 = 1789729;

	t39 = ((x157&(x158|x159))<=x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MIN;
	int32_t x164 = INT32_MAX;
	int32_t t40 = 47478610;

	t40 = ((x161&(x162|x163))<=x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x167 = -1;
	uint32_t x168 = 17U;
	int32_t t41 = -80;

	t41 = ((x165&(x166|x167))<=x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MIN;
	int32_t x170 = 187;
	int32_t x171 = INT32_MIN;
	static int8_t x172 = INT8_MAX;
	volatile int32_t t42 = 75;

	t42 = ((x169&(x170|x171))<=x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x173 = 0;
	static uint64_t x174 = 2158565709LLU;
	int32_t x175 = INT32_MIN;
	int8_t x176 = -1;
	static int32_t t43 = -8054822;

	t43 = ((x173&(x174|x175))<=x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MAX;
	static volatile int8_t x178 = INT8_MIN;
	int8_t x179 = INT8_MAX;
	static volatile int32_t t44 = -1;

	t44 = ((x177&(x178|x179))<=x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = 2U;
	uint32_t x182 = 19688U;
	volatile int32_t x183 = INT32_MIN;
	int64_t x184 = -263LL;
	static volatile int32_t t45 = -1;

	t45 = ((x181&(x182|x183))<=x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = -1LL;
	uint64_t x187 = UINT64_MAX;
	static uint32_t x188 = 5U;

	t46 = ((x185&(x186|x187))<=x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = 10430U;
	uint16_t x190 = 1U;
	int8_t x191 = INT8_MIN;
	uint16_t x192 = 0U;
	int32_t t47 = -14;

	t47 = ((x189&(x190|x191))<=x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = 471184U;
	int16_t x194 = 1;
	int64_t x195 = -17381173876801306LL;
	int64_t x196 = -1LL;
	int32_t t48 = 196640223;

	t48 = ((x193&(x194|x195))<=x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x197 = INT8_MIN;
	volatile int32_t x198 = INT32_MIN;
	int16_t x200 = INT16_MIN;
	volatile int32_t t49 = -149;

	t49 = ((x197&(x198|x199))<=x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x201 = UINT32_MAX;
	int16_t x203 = INT16_MIN;
	uint32_t x204 = 31U;
	int32_t t50 = -7324393;

	t50 = ((x201&(x202|x203))<=x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x206 = INT32_MAX;
	static uint8_t x207 = 26U;
	uint64_t x208 = UINT64_MAX;

	t51 = ((x205&(x206|x207))<=x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MIN;
	int32_t x211 = INT32_MIN;
	int32_t x212 = INT32_MAX;
	int32_t t52 = -733;

	t52 = ((x209&(x210|x211))<=x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = 6202835U;
	int64_t x214 = INT64_MAX;
	int32_t x215 = 538593719;
	int32_t x216 = -1;
	volatile int32_t t53 = 419336;

	t53 = ((x213&(x214|x215))<=x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = -439;
	uint8_t x218 = UINT8_MAX;
	int64_t x219 = -1508715259898883LL;
	volatile uint16_t x220 = UINT16_MAX;
	static int32_t t54 = -90528;

	t54 = ((x217&(x218|x219))<=x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x221 = 0U;
	static int64_t x222 = -302773LL;
	static volatile int32_t t55 = 630543;

	t55 = ((x221&(x222|x223))<=x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x225 = INT32_MIN;
	volatile uint64_t x226 = 638224151417857LLU;
	volatile int8_t x227 = -1;
	int16_t x228 = INT16_MAX;
	int32_t t56 = 9;

	t56 = ((x225&(x226|x227))<=x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x231 = INT8_MIN;
	uint16_t x232 = 57U;
	int32_t t57 = 1;

	t57 = ((x229&(x230|x231))<=x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x233 = 12215994594845545LL;
	uint32_t x235 = 22888U;
	uint8_t x236 = UINT8_MAX;
	volatile int32_t t58 = 1006301;

	t58 = ((x233&(x234|x235))<=x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x238 = INT8_MAX;
	static uint64_t x239 = 510924826962260806LLU;
	int64_t x240 = INT64_MIN;
	int32_t t59 = 7263;

	t59 = ((x237&(x238|x239))<=x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = 1;
	volatile int16_t x242 = INT16_MIN;
	int64_t x244 = -1LL;
	volatile int32_t t60 = 9249;

	t60 = ((x241&(x242|x243))<=x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x246 = INT32_MIN;
	static volatile int32_t t61 = 1021806;

	t61 = ((x245&(x246|x247))<=x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x250 = INT64_MIN;
	int8_t x251 = INT8_MIN;
	uint32_t x252 = UINT32_MAX;

	t62 = ((x249&(x250|x251))<=x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = INT8_MIN;
	int32_t x255 = 0;
	uint32_t x256 = 14794413U;
	volatile int32_t t63 = -339357;

	t63 = ((x253&(x254|x255))<=x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x258 = INT64_MAX;
	int16_t x259 = -1;
	static uint8_t x260 = UINT8_MAX;
	volatile int32_t t64 = -27;

	t64 = ((x257&(x258|x259))<=x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x261 = UINT64_MAX;
	int64_t x262 = -1LL;
	static int8_t x263 = 1;
	int16_t x264 = INT16_MIN;
	volatile int32_t t65 = 3;

	t65 = ((x261&(x262|x263))<=x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x265 = 1U;
	int64_t x266 = 445240093144LL;
	int64_t x267 = -3182334LL;
	uint32_t x268 = 9581U;

	t66 = ((x265&(x266|x267))<=x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x270 = INT16_MIN;
	volatile int16_t x271 = -1;
	volatile int8_t x272 = INT8_MIN;
	int32_t t67 = 5732596;

	t67 = ((x269&(x270|x271))<=x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = INT8_MAX;
	volatile int16_t x274 = INT16_MIN;
	static volatile int16_t x275 = -1;
	int16_t x276 = 9;
	int32_t t68 = 6;

	t68 = ((x273&(x274|x275))<=x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x279 = 934LLU;
	int8_t x280 = -1;
	volatile int32_t t69 = -388915;

	t69 = ((x277&(x278|x279))<=x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = -7541656;
	static int32_t x282 = -1;
	static int64_t x283 = INT64_MAX;
	uint16_t x284 = UINT16_MAX;

	t70 = ((x281&(x282|x283))<=x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x285 = INT8_MAX;
	int32_t x286 = -11;
	uint8_t x287 = 1U;

	t71 = ((x285&(x286|x287))<=x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MAX;
	uint16_t x291 = 15271U;
	volatile int64_t x292 = INT64_MIN;

	t72 = ((x289&(x290|x291))<=x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = -2;
	uint16_t x294 = 3634U;
	static int64_t x295 = -1LL;
	uint64_t x296 = 58365787203LLU;
	int32_t t73 = 14111;

	t73 = ((x293&(x294|x295))<=x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x297 = -5;
	int64_t x298 = -14496700886LL;
	int8_t x299 = 6;
	uint64_t x300 = UINT64_MAX;
	static int32_t t74 = 8960;

	t74 = ((x297&(x298|x299))<=x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x301 = UINT64_MAX;
	static int16_t x302 = INT16_MIN;
	volatile int32_t x303 = INT32_MIN;
	volatile int32_t t75 = 198;

	t75 = ((x301&(x302|x303))<=x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = -29519657526315542LL;
	int16_t x306 = INT16_MIN;
	static int16_t x307 = INT16_MIN;
	int64_t x308 = INT64_MIN;
	int32_t t76 = -31046;

	t76 = ((x305&(x306|x307))<=x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x310 = INT64_MAX;
	uint8_t x311 = UINT8_MAX;
	int16_t x312 = INT16_MIN;
	static int32_t t77 = 579955;

	t77 = ((x309&(x310|x311))<=x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x313 = UINT64_MAX;
	int32_t x314 = INT32_MAX;
	int32_t x315 = INT32_MIN;
	uint64_t x316 = UINT64_MAX;
	int32_t t78 = 28;

	t78 = ((x313&(x314|x315))<=x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = 14621U;
	int32_t x318 = INT32_MAX;
	int32_t x319 = -1;
	uint8_t x320 = 0U;
	static volatile int32_t t79 = -13;

	t79 = ((x317&(x318|x319))<=x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x321 = 7U;
	static int32_t x324 = -1;
	int32_t t80 = 0;

	t80 = ((x321&(x322|x323))<=x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x325 = 22U;
	int32_t x326 = INT32_MIN;
	volatile int16_t x328 = INT16_MAX;
	int32_t t81 = -20541;

	t81 = ((x325&(x326|x327))<=x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = UINT64_MAX;
	int32_t x331 = INT32_MIN;
	int16_t x332 = -1;
	int32_t t82 = -3;

	t82 = ((x329&(x330|x331))<=x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = INT8_MAX;
	int32_t x335 = 83;
	int8_t x336 = 12;
	int32_t t83 = -444226050;

	t83 = ((x333&(x334|x335))<=x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x337 = -5;
	static volatile int8_t x338 = -19;
	int64_t x339 = INT64_MAX;
	int16_t x340 = 511;
	int32_t t84 = -54693395;

	t84 = ((x337&(x338|x339))<=x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = INT16_MIN;
	int32_t x342 = INT32_MAX;
	int64_t x344 = 9765LL;
	int32_t t85 = -1;

	t85 = ((x341&(x342|x343))<=x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x347 = -1;
	static int32_t x348 = INT32_MAX;
	int32_t t86 = 197022183;

	t86 = ((x345&(x346|x347))<=x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x349 = 0LLU;
	int32_t x350 = -1;
	int16_t x352 = -6995;

	t87 = ((x349&(x350|x351))<=x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x353 = 1116293356LLU;
	int32_t x355 = -1;
	int32_t x356 = INT32_MIN;
	int32_t t88 = 701;

	t88 = ((x353&(x354|x355))<=x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x357 = 2U;
	uint64_t x358 = 132073897623338LLU;
	int8_t x359 = -6;
	int32_t x360 = INT32_MIN;
	volatile int32_t t89 = -3178;

	t89 = ((x357&(x358|x359))<=x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = INT64_MIN;
	int32_t x362 = INT32_MIN;
	uint32_t x363 = 12U;
	int16_t x364 = -215;

	t90 = ((x361&(x362|x363))<=x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x365 = UINT16_MAX;
	int32_t x366 = INT32_MIN;
	static int8_t x367 = INT8_MIN;
	int16_t x368 = -1;
	static int32_t t91 = 8281253;

	t91 = ((x365&(x366|x367))<=x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = -61;
	volatile int32_t x371 = INT32_MIN;
	int16_t x372 = -1;
	volatile int32_t t92 = 15;

	t92 = ((x369&(x370|x371))<=x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x373 = 13U;
	int16_t x374 = 1803;
	int32_t x375 = INT32_MAX;
	int16_t x376 = -1;
	volatile int32_t t93 = 1;

	t93 = ((x373&(x374|x375))<=x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x377 = INT16_MIN;
	uint8_t x378 = 1U;
	volatile uint64_t x379 = 14265LLU;
	static int8_t x380 = -1;
	static int32_t t94 = -2;

	t94 = ((x377&(x378|x379))<=x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x381 = 8979882;
	static int32_t x382 = -1;
	int64_t x383 = 0LL;
	uint8_t x384 = 33U;
	int32_t t95 = 0;

	t95 = ((x381&(x382|x383))<=x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = 5;
	int16_t x386 = INT16_MIN;
	int8_t x387 = INT8_MIN;
	static int32_t t96 = 45723481;

	t96 = ((x385&(x386|x387))<=x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = 7;
	int16_t x390 = 3084;
	int16_t x391 = 273;

	t97 = ((x389&(x390|x391))<=x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = -1;
	uint16_t x395 = UINT16_MAX;
	uint32_t x396 = 12402U;

	t98 = ((x393&(x394|x395))<=x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = -1;
	int32_t x398 = INT32_MIN;
	static uint64_t x400 = 877191LLU;
	volatile int32_t t99 = -12748;

	t99 = ((x397&(x398|x399))<=x400);

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

