#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x1 = INT64_MAX;
static int32_t t0 = -59608;
volatile int64_t x9 = INT64_MIN;
volatile int64_t x42 = -4165084LL;
int32_t x43 = -896807710;
int32_t x46 = -1;
static int8_t x47 = INT8_MIN;
volatile int16_t x50 = INT16_MIN;
uint8_t x51 = 0U;
volatile int32_t t15 = 388269;
int8_t x65 = INT8_MIN;
static int16_t x67 = INT16_MIN;
volatile uint32_t x69 = 21865U;
static uint32_t x74 = 1017U;
int32_t t18 = -226540;
volatile uint32_t x77 = 2962512U;
volatile uint32_t x79 = 6U;
int8_t x81 = INT8_MIN;
int8_t x82 = INT8_MIN;
uint64_t x87 = UINT64_MAX;
int8_t x91 = INT8_MIN;
volatile int32_t t22 = 472160;
int16_t x94 = INT16_MIN;
volatile int32_t t23 = -30403069;
int64_t x97 = 1842965LL;
int32_t t24 = -1;
int16_t x110 = INT16_MAX;
int32_t x111 = -428;
int32_t x116 = INT32_MAX;
int64_t x118 = INT64_MIN;
static int8_t x123 = INT8_MIN;
uint64_t x139 = UINT64_MAX;
int16_t x140 = -1;
uint8_t x141 = 7U;
static volatile int8_t x142 = INT8_MIN;
volatile int64_t x144 = -1LL;
int32_t t35 = 11408719;
uint64_t x146 = UINT64_MAX;
volatile int32_t x148 = INT32_MIN;
static volatile int8_t x152 = INT8_MIN;
int64_t x156 = INT64_MAX;
int8_t x157 = -1;
int32_t x158 = INT32_MAX;
volatile int16_t x161 = INT16_MIN;
volatile uint8_t x163 = 1U;
int64_t x166 = INT64_MIN;
int32_t x168 = INT32_MIN;
int16_t x173 = INT16_MIN;
static int8_t x177 = -1;
uint64_t x188 = 1849511316763LLU;
volatile int32_t t51 = 207607301;
int8_t x226 = 19;
uint16_t x228 = UINT16_MAX;
static uint32_t x233 = 31440U;
static int32_t t58 = 817549429;
volatile uint64_t x252 = 420112024LLU;
uint64_t x256 = 131778344LLU;
int32_t t64 = -653;
uint64_t x262 = UINT64_MAX;
static volatile int32_t t65 = -1;
int32_t t66 = 7490;
static volatile int32_t t67 = 6268661;
int8_t x274 = 43;
volatile int8_t x278 = INT8_MAX;
volatile int32_t t69 = 0;
static volatile int32_t x295 = -1;
uint32_t x303 = 2589785U;
uint64_t x305 = UINT64_MAX;
int64_t x306 = INT64_MAX;
volatile int32_t x308 = INT32_MAX;
volatile int32_t x310 = INT32_MIN;
int32_t x319 = INT32_MIN;
static int16_t x322 = 9552;
int8_t x323 = -11;
static volatile int32_t t80 = 3722;
volatile uint8_t x326 = 1U;
static uint8_t x328 = 2U;
static volatile int16_t x341 = -1;
int16_t x343 = INT16_MAX;
uint8_t x345 = 1U;
static int8_t x349 = 27;
volatile uint16_t x353 = UINT16_MAX;
int8_t x355 = -1;
volatile int64_t x359 = INT64_MIN;
uint16_t x360 = 30U;
static int32_t t90 = 10;
static int8_t x369 = INT8_MIN;
static int64_t x372 = 262759815LL;
int64_t x373 = INT64_MAX;
int32_t t93 = 4624;
uint32_t x377 = 5545144U;
int32_t t94 = 192545945;
int64_t x381 = INT64_MIN;
int32_t x393 = INT32_MIN;
int32_t x395 = INT32_MIN;
volatile int32_t t99 = 35753;


void f0(void) {
	int64_t x2 = -1LL;
	volatile uint16_t x3 = 7U;
	int8_t x4 = INT8_MIN;

	t0 = ((x1<(x2<x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MAX;
	int32_t x6 = INT32_MIN;
	int16_t x7 = INT16_MAX;
	int16_t x8 = 13348;
	int32_t t1 = 1608657;

	t1 = ((x5<(x6<x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int64_t x10 = INT64_MIN;
	int32_t x11 = INT32_MIN;
	static int8_t x12 = -1;
	volatile int32_t t2 = -250;

	t2 = ((x9<(x10<x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 20U;
	static uint64_t x14 = 20504177439518520LLU;
	int32_t x15 = INT32_MAX;
	int8_t x16 = INT8_MIN;
	int32_t t3 = -535129;

	t3 = ((x13<(x14<x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = INT64_MIN;
	uint32_t x18 = 41077U;
	int32_t x19 = -1;
	int32_t x20 = INT32_MIN;
	volatile int32_t t4 = 7981;

	t4 = ((x17<(x18<x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x21 = 8451807547038394LLU;
	volatile int64_t x22 = INT64_MIN;
	int8_t x23 = 1;
	volatile uint32_t x24 = UINT32_MAX;
	volatile int32_t t5 = -429;

	t5 = ((x21<(x22<x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 119U;
	uint64_t x26 = UINT64_MAX;
	uint32_t x27 = 2U;
	volatile int8_t x28 = -1;
	volatile int32_t t6 = -2866;

	t6 = ((x25<(x26<x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -1;
	int8_t x30 = INT8_MIN;
	uint32_t x31 = UINT32_MAX;
	int32_t x32 = INT32_MAX;
	volatile int32_t t7 = 675762958;

	t7 = ((x29<(x30<x31))==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -1;
	int32_t x34 = INT32_MAX;
	volatile int8_t x35 = INT8_MIN;
	volatile int16_t x36 = INT16_MIN;
	int32_t t8 = 2;

	t8 = ((x33<(x34<x35))==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 12270U;
	int16_t x38 = -13027;
	int64_t x39 = -190997585101LL;
	volatile int32_t x40 = -1;
	volatile int32_t t9 = -1;

	t9 = ((x37<(x38<x39))==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = 15;
	int16_t x44 = -1;
	int32_t t10 = 25217640;

	t10 = ((x41<(x42<x43))==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x45 = INT8_MAX;
	int8_t x48 = 8;
	static int32_t t11 = -97;

	t11 = ((x45<(x46<x47))==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	uint32_t x52 = 190U;
	static volatile int32_t t12 = -2049131;

	t12 = ((x49<(x50<x51))==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = 23322346;
	int16_t x54 = -11;
	static int32_t x55 = INT32_MIN;
	int32_t x56 = INT32_MAX;
	int32_t t13 = -586163;

	t13 = ((x53<(x54<x55))==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x57 = 13361369LLU;
	uint8_t x58 = 1U;
	static uint16_t x59 = 4005U;
	static int64_t x60 = -3588317600LL;
	static int32_t t14 = -20;

	t14 = ((x57<(x58<x59))==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = 4;
	uint64_t x62 = 47625271180875613LLU;
	int8_t x63 = INT8_MIN;
	volatile uint8_t x64 = UINT8_MAX;

	t15 = ((x61<(x62<x63))==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x66 = INT16_MIN;
	int32_t x68 = INT32_MIN;
	static volatile int32_t t16 = 42842;

	t16 = ((x65<(x66<x67))==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x70 = INT32_MIN;
	int16_t x71 = -1;
	int64_t x72 = INT64_MAX;
	int32_t t17 = 2252;

	t17 = ((x69<(x70<x71))==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 0LLU;
	int16_t x75 = INT16_MIN;
	volatile int64_t x76 = INT64_MAX;

	t18 = ((x73<(x74<x75))==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x78 = INT8_MIN;
	volatile uint16_t x80 = 5719U;
	volatile int32_t t19 = -166;

	t19 = ((x77<(x78<x79))==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x83 = UINT16_MAX;
	int64_t x84 = INT64_MIN;
	static int32_t t20 = 234750094;

	t20 = ((x81<(x82<x83))==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x85 = 16323192U;
	int32_t x86 = 18449;
	uint32_t x88 = UINT32_MAX;
	static volatile int32_t t21 = 767;

	t21 = ((x85<(x86<x87))==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int8_t x89 = INT8_MIN;
	int16_t x90 = -3;
	int64_t x92 = -1LL;

	t22 = ((x89<(x90<x91))==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = UINT16_MAX;
	uint8_t x95 = 1U;
	int8_t x96 = INT8_MIN;

	t23 = ((x93<(x94<x95))==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x98 = -1;
	static int64_t x99 = INT64_MIN;
	volatile int16_t x100 = 0;

	t24 = ((x97<(x98<x99))==x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x101 = 13U;
	static uint8_t x102 = 6U;
	uint16_t x103 = 10854U;
	int32_t x104 = INT32_MIN;
	static int32_t t25 = -3293;

	t25 = ((x101<(x102<x103))==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x105 = INT16_MIN;
	static int32_t x106 = INT32_MIN;
	volatile int16_t x107 = INT16_MAX;
	int16_t x108 = INT16_MIN;
	static volatile int32_t t26 = 117;

	t26 = ((x105<(x106<x107))==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MIN;
	int64_t x112 = -1LL;
	volatile int32_t t27 = 29284013;

	t27 = ((x109<(x110<x111))==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = 346U;
	int16_t x114 = INT16_MIN;
	uint16_t x115 = 94U;
	volatile int32_t t28 = 0;

	t28 = ((x113<(x114<x115))==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MAX;
	uint16_t x119 = UINT16_MAX;
	int32_t x120 = -8064;
	int32_t t29 = -16298446;

	t29 = ((x117<(x118<x119))==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = -1;
	uint64_t x122 = 200841667889928LLU;
	int64_t x124 = -8578624307461512LL;
	int32_t t30 = 837792;

	t30 = ((x121<(x122<x123))==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MIN;
	uint16_t x126 = 2487U;
	static uint64_t x127 = 14115812911LLU;
	int16_t x128 = -1;
	int32_t t31 = -20018708;

	t31 = ((x125<(x126<x127))==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = 190848619U;
	static int32_t x130 = -1;
	int32_t x131 = INT32_MAX;
	int64_t x132 = INT64_MAX;
	volatile int32_t t32 = -5061517;

	t32 = ((x129<(x130<x131))==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x133 = INT32_MIN;
	int16_t x134 = 595;
	int64_t x135 = -1LL;
	int64_t x136 = INT64_MIN;
	volatile int32_t t33 = -29;

	t33 = ((x133<(x134<x135))==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MIN;
	int64_t x138 = 6860763LL;
	volatile int32_t t34 = -3;

	t34 = ((x137<(x138<x139))==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x143 = INT8_MAX;

	t35 = ((x141<(x142<x143))==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MAX;
	int32_t x147 = 1962706;
	static int32_t t36 = 170;

	t36 = ((x145<(x146<x147))==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = UINT16_MAX;
	static int16_t x150 = INT16_MAX;
	int64_t x151 = INT64_MAX;
	int32_t t37 = -58;

	t37 = ((x149<(x150<x151))==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x153 = -734109749;
	static uint32_t x154 = 49649U;
	uint8_t x155 = 73U;
	static int32_t t38 = 1035391194;

	t38 = ((x153<(x154<x155))==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x159 = -92;
	int32_t x160 = -1;
	int32_t t39 = -658562181;

	t39 = ((x157<(x158<x159))==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x162 = INT64_MAX;
	static int16_t x164 = -1;
	int32_t t40 = 7;

	t40 = ((x161<(x162<x163))==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MAX;
	static volatile int16_t x167 = INT16_MIN;
	volatile int32_t t41 = 46;

	t41 = ((x165<(x166<x167))==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x169 = UINT64_MAX;
	uint32_t x170 = 4388588U;
	static volatile int8_t x171 = -49;
	uint16_t x172 = 21991U;
	int32_t t42 = -1;

	t42 = ((x169<(x170<x171))==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x174 = INT8_MIN;
	uint64_t x175 = UINT64_MAX;
	static uint64_t x176 = 506885532258341LLU;
	volatile int32_t t43 = 0;

	t43 = ((x173<(x174<x175))==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x178 = UINT32_MAX;
	uint32_t x179 = UINT32_MAX;
	int16_t x180 = INT16_MIN;
	volatile int32_t t44 = -1;

	t44 = ((x177<(x178<x179))==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = 64720U;
	uint32_t x182 = 13U;
	int32_t x183 = INT32_MIN;
	static int64_t x184 = -4013LL;
	static volatile int32_t t45 = -272170;

	t45 = ((x181<(x182<x183))==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MIN;
	volatile int32_t x186 = INT32_MIN;
	int32_t x187 = INT32_MAX;
	int32_t t46 = 1;

	t46 = ((x185<(x186<x187))==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = UINT16_MAX;
	uint16_t x190 = 42U;
	uint64_t x191 = 212550LLU;
	int8_t x192 = -1;
	volatile int32_t t47 = 105832;

	t47 = ((x189<(x190<x191))==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x193 = INT64_MAX;
	volatile int16_t x194 = INT16_MAX;
	volatile uint32_t x195 = UINT32_MAX;
	static int16_t x196 = INT16_MIN;
	static int32_t t48 = -21;

	t48 = ((x193<(x194<x195))==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x197 = -1;
	volatile uint64_t x198 = 188832013LLU;
	static uint32_t x199 = 1723U;
	uint32_t x200 = 283U;
	volatile int32_t t49 = -66;

	t49 = ((x197<(x198<x199))==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = 68U;
	int32_t x202 = 278421685;
	int16_t x203 = -5;
	int32_t x204 = -1;
	volatile int32_t t50 = -621;

	t50 = ((x201<(x202<x203))==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MIN;
	static uint8_t x206 = 5U;
	int8_t x207 = 0;
	uint32_t x208 = UINT32_MAX;

	t51 = ((x205<(x206<x207))==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x209 = 39U;
	int16_t x210 = INT16_MAX;
	int64_t x211 = INT64_MIN;
	uint32_t x212 = 3U;
	int32_t t52 = 37669369;

	t52 = ((x209<(x210<x211))==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint8_t x213 = UINT8_MAX;
	int32_t x214 = -1;
	uint32_t x215 = 768U;
	int8_t x216 = INT8_MIN;
	int32_t t53 = 6614;

	t53 = ((x213<(x214<x215))==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MAX;
	int16_t x218 = INT16_MAX;
	int8_t x219 = INT8_MIN;
	static uint64_t x220 = 376404LLU;
	int32_t t54 = 827161;

	t54 = ((x217<(x218<x219))==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x221 = UINT16_MAX;
	volatile uint16_t x222 = 1U;
	uint16_t x223 = 467U;
	static int8_t x224 = -1;
	static int32_t t55 = 2;

	t55 = ((x221<(x222<x223))==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x225 = INT64_MIN;
	static int16_t x227 = INT16_MIN;
	volatile int32_t t56 = -1;

	t56 = ((x225<(x226<x227))==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x229 = 7655U;
	uint8_t x230 = 75U;
	int16_t x231 = INT16_MIN;
	volatile int8_t x232 = INT8_MIN;
	volatile int32_t t57 = 7306348;

	t57 = ((x229<(x230<x231))==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x234 = -13098;
	uint16_t x235 = UINT16_MAX;
	int8_t x236 = INT8_MIN;

	t58 = ((x233<(x234<x235))==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x237 = 6439U;
	volatile int32_t x238 = -1;
	volatile int8_t x239 = INT8_MIN;
	int16_t x240 = 3559;
	int32_t t59 = -65376461;

	t59 = ((x237<(x238<x239))==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x241 = INT32_MIN;
	volatile int64_t x242 = -1LL;
	int32_t x243 = INT32_MIN;
	int16_t x244 = INT16_MIN;
	int32_t t60 = -23406571;

	t60 = ((x241<(x242<x243))==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = INT32_MAX;
	int8_t x246 = -1;
	volatile uint8_t x247 = 2U;
	static uint64_t x248 = 77358LLU;
	int32_t t61 = 388332316;

	t61 = ((x245<(x246<x247))==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x249 = 4808U;
	uint8_t x250 = 3U;
	int8_t x251 = -15;
	int32_t t62 = -76;

	t62 = ((x249<(x250<x251))==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x253 = INT32_MIN;
	volatile int8_t x254 = -1;
	int32_t x255 = 247435782;
	int32_t t63 = 169;

	t63 = ((x253<(x254<x255))==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x257 = UINT8_MAX;
	int64_t x258 = INT64_MIN;
	uint8_t x259 = 63U;
	int32_t x260 = -1;

	t64 = ((x257<(x258<x259))==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x261 = INT16_MIN;
	uint32_t x263 = 5562678U;
	uint8_t x264 = 13U;

	t65 = ((x261<(x262<x263))==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x265 = UINT64_MAX;
	int16_t x266 = -1;
	volatile uint32_t x267 = 7U;
	static uint8_t x268 = UINT8_MAX;

	t66 = ((x265<(x266<x267))==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int64_t x269 = 6463910066255596LL;
	int32_t x270 = 7325526;
	uint32_t x271 = 45217959U;
	volatile int16_t x272 = INT16_MIN;

	t67 = ((x269<(x270<x271))==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x273 = -1;
	int16_t x275 = -1;
	int32_t x276 = INT32_MIN;
	int32_t t68 = 435;

	t68 = ((x273<(x274<x275))==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x277 = 2649295U;
	int32_t x279 = -1;
	volatile int8_t x280 = -1;

	t69 = ((x277<(x278<x279))==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MIN;
	static volatile uint16_t x282 = UINT16_MAX;
	uint8_t x283 = 22U;
	int32_t x284 = INT32_MAX;
	int32_t t70 = -500696813;

	t70 = ((x281<(x282<x283))==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = -5921;
	int8_t x286 = -1;
	static int32_t x287 = INT32_MIN;
	int8_t x288 = INT8_MIN;
	volatile int32_t t71 = -40;

	t71 = ((x285<(x286<x287))==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = -3;
	uint64_t x290 = UINT64_MAX;
	int16_t x291 = -14183;
	volatile uint8_t x292 = UINT8_MAX;
	int32_t t72 = -132519;

	t72 = ((x289<(x290<x291))==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x293 = INT8_MIN;
	int8_t x294 = -8;
	int64_t x296 = 3LL;
	volatile int32_t t73 = -6;

	t73 = ((x293<(x294<x295))==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x297 = 1LLU;
	int8_t x298 = -27;
	volatile int32_t x299 = -489;
	uint8_t x300 = 7U;
	static int32_t t74 = -3582;

	t74 = ((x297<(x298<x299))==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MIN;
	volatile int64_t x302 = 13532002044855LL;
	static int8_t x304 = -9;
	int32_t t75 = -64;

	t75 = ((x301<(x302<x303))==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x307 = INT32_MIN;
	int32_t t76 = 56837094;

	t76 = ((x305<(x306<x307))==x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = INT16_MIN;
	int16_t x311 = INT16_MIN;
	uint64_t x312 = 928776026LLU;
	int32_t t77 = -10239;

	t77 = ((x309<(x310<x311))==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x313 = 1224U;
	int64_t x314 = INT64_MIN;
	volatile int8_t x315 = INT8_MAX;
	int8_t x316 = INT8_MAX;
	volatile int32_t t78 = -4297;

	t78 = ((x313<(x314<x315))==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = INT32_MAX;
	volatile int8_t x318 = INT8_MIN;
	int8_t x320 = INT8_MIN;
	volatile int32_t t79 = 14;

	t79 = ((x317<(x318<x319))==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = 8U;
	volatile int16_t x324 = -1;

	t80 = ((x321<(x322<x323))==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = INT8_MIN;
	int16_t x327 = -1;
	int32_t t81 = 5767;

	t81 = ((x325<(x326<x327))==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x329 = INT32_MIN;
	int16_t x330 = -1;
	int16_t x331 = INT16_MIN;
	int32_t x332 = -1;
	volatile int32_t t82 = 1;

	t82 = ((x329<(x330<x331))==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x333 = UINT64_MAX;
	uint16_t x334 = 1U;
	static int8_t x335 = INT8_MIN;
	int16_t x336 = INT16_MIN;
	int32_t t83 = -1;

	t83 = ((x333<(x334<x335))==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint64_t x337 = UINT64_MAX;
	int16_t x338 = -4918;
	uint8_t x339 = 14U;
	int32_t x340 = -1;
	volatile int32_t t84 = -1493800;

	t84 = ((x337<(x338<x339))==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x342 = INT8_MAX;
	static int64_t x344 = INT64_MIN;
	int32_t t85 = 5;

	t85 = ((x341<(x342<x343))==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x346 = -1;
	int16_t x347 = -35;
	int8_t x348 = 1;
	volatile int32_t t86 = 15;

	t86 = ((x345<(x346<x347))==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x350 = INT8_MIN;
	int32_t x351 = -1;
	volatile int64_t x352 = INT64_MIN;
	int32_t t87 = -15204181;

	t87 = ((x349<(x350<x351))==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x354 = INT64_MAX;
	volatile uint16_t x356 = 126U;
	static volatile int32_t t88 = 964162;

	t88 = ((x353<(x354<x355))==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x357 = UINT32_MAX;
	int8_t x358 = -1;
	int32_t t89 = 195;

	t89 = ((x357<(x358<x359))==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint32_t x361 = 7996U;
	int64_t x362 = INT64_MIN;
	uint64_t x363 = 6757606878LLU;
	uint64_t x364 = 6449468900383223LLU;

	t90 = ((x361<(x362<x363))==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = INT16_MIN;
	int32_t x366 = INT32_MIN;
	int8_t x367 = INT8_MAX;
	volatile int16_t x368 = INT16_MIN;
	volatile int32_t t91 = -858041399;

	t91 = ((x365<(x366<x367))==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x370 = INT64_MIN;
	uint32_t x371 = 22U;
	static volatile int32_t t92 = 449719;

	t92 = ((x369<(x370<x371))==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x374 = INT32_MIN;
	static int32_t x375 = 123480;
	uint16_t x376 = UINT16_MAX;

	t93 = ((x373<(x374<x375))==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x378 = INT16_MIN;
	static int32_t x379 = -1;
	static int64_t x380 = -84695313268LL;

	t94 = ((x377<(x378<x379))==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x382 = -33;
	static uint16_t x383 = 468U;
	volatile int8_t x384 = INT8_MAX;
	int32_t t95 = -192;

	t95 = ((x381<(x382<x383))==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x385 = 12U;
	uint8_t x386 = 89U;
	volatile int64_t x387 = INT64_MIN;
	static uint16_t x388 = 39U;
	static int32_t t96 = 13668498;

	t96 = ((x385<(x386<x387))==x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = 1;
	uint32_t x390 = 10600589U;
	static int32_t x391 = -1;
	int64_t x392 = INT64_MAX;
	int32_t t97 = 95992039;

	t97 = ((x389<(x390<x391))==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x394 = UINT32_MAX;
	int64_t x396 = INT64_MIN;
	volatile int32_t t98 = 1067548926;

	t98 = ((x393<(x394<x395))==x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = INT8_MAX;
	int64_t x398 = -40402692LL;
	static volatile int16_t x399 = INT16_MIN;
	volatile int64_t x400 = INT64_MAX;

	t99 = ((x397<(x398<x399))==x400);

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

