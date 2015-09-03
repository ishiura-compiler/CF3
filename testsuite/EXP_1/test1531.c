#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = INT32_MIN;
uint64_t x4 = 33967078753LLU;
int16_t x12 = INT16_MAX;
int32_t t2 = -504452;
int32_t x15 = -1;
int16_t x19 = INT16_MIN;
volatile uint8_t x24 = 2U;
volatile int32_t t5 = 3394;
static uint8_t x25 = 7U;
volatile int16_t x27 = INT16_MIN;
volatile uint8_t x28 = 0U;
static volatile int64_t x30 = 1948936764LL;
volatile int32_t t7 = -2908992;
static int8_t x34 = -1;
volatile int32_t x35 = -1;
uint32_t x39 = UINT32_MAX;
int32_t x46 = -1;
int8_t x48 = -1;
int16_t x54 = 877;
int16_t x61 = 3;
uint8_t x62 = UINT8_MAX;
static int8_t x63 = INT8_MAX;
volatile int32_t x67 = -1;
volatile int32_t t16 = 789321;
volatile int32_t t17 = 4087659;
volatile int8_t x81 = INT8_MIN;
int64_t x82 = INT64_MIN;
int16_t x83 = -1;
int8_t x86 = INT8_MIN;
int16_t x90 = 377;
static volatile int64_t x91 = INT64_MIN;
int32_t x92 = -1;
static volatile int64_t x93 = -1LL;
int16_t x98 = INT16_MIN;
volatile int8_t x99 = INT8_MIN;
int32_t x102 = 529193855;
static volatile uint64_t x103 = 6268566LLU;
int16_t x105 = INT16_MIN;
int16_t x109 = -1;
int32_t x110 = INT32_MIN;
int8_t x111 = INT8_MAX;
uint8_t x117 = 21U;
int8_t x125 = 1;
int32_t t31 = 0;
uint32_t x130 = 88380U;
int8_t x132 = 7;
volatile int32_t t32 = -123308;
uint8_t x138 = UINT8_MAX;
int32_t x144 = -22025468;
uint8_t x155 = UINT8_MAX;
uint32_t x166 = 1U;
int32_t t41 = 3909;
int16_t x179 = -1;
uint16_t x180 = 0U;
int8_t x186 = INT8_MIN;
int8_t x188 = INT8_MIN;
int8_t x190 = INT8_MAX;
uint8_t x192 = 0U;
volatile int16_t x204 = 12;
volatile uint32_t x205 = 23472303U;
int32_t x206 = INT32_MAX;
static int8_t x209 = INT8_MIN;
static int32_t x215 = -7;
uint8_t x220 = 92U;
int32_t x221 = INT32_MIN;
volatile uint64_t x233 = UINT64_MAX;
volatile int64_t x238 = INT64_MIN;
volatile int32_t t59 = -7070517;
int64_t x243 = INT64_MIN;
int32_t x245 = INT32_MIN;
uint16_t x247 = 2811U;
volatile int32_t t63 = 2758;
int16_t x261 = INT16_MIN;
static int8_t x266 = -23;
static int32_t t66 = -2577;
static int16_t x272 = INT16_MAX;
int16_t x273 = -1;
volatile int32_t t68 = -46198267;
int64_t x279 = -1LL;
uint16_t x282 = 487U;
int16_t x285 = INT16_MAX;
int64_t x289 = -1LL;
uint8_t x290 = UINT8_MAX;
uint64_t x293 = 29729533288744505LLU;
uint64_t x296 = 49827110729424LLU;
volatile int8_t x298 = INT8_MIN;
uint32_t x303 = UINT32_MAX;
static uint32_t x304 = 16U;
int16_t x306 = -1;
static volatile int32_t t76 = 16168;
volatile int32_t x310 = 61;
int16_t x313 = 3631;
int16_t x314 = -396;
int8_t x318 = -1;
int16_t x320 = INT16_MAX;
static volatile int32_t t79 = -186;
int32_t t80 = 243;
static volatile int64_t x330 = INT64_MIN;
int8_t x338 = -1;
volatile int16_t x341 = 8;
volatile int64_t x344 = INT64_MAX;
int16_t x346 = -1;
volatile uint64_t x347 = 908894LLU;
static int16_t x348 = -8;
volatile int16_t x351 = INT16_MIN;
static uint32_t x353 = UINT32_MAX;
int64_t x357 = 0LL;
int16_t x358 = INT16_MAX;
static int64_t x359 = -1LL;
int32_t x360 = INT32_MIN;
uint16_t x362 = UINT16_MAX;
static int32_t t90 = -13769;
static int8_t x375 = -1;
volatile int16_t x382 = INT16_MIN;
volatile int32_t t95 = 1929;
int32_t x394 = 3673;
int8_t x399 = -1;
uint32_t x400 = UINT32_MAX;
int32_t t98 = 902411;


void f0(void) {
	volatile int16_t x1 = 1364;
	int64_t x2 = INT64_MAX;
	volatile int32_t t0 = 491;

	t0 = (((x1<=x2)+x3)<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x5 = UINT16_MAX;
	uint64_t x6 = UINT64_MAX;
	static volatile int16_t x7 = INT16_MIN;
	volatile int64_t x8 = 96411LL;
	volatile int32_t t1 = 105;

	t1 = (((x5<=x6)+x7)<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int64_t x9 = INT64_MIN;
	int32_t x10 = -1;
	volatile int8_t x11 = 1;

	t2 = (((x9<=x10)+x11)<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = -1LL;
	int16_t x14 = INT16_MIN;
	uint64_t x16 = 33835554313886LLU;
	int32_t t3 = -14;

	t3 = (((x13<=x14)+x15)<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x17 = UINT16_MAX;
	int64_t x18 = 4234619LL;
	int16_t x20 = INT16_MIN;
	static volatile int32_t t4 = 52;

	t4 = (((x17<=x18)+x19)<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int64_t x21 = INT64_MAX;
	uint16_t x22 = 15U;
	uint16_t x23 = UINT16_MAX;

	t5 = (((x21<=x22)+x23)<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x26 = 24U;
	volatile int32_t t6 = -23;

	t6 = (((x25<=x26)+x27)<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -183836;
	int64_t x31 = -96237603280831LL;
	int8_t x32 = INT8_MAX;

	t7 = (((x29<=x30)+x31)<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = 14;
	uint64_t x36 = 240929LLU;
	volatile int32_t t8 = -165852;

	t8 = (((x33<=x34)+x35)<=x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	int8_t x38 = INT8_MAX;
	int64_t x40 = -2055296LL;
	int32_t t9 = -1614019;

	t9 = (((x37<=x38)+x39)<=x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = INT16_MIN;
	uint64_t x42 = UINT64_MAX;
	int32_t x43 = INT32_MIN;
	int16_t x44 = INT16_MIN;
	int32_t t10 = 29;

	t10 = (((x41<=x42)+x43)<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	static int16_t x47 = INT16_MAX;
	int32_t t11 = 39174;

	t11 = (((x45<=x46)+x47)<=x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x49 = INT64_MAX;
	uint8_t x50 = 3U;
	int16_t x51 = 0;
	volatile int32_t x52 = INT32_MIN;
	volatile int32_t t12 = -111;

	t12 = (((x49<=x50)+x51)<=x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = UINT16_MAX;
	static int32_t x55 = 1758;
	volatile int64_t x56 = -1LL;
	volatile int32_t t13 = 12545784;

	t13 = (((x53<=x54)+x55)<=x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x57 = UINT64_MAX;
	int64_t x58 = INT64_MIN;
	int16_t x59 = -100;
	static int32_t x60 = -59;
	volatile int32_t t14 = 69519;

	t14 = (((x57<=x58)+x59)<=x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x64 = -496;
	volatile int32_t t15 = 2023423;

	t15 = (((x61<=x62)+x63)<=x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 60U;
	int16_t x66 = 27;
	uint64_t x68 = 11418828LLU;

	t16 = (((x65<=x66)+x67)<=x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x69 = 3;
	static int16_t x70 = 32;
	static int16_t x71 = INT16_MIN;
	uint8_t x72 = 5U;

	t17 = (((x69<=x70)+x71)<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x73 = -1LL;
	int16_t x74 = -1;
	static int8_t x75 = 1;
	int64_t x76 = INT64_MAX;
	static volatile int32_t t18 = -8251742;

	t18 = (((x73<=x74)+x75)<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = -122LL;
	volatile int64_t x78 = -189LL;
	static int64_t x79 = -1LL;
	static int64_t x80 = 3641123461651580LL;
	static int32_t t19 = -84352;

	t19 = (((x77<=x78)+x79)<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x84 = 56U;
	volatile int32_t t20 = -1363;

	t20 = (((x81<=x82)+x83)<=x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint64_t x85 = 9068316LLU;
	int32_t x87 = -5170;
	int8_t x88 = INT8_MIN;
	static volatile int32_t t21 = -4;

	t21 = (((x85<=x86)+x87)<=x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = -2295;
	static volatile int32_t t22 = -1009;

	t22 = (((x89<=x90)+x91)<=x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x94 = -1LL;
	static volatile uint64_t x95 = 342747LLU;
	uint8_t x96 = UINT8_MAX;
	volatile int32_t t23 = 66;

	t23 = (((x93<=x94)+x95)<=x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x97 = INT16_MIN;
	int8_t x100 = -1;
	int32_t t24 = 542917151;

	t24 = (((x97<=x98)+x99)<=x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x101 = 28394U;
	int8_t x104 = INT8_MIN;
	volatile int32_t t25 = 20152;

	t25 = (((x101<=x102)+x103)<=x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x106 = UINT64_MAX;
	int16_t x107 = INT16_MIN;
	volatile uint32_t x108 = UINT32_MAX;
	int32_t t26 = 12201897;

	t26 = (((x105<=x106)+x107)<=x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x112 = INT16_MAX;
	int32_t t27 = -1;

	t27 = (((x109<=x110)+x111)<=x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = 0;
	volatile int32_t x114 = INT32_MIN;
	int16_t x115 = 1;
	uint32_t x116 = 344542300U;
	volatile int32_t t28 = -1521890;

	t28 = (((x113<=x114)+x115)<=x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x118 = -1;
	static int16_t x119 = INT16_MIN;
	uint16_t x120 = 1U;
	int32_t t29 = 15883;

	t29 = (((x117<=x118)+x119)<=x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x121 = INT64_MAX;
	int16_t x122 = 376;
	static int32_t x123 = -53395;
	uint64_t x124 = UINT64_MAX;
	volatile int32_t t30 = -35;

	t30 = (((x121<=x122)+x123)<=x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x126 = INT8_MIN;
	volatile int8_t x127 = -1;
	volatile int16_t x128 = INT16_MIN;

	t31 = (((x125<=x126)+x127)<=x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x129 = -1094787679204371LL;
	volatile uint64_t x131 = 55LLU;

	t32 = (((x129<=x130)+x131)<=x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x133 = UINT32_MAX;
	int16_t x134 = INT16_MIN;
	static int16_t x135 = -8;
	uint16_t x136 = 5596U;
	static int32_t t33 = 229461;

	t33 = (((x133<=x134)+x135)<=x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint64_t x137 = 1431485314877LLU;
	volatile uint32_t x139 = UINT32_MAX;
	int32_t x140 = -1;
	volatile int32_t t34 = -111196665;

	t34 = (((x137<=x138)+x139)<=x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x141 = 0;
	int32_t x142 = -8;
	uint32_t x143 = UINT32_MAX;
	static int32_t t35 = -432225;

	t35 = (((x141<=x142)+x143)<=x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x145 = INT16_MIN;
	int16_t x146 = INT16_MAX;
	int64_t x147 = -1LL;
	int16_t x148 = INT16_MAX;
	static volatile int32_t t36 = -267780991;

	t36 = (((x145<=x146)+x147)<=x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MAX;
	int64_t x150 = 15764LL;
	volatile int64_t x151 = INT64_MIN;
	static int8_t x152 = -60;
	volatile int32_t t37 = 55453;

	t37 = (((x149<=x150)+x151)<=x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MAX;
	volatile uint8_t x154 = 1U;
	uint16_t x156 = 1U;
	int32_t t38 = 113022733;

	t38 = (((x153<=x154)+x155)<=x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x157 = 33;
	int8_t x158 = INT8_MAX;
	volatile int32_t x159 = -1;
	uint32_t x160 = UINT32_MAX;
	int32_t t39 = -497591981;

	t39 = (((x157<=x158)+x159)<=x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x161 = -4;
	int8_t x162 = 1;
	int16_t x163 = -1;
	volatile int32_t x164 = INT32_MIN;
	static int32_t t40 = 62238;

	t40 = (((x161<=x162)+x163)<=x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x165 = INT16_MIN;
	static uint64_t x167 = 4135683667249420LLU;
	uint16_t x168 = 11U;

	t41 = (((x165<=x166)+x167)<=x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MAX;
	int8_t x170 = 0;
	int8_t x171 = INT8_MIN;
	static int64_t x172 = INT64_MIN;
	volatile int32_t t42 = 1225237;

	t42 = (((x169<=x170)+x171)<=x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MAX;
	int64_t x174 = 220LL;
	static uint16_t x175 = UINT16_MAX;
	int32_t x176 = INT32_MIN;
	volatile int32_t t43 = 1975;

	t43 = (((x173<=x174)+x175)<=x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = -99623519425779986LL;
	int32_t x178 = INT32_MAX;
	volatile int32_t t44 = 0;

	t44 = (((x177<=x178)+x179)<=x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint16_t x181 = 15473U;
	uint16_t x182 = 13U;
	volatile int64_t x183 = -32279707LL;
	uint64_t x184 = 12324538105LLU;
	int32_t t45 = 926812;

	t45 = (((x181<=x182)+x183)<=x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x185 = -1;
	int64_t x187 = INT64_MIN;
	volatile int32_t t46 = -1872006;

	t46 = (((x185<=x186)+x187)<=x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = 645LL;
	int32_t x191 = 1199810;
	static int32_t t47 = -70932;

	t47 = (((x189<=x190)+x191)<=x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x193 = 3U;
	volatile int16_t x194 = -1;
	volatile uint16_t x195 = UINT16_MAX;
	uint8_t x196 = UINT8_MAX;
	int32_t t48 = -1;

	t48 = (((x193<=x194)+x195)<=x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint32_t x197 = UINT32_MAX;
	uint32_t x198 = 5U;
	int16_t x199 = -1;
	volatile int16_t x200 = -22;
	volatile int32_t t49 = 7569970;

	t49 = (((x197<=x198)+x199)<=x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x201 = INT64_MIN;
	static volatile int32_t x202 = -1;
	int32_t x203 = 82;
	static int32_t t50 = -122494271;

	t50 = (((x201<=x202)+x203)<=x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x207 = 1468126LLU;
	uint32_t x208 = 61845U;
	volatile int32_t t51 = 724707;

	t51 = (((x205<=x206)+x207)<=x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x210 = -1;
	uint8_t x211 = 11U;
	static uint16_t x212 = 28777U;
	volatile int32_t t52 = -8454508;

	t52 = (((x209<=x210)+x211)<=x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x213 = INT64_MIN;
	int8_t x214 = INT8_MIN;
	int64_t x216 = -1LL;
	volatile int32_t t53 = -2321;

	t53 = (((x213<=x214)+x215)<=x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = 4434302LL;
	volatile uint64_t x218 = 666LLU;
	static uint16_t x219 = 0U;
	int32_t t54 = 2754843;

	t54 = (((x217<=x218)+x219)<=x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x222 = -1;
	uint8_t x223 = 111U;
	uint32_t x224 = UINT32_MAX;
	int32_t t55 = -474354;

	t55 = (((x221<=x222)+x223)<=x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = 28301LL;
	int8_t x226 = INT8_MIN;
	int32_t x227 = INT32_MIN;
	int16_t x228 = INT16_MIN;
	int32_t t56 = 575343415;

	t56 = (((x225<=x226)+x227)<=x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = INT8_MIN;
	static volatile int16_t x230 = -1;
	int8_t x231 = -1;
	int64_t x232 = INT64_MAX;
	volatile int32_t t57 = -156694;

	t57 = (((x229<=x230)+x231)<=x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x234 = 26002U;
	static int64_t x235 = INT64_MIN;
	static int64_t x236 = -1849838976247LL;
	int32_t t58 = -78;

	t58 = (((x233<=x234)+x235)<=x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = INT8_MIN;
	static int16_t x239 = INT16_MAX;
	volatile int64_t x240 = INT64_MAX;

	t59 = (((x237<=x238)+x239)<=x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x241 = INT16_MAX;
	volatile int64_t x242 = 4458158525LL;
	volatile int64_t x244 = INT64_MIN;
	int32_t t60 = -7427;

	t60 = (((x241<=x242)+x243)<=x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x246 = UINT16_MAX;
	int64_t x248 = INT64_MAX;
	int32_t t61 = -482434614;

	t61 = (((x245<=x246)+x247)<=x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = 7U;
	volatile int16_t x250 = -1;
	int8_t x251 = -1;
	volatile int8_t x252 = INT8_MAX;
	int32_t t62 = -643;

	t62 = (((x249<=x250)+x251)<=x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x253 = INT16_MIN;
	uint64_t x254 = 320058618LLU;
	uint32_t x255 = UINT32_MAX;
	static int64_t x256 = INT64_MAX;

	t63 = (((x253<=x254)+x255)<=x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x257 = UINT16_MAX;
	volatile uint64_t x258 = 46LLU;
	int64_t x259 = 15995015622815266LL;
	volatile int32_t x260 = INT32_MIN;
	int32_t t64 = -15;

	t64 = (((x257<=x258)+x259)<=x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x262 = INT32_MIN;
	int32_t x263 = INT32_MAX;
	volatile int16_t x264 = -1;
	int32_t t65 = 1439131;

	t65 = (((x261<=x262)+x263)<=x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = 3298707742LLU;
	static uint32_t x267 = UINT32_MAX;
	int16_t x268 = INT16_MIN;

	t66 = (((x265<=x266)+x267)<=x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MIN;
	int8_t x270 = INT8_MIN;
	int16_t x271 = -1;
	volatile int32_t t67 = -1637175;

	t67 = (((x269<=x270)+x271)<=x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x274 = 1LLU;
	int16_t x275 = INT16_MIN;
	uint16_t x276 = 1941U;

	t68 = (((x273<=x274)+x275)<=x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = INT8_MAX;
	int8_t x278 = INT8_MIN;
	int64_t x280 = INT64_MAX;
	int32_t t69 = 11;

	t69 = (((x277<=x278)+x279)<=x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = -166;
	int8_t x283 = 0;
	int8_t x284 = INT8_MIN;
	volatile int32_t t70 = 87999;

	t70 = (((x281<=x282)+x283)<=x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x286 = -1;
	uint16_t x287 = UINT16_MAX;
	int16_t x288 = INT16_MIN;
	volatile int32_t t71 = -1863824;

	t71 = (((x285<=x286)+x287)<=x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x291 = -1;
	static int64_t x292 = 1080552066772LL;
	volatile int32_t t72 = -62223308;

	t72 = (((x289<=x290)+x291)<=x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x294 = 300147411468484LL;
	uint32_t x295 = 964U;
	int32_t t73 = 65055003;

	t73 = (((x293<=x294)+x295)<=x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = INT32_MIN;
	volatile int8_t x299 = INT8_MIN;
	int32_t x300 = INT32_MAX;
	volatile int32_t t74 = -224;

	t74 = (((x297<=x298)+x299)<=x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = 362123678341637LL;
	volatile int16_t x302 = -8;
	int32_t t75 = 902359;

	t75 = (((x301<=x302)+x303)<=x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = -1;
	int8_t x307 = 0;
	uint16_t x308 = 0U;

	t76 = (((x305<=x306)+x307)<=x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MAX;
	int32_t x311 = INT32_MIN;
	volatile int64_t x312 = 194406367329427LL;
	volatile int32_t t77 = 12192;

	t77 = (((x309<=x310)+x311)<=x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x315 = INT32_MIN;
	int16_t x316 = INT16_MAX;
	volatile int32_t t78 = 17068508;

	t78 = (((x313<=x314)+x315)<=x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x317 = INT32_MIN;
	int32_t x319 = -1;

	t79 = (((x317<=x318)+x319)<=x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = INT16_MIN;
	volatile int8_t x322 = -1;
	int8_t x323 = 38;
	static volatile int64_t x324 = -437929LL;

	t80 = (((x321<=x322)+x323)<=x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x325 = UINT8_MAX;
	uint8_t x326 = 14U;
	static int32_t x327 = -30587;
	volatile int32_t x328 = -1;
	volatile int32_t t81 = 30953055;

	t81 = (((x325<=x326)+x327)<=x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = -15;
	static uint16_t x331 = 2U;
	uint16_t x332 = 970U;
	volatile int32_t t82 = 48225638;

	t82 = (((x329<=x330)+x331)<=x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x337 = INT32_MIN;
	static uint16_t x339 = 0U;
	static int8_t x340 = 11;
	int32_t t83 = -63154566;

	t83 = (((x337<=x338)+x339)<=x340);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x342 = INT32_MAX;
	static volatile int64_t x343 = -1642382649LL;
	volatile int32_t t84 = 1;

	t84 = (((x341<=x342)+x343)<=x344);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x345 = INT64_MAX;
	volatile int32_t t85 = -5938;

	t85 = (((x345<=x346)+x347)<=x348);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x349 = 96;
	uint32_t x350 = 13052U;
	uint16_t x352 = 16U;
	static int32_t t86 = -1619;

	t86 = (((x349<=x350)+x351)<=x352);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x354 = 2748571LLU;
	int8_t x355 = INT8_MAX;
	static uint16_t x356 = 3U;
	int32_t t87 = -1;

	t87 = (((x353<=x354)+x355)<=x356);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t t88 = -34;

	t88 = (((x357<=x358)+x359)<=x360);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x361 = INT8_MIN;
	volatile int16_t x363 = 12;
	uint64_t x364 = UINT64_MAX;
	static int32_t t89 = 105308291;

	t89 = (((x361<=x362)+x363)<=x364);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x365 = 1;
	uint32_t x366 = UINT32_MAX;
	int8_t x367 = INT8_MIN;
	volatile uint64_t x368 = 2504150347608178885LLU;

	t90 = (((x365<=x366)+x367)<=x368);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x369 = 13;
	volatile uint64_t x370 = UINT64_MAX;
	uint32_t x371 = 55786810U;
	int8_t x372 = -1;
	int32_t t91 = -1;

	t91 = (((x369<=x370)+x371)<=x372);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x373 = 1776690;
	int16_t x374 = -3;
	volatile uint8_t x376 = UINT8_MAX;
	static int32_t t92 = 574182845;

	t92 = (((x373<=x374)+x375)<=x376);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x377 = INT8_MAX;
	int8_t x378 = -20;
	uint16_t x379 = 461U;
	uint16_t x380 = 317U;
	volatile int32_t t93 = -1;

	t93 = (((x377<=x378)+x379)<=x380);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x381 = 1004U;
	int16_t x383 = -1;
	static int8_t x384 = INT8_MAX;
	int32_t t94 = -77;

	t94 = (((x381<=x382)+x383)<=x384);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x385 = -1;
	static int8_t x386 = INT8_MAX;
	static volatile int32_t x387 = -3222;
	static uint16_t x388 = 715U;

	t95 = (((x385<=x386)+x387)<=x388);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x389 = -1;
	static int64_t x390 = -2115566LL;
	int64_t x391 = INT64_MIN;
	uint16_t x392 = 179U;
	volatile int32_t t96 = 150449;

	t96 = (((x389<=x390)+x391)<=x392);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x393 = -2052661689LL;
	int8_t x395 = INT8_MIN;
	int64_t x396 = INT64_MIN;
	volatile int32_t t97 = -532771760;

	t97 = (((x393<=x394)+x395)<=x396);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x397 = 325199U;
	uint8_t x398 = UINT8_MAX;

	t98 = (((x397<=x398)+x399)<=x400);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x401 = 3LLU;
	volatile int32_t x402 = -165276;
	int16_t x403 = -1;
	int64_t x404 = -1LL;
	int32_t t99 = 119;

	t99 = (((x401<=x402)+x403)<=x404);

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

