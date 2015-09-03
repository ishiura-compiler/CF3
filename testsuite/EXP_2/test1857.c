#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x4 = INT32_MIN;
static volatile uint32_t t1 = 446448428U;
volatile int16_t x9 = -13;
volatile int64_t t3 = -755669135LL;
int16_t x17 = 37;
uint8_t x26 = 19U;
volatile uint64_t t6 = 59LLU;
uint8_t x29 = 46U;
int32_t x31 = -3244677;
static int16_t x33 = -1;
int16_t x38 = -224;
volatile int32_t x41 = INT32_MIN;
static int8_t x43 = -1;
int8_t x47 = INT8_MAX;
volatile uint64_t t12 = 226138LLU;
int8_t x53 = 0;
static int32_t t14 = 45099917;
static volatile int64_t x67 = INT64_MIN;
int16_t x77 = -1;
uint16_t x83 = 5U;
int64_t x84 = 361793870759681774LL;
int64_t x86 = INT64_MAX;
uint16_t x87 = UINT16_MAX;
uint64_t x100 = 11237LLU;
int16_t x101 = INT16_MIN;
int16_t x114 = 6;
int64_t t28 = INT64_MIN;
static int64_t x119 = 25421134349LL;
volatile int8_t x120 = -1;
volatile int16_t x121 = -1;
int32_t x127 = -1;
int64_t t32 = -285428LL;
int64_t x133 = INT64_MIN;
uint32_t x155 = 1781760U;
static uint64_t x156 = UINT64_MAX;
uint64_t t38 = 282954011329LLU;
int32_t x164 = INT32_MIN;
static uint16_t x175 = UINT16_MAX;
static int64_t t43 = 15LL;
int16_t x177 = -1;
uint64_t t45 = 1565LLU;
static uint32_t x188 = 44U;
uint64_t t46 = 8550602LLU;
int32_t x191 = -1;
volatile int64_t t49 = 357411758LL;
volatile int8_t x205 = INT8_MIN;
static volatile int16_t x206 = INT16_MIN;
static uint32_t x207 = 1U;
int32_t x223 = INT32_MIN;
volatile int64_t t56 = INT64_MIN;
int32_t x229 = INT32_MIN;
uint16_t x237 = 0U;
uint64_t t61 = 6LLU;
uint64_t x251 = UINT64_MAX;
volatile int16_t x253 = -1;
static volatile uint64_t t64 = 425124LLU;
static uint16_t x261 = 10U;
int8_t x263 = -52;
volatile int16_t x267 = INT16_MIN;
volatile uint64_t x271 = 3208625LLU;
volatile uint64_t t67 = 13797010842787125LLU;
int32_t x275 = -43;
static int16_t x278 = -28;
volatile int32_t x283 = 3;
int8_t x289 = INT8_MAX;
int8_t x291 = INT8_MAX;
int64_t x297 = INT64_MIN;
volatile int16_t x306 = -1;
int64_t x310 = INT64_MIN;
static int16_t x311 = INT16_MAX;
volatile int64_t t77 = -32586243LL;
uint8_t x318 = UINT8_MAX;
static int64_t t79 = INT64_MIN;
int64_t x322 = -89290480LL;
int64_t x324 = -116467140525LL;
uint16_t x325 = UINT16_MAX;
int64_t x334 = 330035LL;
uint32_t x343 = 3107U;
int16_t x350 = 2984;
static volatile uint32_t t87 = 26U;
int64_t x354 = INT64_MAX;
int16_t x357 = INT16_MAX;
uint32_t x361 = UINT32_MAX;
static uint8_t x364 = 124U;
int32_t t92 = -19485;
uint8_t x376 = 5U;
uint8_t x380 = 34U;
uint64_t x383 = UINT64_MAX;
volatile int32_t x392 = 396;
int32_t x400 = INT32_MIN;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	uint32_t x2 = 245U;
	int32_t x3 = -4;
	uint32_t t0 = 425U;

	t0 = ((x1^(x2&x3))&x4);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 1U;
	volatile uint32_t x6 = 26326U;
	volatile int16_t x7 = 0;
	uint32_t x8 = UINT32_MAX;

	t1 = ((x5^(x6&x7))&x8);

	if (t1 != 1U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x10 = -19;
	static int16_t x11 = 10;
	uint32_t x12 = 74391U;
	static uint32_t t2 = 3U;

	t2 = ((x9^(x10&x11))&x12);

	if (t2 != 74387U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1LL;
	int64_t x14 = 1972765220291758212LL;
	int16_t x15 = 124;
	int8_t x16 = INT8_MIN;

	t3 = ((x13^(x14&x15))&x16);

	if (t3 != -128LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint64_t x18 = 11469072LLU;
	static int32_t x19 = INT32_MIN;
	uint64_t x20 = 543548LLU;
	static uint64_t t4 = 12680LLU;

	t4 = ((x17^(x18&x19))&x20);

	if (t4 != 36LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = 13070;
	uint64_t x22 = 141673351LLU;
	volatile int32_t x23 = INT32_MIN;
	int8_t x24 = 0;
	volatile uint64_t t5 = 16098LLU;

	t5 = ((x21^(x22&x23))&x24);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MAX;
	static int8_t x27 = INT8_MIN;
	volatile uint64_t x28 = 16373724231069940LLU;

	t6 = ((x25^(x26&x27))&x28);

	if (t6 != 28916LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x30 = INT64_MAX;
	volatile int64_t x32 = 416LL;
	volatile int64_t t7 = -89LL;

	t7 = ((x29^(x30&x31))&x32);

	if (t7 != 256LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x34 = -29;
	volatile int16_t x35 = -1;
	int16_t x36 = 12330;
	int32_t t8 = 32986367;

	t8 = ((x33^(x34&x35))&x36);

	if (t8 != 8) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -55;
	int16_t x39 = INT16_MIN;
	volatile int32_t x40 = -1;
	volatile int32_t t9 = 3;

	t9 = ((x37^(x38&x39))&x40);

	if (t9 != 32713) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x42 = 30U;
	int16_t x44 = -1;
	int32_t t10 = -3104606;

	t10 = ((x41^(x42&x43))&x44);

	if (t10 != -2147483618) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = 0;
	int64_t x46 = -6019851764872LL;
	uint8_t x48 = UINT8_MAX;
	volatile int64_t t11 = -54899241279380LL;

	t11 = ((x45^(x46&x47))&x48);

	if (t11 != 120LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x49 = 103;
	uint64_t x50 = 3157772LLU;
	int32_t x51 = INT32_MIN;
	volatile int32_t x52 = -40683;

	t12 = ((x49^(x50&x51))&x52);

	if (t12 != 5LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x54 = 2U;
	uint32_t x55 = UINT32_MAX;
	int32_t x56 = INT32_MIN;
	static volatile uint32_t t13 = 74609040U;

	t13 = ((x53^(x54&x55))&x56);

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	int16_t x58 = INT16_MIN;
	volatile int8_t x59 = -1;
	int16_t x60 = INT16_MIN;

	t14 = ((x57^(x58&x59))&x60);

	if (t14 != 2147450880) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 41U;
	int8_t x62 = 5;
	int16_t x63 = 2032;
	volatile uint8_t x64 = 5U;
	static volatile int32_t t15 = -43;

	t15 = ((x61^(x62&x63))&x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MIN;
	int16_t x66 = INT16_MIN;
	volatile int8_t x68 = INT8_MAX;
	int64_t t16 = 829098152590LL;

	t16 = ((x65^(x66&x67))&x68);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	int64_t x70 = 4132793911413820918LL;
	static int32_t x71 = INT32_MIN;
	static int8_t x72 = INT8_MAX;
	static int64_t t17 = -11451972348406LL;

	t17 = ((x69^(x70&x71))&x72);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x73 = 12;
	uint64_t x74 = UINT64_MAX;
	int64_t x75 = 3266845701575790LL;
	int32_t x76 = INT32_MIN;
	uint64_t t18 = 591411412297LLU;

	t18 = ((x73^(x74&x75))&x76);

	if (t18 != 3266844467134464LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x78 = -3;
	int64_t x79 = INT64_MIN;
	static int16_t x80 = INT16_MAX;
	volatile int64_t t19 = 12073275LL;

	t19 = ((x77^(x78&x79))&x80);

	if (t19 != 32767LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x81 = 2;
	int16_t x82 = -1;
	volatile int64_t t20 = 1425463LL;

	t20 = ((x81^(x82&x83))&x84);

	if (t20 != 6LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x85 = UINT16_MAX;
	int64_t x88 = 98043899297833LL;
	static volatile int64_t t21 = 1816269144LL;

	t21 = ((x85^(x86&x87))&x88);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x89 = -4;
	volatile int16_t x90 = INT16_MIN;
	uint64_t x91 = UINT64_MAX;
	int16_t x92 = 21;
	uint64_t t22 = 22LLU;

	t22 = ((x89^(x90&x91))&x92);

	if (t22 != 20LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = UINT16_MAX;
	uint16_t x94 = UINT16_MAX;
	uint8_t x95 = 123U;
	uint16_t x96 = UINT16_MAX;
	volatile int32_t t23 = -87998688;

	t23 = ((x93^(x94&x95))&x96);

	if (t23 != 65412) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = UINT8_MAX;
	uint16_t x98 = 1387U;
	int32_t x99 = -1;
	volatile uint64_t t24 = 11754051LLU;

	t24 = ((x97^(x98&x99))&x100);

	if (t24 != 388LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x102 = INT32_MIN;
	volatile uint64_t x103 = 2143927558LLU;
	static volatile int64_t x104 = -390324068681LL;
	static uint64_t t25 = 429059495840LLU;

	t25 = ((x101^(x102&x103))&x104);

	if (t25 != 18446743683385458688LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MIN;
	uint64_t x106 = 82562748191LLU;
	uint16_t x107 = UINT16_MAX;
	uint8_t x108 = 14U;
	static volatile uint64_t t26 = 811890375328228LLU;

	t26 = ((x105^(x106&x107))&x108);

	if (t26 != 14LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x109 = INT32_MIN;
	int32_t x110 = INT32_MAX;
	static int64_t x111 = INT64_MAX;
	static volatile int32_t x112 = INT32_MAX;
	int64_t t27 = 87521305311517LL;

	t27 = ((x109^(x110&x111))&x112);

	if (t27 != 2147483647LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = -817LL;
	volatile uint32_t x115 = UINT32_MAX;
	int64_t x116 = INT64_MIN;

	t28 = ((x113^(x114&x115))&x116);

	if (t28 != INT64_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x117 = INT32_MIN;
	int64_t x118 = -1LL;
	volatile int64_t t29 = -692558646LL;

	t29 = ((x117^(x118&x119))&x120);

	if (t29 != -23970989555LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x122 = INT32_MIN;
	static int32_t x123 = INT32_MIN;
	uint64_t x124 = 4124308641930486103LLU;
	volatile uint64_t t30 = 7204LLU;

	t30 = ((x121^(x122&x123))&x124);

	if (t30 != 978788695LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MIN;
	volatile uint32_t x126 = 247U;
	static uint32_t x128 = 7U;
	volatile uint32_t t31 = 741U;

	t31 = ((x125^(x126&x127))&x128);

	if (t31 != 7U) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = 1159U;
	int64_t x130 = INT64_MIN;
	volatile int8_t x131 = -1;
	int8_t x132 = 1;

	t32 = ((x129^(x130&x131))&x132);

	if (t32 != 1LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x134 = INT32_MIN;
	int16_t x135 = -1;
	uint8_t x136 = 0U;
	int64_t t33 = 15462735665697287LL;

	t33 = ((x133^(x134&x135))&x136);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = 7U;
	volatile int8_t x138 = INT8_MIN;
	uint16_t x139 = 57U;
	static int16_t x140 = INT16_MAX;
	static int32_t t34 = -262856963;

	t34 = ((x137^(x138&x139))&x140);

	if (t34 != 7) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MIN;
	int64_t x142 = -1LL;
	int32_t x143 = INT32_MIN;
	int8_t x144 = INT8_MIN;
	static volatile int64_t t35 = -4787155900LL;

	t35 = ((x141^(x142&x143))&x144);

	if (t35 != 2147483520LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MIN;
	static int8_t x146 = INT8_MIN;
	volatile int32_t x147 = INT32_MIN;
	int32_t x148 = INT32_MIN;
	volatile int32_t t36 = 10;

	t36 = ((x145^(x146&x147))&x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = UINT8_MAX;
	int16_t x150 = INT16_MIN;
	int64_t x151 = -1380658784238LL;
	int64_t x152 = INT64_MIN;
	volatile int64_t t37 = INT64_MIN;

	t37 = ((x149^(x150&x151))&x152);

	if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = -1;
	int16_t x154 = INT16_MAX;

	t38 = ((x153^(x154&x155))&x156);

	if (t38 != 4294955007LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = INT64_MAX;
	int8_t x158 = 1;
	int32_t x159 = 3;
	int32_t x160 = 195900;
	volatile int64_t t39 = -679388986985931LL;

	t39 = ((x157^(x158&x159))&x160);

	if (t39 != 195900LL) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int16_t x161 = INT16_MIN;
	int8_t x162 = -2;
	int16_t x163 = INT16_MAX;
	int32_t t40 = INT32_MIN;

	t40 = ((x161^(x162&x163))&x164);

	if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = -114;
	int8_t x166 = 0;
	int32_t x167 = INT32_MIN;
	int16_t x168 = -3;
	int32_t t41 = -1846846;

	t41 = ((x165^(x166&x167))&x168);

	if (t41 != -116) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x169 = INT16_MIN;
	uint8_t x170 = 53U;
	uint16_t x171 = UINT16_MAX;
	uint64_t x172 = UINT64_MAX;
	uint64_t t42 = 330078862108279LLU;

	t42 = ((x169^(x170&x171))&x172);

	if (t42 != 18446744073709518901LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x173 = 20082U;
	static int16_t x174 = INT16_MIN;
	int64_t x176 = INT64_MIN;

	t43 = ((x173^(x174&x175))&x176);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x178 = INT16_MIN;
	int32_t x179 = INT32_MIN;
	volatile int64_t x180 = 499368410559687242LL;
	volatile int64_t t44 = -27415687LL;

	t44 = ((x177^(x178&x179))&x180);

	if (t44 != 1937123914LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x181 = INT32_MAX;
	int32_t x182 = 1;
	static volatile uint64_t x183 = 11244309095LLU;
	volatile uint16_t x184 = UINT16_MAX;

	t45 = ((x181^(x182&x183))&x184);

	if (t45 != 65534LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = 6998LLU;
	uint32_t x186 = UINT32_MAX;
	volatile uint8_t x187 = 30U;

	t46 = ((x185^(x186&x187))&x188);

	if (t46 != 8LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x189 = 719;
	uint32_t x190 = UINT32_MAX;
	uint16_t x192 = 6483U;
	static uint32_t t47 = 2202U;

	t47 = ((x189^(x190&x191))&x192);

	if (t47 != 6416U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x193 = -1;
	uint8_t x194 = 61U;
	static int16_t x195 = INT16_MIN;
	volatile int16_t x196 = INT16_MIN;
	int32_t t48 = -24;

	t48 = ((x193^(x194&x195))&x196);

	if (t48 != -32768) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = INT8_MIN;
	uint16_t x198 = UINT16_MAX;
	int64_t x199 = INT64_MIN;
	static volatile int64_t x200 = -1LL;

	t49 = ((x197^(x198&x199))&x200);

	if (t49 != -128LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = -1;
	static uint16_t x202 = UINT16_MAX;
	int64_t x203 = INT64_MIN;
	volatile uint16_t x204 = UINT16_MAX;
	volatile int64_t t50 = -202204059679934LL;

	t50 = ((x201^(x202&x203))&x204);

	if (t50 != 65535LL) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint16_t x208 = UINT16_MAX;
	static uint32_t t51 = 795178483U;

	t51 = ((x205^(x206&x207))&x208);

	if (t51 != 65408U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MIN;
	uint64_t x210 = 164046091269430747LLU;
	int16_t x211 = -1;
	static volatile uint32_t x212 = 9664364U;
	volatile uint64_t t52 = 1476249271912LLU;

	t52 = ((x209^(x210&x211))&x212);

	if (t52 != 8607048LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = 13941U;
	int64_t x214 = -1LL;
	int16_t x215 = 4;
	uint64_t x216 = 974751054885162LLU;
	volatile uint64_t t53 = 4604155LLU;

	t53 = ((x213^(x214&x215))&x216);

	if (t53 != 12320LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MIN;
	static int32_t x218 = -1;
	int8_t x219 = INT8_MIN;
	static volatile int32_t x220 = INT32_MIN;
	volatile int32_t t54 = -24406356;

	t54 = ((x217^(x218&x219))&x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = -1;
	int16_t x222 = INT16_MIN;
	volatile uint32_t x224 = UINT32_MAX;
	volatile uint32_t t55 = 944U;

	t55 = ((x221^(x222&x223))&x224);

	if (t55 != 2147483647U) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x225 = INT64_MAX;
	static volatile int16_t x226 = INT16_MIN;
	int16_t x227 = -1;
	int32_t x228 = INT32_MIN;

	t56 = ((x225^(x226&x227))&x228);

	if (t56 != INT64_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x230 = 61342U;
	static int8_t x231 = -1;
	int64_t x232 = 274532092376LL;
	static volatile int64_t t57 = -1LL;

	t57 = ((x229^(x230&x231))&x232);

	if (t57 != 2147502488LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x233 = 913U;
	int32_t x234 = -1;
	int8_t x235 = INT8_MAX;
	uint16_t x236 = UINT16_MAX;
	uint32_t t58 = 79768U;

	t58 = ((x233^(x234&x235))&x236);

	if (t58 != 1006U) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x238 = -1;
	static int8_t x239 = -1;
	int16_t x240 = 14618;
	int32_t t59 = 13;

	t59 = ((x237^(x238&x239))&x240);

	if (t59 != 14618) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x241 = UINT16_MAX;
	volatile int64_t x242 = -1719431014009402277LL;
	uint16_t x243 = UINT16_MAX;
	uint16_t x244 = UINT16_MAX;
	volatile int64_t t60 = -410090343661211LL;

	t60 = ((x241^(x242&x243))&x244);

	if (t60 != 62372LL) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int32_t x245 = INT32_MIN;
	volatile int16_t x246 = -1;
	uint64_t x247 = 75617LLU;
	static uint8_t x248 = 3U;

	t61 = ((x245^(x246&x247))&x248);

	if (t61 != 1LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = -1;
	uint64_t x250 = 492160LLU;
	static uint64_t x252 = 143733435063053557LLU;
	uint64_t t62 = 263165506LLU;

	t62 = ((x249^(x250&x251))&x252);

	if (t62 != 143733435062561909LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x254 = 12195737;
	volatile int8_t x255 = INT8_MAX;
	static uint64_t x256 = 1493458LLU;
	static uint64_t t63 = 46251063796LLU;

	t63 = ((x253^(x254&x255))&x256);

	if (t63 != 1493442LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x257 = 533LLU;
	static volatile uint8_t x258 = 3U;
	static volatile int8_t x259 = 2;
	volatile uint8_t x260 = 127U;

	t64 = ((x257^(x258&x259))&x260);

	if (t64 != 23LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int16_t x262 = INT16_MAX;
	uint64_t x264 = UINT64_MAX;
	volatile uint64_t t65 = 109125LLU;

	t65 = ((x261^(x262&x263))&x264);

	if (t65 != 32710LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x265 = UINT16_MAX;
	int64_t x266 = -2068LL;
	uint64_t x268 = 3783313275903LLU;
	volatile uint64_t t66 = 200999214589LLU;

	t66 = ((x265^(x266&x267))&x268);

	if (t66 != 3783313275903LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = 91LLU;
	int16_t x270 = 5;
	static uint8_t x272 = UINT8_MAX;

	t67 = ((x269^(x270&x271))&x272);

	if (t67 != 90LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MIN;
	static int64_t x274 = 201132401141LL;
	int8_t x276 = -2;
	int64_t t68 = -3459LL;

	t68 = ((x273^(x274&x275))&x276);

	if (t68 != -201132383788LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x277 = 186854661793069LLU;
	int32_t x279 = INT32_MIN;
	uint8_t x280 = 1U;
	uint64_t t69 = 662857783436098LLU;

	t69 = ((x277^(x278&x279))&x280);

	if (t69 != 1LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x281 = 15435267903557515LLU;
	volatile int16_t x282 = INT16_MIN;
	uint64_t x284 = 2354LLU;
	static volatile uint64_t t70 = 6980817LLU;

	t70 = ((x281^(x282&x283))&x284);

	if (t70 != 2306LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x285 = 181U;
	uint64_t x286 = 2148972525915245351LLU;
	int32_t x287 = INT32_MIN;
	int8_t x288 = INT8_MIN;
	volatile uint64_t t71 = 383279LLU;

	t71 = ((x285^(x286&x287))&x288);

	if (t71 != 2148972524182962304LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x290 = 693U;
	int64_t x292 = INT64_MIN;
	static volatile int64_t t72 = -962LL;

	t72 = ((x289^(x290&x291))&x292);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = UINT64_MAX;
	volatile int32_t x294 = INT32_MIN;
	int8_t x295 = INT8_MIN;
	int32_t x296 = -1;
	volatile uint64_t t73 = 46245749222802LLU;

	t73 = ((x293^(x294&x295))&x296);

	if (t73 != 2147483647LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x298 = 1;
	volatile int32_t x299 = INT32_MAX;
	uint16_t x300 = 0U;
	volatile int64_t t74 = -190LL;

	t74 = ((x297^(x298&x299))&x300);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MIN;
	uint64_t x302 = UINT64_MAX;
	static volatile uint32_t x303 = UINT32_MAX;
	int16_t x304 = -1;
	volatile uint64_t t75 = 29553LLU;

	t75 = ((x301^(x302&x303))&x304);

	if (t75 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = -1LL;
	uint16_t x307 = 3U;
	int32_t x308 = -1;
	static volatile int64_t t76 = 14496001LL;

	t76 = ((x305^(x306&x307))&x308);

	if (t76 != -4LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x309 = -1002;
	static volatile int16_t x312 = -1;

	t77 = ((x309^(x310&x311))&x312);

	if (t77 != -1002LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = INT32_MIN;
	int32_t x314 = INT32_MIN;
	int64_t x315 = INT64_MIN;
	uint16_t x316 = 3U;
	volatile int64_t t78 = -276184861051709293LL;

	t78 = ((x313^(x314&x315))&x316);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = -79000501LL;
	int64_t x319 = -119340672561499861LL;
	volatile int64_t x320 = INT64_MIN;

	t79 = ((x317^(x318&x319))&x320);

	if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x321 = 312453816U;
	uint8_t x323 = UINT8_MAX;
	int64_t t80 = 117477393LL;

	t80 = ((x321^(x322&x323))&x324);

	if (t80 != 33826816LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x326 = INT8_MIN;
	int32_t x327 = 23;
	uint8_t x328 = 12U;
	int32_t t81 = 0;

	t81 = ((x325^(x326&x327))&x328);

	if (t81 != 12) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x329 = 1U;
	static int8_t x330 = INT8_MIN;
	static uint64_t x331 = UINT64_MAX;
	int16_t x332 = 1;
	static uint64_t t82 = 35375184061914LLU;

	t82 = ((x329^(x330&x331))&x332);

	if (t82 != 1LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = 3919878997480417LL;
	uint8_t x335 = 3U;
	int8_t x336 = -1;
	int64_t t83 = 379535250LL;

	t83 = ((x333^(x334&x335))&x336);

	if (t83 != 3919878997480418LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x337 = UINT32_MAX;
	int16_t x338 = 6;
	uint16_t x339 = 7U;
	static int64_t x340 = INT64_MIN;
	int64_t t84 = -817866LL;

	t84 = ((x337^(x338&x339))&x340);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = INT8_MAX;
	int32_t x342 = INT32_MAX;
	uint32_t x344 = 53322515U;
	uint32_t t85 = 1714753438U;

	t85 = ((x341^(x342&x343))&x344);

	if (t85 != 16U) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x345 = 12U;
	int32_t x346 = -1;
	volatile int16_t x347 = -102;
	int16_t x348 = INT16_MAX;
	static uint32_t t86 = 37352445U;

	t86 = ((x345^(x346&x347))&x348);

	if (t86 != 32662U) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x349 = UINT8_MAX;
	uint8_t x351 = 1U;
	uint32_t x352 = 6355U;

	t87 = ((x349^(x350&x351))&x352);

	if (t87 != 211U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x353 = INT16_MIN;
	static int16_t x355 = -2909;
	uint16_t x356 = 106U;
	volatile int64_t t88 = -1448096346LL;

	t88 = ((x353^(x354&x355))&x356);

	if (t88 != 34LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x358 = INT8_MAX;
	volatile uint8_t x359 = 1U;
	int64_t x360 = -1LL;
	int64_t t89 = -22414125885LL;

	t89 = ((x357^(x358&x359))&x360);

	if (t89 != 32766LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x362 = INT64_MAX;
	int8_t x363 = -1;
	int64_t t90 = 552643855485563LL;

	t90 = ((x361^(x362&x363))&x364);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x365 = INT16_MIN;
	uint8_t x366 = 109U;
	static int16_t x367 = INT16_MIN;
	int32_t x368 = -1;
	static volatile int32_t t91 = -1552;

	t91 = ((x365^(x366&x367))&x368);

	if (t91 != -32768) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = -1;
	static int32_t x370 = -1;
	static volatile uint16_t x371 = UINT16_MAX;
	int32_t x372 = -1;

	t92 = ((x369^(x370&x371))&x372);

	if (t92 != -65536) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = 1;
	volatile uint8_t x374 = 43U;
	int8_t x375 = 1;
	volatile int32_t t93 = -1672646;

	t93 = ((x373^(x374&x375))&x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x377 = -131151465;
	uint8_t x378 = UINT8_MAX;
	int8_t x379 = INT8_MAX;
	int32_t t94 = 20698;

	t94 = ((x377^(x378&x379))&x380);

	if (t94 != 32) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = INT64_MAX;
	volatile int16_t x382 = -1;
	uint8_t x384 = 20U;
	uint64_t t95 = 1LLU;

	t95 = ((x381^(x382&x383))&x384);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x385 = 13U;
	uint16_t x386 = UINT16_MAX;
	uint64_t x387 = UINT64_MAX;
	int8_t x388 = -1;
	uint64_t t96 = 1481016883LLU;

	t96 = ((x385^(x386&x387))&x388);

	if (t96 != 65522LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x389 = INT64_MIN;
	int32_t x390 = -1;
	static int8_t x391 = -1;
	volatile int64_t t97 = -1LL;

	t97 = ((x389^(x390&x391))&x392);

	if (t97 != 396LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = INT32_MIN;
	static volatile int64_t x394 = INT64_MAX;
	uint16_t x395 = 1550U;
	uint64_t x396 = 5466639483846230279LLU;
	uint64_t t98 = 477LLU;

	t98 = ((x393^(x394&x395))&x396);

	if (t98 != 5466639483212398598LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = 0;
	uint32_t x398 = 1022399494U;
	int8_t x399 = INT8_MAX;
	volatile uint32_t t99 = 2444U;

	t99 = ((x397^(x398&x399))&x400);

	if (t99 != 0U) { NG(); } else { ; }
	
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

