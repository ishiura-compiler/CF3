#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = 9;
int64_t t1 = -16023827547LL;
int8_t x12 = INT8_MAX;
volatile int32_t t2 = -1321173;
int16_t x18 = INT16_MIN;
volatile uint8_t x20 = 111U;
volatile int32_t t4 = -6;
uint16_t x26 = UINT16_MAX;
volatile int32_t x27 = INT32_MIN;
volatile int32_t t6 = 288;
static int16_t x32 = INT16_MAX;
static volatile int32_t t7 = 200;
volatile int8_t x33 = INT8_MIN;
static int64_t x37 = INT64_MAX;
uint32_t x42 = 4671563U;
volatile uint64_t x46 = 4LLU;
volatile int32_t x54 = -412;
int8_t x61 = INT8_MIN;
uint16_t x66 = UINT16_MAX;
volatile int8_t x73 = INT8_MAX;
volatile int16_t x79 = INT16_MIN;
int64_t x86 = INT64_MIN;
volatile int8_t x96 = -1;
static uint8_t x110 = 5U;
int32_t x114 = INT32_MIN;
static int64_t x116 = -1LL;
volatile uint64_t x119 = 14LLU;
int8_t x123 = 0;
volatile uint64_t t28 = 72767877291885LLU;
uint8_t x129 = 3U;
volatile int64_t t30 = 16284738LL;
int32_t x136 = INT32_MAX;
volatile uint32_t x137 = UINT32_MAX;
int8_t x138 = INT8_MIN;
volatile uint32_t t33 = 15U;
int64_t x148 = -1LL;
static uint64_t t35 = 988403935143LLU;
uint8_t x156 = 3U;
volatile int64_t t36 = -153889017979388LL;
uint64_t x160 = 4196468065873482LLU;
int8_t x161 = -1;
volatile uint64_t t38 = 2042291186405LLU;
int16_t x169 = 0;
int8_t x187 = INT8_MIN;
static int16_t x191 = INT16_MIN;
int64_t t45 = 5584221162LL;
volatile uint64_t x197 = 29671702476813LLU;
volatile uint64_t t47 = 535559958791312817LLU;
int64_t x203 = -31905LL;
uint64_t x205 = 2160958640820LLU;
int8_t x207 = INT8_MIN;
int16_t x208 = INT16_MAX;
int16_t x210 = -53;
uint32_t x216 = 2011U;
static volatile int64_t x219 = -296993950999017LL;
static volatile uint64_t t52 = 27861542837580033LLU;
static int16_t x221 = INT16_MIN;
int32_t x226 = INT32_MIN;
static volatile uint32_t t55 = 1635016U;
int64_t x236 = INT64_MIN;
int16_t x238 = INT16_MIN;
int32_t x239 = 2826987;
int16_t x245 = INT16_MIN;
static volatile int32_t x246 = 33;
static uint32_t x252 = 4214120U;
volatile uint16_t x262 = 241U;
static volatile int8_t x265 = 0;
uint32_t t63 = 314U;
uint16_t x274 = 2372U;
int8_t x283 = -5;
int8_t x293 = INT8_MAX;
int32_t x298 = INT32_MIN;
uint32_t t71 = 501347040U;
int64_t x318 = INT64_MAX;
int8_t x319 = -1;
uint8_t x323 = 68U;
int32_t x325 = INT32_MIN;
int32_t t75 = 1204506;
volatile int64_t t77 = -3LL;
int8_t x340 = 1;
static volatile uint8_t x345 = 11U;
uint16_t x347 = UINT16_MAX;
volatile int32_t x354 = INT32_MIN;
volatile uint16_t x363 = UINT16_MAX;
uint32_t x366 = UINT32_MAX;
int64_t x372 = -1LL;
int32_t x381 = INT32_MAX;
int8_t x385 = -1;
uint8_t x390 = UINT8_MAX;
uint64_t x394 = UINT64_MAX;
static int32_t x399 = -6370;
uint32_t x418 = 409U;
static int64_t x425 = -1LL;


void f0(void) {
	volatile int32_t x1 = INT32_MAX;
	static int64_t x3 = 2571293392264921939LL;
	static int64_t x4 = INT64_MIN;
	volatile int64_t t0 = 10298094LL;

	t0 = ((x1-(x2==x3))/x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = INT64_MAX;
	int16_t x6 = INT16_MAX;
	volatile uint8_t x7 = 6U;
	int8_t x8 = INT8_MAX;

	t1 = ((x5-(x6==x7))/x8);

	if (t1 != 72624976668147841LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = INT32_MAX;
	volatile uint64_t x10 = 3485LLU;
	uint8_t x11 = 51U;

	t2 = ((x9-(x10==x11))/x12);

	if (t2 != 16909320) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int64_t x13 = -1LL;
	volatile int8_t x14 = INT8_MAX;
	uint32_t x15 = 2U;
	volatile int32_t x16 = -560;
	volatile int64_t t3 = -676575307103LL;

	t3 = ((x13-(x14==x15))/x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = -5;
	uint32_t x19 = 876245U;

	t4 = ((x17-(x18==x19))/x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = 1485966981LL;
	static int8_t x22 = INT8_MAX;
	uint8_t x23 = UINT8_MAX;
	int16_t x24 = -264;
	int64_t t5 = 184320377463LL;

	t5 = ((x21-(x22==x23))/x24);

	if (t5 != -5628662LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x25 = UINT16_MAX;
	int32_t x28 = 18638861;

	t6 = ((x25-(x26==x27))/x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = 1;
	int8_t x30 = 46;
	uint32_t x31 = 3U;

	t7 = ((x29-(x30==x31))/x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x34 = INT8_MIN;
	uint32_t x35 = UINT32_MAX;
	uint32_t x36 = UINT32_MAX;
	static uint32_t t8 = 3154692U;

	t8 = ((x33-(x34==x35))/x36);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x38 = 6482;
	int16_t x39 = INT16_MIN;
	int32_t x40 = -1;
	volatile int64_t t9 = 805158852826577566LL;

	t9 = ((x37-(x38==x39))/x40);

	if (t9 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x41 = UINT64_MAX;
	int32_t x43 = INT32_MIN;
	uint64_t x44 = 683044479044173503LLU;
	volatile uint64_t t10 = 35145521LLU;

	t10 = ((x41-(x42==x43))/x44);

	if (t10 != 27LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 335U;
	static uint32_t x47 = UINT32_MAX;
	uint8_t x48 = 12U;
	volatile uint32_t t11 = 9U;

	t11 = ((x45-(x46==x47))/x48);

	if (t11 != 27U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = 3;
	volatile int32_t x50 = INT32_MIN;
	uint16_t x51 = 7814U;
	volatile int32_t x52 = INT32_MAX;
	int32_t t12 = -2;

	t12 = ((x49-(x50==x51))/x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = 2U;
	static int32_t x55 = -65681628;
	int64_t x56 = -1LL;
	int64_t t13 = 798842321LL;

	t13 = ((x53-(x54==x55))/x56);

	if (t13 != -2LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x62 = -48;
	int8_t x63 = 1;
	int16_t x64 = -1;
	int32_t t14 = 1588;

	t14 = ((x61-(x62==x63))/x64);

	if (t14 != 128) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = -1;
	int32_t x67 = -1;
	volatile uint8_t x68 = 38U;
	volatile int32_t t15 = 33825212;

	t15 = ((x65-(x66==x67))/x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x69 = UINT16_MAX;
	uint64_t x70 = UINT64_MAX;
	volatile int8_t x71 = 1;
	static uint32_t x72 = UINT32_MAX;
	volatile uint32_t t16 = 0U;

	t16 = ((x69-(x70==x71))/x72);

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x74 = 1U;
	int32_t x75 = INT32_MIN;
	uint32_t x76 = UINT32_MAX;
	static volatile uint32_t t17 = 440U;

	t17 = ((x73-(x74==x75))/x76);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = INT16_MIN;
	uint32_t x78 = UINT32_MAX;
	int8_t x80 = INT8_MAX;
	int32_t t18 = 2455;

	t18 = ((x77-(x78==x79))/x80);

	if (t18 != -258) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x81 = INT16_MIN;
	static volatile int64_t x82 = INT64_MIN;
	volatile int16_t x83 = -6;
	int32_t x84 = 39;
	static int32_t t19 = 1992213;

	t19 = ((x81-(x82==x83))/x84);

	if (t19 != -840) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = -7LL;
	static uint64_t x87 = 276884106236246LLU;
	volatile int16_t x88 = -1;
	int64_t t20 = 129341LL;

	t20 = ((x85-(x86==x87))/x88);

	if (t20 != 7LL) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int16_t x93 = -65;
	int8_t x94 = INT8_MIN;
	int16_t x95 = -1;
	int32_t t21 = -7009736;

	t21 = ((x93-(x94==x95))/x96);

	if (t21 != 65) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x97 = UINT8_MAX;
	int8_t x98 = -1;
	uint64_t x99 = UINT64_MAX;
	int16_t x100 = 352;
	int32_t t22 = 6;

	t22 = ((x97-(x98==x99))/x100);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = -10353;
	uint64_t x102 = 9654119920LLU;
	uint32_t x103 = 329056U;
	uint16_t x104 = 321U;
	volatile int32_t t23 = -2;

	t23 = ((x101-(x102==x103))/x104);

	if (t23 != -32) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x105 = INT8_MAX;
	volatile uint64_t x106 = 5342864LLU;
	volatile uint8_t x107 = 12U;
	static volatile uint16_t x108 = UINT16_MAX;
	volatile int32_t t24 = 992545150;

	t24 = ((x105-(x106==x107))/x108);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x109 = 6;
	uint32_t x111 = UINT32_MAX;
	int32_t x112 = INT32_MIN;
	volatile int32_t t25 = -83;

	t25 = ((x109-(x110==x111))/x112);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x113 = -2447LL;
	volatile int16_t x115 = 2;
	int64_t t26 = -20793947538598LL;

	t26 = ((x113-(x114==x115))/x116);

	if (t26 != 2447LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x117 = INT8_MIN;
	int64_t x118 = -1LL;
	static int64_t x120 = INT64_MIN;
	int64_t t27 = -3892711017119689625LL;

	t27 = ((x117-(x118==x119))/x120);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x121 = INT16_MAX;
	volatile uint32_t x122 = UINT32_MAX;
	uint64_t x124 = 3769591634230247860LLU;

	t28 = ((x121-(x122==x123))/x124);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x125 = 1U;
	int16_t x126 = -24;
	int64_t x127 = INT64_MAX;
	int64_t x128 = -6828LL;
	int64_t t29 = -3581613LL;

	t29 = ((x125-(x126==x127))/x128);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x130 = -5;
	uint8_t x131 = 0U;
	int64_t x132 = INT64_MIN;

	t30 = ((x129-(x130==x131))/x132);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x133 = 0U;
	volatile int16_t x134 = INT16_MIN;
	volatile int8_t x135 = INT8_MIN;
	int32_t t31 = 1;

	t31 = ((x133-(x134==x135))/x136);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x139 = INT32_MAX;
	static uint32_t x140 = 126302U;
	uint32_t t32 = 2032480719U;

	t32 = ((x137-(x138==x139))/x140);

	if (t32 != 34005U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x141 = 2;
	int64_t x142 = -1LL;
	uint16_t x143 = UINT16_MAX;
	uint32_t x144 = UINT32_MAX;

	t33 = ((x141-(x142==x143))/x144);

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x145 = 0;
	int8_t x146 = -8;
	uint32_t x147 = 8176311U;
	int64_t t34 = 2006117LL;

	t34 = ((x145-(x146==x147))/x148);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x149 = 16272616U;
	volatile int64_t x150 = INT64_MAX;
	int16_t x151 = 2097;
	uint64_t x152 = 475491753287548028LLU;

	t35 = ((x149-(x150==x151))/x152);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x153 = INT64_MAX;
	volatile int8_t x154 = INT8_MAX;
	volatile uint64_t x155 = 56134LLU;

	t36 = ((x153-(x154==x155))/x156);

	if (t36 != 3074457345618258602LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x157 = INT16_MIN;
	static int16_t x158 = -1;
	int16_t x159 = INT16_MIN;
	volatile uint64_t t37 = 149395LLU;

	t37 = ((x157-(x158==x159))/x160);

	if (t37 != 4395LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x162 = 623U;
	uint8_t x163 = 0U;
	uint64_t x164 = 5LLU;

	t38 = ((x161-(x162==x163))/x164);

	if (t38 != 3689348814741910323LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x165 = 1684447LLU;
	int32_t x166 = 1;
	static uint32_t x167 = UINT32_MAX;
	uint32_t x168 = 55U;
	volatile uint64_t t39 = 41LLU;

	t39 = ((x165-(x166==x167))/x168);

	if (t39 != 30626LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x170 = 55U;
	volatile int16_t x171 = INT16_MIN;
	int16_t x172 = INT16_MIN;
	int32_t t40 = -70728;

	t40 = ((x169-(x170==x171))/x172);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x173 = 933U;
	int32_t x174 = INT32_MIN;
	static volatile uint32_t x175 = 1U;
	int8_t x176 = -7;
	int32_t t41 = 0;

	t41 = ((x173-(x174==x175))/x176);

	if (t41 != -133) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x177 = INT16_MIN;
	int32_t x178 = -1;
	volatile int32_t x179 = INT32_MIN;
	uint8_t x180 = UINT8_MAX;
	int32_t t42 = -3227;

	t42 = ((x177-(x178==x179))/x180);

	if (t42 != -128) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x181 = 63;
	int64_t x182 = -1LL;
	static volatile int64_t x183 = INT64_MIN;
	int8_t x184 = -1;
	int32_t t43 = 66692;

	t43 = ((x181-(x182==x183))/x184);

	if (t43 != -63) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x185 = UINT32_MAX;
	uint8_t x186 = UINT8_MAX;
	uint64_t x188 = 1047268525018LLU;
	uint64_t t44 = 11261887LLU;

	t44 = ((x185-(x186==x187))/x188);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x189 = INT64_MAX;
	static uint8_t x190 = 14U;
	volatile uint8_t x192 = 7U;

	t45 = ((x189-(x190==x191))/x192);

	if (t45 != 1317624576693539401LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x193 = INT32_MIN;
	uint64_t x194 = UINT64_MAX;
	static uint64_t x195 = 56789112248059752LLU;
	uint16_t x196 = 23232U;
	volatile int32_t t46 = 0;

	t46 = ((x193-(x194==x195))/x196);

	if (t46 != -92436) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x198 = INT32_MAX;
	int16_t x199 = 1;
	static int16_t x200 = INT16_MIN;

	t47 = ((x197-(x198==x199))/x200);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x201 = 8U;
	uint8_t x202 = 6U;
	static volatile int32_t x204 = INT32_MIN;
	int32_t t48 = 942;

	t48 = ((x201-(x202==x203))/x204);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x206 = 4827670292897679LL;
	volatile uint64_t t49 = 1143414LLU;

	t49 = ((x205-(x206==x207))/x208);

	if (t49 != 65949236LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x209 = INT16_MIN;
	static int64_t x211 = 56404833981341LL;
	uint32_t x212 = 1323U;
	uint32_t t50 = 1905U;

	t50 = ((x209-(x210==x211))/x212);

	if (t50 != 3246360U) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x213 = -182774304485194LL;
	volatile int8_t x214 = INT8_MAX;
	static int64_t x215 = -1LL;
	volatile int64_t t51 = 26301379298819492LL;

	t51 = ((x213-(x214==x215))/x216);

	if (t51 != -90887272245LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x217 = 4017011473845LLU;
	uint32_t x218 = 462U;
	uint16_t x220 = UINT16_MAX;

	t52 = ((x217-(x218==x219))/x220);

	if (t52 != 61295666LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x222 = 10U;
	static uint16_t x223 = UINT16_MAX;
	volatile int8_t x224 = -1;
	int32_t t53 = 118329449;

	t53 = ((x221-(x222==x223))/x224);

	if (t53 != 32768) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x225 = 0U;
	int8_t x227 = INT8_MIN;
	int64_t x228 = INT64_MIN;
	volatile int64_t t54 = -128LL;

	t54 = ((x225-(x226==x227))/x228);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x229 = INT32_MIN;
	static uint8_t x230 = UINT8_MAX;
	uint32_t x231 = 830805111U;
	static uint32_t x232 = 578490454U;

	t55 = ((x229-(x230==x231))/x232);

	if (t55 != 3U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x233 = 7;
	volatile int16_t x234 = -33;
	int32_t x235 = INT32_MAX;
	static int64_t t56 = 178949518187LL;

	t56 = ((x233-(x234==x235))/x236);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x237 = INT32_MAX;
	static uint64_t x240 = 161LLU;
	volatile uint64_t t57 = 18093LLU;

	t57 = ((x237-(x238==x239))/x240);

	if (t57 != 13338407LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x247 = -18580801273LL;
	uint8_t x248 = 1U;
	int32_t t58 = -4653802;

	t58 = ((x245-(x246==x247))/x248);

	if (t58 != -32768) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x249 = 2508;
	static volatile int8_t x250 = INT8_MIN;
	uint8_t x251 = 10U;
	uint32_t t59 = 17U;

	t59 = ((x249-(x250==x251))/x252);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x257 = INT8_MIN;
	int32_t x258 = -1;
	int64_t x259 = 447661932LL;
	int64_t x260 = INT64_MAX;
	volatile int64_t t60 = -123226318LL;

	t60 = ((x257-(x258==x259))/x260);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint32_t x261 = 4U;
	uint64_t x263 = 3601693531520LLU;
	uint64_t x264 = 3471444520285131151LLU;
	volatile uint64_t t61 = 686605714LLU;

	t61 = ((x261-(x262==x263))/x264);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x266 = 105980371;
	uint64_t x267 = 0LLU;
	int32_t x268 = -1;
	int32_t t62 = 9728083;

	t62 = ((x265-(x266==x267))/x268);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int8_t x269 = -1;
	volatile int8_t x270 = INT8_MIN;
	volatile uint64_t x271 = 454681946561229LLU;
	volatile uint32_t x272 = 4758897U;

	t63 = ((x269-(x270==x271))/x272);

	if (t63 != 902U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x273 = -1LL;
	static int64_t x275 = INT64_MIN;
	static uint64_t x276 = UINT64_MAX;
	volatile uint64_t t64 = 64100956225LLU;

	t64 = ((x273-(x274==x275))/x276);

	if (t64 != 1LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x281 = INT16_MIN;
	int8_t x282 = INT8_MIN;
	uint8_t x284 = UINT8_MAX;
	volatile int32_t t65 = -816;

	t65 = ((x281-(x282==x283))/x284);

	if (t65 != -128) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x285 = 63;
	volatile uint16_t x286 = UINT16_MAX;
	volatile int64_t x287 = -437300LL;
	int32_t x288 = INT32_MAX;
	int32_t t66 = -14;

	t66 = ((x285-(x286==x287))/x288);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x289 = 116U;
	int16_t x290 = -1;
	uint64_t x291 = 530LLU;
	volatile int32_t x292 = 801890458;
	volatile int32_t t67 = -198;

	t67 = ((x289-(x290==x291))/x292);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x294 = -1LL;
	int32_t x295 = 2054;
	static volatile int64_t x296 = INT64_MIN;
	int64_t t68 = -6281635277082355LL;

	t68 = ((x293-(x294==x295))/x296);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x297 = -3;
	volatile int8_t x299 = -1;
	int64_t x300 = INT64_MAX;
	volatile int64_t t69 = -16520280572347600LL;

	t69 = ((x297-(x298==x299))/x300);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x305 = 12152317067LLU;
	uint32_t x306 = 171166448U;
	int64_t x307 = 22325144002715283LL;
	volatile uint16_t x308 = 1712U;
	volatile uint64_t t70 = 3174305LLU;

	t70 = ((x305-(x306==x307))/x308);

	if (t70 != 7098316LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x309 = -1;
	int32_t x310 = INT32_MIN;
	volatile uint64_t x311 = 0LLU;
	uint32_t x312 = UINT32_MAX;

	t71 = ((x309-(x310==x311))/x312);

	if (t71 != 1U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x313 = INT8_MIN;
	static int64_t x314 = INT64_MAX;
	int64_t x315 = -1LL;
	int16_t x316 = 1;
	volatile int32_t t72 = 8706857;

	t72 = ((x313-(x314==x315))/x316);

	if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x317 = INT16_MAX;
	int32_t x320 = INT32_MIN;
	int32_t t73 = 3949;

	t73 = ((x317-(x318==x319))/x320);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x321 = -1;
	int32_t x322 = INT32_MIN;
	int32_t x324 = -93785152;
	volatile int32_t t74 = 594024599;

	t74 = ((x321-(x322==x323))/x324);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x326 = -1LL;
	uint32_t x327 = 9571576U;
	int32_t x328 = 3772;

	t75 = ((x325-(x326==x327))/x328);

	if (t75 != -569322) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x329 = INT16_MAX;
	volatile int16_t x330 = 25;
	int16_t x331 = INT16_MAX;
	uint8_t x332 = UINT8_MAX;
	int32_t t76 = 7992;

	t76 = ((x329-(x330==x331))/x332);

	if (t76 != 128) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x333 = INT64_MAX;
	volatile int32_t x334 = INT32_MIN;
	volatile int32_t x335 = INT32_MIN;
	uint16_t x336 = 13U;

	t77 = ((x333-(x334==x335))/x336);

	if (t77 != 709490156681136600LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x337 = 17U;
	volatile int8_t x338 = -1;
	static uint32_t x339 = UINT32_MAX;
	volatile int32_t t78 = -23;

	t78 = ((x337-(x338==x339))/x340);

	if (t78 != 16) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x341 = UINT16_MAX;
	static uint8_t x342 = 32U;
	volatile int32_t x343 = 22327;
	volatile int64_t x344 = INT64_MIN;
	volatile int64_t t79 = 7049369235411771LL;

	t79 = ((x341-(x342==x343))/x344);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x346 = INT8_MAX;
	volatile int8_t x348 = INT8_MAX;
	int32_t t80 = -56;

	t80 = ((x345-(x346==x347))/x348);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x353 = UINT64_MAX;
	static uint8_t x355 = 66U;
	int64_t x356 = INT64_MIN;
	volatile uint64_t t81 = 269LLU;

	t81 = ((x353-(x354==x355))/x356);

	if (t81 != 1LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x357 = 65U;
	static int8_t x358 = -1;
	int32_t x359 = INT32_MIN;
	int64_t x360 = INT64_MIN;
	volatile int64_t t82 = 3355343190LL;

	t82 = ((x357-(x358==x359))/x360);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x361 = -1LL;
	static uint16_t x362 = 10674U;
	volatile uint32_t x364 = 399U;
	int64_t t83 = -2812440906281793LL;

	t83 = ((x361-(x362==x363))/x364);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x365 = INT32_MIN;
	int32_t x367 = INT32_MIN;
	uint16_t x368 = 14895U;
	volatile int32_t t84 = 195837198;

	t84 = ((x365-(x366==x367))/x368);

	if (t84 != -144174) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x369 = INT32_MIN;
	static int32_t x370 = 27;
	volatile uint64_t x371 = 603500834968611112LLU;
	static int64_t t85 = -1076264529017LL;

	t85 = ((x369-(x370==x371))/x372);

	if (t85 != 2147483648LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x377 = 3158U;
	volatile int64_t x378 = INT64_MIN;
	static uint32_t x379 = 10U;
	int32_t x380 = -1;
	static uint32_t t86 = 1483U;

	t86 = ((x377-(x378==x379))/x380);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x382 = UINT16_MAX;
	int16_t x383 = 30;
	static uint8_t x384 = 1U;
	volatile int32_t t87 = INT32_MAX;

	t87 = ((x381-(x382==x383))/x384);

	if (t87 != INT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x386 = 24162483;
	static uint64_t x387 = 1017845411162517LLU;
	int8_t x388 = INT8_MIN;
	volatile int32_t t88 = -3910881;

	t88 = ((x385-(x386==x387))/x388);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x389 = INT16_MIN;
	uint16_t x391 = 1U;
	volatile int8_t x392 = INT8_MAX;
	static int32_t t89 = 0;

	t89 = ((x389-(x390==x391))/x392);

	if (t89 != -258) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x393 = 704LL;
	uint8_t x395 = UINT8_MAX;
	volatile uint8_t x396 = UINT8_MAX;
	volatile int64_t t90 = 39LL;

	t90 = ((x393-(x394==x395))/x396);

	if (t90 != 2LL) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int8_t x397 = -7;
	static int16_t x398 = -9948;
	int8_t x400 = -38;
	int32_t t91 = 437815;

	t91 = ((x397-(x398==x399))/x400);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x401 = -1;
	int32_t x402 = INT32_MAX;
	int64_t x403 = -12482697372259240LL;
	uint16_t x404 = UINT16_MAX;
	volatile int32_t t92 = 302572899;

	t92 = ((x401-(x402==x403))/x404);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x405 = -1;
	int64_t x406 = INT64_MIN;
	int8_t x407 = INT8_MAX;
	uint16_t x408 = UINT16_MAX;
	volatile int32_t t93 = -759;

	t93 = ((x405-(x406==x407))/x408);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x409 = INT8_MIN;
	int16_t x410 = -1;
	int64_t x411 = -1LL;
	static volatile uint8_t x412 = 1U;
	volatile int32_t t94 = 205844898;

	t94 = ((x409-(x410==x411))/x412);

	if (t94 != -129) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x413 = UINT64_MAX;
	int64_t x414 = 621623727478LL;
	int8_t x415 = -6;
	int64_t x416 = -27571720803524000LL;
	uint64_t t95 = 400954LLU;

	t95 = ((x413-(x414==x415))/x416);

	if (t95 != 1LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x417 = 13U;
	int64_t x419 = INT64_MAX;
	uint32_t x420 = UINT32_MAX;
	static uint32_t t96 = 10U;

	t96 = ((x417-(x418==x419))/x420);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x421 = INT16_MIN;
	static int32_t x422 = -1;
	int16_t x423 = 5170;
	static int32_t x424 = -1;
	int32_t t97 = 155999;

	t97 = ((x421-(x422==x423))/x424);

	if (t97 != 32768) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x426 = 451;
	int16_t x427 = INT16_MIN;
	uint16_t x428 = 16680U;
	volatile int64_t t98 = 162719269744762LL;

	t98 = ((x425-(x426==x427))/x428);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x429 = 3;
	int64_t x430 = INT64_MIN;
	static int32_t x431 = INT32_MIN;
	uint8_t x432 = 21U;
	int32_t t99 = -403618;

	t99 = ((x429-(x430==x431))/x432);

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

