#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x5 = 35;
int16_t x9 = -1;
volatile uint16_t x10 = 6U;
static int8_t x14 = 44;
volatile int32_t x15 = 147;
int16_t x17 = -1;
int16_t x19 = INT16_MIN;
int8_t x21 = 0;
uint16_t x25 = 11U;
int32_t x33 = -527130348;
volatile uint8_t x35 = 1U;
int8_t x37 = INT8_MIN;
uint64_t x45 = 261864329LLU;
int8_t x48 = INT8_MIN;
int16_t x51 = INT16_MAX;
uint64_t x52 = 3044LLU;
uint64_t t13 = 23349LLU;
static int16_t x63 = INT16_MIN;
int16_t x82 = 6;
int32_t x115 = INT32_MAX;
static int32_t x120 = 73990;
int8_t x124 = 0;
int64_t x126 = INT64_MAX;
static int16_t x134 = -7;
volatile int32_t t33 = -56;
static uint8_t x137 = 13U;
uint64_t x144 = 2429914947LLU;
static volatile uint16_t x151 = 13442U;
int8_t x153 = -1;
int16_t x154 = -154;
int32_t x159 = INT32_MAX;
volatile int16_t x160 = 0;
int32_t x161 = 6063807;
uint32_t x162 = UINT32_MAX;
static uint64_t x166 = 1656834913LLU;
int64_t x168 = 351329563623LL;
static int16_t x172 = INT16_MAX;
volatile int16_t x173 = -95;
int32_t x175 = INT32_MIN;
uint32_t x187 = 99878356U;
int32_t t46 = 2;
int8_t x194 = INT8_MIN;
uint16_t x196 = 1115U;
static uint64_t x199 = 92747761427984LLU;
volatile int64_t x200 = -1079218184860730548LL;
static volatile uint32_t t50 = 22U;
volatile int16_t x208 = -96;
uint64_t x215 = UINT64_MAX;
static int64_t x221 = 6898577LL;
int64_t x223 = INT64_MAX;
int16_t x224 = INT16_MIN;
int16_t x226 = INT16_MIN;
static int16_t x227 = INT16_MIN;
int8_t x231 = -1;
uint32_t x233 = UINT32_MAX;
uint64_t x235 = 10379091106LLU;
volatile int8_t x239 = -1;
static volatile uint64_t x242 = 7056176220388LLU;
int16_t x245 = -51;
int16_t x246 = INT16_MAX;
uint64_t x247 = UINT64_MAX;
static int8_t x252 = 8;
volatile uint64_t t66 = UINT64_MAX;
int64_t x269 = -658LL;
int64_t x276 = 29895417257LL;
int16_t x288 = INT16_MIN;
int16_t x292 = -1198;
static uint8_t x294 = UINT8_MAX;
int32_t x295 = -1;
int16_t x297 = INT16_MIN;
int32_t t74 = -988298;
static int32_t x303 = 10196558;
uint32_t x306 = UINT32_MAX;
volatile int8_t x307 = -1;
int32_t t77 = 153133274;
volatile uint64_t x327 = UINT64_MAX;
static uint32_t x330 = 39277211U;
int16_t x336 = -71;
volatile int8_t x340 = INT8_MIN;
static int8_t x346 = 12;
int64_t x347 = INT64_MAX;
static int8_t x348 = INT8_MAX;
volatile int32_t t86 = 3;
volatile uint32_t t87 = 14384388U;
int64_t x362 = 4222266032452702LL;
volatile int64_t x367 = INT64_MIN;
int32_t t91 = -163372;
static int64_t x369 = INT64_MIN;
uint32_t x370 = 10906U;
int64_t t92 = -6488276573985LL;
static uint16_t x376 = 6U;
int8_t x379 = INT8_MIN;
uint64_t x384 = 4680662037535LLU;
volatile uint64_t t95 = 447905057993LLU;
int64_t t97 = -1876174170140LL;
uint16_t x398 = 483U;
int64_t x400 = INT64_MAX;
volatile uint64_t t99 = 38667276998LLU;


void f0(void) {
	static volatile int64_t x1 = 1LL;
	int8_t x2 = 8;
	static volatile int32_t x3 = INT32_MAX;
	int64_t x4 = INT64_MAX;
	volatile int64_t t0 = -383803194715409264LL;

	t0 = ((x1*(x2<=x3))^x4);

	if (t0 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x6 = INT16_MIN;
	int32_t x7 = INT32_MAX;
	uint16_t x8 = 0U;
	volatile int32_t t1 = -2;

	t1 = ((x5*(x6<=x7))^x8);

	if (t1 != 35) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x11 = INT8_MAX;
	uint16_t x12 = UINT16_MAX;
	int32_t t2 = -126781;

	t2 = ((x9*(x10<=x11))^x12);

	if (t2 != -65536) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	static uint16_t x16 = 7933U;
	volatile int64_t t3 = 971207170571176389LL;

	t3 = ((x13*(x14<=x15))^x16);

	if (t3 != -9223372036854767875LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x18 = INT8_MAX;
	static uint32_t x20 = 2967U;
	volatile uint32_t t4 = 0U;

	t4 = ((x17*(x18<=x19))^x20);

	if (t4 != 2967U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x22 = 9086374U;
	int8_t x23 = -1;
	uint64_t x24 = UINT64_MAX;
	uint64_t t5 = UINT64_MAX;

	t5 = ((x21*(x22<=x23))^x24);

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x26 = 3;
	int32_t x27 = -1;
	int16_t x28 = INT16_MIN;
	volatile int32_t t6 = -488689;

	t6 = ((x25*(x26<=x27))^x28);

	if (t6 != -32768) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	volatile int16_t x30 = INT16_MIN;
	int64_t x31 = -3925235079475141619LL;
	uint16_t x32 = 988U;
	int32_t t7 = 107714378;

	t7 = ((x29*(x30<=x31))^x32);

	if (t7 != 988) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x34 = INT8_MIN;
	int64_t x36 = INT64_MAX;
	int64_t t8 = -1569887LL;

	t8 = ((x33*(x34<=x35))^x36);

	if (t8 != -9223372036327645461LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x38 = INT8_MAX;
	int32_t x39 = 87889;
	static int8_t x40 = 22;
	static int32_t t9 = 1;

	t9 = ((x37*(x38<=x39))^x40);

	if (t9 != -106) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	uint8_t x42 = 52U;
	uint8_t x43 = 6U;
	uint8_t x44 = 1U;
	static int32_t t10 = -12202;

	t10 = ((x41*(x42<=x43))^x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x46 = INT64_MAX;
	static int32_t x47 = INT32_MAX;
	uint64_t t11 = 2606729LLU;

	t11 = ((x45*(x46<=x47))^x48);

	if (t11 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -3;
	int8_t x50 = 0;
	volatile uint64_t t12 = 29516673741332255LLU;

	t12 = ((x49*(x50<=x51))^x52);

	if (t12 != 18446744073709548569LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -1445500LL;
	int8_t x54 = -61;
	int64_t x55 = INT64_MIN;
	uint64_t x56 = 358635997814LLU;

	t13 = ((x53*(x54<=x55))^x56);

	if (t13 != 358635997814LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int64_t x57 = -142533801645LL;
	static int32_t x58 = -1;
	static int16_t x59 = INT16_MAX;
	uint32_t x60 = 1U;
	int64_t t14 = -8335576215611832LL;

	t14 = ((x57*(x58<=x59))^x60);

	if (t14 != -142533801646LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 57U;
	static int16_t x62 = INT16_MIN;
	uint16_t x64 = 1132U;
	int32_t t15 = 65195375;

	t15 = ((x61*(x62<=x63))^x64);

	if (t15 != 1109) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = -1;
	volatile uint8_t x66 = 19U;
	int32_t x67 = -24299;
	volatile uint64_t x68 = 12589292116195260LLU;
	static uint64_t t16 = 2905091LLU;

	t16 = ((x65*(x66<=x67))^x68);

	if (t16 != 12589292116195260LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	int32_t x70 = INT32_MIN;
	uint8_t x71 = 80U;
	static int64_t x72 = INT64_MIN;
	static volatile int64_t t17 = -2LL;

	t17 = ((x69*(x70<=x71))^x72);

	if (t17 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = -27;
	int16_t x74 = INT16_MAX;
	int16_t x75 = INT16_MAX;
	int32_t x76 = -1187;
	volatile int32_t t18 = 16338828;

	t18 = ((x73*(x74<=x75))^x76);

	if (t18 != 1208) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	uint32_t x78 = 158U;
	static uint32_t x79 = 476322737U;
	volatile int64_t x80 = -1LL;
	int64_t t19 = INT64_MAX;

	t19 = ((x77*(x78<=x79))^x80);

	if (t19 != INT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = 0;
	volatile int8_t x83 = 1;
	static uint64_t x84 = UINT64_MAX;
	uint64_t t20 = UINT64_MAX;

	t20 = ((x81*(x82<=x83))^x84);

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x85 = INT16_MIN;
	int32_t x86 = INT32_MAX;
	int16_t x87 = INT16_MIN;
	int32_t x88 = 28396;
	int32_t t21 = 26;

	t21 = ((x85*(x86<=x87))^x88);

	if (t21 != 28396) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = 2U;
	int64_t x90 = 7817957719LL;
	int16_t x91 = INT16_MIN;
	int32_t x92 = INT32_MAX;
	int32_t t22 = INT32_MAX;

	t22 = ((x89*(x90<=x91))^x92);

	if (t22 != INT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x93 = -1;
	int64_t x94 = INT64_MIN;
	static volatile int64_t x95 = 15740374231724107LL;
	volatile int64_t x96 = -1LL;
	volatile int64_t t23 = 128440597LL;

	t23 = ((x93*(x94<=x95))^x96);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MIN;
	uint64_t x98 = UINT64_MAX;
	volatile int64_t x99 = INT64_MAX;
	int64_t x100 = INT64_MIN;
	static volatile int64_t t24 = INT64_MIN;

	t24 = ((x97*(x98<=x99))^x100);

	if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint32_t x101 = 4U;
	int16_t x102 = INT16_MIN;
	uint64_t x103 = 145649940062LLU;
	volatile uint8_t x104 = 2U;
	volatile uint32_t t25 = 10531U;

	t25 = ((x101*(x102<=x103))^x104);

	if (t25 != 2U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = -5;
	int8_t x106 = INT8_MIN;
	static uint32_t x107 = 112U;
	uint32_t x108 = UINT32_MAX;
	static volatile uint32_t t26 = UINT32_MAX;

	t26 = ((x105*(x106<=x107))^x108);

	if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x109 = -1;
	int16_t x110 = INT16_MIN;
	volatile uint8_t x111 = 49U;
	volatile uint8_t x112 = 1U;
	volatile int32_t t27 = 515068995;

	t27 = ((x109*(x110<=x111))^x112);

	if (t27 != -2) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MAX;
	int64_t x114 = -1777LL;
	int32_t x116 = INT32_MIN;
	volatile int64_t t28 = -7455572314LL;

	t28 = ((x113*(x114<=x115))^x116);

	if (t28 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x117 = 1843643;
	volatile uint8_t x118 = 3U;
	static int8_t x119 = -1;
	volatile int32_t t29 = 365285248;

	t29 = ((x117*(x118<=x119))^x120);

	if (t29 != 73990) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x121 = INT32_MIN;
	static int16_t x122 = INT16_MIN;
	static uint16_t x123 = 7709U;
	volatile int32_t t30 = INT32_MIN;

	t30 = ((x121*(x122<=x123))^x124);

	if (t30 != INT32_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = 1;
	volatile uint8_t x127 = UINT8_MAX;
	uint64_t x128 = 8107860439195LLU;
	static uint64_t t31 = 190367863009734LLU;

	t31 = ((x125*(x126<=x127))^x128);

	if (t31 != 8107860439195LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = 1025U;
	int32_t x130 = INT32_MIN;
	volatile int32_t x131 = INT32_MIN;
	uint32_t x132 = 3U;
	uint32_t t32 = 1513047457U;

	t32 = ((x129*(x130<=x131))^x132);

	if (t32 != 1026U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = -1;
	int8_t x135 = INT8_MIN;
	int16_t x136 = INT16_MIN;

	t33 = ((x133*(x134<=x135))^x136);

	if (t33 != -32768) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x138 = -1;
	uint32_t x139 = 1U;
	static int32_t x140 = INT32_MIN;
	int32_t t34 = INT32_MIN;

	t34 = ((x137*(x138<=x139))^x140);

	if (t34 != INT32_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MIN;
	static int64_t x142 = INT64_MIN;
	int64_t x143 = -1LL;
	static uint64_t t35 = 15657LLU;

	t35 = ((x141*(x142<=x143))^x144);

	if (t35 != 9223372039284690755LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x145 = -28;
	uint64_t x146 = 682441841845412987LLU;
	int16_t x147 = 409;
	int8_t x148 = 18;
	static int32_t t36 = -403526;

	t36 = ((x145*(x146<=x147))^x148);

	if (t36 != 18) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MAX;
	static int32_t x150 = INT32_MAX;
	volatile uint32_t x152 = 129849U;
	volatile uint32_t t37 = 4015024U;

	t37 = ((x149*(x150<=x151))^x152);

	if (t37 != 129849U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x155 = INT8_MAX;
	uint32_t x156 = UINT32_MAX;
	volatile uint32_t t38 = 1U;

	t38 = ((x153*(x154<=x155))^x156);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x157 = INT32_MIN;
	volatile int16_t x158 = INT16_MIN;
	volatile int32_t t39 = INT32_MIN;

	t39 = ((x157*(x158<=x159))^x160);

	if (t39 != INT32_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x163 = -1LL;
	int64_t x164 = 2LL;
	volatile int64_t t40 = 7263514LL;

	t40 = ((x161*(x162<=x163))^x164);

	if (t40 != 2LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x165 = 389486852U;
	static int32_t x167 = INT32_MAX;
	static int64_t t41 = -2LL;

	t41 = ((x165*(x166<=x167))^x168);

	if (t41 != 351581809379LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = 152671U;
	static int32_t x170 = INT32_MIN;
	int16_t x171 = 13;
	uint32_t t42 = 173U;

	t42 = ((x169*(x170<=x171))^x172);

	if (t42 != 142240U) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x174 = INT8_MIN;
	int64_t x176 = INT64_MIN;
	int64_t t43 = INT64_MIN;

	t43 = ((x173*(x174<=x175))^x176);

	if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = 1165013839143612695LL;
	uint32_t x178 = 12U;
	volatile int16_t x179 = INT16_MAX;
	static int64_t x180 = 1LL;
	volatile int64_t t44 = 1LL;

	t44 = ((x177*(x178<=x179))^x180);

	if (t44 != 1165013839143612694LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = 41138LLU;
	int32_t x182 = INT32_MIN;
	int32_t x183 = -229;
	int64_t x184 = -15484198439590LL;
	static volatile uint64_t t45 = 158651187LLU;

	t45 = ((x181*(x182<=x183))^x184);

	if (t45 != 18446728589511136744LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int8_t x185 = INT8_MIN;
	int64_t x186 = -1LL;
	uint8_t x188 = 0U;

	t46 = ((x185*(x186<=x187))^x188);

	if (t46 != -128) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x189 = 61U;
	int16_t x190 = -1;
	int16_t x191 = INT16_MAX;
	int64_t x192 = -186LL;
	int64_t t47 = -132037700039848005LL;

	t47 = ((x189*(x190<=x191))^x192);

	if (t47 != -133LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = -1958859285946317777LL;
	static int8_t x195 = INT8_MIN;
	volatile int64_t t48 = -40580959LL;

	t48 = ((x193*(x194<=x195))^x196);

	if (t48 != -1958859285946318732LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = INT32_MAX;
	static int16_t x198 = INT16_MIN;
	volatile int64_t t49 = 1LL;

	t49 = ((x197*(x198<=x199))^x200);

	if (t49 != -1079218184860730548LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x201 = 16U;
	int8_t x202 = -1;
	int16_t x203 = INT16_MIN;
	int8_t x204 = -3;

	t50 = ((x201*(x202<=x203))^x204);

	if (t50 != 4294967293U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x205 = 2;
	int32_t x206 = INT32_MIN;
	int8_t x207 = 6;
	static volatile int32_t t51 = 283;

	t51 = ((x205*(x206<=x207))^x208);

	if (t51 != -94) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = 10705;
	int32_t x210 = -2787924;
	uint32_t x211 = 365120U;
	int64_t x212 = INT64_MAX;
	static int64_t t52 = INT64_MAX;

	t52 = ((x209*(x210<=x211))^x212);

	if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = -1;
	uint64_t x214 = UINT64_MAX;
	static int64_t x216 = INT64_MIN;
	volatile int64_t t53 = INT64_MAX;

	t53 = ((x213*(x214<=x215))^x216);

	if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = 52890U;
	int8_t x218 = INT8_MIN;
	volatile uint16_t x219 = UINT16_MAX;
	uint8_t x220 = 78U;
	static uint32_t t54 = 16217052U;

	t54 = ((x217*(x218<=x219))^x220);

	if (t54 != 52948U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x222 = 148U;
	int64_t t55 = 484351002640882231LL;

	t55 = ((x221*(x222<=x223))^x224);

	if (t55 != -6896751LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MAX;
	int64_t x228 = INT64_MIN;
	int64_t t56 = 16242922938LL;

	t56 = ((x225*(x226<=x227))^x228);

	if (t56 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x229 = -51057391640501996LL;
	int32_t x230 = 6816788;
	int32_t x232 = INT32_MAX;
	volatile int64_t t57 = 75737085421LL;

	t57 = ((x229*(x230<=x231))^x232);

	if (t57 != 2147483647LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x234 = 23U;
	int64_t x236 = 8345221851310LL;
	int64_t t58 = -54330548LL;

	t58 = ((x233*(x234<=x235))^x236);

	if (t58 != 8349316028241LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x237 = 6112U;
	static int32_t x238 = -1;
	volatile uint8_t x240 = UINT8_MAX;
	volatile int32_t t59 = 1;

	t59 = ((x237*(x238<=x239))^x240);

	if (t59 != 5919) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x241 = 27251LLU;
	int8_t x243 = -1;
	uint8_t x244 = 5U;
	uint64_t t60 = 76238524132LLU;

	t60 = ((x241*(x242<=x243))^x244);

	if (t60 != 27254LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x248 = 1;
	int32_t t61 = 124702;

	t61 = ((x245*(x246<=x247))^x248);

	if (t61 != -52) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = INT16_MIN;
	int32_t x250 = -2200277;
	volatile uint8_t x251 = 18U;
	int32_t t62 = 142711140;

	t62 = ((x249*(x250<=x251))^x252);

	if (t62 != -32760) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MAX;
	volatile uint8_t x254 = UINT8_MAX;
	uint16_t x255 = UINT16_MAX;
	int64_t x256 = -1LL;
	static volatile int64_t t63 = INT64_MIN;

	t63 = ((x253*(x254<=x255))^x256);

	if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = INT64_MIN;
	int32_t x258 = INT32_MAX;
	uint16_t x259 = 0U;
	int64_t x260 = -1LL;
	int64_t t64 = 12408467149056965LL;

	t64 = ((x257*(x258<=x259))^x260);

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x261 = 34;
	static volatile int32_t x262 = INT32_MIN;
	uint8_t x263 = UINT8_MAX;
	int64_t x264 = INT64_MIN;
	int64_t t65 = 491LL;

	t65 = ((x261*(x262<=x263))^x264);

	if (t65 != -9223372036854775774LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x265 = 3U;
	uint8_t x266 = 16U;
	int8_t x267 = -1;
	static uint64_t x268 = UINT64_MAX;

	t66 = ((x265*(x266<=x267))^x268);

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x270 = UINT16_MAX;
	static int8_t x271 = INT8_MIN;
	int32_t x272 = 64;
	int64_t t67 = 88900LL;

	t67 = ((x269*(x270<=x271))^x272);

	if (t67 != 64LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x273 = 3842U;
	static int8_t x274 = -1;
	int8_t x275 = INT8_MIN;
	static volatile int64_t t68 = -48195162002034LL;

	t68 = ((x273*(x274<=x275))^x276);

	if (t68 != 29895417257LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x277 = INT16_MAX;
	uint32_t x278 = UINT32_MAX;
	volatile int32_t x279 = INT32_MIN;
	static int32_t x280 = INT32_MIN;
	int32_t t69 = INT32_MIN;

	t69 = ((x277*(x278<=x279))^x280);

	if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MIN;
	int32_t x282 = -372903;
	static int32_t x283 = INT32_MIN;
	int64_t x284 = -1LL;
	int64_t t70 = 117229389912LL;

	t70 = ((x281*(x282<=x283))^x284);

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x285 = 57U;
	int32_t x286 = -1;
	static uint32_t x287 = UINT32_MAX;
	int32_t t71 = 1600744;

	t71 = ((x285*(x286<=x287))^x288);

	if (t71 != -32711) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x289 = UINT8_MAX;
	static uint32_t x290 = UINT32_MAX;
	uint64_t x291 = 433976122LLU;
	int32_t t72 = 33702224;

	t72 = ((x289*(x290<=x291))^x292);

	if (t72 != -1198) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x293 = 1147877993U;
	volatile uint64_t x296 = UINT64_MAX;
	volatile uint64_t t73 = UINT64_MAX;

	t73 = ((x293*(x294<=x295))^x296);

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x298 = -1;
	volatile uint16_t x299 = UINT16_MAX;
	static int16_t x300 = INT16_MIN;

	t74 = ((x297*(x298<=x299))^x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = 7571U;
	static volatile int16_t x302 = INT16_MAX;
	uint64_t x304 = 7486222LLU;
	volatile uint64_t t75 = 919121102634054694LLU;

	t75 = ((x301*(x302<=x303))^x304);

	if (t75 != 7480989LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = 7;
	int64_t x308 = -30896416311479LL;
	volatile int64_t t76 = 111827008564669LL;

	t76 = ((x305*(x306<=x307))^x308);

	if (t76 != -30896416311474LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MIN;
	uint32_t x310 = 1258033U;
	int32_t x311 = -1;
	static int8_t x312 = INT8_MAX;

	t77 = ((x309*(x310<=x311))^x312);

	if (t77 != -2147483521) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MIN;
	int16_t x314 = INT16_MAX;
	int64_t x315 = 11LL;
	uint8_t x316 = 56U;
	volatile int64_t t78 = 126730074288LL;

	t78 = ((x313*(x314<=x315))^x316);

	if (t78 != 56LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = 1;
	int8_t x318 = INT8_MIN;
	uint32_t x319 = 224462389U;
	uint32_t x320 = 111U;
	volatile uint32_t t79 = 120939722U;

	t79 = ((x317*(x318<=x319))^x320);

	if (t79 != 111U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x321 = -136;
	static uint8_t x322 = UINT8_MAX;
	uint32_t x323 = 285049U;
	uint32_t x324 = UINT32_MAX;
	volatile uint32_t t80 = 120U;

	t80 = ((x321*(x322<=x323))^x324);

	if (t80 != 135U) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x325 = 317U;
	static uint8_t x326 = 30U;
	int64_t x328 = INT64_MIN;
	int64_t t81 = -5LL;

	t81 = ((x325*(x326<=x327))^x328);

	if (t81 != -9223372036854775491LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = 225658804262LLU;
	int32_t x331 = -13318;
	int16_t x332 = INT16_MIN;
	volatile uint64_t t82 = 690886371953977LLU;

	t82 = ((x329*(x330<=x331))^x332);

	if (t82 != 18446743848050726950LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x333 = UINT8_MAX;
	uint32_t x334 = UINT32_MAX;
	uint64_t x335 = 748682LLU;
	static volatile int32_t t83 = -212;

	t83 = ((x333*(x334<=x335))^x336);

	if (t83 != -71) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int64_t x337 = -2791082947176681LL;
	int16_t x338 = -3250;
	int16_t x339 = 2227;
	int64_t t84 = 13LL;

	t84 = ((x337*(x338<=x339))^x340);

	if (t84 != 2791082947176599LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = -89;
	volatile int16_t x342 = -1;
	int16_t x343 = -1;
	int8_t x344 = INT8_MIN;
	int32_t t85 = 278;

	t85 = ((x341*(x342<=x343))^x344);

	if (t85 != 39) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = 0;

	t86 = ((x345*(x346<=x347))^x348);

	if (t86 != 127) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = 6;
	static int32_t x350 = 66;
	int16_t x351 = 1;
	uint32_t x352 = 3308922U;

	t87 = ((x349*(x350<=x351))^x352);

	if (t87 != 3308922U) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = -26483861526LL;
	uint8_t x354 = UINT8_MAX;
	int32_t x355 = INT32_MAX;
	uint16_t x356 = UINT16_MAX;
	int64_t t88 = 2869557LL;

	t88 = ((x353*(x354<=x355))^x356);

	if (t88 != -26483841003LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x357 = UINT32_MAX;
	uint16_t x358 = 18U;
	uint16_t x359 = 331U;
	int32_t x360 = INT32_MIN;
	uint32_t t89 = 20402U;

	t89 = ((x357*(x358<=x359))^x360);

	if (t89 != 2147483647U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x361 = 60045749772LL;
	static uint16_t x363 = 1206U;
	uint16_t x364 = 4U;
	static int64_t t90 = 1580LL;

	t90 = ((x361*(x362<=x363))^x364);

	if (t90 != 4LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = -1;
	int16_t x366 = -1;
	volatile int16_t x368 = -1;

	t91 = ((x365*(x366<=x367))^x368);

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x371 = INT32_MIN;
	static int64_t x372 = -365612366593LL;

	t92 = ((x369*(x370<=x371))^x372);

	if (t92 != 9223371671242409215LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = 800045;
	uint16_t x374 = UINT16_MAX;
	int16_t x375 = INT16_MIN;
	int32_t t93 = 985;

	t93 = ((x373*(x374<=x375))^x376);

	if (t93 != 6) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x377 = -7;
	static volatile uint64_t x378 = 0LLU;
	volatile int64_t x380 = -1LL;
	static volatile int64_t t94 = -358818LL;

	t94 = ((x377*(x378<=x379))^x380);

	if (t94 != 6LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x381 = INT16_MAX;
	int8_t x382 = INT8_MAX;
	volatile int64_t x383 = INT64_MIN;

	t95 = ((x381*(x382<=x383))^x384);

	if (t95 != 4680662037535LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = INT8_MAX;
	uint8_t x386 = UINT8_MAX;
	int32_t x387 = INT32_MIN;
	uint32_t x388 = UINT32_MAX;
	static uint32_t t96 = UINT32_MAX;

	t96 = ((x385*(x386<=x387))^x388);

	if (t96 != UINT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x389 = 92U;
	volatile int16_t x390 = INT16_MAX;
	static uint8_t x391 = 109U;
	int64_t x392 = 1116787LL;

	t97 = ((x389*(x390<=x391))^x392);

	if (t97 != 1116787LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x393 = UINT64_MAX;
	uint64_t x394 = 118LLU;
	int32_t x395 = INT32_MAX;
	int8_t x396 = INT8_MAX;
	uint64_t t98 = 1486052028080LLU;

	t98 = ((x393*(x394<=x395))^x396);

	if (t98 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x397 = 416085212541931014LLU;
	uint64_t x399 = UINT64_MAX;

	t99 = ((x397*(x398<=x399))^x400);

	if (t99 != 8807286824312844793LLU) { NG(); } else { ; }
	
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

