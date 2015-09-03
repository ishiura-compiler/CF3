#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = -1;
volatile int64_t x13 = -12276LL;
volatile int64_t t2 = -19369LL;
int8_t x22 = -1;
int32_t t4 = 1596;
int16_t x31 = INT16_MIN;
static uint64_t t9 = 15013042451826LLU;
int16_t x46 = INT16_MAX;
volatile int8_t x48 = INT8_MIN;
static volatile int16_t x59 = -1;
int16_t x65 = -8;
uint64_t t14 = 14LLU;
int16_t x77 = INT16_MIN;
volatile int64_t t17 = 250978168LL;
uint16_t x86 = UINT16_MAX;
int32_t x92 = INT32_MAX;
int32_t t20 = -11120834;
int64_t x93 = -1LL;
int32_t x95 = -2;
uint8_t x97 = 47U;
static int8_t x98 = INT8_MIN;
static int64_t x106 = INT64_MIN;
uint32_t x107 = 45477469U;
uint64_t t24 = UINT64_MAX;
int32_t x112 = INT32_MIN;
volatile int8_t x123 = INT8_MIN;
int64_t x128 = -2858358LL;
static int64_t t29 = -31413362LL;
uint16_t x130 = 1U;
static uint8_t x132 = UINT8_MAX;
int16_t x138 = -6426;
static uint64_t t32 = 11LLU;
static int16_t x145 = 0;
int64_t x147 = 230868LL;
volatile int64_t t34 = -496428479998318LL;
static int8_t x163 = INT8_MAX;
int64_t x166 = INT64_MIN;
static int32_t x170 = 108557447;
uint32_t x174 = 3872599U;
uint64_t x176 = UINT64_MAX;
static volatile uint64_t t41 = 706LLU;
static volatile int32_t x181 = -433;
static volatile int32_t x185 = INT32_MIN;
volatile int32_t x187 = -76682569;
volatile int8_t x190 = -62;
volatile int32_t t45 = -11235036;
int8_t x201 = -5;
int32_t x202 = INT32_MIN;
uint16_t x204 = 1400U;
uint64_t x205 = 32083LLU;
int8_t x208 = INT8_MIN;
static int32_t x218 = -250834308;
volatile uint32_t t53 = 74U;
static uint16_t x235 = 24U;
static int32_t x248 = -1;
volatile int8_t x254 = INT8_MIN;
uint8_t x255 = 67U;
int8_t x275 = -1;
uint32_t t65 = 22U;
volatile int16_t x279 = INT16_MIN;
int32_t x282 = -1;
static volatile int64_t x286 = 548180LL;
uint32_t x296 = 230U;
static int8_t x300 = INT8_MIN;
static uint8_t x304 = UINT8_MAX;
uint64_t t74 = 93LLU;
volatile int64_t t78 = -3870019LL;
uint64_t x336 = 13194512LLU;
static int64_t x339 = INT64_MIN;
int8_t x361 = INT8_MAX;
uint8_t x362 = UINT8_MAX;
volatile int16_t x371 = -1;
volatile uint8_t x372 = 5U;
int16_t x373 = INT16_MIN;
int16_t x374 = -1;
int8_t x376 = INT8_MIN;
volatile int32_t t89 = -628340118;
int64_t x377 = 406LL;
static int64_t x382 = INT64_MAX;
volatile int64_t t91 = 32593683859119903LL;
int8_t x387 = 38;
static volatile int64_t t92 = 31541338945LL;
uint8_t x401 = 1U;
int32_t x409 = INT32_MIN;
static int32_t x412 = INT32_MIN;
volatile int64_t t98 = -46939385733LL;


void f0(void) {
	int8_t x1 = INT8_MAX;
	static int16_t x2 = -1;
	static int16_t x3 = INT16_MIN;
	volatile int32_t t0 = 6178;

	t0 = (x1+((x2&x3)%x4));

	if (t0 != 127) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = INT64_MIN;
	int32_t x10 = 16047;
	int64_t x11 = 2584808286283905883LL;
	volatile int64_t x12 = INT64_MIN;
	static volatile int64_t t1 = 245315290235368LL;

	t1 = (x9+((x10&x11)%x12));

	if (t1 != -9223372036854760949LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x14 = -1;
	int64_t x15 = INT64_MIN;
	int64_t x16 = 13120333LL;

	t2 = (x13+((x14&x15)%x16));

	if (t2 != -2506071LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x17 = 1U;
	static int32_t x18 = -1;
	volatile uint32_t x19 = 93004U;
	volatile uint32_t x20 = 2U;
	volatile uint32_t t3 = 775U;

	t3 = (x17+((x18&x19)%x20));

	if (t3 != 1U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = INT8_MAX;
	int8_t x23 = INT8_MIN;
	int16_t x24 = INT16_MAX;

	t4 = (x21+((x22&x23)%x24));

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x25 = UINT64_MAX;
	uint64_t x26 = 24451948698608LLU;
	volatile int64_t x27 = -15323311350LL;
	uint32_t x28 = 2243U;
	static uint64_t t5 = 62665LLU;

	t5 = (x25+((x26&x27)%x28));

	if (t5 != 1438LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = -1;
	int16_t x30 = INT16_MIN;
	volatile int16_t x32 = INT16_MAX;
	volatile int32_t t6 = 44;

	t6 = (x29+((x30&x31)%x32));

	if (t6 != -2) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = INT64_MAX;
	int8_t x34 = INT8_MAX;
	uint64_t x35 = 4007LLU;
	int32_t x36 = INT32_MIN;
	uint64_t t7 = 5863154649LLU;

	t7 = (x33+((x34&x35)%x36));

	if (t7 != 9223372036854775846LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x37 = INT64_MAX;
	volatile int8_t x38 = INT8_MIN;
	volatile int64_t x39 = INT64_MIN;
	static int64_t x40 = -592395676556LL;
	int64_t t8 = -440628283LL;

	t8 = (x37+((x38&x39)%x40));

	if (t8 != 9223372019245769383LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x41 = 1U;
	uint64_t x42 = UINT64_MAX;
	uint64_t x43 = UINT64_MAX;
	volatile uint64_t x44 = 19224667014836LLU;

	t9 = (x41+((x42&x43)%x44));

	if (t9 != 3209628890356LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = -1LL;
	volatile int8_t x47 = -1;
	int64_t t10 = 146989LL;

	t10 = (x45+((x46&x47)%x48));

	if (t10 != 126LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = -1;
	int64_t x50 = INT64_MAX;
	int8_t x51 = 1;
	static uint64_t x52 = UINT64_MAX;
	uint64_t t11 = 1588464446229LLU;

	t11 = (x49+((x50&x51)%x52));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x53 = 12U;
	static int16_t x54 = INT16_MIN;
	static int64_t x55 = INT64_MAX;
	int32_t x56 = -580647;
	volatile int64_t t12 = 1LL;

	t12 = (x53+((x54&x55)%x56));

	if (t12 != 191247LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x57 = 7;
	static uint32_t x58 = 859U;
	volatile uint16_t x60 = 1U;
	volatile uint32_t t13 = 118259860U;

	t13 = (x57+((x58&x59)%x60));

	if (t13 != 7U) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x66 = UINT64_MAX;
	int64_t x67 = -3860554689507095682LL;
	int8_t x68 = INT8_MAX;

	t14 = (x65+((x66&x67)%x68));

	if (t14 != 117LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x69 = 24554690217LL;
	int8_t x70 = INT8_MIN;
	int32_t x71 = 5;
	volatile uint8_t x72 = 28U;
	static volatile int64_t t15 = -14490040933LL;

	t15 = (x69+((x70&x71)%x72));

	if (t15 != 24554690217LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x73 = -2530LL;
	uint32_t x74 = UINT32_MAX;
	int64_t x75 = INT64_MAX;
	volatile int32_t x76 = -3;
	static volatile int64_t t16 = 133478606165LL;

	t16 = (x73+((x74&x75)%x76));

	if (t16 != -2530LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x78 = INT32_MIN;
	static volatile int64_t x79 = -1013076183817LL;
	static uint16_t x80 = UINT16_MAX;

	t17 = (x77+((x78&x79)%x80));

	if (t17 != -33004LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x81 = UINT16_MAX;
	int32_t x82 = 17335;
	uint64_t x83 = 2103387678LLU;
	static int8_t x84 = -1;
	volatile uint64_t t18 = 7742LLU;

	t18 = (x81+((x82&x83)%x84));

	if (t18 != 66069LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x85 = -1LL;
	volatile int16_t x87 = -15;
	int8_t x88 = INT8_MAX;
	int64_t t19 = 21LL;

	t19 = (x85+((x86&x87)%x88));

	if (t19 != 115LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x89 = INT16_MIN;
	int16_t x90 = -1;
	int16_t x91 = 0;

	t20 = (x89+((x90&x91)%x92));

	if (t20 != -32768) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x94 = UINT8_MAX;
	volatile uint16_t x96 = 17883U;
	volatile int64_t t21 = -3468767LL;

	t21 = (x93+((x94&x95)%x96));

	if (t21 != 253LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x99 = -1;
	static int16_t x100 = INT16_MAX;
	static int32_t t22 = -1;

	t22 = (x97+((x98&x99)%x100));

	if (t22 != -81) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = 15077;
	uint16_t x102 = 212U;
	static uint8_t x103 = 28U;
	uint16_t x104 = 5U;
	int32_t t23 = -12;

	t23 = (x101+((x102&x103)%x104));

	if (t23 != 15077) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x105 = UINT64_MAX;
	static uint64_t x108 = UINT64_MAX;

	t24 = (x105+((x106&x107)%x108));

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x109 = 8LL;
	uint8_t x110 = UINT8_MAX;
	static int8_t x111 = -59;
	volatile int64_t t25 = 0LL;

	t25 = (x109+((x110&x111)%x112));

	if (t25 != 205LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x113 = 2;
	int16_t x114 = -1215;
	int32_t x115 = INT32_MIN;
	int8_t x116 = INT8_MAX;
	volatile int32_t t26 = 235015028;

	t26 = (x113+((x114&x115)%x116));

	if (t26 != -6) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x117 = 51983643520222LL;
	uint8_t x118 = 71U;
	volatile int32_t x119 = INT32_MIN;
	int32_t x120 = INT32_MAX;
	int64_t t27 = 219108LL;

	t27 = (x117+((x118&x119)%x120));

	if (t27 != 51983643520222LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x121 = 281693988738387071LLU;
	uint64_t x122 = UINT64_MAX;
	int64_t x124 = -7007131317421597LL;
	uint64_t t28 = 263859479672610LLU;

	t28 = (x121+((x122&x123)%x124));

	if (t28 != 288701120055808540LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x125 = 5U;
	volatile int8_t x126 = -1;
	static volatile uint32_t x127 = UINT32_MAX;

	t29 = (x125+((x126&x127)%x128));

	if (t29 != 1713584LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x129 = -1;
	uint32_t x131 = 3382260U;
	uint32_t t30 = UINT32_MAX;

	t30 = (x129+((x130&x131)%x132));

	if (t30 != UINT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x133 = 7477516U;
	int32_t x134 = INT32_MAX;
	static int32_t x135 = INT32_MIN;
	static volatile int32_t x136 = INT32_MIN;
	uint32_t t31 = 11843U;

	t31 = (x133+((x134&x135)%x136));

	if (t31 != 7477516U) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x137 = 19U;
	volatile uint64_t x139 = UINT64_MAX;
	int8_t x140 = 39;

	t32 = (x137+((x138&x139)%x140));

	if (t32 != 44LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x141 = INT16_MIN;
	uint64_t x142 = 5268984357385488LLU;
	int32_t x143 = INT32_MIN;
	uint32_t x144 = 169376U;
	static volatile uint64_t t33 = 16568839LLU;

	t33 = (x141+((x142&x143)%x144));

	if (t33 != 18446744073709521824LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x146 = INT64_MAX;
	int64_t x148 = -2633901319LL;

	t34 = (x145+((x146&x147)%x148));

	if (t34 != 230868LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x149 = INT32_MAX;
	uint16_t x150 = 70U;
	int16_t x151 = INT16_MIN;
	int64_t x152 = 2740573LL;
	int64_t t35 = -1877862671671497580LL;

	t35 = (x149+((x150&x151)%x152));

	if (t35 != 2147483647LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x153 = 1;
	uint32_t x154 = UINT32_MAX;
	uint8_t x155 = 0U;
	int8_t x156 = -1;
	static uint32_t t36 = 26U;

	t36 = (x153+((x154&x155)%x156));

	if (t36 != 1U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x157 = 17U;
	static int32_t x158 = INT32_MIN;
	int8_t x159 = INT8_MIN;
	static int32_t x160 = INT32_MIN;
	int32_t t37 = -1;

	t37 = (x157+((x158&x159)%x160));

	if (t37 != 17) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x161 = INT64_MIN;
	int16_t x162 = -1;
	int32_t x164 = 9306205;
	volatile int64_t t38 = 67LL;

	t38 = (x161+((x162&x163)%x164));

	if (t38 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x165 = INT16_MIN;
	volatile uint64_t x167 = 2LLU;
	int32_t x168 = -15961;
	volatile uint64_t t39 = 21646291431334LLU;

	t39 = (x165+((x166&x167)%x168));

	if (t39 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x169 = 0;
	int32_t x171 = -28836;
	static volatile int8_t x172 = INT8_MIN;
	volatile int32_t t40 = -1;

	t40 = (x169+((x170&x171)%x172));

	if (t40 != 4) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x173 = -1;
	uint8_t x175 = UINT8_MAX;

	t41 = (x173+((x174&x175)%x176));

	if (t41 != 86LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x177 = 517566466U;
	int64_t x178 = -16261LL;
	volatile int16_t x179 = INT16_MIN;
	uint64_t x180 = UINT64_MAX;
	volatile uint64_t t42 = 138330156LLU;

	t42 = (x177+((x178&x179)%x180));

	if (t42 != 517533698LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x182 = 3596908105LLU;
	int8_t x183 = 11;
	int8_t x184 = -1;
	uint64_t t43 = 85563763337053101LLU;

	t43 = (x181+((x182&x183)%x184));

	if (t43 != 18446744073709551192LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x186 = -1;
	static uint32_t x188 = 473U;
	volatile uint32_t t44 = 428885U;

	t44 = (x185+((x186&x187)%x188));

	if (t44 != 2147483898U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x189 = 25;
	uint16_t x191 = 353U;
	volatile int16_t x192 = INT16_MIN;

	t45 = (x189+((x190&x191)%x192));

	if (t45 != 345) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x193 = INT16_MIN;
	int64_t x194 = -1LL;
	uint8_t x195 = 14U;
	int8_t x196 = INT8_MIN;
	volatile int64_t t46 = 1665786498LL;

	t46 = (x193+((x194&x195)%x196));

	if (t46 != -32754LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x197 = 5;
	uint64_t x198 = 152LLU;
	uint64_t x199 = UINT64_MAX;
	int8_t x200 = -1;
	static volatile uint64_t t47 = 3618LLU;

	t47 = (x197+((x198&x199)%x200));

	if (t47 != 157LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x203 = INT32_MIN;
	volatile int32_t t48 = 268273104;

	t48 = (x201+((x202&x203)%x204));

	if (t48 != -1253) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x206 = INT32_MIN;
	static volatile uint8_t x207 = UINT8_MAX;
	uint64_t t49 = 0LLU;

	t49 = (x205+((x206&x207)%x208));

	if (t49 != 32083LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x209 = -5;
	uint16_t x210 = UINT16_MAX;
	volatile int64_t x211 = 46676136335LL;
	static int16_t x212 = INT16_MIN;
	int64_t t50 = 134500653LL;

	t50 = (x209+((x210&x211)%x212));

	if (t50 != 20874LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x213 = -42806;
	static int32_t x214 = -1;
	volatile int64_t x215 = 32418150683751049LL;
	int64_t x216 = INT64_MIN;
	int64_t t51 = 1023131814211LL;

	t51 = (x213+((x214&x215)%x216));

	if (t51 != 32418150683708243LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x217 = INT32_MAX;
	int16_t x219 = INT16_MIN;
	uint16_t x220 = 98U;
	static volatile int32_t t52 = 112396;

	t52 = (x217+((x218&x219)%x220));

	if (t52 != 2147483643) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x221 = 139583367U;
	static int16_t x222 = -1;
	static volatile int32_t x223 = INT32_MAX;
	static uint16_t x224 = UINT16_MAX;

	t53 = (x221+((x222&x223)%x224));

	if (t53 != 139616134U) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x225 = INT32_MAX;
	int8_t x226 = -1;
	static int8_t x227 = -1;
	volatile int16_t x228 = -1;
	static int32_t t54 = INT32_MAX;

	t54 = (x225+((x226&x227)%x228));

	if (t54 != INT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x229 = UINT64_MAX;
	int64_t x230 = -1LL;
	uint32_t x231 = 6007915U;
	uint64_t x232 = 748991260LLU;
	static volatile uint64_t t55 = 62099143986439840LLU;

	t55 = (x229+((x230&x231)%x232));

	if (t55 != 6007914LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x233 = -1;
	static uint32_t x234 = 222621301U;
	uint8_t x236 = UINT8_MAX;
	static uint32_t t56 = 0U;

	t56 = (x233+((x234&x235)%x236));

	if (t56 != 15U) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x237 = -1LL;
	int16_t x238 = -1;
	uint16_t x239 = 4U;
	static int32_t x240 = -214480345;
	static int64_t t57 = -2548LL;

	t57 = (x237+((x238&x239)%x240));

	if (t57 != 3LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x241 = INT32_MIN;
	int64_t x242 = INT64_MIN;
	uint32_t x243 = 1U;
	static volatile uint8_t x244 = 17U;
	int64_t t58 = 24581811945LL;

	t58 = (x241+((x242&x243)%x244));

	if (t58 != -2147483648LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x245 = -1LL;
	static uint8_t x246 = UINT8_MAX;
	static uint8_t x247 = 108U;
	static int64_t t59 = 213765233LL;

	t59 = (x245+((x246&x247)%x248));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x249 = INT32_MIN;
	uint32_t x250 = 2939047U;
	uint16_t x251 = 78U;
	volatile int32_t x252 = 206;
	volatile uint32_t t60 = 29632U;

	t60 = (x249+((x250&x251)%x252));

	if (t60 != 2147483654U) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int64_t x253 = INT64_MIN;
	int8_t x256 = INT8_MIN;
	volatile int64_t t61 = INT64_MIN;

	t61 = (x253+((x254&x255)%x256));

	if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x257 = 28039531218079190LLU;
	int64_t x258 = INT64_MIN;
	volatile uint32_t x259 = UINT32_MAX;
	uint32_t x260 = 6U;
	volatile uint64_t t62 = 3470208881LLU;

	t62 = (x257+((x258&x259)%x260));

	if (t62 != 28039531218079190LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x265 = INT64_MIN;
	int64_t x266 = INT64_MAX;
	int64_t x267 = INT64_MIN;
	static int8_t x268 = -1;
	volatile int64_t t63 = INT64_MIN;

	t63 = (x265+((x266&x267)%x268));

	if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x269 = INT64_MIN;
	int64_t x270 = INT64_MIN;
	static volatile int32_t x271 = INT32_MAX;
	int32_t x272 = INT32_MIN;
	static int64_t t64 = INT64_MIN;

	t64 = (x269+((x270&x271)%x272));

	if (t64 != INT64_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x273 = -1;
	uint32_t x274 = 3140688U;
	volatile int8_t x276 = -1;

	t65 = (x273+((x274&x275)%x276));

	if (t65 != 3140687U) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x277 = INT32_MIN;
	int8_t x278 = INT8_MAX;
	volatile int64_t x280 = 244357LL;
	int64_t t66 = -2617480857593015LL;

	t66 = (x277+((x278&x279)%x280));

	if (t66 != -2147483648LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x281 = INT16_MAX;
	volatile int8_t x283 = -1;
	int32_t x284 = -768874;
	volatile int32_t t67 = -147;

	t67 = (x281+((x282&x283)%x284));

	if (t67 != 32766) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x285 = 78990;
	int16_t x287 = 63;
	int32_t x288 = -1;
	int64_t t68 = -19580180LL;

	t68 = (x285+((x286&x287)%x288));

	if (t68 != 78990LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x289 = INT8_MAX;
	int8_t x290 = INT8_MIN;
	int64_t x291 = 6980LL;
	static int16_t x292 = INT16_MIN;
	volatile int64_t t69 = -14421LL;

	t69 = (x289+((x290&x291)%x292));

	if (t69 != 7039LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x293 = INT8_MIN;
	int64_t x294 = INT64_MIN;
	volatile int64_t x295 = -1LL;
	int64_t t70 = -45581LL;

	t70 = (x293+((x294&x295)%x296));

	if (t70 != -246LL) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int8_t x297 = -1;
	static int32_t x298 = -61;
	int8_t x299 = 41;
	volatile int32_t t71 = -4750571;

	t71 = (x297+((x298&x299)%x300));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x301 = INT8_MIN;
	static int32_t x302 = -1;
	static uint16_t x303 = 1U;
	volatile int32_t t72 = -45;

	t72 = (x301+((x302&x303)%x304));

	if (t72 != -127) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x305 = INT16_MIN;
	uint32_t x306 = 4882U;
	int16_t x307 = -4;
	int32_t x308 = -1;
	static volatile uint32_t t73 = 14553730U;

	t73 = (x305+((x306&x307)%x308));

	if (t73 != 4294939408U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x309 = -1;
	int8_t x310 = -1;
	uint64_t x311 = 205784514984LLU;
	volatile uint32_t x312 = UINT32_MAX;

	t74 = (x309+((x310&x311)%x312));

	if (t74 != 3921052118LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x313 = 656460419U;
	uint16_t x314 = UINT16_MAX;
	int64_t x315 = INT64_MAX;
	volatile uint8_t x316 = 81U;
	volatile int64_t t75 = 94443430100LL;

	t75 = (x313+((x314&x315)%x316));

	if (t75 != 656460425LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x317 = 17U;
	int16_t x318 = -23;
	int32_t x319 = 7961185;
	volatile int64_t x320 = 41596140105405088LL;
	int64_t t76 = 25LL;

	t76 = (x317+((x318&x319)%x320));

	if (t76 != 7961202LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x321 = 0U;
	static int32_t x322 = -2585861;
	uint32_t x323 = 4851U;
	int64_t x324 = INT64_MIN;
	static volatile int64_t t77 = 167391233204552597LL;

	t77 = (x321+((x322&x323)%x324));

	if (t77 != 755LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x325 = 100U;
	static uint8_t x326 = 22U;
	volatile int64_t x327 = 36743LL;
	int8_t x328 = -1;

	t78 = (x325+((x326&x327)%x328));

	if (t78 != 100LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x329 = 1382LL;
	int64_t x330 = INT64_MIN;
	int8_t x331 = 5;
	uint64_t x332 = 111379546073LLU;
	static volatile uint64_t t79 = 83374011LLU;

	t79 = (x329+((x330&x331)%x332));

	if (t79 != 1382LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x333 = -1LL;
	int32_t x334 = -2017;
	uint32_t x335 = 1961U;
	volatile uint64_t t80 = 1752022137LLU;

	t80 = (x333+((x334&x335)%x336));

	if (t80 != 8LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x337 = INT32_MIN;
	int64_t x338 = INT64_MIN;
	volatile uint8_t x340 = UINT8_MAX;
	volatile int64_t t81 = -524349162527LL;

	t81 = (x337+((x338&x339)%x340));

	if (t81 != -2147483776LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x341 = UINT64_MAX;
	int64_t x342 = -488978053501LL;
	int32_t x343 = 67;
	volatile uint16_t x344 = UINT16_MAX;
	volatile uint64_t t82 = 787LLU;

	t82 = (x341+((x342&x343)%x344));

	if (t82 != 2LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x345 = INT8_MAX;
	static uint16_t x346 = 0U;
	volatile int64_t x347 = 64606685LL;
	uint16_t x348 = 18207U;
	int64_t t83 = 14187261140LL;

	t83 = (x345+((x346&x347)%x348));

	if (t83 != 127LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x349 = 1U;
	int8_t x350 = 0;
	uint8_t x351 = 56U;
	uint8_t x352 = 12U;
	volatile int32_t t84 = -49;

	t84 = (x349+((x350&x351)%x352));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x353 = INT64_MIN;
	static volatile int64_t x354 = INT64_MAX;
	static int32_t x355 = INT32_MIN;
	static int8_t x356 = -26;
	int64_t t85 = -513033810608LL;

	t85 = (x353+((x354&x355)%x356));

	if (t85 != -9223372036854775798LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x357 = 2U;
	uint32_t x358 = 15358291U;
	volatile int8_t x359 = INT8_MIN;
	uint16_t x360 = 6U;
	uint32_t t86 = 1812309539U;

	t86 = (x357+((x358&x359)%x360));

	if (t86 != 4U) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x363 = 140735482LLU;
	int64_t x364 = 3623451673569802036LL;
	uint64_t t87 = 187848LLU;

	t87 = (x361+((x362&x363)%x364));

	if (t87 != 377LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x369 = 46424LLU;
	static uint64_t x370 = 70587924694580950LLU;
	volatile uint64_t t88 = 341231437093387LLU;

	t88 = (x369+((x370&x371)%x372));

	if (t88 != 46424LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x375 = INT32_MIN;

	t89 = (x373+((x374&x375)%x376));

	if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x378 = INT32_MIN;
	int32_t x379 = -2;
	int64_t x380 = -1LL;
	static volatile int64_t t90 = 95234536LL;

	t90 = (x377+((x378&x379)%x380));

	if (t90 != 406LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x381 = 126U;
	int16_t x383 = INT16_MIN;
	uint32_t x384 = 20U;

	t91 = (x381+((x382&x383)%x384));

	if (t91 != 126LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x385 = 113549130783631LL;
	int8_t x386 = INT8_MIN;
	static int64_t x388 = -5438524403082LL;

	t92 = (x385+((x386&x387)%x388));

	if (t92 != 113549130783631LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x389 = -1LL;
	uint64_t x390 = 710LLU;
	static int16_t x391 = INT16_MIN;
	static int32_t x392 = -101185284;
	static volatile uint64_t t93 = UINT64_MAX;

	t93 = (x389+((x390&x391)%x392));

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x393 = INT64_MAX;
	volatile int8_t x394 = 0;
	int32_t x395 = INT32_MIN;
	volatile int64_t x396 = INT64_MIN;
	static volatile int64_t t94 = INT64_MAX;

	t94 = (x393+((x394&x395)%x396));

	if (t94 != INT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x397 = INT16_MIN;
	volatile uint8_t x398 = UINT8_MAX;
	int8_t x399 = INT8_MIN;
	volatile int32_t x400 = INT32_MIN;
	volatile int32_t t95 = 2;

	t95 = (x397+((x398&x399)%x400));

	if (t95 != -32640) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x402 = -29;
	int16_t x403 = 0;
	uint64_t x404 = 470422494481LLU;
	volatile uint64_t t96 = 44357722588728369LLU;

	t96 = (x401+((x402&x403)%x404));

	if (t96 != 1LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x405 = -1LL;
	int32_t x406 = INT32_MAX;
	uint32_t x407 = UINT32_MAX;
	int16_t x408 = INT16_MIN;
	volatile int64_t t97 = -514851799115LL;

	t97 = (x405+((x406&x407)%x408));

	if (t97 != 2147483646LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x410 = INT64_MAX;
	int8_t x411 = 1;

	t98 = (x409+((x410&x411)%x412));

	if (t98 != -2147483647LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x413 = INT64_MIN;
	int32_t x414 = 29403910;
	volatile int32_t x415 = INT32_MAX;
	int64_t x416 = INT64_MAX;
	int64_t t99 = -290LL;

	t99 = (x413+((x414&x415)%x416));

	if (t99 != -9223372036825371898LL) { NG(); } else { ; }
	
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

