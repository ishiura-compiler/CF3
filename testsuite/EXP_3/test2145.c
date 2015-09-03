#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x13 = INT8_MIN;
int16_t x24 = 6;
uint64_t x35 = 252332748083087201LLU;
int64_t t9 = 1LL;
int8_t x41 = INT8_MAX;
int8_t x51 = 46;
int32_t x53 = -1;
uint32_t t13 = 1886465U;
int32_t x58 = INT32_MAX;
int32_t x60 = -1;
volatile int32_t x64 = INT32_MAX;
int32_t t15 = -46;
static int64_t x65 = INT64_MAX;
volatile int32_t x66 = INT32_MAX;
int64_t x71 = -199036675LL;
uint8_t x73 = 5U;
static volatile int64_t t18 = 15002888602670540LL;
int8_t x77 = 1;
static uint16_t x78 = 242U;
int64_t x81 = -1LL;
int32_t x85 = 1;
volatile int16_t x86 = INT16_MIN;
static int64_t x91 = INT64_MAX;
static uint64_t t22 = 27LLU;
int16_t x99 = INT16_MIN;
static int16_t x101 = INT16_MIN;
volatile uint8_t x110 = 12U;
int16_t x112 = 327;
int8_t x113 = -1;
int32_t x115 = INT32_MIN;
int64_t x120 = INT64_MAX;
volatile int16_t x124 = INT16_MIN;
static volatile int64_t x126 = INT64_MIN;
int16_t x136 = INT16_MAX;
int32_t t33 = 22073;
uint8_t x143 = 3U;
uint8_t x168 = 3U;
int16_t x170 = INT16_MIN;
uint64_t x171 = UINT64_MAX;
uint64_t x177 = 1520324484LLU;
int16_t x179 = -1;
static int32_t x185 = -1;
int8_t x187 = 3;
static int16_t x188 = INT16_MIN;
int64_t x190 = INT64_MAX;
int64_t x193 = 98992LL;
int64_t x201 = INT64_MIN;
int32_t x206 = INT32_MIN;
uint8_t x209 = 2U;
int32_t x210 = INT32_MAX;
static volatile int32_t t52 = 0;
static int32_t x218 = -90869;
int8_t x219 = INT8_MAX;
volatile int32_t t55 = 1;
int16_t x229 = INT16_MIN;
static uint64_t x240 = 623LLU;
int64_t x241 = INT64_MAX;
int16_t x243 = INT16_MIN;
static volatile int32_t t60 = -23415206;
volatile uint16_t x255 = 217U;
int64_t x259 = -1LL;
static uint64_t t66 = 34362040444217071LLU;
int16_t x279 = 13327;
int8_t x281 = INT8_MIN;
uint64_t x284 = UINT64_MAX;
int32_t x289 = INT32_MIN;
uint32_t x296 = 1890U;
volatile uint32_t t73 = 7U;
int8_t x298 = INT8_MIN;
int8_t x310 = INT8_MIN;
int32_t x313 = -1;
volatile uint32_t x316 = 1U;
int64_t x326 = INT64_MIN;
uint16_t x330 = 254U;
static int16_t x334 = -2;
uint8_t x340 = 2U;
volatile int32_t t84 = 259140;
int16_t x343 = -1;
uint32_t x344 = 962829435U;
uint8_t x351 = 29U;
uint32_t x354 = 767034977U;
int64_t t88 = 533982437839LL;
int8_t x374 = -3;
uint32_t t94 = 298304529U;
static int32_t x384 = INT32_MIN;
int16_t x393 = -1;
int64_t x394 = -1LL;
int8_t x399 = -1;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int64_t x2 = INT64_MIN;
	volatile int8_t x3 = INT8_MIN;
	uint8_t x4 = UINT8_MAX;
	int32_t t0 = 8356;

	t0 = ((x1<x2)^(x3^x4));

	if (t0 != -129) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	int16_t x6 = -1;
	volatile int16_t x7 = -1;
	uint64_t x8 = 1737849636261LLU;
	volatile uint64_t t1 = 4919624212390715LLU;

	t1 = ((x5<x6)^(x7^x8));

	if (t1 != 18446742335859915354LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -419;
	int8_t x10 = -1;
	uint16_t x11 = 37U;
	uint64_t x12 = UINT64_MAX;
	uint64_t t2 = 4544597769445971413LLU;

	t2 = ((x9<x10)^(x11^x12));

	if (t2 != 18446744073709551579LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x14 = 213422554576536LLU;
	int64_t x15 = -345101394029LL;
	volatile uint8_t x16 = 42U;
	static int64_t t3 = -3194LL;

	t3 = ((x13<x14)^(x15^x16));

	if (t3 != -345101393991LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = INT64_MIN;
	uint8_t x18 = 0U;
	int8_t x19 = INT8_MIN;
	static int16_t x20 = -1694;
	volatile int32_t t4 = 853;

	t4 = ((x17<x18)^(x19^x20));

	if (t4 != 1763) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x21 = 251297U;
	static volatile int16_t x22 = INT16_MIN;
	volatile int8_t x23 = -1;
	static int32_t t5 = 1748;

	t5 = ((x21<x22)^(x23^x24));

	if (t5 != -8) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	static volatile int8_t x26 = -25;
	int8_t x27 = INT8_MAX;
	int32_t x28 = -1;
	int32_t t6 = 30741;

	t6 = ((x25<x26)^(x27^x28));

	if (t6 != -127) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = 3;
	int8_t x30 = -1;
	static volatile int32_t x31 = INT32_MIN;
	int64_t x32 = INT64_MAX;
	static int64_t t7 = 21565634905265433LL;

	t7 = ((x29<x30)^(x31^x32));

	if (t7 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x33 = 3U;
	volatile int32_t x34 = 212661261;
	int64_t x36 = 2LL;
	uint64_t t8 = 312036LLU;

	t8 = ((x33<x34)^(x35^x36));

	if (t8 != 252332748083087202LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = 174;
	volatile int16_t x38 = 52;
	static int64_t x39 = INT64_MIN;
	static uint32_t x40 = 779926U;

	t9 = ((x37<x38)^(x39^x40));

	if (t9 != -9223372036853995882LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x42 = -846;
	volatile int8_t x43 = INT8_MIN;
	int32_t x44 = INT32_MIN;
	volatile int32_t t10 = 9137671;

	t10 = ((x41<x42)^(x43^x44));

	if (t10 != 2147483520) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x45 = -113706904680199490LL;
	uint32_t x46 = 1849U;
	int64_t x47 = -542726968485944140LL;
	volatile uint16_t x48 = UINT16_MAX;
	int64_t t11 = 7022LL;

	t11 = ((x45<x46)^(x47^x48));

	if (t11 != -542726968485995702LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x49 = -1;
	static int16_t x50 = -1;
	uint64_t x52 = 2968903938LLU;
	static volatile uint64_t t12 = 11LLU;

	t12 = ((x49<x50)^(x51^x52));

	if (t12 != 2968903980LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x54 = 8;
	uint32_t x55 = 151U;
	uint32_t x56 = 736586572U;

	t13 = ((x53<x54)^(x55^x56));

	if (t13 != 736586714U) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MAX;
	uint64_t x59 = 1220748585612504576LLU;
	volatile uint64_t t14 = 2036818398724680941LLU;

	t14 = ((x57<x58)^(x59^x60));

	if (t14 != 17225995488097047039LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x61 = INT32_MAX;
	int16_t x62 = INT16_MIN;
	int16_t x63 = -1249;

	t15 = ((x61<x62)^(x63^x64));

	if (t15 != -2147482400) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x67 = INT8_MAX;
	int32_t x68 = 842863818;
	static volatile int32_t t16 = -3;

	t16 = ((x65<x66)^(x67^x68));

	if (t16 != 842863797) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = 2951;
	int16_t x70 = -13342;
	volatile uint64_t x72 = 971LLU;
	static uint64_t t17 = 1158795461062091LLU;

	t17 = ((x69<x70)^(x71^x72));

	if (t17 != 18446744073510515510LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x74 = INT64_MIN;
	static int8_t x75 = -1;
	int64_t x76 = -68LL;

	t18 = ((x73<x74)^(x75^x76));

	if (t18 != 67LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x79 = INT32_MIN;
	int32_t x80 = INT32_MIN;
	int32_t t19 = -5253;

	t19 = ((x77<x78)^(x79^x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x82 = -1LL;
	static int64_t x83 = -1LL;
	int16_t x84 = INT16_MIN;
	volatile int64_t t20 = 1729192121LL;

	t20 = ((x81<x82)^(x83^x84));

	if (t20 != 32767LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x87 = -2;
	volatile int64_t x88 = -1LL;
	int64_t t21 = 276299751LL;

	t21 = ((x85<x86)^(x87^x88));

	if (t21 != 1LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x89 = 2U;
	int16_t x90 = -2289;
	uint64_t x92 = 13328812431LLU;

	t22 = ((x89<x90)^(x91^x92));

	if (t22 != 9223372023525963376LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int32_t x93 = INT32_MAX;
	volatile int32_t x94 = 286;
	int8_t x95 = -1;
	int64_t x96 = INT64_MIN;
	int64_t t23 = INT64_MAX;

	t23 = ((x93<x94)^(x95^x96));

	if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x97 = 6;
	uint32_t x98 = UINT32_MAX;
	static int64_t x100 = INT64_MIN;
	int64_t t24 = -960674442203LL;

	t24 = ((x97<x98)^(x99^x100));

	if (t24 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x102 = 61;
	int16_t x103 = 0;
	static uint8_t x104 = 4U;
	int32_t t25 = 5;

	t25 = ((x101<x102)^(x103^x104));

	if (t25 != 5) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = 42492;
	static uint16_t x106 = UINT16_MAX;
	int16_t x107 = 369;
	volatile int32_t x108 = INT32_MIN;
	volatile int32_t t26 = -14801311;

	t26 = ((x105<x106)^(x107^x108));

	if (t26 != -2147483280) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = -68326113LL;
	uint8_t x111 = 1U;
	volatile int32_t t27 = -1321755;

	t27 = ((x109<x110)^(x111^x112));

	if (t27 != 327) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x114 = 917;
	static volatile int16_t x116 = 14;
	int32_t t28 = -56;

	t28 = ((x113<x114)^(x115^x116));

	if (t28 != -2147483633) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint8_t x117 = 0U;
	int8_t x118 = -1;
	static int64_t x119 = -1LL;
	int64_t t29 = INT64_MIN;

	t29 = ((x117<x118)^(x119^x120));

	if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x121 = 66394U;
	int64_t x122 = -826818405599578LL;
	volatile int32_t x123 = INT32_MAX;
	volatile int32_t t30 = -96;

	t30 = ((x121<x122)^(x123^x124));

	if (t30 != -2147450881) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MAX;
	static volatile uint32_t x127 = 50954U;
	volatile int8_t x128 = INT8_MIN;
	uint32_t t31 = 3U;

	t31 = ((x125<x126)^(x127^x128));

	if (t31 != 4294916234U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x129 = 14U;
	int64_t x130 = INT64_MIN;
	uint32_t x131 = 8872U;
	int64_t x132 = INT64_MIN;
	volatile int64_t t32 = -421868LL;

	t32 = ((x129<x130)^(x131^x132));

	if (t32 != -9223372036854766936LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = 10U;
	volatile int8_t x134 = 15;
	static int32_t x135 = 220;

	t33 = ((x133<x134)^(x135^x136));

	if (t33 != 32546) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = INT16_MIN;
	static int16_t x138 = INT16_MIN;
	uint16_t x139 = UINT16_MAX;
	uint64_t x140 = 249341LLU;
	uint64_t t34 = 558LLU;

	t34 = ((x137<x138)^(x139^x140));

	if (t34 != 209410LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x141 = -1;
	int64_t x142 = INT64_MAX;
	static int16_t x144 = INT16_MAX;
	static int32_t t35 = 24979;

	t35 = ((x141<x142)^(x143^x144));

	if (t35 != 32765) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MIN;
	int32_t x146 = INT32_MAX;
	static uint32_t x147 = UINT32_MAX;
	int32_t x148 = INT32_MIN;
	volatile uint32_t t36 = 13U;

	t36 = ((x145<x146)^(x147^x148));

	if (t36 != 2147483646U) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x149 = -1;
	int16_t x150 = -1;
	int64_t x151 = 7326580295109LL;
	static uint16_t x152 = UINT16_MAX;
	int64_t t37 = -647952LL;

	t37 = ((x149<x150)^(x151^x152));

	if (t37 != 7326580324922LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x153 = 24909479;
	int64_t x154 = INT64_MIN;
	int64_t x155 = -4627075LL;
	int32_t x156 = INT32_MIN;
	volatile int64_t t38 = -464711183LL;

	t38 = ((x153<x154)^(x155^x156));

	if (t38 != 2142856573LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x157 = -13598177;
	int32_t x158 = INT32_MAX;
	volatile uint32_t x159 = 284908599U;
	volatile int64_t x160 = -1LL;
	int64_t t39 = 562674271252717LL;

	t39 = ((x157<x158)^(x159^x160));

	if (t39 != -284908599LL) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int8_t x161 = -17;
	static volatile int64_t x162 = -16778659083LL;
	int32_t x163 = INT32_MIN;
	uint8_t x164 = UINT8_MAX;
	int32_t t40 = -19095;

	t40 = ((x161<x162)^(x163^x164));

	if (t40 != -2147483393) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = UINT64_MAX;
	int64_t x166 = 111868433930LL;
	int8_t x167 = -1;
	volatile int32_t t41 = 0;

	t41 = ((x165<x166)^(x167^x168));

	if (t41 != -4) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = 2U;
	volatile int8_t x172 = -4;
	uint64_t t42 = 48724LLU;

	t42 = ((x169<x170)^(x171^x172));

	if (t42 != 3LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = -9;
	volatile int16_t x174 = -1;
	uint64_t x175 = 2921665590742975LLU;
	volatile int64_t x176 = INT64_MAX;
	uint64_t t43 = 462853498997637LLU;

	t43 = ((x173<x174)^(x175^x176));

	if (t43 != 9220450371264032833LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x178 = UINT16_MAX;
	volatile uint8_t x180 = UINT8_MAX;
	volatile int32_t t44 = 284698636;

	t44 = ((x177<x178)^(x179^x180));

	if (t44 != -256) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = 1722U;
	static int32_t x182 = -1;
	uint64_t x183 = 5377568LLU;
	volatile int32_t x184 = INT32_MIN;
	volatile uint64_t t45 = 27865941LLU;

	t45 = ((x181<x182)^(x183^x184));

	if (t45 != 18446744071567445536LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x186 = UINT16_MAX;
	int32_t t46 = -256197;

	t46 = ((x185<x186)^(x187^x188));

	if (t46 != -32766) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x189 = -1;
	int16_t x191 = 27;
	static uint64_t x192 = 24LLU;
	volatile uint64_t t47 = 13966LLU;

	t47 = ((x189<x190)^(x191^x192));

	if (t47 != 2LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x194 = INT64_MIN;
	uint16_t x195 = 3068U;
	uint32_t x196 = 1U;
	uint32_t t48 = 144525250U;

	t48 = ((x193<x194)^(x195^x196));

	if (t48 != 3069U) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = 69LLU;
	int32_t x198 = 600;
	int32_t x199 = INT32_MIN;
	static int64_t x200 = INT64_MAX;
	volatile int64_t t49 = -72624841901054LL;

	t49 = ((x197<x198)^(x199^x200));

	if (t49 != -9223372034707292162LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x202 = 15U;
	int64_t x203 = -1LL;
	int16_t x204 = INT16_MAX;
	int64_t t50 = 11658LL;

	t50 = ((x201<x202)^(x203^x204));

	if (t50 != -32767LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x205 = 1U;
	int16_t x207 = -1;
	int32_t x208 = INT32_MAX;
	int32_t t51 = INT32_MIN;

	t51 = ((x205<x206)^(x207^x208));

	if (t51 != INT32_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x211 = INT32_MAX;
	int16_t x212 = -67;

	t52 = ((x209<x210)^(x211^x212));

	if (t52 != -2147483581) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MAX;
	static int8_t x214 = INT8_MIN;
	static int32_t x215 = INT32_MIN;
	int64_t x216 = -1LL;
	int64_t t53 = 26978154305012194LL;

	t53 = ((x213<x214)^(x215^x216));

	if (t53 != 2147483647LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x217 = 505U;
	static int16_t x220 = INT16_MIN;
	int32_t t54 = 522054;

	t54 = ((x217<x218)^(x219^x220));

	if (t54 != -32641) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x221 = 4235LLU;
	int32_t x222 = INT32_MIN;
	int32_t x223 = -45189;
	static int8_t x224 = INT8_MIN;

	t55 = ((x221<x222)^(x223^x224));

	if (t55 != 45306) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x225 = 742U;
	uint32_t x226 = 1870U;
	int32_t x227 = INT32_MAX;
	static int8_t x228 = -1;
	volatile int32_t t56 = 1;

	t56 = ((x225<x226)^(x227^x228));

	if (t56 != -2147483647) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x230 = 16U;
	uint16_t x231 = 516U;
	static uint32_t x232 = 1194U;
	uint32_t t57 = 98353U;

	t57 = ((x229<x230)^(x231^x232));

	if (t57 != 1711U) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x233 = 2U;
	int16_t x234 = 39;
	static uint32_t x235 = UINT32_MAX;
	static uint64_t x236 = 2880386363LLU;
	volatile uint64_t t58 = 6LLU;

	t58 = ((x233<x234)^(x235^x236));

	if (t58 != 1414580933LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = 201194593461769LL;
	int64_t x238 = INT64_MAX;
	static int8_t x239 = 3;
	uint64_t t59 = 1859726LLU;

	t59 = ((x237<x238)^(x239^x240));

	if (t59 != 621LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x242 = INT8_MAX;
	static volatile int8_t x244 = INT8_MIN;

	t60 = ((x241<x242)^(x243^x244));

	if (t60 != 32640) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MIN;
	int32_t x246 = INT32_MIN;
	uint64_t x247 = UINT64_MAX;
	uint64_t x248 = UINT64_MAX;
	uint64_t t61 = 0LLU;

	t61 = ((x245<x246)^(x247^x248));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = -2;
	static uint32_t x250 = 17144697U;
	int8_t x251 = INT8_MAX;
	int64_t x252 = INT64_MIN;
	volatile int64_t t62 = 2607499LL;

	t62 = ((x249<x250)^(x251^x252));

	if (t62 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = 2;
	int32_t x254 = INT32_MAX;
	uint32_t x256 = 10U;
	volatile uint32_t t63 = 240U;

	t63 = ((x253<x254)^(x255^x256));

	if (t63 != 210U) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x257 = 1U;
	volatile int32_t x258 = 2009651;
	volatile int32_t x260 = -1;
	static int64_t t64 = 71547731470LL;

	t64 = ((x257<x258)^(x259^x260));

	if (t64 != 1LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = -1;
	uint32_t x262 = UINT32_MAX;
	static uint32_t x263 = 177875U;
	int16_t x264 = INT16_MIN;
	uint32_t t65 = 101U;

	t65 = ((x261<x262)^(x263^x264));

	if (t65 != 4294784723U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = -1LL;
	volatile uint32_t x266 = 30U;
	uint64_t x267 = 985688LLU;
	int32_t x268 = INT32_MIN;

	t66 = ((x265<x266)^(x267^x268));

	if (t66 != 18446744071563053657LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = 404U;
	volatile uint32_t x270 = UINT32_MAX;
	int8_t x271 = INT8_MIN;
	int64_t x272 = INT64_MIN;
	volatile int64_t t67 = 0LL;

	t67 = ((x269<x270)^(x271^x272));

	if (t67 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = -137109;
	uint16_t x274 = UINT16_MAX;
	static int32_t x275 = -1;
	uint32_t x276 = 3059U;
	static volatile uint32_t t68 = 281808U;

	t68 = ((x273<x274)^(x275^x276));

	if (t68 != 4294964237U) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MAX;
	volatile uint8_t x278 = 1U;
	uint8_t x280 = 2U;
	volatile int32_t t69 = 315;

	t69 = ((x277<x278)^(x279^x280));

	if (t69 != 13325) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x282 = 55U;
	int32_t x283 = -14595665;
	uint64_t t70 = 1634345241LLU;

	t70 = ((x281<x282)^(x283^x284));

	if (t70 != 14595665LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = INT64_MAX;
	static int32_t x286 = INT32_MAX;
	int16_t x287 = INT16_MAX;
	volatile uint8_t x288 = 6U;
	volatile int32_t t71 = -13;

	t71 = ((x285<x286)^(x287^x288));

	if (t71 != 32761) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x290 = 1U;
	static int32_t x291 = 1;
	uint64_t x292 = 100665209793LLU;
	static volatile uint64_t t72 = 11350LLU;

	t72 = ((x289<x290)^(x291^x292));

	if (t72 != 100665209793LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x293 = INT8_MIN;
	int16_t x294 = INT16_MIN;
	uint32_t x295 = 57U;

	t73 = ((x293<x294)^(x295^x296));

	if (t73 != 1883U) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x297 = UINT8_MAX;
	int8_t x299 = 25;
	int32_t x300 = INT32_MIN;
	int32_t t74 = -1;

	t74 = ((x297<x298)^(x299^x300));

	if (t74 != -2147483623) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = -1;
	int8_t x302 = -5;
	int8_t x303 = 3;
	int8_t x304 = INT8_MIN;
	static volatile int32_t t75 = 1;

	t75 = ((x301<x302)^(x303^x304));

	if (t75 != -125) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = 749933051U;
	static int16_t x306 = INT16_MAX;
	int8_t x307 = INT8_MAX;
	static int16_t x308 = -12843;
	int32_t t76 = 3124;

	t76 = ((x305<x306)^(x307^x308));

	if (t76 != -12886) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x309 = UINT16_MAX;
	int32_t x311 = INT32_MIN;
	static volatile int16_t x312 = 403;
	int32_t t77 = 2411;

	t77 = ((x309<x310)^(x311^x312));

	if (t77 != -2147483245) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x314 = INT16_MAX;
	int16_t x315 = -1;
	volatile uint32_t t78 = UINT32_MAX;

	t78 = ((x313<x314)^(x315^x316));

	if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int16_t x317 = INT16_MIN;
	uint16_t x318 = 1737U;
	uint8_t x319 = 0U;
	uint8_t x320 = UINT8_MAX;
	int32_t t79 = 89891679;

	t79 = ((x317<x318)^(x319^x320));

	if (t79 != 254) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x321 = 2U;
	int8_t x322 = INT8_MAX;
	uint64_t x323 = 21603717LLU;
	static uint32_t x324 = 392134U;
	uint64_t t80 = 52184278288254297LLU;

	t80 = ((x321<x322)^(x323^x324));

	if (t80 != 21782082LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = INT8_MAX;
	int8_t x327 = -1;
	static volatile uint32_t x328 = 15662278U;
	static uint32_t t81 = 799109U;

	t81 = ((x325<x326)^(x327^x328));

	if (t81 != 4279305017U) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x329 = 11;
	int8_t x331 = -1;
	volatile uint64_t x332 = 4623554187533549LLU;
	uint64_t t82 = 2922669717LLU;

	t82 = ((x329<x330)^(x331^x332));

	if (t82 != 18442120519522018067LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = -1;
	int8_t x335 = INT8_MAX;
	int8_t x336 = INT8_MIN;
	int32_t t83 = -230;

	t83 = ((x333<x334)^(x335^x336));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x337 = INT8_MIN;
	volatile uint64_t x338 = UINT64_MAX;
	static int8_t x339 = -4;

	t84 = ((x337<x338)^(x339^x340));

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = -1;
	volatile int64_t x342 = -1LL;
	volatile uint32_t t85 = 1546760969U;

	t85 = ((x341<x342)^(x343^x344));

	if (t85 != 3332137860U) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int8_t x345 = INT8_MIN;
	uint8_t x346 = 30U;
	volatile int32_t x347 = -994516860;
	volatile int32_t x348 = INT32_MAX;
	volatile int32_t t86 = 17814178;

	t86 = ((x345<x346)^(x347^x348));

	if (t86 != -1152966790) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int64_t x349 = INT64_MAX;
	uint16_t x350 = 20810U;
	uint32_t x352 = 1194272233U;
	volatile uint32_t t87 = 464885U;

	t87 = ((x349<x350)^(x351^x352));

	if (t87 != 1194272244U) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = -1LL;
	int64_t x355 = -38432529LL;
	int8_t x356 = -11;

	t88 = ((x353<x354)^(x355^x356));

	if (t88 != 38432539LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = INT8_MIN;
	static uint64_t x358 = UINT64_MAX;
	int64_t x359 = INT64_MIN;
	int16_t x360 = 692;
	int64_t t89 = 434LL;

	t89 = ((x357<x358)^(x359^x360));

	if (t89 != -9223372036854775115LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x361 = -2;
	int8_t x362 = 1;
	int16_t x363 = -1;
	int32_t x364 = INT32_MIN;
	int32_t t90 = 304249;

	t90 = ((x361<x362)^(x363^x364));

	if (t90 != 2147483646) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x365 = 5U;
	int8_t x366 = INT8_MIN;
	int8_t x367 = 0;
	uint16_t x368 = UINT16_MAX;
	volatile int32_t t91 = 28481;

	t91 = ((x365<x366)^(x367^x368));

	if (t91 != 65535) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x369 = UINT8_MAX;
	volatile int64_t x370 = INT64_MAX;
	int8_t x371 = -5;
	volatile int8_t x372 = INT8_MIN;
	int32_t t92 = -118;

	t92 = ((x369<x370)^(x371^x372));

	if (t92 != 122) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x373 = -1;
	volatile uint8_t x375 = 0U;
	int32_t x376 = INT32_MIN;
	int32_t t93 = INT32_MIN;

	t93 = ((x373<x374)^(x375^x376));

	if (t93 != INT32_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = 0;
	volatile int16_t x378 = -1;
	int8_t x379 = INT8_MIN;
	static volatile uint32_t x380 = 31526831U;

	t94 = ((x377<x378)^(x379^x380));

	if (t94 != 4263440431U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = 15508LL;
	static int64_t x382 = INT64_MIN;
	int16_t x383 = -1;
	int32_t t95 = INT32_MAX;

	t95 = ((x381<x382)^(x383^x384));

	if (t95 != INT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x385 = UINT32_MAX;
	uint64_t x386 = 127199953781391127LLU;
	int64_t x387 = INT64_MIN;
	static uint32_t x388 = UINT32_MAX;
	int64_t t96 = 1004429590283LL;

	t96 = ((x385<x386)^(x387^x388));

	if (t96 != -9223372032559808514LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = -1;
	int32_t x390 = INT32_MIN;
	static int32_t x391 = 790353;
	volatile int16_t x392 = 1;
	volatile int32_t t97 = -6;

	t97 = ((x389<x390)^(x391^x392));

	if (t97 != 790352) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x395 = -1;
	static int8_t x396 = INT8_MIN;
	static volatile int32_t t98 = -1;

	t98 = ((x393<x394)^(x395^x396));

	if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x397 = -1;
	int32_t x398 = INT32_MIN;
	volatile int64_t x400 = -39LL;
	volatile int64_t t99 = -36970421511LL;

	t99 = ((x397<x398)^(x399^x400));

	if (t99 != 38LL) { NG(); } else { ; }
	
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

