#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x1 = 24U;
static uint8_t x4 = 12U;
uint64_t x11 = 342270666631449LLU;
int32_t x14 = INT32_MIN;
int8_t x15 = 8;
int8_t x17 = -1;
static int32_t t4 = -689686;
uint32_t x22 = 1761U;
int64_t x23 = -1LL;
uint8_t x28 = 5U;
uint32_t x34 = UINT32_MAX;
int32_t x35 = -1694685;
volatile uint32_t t8 = 444U;
static int64_t x37 = -1LL;
int64_t x43 = -62671LL;
int64_t x44 = -5LL;
int64_t x45 = INT64_MAX;
static volatile int8_t x47 = INT8_MIN;
volatile int64_t t12 = -392233LL;
uint8_t x53 = 1U;
static int32_t x56 = INT32_MIN;
uint32_t x62 = 226266947U;
static volatile int64_t x71 = 16625864LL;
int64_t x72 = INT64_MIN;
volatile int16_t x80 = 54;
volatile int32_t x89 = 3437852;
uint32_t x90 = 622U;
uint64_t x92 = UINT64_MAX;
uint32_t x100 = 3639943U;
static uint64_t t23 = 47451253459206741LLU;
static int64_t x103 = INT64_MIN;
volatile int64_t t25 = 5871805933LL;
uint64_t x109 = 1059856875LLU;
int32_t t27 = -1;
int64_t x128 = INT64_MAX;
uint64_t t29 = 181426467LLU;
int64_t x129 = -1LL;
int64_t x134 = INT64_MIN;
int32_t x141 = -1;
int32_t x142 = INT32_MIN;
volatile int32_t x161 = INT32_MIN;
int64_t t39 = 3441419685481LL;
uint16_t x182 = UINT16_MAX;
static int32_t x184 = 1;
volatile int32_t t41 = -110366597;
static volatile uint32_t t42 = 596321649U;
uint8_t x191 = 3U;
static int64_t x200 = 519326218LL;
static volatile int32_t x203 = INT32_MIN;
volatile int32_t t45 = -775224;
uint64_t x214 = 3LLU;
uint64_t t49 = UINT64_MAX;
int16_t x226 = 20;
int16_t x227 = INT16_MAX;
int16_t x231 = INT16_MAX;
int16_t x233 = 2;
uint8_t x234 = 2U;
uint8_t x236 = 0U;
int64_t x237 = INT64_MIN;
uint16_t x238 = 125U;
static uint16_t x243 = 216U;
int64_t x244 = INT64_MAX;
int16_t x246 = -1;
volatile uint64_t x260 = 12659LLU;
volatile int16_t x261 = -1;
static uint8_t x262 = 15U;
volatile int16_t x263 = -623;
volatile uint32_t t59 = 22039U;
uint8_t x273 = 1U;
static volatile int16_t x275 = INT16_MAX;
static int64_t x277 = INT64_MIN;
volatile int16_t x279 = -16189;
uint32_t x283 = 38U;
volatile int16_t x295 = INT16_MIN;
volatile int32_t x296 = INT32_MIN;
volatile uint8_t x301 = 0U;
int16_t x306 = INT16_MIN;
volatile uint32_t t68 = 49851U;
uint8_t x317 = 0U;
int16_t x323 = -1;
int64_t x326 = -3001616724073269LL;
uint16_t x331 = UINT16_MAX;
int8_t x333 = -1;
static int16_t x335 = INT16_MIN;
static int64_t x338 = -1LL;
uint8_t x340 = 0U;
int64_t x341 = INT64_MIN;
int64_t x342 = INT64_MIN;
static uint64_t t77 = 87835552010LLU;
volatile int16_t x349 = INT16_MIN;
static int64_t x358 = -1LL;
static int16_t x367 = 50;
int64_t t83 = 95466919LL;
int16_t x382 = INT16_MIN;
static int64_t t84 = 1655437103649019LL;
static volatile uint16_t x385 = 70U;
int64_t x390 = -1LL;
uint16_t x394 = 327U;
uint32_t t87 = 516958U;
uint32_t x401 = UINT32_MAX;
volatile int64_t x402 = 11209LL;
uint32_t x411 = 1084U;
uint64_t x421 = 425811912LLU;
uint8_t x432 = 17U;
static volatile int8_t x433 = INT8_MIN;
static uint64_t x436 = 23754624458052LLU;
uint64_t t95 = 0LLU;
uint32_t x437 = UINT32_MAX;
uint32_t x438 = UINT32_MAX;
int64_t x445 = 1LL;
uint16_t x446 = 75U;


void f0(void) {
	static int16_t x2 = -2;
	volatile int32_t x3 = 173295;
	int32_t t0 = -59294257;

	t0 = ((x1&(x2+x3))^x4);

	if (t0 != 4) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = UINT8_MAX;
	uint32_t x6 = 614U;
	int16_t x7 = 24;
	int64_t x8 = 0LL;
	volatile int64_t t1 = -29465751099LL;

	t1 = ((x5&(x6+x7))^x8);

	if (t1 != 126LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 5U;
	int8_t x10 = 32;
	int16_t x12 = INT16_MAX;
	volatile uint64_t t2 = 474170004595387LLU;

	t2 = ((x9&(x10+x11))^x12);

	if (t2 != 32766LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = 2229281260415468237LL;
	uint8_t x16 = 7U;
	volatile int64_t t3 = 5996638029LL;

	t3 = ((x13&(x14+x15))^x16);

	if (t3 != 2229281259350130703LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint8_t x18 = 3U;
	int8_t x19 = 3;
	volatile int16_t x20 = INT16_MIN;

	t4 = ((x17&(x18+x19))^x20);

	if (t4 != -32762) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	uint8_t x24 = 0U;
	volatile int64_t t5 = 52739829293730936LL;

	t5 = ((x21&(x22+x23))^x24);

	if (t5 != 1760LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	uint64_t x26 = 71580689887734LLU;
	volatile int8_t x27 = -1;
	uint64_t t6 = 693771025LLU;

	t6 = ((x25&(x26+x27))^x28);

	if (t6 != 5LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MAX;
	static uint8_t x30 = 0U;
	volatile int8_t x31 = 0;
	int8_t x32 = INT8_MIN;
	volatile int32_t t7 = 224191059;

	t7 = ((x29&(x30+x31))^x32);

	if (t7 != -128) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MAX;
	int32_t x36 = 7599;

	t8 = ((x33&(x34+x35))^x36);

	if (t8 != 7565U) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x38 = INT16_MIN;
	static int8_t x39 = INT8_MAX;
	uint64_t x40 = 107083042871452695LLU;
	uint64_t t9 = 22195705984LLU;

	t9 = ((x37&(x38+x39))^x40);

	if (t9 != 18339661030838084712LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x41 = INT64_MIN;
	static uint16_t x42 = UINT16_MAX;
	int64_t t10 = -2000318657718076073LL;

	t10 = ((x41&(x42+x43))^x44);

	if (t10 != -5LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x46 = -1;
	static volatile uint64_t x48 = 31413249239086858LLU;
	uint64_t t11 = 1050798228099953677LLU;

	t11 = ((x45&(x46+x47))^x48);

	if (t11 != 9191958787615688821LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	static uint16_t x50 = 21U;
	volatile int64_t x51 = -36223517647330457LL;
	static int32_t x52 = -1;

	t12 = ((x49&(x50+x51))^x52);

	if (t12 != 36223517647339519LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x54 = 13742052438443LLU;
	volatile int64_t x55 = INT64_MAX;
	volatile uint64_t t13 = 2694148LLU;

	t13 = ((x53&(x54+x55))^x56);

	if (t13 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x57 = 2U;
	uint16_t x58 = 26888U;
	int64_t x59 = -3600LL;
	int16_t x60 = INT16_MIN;
	volatile int64_t t14 = -236215697LL;

	t14 = ((x57&(x58+x59))^x60);

	if (t14 != -32768LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x61 = -127LL;
	uint16_t x63 = 901U;
	int8_t x64 = INT8_MIN;
	int64_t t15 = -513187LL;

	t15 = ((x61&(x62+x63))^x64);

	if (t15 != -226267904LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x65 = INT8_MIN;
	int8_t x66 = -1;
	int16_t x67 = -712;
	static volatile int32_t x68 = -3;
	static int32_t t16 = -2764;

	t16 = ((x65&(x66+x67))^x68);

	if (t16 != 765) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int32_t x69 = 1;
	uint8_t x70 = 25U;
	volatile int64_t t17 = 2241824451805556LL;

	t17 = ((x69&(x70+x71))^x72);

	if (t17 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x73 = -1162413673489044LL;
	int32_t x74 = INT32_MIN;
	static int32_t x75 = INT32_MAX;
	int64_t x76 = 536655031560LL;
	int64_t t18 = 2005107333LL;

	t18 = ((x73&(x74+x75))^x76);

	if (t18 != -1162499289698204LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x77 = 0U;
	static uint64_t x78 = 24LLU;
	uint32_t x79 = 72467779U;
	static volatile uint64_t t19 = 176170588509LLU;

	t19 = ((x77&(x78+x79))^x80);

	if (t19 != 54LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x85 = 2885679LLU;
	int8_t x86 = INT8_MIN;
	int8_t x87 = -16;
	static uint32_t x88 = 450022874U;
	volatile uint64_t t20 = 579LLU;

	t20 = ((x85&(x86+x87))^x88);

	if (t20 != 452904442LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x91 = INT64_MIN;
	volatile uint64_t t21 = 2669499LLU;

	t21 = ((x89&(x90+x91))^x92);

	if (t21 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x93 = UINT64_MAX;
	int32_t x94 = INT32_MIN;
	static int64_t x95 = INT64_MAX;
	uint8_t x96 = 3U;
	static uint64_t t22 = 2880199042397683531LLU;

	t22 = ((x93&(x94+x95))^x96);

	if (t22 != 9223372034707292156LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x97 = INT8_MIN;
	int16_t x98 = INT16_MIN;
	uint64_t x99 = 2967057275320LLU;

	t23 = ((x97&(x98+x99))^x100);

	if (t23 != 2967056093959LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = INT8_MIN;
	uint16_t x102 = 83U;
	uint8_t x104 = 6U;
	static int64_t t24 = 19627499976317758LL;

	t24 = ((x101&(x102+x103))^x104);

	if (t24 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x105 = INT64_MIN;
	int32_t x106 = INT32_MAX;
	int8_t x107 = 0;
	static int8_t x108 = -1;

	t25 = ((x105&(x106+x107))^x108);

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x110 = INT16_MIN;
	static int64_t x111 = -10LL;
	int8_t x112 = INT8_MIN;
	static volatile uint64_t t26 = 1LLU;

	t26 = ((x109&(x110+x111))^x112);

	if (t26 != 18446744072649694818LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x117 = 3U;
	static int32_t x118 = -1;
	uint8_t x119 = 103U;
	int8_t x120 = -1;

	t27 = ((x117&(x118+x119))^x120);

	if (t27 != -3) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x121 = INT64_MIN;
	int32_t x122 = INT32_MIN;
	uint16_t x123 = UINT16_MAX;
	static int8_t x124 = INT8_MIN;
	volatile int64_t t28 = 2726566934LL;

	t28 = ((x121&(x122+x123))^x124);

	if (t28 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x125 = INT32_MAX;
	uint64_t x126 = 1550428LLU;
	uint16_t x127 = 1U;

	t29 = ((x125&(x126+x127))^x128);

	if (t29 != 9223372036853225378LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x130 = -662291106;
	static uint64_t x131 = 478LLU;
	static int32_t x132 = INT32_MIN;
	uint64_t t30 = 1528874467851LLU;

	t30 = ((x129&(x130+x131))^x132);

	if (t30 != 1485193020LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x133 = 1186U;
	static uint64_t x135 = 33943261365LLU;
	uint64_t x136 = 119764473379LLU;
	volatile uint64_t t31 = 1074835868204644LLU;

	t31 = ((x133&(x134+x135))^x136);

	if (t31 != 119764473475LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x143 = 1;
	int64_t x144 = 29809091618951634LL;
	volatile int64_t t32 = -10LL;

	t32 = ((x141&(x142+x143))^x144);

	if (t32 != -29809089571302957LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x145 = INT8_MIN;
	static volatile int32_t x146 = INT32_MIN;
	static uint8_t x147 = 18U;
	uint8_t x148 = UINT8_MAX;
	int32_t t33 = -682242;

	t33 = ((x145&(x146+x147))^x148);

	if (t33 != -2147483393) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x153 = INT16_MIN;
	static int32_t x154 = INT32_MIN;
	uint16_t x155 = 3U;
	volatile uint32_t x156 = UINT32_MAX;
	uint32_t t34 = 44U;

	t34 = ((x153&(x154+x155))^x156);

	if (t34 != 2147483647U) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x157 = -62434804LL;
	uint64_t x158 = UINT64_MAX;
	int16_t x159 = 25;
	static uint32_t x160 = 688U;
	uint64_t t35 = 29LLU;

	t35 = ((x157&(x158+x159))^x160);

	if (t35 != 696LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x162 = INT16_MIN;
	int64_t x163 = 6579386803162LL;
	int8_t x164 = -1;
	int64_t t36 = 2070944811148903LL;

	t36 = ((x161&(x162+x163))^x164);

	if (t36 != -6577742413825LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x165 = -1;
	int32_t x166 = INT32_MAX;
	static uint64_t x167 = 156995337361221LLU;
	volatile int64_t x168 = -1LL;
	volatile uint64_t t37 = 24788889956097LLU;

	t37 = ((x165&(x166+x167))^x168);

	if (t37 != 18446587076224706747LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x169 = INT64_MIN;
	uint16_t x170 = 1U;
	int32_t x171 = -775400;
	static int64_t x172 = INT64_MIN;
	volatile int64_t t38 = -4086088874969834822LL;

	t38 = ((x169&(x170+x171))^x172);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x173 = INT32_MAX;
	int64_t x174 = -19LL;
	int32_t x175 = -1;
	uint16_t x176 = UINT16_MAX;

	t39 = ((x173&(x174+x175))^x176);

	if (t39 != 2147418131LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x177 = INT32_MAX;
	static int64_t x178 = 911871395477208LL;
	uint16_t x179 = UINT16_MAX;
	volatile int32_t x180 = INT32_MAX;
	int64_t t40 = -4019043761LL;

	t40 = ((x177&(x178+x179))^x180);

	if (t40 != 1701005608LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x181 = INT32_MAX;
	static int32_t x183 = INT32_MIN;

	t41 = ((x181&(x182+x183))^x184);

	if (t41 != 65534) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x185 = INT16_MIN;
	uint32_t x186 = 546435648U;
	int32_t x187 = -1;
	uint32_t x188 = UINT32_MAX;

	t42 = ((x185&(x186+x187))^x188);

	if (t42 != 3748560895U) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x189 = 0U;
	int16_t x190 = INT16_MIN;
	static uint8_t x192 = 0U;
	int32_t t43 = 93605;

	t43 = ((x189&(x190+x191))^x192);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x197 = 615009350U;
	int64_t x198 = INT64_MIN;
	uint64_t x199 = 1045903443LLU;
	volatile uint64_t t44 = 13592083LLU;

	t44 = ((x197&(x198+x199))^x200);

	if (t44 != 989086280LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x201 = 120961891;
	uint8_t x202 = UINT8_MAX;
	static int32_t x204 = 264341;

	t45 = ((x201&(x202+x203))^x204);

	if (t45 != 264438) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x205 = 8400U;
	uint8_t x206 = UINT8_MAX;
	int32_t x207 = -52;
	uint32_t x208 = 884374415U;
	uint32_t t46 = 1003U;

	t46 = ((x205&(x206+x207))^x208);

	if (t46 != 884374351U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x209 = -223797546854LL;
	uint32_t x210 = 1006862U;
	static uint64_t x211 = 2682919210011LLU;
	int8_t x212 = -1;
	volatile uint64_t t47 = 1913828LLU;

	t47 = ((x209&(x210+x211))^x212);

	if (t47 != 18446741597115637751LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint64_t x213 = 27791400762634LLU;
	int64_t x215 = 97817181273LL;
	int64_t x216 = 35640380LL;
	volatile uint64_t t48 = 27784573LLU;

	t48 = ((x213&(x214+x215))^x216);

	if (t48 != 27951786036LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x217 = 6U;
	int16_t x218 = INT16_MIN;
	int16_t x219 = INT16_MIN;
	uint64_t x220 = UINT64_MAX;

	t49 = ((x217&(x218+x219))^x220);

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x225 = INT64_MIN;
	static volatile int32_t x228 = INT32_MAX;
	volatile int64_t t50 = 3155466038LL;

	t50 = ((x225&(x226+x227))^x228);

	if (t50 != 2147483647LL) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int32_t x229 = INT32_MIN;
	int16_t x230 = -1;
	uint64_t x232 = 5650590582892731491LLU;
	volatile uint64_t t51 = 28LLU;

	t51 = ((x229&(x230+x231))^x232);

	if (t51 != 5650590582892731491LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x235 = -114039936LL;
	static volatile int64_t t52 = -11825947270837739LL;

	t52 = ((x233&(x234+x235))^x236);

	if (t52 != 2LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x239 = 1U;
	int8_t x240 = -1;
	int64_t t53 = 3864727295455LL;

	t53 = ((x237&(x238+x239))^x240);

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x241 = 253463181053695LLU;
	int8_t x242 = 1;
	static volatile uint64_t t54 = 459LLU;

	t54 = ((x241&(x242+x243))^x244);

	if (t54 != 9223372036854775590LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x245 = -1;
	int64_t x247 = -1282547879LL;
	uint32_t x248 = 70U;
	static volatile int64_t t55 = 157LL;

	t55 = ((x245&(x246+x247))^x248);

	if (t55 != -1282547938LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x249 = -4;
	uint16_t x250 = UINT16_MAX;
	int16_t x251 = -7;
	volatile uint8_t x252 = 1U;
	int32_t t56 = -1;

	t56 = ((x249&(x250+x251))^x252);

	if (t56 != 65529) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int32_t x257 = INT32_MAX;
	int32_t x258 = INT32_MAX;
	uint64_t x259 = 19391LLU;
	volatile uint64_t t57 = 12137LLU;

	t57 = ((x257&(x258+x259))^x260);

	if (t57 != 31437LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x264 = 109074830542528988LL;
	int64_t t58 = 8051593756LL;

	t58 = ((x261&(x262+x263))^x264);

	if (t58 != -109074830542529412LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x265 = 14U;
	uint8_t x266 = 0U;
	uint32_t x267 = 14436U;
	volatile int8_t x268 = INT8_MIN;

	t59 = ((x265&(x266+x267))^x268);

	if (t59 != 4294967172U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x269 = INT8_MIN;
	static int32_t x270 = INT32_MIN;
	volatile uint16_t x271 = 858U;
	int64_t x272 = -1LL;
	static int64_t t60 = 5199332170701190LL;

	t60 = ((x269&(x270+x271))^x272);

	if (t60 != 2147482879LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x274 = UINT64_MAX;
	int16_t x276 = -1;
	uint64_t t61 = UINT64_MAX;

	t61 = ((x273&(x274+x275))^x276);

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x278 = INT8_MIN;
	int32_t x280 = INT32_MIN;
	volatile int64_t t62 = -1LL;

	t62 = ((x277&(x278+x279))^x280);

	if (t62 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x281 = 3U;
	int32_t x282 = -1;
	uint64_t x284 = UINT64_MAX;
	volatile uint64_t t63 = 245LLU;

	t63 = ((x281&(x282+x283))^x284);

	if (t63 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x289 = -96;
	static uint16_t x290 = UINT16_MAX;
	volatile int32_t x291 = INT32_MIN;
	int32_t x292 = INT32_MIN;
	volatile int32_t t64 = 12;

	t64 = ((x289&(x290+x291))^x292);

	if (t64 != 65440) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x293 = INT16_MIN;
	uint8_t x294 = 0U;
	int32_t t65 = 4;

	t65 = ((x293&(x294+x295))^x296);

	if (t65 != 2147450880) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x297 = 14U;
	uint16_t x298 = UINT16_MAX;
	uint32_t x299 = 75823265U;
	int8_t x300 = 31;
	static volatile uint32_t t66 = 262U;

	t66 = ((x297&(x298+x299))^x300);

	if (t66 != 31U) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x302 = 6LLU;
	uint64_t x303 = UINT64_MAX;
	static uint8_t x304 = 40U;
	static volatile uint64_t t67 = 12192294383841LLU;

	t67 = ((x301&(x302+x303))^x304);

	if (t67 != 40LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x305 = UINT32_MAX;
	int16_t x307 = -1;
	int8_t x308 = INT8_MAX;

	t68 = ((x305&(x306+x307))^x308);

	if (t68 != 4294934400U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x309 = INT16_MIN;
	uint64_t x310 = UINT64_MAX;
	static int16_t x311 = INT16_MAX;
	int32_t x312 = -1;
	volatile uint64_t t69 = UINT64_MAX;

	t69 = ((x309&(x310+x311))^x312);

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x313 = -1;
	volatile int16_t x314 = INT16_MAX;
	uint32_t x315 = 18053656U;
	int64_t x316 = INT64_MIN;
	volatile int64_t t70 = -7LL;

	t70 = ((x313&(x314+x315))^x316);

	if (t70 != -9223372036836689385LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x318 = 2U;
	int8_t x319 = INT8_MIN;
	static int32_t x320 = -3;
	volatile int32_t t71 = -2;

	t71 = ((x317&(x318+x319))^x320);

	if (t71 != -3) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x321 = -702;
	int32_t x322 = -1;
	static volatile uint16_t x324 = 1505U;
	static int32_t t72 = -62;

	t72 = ((x321&(x322+x323))^x324);

	if (t72 != -1885) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x325 = 1U;
	uint32_t x327 = 271737U;
	uint64_t x328 = UINT64_MAX;
	uint64_t t73 = UINT64_MAX;

	t73 = ((x325&(x326+x327))^x328);

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x329 = UINT32_MAX;
	int32_t x330 = INT32_MIN;
	static int8_t x332 = -1;
	uint32_t t74 = 2068083780U;

	t74 = ((x329&(x330+x331))^x332);

	if (t74 != 2147418112U) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int64_t x334 = INT64_MAX;
	int64_t x336 = INT64_MIN;
	int64_t t75 = -3656073360223525LL;

	t75 = ((x333&(x334+x335))^x336);

	if (t75 != -32769LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x337 = UINT32_MAX;
	int32_t x339 = -2849967;
	volatile int64_t t76 = -5157106057392LL;

	t76 = ((x337&(x338+x339))^x340);

	if (t76 != 4292117328LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x343 = 1;
	volatile uint64_t x344 = 2452LLU;

	t77 = ((x341&(x342+x343))^x344);

	if (t77 != 9223372036854778260LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x350 = -1LL;
	static uint32_t x351 = 13U;
	volatile uint8_t x352 = 95U;
	int64_t t78 = -131187447140409LL;

	t78 = ((x349&(x350+x351))^x352);

	if (t78 != 95LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x353 = INT8_MIN;
	int64_t x354 = -1LL;
	int16_t x355 = 52;
	static int64_t x356 = INT64_MIN;
	volatile int64_t t79 = INT64_MIN;

	t79 = ((x353&(x354+x355))^x356);

	if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x357 = UINT16_MAX;
	static int16_t x359 = -1;
	int32_t x360 = INT32_MAX;
	int64_t t80 = -40873LL;

	t80 = ((x357&(x358+x359))^x360);

	if (t80 != 2147418113LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x365 = 505LLU;
	uint64_t x366 = 1865LLU;
	int64_t x368 = INT64_MAX;
	volatile uint64_t t81 = 112LLU;

	t81 = ((x365&(x366+x367))^x368);

	if (t81 != 9223372036854775430LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x373 = 23;
	int64_t x374 = -13291290090352LL;
	int8_t x375 = 2;
	volatile uint8_t x376 = UINT8_MAX;
	int64_t t82 = 6497LL;

	t82 = ((x373&(x374+x375))^x376);

	if (t82 != 237LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x377 = -14686919LL;
	volatile int8_t x378 = -1;
	static uint32_t x379 = 1890U;
	int32_t x380 = -1;

	t83 = ((x377&(x378+x379))^x380);

	if (t83 != -1314LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x381 = -1LL;
	int16_t x383 = INT16_MIN;
	uint16_t x384 = UINT16_MAX;

	t84 = ((x381&(x382+x383))^x384);

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x386 = 16393LL;
	int64_t x387 = INT64_MIN;
	int64_t x388 = -308LL;
	int64_t t85 = 2542394LL;

	t85 = ((x385&(x386+x387))^x388);

	if (t85 != -308LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x389 = 1;
	static volatile int32_t x391 = INT32_MAX;
	volatile int32_t x392 = -1;
	volatile int64_t t86 = 5858649655LL;

	t86 = ((x389&(x390+x391))^x392);

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x393 = -1;
	int16_t x395 = -511;
	uint32_t x396 = UINT32_MAX;

	t87 = ((x393&(x394+x395))^x396);

	if (t87 != 183U) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x397 = 439613566225LLU;
	int64_t x398 = INT64_MIN;
	uint64_t x399 = UINT64_MAX;
	int8_t x400 = INT8_MIN;
	uint64_t t88 = 10LLU;

	t88 = ((x397&(x398+x399))^x400);

	if (t88 != 18446743634095985297LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x403 = INT32_MAX;
	int32_t x404 = INT32_MIN;
	volatile int64_t t89 = -3205LL;

	t89 = ((x401&(x402+x403))^x404);

	if (t89 != -4294956088LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x409 = -829087;
	volatile uint8_t x410 = UINT8_MAX;
	uint64_t x412 = 1027019LLU;
	volatile uint64_t t90 = 6494188490LLU;

	t90 = ((x409&(x410+x411))^x412);

	if (t90 != 1026794LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x413 = 6U;
	int64_t x414 = -1LL;
	int64_t x415 = INT64_MAX;
	int64_t x416 = -1LL;
	int64_t t91 = 35181066529LL;

	t91 = ((x413&(x414+x415))^x416);

	if (t91 != -7LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x422 = INT16_MIN;
	int8_t x423 = INT8_MIN;
	volatile int8_t x424 = INT8_MIN;
	volatile uint64_t t92 = 205408LLU;

	t92 = ((x421&(x422+x423))^x424);

	if (t92 != 18446744073283739648LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x425 = -796;
	volatile int64_t x426 = 1874412342189274487LL;
	int16_t x427 = 8;
	volatile uint32_t x428 = 0U;
	volatile int64_t t93 = -1326822728276495LL;

	t93 = ((x425&(x426+x427))^x428);

	if (t93 != 1874412342189274212LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x429 = -54;
	int32_t x430 = INT32_MIN;
	uint64_t x431 = UINT64_MAX;
	uint64_t t94 = 2512550034983882LLU;

	t94 = ((x429&(x430+x431))^x432);

	if (t94 != 18446744071562067931LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x434 = UINT64_MAX;
	static int8_t x435 = 0;

	t95 = ((x433&(x434+x435))^x436);

	if (t95 != 18446720319085093572LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x439 = UINT16_MAX;
	int16_t x440 = INT16_MAX;
	uint32_t t96 = 12U;

	t96 = ((x437&(x438+x439))^x440);

	if (t96 != 32769U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x441 = -1LL;
	uint32_t x442 = 3U;
	int16_t x443 = -49;
	uint64_t x444 = 17LLU;
	static volatile uint64_t t97 = 7922LLU;

	t97 = ((x441&(x442+x443))^x444);

	if (t97 != 4294967235LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x447 = INT16_MIN;
	int32_t x448 = INT32_MAX;
	volatile int64_t t98 = -943LL;

	t98 = ((x445&(x446+x447))^x448);

	if (t98 != 2147483646LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x449 = 118124;
	uint8_t x450 = UINT8_MAX;
	volatile uint16_t x451 = 5U;
	static int32_t x452 = INT32_MIN;
	volatile int32_t t99 = 416;

	t99 = ((x449&(x450+x451))^x452);

	if (t99 != -2147483388) { NG(); } else { ; }
	
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

