#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x2 = 5U;
volatile int32_t t0 = 277;
int16_t x11 = -1;
static int8_t x30 = -18;
static volatile uint16_t x32 = 1U;
static volatile int32_t x33 = INT32_MIN;
uint16_t x40 = 0U;
int64_t x41 = -1LL;
volatile uint32_t x48 = UINT32_MAX;
int16_t x49 = INT16_MIN;
uint64_t x58 = 1391548724178061LLU;
int32_t x60 = -1;
static int32_t x62 = INT32_MIN;
static uint64_t x63 = 1105616352107551335LLU;
volatile int32_t t15 = 1002;
volatile uint8_t x68 = UINT8_MAX;
int32_t x71 = -233580;
uint8_t x77 = 83U;
int16_t x80 = -1;
volatile int32_t x81 = 53889533;
uint32_t x85 = 161090U;
uint32_t x87 = 1826647366U;
int32_t x89 = INT32_MIN;
int16_t x97 = INT16_MIN;
volatile int32_t t24 = 18720;
uint32_t x103 = 40931836U;
uint8_t x109 = 24U;
static volatile uint8_t x111 = 17U;
int16_t x118 = 819;
int32_t t29 = 1985;
int32_t t30 = 974;
int32_t t33 = -567437;
int8_t x142 = 38;
volatile int32_t t36 = 23947;
int32_t t37 = 202320547;
static volatile int8_t x164 = INT8_MIN;
int32_t t40 = -14336321;
int64_t x177 = -1LL;
int32_t x179 = INT32_MIN;
static uint8_t x187 = UINT8_MAX;
uint32_t x189 = 181776U;
int8_t x191 = -1;
volatile int32_t t47 = 3350499;
int8_t x199 = INT8_MIN;
uint8_t x207 = 47U;
int32_t x217 = INT32_MIN;
int16_t x218 = -1;
int16_t x220 = INT16_MIN;
int32_t x226 = INT32_MAX;
int16_t x236 = -1;
uint16_t x240 = 27024U;
static int16_t x243 = -1;
int8_t x251 = INT8_MIN;
uint16_t x253 = 0U;
int32_t x254 = 56;
int32_t x259 = -1;
int64_t x260 = INT64_MAX;
volatile int32_t x261 = INT32_MIN;
volatile int64_t x268 = 2195635933419LL;
int64_t x270 = INT64_MIN;
volatile int32_t t67 = -6208;
int8_t x275 = INT8_MIN;
int32_t x284 = INT32_MIN;
int32_t t70 = 23267689;
int16_t x286 = INT16_MAX;
int16_t x288 = INT16_MIN;
volatile int32_t x291 = 120412763;
volatile int64_t x296 = INT64_MIN;
int16_t x305 = -2027;
uint32_t x307 = UINT32_MAX;
static int32_t x308 = -1;
int8_t x309 = INT8_MIN;
uint8_t x322 = UINT8_MAX;
static int8_t x324 = -1;
int16_t x325 = -2;
volatile int32_t t83 = -4718;
int64_t x340 = INT64_MIN;
uint32_t x348 = 1U;
int32_t x355 = -1;
int32_t t88 = -4;
int16_t x357 = -1508;
uint8_t x359 = 11U;
static int32_t t89 = 0;
static int32_t t90 = -14;
int16_t x372 = INT16_MIN;
volatile uint16_t x373 = 2U;
int16_t x374 = -1;
int8_t x381 = -1;
int32_t t98 = -14921;
int64_t x398 = INT64_MAX;


void f0(void) {
	int8_t x1 = INT8_MIN;
	uint32_t x3 = UINT32_MAX;
	uint16_t x4 = UINT16_MAX;

	t0 = (x1==((x2&x3)==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = -1LL;
	volatile int64_t x6 = INT64_MIN;
	volatile int32_t x7 = 21253;
	static int8_t x8 = INT8_MIN;
	int32_t t1 = -7497;

	t1 = (x5==((x6&x7)==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	int16_t x10 = INT16_MAX;
	uint16_t x12 = UINT16_MAX;
	int32_t t2 = -4009821;

	t2 = (x9==((x10&x11)==x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -4;
	volatile int64_t x14 = -557LL;
	uint64_t x15 = 747682905544586927LLU;
	int32_t x16 = INT32_MIN;
	volatile int32_t t3 = -138033620;

	t3 = (x13==((x14&x15)==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = INT16_MAX;
	uint16_t x18 = 188U;
	static uint64_t x19 = UINT64_MAX;
	int64_t x20 = -1LL;
	volatile int32_t t4 = -388749;

	t4 = (x17==((x18&x19)==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = 266752139802136LL;
	static int8_t x22 = INT8_MIN;
	static volatile uint8_t x23 = 1U;
	int64_t x24 = INT64_MIN;
	int32_t t5 = 1550;

	t5 = (x21==((x22&x23)==x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 2U;
	int32_t x26 = INT32_MIN;
	uint32_t x27 = UINT32_MAX;
	static int8_t x28 = INT8_MIN;
	int32_t t6 = 2;

	t6 = (x25==((x26&x27)==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint32_t x29 = 1107109U;
	volatile uint64_t x31 = 11303LLU;
	volatile int32_t t7 = -7946;

	t7 = (x29==((x30&x31)==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x34 = UINT16_MAX;
	uint64_t x35 = UINT64_MAX;
	uint32_t x36 = 4U;
	int32_t t8 = 1;

	t8 = (x33==((x34&x35)==x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -1LL;
	volatile int32_t x38 = INT32_MIN;
	int32_t x39 = INT32_MIN;
	volatile int32_t t9 = 2240413;

	t9 = (x37==((x38&x39)==x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x42 = INT8_MAX;
	uint16_t x43 = 105U;
	static int16_t x44 = -4;
	volatile int32_t t10 = -88789;

	t10 = (x41==((x42&x43)==x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -1;
	int16_t x46 = -1;
	uint8_t x47 = 103U;
	int32_t t11 = -986739829;

	t11 = (x45==((x46&x47)==x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x50 = INT16_MAX;
	uint64_t x51 = UINT64_MAX;
	int32_t x52 = -1;
	volatile int32_t t12 = -146462;

	t12 = (x49==((x50&x51)==x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = UINT16_MAX;
	volatile int16_t x54 = 34;
	static int8_t x55 = -1;
	int32_t x56 = INT32_MIN;
	volatile int32_t t13 = -557;

	t13 = (x53==((x54&x55)==x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x57 = INT64_MIN;
	uint16_t x59 = 0U;
	volatile int32_t t14 = 39884276;

	t14 = (x57==((x58&x59)==x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	uint64_t x64 = 4LLU;

	t15 = (x61==((x62&x63)==x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 0U;
	uint16_t x66 = 9U;
	volatile uint32_t x67 = 2U;
	volatile int32_t t16 = 1;

	t16 = (x65==((x66&x67)==x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = UINT16_MAX;
	int16_t x70 = 0;
	int64_t x72 = INT64_MIN;
	volatile int32_t t17 = -211322;

	t17 = (x69==((x70&x71)==x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x73 = INT8_MIN;
	static int64_t x74 = -1LL;
	int32_t x75 = INT32_MAX;
	int64_t x76 = -1LL;
	static volatile int32_t t18 = 375391;

	t18 = (x73==((x74&x75)==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint8_t x78 = 27U;
	volatile int32_t x79 = INT32_MAX;
	volatile int32_t t19 = -7799136;

	t19 = (x77==((x78&x79)==x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x82 = -1LL;
	int8_t x83 = INT8_MIN;
	uint32_t x84 = UINT32_MAX;
	volatile int32_t t20 = 405;

	t20 = (x81==((x82&x83)==x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x86 = UINT16_MAX;
	static int32_t x88 = -1;
	volatile int32_t t21 = -73106;

	t21 = (x85==((x86&x87)==x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x90 = -16728667290233LL;
	uint32_t x91 = 195927159U;
	int64_t x92 = INT64_MIN;
	static volatile int32_t t22 = -11;

	t22 = (x89==((x90&x91)==x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	uint32_t x94 = 779357U;
	static uint64_t x95 = 21030510813740LLU;
	static int16_t x96 = -1;
	volatile int32_t t23 = 15677;

	t23 = (x93==((x94&x95)==x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x98 = UINT64_MAX;
	volatile uint32_t x99 = 1940U;
	static volatile int8_t x100 = INT8_MIN;

	t24 = (x97==((x98&x99)==x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = UINT64_MAX;
	static int64_t x102 = 2734931701555759688LL;
	int8_t x104 = INT8_MAX;
	int32_t t25 = -717;

	t25 = (x101==((x102&x103)==x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = UINT64_MAX;
	int32_t x106 = INT32_MAX;
	int32_t x107 = INT32_MAX;
	volatile uint32_t x108 = 8275U;
	volatile int32_t t26 = -4;

	t26 = (x105==((x106&x107)==x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x110 = 28U;
	int64_t x112 = 3913971LL;
	volatile int32_t t27 = -22682;

	t27 = (x109==((x110&x111)==x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = -40;
	int64_t x114 = 6LL;
	volatile int64_t x115 = 6LL;
	static int64_t x116 = -1LL;
	volatile int32_t t28 = 29;

	t28 = (x113==((x114&x115)==x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x117 = 0LLU;
	uint16_t x119 = 812U;
	uint32_t x120 = 1795893U;

	t29 = (x117==((x118&x119)==x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x121 = 3U;
	int8_t x122 = 0;
	static int8_t x123 = -1;
	static int64_t x124 = INT64_MIN;

	t30 = (x121==((x122&x123)==x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = -1LL;
	int64_t x126 = -1LL;
	static int16_t x127 = INT16_MIN;
	volatile int64_t x128 = INT64_MAX;
	volatile int32_t t31 = -61;

	t31 = (x125==((x126&x127)==x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = UINT8_MAX;
	int8_t x130 = -14;
	static int32_t x131 = INT32_MAX;
	uint16_t x132 = 3881U;
	int32_t t32 = 3156645;

	t32 = (x129==((x130&x131)==x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = UINT8_MAX;
	static int8_t x134 = INT8_MAX;
	volatile int64_t x135 = INT64_MAX;
	int32_t x136 = 89472;

	t33 = (x133==((x134&x135)==x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x137 = 1262U;
	int64_t x138 = -30102398657026LL;
	int32_t x139 = INT32_MIN;
	int16_t x140 = -1;
	int32_t t34 = 901771;

	t34 = (x137==((x138&x139)==x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MIN;
	int16_t x143 = INT16_MAX;
	int64_t x144 = 25071205067197LL;
	volatile int32_t t35 = 11924857;

	t35 = (x141==((x142&x143)==x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = -1;
	static int8_t x146 = INT8_MIN;
	int32_t x147 = 86748526;
	volatile int8_t x148 = INT8_MAX;

	t36 = (x145==((x146&x147)==x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MIN;
	static uint64_t x150 = 80LLU;
	int8_t x151 = 3;
	int32_t x152 = INT32_MIN;

	t37 = (x149==((x150&x151)==x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = 62U;
	uint64_t x154 = UINT64_MAX;
	int32_t x155 = INT32_MIN;
	int64_t x156 = INT64_MIN;
	int32_t t38 = -420791248;

	t38 = (x153==((x154&x155)==x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MAX;
	volatile int32_t x158 = INT32_MIN;
	int64_t x159 = 4527809585093761225LL;
	int32_t x160 = -1;
	int32_t t39 = -82;

	t39 = (x157==((x158&x159)==x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = 1;
	uint64_t x162 = 781759LLU;
	int16_t x163 = -96;

	t40 = (x161==((x162&x163)==x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = -1;
	volatile int64_t x166 = -1LL;
	int64_t x167 = -1LL;
	static uint16_t x168 = 1U;
	int32_t t41 = 181594;

	t41 = (x165==((x166&x167)==x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = 1779;
	int8_t x170 = 1;
	uint16_t x171 = 31U;
	volatile int8_t x172 = INT8_MIN;
	volatile int32_t t42 = 76078;

	t42 = (x169==((x170&x171)==x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = -1;
	int64_t x174 = -1LL;
	volatile int32_t x175 = INT32_MIN;
	static int32_t x176 = INT32_MAX;
	static int32_t t43 = 57227;

	t43 = (x173==((x174&x175)==x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x178 = INT16_MIN;
	static uint32_t x180 = UINT32_MAX;
	volatile int32_t t44 = -312;

	t44 = (x177==((x178&x179)==x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x181 = -46;
	int32_t x182 = 624;
	int64_t x183 = INT64_MIN;
	static int64_t x184 = INT64_MIN;
	volatile int32_t t45 = 6257;

	t45 = (x181==((x182&x183)==x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x185 = INT32_MAX;
	int16_t x186 = -14245;
	static uint8_t x188 = UINT8_MAX;
	int32_t t46 = 207472;

	t46 = (x185==((x186&x187)==x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x190 = INT8_MIN;
	uint8_t x192 = UINT8_MAX;

	t47 = (x189==((x190&x191)==x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x193 = INT16_MIN;
	int32_t x194 = INT32_MAX;
	uint32_t x195 = 1U;
	static volatile int8_t x196 = -4;
	int32_t t48 = 430947955;

	t48 = (x193==((x194&x195)==x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x197 = 37289791U;
	int16_t x198 = INT16_MIN;
	volatile int32_t x200 = INT32_MIN;
	int32_t t49 = 1;

	t49 = (x197==((x198&x199)==x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MIN;
	int16_t x202 = -1;
	int8_t x203 = 1;
	int32_t x204 = INT32_MAX;
	int32_t t50 = -57286;

	t50 = (x201==((x202&x203)==x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x205 = INT64_MIN;
	static volatile int16_t x206 = INT16_MIN;
	static uint16_t x208 = 10925U;
	volatile int32_t t51 = 24151;

	t51 = (x205==((x206&x207)==x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint32_t x209 = 2U;
	volatile int32_t x210 = -33771;
	static int64_t x211 = -1LL;
	int64_t x212 = INT64_MAX;
	volatile int32_t t52 = -19504;

	t52 = (x209==((x210&x211)==x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = 46758;
	int16_t x214 = -1;
	int64_t x215 = -13254042273903718LL;
	uint16_t x216 = 8491U;
	static volatile int32_t t53 = 174;

	t53 = (x213==((x214&x215)==x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x219 = UINT8_MAX;
	int32_t t54 = -65080;

	t54 = (x217==((x218&x219)==x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = -1;
	int16_t x222 = INT16_MIN;
	uint32_t x223 = UINT32_MAX;
	int32_t x224 = INT32_MIN;
	volatile int32_t t55 = -45;

	t55 = (x221==((x222&x223)==x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x225 = 8U;
	static volatile uint16_t x227 = 19U;
	uint16_t x228 = 20897U;
	volatile int32_t t56 = -3498157;

	t56 = (x225==((x226&x227)==x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x229 = UINT16_MAX;
	uint32_t x230 = 1221U;
	volatile int64_t x231 = INT64_MAX;
	int16_t x232 = -1;
	volatile int32_t t57 = -130428;

	t57 = (x229==((x230&x231)==x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x233 = 6U;
	uint16_t x234 = 12U;
	static int8_t x235 = INT8_MIN;
	int32_t t58 = 1042557;

	t58 = (x233==((x234&x235)==x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x237 = 16742U;
	static uint32_t x238 = 1U;
	int16_t x239 = INT16_MIN;
	volatile int32_t t59 = -15;

	t59 = (x237==((x238&x239)==x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MAX;
	uint64_t x242 = 12LLU;
	int64_t x244 = INT64_MIN;
	int32_t t60 = -256039190;

	t60 = (x241==((x242&x243)==x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x245 = INT32_MAX;
	int16_t x246 = -3682;
	uint32_t x247 = 322050U;
	static int16_t x248 = INT16_MIN;
	int32_t t61 = -36695;

	t61 = (x245==((x246&x247)==x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = UINT8_MAX;
	int64_t x250 = -1LL;
	uint64_t x252 = UINT64_MAX;
	int32_t t62 = -25471;

	t62 = (x249==((x250&x251)==x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x255 = INT8_MIN;
	uint16_t x256 = UINT16_MAX;
	int32_t t63 = 49;

	t63 = (x253==((x254&x255)==x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = 936993878;
	int16_t x258 = 25;
	int32_t t64 = 0;

	t64 = (x257==((x258&x259)==x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x262 = INT64_MIN;
	int64_t x263 = INT64_MIN;
	static volatile int8_t x264 = INT8_MIN;
	static int32_t t65 = 21259;

	t65 = (x261==((x262&x263)==x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x265 = INT16_MIN;
	int16_t x266 = INT16_MAX;
	static int16_t x267 = 4;
	volatile int32_t t66 = -12938;

	t66 = (x265==((x266&x267)==x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x269 = -1LL;
	int32_t x271 = INT32_MAX;
	uint64_t x272 = 55447733010LLU;

	t67 = (x269==((x270&x271)==x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x273 = -1;
	uint64_t x274 = 3461073680796988179LLU;
	int64_t x276 = 135848184531LL;
	volatile int32_t t68 = 0;

	t68 = (x273==((x274&x275)==x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x277 = -1LL;
	uint64_t x278 = UINT64_MAX;
	static int64_t x279 = -4982701743LL;
	static volatile int8_t x280 = -7;
	volatile int32_t t69 = -44639006;

	t69 = (x277==((x278&x279)==x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = 635;
	int64_t x282 = INT64_MIN;
	int8_t x283 = -1;

	t70 = (x281==((x282&x283)==x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MIN;
	int8_t x287 = 1;
	volatile int32_t t71 = 2041;

	t71 = (x285==((x286&x287)==x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MIN;
	int64_t x290 = INT64_MIN;
	int32_t x292 = INT32_MIN;
	static volatile int32_t t72 = 789;

	t72 = (x289==((x290&x291)==x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = 1;
	int32_t x294 = INT32_MAX;
	int32_t x295 = INT32_MIN;
	volatile int32_t t73 = -360763;

	t73 = (x293==((x294&x295)==x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = INT32_MIN;
	int32_t x298 = -1;
	static int32_t x299 = 10;
	int32_t x300 = -77391;
	int32_t t74 = -1;

	t74 = (x297==((x298&x299)==x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x301 = 2U;
	int32_t x302 = -1;
	uint64_t x303 = 1343978568LLU;
	static volatile uint16_t x304 = 13714U;
	int32_t t75 = -65846036;

	t75 = (x301==((x302&x303)==x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x306 = 2114U;
	int32_t t76 = -127;

	t76 = (x305==((x306&x307)==x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x310 = -54392;
	int32_t x311 = INT32_MIN;
	static int32_t x312 = INT32_MAX;
	volatile int32_t t77 = -741741869;

	t77 = (x309==((x310&x311)==x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = -1;
	uint16_t x314 = 28U;
	uint32_t x315 = 3177675U;
	int32_t x316 = -1;
	volatile int32_t t78 = -5391725;

	t78 = (x313==((x314&x315)==x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x317 = 14U;
	volatile int8_t x318 = -1;
	int32_t x319 = INT32_MIN;
	volatile uint8_t x320 = 7U;
	volatile int32_t t79 = 20019;

	t79 = (x317==((x318&x319)==x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x321 = -1;
	int32_t x323 = -1;
	volatile int32_t t80 = -2072114;

	t80 = (x321==((x322&x323)==x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x326 = INT8_MIN;
	int32_t x327 = INT32_MIN;
	int32_t x328 = 8279750;
	volatile int32_t t81 = 8;

	t81 = (x325==((x326&x327)==x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x329 = INT64_MAX;
	static int8_t x330 = -34;
	int64_t x331 = -2870166177LL;
	volatile int32_t x332 = -1;
	int32_t t82 = 75;

	t82 = (x329==((x330&x331)==x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x333 = -1LL;
	static int8_t x334 = -1;
	int16_t x335 = -13;
	static volatile int32_t x336 = INT32_MIN;

	t83 = (x333==((x334&x335)==x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x337 = 2569103U;
	static uint64_t x338 = UINT64_MAX;
	int32_t x339 = -1;
	volatile int32_t t84 = 2709;

	t84 = (x337==((x338&x339)==x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x341 = INT16_MIN;
	int8_t x342 = INT8_MAX;
	uint64_t x343 = UINT64_MAX;
	int16_t x344 = -14;
	int32_t t85 = 18;

	t85 = (x341==((x342&x343)==x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = -1;
	int8_t x346 = 0;
	volatile int32_t x347 = INT32_MIN;
	volatile int32_t t86 = 63509;

	t86 = (x345==((x346&x347)==x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x349 = INT64_MIN;
	int16_t x350 = 1;
	int32_t x351 = INT32_MIN;
	int8_t x352 = INT8_MIN;
	int32_t t87 = 1;

	t87 = (x349==((x350&x351)==x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x353 = 0;
	int16_t x354 = INT16_MAX;
	int32_t x356 = INT32_MIN;

	t88 = (x353==((x354&x355)==x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x358 = 1785502LLU;
	int8_t x360 = INT8_MAX;

	t89 = (x357==((x358&x359)==x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x361 = 102548289LLU;
	int8_t x362 = INT8_MIN;
	int32_t x363 = INT32_MAX;
	volatile int8_t x364 = 1;

	t90 = (x361==((x362&x363)==x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x365 = 13336637U;
	static int64_t x366 = 9239314773LL;
	volatile int32_t x367 = INT32_MAX;
	static int64_t x368 = 133514725622992938LL;
	int32_t t91 = -189957247;

	t91 = (x365==((x366&x367)==x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x369 = 0U;
	volatile int8_t x370 = 0;
	int8_t x371 = INT8_MAX;
	volatile int32_t t92 = -39292647;

	t92 = (x369==((x370&x371)==x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x375 = 1796672LLU;
	uint64_t x376 = UINT64_MAX;
	int32_t t93 = 26607;

	t93 = (x373==((x374&x375)==x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int64_t x377 = INT64_MIN;
	uint8_t x378 = 14U;
	volatile int8_t x379 = INT8_MAX;
	static int32_t x380 = 60368;
	static int32_t t94 = 2;

	t94 = (x377==((x378&x379)==x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int32_t x382 = INT32_MIN;
	uint8_t x383 = 4U;
	int32_t x384 = INT32_MIN;
	int32_t t95 = 52607142;

	t95 = (x381==((x382&x383)==x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = 262;
	int32_t x386 = INT32_MIN;
	static uint16_t x387 = 232U;
	volatile int16_t x388 = 2441;
	volatile int32_t t96 = -64594;

	t96 = (x385==((x386&x387)==x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x389 = 2805843413622409LLU;
	volatile int64_t x390 = -9243127559320453LL;
	uint8_t x391 = UINT8_MAX;
	int8_t x392 = INT8_MIN;
	volatile int32_t t97 = -3484087;

	t97 = (x389==((x390&x391)==x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x393 = INT16_MIN;
	uint64_t x394 = UINT64_MAX;
	int16_t x395 = INT16_MIN;
	int32_t x396 = -2200;

	t98 = (x393==((x394&x395)==x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = INT16_MIN;
	uint8_t x399 = UINT8_MAX;
	int64_t x400 = INT64_MAX;
	volatile int32_t t99 = -97;

	t99 = (x397==((x398&x399)==x400));

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

