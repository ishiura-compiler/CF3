#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x3 = -1;
uint64_t x8 = 31865526918384LLU;
int8_t x14 = INT8_MAX;
int32_t x19 = 26640770;
uint64_t x21 = 4193073512761842LLU;
static int32_t x25 = -11;
int16_t x27 = 865;
uint32_t x35 = 4U;
uint32_t x42 = 4U;
volatile int8_t x43 = INT8_MAX;
uint16_t x44 = 454U;
volatile int32_t t9 = 803961;
uint64_t x47 = 401310176233LLU;
int64_t x49 = INT64_MIN;
static uint32_t x51 = 29912322U;
int8_t x52 = 39;
static volatile uint32_t x57 = 2U;
static volatile int64_t x71 = INT64_MAX;
static uint32_t x79 = 4957U;
uint8_t x80 = 17U;
uint16_t x83 = UINT16_MAX;
volatile uint64_t t17 = 325375954LLU;
volatile int32_t x94 = -1;
uint8_t x95 = 21U;
int8_t x98 = 43;
uint8_t x101 = 15U;
int64_t x110 = -1LL;
volatile int64_t t23 = 558774LL;
int8_t x115 = INT8_MIN;
static volatile uint64_t x120 = 3782LLU;
volatile int8_t x122 = -23;
uint8_t x123 = 101U;
int16_t x124 = INT16_MAX;
static volatile uint8_t x130 = UINT8_MAX;
static volatile uint16_t x139 = UINT16_MAX;
int32_t x141 = INT32_MIN;
int32_t x145 = 360;
static int32_t t32 = 0;
int8_t x152 = INT8_MIN;
int32_t x153 = 0;
static uint64_t x157 = 3699LLU;
static uint64_t t35 = 2LLU;
int8_t x170 = INT8_MIN;
int16_t x173 = INT16_MIN;
static int32_t t39 = -2121210;
volatile int32_t x196 = -1;
uint16_t x200 = 12822U;
uint64_t x201 = 1LLU;
volatile int64_t t46 = 15243830587533LL;
int32_t x222 = -85829515;
uint8_t x226 = 29U;
static volatile int32_t x227 = INT32_MIN;
static volatile int32_t t50 = 110;
uint64_t x232 = UINT64_MAX;
int32_t x236 = INT32_MAX;
volatile int32_t x242 = -1;
int32_t x244 = INT32_MAX;
int8_t x248 = INT8_MIN;
uint32_t x249 = 242898777U;
uint32_t t56 = 4U;
int16_t x254 = 91;
int16_t x255 = -1;
static uint8_t x256 = UINT8_MAX;
static volatile int8_t x258 = INT8_MIN;
int16_t x260 = 2198;
volatile int64_t t59 = INT64_MIN;
int8_t x265 = INT8_MIN;
int32_t t60 = -991668527;
uint16_t x281 = 0U;
volatile int32_t t63 = 155571;
volatile uint16_t x292 = 17U;
int64_t x294 = 18254LL;
uint64_t x295 = 3072115089LLU;
static uint32_t x300 = 1U;
uint32_t t66 = 37U;
static int64_t x317 = INT64_MAX;
int32_t x318 = INT32_MIN;
volatile int8_t x320 = -1;
volatile int64_t t70 = -1367475LL;
int16_t x321 = INT16_MAX;
static int32_t x338 = 83707455;
volatile int64_t x339 = INT64_MIN;
volatile uint64_t t75 = 835322494811766455LLU;
int64_t x348 = -45727786175936566LL;
volatile int64_t t76 = -105613386269LL;
volatile int16_t x351 = INT16_MAX;
volatile int64_t x354 = -1LL;
int32_t x355 = INT32_MIN;
volatile int32_t x357 = -13295171;
volatile int64_t t80 = 163663740416LL;
uint8_t x377 = 4U;
volatile int32_t t83 = -620012854;
static int64_t x385 = -57596523777644LL;
int64_t x386 = -1LL;
int32_t x391 = INT32_MAX;
uint16_t x394 = 28U;
volatile uint32_t t87 = 6U;
static uint32_t x399 = 10412U;
int8_t x400 = -1;
int32_t x401 = INT32_MAX;
uint8_t x405 = 27U;
volatile int64_t t90 = 1352754794835LL;
int16_t x415 = -7730;
volatile int32_t t93 = 48243;
uint64_t x434 = UINT64_MAX;
uint64_t t95 = 402771LLU;
uint64_t x439 = 764567LLU;
int8_t x440 = -6;
int8_t x448 = INT8_MIN;


void f0(void) {
	int64_t x1 = INT64_MIN;
	volatile uint16_t x2 = 207U;
	int64_t x4 = -960093672978655LL;
	static int64_t t0 = -317973LL;

	t0 = (x1&((x2<=x3)-x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 1U;
	volatile int64_t x6 = INT64_MIN;
	static int64_t x7 = -109482302LL;
	static uint64_t t1 = 645LLU;

	t1 = (x5&((x6<=x7)-x8));

	if (t1 != 1LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -2;
	volatile int8_t x10 = 28;
	static int64_t x11 = INT64_MIN;
	static volatile int16_t x12 = INT16_MIN;
	static int32_t t2 = 35818706;

	t2 = (x9&((x10<=x11)-x12));

	if (t2 != 32768) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x13 = INT32_MIN;
	uint32_t x15 = UINT32_MAX;
	int32_t x16 = 129061;
	volatile int32_t t3 = INT32_MIN;

	t3 = (x13&((x14<=x15)-x16));

	if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x17 = 6U;
	uint64_t x18 = 14603141LLU;
	volatile int32_t x20 = INT32_MAX;
	volatile uint32_t t4 = 7U;

	t4 = (x17&((x18<=x19)-x20));

	if (t4 != 2U) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x22 = 11334U;
	int8_t x23 = 12;
	uint8_t x24 = 53U;
	volatile uint64_t t5 = 569LLU;

	t5 = (x21&((x22<=x23)-x24));

	if (t5 != 4193073512761794LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x26 = INT8_MAX;
	uint64_t x28 = UINT64_MAX;
	volatile uint64_t t6 = 113653715720LLU;

	t6 = (x25&((x26<=x27)-x28));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = -1;
	uint32_t x34 = 1004U;
	uint32_t x36 = 22112209U;
	static volatile uint32_t t7 = 526215349U;

	t7 = (x33&((x34<=x35)-x36));

	if (t7 != 4272855087U) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint8_t x37 = 12U;
	int32_t x38 = 1;
	int8_t x39 = INT8_MAX;
	uint64_t x40 = 0LLU;
	uint64_t t8 = 25634851844932LLU;

	t8 = (x37&((x38<=x39)-x40));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = INT8_MAX;

	t9 = (x41&((x42<=x43)-x44));

	if (t9 != 59) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = -1LL;
	static uint64_t x46 = 5696131644734LLU;
	int8_t x48 = INT8_MIN;
	int64_t t10 = 0LL;

	t10 = (x45&((x46<=x47)-x48));

	if (t10 != 128LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x50 = 507506331LL;
	int64_t t11 = INT64_MIN;

	t11 = (x49&((x50<=x51)-x52));

	if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = INT16_MAX;
	uint32_t x54 = UINT32_MAX;
	static uint64_t x55 = 906983445LLU;
	int32_t x56 = -30183;
	volatile int32_t t12 = 2814508;

	t12 = (x53&((x54<=x55)-x56));

	if (t12 != 30183) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x58 = 16;
	static uint32_t x59 = UINT32_MAX;
	int8_t x60 = -1;
	static volatile uint32_t t13 = 1449U;

	t13 = (x57&((x58<=x59)-x60));

	if (t13 != 2U) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x65 = -90926041;
	static int8_t x66 = INT8_MIN;
	int8_t x67 = INT8_MAX;
	int32_t x68 = -1;
	int32_t t14 = 4;

	t14 = (x65&((x66<=x67)-x68));

	if (t14 != 2) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x69 = INT64_MIN;
	int32_t x70 = INT32_MAX;
	uint8_t x72 = 13U;
	int64_t t15 = INT64_MIN;

	t15 = (x69&((x70<=x71)-x72));

	if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x77 = INT64_MIN;
	int8_t x78 = -46;
	static volatile int64_t t16 = INT64_MIN;

	t16 = (x77&((x78<=x79)-x80));

	if (t16 != INT64_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x81 = INT32_MIN;
	static volatile uint16_t x82 = UINT16_MAX;
	uint64_t x84 = 14698627LLU;

	t17 = (x81&((x82<=x83)-x84));

	if (t17 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x85 = -1;
	volatile int8_t x86 = 15;
	uint16_t x87 = 7U;
	static uint32_t x88 = 3U;
	volatile uint32_t t18 = 13559U;

	t18 = (x85&((x86<=x87)-x88));

	if (t18 != 4294967293U) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x93 = 27U;
	int8_t x96 = 3;
	volatile uint32_t t19 = 1023U;

	t19 = (x93&((x94<=x95)-x96));

	if (t19 != 26U) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x97 = 110U;
	static volatile int32_t x99 = INT32_MIN;
	static int32_t x100 = -1;
	int32_t t20 = -501424343;

	t20 = (x97&((x98<=x99)-x100));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x102 = 18;
	static int16_t x103 = INT16_MIN;
	int32_t x104 = INT32_MAX;
	volatile int32_t t21 = -6;

	t21 = (x101&((x102<=x103)-x104));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x105 = INT64_MIN;
	volatile int64_t x106 = -1LL;
	uint32_t x107 = UINT32_MAX;
	uint16_t x108 = 41U;
	int64_t t22 = INT64_MIN;

	t22 = (x105&((x106<=x107)-x108));

	if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x109 = -1LL;
	int64_t x111 = INT64_MIN;
	volatile uint16_t x112 = UINT16_MAX;

	t23 = (x109&((x110<=x111)-x112));

	if (t23 != -65535LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x113 = INT32_MAX;
	uint32_t x114 = 90168U;
	volatile int16_t x116 = 4058;
	int32_t t24 = 398898596;

	t24 = (x113&((x114<=x115)-x116));

	if (t24 != 2147479591) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x117 = INT8_MIN;
	volatile int16_t x118 = INT16_MIN;
	static int16_t x119 = 15;
	uint64_t t25 = 21832LLU;

	t25 = (x117&((x118<=x119)-x120));

	if (t25 != 18446744073709547776LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x121 = INT32_MAX;
	volatile int32_t t26 = -466;

	t26 = (x121&((x122<=x123)-x124));

	if (t26 != 2147450882) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x125 = UINT16_MAX;
	static int64_t x126 = INT64_MIN;
	volatile int64_t x127 = INT64_MIN;
	static int16_t x128 = INT16_MAX;
	static volatile int32_t t27 = 28800605;

	t27 = (x125&((x126<=x127)-x128));

	if (t27 != 32770) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x129 = INT8_MIN;
	int64_t x131 = INT64_MIN;
	int8_t x132 = 63;
	volatile int32_t t28 = -502;

	t28 = (x129&((x130<=x131)-x132));

	if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x133 = -386;
	static int16_t x134 = -777;
	int32_t x135 = -1;
	int16_t x136 = -1;
	static volatile int32_t t29 = 2724959;

	t29 = (x133&((x134<=x135)-x136));

	if (t29 != 2) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x137 = -1;
	volatile int64_t x138 = -1LL;
	volatile uint64_t x140 = UINT64_MAX;
	static uint64_t t30 = 364664708309LLU;

	t30 = (x137&((x138<=x139)-x140));

	if (t30 != 2LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x142 = 33U;
	int16_t x143 = INT16_MIN;
	int32_t x144 = INT32_MAX;
	volatile int32_t t31 = INT32_MIN;

	t31 = (x141&((x142<=x143)-x144));

	if (t31 != INT32_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x146 = -1LL;
	uint8_t x147 = UINT8_MAX;
	volatile int8_t x148 = -2;

	t32 = (x145&((x146<=x147)-x148));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x149 = 16748236U;
	int8_t x150 = 10;
	static int64_t x151 = -392456519LL;
	uint32_t t33 = 842873U;

	t33 = (x149&((x150<=x151)-x152));

	if (t33 != 128U) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint8_t x154 = 2U;
	int64_t x155 = 336676436106346LL;
	uint8_t x156 = UINT8_MAX;
	volatile int32_t t34 = 451026;

	t34 = (x153&((x154<=x155)-x156));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x158 = -1;
	volatile int8_t x159 = -1;
	uint16_t x160 = 275U;

	t35 = (x157&((x158<=x159)-x160));

	if (t35 != 3682LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x161 = INT16_MIN;
	static volatile uint32_t x162 = 212184U;
	int32_t x163 = -8833;
	uint64_t x164 = 260788996867562LLU;
	uint64_t t36 = 265194851900208LLU;

	t36 = (x161&((x162<=x163)-x164));

	if (t36 != 18446483284712652800LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x165 = 163U;
	int64_t x166 = -1LL;
	int64_t x167 = INT64_MIN;
	static int64_t x168 = INT64_MAX;
	int64_t t37 = 0LL;

	t37 = (x165&((x166<=x167)-x168));

	if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x169 = 118718740U;
	int8_t x171 = -6;
	static volatile int16_t x172 = -1;
	volatile uint32_t t38 = 1U;

	t38 = (x169&((x170<=x171)-x172));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x174 = INT32_MIN;
	int32_t x175 = -93696;
	uint16_t x176 = UINT16_MAX;

	t39 = (x173&((x174<=x175)-x176));

	if (t39 != -65536) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x177 = -1;
	static int8_t x178 = -1;
	uint16_t x179 = 122U;
	volatile uint16_t x180 = 1U;
	static int32_t t40 = 118;

	t40 = (x177&((x178<=x179)-x180));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x181 = INT32_MAX;
	uint32_t x182 = UINT32_MAX;
	uint16_t x183 = 28888U;
	int32_t x184 = 66111937;
	static volatile int32_t t41 = -124552;

	t41 = (x181&((x182<=x183)-x184));

	if (t41 != 2081371711) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x185 = 1U;
	uint8_t x186 = 0U;
	static uint32_t x187 = 11787U;
	uint64_t x188 = 62458035044803LLU;
	volatile uint64_t t42 = 1LLU;

	t42 = (x185&((x186<=x187)-x188));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x193 = 41U;
	static int64_t x194 = -1798927LL;
	uint32_t x195 = 4U;
	int32_t t43 = 44881;

	t43 = (x193&((x194<=x195)-x196));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x197 = INT16_MIN;
	uint8_t x198 = 0U;
	static int8_t x199 = INT8_MIN;
	volatile int32_t t44 = 668607969;

	t44 = (x197&((x198<=x199)-x200));

	if (t44 != -32768) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x202 = 99328719638LL;
	int16_t x203 = INT16_MIN;
	volatile int64_t x204 = 8189782125LL;
	uint64_t t45 = 159847169LLU;

	t45 = (x201&((x202<=x203)-x204));

	if (t45 != 1LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x205 = INT32_MAX;
	volatile int64_t x206 = INT64_MAX;
	int8_t x207 = INT8_MIN;
	static volatile int64_t x208 = INT64_MAX;

	t46 = (x205&((x206<=x207)-x208));

	if (t46 != 1LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x209 = -1;
	static uint16_t x210 = 2944U;
	int64_t x211 = INT64_MAX;
	volatile int16_t x212 = 10211;
	int32_t t47 = 839825901;

	t47 = (x209&((x210<=x211)-x212));

	if (t47 != -10210) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x217 = INT16_MIN;
	uint64_t x218 = 8726321592223LLU;
	int8_t x219 = INT8_MIN;
	uint8_t x220 = 3U;
	int32_t t48 = 49983866;

	t48 = (x217&((x218<=x219)-x220));

	if (t48 != -32768) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x221 = -1;
	int8_t x223 = INT8_MAX;
	volatile int32_t x224 = -1;
	volatile int32_t t49 = -2677;

	t49 = (x221&((x222<=x223)-x224));

	if (t49 != 2) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x225 = INT16_MAX;
	int32_t x228 = 174314604;

	t50 = (x225&((x226<=x227)-x228));

	if (t50 != 11156) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x229 = -1;
	static uint16_t x230 = 46U;
	volatile int8_t x231 = 3;
	volatile uint64_t t51 = 26364497224LLU;

	t51 = (x229&((x230<=x231)-x232));

	if (t51 != 1LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x233 = -1;
	volatile uint32_t x234 = UINT32_MAX;
	static int64_t x235 = INT64_MIN;
	volatile int32_t t52 = 367127;

	t52 = (x233&((x234<=x235)-x236));

	if (t52 != -2147483647) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x237 = 5U;
	uint16_t x238 = 4U;
	uint16_t x239 = 688U;
	static uint32_t x240 = 73U;
	uint32_t t53 = 242U;

	t53 = (x237&((x238<=x239)-x240));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x241 = UINT8_MAX;
	int16_t x243 = -461;
	static volatile int32_t t54 = -313327;

	t54 = (x241&((x242<=x243)-x244));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x245 = INT16_MIN;
	volatile int8_t x246 = 9;
	static uint64_t x247 = UINT64_MAX;
	static int32_t t55 = 187796699;

	t55 = (x245&((x246<=x247)-x248));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x250 = -1;
	volatile int16_t x251 = INT16_MAX;
	int32_t x252 = 15;

	t56 = (x249&((x250<=x251)-x252));

	if (t56 != 242898768U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x253 = 83U;
	uint32_t t57 = 5U;

	t57 = (x253&((x254<=x255)-x256));

	if (t57 != 1U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x257 = INT16_MAX;
	volatile int64_t x259 = INT64_MAX;
	static volatile int32_t t58 = -11298;

	t58 = (x257&((x258<=x259)-x260));

	if (t58 != 30571) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x261 = -6;
	static uint64_t x262 = UINT64_MAX;
	volatile int64_t x263 = -1525LL;
	static int64_t x264 = INT64_MAX;

	t59 = (x261&((x262<=x263)-x264));

	if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x266 = 79521;
	uint32_t x267 = UINT32_MAX;
	int32_t x268 = 616983;

	t60 = (x265&((x266<=x267)-x268));

	if (t60 != -617088) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x273 = UINT32_MAX;
	volatile uint64_t x274 = UINT64_MAX;
	uint32_t x275 = 156U;
	int16_t x276 = -371;
	uint32_t t61 = 213U;

	t61 = (x273&((x274<=x275)-x276));

	if (t61 != 371U) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x277 = INT32_MAX;
	volatile int8_t x278 = INT8_MIN;
	uint8_t x279 = 44U;
	uint32_t x280 = 16908339U;
	volatile uint32_t t62 = 950U;

	t62 = (x277&((x278<=x279)-x280));

	if (t62 != 2130575310U) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x282 = 11U;
	uint8_t x283 = 23U;
	static int16_t x284 = -29;

	t63 = (x281&((x282<=x283)-x284));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x289 = UINT32_MAX;
	static int16_t x290 = 9;
	volatile int64_t x291 = -1742793LL;
	static volatile uint32_t t64 = 12956429U;

	t64 = (x289&((x290<=x291)-x292));

	if (t64 != 4294967279U) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x293 = INT8_MAX;
	int16_t x296 = INT16_MAX;
	int32_t t65 = 108;

	t65 = (x293&((x294<=x295)-x296));

	if (t65 != 2) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x297 = 36;
	uint8_t x298 = UINT8_MAX;
	uint16_t x299 = 4922U;

	t66 = (x297&((x298<=x299)-x300));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x301 = -1;
	int64_t x302 = INT64_MIN;
	int32_t x303 = INT32_MAX;
	int16_t x304 = -1;
	volatile int32_t t67 = -762308;

	t67 = (x301&((x302<=x303)-x304));

	if (t67 != 2) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint64_t x305 = 8316385761LLU;
	int32_t x306 = INT32_MIN;
	int16_t x307 = INT16_MAX;
	uint16_t x308 = UINT16_MAX;
	uint64_t t68 = 3853771485295145LLU;

	t68 = (x305&((x306<=x307)-x308));

	if (t68 != 8316321792LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x313 = INT16_MIN;
	uint64_t x314 = 364LLU;
	uint64_t x315 = 1369563046269099898LLU;
	volatile int16_t x316 = 1355;
	int32_t t69 = -126078933;

	t69 = (x313&((x314<=x315)-x316));

	if (t69 != -32768) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x319 = INT64_MIN;

	t70 = (x317&((x318<=x319)-x320));

	if (t70 != 1LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x322 = INT8_MIN;
	int64_t x323 = INT64_MIN;
	volatile uint16_t x324 = 7352U;
	int32_t t71 = 6;

	t71 = (x321&((x322<=x323)-x324));

	if (t71 != 25416) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int8_t x325 = INT8_MIN;
	volatile uint32_t x326 = 6U;
	uint64_t x327 = UINT64_MAX;
	static int8_t x328 = -52;
	static volatile int32_t t72 = -279;

	t72 = (x325&((x326<=x327)-x328));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x329 = INT64_MIN;
	int64_t x330 = -1LL;
	int16_t x331 = -1;
	int32_t x332 = -82;
	volatile int64_t t73 = 25835573LL;

	t73 = (x329&((x330<=x331)-x332));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x333 = INT32_MIN;
	int64_t x334 = INT64_MIN;
	int8_t x335 = INT8_MAX;
	static uint32_t x336 = 77U;
	static volatile uint32_t t74 = 11U;

	t74 = (x333&((x334<=x335)-x336));

	if (t74 != 2147483648U) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x337 = 63606643356460LLU;
	int32_t x340 = INT32_MAX;

	t75 = (x337&((x338<=x339)-x340));

	if (t75 != 63606318170112LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x345 = -3;
	volatile uint8_t x346 = 73U;
	int32_t x347 = -327472832;

	t76 = (x345&((x346<=x347)-x348));

	if (t76 != 45727786175936564LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x349 = -354698LL;
	int32_t x350 = INT32_MIN;
	volatile int16_t x352 = INT16_MAX;
	int64_t t77 = 13477223828532LL;

	t77 = (x349&((x350<=x351)-x352));

	if (t77 != -360446LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x353 = INT64_MIN;
	int64_t x356 = 3404LL;
	static volatile int64_t t78 = INT64_MIN;

	t78 = (x353&((x354<=x355)-x356));

	if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x358 = INT8_MIN;
	int64_t x359 = -1LL;
	uint8_t x360 = 1U;
	int32_t t79 = 3;

	t79 = (x357&((x358<=x359)-x360));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x361 = -1;
	int64_t x362 = 4222305972837871344LL;
	static int32_t x363 = INT32_MIN;
	int64_t x364 = -1LL;

	t80 = (x361&((x362<=x363)-x364));

	if (t80 != 1LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x365 = -481;
	uint16_t x366 = 27U;
	int16_t x367 = -854;
	int32_t x368 = -1;
	volatile int32_t t81 = -192;

	t81 = (x365&((x366<=x367)-x368));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x373 = INT8_MAX;
	int8_t x374 = -1;
	int64_t x375 = -1LL;
	static int8_t x376 = -1;
	int32_t t82 = -20829990;

	t82 = (x373&((x374<=x375)-x376));

	if (t82 != 2) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x378 = 132448268389LLU;
	static uint32_t x379 = UINT32_MAX;
	int16_t x380 = INT16_MIN;

	t83 = (x377&((x378<=x379)-x380));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x381 = INT8_MIN;
	static int32_t x382 = INT32_MAX;
	int8_t x383 = INT8_MAX;
	static uint8_t x384 = UINT8_MAX;
	volatile int32_t t84 = -149;

	t84 = (x381&((x382<=x383)-x384));

	if (t84 != -256) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x387 = INT64_MIN;
	volatile int8_t x388 = INT8_MIN;
	volatile int64_t t85 = -2242840258LL;

	t85 = (x385&((x386<=x387)-x388));

	if (t85 != 128LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x389 = INT8_MAX;
	int32_t x390 = -1;
	int16_t x392 = INT16_MAX;
	int32_t t86 = -3562702;

	t86 = (x389&((x390<=x391)-x392));

	if (t86 != 2) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x393 = UINT32_MAX;
	static uint16_t x395 = 1733U;
	int8_t x396 = 57;

	t87 = (x393&((x394<=x395)-x396));

	if (t87 != 4294967240U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x397 = INT16_MIN;
	int64_t x398 = -1LL;
	volatile int32_t t88 = -17768;

	t88 = (x397&((x398<=x399)-x400));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x402 = 2196U;
	int64_t x403 = 762419744111675LL;
	uint16_t x404 = 591U;
	volatile int32_t t89 = 158;

	t89 = (x401&((x402<=x403)-x404));

	if (t89 != 2147483058) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x406 = INT8_MIN;
	int8_t x407 = 1;
	int64_t x408 = -1LL;

	t90 = (x405&((x406<=x407)-x408));

	if (t90 != 2LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x409 = -1LL;
	uint16_t x410 = UINT16_MAX;
	int32_t x411 = -1;
	int8_t x412 = INT8_MAX;
	int64_t t91 = 1338091595295496978LL;

	t91 = (x409&((x410<=x411)-x412));

	if (t91 != -127LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x413 = UINT16_MAX;
	static int8_t x414 = INT8_MIN;
	volatile int64_t x416 = INT64_MAX;
	int64_t t92 = -542LL;

	t92 = (x413&((x414<=x415)-x416));

	if (t92 != 1LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x417 = INT16_MAX;
	uint8_t x418 = 32U;
	static uint32_t x419 = UINT32_MAX;
	static int32_t x420 = -1;

	t93 = (x417&((x418<=x419)-x420));

	if (t93 != 2) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x425 = 67118089U;
	int16_t x426 = INT16_MIN;
	static volatile int64_t x427 = -1LL;
	int64_t x428 = -142660357029LL;
	int64_t t94 = -4037368780052LL;

	t94 = (x425&((x426<=x427)-x428));

	if (t94 != 67108864LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x433 = -1;
	int8_t x435 = 1;
	uint64_t x436 = 8507035LLU;

	t95 = (x433&((x434<=x435)-x436));

	if (t95 != 18446744073701044581LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x437 = -1;
	int64_t x438 = INT64_MIN;
	int32_t t96 = -1613;

	t96 = (x437&((x438<=x439)-x440));

	if (t96 != 6) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x441 = INT64_MAX;
	uint16_t x442 = UINT16_MAX;
	int8_t x443 = INT8_MIN;
	int16_t x444 = 381;
	static volatile int64_t t97 = 568880LL;

	t97 = (x441&((x442<=x443)-x444));

	if (t97 != 9223372036854775427LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x445 = 497541LLU;
	int8_t x446 = INT8_MIN;
	volatile uint16_t x447 = 11318U;
	volatile uint64_t t98 = 1997654LLU;

	t98 = (x445&((x446<=x447)-x448));

	if (t98 != 129LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x449 = INT32_MAX;
	uint8_t x450 = 0U;
	uint32_t x451 = UINT32_MAX;
	int8_t x452 = INT8_MAX;
	int32_t t99 = -1;

	t99 = (x449&((x450<=x451)-x452));

	if (t99 != 2147483522) { NG(); } else { ; }
	
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

