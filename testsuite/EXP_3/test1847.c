#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x13 = 958460U;
uint64_t x18 = UINT64_MAX;
uint32_t x19 = 887952137U;
uint32_t x20 = 326410U;
static volatile int64_t t5 = -557027903976069220LL;
int32_t x31 = -28075875;
int32_t x36 = INT32_MAX;
int64_t t8 = 483038733147712LL;
int64_t x42 = -289523558LL;
static int16_t x52 = -108;
int64_t x55 = INT64_MIN;
static uint8_t x62 = UINT8_MAX;
volatile int32_t t15 = -650097;
volatile int32_t t20 = 31097052;
int64_t x88 = -1LL;
static int8_t x89 = -1;
uint64_t x91 = 267216465195289LLU;
int8_t x93 = INT8_MAX;
int8_t x95 = -1;
uint16_t x96 = 24U;
int16_t x97 = -1;
int8_t x108 = INT8_MAX;
volatile uint64_t t25 = 13871461183LLU;
uint32_t x110 = 2395701U;
uint32_t t26 = 2293273U;
static volatile int64_t t27 = 2LL;
int64_t x131 = INT64_MAX;
int64_t t31 = -6570023065149857LL;
int32_t x139 = -7110;
int16_t x148 = -1;
uint16_t x149 = 26U;
volatile uint64_t t35 = 36395946935LLU;
uint16_t x153 = UINT16_MAX;
int64_t x161 = INT64_MIN;
int64_t x162 = 49686LL;
int8_t x165 = 14;
int32_t x171 = INT32_MIN;
static volatile int64_t t40 = -1880556855LL;
uint32_t x178 = 8622149U;
volatile uint32_t t42 = 822U;
volatile int32_t x181 = INT32_MIN;
uint32_t x184 = 211U;
int8_t x196 = INT8_MAX;
volatile int64_t t46 = -559714LL;
int64_t x197 = INT64_MIN;
int16_t x200 = INT16_MAX;
int64_t t47 = 3647192607998083209LL;
int16_t x203 = -1;
volatile int32_t t48 = 122070;
static uint64_t t49 = 4457LLU;
uint16_t x211 = UINT16_MAX;
volatile int64_t t52 = -906258344LL;
static uint64_t x222 = 1241445LLU;
uint8_t x223 = 76U;
static volatile uint16_t x226 = 5U;
int32_t t54 = 77;
static int16_t x230 = 3230;
int16_t x240 = -1;
volatile int64_t x242 = -10908943248444LL;
volatile int64_t t58 = -1LL;
int8_t x256 = INT8_MIN;
uint64_t t61 = 12775669072LLU;
uint8_t x261 = 1U;
uint8_t x263 = 17U;
volatile uint32_t x265 = 1U;
uint16_t x295 = 19927U;
static int64_t x300 = -1LL;
int64_t t73 = 3208034536LL;
int8_t x309 = INT8_MIN;
int8_t x313 = INT8_MAX;
static int16_t x314 = INT16_MAX;
volatile uint64_t x317 = UINT64_MAX;
volatile int64_t x321 = INT64_MIN;
uint16_t x322 = 12U;
int32_t x325 = INT32_MIN;
int64_t t79 = 6802434899415714LL;
uint64_t x330 = 5LLU;
static int8_t x332 = -1;
volatile int64_t x339 = INT64_MAX;
uint16_t x342 = UINT16_MAX;
volatile int8_t x347 = 0;
int64_t x352 = INT64_MAX;
uint8_t x355 = 127U;
volatile int32_t t87 = 7;
static volatile int64_t x366 = INT64_MAX;
uint32_t x374 = 516728500U;
int8_t x392 = INT8_MAX;
static volatile uint32_t t95 = 987U;
int64_t x397 = 277LL;
uint64_t t97 = 5LLU;
volatile uint16_t x415 = 0U;


void f0(void) {
	static uint16_t x1 = UINT16_MAX;
	int32_t x2 = -31;
	int64_t x3 = -1LL;
	static int32_t x4 = INT32_MIN;
	static volatile int64_t t0 = 253058749816LL;

	t0 = ((x1^x2)+(x3&x4));

	if (t0 != -2147549154LL) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int64_t x5 = 142464276LL;
	int8_t x6 = INT8_MIN;
	volatile int16_t x7 = INT16_MIN;
	int64_t x8 = INT64_MAX;
	int64_t t1 = -16749603LL;

	t1 = ((x5^x6)+(x7&x8));

	if (t1 != 9223372036712278676LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	static volatile uint16_t x10 = 15U;
	uint16_t x11 = 7319U;
	volatile int8_t x12 = -1;
	volatile int32_t t2 = -3;

	t2 = ((x9^x10)+(x11&x12));

	if (t2 != -25434) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x14 = INT16_MIN;
	volatile uint16_t x15 = 96U;
	uint32_t x16 = 4U;
	uint32_t t3 = 541900U;

	t3 = ((x13^x14)+(x15&x16));

	if (t3 != 4293992444U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -1LL;
	volatile uint64_t t4 = 47857LLU;

	t4 = ((x17^x18)+(x19&x20));

	if (t4 != 267016LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = -21559LL;
	int8_t x22 = INT8_MIN;
	int64_t x23 = 13360606900LL;
	volatile uint8_t x24 = UINT8_MAX;

	t5 = ((x21^x22)+(x23&x24));

	if (t5 != 21757LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	uint8_t x26 = 17U;
	int32_t x27 = INT32_MIN;
	uint8_t x28 = UINT8_MAX;
	int32_t t6 = -1698;

	t6 = ((x25^x26)+(x27&x28));

	if (t6 != -18) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 1419623U;
	uint32_t x30 = UINT32_MAX;
	static uint64_t x32 = 209441LLU;
	uint64_t t7 = 33707100390879LLU;

	t7 = ((x29^x30)+(x31&x32));

	if (t7 != 4293748377LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = UINT8_MAX;
	volatile int8_t x34 = -1;
	int64_t x35 = 81804125LL;

	t8 = ((x33^x34)+(x35&x36));

	if (t8 != 81803869LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = 7;
	volatile int16_t x38 = 6;
	static volatile uint16_t x39 = UINT16_MAX;
	uint64_t x40 = UINT64_MAX;
	uint64_t t9 = 22861166686LLU;

	t9 = ((x37^x38)+(x39&x40));

	if (t9 != 65536LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = INT32_MIN;
	int16_t x43 = INT16_MIN;
	int16_t x44 = -13585;
	int64_t t10 = 3871484723LL;

	t10 = ((x41^x42)+(x43&x44));

	if (t10 != 1857927322LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -23437950;
	volatile uint16_t x46 = 4442U;
	volatile int64_t x47 = -1LL;
	uint64_t x48 = UINT64_MAX;
	volatile uint64_t t11 = 2904005070984352777LLU;

	t11 = ((x45^x46)+(x47&x48));

	if (t11 != 18446744073686109399LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x49 = UINT32_MAX;
	uint32_t x50 = 2U;
	int8_t x51 = 0;
	static uint32_t t12 = 77U;

	t12 = ((x49^x50)+(x51&x52));

	if (t12 != 4294967293U) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = -1;
	int16_t x54 = INT16_MIN;
	static volatile uint64_t x56 = UINT64_MAX;
	volatile uint64_t t13 = 6948LLU;

	t13 = ((x53^x54)+(x55&x56));

	if (t13 != 9223372036854808575LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 1U;
	static volatile int8_t x58 = 1;
	int32_t x59 = INT32_MIN;
	int8_t x60 = -2;
	volatile int32_t t14 = INT32_MIN;

	t14 = ((x57^x58)+(x59&x60));

	if (t14 != INT32_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MAX;
	int16_t x63 = -1;
	int8_t x64 = 3;

	t15 = ((x61^x62)+(x63&x64));

	if (t15 != 2147483395) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 376U;
	static int64_t x66 = -1LL;
	int64_t x67 = 1695909996979LL;
	int64_t x68 = -97703766472031LL;
	volatile int64_t t16 = -533973044LL;

	t16 = ((x65^x66)+(x67&x68));

	if (t16 != 1110518843176LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = 2U;
	int32_t x70 = -13387;
	static int8_t x71 = -1;
	int32_t x72 = -1;
	int32_t t17 = 482272828;

	t17 = ((x69^x70)+(x71&x72));

	if (t17 != -13386) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x73 = INT16_MIN;
	int64_t x74 = -737LL;
	int64_t x75 = -26644302336603113LL;
	volatile int8_t x76 = -6;
	int64_t t18 = -2454459585609133LL;

	t18 = ((x73^x74)+(x75&x76));

	if (t18 != -26644302336571087LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = 507150;
	int16_t x78 = INT16_MIN;
	static volatile uint32_t x79 = 351335U;
	static int64_t x80 = INT64_MIN;
	static int64_t t19 = 2093118644LL;

	t19 = ((x77^x78)+(x79&x80));

	if (t19 != -508658LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = -544;
	int16_t x82 = -1;
	static int16_t x83 = 2468;
	int16_t x84 = INT16_MIN;

	t20 = ((x81^x82)+(x83&x84));

	if (t20 != 543) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = 2686U;
	int64_t x86 = INT64_MAX;
	volatile uint64_t x87 = UINT64_MAX;
	volatile uint64_t t21 = 550LLU;

	t21 = ((x85^x86)+(x87&x88));

	if (t21 != 9223372036854773120LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x90 = INT8_MIN;
	uint64_t x92 = UINT64_MAX;
	uint64_t t22 = 144295603147LLU;

	t22 = ((x89^x90)+(x91&x92));

	if (t22 != 267216465195416LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x94 = -3;
	volatile int32_t t23 = -959814;

	t23 = ((x93^x94)+(x95&x96));

	if (t23 != -102) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x98 = -1;
	int16_t x99 = -1;
	uint64_t x100 = 26LLU;
	uint64_t t24 = 163133723088LLU;

	t24 = ((x97^x98)+(x99&x100));

	if (t24 != 26LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x105 = 31222859803323146LLU;
	volatile int32_t x106 = 1061;
	volatile int8_t x107 = INT8_MIN;

	t25 = ((x105^x106)+(x107&x108));

	if (t25 != 31222859803324207LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x109 = 0U;
	uint16_t x111 = 0U;
	uint8_t x112 = UINT8_MAX;

	t26 = ((x109^x110)+(x111&x112));

	if (t26 != 2395701U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x113 = UINT32_MAX;
	int8_t x114 = -1;
	volatile int16_t x115 = INT16_MIN;
	static int64_t x116 = 12245477LL;

	t27 = ((x113^x114)+(x115&x116));

	if (t27 != 12222464LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x117 = -1;
	uint64_t x118 = 1LLU;
	volatile int32_t x119 = -1;
	uint16_t x120 = 0U;
	volatile uint64_t t28 = 3406646LLU;

	t28 = ((x117^x118)+(x119&x120));

	if (t28 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x121 = -3865;
	static int8_t x122 = -1;
	uint8_t x123 = 0U;
	uint64_t x124 = 241880133008580880LLU;
	volatile uint64_t t29 = 8854830088857616LLU;

	t29 = ((x121^x122)+(x123&x124));

	if (t29 != 3864LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x125 = UINT32_MAX;
	static volatile uint8_t x126 = 10U;
	volatile int64_t x127 = 2354850LL;
	volatile int16_t x128 = -563;
	int64_t t30 = 37640384682772LL;

	t30 = ((x125^x126)+(x127&x128));

	if (t30 != 4297321589LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x129 = -328;
	int32_t x130 = INT32_MAX;
	uint32_t x132 = UINT32_MAX;

	t31 = ((x129^x130)+(x131&x132));

	if (t31 != 2147483974LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x137 = UINT8_MAX;
	static uint8_t x138 = 2U;
	int16_t x140 = -458;
	volatile int32_t t32 = -39806474;

	t32 = ((x137^x138)+(x139&x140));

	if (t32 != -6865) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x141 = 6914669224757LLU;
	uint64_t x142 = 23166648345970414LLU;
	uint64_t x143 = 4443LLU;
	uint64_t x144 = 11213534LLU;
	static volatile uint64_t t33 = 16216LLU;

	t33 = ((x141^x142)+(x143&x144));

	if (t33 != 23164203198805557LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x145 = 494167263U;
	static volatile int64_t x146 = 3969946265LL;
	static int32_t x147 = 0;
	volatile int64_t t34 = -209036919LL;

	t34 = ((x145^x146)+(x147&x148));

	if (t34 != 4057265734LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x150 = UINT64_MAX;
	int8_t x151 = INT8_MIN;
	int8_t x152 = INT8_MAX;

	t35 = ((x149^x150)+(x151&x152));

	if (t35 != 18446744073709551589LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x154 = -3;
	uint64_t x155 = 115LLU;
	int32_t x156 = INT32_MIN;
	uint64_t t36 = 5219168579LLU;

	t36 = ((x153^x154)+(x155&x156));

	if (t36 != 18446744073709486082LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x157 = INT64_MIN;
	static int8_t x158 = -1;
	int64_t x159 = INT64_MIN;
	uint8_t x160 = 25U;
	volatile int64_t t37 = INT64_MAX;

	t37 = ((x157^x158)+(x159&x160));

	if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int32_t x163 = 0;
	int64_t x164 = INT64_MIN;
	volatile int64_t t38 = 41878754848320421LL;

	t38 = ((x161^x162)+(x163&x164));

	if (t38 != -9223372036854726122LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x166 = INT32_MIN;
	int32_t x167 = INT32_MIN;
	static uint8_t x168 = UINT8_MAX;
	volatile int32_t t39 = 170738564;

	t39 = ((x165^x166)+(x167&x168));

	if (t39 != -2147483634) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x169 = INT64_MAX;
	uint16_t x170 = UINT16_MAX;
	volatile int8_t x172 = INT8_MIN;

	t40 = ((x169^x170)+(x171&x172));

	if (t40 != 9223372034707226624LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x173 = INT8_MIN;
	static int8_t x174 = -1;
	static int16_t x175 = INT16_MIN;
	uint8_t x176 = 0U;
	static int32_t t41 = -3343288;

	t41 = ((x173^x174)+(x175&x176));

	if (t41 != 127) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x177 = -14411;
	static int16_t x179 = -1;
	int8_t x180 = 3;

	t42 = ((x177^x178)+(x179&x180));

	if (t42 != 4286339059U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x182 = INT8_MIN;
	uint32_t x183 = UINT32_MAX;
	static uint32_t t43 = 137015U;

	t43 = ((x181^x182)+(x183&x184));

	if (t43 != 2147483731U) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x185 = 119245609LLU;
	uint32_t x186 = 2U;
	static volatile int64_t x187 = INT64_MAX;
	int64_t x188 = INT64_MIN;
	static uint64_t t44 = 370LLU;

	t44 = ((x185^x186)+(x187&x188));

	if (t44 != 119245611LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x189 = 121U;
	static int64_t x190 = -157359LL;
	int8_t x191 = 1;
	int16_t x192 = -60;
	volatile int64_t t45 = 1040865534070LL;

	t45 = ((x189^x190)+(x191&x192));

	if (t45 != -157400LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x193 = -125;
	uint32_t x194 = 1058369954U;
	volatile int64_t x195 = INT64_MAX;

	t46 = ((x193^x194)+(x195&x196));

	if (t46 != 3236597408LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x198 = 1U;
	static int64_t x199 = INT64_MIN;

	t47 = ((x197^x198)+(x199&x200));

	if (t47 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x201 = INT32_MIN;
	uint8_t x202 = 2U;
	static uint8_t x204 = 20U;

	t48 = ((x201^x202)+(x203&x204));

	if (t48 != -2147483626) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x205 = 3U;
	static uint64_t x206 = 1LLU;
	int8_t x207 = 1;
	static uint16_t x208 = 77U;

	t49 = ((x205^x206)+(x207&x208));

	if (t49 != 3LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int64_t x209 = INT64_MAX;
	int16_t x210 = -2437;
	static int32_t x212 = INT32_MAX;
	int64_t t50 = 3LL;

	t50 = ((x209^x210)+(x211&x212));

	if (t50 != -9223372036854707837LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x213 = INT16_MIN;
	int32_t x214 = -2570194;
	volatile int64_t x215 = -1LL;
	uint32_t x216 = 15637U;
	volatile int64_t t51 = 4LL;

	t51 = ((x213^x214)+(x215&x216));

	if (t51 != 2590019LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x217 = INT16_MIN;
	int64_t x218 = -113919934987918LL;
	int16_t x219 = -1;
	static volatile int16_t x220 = -3;

	t52 = ((x217^x218)+(x219&x220));

	if (t52 != 113919934955887LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x221 = -1;
	uint16_t x224 = 1388U;
	uint64_t t53 = 697679LLU;

	t53 = ((x221^x222)+(x223&x224));

	if (t53 != 18446744073708310246LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x225 = 1;
	int16_t x227 = INT16_MIN;
	int8_t x228 = -1;

	t54 = ((x225^x226)+(x227&x228));

	if (t54 != -32764) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x229 = -1;
	static uint32_t x231 = 785U;
	static int8_t x232 = INT8_MIN;
	volatile uint32_t t55 = 112551U;

	t55 = ((x229^x230)+(x231&x232));

	if (t55 != 4294964833U) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x233 = INT32_MIN;
	int32_t x234 = INT32_MIN;
	static int8_t x235 = -1;
	static int8_t x236 = INT8_MIN;
	static volatile int32_t t56 = 4664540;

	t56 = ((x233^x234)+(x235&x236));

	if (t56 != -128) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x237 = UINT16_MAX;
	int32_t x238 = -1;
	int32_t x239 = -53;
	static int32_t t57 = -6661950;

	t57 = ((x237^x238)+(x239&x240));

	if (t57 != -65589) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x241 = 5;
	volatile uint8_t x243 = 18U;
	static volatile int8_t x244 = INT8_MIN;

	t58 = ((x241^x242)+(x243&x244));

	if (t58 != -10908943248447LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x245 = 3U;
	int8_t x246 = INT8_MIN;
	static volatile int32_t x247 = 692;
	static uint16_t x248 = 216U;
	volatile int32_t t59 = -285224;

	t59 = ((x245^x246)+(x247&x248));

	if (t59 != 19) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x249 = 0U;
	uint32_t x250 = 8588109U;
	volatile int16_t x251 = -1;
	int64_t x252 = INT64_MIN;
	int64_t t60 = 549602LL;

	t60 = ((x249^x250)+(x251&x252));

	if (t60 != -9223372036846187699LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x253 = UINT64_MAX;
	int32_t x254 = 1;
	int16_t x255 = INT16_MIN;

	t61 = ((x253^x254)+(x255&x256));

	if (t61 != 18446744073709518846LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x257 = UINT8_MAX;
	static volatile uint32_t x258 = 1182753525U;
	int64_t x259 = -256943027LL;
	int8_t x260 = 0;
	int64_t t62 = -85LL;

	t62 = ((x257^x258)+(x259&x260));

	if (t62 != 1182753290LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x262 = 8043U;
	uint64_t x264 = 5975139287880358668LLU;
	uint64_t t63 = 2LLU;

	t63 = ((x261^x262)+(x263&x264));

	if (t63 != 8042LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x266 = -1;
	uint16_t x267 = 16U;
	static volatile int64_t x268 = -8378146249788LL;
	static volatile int64_t t64 = 38LL;

	t64 = ((x265^x266)+(x267&x268));

	if (t64 != 4294967294LL) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int8_t x269 = INT8_MIN;
	volatile uint32_t x270 = 3413U;
	int32_t x271 = INT32_MAX;
	int64_t x272 = INT64_MAX;
	int64_t t65 = -2471576089821045939LL;

	t65 = ((x269^x270)+(x271&x272));

	if (t65 != 6442447572LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x273 = -1;
	int32_t x274 = -26;
	int8_t x275 = -1;
	int64_t x276 = -1LL;
	volatile int64_t t66 = 2315LL;

	t66 = ((x273^x274)+(x275&x276));

	if (t66 != 24LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x277 = 4;
	volatile uint16_t x278 = 624U;
	volatile int64_t x279 = -1LL;
	int64_t x280 = -1LL;
	static volatile int64_t t67 = 17035537550814831LL;

	t67 = ((x277^x278)+(x279&x280));

	if (t67 != 627LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x281 = INT8_MAX;
	uint32_t x282 = 1303139U;
	uint32_t x283 = 1U;
	uint8_t x284 = 72U;
	static volatile uint32_t t68 = 1U;

	t68 = ((x281^x282)+(x283&x284));

	if (t68 != 1303068U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x285 = -4;
	int8_t x286 = -62;
	int64_t x287 = INT64_MIN;
	static int8_t x288 = -1;
	int64_t t69 = -2036302305022174466LL;

	t69 = ((x285^x286)+(x287&x288));

	if (t69 != -9223372036854775746LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x289 = -1;
	int64_t x290 = INT64_MIN;
	int32_t x291 = INT32_MIN;
	uint8_t x292 = 6U;
	volatile int64_t t70 = INT64_MAX;

	t70 = ((x289^x290)+(x291&x292));

	if (t70 != INT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x293 = 11017748U;
	int64_t x294 = -32LL;
	static volatile int64_t x296 = INT64_MAX;
	int64_t t71 = -1200762511878992313LL;

	t71 = ((x293^x294)+(x295&x296));

	if (t71 != -10997813LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x297 = -1;
	int16_t x298 = 1;
	uint32_t x299 = 1620287126U;
	int64_t t72 = 49149LL;

	t72 = ((x297^x298)+(x299&x300));

	if (t72 != 1620287124LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x301 = UINT8_MAX;
	int64_t x302 = 267259LL;
	int64_t x303 = INT64_MIN;
	int64_t x304 = 17404LL;

	t73 = ((x301^x302)+(x303&x304));

	if (t73 != 267012LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x305 = 2;
	uint16_t x306 = UINT16_MAX;
	static uint32_t x307 = 30946U;
	static volatile int32_t x308 = INT32_MIN;
	static volatile uint32_t t74 = 43U;

	t74 = ((x305^x306)+(x307&x308));

	if (t74 != 65533U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x310 = INT32_MIN;
	int16_t x311 = INT16_MIN;
	int8_t x312 = 1;
	volatile int32_t t75 = 397775;

	t75 = ((x309^x310)+(x311&x312));

	if (t75 != 2147483520) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x315 = 1LLU;
	static int16_t x316 = 24;
	static uint64_t t76 = 125LLU;

	t76 = ((x313^x314)+(x315&x316));

	if (t76 != 32640LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x318 = 15578821432LLU;
	int64_t x319 = 14184775462LL;
	int16_t x320 = 325;
	uint64_t t77 = 894504119970LLU;

	t77 = ((x317^x318)+(x319&x320));

	if (t77 != 18446744058130730443LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x323 = INT64_MAX;
	uint16_t x324 = 281U;
	volatile int64_t t78 = 709263937LL;

	t78 = ((x321^x322)+(x323&x324));

	if (t78 != -9223372036854775515LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x326 = -34906081380152LL;
	int8_t x327 = -1;
	int16_t x328 = -408;

	t79 = ((x325^x326)+(x327&x328));

	if (t79 != 34906464532272LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x329 = 7U;
	volatile int16_t x331 = INT16_MAX;
	volatile uint64_t t80 = 355898LLU;

	t80 = ((x329^x330)+(x331&x332));

	if (t80 != 32769LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x337 = INT64_MIN;
	int8_t x338 = 9;
	uint8_t x340 = 46U;
	static int64_t t81 = 27875385LL;

	t81 = ((x337^x338)+(x339&x340));

	if (t81 != -9223372036854775753LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x341 = INT32_MIN;
	int64_t x343 = INT64_MIN;
	uint64_t x344 = 1064535981LLU;
	uint64_t t82 = 2LLU;

	t82 = ((x341^x342)+(x343&x344));

	if (t82 != 18446744071562133503LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int16_t x345 = 6;
	volatile int32_t x346 = INT32_MIN;
	int64_t x348 = 20LL;
	volatile int64_t t83 = -353199396LL;

	t83 = ((x345^x346)+(x347&x348));

	if (t83 != -2147483642LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x349 = 0U;
	int16_t x350 = INT16_MIN;
	static int64_t x351 = -1LL;
	volatile int64_t t84 = -964697LL;

	t84 = ((x349^x350)+(x351&x352));

	if (t84 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x353 = INT8_MAX;
	int16_t x354 = INT16_MIN;
	int32_t x356 = -1;
	volatile int32_t t85 = -24468172;

	t85 = ((x353^x354)+(x355&x356));

	if (t85 != -32514) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x357 = UINT64_MAX;
	uint8_t x358 = UINT8_MAX;
	static uint16_t x359 = 6U;
	int8_t x360 = 15;
	volatile uint64_t t86 = 511558565442539LLU;

	t86 = ((x357^x358)+(x359&x360));

	if (t86 != 18446744073709551366LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x361 = 2U;
	volatile int32_t x362 = -1;
	int8_t x363 = INT8_MAX;
	int16_t x364 = INT16_MIN;

	t87 = ((x361^x362)+(x363&x364));

	if (t87 != -3) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x365 = INT32_MAX;
	int16_t x367 = INT16_MIN;
	int32_t x368 = INT32_MAX;
	static int64_t t88 = 236847991LL;

	t88 = ((x365^x366)+(x367&x368));

	if (t88 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x369 = -1;
	volatile int8_t x370 = 22;
	uint8_t x371 = 84U;
	int32_t x372 = INT32_MIN;
	int32_t t89 = 9232;

	t89 = ((x369^x370)+(x371&x372));

	if (t89 != -23) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x373 = UINT16_MAX;
	static volatile uint64_t x375 = UINT64_MAX;
	int32_t x376 = -1;
	uint64_t t90 = 3LLU;

	t90 = ((x373^x374)+(x375&x376));

	if (t90 != 516708682LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x377 = UINT8_MAX;
	volatile uint32_t x378 = UINT32_MAX;
	uint32_t x379 = 1U;
	int16_t x380 = -1;
	uint32_t t91 = 1466268U;

	t91 = ((x377^x378)+(x379&x380));

	if (t91 != 4294967041U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x381 = 1;
	uint32_t x382 = 2151087U;
	uint32_t x383 = 3U;
	uint8_t x384 = UINT8_MAX;
	uint32_t t92 = 1U;

	t92 = ((x381^x382)+(x383&x384));

	if (t92 != 2151089U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x385 = 29;
	int8_t x386 = INT8_MIN;
	uint32_t x387 = 6U;
	uint16_t x388 = 2U;
	volatile uint32_t t93 = 10273743U;

	t93 = ((x385^x386)+(x387&x388));

	if (t93 != 4294967199U) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x389 = 89005914U;
	static int16_t x390 = -1;
	volatile uint64_t x391 = 37LLU;
	uint64_t t94 = 19949389203002LLU;

	t94 = ((x389^x390)+(x391&x392));

	if (t94 != 4205961418LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x393 = 13U;
	int32_t x394 = -19248595;
	int32_t x395 = -1;
	int32_t x396 = -1;

	t95 = ((x393^x394)+(x395&x396));

	if (t95 != 4275718687U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x398 = 41;
	int8_t x399 = INT8_MIN;
	int16_t x400 = INT16_MAX;
	volatile int64_t t96 = -8188LL;

	t96 = ((x397^x398)+(x399&x400));

	if (t96 != 32956LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x409 = 85136157183LLU;
	static volatile int64_t x410 = INT64_MIN;
	int16_t x411 = INT16_MAX;
	uint64_t x412 = 7808221903204648LLU;

	t97 = ((x409^x410)+(x411&x412));

	if (t97 != 9223372121990945575LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x413 = INT32_MAX;
	int64_t x414 = -610LL;
	int64_t x416 = -6282121093LL;
	volatile int64_t t98 = 317943LL;

	t98 = ((x413^x414)+(x415&x416));

	if (t98 != -2147483039LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x417 = -1;
	int32_t x418 = -13760727;
	int8_t x419 = -1;
	volatile uint64_t x420 = 259LLU;
	static volatile uint64_t t99 = 26071226105LLU;

	t99 = ((x417^x418)+(x419&x420));

	if (t99 != 13760985LLU) { NG(); } else { ; }
	
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

