#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x8 = UINT8_MAX;
static volatile int32_t x13 = -1;
uint64_t x17 = UINT64_MAX;
volatile int8_t x19 = -1;
uint16_t x20 = 2U;
volatile int64_t x21 = INT64_MIN;
int64_t x22 = INT64_MIN;
int64_t x32 = 34615440383608025LL;
uint16_t x35 = UINT16_MAX;
int64_t x46 = -1LL;
int32_t x47 = INT32_MIN;
volatile uint8_t x51 = 23U;
uint64_t x66 = 8497808172908LLU;
uint32_t x71 = 6379884U;
int16_t x85 = INT16_MIN;
uint64_t x86 = UINT64_MAX;
volatile int32_t x91 = INT32_MAX;
volatile int16_t x98 = -1;
uint64_t x100 = 10031LLU;
int8_t x111 = INT8_MIN;
uint16_t x129 = 3U;
static volatile int16_t x140 = INT16_MIN;
static volatile uint8_t x141 = 23U;
volatile uint8_t x145 = 81U;
volatile int16_t x147 = 48;
uint16_t x153 = UINT16_MAX;
static int32_t x156 = 2;
uint32_t t35 = 2698095U;
int16_t x170 = -63;
uint16_t x175 = UINT16_MAX;
static uint32_t x177 = 12U;
int8_t x180 = INT8_MAX;
uint64_t x186 = 1236LLU;
volatile uint32_t t41 = 3148046U;
uint64_t x203 = UINT64_MAX;
int16_t x207 = -1;
volatile int32_t t43 = -35592785;
uint64_t x209 = 22LLU;
volatile int32_t t44 = 0;
int8_t x214 = INT8_MIN;
volatile uint64_t x225 = 37178151739LLU;
int16_t x226 = 1733;
int32_t x230 = 48387722;
static uint64_t x231 = 10830LLU;
volatile uint8_t x232 = 84U;
int8_t x234 = -1;
volatile uint8_t x236 = 7U;
static int32_t x238 = 1;
int32_t x261 = INT32_MIN;
int32_t x271 = -1;
volatile uint16_t x275 = 62U;
volatile uint64_t x283 = 3947372095856538065LLU;
int16_t x291 = INT16_MIN;
int8_t x294 = -6;
volatile int32_t x295 = -875215318;
uint16_t x300 = 444U;
volatile int32_t t64 = -64;
volatile int64_t x302 = INT64_MIN;
int32_t x304 = -136630090;
int64_t x305 = INT64_MIN;
int64_t x306 = INT64_MIN;
int32_t t66 = -52892;
volatile int32_t t67 = -121385;
int64_t x318 = INT64_MIN;
int64_t x322 = 66137844759LL;
volatile int32_t x327 = INT32_MIN;
uint64_t x328 = 369LLU;
uint64_t t70 = 44276829658155LLU;
int16_t x333 = 2061;
static int32_t t72 = -1;
int32_t x342 = INT32_MIN;
int8_t x356 = -1;
uint64_t x357 = UINT64_MAX;
volatile int8_t x360 = INT8_MIN;
volatile int32_t t78 = -365263;
int8_t x382 = 38;
volatile int16_t x383 = INT16_MIN;
volatile int8_t x386 = 62;
int32_t x391 = INT32_MIN;
static volatile int32_t t84 = 125;
int32_t x394 = INT32_MAX;
int16_t x395 = INT16_MIN;
int32_t t85 = -99;
uint64_t x401 = UINT64_MAX;
uint8_t x403 = 0U;
volatile uint32_t t87 = 956258U;
int8_t x412 = INT8_MIN;
volatile uint64_t x413 = 16LLU;
uint64_t x416 = 108461035634554768LLU;
static int32_t t91 = -619167;
uint32_t x426 = UINT32_MAX;
static int16_t x432 = 431;
static volatile int32_t t94 = -111099960;
int8_t x433 = -2;
volatile uint64_t t97 = 7LLU;
uint32_t t99 = 14436U;


void f0(void) {
	uint16_t x5 = UINT16_MAX;
	static int16_t x6 = 22;
	uint8_t x7 = UINT8_MAX;
	int32_t t0 = 61938;

	t0 = ((x5<=(x6&x7))-x8);

	if (t0 != -255) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = 3;
	static int32_t x10 = -13958;
	uint8_t x11 = 4U;
	uint64_t x12 = 609488648429549239LLU;
	volatile uint64_t t1 = 33285529969664610LLU;

	t1 = ((x9<=(x10&x11))-x12);

	if (t1 != 17837255425280002377LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x14 = 9658U;
	uint64_t x15 = 48770919LLU;
	int32_t x16 = -3635849;
	volatile int32_t t2 = 23948;

	t2 = ((x13<=(x14&x15))-x16);

	if (t2 != 3635849) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x18 = -142618218LL;
	int32_t t3 = 1481;

	t3 = ((x17<=(x18&x19))-x20);

	if (t3 != -2) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x23 = -7;
	int64_t x24 = INT64_MAX;
	volatile int64_t t4 = 51701232LL;

	t4 = ((x21<=(x22&x23))-x24);

	if (t4 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int32_t x25 = INT32_MAX;
	static int64_t x26 = INT64_MAX;
	int64_t x27 = INT64_MIN;
	volatile int16_t x28 = INT16_MIN;
	int32_t t5 = 214650;

	t5 = ((x25<=(x26&x27))-x28);

	if (t5 != 32768) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = 3302915;
	volatile int16_t x30 = INT16_MIN;
	static int64_t x31 = 142098390LL;
	int64_t t6 = -2689004711LL;

	t6 = ((x29<=(x30&x31))-x32);

	if (t6 != -34615440383608024LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x33 = INT16_MIN;
	volatile int16_t x34 = -1;
	int32_t x36 = -1;
	volatile int32_t t7 = -338100;

	t7 = ((x33<=(x34&x35))-x36);

	if (t7 != 2) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int32_t x37 = -1;
	int8_t x38 = INT8_MAX;
	int8_t x39 = INT8_MIN;
	volatile int16_t x40 = -5186;
	int32_t t8 = -3237534;

	t8 = ((x37<=(x38&x39))-x40);

	if (t8 != 5187) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x41 = -1;
	static int64_t x42 = 9217385543022466LL;
	static uint32_t x43 = 31537U;
	int16_t x44 = 6;
	static int32_t t9 = 272352201;

	t9 = ((x41<=(x42&x43))-x44);

	if (t9 != -5) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x45 = INT32_MIN;
	static int8_t x48 = -1;
	volatile int32_t t10 = 7;

	t10 = ((x45<=(x46&x47))-x48);

	if (t10 != 2) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x49 = INT32_MIN;
	int32_t x50 = -18;
	static volatile uint64_t x52 = 13926112208LLU;
	volatile uint64_t t11 = 1995556212712LLU;

	t11 = ((x49<=(x50&x51))-x52);

	if (t11 != 18446744059783439409LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x57 = 339U;
	int8_t x58 = 0;
	static uint64_t x59 = 32225358404LLU;
	int64_t x60 = INT64_MAX;
	volatile int64_t t12 = -338338755995147678LL;

	t12 = ((x57<=(x58&x59))-x60);

	if (t12 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = -1;
	int64_t x62 = -2LL;
	int16_t x63 = INT16_MAX;
	volatile uint64_t x64 = 87LLU;
	uint64_t t13 = 4551021LLU;

	t13 = ((x61<=(x62&x63))-x64);

	if (t13 != 18446744073709551530LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x65 = INT32_MIN;
	int16_t x67 = 127;
	volatile int16_t x68 = INT16_MIN;
	int32_t t14 = -2847;

	t14 = ((x65<=(x66&x67))-x68);

	if (t14 != 32768) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x69 = 1976994258896LLU;
	int8_t x70 = 30;
	volatile int16_t x72 = 840;
	volatile int32_t t15 = 8;

	t15 = ((x69<=(x70&x71))-x72);

	if (t15 != -840) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x73 = UINT32_MAX;
	uint32_t x74 = UINT32_MAX;
	int8_t x75 = INT8_MAX;
	int8_t x76 = INT8_MIN;
	int32_t t16 = 56;

	t16 = ((x73<=(x74&x75))-x76);

	if (t16 != 128) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int16_t x77 = INT16_MIN;
	static int8_t x78 = INT8_MAX;
	uint64_t x79 = UINT64_MAX;
	volatile int32_t x80 = -4023608;
	int32_t t17 = 508;

	t17 = ((x77<=(x78&x79))-x80);

	if (t17 != 4023608) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x81 = -1;
	uint64_t x82 = UINT64_MAX;
	int8_t x83 = INT8_MIN;
	static uint16_t x84 = 5U;
	static volatile int32_t t18 = -31883;

	t18 = ((x81<=(x82&x83))-x84);

	if (t18 != -5) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x87 = 62U;
	volatile int32_t x88 = -1;
	int32_t t19 = -3398;

	t19 = ((x85<=(x86&x87))-x88);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x89 = 15;
	static int8_t x90 = INT8_MIN;
	uint8_t x92 = 26U;
	static int32_t t20 = -52390004;

	t20 = ((x89<=(x90&x91))-x92);

	if (t20 != -25) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x97 = 3U;
	int8_t x99 = INT8_MIN;
	uint64_t t21 = 4252755621254205309LLU;

	t21 = ((x97<=(x98&x99))-x100);

	if (t21 != 18446744073709541585LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x105 = INT8_MAX;
	int16_t x106 = 1463;
	static int64_t x107 = -515406827346478625LL;
	int8_t x108 = INT8_MAX;
	volatile int32_t t22 = 69132;

	t22 = ((x105<=(x106&x107))-x108);

	if (t22 != -126) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint32_t x109 = 0U;
	int64_t x110 = -53056LL;
	static volatile int64_t x112 = 6688688LL;
	volatile int64_t t23 = 134531914529LL;

	t23 = ((x109<=(x110&x111))-x112);

	if (t23 != -6688688LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x113 = 8139518LLU;
	int64_t x114 = INT64_MAX;
	int16_t x115 = INT16_MAX;
	int8_t x116 = INT8_MAX;
	static volatile int32_t t24 = -16906;

	t24 = ((x113<=(x114&x115))-x116);

	if (t24 != -127) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int16_t x117 = -15736;
	static uint8_t x118 = UINT8_MAX;
	volatile int8_t x119 = 0;
	volatile uint64_t x120 = 56LLU;
	volatile uint64_t t25 = 7453LLU;

	t25 = ((x117<=(x118&x119))-x120);

	if (t25 != 18446744073709551561LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x121 = INT8_MIN;
	int64_t x122 = INT64_MIN;
	volatile int16_t x123 = -1;
	static int16_t x124 = -55;
	static int32_t t26 = -20111157;

	t26 = ((x121<=(x122&x123))-x124);

	if (t26 != 55) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x130 = INT32_MAX;
	volatile int8_t x131 = 1;
	int32_t x132 = -1;
	int32_t t27 = -14967851;

	t27 = ((x129<=(x130&x131))-x132);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x133 = 10648115LLU;
	int32_t x134 = -1;
	volatile int16_t x135 = -3730;
	int8_t x136 = 1;
	volatile int32_t t28 = 89;

	t28 = ((x133<=(x134&x135))-x136);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x137 = -1;
	uint32_t x138 = UINT32_MAX;
	static volatile uint32_t x139 = 29865109U;
	volatile int32_t t29 = -60553;

	t29 = ((x137<=(x138&x139))-x140);

	if (t29 != 32768) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x142 = INT8_MIN;
	int32_t x143 = INT32_MIN;
	uint32_t x144 = 922423536U;
	volatile uint32_t t30 = 107026699U;

	t30 = ((x141<=(x142&x143))-x144);

	if (t30 != 3372543760U) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x146 = 7U;
	volatile int16_t x148 = -1;
	int32_t t31 = -4033006;

	t31 = ((x145<=(x146&x147))-x148);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x149 = 664U;
	uint16_t x150 = 21U;
	int16_t x151 = INT16_MIN;
	uint32_t x152 = 150U;
	uint32_t t32 = 10015311U;

	t32 = ((x149<=(x150&x151))-x152);

	if (t32 != 4294967146U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x154 = -4601631748477386753LL;
	int8_t x155 = INT8_MAX;
	volatile int32_t t33 = 90;

	t33 = ((x153<=(x154&x155))-x156);

	if (t33 != -2) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x161 = 2735;
	volatile int8_t x162 = INT8_MIN;
	volatile int64_t x163 = 10137927816451202LL;
	static int8_t x164 = INT8_MIN;
	volatile int32_t t34 = -337385660;

	t34 = ((x161<=(x162&x163))-x164);

	if (t34 != 129) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x165 = 2;
	volatile uint32_t x166 = 4U;
	uint32_t x167 = 341834U;
	uint32_t x168 = UINT32_MAX;

	t35 = ((x165<=(x166&x167))-x168);

	if (t35 != 1U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x169 = 10;
	uint32_t x171 = 1762064788U;
	volatile int64_t x172 = 161486664373LL;
	int64_t t36 = 761629223895145347LL;

	t36 = ((x169<=(x170&x171))-x172);

	if (t36 != -161486664372LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint64_t x173 = 5460994130838191LLU;
	volatile uint16_t x174 = 0U;
	static uint32_t x176 = 3139783U;
	uint32_t t37 = 412799233U;

	t37 = ((x173<=(x174&x175))-x176);

	if (t37 != 4291827513U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x178 = INT64_MAX;
	static int64_t x179 = INT64_MIN;
	int32_t t38 = 6229103;

	t38 = ((x177<=(x178&x179))-x180);

	if (t38 != -127) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x185 = 297888;
	static uint64_t x187 = UINT64_MAX;
	uint64_t x188 = UINT64_MAX;
	uint64_t t39 = 0LLU;

	t39 = ((x185<=(x186&x187))-x188);

	if (t39 != 1LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x189 = -1;
	uint64_t x190 = 7422651660797781236LLU;
	int8_t x191 = -1;
	int16_t x192 = INT16_MIN;
	int32_t t40 = 9559;

	t40 = ((x189<=(x190&x191))-x192);

	if (t40 != 32768) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x193 = 1652196994LL;
	static int32_t x194 = INT32_MIN;
	int16_t x195 = -2;
	uint32_t x196 = 5616812U;

	t41 = ((x193<=(x194&x195))-x196);

	if (t41 != 4289350484U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x201 = -516821568325410LL;
	int8_t x202 = -1;
	uint16_t x204 = 1U;
	static volatile int32_t t42 = 2;

	t42 = ((x201<=(x202&x203))-x204);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x205 = UINT16_MAX;
	uint8_t x206 = 1U;
	int16_t x208 = -1;

	t43 = ((x205<=(x206&x207))-x208);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x210 = UINT16_MAX;
	int64_t x211 = INT64_MIN;
	static uint8_t x212 = UINT8_MAX;

	t44 = ((x209<=(x210&x211))-x212);

	if (t44 != -255) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x213 = -5244312LL;
	static uint16_t x215 = 31U;
	uint8_t x216 = 3U;
	int32_t t45 = -309993;

	t45 = ((x213<=(x214&x215))-x216);

	if (t45 != -2) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x217 = INT16_MAX;
	uint32_t x218 = UINT32_MAX;
	uint64_t x219 = 57LLU;
	uint64_t x220 = UINT64_MAX;
	uint64_t t46 = 36LLU;

	t46 = ((x217<=(x218&x219))-x220);

	if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x221 = INT8_MIN;
	uint64_t x222 = 734828341844661660LLU;
	int16_t x223 = INT16_MIN;
	volatile uint8_t x224 = 95U;
	static volatile int32_t t47 = 453;

	t47 = ((x221<=(x222&x223))-x224);

	if (t47 != -95) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x227 = 1646251015LL;
	static int64_t x228 = 0LL;
	volatile int64_t t48 = -1262702262250224374LL;

	t48 = ((x225<=(x226&x227))-x228);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x229 = 1;
	int32_t t49 = -40;

	t49 = ((x229<=(x230&x231))-x232);

	if (t49 != -83) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x233 = -1;
	uint16_t x235 = 91U;
	int32_t t50 = -29;

	t50 = ((x233<=(x234&x235))-x236);

	if (t50 != -6) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x237 = 5585U;
	uint8_t x239 = 62U;
	int64_t x240 = -1LL;
	volatile int64_t t51 = -5LL;

	t51 = ((x237<=(x238&x239))-x240);

	if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x245 = UINT16_MAX;
	static uint16_t x246 = 56U;
	static int16_t x247 = INT16_MAX;
	static uint16_t x248 = UINT16_MAX;
	static volatile int32_t t52 = -368601;

	t52 = ((x245<=(x246&x247))-x248);

	if (t52 != -65535) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x253 = UINT64_MAX;
	int16_t x254 = -1;
	int64_t x255 = INT64_MAX;
	static int32_t x256 = -1;
	int32_t t53 = -16524;

	t53 = ((x253<=(x254&x255))-x256);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x257 = -1;
	int32_t x258 = INT32_MIN;
	int16_t x259 = INT16_MIN;
	int32_t x260 = -169;
	static int32_t t54 = 469;

	t54 = ((x257<=(x258&x259))-x260);

	if (t54 != 169) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x262 = -1;
	int64_t x263 = INT64_MIN;
	static int8_t x264 = -1;
	volatile int32_t t55 = -1903;

	t55 = ((x261<=(x262&x263))-x264);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x265 = 8U;
	volatile int16_t x266 = 1;
	volatile int8_t x267 = INT8_MAX;
	static int8_t x268 = -30;
	volatile int32_t t56 = 982207;

	t56 = ((x265<=(x266&x267))-x268);

	if (t56 != 30) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x269 = INT8_MIN;
	uint8_t x270 = UINT8_MAX;
	static int8_t x272 = -2;
	volatile int32_t t57 = 0;

	t57 = ((x269<=(x270&x271))-x272);

	if (t57 != 3) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x273 = INT16_MIN;
	static int32_t x274 = INT32_MAX;
	int64_t x276 = INT64_MAX;
	int64_t t58 = -343LL;

	t58 = ((x273<=(x274&x275))-x276);

	if (t58 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x277 = -1LL;
	static volatile uint64_t x278 = UINT64_MAX;
	int32_t x279 = -19;
	int32_t x280 = 37;
	static int32_t t59 = 177229;

	t59 = ((x277<=(x278&x279))-x280);

	if (t59 != -37) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x281 = INT32_MAX;
	volatile int16_t x282 = -1;
	uint32_t x284 = 1349795U;
	uint32_t t60 = 1837177U;

	t60 = ((x281<=(x282&x283))-x284);

	if (t60 != 4293617502U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x285 = -1;
	static int64_t x286 = INT64_MAX;
	volatile int32_t x287 = INT32_MIN;
	static int64_t x288 = INT64_MAX;
	volatile int64_t t61 = 1113928574LL;

	t61 = ((x285<=(x286&x287))-x288);

	if (t61 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x289 = 1528U;
	volatile uint64_t x290 = UINT64_MAX;
	int16_t x292 = -1;
	volatile int32_t t62 = 317;

	t62 = ((x289<=(x290&x291))-x292);

	if (t62 != 2) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x293 = 12;
	int64_t x296 = INT64_MAX;
	int64_t t63 = 1025175559920LL;

	t63 = ((x293<=(x294&x295))-x296);

	if (t63 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x297 = -22;
	int32_t x298 = -96906;
	int16_t x299 = 44;

	t64 = ((x297<=(x298&x299))-x300);

	if (t64 != -443) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x301 = INT32_MIN;
	int16_t x303 = -1;
	volatile int32_t t65 = -3625711;

	t65 = ((x301<=(x302&x303))-x304);

	if (t65 != 136630090) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x307 = -1;
	uint8_t x308 = UINT8_MAX;

	t66 = ((x305<=(x306&x307))-x308);

	if (t66 != -254) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x313 = INT8_MIN;
	static uint8_t x314 = 15U;
	int16_t x315 = 788;
	volatile int16_t x316 = INT16_MAX;

	t67 = ((x313<=(x314&x315))-x316);

	if (t67 != -32766) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x317 = INT64_MAX;
	int32_t x319 = -462596;
	volatile int64_t x320 = -1LL;
	volatile int64_t t68 = -698795120LL;

	t68 = ((x317<=(x318&x319))-x320);

	if (t68 != 1LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x321 = INT16_MAX;
	volatile uint8_t x323 = UINT8_MAX;
	static int8_t x324 = 51;
	volatile int32_t t69 = -416704841;

	t69 = ((x321<=(x322&x323))-x324);

	if (t69 != -51) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x325 = -1;
	static int64_t x326 = -34766200195843LL;

	t70 = ((x325<=(x326&x327))-x328);

	if (t70 != 18446744073709551247LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x329 = -1;
	volatile uint32_t x330 = UINT32_MAX;
	int32_t x331 = -2370538;
	int64_t x332 = 857347LL;
	int64_t t71 = -60993705747270LL;

	t71 = ((x329<=(x330&x331))-x332);

	if (t71 != -857347LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x334 = 1U;
	static uint64_t x335 = 216340861778LLU;
	int8_t x336 = INT8_MIN;

	t72 = ((x333<=(x334&x335))-x336);

	if (t72 != 128) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x337 = INT8_MIN;
	int8_t x338 = -35;
	uint64_t x339 = 240248893239690LLU;
	int8_t x340 = INT8_MAX;
	volatile int32_t t73 = 534;

	t73 = ((x337<=(x338&x339))-x340);

	if (t73 != -127) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x341 = -1LL;
	volatile int32_t x343 = -16;
	int8_t x344 = INT8_MAX;
	volatile int32_t t74 = 171342469;

	t74 = ((x341<=(x342&x343))-x344);

	if (t74 != -127) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x349 = UINT32_MAX;
	uint8_t x350 = 8U;
	int8_t x351 = INT8_MAX;
	volatile int16_t x352 = -1;
	static int32_t t75 = 31966;

	t75 = ((x349<=(x350&x351))-x352);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x353 = UINT16_MAX;
	uint32_t x354 = 2426U;
	volatile int64_t x355 = -1LL;
	int32_t t76 = -3307;

	t76 = ((x353<=(x354&x355))-x356);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x358 = UINT16_MAX;
	int64_t x359 = INT64_MIN;
	int32_t t77 = 3112746;

	t77 = ((x357<=(x358&x359))-x360);

	if (t77 != 128) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x361 = 0U;
	static uint8_t x362 = 13U;
	volatile uint64_t x363 = 25114045535251859LLU;
	static volatile int8_t x364 = 3;

	t78 = ((x361<=(x362&x363))-x364);

	if (t78 != -2) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x365 = INT8_MIN;
	uint64_t x366 = 10351096300322LLU;
	uint16_t x367 = 67U;
	int64_t x368 = 26847652291781641LL;
	int64_t t79 = -181056LL;

	t79 = ((x365<=(x366&x367))-x368);

	if (t79 != -26847652291781641LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x373 = INT64_MIN;
	volatile uint16_t x374 = UINT16_MAX;
	volatile int16_t x375 = -31;
	int16_t x376 = -1;
	volatile int32_t t80 = 1;

	t80 = ((x373<=(x374&x375))-x376);

	if (t80 != 2) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x377 = INT16_MIN;
	uint8_t x378 = 0U;
	int16_t x379 = INT16_MIN;
	static uint64_t x380 = UINT64_MAX;
	volatile uint64_t t81 = 179063979924LLU;

	t81 = ((x377<=(x378&x379))-x380);

	if (t81 != 2LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x381 = INT16_MIN;
	int8_t x384 = INT8_MIN;
	volatile int32_t t82 = 146;

	t82 = ((x381<=(x382&x383))-x384);

	if (t82 != 129) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x385 = UINT64_MAX;
	volatile int64_t x387 = -1LL;
	int32_t x388 = -1;
	int32_t t83 = -25916;

	t83 = ((x385<=(x386&x387))-x388);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x389 = -1;
	int32_t x390 = INT32_MIN;
	int16_t x392 = -42;

	t84 = ((x389<=(x390&x391))-x392);

	if (t84 != 42) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x393 = 56;
	int32_t x396 = 14;

	t85 = ((x393<=(x394&x395))-x396);

	if (t85 != -13) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x397 = INT32_MIN;
	static volatile int32_t x398 = INT32_MIN;
	volatile int32_t x399 = INT32_MIN;
	uint8_t x400 = 41U;
	volatile int32_t t86 = -1003;

	t86 = ((x397<=(x398&x399))-x400);

	if (t86 != -40) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x402 = 11U;
	static volatile uint32_t x404 = 8318U;

	t87 = ((x401<=(x402&x403))-x404);

	if (t87 != 4294958978U) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x405 = INT16_MIN;
	static uint16_t x406 = 28U;
	int16_t x407 = 0;
	static int8_t x408 = 1;
	int32_t t88 = 1594;

	t88 = ((x405<=(x406&x407))-x408);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x409 = INT32_MIN;
	uint64_t x410 = 10860556389016001LLU;
	static int64_t x411 = INT64_MIN;
	int32_t t89 = -25363272;

	t89 = ((x409<=(x410&x411))-x412);

	if (t89 != 128) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x414 = INT16_MIN;
	uint16_t x415 = 4U;
	static volatile uint64_t t90 = 109LLU;

	t90 = ((x413<=(x414&x415))-x416);

	if (t90 != 18338283038074996848LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x417 = INT8_MAX;
	int16_t x418 = INT16_MIN;
	int64_t x419 = -1LL;
	int8_t x420 = -9;

	t91 = ((x417<=(x418&x419))-x420);

	if (t91 != 9) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x421 = -1;
	int32_t x422 = -4683116;
	int64_t x423 = INT64_MIN;
	volatile int32_t x424 = INT32_MAX;
	volatile int32_t t92 = -939;

	t92 = ((x421<=(x422&x423))-x424);

	if (t92 != -2147483647) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x425 = 60;
	int32_t x427 = 554932;
	int32_t x428 = -223114;
	volatile int32_t t93 = 114;

	t93 = ((x425<=(x426&x427))-x428);

	if (t93 != 223115) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x429 = 0U;
	static uint16_t x430 = UINT16_MAX;
	int8_t x431 = INT8_MIN;

	t94 = ((x429<=(x430&x431))-x432);

	if (t94 != -430) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x434 = INT32_MIN;
	uint64_t x435 = UINT64_MAX;
	int32_t x436 = -1;
	int32_t t95 = 49;

	t95 = ((x433<=(x434&x435))-x436);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x437 = -2738;
	static uint32_t x438 = UINT32_MAX;
	static volatile uint64_t x439 = 112149981LLU;
	uint16_t x440 = UINT16_MAX;
	int32_t t96 = 33688528;

	t96 = ((x437<=(x438&x439))-x440);

	if (t96 != -65535) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x441 = -1;
	volatile int16_t x442 = INT16_MAX;
	int32_t x443 = INT32_MIN;
	static volatile uint64_t x444 = 506403027340359LLU;

	t97 = ((x441<=(x442&x443))-x444);

	if (t97 != 18446237670682211258LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x445 = -1LL;
	volatile int32_t x446 = -1;
	int32_t x447 = INT32_MAX;
	uint16_t x448 = 1U;
	volatile int32_t t98 = -35108;

	t98 = ((x445<=(x446&x447))-x448);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x449 = -1;
	uint64_t x450 = 31449015767757597LLU;
	volatile int64_t x451 = 104609920LL;
	volatile uint32_t x452 = 214U;

	t99 = ((x449<=(x450&x451))-x452);

	if (t99 != 4294967082U) { NG(); } else { ; }
	
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

