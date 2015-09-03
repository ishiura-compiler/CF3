#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x9 = INT16_MIN;
volatile uint32_t t4 = 6788886U;
volatile int32_t x26 = -578675;
int32_t x30 = 212159296;
static volatile uint64_t t6 = 518544LLU;
static uint8_t x37 = 0U;
int8_t x38 = INT8_MIN;
volatile int64_t x41 = INT64_MIN;
int64_t t9 = INT64_MIN;
int64_t t11 = -66682944LL;
volatile int8_t x61 = INT8_MAX;
uint32_t x63 = 30315U;
static volatile uint32_t t13 = 1559991351U;
volatile uint16_t x68 = UINT16_MAX;
int64_t t14 = 423LL;
int8_t x76 = INT8_MAX;
uint64_t t17 = 179251811092702431LLU;
volatile uint64_t t18 = UINT64_MAX;
uint64_t x85 = 4422421LLU;
static volatile uint8_t x89 = 34U;
int16_t x94 = INT16_MIN;
int64_t x95 = -2067744LL;
static uint16_t x101 = UINT16_MAX;
int16_t x104 = INT16_MIN;
uint32_t x109 = 7U;
uint32_t x124 = 58U;
uint64_t x125 = UINT64_MAX;
int8_t x127 = INT8_MIN;
int64_t x129 = INT64_MIN;
static volatile uint32_t x133 = 76509U;
uint8_t x137 = UINT8_MAX;
uint16_t x157 = UINT16_MAX;
static int64_t x160 = INT64_MIN;
int8_t x165 = -1;
volatile int32_t t39 = -1686;
int8_t x179 = 1;
static volatile int8_t x183 = INT8_MIN;
uint64_t t41 = UINT64_MAX;
int16_t x187 = INT16_MIN;
volatile int32_t t42 = 101818;
uint16_t x197 = 127U;
int8_t x198 = INT8_MIN;
int8_t x201 = INT8_MIN;
static uint64_t x209 = UINT64_MAX;
static int64_t x217 = -1LL;
int8_t x223 = INT8_MIN;
int64_t t51 = 5667LL;
int16_t x227 = INT16_MAX;
volatile int64_t x228 = INT64_MAX;
volatile int64_t t52 = -605141960251990126LL;
volatile int64_t t54 = INT64_MIN;
int16_t x242 = -1;
volatile int32_t x245 = 713154;
static int8_t x248 = -3;
uint64_t t59 = UINT64_MAX;
uint8_t x260 = 1U;
int32_t x261 = 102;
int32_t x272 = -1;
volatile uint64_t x276 = 116396673321LLU;
uint64_t x277 = 3928LLU;
int32_t x279 = INT32_MAX;
volatile int64_t x280 = -164LL;
static int8_t x282 = INT8_MIN;
uint64_t x283 = 2998LLU;
int32_t x287 = INT32_MIN;
uint32_t x288 = UINT32_MAX;
uint16_t x299 = 0U;
uint64_t t70 = UINT64_MAX;
int8_t x301 = INT8_MIN;
int16_t x309 = -1302;
int64_t x313 = INT64_MIN;
uint64_t x316 = UINT64_MAX;
static volatile uint64_t t74 = 8369LLU;
uint16_t x320 = 161U;
int8_t x321 = -1;
int8_t x323 = INT8_MIN;
int16_t x326 = -1;
int8_t x327 = INT8_MIN;
int16_t x329 = 1;
volatile int32_t t78 = 1;
volatile int32_t x339 = INT32_MIN;
volatile uint32_t x340 = 192099U;
uint8_t x341 = UINT8_MAX;
int32_t x345 = 6;
volatile int64_t t82 = -974957958109LL;
uint32_t t84 = 2155525U;
int32_t x357 = INT32_MIN;
uint8_t x360 = UINT8_MAX;
volatile uint32_t t86 = UINT32_MAX;
int64_t x370 = INT64_MIN;
int8_t x374 = INT8_MAX;
uint64_t x384 = 2665310199569LLU;
uint64_t x393 = 6236092256LLU;
int16_t x394 = INT16_MIN;
int16_t x408 = 416;
int16_t x420 = INT16_MIN;
volatile int64_t t99 = 691954423LL;


void f0(void) {
	int16_t x1 = INT16_MIN;
	static int64_t x2 = INT64_MIN;
	static int16_t x3 = INT16_MIN;
	static int16_t x4 = INT16_MIN;
	static volatile int64_t t0 = -184LL;

	t0 = (x1|((x2&x3)/x4));

	if (t0 != -32768LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	int16_t x6 = INT16_MAX;
	uint32_t x7 = 288219304U;
	volatile int64_t x8 = INT64_MAX;
	int64_t t1 = -15839778545LL;

	t1 = (x5|((x6&x7)/x8));

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x10 = 4U;
	int64_t x11 = 241305576873LL;
	int16_t x12 = INT16_MIN;
	static volatile int64_t t2 = 51LL;

	t2 = (x9|((x10&x11)/x12));

	if (t2 != -32768LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	uint8_t x14 = 7U;
	volatile int8_t x15 = 11;
	int32_t x16 = INT32_MAX;
	int64_t t3 = INT64_MIN;

	t3 = (x13|((x14&x15)/x16));

	if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x21 = INT16_MAX;
	uint8_t x22 = 0U;
	int32_t x23 = -8;
	uint32_t x24 = UINT32_MAX;

	t4 = (x21|((x22&x23)/x24));

	if (t4 != 32767U) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x25 = 86704136832790LLU;
	static int8_t x27 = INT8_MIN;
	int64_t x28 = -7LL;
	uint64_t t5 = 422621374101649307LLU;

	t5 = (x25|((x26&x27)/x28));

	if (t5 != 86704136898559LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x29 = INT8_MIN;
	uint64_t x31 = 11279761385281452LLU;
	volatile int16_t x32 = -1;

	t6 = (x29|((x30&x31)/x32));

	if (t6 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x33 = 377355326576LLU;
	int64_t x34 = INT64_MAX;
	volatile uint32_t x35 = 387939U;
	int8_t x36 = INT8_MIN;
	uint64_t t7 = 5959LLU;

	t7 = (x33|((x34&x35)/x36));

	if (t7 != 18446744073709548666LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x39 = 120U;
	static int8_t x40 = -1;
	volatile uint32_t t8 = 374U;

	t8 = (x37|((x38&x39)/x40));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x42 = 0U;
	int64_t x43 = -178539450693612LL;
	int8_t x44 = INT8_MIN;

	t9 = (x41|((x42&x43)/x44));

	if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = INT8_MAX;
	int8_t x46 = -1;
	volatile uint32_t x47 = UINT32_MAX;
	uint16_t x48 = UINT16_MAX;
	static volatile uint32_t t10 = 3514334U;

	t10 = (x45|((x46&x47)/x48));

	if (t10 != 65663U) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x53 = -257582337854449LL;
	static int64_t x54 = INT64_MIN;
	int16_t x55 = 11;
	uint16_t x56 = 7429U;

	t11 = (x53|((x54&x55)/x56));

	if (t11 != -257582337854449LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x57 = INT64_MAX;
	volatile uint64_t x58 = UINT64_MAX;
	int16_t x59 = -5603;
	static volatile int32_t x60 = -10624837;
	uint64_t t12 = 529796028591046410LLU;

	t12 = (x57|((x58&x59)/x60));

	if (t12 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x62 = UINT32_MAX;
	static volatile uint8_t x64 = UINT8_MAX;

	t13 = (x61|((x62&x63)/x64));

	if (t13 != 127U) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x65 = 0;
	int8_t x66 = INT8_MAX;
	int64_t x67 = 30466739145597656LL;

	t14 = (x65|((x66&x67)/x68));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x69 = 15527U;
	int16_t x70 = -10;
	volatile int64_t x71 = INT64_MAX;
	volatile uint16_t x72 = 5295U;
	volatile int64_t t15 = -2950884576LL;

	t15 = (x69|((x70&x71)/x72));

	if (t15 != 1741902178827711LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x73 = 9249U;
	static int64_t x74 = INT64_MIN;
	int64_t x75 = INT64_MIN;
	int64_t t16 = 249181344267LL;

	t16 = (x73|((x74&x75)/x76));

	if (t16 != -72624976668147841LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x77 = 914U;
	uint64_t x78 = UINT64_MAX;
	int32_t x79 = -2490150;
	static int16_t x80 = INT16_MIN;

	t17 = (x77|((x78&x79)/x80));

	if (t17 != 914LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x81 = UINT64_MAX;
	int32_t x82 = -1340091;
	volatile int16_t x83 = INT16_MAX;
	int32_t x84 = INT32_MIN;

	t18 = (x81|((x82&x83)/x84));

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x86 = INT64_MAX;
	volatile int64_t x87 = INT64_MIN;
	int64_t x88 = INT64_MAX;
	static volatile uint64_t t19 = 11LLU;

	t19 = (x85|((x86&x87)/x88));

	if (t19 != 4422421LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint16_t x90 = UINT16_MAX;
	int64_t x91 = INT64_MIN;
	uint16_t x92 = 2147U;
	static int64_t t20 = -2082322708LL;

	t20 = (x89|((x90&x91)/x92));

	if (t20 != 34LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x93 = INT64_MAX;
	static volatile int8_t x96 = INT8_MIN;
	static int64_t t21 = INT64_MAX;

	t21 = (x93|((x94&x95)/x96));

	if (t21 != INT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x102 = -28945114186365734LL;
	uint32_t x103 = 2200852U;
	static volatile int64_t t22 = 227596038042LL;

	t22 = (x101|((x102&x103)/x104));

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x110 = INT32_MAX;
	uint32_t x111 = 335U;
	int8_t x112 = INT8_MIN;
	volatile uint32_t t23 = 148773U;

	t23 = (x109|((x110&x111)/x112));

	if (t23 != 7U) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x113 = 2;
	static int64_t x114 = -1032951901669153229LL;
	volatile int16_t x115 = INT16_MIN;
	uint32_t x116 = UINT32_MAX;
	static volatile int64_t t24 = 82459171LL;

	t24 = (x113|((x114&x115)/x116));

	if (t24 != -240502854LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x117 = INT64_MAX;
	volatile int16_t x118 = INT16_MIN;
	int16_t x119 = INT16_MAX;
	uint16_t x120 = 114U;
	volatile int64_t t25 = INT64_MAX;

	t25 = (x117|((x118&x119)/x120));

	if (t25 != INT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x121 = 374;
	int8_t x122 = -56;
	uint32_t x123 = 187U;
	static uint32_t t26 = 1644673U;

	t26 = (x121|((x122&x123)/x124));

	if (t26 != 374U) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint64_t x126 = 13537555488738347LLU;
	volatile uint32_t x128 = 6958258U;
	volatile uint64_t t27 = UINT64_MAX;

	t27 = (x125|((x126&x127)/x128));

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x130 = INT32_MIN;
	int32_t x131 = INT32_MIN;
	uint64_t x132 = 310886584750667LLU;
	volatile uint64_t t28 = 19318177855289657LLU;

	t28 = (x129|((x130&x131)/x132));

	if (t28 != 9223372036854835143LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x134 = INT16_MAX;
	uint8_t x135 = 28U;
	uint16_t x136 = UINT16_MAX;
	static uint32_t t29 = 13132U;

	t29 = (x133|((x134&x135)/x136));

	if (t29 != 76509U) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x138 = 4318825808LLU;
	static volatile int32_t x139 = -543625966;
	uint16_t x140 = 188U;
	volatile uint64_t t30 = 166745452246847LLU;

	t30 = (x137|((x138&x139)/x140));

	if (t30 != 22937855LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x141 = 1;
	volatile int16_t x142 = INT16_MIN;
	int16_t x143 = -12305;
	uint64_t x144 = UINT64_MAX;
	volatile uint64_t t31 = 219584046246LLU;

	t31 = (x141|((x142&x143)/x144));

	if (t31 != 1LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x145 = 0U;
	int64_t x146 = -1LL;
	int32_t x147 = INT32_MIN;
	static uint8_t x148 = UINT8_MAX;
	static volatile int64_t t32 = -885606376915184LL;

	t32 = (x145|((x146&x147)/x148));

	if (t32 != -8421504LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x149 = -16;
	uint16_t x150 = UINT16_MAX;
	int64_t x151 = -1LL;
	int64_t x152 = INT64_MAX;
	volatile int64_t t33 = 13994613720363LL;

	t33 = (x149|((x150&x151)/x152));

	if (t33 != -16LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x153 = -1;
	uint16_t x154 = UINT16_MAX;
	int8_t x155 = INT8_MIN;
	int32_t x156 = INT32_MIN;
	volatile int32_t t34 = -9;

	t34 = (x153|((x154&x155)/x156));

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x158 = 293525077;
	uint32_t x159 = UINT32_MAX;
	int64_t t35 = -82799729114921LL;

	t35 = (x157|((x158&x159)/x160));

	if (t35 != 65535LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x161 = INT32_MIN;
	int64_t x162 = INT64_MIN;
	int64_t x163 = INT64_MAX;
	static uint32_t x164 = UINT32_MAX;
	int64_t t36 = 538471506005757232LL;

	t36 = (x161|((x162&x163)/x164));

	if (t36 != -2147483648LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x166 = -3;
	static int8_t x167 = 11;
	int8_t x168 = INT8_MIN;
	int32_t t37 = 51835;

	t37 = (x165|((x166&x167)/x168));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x169 = INT16_MIN;
	static int32_t x170 = -1;
	uint16_t x171 = 1U;
	static int16_t x172 = -408;
	volatile int32_t t38 = 5362639;

	t38 = (x169|((x170&x171)/x172));

	if (t38 != -32768) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x173 = INT16_MIN;
	static int16_t x174 = 8;
	int8_t x175 = INT8_MAX;
	int8_t x176 = -1;

	t39 = (x173|((x174&x175)/x176));

	if (t39 != -8) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x177 = UINT16_MAX;
	int32_t x178 = INT32_MIN;
	uint16_t x180 = 24891U;
	volatile int32_t t40 = -1408098;

	t40 = (x177|((x178&x179)/x180));

	if (t40 != 65535) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x181 = UINT64_MAX;
	volatile int8_t x182 = INT8_MIN;
	int8_t x184 = -1;

	t41 = (x181|((x182&x183)/x184));

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x185 = UINT8_MAX;
	volatile int16_t x186 = -5949;
	static uint16_t x188 = 30812U;

	t42 = (x185|((x186&x187)/x188));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x189 = INT64_MIN;
	int64_t x190 = -1LL;
	int64_t x191 = INT64_MIN;
	int64_t x192 = INT64_MIN;
	int64_t t43 = -26690LL;

	t43 = (x189|((x190&x191)/x192));

	if (t43 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x193 = 35U;
	uint32_t x194 = UINT32_MAX;
	uint8_t x195 = 110U;
	uint8_t x196 = 10U;
	volatile uint32_t t44 = 770089U;

	t44 = (x193|((x194&x195)/x196));

	if (t44 != 43U) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x199 = 90U;
	volatile int8_t x200 = INT8_MAX;
	volatile int32_t t45 = 7435130;

	t45 = (x197|((x198&x199)/x200));

	if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x202 = INT16_MAX;
	int16_t x203 = 3;
	uint64_t x204 = 1659470501755371LLU;
	volatile uint64_t t46 = 15048500837332LLU;

	t46 = (x201|((x202&x203)/x204));

	if (t46 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x205 = UINT16_MAX;
	static int64_t x206 = -1LL;
	volatile int8_t x207 = -1;
	int32_t x208 = INT32_MAX;
	static volatile int64_t t47 = -2394LL;

	t47 = (x205|((x206&x207)/x208));

	if (t47 != 65535LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x210 = UINT64_MAX;
	int32_t x211 = INT32_MIN;
	int32_t x212 = -2925;
	uint64_t t48 = UINT64_MAX;

	t48 = (x209|((x210&x211)/x212));

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x213 = INT8_MIN;
	int16_t x214 = -1;
	int16_t x215 = -182;
	uint32_t x216 = 26U;
	static uint32_t t49 = 1550011U;

	t49 = (x213|((x214&x215)/x216));

	if (t49 != 4294967170U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x218 = 163098814403LL;
	int16_t x219 = INT16_MAX;
	static int64_t x220 = -1LL;
	int64_t t50 = 253075224163LL;

	t50 = (x217|((x218&x219)/x220));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x221 = 2034064;
	volatile int64_t x222 = 407951208922LL;
	int32_t x224 = INT32_MAX;

	t51 = (x221|((x222&x223)/x224));

	if (t51 != 2034109LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x225 = -1LL;
	int16_t x226 = 6;

	t52 = (x225|((x226&x227)/x228));

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x229 = UINT32_MAX;
	uint8_t x230 = 12U;
	int8_t x231 = INT8_MAX;
	volatile int16_t x232 = INT16_MAX;
	uint32_t t53 = UINT32_MAX;

	t53 = (x229|((x230&x231)/x232));

	if (t53 != UINT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x233 = INT64_MIN;
	int64_t x234 = INT64_MIN;
	uint32_t x235 = 10917U;
	int16_t x236 = INT16_MIN;

	t54 = (x233|((x234&x235)/x236));

	if (t54 != INT64_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x237 = -59083420;
	uint32_t x238 = 131373953U;
	int64_t x239 = -36942412721903LL;
	volatile uint8_t x240 = UINT8_MAX;
	static volatile int64_t t55 = -980045941958568LL;

	t55 = (x237|((x238&x239)/x240));

	if (t55 != -58786450LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x241 = INT32_MIN;
	int16_t x243 = INT16_MIN;
	volatile int32_t x244 = 342194;
	volatile int32_t t56 = INT32_MIN;

	t56 = (x241|((x242&x243)/x244));

	if (t56 != INT32_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x246 = -1;
	static uint64_t x247 = UINT64_MAX;
	volatile uint64_t t57 = 105316178188LLU;

	t57 = (x245|((x246&x247)/x248));

	if (t57 != 713155LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x249 = INT16_MAX;
	int16_t x250 = -738;
	static int16_t x251 = INT16_MIN;
	int16_t x252 = INT16_MAX;
	int32_t t58 = -1;

	t58 = (x249|((x250&x251)/x252));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x253 = -1;
	uint64_t x254 = UINT64_MAX;
	volatile int32_t x255 = INT32_MIN;
	int8_t x256 = INT8_MAX;

	t59 = (x253|((x254&x255)/x256));

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x257 = UINT64_MAX;
	static int16_t x258 = INT16_MIN;
	static volatile int8_t x259 = INT8_MIN;
	uint64_t t60 = UINT64_MAX;

	t60 = (x257|((x258&x259)/x260));

	if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x262 = INT16_MIN;
	int64_t x263 = 21606877184974256LL;
	int64_t x264 = -1LL;
	int64_t t61 = -727943623538992LL;

	t61 = (x261|((x262&x263)/x264));

	if (t61 != -21606877184950170LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x265 = UINT16_MAX;
	int8_t x266 = INT8_MIN;
	int64_t x267 = INT64_MIN;
	uint64_t x268 = 1118803558LLU;
	uint64_t t62 = 2859133LLU;

	t62 = (x265|((x266&x267)/x268));

	if (t62 != 8243970047LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x269 = 10;
	uint16_t x270 = 154U;
	static int64_t x271 = INT64_MAX;
	int64_t t63 = 8574LL;

	t63 = (x269|((x270&x271)/x272));

	if (t63 != -146LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x273 = 130LL;
	static uint32_t x274 = 312811U;
	int8_t x275 = 18;
	uint64_t t64 = 85653721627087LLU;

	t64 = (x273|((x274&x275)/x276));

	if (t64 != 130LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x278 = INT64_MIN;
	volatile uint64_t t65 = 39LLU;

	t65 = (x277|((x278&x279)/x280));

	if (t65 != 3928LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x281 = INT16_MIN;
	uint32_t x284 = 1U;
	volatile uint64_t t66 = 822016106942LLU;

	t66 = (x281|((x282&x283)/x284));

	if (t66 != 18446744073709521792LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x285 = UINT64_MAX;
	int16_t x286 = -1;
	uint64_t t67 = UINT64_MAX;

	t67 = (x285|((x286&x287)/x288));

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x289 = -1LL;
	static int16_t x290 = INT16_MAX;
	int16_t x291 = INT16_MIN;
	volatile int16_t x292 = -1;
	volatile int64_t t68 = -37327795902402LL;

	t68 = (x289|((x290&x291)/x292));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x293 = UINT64_MAX;
	int64_t x294 = -19531077LL;
	int64_t x295 = -1LL;
	volatile uint32_t x296 = 1557U;
	static volatile uint64_t t69 = UINT64_MAX;

	t69 = (x293|((x294&x295)/x296));

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x297 = UINT64_MAX;
	int16_t x298 = 897;
	static int8_t x300 = -1;

	t70 = (x297|((x298&x299)/x300));

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x302 = -1;
	int16_t x303 = INT16_MAX;
	uint16_t x304 = UINT16_MAX;
	volatile int32_t t71 = -260;

	t71 = (x301|((x302&x303)/x304));

	if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x305 = 232399561425LLU;
	int16_t x306 = -1;
	volatile uint64_t x307 = 25185955469791475LLU;
	static uint16_t x308 = UINT16_MAX;
	static volatile uint64_t t72 = 105770770465643526LLU;

	t72 = (x305|((x306&x307)/x308));

	if (t72 != 547588928499LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint8_t x310 = 18U;
	static int32_t x311 = 0;
	uint64_t x312 = 18LLU;
	uint64_t t73 = 22317541LLU;

	t73 = (x309|((x310&x311)/x312));

	if (t73 != 18446744073709550314LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x314 = -5910;
	int32_t x315 = 343208230;

	t74 = (x313|((x314&x315)/x316));

	if (t74 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x317 = -120;
	static volatile int64_t x318 = -1LL;
	uint32_t x319 = 8107U;
	static int64_t t75 = 190337LL;

	t75 = (x317|((x318&x319)/x320));

	if (t75 != -70LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x322 = 2707767470572LLU;
	uint64_t x324 = UINT64_MAX;
	volatile uint64_t t76 = UINT64_MAX;

	t76 = (x321|((x322&x323)/x324));

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x325 = -11;
	static volatile uint32_t x328 = 23566U;
	volatile uint32_t t77 = 220274679U;

	t77 = (x325|((x326&x327)/x328));

	if (t77 != 4294967293U) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x330 = 1U;
	volatile uint16_t x331 = UINT16_MAX;
	static uint16_t x332 = 1414U;

	t78 = (x329|((x330&x331)/x332));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x333 = -1;
	int16_t x334 = INT16_MIN;
	int8_t x335 = INT8_MIN;
	int64_t x336 = INT64_MAX;
	int64_t t79 = -1317351247638LL;

	t79 = (x333|((x334&x335)/x336));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x337 = INT16_MIN;
	volatile int64_t x338 = 46889755132664LL;
	int64_t t80 = 61LL;

	t80 = (x337|((x338&x339)/x340));

	if (t80 != -5532LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x342 = -3292393744186936714LL;
	int64_t x343 = -1LL;
	int8_t x344 = INT8_MIN;
	volatile int64_t t81 = -3LL;

	t81 = (x341|((x342&x343)/x344));

	if (t81 != 25721826126460671LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x346 = -1;
	static int64_t x347 = INT64_MIN;
	int16_t x348 = INT16_MAX;

	t82 = (x345|((x346&x347)/x348));

	if (t82 != -281483566907394LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x349 = 345U;
	int64_t x350 = INT64_MIN;
	static uint16_t x351 = 888U;
	volatile uint64_t x352 = 10656149736723LLU;
	volatile uint64_t t83 = 16721799048089031LLU;

	t83 = (x349|((x350&x351)/x352));

	if (t83 != 345LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x353 = 200799774;
	uint32_t x354 = UINT32_MAX;
	static int8_t x355 = INT8_MAX;
	int8_t x356 = 31;

	t84 = (x353|((x354&x355)/x356));

	if (t84 != 200799774U) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int16_t x358 = 8184;
	int64_t x359 = -1LL;
	int64_t t85 = 62650753995LL;

	t85 = (x357|((x358&x359)/x360));

	if (t85 != -2147483616LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x361 = UINT32_MAX;
	static int16_t x362 = 57;
	static int32_t x363 = INT32_MAX;
	uint16_t x364 = 753U;

	t86 = (x361|((x362&x363)/x364));

	if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x365 = INT32_MIN;
	int16_t x366 = INT16_MAX;
	static volatile int8_t x367 = -26;
	int64_t x368 = INT64_MAX;
	volatile int64_t t87 = -166734120312922747LL;

	t87 = (x365|((x366&x367)/x368));

	if (t87 != -2147483648LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x369 = INT16_MAX;
	int16_t x371 = INT16_MAX;
	int32_t x372 = -1;
	volatile int64_t t88 = -6LL;

	t88 = (x369|((x370&x371)/x372));

	if (t88 != 32767LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x373 = UINT64_MAX;
	uint32_t x375 = UINT32_MAX;
	int32_t x376 = INT32_MAX;
	static volatile uint64_t t89 = UINT64_MAX;

	t89 = (x373|((x374&x375)/x376));

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x381 = 14;
	volatile int32_t x382 = -1;
	static int64_t x383 = INT64_MIN;
	volatile uint64_t t90 = 31455LLU;

	t90 = (x381|((x382&x383)/x384));

	if (t90 != 3460526LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x385 = INT32_MIN;
	volatile uint16_t x386 = 11U;
	int16_t x387 = -1;
	volatile int64_t x388 = -1LL;
	int64_t t91 = 7994224150954LL;

	t91 = (x385|((x386&x387)/x388));

	if (t91 != -11LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x389 = 42U;
	int8_t x390 = -2;
	int8_t x391 = INT8_MIN;
	static uint8_t x392 = 1U;
	static volatile int32_t t92 = 61;

	t92 = (x389|((x390&x391)/x392));

	if (t92 != -86) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x395 = 110175152U;
	int32_t x396 = 4;
	static volatile uint64_t t93 = 47197LLU;

	t93 = (x393|((x394&x395)/x396));

	if (t93 != 6236370784LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x397 = 0LL;
	uint32_t x398 = UINT32_MAX;
	uint8_t x399 = 10U;
	int8_t x400 = -1;
	static int64_t t94 = -235986123949LL;

	t94 = (x397|((x398&x399)/x400));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x401 = 5631U;
	int16_t x402 = INT16_MIN;
	volatile int32_t x403 = 11999169;
	static int32_t x404 = INT32_MAX;
	static int32_t t95 = -13;

	t95 = (x401|((x402&x403)/x404));

	if (t95 != 5631) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x405 = INT8_MIN;
	uint16_t x406 = 1183U;
	int16_t x407 = INT16_MIN;
	volatile int32_t t96 = 91;

	t96 = (x405|((x406&x407)/x408));

	if (t96 != -128) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x409 = -61;
	int16_t x410 = -1;
	volatile int8_t x411 = -1;
	volatile int64_t x412 = INT64_MIN;
	int64_t t97 = 354094573447367LL;

	t97 = (x409|((x410&x411)/x412));

	if (t97 != -61LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x413 = 179;
	static uint16_t x414 = 1710U;
	static volatile int8_t x415 = INT8_MIN;
	static volatile uint8_t x416 = 7U;
	volatile int32_t t98 = -25892;

	t98 = (x413|((x414&x415)/x416));

	if (t98 != 255) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x417 = INT16_MIN;
	int16_t x418 = -3549;
	int64_t x419 = INT64_MAX;

	t99 = (x417|((x418&x419)/x420));

	if (t99 != -32767LL) { NG(); } else { ; }
	
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

