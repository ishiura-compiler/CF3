#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MIN;
int16_t x4 = INT16_MIN;
uint32_t x6 = UINT32_MAX;
int16_t x7 = -2;
static volatile uint32_t x8 = 605684U;
volatile int32_t x16 = INT32_MAX;
uint64_t x35 = 78421902386LLU;
uint64_t t6 = 213633708LLU;
static int16_t x52 = 1;
int64_t t9 = -5LL;
int64_t x60 = INT64_MIN;
int16_t x65 = INT16_MAX;
int16_t x66 = INT16_MIN;
static int64_t x67 = INT64_MIN;
uint16_t x73 = 5394U;
uint32_t t14 = 293U;
volatile int16_t x87 = 0;
static uint32_t x89 = 4225U;
volatile int8_t x92 = INT8_MAX;
int8_t x94 = -1;
volatile uint16_t x100 = UINT16_MAX;
int32_t x104 = INT32_MIN;
static volatile int32_t t20 = 2;
int64_t x109 = -1LL;
volatile int64_t x120 = INT64_MIN;
static uint64_t x125 = 208LLU;
uint32_t x128 = UINT32_MAX;
static int8_t x136 = -1;
volatile uint64_t t26 = 449987946039139LLU;
uint32_t x139 = 145U;
volatile int32_t x148 = 74258049;
int16_t x150 = INT16_MAX;
volatile int32_t x155 = -1973;
volatile int32_t t31 = -809815941;
int8_t x157 = -26;
uint32_t x166 = UINT32_MAX;
int64_t x172 = INT64_MIN;
volatile int32_t t36 = -120;
int32_t x187 = INT32_MAX;
int32_t x202 = -450467331;
int8_t x203 = INT8_MIN;
int64_t x208 = -1LL;
int64_t x211 = -14673LL;
volatile uint64_t x226 = UINT64_MAX;
static volatile uint64_t t49 = 222LLU;
uint16_t x249 = 6U;
int64_t t50 = 244293849LL;
int8_t x255 = -1;
volatile int8_t x277 = -1;
int8_t x280 = -1;
int64_t x282 = -41LL;
uint64_t t57 = 124903368LLU;
volatile int32_t t58 = 321502;
uint64_t t59 = 34904492405LLU;
int8_t x297 = 5;
int64_t x312 = INT64_MIN;
volatile int64_t x320 = 493818LL;
int64_t t64 = -2LL;
uint64_t x321 = 135LLU;
volatile int32_t t66 = -24528082;
static volatile int32_t x335 = -86;
volatile int16_t x340 = 277;
int8_t x342 = INT8_MIN;
int16_t x347 = INT16_MAX;
static uint32_t x348 = 1U;
int64_t x361 = -1LL;
static int64_t t74 = -90730805332175688LL;
int32_t x371 = INT32_MIN;
int32_t t77 = -12207;
static uint32_t x379 = 468746U;
volatile int16_t x382 = -5224;
uint32_t x395 = 59U;
uint32_t t81 = 595U;
static int8_t x400 = INT8_MIN;
int16_t x402 = -480;
int8_t x407 = -1;
volatile int64_t x412 = INT64_MAX;
int64_t t85 = -34905990898028160LL;
static int32_t x415 = -1;
volatile int8_t x416 = -1;
uint64_t t86 = 66200039619LLU;
int32_t x420 = -1;
uint32_t x421 = 54U;
int64_t t88 = 155218339784LL;
int16_t x425 = 5013;
static int32_t x428 = INT32_MAX;
int64_t x432 = 1921572554193975492LL;
uint16_t x436 = 216U;
volatile int8_t x443 = -1;
int8_t x450 = -1;
uint16_t x458 = UINT16_MAX;
static int64_t t97 = 321033LL;
uint16_t x467 = 1901U;
static uint64_t t99 = 2684053649572404082LLU;


void f0(void) {
	int32_t x1 = 1;
	int8_t x3 = -1;
	int32_t t0 = -18476617;

	t0 = (x1^((x2-x3)/x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	int64_t t1 = INT64_MIN;

	t1 = (x5^((x6-x7)/x8));

	if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x13 = 100U;
	int8_t x14 = INT8_MIN;
	uint32_t x15 = UINT32_MAX;
	volatile uint32_t t2 = 187244U;

	t2 = (x13^((x14-x15)/x16));

	if (t2 != 101U) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int16_t x21 = -331;
	int16_t x22 = -1;
	volatile int32_t x23 = 4;
	volatile int64_t x24 = INT64_MAX;
	int64_t t3 = 51LL;

	t3 = (x21^((x22-x23)/x24));

	if (t3 != -331LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x25 = -1;
	int8_t x26 = INT8_MIN;
	uint16_t x27 = 1U;
	int8_t x28 = 15;
	volatile int32_t t4 = 16422;

	t4 = (x25^((x26-x27)/x28));

	if (t4 != 7) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x29 = INT32_MIN;
	uint32_t x30 = 407U;
	uint8_t x31 = UINT8_MAX;
	uint32_t x32 = 2U;
	volatile uint32_t t5 = 0U;

	t5 = (x29^((x30-x31)/x32));

	if (t5 != 2147483724U) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x33 = 8056;
	uint64_t x34 = 14774LLU;
	int8_t x36 = 11;

	t6 = (x33^((x34-x35)/x36));

	if (t6 != 1676976726844326747LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x41 = -1;
	static int64_t x42 = INT64_MAX;
	uint64_t x43 = 66686LLU;
	int32_t x44 = INT32_MIN;
	volatile uint64_t t7 = UINT64_MAX;

	t7 = (x41^((x42-x43)/x44));

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x45 = -1;
	static int64_t x46 = -74446807756681LL;
	int8_t x47 = -3;
	int16_t x48 = 15;
	volatile int64_t t8 = -965LL;

	t8 = (x45^((x46-x47)/x48));

	if (t8 != 4963120517110LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x49 = -8;
	volatile int64_t x50 = -1LL;
	int16_t x51 = INT16_MAX;

	t9 = (x49^((x50-x51)/x52));

	if (t9 != 32760LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x57 = 21;
	uint8_t x58 = 113U;
	static int16_t x59 = INT16_MIN;
	int64_t t10 = -131526283899LL;

	t10 = (x57^((x58-x59)/x60));

	if (t10 != 21LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x68 = INT32_MAX;
	int64_t t11 = -276954049550LL;

	t11 = (x65^((x66-x67)/x68));

	if (t11 != 4295000062LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x69 = -56;
	volatile int32_t x70 = INT32_MAX;
	volatile uint8_t x71 = 9U;
	volatile uint32_t x72 = UINT32_MAX;
	uint32_t t12 = 30U;

	t12 = (x69^((x70-x71)/x72));

	if (t12 != 4294967240U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x74 = 47;
	int16_t x75 = 56;
	volatile uint16_t x76 = 44U;
	static volatile int32_t t13 = 121285;

	t13 = (x73^((x74-x75)/x76));

	if (t13 != 5394) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x77 = 5754U;
	volatile int32_t x78 = INT32_MAX;
	static int8_t x79 = INT8_MAX;
	uint32_t x80 = UINT32_MAX;

	t14 = (x77^((x78-x79)/x80));

	if (t14 != 5754U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x81 = -15588;
	uint32_t x82 = UINT32_MAX;
	uint16_t x83 = 24U;
	static volatile uint8_t x84 = 6U;
	uint32_t t15 = 824475976U;

	t15 = (x81^((x82-x83)/x84));

	if (t15 != 3579144634U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x85 = 1216655;
	uint16_t x86 = 7633U;
	int64_t x88 = -3262266906395LL;
	static int64_t t16 = 109LL;

	t16 = (x85^((x86-x87)/x88));

	if (t16 != 1216655LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x90 = 61306085655977584LLU;
	int16_t x91 = -1;
	volatile uint64_t t17 = 19455438085567LLU;

	t17 = (x89^((x90-x91)/x92));

	if (t17 != 482725083901366LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x93 = -1;
	int64_t x95 = INT64_MIN;
	uint16_t x96 = 56U;
	int64_t t18 = -40235484348092697LL;

	t18 = (x93^((x94-x95)/x96));

	if (t18 != -164703072086692426LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x97 = INT16_MAX;
	int16_t x98 = INT16_MIN;
	static int8_t x99 = INT8_MIN;
	volatile int32_t t19 = -47130870;

	t19 = (x97^((x98-x99)/x100));

	if (t19 != 32767) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x101 = INT16_MIN;
	int32_t x102 = 3;
	int16_t x103 = INT16_MIN;

	t20 = (x101^((x102-x103)/x104));

	if (t20 != -32768) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x105 = 7185535125180LLU;
	volatile uint16_t x106 = 0U;
	int32_t x107 = 1715;
	int8_t x108 = INT8_MAX;
	uint64_t t21 = 327LLU;

	t21 = (x105^((x106-x107)/x108));

	if (t21 != 18446736888174426447LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x110 = INT64_MAX;
	int8_t x111 = INT8_MAX;
	volatile int8_t x112 = 1;
	volatile int64_t t22 = 126187340332454259LL;

	t22 = (x109^((x110-x111)/x112));

	if (t22 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint16_t x113 = UINT16_MAX;
	uint16_t x114 = 1629U;
	uint8_t x115 = UINT8_MAX;
	static int64_t x116 = INT64_MIN;
	volatile int64_t t23 = 40191286241831084LL;

	t23 = (x113^((x114-x115)/x116));

	if (t23 != 65535LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x117 = INT32_MIN;
	static uint16_t x118 = 114U;
	int32_t x119 = -111;
	int64_t t24 = 20867328LL;

	t24 = (x117^((x118-x119)/x120));

	if (t24 != -2147483648LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x126 = 18269287U;
	uint16_t x127 = 457U;
	uint64_t t25 = 264295932445677149LLU;

	t25 = (x125^((x126-x127)/x128));

	if (t25 != 208LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x133 = INT8_MIN;
	uint64_t x134 = 4615852659LLU;
	volatile uint16_t x135 = 19U;

	t26 = (x133^((x134-x135)/x136));

	if (t26 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x137 = INT16_MAX;
	int32_t x138 = INT32_MAX;
	volatile uint64_t x140 = UINT64_MAX;
	uint64_t t27 = 101852387241400LLU;

	t27 = (x137^((x138-x139)/x140));

	if (t27 != 32767LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x141 = -1;
	uint8_t x142 = 80U;
	int8_t x143 = -1;
	int32_t x144 = -316;
	int32_t t28 = -10296;

	t28 = (x141^((x142-x143)/x144));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x145 = UINT16_MAX;
	int64_t x146 = -365LL;
	static int16_t x147 = 655;
	volatile int64_t t29 = 62973974298LL;

	t29 = (x145^((x146-x147)/x148));

	if (t29 != 65535LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x149 = -1;
	volatile int64_t x151 = -6393648806LL;
	int64_t x152 = INT64_MAX;
	static int64_t t30 = 134351LL;

	t30 = (x149^((x150-x151)/x152));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x153 = INT8_MIN;
	uint16_t x154 = 94U;
	static int32_t x156 = -5900136;

	t31 = (x153^((x154-x155)/x156));

	if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x158 = -1;
	int16_t x159 = INT16_MIN;
	uint16_t x160 = 886U;
	volatile int32_t t32 = 124932734;

	t32 = (x157^((x158-x159)/x160));

	if (t32 != -62) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x161 = INT8_MAX;
	int32_t x162 = -1547262;
	int64_t x163 = -1LL;
	static int64_t x164 = INT64_MIN;
	int64_t t33 = -287778547LL;

	t33 = (x161^((x162-x163)/x164));

	if (t33 != 127LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x165 = UINT64_MAX;
	static uint64_t x167 = 28047173LLU;
	uint16_t x168 = 4U;
	volatile uint64_t t34 = 7981124785180923LLU;

	t34 = (x165^((x166-x167)/x168));

	if (t34 != 18446744072642821585LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint16_t x169 = 1U;
	int8_t x170 = INT8_MAX;
	int8_t x171 = INT8_MIN;
	volatile int64_t t35 = -11543817164163LL;

	t35 = (x169^((x170-x171)/x172));

	if (t35 != 1LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x173 = INT16_MAX;
	int16_t x174 = -1;
	static int8_t x175 = INT8_MIN;
	volatile int8_t x176 = INT8_MIN;

	t36 = (x173^((x174-x175)/x176));

	if (t36 != 32767) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x185 = 541U;
	static uint16_t x186 = 2806U;
	int64_t x188 = INT64_MIN;
	int64_t t37 = 29368009LL;

	t37 = (x185^((x186-x187)/x188));

	if (t37 != 541LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x189 = 21926U;
	uint64_t x190 = 0LLU;
	int32_t x191 = INT32_MAX;
	int64_t x192 = 81839084435737LL;
	volatile uint64_t t38 = 61883809LLU;

	t38 = (x189^((x190-x191)/x192));

	if (t38 != 206300LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x193 = INT32_MIN;
	int8_t x194 = 17;
	static uint16_t x195 = UINT16_MAX;
	uint8_t x196 = UINT8_MAX;
	static int32_t t39 = 158763;

	t39 = (x193^((x194-x195)/x196));

	if (t39 != 2147483392) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x197 = -39;
	volatile int8_t x198 = 13;
	int16_t x199 = INT16_MIN;
	int32_t x200 = INT32_MIN;
	volatile int32_t t40 = 34160;

	t40 = (x197^((x198-x199)/x200));

	if (t40 != -39) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x201 = 2851592624800345449LLU;
	int32_t x204 = -475;
	volatile uint64_t t41 = 9515605692200899LLU;

	t41 = (x201^((x202-x203)/x204));

	if (t41 != 2851592624800224745LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x205 = -1;
	uint16_t x206 = UINT16_MAX;
	static int16_t x207 = INT16_MIN;
	volatile int64_t t42 = -3339947288LL;

	t42 = (x205^((x206-x207)/x208));

	if (t42 != 98302LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x209 = -1;
	uint32_t x210 = 488576951U;
	volatile uint32_t x212 = UINT32_MAX;
	int64_t t43 = -2070LL;

	t43 = (x209^((x210-x211)/x212));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x217 = INT64_MAX;
	int32_t x218 = 464960215;
	uint16_t x219 = 144U;
	uint16_t x220 = 1379U;
	static volatile int64_t t44 = -827158594334LL;

	t44 = (x217^((x218-x219)/x220));

	if (t44 != 9223372036854438636LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x225 = -1;
	int8_t x227 = -1;
	uint16_t x228 = 11U;
	uint64_t t45 = UINT64_MAX;

	t45 = (x225^((x226-x227)/x228));

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x229 = 34863U;
	volatile int16_t x230 = -8;
	uint32_t x231 = 84522032U;
	int16_t x232 = -143;
	volatile uint32_t t46 = 60107836U;

	t46 = (x229^((x230-x231)/x232));

	if (t46 != 34863U) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x237 = UINT64_MAX;
	uint16_t x238 = 79U;
	int32_t x239 = 1;
	static int32_t x240 = INT32_MIN;
	uint64_t t47 = UINT64_MAX;

	t47 = (x237^((x238-x239)/x240));

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x241 = 38U;
	volatile int8_t x242 = INT8_MIN;
	static int16_t x243 = -1;
	volatile int32_t x244 = -1;
	volatile int32_t t48 = -580;

	t48 = (x241^((x242-x243)/x244));

	if (t48 != 89) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x245 = 1U;
	uint64_t x246 = UINT64_MAX;
	uint16_t x247 = UINT16_MAX;
	volatile uint64_t x248 = 8698101880LLU;

	t49 = (x245^((x246-x247)/x248));

	if (t49 != 2120778111LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x250 = INT8_MAX;
	static int64_t x251 = -1LL;
	int8_t x252 = -41;

	t50 = (x249^((x250-x251)/x252));

	if (t50 != -5LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x253 = 22U;
	volatile int16_t x254 = INT16_MIN;
	int64_t x256 = INT64_MIN;
	static volatile int64_t t51 = 2035237451LL;

	t51 = (x253^((x254-x255)/x256));

	if (t51 != 22LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x257 = INT8_MIN;
	uint64_t x258 = UINT64_MAX;
	int8_t x259 = INT8_MAX;
	uint32_t x260 = 244996041U;
	uint64_t t52 = 11352061274710LLU;

	t52 = (x257^((x258-x259)/x260));

	if (t52 != 18446743998415502060LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x265 = 90U;
	int16_t x266 = INT16_MAX;
	static uint8_t x267 = 2U;
	static int32_t x268 = INT32_MIN;
	int32_t t53 = -165048;

	t53 = (x265^((x266-x267)/x268));

	if (t53 != 90) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x269 = INT8_MIN;
	uint16_t x270 = 1U;
	int32_t x271 = 290;
	volatile int16_t x272 = -1;
	volatile int32_t t54 = -1853831;

	t54 = (x269^((x270-x271)/x272));

	if (t54 != -351) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x273 = INT16_MIN;
	static int64_t x274 = -314407579702853LL;
	int8_t x275 = 23;
	int16_t x276 = INT16_MIN;
	int64_t t55 = 1915706743336611LL;

	t55 = (x273^((x274-x275)/x276));

	if (t55 != -9594933196LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x278 = 17;
	int64_t x279 = 358LL;
	static int64_t t56 = 45341810728410203LL;

	t56 = (x277^((x278-x279)/x280));

	if (t56 != -342LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x281 = INT16_MIN;
	uint64_t x283 = UINT64_MAX;
	volatile uint16_t x284 = UINT16_MAX;

	t57 = (x281^((x282-x283)/x284));

	if (t57 != 18446462594437775360LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int32_t x289 = INT32_MIN;
	int8_t x290 = -1;
	uint16_t x291 = 16924U;
	int8_t x292 = -1;

	t58 = (x289^((x290-x291)/x292));

	if (t58 != -2147466723) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x293 = INT16_MAX;
	static uint16_t x294 = UINT16_MAX;
	int64_t x295 = -613LL;
	uint64_t x296 = 247064495979630LLU;

	t59 = (x293^((x294-x295)/x296));

	if (t59 != 32767LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x298 = INT8_MIN;
	int64_t x299 = INT64_MIN;
	int16_t x300 = 356;
	int64_t t60 = -124410799LL;

	t60 = (x297^((x298-x299)/x300));

	if (t60 != 25908348418131397LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x301 = INT16_MIN;
	int8_t x302 = INT8_MIN;
	int16_t x303 = INT16_MIN;
	volatile int64_t x304 = INT64_MAX;
	volatile int64_t t61 = 83LL;

	t61 = (x301^((x302-x303)/x304));

	if (t61 != -32768LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x305 = 32002427241LL;
	volatile int8_t x306 = -1;
	uint32_t x307 = UINT32_MAX;
	int64_t x308 = -61150806047781LL;
	volatile int64_t t62 = -15112432027LL;

	t62 = (x305^((x306-x307)/x308));

	if (t62 != 32002427241LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x309 = INT8_MAX;
	static int32_t x310 = 203;
	uint32_t x311 = 2976U;
	int64_t t63 = 6109028684LL;

	t63 = (x309^((x310-x311)/x312));

	if (t63 != 127LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x317 = INT8_MIN;
	uint16_t x318 = 1749U;
	volatile uint16_t x319 = 4080U;

	t64 = (x317^((x318-x319)/x320));

	if (t64 != -128LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x322 = -1;
	volatile uint32_t x323 = UINT32_MAX;
	static volatile int64_t x324 = -1LL;
	volatile uint64_t t65 = 74408503233203LLU;

	t65 = (x321^((x322-x323)/x324));

	if (t65 != 135LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x325 = 1;
	int8_t x326 = 2;
	int16_t x327 = -1;
	volatile int16_t x328 = INT16_MIN;

	t66 = (x325^((x326-x327)/x328));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x329 = -1;
	int16_t x330 = 705;
	volatile uint16_t x331 = UINT16_MAX;
	static volatile int32_t x332 = -9;
	int32_t t67 = 103912973;

	t67 = (x329^((x330-x331)/x332));

	if (t67 != -7204) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x333 = 0;
	static int16_t x334 = -241;
	uint64_t x336 = UINT64_MAX;
	uint64_t t68 = 3520445145148269502LLU;

	t68 = (x333^((x334-x335)/x336));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x337 = -126965;
	volatile int8_t x338 = -1;
	uint32_t x339 = UINT32_MAX;
	uint32_t t69 = 182U;

	t69 = (x337^((x338-x339)/x340));

	if (t69 != 4294840331U) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x341 = INT32_MIN;
	int8_t x343 = 8;
	volatile uint32_t x344 = 10238526U;
	volatile uint32_t t70 = 963656303U;

	t70 = (x341^((x342-x343)/x344));

	if (t70 != 2147484067U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x345 = INT32_MIN;
	uint8_t x346 = UINT8_MAX;
	volatile uint32_t t71 = 48U;

	t71 = (x345^((x346-x347)/x348));

	if (t71 != 2147451136U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x349 = INT8_MAX;
	static volatile int64_t x350 = -1LL;
	int8_t x351 = 13;
	uint8_t x352 = UINT8_MAX;
	static volatile int64_t t72 = 9913LL;

	t72 = (x349^((x350-x351)/x352));

	if (t72 != 127LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x357 = -24001495187092LL;
	int32_t x358 = -1;
	int64_t x359 = INT64_MIN;
	volatile uint64_t x360 = UINT64_MAX;
	uint64_t t73 = 425587630934LLU;

	t73 = (x357^((x358-x359)/x360));

	if (t73 != 18446720072214364524LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x362 = 25LL;
	static uint8_t x363 = 15U;
	uint32_t x364 = 1313152U;

	t74 = (x361^((x362-x363)/x364));

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x365 = 2U;
	volatile int16_t x366 = -3;
	uint64_t x367 = UINT64_MAX;
	volatile int16_t x368 = INT16_MIN;
	static uint64_t t75 = 6803738746446125LLU;

	t75 = (x365^((x366-x367)/x368));

	if (t75 != 3LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x369 = INT8_MIN;
	uint64_t x370 = 164897173LLU;
	static uint32_t x372 = 272752U;
	uint64_t t76 = 486319LLU;

	t76 = (x369^((x370-x371)/x372));

	if (t76 != 18446744073709543069LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x373 = -19;
	volatile int8_t x374 = -11;
	int16_t x375 = -1;
	int16_t x376 = 1066;

	t77 = (x373^((x374-x375)/x376));

	if (t77 != -19) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x377 = INT32_MIN;
	static int16_t x378 = -1;
	volatile int16_t x380 = -1;
	static uint32_t t78 = 2011U;

	t78 = (x377^((x378-x379)/x380));

	if (t78 != 2147483648U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x381 = -1;
	static int64_t x383 = INT64_MIN;
	int32_t x384 = INT32_MAX;
	int64_t t79 = 2794716526690LL;

	t79 = (x381^((x382-x383)/x384));

	if (t79 != -4294967298LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x389 = 1038784U;
	static int16_t x390 = INT16_MIN;
	uint32_t x391 = 1U;
	volatile int16_t x392 = 1;
	volatile uint32_t t80 = 1036057U;

	t80 = (x389^((x390-x391)/x392));

	if (t80 != 4293961279U) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x393 = UINT32_MAX;
	uint32_t x394 = 500948813U;
	static volatile int8_t x396 = INT8_MAX;

	t81 = (x393^((x394-x395)/x396));

	if (t81 != 4291022817U) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x397 = UINT8_MAX;
	static int16_t x398 = INT16_MAX;
	static volatile uint16_t x399 = UINT16_MAX;
	volatile int32_t t82 = -181523;

	t82 = (x397^((x398-x399)/x400));

	if (t82 != 511) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x401 = 902088U;
	int32_t x403 = INT32_MIN;
	int8_t x404 = INT8_MAX;
	volatile uint32_t t83 = 8309986U;

	t83 = (x401^((x402-x403)/x404));

	if (t83 != 17811404U) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x405 = 56U;
	volatile int16_t x406 = -24;
	uint8_t x408 = 9U;
	int32_t t84 = 62320664;

	t84 = (x405^((x406-x407)/x408));

	if (t84 != -58) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x409 = 5;
	uint16_t x410 = UINT16_MAX;
	static volatile uint16_t x411 = 112U;

	t85 = (x409^((x410-x411)/x412));

	if (t85 != 5LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x413 = 1;
	volatile uint64_t x414 = 439317883583LLU;

	t86 = (x413^((x414-x415)/x416));

	if (t86 != 1LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x417 = -29532707;
	int8_t x418 = -30;
	int64_t x419 = 918135304978019949LL;
	int64_t t87 = 1LL;

	t87 = (x417^((x418-x419)/x420));

	if (t87 != -918135304982303914LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x422 = 6U;
	static volatile int32_t x423 = 9210850;
	int64_t x424 = INT64_MIN;

	t88 = (x421^((x422-x423)/x424));

	if (t88 != 54LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x426 = INT32_MAX;
	uint64_t x427 = 16334434979LLU;
	uint64_t t89 = 6LLU;

	t89 = (x425^((x426-x427)/x428));

	if (t89 != 8589929576LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x429 = -1LL;
	int32_t x430 = -215;
	int32_t x431 = -123;
	volatile int64_t t90 = 863570902330237572LL;

	t90 = (x429^((x430-x431)/x432));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x433 = INT16_MIN;
	int16_t x434 = INT16_MIN;
	int32_t x435 = 9;
	int32_t t91 = -1672;

	t91 = (x433^((x434-x435)/x436));

	if (t91 != 32617) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x437 = UINT32_MAX;
	static uint8_t x438 = 0U;
	static volatile uint16_t x439 = UINT16_MAX;
	int64_t x440 = INT64_MIN;
	volatile int64_t t92 = -35040660257301162LL;

	t92 = (x437^((x438-x439)/x440));

	if (t92 != 4294967295LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x441 = UINT32_MAX;
	int16_t x442 = INT16_MIN;
	static int8_t x444 = INT8_MAX;
	static uint32_t t93 = 1640625655U;

	t93 = (x441^((x442-x443)/x444));

	if (t93 != 257U) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int16_t x445 = -2;
	volatile uint8_t x446 = 49U;
	uint8_t x447 = 0U;
	static int32_t x448 = INT32_MIN;
	int32_t t94 = 1272055;

	t94 = (x445^((x446-x447)/x448));

	if (t94 != -2) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x449 = 66U;
	static int32_t x451 = -1;
	uint32_t x452 = 608909171U;
	volatile uint32_t t95 = 2044163253U;

	t95 = (x449^((x450-x451)/x452));

	if (t95 != 66U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x457 = -1;
	int8_t x459 = INT8_MIN;
	int8_t x460 = INT8_MIN;
	static volatile int32_t t96 = 704;

	t96 = (x457^((x458-x459)/x460));

	if (t96 != 511) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x461 = 126U;
	int64_t x462 = -1LL;
	int32_t x463 = INT32_MIN;
	uint8_t x464 = UINT8_MAX;

	t97 = (x461^((x462-x463)/x464));

	if (t97 != 8421630LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x465 = INT8_MIN;
	uint32_t x466 = 612932832U;
	int16_t x468 = INT16_MIN;
	volatile uint32_t t98 = 2153U;

	t98 = (x465^((x466-x467)/x468));

	if (t98 != 4294967168U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x477 = INT16_MAX;
	int16_t x478 = 0;
	int32_t x479 = -1;
	uint64_t x480 = 8131621621782822LLU;

	t99 = (x477^((x478-x479)/x480));

	if (t99 != 32767LLU) { NG(); } else { ; }
	
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

