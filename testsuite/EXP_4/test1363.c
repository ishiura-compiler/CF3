#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t t0 = 401219923LLU;
volatile int8_t x8 = 21;
int8_t x14 = 3;
static int64_t x15 = INT64_MAX;
uint32_t x21 = 40307U;
uint32_t x22 = 16078U;
int8_t x23 = -1;
int32_t x24 = INT32_MAX;
uint32_t t5 = 1194U;
int8_t x27 = 0;
static int32_t t7 = -69604;
int32_t x33 = -379441;
volatile int64_t x34 = INT64_MAX;
int32_t x36 = INT32_MIN;
int64_t t8 = 25704779075965LL;
uint8_t x41 = 119U;
static int64_t x49 = -42157LL;
int8_t x63 = INT8_MIN;
uint64_t x65 = UINT64_MAX;
int32_t x68 = INT32_MIN;
int64_t x70 = 27542020238746LL;
int64_t x71 = INT64_MIN;
volatile int64_t t17 = 20156726839480LL;
int8_t x74 = -1;
int32_t t18 = -158181;
volatile int64_t x78 = -97312067217603061LL;
int64_t x84 = INT64_MIN;
static volatile int32_t x85 = INT32_MIN;
uint64_t x94 = 2761990980227347352LLU;
static uint64_t x101 = 12LLU;
int8_t x104 = -1;
int16_t x107 = -68;
volatile int64_t t26 = -139703668837597719LL;
volatile int32_t t27 = -1423;
int8_t x119 = INT8_MAX;
volatile int16_t x126 = INT16_MAX;
static uint64_t x128 = UINT64_MAX;
volatile uint16_t x132 = 249U;
int8_t x137 = -1;
int16_t x139 = INT16_MAX;
int64_t x141 = INT64_MIN;
uint8_t x147 = 4U;
int32_t x151 = INT32_MAX;
int8_t x156 = -1;
int16_t x158 = -1;
int32_t x160 = INT32_MIN;
int32_t t40 = 111011;
static int64_t x175 = INT64_MIN;
uint64_t t43 = 495045664800698035LLU;
int64_t x180 = INT64_MAX;
uint8_t x183 = 46U;
int8_t x189 = INT8_MIN;
int32_t t48 = -4077976;
int32_t x200 = INT32_MIN;
int32_t x210 = -1;
int32_t x212 = -1;
int32_t x227 = 227;
int32_t x228 = INT32_MIN;
static volatile uint8_t x229 = UINT8_MAX;
volatile uint8_t x232 = 15U;
int64_t x238 = INT64_MIN;
static volatile int64_t x239 = -1LL;
uint64_t x242 = UINT64_MAX;
volatile int32_t x259 = INT32_MIN;
volatile int64_t x262 = -1LL;
int32_t x266 = -8;
static int32_t t64 = INT32_MIN;
volatile uint8_t x271 = 31U;
int16_t x273 = INT16_MIN;
volatile int8_t x276 = INT8_MAX;
int16_t x279 = INT16_MAX;
uint32_t x280 = 251208U;
volatile int8_t x291 = INT8_MIN;
uint8_t x295 = 5U;
int64_t x299 = INT64_MIN;
volatile int32_t x301 = INT32_MAX;
int16_t x305 = -1;
static uint16_t x312 = 0U;
int32_t t76 = -4;
int16_t x317 = -1;
volatile uint32_t x321 = 261324U;
volatile uint32_t x329 = 28480U;
static int16_t x333 = 37;
int32_t x334 = 6380042;
int16_t x338 = INT16_MAX;
volatile int32_t t83 = -26177150;
volatile int8_t x345 = INT8_MIN;
static volatile uint64_t x347 = 2850LLU;
volatile int64_t t87 = INT64_MIN;
int8_t x372 = 1;
uint32_t x373 = 391594414U;
uint8_t x377 = UINT8_MAX;
int64_t x379 = INT64_MIN;
volatile uint32_t t91 = 289405U;
static uint64_t x389 = UINT64_MAX;
volatile uint32_t x390 = 20579719U;
uint8_t x401 = 33U;
uint32_t t98 = 4U;
int8_t x411 = INT8_MIN;
uint64_t t99 = 157648373726LLU;


void f0(void) {
	int64_t x1 = INT64_MIN;
	uint64_t x2 = UINT64_MAX;
	static int32_t x3 = INT32_MAX;
	static int8_t x4 = -62;

	t0 = (x1&(x2+(x3<x4)));

	if (t0 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x5 = UINT32_MAX;
	int8_t x6 = -1;
	uint16_t x7 = 89U;
	uint32_t t1 = UINT32_MAX;

	t1 = (x5&(x6+(x7<x8)));

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	static int8_t x10 = INT8_MAX;
	static uint64_t x11 = 3772166381LLU;
	int32_t x12 = INT32_MIN;
	static volatile int64_t t2 = -4344494894384LL;

	t2 = (x9&(x10+(x11<x12)));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = -1;
	static uint64_t x16 = UINT64_MAX;
	int32_t t3 = -410;

	t3 = (x13&(x14+(x15<x16)));

	if (t3 != 4) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 139U;
	int32_t x18 = -1;
	uint64_t x19 = UINT64_MAX;
	int16_t x20 = INT16_MIN;
	uint32_t t4 = 398U;

	t4 = (x17&(x18+(x19<x20)));

	if (t4 != 139U) { NG(); } else { ; }
	
}

void f5(void) {


	t5 = (x21&(x22+(x23<x24)));

	if (t5 != 7235U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	static int16_t x26 = -1;
	volatile int16_t x28 = -1400;
	static volatile int32_t t6 = 2750;

	t6 = (x25&(x26+(x27<x28)));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 0U;
	int16_t x30 = -1627;
	uint16_t x31 = 96U;
	int16_t x32 = INT16_MAX;

	t7 = (x29&(x30+(x31<x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x35 = INT32_MIN;

	t8 = (x33&(x34+(x35<x36)));

	if (t8 != 9223372036854396367LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x37 = UINT16_MAX;
	uint32_t x38 = UINT32_MAX;
	static uint16_t x39 = 26019U;
	uint8_t x40 = 115U;
	volatile uint32_t t9 = 268U;

	t9 = (x37&(x38+(x39<x40)));

	if (t9 != 65535U) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x42 = 282LL;
	static int8_t x43 = 7;
	int8_t x44 = -1;
	volatile int64_t t10 = 132609615137343512LL;

	t10 = (x41&(x42+(x43<x44)));

	if (t10 != 18LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x45 = INT32_MAX;
	static uint32_t x46 = 3180836U;
	uint8_t x47 = UINT8_MAX;
	int64_t x48 = INT64_MIN;
	uint32_t t11 = 31U;

	t11 = (x45&(x46+(x47<x48)));

	if (t11 != 3180836U) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x50 = INT16_MIN;
	int8_t x51 = INT8_MIN;
	int32_t x52 = INT32_MAX;
	volatile int64_t t12 = 1458594774945607411LL;

	t12 = (x49&(x50+(x51<x52)));

	if (t12 != -65535LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = -1;
	int64_t x54 = INT64_MIN;
	static uint32_t x55 = UINT32_MAX;
	int32_t x56 = INT32_MAX;
	volatile int64_t t13 = INT64_MIN;

	t13 = (x53&(x54+(x55<x56)));

	if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 87U;
	int32_t x58 = -1629;
	int16_t x59 = INT16_MAX;
	volatile uint32_t x60 = 89272U;
	int32_t t14 = 3866798;

	t14 = (x57&(x58+(x59<x60)));

	if (t14 != 4) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MAX;
	uint8_t x62 = 12U;
	volatile uint16_t x64 = 16994U;
	volatile int32_t t15 = -36067;

	t15 = (x61&(x62+(x63<x64)));

	if (t15 != 13) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x66 = UINT32_MAX;
	static volatile int64_t x67 = -39LL;
	uint64_t t16 = 2765LLU;

	t16 = (x65&(x66+(x67<x68)));

	if (t16 != 4294967295LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MAX;
	int32_t x72 = 0;

	t17 = (x69&(x70+(x71<x72)));

	if (t17 != 27LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = 12U;
	int8_t x75 = -63;
	uint32_t x76 = 11U;

	t18 = (x73&(x74+(x75<x76)));

	if (t18 != 12) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x77 = 1LLU;
	static int32_t x79 = INT32_MAX;
	uint64_t x80 = 1335704607LLU;
	uint64_t t19 = 8647LLU;

	t19 = (x77&(x78+(x79<x80)));

	if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = 2645;
	uint32_t x82 = UINT32_MAX;
	uint64_t x83 = 3LLU;
	volatile uint32_t t20 = 2652U;

	t20 = (x81&(x82+(x83<x84)));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x86 = UINT16_MAX;
	int8_t x87 = INT8_MIN;
	int32_t x88 = INT32_MIN;
	volatile int32_t t21 = -1;

	t21 = (x85&(x86+(x87<x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = UINT32_MAX;
	int32_t x90 = 58415467;
	int64_t x91 = 245028757250232466LL;
	int64_t x92 = INT64_MIN;
	volatile uint32_t t22 = 1248990U;

	t22 = (x89&(x90+(x91<x92)));

	if (t22 != 58415467U) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = -6750;
	volatile int32_t x95 = INT32_MIN;
	uint8_t x96 = 8U;
	volatile uint64_t t23 = 657781553291LLU;

	t23 = (x93&(x94+(x95<x96)));

	if (t23 != 2761990980227342720LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = -1;
	int32_t x98 = INT32_MIN;
	int8_t x99 = INT8_MIN;
	uint32_t x100 = 54U;
	static int32_t t24 = INT32_MIN;

	t24 = (x97&(x98+(x99<x100)));

	if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x102 = INT16_MAX;
	volatile uint32_t x103 = 57119U;
	static volatile uint64_t t25 = 2399720LLU;

	t25 = (x101&(x102+(x103<x104)));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -1LL;
	static int8_t x106 = -18;
	int8_t x108 = -1;

	t26 = (x105&(x106+(x107<x108)));

	if (t26 != -17LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = 1788U;
	volatile uint16_t x110 = 85U;
	int32_t x111 = -1;
	volatile uint64_t x112 = UINT64_MAX;

	t27 = (x109&(x110+(x111<x112)));

	if (t27 != 84) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = -1;
	static uint32_t x114 = 52479122U;
	volatile uint8_t x115 = 1U;
	int64_t x116 = INT64_MIN;
	static volatile uint32_t t28 = 3724U;

	t28 = (x113&(x114+(x115<x116)));

	if (t28 != 52479122U) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = 289612905016LLU;
	static uint64_t x118 = UINT64_MAX;
	int32_t x120 = 11258;
	volatile uint64_t t29 = 1467312710LLU;

	t29 = (x117&(x118+(x119<x120)));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MIN;
	static int64_t x122 = INT64_MIN;
	volatile int8_t x123 = INT8_MAX;
	int64_t x124 = INT64_MAX;
	int64_t t30 = INT64_MIN;

	t30 = (x121&(x122+(x123<x124)));

	if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x125 = INT64_MIN;
	uint8_t x127 = 76U;
	static int64_t t31 = -178745LL;

	t31 = (x125&(x126+(x127<x128)));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MAX;
	static int64_t x130 = INT64_MIN;
	int8_t x131 = INT8_MIN;
	int64_t t32 = 1104618515558565922LL;

	t32 = (x129&(x130+(x131<x132)));

	if (t32 != 1LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MIN;
	static int64_t x134 = -1LL;
	static int64_t x135 = -564763LL;
	int16_t x136 = INT16_MIN;
	volatile int64_t t33 = -319294LL;

	t33 = (x133&(x134+(x135<x136)));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int32_t x138 = 535458;
	uint8_t x140 = 7U;
	volatile int32_t t34 = 14328912;

	t34 = (x137&(x138+(x139<x140)));

	if (t34 != 535458) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x142 = INT8_MIN;
	volatile uint8_t x143 = UINT8_MAX;
	volatile int8_t x144 = 11;
	static volatile int64_t t35 = INT64_MIN;

	t35 = (x141&(x142+(x143<x144)));

	if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x145 = INT8_MIN;
	volatile int64_t x146 = 5LL;
	volatile int64_t x148 = INT64_MIN;
	static int64_t t36 = -4269105474481620195LL;

	t36 = (x145&(x146+(x147<x148)));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = 51;
	int8_t x150 = INT8_MIN;
	int8_t x152 = -1;
	volatile int32_t t37 = -43872;

	t37 = (x149&(x150+(x151<x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = INT32_MIN;
	uint64_t x154 = 1802889333958330LLU;
	uint64_t x155 = 27296532067LLU;
	volatile uint64_t t38 = 2LLU;

	t38 = (x153&(x154+(x155<x156)));

	if (t38 != 1802887684423680LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = UINT8_MAX;
	volatile int32_t x159 = -713261;
	static volatile int32_t t39 = 0;

	t39 = (x157&(x158+(x159<x160)));

	if (t39 != 255) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = -1;
	static int32_t x162 = INT32_MIN;
	int32_t x163 = -1;
	static int16_t x164 = INT16_MAX;

	t40 = (x161&(x162+(x163<x164)));

	if (t40 != -2147483647) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x165 = INT64_MAX;
	uint64_t x166 = 7294478803336819466LLU;
	int16_t x167 = 2566;
	volatile uint32_t x168 = 19155U;
	volatile uint64_t t41 = 7247LLU;

	t41 = (x165&(x166+(x167<x168)));

	if (t41 != 7294478803336819467LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x169 = 40821U;
	uint16_t x170 = 468U;
	int16_t x171 = -6;
	static int8_t x172 = -1;
	volatile uint32_t t42 = 2U;

	t42 = (x169&(x170+(x171<x172)));

	if (t42 != 341U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MAX;
	uint64_t x174 = UINT64_MAX;
	static uint8_t x176 = UINT8_MAX;

	t43 = (x173&(x174+(x175<x176)));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = 187;
	uint8_t x178 = UINT8_MAX;
	int32_t x179 = INT32_MIN;
	volatile int32_t t44 = 1;

	t44 = (x177&(x178+(x179<x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = UINT32_MAX;
	int32_t x182 = -1;
	int8_t x184 = -5;
	static volatile uint32_t t45 = UINT32_MAX;

	t45 = (x181&(x182+(x183<x184)));

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = UINT16_MAX;
	int16_t x186 = INT16_MAX;
	int16_t x187 = -445;
	int64_t x188 = INT64_MIN;
	volatile int32_t t46 = -133384844;

	t46 = (x185&(x186+(x187<x188)));

	if (t46 != 32767) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint64_t x190 = 18LLU;
	static int16_t x191 = -1;
	int64_t x192 = 11LL;
	uint64_t t47 = 1142053462110302097LLU;

	t47 = (x189&(x190+(x191<x192)));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MIN;
	int16_t x194 = -1;
	int64_t x195 = INT64_MIN;
	int32_t x196 = INT32_MAX;

	t48 = (x193&(x194+(x195<x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = INT32_MAX;
	static int32_t x198 = INT32_MIN;
	uint8_t x199 = UINT8_MAX;
	volatile int32_t t49 = -14917;

	t49 = (x197&(x198+(x199<x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x201 = INT32_MIN;
	int16_t x202 = INT16_MAX;
	static uint16_t x203 = UINT16_MAX;
	uint64_t x204 = 124671672076046443LLU;
	static volatile int32_t t50 = 397;

	t50 = (x201&(x202+(x203<x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = 1335U;
	int16_t x206 = INT16_MIN;
	uint32_t x207 = UINT32_MAX;
	int16_t x208 = INT16_MIN;
	volatile uint32_t t51 = 366U;

	t51 = (x205&(x206+(x207<x208)));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = -869491060385465LL;
	int8_t x211 = 1;
	static volatile int64_t t52 = 1070925186LL;

	t52 = (x209&(x210+(x211<x212)));

	if (t52 != -869491060385465LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = -435785;
	uint64_t x214 = UINT64_MAX;
	int16_t x215 = INT16_MAX;
	uint32_t x216 = 35380340U;
	volatile uint64_t t53 = 211934759625790LLU;

	t53 = (x213&(x214+(x215<x216)));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x221 = INT16_MAX;
	static int64_t x222 = INT64_MIN;
	int16_t x223 = 1645;
	int8_t x224 = 46;
	int64_t t54 = 260LL;

	t54 = (x221&(x222+(x223<x224)));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x225 = -1LL;
	volatile uint8_t x226 = UINT8_MAX;
	int64_t t55 = 24LL;

	t55 = (x225&(x226+(x227<x228)));

	if (t55 != 255LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x230 = -1;
	uint64_t x231 = 65383116681084099LLU;
	volatile int32_t t56 = -15;

	t56 = (x229&(x230+(x231<x232)));

	if (t56 != 255) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x233 = INT8_MIN;
	static int16_t x234 = INT16_MIN;
	int8_t x235 = -3;
	int64_t x236 = -8LL;
	int32_t t57 = -11691;

	t57 = (x233&(x234+(x235<x236)));

	if (t57 != -32768) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x237 = 757;
	volatile uint64_t x240 = 42LLU;
	int64_t t58 = -19LL;

	t58 = (x237&(x238+(x239<x240)));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x241 = INT16_MIN;
	uint16_t x243 = 76U;
	uint16_t x244 = UINT16_MAX;
	uint64_t t59 = 264082011196175063LLU;

	t59 = (x241&(x242+(x243<x244)));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x245 = 13U;
	int64_t x246 = INT64_MAX;
	static int64_t x247 = -1LL;
	volatile int64_t x248 = -1LL;
	static volatile int64_t t60 = 178515479540940233LL;

	t60 = (x245&(x246+(x247<x248)));

	if (t60 != 13LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x253 = UINT8_MAX;
	uint64_t x254 = 203287LLU;
	volatile uint64_t x255 = UINT64_MAX;
	volatile uint16_t x256 = UINT16_MAX;
	static volatile uint64_t t61 = 13843LLU;

	t61 = (x253&(x254+(x255<x256)));

	if (t61 != 23LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int32_t x257 = 71;
	int32_t x258 = INT32_MAX;
	uint32_t x260 = 15696690U;
	volatile int32_t t62 = 152;

	t62 = (x257&(x258+(x259<x260)));

	if (t62 != 71) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x261 = UINT8_MAX;
	int16_t x263 = INT16_MIN;
	int64_t x264 = -1LL;
	volatile int64_t t63 = -3357635LL;

	t63 = (x261&(x262+(x263<x264)));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x265 = INT32_MIN;
	uint64_t x267 = 574105853596397273LLU;
	volatile int8_t x268 = 0;

	t64 = (x265&(x266+(x267<x268)));

	if (t64 != INT32_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x269 = 410U;
	int8_t x270 = 3;
	uint64_t x272 = 9031121055612643263LLU;
	volatile uint32_t t65 = 95U;

	t65 = (x269&(x270+(x271<x272)));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x274 = INT16_MIN;
	uint32_t x275 = UINT32_MAX;
	static volatile int32_t t66 = 440176935;

	t66 = (x273&(x274+(x275<x276)));

	if (t66 != -32768) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x277 = 3U;
	static volatile int32_t x278 = -1;
	volatile uint32_t t67 = 3233773U;

	t67 = (x277&(x278+(x279<x280)));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x281 = UINT32_MAX;
	uint64_t x282 = UINT64_MAX;
	static int16_t x283 = -1;
	int8_t x284 = INT8_MIN;
	uint64_t t68 = 103946LLU;

	t68 = (x281&(x282+(x283<x284)));

	if (t68 != 4294967295LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x285 = -1;
	int64_t x286 = INT64_MIN;
	volatile int64_t x287 = INT64_MIN;
	static int32_t x288 = 17861;
	int64_t t69 = -179LL;

	t69 = (x285&(x286+(x287<x288)));

	if (t69 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x289 = INT16_MAX;
	volatile int64_t x290 = INT64_MIN;
	uint16_t x292 = UINT16_MAX;
	int64_t t70 = -24326642129LL;

	t70 = (x289&(x290+(x291<x292)));

	if (t70 != 1LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x293 = INT8_MAX;
	int8_t x294 = -44;
	static int16_t x296 = 20;
	static int32_t t71 = -105850;

	t71 = (x293&(x294+(x295<x296)));

	if (t71 != 85) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x297 = UINT8_MAX;
	int8_t x298 = INT8_MIN;
	uint32_t x300 = 40468U;
	int32_t t72 = -77373955;

	t72 = (x297&(x298+(x299<x300)));

	if (t72 != 129) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x302 = INT16_MIN;
	static volatile int32_t x303 = INT32_MIN;
	int64_t x304 = INT64_MAX;
	volatile int32_t t73 = -20;

	t73 = (x301&(x302+(x303<x304)));

	if (t73 != 2147450881) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x306 = INT16_MIN;
	int64_t x307 = INT64_MIN;
	uint16_t x308 = UINT16_MAX;
	int32_t t74 = 0;

	t74 = (x305&(x306+(x307<x308)));

	if (t74 != -32767) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x309 = INT8_MIN;
	uint16_t x310 = UINT16_MAX;
	static int64_t x311 = INT64_MAX;
	volatile int32_t t75 = -15;

	t75 = (x309&(x310+(x311<x312)));

	if (t75 != 65408) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x313 = UINT8_MAX;
	int32_t x314 = INT32_MIN;
	static uint16_t x315 = 0U;
	uint32_t x316 = 665873U;

	t76 = (x313&(x314+(x315<x316)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x318 = INT16_MIN;
	int16_t x319 = -1;
	int32_t x320 = INT32_MIN;
	volatile int32_t t77 = 179587025;

	t77 = (x317&(x318+(x319<x320)));

	if (t77 != -32768) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x322 = INT32_MIN;
	int8_t x323 = -27;
	volatile int32_t x324 = -1;
	static uint32_t t78 = 1345913U;

	t78 = (x321&(x322+(x323<x324)));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x325 = 288U;
	int16_t x326 = INT16_MIN;
	volatile int32_t x327 = INT32_MAX;
	static int64_t x328 = -354597247974554542LL;
	uint32_t t79 = 7892U;

	t79 = (x325&(x326+(x327<x328)));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x330 = -147;
	int16_t x331 = -1;
	volatile int16_t x332 = INT16_MAX;
	volatile uint32_t t80 = 3134U;

	t80 = (x329&(x330+(x331<x332)));

	if (t80 != 28480U) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x335 = -1;
	int16_t x336 = INT16_MAX;
	int32_t t81 = 473710281;

	t81 = (x333&(x334+(x335<x336)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x337 = UINT64_MAX;
	static int8_t x339 = -1;
	volatile uint16_t x340 = 2U;
	volatile uint64_t t82 = 400667397193691598LLU;

	t82 = (x337&(x338+(x339<x340)));

	if (t82 != 32768LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x341 = UINT16_MAX;
	int16_t x342 = 1717;
	int8_t x343 = -1;
	uint8_t x344 = UINT8_MAX;

	t83 = (x341&(x342+(x343<x344)));

	if (t83 != 1718) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x346 = 30U;
	uint64_t x348 = 1033309355242453897LLU;
	static int32_t t84 = -159390825;

	t84 = (x345&(x346+(x347<x348)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x353 = INT64_MIN;
	int8_t x354 = -9;
	volatile uint64_t x355 = UINT64_MAX;
	int8_t x356 = INT8_MIN;
	int64_t t85 = INT64_MIN;

	t85 = (x353&(x354+(x355<x356)));

	if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x357 = UINT16_MAX;
	int16_t x358 = INT16_MIN;
	int64_t x359 = -1LL;
	int8_t x360 = -3;
	volatile int32_t t86 = -2362;

	t86 = (x357&(x358+(x359<x360)));

	if (t86 != 32768) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x361 = INT32_MIN;
	int64_t x362 = INT64_MIN;
	uint64_t x363 = UINT64_MAX;
	volatile int8_t x364 = INT8_MIN;

	t87 = (x361&(x362+(x363<x364)));

	if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x365 = INT8_MIN;
	int32_t x366 = INT32_MIN;
	static int8_t x367 = INT8_MIN;
	volatile uint8_t x368 = UINT8_MAX;
	volatile int32_t t88 = INT32_MIN;

	t88 = (x365&(x366+(x367<x368)));

	if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x369 = INT64_MIN;
	uint8_t x370 = UINT8_MAX;
	int32_t x371 = INT32_MAX;
	volatile int64_t t89 = -354517610555931LL;

	t89 = (x369&(x370+(x371<x372)));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x374 = INT32_MIN;
	int8_t x375 = INT8_MAX;
	volatile uint64_t x376 = 2LLU;
	static volatile uint32_t t90 = 619748859U;

	t90 = (x373&(x374+(x375<x376)));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x378 = UINT32_MAX;
	uint8_t x380 = 3U;

	t91 = (x377&(x378+(x379<x380)));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x381 = INT32_MIN;
	static uint16_t x382 = 3U;
	static int8_t x383 = INT8_MIN;
	static int16_t x384 = 181;
	static int32_t t92 = -24489;

	t92 = (x381&(x382+(x383<x384)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x385 = -264;
	int8_t x386 = 0;
	uint32_t x387 = 1008U;
	int32_t x388 = INT32_MAX;
	static volatile int32_t t93 = 4;

	t93 = (x385&(x386+(x387<x388)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x391 = 11U;
	int64_t x392 = -1LL;
	uint64_t t94 = 1478699319239LLU;

	t94 = (x389&(x390+(x391<x392)));

	if (t94 != 20579719LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x393 = 682111LLU;
	uint16_t x394 = 761U;
	volatile int64_t x395 = 59728LL;
	int16_t x396 = -1;
	volatile uint64_t t95 = 123537167258658692LLU;

	t95 = (x393&(x394+(x395<x396)));

	if (t95 != 121LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x397 = 17U;
	int8_t x398 = 1;
	uint8_t x399 = 1U;
	uint64_t x400 = 574653LLU;
	int32_t t96 = 1804072;

	t96 = (x397&(x398+(x399<x400)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x402 = UINT8_MAX;
	int32_t x403 = INT32_MIN;
	volatile int64_t x404 = INT64_MIN;
	int32_t t97 = -9;

	t97 = (x401&(x402+(x403<x404)));

	if (t97 != 33) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x405 = 745U;
	int32_t x406 = INT32_MIN;
	int16_t x407 = 88;
	uint16_t x408 = 24U;

	t98 = (x405&(x406+(x407<x408)));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x409 = 288074124823725517LLU;
	int64_t x410 = INT64_MIN;
	static int64_t x412 = INT64_MIN;

	t99 = (x409&(x410+(x411<x412)));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

