#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t0 = 98LLU;
volatile uint64_t t1 = 1003255828300351LLU;
static volatile uint64_t x14 = 7419742945665LLU;
int32_t x18 = INT32_MIN;
int8_t x19 = -1;
static int32_t t3 = 150234571;
volatile int64_t x43 = -1693509LL;
volatile int64_t t6 = -2806847070LL;
int32_t x48 = -1;
uint32_t x57 = UINT32_MAX;
static uint16_t x58 = UINT16_MAX;
static uint64_t t11 = 670799LLU;
uint64_t x70 = 958550LLU;
int16_t x77 = INT16_MIN;
uint32_t t14 = UINT32_MAX;
volatile uint16_t x82 = 2U;
int8_t x83 = -1;
volatile uint8_t x85 = UINT8_MAX;
volatile uint32_t t16 = 333U;
uint64_t x91 = 82325LLU;
static volatile uint16_t x93 = 25888U;
int32_t t18 = 488579;
int64_t x101 = -1533504895579884028LL;
int8_t x104 = 35;
int8_t x110 = INT8_MAX;
static int32_t x111 = -386;
static uint32_t x119 = UINT32_MAX;
volatile uint32_t x130 = UINT32_MAX;
static uint16_t x131 = UINT16_MAX;
uint32_t t25 = 7615993U;
int32_t t26 = 78215950;
int8_t x138 = 1;
volatile uint32_t x144 = 2086550360U;
static volatile uint32_t x150 = 1795U;
volatile int64_t t29 = 232877232132970030LL;
static volatile uint16_t x163 = 1U;
volatile int32_t x164 = 35652;
int8_t x171 = -1;
uint8_t x175 = UINT8_MAX;
uint8_t x176 = 22U;
int32_t x177 = INT32_MAX;
int8_t x182 = -1;
uint32_t x183 = UINT32_MAX;
uint32_t t37 = 4506823U;
volatile int8_t x198 = INT8_MAX;
uint64_t x200 = UINT64_MAX;
int32_t x202 = 10378349;
int8_t x203 = -1;
static volatile int32_t t39 = 2770904;
uint16_t x206 = 1U;
static volatile uint8_t x212 = 63U;
int16_t x220 = -17;
int8_t x223 = -5;
volatile int32_t x232 = -4446;
volatile uint32_t t44 = 1U;
static volatile int32_t x234 = INT32_MIN;
int8_t x237 = -1;
int16_t x241 = -2851;
static int16_t x251 = INT16_MIN;
uint64_t x254 = 34LLU;
uint16_t x264 = UINT16_MAX;
uint64_t x269 = 54621917LLU;
static int32_t x271 = -1;
volatile int64_t t55 = -8493501046243LL;
uint32_t x289 = UINT32_MAX;
static int8_t x298 = INT8_MIN;
static uint64_t x301 = 41LLU;
volatile int8_t x310 = INT8_MAX;
static uint64_t x320 = UINT64_MAX;
volatile uint64_t t62 = 2061329617LLU;
int32_t x338 = INT32_MAX;
static int16_t x342 = INT16_MIN;
int32_t t65 = -886;
int8_t x355 = 0;
static volatile uint64_t t66 = 106779822395355LLU;
int8_t x361 = -21;
uint16_t x362 = UINT16_MAX;
uint64_t t69 = 7293087LLU;
static volatile uint64_t t71 = 125268265LLU;
uint32_t x377 = UINT32_MAX;
uint32_t t72 = UINT32_MAX;
int8_t x384 = INT8_MAX;
static int32_t t73 = 377389853;
uint32_t x392 = UINT32_MAX;
int64_t x400 = 49LL;
int64_t t76 = -1733430453435269LL;
int8_t x402 = -22;
volatile int32_t x409 = INT32_MIN;
int16_t x410 = 1;
static uint64_t t80 = 4104490977LLU;
int64_t t81 = -33392891LL;
uint32_t x428 = UINT32_MAX;
uint32_t x435 = UINT32_MAX;
uint16_t x436 = UINT16_MAX;
int8_t x442 = INT8_MIN;
int8_t x462 = -1;
volatile int64_t x463 = INT64_MAX;
int32_t x470 = INT32_MIN;
uint16_t x475 = 81U;
static uint64_t x476 = UINT64_MAX;
static uint8_t x485 = 0U;
volatile uint64_t x488 = UINT64_MAX;
uint64_t t97 = 4454580528728401991LLU;
static volatile int32_t x489 = 11;
int32_t x492 = -1;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	uint64_t x2 = UINT64_MAX;
	static int32_t x3 = -431728555;
	static volatile int8_t x4 = 8;

	t0 = (x1|(x2-(x3-x4)));

	if (t0 != 431751167LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 56819031109923LLU;
	static uint64_t x6 = 1098284743030052303LLU;
	int16_t x7 = 29;
	static int64_t x8 = -1LL;

	t1 = (x5|(x6-(x7-x8)));

	if (t1 != 1098306218204329395LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = -1;
	static volatile int64_t x15 = INT64_MIN;
	volatile int16_t x16 = -1;
	uint64_t t2 = UINT64_MAX;

	t2 = (x13|(x14-(x15-x16)));

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = UINT8_MAX;
	uint8_t x20 = 127U;

	t3 = (x17|(x18-(x19-x20)));

	if (t3 != -2147483393) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x25 = 9718U;
	volatile int64_t x26 = -1101344818705LL;
	uint16_t x27 = 1479U;
	uint32_t x28 = UINT32_MAX;
	volatile int64_t t4 = -1670015186LL;

	t4 = (x25|(x26-(x27-x28)));

	if (t4 != -1101344819721LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x29 = INT32_MAX;
	int64_t x30 = -242405816LL;
	int64_t x31 = INT64_MIN;
	static int64_t x32 = INT64_MIN;
	volatile int64_t t5 = 13228866308197LL;

	t5 = (x29|(x30-(x31-x32)));

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x41 = -126668;
	volatile uint8_t x42 = 0U;
	volatile uint8_t x44 = 22U;

	t6 = (x41|(x42-(x43-x44)));

	if (t6 != -10369LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x45 = INT16_MIN;
	int8_t x46 = -1;
	uint16_t x47 = 8U;
	volatile int32_t t7 = -145099;

	t7 = (x45|(x46-(x47-x48)));

	if (t7 != -10) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x49 = 4992964231643630LL;
	volatile uint64_t x50 = 167LLU;
	int64_t x51 = 2LL;
	uint32_t x52 = 64704U;
	static volatile uint64_t t8 = 3822628334666829244LLU;

	t8 = (x49|(x50-(x51-x52)));

	if (t8 != 4992964231691759LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x53 = INT16_MAX;
	uint32_t x54 = 1U;
	int8_t x55 = -59;
	uint64_t x56 = 1481613689LLU;
	volatile uint64_t t9 = 1LLU;

	t9 = (x53|(x54-(x55-x56)));

	if (t9 != 1481637887LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x59 = INT8_MIN;
	uint32_t x60 = 80090416U;
	uint32_t t10 = UINT32_MAX;

	t10 = (x57|(x58-(x59-x60)));

	if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x61 = INT16_MIN;
	static uint64_t x62 = 90095918281569LLU;
	uint16_t x63 = 11U;
	int8_t x64 = -1;

	t11 = (x61|(x62-(x63-x64)));

	if (t11 != 18446744073709548373LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x69 = 228U;
	int64_t x71 = -1LL;
	int32_t x72 = INT32_MIN;
	volatile uint64_t t12 = 1LLU;

	t12 = (x69|(x70-(x71-x72)));

	if (t12 != 18446744071563026679LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x73 = -13;
	uint64_t x74 = 2867070LLU;
	uint32_t x75 = 4202199U;
	int8_t x76 = 1;
	volatile uint64_t t13 = 62LLU;

	t13 = (x73|(x74-(x75-x76)));

	if (t13 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x78 = UINT32_MAX;
	int16_t x79 = INT16_MAX;
	static int32_t x80 = -1;

	t14 = (x77|(x78-(x79-x80)));

	if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x81 = 443098960838036LLU;
	int64_t x84 = -2658518329173LL;
	uint64_t t15 = 776509006315978499LLU;

	t15 = (x81|(x82-(x83-x84)));

	if (t15 != 18446744069548654014LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x86 = INT8_MIN;
	volatile uint32_t x87 = UINT32_MAX;
	volatile uint8_t x88 = UINT8_MAX;

	t16 = (x85|(x86-(x87-x88)));

	if (t16 != 255U) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x89 = UINT32_MAX;
	static uint32_t x90 = UINT32_MAX;
	int32_t x92 = INT32_MIN;
	static volatile uint64_t t17 = 48199LLU;

	t17 = (x89|(x90-(x91-x92)));

	if (t17 != 4294967295LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x94 = -13054;
	int8_t x95 = 1;
	uint16_t x96 = UINT16_MAX;

	t18 = (x93|(x94-(x95-x96)));

	if (t18 != 60704) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x97 = 25U;
	static int16_t x98 = INT16_MIN;
	static int64_t x99 = -1LL;
	int8_t x100 = INT8_MIN;
	static volatile int64_t t19 = 3052290277421483188LL;

	t19 = (x97|(x98-(x99-x100)));

	if (t19 != -32871LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x102 = 85U;
	uint16_t x103 = 2U;
	int64_t t20 = -3606956340621746215LL;

	t20 = (x101|(x102-(x103-x104)));

	if (t20 != -1533504895579883914LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x109 = -1;
	volatile int8_t x112 = 1;
	volatile int32_t t21 = -9776;

	t21 = (x109|(x110-(x111-x112)));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x117 = 0U;
	int64_t x118 = INT64_MIN;
	int64_t x120 = 15647720291735164LL;
	int64_t t22 = 422335432LL;

	t22 = (x117|(x118-(x119-x120)));

	if (t22 != -9207724320858007939LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x121 = INT64_MAX;
	uint64_t x122 = 535290LLU;
	int8_t x123 = 9;
	volatile int32_t x124 = 0;
	static uint64_t t23 = 403039420323457LLU;

	t23 = (x121|(x122-(x123-x124)));

	if (t23 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x125 = 28200199737077LL;
	static int32_t x126 = INT32_MIN;
	static volatile uint32_t x127 = 222386U;
	uint64_t x128 = 1698246LLU;
	static volatile uint64_t t24 = 385LLU;

	t24 = (x125|(x126-(x127-x128)));

	if (t24 != 18446744073155366901LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x129 = 78797104U;
	int8_t x132 = 1;

	t25 = (x129|(x130-(x131-x132)));

	if (t25 != 4294924593U) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x133 = -1;
	static int16_t x134 = -19;
	int16_t x135 = INT16_MIN;
	volatile uint16_t x136 = 28503U;

	t26 = (x133|(x134-(x135-x136)));

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x137 = UINT16_MAX;
	volatile int8_t x139 = INT8_MIN;
	uint32_t x140 = UINT32_MAX;
	uint32_t t27 = 762932546U;

	t27 = (x137|(x138-(x139-x140)));

	if (t27 != 65535U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x141 = 1063005800416LL;
	volatile int16_t x142 = INT16_MIN;
	volatile int16_t x143 = INT16_MAX;
	int64_t t28 = -1561214388460469286LL;

	t28 = (x141|(x142-(x143-x144)));

	if (t28 != 1065090908153LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x149 = UINT8_MAX;
	static int32_t x151 = -1;
	static volatile int64_t x152 = 83LL;

	t29 = (x149|(x150-(x151-x152)));

	if (t29 != 2047LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x153 = UINT16_MAX;
	uint16_t x154 = UINT16_MAX;
	volatile int16_t x155 = INT16_MIN;
	int8_t x156 = INT8_MIN;
	volatile int32_t t30 = -8069;

	t30 = (x153|(x154-(x155-x156)));

	if (t30 != 131071) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x161 = UINT32_MAX;
	uint32_t x162 = UINT32_MAX;
	volatile uint32_t t31 = UINT32_MAX;

	t31 = (x161|(x162-(x163-x164)));

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x165 = 1;
	int32_t x166 = 7595569;
	static int16_t x167 = INT16_MAX;
	volatile int16_t x168 = 0;
	int32_t t32 = 122426001;

	t32 = (x165|(x166-(x167-x168)));

	if (t32 != 7562803) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x169 = -1;
	int16_t x170 = -1;
	int64_t x172 = INT64_MIN;
	int64_t t33 = 369701904058LL;

	t33 = (x169|(x170-(x171-x172)));

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x173 = INT16_MAX;
	int64_t x174 = 79LL;
	volatile int64_t t34 = 5653116578LL;

	t34 = (x173|(x174-(x175-x176)));

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x178 = 0U;
	uint64_t x179 = 114113721235LLU;
	int32_t x180 = INT32_MIN;
	volatile uint64_t t35 = 5740032344821199LLU;

	t35 = (x177|(x178-(x179-x180)));

	if (t35 != 18446743957745434623LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x181 = UINT16_MAX;
	uint32_t x184 = 1547454U;
	volatile uint32_t t36 = 210U;

	t36 = (x181|(x182-(x183-x184)));

	if (t36 != 1572863U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x193 = 0U;
	int8_t x194 = INT8_MAX;
	volatile uint32_t x195 = 36753U;
	int16_t x196 = 15;

	t37 = (x193|(x194-(x195-x196)));

	if (t37 != 4294930685U) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x197 = 1U;
	volatile int64_t x199 = INT64_MIN;
	static volatile uint64_t t38 = 63968380150404LLU;

	t38 = (x197|(x198-(x199-x200)));

	if (t38 != 9223372036854775935LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x201 = -1;
	uint16_t x204 = 11297U;

	t39 = (x201|(x202-(x203-x204)));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x205 = INT8_MAX;
	static int8_t x207 = 2;
	int16_t x208 = INT16_MIN;
	int32_t t40 = -879374717;

	t40 = (x205|(x206-(x207-x208)));

	if (t40 != -32769) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int64_t x209 = -76116235LL;
	volatile int8_t x210 = INT8_MIN;
	int8_t x211 = -1;
	volatile int64_t t41 = 137811619264366210LL;

	t41 = (x209|(x210-(x211-x212)));

	if (t41 != -11LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x217 = INT32_MAX;
	int64_t x218 = 143LL;
	int8_t x219 = INT8_MIN;
	int64_t t42 = -123LL;

	t42 = (x217|(x218-(x219-x220)));

	if (t42 != 2147483647LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint8_t x221 = UINT8_MAX;
	static int64_t x222 = -167LL;
	static uint64_t x224 = UINT64_MAX;
	volatile uint64_t t43 = UINT64_MAX;

	t43 = (x221|(x222-(x223-x224)));

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x229 = 779449590U;
	static volatile int32_t x230 = -129;
	int8_t x231 = 55;

	t44 = (x229|(x230-(x231-x232)));

	if (t44 != 4294966782U) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x233 = 6U;
	uint32_t x235 = UINT32_MAX;
	volatile uint32_t x236 = UINT32_MAX;
	static volatile uint32_t t45 = 268147776U;

	t45 = (x233|(x234-(x235-x236)));

	if (t45 != 2147483654U) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x238 = 725557;
	uint16_t x239 = 546U;
	int64_t x240 = 305LL;
	int64_t t46 = 863198328LL;

	t46 = (x237|(x238-(x239-x240)));

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x242 = INT32_MIN;
	uint64_t x243 = UINT64_MAX;
	int32_t x244 = INT32_MAX;
	static uint64_t t47 = 877715999LLU;

	t47 = (x241|(x242-(x243-x244)));

	if (t47 != 18446744073709548765LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x245 = -1LL;
	volatile uint32_t x246 = 32604U;
	int32_t x247 = INT32_MAX;
	int16_t x248 = INT16_MAX;
	int64_t t48 = -58204733814032LL;

	t48 = (x245|(x246-(x247-x248)));

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x249 = 11988U;
	uint8_t x250 = UINT8_MAX;
	static uint32_t x252 = 1240559U;
	volatile uint32_t t49 = 5682881U;

	t49 = (x249|(x250-(x251-x252)));

	if (t49 != 1273598U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x253 = 4U;
	uint16_t x255 = 0U;
	int8_t x256 = -1;
	volatile uint64_t t50 = 237850279778835LLU;

	t50 = (x253|(x254-(x255-x256)));

	if (t50 != 37LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x257 = 245;
	static volatile int32_t x258 = INT32_MIN;
	int8_t x259 = -1;
	static volatile int8_t x260 = INT8_MAX;
	int32_t t51 = -996963825;

	t51 = (x257|(x258-(x259-x260)));

	if (t51 != -2147483403) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x261 = INT16_MAX;
	static int64_t x262 = INT64_MIN;
	int8_t x263 = INT8_MIN;
	int64_t t52 = -245LL;

	t52 = (x261|(x262-(x263-x264)));

	if (t52 != -9223372036854677505LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x265 = UINT64_MAX;
	static uint16_t x266 = 0U;
	int8_t x267 = INT8_MIN;
	uint8_t x268 = 2U;
	static uint64_t t53 = UINT64_MAX;

	t53 = (x265|(x266-(x267-x268)));

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x270 = 1;
	uint32_t x272 = UINT32_MAX;
	volatile uint64_t t54 = 187516111922664LLU;

	t54 = (x269|(x270-(x271-x272)));

	if (t54 != 54621917LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x285 = -1;
	volatile int64_t x286 = INT64_MAX;
	int32_t x287 = -1;
	int64_t x288 = INT64_MIN;

	t55 = (x285|(x286-(x287-x288)));

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x290 = UINT16_MAX;
	int8_t x291 = -1;
	static int64_t x292 = -1LL;
	int64_t t56 = -1096254031724310479LL;

	t56 = (x289|(x290-(x291-x292)));

	if (t56 != 4294967295LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x293 = INT8_MIN;
	static int8_t x294 = INT8_MIN;
	static int64_t x295 = -1LL;
	static volatile int16_t x296 = INT16_MAX;
	int64_t t57 = -1LL;

	t57 = (x293|(x294-(x295-x296)));

	if (t57 != -128LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x297 = INT8_MIN;
	uint8_t x299 = UINT8_MAX;
	int8_t x300 = 0;
	volatile int32_t t58 = 7;

	t58 = (x297|(x298-(x299-x300)));

	if (t58 != -127) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x302 = INT8_MIN;
	static int8_t x303 = 2;
	int16_t x304 = -1;
	volatile uint64_t t59 = 167798482LLU;

	t59 = (x301|(x302-(x303-x304)));

	if (t59 != 18446744073709551485LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x309 = INT32_MAX;
	uint32_t x311 = UINT32_MAX;
	int32_t x312 = -1;
	uint32_t t60 = 660U;

	t60 = (x309|(x310-(x311-x312)));

	if (t60 != 2147483647U) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x317 = UINT32_MAX;
	int64_t x318 = -18610835604LL;
	uint16_t x319 = UINT16_MAX;
	volatile uint64_t t61 = 2LLU;

	t61 = (x317|(x318-(x319-x320)));

	if (t61 != 18446744056529682431LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x325 = 202503407LLU;
	volatile uint32_t x326 = 0U;
	uint32_t x327 = UINT32_MAX;
	int16_t x328 = -1;

	t62 = (x325|(x326-(x327-x328)));

	if (t62 != 202503407LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x329 = 2390680802LL;
	int8_t x330 = INT8_MIN;
	uint32_t x331 = 2U;
	int64_t x332 = -42269478727LL;
	volatile int64_t t63 = -59312476429LL;

	t63 = (x329|(x330-(x331-x332)));

	if (t63 != -40013728521LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x337 = INT64_MIN;
	int16_t x339 = -1;
	volatile uint32_t x340 = 44U;
	volatile int64_t t64 = -3LL;

	t64 = (x337|(x338-(x339-x340)));

	if (t64 != -9223372034707292116LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x341 = 1;
	int32_t x343 = -1;
	int8_t x344 = -1;

	t65 = (x341|(x342-(x343-x344)));

	if (t65 != -32767) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x353 = 67772587631LLU;
	uint8_t x354 = UINT8_MAX;
	static volatile int32_t x356 = -1;

	t66 = (x353|(x354-(x355-x356)));

	if (t66 != 67772587775LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x357 = INT32_MIN;
	uint16_t x358 = 22U;
	uint8_t x359 = 63U;
	volatile int8_t x360 = INT8_MIN;
	int32_t t67 = -1;

	t67 = (x357|(x358-(x359-x360)));

	if (t67 != -169) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x363 = INT32_MIN;
	volatile int64_t x364 = 252858784892160LL;
	static int64_t t68 = -1860656LL;

	t68 = (x361|(x362-(x363-x364)));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x365 = INT32_MIN;
	volatile int32_t x366 = 696255;
	int32_t x367 = 8150;
	volatile uint64_t x368 = 15365255147661924LLU;

	t69 = (x365|(x366-(x367-x368)));

	if (t69 != 18446744072619043405LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x369 = UINT8_MAX;
	uint16_t x370 = UINT16_MAX;
	uint8_t x371 = UINT8_MAX;
	int8_t x372 = 1;
	int32_t t70 = 18;

	t70 = (x369|(x370-(x371-x372)));

	if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x373 = 6128661948975401LLU;
	uint16_t x374 = 1950U;
	volatile int16_t x375 = INT16_MIN;
	int32_t x376 = 13857;

	t71 = (x373|(x374-(x375-x376)));

	if (t71 != 6128661948988863LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x378 = 27;
	int16_t x379 = -1;
	uint16_t x380 = 29U;

	t72 = (x377|(x378-(x379-x380)));

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x381 = INT8_MAX;
	uint8_t x382 = UINT8_MAX;
	volatile uint16_t x383 = UINT16_MAX;

	t73 = (x381|(x382-(x383-x384)));

	if (t73 != -65153) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x389 = 40595224;
	static volatile uint16_t x390 = UINT16_MAX;
	static uint64_t x391 = 204109LLU;
	uint64_t t74 = 4177415LLU;

	t74 = (x389|(x390-(x391-x392)));

	if (t74 != 4294963129LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x393 = 4;
	uint64_t x394 = 11503593089549LLU;
	int16_t x395 = INT16_MAX;
	uint8_t x396 = 85U;
	volatile uint64_t t75 = 188569LLU;

	t75 = (x393|(x394-(x395-x396)));

	if (t75 != 11503593056871LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x397 = -1;
	int32_t x398 = INT32_MIN;
	int64_t x399 = -14878680460876311LL;

	t76 = (x397|(x398-(x399-x400)));

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x401 = 8101721189696091014LLU;
	static int32_t x403 = -1;
	int64_t x404 = 15443LL;
	uint64_t t77 = 2LLU;

	t77 = (x401|(x402-(x403-x404)));

	if (t77 != 8101721189696094142LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x405 = -1;
	int8_t x406 = -1;
	static int32_t x407 = 153691993;
	uint64_t x408 = 3LLU;
	volatile uint64_t t78 = UINT64_MAX;

	t78 = (x405|(x406-(x407-x408)));

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x411 = -1;
	int8_t x412 = -1;
	int32_t t79 = 879430148;

	t79 = (x409|(x410-(x411-x412)));

	if (t79 != -2147483647) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x413 = 416950407378LLU;
	int8_t x414 = -20;
	int8_t x415 = INT8_MAX;
	uint32_t x416 = 16195739U;

	t80 = (x413|(x414-(x415-x416)));

	if (t80 != 416964112602LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int64_t x417 = INT64_MAX;
	static int16_t x418 = -3993;
	int8_t x419 = INT8_MIN;
	uint8_t x420 = 0U;

	t81 = (x417|(x418-(x419-x420)));

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x421 = 1826;
	uint16_t x422 = 28U;
	static int16_t x423 = INT16_MIN;
	int16_t x424 = INT16_MIN;
	volatile int32_t t82 = 46525;

	t82 = (x421|(x422-(x423-x424)));

	if (t82 != 1854) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x425 = 17976U;
	int8_t x426 = 1;
	int16_t x427 = INT16_MIN;
	static uint32_t t83 = 2U;

	t83 = (x425|(x426-(x427-x428)));

	if (t83 != 50744U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x429 = INT32_MIN;
	int8_t x430 = -16;
	int8_t x431 = INT8_MIN;
	uint16_t x432 = UINT16_MAX;
	int32_t t84 = 2333250;

	t84 = (x429|(x430-(x431-x432)));

	if (t84 != -2147418001) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x433 = 3;
	static uint32_t x434 = UINT32_MAX;
	volatile uint32_t t85 = 41365U;

	t85 = (x433|(x434-(x435-x436)));

	if (t85 != 65535U) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int64_t x437 = -1LL;
	int32_t x438 = INT32_MAX;
	int16_t x439 = -71;
	uint32_t x440 = UINT32_MAX;
	int64_t t86 = -3388814658LL;

	t86 = (x437|(x438-(x439-x440)));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x441 = 6905LLU;
	int16_t x443 = -1;
	volatile uint64_t x444 = 3531595531630525LLU;
	uint64_t t87 = 6982LLU;

	t87 = (x441|(x442-(x443-x444)));

	if (t87 != 3531595531632639LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x445 = 44U;
	uint16_t x446 = 130U;
	uint32_t x447 = UINT32_MAX;
	int32_t x448 = INT32_MIN;
	uint32_t t88 = 6617469U;

	t88 = (x445|(x446-(x447-x448)));

	if (t88 != 2147483823U) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x449 = UINT64_MAX;
	int32_t x450 = -1;
	volatile uint32_t x451 = 1567U;
	int8_t x452 = 2;
	uint64_t t89 = UINT64_MAX;

	t89 = (x449|(x450-(x451-x452)));

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x453 = -1;
	uint32_t x454 = 586U;
	int16_t x455 = -3934;
	int64_t x456 = -3LL;
	volatile int64_t t90 = 471592831LL;

	t90 = (x453|(x454-(x455-x456)));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x457 = INT32_MIN;
	static int32_t x458 = INT32_MIN;
	static int8_t x459 = 0;
	static volatile int64_t x460 = -1LL;
	volatile int64_t t91 = 480595744621122639LL;

	t91 = (x457|(x458-(x459-x460)));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x461 = INT64_MIN;
	volatile uint32_t x464 = UINT32_MAX;
	int64_t t92 = 64805584838122769LL;

	t92 = (x461|(x462-(x463-x464)));

	if (t92 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x465 = 13;
	int32_t x466 = -1;
	int16_t x467 = -1;
	uint32_t x468 = 18U;
	static uint32_t t93 = 58126U;

	t93 = (x465|(x466-(x467-x468)));

	if (t93 != 31U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x469 = INT32_MAX;
	int32_t x471 = INT32_MIN;
	volatile int8_t x472 = -34;
	static volatile int32_t t94 = 507;

	t94 = (x469|(x470-(x471-x472)));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x473 = 411U;
	static int64_t x474 = INT64_MAX;
	volatile uint64_t t95 = 354574255529804648LLU;

	t95 = (x473|(x474-(x475-x476)));

	if (t95 != 9223372036854775743LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x477 = INT64_MIN;
	int16_t x478 = 11739;
	int32_t x479 = 3;
	volatile int32_t x480 = -1;
	int64_t t96 = -2138045361190547340LL;

	t96 = (x477|(x478-(x479-x480)));

	if (t96 != -9223372036854764073LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x486 = UINT32_MAX;
	int64_t x487 = INT64_MAX;

	t97 = (x485|(x486-(x487-x488)));

	if (t97 != 9223372041149743103LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x490 = 50051U;
	int64_t x491 = -1980803490LL;
	volatile int64_t t98 = 61524904204187LL;

	t98 = (x489|(x490-(x491-x492)));

	if (t98 != 1980853551LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x493 = 61U;
	uint16_t x494 = UINT16_MAX;
	static int8_t x495 = INT8_MIN;
	static int64_t x496 = INT64_MIN;
	int64_t t99 = -398LL;

	t99 = (x493|(x494-(x495-x496)));

	if (t99 != -9223372036854710145LL) { NG(); } else { ; }
	
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

