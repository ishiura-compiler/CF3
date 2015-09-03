#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x8 = 148714686LL;
int64_t t1 = 85843940722LL;
uint64_t x10 = UINT64_MAX;
static int8_t x11 = 0;
static int64_t x17 = INT64_MIN;
uint32_t x18 = UINT32_MAX;
uint32_t x22 = 11U;
int8_t x25 = 29;
int8_t x26 = -1;
static int8_t x31 = -1;
int16_t x40 = 64;
static int64_t x41 = 4376306982430358914LL;
int8_t x48 = INT8_MAX;
int8_t x54 = INT8_MIN;
volatile uint16_t x56 = UINT16_MAX;
uint8_t x58 = 4U;
int64_t t14 = -1LL;
volatile int64_t t15 = 13583367LL;
uint64_t x76 = 466868516504164LLU;
uint64_t x77 = 1739666LLU;
volatile int8_t x79 = -2;
static uint64_t t19 = 56413922977LLU;
static int16_t x83 = INT16_MAX;
uint8_t x85 = 4U;
static uint64_t x86 = 64273947LLU;
int64_t x91 = 882855039LL;
int8_t x93 = -4;
int32_t x95 = -30931;
int8_t x98 = INT8_MIN;
int64_t t25 = 3652LL;
volatile int32_t x107 = 736032708;
static volatile int64_t x109 = INT64_MIN;
volatile uint64_t t27 = 21942814606263001LLU;
volatile uint16_t x118 = 2718U;
uint8_t x120 = 44U;
uint16_t x125 = UINT16_MAX;
int64_t t31 = 3244LL;
int16_t x131 = INT16_MIN;
int64_t t32 = -20379123420940LL;
static uint8_t x137 = UINT8_MAX;
int32_t x141 = INT32_MIN;
int8_t x148 = INT8_MIN;
static int64_t x151 = INT64_MAX;
uint64_t x154 = 22017635LLU;
volatile uint32_t t39 = 59901U;
static uint16_t x163 = UINT16_MAX;
int64_t x167 = INT64_MIN;
volatile int64_t t42 = 1143910248861374LL;
static int32_t t44 = -5668;
int8_t x183 = -3;
volatile int16_t x184 = INT16_MIN;
volatile int64_t x186 = INT64_MIN;
int32_t x187 = 3;
int32_t x190 = -1;
volatile uint32_t t48 = 928U;
uint8_t x197 = 62U;
int64_t x199 = INT64_MIN;
int8_t x203 = -1;
static uint64_t t50 = 2096494758511216LLU;
uint8_t x205 = UINT8_MAX;
volatile int64_t x212 = INT64_MIN;
int64_t t53 = 36LL;
uint64_t x220 = UINT64_MAX;
volatile int32_t x222 = INT32_MIN;
uint64_t x223 = 285462196LLU;
volatile int16_t x226 = INT16_MAX;
static int8_t x230 = INT8_MIN;
int16_t x236 = INT16_MIN;
int32_t x240 = -1;
int64_t x245 = -42859LL;
static volatile uint32_t x246 = 3951328U;
int64_t t61 = 127430566775LL;
int32_t x249 = -51302978;
int8_t x256 = INT8_MAX;
uint16_t x263 = 193U;
int32_t x267 = INT32_MIN;
int16_t x270 = INT16_MAX;
volatile int32_t t67 = -5645515;
int64_t x274 = -15340236104615057LL;
static int16_t x275 = 2;
uint64_t x284 = 1262LLU;
volatile int64_t t72 = 4003533185904168787LL;
uint8_t x294 = 9U;
uint16_t x299 = UINT16_MAX;
int8_t x300 = -1;
int8_t x303 = -63;
int32_t x304 = -1;
static volatile uint64_t x305 = UINT64_MAX;
uint16_t x309 = UINT16_MAX;
static volatile int16_t x310 = -1;
int32_t x319 = -28764;
int16_t x322 = INT16_MIN;
int8_t x323 = -1;
uint64_t x324 = 18091LLU;
uint64_t t80 = 519LLU;
int8_t x329 = INT8_MIN;
uint16_t x331 = 9476U;
int8_t x332 = -1;
static int16_t x334 = -1223;
uint32_t x344 = UINT32_MAX;
uint32_t t86 = 20U;
int32_t t87 = 1;
uint64_t t88 = 10430715090042098LLU;
int64_t x359 = INT64_MIN;
static volatile int32_t t91 = 3;
volatile int8_t x371 = INT8_MIN;
int64_t x373 = 601747654951LL;
volatile int64_t t93 = 16011375LL;
uint32_t t94 = 1345739U;
int8_t x381 = INT8_MAX;
uint16_t x384 = 81U;
int16_t x390 = INT16_MAX;
static int32_t t97 = 32896398;


void f0(void) {
	static int32_t x1 = -7786850;
	volatile int64_t x2 = INT64_MIN;
	uint8_t x3 = 0U;
	int16_t x4 = 61;
	static int64_t t0 = 30LL;

	t0 = (x1^(x2|(x3&x4)));

	if (t0 != 9223372036846988958LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	int16_t x6 = INT16_MIN;
	uint16_t x7 = 379U;

	t1 = (x5^(x6|(x7&x8)));

	if (t1 != 32709LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = INT64_MIN;
	volatile uint64_t x12 = 841383933297417LLU;
	uint64_t t2 = 261LLU;

	t2 = (x9^(x10|(x11&x12)));

	if (t2 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 3763U;
	uint16_t x14 = 7U;
	volatile int64_t x15 = -628076631865LL;
	uint64_t x16 = 149LLU;
	volatile uint64_t t3 = 308LLU;

	t3 = (x13^(x14|(x15&x16)));

	if (t3 != 3636LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x19 = 8297U;
	int16_t x20 = -7810;
	int64_t t4 = -2004LL;

	t4 = (x17^(x18|(x19&x20)));

	if (t4 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 7U;
	volatile int32_t x23 = INT32_MIN;
	static uint8_t x24 = UINT8_MAX;
	volatile uint32_t t5 = 58897158U;

	t5 = (x21^(x22|(x23&x24)));

	if (t5 != 12U) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x27 = 1U;
	int32_t x28 = -983352;
	static int32_t t6 = -6485835;

	t6 = (x25^(x26|(x27&x28)));

	if (t6 != -30) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MAX;
	static volatile int64_t x30 = -1LL;
	int32_t x32 = INT32_MAX;
	int64_t t7 = -1LL;

	t7 = (x29^(x30|(x31&x32)));

	if (t7 != -2147483648LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = 2;
	static int16_t x34 = -1;
	int32_t x35 = 1774;
	static int32_t x36 = 3358592;
	int32_t t8 = -54649664;

	t8 = (x33^(x34|(x35&x36)));

	if (t8 != -3) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x37 = UINT64_MAX;
	int64_t x38 = 89386591585725LL;
	int64_t x39 = 339LL;
	uint64_t t9 = 657156725796879060LLU;

	t9 = (x37^(x38|(x39&x40)));

	if (t9 != 18446654687117965826LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x42 = INT16_MIN;
	int32_t x43 = INT32_MIN;
	static int32_t x44 = INT32_MIN;
	static int64_t t10 = 327789232LL;

	t10 = (x41^(x42|(x43&x44)));

	if (t10 != -4376306982430360190LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x45 = -1;
	int32_t x46 = INT32_MIN;
	int32_t x47 = INT32_MAX;
	int32_t t11 = -725;

	t11 = (x45^(x46|(x47&x48)));

	if (t11 != 2147483520) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint64_t x49 = UINT64_MAX;
	uint8_t x50 = 80U;
	int16_t x51 = -1;
	int16_t x52 = INT16_MIN;
	uint64_t t12 = 24LLU;

	t12 = (x49^(x50|(x51&x52)));

	if (t12 != 32687LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x53 = INT64_MAX;
	int16_t x55 = -1;
	int64_t t13 = INT64_MIN;

	t13 = (x53^(x54|(x55&x56)));

	if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x57 = 103372LL;
	int8_t x59 = INT8_MAX;
	static int16_t x60 = INT16_MIN;

	t14 = (x57^(x58|(x59&x60)));

	if (t14 != 103368LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = 1;
	volatile uint8_t x62 = 3U;
	int64_t x63 = -27LL;
	uint32_t x64 = 10854U;

	t15 = (x61^(x62|(x63&x64)));

	if (t15 != 10854LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 3U;
	int64_t x66 = -621489739502553406LL;
	volatile int32_t x67 = -1;
	uint16_t x68 = UINT16_MAX;
	static int64_t t16 = -1793699275570LL;

	t16 = (x65^(x66|(x67&x68)));

	if (t16 != -621489739502518276LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x69 = 272945LL;
	volatile int8_t x70 = -23;
	int64_t x71 = INT64_MAX;
	volatile uint16_t x72 = 12U;
	volatile int64_t t17 = -699597759848472104LL;

	t17 = (x69^(x70|(x71&x72)));

	if (t17 != -272932LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MAX;
	static uint32_t x74 = UINT32_MAX;
	int64_t x75 = -1LL;
	uint64_t t18 = 58585232025485LLU;

	t18 = (x73^(x74|(x75&x76)));

	if (t18 != 466869387526144LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x78 = 2;
	uint16_t x80 = UINT16_MAX;

	t19 = (x77^(x78|(x79&x80)));

	if (t19 != 1733740LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = 34U;
	uint32_t x82 = 1915913810U;
	static volatile int64_t x84 = -199753364262380894LL;
	static int64_t t20 = 414034LL;

	t20 = (x81^(x82|(x83&x84)));

	if (t20 != 1915920080LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x87 = INT64_MIN;
	int8_t x88 = INT8_MIN;
	uint64_t t21 = 579632LLU;

	t21 = (x85^(x86|(x87&x88)));

	if (t21 != 9223372036919049759LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x89 = UINT16_MAX;
	volatile uint32_t x90 = 967U;
	uint64_t x92 = UINT64_MAX;
	volatile uint64_t t22 = 498LLU;

	t22 = (x89^(x90|(x91&x92)));

	if (t22 != 882880512LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x94 = INT64_MIN;
	int16_t x96 = 26;
	static int64_t t23 = 2161481023622899LL;

	t23 = (x93^(x94|(x95&x96)));

	if (t23 != 9223372036854775796LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = UINT16_MAX;
	int8_t x99 = INT8_MIN;
	uint64_t x100 = 2855846271784127LLU;
	static uint64_t t24 = 95701111036060204LLU;

	t24 = (x97^(x98|(x99&x100)));

	if (t24 != 18446744073709486207LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = UINT32_MAX;
	int64_t x102 = -1LL;
	volatile int32_t x103 = -1;
	uint16_t x104 = UINT16_MAX;

	t25 = (x101^(x102|(x103&x104)));

	if (t25 != -4294967296LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = 649738970879397929LLU;
	int16_t x106 = -4;
	int8_t x108 = -1;
	uint64_t t26 = 26014LLU;

	t26 = (x105^(x106|(x107&x108)));

	if (t26 != 17797005102830153685LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x110 = 2766LLU;
	uint16_t x111 = 1460U;
	int8_t x112 = INT8_MIN;

	t27 = (x109^(x110|(x111&x112)));

	if (t27 != 9223372036854779854LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 8U;
	uint16_t x114 = 944U;
	volatile int16_t x115 = -8324;
	int8_t x116 = INT8_MIN;
	volatile int32_t t28 = -1;

	t28 = (x113^(x114|(x115&x116)));

	if (t28 != -8264) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = 449872LLU;
	uint16_t x119 = 298U;
	uint64_t t29 = 871221LLU;

	t29 = (x117^(x118|(x119&x120)));

	if (t29 != 448494LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = -154LL;
	uint32_t x122 = UINT32_MAX;
	uint32_t x123 = 11794712U;
	volatile int32_t x124 = -1;
	int64_t t30 = -56756911LL;

	t30 = (x121^(x122|(x123&x124)));

	if (t30 != -4294967143LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x126 = 642U;
	uint16_t x127 = UINT16_MAX;
	int64_t x128 = 13LL;

	t31 = (x125^(x126|(x127&x128)));

	if (t31 != 64880LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = 4056U;
	static int16_t x130 = 3;
	int64_t x132 = INT64_MAX;

	t32 = (x129^(x130|(x131&x132)));

	if (t32 != 9223372036854747099LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MAX;
	static volatile int8_t x134 = INT8_MIN;
	int64_t x135 = INT64_MAX;
	int8_t x136 = INT8_MIN;
	volatile int64_t t33 = -8662959104240187LL;

	t33 = (x133^(x134|(x135&x136)));

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x138 = 1308LLU;
	int8_t x139 = 42;
	uint8_t x140 = 3U;
	uint64_t t34 = 346163LLU;

	t34 = (x137^(x138|(x139&x140)));

	if (t34 != 1505LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int16_t x142 = -24;
	uint32_t x143 = 1518U;
	int16_t x144 = INT16_MAX;
	volatile uint32_t t35 = 1299U;

	t35 = (x141^(x142|(x143&x144)));

	if (t35 != 2147483630U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = 2;
	uint64_t x146 = 3438LLU;
	int32_t x147 = INT32_MAX;
	static uint64_t t36 = 185472LLU;

	t36 = (x145^(x146|(x147&x148)));

	if (t36 != 2147483628LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = 28U;
	volatile uint16_t x150 = UINT16_MAX;
	int64_t x152 = -1LL;
	volatile int64_t t37 = -71882LL;

	t37 = (x149^(x150|(x151&x152)));

	if (t37 != 9223372036854775779LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = 259612913684141LL;
	int64_t x155 = INT64_MAX;
	int32_t x156 = INT32_MIN;
	uint64_t t38 = 2648534588191845LLU;

	t38 = (x153^(x154|(x155&x156)));

	if (t38 != 9223112424707602638LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = 2340749U;
	int32_t x158 = INT32_MAX;
	int8_t x159 = -1;
	int8_t x160 = -1;

	t39 = (x157^(x158|(x159&x160)));

	if (t39 != 4292626546U) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int64_t x161 = INT64_MIN;
	static int64_t x162 = -1LL;
	volatile uint8_t x164 = 14U;
	volatile int64_t t40 = INT64_MAX;

	t40 = (x161^(x162|(x163&x164)));

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MIN;
	uint8_t x166 = 6U;
	uint16_t x168 = 536U;
	volatile int64_t t41 = -5126199131990159LL;

	t41 = (x165^(x166|(x167&x168)));

	if (t41 != -32762LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MIN;
	uint16_t x170 = UINT16_MAX;
	int32_t x171 = INT32_MIN;
	int64_t x172 = INT64_MAX;

	t42 = (x169^(x170|(x171&x172)));

	if (t42 != -9223372034707357569LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = 2279894757581550455LL;
	int8_t x174 = INT8_MIN;
	uint64_t x175 = UINT64_MAX;
	int32_t x176 = -1;
	static volatile uint64_t t43 = 364732518256LLU;

	t43 = (x173^(x174|(x175&x176)));

	if (t43 != 16166849316128001160LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x177 = 43U;
	volatile int8_t x178 = INT8_MIN;
	int32_t x179 = 59175;
	static uint16_t x180 = 3979U;

	t44 = (x177^(x178|(x179&x180)));

	if (t44 != -88) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = 2U;
	uint32_t x182 = UINT32_MAX;
	uint32_t t45 = 215U;

	t45 = (x181^(x182|(x183&x184)));

	if (t45 != 4294967293U) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x185 = 27160223U;
	volatile int64_t x188 = INT64_MAX;
	int64_t t46 = 77027798708LL;

	t46 = (x185^(x186|(x187&x188)));

	if (t46 != -9223372036827615588LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x189 = INT8_MAX;
	volatile int8_t x191 = -1;
	volatile int32_t x192 = -2673;
	volatile int32_t t47 = 267288731;

	t47 = (x189^(x190|(x191&x192)));

	if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = UINT32_MAX;
	int16_t x194 = -13;
	int16_t x195 = 1;
	static int8_t x196 = 0;

	t48 = (x193^(x194|(x195&x196)));

	if (t48 != 12U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x198 = -12177590LL;
	int16_t x200 = INT16_MIN;
	volatile int64_t t49 = 151689LL;

	t49 = (x197^(x198|(x199&x200)));

	if (t49 != -12177548LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x201 = 49426450851LLU;
	uint16_t x202 = UINT16_MAX;
	int8_t x204 = INT8_MAX;

	t50 = (x201^(x202|(x203&x204)));

	if (t50 != 49426413148LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x206 = 26900U;
	uint8_t x207 = 1U;
	int64_t x208 = -33954LL;
	volatile int64_t t51 = -25077976LL;

	t51 = (x205^(x206|(x207&x208)));

	if (t51 != 27115LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = INT32_MIN;
	static int64_t x210 = INT64_MIN;
	static uint8_t x211 = 33U;
	volatile int64_t t52 = -527460213847LL;

	t52 = (x209^(x210|(x211&x212)));

	if (t52 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x213 = 43U;
	int64_t x214 = INT64_MIN;
	int32_t x215 = -1;
	int64_t x216 = 1046417LL;

	t53 = (x213^(x214|(x215&x216)));

	if (t53 != -9223372036853729350LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x217 = INT16_MAX;
	uint32_t x218 = 1393789114U;
	static int8_t x219 = INT8_MIN;
	uint64_t t54 = 9246272842LLU;

	t54 = (x217^(x218|(x219&x220)));

	if (t54 != 18446744073709518917LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = INT32_MIN;
	uint8_t x224 = 61U;
	uint64_t t55 = 10292679913LLU;

	t55 = (x221^(x222|(x223&x224)));

	if (t55 != 52LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = -1;
	int16_t x227 = INT16_MIN;
	uint32_t x228 = UINT32_MAX;
	uint32_t t56 = 5670699U;

	t56 = (x225^(x226|(x227&x228)));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint64_t x229 = 22LLU;
	int16_t x231 = 6;
	volatile uint64_t x232 = 16753LLU;
	volatile uint64_t t57 = 1838LLU;

	t57 = (x229^(x230|(x231&x232)));

	if (t57 != 18446744073709551510LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x233 = 6159437990773468LLU;
	int8_t x234 = INT8_MIN;
	uint8_t x235 = UINT8_MAX;
	static volatile uint64_t t58 = 265874LLU;

	t58 = (x233^(x234|(x235&x236)));

	if (t58 != 18440584635718778204LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x237 = 77006521LLU;
	int32_t x238 = INT32_MIN;
	volatile uint16_t x239 = 495U;
	uint64_t t59 = 254558975LLU;

	t59 = (x237^(x238|(x239&x240)));

	if (t59 != 18446744071639074646LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MIN;
	uint16_t x242 = UINT16_MAX;
	static int32_t x243 = 187;
	volatile int32_t x244 = -1;
	volatile int32_t t60 = -22757;

	t60 = (x241^(x242|(x243&x244)));

	if (t60 != -32769) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x247 = -1;
	volatile uint16_t x248 = 23193U;

	t61 = (x245^(x246|(x247&x248)));

	if (t61 != -3997076LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x250 = -1;
	static volatile uint8_t x251 = 5U;
	uint8_t x252 = 1U;
	int32_t t62 = 1;

	t62 = (x249^(x250|(x251&x252)));

	if (t62 != 51302977) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x253 = 35U;
	int16_t x254 = -1;
	uint16_t x255 = 7658U;
	static volatile int32_t t63 = -50;

	t63 = (x253^(x254|(x255&x256)));

	if (t63 != -36) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x257 = 324237LLU;
	uint64_t x258 = 1268511LLU;
	int16_t x259 = -1;
	static int32_t x260 = INT32_MIN;
	uint64_t t64 = 670314363109LLU;

	t64 = (x257^(x258|(x259&x260)));

	if (t64 != 18446744071563618706LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = INT32_MIN;
	uint32_t x262 = 1527258U;
	int8_t x264 = -16;
	volatile uint32_t t65 = 33751889U;

	t65 = (x261^(x262|(x263&x264)));

	if (t65 != 2149010906U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = 0;
	int8_t x266 = INT8_MIN;
	uint8_t x268 = 62U;
	int32_t t66 = -3791;

	t66 = (x265^(x266|(x267&x268)));

	if (t66 != -128) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int8_t x269 = INT8_MIN;
	int8_t x271 = INT8_MIN;
	int32_t x272 = 1918393;

	t67 = (x269^(x270|(x271&x272)));

	if (t67 != -1933185) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = 7U;
	uint8_t x276 = UINT8_MAX;
	volatile int64_t t68 = -116891LL;

	t68 = (x273^(x274|(x275&x276)));

	if (t68 != -15340236104615064LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x277 = INT64_MAX;
	int16_t x278 = -1;
	uint32_t x279 = UINT32_MAX;
	volatile int64_t x280 = -1LL;
	volatile int64_t t69 = INT64_MIN;

	t69 = (x277^(x278|(x279&x280)));

	if (t69 != INT64_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x281 = UINT8_MAX;
	uint32_t x282 = 21U;
	int8_t x283 = INT8_MIN;
	volatile uint64_t t70 = 568663940690LLU;

	t70 = (x281^(x282|(x283&x284)));

	if (t70 != 1130LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x285 = -86100550;
	int64_t x286 = -1LL;
	volatile int32_t x287 = -88249;
	int16_t x288 = INT16_MIN;
	int64_t t71 = 365992633LL;

	t71 = (x285^(x286|(x287&x288)));

	if (t71 != 86100549LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = -10913;
	int64_t x290 = -1LL;
	int32_t x291 = INT32_MIN;
	int16_t x292 = 1;

	t72 = (x289^(x290|(x291&x292)));

	if (t72 != 10912LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int8_t x293 = -1;
	volatile uint64_t x295 = 4862055LLU;
	uint16_t x296 = UINT16_MAX;
	static volatile uint64_t t73 = 10193LLU;

	t73 = (x293^(x294|(x295&x296)));

	if (t73 != 18446744073709539216LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = UINT16_MAX;
	int64_t x298 = INT64_MIN;
	volatile int64_t t74 = INT64_MIN;

	t74 = (x297^(x298|(x299&x300)));

	if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x301 = -185;
	int64_t x302 = 26LL;
	volatile int64_t t75 = -40505990659884117LL;

	t75 = (x301^(x302|(x303&x304)));

	if (t75 != 156LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x306 = INT16_MAX;
	volatile int64_t x307 = 116482874855LL;
	volatile int8_t x308 = INT8_MIN;
	uint64_t t76 = 11171LLU;

	t76 = (x305^(x306|(x307&x308)));

	if (t76 != 18446743957226651648LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x311 = -284LL;
	static uint64_t x312 = 803566733903158513LLU;
	uint64_t t77 = 11766953828926889LLU;

	t77 = (x309^(x310|(x311&x312)));

	if (t77 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x313 = 0;
	int8_t x314 = INT8_MIN;
	uint32_t x315 = UINT32_MAX;
	int64_t x316 = -1LL;
	volatile int64_t t78 = 742LL;

	t78 = (x313^(x314|(x315&x316)));

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x317 = 24;
	volatile int8_t x318 = INT8_MIN;
	uint64_t x320 = UINT64_MAX;
	volatile uint64_t t79 = 10099815452LLU;

	t79 = (x317^(x318|(x319&x320)));

	if (t79 != 18446744073709551548LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = 857494;

	t80 = (x321^(x322|(x323&x324)));

	if (t80 != 18446744073708688189LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x325 = UINT8_MAX;
	uint32_t x326 = UINT32_MAX;
	int8_t x327 = 2;
	static uint32_t x328 = UINT32_MAX;
	static volatile uint32_t t81 = 1386678866U;

	t81 = (x325^(x326|(x327&x328)));

	if (t81 != 4294967040U) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x330 = INT8_MIN;
	int32_t t82 = -32505;

	t82 = (x329^(x330|(x331&x332)));

	if (t82 != 4) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = 1;
	int16_t x335 = INT16_MIN;
	int16_t x336 = -174;
	volatile int32_t t83 = 155013;

	t83 = (x333^(x334|(x335&x336)));

	if (t83 != -1224) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x337 = 935071U;
	int16_t x338 = -3640;
	volatile uint64_t x339 = 254316824546458LLU;
	int8_t x340 = INT8_MAX;
	static uint64_t t84 = 7679153LLU;

	t84 = (x337^(x338|(x339&x340)));

	if (t84 != 18446744073708614981LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x341 = 5U;
	int8_t x342 = INT8_MIN;
	static uint8_t x343 = 3U;
	uint32_t t85 = 1261355U;

	t85 = (x341^(x342|(x343&x344)));

	if (t85 != 4294967174U) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int16_t x345 = INT16_MAX;
	static int8_t x346 = INT8_MAX;
	volatile uint32_t x347 = UINT32_MAX;
	int32_t x348 = INT32_MIN;

	t86 = (x345^(x346|(x347&x348)));

	if (t86 != 2147516288U) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x349 = 6;
	int16_t x350 = INT16_MIN;
	int8_t x351 = -1;
	int32_t x352 = INT32_MIN;

	t87 = (x349^(x350|(x351&x352)));

	if (t87 != -32762) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x353 = 2879513791226209LLU;
	int64_t x354 = INT64_MIN;
	uint64_t x355 = 4071239655910236074LLU;
	uint16_t x356 = UINT16_MAX;

	t88 = (x353^(x354|(x355&x356)));

	if (t88 != 9226251550645993163LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x357 = 3075U;
	static volatile uint8_t x358 = 0U;
	int64_t x360 = -1LL;
	static int64_t t89 = 9675794LL;

	t89 = (x357^(x358|(x359&x360)));

	if (t89 != -9223372036854772733LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = 0LL;
	volatile uint64_t x362 = 1313269LLU;
	int16_t x363 = -1;
	int32_t x364 = INT32_MAX;
	static volatile uint64_t t90 = 34LLU;

	t90 = (x361^(x362|(x363&x364)));

	if (t90 != 2147483647LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x365 = INT8_MIN;
	int32_t x366 = -1;
	static int16_t x367 = INT16_MIN;
	int8_t x368 = INT8_MAX;

	t91 = (x365^(x366|(x367&x368)));

	if (t91 != 127) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x369 = 3259U;
	int16_t x370 = -1;
	uint16_t x372 = 14850U;
	int32_t t92 = 6;

	t92 = (x369^(x370|(x371&x372)));

	if (t92 != -3260) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x374 = -1;
	static uint16_t x375 = 1575U;
	static int8_t x376 = INT8_MIN;

	t93 = (x373^(x374|(x375&x376)));

	if (t93 != -601747654952LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = UINT16_MAX;
	uint32_t x378 = 14516827U;
	uint8_t x379 = UINT8_MAX;
	int8_t x380 = 3;

	t94 = (x377^(x378|(x379&x380)));

	if (t94 != 14515620U) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x382 = 25381U;
	int32_t x383 = 7;
	volatile uint32_t t95 = 8U;

	t95 = (x381^(x382|(x383&x384)));

	if (t95 != 25434U) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x385 = INT64_MAX;
	volatile int8_t x386 = -1;
	int64_t x387 = INT64_MIN;
	static uint64_t x388 = UINT64_MAX;
	static volatile uint64_t t96 = 424664836962LLU;

	t96 = (x385^(x386|(x387&x388)));

	if (t96 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = 0;
	int32_t x391 = INT32_MIN;
	int16_t x392 = -1663;

	t97 = (x389^(x390|(x391&x392)));

	if (t97 != -2147450881) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x393 = 7566544U;
	static int32_t x394 = -1;
	int16_t x395 = -1;
	int64_t x396 = INT64_MIN;
	static volatile int64_t t98 = -1843419941601093LL;

	t98 = (x393^(x394|(x395&x396)));

	if (t98 != -7566545LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x397 = INT16_MIN;
	uint32_t x398 = 14U;
	static volatile int64_t x399 = INT64_MAX;
	uint8_t x400 = 10U;
	int64_t t99 = 35218723166879457LL;

	t99 = (x397^(x398|(x399&x400)));

	if (t99 != -32754LL) { NG(); } else { ; }
	
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

