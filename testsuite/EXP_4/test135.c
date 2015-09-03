#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = -1;
int8_t x30 = INT8_MAX;
volatile int64_t t5 = -1258781228637LL;
int32_t x37 = INT32_MAX;
int16_t x46 = INT16_MAX;
static volatile int32_t t8 = 507523;
static uint32_t t9 = 1429119266U;
static volatile uint32_t x62 = UINT32_MAX;
int8_t x64 = 29;
volatile int64_t t10 = 2442626040944450414LL;
static int64_t x74 = -1LL;
volatile uint32_t x77 = 1707U;
uint8_t x81 = 20U;
uint64_t x86 = UINT64_MAX;
int32_t x94 = -45;
volatile uint16_t x95 = UINT16_MAX;
volatile int16_t x100 = -1;
int32_t x110 = INT32_MIN;
volatile int32_t x112 = -11757;
int32_t x137 = INT32_MIN;
int64_t t24 = -52635564LL;
uint8_t x161 = UINT8_MAX;
int8_t x181 = 1;
int64_t t31 = 0LL;
static uint64_t t33 = 14LLU;
static volatile uint16_t x195 = 0U;
volatile int64_t t34 = -12LL;
static volatile uint32_t x201 = UINT32_MAX;
volatile int32_t x205 = 1;
uint32_t x211 = 562596U;
static uint32_t x221 = 106286U;
volatile int32_t x223 = 62057;
volatile int8_t x227 = -1;
int32_t t40 = -1671;
int32_t x230 = -1;
int64_t x234 = 1LL;
int16_t x243 = 0;
int8_t x245 = INT8_MAX;
static uint64_t x246 = 1806097266043843214LLU;
int64_t t46 = 321827240008609LL;
uint16_t x261 = 2U;
static int32_t x271 = INT32_MAX;
volatile int64_t t51 = 4481032744LL;
static int8_t x278 = 9;
int32_t x284 = INT32_MIN;
int64_t t53 = 1LL;
volatile uint16_t x286 = 3715U;
int64_t t54 = 39555354596068022LL;
int16_t x295 = INT16_MAX;
uint64_t x299 = 3LLU;
int64_t x309 = INT64_MIN;
volatile uint32_t x312 = 801103694U;
static volatile int32_t x327 = -1;
uint64_t x330 = UINT64_MAX;
static int8_t x334 = -2;
int32_t x340 = 7;
int64_t t66 = 1194763787921386LL;
int32_t x345 = INT32_MIN;
uint16_t x348 = 8U;
int64_t t68 = -282077956325LL;
int8_t x350 = INT8_MAX;
int16_t x351 = INT16_MIN;
static int16_t x358 = -1;
int64_t x364 = -1LL;
int64_t t73 = 479199323708185869LL;
static int64_t x380 = INT64_MAX;
uint32_t x389 = UINT32_MAX;
volatile int16_t x391 = 355;
uint8_t x393 = 2U;
volatile int32_t x398 = -2283;
volatile int64_t x412 = -89LL;
uint32_t x416 = 2317218U;
volatile int8_t x418 = INT8_MIN;
static volatile int64_t x423 = -1LL;
volatile int64_t t84 = 14584924027421LL;
uint32_t x432 = 919U;
uint32_t t85 = 3712U;
int32_t x444 = INT32_MIN;
static uint64_t x448 = 69346614LLU;
static volatile uint8_t x459 = 1U;
uint64_t x469 = 13425952095LLU;
int32_t x485 = INT32_MIN;
int64_t x489 = -2819403045469827LL;
static int8_t x491 = INT8_MIN;
uint16_t x496 = 12U;
volatile uint64_t t97 = 1774381854177016833LLU;
int64_t x507 = INT64_MIN;
int64_t x509 = INT64_MIN;


void f0(void) {
	static int64_t x1 = -1LL;
	int8_t x2 = -5;
	uint16_t x3 = 972U;
	volatile int64_t t0 = 155LL;

	t0 = (x1%(x2&(x3+x4)));

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 1115614052521983545LL;
	volatile int16_t x6 = INT16_MIN;
	int64_t x7 = 169324613185631LL;
	static volatile uint64_t x8 = 5898813838LLU;
	uint64_t t1 = 7594LLU;

	t1 = (x5%(x6&(x7+x8)));

	if (t1 != 64639661620793LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x13 = -51;
	volatile int32_t x14 = 1;
	int16_t x15 = -1931;
	int16_t x16 = INT16_MIN;
	int32_t t2 = 5050;

	t2 = (x13%(x14&(x15+x16)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x25 = -1;
	int64_t x26 = 35LL;
	int64_t x27 = 8180211LL;
	int32_t x28 = -7214;
	volatile int64_t t3 = -972133112LL;

	t3 = (x25%(x26&(x27+x28)));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x29 = INT8_MIN;
	static int16_t x31 = INT16_MAX;
	int32_t x32 = INT32_MIN;
	volatile int32_t t4 = 106881;

	t4 = (x29%(x30&(x31+x32)));

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x33 = INT16_MAX;
	int16_t x34 = INT16_MIN;
	uint8_t x35 = 1U;
	volatile int64_t x36 = INT64_MIN;

	t5 = (x33%(x34&(x35+x36)));

	if (t5 != 32767LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x38 = 36U;
	uint32_t x39 = 27671188U;
	int8_t x40 = INT8_MIN;
	uint32_t t6 = 299U;

	t6 = (x37%(x38&(x39+x40)));

	if (t6 != 3U) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x41 = 60889775408LLU;
	int32_t x42 = -1;
	uint64_t x43 = 134001564433LLU;
	static uint64_t x44 = 1059049564386441LLU;
	static volatile uint64_t t7 = 180014431754028LLU;

	t7 = (x41%(x42&(x43+x44)));

	if (t7 != 60889775408LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x45 = INT16_MAX;
	volatile int16_t x47 = -1;
	volatile int8_t x48 = INT8_MIN;

	t8 = (x45%(x46&(x47+x48)));

	if (t8 != 128) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x49 = 943929492U;
	uint32_t x50 = 173161U;
	int32_t x51 = -1;
	int32_t x52 = -1;

	t9 = (x49%(x50&(x51+x52)));

	if (t9 != 34332U) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x61 = INT64_MIN;
	uint16_t x63 = 317U;

	t10 = (x61%(x62&(x63+x64)));

	if (t10 != -110LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x65 = INT64_MIN;
	uint16_t x66 = 30U;
	int32_t x67 = INT32_MIN;
	static int8_t x68 = INT8_MAX;
	int64_t t11 = -31003642716158455LL;

	t11 = (x65%(x66&(x67+x68)));

	if (t11 != -8LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x73 = -887049757862893LL;
	int64_t x75 = -1LL;
	static int32_t x76 = INT32_MAX;
	int64_t t12 = -8569684511222655LL;

	t12 = (x73%(x74&(x75+x76)));

	if (t12 != -1573111549LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x78 = INT16_MAX;
	int64_t x79 = -1LL;
	volatile uint8_t x80 = 2U;
	volatile int64_t t13 = -46175402LL;

	t13 = (x77%(x78&(x79+x80)));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x82 = INT32_MIN;
	int32_t x83 = INT32_MIN;
	int32_t x84 = 51771754;
	volatile int32_t t14 = -123550431;

	t14 = (x81%(x82&(x83+x84)));

	if (t14 != 20) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x85 = INT32_MIN;
	volatile uint64_t x87 = 1LLU;
	volatile uint64_t x88 = 479170552022573LLU;
	uint64_t t15 = 2LLU;

	t15 = (x85%(x86&(x87+x88)));

	if (t15 != 115330349036690LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x89 = INT8_MIN;
	static int16_t x90 = -1;
	volatile int64_t x91 = INT64_MIN;
	static int16_t x92 = INT16_MAX;
	volatile int64_t t16 = -374LL;

	t16 = (x89%(x90&(x91+x92)));

	if (t16 != -128LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x93 = -27152333364LL;
	int32_t x96 = -204926;
	int64_t t17 = -196335419176899LL;

	t17 = (x93%(x94&(x95+x96)));

	if (t17 != -81692LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x97 = INT8_MAX;
	int32_t x98 = -1;
	static int8_t x99 = -1;
	static volatile int32_t t18 = 18219325;

	t18 = (x97%(x98&(x99+x100)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x109 = INT32_MIN;
	int8_t x111 = -1;
	int32_t t19 = -10;

	t19 = (x109%(x110&(x111+x112)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x117 = 16376LL;
	int32_t x118 = -1;
	int32_t x119 = INT32_MAX;
	int16_t x120 = -1;
	static int64_t t20 = 2575148LL;

	t20 = (x117%(x118&(x119+x120)));

	if (t20 != 16376LL) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint32_t x125 = 2U;
	static int32_t x126 = -1;
	int8_t x127 = -1;
	volatile int16_t x128 = INT16_MIN;
	uint32_t t21 = 582621U;

	t21 = (x125%(x126&(x127+x128)));

	if (t21 != 2U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x129 = INT32_MIN;
	uint64_t x130 = 81639988LLU;
	int16_t x131 = INT16_MIN;
	static uint32_t x132 = 6884513U;
	volatile uint64_t t22 = 1LLU;

	t22 = (x129%(x130&(x131+x132)));

	if (t22 != 3233408LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x133 = 48183409753816LLU;
	static int8_t x134 = INT8_MIN;
	int32_t x135 = -1;
	static uint64_t x136 = 988562308520LLU;
	volatile uint64_t t23 = 3078487828LLU;

	t23 = (x133%(x134&(x135+x136)));

	if (t23 != 732418946776LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int32_t x138 = INT32_MAX;
	int64_t x139 = INT64_MIN;
	int8_t x140 = INT8_MAX;

	t24 = (x137%(x138&(x139+x140)));

	if (t24 != -8LL) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint16_t x145 = 13433U;
	int64_t x146 = -1LL;
	int32_t x147 = INT32_MIN;
	uint16_t x148 = 13U;
	int64_t t25 = 75786045754672LL;

	t25 = (x145%(x146&(x147+x148)));

	if (t25 != 13433LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x149 = INT16_MAX;
	volatile int32_t x150 = INT32_MIN;
	int16_t x151 = -1;
	uint32_t x152 = UINT32_MAX;
	uint32_t t26 = 62739988U;

	t26 = (x149%(x150&(x151+x152)));

	if (t26 != 32767U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x153 = -1LL;
	int16_t x154 = INT16_MIN;
	int16_t x155 = -1;
	uint64_t x156 = 56871LLU;
	static uint64_t t27 = 464433798503873LLU;

	t27 = (x153%(x154&(x155+x156)));

	if (t27 != 32767LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x162 = INT16_MIN;
	int32_t x163 = -226004402;
	uint32_t x164 = 1591204382U;
	static volatile uint32_t t28 = 1U;

	t28 = (x161%(x162&(x163+x164)));

	if (t28 != 255U) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x173 = 4946983U;
	uint32_t x174 = 773878U;
	int16_t x175 = -1;
	int16_t x176 = INT16_MAX;
	volatile uint32_t t29 = 10U;

	t29 = (x173%(x174&(x175+x176)));

	if (t29 != 14767U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x177 = 7860588;
	static volatile int64_t x178 = INT64_MAX;
	static uint8_t x179 = UINT8_MAX;
	volatile int16_t x180 = INT16_MAX;
	volatile int64_t t30 = -215459357596LL;

	t30 = (x177%(x178&(x179+x180)));

	if (t30 != 1352LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x182 = UINT8_MAX;
	int16_t x183 = -1;
	volatile int64_t x184 = INT64_MAX;

	t31 = (x181%(x182&(x183+x184)));

	if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x185 = -1;
	int32_t x186 = -1038135;
	volatile int8_t x187 = INT8_MIN;
	int64_t x188 = INT64_MAX;
	static int64_t t32 = -9626517173327051LL;

	t32 = (x185%(x186&(x187+x188)));

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x189 = INT8_MAX;
	volatile uint64_t x190 = UINT64_MAX;
	uint64_t x191 = UINT64_MAX;
	int8_t x192 = -1;

	t33 = (x189%(x190&(x191+x192)));

	if (t33 != 127LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x193 = 0;
	int8_t x194 = -1;
	int64_t x196 = INT64_MIN;

	t34 = (x193%(x194&(x195+x196)));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x202 = 46U;
	int16_t x203 = INT16_MIN;
	int8_t x204 = INT8_MAX;
	volatile uint32_t t35 = 0U;

	t35 = (x201%(x202&(x203+x204)));

	if (t35 != 11U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x206 = INT64_MIN;
	int64_t x207 = -1LL;
	volatile int64_t x208 = -1LL;
	volatile int64_t t36 = -54211753796277104LL;

	t36 = (x205%(x206&(x207+x208)));

	if (t36 != 1LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x209 = 2023293811502LLU;
	static int16_t x210 = INT16_MIN;
	static uint64_t x212 = 9475159779700LLU;
	static volatile uint64_t t37 = 8475253943028691LLU;

	t37 = (x209%(x210&(x211+x212)));

	if (t37 != 2023293811502LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x213 = UINT8_MAX;
	int8_t x214 = -1;
	int8_t x215 = INT8_MAX;
	int16_t x216 = INT16_MIN;
	int32_t t38 = 9562;

	t38 = (x213%(x214&(x215+x216)));

	if (t38 != 255) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x222 = INT64_MAX;
	uint16_t x224 = UINT16_MAX;
	static int64_t t39 = 90644LL;

	t39 = (x221%(x222&(x223+x224)));

	if (t39 != 106286LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x225 = INT16_MIN;
	int8_t x226 = -15;
	int16_t x228 = INT16_MIN;

	t40 = (x225%(x226&(x227+x228)));

	if (t40 != -32768) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x229 = INT8_MAX;
	int32_t x231 = 5;
	volatile int64_t x232 = -1LL;
	volatile int64_t t41 = -45LL;

	t41 = (x229%(x230&(x231+x232)));

	if (t41 != 3LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x233 = -1LL;
	int8_t x235 = INT8_MAX;
	uint64_t x236 = 660796492528752LLU;
	volatile uint64_t t42 = 13791LLU;

	t42 = (x233%(x234&(x235+x236)));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x241 = UINT64_MAX;
	int32_t x242 = INT32_MIN;
	int64_t x244 = 509326819343346LL;
	volatile uint64_t t43 = 66512765614341LLU;

	t43 = (x241%(x242&(x243+x244)));

	if (t43 != 6180457938943LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int64_t x247 = INT64_MAX;
	int64_t x248 = -1514257789LL;
	uint64_t t44 = 810LLU;

	t44 = (x245%(x246&(x247+x248)));

	if (t44 != 127LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x249 = -1LL;
	static int8_t x250 = -1;
	int64_t x251 = INT64_MAX;
	uint64_t x252 = 11LLU;
	static uint64_t t45 = 6966182LLU;

	t45 = (x249%(x250&(x251+x252)));

	if (t45 != 9223372036854775797LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x253 = -1LL;
	int16_t x254 = -50;
	static int64_t x255 = -2110355894219LL;
	int32_t x256 = -1;

	t46 = (x253%(x254&(x255+x256)));

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x257 = 27027971LLU;
	static volatile int32_t x258 = INT32_MAX;
	uint32_t x259 = UINT32_MAX;
	uint64_t x260 = 46LLU;
	volatile uint64_t t47 = 1466468045021048LLU;

	t47 = (x257%(x258&(x259+x260)));

	if (t47 != 26LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x262 = -1LL;
	static volatile uint64_t x263 = 1801295586773372833LLU;
	int16_t x264 = 0;
	uint64_t t48 = 1794LLU;

	t48 = (x261%(x262&(x263+x264)));

	if (t48 != 2LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x265 = 4044682U;
	int64_t x266 = -310LL;
	int64_t x267 = -1LL;
	uint64_t x268 = 355773406551120LLU;
	volatile uint64_t t49 = 1127764LLU;

	t49 = (x265%(x266&(x267+x268)));

	if (t49 != 4044682LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x269 = 0U;
	volatile int32_t x270 = 46562333;
	int16_t x272 = INT16_MIN;
	volatile int32_t t50 = -7626428;

	t50 = (x269%(x270&(x271+x272)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x273 = INT64_MAX;
	int8_t x274 = INT8_MIN;
	int32_t x275 = 90654;
	uint32_t x276 = 2006123U;

	t51 = (x273%(x274&(x275+x276)));

	if (t51 != 10367LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x277 = INT64_MIN;
	int64_t x279 = INT64_MIN;
	uint64_t x280 = 159LLU;
	volatile uint64_t t52 = 869324793LLU;

	t52 = (x277%(x278&(x279+x280)));

	if (t52 != 8LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x281 = -6606;
	int32_t x282 = -71361188;
	int64_t x283 = INT64_MAX;

	t53 = (x281%(x282&(x283+x284)));

	if (t53 != -6606LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x285 = 30168923719611LL;
	int8_t x287 = INT8_MIN;
	uint32_t x288 = 113U;

	t54 = (x285%(x286&(x287+x288)));

	if (t54 != 1329LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x289 = INT32_MAX;
	uint8_t x290 = UINT8_MAX;
	int64_t x291 = 1337LL;
	int64_t x292 = INT64_MIN;
	int64_t t55 = -1837124121834367974LL;

	t55 = (x289%(x290&(x291+x292)));

	if (t55 != 40LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x293 = 0;
	static int16_t x294 = INT16_MAX;
	int16_t x296 = INT16_MIN;
	volatile int32_t t56 = -15;

	t56 = (x293%(x294&(x295+x296)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x297 = INT64_MAX;
	int16_t x298 = INT16_MAX;
	int16_t x300 = INT16_MIN;
	volatile uint64_t t57 = 1564291365993LLU;

	t57 = (x297%(x298&(x299+x300)));

	if (t57 != 1LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x301 = INT8_MIN;
	static int8_t x302 = INT8_MIN;
	int32_t x303 = -1039860;
	volatile uint16_t x304 = UINT16_MAX;
	volatile int32_t t58 = 0;

	t58 = (x301%(x302&(x303+x304)));

	if (t58 != -128) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x305 = 448989;
	volatile int32_t x306 = 1447;
	volatile int8_t x307 = INT8_MIN;
	static uint32_t x308 = 5189U;
	volatile uint32_t t59 = 98904450U;

	t59 = (x305%(x306&(x307+x308)));

	if (t59 != 83U) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x310 = 7LLU;
	volatile uint8_t x311 = 100U;
	volatile uint64_t t60 = 129488286LLU;

	t60 = (x309%(x310&(x311+x312)));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x313 = UINT64_MAX;
	static int32_t x314 = 7910105;
	int16_t x315 = INT16_MIN;
	int16_t x316 = 1634;
	volatile uint64_t t61 = 465793935983LLU;

	t61 = (x313%(x314&(x315+x316)));

	if (t61 != 4412351LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x317 = INT16_MIN;
	uint32_t x318 = UINT32_MAX;
	uint8_t x319 = 1U;
	int16_t x320 = INT16_MAX;
	uint32_t t62 = 57563954U;

	t62 = (x317%(x318&(x319+x320)));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x325 = INT64_MIN;
	int8_t x326 = INT8_MIN;
	static int32_t x328 = INT32_MAX;
	int64_t t63 = -8135906105LL;

	t63 = (x325%(x326&(x327+x328)));

	if (t63 != -32768LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x329 = -6;
	volatile int32_t x331 = 1058435;
	int16_t x332 = -1;
	volatile uint64_t t64 = 3133241866556LLU;

	t64 = (x329%(x330&(x331+x332)));

	if (t64 != 827538LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x333 = -1;
	uint8_t x335 = 117U;
	int16_t x336 = INT16_MIN;
	static volatile int32_t t65 = 13315;

	t65 = (x333%(x334&(x335+x336)));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x337 = INT64_MAX;
	static volatile uint32_t x338 = UINT32_MAX;
	uint8_t x339 = UINT8_MAX;

	t66 = (x337%(x338&(x339+x340)));

	if (t66 != 97LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x341 = INT64_MIN;
	uint16_t x342 = UINT16_MAX;
	int8_t x343 = INT8_MAX;
	volatile int32_t x344 = -1;
	static volatile int64_t t67 = 207608212270590LL;

	t67 = (x341%(x342&(x343+x344)));

	if (t67 != -8LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x346 = INT64_MIN;
	int32_t x347 = INT32_MIN;

	t68 = (x345%(x346&(x347+x348)));

	if (t68 != -2147483648LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x349 = 62913243016140255LLU;
	int16_t x352 = INT16_MAX;
	volatile uint64_t t69 = 127LLU;

	t69 = (x349%(x350&(x351+x352)));

	if (t69 != 115LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x357 = 33581039726162LL;
	uint64_t x359 = UINT64_MAX;
	uint8_t x360 = 2U;
	volatile uint64_t t70 = 570463354894441459LLU;

	t70 = (x357%(x358&(x359+x360)));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x361 = 2076917;
	static int16_t x362 = -114;
	int16_t x363 = 2383;
	static int64_t t71 = 9LL;

	t71 = (x361%(x362&(x363+x364)));

	if (t71 != 2307LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x365 = -3;
	volatile int16_t x366 = -6;
	int64_t x367 = INT64_MIN;
	uint16_t x368 = UINT16_MAX;
	volatile int64_t t72 = 2152171LL;

	t72 = (x365%(x366&(x367+x368)));

	if (t72 != -3LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x369 = UINT8_MAX;
	int64_t x370 = INT64_MAX;
	static volatile uint8_t x371 = 52U;
	int64_t x372 = -1LL;

	t73 = (x369%(x370&(x371+x372)));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x377 = -1LL;
	int32_t x378 = -80;
	static int8_t x379 = INT8_MIN;
	int64_t t74 = 335002155LL;

	t74 = (x377%(x378&(x379+x380)));

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x381 = 7;
	volatile int8_t x382 = INT8_MIN;
	volatile int16_t x383 = INT16_MIN;
	int8_t x384 = INT8_MIN;
	volatile int32_t t75 = 14085638;

	t75 = (x381%(x382&(x383+x384)));

	if (t75 != 7) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x385 = 134;
	static int8_t x386 = INT8_MAX;
	volatile int32_t x387 = INT32_MIN;
	static int64_t x388 = -1LL;
	int64_t t76 = -46257003733242LL;

	t76 = (x385%(x386&(x387+x388)));

	if (t76 != 7LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x390 = INT8_MIN;
	static int8_t x392 = -1;
	volatile uint32_t t77 = 19183U;

	t77 = (x389%(x390&(x391+x392)));

	if (t77 != 255U) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x394 = UINT32_MAX;
	static volatile uint64_t x395 = UINT64_MAX;
	uint64_t x396 = UINT64_MAX;
	static uint64_t t78 = 3243138098LLU;

	t78 = (x393%(x394&(x395+x396)));

	if (t78 != 2LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x397 = INT16_MIN;
	volatile int8_t x399 = -40;
	static volatile int8_t x400 = 4;
	int32_t t79 = -8232;

	t79 = (x397%(x398&(x399+x400)));

	if (t79 != -792) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x405 = 27U;
	static int32_t x406 = -1;
	uint8_t x407 = UINT8_MAX;
	int64_t x408 = -464850LL;
	int64_t t80 = 28928858808453218LL;

	t80 = (x405%(x406&(x407+x408)));

	if (t80 != 27LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x409 = 3396401U;
	uint64_t x410 = 115559984901495162LLU;
	static uint32_t x411 = 1512481U;
	volatile uint64_t t81 = 867LLU;

	t81 = (x409%(x410&(x411+x412)));

	if (t81 != 75361LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x413 = -1;
	volatile uint32_t x414 = 566726757U;
	int32_t x415 = INT32_MIN;
	volatile uint32_t t82 = 2044U;

	t82 = (x413%(x414&(x415+x416)));

	if (t82 != 19839U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x417 = INT8_MIN;
	static int8_t x419 = INT8_MIN;
	int16_t x420 = 28;
	int32_t t83 = 5025;

	t83 = (x417%(x418&(x419+x420)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x421 = UINT8_MAX;
	int32_t x422 = 15;
	volatile int32_t x424 = 118669;

	t84 = (x421%(x422&(x423+x424)));

	if (t84 != 3LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x429 = -1;
	int16_t x430 = INT16_MIN;
	volatile int32_t x431 = INT32_MAX;

	t85 = (x429%(x430&(x431+x432)));

	if (t85 != 2147483647U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x441 = INT8_MIN;
	int64_t x442 = INT64_MAX;
	static uint64_t x443 = 146LLU;
	uint64_t t86 = 91788423735LLU;

	t86 = (x441%(x442&(x443+x444)));

	if (t86 != 4294966876LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x445 = INT16_MIN;
	int8_t x446 = -1;
	static int64_t x447 = INT64_MIN;
	uint64_t t87 = 1168699074826707904LLU;

	t87 = (x445%(x446&(x447+x448)));

	if (t87 != 9223372036785396426LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x449 = INT8_MAX;
	static uint16_t x450 = 7U;
	volatile uint64_t x451 = 32666LLU;
	uint16_t x452 = 73U;
	volatile uint64_t t88 = 0LLU;

	t88 = (x449%(x450&(x451+x452)));

	if (t88 != 1LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x453 = UINT16_MAX;
	static int16_t x454 = 6856;
	uint32_t x455 = UINT32_MAX;
	uint32_t x456 = 15U;
	uint32_t t89 = 0U;

	t89 = (x453%(x454&(x455+x456)));

	if (t89 != 7U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x457 = INT8_MAX;
	int64_t x458 = -10244541338211LL;
	uint64_t x460 = 174348872LLU;
	volatile uint64_t t90 = 79724964LLU;

	t90 = (x457%(x458&(x459+x460)));

	if (t90 != 127LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x461 = 29LL;
	uint32_t x462 = 11514U;
	static int8_t x463 = INT8_MAX;
	int8_t x464 = 1;
	volatile int64_t t91 = 21657356765LL;

	t91 = (x461%(x462&(x463+x464)));

	if (t91 != 29LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x470 = INT32_MIN;
	static int16_t x471 = INT16_MAX;
	static int32_t x472 = INT32_MIN;
	uint64_t t92 = 683081305465469087LLU;

	t92 = (x469%(x470&(x471+x472)));

	if (t92 != 13425952095LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x481 = INT64_MAX;
	volatile uint8_t x482 = UINT8_MAX;
	volatile uint8_t x483 = 6U;
	static int8_t x484 = INT8_MAX;
	int64_t t93 = -224241LL;

	t93 = (x481%(x482&(x483+x484)));

	if (t93 != 112LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x486 = -12910;
	int32_t x487 = INT32_MAX;
	volatile int8_t x488 = INT8_MIN;
	volatile int32_t t94 = -24097816;

	t94 = (x485%(x486&(x487+x488)));

	if (t94 != -13038) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x490 = UINT16_MAX;
	uint16_t x492 = 86U;
	volatile int64_t t95 = 3037251004984LL;

	t95 = (x489%(x490&(x491+x492)));

	if (t95 != -24269LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x493 = 14519;
	int8_t x494 = -1;
	uint32_t x495 = 99116096U;
	uint32_t t96 = 52U;

	t96 = (x493%(x494&(x495+x496)));

	if (t96 != 14519U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x497 = INT8_MIN;
	static int8_t x498 = -1;
	uint64_t x499 = 32813LLU;
	int8_t x500 = INT8_MIN;

	t97 = (x497%(x498&(x499+x500)));

	if (t97 != 27773LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x505 = -27524974;
	int64_t x506 = -43501140936959LL;
	int16_t x508 = 15;
	volatile int64_t t98 = 1205664691691082LL;

	t98 = (x505%(x506&(x507+x508)));

	if (t98 != -27524974LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x510 = -12239981199236062LL;
	volatile int16_t x511 = INT16_MAX;
	uint16_t x512 = UINT16_MAX;
	int64_t t99 = -407994758174LL;

	t99 = (x509%(x510&(x511+x512)));

	if (t99 != -41138LL) { NG(); } else { ; }
	
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

