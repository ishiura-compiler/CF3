#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x4 = INT8_MIN;
int64_t x8 = INT64_MIN;
static volatile int8_t x20 = 46;
int32_t x26 = INT32_MIN;
int32_t x31 = INT32_MIN;
uint64_t x32 = UINT64_MAX;
int64_t x34 = -52LL;
static uint8_t x47 = UINT8_MAX;
int64_t x50 = 21566593964971LL;
int8_t x58 = -4;
static int64_t x59 = 7774778913768785LL;
static volatile uint64_t x63 = 157LLU;
int32_t x64 = 521;
uint32_t t14 = 5665U;
int64_t x76 = -1LL;
int16_t x80 = -7780;
int32_t x83 = 3585;
volatile int32_t t18 = -6;
volatile uint16_t x93 = UINT16_MAX;
int16_t x99 = 320;
int64_t x100 = -62LL;
int64_t t22 = -394925804650928LL;
int16_t x101 = -1;
volatile int8_t x105 = -1;
volatile int8_t x107 = INT8_MIN;
int8_t x111 = 30;
static volatile uint32_t t25 = 520893758U;
uint8_t x117 = 120U;
uint16_t x123 = 814U;
volatile int32_t x125 = INT32_MAX;
static int16_t x133 = -1;
int8_t x138 = INT8_MIN;
volatile int64_t t31 = 96175031074734LL;
int8_t x153 = -1;
uint64_t x157 = 34610481LLU;
volatile uint64_t x159 = 1347LLU;
int16_t x164 = -725;
volatile int32_t t35 = -478;
uint16_t x166 = 0U;
int16_t x168 = INT16_MIN;
static int32_t x180 = -101;
uint64_t x186 = 118LLU;
int8_t x187 = INT8_MAX;
int32_t x194 = INT32_MIN;
uint16_t x195 = 13U;
volatile int16_t x199 = INT16_MAX;
volatile int8_t x205 = -1;
int16_t x207 = INT16_MIN;
int64_t x220 = INT64_MAX;
uint8_t x243 = UINT8_MAX;
int32_t x254 = -957969;
int32_t x255 = INT32_MIN;
int16_t x262 = 1;
int64_t x266 = -1LL;
int16_t x267 = 0;
static int32_t x268 = 6;
uint16_t x273 = 0U;
int64_t x277 = INT64_MAX;
static int64_t x278 = INT64_MAX;
volatile int64_t t62 = 25LL;
int16_t x288 = INT16_MAX;
int8_t x290 = INT8_MAX;
int16_t x294 = -52;
int32_t x297 = INT32_MIN;
static uint64_t x300 = 23868LLU;
uint16_t x302 = 1049U;
int16_t x304 = INT16_MAX;
int16_t x313 = -1000;
int8_t x314 = -51;
static uint64_t x315 = 64573889142437161LLU;
int32_t x320 = -385;
int64_t x325 = INT64_MAX;
int8_t x327 = INT8_MIN;
static int32_t x332 = INT32_MAX;
static int16_t x334 = 0;
volatile int32_t x338 = INT32_MAX;
static int64_t t76 = 7590682806829LL;
int32_t x348 = -12069616;
int64_t t77 = 50082LL;
uint64_t x354 = 181LLU;
int64_t x355 = INT64_MAX;
uint16_t x356 = 390U;
int64_t x357 = INT64_MIN;
uint32_t t81 = 60U;
int32_t x366 = -1;
volatile int8_t x367 = INT8_MIN;
int64_t x373 = 147927345804LL;
static uint64_t x377 = 0LLU;
uint64_t x379 = 13237272LLU;
uint64_t t85 = 58938074828LLU;
static volatile uint32_t x385 = 1045085210U;
static volatile int32_t x389 = INT32_MIN;
static int64_t t88 = 10LL;
volatile uint32_t x396 = 147920708U;
int32_t x400 = -1;
uint16_t x408 = 117U;
uint64_t x415 = 950LLU;
volatile uint64_t t94 = 123521033LLU;
static uint8_t x420 = 76U;
volatile int64_t t95 = 30958299044427LL;
int8_t x431 = INT8_MAX;
int32_t t98 = -82920483;
static volatile int64_t x434 = -1LL;
volatile int8_t x435 = INT8_MAX;
static volatile int64_t t99 = 34389578557901LL;


void f0(void) {
	int8_t x1 = INT8_MIN;
	static int8_t x2 = INT8_MIN;
	int32_t x3 = -1;
	static int32_t t0 = -703;

	t0 = (x1%((x2|x3)&x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MAX;
	int64_t x6 = INT64_MIN;
	int16_t x7 = INT16_MIN;
	int64_t t1 = INT64_MAX;

	t1 = (x5%((x6|x7)&x8));

	if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = UINT32_MAX;
	uint16_t x10 = 124U;
	static uint8_t x11 = 0U;
	uint16_t x12 = 6U;
	uint32_t t2 = 57U;

	t2 = (x9%((x10|x11)&x12));

	if (t2 != 3U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	volatile uint64_t x14 = 13726594LLU;
	static int16_t x15 = 1;
	volatile int8_t x16 = -1;
	volatile uint64_t t3 = 2089797052146925LLU;

	t3 = (x13%((x14|x15)&x16));

	if (t3 != 4325515LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MAX;
	int32_t x18 = INT32_MAX;
	volatile uint32_t x19 = 116292515U;
	uint32_t t4 = 7004454U;

	t4 = (x17%((x18|x19)&x20));

	if (t4 != 15U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = -21;
	uint64_t x27 = UINT64_MAX;
	static int16_t x28 = INT16_MIN;
	volatile uint64_t t5 = 4LLU;

	t5 = (x25%((x26|x27)&x28));

	if (t5 != 32747LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x29 = 4646U;
	volatile int8_t x30 = INT8_MIN;
	uint64_t t6 = 13350499984019LLU;

	t6 = (x29%((x30|x31)&x32));

	if (t6 != 4646LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x33 = 9LL;
	uint32_t x35 = UINT32_MAX;
	int16_t x36 = -1;
	static volatile int64_t t7 = -498LL;

	t7 = (x33%((x34|x35)&x36));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x37 = UINT8_MAX;
	volatile int32_t x38 = 146;
	static int64_t x39 = INT64_MAX;
	static volatile uint64_t x40 = 50682139948072061LLU;
	uint64_t t8 = 7LLU;

	t8 = (x37%((x38|x39)&x40));

	if (t8 != 255LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x45 = -76035038;
	volatile int8_t x46 = INT8_MIN;
	int16_t x48 = INT16_MAX;
	volatile int32_t t9 = 2;

	t9 = (x45%((x46|x47)&x48));

	if (t9 != -15598) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = -5;
	int8_t x51 = INT8_MIN;
	static uint64_t x52 = UINT64_MAX;
	volatile uint64_t t10 = 4LLU;

	t10 = (x49%((x50|x51)&x52));

	if (t10 != 80LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x53 = 1705484116470LLU;
	uint16_t x54 = 6096U;
	uint32_t x55 = UINT32_MAX;
	static volatile uint32_t x56 = 1U;
	static volatile uint64_t t11 = 134506055559547746LLU;

	t11 = (x53%((x54|x55)&x56));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x57 = 5U;
	volatile uint64_t x60 = 5477371LLU;
	volatile uint64_t t12 = 295771039023838953LLU;

	t12 = (x57%((x58|x59)&x60));

	if (t12 != 5LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x61 = 13;
	int8_t x62 = INT8_MIN;
	uint64_t t13 = 82831487LLU;

	t13 = (x61%((x62|x63)&x64));

	if (t13 != 13LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x65 = -1;
	int16_t x66 = INT16_MAX;
	static int16_t x67 = INT16_MAX;
	uint32_t x68 = 7U;

	t14 = (x65%((x66|x67)&x68));

	if (t14 != 3U) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x69 = 411;
	volatile int8_t x70 = INT8_MIN;
	int16_t x71 = INT16_MAX;
	uint32_t x72 = 4514327U;
	volatile uint32_t t15 = 1972U;

	t15 = (x69%((x70|x71)&x72));

	if (t15 != 411U) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x73 = UINT64_MAX;
	int64_t x74 = 10034345940104LL;
	volatile int64_t x75 = -1LL;
	volatile uint64_t t16 = 2142700188448402LLU;

	t16 = (x73%((x74|x75)&x76));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x77 = INT32_MIN;
	int32_t x78 = INT32_MIN;
	volatile int16_t x79 = -1;
	volatile int32_t t17 = -26;

	t17 = (x77%((x78|x79)&x80));

	if (t17 != -1368) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x81 = -1;
	int32_t x82 = INT32_MAX;
	static uint8_t x84 = 1U;

	t18 = (x81%((x82|x83)&x84));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x85 = 6990401074355LL;
	int16_t x86 = INT16_MIN;
	static int32_t x87 = -1;
	volatile uint16_t x88 = 12247U;
	volatile int64_t t19 = -2959300577LL;

	t19 = (x85%((x86|x87)&x88));

	if (t19 != 8412LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x89 = 5U;
	volatile int32_t x90 = INT32_MAX;
	static int64_t x91 = INT64_MIN;
	int16_t x92 = INT16_MIN;
	int64_t t20 = -42192382608546LL;

	t20 = (x89%((x90|x91)&x92));

	if (t20 != 5LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x94 = INT32_MIN;
	int16_t x95 = 14;
	static uint64_t x96 = 83611116276130999LLU;
	volatile uint64_t t21 = 122501847270LLU;

	t21 = (x93%((x94|x95)&x96));

	if (t21 != 65535LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x97 = UINT32_MAX;
	static int64_t x98 = -123667287744LL;

	t22 = (x97%((x98|x99)&x100));

	if (t22 != 4294967295LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x102 = INT64_MAX;
	int64_t x103 = INT64_MIN;
	int16_t x104 = INT16_MAX;
	volatile int64_t t23 = -26803LL;

	t23 = (x101%((x102|x103)&x104));

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int16_t x106 = -1;
	int64_t x108 = INT64_MAX;
	int64_t t24 = 25345596649LL;

	t24 = (x105%((x106|x107)&x108));

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x109 = 1;
	uint32_t x110 = 522068U;
	int8_t x112 = 23;

	t25 = (x109%((x110|x111)&x112));

	if (t25 != 1U) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x118 = INT64_MIN;
	volatile uint8_t x119 = UINT8_MAX;
	volatile int16_t x120 = -1;
	static volatile int64_t t26 = -98LL;

	t26 = (x117%((x118|x119)&x120));

	if (t26 != 120LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x121 = 0;
	static uint8_t x122 = 1U;
	static uint32_t x124 = 221U;
	uint32_t t27 = 1610064U;

	t27 = (x121%((x122|x123)&x124));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x126 = 11;
	int16_t x127 = INT16_MIN;
	uint64_t x128 = 184LLU;
	volatile uint64_t t28 = 137167985859478LLU;

	t28 = (x125%((x126|x127)&x128));

	if (t28 != 7LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x129 = INT8_MIN;
	int8_t x130 = INT8_MIN;
	uint32_t x131 = 1U;
	uint8_t x132 = UINT8_MAX;
	uint32_t t29 = 27935U;

	t29 = (x129%((x130|x131)&x132));

	if (t29 != 17U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x134 = INT16_MAX;
	volatile uint16_t x135 = 89U;
	static uint32_t x136 = 1463332446U;
	uint32_t t30 = 282642U;

	t30 = (x133%((x134|x135)&x136));

	if (t30 != 9585U) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x137 = 74U;
	static int64_t x139 = INT64_MIN;
	int16_t x140 = -1;

	t31 = (x137%((x138|x139)&x140));

	if (t31 != 74LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x149 = 1334U;
	static int64_t x150 = -1LL;
	static volatile uint16_t x151 = 19U;
	volatile int32_t x152 = -1;
	int64_t t32 = -4LL;

	t32 = (x149%((x150|x151)&x152));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x154 = UINT16_MAX;
	int32_t x155 = INT32_MIN;
	static int32_t x156 = INT32_MIN;
	int32_t t33 = 6237;

	t33 = (x153%((x154|x155)&x156));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x158 = INT32_MIN;
	int16_t x160 = INT16_MAX;
	volatile uint64_t t34 = 5980351LLU;

	t34 = (x157%((x158|x159)&x160));

	if (t34 != 663LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x161 = INT32_MIN;
	volatile int8_t x162 = 0;
	uint16_t x163 = UINT16_MAX;

	t35 = (x161%((x162|x163)&x164));

	if (t35 != -35974) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x165 = INT64_MIN;
	uint32_t x167 = 88420U;
	volatile int64_t t36 = 3856LL;

	t36 = (x165%((x166|x167)&x168));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x169 = INT64_MIN;
	volatile uint8_t x170 = 18U;
	static uint16_t x171 = 88U;
	uint64_t x172 = UINT64_MAX;
	uint64_t t37 = 2878120860771152776LLU;

	t37 = (x169%((x170|x171)&x172));

	if (t37 != 8LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x173 = 1U;
	static int32_t x174 = 10053040;
	int8_t x175 = INT8_MIN;
	int16_t x176 = 32;
	volatile int32_t t38 = -4349126;

	t38 = (x173%((x174|x175)&x176));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint32_t x177 = UINT32_MAX;
	uint16_t x178 = 1U;
	int16_t x179 = INT16_MIN;
	uint32_t t39 = 43044U;

	t39 = (x177%((x178|x179)&x180));

	if (t39 != 32766U) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x181 = 1U;
	uint64_t x182 = 1LLU;
	uint8_t x183 = UINT8_MAX;
	uint16_t x184 = 20U;
	static volatile uint64_t t40 = 385107LLU;

	t40 = (x181%((x182|x183)&x184));

	if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x185 = UINT16_MAX;
	int64_t x188 = -1LL;
	volatile uint64_t t41 = 1279403444LLU;

	t41 = (x185%((x186|x187)&x188));

	if (t41 != 3LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int64_t x189 = -1573060603943LL;
	static int32_t x190 = 755;
	static int32_t x191 = INT32_MAX;
	int16_t x192 = -1;
	volatile int64_t t42 = -48571721897151590LL;

	t42 = (x189%((x190|x191)&x192));

	if (t42 != -1102574339LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x193 = INT64_MAX;
	uint16_t x196 = 24U;
	volatile int64_t t43 = -572LL;

	t43 = (x193%((x194|x195)&x196));

	if (t43 != 7LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x197 = 23U;
	int32_t x198 = -7751022;
	int32_t x200 = INT32_MIN;
	int32_t t44 = -765834;

	t44 = (x197%((x198|x199)&x200));

	if (t44 != 23) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x201 = 661U;
	uint8_t x202 = 3U;
	int16_t x203 = -1;
	uint64_t x204 = 21130615LLU;
	volatile uint64_t t45 = 178070841LLU;

	t45 = (x201%((x202|x203)&x204));

	if (t45 != 661LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x206 = UINT8_MAX;
	int64_t x208 = INT64_MAX;
	volatile int64_t t46 = -1957180459032LL;

	t46 = (x205%((x206|x207)&x208));

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x209 = INT16_MIN;
	static int8_t x210 = -1;
	int32_t x211 = INT32_MAX;
	uint64_t x212 = UINT64_MAX;
	uint64_t t47 = 71067012220521307LLU;

	t47 = (x209%((x210|x211)&x212));

	if (t47 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x213 = 1989U;
	int32_t x214 = 789;
	static int16_t x215 = INT16_MAX;
	int32_t x216 = -1;
	int32_t t48 = -42;

	t48 = (x213%((x214|x215)&x216));

	if (t48 != 1989) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x217 = INT16_MIN;
	uint32_t x218 = UINT32_MAX;
	static uint8_t x219 = 97U;
	volatile int64_t t49 = 727756083391LL;

	t49 = (x217%((x218|x219)&x220));

	if (t49 != -32768LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x221 = UINT8_MAX;
	uint32_t x222 = 37482U;
	int32_t x223 = INT32_MIN;
	uint8_t x224 = UINT8_MAX;
	volatile uint32_t t50 = 22282260U;

	t50 = (x221%((x222|x223)&x224));

	if (t50 != 43U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x225 = INT8_MIN;
	int8_t x226 = INT8_MIN;
	static volatile int16_t x227 = 1;
	volatile int32_t x228 = INT32_MAX;
	int32_t t51 = -162831593;

	t51 = (x225%((x226|x227)&x228));

	if (t51 != -128) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x229 = -1;
	uint16_t x230 = 8317U;
	static volatile int32_t x231 = 253;
	static int32_t x232 = -7668;
	int32_t t52 = -11332;

	t52 = (x229%((x230|x231)&x232));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x233 = UINT32_MAX;
	uint8_t x234 = 52U;
	int64_t x235 = INT64_MAX;
	uint32_t x236 = 267704925U;
	static int64_t t53 = -111276LL;

	t53 = (x233%((x234|x235)&x236));

	if (t53 != 11688495LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x237 = INT32_MIN;
	int64_t x238 = INT64_MIN;
	int64_t x239 = -1LL;
	int64_t x240 = INT64_MAX;
	static int64_t t54 = -163623883295460LL;

	t54 = (x237%((x238|x239)&x240));

	if (t54 != -2147483648LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x241 = INT64_MIN;
	int64_t x242 = -602699346LL;
	uint16_t x244 = 25U;
	int64_t t55 = -7584058327217LL;

	t55 = (x241%((x242|x243)&x244));

	if (t55 != -8LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint64_t x245 = 2055921967LLU;
	static int16_t x246 = INT16_MIN;
	static volatile int32_t x247 = -6;
	static int16_t x248 = -14329;
	uint64_t t56 = 119303369365LLU;

	t56 = (x245%((x246|x247)&x248));

	if (t56 != 2055921967LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x249 = -1LL;
	int64_t x250 = -1LL;
	int8_t x251 = INT8_MIN;
	int32_t x252 = -3487424;
	volatile int64_t t57 = -108019101535LL;

	t57 = (x249%((x250|x251)&x252));

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x253 = 2395U;
	static int64_t x256 = -826638945861839LL;
	int64_t t58 = -367296473161980LL;

	t58 = (x253%((x254|x255)&x256));

	if (t58 != 2395LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x261 = INT64_MAX;
	static volatile uint8_t x263 = UINT8_MAX;
	int32_t x264 = 12;
	int64_t t59 = 535037965130LL;

	t59 = (x261%((x262|x263)&x264));

	if (t59 != 7LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x265 = 1;
	int64_t t60 = 12LL;

	t60 = (x265%((x266|x267)&x268));

	if (t60 != 1LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x274 = INT32_MIN;
	static int16_t x275 = -1;
	int32_t x276 = INT32_MIN;
	int32_t t61 = -18;

	t61 = (x273%((x274|x275)&x276));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x279 = INT8_MAX;
	int8_t x280 = INT8_MAX;

	t62 = (x277%((x278|x279)&x280));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x281 = -16;
	static uint32_t x282 = 20U;
	static volatile uint16_t x283 = 3756U;
	uint64_t x284 = 718397446375835LLU;
	volatile uint64_t t63 = 30081923LLU;

	t63 = (x281%((x282|x283)&x284));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x285 = 29U;
	uint64_t x286 = UINT64_MAX;
	volatile int64_t x287 = INT64_MAX;
	uint64_t t64 = 2070554255756517140LLU;

	t64 = (x285%((x286|x287)&x288));

	if (t64 != 29LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x289 = 7044U;
	int32_t x291 = INT32_MAX;
	uint32_t x292 = 127U;
	uint32_t t65 = 87U;

	t65 = (x289%((x290|x291)&x292));

	if (t65 != 59U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x293 = INT32_MIN;
	int16_t x295 = INT16_MAX;
	int64_t x296 = INT64_MIN;
	volatile int64_t t66 = 722042697LL;

	t66 = (x293%((x294|x295)&x296));

	if (t66 != -2147483648LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x298 = 443049U;
	volatile int64_t x299 = INT64_MIN;
	uint64_t t67 = 174LLU;

	t67 = (x297%((x298|x299)&x300));

	if (t67 != 13176LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x301 = INT8_MIN;
	int64_t x303 = INT64_MAX;
	volatile int64_t t68 = -13LL;

	t68 = (x301%((x302|x303)&x304));

	if (t68 != -128LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x305 = INT64_MIN;
	volatile int16_t x306 = INT16_MIN;
	int16_t x307 = -1;
	volatile int8_t x308 = 1;
	volatile int64_t t69 = 10079LL;

	t69 = (x305%((x306|x307)&x308));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int8_t x309 = INT8_MIN;
	volatile uint32_t x310 = 2563793U;
	int64_t x311 = -129763213305LL;
	uint8_t x312 = 105U;
	volatile int64_t t70 = 4471386655200575LL;

	t70 = (x309%((x310|x311)&x312));

	if (t70 != -63LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x316 = 51;
	static uint64_t t71 = 3206507010LLU;

	t71 = (x313%((x314|x315)&x316));

	if (t71 != 6LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x317 = UINT16_MAX;
	uint64_t x318 = 4379275799882LLU;
	volatile int8_t x319 = INT8_MIN;
	volatile uint64_t t72 = 2031LLU;

	t72 = (x317%((x318|x319)&x320));

	if (t72 != 65535LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x326 = -1;
	int32_t x328 = INT32_MAX;
	int64_t t73 = -20713LL;

	t73 = (x325%((x326|x327)&x328));

	if (t73 != 1LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x329 = -980882657444LL;
	int64_t x330 = INT64_MIN;
	uint64_t x331 = 139LLU;
	volatile uint64_t t74 = 522680054357LLU;

	t74 = (x329%((x330|x331)&x332));

	if (t74 != 43LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x333 = INT32_MAX;
	int8_t x335 = INT8_MAX;
	static uint32_t x336 = UINT32_MAX;
	static uint32_t t75 = 1U;

	t75 = (x333%((x334|x335)&x336));

	if (t75 != 7U) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x337 = -1LL;
	static volatile int16_t x339 = -516;
	static int8_t x340 = INT8_MIN;

	t76 = (x337%((x338|x339)&x340));

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x345 = 8U;
	uint32_t x346 = 1814386933U;
	static int64_t x347 = 97LL;

	t77 = (x345%((x346|x347)&x348));

	if (t77 != 8LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x349 = INT32_MIN;
	static int64_t x350 = 25857565503LL;
	int32_t x351 = INT32_MIN;
	static uint16_t x352 = 190U;
	static volatile int64_t t78 = -6086LL;

	t78 = (x349%((x350|x351)&x352));

	if (t78 != -2LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x353 = 0U;
	volatile uint64_t t79 = 15LLU;

	t79 = (x353%((x354|x355)&x356));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x358 = 8U;
	int64_t x359 = 238261688930914450LL;
	uint8_t x360 = UINT8_MAX;
	volatile int64_t t80 = 30799493677LL;

	t80 = (x357%((x358|x359)&x360));

	if (t80 != -8LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x361 = UINT16_MAX;
	uint8_t x362 = UINT8_MAX;
	volatile uint32_t x363 = UINT32_MAX;
	volatile int16_t x364 = -1;

	t81 = (x361%((x362|x363)&x364));

	if (t81 != 65535U) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x365 = 7;
	uint64_t x368 = 85155460LLU;
	volatile uint64_t t82 = 58264LLU;

	t82 = (x365%((x366|x367)&x368));

	if (t82 != 7LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x369 = 1;
	int64_t x370 = -1LL;
	static int16_t x371 = INT16_MAX;
	int16_t x372 = -1940;
	volatile int64_t t83 = 466397200583LL;

	t83 = (x369%((x370|x371)&x372));

	if (t83 != 1LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x374 = INT64_MAX;
	int8_t x375 = INT8_MIN;
	static uint64_t x376 = 378562753LLU;
	static volatile uint64_t t84 = 133161184303885LLU;

	t84 = (x373%((x374|x375)&x376));

	if (t84 != 287872134LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x378 = -1LL;
	int16_t x380 = -1;

	t85 = (x377%((x378|x379)&x380));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x381 = 4LL;
	int8_t x382 = INT8_MIN;
	int32_t x383 = -24155657;
	volatile int8_t x384 = INT8_MIN;
	volatile int64_t t86 = -6363467LL;

	t86 = (x381%((x382|x383)&x384));

	if (t86 != 4LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x386 = UINT32_MAX;
	volatile int8_t x387 = INT8_MAX;
	int64_t x388 = INT64_MAX;
	int64_t t87 = 157819924165430891LL;

	t87 = (x385%((x386|x387)&x388));

	if (t87 != 1045085210LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x390 = UINT16_MAX;
	static int64_t x391 = -1LL;
	uint16_t x392 = 5335U;

	t88 = (x389%((x390|x391)&x392));

	if (t88 != -2103LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x393 = 17U;
	int64_t x394 = -140LL;
	int32_t x395 = 0;
	volatile int64_t t89 = 9877LL;

	t89 = (x393%((x394|x395)&x396));

	if (t89 != 17LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x397 = INT64_MAX;
	volatile int64_t x398 = -1LL;
	int8_t x399 = INT8_MIN;
	static volatile int64_t t90 = 68638543136484546LL;

	t90 = (x397%((x398|x399)&x400));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int32_t x401 = -11;
	int64_t x402 = -141351022611831775LL;
	static volatile int8_t x403 = -1;
	int16_t x404 = -1;
	int64_t t91 = 3507LL;

	t91 = (x401%((x402|x403)&x404));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x405 = INT16_MIN;
	volatile uint32_t x406 = UINT32_MAX;
	static int64_t x407 = INT64_MIN;
	static int64_t t92 = 393LL;

	t92 = (x405%((x406|x407)&x408));

	if (t92 != -8LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x409 = INT32_MIN;
	static int64_t x410 = INT64_MIN;
	uint32_t x411 = 22U;
	uint32_t x412 = 2042U;
	static volatile int64_t t93 = -147LL;

	t93 = (x409%((x410|x411)&x412));

	if (t93 != -2LL) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int16_t x413 = 1;
	int64_t x414 = 21714LL;
	uint64_t x416 = 145405LLU;

	t94 = (x413%((x414|x415)&x416));

	if (t94 != 1LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x417 = 0U;
	static int64_t x418 = INT64_MIN;
	int16_t x419 = -1;

	t95 = (x417%((x418|x419)&x420));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x421 = -1;
	volatile int16_t x422 = -254;
	int16_t x423 = INT16_MAX;
	uint32_t x424 = 37815U;
	uint32_t t96 = 56U;

	t96 = (x421%((x422|x423)&x424));

	if (t96 != 15225U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x425 = INT64_MIN;
	int64_t x426 = INT64_MIN;
	uint64_t x427 = UINT64_MAX;
	int8_t x428 = -1;
	uint64_t t97 = 68868993663358443LLU;

	t97 = (x425%((x426|x427)&x428));

	if (t97 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x429 = INT8_MIN;
	static volatile int16_t x430 = -1;
	volatile int16_t x432 = 1;

	t98 = (x429%((x430|x431)&x432));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x433 = 10U;
	int64_t x436 = -1LL;

	t99 = (x433%((x434|x435)&x436));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

