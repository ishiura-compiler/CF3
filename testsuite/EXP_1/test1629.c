#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int64_t x2 = 2030920LL;
volatile uint32_t t3 = 193548959U;
static int32_t x24 = INT32_MIN;
static int64_t x34 = -3762754LL;
uint16_t x37 = 501U;
int16_t x41 = 29;
volatile int32_t t13 = -246368955;
uint8_t x68 = 13U;
uint16_t x69 = 199U;
int32_t x81 = INT32_MIN;
int32_t t19 = 3496;
static int64_t x91 = -1LL;
int16_t x94 = INT16_MAX;
uint32_t x98 = 7752U;
int16_t x104 = INT16_MIN;
uint8_t x111 = 32U;
static int64_t x124 = -1LL;
int8_t x128 = INT8_MAX;
volatile int32_t t30 = 66;
uint32_t x131 = UINT32_MAX;
int32_t t31 = -5;
static int32_t t32 = -1;
uint64_t x137 = UINT64_MAX;
int32_t t35 = -4;
int16_t x155 = INT16_MIN;
uint16_t x161 = 2U;
int64_t x169 = INT64_MIN;
int8_t x171 = INT8_MIN;
int16_t x179 = INT16_MAX;
uint64_t x185 = 13LLU;
uint16_t x188 = 1U;
int64_t x190 = INT64_MIN;
int64_t x192 = -264067000323096871LL;
int64_t t46 = 4255513112123LL;
int16_t x199 = INT16_MAX;
uint8_t x211 = UINT8_MAX;
int16_t x213 = INT16_MIN;
volatile int32_t t55 = -1;
uint8_t x229 = 3U;
int32_t t56 = -24;
uint16_t x238 = 3U;
uint8_t x241 = 5U;
int16_t x249 = 151;
uint8_t x258 = UINT8_MAX;
static uint32_t x259 = 259030572U;
static int64_t x265 = INT64_MAX;
volatile int32_t t64 = -119;
volatile int32_t x273 = 812;
volatile uint64_t x281 = 95724LLU;
int32_t t68 = -127821;
volatile int8_t x287 = INT8_MIN;
int32_t t69 = -64171;
uint32_t x289 = 65U;
volatile uint64_t x292 = 59671222275531LLU;
uint32_t x295 = UINT32_MAX;
volatile int32_t t71 = -27273618;
volatile int64_t x301 = INT64_MAX;
volatile int32_t x311 = INT32_MAX;
int8_t x312 = INT8_MIN;
int8_t x318 = INT8_MIN;
int16_t x319 = INT16_MAX;
uint64_t x320 = 32483LLU;
uint16_t x324 = UINT16_MAX;
int32_t t77 = 2;
int64_t x326 = -71412072218861021LL;
volatile int32_t t78 = -466;
int16_t x337 = INT16_MAX;
static uint32_t x339 = UINT32_MAX;
static int16_t x341 = INT16_MAX;
static volatile int32_t x344 = INT32_MIN;
volatile int32_t t82 = -525;
static uint16_t x351 = 1483U;
int32_t x352 = INT32_MAX;
uint16_t x353 = 13526U;
volatile int16_t x355 = INT16_MIN;
static int16_t x363 = INT16_MIN;
int64_t x365 = 393680271843695029LL;
int32_t t87 = -26996;
int32_t x374 = INT32_MIN;
int32_t x380 = INT32_MIN;
volatile int16_t x381 = -1;
int64_t x383 = INT64_MAX;
int32_t t92 = 8;
static volatile uint16_t x392 = 312U;
int8_t x396 = INT8_MIN;
static volatile int32_t t94 = -1598;
static int16_t x399 = -109;
static int16_t x401 = INT16_MIN;
static int64_t x402 = INT64_MAX;
uint64_t x404 = 760610LLU;
static volatile uint64_t t96 = 195LLU;
volatile uint64_t x406 = 21350995734380LLU;
int64_t x410 = -6173762492LL;
static int64_t t98 = 34093423890121515LL;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	static int16_t x3 = INT16_MIN;
	volatile int16_t x4 = INT16_MIN;
	static int32_t t0 = -423219735;

	t0 = (((x1<=x2)<x3)/x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	int16_t x6 = -1;
	static volatile int8_t x7 = INT8_MIN;
	volatile uint64_t x8 = 468779154431369LLU;
	uint64_t t1 = 1345871613520798LLU;

	t1 = (((x5<=x6)<x7)/x8);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x9 = 23U;
	volatile int32_t x10 = INT32_MAX;
	int32_t x11 = 17;
	static int16_t x12 = -14;
	volatile int32_t t2 = -540190;

	t2 = (((x9<=x10)<x11)/x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = INT64_MIN;
	int32_t x14 = INT32_MIN;
	int16_t x15 = -1;
	uint32_t x16 = 147U;

	t3 = (((x13<=x14)<x15)/x16);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 3533050974LLU;
	volatile int8_t x18 = 62;
	int8_t x19 = 2;
	int16_t x20 = INT16_MAX;
	volatile int32_t t4 = -1;

	t4 = (((x17<=x18)<x19)/x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	int64_t x22 = -1LL;
	int16_t x23 = INT16_MAX;
	static int32_t t5 = -713;

	t5 = (((x21<=x22)<x23)/x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 19711553LLU;
	int16_t x26 = INT16_MIN;
	volatile uint8_t x27 = 4U;
	int64_t x28 = INT64_MIN;
	int64_t t6 = 36532207LL;

	t6 = (((x25<=x26)<x27)/x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x29 = INT64_MIN;
	int32_t x30 = INT32_MIN;
	uint32_t x31 = UINT32_MAX;
	uint32_t x32 = 24U;
	volatile uint32_t t7 = 0U;

	t7 = (((x29<=x30)<x31)/x32);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -86224;
	int16_t x35 = -1;
	uint32_t x36 = UINT32_MAX;
	volatile uint32_t t8 = 22699335U;

	t8 = (((x33<=x34)<x35)/x36);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x38 = -531777;
	int32_t x39 = 83194716;
	static int16_t x40 = INT16_MIN;
	volatile int32_t t9 = -23;

	t9 = (((x37<=x38)<x39)/x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x42 = 722388986902LLU;
	static int16_t x43 = INT16_MAX;
	uint64_t x44 = UINT64_MAX;
	uint64_t t10 = 134584895363622739LLU;

	t10 = (((x41<=x42)<x43)/x44);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = 1;
	static int16_t x46 = -1;
	static int64_t x47 = INT64_MIN;
	int16_t x48 = INT16_MIN;
	volatile int32_t t11 = -365;

	t11 = (((x45<=x46)<x47)/x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 754951115050LLU;
	static volatile int8_t x50 = -1;
	int64_t x51 = INT64_MIN;
	static int16_t x52 = INT16_MIN;
	int32_t t12 = -213966;

	t12 = (((x49<=x50)<x51)/x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint16_t x53 = 2U;
	volatile int32_t x54 = INT32_MIN;
	int32_t x55 = -16333;
	int16_t x56 = -1750;

	t13 = (((x53<=x54)<x55)/x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x57 = 58200306483695LL;
	int32_t x58 = INT32_MIN;
	int8_t x59 = 28;
	volatile int32_t x60 = INT32_MIN;
	static int32_t t14 = 128224;

	t14 = (((x57<=x58)<x59)/x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MAX;
	int32_t x62 = -1;
	uint64_t x63 = UINT64_MAX;
	int64_t x64 = INT64_MIN;
	int64_t t15 = -24LL;

	t15 = (((x61<=x62)<x63)/x64);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x65 = INT64_MIN;
	int32_t x66 = INT32_MIN;
	int8_t x67 = INT8_MAX;
	int32_t t16 = 388577996;

	t16 = (((x65<=x66)<x67)/x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int8_t x70 = -1;
	int64_t x71 = 44625559LL;
	int64_t x72 = -1LL;
	static volatile int64_t t17 = 0LL;

	t17 = (((x69<=x70)<x71)/x72);

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x77 = -1;
	int16_t x78 = INT16_MIN;
	static volatile uint32_t x79 = UINT32_MAX;
	int16_t x80 = -15;
	static int32_t t18 = -23;

	t18 = (((x77<=x78)<x79)/x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x82 = 439U;
	uint32_t x83 = 379621578U;
	int16_t x84 = INT16_MAX;

	t19 = (((x81<=x82)<x83)/x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x85 = 113412LLU;
	volatile int32_t x86 = INT32_MIN;
	static int64_t x87 = INT64_MIN;
	uint16_t x88 = 4149U;
	volatile int32_t t20 = -24;

	t20 = (((x85<=x86)<x87)/x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x89 = 52;
	int16_t x90 = -284;
	static int8_t x92 = -1;
	static volatile int32_t t21 = -5;

	t21 = (((x89<=x90)<x91)/x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x93 = 2U;
	static uint64_t x95 = 12173LLU;
	volatile int32_t x96 = -1;
	int32_t t22 = -2;

	t22 = (((x93<=x94)<x95)/x96);

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x97 = -6629618;
	int16_t x99 = -1;
	int16_t x100 = -1;
	static volatile int32_t t23 = 812819721;

	t23 = (((x97<=x98)<x99)/x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x101 = 0;
	uint32_t x102 = UINT32_MAX;
	int16_t x103 = INT16_MIN;
	volatile int32_t t24 = 52276;

	t24 = (((x101<=x102)<x103)/x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x105 = INT64_MIN;
	int64_t x106 = -90479924LL;
	int16_t x107 = 3856;
	static volatile uint64_t x108 = UINT64_MAX;
	uint64_t t25 = 8222336949017894LLU;

	t25 = (((x105<=x106)<x107)/x108);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x109 = UINT8_MAX;
	int8_t x110 = INT8_MIN;
	uint32_t x112 = 3U;
	volatile uint32_t t26 = 354830U;

	t26 = (((x109<=x110)<x111)/x112);

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = -5157700LL;
	int32_t x114 = INT32_MIN;
	int16_t x115 = INT16_MIN;
	int64_t x116 = -1LL;
	int64_t t27 = -2854585LL;

	t27 = (((x113<=x114)<x115)/x116);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x117 = 12479523457276LLU;
	static int16_t x118 = INT16_MIN;
	int16_t x119 = -1;
	uint8_t x120 = UINT8_MAX;
	volatile int32_t t28 = -548278277;

	t28 = (((x117<=x118)<x119)/x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x121 = INT8_MIN;
	volatile int32_t x122 = INT32_MAX;
	static int32_t x123 = INT32_MIN;
	int64_t t29 = -21187857123136228LL;

	t29 = (((x121<=x122)<x123)/x124);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = INT16_MAX;
	int64_t x126 = INT64_MIN;
	uint64_t x127 = 10987686776143LLU;

	t30 = (((x125<=x126)<x127)/x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x129 = 12342;
	int32_t x130 = INT32_MAX;
	int8_t x132 = -1;

	t31 = (((x129<=x130)<x131)/x132);

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x133 = INT8_MIN;
	int16_t x134 = INT16_MIN;
	int16_t x135 = 25;
	int32_t x136 = 22023;

	t32 = (((x133<=x134)<x135)/x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x138 = 40816357108310LL;
	int8_t x139 = 28;
	static int16_t x140 = -1;
	volatile int32_t t33 = -439046492;

	t33 = (((x137<=x138)<x139)/x140);

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x141 = 0U;
	volatile int8_t x142 = INT8_MIN;
	int8_t x143 = -29;
	uint16_t x144 = UINT16_MAX;
	volatile int32_t t34 = 5079735;

	t34 = (((x141<=x142)<x143)/x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int16_t x145 = INT16_MAX;
	static int64_t x146 = INT64_MIN;
	volatile int8_t x147 = 5;
	static int8_t x148 = -59;

	t35 = (((x145<=x146)<x147)/x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x149 = 109194759512LLU;
	int16_t x150 = -612;
	int32_t x151 = INT32_MAX;
	static int8_t x152 = -1;
	volatile int32_t t36 = 256705;

	t36 = (((x149<=x150)<x151)/x152);

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x153 = -1LL;
	int16_t x154 = INT16_MIN;
	int32_t x156 = -1;
	int32_t t37 = -408;

	t37 = (((x153<=x154)<x155)/x156);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x157 = -1;
	uint32_t x158 = 6U;
	int16_t x159 = INT16_MIN;
	uint16_t x160 = UINT16_MAX;
	int32_t t38 = -284981;

	t38 = (((x157<=x158)<x159)/x160);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int32_t x162 = -416502538;
	int64_t x163 = -1LL;
	volatile int64_t x164 = -1LL;
	int64_t t39 = 525845787577024417LL;

	t39 = (((x161<=x162)<x163)/x164);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x165 = 7U;
	int16_t x166 = 0;
	volatile int8_t x167 = INT8_MIN;
	int32_t x168 = INT32_MAX;
	volatile int32_t t40 = 0;

	t40 = (((x165<=x166)<x167)/x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x170 = -30956;
	static volatile int16_t x172 = -1;
	int32_t t41 = 310966;

	t41 = (((x169<=x170)<x171)/x172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x173 = 28591053175931836LL;
	volatile uint16_t x174 = 1482U;
	static int32_t x175 = INT32_MIN;
	volatile int64_t x176 = -57581384225883668LL;
	int64_t t42 = 2080983388569647209LL;

	t42 = (((x173<=x174)<x175)/x176);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int8_t x177 = -1;
	int64_t x178 = INT64_MAX;
	static int16_t x180 = INT16_MIN;
	int32_t t43 = -184906;

	t43 = (((x177<=x178)<x179)/x180);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x181 = INT64_MIN;
	static int16_t x182 = INT16_MIN;
	uint64_t x183 = UINT64_MAX;
	uint64_t x184 = 7232086938210LLU;
	uint64_t t44 = 1906LLU;

	t44 = (((x181<=x182)<x183)/x184);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x186 = 1U;
	uint8_t x187 = 14U;
	volatile int32_t t45 = -927290;

	t45 = (((x185<=x186)<x187)/x188);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x189 = -354035;
	int8_t x191 = 23;

	t46 = (((x189<=x190)<x191)/x192);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x193 = INT32_MIN;
	uint64_t x194 = 263234345LLU;
	uint8_t x195 = 47U;
	uint64_t x196 = 753443463747LLU;
	static volatile uint64_t t47 = 2744245290149843LLU;

	t47 = (((x193<=x194)<x195)/x196);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x197 = INT64_MIN;
	static int16_t x198 = 5800;
	uint64_t x200 = UINT64_MAX;
	volatile uint64_t t48 = 0LLU;

	t48 = (((x197<=x198)<x199)/x200);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x201 = 9U;
	static int8_t x202 = INT8_MIN;
	uint16_t x203 = 1525U;
	uint8_t x204 = 58U;
	int32_t t49 = -726;

	t49 = (((x201<=x202)<x203)/x204);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x205 = 73U;
	uint64_t x206 = 945843LLU;
	int64_t x207 = -232307847024756LL;
	uint8_t x208 = 1U;
	volatile int32_t t50 = 133398;

	t50 = (((x205<=x206)<x207)/x208);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x209 = UINT16_MAX;
	int16_t x210 = INT16_MIN;
	uint8_t x212 = 6U;
	int32_t t51 = -22132;

	t51 = (((x209<=x210)<x211)/x212);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x214 = -1LL;
	uint16_t x215 = 1435U;
	int32_t x216 = INT32_MIN;
	int32_t t52 = 153;

	t52 = (((x213<=x214)<x215)/x216);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x217 = 299757;
	uint16_t x218 = 1U;
	volatile uint64_t x219 = UINT64_MAX;
	int32_t x220 = INT32_MAX;
	static int32_t t53 = -799980;

	t53 = (((x217<=x218)<x219)/x220);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x221 = INT32_MIN;
	int32_t x222 = -1;
	int64_t x223 = -1LL;
	volatile int64_t x224 = -1LL;
	int64_t t54 = -2351236481698775981LL;

	t54 = (((x221<=x222)<x223)/x224);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x225 = INT8_MAX;
	uint64_t x226 = 8303897LLU;
	static volatile int32_t x227 = 1;
	int8_t x228 = INT8_MIN;

	t55 = (((x225<=x226)<x227)/x228);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x230 = 1U;
	volatile int32_t x231 = INT32_MIN;
	int32_t x232 = -1;

	t56 = (((x229<=x230)<x231)/x232);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x233 = INT64_MIN;
	static uint16_t x234 = 11141U;
	static volatile int64_t x235 = 277795412176427681LL;
	int32_t x236 = 63;
	volatile int32_t t57 = -55410;

	t57 = (((x233<=x234)<x235)/x236);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x237 = INT8_MIN;
	uint8_t x239 = UINT8_MAX;
	int16_t x240 = 3993;
	int32_t t58 = -246322518;

	t58 = (((x237<=x238)<x239)/x240);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x242 = 1U;
	int64_t x243 = INT64_MAX;
	static volatile int16_t x244 = -1;
	int32_t t59 = -492275162;

	t59 = (((x241<=x242)<x243)/x244);

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x245 = 50900375846LLU;
	int16_t x246 = 1686;
	volatile int64_t x247 = INT64_MAX;
	uint8_t x248 = UINT8_MAX;
	volatile int32_t t60 = 2341094;

	t60 = (((x245<=x246)<x247)/x248);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x250 = UINT32_MAX;
	volatile uint8_t x251 = 4U;
	volatile int16_t x252 = INT16_MIN;
	int32_t t61 = 49690;

	t61 = (((x249<=x250)<x251)/x252);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x257 = 89U;
	uint32_t x260 = 7505708U;
	uint32_t t62 = 221838228U;

	t62 = (((x257<=x258)<x259)/x260);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int64_t x261 = 343067668LL;
	volatile uint64_t x262 = 591697252072LLU;
	int64_t x263 = INT64_MIN;
	int8_t x264 = INT8_MAX;
	int32_t t63 = 3;

	t63 = (((x261<=x262)<x263)/x264);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x266 = -1;
	volatile int8_t x267 = 0;
	uint8_t x268 = UINT8_MAX;

	t64 = (((x265<=x266)<x267)/x268);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x269 = INT8_MAX;
	int64_t x270 = INT64_MIN;
	static int8_t x271 = INT8_MAX;
	volatile int16_t x272 = 49;
	int32_t t65 = 749465053;

	t65 = (((x269<=x270)<x271)/x272);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x274 = 23;
	volatile uint64_t x275 = 45153679628636LLU;
	static int16_t x276 = INT16_MIN;
	static volatile int32_t t66 = -884226;

	t66 = (((x273<=x274)<x275)/x276);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x277 = INT8_MIN;
	volatile int8_t x278 = INT8_MAX;
	int32_t x279 = -1;
	uint32_t x280 = 96U;
	volatile uint32_t t67 = 610462U;

	t67 = (((x277<=x278)<x279)/x280);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x282 = -1;
	static int32_t x283 = INT32_MIN;
	uint16_t x284 = UINT16_MAX;

	t68 = (((x281<=x282)<x283)/x284);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x285 = INT8_MIN;
	int8_t x286 = INT8_MAX;
	volatile int32_t x288 = -10485637;

	t69 = (((x285<=x286)<x287)/x288);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x290 = INT64_MIN;
	static int16_t x291 = -1;
	volatile uint64_t t70 = 1908610742646LLU;

	t70 = (((x289<=x290)<x291)/x292);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x293 = 20U;
	static uint32_t x294 = UINT32_MAX;
	int16_t x296 = 1;

	t71 = (((x293<=x294)<x295)/x296);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x302 = -1LL;
	int32_t x303 = 747857515;
	uint64_t x304 = UINT64_MAX;
	volatile uint64_t t72 = 55503936700976LLU;

	t72 = (((x301<=x302)<x303)/x304);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x305 = 474933LLU;
	uint8_t x306 = UINT8_MAX;
	volatile int64_t x307 = INT64_MAX;
	uint16_t x308 = 12U;
	volatile int32_t t73 = 80054838;

	t73 = (((x305<=x306)<x307)/x308);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x309 = -1;
	int8_t x310 = 0;
	int32_t t74 = 12410594;

	t74 = (((x309<=x310)<x311)/x312);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x313 = INT16_MAX;
	static uint16_t x314 = 1U;
	volatile int8_t x315 = INT8_MIN;
	static uint16_t x316 = 4640U;
	int32_t t75 = -1;

	t75 = (((x313<=x314)<x315)/x316);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x317 = -1;
	volatile uint64_t t76 = 24011LLU;

	t76 = (((x317<=x318)<x319)/x320);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x321 = INT64_MAX;
	int8_t x322 = INT8_MIN;
	int32_t x323 = INT32_MAX;

	t77 = (((x321<=x322)<x323)/x324);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x325 = 473U;
	static int64_t x327 = INT64_MAX;
	static uint8_t x328 = UINT8_MAX;

	t78 = (((x325<=x326)<x327)/x328);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x329 = 36LL;
	volatile int32_t x330 = INT32_MIN;
	volatile int16_t x331 = INT16_MAX;
	static int64_t x332 = INT64_MIN;
	static int64_t t79 = -43LL;

	t79 = (((x329<=x330)<x331)/x332);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x333 = INT32_MIN;
	int8_t x334 = INT8_MAX;
	volatile uint8_t x335 = UINT8_MAX;
	volatile int64_t x336 = INT64_MIN;
	static volatile int64_t t80 = 3591183LL;

	t80 = (((x333<=x334)<x335)/x336);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x338 = INT32_MIN;
	int8_t x340 = INT8_MIN;
	int32_t t81 = 1406458;

	t81 = (((x337<=x338)<x339)/x340);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x342 = 18707U;
	static int32_t x343 = 75;

	t82 = (((x341<=x342)<x343)/x344);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x345 = UINT32_MAX;
	int16_t x346 = INT16_MIN;
	int16_t x347 = -1;
	int64_t x348 = -1LL;
	volatile int64_t t83 = 15229820164LL;

	t83 = (((x345<=x346)<x347)/x348);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x349 = 141U;
	int32_t x350 = 8756;
	int32_t t84 = 0;

	t84 = (((x349<=x350)<x351)/x352);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x354 = INT32_MIN;
	int16_t x356 = -1;
	volatile int32_t t85 = -1311559;

	t85 = (((x353<=x354)<x355)/x356);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x361 = 147LLU;
	int16_t x362 = INT16_MAX;
	int8_t x364 = INT8_MIN;
	volatile int32_t t86 = 53594;

	t86 = (((x361<=x362)<x363)/x364);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x366 = -1;
	uint32_t x367 = 7U;
	int8_t x368 = INT8_MAX;

	t87 = (((x365<=x366)<x367)/x368);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x369 = -1LL;
	volatile int32_t x370 = INT32_MIN;
	int32_t x371 = 19039863;
	int64_t x372 = INT64_MIN;
	volatile int64_t t88 = 1477525722LL;

	t88 = (((x369<=x370)<x371)/x372);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x373 = UINT64_MAX;
	int32_t x375 = 0;
	volatile int16_t x376 = INT16_MIN;
	volatile int32_t t89 = 63524594;

	t89 = (((x373<=x374)<x375)/x376);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x377 = 35U;
	int8_t x378 = INT8_MIN;
	volatile int16_t x379 = INT16_MIN;
	volatile int32_t t90 = 10698576;

	t90 = (((x377<=x378)<x379)/x380);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x382 = 1293262654LLU;
	uint8_t x384 = UINT8_MAX;
	int32_t t91 = -664371;

	t91 = (((x381<=x382)<x383)/x384);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x385 = INT32_MIN;
	volatile int8_t x386 = -7;
	uint8_t x387 = 4U;
	volatile int8_t x388 = -1;

	t92 = (((x385<=x386)<x387)/x388);

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x389 = -84183986LL;
	int16_t x390 = INT16_MIN;
	uint16_t x391 = 184U;
	static int32_t t93 = -13;

	t93 = (((x389<=x390)<x391)/x392);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x393 = 56U;
	uint32_t x394 = 3U;
	int32_t x395 = -1;

	t94 = (((x393<=x394)<x395)/x396);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x397 = 3U;
	int32_t x398 = INT32_MAX;
	uint64_t x400 = UINT64_MAX;
	uint64_t t95 = 2470436223LLU;

	t95 = (((x397<=x398)<x399)/x400);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x403 = 282927236938682984LLU;

	t96 = (((x401<=x402)<x403)/x404);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x405 = INT8_MIN;
	uint16_t x407 = UINT16_MAX;
	int8_t x408 = -1;
	int32_t t97 = 2;

	t97 = (((x405<=x406)<x407)/x408);

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x409 = 11U;
	static uint64_t x411 = 34LLU;
	int64_t x412 = INT64_MIN;

	t98 = (((x409<=x410)<x411)/x412);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x413 = 114U;
	static int16_t x414 = -1;
	uint64_t x415 = 63LLU;
	int32_t x416 = INT32_MIN;
	volatile int32_t t99 = 16524;

	t99 = (((x413<=x414)<x415)/x416);

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
