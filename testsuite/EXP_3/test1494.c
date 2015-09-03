#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x7 = UINT16_MAX;
int64_t x18 = -1LL;
static int64_t t4 = -134883391914858LL;
uint8_t x21 = UINT8_MAX;
volatile uint32_t t7 = 3U;
int8_t x33 = INT8_MIN;
volatile int64_t x35 = -1LL;
int32_t x40 = -1;
uint32_t x41 = 500U;
int64_t x42 = INT64_MIN;
static int64_t x57 = INT64_MAX;
int64_t x59 = -1LL;
static int8_t x64 = INT8_MAX;
volatile int64_t t15 = 0LL;
static uint64_t x68 = 349LLU;
int8_t x75 = -57;
uint32_t x76 = 1088835355U;
int8_t x79 = INT8_MIN;
uint64_t t19 = 5319910LLU;
uint32_t x84 = 159U;
int8_t x85 = INT8_MIN;
volatile int16_t x86 = 4;
int16_t x89 = INT16_MIN;
uint8_t x90 = 0U;
int32_t x91 = -1;
static uint16_t x92 = 26562U;
int8_t x93 = -1;
volatile int32_t t23 = -254590;
volatile int64_t x103 = 1LL;
uint64_t x110 = 28326795676LLU;
static int32_t x114 = -54268;
volatile int64_t x115 = INT64_MAX;
int64_t x117 = 2511816747636LL;
static volatile uint64_t x118 = 723539517316LLU;
volatile uint64_t t29 = 1575722575LLU;
volatile int16_t x126 = INT16_MAX;
int64_t x127 = -423842398881979838LL;
uint8_t x129 = 21U;
volatile uint8_t x131 = 49U;
static int32_t t32 = -1374;
static int32_t x133 = -1;
volatile int64_t x136 = -1LL;
static uint32_t x139 = 0U;
static int8_t x142 = 4;
static volatile int16_t x146 = INT16_MIN;
int64_t x155 = 1479LL;
volatile int32_t x158 = INT32_MIN;
int64_t x165 = INT64_MAX;
volatile int16_t x172 = -1;
int32_t t42 = -249696300;
uint16_t x175 = 7U;
static volatile uint16_t x179 = UINT16_MAX;
int32_t t44 = 7003;
volatile uint64_t x183 = UINT64_MAX;
int16_t x186 = INT16_MAX;
static volatile uint64_t x190 = 1018954LLU;
volatile int64_t x191 = 192836082LL;
int32_t t50 = 161735646;
static volatile int32_t t52 = 387410040;
volatile uint64_t x214 = 205333290201034LLU;
static int16_t x218 = INT16_MIN;
int64_t x227 = -1LL;
int32_t x234 = INT32_MIN;
int32_t x235 = 29998;
volatile int64_t t58 = INT64_MIN;
volatile int32_t t60 = -2809199;
int32_t x246 = INT32_MAX;
uint16_t x247 = 22766U;
uint64_t x255 = UINT64_MAX;
volatile uint64_t t65 = 32554572LLU;
uint8_t x279 = 57U;
uint16_t x282 = 17923U;
volatile int16_t x289 = INT16_MIN;
volatile int32_t t72 = -1;
static int32_t t75 = -222;
uint64_t x305 = 11375754711294497LLU;
static int8_t x306 = INT8_MIN;
int32_t x309 = 73195482;
int16_t x312 = -1;
uint64_t x318 = 197267427LLU;
uint64_t t79 = 86663010372432534LLU;
int64_t x321 = INT64_MIN;
volatile int8_t x323 = INT8_MIN;
static int64_t t80 = -112028LL;
static volatile uint8_t x327 = UINT8_MAX;
volatile int64_t t81 = -151191326LL;
int32_t x332 = INT32_MAX;
uint8_t x334 = UINT8_MAX;
uint8_t x344 = 31U;
int32_t t85 = -4838696;
int32_t x347 = -1;
static uint64_t x348 = 48535116278506LLU;
int64_t x351 = -301079LL;
static volatile int16_t x352 = 0;
int32_t x353 = -197690643;
int64_t x355 = -1LL;
int32_t t88 = -117472702;
int16_t x360 = INT16_MAX;
uint32_t x374 = 912U;
static uint16_t x380 = 13165U;
static uint64_t x381 = 119960295LLU;
int16_t x382 = -1;
uint64_t t95 = 860510324LLU;
int64_t t97 = -1807089790LL;
int16_t x393 = INT16_MAX;
static int32_t x396 = -1;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	uint8_t x2 = 2U;
	int16_t x3 = INT16_MIN;
	int8_t x4 = -1;
	volatile int32_t t0 = -5248561;

	t0 = ((x1&x2)|(x3<x4));

	if (t0 != 3) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 957LL;
	uint8_t x6 = 0U;
	volatile int16_t x8 = INT16_MAX;
	int64_t t1 = 3926687037118822LL;

	t1 = ((x5&x6)|(x7<x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = INT16_MAX;
	int32_t x10 = -1;
	volatile int32_t x11 = INT32_MAX;
	int64_t x12 = INT64_MIN;
	int32_t t2 = -214;

	t2 = ((x9&x10)|(x11<x12));

	if (t2 != 32767) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x13 = 832368688U;
	static int16_t x14 = -1;
	static uint16_t x15 = 1566U;
	static int16_t x16 = -1;
	uint32_t t3 = 60899081U;

	t3 = ((x13&x14)|(x15<x16));

	if (t3 != 832368688U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	static int16_t x19 = -1;
	static volatile int16_t x20 = INT16_MIN;

	t4 = ((x17&x18)|(x19<x20));

	if (t4 != -128LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x22 = UINT32_MAX;
	volatile int8_t x23 = -1;
	int8_t x24 = -6;
	volatile uint32_t t5 = 44638096U;

	t5 = ((x21&x22)|(x23<x24));

	if (t5 != 255U) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 6910194U;
	int8_t x26 = -2;
	int64_t x27 = INT64_MAX;
	int16_t x28 = INT16_MIN;
	volatile uint32_t t6 = 79U;

	t6 = ((x25&x26)|(x27<x28));

	if (t6 != 6910194U) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int16_t x29 = -568;
	uint32_t x30 = 1352827U;
	static int8_t x31 = INT8_MAX;
	int32_t x32 = -25280421;

	t7 = ((x29&x30)|(x31<x32));

	if (t7 != 1352776U) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x34 = INT8_MIN;
	uint8_t x36 = 6U;
	int32_t t8 = 0;

	t8 = ((x33&x34)|(x35<x36));

	if (t8 != -127) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = 106;
	int8_t x38 = -1;
	int32_t x39 = INT32_MIN;
	int32_t t9 = 621765788;

	t9 = ((x37&x38)|(x39<x40));

	if (t9 != 107) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x43 = -558LL;
	static int32_t x44 = 13029;
	int64_t t10 = -2395867LL;

	t10 = ((x41&x42)|(x43<x44));

	if (t10 != 1LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	int16_t x46 = 1;
	static int8_t x47 = INT8_MAX;
	int64_t x48 = 9744614361976LL;
	volatile int64_t t11 = 2849329276LL;

	t11 = ((x45&x46)|(x47<x48));

	if (t11 != 1LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int8_t x49 = -23;
	volatile uint16_t x50 = 1406U;
	static int32_t x51 = INT32_MIN;
	int64_t x52 = INT64_MAX;
	static int32_t t12 = 140758371;

	t12 = ((x49&x50)|(x51<x52));

	if (t12 != 1385) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	static volatile uint8_t x54 = 17U;
	uint8_t x55 = 0U;
	int64_t x56 = INT64_MIN;
	volatile int32_t t13 = 1899079;

	t13 = ((x53&x54)|(x55<x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x58 = -48;
	int16_t x60 = INT16_MIN;
	int64_t t14 = 489679194238930335LL;

	t14 = ((x57&x58)|(x59<x60));

	if (t14 != 9223372036854775760LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x61 = INT64_MIN;
	volatile int8_t x62 = -1;
	volatile int32_t x63 = INT32_MIN;

	t15 = ((x61&x62)|(x63<x64));

	if (t15 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x65 = 6957;
	int64_t x66 = 774457827016LL;
	volatile int64_t x67 = INT64_MIN;
	volatile int64_t t16 = 1LL;

	t16 = ((x65&x66)|(x67<x68));

	if (t16 != 6664LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = 176U;
	int64_t x70 = INT64_MIN;
	uint32_t x71 = UINT32_MAX;
	int8_t x72 = -2;
	static int64_t t17 = 6927810LL;

	t17 = ((x69&x70)|(x71<x72));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x73 = INT32_MIN;
	static int16_t x74 = -10;
	static int32_t t18 = INT32_MIN;

	t18 = ((x73&x74)|(x75<x76));

	if (t18 != INT32_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MAX;
	static uint64_t x78 = UINT64_MAX;
	int64_t x80 = -1LL;

	t19 = ((x77&x78)|(x79<x80));

	if (t19 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MIN;
	int16_t x82 = -1;
	int32_t x83 = INT32_MIN;
	volatile int64_t t20 = INT64_MIN;

	t20 = ((x81&x82)|(x83<x84));

	if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x87 = 3157896LLU;
	static int16_t x88 = -1;
	int32_t t21 = 22431;

	t21 = ((x85&x86)|(x87<x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t t22 = 114005;

	t22 = ((x89&x90)|(x91<x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x94 = -1;
	int8_t x95 = INT8_MIN;
	int32_t x96 = INT32_MIN;

	t23 = ((x93&x94)|(x95<x96));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x97 = INT64_MIN;
	uint64_t x98 = 52557871559LLU;
	static int64_t x99 = INT64_MIN;
	int32_t x100 = INT32_MAX;
	volatile uint64_t t24 = 32253209532LLU;

	t24 = ((x97&x98)|(x99<x100));

	if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MIN;
	int16_t x102 = -28;
	static int64_t x104 = INT64_MIN;
	int32_t t25 = -12374;

	t25 = ((x101&x102)|(x103<x104));

	if (t25 != -32768) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = -3;
	uint64_t x106 = UINT64_MAX;
	volatile uint8_t x107 = 1U;
	int32_t x108 = -618101584;
	uint64_t t26 = 73464372223940559LLU;

	t26 = ((x105&x106)|(x107<x108));

	if (t26 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = UINT16_MAX;
	int64_t x111 = INT64_MAX;
	static int16_t x112 = -988;
	volatile uint64_t t27 = 1892696031348152707LLU;

	t27 = ((x109&x110)|(x111<x112));

	if (t27 != 39324LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = 739;
	uint64_t x116 = UINT64_MAX;
	volatile int32_t t28 = 5382824;

	t28 = ((x113&x114)|(x115<x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x119 = 1622U;
	volatile int32_t x120 = INT32_MIN;

	t29 = ((x117&x118)|(x119<x120));

	if (t29 != 35740764677LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MIN;
	int16_t x122 = INT16_MIN;
	int32_t x123 = -290450;
	static uint32_t x124 = UINT32_MAX;
	int32_t t30 = 24;

	t30 = ((x121&x122)|(x123<x124));

	if (t30 != -2147483647) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = -208162322;
	int8_t x128 = 14;
	int32_t t31 = 814966;

	t31 = ((x125&x126)|(x127<x128));

	if (t31 != 12783) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x130 = 1U;
	volatile int8_t x132 = INT8_MAX;

	t32 = ((x129&x130)|(x131<x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x134 = INT8_MIN;
	static volatile int8_t x135 = INT8_MAX;
	volatile int32_t t33 = 6854;

	t33 = ((x133&x134)|(x135<x136));

	if (t33 != -128) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = 12399U;
	volatile int16_t x138 = INT16_MIN;
	int64_t x140 = -1356789417LL;
	uint32_t t34 = 41527465U;

	t34 = ((x137&x138)|(x139<x140));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x141 = UINT16_MAX;
	uint32_t x143 = 6334U;
	uint32_t x144 = 11700417U;
	static int32_t t35 = 76891;

	t35 = ((x141&x142)|(x143<x144));

	if (t35 != 5) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x145 = UINT16_MAX;
	int64_t x147 = 2511968447LL;
	int32_t x148 = -1;
	volatile int32_t t36 = 0;

	t36 = ((x145&x146)|(x147<x148));

	if (t36 != 32768) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = UINT32_MAX;
	static int32_t x150 = INT32_MIN;
	uint16_t x151 = 1913U;
	uint64_t x152 = UINT64_MAX;
	volatile uint32_t t37 = 2362387U;

	t37 = ((x149&x150)|(x151<x152));

	if (t37 != 2147483649U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x153 = UINT32_MAX;
	static int64_t x154 = INT64_MIN;
	static int32_t x156 = -8;
	volatile int64_t t38 = -345327068LL;

	t38 = ((x153&x154)|(x155<x156));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x157 = 153659;
	static volatile uint16_t x159 = 787U;
	int64_t x160 = INT64_MIN;
	volatile int32_t t39 = 8;

	t39 = ((x157&x158)|(x159<x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MIN;
	static int32_t x162 = 342;
	uint32_t x163 = 31U;
	int16_t x164 = -1;
	volatile int32_t t40 = 794725972;

	t40 = ((x161&x162)|(x163<x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x166 = 414;
	static uint16_t x167 = 1882U;
	volatile int8_t x168 = INT8_MIN;
	int64_t t41 = 104086779LL;

	t41 = ((x165&x166)|(x167<x168));

	if (t41 != 414LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = -16349;
	volatile uint8_t x170 = 0U;
	int16_t x171 = INT16_MIN;

	t42 = ((x169&x170)|(x171<x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = 14U;
	int8_t x174 = -1;
	int32_t x176 = INT32_MIN;
	volatile int32_t t43 = 85941677;

	t43 = ((x173&x174)|(x175<x176));

	if (t43 != 14) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = -9271368;
	int32_t x178 = INT32_MIN;
	volatile uint64_t x180 = UINT64_MAX;

	t44 = ((x177&x178)|(x179<x180));

	if (t44 != -2147483647) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = 1;
	volatile uint32_t x182 = 25U;
	static int64_t x184 = -102328324654320LL;
	uint32_t t45 = 2558U;

	t45 = ((x181&x182)|(x183<x184));

	if (t45 != 1U) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x185 = INT64_MIN;
	uint32_t x187 = UINT32_MAX;
	int64_t x188 = INT64_MAX;
	volatile int64_t t46 = 12840374312LL;

	t46 = ((x185&x186)|(x187<x188));

	if (t46 != 1LL) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint16_t x189 = UINT16_MAX;
	uint8_t x192 = 14U;
	static uint64_t t47 = 2838512346LLU;

	t47 = ((x189&x190)|(x191<x192));

	if (t47 != 35914LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = 197LL;
	int64_t x194 = INT64_MIN;
	int64_t x195 = 53248960153LL;
	uint64_t x196 = UINT64_MAX;
	int64_t t48 = -766LL;

	t48 = ((x193&x194)|(x195<x196));

	if (t48 != 1LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x197 = 12U;
	volatile int32_t x198 = -1;
	static int8_t x199 = INT8_MIN;
	static int64_t x200 = INT64_MIN;
	int32_t t49 = -7760;

	t49 = ((x197&x198)|(x199<x200));

	if (t49 != 12) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x201 = 3;
	int8_t x202 = INT8_MIN;
	int8_t x203 = -1;
	int8_t x204 = INT8_MIN;

	t50 = ((x201&x202)|(x203<x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x205 = INT32_MIN;
	uint32_t x206 = 1396U;
	static int8_t x207 = -7;
	uint64_t x208 = 808231904879267699LLU;
	uint32_t t51 = 0U;

	t51 = ((x205&x206)|(x207<x208));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = 1;
	int16_t x210 = INT16_MAX;
	uint16_t x211 = 480U;
	int64_t x212 = 3376829077124855LL;

	t52 = ((x209&x210)|(x211<x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x213 = 6428826LL;
	int16_t x215 = 800;
	int32_t x216 = INT32_MIN;
	uint64_t t53 = 414193985840933LLU;

	t53 = ((x213&x214)|(x215<x216));

	if (t53 != 4327562LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MIN;
	int16_t x219 = INT16_MIN;
	int32_t x220 = INT32_MIN;
	int32_t t54 = -10837;

	t54 = ((x217&x218)|(x219<x220));

	if (t54 != -32768) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = INT32_MIN;
	int64_t x222 = INT64_MIN;
	volatile int8_t x223 = -15;
	static uint64_t x224 = UINT64_MAX;
	volatile int64_t t55 = 42432LL;

	t55 = ((x221&x222)|(x223<x224));

	if (t55 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MIN;
	int8_t x226 = INT8_MIN;
	int16_t x228 = 15545;
	volatile int32_t t56 = 59;

	t56 = ((x225&x226)|(x227<x228));

	if (t56 != -32767) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x229 = INT16_MIN;
	volatile int16_t x230 = -1;
	int16_t x231 = INT16_MIN;
	static volatile uint64_t x232 = 811057282098LLU;
	int32_t t57 = -1;

	t57 = ((x229&x230)|(x231<x232));

	if (t57 != -32768) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x233 = INT64_MIN;
	int64_t x236 = 1823LL;

	t58 = ((x233&x234)|(x235<x236));

	if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x237 = INT32_MAX;
	int64_t x238 = INT64_MIN;
	int32_t x239 = INT32_MIN;
	static uint64_t x240 = UINT64_MAX;
	int64_t t59 = 55LL;

	t59 = ((x237&x238)|(x239<x240));

	if (t59 != 1LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MIN;
	int32_t x242 = INT32_MIN;
	int32_t x243 = INT32_MIN;
	int16_t x244 = INT16_MIN;

	t60 = ((x241&x242)|(x243<x244));

	if (t60 != -2147483647) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x245 = 1LL;
	uint8_t x248 = 18U;
	int64_t t61 = 231406LL;

	t61 = ((x245&x246)|(x247<x248));

	if (t61 != 1LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x249 = 13425219955795880LLU;
	static uint64_t x250 = 15427772641LLU;
	int16_t x251 = INT16_MIN;
	int16_t x252 = 297;
	volatile uint64_t t62 = 63971LLU;

	t62 = ((x249&x250)|(x251<x252));

	if (t62 != 11040530593LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = 37;
	uint32_t x254 = 222U;
	static int16_t x256 = -1;
	volatile uint32_t t63 = 5435U;

	t63 = ((x253&x254)|(x255<x256));

	if (t63 != 4U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x257 = UINT32_MAX;
	volatile int8_t x258 = -1;
	volatile int16_t x259 = INT16_MIN;
	uint64_t x260 = 2948462455059LLU;
	volatile uint32_t t64 = UINT32_MAX;

	t64 = ((x257&x258)|(x259<x260));

	if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x261 = UINT64_MAX;
	static int8_t x262 = -4;
	static uint8_t x263 = 63U;
	static int16_t x264 = INT16_MIN;

	t65 = ((x261&x262)|(x263<x264));

	if (t65 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x265 = -1;
	int8_t x266 = INT8_MAX;
	uint8_t x267 = 1U;
	int16_t x268 = 15;
	int32_t t66 = -15;

	t66 = ((x265&x266)|(x267<x268));

	if (t66 != 127) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int64_t x269 = INT64_MIN;
	static int32_t x270 = INT32_MIN;
	volatile int64_t x271 = -1LL;
	int32_t x272 = INT32_MIN;
	volatile int64_t t67 = INT64_MIN;

	t67 = ((x269&x270)|(x271<x272));

	if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x273 = INT64_MIN;
	int16_t x274 = 2;
	int16_t x275 = -1;
	int64_t x276 = 487964571443LL;
	volatile int64_t t68 = 11810LL;

	t68 = ((x273&x274)|(x275<x276));

	if (t68 != 1LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = INT8_MAX;
	int16_t x278 = INT16_MIN;
	int16_t x280 = -1;
	int32_t t69 = 2;

	t69 = ((x277&x278)|(x279<x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x281 = INT64_MIN;
	uint32_t x283 = 431365686U;
	int8_t x284 = 6;
	int64_t t70 = -202151694401184931LL;

	t70 = ((x281&x282)|(x283<x284));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x285 = UINT16_MAX;
	int16_t x286 = INT16_MAX;
	volatile int64_t x287 = INT64_MIN;
	uint64_t x288 = 125218LLU;
	int32_t t71 = 289;

	t71 = ((x285&x286)|(x287<x288));

	if (t71 != 32767) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x290 = -1;
	volatile int8_t x291 = INT8_MIN;
	int32_t x292 = -1;

	t72 = ((x289&x290)|(x291<x292));

	if (t72 != -32767) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = INT16_MIN;
	volatile uint8_t x294 = 3U;
	int16_t x295 = INT16_MIN;
	static int16_t x296 = INT16_MIN;
	int32_t t73 = 5534;

	t73 = ((x293&x294)|(x295<x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = 10;
	int64_t x298 = 55966235378107LL;
	volatile uint8_t x299 = 0U;
	volatile uint16_t x300 = UINT16_MAX;
	volatile int64_t t74 = 2946LL;

	t74 = ((x297&x298)|(x299<x300));

	if (t74 != 11LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = -1;
	int8_t x302 = 0;
	uint32_t x303 = UINT32_MAX;
	int8_t x304 = INT8_MAX;

	t75 = ((x301&x302)|(x303<x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x307 = INT8_MIN;
	int16_t x308 = -122;
	static volatile uint64_t t76 = 26LLU;

	t76 = ((x305&x306)|(x307<x308));

	if (t76 != 11375754711294465LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x310 = UINT64_MAX;
	static int32_t x311 = -173860;
	volatile uint64_t t77 = 173451907469LLU;

	t77 = ((x309&x310)|(x311<x312));

	if (t77 != 73195483LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = -1;
	int64_t x314 = INT64_MAX;
	uint64_t x315 = UINT64_MAX;
	volatile int8_t x316 = -1;
	int64_t t78 = INT64_MAX;

	t78 = ((x313&x314)|(x315<x316));

	if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x317 = INT8_MIN;
	int32_t x319 = 236206001;
	static int8_t x320 = -1;

	t79 = ((x317&x318)|(x319<x320));

	if (t79 != 197267328LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x322 = 6335;
	static int16_t x324 = 441;

	t80 = ((x321&x322)|(x323<x324));

	if (t80 != 1LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = 1102;
	int64_t x326 = INT64_MIN;
	int16_t x328 = INT16_MIN;

	t81 = ((x325&x326)|(x327<x328));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint32_t x329 = 448513951U;
	uint8_t x330 = 6U;
	uint64_t x331 = 20LLU;
	uint32_t t82 = 0U;

	t82 = ((x329&x330)|(x331<x332));

	if (t82 != 7U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x333 = INT64_MIN;
	uint32_t x335 = 645U;
	int32_t x336 = INT32_MAX;
	volatile int64_t t83 = 1776072165827542LL;

	t83 = ((x333&x334)|(x335<x336));

	if (t83 != 1LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = 10731U;
	uint16_t x338 = 0U;
	volatile int64_t x339 = INT64_MIN;
	volatile uint8_t x340 = 1U;
	int32_t t84 = 0;

	t84 = ((x337&x338)|(x339<x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = INT32_MIN;
	static int32_t x342 = INT32_MIN;
	int64_t x343 = 2LL;

	t85 = ((x341&x342)|(x343<x344));

	if (t85 != -2147483647) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = 518780662855951LL;
	int32_t x346 = INT32_MAX;
	static volatile int64_t t86 = 34747076136117LL;

	t86 = ((x345&x346)|(x347<x348));

	if (t86 != 153106703LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MAX;
	static volatile int64_t x350 = INT64_MIN;
	volatile int64_t t87 = 11016788521314LL;

	t87 = ((x349&x350)|(x351<x352));

	if (t87 != 1LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x354 = INT16_MIN;
	static volatile int32_t x356 = INT32_MAX;

	t88 = ((x353&x354)|(x355<x356));

	if (t88 != -197722111) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = 6;
	static volatile uint8_t x358 = 0U;
	volatile int64_t x359 = -4154869697985301LL;
	volatile int32_t t89 = 739;

	t89 = ((x357&x358)|(x359<x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x361 = 22LLU;
	int64_t x362 = INT64_MAX;
	uint64_t x363 = 539607829205LLU;
	int64_t x364 = -1LL;
	uint64_t t90 = 3711148150LLU;

	t90 = ((x361&x362)|(x363<x364));

	if (t90 != 23LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = 3;
	volatile int8_t x366 = -1;
	uint32_t x367 = UINT32_MAX;
	volatile int64_t x368 = INT64_MIN;
	volatile int32_t t91 = 0;

	t91 = ((x365&x366)|(x367<x368));

	if (t91 != 3) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x369 = INT32_MIN;
	int32_t x370 = INT32_MIN;
	volatile int32_t x371 = -33;
	static uint32_t x372 = 42736320U;
	int32_t t92 = INT32_MIN;

	t92 = ((x369&x370)|(x371<x372));

	if (t92 != INT32_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = 413U;
	uint64_t x375 = 109048577543LLU;
	static volatile int64_t x376 = -1LL;
	static uint32_t t93 = 1656040U;

	t93 = ((x373&x374)|(x375<x376));

	if (t93 != 401U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x377 = INT32_MIN;
	volatile uint8_t x378 = 1U;
	uint8_t x379 = 115U;
	int32_t t94 = -19;

	t94 = ((x377&x378)|(x379<x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x383 = INT16_MIN;
	uint16_t x384 = 6U;

	t95 = ((x381&x382)|(x383<x384));

	if (t95 != 119960295LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MAX;
	int64_t x386 = INT64_MIN;
	int64_t x387 = -105182945045840LL;
	uint8_t x388 = 116U;
	int64_t t96 = 5585LL;

	t96 = ((x385&x386)|(x387<x388));

	if (t96 != 1LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = -1LL;
	int8_t x390 = INT8_MIN;
	static int64_t x391 = 905743842LL;
	int8_t x392 = 1;

	t97 = ((x389&x390)|(x391<x392));

	if (t97 != -128LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x394 = INT64_MAX;
	int16_t x395 = INT16_MIN;
	int64_t t98 = -266710689LL;

	t98 = ((x393&x394)|(x395<x396));

	if (t98 != 32767LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = -48;
	volatile uint16_t x398 = 3523U;
	volatile uint8_t x399 = 7U;
	uint32_t x400 = UINT32_MAX;
	volatile int32_t t99 = -12637939;

	t99 = ((x397&x398)|(x399<x400));

	if (t99 != 3521) { NG(); } else { ; }
	
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

