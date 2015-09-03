#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t x2 = INT32_MIN;
static int64_t t1 = -178134004828113649LL;
int16_t x11 = 32;
volatile int32_t t6 = -8095;
volatile int16_t x30 = INT16_MIN;
int32_t x31 = 1874;
int8_t x34 = -2;
int8_t x35 = INT8_MIN;
int32_t x46 = INT32_MIN;
static volatile int8_t x49 = INT8_MIN;
static uint64_t x50 = 0LLU;
int32_t x51 = 227349;
volatile int64_t x55 = 6282986142LL;
uint8_t x57 = 5U;
static uint32_t x58 = 32U;
int32_t t14 = 3344;
int32_t t15 = 213582;
int32_t x65 = INT32_MIN;
volatile int8_t x66 = INT8_MIN;
static int64_t x77 = INT64_MIN;
int8_t x78 = -1;
volatile int64_t x81 = INT64_MIN;
uint64_t x82 = 4LLU;
static volatile int32_t t20 = 0;
int8_t x90 = 3;
uint16_t x91 = UINT16_MAX;
int8_t x93 = -1;
static int64_t x98 = INT64_MAX;
volatile int32_t t24 = INT32_MAX;
int16_t x112 = 29;
uint64_t x114 = UINT64_MAX;
int8_t x117 = -11;
volatile int32_t t28 = 1208;
static volatile uint16_t x122 = 38U;
static uint16_t x126 = 983U;
int16_t x127 = 4;
volatile int64_t x128 = INT64_MAX;
int32_t t30 = -25;
uint64_t x131 = UINT64_MAX;
int64_t x138 = -1LL;
int32_t t34 = INT32_MIN;
uint16_t x147 = 100U;
static int8_t x150 = 1;
int8_t x152 = -1;
static uint8_t x153 = 122U;
int16_t x156 = INT16_MIN;
static int64_t x160 = -29542LL;
int8_t x165 = -18;
int64_t x170 = INT64_MIN;
static int32_t x181 = INT32_MIN;
uint64_t x182 = 424LLU;
int16_t x193 = INT16_MIN;
int8_t x195 = -5;
uint16_t x197 = 444U;
int64_t x200 = 851181542111326223LL;
volatile int64_t x202 = INT64_MAX;
uint64_t x204 = UINT64_MAX;
int8_t x205 = INT8_MIN;
uint16_t x208 = 1218U;
int64_t x214 = -1LL;
static uint8_t x218 = 5U;
volatile uint64_t t51 = 37845001561577602LLU;
volatile int64_t t52 = 1268LL;
int16_t x239 = 4;
volatile int32_t t55 = -20304;
static int8_t x246 = INT8_MAX;
static int16_t x247 = INT16_MIN;
volatile uint32_t t57 = 5330470U;
int16_t x253 = 711;
volatile int32_t x255 = -33;
static int32_t t60 = 97806;
int32_t x262 = INT32_MIN;
int32_t t62 = 5381939;
int16_t x271 = 3;
uint64_t x272 = 6233017552627712171LLU;
uint16_t x279 = UINT16_MAX;
int32_t t66 = 12;
static int64_t x288 = INT64_MIN;
volatile int32_t x289 = -1;
uint16_t x296 = UINT16_MAX;
volatile int32_t t69 = -5903;
uint8_t x299 = 6U;
volatile uint32_t t70 = UINT32_MAX;
int32_t x309 = -92210;
int8_t x310 = 6;
static int32_t t72 = 60;
volatile int8_t x315 = INT8_MAX;
int16_t x317 = 55;
int8_t x320 = INT8_MAX;
uint8_t x322 = 102U;
int64_t x323 = INT64_MAX;
static int8_t x345 = INT8_MIN;
static int32_t t80 = -332582797;
volatile uint32_t t81 = 10U;
uint8_t x356 = 6U;
volatile int8_t x358 = INT8_MAX;
volatile int8_t x364 = INT8_MAX;
uint64_t x365 = 60993286908880LLU;
int8_t x368 = INT8_MIN;
uint64_t t85 = 1827LLU;
static int8_t x369 = INT8_MAX;
volatile int32_t t86 = -20209576;
uint32_t x374 = 74410U;
volatile int32_t x381 = INT32_MIN;
uint64_t x390 = UINT64_MAX;
static int8_t x392 = INT8_MIN;
volatile int64_t t91 = -5755200951LL;
uint64_t x396 = UINT64_MAX;
static int32_t t94 = 2981006;
int8_t x405 = -1;
uint16_t x407 = UINT16_MAX;
static volatile int32_t x415 = -323521;
int16_t x416 = -1063;
volatile int64_t t97 = INT64_MAX;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	static uint32_t x3 = 453264U;
	int64_t x4 = -1LL;
	int32_t t0 = 729278;

	t0 = (x1+((x2/x3)<x4));

	if (t0 != 255) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int64_t x5 = 14794083496LL;
	int64_t x6 = INT64_MIN;
	uint32_t x7 = 88751U;
	int8_t x8 = INT8_MIN;

	t1 = (x5+((x6/x7)<x8));

	if (t1 != 14794083497LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = -1;
	volatile int64_t x10 = -1701802122592508LL;
	int16_t x12 = INT16_MAX;
	volatile int32_t t2 = -13103145;

	t2 = (x9+((x10/x11)<x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = UINT64_MAX;
	int16_t x14 = -1;
	int8_t x15 = 1;
	volatile int8_t x16 = INT8_MIN;
	volatile uint64_t t3 = UINT64_MAX;

	t3 = (x13+((x14/x15)<x16));

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = 1;
	int32_t x18 = -1;
	uint8_t x19 = 25U;
	volatile int8_t x20 = INT8_MAX;
	volatile int32_t t4 = 3237;

	t4 = (x17+((x18/x19)<x20));

	if (t4 != 2) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MAX;
	int16_t x22 = INT16_MIN;
	uint64_t x23 = 84284364212102LLU;
	int16_t x24 = INT16_MIN;
	volatile int32_t t5 = 7062619;

	t5 = (x21+((x22/x23)<x24));

	if (t5 != 32768) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -1;
	int8_t x26 = INT8_MIN;
	int64_t x27 = INT64_MIN;
	volatile uint32_t x28 = 3192U;

	t6 = (x25+((x26/x27)<x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 861U;
	int16_t x32 = INT16_MIN;
	volatile uint32_t t7 = 676663U;

	t7 = (x29+((x30/x31)<x32));

	if (t7 != 861U) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = 46;
	static int16_t x36 = -1;
	int32_t t8 = 1;

	t8 = (x33+((x34/x35)<x36));

	if (t8 != 46) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = 356;
	uint64_t x38 = 28LLU;
	uint16_t x39 = 12U;
	int64_t x40 = -11551LL;
	static volatile int32_t t9 = -505599;

	t9 = (x37+((x38/x39)<x40));

	if (t9 != 357) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x41 = -1LL;
	int16_t x42 = INT16_MIN;
	int16_t x43 = INT16_MIN;
	int16_t x44 = INT16_MAX;
	static int64_t t10 = 14965LL;

	t10 = (x41+((x42/x43)<x44));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = 619270243077LLU;
	int16_t x47 = INT16_MIN;
	volatile int16_t x48 = -812;
	volatile uint64_t t11 = 14620661015LLU;

	t11 = (x45+((x46/x47)<x48));

	if (t11 != 619270243077LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x52 = -1440;
	static int32_t t12 = 46112;

	t12 = (x49+((x50/x51)<x52));

	if (t12 != -127) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = INT8_MIN;
	uint64_t x54 = UINT64_MAX;
	static int32_t x56 = INT32_MIN;
	int32_t t13 = -4013;

	t13 = (x53+((x54/x55)<x56));

	if (t13 != -127) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x59 = -7218;
	int64_t x60 = INT64_MIN;

	t14 = (x57+((x58/x59)<x60));

	if (t14 != 5) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	uint64_t x62 = 29LLU;
	int32_t x63 = -7402662;
	static volatile int32_t x64 = INT32_MIN;

	t15 = (x61+((x62/x63)<x64));

	if (t15 != -2147483647) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x67 = UINT16_MAX;
	static uint64_t x68 = 2LLU;
	int32_t t16 = -63239415;

	t16 = (x65+((x66/x67)<x68));

	if (t16 != -2147483647) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = UINT16_MAX;
	uint8_t x70 = 10U;
	uint32_t x71 = 57U;
	int64_t x72 = -3LL;
	volatile int32_t t17 = -5245;

	t17 = (x69+((x70/x71)<x72));

	if (t17 != 65535) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x79 = INT32_MIN;
	static volatile uint8_t x80 = UINT8_MAX;
	static volatile int64_t t18 = -300535LL;

	t18 = (x77+((x78/x79)<x80));

	if (t18 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x83 = 31U;
	uint8_t x84 = 46U;
	static int64_t t19 = 42717634405LL;

	t19 = (x81+((x82/x83)<x84));

	if (t19 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x85 = -85;
	uint16_t x86 = 1538U;
	volatile int16_t x87 = INT16_MIN;
	uint8_t x88 = UINT8_MAX;

	t20 = (x85+((x86/x87)<x88));

	if (t20 != -84) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x89 = UINT16_MAX;
	volatile int8_t x92 = -1;
	volatile int32_t t21 = -1;

	t21 = (x89+((x90/x91)<x92));

	if (t21 != 65535) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x94 = -1;
	int64_t x95 = -1LL;
	static int32_t x96 = 626;
	static int32_t t22 = 30051;

	t22 = (x93+((x94/x95)<x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x97 = 346LLU;
	volatile int64_t x99 = -41256LL;
	int8_t x100 = INT8_MIN;
	volatile uint64_t t23 = 416240423074554LLU;

	t23 = (x97+((x98/x99)<x100));

	if (t23 != 347LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x101 = INT32_MAX;
	static volatile int64_t x102 = 8287752717506019LL;
	volatile uint32_t x103 = 44533808U;
	static volatile int64_t x104 = 0LL;

	t24 = (x101+((x102/x103)<x104));

	if (t24 != INT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x105 = -1;
	int64_t x106 = 24LL;
	int16_t x107 = INT16_MIN;
	static int16_t x108 = 41;
	volatile int32_t t25 = -7;

	t25 = (x105+((x106/x107)<x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x109 = UINT32_MAX;
	int32_t x110 = INT32_MIN;
	volatile int64_t x111 = INT64_MAX;
	uint32_t t26 = 71879U;

	t26 = (x109+((x110/x111)<x112));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = 2989675835728LL;
	int8_t x115 = -36;
	int64_t x116 = -129268090005993LL;
	int64_t t27 = 16607315178148LL;

	t27 = (x113+((x114/x115)<x116));

	if (t27 != 2989675835729LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x118 = -1LL;
	static int16_t x119 = 1982;
	uint8_t x120 = UINT8_MAX;

	t28 = (x117+((x118/x119)<x120));

	if (t28 != -10) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x121 = -104;
	int8_t x123 = -14;
	int64_t x124 = INT64_MAX;
	volatile int32_t t29 = -11539;

	t29 = (x121+((x122/x123)<x124));

	if (t29 != -103) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x125 = INT8_MAX;

	t30 = (x125+((x126/x127)<x128));

	if (t30 != 128) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x129 = INT32_MIN;
	int8_t x130 = 20;
	static int64_t x132 = -458LL;
	int32_t t31 = 255698;

	t31 = (x129+((x130/x131)<x132));

	if (t31 != -2147483647) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x133 = INT16_MIN;
	uint32_t x134 = UINT32_MAX;
	volatile uint8_t x135 = UINT8_MAX;
	uint16_t x136 = UINT16_MAX;
	int32_t t32 = 46335;

	t32 = (x133+((x134/x135)<x136));

	if (t32 != -32768) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x137 = -2062225106137653LL;
	int64_t x139 = INT64_MIN;
	int16_t x140 = -14503;
	int64_t t33 = 0LL;

	t33 = (x137+((x138/x139)<x140));

	if (t33 != -2062225106137653LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = INT32_MIN;
	int16_t x142 = 675;
	int16_t x143 = 261;
	uint8_t x144 = 2U;

	t34 = (x141+((x142/x143)<x144));

	if (t34 != INT32_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x145 = 7406;
	volatile int64_t x146 = INT64_MIN;
	uint16_t x148 = 19172U;
	int32_t t35 = -12;

	t35 = (x145+((x146/x147)<x148));

	if (t35 != 7407) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x149 = -7932086149LL;
	uint64_t x151 = 7994762LLU;
	int64_t t36 = 254856LL;

	t36 = (x149+((x150/x151)<x152));

	if (t36 != -7932086148LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x154 = INT64_MIN;
	int32_t x155 = INT32_MIN;
	int32_t t37 = -786;

	t37 = (x153+((x154/x155)<x156));

	if (t37 != 122) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x157 = INT32_MIN;
	volatile uint8_t x158 = 9U;
	uint32_t x159 = 216286U;
	int32_t t38 = INT32_MIN;

	t38 = (x157+((x158/x159)<x160));

	if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x166 = INT16_MIN;
	static int16_t x167 = INT16_MAX;
	uint32_t x168 = 2966U;
	static volatile int32_t t39 = 154;

	t39 = (x165+((x166/x167)<x168));

	if (t39 != -18) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x169 = INT64_MIN;
	int32_t x171 = INT32_MIN;
	static int64_t x172 = -1LL;
	int64_t t40 = INT64_MIN;

	t40 = (x169+((x170/x171)<x172));

	if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x173 = 75U;
	volatile uint64_t x174 = 743142987430598038LLU;
	static uint16_t x175 = 2241U;
	int32_t x176 = INT32_MIN;
	int32_t t41 = 28878;

	t41 = (x173+((x174/x175)<x176));

	if (t41 != 76) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x183 = 21U;
	int8_t x184 = INT8_MIN;
	static int32_t t42 = -8171291;

	t42 = (x181+((x182/x183)<x184));

	if (t42 != -2147483647) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x185 = 2U;
	uint64_t x186 = 10LLU;
	int64_t x187 = -10595968447637577LL;
	int64_t x188 = -1LL;
	volatile int32_t t43 = 144308792;

	t43 = (x185+((x186/x187)<x188));

	if (t43 != 3) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x194 = 242;
	uint8_t x196 = 107U;
	int32_t t44 = 41362515;

	t44 = (x193+((x194/x195)<x196));

	if (t44 != -32767) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x198 = 1;
	int32_t x199 = -1;
	volatile int32_t t45 = 243177359;

	t45 = (x197+((x198/x199)<x200));

	if (t45 != 445) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int64_t x201 = INT64_MIN;
	int16_t x203 = -21;
	volatile int64_t t46 = -1736169504249LL;

	t46 = (x201+((x202/x203)<x204));

	if (t46 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x206 = -1;
	static uint64_t x207 = 12LLU;
	volatile int32_t t47 = -1674797;

	t47 = (x205+((x206/x207)<x208));

	if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x209 = -1;
	uint32_t x210 = 5606064U;
	int16_t x211 = INT16_MAX;
	int64_t x212 = -185218069553019LL;
	volatile int32_t t48 = -970550010;

	t48 = (x209+((x210/x211)<x212));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int32_t x213 = INT32_MAX;
	volatile uint64_t x215 = 266250419937993LLU;
	int32_t x216 = 30064;
	int32_t t49 = INT32_MAX;

	t49 = (x213+((x214/x215)<x216));

	if (t49 != INT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x217 = INT64_MIN;
	static uint16_t x219 = 942U;
	int64_t x220 = INT64_MIN;
	static volatile int64_t t50 = INT64_MIN;

	t50 = (x217+((x218/x219)<x220));

	if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x221 = 891578609LLU;
	int16_t x222 = INT16_MIN;
	uint16_t x223 = UINT16_MAX;
	static volatile int64_t x224 = -1LL;

	t51 = (x221+((x222/x223)<x224));

	if (t51 != 891578609LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x225 = 11LL;
	int8_t x226 = -1;
	static volatile uint16_t x227 = 8087U;
	volatile uint16_t x228 = UINT16_MAX;

	t52 = (x225+((x226/x227)<x228));

	if (t52 != 12LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x229 = 16;
	static uint32_t x230 = 139505575U;
	int32_t x231 = INT32_MIN;
	uint16_t x232 = 3429U;
	int32_t t53 = -58168;

	t53 = (x229+((x230/x231)<x232));

	if (t53 != 17) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x233 = INT32_MIN;
	volatile int32_t x234 = INT32_MAX;
	static int32_t x235 = INT32_MIN;
	volatile uint8_t x236 = 31U;
	int32_t t54 = 91;

	t54 = (x233+((x234/x235)<x236));

	if (t54 != -2147483647) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x237 = INT8_MIN;
	volatile uint32_t x238 = 1329290964U;
	int64_t x240 = INT64_MIN;

	t55 = (x237+((x238/x239)<x240));

	if (t55 != -128) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x241 = INT8_MIN;
	volatile int16_t x242 = INT16_MAX;
	volatile uint16_t x243 = 37U;
	volatile uint32_t x244 = UINT32_MAX;
	int32_t t56 = 107768165;

	t56 = (x241+((x242/x243)<x244));

	if (t56 != -127) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x245 = 14009U;
	static int16_t x248 = -604;

	t57 = (x245+((x246/x247)<x248));

	if (t57 != 14009U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x249 = 1U;
	uint16_t x250 = 3101U;
	static uint64_t x251 = UINT64_MAX;
	volatile int32_t x252 = -1;
	int32_t t58 = 7653954;

	t58 = (x249+((x250/x251)<x252));

	if (t58 != 2) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x254 = -1;
	uint32_t x256 = UINT32_MAX;
	volatile int32_t t59 = 27320;

	t59 = (x253+((x254/x255)<x256));

	if (t59 != 712) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x257 = INT8_MIN;
	int32_t x258 = -76128404;
	volatile uint32_t x259 = 6276U;
	static int32_t x260 = INT32_MAX;

	t60 = (x257+((x258/x259)<x260));

	if (t60 != -127) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x261 = 3U;
	int8_t x263 = INT8_MIN;
	static volatile int8_t x264 = -1;
	volatile int32_t t61 = 228;

	t61 = (x261+((x262/x263)<x264));

	if (t61 != 3) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x265 = UINT16_MAX;
	int32_t x266 = -12420041;
	static int32_t x267 = -2468;
	volatile int8_t x268 = INT8_MAX;

	t62 = (x265+((x266/x267)<x268));

	if (t62 != 65535) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x269 = 5597U;
	volatile int64_t x270 = INT64_MIN;
	int32_t t63 = 1146;

	t63 = (x269+((x270/x271)<x272));

	if (t63 != 5597) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x273 = 24;
	uint64_t x274 = 850019077LLU;
	uint32_t x275 = 57812211U;
	int64_t x276 = INT64_MIN;
	int32_t t64 = -3;

	t64 = (x273+((x274/x275)<x276));

	if (t64 != 25) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x277 = 112;
	uint8_t x278 = UINT8_MAX;
	uint8_t x280 = 90U;
	int32_t t65 = 213581;

	t65 = (x277+((x278/x279)<x280));

	if (t65 != 113) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x281 = -6317;
	volatile int64_t x282 = -505650852393768LL;
	static volatile int64_t x283 = INT64_MAX;
	uint32_t x284 = 70608099U;

	t66 = (x281+((x282/x283)<x284));

	if (t66 != -6316) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint32_t x285 = UINT32_MAX;
	static uint32_t x286 = UINT32_MAX;
	uint16_t x287 = 28U;
	uint32_t t67 = UINT32_MAX;

	t67 = (x285+((x286/x287)<x288));

	if (t67 != UINT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x290 = INT32_MAX;
	volatile int16_t x291 = 1;
	uint16_t x292 = 88U;
	int32_t t68 = -219637857;

	t68 = (x289+((x290/x291)<x292));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x293 = INT32_MIN;
	uint32_t x294 = 3058924U;
	int16_t x295 = -1;

	t69 = (x293+((x294/x295)<x296));

	if (t69 != -2147483647) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x297 = UINT32_MAX;
	uint64_t x298 = 12016LLU;
	volatile uint8_t x300 = 0U;

	t70 = (x297+((x298/x299)<x300));

	if (t70 != UINT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x301 = 28U;
	int64_t x302 = -17292950914537LL;
	static int16_t x303 = -509;
	static int8_t x304 = INT8_MAX;
	static int32_t t71 = -1130;

	t71 = (x301+((x302/x303)<x304));

	if (t71 != 28) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x311 = UINT64_MAX;
	int64_t x312 = -1994435746555934020LL;

	t72 = (x309+((x310/x311)<x312));

	if (t72 != -92209) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int32_t x313 = INT32_MIN;
	static int8_t x314 = -17;
	int8_t x316 = -1;
	static int32_t t73 = INT32_MIN;

	t73 = (x313+((x314/x315)<x316));

	if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x318 = 83U;
	int8_t x319 = 1;
	static volatile int32_t t74 = 240569;

	t74 = (x317+((x318/x319)<x320));

	if (t74 != 56) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x321 = 11U;
	uint32_t x324 = 1379289878U;
	static volatile int32_t t75 = 7436331;

	t75 = (x321+((x322/x323)<x324));

	if (t75 != 12) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x329 = INT8_MIN;
	static int64_t x330 = INT64_MAX;
	volatile uint8_t x331 = 23U;
	int32_t x332 = INT32_MIN;
	int32_t t76 = 12;

	t76 = (x329+((x330/x331)<x332));

	if (t76 != -128) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int64_t x333 = INT64_MIN;
	static volatile uint8_t x334 = 74U;
	int8_t x335 = -1;
	int16_t x336 = -1;
	volatile int64_t t77 = -415809LL;

	t77 = (x333+((x334/x335)<x336));

	if (t77 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x337 = -8630194;
	uint32_t x338 = 1U;
	int64_t x339 = -13LL;
	uint64_t x340 = UINT64_MAX;
	volatile int32_t t78 = -133312674;

	t78 = (x337+((x338/x339)<x340));

	if (t78 != -8630193) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x341 = INT32_MIN;
	int32_t x342 = INT32_MIN;
	int32_t x343 = INT32_MIN;
	int8_t x344 = -3;
	int32_t t79 = INT32_MIN;

	t79 = (x341+((x342/x343)<x344));

	if (t79 != INT32_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x346 = -8LL;
	static uint32_t x347 = 173289159U;
	int8_t x348 = INT8_MIN;

	t80 = (x345+((x346/x347)<x348));

	if (t80 != -128) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x349 = 343U;
	int8_t x350 = 24;
	int16_t x351 = INT16_MIN;
	uint64_t x352 = 4513647716LLU;

	t81 = (x349+((x350/x351)<x352));

	if (t81 != 344U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x353 = 243LL;
	volatile uint32_t x354 = UINT32_MAX;
	uint16_t x355 = UINT16_MAX;
	volatile int64_t t82 = -13958201072129025LL;

	t82 = (x353+((x354/x355)<x356));

	if (t82 != 243LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x357 = 1;
	int16_t x359 = 5;
	int16_t x360 = INT16_MAX;
	int32_t t83 = 294;

	t83 = (x357+((x358/x359)<x360));

	if (t83 != 2) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x361 = INT16_MIN;
	static uint16_t x362 = UINT16_MAX;
	volatile uint64_t x363 = 30LLU;
	int32_t t84 = -198943;

	t84 = (x361+((x362/x363)<x364));

	if (t84 != -32768) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x366 = INT16_MIN;
	int32_t x367 = 9682519;

	t85 = (x365+((x366/x367)<x368));

	if (t85 != 60993286908880LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x370 = -1;
	static int64_t x371 = INT64_MIN;
	static int16_t x372 = -6;

	t86 = (x369+((x370/x371)<x372));

	if (t86 != 127) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x373 = 1459208LL;
	volatile int16_t x375 = INT16_MIN;
	int64_t x376 = -108918434719LL;
	static int64_t t87 = -222293138543562LL;

	t87 = (x373+((x374/x375)<x376));

	if (t87 != 1459208LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x377 = INT16_MAX;
	volatile uint8_t x378 = UINT8_MAX;
	int64_t x379 = INT64_MIN;
	int32_t x380 = INT32_MAX;
	int32_t t88 = -162282704;

	t88 = (x377+((x378/x379)<x380));

	if (t88 != 32768) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x382 = 3;
	static uint64_t x383 = 22239986896688916LLU;
	int32_t x384 = INT32_MIN;
	int32_t t89 = 17740;

	t89 = (x381+((x382/x383)<x384));

	if (t89 != -2147483647) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x385 = INT32_MIN;
	uint64_t x386 = 24784786600LLU;
	volatile int32_t x387 = 946;
	int16_t x388 = 7;
	volatile int32_t t90 = INT32_MIN;

	t90 = (x385+((x386/x387)<x388));

	if (t90 != INT32_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x389 = 141900548209LL;
	static uint8_t x391 = 5U;

	t91 = (x389+((x390/x391)<x392));

	if (t91 != 141900548210LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x393 = -1054063LL;
	int32_t x394 = INT32_MIN;
	int8_t x395 = INT8_MIN;
	int64_t t92 = 500351214146468503LL;

	t92 = (x393+((x394/x395)<x396));

	if (t92 != -1054062LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x397 = INT8_MIN;
	int8_t x398 = -1;
	uint64_t x399 = 1039499268994710320LLU;
	volatile int64_t x400 = INT64_MAX;
	static volatile int32_t t93 = 39600561;

	t93 = (x397+((x398/x399)<x400));

	if (t93 != -127) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x401 = UINT16_MAX;
	int64_t x402 = -1LL;
	uint64_t x403 = 64896575448079426LLU;
	int32_t x404 = -1;

	t94 = (x401+((x402/x403)<x404));

	if (t94 != 65536) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x406 = INT32_MIN;
	int32_t x408 = -12;
	int32_t t95 = -472;

	t95 = (x405+((x406/x407)<x408));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x409 = INT16_MAX;
	static int16_t x410 = 400;
	static int16_t x411 = -1;
	uint32_t x412 = 155391U;
	int32_t t96 = -583;

	t96 = (x409+((x410/x411)<x412));

	if (t96 != 32767) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x413 = INT64_MAX;
	volatile int64_t x414 = -1LL;

	t97 = (x413+((x414/x415)<x416));

	if (t97 != INT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x417 = 190767196LLU;
	uint16_t x418 = 5U;
	volatile int8_t x419 = -1;
	int64_t x420 = -1LL;
	volatile uint64_t t98 = 5LLU;

	t98 = (x417+((x418/x419)<x420));

	if (t98 != 190767197LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x425 = INT32_MIN;
	volatile int8_t x426 = INT8_MIN;
	int32_t x427 = INT32_MIN;
	uint8_t x428 = UINT8_MAX;
	static int32_t t99 = 647028917;

	t99 = (x425+((x426/x427)<x428));

	if (t99 != -2147483647) { NG(); } else { ; }
	
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

