#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x8 = 43175U;
int16_t x27 = -2;
uint16_t x34 = UINT16_MAX;
int8_t x39 = INT8_MIN;
static volatile int64_t t7 = 131941562LL;
int64_t x49 = -1LL;
static uint16_t x52 = 1259U;
static uint32_t x63 = UINT32_MAX;
int32_t t12 = 1767;
static int32_t x66 = -1;
int32_t x67 = -257597;
volatile int64_t t13 = 92812698358004LL;
static uint64_t x69 = 1300559129746LLU;
uint16_t x73 = 9529U;
static int32_t x74 = INT32_MAX;
uint8_t x77 = UINT8_MAX;
int32_t x87 = 59717459;
int64_t x94 = INT64_MIN;
uint16_t x100 = 31924U;
volatile int16_t x105 = 18;
static int8_t x106 = INT8_MIN;
volatile uint8_t x109 = 3U;
int64_t t24 = 5LL;
static volatile int16_t x116 = -1;
uint32_t x119 = 0U;
int8_t x120 = INT8_MIN;
int8_t x132 = INT8_MAX;
int32_t t28 = 0;
static int16_t x133 = INT16_MAX;
int8_t x142 = 1;
uint16_t x147 = 11746U;
volatile uint64_t t32 = 33232120632LLU;
static uint8_t x155 = 18U;
static int16_t x156 = INT16_MIN;
int8_t x163 = INT8_MIN;
volatile int32_t x164 = -1;
volatile int32_t t36 = -1968;
int16_t x165 = INT16_MAX;
int8_t x166 = 40;
static int32_t x167 = 1;
static int32_t t37 = -548;
int16_t x172 = INT16_MIN;
int32_t t38 = 0;
uint8_t x177 = 3U;
int64_t x179 = INT64_MAX;
static int32_t t39 = 5055520;
uint32_t t40 = 65475U;
volatile uint16_t x197 = UINT16_MAX;
uint16_t x201 = 8U;
static int32_t x202 = -1;
volatile int32_t t43 = -37497612;
static uint32_t x205 = 64517621U;
static int64_t x206 = -1LL;
static int16_t x217 = 336;
static uint64_t x227 = 80407579LLU;
int8_t x237 = INT8_MIN;
volatile int16_t x238 = -1308;
static int8_t x239 = -1;
int8_t x245 = -1;
static int8_t x250 = -3;
int32_t t54 = 65507038;
static volatile int64_t x255 = INT64_MIN;
int32_t t55 = 14;
int32_t x257 = INT32_MIN;
volatile int32_t t58 = 161360264;
static uint32_t x272 = UINT32_MAX;
volatile uint64_t t60 = 38685894472LLU;
volatile int32_t t61 = 278361;
uint32_t t62 = 5463534U;
volatile uint32_t x289 = UINT32_MAX;
volatile uint32_t t63 = 1308514865U;
int16_t x293 = INT16_MIN;
int16_t x294 = -224;
static int8_t x297 = -3;
uint32_t x298 = 922U;
int8_t x306 = 1;
volatile uint32_t x311 = UINT32_MAX;
uint32_t t68 = 16U;
static int8_t x316 = INT8_MIN;
int16_t x317 = INT16_MIN;
uint32_t t71 = 61341U;
int64_t x325 = -186917067348LL;
int8_t x334 = 29;
uint8_t x337 = 5U;
int16_t x340 = -1;
static volatile int64_t x341 = -1LL;
volatile int16_t x348 = INT16_MIN;
int64_t x350 = -11892543030155107LL;
int16_t x357 = 3016;
volatile int16_t x359 = -14363;
volatile int8_t x363 = INT8_MIN;
static volatile int32_t t80 = -1;
int32_t x372 = 23901472;
static int32_t t82 = 506457782;
uint16_t x384 = UINT16_MAX;
volatile uint64_t x390 = 21950708039032482LLU;
int32_t t86 = -189908;
volatile uint16_t x396 = 71U;
volatile int32_t x399 = INT32_MIN;
int64_t x403 = 40949934169383727LL;
uint64_t x408 = UINT64_MAX;
static int64_t x412 = -3846360LL;
static int32_t x418 = INT32_MIN;
int8_t x419 = INT8_MIN;
static int16_t x422 = INT16_MAX;
int32_t t94 = -786;
int32_t t95 = 7536;
uint32_t t96 = 122334049U;
int8_t x438 = -4;


void f0(void) {
	int16_t x1 = 81;
	volatile int16_t x2 = -1;
	int16_t x3 = 43;
	int16_t x4 = -1011;
	volatile int32_t t0 = -1;

	t0 = ((x1&(x2<x3))-x4);

	if (t0 != 1012) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -27601LL;
	uint8_t x6 = UINT8_MAX;
	volatile int16_t x7 = -1;
	static int64_t t1 = 73902LL;

	t1 = ((x5&(x6<x7))-x8);

	if (t1 != -43175LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x17 = 66U;
	uint8_t x18 = 0U;
	volatile int64_t x19 = INT64_MIN;
	static int8_t x20 = -1;
	static volatile int32_t t2 = 1832;

	t2 = ((x17&(x18<x19))-x20);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x21 = INT16_MAX;
	int32_t x22 = INT32_MIN;
	uint8_t x23 = 0U;
	uint32_t x24 = 85855U;
	uint32_t t3 = 18U;

	t3 = ((x21&(x22<x23))-x24);

	if (t3 != 4294881442U) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x25 = -1LL;
	int8_t x26 = -1;
	static volatile int64_t x28 = INT64_MAX;
	static volatile int64_t t4 = 10324346LL;

	t4 = ((x25&(x26<x27))-x28);

	if (t4 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint64_t x29 = UINT64_MAX;
	int32_t x30 = 0;
	static int16_t x31 = INT16_MIN;
	int8_t x32 = -14;
	volatile uint64_t t5 = 5177102LLU;

	t5 = ((x29&(x30<x31))-x32);

	if (t5 != 14LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x33 = -1;
	volatile int32_t x35 = -1;
	int16_t x36 = -1;
	volatile int32_t t6 = -11198280;

	t6 = ((x33&(x34<x35))-x36);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x37 = INT64_MAX;
	int64_t x38 = -1LL;
	int32_t x40 = 167;

	t7 = ((x37&(x38<x39))-x40);

	if (t7 != -167LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x45 = -41;
	int32_t x46 = INT32_MIN;
	volatile int8_t x47 = INT8_MAX;
	volatile int16_t x48 = INT16_MIN;
	int32_t t8 = -2658244;

	t8 = ((x45&(x46<x47))-x48);

	if (t8 != 32769) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x50 = 2071;
	int16_t x51 = INT16_MIN;
	volatile int64_t t9 = -34599582LL;

	t9 = ((x49&(x50<x51))-x52);

	if (t9 != -1259LL) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint64_t x53 = 3LLU;
	int32_t x54 = INT32_MAX;
	int64_t x55 = INT64_MAX;
	int16_t x56 = -125;
	volatile uint64_t t10 = 22777896008096631LLU;

	t10 = ((x53&(x54<x55))-x56);

	if (t10 != 126LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x57 = 1948U;
	volatile uint16_t x58 = 2U;
	volatile int32_t x59 = INT32_MIN;
	int16_t x60 = -1;
	static int32_t t11 = -1;

	t11 = ((x57&(x58<x59))-x60);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int16_t x61 = 457;
	int64_t x62 = -13419LL;
	int32_t x64 = 6226369;

	t12 = ((x61&(x62<x63))-x64);

	if (t12 != -6226368) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x65 = -661489149;
	int64_t x68 = INT64_MAX;

	t13 = ((x65&(x66<x67))-x68);

	if (t13 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x70 = INT64_MAX;
	volatile int64_t x71 = 1475779745505LL;
	int32_t x72 = INT32_MIN;
	volatile uint64_t t14 = 171434407437LLU;

	t14 = ((x69&(x70<x71))-x72);

	if (t14 != 2147483648LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x75 = INT64_MIN;
	int16_t x76 = INT16_MIN;
	volatile int32_t t15 = 2;

	t15 = ((x73&(x74<x75))-x76);

	if (t15 != 32768) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x78 = -1056;
	static uint32_t x79 = 1895626790U;
	uint16_t x80 = UINT16_MAX;
	volatile int32_t t16 = -135565948;

	t16 = ((x77&(x78<x79))-x80);

	if (t16 != -65535) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x81 = 106U;
	uint8_t x82 = UINT8_MAX;
	int32_t x83 = INT32_MIN;
	volatile int8_t x84 = INT8_MAX;
	int32_t t17 = 50631;

	t17 = ((x81&(x82<x83))-x84);

	if (t17 != -127) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x85 = UINT8_MAX;
	static uint64_t x86 = UINT64_MAX;
	int8_t x88 = INT8_MIN;
	volatile int32_t t18 = 1;

	t18 = ((x85&(x86<x87))-x88);

	if (t18 != 128) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x89 = UINT64_MAX;
	uint32_t x90 = UINT32_MAX;
	int64_t x91 = INT64_MIN;
	volatile int32_t x92 = INT32_MIN;
	uint64_t t19 = 589595927272465328LLU;

	t19 = ((x89&(x90<x91))-x92);

	if (t19 != 2147483648LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x93 = INT32_MAX;
	int16_t x95 = INT16_MAX;
	int32_t x96 = 52807;
	static volatile int32_t t20 = 10337704;

	t20 = ((x93&(x94<x95))-x96);

	if (t20 != -52806) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x97 = -1;
	volatile uint64_t x98 = 1335665LLU;
	static uint8_t x99 = 55U;
	volatile int32_t t21 = 1080248;

	t21 = ((x97&(x98<x99))-x100);

	if (t21 != -31924) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x101 = 17701865877743797LLU;
	int16_t x102 = INT16_MIN;
	volatile int8_t x103 = 15;
	int64_t x104 = -3296767970668LL;
	static volatile uint64_t t22 = 9645582386869975LLU;

	t22 = ((x101&(x102<x103))-x104);

	if (t22 != 3296767970669LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x107 = -1;
	volatile uint8_t x108 = 94U;
	int32_t t23 = -5931188;

	t23 = ((x105&(x106<x107))-x108);

	if (t23 != -94) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x110 = INT64_MAX;
	uint16_t x111 = 219U;
	int64_t x112 = -1LL;

	t24 = ((x109&(x110<x111))-x112);

	if (t24 != 1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x113 = 7;
	uint64_t x114 = 9548957LLU;
	static uint16_t x115 = 7960U;
	volatile int32_t t25 = 108;

	t25 = ((x113&(x114<x115))-x116);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x117 = INT8_MAX;
	int64_t x118 = INT64_MIN;
	int32_t t26 = -376625;

	t26 = ((x117&(x118<x119))-x120);

	if (t26 != 129) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x125 = INT8_MIN;
	static uint8_t x126 = 20U;
	uint8_t x127 = 3U;
	volatile int32_t x128 = -1;
	volatile int32_t t27 = -138479;

	t27 = ((x125&(x126<x127))-x128);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x129 = INT16_MIN;
	volatile int64_t x130 = INT64_MAX;
	uint32_t x131 = 21217U;

	t28 = ((x129&(x130<x131))-x132);

	if (t28 != -127) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x134 = UINT16_MAX;
	volatile int8_t x135 = -1;
	static uint16_t x136 = 5391U;
	volatile int32_t t29 = -75;

	t29 = ((x133&(x134<x135))-x136);

	if (t29 != -5391) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x137 = INT8_MIN;
	static int8_t x138 = INT8_MAX;
	volatile int8_t x139 = 0;
	int16_t x140 = -3;
	volatile int32_t t30 = 19;

	t30 = ((x137&(x138<x139))-x140);

	if (t30 != 3) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x141 = 2403038141737LL;
	volatile int32_t x143 = INT32_MAX;
	int64_t x144 = INT64_MAX;
	int64_t t31 = -336670350LL;

	t31 = ((x141&(x142<x143))-x144);

	if (t31 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x145 = UINT64_MAX;
	int16_t x146 = 1;
	int64_t x148 = INT64_MIN;

	t32 = ((x145&(x146<x147))-x148);

	if (t32 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x149 = INT64_MIN;
	uint16_t x150 = 946U;
	int16_t x151 = -4;
	int32_t x152 = 14;
	static int64_t t33 = 31566702246442LL;

	t33 = ((x149&(x150<x151))-x152);

	if (t33 != -14LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x153 = -21913066;
	uint8_t x154 = 3U;
	int32_t t34 = 47191;

	t34 = ((x153&(x154<x155))-x156);

	if (t34 != 32768) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint8_t x157 = 5U;
	uint8_t x158 = 5U;
	uint16_t x159 = 6085U;
	volatile int16_t x160 = INT16_MIN;
	int32_t t35 = -2074544;

	t35 = ((x157&(x158<x159))-x160);

	if (t35 != 32769) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x161 = UINT16_MAX;
	int64_t x162 = -1LL;

	t36 = ((x161&(x162<x163))-x164);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x168 = 0;

	t37 = ((x165&(x166<x167))-x168);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x169 = 5U;
	volatile int32_t x170 = 1408;
	static uint16_t x171 = 1745U;

	t38 = ((x169&(x170<x171))-x172);

	if (t38 != 32769) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x178 = UINT16_MAX;
	volatile int16_t x180 = 2645;

	t39 = ((x177&(x178<x179))-x180);

	if (t39 != -2644) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x181 = INT32_MIN;
	static int8_t x182 = 0;
	int32_t x183 = -1675;
	static uint32_t x184 = 2092858770U;

	t40 = ((x181&(x182<x183))-x184);

	if (t40 != 2202108526U) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x193 = 584U;
	int8_t x194 = 37;
	int8_t x195 = -1;
	volatile int8_t x196 = INT8_MAX;
	int32_t t41 = 50;

	t41 = ((x193&(x194<x195))-x196);

	if (t41 != -127) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int16_t x198 = 4832;
	int8_t x199 = INT8_MIN;
	uint64_t x200 = 1678075738777LLU;
	uint64_t t42 = 62592146LLU;

	t42 = ((x197&(x198<x199))-x200);

	if (t42 != 18446742395633812839LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x203 = 15U;
	int32_t x204 = 951183;

	t43 = ((x201&(x202<x203))-x204);

	if (t43 != -951183) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x207 = -60281557722997306LL;
	static int32_t x208 = 101753384;
	uint32_t t44 = 19U;

	t44 = ((x205&(x206<x207))-x208);

	if (t44 != 4193213912U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x213 = -285311729LL;
	uint16_t x214 = 377U;
	uint16_t x215 = 338U;
	static int32_t x216 = INT32_MAX;
	volatile int64_t t45 = 886833LL;

	t45 = ((x213&(x214<x215))-x216);

	if (t45 != -2147483647LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x218 = UINT32_MAX;
	int64_t x219 = INT64_MAX;
	uint8_t x220 = 34U;
	static int32_t t46 = -6;

	t46 = ((x217&(x218<x219))-x220);

	if (t46 != -34) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x221 = 1LLU;
	int16_t x222 = -609;
	int8_t x223 = INT8_MAX;
	uint8_t x224 = UINT8_MAX;
	uint64_t t47 = 7119449LLU;

	t47 = ((x221&(x222<x223))-x224);

	if (t47 != 18446744073709551362LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x225 = 79781813759805LL;
	uint32_t x226 = 824857U;
	int32_t x228 = INT32_MIN;
	volatile int64_t t48 = 4542336134LL;

	t48 = ((x225&(x226<x227))-x228);

	if (t48 != 2147483649LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x229 = -618780541185449253LL;
	static int32_t x230 = -479;
	uint8_t x231 = 11U;
	int64_t x232 = INT64_MAX;
	volatile int64_t t49 = -63LL;

	t49 = ((x229&(x230<x231))-x232);

	if (t49 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x233 = -1;
	uint64_t x234 = 31LLU;
	int16_t x235 = INT16_MIN;
	int64_t x236 = 3226200883537155627LL;
	volatile int64_t t50 = 102108798555446400LL;

	t50 = ((x233&(x234<x235))-x236);

	if (t50 != -3226200883537155626LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x240 = INT16_MIN;
	volatile int32_t t51 = 1;

	t51 = ((x237&(x238<x239))-x240);

	if (t51 != 32768) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x241 = -1928;
	static int64_t x242 = -30545LL;
	int64_t x243 = -15580LL;
	int16_t x244 = -13;
	int32_t t52 = -111465677;

	t52 = ((x241&(x242<x243))-x244);

	if (t52 != 13) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int16_t x246 = INT16_MAX;
	volatile int64_t x247 = INT64_MAX;
	volatile int64_t x248 = 717682889121368110LL;
	int64_t t53 = -1869451682LL;

	t53 = ((x245&(x246<x247))-x248);

	if (t53 != -717682889121368109LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x249 = INT8_MIN;
	int32_t x251 = -23225;
	volatile uint8_t x252 = UINT8_MAX;

	t54 = ((x249&(x250<x251))-x252);

	if (t54 != -255) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x253 = INT16_MAX;
	uint64_t x254 = 3294162120561LLU;
	static int8_t x256 = INT8_MAX;

	t55 = ((x253&(x254<x255))-x256);

	if (t55 != -126) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x258 = INT8_MIN;
	uint8_t x259 = UINT8_MAX;
	volatile int32_t x260 = -20645250;
	int32_t t56 = 464583391;

	t56 = ((x257&(x258<x259))-x260);

	if (t56 != 20645250) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int16_t x261 = INT16_MIN;
	uint8_t x262 = 0U;
	uint16_t x263 = UINT16_MAX;
	int64_t x264 = -1LL;
	int64_t t57 = 890019615538813LL;

	t57 = ((x261&(x262<x263))-x264);

	if (t57 != 1LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x265 = INT8_MIN;
	uint8_t x266 = UINT8_MAX;
	static int64_t x267 = INT64_MAX;
	int16_t x268 = 1256;

	t58 = ((x265&(x266<x267))-x268);

	if (t58 != -1256) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x269 = -1;
	uint32_t x270 = 999268U;
	int64_t x271 = INT64_MIN;
	volatile uint32_t t59 = 1742680457U;

	t59 = ((x269&(x270<x271))-x272);

	if (t59 != 1U) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x273 = INT64_MIN;
	int16_t x274 = INT16_MAX;
	int8_t x275 = INT8_MIN;
	uint64_t x276 = 4719143LLU;

	t60 = ((x273&(x274<x275))-x276);

	if (t60 != 18446744073704832473LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x281 = INT8_MIN;
	volatile int16_t x282 = INT16_MIN;
	int16_t x283 = INT16_MAX;
	int16_t x284 = -8545;

	t61 = ((x281&(x282<x283))-x284);

	if (t61 != 8545) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x285 = 26467675U;
	static int16_t x286 = -18;
	volatile uint8_t x287 = 49U;
	volatile uint8_t x288 = 69U;

	t62 = ((x285&(x286<x287))-x288);

	if (t62 != 4294967228U) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x290 = -27315482;
	uint64_t x291 = UINT64_MAX;
	int8_t x292 = -1;

	t63 = ((x289&(x290<x291))-x292);

	if (t63 != 2U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x295 = INT64_MIN;
	int8_t x296 = INT8_MIN;
	volatile int32_t t64 = 0;

	t64 = ((x293&(x294<x295))-x296);

	if (t64 != 128) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x299 = 169U;
	int64_t x300 = -895859LL;
	int64_t t65 = -126346073880414001LL;

	t65 = ((x297&(x298<x299))-x300);

	if (t65 != 895859LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x301 = -768;
	volatile uint8_t x302 = UINT8_MAX;
	int32_t x303 = INT32_MIN;
	volatile uint32_t x304 = UINT32_MAX;
	volatile uint32_t t66 = 233110U;

	t66 = ((x301&(x302<x303))-x304);

	if (t66 != 1U) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x305 = INT64_MAX;
	int64_t x307 = -1LL;
	int32_t x308 = INT32_MAX;
	volatile int64_t t67 = -1198088LL;

	t67 = ((x305&(x306<x307))-x308);

	if (t67 != -2147483647LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x309 = -1;
	int8_t x310 = -13;
	volatile uint32_t x312 = UINT32_MAX;

	t68 = ((x309&(x310<x311))-x312);

	if (t68 != 2U) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x313 = 4969550603799057LL;
	int16_t x314 = -33;
	volatile int16_t x315 = 3908;
	static int64_t t69 = 526587317576LL;

	t69 = ((x313&(x314<x315))-x316);

	if (t69 != 129LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x318 = INT32_MIN;
	int64_t x319 = 3574LL;
	uint32_t x320 = 105U;
	uint32_t t70 = 83U;

	t70 = ((x317&(x318<x319))-x320);

	if (t70 != 4294967191U) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x321 = 1724393912U;
	static int16_t x322 = INT16_MIN;
	int16_t x323 = -1996;
	int8_t x324 = -13;

	t71 = ((x321&(x322<x323))-x324);

	if (t71 != 13U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x326 = INT64_MIN;
	int8_t x327 = 1;
	uint64_t x328 = 20963187373887LLU;
	uint64_t t72 = 2879751956260920LLU;

	t72 = ((x325&(x326<x327))-x328);

	if (t72 != 18446723110522177729LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x329 = 346;
	int16_t x330 = INT16_MIN;
	uint32_t x331 = 160U;
	uint32_t x332 = UINT32_MAX;
	uint32_t t73 = 3393U;

	t73 = ((x329&(x330<x331))-x332);

	if (t73 != 1U) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x333 = 1011U;
	volatile uint16_t x335 = 9401U;
	uint8_t x336 = 1U;
	volatile int32_t t74 = 1698579;

	t74 = ((x333&(x334<x335))-x336);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x338 = INT64_MIN;
	uint8_t x339 = UINT8_MAX;
	int32_t t75 = 6057;

	t75 = ((x337&(x338<x339))-x340);

	if (t75 != 2) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x342 = INT64_MIN;
	int32_t x343 = -50;
	uint16_t x344 = UINT16_MAX;
	volatile int64_t t76 = -1464LL;

	t76 = ((x341&(x342<x343))-x344);

	if (t76 != -65534LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x345 = INT8_MIN;
	int64_t x346 = INT64_MIN;
	int8_t x347 = -1;
	volatile int32_t t77 = -3667;

	t77 = ((x345&(x346<x347))-x348);

	if (t77 != 32768) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x349 = -6;
	int64_t x351 = -1LL;
	static uint16_t x352 = 5231U;
	int32_t t78 = 0;

	t78 = ((x349&(x350<x351))-x352);

	if (t78 != -5231) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x358 = 4110224U;
	uint16_t x360 = UINT16_MAX;
	volatile int32_t t79 = 11040;

	t79 = ((x357&(x358<x359))-x360);

	if (t79 != -65535) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x361 = 642U;
	uint16_t x362 = 27319U;
	volatile int8_t x364 = INT8_MIN;

	t80 = ((x361&(x362<x363))-x364);

	if (t80 != 128) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x365 = INT64_MIN;
	volatile int64_t x366 = INT64_MAX;
	static int32_t x367 = -1;
	int8_t x368 = INT8_MAX;
	int64_t t81 = -61243LL;

	t81 = ((x365&(x366<x367))-x368);

	if (t81 != -127LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x369 = INT32_MAX;
	static int16_t x370 = INT16_MIN;
	int16_t x371 = INT16_MIN;

	t82 = ((x369&(x370<x371))-x372);

	if (t82 != -23901472) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint32_t x377 = 37U;
	uint32_t x378 = 400203259U;
	int32_t x379 = INT32_MIN;
	uint64_t x380 = 922065016659546168LLU;
	uint64_t t83 = 57LLU;

	t83 = ((x377&(x378<x379))-x380);

	if (t83 != 17524679057050005449LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x381 = 194787U;
	uint64_t x382 = 13926LLU;
	static int32_t x383 = INT32_MIN;
	uint32_t t84 = 18140979U;

	t84 = ((x381&(x382<x383))-x384);

	if (t84 != 4294901762U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x385 = INT8_MIN;
	int16_t x386 = INT16_MAX;
	uint32_t x387 = 243U;
	volatile int8_t x388 = INT8_MAX;
	volatile int32_t t85 = 5216;

	t85 = ((x385&(x386<x387))-x388);

	if (t85 != -127) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x389 = 3550U;
	static int16_t x391 = -1;
	int16_t x392 = -1;

	t86 = ((x389&(x390<x391))-x392);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x393 = 9155;
	volatile int8_t x394 = 1;
	int64_t x395 = INT64_MAX;
	int32_t t87 = 2;

	t87 = ((x393&(x394<x395))-x396);

	if (t87 != -70) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x397 = 1;
	int32_t x398 = INT32_MAX;
	int16_t x400 = -1;
	volatile int32_t t88 = -101807017;

	t88 = ((x397&(x398<x399))-x400);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x401 = INT16_MAX;
	int32_t x402 = INT32_MAX;
	volatile int16_t x404 = INT16_MIN;
	int32_t t89 = 1845164;

	t89 = ((x401&(x402<x403))-x404);

	if (t89 != 32769) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x405 = UINT64_MAX;
	static int8_t x406 = 1;
	int64_t x407 = INT64_MIN;
	uint64_t t90 = 1128LLU;

	t90 = ((x405&(x406<x407))-x408);

	if (t90 != 1LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x409 = INT16_MIN;
	int64_t x410 = -3880324664953864412LL;
	int64_t x411 = 393104863150LL;
	static volatile int64_t t91 = -20238710157248483LL;

	t91 = ((x409&(x410<x411))-x412);

	if (t91 != 3846360LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x413 = UINT64_MAX;
	int32_t x414 = -4;
	int64_t x415 = INT64_MIN;
	static uint16_t x416 = 7U;
	static volatile uint64_t t92 = 3LLU;

	t92 = ((x413&(x414<x415))-x416);

	if (t92 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x417 = 2406136835330LLU;
	int8_t x420 = INT8_MIN;
	volatile uint64_t t93 = 0LLU;

	t93 = ((x417&(x418<x419))-x420);

	if (t93 != 128LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x421 = UINT16_MAX;
	static int32_t x423 = -9;
	int8_t x424 = 1;

	t94 = ((x421&(x422<x423))-x424);

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x425 = INT32_MAX;
	uint64_t x426 = 5368340LLU;
	uint32_t x427 = 1413575331U;
	int16_t x428 = INT16_MAX;

	t95 = ((x425&(x426<x427))-x428);

	if (t95 != -32766) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x429 = UINT32_MAX;
	uint64_t x430 = 106977LLU;
	uint64_t x431 = 4578604232349274LLU;
	uint16_t x432 = 127U;

	t96 = ((x429&(x430<x431))-x432);

	if (t96 != 4294967170U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x433 = INT64_MIN;
	uint64_t x434 = 3LLU;
	static int16_t x435 = -1;
	static volatile uint64_t x436 = UINT64_MAX;
	uint64_t t97 = 91224203449LLU;

	t97 = ((x433&(x434<x435))-x436);

	if (t97 != 1LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x437 = 8049283U;
	static int16_t x439 = -5908;
	static int64_t x440 = -1LL;
	volatile int64_t t98 = 17930351425666935LL;

	t98 = ((x437&(x438<x439))-x440);

	if (t98 != 1LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x441 = 0U;
	int8_t x442 = -1;
	int64_t x443 = -398389486459LL;
	int64_t x444 = 13975LL;
	volatile int64_t t99 = -119LL;

	t99 = ((x441&(x442<x443))-x444);

	if (t99 != -13975LL) { NG(); } else { ; }
	
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

