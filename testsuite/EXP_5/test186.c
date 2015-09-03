#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = -52;
uint64_t t1 = 113172577349077007LLU;
volatile int8_t x18 = INT8_MIN;
static int16_t x19 = -1;
int8_t x20 = INT8_MAX;
volatile int64_t x23 = 151006050LL;
volatile uint32_t x38 = 524960872U;
int32_t x40 = -39009711;
int16_t x43 = INT16_MIN;
uint32_t x48 = 231U;
volatile uint16_t x54 = 4U;
uint8_t x65 = UINT8_MAX;
uint16_t x68 = UINT16_MAX;
uint8_t x69 = 74U;
int64_t t13 = -10286LL;
int32_t x78 = INT32_MIN;
int32_t x90 = -2096240;
volatile int64_t x92 = INT64_MIN;
static volatile int8_t x100 = 4;
static volatile uint64_t t18 = 6385805184326398LLU;
int32_t x104 = INT32_MIN;
static uint32_t t19 = 26958U;
uint16_t x105 = 24U;
volatile int16_t x118 = INT16_MIN;
int64_t t23 = 24630211224332LL;
volatile uint32_t x123 = UINT32_MAX;
uint8_t x124 = 104U;
volatile int64_t x129 = INT64_MAX;
int32_t x130 = -1;
uint16_t x141 = UINT16_MAX;
uint64_t x142 = 227467168269799980LLU;
int8_t x144 = INT8_MIN;
uint64_t t29 = 91LLU;
int32_t x174 = INT32_MAX;
volatile int64_t t31 = -22LL;
uint32_t x183 = UINT32_MAX;
int32_t x189 = 400;
uint64_t x208 = 340668729LLU;
int8_t x214 = INT8_MAX;
static uint16_t x216 = UINT16_MAX;
int16_t x218 = INT16_MIN;
uint8_t x220 = 6U;
static volatile int32_t x225 = INT32_MIN;
int16_t x235 = INT16_MIN;
uint8_t x242 = 8U;
int64_t x249 = INT64_MIN;
uint16_t x255 = 35U;
int8_t x257 = 1;
int8_t x261 = -1;
int64_t x262 = -20461685LL;
int8_t x264 = INT8_MIN;
uint32_t x267 = UINT32_MAX;
volatile uint64_t t50 = 764574769512295091LLU;
uint64_t x269 = UINT64_MAX;
uint64_t x275 = 66154851LLU;
uint64_t t54 = 5329390587899LLU;
static int16_t x289 = -3;
uint64_t x293 = UINT64_MAX;
static uint64_t t56 = 1947557770129017401LLU;
volatile int16_t x303 = 4820;
static int8_t x305 = -1;
uint32_t t61 = 5321U;
uint32_t t62 = 120837468U;
static int8_t x321 = INT8_MIN;
uint8_t x328 = 1U;
static volatile uint64_t t64 = 43637403397819LLU;
volatile int32_t x335 = -849505260;
int64_t x345 = 35058993008661063LL;
int8_t x348 = 7;
int64_t t67 = -1386802109812993703LL;
static volatile uint64_t t71 = 768LLU;
static volatile int64_t x408 = 1353699909235756862LL;
volatile int32_t t77 = -1;
volatile int64_t t79 = -7411269690LL;
volatile int64_t t80 = -18988270751LL;
uint8_t x425 = 114U;
static uint64_t x427 = 71778011213620369LLU;
volatile uint64_t t81 = 1LLU;
int32_t x434 = INT32_MIN;
static int16_t x438 = -1;
int64_t x439 = INT64_MAX;
volatile int64_t t83 = -784802326877LL;
volatile int16_t x446 = INT16_MIN;
int16_t x454 = INT16_MAX;
int16_t x455 = 0;
static int32_t x456 = -240568378;
volatile int32_t t86 = -497494378;
uint32_t t87 = 68256542U;
uint64_t x468 = UINT64_MAX;
int16_t x476 = 1779;
static int64_t x478 = -1LL;
volatile int64_t t92 = -28862LL;
int16_t x489 = 7;
volatile int8_t x495 = 10;
static uint32_t t95 = 8079807U;
int8_t x508 = INT8_MAX;
static uint8_t x512 = 68U;


void f0(void) {
	int32_t x1 = INT32_MIN;
	static uint16_t x2 = 183U;
	static int64_t x4 = -1LL;
	volatile int64_t t0 = 5LL;

	t0 = (x1/((x2-x3)-x4));

	if (t0 != -9099506LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = -195995;
	volatile uint64_t x10 = 366LLU;
	uint64_t x11 = 1504637679587LLU;
	uint32_t x12 = 17924137U;

	t1 = (x9/((x10-x11)-x12));

	if (t1 != 1LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x13 = 121U;
	int32_t x14 = 734;
	int16_t x15 = INT16_MAX;
	int64_t x16 = INT64_MIN;
	volatile int64_t t2 = -462014611748738LL;

	t2 = (x13/((x14-x15)-x16));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = INT32_MIN;
	volatile int32_t t3 = -4618109;

	t3 = (x17/((x18-x19)-x20));

	if (t3 != 8454660) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x21 = INT64_MAX;
	int16_t x22 = INT16_MIN;
	int16_t x24 = -1;
	static int64_t t4 = 7550950LL;

	t4 = (x21/((x22-x23)-x24));

	if (t4 != -61066235952LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x25 = 1532686500LLU;
	int64_t x26 = -1LL;
	int16_t x27 = 3;
	int32_t x28 = INT32_MIN;
	volatile uint64_t t5 = 12LLU;

	t5 = (x25/((x26-x27)-x28));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = INT16_MAX;
	int16_t x30 = INT16_MIN;
	int8_t x31 = INT8_MAX;
	int16_t x32 = -2;
	int32_t t6 = 3;

	t6 = (x29/((x30-x31)-x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x37 = 45449472LL;
	volatile uint32_t x39 = 1555476U;
	static int64_t t7 = 413LL;

	t7 = (x37/((x38-x39)-x40));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x41 = INT16_MIN;
	int8_t x42 = INT8_MIN;
	int16_t x44 = -4514;
	int32_t t8 = -15529801;

	t8 = (x41/((x42-x43)-x44));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x45 = INT32_MAX;
	int8_t x46 = -1;
	static int8_t x47 = -1;
	uint32_t t9 = 33046U;

	t9 = (x45/((x46-x47)-x48));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x49 = -286;
	uint8_t x50 = 1U;
	volatile int8_t x51 = INT8_MIN;
	uint16_t x52 = 15600U;
	static volatile int32_t t10 = -40;

	t10 = (x49/((x50-x51)-x52));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x53 = INT64_MIN;
	static uint64_t x55 = UINT64_MAX;
	uint32_t x56 = 5647588U;
	volatile uint64_t t11 = 5LLU;

	t11 = (x53/((x54-x55)-x56));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x66 = -1LL;
	int8_t x67 = -40;
	volatile int64_t t12 = 128659901985LL;

	t12 = (x65/((x66-x67)-x68));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x70 = -10LL;
	static int16_t x71 = -10;
	int8_t x72 = INT8_MAX;

	t13 = (x69/((x70-x71)-x72));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x73 = -1;
	int8_t x74 = INT8_MAX;
	static int8_t x75 = -1;
	int32_t x76 = INT32_MAX;
	int32_t t14 = 1;

	t14 = (x73/((x74-x75)-x76));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint8_t x77 = 3U;
	int64_t x79 = -1LL;
	static int64_t x80 = -2809985LL;
	int64_t t15 = 31701845261LL;

	t15 = (x77/((x78-x79)-x80));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x89 = 152U;
	volatile int32_t x91 = -1;
	int64_t t16 = -17LL;

	t16 = (x89/((x90-x91)-x92));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x93 = -1LL;
	int32_t x94 = -35809607;
	int8_t x95 = -1;
	int32_t x96 = 48518508;
	int64_t t17 = 240308840744LL;

	t17 = (x93/((x94-x95)-x96));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x97 = INT16_MIN;
	static int32_t x98 = -1;
	uint64_t x99 = 88131493LLU;

	t18 = (x97/((x98-x99)-x100));

	if (t18 != 1LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x101 = 14020;
	volatile int16_t x102 = 2143;
	volatile uint32_t x103 = 624143U;

	t19 = (x101/((x102-x103)-x104));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x106 = -854;
	int8_t x107 = -3;
	static int16_t x108 = INT16_MIN;
	static volatile int32_t t20 = 0;

	t20 = (x105/((x106-x107)-x108));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x109 = 84;
	int16_t x110 = -1;
	uint32_t x111 = 56879243U;
	int32_t x112 = 5;
	volatile uint32_t t21 = 3437U;

	t21 = (x109/((x110-x111)-x112));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x113 = UINT16_MAX;
	static int16_t x114 = INT16_MIN;
	uint32_t x115 = 62U;
	uint64_t x116 = UINT64_MAX;
	uint64_t t22 = 34870196LLU;

	t22 = (x113/((x114-x115)-x116));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x117 = 109442874237321LL;
	int64_t x119 = -1LL;
	volatile int8_t x120 = INT8_MIN;

	t23 = (x117/((x118-x119)-x120));

	if (t23 != -3353131965LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x121 = 91LL;
	int16_t x122 = INT16_MIN;
	int64_t t24 = 1927712833LL;

	t24 = (x121/((x122-x123)-x124));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x131 = -1;
	static volatile uint8_t x132 = UINT8_MAX;
	int64_t t25 = -232335440718LL;

	t25 = (x129/((x130-x131)-x132));

	if (t25 != -36170086419038336LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x137 = 7U;
	int64_t x138 = -309849892356788566LL;
	int32_t x139 = 20;
	int16_t x140 = INT16_MAX;
	int64_t t26 = 376303LL;

	t26 = (x137/((x138-x139)-x140));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x143 = 377097U;
	volatile uint64_t t27 = 1926LLU;

	t27 = (x141/((x142-x143)-x144));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x149 = 7U;
	uint32_t x150 = 477700110U;
	int32_t x151 = INT32_MAX;
	int8_t x152 = INT8_MIN;
	static uint32_t t28 = 17U;

	t28 = (x149/((x150-x151)-x152));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x153 = UINT16_MAX;
	int64_t x154 = INT64_MAX;
	static volatile uint64_t x155 = 40522082050428021LLU;
	static volatile uint64_t x156 = UINT64_MAX;

	t29 = (x153/((x154-x155)-x156));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x169 = UINT32_MAX;
	static volatile int32_t x170 = 734262226;
	static int32_t x171 = INT32_MAX;
	volatile int16_t x172 = INT16_MAX;
	uint32_t t30 = 26087U;

	t30 = (x169/((x170-x171)-x172));

	if (t30 != 1U) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x173 = UINT16_MAX;
	uint8_t x175 = UINT8_MAX;
	int64_t x176 = 1765441630475002120LL;

	t31 = (x173/((x174-x175)-x176));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x177 = 28U;
	volatile uint32_t x178 = 3126U;
	static uint32_t x179 = 15U;
	static uint64_t x180 = 192LLU;
	volatile uint64_t t32 = 38024488094LLU;

	t32 = (x177/((x178-x179)-x180));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int32_t x181 = INT32_MAX;
	int16_t x182 = INT16_MIN;
	int16_t x184 = INT16_MIN;
	static uint32_t t33 = 15597U;

	t33 = (x181/((x182-x183)-x184));

	if (t33 != 2147483647U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x190 = 6LLU;
	uint32_t x191 = UINT32_MAX;
	int64_t x192 = INT64_MIN;
	uint64_t t34 = 11LLU;

	t34 = (x189/((x190-x191)-x192));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x193 = -1;
	int16_t x194 = -1;
	volatile int64_t x195 = -1LL;
	static int8_t x196 = INT8_MIN;
	int64_t t35 = -129560LL;

	t35 = (x193/((x194-x195)-x196));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x205 = INT32_MIN;
	int64_t x206 = -49820647407148269LL;
	uint64_t x207 = 1613LLU;
	volatile uint64_t t36 = 2881357612447LLU;

	t36 = (x205/((x206-x207)-x208));

	if (t36 != 1LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x209 = UINT64_MAX;
	int8_t x210 = 29;
	static int64_t x211 = INT64_MAX;
	int64_t x212 = -6557549532LL;
	uint64_t t37 = 36554205476LLU;

	t37 = (x209/((x210-x211)-x212));

	if (t37 != 1LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x213 = INT16_MIN;
	int8_t x215 = INT8_MIN;
	int32_t t38 = 67357212;

	t38 = (x213/((x214-x215)-x216));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x217 = 3551;
	int8_t x219 = -1;
	volatile int32_t t39 = -2;

	t39 = (x217/((x218-x219)-x220));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x221 = -1;
	int32_t x222 = -1;
	uint8_t x223 = 1U;
	uint32_t x224 = 2920U;
	static volatile uint32_t t40 = 15U;

	t40 = (x221/((x222-x223)-x224));

	if (t40 != 1U) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x226 = 460086580799855LL;
	volatile int16_t x227 = -1;
	static uint32_t x228 = UINT32_MAX;
	static int64_t t41 = -9707036596133371LL;

	t41 = (x225/((x226-x227)-x228));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint32_t x229 = 24089029U;
	static volatile int32_t x230 = INT32_MIN;
	int16_t x231 = INT16_MIN;
	int64_t x232 = INT64_MIN;
	volatile int64_t t42 = -7205LL;

	t42 = (x229/((x230-x231)-x232));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x233 = INT32_MIN;
	int32_t x234 = INT32_MIN;
	int8_t x236 = INT8_MIN;
	volatile int32_t t43 = 1;

	t43 = (x233/((x234-x235)-x236));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x237 = UINT64_MAX;
	int32_t x238 = INT32_MIN;
	volatile int8_t x239 = 0;
	int16_t x240 = -1;
	uint64_t t44 = 1309501LLU;

	t44 = (x237/((x238-x239)-x240));

	if (t44 != 1LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x241 = 6519U;
	int32_t x243 = INT32_MAX;
	int32_t x244 = INT32_MIN;
	uint32_t t45 = 255825U;

	t45 = (x241/((x242-x243)-x244));

	if (t45 != 724U) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x250 = 0U;
	volatile uint8_t x251 = 10U;
	uint32_t x252 = 69U;
	volatile int64_t t46 = -572671741438LL;

	t46 = (x249/((x250-x251)-x252));

	if (t46 != -2147483687LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x253 = INT64_MIN;
	int8_t x254 = 1;
	uint64_t x256 = 480575697224632LLU;
	uint64_t t47 = 596044929LLU;

	t47 = (x253/((x254-x255)-x256));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x258 = -1LL;
	int64_t x259 = -40800270424453847LL;
	int16_t x260 = INT16_MAX;
	volatile int64_t t48 = -15447LL;

	t48 = (x257/((x258-x259)-x260));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x263 = -5;
	int64_t t49 = -7570LL;

	t49 = (x261/((x262-x263)-x264));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x265 = INT16_MIN;
	volatile uint32_t x266 = UINT32_MAX;
	uint64_t x268 = UINT64_MAX;

	t50 = (x265/((x266-x267)-x268));

	if (t50 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x270 = -30LL;
	int32_t x271 = -35089240;
	static int32_t x272 = 50952851;
	uint64_t t51 = 5664450886080843LLU;

	t51 = (x269/((x270-x271)-x272));

	if (t51 != 1LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x273 = 10460858U;
	static uint8_t x274 = 7U;
	static volatile int64_t x276 = INT64_MIN;
	volatile uint64_t t52 = 2590073LLU;

	t52 = (x273/((x274-x275)-x276));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x281 = INT16_MAX;
	uint32_t x282 = 351254411U;
	static int8_t x283 = INT8_MIN;
	volatile int16_t x284 = INT16_MIN;
	static uint32_t t53 = 61U;

	t53 = (x281/((x282-x283)-x284));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x285 = 240318781175530LL;
	static uint64_t x286 = 130820023182LLU;
	static int8_t x287 = INT8_MIN;
	static volatile int64_t x288 = INT64_MIN;

	t54 = (x285/((x286-x287)-x288));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x290 = 0;
	int32_t x291 = 1;
	int32_t x292 = INT32_MAX;
	volatile int32_t t55 = 1425556;

	t55 = (x289/((x290-x291)-x292));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x294 = 4U;
	static uint32_t x295 = 401U;
	int32_t x296 = INT32_MIN;

	t56 = (x293/((x294-x295)-x296));

	if (t56 != 8589936180LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x297 = INT32_MIN;
	volatile uint64_t x298 = 6267640687685623796LLU;
	uint16_t x299 = 175U;
	int64_t x300 = INT64_MIN;
	uint64_t t57 = 1793LLU;

	t57 = (x297/((x298-x299)-x300));

	if (t57 != 1LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x301 = 86U;
	static int8_t x302 = -1;
	int64_t x304 = -1LL;
	volatile int64_t t58 = 1011459032830LL;

	t58 = (x301/((x302-x303)-x304));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x306 = UINT64_MAX;
	int16_t x307 = INT16_MIN;
	int64_t x308 = INT64_MIN;
	uint64_t t59 = 2452611513235LLU;

	t59 = (x305/((x306-x307)-x308));

	if (t59 != 1LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x309 = 53170082LLU;
	int8_t x310 = -1;
	volatile int64_t x311 = -1LL;
	volatile int16_t x312 = INT16_MIN;
	volatile uint64_t t60 = 1724002521212961LLU;

	t60 = (x309/((x310-x311)-x312));

	if (t60 != 1622LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x313 = INT32_MIN;
	volatile uint8_t x314 = 3U;
	int16_t x315 = 14;
	uint32_t x316 = 133574439U;

	t61 = (x313/((x314-x315)-x316));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x317 = -1;
	uint8_t x318 = UINT8_MAX;
	int16_t x319 = -5580;
	uint32_t x320 = 765122U;

	t62 = (x317/((x318-x319)-x320));

	if (t62 != 1U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x322 = UINT64_MAX;
	int8_t x323 = INT8_MAX;
	static uint16_t x324 = 439U;
	volatile uint64_t t63 = 8722068252881205929LLU;

	t63 = (x321/((x322-x323)-x324));

	if (t63 != 1LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x325 = -1;
	static uint64_t x326 = 1003568LLU;
	static volatile int8_t x327 = INT8_MAX;

	t64 = (x325/((x326-x327)-x328));

	if (t64 != 18383504817138LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x333 = 1;
	int32_t x334 = 820232440;
	static uint32_t x336 = 372U;
	uint32_t t65 = 1U;

	t65 = (x333/((x334-x335)-x336));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x341 = 613U;
	volatile int64_t x342 = 136967794703839017LL;
	static volatile int64_t x343 = INT64_MAX;
	volatile uint16_t x344 = UINT16_MAX;
	volatile int64_t t66 = 193LL;

	t66 = (x341/((x342-x343)-x344));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x346 = 8U;
	int32_t x347 = 10;

	t67 = (x345/((x346-x347)-x348));

	if (t67 != 8162807LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x353 = 85019LL;
	int8_t x354 = -1;
	uint8_t x355 = UINT8_MAX;
	static uint16_t x356 = UINT16_MAX;
	volatile int64_t t68 = -14LL;

	t68 = (x353/((x354-x355)-x356));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x365 = -1;
	int32_t x366 = INT32_MIN;
	volatile int8_t x367 = 0;
	volatile int8_t x368 = INT8_MIN;
	int32_t t69 = -9481;

	t69 = (x365/((x366-x367)-x368));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x369 = -1;
	int16_t x370 = INT16_MIN;
	static int32_t x371 = -177093956;
	int32_t x372 = 13249;
	int32_t t70 = -5334;

	t70 = (x369/((x370-x371)-x372));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x373 = INT16_MIN;
	int64_t x374 = -1LL;
	int32_t x375 = INT32_MIN;
	uint64_t x376 = 32232035LLU;

	t71 = (x373/((x374-x375)-x376));

	if (t71 != 8720827332LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x381 = INT8_MAX;
	int64_t x382 = -1LL;
	volatile uint8_t x383 = 1U;
	uint16_t x384 = UINT16_MAX;
	volatile int64_t t72 = -12395326034750103LL;

	t72 = (x381/((x382-x383)-x384));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x389 = INT8_MAX;
	int8_t x390 = INT8_MIN;
	int16_t x391 = INT16_MAX;
	uint8_t x392 = 1U;
	static volatile int32_t t73 = 24934155;

	t73 = (x389/((x390-x391)-x392));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x397 = 1U;
	static int64_t x398 = INT64_MIN;
	static int32_t x399 = INT32_MIN;
	uint32_t x400 = 12300U;
	int64_t t74 = -102LL;

	t74 = (x397/((x398-x399)-x400));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x401 = INT32_MIN;
	static int64_t x402 = INT64_MIN;
	int16_t x403 = -98;
	int64_t x404 = INT64_MIN;
	int64_t t75 = -223508LL;

	t75 = (x401/((x402-x403)-x404));

	if (t75 != -21913098LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x405 = -1;
	int64_t x406 = 88LL;
	volatile int64_t x407 = -49LL;
	volatile int64_t t76 = -460977965581LL;

	t76 = (x405/((x406-x407)-x408));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x409 = INT16_MAX;
	int8_t x410 = INT8_MIN;
	int32_t x411 = INT32_MIN;
	uint16_t x412 = 1174U;

	t77 = (x409/((x410-x411)-x412));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x413 = 99U;
	volatile uint8_t x414 = 29U;
	uint8_t x415 = UINT8_MAX;
	int64_t x416 = -1LL;
	int64_t t78 = -655184351184LL;

	t78 = (x413/((x414-x415)-x416));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x417 = -1;
	static int32_t x418 = -100054;
	uint16_t x419 = UINT16_MAX;
	int64_t x420 = 184618638311862050LL;

	t79 = (x417/((x418-x419)-x420));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x421 = 18U;
	uint16_t x422 = UINT16_MAX;
	int64_t x423 = 1937137211250402519LL;
	int16_t x424 = INT16_MIN;

	t80 = (x421/((x422-x423)-x424));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x426 = -14;
	static int32_t x428 = -1;

	t81 = (x425/((x426-x427)-x428));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x433 = UINT32_MAX;
	static int64_t x435 = 82663224967227486LL;
	uint32_t x436 = 492U;
	volatile int64_t t82 = -1229613116640598749LL;

	t82 = (x433/((x434-x435)-x436));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x437 = 33;
	int32_t x440 = -1;

	t83 = (x437/((x438-x439)-x440));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x441 = INT32_MAX;
	volatile uint16_t x442 = 1250U;
	int16_t x443 = INT16_MIN;
	volatile int16_t x444 = INT16_MIN;
	int32_t t84 = -5380398;

	t84 = (x441/((x442-x443)-x444));

	if (t84 != 32154) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x445 = 48750U;
	static volatile uint16_t x447 = 19U;
	static uint8_t x448 = UINT8_MAX;
	uint32_t t85 = 37587891U;

	t85 = (x445/((x446-x447)-x448));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint8_t x453 = UINT8_MAX;

	t86 = (x453/((x454-x455)-x456));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x457 = INT32_MAX;
	int32_t x458 = -463;
	volatile int8_t x459 = INT8_MIN;
	uint32_t x460 = 829U;

	t87 = (x457/((x458-x459)-x460));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x465 = -170249221984815649LL;
	volatile int64_t x466 = 902093LL;
	int64_t x467 = INT64_MAX;
	volatile uint64_t t88 = 0LLU;

	t88 = (x465/((x466-x467)-x468));

	if (t88 != 1LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x469 = INT8_MAX;
	int64_t x470 = -1849798012939194096LL;
	int16_t x471 = -1;
	uint8_t x472 = UINT8_MAX;
	static volatile int64_t t89 = 1735LL;

	t89 = (x469/((x470-x471)-x472));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x473 = INT8_MIN;
	int64_t x474 = 120956065489LL;
	int32_t x475 = INT32_MAX;
	static volatile int64_t t90 = -1777336521328345828LL;

	t90 = (x473/((x474-x475)-x476));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x477 = 5;
	volatile int32_t x479 = -35837;
	static volatile int8_t x480 = 1;
	volatile int64_t t91 = 8468606767368633LL;

	t91 = (x477/((x478-x479)-x480));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x481 = -40;
	int64_t x482 = 1614LL;
	int32_t x483 = INT32_MIN;
	int64_t x484 = INT64_MAX;

	t92 = (x481/((x482-x483)-x484));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x485 = INT32_MIN;
	int32_t x486 = INT32_MIN;
	int16_t x487 = INT16_MIN;
	static volatile uint64_t x488 = 23239765664712677LLU;
	static uint64_t t93 = 2LLU;

	t93 = (x485/((x486-x487)-x488));

	if (t93 != 1LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x490 = -1;
	volatile uint32_t x491 = 97U;
	uint32_t x492 = 1018766605U;
	volatile uint32_t t94 = 1569474U;

	t94 = (x489/((x490-x491)-x492));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x493 = INT16_MAX;
	uint32_t x494 = 4258695U;
	int16_t x496 = -1;

	t95 = (x493/((x494-x495)-x496));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x497 = INT16_MAX;
	uint16_t x498 = 108U;
	static int8_t x499 = 3;
	int32_t x500 = -1;
	int32_t t96 = 113189;

	t96 = (x497/((x498-x499)-x500));

	if (t96 != 309) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x501 = INT8_MIN;
	int64_t x502 = -100470929776017LL;
	int64_t x503 = 136792618015LL;
	static int64_t x504 = -1LL;
	int64_t t97 = 1849281LL;

	t97 = (x501/((x502-x503)-x504));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x505 = -1;
	volatile int16_t x506 = -68;
	uint16_t x507 = UINT16_MAX;
	int32_t t98 = -42610285;

	t98 = (x505/((x506-x507)-x508));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x509 = INT64_MIN;
	int16_t x510 = 0;
	static int16_t x511 = INT16_MIN;
	volatile int64_t t99 = 434961LL;

	t99 = (x509/((x510-x511)-x512));

	if (t99 != -282060306937454LL) { NG(); } else { ; }
	
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

