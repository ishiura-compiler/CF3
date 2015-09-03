#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x9 = INT8_MAX;
static uint8_t x10 = 1U;
uint64_t x25 = UINT64_MAX;
int32_t x27 = -5;
int8_t x30 = INT8_MIN;
int8_t x35 = INT8_MAX;
volatile int64_t x38 = INT64_MAX;
volatile uint32_t x47 = UINT32_MAX;
volatile int8_t x48 = -5;
volatile int32_t t11 = 14509;
int32_t x49 = -1;
volatile int16_t x50 = 0;
int32_t x51 = INT32_MIN;
int8_t x52 = -10;
int64_t x53 = -3819LL;
static int8_t x57 = -3;
uint64_t t14 = 4121882845765927751LLU;
int8_t x62 = INT8_MIN;
uint16_t x65 = UINT16_MAX;
volatile int64_t x70 = -1LL;
uint16_t x72 = 1U;
static uint32_t x77 = UINT32_MAX;
int16_t x79 = INT16_MAX;
int32_t x87 = 1;
volatile int32_t t21 = -8;
int64_t x92 = 34LL;
int64_t x95 = INT64_MIN;
uint64_t x101 = UINT64_MAX;
uint8_t x108 = 72U;
uint64_t x111 = 741409481187695LLU;
volatile int32_t t27 = 190;
uint32_t t28 = 30U;
int16_t x117 = -1;
static int32_t t29 = 972874;
int8_t x123 = INT8_MAX;
int16_t x124 = INT16_MAX;
int32_t t30 = 46;
volatile uint8_t x129 = 0U;
int32_t x133 = 14624;
static int8_t x135 = INT8_MIN;
volatile int8_t x142 = INT8_MIN;
uint64_t x143 = 1129725956097LLU;
volatile int64_t x145 = INT64_MAX;
volatile int64_t x149 = INT64_MAX;
volatile int16_t x151 = -1;
uint8_t x154 = 63U;
volatile int16_t x158 = INT16_MAX;
uint8_t x162 = 4U;
static uint16_t x167 = 3U;
static uint16_t x170 = UINT16_MAX;
uint8_t x176 = 1U;
int8_t x177 = 28;
int64_t x180 = INT64_MIN;
static int32_t x186 = -367;
int32_t t47 = -21;
uint64_t x193 = 32LLU;
static volatile int64_t x200 = -1LL;
static uint16_t x204 = 3307U;
int32_t x205 = INT32_MIN;
static int32_t x214 = 33091204;
static uint64_t x217 = UINT64_MAX;
static uint64_t x222 = 15136154838877LLU;
int8_t x224 = INT8_MIN;
int32_t t56 = -100266;
volatile int32_t t57 = 10558612;
static int16_t x234 = INT16_MAX;
uint16_t x235 = UINT16_MAX;
int8_t x241 = INT8_MAX;
volatile int32_t x258 = 1092865;
volatile int32_t x260 = INT32_MAX;
volatile int32_t t64 = -1;
int64_t x271 = INT64_MIN;
static volatile int32_t t66 = -5189;
volatile uint16_t x273 = 15366U;
static int64_t x274 = 110659LL;
volatile int32_t x276 = INT32_MIN;
int32_t t67 = -213580506;
volatile int32_t x280 = 19784;
int32_t t68 = -388111;
volatile int16_t x284 = INT16_MAX;
volatile int32_t t69 = 58;
static int32_t x289 = INT32_MAX;
uint32_t x291 = 15961U;
static uint64_t t71 = 11169427176407LLU;
int8_t x297 = INT8_MIN;
static volatile int16_t x298 = 134;
int8_t x303 = 2;
int16_t x304 = INT16_MIN;
int32_t t74 = 1;
volatile int32_t t77 = 1017636438;
uint32_t x317 = 1U;
volatile uint8_t x321 = UINT8_MAX;
uint32_t x324 = 24535727U;
volatile uint32_t t79 = 17U;
volatile int32_t t81 = 1;
int8_t x337 = INT8_MIN;
static int64_t x340 = INT64_MIN;
int8_t x344 = 60;
volatile int16_t x353 = INT16_MIN;
int32_t t85 = -5607;
uint16_t x363 = 20U;
int32_t t87 = -13;
int16_t x372 = INT16_MIN;
int32_t t90 = 17;
int32_t t91 = 1545;
static int16_t x381 = -1;
uint8_t x384 = 12U;
uint16_t x386 = UINT16_MAX;
int32_t x389 = 100200084;
int8_t x391 = -11;
int16_t x395 = INT16_MIN;
static uint32_t x403 = 5095608U;
static volatile int32_t t98 = 56403;


void f0(void) {
	int16_t x1 = -1;
	uint16_t x2 = UINT16_MAX;
	volatile int64_t x3 = INT64_MIN;
	int32_t x4 = -1;
	volatile int32_t t0 = 1133494;

	t0 = (((x1<=x2)<=x3)/x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 2400;
	int8_t x6 = INT8_MIN;
	int16_t x7 = -41;
	int32_t x8 = INT32_MIN;
	int32_t t1 = -35451;

	t1 = (((x5<=x6)<=x7)/x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x11 = UINT32_MAX;
	uint8_t x12 = 1U;
	volatile int32_t t2 = -1160728;

	t2 = (((x9<=x10)<=x11)/x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 36U;
	volatile uint32_t x14 = 658374U;
	int64_t x15 = 218558796137607236LL;
	int8_t x16 = -1;
	int32_t t3 = 200909567;

	t3 = (((x13<=x14)<=x15)/x16);

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 25U;
	volatile int16_t x18 = INT16_MIN;
	uint16_t x19 = UINT16_MAX;
	int16_t x20 = INT16_MIN;
	int32_t t4 = -3663422;

	t4 = (((x17<=x18)<=x19)/x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -321;
	uint64_t x22 = 84862141015LLU;
	int8_t x23 = 1;
	volatile int64_t x24 = -1LL;
	int64_t t5 = -531704301093LL;

	t5 = (((x21<=x22)<=x23)/x24);

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x26 = INT8_MIN;
	int64_t x28 = INT64_MIN;
	int64_t t6 = -637167564003LL;

	t6 = (((x25<=x26)<=x27)/x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	int32_t x31 = INT32_MIN;
	volatile int8_t x32 = INT8_MIN;
	int32_t t7 = -114331;

	t7 = (((x29<=x30)<=x31)/x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = INT32_MIN;
	int16_t x34 = -1;
	static int16_t x36 = -1;
	volatile int32_t t8 = 503269;

	t8 = (((x33<=x34)<=x35)/x36);

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 1219372662U;
	uint16_t x39 = 418U;
	static int16_t x40 = INT16_MAX;
	int32_t t9 = 7746246;

	t9 = (((x37<=x38)<=x39)/x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x41 = 26766U;
	uint64_t x42 = 622LLU;
	uint64_t x43 = 5140LLU;
	uint32_t x44 = 8245731U;
	volatile uint32_t t10 = 6592U;

	t10 = (((x41<=x42)<=x43)/x44);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	int64_t x46 = INT64_MAX;

	t11 = (((x45<=x46)<=x47)/x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t t12 = 490187;

	t12 = (((x49<=x50)<=x51)/x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x54 = UINT8_MAX;
	uint32_t x55 = 438U;
	static int32_t x56 = 46453388;
	volatile int32_t t13 = 899853;

	t13 = (((x53<=x54)<=x55)/x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x58 = INT8_MAX;
	int8_t x59 = INT8_MIN;
	static uint64_t x60 = UINT64_MAX;

	t14 = (((x57<=x58)<=x59)/x60);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = UINT32_MAX;
	volatile int8_t x63 = INT8_MAX;
	int32_t x64 = INT32_MIN;
	static volatile int32_t t15 = 80938;

	t15 = (((x61<=x62)<=x63)/x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x66 = 14975917LL;
	int64_t x67 = INT64_MIN;
	uint16_t x68 = 7595U;
	volatile int32_t t16 = 35343;

	t16 = (((x65<=x66)<=x67)/x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MAX;
	static int64_t x71 = -55295656LL;
	static volatile int32_t t17 = 170307757;

	t17 = (((x69<=x70)<=x71)/x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = 973;
	static volatile int16_t x74 = 1250;
	uint16_t x75 = UINT16_MAX;
	int64_t x76 = INT64_MIN;
	static int64_t t18 = 4026090LL;

	t18 = (((x73<=x74)<=x75)/x76);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x78 = INT8_MAX;
	int32_t x80 = -1;
	int32_t t19 = 460592;

	t19 = (((x77<=x78)<=x79)/x80);

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 1735U;
	uint32_t x82 = 0U;
	int64_t x83 = INT64_MAX;
	uint32_t x84 = 823950U;
	uint32_t t20 = 8738U;

	t20 = (((x81<=x82)<=x83)/x84);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x85 = -1;
	static int32_t x86 = -1895437;
	int16_t x88 = INT16_MIN;

	t21 = (((x85<=x86)<=x87)/x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = -1;
	uint32_t x90 = UINT32_MAX;
	int32_t x91 = INT32_MIN;
	int64_t t22 = -19418717915282291LL;

	t22 = (((x89<=x90)<=x91)/x92);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = 8294U;
	uint32_t x94 = UINT32_MAX;
	int8_t x96 = -1;
	int32_t t23 = -332965920;

	t23 = (((x93<=x94)<=x95)/x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = 4;
	volatile int16_t x98 = INT16_MAX;
	int16_t x99 = INT16_MIN;
	int64_t x100 = INT64_MAX;
	volatile int64_t t24 = -492701628524508LL;

	t24 = (((x97<=x98)<=x99)/x100);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x102 = 452;
	int8_t x103 = INT8_MIN;
	volatile uint32_t x104 = 15604252U;
	uint32_t t25 = 902U;

	t25 = (((x101<=x102)<=x103)/x104);

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = -1;
	int64_t x106 = -1LL;
	uint8_t x107 = 15U;
	int32_t t26 = 20;

	t26 = (((x105<=x106)<=x107)/x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = 0;
	volatile uint64_t x110 = 1LLU;
	int8_t x112 = INT8_MAX;

	t27 = (((x109<=x110)<=x111)/x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int8_t x113 = 6;
	int16_t x114 = -1;
	int8_t x115 = INT8_MIN;
	uint32_t x116 = 6U;

	t28 = (((x113<=x114)<=x115)/x116);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x118 = INT64_MIN;
	int16_t x119 = -1;
	volatile uint16_t x120 = 9352U;

	t29 = (((x117<=x118)<=x119)/x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x121 = 55U;
	static int8_t x122 = 33;

	t30 = (((x121<=x122)<=x123)/x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x125 = INT16_MIN;
	int8_t x126 = 3;
	int8_t x127 = INT8_MAX;
	volatile int16_t x128 = 14;
	int32_t t31 = 15340;

	t31 = (((x125<=x126)<=x127)/x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x130 = -1;
	int64_t x131 = INT64_MAX;
	int32_t x132 = -1;
	volatile int32_t t32 = 12476;

	t32 = (((x129<=x130)<=x131)/x132);

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x134 = UINT32_MAX;
	static volatile uint16_t x136 = UINT16_MAX;
	volatile int32_t t33 = 0;

	t33 = (((x133<=x134)<=x135)/x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = UINT32_MAX;
	static uint16_t x138 = UINT16_MAX;
	volatile int8_t x139 = INT8_MIN;
	int16_t x140 = -1;
	int32_t t34 = -342;

	t34 = (((x137<=x138)<=x139)/x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x141 = -1;
	int16_t x144 = INT16_MIN;
	volatile int32_t t35 = 120912;

	t35 = (((x141<=x142)<=x143)/x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x146 = 4U;
	uint32_t x147 = 3U;
	int32_t x148 = -1;
	int32_t t36 = -495527828;

	t36 = (((x145<=x146)<=x147)/x148);

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x150 = 55734186LLU;
	int32_t x152 = INT32_MIN;
	volatile int32_t t37 = 15;

	t37 = (((x149<=x150)<=x151)/x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = 3U;
	int32_t x155 = INT32_MAX;
	int64_t x156 = INT64_MIN;
	int64_t t38 = -226LL;

	t38 = (((x153<=x154)<=x155)/x156);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x157 = -1;
	int8_t x159 = INT8_MIN;
	uint32_t x160 = UINT32_MAX;
	uint32_t t39 = 8U;

	t39 = (((x157<=x158)<=x159)/x160);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MIN;
	volatile int64_t x163 = INT64_MAX;
	int8_t x164 = -57;
	volatile int32_t t40 = 290779216;

	t40 = (((x161<=x162)<=x163)/x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x165 = UINT32_MAX;
	int16_t x166 = -526;
	int8_t x168 = INT8_MIN;
	volatile int32_t t41 = -26346190;

	t41 = (((x165<=x166)<=x167)/x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x169 = -1;
	int32_t x171 = INT32_MIN;
	int16_t x172 = INT16_MIN;
	static int32_t t42 = -1;

	t42 = (((x169<=x170)<=x171)/x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x173 = INT8_MIN;
	int8_t x174 = INT8_MIN;
	static int8_t x175 = INT8_MAX;
	volatile int32_t t43 = -36090375;

	t43 = (((x173<=x174)<=x175)/x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x178 = INT32_MIN;
	int32_t x179 = INT32_MAX;
	volatile int64_t t44 = -9434104080LL;

	t44 = (((x177<=x178)<=x179)/x180);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x181 = INT16_MIN;
	int16_t x182 = -2;
	int32_t x183 = 11;
	uint16_t x184 = 488U;
	static volatile int32_t t45 = -235;

	t45 = (((x181<=x182)<=x183)/x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = 101060370762341795LLU;
	int16_t x187 = 242;
	uint32_t x188 = UINT32_MAX;
	uint32_t t46 = 24900359U;

	t46 = (((x185<=x186)<=x187)/x188);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x189 = 8298613;
	volatile uint32_t x190 = 3U;
	uint64_t x191 = 12133628501333197LLU;
	static volatile int16_t x192 = 3;

	t47 = (((x189<=x190)<=x191)/x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x194 = 25;
	int32_t x195 = -61798;
	static int16_t x196 = INT16_MAX;
	static volatile int32_t t48 = -92;

	t48 = (((x193<=x194)<=x195)/x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x197 = INT8_MIN;
	uint16_t x198 = UINT16_MAX;
	int64_t x199 = -1LL;
	volatile int64_t t49 = -518020LL;

	t49 = (((x197<=x198)<=x199)/x200);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MIN;
	int8_t x202 = -1;
	static int32_t x203 = INT32_MIN;
	volatile int32_t t50 = -912979232;

	t50 = (((x201<=x202)<=x203)/x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x206 = 27719U;
	volatile int64_t x207 = INT64_MIN;
	volatile int8_t x208 = INT8_MIN;
	static int32_t t51 = -9518;

	t51 = (((x205<=x206)<=x207)/x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x209 = -1;
	static volatile int16_t x210 = INT16_MAX;
	int64_t x211 = -1858226677424566631LL;
	static int32_t x212 = 44080;
	volatile int32_t t52 = 5919667;

	t52 = (((x209<=x210)<=x211)/x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = -28;
	static volatile uint64_t x215 = 27LLU;
	static int64_t x216 = -1LL;
	static int64_t t53 = -735704833704755652LL;

	t53 = (((x213<=x214)<=x215)/x216);

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x218 = 3182364744LLU;
	static int8_t x219 = 51;
	static uint8_t x220 = 1U;
	static int32_t t54 = -5785142;

	t54 = (((x217<=x218)<=x219)/x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = -1;
	uint8_t x223 = 3U;
	static volatile int32_t t55 = -57;

	t55 = (((x221<=x222)<=x223)/x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x225 = 4U;
	uint64_t x226 = 7123400655794852LLU;
	int16_t x227 = -1;
	volatile int8_t x228 = INT8_MAX;

	t56 = (((x225<=x226)<=x227)/x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x229 = 0;
	volatile uint8_t x230 = 1U;
	int32_t x231 = -30;
	int8_t x232 = -1;

	t57 = (((x229<=x230)<=x231)/x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x233 = 52U;
	int16_t x236 = -1;
	volatile int32_t t58 = -501590;

	t58 = (((x233<=x234)<=x235)/x236);

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x237 = INT8_MIN;
	volatile int32_t x238 = -14;
	static uint32_t x239 = 1336554U;
	uint64_t x240 = UINT64_MAX;
	uint64_t t59 = 2LLU;

	t59 = (((x237<=x238)<=x239)/x240);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x242 = 486U;
	static int8_t x243 = INT8_MIN;
	int32_t x244 = INT32_MIN;
	static int32_t t60 = -28950059;

	t60 = (((x241<=x242)<=x243)/x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x245 = -37;
	volatile uint32_t x246 = 441004U;
	int32_t x247 = -1;
	static int32_t x248 = INT32_MIN;
	int32_t t61 = -2;

	t61 = (((x245<=x246)<=x247)/x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x249 = -1;
	int32_t x250 = -4800920;
	volatile int16_t x251 = -90;
	static uint64_t x252 = 60436LLU;
	volatile uint64_t t62 = 20071239813LLU;

	t62 = (((x249<=x250)<=x251)/x252);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = INT16_MIN;
	volatile int16_t x254 = 4;
	uint64_t x255 = 78LLU;
	volatile uint16_t x256 = UINT16_MAX;
	volatile int32_t t63 = 16340505;

	t63 = (((x253<=x254)<=x255)/x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x257 = UINT8_MAX;
	int32_t x259 = -1;

	t64 = (((x257<=x258)<=x259)/x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x265 = 440006500U;
	volatile uint64_t x266 = 10LLU;
	volatile int32_t x267 = INT32_MAX;
	static uint64_t x268 = UINT64_MAX;
	volatile uint64_t t65 = 712883581983786584LLU;

	t65 = (((x265<=x266)<=x267)/x268);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x269 = 1;
	uint8_t x270 = 32U;
	int16_t x272 = -1;

	t66 = (((x269<=x270)<=x271)/x272);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x275 = INT16_MIN;

	t67 = (((x273<=x274)<=x275)/x276);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x277 = INT16_MIN;
	uint32_t x278 = UINT32_MAX;
	int8_t x279 = 30;

	t68 = (((x277<=x278)<=x279)/x280);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x281 = UINT64_MAX;
	static int16_t x282 = INT16_MAX;
	int64_t x283 = 1448435227LL;

	t69 = (((x281<=x282)<=x283)/x284);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x285 = UINT16_MAX;
	int64_t x286 = 2334712318LL;
	int16_t x287 = INT16_MAX;
	volatile int16_t x288 = INT16_MAX;
	int32_t t70 = 0;

	t70 = (((x285<=x286)<=x287)/x288);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x290 = -2236;
	uint64_t x292 = 483LLU;

	t71 = (((x289<=x290)<=x291)/x292);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x293 = UINT64_MAX;
	int64_t x294 = INT64_MIN;
	static int8_t x295 = -1;
	int16_t x296 = -575;
	int32_t t72 = 477451;

	t72 = (((x293<=x294)<=x295)/x296);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x299 = 22269618439469LL;
	static int8_t x300 = -1;
	int32_t t73 = -15115;

	t73 = (((x297<=x298)<=x299)/x300);

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x301 = INT32_MIN;
	int32_t x302 = INT32_MIN;

	t74 = (((x301<=x302)<=x303)/x304);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x305 = -1LL;
	volatile int32_t x306 = INT32_MIN;
	int32_t x307 = INT32_MIN;
	int64_t x308 = INT64_MIN;
	volatile int64_t t75 = 6035LL;

	t75 = (((x305<=x306)<=x307)/x308);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x309 = 531;
	int16_t x310 = -7960;
	int32_t x311 = INT32_MIN;
	volatile int8_t x312 = INT8_MIN;
	volatile int32_t t76 = -75167035;

	t76 = (((x309<=x310)<=x311)/x312);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x313 = 3756U;
	int32_t x314 = INT32_MIN;
	int64_t x315 = INT64_MAX;
	int8_t x316 = -1;

	t77 = (((x313<=x314)<=x315)/x316);

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x318 = -1LL;
	int32_t x319 = INT32_MAX;
	int8_t x320 = 12;
	volatile int32_t t78 = 65028822;

	t78 = (((x317<=x318)<=x319)/x320);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x322 = 56U;
	int64_t x323 = 1960215LL;

	t79 = (((x321<=x322)<=x323)/x324);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x325 = UINT32_MAX;
	int64_t x326 = 359043587568LL;
	uint8_t x327 = UINT8_MAX;
	int32_t x328 = 8;
	static volatile int32_t t80 = 12161786;

	t80 = (((x325<=x326)<=x327)/x328);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x329 = -15;
	static int64_t x330 = INT64_MIN;
	uint64_t x331 = UINT64_MAX;
	static int8_t x332 = INT8_MIN;

	t81 = (((x329<=x330)<=x331)/x332);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x333 = 0U;
	volatile int32_t x334 = -357780;
	int32_t x335 = INT32_MIN;
	volatile int16_t x336 = -5807;
	volatile int32_t t82 = -28234;

	t82 = (((x333<=x334)<=x335)/x336);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x338 = INT16_MIN;
	int32_t x339 = INT32_MIN;
	static volatile int64_t t83 = 1LL;

	t83 = (((x337<=x338)<=x339)/x340);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x341 = INT32_MAX;
	int16_t x342 = INT16_MIN;
	int16_t x343 = -1;
	int32_t t84 = -15917712;

	t84 = (((x341<=x342)<=x343)/x344);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x354 = 19LLU;
	volatile uint8_t x355 = 92U;
	int16_t x356 = INT16_MIN;

	t85 = (((x353<=x354)<=x355)/x356);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x357 = INT16_MIN;
	int16_t x358 = INT16_MAX;
	int16_t x359 = -1;
	int64_t x360 = INT64_MIN;
	volatile int64_t t86 = -55167757429984LL;

	t86 = (((x357<=x358)<=x359)/x360);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x361 = INT32_MIN;
	int64_t x362 = -1LL;
	uint8_t x364 = 1U;

	t87 = (((x361<=x362)<=x363)/x364);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x365 = -8;
	uint8_t x366 = 17U;
	volatile int32_t x367 = INT32_MIN;
	uint16_t x368 = 24U;
	int32_t t88 = 1012;

	t88 = (((x365<=x366)<=x367)/x368);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x369 = 7U;
	static int64_t x370 = 0LL;
	int32_t x371 = -82;
	static volatile int32_t t89 = -77;

	t89 = (((x369<=x370)<=x371)/x372);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x373 = -102585;
	static uint16_t x374 = 282U;
	int8_t x375 = INT8_MIN;
	static int32_t x376 = INT32_MIN;

	t90 = (((x373<=x374)<=x375)/x376);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x377 = 4339LL;
	int32_t x378 = INT32_MIN;
	uint64_t x379 = 3865355LLU;
	uint8_t x380 = 14U;

	t91 = (((x377<=x378)<=x379)/x380);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x382 = INT64_MIN;
	int32_t x383 = -1;
	static int32_t t92 = 1;

	t92 = (((x381<=x382)<=x383)/x384);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x385 = INT16_MIN;
	static int8_t x387 = INT8_MIN;
	volatile uint16_t x388 = 11902U;
	static volatile int32_t t93 = 5564255;

	t93 = (((x385<=x386)<=x387)/x388);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x390 = 24;
	uint16_t x392 = 162U;
	int32_t t94 = -1472;

	t94 = (((x389<=x390)<=x391)/x392);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x393 = INT8_MAX;
	static int16_t x394 = INT16_MIN;
	static int64_t x396 = INT64_MIN;
	int64_t t95 = 385331776180LL;

	t95 = (((x393<=x394)<=x395)/x396);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x397 = INT32_MIN;
	volatile int8_t x398 = 31;
	static int64_t x399 = INT64_MIN;
	static volatile int64_t x400 = -642293210638337LL;
	volatile int64_t t96 = -1LL;

	t96 = (((x397<=x398)<=x399)/x400);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x401 = 102990682LL;
	uint32_t x402 = 1445U;
	volatile int64_t x404 = INT64_MIN;
	int64_t t97 = -15454LL;

	t97 = (((x401<=x402)<=x403)/x404);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x405 = UINT32_MAX;
	int8_t x406 = -1;
	uint16_t x407 = 4785U;
	int32_t x408 = INT32_MIN;

	t98 = (((x405<=x406)<=x407)/x408);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x417 = -1;
	int16_t x418 = -301;
	static int32_t x419 = 3;
	static uint32_t x420 = 5U;
	uint32_t t99 = 25503U;

	t99 = (((x417<=x418)<=x419)/x420);

	if (t99 != 0U) { NG(); } else { ; }
	
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

