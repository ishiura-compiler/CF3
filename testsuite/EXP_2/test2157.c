#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x9 = 14U;
int32_t t2 = 5204;
static int32_t t3 = 687095096;
volatile int8_t x19 = INT8_MIN;
volatile int64_t x27 = INT64_MIN;
volatile uint32_t x31 = UINT32_MAX;
static uint16_t x34 = UINT16_MAX;
int32_t x40 = -1;
static volatile int32_t t9 = 490033;
int64_t x46 = INT64_MIN;
volatile int8_t x49 = 3;
uint8_t x51 = 15U;
uint64_t x56 = UINT64_MAX;
volatile uint16_t x58 = 9036U;
int32_t x61 = 66;
static int32_t x62 = INT32_MAX;
int64_t x67 = INT64_MAX;
static uint32_t x73 = 6602675U;
uint64_t x74 = UINT64_MAX;
static volatile int32_t t18 = INT32_MAX;
int32_t x77 = INT32_MIN;
volatile uint32_t t21 = 4U;
static int64_t x89 = INT64_MIN;
int64_t x92 = INT64_MAX;
volatile int64_t t22 = INT64_MAX;
static int64_t t24 = -624731880379LL;
int64_t x104 = -1LL;
uint64_t x105 = 0LLU;
uint8_t x107 = UINT8_MAX;
int64_t x108 = -1LL;
static uint16_t x113 = UINT16_MAX;
int32_t x116 = INT32_MIN;
uint64_t x126 = UINT64_MAX;
static int64_t x127 = INT64_MIN;
uint64_t x128 = UINT64_MAX;
uint64_t t31 = UINT64_MAX;
volatile int32_t t32 = -1;
int32_t x133 = INT32_MAX;
uint64_t x134 = 6969643LLU;
volatile uint64_t x151 = 1604539867367880LLU;
uint16_t x154 = UINT16_MAX;
int8_t x155 = -1;
int32_t t38 = -4539048;
static volatile int8_t x164 = INT8_MAX;
static uint32_t x165 = UINT32_MAX;
volatile int16_t x172 = INT16_MAX;
int16_t x176 = 0;
volatile int8_t x177 = 4;
int64_t x188 = -1LL;
int8_t x191 = INT8_MIN;
int16_t x201 = INT16_MAX;
static int64_t x203 = -1LL;
int32_t x208 = INT32_MIN;
static volatile uint16_t x212 = UINT16_MAX;
int64_t x214 = INT64_MIN;
int32_t x218 = INT32_MAX;
int16_t x221 = INT16_MIN;
int16_t x222 = INT16_MIN;
volatile int32_t t55 = -5;
volatile int16_t x226 = -27;
int16_t x235 = INT16_MAX;
int16_t x236 = -1;
uint16_t x239 = 218U;
volatile int32_t t59 = 197317076;
int64_t x243 = INT64_MAX;
int8_t x250 = -1;
static int64_t x266 = 79524811613844337LL;
int32_t t66 = INT32_MIN;
static int64_t x276 = INT64_MIN;
volatile uint64_t x279 = 141086994212LLU;
uint16_t x283 = 2170U;
int8_t x287 = -31;
volatile int8_t x303 = INT8_MIN;
volatile uint64_t x307 = 196478173643942LLU;
int64_t x312 = INT64_MAX;
uint32_t x318 = 4U;
static volatile int64_t x324 = 656LL;
volatile int32_t x327 = INT32_MIN;
uint16_t x334 = 56U;
uint64_t x339 = 2034077954064LLU;
int8_t x356 = -1;
static uint64_t x358 = UINT64_MAX;
int8_t x364 = -1;
int8_t x365 = INT8_MIN;
uint64_t x367 = UINT64_MAX;
static int32_t t94 = -447424129;
static uint16_t x392 = UINT16_MAX;
int32_t x396 = INT32_MIN;


void f0(void) {
	volatile uint64_t x1 = UINT64_MAX;
	uint8_t x2 = 1U;
	int64_t x3 = INT64_MAX;
	uint64_t x4 = UINT64_MAX;
	static volatile uint64_t t0 = UINT64_MAX;

	t0 = ((x1<=(x2^x3))|x4);

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = INT8_MIN;
	static int32_t x6 = -1;
	int8_t x7 = -9;
	volatile int16_t x8 = INT16_MIN;
	static volatile int32_t t1 = 18147846;

	t1 = ((x5<=(x6^x7))|x8);

	if (t1 != -32767) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x10 = 60U;
	static uint64_t x11 = 1531134LLU;
	volatile uint16_t x12 = 382U;

	t2 = ((x9<=(x10^x11))|x12);

	if (t2 != 383) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x13 = UINT64_MAX;
	uint8_t x14 = 33U;
	static int32_t x15 = 1;
	volatile int8_t x16 = INT8_MIN;

	t3 = ((x13<=(x14^x15))|x16);

	if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -1;
	int16_t x18 = -4;
	int32_t x20 = INT32_MIN;
	volatile int32_t t4 = 872;

	t4 = ((x17<=(x18^x19))|x20);

	if (t4 != -2147483647) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = -1;
	int64_t x22 = INT64_MIN;
	int64_t x23 = -1LL;
	static uint8_t x24 = 9U;
	int32_t t5 = -2028;

	t5 = ((x21<=(x22^x23))|x24);

	if (t5 != 9) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x25 = 42U;
	int64_t x26 = INT64_MIN;
	int16_t x28 = INT16_MIN;
	int32_t t6 = -34257;

	t6 = ((x25<=(x26^x27))|x28);

	if (t6 != -32768) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = 1;
	int16_t x30 = INT16_MIN;
	uint32_t x32 = 12U;
	uint32_t t7 = 63734U;

	t7 = ((x29<=(x30^x31))|x32);

	if (t7 != 13U) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 65351040510882908LLU;
	volatile int8_t x35 = 1;
	static int8_t x36 = 5;
	volatile int32_t t8 = 23951478;

	t8 = ((x33<=(x34^x35))|x36);

	if (t8 != 5) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -1LL;
	static int16_t x38 = INT16_MAX;
	int8_t x39 = -1;

	t9 = ((x37<=(x38^x39))|x40);

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x41 = UINT8_MAX;
	uint16_t x42 = 47U;
	uint64_t x43 = UINT64_MAX;
	volatile int8_t x44 = INT8_MIN;
	int32_t t10 = -266499746;

	t10 = ((x41<=(x42^x43))|x44);

	if (t10 != -127) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x45 = INT32_MIN;
	int32_t x47 = -1;
	volatile uint32_t x48 = 1960U;
	uint32_t t11 = 247399358U;

	t11 = ((x45<=(x46^x47))|x48);

	if (t11 != 1961U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x50 = INT32_MIN;
	static uint8_t x52 = 5U;
	volatile int32_t t12 = 27115650;

	t12 = ((x49<=(x50^x51))|x52);

	if (t12 != 5) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x53 = 0U;
	volatile int32_t x54 = 4;
	volatile int16_t x55 = INT16_MIN;
	volatile uint64_t t13 = UINT64_MAX;

	t13 = ((x53<=(x54^x55))|x56);

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x57 = INT64_MAX;
	volatile int64_t x59 = INT64_MIN;
	int32_t x60 = INT32_MIN;
	int32_t t14 = INT32_MIN;

	t14 = ((x57<=(x58^x59))|x60);

	if (t14 != INT32_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int8_t x63 = INT8_MIN;
	volatile int32_t x64 = 14892674;
	int32_t t15 = 4;

	t15 = ((x61<=(x62^x63))|x64);

	if (t15 != 14892674) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = 0;
	int64_t x66 = 200567224LL;
	int32_t x68 = INT32_MIN;
	volatile int32_t t16 = -12414211;

	t16 = ((x65<=(x66^x67))|x68);

	if (t16 != -2147483647) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x69 = 187413169431LLU;
	uint32_t x70 = 551U;
	int64_t x71 = 105483763LL;
	int8_t x72 = INT8_MIN;
	static volatile int32_t t17 = 6572017;

	t17 = ((x69<=(x70^x71))|x72);

	if (t17 != -128) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x75 = UINT8_MAX;
	int32_t x76 = INT32_MAX;

	t18 = ((x73<=(x74^x75))|x76);

	if (t18 != INT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x78 = -1LL;
	int64_t x79 = -2LL;
	int64_t x80 = INT64_MAX;
	int64_t t19 = INT64_MAX;

	t19 = ((x77<=(x78^x79))|x80);

	if (t19 != INT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x81 = 464U;
	uint8_t x82 = UINT8_MAX;
	int8_t x83 = INT8_MIN;
	static int64_t x84 = INT64_MIN;
	int64_t t20 = INT64_MIN;

	t20 = ((x81<=(x82^x83))|x84);

	if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x85 = INT16_MIN;
	int32_t x86 = -1;
	int16_t x87 = INT16_MIN;
	uint32_t x88 = 100276U;

	t21 = ((x85<=(x86^x87))|x88);

	if (t21 != 100277U) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x90 = 1582U;
	int16_t x91 = -1;

	t22 = ((x89<=(x90^x91))|x92);

	if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = -1LL;
	int8_t x94 = INT8_MIN;
	uint16_t x95 = 5935U;
	static int8_t x96 = -1;
	volatile int32_t t23 = -4463963;

	t23 = ((x93<=(x94^x95))|x96);

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = -1;
	int32_t x98 = INT32_MAX;
	static int64_t x99 = 20694LL;
	volatile int64_t x100 = INT64_MIN;

	t24 = ((x97<=(x98^x99))|x100);

	if (t24 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = -1;
	volatile int8_t x102 = 0;
	int16_t x103 = -1;
	static int64_t t25 = -157021603714438515LL;

	t25 = ((x101<=(x102^x103))|x104);

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x106 = UINT16_MAX;
	int64_t t26 = -36LL;

	t26 = ((x105<=(x106^x107))|x108);

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = -205;
	volatile int64_t x110 = 240783771615238296LL;
	static volatile int64_t x111 = -16023121LL;
	int32_t x112 = INT32_MAX;
	volatile int32_t t27 = INT32_MAX;

	t27 = ((x109<=(x110^x111))|x112);

	if (t27 != INT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x114 = INT64_MIN;
	int8_t x115 = INT8_MAX;
	static volatile int32_t t28 = INT32_MIN;

	t28 = ((x113<=(x114^x115))|x116);

	if (t28 != INT32_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = 189U;
	static int8_t x118 = INT8_MAX;
	static uint64_t x119 = 31802903578641863LLU;
	volatile uint8_t x120 = UINT8_MAX;
	volatile int32_t t29 = 2451;

	t29 = ((x117<=(x118^x119))|x120);

	if (t29 != 255) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MIN;
	static uint8_t x122 = 21U;
	volatile int16_t x123 = 1;
	int32_t x124 = INT32_MIN;
	int32_t t30 = -108;

	t30 = ((x121<=(x122^x123))|x124);

	if (t30 != -2147483647) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x125 = UINT16_MAX;

	t31 = ((x125<=(x126^x127))|x128);

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x129 = -1;
	int16_t x130 = -7;
	int64_t x131 = 1850774626339354345LL;
	static int8_t x132 = INT8_MIN;

	t32 = ((x129<=(x130^x131))|x132);

	if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x135 = 529928U;
	volatile int64_t x136 = -1LL;
	volatile int64_t t33 = -2108876558765LL;

	t33 = ((x133<=(x134^x135))|x136);

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MIN;
	int8_t x138 = -1;
	int16_t x139 = 16336;
	volatile int8_t x140 = -1;
	int32_t t34 = -1478;

	t34 = ((x137<=(x138^x139))|x140);

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x141 = 31LLU;
	int32_t x142 = 7511;
	int8_t x143 = 1;
	volatile int8_t x144 = 0;
	volatile int32_t t35 = -18610;

	t35 = ((x141<=(x142^x143))|x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = 16U;
	int8_t x146 = INT8_MIN;
	int32_t x147 = INT32_MAX;
	int32_t x148 = -14;
	int32_t t36 = 11390506;

	t36 = ((x145<=(x146^x147))|x148);

	if (t36 != -14) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = -1;
	static volatile int64_t x150 = -1LL;
	int32_t x152 = -1;
	volatile int32_t t37 = 0;

	t37 = ((x149<=(x150^x151))|x152);

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x153 = 115;
	int8_t x156 = -27;

	t38 = ((x153<=(x154^x155))|x156);

	if (t38 != -27) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = -13;
	volatile int32_t x158 = INT32_MAX;
	volatile int64_t x159 = -1LL;
	static int16_t x160 = INT16_MIN;
	volatile int32_t t39 = 7;

	t39 = ((x157<=(x158^x159))|x160);

	if (t39 != -32768) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = -1;
	uint16_t x162 = 1U;
	volatile int16_t x163 = -1;
	int32_t t40 = 287;

	t40 = ((x161<=(x162^x163))|x164);

	if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x166 = -1;
	int8_t x167 = 2;
	volatile int64_t x168 = -13318961563LL;
	int64_t t41 = 336780101LL;

	t41 = ((x165<=(x166^x167))|x168);

	if (t41 != -13318961563LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MIN;
	uint32_t x170 = UINT32_MAX;
	static int32_t x171 = INT32_MIN;
	int32_t t42 = -533039;

	t42 = ((x169<=(x170^x171))|x172);

	if (t42 != 32767) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x173 = -1;
	volatile int32_t x174 = INT32_MIN;
	int8_t x175 = -5;
	volatile int32_t t43 = -234;

	t43 = ((x173<=(x174^x175))|x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x178 = -1;
	uint8_t x179 = UINT8_MAX;
	int16_t x180 = INT16_MIN;
	int32_t t44 = 1;

	t44 = ((x177<=(x178^x179))|x180);

	if (t44 != -32768) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x181 = INT64_MIN;
	uint8_t x182 = 1U;
	uint8_t x183 = 2U;
	int8_t x184 = INT8_MIN;
	static int32_t t45 = 827560;

	t45 = ((x181<=(x182^x183))|x184);

	if (t45 != -127) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = 377LLU;
	volatile uint32_t x186 = UINT32_MAX;
	int32_t x187 = -1073237705;
	int64_t t46 = 9LL;

	t46 = ((x185<=(x186^x187))|x188);

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = UINT32_MAX;
	int16_t x190 = -1;
	uint8_t x192 = UINT8_MAX;
	static volatile int32_t t47 = 10931;

	t47 = ((x189<=(x190^x191))|x192);

	if (t47 != 255) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = 95836259U;
	uint16_t x194 = 3U;
	uint32_t x195 = 1568143U;
	volatile int8_t x196 = INT8_MIN;
	int32_t t48 = -296;

	t48 = ((x193<=(x194^x195))|x196);

	if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x197 = INT8_MIN;
	uint32_t x198 = 6113909U;
	volatile int8_t x199 = -1;
	static volatile int16_t x200 = -1;
	static int32_t t49 = 535942852;

	t49 = ((x197<=(x198^x199))|x200);

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x202 = UINT32_MAX;
	uint32_t x204 = 21529485U;
	volatile uint32_t t50 = 739777U;

	t50 = ((x201<=(x202^x203))|x204);

	if (t50 != 21529485U) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x205 = INT8_MAX;
	volatile int32_t x206 = INT32_MIN;
	int8_t x207 = -1;
	volatile int32_t t51 = -35;

	t51 = ((x205<=(x206^x207))|x208);

	if (t51 != -2147483647) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = 24;
	static uint16_t x210 = UINT16_MAX;
	int64_t x211 = -1LL;
	int32_t t52 = 1;

	t52 = ((x209<=(x210^x211))|x212);

	if (t52 != 65535) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = 8U;
	int16_t x215 = -1;
	uint64_t x216 = 761144LLU;
	volatile uint64_t t53 = 1549669494891153LLU;

	t53 = ((x213<=(x214^x215))|x216);

	if (t53 != 761145LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = -44339995815219515LL;
	int64_t x219 = -43290357070LL;
	int32_t x220 = INT32_MIN;
	volatile int32_t t54 = 717901;

	t54 = ((x217<=(x218^x219))|x220);

	if (t54 != -2147483647) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x223 = INT16_MIN;
	int32_t x224 = -129887;

	t55 = ((x221<=(x222^x223))|x224);

	if (t55 != -129887) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x225 = UINT8_MAX;
	volatile uint8_t x227 = 1U;
	int16_t x228 = -1;
	static int32_t t56 = -5;

	t56 = ((x225<=(x226^x227))|x228);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x229 = 507188LLU;
	volatile int32_t x230 = INT32_MIN;
	uint32_t x231 = 2U;
	volatile int64_t x232 = 122619LL;
	volatile int64_t t57 = -192616LL;

	t57 = ((x229<=(x230^x231))|x232);

	if (t57 != 122619LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x233 = 236U;
	int64_t x234 = INT64_MIN;
	volatile int32_t t58 = 1301037;

	t58 = ((x233<=(x234^x235))|x236);

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x237 = UINT16_MAX;
	uint32_t x238 = 12U;
	int16_t x240 = -1;

	t59 = ((x237<=(x238^x239))|x240);

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x241 = UINT64_MAX;
	int64_t x242 = -1LL;
	volatile int64_t x244 = INT64_MIN;
	int64_t t60 = INT64_MIN;

	t60 = ((x241<=(x242^x243))|x244);

	if (t60 != INT64_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = 24548U;
	int32_t x246 = INT32_MAX;
	int32_t x247 = -40177696;
	static uint16_t x248 = 464U;
	int32_t t61 = 22;

	t61 = ((x245<=(x246^x247))|x248);

	if (t61 != 464) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = -1;
	int64_t x251 = INT64_MIN;
	uint64_t x252 = 402314197LLU;
	uint64_t t62 = 4092331LLU;

	t62 = ((x249<=(x250^x251))|x252);

	if (t62 != 402314197LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x253 = UINT16_MAX;
	volatile int16_t x254 = INT16_MIN;
	int8_t x255 = -31;
	static int64_t x256 = INT64_MAX;
	volatile int64_t t63 = INT64_MAX;

	t63 = ((x253<=(x254^x255))|x256);

	if (t63 != INT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = -1;
	int32_t x258 = 10701;
	static uint64_t x259 = 26LLU;
	int16_t x260 = INT16_MIN;
	int32_t t64 = 64618022;

	t64 = ((x257<=(x258^x259))|x260);

	if (t64 != -32768) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x261 = INT16_MAX;
	volatile int64_t x262 = INT64_MIN;
	volatile int8_t x263 = -1;
	int64_t x264 = INT64_MIN;
	static volatile int64_t t65 = -817809738530LL;

	t65 = ((x261<=(x262^x263))|x264);

	if (t65 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x265 = UINT64_MAX;
	uint64_t x267 = 303LLU;
	int32_t x268 = INT32_MIN;

	t66 = ((x265<=(x266^x267))|x268);

	if (t66 != INT32_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = INT16_MAX;
	int8_t x270 = 21;
	int8_t x271 = INT8_MIN;
	static uint32_t x272 = 288395856U;
	uint32_t t67 = 4U;

	t67 = ((x269<=(x270^x271))|x272);

	if (t67 != 288395856U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MAX;
	static int64_t x274 = INT64_MAX;
	uint16_t x275 = UINT16_MAX;
	int64_t t68 = INT64_MIN;

	t68 = ((x273<=(x274^x275))|x276);

	if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x277 = 0U;
	uint32_t x278 = 741918U;
	int64_t x280 = INT64_MIN;
	volatile int64_t t69 = 787038LL;

	t69 = ((x277<=(x278^x279))|x280);

	if (t69 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x281 = UINT16_MAX;
	uint8_t x282 = 2U;
	static int64_t x284 = INT64_MIN;
	int64_t t70 = INT64_MIN;

	t70 = ((x281<=(x282^x283))|x284);

	if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MIN;
	int64_t x286 = INT64_MIN;
	uint32_t x288 = 272U;
	uint32_t t71 = 184759U;

	t71 = ((x285<=(x286^x287))|x288);

	if (t71 != 273U) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x289 = UINT8_MAX;
	static volatile int32_t x290 = 882008557;
	int64_t x291 = 4428059488332109941LL;
	int8_t x292 = INT8_MIN;
	static int32_t t72 = 1;

	t72 = ((x289<=(x290^x291))|x292);

	if (t72 != -127) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x293 = 2U;
	int64_t x294 = -1LL;
	int8_t x295 = INT8_MAX;
	int32_t x296 = INT32_MAX;
	int32_t t73 = INT32_MAX;

	t73 = ((x293<=(x294^x295))|x296);

	if (t73 != INT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x297 = INT64_MIN;
	int8_t x298 = INT8_MIN;
	int32_t x299 = INT32_MIN;
	static uint8_t x300 = 104U;
	int32_t t74 = 138050;

	t74 = ((x297<=(x298^x299))|x300);

	if (t74 != 105) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x301 = 829U;
	volatile uint16_t x302 = 0U;
	volatile int64_t x304 = INT64_MIN;
	int64_t t75 = INT64_MIN;

	t75 = ((x301<=(x302^x303))|x304);

	if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = 0;
	int8_t x306 = INT8_MIN;
	int32_t x308 = -3342;
	static volatile int32_t t76 = -120027;

	t76 = ((x305<=(x306^x307))|x308);

	if (t76 != -3341) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = 1485104;
	volatile uint16_t x310 = 3319U;
	static uint64_t x311 = 488911683135606LLU;
	static volatile int64_t t77 = INT64_MAX;

	t77 = ((x309<=(x310^x311))|x312);

	if (t77 != INT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int16_t x313 = INT16_MIN;
	volatile uint32_t x314 = 22U;
	static uint64_t x315 = 274889476081323238LLU;
	int64_t x316 = -41LL;
	volatile int64_t t78 = 185243695032LL;

	t78 = ((x313<=(x314^x315))|x316);

	if (t78 != -41LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x317 = UINT16_MAX;
	int32_t x319 = INT32_MAX;
	static int64_t x320 = -1456058601280LL;
	volatile int64_t t79 = -79LL;

	t79 = ((x317<=(x318^x319))|x320);

	if (t79 != -1456058601279LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MAX;
	int64_t x322 = -1LL;
	int64_t x323 = 301396LL;
	int64_t t80 = 23954097919845LL;

	t80 = ((x321<=(x322^x323))|x324);

	if (t80 != 656LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x325 = 0;
	int16_t x326 = INT16_MIN;
	static int16_t x328 = INT16_MAX;
	static volatile int32_t t81 = 4;

	t81 = ((x325<=(x326^x327))|x328);

	if (t81 != 32767) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x329 = INT8_MIN;
	uint8_t x330 = UINT8_MAX;
	int8_t x331 = INT8_MAX;
	int16_t x332 = INT16_MAX;
	int32_t t82 = -73;

	t82 = ((x329<=(x330^x331))|x332);

	if (t82 != 32767) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x333 = 2U;
	int8_t x335 = 0;
	int8_t x336 = 28;
	int32_t t83 = 501734;

	t83 = ((x333<=(x334^x335))|x336);

	if (t83 != 29) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = UINT64_MAX;
	int32_t x338 = -1;
	static volatile int8_t x340 = INT8_MIN;
	volatile int32_t t84 = 2303;

	t84 = ((x337<=(x338^x339))|x340);

	if (t84 != -128) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = -1;
	volatile int64_t x342 = 1LL;
	static uint32_t x343 = 2796U;
	static uint32_t x344 = 196756U;
	uint32_t t85 = 6715U;

	t85 = ((x341<=(x342^x343))|x344);

	if (t85 != 196757U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = 0;
	int16_t x346 = INT16_MIN;
	static uint8_t x347 = 0U;
	int64_t x348 = -395447734425686LL;
	volatile int64_t t86 = -266146395579LL;

	t86 = ((x345<=(x346^x347))|x348);

	if (t86 != -395447734425686LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x349 = 129036LLU;
	uint32_t x350 = 37U;
	volatile uint64_t x351 = 363823LLU;
	static int16_t x352 = INT16_MAX;
	int32_t t87 = 4788;

	t87 = ((x349<=(x350^x351))|x352);

	if (t87 != 32767) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x353 = UINT16_MAX;
	volatile uint16_t x354 = UINT16_MAX;
	int32_t x355 = INT32_MIN;
	static volatile int32_t t88 = -16322;

	t88 = ((x353<=(x354^x355))|x356);

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x357 = 13733U;
	volatile int64_t x359 = INT64_MIN;
	uint64_t x360 = 2125062964274169LLU;
	volatile uint64_t t89 = 126005423183256LLU;

	t89 = ((x357<=(x358^x359))|x360);

	if (t89 != 2125062964274169LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = -3;
	static int16_t x362 = -1;
	int16_t x363 = -1;
	static volatile int32_t t90 = -33179613;

	t90 = ((x361<=(x362^x363))|x364);

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x366 = INT16_MIN;
	uint8_t x368 = UINT8_MAX;
	int32_t t91 = -26020;

	t91 = ((x365<=(x366^x367))|x368);

	if (t91 != 255) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x369 = 1;
	uint16_t x370 = 15615U;
	uint8_t x371 = 9U;
	int16_t x372 = 3018;
	int32_t t92 = 11945;

	t92 = ((x369<=(x370^x371))|x372);

	if (t92 != 3019) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = INT8_MIN;
	int64_t x374 = INT64_MIN;
	volatile uint16_t x375 = UINT16_MAX;
	int64_t x376 = -1LL;
	volatile int64_t t93 = 2262LL;

	t93 = ((x373<=(x374^x375))|x376);

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x377 = 0U;
	int32_t x378 = -1;
	int32_t x379 = INT32_MIN;
	volatile int32_t x380 = INT32_MIN;

	t94 = ((x377<=(x378^x379))|x380);

	if (t94 != -2147483647) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MIN;
	uint8_t x382 = 2U;
	uint16_t x383 = UINT16_MAX;
	int64_t x384 = INT64_MIN;
	static int64_t t95 = -3268LL;

	t95 = ((x381<=(x382^x383))|x384);

	if (t95 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = UINT64_MAX;
	volatile uint8_t x386 = UINT8_MAX;
	int64_t x387 = INT64_MIN;
	static int64_t x388 = INT64_MIN;
	static int64_t t96 = INT64_MIN;

	t96 = ((x385<=(x386^x387))|x388);

	if (t96 != INT64_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x389 = 11486693U;
	int16_t x390 = 153;
	int16_t x391 = -1;
	int32_t t97 = -107136;

	t97 = ((x389<=(x390^x391))|x392);

	if (t97 != 65535) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = -1;
	int16_t x394 = INT16_MAX;
	static volatile int8_t x395 = 12;
	volatile int32_t t98 = -1;

	t98 = ((x393<=(x394^x395))|x396);

	if (t98 != -2147483647) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x397 = INT16_MIN;
	uint64_t x398 = UINT64_MAX;
	int16_t x399 = INT16_MAX;
	int32_t x400 = -1;
	int32_t t99 = 1;

	t99 = ((x397<=(x398^x399))|x400);

	if (t99 != -1) { NG(); } else { ; }
	
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

