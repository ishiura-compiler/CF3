#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x1 = 2008LLU;
int8_t x2 = 6;
static volatile int8_t x6 = INT8_MAX;
static uint64_t x15 = 276LLU;
uint32_t x23 = 2146155U;
int64_t x25 = -1LL;
int32_t x28 = -66367372;
int32_t x41 = INT32_MAX;
uint64_t x56 = 623844045LLU;
volatile uint64_t t13 = 559957068425LLU;
static volatile int32_t x57 = -1;
int8_t x64 = 3;
volatile uint32_t x67 = 709656691U;
uint32_t x76 = 45697218U;
volatile int8_t x78 = INT8_MIN;
int16_t x87 = 2111;
volatile uint8_t x99 = UINT8_MAX;
int16_t x102 = -1;
uint32_t x112 = 154U;
volatile uint32_t t27 = 37041U;
volatile uint16_t x113 = UINT16_MAX;
volatile uint64_t t28 = 58527533769625LLU;
volatile uint16_t x121 = 15U;
volatile int16_t x122 = -1;
volatile uint16_t x131 = 5U;
int8_t x133 = INT8_MIN;
uint8_t x137 = 127U;
static int32_t x149 = -1;
static int64_t t35 = 4369665453835145983LL;
uint8_t x155 = 60U;
uint8_t x162 = UINT8_MAX;
uint32_t x189 = 397930U;
int64_t x191 = INT64_MIN;
int64_t x201 = INT64_MAX;
static uint8_t x203 = UINT8_MAX;
volatile int8_t x214 = 30;
uint16_t x216 = UINT16_MAX;
int8_t x225 = INT8_MIN;
static uint16_t x230 = 1U;
static uint16_t x236 = UINT16_MAX;
volatile int32_t x237 = 1;
int64_t x240 = INT64_MIN;
volatile int32_t x242 = 6965547;
volatile uint64_t t57 = 18167965903275LLU;
volatile int16_t x246 = INT16_MAX;
int32_t x260 = INT32_MIN;
volatile uint64_t x277 = 4535136657326LLU;
static int64_t x278 = 793376575LL;
static volatile uint64_t t66 = 162493308LLU;
uint8_t x284 = UINT8_MAX;
volatile int8_t x291 = -1;
int32_t x293 = -1;
uint32_t x294 = 457927412U;
static int8_t x299 = -1;
int64_t x326 = -1LL;
int64_t x333 = INT64_MAX;
uint16_t x348 = 1224U;
int8_t x352 = INT8_MIN;
uint8_t x355 = 32U;
int16_t x356 = -1;
static int16_t x358 = 6706;
int64_t x359 = INT64_MAX;
int32_t x360 = -1;
volatile int16_t x361 = INT16_MIN;
volatile int64_t t84 = -361848196427298LL;
static uint32_t x369 = 90784U;
int16_t x370 = INT16_MAX;
static volatile uint32_t t86 = 117668071U;
uint64_t t87 = 113LLU;
int32_t x384 = INT32_MIN;
int16_t x386 = 3;
uint64_t x389 = 11184172435596LLU;
int8_t x396 = INT8_MIN;
static int64_t t93 = -543135819551398115LL;
uint32_t t94 = 6486155U;


void f0(void) {
	volatile uint8_t x3 = 1U;
	volatile uint16_t x4 = 8645U;
	uint64_t t0 = 192946454325LLU;

	t0 = (x1&((x2%x3)%x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 423933U;
	uint64_t x7 = 3084LLU;
	uint16_t x8 = 18461U;
	uint64_t t1 = 212797284576LLU;

	t1 = (x5&((x6%x7)%x8));

	if (t1 != 125LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	uint64_t x10 = 1283704806793436808LLU;
	int32_t x11 = INT32_MIN;
	int8_t x12 = INT8_MIN;
	uint64_t t2 = 5513255607020780650LLU;

	t2 = (x9&((x10%x11)%x12));

	if (t2 != 1283704804958273536LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 82627270151LLU;
	uint32_t x14 = UINT32_MAX;
	static int64_t x16 = 251909110744236833LL;
	static volatile uint64_t t3 = 427419LLU;

	t3 = (x13&((x14%x15)%x16));

	if (t3 != 3LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 298475179LLU;
	volatile uint32_t x18 = UINT32_MAX;
	volatile uint8_t x19 = UINT8_MAX;
	uint32_t x20 = 2043663U;
	static volatile uint64_t t4 = 990406840289LLU;

	t4 = (x17&((x18%x19)%x20));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = 5771LL;
	volatile int64_t x22 = INT64_MIN;
	static int32_t x24 = INT32_MIN;
	int64_t t5 = 587354774LL;

	t5 = (x21&((x22%x23)%x24));

	if (t5 != 1034LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x26 = 8U;
	int8_t x27 = INT8_MIN;
	static int64_t t6 = 134102174333785LL;

	t6 = (x25&((x26%x27)%x28));

	if (t6 != 8LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	int16_t x30 = -1;
	int16_t x31 = -1;
	static int8_t x32 = INT8_MIN;
	int32_t t7 = -867606;

	t7 = (x29&((x30%x31)%x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = 1828;
	int16_t x34 = INT16_MIN;
	uint16_t x35 = UINT16_MAX;
	uint64_t x36 = 2677789LLU;
	volatile uint64_t t8 = 5897803996052LLU;

	t8 = (x33&((x34%x35)%x36));

	if (t8 != 516LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 29500U;
	uint64_t x38 = 9077381LLU;
	static int16_t x39 = 16;
	int32_t x40 = -3594;
	uint64_t t9 = 63240774587583LLU;

	t9 = (x37&((x38%x39)%x40));

	if (t9 != 4LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x42 = INT8_MAX;
	volatile int32_t x43 = 177010340;
	static int64_t x44 = -1LL;
	volatile int64_t t10 = 822147113461348578LL;

	t10 = (x41&((x42%x43)%x44));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x45 = INT8_MAX;
	int16_t x46 = 8958;
	int8_t x47 = -8;
	int64_t x48 = 344262294989LL;
	static volatile int64_t t11 = 1LL;

	t11 = (x45&((x46%x47)%x48));

	if (t11 != 6LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -3580425;
	uint64_t x50 = UINT64_MAX;
	uint8_t x51 = UINT8_MAX;
	uint16_t x52 = 12U;
	uint64_t t12 = 18LLU;

	t12 = (x49&((x50%x51)%x52));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = UINT8_MAX;
	int32_t x54 = 1;
	volatile int16_t x55 = INT16_MIN;

	t13 = (x53&((x54%x55)%x56));

	if (t13 != 1LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x58 = 133U;
	uint8_t x59 = UINT8_MAX;
	uint64_t x60 = 2240643899846769LLU;
	static volatile uint64_t t14 = 100986LLU;

	t14 = (x57&((x58%x59)%x60));

	if (t14 != 133LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x61 = 0;
	static uint16_t x62 = UINT16_MAX;
	int16_t x63 = INT16_MIN;
	int32_t t15 = -35102;

	t15 = (x61&((x62%x63)%x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MAX;
	volatile uint16_t x66 = 174U;
	uint32_t x68 = 39767U;
	volatile uint32_t t16 = 44U;

	t16 = (x65&((x66%x67)%x68));

	if (t16 != 174U) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = 1U;
	volatile uint32_t x70 = 117939U;
	static uint64_t x71 = UINT64_MAX;
	int8_t x72 = INT8_MIN;
	static volatile uint64_t t17 = 20349LLU;

	t17 = (x69&((x70%x71)%x72));

	if (t17 != 1LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = -1LL;
	static int16_t x74 = -2570;
	volatile int8_t x75 = 5;
	int64_t t18 = 2492192LL;

	t18 = (x73&((x74%x75)%x76));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = -25;
	int8_t x79 = INT8_MIN;
	int8_t x80 = INT8_MIN;
	int32_t t19 = -26;

	t19 = (x77&((x78%x79)%x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = 940133LLU;
	int32_t x82 = -1;
	volatile int16_t x83 = INT16_MAX;
	volatile int16_t x84 = INT16_MIN;
	uint64_t t20 = 522332106711LLU;

	t20 = (x81&((x82%x83)%x84));

	if (t20 != 940133LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MIN;
	static int64_t x86 = -1LL;
	int16_t x88 = INT16_MAX;
	int64_t t21 = -1348708692364LL;

	t21 = (x85&((x86%x87)%x88));

	if (t21 != -2147483648LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = 0;
	static int64_t x90 = INT64_MIN;
	uint16_t x91 = 111U;
	static volatile int16_t x92 = INT16_MAX;
	int64_t t22 = 38826221827422106LL;

	t22 = (x89&((x90%x91)%x92));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MAX;
	int64_t x94 = -1LL;
	volatile int16_t x95 = -2;
	int64_t x96 = -26726215829859LL;
	volatile int64_t t23 = 61598798LL;

	t23 = (x93&((x94%x95)%x96));

	if (t23 != 32767LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = 112;
	static int32_t x98 = INT32_MAX;
	volatile uint16_t x100 = 26801U;
	int32_t t24 = -678;

	t24 = (x97&((x98%x99)%x100));

	if (t24 != 112) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = UINT8_MAX;
	int32_t x103 = 13;
	int8_t x104 = INT8_MIN;
	volatile int32_t t25 = 436216011;

	t25 = (x101&((x102%x103)%x104));

	if (t25 != 255) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x105 = INT8_MIN;
	static int16_t x106 = 92;
	static volatile uint8_t x107 = 57U;
	static uint16_t x108 = UINT16_MAX;
	int32_t t26 = 35975;

	t26 = (x105&((x106%x107)%x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MAX;
	int8_t x110 = 0;
	int32_t x111 = 173;

	t27 = (x109&((x110%x111)%x112));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x114 = 0;
	volatile int64_t x115 = INT64_MIN;
	volatile uint64_t x116 = 131557189LLU;

	t28 = (x113&((x114%x115)%x116));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x123 = -54134LL;
	uint32_t x124 = UINT32_MAX;
	volatile int64_t t29 = 127LL;

	t29 = (x121&((x122%x123)%x124));

	if (t29 != 15LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = INT64_MAX;
	volatile int64_t x126 = INT64_MIN;
	int8_t x127 = -2;
	int32_t x128 = -3756544;
	int64_t t30 = -404420LL;

	t30 = (x125&((x126%x127)%x128));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x129 = -1;
	static volatile uint16_t x130 = 34U;
	int8_t x132 = 5;
	volatile int32_t t31 = -59159083;

	t31 = (x129&((x130%x131)%x132));

	if (t31 != 4) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x134 = -1LL;
	static uint32_t x135 = UINT32_MAX;
	int64_t x136 = INT64_MIN;
	int64_t t32 = -675034814244769437LL;

	t32 = (x133&((x134%x135)%x136));

	if (t32 != -128LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x138 = INT64_MIN;
	uint64_t x139 = 161151LLU;
	static int16_t x140 = -1;
	volatile uint64_t t33 = 3879LLU;

	t33 = (x137&((x138%x139)%x140));

	if (t33 != 85LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x145 = -727563764705768LL;
	volatile uint8_t x146 = UINT8_MAX;
	volatile int64_t x147 = 39800941LL;
	uint8_t x148 = 6U;
	static volatile int64_t t34 = 379377162433743LL;

	t34 = (x145&((x146%x147)%x148));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x150 = INT8_MAX;
	int64_t x151 = -1LL;
	int32_t x152 = -5;

	t35 = (x149&((x150%x151)%x152));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x153 = INT8_MAX;
	volatile uint32_t x154 = 24308529U;
	int64_t x156 = -1LL;
	volatile int64_t t36 = 1LL;

	t36 = (x153&((x154%x155)%x156));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x157 = UINT64_MAX;
	uint8_t x158 = 32U;
	int8_t x159 = -3;
	volatile int16_t x160 = 786;
	uint64_t t37 = 59092645LLU;

	t37 = (x157&((x158%x159)%x160));

	if (t37 != 2LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x161 = 26401284485484712LLU;
	volatile int16_t x163 = INT16_MIN;
	int16_t x164 = -2048;
	uint64_t t38 = 514431859356LLU;

	t38 = (x161&((x162%x163)%x164));

	if (t38 != 168LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x165 = INT64_MIN;
	volatile int8_t x166 = INT8_MIN;
	int32_t x167 = INT32_MIN;
	static int16_t x168 = INT16_MIN;
	volatile int64_t t39 = INT64_MIN;

	t39 = (x165&((x166%x167)%x168));

	if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x169 = UINT64_MAX;
	int64_t x170 = INT64_MAX;
	static int32_t x171 = 31;
	static int64_t x172 = 215LL;
	volatile uint64_t t40 = 143217147749LLU;

	t40 = (x169&((x170%x171)%x172));

	if (t40 != 7LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x173 = -1;
	volatile int64_t x174 = INT64_MIN;
	volatile int8_t x175 = INT8_MIN;
	int16_t x176 = INT16_MIN;
	volatile int64_t t41 = 11LL;

	t41 = (x173&((x174%x175)%x176));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x177 = 7U;
	volatile uint8_t x178 = UINT8_MAX;
	int64_t x179 = INT64_MIN;
	uint32_t x180 = 1U;
	volatile int64_t t42 = 19452527490LL;

	t42 = (x177&((x178%x179)%x180));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x185 = INT32_MAX;
	int16_t x186 = -39;
	int32_t x187 = -114164235;
	int8_t x188 = INT8_MAX;
	int32_t t43 = 322;

	t43 = (x185&((x186%x187)%x188));

	if (t43 != 2147483609) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x190 = 2U;
	uint8_t x192 = 106U;
	volatile int64_t t44 = 97427679LL;

	t44 = (x189&((x190%x191)%x192));

	if (t44 != 2LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x193 = 119U;
	volatile int64_t x194 = INT64_MIN;
	int16_t x195 = INT16_MIN;
	int16_t x196 = INT16_MIN;
	int64_t t45 = 552199877832736085LL;

	t45 = (x193&((x194%x195)%x196));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x197 = -1;
	volatile int8_t x198 = INT8_MIN;
	int8_t x199 = INT8_MAX;
	uint64_t x200 = 115366559LLU;
	volatile uint64_t t46 = 822353216515LLU;

	t46 = (x197&((x198%x199)%x200));

	if (t46 != 93816584LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x202 = -1045051511994842LL;
	int32_t x204 = -1;
	static volatile int64_t t47 = 1007945306885994348LL;

	t47 = (x201&((x202%x203)%x204));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x205 = 8793LL;
	uint64_t x206 = 1163175767566238455LLU;
	uint64_t x207 = 111917LLU;
	uint32_t x208 = UINT32_MAX;
	volatile uint64_t t48 = 92LLU;

	t48 = (x205&((x206%x207)%x208));

	if (t48 != 8217LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x209 = INT16_MAX;
	int16_t x210 = INT16_MAX;
	uint16_t x211 = UINT16_MAX;
	uint32_t x212 = 2U;
	static volatile uint32_t t49 = 613U;

	t49 = (x209&((x210%x211)%x212));

	if (t49 != 1U) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x213 = 9U;
	int8_t x215 = 11;
	uint32_t t50 = 591456397U;

	t50 = (x213&((x214%x215)%x216));

	if (t50 != 8U) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x217 = 4499831818145199744LL;
	uint64_t x218 = 61100363596LLU;
	static uint16_t x219 = 41U;
	int64_t x220 = INT64_MAX;
	uint64_t t51 = 172LLU;

	t51 = (x217&((x218%x219)%x220));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x221 = INT64_MIN;
	volatile uint16_t x222 = UINT16_MAX;
	int16_t x223 = -1;
	uint16_t x224 = 7U;
	int64_t t52 = 3000323LL;

	t52 = (x221&((x222%x223)%x224));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x226 = INT32_MAX;
	uint64_t x227 = 5826094346LLU;
	volatile int64_t x228 = INT64_MIN;
	volatile uint64_t t53 = 30858291LLU;

	t53 = (x225&((x226%x227)%x228));

	if (t53 != 2147483520LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x229 = INT8_MIN;
	uint32_t x231 = 131526U;
	int16_t x232 = -1;
	volatile uint32_t t54 = 0U;

	t54 = (x229&((x230%x231)%x232));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x233 = 127653080353LL;
	int8_t x234 = -1;
	static int64_t x235 = INT64_MIN;
	int64_t t55 = 122692864320270751LL;

	t55 = (x233&((x234%x235)%x236));

	if (t55 != 127653080353LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x238 = UINT16_MAX;
	static volatile int32_t x239 = INT32_MIN;
	volatile int64_t t56 = -706639444480501LL;

	t56 = (x237&((x238%x239)%x240));

	if (t56 != 1LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x241 = INT16_MAX;
	static int32_t x243 = -6277;
	uint64_t x244 = 2066201550LLU;

	t57 = (x241&((x242%x243)%x244));

	if (t57 != 4354LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x245 = -3172320LL;
	int64_t x247 = INT64_MIN;
	uint16_t x248 = UINT16_MAX;
	static int64_t t58 = 19122138423LL;

	t58 = (x245&((x246%x247)%x248));

	if (t58 != 6176LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x249 = INT32_MAX;
	static int32_t x250 = INT32_MIN;
	volatile uint8_t x251 = UINT8_MAX;
	volatile int16_t x252 = 1244;
	int32_t t59 = 28005352;

	t59 = (x249&((x250%x251)%x252));

	if (t59 != 2147483520) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x253 = INT8_MIN;
	volatile int16_t x254 = INT16_MIN;
	int64_t x255 = INT64_MIN;
	volatile uint32_t x256 = UINT32_MAX;
	int64_t t60 = 27812664912990880LL;

	t60 = (x253&((x254%x255)%x256));

	if (t60 != -32768LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x257 = 2U;
	int64_t x258 = -1LL;
	uint8_t x259 = 2U;
	int64_t t61 = 1863920LL;

	t61 = (x257&((x258%x259)%x260));

	if (t61 != 2LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x261 = -1;
	int8_t x262 = INT8_MIN;
	uint8_t x263 = 72U;
	int16_t x264 = INT16_MIN;
	int32_t t62 = 7518335;

	t62 = (x261&((x262%x263)%x264));

	if (t62 != -56) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x265 = INT8_MAX;
	static uint32_t x266 = 752678U;
	static int8_t x267 = -1;
	int64_t x268 = 948090602634LL;
	int64_t t63 = 415604615000750397LL;

	t63 = (x265&((x266%x267)%x268));

	if (t63 != 38LL) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint8_t x269 = UINT8_MAX;
	static volatile int32_t x270 = INT32_MIN;
	volatile int8_t x271 = -1;
	static uint32_t x272 = 153771447U;
	volatile uint32_t t64 = 830U;

	t64 = (x269&((x270%x271)%x272));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x273 = INT8_MAX;
	int8_t x274 = INT8_MIN;
	volatile int16_t x275 = INT16_MIN;
	static uint32_t x276 = 64698549U;
	uint32_t t65 = 0U;

	t65 = (x273&((x274%x275)%x276));

	if (t65 != 86U) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x279 = 4293U;
	volatile int8_t x280 = INT8_MAX;

	t66 = (x277&((x278%x279)%x280));

	if (t66 != 44LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x281 = 64U;
	uint64_t x282 = UINT64_MAX;
	int64_t x283 = INT64_MAX;
	volatile uint64_t t67 = 1642799455LLU;

	t67 = (x281&((x282%x283)%x284));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x285 = INT8_MIN;
	static int16_t x286 = -358;
	static int16_t x287 = -1;
	int8_t x288 = INT8_MIN;
	volatile int32_t t68 = 25753;

	t68 = (x285&((x286%x287)%x288));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x289 = 14U;
	volatile int16_t x290 = -1;
	static int32_t x292 = INT32_MAX;
	volatile int32_t t69 = 0;

	t69 = (x289&((x290%x291)%x292));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x295 = INT8_MAX;
	int32_t x296 = -283164;
	uint32_t t70 = 50649U;

	t70 = (x293&((x294%x295)%x296));

	if (t70 != 83U) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x297 = 19U;
	int8_t x298 = 1;
	volatile int64_t x300 = -687LL;
	int64_t t71 = -251128178029038306LL;

	t71 = (x297&((x298%x299)%x300));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x301 = INT64_MIN;
	int64_t x302 = -115811063773260LL;
	uint16_t x303 = UINT16_MAX;
	volatile int8_t x304 = 3;
	int64_t t72 = -5208LL;

	t72 = (x301&((x302%x303)%x304));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x305 = 3543155683904675965LL;
	int16_t x306 = -1;
	int16_t x307 = -1;
	int32_t x308 = 3;
	int64_t t73 = 9LL;

	t73 = (x305&((x306%x307)%x308));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x309 = UINT64_MAX;
	uint32_t x310 = UINT32_MAX;
	int64_t x311 = -1LL;
	static volatile int32_t x312 = -1;
	volatile uint64_t t74 = 12655200797705LLU;

	t74 = (x309&((x310%x311)%x312));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x313 = INT8_MAX;
	uint64_t x314 = UINT64_MAX;
	int64_t x315 = 5LL;
	int32_t x316 = -912;
	volatile uint64_t t75 = 173623LLU;

	t75 = (x313&((x314%x315)%x316));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x325 = INT64_MIN;
	int16_t x327 = INT16_MAX;
	int8_t x328 = -15;
	int64_t t76 = INT64_MIN;

	t76 = (x325&((x326%x327)%x328));

	if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x329 = INT32_MIN;
	static int32_t x330 = INT32_MAX;
	uint8_t x331 = UINT8_MAX;
	static volatile int8_t x332 = INT8_MAX;
	volatile int32_t t77 = -54;

	t77 = (x329&((x330%x331)%x332));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x334 = -19419610327LL;
	uint8_t x335 = UINT8_MAX;
	uint32_t x336 = 11U;
	volatile int64_t t78 = -2045401808710445676LL;

	t78 = (x333&((x334%x335)%x336));

	if (t78 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x337 = -647349;
	volatile uint16_t x338 = 12U;
	static int8_t x339 = INT8_MAX;
	int8_t x340 = INT8_MAX;
	int32_t t79 = 2;

	t79 = (x337&((x338%x339)%x340));

	if (t79 != 8) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x345 = 1LL;
	uint64_t x346 = 15713LLU;
	int32_t x347 = INT32_MAX;
	volatile uint64_t t80 = 682704LLU;

	t80 = (x345&((x346%x347)%x348));

	if (t80 != 1LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x349 = 17LLU;
	volatile int8_t x350 = -6;
	int8_t x351 = 1;
	uint64_t t81 = 2672699221041LLU;

	t81 = (x349&((x350%x351)%x352));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x353 = 4278260131006LLU;
	int8_t x354 = -1;
	uint64_t t82 = 101758554LLU;

	t82 = (x353&((x354%x355)%x356));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x357 = 0LLU;
	volatile uint64_t t83 = 29442293681548LLU;

	t83 = (x357&((x358%x359)%x360));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x362 = 197LL;
	uint32_t x363 = 2897U;
	int8_t x364 = -13;

	t84 = (x361&((x362%x363)%x364));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x365 = 125U;
	uint64_t x366 = 13646879621390LLU;
	int16_t x367 = -1;
	int8_t x368 = -1;
	volatile uint64_t t85 = 286LLU;

	t85 = (x365&((x366%x367)%x368));

	if (t85 != 12LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x371 = 174695U;
	int32_t x372 = INT32_MIN;

	t86 = (x369&((x370%x371)%x372));

	if (t86 != 25248U) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x373 = -2485LL;
	int16_t x374 = -5;
	static uint64_t x375 = 90474420085680LLU;
	uint16_t x376 = 25095U;

	t87 = (x373&((x374%x375)%x376));

	if (t87 != 4608LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x377 = UINT32_MAX;
	int64_t x378 = -37615095041800102LL;
	int16_t x379 = 8;
	volatile uint16_t x380 = 403U;
	int64_t t88 = 43414998451439368LL;

	t88 = (x377&((x378%x379)%x380));

	if (t88 != 4294967290LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x381 = -2765518867135081822LL;
	volatile int32_t x382 = -72611;
	static int8_t x383 = -1;
	static volatile int64_t t89 = -62506LL;

	t89 = (x381&((x382%x383)%x384));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x385 = INT16_MIN;
	static volatile uint64_t x387 = 4342685087249770710LLU;
	int64_t x388 = -139919051521151753LL;
	static uint64_t t90 = 1281049272LLU;

	t90 = (x385&((x386%x387)%x388));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x390 = UINT64_MAX;
	volatile int32_t x391 = INT32_MIN;
	int8_t x392 = INT8_MIN;
	uint64_t t91 = 125182133180LLU;

	t91 = (x389&((x390%x391)%x392));

	if (t91 != 77596812LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x393 = 31;
	volatile int32_t x394 = 25;
	int32_t x395 = 368;
	volatile int32_t t92 = 54509;

	t92 = (x393&((x394%x395)%x396));

	if (t92 != 25) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x397 = INT64_MIN;
	int32_t x398 = -15;
	static int8_t x399 = INT8_MAX;
	uint32_t x400 = 23772270U;

	t93 = (x397&((x398%x399)%x400));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x401 = 5751207U;
	int16_t x402 = 1;
	int32_t x403 = INT32_MIN;
	uint8_t x404 = UINT8_MAX;

	t94 = (x401&((x402%x403)%x404));

	if (t94 != 1U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x409 = 88258767;
	uint32_t x410 = UINT32_MAX;
	int64_t x411 = INT64_MIN;
	int32_t x412 = INT32_MIN;
	static volatile int64_t t95 = 7496LL;

	t95 = (x409&((x410%x411)%x412));

	if (t95 != 88258767LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x413 = 0;
	static int32_t x414 = INT32_MIN;
	int16_t x415 = -1315;
	int16_t x416 = -1;
	volatile int32_t t96 = 3109;

	t96 = (x413&((x414%x415)%x416));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x417 = INT32_MIN;
	uint16_t x418 = 194U;
	volatile int16_t x419 = -1;
	int32_t x420 = INT32_MIN;
	static int32_t t97 = -359;

	t97 = (x417&((x418%x419)%x420));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x421 = -2985415;
	uint16_t x422 = 20U;
	uint32_t x423 = 171616147U;
	int16_t x424 = 802;
	volatile uint32_t t98 = 2021753018U;

	t98 = (x421&((x422%x423)%x424));

	if (t98 != 16U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x425 = INT8_MAX;
	volatile uint16_t x426 = UINT16_MAX;
	int32_t x427 = -5;
	int8_t x428 = INT8_MIN;
	int32_t t99 = 9101;

	t99 = (x425&((x426%x427)%x428));

	if (t99 != 0) { NG(); } else { ; }
	
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

