#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x1 = UINT64_MAX;
static int64_t x6 = -10702LL;
volatile int64_t x8 = INT64_MAX;
uint8_t x9 = UINT8_MAX;
int64_t x14 = INT64_MIN;
uint8_t x15 = 14U;
static volatile int64_t x16 = -914377LL;
uint32_t x19 = UINT32_MAX;
static uint16_t x24 = 36U;
volatile int32_t x25 = 2904883;
int16_t x33 = INT16_MIN;
static int8_t x45 = -1;
uint64_t x46 = 1345LLU;
volatile int64_t x48 = INT64_MAX;
volatile int32_t x53 = INT32_MAX;
uint64_t x56 = 2652916421334586LLU;
volatile uint64_t x66 = UINT64_MAX;
int32_t x72 = -968754454;
volatile int64_t t18 = 12346208LL;
int8_t x83 = -1;
static int16_t x96 = INT16_MIN;
uint32_t x97 = 1908U;
int16_t x101 = INT16_MAX;
volatile int8_t x103 = INT8_MAX;
uint32_t x106 = UINT32_MAX;
uint32_t x110 = 171790U;
int64_t x112 = INT64_MIN;
int8_t x117 = INT8_MIN;
volatile int8_t x120 = -24;
uint16_t x128 = 181U;
volatile int64_t t32 = 711606732LL;
volatile int64_t x134 = -1LL;
int16_t x141 = -1;
static uint32_t x144 = 2314977U;
static int64_t t35 = 205825528702095LL;
uint32_t x149 = UINT32_MAX;
uint8_t x151 = UINT8_MAX;
volatile uint64_t t37 = 7512570LLU;
int8_t x154 = INT8_MIN;
uint16_t x162 = 6785U;
uint32_t t42 = 22151391U;
volatile int8_t x177 = -3;
static uint16_t x182 = 29U;
int32_t t44 = 78;
uint16_t x193 = 260U;
static uint32_t x194 = UINT32_MAX;
uint16_t x199 = 2U;
int32_t x204 = -1;
volatile int16_t x213 = INT16_MIN;
static volatile uint64_t t52 = 2689548281252449LLU;
int16_t x218 = INT16_MIN;
int64_t x221 = INT64_MIN;
volatile int64_t x226 = 35192LL;
int64_t t55 = -72005800994711LL;
static uint8_t x231 = 1U;
volatile uint64_t t56 = 3LLU;
uint8_t x234 = 9U;
int8_t x241 = INT8_MIN;
volatile int16_t x250 = -5187;
uint8_t x257 = UINT8_MAX;
volatile uint32_t t64 = 4182649U;
volatile int32_t t65 = 601853191;
volatile int8_t x274 = 0;
uint16_t x282 = 0U;
uint64_t t68 = 7LLU;
volatile uint8_t x288 = UINT8_MAX;
static int8_t x291 = INT8_MIN;
uint64_t t72 = 631862593700845LLU;
uint32_t x304 = UINT32_MAX;
int64_t x308 = -1LL;
int64_t x312 = INT64_MIN;
uint64_t x313 = UINT64_MAX;
volatile int8_t x315 = -1;
uint8_t x317 = 27U;
volatile uint16_t x319 = 1579U;
volatile int8_t x321 = -1;
static int64_t x323 = -2046LL;
int8_t x324 = -1;
volatile int64_t t78 = 13469445265073468LL;
uint8_t x326 = UINT8_MAX;
int32_t t80 = -31203;
static int8_t x334 = INT8_MIN;
volatile uint64_t t82 = 2605032LLU;
uint64_t x349 = UINT64_MAX;
uint64_t x352 = 11756429567076861LLU;
static int8_t x354 = INT8_MAX;
int16_t x355 = INT16_MIN;
static int32_t t86 = 3;
uint16_t x371 = 3757U;
volatile int32_t t92 = INT32_MIN;
int32_t x407 = -1;
static volatile int64_t t99 = -848420251LL;


void f0(void) {
	int16_t x2 = INT16_MIN;
	uint32_t x3 = 220028197U;
	static volatile int64_t x4 = 61883137113LL;
	uint64_t t0 = UINT64_MAX;

	t0 = (x1|((x2&x3)%x4));

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MAX;
	static volatile int8_t x7 = 34;
	int64_t t1 = INT64_MAX;

	t1 = (x5|((x6&x7)%x8));

	if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = INT8_MIN;
	int8_t x11 = INT8_MIN;
	static int8_t x12 = -20;
	volatile int32_t t2 = 3741;

	t2 = (x9|((x10&x11)%x12));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x13 = UINT16_MAX;
	int64_t t3 = -183210412714LL;

	t3 = (x13|((x14&x15)%x16));

	if (t3 != 65535LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 290U;
	int16_t x18 = 0;
	static uint8_t x20 = 6U;
	volatile uint32_t t4 = 5957078U;

	t4 = (x17|((x18&x19)%x20));

	if (t4 != 290U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = 15371;
	volatile int8_t x22 = INT8_MAX;
	int64_t x23 = -1LL;
	int64_t t5 = 21116552765LL;

	t5 = (x21|((x22&x23)%x24));

	if (t5 != 15387LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x26 = UINT64_MAX;
	static int64_t x27 = INT64_MAX;
	volatile uint64_t x28 = 1324498804285866LLU;
	volatile uint64_t t6 = 4187148LLU;

	t6 = (x25|((x26&x27)%x28));

	if (t6 != 886862612553523LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -4;
	static uint16_t x30 = 6176U;
	int64_t x31 = -1LL;
	int8_t x32 = 44;
	static int64_t t7 = -34982896828083LL;

	t7 = (x29|((x30&x31)%x32));

	if (t7 != -4LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x34 = 1337461LLU;
	volatile int8_t x35 = -1;
	static uint8_t x36 = 56U;
	uint64_t t8 = 3843527517666102LLU;

	t8 = (x33|((x34&x35)%x36));

	if (t8 != 18446744073709518861LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -1;
	volatile uint32_t x38 = 12U;
	uint8_t x39 = 1U;
	static int8_t x40 = INT8_MIN;
	volatile uint32_t t9 = UINT32_MAX;

	t9 = (x37|((x38&x39)%x40));

	if (t9 != UINT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x41 = 1;
	static uint8_t x42 = UINT8_MAX;
	int16_t x43 = INT16_MAX;
	uint16_t x44 = UINT16_MAX;
	volatile int32_t t10 = -369874;

	t10 = (x41|((x42&x43)%x44));

	if (t10 != 255) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint16_t x47 = UINT16_MAX;
	uint64_t t11 = UINT64_MAX;

	t11 = (x45|((x46&x47)%x48));

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x49 = INT16_MIN;
	volatile int32_t x50 = -1;
	static volatile uint8_t x51 = 0U;
	int16_t x52 = INT16_MIN;
	int32_t t12 = 12335;

	t12 = (x49|((x50&x51)%x52));

	if (t12 != -32768) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x54 = INT16_MIN;
	int32_t x55 = INT32_MAX;
	volatile uint64_t t13 = 70624312132424486LLU;

	t13 = (x53|((x54&x55)%x56));

	if (t13 != 2147483647LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x57 = UINT32_MAX;
	int32_t x58 = -27252;
	int64_t x59 = -1LL;
	static volatile int16_t x60 = INT16_MIN;
	volatile int64_t t14 = 1LL;

	t14 = (x57|((x58&x59)%x60));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 1U;
	static uint32_t x62 = 0U;
	volatile int64_t x63 = INT64_MIN;
	int16_t x64 = -1;
	int64_t t15 = -141449772LL;

	t15 = (x61|((x62&x63)%x64));

	if (t15 != 1LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = 623;
	volatile uint16_t x67 = 4U;
	int16_t x68 = -1;
	volatile uint64_t t16 = 1279LLU;

	t16 = (x65|((x66&x67)%x68));

	if (t16 != 623LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x69 = UINT64_MAX;
	uint32_t x70 = 26820U;
	int32_t x71 = -7;
	uint64_t t17 = UINT64_MAX;

	t17 = (x69|((x70&x71)%x72));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x73 = 0;
	int8_t x74 = -1;
	static volatile int64_t x75 = INT64_MAX;
	int8_t x76 = INT8_MIN;

	t18 = (x73|((x74&x75)%x76));

	if (t18 != 127LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = 13U;
	uint8_t x78 = UINT8_MAX;
	static int32_t x79 = INT32_MIN;
	int16_t x80 = -1;
	int32_t t19 = 12530438;

	t19 = (x77|((x78&x79)%x80));

	if (t19 != 13) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MAX;
	int16_t x82 = -3140;
	int16_t x84 = INT16_MIN;
	int64_t t20 = -5371438127263LL;

	t20 = (x81|((x82&x83)%x84));

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = 6U;
	int64_t x86 = -1LL;
	static int64_t x87 = INT64_MIN;
	volatile int16_t x88 = INT16_MAX;
	volatile int64_t t21 = 14289264LL;

	t21 = (x85|((x86&x87)%x88));

	if (t21 != -2LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MIN;
	int64_t x90 = -1LL;
	uint16_t x91 = 52U;
	int16_t x92 = INT16_MAX;
	volatile int64_t t22 = -4115LL;

	t22 = (x89|((x90&x91)%x92));

	if (t22 != -76LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = 6077U;
	int16_t x94 = -1;
	uint16_t x95 = 532U;
	volatile int32_t t23 = 2148136;

	t23 = (x93|((x94&x95)%x96));

	if (t23 != 6077) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x98 = INT32_MAX;
	int16_t x99 = -1;
	int64_t x100 = INT64_MIN;
	int64_t t24 = 8033930475LL;

	t24 = (x97|((x98&x99)%x100));

	if (t24 != 2147483647LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x102 = INT8_MIN;
	volatile int64_t x104 = -347761910693156063LL;
	volatile int64_t t25 = 1403082873829LL;

	t25 = (x101|((x102&x103)%x104));

	if (t25 != 32767LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = UINT32_MAX;
	int32_t x107 = -1093;
	int8_t x108 = -1;
	uint32_t t26 = UINT32_MAX;

	t26 = (x105|((x106&x107)%x108));

	if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MIN;
	int32_t x111 = INT32_MIN;
	int64_t t27 = -1769296LL;

	t27 = (x109|((x110&x111)%x112));

	if (t27 != -32768LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x113 = UINT64_MAX;
	static volatile uint16_t x114 = UINT16_MAX;
	static volatile int8_t x115 = -3;
	int16_t x116 = INT16_MIN;
	static uint64_t t28 = UINT64_MAX;

	t28 = (x113|((x114&x115)%x116));

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x118 = INT64_MIN;
	static int64_t x119 = INT64_MIN;
	static volatile int64_t t29 = 3593719790LL;

	t29 = (x117|((x118&x119)%x120));

	if (t29 != -8LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MAX;
	volatile uint32_t x122 = 31170U;
	uint32_t x123 = 19793U;
	int64_t x124 = -29142LL;
	volatile int64_t t30 = 43644550852784643LL;

	t30 = (x121|((x122&x123)%x124));

	if (t30 != 32767LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x125 = 45U;
	static int8_t x126 = INT8_MAX;
	static int32_t x127 = -1;
	volatile int32_t t31 = 37482523;

	t31 = (x125|((x126&x127)%x128));

	if (t31 != 127) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MIN;
	static volatile uint16_t x130 = 1947U;
	uint32_t x131 = 232514U;
	int64_t x132 = INT64_MIN;

	t32 = (x129|((x130&x131)%x132));

	if (t32 != -2147482622LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MAX;
	int8_t x135 = INT8_MAX;
	int16_t x136 = -10557;
	int64_t t33 = -1LL;

	t33 = (x133|((x134&x135)%x136));

	if (t33 != 127LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = 11U;
	int8_t x138 = 0;
	volatile int64_t x139 = INT64_MIN;
	static int16_t x140 = 1;
	volatile int64_t t34 = -144077233556579972LL;

	t34 = (x137|((x138&x139)%x140));

	if (t34 != 11LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x142 = INT64_MIN;
	uint16_t x143 = UINT16_MAX;

	t35 = (x141|((x142&x143)%x144));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x145 = INT16_MIN;
	int16_t x146 = INT16_MAX;
	int64_t x147 = -159LL;
	uint16_t x148 = 2U;
	volatile int64_t t36 = -343582121214740LL;

	t36 = (x145|((x146&x147)%x148));

	if (t36 != -32767LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x150 = 2107516900379750365LLU;
	static uint32_t x152 = UINT32_MAX;

	t37 = (x149|((x150&x151)%x152));

	if (t37 != 4294967295LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x153 = -3414121863296522503LL;
	int16_t x155 = -1;
	int64_t x156 = -1LL;
	static int64_t t38 = -15238892844540867LL;

	t38 = (x153|((x154&x155)%x156));

	if (t38 != -3414121863296522503LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x157 = 18742U;
	volatile uint16_t x158 = 12099U;
	int8_t x159 = 59;
	static volatile int32_t x160 = INT32_MIN;
	uint32_t t39 = 23U;

	t39 = (x157|((x158&x159)%x160));

	if (t39 != 18743U) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = 98U;
	static uint64_t x163 = 87983155681728726LLU;
	static uint64_t x164 = UINT64_MAX;
	volatile uint64_t t40 = 55846400LLU;

	t40 = (x161|((x162&x163)%x164));

	if (t40 != 6370LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = 115650771146516LL;
	static volatile uint16_t x166 = UINT16_MAX;
	int16_t x167 = 23;
	uint8_t x168 = 25U;
	volatile int64_t t41 = 7141130LL;

	t41 = (x165|((x166&x167)%x168));

	if (t41 != 115650771146519LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x173 = INT32_MIN;
	uint16_t x174 = UINT16_MAX;
	volatile uint32_t x175 = 1013U;
	uint8_t x176 = UINT8_MAX;

	t42 = (x173|((x174&x175)%x176));

	if (t42 != 2147483896U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x178 = INT16_MAX;
	int8_t x179 = 0;
	int8_t x180 = -1;
	int32_t t43 = -4;

	t43 = (x177|((x178&x179)%x180));

	if (t43 != -3) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x181 = -31148927;
	uint8_t x183 = 3U;
	int8_t x184 = INT8_MIN;

	t44 = (x181|((x182&x183)%x184));

	if (t44 != -31148927) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x185 = 1U;
	int8_t x186 = -1;
	int8_t x187 = INT8_MAX;
	int8_t x188 = -1;
	int32_t t45 = 68;

	t45 = (x185|((x186&x187)%x188));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x189 = -1;
	int64_t x190 = INT64_MIN;
	uint16_t x191 = 8156U;
	volatile uint64_t x192 = 673134929172471LLU;
	uint64_t t46 = UINT64_MAX;

	t46 = (x189|((x190&x191)%x192));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x195 = INT64_MIN;
	int32_t x196 = 7932;
	static int64_t t47 = 10142LL;

	t47 = (x193|((x194&x195)%x196));

	if (t47 != 260LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x197 = INT32_MIN;
	uint32_t x198 = 27624U;
	int64_t x200 = -596712274LL;
	int64_t t48 = -159798927073139LL;

	t48 = (x197|((x198&x199)%x200));

	if (t48 != -2147483648LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x201 = 2075LLU;
	uint16_t x202 = 13U;
	uint8_t x203 = 1U;
	volatile uint64_t t49 = 2256LLU;

	t49 = (x201|((x202&x203)%x204));

	if (t49 != 2075LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x205 = INT16_MIN;
	int32_t x206 = INT32_MIN;
	int64_t x207 = -1LL;
	int16_t x208 = 82;
	volatile int64_t t50 = -92LL;

	t50 = (x205|((x206&x207)%x208));

	if (t50 != -80LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x209 = INT64_MAX;
	static volatile uint32_t x210 = UINT32_MAX;
	volatile int8_t x211 = -1;
	static int16_t x212 = INT16_MAX;
	int64_t t51 = INT64_MAX;

	t51 = (x209|((x210&x211)%x212));

	if (t51 != INT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x214 = INT16_MIN;
	volatile uint64_t x215 = 11LLU;
	int32_t x216 = INT32_MAX;

	t52 = (x213|((x214&x215)%x216));

	if (t52 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x217 = 25394572U;
	int64_t x219 = INT64_MAX;
	uint16_t x220 = UINT16_MAX;
	static int64_t t53 = 40299845LL;

	t53 = (x217|((x218&x219)%x220));

	if (t53 != 25394572LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x222 = INT32_MIN;
	volatile int16_t x223 = -1;
	uint8_t x224 = 101U;
	int64_t t54 = -119249186805042LL;

	t54 = (x221|((x222&x223)%x224));

	if (t54 != -34LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x225 = INT16_MIN;
	uint32_t x227 = UINT32_MAX;
	int16_t x228 = -700;

	t55 = (x225|((x226&x227)%x228));

	if (t55 != -32576LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x229 = INT16_MIN;
	uint64_t x230 = 165299434354110083LLU;
	volatile int64_t x232 = -11LL;

	t56 = (x229|((x230&x231)%x232));

	if (t56 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x233 = UINT64_MAX;
	uint8_t x235 = UINT8_MAX;
	int64_t x236 = INT64_MIN;
	volatile uint64_t t57 = UINT64_MAX;

	t57 = (x233|((x234&x235)%x236));

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x237 = 0U;
	uint32_t x238 = 239U;
	volatile uint32_t x239 = UINT32_MAX;
	uint64_t x240 = 2LLU;
	volatile uint64_t t58 = 10870470LLU;

	t58 = (x237|((x238&x239)%x240));

	if (t58 != 1LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint64_t x242 = 5162166079453902LLU;
	int16_t x243 = INT16_MIN;
	static volatile int8_t x244 = -1;
	uint64_t t59 = 918334614078105LLU;

	t59 = (x241|((x242&x243)%x244));

	if (t59 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x245 = INT32_MAX;
	int64_t x246 = INT64_MAX;
	uint8_t x247 = 0U;
	uint32_t x248 = UINT32_MAX;
	int64_t t60 = -3148866850624645LL;

	t60 = (x245|((x246&x247)%x248));

	if (t60 != 2147483647LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x249 = INT64_MAX;
	int32_t x251 = INT32_MAX;
	uint16_t x252 = 25837U;
	volatile int64_t t61 = INT64_MAX;

	t61 = (x249|((x250&x251)%x252));

	if (t61 != INT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x258 = UINT64_MAX;
	static volatile uint16_t x259 = 2U;
	static int32_t x260 = -590139107;
	volatile uint64_t t62 = 8247347725418233LLU;

	t62 = (x257|((x258&x259)%x260));

	if (t62 != 255LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x261 = INT16_MIN;
	static uint64_t x262 = UINT64_MAX;
	volatile uint64_t x263 = 8453245811LLU;
	uint64_t x264 = 657579672747912LLU;
	uint64_t t63 = 292660491LLU;

	t63 = (x261|((x262&x263)%x264));

	if (t63 != 18446744073709538163LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x265 = INT16_MIN;
	int16_t x266 = -1;
	uint32_t x267 = 803U;
	static uint8_t x268 = UINT8_MAX;

	t64 = (x265|((x266&x267)%x268));

	if (t64 != 4294934566U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x269 = INT16_MAX;
	static int8_t x270 = INT8_MAX;
	static uint8_t x271 = 14U;
	volatile int16_t x272 = INT16_MIN;

	t65 = (x269|((x270&x271)%x272));

	if (t65 != 32767) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x273 = INT32_MIN;
	volatile uint32_t x275 = 1U;
	static int16_t x276 = -1;
	volatile uint32_t t66 = 12U;

	t66 = (x273|((x274&x275)%x276));

	if (t66 != 2147483648U) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x277 = 296;
	static int32_t x278 = -105623;
	int64_t x279 = -1LL;
	static uint8_t x280 = 6U;
	int64_t t67 = -96409523016LL;

	t67 = (x277|((x278&x279)%x280));

	if (t67 != -5LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x281 = INT16_MIN;
	int16_t x283 = -288;
	uint64_t x284 = 2046492179583807LLU;

	t68 = (x281|((x282&x283)%x284));

	if (t68 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x285 = UINT32_MAX;
	int8_t x286 = INT8_MIN;
	volatile int8_t x287 = -1;
	static uint32_t t69 = UINT32_MAX;

	t69 = (x285|((x286&x287)%x288));

	if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x289 = INT64_MIN;
	int8_t x290 = 1;
	int32_t x292 = 854964;
	static volatile int64_t t70 = INT64_MIN;

	t70 = (x289|((x290&x291)%x292));

	if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x293 = -63;
	uint8_t x294 = 35U;
	volatile int64_t x295 = -567816627LL;
	uint32_t x296 = UINT32_MAX;
	volatile int64_t t71 = -145091280662837838LL;

	t71 = (x293|((x294&x295)%x296));

	if (t71 != -63LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x297 = -14;
	uint32_t x298 = 79U;
	static int8_t x299 = 2;
	uint64_t x300 = 106405622120213975LLU;

	t72 = (x297|((x298&x299)%x300));

	if (t72 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x301 = UINT8_MAX;
	static volatile int8_t x302 = INT8_MIN;
	uint8_t x303 = 62U;
	uint32_t t73 = 35U;

	t73 = (x301|((x302&x303)%x304));

	if (t73 != 255U) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int64_t x305 = INT64_MAX;
	int32_t x306 = -1;
	static uint32_t x307 = UINT32_MAX;
	volatile int64_t t74 = INT64_MAX;

	t74 = (x305|((x306&x307)%x308));

	if (t74 != INT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x309 = UINT64_MAX;
	uint16_t x310 = 21103U;
	volatile int8_t x311 = INT8_MIN;
	uint64_t t75 = UINT64_MAX;

	t75 = (x309|((x310&x311)%x312));

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x314 = -78366848;
	static volatile uint16_t x316 = UINT16_MAX;
	uint64_t t76 = UINT64_MAX;

	t76 = (x313|((x314&x315)%x316));

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x318 = -427;
	int32_t x320 = INT32_MAX;
	volatile int32_t t77 = 11;

	t77 = (x317|((x318&x319)%x320));

	if (t77 != 1563) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x322 = UINT32_MAX;

	t78 = (x321|((x322&x323)%x324));

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x325 = INT32_MIN;
	volatile int64_t x327 = INT64_MAX;
	uint16_t x328 = UINT16_MAX;
	static int64_t t79 = 107LL;

	t79 = (x325|((x326&x327)%x328));

	if (t79 != -2147483393LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x329 = 0;
	int16_t x330 = -1;
	static int16_t x331 = INT16_MAX;
	int16_t x332 = -103;

	t80 = (x329|((x330&x331)%x332));

	if (t80 != 13) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x333 = INT32_MIN;
	uint32_t x335 = 3195U;
	uint32_t x336 = 557962928U;
	uint32_t t81 = 27U;

	t81 = (x333|((x334&x335)%x336));

	if (t81 != 2147486720U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x337 = 1;
	int64_t x338 = INT64_MIN;
	int8_t x339 = 2;
	volatile uint64_t x340 = UINT64_MAX;

	t82 = (x337|((x338&x339)%x340));

	if (t82 != 1LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x341 = 3358U;
	volatile int32_t x342 = -45233749;
	volatile int16_t x343 = INT16_MIN;
	static uint32_t x344 = 332001170U;
	uint32_t t83 = 1U;

	t83 = (x341|((x342&x343)%x344));

	if (t83 != 265702718U) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x345 = UINT8_MAX;
	static int64_t x346 = INT64_MAX;
	static int32_t x347 = INT32_MAX;
	int32_t x348 = INT32_MIN;
	int64_t t84 = -1195108158352122270LL;

	t84 = (x345|((x346&x347)%x348));

	if (t84 != 2147483647LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x350 = -39;
	volatile int16_t x351 = -2426;
	volatile uint64_t t85 = UINT64_MAX;

	t85 = (x349|((x350&x351)%x352));

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x353 = -1;
	static volatile uint8_t x356 = 10U;

	t86 = (x353|((x354&x355)%x356));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x357 = UINT32_MAX;
	volatile int32_t x358 = INT32_MAX;
	static uint64_t x359 = 922906611161LLU;
	int8_t x360 = INT8_MIN;
	volatile uint64_t t87 = 255272813473018LLU;

	t87 = (x357|((x358&x359)%x360));

	if (t87 != 4294967295LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x361 = 467622182870753386LLU;
	int16_t x362 = 4;
	uint8_t x363 = 51U;
	int8_t x364 = INT8_MAX;
	volatile uint64_t t88 = 1238821533865436085LLU;

	t88 = (x361|((x362&x363)%x364));

	if (t88 != 467622182870753386LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x365 = 2;
	int64_t x366 = INT64_MIN;
	uint64_t x367 = 8541643487724623LLU;
	uint32_t x368 = UINT32_MAX;
	volatile uint64_t t89 = 24856604958954LLU;

	t89 = (x365|((x366&x367)%x368));

	if (t89 != 2LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x369 = INT64_MIN;
	int32_t x370 = -1;
	int32_t x372 = -503;
	volatile int64_t t90 = 194LL;

	t90 = (x369|((x370&x371)%x372));

	if (t90 != -9223372036854775572LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x373 = -13;
	int8_t x374 = -1;
	static uint8_t x375 = 27U;
	int64_t x376 = INT64_MIN;
	int64_t t91 = 273708115880745LL;

	t91 = (x373|((x374&x375)%x376));

	if (t91 != -5LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x377 = INT32_MIN;
	int8_t x378 = -1;
	static uint8_t x379 = UINT8_MAX;
	int32_t x380 = -1;

	t92 = (x377|((x378&x379)%x380));

	if (t92 != INT32_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x381 = 3U;
	volatile int64_t x382 = -12963683519660LL;
	uint64_t x383 = UINT64_MAX;
	static uint64_t x384 = 1123659411358709LLU;
	volatile uint64_t t93 = 824745023021522437LLU;

	t93 = (x381|((x382&x383)%x384));

	if (t93 != 738213161465015LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x385 = INT8_MIN;
	int16_t x386 = INT16_MIN;
	uint8_t x387 = 3U;
	static int8_t x388 = -1;
	int32_t t94 = -102965059;

	t94 = (x385|((x386&x387)%x388));

	if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x389 = INT32_MAX;
	int64_t x390 = -1LL;
	int64_t x391 = INT64_MIN;
	int16_t x392 = INT16_MAX;
	int64_t t95 = -108LL;

	t95 = (x389|((x390&x391)%x392));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x397 = INT8_MIN;
	static int32_t x398 = INT32_MAX;
	uint8_t x399 = 8U;
	uint32_t x400 = UINT32_MAX;
	volatile uint32_t t96 = 1813888436U;

	t96 = (x397|((x398&x399)%x400));

	if (t96 != 4294967176U) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x401 = 0U;
	int32_t x402 = -1;
	static int8_t x403 = -1;
	int16_t x404 = 955;
	uint32_t t97 = UINT32_MAX;

	t97 = (x401|((x402&x403)%x404));

	if (t97 != UINT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x405 = 19LLU;
	int8_t x406 = INT8_MIN;
	int16_t x408 = INT16_MIN;
	uint64_t t98 = 3LLU;

	t98 = (x405|((x406&x407)%x408));

	if (t98 != 18446744073709551507LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x409 = -2;
	volatile int64_t x410 = -83412LL;
	static volatile int32_t x411 = -11;
	static volatile int8_t x412 = -1;

	t99 = (x409|((x410&x411)%x412));

	if (t99 != -2LL) { NG(); } else { ; }
	
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

