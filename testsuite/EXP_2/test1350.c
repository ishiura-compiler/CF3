#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x1 = INT64_MAX;
int8_t x6 = 1;
int16_t x7 = -1;
uint16_t x8 = 176U;
static int16_t x12 = -1;
int32_t x17 = 38;
static uint8_t x23 = 96U;
int32_t x30 = INT32_MIN;
int32_t x31 = -577;
static int16_t x33 = INT16_MAX;
int32_t x38 = INT32_MIN;
int32_t x42 = 10;
static int32_t x47 = INT32_MAX;
uint8_t x48 = UINT8_MAX;
int32_t t11 = 159;
int64_t x54 = INT64_MIN;
volatile int64_t x55 = INT64_MIN;
uint64_t x59 = UINT64_MAX;
uint16_t x61 = 1036U;
int16_t x64 = -1;
uint16_t x67 = UINT16_MAX;
int8_t x74 = 0;
static int32_t x84 = -1;
volatile int8_t x90 = -1;
volatile int64_t x91 = INT64_MIN;
static int8_t x94 = INT8_MIN;
volatile int32_t t23 = INT32_MAX;
int64_t x103 = 88358631117661LL;
int64_t x105 = INT64_MIN;
volatile int64_t x107 = -1LL;
static int16_t x111 = -76;
static int16_t x113 = -1;
volatile int64_t x118 = INT64_MIN;
int64_t x120 = -661LL;
int32_t x121 = INT32_MAX;
volatile int32_t t32 = 2676;
volatile int64_t x136 = -1LL;
int16_t x141 = -1;
int8_t x145 = -3;
int16_t x146 = INT16_MIN;
int32_t t36 = -1;
int32_t t37 = -186270474;
int16_t x166 = -1;
uint64_t x168 = 51LLU;
uint64_t t42 = 123LLU;
int64_t x174 = INT64_MIN;
uint64_t x176 = 2390736884LLU;
uint64_t t43 = 216698039544526049LLU;
uint32_t x179 = 1909U;
volatile int64_t t45 = INT64_MIN;
static volatile int16_t x192 = INT16_MIN;
int8_t x193 = INT8_MIN;
static uint64_t t49 = 1LLU;
int32_t x205 = INT32_MIN;
volatile int32_t x211 = -1;
volatile int64_t t52 = 7LL;
uint64_t x216 = 453494695646891LLU;
volatile uint64_t t53 = 21LLU;
int32_t x218 = 32475;
volatile int16_t x221 = INT16_MIN;
static volatile int32_t x223 = INT32_MIN;
uint8_t x234 = 2U;
uint32_t x238 = UINT32_MAX;
uint32_t x251 = 2764127U;
static volatile uint32_t t62 = 2309U;
static uint16_t x257 = 387U;
static volatile uint32_t x263 = 1556792U;
int32_t x264 = 64347139;
uint8_t x265 = 2U;
volatile uint64_t t67 = 787427159203LLU;
uint32_t x279 = 193804U;
volatile int32_t t71 = -2040074;
static uint32_t x290 = UINT32_MAX;
volatile int32_t x292 = -8;
int32_t x293 = 7162;
int16_t x296 = 3;
int8_t x305 = 14;
uint8_t x307 = 11U;
volatile uint16_t x311 = 49U;
uint32_t x314 = 0U;
static volatile int32_t t78 = -247753713;
int8_t x317 = -14;
static volatile int32_t x320 = INT32_MIN;
static uint32_t x325 = 932695U;
uint8_t x328 = 3U;
static int16_t x330 = INT16_MAX;
volatile int32_t t85 = INT32_MIN;
uint64_t t87 = 81LLU;
static uint8_t x356 = 2U;
int64_t x357 = -1LL;
static uint64_t x358 = 96705792275LLU;
volatile uint8_t x362 = 120U;
uint32_t x364 = 1U;
static uint16_t x369 = 57U;
volatile uint16_t x371 = 31488U;
volatile int8_t x381 = 0;
int16_t x382 = INT16_MAX;
int16_t x384 = 2;
static int32_t x390 = -1;
static uint32_t x399 = 393286672U;
static uint16_t x400 = 3U;


void f0(void) {
	int32_t x2 = 460335645;
	int16_t x3 = INT16_MIN;
	int8_t x4 = INT8_MIN;
	static volatile int64_t t0 = 1LL;

	t0 = ((x1^(x2==x3))&x4);

	if (t0 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = -27657911408126486LL;
	int64_t t1 = 281250789314606LL;

	t1 = ((x5^(x6==x7))&x8);

	if (t1 != 160LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MAX;
	static volatile uint16_t x10 = UINT16_MAX;
	static int64_t x11 = -1LL;
	static volatile int32_t t2 = INT32_MAX;

	t2 = ((x9^(x10==x11))&x12);

	if (t2 != INT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = INT8_MIN;
	static int16_t x14 = -1;
	static volatile int32_t x15 = INT32_MIN;
	int32_t x16 = -1;
	volatile int32_t t3 = -2217;

	t3 = ((x13^(x14==x15))&x16);

	if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x18 = INT64_MIN;
	static volatile int8_t x19 = INT8_MIN;
	volatile int16_t x20 = INT16_MIN;
	static volatile int32_t t4 = -3;

	t4 = ((x17^(x18==x19))&x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -22952;
	static volatile int64_t x22 = 451402930765612963LL;
	static int16_t x24 = INT16_MIN;
	volatile int32_t t5 = -60;

	t5 = ((x21^(x22==x23))&x24);

	if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MAX;
	volatile int16_t x26 = INT16_MIN;
	int32_t x27 = INT32_MIN;
	static int64_t x28 = INT64_MIN;
	int64_t t6 = -4097LL;

	t6 = ((x25^(x26==x27))&x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MAX;
	uint64_t x32 = 520840416LLU;
	volatile uint64_t t7 = 136LLU;

	t7 = ((x29^(x30==x31))&x32);

	if (t7 != 96LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x34 = INT16_MIN;
	int32_t x35 = -5947;
	uint64_t x36 = UINT64_MAX;
	static uint64_t t8 = 354315146609614LLU;

	t8 = ((x33^(x34==x35))&x36);

	if (t8 != 32767LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 506333456190692LLU;
	int8_t x39 = INT8_MIN;
	int16_t x40 = -1;
	uint64_t t9 = 1071LLU;

	t9 = ((x37^(x38==x39))&x40);

	if (t9 != 506333456190692LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = UINT32_MAX;
	int64_t x43 = 0LL;
	static int16_t x44 = INT16_MAX;
	static volatile uint32_t t10 = 1U;

	t10 = ((x41^(x42==x43))&x44);

	if (t10 != 32767U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	uint16_t x46 = 3565U;

	t11 = ((x45^(x46==x47))&x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 5LLU;
	uint64_t x50 = 440341LLU;
	static uint64_t x51 = 56683934941LLU;
	volatile uint8_t x52 = UINT8_MAX;
	volatile uint64_t t12 = 2430472159640406LLU;

	t12 = ((x49^(x50==x51))&x52);

	if (t12 != 5LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = -1432;
	int64_t x56 = INT64_MIN;
	volatile int64_t t13 = INT64_MIN;

	t13 = ((x53^(x54==x55))&x56);

	if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MAX;
	int64_t x58 = 354LL;
	int64_t x60 = -1LL;
	static volatile int64_t t14 = 29578521805289LL;

	t14 = ((x57^(x58==x59))&x60);

	if (t14 != 2147483647LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x62 = UINT64_MAX;
	volatile int8_t x63 = INT8_MIN;
	volatile int32_t t15 = -48615;

	t15 = ((x61^(x62==x63))&x64);

	if (t15 != 1036) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 1U;
	int64_t x66 = INT64_MIN;
	uint32_t x68 = 318787U;
	volatile uint32_t t16 = 125876U;

	t16 = ((x65^(x66==x67))&x68);

	if (t16 != 1U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x69 = INT8_MAX;
	int64_t x70 = INT64_MIN;
	static volatile int32_t x71 = -916011109;
	static int64_t x72 = -207043LL;
	int64_t t17 = -28888144578372184LL;

	t17 = ((x69^(x70==x71))&x72);

	if (t17 != 61LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x73 = -559;
	uint32_t x75 = 2071451692U;
	volatile int32_t x76 = -1;
	int32_t t18 = 883991773;

	t18 = ((x73^(x74==x75))&x76);

	if (t18 != -559) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = UINT16_MAX;
	int16_t x78 = INT16_MAX;
	int32_t x79 = -1;
	int64_t x80 = -185066362318LL;
	volatile int64_t t19 = 113630LL;

	t19 = ((x77^(x78==x79))&x80);

	if (t19 != 27186LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x81 = INT64_MAX;
	volatile uint64_t x82 = 159262788743385LLU;
	int16_t x83 = -1156;
	int64_t t20 = INT64_MAX;

	t20 = ((x81^(x82==x83))&x84);

	if (t20 != INT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MIN;
	volatile int32_t x86 = 4721;
	int8_t x87 = -14;
	uint64_t x88 = 958472986LLU;
	uint64_t t21 = 245468153763915LLU;

	t21 = ((x85^(x86==x87))&x88);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = -1;
	int32_t x92 = -1;
	volatile int32_t t22 = -6;

	t22 = ((x89^(x90==x91))&x92);

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = -1;
	int16_t x95 = -1;
	static int32_t x96 = INT32_MAX;

	t23 = ((x93^(x94==x95))&x96);

	if (t23 != INT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x97 = INT8_MIN;
	int16_t x98 = INT16_MAX;
	int16_t x99 = -1;
	static int8_t x100 = INT8_MIN;
	volatile int32_t t24 = -14;

	t24 = ((x97^(x98==x99))&x100);

	if (t24 != -128) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x101 = -20;
	uint8_t x102 = 42U;
	uint64_t x104 = 99200333296278671LLU;
	volatile uint64_t t25 = 13LLU;

	t25 = ((x101^(x102==x103))&x104);

	if (t25 != 99200333296278668LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x106 = -3;
	uint64_t x108 = UINT64_MAX;
	volatile uint64_t t26 = 202127917868729247LLU;

	t26 = ((x105^(x106==x107))&x108);

	if (t26 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x109 = 1U;
	static int32_t x110 = INT32_MIN;
	uint16_t x112 = 1U;
	volatile int32_t t27 = 149;

	t27 = ((x109^(x110==x111))&x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint16_t x114 = UINT16_MAX;
	static int64_t x115 = -1LL;
	volatile int32_t x116 = INT32_MAX;
	int32_t t28 = INT32_MAX;

	t28 = ((x113^(x114==x115))&x116);

	if (t28 != INT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x117 = UINT8_MAX;
	int8_t x119 = INT8_MAX;
	volatile int64_t t29 = 3LL;

	t29 = ((x117^(x118==x119))&x120);

	if (t29 != 107LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x122 = 6U;
	int64_t x123 = INT64_MAX;
	int8_t x124 = -1;
	int32_t t30 = INT32_MAX;

	t30 = ((x121^(x122==x123))&x124);

	if (t30 != INT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MIN;
	uint64_t x126 = UINT64_MAX;
	int8_t x127 = -1;
	int64_t x128 = 462656LL;
	int64_t t31 = 2117725845393LL;

	t31 = ((x125^(x126==x127))&x128);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint16_t x129 = 9U;
	int8_t x130 = 8;
	int8_t x131 = INT8_MAX;
	static volatile uint16_t x132 = 427U;

	t32 = ((x129^(x130==x131))&x132);

	if (t32 != 9) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MIN;
	int32_t x134 = INT32_MIN;
	static int32_t x135 = INT32_MIN;
	volatile int64_t t33 = 509LL;

	t33 = ((x133^(x134==x135))&x136);

	if (t33 != -2147483647LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = 3935U;
	int32_t x138 = INT32_MAX;
	uint32_t x139 = UINT32_MAX;
	int64_t x140 = -1LL;
	int64_t t34 = -688265882460LL;

	t34 = ((x137^(x138==x139))&x140);

	if (t34 != 3935LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x142 = 45835U;
	int32_t x143 = 230;
	int32_t x144 = INT32_MIN;
	int32_t t35 = INT32_MIN;

	t35 = ((x141^(x142==x143))&x144);

	if (t35 != INT32_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x147 = INT16_MIN;
	volatile int8_t x148 = -1;

	t36 = ((x145^(x146==x147))&x148);

	if (t36 != -4) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = 1056361521;
	static int8_t x150 = INT8_MAX;
	volatile int64_t x151 = INT64_MIN;
	int16_t x152 = INT16_MAX;

	t37 = ((x149^(x150==x151))&x152);

	if (t37 != 19505) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = 364282794U;
	volatile int64_t x154 = -1LL;
	uint16_t x155 = 4U;
	static int64_t x156 = INT64_MAX;
	volatile int64_t t38 = -3777LL;

	t38 = ((x153^(x154==x155))&x156);

	if (t38 != 364282794LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x157 = 2;
	int16_t x158 = INT16_MAX;
	int8_t x159 = INT8_MIN;
	uint16_t x160 = UINT16_MAX;
	static volatile int32_t t39 = 3513;

	t39 = ((x157^(x158==x159))&x160);

	if (t39 != 2) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = INT64_MAX;
	int64_t x162 = INT64_MAX;
	int8_t x163 = -1;
	uint16_t x164 = 1166U;
	int64_t t40 = 1802LL;

	t40 = ((x161^(x162==x163))&x164);

	if (t40 != 1166LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x165 = 173110140;
	int16_t x167 = -1;
	volatile uint64_t t41 = 16884LLU;

	t41 = ((x165^(x166==x167))&x168);

	if (t41 != 49LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x169 = UINT64_MAX;
	uint16_t x170 = UINT16_MAX;
	static volatile int16_t x171 = -92;
	int32_t x172 = 28907;

	t42 = ((x169^(x170==x171))&x172);

	if (t42 != 28907LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = -28;
	uint8_t x175 = UINT8_MAX;

	t43 = ((x173^(x174==x175))&x176);

	if (t43 != 2390736868LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = 106U;
	static uint64_t x178 = 507106999031142LLU;
	uint8_t x180 = 0U;
	int32_t t44 = 1;

	t44 = ((x177^(x178==x179))&x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MIN;
	int16_t x182 = INT16_MIN;
	int32_t x183 = -1;
	int64_t x184 = INT64_MIN;

	t45 = ((x181^(x182==x183))&x184);

	if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = -813711897;
	int8_t x186 = INT8_MIN;
	static volatile int8_t x187 = INT8_MAX;
	uint8_t x188 = 17U;
	int32_t t46 = -61167455;

	t46 = ((x185^(x186==x187))&x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = 82;
	int8_t x190 = INT8_MIN;
	uint16_t x191 = 5U;
	static volatile int32_t t47 = -248834881;

	t47 = ((x189^(x190==x191))&x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x194 = 212U;
	uint8_t x195 = UINT8_MAX;
	static int8_t x196 = INT8_MAX;
	volatile int32_t t48 = -381960879;

	t48 = ((x193^(x194==x195))&x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint64_t x197 = 489219LLU;
	int16_t x198 = 1;
	uint32_t x199 = 7U;
	static volatile int32_t x200 = INT32_MAX;

	t49 = ((x197^(x198==x199))&x200);

	if (t49 != 489219LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x201 = UINT32_MAX;
	static int64_t x202 = -14370499LL;
	int32_t x203 = INT32_MAX;
	static volatile int8_t x204 = INT8_MAX;
	volatile uint32_t t50 = 540386179U;

	t50 = ((x201^(x202==x203))&x204);

	if (t50 != 127U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x206 = INT8_MIN;
	uint8_t x207 = 111U;
	int16_t x208 = INT16_MAX;
	int32_t t51 = -588340;

	t51 = ((x205^(x206==x207))&x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = 66976LL;
	volatile int8_t x210 = 2;
	volatile int32_t x212 = -52866;

	t52 = ((x209^(x210==x211))&x212);

	if (t52 != 65824LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int32_t x213 = -1;
	int8_t x214 = 3;
	uint32_t x215 = 169860450U;

	t53 = ((x213^(x214==x215))&x216);

	if (t53 != 453494695646891LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = -2;
	uint32_t x219 = UINT32_MAX;
	static int64_t x220 = 25LL;
	int64_t t54 = 2154654680828412LL;

	t54 = ((x217^(x218==x219))&x220);

	if (t54 != 24LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x222 = -1;
	int16_t x224 = -1;
	volatile int32_t t55 = 252451;

	t55 = ((x221^(x222==x223))&x224);

	if (t55 != -32768) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = 11656604175081LL;
	static int8_t x226 = INT8_MIN;
	int8_t x227 = 0;
	volatile int32_t x228 = INT32_MIN;
	int64_t t56 = -1488LL;

	t56 = ((x225^(x226==x227))&x228);

	if (t56 != 11656541241344LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = INT16_MIN;
	int16_t x230 = 17;
	uint64_t x231 = 61845005427507847LLU;
	int8_t x232 = INT8_MAX;
	static int32_t t57 = 29;

	t57 = ((x229^(x230==x231))&x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x233 = INT32_MIN;
	int32_t x235 = INT32_MIN;
	static int32_t x236 = INT32_MIN;
	volatile int32_t t58 = INT32_MIN;

	t58 = ((x233^(x234==x235))&x236);

	if (t58 != INT32_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x237 = -8562;
	int8_t x239 = INT8_MIN;
	uint64_t x240 = UINT64_MAX;
	uint64_t t59 = 270508985920603LLU;

	t59 = ((x237^(x238==x239))&x240);

	if (t59 != 18446744073709543054LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MAX;
	int64_t x242 = -1LL;
	uint8_t x243 = 43U;
	int16_t x244 = -1;
	int32_t t60 = INT32_MAX;

	t60 = ((x241^(x242==x243))&x244);

	if (t60 != INT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = 2U;
	int64_t x246 = -51958517070269LL;
	static int16_t x247 = -1;
	static int8_t x248 = INT8_MIN;
	volatile int32_t t61 = -3;

	t61 = ((x245^(x246==x247))&x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x249 = 66U;
	uint8_t x250 = 7U;
	static int16_t x252 = INT16_MAX;

	t62 = ((x249^(x250==x251))&x252);

	if (t62 != 66U) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MIN;
	uint8_t x254 = UINT8_MAX;
	volatile int64_t x255 = -1LL;
	static uint64_t x256 = UINT64_MAX;
	volatile uint64_t t63 = 4894168370352LLU;

	t63 = ((x253^(x254==x255))&x256);

	if (t63 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x258 = INT64_MAX;
	int8_t x259 = -1;
	uint16_t x260 = 19U;
	int32_t t64 = 1;

	t64 = ((x257^(x258==x259))&x260);

	if (t64 != 3) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x261 = INT32_MAX;
	int32_t x262 = INT32_MIN;
	int32_t t65 = -217119;

	t65 = ((x261^(x262==x263))&x264);

	if (t65 != 64347139) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x266 = INT16_MIN;
	int64_t x267 = INT64_MIN;
	static int64_t x268 = INT64_MIN;
	static volatile int64_t t66 = -13LL;

	t66 = ((x265^(x266==x267))&x268);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = 3955495292LLU;
	static int16_t x270 = INT16_MIN;
	uint64_t x271 = 1168759557LLU;
	volatile uint16_t x272 = 7371U;

	t67 = ((x269^(x270==x271))&x272);

	if (t67 != 4168LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x273 = 14784U;
	int8_t x274 = -1;
	int64_t x275 = -1LL;
	int8_t x276 = INT8_MAX;
	static int32_t t68 = -785;

	t68 = ((x273^(x274==x275))&x276);

	if (t68 != 65) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = 63837LL;
	int16_t x278 = 197;
	volatile uint8_t x280 = UINT8_MAX;
	int64_t t69 = -1657075058766319491LL;

	t69 = ((x277^(x278==x279))&x280);

	if (t69 != 93LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = 204;
	static int64_t x282 = -1LL;
	int64_t x283 = INT64_MIN;
	int16_t x284 = -10;
	int32_t t70 = -1;

	t70 = ((x281^(x282==x283))&x284);

	if (t70 != 196) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = 90;
	volatile int16_t x286 = INT16_MAX;
	volatile uint16_t x287 = 2297U;
	int16_t x288 = INT16_MIN;

	t71 = ((x285^(x286==x287))&x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MAX;
	static int16_t x291 = -1;
	static volatile int32_t t72 = 17166775;

	t72 = ((x289^(x290==x291))&x292);

	if (t72 != 2147483640) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x294 = 42284034LLU;
	uint8_t x295 = 5U;
	int32_t t73 = 15029122;

	t73 = ((x293^(x294==x295))&x296);

	if (t73 != 2) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = -1;
	volatile int16_t x298 = INT16_MIN;
	static uint8_t x299 = 39U;
	int16_t x300 = INT16_MIN;
	volatile int32_t t74 = -6;

	t74 = ((x297^(x298==x299))&x300);

	if (t74 != -32768) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = -11684807;
	static int8_t x302 = INT8_MAX;
	static int8_t x303 = -4;
	volatile int32_t x304 = -1;
	volatile int32_t t75 = -1054652820;

	t75 = ((x301^(x302==x303))&x304);

	if (t75 != -11684807) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x306 = UINT8_MAX;
	int16_t x308 = INT16_MIN;
	volatile int32_t t76 = 18549;

	t76 = ((x305^(x306==x307))&x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x309 = 26U;
	int32_t x310 = INT32_MIN;
	uint16_t x312 = 310U;
	int32_t t77 = 194;

	t77 = ((x309^(x310==x311))&x312);

	if (t77 != 18) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = INT16_MAX;
	volatile uint64_t x315 = 4889114787089LLU;
	int16_t x316 = INT16_MAX;

	t78 = ((x313^(x314==x315))&x316);

	if (t78 != 32767) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x318 = UINT8_MAX;
	volatile int32_t x319 = 1;
	static volatile int32_t t79 = INT32_MIN;

	t79 = ((x317^(x318==x319))&x320);

	if (t79 != INT32_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x321 = INT64_MAX;
	uint32_t x322 = 216375U;
	volatile uint64_t x323 = UINT64_MAX;
	static int64_t x324 = -10098694072398LL;
	static volatile int64_t t80 = 5688383LL;

	t80 = ((x321^(x322==x323))&x324);

	if (t80 != 9223361938160703410LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x326 = 1;
	static int32_t x327 = -216941;
	volatile uint32_t t81 = 21661U;

	t81 = ((x325^(x326==x327))&x328);

	if (t81 != 3U) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x329 = INT16_MAX;
	volatile int32_t x331 = 53091;
	volatile uint32_t x332 = 3817322U;
	static volatile uint32_t t82 = 617922205U;

	t82 = ((x329^(x330==x331))&x332);

	if (t82 != 16234U) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = 475371;
	uint32_t x334 = 11837905U;
	int64_t x335 = 1660LL;
	int8_t x336 = INT8_MIN;
	int32_t t83 = -2;

	t83 = ((x333^(x334==x335))&x336);

	if (t83 != 475264) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x337 = INT16_MAX;
	uint16_t x338 = 42U;
	uint16_t x339 = 361U;
	uint16_t x340 = UINT16_MAX;
	int32_t t84 = 13430;

	t84 = ((x337^(x338==x339))&x340);

	if (t84 != 32767) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x341 = INT32_MIN;
	int16_t x342 = INT16_MIN;
	int16_t x343 = -1;
	static int16_t x344 = -52;

	t85 = ((x341^(x342==x343))&x344);

	if (t85 != INT32_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = 68U;
	int8_t x346 = -5;
	int64_t x347 = 7689623667475823LL;
	volatile int16_t x348 = INT16_MIN;
	int32_t t86 = -943966825;

	t86 = ((x345^(x346==x347))&x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x349 = UINT64_MAX;
	static int16_t x350 = INT16_MAX;
	static int8_t x351 = -6;
	int64_t x352 = 0LL;

	t87 = ((x349^(x350==x351))&x352);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int32_t x353 = -17;
	volatile uint8_t x354 = 7U;
	volatile uint32_t x355 = 56U;
	int32_t t88 = 1005649882;

	t88 = ((x353^(x354==x355))&x356);

	if (t88 != 2) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x359 = -423;
	int8_t x360 = -60;
	volatile int64_t t89 = 56788LL;

	t89 = ((x357^(x358==x359))&x360);

	if (t89 != -60LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = -554345838410744574LL;
	static volatile int64_t x363 = INT64_MAX;
	static volatile int64_t t90 = -34633610LL;

	t90 = ((x361^(x362==x363))&x364);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x365 = 15;
	volatile int64_t x366 = -2101890350624LL;
	uint16_t x367 = 4U;
	int32_t x368 = INT32_MIN;
	volatile int32_t t91 = 97339;

	t91 = ((x365^(x366==x367))&x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int64_t x370 = INT64_MAX;
	int16_t x372 = INT16_MIN;
	int32_t t92 = 12282;

	t92 = ((x369^(x370==x371))&x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x373 = INT8_MIN;
	int32_t x374 = INT32_MIN;
	static int8_t x375 = -1;
	int8_t x376 = INT8_MAX;
	volatile int32_t t93 = 8173236;

	t93 = ((x373^(x374==x375))&x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = INT8_MIN;
	static int64_t x378 = INT64_MAX;
	volatile int16_t x379 = -1;
	int8_t x380 = INT8_MIN;
	static int32_t t94 = 3547837;

	t94 = ((x377^(x378==x379))&x380);

	if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x383 = -1LL;
	volatile int32_t t95 = 6;

	t95 = ((x381^(x382==x383))&x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x385 = UINT16_MAX;
	static volatile uint32_t x386 = 30410U;
	uint64_t x387 = 8752739366781365741LLU;
	int8_t x388 = INT8_MAX;
	int32_t t96 = 55869;

	t96 = ((x385^(x386==x387))&x388);

	if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x389 = 11;
	volatile uint16_t x391 = 13U;
	static int16_t x392 = -12;
	volatile int32_t t97 = 13068;

	t97 = ((x389^(x390==x391))&x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x393 = INT32_MIN;
	int16_t x394 = INT16_MAX;
	uint32_t x395 = 3831U;
	int64_t x396 = INT64_MIN;
	int64_t t98 = INT64_MIN;

	t98 = ((x393^(x394==x395))&x396);

	if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x397 = 7366LLU;
	static int16_t x398 = -1;
	volatile uint64_t t99 = 493269815903LLU;

	t99 = ((x397^(x398==x399))&x400);

	if (t99 != 2LLU) { NG(); } else { ; }
	
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

