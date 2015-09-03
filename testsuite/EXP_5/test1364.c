#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x5 = INT16_MIN;
volatile int64_t x9 = INT64_MAX;
volatile uint64_t t2 = 250213618515028LLU;
int8_t x15 = INT8_MIN;
int64_t x23 = -24123908092LL;
int64_t t5 = INT64_MIN;
int32_t t6 = INT32_MIN;
volatile uint16_t x31 = 2U;
volatile uint64_t t7 = 36840LLU;
int16_t x37 = -426;
static int16_t x38 = INT16_MIN;
volatile int32_t t8 = -95394;
uint16_t x41 = 0U;
volatile uint64_t x43 = 329039072956746LLU;
volatile int16_t x47 = INT16_MAX;
static int32_t x52 = 160575058;
int8_t x55 = 1;
int64_t t12 = -991080248465744837LL;
int64_t x58 = INT64_MAX;
uint8_t x59 = 26U;
volatile int16_t x67 = INT16_MIN;
static volatile uint64_t t15 = UINT64_MAX;
int32_t x72 = -1053;
volatile int64_t t19 = -2047647829961841542LL;
int64_t x89 = INT64_MIN;
int8_t x97 = INT8_MIN;
uint32_t x98 = 6120U;
uint8_t x99 = 0U;
volatile int8_t x100 = 46;
volatile int8_t x102 = 12;
int16_t x103 = INT16_MAX;
static int32_t x105 = -1;
uint64_t x122 = 3LLU;
uint8_t x126 = 1U;
uint8_t x136 = 5U;
volatile uint32_t x137 = 42U;
int16_t x141 = 15978;
uint32_t x142 = 5U;
volatile int16_t x144 = INT16_MIN;
volatile int32_t x147 = -1;
int64_t t35 = INT64_MAX;
uint16_t x152 = 2896U;
int64_t x156 = INT64_MIN;
uint16_t x159 = 1U;
int8_t x165 = 1;
static int16_t x167 = INT16_MIN;
volatile int64_t t40 = 14053066525LL;
uint8_t x171 = 7U;
int64_t x173 = INT64_MIN;
volatile int32_t x175 = INT32_MAX;
int64_t t42 = -613473LL;
int64_t x180 = -95LL;
uint32_t x187 = UINT32_MAX;
volatile int32_t t46 = 70039787;
uint32_t x195 = UINT32_MAX;
uint8_t x199 = UINT8_MAX;
int64_t x200 = INT64_MIN;
volatile int64_t x205 = INT64_MIN;
volatile int32_t x207 = INT32_MIN;
static int64_t t51 = -794084LL;
int32_t x218 = -939343187;
uint8_t x219 = UINT8_MAX;
int64_t x222 = INT64_MIN;
volatile int32_t t53 = 36336;
volatile int32_t t54 = 13230342;
int64_t x230 = INT64_MIN;
volatile int64_t x231 = INT64_MIN;
static int32_t t58 = -2;
volatile uint8_t x245 = UINT8_MAX;
int16_t x252 = -1;
int64_t t60 = 5343204779LL;
int64_t x259 = INT64_MAX;
int64_t x268 = INT64_MIN;
uint32_t x276 = UINT32_MAX;
volatile uint32_t t66 = UINT32_MAX;
int64_t x289 = INT64_MIN;
static uint64_t x291 = 999LLU;
int64_t t70 = 865244068565403LL;
static int64_t x302 = INT64_MAX;
int32_t x303 = INT32_MAX;
int64_t x307 = INT64_MIN;
int32_t x311 = -8803;
uint8_t x316 = UINT8_MAX;
static volatile uint64_t x321 = UINT64_MAX;
int16_t x324 = INT16_MIN;
uint64_t t77 = UINT64_MAX;
volatile int32_t x327 = INT32_MAX;
static int16_t x335 = INT16_MIN;
int32_t x343 = 62;
volatile int32_t t82 = 69;
int8_t x349 = INT8_MAX;
int64_t x351 = INT64_MIN;
int32_t t84 = 1;
int16_t x356 = -1;
int32_t t85 = -7149973;
int32_t x359 = INT32_MIN;
static volatile int64_t t86 = INT64_MAX;
int64_t x361 = -1LL;
int32_t x374 = -1;
int32_t x376 = INT32_MIN;
int64_t x379 = -919LL;
volatile uint64_t t92 = UINT64_MAX;
int32_t x386 = 9637630;
int16_t x390 = -30;
volatile int32_t x393 = INT32_MIN;
int64_t x396 = 241972713319LL;
uint32_t x398 = UINT32_MAX;
int16_t x399 = INT16_MIN;
int32_t x405 = INT32_MAX;
volatile int64_t x408 = INT64_MIN;
uint32_t t99 = 3843U;


void f0(void) {
	static volatile int64_t x1 = INT64_MAX;
	int32_t x2 = -235976492;
	int8_t x3 = 0;
	int16_t x4 = 12;
	int64_t t0 = INT64_MAX;

	t0 = (x1|((x2<x3)+x4));

	if (t0 != INT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = -1LL;
	int8_t x7 = INT8_MIN;
	uint8_t x8 = UINT8_MAX;
	int32_t t1 = -45092804;

	t1 = (x5|((x6<x7)+x8));

	if (t1 != -32513) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint32_t x10 = UINT32_MAX;
	uint32_t x11 = 138U;
	static uint64_t x12 = 88LLU;

	t2 = (x9|((x10<x11)+x12));

	if (t2 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	uint8_t x14 = 2U;
	uint8_t x16 = UINT8_MAX;
	int32_t t3 = -7612;

	t3 = (x13|((x14<x15)+x16));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 1348U;
	static volatile int64_t x18 = INT64_MIN;
	int64_t x19 = INT64_MIN;
	uint64_t x20 = UINT64_MAX;
	static uint64_t t4 = UINT64_MAX;

	t4 = (x17|((x18<x19)+x20));

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	volatile uint8_t x22 = 1U;
	int8_t x24 = 0;

	t5 = (x21|((x22<x23)+x24));

	if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	uint64_t x26 = 12LLU;
	static uint16_t x27 = 4U;
	int32_t x28 = INT32_MIN;

	t6 = (x25|((x26<x27)+x28));

	if (t6 != INT32_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -79;
	static volatile int8_t x30 = -1;
	uint64_t x32 = UINT64_MAX;

	t7 = (x29|((x30<x31)+x32));

	if (t7 != 18446744073709551537LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x39 = -61453;
	static volatile int16_t x40 = INT16_MIN;

	t8 = (x37|((x38<x39)+x40));

	if (t8 != -426) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x42 = -1;
	int16_t x44 = 6;
	volatile int32_t t9 = 25566943;

	t9 = (x41|((x42<x43)+x44));

	if (t9 != 6) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = INT64_MIN;
	uint64_t x46 = 1147LLU;
	int16_t x48 = INT16_MIN;
	volatile int64_t t10 = -3412299LL;

	t10 = (x45|((x46<x47)+x48));

	if (t10 != -32767LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = 19;
	static int16_t x50 = 2342;
	static uint32_t x51 = UINT32_MAX;
	static int32_t t11 = 856967323;

	t11 = (x49|((x50<x51)+x52));

	if (t11 != 160575059) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x53 = 1119146;
	static int64_t x54 = INT64_MIN;
	int64_t x56 = INT64_MIN;

	t12 = (x53|((x54<x55)+x56));

	if (t12 != -9223372036853656661LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x57 = 23952U;
	uint32_t x60 = UINT32_MAX;
	static uint32_t t13 = UINT32_MAX;

	t13 = (x57|((x58<x59)+x60));

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = -14;
	int64_t x62 = INT64_MIN;
	int64_t x63 = INT64_MIN;
	int16_t x64 = -93;
	volatile int32_t t14 = 0;

	t14 = (x61|((x62<x63)+x64));

	if (t14 != -13) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x65 = -1;
	int64_t x66 = -1LL;
	volatile uint64_t x68 = 22694LLU;

	t15 = (x65|((x66<x67)+x68));

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x69 = -1;
	uint8_t x70 = UINT8_MAX;
	int8_t x71 = -1;
	int32_t t16 = -15;

	t16 = (x69|((x70<x71)+x72));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x73 = -1;
	static uint64_t x74 = UINT64_MAX;
	int8_t x75 = INT8_MIN;
	static int64_t x76 = -1LL;
	volatile int64_t t17 = -3322562645LL;

	t17 = (x73|((x74<x75)+x76));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x77 = 18532LLU;
	int16_t x78 = -2;
	volatile int8_t x79 = INT8_MIN;
	int64_t x80 = 2404433878564LL;
	uint64_t t18 = 70114835067238452LLU;

	t18 = (x77|((x78<x79)+x80));

	if (t18 != 2404433878628LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = INT64_MIN;
	uint8_t x82 = 3U;
	int64_t x83 = 21003049191166LL;
	static int16_t x84 = INT16_MIN;

	t19 = (x81|((x82<x83)+x84));

	if (t19 != -32767LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = INT16_MAX;
	uint64_t x86 = UINT64_MAX;
	static int8_t x87 = INT8_MIN;
	uint16_t x88 = 4U;
	volatile int32_t t20 = 79;

	t20 = (x85|((x86<x87)+x88));

	if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x90 = INT64_MIN;
	static volatile int64_t x91 = INT64_MIN;
	volatile uint64_t x92 = 148347439076LLU;
	volatile uint64_t t21 = 651451201073LLU;

	t21 = (x89|((x90<x91)+x92));

	if (t21 != 9223372185202214884LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x93 = INT64_MIN;
	int16_t x94 = -314;
	uint16_t x95 = 10U;
	static uint16_t x96 = UINT16_MAX;
	int64_t t22 = 1921472LL;

	t22 = (x93|((x94<x95)+x96));

	if (t22 != -9223372036854710272LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t t23 = -128117887;

	t23 = (x97|((x98<x99)+x100));

	if (t23 != -82) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x101 = -10836;
	int16_t x104 = INT16_MIN;
	volatile int32_t t24 = -36020;

	t24 = (x101|((x102<x103)+x104));

	if (t24 != -10835) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x106 = INT8_MIN;
	int16_t x107 = INT16_MAX;
	int32_t x108 = INT32_MIN;
	volatile int32_t t25 = 414377;

	t25 = (x105|((x106<x107)+x108));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x109 = INT16_MAX;
	int64_t x110 = INT64_MAX;
	volatile int8_t x111 = -1;
	int16_t x112 = INT16_MIN;
	int32_t t26 = -35;

	t26 = (x109|((x110<x111)+x112));

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = -1LL;
	int8_t x114 = 1;
	uint16_t x115 = 152U;
	static int32_t x116 = -10774;
	volatile int64_t t27 = 900LL;

	t27 = (x113|((x114<x115)+x116));

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x117 = INT64_MAX;
	static int16_t x118 = INT16_MIN;
	volatile int8_t x119 = 0;
	int32_t x120 = -2692;
	int64_t t28 = 12561103322243297LL;

	t28 = (x117|((x118<x119)+x120));

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x121 = -177622LL;
	int64_t x123 = -1LL;
	int64_t x124 = INT64_MIN;
	int64_t t29 = 65653306LL;

	t29 = (x121|((x122<x123)+x124));

	if (t29 != -177621LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = INT16_MAX;
	int32_t x127 = INT32_MAX;
	uint8_t x128 = 57U;
	int32_t t30 = 134446;

	t30 = (x125|((x126<x127)+x128));

	if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x129 = INT8_MIN;
	int8_t x130 = INT8_MAX;
	uint32_t x131 = UINT32_MAX;
	int64_t x132 = 6566LL;
	int64_t t31 = 443001738260801446LL;

	t31 = (x129|((x130<x131)+x132));

	if (t31 != -89LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x133 = -7;
	uint64_t x134 = 8LLU;
	int32_t x135 = 49079011;
	volatile int32_t t32 = -123;

	t32 = (x133|((x134<x135)+x136));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x138 = 1598978259LL;
	int16_t x139 = -1;
	uint32_t x140 = 1U;
	volatile uint32_t t33 = 1715U;

	t33 = (x137|((x138<x139)+x140));

	if (t33 != 43U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x143 = -1287439643LL;
	volatile int32_t t34 = 176969;

	t34 = (x141|((x142<x143)+x144));

	if (t34 != -16790) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x145 = INT64_MAX;
	static int16_t x146 = INT16_MIN;
	uint16_t x148 = UINT16_MAX;

	t35 = (x145|((x146<x147)+x148));

	if (t35 != INT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x149 = INT16_MAX;
	uint16_t x150 = UINT16_MAX;
	uint32_t x151 = 32303968U;
	int32_t t36 = -11193245;

	t36 = (x149|((x150<x151)+x152));

	if (t36 != 32767) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x153 = INT64_MAX;
	static volatile uint16_t x154 = UINT16_MAX;
	static int8_t x155 = INT8_MIN;
	int64_t t37 = -449813LL;

	t37 = (x153|((x154<x155)+x156));

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x157 = INT16_MAX;
	static int32_t x158 = -2;
	uint8_t x160 = 37U;
	int32_t t38 = 828659791;

	t38 = (x157|((x158<x159)+x160));

	if (t38 != 32767) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x161 = 10848529U;
	int8_t x162 = INT8_MIN;
	volatile int64_t x163 = -833781764848499LL;
	uint32_t x164 = 17U;
	uint32_t t39 = 27845225U;

	t39 = (x161|((x162<x163)+x164));

	if (t39 != 10848529U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x166 = INT16_MIN;
	int64_t x168 = INT64_MIN;

	t40 = (x165|((x166<x167)+x168));

	if (t40 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x169 = 0;
	int8_t x170 = INT8_MIN;
	static int16_t x172 = INT16_MIN;
	int32_t t41 = 825019;

	t41 = (x169|((x170<x171)+x172));

	if (t41 != -32767) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint8_t x174 = 0U;
	int16_t x176 = INT16_MIN;

	t42 = (x173|((x174<x175)+x176));

	if (t42 != -32767LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x177 = 44;
	uint8_t x178 = 0U;
	volatile int8_t x179 = INT8_MIN;
	int64_t t43 = 5614728LL;

	t43 = (x177|((x178<x179)+x180));

	if (t43 != -83LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x181 = 1353U;
	int64_t x182 = INT64_MIN;
	volatile int8_t x183 = INT8_MIN;
	int64_t x184 = INT64_MIN;
	volatile int64_t t44 = 75582847LL;

	t44 = (x181|((x182<x183)+x184));

	if (t44 != -9223372036854774455LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x185 = UINT32_MAX;
	static volatile int8_t x186 = -2;
	uint64_t x188 = UINT64_MAX;
	volatile uint64_t t45 = 795338201534610687LLU;

	t45 = (x185|((x186<x187)+x188));

	if (t45 != 4294967295LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x189 = INT8_MAX;
	volatile uint16_t x190 = 0U;
	volatile int64_t x191 = -530648384LL;
	volatile int8_t x192 = 2;

	t46 = (x189|((x190<x191)+x192));

	if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x193 = INT32_MAX;
	volatile int8_t x194 = -1;
	static uint8_t x196 = 98U;
	static int32_t t47 = INT32_MAX;

	t47 = (x193|((x194<x195)+x196));

	if (t47 != INT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x197 = INT32_MIN;
	uint8_t x198 = UINT8_MAX;
	volatile int64_t t48 = -1134420162960991710LL;

	t48 = (x197|((x198<x199)+x200));

	if (t48 != -2147483648LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x201 = 4;
	uint8_t x202 = 4U;
	int8_t x203 = -1;
	int8_t x204 = -1;
	int32_t t49 = -902146678;

	t49 = (x201|((x202<x203)+x204));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x206 = UINT8_MAX;
	uint64_t x208 = UINT64_MAX;
	volatile uint64_t t50 = UINT64_MAX;

	t50 = (x205|((x206<x207)+x208));

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x209 = 374U;
	static volatile int64_t x210 = INT64_MAX;
	int8_t x211 = -27;
	int64_t x212 = 70363523775735015LL;

	t51 = (x209|((x210<x211)+x212));

	if (t51 != 70363523775735287LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x217 = -1LL;
	int32_t x220 = 42949;
	volatile int64_t t52 = -70865699LL;

	t52 = (x217|((x218<x219)+x220));

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x221 = 0U;
	int32_t x223 = INT32_MAX;
	int8_t x224 = -2;

	t53 = (x221|((x222<x223)+x224));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x225 = INT32_MAX;
	uint8_t x226 = 3U;
	int8_t x227 = 0;
	static int16_t x228 = -1;

	t54 = (x225|((x226<x227)+x228));

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x229 = -1792;
	uint16_t x232 = 1U;
	int32_t t55 = -195671064;

	t55 = (x229|((x230<x231)+x232));

	if (t55 != -1791) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x233 = 110796U;
	int16_t x234 = INT16_MIN;
	int64_t x235 = INT64_MIN;
	int16_t x236 = INT16_MIN;
	volatile uint32_t t56 = 1U;

	t56 = (x233|((x234<x235)+x236));

	if (t56 != 4294947020U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x237 = INT8_MAX;
	int64_t x238 = -1LL;
	volatile uint8_t x239 = UINT8_MAX;
	int8_t x240 = INT8_MIN;
	int32_t t57 = 113675918;

	t57 = (x237|((x238<x239)+x240));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x241 = -1;
	uint8_t x242 = UINT8_MAX;
	volatile int16_t x243 = -1;
	int8_t x244 = INT8_MIN;

	t58 = (x241|((x242<x243)+x244));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x246 = -1;
	volatile int8_t x247 = INT8_MIN;
	int16_t x248 = INT16_MIN;
	volatile int32_t t59 = 634908;

	t59 = (x245|((x246<x247)+x248));

	if (t59 != -32513) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x249 = -40910824470LL;
	volatile int8_t x250 = INT8_MAX;
	uint8_t x251 = 1U;

	t60 = (x249|((x250<x251)+x252));

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x253 = INT16_MIN;
	static uint32_t x254 = 156734403U;
	int16_t x255 = INT16_MIN;
	uint32_t x256 = UINT32_MAX;
	static volatile uint32_t t61 = 385677U;

	t61 = (x253|((x254<x255)+x256));

	if (t61 != 4294934528U) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x257 = -1LL;
	int16_t x258 = INT16_MAX;
	int32_t x260 = INT32_MIN;
	int64_t t62 = -185LL;

	t62 = (x257|((x258<x259)+x260));

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int8_t x261 = -1;
	volatile uint16_t x262 = 893U;
	int64_t x263 = INT64_MIN;
	volatile int32_t x264 = 3576;
	int32_t t63 = 114311;

	t63 = (x261|((x262<x263)+x264));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x265 = INT16_MIN;
	static uint32_t x266 = UINT32_MAX;
	int32_t x267 = -1;
	int64_t t64 = -12025184787276410LL;

	t64 = (x265|((x266<x267)+x268));

	if (t64 != -32768LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x269 = 116U;
	volatile int32_t x270 = -1;
	uint8_t x271 = UINT8_MAX;
	static int32_t x272 = INT32_MIN;
	volatile int32_t t65 = -40865589;

	t65 = (x269|((x270<x271)+x272));

	if (t65 != -2147483531) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x273 = INT16_MIN;
	int8_t x274 = -1;
	int64_t x275 = INT64_MIN;

	t66 = (x273|((x274<x275)+x276));

	if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x277 = INT64_MIN;
	int8_t x278 = INT8_MAX;
	static uint16_t x279 = UINT16_MAX;
	int16_t x280 = -1;
	int64_t t67 = INT64_MIN;

	t67 = (x277|((x278<x279)+x280));

	if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x281 = INT32_MAX;
	volatile int16_t x282 = INT16_MAX;
	volatile uint64_t x283 = 154822092LLU;
	static volatile int16_t x284 = -1;
	volatile int32_t t68 = INT32_MAX;

	t68 = (x281|((x282<x283)+x284));

	if (t68 != INT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x285 = INT32_MAX;
	volatile uint32_t x286 = 123U;
	volatile int32_t x287 = INT32_MAX;
	volatile int16_t x288 = 432;
	static volatile int32_t t69 = INT32_MAX;

	t69 = (x285|((x286<x287)+x288));

	if (t69 != INT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x290 = INT16_MIN;
	volatile int32_t x292 = INT32_MAX;

	t70 = (x289|((x290<x291)+x292));

	if (t70 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x297 = INT64_MIN;
	static int64_t x298 = 1111232278958LL;
	int64_t x299 = 38928322688430LL;
	int64_t x300 = 36027LL;
	int64_t t71 = -2126193466LL;

	t71 = (x297|((x298<x299)+x300));

	if (t71 != -9223372036854739780LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x301 = UINT64_MAX;
	uint8_t x304 = 15U;
	volatile uint64_t t72 = UINT64_MAX;

	t72 = (x301|((x302<x303)+x304));

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int16_t x305 = INT16_MIN;
	int8_t x306 = INT8_MAX;
	int32_t x308 = INT32_MIN;
	volatile int32_t t73 = -11;

	t73 = (x305|((x306<x307)+x308));

	if (t73 != -32768) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x309 = INT16_MAX;
	static volatile uint8_t x310 = 0U;
	int8_t x312 = -1;
	int32_t t74 = -187270;

	t74 = (x309|((x310<x311)+x312));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x313 = INT32_MIN;
	int16_t x314 = 0;
	int8_t x315 = INT8_MAX;
	static volatile int32_t t75 = 1263;

	t75 = (x313|((x314<x315)+x316));

	if (t75 != -2147483392) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x317 = -1;
	static int64_t x318 = INT64_MAX;
	static uint16_t x319 = 3252U;
	uint64_t x320 = UINT64_MAX;
	uint64_t t76 = UINT64_MAX;

	t76 = (x317|((x318<x319)+x320));

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x322 = 3704U;
	uint32_t x323 = 938U;

	t77 = (x321|((x322<x323)+x324));

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x325 = INT8_MAX;
	uint64_t x326 = 134658LLU;
	static int8_t x328 = 0;
	int32_t t78 = -5856;

	t78 = (x325|((x326<x327)+x328));

	if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x329 = 506457U;
	int8_t x330 = INT8_MAX;
	static int64_t x331 = INT64_MIN;
	volatile int8_t x332 = INT8_MIN;
	volatile uint32_t t79 = 205U;

	t79 = (x329|((x330<x331)+x332));

	if (t79 != 4294967257U) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int8_t x333 = INT8_MIN;
	static int8_t x334 = INT8_MAX;
	static uint8_t x336 = UINT8_MAX;
	int32_t t80 = -1889921;

	t80 = (x333|((x334<x335)+x336));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x337 = -1LL;
	int16_t x338 = -1;
	uint32_t x339 = 1024060U;
	uint64_t x340 = 32LLU;
	uint64_t t81 = UINT64_MAX;

	t81 = (x337|((x338<x339)+x340));

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x341 = INT32_MIN;
	uint32_t x342 = UINT32_MAX;
	uint8_t x344 = 30U;

	t82 = (x341|((x342<x343)+x344));

	if (t82 != -2147483618) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint16_t x345 = 15U;
	volatile uint64_t x346 = 2205898545474186LLU;
	int16_t x347 = INT16_MIN;
	int8_t x348 = INT8_MAX;
	int32_t t83 = -4;

	t83 = (x345|((x346<x347)+x348));

	if (t83 != 143) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x350 = 19883723U;
	volatile int32_t x352 = 178957;

	t84 = (x349|((x350<x351)+x352));

	if (t84 != 179071) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x353 = UINT16_MAX;
	int16_t x354 = INT16_MAX;
	uint8_t x355 = UINT8_MAX;

	t85 = (x353|((x354<x355)+x356));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x357 = 13;
	int64_t x358 = -1LL;
	int64_t x360 = INT64_MAX;

	t86 = (x357|((x358<x359)+x360));

	if (t86 != INT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x362 = INT8_MAX;
	static int64_t x363 = -1LL;
	int64_t x364 = -1LL;
	static volatile int64_t t87 = 689934997LL;

	t87 = (x361|((x362<x363)+x364));

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x365 = INT8_MIN;
	int64_t x366 = INT64_MIN;
	static int8_t x367 = INT8_MIN;
	volatile uint8_t x368 = UINT8_MAX;
	volatile int32_t t88 = -119650;

	t88 = (x365|((x366<x367)+x368));

	if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x369 = -1;
	uint8_t x370 = 0U;
	int32_t x371 = -3;
	static int8_t x372 = INT8_MIN;
	int32_t t89 = -9601;

	t89 = (x369|((x370<x371)+x372));

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x373 = INT16_MIN;
	int32_t x375 = INT32_MIN;
	int32_t t90 = -389;

	t90 = (x373|((x374<x375)+x376));

	if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x377 = 113U;
	volatile uint16_t x378 = 814U;
	volatile int16_t x380 = -1;
	volatile uint32_t t91 = UINT32_MAX;

	t91 = (x377|((x378<x379)+x380));

	if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x381 = UINT64_MAX;
	int16_t x382 = 561;
	static volatile int8_t x383 = INT8_MAX;
	volatile int8_t x384 = INT8_MAX;

	t92 = (x381|((x382<x383)+x384));

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x385 = UINT16_MAX;
	volatile int64_t x387 = INT64_MIN;
	int8_t x388 = INT8_MIN;
	int32_t t93 = -50888466;

	t93 = (x385|((x386<x387)+x388));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x389 = INT8_MIN;
	static volatile int32_t x391 = 5297;
	int32_t x392 = INT32_MIN;
	int32_t t94 = -37704594;

	t94 = (x389|((x390<x391)+x392));

	if (t94 != -127) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x394 = INT8_MAX;
	int32_t x395 = -1;
	static int64_t t95 = -126458530080588LL;

	t95 = (x393|((x394<x395)+x396));

	if (t95 != -692938905LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x397 = INT32_MIN;
	int8_t x400 = 60;
	volatile int32_t t96 = -1;

	t96 = (x397|((x398<x399)+x400));

	if (t96 != -2147483588) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x401 = 249842LLU;
	int8_t x402 = -1;
	static uint64_t x403 = UINT64_MAX;
	int8_t x404 = INT8_MIN;
	static volatile uint64_t t97 = 182629407LLU;

	t97 = (x401|((x402<x403)+x404));

	if (t97 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x406 = INT8_MIN;
	int32_t x407 = INT32_MIN;
	volatile int64_t t98 = 5535167030175155LL;

	t98 = (x405|((x406<x407)+x408));

	if (t98 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x409 = 7U;
	volatile uint16_t x410 = UINT16_MAX;
	int8_t x411 = -7;
	int8_t x412 = INT8_MIN;

	t99 = (x409|((x410<x411)+x412));

	if (t99 != 4294967175U) { NG(); } else { ; }
	
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

