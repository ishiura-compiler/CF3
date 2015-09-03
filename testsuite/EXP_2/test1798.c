#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x7 = -2587;
static int16_t x15 = INT16_MIN;
uint64_t x34 = 737269875200655730LLU;
int32_t t8 = -7;
volatile uint32_t x39 = 4530U;
static int16_t x43 = -1;
uint64_t t10 = 2567941945085366LLU;
volatile int32_t t11 = 482;
volatile int32_t t13 = -121206001;
volatile int16_t x58 = INT16_MAX;
uint64_t x60 = 27550733453LLU;
uint64_t t14 = 2LLU;
static uint8_t x64 = 6U;
static uint16_t x73 = 19745U;
volatile uint16_t x94 = UINT16_MAX;
int64_t x100 = INT64_MIN;
volatile int64_t t23 = 202LL;
static int8_t x104 = -1;
int8_t x107 = 15;
static int64_t x113 = INT64_MIN;
int16_t x123 = INT16_MIN;
static int16_t x127 = INT16_MIN;
uint16_t x130 = 17261U;
static volatile uint8_t x134 = 1U;
static int64_t x139 = -1LL;
volatile uint64_t x141 = 6598LLU;
uint64_t x149 = UINT64_MAX;
int8_t x151 = -1;
static int16_t x152 = 1648;
uint32_t x160 = UINT32_MAX;
static volatile uint32_t t37 = 3U;
int16_t x162 = -1;
static int32_t x170 = 256266;
volatile int16_t x171 = INT16_MIN;
static uint8_t x177 = 2U;
int32_t x180 = -1;
int16_t x181 = 0;
int16_t x182 = INT16_MIN;
uint16_t x187 = 6U;
uint32_t x191 = 817664644U;
int64_t x196 = INT64_MAX;
uint8_t x203 = 6U;
int32_t x204 = -59298111;
volatile int32_t t48 = -126;
int16_t x209 = -1;
static uint8_t x212 = UINT8_MAX;
volatile int16_t x214 = -2;
int64_t x219 = -1LL;
int64_t x220 = -523410LL;
volatile int64_t t52 = 15973764LL;
uint16_t x225 = 1U;
int32_t x226 = -1;
volatile int64_t t54 = -16156400522061LL;
uint64_t x233 = 185195887760568477LLU;
static int16_t x236 = INT16_MIN;
static uint64_t x240 = UINT64_MAX;
int8_t x241 = INT8_MIN;
volatile int32_t t58 = 1;
uint32_t x246 = 51936U;
int64_t x251 = INT64_MIN;
volatile int32_t t65 = -10773;
int64_t x276 = INT64_MIN;
static int8_t x277 = INT8_MIN;
int8_t x282 = INT8_MIN;
volatile uint64_t x286 = 458717574101680083LLU;
int8_t x289 = -1;
volatile int32_t t71 = 148005916;
volatile int32_t x297 = 3308096;
volatile int32_t t74 = 1004355905;
int32_t x313 = INT32_MIN;
volatile int32_t x314 = INT32_MIN;
volatile int32_t x317 = 1056;
static int32_t x319 = -1;
static volatile uint64_t x321 = UINT64_MAX;
int64_t t78 = -2LL;
int16_t x325 = INT16_MIN;
static volatile int8_t x326 = INT8_MIN;
volatile int64_t x331 = -46214LL;
int8_t x339 = INT8_MAX;
volatile int32_t t83 = 66686796;
int32_t x348 = -8225174;
uint64_t x351 = UINT64_MAX;
static uint16_t x359 = 2U;
static volatile int32_t t88 = 1;
int32_t x367 = INT32_MAX;
uint32_t x370 = UINT32_MAX;
volatile int16_t x371 = -1;
uint32_t x381 = 13636U;
volatile int32_t t93 = 4669;
static int16_t x388 = 1437;
int32_t t94 = -52134;
int8_t x392 = -1;
int32_t t95 = -163394521;
volatile int16_t x393 = INT16_MIN;
int32_t t97 = 1;
volatile int64_t x408 = INT64_MIN;
int64_t t98 = -306026289LL;


void f0(void) {
	static uint64_t x1 = UINT64_MAX;
	static volatile int32_t x2 = INT32_MIN;
	static uint8_t x3 = 3U;
	int32_t x4 = INT32_MAX;
	int32_t t0 = -129600;

	t0 = ((x1<(x2&x3))/x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	int16_t x6 = INT16_MIN;
	volatile int64_t x8 = -1LL;
	volatile int64_t t1 = -1483765011617097473LL;

	t1 = ((x5<(x6&x7))/x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MAX;
	uint16_t x10 = 4U;
	int8_t x11 = INT8_MIN;
	volatile int8_t x12 = -6;
	int32_t t2 = 0;

	t2 = ((x9<(x10&x11))/x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	volatile int8_t x14 = INT8_MIN;
	int64_t x16 = INT64_MIN;
	static int64_t t3 = 1997063LL;

	t3 = ((x13<(x14&x15))/x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	static int32_t x18 = 100839;
	int8_t x19 = INT8_MAX;
	volatile uint16_t x20 = 892U;
	int32_t t4 = 106;

	t4 = ((x17<(x18&x19))/x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x21 = 13;
	int32_t x22 = 0;
	int16_t x23 = INT16_MIN;
	int8_t x24 = INT8_MIN;
	volatile int32_t t5 = -3;

	t5 = ((x21<(x22&x23))/x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = -7674488704003818LL;
	static int8_t x26 = 5;
	int32_t x27 = INT32_MIN;
	int16_t x28 = -1632;
	static volatile int32_t t6 = 401263693;

	t6 = ((x25<(x26&x27))/x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = INT32_MIN;
	int64_t x30 = -981541776175LL;
	int16_t x31 = INT16_MIN;
	uint32_t x32 = UINT32_MAX;
	static uint32_t t7 = 3118U;

	t7 = ((x29<(x30&x31))/x32);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 164056U;
	volatile int32_t x35 = INT32_MAX;
	uint16_t x36 = 17115U;

	t8 = ((x33<(x34&x35))/x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MAX;
	int16_t x38 = -1;
	volatile int64_t x40 = -1LL;
	int64_t t9 = -2864064732124019284LL;

	t9 = ((x37<(x38&x39))/x40);

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = UINT16_MAX;
	static volatile uint64_t x42 = UINT64_MAX;
	static uint64_t x44 = 7114LLU;

	t10 = ((x41<(x42&x43))/x44);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x45 = -1;
	int32_t x46 = INT32_MAX;
	volatile int32_t x47 = INT32_MIN;
	volatile uint16_t x48 = UINT16_MAX;

	t11 = ((x45<(x46&x47))/x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -218;
	uint64_t x50 = UINT64_MAX;
	static int64_t x51 = -16050248897LL;
	uint64_t x52 = 30400443LLU;
	static uint64_t t12 = 8105711097473LLU;

	t12 = ((x49<(x50&x51))/x52);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x53 = INT8_MIN;
	uint16_t x54 = 0U;
	int16_t x55 = INT16_MAX;
	static int32_t x56 = -1;

	t13 = ((x53<(x54&x55))/x56);

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 28962U;
	static volatile int8_t x59 = INT8_MIN;

	t14 = ((x57<(x58&x59))/x60);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = 497U;
	uint16_t x62 = UINT16_MAX;
	uint8_t x63 = UINT8_MAX;
	int32_t t15 = 1;

	t15 = ((x61<(x62&x63))/x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MAX;
	int8_t x66 = INT8_MIN;
	static volatile int16_t x67 = 22;
	uint8_t x68 = 42U;
	volatile int32_t t16 = -3929655;

	t16 = ((x65<(x66&x67))/x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x69 = 192449723U;
	static int64_t x70 = INT64_MAX;
	int8_t x71 = -1;
	volatile uint16_t x72 = UINT16_MAX;
	volatile int32_t t17 = 14665307;

	t17 = ((x69<(x70&x71))/x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x74 = 2U;
	int16_t x75 = INT16_MAX;
	static int8_t x76 = INT8_MIN;
	static int32_t t18 = 236;

	t18 = ((x73<(x74&x75))/x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x77 = INT32_MAX;
	int64_t x78 = INT64_MIN;
	volatile int64_t x79 = INT64_MAX;
	uint8_t x80 = UINT8_MAX;
	int32_t t19 = -62;

	t19 = ((x77<(x78&x79))/x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x85 = 30064866620420399LLU;
	int8_t x86 = 59;
	static uint16_t x87 = 0U;
	uint16_t x88 = 945U;
	int32_t t20 = -259023316;

	t20 = ((x85<(x86&x87))/x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint32_t x89 = 30394U;
	volatile int64_t x90 = INT64_MIN;
	int8_t x91 = INT8_MAX;
	static int64_t x92 = INT64_MIN;
	int64_t t21 = -972LL;

	t21 = ((x89<(x90&x91))/x92);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x93 = 646U;
	int64_t x95 = INT64_MIN;
	volatile int16_t x96 = INT16_MIN;
	static volatile int32_t t22 = -16;

	t22 = ((x93<(x94&x95))/x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x97 = 1;
	int16_t x98 = -1;
	volatile int8_t x99 = INT8_MIN;

	t23 = ((x97<(x98&x99))/x100);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x101 = 6381U;
	int16_t x102 = -1;
	int8_t x103 = -1;
	volatile int32_t t24 = -76;

	t24 = ((x101<(x102&x103))/x104);

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x105 = INT64_MIN;
	int32_t x106 = -1;
	int64_t x108 = INT64_MIN;
	int64_t t25 = -2094985623620826826LL;

	t25 = ((x105<(x106&x107))/x108);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x109 = UINT32_MAX;
	static uint8_t x110 = 7U;
	uint64_t x111 = UINT64_MAX;
	int64_t x112 = 40466208682822139LL;
	int64_t t26 = -16399533LL;

	t26 = ((x109<(x110&x111))/x112);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x114 = 19;
	int16_t x115 = INT16_MAX;
	int64_t x116 = 13478093122LL;
	int64_t t27 = -31423869177LL;

	t27 = ((x113<(x114&x115))/x116);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x117 = UINT16_MAX;
	volatile int16_t x118 = 0;
	int16_t x119 = -1;
	int16_t x120 = -400;
	int32_t t28 = 6;

	t28 = ((x117<(x118&x119))/x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int32_t x121 = 82;
	int32_t x122 = -1;
	uint16_t x124 = UINT16_MAX;
	int32_t t29 = -1818948;

	t29 = ((x121<(x122&x123))/x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x125 = INT16_MIN;
	int32_t x126 = INT32_MIN;
	int32_t x128 = -1;
	int32_t t30 = -28274;

	t30 = ((x125<(x126&x127))/x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x129 = -40LL;
	uint64_t x131 = 948LLU;
	static int8_t x132 = 7;
	volatile int32_t t31 = -212;

	t31 = ((x129<(x130&x131))/x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x133 = INT64_MIN;
	volatile uint16_t x135 = 10U;
	volatile uint32_t x136 = 8170U;
	uint32_t t32 = 99797178U;

	t32 = ((x133<(x134&x135))/x136);

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x137 = INT32_MIN;
	volatile int64_t x138 = INT64_MAX;
	int16_t x140 = 6;
	int32_t t33 = 29958;

	t33 = ((x137<(x138&x139))/x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x142 = UINT64_MAX;
	static int64_t x143 = INT64_MAX;
	int64_t x144 = INT64_MIN;
	static int64_t t34 = 143771202070LL;

	t34 = ((x141<(x142&x143))/x144);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x150 = 1798618102U;
	static volatile int32_t t35 = 6735030;

	t35 = ((x149<(x150&x151))/x152);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x153 = -42012869;
	int8_t x154 = -20;
	int64_t x155 = INT64_MIN;
	int8_t x156 = -1;
	int32_t t36 = -2;

	t36 = ((x153<(x154&x155))/x156);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x157 = INT8_MIN;
	volatile int16_t x158 = INT16_MIN;
	int32_t x159 = INT32_MAX;

	t37 = ((x157<(x158&x159))/x160);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x161 = INT16_MIN;
	uint64_t x163 = 42724014LLU;
	int32_t x164 = INT32_MIN;
	int32_t t38 = -64936;

	t38 = ((x161<(x162&x163))/x164);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x165 = -1;
	int32_t x166 = 40;
	int16_t x167 = INT16_MAX;
	static int16_t x168 = INT16_MIN;
	static volatile int32_t t39 = -24122299;

	t39 = ((x165<(x166&x167))/x168);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x169 = INT32_MIN;
	static volatile uint8_t x172 = 80U;
	int32_t t40 = 43;

	t40 = ((x169<(x170&x171))/x172);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x173 = -64LL;
	int8_t x174 = INT8_MIN;
	volatile uint32_t x175 = UINT32_MAX;
	int8_t x176 = -1;
	volatile int32_t t41 = -1;

	t41 = ((x173<(x174&x175))/x176);

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x178 = INT32_MIN;
	volatile int8_t x179 = -1;
	static volatile int32_t t42 = 17911;

	t42 = ((x177<(x178&x179))/x180);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x183 = INT16_MAX;
	static uint16_t x184 = 6U;
	int32_t t43 = 0;

	t43 = ((x181<(x182&x183))/x184);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x185 = UINT8_MAX;
	static uint64_t x186 = 30310907LLU;
	int16_t x188 = INT16_MIN;
	volatile int32_t t44 = -219;

	t44 = ((x185<(x186&x187))/x188);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x189 = -1LL;
	uint32_t x190 = 16938348U;
	static int64_t x192 = -2725238LL;
	int64_t t45 = -1370582471375408LL;

	t45 = ((x189<(x190&x191))/x192);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x193 = 54U;
	volatile int8_t x194 = INT8_MAX;
	int32_t x195 = -52;
	volatile int64_t t46 = -2843LL;

	t46 = ((x193<(x194&x195))/x196);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x197 = 218;
	int16_t x198 = INT16_MIN;
	volatile int64_t x199 = 335136LL;
	int16_t x200 = 406;
	volatile int32_t t47 = 78;

	t47 = ((x197<(x198&x199))/x200);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x201 = INT64_MIN;
	uint64_t x202 = UINT64_MAX;

	t48 = ((x201<(x202&x203))/x204);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x205 = INT32_MIN;
	static int8_t x206 = 48;
	int8_t x207 = INT8_MAX;
	uint8_t x208 = UINT8_MAX;
	int32_t t49 = -507590;

	t49 = ((x205<(x206&x207))/x208);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x210 = UINT16_MAX;
	int8_t x211 = INT8_MIN;
	volatile int32_t t50 = 1;

	t50 = ((x209<(x210&x211))/x212);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x213 = INT32_MAX;
	volatile int8_t x215 = INT8_MAX;
	static uint16_t x216 = 952U;
	int32_t t51 = -89308130;

	t51 = ((x213<(x214&x215))/x216);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x217 = INT32_MIN;
	uint64_t x218 = UINT64_MAX;

	t52 = ((x217<(x218&x219))/x220);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x221 = 12;
	int64_t x222 = INT64_MIN;
	int64_t x223 = INT64_MIN;
	volatile uint64_t x224 = 234LLU;
	uint64_t t53 = 226749262LLU;

	t53 = ((x221<(x222&x223))/x224);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x227 = 925;
	volatile int64_t x228 = INT64_MIN;

	t54 = ((x225<(x226&x227))/x228);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x229 = 35U;
	static uint16_t x230 = UINT16_MAX;
	volatile int8_t x231 = INT8_MIN;
	uint8_t x232 = 6U;
	volatile int32_t t55 = -9;

	t55 = ((x229<(x230&x231))/x232);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x234 = INT64_MIN;
	volatile uint64_t x235 = 26LLU;
	volatile int32_t t56 = 1086;

	t56 = ((x233<(x234&x235))/x236);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x237 = 5U;
	uint64_t x238 = 197416449786LLU;
	int16_t x239 = 642;
	uint64_t t57 = 4677462831368703LLU;

	t57 = ((x237<(x238&x239))/x240);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int64_t x242 = -1LL;
	uint8_t x243 = UINT8_MAX;
	static int16_t x244 = -1;

	t58 = ((x241<(x242&x243))/x244);

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x245 = -1;
	int8_t x247 = -3;
	static int64_t x248 = 2135201081583LL;
	volatile int64_t t59 = -527918LL;

	t59 = ((x245<(x246&x247))/x248);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x249 = 4831U;
	uint32_t x250 = 26440596U;
	uint8_t x252 = 19U;
	static volatile int32_t t60 = -601103482;

	t60 = ((x249<(x250&x251))/x252);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x253 = INT32_MAX;
	uint16_t x254 = 2U;
	int32_t x255 = -801;
	volatile int16_t x256 = -1;
	static int32_t t61 = -6;

	t61 = ((x253<(x254&x255))/x256);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x257 = 231U;
	uint8_t x258 = 3U;
	int8_t x259 = -1;
	int8_t x260 = -14;
	volatile int32_t t62 = -98;

	t62 = ((x257<(x258&x259))/x260);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x261 = 62387084LL;
	uint8_t x262 = 6U;
	int64_t x263 = INT64_MIN;
	static int32_t x264 = 9;
	volatile int32_t t63 = 194857;

	t63 = ((x261<(x262&x263))/x264);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint32_t x265 = UINT32_MAX;
	uint16_t x266 = UINT16_MAX;
	uint64_t x267 = 49284090830137LLU;
	int8_t x268 = 2;
	volatile int32_t t64 = 14461150;

	t64 = ((x265<(x266&x267))/x268);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x269 = 7LL;
	uint16_t x270 = UINT16_MAX;
	int64_t x271 = -3322652475899931839LL;
	int8_t x272 = INT8_MIN;

	t65 = ((x269<(x270&x271))/x272);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x273 = UINT16_MAX;
	int64_t x274 = -621LL;
	static int64_t x275 = 329604172220984722LL;
	int64_t t66 = -1761707LL;

	t66 = ((x273<(x274&x275))/x276);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x278 = -1;
	volatile int16_t x279 = 0;
	int32_t x280 = INT32_MIN;
	int32_t t67 = 721672;

	t67 = ((x277<(x278&x279))/x280);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x281 = INT8_MAX;
	int16_t x283 = INT16_MIN;
	static int32_t x284 = INT32_MAX;
	volatile int32_t t68 = -1078250;

	t68 = ((x281<(x282&x283))/x284);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x285 = 8171040250LL;
	uint32_t x287 = 281U;
	static uint64_t x288 = 1936863LLU;
	uint64_t t69 = 69LLU;

	t69 = ((x285<(x286&x287))/x288);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x290 = 4210031LL;
	uint16_t x291 = UINT16_MAX;
	uint64_t x292 = UINT64_MAX;
	volatile uint64_t t70 = 115095903862LLU;

	t70 = ((x289<(x290&x291))/x292);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x293 = 441U;
	uint16_t x294 = 12U;
	int64_t x295 = INT64_MIN;
	int32_t x296 = -1;

	t71 = ((x293<(x294&x295))/x296);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x298 = -1;
	int16_t x299 = INT16_MIN;
	volatile uint32_t x300 = UINT32_MAX;
	uint32_t t72 = 81U;

	t72 = ((x297<(x298&x299))/x300);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x301 = -1;
	int16_t x302 = 6;
	volatile int16_t x303 = 3;
	uint8_t x304 = 59U;
	volatile int32_t t73 = -30477459;

	t73 = ((x301<(x302&x303))/x304);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x305 = INT8_MIN;
	uint16_t x306 = UINT16_MAX;
	int16_t x307 = -8129;
	int32_t x308 = 3572177;

	t74 = ((x305<(x306&x307))/x308);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x309 = INT64_MIN;
	int64_t x310 = INT64_MIN;
	uint32_t x311 = 14445U;
	int16_t x312 = -4;
	static volatile int32_t t75 = 0;

	t75 = ((x309<(x310&x311))/x312);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x315 = -1;
	int16_t x316 = -1;
	int32_t t76 = -18411;

	t76 = ((x313<(x314&x315))/x316);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x318 = INT8_MIN;
	int16_t x320 = -1;
	int32_t t77 = 0;

	t77 = ((x317<(x318&x319))/x320);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x322 = -77;
	uint16_t x323 = 13826U;
	int64_t x324 = INT64_MAX;

	t78 = ((x321<(x322&x323))/x324);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x327 = 488LLU;
	static uint32_t x328 = 80U;
	uint32_t t79 = 1047187U;

	t79 = ((x325<(x326&x327))/x328);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x329 = 115LLU;
	int8_t x330 = -1;
	volatile int8_t x332 = INT8_MIN;
	volatile int32_t t80 = 812;

	t80 = ((x329<(x330&x331))/x332);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x333 = -7328028;
	static uint8_t x334 = UINT8_MAX;
	int16_t x335 = INT16_MIN;
	volatile int32_t x336 = INT32_MIN;
	volatile int32_t t81 = 1;

	t81 = ((x333<(x334&x335))/x336);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x337 = 1U;
	int32_t x338 = -1;
	int16_t x340 = INT16_MAX;
	int32_t t82 = -162;

	t82 = ((x337<(x338&x339))/x340);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x341 = -41;
	static int64_t x342 = INT64_MAX;
	int32_t x343 = INT32_MIN;
	int8_t x344 = INT8_MIN;

	t83 = ((x341<(x342&x343))/x344);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x345 = INT8_MIN;
	int16_t x346 = 12;
	static int8_t x347 = INT8_MIN;
	volatile int32_t t84 = -49;

	t84 = ((x345<(x346&x347))/x348);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x349 = INT32_MAX;
	int64_t x350 = -1LL;
	static volatile uint8_t x352 = 3U;
	int32_t t85 = -3360;

	t85 = ((x349<(x350&x351))/x352);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x353 = INT32_MIN;
	volatile uint64_t x354 = UINT64_MAX;
	uint32_t x355 = 64300845U;
	static int8_t x356 = 10;
	volatile int32_t t86 = -165;

	t86 = ((x353<(x354&x355))/x356);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x357 = 116LLU;
	int64_t x358 = -1LL;
	uint16_t x360 = 7807U;
	volatile int32_t t87 = -749846;

	t87 = ((x357<(x358&x359))/x360);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x361 = -1;
	volatile int16_t x362 = INT16_MIN;
	int16_t x363 = INT16_MIN;
	int8_t x364 = INT8_MAX;

	t88 = ((x361<(x362&x363))/x364);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x365 = UINT16_MAX;
	static int8_t x366 = 4;
	uint32_t x368 = UINT32_MAX;
	volatile uint32_t t89 = 7U;

	t89 = ((x365<(x366&x367))/x368);

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x369 = INT8_MIN;
	int32_t x372 = 29377;
	volatile int32_t t90 = 120;

	t90 = ((x369<(x370&x371))/x372);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x373 = 8061631008538694LLU;
	int16_t x374 = 0;
	uint32_t x375 = 1598418535U;
	uint8_t x376 = 1U;
	int32_t t91 = -28;

	t91 = ((x373<(x374&x375))/x376);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x377 = 151260899166041944LLU;
	int8_t x378 = -6;
	volatile int16_t x379 = INT16_MIN;
	volatile int16_t x380 = -1;
	int32_t t92 = 102746065;

	t92 = ((x377<(x378&x379))/x380);

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x382 = 14458;
	int16_t x383 = INT16_MAX;
	volatile int16_t x384 = INT16_MAX;

	t93 = ((x381<(x382&x383))/x384);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x385 = 31U;
	uint8_t x386 = 55U;
	uint8_t x387 = 30U;

	t94 = ((x385<(x386&x387))/x388);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x389 = INT8_MAX;
	volatile int64_t x390 = -668938453111LL;
	int16_t x391 = 5519;

	t95 = ((x389<(x390&x391))/x392);

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x394 = 1813LL;
	volatile int64_t x395 = INT64_MAX;
	static int16_t x396 = 1611;
	int32_t t96 = -14779392;

	t96 = ((x393<(x394&x395))/x396);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x397 = 1;
	static int16_t x398 = INT16_MIN;
	uint8_t x399 = UINT8_MAX;
	int8_t x400 = -1;

	t97 = ((x397<(x398&x399))/x400);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x405 = 37;
	uint16_t x406 = 0U;
	static uint32_t x407 = 0U;

	t98 = ((x405<(x406&x407))/x408);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x409 = 0U;
	static uint16_t x410 = UINT16_MAX;
	uint64_t x411 = UINT64_MAX;
	uint32_t x412 = 1320972U;
	uint32_t t99 = 72U;

	t99 = ((x409<(x410&x411))/x412);

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

