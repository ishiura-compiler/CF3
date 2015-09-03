#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = INT64_MIN;
int32_t x3 = 423652;
int8_t x4 = -31;
static volatile int32_t t0 = -13224;
static uint16_t x9 = 3267U;
static uint64_t x19 = 1459695955916LLU;
volatile int8_t x22 = 50;
int32_t x23 = INT32_MIN;
static uint64_t x26 = UINT64_MAX;
int32_t t7 = -38;
int16_t x36 = -2;
int16_t x40 = INT16_MAX;
volatile int32_t t9 = -19115782;
int8_t x41 = INT8_MIN;
int32_t x51 = INT32_MAX;
volatile int32_t t12 = 0;
static int8_t x65 = INT8_MAX;
uint32_t x73 = 71810529U;
uint16_t x74 = UINT16_MAX;
volatile int32_t t18 = 11909631;
volatile int32_t t20 = -15;
int16_t x87 = INT16_MIN;
int16_t x90 = -1;
uint16_t x94 = UINT16_MAX;
uint32_t x97 = 27532727U;
int32_t t25 = 52102791;
int32_t x105 = INT32_MAX;
int8_t x123 = -1;
uint8_t x127 = 115U;
int32_t x132 = INT32_MIN;
int16_t x148 = 134;
volatile uint64_t x152 = 23193933604592699LLU;
static volatile int32_t t37 = 245;
int32_t x157 = -5549572;
uint32_t x158 = UINT32_MAX;
int16_t x163 = INT16_MIN;
int16_t x164 = INT16_MIN;
uint64_t x167 = UINT64_MAX;
int32_t t40 = 14867441;
volatile int16_t x175 = INT16_MIN;
static volatile int32_t t43 = 363031909;
int32_t x184 = -1;
static volatile int64_t x185 = -108312LL;
uint8_t x188 = UINT8_MAX;
uint8_t x191 = 58U;
int8_t x193 = INT8_MIN;
int8_t x200 = -1;
volatile int64_t x201 = -60944093LL;
int32_t x203 = INT32_MAX;
int8_t x207 = INT8_MIN;
static int64_t x210 = -1LL;
static volatile uint16_t x214 = 53U;
volatile int32_t t52 = -1733;
volatile uint16_t x230 = UINT16_MAX;
static uint16_t x234 = 18U;
volatile int32_t t58 = -1261878;
uint16_t x242 = UINT16_MAX;
static uint8_t x255 = 33U;
int64_t x259 = -97959450064LL;
uint8_t x261 = 7U;
int8_t x263 = INT8_MAX;
int16_t x264 = 4094;
volatile int32_t t64 = -5;
uint8_t x270 = 5U;
int32_t t66 = -1;
uint32_t x274 = 98801U;
int8_t x276 = INT8_MAX;
int64_t x277 = -2232803679242448635LL;
int32_t x279 = -1;
uint32_t x280 = 90679U;
static volatile int32_t t68 = -80933614;
volatile uint16_t x282 = UINT16_MAX;
static int16_t x286 = -52;
int8_t x293 = -1;
int16_t x308 = INT16_MIN;
static uint16_t x312 = 34U;
uint16_t x315 = UINT16_MAX;
int64_t x316 = 4881048405LL;
volatile int32_t t77 = 16;
int32_t t81 = 2088;
uint64_t x334 = 63909277LLU;
volatile int32_t t83 = 12234;
volatile int16_t x343 = -1;
static uint32_t x345 = UINT32_MAX;
int64_t x351 = INT64_MIN;
static uint16_t x369 = 30U;
static int16_t x376 = INT16_MIN;
volatile int16_t x377 = -1;
int8_t x386 = -1;
volatile int32_t x388 = INT32_MIN;
int16_t x392 = INT16_MAX;
uint16_t x397 = 0U;
int32_t x402 = -1;
int32_t t98 = 412986;
uint8_t x407 = UINT8_MAX;
int32_t x408 = 11161;


void f0(void) {
	int16_t x1 = INT16_MIN;

	t0 = ((x1+(x2&x3))<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	int64_t x6 = -9239865259575753LL;
	uint8_t x7 = UINT8_MAX;
	int32_t x8 = -1;
	static int32_t t1 = 229707394;

	t1 = ((x5+(x6&x7))<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = 13;
	static int32_t x11 = -9882;
	static int32_t x12 = INT32_MIN;
	int32_t t2 = -3749052;

	t2 = ((x9+(x10&x11))<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = INT8_MAX;
	volatile int64_t x14 = INT64_MIN;
	uint32_t x15 = 40513204U;
	volatile uint8_t x16 = 8U;
	volatile int32_t t3 = -102960;

	t3 = ((x13+(x14&x15))<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	volatile uint32_t x18 = 9695U;
	uint64_t x20 = 975LLU;
	int32_t t4 = 27;

	t4 = ((x17+(x18&x19))<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int16_t x21 = INT16_MIN;
	uint8_t x24 = UINT8_MAX;
	int32_t t5 = -8096864;

	t5 = ((x21+(x22&x23))<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -1;
	uint16_t x27 = 3782U;
	uint32_t x28 = 1U;
	volatile int32_t t6 = -6;

	t6 = ((x25+(x26&x27))<=x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	uint64_t x30 = 27444307857LLU;
	volatile uint64_t x31 = UINT64_MAX;
	int16_t x32 = -80;

	t7 = ((x29+(x30&x31))<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = 759;
	uint32_t x34 = 18886U;
	volatile uint16_t x35 = 562U;
	int32_t t8 = -1737;

	t8 = ((x33+(x34&x35))<=x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x37 = INT16_MIN;
	static volatile int8_t x38 = INT8_MAX;
	int32_t x39 = INT32_MIN;

	t9 = ((x37+(x38&x39))<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x42 = UINT64_MAX;
	int8_t x43 = INT8_MIN;
	uint8_t x44 = 0U;
	volatile int32_t t10 = -896030486;

	t10 = ((x41+(x42&x43))<=x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x45 = UINT8_MAX;
	int32_t x46 = INT32_MAX;
	static volatile int64_t x47 = INT64_MAX;
	volatile uint8_t x48 = UINT8_MAX;
	static int32_t t11 = -56;

	t11 = ((x45+(x46&x47))<=x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 111191645272478269LLU;
	int32_t x50 = -3400;
	uint64_t x52 = 10331590LLU;

	t12 = ((x49+(x50&x51))<=x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x53 = -1;
	static volatile uint16_t x54 = UINT16_MAX;
	int32_t x55 = INT32_MIN;
	volatile uint16_t x56 = 5U;
	volatile int32_t t13 = 11892;

	t13 = ((x53+(x54&x55))<=x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 3U;
	volatile uint8_t x58 = 9U;
	static int64_t x59 = INT64_MAX;
	int8_t x60 = INT8_MIN;
	int32_t t14 = 101601;

	t14 = ((x57+(x58&x59))<=x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x61 = 0;
	uint8_t x62 = 11U;
	int32_t x63 = -44695;
	int16_t x64 = 6406;
	static int32_t t15 = -935;

	t15 = ((x61+(x62&x63))<=x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x66 = 891289786351233812LLU;
	uint16_t x67 = 1644U;
	int32_t x68 = -1;
	volatile int32_t t16 = -1;

	t16 = ((x65+(x66&x67))<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 89820701220LLU;
	volatile uint16_t x70 = 89U;
	uint16_t x71 = 122U;
	int16_t x72 = INT16_MIN;
	int32_t t17 = 21091;

	t17 = ((x69+(x70&x71))<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x75 = -12;
	static uint64_t x76 = 8479431533LLU;

	t18 = ((x73+(x74&x75))<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x77 = 1973U;
	static uint32_t x78 = UINT32_MAX;
	int32_t x79 = -1;
	int32_t x80 = -2791;
	int32_t t19 = 116;

	t19 = ((x77+(x78&x79))<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x81 = -1;
	volatile int8_t x82 = -1;
	uint32_t x83 = 51U;
	volatile int64_t x84 = -14891851892LL;

	t20 = ((x81+(x82&x83))<=x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = -522324797845445LL;
	int8_t x86 = INT8_MAX;
	static int32_t x88 = -58279;
	int32_t t21 = 0;

	t21 = ((x85+(x86&x87))<=x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x89 = 2778U;
	volatile int64_t x91 = -436242359644264LL;
	volatile int32_t x92 = INT32_MAX;
	static volatile int32_t t22 = 255095;

	t22 = ((x89+(x90&x91))<=x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x93 = 15U;
	static uint8_t x95 = 1U;
	volatile int8_t x96 = INT8_MAX;
	volatile int32_t t23 = -74145806;

	t23 = ((x93+(x94&x95))<=x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x98 = -1;
	static int16_t x99 = 101;
	static int16_t x100 = INT16_MAX;
	int32_t t24 = -4015;

	t24 = ((x97+(x98&x99))<=x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = 201LL;
	uint32_t x102 = 13484862U;
	uint16_t x103 = 13U;
	volatile int8_t x104 = INT8_MAX;

	t25 = ((x101+(x102&x103))<=x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x106 = -396817795;
	int32_t x107 = -1;
	static uint8_t x108 = 0U;
	int32_t t26 = -15191660;

	t26 = ((x105+(x106&x107))<=x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = INT64_MIN;
	uint32_t x114 = UINT32_MAX;
	int64_t x115 = INT64_MIN;
	int8_t x116 = INT8_MIN;
	static int32_t t27 = -2647812;

	t27 = ((x113+(x114&x115))<=x116);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x117 = INT16_MIN;
	static int16_t x118 = INT16_MIN;
	static int16_t x119 = INT16_MIN;
	volatile int32_t x120 = -1;
	int32_t t28 = 8504744;

	t28 = ((x117+(x118&x119))<=x120);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x121 = 4737384387LL;
	volatile int16_t x122 = INT16_MIN;
	static int64_t x124 = INT64_MIN;
	int32_t t29 = 5879380;

	t29 = ((x121+(x122&x123))<=x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x125 = INT8_MAX;
	int16_t x126 = -1;
	int32_t x128 = 635;
	volatile int32_t t30 = 133;

	t30 = ((x125+(x126&x127))<=x128);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x129 = 27824188246LL;
	int16_t x130 = 465;
	int8_t x131 = INT8_MIN;
	int32_t t31 = -1;

	t31 = ((x129+(x130&x131))<=x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x133 = 1684759689364923LL;
	volatile int32_t x134 = -1;
	uint8_t x135 = UINT8_MAX;
	int64_t x136 = -786331417302LL;
	int32_t t32 = -66276175;

	t32 = ((x133+(x134&x135))<=x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint32_t x137 = 3U;
	uint16_t x138 = 16U;
	volatile int32_t x139 = -160;
	volatile uint16_t x140 = UINT16_MAX;
	volatile int32_t t33 = -2049408;

	t33 = ((x137+(x138&x139))<=x140);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x141 = 843;
	int8_t x142 = INT8_MAX;
	int64_t x143 = -1LL;
	volatile int8_t x144 = INT8_MIN;
	int32_t t34 = 1;

	t34 = ((x141+(x142&x143))<=x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x145 = INT8_MIN;
	static int8_t x146 = INT8_MAX;
	static uint16_t x147 = 31U;
	static int32_t t35 = 3;

	t35 = ((x145+(x146&x147))<=x148);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x149 = -289;
	int32_t x150 = INT32_MAX;
	int64_t x151 = 135473918LL;
	volatile int32_t t36 = -483454;

	t36 = ((x149+(x150&x151))<=x152);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x153 = 954U;
	uint16_t x154 = UINT16_MAX;
	int64_t x155 = INT64_MIN;
	static int16_t x156 = INT16_MIN;

	t37 = ((x153+(x154&x155))<=x156);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x159 = 30U;
	int8_t x160 = 10;
	int32_t t38 = -2;

	t38 = ((x157+(x158&x159))<=x160);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x161 = 12125955008158317LL;
	int16_t x162 = -1;
	volatile int32_t t39 = -7561034;

	t39 = ((x161+(x162&x163))<=x164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x165 = 1U;
	uint16_t x166 = 409U;
	volatile uint8_t x168 = 74U;

	t40 = ((x165+(x166&x167))<=x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x169 = -1;
	int8_t x170 = -1;
	static int64_t x171 = -207605774790LL;
	static uint8_t x172 = UINT8_MAX;
	volatile int32_t t41 = -45514;

	t41 = ((x169+(x170&x171))<=x172);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x173 = 92U;
	static int8_t x174 = 54;
	int64_t x176 = 6259268818181699LL;
	static int32_t t42 = 496691132;

	t42 = ((x173+(x174&x175))<=x176);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x177 = 34285;
	int32_t x178 = INT32_MIN;
	int64_t x179 = INT64_MAX;
	int32_t x180 = INT32_MAX;

	t43 = ((x177+(x178&x179))<=x180);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x181 = -15120772019951640LL;
	int8_t x182 = -12;
	int16_t x183 = INT16_MIN;
	volatile int32_t t44 = 27051434;

	t44 = ((x181+(x182&x183))<=x184);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint32_t x186 = 6U;
	int8_t x187 = -3;
	volatile int32_t t45 = 114282;

	t45 = ((x185+(x186&x187))<=x188);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x189 = INT64_MIN;
	int8_t x190 = INT8_MAX;
	int64_t x192 = -2596285059LL;
	volatile int32_t t46 = -319999229;

	t46 = ((x189+(x190&x191))<=x192);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x194 = 8U;
	volatile int8_t x195 = INT8_MIN;
	static uint64_t x196 = UINT64_MAX;
	volatile int32_t t47 = 28;

	t47 = ((x193+(x194&x195))<=x196);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x197 = UINT8_MAX;
	int32_t x198 = -7685;
	volatile int16_t x199 = -1;
	int32_t t48 = -11987;

	t48 = ((x197+(x198&x199))<=x200);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x202 = -1;
	static uint32_t x204 = UINT32_MAX;
	volatile int32_t t49 = -2;

	t49 = ((x201+(x202&x203))<=x204);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x205 = 27U;
	static uint64_t x206 = 998039418326574818LLU;
	static int8_t x208 = INT8_MAX;
	int32_t t50 = 3750;

	t50 = ((x205+(x206&x207))<=x208);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x209 = 1042162626U;
	static uint64_t x211 = 134739LLU;
	int16_t x212 = INT16_MIN;
	static volatile int32_t t51 = -33822711;

	t51 = ((x209+(x210&x211))<=x212);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint32_t x213 = UINT32_MAX;
	uint16_t x215 = UINT16_MAX;
	volatile uint8_t x216 = 8U;

	t52 = ((x213+(x214&x215))<=x216);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x217 = INT32_MIN;
	static int32_t x218 = INT32_MAX;
	uint16_t x219 = 10614U;
	int8_t x220 = INT8_MIN;
	static volatile int32_t t53 = 48;

	t53 = ((x217+(x218&x219))<=x220);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x221 = 1;
	int16_t x222 = INT16_MAX;
	int8_t x223 = -1;
	uint32_t x224 = 119U;
	int32_t t54 = -7305799;

	t54 = ((x221+(x222&x223))<=x224);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x225 = -1;
	int16_t x226 = INT16_MAX;
	int8_t x227 = -6;
	uint64_t x228 = 913LLU;
	static int32_t t55 = -27819935;

	t55 = ((x225+(x226&x227))<=x228);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x229 = -1;
	int32_t x231 = INT32_MIN;
	int32_t x232 = INT32_MIN;
	volatile int32_t t56 = 208948094;

	t56 = ((x229+(x230&x231))<=x232);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x233 = 0U;
	int64_t x235 = INT64_MAX;
	volatile uint32_t x236 = 99U;
	int32_t t57 = 6;

	t57 = ((x233+(x234&x235))<=x236);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x237 = 1;
	static int8_t x238 = 36;
	uint32_t x239 = UINT32_MAX;
	static int64_t x240 = INT64_MAX;

	t58 = ((x237+(x238&x239))<=x240);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x241 = INT8_MAX;
	int32_t x243 = -1;
	int16_t x244 = INT16_MIN;
	volatile int32_t t59 = 1;

	t59 = ((x241+(x242&x243))<=x244);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x245 = 129173078225LL;
	uint32_t x246 = UINT32_MAX;
	int16_t x247 = -1308;
	volatile int32_t x248 = INT32_MIN;
	volatile int32_t t60 = -63;

	t60 = ((x245+(x246&x247))<=x248);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x249 = 1LLU;
	int16_t x250 = -1;
	volatile int8_t x251 = INT8_MIN;
	static uint64_t x252 = 6090073LLU;
	int32_t t61 = -9719628;

	t61 = ((x249+(x250&x251))<=x252);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x253 = -4;
	static uint32_t x254 = UINT32_MAX;
	int8_t x256 = 0;
	volatile int32_t t62 = 16624654;

	t62 = ((x253+(x254&x255))<=x256);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x257 = INT64_MIN;
	int16_t x258 = INT16_MAX;
	uint16_t x260 = UINT16_MAX;
	volatile int32_t t63 = -1246;

	t63 = ((x257+(x258&x259))<=x260);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x262 = 114U;

	t64 = ((x261+(x262&x263))<=x264);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x265 = INT8_MIN;
	int64_t x266 = -1LL;
	static uint32_t x267 = 89U;
	int32_t x268 = INT32_MAX;
	volatile int32_t t65 = -109251523;

	t65 = ((x265+(x266&x267))<=x268);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x269 = -1;
	int32_t x271 = 1655134;
	uint64_t x272 = 16006LLU;

	t66 = ((x269+(x270&x271))<=x272);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x273 = INT8_MAX;
	uint8_t x275 = 7U;
	static int32_t t67 = -12490;

	t67 = ((x273+(x274&x275))<=x276);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x278 = UINT16_MAX;

	t68 = ((x277+(x278&x279))<=x280);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x281 = 10U;
	int16_t x283 = INT16_MIN;
	int64_t x284 = -1LL;
	volatile int32_t t69 = -20387017;

	t69 = ((x281+(x282&x283))<=x284);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x285 = 2024712LLU;
	uint16_t x287 = 3602U;
	int8_t x288 = 0;
	volatile int32_t t70 = -2734;

	t70 = ((x285+(x286&x287))<=x288);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x289 = 11678440855963156LLU;
	int64_t x290 = INT64_MIN;
	static uint64_t x291 = 28907317740305008LLU;
	int32_t x292 = -2519;
	volatile int32_t t71 = -12;

	t71 = ((x289+(x290&x291))<=x292);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x294 = -1;
	int16_t x295 = -1;
	volatile uint64_t x296 = UINT64_MAX;
	volatile int32_t t72 = 356202921;

	t72 = ((x293+(x294&x295))<=x296);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x297 = INT64_MIN;
	uint32_t x298 = 3076U;
	static int16_t x299 = -39;
	static int16_t x300 = INT16_MIN;
	int32_t t73 = -1;

	t73 = ((x297+(x298&x299))<=x300);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x301 = 74U;
	volatile int32_t x302 = -5;
	static uint8_t x303 = 104U;
	static volatile int64_t x304 = INT64_MIN;
	volatile int32_t t74 = -20806762;

	t74 = ((x301+(x302&x303))<=x304);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x305 = 7;
	uint16_t x306 = UINT16_MAX;
	uint64_t x307 = UINT64_MAX;
	static int32_t t75 = 0;

	t75 = ((x305+(x306&x307))<=x308);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x309 = -21158LL;
	volatile int64_t x310 = INT64_MAX;
	static int32_t x311 = 26155;
	volatile int32_t t76 = -59421057;

	t76 = ((x309+(x310&x311))<=x312);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x313 = 2640844437595LLU;
	volatile uint32_t x314 = UINT32_MAX;

	t77 = ((x313+(x314&x315))<=x316);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x317 = -503352;
	int16_t x318 = 10417;
	int64_t x319 = 12639LL;
	int8_t x320 = INT8_MAX;
	static int32_t t78 = 2;

	t78 = ((x317+(x318&x319))<=x320);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x321 = -1;
	volatile uint16_t x322 = 2550U;
	volatile int32_t x323 = -1;
	int32_t x324 = INT32_MIN;
	int32_t t79 = 26683421;

	t79 = ((x321+(x322&x323))<=x324);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x325 = INT64_MIN;
	int32_t x326 = 854;
	int64_t x327 = 31172LL;
	volatile uint64_t x328 = 111570932549157LLU;
	volatile int32_t t80 = 143702542;

	t80 = ((x325+(x326&x327))<=x328);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x329 = 112LLU;
	volatile int32_t x330 = INT32_MIN;
	uint32_t x331 = 728885U;
	int32_t x332 = INT32_MAX;

	t81 = ((x329+(x330&x331))<=x332);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x333 = -1LL;
	static volatile int64_t x335 = -1LL;
	volatile int32_t x336 = INT32_MIN;
	static volatile int32_t t82 = 6;

	t82 = ((x333+(x334&x335))<=x336);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x337 = -1;
	static int8_t x338 = INT8_MIN;
	uint8_t x339 = 20U;
	uint32_t x340 = UINT32_MAX;

	t83 = ((x337+(x338&x339))<=x340);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x341 = -1305;
	static int32_t x342 = -1;
	volatile uint8_t x344 = 0U;
	int32_t t84 = -317;

	t84 = ((x341+(x342&x343))<=x344);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x346 = -1;
	int8_t x347 = INT8_MAX;
	int8_t x348 = INT8_MAX;
	int32_t t85 = 2364347;

	t85 = ((x345+(x346&x347))<=x348);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x349 = INT8_MIN;
	static int8_t x350 = INT8_MAX;
	uint16_t x352 = UINT16_MAX;
	int32_t t86 = -317;

	t86 = ((x349+(x350&x351))<=x352);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x353 = -10;
	int32_t x354 = INT32_MIN;
	uint8_t x355 = 2U;
	int8_t x356 = -3;
	volatile int32_t t87 = -3;

	t87 = ((x353+(x354&x355))<=x356);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x357 = INT8_MIN;
	static int8_t x358 = INT8_MIN;
	int8_t x359 = 24;
	uint32_t x360 = 92U;
	static int32_t t88 = 21;

	t88 = ((x357+(x358&x359))<=x360);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x361 = 54001U;
	int8_t x362 = INT8_MAX;
	static int16_t x363 = INT16_MAX;
	int32_t x364 = INT32_MIN;
	int32_t t89 = -475941;

	t89 = ((x361+(x362&x363))<=x364);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x365 = INT8_MIN;
	int8_t x366 = INT8_MIN;
	int8_t x367 = -1;
	int16_t x368 = -1;
	int32_t t90 = 881121347;

	t90 = ((x365+(x366&x367))<=x368);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x370 = -1;
	volatile int8_t x371 = INT8_MIN;
	int32_t x372 = -8;
	volatile int32_t t91 = -21034672;

	t91 = ((x369+(x370&x371))<=x372);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x373 = 2;
	int16_t x374 = INT16_MAX;
	static int32_t x375 = -2995;
	int32_t t92 = -76084051;

	t92 = ((x373+(x374&x375))<=x376);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x378 = UINT32_MAX;
	volatile int16_t x379 = 0;
	int8_t x380 = -1;
	static volatile int32_t t93 = -6742;

	t93 = ((x377+(x378&x379))<=x380);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x381 = UINT64_MAX;
	int32_t x382 = -1;
	volatile uint16_t x383 = 0U;
	int16_t x384 = -6;
	int32_t t94 = -166268;

	t94 = ((x381+(x382&x383))<=x384);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x385 = 2U;
	int32_t x387 = INT32_MIN;
	volatile int32_t t95 = -2;

	t95 = ((x385+(x386&x387))<=x388);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x389 = INT64_MIN;
	uint16_t x390 = 30767U;
	uint16_t x391 = 11U;
	int32_t t96 = 2044;

	t96 = ((x389+(x390&x391))<=x392);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x398 = UINT16_MAX;
	int32_t x399 = INT32_MAX;
	int8_t x400 = INT8_MIN;
	int32_t t97 = 9322;

	t97 = ((x397+(x398&x399))<=x400);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x401 = 39990007365570LLU;
	static int64_t x403 = 0LL;
	static int32_t x404 = -58;

	t98 = ((x401+(x402&x403))<=x404);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x405 = 1U;
	uint8_t x406 = 29U;
	int32_t t99 = 13;

	t99 = ((x405+(x406&x407))<=x408);

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

