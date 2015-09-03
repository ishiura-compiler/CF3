#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x3 = INT64_MIN;
volatile uint64_t t0 = 15641312152555934LLU;
int16_t x6 = INT16_MAX;
uint64_t x10 = 26293008989790LLU;
int16_t x11 = 2;
uint64_t t2 = 2280289840505048197LLU;
volatile int16_t x21 = -1;
uint32_t x26 = 2600894U;
volatile int8_t x29 = 1;
volatile int16_t x43 = INT16_MAX;
uint64_t t9 = 1535792LLU;
uint32_t x49 = 1524340U;
volatile uint32_t t10 = 4298384U;
uint64_t x53 = 364342LLU;
static volatile int32_t x55 = INT32_MAX;
static int32_t x60 = INT32_MIN;
int16_t x66 = -1;
int64_t x69 = INT64_MAX;
volatile uint8_t x70 = 7U;
int8_t x71 = 0;
int32_t x84 = 6320240;
volatile uint64_t t17 = 44867LLU;
int64_t x87 = INT64_MIN;
volatile uint64_t t18 = 87046948667521636LLU;
static uint64_t x92 = UINT64_MAX;
volatile int64_t t20 = -587579913317LL;
int16_t x102 = INT16_MAX;
uint32_t t21 = 20024334U;
int8_t x109 = INT8_MIN;
uint16_t x110 = 0U;
uint64_t x111 = 33757183LLU;
volatile int16_t x123 = INT16_MIN;
uint8_t x124 = 16U;
uint16_t x125 = 31U;
int32_t t26 = 2011507;
int64_t x134 = INT64_MAX;
static int64_t t27 = 205LL;
volatile int64_t t28 = 190725592490042556LL;
int8_t x144 = 34;
static volatile int32_t t29 = 736909;
int64_t t30 = 20LL;
int32_t x160 = -1;
volatile int16_t x164 = INT16_MIN;
int16_t x165 = 0;
int8_t x168 = 1;
static volatile int16_t x169 = INT16_MIN;
uint8_t x171 = 9U;
int8_t x174 = -1;
int32_t t37 = 6;
uint16_t x187 = 434U;
static int64_t x189 = INT64_MIN;
int64_t t39 = -3880512085LL;
uint32_t x200 = UINT32_MAX;
volatile int16_t x201 = -1;
int8_t x204 = INT8_MIN;
int32_t t42 = -403320;
uint16_t x208 = 171U;
static int64_t x220 = 22794LL;
int64_t t46 = -4591309200975LL;
int32_t x225 = -3673223;
volatile int32_t t47 = 25747;
int8_t x232 = INT8_MIN;
volatile int64_t t49 = 80948683280214LL;
static uint64_t x238 = 12011920511LLU;
uint64_t x243 = UINT64_MAX;
uint64_t t51 = 8600549LLU;
static volatile uint32_t x249 = 938U;
int16_t x255 = INT16_MIN;
volatile int64_t t53 = -24658860010LL;
int16_t x260 = -1;
uint64_t x263 = 4304328286LLU;
uint8_t x264 = UINT8_MAX;
static volatile uint64_t t55 = 4087297LLU;
static int8_t x265 = INT8_MIN;
int64_t x276 = INT64_MIN;
static uint64_t x279 = UINT64_MAX;
static int32_t x290 = INT32_MAX;
static int16_t x294 = INT16_MIN;
int64_t x299 = -57565328352144LL;
volatile int64_t t62 = 973255418814072LL;
static int32_t x302 = -1;
int64_t t63 = 157461LL;
static volatile int16_t x305 = 38;
int8_t x311 = INT8_MIN;
int8_t x312 = -1;
int16_t x314 = 41;
volatile uint64_t t66 = 664172492188274445LLU;
uint32_t x320 = 10891573U;
static uint64_t x329 = 13LLU;
static uint64_t t70 = 182984707LLU;
int8_t x338 = -43;
static uint64_t x340 = 3449444LLU;
int32_t x343 = INT32_MIN;
volatile uint16_t x349 = UINT16_MAX;
int16_t x351 = 12735;
static uint32_t x358 = 43938117U;
static uint64_t x359 = 12534547252306LLU;
int32_t x364 = 33668;
static uint32_t x365 = UINT32_MAX;
int8_t x372 = INT8_MAX;
int8_t x378 = INT8_MAX;
static volatile uint8_t x380 = 15U;
int32_t x386 = INT32_MIN;
int64_t x387 = -1LL;
uint32_t x392 = UINT32_MAX;
uint32_t x394 = 28856U;
int64_t x400 = INT64_MIN;
static int32_t t88 = -14132399;
uint64_t t91 = 3156LLU;
int8_t x422 = -5;
int64_t t92 = 7067LL;
static int16_t x429 = 109;
volatile int16_t x430 = 0;
int64_t x435 = -15172795347526698LL;
int32_t t97 = INT32_MAX;
volatile uint32_t t99 = 26U;


void f0(void) {
	volatile int8_t x1 = -1;
	static uint64_t x2 = UINT64_MAX;
	int64_t x4 = -1LL;

	t0 = (x1^(x2&(x3-x4)));

	if (t0 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = INT8_MAX;
	uint8_t x7 = UINT8_MAX;
	static int8_t x8 = -1;
	int32_t t1 = 20189;

	t1 = (x5^(x6&(x7-x8)));

	if (t1 != 383) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 1719;
	uint16_t x12 = UINT16_MAX;

	t2 = (x9^(x10&(x11-x12)));

	if (t2 != 26293008926389LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = INT64_MIN;
	int64_t x14 = INT64_MIN;
	volatile int64_t x15 = INT64_MAX;
	static int32_t x16 = INT32_MAX;
	volatile int64_t t3 = INT64_MIN;

	t3 = (x13^(x14&(x15-x16)));

	if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -1;
	int8_t x18 = INT8_MIN;
	static int64_t x19 = -878874130673LL;
	int64_t x20 = INT64_MIN;
	int64_t t4 = 1540399370LL;

	t4 = (x17^(x18&(x19-x20)));

	if (t4 != -9223371157980645121LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x22 = 838370;
	int16_t x23 = -824;
	int64_t x24 = INT64_MIN;
	static int64_t t5 = -3LL;

	t5 = (x21^(x22&(x23-x24)));

	if (t5 != -837825LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = 0;
	int8_t x27 = 0;
	int64_t x28 = -1LL;
	static int64_t t6 = -108701149665307LL;

	t6 = (x25^(x26&(x27-x28)));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x30 = -1LL;
	static uint64_t x31 = 522530753003219LLU;
	int16_t x32 = INT16_MIN;
	volatile uint64_t t7 = 27LLU;

	t7 = (x29^(x30&(x31-x32)));

	if (t7 != 522530753035986LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = 175639LL;
	int16_t x38 = INT16_MIN;
	static volatile int64_t x39 = INT64_MIN;
	int8_t x40 = INT8_MIN;
	static volatile int64_t t8 = 170528886774LL;

	t8 = (x37^(x38&(x39-x40)));

	if (t8 != -9223372036854600169LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = 27171U;
	uint64_t x42 = 691339778455LLU;
	volatile int16_t x44 = 726;

	t9 = (x41^(x42&(x43-x44)));

	if (t9 != 13090LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x50 = INT8_MIN;
	int16_t x51 = -1;
	static int8_t x52 = INT8_MIN;

	t10 = (x49^(x50&(x51-x52)));

	if (t10 != 1524340U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x54 = INT8_MAX;
	static int64_t x56 = 6376421779030LL;
	uint64_t t11 = 354248118439LLU;

	t11 = (x53^(x54&(x55-x56)));

	if (t11 != 364319LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x57 = 4734U;
	int8_t x58 = INT8_MIN;
	int64_t x59 = INT64_MIN;
	int64_t t12 = -37276LL;

	t12 = (x57^(x58&(x59-x60)));

	if (t12 != -9223372034707287426LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x65 = INT64_MIN;
	int8_t x67 = -1;
	uint64_t x68 = UINT64_MAX;
	static volatile uint64_t t13 = 85946LLU;

	t13 = (x65^(x66&(x67-x68)));

	if (t13 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x72 = UINT8_MAX;
	volatile int64_t t14 = 255881876687509LL;

	t14 = (x69^(x70&(x71-x72)));

	if (t14 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x73 = INT8_MAX;
	int16_t x74 = -1;
	int32_t x75 = INT32_MIN;
	volatile uint32_t x76 = UINT32_MAX;
	volatile uint32_t t15 = 149530392U;

	t15 = (x73^(x74&(x75-x76)));

	if (t15 != 2147483774U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x77 = 59LLU;
	static int16_t x78 = -1;
	int64_t x79 = -14484285134886501LL;
	static int64_t x80 = INT64_MIN;
	volatile uint64_t t16 = 2250105437918612LLU;

	t16 = (x77^(x78&(x79-x80)));

	if (t16 != 9208887751719889312LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x81 = 441U;
	static uint32_t x82 = UINT32_MAX;
	volatile uint64_t x83 = 16579LLU;

	t17 = (x81^(x82&(x83-x84)));

	if (t17 != 4288664042LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x85 = INT32_MIN;
	int8_t x86 = -3;
	uint64_t x88 = UINT64_MAX;

	t18 = (x85^(x86&(x87-x88)));

	if (t18 != 9223372034707292161LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x89 = 23050LLU;
	int64_t x90 = -112192987311743345LL;
	static int64_t x91 = INT64_MIN;
	static uint64_t t19 = 1LLU;

	t19 = (x89^(x90&(x91-x92)));

	if (t19 != 9223372036854798859LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x97 = 20650U;
	volatile int64_t x98 = INT64_MAX;
	volatile int8_t x99 = INT8_MIN;
	int64_t x100 = 3233284783857LL;

	t20 = (x97^(x98&(x99-x100)));

	if (t20 != 9223368803570012197LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x101 = UINT8_MAX;
	static uint8_t x103 = 1U;
	volatile uint32_t x104 = UINT32_MAX;

	t21 = (x101^(x102&(x103-x104)));

	if (t21 != 253U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x105 = 1421U;
	int64_t x106 = -27598638413LL;
	int64_t x107 = -51236054LL;
	volatile uint16_t x108 = UINT16_MAX;
	volatile int64_t t22 = -34580242808573LL;

	t22 = (x105^(x106&(x107-x108)));

	if (t22 != -27633109074LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x112 = INT64_MIN;
	uint64_t t23 = 1LLU;

	t23 = (x109^(x110&(x111-x112)));

	if (t23 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x117 = 19U;
	int16_t x118 = INT16_MIN;
	int16_t x119 = INT16_MAX;
	int8_t x120 = -1;
	int32_t t24 = -14333;

	t24 = (x117^(x118&(x119-x120)));

	if (t24 != 32787) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x121 = 81257164LLU;
	int16_t x122 = 0;
	uint64_t t25 = 108LLU;

	t25 = (x121^(x122&(x123-x124)));

	if (t25 != 81257164LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x126 = INT8_MIN;
	int16_t x127 = INT16_MIN;
	int16_t x128 = 204;

	t26 = (x125^(x126&(x127-x128)));

	if (t26 != -32993) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x133 = INT8_MIN;
	uint16_t x135 = 21U;
	int8_t x136 = INT8_MAX;

	t27 = (x133^(x134&(x135-x136)));

	if (t27 != -9223372036854775786LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x137 = 10LL;
	int64_t x138 = 32972811LL;
	int32_t x139 = INT32_MAX;
	uint8_t x140 = 1U;

	t28 = (x137^(x138&(x139-x140)));

	if (t28 != 32972800LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x141 = UINT16_MAX;
	static int8_t x142 = INT8_MIN;
	static uint16_t x143 = 20212U;

	t29 = (x141^(x142&(x143-x144)));

	if (t29 != 45439) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x145 = INT64_MIN;
	volatile int32_t x146 = -1;
	static int32_t x147 = -38863636;
	volatile int8_t x148 = -6;

	t30 = (x145^(x146&(x147-x148)));

	if (t30 != 9223372036815912178LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x149 = 34U;
	int8_t x150 = -7;
	uint8_t x151 = UINT8_MAX;
	int32_t x152 = -37989204;
	volatile int32_t t31 = 321;

	t31 = (x149^(x150&(x151-x152)));

	if (t31 != 37989491) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x157 = 152;
	volatile uint16_t x158 = UINT16_MAX;
	uint32_t x159 = 59129305U;
	static uint32_t t32 = 701U;

	t32 = (x157^(x158&(x159-x160)));

	if (t32 != 15682U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x161 = INT64_MIN;
	int16_t x162 = INT16_MIN;
	uint16_t x163 = UINT16_MAX;
	volatile int64_t t33 = 201998535300478698LL;

	t33 = (x161^(x162&(x163-x164)));

	if (t33 != -9223372036854710272LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x166 = INT64_MIN;
	volatile int64_t x167 = 812491018206LL;
	volatile int64_t t34 = 2034663934LL;

	t34 = (x165^(x166&(x167-x168)));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x170 = INT32_MIN;
	uint64_t x172 = 8LLU;
	uint64_t t35 = 1LLU;

	t35 = (x169^(x170&(x171-x172)));

	if (t35 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x173 = UINT64_MAX;
	volatile int32_t x175 = 566;
	int8_t x176 = 36;
	volatile uint64_t t36 = 1117LLU;

	t36 = (x173^(x174&(x175-x176)));

	if (t36 != 18446744073709551085LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint16_t x181 = UINT16_MAX;
	int8_t x182 = INT8_MIN;
	volatile uint16_t x183 = UINT16_MAX;
	uint8_t x184 = UINT8_MAX;

	t37 = (x181^(x182&(x183-x184)));

	if (t37 != 255) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x185 = INT32_MIN;
	uint8_t x186 = UINT8_MAX;
	static int8_t x188 = -2;
	volatile int32_t t38 = -221069;

	t38 = (x185^(x186&(x187-x188)));

	if (t38 != -2147483468) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x190 = -1;
	int16_t x191 = INT16_MIN;
	static volatile int8_t x192 = INT8_MIN;

	t39 = (x189^(x190&(x191-x192)));

	if (t39 != 9223372036854743168LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x193 = -3343540LL;
	int8_t x194 = INT8_MIN;
	uint8_t x195 = 1U;
	uint16_t x196 = 733U;
	volatile int64_t t40 = -94283LL;

	t40 = (x193^(x194&(x195-x196)));

	if (t40 != 3343948LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x197 = UINT64_MAX;
	volatile int16_t x198 = 8220;
	static uint64_t x199 = 31LLU;
	volatile uint64_t t41 = UINT64_MAX;

	t41 = (x197^(x198&(x199-x200)));

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x202 = UINT8_MAX;
	static int8_t x203 = INT8_MIN;

	t42 = (x201^(x202&(x203-x204)));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x205 = 320455509U;
	int64_t x206 = INT64_MIN;
	int8_t x207 = INT8_MIN;
	volatile int64_t t43 = -22913303725274LL;

	t43 = (x205^(x206&(x207-x208)));

	if (t43 != -9223372036534320299LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x209 = 254486365795504LLU;
	volatile int64_t x210 = INT64_MIN;
	int64_t x211 = -53903LL;
	int32_t x212 = INT32_MIN;
	static uint64_t t44 = 2375847785826LLU;

	t44 = (x209^(x210&(x211-x212)));

	if (t44 != 254486365795504LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x213 = 62074166U;
	static uint8_t x214 = 7U;
	int64_t x215 = -12LL;
	uint32_t x216 = 8U;
	volatile int64_t t45 = 22435696468596LL;

	t45 = (x213^(x214&(x215-x216)));

	if (t45 != 62074162LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x217 = 50;
	int64_t x218 = INT64_MAX;
	static int8_t x219 = -1;

	t46 = (x217^(x218&(x219-x220)));

	if (t46 != 9223372036854752967LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x226 = -1;
	uint16_t x227 = 256U;
	volatile int8_t x228 = INT8_MIN;

	t47 = (x225^(x226&(x227-x228)));

	if (t47 != -3673351) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x229 = 1047793183632995654LLU;
	int64_t x230 = -1LL;
	int64_t x231 = INT64_MIN;
	uint64_t t48 = 35144LLU;

	t48 = (x229^(x230&(x231-x232)));

	if (t48 != 10271165220487771590LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x233 = 2U;
	volatile uint32_t x234 = 680U;
	int64_t x235 = -1LL;
	volatile int8_t x236 = INT8_MIN;

	t49 = (x233^(x234&(x235-x236)));

	if (t49 != 42LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x237 = -1LL;
	int8_t x239 = -1;
	int16_t x240 = INT16_MIN;
	volatile uint64_t t50 = 6LLU;

	t50 = (x237^(x238&(x239-x240)));

	if (t50 != 18446744073709527936LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x241 = UINT16_MAX;
	volatile uint32_t x242 = 743U;
	volatile uint8_t x244 = UINT8_MAX;

	t51 = (x241^(x242&(x243-x244)));

	if (t51 != 65023LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x250 = -1;
	uint8_t x251 = 0U;
	int32_t x252 = -1;
	volatile uint32_t t52 = 0U;

	t52 = (x249^(x250&(x251-x252)));

	if (t52 != 939U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x253 = -1LL;
	static int8_t x254 = INT8_MIN;
	int64_t x256 = INT64_MIN;

	t53 = (x253^(x254&(x255-x256)));

	if (t53 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x257 = UINT8_MAX;
	int16_t x258 = 980;
	volatile int32_t x259 = INT32_MIN;
	volatile int32_t t54 = -30372;

	t54 = (x257^(x258&(x259-x260)));

	if (t54 != 255) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x261 = INT8_MIN;
	volatile uint64_t x262 = UINT64_MAX;

	t55 = (x261^(x262&(x263-x264)));

	if (t55 != 18446744069405223647LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x266 = 251U;
	static volatile int32_t x267 = -1;
	static volatile int8_t x268 = INT8_MAX;
	static volatile int32_t t56 = 2889;

	t56 = (x265^(x266&(x267-x268)));

	if (t56 != -256) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x273 = -1;
	uint16_t x274 = 1U;
	int8_t x275 = -15;
	volatile int64_t t57 = 184239143024LL;

	t57 = (x273^(x274&(x275-x276)));

	if (t57 != -2LL) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int32_t x277 = 23974038;
	static int32_t x278 = -1;
	int16_t x280 = -1;
	static volatile uint64_t t58 = 25100940LLU;

	t58 = (x277^(x278&(x279-x280)));

	if (t58 != 23974038LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x285 = UINT64_MAX;
	static uint16_t x286 = 1U;
	uint8_t x287 = 1U;
	volatile uint64_t x288 = 920783648895856164LLU;
	uint64_t t59 = 1LLU;

	t59 = (x285^(x286&(x287-x288)));

	if (t59 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x289 = -1;
	int64_t x291 = INT64_MAX;
	volatile uint32_t x292 = 787U;
	int64_t t60 = 1318787481206604LL;

	t60 = (x289^(x290&(x291-x292)));

	if (t60 != -2147482861LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x293 = -1;
	int8_t x295 = INT8_MIN;
	int8_t x296 = -1;
	static int32_t t61 = 34853;

	t61 = (x293^(x294&(x295-x296)));

	if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x297 = 20U;
	static int8_t x298 = 0;
	static int32_t x300 = -430871;

	t62 = (x297^(x298&(x299-x300)));

	if (t62 != 20LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x301 = 0;
	int32_t x303 = INT32_MIN;
	int64_t x304 = 6054384LL;

	t63 = (x301^(x302&(x303-x304)));

	if (t63 != -2153538032LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x306 = INT32_MIN;
	int16_t x307 = INT16_MAX;
	uint32_t x308 = 199398677U;
	uint32_t t64 = 5300359U;

	t64 = (x305^(x306&(x307-x308)));

	if (t64 != 2147483686U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x309 = 1;
	int16_t x310 = INT16_MAX;
	int32_t t65 = -1916;

	t65 = (x309^(x310&(x311-x312)));

	if (t65 != 32640) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x313 = 14U;
	static uint64_t x315 = 248851408LLU;
	static uint64_t x316 = UINT64_MAX;

	t66 = (x313^(x314&(x315-x316)));

	if (t66 != 15LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x317 = INT16_MAX;
	uint8_t x318 = 3U;
	int32_t x319 = INT32_MIN;
	volatile uint32_t t67 = 18659789U;

	t67 = (x317^(x318&(x319-x320)));

	if (t67 != 32764U) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x321 = -1;
	static int16_t x322 = INT16_MIN;
	static volatile int16_t x323 = INT16_MIN;
	static volatile int32_t x324 = -9;
	volatile int32_t t68 = 37140703;

	t68 = (x321^(x322&(x323-x324)));

	if (t68 != 32767) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x325 = 11U;
	static volatile int32_t x326 = INT32_MAX;
	uint64_t x327 = 167260163913344LLU;
	int8_t x328 = INT8_MAX;
	volatile uint64_t t69 = 124654LLU;

	t69 = (x325^(x326&(x327-x328)));

	if (t69 != 1252505098LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x330 = 2886123U;
	volatile int64_t x331 = -1LL;
	int32_t x332 = INT32_MAX;

	t70 = (x329^(x330&(x331-x332)));

	if (t70 != 13LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x333 = INT64_MAX;
	uint32_t x334 = 31U;
	int16_t x335 = -1;
	int16_t x336 = INT16_MAX;
	int64_t t71 = INT64_MAX;

	t71 = (x333^(x334&(x335-x336)));

	if (t71 != INT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x337 = 13975U;
	int8_t x339 = 15;
	volatile uint64_t t72 = 26LLU;

	t72 = (x337^(x338&(x339-x340)));

	if (t72 != 18446744073706105622LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x341 = 3U;
	int8_t x342 = INT8_MAX;
	volatile int64_t x344 = INT64_MIN;
	volatile int64_t t73 = 53209143LL;

	t73 = (x341^(x342&(x343-x344)));

	if (t73 != 3LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x345 = -1;
	int32_t x346 = INT32_MIN;
	static int16_t x347 = INT16_MIN;
	int32_t x348 = -1;
	int32_t t74 = INT32_MAX;

	t74 = (x345^(x346&(x347-x348)));

	if (t74 != INT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x350 = INT8_MIN;
	static int64_t x352 = -210435680LL;
	int64_t t75 = 290LL;

	t75 = (x349^(x350&(x351-x352)));

	if (t75 != 210489343LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x353 = 393493LLU;
	int32_t x354 = -513954312;
	volatile uint8_t x355 = 43U;
	int16_t x356 = -1;
	uint64_t t76 = 298656235842LLU;

	t76 = (x353^(x354&(x355-x356)));

	if (t76 != 393533LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x357 = 8751U;
	int8_t x360 = INT8_MIN;
	uint64_t t77 = 8836973345LLU;

	t77 = (x357^(x358&(x359-x360)));

	if (t77 != 1843823LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x361 = UINT32_MAX;
	uint64_t x362 = 781LLU;
	static volatile int16_t x363 = INT16_MIN;
	volatile uint64_t t78 = 5897643534457482205LLU;

	t78 = (x361^(x362&(x363-x364)));

	if (t78 != 4294967283LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x366 = -1619LL;
	static uint64_t x367 = 7160127839812195LLU;
	int32_t x368 = INT32_MIN;
	uint64_t t79 = 0LLU;

	t79 = (x365^(x366&(x367-x368)));

	if (t79 != 7160128496191454LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x369 = -1;
	int64_t x370 = INT64_MIN;
	static volatile int32_t x371 = INT32_MAX;
	volatile int64_t t80 = -296012247653535LL;

	t80 = (x369^(x370&(x371-x372)));

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x373 = INT64_MIN;
	int64_t x374 = INT64_MAX;
	uint8_t x375 = UINT8_MAX;
	uint8_t x376 = UINT8_MAX;
	int64_t t81 = INT64_MIN;

	t81 = (x373^(x374&(x375-x376)));

	if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x377 = 20010763U;
	volatile uint32_t x379 = 122348895U;
	uint32_t t82 = 10184455U;

	t82 = (x377^(x378&(x379-x380)));

	if (t82 != 20010843U) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x381 = 10122292786267612LLU;
	int8_t x382 = INT8_MIN;
	int8_t x383 = -1;
	volatile int8_t x384 = INT8_MIN;
	uint64_t t83 = 77634075941471861LLU;

	t83 = (x381^(x382&(x383-x384)));

	if (t83 != 10122292786267612LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int64_t x385 = 1LL;
	int32_t x388 = -1;
	volatile int64_t t84 = 2393193823713584124LL;

	t84 = (x385^(x386&(x387-x388)));

	if (t84 != 1LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x389 = 29;
	int32_t x390 = -1;
	uint16_t x391 = 448U;
	volatile uint32_t t85 = 247U;

	t85 = (x389^(x390&(x391-x392)));

	if (t85 != 476U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x393 = INT64_MIN;
	static int8_t x395 = 12;
	uint64_t x396 = UINT64_MAX;
	static volatile uint64_t t86 = 442456320406285294LLU;

	t86 = (x393^(x394&(x395-x396)));

	if (t86 != 9223372036854775816LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x397 = INT32_MAX;
	int32_t x398 = -496161686;
	int8_t x399 = -1;
	volatile int64_t t87 = -1376661723867446751LL;

	t87 = (x397^(x398&(x399-x400)));

	if (t87 != 9223372035203453845LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x401 = INT16_MIN;
	int32_t x402 = 1875042;
	int16_t x403 = 50;
	volatile uint8_t x404 = UINT8_MAX;

	t88 = (x401^(x402&(x403-x404)));

	if (t88 != -1893342) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x409 = 13U;
	int16_t x410 = INT16_MIN;
	int64_t x411 = -1LL;
	static int8_t x412 = INT8_MAX;
	int64_t t89 = -351916572681971LL;

	t89 = (x409^(x410&(x411-x412)));

	if (t89 != -32755LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x413 = INT8_MIN;
	int8_t x414 = INT8_MAX;
	volatile uint16_t x415 = UINT16_MAX;
	uint8_t x416 = 4U;
	static int32_t t90 = 39011;

	t90 = (x413^(x414&(x415-x416)));

	if (t90 != -5) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x417 = UINT64_MAX;
	int16_t x418 = INT16_MIN;
	int64_t x419 = -118698791439705169LL;
	uint32_t x420 = 389U;

	t91 = (x417^(x418&(x419-x420)));

	if (t91 != 118698791439728639LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x421 = INT64_MIN;
	static int8_t x423 = INT8_MIN;
	static int16_t x424 = INT16_MAX;

	t92 = (x421^(x422&(x423-x424)));

	if (t92 != 9223372036854742913LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x425 = INT32_MIN;
	int8_t x426 = -3;
	int64_t x427 = -75330349303588949LL;
	int16_t x428 = INT16_MAX;
	static volatile int64_t t93 = 70LL;

	t93 = (x425^(x426&(x427-x428)));

	if (t93 != 75330349603985324LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x431 = 1U;
	static int8_t x432 = -1;
	int32_t t94 = -2;

	t94 = (x429^(x430&(x431-x432)));

	if (t94 != 109) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x433 = 47767399;
	int32_t x434 = INT32_MIN;
	static int16_t x436 = INT16_MAX;
	static volatile int64_t t95 = 3011200303876839526LL;

	t95 = (x433^(x434&(x435-x436)));

	if (t95 != -15172796559073433LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x437 = INT64_MIN;
	int64_t x438 = INT64_MAX;
	static uint64_t x439 = UINT64_MAX;
	static volatile int16_t x440 = -1;
	uint64_t t96 = 104107553136859LLU;

	t96 = (x437^(x438&(x439-x440)));

	if (t96 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x441 = INT32_MAX;
	int16_t x442 = 6;
	uint16_t x443 = 488U;
	int8_t x444 = 0;

	t97 = (x441^(x442&(x443-x444)));

	if (t97 != INT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x445 = -1;
	uint16_t x446 = 1U;
	volatile uint64_t x447 = UINT64_MAX;
	int8_t x448 = -2;
	static uint64_t t98 = 13593234LLU;

	t98 = (x445^(x446&(x447-x448)));

	if (t98 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x449 = INT16_MAX;
	uint16_t x450 = 3U;
	uint32_t x451 = 18312U;
	volatile int8_t x452 = INT8_MIN;

	t99 = (x449^(x450&(x451-x452)));

	if (t99 != 32767U) { NG(); } else { ; }
	
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

