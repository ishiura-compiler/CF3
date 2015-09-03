#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x1 = 394U;
uint64_t x12 = 2420512174496LLU;
int32_t t2 = -123;
static volatile int32_t x22 = INT32_MAX;
int8_t x29 = -1;
uint64_t x32 = 364617930041LLU;
int64_t x38 = 599428LL;
int64_t t8 = 14769608512298957LL;
volatile uint32_t x42 = UINT32_MAX;
uint16_t x56 = 9590U;
int32_t t12 = -436;
volatile int8_t x59 = INT8_MAX;
int32_t t13 = -12530515;
static volatile uint16_t x61 = UINT16_MAX;
volatile uint64_t t14 = 427383LLU;
int8_t x65 = -25;
int32_t x67 = INT32_MIN;
uint64_t x69 = UINT64_MAX;
int8_t x78 = -1;
int32_t t18 = -8702;
int8_t x89 = INT8_MAX;
volatile int16_t x96 = INT16_MIN;
int8_t x98 = -1;
int32_t t21 = -5;
int16_t x105 = INT16_MIN;
static volatile int64_t x116 = -2987538979LL;
uint8_t x120 = UINT8_MAX;
int8_t x122 = INT8_MIN;
int64_t x138 = -694LL;
volatile uint8_t x142 = UINT8_MAX;
static int32_t x143 = INT32_MIN;
volatile uint64_t t31 = 2553816946832LLU;
uint64_t t32 = 620LLU;
uint16_t x149 = UINT16_MAX;
int64_t x150 = INT64_MIN;
volatile uint64_t t33 = 3801528222150923399LLU;
uint16_t x160 = UINT16_MAX;
int64_t x168 = INT64_MIN;
int64_t t37 = -1016017537738175265LL;
volatile int32_t x169 = INT32_MAX;
volatile uint64_t x171 = 46316LLU;
int32_t x172 = -432337912;
static volatile uint64_t t38 = 235003LLU;
int16_t x176 = INT16_MIN;
volatile uint64_t t41 = 26396072760805LLU;
uint32_t x187 = 41U;
uint32_t x191 = 65252520U;
int8_t x200 = -1;
static uint64_t x204 = UINT64_MAX;
static int64_t x211 = INT64_MIN;
static volatile uint8_t x213 = 7U;
uint8_t x216 = 22U;
volatile uint8_t x219 = 1U;
volatile int64_t x227 = -1LL;
volatile int64_t x229 = -250427036224306LL;
int16_t x230 = INT16_MIN;
int32_t x231 = INT32_MAX;
int16_t x235 = 3;
int16_t x245 = INT16_MIN;
int64_t x246 = 2730LL;
uint64_t t55 = 6301058498084LLU;
static volatile uint32_t x250 = 61736U;
uint16_t x253 = 2724U;
static volatile uint64_t t61 = 36637462357023643LLU;
uint32_t x273 = 3320U;
int8_t x274 = -1;
volatile uint32_t t62 = 516U;
volatile uint32_t x281 = 628201274U;
static int8_t x284 = INT8_MIN;
uint16_t x286 = 2031U;
int32_t x288 = -20;
int32_t t67 = -5979590;
static int32_t x301 = INT32_MAX;
static uint16_t x304 = UINT16_MAX;
static uint64_t t72 = 668LLU;
uint64_t x319 = UINT64_MAX;
volatile uint16_t x320 = 61U;
uint64_t t74 = 4843056223290LLU;
uint32_t x333 = 96006U;
static volatile uint16_t x338 = 7U;
int64_t t79 = -619071060081636LL;
int64_t x346 = 941720LL;
uint16_t x347 = 35U;
int16_t x349 = INT16_MIN;
int64_t x351 = INT64_MIN;
int32_t x352 = 6718;
volatile uint64_t t81 = 1LLU;
static uint16_t x361 = UINT16_MAX;
static uint64_t t84 = 1046975LLU;
uint16_t x365 = UINT16_MAX;
uint32_t x372 = 222534U;
uint32_t t86 = 2799895U;
int8_t x374 = INT8_MIN;
volatile int64_t t87 = 51LL;
int64_t t88 = 4368237345359LL;
volatile int64_t t91 = 296383LL;
int8_t x393 = -1;
uint16_t x394 = 7U;
uint8_t x408 = UINT8_MAX;
uint64_t t94 = 769620989880564450LLU;
volatile int32_t t95 = -25;
volatile uint16_t x416 = 18435U;
volatile int64_t t96 = 29906976011LL;
int64_t x417 = 0LL;
static int16_t x423 = INT16_MIN;
int64_t x424 = -1LL;
volatile int64_t t98 = -851573LL;
int64_t x426 = INT64_MIN;


void f0(void) {
	int32_t x2 = -5267279;
	static uint8_t x3 = 0U;
	static uint32_t x4 = UINT32_MAX;
	volatile uint32_t t0 = 5965890U;

	t0 = ((x1|x2)-(x3^x4));

	if (t0 != 4289700284U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x9 = INT8_MIN;
	static int16_t x10 = 323;
	int8_t x11 = -5;
	static uint64_t t1 = 135298894496979976LLU;

	t1 = ((x9|x10)-(x11^x12));

	if (t1 != 2420512174440LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x13 = INT8_MIN;
	int8_t x14 = -54;
	int16_t x15 = -2;
	int8_t x16 = -1;

	t2 = ((x13|x14)-(x15^x16));

	if (t2 != -55) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = 556U;
	int32_t x18 = 381;
	uint16_t x19 = UINT16_MAX;
	static volatile int64_t x20 = -1LL;
	volatile int64_t t3 = -6121315505833231LL;

	t3 = ((x17|x18)-(x19^x20));

	if (t3 != 66429LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int8_t x21 = 0;
	int64_t x23 = INT64_MAX;
	int16_t x24 = 4;
	static int64_t t4 = -49767LL;

	t4 = ((x21|x22)-(x23^x24));

	if (t4 != -9223372034707292156LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x25 = 846;
	volatile int64_t x26 = INT64_MIN;
	static volatile uint32_t x27 = 963U;
	uint64_t x28 = UINT64_MAX;
	uint64_t t5 = 1574111859338LLU;

	t5 = ((x25|x26)-(x27^x28));

	if (t5 != 9223372036854777618LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x30 = 8U;
	uint16_t x31 = 25515U;
	volatile uint64_t t6 = 64779205023842552LLU;

	t6 = ((x29|x30)-(x31^x32));

	if (t6 != 18446743709091596653LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x33 = 1342226U;
	int16_t x34 = INT16_MAX;
	int16_t x35 = -1;
	static int8_t x36 = INT8_MAX;
	uint32_t t7 = 2U;

	t7 = ((x33|x34)-(x35^x36));

	if (t7 != 1343615U) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = INT64_MIN;
	static int8_t x39 = INT8_MIN;
	static int16_t x40 = INT16_MAX;

	t8 = ((x37|x38)-(x39^x40));

	if (t8 != -9223372036854143739LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = 16;
	volatile int64_t x43 = -1LL;
	int16_t x44 = -5180;
	static int64_t t9 = -14430031056LL;

	t9 = ((x41|x42)-(x43^x44));

	if (t9 != 4294962116LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x45 = 0U;
	uint8_t x46 = 15U;
	int32_t x47 = INT32_MIN;
	volatile int16_t x48 = INT16_MIN;
	int32_t t10 = -893395360;

	t10 = ((x45|x46)-(x47^x48));

	if (t10 != -2147450865) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = INT64_MAX;
	static uint64_t x50 = 1045676773205127693LLU;
	int16_t x51 = -6063;
	int8_t x52 = INT8_MIN;
	uint64_t t11 = 8773116252469LLU;

	t11 = ((x49|x50)-(x51^x52));

	if (t11 != 9223372036854769710LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = 0;
	static int16_t x54 = INT16_MAX;
	int32_t x55 = INT32_MAX;

	t12 = ((x53|x54)-(x55^x56));

	if (t12 != -2147441290) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x57 = -47559;
	int32_t x58 = -1;
	volatile int16_t x60 = INT16_MIN;

	t13 = ((x57|x58)-(x59^x60));

	if (t13 != 32640) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x62 = -1;
	uint64_t x63 = 376737304016311LLU;
	uint32_t x64 = UINT32_MAX;

	t14 = ((x61|x62)-(x63^x64));

	if (t14 != 18446367340605863351LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x66 = UINT64_MAX;
	uint32_t x68 = UINT32_MAX;
	uint64_t t15 = 87518635670765892LLU;

	t15 = ((x65|x66)-(x67^x68));

	if (t15 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x70 = 21U;
	int16_t x71 = INT16_MIN;
	static volatile int16_t x72 = -1;
	static uint64_t t16 = 1305831927LLU;

	t16 = ((x69|x70)-(x71^x72));

	if (t16 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int8_t x77 = INT8_MIN;
	uint8_t x79 = UINT8_MAX;
	static uint64_t x80 = 179LLU;
	static volatile uint64_t t17 = 21390LLU;

	t17 = ((x77|x78)-(x79^x80));

	if (t17 != 18446744073709551539LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x85 = -1;
	static int32_t x86 = 581;
	int16_t x87 = -1;
	volatile int16_t x88 = INT16_MIN;

	t18 = ((x85|x86)-(x87^x88));

	if (t18 != -32768) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x90 = -35;
	static uint8_t x91 = 31U;
	static int8_t x92 = 36;
	static int32_t t19 = -1010779;

	t19 = ((x89|x90)-(x91^x92));

	if (t19 != -60) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x93 = UINT8_MAX;
	uint64_t x94 = 500220453LLU;
	uint32_t x95 = 15U;
	uint64_t t20 = 737855486785106752LLU;

	t20 = ((x93|x94)-(x95^x96));

	if (t20 != 18446744069914837744LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x97 = INT16_MIN;
	int32_t x99 = 49603955;
	uint16_t x100 = 736U;

	t21 = ((x97|x98)-(x99^x100));

	if (t21 != -49604500) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x106 = -374175123708LL;
	int8_t x107 = INT8_MIN;
	int8_t x108 = INT8_MAX;
	int64_t t22 = -31498992LL;

	t22 = ((x105|x106)-(x107^x108));

	if (t22 != -18683LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x109 = 58LL;
	int8_t x110 = 23;
	int8_t x111 = INT8_MIN;
	int8_t x112 = INT8_MAX;
	volatile int64_t t23 = 136027594015LL;

	t23 = ((x109|x110)-(x111^x112));

	if (t23 != 64LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x113 = INT64_MAX;
	volatile int16_t x114 = INT16_MIN;
	uint16_t x115 = UINT16_MAX;
	static int64_t t24 = 38058082163993LL;

	t24 = ((x113|x114)-(x115^x116));

	if (t24 != 2987574749LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x117 = INT32_MIN;
	static int64_t x118 = -1LL;
	volatile int8_t x119 = 1;
	volatile int64_t t25 = 273530970909LL;

	t25 = ((x117|x118)-(x119^x120));

	if (t25 != -255LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x121 = -8;
	volatile int8_t x123 = INT8_MIN;
	int8_t x124 = -1;
	volatile int32_t t26 = 4708;

	t26 = ((x121|x122)-(x123^x124));

	if (t26 != -135) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x125 = -1;
	static int8_t x126 = INT8_MAX;
	volatile uint32_t x127 = 244240242U;
	int8_t x128 = -1;
	volatile uint32_t t27 = 238022U;

	t27 = ((x125|x126)-(x127^x128));

	if (t27 != 244240242U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x129 = INT64_MAX;
	int64_t x130 = -1LL;
	volatile int16_t x131 = INT16_MIN;
	volatile int64_t x132 = INT64_MAX;
	int64_t t28 = 2831214589690528544LL;

	t28 = ((x129|x130)-(x131^x132));

	if (t28 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x133 = -1;
	int16_t x134 = INT16_MIN;
	static volatile uint32_t x135 = 17012975U;
	int64_t x136 = -1LL;
	static volatile int64_t t29 = -112451LL;

	t29 = ((x133|x134)-(x135^x136));

	if (t29 != 17012975LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x137 = UINT64_MAX;
	static volatile int64_t x139 = -1LL;
	int32_t x140 = -19;
	volatile uint64_t t30 = 312024LLU;

	t30 = ((x137|x138)-(x139^x140));

	if (t30 != 18446744073709551597LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x141 = 2890U;
	uint64_t x144 = UINT64_MAX;

	t31 = ((x141|x142)-(x143^x144));

	if (t31 != 18446744071562071040LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x145 = INT32_MIN;
	int32_t x146 = -87;
	uint64_t x147 = UINT64_MAX;
	int8_t x148 = INT8_MIN;

	t32 = ((x145|x146)-(x147^x148));

	if (t32 != 18446744073709551402LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x151 = 997U;
	uint64_t x152 = 1804248LLU;

	t33 = ((x149|x150)-(x151^x152));

	if (t33 != 9223372036853038018LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int64_t x153 = 1979754762267765803LL;
	int16_t x154 = INT16_MIN;
	int8_t x155 = INT8_MIN;
	int8_t x156 = INT8_MIN;
	volatile int64_t t34 = 548866105287324808LL;

	t34 = ((x153|x154)-(x155^x156));

	if (t34 != -21461LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint16_t x157 = UINT16_MAX;
	uint32_t x158 = 825032679U;
	volatile int16_t x159 = INT16_MIN;
	static volatile uint32_t t35 = 43U;

	t35 = ((x157|x158)-(x159^x160));

	if (t35 != 825065472U) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x161 = INT32_MIN;
	int32_t x162 = INT32_MAX;
	int32_t x163 = INT32_MIN;
	uint8_t x164 = UINT8_MAX;
	volatile int32_t t36 = -14432;

	t36 = ((x161|x162)-(x163^x164));

	if (t36 != 2147483392) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x165 = 11U;
	int32_t x166 = -9524682;
	static volatile int32_t x167 = INT32_MIN;

	t37 = ((x165|x166)-(x167^x168));

	if (t37 != -9223372034716816833LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x170 = 12;

	t38 = ((x169|x170)-(x171^x172));

	if (t38 != 2579777307LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x173 = 62264374401950125LLU;
	int8_t x174 = 0;
	int8_t x175 = INT8_MAX;
	static volatile uint64_t t39 = 852150447413917099LLU;

	t39 = ((x173|x174)-(x175^x176));

	if (t39 != 62264374401982766LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x177 = INT32_MIN;
	static int64_t x178 = -22388774296LL;
	int8_t x179 = INT8_MIN;
	volatile uint16_t x180 = 11U;
	volatile int64_t t40 = -5849583543741745LL;

	t40 = ((x177|x178)-(x179^x180));

	if (t40 != -913937699LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x181 = INT32_MIN;
	uint16_t x182 = UINT16_MAX;
	uint64_t x183 = 66137724LLU;
	int32_t x184 = 236;

	t41 = ((x181|x182)-(x183^x184));

	if (t41 != 18446744071495995759LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x185 = INT8_MIN;
	int64_t x186 = 33121490746LL;
	int8_t x188 = 15;
	static int64_t t42 = 628981761464984LL;

	t42 = ((x185|x186)-(x187^x188));

	if (t42 != -108LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x189 = 38100LLU;
	int16_t x190 = -1;
	int16_t x192 = INT16_MAX;
	uint64_t t43 = 33062454689558LLU;

	t43 = ((x189|x190)-(x191^x192));

	if (t43 != 18446744073644289192LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x193 = INT32_MIN;
	uint64_t x194 = 109465LLU;
	uint32_t x195 = UINT32_MAX;
	volatile uint16_t x196 = UINT16_MAX;
	uint64_t t44 = 2394744610LLU;

	t44 = ((x193|x194)-(x195^x196));

	if (t44 != 18446744067267275673LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x197 = INT32_MIN;
	volatile int64_t x198 = 10141221402131222LL;
	static int8_t x199 = INT8_MAX;
	static int64_t t45 = 63LL;

	t45 = ((x197|x198)-(x199^x200));

	if (t45 != -1690092650LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x201 = -1;
	volatile int16_t x202 = INT16_MIN;
	int16_t x203 = INT16_MIN;
	volatile uint64_t t46 = 62495443LLU;

	t46 = ((x201|x202)-(x203^x204));

	if (t46 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x205 = INT32_MIN;
	int64_t x206 = -1109579027058LL;
	volatile uint8_t x207 = UINT8_MAX;
	int32_t x208 = INT32_MIN;
	int64_t t47 = -4947LL;

	t47 = ((x205|x206)-(x207^x208));

	if (t47 != 670018703LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x209 = 1674663062046631296LLU;
	int16_t x210 = -1;
	int32_t x212 = -4;
	volatile uint64_t t48 = 525338216625566LLU;

	t48 = ((x209|x210)-(x211^x212));

	if (t48 != 9223372036854775811LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x214 = 6596234268662989LL;
	int32_t x215 = INT32_MAX;
	int64_t t49 = -1817387525004241060LL;

	t49 = ((x213|x214)-(x215^x216));

	if (t49 != 6596232121179366LL) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint64_t x217 = 2958979608LLU;
	int8_t x218 = 51;
	int32_t x220 = -1;
	volatile uint64_t t50 = 861LLU;

	t50 = ((x217|x218)-(x219^x220));

	if (t50 != 2958979645LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x225 = INT64_MIN;
	int16_t x226 = 119;
	volatile uint32_t x228 = UINT32_MAX;
	int64_t t51 = 3900772934770LL;

	t51 = ((x225|x226)-(x227^x228));

	if (t51 != -9223372032559808393LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x232 = -378;
	volatile int64_t t52 = 11665129LL;

	t52 = ((x229|x230)-(x231^x232));

	if (t52 != 2147464021LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x233 = 7969258LLU;
	static uint16_t x234 = 6252U;
	static int64_t x236 = INT64_MIN;
	static uint64_t t53 = 23908050580479LLU;

	t53 = ((x233|x234)-(x235^x236));

	if (t53 != 9223372036862745067LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x237 = INT16_MAX;
	int16_t x238 = -13;
	uint64_t x239 = UINT64_MAX;
	int16_t x240 = 1;
	uint64_t t54 = 945317310LLU;

	t54 = ((x237|x238)-(x239^x240));

	if (t54 != 1LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint64_t x247 = 1100786477159662LLU;
	int32_t x248 = -38398072;

	t55 = ((x245|x246)-(x247^x248));

	if (t55 != 1100786439800644LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int64_t x249 = INT64_MAX;
	uint32_t x251 = 2761013U;
	uint16_t x252 = 15791U;
	int64_t t56 = 973519516LL;

	t56 = ((x249|x250)-(x251^x252));

	if (t56 != 9223372036852015973LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x254 = 4341572114470172058LL;
	int64_t x255 = INT64_MAX;
	uint32_t x256 = 29U;
	volatile int64_t t57 = 9443165LL;

	t57 = ((x253|x254)-(x255^x256));

	if (t57 != -4881799922384601124LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x257 = -1;
	int64_t x258 = INT64_MIN;
	int64_t x259 = INT64_MAX;
	uint64_t x260 = 35367848333105LLU;
	volatile uint64_t t58 = 3979011168309565LLU;

	t58 = ((x257|x258)-(x259^x260));

	if (t58 != 9223407404703108913LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x261 = UINT8_MAX;
	uint8_t x262 = UINT8_MAX;
	uint64_t x263 = 925149LLU;
	int64_t x264 = 11720142413918LL;
	uint64_t t59 = 7953532600318113LLU;

	t59 = ((x261|x262)-(x263^x264));

	if (t59 != 18446732353567785852LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x265 = 1248U;
	int8_t x266 = -1;
	uint64_t x267 = 29332472699686505LLU;
	static int64_t x268 = 2384934LL;
	volatile uint64_t t60 = 323970865424LLU;

	t60 = ((x265|x266)-(x267^x268));

	if (t60 != 18417411601012200880LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x269 = 1094024091556LLU;
	static volatile int16_t x270 = INT16_MAX;
	int8_t x271 = INT8_MAX;
	int32_t x272 = 6;

	t61 = ((x269|x270)-(x271^x272));

	if (t61 != 1094024101766LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x275 = 31;
	static uint32_t x276 = UINT32_MAX;

	t62 = ((x273|x274)-(x275^x276));

	if (t62 != 31U) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x277 = 73U;
	volatile uint32_t x278 = 0U;
	volatile uint32_t x279 = 1U;
	int8_t x280 = INT8_MAX;
	volatile uint32_t t63 = 4535U;

	t63 = ((x277|x278)-(x279^x280));

	if (t63 != 4294967243U) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x282 = 3U;
	int8_t x283 = INT8_MIN;
	static uint32_t t64 = 99597573U;

	t64 = ((x281|x282)-(x283^x284));

	if (t64 != 628201275U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x285 = 0U;
	uint16_t x287 = UINT16_MAX;
	int32_t t65 = 5;

	t65 = ((x285|x286)-(x287^x288));

	if (t65 != 67548) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x289 = 7549U;
	uint64_t x290 = 8966346753043174917LLU;
	int64_t x291 = INT64_MIN;
	volatile uint8_t x292 = UINT8_MAX;
	static volatile uint64_t t66 = 1650LLU;

	t66 = ((x289|x290)-(x291^x292));

	if (t66 != 18189718789897952894LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x293 = 43426;
	int8_t x294 = INT8_MAX;
	int8_t x295 = 29;
	static uint16_t x296 = UINT16_MAX;

	t67 = ((x293|x294)-(x295^x296));

	if (t67 != -21987) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x297 = UINT16_MAX;
	int8_t x298 = 0;
	uint16_t x299 = 1U;
	uint8_t x300 = 1U;
	int32_t t68 = -2543;

	t68 = ((x297|x298)-(x299^x300));

	if (t68 != 65535) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x302 = UINT64_MAX;
	int16_t x303 = INT16_MIN;
	uint64_t t69 = 3LLU;

	t69 = ((x301|x302)-(x303^x304));

	if (t69 != 32768LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x305 = UINT8_MAX;
	int8_t x306 = -1;
	int16_t x307 = -1;
	int8_t x308 = INT8_MIN;
	int32_t t70 = 22871;

	t70 = ((x305|x306)-(x307^x308));

	if (t70 != -128) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x309 = UINT32_MAX;
	int16_t x310 = INT16_MIN;
	int32_t x311 = 863176;
	static uint16_t x312 = 54U;
	volatile uint32_t t71 = 56713U;

	t71 = ((x309|x310)-(x311^x312));

	if (t71 != 4294104065U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x313 = INT32_MIN;
	uint32_t x314 = 251312341U;
	uint64_t x315 = 255LLU;
	int16_t x316 = 1;

	t72 = ((x313|x314)-(x315^x316));

	if (t72 != 2398795735LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x317 = 3361739084160603534LL;
	static volatile int64_t x318 = INT64_MAX;
	volatile uint64_t t73 = 4200617548236911LLU;

	t73 = ((x317|x318)-(x319^x320));

	if (t73 != 9223372036854775869LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x321 = -106LL;
	uint64_t x322 = 94607261667LLU;
	volatile int16_t x323 = -48;
	volatile int32_t x324 = INT32_MIN;

	t74 = ((x321|x322)-(x323^x324));

	if (t74 != 18446744071562068007LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x325 = INT8_MIN;
	static volatile uint8_t x326 = UINT8_MAX;
	int8_t x327 = -1;
	uint8_t x328 = 26U;
	volatile int32_t t75 = 1596654;

	t75 = ((x325|x326)-(x327^x328));

	if (t75 != 26) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x329 = INT32_MAX;
	volatile int32_t x330 = 1;
	int64_t x331 = 16075LL;
	volatile int64_t x332 = INT64_MAX;
	volatile int64_t t76 = 212217489708658653LL;

	t76 = ((x329|x330)-(x331^x332));

	if (t76 != -9223372034707276085LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x334 = 3501U;
	int16_t x335 = 1;
	static int16_t x336 = 42;
	static uint32_t t77 = 3457280U;

	t77 = ((x333|x334)-(x335^x336));

	if (t77 != 98180U) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x337 = -1;
	uint64_t x339 = UINT64_MAX;
	int64_t x340 = 58LL;
	volatile uint64_t t78 = 1254895LLU;

	t78 = ((x337|x338)-(x339^x340));

	if (t78 != 58LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int16_t x341 = -1;
	int64_t x342 = INT64_MIN;
	int16_t x343 = INT16_MIN;
	int16_t x344 = INT16_MIN;

	t79 = ((x341|x342)-(x343^x344));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x345 = INT8_MIN;
	uint64_t x348 = 15812280379LLU;
	volatile uint64_t t80 = 7453232419LLU;

	t80 = ((x345|x346)-(x347^x348));

	if (t80 != 18446744057897271168LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x350 = UINT64_MAX;

	t81 = ((x349|x350)-(x351^x352));

	if (t81 != 9223372036854769089LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x353 = INT64_MAX;
	volatile int32_t x354 = -224265;
	int16_t x355 = -3652;
	volatile int8_t x356 = INT8_MIN;
	int64_t t82 = -119682LL;

	t82 = ((x353|x354)-(x355^x356));

	if (t82 != -3645LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x357 = INT8_MAX;
	static uint16_t x358 = 543U;
	volatile int8_t x359 = -27;
	static uint16_t x360 = 33U;
	volatile int32_t t83 = -7076;

	t83 = ((x357|x358)-(x359^x360));

	if (t83 != 699) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x362 = 5963932974546026477LLU;
	int64_t x363 = INT64_MIN;
	uint8_t x364 = 3U;

	t84 = ((x361|x362)-(x363^x364));

	if (t84 != 15187305011400802300LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x366 = INT8_MIN;
	int64_t x367 = INT64_MAX;
	int16_t x368 = INT16_MIN;
	int64_t t85 = -16784058512255028LL;

	t85 = ((x365|x366)-(x367^x368));

	if (t85 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x369 = -2;
	int16_t x370 = INT16_MIN;
	int16_t x371 = 2;

	t86 = ((x369|x370)-(x371^x372));

	if (t86 != 4294744762U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x373 = -2749236;
	volatile int16_t x375 = INT16_MIN;
	volatile int64_t x376 = INT64_MIN;

	t87 = ((x373|x374)-(x375^x376));

	if (t87 != -9223372036854743092LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x377 = INT16_MIN;
	uint8_t x378 = UINT8_MAX;
	volatile int64_t x379 = -123LL;
	int64_t x380 = -1LL;

	t88 = ((x377|x378)-(x379^x380));

	if (t88 != -32635LL) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int64_t x381 = 10339LL;
	uint64_t x382 = 3379683LLU;
	int8_t x383 = INT8_MIN;
	uint32_t x384 = UINT32_MAX;
	volatile uint64_t t89 = 1628447949691475759LLU;

	t89 = ((x381|x382)-(x383^x384));

	if (t89 != 3389796LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x385 = INT64_MIN;
	static int16_t x386 = 489;
	uint64_t x387 = 7105408LLU;
	uint32_t x388 = 461352602U;
	static uint64_t t90 = 430417278279LLU;

	t90 = ((x385|x386)-(x387^x388));

	if (t90 != 9223372036400495823LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x389 = 1664038923875LL;
	uint32_t x390 = 39U;
	uint16_t x391 = 1U;
	uint8_t x392 = 2U;

	t91 = ((x389|x390)-(x391^x392));

	if (t91 != 1664038923876LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x395 = INT64_MIN;
	int16_t x396 = INT16_MIN;
	int64_t t92 = 154048LL;

	t92 = ((x393|x394)-(x395^x396));

	if (t92 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x397 = 0U;
	static uint64_t x398 = 3516169341LLU;
	volatile uint64_t x399 = UINT64_MAX;
	volatile uint32_t x400 = UINT32_MAX;
	volatile uint64_t t93 = 120623LLU;

	t93 = ((x397|x398)-(x399^x400));

	if (t93 != 7811136637LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x405 = INT16_MAX;
	uint64_t x406 = 13LLU;
	int16_t x407 = INT16_MIN;

	t94 = ((x405|x406)-(x407^x408));

	if (t94 != 65280LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x409 = 2U;
	int8_t x410 = INT8_MAX;
	static uint8_t x411 = 58U;
	int16_t x412 = -1;

	t95 = ((x409|x410)-(x411^x412));

	if (t95 != 186) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x413 = INT64_MIN;
	int32_t x414 = INT32_MAX;
	static int16_t x415 = INT16_MIN;

	t96 = ((x413|x414)-(x415^x416));

	if (t96 != -9223372034707277828LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x418 = INT16_MAX;
	int64_t x419 = INT64_MIN;
	int32_t x420 = INT32_MAX;
	int64_t t97 = -380210406734LL;

	t97 = ((x417|x418)-(x419^x420));

	if (t97 != 9223372034707324928LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x421 = INT16_MIN;
	uint8_t x422 = UINT8_MAX;

	t98 = ((x421|x422)-(x423^x424));

	if (t98 != -65280LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x425 = INT32_MIN;
	static uint64_t x427 = 7LLU;
	volatile int16_t x428 = 1;
	static uint64_t t99 = 16794572497450LLU;

	t99 = ((x425|x426)-(x427^x428));

	if (t99 != 18446744071562067962LLU) { NG(); } else { ; }
	
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

