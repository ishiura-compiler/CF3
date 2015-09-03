#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = INT64_MIN;
uint32_t x5 = 32U;
int32_t x11 = INT32_MIN;
static uint8_t x23 = 4U;
volatile int32_t t5 = 893195;
uint8_t x29 = 34U;
volatile int16_t x30 = -10;
static int16_t x31 = -2473;
volatile int32_t t7 = 31646;
static int32_t t11 = 2058745;
uint64_t x54 = UINT64_MAX;
static volatile int32_t t13 = 1;
volatile int32_t t15 = -19128989;
uint32_t x80 = 1U;
uint64_t x82 = 20LLU;
volatile int32_t t20 = 443932933;
uint8_t x86 = 0U;
int64_t x94 = 623991347517336LL;
volatile uint64_t x109 = 55887437323334351LLU;
int32_t t29 = -1945;
int32_t t30 = 1172261;
uint8_t x125 = UINT8_MAX;
uint32_t x140 = UINT32_MAX;
int64_t x142 = -186340715LL;
static volatile int16_t x143 = INT16_MIN;
static int8_t x150 = 4;
volatile int32_t t38 = -2617414;
int32_t t39 = 33410;
static int32_t x161 = INT32_MIN;
int8_t x162 = -1;
static int8_t x164 = -19;
static uint32_t x171 = UINT32_MAX;
static uint16_t x177 = 451U;
uint64_t x193 = UINT64_MAX;
uint8_t x195 = 120U;
int64_t x204 = -589LL;
uint8_t x207 = 1U;
int16_t x211 = INT16_MIN;
volatile int32_t x213 = -23;
uint32_t x217 = UINT32_MAX;
int32_t x222 = -286997;
int16_t x234 = -1;
int64_t x236 = -1LL;
static volatile int32_t t59 = 135;
int16_t x251 = 59;
static int8_t x252 = -1;
volatile int16_t x258 = INT16_MIN;
static int32_t t64 = -441;
volatile int8_t x263 = INT8_MIN;
int8_t x266 = INT8_MIN;
volatile int32_t t66 = -15;
volatile uint32_t x271 = 240264U;
uint64_t x272 = UINT64_MAX;
int64_t x277 = INT64_MAX;
int64_t x280 = INT64_MIN;
volatile int32_t t71 = 17601201;
uint32_t x289 = 17U;
int32_t x290 = INT32_MIN;
int64_t x292 = -1LL;
uint8_t x293 = 85U;
uint8_t x304 = 8U;
volatile int32_t t75 = -590;
int16_t x307 = INT16_MIN;
static int32_t t78 = 3403;
int32_t x322 = INT32_MIN;
volatile int32_t t81 = -97644896;
int64_t x330 = -4505335954611352LL;
int16_t x333 = INT16_MIN;
static int8_t x334 = -1;
static int64_t x335 = INT64_MAX;
int32_t t83 = 65016866;
volatile uint32_t x343 = UINT32_MAX;
volatile int32_t x344 = -1;
int32_t x345 = -28;
static volatile int32_t t86 = 6;
int64_t x351 = 723720LL;
uint8_t x356 = UINT8_MAX;
int32_t t88 = 7747;
int64_t x357 = INT64_MIN;
int32_t x359 = 938424;
int16_t x366 = INT16_MIN;
int16_t x370 = -129;
uint32_t x372 = 480161U;
int8_t x375 = 13;
int16_t x385 = -1;
volatile int32_t x388 = INT32_MIN;
int64_t x389 = INT64_MIN;


void f0(void) {
	int64_t x2 = INT64_MIN;
	int64_t x3 = -1LL;
	uint8_t x4 = 18U;
	volatile int32_t t0 = 89;

	t0 = ((x1*(x2<=x3))<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x6 = INT64_MIN;
	int64_t x7 = INT64_MIN;
	static int8_t x8 = INT8_MAX;
	int32_t t1 = -7370;

	t1 = ((x5*(x6<=x7))<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 47179012774LLU;
	int16_t x10 = -1;
	int8_t x12 = -1;
	int32_t t2 = 5;

	t2 = ((x9*(x10<=x11))<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 413002LLU;
	int64_t x14 = -723661067694530LL;
	static int64_t x15 = 1181959251LL;
	int16_t x16 = 14741;
	int32_t t3 = 13012149;

	t3 = ((x13*(x14<=x15))<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x17 = 9115266U;
	int16_t x18 = -1;
	uint8_t x19 = 0U;
	uint8_t x20 = UINT8_MAX;
	volatile int32_t t4 = 1706828;

	t4 = ((x17*(x18<=x19))<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = 100LL;
	int32_t x22 = -1;
	int16_t x24 = -1;

	t5 = ((x21*(x22<=x23))<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = INT16_MIN;
	uint16_t x26 = 25U;
	int32_t x27 = -1;
	static int16_t x28 = -1;
	static int32_t t6 = -624051236;

	t6 = ((x25*(x26<=x27))<=x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x32 = UINT32_MAX;

	t7 = ((x29*(x30<=x31))<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 6800212U;
	volatile int32_t x34 = -1;
	static uint64_t x35 = 8313LLU;
	uint64_t x36 = 637350LLU;
	volatile int32_t t8 = -862490871;

	t8 = ((x33*(x34<=x35))<=x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = 5526800LL;
	uint64_t x38 = 34112833880708LLU;
	int32_t x39 = -1;
	volatile int32_t x40 = INT32_MIN;
	static int32_t t9 = 1524;

	t9 = ((x37*(x38<=x39))<=x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x41 = INT64_MIN;
	static uint32_t x42 = 1689765U;
	int16_t x43 = 2;
	static uint8_t x44 = UINT8_MAX;
	int32_t t10 = 0;

	t10 = ((x41*(x42<=x43))<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	uint64_t x46 = 5673942121038672LLU;
	static int64_t x47 = INT64_MIN;
	uint16_t x48 = UINT16_MAX;

	t11 = ((x45*(x46<=x47))<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	int16_t x50 = 3;
	volatile uint32_t x51 = UINT32_MAX;
	int32_t x52 = INT32_MAX;
	int32_t t12 = 0;

	t12 = ((x49*(x50<=x51))<=x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x53 = 23U;
	static uint64_t x55 = UINT64_MAX;
	static int8_t x56 = INT8_MAX;

	t13 = ((x53*(x54<=x55))<=x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = -54;
	int8_t x58 = -1;
	int64_t x59 = -378739452966LL;
	static uint16_t x60 = UINT16_MAX;
	volatile int32_t t14 = 19;

	t14 = ((x57*(x58<=x59))<=x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MIN;
	static uint16_t x62 = 15U;
	uint8_t x63 = UINT8_MAX;
	int16_t x64 = INT16_MAX;

	t15 = ((x61*(x62<=x63))<=x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = 1;
	static int64_t x66 = -1LL;
	volatile int8_t x67 = INT8_MAX;
	volatile int32_t x68 = INT32_MIN;
	static volatile int32_t t16 = -525;

	t16 = ((x65*(x66<=x67))<=x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int64_t x69 = INT64_MAX;
	static int64_t x70 = INT64_MAX;
	int8_t x71 = 0;
	int64_t x72 = -22374763738898190LL;
	int32_t t17 = -634204212;

	t17 = ((x69*(x70<=x71))<=x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 157U;
	static int16_t x74 = 7;
	uint32_t x75 = UINT32_MAX;
	volatile int64_t x76 = INT64_MIN;
	volatile int32_t t18 = -89447;

	t18 = ((x73*(x74<=x75))<=x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x77 = -12;
	int64_t x78 = INT64_MAX;
	int64_t x79 = -1LL;
	int32_t t19 = 5625;

	t19 = ((x77*(x78<=x79))<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = 9U;
	uint16_t x83 = 1795U;
	int16_t x84 = -1;

	t20 = ((x81*(x82<=x83))<=x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = 8383676172314LL;
	static int8_t x87 = 30;
	static uint8_t x88 = 7U;
	int32_t t21 = 141414625;

	t21 = ((x85*(x86<=x87))<=x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x89 = UINT32_MAX;
	static int8_t x90 = -7;
	int8_t x91 = INT8_MIN;
	uint16_t x92 = 2319U;
	volatile int32_t t22 = -445;

	t22 = ((x89*(x90<=x91))<=x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x93 = INT32_MIN;
	int32_t x95 = -41907;
	volatile int32_t x96 = INT32_MIN;
	static int32_t t23 = -45360;

	t23 = ((x93*(x94<=x95))<=x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MAX;
	uint8_t x98 = 0U;
	static volatile int32_t x99 = -1;
	uint32_t x100 = UINT32_MAX;
	int32_t t24 = 64185;

	t24 = ((x97*(x98<=x99))<=x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MAX;
	int32_t x102 = INT32_MIN;
	int64_t x103 = -237372222411LL;
	static int64_t x104 = INT64_MIN;
	volatile int32_t t25 = -117899404;

	t25 = ((x101*(x102<=x103))<=x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MIN;
	static int8_t x106 = -1;
	volatile uint64_t x107 = 508438945LLU;
	static int32_t x108 = INT32_MIN;
	int32_t t26 = 84;

	t26 = ((x105*(x106<=x107))<=x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x110 = INT32_MIN;
	int16_t x111 = INT16_MIN;
	int8_t x112 = -1;
	static int32_t t27 = 7286;

	t27 = ((x109*(x110<=x111))<=x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MIN;
	static uint64_t x114 = 926158LLU;
	int32_t x115 = -4622624;
	int32_t x116 = INT32_MAX;
	int32_t t28 = -2771;

	t28 = ((x113*(x114<=x115))<=x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x117 = 19U;
	int64_t x118 = -1LL;
	int16_t x119 = 2;
	volatile int8_t x120 = 1;

	t29 = ((x117*(x118<=x119))<=x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = UINT64_MAX;
	volatile int64_t x122 = -988886LL;
	static uint16_t x123 = UINT16_MAX;
	static volatile uint16_t x124 = 1U;

	t30 = ((x121*(x122<=x123))<=x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x126 = 96552;
	int16_t x127 = 14;
	volatile int8_t x128 = INT8_MIN;
	volatile int32_t t31 = -7747689;

	t31 = ((x125*(x126<=x127))<=x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x129 = INT64_MIN;
	uint16_t x130 = 1215U;
	int8_t x131 = INT8_MAX;
	uint32_t x132 = 136045205U;
	static volatile int32_t t32 = -113153;

	t32 = ((x129*(x130<=x131))<=x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = 13775LL;
	int32_t x134 = INT32_MIN;
	volatile int64_t x135 = -5730LL;
	int32_t x136 = -1142;
	int32_t t33 = 12591248;

	t33 = ((x133*(x134<=x135))<=x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = 3467822U;
	uint16_t x138 = 51U;
	volatile int32_t x139 = -238;
	int32_t t34 = -1;

	t34 = ((x137*(x138<=x139))<=x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = 773843903;
	int64_t x144 = INT64_MIN;
	static int32_t t35 = 104109415;

	t35 = ((x141*(x142<=x143))<=x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x145 = UINT16_MAX;
	int64_t x146 = INT64_MIN;
	int16_t x147 = -1;
	int64_t x148 = 22568451780248LL;
	int32_t t36 = 63;

	t36 = ((x145*(x146<=x147))<=x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = -1;
	static uint8_t x151 = UINT8_MAX;
	static int16_t x152 = INT16_MIN;
	int32_t t37 = 437581;

	t37 = ((x149*(x150<=x151))<=x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = 12614408692LLU;
	int16_t x154 = -1;
	uint8_t x155 = 64U;
	static volatile uint16_t x156 = UINT16_MAX;

	t38 = ((x153*(x154<=x155))<=x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = -1LL;
	int8_t x158 = INT8_MIN;
	static int64_t x159 = INT64_MIN;
	int16_t x160 = INT16_MAX;

	t39 = ((x157*(x158<=x159))<=x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x163 = 15U;
	volatile int32_t t40 = 60;

	t40 = ((x161*(x162<=x163))<=x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = 8U;
	int16_t x166 = INT16_MIN;
	uint8_t x167 = 27U;
	int64_t x168 = INT64_MAX;
	volatile int32_t t41 = 28;

	t41 = ((x165*(x166<=x167))<=x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x169 = INT64_MAX;
	uint64_t x170 = 13735LLU;
	volatile uint8_t x172 = 47U;
	volatile int32_t t42 = -1653;

	t42 = ((x169*(x170<=x171))<=x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x173 = UINT8_MAX;
	int8_t x174 = INT8_MAX;
	volatile int32_t x175 = 20787;
	int8_t x176 = 1;
	static int32_t t43 = 678772466;

	t43 = ((x173*(x174<=x175))<=x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x178 = -1;
	int8_t x179 = INT8_MIN;
	volatile uint8_t x180 = 48U;
	int32_t t44 = -28900;

	t44 = ((x177*(x178<=x179))<=x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x181 = 0U;
	static uint32_t x182 = UINT32_MAX;
	static int16_t x183 = INT16_MIN;
	uint64_t x184 = 7944993274610239774LLU;
	int32_t t45 = 2040;

	t45 = ((x181*(x182<=x183))<=x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = 174;
	static uint32_t x186 = 214596721U;
	int32_t x187 = INT32_MAX;
	volatile int16_t x188 = INT16_MAX;
	int32_t t46 = -3933;

	t46 = ((x185*(x186<=x187))<=x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MIN;
	int64_t x190 = INT64_MAX;
	volatile int64_t x191 = -10750538150LL;
	int32_t x192 = -1;
	int32_t t47 = 1858219;

	t47 = ((x189*(x190<=x191))<=x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x194 = UINT32_MAX;
	uint8_t x196 = 0U;
	volatile int32_t t48 = 1;

	t48 = ((x193*(x194<=x195))<=x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x197 = 1360;
	int32_t x198 = -1;
	int16_t x199 = INT16_MIN;
	uint32_t x200 = 2U;
	volatile int32_t t49 = 3372116;

	t49 = ((x197*(x198<=x199))<=x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x201 = 6267U;
	volatile int16_t x202 = 3;
	int64_t x203 = -37092236405LL;
	static int32_t t50 = -17;

	t50 = ((x201*(x202<=x203))<=x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = 67U;
	int32_t x206 = 172;
	int64_t x208 = -1LL;
	int32_t t51 = -8997023;

	t51 = ((x205*(x206<=x207))<=x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = UINT64_MAX;
	int8_t x210 = -1;
	volatile int64_t x212 = 1287015522LL;
	volatile int32_t t52 = 991;

	t52 = ((x209*(x210<=x211))<=x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x214 = 0;
	static int64_t x215 = INT64_MIN;
	int16_t x216 = -1321;
	static int32_t t53 = -515156163;

	t53 = ((x213*(x214<=x215))<=x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x218 = INT16_MIN;
	volatile int16_t x219 = -1;
	uint16_t x220 = 939U;
	int32_t t54 = -630666605;

	t54 = ((x217*(x218<=x219))<=x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x221 = 94U;
	int16_t x223 = INT16_MIN;
	uint8_t x224 = UINT8_MAX;
	int32_t t55 = -464393789;

	t55 = ((x221*(x222<=x223))<=x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x225 = 16;
	volatile int64_t x226 = 2045LL;
	int64_t x227 = 1561LL;
	uint32_t x228 = UINT32_MAX;
	static int32_t t56 = -38;

	t56 = ((x225*(x226<=x227))<=x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x229 = UINT16_MAX;
	static volatile int16_t x230 = INT16_MIN;
	int32_t x231 = -41;
	static volatile int64_t x232 = INT64_MIN;
	int32_t t57 = -64255;

	t57 = ((x229*(x230<=x231))<=x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x233 = 302593094LLU;
	int8_t x235 = INT8_MAX;
	static int32_t t58 = 7;

	t58 = ((x233*(x234<=x235))<=x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = 0U;
	uint16_t x238 = UINT16_MAX;
	uint32_t x239 = 974511758U;
	uint8_t x240 = 27U;

	t59 = ((x237*(x238<=x239))<=x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MAX;
	int64_t x242 = INT64_MIN;
	int16_t x243 = INT16_MIN;
	uint16_t x244 = 2U;
	int32_t t60 = 10;

	t60 = ((x241*(x242<=x243))<=x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x245 = UINT64_MAX;
	uint64_t x246 = UINT64_MAX;
	static int16_t x247 = INT16_MAX;
	int8_t x248 = 0;
	static int32_t t61 = -1100;

	t61 = ((x245*(x246<=x247))<=x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x249 = 4357734972054LLU;
	int8_t x250 = INT8_MIN;
	int32_t t62 = 947134473;

	t62 = ((x249*(x250<=x251))<=x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x253 = 1551733228U;
	uint16_t x254 = 496U;
	static int64_t x255 = INT64_MAX;
	int32_t x256 = INT32_MAX;
	volatile int32_t t63 = -425;

	t63 = ((x253*(x254<=x255))<=x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x257 = 87U;
	uint32_t x259 = 12654U;
	volatile uint16_t x260 = 222U;

	t64 = ((x257*(x258<=x259))<=x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = INT32_MIN;
	int16_t x262 = INT16_MIN;
	int16_t x264 = INT16_MIN;
	static volatile int32_t t65 = 444077690;

	t65 = ((x261*(x262<=x263))<=x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x265 = 2U;
	uint16_t x267 = 3U;
	uint16_t x268 = UINT16_MAX;

	t66 = ((x265*(x266<=x267))<=x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = -52LL;
	int8_t x270 = INT8_MIN;
	static int32_t t67 = -8;

	t67 = ((x269*(x270<=x271))<=x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = 1LLU;
	int16_t x274 = -1;
	int64_t x275 = INT64_MIN;
	static int8_t x276 = -1;
	int32_t t68 = 24498028;

	t68 = ((x273*(x274<=x275))<=x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x278 = -1;
	volatile int8_t x279 = 5;
	volatile int32_t t69 = 0;

	t69 = ((x277*(x278<=x279))<=x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x281 = INT16_MIN;
	static volatile int8_t x282 = INT8_MIN;
	int64_t x283 = -452957865LL;
	int8_t x284 = INT8_MIN;
	volatile int32_t t70 = -6072412;

	t70 = ((x281*(x282<=x283))<=x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x285 = INT16_MIN;
	int16_t x286 = 81;
	uint16_t x287 = 13123U;
	int32_t x288 = 50393055;

	t71 = ((x285*(x286<=x287))<=x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x291 = 71;
	volatile int32_t t72 = -8;

	t72 = ((x289*(x290<=x291))<=x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x294 = UINT64_MAX;
	static int64_t x295 = INT64_MIN;
	static int8_t x296 = -1;
	volatile int32_t t73 = -39320452;

	t73 = ((x293*(x294<=x295))<=x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MAX;
	int32_t x298 = INT32_MIN;
	int16_t x299 = -1;
	int32_t x300 = -903004;
	int32_t t74 = -263174053;

	t74 = ((x297*(x298<=x299))<=x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x301 = INT64_MIN;
	int8_t x302 = INT8_MAX;
	int16_t x303 = 54;

	t75 = ((x301*(x302<=x303))<=x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x305 = INT16_MIN;
	uint8_t x306 = 1U;
	uint8_t x308 = UINT8_MAX;
	volatile int32_t t76 = 20511;

	t76 = ((x305*(x306<=x307))<=x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x309 = 90LLU;
	int64_t x310 = INT64_MIN;
	uint8_t x311 = 0U;
	int8_t x312 = -1;
	static int32_t t77 = 819870287;

	t77 = ((x309*(x310<=x311))<=x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x313 = 1586;
	uint32_t x314 = UINT32_MAX;
	int8_t x315 = -25;
	volatile int16_t x316 = INT16_MIN;

	t78 = ((x313*(x314<=x315))<=x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = INT32_MIN;
	static volatile uint32_t x318 = 439596554U;
	static volatile int64_t x319 = INT64_MIN;
	int32_t x320 = INT32_MIN;
	static int32_t t79 = 3334185;

	t79 = ((x317*(x318<=x319))<=x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = 65854440500863147LLU;
	uint64_t x323 = 9LLU;
	int32_t x324 = -3840564;
	int32_t t80 = -266;

	t80 = ((x321*(x322<=x323))<=x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x325 = 60;
	static int8_t x326 = INT8_MIN;
	int8_t x327 = 12;
	static uint16_t x328 = UINT16_MAX;

	t81 = ((x325*(x326<=x327))<=x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = INT16_MAX;
	volatile uint16_t x331 = 248U;
	int16_t x332 = -1;
	int32_t t82 = 128311;

	t82 = ((x329*(x330<=x331))<=x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x336 = INT8_MAX;

	t83 = ((x333*(x334<=x335))<=x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x337 = UINT64_MAX;
	uint32_t x338 = 3650269U;
	volatile int16_t x339 = INT16_MIN;
	static int64_t x340 = -107062316555LL;
	int32_t t84 = -338;

	t84 = ((x337*(x338<=x339))<=x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = INT16_MIN;
	volatile int64_t x342 = INT64_MAX;
	int32_t t85 = 1;

	t85 = ((x341*(x342<=x343))<=x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x346 = 1743995378761LLU;
	uint32_t x347 = 0U;
	int16_t x348 = -6652;

	t86 = ((x345*(x346<=x347))<=x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = -1LL;
	int32_t x350 = -89485;
	uint16_t x352 = UINT16_MAX;
	volatile int32_t t87 = 1;

	t87 = ((x349*(x350<=x351))<=x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x353 = UINT32_MAX;
	volatile int16_t x354 = -2781;
	uint8_t x355 = UINT8_MAX;

	t88 = ((x353*(x354<=x355))<=x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x358 = INT8_MAX;
	uint8_t x360 = 1U;
	int32_t t89 = -265;

	t89 = ((x357*(x358<=x359))<=x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = 0;
	uint8_t x362 = 16U;
	int8_t x363 = INT8_MIN;
	int8_t x364 = INT8_MIN;
	static volatile int32_t t90 = -4646;

	t90 = ((x361*(x362<=x363))<=x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = INT8_MIN;
	volatile uint8_t x367 = UINT8_MAX;
	static int16_t x368 = INT16_MIN;
	volatile int32_t t91 = 1;

	t91 = ((x365*(x366<=x367))<=x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x369 = 0;
	int64_t x371 = INT64_MIN;
	volatile int32_t t92 = -7218;

	t92 = ((x369*(x370<=x371))<=x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = -1;
	int8_t x374 = 0;
	uint16_t x376 = 898U;
	volatile int32_t t93 = -11283;

	t93 = ((x373*(x374<=x375))<=x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x377 = 950U;
	uint64_t x378 = UINT64_MAX;
	int16_t x379 = INT16_MIN;
	static uint64_t x380 = 6331423152LLU;
	int32_t t94 = 2366;

	t94 = ((x377*(x378<=x379))<=x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = INT8_MIN;
	int8_t x382 = INT8_MAX;
	volatile int64_t x383 = INT64_MIN;
	uint8_t x384 = 20U;
	int32_t t95 = -1;

	t95 = ((x381*(x382<=x383))<=x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x386 = -1LL;
	static int32_t x387 = INT32_MIN;
	int32_t t96 = 32;

	t96 = ((x385*(x386<=x387))<=x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x390 = UINT16_MAX;
	int8_t x391 = INT8_MAX;
	int64_t x392 = INT64_MAX;
	int32_t t97 = -1;

	t97 = ((x389*(x390<=x391))<=x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x393 = 68518U;
	static volatile int32_t x394 = INT32_MIN;
	volatile int16_t x395 = -1;
	uint64_t x396 = 397LLU;
	static volatile int32_t t98 = -643627427;

	t98 = ((x393*(x394<=x395))<=x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = INT64_MIN;
	int8_t x398 = -1;
	int64_t x399 = INT64_MAX;
	int32_t x400 = -31836379;
	volatile int32_t t99 = -481;

	t99 = ((x397*(x398<=x399))<=x400);

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

