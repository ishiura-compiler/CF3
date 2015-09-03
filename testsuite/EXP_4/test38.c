#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x10 = -1;
volatile uint32_t x12 = 11418421U;
int32_t x29 = -1;
volatile uint32_t x30 = 1179U;
int8_t x39 = INT8_MIN;
volatile int16_t x42 = -1;
int32_t x58 = INT32_MAX;
uint32_t x62 = 128613570U;
int32_t x63 = INT32_MAX;
static volatile int64_t x67 = -1LL;
uint32_t t13 = 6U;
int64_t x77 = INT64_MAX;
int64_t x78 = 38785208027129LL;
int16_t x84 = -1;
static volatile int64_t t15 = -1058878LL;
int64_t x87 = -1LL;
int16_t x90 = INT16_MAX;
volatile int64_t t17 = 867054973772841751LL;
int8_t x110 = INT8_MAX;
volatile int8_t x117 = INT8_MIN;
uint8_t x118 = UINT8_MAX;
static int32_t x129 = -1;
int32_t t23 = 8063223;
uint32_t x133 = 3783U;
uint16_t x136 = 22493U;
static volatile int16_t x137 = 4;
static volatile uint16_t x138 = 444U;
uint64_t x147 = 2LLU;
volatile uint32_t t28 = UINT32_MAX;
uint32_t x163 = 440U;
volatile uint64_t t29 = UINT64_MAX;
int16_t x169 = INT16_MIN;
static uint16_t x178 = UINT16_MAX;
volatile int16_t x179 = -1;
uint64_t t32 = UINT64_MAX;
volatile int64_t x195 = -3LL;
volatile int64_t t34 = -7397369963LL;
int64_t x203 = 13245LL;
int16_t x214 = -1;
int32_t x220 = INT32_MAX;
volatile uint32_t t44 = 2839U;
volatile int64_t t45 = -2LL;
int64_t x250 = 16899673LL;
uint64_t x251 = 92853017229072LLU;
volatile uint16_t x263 = UINT16_MAX;
static volatile int32_t t48 = -11265;
int64_t x274 = INT64_MAX;
int8_t x285 = 16;
volatile int32_t x295 = 329895;
int16_t x297 = -1;
uint8_t x301 = 7U;
int16_t x314 = INT16_MIN;
uint16_t x316 = 427U;
int8_t x323 = INT8_MIN;
int16_t x324 = -202;
int8_t x325 = INT8_MIN;
uint16_t x326 = 158U;
volatile int64_t x328 = -1LL;
static volatile uint8_t x332 = UINT8_MAX;
static int32_t x341 = -1;
volatile uint8_t x343 = 109U;
uint16_t x347 = 1983U;
uint64_t x350 = UINT64_MAX;
uint64_t x352 = UINT64_MAX;
int32_t x353 = -1;
volatile uint32_t x360 = 5810U;
static int8_t x363 = -1;
static int32_t x365 = INT32_MIN;
static uint64_t x367 = 173375889222LLU;
int32_t x368 = 6;
int32_t x370 = -1;
static int64_t x372 = -2072295026536647LL;
uint32_t x373 = UINT32_MAX;
static volatile uint64_t t72 = 543154040378LLU;
volatile int16_t x383 = 200;
int8_t x384 = -1;
volatile uint64_t x386 = UINT64_MAX;
int32_t x391 = 1942;
static int16_t x407 = -40;
static int32_t x425 = INT32_MIN;
volatile uint64_t t83 = 117183983235578LLU;
uint32_t t84 = 2U;
uint64_t x453 = 59LLU;
static int16_t x455 = -1;
int8_t x457 = 7;
uint8_t x459 = UINT8_MAX;
uint16_t x461 = 1336U;
volatile uint64_t x463 = 213LLU;
static int8_t x465 = INT8_MIN;
static volatile int8_t x475 = INT8_MIN;
volatile int64_t t90 = 4128359LL;
int8_t x496 = 58;
volatile uint64_t t95 = 184097LLU;
static int32_t x510 = INT32_MIN;
static int8_t x511 = INT8_MAX;
static uint32_t t98 = 67765418U;


void f0(void) {
	int8_t x1 = INT8_MIN;
	static uint32_t x2 = UINT32_MAX;
	static int32_t x3 = INT32_MIN;
	int32_t x4 = INT32_MAX;
	uint32_t t0 = 379567162U;

	t0 = (x1|(x2*(x3+x4)));

	if (t0 != 4294967169U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x5 = 1U;
	int8_t x6 = -1;
	static int32_t x7 = INT32_MIN;
	static uint64_t x8 = 11LLU;
	volatile uint64_t t1 = 134LLU;

	t1 = (x5|(x6*(x7+x8)));

	if (t1 != 2147483637LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 3804U;
	volatile int8_t x11 = INT8_MIN;
	volatile uint32_t t2 = 19129349U;

	t2 = (x9|(x10*(x11+x12)));

	if (t2 != 4283551711U) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 118264460276719LLU;
	int32_t x14 = -129169;
	uint32_t x15 = UINT32_MAX;
	int8_t x16 = -1;
	static volatile uint64_t t3 = 2433142510934LLU;

	t3 = (x13|(x14*(x15+x16)));

	if (t3 != 118264460473327LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x25 = 773139U;
	volatile uint8_t x26 = UINT8_MAX;
	int8_t x27 = -10;
	static int16_t x28 = -1;
	uint32_t t4 = 5908U;

	t4 = (x25|(x26*(x27+x28)));

	if (t4 != 4294966555U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x31 = -1LL;
	static int16_t x32 = INT16_MAX;
	volatile int64_t t5 = 67952292918831813LL;

	t5 = (x29|(x30*(x31+x32)));

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x37 = INT32_MAX;
	static uint16_t x38 = 17586U;
	int8_t x40 = INT8_MIN;
	volatile int32_t t6 = -915304407;

	t6 = (x37|(x38*(x39+x40)));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x41 = INT32_MAX;
	uint32_t x43 = UINT32_MAX;
	int64_t x44 = 16949442LL;
	volatile int64_t t7 = -13580LL;

	t7 = (x41|(x42*(x43+x44)));

	if (t7 != -4294967297LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int8_t x45 = 3;
	static int64_t x46 = -1LL;
	int8_t x47 = INT8_MIN;
	int8_t x48 = -24;
	volatile int64_t t8 = -1LL;

	t8 = (x45|(x46*(x47+x48)));

	if (t8 != 155LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x49 = UINT32_MAX;
	uint16_t x50 = UINT16_MAX;
	int64_t x51 = 24105LL;
	int64_t x52 = -1022LL;
	int64_t t9 = 15LL;

	t9 = (x49|(x50*(x51+x52)));

	if (t9 != 4294967295LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x57 = INT64_MIN;
	int64_t x59 = -1LL;
	int32_t x60 = -55701;
	static int64_t t10 = -1996214LL;

	t10 = (x57|(x58*(x59+x60)));

	if (t10 != -119619134105194LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x61 = -1LL;
	int16_t x64 = -186;
	int64_t t11 = 120465277476859LL;

	t11 = (x61|(x62*(x63+x64)));

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x65 = 0;
	int32_t x66 = -1;
	uint16_t x68 = UINT16_MAX;
	int64_t t12 = 749957975794LL;

	t12 = (x65|(x66*(x67+x68)));

	if (t12 != -65534LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x73 = INT32_MIN;
	uint16_t x74 = 304U;
	uint32_t x75 = UINT32_MAX;
	uint32_t x76 = 6330739U;

	t13 = (x73|(x74*(x75+x76)));

	if (t13 != 4072028000U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x79 = INT64_MAX;
	uint64_t x80 = UINT64_MAX;
	static volatile uint64_t t14 = 1646041127223497LLU;

	t14 = (x77|(x78*(x79+x80)));

	if (t14 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x81 = INT64_MIN;
	int64_t x82 = -1744238026538608094LL;
	int64_t x83 = -1LL;

	t15 = (x81|(x82*(x83+x84)));

	if (t15 != -5734895983777559620LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x85 = INT32_MIN;
	int32_t x86 = INT32_MIN;
	int8_t x88 = -1;
	static int64_t t16 = 1129723202983617LL;

	t16 = (x85|(x86*(x87+x88)));

	if (t16 != -2147483648LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x89 = 5U;
	static int32_t x91 = 172;
	static int64_t x92 = -1LL;

	t17 = (x89|(x90*(x91+x92)));

	if (t17 != 5603157LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x93 = INT8_MIN;
	int16_t x94 = INT16_MIN;
	static int16_t x95 = INT16_MIN;
	static int16_t x96 = INT16_MAX;
	volatile int32_t t18 = -1;

	t18 = (x93|(x94*(x95+x96)));

	if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x109 = 0U;
	int8_t x111 = INT8_MIN;
	int64_t x112 = 378823453407LL;
	volatile int64_t t19 = -28055LL;

	t19 = (x109|(x110*(x111+x112)));

	if (t19 != 48110578566433LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x113 = 23LLU;
	static int8_t x114 = 11;
	volatile uint32_t x115 = 23798681U;
	int16_t x116 = -1;
	volatile uint64_t t20 = 365335LLU;

	t20 = (x113|(x114*(x115+x116)));

	if (t20 != 261785503LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x119 = 6;
	volatile uint32_t x120 = 1U;
	volatile uint32_t t21 = 118293U;

	t21 = (x117|(x118*(x119+x120)));

	if (t21 != 4294967289U) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x125 = -25664956177421458LL;
	static volatile uint64_t x126 = 1229258LLU;
	volatile int32_t x127 = 1;
	int8_t x128 = -10;
	uint64_t t22 = 4638805606368LLU;

	t22 = (x125|(x126*(x127+x128)));

	if (t22 != 18446744073707417582LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x130 = INT8_MIN;
	int8_t x131 = INT8_MIN;
	uint8_t x132 = 4U;

	t23 = (x129|(x130*(x131+x132)));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x134 = UINT64_MAX;
	int16_t x135 = INT16_MIN;
	volatile uint64_t t24 = 953655248177LLU;

	t24 = (x133|(x134*(x135+x136)));

	if (t24 != 12007LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x139 = -1;
	int32_t x140 = 23303;
	int32_t t25 = 1280194;

	t25 = (x137|(x138*(x139+x140)));

	if (t25 != 10346092) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x141 = -2;
	int16_t x142 = INT16_MAX;
	int32_t x143 = INT32_MIN;
	uint64_t x144 = UINT64_MAX;
	volatile uint64_t t26 = UINT64_MAX;

	t26 = (x141|(x142*(x143+x144)));

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x145 = 5081357LLU;
	uint64_t x146 = UINT64_MAX;
	uint16_t x148 = 11U;
	uint64_t t27 = UINT64_MAX;

	t27 = (x145|(x146*(x147+x148)));

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x149 = -1;
	static int32_t x150 = INT32_MIN;
	volatile uint32_t x151 = 100U;
	int16_t x152 = INT16_MAX;

	t28 = (x149|(x150*(x151+x152)));

	if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x161 = -1;
	volatile int16_t x162 = INT16_MAX;
	uint64_t x164 = 8106792874350915LLU;

	t29 = (x161|(x162*(x163+x164)));

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x165 = INT64_MIN;
	static int32_t x166 = INT32_MIN;
	static uint32_t x167 = UINT32_MAX;
	int64_t x168 = -1LL;
	int64_t t30 = 34295479469017058LL;

	t30 = (x165|(x166*(x167+x168)));

	if (t30 != -9223372032559808512LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x170 = -1;
	int32_t x171 = 957;
	volatile int16_t x172 = 134;
	int32_t t31 = 246;

	t31 = (x169|(x170*(x171+x172)));

	if (t31 != -1091) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x177 = -1LL;
	uint64_t x180 = 2641739463403LLU;

	t32 = (x177|(x178*(x179+x180)));

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x185 = 186U;
	int8_t x186 = INT8_MIN;
	int8_t x187 = INT8_MIN;
	int64_t x188 = -346592531LL;
	volatile int64_t t33 = -46LL;

	t33 = (x185|(x186*(x187+x188)));

	if (t33 != 44363860410LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x193 = INT64_MIN;
	int32_t x194 = -1563844;
	uint8_t x196 = 74U;

	t34 = (x193|(x194*(x195+x196)));

	if (t34 != -111032924LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x197 = UINT16_MAX;
	int32_t x198 = INT32_MAX;
	static uint8_t x199 = 18U;
	int64_t x200 = -1LL;
	static volatile int64_t t35 = 267309159825541447LL;

	t35 = (x197|(x198*(x199+x200)));

	if (t35 != 36507222015LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x201 = -1LL;
	int8_t x202 = 0;
	int64_t x204 = 518167616846LL;
	static int64_t t36 = 282477949796LL;

	t36 = (x201|(x202*(x203+x204)));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x205 = -1;
	uint8_t x206 = 90U;
	int8_t x207 = INT8_MIN;
	uint8_t x208 = UINT8_MAX;
	int32_t t37 = 3;

	t37 = (x205|(x206*(x207+x208)));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int32_t x209 = 2521;
	volatile int32_t x210 = INT32_MAX;
	uint8_t x211 = 75U;
	uint64_t x212 = UINT64_MAX;
	volatile uint64_t t38 = 66644LLU;

	t38 = (x209|(x210*(x211+x212)));

	if (t38 != 158913789951LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x213 = INT8_MIN;
	int16_t x215 = INT16_MIN;
	int32_t x216 = -1;
	volatile int32_t t39 = -82315416;

	t39 = (x213|(x214*(x215+x216)));

	if (t39 != -127) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x217 = -1;
	int16_t x218 = -17;
	int64_t x219 = 1LL;
	int64_t t40 = 56820148337945760LL;

	t40 = (x217|(x218*(x219+x220)));

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int8_t x221 = INT8_MAX;
	int16_t x222 = INT16_MIN;
	uint64_t x223 = 86LLU;
	int8_t x224 = INT8_MIN;
	uint64_t t41 = 1926061LLU;

	t41 = (x221|(x222*(x223+x224)));

	if (t41 != 1376383LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x229 = UINT32_MAX;
	uint8_t x230 = 75U;
	uint16_t x231 = 3641U;
	int64_t x232 = 947252985836LL;
	int64_t t42 = -32113203373990879LL;

	t42 = (x229|(x230*(x231+x232)));

	if (t42 != 71047349010431LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x233 = -1;
	static volatile int8_t x234 = INT8_MIN;
	uint64_t x235 = 1855197LLU;
	int16_t x236 = INT16_MIN;
	volatile uint64_t t43 = UINT64_MAX;

	t43 = (x233|(x234*(x235+x236)));

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x241 = INT8_MIN;
	int32_t x242 = -1;
	uint8_t x243 = 8U;
	uint32_t x244 = 1U;

	t44 = (x241|(x242*(x243+x244)));

	if (t44 != 4294967287U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x245 = -1669LL;
	int16_t x246 = -1;
	volatile int64_t x247 = INT64_MIN;
	volatile uint16_t x248 = 51U;

	t45 = (x245|(x246*(x247+x248)));

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x249 = -1LL;
	uint32_t x252 = 0U;
	volatile uint64_t t46 = UINT64_MAX;

	t46 = (x249|(x250*(x251+x252)));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x253 = 50U;
	uint64_t x254 = 510210085373LLU;
	int16_t x255 = -1;
	static int32_t x256 = -1;
	volatile uint64_t t47 = 47LLU;

	t47 = (x253|(x254*(x255+x256)));

	if (t47 != 18446743053289380918LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x261 = 57;
	int16_t x262 = INT16_MIN;
	int8_t x264 = -1;

	t48 = (x261|(x262*(x263+x264)));

	if (t48 != -2147418055) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x265 = INT64_MAX;
	int16_t x266 = INT16_MIN;
	volatile uint8_t x267 = 0U;
	static uint16_t x268 = 6U;
	volatile int64_t t49 = 116317738625408LL;

	t49 = (x265|(x266*(x267+x268)));

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x273 = INT8_MIN;
	uint32_t x275 = 811156U;
	static volatile uint64_t x276 = 154254401985977317LLU;
	uint64_t t50 = 4539286910831536LLU;

	t50 = (x273|(x274*(x275+x276)));

	if (t50 != 18446744073709551495LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x277 = INT8_MIN;
	volatile int8_t x278 = -13;
	uint32_t x279 = 11U;
	static volatile uint32_t x280 = 43U;
	static uint32_t t51 = 14167U;

	t51 = (x277|(x278*(x279+x280)));

	if (t51 != 4294967234U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x286 = 3U;
	int64_t x287 = 49205LL;
	volatile int16_t x288 = -1;
	int64_t t52 = -16520467437932LL;

	t52 = (x285|(x286*(x287+x288)));

	if (t52 != 147612LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x289 = 133829389571LL;
	int8_t x290 = -37;
	static int8_t x291 = INT8_MIN;
	uint8_t x292 = 1U;
	static volatile int64_t t53 = 12722582839211LL;

	t53 = (x289|(x290*(x291+x292)));

	if (t53 != 133829394267LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x293 = -643341280113458LL;
	int16_t x294 = 11;
	volatile uint32_t x296 = 78335U;
	static volatile int64_t t54 = 61404LL;

	t54 = (x293|(x294*(x295+x296)));

	if (t54 != -643341275918866LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x298 = 63;
	uint32_t x299 = UINT32_MAX;
	uint64_t x300 = UINT64_MAX;
	uint64_t t55 = UINT64_MAX;

	t55 = (x297|(x298*(x299+x300)));

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x302 = 3259U;
	int32_t x303 = 32541;
	int16_t x304 = 202;
	volatile int32_t t56 = -49329;

	t56 = (x301|(x302*(x303+x304)));

	if (t56 != 106709439) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x305 = 3U;
	int16_t x306 = -5;
	uint64_t x307 = 109789218LLU;
	int32_t x308 = 24449;
	static volatile uint64_t t57 = 94520LLU;

	t57 = (x305|(x306*(x307+x308)));

	if (t57 != 18446744073160483283LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x313 = UINT8_MAX;
	int16_t x315 = INT16_MIN;
	static int32_t t58 = -166309;

	t58 = (x313|(x314*(x315+x316)));

	if (t58 != 1059750143) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x321 = 159U;
	int32_t x322 = -1;
	uint32_t t59 = 316859U;

	t59 = (x321|(x322*(x323+x324)));

	if (t59 != 479U) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x327 = 2U;
	int64_t t60 = -3057500326676LL;

	t60 = (x325|(x326*(x327+x328)));

	if (t60 != -98LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x329 = INT8_MIN;
	int16_t x330 = INT16_MIN;
	volatile int32_t x331 = 1;
	int32_t t61 = 2485107;

	t61 = (x329|(x330*(x331+x332)));

	if (t61 != -128) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x333 = UINT64_MAX;
	volatile int32_t x334 = 216;
	uint32_t x335 = 118170U;
	int16_t x336 = 11;
	uint64_t t62 = UINT64_MAX;

	t62 = (x333|(x334*(x335+x336)));

	if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x337 = INT8_MIN;
	static uint8_t x338 = 73U;
	int16_t x339 = INT16_MAX;
	int16_t x340 = INT16_MIN;
	int32_t t63 = -2;

	t63 = (x337|(x338*(x339+x340)));

	if (t63 != -73) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x342 = -118;
	uint32_t x344 = UINT32_MAX;
	uint32_t t64 = UINT32_MAX;

	t64 = (x341|(x342*(x343+x344)));

	if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x345 = INT64_MIN;
	static volatile int16_t x346 = INT16_MIN;
	static uint8_t x348 = 34U;
	static volatile int64_t t65 = 30337584805LL;

	t65 = (x345|(x346*(x347+x348)));

	if (t65 != -66093056LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x349 = 26326LLU;
	uint16_t x351 = UINT16_MAX;
	volatile uint64_t t66 = 82098851768115LLU;

	t66 = (x349|(x350*(x351+x352)));

	if (t66 != 18446744073709512406LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x354 = 3;
	volatile int16_t x355 = INT16_MIN;
	static int32_t x356 = 988751;
	int32_t t67 = 0;

	t67 = (x353|(x354*(x355+x356)));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x357 = INT64_MIN;
	int8_t x358 = INT8_MIN;
	static uint8_t x359 = 36U;
	static int64_t t68 = 44066466414455LL;

	t68 = (x357|(x358*(x359+x360)));

	if (t68 != -9223372032560556800LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x361 = 61U;
	static int32_t x362 = -904112782;
	uint64_t x364 = 228156LLU;
	static volatile uint64_t t69 = 5646352569LLU;

	t69 = (x361|(x362*(x363+x364)));

	if (t69 != 18446537795857774463LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x366 = -227;
	static volatile uint64_t t70 = 2916LLU;

	t70 = (x365|(x366*(x367+x368)));

	if (t70 != 18446744072168030108LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x369 = 783123LLU;
	int8_t x371 = -1;
	volatile uint64_t t71 = 444003406LLU;

	t71 = (x369|(x370*(x371+x372)));

	if (t71 != 2072295026717659LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x374 = 93107LLU;
	static volatile int8_t x375 = 2;
	volatile uint8_t x376 = 2U;

	t72 = (x373|(x374*(x375+x376)));

	if (t72 != 4294967295LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x377 = INT64_MAX;
	int16_t x378 = 23;
	volatile int32_t x379 = INT32_MIN;
	uint64_t x380 = UINT64_MAX;
	static uint64_t t73 = UINT64_MAX;

	t73 = (x377|(x378*(x379+x380)));

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x381 = 1314054700U;
	static int8_t x382 = 17;
	uint32_t t74 = 399085482U;

	t74 = (x381|(x382*(x383+x384)));

	if (t74 != 1314058047U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x385 = -1;
	uint8_t x387 = 2U;
	volatile int16_t x388 = INT16_MIN;
	uint64_t t75 = UINT64_MAX;

	t75 = (x385|(x386*(x387+x388)));

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x389 = 3U;
	static uint8_t x390 = UINT8_MAX;
	uint8_t x392 = 63U;
	volatile int32_t t76 = 204;

	t76 = (x389|(x390*(x391+x392)));

	if (t76 != 511275) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x393 = 344459;
	uint16_t x394 = 24U;
	uint64_t x395 = 728121243910342LLU;
	uint64_t x396 = 1998LLU;
	uint64_t t77 = 118212357LLU;

	t77 = (x393|(x394*(x395+x396)));

	if (t77 != 17474909854223851LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x397 = INT32_MIN;
	int8_t x398 = -1;
	uint64_t x399 = UINT64_MAX;
	uint16_t x400 = UINT16_MAX;
	uint64_t t78 = 67178616524LLU;

	t78 = (x397|(x398*(x399+x400)));

	if (t78 != 18446744073709486082LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x405 = 8723508LLU;
	uint64_t x406 = 406LLU;
	int32_t x408 = INT32_MAX;
	volatile uint64_t t79 = 203LLU;

	t79 = (x405|(x406*(x407+x408)));

	if (t79 != 871878344446LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x413 = -17;
	int64_t x414 = -1LL;
	volatile int64_t x415 = 200235367037880984LL;
	int8_t x416 = INT8_MAX;
	volatile int64_t t80 = 3557002LL;

	t80 = (x413|(x414*(x415+x416)));

	if (t80 != -17LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x426 = -1;
	int8_t x427 = INT8_MIN;
	int32_t x428 = 407091326;
	volatile int32_t t81 = -92;

	t81 = (x425|(x426*(x427+x428)));

	if (t81 != -407091198) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x429 = -1;
	static uint16_t x430 = UINT16_MAX;
	int8_t x431 = INT8_MIN;
	static int32_t x432 = 5;
	volatile int32_t t82 = 882;

	t82 = (x429|(x430*(x431+x432)));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x437 = 4275936718310LLU;
	volatile uint64_t x438 = 3320597LLU;
	int64_t x439 = -1LL;
	volatile int64_t x440 = -16LL;

	t83 = (x437|(x438*(x439+x440)));

	if (t83 != 18446744073670946815LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x441 = -2551;
	int16_t x442 = INT16_MIN;
	static uint8_t x443 = UINT8_MAX;
	static uint32_t x444 = 233U;

	t84 = (x441|(x442*(x443+x444)));

	if (t84 != 4294964745U) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x454 = 7070844242740LLU;
	int8_t x456 = -14;
	static volatile uint64_t t85 = 374LLU;

	t85 = (x453|(x454*(x455+x456)));

	if (t85 != 18446638011045910527LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x458 = 1U;
	int32_t x460 = -1;
	static volatile int32_t t86 = -201570204;

	t86 = (x457|(x458*(x459+x460)));

	if (t86 != 255) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x462 = -901888163;
	uint16_t x464 = UINT16_MAX;
	uint64_t t87 = 5460103575LLU;

	t87 = (x461|(x462*(x463+x464)));

	if (t87 != 18446684776366611772LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x466 = 64;
	volatile int32_t x467 = INT32_MAX;
	static int32_t x468 = INT32_MIN;
	int32_t t88 = -81;

	t88 = (x465|(x466*(x467+x468)));

	if (t88 != -64) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x469 = -849968LL;
	volatile uint64_t x470 = 2388634LLU;
	int32_t x471 = INT32_MAX;
	int64_t x472 = 25LL;
	static volatile uint64_t t89 = 34LLU;

	t89 = (x469|(x470*(x471+x472)));

	if (t89 != 18446744073709273072LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x473 = INT64_MIN;
	uint8_t x474 = 2U;
	uint16_t x476 = 20837U;

	t90 = (x473|(x474*(x475+x476)));

	if (t90 != -9223372036854734390LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x477 = UINT16_MAX;
	static uint8_t x478 = UINT8_MAX;
	volatile int64_t x479 = -1508968LL;
	int64_t x480 = -1LL;
	volatile int64_t t91 = -4458879842839LL;

	t91 = (x477|(x478*(x479+x480)));

	if (t91 != -384761857LL) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int8_t x485 = INT8_MIN;
	uint64_t x486 = 3861LLU;
	volatile int8_t x487 = -55;
	uint16_t x488 = 1746U;
	volatile uint64_t t92 = 5170394253LLU;

	t92 = (x485|(x486*(x487+x488)));

	if (t92 != 18446744073709551543LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x493 = 280;
	int16_t x494 = INT16_MIN;
	int64_t x495 = -564400LL;
	volatile int64_t t93 = 18555551062LL;

	t93 = (x493|(x494*(x495+x496)));

	if (t93 != 18492358936LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x497 = -1;
	static int64_t x498 = -1LL;
	static int32_t x499 = -1;
	int16_t x500 = INT16_MIN;
	volatile int64_t t94 = 5340742292LL;

	t94 = (x497|(x498*(x499+x500)));

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x501 = 5LLU;
	int64_t x502 = -1003822LL;
	uint8_t x503 = 13U;
	static volatile int32_t x504 = INT32_MIN;

	t95 = (x501|(x502*(x503+x504)));

	if (t95 != 2155691317452975LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x505 = 54;
	static volatile int64_t x506 = 27LL;
	volatile int16_t x507 = INT16_MIN;
	uint16_t x508 = UINT16_MAX;
	volatile int64_t t96 = -24820LL;

	t96 = (x505|(x506*(x507+x508)));

	if (t96 != 884727LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x509 = -1;
	uint32_t x512 = 450929U;
	static volatile uint32_t t97 = UINT32_MAX;

	t97 = (x509|(x510*(x511+x512)));

	if (t97 != UINT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x513 = 110134705;
	int16_t x514 = INT16_MIN;
	uint8_t x515 = UINT8_MAX;
	static volatile uint32_t x516 = UINT32_MAX;

	t98 = (x513|(x514*(x515+x516)));

	if (t98 != 4287727025U) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x517 = 81552LLU;
	volatile int32_t x518 = -1;
	static int16_t x519 = -10;
	int16_t x520 = 1;
	static volatile uint64_t t99 = 116461225LLU;

	t99 = (x517|(x518*(x519+x520)));

	if (t99 != 81561LLU) { NG(); } else { ; }
	
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

