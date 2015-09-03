#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t t0 = 5LL;
uint16_t x7 = 17433U;
uint16_t x9 = 56U;
uint64_t x10 = UINT64_MAX;
int8_t x11 = INT8_MAX;
volatile int32_t x12 = 575;
static int16_t x14 = INT16_MAX;
uint64_t x17 = 3544LLU;
volatile int32_t t5 = -226;
uint8_t x28 = 1U;
int16_t x32 = INT16_MIN;
int64_t x33 = INT64_MAX;
static int64_t x34 = INT64_MIN;
volatile int32_t x37 = -1;
volatile int16_t x41 = 6259;
static uint32_t x43 = 5014U;
int8_t x57 = -50;
int16_t x59 = INT16_MIN;
int32_t t14 = 98705;
static int8_t x69 = 0;
volatile uint32_t t17 = 1015565U;
int8_t x81 = INT8_MAX;
int64_t x82 = -1LL;
uint32_t x83 = 609300031U;
static int8_t x84 = INT8_MAX;
volatile uint16_t x85 = 0U;
int64_t x88 = 656905392346762224LL;
int64_t t21 = 22784LL;
static int32_t x89 = -6;
static uint32_t x93 = 180U;
uint16_t x95 = 11U;
uint64_t x104 = UINT64_MAX;
volatile int8_t x111 = INT8_MIN;
int16_t x114 = INT16_MAX;
volatile int8_t x115 = INT8_MIN;
int8_t x122 = 1;
int8_t x128 = 2;
volatile int32_t t31 = -3509;
uint32_t x131 = 8U;
int64_t x142 = -1LL;
static int16_t x143 = -118;
volatile int16_t x146 = INT16_MAX;
int32_t x147 = INT32_MAX;
int64_t x149 = -1LL;
int8_t x152 = INT8_MIN;
volatile int32_t t38 = -8719;
static int64_t x158 = 1179116LL;
int32_t t42 = 23078;
static int8_t x176 = -1;
int16_t x180 = INT16_MAX;
static volatile int64_t x187 = INT64_MAX;
volatile int16_t x192 = INT16_MIN;
int8_t x205 = INT8_MIN;
uint32_t x208 = UINT32_MAX;
static uint64_t x213 = 882LLU;
int32_t x221 = -1;
uint64_t x224 = UINT64_MAX;
uint64_t t55 = UINT64_MAX;
static int16_t x235 = INT16_MIN;
int16_t x237 = INT16_MIN;
int8_t x238 = INT8_MIN;
int8_t x244 = INT8_MAX;
uint32_t x249 = UINT32_MAX;
int8_t x252 = 12;
static volatile int64_t x255 = INT64_MAX;
volatile int32_t t64 = -3030;
volatile int8_t x264 = INT8_MAX;
volatile int64_t x267 = 8167369031058940LL;
int32_t x278 = INT32_MIN;
static volatile int32_t t68 = -232381;
int16_t x288 = INT16_MIN;
uint64_t x290 = 772193887747098853LLU;
static volatile int8_t x292 = -1;
volatile int8_t x297 = -1;
volatile uint8_t x301 = 0U;
int64_t x302 = INT64_MIN;
int64_t x318 = -3596470685785LL;
int64_t x323 = INT64_MIN;
int64_t x328 = -2241534067686160LL;
int64_t t79 = 179371392910824079LL;
int32_t t80 = -38;
int64_t x336 = 6726770808240LL;
int32_t x337 = INT32_MIN;
uint16_t x339 = UINT16_MAX;
volatile int16_t x341 = INT16_MIN;
static volatile int32_t t83 = -717;
static volatile int32_t t84 = -2820;
volatile uint64_t t85 = 22602LLU;
int16_t x356 = INT16_MIN;
volatile uint64_t x359 = 78549LLU;
int32_t x366 = INT32_MIN;
static int32_t x367 = INT32_MIN;
static uint8_t x372 = UINT8_MAX;
volatile int8_t x379 = -1;
int8_t x384 = 42;
volatile int32_t x385 = INT32_MIN;
uint8_t x389 = 64U;
volatile int16_t x390 = INT16_MAX;
int16_t x391 = -1227;
int16_t x392 = -234;
int32_t x394 = -7881;
int16_t x395 = -1;
static volatile int32_t t96 = -2;
int32_t x398 = -168614067;
int8_t x400 = INT8_MIN;
volatile int32_t t99 = INT32_MIN;


void f0(void) {
	int32_t x1 = -1;
	static volatile uint16_t x2 = 116U;
	uint32_t x3 = UINT32_MAX;
	volatile int64_t x4 = INT64_MIN;

	t0 = (x1+((x2==x3)/x4));

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	int64_t x6 = INT64_MAX;
	uint16_t x8 = UINT16_MAX;
	int64_t t1 = 6494312955760197LL;

	t1 = (x5+((x6==x7)/x8));

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t t2 = 728273;

	t2 = (x9+((x10==x11)/x12));

	if (t2 != 56) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	volatile int16_t x15 = 15;
	int16_t x16 = INT16_MIN;
	static volatile int32_t t3 = 4007875;

	t3 = (x13+((x14==x15)/x16));

	if (t3 != -32768) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x18 = INT32_MAX;
	volatile int32_t x19 = INT32_MIN;
	int8_t x20 = -21;
	volatile uint64_t t4 = 105723469103413469LLU;

	t4 = (x17+((x18==x19)/x20));

	if (t4 != 3544LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -1;
	volatile uint16_t x22 = 196U;
	static int64_t x23 = 319118243157833LL;
	int8_t x24 = -1;

	t5 = (x21+((x22==x23)/x24));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	uint32_t x26 = 238446353U;
	int64_t x27 = INT64_MAX;
	volatile int32_t t6 = INT32_MIN;

	t6 = (x25+((x26==x27)/x28));

	if (t6 != INT32_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -1;
	int32_t x30 = -57;
	int32_t x31 = INT32_MIN;
	static int32_t t7 = 15;

	t7 = (x29+((x30==x31)/x32));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x35 = INT8_MIN;
	static int64_t x36 = INT64_MIN;
	int64_t t8 = INT64_MAX;

	t8 = (x33+((x34==x35)/x36));

	if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x38 = -48188076508LL;
	int32_t x39 = INT32_MIN;
	uint16_t x40 = 7367U;
	volatile int32_t t9 = -114;

	t9 = (x37+((x38==x39)/x40));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x42 = INT16_MAX;
	uint32_t x44 = 581586U;
	uint32_t t10 = 236U;

	t10 = (x41+((x42==x43)/x44));

	if (t10 != 6259U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = 317;
	int32_t x46 = INT32_MAX;
	int8_t x47 = -1;
	uint8_t x48 = 24U;
	volatile int32_t t11 = 6530;

	t11 = (x45+((x46==x47)/x48));

	if (t11 != 317) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = 47744;
	volatile uint16_t x50 = UINT16_MAX;
	int32_t x51 = INT32_MIN;
	int8_t x52 = -2;
	volatile int32_t t12 = -14644209;

	t12 = (x49+((x50==x51)/x52));

	if (t12 != 47744) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = 21195235U;
	static volatile int16_t x54 = -748;
	int8_t x55 = INT8_MIN;
	volatile int32_t x56 = -253594;
	uint32_t t13 = 20960929U;

	t13 = (x53+((x54==x55)/x56));

	if (t13 != 21195235U) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x58 = INT32_MAX;
	volatile int16_t x60 = 1;

	t14 = (x57+((x58==x59)/x60));

	if (t14 != -50) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 0U;
	volatile int16_t x62 = -1;
	int16_t x63 = 7;
	uint16_t x64 = UINT16_MAX;
	volatile int32_t t15 = -89448020;

	t15 = (x61+((x62==x63)/x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = 109524076223LLU;
	uint32_t x66 = 11U;
	uint8_t x67 = UINT8_MAX;
	int64_t x68 = INT64_MIN;
	volatile uint64_t t16 = 109257502LLU;

	t16 = (x65+((x66==x67)/x68));

	if (t16 != 109524076223LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x70 = INT32_MAX;
	volatile uint32_t x71 = 3U;
	uint32_t x72 = 6557U;

	t17 = (x69+((x70==x71)/x72));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x73 = -1;
	static volatile int16_t x74 = INT16_MAX;
	static volatile int64_t x75 = INT64_MAX;
	uint32_t x76 = UINT32_MAX;
	volatile uint32_t t18 = UINT32_MAX;

	t18 = (x73+((x74==x75)/x76));

	if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x77 = UINT32_MAX;
	uint64_t x78 = 1LLU;
	int8_t x79 = INT8_MAX;
	int32_t x80 = INT32_MIN;
	volatile uint32_t t19 = UINT32_MAX;

	t19 = (x77+((x78==x79)/x80));

	if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t t20 = -15;

	t20 = (x81+((x82==x83)/x84));

	if (t20 != 127) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x86 = INT32_MIN;
	int64_t x87 = 4244577020410592LL;

	t21 = (x85+((x86==x87)/x88));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x90 = -130731;
	static uint8_t x91 = UINT8_MAX;
	uint8_t x92 = UINT8_MAX;
	volatile int32_t t22 = -32;

	t22 = (x89+((x90==x91)/x92));

	if (t22 != -6) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x94 = 3U;
	static volatile int16_t x96 = INT16_MIN;
	static volatile uint32_t t23 = 17897223U;

	t23 = (x93+((x94==x95)/x96));

	if (t23 != 180U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MIN;
	int8_t x98 = INT8_MIN;
	int64_t x99 = INT64_MAX;
	volatile int8_t x100 = INT8_MIN;
	volatile int32_t t24 = 2754;

	t24 = (x97+((x98==x99)/x100));

	if (t24 != -128) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = 5U;
	static int16_t x102 = INT16_MAX;
	static int64_t x103 = -1LL;
	uint64_t t25 = 64801791329211LLU;

	t25 = (x101+((x102==x103)/x104));

	if (t25 != 5LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = -1;
	int8_t x106 = INT8_MIN;
	int16_t x107 = INT16_MIN;
	static int16_t x108 = INT16_MIN;
	int32_t t26 = 126386;

	t26 = (x105+((x106==x107)/x108));

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = 4029U;
	static int64_t x110 = INT64_MIN;
	static int16_t x112 = 1;
	volatile uint32_t t27 = 32U;

	t27 = (x109+((x110==x111)/x112));

	if (t27 != 4029U) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = 46004LLU;
	static volatile int8_t x116 = INT8_MIN;
	volatile uint64_t t28 = 962002311534LLU;

	t28 = (x113+((x114==x115)/x116));

	if (t28 != 46004LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x117 = INT32_MIN;
	int16_t x118 = 22;
	int16_t x119 = -1;
	int16_t x120 = INT16_MIN;
	int32_t t29 = INT32_MIN;

	t29 = (x117+((x118==x119)/x120));

	if (t29 != INT32_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x121 = -1LL;
	uint16_t x123 = 7259U;
	int8_t x124 = 29;
	static volatile int64_t t30 = -8405079751LL;

	t30 = (x121+((x122==x123)/x124));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = -29;
	static uint32_t x126 = 10675308U;
	volatile int32_t x127 = INT32_MIN;

	t31 = (x125+((x126==x127)/x128));

	if (t31 != -29) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x129 = 2U;
	static int32_t x130 = INT32_MIN;
	uint64_t x132 = 166349683LLU;
	static uint64_t t32 = 5202176780334LLU;

	t32 = (x129+((x130==x131)/x132));

	if (t32 != 2LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = 393691367248294767LLU;
	int16_t x134 = -1;
	volatile int8_t x135 = -2;
	int32_t x136 = INT32_MIN;
	uint64_t t33 = 19008LLU;

	t33 = (x133+((x134==x135)/x136));

	if (t33 != 393691367248294767LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = INT16_MIN;
	int8_t x138 = -21;
	int8_t x139 = 5;
	uint8_t x140 = 14U;
	int32_t t34 = 8631;

	t34 = (x137+((x138==x139)/x140));

	if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x141 = 642LLU;
	uint16_t x144 = 746U;
	volatile uint64_t t35 = 22531143LLU;

	t35 = (x141+((x142==x143)/x144));

	if (t35 != 642LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = 10U;
	int64_t x148 = INT64_MAX;
	static int64_t t36 = -642253933166132539LL;

	t36 = (x145+((x146==x147)/x148));

	if (t36 != 10LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x150 = INT8_MIN;
	static int32_t x151 = INT32_MIN;
	int64_t t37 = -455LL;

	t37 = (x149+((x150==x151)/x152));

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = -1;
	int16_t x154 = -1469;
	int16_t x155 = INT16_MIN;
	volatile uint16_t x156 = 82U;

	t38 = (x153+((x154==x155)/x156));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x157 = INT16_MIN;
	int8_t x159 = 0;
	static uint32_t x160 = 3625U;
	volatile uint32_t t39 = 450982450U;

	t39 = (x157+((x158==x159)/x160));

	if (t39 != 4294934528U) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x161 = 10LL;
	int64_t x162 = INT64_MAX;
	int64_t x163 = INT64_MAX;
	static int64_t x164 = INT64_MAX;
	int64_t t40 = -171553376LL;

	t40 = (x161+((x162==x163)/x164));

	if (t40 != 10LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = -1LL;
	volatile int8_t x166 = -1;
	int32_t x167 = -1;
	volatile int32_t x168 = -1;
	volatile int64_t t41 = 4234448758540LL;

	t41 = (x165+((x166==x167)/x168));

	if (t41 != -2LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = 0U;
	static volatile int16_t x170 = -1;
	int8_t x171 = INT8_MAX;
	volatile uint8_t x172 = 2U;

	t42 = (x169+((x170==x171)/x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MIN;
	static int8_t x174 = -1;
	static int32_t x175 = INT32_MIN;
	static int32_t t43 = 15845;

	t43 = (x173+((x174==x175)/x176));

	if (t43 != -32768) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = -372513145;
	int8_t x178 = -1;
	uint8_t x179 = 15U;
	static int32_t t44 = 0;

	t44 = (x177+((x178==x179)/x180));

	if (t44 != -372513145) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = 3820560;
	int8_t x182 = INT8_MAX;
	volatile uint64_t x183 = 88332173968087593LLU;
	volatile int64_t x184 = INT64_MAX;
	volatile int64_t t45 = 2793050201307566LL;

	t45 = (x181+((x182==x183)/x184));

	if (t45 != 3820560LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x185 = -1;
	int32_t x186 = -1;
	int16_t x188 = 3895;
	int32_t t46 = -1014991;

	t46 = (x185+((x186==x187)/x188));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x189 = INT16_MIN;
	int8_t x190 = 18;
	volatile int32_t x191 = -1;
	int32_t t47 = 252654328;

	t47 = (x189+((x190==x191)/x192));

	if (t47 != -32768) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x193 = INT16_MIN;
	uint8_t x194 = 0U;
	int8_t x195 = INT8_MIN;
	uint16_t x196 = 6U;
	int32_t t48 = -33203536;

	t48 = (x193+((x194==x195)/x196));

	if (t48 != -32768) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = 13124826122175199LLU;
	int64_t x198 = INT64_MAX;
	static int8_t x199 = 1;
	int16_t x200 = 7;
	static uint64_t t49 = 1LLU;

	t49 = (x197+((x198==x199)/x200));

	if (t49 != 13124826122175199LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = -1;
	int32_t x202 = INT32_MAX;
	int64_t x203 = 2060936027885LL;
	static int64_t x204 = INT64_MIN;
	int64_t t50 = 1802951684591581107LL;

	t50 = (x201+((x202==x203)/x204));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x206 = 6604256862213644465LLU;
	volatile int64_t x207 = INT64_MAX;
	uint32_t t51 = 16481567U;

	t51 = (x205+((x206==x207)/x208));

	if (t51 != 4294967168U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x209 = -1;
	uint8_t x210 = 74U;
	int64_t x211 = -1LL;
	int32_t x212 = INT32_MIN;
	int32_t t52 = -8949;

	t52 = (x209+((x210==x211)/x212));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x214 = INT64_MIN;
	int64_t x215 = -1111086704LL;
	uint64_t x216 = UINT64_MAX;
	volatile uint64_t t53 = 0LLU;

	t53 = (x213+((x214==x215)/x216));

	if (t53 != 882LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MIN;
	uint64_t x218 = 3LLU;
	int32_t x219 = INT32_MAX;
	static int16_t x220 = INT16_MIN;
	int32_t t54 = INT32_MIN;

	t54 = (x217+((x218==x219)/x220));

	if (t54 != INT32_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x222 = 7LL;
	uint32_t x223 = 10U;

	t55 = (x221+((x222==x223)/x224));

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int32_t x225 = -483;
	static uint16_t x226 = 47U;
	int64_t x227 = INT64_MAX;
	volatile int32_t x228 = INT32_MAX;
	static volatile int32_t t56 = -65;

	t56 = (x225+((x226==x227)/x228));

	if (t56 != -483) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x229 = UINT16_MAX;
	static uint8_t x230 = UINT8_MAX;
	int16_t x231 = 8912;
	volatile int32_t x232 = -116530398;
	volatile int32_t t57 = -1799416;

	t57 = (x229+((x230==x231)/x232));

	if (t57 != 65535) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x233 = UINT8_MAX;
	uint8_t x234 = 1U;
	int16_t x236 = -1;
	volatile int32_t t58 = 3;

	t58 = (x233+((x234==x235)/x236));

	if (t58 != 255) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x239 = -2523048730688LL;
	int32_t x240 = -6212;
	static volatile int32_t t59 = -124024481;

	t59 = (x237+((x238==x239)/x240));

	if (t59 != -32768) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x241 = -3;
	int32_t x242 = INT32_MIN;
	int16_t x243 = INT16_MIN;
	int32_t t60 = 8970465;

	t60 = (x241+((x242==x243)/x244));

	if (t60 != -3) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = INT64_MIN;
	uint16_t x246 = UINT16_MAX;
	volatile int16_t x247 = INT16_MAX;
	static int8_t x248 = INT8_MAX;
	int64_t t61 = INT64_MIN;

	t61 = (x245+((x246==x247)/x248));

	if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x250 = 145U;
	uint32_t x251 = 6U;
	static uint32_t t62 = UINT32_MAX;

	t62 = (x249+((x250==x251)/x252));

	if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = -1;
	int8_t x254 = 1;
	int16_t x256 = INT16_MIN;
	volatile int32_t t63 = 1263;

	t63 = (x253+((x254==x255)/x256));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x257 = 200U;
	volatile int32_t x258 = 201;
	volatile int8_t x259 = -1;
	int16_t x260 = -13;

	t64 = (x257+((x258==x259)/x260));

	if (t64 != 200) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x261 = 4U;
	int64_t x262 = INT64_MAX;
	static uint32_t x263 = 66737681U;
	static volatile int32_t t65 = -65421063;

	t65 = (x261+((x262==x263)/x264));

	if (t65 != 4) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = 665212874167LLU;
	volatile int64_t x266 = 478193770287995745LL;
	int16_t x268 = -31;
	volatile uint64_t t66 = 5983517970855147LLU;

	t66 = (x265+((x266==x267)/x268));

	if (t66 != 665212874167LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x273 = -1LL;
	uint32_t x274 = 11623U;
	static uint32_t x275 = 99799U;
	volatile int32_t x276 = -1;
	static int64_t t67 = 3LL;

	t67 = (x273+((x274==x275)/x276));

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x277 = INT8_MAX;
	int32_t x279 = -1;
	volatile int16_t x280 = INT16_MAX;

	t68 = (x277+((x278==x279)/x280));

	if (t68 != 127) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int8_t x281 = INT8_MIN;
	static int64_t x282 = -1LL;
	int64_t x283 = 358989LL;
	uint8_t x284 = 14U;
	static volatile int32_t t69 = 668;

	t69 = (x281+((x282==x283)/x284));

	if (t69 != -128) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int8_t x285 = -1;
	uint64_t x286 = 531928154611LLU;
	int8_t x287 = -1;
	volatile int32_t t70 = 185257893;

	t70 = (x285+((x286==x287)/x288));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x289 = -42;
	uint64_t x291 = 0LLU;
	volatile int32_t t71 = 1752;

	t71 = (x289+((x290==x291)/x292));

	if (t71 != -42) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x293 = INT64_MIN;
	uint8_t x294 = UINT8_MAX;
	uint32_t x295 = UINT32_MAX;
	int64_t x296 = INT64_MAX;
	volatile int64_t t72 = INT64_MIN;

	t72 = (x293+((x294==x295)/x296));

	if (t72 != INT64_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x298 = 19;
	uint32_t x299 = UINT32_MAX;
	uint32_t x300 = UINT32_MAX;
	uint32_t t73 = UINT32_MAX;

	t73 = (x297+((x298==x299)/x300));

	if (t73 != UINT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x303 = INT32_MIN;
	int64_t x304 = INT64_MIN;
	volatile int64_t t74 = -1859LL;

	t74 = (x301+((x302==x303)/x304));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x305 = 12682184LLU;
	static int16_t x306 = INT16_MAX;
	uint8_t x307 = 2U;
	static int16_t x308 = INT16_MIN;
	volatile uint64_t t75 = 13117939611LLU;

	t75 = (x305+((x306==x307)/x308));

	if (t75 != 12682184LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x309 = INT64_MIN;
	uint32_t x310 = 9786618U;
	int64_t x311 = -1LL;
	volatile int64_t x312 = -1LL;
	volatile int64_t t76 = INT64_MIN;

	t76 = (x309+((x310==x311)/x312));

	if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x317 = -20376074056LL;
	static int64_t x319 = -2LL;
	static volatile int8_t x320 = INT8_MIN;
	static volatile int64_t t77 = -85447LL;

	t77 = (x317+((x318==x319)/x320));

	if (t77 != -20376074056LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x321 = INT64_MIN;
	volatile int16_t x322 = INT16_MIN;
	int32_t x324 = INT32_MIN;
	int64_t t78 = INT64_MIN;

	t78 = (x321+((x322==x323)/x324));

	if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x325 = 687LL;
	volatile uint32_t x326 = UINT32_MAX;
	int16_t x327 = INT16_MIN;

	t79 = (x325+((x326==x327)/x328));

	if (t79 != 687LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x329 = INT16_MAX;
	int64_t x330 = 2557996156652LL;
	volatile int64_t x331 = INT64_MAX;
	int16_t x332 = INT16_MIN;

	t80 = (x329+((x330==x331)/x332));

	if (t80 != 32767) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x333 = -1;
	int8_t x334 = 0;
	int8_t x335 = INT8_MIN;
	static volatile int64_t t81 = 490817922251320LL;

	t81 = (x333+((x334==x335)/x336));

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x338 = UINT16_MAX;
	uint32_t x340 = 10351U;
	volatile uint32_t t82 = 8U;

	t82 = (x337+((x338==x339)/x340));

	if (t82 != 2147483648U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x342 = 8U;
	uint16_t x343 = 4U;
	volatile int32_t x344 = INT32_MAX;

	t83 = (x341+((x342==x343)/x344));

	if (t83 != -32768) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x345 = 74;
	volatile int8_t x346 = INT8_MIN;
	int8_t x347 = INT8_MIN;
	uint16_t x348 = 8856U;

	t84 = (x345+((x346==x347)/x348));

	if (t84 != 74) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x349 = 1314173147LLU;
	int16_t x350 = INT16_MIN;
	int32_t x351 = INT32_MIN;
	uint8_t x352 = UINT8_MAX;

	t85 = (x349+((x350==x351)/x352));

	if (t85 != 1314173147LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x353 = INT8_MAX;
	uint64_t x354 = 6746970663LLU;
	int32_t x355 = INT32_MIN;
	int32_t t86 = 0;

	t86 = (x353+((x354==x355)/x356));

	if (t86 != 127) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x357 = INT8_MAX;
	static volatile int8_t x358 = INT8_MAX;
	int16_t x360 = -1;
	int32_t t87 = 657424;

	t87 = (x357+((x358==x359)/x360));

	if (t87 != 127) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x361 = 1;
	static uint8_t x362 = UINT8_MAX;
	int16_t x363 = INT16_MAX;
	int32_t x364 = INT32_MIN;
	static int32_t t88 = -6;

	t88 = (x361+((x362==x363)/x364));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x365 = 29016755544105939LL;
	static int8_t x368 = 2;
	int64_t t89 = 34897406226620760LL;

	t89 = (x365+((x366==x367)/x368));

	if (t89 != 29016755544105939LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x369 = INT32_MIN;
	uint32_t x370 = 775190U;
	uint8_t x371 = UINT8_MAX;
	int32_t t90 = INT32_MIN;

	t90 = (x369+((x370==x371)/x372));

	if (t90 != INT32_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x373 = INT32_MIN;
	volatile int32_t x374 = INT32_MAX;
	static int8_t x375 = INT8_MIN;
	static int64_t x376 = INT64_MIN;
	volatile int64_t t91 = -210742LL;

	t91 = (x373+((x374==x375)/x376));

	if (t91 != -2147483648LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x377 = 14337142;
	static uint64_t x378 = 54329822LLU;
	static int64_t x380 = -13068492771243687LL;
	int64_t t92 = -5747250LL;

	t92 = (x377+((x378==x379)/x380));

	if (t92 != 14337142LL) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int32_t x381 = INT32_MIN;
	int8_t x382 = INT8_MIN;
	int32_t x383 = -18308135;
	int32_t t93 = INT32_MIN;

	t93 = (x381+((x382==x383)/x384));

	if (t93 != INT32_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x386 = -1LL;
	uint32_t x387 = 177U;
	int64_t x388 = -36867156222247LL;
	volatile int64_t t94 = -8432720LL;

	t94 = (x385+((x386==x387)/x388));

	if (t94 != -2147483648LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t t95 = -12;

	t95 = (x389+((x390==x391)/x392));

	if (t95 != 64) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x393 = 0;
	static int8_t x396 = INT8_MIN;

	t96 = (x393+((x394==x395)/x396));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x397 = 6U;
	static volatile uint64_t x399 = 519LLU;
	volatile int32_t t97 = -25196238;

	t97 = (x397+((x398==x399)/x400));

	if (t97 != 6) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x401 = INT32_MIN;
	static int16_t x402 = 399;
	static int64_t x403 = -1LL;
	uint16_t x404 = 2921U;
	volatile int32_t t98 = INT32_MIN;

	t98 = (x401+((x402==x403)/x404));

	if (t98 != INT32_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x405 = INT32_MIN;
	volatile uint32_t x406 = 48887U;
	int32_t x407 = INT32_MAX;
	int32_t x408 = INT32_MIN;

	t99 = (x405+((x406==x407)/x408));

	if (t99 != INT32_MIN) { NG(); } else { ; }
	
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

