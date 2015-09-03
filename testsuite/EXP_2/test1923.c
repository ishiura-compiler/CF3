#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t2 = -1LL;
volatile int64_t x18 = -1038122334LL;
int64_t x21 = 144581467100LL;
int16_t x24 = -1;
uint8_t x25 = 1U;
int16_t x28 = -1;
int32_t x32 = INT32_MIN;
static int8_t x36 = -1;
int16_t x38 = -1;
int32_t x42 = INT32_MIN;
int32_t x44 = INT32_MIN;
int64_t x52 = INT64_MIN;
int64_t t12 = INT64_MIN;
static uint16_t x58 = 1U;
uint8_t x60 = 6U;
uint64_t x66 = 15333083864961984LLU;
int8_t x69 = INT8_MIN;
int64_t x71 = 32632891039LL;
int16_t x73 = 1;
int8_t x76 = -1;
static uint64_t t20 = UINT64_MAX;
int8_t x87 = INT8_MIN;
volatile int64_t t22 = -834618764729011116LL;
static int32_t x94 = INT32_MIN;
int64_t x95 = -92981LL;
volatile uint64_t x96 = 114589916651306975LLU;
volatile int16_t x98 = INT16_MIN;
static volatile int32_t t24 = -407064;
int8_t x103 = 0;
volatile uint32_t x110 = UINT32_MAX;
static int64_t x113 = INT64_MIN;
uint8_t x115 = 1U;
int32_t x119 = -1;
static uint64_t t30 = 0LLU;
volatile int64_t x129 = 39617LL;
int8_t x136 = INT8_MIN;
uint16_t x138 = 0U;
volatile int32_t x141 = 28297451;
int8_t x144 = INT8_MAX;
volatile uint32_t t35 = 1221086U;
uint16_t x145 = UINT16_MAX;
uint32_t t37 = UINT32_MAX;
static volatile int32_t x156 = -1;
uint8_t x165 = UINT8_MAX;
int8_t x171 = INT8_MIN;
int64_t t43 = -2LL;
uint16_t x178 = 0U;
uint16_t x180 = UINT16_MAX;
volatile uint64_t t44 = 96154010LLU;
int8_t x181 = INT8_MIN;
volatile uint8_t x184 = UINT8_MAX;
static uint16_t x186 = UINT16_MAX;
static int8_t x194 = INT8_MIN;
volatile int16_t x195 = -1;
static uint16_t x198 = 13627U;
int32_t x205 = INT32_MIN;
volatile int64_t x206 = 53412209LL;
static int64_t t51 = -602295862LL;
uint32_t x210 = 3U;
static int64_t x212 = 16365540LL;
int32_t x213 = -1;
int32_t x217 = INT32_MIN;
uint16_t x220 = UINT16_MAX;
uint32_t x225 = 2706U;
int64_t x226 = INT64_MIN;
int64_t x236 = -3LL;
static uint16_t x237 = 869U;
int64_t x244 = -112680861265019273LL;
uint8_t x245 = 23U;
volatile int32_t x246 = INT32_MIN;
int64_t t61 = 433381242853492LL;
volatile int16_t x249 = INT16_MAX;
int32_t x255 = INT32_MIN;
static uint8_t x256 = UINT8_MAX;
int8_t x257 = 17;
int64_t x258 = INT64_MIN;
int32_t x261 = -52946;
uint16_t x273 = 173U;
static int64_t x275 = -611424320185295705LL;
static int32_t x284 = -1;
int64_t x292 = INT64_MIN;
int64_t x294 = INT64_MIN;
static int64_t x295 = 3561759602651LL;
int64_t t73 = -47179192452558LL;
int64_t x297 = INT64_MIN;
int16_t x299 = 4;
int32_t x300 = INT32_MIN;
int16_t x303 = INT16_MIN;
uint64_t t75 = 1662457688LLU;
int64_t x307 = INT64_MIN;
static volatile int64_t t76 = 51740722557LL;
int64_t x314 = INT64_MIN;
volatile int64_t x317 = INT64_MIN;
volatile int64_t t79 = -164538LL;
uint16_t x328 = 2338U;
int64_t x331 = -1LL;
int16_t x332 = -1;
static uint8_t x345 = 0U;
static int64_t t86 = 67358704351044LL;
static int8_t x349 = INT8_MIN;
int16_t x351 = -1;
int64_t x352 = INT64_MIN;
int64_t t88 = -181LL;
int8_t x357 = 9;
int64_t x368 = -19635LL;
int64_t t91 = 2LL;
volatile int16_t x369 = 228;
uint16_t x378 = 2037U;
int32_t t94 = 229;
int16_t x387 = INT16_MAX;
static int64_t x389 = 68331LL;
int16_t x391 = 1;
uint32_t x393 = UINT32_MAX;
int64_t x394 = -18983471267086LL;
int16_t x395 = INT16_MIN;
volatile int64_t t98 = 6556085521633299LL;
int32_t x398 = INT32_MAX;


void f0(void) {
	int32_t x1 = -106;
	int64_t x2 = INT64_MIN;
	int16_t x3 = INT16_MAX;
	int32_t x4 = INT32_MAX;
	volatile int64_t t0 = -1017925001860LL;

	t0 = ((x1%(x2|x3))|x4);

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	int32_t x6 = -1;
	int64_t x7 = -2239637286LL;
	int16_t x8 = INT16_MIN;
	static int64_t t1 = -2094311626654777LL;

	t1 = ((x5%(x6|x7))|x8);

	if (t1 != -32768LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = INT64_MIN;
	uint8_t x10 = UINT8_MAX;
	volatile int64_t x11 = INT64_MIN;
	uint32_t x12 = UINT32_MAX;

	t2 = ((x9%(x10|x11))|x12);

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -1;
	uint16_t x14 = 9U;
	uint16_t x15 = UINT16_MAX;
	int16_t x16 = 13854;
	volatile int32_t t3 = 784118947;

	t3 = ((x13%(x14|x15))|x16);

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 1U;
	static int8_t x19 = INT8_MAX;
	volatile uint8_t x20 = 27U;
	volatile int64_t t4 = 160984LL;

	t4 = ((x17%(x18|x19))|x20);

	if (t4 != 27LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = -1;
	uint8_t x23 = UINT8_MAX;
	int64_t t5 = -68539557973758305LL;

	t5 = ((x21%(x22|x23))|x24);

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x26 = 14U;
	static int64_t x27 = -1LL;
	volatile int64_t t6 = -1LL;

	t6 = ((x25%(x26|x27))|x28);

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x29 = INT16_MIN;
	uint64_t x30 = UINT64_MAX;
	static int32_t x31 = INT32_MAX;
	volatile uint64_t t7 = 2740162695229LLU;

	t7 = ((x29%(x30|x31))|x32);

	if (t7 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x33 = INT16_MAX;
	volatile int32_t x34 = INT32_MIN;
	int32_t x35 = 1;
	volatile int32_t t8 = 75154246;

	t8 = ((x33%(x34|x35))|x36);

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x37 = -1;
	int16_t x39 = -1;
	volatile uint32_t x40 = 46011019U;
	volatile uint32_t t9 = 3U;

	t9 = ((x37%(x38|x39))|x40);

	if (t9 != 46011019U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x41 = -3479;
	volatile int8_t x43 = INT8_MAX;
	static volatile int32_t t10 = -1980;

	t10 = ((x41%(x42|x43))|x44);

	if (t10 != -3479) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	static int16_t x46 = INT16_MIN;
	static volatile int32_t x47 = INT32_MIN;
	int32_t x48 = -1;
	int32_t t11 = 18575;

	t11 = ((x45%(x46|x47))|x48);

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 0U;
	static int8_t x50 = INT8_MAX;
	uint32_t x51 = UINT32_MAX;

	t12 = ((x49%(x50|x51))|x52);

	if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -413199015LL;
	int8_t x54 = -1;
	int16_t x55 = INT16_MIN;
	int16_t x56 = -1;
	volatile int64_t t13 = -246198LL;

	t13 = ((x53%(x54|x55))|x56);

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = -3;
	int32_t x59 = INT32_MIN;
	volatile int32_t t14 = 62977;

	t14 = ((x57%(x58|x59))|x60);

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MIN;
	static uint16_t x62 = UINT16_MAX;
	static uint64_t x63 = 216011239869928290LLU;
	int32_t x64 = INT32_MIN;
	uint64_t t15 = 243279760127987LLU;

	t15 = ((x61%(x62|x63))|x64);

	if (t15 != 18446744072383823829LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = 8;
	uint32_t x67 = 58U;
	uint64_t x68 = 470172314320LLU;
	uint64_t t16 = 1640LLU;

	t16 = ((x65%(x66|x67))|x68);

	if (t16 != 470172314328LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x70 = 1860195620533LLU;
	int8_t x72 = 0;
	static volatile uint64_t t17 = 784438520LLU;

	t17 = ((x69%(x70|x71))|x72);

	if (t17 != 1720752798387LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x74 = INT32_MIN;
	int16_t x75 = INT16_MAX;
	int32_t t18 = 0;

	t18 = ((x73%(x74|x75))|x76);

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = 633033U;
	uint64_t x78 = 2336241LLU;
	int32_t x79 = INT32_MIN;
	volatile int32_t x80 = -1;
	volatile uint64_t t19 = UINT64_MAX;

	t19 = ((x77%(x78|x79))|x80);

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x81 = UINT64_MAX;
	int16_t x82 = INT16_MAX;
	int64_t x83 = INT64_MAX;
	int32_t x84 = -1;

	t20 = ((x81%(x82|x83))|x84);

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = -1;
	static uint8_t x86 = 10U;
	volatile int64_t x88 = 10776301432794874LL;
	static volatile int64_t t21 = -1503305237118005LL;

	t21 = ((x85%(x86|x87))|x88);

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = -1;
	static int64_t x90 = INT64_MAX;
	int8_t x91 = -1;
	uint32_t x92 = 64057215U;

	t22 = ((x89%(x90|x91))|x92);

	if (t22 != 64057215LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MIN;
	uint64_t t23 = 1372360873557216LLU;

	t23 = ((x93%(x94|x95))|x96);

	if (t23 != 18446744073709535231LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MAX;
	volatile int8_t x99 = INT8_MAX;
	volatile int16_t x100 = -1;

	t24 = ((x97%(x98|x99))|x100);

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x101 = 116U;
	static int16_t x102 = -7;
	int8_t x104 = -3;
	int32_t t25 = 140718;

	t25 = ((x101%(x102|x103))|x104);

	if (t25 != -3) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x105 = -1;
	static volatile int16_t x106 = -1;
	static int32_t x107 = -3678;
	static volatile int32_t x108 = -6457583;
	volatile int32_t t26 = 519;

	t26 = ((x105%(x106|x107))|x108);

	if (t26 != -6457583) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MIN;
	int32_t x111 = -1;
	volatile int16_t x112 = -1;
	volatile uint32_t t27 = UINT32_MAX;

	t27 = ((x109%(x110|x111))|x112);

	if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x114 = -1139;
	uint8_t x116 = 105U;
	int64_t t28 = 918424414563597525LL;

	t28 = ((x113%(x114|x115))|x116);

	if (t28 != -1041LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MIN;
	int16_t x118 = INT16_MIN;
	volatile int8_t x120 = -1;
	volatile int64_t t29 = 41824431319059870LL;

	t29 = ((x117%(x118|x119))|x120);

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x121 = -48;
	static int8_t x122 = INT8_MIN;
	static uint64_t x123 = 15740LLU;
	int16_t x124 = INT16_MIN;

	t30 = ((x121%(x122|x123))|x124);

	if (t30 != 18446744073709551568LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = -3;
	int32_t x126 = INT32_MIN;
	uint16_t x127 = UINT16_MAX;
	uint32_t x128 = 10971662U;
	uint32_t t31 = UINT32_MAX;

	t31 = ((x125%(x126|x127))|x128);

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x130 = 104;
	uint16_t x131 = UINT16_MAX;
	int16_t x132 = -115;
	int64_t t32 = 1629241561LL;

	t32 = ((x129%(x130|x131))|x132);

	if (t32 != -51LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = 12U;
	uint32_t x134 = UINT32_MAX;
	uint64_t x135 = 1219501LLU;
	uint64_t t33 = 29075788657263LLU;

	t33 = ((x133%(x134|x135))|x136);

	if (t33 != 18446744073709551500LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = 3U;
	static volatile int8_t x139 = INT8_MIN;
	uint16_t x140 = 3584U;
	volatile int32_t t34 = 353651;

	t34 = ((x137%(x138|x139))|x140);

	if (t34 != 3587) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x142 = INT8_MIN;
	uint32_t x143 = 31056664U;

	t35 = ((x141%(x142|x143))|x144);

	if (t35 != 28297471U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x146 = INT64_MAX;
	int8_t x147 = -1;
	int32_t x148 = -1;
	int64_t t36 = 0LL;

	t36 = ((x145%(x146|x147))|x148);

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = 65520854U;
	uint32_t x150 = 3514949U;
	static int16_t x151 = 0;
	int32_t x152 = -1;

	t37 = ((x149%(x150|x151))|x152);

	if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x153 = INT8_MIN;
	volatile int32_t x154 = -1;
	int8_t x155 = INT8_MIN;
	int32_t t38 = -12085;

	t38 = ((x153%(x154|x155))|x156);

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x157 = 7103;
	int32_t x158 = INT32_MIN;
	int32_t x159 = INT32_MIN;
	static int64_t x160 = INT64_MIN;
	volatile int64_t t39 = 1LL;

	t39 = ((x157%(x158|x159))|x160);

	if (t39 != -9223372036854768705LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x161 = 281;
	int32_t x162 = -1;
	static int64_t x163 = -1629689956LL;
	uint16_t x164 = 45U;
	volatile int64_t t40 = -1963794843055LL;

	t40 = ((x161%(x162|x163))|x164);

	if (t40 != 45LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x166 = INT8_MAX;
	uint16_t x167 = 6486U;
	int64_t x168 = INT64_MIN;
	volatile int64_t t41 = 841LL;

	t41 = ((x165%(x166|x167))|x168);

	if (t41 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = UINT8_MAX;
	static volatile int32_t x170 = -2072;
	int16_t x172 = INT16_MAX;
	int32_t t42 = 14;

	t42 = ((x169%(x170|x171))|x172);

	if (t42 != 32767) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MIN;
	int32_t x174 = INT32_MAX;
	static uint16_t x175 = 5U;
	int32_t x176 = 505174;

	t43 = ((x173%(x174|x175))|x176);

	if (t43 != -2LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = UINT64_MAX;
	volatile uint32_t x179 = UINT32_MAX;

	t44 = ((x177%(x178|x179))|x180);

	if (t44 != 65535LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x182 = 273945LLU;
	uint16_t x183 = UINT16_MAX;
	uint64_t t45 = 109LLU;

	t45 = ((x181%(x182|x183))|x184);

	if (t45 != 108031LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int8_t x185 = 2;
	static volatile int16_t x187 = -1;
	int64_t x188 = -508789422433089629LL;
	static int64_t t46 = 74485629LL;

	t46 = ((x185%(x186|x187))|x188);

	if (t46 != -508789422433089629LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = UINT32_MAX;
	uint32_t x190 = 854712014U;
	int16_t x191 = INT16_MIN;
	uint8_t x192 = 97U;
	uint32_t t47 = 1461630U;

	t47 = ((x189%(x190|x191))|x192);

	if (t47 != 8561U) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = INT32_MIN;
	int64_t x196 = -68831385997372753LL;
	int64_t t48 = 1591LL;

	t48 = ((x193%(x194|x195))|x196);

	if (t48 != -68831385997372753LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x197 = 4687U;
	uint64_t x199 = 226226493928768LLU;
	int64_t x200 = INT64_MIN;
	volatile uint64_t t49 = 942323224LLU;

	t49 = ((x197%(x198|x199))|x200);

	if (t49 != 9223372036854780495LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = 2;
	int32_t x202 = INT32_MAX;
	uint64_t x203 = 111614739635LLU;
	uint32_t x204 = 77632U;
	volatile uint64_t t50 = 110554LLU;

	t50 = ((x201%(x202|x203))|x204);

	if (t50 != 77634LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x207 = 1288433U;
	volatile int16_t x208 = 5;

	t51 = ((x205%(x206|x207))|x208);

	if (t51 != -21830729LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x209 = -775;
	int16_t x211 = INT16_MIN;
	int64_t t52 = 36442177LL;

	t52 = ((x209%(x210|x211))|x212);

	if (t52 != 16383990LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x214 = 3018;
	int64_t x215 = INT64_MIN;
	int64_t x216 = -1LL;
	volatile int64_t t53 = -62670299LL;

	t53 = ((x213%(x214|x215))|x216);

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x218 = INT32_MIN;
	int16_t x219 = INT16_MAX;
	int32_t t54 = 43039;

	t54 = ((x217%(x218|x219))|x220);

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x221 = -212846763LL;
	volatile int16_t x222 = INT16_MAX;
	static int64_t x223 = -20637555837LL;
	int8_t x224 = -1;
	static volatile int64_t t55 = 15849787633LL;

	t55 = ((x221%(x222|x223))|x224);

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x227 = 202;
	int32_t x228 = -1;
	volatile int64_t t56 = -3LL;

	t56 = ((x225%(x226|x227))|x228);

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = 88U;
	int64_t x230 = INT64_MIN;
	static int16_t x231 = INT16_MIN;
	int8_t x232 = INT8_MIN;
	volatile int64_t t57 = 4LL;

	t57 = ((x229%(x230|x231))|x232);

	if (t57 != -40LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x233 = UINT8_MAX;
	int8_t x234 = INT8_MIN;
	int8_t x235 = INT8_MIN;
	volatile int64_t t58 = 175437644238018203LL;

	t58 = ((x233%(x234|x235))|x236);

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x238 = 1U;
	uint64_t x239 = 708116300LLU;
	uint16_t x240 = 103U;
	volatile uint64_t t59 = 14611359720LLU;

	t59 = ((x237%(x238|x239))|x240);

	if (t59 != 871LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = -1;
	int64_t x242 = INT64_MIN;
	int8_t x243 = -1;
	volatile int64_t t60 = 386384849LL;

	t60 = ((x241%(x242|x243))|x244);

	if (t60 != -112680861265019273LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x247 = 26662LL;
	uint16_t x248 = UINT16_MAX;

	t61 = ((x245%(x246|x247))|x248);

	if (t61 != 65535LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x250 = 4280412726740905283LLU;
	int32_t x251 = -1;
	uint64_t x252 = 108847523560197870LLU;
	volatile uint64_t t62 = 9538LLU;

	t62 = ((x249%(x250|x251))|x252);

	if (t62 != 108847523560226815LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x253 = INT32_MAX;
	volatile uint32_t x254 = UINT32_MAX;
	uint32_t t63 = 1879229U;

	t63 = ((x253%(x254|x255))|x256);

	if (t63 != 2147483647U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x259 = INT8_MAX;
	int64_t x260 = -1LL;
	volatile int64_t t64 = -523558782872LL;

	t64 = ((x257%(x258|x259))|x260);

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x262 = -1;
	uint8_t x263 = 1U;
	volatile int16_t x264 = INT16_MAX;
	int32_t t65 = -4;

	t65 = ((x261%(x262|x263))|x264);

	if (t65 != 32767) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x265 = INT64_MIN;
	uint64_t x266 = 525195561LLU;
	uint64_t x267 = 530389383023LLU;
	static int32_t x268 = INT32_MIN;
	volatile uint64_t t66 = 417LLU;

	t66 = ((x265%(x266|x267))|x268);

	if (t66 != 18446744073031688165LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = INT32_MIN;
	int8_t x270 = INT8_MIN;
	static int64_t x271 = 2LL;
	volatile int64_t x272 = INT64_MAX;
	volatile int64_t t67 = 24587280061LL;

	t67 = ((x269%(x270|x271))|x272);

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x274 = 0;
	int8_t x276 = -3;
	volatile int64_t t68 = -30082542396589226LL;

	t68 = ((x273%(x274|x275))|x276);

	if (t68 != -3LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x277 = 590389870820581LLU;
	int8_t x278 = -5;
	static int16_t x279 = INT16_MIN;
	int32_t x280 = -151716544;
	static uint64_t t69 = 2196121188LLU;

	t69 = ((x277%(x278|x279))|x280);

	if (t69 != 18446744073692249573LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = 1009766385844593LL;
	int64_t x282 = -1LL;
	uint32_t x283 = UINT32_MAX;
	int64_t t70 = -739278LL;

	t70 = ((x281%(x282|x283))|x284);

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = 17304780;
	volatile uint32_t x286 = UINT32_MAX;
	static volatile uint8_t x287 = 93U;
	int16_t x288 = 33;
	volatile uint32_t t71 = 402502U;

	t71 = ((x285%(x286|x287))|x288);

	if (t71 != 17304813U) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x289 = 13U;
	uint64_t x290 = 712LLU;
	int64_t x291 = -1LL;
	static uint64_t t72 = 2907101506866829LLU;

	t72 = ((x289%(x290|x291))|x292);

	if (t72 != 9223372036854775821LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = -365;
	int8_t x296 = INT8_MIN;

	t73 = ((x293%(x294|x295))|x296);

	if (t73 != -109LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x298 = INT16_MAX;
	static int64_t t74 = 101LL;

	t74 = ((x297%(x298|x299))|x300);

	if (t74 != -8LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = 2896U;
	uint64_t x302 = UINT64_MAX;
	volatile uint8_t x304 = UINT8_MAX;

	t75 = ((x301%(x302|x303))|x304);

	if (t75 != 3071LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x305 = UINT32_MAX;
	static uint16_t x306 = 85U;
	int16_t x308 = INT16_MIN;

	t76 = ((x305%(x306|x307))|x308);

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MIN;
	int32_t x310 = -1;
	volatile uint16_t x311 = 819U;
	volatile int8_t x312 = 5;
	int32_t t77 = -7418971;

	t77 = ((x309%(x310|x311))|x312);

	if (t77 != 5) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x313 = 7349281625LLU;
	uint16_t x315 = 84U;
	int8_t x316 = -1;
	volatile uint64_t t78 = UINT64_MAX;

	t78 = ((x313%(x314|x315))|x316);

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x318 = UINT32_MAX;
	int32_t x319 = -875916356;
	uint32_t x320 = UINT32_MAX;

	t79 = ((x317%(x318|x319))|x320);

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = 0;
	uint32_t x322 = 238U;
	static int8_t x323 = INT8_MIN;
	int8_t x324 = 3;
	volatile uint32_t t80 = 125517317U;

	t80 = ((x321%(x322|x323))|x324);

	if (t80 != 3U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x325 = 16345U;
	uint64_t x326 = UINT64_MAX;
	uint64_t x327 = 161832827625391LLU;
	static volatile uint64_t t81 = 253811210837402LLU;

	t81 = ((x325%(x326|x327))|x328);

	if (t81 != 16379LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = 328224686LLU;
	int32_t x330 = INT32_MIN;
	volatile uint64_t t82 = UINT64_MAX;

	t82 = ((x329%(x330|x331))|x332);

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = INT16_MIN;
	static volatile uint16_t x334 = 56U;
	uint32_t x335 = UINT32_MAX;
	volatile int8_t x336 = INT8_MAX;
	static volatile uint32_t t83 = 182U;

	t83 = ((x333%(x334|x335))|x336);

	if (t83 != 4294934655U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = INT32_MIN;
	int16_t x338 = 0;
	uint16_t x339 = 1368U;
	int64_t x340 = 22LL;
	volatile int64_t t84 = -1496LL;

	t84 = ((x337%(x338|x339))|x340);

	if (t84 != -1346LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = -7;
	uint32_t x342 = 1100U;
	int32_t x343 = -1;
	volatile int8_t x344 = INT8_MAX;
	volatile uint32_t t85 = UINT32_MAX;

	t85 = ((x341%(x342|x343))|x344);

	if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int64_t x346 = -1LL;
	static int16_t x347 = -1611;
	uint8_t x348 = UINT8_MAX;

	t86 = ((x345%(x346|x347))|x348);

	if (t86 != 255LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x350 = UINT16_MAX;
	static volatile int64_t t87 = INT64_MIN;

	t87 = ((x349%(x350|x351))|x352);

	if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = INT32_MAX;
	int64_t x354 = -1LL;
	int16_t x355 = INT16_MIN;
	int32_t x356 = -1;

	t88 = ((x353%(x354|x355))|x356);

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x358 = INT8_MAX;
	uint8_t x359 = 83U;
	uint8_t x360 = 30U;
	int32_t t89 = -168530;

	t89 = ((x357%(x358|x359))|x360);

	if (t89 != 31) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MIN;
	uint8_t x362 = 1U;
	int8_t x363 = INT8_MAX;
	static int64_t x364 = -1LL;
	int64_t t90 = 1LL;

	t90 = ((x361%(x362|x363))|x364);

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x365 = 1060U;
	int8_t x366 = 57;
	int16_t x367 = INT16_MAX;

	t91 = ((x365%(x366|x367))|x368);

	if (t91 != -18579LL) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int32_t x370 = -9489;
	uint64_t x371 = 84115520172441225LLU;
	int64_t x372 = 28533LL;
	volatile uint64_t t92 = 10103LLU;

	t92 = ((x369%(x370|x371))|x372);

	if (t92 != 28661LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x373 = -1;
	int8_t x374 = INT8_MIN;
	static int64_t x375 = -85493035327LL;
	int8_t x376 = -15;
	volatile int64_t t93 = 15LL;

	t93 = ((x373%(x374|x375))|x376);

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = INT16_MIN;
	int8_t x379 = -1;
	uint8_t x380 = 6U;

	t94 = ((x377%(x378|x379))|x380);

	if (t94 != 6) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x381 = -1;
	int64_t x382 = INT64_MIN;
	int64_t x383 = INT64_MIN;
	int16_t x384 = INT16_MIN;
	int64_t t95 = 469277LL;

	t95 = ((x381%(x382|x383))|x384);

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x385 = 7U;
	volatile uint32_t x386 = 8153U;
	int16_t x388 = INT16_MIN;
	uint32_t t96 = 79432U;

	t96 = ((x385%(x386|x387))|x388);

	if (t96 != 4294934535U) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x390 = UINT16_MAX;
	uint32_t x392 = 2003724534U;
	int64_t t97 = -518716504762071878LL;

	t97 = ((x389%(x390|x391))|x392);

	if (t97 != 2003725054LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x396 = 0U;

	t98 = ((x393%(x394|x395))|x396);

	if (t98 != 15225LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = INT16_MAX;
	int32_t x399 = -12057421;
	static int8_t x400 = INT8_MAX;
	int32_t t99 = 12;

	t99 = ((x397%(x398|x399))|x400);

	if (t99 != 127) { NG(); } else { ; }
	
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

