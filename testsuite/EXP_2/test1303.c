#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x2 = INT8_MIN;
uint32_t x6 = UINT32_MAX;
int64_t x8 = -1LL;
int8_t x10 = -1;
static int8_t x16 = 2;
static int32_t x21 = -21;
uint16_t x27 = 666U;
static uint8_t x32 = UINT8_MAX;
int32_t t8 = 499;
static uint64_t x50 = 7628226208633403199LLU;
uint8_t x53 = 45U;
static volatile int32_t t14 = -282185;
int32_t t15 = -894904;
static uint8_t x67 = 5U;
volatile int32_t x71 = INT32_MIN;
int32_t x73 = 399;
volatile int16_t x75 = 42;
int16_t x77 = -1;
static uint64_t t19 = UINT64_MAX;
int16_t x81 = 14;
int32_t x99 = INT32_MAX;
int64_t x101 = -8961554017254703LL;
static int16_t x104 = -1;
uint64_t x107 = UINT64_MAX;
volatile uint8_t x113 = UINT8_MAX;
int16_t x115 = INT16_MIN;
volatile int8_t x118 = INT8_MAX;
volatile int64_t x120 = INT64_MIN;
int8_t x122 = -1;
volatile uint64_t x126 = 209407589278778LLU;
volatile int32_t x132 = INT32_MAX;
uint64_t x135 = 10LLU;
int64_t x136 = INT64_MIN;
volatile int32_t t34 = 5015;
volatile int8_t x149 = INT8_MIN;
int16_t x150 = -1;
int8_t x156 = INT8_MAX;
static volatile int32_t t40 = -8;
uint8_t x165 = UINT8_MAX;
static uint32_t x170 = UINT32_MAX;
int64_t x172 = 6191LL;
int32_t x182 = -1;
static volatile int64_t x186 = INT64_MIN;
int32_t t46 = -45;
static volatile int64_t x200 = 13002275LL;
int8_t x225 = INT8_MIN;
volatile int16_t x228 = 13;
static int64_t x231 = INT64_MIN;
int16_t x239 = INT16_MIN;
int64_t x240 = -81687793339086815LL;
int32_t x244 = -4075072;
uint64_t x247 = 1109047081291292LLU;
volatile uint32_t x252 = UINT32_MAX;
uint64_t x254 = UINT64_MAX;
int32_t x256 = -1;
int32_t t63 = -20;
static uint64_t x258 = 278337608369513LLU;
volatile uint64_t t64 = 3768176962925LLU;
int16_t x265 = 1;
int16_t x269 = INT16_MIN;
int32_t x270 = -1;
int16_t x274 = -2;
volatile uint8_t x276 = 7U;
volatile int32_t t68 = 13;
uint64_t x280 = 13424860LLU;
static uint8_t x283 = 0U;
int8_t x284 = INT8_MAX;
int64_t t73 = -29224393445LL;
uint32_t x300 = 15675U;
uint32_t x303 = UINT32_MAX;
int32_t t78 = 13561625;
int32_t x317 = INT32_MAX;
static int64_t x323 = INT64_MIN;
volatile uint32_t x335 = UINT32_MAX;
static int64_t x341 = INT64_MIN;
uint8_t x342 = UINT8_MAX;
int16_t x344 = -1;
int64_t x352 = -1761914526LL;
int8_t x354 = -1;
uint8_t x355 = 0U;
int8_t x360 = INT8_MIN;
volatile int8_t x364 = INT8_MIN;
int64_t x372 = -1664929237550LL;
volatile int8_t x381 = INT8_MIN;
int32_t x384 = -1;
int32_t t95 = -2;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	static int64_t x3 = 24141LL;
	int8_t x4 = INT8_MIN;
	int32_t t0 = 1;

	t0 = ((x1<=(x2==x3))*x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -23LL;
	static int16_t x7 = -1;
	volatile int64_t t1 = -22LL;

	t1 = ((x5<=(x6==x7))*x8);

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = 8599814;
	int32_t x11 = INT32_MIN;
	static uint8_t x12 = UINT8_MAX;
	int32_t t2 = 12;

	t2 = ((x9<=(x10==x11))*x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	static uint8_t x14 = UINT8_MAX;
	int32_t x15 = -1;
	int32_t t3 = 19716848;

	t3 = ((x13<=(x14==x15))*x16);

	if (t3 != 2) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = -1LL;
	volatile uint32_t x18 = 30615U;
	volatile uint16_t x19 = UINT16_MAX;
	int64_t x20 = -435462LL;
	int64_t t4 = 4089395587909609389LL;

	t4 = ((x17<=(x18==x19))*x20);

	if (t4 != -435462LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x22 = 1359608;
	uint16_t x23 = 159U;
	uint64_t x24 = UINT64_MAX;
	static volatile uint64_t t5 = UINT64_MAX;

	t5 = ((x21<=(x22==x23))*x24);

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -783;
	static volatile int64_t x26 = 6974187277168LL;
	static uint16_t x28 = UINT16_MAX;
	int32_t t6 = -156;

	t6 = ((x25<=(x26==x27))*x28);

	if (t6 != 65535) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 3U;
	static uint64_t x30 = 13704653374LLU;
	int64_t x31 = 14LL;
	volatile int32_t t7 = -1831334;

	t7 = ((x29<=(x30==x31))*x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = -1;
	int32_t x34 = -1;
	int8_t x35 = INT8_MAX;
	uint8_t x36 = 6U;

	t8 = ((x33<=(x34==x35))*x36);

	if (t8 != 6) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x37 = INT64_MAX;
	uint16_t x38 = 412U;
	int32_t x39 = INT32_MIN;
	static int64_t x40 = INT64_MIN;
	int64_t t9 = -62224098LL;

	t9 = ((x37<=(x38==x39))*x40);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x41 = 215648U;
	static uint32_t x42 = 981598395U;
	static volatile int32_t x43 = 24;
	static uint8_t x44 = 22U;
	volatile int32_t t10 = 101378403;

	t10 = ((x41<=(x42==x43))*x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	uint32_t x46 = 1116U;
	static uint8_t x47 = 2U;
	int64_t x48 = INT64_MIN;
	int64_t t11 = INT64_MIN;

	t11 = ((x45<=(x46==x47))*x48);

	if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 273749LLU;
	uint32_t x51 = 0U;
	uint64_t x52 = 272711865947022917LLU;
	uint64_t t12 = 12079864LLU;

	t12 = ((x49<=(x50==x51))*x52);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x54 = INT16_MIN;
	static int16_t x55 = 1;
	int8_t x56 = INT8_MIN;
	int32_t t13 = 120704297;

	t13 = ((x53<=(x54==x55))*x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = -68;
	int64_t x58 = -19LL;
	volatile uint32_t x59 = 2629U;
	uint8_t x60 = 4U;

	t14 = ((x57<=(x58==x59))*x60);

	if (t14 != 4) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = 1U;
	int16_t x62 = INT16_MAX;
	static int16_t x63 = 1;
	volatile int32_t x64 = INT32_MAX;

	t15 = ((x61<=(x62==x63))*x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 12U;
	int8_t x66 = INT8_MIN;
	uint16_t x68 = 0U;
	volatile int32_t t16 = -10743565;

	t16 = ((x65<=(x66==x67))*x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint64_t x69 = UINT64_MAX;
	int16_t x70 = -1;
	static volatile int32_t x72 = 51;
	static int32_t t17 = -20083;

	t17 = ((x69<=(x70==x71))*x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x74 = UINT32_MAX;
	uint32_t x76 = UINT32_MAX;
	uint32_t t18 = 23457862U;

	t18 = ((x73<=(x74==x75))*x76);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x78 = 15;
	static int64_t x79 = -1LL;
	uint64_t x80 = UINT64_MAX;

	t19 = ((x77<=(x78==x79))*x80);

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x82 = INT64_MIN;
	uint8_t x83 = UINT8_MAX;
	static int32_t x84 = INT32_MIN;
	int32_t t20 = 4107536;

	t20 = ((x81<=(x82==x83))*x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = -53;
	int32_t x86 = 1178771;
	int16_t x87 = INT16_MIN;
	static volatile int32_t x88 = 31;
	int32_t t21 = 4709;

	t21 = ((x85<=(x86==x87))*x88);

	if (t21 != 31) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int8_t x89 = 1;
	volatile int16_t x90 = INT16_MIN;
	int32_t x91 = -1;
	uint64_t x92 = UINT64_MAX;
	volatile uint64_t t22 = 11608714114127LLU;

	t22 = ((x89<=(x90==x91))*x92);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MIN;
	static volatile int32_t x94 = INT32_MIN;
	int8_t x95 = -1;
	int16_t x96 = INT16_MIN;
	volatile int32_t t23 = 135014;

	t23 = ((x93<=(x94==x95))*x96);

	if (t23 != -32768) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = 391883177U;
	int64_t x98 = -1LL;
	static uint64_t x100 = 37128603267847LLU;
	static volatile uint64_t t24 = 29838538LLU;

	t24 = ((x97<=(x98==x99))*x100);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x102 = 308U;
	static int16_t x103 = -13869;
	int32_t t25 = 432;

	t25 = ((x101<=(x102==x103))*x104);

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MIN;
	int8_t x106 = 5;
	volatile int8_t x108 = INT8_MIN;
	volatile int32_t t26 = -818;

	t26 = ((x105<=(x106==x107))*x108);

	if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = UINT8_MAX;
	int16_t x110 = -16;
	volatile uint32_t x111 = 432960U;
	static int32_t x112 = INT32_MAX;
	volatile int32_t t27 = 36131553;

	t27 = ((x109<=(x110==x111))*x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x114 = 2;
	volatile int16_t x116 = -1;
	volatile int32_t t28 = -140042;

	t28 = ((x113<=(x114==x115))*x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MIN;
	uint8_t x119 = 39U;
	int64_t t29 = INT64_MIN;

	t29 = ((x117<=(x118==x119))*x120);

	if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x121 = INT16_MIN;
	int8_t x123 = 1;
	int8_t x124 = -1;
	int32_t t30 = 124240;

	t30 = ((x121<=(x122==x123))*x124);

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x125 = 0;
	volatile int32_t x127 = -1;
	static int8_t x128 = INT8_MIN;
	volatile int32_t t31 = -44;

	t31 = ((x125<=(x126==x127))*x128);

	if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x129 = -1;
	int8_t x130 = INT8_MIN;
	volatile int8_t x131 = 1;
	int32_t t32 = INT32_MAX;

	t32 = ((x129<=(x130==x131))*x132);

	if (t32 != INT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = -1LL;
	uint64_t x134 = 1107216523304947082LLU;
	int64_t t33 = INT64_MIN;

	t33 = ((x133<=(x134==x135))*x136);

	if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = 1961U;
	int32_t x138 = 11442186;
	int64_t x139 = -253LL;
	int32_t x140 = INT32_MIN;

	t34 = ((x137<=(x138==x139))*x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x141 = INT8_MAX;
	int64_t x142 = INT64_MIN;
	uint32_t x143 = 966394119U;
	int64_t x144 = -45087427LL;
	volatile int64_t t35 = -22285842817787151LL;

	t35 = ((x141<=(x142==x143))*x144);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MIN;
	volatile int16_t x146 = -1;
	int64_t x147 = INT64_MIN;
	volatile uint16_t x148 = 2U;
	int32_t t36 = 785;

	t36 = ((x145<=(x146==x147))*x148);

	if (t36 != 2) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x151 = INT32_MIN;
	int32_t x152 = INT32_MIN;
	volatile int32_t t37 = INT32_MIN;

	t37 = ((x149<=(x150==x151))*x152);

	if (t37 != INT32_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = 543U;
	int64_t x154 = 191720339961203LL;
	uint8_t x155 = 2U;
	volatile int32_t t38 = 412;

	t38 = ((x153<=(x154==x155))*x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = 9U;
	int8_t x158 = -1;
	static int8_t x159 = INT8_MIN;
	static int8_t x160 = -1;
	static int32_t t39 = 3600808;

	t39 = ((x157<=(x158==x159))*x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = -46926344191828LL;
	int64_t x162 = -1LL;
	int8_t x163 = 7;
	volatile int8_t x164 = -1;

	t40 = ((x161<=(x162==x163))*x164);

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x166 = INT16_MAX;
	static int8_t x167 = 8;
	int32_t x168 = INT32_MIN;
	int32_t t41 = 1356497;

	t41 = ((x165<=(x166==x167))*x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x169 = INT32_MIN;
	uint64_t x171 = 8303846916747LLU;
	int64_t t42 = 13782235946208123LL;

	t42 = ((x169<=(x170==x171))*x172);

	if (t42 != 6191LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = 162707U;
	uint64_t x174 = UINT64_MAX;
	volatile uint16_t x175 = UINT16_MAX;
	int16_t x176 = INT16_MAX;
	int32_t t43 = -26;

	t43 = ((x173<=(x174==x175))*x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x177 = -1;
	uint32_t x178 = 4551U;
	int64_t x179 = -1LL;
	int8_t x180 = -1;
	volatile int32_t t44 = 1;

	t44 = ((x177<=(x178==x179))*x180);

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x181 = -8;
	int64_t x183 = -1LL;
	volatile uint16_t x184 = UINT16_MAX;
	volatile int32_t t45 = -494509734;

	t45 = ((x181<=(x182==x183))*x184);

	if (t45 != 65535) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = 796U;
	int8_t x187 = 0;
	uint8_t x188 = UINT8_MAX;

	t46 = ((x185<=(x186==x187))*x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = 3U;
	int32_t x190 = -452722723;
	int64_t x191 = 3015328749895433276LL;
	uint64_t x192 = 20744LLU;
	volatile uint64_t t47 = 906858195370963832LLU;

	t47 = ((x189<=(x190==x191))*x192);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint8_t x193 = 0U;
	static uint16_t x194 = 13U;
	int8_t x195 = 57;
	int64_t x196 = 380969759453LL;
	volatile int64_t t48 = 498522556449470161LL;

	t48 = ((x193<=(x194==x195))*x196);

	if (t48 != 380969759453LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = INT16_MIN;
	uint64_t x198 = 49336881LLU;
	static int8_t x199 = INT8_MIN;
	volatile int64_t t49 = -7592LL;

	t49 = ((x197<=(x198==x199))*x200);

	if (t49 != 13002275LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = INT32_MAX;
	uint64_t x202 = UINT64_MAX;
	int16_t x203 = -1;
	static volatile uint8_t x204 = UINT8_MAX;
	int32_t t50 = -9282;

	t50 = ((x201<=(x202==x203))*x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = INT32_MIN;
	int16_t x206 = -1;
	int32_t x207 = -1;
	int32_t x208 = 115452372;
	volatile int32_t t51 = 697319;

	t51 = ((x205<=(x206==x207))*x208);

	if (t51 != 115452372) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MIN;
	int64_t x210 = -339157720507LL;
	int8_t x211 = INT8_MAX;
	int64_t x212 = -384041738LL;
	static volatile int64_t t52 = 17465558175554LL;

	t52 = ((x209<=(x210==x211))*x212);

	if (t52 != -384041738LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x213 = 3056175U;
	volatile uint64_t x214 = 270011524632LLU;
	int64_t x215 = INT64_MIN;
	int32_t x216 = INT32_MAX;
	volatile int32_t t53 = -33077072;

	t53 = ((x213<=(x214==x215))*x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = 35U;
	volatile int64_t x218 = 87600386LL;
	uint64_t x219 = UINT64_MAX;
	volatile uint16_t x220 = UINT16_MAX;
	volatile int32_t t54 = 1;

	t54 = ((x217<=(x218==x219))*x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x221 = 3259121567141LLU;
	int64_t x222 = -1LL;
	volatile int8_t x223 = -1;
	volatile int32_t x224 = INT32_MIN;
	static int32_t t55 = -2667055;

	t55 = ((x221<=(x222==x223))*x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x226 = 11U;
	int16_t x227 = -1;
	volatile int32_t t56 = 105808389;

	t56 = ((x225<=(x226==x227))*x228);

	if (t56 != 13) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x229 = 0U;
	int64_t x230 = INT64_MAX;
	volatile int64_t x232 = INT64_MIN;
	int64_t t57 = INT64_MIN;

	t57 = ((x229<=(x230==x231))*x232);

	if (t57 != INT64_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint32_t x233 = UINT32_MAX;
	int64_t x234 = -1LL;
	volatile int32_t x235 = -1;
	int64_t x236 = -1LL;
	volatile int64_t t58 = 445674LL;

	t58 = ((x233<=(x234==x235))*x236);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x237 = INT16_MIN;
	uint32_t x238 = 694U;
	int64_t t59 = -522LL;

	t59 = ((x237<=(x238==x239))*x240);

	if (t59 != -81687793339086815LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x241 = 2U;
	int16_t x242 = -1;
	static volatile int64_t x243 = 441LL;
	static int32_t t60 = 245;

	t60 = ((x241<=(x242==x243))*x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x245 = INT16_MAX;
	uint64_t x246 = 40747LLU;
	static volatile int64_t x248 = -24LL;
	static int64_t t61 = -2562397754LL;

	t61 = ((x245<=(x246==x247))*x248);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x249 = UINT64_MAX;
	int64_t x250 = -1LL;
	uint64_t x251 = UINT64_MAX;
	uint32_t t62 = 107U;

	t62 = ((x249<=(x250==x251))*x252);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = INT32_MIN;
	int8_t x255 = INT8_MIN;

	t63 = ((x253<=(x254==x255))*x256);

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x257 = 3178LLU;
	int32_t x259 = 108022023;
	uint64_t x260 = 84692747LLU;

	t64 = ((x257<=(x258==x259))*x260);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = -1;
	int8_t x262 = -1;
	static volatile int16_t x263 = -15;
	static uint64_t x264 = UINT64_MAX;
	static uint64_t t65 = UINT64_MAX;

	t65 = ((x261<=(x262==x263))*x264);

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x266 = -1;
	int8_t x267 = INT8_MAX;
	int32_t x268 = INT32_MIN;
	volatile int32_t t66 = 0;

	t66 = ((x265<=(x266==x267))*x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x271 = INT16_MIN;
	uint16_t x272 = 11U;
	volatile int32_t t67 = 115;

	t67 = ((x269<=(x270==x271))*x272);

	if (t67 != 11) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = INT8_MAX;
	int32_t x275 = -1;

	t68 = ((x273<=(x274==x275))*x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MAX;
	static int32_t x278 = INT32_MIN;
	int64_t x279 = INT64_MIN;
	volatile uint64_t t69 = 233407355279713LLU;

	t69 = ((x277<=(x278==x279))*x280);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x281 = 279369U;
	static volatile int64_t x282 = -1LL;
	volatile int32_t t70 = 127;

	t70 = ((x281<=(x282==x283))*x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = 34811U;
	int32_t x286 = INT32_MIN;
	int16_t x287 = -1;
	static uint64_t x288 = 4463038697357LLU;
	uint64_t t71 = 4124853410224LLU;

	t71 = ((x285<=(x286==x287))*x288);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint32_t x289 = 381546514U;
	uint16_t x290 = 0U;
	int32_t x291 = -1;
	int16_t x292 = INT16_MAX;
	static volatile int32_t t72 = 421636;

	t72 = ((x289<=(x290==x291))*x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x293 = INT32_MAX;
	int64_t x294 = INT64_MAX;
	uint8_t x295 = 4U;
	int64_t x296 = -34LL;

	t73 = ((x293<=(x294==x295))*x296);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x297 = 4U;
	volatile int32_t x298 = INT32_MIN;
	int32_t x299 = INT32_MIN;
	uint32_t t74 = 1995U;

	t74 = ((x297<=(x298==x299))*x300);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x301 = UINT16_MAX;
	int64_t x302 = INT64_MIN;
	int16_t x304 = -15;
	int32_t t75 = 148983371;

	t75 = ((x301<=(x302==x303))*x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = 10;
	volatile uint64_t x306 = UINT64_MAX;
	static volatile uint16_t x307 = 3U;
	static uint64_t x308 = 475083516967551LLU;
	uint64_t t76 = 1LLU;

	t76 = ((x305<=(x306==x307))*x308);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = 73;
	static uint64_t x310 = UINT64_MAX;
	int64_t x311 = INT64_MAX;
	static uint64_t x312 = 306821479LLU;
	uint64_t t77 = 25973998530974470LLU;

	t77 = ((x309<=(x310==x311))*x312);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x313 = -1;
	int64_t x314 = -687502452811154LL;
	volatile uint16_t x315 = 33U;
	int8_t x316 = INT8_MIN;

	t78 = ((x313<=(x314==x315))*x316);

	if (t78 != -128) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x318 = INT64_MAX;
	static uint16_t x319 = 872U;
	int32_t x320 = INT32_MAX;
	volatile int32_t t79 = -155353;

	t79 = ((x317<=(x318==x319))*x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x321 = 14U;
	int8_t x322 = INT8_MIN;
	static uint8_t x324 = 17U;
	static volatile int32_t t80 = 55674;

	t80 = ((x321<=(x322==x323))*x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x325 = INT16_MIN;
	static int8_t x326 = INT8_MIN;
	uint32_t x327 = 40230U;
	uint64_t x328 = UINT64_MAX;
	static uint64_t t81 = UINT64_MAX;

	t81 = ((x325<=(x326==x327))*x328);

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x329 = 1966108264U;
	int16_t x330 = INT16_MIN;
	volatile int64_t x331 = INT64_MAX;
	static int16_t x332 = INT16_MAX;
	int32_t t82 = 448;

	t82 = ((x329<=(x330==x331))*x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = -1;
	uint32_t x334 = 0U;
	uint16_t x336 = 109U;
	int32_t t83 = 0;

	t83 = ((x333<=(x334==x335))*x336);

	if (t83 != 109) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = 1;
	int16_t x338 = 290;
	volatile int8_t x339 = INT8_MAX;
	int16_t x340 = -1;
	int32_t t84 = 75430408;

	t84 = ((x337<=(x338==x339))*x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x343 = -289;
	int32_t t85 = 0;

	t85 = ((x341<=(x342==x343))*x344);

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = 14385463283792LLU;
	static int32_t x346 = INT32_MAX;
	volatile uint64_t x347 = UINT64_MAX;
	int8_t x348 = INT8_MIN;
	int32_t t86 = -9745;

	t86 = ((x345<=(x346==x347))*x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = INT32_MIN;
	uint64_t x350 = 43LLU;
	static int8_t x351 = INT8_MIN;
	volatile int64_t t87 = -188240LL;

	t87 = ((x349<=(x350==x351))*x352);

	if (t87 != -1761914526LL) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int32_t x353 = -1;
	uint64_t x356 = UINT64_MAX;
	uint64_t t88 = UINT64_MAX;

	t88 = ((x353<=(x354==x355))*x356);

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x357 = INT32_MAX;
	static uint32_t x358 = 104036U;
	static int32_t x359 = INT32_MAX;
	int32_t t89 = 1790;

	t89 = ((x357<=(x358==x359))*x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x361 = 14456LLU;
	int32_t x362 = INT32_MIN;
	static uint64_t x363 = 839955149202562828LLU;
	volatile int32_t t90 = -102615759;

	t90 = ((x361<=(x362==x363))*x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = -1LL;
	uint32_t x366 = 269U;
	static uint32_t x367 = UINT32_MAX;
	int32_t x368 = -22;
	volatile int32_t t91 = -1;

	t91 = ((x365<=(x366==x367))*x368);

	if (t91 != -22) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x369 = -955861;
	uint32_t x370 = UINT32_MAX;
	int32_t x371 = INT32_MAX;
	int64_t t92 = -10LL;

	t92 = ((x369<=(x370==x371))*x372);

	if (t92 != -1664929237550LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = UINT16_MAX;
	int32_t x374 = -705555879;
	volatile int16_t x375 = INT16_MAX;
	int16_t x376 = INT16_MIN;
	int32_t t93 = -464457983;

	t93 = ((x373<=(x374==x375))*x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = 28131236LL;
	int8_t x378 = INT8_MIN;
	uint16_t x379 = 0U;
	volatile int16_t x380 = INT16_MIN;
	volatile int32_t t94 = 91403;

	t94 = ((x377<=(x378==x379))*x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x382 = INT8_MIN;
	int32_t x383 = INT32_MAX;

	t95 = ((x381<=(x382==x383))*x384);

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x385 = 30U;
	volatile int32_t x386 = INT32_MAX;
	volatile uint32_t x387 = UINT32_MAX;
	static uint8_t x388 = 5U;
	int32_t t96 = -1128;

	t96 = ((x385<=(x386==x387))*x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = -1;
	int8_t x390 = INT8_MIN;
	int8_t x391 = INT8_MAX;
	int16_t x392 = -1;
	static int32_t t97 = 916;

	t97 = ((x389<=(x390==x391))*x392);

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x393 = 7U;
	volatile int64_t x394 = INT64_MIN;
	int16_t x395 = -1;
	int32_t x396 = 8450113;
	static volatile int32_t t98 = 845;

	t98 = ((x393<=(x394==x395))*x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x397 = 2130U;
	int64_t x398 = INT64_MIN;
	int64_t x399 = INT64_MIN;
	static int64_t x400 = -2466612711LL;
	static int64_t t99 = 487889LL;

	t99 = ((x397<=(x398==x399))*x400);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

