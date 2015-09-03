#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = -1;
volatile int8_t x6 = -1;
static volatile uint32_t x17 = 6831468U;
uint32_t x19 = 435916U;
int16_t x22 = INT16_MIN;
volatile uint8_t x33 = UINT8_MAX;
int32_t t5 = -1;
int64_t x37 = 247816490196LL;
uint64_t x58 = UINT64_MAX;
int64_t x82 = -1LL;
static uint32_t x85 = 806037546U;
uint8_t x86 = 0U;
uint64_t t15 = 125813451LLU;
volatile uint64_t x96 = 2LLU;
int8_t x102 = 1;
static int8_t x108 = INT8_MIN;
int8_t x114 = -1;
int32_t t20 = 1;
volatile uint64_t x119 = 1844634618113817992LLU;
uint64_t x120 = UINT64_MAX;
volatile uint64_t t21 = 28033335781724LLU;
int32_t x123 = 223352487;
int32_t x127 = INT32_MIN;
int32_t x144 = INT32_MIN;
uint32_t x160 = 456076410U;
int32_t t31 = 5229898;
int8_t x176 = INT8_MIN;
int8_t x201 = -1;
int64_t x210 = INT64_MAX;
int64_t x211 = -1LL;
uint64_t x233 = 549006968768LLU;
int16_t x234 = INT16_MAX;
volatile int32_t t45 = -407860;
int8_t x263 = -1;
int16_t x267 = INT16_MAX;
int16_t x274 = -181;
uint64_t t51 = 163311908LLU;
int32_t x289 = 442193017;
static volatile int32_t x318 = -442;
uint64_t t55 = 314557869246103LLU;
uint64_t x338 = 248795149728LLU;
uint16_t x340 = 2277U;
int32_t x342 = INT32_MIN;
uint64_t x351 = UINT64_MAX;
uint16_t x352 = 1U;
static volatile int16_t x358 = INT16_MAX;
int64_t x359 = -1LL;
uint64_t x363 = UINT64_MAX;
static uint64_t t62 = 2417972688809966LLU;
int8_t x371 = 34;
uint32_t t64 = 331U;
static int64_t x390 = -1LL;
uint64_t t65 = 122LLU;
int16_t x399 = INT16_MIN;
int32_t x406 = 2037757;
uint16_t x407 = 0U;
int8_t x408 = INT8_MIN;
static uint8_t x415 = UINT8_MAX;
uint64_t x416 = UINT64_MAX;
volatile uint64_t t69 = 1077993716372105LLU;
static int8_t x418 = 0;
volatile int64_t x424 = 16LL;
int16_t x427 = INT16_MIN;
int64_t x439 = INT64_MIN;
int8_t x441 = INT8_MIN;
int64_t x442 = -3171796338939189010LL;
int32_t x473 = INT32_MIN;
static uint16_t x484 = 101U;
uint64_t x495 = 56503738LLU;
volatile int64_t x497 = INT64_MAX;
int64_t x510 = INT64_MIN;
volatile int64_t t83 = -338447442LL;
int8_t x516 = -1;
int16_t x517 = -1;
uint8_t x523 = 107U;
static int8_t x524 = 0;
uint64_t x525 = 61095LLU;
volatile uint64_t x529 = UINT64_MAX;
static int64_t x544 = -1LL;
volatile uint32_t x566 = UINT32_MAX;
int32_t x568 = 193971;
uint64_t x571 = UINT64_MAX;
volatile uint64_t t93 = 94951104208LLU;
static int16_t x582 = -1;
int32_t x590 = INT32_MIN;
int8_t x601 = -1;
uint64_t x605 = 436785698768231237LLU;
int8_t x608 = -1;


void f0(void) {
	volatile int64_t x7 = INT64_MIN;
	int32_t x8 = -52743;
	volatile int64_t t0 = -64978060677318LL;

	t0 = ((x5|x6)*(x7-x8));

	if (t0 != 9223372036854723065LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x13 = INT16_MIN;
	uint8_t x14 = 27U;
	int8_t x15 = 5;
	uint8_t x16 = 0U;
	volatile int32_t t1 = -6259589;

	t1 = ((x13|x14)*(x15-x16));

	if (t1 != -163705) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x18 = -1;
	int64_t x20 = -12LL;
	volatile int64_t t2 = -1LL;

	t2 = ((x17|x18)*(x19-x20));

	if (t2 != 1872296502974760LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x21 = -52;
	uint8_t x23 = 38U;
	volatile int32_t x24 = 716158;
	volatile int32_t t3 = 2;

	t3 = ((x21|x22)*(x23-x24));

	if (t3 != 37238240) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x29 = INT64_MAX;
	uint64_t x30 = UINT64_MAX;
	static int32_t x31 = 5837;
	static uint32_t x32 = UINT32_MAX;
	volatile uint64_t t4 = 608809096LLU;

	t4 = ((x29|x30)*(x31-x32));

	if (t4 != 18446744073709545778LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x34 = 7134;
	uint8_t x35 = 14U;
	static uint8_t x36 = 32U;

	t5 = ((x33|x34)*(x35-x36));

	if (t5 != -129006) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x38 = -1;
	uint8_t x39 = 1U;
	static uint32_t x40 = 159268672U;
	volatile int64_t t6 = 78LL;

	t6 = ((x37|x38)*(x39-x40));

	if (t6 != -4135698625LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x45 = UINT32_MAX;
	static int32_t x46 = -1;
	volatile int64_t x47 = -1LL;
	uint16_t x48 = 1232U;
	int64_t t7 = -233009085LL;

	t7 = ((x45|x46)*(x47-x48));

	if (t7 != -5295694674735LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x57 = -31;
	int16_t x59 = -7;
	uint64_t x60 = 29777341165727LLU;
	uint64_t t8 = 59LLU;

	t8 = ((x57|x58)*(x59-x60));

	if (t8 != 29777341165734LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x61 = 28U;
	uint16_t x62 = UINT16_MAX;
	volatile int16_t x63 = -1;
	uint8_t x64 = UINT8_MAX;
	volatile int32_t t9 = -16;

	t9 = ((x61|x62)*(x63-x64));

	if (t9 != -16776960) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x65 = -571;
	uint32_t x66 = 268172U;
	int64_t x67 = 175490312LL;
	static volatile uint8_t x68 = UINT8_MAX;
	static int64_t t10 = -10479193LL;

	t10 = ((x65|x66)*(x67-x68));

	if (t10 != 753724046638182965LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x69 = 91095939550085LL;
	int32_t x70 = 66440;
	uint64_t x71 = UINT64_MAX;
	static int8_t x72 = INT8_MIN;
	volatile uint64_t t11 = 5LLU;

	t11 = ((x69|x70)*(x71-x72));

	if (t11 != 11569184331184883LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x73 = 204U;
	uint8_t x74 = UINT8_MAX;
	volatile int16_t x75 = -1;
	volatile int32_t x76 = -1;
	int32_t t12 = -438;

	t12 = ((x73|x74)*(x75-x76));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x81 = INT64_MIN;
	uint64_t x83 = 2LLU;
	volatile int16_t x84 = 1156;
	static uint64_t t13 = 2546935761135514320LLU;

	t13 = ((x81|x82)*(x83-x84));

	if (t13 != 1154LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x87 = INT16_MAX;
	uint16_t x88 = 6014U;
	volatile uint32_t t14 = 504762992U;

	t14 = ((x85|x86)*(x87-x88));

	if (t14 != 3186642218U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x89 = INT64_MIN;
	uint64_t x90 = 1903375LLU;
	uint8_t x91 = 38U;
	int64_t x92 = 12LL;

	t15 = ((x89|x90)*(x91-x92));

	if (t15 != 49487750LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x93 = 50U;
	volatile uint32_t x94 = UINT32_MAX;
	volatile uint8_t x95 = 11U;
	uint64_t t16 = 1173088LLU;

	t16 = ((x93|x94)*(x95-x96));

	if (t16 != 38654705655LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x101 = UINT32_MAX;
	int16_t x103 = INT16_MAX;
	volatile int16_t x104 = INT16_MIN;
	uint32_t t17 = 16927669U;

	t17 = ((x101|x102)*(x103-x104));

	if (t17 != 4294901761U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x105 = -52;
	uint16_t x106 = UINT16_MAX;
	int8_t x107 = INT8_MAX;
	volatile int32_t t18 = -981;

	t18 = ((x105|x106)*(x107-x108));

	if (t18 != -255) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x109 = INT16_MIN;
	uint32_t x110 = UINT32_MAX;
	int8_t x111 = -1;
	uint32_t x112 = 8141723U;
	static uint32_t t19 = 1953U;

	t19 = ((x109|x110)*(x111-x112));

	if (t19 != 8141724U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x113 = INT32_MIN;
	uint8_t x115 = 124U;
	volatile int32_t x116 = 1;

	t20 = ((x113|x114)*(x115-x116));

	if (t20 != -123) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x117 = -12614546;
	uint32_t x118 = 23418U;

	t21 = ((x117|x118)*(x119-x120));

	if (t21 != 3702068696407089262LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x121 = 3U;
	int16_t x122 = -1;
	uint64_t x124 = 4052534968723LLU;
	volatile uint64_t t22 = 300766459164657398LLU;

	t22 = ((x121|x122)*(x123-x124));

	if (t22 != 4052311616236LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x125 = 1;
	volatile int8_t x126 = 2;
	int64_t x128 = 2036214443LL;
	volatile int64_t t23 = -2528533707529LL;

	t23 = ((x125|x126)*(x127-x128));

	if (t23 != -12551094273LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x133 = UINT16_MAX;
	int32_t x134 = INT32_MIN;
	volatile uint32_t x135 = 49904827U;
	int16_t x136 = INT16_MIN;
	static uint32_t t24 = 470U;

	t24 = ((x133|x134)*(x135-x136));

	if (t24 != 2042692421U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x137 = INT16_MAX;
	volatile uint16_t x138 = 1U;
	int8_t x139 = INT8_MAX;
	int16_t x140 = INT16_MAX;
	int32_t t25 = -118497846;

	t25 = ((x137|x138)*(x139-x140));

	if (t25 != -1069514880) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x141 = INT64_MAX;
	int32_t x142 = -1;
	int16_t x143 = -1;
	static volatile int64_t t26 = 87420603355944893LL;

	t26 = ((x141|x142)*(x143-x144));

	if (t26 != -2147483647LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x145 = 619641U;
	static uint16_t x146 = 82U;
	static int32_t x147 = -2;
	uint32_t x148 = 448U;
	uint32_t t27 = 0U;

	t27 = ((x145|x146)*(x147-x148));

	if (t27 != 4016127946U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x149 = -64;
	int32_t x150 = -1;
	volatile int16_t x151 = INT16_MIN;
	static uint16_t x152 = 1U;
	volatile int32_t t28 = -12;

	t28 = ((x149|x150)*(x151-x152));

	if (t28 != 32769) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint8_t x157 = UINT8_MAX;
	uint32_t x158 = 245047392U;
	int64_t x159 = -7187162372LL;
	int64_t t29 = -5809516512591LL;

	t29 = ((x157|x158)*(x159-x160));

	if (t29 != -1872956945237322882LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x161 = UINT16_MAX;
	static uint64_t x162 = 19531409157949LLU;
	static int8_t x163 = 1;
	uint64_t x164 = 38015003856742LLU;
	static volatile uint64_t t30 = 0LLU;

	t30 = ((x161|x162)*(x163-x164));

	if (t30 != 18179372356057960293LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x165 = INT8_MIN;
	int8_t x166 = -1;
	int8_t x167 = -1;
	volatile uint8_t x168 = 1U;

	t31 = ((x165|x166)*(x167-x168));

	if (t31 != 2) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x169 = 1820649U;
	int32_t x170 = INT32_MAX;
	uint8_t x171 = UINT8_MAX;
	int8_t x172 = INT8_MIN;
	uint32_t t32 = 3352879U;

	t32 = ((x169|x170)*(x171-x172));

	if (t32 != 2147483265U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x173 = INT8_MAX;
	static uint64_t x174 = UINT64_MAX;
	static int32_t x175 = 21;
	volatile uint64_t t33 = 504457LLU;

	t33 = ((x173|x174)*(x175-x176));

	if (t33 != 18446744073709551467LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x177 = -3;
	int64_t x178 = INT64_MAX;
	static uint32_t x179 = 1256U;
	int32_t x180 = INT32_MAX;
	int64_t t34 = 22828203154LL;

	t34 = ((x177|x178)*(x179-x180));

	if (t34 != -2147484905LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x185 = 4962U;
	static uint8_t x186 = 0U;
	uint8_t x187 = 25U;
	uint32_t x188 = 10201U;
	volatile uint32_t t35 = 17972U;

	t35 = ((x185|x186)*(x187-x188));

	if (t35 != 4244473984U) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x193 = -3471975526257LL;
	volatile int64_t x194 = -29821746363LL;
	static volatile uint32_t x195 = 10865U;
	volatile int8_t x196 = INT8_MIN;
	int64_t t36 = 10333LL;

	t36 = ((x193|x194)*(x195-x196));

	if (t36 != -17983678948385LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x197 = -1;
	uint8_t x198 = 15U;
	static int64_t x199 = -1LL;
	int8_t x200 = 24;
	static volatile int64_t t37 = 118123207806697230LL;

	t37 = ((x197|x198)*(x199-x200));

	if (t37 != 25LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x202 = INT64_MAX;
	int16_t x203 = 2;
	static int16_t x204 = INT16_MIN;
	volatile int64_t t38 = -73021882LL;

	t38 = ((x201|x202)*(x203-x204));

	if (t38 != -32770LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x205 = -1;
	volatile int32_t x206 = INT32_MIN;
	uint64_t x207 = 204082LLU;
	int32_t x208 = 192498629;
	volatile uint64_t t39 = 33949895LLU;

	t39 = ((x205|x206)*(x207-x208));

	if (t39 != 192294547LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x209 = 11U;
	static uint64_t x212 = 2272323889LLU;
	static volatile uint64_t t40 = 6836LLU;

	t40 = ((x209|x210)*(x211-x212));

	if (t40 != 2272323890LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x225 = 1633064287601LLU;
	static int64_t x226 = INT64_MAX;
	int32_t x227 = -1;
	volatile uint8_t x228 = UINT8_MAX;
	uint64_t t41 = 22LLU;

	t41 = ((x225|x226)*(x227-x228));

	if (t41 != 256LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x235 = INT64_MIN;
	volatile int32_t x236 = INT32_MIN;
	uint64_t t42 = 8987LLU;

	t42 = ((x233|x234)*(x235-x236));

	if (t42 != 7615305492759314432LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x237 = UINT32_MAX;
	static uint64_t x238 = 195225LLU;
	uint32_t x239 = UINT32_MAX;
	static uint64_t x240 = 237472404LLU;
	volatile uint64_t t43 = 869LLU;

	t43 = ((x237|x238)*(x239-x240));

	if (t43 != 17426807856474589845LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x241 = INT32_MIN;
	uint64_t x242 = 12128LLU;
	uint16_t x243 = 2198U;
	int32_t x244 = INT32_MAX;
	volatile uint64_t t44 = 1547621499LLU;

	t44 = ((x241|x242)*(x243-x244));

	if (t44 != 4611655251455832480LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x245 = 1;
	int8_t x246 = INT8_MIN;
	int8_t x247 = -4;
	int32_t x248 = -3391585;

	t45 = ((x245|x246)*(x247-x248));

	if (t45 != -430730787) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x257 = -1;
	int16_t x258 = -1;
	static uint16_t x259 = 1152U;
	uint32_t x260 = 913784U;
	uint32_t t46 = 112U;

	t46 = ((x257|x258)*(x259-x260));

	if (t46 != 912632U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x261 = -1LL;
	static uint64_t x262 = UINT64_MAX;
	uint32_t x264 = 1U;
	uint64_t t47 = 81846604760621LLU;

	t47 = ((x261|x262)*(x263-x264));

	if (t47 != 18446744069414584322LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x265 = INT8_MAX;
	int8_t x266 = -1;
	int8_t x268 = -8;
	int32_t t48 = 87;

	t48 = ((x265|x266)*(x267-x268));

	if (t48 != -32775) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x273 = 5566;
	uint8_t x275 = UINT8_MAX;
	int8_t x276 = -3;
	static volatile int32_t t49 = 0;

	t49 = ((x273|x274)*(x275-x276));

	if (t49 != -258) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x277 = UINT32_MAX;
	uint32_t x278 = 0U;
	int8_t x279 = INT8_MIN;
	uint32_t x280 = UINT32_MAX;
	volatile uint32_t t50 = 15753744U;

	t50 = ((x277|x278)*(x279-x280));

	if (t50 != 127U) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x285 = UINT64_MAX;
	static volatile int16_t x286 = -7904;
	static int8_t x287 = INT8_MAX;
	static volatile int64_t x288 = -1LL;

	t51 = ((x285|x286)*(x287-x288));

	if (t51 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x290 = INT16_MIN;
	int8_t x291 = INT8_MAX;
	int16_t x292 = INT16_MIN;
	int32_t t52 = -30383;

	t52 = ((x289|x290)*(x291-x292));

	if (t52 != -366548985) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x305 = 109U;
	uint64_t x306 = UINT64_MAX;
	int8_t x307 = 3;
	int16_t x308 = INT16_MIN;
	uint64_t t53 = 290576116525190027LLU;

	t53 = ((x305|x306)*(x307-x308));

	if (t53 != 18446744073709518845LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x309 = -1LL;
	int32_t x310 = INT32_MIN;
	volatile int8_t x311 = -1;
	static uint32_t x312 = 22U;
	static volatile int64_t t54 = -20528226010LL;

	t54 = ((x309|x310)*(x311-x312));

	if (t54 != -4294967273LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x317 = 843U;
	uint64_t x319 = 253905235023416488LLU;
	int64_t x320 = INT64_MIN;

	t55 = ((x317|x318)*(x319-x320));

	if (t55 != 1175633585129160664LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x325 = INT8_MAX;
	int32_t x326 = 41933;
	volatile int16_t x327 = INT16_MIN;
	volatile uint32_t x328 = 3799004U;
	volatile uint32_t t56 = 454467377U;

	t56 = ((x325|x326)*(x327-x328));

	if (t56 != 2339473372U) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int16_t x329 = INT16_MIN;
	int8_t x330 = -1;
	int16_t x331 = INT16_MAX;
	int16_t x332 = INT16_MIN;
	static volatile int32_t t57 = 1269;

	t57 = ((x329|x330)*(x331-x332));

	if (t57 != -65535) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x337 = 6U;
	int32_t x339 = -622757147;
	uint64_t t58 = 100074377LLU;

	t58 = ((x337|x338)*(x339-x340));

	if (t58 != 11081172521046371328LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x341 = -1;
	int16_t x343 = INT16_MIN;
	int16_t x344 = -1;
	int32_t t59 = 76920;

	t59 = ((x341|x342)*(x343-x344));

	if (t59 != 32767) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x349 = 2057022;
	volatile uint32_t x350 = 2258408U;
	uint64_t t60 = 3041123116550LLU;

	t60 = ((x349|x350)*(x351-x352));

	if (t60 != 18446744073701232644LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x357 = -1;
	int64_t x360 = -42996707424LL;
	static volatile int64_t t61 = 306567728LL;

	t61 = ((x357|x358)*(x359-x360));

	if (t61 != -42996707423LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x361 = -3LL;
	uint64_t x362 = 1334577682847657LLU;
	int8_t x364 = INT8_MIN;

	t62 = ((x361|x362)*(x363-x364));

	if (t62 != 18446744073709551235LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x365 = INT8_MIN;
	static volatile uint64_t x366 = UINT64_MAX;
	int64_t x367 = 13LL;
	volatile int16_t x368 = -1727;
	uint64_t t63 = 2049244994272071LLU;

	t63 = ((x365|x366)*(x367-x368));

	if (t63 != 18446744073709549876LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x369 = 15956U;
	static int16_t x370 = -1;
	volatile uint32_t x372 = 9246U;

	t64 = ((x369|x370)*(x371-x372));

	if (t64 != 9212U) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x389 = UINT32_MAX;
	static volatile uint64_t x391 = 4LLU;
	static int8_t x392 = INT8_MAX;

	t65 = ((x389|x390)*(x391-x392));

	if (t65 != 123LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x393 = UINT32_MAX;
	static volatile int32_t x394 = 6305;
	uint64_t x395 = 1421LLU;
	uint64_t x396 = 4LLU;
	uint64_t t66 = 53532LLU;

	t66 = ((x393|x394)*(x395-x396));

	if (t66 != 6085968657015LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int32_t x397 = INT32_MIN;
	volatile int8_t x398 = -1;
	static volatile int16_t x400 = -7;
	volatile int32_t t67 = 14377;

	t67 = ((x397|x398)*(x399-x400));

	if (t67 != 32761) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x405 = INT16_MAX;
	static int32_t t68 = -442;

	t68 = ((x405|x406)*(x407-x408));

	if (t68 != 264241024) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x413 = 907U;
	int32_t x414 = INT32_MAX;

	t69 = ((x413|x414)*(x415-x416));

	if (t69 != 549755813632LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x417 = -1;
	static volatile int32_t x419 = INT32_MAX;
	static uint64_t x420 = 985LLU;
	volatile uint64_t t70 = 122364896218004758LLU;

	t70 = ((x417|x418)*(x419-x420));

	if (t70 != 18446744071562068954LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x421 = -2;
	int16_t x422 = 1;
	uint64_t x423 = 79490024525856418LLU;
	volatile uint64_t t71 = 299992694044640LLU;

	t71 = ((x421|x422)*(x423-x424));

	if (t71 != 18367254049183695214LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x425 = 13U;
	int16_t x426 = INT16_MIN;
	int8_t x428 = 6;
	volatile int32_t t72 = -28;

	t72 = ((x425|x426)*(x427-x428));

	if (t72 != 1073512370) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x429 = -212139955201746LL;
	int32_t x430 = INT32_MAX;
	volatile int64_t x431 = -1LL;
	uint16_t x432 = 4U;
	static volatile int64_t t73 = -16441373916740062LL;

	t73 = ((x429|x430)*(x431-x432));

	if (t73 != 1060695860838405LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x437 = INT64_MIN;
	int8_t x438 = INT8_MIN;
	uint64_t x440 = 6795LLU;
	volatile uint64_t t74 = 255LLU;

	t74 = ((x437|x438)*(x439-x440));

	if (t74 != 869760LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x443 = 9;
	volatile uint8_t x444 = 5U;
	volatile int64_t t75 = 163871267479019664LL;

	t75 = ((x441|x442)*(x443-x444));

	if (t75 != -72LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x469 = -12626;
	int32_t x470 = INT32_MIN;
	uint32_t x471 = 264U;
	static int16_t x472 = -11463;
	static uint32_t t76 = 0U;

	t76 = ((x469|x470)*(x471-x472));

	if (t76 != 4146902194U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x474 = INT8_MIN;
	int16_t x475 = INT16_MAX;
	int64_t x476 = -1LL;
	static volatile int64_t t77 = -844485314663LL;

	t77 = ((x473|x474)*(x475-x476));

	if (t77 != -4194304LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x481 = INT64_MIN;
	volatile int32_t x482 = -1;
	volatile uint64_t x483 = 1704554LLU;
	static uint64_t t78 = 2359LLU;

	t78 = ((x481|x482)*(x483-x484));

	if (t78 != 18446744073707847163LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x493 = UINT16_MAX;
	int64_t x494 = INT64_MIN;
	uint8_t x496 = 19U;
	uint64_t t79 = 242908743036413LLU;

	t79 = ((x493|x494)*(x495-x496));

	if (t79 != 9223375739826000473LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x498 = UINT64_MAX;
	int64_t x499 = -1LL;
	static uint8_t x500 = 1U;
	uint64_t t80 = 545201301LLU;

	t80 = ((x497|x498)*(x499-x500));

	if (t80 != 2LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x501 = 3996788118LL;
	uint8_t x502 = 13U;
	int32_t x503 = -1;
	uint16_t x504 = 3704U;
	int64_t t81 = 363433702738251LL;

	t81 = ((x501|x502)*(x503-x504));

	if (t81 != -14808100010535LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x505 = 8U;
	int64_t x506 = -1LL;
	static uint8_t x507 = 6U;
	volatile int8_t x508 = INT8_MIN;
	int64_t t82 = 71740616588768483LL;

	t82 = ((x505|x506)*(x507-x508));

	if (t82 != -134LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x509 = INT16_MIN;
	int64_t x511 = -1LL;
	int32_t x512 = 16;

	t83 = ((x509|x510)*(x511-x512));

	if (t83 != 557056LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x513 = -1;
	static int8_t x514 = -1;
	static int16_t x515 = -1;
	int32_t t84 = 54190419;

	t84 = ((x513|x514)*(x515-x516));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x518 = -1LL;
	static uint32_t x519 = 811063U;
	static uint64_t x520 = 38311LLU;
	uint64_t t85 = 23602LLU;

	t85 = ((x517|x518)*(x519-x520));

	if (t85 != 18446744073708778864LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x521 = INT8_MAX;
	int64_t x522 = -1LL;
	static volatile int64_t t86 = 2LL;

	t86 = ((x521|x522)*(x523-x524));

	if (t86 != -107LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x526 = -1;
	volatile uint64_t x527 = UINT64_MAX;
	static int16_t x528 = INT16_MIN;
	uint64_t t87 = 2486150982472LLU;

	t87 = ((x525|x526)*(x527-x528));

	if (t87 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x530 = 3250U;
	static uint16_t x531 = 313U;
	volatile int32_t x532 = 16;
	volatile uint64_t t88 = 12LLU;

	t88 = ((x529|x530)*(x531-x532));

	if (t88 != 18446744073709551319LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x541 = -1;
	static int8_t x542 = 4;
	int8_t x543 = INT8_MIN;
	int64_t t89 = -3210475401049LL;

	t89 = ((x541|x542)*(x543-x544));

	if (t89 != 127LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x549 = 13U;
	volatile int32_t x550 = -1006700;
	int8_t x551 = -1;
	uint16_t x552 = 86U;
	volatile uint32_t t90 = 118U;

	t90 = ((x549|x550)*(x551-x552));

	if (t90 != 87582117U) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x557 = INT16_MIN;
	uint8_t x558 = UINT8_MAX;
	static uint32_t x559 = UINT32_MAX;
	int8_t x560 = 0;
	volatile uint32_t t91 = 8827227U;

	t91 = ((x557|x558)*(x559-x560));

	if (t91 != 32513U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x565 = 4619;
	int16_t x567 = INT16_MAX;
	static volatile uint32_t t92 = 58090U;

	t92 = ((x565|x566)*(x567-x568));

	if (t92 != 161204U) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x569 = UINT8_MAX;
	int16_t x570 = INT16_MIN;
	volatile int32_t x572 = -281596;

	t93 = ((x569|x570)*(x571-x572));

	if (t93 != 18446744064554053381LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x581 = INT8_MIN;
	uint16_t x583 = 3U;
	volatile uint32_t x584 = UINT32_MAX;
	static uint32_t t94 = 172U;

	t94 = ((x581|x582)*(x583-x584));

	if (t94 != 4294967292U) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int32_t x585 = INT32_MIN;
	static volatile uint8_t x586 = 15U;
	uint16_t x587 = 1U;
	uint64_t x588 = 14729LLU;
	volatile uint64_t t95 = 620007135LLU;

	t95 = ((x585|x586)*(x587-x588));

	if (t95 != 31628138946824LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x589 = 184865716LL;
	static int8_t x591 = INT8_MIN;
	int64_t x592 = -1LL;
	static int64_t t96 = 0LL;

	t96 = ((x589|x590)*(x591-x592));

	if (t96 != 249252477364LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x597 = 81U;
	int64_t x598 = INT64_MIN;
	uint64_t x599 = UINT64_MAX;
	int16_t x600 = 211;
	volatile uint64_t t97 = 173312091744222LLU;

	t97 = ((x597|x598)*(x599-x600));

	if (t97 != 18446744073709534444LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x602 = UINT64_MAX;
	volatile int16_t x603 = -17;
	int32_t x604 = -1;
	volatile uint64_t t98 = 471881734605120412LLU;

	t98 = ((x601|x602)*(x603-x604));

	if (t98 != 16LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x606 = 0;
	static uint64_t x607 = 60886629880466720LLU;
	volatile uint64_t t99 = 270LLU;

	t99 = ((x605|x606)*(x607-x608));

	if (t99 != 13047318053756175589LLU) { NG(); } else { ; }
	
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

