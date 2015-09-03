#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x14 = UINT32_MAX;
volatile uint32_t t2 = 0U;
volatile int64_t t3 = -21253002LL;
volatile int32_t x21 = 1023790;
volatile uint64_t x24 = 463791407LLU;
int32_t x26 = 5;
int32_t x27 = INT32_MIN;
volatile int32_t x28 = -1;
static volatile uint8_t x32 = 2U;
static volatile int32_t x46 = -45143;
int64_t t8 = -1514866101244019LL;
volatile uint32_t x49 = 100896U;
int16_t x62 = INT16_MIN;
static int64_t x64 = INT64_MIN;
static volatile int64_t t12 = 90772LL;
int8_t x65 = INT8_MAX;
uint64_t x67 = 13649297946201418LLU;
int8_t x71 = -1;
volatile uint64_t t14 = 3791972017911446LLU;
static uint8_t x76 = 10U;
uint32_t x78 = UINT32_MAX;
static int16_t x82 = 9;
volatile uint64_t x90 = UINT64_MAX;
int64_t x91 = INT64_MIN;
int8_t x103 = 7;
uint64_t x105 = UINT64_MAX;
static int32_t x106 = -18522;
volatile int32_t x111 = INT32_MIN;
volatile uint64_t t24 = 24799450791933LLU;
uint16_t x145 = UINT16_MAX;
int32_t x163 = INT32_MAX;
volatile int64_t x167 = INT64_MIN;
volatile int64_t t33 = -728712415720LL;
uint32_t x170 = 538109434U;
volatile uint16_t x173 = UINT16_MAX;
int8_t x179 = -1;
volatile uint8_t x180 = 6U;
volatile int64_t t37 = 189563734406LL;
volatile int64_t t39 = -68875006018761114LL;
int32_t x210 = -17271;
int32_t x230 = INT32_MIN;
int32_t x232 = INT32_MIN;
int16_t x236 = -1;
volatile int16_t x238 = 590;
int16_t x239 = -3;
volatile int64_t t47 = 28LL;
int64_t x246 = INT64_MIN;
static uint32_t t50 = 4672099U;
int32_t x254 = INT32_MIN;
uint64_t x255 = UINT64_MAX;
volatile int64_t x258 = INT64_MAX;
int16_t x259 = INT16_MIN;
static int64_t t52 = -145079LL;
uint64_t x261 = UINT64_MAX;
int32_t x274 = INT32_MIN;
static uint32_t x277 = 30197U;
volatile int16_t x280 = -1;
uint16_t x294 = UINT16_MAX;
int64_t t61 = -15604757941LL;
volatile int64_t t62 = -116274680048454076LL;
uint8_t x305 = 32U;
int64_t x306 = -26785LL;
volatile uint64_t x307 = 39662LLU;
volatile int64_t x313 = -30LL;
uint16_t x322 = 2963U;
int64_t t69 = -16188268362381757LL;
uint32_t x342 = 17U;
uint64_t x347 = 12059787566LLU;
int32_t x356 = INT32_MAX;
volatile uint32_t t75 = 2160U;
uint32_t x367 = 1863868265U;
volatile int64_t t77 = -89562930427LL;
volatile uint64_t x374 = UINT64_MAX;
static int32_t x377 = -1;
uint32_t x390 = 32232839U;
volatile uint64_t x397 = UINT64_MAX;
static volatile uint32_t x398 = 536U;
static uint16_t x401 = 4070U;
int32_t x403 = -342;
int8_t x409 = 2;
int16_t x410 = -1;
int64_t t87 = 63706LL;
volatile int8_t x418 = INT8_MIN;
volatile uint64_t x419 = UINT64_MAX;
int16_t x420 = -168;
int64_t x423 = INT64_MAX;
uint16_t x430 = 1U;
uint8_t x432 = 51U;
volatile int8_t x442 = INT8_MIN;
static uint32_t x443 = UINT32_MAX;
static int16_t x450 = INT16_MAX;
uint32_t x451 = 71607658U;
uint32_t t95 = 1286472U;
uint32_t x459 = UINT32_MAX;
int32_t x465 = INT32_MIN;
int32_t t99 = 1;


void f0(void) {
	int64_t x1 = -1LL;
	volatile int8_t x2 = -1;
	int16_t x3 = -1;
	int64_t x4 = -147LL;
	volatile int64_t t0 = 8385741LL;

	t0 = ((x1%(x2+x3))+x4);

	if (t0 != -148LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	static int16_t x6 = INT16_MIN;
	int16_t x7 = INT16_MAX;
	uint64_t x8 = 6702270683298LLU;
	uint64_t t1 = 208730LLU;

	t1 = ((x5%(x6+x7))+x8);

	if (t1 != 6702270683298LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x13 = 1U;
	uint32_t x15 = 55025828U;
	static uint8_t x16 = 85U;

	t2 = ((x13%(x14+x15))+x16);

	if (t2 != 86U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = INT8_MIN;
	int64_t x18 = -1LL;
	static uint16_t x19 = UINT16_MAX;
	uint16_t x20 = UINT16_MAX;

	t3 = ((x17%(x18+x19))+x20);

	if (t3 != 65407LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x22 = -1;
	uint16_t x23 = 9555U;
	static uint64_t t4 = 4961529856988440398LLU;

	t4 = ((x21%(x22+x23))+x24);

	if (t4 != 463792919LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = INT8_MAX;
	int32_t t5 = -15229949;

	t5 = ((x25%(x26+x27))+x28);

	if (t5 != 126) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x29 = 22889U;
	int32_t x30 = INT32_MAX;
	int64_t x31 = -1LL;
	static volatile int64_t t6 = 7033110143948LL;

	t6 = ((x29%(x30+x31))+x32);

	if (t6 != 22891LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x37 = INT8_MAX;
	static int64_t x38 = -756618944LL;
	uint8_t x39 = 3U;
	uint32_t x40 = UINT32_MAX;
	int64_t t7 = -21437040858LL;

	t7 = ((x37%(x38+x39))+x40);

	if (t7 != 4294967422LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x45 = 57U;
	static volatile int64_t x47 = INT64_MAX;
	int64_t x48 = INT64_MIN;

	t8 = ((x45%(x46+x47))+x48);

	if (t8 != -9223372036854775751LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x50 = INT16_MIN;
	volatile int16_t x51 = 14227;
	uint64_t x52 = 1LLU;
	uint64_t t9 = 682LLU;

	t9 = ((x49%(x50+x51))+x52);

	if (t9 != 100897LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x53 = 46U;
	int8_t x54 = 3;
	static uint64_t x55 = UINT64_MAX;
	volatile int64_t x56 = INT64_MAX;
	uint64_t t10 = 1139286617809843519LLU;

	t10 = ((x53%(x54+x55))+x56);

	if (t10 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x57 = INT64_MIN;
	volatile int8_t x58 = INT8_MIN;
	int8_t x59 = -1;
	volatile int16_t x60 = INT16_MAX;
	static int64_t t11 = -24686LL;

	t11 = ((x57%(x58+x59))+x60);

	if (t11 != 32639LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x61 = INT16_MIN;
	uint32_t x63 = 618078U;

	t12 = ((x61%(x62+x63))+x64);

	if (t12 != -9223372036854260750LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x66 = 13LLU;
	static int32_t x68 = -510201942;
	volatile uint64_t t13 = 1LLU;

	t13 = ((x65%(x66+x67))+x68);

	if (t13 != 18446744073199349801LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x69 = 628LLU;
	int16_t x70 = INT16_MAX;
	int64_t x72 = INT64_MIN;

	t14 = ((x69%(x70+x71))+x72);

	if (t14 != 9223372036854776436LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x73 = -1;
	static volatile int16_t x74 = INT16_MIN;
	int8_t x75 = -1;
	volatile int32_t t15 = -198437250;

	t15 = ((x73%(x74+x75))+x76);

	if (t15 != 9) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x77 = -1;
	uint8_t x79 = 61U;
	static int16_t x80 = INT16_MAX;
	static volatile uint32_t t16 = 19305U;

	t16 = ((x77%(x78+x79))+x80);

	if (t16 != 32782U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x81 = -1;
	int64_t x83 = INT64_MIN;
	int32_t x84 = INT32_MIN;
	int64_t t17 = -2430LL;

	t17 = ((x81%(x82+x83))+x84);

	if (t17 != -2147483649LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x85 = UINT32_MAX;
	int16_t x86 = -1;
	static int16_t x87 = INT16_MIN;
	uint32_t x88 = 536235U;
	volatile uint32_t t18 = 13557656U;

	t18 = ((x85%(x86+x87))+x88);

	if (t18 != 569003U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x89 = -36;
	volatile int8_t x92 = 17;
	volatile uint64_t t19 = 1117057500773987LLU;

	t19 = ((x89%(x90+x91))+x92);

	if (t19 != 9223372036854775790LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x97 = INT32_MAX;
	static uint64_t x98 = 7939398949LLU;
	uint32_t x99 = 61587176U;
	volatile uint32_t x100 = UINT32_MAX;
	volatile uint64_t t20 = 2477782967492896LLU;

	t20 = ((x97%(x98+x99))+x100);

	if (t20 != 6442450942LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x101 = 2;
	uint32_t x102 = 19530896U;
	int64_t x104 = 151155988131364323LL;
	volatile int64_t t21 = -6LL;

	t21 = ((x101%(x102+x103))+x104);

	if (t21 != 151155988131364325LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x107 = INT16_MAX;
	static int32_t x108 = 6372149;
	static volatile uint64_t t22 = 935434189439091054LLU;

	t22 = ((x105%(x106+x107))+x108);

	if (t22 != 6378709LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x109 = INT32_MIN;
	int16_t x110 = 0;
	int8_t x112 = -1;
	volatile int32_t t23 = 651;

	t23 = ((x109%(x110+x111))+x112);

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x117 = INT8_MAX;
	int64_t x118 = -1LL;
	uint64_t x119 = 265366411LLU;
	static int64_t x120 = -1LL;

	t24 = ((x117%(x118+x119))+x120);

	if (t24 != 126LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x121 = INT8_MIN;
	static volatile int8_t x122 = INT8_MAX;
	uint16_t x123 = 72U;
	int32_t x124 = -1;
	int32_t t25 = -738813551;

	t25 = ((x121%(x122+x123))+x124);

	if (t25 != -129) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x125 = -1LL;
	static uint8_t x126 = 98U;
	volatile uint64_t x127 = UINT64_MAX;
	volatile int64_t x128 = 15LL;
	static uint64_t t26 = 3924067LLU;

	t26 = ((x125%(x126+x127))+x128);

	if (t26 != 75LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x133 = INT32_MAX;
	static int32_t x134 = INT32_MIN;
	int32_t x135 = INT32_MAX;
	int32_t x136 = -1;
	volatile int32_t t27 = -13990280;

	t27 = ((x133%(x134+x135))+x136);

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x137 = INT32_MIN;
	volatile int32_t x138 = INT32_MIN;
	volatile int16_t x139 = INT16_MAX;
	int64_t x140 = INT64_MAX;
	static volatile int64_t t28 = -112990382239776LL;

	t28 = ((x137%(x138+x139))+x140);

	if (t28 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x141 = INT64_MIN;
	int8_t x142 = 0;
	uint32_t x143 = 7U;
	int32_t x144 = 25151;
	static int64_t t29 = -27370448482353LL;

	t29 = ((x141%(x142+x143))+x144);

	if (t29 != 25150LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x146 = -14213209;
	uint16_t x147 = UINT16_MAX;
	static volatile int16_t x148 = -1;
	volatile int32_t t30 = -1553092;

	t30 = ((x145%(x146+x147))+x148);

	if (t30 != 65534) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x149 = UINT32_MAX;
	uint64_t x150 = UINT64_MAX;
	int64_t x151 = INT64_MIN;
	volatile int32_t x152 = -1;
	uint64_t t31 = 3360LLU;

	t31 = ((x149%(x150+x151))+x152);

	if (t31 != 4294967294LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x161 = UINT32_MAX;
	uint32_t x162 = 37172128U;
	int8_t x164 = -1;
	volatile uint32_t t32 = 8310397U;

	t32 = ((x161%(x162+x163))+x164);

	if (t32 != 2110311519U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x165 = INT16_MAX;
	static volatile int16_t x166 = INT16_MAX;
	int32_t x168 = INT32_MIN;

	t33 = ((x165%(x166+x167))+x168);

	if (t33 != -2147450881LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x169 = UINT64_MAX;
	int32_t x171 = -13382430;
	int8_t x172 = -1;
	volatile uint64_t t34 = 24890413881LLU;

	t34 = ((x169%(x170+x171))+x172);

	if (t34 != 104629906LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x174 = 30741153U;
	int32_t x175 = -1;
	int8_t x176 = INT8_MAX;
	static uint32_t t35 = 575353U;

	t35 = ((x173%(x174+x175))+x176);

	if (t35 != 65662U) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x177 = UINT32_MAX;
	uint16_t x178 = UINT16_MAX;
	uint32_t t36 = 28593U;

	t36 = ((x177%(x178+x179))+x180);

	if (t36 != 9U) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x181 = INT8_MIN;
	int8_t x182 = -1;
	int64_t x183 = 1019528577852LL;
	static uint16_t x184 = 1U;

	t37 = ((x181%(x182+x183))+x184);

	if (t37 != -127LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x185 = INT16_MAX;
	uint8_t x186 = 56U;
	int16_t x187 = 0;
	int16_t x188 = INT16_MIN;
	static int32_t t38 = 26;

	t38 = ((x185%(x186+x187))+x188);

	if (t38 != -32761) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x189 = 308LL;
	int64_t x190 = INT64_MIN;
	int32_t x191 = 4668205;
	uint16_t x192 = 35U;

	t39 = ((x189%(x190+x191))+x192);

	if (t39 != 343LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x201 = UINT64_MAX;
	static int16_t x202 = -1;
	int32_t x203 = 73556092;
	static uint64_t x204 = 13002LLU;
	uint64_t t40 = 90625203051167466LLU;

	t40 = ((x201%(x202+x203))+x204);

	if (t40 != 45220683LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x205 = UINT8_MAX;
	static uint64_t x206 = 435854LLU;
	int32_t x207 = INT32_MIN;
	volatile int64_t x208 = INT64_MIN;
	volatile uint64_t t41 = 51845274583LLU;

	t41 = ((x205%(x206+x207))+x208);

	if (t41 != 9223372036854776063LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x209 = INT32_MAX;
	volatile uint32_t x211 = UINT32_MAX;
	uint32_t x212 = UINT32_MAX;
	volatile uint32_t t42 = 130694U;

	t42 = ((x209%(x210+x211))+x212);

	if (t42 != 2147483646U) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x213 = INT64_MAX;
	static int32_t x214 = 2683476;
	uint64_t x215 = 113417135888058859LLU;
	int16_t x216 = INT16_MIN;
	static volatile uint64_t t43 = 8793757577473039834LLU;

	t43 = ((x213%(x214+x215))+x216);

	if (t43 != 36584029704613904LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint8_t x217 = 85U;
	volatile uint8_t x218 = 4U;
	uint8_t x219 = 13U;
	int64_t x220 = -1LL;
	volatile int64_t t44 = 1629438210759LL;

	t44 = ((x217%(x218+x219))+x220);

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x229 = 8327685593123368LLU;
	int64_t x231 = -2352674877561033LL;
	volatile uint64_t t45 = 2902032LLU;

	t45 = ((x229%(x230+x231))+x232);

	if (t45 != 8327683445639720LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x233 = UINT16_MAX;
	int8_t x234 = 3;
	static int8_t x235 = 1;
	volatile int32_t t46 = -372;

	t46 = ((x233%(x234+x235))+x236);

	if (t46 != 2) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x237 = INT64_MIN;
	volatile int32_t x240 = -1;

	t47 = ((x237%(x238+x239))+x240);

	if (t47 != -464LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x241 = INT32_MAX;
	uint16_t x242 = 0U;
	static int16_t x243 = INT16_MAX;
	int64_t x244 = INT64_MIN;
	volatile int64_t t48 = 112753129230960LL;

	t48 = ((x241%(x242+x243))+x244);

	if (t48 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x245 = -2039691351050686166LL;
	uint64_t x247 = UINT64_MAX;
	static int16_t x248 = INT16_MIN;
	uint64_t t49 = 5390739066755348LLU;

	t49 = ((x245%(x246+x247))+x248);

	if (t49 != 7183680685804056875LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x249 = 25;
	int8_t x250 = INT8_MIN;
	uint32_t x251 = 117913454U;
	uint16_t x252 = UINT16_MAX;

	t50 = ((x249%(x250+x251))+x252);

	if (t50 != 65560U) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x253 = INT32_MIN;
	int64_t x256 = -64286858LL;
	uint64_t t51 = 746136546LLU;

	t51 = ((x253%(x254+x255))+x256);

	if (t51 != 18446744073645264759LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x257 = INT16_MAX;
	uint16_t x260 = 719U;

	t52 = ((x257%(x258+x259))+x260);

	if (t52 != 33486LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x262 = INT8_MIN;
	uint32_t x263 = 7U;
	int16_t x264 = INT16_MIN;
	volatile uint64_t t53 = 41667370352270973LLU;

	t53 = ((x261%(x262+x263))+x264);

	if (t53 != 18446744073709533488LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x265 = -70248700LL;
	volatile uint16_t x266 = UINT16_MAX;
	static int32_t x267 = INT32_MIN;
	uint64_t x268 = 5783229011824654LLU;
	uint64_t t54 = 867997923LLU;

	t54 = ((x265%(x266+x267))+x268);

	if (t54 != 5783228941575954LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x269 = 86LL;
	volatile int8_t x270 = INT8_MIN;
	int8_t x271 = -1;
	uint16_t x272 = 14U;
	int64_t t55 = -16186041118804LL;

	t55 = ((x269%(x270+x271))+x272);

	if (t55 != 100LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x273 = -32642522;
	int8_t x275 = 5;
	int16_t x276 = 1;
	int32_t t56 = 20947;

	t56 = ((x273%(x274+x275))+x276);

	if (t56 != -32642521) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x278 = INT16_MAX;
	uint16_t x279 = 2085U;
	uint32_t t57 = 2U;

	t57 = ((x277%(x278+x279))+x280);

	if (t57 != 30196U) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x281 = 997LLU;
	int8_t x282 = INT8_MIN;
	int32_t x283 = 8;
	int8_t x284 = -57;
	static volatile uint64_t t58 = 1656945237400691159LLU;

	t58 = ((x281%(x282+x283))+x284);

	if (t58 != 940LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x285 = -1LL;
	int8_t x286 = -42;
	int64_t x287 = -1LL;
	static int32_t x288 = -103284;
	int64_t t59 = 3432369LL;

	t59 = ((x285%(x286+x287))+x288);

	if (t59 != -103285LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x289 = INT16_MIN;
	static int16_t x290 = -1;
	uint32_t x291 = 131151168U;
	int32_t x292 = INT32_MIN;
	volatile uint32_t t60 = 53624U;

	t60 = ((x289%(x290+x291))+x292);

	if (t60 != 2245580832U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x293 = 24;
	int16_t x295 = -1;
	volatile int64_t x296 = -1LL;

	t61 = ((x293%(x294+x295))+x296);

	if (t61 != 23LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x301 = INT64_MIN;
	int64_t x302 = 3000548256198LL;
	volatile int32_t x303 = -1;
	static uint16_t x304 = UINT16_MAX;

	t62 = ((x301%(x302+x303))+x304);

	if (t62 != -1754872032958LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x308 = INT64_MIN;
	uint64_t t63 = 7292651663LLU;

	t63 = ((x305%(x306+x307))+x308);

	if (t63 != 9223372036854775840LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x309 = 2U;
	uint64_t x310 = 342876186821897LLU;
	int32_t x311 = -116704;
	uint64_t x312 = 16093101049LLU;
	static volatile uint64_t t64 = 4135072561437952186LLU;

	t64 = ((x309%(x310+x311))+x312);

	if (t64 != 16093101051LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x314 = UINT32_MAX;
	int8_t x315 = -1;
	int64_t x316 = -230684511783380629LL;
	int64_t t65 = -1197294411166363652LL;

	t65 = ((x313%(x314+x315))+x316);

	if (t65 != -230684511783380659LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x321 = 115790081149142678LLU;
	int64_t x323 = -6LL;
	volatile int8_t x324 = INT8_MIN;
	uint64_t t66 = 1LLU;

	t66 = ((x321%(x322+x323))+x324);

	if (t66 != 1659LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x325 = 0;
	int64_t x326 = -19208871707LL;
	volatile int64_t x327 = INT64_MAX;
	int64_t x328 = 65335846533155104LL;
	static int64_t t67 = -12847LL;

	t67 = ((x325%(x326+x327))+x328);

	if (t67 != 65335846533155104LL) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int64_t x329 = 139LL;
	volatile uint16_t x330 = UINT16_MAX;
	int8_t x331 = -1;
	int8_t x332 = -1;
	volatile int64_t t68 = 145446992934753184LL;

	t68 = ((x329%(x330+x331))+x332);

	if (t68 != 138LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x333 = 27U;
	uint32_t x334 = 1865163U;
	int64_t x335 = -411LL;
	int8_t x336 = INT8_MIN;

	t69 = ((x333%(x334+x335))+x336);

	if (t69 != -101LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x337 = -1430606631556108LL;
	static uint16_t x338 = 418U;
	uint16_t x339 = 58U;
	int32_t x340 = INT32_MAX;
	static int64_t t70 = -70757948775327693LL;

	t70 = ((x337%(x338+x339))+x340);

	if (t70 != 2147483403LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x341 = -1;
	int64_t x343 = -511974LL;
	int16_t x344 = INT16_MAX;
	int64_t t71 = -11187LL;

	t71 = ((x341%(x342+x343))+x344);

	if (t71 != 32766LL) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint64_t x345 = 184003087405LLU;
	uint64_t x346 = 3924148594639714125LLU;
	volatile uint32_t x348 = UINT32_MAX;
	volatile uint64_t t72 = 17333195965304216LLU;

	t72 = ((x345%(x346+x347))+x348);

	if (t72 != 188298054700LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x349 = 4834;
	int16_t x350 = -1;
	uint64_t x351 = 1504046LLU;
	volatile uint8_t x352 = 2U;
	uint64_t t73 = 17805524117LLU;

	t73 = ((x349%(x350+x351))+x352);

	if (t73 != 4836LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x353 = 0U;
	int16_t x354 = INT16_MIN;
	int8_t x355 = INT8_MIN;
	volatile int32_t t74 = INT32_MAX;

	t74 = ((x353%(x354+x355))+x356);

	if (t74 != INT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x357 = 1;
	int16_t x358 = -1;
	uint32_t x359 = 0U;
	uint32_t x360 = UINT32_MAX;

	t75 = ((x357%(x358+x359))+x360);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x361 = 9U;
	volatile int8_t x362 = INT8_MIN;
	int16_t x363 = 36;
	volatile uint64_t x364 = 10483195LLU;
	static uint64_t t76 = 109460660805175362LLU;

	t76 = ((x361%(x362+x363))+x364);

	if (t76 != 10483204LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x365 = INT64_MAX;
	uint32_t x366 = 405U;
	int8_t x368 = INT8_MIN;

	t77 = ((x365%(x366+x367))+x368);

	if (t77 != 398644959LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x373 = INT64_MIN;
	static uint8_t x375 = UINT8_MAX;
	int8_t x376 = -1;
	uint64_t t78 = 59LLU;

	t78 = ((x373%(x374+x375))+x376);

	if (t78 != 127LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x378 = INT32_MAX;
	volatile int16_t x379 = INT16_MIN;
	int16_t x380 = -1;
	volatile int32_t t79 = -77;

	t79 = ((x377%(x378+x379))+x380);

	if (t79 != -2) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x381 = -485;
	int8_t x382 = -1;
	int16_t x383 = INT16_MIN;
	uint32_t x384 = UINT32_MAX;
	uint32_t t80 = 274794344U;

	t80 = ((x381%(x382+x383))+x384);

	if (t80 != 4294966810U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x385 = 12;
	uint8_t x386 = UINT8_MAX;
	int32_t x387 = INT32_MIN;
	uint32_t x388 = 6082U;
	volatile uint32_t t81 = 4U;

	t81 = ((x385%(x386+x387))+x388);

	if (t81 != 6094U) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x389 = -625;
	int16_t x391 = INT16_MIN;
	static volatile int64_t x392 = 5382310LL;
	volatile int64_t t82 = 87629416146LL;

	t82 = ((x389%(x390+x391))+x392);

	if (t82 != 17739538LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x399 = 131U;
	int16_t x400 = 14676;
	uint64_t t83 = 19265060597241056LLU;

	t83 = ((x397%(x398+x399))+x400);

	if (t83 != 15279LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x402 = UINT8_MAX;
	static uint64_t x404 = 753776445576LLU;
	static volatile uint64_t t84 = 1314690210055LLU;

	t84 = ((x401%(x402+x403))+x404);

	if (t84 != 753776445644LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x405 = 6246;
	uint16_t x406 = UINT16_MAX;
	static volatile uint16_t x407 = UINT16_MAX;
	static uint8_t x408 = 62U;
	volatile int32_t t85 = -190205294;

	t85 = ((x405%(x406+x407))+x408);

	if (t85 != 6308) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x411 = 1571040U;
	int32_t x412 = -20;
	volatile uint32_t t86 = 132025178U;

	t86 = ((x409%(x410+x411))+x412);

	if (t86 != 4294967278U) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint32_t x413 = 385748U;
	int16_t x414 = -1;
	static int32_t x415 = -180342322;
	int64_t x416 = INT64_MIN;

	t87 = ((x413%(x414+x415))+x416);

	if (t87 != -9223372036854390060LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x417 = 57;
	volatile uint64_t t88 = 10385093491LLU;

	t88 = ((x417%(x418+x419))+x420);

	if (t88 != 18446744073709551505LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x421 = INT64_MIN;
	int16_t x422 = -1;
	static int16_t x424 = INT16_MIN;
	static int64_t t89 = -627506565348LL;

	t89 = ((x421%(x422+x423))+x424);

	if (t89 != -32770LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x425 = INT32_MAX;
	volatile int8_t x426 = -18;
	int8_t x427 = 1;
	volatile uint32_t x428 = 1589096U;
	volatile uint32_t t90 = 189338U;

	t90 = ((x425%(x426+x427))+x428);

	if (t90 != 1589104U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x429 = -44294;
	uint8_t x431 = 2U;
	static int32_t t91 = -182;

	t91 = ((x429%(x430+x431))+x432);

	if (t91 != 49) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x433 = -23229193836832194LL;
	int8_t x434 = INT8_MIN;
	uint8_t x435 = UINT8_MAX;
	static uint8_t x436 = UINT8_MAX;
	volatile int64_t t92 = 17421LL;

	t92 = ((x433%(x434+x435))+x436);

	if (t92 != 145LL) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int8_t x437 = 3;
	volatile uint32_t x438 = 93U;
	int64_t x439 = 7100380633649039LL;
	uint64_t x440 = 90831342LLU;
	volatile uint64_t t93 = 4089200591322406427LLU;

	t93 = ((x437%(x438+x439))+x440);

	if (t93 != 90831345LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x441 = -1;
	static uint8_t x444 = 30U;
	volatile uint32_t t94 = 200U;

	t94 = ((x441%(x442+x443))+x444);

	if (t94 != 158U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x449 = -30;
	volatile int16_t x452 = INT16_MIN;

	t95 = ((x449%(x450+x451))+x452);

	if (t95 != 68149423U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x453 = UINT32_MAX;
	volatile int16_t x454 = INT16_MIN;
	int16_t x455 = -1;
	uint8_t x456 = 123U;
	volatile uint32_t t96 = 4755606U;

	t96 = ((x453%(x454+x455))+x456);

	if (t96 != 32891U) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x457 = INT32_MAX;
	uint8_t x458 = UINT8_MAX;
	uint64_t x460 = 49LLU;
	uint64_t t97 = 20732991965582LLU;

	t97 = ((x457%(x458+x459))+x460);

	if (t97 != 56LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x461 = INT32_MIN;
	volatile int8_t x462 = INT8_MAX;
	int32_t x463 = INT32_MIN;
	int16_t x464 = 4;
	int32_t t98 = 1653123;

	t98 = ((x461%(x462+x463))+x464);

	if (t98 != -123) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x466 = INT16_MAX;
	uint16_t x467 = 24U;
	int8_t x468 = INT8_MIN;

	t99 = ((x465%(x466+x467))+x468);

	if (t99 != -1186) { NG(); } else { ; }
	
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

