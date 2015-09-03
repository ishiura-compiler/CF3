#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = INT16_MIN;
uint8_t x4 = 61U;
int16_t x6 = INT16_MIN;
volatile uint8_t x7 = 9U;
int16_t x8 = INT16_MAX;
int8_t x20 = INT8_MAX;
uint8_t x22 = 82U;
volatile int32_t t3 = 10;
static int32_t x36 = -493;
int32_t x38 = -1103135;
uint32_t t8 = 888588U;
int32_t x70 = INT32_MAX;
int32_t x74 = -26239;
volatile uint8_t x77 = 3U;
volatile int32_t x78 = 26830;
volatile int32_t t14 = -30;
int8_t x87 = -1;
uint32_t x88 = 8274U;
volatile int16_t x92 = INT16_MIN;
static int16_t x97 = 5;
static uint64_t x105 = UINT64_MAX;
int8_t x107 = INT8_MIN;
static volatile uint64_t t21 = 16141561523LLU;
volatile int64_t x118 = -1085381045274LL;
static uint16_t x124 = UINT16_MAX;
static int8_t x125 = INT8_MAX;
volatile uint32_t t25 = 479746U;
int32_t x134 = -1;
static uint64_t x136 = UINT64_MAX;
uint32_t t27 = 46U;
int16_t x146 = -1;
int8_t x147 = 3;
static int64_t x156 = INT64_MIN;
static uint64_t t29 = 1124251790740480LLU;
static int64_t x162 = INT64_MIN;
volatile int64_t t33 = INT64_MAX;
static volatile int64_t t34 = 2284310082543LL;
volatile uint32_t x199 = 112838483U;
uint8_t x200 = 1U;
int32_t t38 = 266481741;
uint8_t x207 = 11U;
volatile uint16_t x213 = 5169U;
volatile uint8_t x214 = 10U;
uint64_t x229 = 5722170348594LLU;
uint64_t x235 = 1LLU;
int16_t x236 = INT16_MIN;
static uint64_t x241 = UINT64_MAX;
volatile int8_t x244 = 0;
static uint16_t x250 = 4U;
volatile uint64_t t46 = 9179502698896898327LLU;
uint64_t x254 = UINT64_MAX;
uint32_t x255 = UINT32_MAX;
uint64_t x256 = UINT64_MAX;
int64_t x264 = 1860LL;
int64_t t49 = -1298724LL;
uint64_t x271 = 886595645788825LLU;
int32_t x272 = INT32_MAX;
int16_t x282 = INT16_MIN;
static uint64_t x283 = UINT64_MAX;
volatile int8_t x285 = INT8_MIN;
int64_t x288 = INT64_MIN;
int16_t x291 = INT16_MIN;
static int16_t x293 = INT16_MIN;
static int32_t x296 = INT32_MIN;
static volatile int64_t x297 = INT64_MAX;
int32_t x304 = -910;
uint64_t x307 = UINT64_MAX;
volatile uint64_t t59 = 1070538618521LLU;
int64_t x310 = 10955381556842618LL;
uint8_t x318 = UINT8_MAX;
volatile uint16_t x330 = UINT16_MAX;
static volatile int32_t t64 = 21444151;
volatile int32_t x337 = INT32_MIN;
int64_t x350 = -30196579LL;
static int8_t x351 = -6;
int8_t x360 = 1;
volatile int16_t x362 = INT16_MIN;
uint32_t t71 = 313494098U;
static int64_t x368 = -13LL;
volatile int16_t x370 = -1;
volatile uint64_t t74 = 327657740870LLU;
int8_t x381 = 4;
int8_t x382 = INT8_MAX;
int8_t x387 = INT8_MAX;
int32_t x398 = -2;
int64_t x401 = -5873372LL;
int64_t t80 = -3LL;
int32_t x409 = -59;
uint64_t x418 = 235LLU;
int32_t x419 = INT32_MAX;
static volatile int64_t x432 = 149LL;
volatile int64_t t85 = 957570327283772492LL;
int32_t x446 = 182347763;
int16_t x449 = -1;
int8_t x454 = 1;
volatile int16_t x456 = 42;
static volatile uint8_t x469 = 9U;
uint64_t x471 = 19690334LLU;
int64_t x474 = INT64_MIN;
uint64_t t95 = 567654LLU;
uint64_t x477 = 15133689481285LLU;
volatile uint16_t x483 = UINT16_MAX;
static int64_t x484 = 545545172115LL;
volatile int64_t t97 = -362831520103LL;
volatile int64_t t99 = -32235LL;


void f0(void) {
	uint64_t x1 = 4536098697LLU;
	int32_t x3 = INT32_MAX;
	volatile uint64_t t0 = 7951485960290582223LLU;

	t0 = (x1-((x2|x3)+x4));

	if (t0 != 4536098637LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = 1029;
	int32_t t1 = -2022844;

	t1 = (x5-((x6|x7)+x8));

	if (t1 != 1021) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x17 = 2U;
	int32_t x18 = INT32_MAX;
	uint64_t x19 = 669483100LLU;
	static uint64_t t2 = 1163958822458058917LLU;

	t2 = (x17-((x18|x19)+x20));

	if (t2 != 18446744071562067844LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x21 = UINT8_MAX;
	int16_t x23 = 36;
	int16_t x24 = -1;

	t3 = (x21-((x22|x23)+x24));

	if (t3 != 138) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x25 = 2403U;
	uint8_t x26 = UINT8_MAX;
	int8_t x27 = INT8_MIN;
	static int8_t x28 = INT8_MIN;
	static volatile uint32_t t4 = 26571U;

	t4 = (x25-((x26|x27)+x28));

	if (t4 != 2532U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x29 = INT64_MIN;
	static int64_t x30 = INT64_MIN;
	uint32_t x31 = 19122U;
	uint16_t x32 = 111U;
	static volatile int64_t t5 = 79644934965657LL;

	t5 = (x29-((x30|x31)+x32));

	if (t5 != -19233LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x33 = UINT8_MAX;
	volatile int8_t x34 = 0;
	int32_t x35 = -1;
	volatile int32_t t6 = 1;

	t6 = (x33-((x34|x35)+x36));

	if (t6 != 749) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x37 = -14;
	int8_t x39 = INT8_MAX;
	int64_t x40 = INT64_MAX;
	volatile int64_t t7 = -30LL;

	t7 = (x37-((x38|x39)+x40));

	if (t7 != -9223372036853672716LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x49 = 8U;
	volatile int16_t x50 = -1;
	uint32_t x51 = UINT32_MAX;
	int16_t x52 = INT16_MIN;

	t8 = (x49-((x50|x51)+x52));

	if (t8 != 32777U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x57 = INT16_MIN;
	static volatile int32_t x58 = INT32_MIN;
	int64_t x59 = -491249LL;
	static uint16_t x60 = UINT16_MAX;
	volatile int64_t t9 = -672LL;

	t9 = (x57-((x58|x59)+x60));

	if (t9 != 392946LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x61 = UINT32_MAX;
	volatile int64_t x62 = -3422683591LL;
	uint8_t x63 = 2U;
	uint64_t x64 = 2804422107602LLU;
	uint64_t t10 = 56860469LLU;

	t10 = (x61-((x62|x63)+x64));

	if (t10 != 18446741277005094898LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x65 = 9306U;
	int8_t x66 = -6;
	static volatile int64_t x67 = -1LL;
	uint32_t x68 = UINT32_MAX;
	static int64_t t11 = 29LL;

	t11 = (x65-((x66|x67)+x68));

	if (t11 != -4294957988LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x69 = INT32_MAX;
	int8_t x71 = INT8_MAX;
	uint64_t x72 = UINT64_MAX;
	uint64_t t12 = 122413518912LLU;

	t12 = (x69-((x70|x71)+x72));

	if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x73 = UINT64_MAX;
	volatile int8_t x75 = -1;
	int16_t x76 = INT16_MIN;
	volatile uint64_t t13 = 772139713286257748LLU;

	t13 = (x73-((x74|x75)+x76));

	if (t13 != 32768LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x79 = 5U;
	int16_t x80 = -1;

	t14 = (x77-((x78|x79)+x80));

	if (t14 != -26827) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x81 = INT16_MIN;
	int64_t x82 = -1LL;
	int32_t x83 = INT32_MIN;
	int8_t x84 = -1;
	int64_t t15 = -488087594957LL;

	t15 = (x81-((x82|x83)+x84));

	if (t15 != -32766LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x85 = INT16_MIN;
	volatile int32_t x86 = -240342;
	volatile uint32_t t16 = 4U;

	t16 = (x85-((x86|x87)+x88));

	if (t16 != 4294926255U) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x89 = 73U;
	volatile int8_t x90 = INT8_MIN;
	int64_t x91 = INT64_MIN;
	static volatile int64_t t17 = -937696615306090LL;

	t17 = (x89-((x90|x91)+x92));

	if (t17 != 32969LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x93 = INT8_MIN;
	int64_t x94 = -1LL;
	static volatile int32_t x95 = INT32_MAX;
	static uint16_t x96 = UINT16_MAX;
	int64_t t18 = 175080734940161875LL;

	t18 = (x93-((x94|x95)+x96));

	if (t18 != -65662LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x98 = INT32_MIN;
	int8_t x99 = 19;
	int32_t x100 = 1;
	int32_t t19 = 110;

	t19 = (x97-((x98|x99)+x100));

	if (t19 != 2147483633) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x106 = INT16_MIN;
	int64_t x108 = -1LL;
	uint64_t t20 = 11624969498520495LLU;

	t20 = (x105-((x106|x107)+x108));

	if (t20 != 128LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x113 = INT16_MIN;
	int64_t x114 = -1LL;
	uint64_t x115 = UINT64_MAX;
	int16_t x116 = INT16_MIN;

	t21 = (x113-((x114|x115)+x116));

	if (t21 != 1LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x117 = INT8_MAX;
	int16_t x119 = 1;
	int64_t x120 = 8881LL;
	static volatile int64_t t22 = 479305151LL;

	t22 = (x117-((x118|x119)+x120));

	if (t22 != 1085381036519LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x121 = UINT32_MAX;
	uint16_t x122 = 40U;
	volatile int64_t x123 = 785560827962300147LL;
	static volatile int64_t t23 = -188267622824LL;

	t23 = (x121-((x122|x123)+x124));

	if (t23 != -785560823667398395LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x126 = -1LL;
	uint8_t x127 = UINT8_MAX;
	int32_t x128 = INT32_MAX;
	int64_t t24 = 4115979391LL;

	t24 = (x125-((x126|x127)+x128));

	if (t24 != -2147483519LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x129 = -1;
	int16_t x130 = INT16_MIN;
	uint32_t x131 = 22943U;
	static uint8_t x132 = 0U;

	t25 = (x129-((x130|x131)+x132));

	if (t25 != 9824U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x133 = 2U;
	int64_t x135 = INT64_MAX;
	static uint64_t t26 = 2137661523378030409LLU;

	t26 = (x133-((x134|x135)+x136));

	if (t26 != 4LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x141 = UINT16_MAX;
	uint32_t x142 = 169040U;
	int8_t x143 = 6;
	uint32_t x144 = 521387U;

	t27 = (x141-((x142|x143)+x144));

	if (t27 != 4294342398U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x145 = -23336951;
	volatile uint64_t x148 = 164252199836190LLU;
	uint64_t t28 = 25LLU;

	t28 = (x145-((x146|x147)+x148));

	if (t28 != 18446579821486378476LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int16_t x153 = 2;
	uint64_t x154 = 1642188828815LLU;
	int32_t x155 = -1;

	t29 = (x153-((x154|x155)+x156));

	if (t29 != 9223372036854775811LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x157 = 120;
	uint16_t x158 = 1U;
	volatile uint16_t x159 = 0U;
	static uint8_t x160 = UINT8_MAX;
	volatile int32_t t30 = 0;

	t30 = (x157-((x158|x159)+x160));

	if (t30 != -136) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x161 = INT64_MAX;
	int16_t x163 = -7640;
	int64_t x164 = 1704394675024427545LL;
	int64_t t31 = 1471053LL;

	t31 = (x161-((x162|x163)+x164));

	if (t31 != 7518977361830355902LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x165 = INT16_MIN;
	int16_t x166 = -4;
	uint8_t x167 = 3U;
	int64_t x168 = -7284698820608635LL;
	static volatile int64_t t32 = -9543LL;

	t32 = (x165-((x166|x167)+x168));

	if (t32 != 7284698820575868LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x169 = INT64_MAX;
	int32_t x170 = -3;
	uint16_t x171 = 639U;
	volatile int8_t x172 = 1;

	t33 = (x169-((x170|x171)+x172));

	if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x177 = -7;
	int64_t x178 = INT64_MIN;
	static uint8_t x179 = 1U;
	uint16_t x180 = 19U;

	t34 = (x177-((x178|x179)+x180));

	if (t34 != 9223372036854775781LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x181 = INT8_MIN;
	static int16_t x182 = INT16_MIN;
	uint64_t x183 = 2007346191761649703LLU;
	int16_t x184 = INT16_MAX;
	volatile uint64_t t35 = 3749307678151667557LLU;

	t35 = (x181-((x182|x183)+x184));

	if (t35 != 18446744073709539162LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x185 = INT32_MIN;
	volatile uint8_t x186 = 42U;
	int64_t x187 = INT64_MIN;
	uint32_t x188 = 93499U;
	static volatile int64_t t36 = -5289851198640068LL;

	t36 = (x185-((x186|x187)+x188));

	if (t36 != 9223372034707198619LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x197 = 45U;
	static uint64_t x198 = UINT64_MAX;
	uint64_t t37 = 7191139670LLU;

	t37 = (x197-((x198|x199)+x200));

	if (t37 != 45LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x201 = -1;
	volatile int32_t x202 = INT32_MAX;
	int8_t x203 = INT8_MIN;
	int8_t x204 = -1;

	t38 = (x201-((x202|x203)+x204));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x205 = INT8_MAX;
	int64_t x206 = 14040LL;
	uint32_t x208 = 1183922459U;
	int64_t t39 = -634LL;

	t39 = (x205-((x206|x207)+x208));

	if (t39 != -1183936375LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x209 = 59763755U;
	volatile int8_t x210 = INT8_MAX;
	int16_t x211 = -1;
	volatile int32_t x212 = -1;
	static volatile uint32_t t40 = 6U;

	t40 = (x209-((x210|x211)+x212));

	if (t40 != 59763757U) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x215 = 2U;
	int8_t x216 = 15;
	volatile int32_t t41 = 5297389;

	t41 = (x213-((x214|x215)+x216));

	if (t41 != 5144) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x221 = 0;
	static volatile int16_t x222 = INT16_MAX;
	int64_t x223 = INT64_MIN;
	uint64_t x224 = UINT64_MAX;
	uint64_t t42 = 1212876LLU;

	t42 = (x221-((x222|x223)+x224));

	if (t42 != 9223372036854743042LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x230 = UINT8_MAX;
	uint32_t x231 = UINT32_MAX;
	int64_t x232 = INT64_MIN;
	volatile uint64_t t43 = 301LLU;

	t43 = (x229-((x230|x231)+x232));

	if (t43 != 9223377754730157107LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x233 = 4U;
	int32_t x234 = INT32_MIN;
	volatile uint64_t t44 = 44063990LLU;

	t44 = (x233-((x234|x235)+x236));

	if (t44 != 2147516419LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x242 = INT32_MAX;
	int16_t x243 = INT16_MIN;
	static volatile uint64_t t45 = 648368244959LLU;

	t45 = (x241-((x242|x243)+x244));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x249 = 250LLU;
	int64_t x251 = -1LL;
	uint8_t x252 = 10U;

	t46 = (x249-((x250|x251)+x252));

	if (t46 != 241LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x253 = -1;
	uint64_t t47 = 92524LLU;

	t47 = (x253-((x254|x255)+x256));

	if (t47 != 1LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x257 = INT8_MIN;
	uint8_t x258 = 13U;
	int16_t x259 = -476;
	int8_t x260 = 1;
	volatile int32_t t48 = 185438587;

	t48 = (x257-((x258|x259)+x260));

	if (t48 != 338) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x261 = 4U;
	static uint16_t x262 = UINT16_MAX;
	static int32_t x263 = INT32_MAX;

	t49 = (x261-((x262|x263)+x264));

	if (t49 != -2147485503LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x269 = -1;
	static uint64_t x270 = 25LLU;
	uint64_t t50 = 257841761314562335LLU;

	t50 = (x269-((x270|x271)+x272));

	if (t50 != 18445857475916279143LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x273 = -1;
	static int16_t x274 = INT16_MAX;
	int16_t x275 = -1;
	volatile int32_t x276 = -589013;
	volatile int32_t t51 = -50730;

	t51 = (x273-((x274|x275)+x276));

	if (t51 != 589013) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x277 = 125U;
	volatile int8_t x278 = -1;
	int8_t x279 = INT8_MIN;
	uint8_t x280 = 6U;
	volatile int32_t t52 = 1;

	t52 = (x277-((x278|x279)+x280));

	if (t52 != 120) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x281 = INT16_MIN;
	uint64_t x284 = UINT64_MAX;
	volatile uint64_t t53 = 24550943766548LLU;

	t53 = (x281-((x282|x283)+x284));

	if (t53 != 18446744073709518850LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x286 = 73550070247956LLU;
	uint16_t x287 = 2U;
	uint64_t t54 = 6748756761LLU;

	t54 = (x285-((x286|x287)+x288));

	if (t54 != 9223298486784527722LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x289 = 379360966614277131LLU;
	uint8_t x290 = 5U;
	int64_t x292 = INT64_MAX;
	uint64_t t55 = 2169765LLU;

	t55 = (x289-((x290|x291)+x292));

	if (t55 != 9602733003469085703LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x294 = INT8_MAX;
	int16_t x295 = INT16_MAX;
	static int32_t t56 = 8190619;

	t56 = (x293-((x294|x295)+x296));

	if (t56 != 2147418113) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x298 = 5684629;
	static uint32_t x299 = 3306U;
	uint64_t x300 = 4206222142593LLU;
	volatile uint64_t t57 = 7LLU;

	t57 = (x297-((x298|x299)+x300));

	if (t57 != 9223367830626948479LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x301 = UINT16_MAX;
	int64_t x302 = INT64_MIN;
	int64_t x303 = -1LL;
	static volatile int64_t t58 = 242960LL;

	t58 = (x301-((x302|x303)+x304));

	if (t58 != 66446LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x305 = 50U;
	uint16_t x306 = 8U;
	volatile int16_t x308 = INT16_MIN;

	t59 = (x305-((x306|x307)+x308));

	if (t59 != 32819LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x309 = INT32_MAX;
	int8_t x311 = 3;
	uint64_t x312 = UINT64_MAX;
	uint64_t t60 = 0LLU;

	t60 = (x309-((x310|x311)+x312));

	if (t60 != 18435788694300192645LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x313 = INT8_MAX;
	int32_t x314 = INT32_MIN;
	int32_t x315 = -1;
	uint8_t x316 = UINT8_MAX;
	int32_t t61 = 845;

	t61 = (x313-((x314|x315)+x316));

	if (t61 != -127) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x317 = -1;
	static int64_t x319 = INT64_MAX;
	int16_t x320 = -1549;
	int64_t t62 = -1199195796392LL;

	t62 = (x317-((x318|x319)+x320));

	if (t62 != -9223372036854774259LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x321 = UINT8_MAX;
	volatile int64_t x322 = INT64_MAX;
	static int16_t x323 = INT16_MIN;
	static volatile int32_t x324 = INT32_MAX;
	int64_t t63 = 11226696237411LL;

	t63 = (x321-((x322|x323)+x324));

	if (t63 != -2147483391LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x329 = INT8_MIN;
	static uint8_t x331 = 2U;
	int16_t x332 = -77;

	t64 = (x329-((x330|x331)+x332));

	if (t64 != -65586) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x338 = INT8_MIN;
	volatile int64_t x339 = -15260135644LL;
	volatile uint16_t x340 = 10646U;
	int64_t t65 = 5774610LL;

	t65 = (x337-((x338|x339)+x340));

	if (t65 != -2147494202LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x341 = 73797U;
	int64_t x342 = 125506LL;
	int32_t x343 = -1;
	uint8_t x344 = UINT8_MAX;
	static int64_t t66 = 484LL;

	t66 = (x341-((x342|x343)+x344));

	if (t66 != 73543LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x345 = 3U;
	int16_t x346 = -1;
	static int64_t x347 = INT64_MIN;
	volatile int8_t x348 = INT8_MIN;
	int64_t t67 = -595816884LL;

	t67 = (x345-((x346|x347)+x348));

	if (t67 != 132LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x349 = UINT8_MAX;
	static volatile int32_t x352 = -886268605;
	static int64_t t68 = 1984LL;

	t68 = (x349-((x350|x351)+x352));

	if (t68 != 886268861LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x353 = INT8_MIN;
	int64_t x354 = INT64_MIN;
	static int16_t x355 = INT16_MIN;
	uint32_t x356 = UINT32_MAX;
	int64_t t69 = -119755402LL;

	t69 = (x353-((x354|x355)+x356));

	if (t69 != -4294934655LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x357 = -157773LL;
	int32_t x358 = INT32_MIN;
	volatile int16_t x359 = INT16_MIN;
	static int64_t t70 = 27954574959665LL;

	t70 = (x357-((x358|x359)+x360));

	if (t70 != -125006LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x361 = UINT16_MAX;
	volatile int32_t x363 = INT32_MIN;
	uint32_t x364 = 9315U;

	t71 = (x361-((x362|x363)+x364));

	if (t71 != 88988U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x365 = INT64_MIN;
	static int64_t x366 = INT64_MIN;
	static uint8_t x367 = UINT8_MAX;
	int64_t t72 = 730655665592601LL;

	t72 = (x365-((x366|x367)+x368));

	if (t72 != -242LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x369 = UINT32_MAX;
	volatile int64_t x371 = -1LL;
	int8_t x372 = INT8_MAX;
	volatile int64_t t73 = -247499089005630LL;

	t73 = (x369-((x370|x371)+x372));

	if (t73 != 4294967169LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x373 = 317491551LLU;
	volatile int64_t x374 = INT64_MIN;
	uint32_t x375 = UINT32_MAX;
	static int8_t x376 = 1;

	t74 = (x373-((x374|x375)+x376));

	if (t74 != 9223372032877300063LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x383 = INT16_MAX;
	int8_t x384 = INT8_MAX;
	int32_t t75 = 3377;

	t75 = (x381-((x382|x383)+x384));

	if (t75 != -32890) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x385 = INT32_MIN;
	int64_t x386 = 64996716152940LL;
	int8_t x388 = INT8_MIN;
	static int64_t t76 = 29301864204146625LL;

	t76 = (x385-((x386|x387)+x388));

	if (t76 != -64998863636479LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x389 = -1;
	static int8_t x390 = INT8_MIN;
	volatile uint64_t x391 = 312946918LLU;
	int8_t x392 = -1;
	static volatile uint64_t t77 = 836842695907830463LLU;

	t77 = (x389-((x390|x391)+x392));

	if (t77 != 26LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x393 = -1;
	uint16_t x394 = 9U;
	volatile int8_t x395 = -13;
	int8_t x396 = -1;
	volatile int32_t t78 = 197556;

	t78 = (x393-((x394|x395)+x396));

	if (t78 != 5) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x397 = 14504U;
	static int8_t x399 = INT8_MAX;
	uint8_t x400 = 6U;
	static int32_t t79 = 59136;

	t79 = (x397-((x398|x399)+x400));

	if (t79 != 14499) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x402 = UINT8_MAX;
	int16_t x403 = INT16_MIN;
	static int8_t x404 = -18;

	t80 = (x401-((x402|x403)+x404));

	if (t80 != -5840841LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x405 = INT32_MAX;
	volatile int64_t x406 = -1LL;
	uint8_t x407 = 14U;
	volatile uint8_t x408 = 2U;
	int64_t t81 = 1106927190588LL;

	t81 = (x405-((x406|x407)+x408));

	if (t81 != 2147483646LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x410 = 6441;
	uint64_t x411 = 19889484LLU;
	uint16_t x412 = 1621U;
	volatile uint64_t t82 = 6592474108476240054LLU;

	t82 = (x409-((x410|x411)+x412));

	if (t82 != 18446744073689660419LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int32_t x413 = INT32_MIN;
	uint16_t x414 = 0U;
	uint16_t x415 = UINT16_MAX;
	volatile int64_t x416 = INT64_MIN;
	int64_t t83 = 29LL;

	t83 = (x413-((x414|x415)+x416));

	if (t83 != 9223372034707226625LL) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int16_t x417 = 2097;
	uint16_t x420 = UINT16_MAX;
	uint64_t t84 = 4171296932874289LLU;

	t84 = (x417-((x418|x419)+x420));

	if (t84 != 18446744071562004531LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x429 = -1;
	static uint8_t x430 = 16U;
	static int64_t x431 = -875731800LL;

	t85 = (x429-((x430|x431)+x432));

	if (t85 != 875731634LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x437 = 6796U;
	static volatile int8_t x438 = 1;
	int16_t x439 = -63;
	static int8_t x440 = -1;
	volatile int32_t t86 = -262286226;

	t86 = (x437-((x438|x439)+x440));

	if (t86 != 6860) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x441 = 78216;
	int32_t x442 = -1;
	static int32_t x443 = 349342;
	int8_t x444 = INT8_MIN;
	volatile int32_t t87 = -7;

	t87 = (x441-((x442|x443)+x444));

	if (t87 != 78345) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x445 = 971U;
	int64_t x447 = INT64_MIN;
	int8_t x448 = INT8_MIN;
	volatile int64_t t88 = 0LL;

	t88 = (x445-((x446|x447)+x448));

	if (t88 != 9223372036672429144LL) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint64_t x450 = 1760LLU;
	volatile uint64_t x451 = UINT64_MAX;
	int16_t x452 = -822;
	volatile uint64_t t89 = 14108982444205235LLU;

	t89 = (x449-((x450|x451)+x452));

	if (t89 != 822LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x453 = -1491;
	int32_t x455 = -5415;
	int32_t t90 = 7;

	t90 = (x453-((x454|x455)+x456));

	if (t90 != 3882) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x457 = -1LL;
	uint8_t x458 = UINT8_MAX;
	volatile uint8_t x459 = UINT8_MAX;
	static int64_t x460 = -3126802273578LL;
	volatile int64_t t91 = -1610893283LL;

	t91 = (x457-((x458|x459)+x460));

	if (t91 != 3126802273322LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x461 = -1;
	uint8_t x462 = UINT8_MAX;
	volatile int16_t x463 = INT16_MIN;
	static int16_t x464 = INT16_MAX;
	int32_t t92 = 873842610;

	t92 = (x461-((x462|x463)+x464));

	if (t92 != -255) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x465 = 3300U;
	int16_t x466 = 1;
	volatile uint64_t x467 = 86120877949195LLU;
	volatile uint8_t x468 = UINT8_MAX;
	uint64_t t93 = 3LLU;

	t93 = (x465-((x466|x467)+x468));

	if (t93 != 18446657952831605466LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x470 = INT32_MAX;
	uint16_t x472 = 3U;
	volatile uint64_t t94 = 2895554540432LLU;

	t94 = (x469-((x470|x471)+x472));

	if (t94 != 18446744071562067975LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x473 = 290;
	int8_t x475 = INT8_MIN;
	static uint64_t x476 = 50886LLU;

	t95 = (x473-((x474|x475)+x476));

	if (t95 != 18446744073709501148LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x478 = INT64_MAX;
	int8_t x479 = -1;
	uint64_t x480 = 191507LLU;
	uint64_t t96 = 2787101864864062LLU;

	t96 = (x477-((x478|x479)+x480));

	if (t96 != 15133689289779LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x481 = UINT8_MAX;
	static volatile int8_t x482 = INT8_MIN;

	t97 = (x481-((x482|x483)+x484));

	if (t97 != -545545171859LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x485 = 52709U;
	static int32_t x486 = INT32_MAX;
	uint32_t x487 = 19983U;
	int32_t x488 = INT32_MAX;
	volatile uint32_t t98 = 812646019U;

	t98 = (x485-((x486|x487)+x488));

	if (t98 != 52711U) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x497 = 162U;
	int16_t x498 = INT16_MIN;
	static int64_t x499 = INT64_MIN;
	volatile int16_t x500 = -1;

	t99 = (x497-((x498|x499)+x500));

	if (t99 != 32931LL) { NG(); } else { ; }
	
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

