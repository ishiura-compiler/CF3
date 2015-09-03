#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x7 = INT16_MIN;
static int32_t t1 = 38063;
int16_t x10 = INT16_MAX;
volatile uint64_t t2 = 57131587LLU;
int32_t x16 = INT32_MIN;
static uint32_t x17 = UINT32_MAX;
volatile int32_t t4 = 4;
int32_t x29 = INT32_MIN;
int32_t x35 = 2465447;
volatile int64_t t8 = 288023890LL;
int8_t x37 = 38;
volatile int64_t x45 = -10195237921806LL;
int32_t x46 = INT32_MIN;
uint8_t x52 = 0U;
int32_t x55 = -7923;
int16_t x61 = INT16_MIN;
uint16_t x63 = 51U;
volatile uint64_t t16 = 64008888424LLU;
uint16_t x70 = 0U;
volatile uint64_t t17 = 176276LLU;
int32_t x73 = INT32_MAX;
static volatile uint64_t x78 = 4LLU;
int16_t x87 = INT16_MAX;
int8_t x92 = INT8_MAX;
volatile int16_t x97 = -1;
static int32_t t24 = 1;
volatile uint16_t x101 = 3458U;
int64_t x102 = -1LL;
static int8_t x109 = 6;
int8_t x111 = INT8_MIN;
int8_t x116 = -1;
static volatile int32_t t29 = -54;
volatile uint32_t x121 = 399719407U;
uint16_t x123 = UINT16_MAX;
uint32_t t30 = 199965966U;
uint16_t x125 = 19954U;
int64_t x130 = INT64_MIN;
uint8_t x134 = UINT8_MAX;
volatile uint64_t x145 = 1563720022216904LLU;
int32_t x146 = -1;
int32_t x150 = -15745198;
static volatile int8_t x158 = INT8_MIN;
volatile int16_t x161 = INT16_MIN;
int8_t x162 = INT8_MIN;
static volatile int64_t x166 = -3LL;
static int16_t x171 = INT16_MAX;
static uint64_t x172 = UINT64_MAX;
volatile uint64_t t42 = 77328667045423LLU;
uint64_t x174 = 6253146LLU;
static int32_t x175 = -1;
static uint32_t x180 = UINT32_MAX;
uint8_t x191 = 102U;
int16_t x194 = -57;
uint64_t x202 = UINT64_MAX;
volatile int32_t t50 = 1;
uint16_t x206 = 6475U;
volatile int32_t x207 = INT32_MIN;
static int64_t x212 = INT64_MIN;
static int64_t t52 = -465847956711LL;
static int32_t x218 = INT32_MIN;
volatile uint32_t t54 = 14379U;
volatile uint16_t x224 = 7597U;
volatile uint16_t x227 = 7U;
int32_t x231 = 1040364790;
int32_t t57 = 427;
volatile int64_t x234 = 1263240754119952440LL;
int32_t x237 = INT32_MAX;
int32_t x239 = -1317771;
volatile int64_t x246 = 1027982944461LL;
int64_t x248 = INT64_MAX;
volatile int64_t t61 = 47413LL;
int8_t x252 = INT8_MIN;
static volatile int64_t t62 = -742591LL;
int32_t t64 = 2955238;
uint32_t x264 = 13800U;
volatile int8_t x265 = -1;
int8_t x267 = INT8_MAX;
int8_t x276 = INT8_MIN;
int8_t x279 = -1;
volatile uint64_t t69 = 3972811LLU;
volatile int32_t x284 = INT32_MIN;
static volatile int64_t t70 = -4035LL;
static volatile int32_t x287 = INT32_MIN;
int32_t x288 = INT32_MIN;
int32_t t71 = 15;
static int64_t x296 = INT64_MIN;
int8_t x298 = INT8_MAX;
int16_t x300 = INT16_MAX;
int8_t x303 = INT8_MAX;
static uint32_t t76 = 484257333U;
volatile int32_t x312 = 1;
uint64_t x315 = UINT64_MAX;
int8_t x317 = INT8_MAX;
int64_t x319 = -4306476276667953LL;
int64_t x320 = INT64_MIN;
int8_t x322 = INT8_MIN;
int8_t x324 = -1;
volatile int64_t t85 = 107539771LL;
uint8_t x347 = 4U;
volatile int64_t x348 = INT64_MIN;
volatile int64_t t86 = -61LL;
volatile int64_t x352 = INT64_MIN;
int16_t x353 = -2;
int16_t x357 = 1;
uint8_t x358 = 7U;
uint8_t x363 = UINT8_MAX;
static int32_t x368 = INT32_MAX;
int64_t x369 = 505232671082739956LL;
static int8_t x371 = -1;
volatile int32_t x372 = -1;
uint8_t x376 = 2U;
static volatile int64_t x381 = INT64_MAX;
int64_t x383 = INT64_MAX;
uint64_t x384 = UINT64_MAX;
static int64_t x387 = INT64_MAX;
volatile int64_t t96 = 6LL;
volatile int16_t x393 = INT16_MAX;
static int8_t x394 = INT8_MAX;
uint16_t x399 = 1U;


void f0(void) {
	static int8_t x1 = INT8_MIN;
	int32_t x2 = -1;
	uint16_t x3 = UINT16_MAX;
	int8_t x4 = INT8_MAX;
	int32_t t0 = 585;

	t0 = (((x1<x2)*x3)&x4);

	if (t0 != 127) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	int8_t x6 = INT8_MAX;
	int16_t x8 = -13;

	t1 = (((x5<x6)*x7)&x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 0;
	int16_t x11 = 99;
	uint64_t x12 = UINT64_MAX;

	t2 = (((x9<x10)*x11)&x12);

	if (t2 != 99LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = -1;
	int16_t x14 = 1104;
	volatile uint8_t x15 = UINT8_MAX;
	volatile int32_t t3 = -2396647;

	t3 = (((x13<x14)*x15)&x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x18 = 885304LLU;
	static int8_t x19 = -1;
	int8_t x20 = -1;

	t4 = (((x17<x18)*x19)&x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MAX;
	int8_t x22 = INT8_MAX;
	static int16_t x23 = INT16_MAX;
	uint16_t x24 = 30U;
	volatile int32_t t5 = -12492416;

	t5 = (((x21<x22)*x23)&x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 39U;
	uint16_t x26 = 4U;
	static uint32_t x27 = 229022U;
	int64_t x28 = -1LL;
	int64_t t6 = -264152364625301018LL;

	t6 = (((x25<x26)*x27)&x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x30 = INT8_MIN;
	int16_t x31 = -1;
	volatile int16_t x32 = INT16_MAX;
	volatile int32_t t7 = 450990;

	t7 = (((x29<x30)*x31)&x32);

	if (t7 != 32767) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	uint16_t x34 = 1U;
	int64_t x36 = INT64_MIN;

	t8 = (((x33<x34)*x35)&x36);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x38 = -1;
	int64_t x39 = INT64_MAX;
	uint16_t x40 = 30026U;
	int64_t t9 = 17395998236099LL;

	t9 = (((x37<x38)*x39)&x40);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x41 = 1637060978456053867LLU;
	int32_t x42 = -2;
	int64_t x43 = -1LL;
	volatile uint8_t x44 = 53U;
	volatile int64_t t10 = 3449375LL;

	t10 = (((x41<x42)*x43)&x44);

	if (t10 != 53LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x47 = INT32_MIN;
	int32_t x48 = INT32_MIN;
	volatile int32_t t11 = INT32_MIN;

	t11 = (((x45<x46)*x47)&x48);

	if (t11 != INT32_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = 2;
	uint64_t x50 = UINT64_MAX;
	static int64_t x51 = -1LL;
	static int64_t t12 = -184869LL;

	t12 = (((x49<x50)*x51)&x52);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MAX;
	int8_t x54 = INT8_MAX;
	uint32_t x56 = 52410U;
	uint32_t t13 = 449131271U;

	t13 = (((x53<x54)*x55)&x56);

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = 126U;
	int16_t x58 = INT16_MIN;
	volatile uint32_t x59 = 201U;
	uint16_t x60 = 279U;
	volatile uint32_t t14 = 449U;

	t14 = (((x57<x58)*x59)&x60);

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x62 = -1;
	int16_t x64 = INT16_MAX;
	static volatile int32_t t15 = -2;

	t15 = (((x61<x62)*x63)&x64);

	if (t15 != 51) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 23055U;
	int32_t x66 = 5;
	uint8_t x67 = 121U;
	uint64_t x68 = 12538525958777342LLU;

	t16 = (((x65<x66)*x67)&x68);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x69 = INT32_MIN;
	int16_t x71 = INT16_MIN;
	uint64_t x72 = UINT64_MAX;

	t17 = (((x69<x70)*x71)&x72);

	if (t17 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x74 = INT16_MAX;
	uint32_t x75 = 223348197U;
	static int64_t x76 = -1LL;
	volatile int64_t t18 = -93290240702086071LL;

	t18 = (((x73<x74)*x75)&x76);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = UINT64_MAX;
	uint16_t x79 = 12966U;
	int16_t x80 = INT16_MAX;
	volatile int32_t t19 = -1690;

	t19 = (((x77<x78)*x79)&x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MAX;
	int8_t x82 = -1;
	uint8_t x83 = 2U;
	static int64_t x84 = INT64_MAX;
	int64_t t20 = -849189808375138LL;

	t20 = (((x81<x82)*x83)&x84);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x85 = 7523U;
	uint16_t x86 = 31797U;
	int32_t x88 = -1;
	volatile int32_t t21 = 16503632;

	t21 = (((x85<x86)*x87)&x88);

	if (t21 != 32767) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x89 = UINT64_MAX;
	int8_t x90 = INT8_MIN;
	int64_t x91 = 133539847861746LL;
	volatile int64_t t22 = -106805544579195LL;

	t22 = (((x89<x90)*x91)&x92);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x93 = 196781U;
	static uint8_t x94 = UINT8_MAX;
	uint8_t x95 = 112U;
	int32_t x96 = -1;
	static volatile int32_t t23 = 1;

	t23 = (((x93<x94)*x95)&x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x98 = INT8_MIN;
	int8_t x99 = 1;
	static int16_t x100 = -12;

	t24 = (((x97<x98)*x99)&x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x103 = 55;
	static int8_t x104 = INT8_MIN;
	int32_t t25 = 4102232;

	t25 = (((x101<x102)*x103)&x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x105 = INT8_MIN;
	int8_t x106 = INT8_MAX;
	static int64_t x107 = -1LL;
	uint16_t x108 = UINT16_MAX;
	volatile int64_t t26 = 2376420717LL;

	t26 = (((x105<x106)*x107)&x108);

	if (t26 != 65535LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x110 = 12U;
	uint8_t x112 = UINT8_MAX;
	volatile int32_t t27 = -98;

	t27 = (((x109<x110)*x111)&x112);

	if (t27 != 128) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x113 = -243833;
	uint16_t x114 = UINT16_MAX;
	uint8_t x115 = 69U;
	volatile int32_t t28 = 16258749;

	t28 = (((x113<x114)*x115)&x116);

	if (t28 != 69) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MIN;
	uint64_t x118 = 129853716852LLU;
	int32_t x119 = -1;
	int16_t x120 = INT16_MIN;

	t29 = (((x117<x118)*x119)&x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x122 = 437196U;
	static uint32_t x124 = 830307155U;

	t30 = (((x121<x122)*x123)&x124);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x126 = INT64_MIN;
	int32_t x127 = INT32_MIN;
	volatile uint16_t x128 = 1U;
	static volatile int32_t t31 = 63353269;

	t31 = (((x125<x126)*x127)&x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = 333LLU;
	int32_t x131 = -1;
	volatile int32_t x132 = INT32_MIN;
	static volatile int32_t t32 = INT32_MIN;

	t32 = (((x129<x130)*x131)&x132);

	if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = 105184594893473161LLU;
	int8_t x135 = INT8_MIN;
	uint8_t x136 = 1U;
	static int32_t t33 = -169969830;

	t33 = (((x133<x134)*x135)&x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MIN;
	int64_t x138 = INT64_MIN;
	uint16_t x139 = 29156U;
	int16_t x140 = -1;
	volatile int32_t t34 = 58;

	t34 = (((x137<x138)*x139)&x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x141 = UINT32_MAX;
	int16_t x142 = INT16_MAX;
	int8_t x143 = -1;
	int8_t x144 = -1;
	int32_t t35 = 165839358;

	t35 = (((x141<x142)*x143)&x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x147 = 3555449845383368130LLU;
	int32_t x148 = 4;
	volatile uint64_t t36 = 273698LLU;

	t36 = (((x145<x146)*x147)&x148);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = -100665144050798LL;
	uint16_t x151 = 7215U;
	uint8_t x152 = UINT8_MAX;
	int32_t t37 = -1923374;

	t37 = (((x149<x150)*x151)&x152);

	if (t37 != 47) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x153 = 0;
	volatile uint64_t x154 = UINT64_MAX;
	int8_t x155 = INT8_MIN;
	static int16_t x156 = INT16_MIN;
	int32_t t38 = 62509215;

	t38 = (((x153<x154)*x155)&x156);

	if (t38 != -32768) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = 17U;
	static int16_t x159 = INT16_MAX;
	int16_t x160 = INT16_MIN;
	static volatile int32_t t39 = 16;

	t39 = (((x157<x158)*x159)&x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x163 = 126928452;
	volatile int64_t x164 = -10822272408LL;
	int64_t t40 = 4007559LL;

	t40 = (((x161<x162)*x163)&x164);

	if (t40 != 42992192LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = INT64_MIN;
	int8_t x167 = INT8_MAX;
	static uint8_t x168 = 20U;
	int32_t t41 = 389610439;

	t41 = (((x165<x166)*x167)&x168);

	if (t41 != 20) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = INT16_MIN;
	static volatile int8_t x170 = INT8_MIN;

	t42 = (((x169<x170)*x171)&x172);

	if (t42 != 32767LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x173 = INT8_MIN;
	volatile uint16_t x176 = 2U;
	volatile int32_t t43 = 2115311;

	t43 = (((x173<x174)*x175)&x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x177 = UINT32_MAX;
	int32_t x178 = INT32_MAX;
	volatile int64_t x179 = INT64_MIN;
	static int64_t t44 = -276LL;

	t44 = (((x177<x178)*x179)&x180);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x181 = INT32_MIN;
	int16_t x182 = -1;
	uint16_t x183 = 25460U;
	uint64_t x184 = 338852936091008222LLU;
	uint64_t t45 = 4956768156510918335LLU;

	t45 = (((x181<x182)*x183)&x184);

	if (t45 != 24660LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = UINT32_MAX;
	int8_t x186 = -1;
	int64_t x187 = -1LL;
	int16_t x188 = INT16_MIN;
	int64_t t46 = 655585451LL;

	t46 = (((x185<x186)*x187)&x188);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = UINT64_MAX;
	uint32_t x190 = 6766980U;
	volatile int64_t x192 = -111232631934301393LL;
	volatile int64_t t47 = -2792892073856317LL;

	t47 = (((x189<x190)*x191)&x192);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = -1;
	volatile int16_t x195 = -1;
	volatile int32_t x196 = INT32_MIN;
	volatile int32_t t48 = 1903;

	t48 = (((x193<x194)*x195)&x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x197 = INT64_MIN;
	static uint8_t x198 = UINT8_MAX;
	int64_t x199 = 12048633666095LL;
	int16_t x200 = INT16_MIN;
	int64_t t49 = -537131705778898442LL;

	t49 = (((x197<x198)*x199)&x200);

	if (t49 != 12048633659392LL) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint32_t x201 = 678U;
	int32_t x203 = INT32_MIN;
	volatile uint16_t x204 = 1618U;

	t50 = (((x201<x202)*x203)&x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = 940268892U;
	uint64_t x208 = 17066209LLU;
	volatile uint64_t t51 = 524LLU;

	t51 = (((x205<x206)*x207)&x208);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = 1LLU;
	static int16_t x210 = -27;
	uint8_t x211 = 94U;

	t52 = (((x209<x210)*x211)&x212);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = INT64_MIN;
	uint64_t x214 = 11LLU;
	uint32_t x215 = UINT32_MAX;
	uint8_t x216 = 1U;
	uint32_t t53 = 4U;

	t53 = (((x213<x214)*x215)&x216);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MIN;
	int32_t x219 = INT32_MIN;
	volatile uint32_t x220 = UINT32_MAX;

	t54 = (((x217<x218)*x219)&x220);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x221 = 491807LLU;
	int32_t x222 = -1;
	uint16_t x223 = UINT16_MAX;
	int32_t t55 = 16598558;

	t55 = (((x221<x222)*x223)&x224);

	if (t55 != 7597) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x225 = UINT16_MAX;
	static int32_t x226 = INT32_MIN;
	int16_t x228 = INT16_MIN;
	int32_t t56 = 74240713;

	t56 = (((x225<x226)*x227)&x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x229 = -1;
	int32_t x230 = -1065;
	static int8_t x232 = INT8_MIN;

	t57 = (((x229<x230)*x231)&x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x233 = 2127U;
	int64_t x235 = INT64_MIN;
	volatile uint64_t x236 = UINT64_MAX;
	static uint64_t t58 = 780004490442LLU;

	t58 = (((x233<x234)*x235)&x236);

	if (t58 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x238 = INT8_MAX;
	static uint32_t x240 = UINT32_MAX;
	uint32_t t59 = 1U;

	t59 = (((x237<x238)*x239)&x240);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x241 = 0U;
	int32_t x242 = 29;
	int16_t x243 = -1;
	static uint8_t x244 = 1U;
	int32_t t60 = 3;

	t60 = (((x241<x242)*x243)&x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = -1;
	static int32_t x247 = 6;

	t61 = (((x245<x246)*x247)&x248);

	if (t61 != 6LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x249 = UINT64_MAX;
	uint16_t x250 = 0U;
	int64_t x251 = 9993885975933225LL;

	t62 = (((x249<x250)*x251)&x252);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x253 = -1;
	int8_t x254 = 12;
	int32_t x255 = 453869947;
	static int16_t x256 = INT16_MAX;
	volatile int32_t t63 = 2067981;

	t63 = (((x253<x254)*x255)&x256);

	if (t63 != 379) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = INT64_MIN;
	static uint32_t x258 = UINT32_MAX;
	uint8_t x259 = 0U;
	int32_t x260 = INT32_MAX;

	t64 = (((x257<x258)*x259)&x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = -1LL;
	uint16_t x262 = UINT16_MAX;
	int64_t x263 = INT64_MIN;
	int64_t t65 = 35389346555848800LL;

	t65 = (((x261<x262)*x263)&x264);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x266 = 18161090978612LLU;
	static int32_t x268 = 48271;
	int32_t t66 = -8171344;

	t66 = (((x265<x266)*x267)&x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x269 = 2790LLU;
	int8_t x270 = INT8_MAX;
	int16_t x271 = 1523;
	uint8_t x272 = UINT8_MAX;
	static int32_t t67 = 2;

	t67 = (((x269<x270)*x271)&x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MIN;
	static int64_t x274 = INT64_MIN;
	int16_t x275 = INT16_MAX;
	int32_t t68 = 781724540;

	t68 = (((x273<x274)*x275)&x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = INT64_MAX;
	volatile int8_t x278 = -1;
	uint64_t x280 = 107724503199LLU;

	t69 = (((x277<x278)*x279)&x280);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MIN;
	volatile int16_t x282 = INT16_MIN;
	int64_t x283 = 569881538057094094LL;

	t70 = (((x281<x282)*x283)&x284);

	if (t70 != 569881536715816960LL) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int32_t x285 = INT32_MAX;
	volatile int16_t x286 = INT16_MAX;

	t71 = (((x285<x286)*x287)&x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = INT64_MIN;
	static int64_t x290 = INT64_MAX;
	int64_t x291 = INT64_MIN;
	uint64_t x292 = 2086065067630313LLU;
	uint64_t t72 = 400393573LLU;

	t72 = (((x289<x290)*x291)&x292);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x293 = 99U;
	uint16_t x294 = 296U;
	int64_t x295 = INT64_MAX;
	volatile int64_t t73 = 106632761504290LL;

	t73 = (((x293<x294)*x295)&x296);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = INT64_MIN;
	static int32_t x299 = INT32_MIN;
	static volatile int32_t t74 = -307604915;

	t74 = (((x297<x298)*x299)&x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = INT64_MAX;
	volatile int32_t x302 = INT32_MIN;
	int64_t x304 = INT64_MIN;
	volatile int64_t t75 = -125871LL;

	t75 = (((x301<x302)*x303)&x304);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = 0;
	static int64_t x306 = 2861814587LL;
	uint32_t x307 = 336266007U;
	static volatile int16_t x308 = INT16_MIN;

	t76 = (((x305<x306)*x307)&x308);

	if (t76 != 336265216U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MIN;
	uint8_t x310 = UINT8_MAX;
	int32_t x311 = INT32_MIN;
	int32_t t77 = 36862;

	t77 = (((x309<x310)*x311)&x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = -15;
	int16_t x314 = 27;
	uint32_t x316 = 146018U;
	static volatile uint64_t t78 = 24055363236418LLU;

	t78 = (((x313<x314)*x315)&x316);

	if (t78 != 146018LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x318 = INT8_MIN;
	volatile int64_t t79 = -49581878916LL;

	t79 = (((x317<x318)*x319)&x320);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MAX;
	static int32_t x323 = INT32_MIN;
	static volatile int32_t t80 = -112;

	t80 = (((x321<x322)*x323)&x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x325 = UINT8_MAX;
	int16_t x326 = 301;
	int8_t x327 = INT8_MAX;
	int32_t x328 = -38566295;
	volatile int32_t t81 = 383178094;

	t81 = (((x325<x326)*x327)&x328);

	if (t81 != 105) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = 141715;
	static int16_t x330 = 278;
	uint64_t x331 = 131195627562701456LLU;
	uint64_t x332 = 258411785119LLU;
	uint64_t t82 = 1083381535877322LLU;

	t82 = (((x329<x330)*x331)&x332);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = INT32_MAX;
	static int8_t x334 = 60;
	uint16_t x335 = 151U;
	int32_t x336 = -1;
	int32_t t83 = 420921031;

	t83 = (((x333<x334)*x335)&x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = INT8_MIN;
	volatile int16_t x338 = INT16_MAX;
	uint8_t x339 = UINT8_MAX;
	int8_t x340 = 0;
	int32_t t84 = -194570;

	t84 = (((x337<x338)*x339)&x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = 23;
	int16_t x342 = 5847;
	int64_t x343 = -55249475093LL;
	int32_t x344 = INT32_MAX;

	t85 = (((x341<x342)*x343)&x344);

	if (t85 != 585099755LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x345 = -1LL;
	static int32_t x346 = 102443;

	t86 = (((x345<x346)*x347)&x348);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x349 = 1;
	volatile int8_t x350 = 12;
	int64_t x351 = -28610355226431362LL;
	volatile int64_t t87 = INT64_MIN;

	t87 = (((x349<x350)*x351)&x352);

	if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x354 = INT64_MIN;
	uint64_t x355 = UINT64_MAX;
	static uint32_t x356 = 138568U;
	static volatile uint64_t t88 = 181LLU;

	t88 = (((x353<x354)*x355)&x356);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x359 = INT16_MIN;
	volatile int64_t x360 = INT64_MIN;
	volatile int64_t t89 = INT64_MIN;

	t89 = (((x357<x358)*x359)&x360);

	if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = 258;
	int64_t x362 = INT64_MIN;
	volatile uint16_t x364 = 28U;
	static volatile int32_t t90 = 415825;

	t90 = (((x361<x362)*x363)&x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x365 = -51;
	uint32_t x366 = 7428U;
	volatile uint16_t x367 = 0U;
	int32_t t91 = -26759;

	t91 = (((x365<x366)*x367)&x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x370 = INT8_MAX;
	volatile int32_t t92 = 230406613;

	t92 = (((x369<x370)*x371)&x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = INT16_MIN;
	volatile uint8_t x374 = UINT8_MAX;
	int32_t x375 = -7078568;
	static volatile int32_t t93 = -49140872;

	t93 = (((x373<x374)*x375)&x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x377 = UINT8_MAX;
	static int64_t x378 = INT64_MIN;
	static uint8_t x379 = UINT8_MAX;
	int32_t x380 = INT32_MIN;
	int32_t t94 = 116929497;

	t94 = (((x377<x378)*x379)&x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x382 = -15851;
	volatile uint64_t t95 = 249111929LLU;

	t95 = (((x381<x382)*x383)&x384);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = -6664079721664LL;
	static int32_t x386 = -839;
	volatile int32_t x388 = -13499;

	t96 = (((x385<x386)*x387)&x388);

	if (t96 != 9223372036854762309LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x389 = UINT8_MAX;
	static int64_t x390 = -1115504423927276040LL;
	int32_t x391 = -269204;
	int64_t x392 = INT64_MIN;
	volatile int64_t t97 = -11476LL;

	t97 = (((x389<x390)*x391)&x392);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x395 = 0LLU;
	volatile int8_t x396 = INT8_MIN;
	uint64_t t98 = 2151359014190839LLU;

	t98 = (((x393<x394)*x395)&x396);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x397 = 25702987U;
	static int32_t x398 = -7;
	uint64_t x400 = UINT64_MAX;
	uint64_t t99 = 1030745279096LLU;

	t99 = (((x397<x398)*x399)&x400);

	if (t99 != 1LLU) { NG(); } else { ; }
	
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

