#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x4 = 110171LLU;
uint32_t x15 = 2707U;
volatile uint64_t t4 = 1878641424755430349LLU;
int64_t x27 = -1217631288185LL;
int64_t x50 = -1LL;
int16_t x54 = -380;
int16_t x57 = -1;
static int64_t x61 = INT64_MIN;
volatile int8_t x62 = 17;
int16_t x63 = -1;
static int16_t x64 = -1;
int32_t t15 = -6712650;
int8_t x69 = INT8_MAX;
volatile int64_t t16 = 136797LL;
uint8_t x78 = 13U;
int8_t x81 = -1;
int32_t x82 = -1;
static volatile int16_t x83 = INT16_MAX;
static uint64_t t21 = 2470291655371LLU;
volatile uint64_t t22 = 6756401LLU;
static uint16_t x102 = 5U;
volatile int8_t x104 = INT8_MAX;
uint16_t x105 = 8106U;
int32_t x106 = INT32_MIN;
int16_t x110 = INT16_MAX;
int32_t x111 = INT32_MAX;
uint8_t x112 = 7U;
int64_t x114 = -137346534336882115LL;
int16_t x115 = INT16_MIN;
int64_t t27 = 1588842622122LL;
int8_t x117 = -14;
int16_t x123 = INT16_MIN;
volatile int32_t x124 = INT32_MAX;
static int8_t x126 = -1;
int8_t x130 = 1;
volatile uint64_t x137 = 12565734859465657LLU;
int16_t x139 = INT16_MIN;
uint32_t x144 = 14691U;
volatile int8_t x146 = -1;
volatile int8_t x148 = -1;
uint32_t x149 = UINT32_MAX;
volatile int8_t x150 = INT8_MIN;
uint8_t x154 = 3U;
int32_t x164 = 1;
int16_t x171 = INT16_MAX;
uint32_t t40 = 12U;
uint8_t x176 = 10U;
int16_t x183 = INT16_MIN;
int8_t x184 = INT8_MAX;
static volatile int32_t t43 = 6;
int64_t x187 = INT64_MIN;
int32_t x190 = -2281;
int8_t x196 = INT8_MAX;
uint32_t t50 = 882514U;
volatile int16_t x217 = -1;
static int8_t x219 = INT8_MIN;
uint32_t x223 = 422204U;
static volatile int64_t t55 = -756100451LL;
int16_t x234 = -1;
uint16_t x236 = UINT16_MAX;
volatile uint64_t x241 = 443856LLU;
uint8_t x244 = UINT8_MAX;
int32_t x246 = INT32_MIN;
int16_t x248 = INT16_MIN;
volatile uint64_t t62 = 5922LLU;
volatile int16_t x264 = INT16_MIN;
static int64_t t65 = 30531621278129LL;
static int32_t x274 = INT32_MIN;
int32_t t66 = 0;
int8_t x277 = -1;
int64_t x279 = -1LL;
volatile uint8_t x281 = UINT8_MAX;
int8_t x289 = INT8_MIN;
uint8_t x291 = 4U;
volatile int32_t t70 = 693311;
int64_t x300 = INT64_MIN;
static int32_t x304 = INT32_MIN;
volatile int16_t x308 = -5;
int16_t x310 = INT16_MIN;
int64_t x312 = 3677LL;
int64_t t75 = 1020509884LL;
static uint64_t x314 = 5835817027384599517LLU;
static uint64_t t76 = 119350796295761LLU;
uint32_t x317 = UINT32_MAX;
volatile int32_t x325 = INT32_MIN;
int16_t x327 = 0;
int64_t x328 = INT64_MIN;
volatile int32_t x332 = -14942;
int8_t x334 = INT8_MIN;
volatile int32_t t81 = -79884566;
int32_t x339 = -1;
int64_t x342 = INT64_MIN;
uint64_t x351 = UINT64_MAX;
static int64_t x362 = -1LL;
int32_t x366 = INT32_MAX;
static int32_t x369 = -1;
static int64_t x372 = 7865195LL;
uint64_t x377 = 1927788LLU;
volatile int8_t x378 = INT8_MIN;
volatile uint64_t t92 = 15033352607291LLU;
int64_t x383 = -1LL;
static uint8_t x384 = 8U;
int8_t x387 = INT8_MAX;
uint64_t t94 = 868331785846958LLU;
int16_t x392 = -12442;
uint8_t x394 = UINT8_MAX;
volatile uint32_t t97 = 13U;
volatile uint32_t x401 = UINT32_MAX;
static uint32_t x404 = 901U;
volatile uint64_t t99 = 7825LLU;


void f0(void) {
	uint8_t x1 = 1U;
	uint64_t x2 = 401810396851197375LLU;
	static int32_t x3 = INT32_MIN;
	uint64_t t0 = 72360403570867LLU;

	t0 = (x1+(x2&(x3^x4)));

	if (t0 != 401810395452507164LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = INT32_MIN;
	uint32_t x6 = 4464528U;
	static int16_t x7 = INT16_MIN;
	uint16_t x8 = UINT16_MAX;
	uint32_t t1 = 73957257U;

	t1 = (x5+(x6&(x7^x8)));

	if (t1 != 2151948176U) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x13 = 1U;
	volatile int16_t x14 = INT16_MIN;
	int32_t x16 = -1;
	volatile uint32_t t2 = 15326163U;

	t2 = (x13+(x14&(x15^x16)));

	if (t2 != 4294934529U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x17 = -25157936543LL;
	int8_t x18 = INT8_MIN;
	static volatile int8_t x19 = 3;
	static int32_t x20 = INT32_MIN;
	volatile int64_t t3 = 204683840LL;

	t3 = (x17+(x18&(x19^x20)));

	if (t3 != -27305420191LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x21 = 20U;
	uint64_t x22 = 24153838270412LLU;
	int16_t x23 = -1;
	int32_t x24 = INT32_MIN;

	t4 = (x21+(x22&(x23^x24)));

	if (t4 != 1089681376LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x25 = 42U;
	int32_t x26 = -1;
	uint32_t x28 = 5563725U;
	volatile int64_t t5 = -481LL;

	t5 = (x25+(x26&(x27^x28)));

	if (t5 != -1217626250764LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x29 = -1;
	int8_t x30 = -8;
	volatile uint16_t x31 = UINT16_MAX;
	static int16_t x32 = -1;
	volatile int32_t t6 = -242;

	t6 = (x29+(x30&(x31^x32)));

	if (t6 != -65537) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = -270243LL;
	volatile int16_t x34 = 5;
	int32_t x35 = INT32_MIN;
	volatile uint32_t x36 = 61U;
	int64_t t7 = -56201LL;

	t7 = (x33+(x34&(x35^x36)));

	if (t7 != -270238LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x37 = 95U;
	int8_t x38 = INT8_MIN;
	static int16_t x39 = INT16_MAX;
	static int64_t x40 = 2LL;
	volatile int64_t t8 = 2LL;

	t8 = (x37+(x38&(x39^x40)));

	if (t8 != 32735LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = -285;
	int16_t x42 = INT16_MIN;
	int16_t x43 = -22;
	int64_t x44 = -204943350LL;
	volatile int64_t t9 = 598649LL;

	t9 = (x41+(x42&(x43^x44)));

	if (t9 != 204930787LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x45 = -1;
	uint8_t x46 = 7U;
	int16_t x47 = INT16_MIN;
	volatile int16_t x48 = 3;
	int32_t t10 = 182842;

	t10 = (x45+(x46&(x47^x48)));

	if (t10 != 2) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x49 = 0U;
	int16_t x51 = 1;
	int16_t x52 = INT16_MIN;
	int64_t t11 = 881404322LL;

	t11 = (x49+(x50&(x51^x52)));

	if (t11 != -32767LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x53 = 21043130453724348LLU;
	static int16_t x55 = 2931;
	volatile int64_t x56 = 3280LL;
	uint64_t t12 = 11859956LLU;

	t12 = (x53+(x54&(x55^x56)));

	if (t12 != 21043130453726012LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x58 = 2U;
	uint16_t x59 = UINT16_MAX;
	static uint8_t x60 = 1U;
	uint32_t t13 = 1588U;

	t13 = (x57+(x58&(x59^x60)));

	if (t13 != 1U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t t14 = INT64_MIN;

	t14 = (x61+(x62&(x63^x64)));

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = 59;
	static volatile int32_t x66 = INT32_MIN;
	int16_t x67 = INT16_MIN;
	int8_t x68 = INT8_MIN;

	t15 = (x65+(x66&(x67^x68)));

	if (t15 != 59) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x70 = INT64_MAX;
	int16_t x71 = INT16_MAX;
	uint32_t x72 = 264645U;

	t16 = (x69+(x70&(x71^x72)));

	if (t16 != 292537LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x73 = INT64_MAX;
	uint8_t x74 = 3U;
	volatile uint32_t x75 = UINT32_MAX;
	volatile int32_t x76 = 439199875;
	static int64_t t17 = INT64_MAX;

	t17 = (x73+(x74&(x75^x76)));

	if (t17 != INT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = INT8_MAX;
	int16_t x79 = INT16_MIN;
	volatile int8_t x80 = INT8_MIN;
	volatile int32_t t18 = 205;

	t18 = (x77+(x78&(x79^x80)));

	if (t18 != 127) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x84 = -1LL;
	static int64_t t19 = -2024938445LL;

	t19 = (x81+(x82&(x83^x84)));

	if (t19 != -32769LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x85 = INT16_MIN;
	static uint64_t x86 = 46815781LLU;
	int8_t x87 = INT8_MIN;
	volatile uint16_t x88 = 12345U;
	volatile uint64_t t20 = 3992LLU;

	t20 = (x85+(x86&(x87^x88)));

	if (t20 != 46778913LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = INT8_MAX;
	static volatile uint16_t x90 = UINT16_MAX;
	uint64_t x91 = 1018323990304134092LLU;
	uint64_t x92 = 2632256341LLU;

	t21 = (x89+(x90&(x91^x92)));

	if (t21 != 6424LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = -1;
	uint64_t x94 = 3455773063238388672LLU;
	uint16_t x95 = 76U;
	int8_t x96 = -1;

	t22 = (x93+(x94&(x95^x96)));

	if (t22 != 3455773063238388607LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x97 = INT64_MIN;
	int16_t x98 = INT16_MIN;
	static volatile uint32_t x99 = 43U;
	int64_t x100 = 301603050672943919LL;
	int64_t t23 = 110867090870629108LL;

	t23 = (x97+(x98&(x99^x100)));

	if (t23 != -8921768986181861376LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x101 = UINT32_MAX;
	int64_t x103 = INT64_MIN;
	int64_t t24 = -89545LL;

	t24 = (x101+(x102&(x103^x104)));

	if (t24 != 4294967300LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x107 = 200842123530LLU;
	int16_t x108 = -1;
	volatile uint64_t t25 = 4467LLU;

	t25 = (x105+(x106&(x107^x108)));

	if (t25 != 18446743871846096810LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x109 = 1;
	int32_t t26 = -2;

	t26 = (x109+(x110&(x111^x112)));

	if (t26 != 32761) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = INT64_MIN;
	int8_t x116 = -1;

	t27 = (x113+(x114&(x115^x116)));

	if (t27 != -9223372036854769091LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x118 = UINT64_MAX;
	static volatile uint8_t x119 = 1U;
	volatile uint64_t x120 = 113862556LLU;
	uint64_t t28 = 1303739LLU;

	t28 = (x117+(x118&(x119^x120)));

	if (t28 != 113862543LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x121 = INT64_MAX;
	static int32_t x122 = -1;
	int64_t t29 = -15996LL;

	t29 = (x121+(x122&(x123^x124)));

	if (t29 != 9223372034707324926LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint32_t x125 = 8799U;
	int32_t x127 = INT32_MIN;
	static int8_t x128 = -1;
	uint32_t t30 = 4U;

	t30 = (x125+(x126&(x127^x128)));

	if (t30 != 2147492446U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x129 = 0;
	uint64_t x131 = UINT64_MAX;
	volatile uint32_t x132 = 7U;
	volatile uint64_t t31 = 60443238LLU;

	t31 = (x129+(x130&(x131^x132)));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x138 = 28U;
	int64_t x140 = -1LL;
	static volatile uint64_t t32 = 8057853624898LLU;

	t32 = (x137+(x138&(x139^x140)));

	if (t32 != 12565734859465685LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x141 = -61;
	int32_t x142 = INT32_MIN;
	int32_t x143 = 673597053;
	uint32_t t33 = 527379714U;

	t33 = (x141+(x142&(x143^x144)));

	if (t33 != 4294967235U) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x145 = 431312724;
	uint32_t x147 = 21U;
	uint32_t t34 = 1191487343U;

	t34 = (x145+(x146&(x147^x148)));

	if (t34 != 431312702U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x151 = -1;
	int32_t x152 = -1;
	uint32_t t35 = UINT32_MAX;

	t35 = (x149+(x150&(x151^x152)));

	if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x153 = INT32_MIN;
	int32_t x155 = INT32_MIN;
	int32_t x156 = -1;
	int32_t t36 = 3135;

	t36 = (x153+(x154&(x155^x156)));

	if (t36 != -2147483645) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x157 = 3224;
	static volatile int16_t x158 = INT16_MAX;
	uint8_t x159 = 1U;
	int32_t x160 = INT32_MAX;
	int32_t t37 = 8;

	t37 = (x157+(x158&(x159^x160)));

	if (t37 != 35990) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x161 = INT8_MIN;
	uint16_t x162 = 0U;
	int8_t x163 = INT8_MIN;
	static volatile int32_t t38 = -9;

	t38 = (x161+(x162&(x163^x164)));

	if (t38 != -128) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x165 = 28;
	volatile int16_t x166 = INT16_MAX;
	int32_t x167 = INT32_MAX;
	int32_t x168 = INT32_MIN;
	volatile int32_t t39 = -1;

	t39 = (x165+(x166&(x167^x168)));

	if (t39 != 32795) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x169 = -12;
	int32_t x170 = -1;
	uint32_t x172 = 205639U;

	t40 = (x169+(x170&(x171^x172)));

	if (t40 != 220332U) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x173 = 11475LL;
	volatile int8_t x174 = INT8_MAX;
	static int64_t x175 = -1LL;
	volatile int64_t t41 = 676746784414720LL;

	t41 = (x173+(x174&(x175^x176)));

	if (t41 != 11592LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x177 = UINT32_MAX;
	static uint8_t x178 = 10U;
	int32_t x179 = 2;
	uint16_t x180 = 1612U;
	uint32_t t42 = 362U;

	t42 = (x177+(x178&(x179^x180)));

	if (t42 != 9U) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x181 = UINT8_MAX;
	static volatile int8_t x182 = INT8_MAX;

	t43 = (x181+(x182&(x183^x184)));

	if (t43 != 382) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x185 = 0;
	int64_t x186 = INT64_MIN;
	uint32_t x188 = 39354676U;
	volatile int64_t t44 = INT64_MIN;

	t44 = (x185+(x186&(x187^x188)));

	if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x189 = INT8_MIN;
	volatile int32_t x191 = -39313711;
	int16_t x192 = INT16_MIN;
	static volatile int32_t t45 = -971352048;

	t45 = (x189+(x190&(x191^x192)));

	if (t45 != 39294353) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x193 = 22685U;
	volatile uint16_t x194 = 3380U;
	uint64_t x195 = 70783313LLU;
	volatile uint64_t t46 = 1761158080765613319LLU;

	t46 = (x193+(x194&(x195^x196)));

	if (t46 != 22977LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x197 = -44;
	int8_t x198 = INT8_MIN;
	int16_t x199 = 25;
	int8_t x200 = INT8_MIN;
	int32_t t47 = -28;

	t47 = (x197+(x198&(x199^x200)));

	if (t47 != -172) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x201 = 57U;
	volatile int16_t x202 = INT16_MIN;
	int64_t x203 = -1LL;
	uint32_t x204 = 64618U;
	int64_t t48 = -2LL;

	t48 = (x201+(x202&(x203^x204)));

	if (t48 != -65479LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x205 = 124939U;
	uint8_t x206 = UINT8_MAX;
	int8_t x207 = -4;
	static int16_t x208 = INT16_MIN;
	uint32_t t49 = 6720457U;

	t49 = (x205+(x206&(x207^x208)));

	if (t49 != 125191U) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x209 = 65U;
	static int8_t x210 = -30;
	volatile uint16_t x211 = UINT16_MAX;
	int32_t x212 = INT32_MIN;

	t50 = (x209+(x210&(x211^x212)));

	if (t50 != 2147549219U) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x213 = -205;
	int8_t x214 = INT8_MIN;
	uint64_t x215 = UINT64_MAX;
	int16_t x216 = INT16_MIN;
	volatile uint64_t t51 = 19429450531290860LLU;

	t51 = (x213+(x214&(x215^x216)));

	if (t51 != 32435LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x218 = 215LL;
	volatile uint64_t x220 = UINT64_MAX;
	uint64_t t52 = 10206905176086LLU;

	t52 = (x217+(x218&(x219^x220)));

	if (t52 != 86LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x221 = INT32_MIN;
	int32_t x222 = 141556175;
	int32_t x224 = -1;
	volatile uint32_t t53 = 53955443U;

	t53 = (x221+(x222&(x223^x224)));

	if (t53 != 2288617667U) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x225 = 851599U;
	int32_t x226 = -1;
	volatile uint8_t x227 = 3U;
	volatile int8_t x228 = 26;
	volatile uint32_t t54 = 200662620U;

	t54 = (x225+(x226&(x227^x228)));

	if (t54 != 851624U) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x229 = 345422954373449986LL;
	int64_t x230 = INT64_MIN;
	int64_t x231 = INT64_MIN;
	int8_t x232 = INT8_MIN;

	t55 = (x229+(x230&(x231^x232)));

	if (t55 != 345422954373449986LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x233 = 3876U;
	volatile uint64_t x235 = UINT64_MAX;
	static volatile uint64_t t56 = 0LLU;

	t56 = (x233+(x234&(x235^x236)));

	if (t56 != 18446744073709489956LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int32_t x237 = -95;
	int16_t x238 = 726;
	int8_t x239 = INT8_MIN;
	static volatile int64_t x240 = -1LL;
	int64_t t57 = 7933184381192057LL;

	t57 = (x237+(x238&(x239^x240)));

	if (t57 != -9LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x242 = UINT16_MAX;
	int8_t x243 = 19;
	volatile uint64_t t58 = 24337621971410LLU;

	t58 = (x241+(x242&(x243^x244)));

	if (t58 != 444092LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x245 = 60U;
	uint16_t x247 = 253U;
	int32_t t59 = -1630037;

	t59 = (x245+(x246&(x247^x248)));

	if (t59 != -2147483588) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x249 = 0U;
	volatile int64_t x250 = -1LL;
	uint16_t x251 = 1069U;
	int64_t x252 = 398719631LL;
	int64_t t60 = 1LL;

	t60 = (x249+(x250&(x251^x252)));

	if (t60 != 398720674LL) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int8_t x253 = -1;
	uint16_t x254 = UINT16_MAX;
	static volatile int16_t x255 = INT16_MAX;
	int8_t x256 = INT8_MIN;
	int32_t t61 = 698294;

	t61 = (x253+(x254&(x255^x256)));

	if (t61 != 32894) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x257 = 13;
	uint64_t x258 = 30633850LLU;
	uint16_t x259 = 3U;
	uint32_t x260 = 600805024U;

	t62 = (x257+(x258&(x259^x260)));

	if (t62 != 29560367LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x261 = INT8_MIN;
	static int16_t x262 = -1;
	uint32_t x263 = UINT32_MAX;
	uint32_t t63 = 11984722U;

	t63 = (x261+(x262&(x263^x264)));

	if (t63 != 32639U) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x265 = 1U;
	int64_t x266 = INT64_MIN;
	static uint16_t x267 = UINT16_MAX;
	static uint16_t x268 = UINT16_MAX;
	static int64_t t64 = 263LL;

	t64 = (x265+(x266&(x267^x268)));

	if (t64 != 1LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x269 = 205U;
	int64_t x270 = -13986506068497LL;
	uint8_t x271 = 7U;
	static uint32_t x272 = 229U;

	t65 = (x269+(x270&(x271^x272)));

	if (t65 != 431LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x273 = -1;
	volatile uint16_t x275 = 6304U;
	volatile int32_t x276 = 461;

	t66 = (x273+(x274&(x275^x276)));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x278 = UINT32_MAX;
	int64_t x280 = 752587693260277LL;
	volatile int64_t t67 = 4LL;

	t67 = (x277+(x278&(x279^x280)));

	if (t67 != 2246148617LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x282 = 0U;
	int32_t x283 = -1;
	static volatile int64_t x284 = -11810329LL;
	int64_t t68 = -3183484LL;

	t68 = (x281+(x282&(x283^x284)));

	if (t68 != 255LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x285 = -3728LL;
	static uint8_t x286 = 4U;
	volatile uint32_t x287 = 64U;
	uint32_t x288 = UINT32_MAX;
	int64_t t69 = -2703821688337913LL;

	t69 = (x285+(x286&(x287^x288)));

	if (t69 != -3724LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x290 = INT16_MIN;
	int8_t x292 = INT8_MAX;

	t70 = (x289+(x290&(x291^x292)));

	if (t70 != -128) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x293 = 461689LLU;
	int16_t x294 = -1095;
	int32_t x295 = -7;
	static int32_t x296 = -168779893;
	uint64_t t71 = 253794140852572LLU;

	t71 = (x293+(x294&(x295^x296)));

	if (t71 != 169241513LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x297 = 33612873U;
	int32_t x298 = 36225;
	int64_t x299 = 784503302469LL;
	volatile int64_t t72 = -3241821010086822433LL;

	t72 = (x297+(x298&(x299^x300)));

	if (t72 != 33615178LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x301 = 3U;
	static volatile int8_t x302 = 2;
	volatile int16_t x303 = INT16_MAX;
	volatile int32_t t73 = 793321;

	t73 = (x301+(x302&(x303^x304)));

	if (t73 != 5) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x305 = INT16_MIN;
	int64_t x306 = INT64_MAX;
	uint32_t x307 = 245U;
	volatile int64_t t74 = 1LL;

	t74 = (x305+(x306&(x307^x308)));

	if (t74 != 4294934286LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x309 = INT8_MAX;
	int32_t x311 = INT32_MAX;

	t75 = (x309+(x310&(x311^x312)));

	if (t75 != 2147451007LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x313 = -1;
	int16_t x315 = INT16_MAX;
	static uint32_t x316 = 4748635U;

	t76 = (x313+(x314&(x315^x316)));

	if (t76 != 4719235LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x318 = UINT8_MAX;
	uint32_t x319 = 2287U;
	volatile int16_t x320 = INT16_MIN;
	volatile uint32_t t77 = 7944528U;

	t77 = (x317+(x318&(x319^x320)));

	if (t77 != 238U) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x321 = INT32_MAX;
	int8_t x322 = -1;
	static uint64_t x323 = 57821299729368170LLU;
	static int8_t x324 = INT8_MAX;
	volatile uint64_t t78 = 378678LLU;

	t78 = (x321+(x322&(x323^x324)));

	if (t78 != 57821301876851732LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x326 = UINT8_MAX;
	static int64_t t79 = 27LL;

	t79 = (x325+(x326&(x327^x328)));

	if (t79 != -2147483648LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x329 = UINT16_MAX;
	volatile int16_t x330 = INT16_MAX;
	int8_t x331 = INT8_MIN;
	volatile int32_t t80 = 2;

	t80 = (x329+(x330&(x331^x332)));

	if (t80 != 80417) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x333 = -1;
	volatile int8_t x335 = -4;
	int8_t x336 = INT8_MIN;

	t81 = (x333+(x334&(x335^x336)));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x337 = 5;
	uint32_t x338 = UINT32_MAX;
	uint64_t x340 = 151792LLU;
	uint64_t t82 = 109891225565577LLU;

	t82 = (x337+(x338&(x339^x340)));

	if (t82 != 4294815508LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x341 = 9;
	uint8_t x343 = 1U;
	int64_t x344 = INT64_MIN;
	volatile int64_t t83 = -822179592477LL;

	t83 = (x341+(x342&(x343^x344)));

	if (t83 != -9223372036854775799LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x345 = INT16_MIN;
	uint32_t x346 = UINT32_MAX;
	static uint8_t x347 = UINT8_MAX;
	static uint16_t x348 = UINT16_MAX;
	static uint32_t t84 = 279U;

	t84 = (x345+(x346&(x347^x348)));

	if (t84 != 32512U) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x349 = INT32_MIN;
	volatile uint32_t x350 = UINT32_MAX;
	int64_t x352 = -8047550268956414LL;
	volatile uint64_t t85 = 1229195243461LLU;

	t85 = (x349+(x350&(x351^x352)));

	if (t85 != 18446744072889032445LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x353 = INT32_MAX;
	int32_t x354 = INT32_MIN;
	int64_t x355 = INT64_MAX;
	volatile uint64_t x356 = 1886573LLU;
	static uint64_t t86 = 20398805273805LLU;

	t86 = (x353+(x354&(x355^x356)));

	if (t86 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x357 = INT16_MAX;
	volatile int8_t x358 = INT8_MIN;
	volatile uint64_t x359 = 7553473472LLU;
	int64_t x360 = -1LL;
	static volatile uint64_t t87 = 4252762LLU;

	t87 = (x357+(x358&(x359^x360)));

	if (t87 != 18446744066156110847LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x361 = INT8_MAX;
	volatile int32_t x363 = INT32_MAX;
	int32_t x364 = INT32_MIN;
	static volatile int64_t t88 = 139908519LL;

	t88 = (x361+(x362&(x363^x364)));

	if (t88 != 126LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x365 = INT32_MIN;
	volatile int32_t x367 = 67;
	int32_t x368 = INT32_MIN;
	volatile int32_t t89 = 1994911;

	t89 = (x365+(x366&(x367^x368)));

	if (t89 != -2147483581) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x370 = UINT64_MAX;
	int64_t x371 = -1LL;
	volatile uint64_t t90 = 2761325956821LLU;

	t90 = (x369+(x370&(x371^x372)));

	if (t90 != 18446744073701686419LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x373 = -1356387621416662594LL;
	uint8_t x374 = 0U;
	int32_t x375 = -3066709;
	int64_t x376 = -1LL;
	volatile int64_t t91 = -165141883140705544LL;

	t91 = (x373+(x374&(x375^x376)));

	if (t91 != -1356387621416662594LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x379 = INT32_MAX;
	uint16_t x380 = 1U;

	t92 = (x377+(x378&(x379^x380)));

	if (t92 != 2149411308LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x381 = 2U;
	uint64_t x382 = 12LLU;
	uint64_t t93 = 3833335422LLU;

	t93 = (x381+(x382&(x383^x384)));

	if (t93 != 6LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x385 = INT32_MAX;
	uint64_t x386 = 38438533814287316LLU;
	int64_t x388 = INT64_MIN;

	t94 = (x385+(x386&(x387^x388)));

	if (t94 != 2147483731LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x389 = INT32_MIN;
	int64_t x390 = 96959251636LL;
	static int16_t x391 = -1;
	volatile int64_t t95 = -3295894LL;

	t95 = (x389+(x390&(x391^x392)));

	if (t95 != -2147483504LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x393 = 5U;
	int8_t x395 = -55;
	int8_t x396 = INT8_MIN;
	static volatile int32_t t96 = 7;

	t96 = (x393+(x394&(x395^x396)));

	if (t96 != 78) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x397 = -1;
	int8_t x398 = -29;
	uint8_t x399 = UINT8_MAX;
	volatile uint32_t x400 = 14967U;

	t97 = (x397+(x398&(x399^x400)));

	if (t97 != 14975U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x402 = -1;
	uint64_t x403 = 12746031422LLU;
	uint64_t t98 = 8625503922464138LLU;

	t98 = (x401+(x402&(x403^x404)));

	if (t98 != 17040999098LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x405 = INT16_MAX;
	uint64_t x406 = 922LLU;
	uint32_t x407 = 7055U;
	int64_t x408 = 1620500943LL;

	t99 = (x405+(x406&(x407^x408)));

	if (t99 != 33279LLU) { NG(); } else { ; }
	
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

