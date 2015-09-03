#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = INT8_MIN;
int64_t x7 = -1039669346LL;
int8_t x10 = INT8_MIN;
int32_t x18 = 48525;
int32_t t4 = -3365;
static int32_t x22 = -1;
int16_t x24 = INT16_MIN;
static int8_t x25 = -1;
static int32_t x26 = -1;
int8_t x41 = 44;
static int32_t x51 = -3532;
static volatile int16_t x58 = INT16_MIN;
static int8_t x59 = INT8_MIN;
uint32_t x65 = 18071U;
static int64_t x72 = -22513128388827897LL;
static int64_t x73 = INT64_MAX;
int64_t x74 = -1LL;
int64_t t18 = INT64_MAX;
volatile uint16_t x77 = UINT16_MAX;
int16_t x80 = -1;
uint8_t x82 = 1U;
int16_t x87 = INT16_MAX;
int32_t x88 = 52;
volatile int32_t t21 = INT32_MIN;
int32_t t22 = -427;
volatile int64_t t23 = -1059377283704703LL;
volatile int64_t x104 = INT64_MAX;
uint16_t x105 = 5399U;
static uint8_t x108 = UINT8_MAX;
volatile uint64_t t28 = 78463260714999LLU;
volatile int32_t t29 = 1;
int64_t x123 = INT64_MIN;
int32_t t30 = -74;
static volatile int16_t x127 = INT16_MIN;
static uint8_t x129 = UINT8_MAX;
int32_t x134 = 1348;
int32_t x139 = -1;
int8_t x140 = INT8_MIN;
uint8_t x141 = UINT8_MAX;
uint64_t x145 = 3758026020630763786LLU;
int8_t x151 = 8;
static uint8_t x152 = 9U;
uint16_t x153 = 171U;
int8_t x155 = INT8_MAX;
static int16_t x163 = 14714;
static int32_t t41 = 3;
int16_t x175 = -1;
volatile int32_t x177 = -1;
int32_t x179 = -3658041;
volatile int32_t t44 = -20;
int32_t x181 = -3;
int32_t x184 = INT32_MIN;
static volatile uint32_t t46 = 20U;
int64_t t47 = -22498LL;
static int64_t x210 = INT64_MAX;
uint16_t x216 = 27586U;
uint64_t x218 = UINT64_MAX;
int8_t x219 = -1;
int16_t x226 = INT16_MAX;
uint32_t x229 = 0U;
int32_t x239 = INT32_MIN;
uint8_t x245 = 58U;
volatile uint32_t x248 = 830981U;
volatile uint32_t t61 = 1923U;
int64_t x276 = INT64_MIN;
volatile int64_t t68 = 4073754884777265LL;
volatile int32_t x277 = INT32_MAX;
volatile uint16_t x278 = UINT16_MAX;
volatile int8_t x280 = INT8_MIN;
static volatile uint16_t x283 = UINT16_MAX;
int64_t x284 = INT64_MIN;
uint32_t x285 = 4U;
int64_t x292 = 3918LL;
static int64_t t75 = 1390LL;
uint8_t x310 = 5U;
uint64_t x316 = 52LLU;
uint16_t x319 = 1369U;
uint64_t t79 = 4967263LLU;
uint32_t x330 = 134975U;
volatile uint64_t t84 = 1LLU;
static int32_t x343 = INT32_MIN;
int64_t x345 = 408129LL;
int32_t x347 = INT32_MAX;
volatile uint16_t x348 = 94U;
int32_t x357 = INT32_MAX;
uint8_t x359 = UINT8_MAX;
volatile int64_t t89 = 33811842667LL;
int32_t x362 = INT32_MAX;
static int16_t x370 = INT16_MIN;
int64_t x372 = -1LL;
int8_t x373 = 2;
volatile uint32_t t94 = 2476239U;
volatile int8_t x381 = 16;
volatile uint32_t x386 = 39534U;
volatile int16_t x387 = INT16_MIN;
volatile int8_t x390 = INT8_MIN;
volatile uint64_t t98 = 14343082271323LLU;
int64_t x397 = -3368914749353278LL;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	volatile uint64_t x2 = 8360270LLU;
	int32_t x3 = INT32_MIN;
	int32_t t0 = 73235912;

	t0 = (x1|((x2<=x3)&x4));

	if (t0 != 65535) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 10;
	static uint64_t x6 = 3821829LLU;
	int8_t x8 = -1;
	volatile int32_t t1 = -8599145;

	t1 = (x5|((x6<=x7)&x8));

	if (t1 != 11) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -85345475426439702LL;
	uint64_t x11 = 44631601309LLU;
	volatile int64_t x12 = -2776152205LL;
	volatile int64_t t2 = 936914144712LL;

	t2 = (x9|((x10<=x11)&x12));

	if (t2 != -85345475426439702LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = UINT32_MAX;
	volatile int16_t x14 = -1;
	volatile int16_t x15 = INT16_MIN;
	volatile int8_t x16 = 0;
	static uint32_t t3 = UINT32_MAX;

	t3 = (x13|((x14<=x15)&x16));

	if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	uint16_t x19 = UINT16_MAX;
	int8_t x20 = INT8_MAX;

	t4 = (x17|((x18<=x19)&x20));

	if (t4 != -127) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 12U;
	int8_t x23 = INT8_MAX;
	volatile int32_t t5 = 43006;

	t5 = (x21|((x22<=x23)&x24));

	if (t5 != 12) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x27 = 6553U;
	int32_t x28 = -75805;
	static volatile int32_t t6 = 207;

	t6 = (x25|((x26<=x27)&x28));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = UINT32_MAX;
	static int64_t x30 = INT64_MIN;
	volatile uint8_t x31 = UINT8_MAX;
	int16_t x32 = 0;
	uint32_t t7 = UINT32_MAX;

	t7 = (x29|((x30<=x31)&x32));

	if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x33 = 1U;
	int16_t x34 = -2;
	static volatile uint16_t x35 = UINT16_MAX;
	static int8_t x36 = INT8_MIN;
	volatile uint32_t t8 = 248U;

	t8 = (x33|((x34<=x35)&x36));

	if (t8 != 1U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x37 = 1843441U;
	uint32_t x38 = UINT32_MAX;
	int16_t x39 = -1;
	static int64_t x40 = INT64_MIN;
	static int64_t t9 = -12763LL;

	t9 = (x37|((x38<=x39)&x40));

	if (t9 != 1843441LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x42 = 5574;
	volatile int32_t x43 = -19;
	uint16_t x44 = 2896U;
	int32_t t10 = 705829;

	t10 = (x41|((x42<=x43)&x44));

	if (t10 != 44) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = 78243LL;
	int8_t x46 = INT8_MIN;
	volatile int16_t x47 = -1;
	int8_t x48 = -1;
	volatile int64_t t11 = 154531415LL;

	t11 = (x45|((x46<=x47)&x48));

	if (t11 != 78243LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	static int32_t x50 = INT32_MIN;
	int64_t x52 = -1LL;
	int64_t t12 = 139472656769LL;

	t12 = (x49|((x50<=x51)&x52));

	if (t12 != -32767LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x53 = 7492141762437594LLU;
	uint16_t x54 = 29781U;
	volatile int16_t x55 = -187;
	int16_t x56 = INT16_MAX;
	uint64_t t13 = 18658760540LLU;

	t13 = (x53|((x54<=x55)&x56));

	if (t13 != 7492141762437594LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MAX;
	int64_t x60 = -1LL;
	static int64_t t14 = -2355479187675942LL;

	t14 = (x57|((x58<=x59)&x60));

	if (t14 != 32767LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -126088371841082737LL;
	volatile int64_t x62 = INT64_MIN;
	int64_t x63 = -2886LL;
	uint16_t x64 = 122U;
	static volatile int64_t t15 = 144885LL;

	t15 = (x61|((x62<=x63)&x64));

	if (t15 != -126088371841082737LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x66 = UINT8_MAX;
	uint16_t x67 = 41U;
	static int8_t x68 = -1;
	volatile uint32_t t16 = 37944474U;

	t16 = (x65|((x66<=x67)&x68));

	if (t16 != 18071U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MAX;
	uint64_t x70 = 15404524330LLU;
	static uint32_t x71 = 401U;
	int64_t t17 = 94LL;

	t17 = (x69|((x70<=x71)&x72));

	if (t17 != 2147483647LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x75 = -1;
	int32_t x76 = -1;

	t18 = (x73|((x74<=x75)&x76));

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x78 = INT16_MAX;
	static int8_t x79 = INT8_MIN;
	static volatile int32_t t19 = 77;

	t19 = (x77|((x78<=x79)&x80));

	if (t19 != 65535) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x81 = -9;
	volatile int32_t x83 = INT32_MAX;
	int64_t x84 = INT64_MAX;
	static volatile int64_t t20 = -1LL;

	t20 = (x81|((x82<=x83)&x84));

	if (t20 != -9LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MIN;
	static uint16_t x86 = 15781U;

	t21 = (x85|((x86<=x87)&x88));

	if (t21 != INT32_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x89 = 2;
	uint64_t x90 = UINT64_MAX;
	int8_t x91 = -1;
	int16_t x92 = 13472;

	t22 = (x89|((x90<=x91)&x92));

	if (t22 != 2) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint16_t x93 = UINT16_MAX;
	static uint8_t x94 = UINT8_MAX;
	static uint64_t x95 = 3083042656958306LLU;
	static int64_t x96 = -1LL;

	t23 = (x93|((x94<=x95)&x96));

	if (t23 != 65535LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MAX;
	int32_t x98 = INT32_MAX;
	int16_t x99 = -20;
	int64_t x100 = INT64_MIN;
	int64_t t24 = 1LL;

	t24 = (x97|((x98<=x99)&x100));

	if (t24 != 127LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x101 = -1LL;
	uint16_t x102 = 0U;
	int8_t x103 = -1;
	static int64_t t25 = -11553940866264258LL;

	t25 = (x101|((x102<=x103)&x104));

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x106 = INT8_MAX;
	static uint32_t x107 = 260557U;
	volatile int32_t t26 = 5;

	t26 = (x105|((x106<=x107)&x108));

	if (t26 != 5399) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = -3;
	uint64_t x110 = UINT64_MAX;
	int64_t x111 = 2777LL;
	static uint16_t x112 = 85U;
	volatile int32_t t27 = 1546536;

	t27 = (x109|((x110<=x111)&x112));

	if (t27 != -3) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = -16;
	int64_t x114 = INT64_MIN;
	int16_t x115 = 4;
	static uint64_t x116 = 3LLU;

	t28 = (x113|((x114<=x115)&x116));

	if (t28 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = -1;
	int64_t x118 = -1LL;
	int16_t x119 = 4886;
	int8_t x120 = -1;

	t29 = (x117|((x118<=x119)&x120));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint16_t x121 = 28422U;
	volatile int32_t x122 = -1;
	volatile int16_t x124 = INT16_MIN;

	t30 = (x121|((x122<=x123)&x124));

	if (t30 != 28422) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x125 = -40;
	int8_t x126 = INT8_MAX;
	int64_t x128 = 1476411285285389837LL;
	int64_t t31 = 132542668LL;

	t31 = (x125|((x126<=x127)&x128));

	if (t31 != -40LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x130 = 0U;
	volatile uint16_t x131 = UINT16_MAX;
	static int64_t x132 = INT64_MAX;
	static volatile int64_t t32 = -192127LL;

	t32 = (x129|((x130<=x131)&x132));

	if (t32 != 255LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = 37;
	uint8_t x135 = UINT8_MAX;
	volatile int8_t x136 = INT8_MIN;
	int32_t t33 = 782523;

	t33 = (x133|((x134<=x135)&x136));

	if (t33 != 37) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = 1U;
	volatile int8_t x138 = 0;
	uint32_t t34 = 182646U;

	t34 = (x137|((x138<=x139)&x140));

	if (t34 != 1U) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x142 = 2271U;
	int32_t x143 = -786149;
	static int16_t x144 = 1;
	volatile int32_t t35 = 40;

	t35 = (x141|((x142<=x143)&x144));

	if (t35 != 255) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x146 = INT16_MIN;
	int32_t x147 = -1;
	int16_t x148 = 0;
	volatile uint64_t t36 = 25LLU;

	t36 = (x145|((x146<=x147)&x148));

	if (t36 != 3758026020630763786LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x149 = 6752U;
	static int64_t x150 = -1LL;
	int32_t t37 = 4937269;

	t37 = (x149|((x150<=x151)&x152));

	if (t37 != 6753) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x154 = UINT64_MAX;
	uint32_t x156 = UINT32_MAX;
	volatile uint32_t t38 = 1U;

	t38 = (x153|((x154<=x155)&x156));

	if (t38 != 171U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MIN;
	int64_t x158 = -1LL;
	static uint32_t x159 = 235U;
	static volatile uint8_t x160 = 1U;
	int32_t t39 = -126241;

	t39 = (x157|((x158<=x159)&x160));

	if (t39 != -2147483647) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x161 = 104023393053LLU;
	int8_t x162 = INT8_MAX;
	static int16_t x164 = INT16_MIN;
	static uint64_t t40 = 71644289299982672LLU;

	t40 = (x161|((x162<=x163)&x164));

	if (t40 != 104023393053LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x165 = INT8_MAX;
	int64_t x166 = INT64_MIN;
	static int64_t x167 = INT64_MIN;
	uint16_t x168 = UINT16_MAX;

	t41 = (x165|((x166<=x167)&x168));

	if (t41 != 127) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = -1;
	volatile int8_t x170 = 5;
	int8_t x171 = INT8_MIN;
	uint32_t x172 = UINT32_MAX;
	uint32_t t42 = UINT32_MAX;

	t42 = (x169|((x170<=x171)&x172));

	if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = -107;
	int16_t x174 = INT16_MIN;
	int32_t x176 = -1;
	static int32_t t43 = -179787519;

	t43 = (x173|((x174<=x175)&x176));

	if (t43 != -107) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x178 = -1LL;
	int32_t x180 = 708091;

	t44 = (x177|((x178<=x179)&x180));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x182 = 39521U;
	volatile int32_t x183 = 2;
	volatile int32_t t45 = -1438780;

	t45 = (x181|((x182<=x183)&x184));

	if (t45 != -3) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = 999227U;
	uint32_t x186 = 102U;
	static int8_t x187 = -7;
	int32_t x188 = -186790344;

	t46 = (x185|((x186<=x187)&x188));

	if (t46 != 999227U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MAX;
	int64_t x190 = INT64_MAX;
	static volatile uint32_t x191 = 241473005U;
	int64_t x192 = INT64_MIN;

	t47 = (x189|((x190<=x191)&x192));

	if (t47 != 32767LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = UINT32_MAX;
	int32_t x194 = 451;
	static int8_t x195 = INT8_MAX;
	volatile int64_t x196 = -8084LL;
	volatile int64_t t48 = -135982746227800991LL;

	t48 = (x193|((x194<=x195)&x196));

	if (t48 != 4294967295LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x197 = 108U;
	int32_t x198 = INT32_MAX;
	int16_t x199 = -1;
	static uint32_t x200 = UINT32_MAX;
	static volatile uint32_t t49 = 0U;

	t49 = (x197|((x198<=x199)&x200));

	if (t49 != 108U) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = 65267740;
	int16_t x202 = -493;
	int32_t x203 = INT32_MIN;
	volatile int8_t x204 = INT8_MIN;
	static volatile int32_t t50 = -187318166;

	t50 = (x201|((x202<=x203)&x204));

	if (t50 != 65267740) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = -1;
	int16_t x206 = -5;
	static int16_t x207 = INT16_MAX;
	int8_t x208 = INT8_MIN;
	volatile int32_t t51 = 375209;

	t51 = (x205|((x206<=x207)&x208));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = UINT8_MAX;
	uint64_t x211 = 16259042081525145LLU;
	volatile int64_t x212 = 1LL;
	int64_t t52 = 73539583169LL;

	t52 = (x209|((x210<=x211)&x212));

	if (t52 != 255LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x213 = 84U;
	int32_t x214 = 75442100;
	int16_t x215 = 1471;
	int32_t t53 = 483137;

	t53 = (x213|((x214<=x215)&x216));

	if (t53 != 84) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x217 = INT8_MIN;
	static int64_t x220 = -2LL;
	static volatile int64_t t54 = 523LL;

	t54 = (x217|((x218<=x219)&x220));

	if (t54 != -128LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x221 = INT8_MIN;
	uint32_t x222 = 1356974973U;
	int64_t x223 = 96263972LL;
	static int64_t x224 = -12735980LL;
	volatile int64_t t55 = -16447812322431859LL;

	t55 = (x221|((x222<=x223)&x224));

	if (t55 != -128LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x225 = -1;
	volatile int8_t x227 = INT8_MIN;
	volatile int16_t x228 = -2938;
	volatile int32_t t56 = 268141898;

	t56 = (x225|((x226<=x227)&x228));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x230 = -2888398046909LL;
	int32_t x231 = -1;
	volatile int8_t x232 = INT8_MIN;
	volatile uint32_t t57 = 0U;

	t57 = (x229|((x230<=x231)&x232));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int32_t x233 = INT32_MIN;
	uint64_t x234 = 6493524LLU;
	int16_t x235 = INT16_MIN;
	static int16_t x236 = INT16_MIN;
	volatile int32_t t58 = INT32_MIN;

	t58 = (x233|((x234<=x235)&x236));

	if (t58 != INT32_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x237 = INT32_MIN;
	int16_t x238 = INT16_MIN;
	static volatile int32_t x240 = 32031332;
	int32_t t59 = INT32_MIN;

	t59 = (x237|((x238<=x239)&x240));

	if (t59 != INT32_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MIN;
	volatile uint32_t x242 = 6U;
	uint16_t x243 = 20212U;
	volatile int8_t x244 = 5;
	volatile int32_t t60 = -59;

	t60 = (x241|((x242<=x243)&x244));

	if (t60 != -32767) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x246 = 24;
	uint32_t x247 = 2483U;

	t61 = (x245|((x246<=x247)&x248));

	if (t61 != 59U) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = INT64_MIN;
	static volatile int32_t x250 = INT32_MAX;
	int8_t x251 = INT8_MIN;
	int16_t x252 = INT16_MAX;
	int64_t t62 = INT64_MIN;

	t62 = (x249|((x250<=x251)&x252));

	if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = -1;
	static int32_t x254 = -1;
	static int32_t x255 = -1;
	uint16_t x256 = 162U;
	static volatile int32_t t63 = 307178;

	t63 = (x253|((x254<=x255)&x256));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = INT64_MIN;
	int64_t x258 = INT64_MIN;
	uint8_t x259 = 105U;
	int32_t x260 = -1;
	volatile int64_t t64 = 10445LL;

	t64 = (x257|((x258<=x259)&x260));

	if (t64 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x261 = INT16_MIN;
	int16_t x262 = -4982;
	int8_t x263 = -1;
	uint8_t x264 = 26U;
	static int32_t t65 = -13195;

	t65 = (x261|((x262<=x263)&x264));

	if (t65 != -32768) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = 254216U;
	static volatile uint8_t x266 = UINT8_MAX;
	static uint8_t x267 = 1U;
	volatile int32_t x268 = -189987829;
	static uint32_t t66 = 14U;

	t66 = (x265|((x266<=x267)&x268));

	if (t66 != 254216U) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x269 = 11U;
	static uint32_t x270 = UINT32_MAX;
	int8_t x271 = INT8_MIN;
	static volatile int64_t x272 = INT64_MAX;
	int64_t t67 = 3668LL;

	t67 = (x269|((x270<=x271)&x272));

	if (t67 != 11LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x273 = INT8_MAX;
	int16_t x274 = INT16_MIN;
	int32_t x275 = INT32_MAX;

	t68 = (x273|((x274<=x275)&x276));

	if (t68 != 127LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x279 = 1967106LLU;
	volatile int32_t t69 = INT32_MAX;

	t69 = (x277|((x278<=x279)&x280));

	if (t69 != INT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = INT8_MIN;
	volatile uint64_t x282 = 2206702LLU;
	static volatile int64_t t70 = 1493314042LL;

	t70 = (x281|((x282<=x283)&x284));

	if (t70 != -128LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x286 = UINT32_MAX;
	int8_t x287 = INT8_MAX;
	uint16_t x288 = 20U;
	uint32_t t71 = 32952U;

	t71 = (x285|((x286<=x287)&x288));

	if (t71 != 4U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MIN;
	uint16_t x290 = 9U;
	int16_t x291 = -1;
	volatile int64_t t72 = -3157LL;

	t72 = (x289|((x290<=x291)&x292));

	if (t72 != -2147483648LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = INT8_MIN;
	uint64_t x294 = 169047980893LLU;
	int16_t x295 = 221;
	int64_t x296 = -1LL;
	int64_t t73 = -2676542542LL;

	t73 = (x293|((x294<=x295)&x296));

	if (t73 != -128LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = -46054374678LL;
	uint8_t x298 = UINT8_MAX;
	int8_t x299 = 8;
	int16_t x300 = -1;
	static volatile int64_t t74 = 74536412088185504LL;

	t74 = (x297|((x298<=x299)&x300));

	if (t74 != -46054374678LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x301 = 152U;
	static volatile int16_t x302 = INT16_MAX;
	int64_t x303 = INT64_MIN;
	volatile int64_t x304 = -10153791336638LL;

	t75 = (x301|((x302<=x303)&x304));

	if (t75 != 152LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MIN;
	uint8_t x306 = 2U;
	static int16_t x307 = -56;
	int32_t x308 = INT32_MAX;
	int32_t t76 = -203488982;

	t76 = (x305|((x306<=x307)&x308));

	if (t76 != -128) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = -1;
	static volatile int32_t x311 = 28863484;
	int64_t x312 = 1708LL;
	int64_t t77 = 33LL;

	t77 = (x309|((x310<=x311)&x312));

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = INT8_MAX;
	uint64_t x314 = 987LLU;
	static uint8_t x315 = UINT8_MAX;
	uint64_t t78 = 58897245798139LLU;

	t78 = (x313|((x314<=x315)&x316));

	if (t78 != 127LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint64_t x317 = 229614059264517684LLU;
	uint16_t x318 = UINT16_MAX;
	int8_t x320 = -1;

	t79 = (x317|((x318<=x319)&x320));

	if (t79 != 229614059264517684LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = INT8_MIN;
	int32_t x322 = INT32_MIN;
	int8_t x323 = INT8_MAX;
	int8_t x324 = 0;
	int32_t t80 = 1133;

	t80 = (x321|((x322<=x323)&x324));

	if (t80 != -128) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x325 = 7171368U;
	static uint32_t x326 = 521103826U;
	int64_t x327 = INT64_MIN;
	static int32_t x328 = -1;
	volatile uint32_t t81 = 19169U;

	t81 = (x325|((x326<=x327)&x328));

	if (t81 != 7171368U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = -1;
	static uint64_t x331 = 404907355301633582LLU;
	volatile int32_t x332 = -885063;
	static int32_t t82 = 329486664;

	t82 = (x329|((x330<=x331)&x332));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x333 = 353U;
	int8_t x334 = -22;
	int16_t x335 = -1;
	uint16_t x336 = 66U;
	int32_t t83 = 14;

	t83 = (x333|((x334<=x335)&x336));

	if (t83 != 353) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x337 = 5;
	uint16_t x338 = 2060U;
	int64_t x339 = INT64_MAX;
	static uint64_t x340 = 159486LLU;

	t84 = (x337|((x338<=x339)&x340));

	if (t84 != 5LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = -1;
	int8_t x342 = -1;
	int8_t x344 = INT8_MIN;
	volatile int32_t t85 = -48181;

	t85 = (x341|((x342<=x343)&x344));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int64_t x346 = -1LL;
	volatile int64_t t86 = -22616786217LL;

	t86 = (x345|((x346<=x347)&x348));

	if (t86 != 408129LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = INT32_MAX;
	static uint16_t x350 = UINT16_MAX;
	volatile int8_t x351 = 14;
	uint32_t x352 = UINT32_MAX;
	uint32_t t87 = 54018U;

	t87 = (x349|((x350<=x351)&x352));

	if (t87 != 2147483647U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = 2;
	static int64_t x354 = INT64_MAX;
	uint8_t x355 = 6U;
	static int32_t x356 = -1;
	int32_t t88 = 56;

	t88 = (x353|((x354<=x355)&x356));

	if (t88 != 2) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x358 = -1;
	int64_t x360 = 1340521118LL;

	t89 = (x357|((x358<=x359)&x360));

	if (t89 != 2147483647LL) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int64_t x361 = 68134415205LL;
	volatile uint64_t x363 = 32014041468LLU;
	int64_t x364 = INT64_MAX;
	int64_t t90 = -499305639LL;

	t90 = (x361|((x362<=x363)&x364));

	if (t90 != 68134415205LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x365 = UINT64_MAX;
	uint8_t x366 = 16U;
	int32_t x367 = -13;
	static int64_t x368 = -2123921207LL;
	uint64_t t91 = UINT64_MAX;

	t91 = (x365|((x366<=x367)&x368));

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x369 = 200543319U;
	static int8_t x371 = INT8_MIN;
	volatile int64_t t92 = 412874491059LL;

	t92 = (x369|((x370<=x371)&x372));

	if (t92 != 200543319LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x374 = INT64_MAX;
	uint16_t x375 = UINT16_MAX;
	int8_t x376 = -24;
	int32_t t93 = -27;

	t93 = (x373|((x374<=x375)&x376));

	if (t93 != 2) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x377 = 7U;
	uint8_t x378 = 0U;
	static uint16_t x379 = UINT16_MAX;
	uint32_t x380 = UINT32_MAX;

	t94 = (x377|((x378<=x379)&x380));

	if (t94 != 7U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x382 = INT64_MIN;
	volatile int32_t x383 = INT32_MIN;
	int8_t x384 = INT8_MIN;
	int32_t t95 = 70;

	t95 = (x381|((x382<=x383)&x384));

	if (t95 != 16) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x385 = 46U;
	int8_t x388 = INT8_MAX;
	volatile uint32_t t96 = 535982936U;

	t96 = (x385|((x386<=x387)&x388));

	if (t96 != 47U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x389 = INT8_MIN;
	uint16_t x391 = 1U;
	static int16_t x392 = -35;
	int32_t t97 = 1025256;

	t97 = (x389|((x390<=x391)&x392));

	if (t97 != -127) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x393 = 608892LLU;
	static int64_t x394 = INT64_MIN;
	static volatile int64_t x395 = INT64_MIN;
	int16_t x396 = -1;

	t98 = (x393|((x394<=x395)&x396));

	if (t98 != 608893LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x398 = 0U;
	int32_t x399 = -1;
	int8_t x400 = INT8_MIN;
	int64_t t99 = 2004725573520LL;

	t99 = (x397|((x398<=x399)&x400));

	if (t99 != -3368914749353278LL) { NG(); } else { ; }
	
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

