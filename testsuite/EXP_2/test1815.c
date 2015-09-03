#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MIN;
uint8_t x7 = 6U;
static volatile uint32_t x10 = UINT32_MAX;
int32_t x12 = 40;
int32_t t2 = -218;
static volatile int32_t x15 = -1257;
static int32_t x16 = 1080904;
volatile int32_t t4 = 23499;
uint16_t x22 = UINT16_MAX;
static int8_t x24 = 1;
static uint16_t x25 = 203U;
int32_t x32 = -854;
int32_t x33 = -1536;
int32_t x35 = -252015760;
int16_t x38 = 127;
int32_t t9 = -135;
int64_t x46 = 137523560390896LL;
static int16_t x47 = -3;
volatile int32_t t11 = 16962334;
static int64_t x59 = INT64_MIN;
static uint64_t x60 = 2630124772605929703LLU;
int32_t x64 = -1;
int64_t x70 = -1LL;
volatile int16_t x78 = INT16_MAX;
static volatile int16_t x81 = INT16_MAX;
int32_t x82 = INT32_MIN;
int32_t t20 = 757;
static uint16_t x85 = UINT16_MAX;
int64_t x96 = 1LL;
volatile int32_t t23 = 2231589;
int32_t x98 = 66;
static int32_t t24 = 19097901;
int32_t x113 = INT32_MIN;
static uint16_t x115 = 25948U;
static int32_t x120 = 1427;
int32_t t30 = 0;
volatile int8_t x137 = INT8_MAX;
uint16_t x142 = 7U;
uint64_t x148 = 12249051650LLU;
volatile int64_t x149 = -1LL;
uint32_t x161 = UINT32_MAX;
volatile uint64_t x165 = UINT64_MAX;
int32_t t41 = -7458;
int32_t x169 = 1082;
int64_t x170 = INT64_MIN;
int16_t x173 = INT16_MIN;
static uint64_t x174 = 5835685898610000961LLU;
int64_t x177 = INT64_MIN;
volatile int16_t x179 = -1;
int8_t x184 = INT8_MIN;
static int32_t x185 = INT32_MAX;
volatile int32_t t47 = -15;
volatile int32_t x193 = INT32_MIN;
volatile uint8_t x194 = 0U;
int16_t x198 = -1;
static int32_t x201 = INT32_MIN;
int16_t x207 = INT16_MIN;
volatile int16_t x209 = -5;
static int64_t x212 = 15956773086747851LL;
int32_t x217 = -1;
static int8_t x218 = 1;
static volatile int32_t t55 = 6893568;
uint8_t x227 = UINT8_MAX;
int8_t x228 = INT8_MAX;
volatile int32_t x229 = -10095817;
uint32_t x236 = UINT32_MAX;
static volatile uint64_t x238 = 71074918LLU;
int16_t x254 = INT16_MAX;
int32_t x256 = 791;
int32_t x266 = INT32_MAX;
static uint64_t x268 = UINT64_MAX;
int16_t x269 = INT16_MIN;
volatile uint16_t x277 = 1906U;
static int8_t x282 = 1;
int8_t x289 = INT8_MAX;
int32_t x301 = INT32_MIN;
static uint64_t x302 = 376694024472LLU;
int64_t x304 = INT64_MIN;
volatile uint16_t x306 = 58U;
static volatile uint32_t x307 = UINT32_MAX;
volatile int32_t t77 = 827346;
int16_t x318 = INT16_MIN;
static volatile int64_t x323 = INT64_MIN;
static int8_t x327 = 10;
static int32_t x333 = INT32_MIN;
int8_t x338 = INT8_MIN;
volatile int32_t t84 = 1;
int64_t x346 = 37272LL;
int32_t x349 = INT32_MIN;
uint8_t x352 = 3U;
uint32_t x356 = UINT32_MAX;
int32_t t89 = 78502;
int8_t x363 = -1;
uint16_t x364 = 37U;
int64_t x365 = 678428465911608LL;
volatile int16_t x367 = -3090;
int32_t t92 = -1447344;
uint64_t x376 = 11LLU;
volatile uint16_t x378 = 1U;
int8_t x383 = INT8_MIN;
uint16_t x387 = UINT16_MAX;
uint16_t x389 = 213U;
static int16_t x390 = -8638;
static uint64_t x391 = UINT64_MAX;
static volatile int32_t t97 = 90805513;
static int32_t x393 = INT32_MIN;
volatile int32_t x395 = INT32_MIN;
uint16_t x396 = UINT16_MAX;


void f0(void) {
	int64_t x1 = INT64_MAX;
	volatile int16_t x3 = INT16_MIN;
	int8_t x4 = -1;
	int32_t t0 = 7;

	t0 = ((x1<=(x2&x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 1;
	uint32_t x6 = 271828U;
	int16_t x8 = INT16_MAX;
	int32_t t1 = 24878525;

	t1 = ((x5<=(x6&x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = 1;
	static volatile int16_t x11 = -2;

	t2 = ((x9<=(x10&x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	uint16_t x14 = UINT16_MAX;
	volatile int32_t t3 = 0;

	t3 = ((x13<=(x14&x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = INT8_MAX;
	volatile uint32_t x18 = UINT32_MAX;
	int64_t x19 = 0LL;
	static uint64_t x20 = UINT64_MAX;

	t4 = ((x17<=(x18&x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 108373U;
	uint64_t x23 = 241168646512909LLU;
	int32_t t5 = -139488926;

	t5 = ((x21<=(x22&x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x26 = 244897282546768LL;
	static volatile int16_t x27 = INT16_MIN;
	static int8_t x28 = INT8_MIN;
	int32_t t6 = 31;

	t6 = ((x25<=(x26&x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	int8_t x30 = INT8_MAX;
	int16_t x31 = INT16_MIN;
	volatile int32_t t7 = -4464379;

	t7 = ((x29<=(x30&x31))==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x34 = 170;
	int64_t x36 = -4117LL;
	volatile int32_t t8 = -578845;

	t8 = ((x33<=(x34&x35))==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x37 = 35U;
	static int8_t x39 = INT8_MIN;
	static int64_t x40 = INT64_MIN;

	t9 = ((x37<=(x38&x39))==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x41 = -1;
	volatile int8_t x42 = INT8_MIN;
	uint32_t x43 = UINT32_MAX;
	volatile int16_t x44 = INT16_MAX;
	int32_t t10 = -33;

	t10 = ((x41<=(x42&x43))==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x45 = INT16_MIN;
	uint32_t x48 = UINT32_MAX;

	t11 = ((x45<=(x46&x47))==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x49 = INT32_MIN;
	int32_t x50 = INT32_MIN;
	int16_t x51 = INT16_MIN;
	static volatile int32_t x52 = INT32_MAX;
	volatile int32_t t12 = -66101419;

	t12 = ((x49<=(x50&x51))==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 263361428LLU;
	uint32_t x54 = UINT32_MAX;
	uint8_t x55 = 11U;
	int8_t x56 = -17;
	int32_t t13 = 416;

	t13 = ((x53<=(x54&x55))==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -794069;
	static int16_t x58 = INT16_MIN;
	static volatile int32_t t14 = -24981003;

	t14 = ((x57<=(x58&x59))==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = 3575;
	int32_t x62 = -1;
	uint8_t x63 = UINT8_MAX;
	int32_t t15 = -15200;

	t15 = ((x61<=(x62&x63))==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = 111LLU;
	int32_t x66 = INT32_MIN;
	int8_t x67 = -1;
	static volatile int32_t x68 = 10924959;
	static int32_t t16 = -1905;

	t16 = ((x65<=(x66&x67))==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint32_t x69 = UINT32_MAX;
	volatile uint16_t x71 = 274U;
	int32_t x72 = -1;
	int32_t t17 = -4;

	t17 = ((x69<=(x70&x71))==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x73 = 1093U;
	int16_t x74 = INT16_MIN;
	uint32_t x75 = 281U;
	volatile int64_t x76 = INT64_MIN;
	int32_t t18 = -1;

	t18 = ((x73<=(x74&x75))==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x77 = -1LL;
	static int16_t x79 = INT16_MIN;
	static int16_t x80 = INT16_MAX;
	int32_t t19 = 6936628;

	t19 = ((x77<=(x78&x79))==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x83 = -1;
	int32_t x84 = INT32_MIN;

	t20 = ((x81<=(x82&x83))==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x86 = INT8_MAX;
	volatile uint16_t x87 = 56U;
	int16_t x88 = -15069;
	volatile int32_t t21 = 59253590;

	t21 = ((x85<=(x86&x87))==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = -44;
	static uint8_t x90 = 32U;
	int16_t x91 = -237;
	static int8_t x92 = 20;
	volatile int32_t t22 = 0;

	t22 = ((x89<=(x90&x91))==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MIN;
	static uint32_t x94 = UINT32_MAX;
	static int64_t x95 = INT64_MIN;

	t23 = ((x93<=(x94&x95))==x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int16_t x97 = -1;
	static int16_t x99 = -1;
	int16_t x100 = -1;

	t24 = ((x97<=(x98&x99))==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x101 = 7U;
	volatile uint16_t x102 = 43U;
	int32_t x103 = -1;
	int16_t x104 = 28;
	volatile int32_t t25 = 105;

	t25 = ((x101<=(x102&x103))==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x105 = 15U;
	int32_t x106 = -4;
	int64_t x107 = -1LL;
	uint8_t x108 = 4U;
	volatile int32_t t26 = 192;

	t26 = ((x105<=(x106&x107))==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MAX;
	volatile uint64_t x110 = 431277044LLU;
	int64_t x111 = -1LL;
	static int16_t x112 = INT16_MIN;
	volatile int32_t t27 = 125;

	t27 = ((x109<=(x110&x111))==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x114 = UINT32_MAX;
	int16_t x116 = -1;
	static int32_t t28 = 9832;

	t28 = ((x113<=(x114&x115))==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MIN;
	static int16_t x118 = 3360;
	int16_t x119 = INT16_MAX;
	volatile int32_t t29 = 77;

	t29 = ((x117<=(x118&x119))==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MAX;
	static int8_t x122 = INT8_MIN;
	int16_t x123 = -844;
	static int8_t x124 = INT8_MIN;

	t30 = ((x121<=(x122&x123))==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x125 = -1;
	uint64_t x126 = 56508LLU;
	int16_t x127 = 21;
	int32_t x128 = INT32_MAX;
	int32_t t31 = 61768;

	t31 = ((x125<=(x126&x127))==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = INT16_MIN;
	int32_t x130 = -1;
	int32_t x131 = INT32_MIN;
	int16_t x132 = 187;
	static int32_t t32 = -65507;

	t32 = ((x129<=(x130&x131))==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = 74U;
	volatile uint32_t x134 = UINT32_MAX;
	uint32_t x135 = 1832588127U;
	uint32_t x136 = UINT32_MAX;
	volatile int32_t t33 = -1;

	t33 = ((x133<=(x134&x135))==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x138 = UINT32_MAX;
	uint64_t x139 = 166975026139LLU;
	static int32_t x140 = -1;
	static volatile int32_t t34 = -61;

	t34 = ((x137<=(x138&x139))==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x141 = -1LL;
	volatile int64_t x143 = INT64_MIN;
	static uint64_t x144 = UINT64_MAX;
	volatile int32_t t35 = 152735870;

	t35 = ((x141<=(x142&x143))==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x145 = INT32_MAX;
	volatile int32_t x146 = 307849769;
	int32_t x147 = INT32_MAX;
	static int32_t t36 = -32479;

	t36 = ((x145<=(x146&x147))==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x150 = 2U;
	int32_t x151 = INT32_MIN;
	int64_t x152 = -1LL;
	static volatile int32_t t37 = 4193;

	t37 = ((x149<=(x150&x151))==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x153 = 13;
	int64_t x154 = INT64_MAX;
	int64_t x155 = INT64_MIN;
	int16_t x156 = INT16_MIN;
	volatile int32_t t38 = 56291;

	t38 = ((x153<=(x154&x155))==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MIN;
	static int16_t x158 = 8;
	volatile uint64_t x159 = 361056755820LLU;
	volatile uint8_t x160 = UINT8_MAX;
	volatile int32_t t39 = 76;

	t39 = ((x157<=(x158&x159))==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x162 = INT16_MAX;
	static int32_t x163 = INT32_MIN;
	uint64_t x164 = 2454927LLU;
	int32_t t40 = -1007956896;

	t40 = ((x161<=(x162&x163))==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x166 = INT64_MIN;
	int64_t x167 = -176LL;
	uint16_t x168 = 10921U;

	t41 = ((x165<=(x166&x167))==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x171 = -1;
	static int8_t x172 = INT8_MIN;
	int32_t t42 = 2499;

	t42 = ((x169<=(x170&x171))==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x175 = 487513040U;
	uint16_t x176 = 1U;
	int32_t t43 = 42;

	t43 = ((x173<=(x174&x175))==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x178 = 1U;
	static int32_t x180 = -56138696;
	int32_t t44 = -534938;

	t44 = ((x177<=(x178&x179))==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = INT32_MIN;
	volatile int32_t x182 = INT32_MIN;
	volatile uint64_t x183 = 133048081LLU;
	int32_t t45 = 335291;

	t45 = ((x181<=(x182&x183))==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x186 = -1;
	int16_t x187 = 750;
	static int64_t x188 = INT64_MAX;
	static volatile int32_t t46 = 14381;

	t46 = ((x185<=(x186&x187))==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x189 = -1;
	int32_t x190 = 819950;
	volatile uint32_t x191 = 1320855172U;
	uint8_t x192 = UINT8_MAX;

	t47 = ((x189<=(x190&x191))==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x195 = 2045035U;
	int64_t x196 = INT64_MAX;
	volatile int32_t t48 = -582484;

	t48 = ((x193<=(x194&x195))==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MIN;
	static int8_t x199 = -1;
	int8_t x200 = 0;
	int32_t t49 = -1;

	t49 = ((x197<=(x198&x199))==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x202 = INT64_MAX;
	uint64_t x203 = 11725995LLU;
	volatile int8_t x204 = INT8_MIN;
	volatile int32_t t50 = -4814392;

	t50 = ((x201<=(x202&x203))==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x205 = -1;
	static int16_t x206 = INT16_MAX;
	volatile int8_t x208 = INT8_MAX;
	static int32_t t51 = -118663520;

	t51 = ((x205<=(x206&x207))==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x210 = UINT8_MAX;
	int64_t x211 = -1LL;
	volatile int32_t t52 = 42;

	t52 = ((x209<=(x210&x211))==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = -5206013LL;
	int32_t x214 = INT32_MAX;
	volatile uint32_t x215 = 63305U;
	int32_t x216 = -1;
	static int32_t t53 = 15478;

	t53 = ((x213<=(x214&x215))==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint8_t x219 = UINT8_MAX;
	int16_t x220 = INT16_MIN;
	int32_t t54 = -2345785;

	t54 = ((x217<=(x218&x219))==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x221 = INT16_MAX;
	uint64_t x222 = UINT64_MAX;
	static volatile uint8_t x223 = 2U;
	int64_t x224 = -1LL;

	t55 = ((x221<=(x222&x223))==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = 7017653988LLU;
	int32_t x226 = -1;
	int32_t t56 = 19114;

	t56 = ((x225<=(x226&x227))==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x230 = INT32_MAX;
	int64_t x231 = INT64_MIN;
	int16_t x232 = INT16_MAX;
	volatile int32_t t57 = -13077624;

	t57 = ((x229<=(x230&x231))==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = -10;
	int8_t x234 = INT8_MIN;
	static uint8_t x235 = UINT8_MAX;
	int32_t t58 = -79;

	t58 = ((x233<=(x234&x235))==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MIN;
	int32_t x239 = 0;
	int16_t x240 = -25;
	volatile int32_t t59 = -893608637;

	t59 = ((x237<=(x238&x239))==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x241 = 1;
	int32_t x242 = INT32_MAX;
	volatile int32_t x243 = INT32_MIN;
	int8_t x244 = 0;
	static int32_t t60 = 0;

	t60 = ((x241<=(x242&x243))==x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = INT64_MIN;
	int16_t x246 = 2940;
	volatile int8_t x247 = INT8_MIN;
	int64_t x248 = INT64_MIN;
	static int32_t t61 = 90251089;

	t61 = ((x245<=(x246&x247))==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MIN;
	static int64_t x250 = INT64_MAX;
	uint16_t x251 = 22634U;
	int32_t x252 = 49993353;
	volatile int32_t t62 = -779;

	t62 = ((x249<=(x250&x251))==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x253 = -1;
	volatile uint32_t x255 = UINT32_MAX;
	int32_t t63 = 1;

	t63 = ((x253<=(x254&x255))==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x257 = UINT16_MAX;
	int8_t x258 = -1;
	int64_t x259 = INT64_MIN;
	int16_t x260 = -1;
	volatile int32_t t64 = 111933;

	t64 = ((x257<=(x258&x259))==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = 45254383U;
	int16_t x262 = 5105;
	volatile uint64_t x263 = 0LLU;
	uint8_t x264 = UINT8_MAX;
	volatile int32_t t65 = -24416677;

	t65 = ((x261<=(x262&x263))==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = INT8_MIN;
	uint64_t x267 = UINT64_MAX;
	int32_t t66 = -319;

	t66 = ((x265<=(x266&x267))==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x270 = INT64_MIN;
	int8_t x271 = -1;
	int16_t x272 = 111;
	static volatile int32_t t67 = -5;

	t67 = ((x269<=(x270&x271))==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = INT8_MIN;
	uint8_t x274 = 9U;
	int32_t x275 = INT32_MIN;
	int8_t x276 = INT8_MIN;
	int32_t t68 = -497;

	t68 = ((x273<=(x274&x275))==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x278 = 1512946LLU;
	int32_t x279 = 0;
	int64_t x280 = INT64_MIN;
	static int32_t t69 = 284;

	t69 = ((x277<=(x278&x279))==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = INT8_MIN;
	static uint32_t x283 = 3U;
	volatile uint32_t x284 = 6271030U;
	volatile int32_t t70 = -7368;

	t70 = ((x281<=(x282&x283))==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x285 = -1;
	int32_t x286 = INT32_MIN;
	int64_t x287 = 252601173LL;
	int16_t x288 = INT16_MIN;
	int32_t t71 = -1;

	t71 = ((x285<=(x286&x287))==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x290 = INT32_MIN;
	int16_t x291 = INT16_MIN;
	int16_t x292 = INT16_MIN;
	volatile int32_t t72 = -234639867;

	t72 = ((x289<=(x290&x291))==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = -1;
	int32_t x294 = -1;
	int8_t x295 = -1;
	int64_t x296 = -34233283LL;
	volatile int32_t t73 = -1;

	t73 = ((x293<=(x294&x295))==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = -39731964;
	uint16_t x298 = UINT16_MAX;
	uint16_t x299 = 3559U;
	static uint16_t x300 = 13U;
	static volatile int32_t t74 = -430;

	t74 = ((x297<=(x298&x299))==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x303 = INT16_MAX;
	volatile int32_t t75 = 3219693;

	t75 = ((x301<=(x302&x303))==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = -1;
	static uint8_t x308 = UINT8_MAX;
	int32_t t76 = -12274;

	t76 = ((x305<=(x306&x307))==x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MAX;
	int64_t x310 = 24421358LL;
	int64_t x311 = INT64_MIN;
	int8_t x312 = INT8_MIN;

	t77 = ((x309<=(x310&x311))==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = 1U;
	static int8_t x314 = 2;
	volatile int8_t x315 = -1;
	uint16_t x316 = 16U;
	volatile int32_t t78 = -9;

	t78 = ((x313<=(x314&x315))==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x317 = 1146422LLU;
	static volatile int16_t x319 = -7369;
	uint8_t x320 = 9U;
	volatile int32_t t79 = -3845;

	t79 = ((x317<=(x318&x319))==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x321 = INT8_MIN;
	volatile int32_t x322 = INT32_MIN;
	int8_t x324 = INT8_MIN;
	int32_t t80 = 3960;

	t80 = ((x321<=(x322&x323))==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = 0LL;
	volatile int32_t x326 = 498720908;
	int64_t x328 = -30513488224316037LL;
	int32_t t81 = 16668305;

	t81 = ((x325<=(x326&x327))==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = UINT64_MAX;
	uint64_t x330 = 38LLU;
	int8_t x331 = -1;
	static uint32_t x332 = UINT32_MAX;
	int32_t t82 = 8;

	t82 = ((x329<=(x330&x331))==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x334 = 1U;
	uint64_t x335 = 10007405035345440LLU;
	int8_t x336 = 7;
	volatile int32_t t83 = -17025;

	t83 = ((x333<=(x334&x335))==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = -1LL;
	static int64_t x339 = -1LL;
	static volatile int16_t x340 = INT16_MAX;

	t84 = ((x337<=(x338&x339))==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x341 = INT16_MAX;
	int8_t x342 = INT8_MIN;
	volatile int8_t x343 = INT8_MIN;
	int64_t x344 = -1LL;
	int32_t t85 = -89609;

	t85 = ((x341<=(x342&x343))==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = UINT64_MAX;
	volatile int32_t x347 = 32528346;
	int32_t x348 = INT32_MIN;
	volatile int32_t t86 = -51258;

	t86 = ((x345<=(x346&x347))==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x350 = 0;
	int16_t x351 = INT16_MAX;
	int32_t t87 = 186952321;

	t87 = ((x349<=(x350&x351))==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x353 = INT32_MIN;
	int16_t x354 = -1;
	int32_t x355 = INT32_MAX;
	int32_t t88 = -21367;

	t88 = ((x353<=(x354&x355))==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = INT8_MIN;
	static uint64_t x358 = 445LLU;
	int64_t x359 = -1LL;
	static uint32_t x360 = 59075156U;

	t89 = ((x357<=(x358&x359))==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint64_t x361 = UINT64_MAX;
	int8_t x362 = INT8_MIN;
	int32_t t90 = -390011;

	t90 = ((x361<=(x362&x363))==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x366 = -5LL;
	static uint8_t x368 = UINT8_MAX;
	volatile int32_t t91 = -30196;

	t91 = ((x365<=(x366&x367))==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = INT64_MIN;
	int64_t x370 = -1LL;
	uint16_t x371 = 0U;
	uint32_t x372 = 58157974U;

	t92 = ((x369<=(x370&x371))==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x373 = -698;
	volatile int8_t x374 = 0;
	int8_t x375 = INT8_MIN;
	volatile int32_t t93 = 104867470;

	t93 = ((x373<=(x374&x375))==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x377 = 1U;
	uint64_t x379 = 130185003LLU;
	int32_t x380 = -1;
	int32_t t94 = -437;

	t94 = ((x377<=(x378&x379))==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x381 = 4;
	uint8_t x382 = UINT8_MAX;
	uint32_t x384 = 3066098U;
	int32_t t95 = -22545;

	t95 = ((x381<=(x382&x383))==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x385 = 2U;
	int16_t x386 = INT16_MIN;
	uint8_t x388 = 7U;
	static int32_t t96 = 3;

	t96 = ((x385<=(x386&x387))==x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x392 = INT32_MIN;

	t97 = ((x389<=(x390&x391))==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x394 = INT32_MIN;
	static volatile int32_t t98 = 1;

	t98 = ((x393<=(x394&x395))==x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = -140231460;
	volatile int64_t x398 = -62577368883346LL;
	int16_t x399 = INT16_MIN;
	int64_t x400 = 1487949586LL;
	volatile int32_t t99 = 38;

	t99 = ((x397<=(x398&x399))==x400);

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

