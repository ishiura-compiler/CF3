#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = 36283;
static uint8_t x9 = UINT8_MAX;
int16_t x18 = INT16_MIN;
uint32_t x19 = 6889544U;
int8_t x22 = INT8_MIN;
uint16_t x26 = 0U;
uint16_t x28 = UINT16_MAX;
volatile int32_t t6 = 1;
volatile int64_t x33 = INT64_MIN;
int32_t t8 = -228738;
uint64_t x54 = UINT64_MAX;
int8_t x56 = INT8_MIN;
uint16_t x61 = UINT16_MAX;
int8_t x63 = INT8_MAX;
int32_t x68 = INT32_MAX;
int32_t t16 = -2752157;
volatile uint16_t x70 = 411U;
volatile int16_t x74 = 1743;
static uint64_t x81 = UINT64_MAX;
int64_t x84 = INT64_MIN;
int32_t x94 = INT32_MAX;
uint16_t x98 = 1286U;
int32_t t24 = 31704;
int16_t x110 = INT16_MIN;
int32_t t27 = -26558;
int8_t x123 = INT8_MIN;
int16_t x128 = INT16_MIN;
int16_t x131 = INT16_MIN;
int64_t x132 = 15865911LL;
int8_t x133 = INT8_MAX;
int16_t x149 = 0;
uint8_t x151 = UINT8_MAX;
static uint16_t x153 = UINT16_MAX;
volatile int64_t x157 = INT64_MAX;
uint32_t x158 = 80780098U;
uint64_t x162 = UINT64_MAX;
uint32_t x163 = 0U;
int32_t t40 = -122371504;
int32_t x165 = INT32_MIN;
int64_t x169 = INT64_MIN;
uint32_t x175 = 1U;
volatile int16_t x179 = -1;
int64_t x180 = INT64_MIN;
int32_t t44 = 1;
volatile int16_t x181 = -1;
uint32_t x188 = UINT32_MAX;
int16_t x191 = 3;
volatile int32_t t47 = 21668;
int8_t x194 = INT8_MAX;
int64_t x197 = INT64_MIN;
int8_t x209 = INT8_MAX;
static int64_t x210 = -6LL;
static uint16_t x218 = 100U;
int32_t t54 = 96;
int32_t x224 = INT32_MAX;
volatile uint16_t x226 = 3240U;
uint32_t x228 = 60045U;
int64_t x241 = -1LL;
static uint8_t x244 = UINT8_MAX;
static volatile int64_t x250 = INT64_MIN;
int32_t t62 = -2345537;
volatile uint64_t x256 = 800865607912LLU;
int32_t x258 = INT32_MIN;
int32_t t64 = 116661345;
static volatile int64_t x261 = 18233095959208LL;
int32_t x273 = INT32_MIN;
static int32_t x276 = -1;
int8_t x279 = INT8_MIN;
volatile uint64_t x280 = 19240374545LLU;
volatile int32_t t69 = -23;
uint8_t x281 = 20U;
volatile int8_t x282 = INT8_MIN;
static volatile uint16_t x283 = 1872U;
int32_t t70 = 6092450;
uint64_t x291 = 6407LLU;
volatile int16_t x295 = INT16_MIN;
static int8_t x296 = -1;
uint16_t x297 = 55U;
int16_t x298 = INT16_MIN;
volatile int64_t x300 = INT64_MAX;
static volatile int32_t x301 = INT32_MIN;
int8_t x316 = INT8_MAX;
static uint32_t x332 = 1586949U;
int16_t x336 = INT16_MAX;
volatile int32_t t83 = -1;
volatile int32_t t85 = -362579039;
uint16_t x345 = UINT16_MAX;
volatile int32_t t86 = -20459781;
int16_t x353 = INT16_MIN;
static volatile int32_t x354 = -1;
static int32_t t88 = 2537635;
int16_t x359 = INT16_MIN;
int64_t x369 = INT64_MIN;
volatile int32_t x375 = INT32_MIN;
int32_t t94 = -518;
static volatile int64_t x383 = INT64_MIN;
int64_t x384 = -1104090439779LL;
volatile int32_t t95 = -1494;
int16_t x388 = -87;
int64_t x391 = INT64_MIN;
int32_t x392 = INT32_MIN;


void f0(void) {
	int32_t x2 = -1;
	int16_t x3 = INT16_MIN;
	int32_t x4 = INT32_MIN;
	int32_t t0 = 35869853;

	t0 = (((x1==x2)^x3)<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x5 = 0U;
	int64_t x6 = 1270LL;
	int32_t x7 = -190988;
	int8_t x8 = INT8_MAX;
	int32_t t1 = 9;

	t1 = (((x5==x6)^x7)<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = INT64_MAX;
	static uint32_t x11 = UINT32_MAX;
	int8_t x12 = 18;
	volatile int32_t t2 = 7233;

	t2 = (((x9==x10)^x11)<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	uint32_t x14 = UINT32_MAX;
	uint64_t x15 = UINT64_MAX;
	static int32_t x16 = INT32_MIN;
	volatile int32_t t3 = -16675;

	t3 = (((x13==x14)^x15)<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x17 = 27LLU;
	int16_t x20 = -8;
	volatile int32_t t4 = -7;

	t4 = (((x17==x18)^x19)<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint32_t x21 = 1266U;
	int32_t x23 = INT32_MIN;
	volatile int8_t x24 = INT8_MIN;
	volatile int32_t t5 = 1326;

	t5 = (((x21==x22)^x23)<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x25 = 5700;
	volatile uint8_t x27 = UINT8_MAX;

	t6 = (((x25==x26)^x27)<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	static int8_t x30 = INT8_MIN;
	int8_t x31 = INT8_MIN;
	volatile int16_t x32 = INT16_MIN;
	static volatile int32_t t7 = -1;

	t7 = (((x29==x30)^x31)<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x34 = INT16_MAX;
	int16_t x35 = -1;
	uint64_t x36 = 111486564LLU;

	t8 = (((x33==x34)^x35)<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 20739U;
	volatile int8_t x38 = INT8_MIN;
	static int32_t x39 = -638324;
	int64_t x40 = -45785649801091LL;
	static int32_t t9 = -16731483;

	t9 = (((x37==x38)^x39)<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MAX;
	uint16_t x42 = UINT16_MAX;
	uint32_t x43 = 1167771045U;
	volatile uint32_t x44 = UINT32_MAX;
	int32_t t10 = -196989;

	t10 = (((x41==x42)^x43)<x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	int64_t x46 = -60208663881555101LL;
	static int32_t x47 = -1;
	int32_t x48 = 15860;
	volatile int32_t t11 = 17874468;

	t11 = (((x45==x46)^x47)<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x49 = 78047128755635965LL;
	int64_t x50 = INT64_MIN;
	int64_t x51 = 35405976241277LL;
	int32_t x52 = INT32_MIN;
	volatile int32_t t12 = 61881;

	t12 = (((x49==x50)^x51)<x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x53 = 6;
	volatile uint16_t x55 = UINT16_MAX;
	int32_t t13 = -16061;

	t13 = (((x53==x54)^x55)<x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -1LL;
	int16_t x58 = INT16_MAX;
	static volatile int32_t x59 = 5304;
	int16_t x60 = INT16_MIN;
	static volatile int32_t t14 = 24;

	t14 = (((x57==x58)^x59)<x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x62 = UINT64_MAX;
	uint16_t x64 = UINT16_MAX;
	volatile int32_t t15 = -206;

	t15 = (((x61==x62)^x63)<x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 836694U;
	volatile int8_t x66 = INT8_MIN;
	int16_t x67 = -45;

	t16 = (((x65==x66)^x67)<x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MAX;
	static int64_t x71 = INT64_MAX;
	static int8_t x72 = INT8_MIN;
	volatile int32_t t17 = -729;

	t17 = (((x69==x70)^x71)<x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 450088591LLU;
	uint16_t x75 = 10U;
	int64_t x76 = INT64_MAX;
	volatile int32_t t18 = 7426078;

	t18 = (((x73==x74)^x75)<x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MAX;
	int32_t x78 = INT32_MIN;
	volatile int16_t x79 = INT16_MIN;
	int8_t x80 = 1;
	static volatile int32_t t19 = 55;

	t19 = (((x77==x78)^x79)<x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x82 = INT16_MIN;
	int16_t x83 = INT16_MAX;
	volatile int32_t t20 = -7218;

	t20 = (((x81==x82)^x83)<x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x85 = INT16_MIN;
	static int32_t x86 = INT32_MAX;
	int16_t x87 = -297;
	int16_t x88 = 392;
	int32_t t21 = -671;

	t21 = (((x85==x86)^x87)<x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x89 = 15U;
	uint16_t x90 = 2U;
	uint64_t x91 = 6332LLU;
	uint64_t x92 = 256694LLU;
	int32_t t22 = 22522068;

	t22 = (((x89==x90)^x91)<x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MIN;
	int32_t x95 = -1;
	uint64_t x96 = 34215053987LLU;
	int32_t t23 = 7625;

	t23 = (((x93==x94)^x95)<x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MAX;
	uint16_t x99 = 91U;
	int16_t x100 = -8832;

	t24 = (((x97==x98)^x99)<x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = -1;
	int16_t x102 = INT16_MIN;
	volatile int64_t x103 = 1LL;
	uint16_t x104 = 3720U;
	static int32_t t25 = 9653;

	t25 = (((x101==x102)^x103)<x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = 354LLU;
	int16_t x106 = 149;
	int8_t x107 = INT8_MAX;
	int64_t x108 = 1467689045075LL;
	volatile int32_t t26 = -14097;

	t26 = (((x105==x106)^x107)<x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x109 = INT8_MAX;
	uint8_t x111 = 39U;
	int32_t x112 = INT32_MAX;

	t27 = (((x109==x110)^x111)<x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = 0;
	uint16_t x114 = 3446U;
	int32_t x115 = INT32_MAX;
	uint8_t x116 = UINT8_MAX;
	volatile int32_t t28 = -37702019;

	t28 = (((x113==x114)^x115)<x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = 1796513692590001LL;
	int16_t x118 = INT16_MIN;
	static volatile int64_t x119 = -1LL;
	volatile uint32_t x120 = 15079280U;
	volatile int32_t t29 = 169433862;

	t29 = (((x117==x118)^x119)<x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x121 = 223886U;
	uint64_t x122 = 32500998163036404LLU;
	int16_t x124 = -1;
	static int32_t t30 = 172716707;

	t30 = (((x121==x122)^x123)<x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = 1079U;
	int16_t x126 = 2332;
	int64_t x127 = -1LL;
	int32_t t31 = 346;

	t31 = (((x125==x126)^x127)<x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = 35917;
	int64_t x130 = 194659815LL;
	volatile int32_t t32 = 8712232;

	t32 = (((x129==x130)^x131)<x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x134 = 2461293U;
	volatile uint8_t x135 = 8U;
	int16_t x136 = -1;
	static int32_t t33 = -2036;

	t33 = (((x133==x134)^x135)<x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x137 = INT64_MIN;
	int16_t x138 = INT16_MIN;
	static uint8_t x139 = 13U;
	int32_t x140 = -1;
	volatile int32_t t34 = 614349446;

	t34 = (((x137==x138)^x139)<x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x141 = -655;
	uint16_t x142 = 729U;
	uint64_t x143 = UINT64_MAX;
	int64_t x144 = -1LL;
	volatile int32_t t35 = -9820047;

	t35 = (((x141==x142)^x143)<x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x145 = INT16_MAX;
	uint8_t x146 = 14U;
	int8_t x147 = -8;
	int16_t x148 = INT16_MAX;
	volatile int32_t t36 = 113443;

	t36 = (((x145==x146)^x147)<x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x150 = 3345607LL;
	uint16_t x152 = UINT16_MAX;
	int32_t t37 = 718954;

	t37 = (((x149==x150)^x151)<x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x154 = UINT16_MAX;
	int8_t x155 = -1;
	int16_t x156 = -346;
	volatile int32_t t38 = -5272723;

	t38 = (((x153==x154)^x155)<x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x159 = 14513LLU;
	uint64_t x160 = 2218161530040704LLU;
	volatile int32_t t39 = 0;

	t39 = (((x157==x158)^x159)<x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MAX;
	volatile int16_t x164 = INT16_MAX;

	t40 = (((x161==x162)^x163)<x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x166 = 16375659444493704LL;
	volatile uint8_t x167 = 3U;
	static int16_t x168 = INT16_MIN;
	static volatile int32_t t41 = -618;

	t41 = (((x165==x166)^x167)<x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x170 = 15U;
	uint64_t x171 = 15630202417789LLU;
	int8_t x172 = 1;
	static int32_t t42 = -1;

	t42 = (((x169==x170)^x171)<x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x173 = 0U;
	int64_t x174 = -9307787LL;
	int8_t x176 = -4;
	volatile int32_t t43 = 81;

	t43 = (((x173==x174)^x175)<x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint8_t x177 = 24U;
	static volatile uint16_t x178 = 7U;

	t44 = (((x177==x178)^x179)<x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x182 = -17;
	static volatile int8_t x183 = 0;
	static int64_t x184 = INT64_MIN;
	int32_t t45 = 8;

	t45 = (((x181==x182)^x183)<x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x185 = UINT8_MAX;
	int64_t x186 = INT64_MIN;
	int16_t x187 = INT16_MIN;
	int32_t t46 = -19538207;

	t46 = (((x185==x186)^x187)<x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x189 = UINT8_MAX;
	volatile int32_t x190 = -1;
	volatile int64_t x192 = 98594536580349LL;

	t47 = (((x189==x190)^x191)<x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x193 = 13360U;
	int16_t x195 = -1;
	static volatile uint8_t x196 = UINT8_MAX;
	static int32_t t48 = -12823389;

	t48 = (((x193==x194)^x195)<x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint64_t x198 = UINT64_MAX;
	int64_t x199 = -1LL;
	static volatile int64_t x200 = INT64_MIN;
	volatile int32_t t49 = 159940;

	t49 = (((x197==x198)^x199)<x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = 101U;
	int64_t x202 = INT64_MIN;
	volatile uint64_t x203 = 2190489LLU;
	volatile int16_t x204 = -1;
	volatile int32_t t50 = -36;

	t50 = (((x201==x202)^x203)<x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = 3448LL;
	static uint64_t x206 = UINT64_MAX;
	int64_t x207 = 463LL;
	int16_t x208 = INT16_MIN;
	static volatile int32_t t51 = -761437;

	t51 = (((x205==x206)^x207)<x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x211 = INT8_MAX;
	uint16_t x212 = 4832U;
	static int32_t t52 = 4166;

	t52 = (((x209==x210)^x211)<x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = INT8_MIN;
	int64_t x214 = INT64_MIN;
	int16_t x215 = -1;
	uint8_t x216 = 6U;
	int32_t t53 = 0;

	t53 = (((x213==x214)^x215)<x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = 27;
	int8_t x219 = 1;
	int32_t x220 = 16;

	t54 = (((x217==x218)^x219)<x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = -74538704LL;
	int16_t x222 = INT16_MAX;
	int32_t x223 = -1;
	volatile int32_t t55 = -189775641;

	t55 = (((x221==x222)^x223)<x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x225 = -1;
	int32_t x227 = -1;
	volatile int32_t t56 = 6691;

	t56 = (((x225==x226)^x227)<x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = INT8_MIN;
	int64_t x230 = INT64_MIN;
	int64_t x231 = -1LL;
	int64_t x232 = -338764081919425386LL;
	static int32_t t57 = -587617;

	t57 = (((x229==x230)^x231)<x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x233 = 45LLU;
	uint64_t x234 = 110LLU;
	int32_t x235 = INT32_MAX;
	volatile uint8_t x236 = UINT8_MAX;
	int32_t t58 = -16018564;

	t58 = (((x233==x234)^x235)<x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = -1LL;
	int64_t x238 = INT64_MIN;
	static uint64_t x239 = UINT64_MAX;
	volatile int64_t x240 = -7752309LL;
	static volatile int32_t t59 = -137148053;

	t59 = (((x237==x238)^x239)<x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x242 = INT32_MIN;
	int32_t x243 = -19318;
	volatile int32_t t60 = -6620;

	t60 = (((x241==x242)^x243)<x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint16_t x245 = UINT16_MAX;
	int8_t x246 = INT8_MAX;
	int16_t x247 = -7334;
	int64_t x248 = 2056839230LL;
	volatile int32_t t61 = 31756;

	t61 = (((x245==x246)^x247)<x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x249 = 43553696LL;
	int16_t x251 = INT16_MIN;
	volatile uint16_t x252 = 36U;

	t62 = (((x249==x250)^x251)<x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x253 = UINT32_MAX;
	static int64_t x254 = -1LL;
	volatile int8_t x255 = 32;
	int32_t t63 = -1718;

	t63 = (((x253==x254)^x255)<x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x257 = 3606251155LLU;
	uint32_t x259 = 2U;
	volatile uint64_t x260 = UINT64_MAX;

	t64 = (((x257==x258)^x259)<x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x262 = 2U;
	static int32_t x263 = INT32_MIN;
	int16_t x264 = INT16_MIN;
	static volatile int32_t t65 = 98;

	t65 = (((x261==x262)^x263)<x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = 33275684LLU;
	uint64_t x266 = UINT64_MAX;
	volatile int8_t x267 = 14;
	int64_t x268 = INT64_MAX;
	int32_t t66 = 88;

	t66 = (((x265==x266)^x267)<x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x269 = 14U;
	int16_t x270 = INT16_MIN;
	static uint8_t x271 = UINT8_MAX;
	volatile int8_t x272 = -1;
	static int32_t t67 = -4278737;

	t67 = (((x269==x270)^x271)<x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x274 = INT32_MAX;
	static int32_t x275 = INT32_MIN;
	volatile int32_t t68 = -34;

	t68 = (((x273==x274)^x275)<x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x277 = -1LL;
	volatile int64_t x278 = 0LL;

	t69 = (((x277==x278)^x279)<x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x284 = INT64_MAX;

	t70 = (((x281==x282)^x283)<x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x285 = UINT64_MAX;
	uint8_t x286 = UINT8_MAX;
	static volatile uint8_t x287 = 2U;
	uint64_t x288 = UINT64_MAX;
	volatile int32_t t71 = -605730;

	t71 = (((x285==x286)^x287)<x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = -1;
	int32_t x290 = INT32_MIN;
	int32_t x292 = INT32_MIN;
	static volatile int32_t t72 = -42882;

	t72 = (((x289==x290)^x291)<x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x293 = INT32_MIN;
	static volatile int64_t x294 = INT64_MIN;
	volatile int32_t t73 = -815783;

	t73 = (((x293==x294)^x295)<x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x299 = 113071U;
	int32_t t74 = 20400;

	t74 = (((x297==x298)^x299)<x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x302 = 1U;
	uint8_t x303 = 58U;
	volatile int8_t x304 = INT8_MIN;
	volatile int32_t t75 = 0;

	t75 = (((x301==x302)^x303)<x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = INT16_MAX;
	static int32_t x306 = -1;
	int64_t x307 = 1418029LL;
	static int64_t x308 = INT64_MAX;
	static int32_t t76 = -5022695;

	t76 = (((x305==x306)^x307)<x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MAX;
	volatile uint8_t x310 = 110U;
	static uint32_t x311 = 3699U;
	static int8_t x312 = INT8_MIN;
	int32_t t77 = -25732;

	t77 = (((x309==x310)^x311)<x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = INT16_MIN;
	volatile int16_t x314 = INT16_MIN;
	volatile int32_t x315 = -1;
	volatile int32_t t78 = 3244;

	t78 = (((x313==x314)^x315)<x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = UINT32_MAX;
	uint16_t x318 = 532U;
	static int64_t x319 = INT64_MIN;
	static int8_t x320 = INT8_MIN;
	volatile int32_t t79 = 24;

	t79 = (((x317==x318)^x319)<x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x321 = INT8_MIN;
	static int32_t x322 = 79633;
	uint16_t x323 = 1042U;
	int16_t x324 = INT16_MAX;
	volatile int32_t t80 = -113456826;

	t80 = (((x321==x322)^x323)<x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = -59;
	static int32_t x326 = 312;
	int8_t x327 = -1;
	static volatile uint32_t x328 = UINT32_MAX;
	int32_t t81 = 25;

	t81 = (((x325==x326)^x327)<x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = 98480011U;
	uint32_t x330 = UINT32_MAX;
	int64_t x331 = -1LL;
	volatile int32_t t82 = -1;

	t82 = (((x329==x330)^x331)<x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x333 = 13869488230LLU;
	static int8_t x334 = INT8_MIN;
	int32_t x335 = INT32_MIN;

	t83 = (((x333==x334)^x335)<x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x337 = 16U;
	static int32_t x338 = -356248;
	volatile uint8_t x339 = 1U;
	int32_t x340 = INT32_MAX;
	static int32_t t84 = 2913;

	t84 = (((x337==x338)^x339)<x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x341 = 10142U;
	int64_t x342 = INT64_MAX;
	int8_t x343 = INT8_MIN;
	volatile uint64_t x344 = 9197545168LLU;

	t85 = (((x341==x342)^x343)<x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x346 = -1;
	int16_t x347 = INT16_MIN;
	int16_t x348 = -1;

	t86 = (((x345==x346)^x347)<x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MAX;
	uint64_t x350 = 26846839394768032LLU;
	static uint32_t x351 = UINT32_MAX;
	volatile int32_t x352 = INT32_MIN;
	static int32_t t87 = -7902;

	t87 = (((x349==x350)^x351)<x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x355 = 0U;
	volatile int8_t x356 = INT8_MIN;

	t88 = (((x353==x354)^x355)<x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = -1;
	volatile int16_t x358 = -1;
	uint32_t x360 = 104367U;
	volatile int32_t t89 = -2221;

	t89 = (((x357==x358)^x359)<x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = 1264LL;
	int64_t x362 = INT64_MIN;
	static int32_t x363 = INT32_MIN;
	volatile uint32_t x364 = 22619U;
	int32_t t90 = 15083602;

	t90 = (((x361==x362)^x363)<x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x365 = UINT32_MAX;
	int64_t x366 = INT64_MIN;
	static uint32_t x367 = UINT32_MAX;
	volatile uint16_t x368 = 6168U;
	static int32_t t91 = -810;

	t91 = (((x365==x366)^x367)<x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x370 = -195312444LL;
	int8_t x371 = INT8_MIN;
	uint16_t x372 = UINT16_MAX;
	int32_t t92 = 196;

	t92 = (((x369==x370)^x371)<x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = INT64_MAX;
	int32_t x374 = 137872311;
	int32_t x376 = INT32_MIN;
	int32_t t93 = -4;

	t93 = (((x373==x374)^x375)<x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = INT16_MAX;
	int8_t x378 = 0;
	int16_t x379 = INT16_MIN;
	volatile uint16_t x380 = 112U;

	t94 = (((x377==x378)^x379)<x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x381 = UINT32_MAX;
	int16_t x382 = INT16_MAX;

	t95 = (((x381==x382)^x383)<x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = INT32_MIN;
	int64_t x386 = 350758896LL;
	int8_t x387 = INT8_MAX;
	volatile int32_t t96 = -3;

	t96 = (((x385==x386)^x387)<x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x389 = 51U;
	uint16_t x390 = 7U;
	int32_t t97 = 945163;

	t97 = (((x389==x390)^x391)<x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int8_t x393 = INT8_MAX;
	int64_t x394 = -1LL;
	volatile uint16_t x395 = 79U;
	uint16_t x396 = 10U;
	volatile int32_t t98 = 1;

	t98 = (((x393==x394)^x395)<x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = 1U;
	int16_t x398 = INT16_MAX;
	int8_t x399 = 1;
	uint8_t x400 = 63U;
	volatile int32_t t99 = -11451851;

	t99 = (((x397==x398)^x399)<x400);

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

