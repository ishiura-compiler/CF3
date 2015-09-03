#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = -1LL;
int32_t x3 = -250313010;
uint32_t x8 = 16075397U;
int16_t x17 = INT16_MIN;
int16_t x22 = INT16_MIN;
volatile int16_t x24 = INT16_MIN;
volatile uint64_t t5 = 1149907551LLU;
static uint8_t x29 = 114U;
int32_t x30 = -1;
static volatile uint64_t x31 = UINT64_MAX;
static int16_t x34 = INT16_MIN;
volatile int64_t t8 = -25515011LL;
uint8_t x37 = 1U;
uint16_t x40 = 2570U;
volatile uint16_t x42 = 267U;
int32_t t11 = 10317;
int16_t x51 = INT16_MIN;
static int32_t x59 = INT32_MAX;
static volatile uint32_t t14 = 12U;
int32_t t16 = -280541380;
volatile int64_t x73 = -287LL;
int32_t x74 = INT32_MIN;
int32_t t19 = -89;
int32_t x82 = 46459253;
static volatile uint32_t x87 = 57U;
int32_t x89 = INT32_MIN;
volatile int32_t t22 = 1;
static int16_t x98 = -699;
volatile uint32_t x104 = 223U;
static volatile int64_t x111 = INT64_MIN;
volatile int32_t x113 = INT32_MAX;
uint64_t x114 = UINT64_MAX;
int16_t x119 = INT16_MIN;
int64_t t29 = 309116LL;
static uint8_t x121 = UINT8_MAX;
int32_t t30 = 943256656;
static int64_t x131 = 1LL;
uint32_t x135 = 511U;
int32_t t33 = 1228;
uint8_t x137 = 1U;
uint8_t x141 = UINT8_MAX;
static volatile int8_t x145 = INT8_MIN;
volatile int64_t t36 = 11096LL;
static int32_t x149 = -1;
static int64_t x151 = INT64_MAX;
volatile int32_t t38 = -6590463;
volatile int16_t x158 = INT16_MIN;
int64_t t39 = -35124LL;
int32_t t40 = -1276;
uint8_t x170 = 3U;
volatile int32_t x173 = -9814;
int64_t x178 = INT64_MIN;
int16_t x187 = 5;
static int8_t x190 = -1;
int16_t x192 = -1;
volatile uint32_t t47 = 16U;
int64_t x201 = 3983472537448LL;
int8_t x215 = -1;
static int16_t x223 = -1;
static uint32_t x231 = UINT32_MAX;
uint64_t x237 = 35089397813583298LLU;
static uint16_t x243 = 4751U;
uint32_t x257 = UINT32_MAX;
uint64_t x258 = 8LLU;
volatile uint32_t t63 = 476877609U;
uint16_t x272 = UINT16_MAX;
int32_t x274 = 450237;
int64_t x282 = -20428LL;
int32_t x288 = INT32_MIN;
volatile int32_t t69 = -189740;
uint8_t x290 = 6U;
static int64_t x293 = 364463LL;
volatile uint16_t x298 = UINT16_MAX;
int64_t x303 = INT64_MIN;
int16_t x308 = INT16_MIN;
int32_t t75 = 1225;
uint64_t x324 = 367721LLU;
volatile uint64_t t78 = 1368650157689LLU;
static int8_t x327 = INT8_MAX;
int16_t x328 = INT16_MIN;
static int64_t t79 = 2898737497968LL;
uint64_t x338 = 63585843LLU;
int64_t x342 = -1LL;
int32_t x343 = 25969;
int16_t x344 = INT16_MIN;
volatile uint8_t x347 = 14U;
int16_t x349 = 6;
static uint8_t x350 = 3U;
uint8_t x359 = 66U;
uint32_t x360 = 39124900U;
int32_t x361 = -1;
volatile int64_t x363 = INT64_MIN;
uint32_t x365 = UINT32_MAX;
int32_t x367 = -1;
uint8_t x388 = UINT8_MAX;
int32_t x401 = -1;
static uint8_t x402 = 3U;
int64_t x406 = INT64_MIN;
volatile int64_t x412 = INT64_MIN;


void f0(void) {
	volatile int16_t x2 = INT16_MIN;
	static uint64_t x4 = UINT64_MAX;
	volatile uint64_t t0 = 3LLU;

	t0 = ((x1-(x2<x3))%x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	static volatile int8_t x6 = -1;
	static int32_t x7 = INT32_MAX;
	volatile uint32_t t1 = 164126833U;

	t1 = ((x5-(x6<x7))%x8);

	if (t1 != 2836295U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -1;
	int8_t x10 = -28;
	int64_t x11 = 5852460627080919LL;
	uint8_t x12 = 1U;
	int32_t t2 = -118590;

	t2 = ((x9-(x10<x11))%x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 243U;
	static int64_t x14 = INT64_MIN;
	int16_t x15 = INT16_MAX;
	int32_t x16 = 29;
	volatile uint32_t t3 = 2182881U;

	t3 = ((x13-(x14<x15))%x16);

	if (t3 != 10U) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint32_t x18 = 421U;
	volatile uint16_t x19 = 0U;
	int32_t x20 = -229532;
	volatile int32_t t4 = 1626;

	t4 = ((x17-(x18<x19))%x20);

	if (t4 != -32768) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x21 = UINT64_MAX;
	int16_t x23 = INT16_MIN;

	t5 = ((x21-(x22<x23))%x24);

	if (t5 != 32767LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = -1LL;
	int64_t x26 = INT64_MIN;
	static uint64_t x27 = 15711319139LLU;
	int8_t x28 = INT8_MIN;
	int64_t t6 = -369106439595LL;

	t6 = ((x25-(x26<x27))%x28);

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x32 = 9;
	int32_t t7 = 931;

	t7 = ((x29-(x30<x31))%x32);

	if (t7 != 6) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -11421289360LL;
	volatile uint32_t x35 = UINT32_MAX;
	int64_t x36 = INT64_MIN;

	t8 = ((x33-(x34<x35))%x36);

	if (t8 != -11421289361LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x38 = INT32_MAX;
	int64_t x39 = -1LL;
	int32_t t9 = 25;

	t9 = ((x37-(x38<x39))%x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = 2710;
	volatile int32_t x43 = INT32_MAX;
	static uint16_t x44 = UINT16_MAX;
	static volatile int32_t t10 = 0;

	t10 = ((x41-(x42<x43))%x44);

	if (t10 != 2709) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	int16_t x46 = 62;
	uint16_t x47 = 17U;
	int8_t x48 = 5;

	t11 = ((x45-(x46<x47))%x48);

	if (t11 != -3) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = -1;
	volatile int8_t x50 = -6;
	volatile int16_t x52 = INT16_MIN;
	int32_t t12 = -1519849;

	t12 = ((x49-(x50<x51))%x52);

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = 1;
	int8_t x54 = INT8_MAX;
	int32_t x55 = -1;
	int32_t x56 = INT32_MAX;
	int32_t t13 = 3;

	t13 = ((x53-(x54<x55))%x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 516804127U;
	uint8_t x58 = UINT8_MAX;
	uint32_t x60 = UINT32_MAX;

	t14 = ((x57-(x58<x59))%x60);

	if (t14 != 516804126U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x61 = -1465736;
	static int8_t x62 = INT8_MIN;
	static volatile int8_t x63 = 25;
	static uint16_t x64 = UINT16_MAX;
	static volatile int32_t t15 = -260429900;

	t15 = ((x61-(x62<x63))%x64);

	if (t15 != -23967) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MIN;
	uint8_t x66 = 100U;
	uint64_t x67 = 3220063350568516LLU;
	volatile int16_t x68 = INT16_MAX;

	t16 = ((x65-(x66<x67))%x68);

	if (t16 != -129) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x69 = 192334856LLU;
	static int64_t x70 = INT64_MAX;
	int32_t x71 = 313;
	uint16_t x72 = 85U;
	uint64_t t17 = 6792982422702934LLU;

	t17 = ((x69-(x70<x71))%x72);

	if (t17 != 1LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x75 = 3U;
	uint16_t x76 = 2U;
	int64_t t18 = 621526154237227934LL;

	t18 = ((x73-(x74<x75))%x76);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x77 = -1;
	static uint8_t x78 = 0U;
	volatile int64_t x79 = INT64_MAX;
	int16_t x80 = INT16_MAX;

	t19 = ((x77-(x78<x79))%x80);

	if (t19 != -2) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MIN;
	volatile uint16_t x83 = UINT16_MAX;
	int16_t x84 = INT16_MIN;
	int32_t t20 = -8150291;

	t20 = ((x81-(x82<x83))%x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int64_t x85 = INT64_MIN;
	volatile uint32_t x86 = UINT32_MAX;
	uint64_t x88 = UINT64_MAX;
	uint64_t t21 = 4253609407945930LLU;

	t21 = ((x85-(x86<x87))%x88);

	if (t21 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x90 = INT16_MAX;
	int64_t x91 = INT64_MIN;
	int16_t x92 = INT16_MIN;

	t22 = ((x89-(x90<x91))%x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = UINT16_MAX;
	int64_t x94 = INT64_MIN;
	int16_t x95 = -1;
	static int16_t x96 = -2;
	static volatile int32_t t23 = 2;

	t23 = ((x93-(x94<x95))%x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x97 = 244;
	int64_t x99 = INT64_MIN;
	int8_t x100 = INT8_MIN;
	volatile int32_t t24 = -684001571;

	t24 = ((x97-(x98<x99))%x100);

	if (t24 != 116) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x101 = 0U;
	uint16_t x102 = 941U;
	int32_t x103 = INT32_MIN;
	static uint32_t t25 = 1768U;

	t25 = ((x101-(x102<x103))%x104);

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x105 = -415;
	uint64_t x106 = UINT64_MAX;
	uint8_t x107 = 6U;
	uint32_t x108 = 1005U;
	uint32_t t26 = 130708036U;

	t26 = ((x105-(x106<x107))%x108);

	if (t26 != 891U) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x109 = -1;
	int64_t x110 = INT64_MAX;
	int64_t x112 = -1LL;
	int64_t t27 = 25641121LL;

	t27 = ((x109-(x110<x111))%x112);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x115 = INT16_MIN;
	uint64_t x116 = UINT64_MAX;
	uint64_t t28 = 192005783446LLU;

	t28 = ((x113-(x114<x115))%x116);

	if (t28 != 2147483647LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MIN;
	int16_t x118 = -1;
	static int64_t x120 = -9214742LL;

	t29 = ((x117-(x118<x119))%x120);

	if (t29 != -32768LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint16_t x122 = UINT16_MAX;
	static int32_t x123 = -1749471;
	uint8_t x124 = 58U;

	t30 = ((x121-(x122<x123))%x124);

	if (t30 != 23) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = -1LL;
	uint64_t x126 = 74344697LLU;
	static uint16_t x127 = UINT16_MAX;
	int16_t x128 = INT16_MAX;
	int64_t t31 = 8155300874825LL;

	t31 = ((x125-(x126<x127))%x128);

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = -1LL;
	int8_t x130 = -8;
	volatile int64_t x132 = INT64_MIN;
	int64_t t32 = -120791340LL;

	t32 = ((x129-(x130<x131))%x132);

	if (t32 != -2LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MIN;
	static int16_t x134 = 803;
	int16_t x136 = INT16_MIN;

	t33 = ((x133-(x134<x135))%x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x138 = INT32_MIN;
	volatile uint16_t x139 = 14492U;
	volatile uint8_t x140 = UINT8_MAX;
	volatile int32_t t34 = -41259;

	t34 = ((x137-(x138<x139))%x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x142 = 5694LL;
	static int16_t x143 = INT16_MIN;
	static int8_t x144 = INT8_MIN;
	volatile int32_t t35 = -27;

	t35 = ((x141-(x142<x143))%x144);

	if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x146 = UINT8_MAX;
	int32_t x147 = 120042057;
	int64_t x148 = INT64_MAX;

	t36 = ((x145-(x146<x147))%x148);

	if (t36 != -129LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x150 = UINT16_MAX;
	int32_t x152 = -1;
	volatile int32_t t37 = 34908;

	t37 = ((x149-(x150<x151))%x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = -1;
	int32_t x154 = -116;
	uint8_t x155 = 29U;
	static int32_t x156 = -1;

	t38 = ((x153-(x154<x155))%x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x157 = -1LL;
	volatile int16_t x159 = INT16_MIN;
	volatile int32_t x160 = INT32_MIN;

	t39 = ((x157-(x158<x159))%x160);

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x161 = 21U;
	static int32_t x162 = INT32_MIN;
	int32_t x163 = INT32_MIN;
	int32_t x164 = -3;

	t40 = ((x161-(x162<x163))%x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = -1;
	int8_t x166 = -1;
	int8_t x167 = -1;
	volatile uint8_t x168 = UINT8_MAX;
	volatile int32_t t41 = -6;

	t41 = ((x165-(x166<x167))%x168);

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint8_t x169 = 27U;
	int16_t x171 = INT16_MIN;
	volatile uint8_t x172 = 15U;
	volatile int32_t t42 = 7708;

	t42 = ((x169-(x170<x171))%x172);

	if (t42 != 12) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x174 = -1;
	uint8_t x175 = UINT8_MAX;
	static int8_t x176 = INT8_MAX;
	volatile int32_t t43 = -266;

	t43 = ((x173-(x174<x175))%x176);

	if (t43 != -36) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = 61315807254LLU;
	static volatile int16_t x179 = INT16_MIN;
	int8_t x180 = INT8_MAX;
	static volatile uint64_t t44 = 3972951919606897LLU;

	t44 = ((x177-(x178<x179))%x180);

	if (t44 != 116LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = -18271489LL;
	int64_t x182 = -1LL;
	static uint32_t x183 = UINT32_MAX;
	static volatile int64_t x184 = INT64_MIN;
	int64_t t45 = -10911075276025LL;

	t45 = ((x181-(x182<x183))%x184);

	if (t45 != -18271490LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MAX;
	static volatile int8_t x186 = -22;
	static uint64_t x188 = 3136458LLU;
	static volatile uint64_t t46 = 11509442370706269LLU;

	t46 = ((x185-(x186<x187))%x188);

	if (t46 != 32766LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = 217U;
	static int32_t x191 = INT32_MIN;

	t47 = ((x189-(x190<x191))%x192);

	if (t47 != 217U) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = 15306707346701973LLU;
	static int64_t x194 = -68051361568523322LL;
	volatile int8_t x195 = INT8_MAX;
	int64_t x196 = -1491787LL;
	static volatile uint64_t t48 = 1LLU;

	t48 = ((x193-(x194<x195))%x196);

	if (t48 != 15306707346701972LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = 1;
	uint16_t x198 = 166U;
	int64_t x199 = 24820647787464256LL;
	int64_t x200 = INT64_MIN;
	volatile int64_t t49 = 63319368131116470LL;

	t49 = ((x197-(x198<x199))%x200);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x202 = 15017U;
	uint8_t x203 = UINT8_MAX;
	uint32_t x204 = UINT32_MAX;
	volatile int64_t t50 = 54565670643696LL;

	t50 = ((x201-(x202<x203))%x204);

	if (t50 != 2037854983LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = INT16_MAX;
	int8_t x206 = INT8_MIN;
	uint8_t x207 = UINT8_MAX;
	int64_t x208 = -207704LL;
	static volatile int64_t t51 = -366958445224029LL;

	t51 = ((x205-(x206<x207))%x208);

	if (t51 != 32766LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = UINT64_MAX;
	uint16_t x210 = 3735U;
	volatile int64_t x211 = -1LL;
	int16_t x212 = -1;
	uint64_t t52 = 116832005192582289LLU;

	t52 = ((x209-(x210<x211))%x212);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = UINT32_MAX;
	int8_t x214 = INT8_MIN;
	int16_t x216 = -1;
	static uint32_t t53 = 1896U;

	t53 = ((x213-(x214<x215))%x216);

	if (t53 != 4294967294U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x217 = INT32_MIN;
	int16_t x218 = -1;
	uint64_t x219 = 17LLU;
	int16_t x220 = INT16_MIN;
	volatile int32_t t54 = -9196;

	t54 = ((x217-(x218<x219))%x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = -1;
	int8_t x222 = -5;
	int16_t x224 = INT16_MIN;
	int32_t t55 = 666000228;

	t55 = ((x221-(x222<x223))%x224);

	if (t55 != -2) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x225 = 23427757U;
	int32_t x226 = -1;
	static uint16_t x227 = UINT16_MAX;
	int32_t x228 = 879;
	volatile uint32_t t56 = 883833047U;

	t56 = ((x225-(x226<x227))%x228);

	if (t56 != 648U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = -3;
	volatile int32_t x230 = INT32_MAX;
	int64_t x232 = 1LL;
	static int64_t t57 = -71276884250858020LL;

	t57 = ((x229-(x230<x231))%x232);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = 3;
	int32_t x234 = -1;
	uint8_t x235 = 34U;
	static int16_t x236 = INT16_MIN;
	static volatile int32_t t58 = 89370493;

	t58 = ((x233-(x234<x235))%x236);

	if (t58 != 2) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint32_t x238 = UINT32_MAX;
	int32_t x239 = INT32_MIN;
	uint8_t x240 = UINT8_MAX;
	volatile uint64_t t59 = 1126LLU;

	t59 = ((x237-(x238<x239))%x240);

	if (t59 != 73LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x241 = UINT8_MAX;
	volatile int8_t x242 = INT8_MAX;
	volatile int32_t x244 = INT32_MIN;
	volatile int32_t t60 = -288121;

	t60 = ((x241-(x242<x243))%x244);

	if (t60 != 254) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = INT16_MIN;
	int64_t x246 = -827131144LL;
	uint64_t x247 = 20627138724576756LLU;
	int16_t x248 = INT16_MAX;
	static int32_t t61 = -94493071;

	t61 = ((x245-(x246<x247))%x248);

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x253 = 34124312766248505LL;
	uint32_t x254 = 8865U;
	int32_t x255 = 251167;
	static int16_t x256 = 8842;
	volatile int64_t t62 = 95444LL;

	t62 = ((x253-(x254<x255))%x256);

	if (t62 != 3630LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x259 = INT64_MIN;
	volatile int32_t x260 = -1;

	t63 = ((x257-(x258<x259))%x260);

	if (t63 != 4294967294U) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x261 = 0U;
	uint16_t x262 = 508U;
	int64_t x263 = 323348303819975LL;
	volatile uint32_t x264 = UINT32_MAX;
	volatile uint32_t t64 = 8707U;

	t64 = ((x261-(x262<x263))%x264);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x269 = UINT32_MAX;
	int16_t x270 = -5;
	volatile uint64_t x271 = 11052206LLU;
	volatile uint32_t t65 = 14U;

	t65 = ((x269-(x270<x271))%x272);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x273 = 679;
	volatile int32_t x275 = -26;
	volatile int8_t x276 = INT8_MIN;
	static volatile int32_t t66 = 5872838;

	t66 = ((x273-(x274<x275))%x276);

	if (t66 != 39) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x277 = 21U;
	int8_t x278 = INT8_MIN;
	int64_t x279 = -384131360640241LL;
	uint64_t x280 = UINT64_MAX;
	uint64_t t67 = 165227366661271944LLU;

	t67 = ((x277-(x278<x279))%x280);

	if (t67 != 21LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x281 = 0;
	int16_t x283 = -1;
	int64_t x284 = INT64_MIN;
	volatile int64_t t68 = 566LL;

	t68 = ((x281-(x282<x283))%x284);

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint16_t x285 = 2658U;
	uint32_t x286 = 28U;
	int64_t x287 = INT64_MIN;

	t69 = ((x285-(x286<x287))%x288);

	if (t69 != 2658) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x289 = 0U;
	uint16_t x291 = UINT16_MAX;
	int16_t x292 = -862;
	int32_t t70 = -1;

	t70 = ((x289-(x290<x291))%x292);

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x294 = 0U;
	volatile uint16_t x295 = UINT16_MAX;
	static int8_t x296 = INT8_MIN;
	volatile int64_t t71 = -901731780036LL;

	t71 = ((x293-(x294<x295))%x296);

	if (t71 != 46LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x297 = UINT32_MAX;
	volatile uint16_t x299 = UINT16_MAX;
	int8_t x300 = -1;
	volatile uint32_t t72 = 381U;

	t72 = ((x297-(x298<x299))%x300);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x301 = 3109U;
	uint64_t x302 = 0LLU;
	int16_t x304 = INT16_MIN;
	static volatile uint32_t t73 = 13391169U;

	t73 = ((x301-(x302<x303))%x304);

	if (t73 != 3108U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x305 = INT8_MIN;
	int16_t x306 = INT16_MIN;
	int8_t x307 = INT8_MIN;
	int32_t t74 = 3;

	t74 = ((x305-(x306<x307))%x308);

	if (t74 != -129) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x309 = 7;
	volatile int32_t x310 = 2696;
	int32_t x311 = INT32_MIN;
	static int32_t x312 = INT32_MIN;

	t75 = ((x309-(x310<x311))%x312);

	if (t75 != 7) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x313 = INT16_MIN;
	int16_t x314 = -1;
	int64_t x315 = 187LL;
	int64_t x316 = 7274LL;
	static volatile int64_t t76 = -937995LL;

	t76 = ((x313-(x314<x315))%x316);

	if (t76 != -3673LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x317 = INT16_MIN;
	volatile uint16_t x318 = UINT16_MAX;
	int64_t x319 = -334532458LL;
	volatile int16_t x320 = -1;
	int32_t t77 = -11882964;

	t77 = ((x317-(x318<x319))%x320);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x321 = -1;
	static uint32_t x322 = UINT32_MAX;
	int8_t x323 = INT8_MIN;

	t78 = ((x321-(x322<x323))%x324);

	if (t78 != 292404LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x325 = -2618489123713731LL;
	int64_t x326 = -1LL;

	t79 = ((x325-(x326<x327))%x328);

	if (t79 != -12996LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x329 = 61U;
	static int64_t x330 = INT64_MIN;
	volatile int64_t x331 = 3459722983468080LL;
	int32_t x332 = INT32_MIN;
	int32_t t80 = -83667;

	t80 = ((x329-(x330<x331))%x332);

	if (t80 != 60) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x333 = 2283683336122225LLU;
	int64_t x334 = INT64_MIN;
	static uint32_t x335 = 1269374857U;
	uint32_t x336 = 7737U;
	volatile uint64_t t81 = 6482203707782453674LLU;

	t81 = ((x333-(x334<x335))%x336);

	if (t81 != 2289LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x337 = -3710;
	uint32_t x339 = 2298698U;
	int16_t x340 = -7;
	volatile int32_t t82 = 4759300;

	t82 = ((x337-(x338<x339))%x340);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int32_t x341 = -94;
	volatile int32_t t83 = 1;

	t83 = ((x341-(x342<x343))%x344);

	if (t83 != -95) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x345 = -1LL;
	static int64_t x346 = 121362LL;
	int8_t x348 = INT8_MIN;
	volatile int64_t t84 = -101898604598687LL;

	t84 = ((x345-(x346<x347))%x348);

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x351 = -1;
	uint64_t x352 = UINT64_MAX;
	static uint64_t t85 = 16653514LLU;

	t85 = ((x349-(x350<x351))%x352);

	if (t85 != 6LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x357 = UINT8_MAX;
	uint16_t x358 = UINT16_MAX;
	static uint32_t t86 = 14U;

	t86 = ((x357-(x358<x359))%x360);

	if (t86 != 255U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x362 = 2;
	int32_t x364 = -12533;
	volatile int32_t t87 = 50874;

	t87 = ((x361-(x362<x363))%x364);

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x366 = INT64_MAX;
	int8_t x368 = 2;
	static uint32_t t88 = 107U;

	t88 = ((x365-(x366<x367))%x368);

	if (t88 != 1U) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x369 = UINT32_MAX;
	uint8_t x370 = 4U;
	int32_t x371 = -15827;
	uint8_t x372 = UINT8_MAX;
	uint32_t t89 = 82332U;

	t89 = ((x369-(x370<x371))%x372);

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x373 = 1;
	int8_t x374 = 1;
	uint64_t x375 = UINT64_MAX;
	int16_t x376 = INT16_MIN;
	volatile int32_t t90 = -23292;

	t90 = ((x373-(x374<x375))%x376);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x377 = UINT32_MAX;
	uint32_t x378 = 287U;
	static volatile int8_t x379 = 3;
	int16_t x380 = INT16_MIN;
	uint32_t t91 = 2U;

	t91 = ((x377-(x378<x379))%x380);

	if (t91 != 32767U) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x381 = UINT32_MAX;
	volatile uint32_t x382 = 452U;
	uint16_t x383 = UINT16_MAX;
	int32_t x384 = 47;
	volatile uint32_t t92 = 1U;

	t92 = ((x381-(x382<x383))%x384);

	if (t92 != 40U) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x385 = 1U;
	int16_t x386 = INT16_MIN;
	volatile int32_t x387 = INT32_MIN;
	int32_t t93 = 111;

	t93 = ((x385-(x386<x387))%x388);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x389 = 122U;
	volatile int64_t x390 = -1LL;
	int64_t x391 = -1LL;
	static int64_t x392 = INT64_MAX;
	int64_t t94 = -794919749897401LL;

	t94 = ((x389-(x390<x391))%x392);

	if (t94 != 122LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x393 = -1;
	volatile int64_t x394 = INT64_MIN;
	int16_t x395 = -1;
	static int16_t x396 = -1;
	int32_t t95 = 2103;

	t95 = ((x393-(x394<x395))%x396);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x397 = 1559682246LL;
	uint32_t x398 = 671013U;
	int16_t x399 = INT16_MAX;
	int64_t x400 = INT64_MIN;
	int64_t t96 = 258122775541LL;

	t96 = ((x397-(x398<x399))%x400);

	if (t96 != 1559682246LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x403 = 170;
	int32_t x404 = INT32_MIN;
	volatile int32_t t97 = 396458118;

	t97 = ((x401-(x402<x403))%x404);

	if (t97 != -2) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x405 = -1LL;
	uint8_t x407 = UINT8_MAX;
	uint64_t x408 = 73590990023LLU;
	uint64_t t98 = 10LLU;

	t98 = ((x405-(x406<x407))%x408);

	if (t98 != 54757188329LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x409 = UINT64_MAX;
	int16_t x410 = INT16_MIN;
	int8_t x411 = -1;
	volatile uint64_t t99 = 30726LLU;

	t99 = ((x409-(x410<x411))%x412);

	if (t99 != 9223372036854775806LLU) { NG(); } else { ; }
	
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

