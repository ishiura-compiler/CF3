#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = -1;
int32_t x3 = INT32_MAX;
volatile int32_t t0 = 12646625;
int16_t x6 = -1;
int16_t x7 = INT16_MIN;
static int32_t x10 = -1;
int8_t x12 = INT8_MIN;
int32_t x14 = INT32_MIN;
static int64_t x26 = INT64_MAX;
int32_t x29 = 9797523;
int16_t x33 = -521;
int32_t x36 = INT32_MIN;
volatile int32_t t6 = 63160488;
static volatile int16_t x37 = INT16_MIN;
int64_t t8 = -40899381731655LL;
volatile int32_t t9 = -860;
static volatile uint32_t x52 = 39U;
int16_t x57 = 436;
static int8_t x70 = INT8_MIN;
int64_t x72 = INT64_MIN;
int32_t x74 = 4754;
volatile int32_t x90 = INT32_MIN;
uint32_t x92 = 4760183U;
static uint32_t t18 = 244284434U;
uint16_t x103 = 1089U;
volatile int64_t x111 = -1LL;
volatile int64_t x112 = INT64_MAX;
int64_t x115 = -1LL;
volatile uint16_t x116 = 10U;
int64_t x117 = 155723172859511LL;
static int64_t t22 = -383064693LL;
int32_t x122 = INT32_MIN;
uint64_t x145 = UINT64_MAX;
static int8_t x153 = -1;
uint64_t x159 = UINT64_MAX;
uint8_t x170 = 110U;
uint64_t t32 = 12LLU;
volatile int64_t x187 = INT64_MIN;
int32_t x197 = -6;
volatile int64_t x201 = -1LL;
uint64_t x203 = UINT64_MAX;
volatile int32_t x215 = -797;
volatile int32_t x221 = -1;
int8_t x229 = 5;
static uint64_t t40 = 169LLU;
int32_t x241 = -1;
static uint32_t x243 = UINT32_MAX;
static uint64_t t43 = 8006LLU;
static volatile uint8_t x250 = 1U;
int32_t x251 = 0;
volatile int32_t x252 = 82372810;
volatile uint64_t x254 = 637509775475314190LLU;
int8_t x260 = 3;
int32_t t46 = 191;
uint16_t x265 = 2876U;
int32_t x294 = -1014333;
static volatile int64_t x300 = INT64_MIN;
uint16_t x308 = 5U;
volatile uint64_t t52 = 1025714304185LLU;
int64_t t54 = 3211122765367958LL;
volatile int32_t t55 = -8;
volatile int16_t x329 = INT16_MIN;
int16_t x332 = 1;
static volatile uint64_t x333 = 2308LLU;
int64_t x334 = -7641427LL;
int8_t x339 = INT8_MIN;
uint32_t x352 = 7U;
static int16_t x360 = INT16_MIN;
int16_t x363 = 19;
uint64_t x370 = 2647775105319729LLU;
volatile int8_t x385 = -1;
uint64_t x387 = 415621282854669LLU;
int8_t x389 = INT8_MAX;
volatile uint64_t t71 = 954258LLU;
int8_t x398 = 3;
uint8_t x400 = 32U;
volatile int64_t t75 = 880240132357LL;
int16_t x432 = -1;
static volatile int32_t t81 = -2135;
volatile int16_t x458 = -1;
volatile uint64_t x483 = 1919LLU;
int8_t x493 = -1;
int8_t x515 = 16;
static int32_t x520 = 99527591;
uint16_t x527 = UINT16_MAX;
uint64_t x541 = UINT64_MAX;
int16_t x549 = INT16_MIN;
int8_t x551 = 1;
uint16_t x552 = UINT16_MAX;
uint64_t x553 = UINT64_MAX;
volatile int8_t x556 = -1;


void f0(void) {
	volatile uint8_t x2 = UINT8_MAX;
	int32_t x4 = INT32_MAX;

	t0 = (x1+((x2-x3)+x4));

	if (t0 != 254) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 950;
	volatile int64_t x8 = INT64_MIN;
	static int64_t t1 = 702608821708594227LL;

	t1 = (x5+((x6-x7)+x8));

	if (t1 != -9223372036854742091LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MAX;
	volatile uint32_t x11 = 20U;
	uint32_t t2 = 1204U;

	t2 = (x9+((x10-x11)+x12));

	if (t2 != 4294967274U) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = INT64_MIN;
	static int8_t x15 = INT8_MIN;
	uint32_t x16 = UINT32_MAX;
	static int64_t t3 = 2865942555974858404LL;

	t3 = (x13+((x14-x15)+x16));

	if (t3 != -9223372034707292033LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x25 = -24;
	uint8_t x27 = UINT8_MAX;
	volatile int8_t x28 = -2;
	volatile int64_t t4 = -1538584082866501LL;

	t4 = (x25+((x26-x27)+x28));

	if (t4 != 9223372036854775526LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x30 = 137;
	int32_t x31 = INT32_MAX;
	uint8_t x32 = 2U;
	int32_t t5 = -386;

	t5 = (x29+((x30-x31)+x32));

	if (t5 != -2137685985) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x34 = INT16_MAX;
	int8_t x35 = INT8_MIN;

	t6 = (x33+((x34-x35)+x36));

	if (t6 != -2147451274) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x38 = -2;
	int8_t x39 = INT8_MIN;
	int8_t x40 = 0;
	static int32_t t7 = -13931;

	t7 = (x37+((x38-x39)+x40));

	if (t7 != -32642) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x41 = -1LL;
	volatile uint8_t x42 = 11U;
	int32_t x43 = -1;
	int8_t x44 = INT8_MIN;

	t8 = (x41+((x42-x43)+x44));

	if (t8 != -117LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x45 = INT32_MAX;
	int8_t x46 = INT8_MIN;
	int8_t x47 = INT8_MAX;
	uint8_t x48 = 97U;

	t9 = (x45+((x46-x47)+x48));

	if (t9 != 2147483489) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = INT8_MIN;
	volatile uint32_t x50 = UINT32_MAX;
	volatile int16_t x51 = -1;
	volatile uint32_t t10 = 24408383U;

	t10 = (x49+((x50-x51)+x52));

	if (t10 != 4294967207U) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x58 = -1;
	volatile uint32_t x59 = 14361078U;
	static volatile uint64_t x60 = UINT64_MAX;
	volatile uint64_t t11 = 12471LLU;

	t11 = (x57+((x58-x59)+x60));

	if (t11 != 4280606652LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x61 = 481;
	static volatile uint8_t x62 = 3U;
	int32_t x63 = -1;
	int64_t x64 = -1LL;
	static int64_t t12 = -12493237540912504LL;

	t12 = (x61+((x62-x63)+x64));

	if (t12 != 484LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x65 = INT16_MAX;
	int16_t x66 = INT16_MIN;
	int32_t x67 = -1;
	volatile uint64_t x68 = UINT64_MAX;
	volatile uint64_t t13 = UINT64_MAX;

	t13 = (x65+((x66-x67)+x68));

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x69 = 1;
	uint64_t x71 = UINT64_MAX;
	uint64_t t14 = 80866504LLU;

	t14 = (x69+((x70-x71)+x72));

	if (t14 != 9223372036854775682LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x73 = INT8_MIN;
	int64_t x75 = -16LL;
	static int64_t x76 = INT64_MIN;
	volatile int64_t t15 = -534782986LL;

	t15 = (x73+((x74-x75)+x76));

	if (t15 != -9223372036854771166LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x77 = 38U;
	int64_t x78 = -1LL;
	int16_t x79 = -1;
	int32_t x80 = INT32_MAX;
	volatile int64_t t16 = 40191904741LL;

	t16 = (x77+((x78-x79)+x80));

	if (t16 != 2147483685LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x81 = -1;
	volatile int8_t x82 = INT8_MAX;
	volatile int64_t x83 = INT64_MAX;
	int8_t x84 = 0;
	int64_t t17 = -448066292186099LL;

	t17 = (x81+((x82-x83)+x84));

	if (t17 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x89 = 11U;
	uint32_t x91 = UINT32_MAX;

	t18 = (x89+((x90-x91)+x92));

	if (t18 != 2152243843U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x101 = UINT64_MAX;
	uint8_t x102 = UINT8_MAX;
	int8_t x104 = INT8_MAX;
	volatile uint64_t t19 = 45564101832LLU;

	t19 = (x101+((x102-x103)+x104));

	if (t19 != 18446744073709550908LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x109 = INT32_MAX;
	uint64_t x110 = 82LLU;
	volatile uint64_t t20 = 90767800LLU;

	t20 = (x109+((x110-x111)+x112));

	if (t20 != 9223372039002259537LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x113 = -45017;
	int16_t x114 = INT16_MIN;
	static volatile int64_t t21 = 6029LL;

	t21 = (x113+((x114-x115)+x116));

	if (t21 != -77774LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x118 = INT16_MIN;
	int16_t x119 = 7666;
	int64_t x120 = -22458LL;

	t22 = (x117+((x118-x119)+x120));

	if (t22 != 155723172796619LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x121 = -72;
	uint32_t x123 = UINT32_MAX;
	volatile uint32_t x124 = 36U;
	volatile uint32_t t23 = 11U;

	t23 = (x121+((x122-x123)+x124));

	if (t23 != 2147483613U) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x129 = UINT8_MAX;
	static int16_t x130 = -1;
	uint64_t x131 = UINT64_MAX;
	uint32_t x132 = 61947144U;
	static volatile uint64_t t24 = 154631266465658LLU;

	t24 = (x129+((x130-x131)+x132));

	if (t24 != 61947399LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x146 = UINT16_MAX;
	static int8_t x147 = 7;
	volatile int16_t x148 = -40;
	uint64_t t25 = 7467213423623LLU;

	t25 = (x145+((x146-x147)+x148));

	if (t25 != 65487LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x154 = INT16_MAX;
	int32_t x155 = -1;
	static int32_t x156 = INT32_MIN;
	volatile int32_t t26 = 151710;

	t26 = (x153+((x154-x155)+x156));

	if (t26 != -2147450881) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x157 = 12367U;
	static uint32_t x158 = 19U;
	int32_t x160 = 15;
	volatile uint64_t t27 = 479071LLU;

	t27 = (x157+((x158-x159)+x160));

	if (t27 != 12402LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x161 = -3;
	uint64_t x162 = 366809149LLU;
	uint16_t x163 = UINT16_MAX;
	uint64_t x164 = 23437401726663575LLU;
	uint64_t t28 = 209516789733444LLU;

	t28 = (x161+((x162-x163)+x164));

	if (t28 != 23437402093407186LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x165 = 504357;
	static int8_t x166 = -1;
	uint8_t x167 = UINT8_MAX;
	uint16_t x168 = UINT16_MAX;
	volatile int32_t t29 = 565080529;

	t29 = (x165+((x166-x167)+x168));

	if (t29 != 569636) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x169 = UINT8_MAX;
	int64_t x171 = -1LL;
	uint8_t x172 = 0U;
	volatile int64_t t30 = 1856324464LL;

	t30 = (x169+((x170-x171)+x172));

	if (t30 != 366LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x173 = 3U;
	static uint64_t x174 = 12828156556256LLU;
	int16_t x175 = -70;
	volatile int8_t x176 = 1;
	volatile uint64_t t31 = 22903LLU;

	t31 = (x173+((x174-x175)+x176));

	if (t31 != 12828156556330LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint8_t x177 = UINT8_MAX;
	int8_t x178 = INT8_MAX;
	uint64_t x179 = 10519532LLU;
	int32_t x180 = 130689;

	t32 = (x177+((x178-x179)+x180));

	if (t32 != 18446744073699163155LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x185 = INT8_MAX;
	uint64_t x186 = 28619172030248076LLU;
	uint64_t x188 = 102762LLU;
	volatile uint64_t t33 = 127LLU;

	t33 = (x185+((x186-x187)+x188));

	if (t33 != 9251991208885126773LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x189 = -1LL;
	uint8_t x190 = UINT8_MAX;
	volatile uint16_t x191 = UINT16_MAX;
	uint8_t x192 = UINT8_MAX;
	static volatile int64_t t34 = 231433958054LL;

	t34 = (x189+((x190-x191)+x192));

	if (t34 != -65026LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x193 = INT32_MIN;
	int32_t x194 = INT32_MIN;
	int64_t x195 = -213910913921152235LL;
	static volatile uint16_t x196 = 815U;
	int64_t t35 = 11765538LL;

	t35 = (x193+((x194-x195)+x196));

	if (t35 != 213910909626185754LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x198 = -821035835;
	int8_t x199 = -1;
	int8_t x200 = 1;
	static volatile int32_t t36 = 2;

	t36 = (x197+((x198-x199)+x200));

	if (t36 != -821035839) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x202 = -79628164LL;
	volatile int8_t x204 = INT8_MIN;
	volatile uint64_t t37 = 16232900092304118LLU;

	t37 = (x201+((x202-x203)+x204));

	if (t37 != 18446744073629923324LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x213 = INT8_MIN;
	volatile uint32_t x214 = 41678U;
	uint32_t x216 = 8U;
	volatile uint32_t t38 = 303U;

	t38 = (x213+((x214-x215)+x216));

	if (t38 != 42355U) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int16_t x222 = -13;
	int16_t x223 = INT16_MAX;
	uint32_t x224 = 1452743U;
	uint32_t t39 = 109619U;

	t39 = (x221+((x222-x223)+x224));

	if (t39 != 1419962U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x230 = 2010;
	static uint64_t x231 = UINT64_MAX;
	int8_t x232 = -1;

	t40 = (x229+((x230-x231)+x232));

	if (t40 != 2015LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x233 = INT8_MIN;
	int32_t x234 = INT32_MIN;
	int32_t x235 = -1;
	int64_t x236 = -1LL;
	int64_t t41 = -2019617523LL;

	t41 = (x233+((x234-x235)+x236));

	if (t41 != -2147483776LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x242 = -3108;
	volatile int16_t x244 = -10;
	uint32_t t42 = 3U;

	t42 = (x241+((x242-x243)+x244));

	if (t42 != 4294964178U) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x245 = 35912129136919LLU;
	static int32_t x246 = INT32_MIN;
	static int64_t x247 = -360366464548328318LL;
	int32_t x248 = INT32_MIN;

	t43 = (x245+((x246-x247)+x248));

	if (t43 != 360402372382497941LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x249 = 1007140U;
	static volatile uint32_t t44 = 1U;

	t44 = (x249+((x250-x251)+x252));

	if (t44 != 83379951U) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x253 = 6U;
	volatile int64_t x255 = INT64_MAX;
	static uint32_t x256 = 790603U;
	uint64_t t45 = 187458275722LLU;

	t45 = (x253+((x254-x255)+x256));

	if (t45 != 9860881812330880608LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x257 = INT16_MAX;
	int16_t x258 = INT16_MAX;
	int16_t x259 = INT16_MAX;

	t46 = (x257+((x258-x259)+x260));

	if (t46 != 32770) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x266 = 11U;
	uint8_t x267 = 111U;
	int8_t x268 = -1;
	int32_t t47 = 1;

	t47 = (x265+((x266-x267)+x268));

	if (t47 != 2775) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x273 = -1;
	static int8_t x274 = INT8_MIN;
	int16_t x275 = -1;
	static volatile int8_t x276 = INT8_MIN;
	volatile int32_t t48 = -1;

	t48 = (x273+((x274-x275)+x276));

	if (t48 != -256) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x289 = 815320384U;
	volatile uint64_t x290 = UINT64_MAX;
	int64_t x291 = 319579LL;
	uint64_t x292 = UINT64_MAX;
	uint64_t t49 = 14994LLU;

	t49 = (x289+((x290-x291)+x292));

	if (t49 != 815000803LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x293 = 2;
	uint64_t x295 = 14511279218540562LLU;
	static int8_t x296 = INT8_MIN;
	uint64_t t50 = 229674333827566LLU;

	t50 = (x293+((x294-x295)+x296));

	if (t50 != 18432232794489996595LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x297 = 1LL;
	uint64_t x298 = UINT64_MAX;
	uint16_t x299 = UINT16_MAX;
	static volatile uint64_t t51 = 1588514479199265135LLU;

	t51 = (x297+((x298-x299)+x300));

	if (t51 != 9223372036854710273LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x305 = INT16_MIN;
	uint64_t x306 = UINT64_MAX;
	int64_t x307 = -1711LL;

	t52 = (x305+((x306-x307)+x308));

	if (t52 != 18446744073709520563LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x309 = 88;
	uint64_t x310 = UINT64_MAX;
	uint8_t x311 = UINT8_MAX;
	static int16_t x312 = -102;
	uint64_t t53 = 5336LLU;

	t53 = (x309+((x310-x311)+x312));

	if (t53 != 18446744073709551346LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x317 = -1;
	int64_t x318 = -4916864364267380LL;
	int32_t x319 = -234;
	int16_t x320 = 220;

	t54 = (x317+((x318-x319)+x320));

	if (t54 != -4916864364266927LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x321 = 25U;
	static volatile int32_t x322 = -624898665;
	int16_t x323 = -1;
	int16_t x324 = 3133;

	t55 = (x321+((x322-x323)+x324));

	if (t55 != -624895506) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x325 = 1;
	uint16_t x326 = UINT16_MAX;
	static volatile uint8_t x327 = 5U;
	int16_t x328 = INT16_MIN;
	volatile int32_t t56 = 23959;

	t56 = (x325+((x326-x327)+x328));

	if (t56 != 32763) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x330 = 39U;
	uint16_t x331 = 3U;
	volatile int32_t t57 = 3179;

	t57 = (x329+((x330-x331)+x332));

	if (t57 != -32731) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x335 = INT32_MIN;
	volatile int16_t x336 = 15056;
	volatile uint64_t t58 = 1544299661600048LLU;

	t58 = (x333+((x334-x335)+x336));

	if (t58 != 2139859585LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x337 = INT32_MIN;
	int16_t x338 = 5;
	int16_t x340 = -1;
	int32_t t59 = -51430;

	t59 = (x337+((x338-x339)+x340));

	if (t59 != -2147483516) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x341 = INT64_MIN;
	volatile int8_t x342 = INT8_MAX;
	volatile int8_t x343 = 1;
	int16_t x344 = -4;
	int64_t t60 = 307LL;

	t60 = (x341+((x342-x343)+x344));

	if (t60 != -9223372036854775686LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x345 = 0U;
	int32_t x346 = -111241109;
	static uint32_t x347 = 46437U;
	static uint32_t x348 = 0U;
	volatile uint32_t t61 = 486U;

	t61 = (x345+((x346-x347)+x348));

	if (t61 != 4183679750U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x349 = -1;
	int32_t x350 = -56314;
	static int8_t x351 = -1;
	static volatile uint32_t t62 = 1177470U;

	t62 = (x349+((x350-x351)+x352));

	if (t62 != 4294910989U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x353 = -16;
	int16_t x354 = INT16_MIN;
	int64_t x355 = INT64_MIN;
	int64_t x356 = -1LL;
	volatile int64_t t63 = 47255LL;

	t63 = (x353+((x354-x355)+x356));

	if (t63 != 9223372036854743023LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x357 = INT16_MIN;
	int64_t x358 = -29389155038686632LL;
	uint16_t x359 = 53U;
	volatile int64_t t64 = -744194993040956LL;

	t64 = (x357+((x358-x359)+x360));

	if (t64 != -29389155038752221LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x361 = -1;
	int16_t x362 = INT16_MAX;
	int64_t x364 = INT64_MIN;
	volatile int64_t t65 = -47875LL;

	t65 = (x361+((x362-x363)+x364));

	if (t65 != -9223372036854743061LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x369 = 1049387910003LL;
	int64_t x371 = INT64_MIN;
	int64_t x372 = -1LL;
	volatile uint64_t t66 = 272409940015LLU;

	t66 = (x369+((x370-x371)+x372));

	if (t66 != 9226020861348005539LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x373 = 1128000;
	int32_t x374 = 375965379;
	uint64_t x375 = 1LLU;
	uint64_t x376 = 68227672LLU;
	volatile uint64_t t67 = 58033466789647022LLU;

	t67 = (x373+((x374-x375)+x376));

	if (t67 != 445321050LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x377 = INT16_MIN;
	int8_t x378 = -1;
	uint8_t x379 = 116U;
	volatile int16_t x380 = INT16_MIN;
	int32_t t68 = -4254178;

	t68 = (x377+((x378-x379)+x380));

	if (t68 != -65653) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x381 = 7U;
	uint32_t x382 = 13U;
	uint16_t x383 = 486U;
	int64_t x384 = -4025224675802LL;
	int64_t t69 = 71757474988LL;

	t69 = (x381+((x382-x383)+x384));

	if (t69 != -4020929708972LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x386 = 49;
	int32_t x388 = INT32_MIN;
	uint64_t t70 = 3037928863060LLU;

	t70 = (x385+((x386-x387)+x388));

	if (t70 != 18446328450279213347LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x390 = -1;
	uint64_t x391 = 472836810213695LLU;
	uint32_t x392 = 9706001U;

	t71 = (x389+((x390-x391)+x392));

	if (t71 != 18446271236909044048LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x393 = 7;
	int32_t x394 = -56;
	uint64_t x395 = 10243252737519009LLU;
	int8_t x396 = INT8_MAX;
	volatile uint64_t t72 = 66378506975LLU;

	t72 = (x393+((x394-x395)+x396));

	if (t72 != 18436500820972032685LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x397 = INT16_MIN;
	uint8_t x399 = 6U;
	static int32_t t73 = -274899;

	t73 = (x397+((x398-x399)+x400));

	if (t73 != -32739) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x417 = -1;
	volatile int64_t x418 = 34147900399786779LL;
	int64_t x419 = INT64_MAX;
	uint64_t x420 = 574LLU;
	uint64_t t74 = 271LLU;

	t74 = (x417+((x418-x419)+x420));

	if (t74 != 9257519937254563161LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x421 = -1;
	uint32_t x422 = UINT32_MAX;
	volatile int32_t x423 = 38861876;
	int64_t x424 = INT64_MIN;

	t75 = (x421+((x422-x423)+x424));

	if (t75 != -9223372032598670390LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x429 = 108U;
	int64_t x430 = INT64_MIN;
	int16_t x431 = -1;
	int64_t t76 = -26096LL;

	t76 = (x429+((x430-x431)+x432));

	if (t76 != -9223372036854775700LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x433 = INT8_MIN;
	uint16_t x434 = UINT16_MAX;
	int16_t x435 = INT16_MIN;
	int16_t x436 = -1;
	int32_t t77 = 1;

	t77 = (x433+((x434-x435)+x436));

	if (t77 != 98174) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x437 = -1;
	static volatile uint8_t x438 = 8U;
	static volatile uint64_t x439 = UINT64_MAX;
	uint32_t x440 = UINT32_MAX;
	static volatile uint64_t t78 = 259286145LLU;

	t78 = (x437+((x438-x439)+x440));

	if (t78 != 4294967303LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x441 = INT8_MIN;
	uint8_t x442 = 2U;
	uint32_t x443 = 78U;
	int32_t x444 = INT32_MIN;
	static volatile uint32_t t79 = 1U;

	t79 = (x441+((x442-x443)+x444));

	if (t79 != 2147483444U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x449 = INT32_MAX;
	volatile int64_t x450 = -1LL;
	static volatile int64_t x451 = -520196202LL;
	int32_t x452 = -2742222;
	volatile int64_t t80 = -168460244LL;

	t80 = (x449+((x450-x451)+x452));

	if (t80 != 2664937626LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x453 = -1;
	uint8_t x454 = UINT8_MAX;
	int8_t x455 = -48;
	uint16_t x456 = 5U;

	t81 = (x453+((x454-x455)+x456));

	if (t81 != 307) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x457 = -131019995;
	static volatile int16_t x459 = INT16_MIN;
	static int16_t x460 = -2;
	volatile int32_t t82 = 0;

	t82 = (x457+((x458-x459)+x460));

	if (t82 != -130987230) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x473 = UINT8_MAX;
	uint16_t x474 = 0U;
	static uint32_t x475 = 934327168U;
	static int32_t x476 = INT32_MIN;
	volatile uint32_t t83 = 107525U;

	t83 = (x473+((x474-x475)+x476));

	if (t83 != 1213156735U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x477 = 130219534;
	int16_t x478 = INT16_MIN;
	uint8_t x479 = 0U;
	int8_t x480 = INT8_MAX;
	static volatile int32_t t84 = 6014177;

	t84 = (x477+((x478-x479)+x480));

	if (t84 != 130186893) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x481 = 7381300;
	int32_t x482 = INT32_MIN;
	static int16_t x484 = INT16_MAX;
	volatile uint64_t t85 = 45896434496LLU;

	t85 = (x481+((x482-x483)+x484));

	if (t85 != 18446744071569480116LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x489 = -129935698LL;
	static volatile int64_t x490 = INT64_MIN;
	static int64_t x491 = INT64_MIN;
	uint64_t x492 = 575578860441056657LLU;
	volatile uint64_t t86 = 2594LLU;

	t86 = (x489+((x490-x491)+x492));

	if (t86 != 575578860311120959LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x494 = 617293;
	volatile int8_t x495 = -52;
	uint32_t x496 = 1440U;
	uint32_t t87 = 64298U;

	t87 = (x493+((x494-x495)+x496));

	if (t87 != 618784U) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x497 = 670221577LL;
	uint16_t x498 = 33U;
	static uint16_t x499 = 13U;
	static int32_t x500 = -102;
	int64_t t88 = -1LL;

	t88 = (x497+((x498-x499)+x500));

	if (t88 != 670221495LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x501 = 1U;
	int16_t x502 = INT16_MAX;
	uint16_t x503 = 8171U;
	uint64_t x504 = 32675219LLU;
	static uint64_t t89 = 11068398936LLU;

	t89 = (x501+((x502-x503)+x504));

	if (t89 != 32699816LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x505 = INT32_MAX;
	static volatile uint8_t x506 = 3U;
	volatile uint8_t x507 = UINT8_MAX;
	uint32_t x508 = 3377547U;
	volatile uint32_t t90 = 17891U;

	t90 = (x505+((x506-x507)+x508));

	if (t90 != 2150860942U) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x509 = 1142LL;
	int16_t x510 = -1;
	uint32_t x511 = 1720547U;
	int8_t x512 = INT8_MAX;
	volatile int64_t t91 = 449385684154514LL;

	t91 = (x509+((x510-x511)+x512));

	if (t91 != 4293248017LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x513 = -1;
	int16_t x514 = -31;
	int8_t x516 = -1;
	static int32_t t92 = -3736;

	t92 = (x513+((x514-x515)+x516));

	if (t92 != -49) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x517 = -1;
	int16_t x518 = -1;
	volatile uint16_t x519 = UINT16_MAX;
	int32_t t93 = -4042258;

	t93 = (x517+((x518-x519)+x520));

	if (t93 != 99462054) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x525 = 0U;
	int16_t x526 = INT16_MIN;
	int32_t x528 = INT32_MAX;
	uint32_t t94 = 450825348U;

	t94 = (x525+((x526-x527)+x528));

	if (t94 != 2147385344U) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x529 = UINT64_MAX;
	uint32_t x530 = 1U;
	static uint16_t x531 = 8529U;
	static int32_t x532 = INT32_MIN;
	volatile uint64_t t95 = 977474LLU;

	t95 = (x529+((x530-x531)+x532));

	if (t95 != 2147475119LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x533 = UINT32_MAX;
	int8_t x534 = INT8_MIN;
	int64_t x535 = -1LL;
	uint8_t x536 = 15U;
	int64_t t96 = 2450LL;

	t96 = (x533+((x534-x535)+x536));

	if (t96 != 4294967183LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x542 = -1;
	static int64_t x543 = INT64_MAX;
	uint64_t x544 = 107379LLU;
	volatile uint64_t t97 = 1617243LLU;

	t97 = (x541+((x542-x543)+x544));

	if (t97 != 9223372036854883186LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int8_t x550 = INT8_MIN;
	int32_t t98 = -1031;

	t98 = (x549+((x550-x551)+x552));

	if (t98 != 32638) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x554 = -1006;
	int64_t x555 = 14926064401224480LL;
	uint64_t t99 = 66578096762757LLU;

	t99 = (x553+((x554-x555)+x556));

	if (t99 != 18431818009308326128LLU) { NG(); } else { ; }
	
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

