#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x13 = 0;
int8_t x14 = INT8_MAX;
int16_t x15 = -1;
uint32_t x16 = 482U;
int8_t x17 = 0;
uint8_t x19 = 17U;
volatile int32_t t5 = 38664;
static int16_t x26 = -326;
static int32_t x28 = INT32_MIN;
static volatile uint32_t x30 = 51050460U;
int32_t t9 = 2857860;
int32_t x42 = INT32_MIN;
volatile int16_t x45 = INT16_MIN;
int64_t x46 = -1LL;
static int64_t x50 = INT64_MIN;
volatile uint32_t t12 = 183U;
volatile int32_t x55 = INT32_MIN;
volatile int16_t x58 = INT16_MIN;
int8_t x63 = -23;
static volatile int32_t t15 = -63;
volatile int64_t x70 = 2244386568159237963LL;
int64_t x73 = 62942203LL;
uint16_t x79 = 1876U;
volatile int8_t x80 = INT8_MIN;
uint8_t x82 = 2U;
static volatile uint8_t x84 = 97U;
int16_t x93 = INT16_MAX;
int32_t x97 = INT32_MIN;
static int32_t x98 = INT32_MAX;
static int32_t t24 = -73;
int32_t x102 = -1;
int8_t x103 = INT8_MIN;
uint64_t x107 = UINT64_MAX;
static volatile int32_t t26 = 43;
int64_t x113 = -5753286LL;
int16_t x120 = -1;
volatile int16_t x131 = INT16_MAX;
int16_t x133 = INT16_MIN;
int64_t x138 = INT64_MAX;
int32_t t33 = 229547447;
int32_t x141 = -11086;
volatile uint32_t x142 = 92998843U;
uint32_t x146 = 127U;
int8_t x149 = 56;
uint16_t x158 = 5U;
uint64_t x167 = 3798703159627428LLU;
volatile int32_t t40 = 42161;
volatile int16_t x172 = -165;
int8_t x176 = -1;
uint32_t x180 = 1583567095U;
int32_t x183 = -1;
int32_t x186 = 0;
int16_t x191 = -16254;
int8_t x192 = 1;
int32_t t46 = 93288;
int32_t x196 = INT32_MIN;
volatile int32_t t47 = 62825489;
uint32_t x197 = 747U;
volatile int32_t t48 = -151969632;
static int64_t x202 = INT64_MIN;
volatile int16_t x203 = -1;
uint8_t x212 = UINT8_MAX;
static int32_t t51 = -185752722;
uint32_t t55 = 192U;
int32_t x235 = INT32_MIN;
int32_t x236 = 5985718;
int8_t x242 = INT8_MIN;
volatile int32_t x255 = -5221216;
volatile int32_t t62 = -3675;
volatile int64_t x257 = INT64_MIN;
int16_t x259 = INT16_MIN;
int32_t x262 = INT32_MIN;
int64_t x264 = INT64_MAX;
int32_t x269 = INT32_MAX;
uint64_t x270 = 139288867LLU;
int8_t x290 = INT8_MAX;
static int8_t x295 = 1;
uint8_t x296 = UINT8_MAX;
int32_t t72 = 21361;
static uint8_t x297 = UINT8_MAX;
volatile uint16_t x300 = 16226U;
int16_t x310 = -1;
static int32_t x311 = INT32_MAX;
volatile uint8_t x312 = UINT8_MAX;
int32_t t76 = 3747616;
int32_t x313 = -1;
uint8_t x317 = UINT8_MAX;
static int32_t x320 = INT32_MIN;
uint32_t x322 = UINT32_MAX;
int64_t t80 = 1LL;
int32_t x332 = INT32_MIN;
static volatile uint32_t t82 = 1764386589U;
volatile int64_t x337 = INT64_MIN;
int32_t x338 = INT32_MIN;
int32_t x340 = -1;
int32_t t83 = 60;
static volatile uint32_t x343 = 114607388U;
uint64_t x346 = 4372899753LLU;
int16_t x355 = INT16_MAX;
static volatile int64_t x356 = INT64_MAX;
int32_t x359 = -1;
int8_t x366 = INT8_MAX;
uint8_t x368 = 1U;
int8_t x371 = INT8_MIN;
uint32_t x374 = 4853905U;
int64_t x379 = -1LL;
int8_t x382 = INT8_MIN;
int16_t x384 = -1;
int64_t x390 = -1LL;
uint64_t x391 = 16160118827LLU;
static int32_t t97 = -381802777;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	int8_t x2 = 28;
	int16_t x3 = -199;
	volatile int32_t x4 = -1;
	volatile int32_t t0 = 27847;

	t0 = ((x1<(x2<x3))%x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = -1;
	int8_t x6 = 28;
	int8_t x7 = -1;
	static int16_t x8 = 8786;
	int32_t t1 = -1511777;

	t1 = ((x5<(x6<x7))%x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	volatile uint32_t x10 = 1U;
	int16_t x11 = -1;
	int64_t x12 = -254464731359LL;
	volatile int64_t t2 = -6165651128853LL;

	t2 = ((x9<(x10<x11))%x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t t3 = 21004U;

	t3 = ((x13<(x14<x15))%x16);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x18 = 2U;
	static int64_t x20 = INT64_MIN;
	volatile int64_t t4 = 2530202037881403881LL;

	t4 = ((x17<(x18<x19))%x20);

	if (t4 != 1LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = UINT8_MAX;
	int16_t x22 = -2990;
	uint8_t x23 = UINT8_MAX;
	int32_t x24 = INT32_MIN;

	t5 = ((x21<(x22<x23))%x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	uint64_t x27 = UINT64_MAX;
	int32_t t6 = 17453254;

	t6 = ((x25<(x26<x27))%x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 200046345706850780LLU;
	static uint8_t x31 = 64U;
	int64_t x32 = -1LL;
	static volatile int64_t t7 = -1553LL;

	t7 = ((x29<(x30<x31))%x32);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	volatile int16_t x34 = -2343;
	int32_t x35 = INT32_MAX;
	static int64_t x36 = INT64_MIN;
	volatile int64_t t8 = -392777386797141LL;

	t8 = ((x33<(x34<x35))%x36);

	if (t8 != 1LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x37 = INT16_MIN;
	uint8_t x38 = 1U;
	uint16_t x39 = UINT16_MAX;
	uint8_t x40 = 5U;

	t9 = ((x37<(x38<x39))%x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	static volatile uint64_t x43 = 3358LLU;
	int32_t x44 = INT32_MIN;
	int32_t t10 = 24825;

	t10 = ((x41<(x42<x43))%x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x47 = UINT16_MAX;
	int16_t x48 = 4080;
	volatile int32_t t11 = -523668;

	t11 = ((x45<(x46<x47))%x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = -1;
	int16_t x51 = INT16_MIN;
	uint32_t x52 = 23U;

	t12 = ((x49<(x50<x51))%x52);

	if (t12 != 1U) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x53 = UINT64_MAX;
	int16_t x54 = 12;
	int32_t x56 = INT32_MAX;
	static int32_t t13 = -43042172;

	t13 = ((x53<(x54<x55))%x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x57 = 4504184680LL;
	int8_t x59 = INT8_MIN;
	volatile int16_t x60 = INT16_MIN;
	int32_t t14 = 1;

	t14 = ((x57<(x58<x59))%x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MIN;
	int16_t x62 = INT16_MIN;
	int16_t x64 = INT16_MAX;

	t15 = ((x61<(x62<x63))%x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 126U;
	uint32_t x66 = UINT32_MAX;
	int64_t x67 = -42830165182738536LL;
	static uint64_t x68 = 19016LLU;
	volatile uint64_t t16 = 942802489372LLU;

	t16 = ((x65<(x66<x67))%x68);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = -267;
	static volatile int32_t x71 = -1;
	static int8_t x72 = 6;
	volatile int32_t t17 = 51508;

	t17 = ((x69<(x70<x71))%x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x74 = INT16_MAX;
	uint8_t x75 = 1U;
	volatile uint16_t x76 = 13U;
	volatile int32_t t18 = -3627;

	t18 = ((x73<(x74<x75))%x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = 117U;
	int8_t x78 = 2;
	int32_t t19 = -80;

	t19 = ((x77<(x78<x79))%x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = 57919;
	static int16_t x83 = INT16_MIN;
	static int32_t t20 = -28400889;

	t20 = ((x81<(x82<x83))%x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = -1;
	int16_t x86 = -1;
	static uint32_t x87 = UINT32_MAX;
	int16_t x88 = -1;
	int32_t t21 = 13437155;

	t21 = ((x85<(x86<x87))%x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x89 = -1LL;
	int16_t x90 = INT16_MAX;
	uint64_t x91 = 3460LLU;
	static volatile int32_t x92 = INT32_MIN;
	int32_t t22 = 533;

	t22 = ((x89<(x90<x91))%x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x94 = INT16_MIN;
	volatile int8_t x95 = INT8_MIN;
	uint16_t x96 = UINT16_MAX;
	volatile int32_t t23 = 38;

	t23 = ((x93<(x94<x95))%x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x99 = -105833534;
	volatile int16_t x100 = INT16_MAX;

	t24 = ((x97<(x98<x99))%x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x101 = INT32_MAX;
	int32_t x104 = 25509;
	volatile int32_t t25 = -8023;

	t25 = ((x101<(x102<x103))%x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MIN;
	int64_t x106 = -2028LL;
	int8_t x108 = -1;

	t26 = ((x105<(x106<x107))%x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x114 = 2950;
	volatile int8_t x115 = INT8_MIN;
	volatile uint32_t x116 = 3U;
	volatile uint32_t t27 = 22280U;

	t27 = ((x113<(x114<x115))%x116);

	if (t27 != 1U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x117 = 3163671618LLU;
	int32_t x118 = INT32_MIN;
	int8_t x119 = 1;
	int32_t t28 = 1;

	t28 = ((x117<(x118<x119))%x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x121 = 1;
	static int32_t x122 = INT32_MAX;
	static int32_t x123 = INT32_MIN;
	int32_t x124 = -786552440;
	volatile int32_t t29 = -56913;

	t29 = ((x121<(x122<x123))%x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x125 = INT32_MIN;
	volatile int32_t x126 = 10596651;
	static volatile uint16_t x127 = 339U;
	int8_t x128 = INT8_MAX;
	int32_t t30 = 154227038;

	t30 = ((x125<(x126<x127))%x128);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x129 = UINT32_MAX;
	int8_t x130 = INT8_MAX;
	static int64_t x132 = INT64_MIN;
	static int64_t t31 = 118334632957722924LL;

	t31 = ((x129<(x130<x131))%x132);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x134 = 24549U;
	uint64_t x135 = UINT64_MAX;
	int64_t x136 = -1LL;
	static volatile int64_t t32 = 2193950165765758LL;

	t32 = ((x133<(x134<x135))%x136);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x137 = UINT32_MAX;
	uint32_t x139 = 3145076U;
	static int16_t x140 = INT16_MIN;

	t33 = ((x137<(x138<x139))%x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x143 = 1LL;
	static uint16_t x144 = 222U;
	volatile int32_t t34 = 2562530;

	t34 = ((x141<(x142<x143))%x144);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x145 = 125593U;
	uint8_t x147 = UINT8_MAX;
	static int64_t x148 = -531077LL;
	static int64_t t35 = 14069LL;

	t35 = ((x145<(x146<x147))%x148);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x150 = 35648391LLU;
	int16_t x151 = INT16_MIN;
	static int64_t x152 = -1LL;
	int64_t t36 = -3LL;

	t36 = ((x149<(x150<x151))%x152);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x153 = 5737925666373050095LLU;
	int16_t x154 = -1;
	static int64_t x155 = -1LL;
	static int32_t x156 = INT32_MIN;
	int32_t t37 = 1613;

	t37 = ((x153<(x154<x155))%x156);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x157 = INT32_MIN;
	int16_t x159 = INT16_MAX;
	int8_t x160 = -1;
	static int32_t t38 = -216;

	t38 = ((x157<(x158<x159))%x160);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x161 = 12;
	int16_t x162 = INT16_MIN;
	int8_t x163 = -3;
	int8_t x164 = INT8_MIN;
	int32_t t39 = -140;

	t39 = ((x161<(x162<x163))%x164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x165 = INT64_MAX;
	volatile int64_t x166 = INT64_MIN;
	uint8_t x168 = UINT8_MAX;

	t40 = ((x165<(x166<x167))%x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x169 = -1;
	uint8_t x170 = 1U;
	static uint16_t x171 = UINT16_MAX;
	volatile int32_t t41 = 103868;

	t41 = ((x169<(x170<x171))%x172);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x173 = 8U;
	int16_t x174 = -1;
	int64_t x175 = INT64_MAX;
	int32_t t42 = -413842;

	t42 = ((x173<(x174<x175))%x176);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x177 = UINT16_MAX;
	int64_t x178 = INT64_MIN;
	volatile int8_t x179 = INT8_MIN;
	volatile uint32_t t43 = 1258097770U;

	t43 = ((x177<(x178<x179))%x180);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x181 = 636827670267913LLU;
	int8_t x182 = INT8_MAX;
	volatile int16_t x184 = 7;
	int32_t t44 = -44748407;

	t44 = ((x181<(x182<x183))%x184);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x185 = INT8_MIN;
	int16_t x187 = INT16_MIN;
	static int32_t x188 = INT32_MIN;
	static volatile int32_t t45 = -137708;

	t45 = ((x185<(x186<x187))%x188);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x189 = INT32_MIN;
	uint64_t x190 = 480950LLU;

	t46 = ((x189<(x190<x191))%x192);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x193 = INT16_MIN;
	static int16_t x194 = INT16_MAX;
	int8_t x195 = INT8_MIN;

	t47 = ((x193<(x194<x195))%x196);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x198 = 92U;
	int8_t x199 = -1;
	volatile int32_t x200 = -1;

	t48 = ((x197<(x198<x199))%x200);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x201 = INT64_MIN;
	int8_t x204 = INT8_MIN;
	int32_t t49 = -4348457;

	t49 = ((x201<(x202<x203))%x204);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x205 = 1729870U;
	static uint32_t x206 = UINT32_MAX;
	int32_t x207 = INT32_MIN;
	static uint8_t x208 = 1U;
	int32_t t50 = -517937;

	t50 = ((x205<(x206<x207))%x208);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x209 = -1;
	int8_t x210 = INT8_MIN;
	int16_t x211 = -822;

	t51 = ((x209<(x210<x211))%x212);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x213 = INT64_MAX;
	int32_t x214 = INT32_MIN;
	int16_t x215 = INT16_MAX;
	volatile uint8_t x216 = 58U;
	int32_t t52 = -53;

	t52 = ((x213<(x214<x215))%x216);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x217 = 145U;
	uint16_t x218 = 2U;
	int32_t x219 = INT32_MIN;
	volatile uint8_t x220 = UINT8_MAX;
	int32_t t53 = -228645588;

	t53 = ((x217<(x218<x219))%x220);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x221 = 41827134;
	int16_t x222 = -153;
	int32_t x223 = -1;
	int8_t x224 = -1;
	volatile int32_t t54 = -670978760;

	t54 = ((x221<(x222<x223))%x224);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x225 = INT32_MIN;
	uint64_t x226 = 31417433848LLU;
	volatile uint64_t x227 = 7554250345LLU;
	uint32_t x228 = 13310U;

	t55 = ((x225<(x226<x227))%x228);

	if (t55 != 1U) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x229 = UINT8_MAX;
	int64_t x230 = INT64_MAX;
	int8_t x231 = -1;
	int8_t x232 = 8;
	volatile int32_t t56 = 3;

	t56 = ((x229<(x230<x231))%x232);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x233 = INT16_MIN;
	int8_t x234 = INT8_MIN;
	volatile int32_t t57 = 466;

	t57 = ((x233<(x234<x235))%x236);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x237 = -6;
	int16_t x238 = INT16_MIN;
	uint64_t x239 = 357085644082702LLU;
	static int16_t x240 = INT16_MIN;
	int32_t t58 = 23;

	t58 = ((x237<(x238<x239))%x240);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x241 = 6U;
	volatile int16_t x243 = INT16_MIN;
	volatile uint64_t x244 = 1144285984609386241LLU;
	volatile uint64_t t59 = 84LLU;

	t59 = ((x241<(x242<x243))%x244);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x245 = INT8_MIN;
	uint16_t x246 = 242U;
	uint32_t x247 = 130724849U;
	volatile int8_t x248 = -1;
	static volatile int32_t t60 = -1046682209;

	t60 = ((x245<(x246<x247))%x248);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x249 = INT64_MIN;
	uint64_t x250 = UINT64_MAX;
	volatile int64_t x251 = INT64_MAX;
	int8_t x252 = INT8_MAX;
	int32_t t61 = -1;

	t61 = ((x249<(x250<x251))%x252);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int8_t x253 = -1;
	uint64_t x254 = 65LLU;
	volatile uint16_t x256 = 2385U;

	t62 = ((x253<(x254<x255))%x256);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x258 = 112U;
	int16_t x260 = -10938;
	static int32_t t63 = 146291;

	t63 = ((x257<(x258<x259))%x260);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x261 = UINT8_MAX;
	uint32_t x263 = UINT32_MAX;
	int64_t t64 = -3120101LL;

	t64 = ((x261<(x262<x263))%x264);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x265 = INT32_MAX;
	uint32_t x266 = 33651U;
	int64_t x267 = 454358LL;
	static int8_t x268 = INT8_MAX;
	volatile int32_t t65 = -431023;

	t65 = ((x265<(x266<x267))%x268);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x271 = -1;
	int16_t x272 = -1;
	volatile int32_t t66 = -1279021;

	t66 = ((x269<(x270<x271))%x272);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x273 = INT32_MIN;
	int16_t x274 = INT16_MAX;
	int64_t x275 = INT64_MIN;
	int64_t x276 = 4408255LL;
	int64_t t67 = -528279052487957900LL;

	t67 = ((x273<(x274<x275))%x276);

	if (t67 != 1LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x277 = INT32_MIN;
	int8_t x278 = 22;
	uint32_t x279 = 5571U;
	int8_t x280 = INT8_MIN;
	static volatile int32_t t68 = 18605522;

	t68 = ((x277<(x278<x279))%x280);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x281 = INT8_MAX;
	int8_t x282 = -6;
	volatile int16_t x283 = -1;
	int16_t x284 = -1;
	volatile int32_t t69 = 33437;

	t69 = ((x281<(x282<x283))%x284);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x285 = 107;
	static int64_t x286 = -3836265LL;
	volatile int8_t x287 = INT8_MAX;
	int32_t x288 = -1;
	static volatile int32_t t70 = 846703515;

	t70 = ((x285<(x286<x287))%x288);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x289 = INT32_MIN;
	uint32_t x291 = UINT32_MAX;
	volatile uint16_t x292 = 9179U;
	static int32_t t71 = 339;

	t71 = ((x289<(x290<x291))%x292);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x293 = -1LL;
	uint16_t x294 = UINT16_MAX;

	t72 = ((x293<(x294<x295))%x296);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x298 = INT32_MAX;
	uint64_t x299 = 71510845335LLU;
	static volatile int32_t t73 = 123;

	t73 = ((x297<(x298<x299))%x300);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x301 = INT32_MIN;
	int32_t x302 = INT32_MIN;
	uint8_t x303 = 55U;
	int64_t x304 = 517145102466355701LL;
	int64_t t74 = 483505LL;

	t74 = ((x301<(x302<x303))%x304);

	if (t74 != 1LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x305 = 41U;
	int8_t x306 = INT8_MIN;
	volatile uint64_t x307 = 19174395LLU;
	static int32_t x308 = INT32_MIN;
	int32_t t75 = -1709;

	t75 = ((x305<(x306<x307))%x308);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x309 = 40U;

	t76 = ((x309<(x310<x311))%x312);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x314 = INT8_MAX;
	static uint8_t x315 = UINT8_MAX;
	static volatile int16_t x316 = 6890;
	int32_t t77 = 3414;

	t77 = ((x313<(x314<x315))%x316);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x318 = 12U;
	volatile uint16_t x319 = UINT16_MAX;
	static int32_t t78 = -182069;

	t78 = ((x317<(x318<x319))%x320);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x321 = 100U;
	int8_t x323 = -12;
	int32_t x324 = INT32_MAX;
	volatile int32_t t79 = -4939459;

	t79 = ((x321<(x322<x323))%x324);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint8_t x325 = UINT8_MAX;
	volatile uint16_t x326 = UINT16_MAX;
	int64_t x327 = INT64_MIN;
	volatile int64_t x328 = 7032LL;

	t80 = ((x325<(x326<x327))%x328);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x329 = 3075;
	int16_t x330 = -1;
	int8_t x331 = -1;
	int32_t t81 = -124983177;

	t81 = ((x329<(x330<x331))%x332);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x333 = -4625705771LL;
	volatile int64_t x334 = INT64_MAX;
	int16_t x335 = INT16_MAX;
	uint32_t x336 = UINT32_MAX;

	t82 = ((x333<(x334<x335))%x336);

	if (t82 != 1U) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x339 = 2081006424U;

	t83 = ((x337<(x338<x339))%x340);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x341 = INT16_MAX;
	int8_t x342 = INT8_MIN;
	volatile int32_t x344 = INT32_MIN;
	volatile int32_t t84 = -98740;

	t84 = ((x341<(x342<x343))%x344);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x345 = 20038U;
	int16_t x347 = INT16_MIN;
	uint16_t x348 = 82U;
	volatile int32_t t85 = 14524094;

	t85 = ((x345<(x346<x347))%x348);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int32_t x349 = INT32_MAX;
	static int64_t x350 = INT64_MIN;
	static volatile int64_t x351 = INT64_MIN;
	static volatile uint64_t x352 = 4474721029507415LLU;
	uint64_t t86 = 1706LLU;

	t86 = ((x349<(x350<x351))%x352);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x353 = 739718526059LLU;
	static int16_t x354 = INT16_MAX;
	static volatile int64_t t87 = 625LL;

	t87 = ((x353<(x354<x355))%x356);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x357 = -1;
	volatile int32_t x358 = INT32_MIN;
	volatile int8_t x360 = -1;
	int32_t t88 = 503602;

	t88 = ((x357<(x358<x359))%x360);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x361 = -7;
	int8_t x362 = INT8_MAX;
	static int32_t x363 = INT32_MAX;
	static int16_t x364 = 1;
	static int32_t t89 = -1;

	t89 = ((x361<(x362<x363))%x364);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x365 = INT32_MIN;
	int64_t x367 = INT64_MIN;
	int32_t t90 = -3344;

	t90 = ((x365<(x366<x367))%x368);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x369 = 96U;
	int16_t x370 = -1;
	int64_t x372 = INT64_MAX;
	int64_t t91 = -505128448648LL;

	t91 = ((x369<(x370<x371))%x372);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x373 = INT16_MIN;
	uint8_t x375 = 10U;
	uint64_t x376 = UINT64_MAX;
	uint64_t t92 = 55284LLU;

	t92 = ((x373<(x374<x375))%x376);

	if (t92 != 1LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x377 = -111;
	int16_t x378 = INT16_MAX;
	static volatile int16_t x380 = -1;
	static volatile int32_t t93 = -11914713;

	t93 = ((x377<(x378<x379))%x380);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x381 = INT32_MIN;
	volatile int16_t x383 = INT16_MIN;
	volatile int32_t t94 = -2245475;

	t94 = ((x381<(x382<x383))%x384);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x385 = UINT32_MAX;
	int32_t x386 = -496;
	int8_t x387 = INT8_MAX;
	int32_t x388 = INT32_MIN;
	volatile int32_t t95 = 593;

	t95 = ((x385<(x386<x387))%x388);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x389 = -34671520127293924LL;
	uint8_t x392 = 6U;
	static int32_t t96 = 569405580;

	t96 = ((x389<(x390<x391))%x392);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x393 = INT32_MAX;
	int32_t x394 = INT32_MAX;
	uint64_t x395 = 884418508193103680LLU;
	static int32_t x396 = -2;

	t97 = ((x393<(x394<x395))%x396);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x397 = 6U;
	int32_t x398 = -3;
	static int64_t x399 = 8381969613LL;
	uint64_t x400 = UINT64_MAX;
	volatile uint64_t t98 = 199386423547102565LLU;

	t98 = ((x397<(x398<x399))%x400);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x401 = -15;
	uint32_t x402 = 9764783U;
	int16_t x403 = INT16_MIN;
	int32_t x404 = -1;
	int32_t t99 = 10171;

	t99 = ((x401<(x402<x403))%x404);

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

