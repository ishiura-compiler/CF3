#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t t1 = -1;
int8_t x16 = -29;
int32_t x19 = INT32_MIN;
int32_t t4 = 496;
int16_t x22 = 156;
int8_t x27 = INT8_MIN;
int8_t x28 = -1;
uint8_t x29 = 28U;
static uint32_t x31 = UINT32_MAX;
int32_t t8 = 4031717;
uint64_t x40 = UINT64_MAX;
int64_t x41 = INT64_MIN;
volatile int16_t x42 = -1;
static volatile int32_t x56 = 748311;
static volatile int32_t t13 = 15;
static volatile int32_t x61 = -27;
uint16_t x64 = 592U;
volatile int32_t t17 = 0;
volatile int8_t x74 = -1;
volatile int32_t t18 = 3648201;
uint8_t x84 = 23U;
uint32_t x103 = UINT32_MAX;
int8_t x104 = -1;
int64_t x108 = -56214LL;
static volatile int32_t t27 = 497;
static int32_t x116 = -555;
uint32_t x117 = UINT32_MAX;
int32_t x118 = -853799908;
volatile int16_t x119 = INT16_MAX;
volatile uint32_t x120 = UINT32_MAX;
int32_t x121 = INT32_MAX;
int64_t x127 = INT64_MIN;
uint16_t x129 = 0U;
int8_t x133 = INT8_MIN;
int16_t x134 = INT16_MAX;
volatile int32_t t33 = 17156417;
uint16_t x139 = UINT16_MAX;
uint8_t x142 = UINT8_MAX;
static int64_t x148 = 36068508LL;
volatile int16_t x153 = -1;
int64_t x155 = -21332LL;
int32_t x157 = INT32_MIN;
int8_t x158 = INT8_MIN;
volatile int32_t t40 = 26618;
int32_t x168 = INT32_MAX;
int32_t x171 = INT32_MIN;
static int64_t x173 = INT64_MIN;
static volatile int32_t t43 = 2436161;
static volatile uint64_t x187 = 214297568804757919LLU;
uint64_t x188 = 40473LLU;
int64_t x190 = -1LL;
volatile int32_t t47 = 116758;
int64_t x195 = INT64_MAX;
int8_t x201 = 41;
int16_t x214 = INT16_MAX;
volatile int64_t x218 = INT64_MIN;
uint64_t x221 = UINT64_MAX;
int16_t x224 = INT16_MIN;
static volatile int8_t x230 = INT8_MIN;
int32_t x235 = 47;
int32_t t58 = 182;
int8_t x248 = -15;
int32_t x252 = 8583;
static volatile int16_t x253 = -1;
volatile int32_t t64 = -25773;
uint8_t x267 = 5U;
volatile int32_t t66 = -465856313;
int64_t x269 = -1LL;
static volatile uint8_t x271 = 50U;
int32_t t69 = -55;
static int32_t x282 = INT32_MIN;
uint8_t x283 = UINT8_MAX;
static volatile int32_t t70 = 591983;
int32_t t71 = 2035;
volatile int8_t x293 = INT8_MAX;
static int8_t x294 = -1;
volatile int64_t x297 = INT64_MAX;
int32_t x304 = INT32_MIN;
int16_t x307 = INT16_MAX;
volatile int32_t t76 = -14119574;
volatile int16_t x311 = 126;
static int32_t t77 = 3356608;
static int32_t x319 = 49;
volatile int32_t t79 = 9134;
static uint32_t x326 = 29U;
int8_t x328 = -1;
volatile uint64_t x329 = 765355483788577LLU;
uint32_t x332 = UINT32_MAX;
uint8_t x336 = 75U;
int64_t x337 = INT64_MIN;
static int64_t x346 = INT64_MIN;
uint8_t x348 = 82U;
int16_t x349 = INT16_MIN;
volatile int32_t t88 = -63;
int8_t x357 = -63;
static int16_t x360 = 22;
static int32_t x362 = INT32_MAX;
volatile int32_t t90 = 4866;
int16_t x380 = INT16_MAX;
uint8_t x382 = UINT8_MAX;
uint64_t x384 = 9525LLU;
volatile uint16_t x389 = UINT16_MAX;
static int32_t x391 = INT32_MAX;
static int16_t x392 = INT16_MAX;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	static volatile uint16_t x2 = UINT16_MAX;
	int16_t x3 = INT16_MIN;
	int64_t x4 = -3487076794846LL;
	volatile int32_t t0 = -229;

	t0 = (((x1|x2)==x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = INT8_MIN;
	uint64_t x6 = 0LLU;
	uint64_t x7 = 10624393972LLU;
	int64_t x8 = INT64_MIN;

	t1 = (((x5|x6)==x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = INT64_MIN;
	int16_t x10 = INT16_MIN;
	uint16_t x11 = UINT16_MAX;
	int8_t x12 = INT8_MAX;
	int32_t t2 = -45;

	t2 = (((x9|x10)==x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = 0;
	volatile uint8_t x14 = UINT8_MAX;
	volatile int16_t x15 = -1;
	int32_t t3 = -41160;

	t3 = (((x13|x14)==x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -2;
	int16_t x18 = 3;
	volatile int16_t x20 = INT16_MIN;

	t4 = (((x17|x18)==x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int64_t x21 = INT64_MAX;
	uint32_t x23 = UINT32_MAX;
	int32_t x24 = -4725;
	static volatile int32_t t5 = -503118;

	t5 = (((x21|x22)==x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int16_t x25 = -1;
	int8_t x26 = -25;
	volatile int32_t t6 = -5198771;

	t6 = (((x25|x26)==x27)==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x30 = INT8_MIN;
	int16_t x32 = -3;
	volatile int32_t t7 = 122463;

	t7 = (((x29|x30)==x31)==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MAX;
	int16_t x34 = 3;
	static volatile int16_t x35 = -1;
	int32_t x36 = INT32_MAX;

	t8 = (((x33|x34)==x35)==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 12015U;
	int32_t x38 = -1;
	uint8_t x39 = 17U;
	volatile int32_t t9 = 0;

	t9 = (((x37|x38)==x39)==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x43 = -1LL;
	volatile uint16_t x44 = 7754U;
	volatile int32_t t10 = 42823371;

	t10 = (((x41|x42)==x43)==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x45 = UINT64_MAX;
	int16_t x46 = -1;
	int8_t x47 = -1;
	uint64_t x48 = 3490683LLU;
	int32_t t11 = -29;

	t11 = (((x45|x46)==x47)==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = UINT16_MAX;
	int16_t x50 = -1;
	volatile int8_t x51 = 25;
	static uint8_t x52 = 1U;
	int32_t t12 = 8835;

	t12 = (((x49|x50)==x51)==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = UINT64_MAX;
	uint64_t x54 = 40379299320LLU;
	volatile uint16_t x55 = 0U;

	t13 = (((x53|x54)==x55)==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x57 = INT32_MIN;
	int8_t x58 = INT8_MIN;
	static int64_t x59 = INT64_MIN;
	uint32_t x60 = 769U;
	volatile int32_t t14 = -41;

	t14 = (((x57|x58)==x59)==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x62 = 1;
	volatile uint8_t x63 = 76U;
	int32_t t15 = 91964;

	t15 = (((x61|x62)==x63)==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x65 = UINT8_MAX;
	int32_t x66 = -1;
	uint16_t x67 = 0U;
	uint64_t x68 = UINT64_MAX;
	int32_t t16 = 39437017;

	t16 = (((x65|x66)==x67)==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x69 = INT8_MIN;
	int32_t x70 = 124;
	uint64_t x71 = UINT64_MAX;
	int16_t x72 = -6583;

	t17 = (((x69|x70)==x71)==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x73 = INT8_MIN;
	int16_t x75 = -21;
	int8_t x76 = 0;

	t18 = (((x73|x74)==x75)==x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MIN;
	static int16_t x78 = INT16_MIN;
	int16_t x79 = -16;
	volatile uint8_t x80 = 89U;
	volatile int32_t t19 = 1542;

	t19 = (((x77|x78)==x79)==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = 21240;
	volatile uint64_t x82 = 1867518015474LLU;
	static int64_t x83 = -204216LL;
	int32_t t20 = -61876849;

	t20 = (((x81|x82)==x83)==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x85 = 161LLU;
	int32_t x86 = 0;
	int64_t x87 = INT64_MAX;
	int64_t x88 = INT64_MIN;
	volatile int32_t t21 = -1149;

	t21 = (((x85|x86)==x87)==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x89 = 928;
	static uint16_t x90 = 1U;
	static volatile int16_t x91 = INT16_MAX;
	int8_t x92 = 3;
	int32_t t22 = 500032692;

	t22 = (((x89|x90)==x91)==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = -575193LL;
	int64_t x94 = INT64_MIN;
	volatile int8_t x95 = -1;
	int64_t x96 = -1LL;
	static volatile int32_t t23 = 46509;

	t23 = (((x93|x94)==x95)==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x97 = 16U;
	int64_t x98 = INT64_MIN;
	int16_t x99 = INT16_MIN;
	int8_t x100 = INT8_MIN;
	int32_t t24 = 2386;

	t24 = (((x97|x98)==x99)==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MIN;
	int8_t x102 = -62;
	static int32_t t25 = -392022;

	t25 = (((x101|x102)==x103)==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = 13LLU;
	uint16_t x106 = UINT16_MAX;
	uint32_t x107 = 94596643U;
	int32_t t26 = -16;

	t26 = (((x105|x106)==x107)==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x109 = UINT64_MAX;
	uint64_t x110 = UINT64_MAX;
	static int64_t x111 = 318108184912LL;
	uint32_t x112 = UINT32_MAX;

	t27 = (((x109|x110)==x111)==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x113 = -1;
	int32_t x114 = INT32_MIN;
	int32_t x115 = INT32_MIN;
	static int32_t t28 = 586474;

	t28 = (((x113|x114)==x115)==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t t29 = 492851717;

	t29 = (((x117|x118)==x119)==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x122 = INT16_MIN;
	static int8_t x123 = -1;
	static volatile uint32_t x124 = 1U;
	static int32_t t30 = 1;

	t30 = (((x121|x122)==x123)==x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x125 = 1;
	int8_t x126 = INT8_MIN;
	int16_t x128 = INT16_MIN;
	static volatile int32_t t31 = 400362145;

	t31 = (((x125|x126)==x127)==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x130 = -1LL;
	volatile int8_t x131 = INT8_MIN;
	uint8_t x132 = 3U;
	static int32_t t32 = -9;

	t32 = (((x129|x130)==x131)==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x135 = INT8_MAX;
	int64_t x136 = INT64_MAX;

	t33 = (((x133|x134)==x135)==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x137 = -1672;
	int8_t x138 = -1;
	int16_t x140 = -1;
	static int32_t t34 = -67;

	t34 = (((x137|x138)==x139)==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MAX;
	int8_t x143 = -1;
	uint64_t x144 = UINT64_MAX;
	volatile int32_t t35 = -2046;

	t35 = (((x141|x142)==x143)==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = 26789U;
	volatile int16_t x146 = -1;
	volatile int16_t x147 = 1;
	int32_t t36 = -281;

	t36 = (((x145|x146)==x147)==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = INT32_MIN;
	int8_t x150 = -3;
	int64_t x151 = INT64_MIN;
	volatile uint64_t x152 = UINT64_MAX;
	volatile int32_t t37 = -15369140;

	t37 = (((x149|x150)==x151)==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x154 = -1;
	static int64_t x156 = INT64_MIN;
	int32_t t38 = 67;

	t38 = (((x153|x154)==x155)==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x159 = 207;
	volatile int16_t x160 = 6;
	volatile int32_t t39 = 152655;

	t39 = (((x157|x158)==x159)==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = INT64_MIN;
	uint16_t x162 = 381U;
	int16_t x163 = INT16_MIN;
	int8_t x164 = -1;

	t40 = (((x161|x162)==x163)==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = 46U;
	volatile int16_t x166 = INT16_MIN;
	static uint32_t x167 = 7449U;
	volatile int32_t t41 = -39;

	t41 = (((x165|x166)==x167)==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = 286U;
	static uint64_t x170 = 7994694960086LLU;
	uint32_t x172 = UINT32_MAX;
	volatile int32_t t42 = -6886783;

	t42 = (((x169|x170)==x171)==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x174 = 1;
	int64_t x175 = 15822214109LL;
	int8_t x176 = INT8_MAX;

	t43 = (((x173|x174)==x175)==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = -8198319LL;
	int32_t x178 = INT32_MIN;
	int8_t x179 = -1;
	uint16_t x180 = 29U;
	volatile int32_t t44 = -330331;

	t44 = (((x177|x178)==x179)==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = 22U;
	int16_t x182 = -2;
	int16_t x183 = INT16_MAX;
	uint64_t x184 = 752366LLU;
	static volatile int32_t t45 = -28181;

	t45 = (((x181|x182)==x183)==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x185 = 7U;
	uint8_t x186 = 2U;
	volatile int32_t t46 = 208535;

	t46 = (((x185|x186)==x187)==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = 74;
	uint8_t x191 = UINT8_MAX;
	int16_t x192 = -10;

	t47 = (((x189|x190)==x191)==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x193 = 1U;
	int64_t x194 = INT64_MAX;
	volatile int32_t x196 = 452667;
	volatile int32_t t48 = 65035;

	t48 = (((x193|x194)==x195)==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = INT8_MAX;
	uint64_t x198 = UINT64_MAX;
	int8_t x199 = -9;
	uint32_t x200 = UINT32_MAX;
	int32_t t49 = -2882;

	t49 = (((x197|x198)==x199)==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int16_t x202 = INT16_MAX;
	int16_t x203 = -1;
	volatile uint8_t x204 = 17U;
	volatile int32_t t50 = 47309;

	t50 = (((x201|x202)==x203)==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = UINT16_MAX;
	int32_t x206 = INT32_MIN;
	int16_t x207 = INT16_MIN;
	int32_t x208 = -15363594;
	static int32_t t51 = -2234;

	t51 = (((x205|x206)==x207)==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x209 = UINT32_MAX;
	static uint16_t x210 = 1125U;
	int32_t x211 = INT32_MAX;
	int64_t x212 = -58LL;
	static int32_t t52 = -514476656;

	t52 = (((x209|x210)==x211)==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = 33;
	uint64_t x215 = UINT64_MAX;
	int16_t x216 = INT16_MAX;
	static int32_t t53 = -59977;

	t53 = (((x213|x214)==x215)==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = -388770;
	uint32_t x219 = UINT32_MAX;
	volatile uint32_t x220 = 30991U;
	int32_t t54 = 4;

	t54 = (((x217|x218)==x219)==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x222 = -1LL;
	int32_t x223 = INT32_MIN;
	int32_t t55 = 0;

	t55 = (((x221|x222)==x223)==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = -32LL;
	int32_t x226 = INT32_MIN;
	uint16_t x227 = 54U;
	uint64_t x228 = 940507236LLU;
	int32_t t56 = -19105;

	t56 = (((x225|x226)==x227)==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = -1;
	int16_t x231 = 5;
	uint32_t x232 = 1959853656U;
	volatile int32_t t57 = 746048207;

	t57 = (((x229|x230)==x231)==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = -1LL;
	int64_t x234 = -6988619LL;
	int64_t x236 = -1LL;

	t58 = (((x233|x234)==x235)==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x237 = INT16_MAX;
	static uint32_t x238 = 3U;
	volatile uint32_t x239 = 291435U;
	int64_t x240 = INT64_MAX;
	static volatile int32_t t59 = -378947561;

	t59 = (((x237|x238)==x239)==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x241 = UINT16_MAX;
	int16_t x242 = 164;
	int64_t x243 = INT64_MIN;
	int32_t x244 = INT32_MIN;
	int32_t t60 = 409845;

	t60 = (((x241|x242)==x243)==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x245 = INT32_MIN;
	volatile int8_t x246 = -1;
	int32_t x247 = -1;
	int32_t t61 = -55566190;

	t61 = (((x245|x246)==x247)==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = INT16_MAX;
	int32_t x250 = -1;
	uint32_t x251 = 86U;
	volatile int32_t t62 = 6097001;

	t62 = (((x249|x250)==x251)==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x254 = 13479;
	uint16_t x255 = 100U;
	int16_t x256 = INT16_MAX;
	int32_t t63 = -5;

	t63 = (((x253|x254)==x255)==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = 4145924816LL;
	int32_t x258 = INT32_MIN;
	uint8_t x259 = 0U;
	uint64_t x260 = 42553666616LLU;

	t64 = (((x257|x258)==x259)==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = INT64_MIN;
	int32_t x262 = INT32_MIN;
	uint64_t x263 = UINT64_MAX;
	uint8_t x264 = 53U;
	static int32_t t65 = 59;

	t65 = (((x261|x262)==x263)==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = 1;
	uint32_t x266 = 21629511U;
	int16_t x268 = INT16_MIN;

	t66 = (((x265|x266)==x267)==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x270 = 1;
	int32_t x272 = INT32_MIN;
	static int32_t t67 = -207;

	t67 = (((x269|x270)==x271)==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x273 = INT64_MIN;
	uint8_t x274 = 0U;
	int16_t x275 = -53;
	int64_t x276 = -1LL;
	volatile int32_t t68 = 2905219;

	t68 = (((x273|x274)==x275)==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MIN;
	uint16_t x278 = 3U;
	int16_t x279 = INT16_MIN;
	static int16_t x280 = 3637;

	t69 = (((x277|x278)==x279)==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = INT16_MIN;
	int8_t x284 = INT8_MIN;

	t70 = (((x281|x282)==x283)==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = -1;
	int8_t x286 = INT8_MIN;
	uint16_t x287 = 204U;
	volatile uint32_t x288 = 3U;

	t71 = (((x285|x286)==x287)==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x289 = INT32_MAX;
	int8_t x290 = 63;
	volatile int8_t x291 = -1;
	int8_t x292 = 1;
	volatile int32_t t72 = 5955989;

	t72 = (((x289|x290)==x291)==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x295 = INT32_MAX;
	volatile int16_t x296 = -1;
	int32_t t73 = 7986;

	t73 = (((x293|x294)==x295)==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x298 = -95110988866094261LL;
	static int16_t x299 = -1;
	static volatile int64_t x300 = 975788855LL;
	volatile int32_t t74 = 0;

	t74 = (((x297|x298)==x299)==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x301 = 1887U;
	int32_t x302 = 60;
	int16_t x303 = -16312;
	int32_t t75 = 968672978;

	t75 = (((x301|x302)==x303)==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x305 = 2687792615359343LLU;
	int16_t x306 = INT16_MAX;
	int16_t x308 = -1;

	t76 = (((x305|x306)==x307)==x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = INT16_MIN;
	int32_t x310 = INT32_MAX;
	int16_t x312 = INT16_MIN;

	t77 = (((x309|x310)==x311)==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = -3010102288770LL;
	volatile int32_t x314 = -1;
	int64_t x315 = INT64_MAX;
	int64_t x316 = INT64_MAX;
	int32_t t78 = -101479443;

	t78 = (((x313|x314)==x315)==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = -1LL;
	volatile uint16_t x318 = UINT16_MAX;
	int16_t x320 = -1;

	t79 = (((x317|x318)==x319)==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = 1410;
	static int64_t x322 = INT64_MAX;
	int16_t x323 = INT16_MAX;
	uint64_t x324 = UINT64_MAX;
	int32_t t80 = -2;

	t80 = (((x321|x322)==x323)==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = -1048490368LL;
	int8_t x327 = INT8_MIN;
	int32_t t81 = 3;

	t81 = (((x325|x326)==x327)==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x330 = 58;
	int32_t x331 = INT32_MIN;
	int32_t t82 = -1;

	t82 = (((x329|x330)==x331)==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = INT32_MIN;
	int8_t x334 = INT8_MIN;
	int64_t x335 = INT64_MIN;
	volatile int32_t t83 = 0;

	t83 = (((x333|x334)==x335)==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x338 = 2890U;
	int8_t x339 = 13;
	volatile uint64_t x340 = UINT64_MAX;
	volatile int32_t t84 = -2;

	t84 = (((x337|x338)==x339)==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x341 = INT16_MAX;
	volatile int8_t x342 = INT8_MIN;
	int32_t x343 = 1;
	int32_t x344 = -1;
	volatile int32_t t85 = 437852;

	t85 = (((x341|x342)==x343)==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = -1905;
	uint64_t x347 = 110636844544381652LLU;
	volatile int32_t t86 = 7575943;

	t86 = (((x345|x346)==x347)==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint8_t x350 = UINT8_MAX;
	int8_t x351 = INT8_MIN;
	static int32_t x352 = -2458471;
	volatile int32_t t87 = 385808059;

	t87 = (((x349|x350)==x351)==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = -1LL;
	uint16_t x354 = 0U;
	int32_t x355 = INT32_MAX;
	static int32_t x356 = -2586;

	t88 = (((x353|x354)==x355)==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x358 = INT8_MAX;
	uint64_t x359 = UINT64_MAX;
	static volatile int32_t t89 = 31493;

	t89 = (((x357|x358)==x359)==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x361 = 42U;
	int8_t x363 = -10;
	volatile int32_t x364 = INT32_MIN;

	t90 = (((x361|x362)==x363)==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x365 = 9U;
	int8_t x366 = -28;
	volatile int64_t x367 = 58601LL;
	int64_t x368 = INT64_MIN;
	int32_t t91 = -231;

	t91 = (((x365|x366)==x367)==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x369 = UINT8_MAX;
	int64_t x370 = INT64_MAX;
	static uint32_t x371 = 0U;
	volatile int16_t x372 = INT16_MAX;
	volatile int32_t t92 = 27276513;

	t92 = (((x369|x370)==x371)==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x373 = 167966LLU;
	int16_t x374 = -18;
	uint8_t x375 = 16U;
	int16_t x376 = -1;
	int32_t t93 = -76;

	t93 = (((x373|x374)==x375)==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x377 = UINT64_MAX;
	int32_t x378 = INT32_MIN;
	int32_t x379 = -418962222;
	static int32_t t94 = -72382;

	t94 = (((x377|x378)==x379)==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = -765;
	int32_t x383 = INT32_MIN;
	int32_t t95 = -80128909;

	t95 = (((x381|x382)==x383)==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x385 = -31;
	uint32_t x386 = 889U;
	int32_t x387 = INT32_MAX;
	int64_t x388 = INT64_MIN;
	static volatile int32_t t96 = 3569;

	t96 = (((x385|x386)==x387)==x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x390 = 735U;
	volatile int32_t t97 = -6399;

	t97 = (((x389|x390)==x391)==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x393 = INT64_MAX;
	uint32_t x394 = UINT32_MAX;
	static int8_t x395 = 15;
	volatile int32_t x396 = -1;
	static int32_t t98 = 10;

	t98 = (((x393|x394)==x395)==x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x397 = 0U;
	int16_t x398 = -2;
	volatile uint8_t x399 = 2U;
	static int8_t x400 = 2;
	static volatile int32_t t99 = 1;

	t99 = (((x397|x398)==x399)==x400);

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

