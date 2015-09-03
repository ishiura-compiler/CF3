#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = 141987610557000LL;
uint8_t x8 = 82U;
volatile int64_t x12 = 3470521714405871LL;
uint64_t t2 = UINT64_MAX;
uint32_t x18 = UINT32_MAX;
int16_t x27 = INT16_MIN;
static volatile int64_t t6 = 1996762158LL;
int8_t x36 = INT8_MIN;
int32_t t7 = 1;
uint16_t x50 = 16U;
uint16_t x53 = 54U;
int16_t x54 = 47;
uint16_t x57 = 3877U;
uint32_t x62 = 27859596U;
volatile int8_t x65 = -25;
int64_t x78 = INT64_MAX;
int16_t x94 = INT16_MAX;
static volatile uint64_t t20 = 28696865551749133LLU;
volatile int64_t t22 = -10070LL;
int64_t t23 = 2185291848475091LL;
uint32_t x109 = 121309U;
uint16_t x116 = UINT16_MAX;
int32_t x133 = INT32_MIN;
uint32_t t30 = 783697642U;
int64_t x142 = INT64_MAX;
int16_t x148 = INT16_MIN;
uint16_t x152 = 1494U;
volatile int32_t x191 = 845472486;
int32_t x193 = INT32_MAX;
volatile int16_t x197 = INT16_MIN;
int64_t t43 = -30410123115512LL;
uint16_t x207 = 5795U;
volatile int32_t x208 = INT32_MIN;
uint64_t x214 = UINT64_MAX;
uint64_t t46 = 90213LLU;
volatile uint8_t x229 = 3U;
uint64_t x235 = 53663122633925LLU;
int8_t x238 = INT8_MAX;
int64_t x239 = INT64_MIN;
volatile int16_t x240 = INT16_MIN;
volatile int64_t x243 = INT64_MAX;
static int8_t x248 = INT8_MIN;
static int32_t x258 = INT32_MIN;
int32_t x260 = -55587331;
int64_t x263 = 291LL;
int64_t t55 = -3421LL;
volatile int64_t t56 = 3900615547533LL;
static uint8_t x270 = 5U;
int64_t t58 = -6830619LL;
static int64_t x283 = -2627466364301976LL;
static uint16_t x285 = UINT16_MAX;
static int32_t x288 = -1;
volatile int32_t t61 = -137980;
uint32_t x293 = 0U;
volatile uint64_t t62 = 144269377870268707LLU;
static int64_t x299 = -1053661334572279004LL;
static int64_t x304 = INT64_MIN;
volatile int8_t x310 = -55;
volatile int16_t x321 = 14;
static volatile int16_t x322 = 1;
int64_t x323 = INT64_MIN;
static int64_t t69 = 1572849277158683LL;
int64_t x336 = -634828LL;
uint16_t x344 = 14918U;
int16_t x345 = INT16_MAX;
static volatile int8_t x348 = 0;
int8_t x353 = -1;
int16_t x356 = INT16_MIN;
static int64_t x367 = INT64_MIN;
int32_t x369 = INT32_MIN;
uint16_t x370 = 506U;
int64_t t80 = 128475879739LL;
volatile int64_t x373 = 22353720317307LL;
int16_t x385 = 37;
volatile int64_t t83 = -93300881967239910LL;
static volatile int64_t x393 = INT64_MIN;
int16_t x394 = -1;
int8_t x397 = 1;
uint16_t x405 = 12U;
int64_t t88 = -815968612854953788LL;
volatile int32_t x413 = 203;
static uint64_t x414 = 767440681LLU;
uint8_t x422 = 63U;
uint8_t x429 = UINT8_MAX;
volatile int32_t x433 = INT32_MAX;
int64_t x441 = INT64_MAX;
uint32_t x446 = UINT32_MAX;
int32_t x447 = INT32_MIN;
volatile uint64_t t97 = 39322913LLU;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	volatile int32_t x2 = INT32_MIN;
	volatile int32_t x4 = INT32_MAX;
	volatile int64_t t0 = 168585704905LL;

	t0 = (x1-((x2/x3)*x4));

	if (t0 != 4294967295LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	int32_t x6 = -3287773;
	int16_t x7 = INT16_MAX;
	uint32_t t1 = 80463754U;

	t1 = (x5-((x6/x7)*x8));

	if (t1 != 8199U) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	static int64_t x10 = 504LL;
	static volatile uint32_t x11 = UINT32_MAX;

	t2 = (x9-((x10/x11)*x12));

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int8_t x17 = INT8_MIN;
	int16_t x19 = 1;
	uint32_t x20 = UINT32_MAX;
	uint32_t t3 = 1171U;

	t3 = (x17-((x18/x19)*x20));

	if (t3 != 4294967167U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x21 = -1LL;
	volatile int16_t x22 = INT16_MIN;
	int64_t x23 = -1LL;
	static int32_t x24 = INT32_MIN;
	static int64_t t4 = -1143811753042713LL;

	t4 = (x21-((x22/x23)*x24));

	if (t4 != 70368744177663LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = INT8_MAX;
	int64_t x26 = INT64_MIN;
	uint16_t x28 = 153U;
	volatile int64_t t5 = -6427578038328LL;

	t5 = (x25-((x26/x27)*x28));

	if (t5 != -43065671436730241LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = INT64_MAX;
	int16_t x30 = INT16_MAX;
	int16_t x31 = 1;
	uint8_t x32 = 21U;

	t6 = (x29-((x30/x31)*x32));

	if (t6 != 9223372036854087700LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x33 = 21062105;
	static int8_t x34 = INT8_MIN;
	int16_t x35 = INT16_MIN;

	t7 = (x33-((x34/x35)*x36));

	if (t7 != 21062105) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x37 = UINT32_MAX;
	int16_t x38 = INT16_MIN;
	int64_t x39 = 29886900LL;
	int8_t x40 = -1;
	volatile int64_t t8 = 8286058451LL;

	t8 = (x37-((x38/x39)*x40));

	if (t8 != 4294967295LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = -1;
	int8_t x42 = INT8_MAX;
	uint32_t x43 = 2U;
	uint16_t x44 = 1U;
	uint32_t t9 = 1U;

	t9 = (x41-((x42/x43)*x44));

	if (t9 != 4294967232U) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x45 = 4603238624LLU;
	volatile int8_t x46 = -1;
	int8_t x47 = -3;
	uint16_t x48 = 16U;
	volatile uint64_t t10 = 29043LLU;

	t10 = (x45-((x46/x47)*x48));

	if (t10 != 4603238624LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = INT16_MIN;
	uint8_t x51 = UINT8_MAX;
	int32_t x52 = -1;
	static volatile int32_t t11 = 808219374;

	t11 = (x49-((x50/x51)*x52));

	if (t11 != -32768) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x55 = 2U;
	static uint16_t x56 = 19074U;
	static int32_t t12 = 13;

	t12 = (x53-((x54/x55)*x56));

	if (t12 != -438648) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x58 = 1739U;
	volatile int16_t x59 = -15176;
	static uint8_t x60 = 18U;
	static uint32_t t13 = 122201U;

	t13 = (x57-((x58/x59)*x60));

	if (t13 != 3877U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = 7;
	volatile int8_t x63 = INT8_MIN;
	int16_t x64 = -23;
	volatile uint32_t t14 = 107091U;

	t14 = (x61-((x62/x63)*x64));

	if (t14 != 7U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x66 = 26U;
	volatile uint16_t x67 = 669U;
	int64_t x68 = -1LL;
	volatile int64_t t15 = 8101591479LL;

	t15 = (x65-((x66/x67)*x68));

	if (t15 != -25LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x73 = -1;
	int32_t x74 = INT32_MAX;
	volatile uint32_t x75 = 35111455U;
	int32_t x76 = 11497;
	uint32_t t16 = 2U;

	t16 = (x73-((x74/x75)*x76));

	if (t16 != 4294265978U) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x77 = UINT16_MAX;
	int32_t x79 = -24859;
	int8_t x80 = 0;
	static int64_t t17 = -873594691577LL;

	t17 = (x77-((x78/x79)*x80));

	if (t17 != 65535LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x85 = INT32_MAX;
	int8_t x86 = -1;
	uint64_t x87 = UINT64_MAX;
	int64_t x88 = INT64_MAX;
	static uint64_t t18 = 315300587505530LLU;

	t18 = (x85-((x86/x87)*x88));

	if (t18 != 9223372039002259456LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x89 = INT8_MIN;
	uint32_t x90 = UINT32_MAX;
	int32_t x91 = INT32_MAX;
	int64_t x92 = -1LL;
	int64_t t19 = 429LL;

	t19 = (x89-((x90/x91)*x92));

	if (t19 != -126LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x93 = 71U;
	uint16_t x95 = 1U;
	uint64_t x96 = 24524837389LLU;

	t20 = (x93-((x94/x95)*x96));

	if (t20 != 18445940468362826324LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x97 = -1;
	static int64_t x98 = -9LL;
	int64_t x99 = INT64_MIN;
	int32_t x100 = -641869;
	static volatile int64_t t21 = -102923391778LL;

	t21 = (x97-((x98/x99)*x100));

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x101 = INT16_MIN;
	volatile int16_t x102 = -3;
	int32_t x103 = INT32_MIN;
	int64_t x104 = INT64_MAX;

	t22 = (x101-((x102/x103)*x104));

	if (t22 != -32768LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x105 = 38U;
	static int64_t x106 = 1LL;
	volatile int32_t x107 = INT32_MIN;
	static uint32_t x108 = UINT32_MAX;

	t23 = (x105-((x106/x107)*x108));

	if (t23 != 38LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x110 = INT32_MIN;
	uint16_t x111 = 55U;
	static int8_t x112 = 1;
	volatile uint32_t t24 = 256689U;

	t24 = (x109-((x110/x111)*x112));

	if (t24 != 39166466U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x113 = 187332LLU;
	uint8_t x114 = 15U;
	uint32_t x115 = UINT32_MAX;
	uint64_t t25 = 127446112515799890LLU;

	t25 = (x113-((x114/x115)*x116));

	if (t25 != 187332LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x117 = 419164287U;
	static int64_t x118 = INT64_MAX;
	uint8_t x119 = UINT8_MAX;
	int16_t x120 = -117;
	static int64_t t26 = -1LL;

	t26 = (x117-((x118/x119)*x120));

	if (t26 != 4231900111446649599LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x121 = INT32_MIN;
	volatile uint64_t x122 = 225103775412LLU;
	int32_t x123 = -31413;
	uint16_t x124 = UINT16_MAX;
	uint64_t t27 = 871372516LLU;

	t27 = (x121-((x122/x123)*x124));

	if (t27 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x125 = UINT16_MAX;
	static uint16_t x126 = 6561U;
	uint8_t x127 = 25U;
	static uint32_t x128 = UINT32_MAX;
	uint32_t t28 = 419258U;

	t28 = (x125-((x126/x127)*x128));

	if (t28 != 65797U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x134 = -1;
	int8_t x135 = -50;
	int32_t x136 = INT32_MIN;
	int32_t t29 = INT32_MIN;

	t29 = (x133-((x134/x135)*x136));

	if (t29 != INT32_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x137 = INT32_MIN;
	static int8_t x138 = 7;
	uint32_t x139 = 70U;
	static volatile int8_t x140 = 0;

	t30 = (x137-((x138/x139)*x140));

	if (t30 != 2147483648U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x141 = INT32_MAX;
	int16_t x143 = INT16_MIN;
	int16_t x144 = 24;
	int64_t t31 = 268208308079472LL;

	t31 = (x141-((x142/x143)*x144));

	if (t31 != 6755401588539367LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x145 = 14U;
	static int8_t x146 = INT8_MAX;
	volatile int64_t x147 = INT64_MAX;
	int64_t t32 = -427303LL;

	t32 = (x145-((x146/x147)*x148));

	if (t32 != 14LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x149 = INT32_MIN;
	static int64_t x150 = 13614392892379LL;
	int64_t x151 = INT64_MAX;
	volatile int64_t t33 = -1LL;

	t33 = (x149-((x150/x151)*x152));

	if (t33 != -2147483648LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x153 = 0U;
	int16_t x154 = -1;
	int8_t x155 = INT8_MAX;
	uint64_t x156 = 12781148845427LLU;
	volatile uint64_t t34 = 489629LLU;

	t34 = (x153-((x154/x155)*x156));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x157 = -1;
	uint16_t x158 = 238U;
	static volatile int32_t x159 = INT32_MIN;
	static volatile uint32_t x160 = 30550950U;
	volatile uint32_t t35 = UINT32_MAX;

	t35 = (x157-((x158/x159)*x160));

	if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x161 = 42U;
	static volatile int32_t x162 = INT32_MIN;
	uint8_t x163 = UINT8_MAX;
	static volatile int64_t x164 = -224001841185LL;
	static int64_t t36 = 910939590981237392LL;

	t36 = (x161-((x162/x163)*x164));

	if (t36 != -1886432401546842198LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x165 = INT64_MAX;
	int64_t x166 = 259705871LL;
	uint32_t x167 = UINT32_MAX;
	int8_t x168 = INT8_MAX;
	volatile int64_t t37 = INT64_MAX;

	t37 = (x165-((x166/x167)*x168));

	if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x173 = UINT16_MAX;
	int16_t x174 = 12;
	volatile int8_t x175 = INT8_MAX;
	uint64_t x176 = 12551258LLU;
	static volatile uint64_t t38 = 379785LLU;

	t38 = (x173-((x174/x175)*x176));

	if (t38 != 65535LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x181 = -1;
	static int32_t x182 = INT32_MIN;
	int64_t x183 = -13097717166LL;
	uint64_t x184 = 2680985636672942LLU;
	volatile uint64_t t39 = UINT64_MAX;

	t39 = (x181-((x182/x183)*x184));

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x185 = UINT16_MAX;
	int16_t x186 = 1;
	int16_t x187 = -1;
	uint16_t x188 = UINT16_MAX;
	int32_t t40 = -39436942;

	t40 = (x185-((x186/x187)*x188));

	if (t40 != 131070) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x189 = INT16_MAX;
	static int8_t x190 = -3;
	int8_t x192 = INT8_MAX;
	volatile int32_t t41 = -3;

	t41 = (x189-((x190/x191)*x192));

	if (t41 != 32767) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x194 = UINT8_MAX;
	uint32_t x195 = UINT32_MAX;
	int8_t x196 = -1;
	volatile uint32_t t42 = 207614U;

	t42 = (x193-((x194/x195)*x196));

	if (t42 != 2147483647U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x198 = 3U;
	int32_t x199 = -1;
	volatile int64_t x200 = -496980381480340LL;

	t43 = (x197-((x198/x199)*x200));

	if (t43 != -1490941144473788LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x205 = UINT32_MAX;
	uint16_t x206 = 5329U;
	volatile uint32_t t44 = UINT32_MAX;

	t44 = (x205-((x206/x207)*x208));

	if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x209 = 72U;
	uint16_t x210 = 3610U;
	int64_t x211 = -26847392716LL;
	static int16_t x212 = 1676;
	volatile int64_t t45 = 120022968521175750LL;

	t45 = (x209-((x210/x211)*x212));

	if (t45 != 72LL) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int64_t x213 = INT64_MIN;
	int64_t x215 = -898208LL;
	volatile uint8_t x216 = 0U;

	t46 = (x213-((x214/x215)*x216));

	if (t46 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x217 = -1LL;
	static int8_t x218 = INT8_MIN;
	volatile uint16_t x219 = UINT16_MAX;
	int64_t x220 = -1LL;
	int64_t t47 = 207161469341223830LL;

	t47 = (x217-((x218/x219)*x220));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x230 = -1;
	uint16_t x231 = 1U;
	uint64_t x232 = 376423LLU;
	volatile uint64_t t48 = 4587538929422884937LLU;

	t48 = (x229-((x230/x231)*x232));

	if (t48 != 376426LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x233 = INT16_MIN;
	uint16_t x234 = 1U;
	int16_t x236 = -1;
	volatile uint64_t t49 = 205027657936LLU;

	t49 = (x233-((x234/x235)*x236));

	if (t49 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x237 = -1;
	volatile int64_t t50 = 80200452601LL;

	t50 = (x237-((x238/x239)*x240));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x241 = -1LL;
	int8_t x242 = INT8_MIN;
	int32_t x244 = -1;
	int64_t t51 = 906866LL;

	t51 = (x241-((x242/x243)*x244));

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x245 = -769392908624LL;
	int8_t x246 = INT8_MAX;
	volatile int64_t x247 = -3218904500417992LL;
	volatile int64_t t52 = 20544337432005LL;

	t52 = (x245-((x246/x247)*x248));

	if (t52 != -769392908624LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x253 = 415277126066LLU;
	static volatile int8_t x254 = -1;
	static int8_t x255 = INT8_MIN;
	int32_t x256 = INT32_MIN;
	volatile uint64_t t53 = 7112372LLU;

	t53 = (x253-((x254/x255)*x256));

	if (t53 != 415277126066LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x257 = 361859636;
	uint64_t x259 = 10682352014301427LLU;
	volatile uint64_t t54 = 272340299138534LLU;

	t54 = (x257-((x258/x259)*x260));

	if (t54 != 96305592942LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int64_t x261 = -959LL;
	volatile uint8_t x262 = UINT8_MAX;
	volatile int16_t x264 = INT16_MAX;

	t55 = (x261-((x262/x263)*x264));

	if (t55 != -959LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x265 = INT8_MAX;
	int64_t x266 = -1LL;
	int8_t x267 = 6;
	static int16_t x268 = -114;

	t56 = (x265-((x266/x267)*x268));

	if (t56 != 127LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x269 = 204243403U;
	static volatile int8_t x271 = INT8_MIN;
	int8_t x272 = INT8_MAX;
	uint32_t t57 = 248651420U;

	t57 = (x269-((x270/x271)*x272));

	if (t57 != 204243403U) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x273 = 13U;
	int8_t x274 = INT8_MAX;
	static int64_t x275 = -2166937296704LL;
	volatile int64_t x276 = INT64_MIN;

	t58 = (x273-((x274/x275)*x276));

	if (t58 != 13LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x277 = INT8_MIN;
	static uint32_t x278 = 2U;
	int32_t x279 = INT32_MIN;
	uint32_t x280 = UINT32_MAX;
	volatile uint32_t t59 = 33694U;

	t59 = (x277-((x278/x279)*x280));

	if (t59 != 4294967168U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x281 = 30;
	uint8_t x282 = 89U;
	static int16_t x284 = INT16_MIN;
	static volatile int64_t t60 = -3609860336519413189LL;

	t60 = (x281-((x282/x283)*x284));

	if (t60 != 30LL) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int16_t x286 = -1;
	int16_t x287 = INT16_MIN;

	t61 = (x285-((x286/x287)*x288));

	if (t61 != 65535) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x294 = 1904674LLU;
	volatile int32_t x295 = -2;
	volatile int8_t x296 = INT8_MAX;

	t62 = (x293-((x294/x295)*x296));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x297 = INT16_MIN;
	int32_t x298 = INT32_MIN;
	int8_t x300 = 3;
	volatile int64_t t63 = 887LL;

	t63 = (x297-((x298/x299)*x300));

	if (t63 != -32768LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x301 = 1886U;
	int16_t x302 = 2886;
	int64_t x303 = INT64_MIN;
	volatile int64_t t64 = -206848939641820LL;

	t64 = (x301-((x302/x303)*x304));

	if (t64 != 1886LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x305 = -1LL;
	int8_t x306 = INT8_MIN;
	int64_t x307 = INT64_MIN;
	uint8_t x308 = UINT8_MAX;
	int64_t t65 = 253380808810LL;

	t65 = (x305-((x306/x307)*x308));

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x309 = 14;
	int8_t x311 = -1;
	int8_t x312 = INT8_MIN;
	volatile int32_t t66 = 3635;

	t66 = (x309-((x310/x311)*x312));

	if (t66 != 7054) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x313 = 79;
	int64_t x314 = INT64_MIN;
	int64_t x315 = INT64_MIN;
	static uint32_t x316 = 1651879497U;
	volatile int64_t t67 = -3925618751696200LL;

	t67 = (x313-((x314/x315)*x316));

	if (t67 != -1651879418LL) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint32_t x317 = 176167905U;
	int64_t x318 = -1LL;
	static uint64_t x319 = UINT64_MAX;
	int16_t x320 = -1;
	static volatile uint64_t t68 = 1182074635LLU;

	t68 = (x317-((x318/x319)*x320));

	if (t68 != 176167906LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int64_t x324 = INT64_MIN;

	t69 = (x321-((x322/x323)*x324));

	if (t69 != 14LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x325 = 205783426LL;
	int8_t x326 = 0;
	static int8_t x327 = 7;
	uint16_t x328 = 14524U;
	volatile int64_t t70 = 1752908537910882LL;

	t70 = (x325-((x326/x327)*x328));

	if (t70 != 205783426LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x329 = UINT64_MAX;
	static uint32_t x330 = 23375026U;
	int32_t x331 = 3343;
	int16_t x332 = INT16_MIN;
	static uint64_t t71 = 8061383LLU;

	t71 = (x329-((x330/x331)*x332));

	if (t71 != 18446744069643698175LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x333 = INT64_MAX;
	static uint16_t x334 = 42U;
	uint16_t x335 = 11012U;
	static int64_t t72 = INT64_MAX;

	t72 = (x333-((x334/x335)*x336));

	if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x341 = INT8_MIN;
	static volatile uint64_t x342 = UINT64_MAX;
	int32_t x343 = INT32_MIN;
	uint64_t t73 = 8726727975041253067LLU;

	t73 = (x341-((x342/x343)*x344));

	if (t73 != 18446744073709536570LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x346 = -1LL;
	int64_t x347 = INT64_MAX;
	volatile int64_t t74 = 56LL;

	t74 = (x345-((x346/x347)*x348));

	if (t74 != 32767LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x349 = 420U;
	int16_t x350 = INT16_MIN;
	int16_t x351 = -1;
	static int64_t x352 = 48034LL;
	volatile int64_t t75 = -49015625193391LL;

	t75 = (x349-((x350/x351)*x352));

	if (t75 != -1573977692LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x354 = UINT32_MAX;
	uint64_t x355 = 2943396631895108LLU;
	volatile uint64_t t76 = UINT64_MAX;

	t76 = (x353-((x354/x355)*x356));

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x357 = -1;
	uint32_t x358 = UINT32_MAX;
	int64_t x359 = 75284645494291409LL;
	uint16_t x360 = UINT16_MAX;
	volatile int64_t t77 = -104783443477LL;

	t77 = (x357-((x358/x359)*x360));

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x361 = INT8_MAX;
	int8_t x362 = -1;
	volatile uint16_t x363 = 6U;
	volatile int32_t x364 = -1;
	int32_t t78 = 42201734;

	t78 = (x361-((x362/x363)*x364));

	if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x365 = UINT64_MAX;
	int16_t x366 = 128;
	uint8_t x368 = UINT8_MAX;
	static volatile uint64_t t79 = UINT64_MAX;

	t79 = (x365-((x366/x367)*x368));

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x371 = INT64_MAX;
	static volatile int32_t x372 = 6603;

	t80 = (x369-((x370/x371)*x372));

	if (t80 != -2147483648LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x374 = 338080504LLU;
	uint16_t x375 = 10259U;
	static volatile int16_t x376 = INT16_MAX;
	volatile uint64_t t81 = 1422759596266LLU;

	t81 = (x373-((x374/x375)*x376));

	if (t81 != 22352640513589LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x377 = -63;
	static uint64_t x378 = UINT64_MAX;
	int8_t x379 = INT8_MIN;
	int16_t x380 = -1;
	static uint64_t t82 = 1909LLU;

	t82 = (x377-((x378/x379)*x380));

	if (t82 != 18446744073709551554LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x386 = 44;
	volatile int32_t x387 = INT32_MIN;
	static int64_t x388 = INT64_MAX;

	t83 = (x385-((x386/x387)*x388));

	if (t83 != 37LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x389 = INT16_MIN;
	static int16_t x390 = INT16_MIN;
	static int32_t x391 = 7778539;
	static int16_t x392 = 1583;
	static int32_t t84 = 2954;

	t84 = (x389-((x390/x391)*x392));

	if (t84 != -32768) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x395 = UINT16_MAX;
	int64_t x396 = INT64_MIN;
	volatile int64_t t85 = INT64_MIN;

	t85 = (x393-((x394/x395)*x396));

	if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x398 = -1;
	int8_t x399 = INT8_MIN;
	int8_t x400 = 1;
	volatile int32_t t86 = -65;

	t86 = (x397-((x398/x399)*x400));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x401 = INT8_MIN;
	static int64_t x402 = -1LL;
	static uint32_t x403 = 102516318U;
	int64_t x404 = 45015424451807096LL;
	int64_t t87 = 1049494844386719567LL;

	t87 = (x401-((x402/x403)*x404));

	if (t87 != -128LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x406 = UINT16_MAX;
	static int64_t x407 = INT64_MIN;
	static int8_t x408 = -1;

	t88 = (x405-((x406/x407)*x408));

	if (t88 != 12LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x409 = 88919;
	int8_t x410 = INT8_MIN;
	static volatile uint16_t x411 = 28778U;
	int16_t x412 = INT16_MAX;
	static int32_t t89 = -61;

	t89 = (x409-((x410/x411)*x412));

	if (t89 != 88919) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x415 = -600;
	static volatile int64_t x416 = INT64_MAX;
	volatile uint64_t t90 = 382394677823781LLU;

	t90 = (x413-((x414/x415)*x416));

	if (t90 != 203LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x417 = INT64_MIN;
	int16_t x418 = INT16_MIN;
	int32_t x419 = INT32_MAX;
	static uint64_t x420 = 79033LLU;
	volatile uint64_t t91 = 108400351898LLU;

	t91 = (x417-((x418/x419)*x420));

	if (t91 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x421 = INT64_MAX;
	uint32_t x423 = 637181U;
	uint64_t x424 = 103LLU;
	uint64_t t92 = 5917443309273445LLU;

	t92 = (x421-((x422/x423)*x424));

	if (t92 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x430 = 1510805590349LLU;
	uint8_t x431 = 7U;
	int32_t x432 = -737195;
	uint64_t t93 = 236171427105431757LLU;

	t93 = (x429-((x430/x431)*x432));

	if (t93 != 159108332453272810LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x434 = -1;
	static int64_t x435 = INT64_MAX;
	uint16_t x436 = 5U;
	int64_t t94 = -2414905090137990104LL;

	t94 = (x433-((x434/x435)*x436));

	if (t94 != 2147483647LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x437 = UINT16_MAX;
	int32_t x438 = -239;
	volatile int8_t x439 = INT8_MIN;
	uint16_t x440 = 64U;
	volatile int32_t t95 = 3518077;

	t95 = (x437-((x438/x439)*x440));

	if (t95 != 65471) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int16_t x442 = INT16_MIN;
	static volatile int32_t x443 = INT32_MAX;
	static volatile int64_t x444 = INT64_MAX;
	int64_t t96 = INT64_MAX;

	t96 = (x441-((x442/x443)*x444));

	if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x445 = 10157000LLU;
	static volatile int8_t x448 = INT8_MIN;

	t97 = (x445-((x446/x447)*x448));

	if (t97 != 18446744069424741448LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x449 = 892U;
	volatile uint8_t x450 = UINT8_MAX;
	uint32_t x451 = 399U;
	int32_t x452 = -1;
	uint32_t t98 = 8075049U;

	t98 = (x449-((x450/x451)*x452));

	if (t98 != 892U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x453 = UINT8_MAX;
	uint64_t x454 = 402LLU;
	uint16_t x455 = UINT16_MAX;
	static int64_t x456 = INT64_MAX;
	volatile uint64_t t99 = 44156LLU;

	t99 = (x453-((x454/x455)*x456));

	if (t99 != 255LLU) { NG(); } else { ; }
	
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

