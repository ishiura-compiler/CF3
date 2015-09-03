#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x20 = 56U;
int32_t x32 = -57;
volatile uint16_t x35 = 1693U;
int8_t x36 = -2;
uint64_t x38 = UINT64_MAX;
volatile int8_t x50 = -1;
volatile int16_t x53 = INT16_MIN;
volatile int32_t t15 = -1442254;
int64_t x71 = INT64_MIN;
volatile int32_t t16 = 1;
int32_t x77 = -1;
int16_t x83 = INT16_MAX;
uint16_t x90 = 3U;
int8_t x95 = INT8_MAX;
volatile int32_t x108 = -1;
int32_t t25 = -389;
int8_t x111 = -25;
volatile int32_t t27 = -114990;
int32_t t28 = 0;
uint16_t x125 = 1U;
uint8_t x148 = 68U;
uint32_t x151 = 119723941U;
static volatile uint64_t t36 = 3714892LLU;
volatile uint16_t x156 = 682U;
static int64_t x157 = -1LL;
static int64_t t38 = 6172LL;
volatile uint32_t t41 = 34U;
int8_t x173 = -1;
volatile uint64_t x174 = UINT64_MAX;
volatile uint32_t x186 = UINT32_MAX;
uint8_t x188 = UINT8_MAX;
int16_t x195 = -1;
int16_t x201 = 1;
volatile int32_t t49 = -904097;
int64_t x205 = INT64_MIN;
static int32_t x209 = -1;
int16_t x213 = 2071;
volatile int8_t x215 = -1;
int64_t x216 = -1LL;
uint64_t x230 = 67LLU;
volatile int32_t t56 = -15150290;
uint16_t x233 = 118U;
int16_t x239 = INT16_MAX;
uint16_t x241 = 1369U;
int8_t x245 = INT8_MAX;
uint16_t x251 = 403U;
int16_t x258 = INT16_MIN;
int8_t x259 = 3;
int32_t x260 = 338007;
volatile int32_t t63 = 89848;
volatile int8_t x264 = INT8_MAX;
static uint32_t x266 = UINT32_MAX;
int32_t x267 = INT32_MIN;
uint8_t x270 = 0U;
static int16_t x273 = INT16_MAX;
static volatile int32_t x277 = INT32_MIN;
int32_t x280 = INT32_MIN;
uint8_t x285 = 31U;
int64_t x298 = INT64_MIN;
uint32_t x306 = 119U;
uint8_t x310 = 26U;
volatile int32_t x312 = -1;
int32_t x320 = -422844420;
int32_t t82 = 207580;
uint8_t x337 = 69U;
volatile uint16_t x338 = UINT16_MAX;
int8_t x343 = -4;
int64_t x344 = -3231800377922442LL;
static volatile int32_t t87 = -3761;
uint16_t x364 = 121U;
int16_t x372 = -39;
volatile int32_t t90 = 42445;
uint32_t x383 = 199917U;
int64_t x385 = INT64_MIN;
uint8_t x387 = UINT8_MAX;
static uint32_t x395 = 165324889U;
volatile int32_t t96 = -2;
volatile int16_t x404 = INT16_MIN;
int32_t x408 = INT32_MIN;


void f0(void) {
	int16_t x1 = -1;
	uint8_t x2 = UINT8_MAX;
	int64_t x3 = INT64_MIN;
	uint8_t x4 = 3U;
	int32_t t0 = 0;

	t0 = (((x1<x2)==x3)/x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = INT8_MIN;
	int64_t x6 = INT64_MIN;
	static int16_t x7 = INT16_MAX;
	static int64_t x8 = -724860163260955397LL;
	volatile int64_t t1 = -775887436LL;

	t1 = (((x5<x6)==x7)/x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = 87158535LL;
	int64_t x10 = INT64_MIN;
	int64_t x11 = INT64_MAX;
	static int64_t x12 = INT64_MIN;
	int64_t t2 = -12391735103LL;

	t2 = (((x9<x10)==x11)/x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	uint32_t x14 = 364720U;
	int16_t x15 = INT16_MAX;
	int64_t x16 = -1157601864742577158LL;
	int64_t t3 = -567020085707759LL;

	t3 = (((x13<x14)==x15)/x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = -3;
	volatile uint64_t x18 = UINT64_MAX;
	int64_t x19 = INT64_MAX;
	uint32_t t4 = 47429724U;

	t4 = (((x17<x18)==x19)/x20);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	volatile int8_t x22 = 8;
	uint8_t x23 = 14U;
	int32_t x24 = INT32_MIN;
	volatile int32_t t5 = 525832;

	t5 = (((x21<x22)==x23)/x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = INT16_MIN;
	int64_t x26 = -1LL;
	uint64_t x27 = UINT64_MAX;
	int16_t x28 = -1;
	int32_t t6 = 165210;

	t6 = (((x25<x26)==x27)/x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x29 = 1149392436U;
	int16_t x30 = -6;
	uint32_t x31 = 267702891U;
	static volatile int32_t t7 = 177868;

	t7 = (((x29<x30)==x31)/x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	volatile int32_t x34 = INT32_MAX;
	volatile int32_t t8 = -6688;

	t8 = (((x33<x34)==x35)/x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -1;
	int8_t x39 = INT8_MIN;
	volatile int64_t x40 = INT64_MIN;
	volatile int64_t t9 = 1201387256660997255LL;

	t9 = (((x37<x38)==x39)/x40);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MAX;
	int8_t x42 = -1;
	volatile uint16_t x43 = 1U;
	int64_t x44 = INT64_MAX;
	int64_t t10 = 425165572824413LL;

	t10 = (((x41<x42)==x43)/x44);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -1LL;
	volatile int8_t x46 = INT8_MIN;
	static int16_t x47 = -769;
	int8_t x48 = INT8_MIN;
	volatile int32_t t11 = 21844;

	t11 = (((x45<x46)==x47)/x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = 1;
	static int64_t x51 = -1LL;
	int64_t x52 = 185241693766019LL;
	volatile int64_t t12 = 4LL;

	t12 = (((x49<x50)==x51)/x52);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x54 = -4;
	int16_t x55 = INT16_MIN;
	volatile uint16_t x56 = 7U;
	int32_t t13 = 105258777;

	t13 = (((x53<x54)==x55)/x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x57 = -1;
	int8_t x58 = INT8_MIN;
	int64_t x59 = INT64_MIN;
	int32_t x60 = 8049893;
	static int32_t t14 = 1622413;

	t14 = (((x57<x58)==x59)/x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = -88235;
	int64_t x66 = INT64_MIN;
	static int32_t x67 = INT32_MIN;
	static int16_t x68 = -1;

	t15 = (((x65<x66)==x67)/x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x69 = -50333LL;
	int16_t x70 = INT16_MIN;
	static int32_t x72 = INT32_MIN;

	t16 = (((x69<x70)==x71)/x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = INT8_MIN;
	static int64_t x74 = -1LL;
	static int32_t x75 = INT32_MIN;
	uint8_t x76 = UINT8_MAX;
	int32_t t17 = 5493;

	t17 = (((x73<x74)==x75)/x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x78 = -35;
	int64_t x79 = INT64_MIN;
	static volatile int64_t x80 = -13151LL;
	volatile int64_t t18 = 82372612761374458LL;

	t18 = (((x77<x78)==x79)/x80);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x81 = INT64_MIN;
	int64_t x82 = 33LL;
	uint8_t x84 = 1U;
	int32_t t19 = -39;

	t19 = (((x81<x82)==x83)/x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = INT64_MIN;
	int64_t x86 = -1LL;
	int64_t x87 = -1654049817LL;
	uint32_t x88 = 405U;
	volatile uint32_t t20 = 39794U;

	t20 = (((x85<x86)==x87)/x88);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = INT16_MIN;
	int8_t x91 = -48;
	static int64_t x92 = INT64_MAX;
	int64_t t21 = -757778516334007743LL;

	t21 = (((x89<x90)==x91)/x92);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x93 = -103LL;
	int8_t x94 = INT8_MIN;
	uint16_t x96 = 65U;
	int32_t t22 = 22;

	t22 = (((x93<x94)==x95)/x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x97 = -1;
	static volatile uint16_t x98 = 1U;
	int8_t x99 = 14;
	int64_t x100 = 5786LL;
	volatile int64_t t23 = 169123LL;

	t23 = (((x97<x98)==x99)/x100);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x101 = 3U;
	int16_t x102 = INT16_MIN;
	volatile int8_t x103 = 0;
	int32_t x104 = -1;
	volatile int32_t t24 = 756;

	t24 = (((x101<x102)==x103)/x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x105 = UINT32_MAX;
	int8_t x106 = 41;
	volatile int32_t x107 = INT32_MIN;

	t25 = (((x105<x106)==x107)/x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x109 = INT16_MIN;
	int32_t x110 = INT32_MIN;
	static int16_t x112 = INT16_MIN;
	int32_t t26 = 35;

	t26 = (((x109<x110)==x111)/x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int16_t x113 = -1;
	int32_t x114 = -1;
	volatile int64_t x115 = INT64_MAX;
	uint16_t x116 = 3U;

	t27 = (((x113<x114)==x115)/x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x117 = 0U;
	uint32_t x118 = 0U;
	int64_t x119 = INT64_MIN;
	static int32_t x120 = INT32_MAX;

	t28 = (((x117<x118)==x119)/x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x121 = UINT32_MAX;
	volatile int8_t x122 = INT8_MAX;
	int16_t x123 = INT16_MIN;
	static int32_t x124 = 16247;
	int32_t t29 = 31417804;

	t29 = (((x121<x122)==x123)/x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x126 = UINT32_MAX;
	int64_t x127 = INT64_MAX;
	static int8_t x128 = INT8_MIN;
	int32_t t30 = -1;

	t30 = (((x125<x126)==x127)/x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x129 = -1;
	int32_t x130 = INT32_MAX;
	uint16_t x131 = 1202U;
	int16_t x132 = -1;
	int32_t t31 = 4;

	t31 = (((x129<x130)==x131)/x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x133 = -1;
	int64_t x134 = 236414314LL;
	uint8_t x135 = 59U;
	int8_t x136 = INT8_MIN;
	volatile int32_t t32 = 3793;

	t32 = (((x133<x134)==x135)/x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int64_t x137 = INT64_MIN;
	static int32_t x138 = -1;
	static int64_t x139 = -8516007166LL;
	int64_t x140 = INT64_MAX;
	volatile int64_t t33 = 4568780416LL;

	t33 = (((x137<x138)==x139)/x140);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x141 = INT64_MIN;
	int64_t x142 = 170LL;
	int64_t x143 = 2293467234150LL;
	volatile uint64_t x144 = 1642341923190LLU;
	uint64_t t34 = 5LLU;

	t34 = (((x141<x142)==x143)/x144);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x145 = 45020820494156LLU;
	static int64_t x146 = -1LL;
	int64_t x147 = INT64_MIN;
	volatile int32_t t35 = -138;

	t35 = (((x145<x146)==x147)/x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x149 = 4;
	uint32_t x150 = 382U;
	uint64_t x152 = 7967394104178886LLU;

	t36 = (((x149<x150)==x151)/x152);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x153 = 3308U;
	uint64_t x154 = UINT64_MAX;
	int32_t x155 = -1;
	volatile int32_t t37 = 353484667;

	t37 = (((x153<x154)==x155)/x156);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x158 = 426LLU;
	volatile uint64_t x159 = 1308749160LLU;
	volatile int64_t x160 = INT64_MIN;

	t38 = (((x157<x158)==x159)/x160);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x161 = INT8_MIN;
	volatile int64_t x162 = -1LL;
	int64_t x163 = 3788781LL;
	volatile int8_t x164 = INT8_MIN;
	volatile int32_t t39 = -3649;

	t39 = (((x161<x162)==x163)/x164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x165 = 43630371;
	uint64_t x166 = UINT64_MAX;
	int64_t x167 = -1LL;
	volatile int8_t x168 = INT8_MAX;
	static int32_t t40 = 19826;

	t40 = (((x165<x166)==x167)/x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x169 = -1452;
	uint32_t x170 = UINT32_MAX;
	uint8_t x171 = 0U;
	uint32_t x172 = 972028968U;

	t41 = (((x169<x170)==x171)/x172);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x175 = 5;
	int32_t x176 = INT32_MIN;
	static volatile int32_t t42 = -1758;

	t42 = (((x173<x174)==x175)/x176);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x177 = -1LL;
	static int8_t x178 = INT8_MAX;
	int64_t x179 = INT64_MIN;
	int8_t x180 = INT8_MIN;
	static int32_t t43 = -26516;

	t43 = (((x177<x178)==x179)/x180);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x181 = 10418115LL;
	static volatile int64_t x182 = 8515139750978708LL;
	int64_t x183 = -4565255613653004900LL;
	volatile uint32_t x184 = UINT32_MAX;
	volatile uint32_t t44 = 925U;

	t44 = (((x181<x182)==x183)/x184);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x185 = INT16_MAX;
	uint16_t x187 = 3U;
	int32_t t45 = -139;

	t45 = (((x185<x186)==x187)/x188);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x189 = -14117;
	uint32_t x190 = 11U;
	volatile int32_t x191 = INT32_MIN;
	uint32_t x192 = 37U;
	volatile uint32_t t46 = 854354570U;

	t46 = (((x189<x190)==x191)/x192);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x193 = INT8_MIN;
	int8_t x194 = INT8_MAX;
	int8_t x196 = INT8_MIN;
	int32_t t47 = -3;

	t47 = (((x193<x194)==x195)/x196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x197 = INT64_MIN;
	volatile int32_t x198 = INT32_MIN;
	int16_t x199 = INT16_MIN;
	int16_t x200 = 10796;
	volatile int32_t t48 = 19;

	t48 = (((x197<x198)==x199)/x200);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x202 = 22264361U;
	static int64_t x203 = INT64_MIN;
	volatile int16_t x204 = INT16_MIN;

	t49 = (((x201<x202)==x203)/x204);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x206 = -1LL;
	volatile int64_t x207 = -1LL;
	volatile int32_t x208 = INT32_MIN;
	volatile int32_t t50 = -2;

	t50 = (((x205<x206)==x207)/x208);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x210 = 1773;
	int64_t x211 = INT64_MIN;
	int16_t x212 = -1;
	int32_t t51 = -25;

	t51 = (((x209<x210)==x211)/x212);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x214 = -8;
	int64_t t52 = 19685LL;

	t52 = (((x213<x214)==x215)/x216);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x217 = INT8_MIN;
	int8_t x218 = -1;
	static int8_t x219 = INT8_MIN;
	int16_t x220 = INT16_MIN;
	int32_t t53 = 19;

	t53 = (((x217<x218)==x219)/x220);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x221 = 4482786588LLU;
	int32_t x222 = -1;
	volatile int32_t x223 = INT32_MIN;
	int8_t x224 = -1;
	int32_t t54 = 1640;

	t54 = (((x221<x222)==x223)/x224);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x225 = 1U;
	static int32_t x226 = INT32_MIN;
	static uint16_t x227 = UINT16_MAX;
	int8_t x228 = -1;
	int32_t t55 = 1144096;

	t55 = (((x225<x226)==x227)/x228);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x229 = UINT16_MAX;
	static uint64_t x231 = 1159790047LLU;
	volatile int16_t x232 = 446;

	t56 = (((x229<x230)==x231)/x232);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x234 = INT64_MIN;
	int64_t x235 = INT64_MAX;
	int64_t x236 = INT64_MIN;
	volatile int64_t t57 = -141699LL;

	t57 = (((x233<x234)==x235)/x236);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x237 = INT16_MIN;
	volatile int16_t x238 = 0;
	volatile int8_t x240 = 2;
	volatile int32_t t58 = 1;

	t58 = (((x237<x238)==x239)/x240);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x242 = 13U;
	int32_t x243 = INT32_MIN;
	int32_t x244 = INT32_MIN;
	int32_t t59 = -44683;

	t59 = (((x241<x242)==x243)/x244);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x246 = INT32_MAX;
	static int16_t x247 = 6;
	int16_t x248 = 1;
	int32_t t60 = 9702;

	t60 = (((x245<x246)==x247)/x248);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x249 = -1;
	volatile uint64_t x250 = 2LLU;
	int64_t x252 = -1LL;
	int64_t t61 = -13311707LL;

	t61 = (((x249<x250)==x251)/x252);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x253 = 5388U;
	volatile int64_t x254 = 0LL;
	int32_t x255 = INT32_MAX;
	volatile int8_t x256 = -1;
	int32_t t62 = -49175;

	t62 = (((x253<x254)==x255)/x256);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x257 = 1U;

	t63 = (((x257<x258)==x259)/x260);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x261 = INT8_MIN;
	uint64_t x262 = UINT64_MAX;
	uint32_t x263 = 56002131U;
	int32_t t64 = 6289208;

	t64 = (((x261<x262)==x263)/x264);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x265 = -266440728038LL;
	volatile uint8_t x268 = 12U;
	volatile int32_t t65 = -1;

	t65 = (((x265<x266)==x267)/x268);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x269 = 7547U;
	static int8_t x271 = INT8_MIN;
	int32_t x272 = INT32_MIN;
	volatile int32_t t66 = -248692229;

	t66 = (((x269<x270)==x271)/x272);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x274 = 4132283;
	static uint8_t x275 = 0U;
	static int64_t x276 = INT64_MIN;
	static volatile int64_t t67 = -767LL;

	t67 = (((x273<x274)==x275)/x276);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x278 = UINT32_MAX;
	int16_t x279 = INT16_MIN;
	static int32_t t68 = -2640176;

	t68 = (((x277<x278)==x279)/x280);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x281 = -3146687932214571412LL;
	int64_t x282 = 0LL;
	uint32_t x283 = 54756690U;
	int32_t x284 = INT32_MIN;
	volatile int32_t t69 = 218517163;

	t69 = (((x281<x282)==x283)/x284);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x286 = INT8_MIN;
	int64_t x287 = 195123870626600416LL;
	uint32_t x288 = 85620339U;
	volatile uint32_t t70 = 1U;

	t70 = (((x285<x286)==x287)/x288);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x289 = INT8_MAX;
	int64_t x290 = 1LL;
	int16_t x291 = INT16_MIN;
	int32_t x292 = INT32_MIN;
	volatile int32_t t71 = 12;

	t71 = (((x289<x290)==x291)/x292);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x293 = 2205754;
	volatile int8_t x294 = INT8_MIN;
	int16_t x295 = 10;
	uint32_t x296 = UINT32_MAX;
	uint32_t t72 = 93U;

	t72 = (((x293<x294)==x295)/x296);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x297 = -1LL;
	int32_t x299 = 2031804;
	int16_t x300 = 13;
	volatile int32_t t73 = -80199;

	t73 = (((x297<x298)==x299)/x300);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x301 = -1;
	volatile uint8_t x302 = 121U;
	int64_t x303 = 3149777469LL;
	int32_t x304 = 109;
	static volatile int32_t t74 = 664101282;

	t74 = (((x301<x302)==x303)/x304);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x305 = 1LLU;
	int64_t x307 = 162645760384LL;
	int8_t x308 = INT8_MIN;
	int32_t t75 = 109566567;

	t75 = (((x305<x306)==x307)/x308);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x309 = UINT64_MAX;
	int8_t x311 = INT8_MIN;
	static int32_t t76 = 205597;

	t76 = (((x309<x310)==x311)/x312);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x313 = 22U;
	static uint8_t x314 = 2U;
	static int8_t x315 = INT8_MAX;
	uint32_t x316 = 387019U;
	volatile uint32_t t77 = 335U;

	t77 = (((x313<x314)==x315)/x316);

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x317 = 511U;
	int64_t x318 = 127119LL;
	int32_t x319 = INT32_MAX;
	int32_t t78 = -3385010;

	t78 = (((x317<x318)==x319)/x320);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x321 = INT8_MAX;
	static volatile int8_t x322 = INT8_MIN;
	int8_t x323 = -10;
	volatile int64_t x324 = 223LL;
	volatile int64_t t79 = 2139074023663LL;

	t79 = (((x321<x322)==x323)/x324);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x325 = 6U;
	int32_t x326 = 47118;
	int64_t x327 = 368036270287LL;
	uint8_t x328 = 4U;
	int32_t t80 = -539836;

	t80 = (((x325<x326)==x327)/x328);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x329 = UINT32_MAX;
	static volatile int32_t x330 = INT32_MAX;
	static volatile int32_t x331 = INT32_MAX;
	volatile uint32_t x332 = 125942U;
	volatile uint32_t t81 = 5641087U;

	t81 = (((x329<x330)==x331)/x332);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x333 = UINT16_MAX;
	int64_t x334 = 515108601020LL;
	volatile int8_t x335 = -1;
	int32_t x336 = INT32_MIN;

	t82 = (((x333<x334)==x335)/x336);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x339 = 8277781562249699LLU;
	volatile uint16_t x340 = UINT16_MAX;
	static int32_t t83 = -307950;

	t83 = (((x337<x338)==x339)/x340);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x341 = 505032846959020726LLU;
	int16_t x342 = -52;
	volatile int64_t t84 = 1180533835LL;

	t84 = (((x341<x342)==x343)/x344);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x345 = UINT8_MAX;
	int32_t x346 = 12858385;
	volatile uint64_t x347 = 5808103012397824LLU;
	int32_t x348 = INT32_MAX;
	int32_t t85 = -22;

	t85 = (((x345<x346)==x347)/x348);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x353 = INT32_MAX;
	uint16_t x354 = 1078U;
	uint16_t x355 = 7783U;
	static int16_t x356 = -22;
	volatile int32_t t86 = 19928;

	t86 = (((x353<x354)==x355)/x356);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x357 = INT64_MAX;
	volatile int16_t x358 = INT16_MIN;
	int16_t x359 = INT16_MAX;
	int16_t x360 = 31;

	t87 = (((x357<x358)==x359)/x360);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x361 = -1LL;
	int16_t x362 = INT16_MAX;
	int8_t x363 = INT8_MIN;
	int32_t t88 = 361815966;

	t88 = (((x361<x362)==x363)/x364);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x365 = 53U;
	int8_t x366 = -3;
	static int64_t x367 = -1LL;
	static int64_t x368 = -1LL;
	int64_t t89 = 2471LL;

	t89 = (((x365<x366)==x367)/x368);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x369 = -1LL;
	int64_t x370 = -1LL;
	int8_t x371 = INT8_MIN;

	t90 = (((x369<x370)==x371)/x372);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x373 = -8;
	static volatile uint8_t x374 = 18U;
	volatile int64_t x375 = INT64_MIN;
	int16_t x376 = INT16_MAX;
	int32_t t91 = 39;

	t91 = (((x373<x374)==x375)/x376);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x377 = INT64_MIN;
	uint64_t x378 = UINT64_MAX;
	volatile int64_t x379 = INT64_MAX;
	static int64_t x380 = 139329LL;
	static int64_t t92 = -98790447757102LL;

	t92 = (((x377<x378)==x379)/x380);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x381 = -1;
	static uint16_t x382 = UINT16_MAX;
	uint8_t x384 = 15U;
	volatile int32_t t93 = 7481;

	t93 = (((x381<x382)==x383)/x384);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x386 = 1364994U;
	static int8_t x388 = INT8_MAX;
	volatile int32_t t94 = -7;

	t94 = (((x385<x386)==x387)/x388);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x393 = 13388062U;
	int64_t x394 = 50814826LL;
	volatile uint16_t x396 = 1707U;
	volatile int32_t t95 = -59668;

	t95 = (((x393<x394)==x395)/x396);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x397 = INT64_MIN;
	int16_t x398 = -1;
	int32_t x399 = -106899941;
	static int8_t x400 = -1;

	t96 = (((x397<x398)==x399)/x400);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x401 = 569738661766898415LL;
	int32_t x402 = -1;
	int16_t x403 = INT16_MAX;
	volatile int32_t t97 = -227487887;

	t97 = (((x401<x402)==x403)/x404);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x405 = INT32_MIN;
	uint16_t x406 = 449U;
	static int32_t x407 = 1667455;
	int32_t t98 = 44;

	t98 = (((x405<x406)==x407)/x408);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x409 = -14;
	uint32_t x410 = UINT32_MAX;
	static uint8_t x411 = UINT8_MAX;
	static int32_t x412 = 21;
	static volatile int32_t t99 = 247151;

	t99 = (((x409<x410)==x411)/x412);

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

