#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x1 = 50;
static int32_t t1 = 3766;
int32_t x9 = INT32_MIN;
int32_t t3 = -61;
volatile int64_t x17 = INT64_MIN;
volatile int32_t x18 = INT32_MAX;
int64_t x21 = -1LL;
volatile int64_t t6 = -354832270179288487LL;
uint64_t x40 = UINT64_MAX;
int32_t t9 = -9155675;
int32_t x49 = -1;
static int32_t x56 = INT32_MAX;
static uint8_t x58 = 54U;
uint32_t x65 = UINT32_MAX;
uint32_t x66 = 0U;
volatile int32_t t14 = -121240682;
int32_t x74 = -426996;
int32_t x75 = -1;
static int64_t x78 = INT64_MAX;
volatile uint32_t x84 = UINT32_MAX;
static int16_t x85 = -1;
static volatile int16_t x86 = -1;
uint64_t x89 = UINT64_MAX;
static int16_t x99 = INT16_MAX;
static int8_t x104 = -1;
uint32_t x108 = 64875U;
volatile int64_t t24 = 148955709595LL;
int64_t x111 = INT64_MIN;
int16_t x112 = INT16_MIN;
static int32_t x114 = INT32_MAX;
static int32_t t26 = -2170;
volatile uint32_t x121 = UINT32_MAX;
static int16_t x122 = -1;
volatile uint64_t t30 = UINT64_MAX;
static volatile int16_t x133 = -1;
int32_t t31 = INT32_MIN;
static int32_t x141 = -1;
int32_t x143 = INT32_MIN;
volatile int32_t x145 = INT32_MIN;
int32_t x149 = -24386476;
static int16_t x150 = INT16_MIN;
uint8_t x155 = 1U;
volatile int32_t t38 = 14636770;
static int8_t x165 = 40;
int32_t x168 = INT32_MAX;
volatile int32_t t40 = 729;
int8_t x182 = INT8_MIN;
volatile int64_t t43 = INT64_MIN;
uint8_t x185 = UINT8_MAX;
volatile int32_t t46 = -14374;
static volatile int8_t x204 = INT8_MIN;
int32_t t47 = -240495;
uint64_t x205 = UINT64_MAX;
uint64_t x207 = 58978LLU;
int8_t x210 = INT8_MAX;
uint16_t x212 = 5072U;
volatile uint16_t x215 = 15U;
static volatile uint32_t x217 = 99293640U;
static volatile uint64_t t53 = 1618635LLU;
int16_t x230 = -31;
uint64_t x240 = UINT64_MAX;
static int16_t x241 = -2665;
uint8_t x248 = 116U;
static int16_t x253 = INT16_MAX;
static uint64_t x256 = UINT64_MAX;
volatile uint64_t t61 = 252343895633532LLU;
static uint16_t x263 = 7345U;
volatile int16_t x266 = INT16_MIN;
uint32_t x269 = 3986362U;
int16_t x274 = INT16_MIN;
int8_t x276 = INT8_MIN;
int64_t x282 = INT64_MIN;
int16_t x284 = INT16_MIN;
int32_t x291 = INT32_MAX;
int32_t t69 = -111267;
int32_t x293 = 4;
uint64_t x295 = 2024061781598LLU;
static uint64_t t70 = 887LLU;
static int32_t x299 = INT32_MIN;
uint16_t x304 = 20294U;
int32_t t72 = 3525;
volatile int64_t x306 = 565770LL;
static int64_t x307 = 220877368447497LL;
int16_t x309 = INT16_MAX;
int8_t x312 = INT8_MIN;
static volatile uint32_t t75 = 9202U;
int8_t x319 = INT8_MAX;
static volatile int32_t t77 = -1;
volatile int32_t x326 = 1189;
uint64_t t79 = 119952731LLU;
uint8_t x333 = 14U;
int32_t x334 = INT32_MIN;
int8_t x343 = INT8_MAX;
static int8_t x346 = INT8_MAX;
int32_t t83 = 690157027;
int64_t x352 = INT64_MIN;
uint64_t t86 = 31624LLU;
volatile int16_t x364 = 230;
volatile uint64_t t89 = 9LLU;
int64_t x380 = -60901074LL;
uint64_t x383 = UINT64_MAX;
uint64_t x386 = UINT64_MAX;
static int32_t x391 = INT32_MAX;
int8_t x393 = INT8_MIN;
int64_t x400 = INT64_MAX;
uint64_t t96 = 152336394491736644LLU;
uint8_t x401 = UINT8_MAX;
volatile int32_t t99 = 244573455;


void f0(void) {
	volatile int32_t x2 = -1;
	int32_t x3 = 381;
	static volatile int8_t x4 = INT8_MAX;
	int32_t t0 = 28572;

	t0 = (((x1<x2)+x3)&x4);

	if (t0 != 125) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	static uint64_t x6 = UINT64_MAX;
	int16_t x7 = -5;
	int32_t x8 = -1;

	t1 = (((x5<x6)+x7)&x8);

	if (t1 != -5) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x10 = -1;
	int16_t x11 = INT16_MIN;
	volatile uint32_t x12 = 199433308U;
	volatile uint32_t t2 = 2022761U;

	t2 = (((x9<x10)+x11)&x12);

	if (t2 != 199426048U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MAX;
	int32_t x14 = INT32_MAX;
	int32_t x15 = -1;
	int32_t x16 = 209774;

	t3 = (((x13<x14)+x15)&x16);

	if (t3 != 209774) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x19 = -50LL;
	int64_t x20 = 95590802747292190LL;
	static int64_t t4 = -2403714924LL;

	t4 = (((x17<x18)+x19)&x20);

	if (t4 != 95590802747292174LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = INT64_MAX;
	int16_t x23 = INT16_MAX;
	static int32_t x24 = 2;
	int32_t t5 = 11283;

	t5 = (((x21<x22)+x23)&x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	int8_t x26 = 6;
	static uint16_t x27 = UINT16_MAX;
	int64_t x28 = -1LL;

	t6 = (((x25<x26)+x27)&x28);

	if (t6 != 65536LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x33 = INT8_MIN;
	uint16_t x34 = UINT16_MAX;
	static int64_t x35 = -1LL;
	int8_t x36 = -1;
	volatile int64_t t7 = 8635993944255LL;

	t7 = (((x33<x34)+x35)&x36);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = INT16_MIN;
	static uint16_t x38 = 174U;
	int32_t x39 = -1;
	uint64_t t8 = 10032LLU;

	t8 = (((x37<x38)+x39)&x40);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x45 = 10U;
	int16_t x46 = INT16_MIN;
	int32_t x47 = INT32_MIN;
	int16_t x48 = 226;

	t9 = (((x45<x46)+x47)&x48);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x50 = UINT16_MAX;
	static volatile uint64_t x51 = 860851LLU;
	int8_t x52 = -16;
	volatile uint64_t t10 = 48727751262LLU;

	t10 = (((x49<x50)+x51)&x52);

	if (t10 != 860848LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x53 = -1LL;
	int32_t x54 = INT32_MAX;
	volatile uint64_t x55 = 5013877602645LLU;
	uint64_t t11 = 844676196910809LLU;

	t11 = (((x53<x54)+x55)&x56);

	if (t11 != 1650768214LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x57 = 3U;
	int32_t x59 = -1;
	volatile uint16_t x60 = 238U;
	int32_t t12 = 4551;

	t12 = (((x57<x58)+x59)&x60);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x61 = UINT32_MAX;
	volatile int64_t x62 = INT64_MIN;
	static volatile int8_t x63 = INT8_MAX;
	int16_t x64 = -10879;
	int32_t t13 = 1122;

	t13 = (((x61<x62)+x63)&x64);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x67 = UINT16_MAX;
	int32_t x68 = 706;

	t14 = (((x65<x66)+x67)&x68);

	if (t14 != 706) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x69 = UINT16_MAX;
	volatile int16_t x70 = -1;
	static uint32_t x71 = 869901U;
	uint8_t x72 = UINT8_MAX;
	static volatile uint32_t t15 = 86661945U;

	t15 = (((x69<x70)+x71)&x72);

	if (t15 != 13U) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x73 = 2861LLU;
	int16_t x76 = 12351;
	static int32_t t16 = -6612779;

	t16 = (((x73<x74)+x75)&x76);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = INT16_MIN;
	volatile int32_t x79 = -1;
	static uint8_t x80 = 55U;
	int32_t t17 = 985001130;

	t17 = (((x77<x78)+x79)&x80);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x81 = UINT8_MAX;
	volatile int16_t x82 = -1;
	uint32_t x83 = UINT32_MAX;
	static volatile uint32_t t18 = UINT32_MAX;

	t18 = (((x81<x82)+x83)&x84);

	if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x87 = INT8_MIN;
	int32_t x88 = INT32_MIN;
	static int32_t t19 = INT32_MIN;

	t19 = (((x85<x86)+x87)&x88);

	if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x90 = INT8_MIN;
	volatile int16_t x91 = -446;
	uint8_t x92 = 60U;
	volatile int32_t t20 = -6;

	t20 = (((x89<x90)+x91)&x92);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x93 = INT8_MIN;
	int32_t x94 = INT32_MIN;
	static uint8_t x95 = UINT8_MAX;
	int32_t x96 = INT32_MIN;
	volatile int32_t t21 = -5307625;

	t21 = (((x93<x94)+x95)&x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x97 = INT64_MIN;
	int64_t x98 = -1LL;
	int64_t x100 = -1LL;
	int64_t t22 = -385661295LL;

	t22 = (((x97<x98)+x99)&x100);

	if (t22 != 32768LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int32_t x101 = INT32_MIN;
	uint64_t x102 = 35393685009080501LLU;
	int32_t x103 = 1378;
	int32_t t23 = 1131628;

	t23 = (((x101<x102)+x103)&x104);

	if (t23 != 1378) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x105 = 5054420LLU;
	volatile uint16_t x106 = UINT16_MAX;
	int64_t x107 = INT64_MIN;

	t24 = (((x105<x106)+x107)&x108);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int8_t x109 = INT8_MIN;
	uint8_t x110 = 0U;
	int64_t t25 = INT64_MIN;

	t25 = (((x109<x110)+x111)&x112);

	if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x113 = INT32_MIN;
	int16_t x115 = -1;
	int8_t x116 = INT8_MAX;

	t26 = (((x113<x114)+x115)&x116);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x117 = 9;
	int64_t x118 = INT64_MIN;
	uint16_t x119 = 16181U;
	int64_t x120 = -1LL;
	static int64_t t27 = -62LL;

	t27 = (((x117<x118)+x119)&x120);

	if (t27 != 16181LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x123 = 9747936243473LLU;
	int8_t x124 = 0;
	volatile uint64_t t28 = 2312852666581LLU;

	t28 = (((x121<x122)+x123)&x124);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x125 = 19U;
	int64_t x126 = INT64_MAX;
	int8_t x127 = INT8_MIN;
	int32_t x128 = INT32_MIN;
	volatile int32_t t29 = INT32_MIN;

	t29 = (((x125<x126)+x127)&x128);

	if (t29 != INT32_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x129 = UINT16_MAX;
	uint64_t x130 = 1532LLU;
	static volatile uint64_t x131 = UINT64_MAX;
	int16_t x132 = -1;

	t30 = (((x129<x130)+x131)&x132);

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x134 = INT16_MIN;
	int32_t x135 = INT32_MIN;
	int8_t x136 = INT8_MIN;

	t31 = (((x133<x134)+x135)&x136);

	if (t31 != INT32_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x137 = 233;
	static uint16_t x138 = UINT16_MAX;
	static int32_t x139 = -1;
	int8_t x140 = INT8_MIN;
	static volatile int32_t t32 = -78;

	t32 = (((x137<x138)+x139)&x140);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x142 = -4;
	static int8_t x144 = -35;
	static int32_t t33 = INT32_MIN;

	t33 = (((x141<x142)+x143)&x144);

	if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x146 = -1;
	static volatile uint64_t x147 = 52167618LLU;
	volatile uint8_t x148 = 6U;
	static uint64_t t34 = 8190648LLU;

	t34 = (((x145<x146)+x147)&x148);

	if (t34 != 2LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x151 = UINT32_MAX;
	int32_t x152 = INT32_MIN;
	static uint32_t t35 = 114622U;

	t35 = (((x149<x150)+x151)&x152);

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x153 = 126406;
	int8_t x154 = 0;
	volatile uint8_t x156 = UINT8_MAX;
	int32_t t36 = -112156;

	t36 = (((x153<x154)+x155)&x156);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int64_t x157 = -7LL;
	int8_t x158 = 1;
	static int32_t x159 = -54;
	uint32_t x160 = 533209278U;
	uint32_t t37 = 56363756U;

	t37 = (((x157<x158)+x159)&x160);

	if (t37 != 533209226U) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x161 = 196920496529LLU;
	uint8_t x162 = 0U;
	int16_t x163 = INT16_MAX;
	int8_t x164 = INT8_MIN;

	t38 = (((x161<x162)+x163)&x164);

	if (t38 != 32640) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int64_t x166 = -175142815145573310LL;
	uint8_t x167 = UINT8_MAX;
	int32_t t39 = 32555;

	t39 = (((x165<x166)+x167)&x168);

	if (t39 != 255) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x169 = 444978470692620LL;
	static int8_t x170 = -3;
	static int8_t x171 = INT8_MAX;
	int8_t x172 = INT8_MIN;

	t40 = (((x169<x170)+x171)&x172);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x173 = 418871348;
	static volatile int64_t x174 = INT64_MAX;
	static uint8_t x175 = UINT8_MAX;
	int8_t x176 = INT8_MIN;
	volatile int32_t t41 = 41428969;

	t41 = (((x173<x174)+x175)&x176);

	if (t41 != 256) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int8_t x177 = -1;
	volatile int64_t x178 = INT64_MIN;
	static int8_t x179 = -1;
	static uint32_t x180 = 6474849U;
	uint32_t t42 = 6639799U;

	t42 = (((x177<x178)+x179)&x180);

	if (t42 != 6474849U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x181 = -1;
	int8_t x183 = INT8_MIN;
	int64_t x184 = INT64_MIN;

	t43 = (((x181<x182)+x183)&x184);

	if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x186 = 570824662322LL;
	volatile int64_t x187 = -1LL;
	volatile int32_t x188 = INT32_MAX;
	volatile int64_t t44 = -1033890332925920LL;

	t44 = (((x185<x186)+x187)&x188);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x189 = INT32_MAX;
	static int32_t x190 = -1;
	int64_t x191 = INT64_MAX;
	volatile int32_t x192 = INT32_MIN;
	int64_t t45 = -3175LL;

	t45 = (((x189<x190)+x191)&x192);

	if (t45 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x197 = 1;
	int8_t x198 = -19;
	int16_t x199 = INT16_MIN;
	int8_t x200 = -2;

	t46 = (((x197<x198)+x199)&x200);

	if (t46 != -32768) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x201 = UINT16_MAX;
	volatile int8_t x202 = INT8_MIN;
	static volatile int8_t x203 = INT8_MAX;

	t47 = (((x201<x202)+x203)&x204);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x206 = -1LL;
	int16_t x208 = 1316;
	volatile uint64_t t48 = 33577633421877LLU;

	t48 = (((x205<x206)+x207)&x208);

	if (t48 != 1056LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x209 = INT8_MAX;
	static uint8_t x211 = UINT8_MAX;
	int32_t t49 = 3166;

	t49 = (((x209<x210)+x211)&x212);

	if (t49 != 208) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int16_t x213 = INT16_MAX;
	int32_t x214 = INT32_MIN;
	uint64_t x216 = 2999010LLU;
	uint64_t t50 = 20829024780LLU;

	t50 = (((x213<x214)+x215)&x216);

	if (t50 != 2LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x218 = INT8_MIN;
	int16_t x219 = INT16_MIN;
	int32_t x220 = -1;
	int32_t t51 = -2029890;

	t51 = (((x217<x218)+x219)&x220);

	if (t51 != -32767) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x221 = INT8_MIN;
	volatile int64_t x222 = 51LL;
	int8_t x223 = -1;
	int8_t x224 = -1;
	volatile int32_t t52 = 95879;

	t52 = (((x221<x222)+x223)&x224);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x225 = -13;
	volatile int8_t x226 = -1;
	uint64_t x227 = 581LLU;
	int64_t x228 = INT64_MIN;

	t53 = (((x225<x226)+x227)&x228);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x229 = -27998553502LL;
	int8_t x231 = INT8_MAX;
	int64_t x232 = INT64_MIN;
	int64_t t54 = 2245955907241444242LL;

	t54 = (((x229<x230)+x231)&x232);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x233 = -1LL;
	uint16_t x234 = 674U;
	int64_t x235 = -1LL;
	static uint32_t x236 = 91596547U;
	int64_t t55 = 880623LL;

	t55 = (((x233<x234)+x235)&x236);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int16_t x237 = 9045;
	int16_t x238 = INT16_MAX;
	uint16_t x239 = UINT16_MAX;
	uint64_t t56 = 6369627LLU;

	t56 = (((x237<x238)+x239)&x240);

	if (t56 != 65536LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x242 = -1;
	int8_t x243 = INT8_MIN;
	int64_t x244 = 4181918LL;
	volatile int64_t t57 = -7LL;

	t57 = (((x241<x242)+x243)&x244);

	if (t57 != 4181888LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x245 = -35;
	static int64_t x246 = INT64_MIN;
	int64_t x247 = -1LL;
	int64_t t58 = -115997207LL;

	t58 = (((x245<x246)+x247)&x248);

	if (t58 != 116LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x249 = INT16_MAX;
	volatile uint32_t x250 = 71145U;
	uint16_t x251 = 13U;
	uint16_t x252 = 2761U;
	int32_t t59 = 66938;

	t59 = (((x249<x250)+x251)&x252);

	if (t59 != 8) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x254 = 2U;
	int8_t x255 = 6;
	volatile uint64_t t60 = 8435912074907LLU;

	t60 = (((x253<x254)+x255)&x256);

	if (t60 != 6LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x257 = INT32_MIN;
	uint8_t x258 = UINT8_MAX;
	int64_t x259 = -6523LL;
	uint64_t x260 = 120157389LLU;

	t61 = (((x257<x258)+x259)&x260);

	if (t61 != 120153220LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x261 = INT16_MIN;
	int8_t x262 = INT8_MIN;
	static uint32_t x264 = 468U;
	uint32_t t62 = 18U;

	t62 = (((x261<x262)+x263)&x264);

	if (t62 != 144U) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x265 = 6563U;
	static volatile uint64_t x267 = UINT64_MAX;
	volatile uint16_t x268 = 15484U;
	static uint64_t t63 = 3018276895692107LLU;

	t63 = (((x265<x266)+x267)&x268);

	if (t63 != 15484LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x270 = 47;
	volatile uint64_t x271 = 1LLU;
	volatile uint32_t x272 = 387078117U;
	uint64_t t64 = 15027937617858LLU;

	t64 = (((x269<x270)+x271)&x272);

	if (t64 != 1LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x273 = -70LL;
	int8_t x275 = INT8_MIN;
	int32_t t65 = 836;

	t65 = (((x273<x274)+x275)&x276);

	if (t65 != -128) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x277 = INT8_MIN;
	int8_t x278 = -45;
	static int16_t x279 = 12437;
	int16_t x280 = 37;
	volatile int32_t t66 = -2152;

	t66 = (((x277<x278)+x279)&x280);

	if (t66 != 4) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x281 = 15U;
	uint8_t x283 = 25U;
	int32_t t67 = 9711;

	t67 = (((x281<x282)+x283)&x284);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x285 = 314U;
	uint8_t x286 = 74U;
	static int8_t x287 = 1;
	volatile uint16_t x288 = UINT16_MAX;
	volatile int32_t t68 = -13087;

	t68 = (((x285<x286)+x287)&x288);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x289 = 15U;
	int64_t x290 = -1448348758883012309LL;
	volatile int32_t x292 = 1004;

	t69 = (((x289<x290)+x291)&x292);

	if (t69 != 1004) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x294 = 4U;
	uint16_t x296 = UINT16_MAX;

	t70 = (((x293<x294)+x295)&x296);

	if (t70 != 50782LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x297 = -521;
	int32_t x298 = INT32_MAX;
	uint32_t x300 = UINT32_MAX;
	volatile uint32_t t71 = 22U;

	t71 = (((x297<x298)+x299)&x300);

	if (t71 != 2147483649U) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x301 = 0U;
	volatile uint16_t x302 = 9U;
	int32_t x303 = 9813387;

	t72 = (((x301<x302)+x303)&x304);

	if (t72 != 3332) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x305 = INT16_MIN;
	int16_t x308 = -7161;
	static int64_t t73 = 34908781279070562LL;

	t73 = (((x305<x306)+x307)&x308);

	if (t73 != 220877368442882LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x310 = INT16_MIN;
	int32_t x311 = INT32_MIN;
	static int32_t t74 = INT32_MIN;

	t74 = (((x309<x310)+x311)&x312);

	if (t74 != INT32_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x313 = 6842486603582794725LLU;
	uint8_t x314 = UINT8_MAX;
	uint32_t x315 = 7064422U;
	uint8_t x316 = 23U;

	t75 = (((x313<x314)+x315)&x316);

	if (t75 != 6U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x317 = INT32_MIN;
	uint32_t x318 = UINT32_MAX;
	int32_t x320 = INT32_MAX;
	int32_t t76 = 1031307;

	t76 = (((x317<x318)+x319)&x320);

	if (t76 != 128) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x321 = INT16_MIN;
	uint64_t x322 = 13752658098LLU;
	uint8_t x323 = UINT8_MAX;
	static int8_t x324 = INT8_MAX;

	t77 = (((x321<x322)+x323)&x324);

	if (t77 != 127) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int32_t x325 = INT32_MAX;
	static int32_t x327 = -379938;
	int16_t x328 = -5;
	volatile int32_t t78 = -431295;

	t78 = (((x325<x326)+x327)&x328);

	if (t78 != -379942) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x329 = INT64_MAX;
	static int32_t x330 = INT32_MIN;
	uint64_t x331 = 522443942094LLU;
	volatile int16_t x332 = INT16_MAX;

	t79 = (((x329<x330)+x331)&x332);

	if (t79 != 26830LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x335 = 2U;
	int16_t x336 = 870;
	int32_t t80 = 137483;

	t80 = (((x333<x334)+x335)&x336);

	if (t80 != 2) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x337 = UINT64_MAX;
	uint32_t x338 = 557814U;
	int8_t x339 = INT8_MIN;
	uint64_t x340 = UINT64_MAX;
	volatile uint64_t t81 = 3590LLU;

	t81 = (((x337<x338)+x339)&x340);

	if (t81 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x341 = INT8_MIN;
	int64_t x342 = INT64_MAX;
	volatile uint16_t x344 = UINT16_MAX;
	volatile int32_t t82 = 27048835;

	t82 = (((x341<x342)+x343)&x344);

	if (t82 != 128) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int64_t x345 = INT64_MIN;
	uint8_t x347 = UINT8_MAX;
	uint8_t x348 = 0U;

	t83 = (((x345<x346)+x347)&x348);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x349 = 7U;
	volatile int32_t x350 = INT32_MAX;
	int8_t x351 = -1;
	int64_t t84 = 849887LL;

	t84 = (((x349<x350)+x351)&x352);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x353 = INT8_MIN;
	int32_t x354 = INT32_MIN;
	static int16_t x355 = 719;
	uint32_t x356 = 1955407U;
	volatile uint32_t t85 = 889471649U;

	t85 = (((x353<x354)+x355)&x356);

	if (t85 != 591U) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int64_t x357 = INT64_MIN;
	uint64_t x358 = 563262LLU;
	uint32_t x359 = 1027094U;
	uint64_t x360 = 12080827LLU;

	t86 = (((x357<x358)+x359)&x360);

	if (t86 != 525330LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x361 = INT8_MIN;
	volatile uint32_t x362 = UINT32_MAX;
	int64_t x363 = 49LL;
	static int64_t t87 = 19LL;

	t87 = (((x361<x362)+x363)&x364);

	if (t87 != 34LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x365 = -41460LL;
	int16_t x366 = INT16_MAX;
	uint16_t x367 = UINT16_MAX;
	volatile uint32_t x368 = UINT32_MAX;
	volatile uint32_t t88 = 3563127U;

	t88 = (((x365<x366)+x367)&x368);

	if (t88 != 65536U) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint16_t x369 = UINT16_MAX;
	static int16_t x370 = INT16_MAX;
	static uint32_t x371 = 3323864U;
	volatile uint64_t x372 = UINT64_MAX;

	t89 = (((x369<x370)+x371)&x372);

	if (t89 != 3323864LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x373 = INT16_MIN;
	int8_t x374 = INT8_MAX;
	uint8_t x375 = 59U;
	static int8_t x376 = 32;
	int32_t t90 = 202;

	t90 = (((x373<x374)+x375)&x376);

	if (t90 != 32) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x377 = 17122691693LL;
	int8_t x378 = -1;
	static uint16_t x379 = UINT16_MAX;
	int64_t t91 = 8520LL;

	t91 = (((x377<x378)+x379)&x380);

	if (t91 != 47406LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x381 = -72375LL;
	static uint64_t x382 = 66791690000LLU;
	int16_t x384 = INT16_MAX;
	volatile uint64_t t92 = 6190951903LLU;

	t92 = (((x381<x382)+x383)&x384);

	if (t92 != 32767LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x385 = -143LL;
	volatile int16_t x387 = -339;
	int16_t x388 = INT16_MAX;
	static volatile int32_t t93 = -393;

	t93 = (((x385<x386)+x387)&x388);

	if (t93 != 32430) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int32_t x389 = -1;
	volatile int16_t x390 = -1;
	uint64_t x392 = 112745110581331LLU;
	uint64_t t94 = 1313192879431914852LLU;

	t94 = (((x389<x390)+x391)&x392);

	if (t94 != 71577683LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x394 = INT64_MIN;
	static int64_t x395 = -1LL;
	uint16_t x396 = 2U;
	volatile int64_t t95 = -37509LL;

	t95 = (((x393<x394)+x395)&x396);

	if (t95 != 2LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x397 = INT8_MIN;
	static uint32_t x398 = 53245U;
	uint64_t x399 = UINT64_MAX;

	t96 = (((x397<x398)+x399)&x400);

	if (t96 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x402 = -8103;
	volatile int64_t x403 = 2701807423050746043LL;
	volatile int8_t x404 = INT8_MIN;
	static int64_t t97 = 5079876999LL;

	t97 = (((x401<x402)+x403)&x404);

	if (t97 != 2701807423050745984LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x405 = UINT32_MAX;
	uint16_t x406 = 15196U;
	int16_t x407 = -1;
	uint64_t x408 = UINT64_MAX;
	volatile uint64_t t98 = UINT64_MAX;

	t98 = (((x405<x406)+x407)&x408);

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x409 = INT64_MIN;
	uint32_t x410 = 63386U;
	int8_t x411 = INT8_MIN;
	int32_t x412 = -1;

	t99 = (((x409<x410)+x411)&x412);

	if (t99 != -127) { NG(); } else { ; }
	
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

