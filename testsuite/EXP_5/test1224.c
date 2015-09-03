#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = 1;
int32_t x11 = INT32_MAX;
uint32_t t2 = 7U;
static int8_t x15 = INT8_MAX;
volatile int32_t x19 = INT32_MIN;
volatile int32_t t4 = -45;
int16_t x22 = 1;
static int64_t t6 = -31116455881951208LL;
uint32_t x32 = 26474713U;
volatile int64_t t7 = INT64_MIN;
uint16_t x39 = 14U;
uint64_t x46 = UINT64_MAX;
volatile int64_t t11 = INT64_MAX;
int8_t x53 = INT8_MIN;
int8_t x54 = INT8_MIN;
volatile uint64_t t16 = 58858741074LLU;
int64_t t19 = 81LL;
int32_t x81 = -1;
static int16_t x82 = -5237;
int32_t t21 = -171068;
volatile int32_t t22 = 31;
static int32_t x98 = 7711335;
uint8_t x101 = UINT8_MAX;
int32_t x106 = INT32_MIN;
uint32_t t28 = 58U;
uint64_t x118 = UINT64_MAX;
int32_t x120 = INT32_MIN;
volatile int32_t t29 = -631616;
static int16_t x124 = INT16_MIN;
int32_t x125 = INT32_MIN;
int32_t x126 = -1318;
volatile int64_t x131 = -81855LL;
volatile int32_t t32 = INT32_MIN;
static volatile int8_t x139 = INT8_MIN;
volatile int64_t x140 = 1LL;
static volatile int64_t t36 = 3447006356995LL;
static uint64_t t39 = UINT64_MAX;
int32_t x161 = 1935;
int16_t x170 = INT16_MIN;
int32_t x172 = -132210207;
int64_t x173 = INT64_MIN;
uint64_t x179 = UINT64_MAX;
volatile uint16_t x184 = 146U;
int32_t x193 = INT32_MIN;
static volatile int64_t x197 = 1567834529LL;
volatile int64_t t50 = 10LL;
int32_t x205 = INT32_MAX;
int16_t x209 = INT16_MAX;
static int32_t x212 = 505;
int64_t x223 = -186813912898LL;
int8_t x226 = 0;
volatile int64_t t56 = 989008LL;
static volatile int32_t t57 = 10176;
static volatile int32_t x236 = -1;
volatile uint32_t x242 = 504678298U;
uint32_t t60 = 21U;
int64_t t61 = 0LL;
static int32_t x250 = 3;
int32_t t63 = -111;
uint64_t t66 = 10938604433954LLU;
int8_t x274 = 0;
int32_t t68 = -5302;
static uint16_t x280 = 2644U;
int64_t x285 = -1LL;
uint16_t x289 = 1788U;
int32_t t73 = 1;
static int64_t x301 = -585533921742131340LL;
int32_t x304 = INT32_MIN;
int64_t x308 = INT64_MAX;
volatile int32_t x312 = INT32_MAX;
int32_t t77 = -115937828;
int64_t x319 = -1LL;
int32_t x323 = INT32_MIN;
uint8_t x324 = UINT8_MAX;
int32_t t80 = -79037;
int64_t x330 = INT64_MIN;
int64_t x335 = INT64_MAX;
int16_t x350 = 109;
int16_t x351 = INT16_MAX;
uint16_t x356 = 12U;
uint16_t x357 = UINT16_MAX;
volatile int64_t x358 = -1LL;
int32_t x359 = INT32_MAX;
static volatile int32_t t89 = 111;
volatile uint32_t x362 = 4061918U;
volatile uint32_t x363 = UINT32_MAX;
volatile int64_t t90 = 334330907126704290LL;
volatile uint32_t x374 = 1U;
uint32_t x375 = 396099U;
static int16_t x378 = INT16_MAX;
static int8_t x383 = -1;
uint8_t x384 = UINT8_MAX;
static int8_t x392 = -5;
int8_t x393 = INT8_MAX;
int16_t x399 = -3580;


void f0(void) {
	int64_t x1 = -1LL;
	int32_t x2 = 48;
	volatile uint8_t x3 = UINT8_MAX;
	int64_t t0 = 406577797624576LL;

	t0 = (x1-((x2==x3)/x4));

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x5 = 10536025LLU;
	int16_t x6 = -1;
	volatile int8_t x7 = INT8_MAX;
	int8_t x8 = INT8_MAX;
	static uint64_t t1 = 3279739235050636LLU;

	t1 = (x5-((x6==x7)/x8));

	if (t1 != 10536025LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 105548205U;
	volatile int16_t x10 = 1;
	volatile uint8_t x12 = 15U;

	t2 = (x9-((x10==x11)/x12));

	if (t2 != 105548205U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MAX;
	volatile uint64_t x14 = 256896354LLU;
	int16_t x16 = INT16_MIN;
	volatile int32_t t3 = 9;

	t3 = (x13-((x14==x15)/x16));

	if (t3 != 32767) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	int32_t x18 = 3;
	int8_t x20 = 22;

	t4 = (x17-((x18==x19)/x20));

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -42845562LL;
	int16_t x23 = INT16_MAX;
	uint8_t x24 = 38U;
	int64_t t5 = 911664645LL;

	t5 = (x21-((x22==x23)/x24));

	if (t5 != -42845562LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = -33LL;
	int8_t x26 = INT8_MIN;
	volatile int8_t x27 = -24;
	volatile int64_t x28 = 429613323LL;

	t6 = (x25-((x26==x27)/x28));

	if (t6 != -33LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	uint32_t x30 = 434094907U;
	int16_t x31 = -1;

	t7 = (x29-((x30==x31)/x32));

	if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	int64_t x34 = INT64_MAX;
	int32_t x35 = INT32_MIN;
	volatile int16_t x36 = -1;
	static int32_t t8 = INT32_MIN;

	t8 = (x33-((x34==x35)/x36));

	if (t8 != INT32_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	static int64_t x38 = INT64_MAX;
	uint64_t x40 = 11LLU;
	uint64_t t9 = 123513639125684150LLU;

	t9 = (x37-((x38==x39)/x40));

	if (t9 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x41 = 0;
	uint64_t x42 = 68290113258379LLU;
	int32_t x43 = 1;
	static uint8_t x44 = UINT8_MAX;
	int32_t t10 = -120305397;

	t10 = (x41-((x42==x43)/x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MAX;
	int64_t x47 = -1LL;
	static int32_t x48 = INT32_MIN;

	t11 = (x45-((x46==x47)/x48));

	if (t11 != INT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MAX;
	uint8_t x50 = UINT8_MAX;
	int64_t x51 = INT64_MIN;
	int32_t x52 = -1;
	volatile int32_t t12 = 546;

	t12 = (x49-((x50==x51)/x52));

	if (t12 != 32767) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x55 = 1022U;
	int16_t x56 = INT16_MAX;
	int32_t t13 = -66013854;

	t13 = (x53-((x54==x55)/x56));

	if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MAX;
	int32_t x58 = INT32_MIN;
	volatile int8_t x59 = INT8_MIN;
	int32_t x60 = 2563;
	volatile int32_t t14 = 11792;

	t14 = (x57-((x58==x59)/x60));

	if (t14 != 32767) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint8_t x61 = 2U;
	static int8_t x62 = INT8_MAX;
	volatile int16_t x63 = -445;
	static volatile uint16_t x64 = UINT16_MAX;
	int32_t t15 = 57219708;

	t15 = (x61-((x62==x63)/x64));

	if (t15 != 2) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x65 = INT8_MIN;
	static int64_t x66 = -1LL;
	static int32_t x67 = INT32_MIN;
	uint64_t x68 = 20998129099704LLU;

	t16 = (x65-((x66==x67)/x68));

	if (t16 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;
	int64_t x70 = INT64_MIN;
	int64_t x71 = -2347361210276091578LL;
	uint64_t x72 = 1979515LLU;
	volatile uint64_t t17 = 3498267LLU;

	t17 = (x69-((x70==x71)/x72));

	if (t17 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x73 = 29911201U;
	int16_t x74 = -1;
	volatile int16_t x75 = INT16_MIN;
	static volatile int16_t x76 = INT16_MIN;
	volatile uint32_t t18 = 53U;

	t18 = (x73-((x74==x75)/x76));

	if (t18 != 29911201U) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = 106;
	uint8_t x78 = 1U;
	int16_t x79 = 0;
	static int64_t x80 = INT64_MIN;

	t19 = (x77-((x78==x79)/x80));

	if (t19 != 106LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x83 = INT16_MIN;
	int64_t x84 = 107547000846685LL;
	int64_t t20 = -3LL;

	t20 = (x81-((x82==x83)/x84));

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = UINT8_MAX;
	volatile int64_t x86 = 5413LL;
	uint16_t x87 = 0U;
	static uint16_t x88 = 2045U;

	t21 = (x85-((x86==x87)/x88));

	if (t21 != 255) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x89 = -1;
	int8_t x90 = 12;
	uint16_t x91 = UINT16_MAX;
	int32_t x92 = 1518298;

	t22 = (x89-((x90==x91)/x92));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int16_t x93 = -1;
	int64_t x94 = INT64_MIN;
	int8_t x95 = INT8_MIN;
	int16_t x96 = 49;
	volatile int32_t t23 = -1;

	t23 = (x93-((x94==x95)/x96));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = -1;
	static volatile uint64_t x99 = 823591076LLU;
	uint8_t x100 = 2U;
	volatile int32_t t24 = -4;

	t24 = (x97-((x98==x99)/x100));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x102 = INT8_MAX;
	volatile int16_t x103 = INT16_MAX;
	uint32_t x104 = 31105U;
	volatile uint32_t t25 = 13490U;

	t25 = (x101-((x102==x103)/x104));

	if (t25 != 255U) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -136033777239913826LL;
	int64_t x107 = INT64_MAX;
	uint32_t x108 = 957U;
	int64_t t26 = 5354179LL;

	t26 = (x105-((x106==x107)/x108));

	if (t26 != -136033777239913826LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x109 = 311LLU;
	int8_t x110 = 5;
	uint32_t x111 = 28824443U;
	volatile uint8_t x112 = 11U;
	uint64_t t27 = 472534972012LLU;

	t27 = (x109-((x110==x111)/x112));

	if (t27 != 311LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = 377U;
	volatile int64_t x114 = INT64_MIN;
	int64_t x115 = INT64_MIN;
	int32_t x116 = INT32_MIN;

	t28 = (x113-((x114==x115)/x116));

	if (t28 != 377U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = -1;
	volatile uint32_t x119 = 2796U;

	t29 = (x117-((x118==x119)/x120));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = 14U;
	int16_t x122 = INT16_MAX;
	static volatile int32_t x123 = 27683;
	int32_t t30 = 12;

	t30 = (x121-((x122==x123)/x124));

	if (t30 != 14) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x127 = -1;
	static int8_t x128 = -1;
	int32_t t31 = INT32_MIN;

	t31 = (x125-((x126==x127)/x128));

	if (t31 != INT32_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MIN;
	int16_t x130 = INT16_MIN;
	int32_t x132 = INT32_MAX;

	t32 = (x129-((x130==x131)/x132));

	if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x133 = 4245U;
	uint8_t x134 = 1U;
	static uint32_t x135 = UINT32_MAX;
	static int8_t x136 = -1;
	int32_t t33 = -1;

	t33 = (x133-((x134==x135)/x136));

	if (t33 != 4245) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x137 = 28074U;
	volatile uint8_t x138 = UINT8_MAX;
	volatile int64_t t34 = 133720471947914LL;

	t34 = (x137-((x138==x139)/x140));

	if (t34 != 28074LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MIN;
	uint32_t x142 = UINT32_MAX;
	static int64_t x143 = -7633400LL;
	static int64_t x144 = 520309989058LL;
	volatile int64_t t35 = INT64_MIN;

	t35 = (x141-((x142==x143)/x144));

	if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = -1;
	int16_t x146 = 1;
	int8_t x147 = INT8_MAX;
	int64_t x148 = -1553894487LL;

	t36 = (x145-((x146==x147)/x148));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = INT32_MIN;
	volatile int64_t x150 = -1LL;
	uint64_t x151 = 2206LLU;
	uint64_t x152 = UINT64_MAX;
	uint64_t t37 = 14319097LLU;

	t37 = (x149-((x150==x151)/x152));

	if (t37 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = INT32_MAX;
	static int16_t x154 = INT16_MIN;
	volatile int8_t x155 = INT8_MIN;
	volatile uint64_t x156 = 3078945278885LLU;
	uint64_t t38 = 258217221019345LLU;

	t38 = (x153-((x154==x155)/x156));

	if (t38 != 2147483647LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = -1;
	uint64_t x158 = 217LLU;
	int64_t x159 = INT64_MAX;
	volatile uint64_t x160 = 986390223894278785LLU;

	t39 = (x157-((x158==x159)/x160));

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x162 = -2;
	static uint64_t x163 = UINT64_MAX;
	int64_t x164 = 58266221496363438LL;
	volatile int64_t t40 = -1420141761LL;

	t40 = (x161-((x162==x163)/x164));

	if (t40 != 1935LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = 1731131680914498LL;
	static uint16_t x166 = 11785U;
	int64_t x167 = INT64_MIN;
	int16_t x168 = -1;
	int64_t t41 = -22204756LL;

	t41 = (x165-((x166==x167)/x168));

	if (t41 != 1731131680914498LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x169 = INT64_MIN;
	uint32_t x171 = UINT32_MAX;
	volatile int64_t t42 = INT64_MIN;

	t42 = (x169-((x170==x171)/x172));

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x174 = 0U;
	static volatile int8_t x175 = -1;
	int16_t x176 = -1;
	int64_t t43 = INT64_MIN;

	t43 = (x173-((x174==x175)/x176));

	if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MIN;
	int32_t x178 = -1122415;
	int16_t x180 = 1521;
	volatile int64_t t44 = INT64_MIN;

	t44 = (x177-((x178==x179)/x180));

	if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = -1;
	int16_t x182 = 7;
	uint64_t x183 = 28LLU;
	static volatile int32_t t45 = 2390;

	t45 = (x181-((x182==x183)/x184));

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = -1;
	int16_t x186 = INT16_MAX;
	int32_t x187 = -125885;
	int16_t x188 = INT16_MIN;
	static int32_t t46 = -727825711;

	t46 = (x185-((x186==x187)/x188));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = -58LL;
	uint32_t x190 = 2U;
	volatile uint16_t x191 = UINT16_MAX;
	static int16_t x192 = INT16_MAX;
	int64_t t47 = 1805733936554LL;

	t47 = (x189-((x190==x191)/x192));

	if (t47 != -58LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x194 = 57;
	int32_t x195 = INT32_MAX;
	int16_t x196 = -7;
	volatile int32_t t48 = INT32_MIN;

	t48 = (x193-((x194==x195)/x196));

	if (t48 != INT32_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x198 = 283U;
	int64_t x199 = INT64_MIN;
	uint8_t x200 = 14U;
	int64_t t49 = 4200922143592050128LL;

	t49 = (x197-((x198==x199)/x200));

	if (t49 != 1567834529LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = INT32_MAX;
	int8_t x202 = -5;
	int16_t x203 = INT16_MAX;
	volatile int64_t x204 = INT64_MAX;

	t50 = (x201-((x202==x203)/x204));

	if (t50 != 2147483647LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x206 = 535724U;
	uint16_t x207 = 1711U;
	static int32_t x208 = -1;
	static volatile int32_t t51 = INT32_MAX;

	t51 = (x205-((x206==x207)/x208));

	if (t51 != INT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x210 = UINT16_MAX;
	volatile int32_t x211 = -23;
	int32_t t52 = -9;

	t52 = (x209-((x210==x211)/x212));

	if (t52 != 32767) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x213 = INT16_MIN;
	int16_t x214 = INT16_MIN;
	int16_t x215 = INT16_MAX;
	uint32_t x216 = UINT32_MAX;
	volatile uint32_t t53 = 6U;

	t53 = (x213-((x214==x215)/x216));

	if (t53 != 4294934528U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = 19;
	static volatile int32_t x218 = INT32_MIN;
	volatile int32_t x219 = -12;
	uint16_t x220 = UINT16_MAX;
	int32_t t54 = -7;

	t54 = (x217-((x218==x219)/x220));

	if (t54 != 19) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = INT8_MAX;
	static volatile int32_t x222 = 280221439;
	int8_t x224 = 1;
	static int32_t t55 = 2;

	t55 = (x221-((x222==x223)/x224));

	if (t55 != 127) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = INT32_MAX;
	uint32_t x227 = 18594451U;
	int64_t x228 = 82LL;

	t56 = (x225-((x226==x227)/x228));

	if (t56 != 2147483647LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x229 = 0;
	static int32_t x230 = INT32_MAX;
	int16_t x231 = -1;
	int32_t x232 = -18186;

	t57 = (x229-((x230==x231)/x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x233 = 10U;
	uint16_t x234 = 15U;
	uint32_t x235 = 106421U;
	volatile uint32_t t58 = 19433698U;

	t58 = (x233-((x234==x235)/x236));

	if (t58 != 10U) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = 0U;
	int64_t x238 = -7LL;
	static int8_t x239 = INT8_MAX;
	uint16_t x240 = 200U;
	volatile int32_t t59 = 0;

	t59 = (x237-((x238==x239)/x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x241 = INT32_MIN;
	volatile int16_t x243 = INT16_MIN;
	volatile uint32_t x244 = UINT32_MAX;

	t60 = (x241-((x242==x243)/x244));

	if (t60 != 2147483648U) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = -1LL;
	static int16_t x246 = -2598;
	uint16_t x247 = UINT16_MAX;
	volatile uint8_t x248 = 117U;

	t61 = (x245-((x246==x247)/x248));

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MIN;
	int8_t x251 = INT8_MIN;
	volatile uint8_t x252 = 117U;
	volatile int32_t t62 = -16744464;

	t62 = (x249-((x250==x251)/x252));

	if (t62 != -128) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = INT8_MIN;
	uint8_t x254 = 50U;
	int32_t x255 = -1;
	uint8_t x256 = UINT8_MAX;

	t63 = (x253-((x254==x255)/x256));

	if (t63 != -128) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x257 = UINT8_MAX;
	int16_t x258 = 60;
	int8_t x259 = 1;
	int64_t x260 = INT64_MAX;
	int64_t t64 = -1LL;

	t64 = (x257-((x258==x259)/x260));

	if (t64 != 255LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x261 = -1074954;
	static uint32_t x262 = 7667080U;
	int16_t x263 = 58;
	uint8_t x264 = UINT8_MAX;
	int32_t t65 = -11006286;

	t65 = (x261-((x262==x263)/x264));

	if (t65 != -1074954) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = 2151976LLU;
	int32_t x266 = INT32_MIN;
	int16_t x267 = INT16_MIN;
	int32_t x268 = -1856;

	t66 = (x265-((x266==x267)/x268));

	if (t66 != 2151976LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x269 = 65U;
	int16_t x270 = INT16_MIN;
	int64_t x271 = 1LL;
	int32_t x272 = INT32_MIN;
	int32_t t67 = 29;

	t67 = (x269-((x270==x271)/x272));

	if (t67 != 65) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = -1;
	int8_t x275 = -7;
	volatile uint8_t x276 = 1U;

	t68 = (x273-((x274==x275)/x276));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x277 = 0U;
	int64_t x278 = INT64_MAX;
	int32_t x279 = -88548855;
	volatile uint32_t t69 = 11750U;

	t69 = (x277-((x278==x279)/x280));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MIN;
	int8_t x282 = 1;
	static uint64_t x283 = 5031LLU;
	int8_t x284 = INT8_MIN;
	int64_t t70 = INT64_MIN;

	t70 = (x281-((x282==x283)/x284));

	if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x286 = UINT32_MAX;
	int64_t x287 = INT64_MIN;
	volatile uint8_t x288 = 97U;
	volatile int64_t t71 = -39758634LL;

	t71 = (x285-((x286==x287)/x288));

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x290 = -3LL;
	uint64_t x291 = 2249468010564211924LLU;
	int64_t x292 = INT64_MIN;
	int64_t t72 = -986764409909LL;

	t72 = (x289-((x290==x291)/x292));

	if (t72 != 1788LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x293 = UINT8_MAX;
	volatile int64_t x294 = -1LL;
	int16_t x295 = -158;
	int8_t x296 = INT8_MAX;

	t73 = (x293-((x294==x295)/x296));

	if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x297 = UINT8_MAX;
	int32_t x298 = INT32_MIN;
	int64_t x299 = -2884692999933242LL;
	uint32_t x300 = 4847092U;
	volatile uint32_t t74 = 1186828U;

	t74 = (x297-((x298==x299)/x300));

	if (t74 != 255U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x302 = 0;
	static int8_t x303 = -44;
	static int64_t t75 = -24747237LL;

	t75 = (x301-((x302==x303)/x304));

	if (t75 != -585533921742131340LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x305 = -11;
	uint64_t x306 = 20215837LLU;
	int16_t x307 = INT16_MIN;
	int64_t t76 = 151459LL;

	t76 = (x305-((x306==x307)/x308));

	if (t76 != -11LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = 432;
	int8_t x310 = -1;
	int32_t x311 = INT32_MIN;

	t77 = (x309-((x310==x311)/x312));

	if (t77 != 432) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = INT32_MAX;
	uint32_t x314 = UINT32_MAX;
	int32_t x315 = INT32_MIN;
	int8_t x316 = -1;
	volatile int32_t t78 = INT32_MAX;

	t78 = (x313-((x314==x315)/x316));

	if (t78 != INT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = -1;
	int64_t x318 = -1LL;
	uint32_t x320 = 6996U;
	uint32_t t79 = UINT32_MAX;

	t79 = (x317-((x318==x319)/x320));

	if (t79 != UINT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = INT8_MIN;
	static int32_t x322 = -1;

	t80 = (x321-((x322==x323)/x324));

	if (t80 != -128) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x325 = -1;
	int16_t x326 = INT16_MIN;
	int32_t x327 = -1;
	uint16_t x328 = UINT16_MAX;
	static int32_t t81 = -1049362193;

	t81 = (x325-((x326==x327)/x328));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x329 = INT16_MAX;
	volatile int32_t x331 = INT32_MIN;
	int8_t x332 = 10;
	volatile int32_t t82 = -5017;

	t82 = (x329-((x330==x331)/x332));

	if (t82 != 32767) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = INT8_MIN;
	uint32_t x334 = UINT32_MAX;
	volatile int16_t x336 = 1;
	int32_t t83 = 10940730;

	t83 = (x333-((x334==x335)/x336));

	if (t83 != -128) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x337 = -291415545;
	uint64_t x338 = 1708311879LLU;
	static volatile uint32_t x339 = 2829U;
	volatile int32_t x340 = -204052450;
	int32_t t84 = 6175;

	t84 = (x337-((x338==x339)/x340));

	if (t84 != -291415545) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = INT32_MIN;
	uint8_t x342 = 23U;
	static int32_t x343 = 24222;
	uint32_t x344 = 1721820359U;
	uint32_t t85 = 8U;

	t85 = (x341-((x342==x343)/x344));

	if (t85 != 2147483648U) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MIN;
	volatile int64_t x346 = INT64_MIN;
	int32_t x347 = 4;
	volatile int8_t x348 = INT8_MIN;
	volatile int32_t t86 = 33434;

	t86 = (x345-((x346==x347)/x348));

	if (t86 != -32768) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int32_t x349 = INT32_MAX;
	volatile int32_t x352 = INT32_MIN;
	volatile int32_t t87 = INT32_MAX;

	t87 = (x349-((x350==x351)/x352));

	if (t87 != INT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x353 = INT32_MAX;
	uint8_t x354 = 0U;
	int32_t x355 = 12;
	static int32_t t88 = INT32_MAX;

	t88 = (x353-((x354==x355)/x356));

	if (t88 != INT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x360 = 19113U;

	t89 = (x357-((x358==x359)/x360));

	if (t89 != 65535) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x361 = -3406LL;
	static int8_t x364 = INT8_MIN;

	t90 = (x361-((x362==x363)/x364));

	if (t90 != -3406LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x365 = UINT16_MAX;
	int16_t x366 = 11;
	static uint64_t x367 = 305244769300LLU;
	uint32_t x368 = 407930U;
	static uint32_t t91 = 0U;

	t91 = (x365-((x366==x367)/x368));

	if (t91 != 65535U) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x369 = 1003U;
	static int32_t x370 = -1;
	volatile int32_t x371 = INT32_MIN;
	static int16_t x372 = -17;
	volatile int32_t t92 = 89;

	t92 = (x369-((x370==x371)/x372));

	if (t92 != 1003) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = 1U;
	int64_t x376 = INT64_MAX;
	volatile int64_t t93 = 19705LL;

	t93 = (x373-((x374==x375)/x376));

	if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = INT8_MIN;
	volatile uint16_t x379 = 22U;
	static int8_t x380 = INT8_MAX;
	int32_t t94 = 1407540;

	t94 = (x377-((x378==x379)/x380));

	if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x381 = -27;
	static volatile int64_t x382 = INT64_MIN;
	volatile int32_t t95 = 1;

	t95 = (x381-((x382==x383)/x384));

	if (t95 != -27) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x385 = INT32_MIN;
	int32_t x386 = -1;
	int16_t x387 = -1;
	int8_t x388 = INT8_MIN;
	int32_t t96 = INT32_MIN;

	t96 = (x385-((x386==x387)/x388));

	if (t96 != INT32_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = 674;
	volatile uint32_t x390 = 1605U;
	static int64_t x391 = 597469395918LL;
	static int32_t t97 = -2;

	t97 = (x389-((x390==x391)/x392));

	if (t97 != 674) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x394 = 12U;
	uint32_t x395 = UINT32_MAX;
	int16_t x396 = INT16_MIN;
	int32_t t98 = -270;

	t98 = (x393-((x394==x395)/x396));

	if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x397 = UINT16_MAX;
	int32_t x398 = 94835219;
	int32_t x400 = 122300390;
	int32_t t99 = 1;

	t99 = (x397-((x398==x399)/x400));

	if (t99 != 65535) { NG(); } else { ; }
	
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

