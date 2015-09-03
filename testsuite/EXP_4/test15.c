#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x6 = 36;
int64_t x13 = INT64_MAX;
uint8_t x27 = 8U;
int16_t x31 = 200;
int16_t x32 = -1;
int16_t x35 = INT16_MIN;
uint8_t x40 = UINT8_MAX;
uint32_t x52 = 0U;
static int64_t x59 = INT64_MIN;
uint16_t x68 = 14926U;
volatile int32_t x69 = INT32_MAX;
uint8_t x71 = UINT8_MAX;
static int64_t x73 = 56415258235376LL;
int32_t x80 = INT32_MAX;
uint32_t x83 = 341U;
int64_t x86 = INT64_MIN;
int16_t x89 = INT16_MIN;
int8_t x90 = INT8_MIN;
int8_t x92 = INT8_MIN;
uint64_t x95 = UINT64_MAX;
uint16_t x103 = 167U;
uint16_t x104 = 3950U;
volatile uint64_t t19 = 505552731075568475LLU;
int64_t x105 = -1LL;
uint64_t t20 = 254466LLU;
uint8_t x120 = UINT8_MAX;
int8_t x125 = INT8_MAX;
static volatile uint8_t x128 = 1U;
int64_t x134 = -221543354253785LL;
int64_t x140 = -1LL;
static uint64_t x141 = 27707545633303655LLU;
volatile int8_t x143 = 0;
static volatile int8_t x144 = 3;
volatile uint64_t t25 = 290596413593LLU;
int16_t x149 = INT16_MIN;
static volatile int8_t x166 = -1;
int64_t t30 = 341892313972520427LL;
static volatile uint32_t x171 = 82U;
int32_t x174 = -1;
int16_t x178 = INT16_MIN;
volatile uint8_t x179 = UINT8_MAX;
uint32_t x188 = UINT32_MAX;
int8_t x201 = -1;
int16_t x212 = -1;
static uint32_t x216 = 1402326258U;
int32_t x225 = INT32_MIN;
uint32_t x226 = UINT32_MAX;
int32_t x227 = 3267758;
uint8_t x230 = UINT8_MAX;
int16_t x231 = 5581;
volatile uint8_t x232 = 40U;
int64_t t44 = 473552LL;
int8_t x245 = -3;
uint64_t x248 = 1326644063881LLU;
uint8_t x252 = 2U;
volatile uint64_t t46 = 1148089484505LLU;
volatile uint32_t x257 = 14220U;
int64_t x260 = INT64_MAX;
int8_t x266 = INT8_MIN;
int32_t x273 = -433;
volatile uint64_t t53 = 51LLU;
volatile uint16_t x289 = 244U;
int32_t t55 = -1937;
volatile int8_t x298 = -1;
int8_t x303 = INT8_MAX;
volatile uint32_t x317 = UINT32_MAX;
int32_t x320 = INT32_MIN;
volatile uint16_t x322 = 504U;
uint32_t x325 = UINT32_MAX;
int16_t x333 = INT16_MIN;
volatile uint64_t x335 = 1130065268160LLU;
int32_t x354 = -40;
int64_t x360 = -1LL;
volatile int64_t t68 = 150LL;
uint64_t x370 = 3868051481353LLU;
volatile uint8_t x373 = 12U;
static volatile int8_t x381 = INT8_MAX;
int64_t x382 = -812722671609LL;
uint16_t x383 = 7U;
int64_t t73 = 587743513568128LL;
static volatile int16_t x387 = INT16_MAX;
static uint16_t x401 = 6657U;
volatile int32_t x403 = INT32_MAX;
volatile uint64_t t78 = 12610LLU;
int8_t x405 = INT8_MIN;
static uint16_t x408 = 1U;
static volatile int64_t t79 = -33454235LL;
int8_t x409 = -1;
int64_t x416 = 29571638409127217LL;
static int64_t t81 = -344LL;
uint64_t x424 = 3049571260632453LLU;
static uint64_t x431 = 0LLU;
uint64_t x432 = 102344847416286LLU;
static volatile uint64_t x437 = 5657016044659094384LLU;
uint16_t x449 = UINT16_MAX;
static uint8_t x454 = 2U;
uint32_t x456 = UINT32_MAX;
int32_t x457 = INT32_MIN;
volatile int16_t x458 = 25;
int32_t x461 = INT32_MIN;
volatile uint64_t t90 = 9178242232222657978LLU;
static int64_t x466 = INT64_MIN;
volatile int16_t x467 = INT16_MIN;
static int8_t x473 = -1;
static int8_t x475 = -8;
uint64_t x477 = 15973115129523LLU;
int16_t x480 = INT16_MIN;
volatile uint64_t t93 = 15938LLU;
int8_t x493 = -1;
int64_t x501 = INT64_MIN;
uint64_t x509 = 214916671750188302LLU;


void f0(void) {
	volatile int64_t x1 = INT64_MIN;
	static int64_t x2 = INT64_MAX;
	volatile int16_t x3 = -17;
	static uint64_t x4 = UINT64_MAX;
	uint64_t t0 = 253415417200436852LLU;

	t0 = (x1-(x2-(x3+x4)));

	if (t0 != 18446744073709551599LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int8_t x5 = INT8_MIN;
	uint32_t x7 = 281138669U;
	static int8_t x8 = INT8_MIN;
	uint32_t t1 = 128520U;

	t1 = (x5-(x6-(x7+x8)));

	if (t1 != 281138377U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x14 = INT8_MIN;
	uint64_t x15 = 10161823888090410LLU;
	static int32_t x16 = -251989723;
	volatile uint64_t t2 = 106864559941607742LLU;

	t2 = (x13-(x14-(x15+x16)));

	if (t2 != 9233533860490876622LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x17 = INT16_MAX;
	uint16_t x18 = UINT16_MAX;
	volatile int64_t x19 = -1LL;
	volatile uint8_t x20 = 0U;
	int64_t t3 = -20061056902LL;

	t3 = (x17-(x18-(x19+x20)));

	if (t3 != -32769LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x25 = -1;
	static uint8_t x26 = 37U;
	uint32_t x28 = 374U;
	uint32_t t4 = 1972254533U;

	t4 = (x25-(x26-(x27+x28)));

	if (t4 != 344U) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x29 = 20U;
	static volatile int8_t x30 = -1;
	volatile int32_t t5 = -5967;

	t5 = (x29-(x30-(x31+x32)));

	if (t5 != 220) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x33 = 0U;
	int8_t x34 = INT8_MIN;
	int32_t x36 = 224184;
	volatile int32_t t6 = -196335;

	t6 = (x33-(x34-(x35+x36)));

	if (t6 != 191544) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x37 = 9552U;
	volatile uint32_t x38 = 192U;
	uint32_t x39 = 626237520U;
	static volatile uint32_t t7 = 11106U;

	t7 = (x37-(x38-(x39+x40)));

	if (t7 != 626247135U) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x49 = UINT64_MAX;
	int8_t x50 = INT8_MIN;
	uint16_t x51 = 4542U;
	static volatile uint64_t t8 = 1169108593350623474LLU;

	t8 = (x49-(x50-(x51+x52)));

	if (t8 != 18446744069414588989LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x57 = UINT32_MAX;
	volatile int16_t x58 = 3;
	uint64_t x60 = 199LLU;
	uint64_t t9 = 3494460611388828LLU;

	t9 = (x57-(x58-(x59+x60)));

	if (t9 != 9223372041149743299LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x65 = 87U;
	int32_t x66 = -1;
	int64_t x67 = -64131353005969LL;
	static volatile int64_t t10 = 367LL;

	t10 = (x65-(x66-(x67+x68)));

	if (t10 != -64131352990955LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x70 = 1469228U;
	int16_t x72 = INT16_MIN;
	volatile uint32_t t11 = 38510861U;

	t11 = (x69-(x70-(x71+x72)));

	if (t11 != 2145981906U) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x74 = UINT32_MAX;
	uint64_t x75 = 38743308LLU;
	static int64_t x76 = -396914024LL;
	static volatile uint64_t t12 = 11297135516305LLU;

	t12 = (x73-(x74-(x75+x76)));

	if (t12 != 56410605097365LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x77 = INT64_MAX;
	uint8_t x78 = UINT8_MAX;
	static uint32_t x79 = UINT32_MAX;
	static volatile int64_t t13 = 15LL;

	t13 = (x77-(x78-(x79+x80)));

	if (t13 != 9223372034707291902LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x81 = -214;
	static uint32_t x82 = 4U;
	volatile uint16_t x84 = UINT16_MAX;
	static volatile uint32_t t14 = 78U;

	t14 = (x81-(x82-(x83+x84)));

	if (t14 != 65658U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x85 = INT8_MAX;
	uint64_t x87 = UINT64_MAX;
	int16_t x88 = -1;
	uint64_t t15 = 434289696630LLU;

	t15 = (x85-(x86-(x87+x88)));

	if (t15 != 9223372036854775933LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int64_t x91 = 53753211544577LL;
	static volatile int64_t t16 = 279982062172347LL;

	t16 = (x89-(x90-(x91+x92)));

	if (t16 != 53753211511809LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x93 = INT8_MIN;
	uint32_t x94 = 535510U;
	uint16_t x96 = 3U;
	static volatile uint64_t t17 = 37813LLU;

	t17 = (x93-(x94-(x95+x96)));

	if (t17 != 18446744073709015980LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x97 = INT32_MIN;
	int16_t x98 = 2;
	int8_t x99 = 0;
	uint64_t x100 = 20426966LLU;
	uint64_t t18 = 6LLU;

	t18 = (x97-(x98-(x99+x100)));

	if (t18 != 18446744071582494932LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x101 = 203LLU;
	static uint32_t x102 = 8U;

	t19 = (x101-(x102-(x103+x104)));

	if (t19 != 18446744069414588632LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x106 = 226959597LLU;
	volatile int16_t x107 = INT16_MIN;
	uint64_t x108 = 931LLU;

	t20 = (x105-(x106-(x107+x108)));

	if (t20 != 18446744073482560181LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x117 = 15U;
	int8_t x118 = INT8_MAX;
	int32_t x119 = 15;
	int32_t t21 = 34;

	t21 = (x117-(x118-(x119+x120)));

	if (t21 != 158) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x126 = UINT64_MAX;
	int8_t x127 = INT8_MIN;
	volatile uint64_t t22 = 12LLU;

	t22 = (x125-(x126-(x127+x128)));

	if (t22 != 1LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x133 = INT16_MAX;
	int32_t x135 = INT32_MAX;
	uint64_t x136 = 78005712450925208LLU;
	volatile uint64_t t23 = 167373950331898011LLU;

	t23 = (x133-(x134-(x135+x136)));

	if (t23 != 78227257952695407LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x137 = UINT8_MAX;
	uint32_t x138 = 5U;
	static volatile int32_t x139 = INT32_MIN;
	volatile int64_t t24 = -498112693954766LL;

	t24 = (x137-(x138-(x139+x140)));

	if (t24 != -2147483399LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x142 = 153;

	t25 = (x141-(x142-(x143+x144)));

	if (t25 != 27707545633303505LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x145 = -1;
	volatile int32_t x146 = INT32_MIN;
	int16_t x147 = INT16_MIN;
	static int16_t x148 = INT16_MIN;
	static volatile int32_t t26 = 6404200;

	t26 = (x145-(x146-(x147+x148)));

	if (t26 != 2147418111) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x150 = INT16_MAX;
	int8_t x151 = INT8_MIN;
	uint32_t x152 = 1981U;
	static volatile uint32_t t27 = 2011U;

	t27 = (x149-(x150-(x151+x152)));

	if (t27 != 4294903614U) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x153 = 42U;
	uint32_t x154 = 42009U;
	int8_t x155 = 8;
	volatile int8_t x156 = 0;
	uint32_t t28 = 4U;

	t28 = (x153-(x154-(x155+x156)));

	if (t28 != 4294925337U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x157 = -1;
	uint64_t x158 = 214831LLU;
	static uint16_t x159 = 8782U;
	int64_t x160 = -147151LL;
	uint64_t t29 = 1277145718670322LLU;

	t29 = (x157-(x158-(x159+x160)));

	if (t29 != 18446744073709198415LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x165 = -1;
	volatile int64_t x167 = -1LL;
	int8_t x168 = INT8_MIN;

	t30 = (x165-(x166-(x167+x168)));

	if (t30 != -129LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x169 = UINT64_MAX;
	volatile int32_t x170 = 6134917;
	int32_t x172 = INT32_MIN;
	volatile uint64_t t31 = 84919041911LLU;

	t31 = (x169-(x170-(x171+x172)));

	if (t31 != 18446744071555933132LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x173 = INT16_MIN;
	uint32_t x175 = 12077430U;
	int32_t x176 = INT32_MIN;
	uint32_t t32 = 2490599U;

	t32 = (x173-(x174-(x175+x176)));

	if (t32 != 2159528311U) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x177 = INT8_MAX;
	int32_t x180 = -518989952;
	int32_t t33 = -3494392;

	t33 = (x177-(x178-(x179+x180)));

	if (t33 != -518956802) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x181 = INT64_MAX;
	uint64_t x182 = 340LLU;
	uint16_t x183 = 126U;
	int8_t x184 = INT8_MAX;
	volatile uint64_t t34 = 8771702282992554LLU;

	t34 = (x181-(x182-(x183+x184)));

	if (t34 != 9223372036854775720LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x185 = UINT32_MAX;
	uint16_t x186 = UINT16_MAX;
	int64_t x187 = INT64_MIN;
	volatile int64_t t35 = 290297909LL;

	t35 = (x185-(x186-(x187+x188)));

	if (t35 != -9223372028264906753LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x202 = 45U;
	uint64_t x203 = 522510LLU;
	volatile int32_t x204 = INT32_MIN;
	uint64_t t36 = 7305065064LLU;

	t36 = (x201-(x202-(x203+x204)));

	if (t36 != 18446744071562590432LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x209 = INT8_MAX;
	int16_t x210 = -1;
	int8_t x211 = -1;
	int32_t t37 = 5458;

	t37 = (x209-(x210-(x211+x212)));

	if (t37 != 126) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x213 = 0U;
	int8_t x214 = -1;
	uint32_t x215 = 3U;
	static volatile uint32_t t38 = 119U;

	t38 = (x213-(x214-(x215+x216)));

	if (t38 != 1402326262U) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x217 = UINT64_MAX;
	static uint64_t x218 = 109114034978936885LLU;
	uint32_t x219 = UINT32_MAX;
	uint64_t x220 = UINT64_MAX;
	volatile uint64_t t39 = 5751971282LLU;

	t39 = (x217-(x218-(x219+x220)));

	if (t39 != 18337630043025582024LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint8_t x221 = 97U;
	int8_t x222 = -38;
	int32_t x223 = 100;
	volatile int16_t x224 = -1;
	static volatile int32_t t40 = 1;

	t40 = (x221-(x222-(x223+x224)));

	if (t40 != 234) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x228 = INT32_MIN;
	uint32_t t41 = 1870U;

	t41 = (x225-(x226-(x227+x228)));

	if (t41 != 3267759U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x229 = INT64_MIN;
	int64_t t42 = -2127120780255LL;

	t42 = (x229-(x230-(x231+x232)));

	if (t42 != -9223372036854770442LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int32_t x233 = INT32_MIN;
	static int64_t x234 = -1LL;
	static uint64_t x235 = 80LLU;
	int64_t x236 = -125LL;
	volatile uint64_t t43 = 26422820656722LLU;

	t43 = (x233-(x234-(x235+x236)));

	if (t43 != 18446744071562067924LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x237 = INT32_MIN;
	volatile uint8_t x238 = UINT8_MAX;
	int64_t x239 = 122LL;
	int64_t x240 = -48LL;

	t44 = (x237-(x238-(x239+x240)));

	if (t44 != -2147483829LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x246 = 0;
	int64_t x247 = -1LL;
	uint64_t t45 = 13642677LLU;

	t45 = (x245-(x246-(x247+x248)));

	if (t45 != 1326644063877LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x249 = 9U;
	uint64_t x250 = 133766179LLU;
	int16_t x251 = INT16_MIN;

	t46 = (x249-(x250-(x251+x252)));

	if (t46 != 18446744073575752680LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x253 = 1021U;
	volatile uint16_t x254 = 0U;
	int32_t x255 = INT32_MIN;
	uint32_t x256 = 67467U;
	static uint32_t t47 = 24U;

	t47 = (x253-(x254-(x255+x256)));

	if (t47 != 2147552136U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x258 = 79;
	int32_t x259 = INT32_MIN;
	volatile int64_t t48 = -164392LL;

	t48 = (x257-(x258-(x259+x260)));

	if (t48 != 9223372034707306300LL) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int64_t x261 = INT64_MIN;
	volatile int32_t x262 = 26;
	static int32_t x263 = 6819505;
	int8_t x264 = INT8_MIN;
	volatile int64_t t49 = -1LL;

	t49 = (x261-(x262-(x263+x264)));

	if (t49 != -9223372036847956457LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x265 = -1;
	uint64_t x267 = 868LLU;
	int16_t x268 = -1;
	static volatile uint64_t t50 = 0LLU;

	t50 = (x265-(x266-(x267+x268)));

	if (t50 != 994LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x274 = UINT8_MAX;
	static int32_t x275 = INT32_MIN;
	int32_t x276 = INT32_MAX;
	static int32_t t51 = 1293;

	t51 = (x273-(x274-(x275+x276)));

	if (t51 != -689) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x277 = 14759622LLU;
	int8_t x278 = -2;
	int8_t x279 = -1;
	int64_t x280 = -1LL;
	uint64_t t52 = 64247LLU;

	t52 = (x277-(x278-(x279+x280)));

	if (t52 != 14759622LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x281 = 997;
	static uint64_t x282 = 120396945645318LLU;
	int64_t x283 = INT64_MIN;
	volatile uint16_t x284 = UINT16_MAX;

	t53 = (x281-(x282-(x283+x284)));

	if (t53 != 9223251639909197022LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x285 = INT16_MAX;
	volatile int16_t x286 = INT16_MIN;
	int8_t x287 = -1;
	int16_t x288 = -48;
	static int32_t t54 = -41753;

	t54 = (x285-(x286-(x287+x288)));

	if (t54 != 65486) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x290 = 9U;
	int16_t x291 = INT16_MAX;
	int32_t x292 = -235421377;

	t55 = (x289-(x290-(x291+x292)));

	if (t55 != -235388375) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x297 = 0;
	int8_t x299 = 1;
	volatile uint64_t x300 = UINT64_MAX;
	volatile uint64_t t56 = 12LLU;

	t56 = (x297-(x298-(x299+x300)));

	if (t56 != 1LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x301 = INT16_MAX;
	static uint8_t x302 = 1U;
	static int64_t x304 = INT64_MIN;
	volatile int64_t t57 = 146LL;

	t57 = (x301-(x302-(x303+x304)));

	if (t57 != -9223372036854742915LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x309 = INT8_MIN;
	int64_t x310 = -1LL;
	uint16_t x311 = UINT16_MAX;
	int16_t x312 = INT16_MAX;
	int64_t t58 = 274LL;

	t58 = (x309-(x310-(x311+x312)));

	if (t58 != 98175LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x313 = UINT16_MAX;
	static int16_t x314 = -1;
	static volatile uint32_t x315 = UINT32_MAX;
	int16_t x316 = INT16_MIN;
	volatile uint32_t t59 = 11132U;

	t59 = (x313-(x314-(x315+x316)));

	if (t59 != 32767U) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x318 = -1LL;
	static int64_t x319 = -1LL;
	int64_t t60 = -834LL;

	t60 = (x317-(x318-(x319+x320)));

	if (t60 != 2147483647LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x321 = 20350U;
	static volatile int32_t x323 = -1;
	uint32_t x324 = UINT32_MAX;
	volatile uint32_t t61 = 5916182U;

	t61 = (x321-(x322-(x323+x324)));

	if (t61 != 19844U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x326 = -1765;
	uint64_t x327 = UINT64_MAX;
	int32_t x328 = -1;
	uint64_t t62 = 173244246056LLU;

	t62 = (x325-(x326-(x327+x328)));

	if (t62 != 4294969058LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x329 = 0;
	uint16_t x330 = 1U;
	static uint64_t x331 = 14983686097108LLU;
	static int8_t x332 = INT8_MAX;
	volatile uint64_t t63 = 20574166315805541LLU;

	t63 = (x329-(x330-(x331+x332)));

	if (t63 != 14983686097234LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x334 = 114059U;
	int32_t x336 = INT32_MIN;
	static volatile uint64_t t64 = 6617758541134774662LLU;

	t64 = (x333-(x334-(x335+x336)));

	if (t64 != 1127917637685LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x337 = 24568751;
	uint64_t x338 = UINT64_MAX;
	volatile int8_t x339 = INT8_MIN;
	static int32_t x340 = INT32_MAX;
	uint64_t t65 = 1339478538964LLU;

	t65 = (x337-(x338-(x339+x340)));

	if (t65 != 2172052271LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x345 = 18;
	uint64_t x346 = 1576084920592438LLU;
	int64_t x347 = 4457658109297734507LL;
	static volatile uint8_t x348 = UINT8_MAX;
	uint64_t t66 = 20182847190728443LLU;

	t66 = (x345-(x346-(x347+x348)));

	if (t66 != 4456082024377142342LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x353 = 2LL;
	int8_t x355 = -13;
	uint32_t x356 = 236U;
	volatile int64_t t67 = 29901777LL;

	t67 = (x353-(x354-(x355+x356)));

	if (t67 != -4294967031LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x357 = UINT16_MAX;
	uint32_t x358 = UINT32_MAX;
	int16_t x359 = INT16_MAX;

	t68 = (x357-(x358-(x359+x360)));

	if (t68 != -4294868994LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x361 = -1;
	uint32_t x362 = 2U;
	int32_t x363 = 142178;
	int16_t x364 = 15927;
	uint32_t t69 = 12952U;

	t69 = (x361-(x362-(x363+x364)));

	if (t69 != 158102U) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x369 = INT32_MAX;
	int32_t x371 = -116499;
	int8_t x372 = INT8_MAX;
	static uint64_t t70 = 14659LLU;

	t70 = (x369-(x370-(x371+x372)));

	if (t70 != 18446740207805437538LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x374 = -1;
	int8_t x375 = INT8_MIN;
	static int16_t x376 = INT16_MAX;
	volatile int32_t t71 = 27172;

	t71 = (x373-(x374-(x375+x376)));

	if (t71 != 32652) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x377 = INT8_MIN;
	uint16_t x378 = 844U;
	int16_t x379 = INT16_MIN;
	int64_t x380 = 6879LL;
	int64_t t72 = -3250LL;

	t72 = (x377-(x378-(x379+x380)));

	if (t72 != -26861LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x384 = -1;

	t73 = (x381-(x382-(x383+x384)));

	if (t73 != 812722671742LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x385 = UINT8_MAX;
	static int16_t x386 = INT16_MIN;
	int64_t x388 = -1LL;
	static int64_t t74 = 3491120LL;

	t74 = (x385-(x386-(x387+x388)));

	if (t74 != 65789LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x389 = -1;
	static volatile int8_t x390 = INT8_MIN;
	volatile uint64_t x391 = 1459355LLU;
	static uint16_t x392 = UINT16_MAX;
	volatile uint64_t t75 = 30LLU;

	t75 = (x389-(x390-(x391+x392)));

	if (t75 != 1525017LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x393 = -1LL;
	int16_t x394 = 30;
	uint16_t x395 = 2687U;
	int16_t x396 = INT16_MAX;
	volatile int64_t t76 = -1784698199662800279LL;

	t76 = (x393-(x394-(x395+x396)));

	if (t76 != 35423LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x397 = 7U;
	volatile int16_t x398 = 2;
	volatile int32_t x399 = -1;
	static int8_t x400 = INT8_MAX;
	static uint32_t t77 = 4054490U;

	t77 = (x397-(x398-(x399+x400)));

	if (t77 != 131U) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x402 = 8563077902LLU;
	int64_t x404 = INT64_MIN;

	t78 = (x401-(x402-(x403+x404)));

	if (t78 != 9223372030439188210LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x406 = INT64_MIN;
	int8_t x407 = -1;

	t79 = (x405-(x406-(x407+x408)));

	if (t79 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint8_t x410 = 2U;
	static volatile int8_t x411 = -1;
	int8_t x412 = 7;
	int32_t t80 = 0;

	t80 = (x409-(x410-(x411+x412)));

	if (t80 != 3) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x413 = UINT8_MAX;
	int16_t x414 = -1;
	static int64_t x415 = -1LL;

	t81 = (x413-(x414-(x415+x416)));

	if (t81 != 29571638409127472LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x421 = UINT8_MAX;
	volatile uint32_t x422 = 1698788263U;
	int32_t x423 = INT32_MAX;
	uint64_t t82 = 47793867LLU;

	t82 = (x421-(x422-(x423+x424)));

	if (t82 != 3049571709328092LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x425 = -773;
	uint64_t x426 = 17LLU;
	static volatile int8_t x427 = -1;
	static volatile uint16_t x428 = 223U;
	uint64_t t83 = 839188398LLU;

	t83 = (x425-(x426-(x427+x428)));

	if (t83 != 18446744073709551048LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x429 = INT32_MIN;
	int8_t x430 = INT8_MAX;
	uint64_t t84 = 1657457727574LLU;

	t84 = (x429-(x430-(x431+x432)));

	if (t84 != 102342699932511LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x438 = -285596330639283LL;
	uint64_t x439 = UINT64_MAX;
	static int64_t x440 = INT64_MIN;
	uint64_t t85 = 742LLU;

	t85 = (x437-(x438-(x439+x440)));

	if (t85 != 14880673677844509474LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x445 = 192552U;
	int16_t x446 = INT16_MAX;
	volatile int32_t x447 = 546890881;
	int64_t x448 = INT64_MIN;
	static int64_t t86 = -5894212439131172LL;

	t86 = (x445-(x446-(x447+x448)));

	if (t86 != -9223372036307725142LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x450 = -1;
	int8_t x451 = 13;
	uint32_t x452 = 0U;
	static uint32_t t87 = 49502264U;

	t87 = (x449-(x450-(x451+x452)));

	if (t87 != 65549U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x453 = -1;
	int32_t x455 = INT32_MIN;
	volatile uint32_t t88 = 992U;

	t88 = (x453-(x454-(x455+x456)));

	if (t88 != 2147483644U) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x459 = 5658U;
	int16_t x460 = -195;
	static int32_t t89 = -165101048;

	t89 = (x457-(x458-(x459+x460)));

	if (t89 != -2147478210) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x462 = 23U;
	int32_t x463 = -13;
	uint64_t x464 = UINT64_MAX;

	t90 = (x461-(x462-(x463+x464)));

	if (t90 != 18446744071562067931LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x465 = 60;
	uint16_t x468 = 7854U;
	volatile int64_t t91 = -1202LL;

	t91 = (x465-(x466-(x467+x468)));

	if (t91 != 9223372036854750954LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x474 = 309838U;
	uint32_t x476 = 5782643U;
	volatile uint32_t t92 = 13172158U;

	t92 = (x473-(x474-(x475+x476)));

	if (t92 != 5472796U) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x478 = 4564030LLU;
	volatile int8_t x479 = INT8_MAX;

	t93 = (x477-(x478-(x479+x480)));

	if (t93 != 15973110532852LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x481 = 2;
	static int16_t x482 = -1505;
	int8_t x483 = INT8_MIN;
	static int16_t x484 = INT16_MIN;
	int32_t t94 = -16453778;

	t94 = (x481-(x482-(x483+x484)));

	if (t94 != -31389) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x485 = -1LL;
	int32_t x486 = INT32_MIN;
	int16_t x487 = INT16_MIN;
	int16_t x488 = 11287;
	int64_t t95 = -1LL;

	t95 = (x485-(x486-(x487+x488)));

	if (t95 != 2147462166LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x494 = 78;
	int8_t x495 = INT8_MIN;
	uint64_t x496 = 51LLU;
	static uint64_t t96 = 11LLU;

	t96 = (x493-(x494-(x495+x496)));

	if (t96 != 18446744073709551460LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int64_t x502 = INT64_MIN;
	static uint64_t x503 = 6497966089LLU;
	static uint16_t x504 = 12966U;
	uint64_t t97 = 1068139096LLU;

	t97 = (x501-(x502-(x503+x504)));

	if (t97 != 6497979055LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x505 = 446902078511LLU;
	int32_t x506 = 2755483;
	uint8_t x507 = 26U;
	uint8_t x508 = UINT8_MAX;
	uint64_t t98 = 1653813774353623LLU;

	t98 = (x505-(x506-(x507+x508)));

	if (t98 != 446899323309LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x510 = 4U;
	int64_t x511 = 13LL;
	volatile int16_t x512 = -1;
	volatile uint64_t t99 = 78558928370862LLU;

	t99 = (x509-(x510-(x511+x512)));

	if (t99 != 214916671750188310LLU) { NG(); } else { ; }
	
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

