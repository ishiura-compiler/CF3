#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t t0 = 7640142LL;
static int16_t x5 = INT16_MIN;
static int32_t x6 = -1;
volatile int64_t t3 = 314026091868913877LL;
static int64_t x22 = INT64_MAX;
static volatile int64_t t8 = 0LL;
static volatile uint64_t t9 = 26873328606LLU;
uint16_t x42 = 30538U;
volatile int64_t t10 = 46317707LL;
int32_t x45 = 190;
volatile int64_t t13 = 66544727302374232LL;
static volatile uint8_t x58 = UINT8_MAX;
static int64_t x59 = INT64_MIN;
int64_t x60 = -1LL;
int8_t x61 = 5;
static volatile uint64_t x70 = UINT64_MAX;
volatile uint64_t t17 = 35941593070461LLU;
uint64_t x73 = 6616199LLU;
int8_t x77 = 6;
int64_t x82 = INT64_MIN;
uint8_t x86 = 4U;
volatile int32_t x91 = -1;
int16_t x92 = -1;
volatile int32_t t22 = 1989932;
uint8_t x95 = UINT8_MAX;
int64_t x98 = 72859338194692LL;
int64_t x103 = -1LL;
int8_t x110 = INT8_MIN;
uint64_t x115 = UINT64_MAX;
int16_t x118 = INT16_MIN;
int32_t x121 = -1;
volatile int8_t x122 = INT8_MIN;
int8_t x126 = INT8_MIN;
int16_t x130 = INT16_MAX;
int64_t t32 = 3822793934954681LL;
volatile int64_t x143 = -1LL;
uint64_t x144 = 53998181846LLU;
uint32_t x148 = UINT32_MAX;
volatile int16_t x153 = INT16_MIN;
static uint16_t x157 = UINT16_MAX;
volatile uint32_t t39 = 2U;
static uint8_t x162 = UINT8_MAX;
int16_t x164 = INT16_MIN;
uint64_t t40 = 10424LLU;
volatile int32_t x166 = -429890;
volatile int32_t t42 = -957;
volatile int64_t t44 = -6LL;
int16_t x189 = INT16_MAX;
volatile int32_t t47 = 1516615;
volatile int8_t x203 = -2;
int64_t t49 = -100684707925LL;
volatile uint64_t t50 = 8681186624816068LLU;
int16_t x214 = INT16_MIN;
uint8_t x229 = 0U;
volatile int16_t x233 = -4883;
int8_t x236 = INT8_MIN;
static int64_t x240 = -1LL;
int8_t x243 = 0;
volatile int32_t t57 = -67013080;
static uint32_t x245 = 5961U;
int16_t x248 = INT16_MAX;
int8_t x251 = INT8_MIN;
static int64_t t59 = 29LL;
int32_t x256 = -1;
uint8_t x257 = 0U;
volatile int64_t t63 = -23705737LL;
int16_t x270 = 48;
int16_t x274 = -13387;
int32_t x277 = INT32_MIN;
int16_t x280 = INT16_MAX;
uint16_t x286 = 0U;
static uint64_t x294 = 20442264LLU;
uint8_t x296 = 1U;
int16_t x316 = 28;
int8_t x328 = INT8_MIN;
volatile uint64_t x357 = UINT64_MAX;
static int32_t x359 = 91;
volatile int64_t x371 = INT64_MIN;
int32_t x377 = 3602;
int64_t x385 = -451987216158LL;
uint32_t x390 = 9865U;
int32_t x392 = -1;
static int16_t x402 = INT16_MIN;
volatile int64_t x404 = INT64_MAX;
volatile int64_t t91 = -60365934909154LL;
uint64_t x406 = UINT64_MAX;
volatile uint64_t t92 = 3693555216290LLU;
int16_t x410 = INT16_MIN;
uint32_t x411 = 103743U;
int32_t x412 = -52933;
volatile uint32_t x413 = UINT32_MAX;
int64_t x423 = 648254335196LL;
int64_t x426 = 3LL;
int64_t t97 = 35019204LL;
static int16_t x429 = INT16_MIN;


void f0(void) {
	int8_t x1 = -2;
	int32_t x2 = 113231627;
	int8_t x3 = INT8_MAX;
	int64_t x4 = INT64_MIN;

	t0 = ((x1+(x2&x3))/x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x7 = INT16_MIN;
	volatile uint64_t x8 = 2LLU;
	static uint64_t t1 = 44LLU;

	t1 = ((x5+(x6&x7))/x8);

	if (t1 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = -1;
	int8_t x10 = 3;
	int8_t x11 = INT8_MAX;
	volatile uint8_t x12 = 98U;
	int32_t t2 = -504219;

	t2 = ((x9+(x10&x11))/x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	volatile int8_t x14 = -4;
	int64_t x15 = INT64_MAX;
	static int64_t x16 = INT64_MIN;

	t3 = ((x13+(x14&x15))/x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x17 = 29;
	volatile int32_t x18 = -1;
	static uint32_t x19 = UINT32_MAX;
	int8_t x20 = 1;
	static volatile uint32_t t4 = 7U;

	t4 = ((x17+(x18&x19))/x20);

	if (t4 != 28U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MAX;
	int8_t x23 = 17;
	int8_t x24 = INT8_MAX;
	volatile int64_t t5 = -14991LL;

	t5 = ((x21+(x22&x23))/x24);

	if (t5 != 16909320LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x25 = 1U;
	uint8_t x26 = 29U;
	int32_t x27 = -1;
	int16_t x28 = INT16_MIN;
	volatile int32_t t6 = -50;

	t6 = ((x25+(x26&x27))/x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	uint8_t x30 = 2U;
	int64_t x31 = INT64_MIN;
	uint32_t x32 = 29U;
	volatile int64_t t7 = 2002582LL;

	t7 = ((x29+(x30&x31))/x32);

	if (t7 != -74051160LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -2;
	int16_t x34 = 88;
	int64_t x35 = INT64_MIN;
	int32_t x36 = -349450944;

	t8 = ((x33+(x34&x35))/x36);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = UINT64_MAX;
	int16_t x38 = 18;
	static uint32_t x39 = 290U;
	int32_t x40 = INT32_MAX;

	t9 = ((x37+(x38&x39))/x40);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = -299654945824646196LL;
	int64_t x43 = -1LL;
	int16_t x44 = INT16_MIN;

	t10 = ((x41+(x42&x43))/x44);

	if (t10 != 9144743219745LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int64_t x46 = INT64_MIN;
	uint16_t x47 = 20641U;
	volatile uint64_t x48 = 32185433LLU;
	volatile uint64_t t11 = 1LLU;

	t11 = ((x45+(x46&x47))/x48);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x49 = INT64_MAX;
	volatile int64_t x50 = INT64_MIN;
	volatile uint64_t x51 = UINT64_MAX;
	int16_t x52 = INT16_MIN;
	uint64_t t12 = 4980LLU;

	t12 = ((x49+(x50&x51))/x52);

	if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -3161LL;
	uint32_t x54 = 31261U;
	volatile int32_t x55 = INT32_MAX;
	static volatile int64_t x56 = INT64_MAX;

	t13 = ((x53+(x54&x55))/x56);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x57 = INT16_MIN;
	volatile int64_t t14 = 26851224559395LL;

	t14 = ((x57+(x58&x59))/x60);

	if (t14 != 32768LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x62 = 10;
	int32_t x63 = -1;
	int64_t x64 = 46171718LL;
	int64_t t15 = -168951507LL;

	t15 = ((x61+(x62&x63))/x64);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 57U;
	static int16_t x66 = INT16_MAX;
	uint32_t x67 = 788U;
	uint8_t x68 = UINT8_MAX;
	volatile uint32_t t16 = 21U;

	t16 = ((x65+(x66&x67))/x68);

	if (t16 != 3U) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;
	volatile int8_t x71 = 0;
	volatile uint16_t x72 = UINT16_MAX;

	t17 = ((x69+(x70&x71))/x72);

	if (t17 != 140739635871744LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x74 = -24226LL;
	uint64_t x75 = UINT64_MAX;
	static int8_t x76 = INT8_MIN;
	volatile uint64_t t18 = 4033932119328LLU;

	t18 = ((x73+(x74&x75))/x76);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x78 = 1;
	uint8_t x79 = 38U;
	volatile uint32_t x80 = 6U;
	static volatile uint32_t t19 = 3U;

	t19 = ((x77+(x78&x79))/x80);

	if (t19 != 1U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MAX;
	static uint32_t x83 = UINT32_MAX;
	int8_t x84 = INT8_MIN;
	volatile int64_t t20 = -3LL;

	t20 = ((x81+(x82&x83))/x84);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x85 = UINT16_MAX;
	static volatile int32_t x87 = INT32_MIN;
	volatile uint16_t x88 = UINT16_MAX;
	int32_t t21 = -45;

	t21 = ((x85+(x86&x87))/x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	static uint16_t x90 = 897U;

	t22 = ((x89+(x90&x91))/x92);

	if (t22 != 2147482751) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x93 = -1;
	uint8_t x94 = UINT8_MAX;
	static int16_t x96 = -15868;
	int32_t t23 = -27;

	t23 = ((x93+(x94&x95))/x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MIN;
	uint16_t x99 = 8050U;
	uint16_t x100 = 5847U;
	volatile int64_t t24 = 1947873LL;

	t24 = ((x97+(x98&x99))/x100);

	if (t24 != -367278LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = -2311;
	volatile int16_t x102 = -1;
	volatile int64_t x104 = -1LL;
	static volatile int64_t t25 = -14832LL;

	t25 = ((x101+(x102&x103))/x104);

	if (t25 != 2312LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	int16_t x106 = INT16_MAX;
	int8_t x107 = 27;
	int8_t x108 = INT8_MAX;
	int32_t t26 = -449621;

	t26 = ((x105+(x106&x107))/x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = 1;
	int64_t x111 = -63LL;
	int64_t x112 = INT64_MIN;
	int64_t t27 = 7227467377LL;

	t27 = ((x109+(x110&x111))/x112);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MIN;
	volatile int32_t x114 = INT32_MAX;
	int16_t x116 = -7807;
	static uint64_t t28 = 5160186LLU;

	t28 = ((x113+(x114&x115))/x116);

	if (t28 != 1LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MIN;
	uint8_t x119 = 41U;
	int64_t x120 = INT64_MAX;
	volatile int64_t t29 = -43499599458542LL;

	t29 = ((x117+(x118&x119))/x120);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x123 = -1514;
	int32_t x124 = -2898170;
	volatile int32_t t30 = 2;

	t30 = ((x121+(x122&x123))/x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MIN;
	volatile int32_t x127 = -1;
	uint64_t x128 = UINT64_MAX;
	volatile uint64_t t31 = 4995202379LLU;

	t31 = ((x125+(x126&x127))/x128);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = -1275095775405LL;
	volatile int64_t x131 = -1372727563640346531LL;
	int64_t x132 = INT64_MAX;

	t32 = ((x129+(x130&x131))/x132);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MIN;
	uint8_t x134 = 79U;
	int8_t x135 = -26;
	static volatile uint64_t x136 = 5182759909351112LLU;
	uint64_t t33 = 8419630060LLU;

	t33 = ((x133+(x134&x135))/x136);

	if (t33 != 1779LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = -1;
	uint64_t x138 = UINT64_MAX;
	int64_t x139 = -1LL;
	int64_t x140 = -1LL;
	uint64_t t34 = 141047033016516634LLU;

	t34 = ((x137+(x138&x139))/x140);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = -1320074287327697628LL;
	uint32_t x142 = UINT32_MAX;
	uint64_t t35 = 2963024479463LLU;

	t35 = ((x141+(x142&x143))/x144);

	if (t35 != 317171230LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x145 = INT32_MIN;
	volatile uint32_t x146 = UINT32_MAX;
	int32_t x147 = 832;
	volatile uint32_t t36 = 13140U;

	t36 = ((x145+(x146&x147))/x148);

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = UINT32_MAX;
	static int8_t x150 = 7;
	static int8_t x151 = INT8_MAX;
	static int64_t x152 = -471606258LL;
	static volatile int64_t t37 = 103073457LL;

	t37 = ((x149+(x150&x151))/x152);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x154 = 16989840U;
	uint32_t x155 = UINT32_MAX;
	int16_t x156 = -2966;
	volatile uint32_t t38 = 56642359U;

	t38 = ((x153+(x154&x155))/x156);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x158 = -1;
	uint32_t x159 = 355368U;
	volatile uint32_t x160 = 174U;

	t39 = ((x157+(x158&x159))/x160);

	if (t39 != 2418U) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x161 = INT64_MAX;
	uint64_t x163 = 8384480LLU;

	t40 = ((x161+(x162&x163))/x164);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x165 = INT32_MIN;
	uint16_t x167 = 0U;
	static uint32_t x168 = 97U;
	uint32_t t41 = 0U;

	t41 = ((x165+(x166&x167))/x168);

	if (t41 != 22139006U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x173 = 56;
	uint16_t x174 = 1U;
	volatile int32_t x175 = -697122;
	volatile uint8_t x176 = 117U;

	t42 = ((x173+(x174&x175))/x176);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x181 = 6U;
	uint32_t x182 = UINT32_MAX;
	uint8_t x183 = UINT8_MAX;
	static uint32_t x184 = UINT32_MAX;
	static volatile uint32_t t43 = 1503052336U;

	t43 = ((x181+(x182&x183))/x184);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x185 = INT16_MAX;
	int64_t x186 = 1LL;
	int16_t x187 = -1;
	int16_t x188 = -1;

	t44 = ((x185+(x186&x187))/x188);

	if (t44 != -32768LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x190 = -1;
	static volatile int32_t x191 = INT32_MIN;
	uint64_t x192 = 48985158960637LLU;
	uint64_t t45 = 59773207LLU;

	t45 = ((x189+(x190&x191))/x192);

	if (t45 != 376578LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x193 = INT32_MAX;
	uint32_t x194 = 2067759U;
	volatile int8_t x195 = INT8_MIN;
	uint8_t x196 = 96U;
	volatile uint32_t t46 = 38U;

	t46 = ((x193+(x194&x195))/x196);

	if (t46 != 22391159U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x197 = -2758;
	uint8_t x198 = UINT8_MAX;
	int16_t x199 = INT16_MIN;
	static int16_t x200 = 16218;

	t47 = ((x197+(x198&x199))/x200);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x201 = INT16_MAX;
	uint8_t x202 = UINT8_MAX;
	int32_t x204 = 794845;
	volatile int32_t t48 = -118059501;

	t48 = ((x201+(x202&x203))/x204);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x205 = INT8_MAX;
	uint32_t x206 = 50808U;
	int16_t x207 = -1;
	static volatile int64_t x208 = 3544224080430714435LL;

	t49 = ((x205+(x206&x207))/x208);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x209 = 5U;
	static uint64_t x210 = UINT64_MAX;
	int8_t x211 = INT8_MIN;
	uint32_t x212 = 14688U;

	t50 = ((x209+(x210&x211))/x212);

	if (t50 != 1255905778438831LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x213 = 75U;
	uint32_t x215 = 592U;
	static int32_t x216 = -973;
	uint32_t t51 = 64000U;

	t51 = ((x213+(x214&x215))/x216);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x217 = INT16_MIN;
	int8_t x218 = 2;
	uint16_t x219 = UINT16_MAX;
	int16_t x220 = INT16_MIN;
	static volatile int32_t t52 = 29538;

	t52 = ((x217+(x218&x219))/x220);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x221 = 5;
	volatile uint16_t x222 = UINT16_MAX;
	volatile int16_t x223 = -1;
	static int8_t x224 = INT8_MIN;
	int32_t t53 = 163;

	t53 = ((x221+(x222&x223))/x224);

	if (t53 != -512) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x230 = INT64_MIN;
	static volatile int16_t x231 = INT16_MAX;
	int16_t x232 = -1;
	volatile int64_t t54 = 1895629474089841010LL;

	t54 = ((x229+(x230&x231))/x232);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x234 = 2U;
	int64_t x235 = INT64_MIN;
	int64_t t55 = -854523241209LL;

	t55 = ((x233+(x234&x235))/x236);

	if (t55 != 38LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x237 = INT64_MIN;
	uint32_t x238 = UINT32_MAX;
	uint32_t x239 = 204250888U;
	volatile int64_t t56 = -944358851290897LL;

	t56 = ((x237+(x238&x239))/x240);

	if (t56 != 9223372036650524920LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x241 = INT16_MIN;
	volatile uint8_t x242 = 0U;
	int16_t x244 = -5496;

	t57 = ((x241+(x242&x243))/x244);

	if (t57 != 5) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x246 = 0;
	int64_t x247 = INT64_MAX;
	volatile int64_t t58 = 57855653767LL;

	t58 = ((x245+(x246&x247))/x248);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x249 = INT64_MIN;
	static uint16_t x250 = UINT16_MAX;
	int16_t x252 = INT16_MIN;

	t59 = ((x249+(x250&x251))/x252);

	if (t59 != 281474976710654LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x253 = 8;
	int32_t x254 = -232118072;
	int32_t x255 = INT32_MIN;
	int32_t t60 = -306;

	t60 = ((x253+(x254&x255))/x256);

	if (t60 != 2147483640) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x258 = INT16_MIN;
	uint32_t x259 = 219332273U;
	static uint32_t x260 = UINT32_MAX;
	volatile uint32_t t61 = 7122597U;

	t61 = ((x257+(x258&x259))/x260);

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x261 = 33552822U;
	int16_t x262 = INT16_MIN;
	static volatile uint8_t x263 = 108U;
	int16_t x264 = INT16_MIN;
	volatile uint32_t t62 = 29339982U;

	t62 = ((x261+(x262&x263))/x264);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x265 = -167159;
	int16_t x266 = INT16_MIN;
	static int16_t x267 = -467;
	int64_t x268 = INT64_MIN;

	t63 = ((x265+(x266&x267))/x268);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x269 = -1LL;
	uint32_t x271 = UINT32_MAX;
	static int8_t x272 = INT8_MIN;
	int64_t t64 = 4015052973406792LL;

	t64 = ((x269+(x270&x271))/x272);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x273 = 0U;
	int64_t x275 = INT64_MAX;
	int32_t x276 = INT32_MIN;
	volatile int64_t t65 = -154695328551LL;

	t65 = ((x273+(x274&x275))/x276);

	if (t65 != -4294967295LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x278 = 3LL;
	static int32_t x279 = -1;
	int64_t t66 = 15886908084LL;

	t66 = ((x277+(x278&x279))/x280);

	if (t66 != -65537LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x281 = INT16_MIN;
	static volatile int32_t x282 = INT32_MIN;
	volatile uint8_t x283 = 0U;
	uint8_t x284 = 12U;
	volatile int32_t t67 = 805057350;

	t67 = ((x281+(x282&x283))/x284);

	if (t67 != -2730) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x285 = INT64_MIN;
	volatile int8_t x287 = INT8_MAX;
	int8_t x288 = INT8_MIN;
	static int64_t t68 = 35296753002092LL;

	t68 = ((x285+(x286&x287))/x288);

	if (t68 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int32_t x293 = INT32_MIN;
	uint16_t x295 = 839U;
	volatile uint64_t t69 = 29882194LLU;

	t69 = ((x293+(x294&x295))/x296);

	if (t69 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x297 = INT16_MIN;
	static volatile uint64_t x298 = 3301LLU;
	volatile int32_t x299 = 39134;
	uint16_t x300 = UINT16_MAX;
	volatile uint64_t t70 = 46LLU;

	t70 = ((x297+(x298&x299))/x300);

	if (t70 != 281479271743488LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x301 = 1U;
	int16_t x302 = INT16_MIN;
	int16_t x303 = -56;
	volatile uint16_t x304 = 2U;
	volatile int32_t t71 = -2843385;

	t71 = ((x301+(x302&x303))/x304);

	if (t71 != -16383) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int64_t x309 = -4032102LL;
	static int32_t x310 = -1;
	volatile uint64_t x311 = 0LLU;
	volatile uint64_t x312 = 200434LLU;
	volatile uint64_t t72 = 8861642716816350LLU;

	t72 = ((x309+(x310&x311))/x312);

	if (t72 != 92034006574261LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x313 = 1;
	uint64_t x314 = 0LLU;
	static int8_t x315 = -1;
	static uint64_t t73 = 1440763LLU;

	t73 = ((x313+(x314&x315))/x316);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x321 = UINT32_MAX;
	int64_t x322 = INT64_MIN;
	int32_t x323 = INT32_MIN;
	volatile int64_t x324 = -1LL;
	int64_t t74 = -332LL;

	t74 = ((x321+(x322&x323))/x324);

	if (t74 != 9223372032559808513LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x325 = 737U;
	uint16_t x326 = UINT16_MAX;
	volatile uint32_t x327 = 1095821U;
	volatile uint32_t t75 = 17261094U;

	t75 = ((x325+(x326&x327))/x328);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x329 = INT64_MAX;
	volatile int8_t x330 = 58;
	int64_t x331 = INT64_MIN;
	uint32_t x332 = 9U;
	int64_t t76 = 0LL;

	t76 = ((x329+(x330&x331))/x332);

	if (t76 != 1024819115206086200LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x333 = -25;
	volatile int16_t x334 = INT16_MAX;
	volatile uint8_t x335 = 22U;
	uint8_t x336 = 3U;
	int32_t t77 = 54892555;

	t77 = ((x333+(x334&x335))/x336);

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x341 = 4U;
	uint8_t x342 = 19U;
	uint16_t x343 = UINT16_MAX;
	int16_t x344 = INT16_MAX;
	static int32_t t78 = 465571;

	t78 = ((x341+(x342&x343))/x344);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x345 = INT16_MAX;
	int16_t x346 = INT16_MIN;
	uint64_t x347 = 321LLU;
	static int64_t x348 = -1637882LL;
	static volatile uint64_t t79 = 166128449LLU;

	t79 = ((x345+(x346&x347))/x348);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x349 = 4;
	static uint8_t x350 = 43U;
	static int16_t x351 = -1;
	volatile int64_t x352 = 17391992106505LL;
	volatile int64_t t80 = -6011LL;

	t80 = ((x349+(x350&x351))/x352);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x353 = INT32_MAX;
	int16_t x354 = 20;
	uint32_t x355 = UINT32_MAX;
	uint32_t x356 = UINT32_MAX;
	uint32_t t81 = 45039195U;

	t81 = ((x353+(x354&x355))/x356);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x358 = -1LL;
	int64_t x360 = INT64_MIN;
	uint64_t t82 = 2205329359497673847LLU;

	t82 = ((x357+(x358&x359))/x360);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x361 = -961;
	int16_t x362 = INT16_MIN;
	int16_t x363 = -1;
	uint16_t x364 = UINT16_MAX;
	volatile int32_t t83 = 133009;

	t83 = ((x361+(x362&x363))/x364);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x369 = UINT16_MAX;
	int8_t x370 = INT8_MAX;
	int16_t x372 = INT16_MAX;
	volatile int64_t t84 = 2073227049211440LL;

	t84 = ((x369+(x370&x371))/x372);

	if (t84 != 2LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x378 = -1;
	int8_t x379 = INT8_MAX;
	volatile uint32_t x380 = UINT32_MAX;
	uint32_t t85 = 124U;

	t85 = ((x377+(x378&x379))/x380);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x381 = INT8_MIN;
	static uint8_t x382 = 50U;
	int16_t x383 = 14;
	uint16_t x384 = UINT16_MAX;
	int32_t t86 = 1;

	t86 = ((x381+(x382&x383))/x384);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x386 = 5356LLU;
	volatile int8_t x387 = INT8_MAX;
	volatile int16_t x388 = -1;
	static uint64_t t87 = 13LLU;

	t87 = ((x385+(x386&x387))/x388);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x389 = 6LLU;
	static int16_t x391 = 1;
	volatile uint64_t t88 = 13617926LLU;

	t88 = ((x389+(x390&x391))/x392);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x393 = 41U;
	volatile int16_t x394 = INT16_MIN;
	uint64_t x395 = UINT64_MAX;
	int8_t x396 = INT8_MIN;
	uint64_t t89 = 6381986895592264426LLU;

	t89 = ((x393+(x394&x395))/x396);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x397 = INT64_MIN;
	static int32_t x398 = INT32_MAX;
	int8_t x399 = INT8_MIN;
	volatile uint64_t x400 = 52933964012104730LLU;
	uint64_t t90 = 2980372122066LLU;

	t90 = ((x397+(x398&x399))/x400);

	if (t90 != 174LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x401 = -8;
	volatile uint8_t x403 = 0U;

	t91 = ((x401+(x402&x403))/x404);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x405 = INT32_MAX;
	uint16_t x407 = 6200U;
	int32_t x408 = INT32_MAX;

	t92 = ((x405+(x406&x407))/x408);

	if (t92 != 1LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x409 = 277;
	volatile uint32_t t93 = 7236U;

	t93 = ((x409+(x410&x411))/x412);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x414 = INT32_MAX;
	static int8_t x415 = INT8_MIN;
	int32_t x416 = INT32_MIN;
	static uint32_t t94 = 43U;

	t94 = ((x413+(x414&x415))/x416);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x417 = INT32_MIN;
	int16_t x418 = -1;
	uint16_t x419 = 2U;
	static uint64_t x420 = UINT64_MAX;
	uint64_t t95 = 4071903699LLU;

	t95 = ((x417+(x418&x419))/x420);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x421 = -1;
	static int32_t x422 = 12179;
	int32_t x424 = -1711;
	volatile int64_t t96 = -522222293471804LL;

	t96 = ((x421+(x422&x423))/x424);

	if (t96 != -6LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x425 = 1;
	int64_t x427 = -1LL;
	int16_t x428 = -6;

	t97 = ((x425+(x426&x427))/x428);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x430 = INT64_MIN;
	uint32_t x431 = 223912409U;
	int32_t x432 = -1;
	static volatile int64_t t98 = -316753857LL;

	t98 = ((x429+(x430&x431))/x432);

	if (t98 != 32768LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x433 = UINT32_MAX;
	volatile int64_t x434 = 2LL;
	int16_t x435 = INT16_MIN;
	int16_t x436 = -19;
	int64_t t99 = 0LL;

	t99 = ((x433+(x434&x435))/x436);

	if (t99 != -226050910LL) { NG(); } else { ; }
	
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

