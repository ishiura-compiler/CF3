#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x5 = UINT32_MAX;
int16_t x10 = -7;
uint32_t x11 = 22411U;
int8_t x14 = INT8_MIN;
int32_t t3 = 55263;
int8_t x17 = INT8_MIN;
int8_t x21 = 58;
volatile uint64_t x23 = UINT64_MAX;
volatile uint32_t x27 = 228U;
int8_t x29 = -37;
volatile int16_t x33 = -410;
volatile int64_t t9 = 1548138696LL;
int8_t x46 = INT8_MAX;
uint32_t x53 = 1U;
int8_t x54 = INT8_MIN;
int8_t x55 = 49;
int8_t x59 = -1;
uint32_t t14 = 86U;
volatile int8_t x72 = INT8_MAX;
int32_t t18 = -560081448;
int64_t x89 = -1LL;
int32_t t20 = 4094625;
uint32_t x100 = 251327444U;
uint16_t x103 = UINT16_MAX;
volatile int32_t t24 = -413633;
uint8_t x119 = 7U;
uint8_t x125 = 4U;
static uint32_t x127 = 11202645U;
volatile uint64_t t29 = 8809831440744LLU;
volatile uint16_t x138 = 279U;
volatile uint64_t x141 = 466477502681343LLU;
volatile int32_t x143 = INT32_MAX;
int16_t x151 = INT16_MAX;
int64_t x152 = -1LL;
int8_t x154 = INT8_MAX;
static int64_t x160 = -1LL;
static int16_t x169 = INT16_MIN;
uint64_t x173 = 13381756746LLU;
int32_t x191 = -1636;
uint16_t x192 = UINT16_MAX;
int32_t x200 = INT32_MAX;
int64_t x201 = INT64_MIN;
uint64_t x204 = UINT64_MAX;
static int32_t t44 = 29443224;
uint64_t x216 = 2026LLU;
uint64_t x221 = 12764802048172893LLU;
int16_t x222 = INT16_MIN;
uint32_t x226 = UINT32_MAX;
uint32_t x229 = 0U;
volatile int64_t t49 = 200605516237LL;
uint16_t x233 = 14452U;
uint32_t x234 = 5U;
int8_t x235 = INT8_MIN;
int8_t x236 = -1;
static volatile uint8_t x239 = 76U;
static volatile int16_t x241 = INT16_MAX;
volatile int64_t x243 = -1LL;
int64_t x247 = INT64_MIN;
int8_t x249 = -5;
static int64_t x251 = INT64_MIN;
int16_t x256 = INT16_MIN;
volatile int32_t t57 = 1005;
static int32_t t59 = -3057155;
uint32_t x284 = UINT32_MAX;
int32_t x287 = -6711055;
volatile uint8_t x290 = UINT8_MAX;
int64_t x296 = 164LL;
volatile int8_t x297 = INT8_MIN;
uint64_t x300 = 530091245LLU;
uint64_t t65 = 334409857LLU;
int64_t x314 = INT64_MIN;
static uint64_t x315 = UINT64_MAX;
uint8_t x319 = UINT8_MAX;
int16_t x325 = INT16_MIN;
uint16_t x328 = 25U;
static volatile int16_t x338 = 12786;
int64_t x339 = INT64_MIN;
volatile int64_t t76 = 1LL;
static int16_t x355 = -4836;
volatile int16_t x357 = -1;
volatile int8_t x359 = -11;
volatile int64_t t78 = -110156396337160LL;
int8_t x362 = -1;
int64_t x365 = INT64_MIN;
int64_t x366 = INT64_MIN;
uint32_t t81 = 261037U;
int16_t x374 = INT16_MIN;
int64_t x391 = 26985LL;
int16_t x394 = -1;
uint64_t x397 = UINT64_MAX;
uint32_t x404 = 1786U;
uint64_t x407 = 2021979397917949LLU;
int32_t x410 = 506888455;
volatile uint8_t x412 = 11U;
uint8_t x424 = 19U;
uint32_t x428 = 488181977U;
static volatile int32_t x430 = 681;
int32_t x431 = INT32_MAX;
volatile int32_t t95 = 26889;
uint64_t x433 = 133161LLU;
static int16_t x436 = -877;
int16_t x439 = INT16_MAX;
uint32_t x446 = UINT32_MAX;


void f0(void) {
	int8_t x1 = -1;
	int16_t x2 = INT16_MAX;
	uint32_t x3 = 6862U;
	int32_t x4 = INT32_MIN;
	volatile uint32_t t0 = 1665U;

	t0 = (((x1<x2)^x3)-x4);

	if (t0 != 2147490511U) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int8_t x6 = INT8_MAX;
	volatile int32_t x7 = INT32_MAX;
	uint64_t x8 = 1930637081736LLU;
	volatile uint64_t t1 = 0LLU;

	t1 = (((x5<x6)^x7)-x8);

	if (t1 != 18446742145219953527LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 150U;
	static int8_t x12 = -1;
	static volatile uint32_t t2 = 679319U;

	t2 = (((x9<x10)^x11)-x12);

	if (t2 != 22411U) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint32_t x13 = 81U;
	static int16_t x15 = INT16_MAX;
	static uint16_t x16 = UINT16_MAX;

	t3 = (((x13<x14)^x15)-x16);

	if (t3 != -32769) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x18 = -2841;
	int8_t x19 = -1;
	int32_t x20 = INT32_MAX;
	int32_t t4 = INT32_MIN;

	t4 = (((x17<x18)^x19)-x20);

	if (t4 != INT32_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x22 = UINT64_MAX;
	int8_t x24 = INT8_MIN;
	volatile uint64_t t5 = 2250606691174LLU;

	t5 = (((x21<x22)^x23)-x24);

	if (t5 != 126LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = 13;
	int32_t x26 = INT32_MIN;
	volatile int16_t x28 = INT16_MIN;
	volatile uint32_t t6 = 9641U;

	t6 = (((x25<x26)^x27)-x28);

	if (t6 != 32996U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x30 = INT64_MAX;
	int64_t x31 = -1LL;
	int8_t x32 = -3;
	volatile int64_t t7 = -337704532208335LL;

	t7 = (((x29<x30)^x31)-x32);

	if (t7 != 1LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x34 = INT32_MIN;
	uint32_t x35 = 45U;
	int8_t x36 = INT8_MAX;
	uint32_t t8 = 3U;

	t8 = (((x33<x34)^x35)-x36);

	if (t8 != 4294967214U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = 15808;
	static int16_t x38 = -1;
	volatile int8_t x39 = INT8_MAX;
	volatile int64_t x40 = -1LL;

	t9 = (((x37<x38)^x39)-x40);

	if (t9 != 128LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = -42120217;
	uint64_t x47 = 7723440LLU;
	int64_t x48 = -1LL;
	uint64_t t10 = 770180318651LLU;

	t10 = (((x45<x46)^x47)-x48);

	if (t10 != 7723442LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x49 = 9;
	volatile uint64_t x50 = 2343336467LLU;
	static int32_t x51 = 1;
	volatile int8_t x52 = INT8_MIN;
	volatile int32_t t11 = -5;

	t11 = (((x49<x50)^x51)-x52);

	if (t11 != 128) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x56 = UINT64_MAX;
	uint64_t t12 = 4240917508LLU;

	t12 = (((x53<x54)^x55)-x56);

	if (t12 != 49LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x57 = UINT32_MAX;
	int16_t x58 = 2865;
	static int8_t x60 = 1;
	int32_t t13 = 1346;

	t13 = (((x57<x58)^x59)-x60);

	if (t13 != -2) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = 0;
	int16_t x62 = INT16_MIN;
	uint32_t x63 = 326U;
	volatile uint32_t x64 = 1U;

	t14 = (((x61<x62)^x63)-x64);

	if (t14 != 325U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = INT16_MIN;
	int64_t x66 = INT64_MAX;
	int32_t x67 = 443967;
	static volatile uint32_t x68 = UINT32_MAX;
	volatile uint32_t t15 = 5908091U;

	t15 = (((x65<x66)^x67)-x68);

	if (t15 != 443967U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = -17567455386104LL;
	int32_t x70 = INT32_MAX;
	volatile uint16_t x71 = 176U;
	volatile int32_t t16 = -54;

	t16 = (((x69<x70)^x71)-x72);

	if (t16 != 50) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x77 = -6LL;
	volatile int8_t x78 = INT8_MIN;
	int16_t x79 = INT16_MAX;
	uint64_t x80 = 705LLU;
	uint64_t t17 = 8213475857793391LLU;

	t17 = (((x77<x78)^x79)-x80);

	if (t17 != 32062LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x81 = 999884526258LL;
	int16_t x82 = -1;
	int16_t x83 = 1;
	uint8_t x84 = 3U;

	t18 = (((x81<x82)^x83)-x84);

	if (t18 != -2) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x85 = INT32_MIN;
	static int64_t x86 = INT64_MIN;
	volatile int16_t x87 = INT16_MIN;
	int32_t x88 = -100350883;
	int32_t t19 = -1918;

	t19 = (((x85<x86)^x87)-x88);

	if (t19 != 100318115) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x90 = INT64_MAX;
	int32_t x91 = 104;
	int16_t x92 = -2;

	t20 = (((x89<x90)^x91)-x92);

	if (t20 != 107) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = -1;
	int64_t x94 = INT64_MIN;
	uint32_t x95 = UINT32_MAX;
	uint16_t x96 = 35U;
	static volatile uint32_t t21 = 4853272U;

	t21 = (((x93<x94)^x95)-x96);

	if (t21 != 4294967260U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x97 = 18484252;
	int16_t x98 = 914;
	uint8_t x99 = 0U;
	static volatile uint32_t t22 = 22U;

	t22 = (((x97<x98)^x99)-x100);

	if (t22 != 4043639852U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x101 = INT64_MIN;
	int8_t x102 = -1;
	uint32_t x104 = 53U;
	volatile uint32_t t23 = 24274834U;

	t23 = (((x101<x102)^x103)-x104);

	if (t23 != 65481U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x105 = 2;
	volatile uint8_t x106 = 23U;
	uint8_t x107 = 15U;
	int16_t x108 = -31;

	t24 = (((x105<x106)^x107)-x108);

	if (t24 != 45) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x113 = 7U;
	static int16_t x114 = -1271;
	volatile int16_t x115 = -1;
	int64_t x116 = INT64_MIN;
	int64_t t25 = INT64_MAX;

	t25 = (((x113<x114)^x115)-x116);

	if (t25 != INT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x117 = 3U;
	int32_t x118 = 1;
	uint8_t x120 = 1U;
	int32_t t26 = 2217;

	t26 = (((x117<x118)^x119)-x120);

	if (t26 != 6) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x121 = -1;
	int64_t x122 = 1964343129672551259LL;
	uint8_t x123 = 0U;
	static int16_t x124 = -2;
	int32_t t27 = -15;

	t27 = (((x121<x122)^x123)-x124);

	if (t27 != 3) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x126 = -1;
	uint16_t x128 = 191U;
	volatile uint32_t t28 = 1006U;

	t28 = (((x125<x126)^x127)-x128);

	if (t28 != 11202454U) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x133 = 0U;
	int64_t x134 = INT64_MIN;
	uint64_t x135 = 18009513013552227LLU;
	int32_t x136 = INT32_MIN;

	t29 = (((x133<x134)^x135)-x136);

	if (t29 != 18009515161035875LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x137 = 27656U;
	volatile uint32_t x139 = 666U;
	int64_t x140 = 294631502178156007LL;
	volatile int64_t t30 = 9423139101LL;

	t30 = (((x137<x138)^x139)-x140);

	if (t30 != -294631502178155341LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x142 = INT16_MIN;
	int16_t x144 = 1;
	static volatile int32_t t31 = -392478;

	t31 = (((x141<x142)^x143)-x144);

	if (t31 != 2147483645) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x145 = UINT32_MAX;
	static int8_t x146 = -1;
	int8_t x147 = INT8_MIN;
	static int16_t x148 = INT16_MAX;
	volatile int32_t t32 = 2556;

	t32 = (((x145<x146)^x147)-x148);

	if (t32 != -32895) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x149 = 0;
	int16_t x150 = INT16_MIN;
	static int64_t t33 = -25801799LL;

	t33 = (((x149<x150)^x151)-x152);

	if (t33 != 32768LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x153 = INT16_MIN;
	uint32_t x155 = 95925032U;
	volatile int8_t x156 = -12;
	uint32_t t34 = 3U;

	t34 = (((x153<x154)^x155)-x156);

	if (t34 != 95925045U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x157 = INT16_MAX;
	int8_t x158 = INT8_MIN;
	int8_t x159 = 13;
	int64_t t35 = 3885503LL;

	t35 = (((x157<x158)^x159)-x160);

	if (t35 != 14LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x170 = 706U;
	uint32_t x171 = 178080437U;
	volatile uint32_t x172 = UINT32_MAX;
	static volatile uint32_t t36 = 235U;

	t36 = (((x169<x170)^x171)-x172);

	if (t36 != 178080437U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x174 = -6;
	static volatile uint8_t x175 = UINT8_MAX;
	int16_t x176 = 14;
	int32_t t37 = -1029768561;

	t37 = (((x173<x174)^x175)-x176);

	if (t37 != 240) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x177 = -1;
	volatile uint32_t x178 = 48174344U;
	int32_t x179 = -1;
	int8_t x180 = -1;
	static int32_t t38 = -469;

	t38 = (((x177<x178)^x179)-x180);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x185 = INT8_MIN;
	int32_t x186 = INT32_MIN;
	static int64_t x187 = INT64_MIN;
	static int64_t x188 = -1LL;
	int64_t t39 = -116092674831084LL;

	t39 = (((x185<x186)^x187)-x188);

	if (t39 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x189 = 32812771LLU;
	uint32_t x190 = 33343706U;
	int32_t t40 = 309;

	t40 = (((x189<x190)^x191)-x192);

	if (t40 != -67170) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x197 = UINT32_MAX;
	static int64_t x198 = INT64_MIN;
	int16_t x199 = -1;
	int32_t t41 = INT32_MIN;

	t41 = (((x197<x198)^x199)-x200);

	if (t41 != INT32_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x202 = INT16_MIN;
	uint32_t x203 = 12601U;
	volatile uint64_t t42 = 40LLU;

	t42 = (((x201<x202)^x203)-x204);

	if (t42 != 12601LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x205 = UINT32_MAX;
	uint16_t x206 = 0U;
	uint16_t x207 = UINT16_MAX;
	int8_t x208 = INT8_MIN;
	volatile int32_t t43 = -225611071;

	t43 = (((x205<x206)^x207)-x208);

	if (t43 != 65663) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x209 = UINT16_MAX;
	volatile int64_t x210 = -7012107409459742LL;
	static int32_t x211 = INT32_MIN;
	int32_t x212 = INT32_MIN;

	t44 = (((x209<x210)^x211)-x212);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x213 = 1;
	static volatile uint64_t x214 = 55459733942217216LLU;
	int32_t x215 = INT32_MIN;
	uint64_t t45 = 2089406368161LLU;

	t45 = (((x213<x214)^x215)-x216);

	if (t45 != 18446744071562065943LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x217 = 8126;
	int64_t x218 = INT64_MIN;
	int16_t x219 = -2158;
	volatile int64_t x220 = INT64_MIN;
	volatile int64_t t46 = -862746382LL;

	t46 = (((x217<x218)^x219)-x220);

	if (t46 != 9223372036854773650LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x223 = INT16_MIN;
	int64_t x224 = -84LL;
	int64_t t47 = -27794283157886464LL;

	t47 = (((x221<x222)^x223)-x224);

	if (t47 != -32683LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x225 = 1144LL;
	int32_t x227 = -175;
	volatile uint16_t x228 = 68U;
	int32_t t48 = 14086900;

	t48 = (((x225<x226)^x227)-x228);

	if (t48 != -244) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x230 = INT32_MIN;
	int64_t x231 = -1LL;
	int32_t x232 = 28;

	t49 = (((x229<x230)^x231)-x232);

	if (t49 != -30LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t t50 = 57552;

	t50 = (((x233<x234)^x235)-x236);

	if (t50 != -127) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x237 = INT32_MAX;
	static volatile int32_t x238 = INT32_MIN;
	int8_t x240 = INT8_MIN;
	int32_t t51 = 0;

	t51 = (((x237<x238)^x239)-x240);

	if (t51 != 204) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x242 = 14248764901534289LLU;
	int32_t x244 = INT32_MIN;
	volatile int64_t t52 = 1191408702667LL;

	t52 = (((x241<x242)^x243)-x244);

	if (t52 != 2147483646LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x245 = INT8_MIN;
	int16_t x246 = 7497;
	int32_t x248 = -534769;
	int64_t t53 = 481434749561LL;

	t53 = (((x245<x246)^x247)-x248);

	if (t53 != -9223372036854241038LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x250 = 0U;
	static int16_t x252 = INT16_MIN;
	volatile int64_t t54 = -11LL;

	t54 = (((x249<x250)^x251)-x252);

	if (t54 != -9223372036854743039LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x253 = INT64_MIN;
	static int32_t x254 = -1;
	int8_t x255 = INT8_MIN;
	volatile int32_t t55 = -402278;

	t55 = (((x253<x254)^x255)-x256);

	if (t55 != 32641) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x257 = INT64_MAX;
	int16_t x258 = INT16_MIN;
	int64_t x259 = INT64_MIN;
	volatile uint64_t x260 = 22379191776993LLU;
	static uint64_t t56 = 582804025566LLU;

	t56 = (((x257<x258)^x259)-x260);

	if (t56 != 9223349657662998815LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x261 = UINT16_MAX;
	int8_t x262 = -56;
	int16_t x263 = -1;
	int16_t x264 = INT16_MAX;

	t57 = (((x261<x262)^x263)-x264);

	if (t57 != -32768) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x269 = 3698572U;
	int16_t x270 = 6658;
	int8_t x271 = -1;
	uint64_t x272 = 224648LLU;
	uint64_t t58 = 102023LLU;

	t58 = (((x269<x270)^x271)-x272);

	if (t58 != 18446744073709326967LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x273 = -77;
	int8_t x274 = -1;
	volatile int16_t x275 = INT16_MIN;
	int8_t x276 = -1;

	t59 = (((x273<x274)^x275)-x276);

	if (t59 != -32766) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x277 = INT16_MAX;
	int8_t x278 = INT8_MAX;
	volatile uint8_t x279 = 1U;
	static int16_t x280 = -2;
	volatile int32_t t60 = 6;

	t60 = (((x277<x278)^x279)-x280);

	if (t60 != 3) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x281 = 158U;
	uint16_t x282 = 192U;
	static int32_t x283 = INT32_MIN;
	volatile uint32_t t61 = 275684058U;

	t61 = (((x281<x282)^x283)-x284);

	if (t61 != 2147483650U) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x285 = -402434380;
	int8_t x286 = -1;
	int64_t x288 = -853925279LL;
	int64_t t62 = -406979146014LL;

	t62 = (((x285<x286)^x287)-x288);

	if (t62 != 847214223LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x289 = INT16_MIN;
	int8_t x291 = INT8_MIN;
	static int64_t x292 = -259327508288LL;
	volatile int64_t t63 = -12572753738484LL;

	t63 = (((x289<x290)^x291)-x292);

	if (t63 != 259327508161LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x293 = INT64_MIN;
	static uint32_t x294 = 2988U;
	volatile int16_t x295 = -4;
	static volatile int64_t t64 = -1185LL;

	t64 = (((x293<x294)^x295)-x296);

	if (t64 != -167LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x298 = -1;
	int32_t x299 = -1;

	t65 = (((x297<x298)^x299)-x300);

	if (t65 != 18446744073179460369LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x305 = UINT64_MAX;
	int64_t x306 = INT64_MIN;
	volatile int32_t x307 = -65016791;
	uint32_t x308 = UINT32_MAX;
	volatile uint32_t t66 = 109934U;

	t66 = (((x305<x306)^x307)-x308);

	if (t66 != 4229950506U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x309 = 2;
	static volatile int8_t x310 = 1;
	int64_t x311 = INT64_MAX;
	int32_t x312 = 196464;
	int64_t t67 = -10932974LL;

	t67 = (((x309<x310)^x311)-x312);

	if (t67 != 9223372036854579343LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x313 = 1U;
	uint32_t x316 = 412201604U;
	uint64_t t68 = 6589753892702864820LLU;

	t68 = (((x313<x314)^x315)-x316);

	if (t68 != 18446744073297350011LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x317 = INT16_MIN;
	int64_t x318 = INT64_MAX;
	int8_t x320 = -1;
	volatile int32_t t69 = 12;

	t69 = (((x317<x318)^x319)-x320);

	if (t69 != 255) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x321 = 168U;
	int64_t x322 = 3052LL;
	int8_t x323 = INT8_MIN;
	static uint32_t x324 = 1936299447U;
	volatile uint32_t t70 = 94U;

	t70 = (((x321<x322)^x323)-x324);

	if (t70 != 2358667722U) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x326 = 3U;
	int64_t x327 = 4095307877079186LL;
	volatile int64_t t71 = 2271310775865622558LL;

	t71 = (((x325<x326)^x327)-x328);

	if (t71 != 4095307877079161LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x329 = UINT16_MAX;
	static uint64_t x330 = 50817551LLU;
	static uint64_t x331 = 6588244457039LLU;
	int64_t x332 = INT64_MIN;
	static volatile uint64_t t72 = 4138858164513345349LLU;

	t72 = (((x329<x330)^x331)-x332);

	if (t72 != 9223378625099232846LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x333 = 2067364U;
	volatile int16_t x334 = INT16_MIN;
	volatile int16_t x335 = INT16_MAX;
	int16_t x336 = 476;
	volatile int32_t t73 = -11085;

	t73 = (((x333<x334)^x335)-x336);

	if (t73 != 32290) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x337 = INT8_MIN;
	int16_t x340 = 0;
	volatile int64_t t74 = 42816910741408LL;

	t74 = (((x337<x338)^x339)-x340);

	if (t74 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x341 = 1U;
	uint32_t x342 = 1U;
	int32_t x343 = -61411;
	uint64_t x344 = 8361098003628043LLU;
	uint64_t t75 = 15928203466804870LLU;

	t75 = (((x341<x342)^x343)-x344);

	if (t75 != 18438382975705862162LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x349 = UINT32_MAX;
	int16_t x350 = INT16_MIN;
	int64_t x351 = -1LL;
	uint32_t x352 = UINT32_MAX;

	t76 = (((x349<x350)^x351)-x352);

	if (t76 != -4294967296LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x353 = 841451686LLU;
	static int16_t x354 = -1;
	uint8_t x356 = UINT8_MAX;
	volatile int32_t t77 = 997833;

	t77 = (((x353<x354)^x355)-x356);

	if (t77 != -5090) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x358 = -491471LL;
	int64_t x360 = -1LL;

	t78 = (((x357<x358)^x359)-x360);

	if (t78 != -10LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x361 = 31359U;
	volatile int64_t x363 = INT64_MAX;
	uint64_t x364 = 146800739243LLU;
	static uint64_t t79 = 3548LLU;

	t79 = (((x361<x362)^x363)-x364);

	if (t79 != 9223371890054036563LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x367 = -4095245351834551LL;
	volatile int16_t x368 = -1;
	int64_t t80 = -205LL;

	t80 = (((x365<x366)^x367)-x368);

	if (t80 != -4095245351834550LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x369 = -1;
	uint64_t x370 = 313241364LLU;
	int16_t x371 = INT16_MIN;
	uint32_t x372 = 50220437U;

	t81 = (((x369<x370)^x371)-x372);

	if (t81 != 4244714091U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x373 = -1;
	int32_t x375 = -1;
	uint32_t x376 = UINT32_MAX;
	volatile uint32_t t82 = 80U;

	t82 = (((x373<x374)^x375)-x376);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x377 = 10682U;
	int8_t x378 = -1;
	volatile int64_t x379 = -924168063LL;
	int16_t x380 = INT16_MIN;
	static int64_t t83 = -239846907996751756LL;

	t83 = (((x377<x378)^x379)-x380);

	if (t83 != -924135295LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x385 = 1233U;
	static int16_t x386 = INT16_MIN;
	int8_t x387 = INT8_MAX;
	volatile int16_t x388 = INT16_MAX;
	volatile int32_t t84 = -223663;

	t84 = (((x385<x386)^x387)-x388);

	if (t84 != -32640) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x389 = INT64_MIN;
	static int64_t x390 = -1LL;
	int32_t x392 = INT32_MIN;
	static int64_t t85 = 3972884441640LL;

	t85 = (((x389<x390)^x391)-x392);

	if (t85 != 2147510632LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x393 = INT32_MIN;
	int8_t x395 = -1;
	int8_t x396 = INT8_MIN;
	volatile int32_t t86 = 116637750;

	t86 = (((x393<x394)^x395)-x396);

	if (t86 != 126) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x398 = UINT64_MAX;
	int16_t x399 = -1;
	int64_t x400 = INT64_MAX;
	int64_t t87 = INT64_MIN;

	t87 = (((x397<x398)^x399)-x400);

	if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x401 = 76U;
	uint64_t x402 = 1123220709840909677LLU;
	volatile int8_t x403 = -1;
	uint32_t t88 = 67091220U;

	t88 = (((x401<x402)^x403)-x404);

	if (t88 != 4294965508U) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x405 = -22211002650LL;
	uint32_t x406 = 41258U;
	int32_t x408 = INT32_MAX;
	static uint64_t t89 = 13186729LLU;

	t89 = (((x405<x406)^x407)-x408);

	if (t89 != 2021977250434301LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x409 = 1U;
	int8_t x411 = -1;
	int32_t t90 = 11;

	t90 = (((x409<x410)^x411)-x412);

	if (t90 != -13) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x413 = -8;
	volatile int64_t x414 = -13811040276484LL;
	int8_t x415 = -1;
	static uint64_t x416 = 3828473LLU;
	volatile uint64_t t91 = 4970553465803418148LLU;

	t91 = (((x413<x414)^x415)-x416);

	if (t91 != 18446744073705723142LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x417 = 157058;
	int8_t x418 = 3;
	int32_t x419 = -47;
	int16_t x420 = -1907;
	volatile int32_t t92 = -3;

	t92 = (((x417<x418)^x419)-x420);

	if (t92 != 1860) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x421 = 498248U;
	int64_t x422 = INT64_MIN;
	uint8_t x423 = 86U;
	volatile int32_t t93 = -443;

	t93 = (((x421<x422)^x423)-x424);

	if (t93 != 67) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x425 = 234U;
	int32_t x426 = INT32_MIN;
	static int64_t x427 = INT64_MAX;
	static volatile int64_t t94 = -4085LL;

	t94 = (((x425<x426)^x427)-x428);

	if (t94 != 9223372036366593829LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x429 = INT16_MAX;
	int32_t x432 = 1;

	t95 = (((x429<x430)^x431)-x432);

	if (t95 != 2147483646) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x434 = -1;
	uint8_t x435 = 3U;
	volatile int32_t t96 = -15950229;

	t96 = (((x433<x434)^x435)-x436);

	if (t96 != 879) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x437 = UINT16_MAX;
	int32_t x438 = 11173528;
	static uint8_t x440 = 1U;
	int32_t t97 = 28;

	t97 = (((x437<x438)^x439)-x440);

	if (t97 != 32765) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x441 = 28490396360909054LL;
	int32_t x442 = INT32_MIN;
	static volatile int32_t x443 = INT32_MIN;
	volatile uint8_t x444 = 0U;
	int32_t t98 = INT32_MIN;

	t98 = (((x441<x442)^x443)-x444);

	if (t98 != INT32_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x445 = INT8_MAX;
	int16_t x447 = INT16_MAX;
	static uint64_t x448 = 22926LLU;
	volatile uint64_t t99 = 359484260631701496LLU;

	t99 = (((x445<x446)^x447)-x448);

	if (t99 != 9840LLU) { NG(); } else { ; }
	
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

