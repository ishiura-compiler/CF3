#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = UINT32_MAX;
uint8_t x5 = UINT8_MAX;
int8_t x9 = -3;
uint8_t x18 = 90U;
int32_t x19 = INT32_MIN;
static volatile int64_t x28 = -2711LL;
volatile int16_t x35 = -1;
int8_t x39 = INT8_MIN;
int64_t x42 = INT64_MIN;
static uint8_t x45 = UINT8_MAX;
static int64_t x53 = -15403584117682LL;
int16_t x54 = -1;
int16_t x55 = -1;
static int16_t x56 = INT16_MIN;
uint8_t x57 = 22U;
static uint8_t x61 = 112U;
static volatile int16_t x67 = INT16_MAX;
int32_t x70 = 5693010;
volatile int8_t x74 = -2;
volatile int64_t t15 = 32823LL;
uint8_t x78 = 46U;
int8_t x83 = INT8_MIN;
volatile uint64_t t18 = 17163571LLU;
int8_t x103 = INT8_MAX;
volatile int32_t x106 = -33;
volatile int32_t x107 = 1793544;
int64_t x117 = INT64_MIN;
static int32_t x123 = INT32_MAX;
static volatile uint32_t t26 = 1160194483U;
int8_t x141 = INT8_MIN;
volatile int32_t t29 = 1254564;
static int32_t x146 = INT32_MIN;
volatile uint8_t x148 = 0U;
int64_t x150 = -1LL;
volatile int16_t x164 = 343;
volatile uint64_t t34 = 31448856231098LLU;
volatile uint8_t x175 = 0U;
static int32_t x178 = INT32_MAX;
volatile int8_t x180 = -12;
volatile int64_t t37 = 16566571725023815LL;
int64_t t38 = -1265387337LL;
int64_t x193 = -130550170516692461LL;
volatile int8_t x196 = INT8_MIN;
int32_t x208 = 30580764;
int64_t t46 = -1LL;
uint64_t x232 = 3025087957459812LLU;
uint64_t t47 = 1853161067716324LLU;
uint8_t x236 = 90U;
int64_t x240 = -1LL;
static int16_t x241 = INT16_MIN;
int32_t x243 = -1433;
volatile uint64_t x244 = 2104979856148835LLU;
static int64_t x247 = INT64_MAX;
uint64_t t51 = 16343LLU;
int64_t x253 = -1LL;
uint64_t x258 = 1663LLU;
int64_t x261 = -1LL;
int8_t x264 = INT8_MIN;
int64_t x271 = -1LL;
uint8_t x277 = 17U;
int64_t x282 = INT64_MAX;
int32_t x292 = INT32_MIN;
uint64_t t64 = 274928757790909845LLU;
uint16_t x320 = 2U;
int64_t t68 = -5797080LL;
int16_t x327 = INT16_MAX;
uint32_t x330 = 0U;
volatile uint32_t t70 = 127206U;
volatile uint64_t x334 = 261818894114305821LLU;
static volatile uint64_t t71 = 740711003870LLU;
int64_t x337 = -1LL;
static int8_t x346 = INT8_MIN;
static volatile uint32_t t76 = 0U;
int8_t x362 = INT8_MIN;
volatile int32_t t78 = -4;
volatile int32_t x371 = -1;
static int16_t x381 = INT16_MAX;
int64_t x382 = INT64_MIN;
volatile uint8_t x385 = UINT8_MAX;
volatile int64_t x393 = -132429024080049931LL;
uint8_t x394 = UINT8_MAX;
volatile int8_t x395 = -1;
static int32_t x396 = -244;
int64_t x397 = -300547359LL;
int64_t x412 = -85805627161126842LL;
uint64_t t89 = 3740882114049LLU;
static int16_t x414 = -3413;
static uint64_t x415 = 37808706916319LLU;
uint64_t t90 = 480641547595307933LLU;
int16_t x420 = 10266;
int64_t x430 = 2LL;
uint16_t x431 = 807U;
volatile int64_t t94 = 13LL;
int16_t x438 = INT16_MIN;
uint32_t x439 = 61U;
uint32_t x445 = UINT32_MAX;
static int32_t x446 = -1;
static int16_t x447 = 7;
volatile int8_t x449 = INT8_MIN;
static volatile uint64_t t99 = 32441201LLU;


void f0(void) {
	int64_t x2 = INT64_MIN;
	int8_t x3 = 5;
	static volatile uint32_t x4 = 943058U;
	int64_t t0 = -21052010593017LL;

	t0 = (x1+(x2&(x3-x4)));

	if (t0 != 4294967295LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = INT32_MIN;
	static int32_t x7 = INT32_MAX;
	int64_t x8 = 242LL;
	static int64_t t1 = -376018LL;

	t1 = (x5+(x6&(x7-x8)));

	if (t1 != 255LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x10 = 672560502U;
	volatile uint64_t x11 = 201LLU;
	static uint16_t x12 = 0U;
	uint64_t t2 = 1699LLU;

	t2 = (x9+(x10&(x11-x12)));

	if (t2 != 61LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	volatile int64_t x14 = -1LL;
	int64_t x15 = INT64_MIN;
	int64_t x16 = INT64_MIN;
	int64_t t3 = 35295996437469879LL;

	t3 = (x13+(x14&(x15-x16)));

	if (t3 != -2147483648LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 116762363689LLU;
	int8_t x20 = INT8_MIN;
	volatile uint64_t t4 = 565319LLU;

	t4 = (x17+(x18&(x19-x20)));

	if (t4 != 116762363689LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x25 = UINT16_MAX;
	uint64_t x26 = 7LLU;
	static int8_t x27 = INT8_MAX;
	static uint64_t t5 = 12949194LLU;

	t5 = (x25+(x26&(x27-x28)));

	if (t5 != 65541LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x33 = 1397844489LL;
	static int64_t x34 = 11LL;
	int8_t x36 = INT8_MIN;
	int64_t t6 = 50995930646564LL;

	t6 = (x33+(x34&(x35-x36)));

	if (t6 != 1397844500LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x37 = 182941943856937LL;
	int16_t x38 = INT16_MIN;
	int16_t x40 = INT16_MIN;
	int64_t t7 = -134135989LL;

	t7 = (x37+(x38&(x39-x40)));

	if (t7 != 182941943856937LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x41 = -1;
	volatile uint64_t x43 = 7081301LLU;
	uint8_t x44 = UINT8_MAX;
	volatile uint64_t t8 = UINT64_MAX;

	t8 = (x41+(x42&(x43-x44)));

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x46 = UINT16_MAX;
	uint32_t x47 = 2U;
	static uint8_t x48 = 21U;
	volatile uint32_t t9 = 153744721U;

	t9 = (x45+(x46&(x47-x48)));

	if (t9 != 65772U) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t t10 = -1268532680LL;

	t10 = (x53+(x54&(x55-x56)));

	if (t10 != -15403584084915LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x58 = UINT16_MAX;
	int32_t x59 = 3229;
	int64_t x60 = -1LL;
	int64_t t11 = 0LL;

	t11 = (x57+(x58&(x59-x60)));

	if (t11 != 3252LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x62 = -60;
	uint16_t x63 = 1468U;
	uint64_t x64 = UINT64_MAX;
	volatile uint64_t t12 = 143130127LLU;

	t12 = (x61+(x62&(x63-x64)));

	if (t12 != 1524LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x65 = 4;
	static volatile int64_t x66 = INT64_MIN;
	int16_t x68 = INT16_MIN;
	int64_t t13 = 42833467546LL;

	t13 = (x65+(x66&(x67-x68)));

	if (t13 != 4LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x69 = 233U;
	uint16_t x71 = 706U;
	int8_t x72 = INT8_MIN;
	uint32_t t14 = 4900U;

	t14 = (x69+(x70&(x71-x72)));

	if (t14 != 811U) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x73 = -1LL;
	int32_t x75 = -1;
	int64_t x76 = -1LL;

	t15 = (x73+(x74&(x75-x76)));

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x77 = -3;
	volatile int8_t x79 = -1;
	int16_t x80 = INT16_MAX;
	volatile int32_t t16 = 1624;

	t16 = (x77+(x78&(x79-x80)));

	if (t16 != -3) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x81 = -1;
	uint8_t x82 = UINT8_MAX;
	static int16_t x84 = INT16_MAX;
	static volatile int32_t t17 = 2;

	t17 = (x81+(x82&(x83-x84)));

	if (t17 != 128) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x85 = INT32_MIN;
	volatile uint8_t x86 = UINT8_MAX;
	static volatile uint64_t x87 = 3LLU;
	int64_t x88 = -1LL;

	t18 = (x85+(x86&(x87-x88)));

	if (t18 != 18446744071562067972LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x89 = INT8_MIN;
	int8_t x90 = -1;
	int8_t x91 = -1;
	static volatile uint8_t x92 = 1U;
	int32_t t19 = 528199185;

	t19 = (x89+(x90&(x91-x92)));

	if (t19 != -130) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x97 = INT8_MIN;
	int32_t x98 = 10836;
	int8_t x99 = -59;
	volatile uint16_t x100 = UINT16_MAX;
	int32_t t20 = -18018;

	t20 = (x97+(x98&(x99-x100)));

	if (t20 != 10692) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x101 = -1LL;
	int32_t x102 = -1;
	volatile uint64_t x104 = UINT64_MAX;
	volatile uint64_t t21 = 12460205008313040LLU;

	t21 = (x101+(x102&(x103-x104)));

	if (t21 != 127LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x105 = -1LL;
	uint16_t x108 = 2050U;
	volatile int64_t t22 = 20133LL;

	t22 = (x105+(x106&(x107-x108)));

	if (t22 != 1791493LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x109 = 1U;
	volatile int64_t x110 = -236598LL;
	int16_t x111 = INT16_MIN;
	int16_t x112 = INT16_MIN;
	int64_t t23 = -144LL;

	t23 = (x109+(x110&(x111-x112)));

	if (t23 != 1LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x118 = UINT64_MAX;
	volatile int16_t x119 = -1;
	int32_t x120 = INT32_MAX;
	volatile uint64_t t24 = 17854680542306LLU;

	t24 = (x117+(x118&(x119-x120)));

	if (t24 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x121 = INT16_MIN;
	volatile uint64_t x122 = UINT64_MAX;
	uint32_t x124 = UINT32_MAX;
	uint64_t t25 = 198726966952LLU;

	t25 = (x121+(x122&(x123-x124)));

	if (t25 != 2147450880LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x129 = 275;
	int8_t x130 = -1;
	int16_t x131 = INT16_MAX;
	uint32_t x132 = UINT32_MAX;

	t26 = (x129+(x130&(x131-x132)));

	if (t26 != 33043U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x133 = -402531658LL;
	int16_t x134 = INT16_MIN;
	int8_t x135 = 5;
	int8_t x136 = INT8_MIN;
	static int64_t t27 = -390011621244891093LL;

	t27 = (x133+(x134&(x135-x136)));

	if (t27 != -402531658LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x137 = 12;
	uint16_t x138 = UINT16_MAX;
	volatile uint8_t x139 = 3U;
	volatile int16_t x140 = INT16_MIN;
	volatile int32_t t28 = 55;

	t28 = (x137+(x138&(x139-x140)));

	if (t28 != 32783) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int16_t x142 = 105;
	static int8_t x143 = 59;
	uint8_t x144 = 0U;

	t29 = (x141+(x142&(x143-x144)));

	if (t29 != -87) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x145 = 12629U;
	uint32_t x147 = UINT32_MAX;
	volatile uint32_t t30 = 161691U;

	t30 = (x145+(x146&(x147-x148)));

	if (t30 != 2147496277U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x149 = INT16_MAX;
	volatile int8_t x151 = INT8_MIN;
	static volatile int32_t x152 = 127537;
	volatile int64_t t31 = 3501817511097LL;

	t31 = (x149+(x150&(x151-x152)));

	if (t31 != -94898LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x153 = UINT64_MAX;
	static volatile int16_t x154 = -600;
	int32_t x155 = INT32_MAX;
	uint32_t x156 = 1427236U;
	static volatile uint64_t t32 = 3637289179LLU;

	t32 = (x153+(x154&(x155-x156)));

	if (t32 != 2146056327LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x157 = INT64_MIN;
	int16_t x158 = INT16_MIN;
	uint8_t x159 = 3U;
	int32_t x160 = -8383;
	volatile int64_t t33 = INT64_MIN;

	t33 = (x157+(x158&(x159-x160)));

	if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x161 = 7368042186792LLU;
	int64_t x162 = INT64_MIN;
	int16_t x163 = -1;

	t34 = (x161+(x162&(x163-x164)));

	if (t34 != 9223379404896962600LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x169 = UINT16_MAX;
	static int32_t x170 = INT32_MAX;
	uint64_t x171 = 3693341329404309LLU;
	static int64_t x172 = INT64_MIN;
	volatile uint64_t t35 = 1806689614259017LLU;

	t35 = (x169+(x170&(x171-x172)));

	if (t35 != 167391636LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x173 = 13329U;
	int16_t x174 = 693;
	volatile int64_t x176 = INT64_MAX;
	int64_t t36 = -65109324908854898LL;

	t36 = (x173+(x174&(x175-x176)));

	if (t36 != 13330LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x177 = -1LL;
	int16_t x179 = -1510;

	t37 = (x177+(x178&(x179-x180)));

	if (t37 != 2147482149LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x181 = INT8_MIN;
	int64_t x182 = -8454196296335LL;
	int64_t x183 = -1LL;
	volatile int64_t x184 = -1LL;

	t38 = (x181+(x182&(x183-x184)));

	if (t38 != -128LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x185 = INT16_MIN;
	static int8_t x186 = -1;
	uint64_t x187 = 1885273608687088499LLU;
	int8_t x188 = INT8_MIN;
	uint64_t t39 = 232170263738LLU;

	t39 = (x185+(x186&(x187-x188)));

	if (t39 != 1885273608687055859LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x189 = UINT32_MAX;
	uint32_t x190 = 6U;
	uint8_t x191 = UINT8_MAX;
	int32_t x192 = 44847531;
	static volatile uint32_t t40 = 6337U;

	t40 = (x189+(x190&(x191-x192)));

	if (t40 != 3U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x194 = INT16_MIN;
	int8_t x195 = 6;
	int64_t t41 = 522076LL;

	t41 = (x193+(x194&(x195-x196)));

	if (t41 != -130550170516692461LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x197 = INT64_MIN;
	uint64_t x198 = UINT64_MAX;
	volatile uint16_t x199 = 7U;
	int64_t x200 = 705LL;
	volatile uint64_t t42 = 3477641835484235LLU;

	t42 = (x197+(x198&(x199-x200)));

	if (t42 != 9223372036854775110LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int8_t x205 = INT8_MIN;
	volatile int8_t x206 = -24;
	volatile int32_t x207 = 209655;
	volatile int32_t t43 = -125072194;

	t43 = (x205+(x206&(x207-x208)));

	if (t43 != -30371256) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x209 = INT64_MIN;
	int64_t x210 = INT64_MIN;
	volatile uint16_t x211 = 27723U;
	static int16_t x212 = INT16_MIN;
	int64_t t44 = INT64_MIN;

	t44 = (x209+(x210&(x211-x212)));

	if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x213 = -20264;
	uint32_t x214 = 14U;
	uint32_t x215 = UINT32_MAX;
	static uint64_t x216 = 0LLU;
	volatile uint64_t t45 = 1965400579564267LLU;

	t45 = (x213+(x214&(x215-x216)));

	if (t45 != 18446744073709531366LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x217 = INT32_MIN;
	int16_t x218 = INT16_MAX;
	int64_t x219 = 1710LL;
	uint8_t x220 = 8U;

	t46 = (x217+(x218&(x219-x220)));

	if (t46 != -2147481946LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x229 = INT64_MIN;
	int8_t x230 = -1;
	volatile int32_t x231 = -74;

	t47 = (x229+(x230&(x231-x232)));

	if (t47 != 9220346948897315922LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x233 = 1069;
	int32_t x234 = INT32_MIN;
	int32_t x235 = 25609216;
	volatile int32_t t48 = -343304;

	t48 = (x233+(x234&(x235-x236)));

	if (t48 != 1069) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x237 = 5152U;
	volatile uint8_t x238 = 2U;
	uint16_t x239 = 6U;
	volatile int64_t t49 = 537847132652270LL;

	t49 = (x237+(x238&(x239-x240)));

	if (t49 != 5154LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x242 = UINT32_MAX;
	volatile uint64_t t50 = 7622787812LLU;

	t50 = (x241+(x242&(x243-x244)));

	if (t50 != 795455748LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x245 = UINT64_MAX;
	uint32_t x246 = 100U;
	uint32_t x248 = 56098U;

	t51 = (x245+(x246&(x247-x248)));

	if (t51 != 67LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x249 = UINT32_MAX;
	int8_t x250 = 0;
	static int16_t x251 = 5;
	int8_t x252 = INT8_MAX;
	static uint32_t t52 = UINT32_MAX;

	t52 = (x249+(x250&(x251-x252)));

	if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x254 = 0;
	static uint8_t x255 = 1U;
	uint32_t x256 = 85084U;
	int64_t t53 = 0LL;

	t53 = (x253+(x254&(x255-x256)));

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x257 = 87U;
	int32_t x259 = 21076486;
	int8_t x260 = -1;
	volatile uint64_t t54 = 85LLU;

	t54 = (x257+(x258&(x259-x260)));

	if (t54 != 606LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x262 = -7;
	volatile uint16_t x263 = 2563U;
	int64_t t55 = -867170LL;

	t55 = (x261+(x262&(x263-x264)));

	if (t55 != 2688LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x265 = UINT32_MAX;
	uint32_t x266 = 17U;
	volatile int16_t x267 = -1;
	volatile uint32_t x268 = 1813383697U;
	volatile uint32_t t56 = UINT32_MAX;

	t56 = (x265+(x266&(x267-x268)));

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x269 = -107;
	volatile uint32_t x270 = 27U;
	int32_t x272 = INT32_MIN;
	int64_t t57 = 1047802419LL;

	t57 = (x269+(x270&(x271-x272)));

	if (t57 != -80LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x273 = UINT16_MAX;
	uint32_t x274 = 8847U;
	int8_t x275 = -1;
	volatile int16_t x276 = INT16_MIN;
	static volatile uint32_t t58 = 23426800U;

	t58 = (x273+(x274&(x275-x276)));

	if (t58 != 74382U) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x278 = INT64_MAX;
	int16_t x279 = INT16_MIN;
	int8_t x280 = INT8_MAX;
	volatile int64_t t59 = -8148LL;

	t59 = (x277+(x278&(x279-x280)));

	if (t59 != 9223372036854742930LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x281 = 8606778;
	volatile int64_t x283 = -37932877565773970LL;
	static volatile int16_t x284 = -1;
	int64_t t60 = 3910954076831953LL;

	t60 = (x281+(x282&(x283-x284)));

	if (t60 != 9185439159297608617LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x285 = INT8_MIN;
	uint16_t x286 = 1401U;
	volatile int16_t x287 = INT16_MIN;
	static uint16_t x288 = 654U;
	static volatile int32_t t61 = -355990680;

	t61 = (x285+(x286&(x287-x288)));

	if (t61 != 1264) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x289 = UINT16_MAX;
	volatile int32_t x290 = 61;
	int16_t x291 = INT16_MIN;
	volatile int32_t t62 = 90938526;

	t62 = (x289+(x290&(x291-x292)));

	if (t62 != 65535) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x293 = INT16_MAX;
	int64_t x294 = -496650154LL;
	uint64_t x295 = 61590644120853886LLU;
	uint32_t x296 = 170712U;
	volatile uint64_t t63 = 12LLU;

	t63 = (x293+(x294&(x295-x296)));

	if (t63 != 61590643851755525LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x301 = -1;
	volatile uint16_t x302 = UINT16_MAX;
	volatile int32_t x303 = -7898;
	static uint64_t x304 = UINT64_MAX;

	t64 = (x301+(x302&(x303-x304)));

	if (t64 != 57638LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x305 = -1;
	uint32_t x306 = 6U;
	static volatile int64_t x307 = INT64_MIN;
	int64_t x308 = INT64_MIN;
	volatile int64_t t65 = -299921LL;

	t65 = (x305+(x306&(x307-x308)));

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x313 = UINT8_MAX;
	volatile int32_t x314 = 58322;
	uint32_t x315 = 12544U;
	uint64_t x316 = UINT64_MAX;
	uint64_t t66 = 1333428874745941069LLU;

	t66 = (x313+(x314&(x315-x316)));

	if (t66 != 8703LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x317 = INT64_MIN;
	volatile uint16_t x318 = 0U;
	static volatile int8_t x319 = INT8_MIN;
	volatile int64_t t67 = INT64_MIN;

	t67 = (x317+(x318&(x319-x320)));

	if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x321 = INT64_MIN;
	volatile uint16_t x322 = UINT16_MAX;
	uint8_t x323 = UINT8_MAX;
	int64_t x324 = 33281834301156085LL;

	t68 = (x321+(x322&(x323-x324)));

	if (t68 != -9223372036854737398LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x325 = INT8_MIN;
	int64_t x326 = INT64_MIN;
	int8_t x328 = -1;
	static int64_t t69 = 12027003933LL;

	t69 = (x325+(x326&(x327-x328)));

	if (t69 != -128LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x329 = UINT16_MAX;
	volatile uint16_t x331 = 113U;
	uint16_t x332 = UINT16_MAX;

	t70 = (x329+(x330&(x331-x332)));

	if (t70 != 65535U) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x333 = 4771U;
	volatile int8_t x335 = INT8_MAX;
	volatile uint64_t x336 = UINT64_MAX;

	t71 = (x333+(x334&(x335-x336)));

	if (t71 != 4771LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x338 = INT8_MAX;
	int16_t x339 = INT16_MIN;
	int8_t x340 = INT8_MAX;
	int64_t t72 = 45206LL;

	t72 = (x337+(x338&(x339-x340)));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x341 = -4134636;
	volatile int16_t x342 = 7765;
	uint64_t x343 = 14102389968232633LLU;
	uint32_t x344 = UINT32_MAX;
	volatile uint64_t t73 = 4567022LLU;

	t73 = (x341+(x342&(x343-x344)));

	if (t73 != 18446744073705416996LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x345 = INT8_MIN;
	uint64_t x347 = 1305358557533518LLU;
	static uint64_t x348 = 889LLU;
	static uint64_t t74 = 125LLU;

	t74 = (x345+(x346&(x347-x348)));

	if (t74 != 1305358557532416LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x353 = INT64_MIN;
	uint8_t x354 = 36U;
	int64_t x355 = INT64_MAX;
	int64_t x356 = INT64_MAX;
	volatile int64_t t75 = INT64_MIN;

	t75 = (x353+(x354&(x355-x356)));

	if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x357 = INT16_MAX;
	uint32_t x358 = 1456384U;
	int32_t x359 = -3976;
	int32_t x360 = -4;

	t76 = (x357+(x358&(x359-x360)));

	if (t76 != 1486847U) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x361 = UINT64_MAX;
	volatile uint8_t x363 = 73U;
	static uint16_t x364 = 115U;
	volatile uint64_t t77 = 198827823761LLU;

	t77 = (x361+(x362&(x363-x364)));

	if (t77 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x365 = -1;
	int32_t x366 = 3794804;
	volatile int32_t x367 = -143014;
	uint8_t x368 = 1U;

	t78 = (x365+(x366&(x367-x368)));

	if (t78 != 3785039) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x369 = 3192850LLU;
	uint64_t x370 = 1290290003LLU;
	int32_t x372 = INT32_MIN;
	static uint64_t t79 = 129385LLU;

	t79 = (x369+(x370&(x371-x372)));

	if (t79 != 1293482853LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x373 = 2;
	static int32_t x374 = 44;
	volatile int64_t x375 = -176980393LL;
	int16_t x376 = 1;
	static int64_t t80 = 250652506071993LL;

	t80 = (x373+(x374&(x375-x376)));

	if (t80 != 6LL) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int64_t x377 = INT64_MIN;
	int8_t x378 = INT8_MIN;
	uint16_t x379 = 22377U;
	volatile int8_t x380 = -2;
	static int64_t t81 = -113054226LL;

	t81 = (x377+(x378&(x379-x380)));

	if (t81 != -9223372036854753536LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x383 = 7640U;
	volatile uint16_t x384 = UINT16_MAX;
	volatile int64_t t82 = 1197LL;

	t82 = (x381+(x382&(x383-x384)));

	if (t82 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x386 = INT8_MAX;
	uint16_t x387 = 1309U;
	int16_t x388 = -1;
	volatile int32_t t83 = 40648;

	t83 = (x385+(x386&(x387-x388)));

	if (t83 != 285) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x389 = UINT8_MAX;
	int32_t x390 = INT32_MAX;
	uint64_t x391 = 211LLU;
	int16_t x392 = -1;
	uint64_t t84 = 5LLU;

	t84 = (x389+(x390&(x391-x392)));

	if (t84 != 467LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t t85 = -1438016814594699LL;

	t85 = (x393+(x394&(x395-x396)));

	if (t85 != -132429024080049688LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x398 = 2;
	int32_t x399 = INT32_MAX;
	uint32_t x400 = UINT32_MAX;
	int64_t t86 = 14LL;

	t86 = (x397+(x398&(x399-x400)));

	if (t86 != -300547359LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x401 = INT64_MIN;
	volatile uint8_t x402 = 2U;
	volatile int64_t x403 = INT64_MIN;
	uint64_t x404 = UINT64_MAX;
	volatile uint64_t t87 = 11029761923LLU;

	t87 = (x401+(x402&(x403-x404)));

	if (t87 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x405 = INT8_MIN;
	volatile int32_t x406 = INT32_MAX;
	uint32_t x407 = 243121U;
	uint32_t x408 = 38892U;
	static volatile uint32_t t88 = 59643U;

	t88 = (x405+(x406&(x407-x408)));

	if (t88 != 204101U) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x409 = INT64_MIN;
	int8_t x410 = -1;
	uint64_t x411 = 1588121123621LLU;

	t89 = (x409+(x410&(x411-x412)));

	if (t89 != 9309179252137026271LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x413 = -1;
	int8_t x416 = -1;

	t90 = (x413+(x414&(x415-x416)));

	if (t90 != 37808706912927LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x417 = UINT64_MAX;
	volatile int16_t x418 = INT16_MAX;
	static uint16_t x419 = 36U;
	volatile uint64_t t91 = 10LLU;

	t91 = (x417+(x418&(x419-x420)));

	if (t91 != 22537LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x425 = 1;
	int16_t x426 = 1;
	static int32_t x427 = -3199;
	int8_t x428 = INT8_MAX;
	int32_t t92 = 150;

	t92 = (x425+(x426&(x427-x428)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x429 = -55286839215LL;
	static uint8_t x432 = UINT8_MAX;
	int64_t t93 = -19902269968011LL;

	t93 = (x429+(x430&(x431-x432)));

	if (t93 != -55286839215LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x433 = UINT16_MAX;
	int64_t x434 = -1LL;
	int16_t x435 = 21;
	static int16_t x436 = 2;

	t94 = (x433+(x434&(x435-x436)));

	if (t94 != 65554LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x437 = -1;
	volatile int8_t x440 = 35;
	uint32_t t95 = UINT32_MAX;

	t95 = (x437+(x438&(x439-x440)));

	if (t95 != UINT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x441 = 2U;
	uint64_t x442 = 5LLU;
	uint64_t x443 = 584506586805922LLU;
	int16_t x444 = 76;
	uint64_t t96 = 4030849111816LLU;

	t96 = (x441+(x442&(x443-x444)));

	if (t96 != 6LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x448 = -1;
	volatile uint32_t t97 = 3909645U;

	t97 = (x445+(x446&(x447-x448)));

	if (t97 != 7U) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int16_t x450 = -8;
	volatile uint8_t x451 = 29U;
	uint8_t x452 = 52U;
	volatile int32_t t98 = 34022444;

	t98 = (x449+(x450&(x451-x452)));

	if (t98 != -152) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x453 = 67U;
	int8_t x454 = INT8_MAX;
	uint64_t x455 = 12508190LLU;
	int32_t x456 = -1;

	t99 = (x453+(x454&(x455-x456)));

	if (t99 != 98LLU) { NG(); } else { ; }
	
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

