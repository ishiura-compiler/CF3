#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = INT8_MIN;
volatile int32_t t3 = -2;
volatile int32_t t4 = 32545384;
static int64_t x25 = INT64_MIN;
uint64_t x26 = 3359421111LLU;
int8_t x28 = INT8_MIN;
volatile int32_t t6 = -1;
volatile int32_t x30 = -541770839;
static volatile int32_t t8 = 1792;
uint64_t x37 = 27415131829662597LLU;
volatile int32_t t9 = -2703435;
int32_t x44 = -93911827;
volatile int64_t x48 = INT64_MAX;
volatile int32_t t11 = 94;
static uint16_t x65 = 26U;
static uint64_t x77 = 38881LLU;
int16_t x80 = -473;
int64_t x81 = -208LL;
int16_t x84 = -382;
uint64_t x88 = 14397591817308312LLU;
int64_t x89 = INT64_MAX;
static volatile uint64_t x92 = 2288134512604LLU;
int32_t t22 = 0;
volatile int64_t x95 = 0LL;
int16_t x103 = -3758;
volatile int32_t t25 = 0;
uint16_t x105 = 2U;
int8_t x108 = INT8_MIN;
int32_t t26 = -300335;
uint16_t x114 = UINT16_MAX;
int16_t x126 = 111;
volatile int32_t t32 = -974;
static int8_t x136 = -1;
volatile int32_t t34 = 11339640;
int64_t x144 = 694329068LL;
volatile int32_t t35 = 15294;
int16_t x150 = 1;
static uint32_t x151 = 16339761U;
static int32_t x152 = INT32_MAX;
int32_t t39 = 962;
volatile uint64_t x172 = 2186892931101720109LLU;
static volatile int32_t t45 = 1719;
uint8_t x186 = UINT8_MAX;
uint64_t x188 = UINT64_MAX;
uint64_t x189 = UINT64_MAX;
static uint8_t x196 = 100U;
volatile int8_t x209 = INT8_MIN;
volatile int64_t x218 = -1LL;
uint8_t x220 = UINT8_MAX;
int32_t t54 = -98557;
volatile uint32_t x223 = 60U;
volatile int8_t x225 = 16;
int32_t x229 = INT32_MIN;
int8_t x234 = INT8_MIN;
volatile int8_t x237 = -61;
int32_t x241 = 25028;
static int8_t x242 = INT8_MAX;
uint8_t x247 = 12U;
static uint16_t x250 = UINT16_MAX;
static uint16_t x253 = UINT16_MAX;
int16_t x256 = INT16_MIN;
volatile int32_t x262 = INT32_MAX;
int16_t x264 = 7;
int64_t x267 = INT64_MIN;
uint16_t x268 = 6838U;
uint16_t x272 = UINT16_MAX;
int32_t t67 = -388398;
int8_t x276 = INT8_MIN;
volatile uint16_t x299 = 52U;
int64_t x300 = INT64_MIN;
int32_t x302 = -1;
volatile int32_t t78 = 2082197;
volatile int8_t x319 = -55;
volatile int32_t t79 = 21;
volatile uint64_t x321 = 834194840813LLU;
int32_t x322 = INT32_MIN;
static int16_t x341 = INT16_MIN;
volatile uint16_t x346 = UINT16_MAX;
uint64_t x349 = 198258313LLU;
uint32_t x352 = 3920U;
volatile int16_t x353 = -1;
int32_t t88 = -1540248;
static volatile int32_t t89 = -1;
int16_t x367 = 26;
int32_t t92 = 15923075;
volatile uint8_t x377 = 81U;
int8_t x379 = -1;
uint8_t x386 = 0U;
static volatile int32_t x394 = -75801266;
static int8_t x396 = 0;
int32_t t98 = -5291;


void f0(void) {
	volatile int8_t x1 = -1;
	int64_t x2 = -4206194009LL;
	int32_t x3 = -160129;
	volatile int32_t t0 = 81121384;

	t0 = (x1<=(x2|(x3^x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = INT16_MIN;
	uint64_t x6 = UINT64_MAX;
	static uint64_t x7 = 13LLU;
	int16_t x8 = 205;
	volatile int32_t t1 = 13257;

	t1 = (x5<=(x6|(x7^x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	int32_t x10 = 4018291;
	int32_t x11 = INT32_MIN;
	volatile int16_t x12 = INT16_MIN;
	static volatile int32_t t2 = 1;

	t2 = (x9<=(x10|(x11^x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = 9LL;
	int32_t x14 = 1592187;
	volatile uint32_t x15 = 87U;
	static int32_t x16 = 7754;

	t3 = (x13<=(x14|(x15^x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 2U;
	static int32_t x18 = 1720;
	int8_t x19 = 6;
	int8_t x20 = 13;

	t4 = (x17<=(x18|(x19^x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -103LL;
	static int8_t x22 = -41;
	int64_t x23 = INT64_MIN;
	static uint64_t x24 = UINT64_MAX;
	int32_t t5 = -14223;

	t5 = (x21<=(x22|(x23^x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x27 = -34612603120LL;

	t6 = (x25<=(x26|(x27^x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 119977357608119638LLU;
	static uint32_t x31 = UINT32_MAX;
	uint64_t x32 = UINT64_MAX;
	static int32_t t7 = -353;

	t7 = (x29<=(x30|(x31^x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	int64_t x34 = -1LL;
	static uint64_t x35 = 4LLU;
	static volatile int32_t x36 = INT32_MIN;

	t8 = (x33<=(x34|(x35^x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x38 = UINT64_MAX;
	static volatile uint32_t x39 = UINT32_MAX;
	uint8_t x40 = 0U;

	t9 = (x37<=(x38|(x39^x40)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 351979LLU;
	static uint16_t x42 = UINT16_MAX;
	volatile int64_t x43 = INT64_MIN;
	volatile int32_t t10 = 4350628;

	t10 = (x41<=(x42|(x43^x44)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -99568709;
	int32_t x46 = INT32_MAX;
	int32_t x47 = INT32_MAX;

	t11 = (x45<=(x46|(x47^x48)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 1U;
	int16_t x50 = INT16_MAX;
	int32_t x51 = -1;
	int8_t x52 = -1;
	volatile int32_t t12 = -14500838;

	t12 = (x49<=(x50|(x51^x52)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x53 = INT8_MIN;
	static int64_t x54 = INT64_MIN;
	volatile int32_t x55 = INT32_MIN;
	volatile int8_t x56 = -16;
	int32_t t13 = -38187;

	t13 = (x53<=(x54|(x55^x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = UINT16_MAX;
	int16_t x58 = INT16_MIN;
	int64_t x59 = -1LL;
	volatile uint8_t x60 = UINT8_MAX;
	static int32_t t14 = -86945;

	t14 = (x57<=(x58|(x59^x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 14U;
	uint8_t x62 = UINT8_MAX;
	int16_t x63 = -1;
	static int32_t x64 = -646571;
	volatile int32_t t15 = -1;

	t15 = (x61<=(x62|(x63^x64)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x66 = UINT32_MAX;
	uint32_t x67 = UINT32_MAX;
	volatile int8_t x68 = 57;
	static int32_t t16 = 0;

	t16 = (x65<=(x66|(x67^x68)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 1277LLU;
	volatile uint32_t x70 = 1970828840U;
	uint8_t x71 = 2U;
	static volatile int16_t x72 = -1;
	volatile int32_t t17 = -201201;

	t17 = (x69<=(x70|(x71^x72)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x73 = INT32_MIN;
	int64_t x74 = -124698398140LL;
	int16_t x75 = INT16_MIN;
	int16_t x76 = -1;
	int32_t t18 = -16849334;

	t18 = (x73<=(x74|(x75^x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x78 = 2;
	uint8_t x79 = UINT8_MAX;
	int32_t t19 = 1049;

	t19 = (x77<=(x78|(x79^x80)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x82 = INT16_MIN;
	volatile uint64_t x83 = 6263810316935LLU;
	static volatile int32_t t20 = -1;

	t20 = (x81<=(x82|(x83^x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = 11LLU;
	volatile uint64_t x86 = UINT64_MAX;
	uint64_t x87 = UINT64_MAX;
	int32_t t21 = -1164369;

	t21 = (x85<=(x86|(x87^x88)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x90 = INT64_MIN;
	int32_t x91 = INT32_MAX;

	t22 = (x89<=(x90|(x91^x92)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int8_t x93 = 2;
	volatile uint64_t x94 = UINT64_MAX;
	static int16_t x96 = -18;
	volatile int32_t t23 = 578;

	t23 = (x93<=(x94|(x95^x96)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MIN;
	uint32_t x98 = 398311U;
	static int32_t x99 = INT32_MIN;
	uint16_t x100 = UINT16_MAX;
	volatile int32_t t24 = 107206;

	t24 = (x97<=(x98|(x99^x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x101 = 6U;
	uint16_t x102 = UINT16_MAX;
	uint8_t x104 = UINT8_MAX;

	t25 = (x101<=(x102|(x103^x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x106 = 391;
	int32_t x107 = INT32_MIN;

	t26 = (x105<=(x106|(x107^x108)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x109 = 3557077;
	int8_t x110 = -24;
	int16_t x111 = 610;
	volatile int64_t x112 = INT64_MIN;
	volatile int32_t t27 = -138;

	t27 = (x109<=(x110|(x111^x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = 0;
	int32_t x115 = -51;
	int8_t x116 = INT8_MIN;
	volatile int32_t t28 = -6311819;

	t28 = (x113<=(x114|(x115^x116)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = -1LL;
	uint16_t x118 = 14U;
	int16_t x119 = INT16_MIN;
	volatile uint8_t x120 = 25U;
	int32_t t29 = -970108;

	t29 = (x117<=(x118|(x119^x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = 1965713818884LLU;
	volatile int8_t x122 = 0;
	volatile uint16_t x123 = 22787U;
	int16_t x124 = -1;
	volatile int32_t t30 = -325148412;

	t30 = (x121<=(x122|(x123^x124)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = -106017417LL;
	int16_t x127 = -1992;
	static int32_t x128 = INT32_MAX;
	volatile int32_t t31 = 1;

	t31 = (x125<=(x126|(x127^x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = UINT64_MAX;
	static uint8_t x130 = 5U;
	static int16_t x131 = -482;
	static uint8_t x132 = 0U;

	t32 = (x129<=(x130|(x131^x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = 6;
	int16_t x134 = INT16_MIN;
	volatile uint32_t x135 = UINT32_MAX;
	volatile int32_t t33 = 815783304;

	t33 = (x133<=(x134|(x135^x136)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MAX;
	int64_t x138 = INT64_MIN;
	int32_t x139 = -1;
	int32_t x140 = 721;

	t34 = (x137<=(x138|(x139^x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x141 = -1LL;
	static int32_t x142 = -16129;
	static int16_t x143 = -47;

	t35 = (x141<=(x142|(x143^x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MIN;
	int16_t x146 = -1;
	static uint8_t x147 = UINT8_MAX;
	int8_t x148 = -1;
	volatile int32_t t36 = 36285540;

	t36 = (x145<=(x146|(x147^x148)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x149 = INT8_MAX;
	int32_t t37 = -123;

	t37 = (x149<=(x150|(x151^x152)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = 0U;
	volatile int64_t x154 = 4718722426LL;
	volatile uint64_t x155 = UINT64_MAX;
	int16_t x156 = 74;
	volatile int32_t t38 = 268184;

	t38 = (x153<=(x154|(x155^x156)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x157 = -1LL;
	int32_t x158 = 18391;
	int64_t x159 = INT64_MIN;
	volatile int64_t x160 = INT64_MAX;

	t39 = (x157<=(x158|(x159^x160)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = 63U;
	static uint32_t x162 = UINT32_MAX;
	static volatile uint16_t x163 = 209U;
	uint16_t x164 = 58U;
	int32_t t40 = -586070;

	t40 = (x161<=(x162|(x163^x164)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = INT8_MIN;
	static uint64_t x166 = 1136869133530747LLU;
	int64_t x167 = INT64_MIN;
	static int32_t x168 = 39606;
	static volatile int32_t t41 = 2775412;

	t41 = (x165<=(x166|(x167^x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x169 = UINT16_MAX;
	int8_t x170 = -1;
	uint64_t x171 = UINT64_MAX;
	volatile int32_t t42 = 3401;

	t42 = (x169<=(x170|(x171^x172)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x173 = INT8_MAX;
	uint64_t x174 = UINT64_MAX;
	static int8_t x175 = INT8_MIN;
	static int32_t x176 = INT32_MIN;
	volatile int32_t t43 = -32508;

	t43 = (x173<=(x174|(x175^x176)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MIN;
	int32_t x178 = 166001933;
	int32_t x179 = INT32_MAX;
	int32_t x180 = INT32_MAX;
	static int32_t t44 = -503553364;

	t44 = (x177<=(x178|(x179^x180)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x181 = 150;
	static volatile int64_t x182 = INT64_MIN;
	int64_t x183 = -71783512LL;
	int32_t x184 = -1;

	t45 = (x181<=(x182|(x183^x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = -12837;
	uint8_t x187 = UINT8_MAX;
	volatile int32_t t46 = 41;

	t46 = (x185<=(x186|(x187^x188)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x190 = INT16_MAX;
	int32_t x191 = INT32_MAX;
	volatile uint64_t x192 = 30LLU;
	volatile int32_t t47 = 40;

	t47 = (x189<=(x190|(x191^x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = 36401308674447679LLU;
	uint8_t x194 = UINT8_MAX;
	int64_t x195 = -1LL;
	int32_t t48 = 0;

	t48 = (x193<=(x194|(x195^x196)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = INT8_MAX;
	uint32_t x198 = 30U;
	uint64_t x199 = UINT64_MAX;
	volatile uint16_t x200 = UINT16_MAX;
	volatile int32_t t49 = 40449012;

	t49 = (x197<=(x198|(x199^x200)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x201 = INT32_MIN;
	int8_t x202 = INT8_MIN;
	int64_t x203 = INT64_MIN;
	int32_t x204 = INT32_MIN;
	static volatile int32_t t50 = -1736991;

	t50 = (x201<=(x202|(x203^x204)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = INT16_MAX;
	uint64_t x206 = 190568926121080875LLU;
	int32_t x207 = 1075;
	int16_t x208 = INT16_MAX;
	volatile int32_t t51 = 697;

	t51 = (x205<=(x206|(x207^x208)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x210 = -1LL;
	volatile int16_t x211 = 3148;
	static int32_t x212 = -1;
	volatile int32_t t52 = -14146;

	t52 = (x209<=(x210|(x211^x212)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = INT32_MIN;
	int16_t x214 = 2848;
	int8_t x215 = -12;
	volatile uint16_t x216 = 23U;
	int32_t t53 = -1;

	t53 = (x213<=(x214|(x215^x216)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MIN;
	int64_t x219 = -1LL;

	t54 = (x217<=(x218|(x219^x220)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x221 = 3U;
	int64_t x222 = -1LL;
	int8_t x224 = INT8_MAX;
	volatile int32_t t55 = -2660;

	t55 = (x221<=(x222|(x223^x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x226 = INT32_MIN;
	uint16_t x227 = 416U;
	uint16_t x228 = 12U;
	int32_t t56 = 1;

	t56 = (x225<=(x226|(x227^x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x230 = 709971980498062LLU;
	uint32_t x231 = 30558U;
	int8_t x232 = INT8_MAX;
	volatile int32_t t57 = 17214181;

	t57 = (x229<=(x230|(x231^x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = 204;
	static int32_t x235 = INT32_MIN;
	uint64_t x236 = 683LLU;
	int32_t t58 = -549523618;

	t58 = (x233<=(x234|(x235^x236)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x238 = -4;
	volatile int8_t x239 = INT8_MIN;
	uint64_t x240 = 121LLU;
	static volatile int32_t t59 = 62951961;

	t59 = (x237<=(x238|(x239^x240)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x243 = INT16_MIN;
	static int16_t x244 = INT16_MIN;
	volatile int32_t t60 = -4;

	t60 = (x241<=(x242|(x243^x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = 15563642392LL;
	uint16_t x246 = UINT16_MAX;
	int64_t x248 = -1LL;
	volatile int32_t t61 = -97;

	t61 = (x245<=(x246|(x247^x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x249 = 66U;
	uint64_t x251 = UINT64_MAX;
	int64_t x252 = INT64_MIN;
	int32_t t62 = -142195;

	t62 = (x249<=(x250|(x251^x252)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x254 = UINT16_MAX;
	uint32_t x255 = UINT32_MAX;
	int32_t t63 = 7279;

	t63 = (x253<=(x254|(x255^x256)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = 706973LL;
	int16_t x258 = 11363;
	int8_t x259 = 0;
	static int32_t x260 = -1;
	int32_t t64 = -3793991;

	t64 = (x257<=(x258|(x259^x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x261 = UINT64_MAX;
	int32_t x263 = INT32_MIN;
	volatile int32_t t65 = 0;

	t65 = (x261<=(x262|(x263^x264)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = -177;
	uint32_t x266 = 2053926920U;
	static volatile int32_t t66 = 199572078;

	t66 = (x265<=(x266|(x267^x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x269 = 10U;
	int32_t x270 = -1;
	uint64_t x271 = 1LLU;

	t67 = (x269<=(x270|(x271^x272)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = 646400191161575142LLU;
	int64_t x274 = INT64_MIN;
	volatile int16_t x275 = INT16_MIN;
	volatile int32_t t68 = -1;

	t68 = (x273<=(x274|(x275^x276)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = -491211760LL;
	uint8_t x278 = 1U;
	int16_t x279 = -1;
	static uint32_t x280 = UINT32_MAX;
	int32_t t69 = 1716;

	t69 = (x277<=(x278|(x279^x280)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x281 = UINT8_MAX;
	uint64_t x282 = 2663915LLU;
	static int64_t x283 = -8727LL;
	static int8_t x284 = 63;
	volatile int32_t t70 = 456465;

	t70 = (x281<=(x282|(x283^x284)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int64_t x285 = 85697710404LL;
	int32_t x286 = 46448;
	int8_t x287 = INT8_MAX;
	uint64_t x288 = UINT64_MAX;
	volatile int32_t t71 = 29296;

	t71 = (x285<=(x286|(x287^x288)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x289 = 68U;
	static uint32_t x290 = UINT32_MAX;
	static int16_t x291 = 1;
	uint8_t x292 = 6U;
	volatile int32_t t72 = 0;

	t72 = (x289<=(x290|(x291^x292)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x293 = 1U;
	uint64_t x294 = 611750723436LLU;
	int32_t x295 = -6;
	int64_t x296 = -1LL;
	volatile int32_t t73 = -524646;

	t73 = (x293<=(x294|(x295^x296)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = INT64_MAX;
	uint32_t x298 = 0U;
	int32_t t74 = 973639516;

	t74 = (x297<=(x298|(x299^x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x301 = -1LL;
	int32_t x303 = -3;
	int16_t x304 = INT16_MIN;
	int32_t t75 = -990;

	t75 = (x301<=(x302|(x303^x304)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = 93230U;
	static volatile uint32_t x306 = 19U;
	volatile int32_t x307 = INT32_MAX;
	static int16_t x308 = INT16_MIN;
	volatile int32_t t76 = -2951223;

	t76 = (x305<=(x306|(x307^x308)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = 4879U;
	int16_t x310 = -1;
	int64_t x311 = INT64_MIN;
	static int32_t x312 = -179134792;
	int32_t t77 = -2;

	t77 = (x309<=(x310|(x311^x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = 529871466U;
	volatile uint64_t x314 = 95325493683382LLU;
	static int8_t x315 = 22;
	volatile int8_t x316 = 12;

	t78 = (x313<=(x314|(x315^x316)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x317 = 107U;
	uint8_t x318 = UINT8_MAX;
	volatile int16_t x320 = 0;

	t79 = (x317<=(x318|(x319^x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int32_t x323 = INT32_MIN;
	static int8_t x324 = INT8_MAX;
	volatile int32_t t80 = -17530386;

	t80 = (x321<=(x322|(x323^x324)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x325 = -6;
	static uint64_t x326 = UINT64_MAX;
	uint16_t x327 = 18U;
	int64_t x328 = -1LL;
	volatile int32_t t81 = -999;

	t81 = (x325<=(x326|(x327^x328)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = INT64_MIN;
	int32_t x330 = 1;
	volatile int64_t x331 = -1LL;
	int64_t x332 = 6447894259LL;
	volatile int32_t t82 = -2485;

	t82 = (x329<=(x330|(x331^x332)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x333 = 1969;
	int64_t x334 = -403754718340034LL;
	int8_t x335 = INT8_MAX;
	int64_t x336 = -1LL;
	static int32_t t83 = 0;

	t83 = (x333<=(x334|(x335^x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = -1;
	static int32_t x338 = INT32_MIN;
	static int32_t x339 = INT32_MAX;
	uint32_t x340 = 1359985039U;
	static int32_t t84 = -84;

	t84 = (x337<=(x338|(x339^x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x342 = INT8_MAX;
	static volatile int64_t x343 = INT64_MIN;
	int8_t x344 = INT8_MIN;
	static volatile int32_t t85 = -24;

	t85 = (x341<=(x342|(x343^x344)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = INT64_MIN;
	int8_t x347 = INT8_MIN;
	volatile int64_t x348 = INT64_MIN;
	volatile int32_t t86 = -99103;

	t86 = (x345<=(x346|(x347^x348)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x350 = 13U;
	volatile uint64_t x351 = 34643168LLU;
	volatile int32_t t87 = 1488;

	t87 = (x349<=(x350|(x351^x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x354 = 80746619482LL;
	uint8_t x355 = UINT8_MAX;
	uint32_t x356 = UINT32_MAX;

	t88 = (x353<=(x354|(x355^x356)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = -3242368382LL;
	int64_t x358 = -1LL;
	int8_t x359 = 16;
	static volatile int16_t x360 = INT16_MAX;

	t89 = (x357<=(x358|(x359^x360)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = INT64_MIN;
	volatile uint16_t x362 = 25216U;
	static volatile int64_t x363 = INT64_MIN;
	int8_t x364 = INT8_MIN;
	volatile int32_t t90 = 18952;

	t90 = (x361<=(x362|(x363^x364)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = 59;
	int16_t x366 = 410;
	uint64_t x368 = 2LLU;
	static int32_t t91 = -15024967;

	t91 = (x365<=(x366|(x367^x368)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = -1;
	int16_t x370 = 1;
	uint8_t x371 = UINT8_MAX;
	volatile int8_t x372 = -10;

	t92 = (x369<=(x370|(x371^x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x373 = 17469651083899550LLU;
	int8_t x374 = -1;
	static int8_t x375 = INT8_MAX;
	volatile int16_t x376 = -1349;
	volatile int32_t t93 = -2111;

	t93 = (x373<=(x374|(x375^x376)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x378 = INT64_MAX;
	int32_t x380 = INT32_MIN;
	static volatile int32_t t94 = -5668;

	t94 = (x377<=(x378|(x379^x380)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MIN;
	static int64_t x382 = INT64_MAX;
	static int64_t x383 = -33123495605LL;
	volatile int8_t x384 = INT8_MIN;
	int32_t t95 = -78538378;

	t95 = (x381<=(x382|(x383^x384)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = INT32_MAX;
	int16_t x387 = -1;
	uint32_t x388 = 46U;
	volatile int32_t t96 = -250;

	t96 = (x385<=(x386|(x387^x388)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x389 = 11U;
	uint32_t x390 = UINT32_MAX;
	static uint8_t x391 = UINT8_MAX;
	int8_t x392 = 0;
	volatile int32_t t97 = -23574749;

	t97 = (x389<=(x390|(x391^x392)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = 3;
	int32_t x395 = -13356;

	t98 = (x393<=(x394|(x395^x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = 0;
	int32_t x398 = -1;
	volatile int16_t x399 = INT16_MIN;
	int8_t x400 = 1;
	volatile int32_t t99 = 2562;

	t99 = (x397<=(x398|(x399^x400)));

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

