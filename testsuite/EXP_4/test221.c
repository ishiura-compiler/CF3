#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x25 = 1U;
static volatile uint32_t x30 = 103U;
int64_t t4 = 1LL;
int32_t x33 = INT32_MIN;
volatile int64_t x35 = -97800794LL;
int64_t t5 = 43273053605623709LL;
int64_t x40 = INT64_MAX;
int8_t x43 = INT8_MAX;
uint64_t t8 = 7453037162194LLU;
int8_t x49 = INT8_MAX;
volatile uint64_t t9 = 393835820729LLU;
int16_t x66 = -1;
volatile uint32_t t14 = 1492U;
volatile int32_t x96 = INT32_MIN;
int16_t x97 = -860;
volatile uint32_t x100 = 1032197U;
uint8_t x104 = 21U;
int64_t t19 = 2027160507740085LL;
static uint32_t x112 = UINT32_MAX;
static int32_t x114 = -42006372;
int8_t x128 = -1;
int8_t x131 = 0;
int64_t x132 = INT64_MAX;
int16_t x138 = INT16_MAX;
int64_t x141 = INT64_MIN;
uint16_t x149 = 4952U;
uint16_t x168 = UINT16_MAX;
int64_t x171 = -1LL;
int16_t x177 = 91;
uint32_t x178 = 13347U;
int64_t t34 = 2488830092780813LL;
int64_t x182 = INT64_MAX;
static int8_t x184 = -12;
uint64_t x186 = 1781475LLU;
int16_t x188 = INT16_MIN;
volatile uint64_t t36 = 2770290489500LLU;
int32_t x193 = 0;
int16_t x196 = INT16_MIN;
int32_t x197 = -1;
int32_t t39 = 201222;
volatile int64_t t40 = 33267861668142LL;
static int64_t x212 = 39LL;
uint8_t x213 = 71U;
int8_t x215 = INT8_MAX;
uint16_t x223 = 5742U;
int64_t t43 = -27075309LL;
int32_t x233 = 9886;
int32_t t47 = 40463;
volatile uint64_t t48 = 3584526034413LLU;
int32_t x253 = -1;
int64_t x256 = INT64_MIN;
volatile int64_t t51 = -1LL;
int32_t x258 = -1;
volatile int64_t x260 = 1654842403931LL;
int64_t x265 = 17016LL;
int16_t x272 = INT16_MAX;
volatile uint64_t t55 = UINT64_MAX;
volatile int32_t t56 = 0;
int32_t x281 = -152040;
static uint16_t x291 = 500U;
static volatile int64_t x292 = 962LL;
int64_t t59 = 0LL;
int8_t x308 = -1;
int64_t x316 = 1996041184629974109LL;
static uint64_t x335 = 58599613306279LLU;
volatile int64_t x336 = INT64_MIN;
volatile int16_t x339 = INT16_MIN;
int16_t x340 = INT16_MAX;
static int32_t x356 = INT32_MAX;
uint32_t x362 = 474U;
int16_t x364 = INT16_MIN;
uint64_t x375 = 31009154925026LLU;
int32_t x377 = -1;
int32_t x384 = -109;
int64_t x385 = INT64_MAX;
int64_t x401 = INT64_MIN;
static int64_t t84 = 1418044887949916LL;
uint32_t x406 = 6U;
static int64_t x411 = -1LL;
static int64_t x419 = 224LL;
static uint64_t t88 = 13136435LLU;
int64_t x426 = -1LL;
static uint32_t x446 = 120913435U;
uint8_t x447 = 12U;
volatile int64_t t94 = -2831147336061753145LL;
volatile int32_t t95 = 1476;
static int32_t x454 = -1;
static int64_t x457 = INT64_MIN;
static int8_t x463 = INT8_MIN;
volatile int64_t t98 = -478710LL;


void f0(void) {
	uint16_t x5 = UINT16_MAX;
	int16_t x6 = -11942;
	int16_t x7 = INT16_MIN;
	uint64_t x8 = 3954921LLU;
	volatile uint64_t t0 = 135264090589287715LLU;

	t0 = (x5^(x6/(x7-x8)));

	if (t0 != 65534LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x13 = 13255U;
	static int16_t x14 = -1;
	static int64_t x15 = INT64_MIN;
	uint64_t x16 = 369483158502957502LLU;
	uint64_t t1 = 22920197818587LLU;

	t1 = (x13^(x14/(x15-x16)));

	if (t1 != 13253LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x21 = UINT16_MAX;
	int8_t x22 = -1;
	static int16_t x23 = 1;
	static uint8_t x24 = 33U;
	int32_t t2 = 12060002;

	t2 = (x21^(x22/(x23-x24)));

	if (t2 != 65535) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x26 = UINT16_MAX;
	int16_t x27 = 1;
	int16_t x28 = INT16_MIN;
	volatile int32_t t3 = -277612636;

	t3 = (x25^(x26/(x27-x28)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x29 = INT16_MIN;
	static volatile uint8_t x31 = 2U;
	int64_t x32 = 3197307857180265LL;

	t4 = (x29^(x30/(x31-x32)));

	if (t4 != -32768LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x34 = INT32_MIN;
	static int8_t x36 = -1;

	t5 = (x33^(x34/(x35-x36)));

	if (t5 != -2147483627LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x37 = 81U;
	int16_t x38 = INT16_MIN;
	uint8_t x39 = 13U;
	int64_t t6 = -35912891LL;

	t6 = (x37^(x38/(x39-x40)));

	if (t6 != 81LL) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int64_t x41 = -1LL;
	volatile uint8_t x42 = UINT8_MAX;
	int32_t x44 = 14988;
	volatile int64_t t7 = -8189621431587266LL;

	t7 = (x41^(x42/(x43-x44)));

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x45 = UINT64_MAX;
	int32_t x46 = INT32_MIN;
	volatile int64_t x47 = INT64_MIN;
	volatile uint64_t x48 = 53091115604815206LLU;

	t8 = (x45^(x46/(x47-x48)));

	if (t8 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x50 = UINT64_MAX;
	static uint16_t x51 = UINT16_MAX;
	uint32_t x52 = UINT32_MAX;

	t9 = (x49^(x50/(x51-x52)));

	if (t9 != 281474976710528LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x53 = INT64_MIN;
	int16_t x54 = INT16_MIN;
	uint8_t x55 = 1U;
	uint64_t x56 = 711672031LLU;
	uint64_t t10 = 4594087071765091959LLU;

	t10 = (x53^(x54/(x55-x56)));

	if (t10 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x57 = UINT8_MAX;
	int16_t x58 = INT16_MAX;
	int64_t x59 = -932179LL;
	int8_t x60 = -1;
	static int64_t t11 = 422953664524LL;

	t11 = (x57^(x58/(x59-x60)));

	if (t11 != 255LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x61 = INT32_MAX;
	uint64_t x62 = 537999174054207546LLU;
	volatile int64_t x63 = 516892044147LL;
	int8_t x64 = INT8_MAX;
	uint64_t t12 = 314LLU;

	t12 = (x61^(x62/(x63-x64)));

	if (t12 != 2146442813LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x65 = 590391226518216478LLU;
	int32_t x67 = -1;
	int16_t x68 = INT16_MIN;
	volatile uint64_t t13 = 1LLU;

	t13 = (x65^(x66/(x67-x68)));

	if (t13 != 590391226518216478LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x69 = 124U;
	uint8_t x70 = 53U;
	uint32_t x71 = 7656510U;
	int16_t x72 = INT16_MIN;

	t14 = (x69^(x70/(x71-x72)));

	if (t14 != 124U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x81 = INT8_MIN;
	uint8_t x82 = UINT8_MAX;
	int8_t x83 = -1;
	int64_t x84 = -37LL;
	static int64_t t15 = -1LL;

	t15 = (x81^(x82/(x83-x84)));

	if (t15 != -121LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x89 = UINT64_MAX;
	int8_t x90 = -3;
	int64_t x91 = INT64_MAX;
	volatile uint32_t x92 = 1763U;
	uint64_t t16 = UINT64_MAX;

	t16 = (x89^(x90/(x91-x92)));

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x93 = 3827U;
	int32_t x94 = INT32_MIN;
	volatile int64_t x95 = -1LL;
	int64_t t17 = -510444748001197095LL;

	t17 = (x93^(x94/(x95-x96)));

	if (t17 != -3828LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x98 = 7972155LL;
	int16_t x99 = INT16_MIN;
	int64_t t18 = -8813383938LL;

	t18 = (x97^(x98/(x99-x100)));

	if (t18 != -860LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x101 = -1;
	int64_t x102 = INT64_MIN;
	volatile int8_t x103 = 4;

	t19 = (x101^(x102/(x103-x104)));

	if (t19 != -542551296285575048LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x105 = 825U;
	volatile int32_t x106 = -258134908;
	int8_t x107 = -2;
	int16_t x108 = INT16_MAX;
	int32_t t20 = 1661242;

	t20 = (x105^(x106/(x107-x108)));

	if (t20 != 7676) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x109 = INT32_MAX;
	static int16_t x110 = INT16_MIN;
	static int32_t x111 = 0;
	uint32_t t21 = 9099U;

	t21 = (x109^(x110/(x111-x112)));

	if (t21 != 2147516415U) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int32_t x113 = INT32_MIN;
	uint64_t x115 = 12987148648194LLU;
	uint8_t x116 = 2U;
	volatile uint64_t t22 = 7929920LLU;

	t22 = (x113^(x114/(x115-x116)));

	if (t22 != 18446744071563488352LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x121 = 3385768721620570141LLU;
	uint64_t x122 = UINT64_MAX;
	int16_t x123 = 2;
	int16_t x124 = INT16_MIN;
	uint64_t t23 = 2111LLU;

	t23 = (x121^(x122/(x123-x124)));

	if (t23 != 3385956291431985053LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int32_t x125 = -1;
	uint64_t x126 = 63109523047676055LLU;
	uint16_t x127 = 9U;
	volatile uint64_t t24 = 15265482LLU;

	t24 = (x125^(x126/(x127-x128)));

	if (t24 != 18440433121404784010LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x129 = -1;
	int64_t x130 = -21191LL;
	int64_t t25 = -373427669086408793LL;

	t25 = (x129^(x130/(x131-x132)));

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x133 = 3838172LL;
	int64_t x134 = INT64_MIN;
	uint16_t x135 = 16U;
	volatile uint16_t x136 = UINT16_MAX;
	int64_t t26 = 0LL;

	t26 = (x133^(x134/(x135-x136)));

	if (t26 != 140774006724933LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x137 = 5U;
	int32_t x139 = INT32_MIN;
	int64_t x140 = 439717815639LL;
	int64_t t27 = -2310345LL;

	t27 = (x137^(x138/(x139-x140)));

	if (t27 != 5LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x142 = 1;
	uint32_t x143 = UINT32_MAX;
	volatile int16_t x144 = -12381;
	int64_t t28 = INT64_MIN;

	t28 = (x141^(x142/(x143-x144)));

	if (t28 != INT64_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x145 = -633244112008LL;
	static int16_t x146 = INT16_MIN;
	int32_t x147 = INT32_MAX;
	static uint32_t x148 = UINT32_MAX;
	volatile int64_t t29 = 532119948200435015LL;

	t29 = (x145^(x146/(x147-x148)));

	if (t29 != -633244112007LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint16_t x150 = 1U;
	volatile int16_t x151 = 538;
	uint8_t x152 = UINT8_MAX;
	int32_t t30 = -1;

	t30 = (x149^(x150/(x151-x152)));

	if (t30 != 4952) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x165 = INT32_MAX;
	int16_t x166 = -1;
	int8_t x167 = 46;
	int32_t t31 = INT32_MAX;

	t31 = (x165^(x166/(x167-x168)));

	if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x169 = -1;
	int64_t x170 = INT64_MAX;
	int8_t x172 = 3;
	int64_t t32 = -704LL;

	t32 = (x169^(x170/(x171-x172)));

	if (t32 != 2305843009213693950LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x173 = 0U;
	volatile int64_t x174 = -302LL;
	int16_t x175 = -1;
	static uint8_t x176 = UINT8_MAX;
	int64_t t33 = 188LL;

	t33 = (x173^(x174/(x175-x176)));

	if (t33 != 1LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x179 = -3;
	int64_t x180 = -25083692935LL;

	t34 = (x177^(x178/(x179-x180)));

	if (t34 != 91LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x181 = INT64_MIN;
	int64_t x183 = INT64_MIN;
	volatile int64_t t35 = INT64_MAX;

	t35 = (x181^(x182/(x183-x184)));

	if (t35 != INT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x185 = 1;
	uint8_t x187 = UINT8_MAX;

	t36 = (x185^(x186/(x187-x188)));

	if (t36 != 52LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x189 = INT16_MAX;
	int64_t x190 = INT64_MIN;
	int32_t x191 = 129;
	uint32_t x192 = 10635444U;
	int64_t t37 = 9988817679190LL;

	t37 = (x189^(x190/(x191-x192)));

	if (t37 != -2152802392LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x194 = UINT64_MAX;
	int32_t x195 = -1;
	volatile uint64_t t38 = 473987098610394LLU;

	t38 = (x193^(x194/(x195-x196)));

	if (t38 != 562967133814800LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x198 = 1;
	static volatile int16_t x199 = INT16_MIN;
	int8_t x200 = -1;

	t39 = (x197^(x198/(x199-x200)));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x205 = -1;
	int16_t x206 = INT16_MIN;
	volatile int32_t x207 = INT32_MIN;
	int64_t x208 = 3438039789LL;

	t40 = (x205^(x206/(x207-x208)));

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x209 = -1LL;
	uint8_t x210 = 4U;
	volatile int8_t x211 = 21;
	static int64_t t41 = 27526681397392978LL;

	t41 = (x209^(x210/(x211-x212)));

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x214 = 8U;
	int8_t x216 = INT8_MIN;
	int32_t t42 = 22;

	t42 = (x213^(x214/(x215-x216)));

	if (t42 != 71) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x221 = UINT8_MAX;
	int64_t x222 = -614864050349LL;
	int32_t x224 = -96;

	t43 = (x221^(x222/(x223-x224)));

	if (t43 != -105321169LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x225 = UINT64_MAX;
	int32_t x226 = INT32_MIN;
	static int16_t x227 = INT16_MIN;
	static uint32_t x228 = 16361898U;
	uint64_t t44 = UINT64_MAX;

	t44 = (x225^(x226/(x227-x228)));

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x229 = 2U;
	uint64_t x230 = 7LLU;
	int64_t x231 = -1963LL;
	int32_t x232 = 37;
	uint64_t t45 = 439055295933755483LLU;

	t45 = (x229^(x230/(x231-x232)));

	if (t45 != 2LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x234 = INT32_MAX;
	static int32_t x235 = -257683;
	volatile uint32_t x236 = 1700390U;
	uint32_t t46 = 6U;

	t46 = (x233^(x234/(x235-x236)));

	if (t46 != 9886U) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x237 = 22U;
	int16_t x238 = 270;
	int32_t x239 = INT32_MIN;
	volatile int32_t x240 = -2833783;

	t47 = (x237^(x238/(x239-x240)));

	if (t47 != 22) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x241 = UINT64_MAX;
	int32_t x242 = INT32_MAX;
	uint64_t x243 = 2470961LLU;
	volatile int64_t x244 = -1LL;

	t48 = (x241^(x242/(x243-x244)));

	if (t48 != 18446744073709550746LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x245 = 0;
	int32_t x246 = -77152;
	int32_t x247 = -215078;
	static int16_t x248 = INT16_MAX;
	volatile int32_t t49 = 19101981;

	t49 = (x245^(x246/(x247-x248)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x249 = INT16_MIN;
	uint64_t x250 = UINT64_MAX;
	uint32_t x251 = UINT32_MAX;
	int32_t x252 = 3289069;
	volatile uint64_t t50 = 4144369025809414LLU;

	t50 = (x249^(x250/(x251-x252)));

	if (t50 != 18446744069411289542LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x254 = 261839903U;
	int32_t x255 = INT32_MIN;

	t51 = (x253^(x254/(x255-x256)));

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x257 = 434U;
	int8_t x259 = -3;
	volatile int64_t t52 = 353LL;

	t52 = (x257^(x258/(x259-x260)));

	if (t52 != 434LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x261 = -3450466093705927LL;
	int64_t x262 = 1LL;
	int8_t x263 = 1;
	int64_t x264 = 150493227LL;
	static volatile int64_t t53 = -1503824275647097256LL;

	t53 = (x261^(x262/(x263-x264)));

	if (t53 != -3450466093705927LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x266 = -1;
	volatile uint32_t x267 = 12011363U;
	int16_t x268 = INT16_MIN;
	static int64_t t54 = -494382544LL;

	t54 = (x265^(x266/(x267-x268)));

	if (t54 != 17180LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x269 = UINT64_MAX;
	uint64_t x270 = 15850851901517224LLU;
	uint8_t x271 = 21U;

	t55 = (x269^(x270/(x271-x272)));

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x277 = 124451048;
	static volatile int32_t x278 = 26659547;
	static int16_t x279 = -1;
	volatile int32_t x280 = 67;

	t56 = (x277^(x278/(x279-x280)));

	if (t56 != -124715932) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x282 = INT64_MAX;
	int64_t x283 = -1LL;
	int8_t x284 = INT8_MIN;
	static int64_t t57 = -1877276009096393LL;

	t57 = (x281^(x282/(x283-x284)));

	if (t57 != -72624976668266855LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x285 = UINT64_MAX;
	int16_t x286 = INT16_MIN;
	int64_t x287 = 88387565262LL;
	static volatile int32_t x288 = -1;
	uint64_t t58 = UINT64_MAX;

	t58 = (x285^(x286/(x287-x288)));

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x289 = 105276U;
	int64_t x290 = INT64_MAX;

	t59 = (x289^(x290/(x291-x292)));

	if (t59 != -19964008737681312LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x293 = INT64_MAX;
	uint8_t x294 = UINT8_MAX;
	uint8_t x295 = 2U;
	int8_t x296 = INT8_MAX;
	static volatile int64_t t60 = 1140175134788729168LL;

	t60 = (x293^(x294/(x295-x296)));

	if (t60 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x305 = -225;
	volatile int32_t x306 = INT32_MIN;
	static uint8_t x307 = 0U;
	volatile int32_t t61 = 20;

	t61 = (x305^(x306/(x307-x308)));

	if (t61 != 2147483423) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x309 = -1;
	int16_t x310 = -1;
	uint8_t x311 = 13U;
	static int32_t x312 = -130226;
	static volatile int32_t t62 = -557896;

	t62 = (x309^(x310/(x311-x312)));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x313 = 70648562598970938LLU;
	static uint8_t x314 = UINT8_MAX;
	volatile uint32_t x315 = UINT32_MAX;
	volatile uint64_t t63 = 16705948973LLU;

	t63 = (x313^(x314/(x315-x316)));

	if (t63 != 70648562598970938LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x317 = 1U;
	int16_t x318 = -1075;
	static uint64_t x319 = 1982681375815949417LLU;
	int32_t x320 = -1;
	uint64_t t64 = 7650LLU;

	t64 = (x317^(x318/(x319-x320)));

	if (t64 != 8LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x321 = 235675481648759LLU;
	uint16_t x322 = 27759U;
	static int64_t x323 = INT64_MIN;
	int64_t x324 = -1LL;
	volatile uint64_t t65 = 15LLU;

	t65 = (x321^(x322/(x323-x324)));

	if (t65 != 235675481648759LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x325 = INT64_MIN;
	static uint16_t x326 = 92U;
	volatile int32_t x327 = -70;
	static int16_t x328 = INT16_MIN;
	static int64_t t66 = INT64_MIN;

	t66 = (x325^(x326/(x327-x328)));

	if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x329 = 4260400074121385863LLU;
	uint8_t x330 = 110U;
	int8_t x331 = -2;
	static uint8_t x332 = UINT8_MAX;
	uint64_t t67 = 7232092LLU;

	t67 = (x329^(x330/(x331-x332)));

	if (t67 != 4260400074121385863LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x333 = -65;
	int32_t x334 = -4723;
	uint64_t t68 = 488850LLU;

	t68 = (x333^(x334/(x335-x336)));

	if (t68 != 18446744073709551550LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x337 = INT16_MAX;
	int64_t x338 = -2198067371644573041LL;
	volatile int64_t t69 = 68759088753LL;

	t69 = (x337^(x338/(x339-x340)));

	if (t69 != 33540358166429LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x341 = INT16_MIN;
	static int32_t x342 = INT32_MIN;
	uint32_t x343 = 2877221U;
	uint8_t x344 = 3U;
	volatile uint32_t t70 = 1342478U;

	t70 = (x341^(x342/(x343-x344)));

	if (t70 != 4294935274U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x345 = INT32_MIN;
	int8_t x346 = -1;
	volatile int16_t x347 = 145;
	int32_t x348 = INT32_MAX;
	int32_t t71 = INT32_MIN;

	t71 = (x345^(x346/(x347-x348)));

	if (t71 != INT32_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int32_t x353 = INT32_MIN;
	int8_t x354 = 1;
	uint32_t x355 = UINT32_MAX;
	volatile uint32_t t72 = 3U;

	t72 = (x353^(x354/(x355-x356)));

	if (t72 != 2147483648U) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x357 = 75U;
	volatile int64_t x358 = INT64_MIN;
	int32_t x359 = INT32_MIN;
	int64_t x360 = -1LL;
	static int64_t t73 = -199585687234688LL;

	t73 = (x357^(x358/(x359-x360)));

	if (t73 != 4294967369LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x361 = INT64_MAX;
	static int16_t x363 = -10561;
	static int64_t t74 = INT64_MAX;

	t74 = (x361^(x362/(x363-x364)));

	if (t74 != INT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x365 = INT64_MIN;
	uint8_t x366 = 1U;
	int32_t x367 = -1;
	uint8_t x368 = 56U;
	int64_t t75 = INT64_MIN;

	t75 = (x365^(x366/(x367-x368)));

	if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x369 = 125995;
	static int64_t x370 = INT64_MIN;
	uint32_t x371 = 16U;
	uint8_t x372 = UINT8_MAX;
	volatile int64_t t76 = -7560LL;

	t76 = (x369^(x370/(x371-x372)));

	if (t76 != -2147609694LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x373 = 130738U;
	static int8_t x374 = INT8_MIN;
	static int32_t x376 = INT32_MIN;
	uint64_t t77 = 14514700472LLU;

	t77 = (x373^(x374/(x375-x376)));

	if (t77 != 584997LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x378 = INT8_MIN;
	static int8_t x379 = 3;
	uint64_t x380 = 1727396089849682319LLU;
	volatile uint64_t t78 = 25LLU;

	t78 = (x377^(x378/(x379-x380)));

	if (t78 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x381 = INT32_MIN;
	static int8_t x382 = INT8_MAX;
	int32_t x383 = 11;
	int32_t t79 = 119253;

	t79 = (x381^(x382/(x383-x384)));

	if (t79 != -2147483647) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x386 = INT32_MIN;
	static int8_t x387 = -1;
	uint64_t x388 = 423831LLU;
	volatile uint64_t t80 = 4005LLU;

	t80 = (x385^(x386/(x387-x388)));

	if (t80 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x389 = INT8_MAX;
	volatile int64_t x390 = -1LL;
	static volatile int8_t x391 = INT8_MIN;
	uint8_t x392 = 86U;
	volatile int64_t t81 = 3098793106LL;

	t81 = (x389^(x390/(x391-x392)));

	if (t81 != 127LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x393 = -1LL;
	uint16_t x394 = 1U;
	int16_t x395 = INT16_MAX;
	volatile int8_t x396 = 55;
	int64_t t82 = 6LL;

	t82 = (x393^(x394/(x395-x396)));

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x397 = UINT8_MAX;
	int16_t x398 = INT16_MAX;
	int16_t x399 = -8524;
	volatile int16_t x400 = INT16_MIN;
	static int32_t t83 = 4093;

	t83 = (x397^(x398/(x399-x400)));

	if (t83 != 254) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x402 = INT32_MIN;
	int16_t x403 = -2;
	volatile int32_t x404 = -45641742;

	t84 = (x401^(x402/(x403-x404)));

	if (t84 != 9223372036854775761LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x405 = 15822286LL;
	uint32_t x407 = 637225U;
	static uint32_t x408 = UINT32_MAX;
	static int64_t t85 = -2070096786568LL;

	t85 = (x405^(x406/(x407-x408)));

	if (t85 != 15822286LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x409 = -1;
	int64_t x410 = INT64_MAX;
	static int16_t x412 = INT16_MIN;
	int64_t t86 = -31197279LL;

	t86 = (x409^(x410/(x411-x412)));

	if (t86 != -281483566907401LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x413 = -1;
	uint16_t x414 = 13750U;
	int16_t x415 = INT16_MAX;
	volatile int64_t x416 = INT64_MAX;
	volatile int64_t t87 = -10LL;

	t87 = (x413^(x414/(x415-x416)));

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x417 = UINT64_MAX;
	volatile int32_t x418 = INT32_MIN;
	int16_t x420 = -1;

	t88 = (x417^(x418/(x419-x420)));

	if (t88 != 9544370LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int8_t x425 = INT8_MIN;
	int8_t x427 = INT8_MIN;
	static int16_t x428 = 215;
	volatile int64_t t89 = -20248636556418636LL;

	t89 = (x425^(x426/(x427-x428)));

	if (t89 != -128LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x429 = INT16_MIN;
	uint64_t x430 = UINT64_MAX;
	uint32_t x431 = 16U;
	volatile int32_t x432 = -7;
	static volatile uint64_t t90 = 10199631527494625LLU;

	t90 = (x429^(x430/(x431-x432)));

	if (t90 != 17644711722678694422LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x433 = 45U;
	static uint64_t x434 = UINT64_MAX;
	volatile int16_t x435 = -1;
	int64_t x436 = INT64_MIN;
	volatile uint64_t t91 = 7453822518447LLU;

	t91 = (x433^(x434/(x435-x436)));

	if (t91 != 47LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x437 = -142;
	int64_t x438 = 0LL;
	volatile int8_t x439 = INT8_MIN;
	volatile uint64_t x440 = 573331LLU;
	static uint64_t t92 = 113LLU;

	t92 = (x437^(x438/(x439-x440)));

	if (t92 != 18446744073709551474LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x441 = -37295009;
	int64_t x442 = INT64_MAX;
	static int16_t x443 = -23;
	uint64_t x444 = UINT64_MAX;
	uint64_t t93 = 50308695649889639LLU;

	t93 = (x441^(x442/(x443-x444)));

	if (t93 != 18446744073672256607LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x445 = INT64_MAX;
	static int64_t x448 = 88LL;

	t94 = (x445^(x446/(x447-x448)));

	if (t94 != -9223372036853184843LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x449 = -1;
	static volatile int32_t x450 = INT32_MIN;
	uint8_t x451 = UINT8_MAX;
	int16_t x452 = -1;

	t95 = (x449^(x450/(x451-x452)));

	if (t95 != 8388607) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x453 = INT16_MIN;
	int16_t x455 = 1;
	int32_t x456 = 419;
	volatile int32_t t96 = 5;

	t96 = (x453^(x454/(x455-x456)));

	if (t96 != -32768) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x458 = INT8_MIN;
	int16_t x459 = INT16_MIN;
	static int16_t x460 = -1;
	int64_t t97 = INT64_MIN;

	t97 = (x457^(x458/(x459-x460)));

	if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x461 = 3U;
	static int64_t x462 = -1LL;
	static uint8_t x464 = 0U;

	t98 = (x461^(x462/(x463-x464)));

	if (t98 != 3LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x465 = INT64_MIN;
	int64_t x466 = INT64_MAX;
	int64_t x467 = -274563283580945132LL;
	static uint8_t x468 = 24U;
	int64_t t99 = 16902884976835LL;

	t99 = (x465^(x466/(x467-x468)));

	if (t99 != 9223372036854775775LL) { NG(); } else { ; }
	
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

